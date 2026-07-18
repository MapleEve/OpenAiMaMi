# evidence — codexmate_lib8platform7process21open_macos_app_bun (mac 1.2.2) NEW delta

## Confirmed
- owner 0x1009ac0a0; call-tree depth=2 节点=20(真实decompile, 截断守卫)。
- 关键字符串: `<string-with-nul>`, `called Result::unwrap() on an Err valueWouldBlock`, `posix_spawn_file_actions_addchdir`, `posix_spawn_file_actions_addchdir_np`
- 副作用: `Command`, `File`, `spawn`

## Inferred
- 新命令行为。
- 

## Delta
- 1.1.8→1.2.2 新增命令。
