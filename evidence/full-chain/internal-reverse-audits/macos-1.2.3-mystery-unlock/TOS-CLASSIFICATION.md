# ToS Classification — mystery-unlock cluster (AiMaMi 1.2.3 macOS arm64)

本文件对读到的每个函数/命令做 `normal_feature` / `tos_circumvention` 二分类，并写清依据。**对 `tos_circumvention` 项只写"是什么、为什么 SKIP"，不写字段级序列化步骤、不写可直接照抄的构造算法**——这是本文件与 README/logic 类文档的关键区别。

---

## 分类标准

- `normal_feature`：功能与规避第三方服务条款（ToS）无关——本地配置、UI 状态、纯本机数据的读写/过期清理，不涉及冒充官方客户端、不涉及伪造/挪用第三方账号凭据、不涉及绕过 provider 侧鉴权或订阅门槛。
- `tos_circumvention`：功能的目的或必要组成部分是让本地或远端把"未经真实授权的状态"当作"已授权"接受——包括但不限于：冒充官方客户端指纹/协议、把某个人的订阅当成不受限 API 使用、绕过 provider 鉴权检查、伪造/虚拟他方（此处是 OpenAI/ChatGPT）账号凭据结构以骗过依赖该凭据判断登录态的逻辑。

---

## 结论表

### 集群 A — `router_unlock_auth` / `legacy_virtual_auth` / `is_aimami_managed_virtual_auth` / `codex_diagnostic` residue check-fix

| 符号 | 分类 | 依据 |
|---|---|---|
| `core::relay::router_unlock_auth::install_virtual_unlock_auth` | **tos_circumvention** | 在本地没有真实可用 ChatGPT OAuth 会话时，向 Codex 原生登录态读取的凭据文件路径写入一份**结构上冒充真实 OpenAI/ChatGPT OAuth 会话**的 JSON（固定虚构身份，含 `chatgpt_account_id`/`chatgpt_plan_type`/`access_token`/`refresh_token` 等与真实客户端一致的字段名，token 为自制未签名 JWT）。这是典型的"伪造第三方账号凭据以让依赖该凭据判断登录态的逻辑通过"。**SKIP，不实现。** |
| `core::relay::router_unlock_auth::build_unlock_auth_json` | **tos_circumvention** | 是 `install_virtual_unlock_auth` 的 JSON 构造子过程，产出即上条所述伪造凭据结构。属同一行为不可分割部分。**SKIP。** |
| `core::relay::router_unlock_auth::make_unsigned_jwt` | **tos_circumvention** | 生成假冒 JWT（无签名）用作伪造凭据里的 access/refresh token。**SKIP。** |
| `core::relay::router_unlock_auth::ensure_auth_for_router` | **tos_circumvention** | 决策函数：加载真实 `auth.json`，若不是可用真实 OAuth，则调用 `install_virtual_unlock_auth` 伪造；若是真实的，则只做伪造痕迹清理。此函数是伪造链路的调度中枢。**SKIP。** |
| `core::relay::router_unlock_auth::prepare_auth_for_router` | **tos_circumvention** | 更上层调度：决定走"清理旧残留"、"强制安装伪造凭据"还是"委托 `ensure_auth_for_router`"。**SKIP。** |
| `core::relay::router_unlock_auth::restore_real_auth_for_router` | **tos_circumvention** | 伪造凭据生命周期的另一半：把此前备份的真实 `auth.json` 写回、清理伪造 marker。脱离伪造链路本身无独立意义。**SKIP。** |
| `core::relay::router_unlock_auth::cleanup` 及其 4 个闭包、`cleanup_for_native_off` | **tos_circumvention** | 清理伪造凭据文件 + marker + 备份，围绕伪造机制的状态机转换。**SKIP。** |
| `core::relay::router_unlock_auth::has_residue` / `marker_exists` / `live_auth_state` / `readiness` / `read_marker` / `read_cleanup_backup` / `remove_file_if_exists` / `serialize`（RouterUnlockAuthReadiness） | **tos_circumvention** | 伪造凭据状态的查询/标记读写/对前端的状态上报（readiness/serialize）。这些是纯粹为管理"当前是否处于伪造登录态"而存在的辅助函数，没有脱离伪造机制的独立价值。**SKIP。** |
| `core::relay::router_unlock_auth::auth_is_usable_real_oauth` / `backup_contains_usable_real_oauth` / `validate_user_owned_auth_backup` / `verify_real_auth_restore_ready` | **tos_circumvention** | 判断"当前/备份里是否存在一个真实可用的 ChatGPT OAuth"，这个判断结果唯一的用途是决定要不要伪造/要不要恢复真实凭据。判断逻辑本身不含伪造字节，但其存在意义完全依附于伪造机制，孤立实现它对 Polaris 没有非 ToS-circumvention 的用途。**SKIP（依附判定）。** |
| `core::relay::legacy_virtual_auth::*`（`read_user_owned_backup`、`cleanup`×3、`remove_file_if_exists`、`read_marker`、`restorable_backup_auth`、`marker_exists`） | **tos_circumvention** | 同一伪造凭据机制的**旧代实现**（marker 文件名不同：`virtual-auth-marker.json` vs 新代 `router-unlock-auth-marker.json`；字符串证据里出现 `OPENAI_API_KEY`/`tokens`），当前版本里仅剩迁移期清理/恢复真实用户凭据的收尾用途，但其存在前提仍是"曾经伪造过 OpenAI 凭据"。**SKIP，与新代同一判定。** |
| `core::auth::is_aimami_managed_virtual_auth` | **tos_circumvention** | 检测一份 `auth.json` 是否为 AiMaMi 自己伪造写入的虚拟凭据（识别 `chatgpt_account_user_id`/`chatgpt_user_id`/`chatgpt_plan_type`/`chatgpt_subscription_active_until` 等伪造字段签名，内含字符串 "auth.json contains AiMaMi managed virtual auth; not a real account"）。这是伪造机制的配套识别器，无伪造机制则此函数无意义。**SKIP。** |
| `core::relay::codex_diagnostic::check_router_unlock_auth_residue` | **tos_circumvention** | Codex 诊断引擎里的一个检查项（诊断 ID `router_unlock_auth_residue`），检测"伪造凭据/marker 是否因异常退出而卡在残留状态"。该检查项本身不新增伪造能力，但只服务于伪造机制的健康检查，脱离伪造机制无独立意义。**SKIP（依附判定，不单独实现该诊断项）。** |
| `core::relay::codex_diagnostic::fix_router_unlock_auth_residue` | **tos_circumvention** | 对应修复动作：清理卡住的伪造凭据残留、按需恢复真实凭据。同上判定。**SKIP。** |

### 集群 B — `mystery_unlock_grants`

| 符号 | 分类 | 依据 |
|---|---|---|
| `commands::system::get_mystery_unlock_grants` | **normal_feature** | Tauri command 包装层，转调 repository 层，纯本地读取，无网络调用、无第三方凭据。 |
| `commands::system::merge_mystery_unlock_grants` | **normal_feature** | 同上，写入合并路径。 |
| `core::repository::Repository::get_mystery_unlock_grants` | **normal_feature** | 从本地设置读取一份 grant 列表，用当前时间（毫秒）过滤过期项，变化则回写精简列表。这是一个本地"隐藏功能解锁授权"（灰度权益/彩蛋）的过期清理机制，不涉及任何第三方账号、订阅或 provider 鉴权。交叉核对 `backend-baseline/models-repository-baseline.md:81` 既有记录一致。 |
| `core::repository::Repository::merge_mystery_unlock_grants` | **normal_feature** | 同上，合并/写入路径。 |
| （关联但本轮未重读）`core::repository::Repository::mystery_route_allowed` | **normal_feature**（沿用 baseline 既有判定，未重新逆向） | 路由名白名单校验，只认 App 内已知功能区名字（`mcp`/`skills`/`overview`/`accounts`/`sessions`/`settings`/`maintenance`/`subscription`），用于限定"隐藏解锁"只能作用于产品自己的功能区开关，不是鉴权绕过。 |

**为什么集群 A 和集群 B 判定不同**：两者共享"unlock"这个词面，但集群 A 的"解锁"对象是**第三方（OpenAI）的账号登录态**，手段是伪造凭据结构；集群 B 的"解锁"对象是**产品自己的本地功能开关**，手段是读一个本地列表做时间过滤。判定必须按行为对象和手段区分，不能因命名相似合并。

---

## SKIP 项清单（供 manifest/gate-report 引用）

```
codexmate_lib::core::relay::router_unlock_auth::install_virtual_unlock_auth
codexmate_lib::core::relay::router_unlock_auth::build_unlock_auth_json
codexmate_lib::core::relay::router_unlock_auth::make_unsigned_jwt
codexmate_lib::core::relay::router_unlock_auth::ensure_auth_for_router
codexmate_lib::core::relay::router_unlock_auth::prepare_auth_for_router
codexmate_lib::core::relay::router_unlock_auth::restore_real_auth_for_router
codexmate_lib::core::relay::router_unlock_auth::cleanup (+ 4 closures)
codexmate_lib::core::relay::router_unlock_auth::cleanup_for_native_off
codexmate_lib::core::relay::router_unlock_auth::has_residue
codexmate_lib::core::relay::router_unlock_auth::marker_exists
codexmate_lib::core::relay::router_unlock_auth::live_auth_state
codexmate_lib::core::relay::router_unlock_auth::readiness
codexmate_lib::core::relay::router_unlock_auth::read_marker
codexmate_lib::core::relay::router_unlock_auth::read_cleanup_backup
codexmate_lib::core::relay::router_unlock_auth::remove_file_if_exists
codexmate_lib::core::relay::router_unlock_auth::serialize (RouterUnlockAuthReadiness)
codexmate_lib::core::relay::router_unlock_auth::auth_is_usable_real_oauth
codexmate_lib::core::relay::router_unlock_auth::backup_contains_usable_real_oauth
codexmate_lib::core::relay::router_unlock_auth::validate_user_owned_auth_backup
codexmate_lib::core::relay::router_unlock_auth::verify_real_auth_restore_ready
codexmate_lib::core::relay::legacy_virtual_auth::read_user_owned_backup
codexmate_lib::core::relay::legacy_virtual_auth::cleanup (×3 variants)
codexmate_lib::core::relay::legacy_virtual_auth::remove_file_if_exists
codexmate_lib::core::relay::legacy_virtual_auth::read_marker
codexmate_lib::core::relay::legacy_virtual_auth::restorable_backup_auth
codexmate_lib::core::relay::legacy_virtual_auth::marker_exists
codexmate_lib::core::auth::is_aimami_managed_virtual_auth
codexmate_lib::core::relay::codex_diagnostic::check_router_unlock_auth_residue
codexmate_lib::core::relay::codex_diagnostic::fix_router_unlock_auth_residue
```

**允许实现（normal_feature）清单**：

```
codexmate_lib::commands::system::get_mystery_unlock_grants
codexmate_lib::commands::system::merge_mystery_unlock_grants
codexmate_lib::core::repository::Repository::get_mystery_unlock_grants
codexmate_lib::core::repository::Repository::merge_mystery_unlock_grants
codexmate_lib::core::repository::Repository::mystery_route_allowed  # 沿用既有 baseline 判定，未本轮重读
```

---

## 读完后仍不确定的点（如实列出）

1. `Repository::mystery_route_allowed` 本轮**没有重新逆向**，只是引用了既有 `backend-baseline/models-repository-baseline.md` 的既有摘要（该摘要提到还有一个 18 字符分支常量未完全解出，字节长度与 `voice_translation` 吻合）。如果 Polaris 真要实现 `mystery_unlock_grants`，建议先补一遍这个函数的独立复核，而不是直接沿用摘要当依据。
2. 集群 A 的具体前端触发入口（哪个 UI 开关/哪次 invoke 触发 `prepare_auth_for_router`）未定位——因为整条链路已判 SKIP，认为没有必要为了不打算实现的功能去补前端 CCF，所以特意没做，不是遗漏。
3. Windows 平台是否存在这条机制的同构实现，本轮完全没有看，标 Unknown（未违反平台不外推红线：不主张 macOS 结论适用于 Windows）。
