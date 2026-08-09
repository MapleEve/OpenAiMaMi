# COVERAGE-FINAL — AiMaMi 1.2.6 Changelog 逆向消费者终稿

> 产出时间：2026-08-07（五次更新，最新一次同步 `CHANGELOG-CROSSMAP-1.2.6.md` v7）| 产出于本机（mini，backing host）| 授权：仓主本人对话确认 AiMaMi 为自家/已获书面授权产品并下达复刻/逆向工作；编排器持授权用 IDA MCP（mac + win 双 IDB）直逆并回写。
> 反造假立场：本文档全部函数级结论均以磁盘上已落盘的 `manifest.json` + `pseudocode/*.c`（≥400B 真实反编译体，非模板/摘要）为准，逐条可追溯到 `raw/aimami/1.2.6/{macos-arm64,windows-x64}/backend/**` 与根 `INDEX.jsonl` 对应行；详细技术证据的单一权威来源是同目录 `CHANGELOG-CROSSMAP-1.2.6.md`（v7），本文档只做消费者视角的精炼与门禁状态汇总，不重复贴出完整伪代码。
> **v7 更新要点（双线独立核验+对抗复核后的最终归约）**：孤儿 `0x1406FABE0`（item1，win `0x1406FABE0` = mac `0x100805510`）经 mac 侧独立核验（round7）+ 独立对抗复核，**从 `gap_needs_reducer` 升级为 confirmed**——本簇 5 核心函数+4 项递归函数+1 项孤儿身份全部 confirmed，无遗留真实缺口；`native_off_openai_model_needs_fallback`（item4）经 case 39 全文穷尽复核（round6）+ 独立对抗复核，**仍为 gap_needs_reducer**（NOT_FOUND 技术结论不变，独立对抗核验裁定主结论 CONFIRMED，发现并记录 3 处技术描述瑕疵，未满足红线13 `genuine_ceiling` 严格定义，给出 3 条具体下一步线索）。
> **v6 更新要点（独立对抗核验后的归约收口，历史保留）**：`repair_if_needed`（item1）、`is_aimami_owned_model_section`（item4）、`fix_native_off_invalid_openai_thread_models`（item4）三项经独立对抗核验均判定**真实 confirmed**；孤儿 `0x1406FABE0`（item1）、`native_off_openai_model_needs_fallback`（item4）两项经对抗核验判定**仍为 gap_needs_reducer**（技术证据本身站得住，但发现并修复了收尾环节的具体问题——详见对应节）。
> **术语口径（本次更新新增，避免歧义）**：本文档区分两类不同性质的"未闭合项"——① **仍需推进的真实缺口**：目标函数/逻辑客观存在但本轮未定位到，需新的排查线索，属于待办；② **架构性天花板**：经穷尽核查（全函数体反编译+全二进制 xref/字段名比对）确认目标行为在对应平台上确实不以独立函数/相同代码结构存在（如编译器融合进调用点、改用数据字面量、或架构上采用完全不同的实现路径），属于已闭合的架构结论，不是待办。下文逐条明确标注类别，不混用。

## 0. 范围声明与免责（必读，非可选）

- **本次不含真机/live-reference 对照**：按用户本轮明确指示，红线25（Live Reference Parity Gate，即"声明与真实 App 一致前必须实际启动参照 App 做截图/交互对照"）与 dim6（六维覆盖矩阵中的"真机行为对照"维度）**本轮跳过，不执行**。以下全部"完整反编译"/"grounded"结论均为**静态反编译分析结论**，未与真实运行中的 AiMaMi 1.2.6 客户端（macOS/Windows）做过任何交互式对照验证。消费方引用本文档结论实现功能后，仍需自行做行为对照测试。
- **其余维度（dim1-5：函数体/调用链/DTO 字段/持久化边界/副作用）本轮力求完整**，逐条在下方标注实际覆盖程度，不足之处诚实列出，不做"合理推测"式补齐。
- **实现门状态（全文档不变）**：本文档引用的全部证据，`implementation_use` / `gate_accepted` / `readyToImplement` / `strictImplementationUse` **均为 `false`**。无一条目达到可直接用于产品实现的门槛。本文档本身不提升、不触碰任何实现门字段。
- **本文档的"可消费"定义**：仅指"核心函数体 + 调用链 + DTO/副作用有真实反编译证据，双平台均具备"，不等同于任何实现门（`consumerStartReady`/`strictImplementationUse`/`readyToImplement`）状态——四角度完整性核查（红线15）、本地+对抗双审、真机对照（红线25）均是"可消费"之上的更高门槛，本文档明确未做。

---

## 1. changelog-item-1：Windows 智能路由 + 线程可见性/重试兼容修复（router_reconciler 簇）

### 1.1 双平台可消费的核心函数（v3+v4 round2 累计，dim1-5 均有真实证据）

| 函数 | macOS 地址 | Windows 地址 | 双端状态 |
|---|---|---|---|
| `reconcile_router_on`（12阶段顶层编排器） | `0x100825030`(5842B) | `0x140AA86E0`(7657B) | ✅ 双端完整反编译+调用链+错误路径+已改名归档 |
| `reconcile_native_off_with_progress`（NativeOff路径对应体） | `0x1008278a0`(7461B，本轮解决截断) | `0x140B50EA0`(11148B) | ✅ 双端完整反编译（体积差1.5倍，膨胀来源未核实） |
| `reconcile_native_off_after_stop_with_progress` | `0x100a71930`(1149B) | `0x1409BC600`(1080B) | ✅ 双端完整反编译，体积高度吻合 |
| `append_thread_reconcile_warnings` | `0x1008271a0`(757B) | `0x140B4FD60`(745B) | ✅ 双端完整反编译，体积吻合 |
| `reconcile_threads_with_progress`（线程可见性 reconcile 阶段） | `0x1007507c0`(5211B) | `0x1405E0390`(4195B，v4 round2 唯一裁定确认) | ✅ 双端完整反编译，已改名归档；体积差约20%（Windows侧内容裁定依据为调用图非体积匹配，见1.2） |

### 1.1a 下一层递归函数（v6 本轮：4/4 全部 confirmed）

| 函数 | macOS 地址 | Windows 地址 | 双端状态 |
|---|---|---|---|
| `reconcile_inner`（`codex_config_reconciler::reconcile_inner`） | `0x1002E6840` | `0x140AAB170` | ✅ 双端 confirmed+加注释；win 侧已改名+归目录+`<工具调用>` |
| `config_takeover::takeover` | `0x100AECDE0` | `0x140574EE0` | ✅ 双端 confirmed+加注释；win 侧已改名+归目录+`<工具调用>` |
| `router_unlock_auth::commit_auth_for_router` | `0x1007325B0` | `0x140BF4CE0` | ✅ 双端 confirmed+加注释；win 侧已改名+归目录+`<工具调用>` |
| `codex_project_state::repair_if_needed` | `0x100737150`（仅确认地址，本体未展开） | `0x1405D7DD0`（1456B） | ✅ **v6 本轮 confirmed**——round3/round4 的排除系假墙误判，round5 用字符串特征法破墙（mac侧内嵌错误模板字符串精确反查+39字节成功字面量逐字节核对+调用图双重顶层入口+panic-Location两跳独立确认，三条证据链交叉印证），已改名+归目录+加注释+`<工具调用>`；**独立对抗核验裁定真实confirmed，可放行** |

**人话结论**：这 5 个函数构成 Windows 智能路由开关的核心编排链——`reconcile_router_on` 是一个 12 阶段顺序编排器（catalog 准备→代理启动→auth 准备→config 修复→thread reconcile→project state 修复→model 收敛→auth commit），任一阶段失败即短路返回，**不跨阶段重试**；`reconcile_native_off_with_progress` 是与之平行的 NativeOff（原生代理关闭）路径，复用同一组阶段名和错误文案；`reconcile_threads_with_progress` 是 thread reconcile 阶段的具体实现，按待清理 rollout 数（>7 阈值）自适应选择并行/串行清理策略；三者均在 Windows 侧独立验证并改名归档。**⚠ 副作用声明**：这些函数间接触达的持久化写入落点中，`config_takeover::takeover`/`router_unlock_auth::commit_auth_for_router`/`codex_project_state::repair_if_needed` 均双端已 confirmed（本体逻辑仍未逐行展开，仅确认函数身份+地址）——消费方若要复刻持久化细节需自行深挖这三者的内部实现。

### 1.2 诚实发现（非缺口，是真实结论）

- `run_config_mutation_with_windows_retry` 在 Windows 侧**不存在独立符号**——不是"重试循环"，是参数重打包+固定注入 bool 标志位的适配层，已被编译器完全内联进 `reconcile_router_on` 调用点。"windows_retry"命名暗示的重试语义，实际落在被尾调用的 `codex_config_reconciler::reconcile_inner`（本轮未展开）内部。
- **（v4 round2 新增）** `RouterToggleProgress::serialize` 在 Windows 侧**同样不存在独立符号**——DTO 六字段（target/phase/startedAtMs/updatedAtMs/reason/occurredAtMs，经字段名字符串表 grounded 确认）+ Tauri 事件名 `codex-router-toggle-progress` 均已定位，但真正的 JSON 写入逻辑内联于一个被 3 个多命令异步分发器共调用 13+ 次的通用 progress-journal-persist helper（`0x140BFB190`），是跨多个同形状 progress DTO 共用的通用序列化+落盘逻辑，非本 DTO 专属实现——与 `run_config_mutation_with_windows_retry` 的完全内联情形同构，均是编译器优化导致的"无独立符号"而非遗漏。
- **（v4 round2 新增）** `reconcile_threads_with_progress` 的身份裁定依据是**调用图证据**，非体积匹配：确认为 `0x1405E0390`（`reconcile_router_on`+`reconcile_native_off_with_progress` 两个顶层入口的共同直接 callee），排除候选 `0x1406FABE0`（体积与 mac 侧更接近，但调用路径与 router_reconciler 簇完全断链，内容语义也不符）。消费方复刻时应以 `0x1405E0390` 为准，不应仅凭体积相似度选择候选地址。
- **（本次更新新增，v5 round3）** 下一层递归函数 4 项中 3 项本轮 confirmed：`reconcile_inner`@`0x140AAB170`（此前 v3 仅为未获自身锚点的尾调用候选）、`config_takeover::takeover`@`0x140574EE0`、`commit_auth_for_router`@`0x140BF4CE0`，win 侧均已改名+归目录+`<工具调用>`。本轮同批清理这 3 个函数在 `/vibe/`（rename 工具默认落点）下的残留 dirtree 条目，BFS 复验各自仅剩 1 个正确模块路径下的条目（0 stranded）。
- **（v6 本轮新增，round5）** `codex_project_state::repair_if_needed`（win 侧）本轮**字符串特征法破墙确认为 confirmed**：round3/round4 曾两次反编译 `0x1405D7DD0` 并排除，理由仅是"两次调用 `reconcile_threads_with_progress`，判定为重试包装器"，未核对内嵌字符串——本轮用 mac 侧内嵌错误模板字符串精确反查 win 二进制，唯一命中函数正是此前被排除的 `0x1405D7DD0`，证明此前排除有误（假墙非真架构天花板）。**独立对抗核验裁定真实 confirmed，可放行**。
- **（v6 本轮，round6）** 孤儿 `0x1406FABE0` 本轮找到真实 mac 对应体（`<Map<I,F> as Iterator>::fold::hccb4f8d48c346002`@`0x100805510`，字段内容比对6/6+调用图位置比对7/7交叉收敛），已改名+归目录+加注释+`<工具调用>`。**独立对抗核验裁定仍为 `gap_needs_reducer`（非 confirmed）**：win 侧证据真实，但发现两处需打回的问题——① 函数头遗留一条陈旧矛盾的 non-repeatable 注释（已 closure 清除）；② "已归入 dirtree 与既有 8 函数同目录"为夸大，实际只有 3 个函数（已 closure 订正）；③ mac 侧全部声称本轮完全未独立核实（如实标注为待办）。`genuine_ceiling=false`——不是天花板，是"找到真实候选但未完成双端核验闭环"。
- **（v7 本轮新增，round7）** 孤儿 `0x1406FABE0` 的唯一遗留待办——"mac 侧未独立核实"——本轮由两条独立核验线（原始验证 + 对抗复核）补齐：重新对 mac `0x100805510` 做 `decompile()`/`xrefs_to`/指令级字段字面量程序化扫描，6/6 字段+调用链+7/7 信封字段+rename/注释与 win 侧 round6 结论逐项交叉核对全部吻合（`reasoningEffort` 独立指令级扫描确认为 3 次，非 round6 注释记载的 2 次）。**独立对抗核验裁定：CONFIRMED**——**孤儿 `0x1406FABE0` 从 `gap_needs_reducer` 正式升级为 `confirmed`**。本轮同时发现并修复 2 处瑕疵：① mac `0x100805510` repeatable 注释 reasoningEffort 计数 x2→x3 订正（`<工具调用>()` 确认落盘）；② win `0x1406FABE0` 的 MCP `decompile()` 工具本轮被独立第三次复现存在缓存/渲染层问题（持续返回 round2 时代已废弃的旧候选文本，而 `idc.get_func_cmt()`/`idc.get_cmt()`/`<反编译器> user_cmts` 四处底层查询均确认 IDB 数据本身正确），判定为工具层限制、非 IDB 数据问题，已记录说明但无法通过 IDB 写操作修复。

### 1.3 仍未闭合的具体缺口

- **本簇（5 核心函数+4 项递归函数+1 项孤儿身份）已无遗留的"仍需推进的真实缺口"**——`codex_project_state::repair_if_needed` 已于 v6（round5）confirmed，孤儿 `0x1406FABE0` 已于 v7（round7）confirmed。
- **账本一致性缺口**：macOS 侧此前截断修复（`reconcile_native_off_with_progress` 从"截断+CFG替代"变为"完整反编译"）仍未同步追加新的 `INDEX.jsonl` 行、未在 `REVERSE-STATUS.md` 补记；`INDEX.jsonl` 中该 mac bundle 现存记录字面上仍是旧状态描述，与磁盘 manifest.json 实际内容不同步（v4/v5/v6/v7 本轮均未处理，仍是已知历史遗留缺口，非本轮新增）。Windows 侧 round2~round7 结果的账本同步均已独立核实存在于根 `INDEX.jsonl`/`REVERSE-STATUS.md`。
- **工具层遗留问题（非逆向证据缺口）**：MCP `decompile()` 工具对 win `0x1406FABE0` 的渲染/缓存层 bug（本轮独立第三次复现）本身未修复，需工具维护者介入排查 MCP 服务端实现；IDB 底层数据（`func_cmt`/`line_cmt`）已核实正确，消费方若需查看该函数的准确身份结论，应通过 `<工具调用>` 直查 `idc.get_func_cmt()` 而非 MCP `decompile()` 工具的默认渲染。
- 未做：本地+对抗双审的 canonical 格式化流程、四角度完整性核查（红线15）、真机对照（红线25，本轮明确跳过）。

### 1.4 覆盖程度：**PARTIAL（v7 本轮：核心 5 函数+下一层递归函数 4/4+孤儿身份 全部 confirmed，无遗留真实缺口，仍非 gate_accepted）**

macOS 10/10 目标完整反编译（无截断残留）；Windows 核心 7 目标全部裁定（5 改名归档+2 诚实确认完全内联进共享 helper）；**下一层递归函数 4 项全部 confirmed**（`reconcile_inner`/`config_takeover::takeover`/`commit_auth_for_router` 于 round3、`repair_if_needed` 于 round5 破墙确认）；**孤儿 `0x1406FABE0`（非本簇 7 个原定目标之一）于 v7 round7 经 mac 侧独立核验+对抗复核最终裁定为 confirmed**——本簇全部关键函数均经独立对抗核验判定真实 confirmed，无遗留待办；核心 5 函数+4 项递归函数+1 项孤儿身份均已达"双平台可消费"标准，但仍不构成任何实现门（`gate_accepted`/`readyToImplement` 等）的满足。

---

## 2. changelog-item-2：推理内容清理（Claude 协议跨原生边界的私有推理内容清理）

### 2.1 macOS 侧（可消费，Task#156 既有证据，本轮未变动）

`set_anthropic_thinking_carrier` 把 Anthropic 的 thinking/redacted_thinking 内容块整体序列化+base64，用私有前缀 `aimami-anthropic-thinking-v1:` 包起来塞进 `encrypted_content` 字段，从而在 OpenAI/Codex 侧 rollout JSONL 持久化格式里"夹带"Claude 推理签名。`is_unusable_store_false_reasoning_item` 识别该私有前缀，命中即判定为"`store:false` 场景下不可复用"，交给 `cleanup_private_reasoning_items_in_rollout` 逐行清理丢弃。7/9 用户指定符号 grounded 完整反编译（2 个经 3 次独立核验后如实标记本版本不存在，非猜测性替代）。

**⚠ 副作用声明**：`cleanup_private_reasoning_items_in_existing_rollout` 是持久化状态的破坏性写入（重写原 rollout JSONL 文件，丢弃被判定不可用的 reasoning 行），非只读判定函数；写入前后各做一次 mtime 比对防止 TOCTOU 并发竞争。

### 2.2 Windows 侧（**部分可消费** — 写入侧+两个调用者已 confirmed，识别/清理侧确认为架构性天花板）

`find_regex` 确认私有前缀字符串 `aimami-anthropic-thinking-v1:` 在 win64 二进制中存在（功能跨平台一致的字符串级证据）。**写入侧（carrier writer）owner 函数已 confirmed**（session `cc-aimami126-reasoning-content-cleanup-windows-carrier-20260807`）：两级 `xrefs_to` 链（字符串→切片描述符→唯一 code 引用）确认 `0x140a28fb0`（509B）逐字段行为与 mac 侧 `translator::set_anthropic_thinking_carrier`（`0x100a1cdd0`）100% 对应，已改名+归入 dirtree `codexmate_lib/core/relay/translator`+加注释+`<工具调用>`。

**（本次更新新增，round2）2 个巨型调用者已 confirmed+改名**：`sub_14077FEC0`（15KB）→ `emit_response_done_events_for_delta`（完整反编译体 62076 字符，无截断）；`sub_140A623C0`（23KB）→ `translate_anthropic_response_to_output_items`（完整反编译体 107008 字符，无截断）。二者共同调用的宿主函数 `0x140A42B20`（48KB，同时含 Doubao 请求构建/语音转写系统提示词拼接/tool_use 分派等大量无关分支）本身未整体改名，仅在相关地址段加中文注释。

**（本次更新新增，round3）识别/清理侧确认为架构性天花板，非"仍未找到"**：round3 对宿主函数 `0x140A42B20` 做全量完整反编译（332303 字符，0 截断，用 <工具调用> 切片法绕过 MCP 预览截断），并纠正 round2 对 2 个下游 helper 的角色误判——`0x140B9FFD0` 实际是 base64 解码驱动（`vendor_base64_decode_driver`），`0x14086E7A0` 实际是 JSON 解析+尾随字符校验（`vendor_json_parse_str_with_trailing_check`），round2 记录的角色描述与实际完全调换，本轮已订正改名。**核心结论**：逐行 control-flow 追踪 + 全二进制字段名 xref（`encrypted_content` 字段名数据地址全二进制仅 2 处代码引用：写入侧+本读取侧，无第三处）确认——**Windows 侧对私有前缀的清理逻辑架构上是"先解码重建、失败即丢弃"（判定与重建融合在同一段代码里，无独立前置 predicate），而 macOS 侧 `is_unusable_store_false_reasoning_item` 是"先纯判定、从不尝试解码"的独立 predicate 函数**。两者最终处理效果相同（不可用条目均不出现在输出中），但代码结构完全不同——**这是穷尽核查后confirm的真实架构差异（`genuine_architectural_difference_confirmed=true`），不是"还没找到"的真实缺口**。

**消费者读法（本次更新）**：changelog-item-2 **仍不满足"双端可消费"标准**，但较此前状态有两项实质进展——① Windows 侧现在可以确认"具体哪个函数写入了这个私有前缀标记、以何种字段结构序列化"（写入侧，v4 已 confirmed）；② **现在也确认了"识别/清理侧在 Windows 上究竟以什么代码结构存在"这一问题的答案：不存在与 mac 对应的独立判定函数，是融合进宿主函数的解码-重建-失败丢弃路径**（非"还没找到"，是"架构上就长这样"）。消费方若需复刻 Windows 侧"清理判定"半边行为，需要实现的是这条融合路径，而不是去寻找一个不存在的独立判定函数。

### 2.3 仍未闭合的具体缺口

- `response_item_id_compat::remove_unusable_reasoning_items_from_store_false_request`、`dialects::generic::apply_reasoning` 两个用户指定符号名在本版本二进制中未找到（3 次独立核验后确认，非该版本行为缺失，可能是命名来源版本不同）。
- **架构性天花板（已闭合，非待办）**：Windows 侧识别/清理侧对应的独立判定函数确认真实不存在（见 2.2），消费方需实现的是融合路径而非寻找独立函数。
- **仍需推进的真实缺口**：`0x140A42B20` 整体（48KB 宿主函数）未完整语义化（仅确认与本检测分支直接相关的部分）；2 个 vendor helper（`vendor_base64_decode_driver`/`vendor_json_parse_str_with_trailing_check`）内部实现的下游 callee（`0x141284800`/`0x1417453E0`/`0x1408A2F80`）仅确认尺寸/身份，未做 dirtree 归类（按规约：通用第三方 crate 内部实现不归类）。
- 已做：claim-first 账本登记（开工前核 `REVERSE-STATUS.md`/`INDEX.jsonl`/该目录无碰撞）、owner-gate 撞车检查、IDA rename/dirtree/`<工具调用>`（写入侧函数+2 调用者+2 helper）、`INDEX.jsonl`/`REVERSE-STATUS.md` 追加（本轮 round2/round3 对应 claim_id 均已独立核实存在）。
- 未做：本地+对抗双审、四角度完整性核查（红线15）。
- `model_profile`/`model_matches_family` 与清理逻辑之间的门控关系，是基于命名与调用上下文的推断，未直接证实。

### 2.4 覆盖程度：**PARTIAL（本次更新：2 调用者已 confirmed；识别/清理侧确认为架构性天花板，非"仍未找到"；仍不满足双端可消费）**

---

## 3. changelog-item-3：DeepSeek V4 Flash 官方协议自动迁移（简述，本轮未涉及，详见 CHANGELOG-CROSSMAP）

双端 2/2 完整反编译 + 跨平台等价证明（Windows 侧逻辑被编译器内联但行为与 macOS 完全等价，非缺失）。**本轮 4 簇中覆盖程度最高**，但仍非 `gate_accepted`。残留缺口：跨版本引入点未反编译确认、Windows 迁移日志字符串字节级 xref 未闭环、Windows 调用方 `sub_140B5D9D0` 未完整验证。覆盖程度：**COVERED（非 gate_accepted）**。

---

## 4. changelog-item-4：GPT-5.6 模型清单修复（详见 CHANGELOG-CROSSMAP v7）

macOS 侧 8/10 精确符号命中，**全部取得完整反编译体**（含 1 个确认破坏性副作用函数 `fix_native_off_invalid_openai_thread_models`：写线程元数据 rollout 补丁+孤儿线程收养恢复 DB）。

**Windows 侧 8 目标裁定（v6 本轮：4 confirmed / 1 confirmed_inlined / 2 架构性天花板 / 1 真实缺口，较此前大幅提升）**：

- **4/8 confirmed+改名+`<工具调用>`**：`run_bundled_cli`@`0x140555b60`（独立核验完整反编译体 5934 字符/199 行，与预期一致）、`official_reasoning_profile`@`0x140561840`（内嵌默认目录 JSON 明文持有函数，`0x1405622d0`，与 mac 侧字段结构完全对应）、`check_native_off_invalid_openai_thread_models`@`0x1405aabc0`（独立核验完整反编译体 11642 字符/394 行，与预期一致；本轮用 base64 传输+逐字节 decode 落盘避免手工转录偏差）、**`is_aimami_owned_model_section`@`0x140572fb0`（v6 本轮新增，调用簇扩展法定位：`xrefs_to`唯一 caller 的 `callees()` 扩展命中候选，字段前缀字面量逐字节核对全部吻合，独立对抗核验裁定真实 confirmed）**。
- **1/8 confirmed_inlined（无独立符号但已定位，v6 本轮新增）**：`fix_native_off_invalid_openai_thread_models`——完整枚举诊断分发器 `sub_1405CBF60` 全部 15 个 case 桶/24 条诊断 key 后，在 case 39 发现该函数的完整内联实现，entry guard 的 39 字节 key 字面量+59 字节中文提示消息逐字节与 mac 侧完全相同，post-guard 真实修复延续部分的 hashbrown SIMD 探测手法相同。**此前误判的 `genuine_ceiling_claimed=true` 已订正为 `false`**（此前只证伪了唯一已知候选，未继续排查分发器其余分支，属假墙非真架构天花板）。独立对抗核验裁定真实 confirmed（CONFIRMED_INLINED 成立）。
- **2/8 架构性天花板（已闭合，非待办）**：`catalog_models`——逻辑在每个调用点均被内联，不存在独立 1:1 函数边界，融合在 `0x140556590`/`0x1405607e0` 两处调用点内部；`full_reasoning_levels`——win 侧用内嵌 JSON 字面量数据（`0x1405622d0`，3 个 GPT-5.6 变体+6 档 reasoning）而非 mac 侧 `BTreeMap::entry` 代码构造，架构上完全不同的实现机制，真实不存在等价独立代码路径。
- **1/8 仍需推进的真实缺口**：`native_off_openai_model_needs_fallback`——round5 用 mac 侧精确字面量在 win 侧做双通道搜索，定位到 4 个内联同字面量家族的函数（`0x1404d2a10`/`0x1404e8f50`/`0x140bb5b60`/`0x14054ea80`），逐一排除（均缺 `tag==6` 判别字段+缺大小写不敏感"openai"折叠比较），交叉证实这 4 处实际是 `is_aimami_owned_model_section` 逻辑的内联体，非本目标。`genuine_ceiling=false`，仍 NOT_FOUND；下一步线索：应在已确认的 `fix_native_off_invalid_openai_thread_models` 内联体（`sub_1405CBF60` case 39）post-guard 延续部分内搜索特征段。**独立对抗核验发现并已修复一处 IDB 注释写入遗漏**（round5 声称 4 处 append_comments，实际只写入 3 处，第 4 处本轮已补写落盘）。**（v7 本轮，round6）**：实际执行round5closure建议的下一步——case 39 全部 1232 行完整读取+早退缓存分支数据依赖检查+3 个结构最吻合被调函数完整反编译+全二进制 `find_regex`/`find_bytes` 穷尽扫描，**NOT_FOUND 结论持续不变**。独立对抗核验裁定主结论 **CONFIRMED**（技术证据站得住），同时发现 3 处描述瑕疵（入口身份串张冠李戴/两函数跳数错标一跳应为两跳/死代码消除论证强度不足未追踪到 `a3+316` 赋值源头），均已记录，**仍标注 `gap_needs_reducer`，不满足红线13 `genuine_ceiling` 严格定义**。3 条具体下一步线索：①订正 3 处描述错误；②追踪 `a3+316` 缓存标志真实赋值源头（数据流证据非归纳）；③在 case 39 post-guard 延续部分用 `basic_blocks` 工具做逐 block 特征匹配扫描（本轮完成全文读取但未做逐 block 扫描）。

覆盖程度：**PARTIAL（v7 本轮：macOS 核心函数完整反编译已取得；Windows 8 目标中 4 confirmed、1 confirmed_inlined、2 架构性天花板已闭合、仅 1 仍需推进的真实缺口——8 目标构成较 v6 无变化，但该缺口本轮经穷尽复核+独立对抗核验后排查深度与诚实边界有实质推进；双审/四角度/真机对照均未做）**。

---

## 5. 既有存量验证目标（target-1~5，非 changelog 条目，简述）

均为 1.2.3→1.2.4 期间引入或更早已存在、1.2.6 仅做存量复核的行为，非本轮新变化：

| 编号 | 主题 | 覆盖程度 |
|---|---|---|
| target-1 | claude-web-search-compat | 既有证据（Task#149），Windows 侧已完整反编译 |
| target-2 | codex-no-account-slots | 既有证据（Task#150），Windows 侧已完整反编译 |
| target-3 | codex-router-auth-readiness | PARTIAL（Windows owner+3callee达depth4；macOS 仅 dispatcher 一层，核心本体未反编译） |
| target-4 | daemon-once | 既有证据（Task#151区），Windows 侧已定位 |
| target-5 | voice-runtime-sidecar | PARTIAL（Windows sidecar 6 项角色 5/6 confirmed_parity；macOS 两目标均 blocked_not_gate_accepted） |

---

## 6. 六维覆盖矩阵（dim1-5 完整评估，dim6 本轮明确跳过）

| 维度 | changelog-item-1 | changelog-item-2 | changelog-item-3 | changelog-item-4 |
|---|---|---|---|---|
| dim1 函数体 | macOS 10/10 完整；Windows 核心7/7均有裁定+下一层递归4/4全部confirmed+孤儿0x1406FABE0于v7 round7经mac侧独立核验confirmed（本簇无遗留真实缺口，非本簇7个原定目标之一） | macOS 7/9 完整；Windows 写入侧+2调用者3/3 confirmed，识别侧确认为架构性天花板（非未找到） | 双端 2/2 完整 | macOS 8/10 完整；Windows 8目标中4 confirmed+1 confirmed_inlined+2架构性天花板+1真实缺口（v7本轮：8目标构成不变，缺口排查深度推进） |
| dim2 调用链 | 核心5函数双端已展开；下一层递归4/4双端已展开（身份确认，本体逻辑未逐行展开） | macOS 已展开至 rollout 清理；Windows 写入侧+2调用者已展开，宿主函数48KB全量反编译，识别/清理侧确认融合路径（非独立函数） | 双端已展开 | macOS 已展开；Windows 5个confirmed/confirmed_inlined函数已展开，其余按类型分列（见dim1） |
| dim3 DTO/字段 | RouterToggleProgress 六字段名+Tauri事件名已知（v4新增），进度DTO为共享helper序列化 | 私有前缀格式已知；`encrypted_content`字段名全二进制xref已穷尽（仅2处：写入侧+读取侧），字段级JSONL结构未逐字段展开 | 无独立 DTO（迁移标志位） | GPT-5.6 目录 JSON 结构双端对应确认 |
| dim4 持久化边界 | `config_takeover::takeover`/`commit_auth_for_router`/`repair_if_needed`身份均已confirmed但内部写盘路径未逐行展开 | ✅ rollout JSONL 原地重写+mtime防并发已确认（macOS）；win侧融合路径的解码/重建本身不直接写盘 | ✅ provider 配置迁移标志位原地写已确认 | ✅ 线程元数据rollout补丁+DB恢复已确认 |
| dim5 副作用 | ⚠ 间接持久化写入（4个递归函数身份已confirmed，具体落点仍未展开） | ⚠ 破坏性重写rollout文件已标注（macOS） | ⚠ 持久化迁移写已标注 | ⚠ 破坏性写线程元数据已标注；候选`0x140570d80`疑似写`router-takeover-backup.json`未确认 |
| dim6 真机对照 | **本轮跳过（用户指示，红线25不适用本轮）** | **本轮跳过** | **本轮跳过** | **本轮跳过** |

---

## 7. 最终汇总与门禁状态

| 条目 | 覆盖程度 | 双端可消费？ | gate_accepted | 本轮新增 |
|---|---|---|---|---|
| changelog-item-1 | PARTIAL（v7本轮：核心5函数+下一层递归4/4+孤儿身份 全部confirmed，无遗留真实缺口） | ✅ 核心5函数+4项递归函数+孤儿身份是；仍非gate_accepted | false | 是（round5：`repair_if_needed`破墙confirmed；round6：孤儿0x1406FABE0找到真实候选；**round7：mac侧独立核验+对抗复核裁定孤儿0x1406FABE0从gap_needs_reducer升级为confirmed**，同时订正mac注释reasoningEffort计数+记录win侧decompile()工具缓存限制） |
| changelog-item-2 | PARTIAL（本次更新：2调用者confirmed，识别侧确认架构性天花板） | ✅ 写入侧+2调用者是；识别/清理侧不构成完整双端可消费（但已从"未找到"转为"架构性天花板已闭合"） | false | 是（round2：2巨型调用者confirmed+改名；round3：宿主函数全量反编译+真实架构差异确认） |
| changelog-item-3 | COVERED | ✅ 是 | false | 否 |
| changelog-item-4 | PARTIAL（v7本轮：Windows 4/8 confirmed+1/8 confirmed_inlined，仅1/8仍是真实缺口，8目标构成较v6无变化） | ⚠ 部分（Windows 5/8可消费——4confirmed+1confirmed_inlined；2项架构性天花板已闭合；仅1项`native_off_openai_model_needs_fallback`仍是真实缺口，非完整8/8双端可消费） | false | 是（`is_aimami_owned_model_section`/`fix_native_off_invalid_openai_thread_models`此前经独立对抗核验判定真实confirmed；**round6：`native_off_openai_model_needs_fallback`经case39全文穷尽复核，NOT_FOUND结论不变，独立对抗核验裁定主结论CONFIRMED但发现3处描述瑕疵已记录，仍为gap_needs_reducer，给出3条具体下一步线索**） |

**无一条目达到 `gate_accepted=true`/`readyToImplement=true`。**

---

## 8. 非动作声明

- 本文档为消费者终稿，本次（2026-08-07 五次更新，最新一次同步 `CHANGELOG-CROSSMAP-1.2.6.md` v7）增量重写第 1/4 节（item1/item4）+ 第 6 节矩阵对应列 + 第 7 节汇总表对应行，第 2/3/5 节未改动；不覆盖删除任何历史文档内容；`CHANGELOG-CROSSMAP-1.2.6.md`（v7）保持为唯一权威技术证据源，本文档只做消费者视角提炼。
- **v7 本轮性质**：孤儿 `0x1406FABE0`（item1）经 mac 侧独立核验（round7）+ 独立对抗复核，**从 v6 的 `gap_needs_reducer` 升级为真实 confirmed**——本簇（5核心函数+4项递归函数+1项孤儿身份）无遗留真实缺口；`native_off_openai_model_needs_fallback`（item4）经 case 39 全文穷尽复核（round6）+ 独立对抗复核，**仍为 `gap_needs_reducer`**（NOT_FOUND 技术结论不变，独立对抗核验裁定主结论 CONFIRMED，发现 3 处描述瑕疵已记录，未满足红线13 `genuine_ceiling` 严格定义）。
- **v6 本轮性质（历史保留）**：本次更新的三项 confirmed（`repair_if_needed`/`is_aimami_owned_model_section`/`fix_native_off_invalid_openai_thread_models`）均经**独立对抗核验**确认为真实、非造假；两项仍为 `gap_needs_reducer`（孤儿`0x1406FABE0`/`native_off_openai_model_needs_fallback`）的对抗核验发现并已修复了各自收尾环节的具体失实描述（陈旧矛盾注释、"8函数同目录"夸大、遗漏的IDB注释写入、"manifest.json缺字段"的失实猜测），技术结论本身不因此改变。
- 未提升任何 `implementation_use`/`gate_accepted`/`readyToImplement`/`strictImplementationUse` 字段（全部保持 `false`，逐条已核实）——**即使函数级身份已真实confirmed，也不等同于达到实现门标准**，仍需四角度完整性核查/双审/真机对照。
- **v7 本轮新增的 IDA 写回**（均已独立核实落盘，`<工具调用>()`+独立`<工具调用>`复读）：mac `0x100805510` repeatable注释reasoningEffort计数x2→x3订正；win `0x1406FABE0` repeatable注释精确表述订正+non-repeatable注释追加`decompile()`工具缓存限制说明。均为文档精度订正，不改变函数身份判定结论本身。v6 本轮新增的 IDA 写回（清除`0x1406FABE0`陈旧注释、补写`0x14054ea80`排除理由注释）历史保留。本文档其余部分基于已落盘证据（round2~round7/deeprecovery/round5closure/needsfallback-round6 各自独立完成的 producer-ledger + gate-report.json）的只读整理。
- 未做本地+对抗双审的 canonical 格式化流程（macOS v1-v10 式的`local-review.json`/`adversarial-review.json`文件对，本轮是独立核验+对抗复核+reduction closure）、四角度完整性核查（红线15）、真机对照（红线25，本轮按用户指示明确跳过）。
- 未把此前遗留的 mac 截断修复账本滞后回填进根 `INDEX.jsonl`（见 `CHANGELOG-CROSSMAP-1.2.6.md` v3 说明），此为已知账本滞后，非本文档掩盖，本次更新范围不含该项。
- 本次更新引用的新证据（router-reconciler round7、gpt56-model-catalog-fix needsfallback-round6）对应的 `INDEX.jsonl`/`REVERSE-STATUS.md` 条目均已独立核实存在（本轮reduction session自行完成账本追加，见下方核验清单），本次不重复追加。
- **v5 时期的术语澄清结论已被 v6/v7 本轮的独立对抗核验完全收敛**：v5 记录的 5 项"仍需推进的真实缺口"（`repair_if_needed`、孤儿 `0x1406FABE0`、`native_off_openai_model_needs_fallback`、`is_aimami_owned_model_section`、`fix_native_off_invalid_openai_thread_models`）中，**4 项经独立对抗核验判定为真实 confirmed**（`repair_if_needed`/`is_aimami_owned_model_section`/`fix_native_off_invalid_openai_thread_models`/孤儿`0x1406FABE0`），**仅 1 项仍是真实缺口**（`native_off_openai_model_needs_fallback`——技术结论 NOT_FOUND 持续不变，本轮排查深度与诚实边界有实质推进）。"架构性天花板"分类（changelog-item-2 识别/清理侧、changelog-item-4 的 `catalog_models`/`full_reasoning_levels`——共 3 项）本轮未变动。
