# REGISTRATION-TABLE-1.2.3 — Windows-x64 mcp 命令+函数注册表

## 4 条上游 commands 命令（Ground truth：`raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl` + win-native 具名 wrapper 文件头 `command-name string xref` 标注）

| 命令名 | Win 反编译文件（wrapper） | Win 地址（wrapper） | 入参字段（ground-truth 字面量 key，来自 wrapper pseudocode） | Core 实现身份 |
|---|---|---|---|---|
| `load_mcp_servers` | `load_mcp_servers_0x1401788e0.c` | 0x1401788e0 | 无 | **Unknown** |
| `upsert_mcp_server` | `upsert_mcp_server_0x140177050.c` | 0x140177050 | `name`(4)/`transport`(9)/`enabled`(7)/`command`(7)/`args`(4)/`url`(3)/`headers`(7)/`environment`(11) | **ground-truth**：`upsert_mcp_server_0`@0x1409e86f0（本会话新增捕获） |
| `set_mcp_server_enabled` | `set_mcp_server_enabled_0x140176630.c` | 0x140176630 | `name`(4)/`enabled`(7) | **Unknown** |
| `remove_mcp_server` | `remove_mcp_server_0x140175e20.c` | 0x140175e20 | `name`(4) | **Unknown** |

**注**：字段抽取顺序为 wrapper 代码里条件分支的先后出现顺序，不代表后端 DTO struct 声明顺序，未独立核实。

## core::mcp 16 个 raw .c 文件角色矩阵

| 文件 | 地址 | 大小 | 角色判定 | 置信度 | 判定依据 |
|---|---|---|---|---|---|
| `upsert_mcp_server_0x1409e86f0.c` | 0x1409e86f0 | 0x1290 (800行含地址注释) | `core::mcp::upsert_mcp_server` | **ground-truth** | IDB 内既有跨平台字符串签名匹配注释（前序会话产出），本会话核实其从未落盘/未在 INDEX.jsonl，遂新增捕获 |
| `sub_1409E14D0_0x1409e14d0.c` | 0x1409e14d0 | 181行 | `unquote_toml` | 高置信度 | 处理单引号(39)/双引号(34)反转义 + fallback `toml::Value` 解析路径，与 mac 版本行为描述一致 |
| `sub_1409E1880_0x1409e1880.c` | 0x1409e1880 | 222行 | `insert_mcp_block` | 高置信度 | 引用 55 字节 `aAimamiRelayMan_6` managed marker 字符串（长度校验 `==55`），Vec 元素级插入/移除逻辑 |
| `sub_1409E5800_0x1409e5800.c` | 0x1409e5800 | 230行 | `parse_mcp_document` | 高置信度 | 逐行迭代，`[`(91)/`]`(93) 括号检测，调用 sub_1409E74F0 解析 section 内容，SIMD HashMap 建立映射 |
| `sub_1409E5DC0_0x1409e5dc0.c` | 0x1409e5dc0 | 264行 | `strip_toml_comment` | 高置信度 | UTF-8 感知引号状态机，非引号内 `#`(35) 截断 |
| `sub_1409E6250_0x1409e6250.c` | 0x1409e6250 | 155行 | `replace_string_table` | 高置信度 | 引用字面量 `aNoEntryFoundFo`("no entry found for key"，22B)，排序 key 集合 + SIMD HashMap 批量重插入 |
| `sub_1409E74F0_0x1409e74f0.c` | 0x1409e74f0 | 240行 | `parse_mcp_section_header` | 高置信度 | 内联 8+4 字节 XOR 立即数比较 `0x767265735F70636D`^`0x2E737265` = `"mcp_servers."`(12B 前缀) |
| `sub_1409E7A10_0x1409e7a10.c` | 0x1409e7a10 | 88行 | `editable_mcp_server_table` | 高置信度 | 引用字面量 `aMcpServers`("mcp_servers"，11B) + 错误信息 `"mcp_servers must be a TOML table"` |
| `sub_1409E1D30_0x1409e1d30.c` | 0x1409e1d30 | 1284行 | 未具名确认，与 upsert 路径相关 | **中等置信度** | 内含 `transport`(9B 字面量 key) 三态解析：`"http"`(4B)/`"stdio"`(5B)/`"sse"`(3B，`aSse`)→离散码 0/1/2/3；与 mac 侧 transport 选择器语义吻合，但无具名签名注释，与 `upsert_mcp_server_0` 的关系未解析 |
| `sub_14034CAE0_0x14034cae0.c` | 0x14034cae0 | 52行 | 通用 Drop/dealloc 分发器 | 通用胶水（不认领 mcp 角色） | 按判别式(*a1)分支释放不同大小的内存块，无 mcp 特有字符串引用 |
| `sub_140472C30_0x140472c30.c` | 0x140472c30 | 151行 | 通用 SIMD HashMap::insert | 通用胶水（不认领 mcp 角色） | SwissTable 风格 control-byte SIMD 匹配插入，无 mcp 特有字符串引用 |
| `sub_140983900_0x140983900.c` | 0x140983900 | 92行 | 通用 struct/enum Drop 分发器 | 通用胶水（不认领 mcp 角色） | 按判别式释放 304/176 字节元素的 Vec，无 mcp 特有字符串引用 |
| `sub_140F3FD00_0x140f3fd00.c` | 0x140f3fd00 | 63行 | 通用 BTree/排序 key 查找 | 通用胶水（不认领 mcp 角色） | 二叉树式字符串比较查找，被 unquote_toml 的 fallback 路径调用，但本身是通用查找原语 |
| `sub_140F3FE00_0x140f3fe00.c` | 0x140f3fe00 | 8行 | thunk（跳转到 0x140F409B0，模块外） | 通用胶水（不认领 mcp 角色） | 文件头标注 `attributes: thunk`，真实逻辑在 mcp 文件夹之外，未追踪 |
| `sub_140FC6D90_0x140fc6d90.c` | 0x140fc6d90 | 45行 | 通用 Default 构造 helper | 通用胶水（不认领 mcp 角色） | 构造带惰性缓存静态值的默认结构体，无 mcp 特有字符串引用 |
| `sub_140FC6EA0_0x140fc6ea0.c` | 0x140fc6ea0 | 10行 | 通用 Item 判别式 bool helper | 通用胶水（不认领 mcp 角色） | 检查某值判别式 `!=8`，无 mcp 特有字符串引用 |

**通用胶水代码归属警示**：上述 6 个"通用胶水"文件的文件头标注为 `attributed via call-graph propagation (>=2 same-module callers) (win-native)`——即前序会话的启发式判定它们至少有 2 个调用者都在 mcp 模块内，因此归入 mcp 文件夹。但这类通用运行时/标准库代码（Drop glue、HashMap 操作、BTree 查找等）经常被多个模块共享单态化实例，该启发式在样本量小（只观察到 2 个调用者）时可能误判。本表**不**为这 6 个文件认领任何 mcp 专属业务角色，仅如实记录其归属标注来源。

## Missing（mac 14 个 core 函数中，win 侧未找到确认对应项的 6 个）

| mac 函数名 | mac 地址 | Win 侧状态 |
|---|---|---|
| `load_mcp_servers`（核心读路径） | 0x100843d20 | Unknown |
| `quote_toml` | 0x100843470 | Unknown |
| `prepare_existing_mcp_block` | 0x10084c120 | Unknown |
| `set_optional_string`（mac 1.2.3 NEW-delta） | 0x10084a610 | Unknown |
| `remove_mcp_server`（核心实现，mac 1.2.3 NEW-delta） | 0x100845f30 | Unknown |
| `set_mcp_server_enabled`（核心实现） | 0x10084aad0 | Unknown |
