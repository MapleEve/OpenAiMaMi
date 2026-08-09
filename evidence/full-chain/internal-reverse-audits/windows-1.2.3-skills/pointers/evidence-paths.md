# Evidence Pointers — windows-1.2.3-skills

所有路径均相对 `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}`（本会话解析为 ``，写盘全程使用硬编码 SMB 绝对路径，未使用 env-var 表达式，遵循 SKILL.md 红线16）。本文件只给指针，不复制 raw 内容。

## raw evidence（backend, Windows，原有 6 个，本轮未改动内容）

- `raw/aimami/1.2.3/windows-x64/skills/ida/pseudocode/backup_skill_directory_0_0x140ad8b50.c`（跨平台命名确认，完整）
- `raw/aimami/1.2.3/windows-x64/skills/ida/pseudocode/publish_staged_skill_0x140ad5ed0.c`（跨平台命名确认，完整）
- `raw/aimami/1.2.3/windows-x64/skills/ida/pseudocode/sub_1408A4BA0_0x1408a4ba0.c`（未解析身份，完整）
- `raw/aimami/1.2.3/windows-x64/skills/ida/pseudocode/sub_140AD6680_0x140ad6680.c`（未解析身份，完整）
- `raw/aimami/1.2.3/windows-x64/skills/ida/pseudocode/sub_140B0FD50_0x140b0fd50.c`（未解析身份，完整）
- `raw/aimami/1.2.3/windows-x64/skills/ida/pseudocode/sub_1414860D0_0x1414860d0.c`（未解析身份，完整）

## raw evidence（backend, Windows，本轮新增 7 个，本会话直接 decompile + Write 落盘）

- `raw/aimami/1.2.3/windows-x64/skills/ida/pseudocode/import_skill_0x140c9a610.c`（ground-truth 命名，完整 44823 字符）
- `raw/aimami/1.2.3/windows-x64/skills/ida/pseudocode/load_installed_skills_0x140c9ec80.c`（ground-truth 命名，完整 37177 字符）
- `raw/aimami/1.2.3/windows-x64/skills/ida/pseudocode/delete_skill_backup_0x140c92a80.c`（ground-truth 命名，**截断** 1023/48033 字符）
- `raw/aimami/1.2.3/windows-x64/skills/ida/pseudocode/restore_skill_backup_0x140c95480.c`（ground-truth 命名，完整 44895 字符）
- `raw/aimami/1.2.3/windows-x64/skills/ida/pseudocode/remove_skill_0x140c97d50.c`（ground-truth 命名，完整 44726 字符）
- `raw/aimami/1.2.3/windows-x64/skills/ida/pseudocode/load_skill_backups_0x140c9ced0.c`（ground-truth 命名，完整 31948 字符）
- `raw/aimami/1.2.3/windows-x64/skills/ida/pseudocode/backup_skill_directory_0x1409060c0.c`（跨平台命名匹配，**截断** 1023/66937 字符）

## raw evidence（frontend）

- `raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl`（131 条 win 命令全量映射；本轮 grep `.command` 字段核实 6 条 skill 命令）

## IDB 活体证据（本轮，非文件，记录方法与结果供复核复现）

- `server_health`：`{"status":"ok","IDA decompiler_ready":true,"module":"AiMaMi.1.2.3 win64.exe","idb_path":"<二进制路径>\\AiMaMi.1.2.3 win64.exe.i64"}`（红线17 <门控> 起手核验，命中）
- dirtree BFS（`IDA Python`，`ida_dirtree.get_std_dirtree(DIRTREE_FUNCS)`，队列式非递归遍历，避免 `chdir` 状态被递归破坏——本轮实测踩坑：首次写递归版本因函数作用域看不到外层 `dt` 全局变量报 `NameError`，改为扁平队列写法后成功）：`/codexmate_lib` 下 80 个子目录，其中 `core/skills`（7 个函数）与 `commands/skills`（移动前 0 个）
- 函数名/注释 `skill` 子串扫描（`idautils.Functions()` 全量遍历 + `idc.get_func_name`/`idc.get_func_cmt`）：14 个命中，13 个已分类（7 core + 6 commands），1 个未核实（`serialize_10` @ `0x140aa9980`，IDA 连接中断，1 次重试后按红线17停止）
- `callees()`：确认 `backup_skill_directory`（`0x1409060c0`）调用 `sub_1408A4BA0`（`0x1408a4ba0`）；其余 6 个 command handler 的直接 callee 列表中**未**发现对 7 个 core-helper 函数的直接调用（推测为 Rust async 内联导致核心逻辑直接内联进 command handler 体内，而非委托调用；未逐行验证此推测）
- dirtree 移动：`dt.find_entry`+`dt.get_abspath`+`dt.rename`，6/6 全部 `rc=DTE_OK=0`
- 注释：`idc.set_func_cmt(ea, ..., 1)`，7/7 全部 `set_ok=true`
- `<工具调用>`：`{"ok":true,"path":"<二进制路径>\\AiMaMi.1.2.3 win64.exe.i64"}`

## 历史版本基线（consumed，参考，未本轮重新核对）

- `internal-reverse/audits/windows-1.0.9-skills/` — 上一 canonical Windows 版本包
- `internal-reverse/audits/macos-1.2.3-skills/` — 同版本 macOS 姊妹包，本包的 RULE8 骨架主要蓝本（用户指令明确：优先用 macos-1.2.3-skills 若已存在）
- `internal-reverse/audits/windows-1.2.3-relay/` — 同平台同版本姊妹包，本包 manifest/gate-report 的 win 专有字段格式参考（如 `sha256_binary`）

## 本轮方法论声明

本轮为**蒸馏 + 现场补缺混合**：起点是归并已有 6 个 raw .c（用户指令原意），但 Angle-A 活体 dirtree 核验发现 raw 证据与 IDB 实际归属状态不一致（IDB 里已有 7 个 core 函数、6 个 command handler 共 13 个，raw 目录只有 6 个文件），遂当场补做剩余 7 个的反编译 + 落盘 + 归目录树 + IDB 注释 + `<工具调用>`。角度A/C 均为 LIVE IDA 调用（非文本 grep 代理，优于 macos-1.2.3-skills 批1 角度C 的 grep 代理方法）；角度B 为本轮直接对 win 自己的 `ipc-contracts.jsonl` grep（未借用 mac 前端文档，遵循红线8 dim5 win 用 win 自己证据）；角度D 为与 macos-1.2.3-skills 21 函数集的结构性对比（非逐一映射校验）。
