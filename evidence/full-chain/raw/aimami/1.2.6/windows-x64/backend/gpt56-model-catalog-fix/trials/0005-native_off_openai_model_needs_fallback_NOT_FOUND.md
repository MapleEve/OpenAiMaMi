# native_off_openai_model_needs_fallback — Windows 侧本轮（第五轮深挖）仍 NOT_FOUND

- mac 符号: `codexmate_lib::core::relay::codex_diagnostic::native_off_openai_model_needs_fallback::h50928f7856ab95cc`
- mac EA: `0x100b28230`, size 860B (0x35c)
- session: 本轮红线13破假墙深挖（2026-08-07，续 `<审计会话>

## <门控>（红线17，本轮起手 + 落盘前各确认一次）

- win `server_health`（起手）：`status=ok, uptime_sec=192509.51, <反编译器>_ready=true, module="AiMaMi 1.2.6 win64.exe"`（首次调用经 Surge 代理返回 `Connection refused` 瞬时失败，按红线17重试1次后成功，判定瞬时网络抖动非真宕机）。
- mac 侧本轮无独立 IDA MCP 工具可用（deferred tool 列表未加载 `ida-pro-mcp-mac`），改用 skill 自带 `tools/<工具脚本> mac <tool> <args>` 原始 HTTP 桥接调用（`server_health` 确认 `status=ok, uptime_sec=22590.08, module="AiMaMi", <反编译器>_ready` 隐含于正常 decompile 调用成功）。
- 落盘前二次确认 win `server_health`：`status=ok, uptime_sec=193483.499`，随即执行 `append_comments` + `<工具调用>`（`<二进制路径>\AiMaMi 1.2.6 win64.exe.i64`，`ok=true`）。

## 本轮新增方法与发现（历史三类方法已在前版记录，均未复述重跑）

### 1. mac 侧完整反编译体具体字面量提取（此前仅有"SIMD HashSet"笼统描述，本轮补齐具体常量）

用 `tools/<工具脚本> mac disasm/<工具调用>` 在 mac 活体 IDB 上对 `0x100b28230` 做地址级反查（`get_operand_value` 解析 `xor rdx, cs:_anon_...` 指令的真实目标地址，而非依赖 Hex-Rays 的匿名符号名），`get_bytes` 直接读取内存，确认判定谓词的真实行为：

1. `a1[8]（tag/discriminant）== 6`，否则直接返回 false。
2. `a1[7]` 指向的 provider 字符串前 6 字节大小写不敏感精确等于 `"openai"`（`(c | 32*((c-65)<26))` 折叠比较）。
3. `a1[15]`（native_off 计数）必须 `== 0`。
4. 对 `a1[16..17]`（trim 后的 model 名）做字面量判定：
   - 长度 `==12` 且精确等于 **`"aimami_relay"`**（真实内存值，地址 `0x1016f57f4`，字节 `61696d616d695f72656c6179` = `aimami_relay`，紧邻数据非本字符串一部分）→ 立即返回 true（`LABEL_36`）。
   - 长度 `>12` 且前 13 字节等于 **`"aimami_relay_"`**（真实内存值，地址 `0x1016f589f`，字节 `61696d616d695f72656c61795f` + 后续 `\x00` 填充，独立 16 字节对齐槽）→ 同样立即返回 true。
   - 否则进入两级 SwissTable HashSet 探测：先对 `a2` 指向的 HashSet 做 `hash_one` + SIMD 16 字节分组（`_mm_cmpeq_epi8`+`_mm_movemask_epi8`+`tzcnt`）+ `memcmp` 精确探测，命中返回 true；未命中则检查 `*(a3+168)==1` 且 `*(a3+48)` 非空指针，对该处第二个 HashSet 做同样探测，命中返回 true，否则返回 false。
5. 确认调用方：mac 侧唯一调用点在 `fix_native_off_invalid_openai_thread_models`（`0x100b30fc0`）第 490 行，调用形式 `native_off_openai_model_needs_fallback(v67, (__int64*)v242, (unsigned __int64)&v216)`，其中 `v67` 是 `DiagnosticMainThreadRow` 数组指针（`v304 + 22*i`，步进 176B）。`check_native_off_invalid_openai_thread_models`（0x100b34f30）**不**调用本谓词（此前版本证据已修正此点，本轮复核一致）。

### 2. 字符串级 + 常量级搜索（`find_regex`/`find_bytes` 双通道）

- `find_regex "aimami_relay"`（string-pool 层）：命中 5 处，均属**其他模块**——`config_takeover` 的 SQL `... FROM threads WHERE ... AND model GLOB 'aimami_relay_*'`、`core::relay::manager` 的日志模板 `"upserting a relay provider"`（xref 唯一调用方 `sub_1409BE220`，模块字符串 `"codexmate_lib::core::relay::manager"`）、以及 `aimami_relay_legacy_` 变体。
- `find_bytes`（原始字节层，覆盖指令内嵌立即数，比 string-pool 多出 2 处非字符串态命中）：12 字节 `"aimami_relay"` 命中 **7 处**（`0x14180f445`/`0x1418119a8`/`0x14183dc96`/`0x1418512a5`/`0x141853511`/`0x1418638c1`/`0x14187f20e`），逐一 `xrefs_to` 后发现真正嵌入判定逻辑（作为 XOR 立即数比较，而非仅字符串常量）的函数是 `sub_1404D2A10`(1601B)、`sub_1404E8F50`(2864B)、`sub_140BB5B60`(1032B)、`sub_14054EA80`(5078B，此前轮已列为 `read_top_level_model_line` 候选)。

### 3. 全 3 个已确认函数（`run_bundled_cli`/`official_reasoning_profile`/`check_native_off_invalid_openai_thread_models`）调用图扩展

- `xrefs_to` 三者：`run_bundled_cli`(0x140555b60) 调用方为 `sub_140556590`(535B)/`sub_140560630`(315B)；`official_reasoning_profile`(0x140561840) 调用方为 `sub_140557490`(21681B，codex_catalog 主构建函数)；`check_native_off_invalid_openai_thread_models`(0x1405aabc0) 调用方为 `sub_1405CBF60`(25193B，诊断key长度分发器，第三轮已确认 case 27=本函数、case 28=`"thread_poisoned_instructions"`)。三条扩展路径均未发现新的 ~860B 孤立谓词候选；`check_` 的完整反编译体（已复核）中不含 `native_off_openai_model_needs_fallback` 的调用或内联痕迹，与 mac 侧"check_ 不调用本谓词"结论一致。
- 结论：已确认 3 函数均**不是**本谓词的调用方（mac 侧真正调用方是 `fix_native_off_invalid_openai_thread_models`，其 win 对应体本身在第三轮已被 `genuine_ceiling` 排除唯一候选 `0x1405ae4b0`），故"扩大已知调用簇半径"这条路径本身在结构上无法直接触达本谓词——除非重新定位 `fix_` 的 win 对应体（超出本轮 scope，见下方交叉线索）。

### 4. 内联可能性排查（在 4 个新发现的 aimami_relay 字面量嵌入函数中逐一反编译核对）

对 `sub_1404D2A10`、`sub_1404E8F50`、`sub_140BB5B60` 三个函数做**完整** `decompile()`（非摘要）并逐行核对是否具备本谓词的四个必要特征（tag==6 判别字段 / 大小写不敏感 "openai" 6 字节折叠比较 / native_off 计数字段 / 两级 SwissTable HashSet 回退）：

| 候选 | 大小 | aimami_relay 12/13B 匹配 | tag==6 | 大小写不敏感"openai" | 两级 SwissTable | 判定 |
|---|---|---|---|---|---|---|
| `sub_1404D2A10` | 1601B | 有（TOML `[profile."ID"]` 段名 4 路匹配之一） | 无 | 无 | 无 | 排除——TOML profile 段名分类器，非本谓词 |
| `sub_1404E8F50` | 2864B | 有（3 处内联，含 byteswap 变体） | 无 | 无 | 无 | 排除——profile/config 字段迁移校验器（含 ROLLBACK/legacy 迁移诊断） |
| `sub_140BB5B60` | 1032B | 有（4 路匹配 + 两级 SwissTable 结构，与 mac 目标整体形状高度相似） | 无（参数形态为 a1=输出指针/a2=ctx/a3+a4=str ptr+len/a5=bool，非 mac 的 row 指针形态） | 无（本函数全程大小写敏感 XOR 比较，无 32*((c-65)<26) 折叠模式） | **有**（`sub_1404C46C0` hash_one + SIMD movemask + tzcnt + `sub_14172BEB0` 比较器，两处独立探测） | 高度相似但**不等价**——额外含 `"::"` 子串排除检查（`sub_140C599B0`），mac 目标无此逻辑；判定为被多个模块共享的"provider ID 是否落入 aimami 保留/黑名单命名空间"通用分类 helper（很可能是 `is_aimami_owned_model_section` 或同族函数的实现），非本轮目标 |

`sub_140BB5B60` 的调用方为 `sub_140C1B750`(4384B) 和 `sub_140C2D520`(12540B)；后者的调用方之一是**真实保留符号** `reconcile_router_on`（0x140aa86e0，size 7657B，`has_type=true`，证明该二进制并非全模块剥符号，`codex_diagnostic`/`core::relay` 相邻源文件仍有部分函数保留 Rust 符号）。

### 5. 交叉发现（超出本轮 scope，记录供后续轮次）

`func_query "native_off"` 命中两个此前完全未知的**保留符号**：`reconcile_native_off_after_stop_with_progress`(0x1409bc600, 1080B) 与 `reconcile_native_off_with_progress`(0x140b50ea0, 11148B)。经核对，这两个符号 + `reconcile_router_on`/`reconcile_threads_with_progress`/`stability_issue`/`repair_if_needed`/`repair`/`append_thread_reconcile_warnings` 均来自**兄弟 bundle** `raw/aimami/1.2.6/windows-x64/backend/router-reconciler-windows-retry-thread-visibility/`（round3-5，另一独立逆向主题："Windows 路由重试线程可见性"），非本轮 `gpt56-model-catalog-fix` 产出。已确认 `repair_if_needed`/`stability_issue`/`repair` 属于**完全不同模块** `codex_project_state`（"Codex 项目索引"修复，非 openai 线程模型），与本谓词无关。`reconcile_native_off_with_progress` 的直接 callees 中未发现 ~860B 孤立谓词候选（已逐一核对 `append_thread_reconcile_warnings`/`sub_140B4F910`/`sub_140B50A60` 等，均为格式化/错误分类工具函数，非本谓词）；该函数**是否**即 mac `fix_native_off_invalid_openai_thread_models` 的真正 win 对应体（第三轮 `genuine_ceiling` 判定可能基于不完整候选集）是一条有价值的独立线索，但超出本轮 `native_off_openai_model_needs_fallback` 定位范围，留待专项复核。

## 红线13 判定：仍为 NOT_FOUND（非 accepted_unknown，非 genuine_ceiling）

- **非 accepted_unknown**：本轮已逐条实际尝试破法（mac 具体字面量提取、字符串+字节双通道全二进制搜索、3 个已确认函数调用图扩展、4 个新发现候选的完整反编译比对），`recovery_attempts` 已如实记录于上表。
- **非 genuine_ceiling**：红线13要求"两个不同源函数被 ICF 折叠成同一机器码，且 caller 上下文也反推不出哪个源"——本情形不满足（未发现任何候选与本谓词发生 ICF 折叠；`sub_140BB5B60` 虽形状相似但已用四项具体特征差异正面排除，非折叠歧义）。
- 如实标注 `NOT_FOUND`。已排除线索：TOML profile 段名分类（`sub_1404D2A10`）、profile/config 字段迁移校验（`sub_1404E8F50`）、provider ID 保留命名空间通用 helper（`sub_140BB5B60`，最相似但确认非本体）、`codex_project_state` 模块修复链（`repair_if_needed` 家族，模块不符）。
- 建议下一轮方向：(a) 专项重新定位 `fix_native_off_invalid_openai_thread_models` 的 win 对应体，优先核实 `reconcile_native_off_with_progress`(0x140b50ea0) 是否为其真身（若是，则从其内部 11148B 体做 `basic_blocks` 分块反编译找真正的逐行调用点）；(b) 若 `fix_` 确认后仍未见对本谓词的直接调用，考虑本谓词已被完全内联进 `fix_` 内部循环体（而非保留为独立可调用符号），需在 `fix_` 内部逐 basic block 找 tag==6+大小写不敏感openai+两级SwissTable 的组合特征段。

## 实现门状态

`implementation_use=false`、`gate_accepted=false`、`readyToImplement=false`、`strictImplementationUse=false`（未变更）。IDB 已 `<工具调用>()`（含本轮 4 处候选排除注释）。
