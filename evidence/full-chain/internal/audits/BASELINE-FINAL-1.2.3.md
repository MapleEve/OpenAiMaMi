# AiMaMi 1.2.3 完整基线逆向终稿(独立完整基线,非 delta)

> 用户要求:1.2.3 做**独立完整基线**——所有后端函数真 decompile(不靠"沿用 1.2.2"迁移假设)+ 所有前端页真逆(不用命令 diff 糊弄)。本文件是完整基线交付,delta 视图见 `COVERAGE-FINAL-1.2.3.md`。

## 1. 后端完整基线(mac,1638 全 App 函数)

### 覆盖(grounded)
- **1638 全 App 函数 decompile**:1422 baseline same-set + 216 delta(88 超大体用 <工具调用>+<反编译器> 分页全解,红线13;1 IDA 失败)。名↔地址一致(IDA 函数枚举地址,非 nm VA)。
- **1638 全 IDB 注释**:1422 标 `baseline same-set` + 216 标 `1.2.3 NEW-delta` + 归 `codexmate_lib/...` 目录树(94 目录)+ <工具调用>。复验 216+1422=1638。
- **9 组模块覆盖分析**(sonnet workflow,读全部 .c 出模块职责+关键函数+破坏副作用),文档在 `backend-baseline/*.md`(17-24KB 各):

| 组 | 文件 | 覆盖模块 |
|---|---|---|
| relay-routing | 189 | manager(RelayManager 中枢)/proxy_server(本地 axum 代理)/router_transition+reconciler(开关状态机)/router_unlock_auth(虚拟鉴权)/config_takeover(config.toml 标记块接管归还)/transition_journal/health_check |
| relay-translator | 192 | translator(Anthropic↔OpenAI Chat↔Responses 双向转换,98K 行)/stream(4 个 SSE 流状态机)/models/codex_catalog/image_compat(视觉模型剥图)/quota(多 provider 余额)/storage(原子写+MiniMax M3 迁移)/atomic_write/keychain(三级密钥)/dialects(reasoning 注入) |
| relay-codex | 203 | codex_diagnostic(线程污染诊断自愈)/codex_thread_visibility(rollout session_meta 改写)/codex_writer(config 注入块+剥离孤儿 aimami_relay_)/codex_project_state/invariants/managed_blocks/fetch_models/legacy_virtual_auth |
| models-repository | 296 | core/models(DTO serde)/repository(账号用量订阅刷新流水线+auto-switch 状态机+快照隔离回滚)/plan_mapping/quota_store/api_client |
| account-auth | 120 | oauth_refresh(token 刷新策略/JWT)/oauth_login/account_metadata(订阅元数据)/account_io/account_coordination(快照锁)/auth/bootstrap_cache/sessions/session_analytics |
| voice | 182 | voice/runtime(sidecar 生命周期+kill-9 兜底)/workspace/llm/aliyun_asr(WS)/asr + commands/voice + platform/voice_trigger_macos/text_injection |
| run-app-misc | 155 | run(App 主入口/setup)/toplevel(退出守护)/debug_bundle/analytics/mcp/skills(remove_dir_all 增删) |
| commands | 145 | accounts(切换重启+回滚)/system(force_kill_codex)/relay/hotspot/tray_menu/autostart(新)/account_oauth/mcp/sessions/skills/maintenance/deeplink |
| platform | 85 | process(osascript 退 ChatGPT+force kill+保护 DB 占用者)/paths/debug_log/daemon(launchd 装卸)/single_instance/system_volume/proxy(PAC 探测) |

### ⚠ 破坏性副作用全编目(62 处,红线20)
- **进程**:`platform::CodexProcessLifecycle::prepare_transition`(osascript 退 ChatGPT→超时强杀链)、`kill_codex_processes_until_clear`/`force_kill_targets`(kill)、`voice::runtime::terminate_voice_sidecar`/`cleanup_stale_sidecars`(kill -9)、`commands::system::force_kill_codex`、`quit_keeping_router`/tray 退出(exit)。
- **删除**:`repository::remove_accounts`/`SnapshotQuarantine::commit_and_purge`(remove_dir_all 不可逆)、`skills::remove_skill`/`delete_skill_backup`(remove_dir_all,删前多已备份)、`sessions::delete_sessions`、`keychain::delete_api_key`(文件+macOS Keychain)、`config_takeover`/`transition_journal`/`router_unlock_auth` remove_file(均自建中间态,有备份/存在性兜底)。
- **系统**:`daemon install/uninstall`(launchd plist)、`autostart::set_autostart_enabled`(登录项)、`single_instance::acquire`(set_len(0) 截断锁)、`harden_private_tree`(chmod)、`system_volume`(改系统音量)、`CodexPaths::from_home`(rename 迁移)。
- 结论:无对用户真实 auth.json/config.toml 的无条件裸删;config.toml 是覆盖写+备份;账号删除走隔离区+回滚保护。

## 2. 前端完整基线(6 页逆向文档,`frontend/pages/*.md` 19-24KB 各)

31 chunk 全 beautify;9 页面级 + 共享 chunk 逐页逆(组件树/状态模型/交互→invoke命令/对话框流程):

| 页 | 组件 | useState | useMutation | 关键 invoke 命令 |
|---|---|---|---|---|
| **RelayModelPage** | 21 | 34 | 10 | upsert/activate/deactivate/delete/reorder_relay_provider、set_codex_router_enabled、set_codex_router_no_account_mode、test_relay_draft_stream(Tauri Channel 流式)、reveal_relay_api_key、diagnose_codex_router、export/import_relay_config |
| **AccountsPage** | 14 | 43(+13 useRef) | 8 | switch_account_and_restart_codex、remove_accounts、set_auto_switch、configure_auto_switch、preview/import/export_accounts、refresh_single_account_usage、begin/cancel_chatgpt_oauth_login、set_hotspot_enabled |
| **VoicePage** | — | 21+ | — | load/update_voice_runtime_settings、capture/set_voice_trigger_key、set_voice_trigger_bindings、set_voice_processing_mode_id、save/test_voice_asr/llm_config、resolve_voice_vocabulary_app_info |
| mcp+sessions+settings+skills | — | — | — | (mcp server CRUD / sessions 删除迁移 / settings / skills 导入备份) |
| analytics+maintenance+autoswitch | — | — | — | (用量分析 / 维护 / auto-switch 阈值配置) |
| shared-index-app | — | — | — | App 壳/路由/共享 hook |

关键交互时序真逆:CodexRouter 开关=先 `get_codex_router_auth_readiness` 判虚拟邮箱鉴权→二次确认弹窗(含 5 段实时进度 `listen('codex-router-toggle-progress')`)→`set_codex_router_enabled`→成功直调 `diagnose_codex_router` 核 config.toml 真写入;切换账号=确认→`switch_account_and_restart_codex`→按 CLIENT_RESTART_FAILED/DEFERRED 分流 toast。

对抗 verify:后端 relay-routing/translator 全 0 截断;前端 3 页 clean / 3 页细粒度 issues(agent 想补几条交互,非系统错位)。

## 3. 与 delta 的区别
- delta(`COVERAGE-FINAL-1.2.3.md`)= 只逆相对 1.2.2 新增 216。
- **本基线** = 1638 全后端 + 6 页全前端独立完整逆向,不依赖 1.2.2 迁移假设,不用命令 diff 代替前端。
