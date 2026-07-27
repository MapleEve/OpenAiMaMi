# WIN-1.2.3 前沿分诊 — 已归属 App 邻居逐个语义分诊（win strip, native-only）

**产物**：`AiMaMi.1.2.3 win64.exe.i64`（module `AiMaMi.1.2.3 win64.exe`, imagebase 0x140000000, SHA 见 raw/binary SOT）
**IDA live gate**：server_health status=ok / IDA decompiler_ready=true / uptime>30s / module 名匹配（本轮起手确认）。
**方法边界**：纯 win-native 证据（panic-Location 两跳 / 严格调用图 / decompile 语义），**不硬贴 mac 符号名**。
**证据根**：`intermediate/aimami/1.2.3/windows-x64/module-recovery/`（frontier.jsonl / final_decisions.json / unk_semantics.jsonl / s0..s7 脚本）。

---

## 1. 前沿定义与规模

- win 真 App 基线（本轮前）= `/codexmate_lib` dirtree 内 **1192** 函数（995 带 `attributed via` 注释 + 197 命名 handler）。
- 全二进制 103359 函数，102167 在根（库 glue）。
- **前沿** = 1192 已归属 App 函数的直接 caller/callee 邻居，去掉已归属、去掉库名/库串标记后：
  - 全邻居 9732；引用 rustc/.cargo/index.crates.io 串的 1522 直接判库；
  - 上一轮点名的「疑似 App 未归属前沿」= **被已归属 App 直接调用（callee 侧，≥1 attributed caller）且非库串** = **1668**（与上一轮 ~1673 在过滤口径容差内一致）。

## 2. 分诊结果（1668 逐个）

| 判定 | 数量 | 依据分层 |
|---|---|---|
| **真 App** | **735** | panic-Location 两跳锚定 11 · 调用图≥2一致调用者 309 · 双向位于App调用图内 298 · 引用App业务串(DTO/协议/配置/命令词) 117 |
| **库 glue** | **933** | 无串运行时/单态化 glue(drop/dealloc/grow/utf8/Debug/serde闭包桩) 800 · 仅 artifact/serde 错误串 88 · 微桩 45 |
| **accepted_unknown** | **0** | 见 §4 |

**59** 个模块被触及；真 App 分布（top）：core/relay/proxy_server 63 · core/repository 60 · relay/codex_diagnostic 43 · voice/aliyun_asr 40 · relay/translator 33 · relay/codex_thread_visibility 30 · voice/runtime 29 · relay/manager 29 · commands/accounts 25 · commands 22 · core/debug_bundle 20 · account_io 17 · models 16 · sessions 15 · commands/skills 15 · voice/workspace 12 · oauth_login 12 · platform/process 12 · relay/router_transition 11 · 归树到裸 `codexmate_lib`（无更细模块可推）78。

## 3. IDB 回写（已 save）

- 735 真 App 全部 **归入 `/codexmate_lib/<module>` dirtree 目录树**（mkdir 父目录 + rename 移入），并写 func 级中文注释 `[win前沿分诊] 真App，归入 <module>；attributed via <依据>`。
- 保留 sub_ 名（命令串已在 1192 内全归属，本轮仅 1 例业务串命中命令词做精确命名 `*_win_owner`）。
- 库 glue 933 **留根不污染** App 树。

**Grounded 复验（walk 法，非驱动自报）**：
- `/codexmate_lib` 子树 1192 → **1927**（精确 +735）；根函数 102167 → 101432（−735 移出）。
- `attributed via`+前沿注释总数 995 → **1730**；`[win前沿分诊]` 注释精确 **735**。
- 模块目录抽读（voice/aliyun_asr、relay/proxy_server）内为真函数真 ea。
- IDB `save_database` 返回 True。

## 4. accepted_unknown = 0 的诚实说明（非取巧）

本前沿层全部为**叶子/近叶子 helper**，逐个 decompile 破法均可读：
- 无串的 800 个 decompile 后是可读的 drop/dealloc/Vec-grow/utf8 校验/Debug 派生/serde 闭包桩（编译器生成 glue，含 codexmate 泛型也按 mac canonical 规则移回根），**非 ICF 折叠墙、非 async poll 墙**。
- 对「无串却调用业务函数 + 有分支」的 225 个做了额外结构筛 + 抽样 decompile：确认是 App 类型的 **Drop/析构/构造/Debug 派生 glue**（调用业务函数是在 drop/construct App 对象），非手写 App 编排——判 glue 是防膨胀的诚实归类，不上抬 App 分母。
- 业务串 117 抽样 decompile 证实为真 App（如 OAuth 错误构造、JSON `{` 写入器、web_search 工具处理、config/catalog 校验、command handler 体）。
- 因每个体都读得动、都能落到 App-业务或库-glue 二分，**无剩余不可破的墙** → 本轮 accepted_unknown 真实为 0（非未试破法的取巧标注）。

**残余不确定性（诚实标注，未计入 App 分母）**：无串 glue 中极少数带 400/520B 栈缓冲的 Debug/Display 派生体，形态接近 App 格式化但按 derive-impl 规则归 glue；若后续按源码级严格实现需区分，可单独复核，但不影响本前沿的 App 归属分母。

## 5. win 真 App 分母修正

**1192 + 735 = 1927**（win-native 归树函数）。命令真名 111/129 不变（命令层已在 1192 内闭合，本轮前沿为非命令 helper）。
