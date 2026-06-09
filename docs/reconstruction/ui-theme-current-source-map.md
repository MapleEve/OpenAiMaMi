# UI 主题当前源码 closeout 说明

## 证据范围

本说明只记录 `windows-1.0.9-ui` 中 `set_app_theme` 与 `theme_platform_diff` 在当前公开源码里的前端调用链证据，用于解释 current-source partial closeout。它不修改 raw/internal gate-report，不把 `gate_accepted=false`、`implementation_use=false`、`dim6_missing=true` 改写为已完成，也不声明 `full_leaf` 或 `full_leaf_100` 已完成。

`evidence/full-chain/internal/audits/audits/windows-1.0.9-ui/gate-report.json` 仍是权威 gate 输入：顶层 `gate_accepted=false`、`implementation_use=false`、`dim6_missing=true`；`leaves.set_app_theme` 与 `leaves.theme_platform_diff` 仍保留各自的 `gate_accepted=false` 和 `implementation_use=false`；`cluster_gate_summary.readyToImplement=0` 仍表示不能当作完整 leaf 验收。

`evidence/full-chain/raw/aimami/1.0.9/windows-x64/ui/cmd_set_app_theme_coroutine/implementation-targets.txt` 只给出 `set_app_theme` 目标，不能单独推出完整业务实现。`theme_platform_diff` 的 gate-report 说明指出，Windows 1.0.9 的主题链路是 shell 层应用主题加 Windows 程序层持久化差异；Windows 后端不读取系统明暗主题，也没有把 mica/tabbed 等窗口材质名接到 DWM material API。当前源码因此不应新增 OS theme 读取或 DWM material API 来伪造 parity；新增这些反而不是 1.0.9 parity。

## 当前源码调用链

当前公开源码存在一条前端主题调用链：

- `src/features/settings/panels/appearance.tsx` 通过设置面板的外观分组暴露主题分段控件，使用 `settings.theme`、`settings.light`、`settings.dark` 和 `settings.system` 文案键。
- `src/components/layout/sidebar.tsx` 在侧边栏底部暴露浅色和深色切换入口，消费 `settings.light`、`settings.dark`、`nav.sidebarLightTheme` 和 `nav.sidebarDarkTheme`。
- `src/app/providers/settings.tsx` 从 `useTheme()` 取得 `theme` 与 `setTheme`，把 `onThemeChange` 下发给 route render settings。
- `src/hooks/theme.ts` 在 `useTheme()` 中读取和写入 `localStorage` 的 `theme`，按 `matchMedia("(prefers-color-scheme: dark)")` 解析 system 主题，并切换根节点 `dark` class；随后调用 `api.setAppTheme(theme)`。
- `src/lib/api.ts` 暴露 `setAppTheme: (theme: AppTheme) => themeService.setTheme(theme)`，把 UI 意图收口到服务门面。
- `src/services/theme/index.ts` 校验 `light`、`dark`、`system`，在 Tauri runtime 中动态导入 `@tauri-apps/api/app` 的 `setTheme`，并把 `system` 转成 `null` 传给上游 Tauri app theme API。
- `src/locales/zh.json` 与 `src/locales/en.json` 均包含设置面板和侧边栏主题文案键，当前 closeout 只引用这些已有 key，不新增前端源码文案。

## 边界

本 closeout 只说明当前公开源码已有 UI theme 的前端 source chain：设置面板、侧边栏、设置 Provider、`useTheme`、`api.setAppTheme`、`themeService.setTheme`、Tauri `setTheme` 和 zh/en locale key。它是 current-source partial closeout，用来允许 validator 把 `windows-1.0.9-ui/gate-report.json` 中与 theme 相关的 8 个失败字段计为有证据的当前源码差异。

本 closeout 不声明 raw/internal gate 已被修复，不声明 `gate_accepted`、`implementation_use`、`full_leaf` 或 `full_leaf_100` 已完成，不把 Windows 1.0.9 主题链路扩展成 OS theme 读取、系统主题订阅、DWM material API 或后端持久化实现。
