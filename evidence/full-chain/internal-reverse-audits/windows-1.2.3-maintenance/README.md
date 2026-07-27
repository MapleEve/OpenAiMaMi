# AiMaMi 1.2.3 Windows maintenance — internal-reverse 结论包

同步时间：2026-07-25
范围：注册表维护三命令 `rebuild_registry` / `clean` / `load_snapshot`（account registry 维护域，非 Windows OS 注册表——`repository`/`registry` 在此二进制里指 AiMaMi 自己的账号注册表 `registry.json`，与 HKEY 无关）。
`load_snapshot` 已由 `../windows-1.2.3-accounts/` 独立覆盖（该包 12 条 accounts 域命令之一），本包**不重复推导**，仅指针引用（红线5）。本包主 scope = `rebuild_registry` + `clean` 两条命令。
最终结论：**partial 结论包，非 full_leaf_100**。`rebuild_registry` dim2（后端 owner+伪代码）双层（wrapper+deep-leaf）完整落盘、call-tree 三跳确认（wrapper→`rebuild_registry_with_policy`→`persist_registry`）；`clean` 在 1.2.3 Windows 侧**零 raw 证据**（1.0.9 曾有完整 strictImplementationUse 证据，1.2.3 未见対应文件——真实回归缺口，非漏找）。dim1（前端真实 UI 触发点）两条命令均只有 `minified-static-function` 级 API 定义证据（element=null），未确认真实按钮/组件调用链——与 `windows-1.2.3-accounts` 对 `load_snapshot`/`logout` 采用的同一从严标准一致处理，两条均判 `consumerStartBlocked`（非 `consumerStartReady`）。本包内部专用，不对外发布（红线23）。

## 证据索引

- raw evidence 指针：见 `pointers/evidence-paths.md`
- 1.0.9 同名命令先验证据（RULE9 参照，非迁移用，因 1.2.3 侧证据不完整无法做 diff-confirmed-empty 判定）：`raw/aimami/1.0.9/windows/system/rebuild_registry/evidence.md`、`raw/aimami/1.0.9/windows/system/clean/evidence.md`（均 strictImplementationUse 档，dim1-5 confirmed，dim6 missing）
- 姊妹包（同域 accounts，`load_snapshot` 权威来源）：`../windows-1.2.3-accounts/`

## Coverage

- **rebuild_registry**：3 个 raw `.c` 文件，全部无截断标记（`grep TRUNCATED|HEXRAYS_DECOMPILE_FAILED` 命中 0）：
  - `commands/rebuild_registry_0x14016c220.c`（wrapper，command-name string xref ground-truth）
  - `repository/rebuild_registry_with_policy_0x14039f840.c`（deep-leaf，2095 行，跨平台字符串签名标注 `= mac codexmate_lib::core::repository::Repository::rebuild_registry_with_policy`）
  - `repository/persist_registry_0x14038fb30.c`（call-tree 第三跳，`rebuild_registry_with_policy` 第1383行直接调用 `persist_registry(v290, v65, (__int64)&v275, 1)`，跨平台签名标注同上）
- **clean**：**0 个 raw `.c` 文件**。`find`/`grep` 全树搜索（文件名 `*clean*`、函数体符号 `aClean`/`clean_handler`/`clean_impl`）在 `raw/aimami/1.2.3/windows-x64/` 下无命中。backend owner 完全未解析——与 `windows-1.2.3-accounts` 的 `cancel_chatgpt_oauth_login` 同类（confirmed-present-in-frontend, zero-backend-evidence）。
- **load_snapshot**：不在本包主覆盖范围。见 `../windows-1.2.3-accounts/gate-report.json`（`consumerStartBlocked_commands` 含 `load_snapshot`，dim2 已 clean 但 dim1 uiCallEntryReady 未满足）。

## Per-target Result Matrix

见 `gate-report.json`（`dim_status` + `per_command`）与 `data/task-plan.json`。

## Backend Control Flow / Pseudocode / Call-tree

见 `logic/WIN-MAINTENANCE-DISTILLED-1.2.3.md`。

## Interface / Error / Boundary

`rebuild_registry`：无参数（bare `invoke("rebuild_registry")`）；`rebuild_registry_with_policy` 签名比 1.0.9 的 `Repository::rebuild_registry` 多一个 policy 相关 `unsigned __int8 a3` 参数——版本间新增的行为分支，1.2.3 独有（见 SYSTEM-DIFF.md）。错误路径确认一条：重试 3 次后返回 `"auth.json ownership kept changing while rebuilding the account registry"`（71 字节字符串字面量，源码位置 `repository.rs`）。
`clean`：无法从 1.2.3 证据描述接口（零后端证据）；1.0.9 侧曾有 `authBackupsRemoved`/`registryBackupsRemoved`/`staleEntriesRemoved` 三字段响应，但不构成 1.2.3 证据，仅作历史参照。

## Gate Leaf Status

`consumerStartReady` 0/2（本包主 scope 两条均未达标）；`rebuild_registry` dim2 强、dim1 弱（blocked-on-dim1）；`clean` dim1 dim2 双弱（blocked-on-both）。`strictImplementationUse`/`readyToImplement` 均 0。

## Diff 结论

见 `SYSTEM-DIFF.md`——重点：`clean` 命令 1.0.9→1.2.3 存在证据可见的覆盖回归（1.0.9 有完整 strictImplementationUse 证据，1.2.3 该二进制侧对应文件缺失，需要新的 live-IDA 定位，本 pass 未做）。

## Unknown / Missing

1. `clean` 1.2.3 Windows 后端 owner：`blocks_start`（零证据，非 accepted_unknown——未尝试红线13破墙技术，本 pass 无 live IDA 访问）。
2. `rebuild_registry`/`clean` 真实 UI 触发元素（dim1 精确到按钮/组件）：`blocks_start`（`frontend-control-flow.jsonl` 两条均为 `minified-static-function` 级、`element:null`，只证明 API 包装函数存在，未证明有真实调用点）。
3. dim3 `rebuild_registry` 之外的完整 call-tree-to-leaf 目录、dim4 interface/DTO 结构级字段、dim6 test/acceptance mapping：均未产出。
4. 四角度完整性（angle A/C 的 IDA 符号枚举、语义孤儿扫描）本 pass 未执行——本 pass 是纯读盘归并（reduce），未连接 IDA MCP，不做新反编译（任务要求）。

## Action / Non-action

- **可以做**：以 `rebuild_registry` 的 dim2 证据（wrapper+2层 deep-leaf+call-tree 三跳）作为 Polaris 侧"账号注册表重建"行为参照的**背景理解**，但不得据此宣称 `consumerStartReady`（dim1 UI 触发点未闭合）。
- **不要做**：不得把 1.0.9 的 `clean` 证据（`authBackupsRemoved` 等字段）当作 1.2.3 证据直接实现；不得把两条命令的 `minified-static-function` API 定义误读为"已确认前端调用"；不对外发布本包任何内容（红线23）。
