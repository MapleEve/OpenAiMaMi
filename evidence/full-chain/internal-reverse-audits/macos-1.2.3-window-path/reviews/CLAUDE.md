# Claude 独立复核 — macos-1.2.3-window-path

复核日期：2026-07-24
复核范围：`internal-reverse/audits/macos-1.0.9-window-path/`（README/logic/gate-report/producer-ledger 全文件）对照本包合成的 README/AI/SYSTEM-DIFF/gate-report/logic 一致性；同时对照 1.2.3 raw 证据（2 份 `.c` 文件全文 + `frontend/ipc-contracts.jsonl`）核实"零行为差异"结论是否有独立支撑，而非单纯照抄 baseline。

## 采用（Accepted）

- "cluster 边界=仅 focus_main_window + open_path 两条命令"的判定——1.0.9 baseline 本就如此定义，本轮独立用 `ipc-contracts.jsonl` 命令名 grep 复核（`*window*` 命令仅 1 条命中 `focus_main_window`），确认同目录下 6 个 hotspot 内部函数（reveal_main_window 等）确实非 IPC 命令，边界判定成立，非未查。
- "行为逐字节一致"结论——本轮亲自读取两份 1.2.3 `.c` 文件全文（53 行 + 90 行），逐行核对与 1.0.9 `WINDOW-PATH-DISTILLED-109.md` 文档化行为（discriminant=28/160-byte alloc/`send_user_message`；`Command::new("open",4)`+`arg`+`spawn`+3-fd 清理）完全一致，非仅信任 raw 提取阶段的 header 注释（该注释本身措辞也被本包正确解读为"语料覆盖缺口"而非"行为新增"，见 manifest.json migration 字段）。
- dim6 未闭合的判定——1.0.9 baseline 本就从未产出 test/acceptance mapping，本包据此标 `blocks_start`，未做假墙化处理，与 baseline 措辞一致。
- Windows 侧"不外推"判定——本轮独立检查了 1.2.3 Windows raw 目录，确认 `open_path` 确实无隔离 owner（且发现字面命名为 `open_path` 的 relay 目录文件是无关 ICF dispatcher，这是本包新增的、baseline 没有的核实工作），`focus_main_window` 虽有 owner 但内部体明显弱于 1.0.9 Windows 证据，判定合理，未误标为已闭合。

## 驳回/降级（Rejected/Downgraded）

- 无发现 1.0.9 baseline 或本次合成过程存在需要驳回的过度声称。1.0.9 baseline 本身措辞克制（`strictImplementationUse` 且明确 `dim6_missing: true`），本包承接该措辞，未在迁移过程中拔高档位。
- 曾考虑将 dim5 直接标"Windows 已闭合"（因 1.0.9 Windows 确有闭合证据、且行为逻辑与 macOS 一致推测 Windows 大概率也未变）——**驳回**：AGENTS.md 明确禁止"用某平台 artifact 结果推断另一个平台"，且实测发现 1.2.3 Windows `open_path` owner 未隔离，若外推会掩盖这一真实 gap，故坚持 Windows dim5 独立判定为不完整。

## 仍 Unknown

- Windows 1.2.3 `open_path` owner 隔离——需要额外的 panic-Location 或命令名 string xref 工作，本轮蒸馏任务范围未包含新逆向调用，维持 `blocks_start`。
- dim6 test/acceptance mapping——需要 Polaris 侧产品/测试团队输入，非纯逆向证据问题，维持 `blocks_start`。

## 复核方法

未重新连接 IDA 或重新反编译（本轮是**蒸馏任务**，按用户指令读取已落盘 raw 证据 + 1.0.9 既有结论包做归并）；亲自完整读取两份 1.2.3 `.c` 文件全文、`frontend/ipc-contracts.jsonl` 相关行、1.0.9 baseline 全部文件（README/logic/gate-report/producer-ledger）、1.2.3 Windows 侧 6 个候选文件的文件头，以及 root `INDEX.jsonl`/`REVERSE-STATUS.md` 中与本 cluster 相关的既有记录（未发现同名在制品或别机认领冲突）。未执行 `reviews/AGENT.md`（Codex 独立复核）——本轮只产出 Claude 侧复核，`reviews/CROSS-REVIEW.md` 因此未创建（OUTPUT-SPEC.md 允许"至少一份存在"）。
