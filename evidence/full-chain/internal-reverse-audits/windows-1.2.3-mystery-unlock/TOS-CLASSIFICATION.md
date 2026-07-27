# ToS Classification — mystery-unlock cluster (AiMaMi 1.2.3 Windows x64)

本文件对本轮读到的每个 Windows 函数做 `normal_feature` / `tos_circumvention` 二分类，并写清依据。判定独立于 `audits/macos-1.2.3-mystery-unlock/TOS-CLASSIFICATION.md`——两者结论一致是因为读的是同一机制在两个平台的独立编译产物，不是互相抄结论。**对 `tos_circumvention` 项只写"是什么、为什么 SKIP"，不写字段级序列化步骤/可直接照抄的构造算法。**

---

## 分类标准（与 macOS 姊妹包保持同一标准，便于跨平台对照）

- `normal_feature`：功能与规避第三方服务条款无关——本地配置、UI 状态、纯本机数据读写，不涉及冒充官方客户端、不涉及伪造/挪用第三方账号凭据、不涉及绕过 provider 侧鉴权。
- `tos_circumvention`：功能的目的或必要组成部分是让本地或远端把"未经真实授权的状态"当作"已授权"接受——包括伪造/虚拟他方（此处是 OpenAI/ChatGPT）账号凭据结构以骗过依赖该凭据判断登录态的逻辑。

---

## 结论表

| 符号 | va | 分类 | 依据（本轮 Windows 证据，逐条可查） |
|---|---|---|---|
| `router_unlock_auth::install_virtual_unlock_auth` | 0x1404949c0 | **tos_circumvention** | 在没有真实可用登录时向 auth 文件路径写入结构上冒充真实 OpenAI/ChatGPT OAuth 会话的 JSON；写入前备份、留 marker 供撤走。 |
| `router_unlock_auth::sub_14048FF80`（≈build_unlock_auth_json） | 0x14048ff80 | **tos_circumvention** | 逐字节确认写入 `chatgpt_account_id`/`chatgpt_account_user_id`/`chatgpt_user_id`/`chatgpt_plan_type`/`tokens.*`/`axonhub_note` 等字段，固定虚构身份 `niuniu@woyao.pro`/`NIUNIU WOYAO`/`user-niuniu-woyao-pro-unlock`。 |
| `router_unlock_auth::sub_14048F130`（≈make_unsigned_jwt） | 0x14048f130 | **tos_circumvention** | 构造 `alg:none` 未签名 JWT，claim 内嵌 `iss="https://auth.openai.com"`——真实第三方域名字符串，被写入一份该第三方从未签发的凭据。 |
| `router_unlock_auth::cleanup`（+4 闭包） | 0x140497830, 0x14046b5e0/670/700 | **tos_circumvention** | 围绕伪造凭据的状态机清理/恢复（4 态分支：无文件/伪造激活/真实存在/损坏）。 |
| `router_unlock_auth::read_marker` | 0x14048e790 | **tos_circumvention** | 读取记录"伪造凭据是否激活"的 marker 文件，是伪造机制状态管理的一部分。 |
| `router_unlock_auth::read_cleanup_backup` | 0x14048f550 | **tos_circumvention** | 读取+校验备份内容是否为"用户自己的真实凭据"（防止把自己伪造的内容误当真实备份），判断结果唯一用途是决定要不要恢复/继续伪造。 |
| `router_unlock_auth::serialize` | 0x140465450 | **tos_circumvention** | 就绪度 DTO 的序列化实现，向前端上报"当前是否处于伪造登录态"，是该机制 UI 状态上报的一部分，无独立于伪造机制的价值。 |
| `router_unlock_auth::sub_14048EF50` | 0x14048ef50 | **tos_circumvention**（依附判定） | 字符串/标记构造 helper，被 `install_virtual_unlock_auth` 等调用，服务于伪造凭据流程。 |
| `router_unlock_auth::sub_14048FE80` | 0x14048fe80 | **tos_circumvention**（依附判定） | marker 文件存在性检查 + 错误包装 helper，同上。 |
| `legacy_virtual_auth::cleanup_0` | 0x14057a0e0 | **tos_circumvention** | 同一伪造机制的旧代清理器，marker 文件名不同，现仅剩迁移期清理/恢复用途。 |
| `legacy_virtual_auth::read_marker_0` | 0x140579290 | **tos_circumvention** | 旧代 marker 读取。 |
| `legacy_virtual_auth::read_user_owned_backup` | 0x140579800 | **tos_circumvention** | 校验备份是否为用户真实凭据（`OPENAI_API_KEY` 后缀检查 + `tokens` 字段检查），依附伪造机制。 |
| `legacy_virtual_auth::sub_1404F99D0` | 0x1404f99d0 | **tos_circumvention**（依附判定） | Result/drop-glue 风格清理 helper，被上述函数调用。 |
| `legacy_virtual_auth::sub_140579700` | 0x140579700 | **tos_circumvention**（依附判定） | marker 校验 helper（含错误包装），同上。 |
| `legacy_virtual_auth::__closure__6` / `__closure__7` | 0x140566820, 0x1405668b0 | **tos_circumvention**（依附判定） | `cleanup_0` 的错误路径闭包。 |

**依附判定说明**：与 macOS 姊妹包同一原则——判断/校验/helper 类函数本身不含伪造字节，但其存在意义完全依附于伪造机制，孤立看待它们对 Polaris 没有非 `tos_circumvention` 的独立用途。

---

## SKIP 项清单（供 manifest/gate-report 引用）

```
codexmate_lib::core::relay::router_unlock_auth::install_virtual_unlock_auth
codexmate_lib::core::relay::router_unlock_auth::sub_14048FF80 (build_unlock_auth_json equivalent)
codexmate_lib::core::relay::router_unlock_auth::sub_14048F130 (make_unsigned_jwt equivalent)
codexmate_lib::core::relay::router_unlock_auth::cleanup (+ 4 closures)
codexmate_lib::core::relay::router_unlock_auth::read_marker
codexmate_lib::core::relay::router_unlock_auth::read_cleanup_backup
codexmate_lib::core::relay::router_unlock_auth::serialize
codexmate_lib::core::relay::router_unlock_auth::sub_14048EF50
codexmate_lib::core::relay::router_unlock_auth::sub_14048FE80
codexmate_lib::core::relay::legacy_virtual_auth::cleanup_0
codexmate_lib::core::relay::legacy_virtual_auth::read_marker_0
codexmate_lib::core::relay::legacy_virtual_auth::read_user_owned_backup
codexmate_lib::core::relay::legacy_virtual_auth::sub_1404F99D0
codexmate_lib::core::relay::legacy_virtual_auth::sub_140579700
codexmate_lib::core::relay::legacy_virtual_auth::__closure__6
codexmate_lib::core::relay::legacy_virtual_auth::__closure__7
```

无 `normal_feature` 项——本包范围内（router_unlock_auth + legacy_virtual_auth）全部 19 个 Windows 函数都属于同一条伪造凭据链路，没有像 macOS 姊妹包里 `mystery_unlock_grants` 那样的独立无关功能混入这两个目录（这两个目录名本身在两平台的 win-native/mac-native census 里都只对应这一条机制，`mystery_unlock_grants` 是另一对完全不同的模块路径 `commands::system`/`core::repository`，本包未涉及）。

---

## 读完后仍不确定的点（如实列出）

1. `sub_14048ED60`（功能上对应 macOS `live_auth_state` 的状态判定函数）本轮未独立解读其函数体——它不在 `router_unlock_auth`/`legacy_virtual_auth` 这 19 个 census 行内，只观察到调用点和返回值消费方式。不影响 `tos_circumvention` 分类（判定依据是已读到的字段/字符串/JWT 构造，不依赖这个函数的内部实现）。
2. `is_aimami_managed_virtual_auth`、`codex_diagnostic::{check,fix}_router_unlock_auth_residue` 的 Windows 对应实现完全未核实（不在任务文件范围内），标 Unknown，不代入分类。
3. 前端具体触发入口未定位——同 macOS 侧原则，因整条链路已判 SKIP，不为不打算实现的功能补前端定位工作。
4. 与更早一轮的 `"正当功能"并建议增强）存在直接的结论冲突，详见 `README.md` 「与既有分析的关系」一节；本文件不代替用户裁决该冲突，只如实记录。
