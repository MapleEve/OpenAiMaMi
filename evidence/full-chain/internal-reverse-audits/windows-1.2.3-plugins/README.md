# AiMaMi 1.2.3 windows-x64 plugins — 存废核验

同步时间：2026-07-25
范围：AiMaMi 1.2.3 windows-x64 是否仍保留 1.0.9 已逆向确认存在的 plugins 子系统（`PluginRegistry`、`list_plugins`/`toggle_plugin`/`get_plugin_config`/`update_plugin_config` 四命令、内置 `web_tools`/`image_support` 两个 builtin plugin、`plugins.json` 持久化 schema）。只做存在性核验，不做新 IDA decompile/callees/xrefs。
最终结论：**已移除（removed=true）**。三类独立 Windows 同平台证据（raw 目录拓扑 / 前端 131 命令枚举 / 二进制字符串枚举）均为零命中；macOS 1.2.3 独立核验同为零命中（仅作旁证，不作为 Windows 结论依据）；1.0.9 windows 二进制同一方法确认命中 `PluginRegistry` 字符串，验证方法有效。

## 证据索引

见 `pointers/evidence-paths.md`；完整推理过程见 `DISTILLED.md`。

## Coverage

本审计只覆盖「plugins 子系统是否仍存在于 1.2.3 windows-x64」这一存在性问题，不是 `full_leaf_100_definition_v2` 六维闭合，不产出 `strictImplementationUse`/`readyToImplement` 门控值。

## Per-target Result Matrix

| target | 1.0.9 win 状态（基线） | 1.2.3 win 状态（本次） | 证据 |
|---|---|---|---|
| `PluginRegistry`（及 `set_enabled`/`list`/`get_config`/`update_settings`/`save_store_static`） | Accepted, PASS 13/13（`audits/windows-1.0.9-plugins`） | 字符串表零命中；`raw/aimami/1.2.3/windows-x64/` 无 `plugins/` 目录 | `DISTILLED.md` §3, §1 |
| `list_plugins` / `toggle_plugin` / `get_plugin_config` / `update_plugin_config`（Tauri command） | Accepted, PASS（同上） | `ipc-contracts.jsonl`（131 命令）零命中 | `DISTILLED.md` §2 |
| `PluginStoreSchema` / `plugins.json` 持久化 | Accepted, PASS（同上） | 字符串表零命中 | `DISTILLED.md` §3 |
| `builtin::web_tools::plugin_info` / `builtin::image_support::plugin_info` / `all_builtin_plugins` | Accepted, PASS（同上） | 字符串表零命中 | `DISTILLED.md` §3 |

## Frontend Control Flow

未见 `PluginsPage` 或任何 `plugin` 相关 UI/命令入口出现在 1.2.3 windows-x64 的 131 命令、`frontend-files.txt`、`ast-facts.json`、`frontend-contract-report.md` 中。

## Backend Control Flow / Pseudocode / Call-tree

不适用——无 owner 可逆，因为二进制/前端层面均无 plugins 相关符号或命令注册入口；本审计未执行新的 IDA decompile/xrefs（不需要，缺证据本身就是结论的一部分）。

## Interface / Error / Boundary

不适用（模块不存在）。

## Gate Leaf Status

`diagnostic-only` / `removed_or_distilled_out_of_binary`。不写 `accepted`、`gate_accepted=true`、`implementation_use=true`（AGENTS.md §消费 Gate 规约 三档不含"已确认移除"这一状态，本结论按 `product_decision`-adjacent 的 diagnostic 结论处理，供实现侧决策"1.2.3 起不需要复刻 plugins 功能"，不作为任何 leaf 的 upstream 实现依据）。

## Diff 结论

1.0.9 → 1.2.3：plugins 子系统整体移除，无重命名/蒸馏后继模块的证据（65 个 1.2.3 windows-x64 raw 模块目录中无对应项，131 个前端命令中无对应项）。产品侧同期新增/扩展的 `mcp`、`skills` 模块（见 `audits/macos-1.2.3-mcp`、`audits/windows-1.2.3-mcp`、`audits/macos-1.2.3-skills`、`audits/windows-1.2.3-skills`）在功能形态上可能承担了原 plugins 的部分能力面（扩展第三方工具接入），但本审计未做功能等价性论证，只报告 plugins 原有符号/命令/持久化面已消失这一事实。

## Unknown / Missing

- 死代码/无字符串字面量残留路径的可能性未被静态字符串搜索排除，评级 `Unknown (low-likelihood, unfalsifiable by static string search alone)`，不升级为更强结论。
- 未做新 IDA decompile/xrefs 核验（未见证据需要——缺 owner、缺命令注册入口、缺字符串本身即是完整的存在性反证链）。

## Action / Non-action

- Action：`REVERSE-STATUS.md` `[wf-aimami123-fullapp-20260724]` 的 full-app 缺口清单中 `plugins` 一项，对 windows-x64（及交叉核对的 macos-arm64）可标注为「已核验移除，非待逆缺口」，无需再排 canonical leaf-closure 逆向工作单。
- Non-action：不据此声明 C5 产品侧"plugins 功能"upstream 行为依据（模块已不存在，无 upstream 行为可复刻）；不因本审计推翻或覆盖 `audits/windows-1.0.9-plugins`/`audits/macos-1.0.9-plugins` 既有 1.0.9 结论（两者各自独立、按各自版本 SoT 生效）。
