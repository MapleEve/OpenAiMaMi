# round4 (2026-08-07) — item1 剩余 2 个真实缺口深挖

承接 `[cc-aimami126-item1-router-reconciler-windows-round3-20260807]` 明确列出的"本轮未做"两项：
① `codex_project_state::repair_if_needed`(win) 继续更深层调用图/内容传播；
② 孤儿 `0x1406FABE0` 与 mac 侧 `orphan_thread_adoption` family 全部具名函数逐字段核对，尝试精确匹配或明确排除。

开工前已核 `server_health`：win uptime=183529s(<反编译器>_ready=true, module=`AiMaMi 1.2.6 win64.exe`)，mac uptime=14039s(<反编译器>_ready=true, module=`AiMaMi`)。均 live，无 IDA 宕机窗口。

---

## 目标 1：`codex_project_state::repair_if_needed`（win）—— 调用图传播法

### 已确认的调用点（mac 侧，作为 win 侧应对照的锚点）
- `reconcile_router_on`(mac `0x100825030`) 第 529 行：`repair_if_needed::hd64c5cca3a8ebccf(&v88, v135)`
- `reconcile_native_off_with_progress`(mac `0x1008278a0`) 第 845 行：`repair_if_needed::hd64c5cca3a8ebccf(v165, v190)`

均为 **direct callee**（非嵌套在其他函数内部再调用），因此 win 侧对应函数理应也是这两个已知函数的 direct callee。

### 排查方法
1. `callees({"addrs":["0x140AA86E0"]})` 枚举 `reconcile_router_on`(win) 全部 47 个 direct callee。
2. 用 `<工具调用>` 批量取全部 47 个地址的函数体积（`idaapi.get_func()` 求 `end_ea-start_ea`），按体积排序。
3. Round3 已排除 2 个体积相近候选：`sub_140BF6180`(1150B，反编译证实为 `router_unlock_auth` 模块 `auth.json` 诊断 helper)、`sub_140AAAA10`(1369B，反编译证实为 `config_takeover` 访问拒绝重试包装器，两次调用 `config_takeover_takeover`)。
4. 本轮排查剩余全部 45 个 direct callee 的体积列表，唯一另外两个体积落在 mac 侧 1247B ±20% 区间内的未命名候选：
   - `sub_140A9F870`（1380B，+10.7%）
   - `sub_1405D7DD0`（1456B，+16.8%）
5. 逐一 `decompile()` 全文（均无截断）：
   - `sub_140A9F870`：反编译显示为通用 `<[T]>::join` / `Vec` 拼接工具函数（switch 对 element 长度 0-4 及 default 分支做 memcpy 拼接，引用字符串 `"attempt to join into collection with len > usize::MAX"`、`"mid > len"`），与 `repair_if_needed` 语义完全无关，**非匹配**。
   - `sub_1405D7DD0`：反编译显示两次调用 `reconcile_threads_with_progress`(`0x1405E0390`)——即 `reconcile_threads_with_progress` 自身的**重试包装器**（先调用一次，若失败走 `sub_1405DC220` 变体再调用一次），**非匹配**。
6. 在两个已知 mac 调用点各自的 win 对应函数体（`cand-B-sub_140AA86E0.c` 行 690-765；`cand-A-sub_140B50EA0.c` 行 1009-1048）中定位 `aProjectState` stage-timer 标记段（`sub_140AA8570(...,aProjectState,13,...)`），发现该标记段紧密包裹的是 thread-reconcile 重试逻辑（`sub_1405D7DD0`调用），**前后未见任何独立函数调用序列**符合 `repair_if_needed` 的指纹（两次 `inspect`+两次 `stability_issue`+条件一次 `repair`+两处不同 `format_inner` 错误模板+三次 `drop_in_place<ProjectStateInspection>`）。
7. `func_query({"queries":[{"name_regex":"repair"},{"name_regex":"project_state"},{"name_regex":"stability_issue"},{"name_regex":"codex_project_state"}]})` 对整个 win 二进制搜索，除 `repair` 命中 1 个无关函数 `repository_config_repair`(配置仓库修复，非项目状态修复) 外，其余 0 命中。

### 裁定
**如实标注 `gap_needs_reducer`（非 `genuine_ceiling`）**——因为本轮排查过程中**没有发现任何 ICF 折叠碰撞对象**（不满足红线 13 严格定义"两个源函数被 ICF 折叠成同一机器码"），这是"找不到候选"而非"候选二选一分不清"。

`caller_disambiguation_tried=true`：两个 mac 已知调用点（`reconcile_router_on`/`reconcile_native_off_with_progress`）的 win 对应函数体均已展开核对，均未发现独立调用。

强证据（非结论）指向：`repair_if_needed`（含其调用的 `inspect`/`stability_issue`/`repair` 三元组）在 Windows 构建中要么被完全内联进调用者、要么该 code path 在 win 侧编译时被裁剪/未启用。两者都无法进一步在当前证据下确证，本轮未继续假设。

---

## 目标 2：孤儿 `0x1406FABE0` —— mac 侧 family 全字段核对

### mac 侧确认的 6 个具名函数（`func_query({"name_regex":"orphan_thread_adoption"})`，count=0 全量枚举）
| 函数 | 地址 | 体积 |
|---|---|---|
| `prepare_orphan_thread_adoption::{closure}` | `0x100b187f0` | 138B |
| `apply_orphan_thread_adoption_db` | `0x100b189e0` | 3060B |
| `rollback_orphan_thread_adoption` | `0x100b1ce50` | 4498B |
| `mark_orphan_thread_adoption_recovery` | `0x100b25f80` | 1087B |
| `write_orphan_thread_adoption_recovery` | `0x100b263d0` | 5456B |
| `write_orphan_thread_adoption_recovery_file` | `0x100b30d40` | 482B |

### win 侧目标字段（`0x1406FABE0` 反编译确认，5221B/217 blocks，本轮完整反编译）
函数体是一个 `do-while` 循环，每次迭代对集合中的一个元素构造 6 个字段名（经字节级解码确认，均以字节立即数形式嵌入，非 `.rodata` 字符串引用）：`threadId`、`provider`（出现两次，用于当前/原始两个快照）、`originalRollout`、`reasoningEffort`（出现 3 次，`qmemcpy(...,"reasoningEffort",15)` 字面量确认两处不同偏移各一次+一处额外）、`originalDbRows`。

### 逐一核对（server 端 `<工具调用>` 全文本搜索，绕开 MCP 截断限制）
| mac 候选 | 全文本长度 | threadId | originalRollout | reasoningEffort | originalDbRows | databaseBackups |
|---|---|---|---|---|---|---|
| `prepare_orphan_thread_adoption::{closure}` | 725 | 0 | 0 | 0 | 0 | 0 |
| `apply_orphan_thread_adoption_db` | 15684 | 0 | 0 | 0 | 0 | 0 |
| `rollback_orphan_thread_adoption` | 25958 | 0 | 0 | 0 | 0 | 0 |
| `mark_orphan_thread_adoption_recovery` | 6133 | 0 | 0 | 0 | 0 | 0 |
| `write_orphan_thread_adoption_recovery` | 39741 | 0 | 0 | 0 | 0 | 1（自身字段名，非本函数） |
| `write_orphan_thread_adoption_recovery_file` | (读取，482B级) | 0 | 0 | 0 | 0 | 0 |
| **额外核查候选** `fix_orphan_thread_providers_with_catalog`(`0x100b29050`，职责含"备份DB→4个UPDATE变体收养"，最贴近本函数语义) | **133288（真实体，MCP 截断显示仅 1024）** | 0 | 0 | 0 | 0 | 0 |

`write_orphan_thread_adoption_recovery` 的 `databaseBackups` 字段本身是通过 `serde_core::ser::Serializer::collect_seq`(`0x100ac8f90`) 序列化的，该函数内部调用 `serde_core::ser::impls::<impl Serialize for &T>::serialize`(`0x1003888b0`)，追踪其反编译内容确认这是 **`serde_json::Value` 的通用枚举分发**（Null/Bool/Number/String/Array/Object 六个 case），说明 `databaseBackups` 的元素在传入 `write_orphan_thread_adoption_recovery` 之前**已经被组装成 `serde_json::Value`**，其构造点不在 `write_orphan_thread_adoption_recovery` 内部——已顺着这条链核查到 `apply_orphan_thread_adoption_db`（0 命中）与 `fix_orphan_thread_providers_with_catalog`（0 命中，且该函数是全模块内唯一真正做"备份 DB 行"的函数）。

### 全局字符串核查
`find_regex` 对整个 mac 二进制搜索 `"originalRollout"`、`"reasoningEffort"` —— **0 命中**（不存在于任何 `.rodata` 字符串表条目中）。

### caller 侧交叉验证（caller_disambiguation_tried=true）
`find_regex` 确认 tracing span 字符串 `relay_diagnostic_thread_adoption`、`relay_native_off_model_fallback` **在 mac 二进制中也存在**（分别位于 `0x10171e0ef`、`0x10171e214`），说明这两个诊断/回退**命令本身在 mac 上也存在**（跨平台一致）。`xrefs_to` 定位 `relay_diagnostic_thread_adoption` 唯一引用者为 `fix_orphan_thread_providers_with_catalog`(`0x100b29050`)——已核查该函数完整正文（133288 字符），确认其不含本函数的字段构造逻辑。

### 裁定
**如实标注 `blocked`（非 `genuine_ceiling`）**——本轮已穷尽 mac 侧全部 6 个具名 `orphan_thread_adoption` 函数 + 1 个额外强相关候选（`fix_orphan_thread_providers_with_catalog`，经 caller span 交叉验证定位）共 7 个函数的全文本核对，均 0 字段命中；`databaseBackups` 序列化链路已追踪至通用 `serde_json::Value` 分发层，非结构体专属 `Serialize` 实现，说明真正的字段组装点未被本次 7 候选覆盖到，但已排除的 7 个函数均可确认**不是**该组装点。

不满足红线 13 `genuine_ceiling` 严格定义（未发现 ICF 折叠碰撞对象）。给出非结论性假设仅供参考：由于 mac 二进制的字符串表完全不含 `originalRollout`/`reasoningEffort` 这两个特征字段名，且整个证据簇本身命名为 `router-reconciler-windows-retry-thread-visibility`（暗示 Windows 专属重试/可见性兼容修复），`0x1406FABE0` 可能是 Windows 专属 code path 的诊断快照子构造体，在 mac 侧无 1:1 对应实现——但此假设未经进一步验证，不作为最终结论写入 gate。

---

## win IDB 写回
- `0x1406FABE0`：`set_comments` 追加完整核查记录（未改名，避免用未验证假设污染符号表）。
- `0x140AA86E0`(`reconcile_router_on`)：`set_comments` 写入 `repair_if_needed` 调用图穷举记录（写入 repeatable comment 槽位，原有 round1-3 regular comment 完整保留，未覆盖）。
- `0x140B50EA0`(`reconcile_native_off_with_progress`)：`append_comments` 追加简要交叉引用。
- `<工具调用>()` 执行 1 次成功（`<二进制路径>\AiMaMi 1.2.6 win64.exe.i64`）。

## 本轮未做（诚实边界，未越界声明为完成）
- 未展开 win 侧两个巨型分发器 `sub_1405B8B10`(775 basic blocks)/`sub_1405CBF60`(700 basic blocks) 的完整反编译（round3 已标记未做，本轮仍未做）。
- 未找到 `databaseBackups` 数组元素在 mac 侧真正的组装/构造函数（已排除 7 个候选均非该函数，但未继续搜索第 8 个候选）。
- 未做本地+对抗双审（local-review/adversarial-review）。
- 未做四角度完整性核查（红线15）。
- 未与真实 Windows/macOS 客户端做参照运行对照（红线25）。
- 全部实现门（`consumerStartReady`/`strictImplementationUse`/`readyToImplement`/`implementation_use`/`gate_accepted`）保持 `false`。
