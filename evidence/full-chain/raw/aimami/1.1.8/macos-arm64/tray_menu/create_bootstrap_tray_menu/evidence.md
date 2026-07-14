# evidence — create_bootstrap_tray_menu (mac 1.1.8) — BACKEND-ONLY (角度A/C, NEW-in-1.1.8)



## Confirmed (来自 1.1.8 反编译)
- owner 签名: `volatile signed __int64 **__fastcall codexmate_lib::commands::tray_menu::create_bootstrap_tray_menu::h2c50152c9250541b(`
- call-tree: max_depth=3, pseudocode 节点=33(真实 decompile 落盘)。
- 关键字符串:
- `
               `
- `
                 `
- `tray_bootstrap_subtitletray_codex_router_statustray_quittray_account:`
- `tray_codex_router_statustray_quittray_account:`
- `tray_quittray_account:`

## Inferred
- 行为: 应用启动时构建初始(bootstrap)托盘菜单:在运行时快照就绪前的最小可用菜单。
- 接口: 初始菜单
- 副作用: tauri tray 初始化

## Delta vs 1.0.9 / 1.1.1
- NEW-in-1.1.8 backend-only(不在 1.1.1 已characterized 的 31+2 集内)。对应 changelog『Windows 一键导入修复 + 托盘图标』的托盘后端。
- 分类:backend-only characterized(角度A 符号枚举 + 角度C 已逆),不占前端 131 delta 分母。
