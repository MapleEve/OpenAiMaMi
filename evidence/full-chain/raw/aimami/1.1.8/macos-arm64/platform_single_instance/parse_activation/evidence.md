# evidence — parse_activation (mac 1.1.8) — 行为后端(non-commands, 用户复审补漏)



## Confirmed
- owner: codexmate_lib::platform_single_instance::parse_activation @ 0x1004175b0
- call-tree max_depth=4, 节点=30(真实 decompile)。
- 关键字符串: (少)

## Inferred / Delta
- 单实例+deeplink 唤起(changelog『一键导入』): 已运行实例的激活/URL 传递。
- NEW/behavioral backend, 1.0.9→1.1.8 delta 的非命令后端面。
