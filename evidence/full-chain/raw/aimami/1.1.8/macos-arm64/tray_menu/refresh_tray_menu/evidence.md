# evidence — refresh_tray_menu (mac 1.1.8) — BACKEND-ONLY (角度A/C, NEW-in-1.1.8)



## Confirmed (来自 1.1.8 反编译)
- owner 签名: `__int64 __fastcall codexmate_lib::commands::tray_menu::refresh_tray_menu::h44710b774bcd0619(__int64 a1)`
- call-tree: max_depth=8, pseudocode 节点=38(真实 decompile 落盘)。
- 关键字符串:
- `
               `
- `
                 `
- `
                     `
- `\xC0\xC0`
- `main`
- `poisoned lock: another task failed inside`
- `tray_bootstrap_subtitletray_codex_router_statustray_quittray_account:`
- `tray_quittray_account:`

## Inferred
- 行为: 刷新托盘菜单:状态变更后重建菜单并替换。
- 接口: -
- 副作用: 重建+替换 tray menu

## Delta vs 1.0.9 / 1.1.1
- NEW-in-1.1.8 backend-only(不在 1.1.1 已characterized 的 31+2 集内)。对应 changelog『Windows 一键导入修复 + 托盘图标』的托盘后端。
- 分类:backend-only characterized(角度A 符号枚举 + 角度C 已逆),不占前端 131 delta 分母。
