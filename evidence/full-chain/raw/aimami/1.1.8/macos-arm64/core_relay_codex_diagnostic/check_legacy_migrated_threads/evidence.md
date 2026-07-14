# evidence — check_legacy_migrated_threads (mac 1.1.8) — 行为后端(non-commands, 用户复审补漏)



## Confirmed
- owner: codexmate_lib::core_relay_codex_diagnostic::check_legacy_migrated_threads @ 0x1003edf60
- call-tree max_depth=2, 节点=30(真实 decompile)。
- 关键字符串: `,
      (int)`, `aimami_codex_routerwarning`, `legacy_migrated_threads`

## Inferred / Delta
- 线程 DB 迁移检查(changelog『线程DB迁移』): 检测/迁移 legacy thread 记录到新 schema。
- NEW/behavioral backend, 1.0.9→1.1.8 delta 的非命令后端面。
