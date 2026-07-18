# evidence — codexmate_lib8platform17macos_main_bundle24log_mai (mac 1.2.2) NEW delta

## Confirmed
- owner 0x100a3b5f0; call-tree depth=2 节点=20(真实decompile, 截断守卫)。
- 关键字符串: `NSBundle`, `UTF8String`, `bundleIdentifier`, `bundlePath`, `failed allocating selector`, `lengthOfBytesUsingEncoding:`, `mainBundle`
- 副作用: `std::fs`, `write_all`

## Inferred
- 新命令行为。
- 

## Delta
- 1.1.8→1.2.2 新增命令。
