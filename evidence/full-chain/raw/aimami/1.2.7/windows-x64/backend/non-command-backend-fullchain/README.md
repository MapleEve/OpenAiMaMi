# non-command-backend-fullchain — win 1.2.7 truly_undone 25 簇函数级深逆

四角度 D 分类（`intermediate/aimami/1.2.7/windows-x64/version-delta/four-angle-d-classification.json`）登记的 win 1.2.7 truly_undone 角度 C 面——25 簇非命令业务后端函数的 win 侧深逆 leaf。session `<审计会话>`。

## 内容

- `ida/pseudocode/`：1070 份 win live decompile（反编译器 implementation leaf），按 `<module>__<name>_<ea>.c` 命名；0 截断桩、0 空桩。
- `data/index.json`：全量函数索引（module/ea/name/size/destructive_markers）。
- `call-tree.json`：bundle 内调用边（win strip 无符号，边由伪代码交叉引用导出）。
- `interface-report.json`：函数级清单。
- `manifest.json`：25 簇 -> win 模块映射与覆盖计数。
- `gate-report.json`：生产者自检 PASS（含 1 个已知 反编译器 null：translator.rs 0x140320910，不在 26 目标内）。

## win strip 模块归属方法（win-native，红线24 三层）

1. panic-Location 源码路径两跳 xref（串 -> Location 结构体 -> 函数）：seed 511 fn。
2. 严格调用图传播（单一模块 且 >=2 同模块已归属调用者，排 rustc/.cargo 库函数，lib.rs 不作源）：收敛至 1172 fn 归属，112 目录。
3. tauri 命令名串 xref 精确命名：147 命令中 131 个 handler 1:1 命中（127 rename sub_ -> 命令名）；12 命令 win 二进制全串扫描零命中（其中 load_runtime_display_snapshot 后经 2026-10-06 判定为池化碎片假阴性，win handler full-chain 已闭合于独立 leaf，见「边界」），4 命令 2-fn 歧义未命名。

upstream_url / codex_writer / auth 无 panic-Location 串，经内容锚 xref 恢复：`<invalid relay URL>` literal（mac parity core__relay__upstream_url.c:1318）、`router_http_contract`、`[AiMaMi][accounts] resolved duplicate account snapshots using credential generation...`。

## 破坏性副作用

全量扫描落 `data/index.json` 的 `destructive_markers`：`core/repository` 0x141695010 含 RemoveDirectoryW（目录删除）。IDB 注释已按红线20 对 remove_file/DeleteFile 族打标。

## 边界

- angle_b `load_runtime_display_snapshot`：2026-10-01 的 OPEN_NO_BACKEND_SYMBOL_BOTH_SIDES 终态已于 2026-10-06 改判推翻——0 命中系全名搜索对池化碎片存储的假阴性（≥16B 命令名拆 first16+last16 窗口常量，全名不连续）；用户裁决「全都做完」撤销 win 侧禁实现，win handler full-chain 闭合，四角度 D 改判 already_in_canonical，证据移至独立 leaf `commands/accounts/load_runtime_display_snapshot/`（session `<审计会话>`，strictImplementationUse=true）；mac 侧维持零符号如实标注（win-only 注册，不外推）。
- voice 相关全部排除（既定 scope）。
- dim6 留白。
