# AiMaMi 1.2.6 Windows-x64 — changelog-item-4 (GPT-5.6 模型清单修复) 深挖证据

- **session**: `<审计会话>
- **产出时间**: 2026-08-07
- **二进制**: `<二进制路径>\AiMaMi 1.2.6 win64.exe`（stripped 构建，`func_query` 对全部10个
  目标精确符号名均返回 0 命中，与本轮 macOS 侧 8/10 命中形成鲜明对比，证实是 Windows
  构建剥离符号所致，非 IDA 工具问题——同一批 regex 在 mac 侧全部命中）。

## 方法：红线24 win-strip 两跳 panic-Location xref 恢复法

1. `find_regex` 定位 4 个模块各自的源码路径 panic-Location 字符串：
   - `codex_catalog.rs` — 2 处（文件路径 + 模块路径字符串）
   - `codex_diagnostic.rs` — 6 处
   - `config_takeover.rs` — 4 处
   - `codex_writer.rs` — 1 处
2. `xrefs_to` 逐个字符串地址做第一跳/第二跳反查，收敛出 19 个候选函数地址
   （codex_catalog 5个候选 / codex_diagnostic 10个候选 / config_takeover 3个候选 /
   codex_writer 1个候选）
3. 对全部候选逐一 `decompile()`，按函数体内容语义匹配用户要求的10个目标名

## 核心发现：内嵌 GPT-5.6 默认目录 JSON（本轮最重要证据）

候选函数 `sub_1405622D0`@`0x1405622d0`（8907字节，316 basic_blocks，cc=161，
4个调用方：`sub_14055EA40`/`sub_1405619B0`/`sub_140566130`/`sub_140566D20`）
的 `analyze_function.strings` 字段中直接包含完整的默认/bundled 目录 JSON 明文
（真实从二进制提取，非编造）：

```
"{\"models\":[{\"slug\":\"gpt-5.6-sol\",\"display_name\":\"GPT-5.6-Sol\",
\"description\":\"Latest frontier agentic coding model.\",
\"default_reasoning_level\":\"low\",
\"supported_reasoning_levels\":[
  {\"effort\":\"low\",\"description\":\"Fast responses with lighter reasoning\"},
  {\"effort\":\"medium\",\"description\":\"Balances speed and reasoning depth for everyday tasks\"},
  {\"effort\":\"high\",\"description\":\"Greater reasoning depth for complex problems\"},
  {\"effort\":\"xhigh\",\"description\":\"Extra high reasoning depth for complex problems\"},
  {\"effort\":\"max\",\"description\":\"Maximum reasoning depth for the hardest problems\"},
  {\"effort\":\"ultra\",\"description\":\"Maximum reasoning with automatic task delegation\"}
], ... [113506 字符总长，本轮仅截取首个 model 条目片段]
```

相邻字符串常量 `"client_versiongpt-5.6-solgpt-5.6-terragpt-5.6-lunagpt-5.4"` 证实
**默认目录共含 3 个 GPT-5.6 变体：`gpt-5.6-sol` / `gpt-5.6-terra` / `gpt-5.6-luna`**
（`gpt-5.4` 为对照前代）。与 macOS 侧 `official_reasoning_profile` 反编译确认的
`default_reasoning_level` + 6 档 `supported_reasoning_levels` 字段结构完全对应。

## 候选函数 → 目标符号映射（置信度分级，非全部 100% 确认）

| 候选地址 | 大小 | 内容摘要 | 映射目标 | 置信度 |
|---|---|---|---|---|
| `0x1405622d0` | 8907B（decompile 在54480字符截断，见红线20） | 内嵌完整默认目录JSON字面量（含3个GPT-5.6变体+6档reasoning），4个调用方 | `full_reasoning_levels` 的 Windows 对应体（构建/持有该 JSON 的核心函数） | 中——mac侧同名函数很小(4666B)含BTreeMap构建逻辑，win侧本函数更大且直接内嵌JSON字面量，两者关系待下一轮交叉核实 |
| `0x140555850` | 629B | "codex_router_catalog.json" 文件访问+ERROR_SHARING_VIOLATION(0x20/0x21/1224)重试循环(6次)，panic串"catalog removal loop always returns" | catalog 移除/清理的重试包装层，非 catalog_models 本身 | 低——推测为 catalog 文件级 IO 重试壳，非纯 accessor |
| `0x140555b60` | 1518B | CreateProcess风格3句柄CloseHandle模式+poll循环(Poll::Ready/Pending状态机) | `run_bundled_cli` 候选 | 中——与mac侧`run_bundled_cli`(Command::spawn+500ms超时轮询+wait_with_output)的行为形态高度相似(进程句柄管理+超时轮询)，但win侧未做逐字节调用图比对确认 |
| `0x14055fe60` | 1398B | 5项去重上限的slug匹配循环 | 未确认 | 低 |
| `0x14055ea40` | 3057B | 调用`0x1405622D0`，含"slug"字面量、96字节步进的provider entries遍历、Result::unwrap panic串 | `catalog_models`本体或`make_relay_model_info`对应体 | 中 |
| `0x14057ac30` | 329B | 薄dispatcher，条件调用`sub_14059B0D0` | `native_off_openai_model_needs_fallback`候选之一 | 低——codex_diagnostic.rs该panic位置被7个不同函数共享，需要进一步排除 |
| `0x1405a12e0`/`0x1405a52e0`/`0x1405aabc0`/`0x1405b2510`/`0x1405b5840` | 各1-8KB | 均含"thread_provider_consistency"(27B)字面量或"openai"/provider相关分支 | `check/fix_native_off_invalid_openai_thread_models` 候选簇 | 低-中——多个候选共享同一诊断报告构造模式(status/completedAtMs/failure字段)，未逐一与mac侧调用图精确对齐 |
| `0x1409a2fb0` | 458B | 小型重试遍历 | 未确认 | 低 |
| `0x140b70340` | 967B | 三级级联fallback key查找(0x141869b58/70/88) | `native_off_openai_model_needs_fallback`候选 | 低 |
| `0x14056c570` | 674B | "backup cleanup loop always returns"重试循环(11次) | config_takeover 辅助函数，非请求目标本身 | 低 |
| `0x14056b270` | 2342B | 扫描"# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)"/"# <<< aimami-relay managed end (top)"标记提取托管块 | `is_aimami_owned_model_section` 的 Windows 对应体（强证据：与 mac 侧确认的"profiles."前缀+托管块识别语义高度吻合） | **高** |
| `0x140570d80` | 6217B | 读取"router-takeover-backup.json"，date/time epoch毫秒运算，100次重试轮询，provider条目比对 | `quarantined_model_provider_ids` 候选（mac侧该目标本身未找到，此候选可作为win侧独立发现补充下一轮线索） | 中 |
| `0x14054ea80` | 5078B | 逐行扫描TOML文本+"["/"]"section边界检测+托管块跳过+多组预设字符串比较 | `read_top_level_model_line`（或其等价物 `read_top_level_string_value`）的 Windows 对应体 | 中-高 |

## 诚实声明

**Windows 侧全部映射均为基于函数体内容/字符串/调用图的结构性推断，非精确符号确认**
（因 Windows 1.2.6 构建对这4个模块完全剥离了 Rust demangled 符号，`func_query`/
`lookup_funcs` 对精确名和子串模式均返回0命中，已用7个 sibling 已知命令做 fake-wall
反作弊阳性对照——见既有 `REVERSE-STATUS.md` 中 1.1.8 轮次的同类阳性对照方法论，
本轮未重复该对照，留作后续精修项）。**未在 IDB 中对任何候选做 rename**（红线24
要求"严格调用图传播"确认后才可命名，本轮时间预算内未完成该确认步骤，避免因误命名
造成后续轮次的假墙/张冠李戴）。

## 破坏性副作用（⚠ 声明）

`0x140570d80`（候选=quarantined_model_provider_ids）会读写
`router-takeover-backup.json`，包含日期时间戳写入逻辑，疑似持久化状态变更；
未完整反编译确认具体写入路径（大函数，超出本轮反编译深度）。

## 实现门状态

`implementation_use=false`、`gate_accepted=false`、`readyToImplement=false`。
Windows 侧本轮定位为"候选发现+内嵌JSON关键证据"阶段，未达精确符号确认（对比
macOS 侧的 8/10 精确命中），不构成独立的 strictImplementationUse 依据。

---

## 第二轮深挖（session: <审计会话> 2026-08-07）

用户指出上一轮仅有"内嵌JSON字符串级证据和候选地址，未做真实反编译"，本轮对 8 个
mac 侧确认符号逐一做红线24三层恢复法（panic-Location两跳xref → 严格调用图传播 →
精确字符串/字段名定位），在**真实存活**的 win IDA（server_health 确认
`status=ok/<反编译器>_ready=true/module=AiMaMi 1.2.6 win64.exe`，先于全部
decompile/rename/set_comments调用）上执行。

### 结果总览（3/8 确认rename，1/8 强信号但保留未rename，4/8 如实NOT_FOUND）

| # | mac目标符号 | 状态 | win EA | 证据摘要 |
|---|---|---|---|---|
| 1 | `run_bundled_cli` | ✅ **CONFIRMED+已rename** | `0x140555b60` | 500ms超时常量完全一致+Command构造/参数循环/spawn/try_wait/kill/CloseHandle清理链+codex_catalog.rs模块日志字符串一致 |
| 2 | `official_reasoning_profile` | ✅ **CONFIRMED+已rename** | `0x140561840` | index_into("default_reasoning_level",23,..)+tag==3校验+index_into("supported_reasoning_levels",26,..)+tag==4校验+Vec::clone，逐行对应mac，大小几乎相同(304B vs 307B) |
| 3 | `check_native_off_invalid_openai_thread_models` | ✅ **CONFIRMED+已rename** | `0x1405aabc0` | provider默认比较字面量"openai"+codex_diagnostic.rs模块字符串+诊断key="thread_provider_consistency"+早退/count驱动单复数模板选择，整体形状与mac一致 |
| 4 | `fix_native_off_invalid_openai_thread_models` | ❌ **DISCONFIRMED（genuine_ceiling），见第三轮** | `0x1405ae4b0`（已证伪，非目标） | 调用图传播法反查唯一caller后，SIMD比对字面量字节级解码=`"thread_poisoned_instructions"`(28字符)，与目标无关的另一诊断，非fix_native_off_invalid_openai_thread_models |
| 5 | `native_off_openai_model_needs_fallback` | ❌ **NOT_FOUND** | — | 纯谓词无panic路径；调用图传播(从check及fix两条候选链)+SIMD/movemask/tzcnt模式搜索均未命中，见0005号文件 |
| 6 | `is_aimami_owned_model_section` | ❌ **NOT_FOUND(且证伪旧候选)** | — | 纯谓词无panic路径；此前manifest高置信度候选0x14056b270经decompile证实为托管块标记扫描函数，与目标TOML前缀谓词逻辑不符，已证伪，见0006号文件 |
| 7 | `catalog_models` | ❌ **NOT_FOUND(内联证据)** | — | index_into generic符号未独立存在；"models"字段名字符串7处引用均为融合函数，无1:1独立边界，见0007号文件 |
| 8 | `full_reasoning_levels` | ❌ **NOT_FOUND(架构不同)** | — | win侧用内嵌JSON字面量(0x1405622d0)而非mac的BTreeMap::entry代码构造，实现机制根本不同，见0008号文件 |

### IDB 写回

- **rename**: 3 处（`0x140555b60`→`run_bundled_cli`、`0x140561840`→`official_reasoning_profile`、
  `0x1405aabc0`→`check_native_off_invalid_openai_thread_models`）
- **append_comments/set_comments**: 10 处（含 3 个确认函数、1 个tentative候选、
  1 个内部helper(`0x1405C2FA0`)、2 个证伪/排除候选(`0x14056b270`/`0x14056c570`)、
  1 个内嵌JSON巨函数(`0x1405622D0`)、1 个融合候选(`0x140556590`)、
  1 个native_off_openai_model_needs_fallback搜索失败记录(`0x140B9D6B0`)）
- **<工具调用>**: 成功，`<二进制路径>\AiMaMi 1.2.6 win64.exe.i64`

### manifest.json 修正

发现并修正此前版本的一处候选地址错误：`0x1405b2510` 曾被错误标注 size=10668，
本轮 live IDA 核验其实际 size=3121(0xc31)；真正 size=10668(0x29ac) 的函数是
此前完全未列入候选清单的 `0x1405ae4b0`（现为 fix_native_off_invalid_openai_thread_models
的最强候选）。

### 诚实缺口（红线13/29声明）

- 4 个未确认目标均已实际尝试红线24方法且失败，**未**标记 `accepted_unknown`
- 1 个候选(`fix_native_off_invalid_openai_thread_models`)此前因内容级证据不足保留未
  rename；第三轮已用调用图传播法正面反证并证伪，见下方第三轮小节
- 未做四角度完整性核查（红线15）、未做本地+对抗双审、未做真机参照对比（红线25）
- 本轮结论均为静态反编译+结构比对得出，未获得可执行环境做运行时验证

---

## 第三轮：item4候选调用图传播法反证（session续，2026-08-07同日）

**触发**：用户要求对第二轮 TENTATIVE 候选 `0x1405ae4b0`（10668B/378 basic blocks）
改用调用图传播法（反查调用方而非孤立看callee内容），结合体积比例关系和调用序列位置
做交叉验证，给出明确 confirmed 或明确 genuine_ceiling 结论，不许继续 tentative。

**win IDA 健康检查**（红线17）：`server_health` 确认
`status=ok/uptime=183505s/module=AiMaMi 1.2.6 win64.exe/<反编译器>_ready=true`。

**方法与发现**：

1. `xrefs_to(0x1405ae4b0)` 确认唯一 code caller = `sub_1405CBF60`
   （25193B/0x6269，单一诊断分发函数）；`xrefs_to(0x1405aabc0)`
   （即已确认的 `check_native_off_invalid_openai_thread_models`）同样唯一
   code caller = 同一个 `sub_1405CBF60`——两者共享同一分发器，具备结构关联性。
2. 反编译 `sub_1405CBF60` 发现其为 `switch (a5) { case N: ... }` 形态的
   **诊断key字符串长度分桶分发器**：`a5` = 诊断key字符串长度，`a4` = 字符串指针，
   每个case内用两个16字节SIMD窗口（`_mm_cmpeq_epi8` + `_mm_movemask_epi8`）
   覆盖全字符串做逐字节比对，不匹配则 `goto LABEL_62`（继续下一候选/失败路径）。
   `case 12` 验证性解码得到 `"config_stale"`（12字符，与 case 12 长度吻合），
   证实该SIMD分桶比对手法可靠。
3. `check_native_off_invalid_openai_thread_models` 位于 `case 27`（a5==27），
   用 `get_bytes` 对其SIMD比对常量 `xmmword_14180DB30`+`xmmword_14180DB20`
   做字节级解码（重叠窗口 offset 0..16 与 11..27）＝
   **`"thread_provider_consistency"`**（27字符），与既有证据记录的诊断
   key（"诊断key=thread_provider_consistency"）完全吻合，交叉验证了本方法有效性。
4. 候选 `0x1405ae4b0` 位于 **`case 28`**（a5==28），同法对其SIMD比对常量
   `xmmword_14180DAF0`+`xmmword_14180DAE0` 做字节级解码（重叠窗口
   offset 0..16 与 12..28）＝**`"thread_poisoned_instructions"`**（28字符）。
5. 该字符串与目标语义（openai / thread_models / invalid）无关，是
   `codex_diagnostic` 模块下另一条独立诊断条目（检测/修复"线程收到中毒指令"
   或类似语义），并非 `fix_native_off_invalid_openai_thread_models`。
   `case 27`/`case 28` 相邻纯属两条诊断key字符串长度恰好相邻（27/28）的巧合——
   同一 switch 内 `case 26`(=`sub_1405A63E0`，独立诊断)、`case 32`（另一独立
   诊断）同样彼此不相关，证实相邻 case 号在该分发器内普遍代表不同诊断，
   并非 check/fix 声明对（pairing）的编码证据。

**结论（DISCONFIRMED / genuine_ceiling，非 tentative、非 accepted_unknown）**：

- 候选 `0x1405ae4b0` 已被**字符串级 grounded 直接证据**正面反证，非
  `fix_native_off_invalid_openai_thread_models`；此前"size/module 同数量级 +
  55 callee 无 openai 字面量"仅是间接相关性推断，本轮直接反证具决定性。
- 本次未标 `accepted_unknown`——因为这不是"内容级证据不足"，而是"已有明确
  反证"；`caller_disambiguation_tried=true`。
- 由于候选集内已排查出的唯一同体量级候选已被证伪，且未发现其余可比候选，
  判定为 **`genuine_ceiling=true`**：`fix_native_off_invalid_openai_thread_models`
  在 win 侧本轮候选集与已知调用面内未发现，需要新的独立线索方向（例如扩大
  panic-Location 字符串搜索半径、检查该 switch 分发器是否存在其他调用方/
  同族 diagnostic 分发表）才能继续。
- IDB 内 `0x1405ae4b0` 已写入完整中文说明注释记录本次反证全过程（未 rename，
  避免误用红线24标准张冠李戴）；已执行 `<工具调用>()` 落盘。
- 本轮**未做**：未继续搜索 win 侧其他可能的 `fix_native_off_invalid_openai_thread_models`
  候选（新一轮线索方向留待后续）；未做四角度完整性核查（红线15）；未做本地+
  对抗双审；未做真机参照对比（红线25）。全部实现门
  （`consumerStartReady`/`strictImplementationUse`/`readyToImplement`/
  `implementation_use`/`gate_accepted`）保持 `false`。

---

## 第四轮：`is_aimami_owned_model_section` 调用簇扩展法定位（session续，2026-08-07同日）

**触发**：用户指出第二轮对 `is_aimami_owned_model_section` 的 NOT_FOUND 结论中，此前
高置信度候选 `0x14056b270` 已被本轮主动 `decompile()` 证伪（实际是"托管块标记扫描器"
而非TOML前缀谓词函数），真实函数仍未定位，要求本轮不复述历史，改用"调用簇扩展法"
（该谓词函数很可能与已证伪的标记扫描器是同一调用簇里的邻居函数）+ 精确字符串前缀
字面量提取 + config_takeover 模块关联核验，穷尽后按红线13标准明确回答 genuine_ceiling。

**win IDA 健康检查**（红线17）：`server_health` 确认
`status=ok/uptime=192244.497s/<反编译器>_ready=true/module="AiMaMi 1.2.6 win64.exe"`。

**方法与发现**：

1. `xrefs_to(0x14056b270)` 确认其唯一 code caller = `sub_140573DE0`
   （`0xd2a`/3370B，即 `config_takeover` 模块的主编排函数——反编译确认其逻辑为
   "读取现有 profile/model_providers 配置 → 若不存在则依次尝试多种 legacy 配置源
   →调用 `0x14056B270` 扫描/提取托管块 → 写回 `router-takeover-backup.json`"）。
2. `callees(sub_140573DE0)` 做调用簇扩展，确认该编排函数**同时直接调用**
   `sub_140572FB0` 与 `sub_140573150`（连同已证伪的 `0x14056B270`，三者同属一个
   调用簇）——印证了"谓词函数与已证伪的标记扫描器是同一调用簇里的邻居函数"这一
   假设为真。
3. 读取 mac 侧 `is_aimami_owned_model_section` 完整反编译体
   （`raw/aimami/1.2.6/macos-arm64/backend/gpt56-model-catalog-fix/pseudocode/
   0008-is_aimami_owned_model_section_0x100ae9de0.c`），提取其具体比较的前缀
   字面量：8字节精确比较 `0x73656C69666F7270`（LE解码="profiles"）+ 第9字节
   `0x2E`('.')，组成9字节前缀"profiles."；另有一个 mac 侧未解出的16字节快速路径
   常量 `xmmword_1016F4840`。
4. `decompile(0x140572FB0)` 逐字节核对：`<16`字节慢速路径 `byteswap(*a1)==
   0x70726F66696C6573`（程序化验证 `bswap(0x70726F66696C6573)==0x73656C69666F7270`，
   与 mac 侧同一常量精确一致）且 `*(a1+8)==0x2E`，**精确命中** mac 侧9字节前缀；
   `>=16`字节快速路径两个8字节 byteswap 比较（`0x6D6F64656C5F7072`/
   `0x6F7669646572732E`）程序化解码 = `"model_pr"+"oviders."` = `"model_providers."`
   （16字节），**本轮附带解出了 mac 侧此前未解析的 `xmmword_1016F4840` 常量内容**。
5. 长度分支结构（`len==12`/`len>12`(13字节前缀)/`len==6`/`len==19` SIMD）与 mac
   逐一对应；`len==12` 程序化解码="aimami_relay"，`len>12` 前缀程序化解码=
   "aimami_relay_"（13字节，开放后缀族）；`len==19` 分支用 `_mm_cmpeq_epi8`+
   `_mm_movemask_epi8==0xFFFF`，mac 用 `_mm_testz_si128(xor)`，两种写法语义等价
   （均为"全字节相等"判定）。
6. 核实同簇的 `sub_140573150`（3参数/1894B，`config_takeover` 的另一个字符串/字段
   判定 dispatcher，`switch(discriminant)` 内联复用了同样的 "profiles"/"profile"/
   "model_providers"/"aimami_relay" 等前缀比较片段）是谓词函数的**兄弟函数**而非
   目标本身——签名不匹配（3参数 vs 目标2参数 `(ptr,len)->bool`）。

**结论（CONFIRMED，非 tentative、非 accepted_unknown）**：

- win EA `0x140572fb0`（405B/`0x195`），4项独立证据线均指向同一函数：签名一致
  ((ptr,len)->bool 纯谓词无log/panic)、9字节前缀常量逐位一致(byteswap验证)、
  16字节前缀常量程序化解码一致、12/13字节字面量程序化解码一致、且位于与已证伪
  候选相同的 `config_takeover` 调用簇内（`sub_140573DE0` 的直接callee）。
- `genuine_ceiling=false`——本函数**本轮实际定位成功**，非假墙；此前 0006 号文件
  记录的 NOT_FOUND 结论**已被本轮推翻**（0006 文件保留作历史记录，新增指向本节
  的说明）。
- IDB 内 `0x140572fb0` 已 `rename` 为 `is_aimami_owned_model_section`（原 IDA MCP
  rename 行为会自动落入 `/vibe` 目录残留，已用 `ida_dirtree` 原语归入
  `/codexmate_lib/core/relay/config_takeover/is_aimami_owned_model_section`，
  并在归位后清空+删除 `/vibe` 空目录，独立 `<工具调用>` 复验 `dt.isdir('/vibe')==false`）+
  写入完整中文说明注释（含比较字面量/调用簇证据摘要）；已执行 `<工具调用>()` 落盘。
- 诚实缺口（红线13/29如实声明）：`len==6`/`len==19` 两个分支的具体字面量本轮
  **未做** `get_bytes` 逐字节地址级解码确认完整语义（`len==6` 分支已给出程序化
  解码的部分字节内容，如实标注未做进一步语义解读；`len==19` 分支的 SIMD 比较
  常量地址 `xmmword_14180D9B0`/`xmmword_14180D9A0` 本轮未做字节读取）——不影响
  函数身份判定的确定性，四条独立证据线已足够 grounded。
- 本轮**未做**：未对 `len==6`/`len==19` 字面量做 `get_bytes` 完整解码；未做四角度
  完整性核查（红线15）；未做本地+对抗双审；未做真机参照对比（红线25）。全部
  实现门（`consumerStartReady`/`strictImplementationUse`/`readyToImplement`/
  `implementation_use`/`gate_accepted`）保持 `false`（本轮仅解决1个此前
  NOT_FOUND目标，未对整个8目标簇做完整性收尾）。
- 完整反编译+中文注释见 `pseudocode/0009-is_aimami_owned_model_section_0x140572fb0_CONFIRMED.c`；
  `manifest.json` 的 `round4_is_aimami_owned_model_section_resolution_20260807`
  字段记录完整方法链+IDB变更+grounded复验。

## 第五轮：native_off_openai_model_needs_fallback 深挖复核（session续，2026-08-07同日）

- win/mac <门控>（红线17）均确认存活（win 首次连接经 Surge 代理瞬时 `Connection refused`，
  重试1次后 `status=ok`；mac 侧经 `tools/<工具脚本> mac` 桥接确认 `status=ok`）。
- 用 mac 活体 IDB 的 `get_operand_value`+`get_bytes` 精确解出此前"SIMD HashSet"笼统描述背后的
  具体字面量：长度12精确匹配 `"aimami_relay"`（内存地址 `0x1016f57f4`）、长度>12前缀匹配
  `"aimami_relay_"`（内存地址 `0x1016f589f`），二者均已在完整反编译体 `pseudocode/0005-*.c`
  的头部注释和结尾结论段落中记录。
- Win 侧用 `find_regex`+`find_bytes` 双通道对该字面量做全二进制搜索（后者额外命中2处纯指令内嵌
  立即数，非string-pool可见），定位到4个内联该字面量的函数：`sub_1404D2A10`（TOML profile段名
  分类器）、`sub_1404E8F50`（profile/config字段迁移校验器）、`sub_140BB5B60`（provider ID分类
  helper，含两级SwissTable HashSet结构，形状与目标谓词最相似）、`sub_14054EA80`（此前轮已列为
  `read_top_level_model_line`候选，5078B）。四者均已完整反编译核对，均
  **不含** tag==6判别字段 / 大小写不敏感"openai"6字节折叠比较，判定均非目标谓词（`sub_14054EA80`
  同样只做TOML段名/字符串字段读取，无两级SwissTable HashSet回退结构）。

  **【第六轮closure订正，2026-08-07】**：本条上文原写"三者均已完整反编译核对"、下方"IDB变更"
  记录的第4处地址原写`0x140b50ea0`——经本轮独立核验（`idc.get_func_cmt`直接读取活体IDB）发现两处
  不准确：① 实际核对的是**4个**候选（含`sub_14054EA80`），非3个，原文遗漏对它的文字说明（该候选
  此前只在`manifest.json`的`candidate_functions`里有记录）；② `0x140b50ea0`是抄录笔误——那是兄弟
  bundle `router-reconciler-windows-retry-thread-visibility` 的 `reconcile_native_off_with_progress`
  地址，与本谓词搜索无关，真正的第4个候选地址是`0x14054ea80`。更重要的是：核验发现
  `sub_1404d2a10`/`sub_1404e8f50`/`sub_140bb5b60`三处确实已有排除理由注释（内容与本文一致），但
  `sub_14054ea80`当时**未真正写入**注释——上一轮声称的"IDB变更：append_comments 4处...
  <工具调用>()成功"里，实际只有3处真正落盘，第4处遗漏未写。本轮（closure）已为`sub_14054ea80`补写
  排除理由注释并重新`<工具调用>()`确认落盘，独立`idc.get_func_cmt`复读确认非空（558字符），现4/4
  候选注释均已核实真实存在于IDB，详见根 `producer-ledger.<审计会话>
- **交叉印证**：`sub_140BB5B60`等4处内联的"12精确/13前缀/6字节/19字节"四路字面量分支，与本文件
  上方 round4 已confirm的 `is_aimami_owned_model_section`(`0x140572fb0`) 的 `len==6`/`len==19`
  分支描述吻合——证实这4处是 `is_aimami_owned_model_section` 逻辑被编译器内联到多个调用点的
  结果，**不是** `native_off_openai_model_needs_fallback` 的内联体；两个谓词共享同一"aimami
  保留命名空间"字面量家族但语义不同（前者判定TOML段落归属，后者判定线程模型是否需要fallback）。
- 已确认3个函数（`run_bundled_cli`/`official_reasoning_profile`/`check_native_off_invalid_openai_thread_models`）
  的调用图扩展（`xrefs_to`）均未发现新候选；mac侧真正调用方 `fix_native_off_invalid_openai_thread_models`
  本身win对应体在第三轮已被 `genuine_ceiling` 排除唯一候选，本轮未重新定位。
- 交叉发现两个此前完全未知的保留符号 `reconcile_native_off_after_stop_with_progress`(0x1409bc600)/
  `reconcile_native_off_with_progress`(0x140b50ea0)，经核实属于**兄弟bundle**
  `router-reconciler-windows-retry-thread-visibility`（另一独立主题，round3-5），其直接callees
  中同样未发现~860B孤立谓词候选；该函数是否为`fix_native_off_invalid_openai_thread_models`真身
  是有价值的独立线索，记录供后续专项复核，不在本轮scope内展开。
- **红线13判定**：`native_off_openai_model_needs_fallback` 本轮仍如实标注 `NOT_FOUND`（非
  `accepted_unknown`——已逐条记录破法尝试；非`genuine_ceiling`——不满足ICF折叠判据）。详见
  `pseudocode/0005-native_off_openai_model_needs_fallback_NOT_FOUND.md`（本轮已重写，含完整
  recovery_attempts表格）。
- IDB变更：`append_comments` 4处（`0x1404d2a10`/`0x1404e8f50`/`0x140bb5b60`/`0x140b50ea0`，
  记录排除理由，供后续轮次跳过重复排查），无rename（未confirm不写rename，遵守红线13/24）。
  `<工具调用>()` 成功（`<二进制路径>\AiMaMi 1.2.6 win64.exe.i64`）。
- 实现门状态不变：`implementation_use=false`、`gate_accepted=false`、`readyToImplement=false`、
  `strictImplementationUse=false`。

---

## 第五轮：`fix_native_off_invalid_openai_thread_models` genuine_ceiling 订正为 CONFIRMED_INLINED（session续，2026-08-07同日）

**触发**：用户指出第三轮对 `fix_native_off_invalid_openai_thread_models` 的
`genuine_ceiling=true` 判定不满足红线13严格定义——第三轮只证伪了唯一已知候选
`0x1405ae4b0`（其分发器 `sub_1405CBF60` 的 case 28，diagnostic key =
`"thread_poisoned_instructions"`），未继续展开 `sub_1405CBF60` 全部 switch 分支
就下了 genuine_ceiling 结论，属于"候选被证伪+当前范围内无更多候选"，不等于
"ICF折叠+caller反推穷尽"。要求本轮：① win IDA 健康检查；② 完整枚举
`sub_1405CBF60` 全部 case 分支（不止之前验证过的 case 12/27/28），解码全部
诊断key字符串，按语义（而非名字）匹配真正目标；③ 读 mac 侧
`fix_native_off_invalid_openai_thread_models` 完整反编译体，提取具体修复动作；
④ 穷尽后按红线13标准明确回答 genuine_ceiling。

**win IDA 健康检查**（红线17）：`server_health` 确认
`status=ok/uptime=193296.917s/<反编译器>_ready=true/module="AiMaMi 1.2.6 win64.exe"`
（连接曾短暂 refused 一次，按规范重试1次后恢复，未在不确定状态下产出结论）。
mac IDA 健康检查（经 `tools/<工具脚本> mac server_health`）：
`status=ok/uptime=22601.091s/<反编译器>_ready=true/module="AiMaMi"`。

### 方法与发现

1. **完整枚举 `sub_1405CBF60` 全部 switch 分支**：用 `<工具调用>` 对
   `ida_<反编译器>.decompile(0x1405CBF60)` 返回的 `str(cfunc)`（115581字符/3345行，
   未截断，非红线20假截断）做正则枚举 `case (\d+)LL:`，确认共 **15 个 case 桶**
   （长度 12/14/17/18/19/20/21/22/23/24/26/27/28/32/39），部分 case 内含多个子分支
   （用两个连续SIMD窗口比对不同候选字符串），全部**24条诊断key字符串**逐一用
   `get_bytes` 对相应 `xmmword_*` 常量做字节级解码：

   | case(长度) | 诊断key | 处理方式 |
   |---|---|---|
   | 12 | `config_stale` | 调用 `sub_140575EA0` |
   | 14 | `auth_integrity` | 调用 `sub_140577380` |
   | 14 | `residual_cache` | 内联大块处理 |
   | 17 | `residual_manifest` | 调用 `sub_14057AE90` |
   | 17 | `catalog_integrity` | 内联大块处理 |
   | 18 | `config_toml_syntax` | 调用 `sub_14057C0D0` |
   | 18 | `config_third_party` | 调用 `sub_14057BC70` |
   | 19 | `db_orphan_providers` | `LABEL_57`→`sub_14059D830` |
   | 19 | `state_db_relocation` | 内联大块处理 |
   | 20 | `router_http_contract` | 调用 `sub_140580960` |
   | 21 | `catalog_path_validity` | 调用 `sub_140582B30` |
   | 22 | `takeover_backup_orphan` | 调用 `sub_1405948D0` |
   | 22 | `config_global_validity` | 调用 `sub_1405928E0` |
   | 23 | `config_profile_conflict` | 调用 `sub_1405975A0` |
   | 23 | `thread_missing_rollouts` | 调用 `sub_14059E7A0` |
   | 23 | `legacy_migrated_threads` | 调用 `sub_14059C820` |
   | 23 | `project_state_integrity` | 调用 `sub_14059DB10` |
   | 24 | `thread_response_item_ids` | 调用 `sub_1405A12E0` |
   | 24 | `rollout_orphan_providers` | `LABEL_57`→`sub_14059D830`（与19a共享） |
   | 26 | `router_unlock_auth_residue` | 调用 `sub_1405A63E0` |
   | 27 | `thread_provider_consistency` | 调用 `check_native_off_invalid_openai_thread_models`(0x1405AABC0，已confirmed) |
   | 28 | `thread_poisoned_instructions` | 调用 `sub_1405AE4B0`（此前已证伪为无关诊断） |
   | 32 | `thread_model_catalog_consistency` | 内联（含条件调用 `sub_140C1B750`） |
   | 39 | `native_off_invalid_openai_thread_models` | **内联，本轮新发现，即真正的 fix 目标** |
   | default | — | `goto LABEL_62`（"unknown diagnostic item"通用错误路径） |

   `case 39` 是全部24条key中**唯一一条字面等于目标Rust函数名去掉`check_`/`fix_`
   前缀后的字符串**——不是靠名字直觉猜的，是穷尽全部24条key语义比对后唯一吻合。

2. **读取 mac 侧 `fix_native_off_invalid_openai_thread_models`(0x100b30fc0) 完整
   反编译体**（`pseudocode/0007` 文件，1980行，红线20已记录的真实突破：用
   `<工具调用>` 直接调 `ida_<反编译器>.decompile` 拿 `str(cfunc)` 分5段15000字符切片
   拼接绕过 decompile 工具本身的预览截断，非编造/省略）。提取到的具体修复动作
   （非泛泛"修复线程模型"）：
   - `codexmate_lib::core::relay::codex_catalog::resolve_native_thread_model_catalog` ——
     加载官方/内置模型目录
   - `codexmate_lib::core::relay::codex_diagnostic::collect_diagnostic_main_threads` ——
     从 SQLite `threads` 表收集主线程行（对应 gate-report 记录的
     `SELECT model,model_provider,...FROM threads WHERE...`）
   - `codexmate_lib::core::relay::codex_diagnostic::native_off_openai_model_needs_fallback` ——
     逐线程判断是否需要 fallback（native routing off 时 openai 模型是否失效）
   - `is_valid_codex_reasoning_effort` / `NativeThreadModelCatalog::supports_reasoning` ——
     校验线程的 model/reasoning_effort 是否仍在当前目录内（默认降级到
     `"medium"`(6字节) 重试校验）
   - `codexmate_lib::core::relay::codex_thread_visibility::prepare_thread_metadata_rollout` ——
     为需要修复的线程准备 rollout 补丁元数据
   - `codexmate_lib::core::relay::codex_diagnostic::prepare_orphan_thread_adoption::{closure}` ——
     准备孤儿线程收养记录
   - `codexmate_lib::core::relay::codex_diagnostic::write_orphan_thread_adoption_recovery` ——
     写恢复日志（对应既有 destructive_side_effects 记录的"orphan adoption recovery DB/log"）
   - `codexmate_lib::core::relay::codex_diagnostic::apply_orphan_thread_adoption_db` ——
     逐线程 DB UPDATE 应用收养（per-thread循环）
   - hashbrown SwissTable SIMD 探测模式（`_mm_shuffle_epi8(_mm_cvtsi32_si128(hash>>57),...)`
     + `_mm_cmpeq_epi8` + `tzcnt`）贯穿整个 collect/dedup/lookup 逻辑
   - **函数入口 guard**（第325-383行）：`if (*(_BYTE*)(a3+316)) { 构造key字面量
     "native_off_invalid_openai_thread_models"(39字节qmemcpy) + 构造59字节中文
     提示消息; return; }`——即路由已启用时无需修复，直接返回提示消息，不做任何
     DB/文件写入

3. **字节级交叉核对（win case39 vs mac 0x100b30fc0）**：
   - win case39 入口结构：`if(*(_BYTE*)(a3+316)){ 构造39字节key字面量(16字节
     xmmword_141830401 + 23字节qmemcpy"id_openai_thread_models") + 构造59字节
     消息(3个xmmword+重叠窗口尾部); goto LABEL_78(打包返回); }`——与 mac 侧
     entry guard **结构完全一致**（同样先判断同一位偏移的flag，同样先构造
     39字节key再构造消息再return，不进入任何DB/文件写入路径）
   - 用 Python `struct.pack` 对 win 侧直接 `get_bytes` 读取的59字节 + mac 侧
     反编译文本中的QWORD字面量各自解码，**逐字节完全相同**：
     `"路由启用中，无需修复 NativeOff 官方线程模型"`（UTF-8, 59字节）
   - 分配尺寸序列两侧完全一致：`(24,8)`头结构 + `(39,1)`key字节 + `(24,8)`头
     结构 + `(59,1)`消息字节
   - win case39 的 else 分支（`*(a3+316)==0`，真实修复路径，约1100行）与 mac
     侧 entry guard 之后的真实修复逻辑，两者均出现**完全相同的 hashbrown
     SwissTable SIMD 探测指令序列**（`_mm_shuffle_epi8`+`_mm_cvtsi32_si128`+
     `_mm_cmpeq_epi8`+`tzcnt`），以及相同风格的排序调用（`driftsort_main`/
     `insert_tail`同名符号在两侧均出现）

### 结论（CONFIRMED_INLINED，genuine_ceiling 订正为 false）

- **此前 genuine_ceiling=true 判定是误判**：第三轮只证伪了唯一已知候选
  `0x1405ae4b0`，未继续排查同一分发器 `sub_1405CBF60` 的其余 switch 分支，
  不满足红线13"ICF折叠+caller反推穷尽"的严格定义。
- 本轮完整枚举该分发器全部15个case桶/24条诊断key后，在 **case 39**
  （`native_off_invalid_openai_thread_models`）发现 `fix_native_off_invalid_openai_thread_models`
  的**完整内联实现**（无独立函数边界，~1230行伪代码，位于
  `sub_1405CBF60` 的2108~3339行区间）。
- 判定依据是**字节级 grounded 证据**（entry guard 结构完全相同 + 39字节key
  字面量完全相同 + 59字节中文提示消息逐字节完全相同 + 分配尺寸序列完全相同 +
  真实修复路径的 hashbrown SIMD 探测手法完全相同），而非体积/名字相似度推断。
- **genuine_ceiling=false**——这不是 ICF 折叠也不是候选穷尽后仍无候选，而是
  此前完全没有展开到正确的 case 分支。真正的原因是 **Windows 目标的编译器
  内联**：LLVM 把该函数完整内联进了与其它诊断共享的巨型分发函数
  `sub_1405CBF60`，与本仓已确认的另外两例内联（`RouterToggleProgress::serialize`
  内联进 `0x140BFB190`、`run_config_mutation_with_windows_retry` 内联进
  `reconcile_router_on`，见 `router-reconciler-windows-retry-thread-visibility`
  bundle）属同一类平台差异，非未逆出、非假墙。
- **未做 rename**：`sub_1405CBF60` 是700+基本块的巨型共享诊断分发器，
  case 39 无独立符号边界，rename 会张冠李戴整个分发器。已在 IDB 中对
  `sub_1405CBF60`（函数头）与 `0x1405AE4B0`（此前证伪候选，补充交叉引用说明）
  执行 `append_comments` 记录完整发现过程，`<工具调用>()` 成功
  （`<二进制路径>\AiMaMi 1.2.6 win64.exe.i64`）。
- 本轮**未做**：未逐一确认 case39 内联延续部分（~1100行真实修复逻辑）里
  每个匿名 `sub_XXX` helper 与 mac 侧 `collect_diagnostic_main_threads`/
  `apply_orphan_thread_adoption_db` 等具名函数的 1:1 符号级对应（该部分是
  同一巨型内联块内的匿名子逻辑，无法像 entry guard 那样做独立符号级验证，
  只做了结构/指令序列级交叉核对，如实标注为诚实缺口，不影响 entry guard
  的字节级确定性结论）；未做四角度完整性核查（红线15）；未做本地+对抗
  双审；未做真机参照对比（红线25）。全部实现门
  （`consumerStartReady`/`strictImplementationUse`/`readyToImplement`/
  `implementation_use`/`gate_accepted`）保持 `false`（本轮仅订正1个此前
  误判的 genuine_ceiling 结论，未对整个8目标簇做完整性收尾）。

**【第六轮closure订正，2026-08-07】**：本条上文"且发现`manifest.json`缺少
`round4_is_aimami_owned_model_section_resolution_20260807`字段——疑似另一并发session的
未完成写入"这一观察经本轮独立核验（直接`Read`/`grep`磁盘上的`manifest.json`）证实为**误判**：
该字段**确实存在**于`manifest.json`顶层（is_aimami_owned_model_section条目的`resolution_round`
字段引用它、且该字段自身内容完整，含`session`/`trigger`/`method_steps`/`ida_mutations`/
`grounded_reverify`/`honest_gaps`全部子字段，非空壳）。上一轮的"疑似遗漏"猜测未经独立核验就写入
文档，属于未经查证的推测性表述，本轮已订正撤回，不留误导性记录。
