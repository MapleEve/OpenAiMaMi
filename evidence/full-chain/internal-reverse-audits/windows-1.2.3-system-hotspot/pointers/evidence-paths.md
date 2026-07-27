# Evidence Pointers — windows-1.2.3-system-hotspot

所有路径均相对 `${C5CM_INTERNAL_HISTORY_ROOT:-$C5CM_SHARE_ROOT}`（本会话解析为 ``）。本文件只给指针，不复制 raw 内容。

## raw evidence（backend, Windows，本包全部 5 文件直接 Read 核实）

- `raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/has_notch_0x140193b70.c`
- `raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/get_hotspot_enabled_0x1401935f0.c`
- `raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/set_hotspot_enabled_0x140192d30.c`
- `raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/hotspot_ready_0x140192270.c`
- `raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/focus_main_window_0x1401927d0.c`
- 注：以上 5 文件位于 `commands/ida/pseudocode/` 根级，Windows 侧**没有**独立的 `commands/hotspot/` 子目录；也没有 `windows-x64/screen` 或 `windows-x64/hotspot` 目录（`find` 核实，13 个 macOS-only 函数在 Windows 侧零命中，本包独立复核，非转引 macOS 姊妹包）
- 注：5 个文件头部注释均写 `win 1.2.1 | tauri command handler = <name> | mapped via command-name string xref (win-native, ground-truth)`——版本标签与文件实际所在的 `1.2.3` 目录不符，这是继承自早期提取流程的已知瑕疵（macOS 姊妹包的 `pointers/evidence-paths.md` 对同一批文件已记录过相同现象），不视为版本错置红旗；command-name string xref 才是 owner 归属的 ground-truth 依据，非文件头版本标签

## raw evidence（backend, Windows，未展开反编译的 5 个核心分发地址，本包核实其不存在独立 .c 文件）

- `0x140970DA0`（`has_notch` 分发目标）
- `0x14096F8D0`（`get_hotspot_enabled` 分发目标）
- `0x14096FB70`（`set_hotspot_enabled` 分发目标）
- `0x14096F460`（`hotspot_ready` 分发目标）
- `0x14096F5D0`（`focus_main_window` 分发目标）
- 本包对以上 5 个地址逐一 `find -iname "*<addr>*"` 核实：`raw/aimami/1.2.3/windows-x64/` 全树零命中，即没有任何独立反编译产物——dim3 缺口的证据来源

## raw evidence（共享辅助函数，非 hotspot 归属，交叉引用）

- `raw/aimami/1.2.3/windows-x64/commands/accounts/ida/pseudocode/sub_1401C3650_0x1401c3650.c`（5 个命令均调用的 Tauri app-state/参数提取辅助函数，文件头标注 `module src/commands/accounts.rs | attributed via call-graph propagation`——跨模块共享工具，非 hotspot 专属逻辑）
- `raw/aimami/1.2.3/windows-x64/commands/ida/pseudocode/set_hotspot_enabled_0x140192d30.c` 内联调用 `sub_1401BCE80`（`enabled` 布尔参数提取，未见独立文件）

## raw evidence（相关 DTO/persistence 交叉引用，非本包核心归属，本包本轮新发现，macOS 姊妹包未曾提及）

- `raw/aimami/1.2.3/windows-x64/commands/autostart/ida/pseudocode/sub_140388D60_0x140388d60.c`（本包核实读过——`autostart.rs` call-graph 归属的一个 serde 字段名匹配函数，内含字符串常量 `"CodexMateSettingshotspotusageRefreshIntervaldeviceIdremoteDeviceSecretnotificationsSinceapiProxymysteryUnlockGrant" "sautostartWhenRouterOn"`——`CodexMateSettings` 类型名后紧跟 `hotspot` 作为疑似首个字段名，diagnostic-only，未独立解出 `off_14174B660` 偏移表确认字段边界，见 gate-report.json dim4）
- `raw/aimami/1.2.3/windows-x64/codexmate_lib/ida/pseudocode/sub_140084C90_0x140084c90.c`（`[HEXRAYS_DECOMPILE_FAILED: too big function]` 原始反汇编回退，含约 109 处重复 `aHotspot; "hotspot"` 字符串引用，人工核实为通用字段名/路由名匹配桩的噪声，非 hotspot 专属逻辑，确认假阳性）
- `raw/aimami/1.2.3/windows-x64/commands/relay/ida/pseudocode/open_path_0x140194810.c`（win 命令注册/分发表函数，文件头自述 `// hotspot/mcp/registry/codex-kill utility commands, and (per owner-map evidence) get_codex_router_auth_readiness`，内部直接调用 `hotspot_ready(v26)`/`get_hotspot_enabled(v26)`/`set_hotspot_enabled(v26)`——本包已归属的 3 个命令的注册点交叉引用，非第 6 个 hotspot 归属函数，确认假阳性）

## raw evidence（frontend，Windows，本包本轮独立核实，非转引 macOS 姊妹包）

- `raw/aimami/1.2.3/windows-x64/frontend/ipc-contracts.jsonl` — python3 JSON 精确字段匹配核实（131 条 win 命令总数中 5/5 hotspot 命令命中，`true_gaps=0`）
- `raw/aimami/1.2.3/windows-x64/frontend/query-hits.jsonl` — grep 核实 7 处命中：`accounts-page-GdJYDnGj.js` 3 处（`has-notch`→`hotspot-enabled`→mutation invalidate 双重门控）+ `settings-page-B8vywarZ.js` 4 处（同款双重门控 + `autostart-state` 相邻查询，非本包归属）
- `raw/aimami/1.2.3/windows-x64/frontend/frontend-contract-report.md` L163-260/L625-626 — 5 命令 wrapper 交叉核实（`focus_main_window`/`get_hotspot_enabled`/`has_notch`/`hotspot_ready`/`set_hotspot_enabled`，行号与 macOS 姊妹包报告一致，本包独立在 win 报告上重新 grep 核实，非照抄行号）
- `raw/aimami/1.2.3/windows-x64/package/AiMaMi-1.2.3-win64/tauri-dumped-assets/direct/assets/index-B40jKs17.js` — 直接 grep 核实 hotspot 窗口挂载副作用逐字模式：`background:transparent!important` CSS + `requestAnimationFrame(()=>{requestAnimationFrame(()=>{f||Ee.hotspotReady().catch(()=>{})})})`，与 macOS 姊妹包描述的 "2×requestAnimationFrame 延迟调用 hotspotReady()" 行为一致，本包独立在 win-native JS 资源文件上核实，非转引
- `raw/aimami/1.2.3/windows-x64/package/AiMaMi-1.2.3-win64/tauri-dumped-assets/direct/assets/settings-page-B8vywarZ.js` — Settings 页 hotspot Switch（`useQuery(["has-notch"])`→`useQuery(["hotspot-enabled"])`→`setHotspotEnabled` mutation，i18n key `settings.hotspotEnabled`/`settings.hotspotDisabled`）
- `raw/aimami/1.2.3/windows-x64/package/AiMaMi-1.2.3-win64/tauri-dumped-assets/direct/assets/accounts-page-GdJYDnGj.js` — Accounts 页 Quick-Settings 弹窗内 hotspot Switch（同款双重门控 query + `set_hotspot_enabled` mutation，独立组件实例）

## 姊妹包交叉引用

- `internal-reverse/audits/macos-1.2.3-system-hotspot/` — authoritative for macOS；本包仅用其作为**范围边界指针**（哪 13 个 macOS-only 函数需要核对 Windows 侧零证据），不作为 Windows 证据来源；本包所有 Windows 侧结论均本轮独立从 win-native raw 证据重新得出（红线 8/dim5：Windows 只证明 Windows）
- `internal-reverse/audits/windows-1.0.9-system-hotspot/` — 同名模块的**前一版本包**，但语义范围不同（1.0.9 的 "hotspot" 是 WiFi 网络热点功能，`HotspotConfig` 存于 `UsageRefresh` 设置 blob，owner 函数 `get_hotspot_enabled_owner_sys@0x140285050`/`set_hotspot_enabled_owner_sys@0x14027C6D0`/`hotspot_ready_owner_sys@0x14026DEF0`，已达 `strictImplementationUse`）——本包 1.2.3 的证据显示不同语义（刘海悬浮窗 UI 开关，与 macOS 1.2.3 姊妹包一致）+ 不同地址（未命名的 5 个核心分发地址，均未独立反编译）。本包**不**把 1.0.9 包的 `strictImplementationUse`/owner 名/地址迁移到 1.2.3——RULE 9 `diff_required` 适用（语义漂移本身即说明这不是同范围 no-behavior-diff 场景），仅作历史/产品决策参考指针

## INDEX.jsonl 命中（既有，历史版本，非本次新增）

- `aimami/1.0.9/{macos-arm64,windows-x64}/system/{get_hotspot_enabled,set_hotspot_enabled,hotspot_ready}` — 1.0.9 版本旧包（不同语义范围，见上）
- `aimami/1.1.1/macos-arm64/hotspot/{get_hotspot_enabled,focus_main_window}`、`aimami/1.1.1/windows-x64/system/{get_hotspot_enabled,hotspot_ready,set_hotspot_enabled}` — 1.1.1 版本旧包
- `aimami/1.2.3/windows-x64/commands/relay/backend-pseudocode-leaf` 等 1.2.3 relay 条目——版本相同但模块不同，不冲突
- `internal-reverse/audits/macos-1.2.3-system-hotspot/distillation-conclusion` — 本包姊妹包（macOS），同一轮蒸馏批次的前一个产出

## 本轮方法论声明

本轮为**蒸馏**（consolidation），未连接 IDA、未做任何新反编译或新 `func_query`/`export_funcs()` 调用；角度A（符号枚举）用 `find` 文件系统核实（5 个 Windows 命令层文件，13 个 macOS-only 函数名逐一 `find -iname` 核实零命中）；角度B（前端命令 diff）本轮用 python3 对 `ipc-contracts.jsonl` 做精确 JSON 字段匹配产出，`true_gaps=0`（131 条 win 命令中 5/5 命中）；角度C（语义孤儿扫描）用文本 `grep -rli hotspot` 对全 `windows-x64` 树代理扫描，逐条命中人工分诊（5 个已归属命令文件 + frontend 提取文件 + 3 个交叉引用假阳性：`sub_140084C90`/`sub_140388D60`/`open_path`）；角度D（manifest diff 四分类）本轮产出，见 gate-report.json unknowns。所有 Windows 侧结论均本轮独立从本轮直接 Read 的 win-native 证据得出，不转引/不外推 macOS 姊妹包结论（红线 8/dim5）。
