# 1749 covered-functions 分类 — AiMaMi 1.2.6 macOS x86_64

## 结论

输入清单 `unique-ea-classification.jsonl` 的 **1749 个唯一 EA** 已逐行写入独立制品 `covered-functions-classification.jsonl`，原始输入未改写。

| 分类 | 行数 | 判定证据 | `classification_basis` |
|---|---:|---|---|
| `accepted_1_2_3_baseline_normalized_symbol_migration` | 1079 | 与 1.2.3 raw 伪代码中规范符号精确相等 | `symbol_name_only_no_body_diff` |
| `accepted_1_2_4_delta_migration` | 93 | 与 1.2.4 accepted delta raw 伪代码中规范符号精确相等 | `symbol_name_only_no_body_diff` |
| `deep_leaf_1_2_6` | 98 | 当前业务符号不在两份 accepted corpus 中精确同名，保留为需深解叶 | `new_symbol_or_no_baseline_match_recovery_leaf_pending_body_diff` |
| `glue_or_local_outtake` | 479 | Rust closure/trait impl/drop-in-place/serde 结构符号，不当作独立业务行为 | `structural_glue_symbol_pattern_excluded_from_business_behavior_scope` |
| `truly_undone` | 0 | 本轮没有把任何行直接升格为新工作单 | — |

> **`classification_basis` 说明（2026-08-06 追加）**：`accepted_1_2_3_baseline_normalized_symbol_migration` 与 `accepted_1_2_4_delta_migration` 两类合计 1172 行，判定依据**只是**规范化符号名精确相等，未做 size/CFG/body-hash 比对，**不得**暗示这 1172 行已完成行为等价验证。9 个本轮指定深挖递归叶函数（`load_auth_file`/`write_atomic_with_mode`/`shutdown_standby_sidecar`/`emit_status`/`load_status`/`write_runtime_file`/`auth_is_usable_real_oauth`/`backup_contains_usable_real_oauth`/`has_restorable_real_oauth`）已用 x64 直接反编译复核（`reviews/X64-DIRECT-DECOMPILE-REVERIFY-20260806.md`），其中仅 2 项完成逐行行为等价比对，详见 `logic/RECURSIVE-LEAF-CLOSURE-1.2.6.md` 的"证据类型标注"。此字段同步写入 `data/producer-ledger.json`、`gate-report.json`、`manifest.json` 的 `covered_functions_classification.classification_basis`。

## 方法与边界

- 当前符号用 `rustfilt` demangle；比较时**只**删除 Rust 编译实例后缀 `::h<hash>`。模块、函数名和闭包层级不做模糊匹配。
- 每行都有 `evidence_pointer`。迁移行指向相应旧版 raw 伪代码；深叶指向当前 EA 及本文件的恢复策略；胶水行指向既有结构性胶水 taxonomy。
- 禁止使用函数大小、裸 CFG 或 body hash 判同；这些值不参与分类。
- `deep_leaf_1_2_6` 的每行均带 `recovery_attempts`：解名、精确 accepted lookup、胶水排除均已执行，因此没有 `accepted_unknown` 或虚假的 genuine ceiling。
- x86_64 是本轮 macOS 业务语义证据源；ARM64 地址一致性仅为 scope note。Windows 未启动、未读取、未写入。
- `LIVE_REFERENCE_NOT_RUN`：静态证据不声明与运行中参照 App 一致。

## 制品

- 输入：`intermediate/aimami/1.2.6/macos-x64/version_delta/trials/unique-ea-classification.jsonl`（SHA-256 `7e77d53c29e13e670f694347bff0064c17d0559181ef49e0d060dcb3d3afad85`）
- 输出：`intermediate/aimami/1.2.6/macos-x64/version_delta/covered-functions-classification.jsonl`（SHA-256 `f220b698d604c4ec53d6e9a9658304268923acb7991c04232d902bb876f90ffb`）
- 输出 manifest：`intermediate/aimami/1.2.6/macos-x64/version_delta/covered-functions-classification.manifest.json`

实施门仍为 **BLOCKED**。
