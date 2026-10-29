# evidence.md — win 1.2.7 truly_undone 25 簇 win 侧深逆证据

session: `<审计会话>`
二进制: `raw/binary/AiMaMi.1.2.7 win64.exe`；IDB `<内部存储>\AiMaMi.1.2.7 win64.exe.i64`（IDA 9.3, decompiler_ready）

## 方法链（win-native，无 mac 符号依赖）

1. `server_health`: status=ok, auto_analysis_ready=true, decompiler_ready=true（2026-10-01 live）。
2. panic-Location 两跳 xref：`src/*.rs` App 路径串 151 个（排 rustc/.cargo）→ Location 结构体 → 引用函数：seed 511 fn。
3. 严格调用图传播（>=2 同模块调用者、排库函数 6669、lib.rs 不作源，10 轮收敛）：+661 → 总归属 1172 fn / 112 dirtree 目录，全部 `win 1.2.7 | module ... | attributed via ...` 中文注释落 IDB。
4. tauri 命令名精确命名：147 前端命令 → 131 handler 1:1（127 由 sub_ 改命令真名 + 注释）；12 零命中、4 歧义未命名。
5. truly_undone 25 簇逐函数 live decompile → 1070 份伪代码落盘（含上下游关联模块），0 截断 0 空桩。

## 25 簇 win 侧覆盖（manifest.json cluster 节）

- `core/account_coordination(FileLock)` → `src/core/account_coordination.rs`：1 fn 落盘。
- `core/account_io(verify_saved_oauth/oauth_snapshot_path/read_live_oauth_account_key/account_key_or_registry_fallback)` → `src/core/account_io.rs`：1 fn 落盘。
- `core/auth(credential_generation)` → `src/core/auth.rs`：1 fn 落盘。
- `core/codex_config(validate_candidate)` → `src/core/codex_config.rs`：11 fn 落盘。
- `core/debug_bundle(field_diff)` → `src/core/debug_bundle.rs`：26 fn 落盘。
- `core/oauth_refresh(credential_refresh_time)` → `src/core/oauth_refresh.rs`：7 fn 落盘。
- `core/relay/atomic_write` → `src/core/relay/atomic_write.rs`：4 fn 落盘。
- `core/relay/codex_mutation` → `src/core/relay/codex_mutation.rs`：7 fn 落盘。
- `core/relay/codex_project_state` → `src/core/relay/codex_project_state.rs`：14 fn 落盘。
- `core/relay/codex_writer` → `src/core/relay/codex_writer.rs`：3 fn 落盘。
- `core/relay/health_check` → `src/core/relay/health_check.rs`：4 fn 落盘。
- `core/relay/io` → `src/core/relay/io.rs`：1 fn 落盘。
- `core/relay/managed_blocks` → `src/core/relay/managed_blocks.rs`：39 fn 落盘。
- `core/relay/proxy_server` → `src/core/relay/proxy_server.rs`：115 fn 落盘。
- `core/relay/storage` → `src/core/relay/storage.rs`：6 fn 落盘。
- `core/relay/transition_journal` → `src/core/relay/transition_journal.rs`：2 fn 落盘。
- `core/relay/upstream_url` → `src/core/relay/upstream_url.rs`：2 fn 落盘。
- `core/repository(Repository/build_account_token_status/prefer_duplicate_snapshot_candidate)` → `src/core/repository.rs`：66 fn 落盘。
- `platform/process(is_codex_app_running)` → `src/platform/process.rs`：34 fn 落盘。
- `platform/system_volume(restore)` → `src/platform/system_volume_windows.rs`：3 fn 落盘。

## 特殊处置

- `core/relay/upstream_url`：win 无 panic-Location/模块名串；经 `<invalid relay URL>` literal xref 锚定 `0x140EF5FF0`（mac 同簇 core__relay__upstream_url.c:1318 同 literal，内容级交叉确认，非结构猜测）+ 辅助 `0x140E91160`。
- `core/relay/codex_writer`：panic-Location 串两跳至 `0x140C6F5E0`（该 fn 同时引用 codex_writer.rs 与 managed_blocks.rs 的 Location，属共享 helper，双模块标注）；另经 `router_http_contract` 串锚定 `0x140F0E1B0/0x140F21C20/0x140F51460`。
- `core/auth(credential_generation)`：经 `[AiMaMi][accounts] resolved duplicate account snapshots using credential generation and registry continuity` 日志串 xref 锚定 `0x1401E1FE0`。
- `angle_b:load_runtime_display_snapshot`：2026-10-01 判定的「win 全串扫描 0 命中 → `OPEN_NO_BACKEND_SYMBOL_BOTH_SIDES` 终态」已于 2026-10-06 被推翻——0 命中系全名搜索对池化碎片存储的假阴性（≥16B 命令名被拆 first16+last16 重叠窗口常量驻留 .rdata，全名连续字节不存在）；用户裁决「全都做完」撤销 win 侧禁实现，win handler full-chain 闭合（glue 0x1405EC7D0 三重实证 live 复验），四角度 D 改判 `already_in_canonical`；证据移至独立 leaf `commands/accounts/load_runtime_display_snapshot/`（session `<审计会话>`，strictImplementationUse=true）。mac 侧维持零符号如实标注（win-only 注册，不外推）。

## 破坏性副作用（红线20）

全量 `destructive_markers` 见 data/index.json。显著项：`src/core/repository.rs` `0x141695010` 含 ⚠RemoveDirectoryW（目录删除）。

## 已知例外

- 反编译器 null body ×1：`src/core/relay/translator.rs` `0x140320910`（7539B），如实记录于 data/index.json，不在 truly_undone 26 目标模块内。
- `/vibe/` 目录残留 2 个 ghost 别名（`0x14062A130/0x140740160`）：find_entry 权威路径均在 `/codexmate_lib/commands/account_alias/`，dirtree rename 返回 DTE_BAD_PATH 无法删除 ghost，属 IDA MCP rename 已知副作用（红线24 尾注）；0 stranded（全 1172 归属函数权威路径正确）。

## 最新 exe 重逆（2026-10-06，session <审计会话>）

触发：Oct 6 rebaseline 轮（win-latest-exe-rebaseline.json）判定 21 簇 NEEDS_REDO、458 份旧伪代码 body-changed/missing 失效；用户裁决「全都做完」。

### 方法链（全部 live <审计环境> IDB 只读，零 open_file/零版本切换/零 IDB 写）

1. **relocated 610 重锚定**：直接采信 rebaseline 匹配矩阵（reloc-masked body hash），逐记录登记 `latest_exe.ea`；旧伪代码（体哈希一致）继续有效。
2. **changed 458 后继定位多遍法**（每条确认均带内容级证据，红线13）：
   - 遍1 被调者锚：旧伪代码 sub_refs 经全量哈希映射（旧112715→最新112594 多重集）得被调者最新 EA，live 反查其 callers（3711 锚 EA），模块池约束（dirtree 1034 fn + 函数注释 1098 + Oct5 writeback-plan 1070 + panic-Location 两跳 78 模块四源合并）+ 锚稀有度加权 + 贪心 1:1。
   - 遍2 内容验证：live 提取候选函数字符串引用/尺寸/被调数做串重叠核验；AMBIG 项 live decompile（8KB 分块直写 Z:，规避 ≥32KB EINVAL）做规范化体 diff（地址/子名/数字归一后 SequenceMatcher）。
   - 遍3 模块池穷举：短池/POOL0 模块对池内全部候选反编译 diff 复合评分（body_sim+str_ov+anchor+caller-confirm）。
   - 遍4 邻域夹逼：老 EA 空间最近哈希映射邻居夹逼出新窗（≤64KB），窗内未归属函数反编译 diff。
   - 遍5 全局宽松 diff：全部未决对 ~650 已反编译函数 quick_ratio 预筛 + full ratio。
   - 字符串直查：unresolved 串 live find_bytes+xref（117 串 12 命中）。
3. **双法互证 5 例**：本自动匹配与 Oct 5 内容锚独立命中同 EA（ChatDirectToResponsesStream/AnthropicToChatStream/ChatToAnthropicStream handle_event + emit helpers 两族）。
4. **质量抽验 3 例**：repository 0x1401cb610→0x140cfec10（sim 0.789+串重叠 0.5）、sessions/health 0x140353510→0x140a78660（sim 0.651）、router_transition 0x14019f190→0x1401b9e10（sim 0.927+串重叠 1.0），签名/变量形态/串一致。

### 结果（record_disposition，见 data/index.json 逐记录 latest_exe 块）

- relocated_same_body 重锚定 610（引用旧伪代码）
- same_ea_same_body 1
- body_changed_successor_located 368（live decompile 落盘 ida/pseudocode-latest-exe/，含 22 voice 机械定位-语义跳过标注）
- split_successors_documented 1（旧 handle_event 单体 0x140e38370 拆四后继，Oct5 已文档化，interface-report handle_event_transitions_latest_exe）
- body_changed_voice_out_of_scope 5（未定位即跳过）
- body_changed_successor_unlocated 85（非 voice 如实开放）

伪代码文件：ida/pseudocode-latest-exe/ 共 377 份（Oct5 15 + 本轮 362），0 截断 0 空桩（曾发现 1 份超时批次截断件 usage_refresh 0x140b487b0，已重反编译 50455 字符全量重写并复验花括号收尾）。

### 21 NEEDS_REDO 簇收敛

18/21 项全闭（account_io×4、auth、debug_bundle、oauth_refresh、codex_project_state、codex_writer、health_check、relay/io、managed_blocks、repository×3、process、system_volume、storage）；3 项部分开放：proxy_server（26/29 定位）、codex_config（4/7）、codex_mutation（5/7）。

### 85 unlocated 明细（如实开放，不伪闭合）

translator.rs 37（模块重构：Oct5 轮已证 handle_event 单体拆四后继，本模块新旧结构 N:M）；anthropic 家族 22（anthropic_continuation 4/anthropic_history 4/anthropic_search 4/content 2/message 2/schema 2/tools 2 等，POOL0 模块无 panic-Location 串、四源归属全空）；mcp 5；codex_app_server 3；proxy_server 3；codex_config 3；codex_mutation 2；proxy_stream/router_transition/codex_diagnostic 各 2；散点 5。定位屏障：整体性 EA 重排（模块新 EA 跨度 16MB+，无地址局部性）+ 这些函数无字符串字面量 + 被调者锚被公共库函数淹没 + 最新构建归属面（Oct5 轮 win-native 归属）未覆盖这些后继函数。后续闭合路径：对 unattributed ~848 函数做模块归属传播（>=2 同模块调用者）后重跑本流水线遍3。

### 数据质量注记

- legacy_virtual_auth 0x140f6d270 与 router_unlock_auth 0x140f62060（旧对旧相似 0.789，疑 ICF twin）共指 0x140cf39a0，标 shared_successor_flagged；anthropic_replay 两条旧记录（旧对旧 0.511）共指 0x141670990，弱匹配标注。
- 0x1401e1fe0 双归属（auth.rs+repository.rs）两记录均重锚定至 0x140d15c80。
- ea='?' 2 条 upstream_url 记录（0x140e91160/0x140ef5ff0）沿用 rebaseline 文件名恢复口径。
