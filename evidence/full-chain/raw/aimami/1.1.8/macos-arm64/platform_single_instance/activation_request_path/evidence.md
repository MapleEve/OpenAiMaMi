# evidence — activation_request_path (mac 1.1.8) — 行为后端(non-commands, 用户复审补漏)



## Confirmed
- owner: codexmate_lib::platform_single_instance::activation_request_path @ 0x100417800
- call-tree max_depth=8, 节点=34(真实 decompile)。
- 关键字符串: `HOMENUM0NUM1NUM2NUM3NUM4NUM5NUM6NUM7NUM8NUM9`, `aimami-activate.requestfailed to spawn thread`, `capacity overflowLayoutError`

## Inferred / Delta
- 单实例+deeplink 唤起(changelog『一键导入』): 已运行实例的激活/URL 传递。
- NEW/behavioral backend, 1.0.9→1.1.8 delta 的非命令后端面。
