# AiMaMi 1.2.3 版本 delta 逆向终稿(mac 1.2.2→1.2.3 / win 1.2.1→1.2.3)

> 生产者:mini 本机。双 IDA 已加载 1.2.3(mac IDA decompiler✓ / win IDA decompiler✓)。全 sonnet worker + Workflow 并行 + orchestrator 持授权亲逆 IDA。

## 1. 前端 delta(前端优先)

- 1.2.3 命令数 **131**(1.2.2=129),**新增 2 / 删除 0**:`get_autostart_state` + `set_autostart_enabled`(**开机自启**,changelog 未记录,前端优先抓出)。
- 提取:`lipo -thin arm64` → tauri-frontend-pipeline → `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl`。

## 2. 后端 delta(红线19 全模块,非只命令)

changelog 三项全是**行为后端变更**(非新命令)。用 **IDA 自己的函数枚举** diff(名↔地址一致,而非 nm VA——见 §5 教训):

- mac 真 App 函数:1.2.2 **1267** → 1.2.3 **1638**,**216 个真实新 App 函数**。
- 216 全部按正确 IDA 地址 decompile(216 落盘 / 11 截断已标 / 0 失败)+ inline 注释 `1.2.3 NEW-delta | <module>` + idb_save。

### changelog ↔ 模块映射(Workflow sonnet 分析 + 对抗 verify)

| changelog | 模块 / 函数 | 关键行为 |
|---|---|---|
| **①自动处理 ChatGPT/Codex 进程占用** | `platform::process`(13) | 三层:分类(`classify_macos_codex_writer`/`is_openai_ide_extension_writer_path` 归类 ChatGPT.app/IDE 插件/外部写入者)→ 枚举(`collect_codex_kill_targets`/`collect_external_codex_writers` 跑 `ps -ax`/`protected_codex_db_holders` 保护 DB 占用者不误杀)→ 编排(`CodexProcessLifecycle::prepare_transition` **osascript 向 com.openai 发 AppleScript 退 ChatGPT**;`kill_codex_processes_until_clear`) |
| **①账号切换稳定性** | `core::repository`(29)+`commands::accounts`(24)+`account_coordination`(9) | auto-switch 状态机(pending 确认/清理/轮换候选/守护 `dev.aimami.auto-switch` 装卸)+ 切换回滚(`restore_switch_rollback_state` 还原 auth.json/registry.json)+ 快照隔离(`SnapshotQuarantine::stage` 移前搬隔离区)+ `acquire_snapshot_locks` 协调锁 |
| **②新旧客户端兼容 + 修复无法关闭路由** | `core::relay::codex_writer`+`invariants`(RouterConfigSurface) | **`strip_invalid_router_top_level_model`**:扫 config.toml 顶层,识别并**剥离引用失效 provider 的 `model`/`model_provider` 指令 + 清理孤儿 `aimami_relay_*` 键**——旧版切换/关闭中转后 config 残留旧中转生成的 model id 导致下次又被路由回中转,这是「无法关闭路由」的根因;`render_bottom_block`/`render_router_top_block` 生成 `# >>> aimami-relay managed` 注入块;`commands::relay::quit_keeping_router`(⚠`AppHandle::exit(0)` 退应用留路由) |
| **③中转模型协议 + 推理层级适配** | `codex_thread_visibility`(15)+`codex_diagnostic`(6)+`translator`+`proxy_server`+`storage`+`codex_catalog` | 改写 Codex rollout 会话文件首条 `session_meta`(`patch_model_fallback_rollout` 同步 `model_provider`+`model_reasoning_effort`;`base_instructions` 补丁与 `guardian_poisoned`/`thread_poisoned` 一致性诊断)+ translator 消息格式转换(OpenAI↔Anthropic / Kimi coding `prompt_cache_key` 注入 / `<think>` 推理前缀剥离)+ storage MiniMax M3 官方协议迁移 + catalog 官方推理模型(gpt-5.6 系)查找 |
| **autostart(新,未记录)** | `commands::autostart`(6) | `get/set_autostart_state`(包 tauri-plugin-autostart)+ `apply_default_autostart_on_router_enable`(路由/中转首次启用时默认打开开机自启) |
| **account-token(未记录,量最大)** | `core::oauth_refresh`(10)+`account_metadata`(7,新)+`account_io`(9)+`auth`+`bootstrap_cache` | token 刷新前判 auth 新旧(`auth_is_newer` 比 JWT exp)+ 检测外部进程写 auth(`external_codex_writer_is_present`)+ 仅变化才落盘(`write_auth_if_changed`)+ 拉取解析 ChatGPT 订阅元数据(`fetch_subscription_metadata`/`infer_active_subscription`) |

### ⚠ 破坏性副作用(红线20 已标)

- `platform::process::CodexProcessLifecycle::prepare_transition` — **osascript AppleScript 退 ChatGPT**;`single_instance::acquire` — `File::set_len(0)` 截断单实例锁文件。
- `core::repository` — `clear_pending_auto_switch_*`(remove_file)、`update_auto_switch_config`(install/uninstall_daemon)、`ExactFileState::restore`(快照原为"文件不存在"时 remove_file 还原)、`SnapshotQuarantine::stage`。
- `commands::relay::quit_keeping_router` — `AppHandle::exit(0)`。
- `oauth_refresh::write_auth_if_changed`(atomic_write 覆写)、`account_io::failure_after_snapshot_write`(回滚删新建快照)、`bootstrap_cache::update`(fs::write 覆写)。
- `codex_thread_visibility::checkpoint_after_committed_write` — SQLite `PRAGMA wal_checkpoint(TRUNCATE)`(常规 WAL 维护,非数据破坏)。

## 3. IDB 命名(红线24,双平台)

- **mac 1.2.3**:57 规范模块 → **1638 App 函数归入 94 目录**(含新 `commands/autostart`)+ 216 delta inline 注释 + idb_save ok。
- **win 1.2.3**(strip):panic-Location + 严格传播 **938 函数归属 / 67 模块** + **115/131 命令 handler 精确命名** + idb_save ok。

## 4. Workflow 对抗 verify

6 sonnet 分析 + 6 sonnet 对抗 verify(读盘 .c 核断言)。1 模块 clean,5 模块细粒度 issues(behavior 描述精度修正,如 `write_auth_if_changed` 落盘条件、`classify_macos_codex_writer` 文件名判定细节、`is_usable_account` 状态串比对目标)——均为字级精度修正,**非第一轮的系统性名↔体错位**。11 个截断函数只按签名给外部推断,未臆断截断段(红线20)。

## 5. 教训:nm VA ≠ IDA 函数起始(对抗 verify 抓出并修复)

第一轮用 `nm` 符号 VA 当 decompile 地址,但 nm VA 有偏移/含被内联的局部符号 → `decompile{nmVA}` 逆的是相邻/包含函数,**大量 .c 名↔体错位**(如某地址逆出整个 `run()` 主入口)。Workflow 对抗 verify(红线20)独立抓出。**修复:改用 IDA 自己的函数枚举**(每函数唯一地址+名,ICF 已解析),重算 216 delta + 重逆 + 重注释,抽验 `strip_invalid_router_top_level_model` 名↔体已一致。教训入记忆。

## 6. 残留闭合(「没做完的必须做完」)

- ✅ **11 超大截断函数全逆全**:MCP decompile 有响应上限截成桩;改用 IDA Python 直调 `IDA decompiler.decompile` + 7KB 分页取回完整伪代码(40-92KB 各),覆盖截断桩(红线13 不许以体积 bail)。mac 0 残留 TRUNCATED / 11 标 `[FULL IDA decompiler]`。
- ✅ **win 符号级 delta 已补**:win strip 无 nm,靠 panic 路径 + 行为锚点串定位并逆全 **15 个 win delta 锚点函数**(2 autostart 命令 owner + 4 新模块 anchor + session_meta 改写 3 + `aimami_relay_` 清理 3〔②关闭路由修复核心〕 + reasoning 1 + router_model_restore 3),证据落 `windows-x64/version-delta/ida/pseudocode/`,win IDB 15 注释 + idb_save。win src 路径 diff 证实 4 个新 .rs(autostart/account_coordination/account_io/relay/invariants)。
- win 命令命名 16 个合池/歧义未精确命名(需 mac 符号)——strip 物理上限,非漏逆。
- same-set(未变函数)按迁移规约直接沿用 1.2.2,不重逆。
