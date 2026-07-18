# evidence — codexmate_lib8platform7process34codex_macos_bundle (mac 1.2.2) NEW delta

## Confirmed
- owner 0x1009afe00; call-tree depth=3 节点=21(真实decompile, 截断守卫)。
- 关键字符串: `-extractTimedOutsegmentsoriginal------------------------`, `-ocodexmate_lib::platform::process`, `-voice-audio-level`, `/usr/bin/plutilraw`, `<string-with-nul>`, `CFBundleExecutableContents/MacOScodex_processlaunch_ready`, `Contents/Info.plist/usr/bin/plutilraw`, `Contents/MacOScodex_processlaunch_ready`, `called Result::unwrap() on an Err valueWouldBlock`
- 副作用: `Command`, `File`, `spawn`

## Inferred
- 新命令行为。
- 

## Delta
- 1.1.8→1.2.2 新增命令。
