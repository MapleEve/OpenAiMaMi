# AiMaMi macOS-arm64 1.2.3 — plugins 模块下线核实

同步时间：2026-07-25
范围：AiMaMi macOS-arm64 1.2.3（`raw/aimami/1.2.3/macos-arm64`）plugins（`list_plugins`/`toggle_plugin`/`get_plugin_config`/`update_plugin_config`/`PluginRegistry`）模块存续性核实。**内部专用逆向分析，产出只写内部盘，不对外发布。**
最终结论：**plugins 功能（应用自研插件管理，非 Tauri 框架内置 plugin）在 1.2.3 macOS-arm64 的产品可见面（IPC 命令、前端页面、`commands/` 模块目录）已全部消失，判定为已下线（removed=true）。** 唯一残留 Unknown：`run()` 入口 5 处 `.manage()` 调用中是否仍隐式持有 `PluginRegistry` 类型状态未逐处解糖确认（Rust 泛型单态化后符号名为哈希后缀，无法仅凭字符串/符号名判定），但该 Unknown 不影响"产品面已下线"结论，因为即便内部仍残留该 struct，也已无任何命令/UI/前端可达路径触发它。

## 背景对照（1.0.9 baseline，供参照）

1.0.9 macOS + Windows 双平台曾对 plugins 做过完整 `full_leaf_100` 逆向并 accepted（`INDEX.jsonl` 多条 `status=accepted_full_leaf_100_ida_direct_plugins`，`implementation_use=true`）：
- 后端命令：`list_plugins` / `toggle_plugin` / `get_plugin_config` / `update_plugin_config`（四个 `commands::plugins` 下的 Tauri command，均有 IDA decompile + owner VA）。
- 核心逻辑：`PluginRegistry::set_enabled` / `PluginRegistry::list` / `PluginRegistry::get_config` / `PluginRegistry::update_settings` / `save_store_static`。
- 内置两个插件：`builtin::web_tools::plugin_info`、`builtin::image_support::plugin_info`；持久化 `PluginStoreSchema { schemaVersion, plugins }` → `plugins.json`。
- 架构位置：`PluginRegistry` 是 `.manage()` 注入的 3 个应用状态之一（另两个是 `Repository`、`RelayManager`），见 `internal-reverse/audits/macos-1.0.9-plugins/`、`internal-reverse/audits/windows-1.0.9-plugins/`。
- 1.1.8 threadmodel delta 复核（`intermediate/aimami/1.1.8/macos-arm64/_threadmodel/THREAD-MODEL.md`，INDEX key `aimami/1.1.8/macos-arm64/threadmodel`）仍将 `PluginRegistry` 列入 "unchanged" 的 3 个 `.manage()` 状态类型之一 —— 即 1.1.8 时 plugins 子系统仍在。若确实下线，发生在 1.1.8 → 1.2.3 之间。

## 证据索引

- 二进制 SOT：`raw/binary/AiMaMi 1.2.3.app`，`AiMaMi.arm64.thin`，sha256 `25d6d04e6d94c3f1e8258d2b348360b228fda4fc1c3d38b6383c84a2a8d53d21`（`raw/aimami/1.2.3/macos-arm64/VERSION-BASELINE.md` / `MANIFEST.md`）。
- 前端 IPC 契约：`raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl`（131 条）。
- 后端 commands 目录清单 + baseline：`raw/aimami/1.2.3/macos-arm64/commands/`、`raw/aimami/1.2.3/macos-arm64/backend-baseline/commands-baseline.md`。
- 前端页面 dump：`raw/aimami/1.2.3/macos-arm64/frontend/beautified/`、`raw/aimami/1.2.3/macos-arm64/frontend/pages/`。
- 启动入口反编译：`raw/aimami/1.2.3/macos-arm64/run/ida/pseudocode/run_0x1006f50c0.c`。
- IDA 活体核验：`server_health` @ mac IDA MCP（`idb_path=.../AiMaMi 1.2.3.app/.../AiMaMi.i64`，`module=AiMaMi`，`IDA decompiler_ready=true`，`uptime_sec≈117056`）；`find_regex "(?i)plugin"` 全二进制字符串池扫描。

## Per-target Result Matrix（3 项用户指定核实点）

| 核实点 | 方法 | 结果 |
|---|---|---|
| ① `raw/aimami/1.2.3/macos-arm64` 全树 grep plugin/PluginRegistry/list_plugins/toggle_plugin | `grep -ril` 全树精确词 + 大小写不敏感子串 | 精确词 `PluginRegistry`/`list_plugins`/`toggle_plugin`/`get_plugin_config`/`update_plugin_config`/`plugin_info`/`PluginStoreSchema`/`plugins.json`/`builtin::web_tools` **全部 0 命中**。大小写不敏感子串 `plugin` 命中 21 个文件，逐一核实后**全部**是 Tauri 框架内置 plugin（`tauri-plugin-autostart`/`tauri_plugin_updater`/`@tauri-apps/plugin-dialog`/`plugin-deep-link`/`plugin-event`/`plugin-app`/`plugin:shell\|open`），与应用自研 plugins 功能（list/toggle 插件管理）**无关** |
| ② `frontend/ipc-contracts.jsonl` 131 命令有无 plugin 相关 | 全量解析 131 条 command 字段 + `grep -in plugin` 原始文本 | **0 命中**。131 命令逐条枚举核对（见下方全量列表小节），无任何 `*_plugin*`/`plugin_*` 命名的命令 |
| ③ 前端全量 JS / control-flow 有无 plugins UI | `frontend/beautified/` 全部 page bundle 列表比对 + `settings-page-B8vywarZ.js` 精确 grep + 全树子串扫描 | 已知 10 个页面 bundle（accounts/analytics/auto-switch/maintenance/mcp/relay/sessions/**settings**/skills/voice）**无 `plugins-page-*.js`**；`settings-page` 内精确 grep `plugin` **0 命中**；无 `PluginsPage`/`/plugins` 路由/`pluginsRoute` 字样 |

## 补充核验（超出用户指定 3 点，用于加固结论）

- **`commands/` 模块目录**（raw evidence 实际反编译产物，非仅字符串扫描）：`account_io/ account_oauth/ accounts/ autostart/ debug_bundle/ debug_report/ deeplink/ hotspot/ ida/ mcp/ relay/ sessions/ system/ tray_menu/ voice/ voice_runtime/`，共 16 个，**无 `plugins/`**（对照 1.0.9 有独立 `commands/plugins/`）。
- **`backend-baseline/commands-baseline.md` §0 目录清单与偏差说明**：该分析显式核对了 `skills`（不存在，代码在 core 层）、`maintenance`（不存在，全树无相关反编译产物）两个"预期存在但缺失"的模块，**未把 plugins 列为需核对项**——本身即是该分析视角下 plugins 已不在预期功能面内的旁证。
- **`run()` 入口 IDA 反编译**（`run_0x1006f50c0.c`）：`0x1006f50c0` 中注册的插件 builder 全部是 Tauri 官方插件——`updater`/`autostart`（含 arg/build）/`deep_link`/`dialog`/`global_shortcut`/`process`，以及一个自定义命名插件 `"updater"`（应用内更新检查包装，非"插件管理"功能）；**无** `PluginRegistry` 相关 `.manage()` 或注册调用出现在此范围内的反编译文本。该函数内共 5 处 `.manage()` 调用（较 1.0.9/1.1.8 的 3 处增多，推断与新增 `VoiceRuntimeInner` 等状态相关），但 Rust 泛型单态化导致符号名为哈希后缀（如 `h97d14f3a98688897`），**未逐处解糖确认类型**——此为唯一残留 Unknown，标记 `accepted_unknown`（非 architecture_only 假墙，是真实"需要更深 xrefs/类型还原才能穷尽"边界，且已判断不影响"产品面已下线"最终结论）。
- **IDA 活体字符串池扫描**（`find_regex "(?i)plugin"`，10 条命中，见 pointers）：`tauri-plugin-updater/2.10.0`、`tauri::menu::plugin::MenuChannels`、`plugin:dialog|message`、`plugin:webview|set_webview_zoom`、`plugin:__TAURI_CHANNEL__|fetch`、`InvalidPluginInitialization`（Tauri Setup 错误枚举）等，**全部是 Tauri 框架/webview 层字符串**，无 `PluginRegistry`/`plugins.json`/`web_tools`/`image_support` 等应用自研 plugins 特征字符串。

## Coverage

- `full_app_coverage_status`: `not-full-app`（本包只核实 plugins 单一 target 的存续性，不代表 1.2.3 全量 backend/frontend 覆盖）。
- 本核实仅覆盖 macOS-arm64；Windows-x64 1.2.3 未做同等核实，**禁止用本包结论外推 Windows**（`windows-1.0.9-plugins/` 已存在，`windows-1.2.3-plugins/` 待办）。

## Gate Leaf Status

本包**不是** `full_leaf_100`/`readyToImplement`/`strictImplementationUse` 声明，是一次性 "feature-removed 核实" 诊断结论：
- `consumerStartReady`: N/A（无 target 需要消费方开工——功能已确认不存在，无需实现）。
- `gate_accepted`: `false`；`implementation_use`: `false`（本包不产出可实现依据，只产出"该功能不存在，无需实现/无需迁移"的产品决策依据）。
- 判定：`removed=true`，`confidence=high`（4/4 独立信号一致：IPC 命令面、前端页面面、后端命令目录面、二进制字符串池面），`residual_unknown=manage()_5_calls_type_not_fully_decompiled`（低优先级，不阻断本结论）。

## Unknown / Missing

- `.manage()` 5 处调用的具体注入类型未逐处 xrefs/类型还原（见上）。
- Windows-x64 1.2.3 同等核实未做，plugins Windows 侧存续性仍 `Unknown`。
- 未做 1.1.8 → 1.2.3 之间的精确版本定位（哪个具体版本移除），只确认 1.1.8 threadmodel 复核时仍在、1.2.3 已消失。

## Action / Non-action

- **Action**：C5 侧无需为 AiMaMi plugins 功能（list/toggle/get_config/update_config 插件管理面板）编写实现或迁移代码——上游 1.2.3 baseline 已不含该功能，继续沿用 1.0.9/1.1.8 的历史 `full_leaf_100` 证据作为"曾经存在过的行为参考"即可，不作为 1.2.3 parity 实现依据。
- **Non-action**：不删除/不修改 `internal-reverse/audits/macos-1.0.9-plugins/`、`windows-1.0.9-plugins/` 历史包（仍是合法历史证据，只是不再是 1.2.3 baseline 的一部分）。
- 若后续需要更高置信度（例如要在 C5 侧显式验证"1.2.3 迁移场景下不应再出现插件面板"），可对 `.manage()` 5 处调用做逐处类型解糖，归入本包 `logic/` 补充证据；当前信息量已足以支撑"产品面下线"的轻量结论，未新开 `readyToImplement` 工作单。

## Pointers

- 证据根：`raw/aimami/1.2.3/macos-arm64/`（VERSION-BASELINE.md、MANIFEST.md、frontend/ipc-contracts.jsonl、commands/、backend-baseline/、run/ida/pseudocode/run_0x1006f50c0.c、frontend/beautified/、frontend/pages/）。
- 对照历史包：`internal-reverse/audits/macos-1.0.9-plugins/`、`internal-reverse/audits/windows-1.0.9-plugins/`。
- 1.1.8 threadmodel delta（plugins 仍存在的最后已知证据点）：`intermediate/aimami/1.1.8/macos-arm64/_threadmodel/THREAD-MODEL.md`，INDEX key `aimami/1.1.8/macos-arm64/threadmodel`。
- 1.2.3 全量 backend baseline：`internal-reverse/audits/BASELINE-FINAL-1.2.3.md`、`internal-reverse/audits/COVERAGE-FINAL-1.2.3.md`（均未提及 plugins 模块）。
