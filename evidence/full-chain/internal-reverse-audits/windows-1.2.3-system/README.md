# AiMaMi 1.2.3 Windows-x64 — system 模块结论包

同步时间：2026-07-25
范围：`codexmate_lib::commands::system::*`（`commands/system/ida/pseudocode/`，6 个 `.c` 文件）为主目标，`platform::{system_volume_windows,process,paths,debug_log,proxy}::*`（48 个 `.c` 文件）为支撑证据，镜像 `macos-1.2.3-system` 的口径。**`platform::daemon`/`platform::single_instance` 在 Windows 侧 0 文件、0 归属行**——这是相对 macOS（daemon 6、single_instance 6~7 文件）的真实缺口，非本包排除。**排除** `commands/hotspot`（独立模块，见 `windows-1.2.3-system-hotspot` 先例）。

本包是**蒸馏 + 现场核验**产出：本轮 server_health 门通过（`module="AiMaMi.1.2.3 win64.exe"`, `IDA decompiler_ready=true`, `uptime=121304s`），对 9 个 system 域原始地址逐一重新 `decompile` 现场核验（非重新反编译新地址——地址本身已在 2026-07-24 的 gapfill session 中产出并落盘），并对 `paths`/`debug_log` 各抽验 1 个文件核实归属注释格式一致性。**未**尝试解决任何 command-to-owner 映射、call-tree、DTO 或 test mapping 缺口。

最终结论：**consumerStartReady = 0/26**（Windows 侧）。这与 `macos-1.2.3-system` 的 `consumerStartReady = 26/26` 形成鲜明对比——差异根源不是"Windows 没有证据"（54 个文件全部在盘且模块级归属完整），而是**没有任何一个 raw 文件被映射到 26 个前端命令中的具体某一个**。模块级归属（属于哪个 `.rs` 文件）≠ 命令级归属（是哪个具体命令的 handler）。本包如实按 AGENTS.md「artifact/platform 没拿到的状态保持 Unknown，禁止用 macOS 证据外推 Windows」，不借用 macOS 的 26/26 结论。

## "1133" 溯源说明

任务指令中的「win system 业务函数多已在 1133 归属集落盘」——本次核验确认 **1133** 是 `intermediate/aimami/1.2.3/windows-x64/WIN-APP-FUNCTION-INVENTORY.jsonl` 的总行数（`wc -l` = 1133），不是版本号或某个批次编号。该文件是 Windows 侧函数级模块归属普查表，每行含 `addr`/`name_or_sub`/`module`/`confidence`/`evidence`/`comment_raw`/`on_disk` 字段。本包 system 域命中该表 9 行（`commands/system` 6 + `platform/system_volume_windows` 3），供支撑证据的 `process`/`paths`/`debug_log`/`proxy` 另命中 45 行，合计 54 行落在本包 scope 内。

## 证据索引

- `commands/system` 后端：`raw/aimami/1.2.3/windows-x64/commands/system/ida/pseudocode/*.c`（6 文件，全部模块级归属，函数名仍为 `sub_XXXXX`）
- `system_volume_windows` 后端：`raw/aimami/1.2.3/windows-x64/system_volume_windows/ida/pseudocode/*.c`（3 文件，同上）
- 支撑 platform：`raw/aimami/1.2.3/windows-x64/{process,paths,debug_log,proxy}/ida/pseudocode/*.c`（34+3+3+5=45 文件）
- 归属普查表：`intermediate/aimami/1.2.3/windows-x64/WIN-APP-FUNCTION-INVENTORY.jsonl`（1133 行）
- 落盘记录：`INDEX.jsonl` 两条（`aimami/1.2.3/windows-x64/commands/system/win-app-inventory-gapfill-leaf`、`aimami/1.2.3/windows-x64/system_volume_windows/win-app-inventory-gapfill-leaf`，session `win-1.2.3-app-function-inventory-gapfill-20260724`，produced_at `2026-07-24T13:20:34Z`）
- 前端：`raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl`（131 条，与 macOS 侧同计数）
- 详见 `pointers/evidence-paths.md`

## Coverage

| 维度 | Windows |
|---|---|
| `commands/system` 函数 | 6/6 在盘，6/6 模块级归属（`src/commands/system.rs`，4 个 panic-Location xref + 2 个 call-graph propagation），0/6 命令级归属，0 截断（本轮逐一 decompile 核验） |
| `system_volume_windows` 函数 | 3/3 在盘，3/3 模块级归属（`src/platform/system_volume_windows.rs`，2 panic-Location + 1 call-graph），0/3 命令级归属 |
| 支撑 platform | `process` 34/34、`paths` 3/3、`debug_log` 3/3、`proxy` 5/5 在盘且（据归属表）模块级归属；本轮仅抽验 `paths`+`debug_log` 各 1 个文件确认归属注释存在；`daemon`/`single_instance` **0/0**——真实缺口 |
| 前端命令 | 26/26 macOS system 域命令名在 windows-x64 `ipc-contracts.jsonl` 中逐一命中（本轮 grep 全量核对，1 hit each） |

## Per-target 命令清单（26 条，Windows 侧全部 blocked）

同 `macos-1.2.3-system` 的 26 条命令名（详见该包 README「Per-target 命令清单」小节，不重复列出）。**本包状态**：全部 26 条在 Windows 侧 `consumerStartReady=false`——前端命令名存在（共享 JS bundle），但没有任何一条有已确认的 Windows 后端具体 owner 函数。

## Frontend Control Flow

与 `macos-1.2.3-system` dim1 状态相同（`weak`）：仅做命令名级 cross-check，未产出组件树/交互文档。Windows 前端 bundle 命令名与 macOS 侧逐一核对（131 行对 131 行，26/26 system 命令命中），未验证是否字节级同一份 bundle，仅命令名级一致。

## Backend Control Flow / Pseudocode / Call-tree

见 `logic/REGISTRATION-TABLE-1.2.3.md`。9 个 system 域原始函数 + 2 个抽验的 platform 支撑函数，本轮均现场 `decompile` 重新拉取，确认：(a) 非截断桩（有完整函数体，非 `[TRUNCATED]` 标记）；(b) 携带形如 `// win 1.2.1 | module src/commands/system.rs | attributed via panic-Location xref (win-native)` 的归属注释，与 `references/ida-dirtree-module-recovery.md` 描述的 win strip 三层恢复法（panic-Location 两跳 xref / 调用图传播 / tauri 命令名串精确命名）中的前两层完全吻合，第三层（tauri 命令名串→唯一 handler 精确命名）**未见任何一个文件应用**——这正是命令级归属缺失的直接原因。call-tree（dim3）本轮完全未做，未调用 `callees`/`xrefs_to`。

## Interface / Error / Boundary

**未闭合**（dim4），本轮未做任何尝试。

## Gate Leaf Status

见 `gate-report.json`：`consumerStartReady` 0/26；`strictImplementationUse`/`readyToImplement` 均 0/26。

## Diff 结论

无法产出——本轮未做 1.2.2→1.2.3 Windows 侧 diff（归属注释统一标注为「win 1.2.1」代次，即该批归属本身来自更早的 1.2.1 dirtree 恢复工作，非 1.2.3 专属新工作；1.2.3 相对 1.2.1 是否有 system 域行为变化未核实）。

## Unknown / Missing

1. **命令级归属映射（0/26）**——最大的、用已有证据即可推进的缺口。9 个 system 域文件的模块级归属已确认，但具体对应哪个前端命令未知。`blocks_start`。
2. **`platform::daemon`/`platform::single_instance` 在 Windows 上 0 文件、0 归属行**——`WIN-APP-FUNCTION-INVENTORY.jsonl` 全表检索确认。未核实是否条件编译剔除（POSIX 专属 `flock`/`launchctl` 在 Windows 上大概率有独立实现，可能藏在未知模块名下，例如仿照 `system_volume_windows` 命名惯例的 `daemon_windows`/`single_instance_windows`，或被折叠进 `process`）。本轮未搜索。`truly_undone`。
3. **`WIN-APP-FUNCTION-INVENTORY.jsonl` 的 `on_disk` 字段过期**——54 个本包 scope 内文件实测全部在盘，但归属表全部标 `on_disk: false`。已如实记录，判定 `accepted_unknown`（证据本身真实存在，仅普查表台账未同步）。
4. **`IDA Python` 工具不可用**——任务指令提及的 `IDA Python` 补 decompile 手段，在本轮 `tools/list` 现场核验中不存在（见 manifest.json `known_residuals`），只能用标准 `decompile` 单地址工具逐个核验，未做批量新地址发现。
5. **angle-A/C 全表关键词孤儿扫描**——未对 1133 行归属表做 `registry`/`bootstrap`/`hwid`/`diagnostic` 等关键词扫描，可能存在本包 6 模块 scope 之外的其他 system 相关 Windows 模块未被发现。`blocks_start`。
6. **dim3/dim4/dim6**：均未做，同 macOS 侧对应缺口。

## Action / Non-action

- **可以做**：Polaris 可参照 `macos-1.2.3-system` 的 26 条命令职责描述（该包 dim2 强于本包）先行实现，**但不得**在 Windows 平台差异实现细节上引用本包做证据（因为本包对 Windows 侧尚无任何单条命令的确认 owner），必须待命令级映射闭合后再谈 Windows 平台差异。
- **不要做**：不得把「54 个文件在盘」「9 个文件已模块归属」当作 `consumerStartReady`/`full_leaf_100`/`implementation_use=true` 依据；不得用 macOS 的 26/26 结论外推到 Windows；不得假设 `daemon`/`single_instance` 在 Windows 上不存在或被合并——这是未核实的猜测；不对外发布本包任何内容（红线 23，内部专用）。
