# System Diff — AiMaMi 1.2.3, windows-x64 vs macos-arm64, `system` 模块

## Platform Artifacts

- Windows: `E:\binary\AiMaMi.1.2.3 win64.exe`（imagebase `0x140000000`，PE，x64；server_health 现场确认 `IDA decompiler_ready=true`）。
- macOS: 见 `macos-1.2.3-system/manifest.json`（`sha256_core_reference` 已记录，本包未重复）。
- 两平台 raw evidence 独立存放（`raw/aimami/1.2.3/{windows-x64,macos-arm64}/`），本包未做任何跨平台外推。

## Frontend IPC / Control-flow

- 命令名层面**一致**：26 个 macOS system 域命令在 Windows `frontend/ipc-contracts.jsonl` 中逐一命中，且两侧文件总行数相同（131/131），符合"共享同一 Tauri JS bundle"的猜测——**但本轮未验证字节级/AST 级是否真为同一份产物**，只做了命令名 grep 匹配。
- 未做任何 Windows 专属前端组件树/交互差异分析（与 macOS 侧同样欠缺 dim1 深度）。

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf

- **macOS**：34 个 `commands/system` 文件 + 95 个 platform 支撑文件，`commands-baseline.md`/`platform-baseline.md` 声称已逐条读盘蒸馏，26/26 命令均有明确的具体 owner 函数（文件名即函数语义名，如 `clean_0x1007cd710.c`）。
- **Windows**：6 个 `commands/system` 文件 + 3 个 `system_volume_windows` 文件 + 45 个 platform 支撑文件（`process`34/`paths`3/`debug_log`3/`proxy`5），**全部只有模块级归属（属于哪个 .rs 文件），函数名仍是 `sub_XXXXX`，0/26 命令有具体 owner 函数**。这是本包与 macOS 侧最本质的差异：不是"证据是否存在"的差异，而是"归属精度"的差异（模块级 vs 命令级）。
- 文件数量本身也有明显缺口：Windows `paths`（3）远少于 macOS `paths`（21，见 `macos-1.2.3-system` 口径差异章节的 95 文件计数版本）；Windows `debug_log`（3）远少于 macOS `debug_log`（17）；**Windows `daemon`/`single_instance` 为 0，macOS 为 6/6~7**。文件数少不直接等价于"该平台功能更少"——更可能是 Windows 侧尚未对这些模块做深度 win-native 归属工作（`references/ida-dirtree-module-recovery.md` 描述的三层恢复法目前只在 system/system_volume_windows/process/paths/debug_log/proxy 六个模块上跑过第一、二层，`daemon`/`single_instance` 尚未开始）。
- call-tree（dim3）：两平台均未产出逐命令 call-tree-to-leaf 文档。

## Interface / Error / Boundary

两平台均未闭合（dim4）。

## Gate Leaf

- macOS：`consumerStartReady` 26/26。
- Windows：`consumerStartReady` **0/26**（本包结论，见 `gate-report.json`）——按 AGENTS.md 红线，不得用 macOS 的 26/26 外推到 Windows，本包严格遵守。

## Plugin / Capability

不适用于本模块范围（plugins 是独立模块，见 `windows-1.2.3-plugins`）。

## OTA / Package

未在本轮范围内核查。

## Resource / Binary Surface

- macOS 与 Windows 共享同一 26 命令的前端调用面（命令名级确认）。
- 后端 surface 差异见上「Backend Commands」小节：Windows 侧目前只能证明"这些 Rust 模块在 Windows 二进制里确实存在对应机器码"，不能证明"具体哪段机器码对应哪个命令"。

## Unknown

1. `platform::daemon`/`platform::single_instance` 在 Windows 上是否存在（以任何模块名）——未搜索，`truly_undone`。
2. Windows 侧 6+3 个 system 域函数的具体命令归属——`blocks_start`。
3. Windows `paths`(3)/`debug_log`(3) 相对 macOS `paths`(21)/`debug_log`(17) 的文件数缺口，是否代表真实功能缩减、还是仅代表 Windows 侧归属工作尚未做全——未核实，`blocks_start`。
4. 前端 bundle 是否字节级跨平台一致——未验证，仅命令名级确认。
