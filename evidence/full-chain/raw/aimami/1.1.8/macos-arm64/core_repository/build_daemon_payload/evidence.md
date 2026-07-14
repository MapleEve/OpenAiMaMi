# evidence — build_daemon_payload (mac 1.1.8) — 行为后端(non-commands, 用户复审补漏)



## Confirmed
- owner: codexmate_lib::core_repository::build_daemon_payload @ 0x100529f00
- call-tree max_depth=5, 节点=33(真实 decompile)。
- 关键字符串: `<string-with-nul>`, `No local account registry found yet.`, `REGISTRY_MISSING`, `listlogsHomeInfoPathUser`, `mysteryUnlockGrantsmysteryUnlockedRoutes`, `mysteryUnlockedRoutes`

## Inferred / Delta
- auto-switch daemon 生命周期(install/uninstall/check/run once)。
- NEW/behavioral backend, 1.0.9→1.1.8 delta 的非命令后端面。
