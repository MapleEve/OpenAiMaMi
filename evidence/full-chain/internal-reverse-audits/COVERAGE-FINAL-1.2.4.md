# AiMaMi 1.2.4 版本 delta 逆向终稿(mac 1.2.3→1.2.4 / win 1.2.3→1.2.4)

> 生产者:mini 本机。消费者面向终稿,只读盘上已由 IDA 反编译定稿的 `.c` 伪代码 + beautified 前端 JS + ipc-contracts.jsonl + 6 份 6dims/delta 制品,做 delta 整合;不连 IDA、不逆二进制、不臆断。
> 授权:本仓/本机所有者自家已授权产品 AiMaMi,baseline=1.2.3,所有者在对话渠道下达重建授权。
> 来源制品(6 份,共 105974 字节):
> - 后端 4 × 6dims:`relay-translator-anthropic`(21523B) / `relay-catalog-thread-diag`(19177B) / `relay-router-auth`(18879B) / `repository-platform-system`(14341B)
> - 前端 2 × delta:`FRONTEND-CCF-DELTA-1.2.4` + `CHANGELOG-FRONTEND-ALIGNMENT-1.2.4`(15481B) + `DELTA-FINAL-1.2.4`(整合终稿)
> 红线:标 `[TRUNCATED]`/`[DECOMPILE-FAILED]` 的不臆断;mac 为行为真值源,win 仅做跨平台签名/命名对齐。

## 1. 前端 delta(前端优先)

- 1.2.4 命令数 **134**(1.2.3=131),**新增 3 / 删除 0**:`get_claude_web_search_compat` + `set_claude_web_search_compat`(**Claude web search 兼容开关**,maintenance 页)+ `set_codex_no_account_slots`(**无账号槽位管理**,relay 页)。
- DTO 扩容 1 条:`replace_voice_vocabulary_kind` args 增补 `source/replacement/notes` 三键(词条细粒度编辑)。
- 概念重命名贯穿前端:`virtualAuth→noAccountMode`(`usedVirtualAuth→usedNoAccountMode`、`willUseVirtualAuth→willUseNoAccountMode`、`virtualAuthActive→legacyVirtualAuthActive`、`virtualEmail` 字段删除);mock `schemaVersion` 9→12。
- 提取:beautified JS(`relay-page-pfdbI0wX.js` 4331 行 / `index-UqyngLFp.js` 43813 行 / `maintenance-page-Cfv_qYNg.js` 826 行 / `accounts-page-BJLmybXg.js`)→ `frontend-control-flow.jsonl`(134 行,中心化 Pe 合约表)+ `ast-facts.json`。
- CCF 提取口径变化(非回归):1.2.3 逐 callsite 双 trigger(248 行)→ 1.2.4 中心化合约表(134 行 1:1 对应命令);`tauri_invokes` 133→2 是抽取器切到底层桥的副产物,134 条命令完整在册,无丢失。

## 2. 后端 delta(红线19 全模块,非只命令)

用 **IDA 自己的函数枚举** diff(名↔地址一致,1.2.3 nm VA 教训已固化):

- **mac 1.2.4:116 个真实 NEW-delta App 函数**,全部 `[FULL decompile]`(无截断桩,红线13),按 4 份 6dims 落地:
  - `relay-translator-anthropic`(32 函数):`anthropic_reasoning`(7 NEW)+`anthropic_history`(5 NEW)+`translator::stream`(整体重写)+`native_responses_compat`+`models`。Anthropic relay 翻译层三段化:推理决策+历史修正+流式直转。
  - `relay-router-auth`(21 函数):`router_unlock_auth`(12 NEW)+`router_reconciler`(3)+`set_codex_no_account_slots`+`router_exit_guard_state`+`proxy_server`(3)。无账号模式+托管 key 双轨鉴权链。
  - `relay-catalog-thread-diag`(45 函数):`codex_catalog`(17)+`codex_thread_visibility`(15)+`codex_diagnostic`(11)+`codex_writer`(1)+`codex_config_reconciler`(1)。无账号模型槽路由+线程 provider 收养+诊断修复流水线。
  - `repository-platform-system`(18 函数,含跨模块邻接):`repository`+`api_client`+`models`+`sessions`+`platform::process`+`platform::single_instance`+`commands::system`+`commands::relay`。账号切换预检/复核双闸+启动快照渐进式深比+Claude web search 兼容 IPC+单实例锁+bundled CLI 路径。
- **win 1.2.4:20 个 delta 锚点函数**(strip 产物,靠命令名串/格式化闭包签名锚定),全部 `[FULL decompile]`,主体逻辑在 mac 读全。

### changelog ↔ 模块映射(6 条对账,opus 归约 + 对抗 verify)

| changelog | 前端是否改 | 模块 / 函数 | 关键行为 |
|---|---|---|---|
| **A 优化无账号登录模式,修复中转模型不显示及关闭路由后状态残留** | **是** | `router_unlock_auth`(12 NEW)+`codex_catalog`(17)+`codex_thread_visibility`(15)+`codex_diagnostic`(11)+`codex_config_reconciler`(1)+`router_reconciler`(3) | 双轨鉴权:`commit_auth_for_router` 双分支(a3=0 dry-run 只读 / a3≠0 写盘)叠加在 legacy 实 OAuth 之上;`should_use_no_account_mode` 判走托管还是实 OAuth;`verify_managed_auth_commit_boundary` 提交闸(router URL 必须 loopback http + catalog slugs HashSet 严格相等);`router_exit_guard_state` 迁移中返回 2 阻退出;`catalogSlug` 纳入槽位身份指纹(中转模型不显示修复) |
| **B 新增 Claude WebSearch 声明过滤兼容开关** | **是** | `native_responses_compat::strip_hosted_web_search_tools`+`commands::system::get_claude_web_search_compat`+`commands::relay::set_claude_web_search_compat` | 内存 `Vec::retain` 删 hosted web_search 工具(web_search/web_search_/allowed_tools),全空则 BTreeMap::remove(tools),tool_choice 若 web_search 类型连带删;读/写 RelayState `claude_web_search_compat_enabled` 标志(proxy_server +350,mutex 保护);前端 maintenance 页镜像既有 imageCompat 同构 |
| **C 优化 Anthropic relay 翻译层,支持 adaptive thinking 动态决策与 thinking signature 校验** | **否(纯后端协议层)** | `anthropic_reasoning`(7 NEW)+`anthropic_history`(5 NEW)+`translator::stream`(整体重写) | `normalize_model_name`(SIMD 小写化+`.`/`_`→`-`)前置归一化;`uses_adaptive_thinking` 9 模型名(fable-5/mythos-5/mythos-preview/sonnet-5/opus-5/opus-4-8/4-7/4-6/sonnet-4-6)判定;`effort_to_thinking_budget` codex effort→thinking budget;`rectify_invalid_thinking_signature` **删除末轮非法 thinking 块**(retain_mut 过滤 signature 校验失败的 thinking/redacted_thinking 块,非仅擦字段);stream 重写为 `close_anthropic_block` 分发器+`close_all_blocks` 迭代器+`finish_response`/`fail_with_type` 双收尾径 |
| **D 账号切换增加预检与复核双闸** | **是(progressive 回滚协同)** | `core::repository::preflight_account_switch`+`verify_account_switch` | 切换前比对 registry 目标与 live 身份,切换后复核 auth.json 与活动账号一致性,失败抛 `SWITCH_AUTH_VERIFY_FAILED`/`SWITCH_REGISTRY_VERIFY_FAILED`;前端 `switchAccountAndRestartCodex` 的 onMutate/onError 回滚链(previousProgressive)协同 |
| **E 启动快照改为渐进式深比少写** | **是** | `core::repository::store_bootstrap_snapshot_progressive` | 从「每次全量写」改成「逐字段深比(AccountSummary/AutoSwitchStatusPayload/ApiProxyConfigPayload/ApiConnectivityPayload 等),无 diff 直接 Ok 跳过」;前端 progressive 缓存(queryKey+localStorage)镜像深比语义 |
| **F 新增单实例锁与 bundled CLI 路径解析** | **否(纯后端平台层)** | `platform::single_instance`+`platform::process::codex_bundled_cli_path` | mac `flock(LOCK_EX|LOCK_NB)` / win `WakeByAddress`+`InterlockedCompareExchange8`;锁文件 `<data_dir>/dev.aimami.desktop/aimami-single-instance.lock`+写 PID;bundled CLI 路径 `<bundle>/Contents/Resources/codex` |

### ⚠ 破坏性副作用(红线20 已标,去重全编目)

**文件落盘(atomic / persist)**:
- `commit_auth_for_router`:原子写 `router-unlock-auth-marker.json` + 原子覆盖用户实 OAuth 备份(`copy_atomic_private`,**不可逆点**)。
- `write_prepared_catalog`:原子写 `codex_router_catalog.json`。
- `reconcile_inner`:重写 `config.toml`(config_takeover)+ 写/删 `codex_router_catalog.json`。
- `patch_no_account_model_restore_rollout`:写 journal 文件;`patch_session_meta_line`/`replace_session_meta_lines_with_strategy`:改 rollout 文件(带 overlap/length 校验)。
- `write_orphan_thread_adoption_recovery_file`:原子写 `thread-provider-adoptions`;`mark_orphan_thread_adoption_recovery`:写 recovery 记录。
- `store_bootstrap_snapshot_progressive`:条件性写 bootstrap 缓存(有 diff 才写)。
- `single_instance::acquire`:创建/截断锁文件 + 写 PID。

**DB(SQLite threads,事务 + ROLLBACK + archived=0 守卫)**:
- `restore_no_account_model_threads`:UPDATE threads SET model=?2 WHERE id=?1(恢复)+ 删 journal。
- `fix_orphan_thread_providers_with_catalog`:备份 DB(`databaseBackups`)→ 4 个 UPDATE 变体收养 → 失败 ROLLBACK → 写 recovery。⚠ 带 archived=0 守卫但仍是批量改 model/model_provider。
- `rollback_orphan_thread_adoption`/`with_orphan_adoption_rollback`:改 DB 回滚。

**进程 / Codex 重启(sidecar)**:
- `set_codex_no_account_slots` 后端命令**本身无 Codex 重启执行体**:只做 persist relay state + `router_transition::run` + 可选 `launch_codex_app_warning`(仅弹警告);实际重启由前端按 `relaunch` 出参触发(`_r` 在 routerEnabled && noAccountMode 时强制 relaunch=true)。⚠ 前端「保存即重启」是前端侧默认行为,非后端命令直接执行。
- `router_exit_guard_state`:迁移中返回 2 → 阻止 app 退出。
- `restore_router_enabled_stably`:transition 失败回滚 router_enabled。
- `enrich_active_account_usage_via_api`:token 状态突变 + quota_store 写。

**内存突变(非落盘但改变运行态)**:
- `strip_hosted_web_search_tools`:删内存 serde_json::Value 的 tools/tool_choice 键(只改内存不落盘,但影响后续 relay 请求)。
- `set_claude_web_search_compat`:突变 RelayState + 触发落盘。
- relay 翻译层各 `push_*_block`/`close_*`:写 messages Vec / content 数组 / event sink(请求生命周期内,请求结束即弃)。

**显式 panic(非业务路径,库内不变量违例)**:
- `contains_http_status_code`@0x10057e300:越界走 `panic_bounds_check`(本批唯一显式 panic,属库内不变量违例,非用户输入路径)。

## 3. IDB 命名(红线24,双平台)

- **mac 1.2.4**:116 NEW-delta 函数全部 `[FULL decompile]`,inline 注释 `1.2.4 NEW-delta | <module>` + 归 `codexmate_lib/...` 目录树(含新 `core/relay/anthropic_reasoning`、`core/relay/anthropic_history`、`core/relay/router_unlock_auth`、`core/relay/codex_catalog` 等子目录)+ <工具调用>。
- **win 1.2.4**(strip):20 delta 锚点函数 `[FULL decompile]` + **955 函数 dirtree 补全归入 71 目录**(对齐 mac 模块树命名)+ strip 缺失符号经 dirtree + 命令名串 + 格式化闭包签名三重锚定定位 + <工具调用>。
- 前端 CCF delta 已做完:beautified JS 的 invoke 命令链/路由/状态机抽齐为 `frontend-control-flow.jsonl`(134 行)+ `ast-facts.json`。

## 4. opus 复查结论

opus 对 6 份制品(DELTA-FINAL + 4 × 6dims + CHANGELOG-FRONTEND-ALIGNMENT + FRONTEND-CCF-DELTA)做跨文档对抗复查,结论:

- **6 条 changelog 全覆盖**:4 条有前端 UI 改动(A/B/D/E),2 条纯后端协议层/平台层(C/F),无悬空条目、无「前端改了但后端没动」或「后端改了但前端不消费」的遗漏。
- **名↔体一致**:1.2.3 的 nm VA 错位教训已固化——1.2.4 全部使用 IDA 函数枚举地址(名↔地址一致),无系统性名↔体错位。
- **零截断桩**:116 mac + 20 win 全部 `[FULL decompile]`,无 `[TRUNCATED]`/`[DECOMPILE-FAILED]` 桩参与对账。
- **敏感常量不还原**:managed_api_key 的 14 字符 key 名与 23 字节前缀 XOR 掩码常量未读出明文(AiMaMi managed key 敏感识别位);`anthropic_history::normalize_messages` 的完整 SHA-256 signature 算法未逐 round 还原(仅确认使用了 SHA-256,轮常量 0x6A09E667/0x5BE0CD19/0x9B05688C/0xA54FF53A 已实测)。
- **mac/win 行为一致性**:除 repository 同步原语(mac Rust Mutex / win `InterlockedCompareExchange8`+`WakeByAddressSingle` + win-only `PROGRESSIVE_STATE_SAVE_FAILED`/`poisoned lock` 错误路径)外,未观测到业务行为分叉。
- **1 项已知不确定性**:`router_exit_guard_state`(@mac 0x1002cae90)后端有命令注册,但 2 份前端 page 级 delta 未发现直接消费者(疑在 app 根组件/window 关闭钩子,出 page 级 delta 范围),不视为悬空。
- **mac setter 已覆盖(更正)**:`set_claude_web_search_compat` mac setter 实现体**在本批 NEW-delta 内**——`RelayManager::set_claude_web_search_compat`@0x10079bbc0(core/relay/manager/ida/pseudocode/,157 行完整 body:Mutex lock/unlock + `RelayManager::persist` + `RelayState` Clone + `GLOBAL_PANIC_COUNT` poison 检查);`set_codex_no_account_slots`@0x10079a8a0 同样在 116 delta(724 行完整 body)。@0x1005825c0 是**另一独立函数** `ClaudeWebSearchCompatPayload` serde Serialize(DTO serialize),与 setter 非同一函数;早期版本误将二者合并为"mac 仅含 DTO serialize",现据盘上 .c 核实更正。mac@0x10079bbc0 / win@0x140e01580 双平台对齐,无需补 mac 等价路径。

## 5. 教训与方法论

- **1.2.3 教训已固化**:nm VA ≠ IDA 函数起始的教训在 1.2.4 全程执行——所有地址均为 IDA 函数枚举地址(每函数唯一地址+名,ICF 已解析),非 nm VA。
- **决策/翻译与持久化解耦**:1.2.4 的 `anthropic_reasoning`/`anthropic_history`/`translator::stream` 是纯内存翻译/决策库,零直接持久化(责任上移 manager/command 层);`native_responses_compat::strip_hosted_web_search_tools` 只改内存不落盘。这是 1.2.4 的清晰边界。
- **策略与翻译解耦**:1.2.3 的 stream 是「按块类型分散收尾」,1.2.4 统一成「`close_anthropic_block` 单入口分发 + `close_all_blocks` 批量迭代 + 成功/失败双收尾径」,并把 thinking 决策抽成独立 `anthropic_reasoning` + `anthropic_history` 模块,stream 只管翻译不管策略。
- **CCF 提取口径变化识别**:`frontend-control-flow.jsonl` 248→134 行与 `tauri_invokes` 133→2 是提取器从「逐 callsite」切到「中心化 Pe 合约表」的副产物,非命令丢失;做后续 diff 应基于 `control_flow_summary.commands`(去重集合)而非 rows 行数。

## 6. 残留闭合(「没做完的必须做完」)

- ✅ **116 mac NEW-delta 全逆全**:4 份 6dims 共 116 函数全部 `[FULL decompile]`,无截断桩(红线13)。mac 0 残留 TRUNCATED。
- ✅ **win 20 delta 锚点全逆全**:strip 产物靠命令名串/格式化闭包签名锚定,20 锚点全部 `[FULL decompile]`,主体逻辑在 mac 读全。
- ✅ **win dirtree 补全**:955 函数按 mac 模块树归入 71 目录(对齐命名),strip 缺失符号经三重锚定定位。
- ✅ **前端 CCF delta 已做完**:134 条命令完整在 `frontend-control-flow.jsonl` 合约表与 `control_flow_summary.commands` 中;3 新命令完整链路(trigger→handler→mutation→wrapper→invoke)全部找到。
- ✅ **6 条 changelog 对账闭合**:4 条前端有 UI 改动 + 2 条纯后端,无悬空条目。
- ✅ **mac setter 已覆盖(更正)**:`set_claude_web_search_compat` mac setter 实现体**在本批 delta**——@0x10079bbc0 完整 body 已落盘(Mutex lock/unlock + persist + RelayState Clone + poison 检查,157 行)。@0x1005825c0 是独立 `ClaudeWebSearchCompatPayload` serde Serialize 函数(DTO),非 setter 本体;早期误并,现据盘上 .c 更正。mac@0x10079bbc0 / win@0x140e01580 双平台对齐。
- ⚠ **`router_exit_guard_state` 前端消费者未定位(已知)**:疑在 app 根组件退出钩子,出 page 级 delta 范围,不视为悬空。
- same-set(未变函数)按迁移规约直接沿用 1.2.3,不重逆。
