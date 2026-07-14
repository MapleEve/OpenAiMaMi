# evidence — create_tray_menu (mac 1.1.8) — BACKEND-ONLY (角度A/C, NEW-in-1.1.8)



## Confirmed (来自 1.1.8 反编译)
- owner 签名: `_QWORD *__fastcall codexmate_lib::commands::tray_menu::create_tray_menu::h9bf3ccf1bea591c8(_QWORD *a1, __int64 a2)`
- call-tree: max_depth=8, pseudocode 节点=37(真实 decompile 落盘)。
- 关键字符串:
- `
               `
- `
                 `
- `
                     `
- `\xC0\xC0`
- `poisoned lock: another task failed inside`
- `tray_bootstrap_subtitletray_codex_router_statustray_quittray_account:`
- `tray_quittray_account:`

## Inferred
- 行为: 构建系统托盘(tray)菜单:组装菜单项(账号/路由/退出等),绑定事件 id。托盘图标特性核心。
- 接口: 菜单项集合/句柄
- 副作用: tauri Menu/tray 构建

## Delta vs 1.0.9 / 1.1.1
- NEW-in-1.1.8 backend-only(不在 1.1.1 已characterized 的 31+2 集内)。对应 changelog『Windows 一键导入修复 + 托盘图标』的托盘后端。
- 分类:backend-only characterized(角度A 符号枚举 + 角度C 已逆),不占前端 131 delta 分母。
