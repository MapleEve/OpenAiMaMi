# 1.2.2 前端 relay/account 组件 + 动态图标分析(用户重点)

## relay/account/settings 页组件
- relay-page(CybVyflj→BZJDyZ5A 92→88K)、accounts-page(DRo3by-s→CyksLBgI 68→64K)、settings-page 均变(hash 不同)。
- **命令级 diff = 0**: 三页 invoke 的 IPC 命令集未变。改动为纯 UI/组件/样式重构(bundle 各缩 ~4K),minified JS 无 source map 无法逐组件还原细节。
- relay 的实质命令变化在命令面(非页内): 6 个 router 诊断/relay 命令从前端移除(fix_codex_router_issue/run_codex_router_diagnostics/set_relay_display_tags/test_relay_draft_stream/test_relay_provider_stream + graceful_restart_for_update),整合掉诊断/流测试流程;diagnose_codex_router 仍被 relay-page invoke(后端符号也还在)。

## 动态图标库(用户说"图标库改成动态图标")
- 图标库仍是 **lucide-react**(index-De7J35HL.js 引用 ×26)。
- 机制改为 **Vite 动态导入**: `__vite__mapDeps` ×18 依赖映射 + `createLucideIcon` registry —— 图标从"每个一个静态 chunk 静态 import"改为按需动态加载(code-split/lazy)。独立图标 .js 数 8→9(基本没增),说明多数图标收敛进动态 registry 而非各自成 chunk。
- OpenAiMaMi 重建侧: 图标改用动态 registry 组件(如 `<DynamicIcon name=.../>` 从 lucide-react 动态导入),而非静态逐个 import。

## 结论
用户观察准确: relay/account 前端确有更新(组件重构 + 命令面 router 诊断整合),图标库确改为动态(lucide-react + Vite 动态导入)。命令面净变化 = +7 debug/session 命令、-9(含6 relay/router)、argkey voice_processing_done。
