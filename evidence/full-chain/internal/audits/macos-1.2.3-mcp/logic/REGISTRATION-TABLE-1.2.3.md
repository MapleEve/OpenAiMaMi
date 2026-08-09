# REGISTRATION-TABLE-1.2.3 — macOS mcp 命令注册表

4 条上游 `commands::mcp` 命令（Ground truth：`raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl`，命令名精确匹配 `commands/mcp/*.c` 文件名，无需前缀/后缀猜测）。

| 命令名 | Mac 反编译文件（wrapper） | Mac 地址（wrapper） | 对应 core 实现文件 | Mac 地址（core） | 前端调用方（wrapper 方法名） | 备注 |
|---|---|---|---|---|---|---|
| `load_mcp_servers` | `load_mcp_servers_0x100352150.c` | 0x100352150 | `core/mcp/load_mcp_servers_0x100843d20.c` | 0x100843d20 | `T.loadMcpServers` / `useQuery(["mcp-servers"])` | 无入参；读取 config 文件 + 自研极简 TOML 段落扫描器抽取全部 `mcp_servers.*` 条目 |
| `upsert_mcp_server` | `upsert_mcp_server_0x100353380.c` | 0x100353380 | `core/mcp/upsert_mcp_server_0x100846d50.c` | 0x100846d50 | `T.upsertMcpServer` / Dialog 保存按钮 | 入参 `{...e, args, headers, environment}`；调用 2 次新增函数 `set_optional_string`（推断处理 command/url 二选一字段） |
| `set_mcp_server_enabled` | `set_mcp_server_enabled_0x1003542e0.c` | 0x1003542e0 | `core/mcp/set_mcp_server_enabled_0x10084aad0.c` | 0x10084aad0 | `T.setMcpServerEnabled` / 每行 Switch | 入参 `{name, enabled}`；走 `editable_mcp_server_table` + `toml_edit` 精确表编辑路径 |
| `remove_mcp_server` | `remove_mcp_server_0x100352890.c` | 0x100352890 | `core/mcp/remove_mcp_server_0x100845f30.c`（**1.2.3 NEW-delta**） | 0x100845f30 | `T.removeMcpServer` / 删除确认 AlertDialog | 入参 `{name}`；core 实现是 1.2.3 新增函数（文件头注记，未独立复核） |

## core::mcp 辅助函数（非独立命令，被上表 4 个 core 实现函数调用）

| 函数 | 地址 | 用途 | 版本注记 |
|---|---|---|---|
| `parse_mcp_document` | 0x100849c60 | 把 config 全文按行扫描，识别 `[section]` 边界，构建 section→body HashMap | 基线 same-set |
| `parse_mcp_section_header` | 0x10084ba90 | 解析单个 `[...]` 段落头，识别 `mcp_servers.<name>`（12 字节前缀 `"mcp_servers."`）前缀并 unquote 出 server name | 基线 same-set |
| `editable_mcp_server_table` | 0x10084bee0 | 在 `toml_edit::Document` 中定位/创建 `mcp_servers.<name>` 可编辑 Table（`"mcp_servers"` 11 字节字面量为真实 key；文件中该字符串前后有明显的 IDA 字符串池串接展示假象，已在 evidence 中标注不作为单一字面量采信） | 基线 same-set |
| `insert_mcp_block` | 0x1008438d0 | 原始文本层插入新 server 段落，替换已存在的同名旧段落（若存在），带 `# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)` 55 字节 marker 定位插入点 | 基线 same-set |
| `prepare_existing_mcp_block` | 0x10084c120 | 定位已存在的 `mcp_servers.<name>` 段落文本范围，供 upsert/remove 走文本层替换/删除路径 | 基线 same-set |
| `quote_toml` | 0x100843470 | 字符串转义为 TOML 双引号字面量（转义 `\`/`"`） | 基线 same-set |
| `unquote_toml` | 0x100843560 | TOML 字面量反转义（含单引号/双引号两种字面量形式，及 fallback 走 `toml::Value::from_str`+index 解析） | 基线 same-set |
| `strip_toml_comment` | 0x10084a230 | 去除单行末尾的 `#` 注释 | 基线 same-set |
| `replace_string_table` | 0x10084a6d0 | 在 `toml_edit::Table` 层批量替换字符串值（用于 env/headers 一类的 map 字段全量重写） | 基线 same-set |
| `set_optional_string` | 0x10084a610 | 若值非空则 `toml_edit::Table::insert`，否则 `toml_edit::Table::remove`（可选字段的置空即删除语义） | **1.2.3 NEW-delta**（vs 1.2.2 新增，文件头继承注记，未独立复核） |

**入参/出参字段**：未系统抽取（dim4 gap），本表只提供命令↔函数地址↔前端调用点的注册映射与调用关系，不是 DTO 契约文档。字段名（`transport`/`command`/`args`/`url`/`env`/`headers`）见 README.md § Interface / Error / Boundary 的推断级记录。
