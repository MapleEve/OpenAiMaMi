# evidence — resolve_daemon_binary (mac 1.1.8) — 行为后端(non-commands, 用户复审补漏)



## Confirmed
- owner: codexmate_lib::core_repository::resolve_daemon_binary @ 0x10052aec0
- call-tree max_depth=6, 节点=20(真实 decompile)。
- 关键字符串: `capacity overflowLayoutError`

## Inferred / Delta
- auto-switch daemon 生命周期(install/uninstall/check/run once)。
- NEW/behavioral backend, 1.0.9→1.1.8 delta 的非命令后端面。
