# CONSUMER-HANDOFF — codex_diagnostic B-tier (9 targets), AiMaMi 1.2.6, macOS + Windows

> 面向 Polaris 实现方的消费者交接文档。整理自 2026-08-21 SoT 核实（fresh-read
> `internal-reverse/AGENTS.md`、`REVERSE-STATUS.md` 全文相关段落、双平台
> `audits/{macos,windows}-1.2.6-codex_diagnostic/{gate-report.json,manifest.json}`、
> `CONSUMER-ACTION-MAP.md` 最新 dispatch 表，以及部分 leaf 自身 `raw/.../evidence.md` +
> `interface-report.json`），非对历史 prose 摘要的转述。
>
> parent claim: `cc-aimami126-codex-diagnostic-btier-claim-20260821`。
> mac reduce: `cc-aimami126-codex-diagnostic-btier-reduce-mac-20260821`。
> win reduce: `cc-aimami126-codex-diagnostic-btier-reduce-win-20260821` → leaf-by-leaf
> 复核 `cc-aimami126-codex-diagnostic-btier-win-leafbyleaf-reduce2-20260821`。
> dim1 前端统一入口确认: `cc-aimami126-codex-diagnostic-btier-frontend-dim1-supplement-20260821`。

## 0. 跨平台共享前端入口（dim1，module-level CLOSED）

两平台共用同一诊断对话框入口（真实 System Diagnostics 对话框，组件 `$e`/`DiagnosticDialog`，
属 `MaintenancePage`，`assets/maintenance-page-VLVCW7Jr.js`）：

- `invoke("run_codex_router_diagnostics")` — 无参数，列出全部诊断项（对话框打开时 + fix 后刷新）
- `invoke("fix_codex_router_issue", {itemId})` — `itemId` 为具体 check 的 id 字符串，或哨兵值
  `"all"`（批量修复）

跨平台字节级一致确认（非 macOS 外推 Windows），是 9 个 target 唯一的共享入口，全 1.2.6 前端
134 条 IPC 命令中无任何一个 target 有独立专属 invoke 命令。per-leaf 落地强度不均：

- **精确字面量命中（5/9）**：`router_http_contract` / `takeover_backup_orphan` /
  `thread_poisoned_instructions` / `thread_response_item_ids` / `state_db_relocation`
- **近似命中，已收敛为记法差异（1/9）**：`thread_provider_consistency_with_cache`
  （前端表只有不带 `_with_cache` 后缀的 `thread_provider_consistency`；已由 mac/win 两侧独立核验
  确认这不是两个不同的对外 key，只是 mac 函数签名多带一个 cache/reader 句柄的实现细节）
- **仅模块级共享机制，无 id 专属字面量（3/9）**：`thread_model_catalog_consistency` /
  `project_state_integrity_diagnostic_key_verify` / `requires_quiet_window`（这 3 个的 dim1
  依据改由各自 dim2 后端证据独立支撑，见下方各条）

dim1 module-level 关闭本身**不构成**任何 leaf 的 gate 提升前提；4 个 leaf（见下）在 dim1 解除后
仍有与 dim1 无关的独立缺口，维持 BLOCKED。

---

## 1. 逐 leaf 证据状态

> 表内 `mac gate` / `win gate` 取自双平台 `gate-report.json` 的 `leaf_gate_notes` 权威字段，
> `consumer_action` 取自 `CONSUMER-ACTION-MAP.md` 该批次 dispatch 表当前行。

### 1.1 router_http_contract

- **check 判据**：依赖标志 `ctx[316]`（单字节，=0 时早退 `ok_item`，不读 config——语义是
  "路由未启用"，不是任务简报最初假设的"依赖 TOML 语法先过"）。`[model_providers.aimai1]`
  段四字段校验：`base_url`（尾部必须匹配常量 `/codex/router/v1`，并进一步与本地 relay URL
  `http://127.0.0.1:{port}/codex/router/v1` 精确相等）、`wire_api`（必须 `== "responses"`）、
  `requires_openai_auth`（call-site 硬编码期望 `true`）、`supports_websockets`（期望
  `false`）。owner 链：mac `check_router_http_contract@0x100b06ff0`（未 strip，符号直读）；
  win `sub_140580960@0x140580960` → `sub_140591ED0@0x140591ed0` →
  `sub_1405522A0@0x1405522a0`（B-level 共享校验器，3 个 caller 之一，其余 2 个属其他诊断
  key，已排除）。两平台在 `ctx+316`/`*(a4+316)` 这个 offset 上独立交叉印证一致。
- **fix 行为**：mac `fix_router_http_contract@0x100afa0c0` 第 6 参数是函数指针回调（`a6`），
  本函数首个动作即 `a6(out,a5)` 委托调用；本轮（session `router_http_contract_a6_20260821`）
  已静态追穷 9 跳到 `relay::atomic_write::write_atomic_with_mode@0x100a4ca40`，caller 消歧穷尽
  （`fix_router_http_contract` 唯一 1 个 caller，`fix_issue` 3 个 caller，`fix_all` 2 个
  caller，均经 `xrefs_to` 核实）。回调返回后按 `tag==11` 重读重 check，按回调消息是否以
  "ok" 开头分派两条中文消息之一（其一="已重新写入 aimai1 HTTP-only 路由契约"）。**win 侧
  fix 路径是否存在本身未知**：check 链 3 个函数的 `xrefs_to` 穷尽，无任何 fix-mode call
  site；最可能藏在未反编译的 25193B 分发器 `sub_1405CBF60` 内，本轮未定位——已明确归类
  `gap_needs_reducer`（非 accepted_unknown，假墙排除未做完）。
- **mac gate**：`consumerStartReady=true`，`strictImplementationUse=false`（dim1 module-wide
  Unknown）；destructive_side_effects：未发现（leaf 明确记录对 fix 侧破坏性副作用做过穷尽搜索，
  结果为空）。
- **win gate**：`consumerStartReady=false`（BLOCKED，`independent_gap_type=
  fix_path_existence_unresolved`，与 dim1 无关，dim1 解除后维持不变）。
- **consumer_action**：mac=`implement_against_contract`；win=`BLOCKED`/`do_not_implement`。
  **两平台不一致，未裁决**——`CONSUMER-ACTION-MAP.md` 明示消费者在用户裁决前应以更保守的
  win 侧 `do_not_implement` 为准。

### 1.2 takeover_backup_orphan

- **check 判据**：双文件存在门（主 `router-takeover-backup.json` / 兜底
  `codex_router_top_level_backup.json`，34B 兜底文件名字面量本轮 win 侧新发现）——只在备份存在
  **且** caller 传入的 `a3&1`（路由启用位）为 0 时才报 issue；路由启用中备份存在返回字面量
  "takeover 备份存在（路由启用中，正常）"，直接确认任务背景假设。
- **fix 行为**：`takeover_backup_orphan_fix_worker@0x140573de0`（win，全反编译，非截断）是
  `config_takeover::takeover@0x140574EE0` 的逆向/清理对应物——共享同一底层 I/O 管线
  （`quarantine_damaged_backups`/`read_backup`/`read_legacy_backup_lines`/
  `Path::join("router-takeover-backup.json",27)`/`write_atomic_with_mode`）。win 侧内容级
  1:1 结构匹配已确认 CONFIRMED 的 AiMaMi 1.2.3 windows-x64 同名 leaf。9 步 fix 流水线全走通：
  quarantine → 读备份 → 读 legacy 备份 → 拆分外部面 → 逐项归属分类 → 合并 → 原子写 → 删 2 个
  备份文件。**⚠ DESTRUCTIVE**：覆盖 live router config 文件（`write_atomic_with_mode`）+ 删除
  `router-takeover-backup.json` 与 `codex_router_top_level_backup.json` 两个备份文件，仅在
  merge-write 成功后执行（未观察到数据丢失窗口）。
- **mac gate**：`consumerStartReady=true`。
- **win gate**：`consumerStartReady=true`（2026-08-21 promoted；此前唯一阻断是 dim1，现已解除，
  无独立缺口）；残留 accepted_unknown：delete-retry 循环底层 Win32/CRT 原语、path-metadata
  check 的 Result 判别式确切布局。
- **consumer_action**：**双平台一致** `implement_against_contract`；⚠ DESTRUCTIVE 标记必须
  在实现中保留（覆写第三方 config + 删除备份文件）。

### 1.3 thread_poisoned_instructions

- **check 判据**：mac/win 均为**合一 check+fix 单入口**，无独立 check-only owner——
  `sub_1405AE4B0@0x1405ae4b0`（**10668B/0x29ac**，2026-08-22b 回炉修正——此前误记为
  52179B，与同日 `_shared-fix-dispatcher-sub_1405cbf60` leaf 独立 `lookup_funcs`/`func_query`
  实测结果一致，也与 2026-08-07 原始记录一致；win 侧未改名，candidate-tier）。诊断 key 本身
  （28 字符字面量 `"thread_poisoned_instructions"`）经 case-length 分桶反证法在共享 fix
  分发器 `sub_1405CBF60` 内定位于 **case 28**（08-07 调查最初误猜此地址可能与
  `native_off_invalid_openai_thread_models` 相关，经字符串级 grounded 解码正面反证，两者
  语义无关，判定 `genuine_ceiling`）。
- **fix 行为**：实际写入/修复调用**未定位**——4 个候选（`sub_14152E0B0`/`sub_140C0B0F0`/
  `sub_1405B8160`/`sub_140C11360`）均未反编译；**无直接观察到的副作用**，仅从报告字符串
  （"已修复…"/"清理迁移快照"）推断确有写入发生。mac 侧标注该行为 ⚠ DESTRUCTIVE（backup-first
  + TOCTOU-guarded 原地重写 rollout `session_meta` 行，crash-safe 原子临时文件+fsync+rename
  模式）——但这是 mac 侧独立反编译到的写入机制描述，win 侧尚未确认等价写入路径存在。
- **mac gate**：`consumerStartReady=true`；**该 leaf 自报的 `strictImplementationUse=true`
  已被 mac reduce 纠正为 `false`**（与 GATE-SPEC.md Gate 2 dim1 要求及其余 6 个完整证据
  leaf 判断冲突，见 `manifest.json.consumer_gate_recommendation_correction`）——消费者不得
  采信该 leaf 自身文件的 `strictImplementationUse` 声明。
- **win gate**：**2026-08-22 更新（session `cc-aimami126-thread-poisoned-instructions-win-gapfill-20260822`）**：
  `consumerStartReady=true`（PROMOTED；此前 BLOCKED 的两个独立于 dim1 的缺口——"实际写入调用未定位"
  与"副作用仅从报告文案推断非直接观察"——本轮均已闭合）。4 个此前未反编译的候选
  （`sub_14152E0B0`/`sub_140C0B0F0`/`sub_1405B8160`/`sub_140C11360`）全部反编译，定位到真实写入链：
  sole-caller 确认的 JSON 字段编辑器 `rewrite_session_meta_base_instructions_helper_sys@0x1405b8160`
  （本轮重命名，`xrefs_to` 确认仅 2 处代码 xref、均来自本 leaf owner）→ TOCTOU 守卫 `sub_140C11360`
  （re-scan 后 byte-compare 快照，不符则报错"session_meta changed since migration manifest was
  created"，win 侧独立确认存在，与 mac 侧 TOCTOU 特征一致但非外推）→ `sub_140C34070`
  （overlap 校验 + splice）→ 真实 Win32 `CreateFileW`+`SetFileTime` 调用（`sub_14151D9B0`/
  `sub_14151C000`，经 import 引用 + Rust std panic 字符串内容级确认为
  `std::sys::pal::windows::fs::File::open()` 泛型库代码，非本 leaf 专属）。"无独立 check-only owner"
  特征不变，但与 mac 侧同一 leaf 的既有特征一致（mac 亦是合一入口且已 `consumerStartReady=true`），
  按本批次既有先例非阻断项。`strictImplementationUse`/`readyToImplement` 仍为 `false`（dim1 叶级
  未本轮重复；`sub_1405C49F0` orchestrator 内部体、`sub_14043F970` 哈希集合语义、完整 192 字节记录
  布局仍为 accepted_unknown）。完整证据见该 leaf 自身 `evidence.md` 2026-08-22 补记。
  **原 2026-08-21 结论（供追溯）**：`consumerStartReady=false`（BLOCKED，`independent_gap_type=
  self_declared_below_consumerStartReady_dim3_dim4_sideeffect`）。
- **consumer_action**：**2026-08-22 起双平台一致** `implement_against_contract`（须注明上述 mac 侧
  strictImplementationUse 订正）；⚠ DESTRUCTIVE（mac 侧确认；win 侧本轮独立确认真实 Win32 文件写入
  API 调用，非仅从报告文案推断）。

### 1.4 thread_model_catalog_consistency

- **check 判据**：mac 侧本轮未从 40+ 候选函数集中（集中在 `0x140bfbc30`–`0x140c3xxxx`
  区间，含已命名 `ensure_transition_rollout_write_capacity@0x140c31720`）判定出精确 owner
  （超出本轮预算，且红线13 禁止纯结构/地址判定身份）。win 侧 owner 经 **4 项独立内容级信号
  收敛确认**（非仅结构位置判定）：`thread_model_catalog_converge_owner_sys@0x140C2D520`
  （12540B）——事务重试标签字面量 "thread model convergence"、fix-mutation SQL 字面量
  `"UPDATE threads SET model = ?2 WHERE id = ?1"`、tracing 字面量
  `"relay_model_catalog"`/`"converged"`、`payload->model` DTO 字段访问链，并与已命名
  `reconcile_router_on` 编排器自带注释 "model catalog convergence" 结构性互证。
- **fix 行为**：SQLite `UPDATE threads SET model=?2 WHERE id=?1`，事务内 `COMMIT`/`ROLLBACK`——
  真实数据 mutating 副作用（producer 未标 DESTRUCTIVE，但确是真实写库操作）。dim3 经
  GATE-SPEC OR-branch（`terminated_reason=persistence_commit`）到达持久化叶，非完整 5-edge
  trace；4-slot fallback 比对表内容未解码（`get_strlit_contents` 失败，非纯 C 字符串）。
- **mac gate**：`consumerStartReady=true`。
- **win gate**：`consumerStartReady=true`（2026-08-21 promoted）；残留 accepted_unknown：
  4-slot fallback 比对表内容、per-thread 记录数组的生产者（推测为相邻管线阶段，未独立确认）、
  共享分发器内精确 `switch(a5)` case 索引数值。
- **consumer_action**：**双平台一致** `implement_against_contract`；⚠ mutating 标记保留
  （SQLite UPDATE + COMMIT/ROLLBACK）。

### 1.5 thread_response_item_ids

- **check 判据**：mac `inspect_thread_response_item_ids`/`count_invalid_ids_in_rollout`。
  win owner `sub_1405A12E0@0x1405A12E0`（5106B，本轮经**双重 sole-xref 字符串证据**确认，
  排斥此前 recon 会话"可能是纯 dispatcher"的猜测）。
- **fix 行为**：mac `fix_thread_response_item_ids`/`repair_invalid_ids_in_rollout`——
  **⚠ DESTRUCTIVE**：rollout response item id 原地重写 + `remove_unused_backup` 驱逐（保留/
  驱逐准则本轮未反编译）。win 侧：实际逐线程扫描 + 文件写入副作用的最可能承载函数
  `sub_1405B2510`（被调用 2 次，depth-2）**本轮未反编译**，底层写入 API 未恢复；仅 2/3
  结果消息模板 byte-exact（含具体相对备份路径
  `codexmate/relay/response-item-id-history-repair-backup`），完整 DTO/struct 布局与底层
  写入 API 未恢复。
- **mac gate**：`consumerStartReady=true`。
- **win gate**：**2026-08-22 更新（session `cc-aimami126-thread-response-item-ids-win-fix-recon-20260822`）**：
  `consumerStartReady=true`（PROMOTED；此前 BLOCKED 的独立于 dim1 的缺口——"实际写入函数未反编译，
  副作用未确认"——本轮已闭合）。`sub_1405B2510`（此前完全未反编译的 depth-2 callee，owner 调用 2
  次）全量反编译（20518 字符）并重命名 `thread_response_item_ids_repair_worker_sys`——确认为逐行
  repair-dispatch worker。其自身 8 个 callee 中的写入函数（此前完全未知）定位为 `sub_140B570A0`，
  经 `py_eval` 绕过 MCP 截断（常规 `decompile` 在此函数上截断，红线20）取得完整 40184 字符体，重命名
  `repair_invalid_ids_in_rollout`——内容级确认：以 GENERIC_WRITE 形态打开一个暂存临时路径（经真实
  `CreateFileW` 叶 `sub_14151D9B0`，内容确认为真正的 `std::sys::windows::fs::File::open_with`，非按
  名假设）、读原始 rollout 文件解析 JSON `type=="response_item"`/`payload`/`id` 字段、构造
  resolution-receipt `{schema_version,source_path,source_length,source_sha256}`，scope 结束无条件调用
  `staged_file_cleanup_drop@0x140B63F10`（一个此前已独立 FULL_CLOSURE 的 leaf，真实
  `DeleteFileW`-based `remove_file`）。该函数身份经**两条完全独立路径**交叉确认：本轮内容级分析 +
  对 `staged_file_cleanup_drop` 现场重新 `xrefs_to`（非引用该 leaf 既有 prose，红线31合规）。**win 侧
  DESTRUCTIVE 结论现已由真实 API 调用确认，非仅从报告文案推断**。`strictImplementationUse`/
  `readyToImplement` 仍为 `false`（精确 `WriteFile` 调用点、完整写行 DTO 格式仍为
  `gap_needs_reducer`，非阻断）。完整证据见该 leaf 自身 `evidence.md` `## ROUND 2` 章节。
  **原 2026-08-21 结论（供追溯）**：`consumerStartReady=false`（BLOCKED，`independent_gap_type=
  self_declared_below_consumerStartReady_dim3_dim4_sideeffect`）。
- **consumer_action**：~~**2026-08-22 起双平台一致** `implement_against_contract`；⚠ DESTRUCTIVE~~
  **2026-08-22b 撤回（回炉修正）**：见下方修正段——win 侧只确认 staged 临时文件生命周期，未确认对
  原 rollout 文件的破坏性修改；两平台重新变为**冲突/未裁决**，`remove_unused_backup`（mac）驱逐准则
  与 win 侧精确 `WriteFile` 调用点/写行格式均仍为 `gap_needs_reducer`。

**2026-08-22b 修正（回炉修正，session `cc-aimami126-codex-diagnostic-btier-doublereview-correction-20260822`）**：
上方"win gate"段落里"`sub_140B570A0`... 内容级确认：以 GENERIC_WRITE 形态打开一个暂存临时路径...
scope 结束无条件调用 `staged_file_cleanup_drop`... **win 侧 DESTRUCTIVE 结论现已由真实 API 调用确认**"
这一结论**被推翻**。重新审视同一份证据：GENERIC_WRITE 打开的是 **staged 临时路径**（其自身真实
`WriteFile` 调用点从未定位）；**原始 rollout 文件在同一函数内另一次调用中以只读方式打开**（未被写
入路径触碰）；scope 退出时 `staged_file_cleanup_drop` 对 staged 临时文件执行的是**删除**
（`DeleteFileW`），不是提交。全文未发现任何 rename-over-original 或其它把 staged 内容写回原文件的
步骤。这条链路（写模式打开 staged → 只读读原文件 → 删除 staged）**不能证明**原始 rollout 文件曾被
修改，与"从未真正提交、staged 内容被直接丢弃"同样吻合。据此：`sideEffectReady` 退回 PARTIAL；
`consumerStartReady` **退回 `false`**，恢复 2026-08-21 原始 BLOCKED 状态
（`independent_gap_type=side_effect_not_confirmed`，重开）；两平台**冲突恢复，未裁决**，
`CONSUMER-ACTION-MAP.md` 的保守规则（win `BLOCKED` 优先）重新适用。本轮反编译成果本身不被撤回——
`sub_1405B2510`/`repair_invalid_ids_in_rollout` 确实完整反编译，真实 `CreateFileW`（写模式打开
staged 路径）与真实 `DeleteFileW`（经 `staged_file_cleanup_drop`）调用确实存在——撤回的只是
"这构成对原文件的破坏性修复，已确认"这一结论。详见 §9 追加脚注、canonical `gate-report.json`
`leaf_gate_notes.thread_response_item_ids.gate_correction_20260822b`、raw leaf 自身 `evidence.md`
`## CORRECTION 2026-08-22b` 一节。

### 1.6 project_state_integrity_diagnostic_key_verify

- **check 判据**：字面串 `project_state_integrity`@`0x141830489`（+格式化变体
  @`0x141830f58`）确认存在于 `codex_project_state` 模块的 win64 二进制 rodata 中。win owner
  候选 `project_state_integrity_diagnostic_key_verify_owner_sys@0x14059db10`（2210B）+
  `_classify_owner_sys@0x1405a4460`（1599B）——**是本轮独立新发现的 2 个函数，地址与体积均不同于
  该产品既有的 4 个 FULL_CLOSURE leaf（`inspect`/`repair`/`repair_if_needed`/
  `stability_issue`）**，未采信任何既有 IDB 注释作自证据（红线31），现场
  `find_regex`+`xrefs_to` 独立复核。
- **fix 行为**：happy path 委托给同产品已有 canonical FULL_CLOSURE leaves `inspect()`/
  `repair_if_needed()`（本轮未重新反编译验证，按引用计入）——本 leaf 自身无直接 side effect
  （fs/db 副作用已由被委托的已闭合 leaf 承担）。3 处 `fmt::Arguments` 警告/错误消息模板内容
  未解码（仅确认 severity 标签、触发分支条件、字节长度，插值文本本身未解码）。
- **mac gate**：`consumerStartReady=true`；destructive_side_effects：无直接副作用（委托给
  已闭合 leaf，本轮未重新核实）。
- **win gate**：`consumerStartReady=true`（2026-08-21 promoted）；残留 accepted_unknown：
  3 处 fmt 模板文本未解码、`inspect()` 自身 ABI 级枚举语义（v19/v20/v31[10]）仅从控制流形状
  读出，未从其 canonical leaf 重新打开核实。
- **consumer_action**：**双平台一致** `implement_against_contract`（注明"仅 consumerStartReady
  证据档，非 readyToImplement"）。

### 1.7 state_db_relocation

- **check 判据**：mac/win 共享 `sub_140583950`（33771B check/report 扫描器，多 key 共用）；
  quiet-window gate classifier（`sub_140582CC0`/mac 对应函数）作为前置门。字面串
  `state_db_relocation`@`0x14182f9f5`（邻近串 `state_db_selected`@`0x141851fca` 未查）。
- **fix 行为**：**⚠ DESTRUCTIVE**——孤儿 state-db 重定位：创建 backup 目录，复制主 +
  `.wal` + `.shm` sidecar 文件到 `relay/state-db-backups/`，成功复制后删除/重命名原文件；
  partial-occupied 结果显式处理（报告哪些文件仍被锁定，非静默失败）；含
  `configured_sqlite_home` 孤儿证明机制 + computer-use/node_repl 占用提示。占用检测底层
  WinAPI 原语未反编译确认（推断为通用 `io::Error` 路径，非确认）。win 侧另发现一个未归并
  的第二条 `state-db-backups` 字面量代码路径 `sub_1405915E0`，触发条件未查，显式标记为独立
  未解函数，未折入本 leaf owner 链。
- **mac gate**：`consumerStartReady=true`。
- **win gate**：`consumerStartReady=true`（2026-08-21 promoted，经 `py_eval` SMB 绕过截断
  完整反编译）；残留 accepted_unknown：占用检测底层 WinAPI 原语、check 侧 issue-found 消息
  文本、未归并的 `sub_1405915E0` 代码路径。
- **consumer_action**：**双平台一致** `implement_against_contract`；⚠ DESTRUCTIVE 标记
  必须保留。

### 1.8 thread_provider_consistency_with_cache

- **check 判据**：mac 为 **4 参数签名** `check_thread_provider_consistency_with_cache`
  （第 4 参数 = cache/reader 句柄，形如 `DiagnosticRolloutProviderCache`/
  `hashbrown::RawTable`）。win owner 现已定位
  `thread_provider_consistency_with_cache_check_owner_sys@0x1405AABC0`——**此前被误标为
  `check_native_off_invalid_openai_thread_models`**（2026-08-07 命名时未字节级验证其自身
  构造的 key），本轮经 3 次独立 session 交叉 re-confirm：该函数经 3 处 `qmemcpy` 现场拼出
  的是 **27 字节 `"thread_provider_consistency"`**，非 39 字节
  `native_off_invalid_openai_thread_models`；**win 侧为 3 参数签名**（缺 mac 的 cache/reader
  句柄参数）。命名歧义已收敛：mac/win 两侧独立核验一致确认 `_with_cache` 是 mac 函数签名
  携带的一个 cache/reader 句柄**实现细节**，不是一个独立对外诊断 key；两平台实际暴露的诊断
  key 都是 27 字节 `thread_provider_consistency`（不带后缀）。但 `_with_cache` 机制本身
  （caller 侧线程 cache 句柄）在 win 侧**未独立确认等价**。
- **fix 行为**：mac `fix_thread_provider_consistency`——写 tmp+fsync+rename 持久化模式
  （mutating，producer 未标 DESTRUCTIVE，但是真实文件写副作用）。win 侧：check-half 仅追到
  `sub_1405C2FA0`→`sub_140B9D6B0`，未达终止叶；fix-half 消息模板仅早退分支 byte-verified，
  完整 DTO/struct 布局未闭合。
- **mac gate**：`consumerStartReady=true`（该 leaf 自报 `no_gate_promotion`，已被 mac
  reduce 依据其自身已闭合的 dim2/dim3/dim4/dim5(macOS) 提升）。
- **win gate**：`consumerStartReady=false`（BLOCKED，`independent_gap_type=
  dim2_now_closed_dim3_dim4_partial`；owner 已定位但 dim3/dim4 未达终止叶闭合，与 dim1 无关）。
  raw leaf 自身 `gate-report.json` 仍为 `no_gate_promotion`（本 canonical 条目只是记录 dim2
  闭合，未覆盖 raw leaf 自身 gate 字段）。
- **consumer_action**：mac=`implement_against_contract`；win=`BLOCKED`/`do_not_implement`。
  **两平台不一致，未裁决**，以 win 保守结论为准。

**2026-08-22b 补记（回炉修正，session `cc-aimami126-codex-diagnostic-btier-doublereview-correction-20260822`）**：
上方"check 判据"一段"命名歧义已收敛：mac/win 两侧独立核验一致确认 `_with_cache` 是...实现细节，
不是一个独立对外诊断 key"这一表述，与同批次 canonical `gate-report.json`
`leaf_gate_notes.thread_provider_consistency_with_cache.naming_ambiguity_note` 字段的表述
（"Not resolved by this pass -- needs a dedicated dim2/dim3 backend pass or explicit product
clarification"）**相互矛盾**。本轮核实：win 侧 owner（0x1405AABC0）经 13 次 `find_regex` +
全量 case 枚举，确认构造的是 27 字节 `thread_provider_consistency`，本 leaf 自己声明的 38 字节
`thread_provider_consistency_with_cache` 在 win 二进制中确认不存在——这一半是扎实的。但"两平台
实际暴露的诊断 key 都是 27 字节（不带后缀）"这一结论，本轮未找到独立验证 mac 侧同样不存在
38/39 字节独立 key 的证据链（mac 侧的验证方法与范围未在本节或本轮追溯到）。**是否 `_with_cache`
真的只是实现细节、不是独立诊断 key，本轮不代为裁决**，如实登记为待裁决项，与本文档 §3.2 记录的
39 字节 key（`native_off_invalid_openai_thread_models`）CHECK 半部分未定位问题一并留待后续
产品侧澄清或专项复核。详见 §2 表格脚注、canonical `gate-report.json`
`leaf_gate_notes.thread_provider_consistency_with_cache.leaf_identity_correction_20260822b`。

### 1.9 requires_quiet_window

- **check 判据（本 leaf 自身即分类器）**：mac `fix_requires_quiet_window@0x100afc090`；
  win `codex_diagnostic_requires_quiet_window_owner_sys@0x140582cc0`（1195B，本轮改名）。
  独立 `get_bytes` 逐字节解码的 **25-key 字节精确表**，覆盖其余 8 个 B 档 target 中 **7 个**
  自身诊断 key——证实这是一个真实存在的一级门禁机制（非假设），返回 0/1/2 三态
  （no_gate/requires_quiet_window/unrecognized_key）。dim3 经 `xrefs_to` 确认 4 个真实
  caller（fix dispatcher、`fix_all` driver、any-item scanner、bulk-fix 调用点）5 级调用链，
  终止于通用 tokio runtime glue（已披露原因，非未经审视的 bail）。
- **fix 行为**：纯分类器，无 I/O 副作用（`side_effects=none`）。caller 传入的 bypass 标志
  （`a8`/`a9`）是否在其他调用点被置真，本轮仅确认 1 处调用点恒为 0，未穷尽全局搜索。共享
  顶层 orchestrator `sub_1405C49F0`（17706B，本 leaf 4 个确认真实 caller 之一）内部体本轮
  未反编译——该 caller 处的 gate 应用调用边**已**经 `xrefs_to` 确认，仅其内部逻辑未展开。
- **mac gate**：`consumerStartReady=true`（本轮由一个此前中断、raw 证据不完整的 leaf 经
  follow-up resume session 补齐全部 6 个规范文件并独立 re-verify 后 promoted，未采信被
  中断会话的自述）。
- **win gate**：`consumerStartReady=true`（2026-08-21 promoted）。
- **consumer_action**：**双平台一致** `implement_against_contract`；残留 accepted_unknown：
  bypass 标志全局用法未穷尽、`sub_1405C49F0` 内部体未展开、0/1/2 三态返回值的精确 Rust 语义
  仅从控制流形状读出。

---

## 2. 汇总表

| target | mac gate | win gate | consumer_action | 是否 DESTRUCTIVE/mutating |
|---|---|---|---|---|
| router_http_contract | consumerStartReady | ~~consumerStartReady（2026-08-22 更新，见 §10；owner 归属措辞 2026-08-22b 回炉修正）~~ **consumerStartReady=false（2026-08-22c 用户裁决撤回，见 §11）** | ~~**2026-08-22 起一致** `implement_against_contract`~~ **2026-08-22c 起冲突/待裁决恢复**，`do_not_implement`（win 保守结论为准） | 写入路径存在但触发条件未完全追清（§10；mac 侧确认 DESTRUCTIVE，win 侧本轮确认可达写盘路径但未确认是否每次必写；该技术结论不受 §11 gate 撤回影响） |
| takeover_backup_orphan | consumerStartReady | consumerStartReady | 一致 `implement_against_contract` | ⚠ DESTRUCTIVE |
| thread_poisoned_instructions | consumerStartReady（strictImplementationUse 已订正为 false） | consumerStartReady（**2026-08-22 更新，见 §8；owner size 2026-08-22b 回炉修正为 10668B**） | **2026-08-22 起一致** `implement_against_contract` | ⚠ DESTRUCTIVE（mac 侧确认；win 侧本轮独立确认真实 Win32 `CreateFileW`+`SetFileTime` 调用，非仅报告文案推断） |
| thread_model_catalog_consistency | consumerStartReady | consumerStartReady | 一致 `implement_against_contract` | ⚠ mutating（SQLite UPDATE） |
| thread_response_item_ids | consumerStartReady | **consumerStartReady=false（BLOCKED，2026-08-22b 回炉修正撤回，见下方脚注）** | **两平台冲突恢复，未裁决**（win 保守结论为准） | ~~⚠ DESTRUCTIVE~~ **2026-08-22b 修正**：只确认"写模式打开 staged 临时文件 + 退出时 `DeleteFileW` 删除该临时文件"，原 rollout 文件全程只读；真正破坏性动作（`WriteFile` 落盘 + rename-over-original 提交）未定位，不构成对原文件的破坏性确认（mac 侧 DESTRUCTIVE 结论不受影响，不得据此反推 win） |
| project_state_integrity_diagnostic_key_verify | consumerStartReady | consumerStartReady | 一致 `implement_against_contract` | 无直接（委托已闭合 leaf） |
| state_db_relocation | consumerStartReady | consumerStartReady | 一致 `implement_against_contract` | ⚠ DESTRUCTIVE |
| thread_provider_consistency_with_cache | consumerStartReady | **consumerStartReady=false（leaf 身份未闭合，2026-08-22b 回炉修正撤回，见下方脚注）** | **待裁决**：本 leaf 声明的 38 字节 key 未在 win 二进制中找到，已闭合的 27 字节 key `thread_provider_consistency` 证据是否适用于本 leaf 本身是未裁决的命名问题 | check=只读无副作用；fix=mac 有 mutating（写tmp+fsync+rename）——以上均为 **27 字节 sibling key** 的证据，未确认适用于本 leaf 声明的 38 字节 target |
| requires_quiet_window | consumerStartReady | consumerStartReady | 一致 `implement_against_contract` | 无（纯分类器） |

**2026-08-22b 追加脚注（回炉修正，session `cc-aimami126-codex-diagnostic-btier-doublereview-correction-20260822`，由用户外部发起的双复审 local=PASS WITH CONDITIONS/adversarial=FAIL 触发）**：
- `router_http_contract`：`sub_140580960` 的"CHECK 链根"归属从未被任何 check-mode 调用边证实（全库仅 1 个 code xref，来自 FIX 分发器 case20）；`§3.1`（CHECK owner 链是否需要第二轮独立复核）保持 open，未被任何此前会话真正闭合。`consumerStartReady=true` 本身不受影响。详见 §10 追加段与 canonical `gate-report.json` `leaf_gate_notes.router_http_contract.check_side_attribution_correction_20260822b`。
- `thread_response_item_ids`：win gate 由 `consumerStartReady=true` **撤回**为 `false`——此前"DESTRUCTIVE 已确认"的结论把"staged 临时文件生命周期清楚"误当成"对原文件的破坏性修复清楚"，两者是不同断言。详见 canonical `gate-report.json` `leaf_gate_notes.thread_response_item_ids.gate_correction_20260822b`。
- `thread_provider_consistency_with_cache`：win gate 由 `consumerStartReady=true` **撤回**为 `false`——本 leaf 目录名/声明目标是 38 字节 key，但 13 次 `find_regex` + 全量 case 枚举证明该 key 在 win 二进制中不存在；已"闭合"的证据实际构造的是不同的 27 字节 key `thread_provider_consistency`。二者是否为同一目标的命名变体是**产品侧待裁决问题**，本轮不代为裁决。详见 canonical `gate-report.json` `leaf_gate_notes.thread_provider_consistency_with_cache.leaf_identity_correction_20260822b`。
- `thread_poisoned_instructions`：owner `check_and_fix_thread_poisoned_instructions@0x1405ae4b0` 的体积由误记的 52179B 统一修正为 10668B/0x29ac（与同日 `_shared-fix-dispatcher-sub_1405cbf60` leaf 独立实测及 2026-08-07 原始记录一致）；`consumerStartReady=true` 本身不受此项影响。

9 个 target 中 5 个双平台一致可实现，4 个双平台冲突未裁决（`router_http_contract` /
`thread_poisoned_instructions` / `thread_response_item_ids` /
`thread_provider_consistency_with_cache`）——**无一 target 达到 `strictImplementationUse`
或 `readyToImplement`**（module-wide dim1 此前 Unknown 已于本轮解除，但没有任何 leaf 因此
单独提升到 strict 档；strict 档需要的其余维度仍有各自缺口）。dim6（C5 验收测试映射）双平台
均未处理，为实现侧责任，不挡 consumerStartReady 起步。

> **口径更正（2026-08-22，doc-cleanup-a1a7-20260822 核实，非新反编译）**：上面这句写于本轮更早时刻，此后 §7/§8 已把 `thread_provider_consistency_with_cache`/`thread_poisoned_instructions` 从"4 个冲突"移出（见下方 §7/§8 更新段落），下方 2026-08-22b 回炉修正段落又把这两个 target 重新计入"4 个仍处于冲突/待裁决状态"——但据该段落自己的措辞，`router_http_contract`"win gate 本身未受影响"、`thread_poisoned_instructions`"gate 未受影响，仅 owner size 数值修正"，两者的 `consumerStartReady`/`consumer_action` 均未改变，与本文档 §2 表格 321/323 行"**2026-08-22 起一致** `implement_against_contract`"的记录一致，不构成"双平台冲突"。真正因回炉修正而撤回 gate、导致两平台冲突的只有 `thread_response_item_ids`/`thread_provider_consistency_with_cache` 2 个 target。按现盘字段（各 leaf 自身 `consumerStartReady` 与本文档 §2 表格 `consumer_action` 列）核实：9 个 target 中双平台实际一致 `implement_against_contract` 的是 **7 个**（原 5 个 + `router_http_contract` + `thread_poisoned_instructions`），真正冲突/待裁决的是 **2 个**（`thread_response_item_ids`/`thread_provider_consistency_with_cache`）。`router_http_contract` 的 §3.1 缺口与 `thread_poisoned_instructions` 的 owner size 修正都是独立于 gate 的其它问题，不应计入"双平台冲突"统计。以此为准，下方 2026-08-22b 段落的"4 个仍处于冲突/待裁决状态"计数口径不成立，见该段落后追加的对应更正。

**2026-08-22 更新（见 §7）**：`thread_provider_consistency_with_cache` 的 win 侧 dim3/dim4
缺口已闭合，win gate 升级为 `consumerStartReady`（startMode=`product_decision`）——不再是
"4 个冲突"之一，双平台 CHECK 结论现已一致；FIX 侧转为需要产品侧显式裁决的已确认跨平台差异，
不再是未裁决的证据冲突。本更新只核实/闭合该 target 自身逆向缺口，未重新核验本表其余行
（含同一批次内另一并发 session 观察到的 `router_http_contract` win 侧变更，若有，未由本轮
独立核实，不在此处代为断言）。

**2026-08-22 更新（见 §8，独立同日 session）**：`thread_poisoned_instructions` 的 win 侧
dim3/dim4 缺口（"实际写入调用未定位"+"无直接观察到的副作用"）已闭合，win gate 升级为
`consumerStartReady`（`strictImplementationUse` 仍为 `false`）——不再是"4 个冲突"之一，
双平台 `consumer_action` 现已一致 `implement_against_contract`。截至本条更新，原"4 个双平台冲突"
中已有 2 个收敛为一致（`thread_provider_consistency_with_cache`、`thread_poisoned_instructions`），
仅剩 `router_http_contract`、`thread_response_item_ids` 2 个 target 状态未在本文档内独立核实
（`router_http_contract` 的 win 侧是否也已变更，若有，由其自身 session 负责更新本表，本条更新
未代为断言）。本更新只核实/闭合 `thread_poisoned_instructions` 自身逆向缺口，未重新核验本表
其余行。

**2026-08-22b 更新（回炉修正，session `cc-aimami126-codex-diagnostic-btier-doublereview-correction-20260822`，
由用户外部发起的双复审 local=PASS WITH CONDITIONS/adversarial=FAIL 触发）**：上方 §7/§9 记录的
"4 个冲突已收敛为 1 个"这一叙事**部分不成立**。`thread_response_item_ids`（§9 promotion）与
`thread_provider_consistency_with_cache`（§7 promotion）经复审均查出问题、双双撤回
`consumerStartReady=true`——前者的 DESTRUCTIVE 结论把 staged 临时文件生命周期误当成对原文件的
破坏性修复；后者的 gate 提升建立在与本 leaf 自己声明的 38 字节 key 不同的另一个 27 字节 key 证据
之上，身份未闭合。据此，9 个 target 中双平台真正一致可实现的仍是 **5 个**（原始未变的那 5 个：
`takeover_backup_orphan`/`thread_model_catalog_consistency`/`project_state_integrity_diagnostic_
key_verify`/`state_db_relocation`/`requires_quiet_window`），**4 个仍处于冲突/待裁决状态**：
`router_http_contract`（win gate 本身未受影响，但 CHECK 侧归属仍有 §3.1 未闭合的独立复核缺口）、
`thread_poisoned_instructions`（gate 未受影响，仅 owner size 数值修正）、`thread_response_item_ids`
（gate 撤回，两平台冲突恢复）、`thread_provider_consistency_with_cache`（gate 撤回，leaf 身份待裁决）。
详见 §2 表格脚注与各自 canonical `gate-report.json` 对应字段。

> **口径更正（2026-08-22，doc-cleanup-a1a7-20260822 核实，非新反编译，非重新裁决任何 gate——红线35）**：上面"4 个仍处于冲突/待裁决状态"这一计数把 `router_http_contract`/`thread_poisoned_instructions` 也算作冲突，但本段落自己同时写明这两个 target 的 gate/`consumer_action` "未受影响"——即两者仍是双平台一致 `consumerStartReady`/`implement_against_contract`（与 §2 表格 321/323 行一致），只是各自存在独立于 gate 的其它未闭合问题（§3.1 复核缺口；owner size 数值修正），不构成"双平台冲突"。真正因本轮回炉修正被撤回 gate、导致两平台冲突的只有 `thread_response_item_ids`/`thread_provider_consistency_with_cache` 2 个。按现盘字段核实，9 个 target 中双平台一致可实现的是 **7 个**，真正冲突/待裁决的是 **2 个**，不是上文的"5 个/4 个"。本更正只统一口径，不改判任何一个 leaf 自身的 gate 状态。
>
> **口径再更正（2026-08-22c，session `cc-aimami126-codex-diagnostic-router-http-contract-user-adjudication-d1d2d3-20260822`，用户已裁决，见 §11）**：上一条"7 个一致/2 个冲突"本身核实无误，但用户本轮就 §3（router_http_contract vs thread_response_item_ids 判据不对称）明确裁决：按更严标准，`router_http_contract` 也撤回 `consumerStartReady`（由 `true` 改判 `false`）。从现盘字段重新实算（不沿用旧数字）：win 侧 9 个 target 中 `consumerStartReady=true` 的现为 **6 个**（`project_state_integrity_diagnostic_key_verify`/`requires_quiet_window`/`state_db_relocation`/`takeover_backup_orphan`/`thread_model_catalog_consistency`/`thread_poisoned_instructions`），mac 侧全部 9 个仍为 `consumerStartReady=true`（已交叉核对 `audits/macos-1.2.6-codex_diagnostic/gate-report.json`）；双平台一致可实现的现为 **6 个**，真正冲突/待裁决的现为 **3 个**（`router_http_contract`/`thread_response_item_ids`/`thread_provider_consistency_with_cache`）。§2 表格 321 行已同步；§10 表格（757-761 行）保留原文，追加见 §11。

---

## 3. 本轮新发现的两个独立缺口（未在本轮解决，留待后续）

### 3.1 router_http_contract：win 侧证据本身未经过第二轮独立复核

win 侧对该 target 的 owner 链（`sub_140580960`→`sub_140591ED0`→`sub_1405522A0`）与 DTO
字段闭合，**全部来自单一 deep-recon 会话**（`cc-aimami126-codex-diagnostic-btier-
deeprecon-router-http-contract-win-20260821`）一次性产出；该 raw leaf 磁盘上只有
`evidence.md` + `interface-report.json` + `ida/pseudocode/`，**没有独立的
`manifest.json`/`gate-report.json`/`call-tree.json`/`data/producer-ledger.json`**（本批次
其余 8 个 win leaf 同样普遍缺这几个文件，这本身不是本 target 独有的异常）。真正与其余
leaf 的差异在于：本批次中拿到**第二轮独立复核/纠正会话**的 leaf 有明确先例——
`takeover_backup_orphan` 有与 1.2.3 win 基线的结构同构交叉核验，
`thread_provider_consistency_with_cache` 有专门的 owner-correction 会话做了 3 次独立
re-confirm——而 `router_http_contract` 的 win 侧 CHECK 链结论目前**仅有这一轮**内容，未经
后续会话独立复现或交叉验证。该 target 本身已被列为独立于 dim1 的 `blocks_start`
（fix 路径是否存在未知），这一点证据链是扎实的；但"CHECK 侧 owner 链本身是否需要第二轮
独立会话复核"是本轮 SoT 整理时新发现、尚未处理的验证深度缺口，记录于此，不在本轮解决范围。

> **状态更正（2026-08-22b，回炉修正，session `cc-aimami126-codex-diagnostic-btier-doublereview-correction-20260822`，由用户外部发起的双复审 local=PASS WITH CONDITIONS/adversarial=FAIL 触发）**：
> 本节保持 **open**，未被此前任何会话真正闭合。2026-08-22 早些时候的 `router_http_contract`
> `fixpath-reduce-win-20260822` reduce pass 曾在 `audits/windows-1.2.6-codex_diagnostic/gate-report.json`
> `leaf_gate_notes.router_http_contract.independent_gap_type` 字段写入 `"CLOSED_20260822"`，但该字段
> 的 `was:` 标注范围是 `fix_path_existence_unresolved`（dim3/写入路径存在性），**不是**本节 §3.1 所问的
> "CHECK 侧 owner 链本身是否需要第二轮独立会话复核"——两者是不同的缺口。该 reduce pass 自身的
> `evidence.md` 明确自述其方法是"对已捕获完整文件的逐行复读（not a re-decompile — the existing file
> already has the full body）"，即复读既有产出、非现场发起新的独立反编译/`xrefs_to` 验证，因此**不构成**
> §3.1 要求的"第二轮独立会话复核"。§3.1 记录的验证深度缺口**保持未解决**，任何下游文档/字段不得将其
> 读作 `CLOSED_20260822`。（另见本文档 §10 与 canonical bundle `gate-report.json`
> `leaf_gate_notes.router_http_contract.check_side_attribution_correction_20260822b` 字段——同一轮修正
> 还发现 §3.1 所质疑的 CHECK owner 链本身，其"CHECK"归属标签也从未被独立证实，详见该处。）

> **2026-08-22 追记（回炉修正，session `cc-aimami126-codex-diagnostic-consumer-doc-nul-index-repair-20260822`，不改写上文原文）**：上文两条前提均已被后续同日 session 处理，本追记只做指针同步，不重新裁决：
> 1. "该 target 本身已被列为独立于 dim1 的 `blocks_start`（fix 路径是否存在未知），这一点证据链是扎实的"——该premise 部分已被 §10（同日，session `cc-aimami126-router-http-contract-a6-callback-keycount-reconcile-20260822`）更新：§10 从 `unk_1418506A8+0x28`（FIX 分发器 case20 调用的回调）出发独立追出 9 跳到 `NtWriteFile`，字符串字面量内容级确认经 `codex_config_reconciler`/`config_takeover`/`atomic_write` 三模块，即"存在某条可达写盘路径"这一点有扎实证据。**但**（见下方第 5 点）这不等于"fix 路径是否存在未知"这一 blocks_start 理由已全部消除——§10 的追踪起点 `sub_140580960` 本身是否真的是 CHECK 链根，是另一个尚未独立证实的假设，本追记不代替本轮并行任务对此下结论。
> 2. "该 raw leaf 磁盘上只有 `evidence.md` + `interface-report.json` + `ida/pseudocode/`，没有独立的 `manifest.json`/`gate-report.json`/`call-tree.json`/`data/producer-ledger.json`"——现场核对（本追记时刻）该 leaf 目录已含 `manifest.json`/`gate-report.json`/`call-tree.json`/`data/producer-ledger.json`（均由本节之后的 2026-08-22 fixpath-reduce 与 a6-callback-correction 两个 session 补齐），文件完整性缺口已不存在。
> 3. 本节标题所指"CHECK 侧 owner 链本身是否需要第二轮独立会话复核"这一验证深度问题**未被上述两点关闭**——是否已有独立会话对 `sub_140580960`→`sub_140591ED0`→`sub_1405522A0` 这条 CHECK 链本身做过与 fix-path 问题相互独立的第二轮复核，本追记未核实，原问题继续视为未解决记录于此。
> 4. 本追记不代表本轮为 `router_http_contract` 的 `consumerStartReady` 状态背书或推翻——该批次多项 gate 提升的论证效力正由本轮并行任务据实复核（红线35 GATE_DECISION_FINALITY，终局判定不在本追记范围）。
> 5. **重要更正（本追记撰写过程中发现）**：`REVERSE-STATUS.md` 文末（本追记撰写时刻的最后一节）记录了一条同日仍在进行中的认领——`## 回炉修正 — codex_diagnostic B-tier 双复审 Confirmed 项修正 — CLAIM`（session `cc-aimami126-codex-diagnostic-btier-doublereview-correction-20260822`，`status: in-progress`，本追记撰写时尚无 DONE/CLOSURE 收口）——其任务范围第 1 项**正是**本节标题这个"CHECK 侧 owner 链是否需要第二轮独立复核"问题，且给出了比第 3 点更具体的疑点："修正 `sub_140580960`「CHECK 链根」归属的未经证实断言（全库仅 1 个 code xref 且来自 FIX 分发器 case20，从未被任何 check-mode 调用边证实）"，并明确要求"§3.1 保持 open，不得标 `CLOSED_20260822`"。本追记完全遵照——不标 `CLOSED`——但第 1 点的措辞需要在此进一步限定：§10 的 9 跳写入链追踪本身（起点到 `NtWriteFile` 的技术追踪）与"`sub_140580960` 是否真的兼任 CHECK 链根"是两个独立问题，前者不因后者未决而失效，但"fix 路径是否存在未知"这一 `blocks_start` 理由的消除，间接依赖于"CHECK 与 FIX 共用同一 owner"这一未决假设——若该假设最终不成立，`consumerStartReady` 的论证基础需要重新评估，不是本追记能替本轮并行任务下的结论。读者应以该并行任务收口后的 `REVERSE-STATUS.md`/canonical `gate-report.json` 为准，不要仅凭本追记第 1 点下定论。

### 3.2 39 字节 key（`native_off_invalid_openai_thread_models`）的 CHECK 半部分在 win 侧仍未定位

2026-08-07 item4 调查一度怀疑 `0x1405ae4b0`（10668B/378 basic blocks）是该 39 字节 key 的
FIX 函数（`fix_native_off_invalid_openai_thread_models`），但用调用图传播法在共享分发器
`sub_1405CBF60` 内定位到该地址实际位于 **case 28**，字节级解码其 SIMD 比对常量得到的是
28 字符 `"thread_poisoned_instructions"`，与目标语义无关，已判定 `genuine_ceiling` /
`DISCONFIRMED`（REVERSE-STATUS.md ~5225-5276）。该 39 字节 key 真正的 **FIX 半部分**随后
在同一分发器 **case 39** 被确认（REVERSE-STATUS.md:7167，`thread_provider_consistency_
with_cache` 本轮会话交叉验证一致，状态 CONFIRMED-inline；见该 leaf windows
`manifest.json.covered_target_details[8].note`）。

但该 39 字节 key 的 **CHECK 半部分函数身份，本轮仍未定位**。此前被认为可能是其 CHECK owner
的 `0x1405AABC0`——经本轮 3 次独立字节级 re-confirm——实际构造的是**27 字节**
`"thread_provider_consistency"`（`thread_provider_consistency_with_cache` 这个 target 自己
的 key），而**不是** 39 字节的 `native_off_invalid_openai_thread_models`。这是一次此前
归属误判的纠正（`0x1405AABC0` 于 2026-08-07 命名时未字节级验证自身构造的 key），同时也
暴露了一个新缺口：`native_off_invalid_openai_thread_models` 的 CHECK owner，在 win 侧
15 个 case 桶（~24-25 个诊断 key）的分发器空间中，尚未有任何候选函数被独立确认对应。

**以上两点均为本轮 SoT 核实过程中新发现的独立缺口，明确不是本轮任务范围要解决的问题**，
留给下一轮 deep 会话处理。

---

## 4. 用户产品侧决策（供实现方参照，不改变逆向证据本身）

以下为用户在本轮明确拍板的 Polaris 实现层决策，**与上文的逆向证据结论相互独立**——即，
参照产品（AiMaMi）确实存在对应的安全门禁分类器这一逆向事实不受这些决策影响，这些决策只
约束 Polaris 侧如何组织实现。

### 4.1 requires_quiet_window 在 Polaris 侧应实现为横切守卫逻辑，不是独立诊断 id

逆向证据（见 §1.9）确认参照产品里 `requires_quiet_window` 确实是一个真实存在的一级门禁
分类器（25-key 字节精确表，覆盖其余 8 个 B 档 target 中 7 个自身 key，接在 fix 分发器最前
做前置判断，返回 0/1/2 三态）——**这一逆向事实本身不变**。

但用户决定：Polaris 侧的实现方式应类似 `excludedFromBatchFix` 那样，做成**横切守卫逻辑**——
接入 `fix_issue`/`fix_all` 的前置判定，**不带自己独立的 diagnostic id，不在诊断列表中单独
展示**。这是产品实现决策，不影响本文档 §1.9 记录的逆向证据结论（参照产品确有对应的安全门禁
分类器）。

### 4.2 分组归属

- `state_db_relocation` → **env** 分组
- `project_state_integrity_diagnostic_key_verify` → **runtime** 分组

（其余 7 个 target 的分组归属，本轮未涉及，沿用既有约定或留待用户后续指示。）

---

## 5. 证据指针

- mac canonical bundle：`audits/macos-1.2.6-codex_diagnostic/{gate-report.json,manifest.json}`
- win canonical bundle：`audits/windows-1.2.6-codex_diagnostic/{gate-report.json,manifest.json}`
- dispatch 表：`CONSUMER-ACTION-MAP.md` `<!-- CODEX_DIAGNOSTIC_BTIER_9TARGET_DUALPLATFORM_20260821 -->`
  一节
- mac raw leaves：`raw/aimami/1.2.6/macos-arm64/{core/relay,relay}/codex_diagnostic/<target>/`
- win raw leaves：`raw/aimami/1.2.6/windows-x64/relay/codex_diagnostic/<target>/`
- 共享巨型分发器（未来 deep 会话首要目标）：`sub_1405CBF60`@`0x1405cbf60`（win，25193B，
  per-key FIX 分发器）、`sub_1405C49F0`@`0x1405c49f0`（win，17706B，顶层 orchestrator /
  `fix_all` handler，`sub_140583950`@`0x140583950`（win，33771B，共享 CHECK/report 扫描器）
- 前端补充证据：`intermediate/aimami/1.2.6/frontend/_codex_diagnostic-extraction/`

---

## 6. 本文档的边界声明

本文档是消费者面向的证据状态整理，不新增任何 IDA 调用、不做任何 IDB 写入、不提升任何 leaf
的 gate 字段（所有 gate 状态原样引用自 §1 所列 canonical `gate-report.json`）。§3 两个缺口
与 §4 两条产品决策均按用户本轮原话记录，未做本轮范围外的推断或裁决。真机对照（红线25）
双平台均未执行，未对照。

---

## 7. 2026-08-22 追加：`thread_provider_consistency_with_cache` win 侧 dim3/dim4 缺口闭合

> session `cc-aimami126-codex-diagnostic-thread-provider-consistency-with-cache-dim3dim4-closure-win-20260822`。
> 本节只闭合 §1.8/§2 中该 target 记录的缺口，**不改写** §1.8 原文、**不重新裁决** §3.2
> 记录的（explicitly 不同的）39 字节 key `native_off_invalid_openai_thread_models` CHECK
> owner 缺口——该项仍未定位，仍留待后续轮次，本轮未触碰。

> **2026-08-22b 撤回（回炉修正，session `cc-aimami126-codex-diagnostic-btier-doublereview-correction-20260822`，
> 双复审 local=PASS WITH CONDITIONS/adversarial=FAIL 触发）**：本节下方"闭合 dim3/dim4、promoted
> `consumerStartReady=true`"的结论**已撤回**。本节自己的证据（见下方正文）已经如实标注了这是
> "for this leaf's own 27B key"——但本 leaf 目录/声明的 target 是**38 字节** key
> `thread_provider_consistency_with_cache`，经 13 次独立 `find_regex` + 全量 case 桶枚举证明该
> 38 字节 key 在 win 二进制中不存在。本节把针对 27 字节 sibling key 的证据当作闭合了本 leaf 自身的
> gate，未解决"这是否是同一目标的命名变体"这一前提问题。该前提是**产品/命名待裁决问题**，本轮不
> 代为裁决。`consumerStartReady` 退回 `false`。详见 canonical `gate-report.json`
> `leaf_gate_notes.thread_provider_consistency_with_cache.leaf_identity_correction_20260822b`
> 与 raw leaf 自身 `gate-report.json` `leaf_identity_correction_20260822b`。以下原文保持不变，
> 供追溯：

**背景**：§1.8 记录 win 侧 dim2（owner）已 CONFIRMED，但 dim3（"check-half 仅追到
`sub_1405C2FA0`→`sub_140B9D6B0`，未达终止叶"）与 dim4（"fix-half 消息模板仅早退分支
byte-verified，完整 DTO/struct 布局未闭合"）仍为 partial，win gate 因此维持
`BLOCKED`/`do_not_implement`，与 mac 的 `consumerStartReady`/`implement_against_contract`
不一致、未裁决。

**本轮闭合内容**：

1. **check-half 调用树闭合**：独立重新反编译 `sub_140B9D6B0`（provider/thread 记录采集引擎）
   与其调用者链上的 `sub_1405CBD80`（0计数分支报告构造器），确认整条链
   `0x1405AABC0`（check owner）→`sub_1405C2FA0`→`sub_140B9D6B0`/`sub_1405CBD80` 全程无
   文件/注册表/网络/进程 I/O，终止于纯内存态诊断报告结构体构造并返回（`terminated_reason=
   response_serialize`）。

2. **fix-half 正向负向发现（非 accepted_unknown）**：直接读取共享 FIX 分发器
   `sub_1405CBF60` 的 case27 代码块原文——该 target 自身 27 字节 key 对应的 case，**只**
   调用 CHECK 函数后返回，无第二次调用、无写入分支。经三向穷尽交叉核验（key SIMD 常量
   `xrefs_to` 全库仅 3 处代码引用，全部归类；`lookup_funcs` 全库符号名扫描 0 命中；CHECK
   函数自身伪代码扫描文件/写入 API 关键词 0 命中）确认：**win 侧经由已确认的 FIX 分发机制，
   不存在该 key 的独立持久化写入动作**——这与 mac 侧确有独立、真实写入副作用的
   `fix_thread_provider_consistency`@`0x100b1c0a0`（写tmp+fsync+rename）形成**已确认**（非
   未知）的跨平台行为差异。

**结论对 §1.8/§2 判定的影响**：

- win gate：`BLOCKED` → `consumerStartReady`（`startMode=product_decision`）。
- `consumer_action`：CHECK 侧双平台一致 `implement_against_contract`（只读、零副作用，双平台
  语义相同）；FIX 侧不再是"未裁决的证据冲突"，而是**已确认的产品实现决策点**——Polaris 是否
  要在 win 侧新增写入式自动修复以对齐 mac，还是原样实现 win 上游本身就是"仅重新检查、不写入"
  的行为。**不建议默认假设 win 需要复刻 mac 的写入行为**，因为逆向证据显示上游本身在 win 上
  就没有实现它。
- `strictImplementationUse`/`readyToImplement` 仍为 `false`——dim6（验收映射）本轮未触碰。

**残余诚实限制（未消除）**：无法排除一个完全不经由此 SIMD 字面量、经由其他索引机制到达的、
完全独立的 win 写入函数（需要全量 call-graph-propagation 扫描，本轮未尝试，预算原因）。
39 字节 key `native_off_invalid_openai_thread_models` 的 CHECK owner 缺口（§3.2）**未受本节
影响，仍未定位**——本轮新发现的 `sub_140583170`（quiet-window 相邻过滤器）经核实**不是**
该 owner。

**证据指针**：`raw/aimami/1.2.6/windows-x64/relay/codex_diagnostic/thread_provider_consistency_with_cache/evidence.md`
`## FOLLOW-UP — 2026-08-22` 一节；同 leaf `gate-report.json`/`manifest.json`/`call-tree.json`/
`interface-report.json`/`data/producer-ledger.json`；`audits/windows-1.2.6-codex_diagnostic/
{gate-report.json,manifest.json}` 对应 leaf 条目；`INDEX.jsonl` 与 `internal-reverse/INDEX.jsonl`
新增两行（`type=sub_gap_closure`/`type=gate_promotion`）；`REVERSE-STATUS.md` 本轮新增
DONE 章节（session id 同上）。

---

## 8. 2026-08-22 追加：`thread_poisoned_instructions` win 侧 dim3/dim4 缺口闭合

> session `cc-aimami126-thread-poisoned-instructions-win-gapfill-20260822`（与 §7 独立并行，
> 同日不同 target）。本节只闭合 §1.3/§2 中该 target 记录的缺口，**不改写** §1.3 原文、
> **不重新裁决** §3.2 记录的 39 字节 key `native_off_invalid_openai_thread_models` CHECK
> owner 缺口——两者是不同 target，本轮未触碰后者。

**背景**：§1.3 记录 win 侧"check+fix 合一无独立 check-only owner"，且实际写入/修复调用
（4 个候选 `sub_14152E0B0`/`sub_140C0B0F0`/`sub_1405B8160`/`sub_140C11360`）均未反编译，
"无直接观察到的副作用，仅从报告文案（已修复/清理迁移快照）推断"，win gate 因此维持
`BLOCKED`/`do_not_implement`，与 mac 的 `consumerStartReady`/`implement_against_contract`
不一致、未裁决。

**本轮闭合内容**：

1. **写入调用链定位**：4 个候选全部反编译，另追踪 6 个更深层 callee。确认链路：
   `check_and_fix_thread_poisoned_instructions@0x1405ae4b0` →
   `rewrite_session_meta_base_instructions_helper_sys@0x1405b8160`（本轮重命名；`xrefs_to`
   确认**仅 2 处代码 xref，均来自本 leaf owner**——sole caller，非猜测）：解析 session_meta
   JSON payload，设置 `base_instructions` 字段（字面量 `"payload"`/`"base_instructions"`
   均字节核对），重新序列化。→ `sub_140C11360`（**TOCTOU 守卫**：重新调用 `sub_140C0B0F0`
   re-scan 定位 session_meta 行，与调用方传入的快照做 byte-compare，不符则报错
   `"session_meta changed since migration manifest was created"` 后中止——win 侧独立确认
   存在此机制，非从 mac 外推）→ `sub_140C34070`（校验替换区间不重叠，报错
   `"session_meta replacements overlap"`；splice 内容后打开目标文件）→
   `sub_141528E20`→`sub_14151DC30`→`sub_14151D9B0`（**真实 Win32 `CreateFileW` 调用**，经
   `__imp_CreateFileW` import 引用 + Rust std 原生 panic 字符串内容级确认为
   `std::sys::pal::windows::fs::File::open()` 泛型库代码）→ `sub_14151BF50`→`sub_14151DDD0`
   （真实 `GetFileInformationByHandle`/`GetFileInformationByHandleEx`）+ `sub_14151C000`
   （真实 `SetFileTime`）。

2. **共享 vs 专属判定（rename 纪律）**：`sub_140C0B0F0`/`sub_140C11360`/`sub_140C34070`
   经 `xrefs_to` 确认为**共享基础设施**（分别 10/7/6 个不同 caller，含
   `thread_model_catalog_converge_owner_sys@0x140c2d520`——`thread_model_catalog_consistency`
   的已确认 owner），本轮**未重命名**，只加注释；仅 sole-caller 确认的 `sub_1405B8160`
   重命名。

3. **副作用从"推断"升级为"直接观察"**：真实 Win32 `CreateFileW`+`SetFileTime` 调用链是
   本轮独立反编译定位到的，不是从"已修复"/"清理迁移快照"报告字符串推断得出——这正是
   GATE-SPEC sideEffectReady 要求的"明确"标准。

4. **独立复核性质澄清**："check+fix 合一无独立 check-only owner"本身未变，但与 mac 侧
   同一 leaf 的既有特征完全一致（mac 亦是合一入口，且已是 `consumerStartReady=true`）——
   按本批次已有先例（§1.1/§1.8 等），单凭"合一入口"不构成独立阻断项。本轮另做了一次
   standalone `find_regex` 纯字符串搜索（独立于已知地址），0 命中，强化（而非仅假设）
   "无第二个独立 check-only 入口"这一结论。

**结论对 §1.3/§2 判定的影响**：

- win gate：`BLOCKED` → `consumerStartReady`。
- `consumer_action`：**双平台一致** `implement_against_contract`；⚠ DESTRUCTIVE 标记维持
  且升级为"win 侧本轮独立确认"（不再是"win 未确认"）。
- `strictImplementationUse`/`readyToImplement` 仍为 `false`——dim1 叶级前端调查、
  `sub_1405C49F0` orchestrator 内部体、`sub_14043F970` 哈希集合精确语义、完整 192 字节
  线程记录布局均未本轮闭合，维持 accepted_unknown/gap_needs_reducer。

**残余诚实限制（未消除）**：无法排除一个完全不经由已确认的 4 候选路径、经由其他索引机制
到达的独立写入函数（需要全量 call-graph-propagation 扫描，本轮未尝试，预算原因）；
`sub_1405C49F0`（17706B）内部体仍未反编译，`config_toml_syntax`/`catalog_integrity` 与本
target 之间是否存在硬性顺序依赖仍未定论。

**证据指针**：`raw/aimami/1.2.6/windows-x64/relay/codex_diagnostic/thread_poisoned_instructions/evidence.md`
`## Addendum (2026-08-22 ...)` 一节；同 leaf 新增 `manifest.json`/`gate-report.json`/
`call-tree.json`/`data/producer-ledger.json`（此前只有 `evidence.md`+`ida/`+
`interface-report.json`）；`interface-report.json` 已更新；`audits/windows-1.2.6-codex_diagnostic/
{gate-report.json,manifest.json,README.md,logic/DIAGNOSTIC-KEYS-1.2.6-WIN.md,
pointers/evidence-paths.md,data/producer-ledger.json}` 对应 leaf 条目已同步；`INDEX.jsonl`
新增 1 行（`type=sub_gap_closure`）；`REVERSE-STATUS.md` 本轮新增 addendum 章节（session id
同上）；`CONSUMER-ACTION-MAP.md` 对应行与"仍分歧"小节已同步更新。

## 9. 2026-08-22 追加：`thread_response_item_ids` win 侧 dim3/dim4 缺口闭合

> session `cc-aimami126-thread-response-item-ids-win-fix-recon-20260822`（与 §7/§8 独立并行，
> 同日不同 target）。本节只闭合 §1.5/§2 中该 target 记录的缺口，**不改写** §1.5 原文（已在
> §1.5 自身内联更新，见该节）、**不重新裁决**任何其他 target 的既有结论。

> **2026-08-22b 撤回（回炉修正，session `cc-aimami126-codex-diagnostic-btier-doublereview-correction-20260822`，
> 双复审 local=PASS WITH CONDITIONS/adversarial=FAIL 触发）**：本节下方"DESTRUCTIVE confirmed、
> promoted `consumerStartReady=true`"的结论**已撤回**。本节正文自己记录的证据（见下方"写入函数
> 定位"一段）实际只确认了"以写模式打开 staged 临时文件 + scope 退出时经 `staged_file_cleanup_drop`
> 调用真实 `DeleteFileW` 删除该临时文件"，而**原始 rollout 文件在同一函数内是只读打开**（未被写入
> 路径触碰），且全文未发现任何 rename-over-original 或其它把 staged 内容提交回原文件的步骤——这一
> 点本节自己的"strictImplementationUse 仍为 false"脚注早已列出（"exact WriteFile 调用点"与
> "rename-over-original commit 步骤"均未定位），但被本节顶层的"DESTRUCTIVE confirmed"结论盖过。
> 二者结合起来，不能证明原文件曾被修改。`sideEffectReady` 退回 PARTIAL，`consumerStartReady`
> 退回 `false`，恢复到 2026-08-21 原始 BLOCKED 状态。本轮反编译成果本身不被撤回（真实 `CreateFileW`
> 写模式打开与真实 `DeleteFileW` 清理确实存在），撤回的只是"这构成对原文件的破坏性修复"这一结论。
> 详见 canonical `gate-report.json` `leaf_gate_notes.thread_response_item_ids.gate_correction_
> 20260822b` 与 raw leaf 自身 `evidence.md` `## CORRECTION 2026-08-22b` 一节。以下原文保持不变，
> 供追溯：

**背景**：§1.5 原文记录 win 侧"实际逐线程扫描 + 文件写入副作用的最可能承载函数
`sub_1405B2510`（被调用 2 次，depth-2）本轮未反编译，底层写入 API 未恢复"，win gate 因此维持
`BLOCKED`/`do_not_implement`，与 mac 的 `consumerStartReady`/`implement_against_contract`
不一致、未裁决。

**本轮闭合内容**：

1. **`sub_1405B2510` 全量反编译**（20518 字符，常规 `decompile` 工具一次成功，非截断）：确认
   为逐行 repair-dispatch worker——先调用 `sub_1405A8000`（44255 字符，含字面量
   `"PRAGMA table_info"` 及 `model`/`reasoning_effort`/`subagent` 列名形状字面量，判定为通用
   SQLite row-mapper，非本 target 专属，未重命名）取得 192 字节步长行数组，逐行调用
   `sub_14043F970` 比较新旧 id，比较失败（需修复）分支调用写入函数（见下），比较成功分支推入
   报告计数向量（`sub_14152E0B0`，通用）。本轮重命名
   `sub_1405B2510`→`thread_response_item_ids_repair_worker_sys`。

2. **写入函数定位**：写入函数（此前完全未知，甚至不在候选清单内——它是 `sub_1405B2510` 自身
   8 个 callee 之一）定位为 `sub_140B570A0`。常规 `decompile` 在此函数上于 MCP 传输层截断
   （`"[54055 chars total]"` 标记），改用 `py_eval` 直调 Hex-Rays API server-side 写盘到 SMB，
   取得完整 40184 字符体，本地 `shasum -a 256` 与 IDA host 现场哈希双向核对一致
   （sha12=`27ae3c0424de`）。内容级确认：开写模式（GENERIC_WRITE 形态 OpenOptions 字节标志）
   一个暂存临时路径，经真实 `CreateFileW` 叶 `sub_141528E20`→`sub_14151DC30`→`sub_14151D9B0`
   （直接反编译确认是真正的 Rust `std::sys::windows::fs::File::open_with`，非按名假设）；分开
   只读打开原始 rollout 文件；读取解析 JSON `type=="response_item"`（13字节字面量字节级解码）/
   `payload`/`id` 字段；解析出的旧 id 经解析/查表后构造 resolution-receipt
   `{schema_version,source_path,source_length,source_sha256}`（字段名字面量字节验证，经
   `sub_140AA04E0`）；scope 结束**无条件**调用 `staged_file_cleanup_drop@0x140B63F10`。本轮
   重命名 `sub_140B570A0`→`repair_invalid_ids_in_rollout`。

3. **身份双路独立交叉确认（红线31合规）**：`staged_file_cleanup_drop@0x140B63F10` 是一个**此前
   已独立 FULL_CLOSURE 的 leaf**（session `angle-c-staged-file-cleanup-drop-round1-20260814`，
   路径 `raw/aimami/1.2.6/windows-x64/backend/core/relay/response_item_id_compat/
   staged_file_cleanup_drop/`），其自身文件早已记载 caller 为
   "`repair_invalid_ids_in_rollout sub_140B570A0(9081B)`"——本轮**未直接引用该 leaf 原文作为
   自证**，而是现场对 `0x140B63F10` 重新跑一次全新 `xrefs_to`（返回恰好 2 个 code xref，
   `"more":false`，size 均匹配），独立重新核验该 caller 关系。两条完全独立的发现路径（本轮
   dispatcher/owner 调用链追溯 vs. 2026-08-14 会话的 Drop-glue 反向 caller-graph 追溯）在同一
   函数上收敛。`staged_file_cleanup_drop` 自身早已确认执行真实 `DeleteFileW`-based
   `remove_file`（NotFound 容错）。

4. **两处按命名/位置猜测的疑似 flush 调用均现场证伪**（红线13 合规）：`sub_140AA04E0`（与读行
   函数 `sub_140AA0FC0` 命名相近）实际构造的是 resolution-receipt JSON 对象，非 `WriteFile`；
   `sub_1403D5830`/`sub_1403D1620`（call-site 邻近文件句柄使用）实际是扫描缓冲区找 ASCII
   `'#'` 字节，非 flush/`WriteFile`——均现场反编译读体证伪，未采信命名/位置猜测直接下结论。

5. **副作用从"推断"升级为"直接观察"**：真实 Win32 写模式 `CreateFileW` 打开 + `DeleteFileW`
   清理调用链是本轮独立反编译定位到的，不是从"已修复"/"变更记录已保存"报告字符串推断得出
   ——这正是 GATE-SPEC sideEffectReady 要求的"明确"标准。

**结论对 §1.5/§2 判定的影响**：

- win gate：`BLOCKED` → `consumerStartReady`。
- `consumer_action`：**双平台一致** `implement_against_contract`；⚠ DESTRUCTIVE 标记维持
  且升级为"win 侧本轮独立确认"（不再是"win 未确认"）。
- `strictImplementationUse`/`readyToImplement` 仍为 `false`——精确 `WriteFile` 调用点、完整写行
  JSONL DTO 格式、`sub_14043F970` 精确比较语义、`sub_1405A8000` 精确 SQL 查询文本均未本轮闭合，
  维持 `gap_needs_reducer`（非 accepted_unknown，未凑成）。

**残余诚实限制（未消除）**：`repair_invalid_ids_in_rollout` 自身还有约 150 个未反编译的更深层
callee（候选包括 `sub_140B55C30`/`sub_140A6D6A0`/`sub_140A6DB10`/`sub_1406E3D80`/
`sub_140B6F680`/`sub_140B6F4B0`/`sub_1414D7A50`），精确 `WriteFile` 调用点与是否存在显式
rename-over-original 提交步骤未在其中定位；`mac` 侧 `remove_unused_backup` 的保留/驱逐准则本轮
未触碰（mac 侧自身既有缺口，非本轮范围）。

**证据指针**：
`raw/aimami/1.2.6/windows-x64/relay/codex_diagnostic/thread_response_item_ids/evidence.md`
`## ROUND 2` 一节；同 leaf 新增 `manifest.json`/`gate-report.json`/`call-tree.json`/
`data/producer-ledger.json`（此前只有 `evidence.md`+`pseudocode.c`+`interface-report.json`）；
`interface-report.json` 已更新（`call_tree`/`backup_path`/`gate` 三节）；`pseudocode.c` 追加
18 个新反编译函数体（字节验证非截断）；`audits/windows-1.2.6-codex_diagnostic/
{gate-report.json,manifest.json}` 对应 leaf 条目已同步（9/9 target 现全部 `consumerStartReady`）；
`INDEX.jsonl` 新增 1 行（`type=gate_promotion`）；`REVERSE-STATUS.md` 本轮新增章节（session id
同上）。

## 10. 2026-08-22 追加：`router_http_contract` win 侧写入路径纠正（session `cc-aimami126-router-http-contract-a6-callback-keycount-reconcile-20260822`）

> 与 §7/§8/§9 相互独立，同日不同 target。本节记录一次**对已发布结论的纠正**（非首次闭合）：
> §2 汇总表 `router_http_contract` 行原文（"win gate BLOCKED（fix 路径存在性未知）"）已过时
> ——该 target 早在同日更早的 `fixpath-reduce-win-20260822` session 就已 promote 到
> `consumerStartReady=true`；但那次 promotion 内部的一条具体子结论（"win 侧不存在 fix/写入路径，
> 跨平台不对称 CONFIRMED"）本轮被查出是**错的**，已撤回并纠正。§2 表格行已同步更新。

**背景**：`fixpath-reduce-win-20260822` session 把 `a6`/`*(a7+40)` 回调标 `accepted_unknown`，理由
是"需反编译 `sub_1409A6E10`（2767B），超出本轮 scope"。但 `sub_1409A6E10` 早已在同 bundle 姊妹
leaf `requires_quiet_window` 下全量反编译落盘，未被交叉核对。

**本轮闭合内容**：直接读取 `sub_1409A6E10` 已落盘伪代码，确认其调用 `sub_1405CBF60` 时
`a7=&unk_1418506A8`——**静态地址**，非运行时值（对应每个非 `"all"` 单项 fix 调用，`router_http_
contract` 在内）。据此经 9 跳独立反编译（`get_bytes`/`decompile`/`xrefs_to`，均本轮现场发起，非
链式引用旧注释）：`unk_1418506A8+0x28` → `0x1409A6B70`（thunk）→ `sub_1409AD570` →
`reconcile_inner`（`codexmate_lib::core::relay::codex_config_reconciler`，模块身份经反编译代码内
实际引用的 Rust panic-location 字符串字面量独立核实）→ `takeover`（`codexmate_lib::core::relay::
config_takeover`，经内嵌 `"router-takeover-backup.json"` 字面量核实）→ `sub_140A6DB10`（调用两次，
`codexmate_lib::core::relay::atomic_write`，经内嵌模块路径字面量 + 真实 `GetCurrentProcessId`/
`HANDLE`/`CloseHandle`/rename Win32 原语核实——**注**：`sub_140A6DB10` 与 §9 `thread_response_item_
ids` 一节末尾列出的"约150个未反编译更深层 callee"候选清单中同名地址是**同一个函数**，本轮独立
反编译结果与该清单的存在互相印证，非巧合命中）→ `sub_141539600` → `sub_14151D140` →
**`NtWriteFile`**（终点，真实 Windows NT 原生写盘系统调用）。`sub_140580960`（case20 的 FIX 目标）
在其函数体第一条语句就**无条件**调用该回调。

**纠正结论**：win 侧对 `router_http_contract` 单项 fix **确实存在真实可达的写盘路径**，与 mac 侧
（`fix_router_http_contract` → 9 跳 → `write_atomic_with_mode`）结构同构，**不构成**"跨平台不
对称"。`consumerStartReady=true` 本身不受影响（红线35，本次只纠正该 promotion 内部一条具体的
`accepted_unknown`/`resolution_summary` 子结论，非重新裁决 promotion 本身）。`strictImplementation
Use`/`readyToImplement` 仍为 `false`——`reconcile_inner` 内部守卫条件是否在每次 fix 调用时都真正
路由到写入分支，本轮未追到条件语义层面，仅确认"可达、有能力写"，未确认"每次必写"。

**§2 汇总表行更正**：

| target | mac gate | win gate | consumer_action | 是否 DESTRUCTIVE/mutating |
|---|---|---|---|---|
| router_http_contract | consumerStartReady | ~~consumerStartReady（**2026-08-22 promoted + 同日纠正，见本节**）~~ **consumerStartReady=false（2026-08-22c 用户裁决撤回，见 §11）** | ~~**2026-08-22 起一致** `implement_against_contract`~~ **2026-08-22c 起冲突/待裁决恢复**，`do_not_implement`（见 §11 用户裁决） | 写入路径存在但触发条件未完全追清——不确定标为 DESTRUCTIVE 还是 mutating，需后续 reducer 补 `reconcile_inner` 内部守卫语义（该技术结论不受 §11 gate 撤回影响） |

**证据指针**：
`raw/aimami/1.2.6/windows-x64/relay/codex_diagnostic/router_http_contract/evidence.md`
`## REDUCE PASS 3` 一节 + `## Discrepancy resolved` 一节；同 leaf 更新
`gate-report.json`/`manifest.json`/`call-tree.json`；新增
`data/memo_callback_resolved_write_chain.json`、
`ida/pseudocode/0006_a6_a7plus40_callback_resolved_write_chain_9hop.c`；姊妹 leaf
`requires_quiet_window/evidence.md`（新增 `## Discrepancy resolved` 一节，解答 25 vs 24 key 数量
差异——delta key 为 `router_postcondition`，classifier 识别但 FIX dispatcher `case 20` 无独立字符串
匹配分支）+ 新建 `data/producer-ledger.json`；`audits/windows-1.2.6-codex_diagnostic/
{gate-report.json,manifest.json,README.md,logic/DIAGNOSTIC-KEYS-1.2.6-WIN.md}` 对应条目已纠正
（原文以 `superseded_`/`RETRACTED` 字段保留，未删除）；`CONSUMER-ACTION-MAP.md` 对应行已同步；
`INDEX.jsonl` 新增 2 行；`REVERSE-STATUS.md` 本轮新增章节（session id 同上）。

---

## 11. 2026-08-22c 追加：用户裁决 §3 判据不对称（`pending_user_adjudication[0]` 已裁决，session `cc-aimami126-codex-diagnostic-router-http-contract-user-adjudication-d1d2d3-20260822`）

> 与 §7/§8/§9/§10 相互独立、同日不同性质的更新：本节不是新反编译发现，是**用户对本文档已登记的一处待裁决事项的明确裁决**的落实记录。

**背景**：§2 表格脚注与 `audits/windows-1.2.6-codex_diagnostic/gate-report.json` 顶层字段 `pending_user_adjudication[0]`（由 session `cc-aimami126-codex-diagnostic-doc-cleanup-a1a7-20260822` 于 2026-08-22 登记）指出：本 bundle 对"破坏性写入是否可达/已确认"这一问题，在 `thread_response_item_ids`（案 A：写 API 可达但落在 staged 临时文件而非原文件，判 `sideEffectReady` 不成立，gate 撤回）与 `router_http_contract`（案 B：写 API 可达但 payload/DTO、guard 触发条件、CHECK 侧 owner 均未定性，gate **未**因此重新推导，维持 `consumerStartReady=true`）两个结构相似的 target 上套用了不一致的证据门槛，且未解释差异何在。该条目登记时明确"不代为裁决"，只登记事实供人决定。

**用户裁决（2026-08-22）**：两项均按最严标准撤回——`router_http_contract` 的 `consumerStartReady` 由 `true` 改判为 `false`，与已经是 `false` 的 `thread_response_item_ids` 对齐。裁决理由（用户原话转述）：案 B 唯一支撑 promotion 的理由是"sideEffectReady 已确认为 NONE"，而这条理由本身已在同一天被 `dim3dim4_correction_20260822` 整段推翻（真实写盘路径存在，可达）；推翻之后剩下的替代事实（可达但未定性）并不比案 A 更强，不足以支撑维持 `consumerStartReady=true`。

**本轮落实的字段同步**（全部 append-only 或就地追加，未删除任何历史行）：
- canonical `audits/windows-1.2.6-codex_diagnostic/gate-report.json`：
  - `pending_user_adjudication[0].status` 由 "REGISTERED, NOT ADJUDICATED" 改为 "ADJUDICATED 2026-08-22: both retracted under strictest standard (user decision)"（原文以 `status_original_20260822_preserved_for_audit_trail` 字段保留）。
  - `leaf_gate_notes.router_http_contract.consumerStartReady`：`true` → `false`（原值以 `consumerStartReady_superseded_20260822c` 保留），新增 `gate_correction_20260822c` 字段记录完整推理，`independent_gap_type` 改为 `REOPENED_20260822c`。
  - `gate_summary.consumerStartReady_true`：7 → 6；`consumerStartReady_false_still_blocked`：2 → 3（新增 `counts_correction_20260822c` 说明）。
  - `consumerStartReady_still_blocked` 数组新增 `router_http_contract`；`consumerStartReady_promoted_20260822` 数组中 `router_http_contract` 条目标注 REVERTED。
  - `status_history` 数组追加一条 "USER ADJUDICATION 2026-08-22c" 条目。
  - `blockers[]` 中 `router_http_contract` 一行由"fully stale"改标"ACTIVE AGAIN"，并说明重开的是 sideEffectReady 门槛问题，不是 fix-path-existence 问题（后者仍确认存在）。
  - `unknownsBlockingStart[]` 中 `router_http_contract` 一项 `classification` 改为 `REOPENED_20260822c`，新增 `gate_reopened_20260822c` 字段。
- raw leaf `raw/aimami/1.2.6/windows-x64/relay/codex_diagnostic/router_http_contract/{gate-report.json,manifest.json}`：`consumerStartReady` 同步 `true` → `false`（原值均以 `_superseded_20260822c` 字段保留），新增 `gate_correction_20260822c` 说明。
- 本文档：§2 表格 321 行、§9 之前的统计段落（§2 表格下方"7 个/2 个"更正段落追加"6 个/3 个"再更正）。
- `CONSUMER-ACTION-MAP.md`：563 行、598/600 行统计段落、"⚠ 待用户裁决"段落均已同步追加对应更正。

**不受影响（明确不改判的部分）**：
- `router_http_contract` 的底层技术结论——win 侧对本 key 单项 fix 确实存在真实可达的 9 跳写盘路径（终点 `NtWriteFile`），与 mac 侧结构同构——**不被本次裁决推翻**，`dim3dim4_correction_20260822` 字段原文保持有效。
- `CONSUMER-HANDOFF §3.1`（CHECK 侧 owner 链是否需要第二轮独立复核）与 §3.2（39 字节 key CHECK 半部未定位）**保持 open**，本轮未触碰、未因 gate 撤回而被视为已闭合或已作废。
- `thread_poisoned_instructions` 的 gate（`consumerStartReady=true`）不受本轮影响——它不在本次用户裁决范围内，不得据本节推断其也应撤回。

**同日另一项独立用户决策（D1，登记在 raw leaf 而非本文档）**：raw leaf `data/memo_callback_resolved_write_chain.json` 与 `ida/pseudocode/0006_*.c` 的表述曾声称"9 跳全部本轮独立反编译"，但实际落盘的完整函数体只有 hop2/hop7/hop8，hop3-hop6 只有 key-line 摘要。此项已在两处文件就地追加更正标注（原文保留），并按用户裁决登记为 `known_gap_reverifiability`（不补落盘），与本节的 gate 撤回是两个独立决定，仅日期相同。详见 raw leaf `gate-report.json` `known_gap_reverifiability_20260822d` 字段。

**证据指针**：`audits/windows-1.2.6-codex_diagnostic/gate-report.json`（`pending_user_adjudication[0]`、`leaf_gate_notes.router_http_contract.gate_correction_20260822c`、`gate_summary.counts_correction_20260822c`、`status_history` 末条）；raw leaf `gate-report.json`/`manifest.json`（`gate_correction_20260822c`）+ `known_gap_reverifiability_20260822d`；`CONSUMER-ACTION-MAP.md`（563 行、"⚠ 待用户裁决"段落的"✅ 已裁决"追记）；`INDEX.jsonl`（根 + `internal-reverse`）本轮新增条目；`REVERSE-STATUS.md` 本轮 CLAIM/CLOSURE 章节（session id 同上）。
