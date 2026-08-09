# FULL-CHAIN-1.2.3 — macOS mcp 端到端调用链

来源：本会话逐个读完的 18 个 `.c` 文件（`raw/aimami/1.2.3/macos-arm64/{commands,core}/mcp/ida/pseudocode/*.c`）+ 既有前端逆向文档 `raw/aimami/1.2.3/macos-arm64/frontend/pages/mcp-sessions-settings-skills-frontend.md` §1。

## 1. load_mcp_servers（只读链）

```
前端 McpPage: useQuery(["mcp-servers"], T.loadMcpServers, staleTime:Infinity)
  → invoke("load_mcp_servers")  [无参数]
  → commands::mcp::load_mcp_servers（wrapper @0x100352150）
      - OnceBox 惰性初始化 mutex，Mutex::lock 加锁（含 poisoned-lock 检测分支）
      - core::mcp::load_mcp_servers（@0x100843d20）
          - std::fs::metadata 探测文件是否存在（NotFound → 直接返回空列表，非错误）
          - std::fs::read_to_string 读取全文（IO 错误 → CoreError 向上传播）
          - 自研极简扫描器逐行迭代（非 toml_edit 全量 AST 解析）：
              strip_toml_comment（去 # 注释）→ trim → 若形如 `[...]`
              → parse_mcp_section_header（识别 `mcp_servers.<name>` 12 字节前缀 + unquote 段名）
              → 匹配则把该 section 视为当前活跃 server，逐字段收集：
                  key 长度分支判定字段类型（3='env'?/4='args'/7='command'/9='disabled'? 等，
                  具体字节匹配未逐一复核，仅按调用点常量长度分类，见 core 函数 case 分支）
              → unquote_toml 反转义字段值 → 累积进 HashMap<name, fields>
          - 最终把 HashMap 转成排序后的 Vec<McpServerSummary>（sort 走 driftsort/insertion 视规模）
      - Mutex::unlock 释放锁
  → 返回 CoreEnvelope<Vec<McpServerSummary>>（成功）或 CoreError（失败：poisoned lock / IO 错误）
```

**叶子**：`std::fs::metadata` / `std::fs::read_to_string`（真实文件系统 leaf）。

## 2. upsert_mcp_server（读-改-写循环，CAS 重试）

```
前端 Dialog 保存: c.mutate({...})
  → 组装 {name, transport, command, args:逗号分隔→数组, url, env:多行文本→对象, headers:多行文本→对象}
  → invoke("upsert_mcp_server", {...})
  → commands::mcp::upsert_mcp_server（wrapper @0x100353380）
      - CodexMutationGate::lock(reason="updating an MCP serverchanging an MCP server"　←IDA字符串池串接展示假象，
        实为独立的 "updating an MCP server" 描述串，用于跨命令互斥日志/诊断)
      - core::mcp::upsert_mcp_server（@0x100846d50）
          - std::path::Path::parent + DirBuilder::_create 确保 config 目录存在（失败 → CoreError）
          - 最多 3 轮循环：
              codexmate_lib::core::codex_config::read_text 读取现有内容
              → core::mcp::parse_mcp_document 解析出 section 范围 HashMap（含起止行/字节偏移）
              → 若目标 name 已存在 section：
                  core::mcp::prepare_existing_mcp_block 定位旧文本范围
                  → 格式化新字段（quote_toml 转义 command/args/url/env/headers 各值）
                  → insert_mcp_block 用新格式化文本替换旧范围（含 managed-block marker 处理）
                否则（新增）：
                  insert_mcp_block 在 managed-block marker 末尾追加新段落文本
              - 中途 2 处调用 core::mcp::set_optional_string（key 长度 7/3，推断 command/url 二选一
                按 transport 类型有条件写入或删除）——但这 2 处出现在 upsert_mcp_server 函数体内偏
                toml_edit 分支（与主文本层分支并存，具体触发条件未逐分支复核）
              → codexmate_lib::core::relay::atomic_write::write_atomic_with_mode 原子写回
              → 立即 read_text 读回校验内容与刚写入内容匹配（memcmp）
              → 匹配则跳出循环成功；不匹配则重试（最多 3 轮，第 3 轮仍不匹配 → CoreError 含
                "attempted N times" 类描述）
      - Mutex::unlock / CodexMutationGate 释放
  → 返回 CoreEnvelope<Vec<McpServerSummary>>（更新后的全量列表）或 CoreError
```

**叶子**：`std::fs::DirBuilder::_create`（目录创建）/ `codexmate_lib::core::codex_config::read_text`（读）/ `codexmate_lib::core::relay::atomic_write::write_atomic_with_mode`（原子写，真实文件系统 leaf）。

## 3. set_mcp_server_enabled（toml_edit 精确表编辑路径）

```
前端每行 Switch: E.mutate({name, enabled})
  → invoke("set_mcp_server_enabled", {name, enabled})
  → commands::mcp::set_mcp_server_enabled（wrapper @0x1003542e0）
      - CodexMutationGate::lock(reason="changing an MCP server state" 描述串)
      - core::mcp::set_mcp_server_enabled（@0x10084aad0）
          - DirBuilder 确保目录存在
          - 最多 3 轮循环：
              read_text 读取现有内容
              → core::mcp::prepare_existing_mcp_block 定位 name 对应段落
              → 若段落不存在（本次为空 name 场景，理论上前端不会发起）→ 走
                toml_edit::Document::from_str 全量解析 + editable_mcp_server_table
                定位/创建可编辑 Table（含 "mcp_servers" 顶层表存在性检查与创建）
              → toml_edit::table::Table::insert 写入字面量 7 字节 key（推断 "disabled"，
                值为 enabled 取反的 bool）
              → toml_edit Document 编码回文本（Display::fmt）
              → write_atomic_with_mode 原子写回 + read_text 读回校验
              → CAS 成功跳出；不成功重试（最多 3 轮）
      - 解析后同时重新 load_mcp_servers 一次以构造返回的最新全量列表
  → 返回 CoreEnvelope<Vec<McpServerSummary>> 或 CoreError
```

**叶子**：同上，另加 `toml_edit::Document::from_str` / `toml_edit::table::Table::insert`（结构化 TOML 编辑 leaf，非纯文本拼接）。

## 4. remove_mcp_server（文本层 marker 移除路径）

```
前端删除确认 AlertDialog: D.mutate(name)
  → invoke("remove_mcp_server", {name})
  → commands::mcp::remove_mcp_server（wrapper @0x100352890）
      - CodexMutationGate::lock(reason="removing an MCP server" 描述串)
      - core::mcp::remove_mcp_server（@0x100845f30，1.2.3 NEW-delta）
          - DirBuilder 确保目录存在
          - 最多 3 轮循环：
              read_text 读取现有内容
              → core::mcp::parse_mcp_document 定位段落 HashMap
              → hash 查找 name 对应条目；未找到 → 直接返回当前 read_text 内容不变（视为幂等成功）
              → 找到则：从段落 Vec 中按下标 remove（memmove 收缩），
                重新 join_generic_copy 拼接剩余全部文本（含 managed-block marker 起始锚点处理，
                保证结尾换行符正确性）
              → write_atomic_with_mode 原子写回 + read_text 读回校验（memcmp 一致才算成功）
              → 不一致重试（最多 3 轮，超出用 log::Log 记录 warn 级日志 + 格式化错误信息返回）
          - 成功后调用 core::mcp::load_mcp_servers 重新加载全量列表作为返回值
      - Mutex::unlock
  → 返回 CoreEnvelope<Vec<McpServerSummary>>（移除后的全量列表）或 CoreError
```

**叶子**：同 upsert；另有 `log::__private_api::GlobalLogger::log`（调试日志 leaf，仅在 `MAX_LOG_LEVEL_FILTER` 门控打开时触发）。

## 共性观察

- 三个 mutating 命令（upsert/set_enabled/remove）共享同一个「读-改-写-读回校验-重试≤3轮」乐观并发模式，且都经 `CodexMutationGate::lock` 序列化——该 gate 与 relay 模块共用同一把锁（`codexmate_lib::core::relay::codex_mutation::CodexMutationGate`），意味着 mcp 与 relay 的配置写入操作互斥（跨模块耦合，未在 dim3 call-tree 之外单独验证锁粒度）。
- `insert_mcp_block`/`prepare_existing_mcp_block` 为纯文本层编辑路径（用于新增段落 / upsert 的段落替换 / remove 的段落删除），`editable_mcp_server_table` 为 `toml_edit` 结构化编辑路径（仅 `set_mcp_server_enabled` 使用）——同一份 config 文件被两套不同精度的编辑机制交替修改，理论上存在格式漂移风险（例如 toml_edit 精确编辑可能不保留原文本层插入时的注释/格式化风格），但本次未验证实际输出差异。
- `set_optional_string` 的新增（1.2.3 delta）与 `upsert_mcp_server` 内部对 command/url 的条件写入直接对应前端新增的 `transport: stdio|http|sse` 三态选择器，是本次读盘发现的最强版本演进证据链（前后端交叉一致）。
