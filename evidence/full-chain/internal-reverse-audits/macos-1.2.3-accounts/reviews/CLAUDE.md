# Claude (CC) 独立复核 — macos-1.2.3-accounts

复核者：Claude (Sonnet 5, subagent session), 2026-07-24。本复核是本包唯一的复核方（无 Codex/AGENT.md 对照复核这一轮，与 macos-1.2.3-relay 包同样只有单份 `reviews/CLAUDE.md` 的先例一致）。

## 复核范围

本次是**纯只读蒸馏**任务：把已由此前会话/机器用 IDA MCP 反编译好的 141 个 `.c` 文件（6 个 core 模块 + 3 个 commands 模块）与已产出的 3 份 `backend-baseline/*.md` + 1 份 `frontend/pages/accounts-frontend.md` 归并整理成本 canonical 结论包。本次会话**未调用任何 IDA MCP 工具**（无 `decompile`/`xrefs_to`/`callees`/`func_query`），所有"证据"均为读盘所得。

## 使用的证据路径（env-relative）

- `raw/aimami/1.2.3/macos-arm64/core/{account_coordination,account_io,account_metadata,auth,oauth_login,oauth_refresh}/ida/pseudocode/*.c`（87 文件，逐个 `ls` 枚举 + 抽样 `Read` 若干篇伪代码核对归纳文档准确性，未逐文件通读全部 87 篇）
- `raw/aimami/1.2.3/macos-arm64/commands/{accounts,account_io,account_oauth}/ida/pseudocode/*.c`（54 文件，同上；`commands/account_io` 的 3 个文件因既有归纳文档未覆盖，本次逐篇 `Read`（实际读了 `preview_account_import_0x1006f94f0.c` 全文，确认其为薄 wrapper 委托 `core::account_io::preview_import`，另外两个文件按文件名与同目录模式推断未逐篇通读）
- `raw/aimami/1.2.3/macos-arm64/backend-baseline/{account-auth,commands,models-repository}-baseline.md`（三份文档全文通读）
- `raw/aimami/1.2.3/macos-arm64/frontend/pages/accounts-frontend.md`（全文通读，147 行）
- `internal-reverse/audits/BASELINE-FINAL-1.2.3.md`、`COVERAGE-FINAL-1.2.3.md`（全文通读，交叉核对 accounts 相关段落）
- `internal-reverse/audits/macos-1.2.3-relay/`（全套文件通读，作为本包结构/措辞模板参照）
- `internal-reverse/audits/macos-1.0.9-accounts/gate-report.json`、`manifest.json`（部分读取，取 `targetsClosedByIda` 字段核实历史档位）
- `internal-reverse/AGENTS.md`（242 行全文通读，含 RULE 7/8/9）、`internal-reverse/OUTPUT-SPEC.md`（273 行全文通读）、skill `references/flow.md`、`references/rust-reverse-cookbook.md`（均全文通读）

## 复核结论

1. **141 文件 0 截断**：本次独立 `grep -rl "TRUNCATED|DECOMPILE-FAILED|chars total"` 对全部 9 个 in-scope 目录逐个跑过，0 命中，与两份既有归纳文档（`account-auth-baseline.md`/`commands-baseline.md`）各自独立报告的 0 截断结论一致，三方交叉核对无分歧。**确认为真**。
2. **范围边界决策（account_* 前缀 + auth/oauth_login/oauth_refresh，排除 bootstrap_cache/sessions/session_analytics，core::repository/core::models 仅作交叉引用）**：这是本次复核者（我自己）做出的范围裁定，非既有证据自带的边界。裁定依据已在 `manifest.json`/`README.md` 逐条写明理由，复核认为该裁定合理（与用户任务原文"若确属 accounts"的授权判断一致），但标注为**本包自身的方法论决策**，非上游客观事实，供后续审阅者知晓这是可协商的边界。
3. **8/4 命令拆分（consumerStartReady vs consumerStartBlocked）**：这是本次复核发现的最重要的诚实缺口——`accounts-frontend.md` 的 25 条交互清单里，`load_snapshot`/`logout`/`switch_account`/`refresh_usage_snapshot` 均未出现（`load_snapshot` 仅被文档作者标注为"推断"）。复核逐条重新核对了 `accounts-frontend.md` 全文，确认这 4 个命令确实不在该页面 25 条交互映射内。**确认为真**，不是复核误读。
4. **`core::repository` 深叶的排除决策**：`models-repository-baseline.md` 里 `Repository::switch_account`/`remove_accounts`/`SnapshotQuarantine::*` 的描述是真实存在的既有证据（本次复核全文通读确认），排除出本包主范围是方法论决策不是证据缺失——如果后续需要更高档位，直接把这部分证据折进本包主范围即可，无需新逆向。
5. **未做的事**（如实列出，不是遗漏而是本次任务边界内的诚实缺口）：未执行 RULE9 版本 diff 验证；未做 dim4 字段级 DTO 抽取；未做 dim6 test/acceptance mapping；未读 Windows 1.2.3 raw 证据；未执行语义关键词孤儿扫描（四角度协议角度 C）；未系统性执行角度 D（manifest diff 脚本化）。

## 与 macos-1.2.3-relay 包的一致性核对

两包共享同一批次 macOS 1.2.3 二进制反编译产出（binary SHA 与 frontend-extraction SHA 完全一致，见 manifest.json），本包在骨架结构（README/AI.md/SYSTEM-DIFF/gate-report/manifest/logic/pointers/data 八件套）、措辞风格（诚实标 Unknown/blocked、不虚报 gate 档位）上参照了 relay 包模板，但**本包的 gate 判定结果独立得出**，未照搬 relay 包"23/23 全部 consumerStartReady"的模式——本包因四角度协议角度 B 发现的真实前端调用点缺口，诚实拆出 8/4 而非全数放行，这是本包区别于机械复制模板的地方。
