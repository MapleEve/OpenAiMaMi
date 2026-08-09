# AiMaMi 1.2.4 delta 逆向基线终稿(1.2.3→1.2.4 delta,非独立完整基线)

> 本文件是 1.2.4 delta 版本的基线终稿,与 `COVERAGE-FINAL-1.2.4.md` 配对(红线23①)。
> 1.2.3 是独立完整基线(见 `BASELINE-FINAL-1.2.3.md`);1.2.4 是 delta——基于 1.2.3 基线 + 版本 diff,只对变更面做 IDA full-chain,未变更面沿用 1.2.3 证据 + SHA 绑定。

## 1. 后端 delta 基线(mac,116 NEW-delta 函数)

### 覆盖(grounded)
- **116 mac NEW-delta App 函数**:全部 `[FULL decompile]`(无截断桩,红线13/20),按 4 份 6dims 落地:
  - `relay-translator-anthropic`(32 函数):anthropic_reasoning(7 NEW)+anthropic_history(5 NEW)+translator::stream(整体重写)+native_responses_compat+models
  - `relay-catalog-thread-diag`:codex_catalog(default_no_account_slots/normalize/validate)+codex_thread_visibility(restore_no_account_model_threads)+NoAccountModelRestoreEntry/Journal DTO
  - `relay-router-auth`(12 NEW):router_unlock_auth(commit_auth_for_router/has_restorable_real_oauth/has_usable_real_oauth_login/managed_api_key_marker_matches/should_use_no_account_mode)+router_reconciler+manager setters(set_codex_no_account_slots/set_claude_web_search_compat)+proxy_server compat
  - `repository-platform-system`:repository DTO 扩容(ApiConfig/AutoSwitchConfig/CodexMateSettings/HotspotConfig/MysteryRouteGrant/RegistryFile/Item)+platform::process::codex_bundled_cli_path(NEW)+bootstrap_cache DTO+config_takeover DTO
- **win 20 delta 锚点**:strip 产物靠命令名串/格式化闭包签名锚定,20 锚点全部 `[FULL decompile]`,主体逻辑在 mac 读全。
- **mac_verify_63 live IDA 复验**(20260808):62 added 中 34 confirmed_live + 28 icf_alias;23 removed 中 4 confirmed_removed + 19 icf_alias。4 真 removed:get_codex_router_auth_readiness/remove_mcp_server/build_catalog_bytes/ensure_auth_for_router。

### ⚠ 破坏性副作用(delta 新增)
- 1.2.4 delta 未新增无条件裸删;ensure_auth_for_router 拆分为 prepare_/commit_auth_for_router 是状态机重构(有备份/存在性兜底);rectify_invalid_thinking_signature 是纯内存修正(不落盘)。

## 2. 前端 delta(前端优先)
- 1.2.4 命令数 134(1.2.3=131),新增 3:set_claude_web_search_compat + set_codex_no_account_slots + get_claude_web_search_compat。
- DTO 扩容 1 条:replace_voice_vocabulary_kind args 增补 source/replacement/notes。
- 概念重命名:virtualAuth→noAccountMode 贯穿前端。

## 3. 规范 delta 文件(flow.md step 1 强制产出)
- `intermediate/aimami/1.2.4/macos-arm64/version-delta/`:`delta-commands.txt` + `same-commands.txt` + `removed.txt` + `VERSION-DIFF.md`
- `intermediate/aimami/1.2.4/windows-x64/version-delta/`:同上(win 侧)
- 数据源:authoritative-symbol-diff(mac x86_64 slice 符号 diff)+backend-function-diff(win)+commands-platform-coexisting-body-diff(win)+_enum_124_cmd_plat(win),已 reduce 进规范格式。

## 4. same-set 沿用(迁移规约)
- 未变更面按迁移规约直接沿用 1.2.3,不重逆。same-commands.txt 列出 icf_alias 同行为候选。
- 复用 gate 条件:owner 地址相同且 IDA 伪代码体等价(flow.md step 3)。

## 5. 门控状态
- delta 目标:strictImplementationUse(full decompile + call-tree + interface complete)
- full_leaf_100_definition_v2 六维门:见各 bundle gate-report.json
- 消费者面向终稿:COVERAGE-FINAL-1.2.4.md(本文件为其基线配对)
