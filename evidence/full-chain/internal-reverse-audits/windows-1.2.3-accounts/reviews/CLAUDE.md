# Claude (CC) 独立复核 — windows-1.2.3-accounts

复核者：Claude (Sonnet 5, subagent session), 2026-07-25。本复核是本包唯一的复核方（无 Codex/AGENT.md 对照复核这一轮，与 `macos-1.2.3-accounts`/`macos-1.2.3-relay` 同样只有单份 `reviews/CLAUDE.md` 的先例一致）。

## 复核范围

本次是**纯只读蒸馏**任务：把已由此前会话/机器用 IDA MCP 反编译好的 72 个 win `.c` 文件（多数携带 `WIN-1.2.1-MODULE-RECOVERY.md` 记录的方法论产出注释）与 win 自有的前端提取产物（`ipc-contracts.jsonl`/`frontend-control-flow.jsonl`/`ast-facts.json`/`frontend-contract-report.md`）归并整理成本 canonical 结论包，作为 `macos-1.2.3-accounts` 的 Windows 对位包。本次会话**未调用任何 IDA MCP 工具**（无 `decompile`/`xrefs_to`/`callees`/`func_query`），所有"证据"均为读盘所得。

## 使用的证据路径（env-relative，硬编码 SMB 绝对路径）

- `raw/aimami/1.2.3/windows-x64/{account_io,auth,oauth_login,oauth_refresh}/ida/pseudocode/*.c`（26 文件，逐个 `ls` 枚举 + `head`/`wc -l` 核查每个文件的头部 provenance 注释与截断状态，未逐文件通读完整 body）
- `raw/aimami/1.2.3/windows-x64/commands/accounts/ida/pseudocode/*.c`（42 文件，同上；对 4 个 Hex-Rays 失败文件逐个 `head`/`tail` 读取确认失败根因一致；对 `load_snapshot`/`logout`/`remove_accounts` 三个 ground-truth 命名文件读取了 header + 前 10 行确认命名来源）
- `raw/aimami/1.2.3/windows-x64/codexmate_lib/ida/pseudocode/*.c`（32 文件全量 `ls`，4 个账号相关文件逐个 `head`/`wc -l` 核查，`import_accounts_from_file` 确认反编译失败根因与 commands/accounts 的 4 个同类）
- `raw/aimami/1.2.3/windows-x64/repository/ida/pseudocode/*.c`（72 文件全量 `ls`，8 个具名文件逐个 `head -6` 读取跨平台等价注释，其余 64 个未逐文件读取）
- `raw/aimami/1.2.3/windows-x64/models/ida/pseudocode/*.c`（3 文件全量读取 header，确认无 Account* DTO）
- `raw/aimami/1.2.3/windows-x64/commands/system/ida/pseudocode/*.c`（6 文件全量 `head -6`，确认排除理由）
- `raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl`（131 行全量用 python3 解析，提取全部 20 个候选命令名 + argKeys）
- `raw/aimami/1.2.3/windows-x64/frontend/{frontend-control-flow.jsonl,ast-facts.json,frontend-contract-report.md}`（行数确认 + grep account 关键词命中确认存在性，未全文通读）
- `raw/aimami/1.2.3/macos-arm64/dumped/assets/accounts-page-GdJYDnGj.js` 与 `raw/aimami/1.2.3/windows-x64/package/AiMaMi-1.2.3-win64/tauri-dumped-assets/direct/assets/accounts-page-GdJYDnGj.js`（`shasum -a 256` + `diff` 双向核对，本次会话独立执行，非引用既有结论）
- `raw/binary/AiMaMi.1.2.3 win64.exe`（`shasum -a 256` 本次重新计算，33,667,584 字节，与 `windows-1.2.3-relay/manifest.json` 已记录值核对一致）
- `internal-reverse/audits/WIN-1.2.1-MODULE-RECOVERY.md`（全文通读）
- `internal-reverse/audits/macos-1.2.3-accounts/`（全套 8 个文件全文通读，作为本包结构/措辞模板参照，明确未作为 win 证据来源）
- `internal-reverse/audits/windows-1.2.3-relay/manifest.json`（部分读取，取 binary SHA 交叉核对）
- `internal-reverse/AGENTS.md`（242 行全文通读，含 RULE 7/8/9、Strict Leaf Readiness Clarification）

## 复核结论

1. **72 文件，5 反编译失败**：本次独立对 6 个 in-scope 目录（`account_io`/`auth`/`oauth_login`/`oauth_refresh`/`commands/accounts`/`codexmate_lib`）逐个跑 `grep -rl "TRUNCATED|DECOMPILE-FAILED|chars total"`，命中 5 个文件，逐一 `head` 确认均为 `HEXRAYS_DECOMPILE_FAILED: switch analysis failed` 类同一根因。**确认为真**。
2. **`account_coordination`/`account_metadata` 完全缺失**：本次独立对全部 windows-x64 树跑 `grep -rl "FileLock\|AccountDomainLock\|AccountSnapshotLock\|LiveAuthLock\|fetch_subscription_metadata\|is_usable_account\|infer_active_subscription\|try_lock_exclusive\|flock"`，0 命中。**确认为真**，不是复核遗漏——这是本次复核过程中主动发起的验证性检查，而非被动接受既有文档的断言。
3. **`cancel_chatgpt_oauth_login` owner 缺失**：本次独立对全部 windows-x64 树跑 `grep -rl "cancel_chatgpt_oauth_login"`，仅命中前端相关文件（`ast-facts.json`/`frontend-control-flow.jsonl`），无任何 `.c` pseudocode 文件命中。**确认为真**。
4. **前端字节级相同**：本次独立 `shasum -a 256` 双向核对 mac/win 两份 `accounts-page-GdJYDnGj.js`（各 67,080 字节），SHA-256 完全一致，`diff` 也确认字节相同。**确认为真，且是本次复核独立验证得出，非引用既有断言**。
5. **8 个 repository 具名交叉引用函数**：本次逐个读取头部 6 行，确认均携带 `win 1.2.1` 归属注释 + `win 1.2.3 | = mac ...` 跨平台等价注释。**确认为真**，但复核者未进一步读取这 8 个函数的完整 body 逐行核对其行为是否真的与 mac 侧对应函数逻辑一致——注释本身是此前某次会话产出的声明，本次复核只验证了注释存在，未做独立的行为级复核。
6. **本次复核发现的最重要诚实缺口（相对 `macos-1.2.3-accounts` 的对比判断）**：win 侧 4/12 consumerStartReady 明显弱于 mac 侧 8/12——这不是复核者主观放低标准，而是 win 侧证据本身（5 个反编译失败 + 1 个 owner 缺失 + 2 个模块完全无证据 + DTO 层完全空白）客观上比 mac 弱。复核者刻意**没有**为了"凑齐 8/12 对称结果"而放宽标准或借用深叶证据强行提升 wrapper 反编译失败的命令——这是遵循 Strict Leaf Readiness Clarification 的结果，非模板照搬。
7. **未做的事**（如实列出）：未执行 RULE9 版本 diff 验证（含对"win 1.2.1 归属被隐性迁移进 1.2.3"这一新发现现象本身的验证）；未做 dim4 字段级 DTO 抽取（win 侧无源可抽）；未做 dim6 test/acceptance mapping；未执行语义关键词孤儿扫描（四角度协议角度 C）；未系统性执行角度 D；未逐行通读 72 个 in-scope 文件中的大多数（仅 header+行数+截断状态级核查，对少数关键文件做了首尾抽样）。

## 与 macos-1.2.3-accounts 包的一致性核对

两包共享同一批次任务产出的骨架结构（README/AI.md/SYSTEM-DIFF/gate-report/manifest/logic/pointers/data 八件套）与措辞风格（诚实标 Unknown/blocked、不虚报 gate 档位），但**本包的 gate 判定结果完全独立得出**——本包因 win 侧证据本身更弱（结构性模块缺失 + Hex-Rays 反编译失败簇 + owner 缺失），诚实拆出 4/8 而非机械复制 mac 的 8/4。两包之间**唯一**真正共享的证据是字节级相同的 `accounts-page-GdJYDnGj.js`（本次会话独立哈希验证），其余所有 win 侧结论均基于 win 自己的 raw 证据独立得出，不依赖也不外推 mac 的结论（红线 8）。
