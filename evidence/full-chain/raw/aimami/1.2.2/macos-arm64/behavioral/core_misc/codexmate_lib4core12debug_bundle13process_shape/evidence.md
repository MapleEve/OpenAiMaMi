# evidence — codexmate_lib4core12debug_bundle13process_shape (mac 1.2.2) NEW delta

## Confirmed
- owner 0x1003f0c80; call-tree depth=6 节点=22(真实decompile, 截断守卫)。
- 关键字符串: `    tell application id \"com.openai.codex\" to quit\n`, `-eCFBundleExecutableContents/MacOScodex_processlaunch_ready`, `-extractTimedOutsegmentsoriginal------------------------`, `-ocodexmate_lib::platform::process`, `-voice-audio-level`, `/Applications`, `/usr/bin/plutilraw`, `<string-with-nul>`, `CFBundleExecutableContents/MacOScodex_processlaunch_ready`, `Contents/Info.plist/usr/bin/plutilraw`, `Contents/MacOScodex_processlaunch_ready`, `application id \"com.openai.codex\" is running`
- 副作用: `Command`, `File`, `serde_json`, `spawn`

## Inferred
- 新命令行为。
- 

## Delta
- 1.1.8→1.2.2 新增命令。
