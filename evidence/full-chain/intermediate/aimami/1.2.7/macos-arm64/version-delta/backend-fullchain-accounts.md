# backend-fullchain-accounts.md — AiMaMi 1.2.7 账号模块深 diff（切换修复/添加账号/重置卡/到期高亮）

- session: `<审计会话>`（macos-arm64，接续盘点轮 <审计会话>）
- 二进制: 1.2.7 mac fat sha256 `ac235ae0…` / arm64 thin `1ac56cdd…`（SOT `raw/binary/AiMaMi 1.2.7.app/`）；基线 1.2.6 `e6e7cba4…`
- 证据: `intermediate/aimami/1.2.7/macos-arm64/version-delta/decomp-1.2.7/`（本轮 263 函数 IDA 全量提取，含伪代码+callee 集合+bb）；红线32 体级比对见 `backend-symbol-body-diff.json`
- 口径: dim2=owner+pseudocode；dim3=call-tree 到实现叶；dim4=DTO/error/side-effect；dim5=平台门（win 本轮 census 级，见 win-backend-delta-notes.md）；dim6 留白（C5 实现侧）。voice 面不分析。

---

## 1. 修复账号卡片切换账号失败（switch 面重写）

### 1.1 `commands::accounts::capture_switch_rollback_state`（改名同名面：bb 216→462，sz 4309→8632）

- **dim2 owner**: `codexmate_lib::commands::accounts::capture_switch_rollback_state`，EA `0x100439140`，live bb=462。伪代码 `decomp-1.2.7/0000__A_accounts__capture_switch_rollback_state.c`（36686 字符，无截断）。
- **行为**: `tauri::state::StateManager::try_get` 取全局切换状态单例（OnceBox + Mutex，poisoned unwrap 文案 "poisoned lock: another task failed inside"）→ 在锁内把切换前状态结构体约 30 个 String 字段逐个 alloc+memcpy 快照 → 依次 5 次调用 `commands::accounts::FileRestoreState::capture`（对每个受影响文件路径读内容并打包成可回滚快照）→ 组装返回结构（尾部 Option 字段 None 结尾，共约 27 个 qword 的 rollback snapshot）。
- **dim3 call-tree**: capture_switch_rollback_state → StateManager::try_get（tauri state）→ Mutex lock/unlock → ×N 字符串拷贝 → FileRestoreState::capture（文件读取叶，fs read）。实现叶=fs read + 进程内状态。
- **dim4**: 无 IPC 入参（内部 helper）；输出 rollback snapshot 结构（多字段 Option）。**错误路径**: Mutex poisoned → panic unwrap；单文件 capture 失败走 Err 分支（由调用方映射 `SWITCH_ROLLBACK_CAPTURE_FAILED`，见 1.2）。
- **红线32**: bb 216→462（2.14x）、sz 2.0x——判 **CHANGED**。1.2.7 快照字段数与 capture 调用次数显著增多（约 30 个字符串拷贝 + 5 次 FileRestoreState::capture；1.2.6 侧 216bb 对应更少字段）。1.2.6 侧 callee 集合 PENDING（1.2.6 IDB 不可达，见 body-diff method.limitation）。
- **判读（修复机理）**: 回滚快照覆盖面扩大 = 切换失败时能还原更多状态 → 对应「切换失败修复」。

### 1.2 `commands::accounts::perform_switch_payload_with_restart`（改名；bb=124，47 callees）

- **dim2**: `decomp-1.2.7/0001__…perform_switch_payload.c`。切换主状态机字面量：`status=pending` → `quiet_acquired` → `status=ready` → `disk_committed`；失败态 `quiet_acquire_failed`；错误码 **`SWITCH_ROLLBACK_CAPTURE_FAILED`**（capture 失败即中止切换）。
- **dim3**: perform_switch_payload_with_restart → capture_switch_rollback_state（1.1）→ CodexMutationGate/Repository 写（1.2.6 既有链，1.2.7 沿用）→ 进程重启面（restart）。
- **dim4**: 状态机各阶段字符串即前端可回读的 progress 状态；error envelope 用 CoreEnvelope（1.2.6 既有 DTO）。
- 判读: 与 1.2.6 相比新增强制顺序——先拿回滚快照（capture 失败 → 不进 quiet acquire），修复「切换失败后状态半套」。

### 1.3 `commands::accounts::finish_switch_failure_with_client`（**1.2.7 新增**；sz 9891，bb=352，59 callees）

- **dim2**: `decomp-1.2.7/0002__…finish_switch_failure.c`。切换失败收尾 + 客户端联动回滚，关键校验字面量：
  - `Restored auth.json does not match the selected credential generation`（回滚后校验 auth.json 与凭据代次一致）
  - `auth.json still exists after rollback`（回滚后残留检测）
  - `Registry active account does not match the rollback target`（registry 活动账号与回滚目标一致性校验）
  - `snapshots`、`account state.oauth-refresh.lock`（文件锁）、`runtime_refresh_warning` / `runtime_refresh_failed`（回滚后用量刷新告警）
- **dim3**: finish_switch_failure_with_client → FileRestoreState restore（fs write 叶）→ auth.json 比对（fs read + 解析）→ repository registry 校验 → runtime refresh 通知。
- **dim4**: 副作用=回滚写 auth.json/registry；三条硬校验任一失败即报错（对应上面字面量）；附带 runtime_refresh 警告通道。
- 判读: 1.2.6 无此函数——「切换失败后的回滚+验证」是 1.2.7 新增修复面，把静默半成品失败改为带验证的完整回滚。

### 1.4 `commands::account_transition::verify_after_launch`（+3 fns；bb=70 / 闭包 bb=—）

- 字面量 **`SWITCH_LIVE_VERIFY_FAILED`**：切换重启后对活体账号做校验，失败映射该错误码。dim3: verify_after_launch → 进程启动后探测（app-server/codex 进程面）→ repository 状态确认。
- 判读: 1.2.6 有 verify_after_launch 面但 1.2.7 +3 个函数、新增 live-verify 错误码 = 启动后校验增强。

## 2. 修复账号管理模块添加账号功能

### 2.1 `core::repository::account_alias::{impl Repository} set_account_alias`（**新增命令面** `set_account_alias`；bb=91，28 callees）

- 字面量：`Invalid account remark`（入参校验）、`account state.oauth-refresh.lock`（与 oauth 刷新互斥的文件锁）、`Account is no longer available`。
- dim3: set_account_alias → Repository 写（sqlite/状态存储叶）→ 文件锁。dim4: 入参 account id + remark；错误=校验失败/账号不存在/锁冲突。
- win: `commands/account_alias.rs` 新 src 路径确认（win-src-path-diff.json）。

### 2.2 `commands::account_oauth::persist_oauth_account`（+2 fns；bb=112，36 callees）

- 字面量：`OAUTH_COMMIT_NOT_STARTED: active account could not be saved`、`OAUTH_CLIENT_UPDATE_DEFERRED`、`CLIENT_RESTART_DEFERR…`、`account_oauth disk_committed`。
- dim3/4: persist_oauth_account → repository 账号写入（disk_committed 阶段上报）→ OAuth 客户端更新在未提交时延迟（DEFERRED 路径）→ 客户端重启推迟。
- 判读: 添加账号（OAuth）提交链 1.2.7 新增 commit 未启动保护与延迟重启分支 = 「添加账号修复」。

## 3. 账号卡片重置卡显示和提醒（全新子系统）

命令: `get_account_reset_credits` / `get_account_reset_credit_history`（前端 ipc 新增，双平台）。

| 层 | owner | 要点 |
|---|---|---|
| commands | `commands::account_reset_credits::request_context`（新 commands 文件） | 入口上下文装配；错误 `Account state is busy` |
| core | `core::account_reset_credits::{fetch_json, fetch_credits, fetch_history, validate_cursor}` | fetch_json（19 callees，`cursor` 参数；UA/详情串 `reset-credit details`）；fetch_credits（`status` 字段）；fetch_history（bb=60，响应字段 `events` / `next_cursor` / `occurred_at` / `kind`）；validate_cursor → `Invalid reset credit history cursor` |
| repository | `core::repository::account_reset_credits::{impl Repository} reset_credit_context`（bb=42）+ `matching_auth` | `Account is no longer available`；`Reset card credentials are unreadable`；`Reset card account identity does not match`；`Reset card details require ChatGPT login credentials`（前置=ChatGPT 登录凭据） |
| serde | 4 个 Serialize impl（payload 四件套） | `events`/`next_cursor` 分页 DTO |

- **dim3 实现叶**: HTTP（fetch_json → api_client，`api_client/parse_available_reset_credits` 新增解析）+ 本地凭据匹配（matching_auth）+ repository 读。
- **dim4**: history 分页协议 cursor→next_cursor；错误面 6 条（上表字面量）；副作用=只读（无本地写）。校验链：ChatGPT 凭据存在 → 凭据可读 → 账号身份匹配 → 请求。
- **红线13 注记**: 该子系统身份判定有内容级证据（错误字面量+字段名+HTTP 面），非结构推断。

## 4. 账号到期高亮提醒（观察者 + 用量刷新）

### 4.1 `commands::account_observer::{run, start}`（新）+ `core::account_observation`（新模块 8 fns）

- `start`（19 callees）：spawn 常驻线程 `aimami-account-observer`（`failed to spawn thread` 错误面）。
- `run`（bb=128）：轮询循环；观测状态字面量 `authinfo` / `Utf8Json` / `invalid_json` / `invalid_auth` / `sync_failed`；`Account repository lock is poisoned`。
- `core::account_observation::AuthObservation::read`（21 callees）守卫链：`Auth observation requires a regular file` → `Auth observation exceeds size limit` → `Auth observation has no recognized authentication mode` → `Auth observation has incomplete OAuth credentials`；闭包：`Auth observation is not valid JSON` / `Auth observation has no valid account identity`。
- `AuthFileStamp::read`（`bounded regular file`）：mtime/size 戳；`AuthObservation::still_current`（戳未变→跳过）；`AuthObservationTracker::{poll, applied}`。
- repository 侧 `account_observation::{impl Repository} try_sync_auth_observation…`（bb=99）：经 `account state.oauth-refresh.lock` 文件锁同步观测结果。
- **dim3 实现叶**: fs read（auth.json）+ 文件戳 + repository 写 + 线程。**dim4**: 观测结构含账号身份/auth 模式/JSON 合法性/戳；副作用=repository 观测状态写；错误面=上述守卫链。到期高亮的数据源即该观测 + 用量刷新。

### 4.2 用量刷新 watcher（`get/set_usage_refresh_all_accounts` 新命令 + interval 族）

- commands::system: `set_usage_refresh_interval` / `get_usage_refresh_interval` / `set_usage_refresh_all_accounts` / `get_usage_refresh_all_accounts` / `start_usage_refresh_watcher`（spawn 线程，`failed to spawn thread`）/ `update_usage_refresh_schedule` / `note_usage_refresh_activity`。
- core::repository: `normalize_usage_refresh_interval`（默认 `5m`；特殊值 `usage_401_retry`=401 退避触发刷新）、`usage_refresh_interval_seconds`、`Repository::{get,set}_usage_refresh_interval`。
- dim4: all_accounts 开关 + interval 持久化（repository 写叶）；watcher 线程按 schedule 触发全账号用量刷新（喂给到期/超额高亮）。

## 5. 平台门（dim5）

- mac: 本文件全部为 mac arm64 live IDA 证据（EA/伪代码/callee）。
- win: 1.2.7 win IDB auto-analysis 已完成；win 侧深命名恢复（红线24 三层）未在本轮执行。win 侧事实（census 级，盘点轮）：`commands/{account_alias,account_observer,account_reset_credits,sessions}.rs` 新 src 路径存在；20 条新命令 18 条 win strings 命中。win 深比对=下轮，mac 结论不外推 win（红线8/28）。

## 6. 未闭合/Unknown

- 1.2.6 侧函数体级逐行 diff（伪代码级对照）未做（1.2.6 IDB 不可达）；结论锚定 bb/size/callee/字面量证据。
- `load_runtime_display_snapshot`：mac 双版本 census 零符号命中（见 migration-matrix.json open_items）——专属 owner 未定位前消费侧不得实现。
- rollback snapshot 的 30 个字段名（结构体布局）未逐字段命名（IDA 无类型信息），语义为「切换前可回滚状态集」；消费侧如需字段级契约须补 DTO 逆向。
