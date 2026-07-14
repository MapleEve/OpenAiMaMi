# evidence — refresh_tray_menu_with_snapshot (mac 1.1.8) — BACKEND-ONLY (角度A/C, NEW-in-1.1.8)



## Confirmed (来自 1.1.8 反编译)
- owner 签名: `__int64 __fastcall codexmate_lib::commands::tray_menu::refresh_tray_menu_with_snapshot::h6e34c3f16c01270d(`
- call-tree: max_depth=4, pseudocode 节点=34(真实 decompile 落盘)。
- 关键字符串:
- `
               `
- `
                 `
- `\xC0\xC0`
- `main`
- `tray_codex_router_statustray_quittray_account:`
- `tray_quittray_account:`

## Inferred
- 行为: 按新快照刷新托盘菜单:refresh_tray_menu 的 snapshot 入参变体。
- 接口: snapshot
- 副作用: 按快照重建 tray menu

## Delta vs 1.0.9 / 1.1.1
- NEW-in-1.1.8 backend-only(不在 1.1.1 已characterized 的 31+2 集内)。对应 changelog『Windows 一键导入修复 + 托盘图标』的托盘后端。
- 分类:backend-only characterized(角度A 符号枚举 + 角度C 已逆),不占前端 131 delta 分母。
