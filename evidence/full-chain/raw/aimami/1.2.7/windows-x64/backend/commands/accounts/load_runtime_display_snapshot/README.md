# load_runtime_display_snapshot — win 1.2.7 最新 exe full-chain leaf

命令 `load_runtime_display_snapshot` 的 Windows 后端全链证据包。本 leaf 由用户 2026-10-06 裁决「全都做完」触发：撤销 win 侧禁实现（Oct 6 池化命名轮呈报的三重实证已被用户采信），补全 dim1-5 证据链。

- 二进制锚点：<内部存储>\AiMaMi.1.2.7 win64.exe（sha256 51cb41b613aaa50f410d606e1c4271b1de34576b497a1cba0f734eba46279faf，112594 函数，IDA <审计环境>，server_health live 实测 module=AiMaMi.1.2.7 win64.exe）
- glue：0x1405EC7D0（380B，已命名+归目录 /codexmate_lib/commands/accounts/）
- 模块归属：src/commands/accounts.rs（runtime-state 字符串簇邻接 codexmate_lib::commands::accounts 模块路径串 + 全部 writer feeder 在 commands/accounts，panic-Location 两跳真值互证）
- 注册：win-only（dispatcher 池化碎片比较 + .rdata 注册表项 0x141ea6c70 首字段=glue RVA 0x5ec7d0，本轮 live 独立复验）；mac 1.2.7 零符号维持如实标注
- 语义：零参数只读命令，返回进程内全局 runtime display state（880B @0x142239468）快照；状态由 commands/accounts 家族命令维护并经 "runtime-state-updated" 事件广播
- 前端 CCF：loadRuntimeDisplaySnapshot，argKeys=[]（零参数，与 glue 零用户参数分析互证；api-map.json）

七件套：README.md / manifest.json / evidence.md / interface-report.json / call-tree.json / gate-report.json / data/producer-ledger.json；伪代码 12 份在 ida/pseudocode/。

门控状态见 gate-report.json：strictImplementationUse=true（win 侧单命令面），readyToImplement 维持 false（dim6 留白 + mac 侧零符号如实标注）。
