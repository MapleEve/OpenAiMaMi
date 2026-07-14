# evidence — check_daemon_state (mac 1.1.8) — 行为后端(non-commands, 用户复审补漏)



## Confirmed
- owner: codexmate_lib::platform_daemon::check_daemon_state @ 0x1001ea0b0
- call-tree max_depth=2, 节点=30(真实 decompile)。
- 关键字符串: `<string-with-nul>`, `Once instance has previously been poisoned`, `called Result::unwrap() on an Err valueWouldBlock`, `listlogsHomeInfoPathUser`, `posix_spawn_file_actions_addchdir`, `posix_spawn_file_actions_addchdir_np`

## Inferred / Delta
- auto-switch daemon 生命周期(install/uninstall/check/run once)。
- NEW/behavioral backend, 1.0.9→1.1.8 delta 的非命令后端面。
