# evidence — default_debug_bundle_file_name (mac 1.2.2 / win 1.2.1) — OWNER_UNRESOLVED

真实 tauriInvokeWrapper 命令(前端 index-De7J35HL.js `re("default_debug_bundle_file_name")`, argKeys=[])。
但双平台后端 owner 未解: mac 无独立符号(命令名在 rodata 拼接块)、win 字符串 0 命中。
判定: 经 tauri::generate_handler! 宏注册的小型文件名生成命令, owner 无独立符号, 需命令 dispatcher table 分析才能定位。低价值(返回默认 debug bundle 文件名)。
