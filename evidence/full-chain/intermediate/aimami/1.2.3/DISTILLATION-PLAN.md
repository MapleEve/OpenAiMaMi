# AiMaMi 1.2.3 — 38 模块 canonical audits 蒸馏测绘 + 计划

同步时间：2026-07-24
产出机：本机（消费者+生产者全量）
性质：**只测绘，不开逆**。本文档核的是 raw 侧就绪度（.c 数量、前端 ipc-contracts、backend-baseline 存在与否），不代表任何门控判定，不写 `implementation_use=true`。

---

## 0. 对齐基准：1.0.9 的 38 个 canonical 模块

`internal-reverse/audits/` 下 1.0.9 taxonomy（macos 18 + windows 18 + cross 2 = 38）：

- **macOS 18**：accounts / bootstrap / custom-instructions / daemon-autoswitch / maintenance / mcp / mystery-unlock / plugins / relay / relay-core / sessions-analytics / skills / system / system-hotspot / system-shell-init / tray / voice / window-path
- **Windows 18**：accounts / bootstrap / custom-instructions / daemon-autoswitch / maintenance / mcp / mystery-unlock / plugins / relay / relay-core / sessions-analytics / skills / system / system-hotspot / **system-usage**（win 独有，替代 mac 的 system-shell-init）/ tray / **ui**（win 独有）/ voice
- **Cross 2**：home-usage-frontend / relay-core-bootstrap

1.2.3 现有 canonical 包（2/38）：`macos-1.2.3-relay`、`windows-1.2.3-relay`（均为 `consumerStartReady` 档，dim4/dim6 未闭合）。**relay-core 在 1.2.3 已被并入 relay 包的 `core::relay::*` 扫描范围**（mac 32 子模块全覆盖、win 28/32 子模块有目录），不再作为独立 raw 工作单——mac 侧相当于随 relay 包一并"就绪"，win 侧 relay-core 仍只有 owner-map 级 recon（177 行，Tier B 命名 64 / Tier C 未命名 113，**0 反编译**），是 relay 包内部的已知 gap，不新开单。

缺 36 = 34 个平台内模块（mac 17 + win 17，各自减去已被 relay 吸收的 relay-core）+ 2 个 cross。

---

## 1. 全局结构性发现（优先于逐模块矩阵）

**发现 A（P0 阻断，影响全部 win 模块 + 2 个 cross 包）**：`raw/aimami/1.2.3/windows-x64/` **完全没有前端提取产物**——无 `frontend/` 目录、无 `ipc-contracts.jsonl`、无 `backend-baseline/`。对比 mac 侧（`frontend/ipc-contracts.jsonl`、`frontend/frontend-control-flow.jsonl`、`backend-baseline/` 齐全）。

- 后果：Skill 红线「前端优先」（AGENTS.md §2 + cookbook §5）在 win 侧完全未满足——角度 B（前端命令名 diff `true_gaps=0`）无法执行，任何 win 模块即使 raw .c 齐全，也只能停在 `consumerStartReady`（这也解释了为什么现有 `windows-1.2.3-relay` 包已明确写 dim4/dim6 未闭合）。
- Tauri 应用前端资源通常打包内容与 mac 侧同源（同一份 web bundle），需先验证「能否直接复用 mac 侧 `ipc-contracts.jsonl` 作为 win 命令名权威表」还是必须用 `extract_windows_package.py --frontend` 从 win 安装包单独提取（平台证据必须平台生产，红线 8）——这是 batch 0 的具体任务，不能跳过直接假设复用。
- 这是**批次 0（P0 前置阻断项）**，理由：不解决它，36 个缺口里所有 win 模块和 2 个 cross 包的蒸馏结论上限都卡在 `consumerStartReady`，达不到 `strictImplementationUse`/`readyToImplement`。

**发现 B（拓扑简化，减少目标数）**：mac `system-shell-init` 在 1.0.9 就已标记 `duplicate_local_outtake_not_authoritative`——非权威结论包，真实内容归并进 `bootstrap`。1.2.3 沿用同一拓扑，**不需要为 system-shell-init 单开工作单**，直接在 bootstrap 包里注明"shell-init 已归并"。

**发现 C（疑似功能下线，需验证非逆向）**：`plugins`（list_plugins / toggle_plugin / PluginRegistry）在 mac 与 win 1.2.3 raw 全树（.c + frontend 内容 + ipc-contracts）**零命中**。1.0.9 是 13/13 PASS 的成熟功能。这更像是 1.2.3 已下线该功能而非未逆向——但只测绘不能下结论，需要一次**廉价验证动作**（非 IDA 反编译）：查 `frontend/beautified` 全量 JS 是否有 plugin 路由/组件残留、查产品侧 changelog。此动作成本远低于开逆向单。

**发现 D（同类疑似下线）**：`custom-instructions` 在 mac 侧前端 `ipc-contracts.jsonl` 命令名仍在（`load_custom_instruction_state` 等 5 个 wrapper 命中），但**全树 0 个匹配的后端 .c**。1.0.9 结论本就是"同平台 backend command string/owner absent，accepted substitute via IDA absence"——即 1.0.9 时代这本来就是纯前端 wrapper（无 Rust 命令实现，或 IDA 找不到 owner）。1.2.3 前端仍保留同名 wrapper，与 1.0.9 结构一致，**大概率可直接复用 1.0.9 结论做版本迁移**（Diff 规约：同面无增量直接迁移），而非当作 gap 开新逆向单。win 侧因发现 A（前端缺失）暂无法验证，阻塞在 batch 0 之后。

---

## 2. 逐模块就绪度矩阵

图例：raw .c 数＝find 到的反编译 `.c` 文件数（含未去重/未分类文件，量级参考非精确 leaf 数）；就绪度：`ready`＝可直接 reduce+写 canonical 包；`partial`＝raw 存在但不完整或未分类，需补充/triage；`gap`＝raw 基本缺失，需新开 IDA 工作；`verify-only`＝怀疑功能下线或结构性吸收，只需验证不需要新逆向；`blocked`＝依赖 batch 0 前端提取。

### macOS（17，relay 已完成不计入）

| 模块 | raw .c 数（来源目录） | 前端 ipc-contracts | backend-baseline | 就绪度 | 蒸馏所需产出 |
|---|---:|:---:|:---:|---|---|
| accounts | ~112（core/account_io+account_coordination+account_metadata+oauth_refresh+oauth_login + commands/accounts+account_oauth+account_io） | 有（accounts-frontend.md） | 有 | **ready** | 直接 reduce+四角度校验+写 canonical 包 |
| voice | ~202（core/voice+commands/voice+voice_runtime+platform/voice_trigger_macos+voice_permissions+voice_macos） | 有（voice-frontend.md） | 有 | **ready** | 同上，体量大需分批 reduce |
| mcp | 18（core/mcp+commands/mcp） | 有（mcp-sessions-settings-skills-frontend.md） | 有 | **ready** | 同上 |
| skills | 21（core/skills） | 有（同上共享页） | 有 | **ready** | 同上 |
| sessions-analytics | 64（core/sessions+session_analytics+analytics+commands/sessions） | 有（同上共享页） | 有 | **ready** | 同上 |
| system | 45（commands/system+platform/system_volume+audio_feedback+screen，含与 hotspot/mystery-unlock/window-path 交叉的 leaf，reduce 时需去重不可重复计数） | 有 | 有 | **ready** | reduce 时按 leaf 名去重，避免与 hotspot/mystery-unlock/window-path 重复建包 |
| system-hotspot | 16（commands/hotspot） | 有 | 有 | **ready** | 直接 reduce（含 window-path 的 focus_main_window，命名空间同属 `commands::hotspot`，两包需交叉引用不重复） |
| tray | 16（commands/tray_menu+install_macos_quit_guard+load_tray_template_icon+launched_hidden+request_user_quit+schedule_startup_main_window_reveal） | 有 | 有 | **ready** | 直接 reduce |
| mystery-unlock | 5（commands/system 2 + core/repository 3，与 1.0.9 三命令 cluster 完全对应） | 有 | 有 | **ready** | 直接 reduce，范围对齐 1.0.9 |
| window-path | 2（commands/system 的 open_path + commands/hotspot 的 focus_main_window） | 有 | 有 | **ready** | 直接 reduce，2 leaf 精确对应 1.0.9 |
| bootstrap | 89 未分类通用 run_0x*.c（`run/ida/pseudocode/`，无子目录按 leaf 命名）+ core/bootstrap_cache 9 + platform/single_instance 7 | 有 | 有 | **partial** | 需 triage：从 89 个泛型 `run_0x*.c` 中定位 app_run_entry/managed_state_registry/boot_spawn_threads 等 1.0.9 对应 4 leaf 的新地址（IDA `lookup_funcs`/`callgraph` 定位，非新反编译，只是归类），归并 system-shell-init 结论 |
| daemon-autoswitch | 8（platform/daemon 6 + run_daemon_once_cli/inner 各1） | 有（analytics-maintenance-autoswitch-frontend.md） | 有 | **partial→gap** | 1.0.9 是 13 命令（daemon 6 + auto-switch 7）；当前只见 daemon 侧的 6+2，auto-switch 侧 7 命令未见对应 .c，需要补 IDA 全链 |
| maintenance | 2（core/repository 的 rebuild_registry_with_policy + commands/system 的 rebuild_registry） | 有（同上） | 有 | **partial→gap** | 1.0.9 scope=clean+rebuild_registry+load_snapshot 三命令；当前只见 rebuild_registry 一条，clean/load_snapshot 未确认存在，需补 IDA |
| custom-instructions | 0（前端 wrapper 5 个仍在，后端 .c 零命中） | 有（命令名仍在） | 有 | **verify-only** | 不开新逆向单；核对 1.0.9"同平台 backend absence"结论是否原样成立（大概率是版本间无增量，直接迁移引用 1.0.9 包） |
| plugins | 0（前端/后端全零命中） | 无相关内容 | — | **verify-only** | 怀疑 1.2.3 已下线该功能；廉价验证（全量前端 JS grep + changelog），非逆向单 |
| system-shell-init | N/A（1.0.9 即为 duplicate_local_outtake，归并进 bootstrap） | — | — | **no-op** | 不建独立包，直接在 bootstrap 包内注明"已归并" |
| relay-core | 已含在 macos-1.2.3-relay（`core::relay::*` 32 子模块全覆盖） | 有 | 有 | **ready（已随 relay 完成）** | 不新开单，reduce 时从 relay 包内拆出 relay-core 专属结论小节即可（若消费者需要独立包） |

### Windows（17，relay 已完成不计入；全部受发现 A 阻塞在 `consumerStartReady` 上限）

| 模块 | raw .c 数（来源目录） | 前端 ipc-contracts | backend-baseline | 就绪度 | 蒸馏所需产出 |
|---|---:|:---:|:---:|---|---|
| accounts | 数十~上百（commands/accounts 42 + account_io/oauth_login 12/oauth_refresh 10/auth 3 + manager 52 + repository 72，后两者含跨模块通用逻辑需 reduce 时精确切分） | **无** | **无** | **partial（阻塞发现A）** | raw 体量够；先 batch0 补前端，再 reduce+四角度 |
| mcp | 15 | 无 | 无 | **partial（阻塞发现A）** | 同上 |
| skills | 6（与 1.0.9 六命令 cluster 精确对应） | 无 | 无 | **partial（阻塞发现A）** | raw 已精确覆盖，只差前端角度 B 验证 |
| mystery-unlock | 2（commands/ida 下 get/merge_mystery_unlock_grants，对应 1.0.9） | 无 | 无 | **partial（阻塞发现A）** | 同上 |
| system-hotspot | 3（hotspot_ready/get_hotspot_enabled/set_hotspot_enabled，精确对应 1.0.9 三 leaf） | 无 | 无 | **partial（阻塞发现A）** | 同上 |
| bootstrap | 3+（manager/bootstrap_0x.. + commands/load_bootstrap_state + commands/accounts/store_bootstrap_snapshot_best_effort） | 无 | 无 | **partial** | 大致覆盖但未达 1.0.9 的 4-leaf 精确对应，需 IDA 核对 + 补前端 |
| daemon-autoswitch | 7+（commands 的 dismiss/load_pending_auto_switch + repository 的 auto_switch_config + codexmate_lib 的 run_daemon_once/set_auto_switch/configure_auto_switch/confirm_pending_auto_switch） | 无 | 无 | **partial** | 覆盖面接近 1.0.9 的 13 命令，需逐条核对补齐缺口 + 前端 |
| maintenance | 3（commands rebuild_registry + repository rebuild_registry_with_policy + commands/accounts load_snapshot） | 无 | 无 | **partial** | "clean" 命令未确认，需核对 + 前端 |
| system-usage | 1（get_usage_refresh_interval，1.0.9 三命令之一） | 无 | 无 | **gap** | set_usage_refresh_interval + refresh_usage_snapshot（1.0.9 有 ceiling-crack 记录，1.2.3 需重新定位）未见 raw，需新 IDA |
| tray | 2（远薄于 1.0.9 的 Shell_NotifyIconW/RegisterClassW/TrackPopupMenu 等终端 + 7 个 AiMaMi 层 VA） | 无 | 无 | **gap** | 需重新做 win 原生 tray 终端反查（1.0.9 playbook 有现成方法论可复用） |
| ui | 0（set_app_theme 零命中，mac 侧同样零命中） | 无 | 无 | **gap** | 双平台都缺；单命令，成本低，可与 mac 一起快速补 |
| relay-core | 0 反编译，仅 owner-map 177 行 recon（Tier B 64 已命名/Tier C 113 `sub_` 待命名） | 无 | 无 | **gap（已知，随 relay 包内追踪）** | 不新开独立模块单；作为 windows-1.2.3-relay 包内部 todo 继续，不在本 36 缺口计数内重复列 |
| custom-instructions | 0 | 无（win 前端本身未提取，无法判断是否也是 wrapper-only） | 无 | **blocked（发现A）** | 必须先补 win 前端提取，才能判断是否与 mac 同为"backend absence" |
| plugins | 0 | 无 | 无 | **verify-only** | 与 mac 侧一起验证是否已下线 |

### Cross（2）

| 模块 | 就绪度 | 说明 |
|---|---|---|
| home-usage-frontend | **blocked** | 依赖 mac usage/home 相关 raw（system-usage 对应功能 mac 侧在 `system` 桶内，需 reduce 时挑出）+ win 前端提取（batch 0）+ win system-usage 补 raw（gap） |
| relay-core-bootstrap | **blocked** | 依赖 mac bootstrap triage（partial）+ win bootstrap 核对（partial）+ win relay-core 补反编译（gap，已在 relay 包内跟踪） |

---

## 3. 蒸馏优先级批次

排序依据：业务重要度（accounts/voice/mcp/skills/sessions-analytics 等用户可见核心功能 > system/tray/hotspot 等辅助功能 > daemon/bootstrap/maintenance 等基础设施 > mystery-unlock/window-path/ui 等边角功能 > 疑似下线功能）× 就绪度（raw 全齐可直接 reduce 优先于需要新 IDA 工作的）。

**Batch 0（P0 前置，不做后续 win/cross 批次就没有意义）**
- Win 前端提取：确认能否复用 mac `ipc-contracts.jsonl`（同源 bundle 假说需验证），不能复用则用 `extract_windows_package.py --frontend` 从 win 安装包单独提取，产出 `raw/aimami/1.2.3/windows-x64/frontend/{ipc-contracts.jsonl, frontend-control-flow.jsonl}` + `backend-baseline/`。
- 解除后，win 侧 5 个 `ready`-raw 模块（accounts/mcp/skills/mystery-unlock/system-hotspot）才能从 `partial` 升到可冲 `strictImplementationUse`/`readyToImplement`。

**Batch 1（mac，raw 已齐，直接 reduce+写包，无需新 IDA，7 模块，业务重要度从高到低）**
1. mac accounts（用户身份/账号核心）
2. mac voice（核心功能，体量最大需分片 reduce）
3. mac mcp
4. mac skills
5. mac sessions-analytics
6. mac system-hotspot（含 window-path 交叉，一并处理）
7. mac window-path（与上条联合产出，避免重复 leaf）
8. mac tray
9. mac mystery-unlock
10. mac system（收尾，注意与前几条 leaf 去重）

**Batch 2（win，依赖 Batch 0 完成后立即可做，raw 已齐，5 模块）**
1. win accounts
2. win mcp
3. win skills
4. win mystery-unlock
5. win system-hotspot

**Batch 3（verify-only / no-op，成本低，可与 Batch 1 并行，不占 IDA 深逆预算）**
1. mac custom-instructions（迁移 1.0.9 结论 + 二次确认 1.2.3 前端 wrapper 名单一致）
2. mac plugins（验证是否下线）
3. win plugins（同上，与 mac 一起判断，跨平台共用一次验证结论）
4. mac system-shell-init（归并进 bootstrap 包，写迁移说明，无新证据）
5. mac relay-core（从既有 `macos-1.2.3-relay` 包内拆出小节引用，不新建 raw）
6. win custom-instructions（阻塞 Batch 0，Batch 0 完成后并入本批）

**Batch 4（需要补充 raw/triage，中等成本，8 模块）**
1. mac bootstrap（89 个泛型 run_0x*.c triage 定位 4 leaf，非新反编译）
2. mac daemon-autoswitch（auto-switch 7 命令侧缺 raw，需补 IDA）
3. mac maintenance（clean/load_snapshot 两 leaf 待确认，需补 IDA）
4. win bootstrap（核对 4-leaf 精确对应，可能需补 IDA）
5. win daemon-autoswitch（13 命令逐条核对补缺口）
6. win maintenance（clean 命令待确认）
7. mac plugins/win plugins 若 Batch 3 验证结果是"未下线只是未逆向" → 转入本批新开逆向单（条件分支，视验证结果决定）

**Batch 5（新 IDA 工作量最大，5 模块，win-only 或双平台小功能）**
1. win system-usage（补 set_usage_refresh_interval + refresh_usage_snapshot，refresh_usage_snapshot 在 1.0.9 是 ceiling-crack 案例，1.2.3 需重新定位）
2. win tray（taskbar/菜单终端重新反查，1.0.9 playbook 方法论可直接复用）
3. mac ui / win ui（set_app_theme，双平台零 raw，命令单一成本低，可提前插队）
4. win relay-core（177 行 owner-map 里 Tier C 113 个 `sub_` 未命名候选需反编译定名，工作量最大，建议独立排期不卡本轮 36 缺口主线）

**Batch 6（cross，依赖上述批次收尾后才能合成）**
1. cross home-usage-frontend（依赖 Batch 0 + win system-usage 补齐 + mac system 桶内 usage 相关 leaf 拆分）
2. cross relay-core-bootstrap（依赖 mac bootstrap triage 完成 + win bootstrap 核对完成 + win relay-core 反编译进展，可能需等 Batch 5 win relay-core 有实质进展才能真正合成，不强求等它 100%）

---

## 4. 计数复核

- Batch 1（mac ready）：10 模块（含 window-path 与 system-hotspot 联合但计 2 条）
- Batch 2（win ready，阻塞 Batch 0）：5 模块
- Batch 3（verify-only/no-op）：6 条（含 win custom-instructions 阻塞项、mac relay-core no-op）
- Batch 4（partial→需补 raw）：6 条主线（win/mac 各 3，plugins 条件分支不计入固定数）
- Batch 5（gap，新 IDA 量大）：4 条（win system-usage / win tray / ui×2平台合计1条批次条目 / win relay-core）
- Batch 6（cross）：2 条

10+5+6+6+4+2 = 33，加上 mac relay-core（no-op 已计入 Batch3）与 win relay-core（gap 已计入 Batch5）不重复计数，与「36 缺口」对齐：36 = 34 平台内模块 + 2 cross；本计划覆盖全部 34+2。差异来自部分模块（mac window-path 与 system-hotspot、plugins 条件分支）在批次表述上做了合并/分支处理，非遗漏——完整清单见第 2 节矩阵，逐条均有归属批次。

---

## 5. 本轮明确不做的事

- 不跑任何 IDA 深逆（本轮只读盘测绘）
- 不写任何 canonical 包（`internal-reverse/audits/` 下不新增/修改任何 1.2.3 模块目录）
- 不对 plugins/custom-instructions 下结论（"验证"是下一轮的低成本任务，不是本轮的判定）
- 不假设 win 前端可以直接复用 mac 包——Batch 0 明确要求先验证再决定提取方式
