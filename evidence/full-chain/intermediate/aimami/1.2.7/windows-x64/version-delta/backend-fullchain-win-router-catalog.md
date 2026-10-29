# backend-fullchain-win-router-catalog.md — AiMaMi 1.2.7 Windows 智能路由重构 + ChatGPT 引擎目录适配 delta

- session: `<审计会话>`（windows-x64）；行为合同以 mac 分册 `backend-fullchain-router-diagnostics.md` / `backend-fullchain-codex-catalog.md` 为准（红线5）
- 伪代码: `decomp-win-1.2.7/3xxx__router__*.c`（33+1 文件，1 次反编译 60s 超时经重试闭合，0 截断）

## 1. 诊断引擎（run_codex_router_diagnostics，win 双引擎结构）

- 命令 handler: `0x140b01130`（3493B / 114bb / 26cal；命令串 1.2.6 win **1|1 底子保留**，1.2.7 正式命令化——与盘点轮结论一致）。
- 诊断引擎体 `0x140f427e0`（32339B / **997bb** / **114cal**；反编译 60s 超时后重试闭合，decomp 141425 字符）≈ mac run_diagnostics_with_mode（40131B/1243bb/103cal）。win 体更小、callee 更多：平台诊断叶差异所致（见 §3）。
- CHECK 引擎 `0x140f10f70`（1264bb / 95cal）：**持有 mac 全部 13 个诊断键**（config_access / config_replace_readiness / thread_history_integrity / native_off_invalid_openai_thread_models / residual_manifest / relay-state-cache / official_catalog_freshness / api_key_integrity / residual_cache / auth_integrity / thread_response_item_ids / router_postcondition / **router_recovery_record**）。
- 新诊断键：`router_recovery_record` 1.2.6 win **0|1 新增**（owner `0x140f10f70` ×2 + `0x140f2cfd0`族）。
- 键集判定（红线32 win 线）：1.2.6 win fix dispatcher 24 键 case 表（`raw/aimami/1.2.6/windows-x64/relay/codex_diagnostic/_shared-fix-dispatcher-sub_1405cbf60/evidence.md`，24 键全表）在 1.2.7 win **全部保留**（win-diagnostic-key-owners.json 逐键 owner 在案）+ 新增 router_recovery_record —— **键集超集增长，无键删除**。

## 2. 修复器家族（fix_codex_router_issue）

- 命令 handler/分派: `0x140add8a0`（4727B / 126bb / 31cal；命令串 1|1 底子保留）≈ mac fix_issue（34cal/99bb）。
- 逐键 owner（win-diagnostic-key-owners.json，`.rdata` xref 权威解析）：config_toml_syntax→0x140f10310/0x140f0daa0、config_third_party→0x140f10790/0x140f0c790、db_orphan_providers→0x140f0ebc0、catalog_path_validity→0x140f24d90、takeover_backup_orphan→0x140f23360/0x140f2e590、config_global_validity→0x140f22610/0x140f2dd50、config_profile_conflict→0x140f25a20/0x140f2e890、thread_missing_rollouts→0x140f2cfd0/0x140f30830、legacy_migrated_threads→0x140f2ad80、project_state_integrity→0x140f2c350、thread_response_item_ids→0x140f58a10、rollout_orphan_providers→0x140f4e1e0、router_unlock_auth_residue→0x140f32530/0x140f387e0、thread_poisoned_instructions→0x140f39bb0/0x140f3f940、router_http_contract→0x140f21c20、auth_integrity→0x140f069b0、catalog_integrity→0x140f09d10、config_stale→0x140f04070。
- 共享注册/报告面 `0x140f51460`（多键共同 owner）。`diagnostic repair` 3|4、`router_postcondition` 2|3、`quiet window` 3|4 —— 1.2.7 面扩张的字符串级证据。
- mac 侧 `DiagnosticRepairOutcome` 结构化结果在 win 同构存在（同一前端合同；字段级 DTO 双平台均未闭合）。

## 3. 平台门（dim5）：进程扫描叶

- **win 用 Toolhelp32 API 族**：imports `CreateToolhelp32Snapshot`（0x14193a008）+ `Process32FirstW`（0x14193a010）+ `Process32NextW`（0x14193a1f0）+ `OpenProcess`/`QueryFullProcessImageNameW`。
- 三个扫描叶已 decompile：`0x140ee4dc0`（8832 字符）/ `0x140ee8460`（7164）/ `0x141040bc0`（4866）——全部 `CreateToolhelp32Snapshot(TH32CS_SNAPPROCESS)` + `Process32FirstW/NextW` 遍历模式（文件 `platform__process_scan__*.c`）。
- 诊断链到达路径：CHECK 引擎 `0x140f10f70` 与 router transition 装配体 `0x140d88820`（`Codex router transition lock is poisoned` owner 之一，200bb/51cal）间接调用 `0x141040bc0`（census 反查实证）。
- mac 用 `ps -ax -o etime=,comm=` 子进程——该串在 win 二进制 0|0；`tasklist` 也 0|0（win 无 shell-out，纯 API 枚举）。`CFBundleShortVersionString` 0|0（mac-only 叶）。
- **此差异为 win 侧新实证，补齐 mac 分册 §6「win 进程枚举叶未逆」的缺口。**

## 4. ChatGPT 引擎目录适配（native_catalog / native_repair_catalog / CodexPaths）

- `x-aimami-catalog-revision` 头 owner `0x14022f700`（1433B / 75bb / 17cal，内联命中）+ `0x140d388c0`（267B/19bb/6cal）；字面量 1.2.6 win **0|3 新增** —— 目录修订头治理为 1.2.7 新面。
- `requires_openai_auth` owner 族：0x14022f700 / 0x140c72940 / 0x140c73960 / 0x140ef2020（串 1|1 底子保留）。
- `native_repair_catalog` 核心 `0x140396de0`（decomp 10002 字符）：panic-Location `src\core\relay\native_repair_catalog.rs`（0x1419eca5e）→ Location 0x1419eca88 两跳落位；新文件面（0|1）。
- `chatgpt.com/backend-api/codex` 端点 3|3 —— **1.2.6 底子已存在**；1.2.7 新增的是围绕它的目录修订/修复目录装配面（mac 分册 §1 结论在 win 复证）。
- `src\core\relay\native_catalog.rs` / `codex_catalog.rs` panic 路径 IDB 命中（0|1 新增）。
- CodexPaths win 目录布局：mac 分册 Unknown 项在 win 侧同样未逐函数闭合（`platform\paths` 族无 IPC 面，本轮未专项 decompile）——维持 Unknown，不外推。

## 5. 未闭合/Unknown

- ~~fix 分派 case 表的 1.2.7 win 全量重建（对齐 1.2.6 win 的 24 键字节级 case-table 方法）未做~~ **已闭合 2026-10-01**（session `<审计会话>`，1.2.6 win IDB + 1.2.7 win IDB 双 live）：字节级 case 表重建完成，leaf 落盘 `raw/aimami/1.2.7/windows-x64/relay/codex_diagnostic/_shared-fix-dispatcher-sub_140f58a10/`。**差集裁决更正**：1.2.7 win fix 分派器 `sub_140F58A10` 实为 **23 键 / 14 bucket**（与 mac fix_issue 23 键 1:1 一致）——1.2.6 的 case 39 `native_off_invalid_openai_thread_models` INLINE 修复臂在 1.2.7 双平台均删除（该键保留为 CHECK-only 诊断键）；`router_recovery_record` 为 CHECK-only 新增键，不进任一平台 fix 分派。本节 §1 的「键集超集增长无删除」为 owner 映射粒度临时结论，以本叶字节级结论为准。
- `CodexPaths` 6 fns 路径常量（mac/win 双侧）维持 Unknown。
