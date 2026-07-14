# evidence — create_tray_menu_from_snapshot (mac 1.1.8) — BACKEND-ONLY (角度A/C, NEW-in-1.1.8)



## Confirmed (来自 1.1.8 反编译)
- owner 签名: `_QWORD *__fastcall codexmate_lib::commands::tray_menu::create_tray_menu_from_snapshot::h27dd499b1484bd80(`
- call-tree: max_depth=3, pseudocode 节点=33(真实 decompile 落盘)。
- 关键字符串:
- `
               `
- `
                 `
- `\xC0\xC0`
- `tray_codex_router_statustray_quittray_account:`
- `tray_quittray_account:`

## Inferred
- 行为: 从运行时状态快照(runtime snapshot)构建托盘菜单:按当前账号/用量/路由态渲染菜单项。
- 接口: snapshot->菜单
- 副作用: 读快照+tauri Menu

## Delta vs 1.0.9 / 1.1.1
- NEW-in-1.1.8 backend-only(不在 1.1.1 已characterized 的 31+2 集内)。对应 changelog『Windows 一键导入修复 + 托盘图标』的托盘后端。
- 分类:backend-only characterized(角度A 符号枚举 + 角度C 已逆),不占前端 131 delta 分母。
