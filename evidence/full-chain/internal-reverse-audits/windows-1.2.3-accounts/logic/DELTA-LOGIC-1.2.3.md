# DELTA-LOGIC-1.2.3 — windows-x64 accounts（诚实未闭合说明）

## 状态：RULE9 版本迭代 diff 未执行；额外发现一层未验证的隐性迁移假设

`internal-reverse/AGENTS.md` RULE 9 要求版本迭代默认先做同平台 diff 迁移，不默认重头逆。本次是纯只读蒸馏任务（无 IDA MCP 访问），**未能**独立执行以下任一 diff 判定：

- 无法对比 1.2.2 win 二进制的 `account_io`/`auth`/`oauth_login`/`oauth_refresh`/`commands::accounts` owner 符号/地址。
- 无法确认哪些 accounts 命令属于 `migrated_no_behavior_diff` / `unchanged_reused` / `diff_required` / `diff_reversed` 四类口径中的哪一类。

## 额外发现：`win 1.2.1` provenance 注释——一层未经本包验证的隐性迁移

本次读取的 72 个 in-scope 文件中，绝大多数携带形如 `// win 1.2.1 | module src/core/xxx.rs | attributed via panic-Location xref (win-native)` 的头部注释——这表明这些文件的**模块归属/函数命名工作最初是在 1.2.1 版本的 win IDB 上完成的**（见 `internal-reverse/audits/WIN-1.2.1-MODULE-RECOVERY.md`），随后被某个此前的会话/流程**迁移或沿用**到了本次读取的 `raw/aimami/1.2.3/windows-x64/` 证据树中。

本包**未独立验证**这一迁移的正确性：
- 未确认 1.2.1 → 1.2.3 之间这些函数的地址（VA）、字节码或伪代码内容是否发生变化。
- 未确认"归属于 `src/core/auth.rs` 模块"这一结论在 1.2.3 版本上是否仍然成立（理论上模块边界可能随版本演进调整）。
- 部分文件额外携带 `// win 1.2.3 | = mac codexmate_lib::core::X::Y | 跨平台字符串签名匹配(名↔函数一致)` 注释，说明**至少这部分**做过针对 1.2.3 版本的二次交叉验证（跨平台字符串签名匹配），但这只验证了"win 该函数 = mac 某符号"的**跨平台等价性**，不验证"该 win 函数相对 1.2.1 版本本身是否有行为变化"的**跨版本一致性**。

因此本包**不得**被当作已完成 diff 迁移的 delta 包使用；所有 72 个 in-scope 文件均按"当前版本独立证据（继承自 1.2.1 归属工作，未做 1.2.1→1.2.3 独立验证）"对待。

## 已知背景（间接引用，非本包独立验证）

1. `internal-reverse/audits/COVERAGE-FINAL-1.2.3.md` 记录 1.2.3 相对 1.2.2 的三项 changelog 之一涉及"账号切换稳定性"（同 `macos-1.2.3-accounts/logic/DELTA-LOGIC-1.2.3.md` 引用），本包未做逐函数核实这是否对应 win 侧任何具体改动。
2. `macos-1.2.3-accounts` 侧独立观察到 `core::repository`（mac 99 文件）中 30 个函数标 `1.2.3 NEW-delta`。win 侧对应的 `core::repository`（72 文件）本次**未检查每个文件是否携带类似的版本 delta 标记**——本包读取的 8 个具名交叉引用函数（`switch_account_0`/`remove_accounts_0`/`rollback` 等）头部只有 `win 1.2.1`/`win 1.2.3 跨平台匹配` 注释，未见显式 `NEW-delta` 类标记，但本包也未系统性搜索是否存在这类标记于 win 侧其余 64 个未读文件中。

## 与 macos-1.2.3-accounts 的关系

本包与 `macos-1.2.3-accounts` 是同一批任务产出的**对位包**（win/mac 双平台），但两者的证据基础和 gate 结论**独立得出**，非镜像复制：
- mac 141/141 文件 0 截断；win 72 文件中 5 个 Hex-Rays 反编译失败——**不是同一次反编译批次的对称产出**，win 侧证据本身就明显薄弱于 mac。
- mac 6 个 core in-scope 模块全部有独立目录；win 只有 4 个（`account_coordination`/`account_metadata` 缺失）。
- 前端证据：两者共享同一份字节级相同的 `accounts-page-GdJYDnGj.js`，是本包与 mac 包**唯一**真正共享/复用的证据（且已用哈希证明而非假设）。

## 与更早 win 1.0.9 / win 1.2.1 baseline 的关系

`internal-reverse/audits/windows-1.0.9-accounts/` 存在（本包未读取其内容，仅确认路径存在性，见 `pointers/evidence-paths.md`）。`WIN-1.2.1-MODULE-RECOVERY.md` 记录的模块恢复工作本身就是针对 **1.2.1** 版本 IDB 做的（867 个 App 函数模块归属，111/129 命令精确命名），不是针对 1.0.9 或 1.2.3。本包引用其方法论与部分产出（通过文件头注释继承），但**不继承**任何 gate 档位——`windows-1.0.9-accounts` 若曾达到某个高档位，本包未做 RULE9 验证，不得据此提升。

**结论**：本 DELTA-LOGIC 文档如实记录了本包检查过什么、间接引用了什么、以及一层此前未被任何包显式指出的"1.2.1 归属工作被隐性迁移进 1.2.3 证据树"现象，但不冒充已完成的 diff 迁移证据。
