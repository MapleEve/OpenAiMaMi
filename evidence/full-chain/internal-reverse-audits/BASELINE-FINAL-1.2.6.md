# AiMaMi 1.2.6 相对 1.2.3 基线终稿(delta 基线,非独立完整基线)

> 与 `BASELINE-FINAL-1.2.3.md` 的性质不同:1.2.3 是**独立完整基线**(1638 全后端函数真 decompile + 6 页全前端真逆,不靠迁移假设)。1.2.6 是**相对 1.2.3 的 delta 基线**——命令集/DTO 层面对照 1.2.3 做全量比较收敛,后端深挖聚焦官方 changelog 声明的 4 条变更(changelog-item-1~4),不重跑与 1.2.3 相同、未变化的存量后端面。本文件是该 delta 基线的消费者终稿,行文结构参照 `BASELINE-FINAL-1.2.3.md`。

## 1. 与 1.2.3 基线的整体关系(命令集 + DTO)

- **1.2.3 命令数 = 131**(相对 1.2.2=129,新增 2 / 删除 0,详见 `COVERAGE-FINAL-1.2.3.md` 第 1 节)。
- **1.2.4 相对 1.2.3 新增 3 个命令**,1.2.6 完整保留、无新增无删除:静态三版本 IPC 比较(`raw/aimami/1.2.6/macos-arm64/frontend/ipc-three-version-comparison.{json,md}`)显示 1.2.2=129、1.2.4=134、1.2.6=134——**131(1.2.3 保留)+ 3(1.2.4 引入并延续)= 134(1.2.6 命令集全集)**,相对 1.2.4 的命令集合**新增=0、删除=0**。
- **DTO 零漂移**(相对 1.2.4,非相对 1.2.3):`configure_auto_switch.enabled`、`import_accounts_from_file.expectedContentSha256`、`load_snapshot.forceMetadata` 三个字段均已在 1.2.4 变更完成,1.2.6 原样保留,未产生任何**新增**字段级漂移。
- 该比较目前的 canonical 消费入口是 `audits/macos-1.2.6-version-delta/`(`macos-1.2.6-delta/README.md` 中对应记录已于 2026-08-05 被 superseded,仅作历史保留,不作为新 canonical 引用源)。

## 2. 双端前端覆盖(134 IPC / 254 CCF,orphan=0)

- **macOS-arm64**:IPC contracts = **134 commands / 134 rows**;control-flow = **254 rows / 134 commands / 29 guarded / 0 unresolved**。`audits/macos-1.2.6-version-delta/manifest.json` 四角度 B(`B_frontend_ipc`)= `PASS`,`target_ccf_rows=254`、`target_ipc_count=134`、`true_gaps_vs_1_2_4=[]`(相对 1.2.4 的前端命令/控制流 delta 缺口为空集)。
- **Windows-x64**:`audits/windows-1.2.6-version-delta/manifest.json` `six_dimensions.dim1_frontend_ui_state_control_flow` = `PASS(Task #63/#64: 134 IPC commands + 254 CCF nodes extracted, dual-baseline frontend delta produced)`——与 macOS 侧同一 134/254 口径,前端提取维度(dim1)同样 PASS、0 遗漏。
- **口径澄清(避免与后端 owner 映射角度混淆)**:上述"orphan=0"专指**前端 IPC 命令清单与 254 个 CCF(控制流)节点提取本身相对 1.2.4 的缺口=0**(dim1,前端全量提取完整、无命令遗漏、无控制流节点遗漏)。这与 Windows 侧**后端 owner 归属映射角度**(`B_frontend_ipc_true_gaps`,134 条命令中 124 条已解析出后端 owner_ea、**10 条 true_gaps 未解析**,详见 `windows-1.2.6-version-delta/manifest.json` 四角度 B/D)是**两个不同维度**——前端提取完整(dim1 PASS)不等于后端 owner 映射完整(dim2 PARTIAL,124/134)。本文件如实区分,不用前端 PASS 掩盖后端 owner 映射的真实缺口。

## 3. 后端四个 changelog-item 当前真实覆盖状态

> 完整证据、逐函数地址、调用链、副作用、诚实缺口清单见 **`CHANGELOG-CROSSMAP-1.2.6.md` v7**(2026-08-07 产出,双线独立核验+对抗复核后的最终归约)。本节仅摘要该文档 v7 现行结论,不重复展开证据细节,以该文档为准。
> **术语口径**:下表"要点"列区分两类不同性质的未闭合项——**仍需推进的真实缺口**(目标客观存在但未定位,需新排查线索,是待办)与**架构性天花板**(经穷尽核查确认对应代码结构在该平台真实不存在,如编译器融合/改用数据字面量/架构性重构,是已闭合结论非待办)。两类不混用同一措辞。

| 编号 | 主题 | 覆盖程度(v7 现行) | 要点 |
|---|---|---|---|
| changelog-item-1 | Windows 智能路由 + 线程可见性/重试兼容修复(router_reconciler 簇) | **PARTIAL** | macOS:10/10 目标 grounded 完整反编译(含此前 60099 字符截断项,已用 py_eval + 服务端下载端点解决,49540 字符完整体落盘)。Windows:核心 7 个目标**全部有裁定**——5 个已改名+归目录+加注释+`idb_save`(`reconcile_router_on`/`reconcile_native_off_with_progress`/`reconcile_native_off_after_stop_with_progress`/`append_thread_reconcile_warnings`/`reconcile_threads_with_progress`),2 个诚实确认为完全内联进共享 helper(`run_config_mutation_with_windows_retry`/`RouterToggleProgress::serialize`)。**下一层递归函数 4 项全部 confirmed**（`reconcile_inner`/`config_takeover::takeover`/`router_unlock_auth::commit_auth_for_router` 于此前轮 confirmed；`codex_project_state::repair_if_needed`@`0x1405D7DD0` 于 v6 本轮用字符串特征法破墙确认——此前 round3/round4 的排除系假墙误判，经独立对抗核验裁定真实confirmed），同批清理 5 个函数的 `/vibe/` dirtree 残留条目(BFS 复验 0 stranded)。**孤儿 `0x1406FABE0`（非本簇7个原定目标之一）v7 round7 本轮由 mac 侧独立核验+对抗复核最终裁定为 `confirmed`**（win `0x1406FABE0` = mac `<Map<I,F> as Iterator>::fold::hccb4f8d48c346002`@`0x100805510`，6/6字段+调用链+7/7信封字段+rename/注释全部吻合），`genuine_ceiling` 判定已不适用（真实身份已confirmed）。**本簇 5 核心函数+4 项递归函数+1 项孤儿身份 全部 confirmed，无遗留的"仍需推进的真实缺口"**。双审的 canonical 格式化流程/四角度完整性核查(红线15)/真机对照(红线25)均未做。 |
| changelog-item-2 | 推理内容清理(修复 Claude 协议跨原生边界的私有推理内容清理) | **PARTIAL** | macOS:用户指定 9 个符号,7 个定位到真实地址并完整反编译(2 个经 3 次独立 `func_query` 核验后确认本版本二进制不存在)。⚠ `cleanup_private_reasoning_items_in_existing_rollout` 是持久化状态的破坏性写入(原子重写 rollout JSONL,丢弃被判定为不可用的 reasoning 行)。Windows:写入侧(carrier writer)owner 函数 `0x140a28fb0`=`set_anthropic_thinking_carrier` 已 confirmed+改名;**2 个巨型调用者(`emit_response_done_events_for_delta`@`0x14077FEC0`/`translate_anthropic_response_to_output_items`@`0x140A623C0`)本轮 confirmed+改名**,共同宿主函数 `0x140A42B20`(48KB)全量完整反编译(332303 字符,0 截断)。**识别/清理侧对应函数(对应 mac `is_unusable_store_false_reasoning_item`)经穷尽核查(全函数体+全二进制字段名 xref)确认为架构性天花板**——win 侧是"先解码重建、失败即丢弃"的融合路径,不存在与 mac 对应的独立判定函数,两者处理效果相同但代码结构不同,此为已闭合的真实架构差异结论,非"仍未找到"。 |
| changelog-item-3 | DeepSeek V4 Flash 官方协议自动迁移 | **COVERED(非 gate_accepted)** | 本轮 4 簇中覆盖程度最高:macOS 侧 `is_deepseek_v4_flash_model`/`migrate_legacy_deepseek_v4_flash_official_protocol` 均完整反编译无截断;Windows 侧符号被剥离,但经 `find_regex`+`xrefs_to` 定位到判定逻辑已被编译器内联进 migrate 函数本体,与 mac 版逻辑完全等价(非行为缺失,是内联优化差异),Host 常量双端字节级核实一致。⚠ 迁移函数本身是持久化状态迁移写操作(原地位标志字节写)。残留缺口均为次要/超范围项(未逐版本反编译确认引入版本等)。 |
| changelog-item-4 | GPT-5.6 模型清单修复 | **PARTIAL** | macOS 侧 8/10 精确符号命中,**全部 8 个均已取得完整反编译体**(含唯一确认带破坏性副作用的函数 `fix_native_off_invalid_openai_thread_models`,62443 字符完整体)。⚠ 该函数写线程元数据 rollout + 恢复 DB,确认破坏性副作用。此前"与官方 6 档吻合"的表述系编造已撤回(该函数实际只硬编码 4 档:low/medium/high/xhigh)。2 个符号(`quarantined_model_provider_ids`/`read_top_level_model_line`)经充分排查确认本版本二进制内不存在。**Windows 侧 v7 本轮 8 目标构成较 v6 无变化**:**4 个 confirmed+改名**(`run_bundled_cli`/`official_reasoning_profile`/`check_native_off_invalid_openai_thread_models`+`is_aimami_owned_model_section`@`0x140572fb0`（调用簇扩展法定位，经独立对抗核验判定真实confirmed）);**1 个 confirmed_inlined**(`fix_native_off_invalid_openai_thread_models`——完整枚举诊断分发器`sub_1405CBF60`全部15个case桶后于case 39发现完整内联实现，此前误判的`genuine_ceiling_claimed=true`已订正为`false`，经独立对抗核验确认真实);2 个确认为**架构性天花板**(`catalog_models`——逻辑融合进每个调用点无独立函数边界;`full_reasoning_levels`——win 侧改用内嵌 JSON 数据字面量而非代码构造);**仅 1 个仍需推进的真实缺口**(`native_off_openai_model_needs_fallback`——**v7 round6 本轮经case 39全文1232行穷尽复核+3个结构最吻合被调函数完整反编译+全二进制精确字符串扫描，NOT_FOUND结论持续不变，独立对抗核验裁定主结论CONFIRMED但发现3处描述瑕疵（入口身份串张冠李戴/两函数跳数错标/死代码消除论证强度不足），仍为`gap_needs_reducer`，给出3条具体下一步线索**)。 |

**无一项达到 `gate_accepted=true`/`readyToImplement=true`**(与 `CHANGELOG-CROSSMAP-1.2.6.md` v7 汇总结论一致)。

## 4. 实现门状态(全部 false)

- 本文件引用的全部证据(四个 changelog-item + 双端前端 dim1 + 双端 gate-report + router-reconciler round5/round6/round7、gpt56-model-catalog-fix isaimamiowned-round4/round5closure/needsfallback-round6 各组 producer-ledger/gate-report),`consumerStartReady`/`strictImplementationUse`/`readyToImplement`/`implementation_use`/`gate_accepted` **均为 `false`**——已独立核对 `audits/macos-1.2.6-version-delta/gate-report.json`、`audits/windows-1.2.6-version-delta/gate-report.json` 与本轮新增 producer-ledger/gate-report 文件,门控字段逐一核实全部为 `false`,与 `CHANGELOG-CROSSMAP-1.2.6.md` v7 文档头声明("本文档引用的全部证据……均为 `false`")一致。**四项本轮升级为confirmed的目标（`repair_if_needed`/`is_aimami_owned_model_section`/`fix_native_off_invalid_openai_thread_models`/孤儿`0x1406FABE0`）虽经独立对抗核验确认真实身份定位，但同样未触碰任何实现门字段**——真实confirmed只表示函数级身份可信，不等同于达到实现门标准。
- **本文件本身不提升任何实现门**,不触发任何新 IDA 调用/rename/idb_save;仅归约既有磁盘证据为消费者可读终稿。

## 5. 与既有文档的关系

- 逐函数地址、调用链、DTO 字段、副作用证据、诚实缺口清单:见 `CHANGELOG-CROSSMAP-1.2.6.md` v7(唯一现行版本,v1/v2/v3/v4/v5/v6 历史段落保留于同文件内,未删除)。
- 双端四角度/六维度完整核查数据:见 `audits/macos-1.2.6-version-delta/{manifest.json,gate-report.json}` 与 `audits/windows-1.2.6-version-delta/{manifest.json,gate-report.json}`。
- 前端全量提取原始记录:`audits/macos-1.2.6-delta/README.md`(2026-08-05,已被 `wf-aimami126-delta-20260805-040717` superseded,仅作历史参考,新 canonical 引用见 `macos-1.2.6-version-delta/`)。
- 1.2.3 独立完整基线(本文件比较基准):`BASELINE-FINAL-1.2.3.md`。

<!-- N0_GATE_STATUS_CONSISTENCY_20260810 -->
## N0 gate/status consistency correction — current Windows 1.2.6 state

- session / authority: `wf-aimami-win-grounded-repair-20260810` under `EXPLICIT_TAKEOVER`; predecessor evidence and all historical analysis remain preserved.
- current consumer gate: `consumerStartReady=false`, `strictImplementationUse=false`, `readyToImplement=false`, `implementation_use=false`, `gate_accepted=false`.
- producer gaps that block start, recorded independently: (1) a release-scope call tree stops at depth=1 before implementation leaves; (2) the consumer interface contract lacks DTO/error-envelope/side-effect/frontend-consumption closure; (3) required pseudocode is truncated or `decompile_null`, not usable owner/body proof; (4) the Windows four-angle input set is incomplete.
- full-gate blockers kept separate from producer gaps: dim6 acceptance mapping is pending on the C5 implementation side, and live-reference parity is not run. Both additionally block `readyToImplement`/`full_leaf_100`; neither is labeled a producer evidence gap.
- scope boundary: this correction only prevents erroneous Windows 1.2.6 consumer release. It neither changes raw/intermediate evidence nor alters any macOS bundle.


<!-- CONSUMER_CONVERGENCE_WIN126_NONVOICE49_2026-08-15 -->
## Windows 1.2.6 non-voice 49 目标消费者收口（consumer convergence）

- session `cc-consumer-reduce-win126-nonvoice49-20260815`；消费者面向收口终稿，不提升任何实现门。
- 49 non-voice 目标（windows-x64 独立闭合，不外推 macOS）：41 DONE（dim1-5 闭合 dim6 留白）+ 8 BLOCKED（blocks_start 见 `windows-1.2.6-version-delta/logic/CONSUMER-CONTRACT-NONVOICE-49.md`）。
- voice active count=0（硬门）。`readyToImplement=0`、`implementation_use=false`、`gate_accepted=false`。

<!-- HANDLER_RESOLVED_WIN126_8BLOCKED_2026-08-16 -->
- **8 原 BLOCKED 目标 handler RESOLVED + DTO 字段级闭合（2026-08-16 追加，session `cc-consumer-reduce-win126-nonvoice49-handler-resolved-20260816`）**：set_claude_web_search_compat=`sub_1409B6420`(写+318)+`sub_1409C0B10`(persist)；set_codex_no_account_slots=`sub_140DC9E00`(validate)+`sub_140C774F0`(字段写+persist+transition)；remove_mcp_server entry/facade/impl=`0x140156D90`→`0x1409F42E0`→`0x1409D0ED0`；clean=`0x140AF0C50`(CleanResult 3 字段, semantic_recovery)。DTO 字段级闭合含 McpServerSummary 9 字段 + CleanResult 3 字段 + CoreEnvelope 错误信封。vtable 填充枚举 off_141889D80/off_14188A280 破除「动态派发不可恢复」假上限。leaf 级证据档闭合 only，bundle 级仍 BLOCKED_N0，实现门全部不变。

<!-- CONSUMER_CONVERGENCE_MAC126_NONVOICE13_2026-08-16 -->
- **macOS 1.2.6 non-voice 13 目标收口 + 非命令后端 truly_undone 归零（2026-08-16 追加，session `cc-consumer-reduce-mac126-nonvoice13-20260815` + `cc-mac126-truly-undone-fullchain-20260816`）**：13 non-voice delta 目标（7 added + 6 removed/renamed）dim1/2/3/5 闭合 + dim4 body 级逐字段闭合，1 BLOCKED（get_codex_router_auth_readiness）。非命令后端 1639 函数 angle-D 四分类（183 already_in_canonical + 66 glue + 2 fullchain + 其余 baseline 迁移），`four_categories_rollup_251.truly_undone 2→0` 归零为真零。2 真缺口 fullchain 收口：`is_relay_protocol_object@0x1009fb2b0`（translator 纯谓词）+ `migrate_legacy_auth_state@0x100733fe0`（router_unlock_auth 字段级 DTO/error 闭合，⚠ 写本机 auth 状态）。leaf 级 `consumerStartReady=true`+`strictImplementationUse=true`；bundle 级实现门全 false（dim6 留白 + LIVE_REFERENCE_NOT_RUN）。自足合同见 `audits/macos-1.2.6-version-delta/logic/CONSUMER-CONTRACT-NONVOICE-13.md` §1.4。

<!-- DUAL_PLATFORM_SOT_CLOSEOUT_20260816 -->
- **双平台 SoT 收口 + grounded 六项终验（2026-08-16 追加，session `cc-consumer-reduce-aimami126-dualplatform-sot-closeout-20260816`）**：win 8 原 BLOCKED handler RESOLVED（0 残留）+ DTO 字段级闭合 + vtable 枚举；mac truly_undone 2→0 真零；voice active=0。grounded 六项终验全 PASS（红线14）：INDEX 尾 session-id / root producer-ledger 存在 / REVERSE-STATUS 1.2.6 零 in-progress / leaf 抽查 / 双端 gate-report 非空 / 双端 diff-readiness readiness=true。实现门全 false（dim6 留白 + live_reference 未对照，红线25）；mac 与 win 互不外推（红线8）。

<!-- CODEX_DIAGNOSTIC_BTIER_9TARGET_DUALPLATFORM_20260821 -->
- **codex_diagnostic B-tier 9-target dual-platform batch（2026-08-21 追加，parent claim `cc-aimami126-codex-diagnostic-btier-claim-20260821`，mac reduce `cc-aimami126-codex-diagnostic-btier-reduce-mac-20260821`，win reduce `cc-aimami126-codex-diagnostic-btier-reduce-win-20260821`）**：9 diagnostic key targets（`project_state_integrity_diagnostic_key_verify`/`router_http_contract`/`state_db_relocation`/`takeover_backup_orphan`/`thread_model_catalog_consistency`/`thread_response_item_ids`/`thread_poisoned_instructions`/`thread_provider_consistency_with_cache`/`requires_quiet_window`）× {macos-arm64, windows-x64}。mac: 8/9 `consumerStartReady=true`（1 未评级，证据不完整）；win: 9/9 `consumerStartReady=false`（`BLOCKED_DIM1_UNIVERSALLY_MISSING`）。全部 18 行 `strictImplementationUse=false`/`readyToImplement=false`（dim1 前端本轮全模块未调查）。**⚠ 两处未裁决问题记录在案**：(1) mac 与 win 对"dim1 缺失是否阻断 consumerStartReady 本身"给出相反判定，留待用户裁决，未擅自统一；(2) windows reduce 自报的 INDEX.jsonl 追加（"46 hits" + PASS 六项核查含行数 2042→2051）经独立核验为假，本轮已补写 10 条真实 INDEX 条目（428→438）。详见 `COVERAGE-FINAL-1.2.6.md` 同名条目 + `REVERSE-STATUS.md` claim closure 条目。产物：`audits/macos-1.2.6-codex_diagnostic/` + `audits/windows-1.2.6-codex_diagnostic/`。

<!-- CONSUMER_CONTRACT_FULL_DIFF_SOT_20260824 -->
## Consumer Contract & SoT Full Update (2026-08-24)

> session `cc-aimami-full-diff-consumer-sot-20260824`；消费侧合同 + SoT 全量更新。SESSION OVERRIDE: 本条覆盖此前所有未含 consumer_gate 字段的 consumer contract 版本。

- **consumer_gate 状态**：mac `consumerStartReady=true` + `strictImplementationUse=true`；win `consumerStartReady=true` + `strictImplementationUse=false`（BLOCKED_N0: load_snapshot decompile_null + dim6 + live_reference）
- **实现门全 false**：`readyToImplement=false`、`implementation_use=false`、`gate_accepted=false`（dim6 留白 + LIVE_REFERENCE_NOT_RUN）
- INDEX.jsonl: 2076→2083 (+7 lines, append-only)
- 非动作：不改变任何实现门、不写产品仓、不公开发布。
