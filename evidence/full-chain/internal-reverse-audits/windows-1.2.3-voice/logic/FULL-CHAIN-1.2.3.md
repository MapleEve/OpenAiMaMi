# Full-Chain — AiMaMi 1.2.3 windows-x64 voice

生成时间：2026-07-26（reduce pass）。承接 `REGISTRATION-TABLE-1.2.3.md`；本文件记录端到端调用链证据（frontend invoke → Tauri wrapper → 核心逻辑 → leaf），按证据强度分层呈现，不为未验证部分编造闭合。

## 0. 方法论与本轮工具使用记录

本轮为 reduce/distillation pass，**未持有 IDA MCP 工具作为常驻装备**（无 `mcp__ida-pro-mcp-*` 前缀工具），改为通过既有脚本 `idacall.py`（JSON-RPC 一次性客户端，位于 `/private/tmp/verify_win_iso/idacall.py` 等多个临时目录，为既有 pass 遗留工具，非本轮新增）对 `<host>:13337/mcp` 发起只读验证调用。红线 17 IDA_LIVE_GATE 已核：

```
server_health → {"status":"ok","uptime_sec":238651.079,"idb_path":"E:\\binary\\AiMaMi.1.2.3 win64.exe.i64",
"module":"AiMaMi.1.2.3 win64.exe","imagebase":"0x140000000",
"auto_analysis_ready":true,"IDA decompiler_ready":true,"strings_cache_ready":true}
```

本轮实际调用的工具与用途：
- `get_bytes`：解码两个 xmmword rodata 常量的原始字节，排除 `refresh_single_account_usage`（28 字符）作为 `cancel_voice_trigger_capture`（同为 28 字符）候选的假设。
- `decompile`：对 4 个此前标记 `blocked` 的命令候选 owner 地址（`0x140170790`/`0x140170D00`/`0x140171760`/`0x140182C20`）取得完整伪代码 + xref 列表，**读出的是 live IDB 中已存在的信息**（他人此前 pass 留下的中文分析注释和真实函数名），本轮未做任何 rename/comment/patch 写入。
- `lookup_funcs`：精确名称查找 `cancel_voice_trigger_capture`，返回 `Not found`。
- `find_regex`：对整个二进制字符串缓存精确匹配 `cancel_voice_trigger_capture`，返回 `n:0`（零命中，`strings_cache_ready=true` 排除冷缓存假阴性）。
- `search_text`：两次尝试（首次 30s、重试 120s）均超时（`exit 124`），未获得结果，如实记录为**本轮未完成的尝试**，不当作"确认无 gap"。

本轮**未**：写任何新 raw `.c` 文件到 SMB（红线 5/11/12 的 claim-first + owner-gate 流程未走，超出本次 reduce 任务授权范围）；未做 rename/set_comments/idb_save 写回；未新增 INDEX.jsonl 条目。以上 4 个地址的完整伪代码目前只存在于本文档的引用摘录和 live IDB 里，**未materialize 成独立 raw leaf 文件**——列入 `next_producer_steps`。

## 1. 通用命令包装骨架（适用于绝大多数 29 个 `commands/` 目录下的命令）

对 `load_voice_asr_config`/`save_voice_asr_config`/`resolve_voice_vocabulary_app_info` 等十余个文件的直接阅读确认了一个高度一致的骨架（Tauri command handler 编译产物的标准形状）：

```
<command_fn>(a1: InvokeContext) -> Result
  1. sub_141684120(dst, src, size)         // 拷贝 invoke message/resolver 上下文（memcpy 变体）
  2. sub_1409757B0(&out, [cmd_name, cmd_name_len, field_name, field_name_len, src_ptr, resolver_ptr])
                                            // 反序列化单个具名字段；每个字段一次调用，链式 if/else 嵌套
  3a. 成功路径 → sub_140434380 / sub_1404346B0 / sub_1404356E0（按返回结构体大小分派的同族函数）
                                            // 序列化成功响应，写回 invoke resolver
  3b. 失败路径（字段缺失/反序列化失败）→ sub_14047E370
                                            // 序列化错误响应（参数缺失类错误）
  4. sub_140014270 / commands_response_bundle_drop(a1)
                                            // 清理 invoke 上下文，函数返回
```

这 5 个通用 helper（`sub_1409757B0`/`sub_141684120`/`sub_140434380` 族/`sub_14047E370`/`sub_140014270`）在**全部已读文件中反复出现，且本身未作为独立 raw `.c` 文件存在于 voice 域任何目录**——搜索其地址作为文件名在整个 `raw/aimami/1.2.3/windows-x64/` 树下零命中。这些是**跨命令共享的通用 serde/响应基础设施**（很可能属于 `codexmate_lib::commands::response` 或类似的公共模块，不特定于 voice），本轮未展开逆向（超出 voice 模块范围，且属于全应用共享基础设施，逆向一次即对所有模块通用，建议作为独立工作单处理而非在 voice 包内重复）。

**dim3 对这一骨架的定位**：从 Tauri wrapper 到"业务分支点"（即字段反序列化完成后调用的下一个函数）的调用链是清楚的；但骨架本身之后，**每个命令各自唯一的业务逻辑委托目标**（例如 `resolve_voice_vocabulary_app_info` 委托给 `read_app_bundle_identity_fields`）才是真正区分命令行为的地方，也是 call-tree-to-leaf 工作应该聚焦的部分。本轮只对以下 §2 中列出的少数命令追到了这一层。

## 2. 已追踪到业务委托层（部分 dim3 闭合）的命令

### 2.1 `test_voice_asr_config` — ASR 配置连通性测试

```
test_voice_asr_config (0x14016ced0, commands/ida/pseudocode/)
  反序列化 4 字段 {asrProvider, asrApiKey, asrModel, asrBaseUrl}
  → sub_140755DC0 (0x140755dc0, commands/voice/ida/pseudocode/, 535 行, module-attributed codexmate_lib/commands/voice)
      provider 字符串分支判定（8 字节魔数比对）：
        - provider[0:11] == "appleSpeech" → 走本地 Apple Speech 分支：
            qmemcpy 构造 "Apple Speech" 字面量（12 字节）
            → sub_140ACDB60(&v49, v62)  // 见下方 2.1.1
        - provider[0:8]=="aliyunFu" 类判定（疑似 "aliyunFunASR" 前缀，未完整确认全名）分支：
            → 走真实网络分支：sub_1406C7390(...) 构造 HTTP 请求，第三参 aAuthorization_1
              （"Authorization" 头名符号，字符串偏移常量 13）
            → sub_14103CF70 解析响应
            → 状态码判定 (unsigned __int16)(v75 - 200) < 0x64u   // 经典 HTTP 2xx (200-299) 检测惯用法
            → 成功: sub_14101E160 处理响应体, 走 sub_14149C0F0 序列化
            → 失败/字段不完整: qmemcpy "ASR config is incomplete"（24 字节字面量）→ 走 2.1.1 包错误串
  → sub_140ACDB60 (0x140acdb60, 同目录, 37 行) — 通用响应 envelope 构造 helper：
      接收一个 (ptr,len) 字符串 payload，构造固定形状的返回结构（含 2 字节 "ok" 常量字段 + 7 字节另一常量字段）；
      被 sub_140755DC0 在多个分支复用（成功/Apple Speech 分支/错误分支），推断是一个通用
      "wrap value as result envelope" helper，非 test_voice_asr_config 专属。
```

**dim2**：owner 真实、非失败反编译，两级都确认。
**dim3**：从 command wrapper 追到了真实业务逻辑（HTTP 调用 + provider 分支），但未追进 `sub_1406C7390`（HTTP 客户端构造）、`sub_14103CF70`（响应解析）内部——这两者可能是 reqwest 配置层（按 cookbook §3 规则，应读调用点配置链而非逆库内部，但本轮未展开该子步骤）。
**dim4**：错误路径确认（"ASR config is incomplete" 明确错误信息），成功响应结构未完全解析（仅知道走 `sub_14149C0F0` 序列化路径，具体字段未拆）。
**side-effect**：一次外发 HTTP 请求（无持久化写），非破坏性。

### 2.2 `generate_voice_prompt` — LLM Token 闭包链

```
generate_voice_prompt (0x140ce21d0, codexmate_lib/ida/pseudocode/, 2919 行——本模块最大文件，未全文精读)
  → ...（内部 async 状态机，未完整展开）...
  → {{closure}}::{{closure}}::{{closure}} (0x140abe3c0, commands/voice/ida/pseudocode/__u7b__u7b_closure_u7d__u7d__17,
      44 行，跨平台字符串签名匹配已确认 = mac 同名三层嵌套闭包)
      内部逻辑：拷贝一段字节缓冲(a2,a3) → sub_140063A40(...,aVoiceLlmToken,15,...)
                符号 aVoiceLlmToken 长度声明为 15，与 "voice_llm_token" 恰好 15 字符吻合（推断，未取字节确认）
                → 若结果非 -1 sentinel，调 sub_140A8E080(v11) 做进一步处理
```

**dim2**：闭包本体真实存在，已 module-attributed + 跨平台签名匹配确认（非猜测）。
**dim3**：只追了 2919 行主体中的一个末端闭包，主体本身（LLM prompt 生成核心逻辑、可能包含真正的 HTTP 调用到 LLM provider）**未展开**——2919 行超出本轮预算，标记为 `blocks_start`（后续需分块 `basic_blocks` + 分段 `decompile` 处理，参照 ida-deep-recovery.md §1 "函数体超大" 破法）。
**dim4**：仅知道涉及一个疑似 "voice_llm_token" 相关的查找/校验步骤，具体语义（token 存在性检查？token 值读取？）未确认。

## 3. 本轮 live-IDA 读出的 4 个此前 blocked 命令的完整业务链（read-only 验证，非本轮新逆向标注）

以下 4 条链的完整伪代码 + 分析注释**已存在于 live IDB**（有中文注释 `【逻辑·win逆向】`，明显是此前某次未记录进本 audits 包的 pass 留下的），本轮只是 `decompile` 只读取出，未做任何写入：

### 3.1 `resolve_voice_vocabulary_app_info` (owner `0x140170790`)

```
反序列化 {path} (字段名 "path", 4 字节)
→ read_app_bundle_identity_fields (0x14075ad60, 真实业务函数名，非 sub_)
    按 path 解析应用信息 → 返回 bundleId + 应用显示名
→ 成功: sub_1404356E0 序列化响应
→ 失败(path 缺失): sub_14047E370 错误响应
```
无持久化写/删除。cross-check：注释标注 mac 对应地址 `0x100694140`。

### 3.2 `upsert_voice_vocabulary_app_scope` (owner `0x140170D00`)

```
反序列化 {repo(State), bundleId, name, path}（4 个字段，链式反序列化，任一失败即短路到错误响应）
→ sub_140003640 获取 State<Repo>
→ sub_14075B300(repo, bundleId, name, path)  ⚠ 持久化写（IDB 注释明确标注）
    业务：upsert 词表的应用作用域记录
→ 成功: sub_1404346B0 序列化响应
→ 失败(任一字段缺失/repo 提取失败): sub_14047E370 错误响应
```
cross-check：mac `0x100694770`。

### 3.3 `remove_voice_vocabulary_app_scope` (owner `0x140171760`)

```
反序列化 {repo(State), appBundleId}
→ sub_140003640 获取 State<Repo>
→ sub_14075A760(repo, appBundleId)  ⚠ 删除数据（IDB 注释明确标注）
    业务：删除该 app 作用域下的词表记录
→ 成功: sub_1404346B0 序列化响应
→ 失败: sub_14047E370 错误响应
```
cross-check：mac `0x100693cd0`。

### 3.4 `set_voice_trigger_listener_suppressed` (owner `0x140182C20`)

```
反序列化 {app, suppressed(bool)}
→ sub_1401C3650 / sub_1401BCE80 提取运行时状态句柄
→ sub_140886400 应用 suppressed 状态变更（切换 trigger listener 抑制开关）
→ 成功: sub_140acf2f0 (commands_ok_success_result_new) → sub_140438810 序列化 Ok()
→ 失败: sub_14047E370 错误响应
```
cross-check 备注："mac commands::voice (fn renamed)"——暗示 mac 侧此函数在某次 pass 中已被重命名，本轮未去 mac 包核实新名，留给后续 producer。

**这 4 条链的证据强度已经超过其余 32 个 `owner_existence_mapped` 命令**（后者大多止步于"文件存在 + 非失败反编译"，未必追过业务委托层）；但仍不满足 `strictImplementationUse`（dim3 只到第一层委托，未到 fs/http/registry 意义上的最终 leaf；dim6 未产出；dim1 仍只是 wrapper 级），因此本包 gate-report.json 仍将其归入 `owner_existence_mapped_commands`，不做档位跃升，只在描述文本中注明证据强度差异。

## 4. `cancel_voice_trigger_capture` — 排除记录（非解决）

三种假墙排除尝试，均记录失败原因（按红线 13 反作弊门要求）：

| 尝试 | 方法 | 结果 |
|---|---|---|
| 1 | 全 raw 树文件名/内容 grep 精确串 | 0 命中（frontend 的 `ipc-contracts.jsonl`/`frontend-control-flow.jsonl` 之外，无任何 `.c` 文件含此串） |
| 2 | 读取 `open_path` 共享 ICF 调度器全部 26+ 命令分支 | 该调度器自身 header 声明的命令列表中不含 `cancel_voice_trigger_capture`（该调度器本身也非详尽覆盖全部命令，只是本轮找到的其中一个共享点） |
| 3 | live IDA `find_regex` 全二进制字符串缓存精确匹配 | `n:0`，`strings_cache_ready=true`（非冷缓存假阴性） |
| 4（未完成） | live IDA `search_text` 全文本搜索 | 两次调用（30s / 120s 超时）均 `exit 124` 超时，**未获得结果**，不作为任何方向的证据 |

**结论**：`cancel_voice_trigger_capture` 在本轮可用的搜索手段下确认字符串层面不存在于当前二进制。合理但未证实的假设：该命令可能是纯前端语义（`AbortController.abort()` 取消一个尚未 resolve 的 `start_voice_capture` invoke promise，从不产生新的后端 invoke），因此不需要独立后端 command。此假设**不作为 accepted_unknown 或 confirmed-absent 的替代**，该命令继续记 `truly_undone`，等待前端控制流（dim1 UI walkthrough）确认调用点是否真的触发 `invoke("cancel_voice_trigger_capture")` 还是仅调用一个本地 `AbortController`。

## 5. 未闭合项清单（诚实边界，本轮之后仍然开放）

- 上文 §1 提到的 5 个通用响应基础设施函数（`sub_1409757B0` 等）未逆向，跨全应用共享，建议独立工作单处理。
- `generate_voice_prompt` 主体 2919 行未展开（§2.2）。
- 131 个原有 unnamed sub_（aliyun_asr/llm/runtime/tray/workspace/voice_trigger_windows 内）身份仍未个体解析，module-attribution 归属不变。
- `asr/` 目录 3 个文件（本轮新发现，见 REGISTRATION-TABLE §3）未个体命名，仅确认 module 归属为 `codexmate_lib/core/voice/asr`。
- `workspace/serialize_2` 与 `models/serialize_VoiceWorkspacePayload` 疑似重复实现未消歧（REGISTRATION-TABLE §4 观察项 1）。
- dim4 对全部 37 命令的响应 payload/错误 envelope 完整字段仍未产出（除 §2-3 列出的少数命令外）。
- dim6（test/acceptance mapping）全模块未产出，未变。
- 4 个本轮读出的命令（§3）尚未把其伪代码正式落成独立 raw `.c` leaf 文件（目前只存在于 `open_path` 共享文件内部和 live IDB），建议下一位 producer 补做 `define_func`/提取/`idb_save`，形成 `raw/aimami/1.2.3/windows-x64/commands/voice/` 下的独立文件。
