# Claude 独立复核 — macos-1.2.3-voice

复核日期：2026-07-24
复核范围：`raw/aimami/1.2.3/macos-arm64/backend-baseline/voice-baseline.md`、`raw/aimami/1.2.3/macos-arm64/frontend/pages/voice-frontend.md` 原文对照本包 README/AI/SYSTEM-DIFF/gate-report/logic 的一致性 + 本轮独立文件系统复扫。

## 采用（Accepted）

- `voice-baseline.md` 12 个模块的职责分析与逐函数行为表——逐条读取确认与本包 README/logic/FULL-CHAIN 的转述一致，未发现夸大或漏译。
- `voice-frontend.md` 的 21 条直接命令映射 + 7 条推断映射 + 2 条未解析——本包据此原样区分"确认"与"推断"，未把推断映射当确认映射写进 `consumerStartReady_commands`（推断映射的命令名本身仍是真实存在的 command，只是"该 UI 交互调用它"这一事实是推断，不影响命令本身的 owner 证据，故仍纳入 39 条清单，但在 README/AI.md 里如实标注了这些是通过共享 hook 推断得出）。
- 182 文件 vs 212 文件的差异——本轮独立 `find` 复核确认 `voice-baseline.md` 自己的目录清单表（§0）遗漏了 3 个真实存在的目录（`core/voice` 直挂 25 文件、`platform/voice_macos` 1 文件、`platform/voice_permissions` 4 文件），源文档本身在 §0 也如实写了"任务给出 11 个目录，实际磁盘情况如下（如实记录，不臆断）"并列出了 4 个"补充目录"，但这 4 个补充目录本身仍不含上述 3 个遗漏目录——本包据此在 manifest.json/README.md 明确标注这是本包新发现并补上的 30 个文件缺口，不是源文档的错误（源文档任务范围本就未要求覆盖 `platform::voice_macos`/`platform::voice_permissions`，只是 `core/voice` 直挂文件的遗漏更像是统计疏漏）。
- 0 截断桩结论——本轮对全部 212 个文件（比源文档 182 个更宽）重新做了 `TRUNCATED`/`DECOMPILE-FAILED`/`chars total]` grep，独立确认 0 命中，与源文档 §0 的"0 命中（182 文件范围内）"结论一致且本轮扩大了验证范围。
- dim4（interface/DTO）、dim6（test/acceptance mapping）未闭合的判定——两份源文档均未声称做过这两项，本包据此判定 `readyToImplement=false`/`strictImplementationUse=false`，符合 OUTPUT-SPEC.md `full_leaf_100_definition_v2` 六维门槛要求。

## 驳回/降级（Rejected/Downgraded）

- 无发现源文档存在需要驳回的过度声称；两份源文档措辞均克制（`voice-baseline.md` 明确标注"很可能只是编译器...而非确认的业务重写"而非直接断言业务变更；`voice-frontend.md` 对不确定映射一律标【推断】/【未知】）。复核未发现需要降级的表述。
- 本包自身在首次撰写 `logic/REGISTRATION-TABLE-1.2.3.md` 时出现过一次内部算术错误（表 B 标题写"8 条"实际只列了 7 条，导致合计一度对不上 39）——复核中发现并已在同一轮次内修正为 A(21)+B(7)+C(10)+D(1)=39，不留错误版本。这是本次蒸馏过程内部的自我复核修正，非驳回源文档内容。

## 仍 Unknown

- `core::voice::pipeline`/`core::voice::traits` 是否有 Windows 侧对应实现：源文档未提及此模块，本复核认为"存在 trait 抽象暗示跨平台设计意图"是合理推断但非证据，维持 `accepted_unknown`。
- Angle-A 符号枚举、Angle-C 语义孤儿扫描：本环境本轮无 IDA MCP 可用，两项均未执行，维持 `blocks_start`/`accepted_unknown`（按 cookbook §1 的工具限制类判定标准）。
- `reprocessHistory`/`quickCorrection` 两个前端回调命令身份：源文档明确标注未能确认，维持 `blocks_start`。

## 复核方法

未重新连接 IDA 或重新反编译；本次是**文档一致性复核 + 独立文件系统复扫**（读盘对照 voice-baseline.md/voice-frontend.md 原文 vs 本包结论文件，并独立跑 `find`/`grep` 复核文件计数与截断标记，而非仅采信源文档自报数字）。未执行 `reviews/AGENT.md`（Codex 独立复核）——本轮只产出 Claude 侧复核，`reviews/CROSS-REVIEW.md` 因此未创建（OUTPUT-SPEC.md 允许"至少一份存在"）。
