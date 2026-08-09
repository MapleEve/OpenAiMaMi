# 1.2.6 macOS Delta Logic

## 证据范围

- session：`<审计会话>
- 前端放行前提：当前 `macos-arm64/version_delta/frontend-priority.json` 为 `ready`，七类语义 reducer 的 `unknown=0`、真实平台分叉=`0`；这只允许后续同平台后端侦察，不是实现放行。
- 后端 live source：AiMaMi 1.2.6 x86_64 IDB，binary SHA-256=`ba04c977e9c6dd97372d70ff8878543e716f75e106125852d5a152ad78b5d0ca`。所有 VA、伪代码、调用关系仅属于 x86_64，不能冒充 ARM64 或 Windows。

## 四角度 C/D 重核

### C：全后端非 command 语义扫描 — PARTIAL

live IDA `idautils.Functions()` 全量枚举到 `codexmate_lib` 1,747 个函数：commands=169、core=1,360、run=87、platform=124、daemon=0、other=7。以 `voice|capture|relay|router|auth|sidecar|daemon|watchdog|overlay|hotspot|mcp|plugin|session|account|usage|config|proxy|http|websocket` 做跨命名空间语义扫描，命中 1,271 个函数；扫描覆盖 core/run/platform，而非仅 commands。

这证明现有 C 角度不应写为“IDA 不支持 exports 所以未扫描”。但它不是 Mach-O export 表的函数级闭合，也没有把 1,271 个命中逐一归并进 canonical module/leaf。因此 C 为 `PARTIAL`，未知项为：同版本 ARM64 的独立枚举、x64 非命中但仍有语义责任的函数、以及每个命中的消费者归类。

### D：全后端 manifest 覆盖归类 — PARTIAL

前端 134-command 宇宙已经完成归类：131 条复用 1.2.3 canonical，3 条为 1.2.4 retained additions，`truly_undone=0`。对 1,747 个 x64 后端函数，本包现有的 canonical consumed-bundle 指针和三条 x64 diagnostic leaf 还未提供 `covered_functions` 的逐项交集；因此不得将三叶或 command 归类外推为全后端归类。

D 的确定结论是：`truly_undone` 不能报告为零；缺口被明确排入 `all-backend-covered-functions-classification`，不创建重复 raw leaf。

## 版本逻辑

1. 前端命令面相对 1.2.4 无新增/删除/参数变化；相对 1.2.3 保留三个已知 1.2.4 addition：`get_claude_web_search_compat`、`set_claude_web_search_compat`、`set_codex_no_account_slots`。
2. 三个 x64 leaf 仅补充诊断性后端证据：router auth readiness、voice runtime settings、voice runtime start capture。
3. 这不是 no-behavior-diff 证明：x64/ARM64 证据边界、全后端 D 归类、接口错误合同与验收仍未闭合。

## 消费结论

`consumerStartReady=false`、`strictImplementationUse=false`、`readyToImplement=false`、`implementation_use=false`、`gate_accepted=false`。后续消费者不得从本 delta bundle 开始实现；应将缺口按本包 `data/task-plan.json` 的 reverse-required 队列处理。