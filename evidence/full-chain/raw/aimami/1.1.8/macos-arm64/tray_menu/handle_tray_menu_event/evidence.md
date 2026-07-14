# evidence — handle_tray_menu_event (mac 1.1.8) — BACKEND-ONLY (角度A/C, NEW-in-1.1.8)



## Confirmed (来自 1.1.8 反编译)
- owner 签名: `__int64 __fastcall codexmate_lib::commands::tray_menu::handle_tray_menu_event::h72195a23d2679709(`
- call-tree: max_depth=8, pseudocode 节点=38(真实 decompile 落盘)。
- 关键字符串:
- `AUTO_SWITCH_DAEMON_REPAIR_FAILED`

## Inferred
- 行为: 处理托盘菜单点击事件:按 menu item id 分派到对应动作(切换账号/打开窗口/退出等)。
- 接口: event id->action
- 副作用: 分派+窗口/账号操作副作用

## Delta vs 1.0.9 / 1.1.1
- NEW-in-1.1.8 backend-only(不在 1.1.1 已characterized 的 31+2 集内)。对应 changelog『Windows 一键导入修复 + 托盘图标』的托盘后端。
- 分类:backend-only characterized(角度A 符号枚举 + 角度C 已逆),不占前端 131 delta 分母。
