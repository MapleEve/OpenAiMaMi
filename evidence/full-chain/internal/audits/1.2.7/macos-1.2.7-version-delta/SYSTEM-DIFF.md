# AiMaMi 1.2.7 macOS — 按构建 SHA 的系统差异合同

## 1. 范围、制品与读取顺序

本文件承接唯一任务 `<审计会话>`；不创建新版本。仅证明 macOS 同平台静态差异，不证明 Windows 或真实 App 一致。voice/audio/capture/runtime-settings/trigger-listener 排除；dim6（实现侧验收）和 live_reference 均未做。

| 比较轴 | 基线 | 目标 | 状态 |
|---|---|---|---|
| 历史 1.2.6 → 1.2.7 pre | 已收口 1.2.6 | `ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9`，71,204,992 B | 原消费者合同 §1–9、原 manifest/gate 的既定结论保留，不重新裁决 |
| 本次 1.2.7 pre → release | 同上 pre SHA | `f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0`，68,357,552 B | 五模块变化面、当前命令注册及全名字面/入口候选筛查完成；本比较范围 content_closed=true，不等于逐依赖全文认证、实现放行或双平台交付完成 |

二进制来源分别为共享根 `raw/binary/AiMaMi 1.2.7-pre.app/Contents/MacOS/AiMaMi` 与 `raw/binary/AiMaMi 1.2.7-release.app/Contents/MacOS/AiMaMi`。本节点重新计算两组 SHA/size/mtime，与上述 source manifests 绑定。pre mtime 为 2026-09-29T13:56:38Z；release 为 2026-10-07T16:03:03Z。App 的 universal 两个 slice 不另算覆盖缺口。

原 `logic/CONSUMER-CONTRACT-1.2.7.md` §1–9 是历史 pre 合同；该文件新增 §10 是本次 release 增量。同一包顶层既有 `consumerStartReady=true/strictImplementationUse=true` 只属于历史 pre 五目标，不能据此给 release 放行。release 专属状态见 manifest/gate 的 `release_comparison`。

## 2. 前端 IPC 与控制流

同平台完整资源为 39 → 39；34 对同名匹配、5 新增/5 移除；3 对字节相同、12 对仅构建 hash 引用变动、19 对有其他内容变化。release 34 个 JS AST 解析失败 0，179 个静态依赖缺失 0。前端去除排除面后 wrapper 集合 147 → 109，新增 0、移除 38 全属于排除面；共有命令参数键变化 0。不能把资源重分包计为功能删除。

可比静态调用点为 178 → 125 行，142 → 103 个提取命令名；旧 402 行含 wrapper 定义，不与125行直接比较。release 原始集合为109 wrapper、103个CCF名字，交94、并118，wrapper-only15/direct-only9。**103不是纠错后的真实IPC数量**：`custom_instructions_entry_enabled`、`recharge_entry_enabled` 是localStorage读取键，CCF误报，不是native命令；其余7个direct-only均有当前App注册，不是plugin。`clean`被CCF漏提，但真实页面调用和注册均在。因此观察到的App命令为 **103−2+1=102**，缺handler0、未解0。

当前dispatcher `run::{{closure}}@0x1006eac40` 独立证明112个注册名字、105个不同分离handler及7个dispatcher内联handler。原始并集118分为111个App注册名、5个未注册且无实际调用的unused wrapper、2个localStorage误报；并集之外另有native-only `diagnose_codex_router`。5个unused wrapper为 `apply_custom_instruction`、`clear_custom_instruction_block`、`load_custom_instruction_state`、`preview_custom_instruction_apply`、`rollback_custom_instruction`。15个wrapper-only中，clean为真实调用漏提、9个已注册但未观察到页面调用、5个unused；不能统称后端缺失。112−102=10个未观察到页面调用的注册命令保留此边界，不把“已注册”升级为完整行为认证。

- Skills：60 秒 staleTime、挂载强制刷新、窗口聚焦不刷新；新增当前 tab 手动刷新及 isFetching 防重入。展示来源、只读状态、enabled 三态及 warnings；`managed=false` 隐藏删除入口。列表失败 alert 与库存降级 warning 分开。
- 维护页：`get/set_claude_web_search_compat` wrapper 仍在，但页面实际调用点各 1 → 0；开关固定 unchecked/disabled，无 onAction。不得写成后端 get/set 命令删除。
- 账号：Go/Pro500 名称及价格、套餐徽标与账号页 CSS 变化；后端值域也确有扩展，不只是样式。
- 统计：ResizeObserver 实际容器宽参与 SVG 坐标；热力图 year 视图 fitWidth、自适应格宽、月份标签间距与居中变化；不是只有压缩或文案变化。

**注册对账已通过，限当前release名字→分派/handler映射**：112个比较分支逐名对应，独立长度/比较常量集合相同；105个分离handler及7个内联入口未解0。75/34只属先前同名符号检索数，不再作为注册缺口。true_gaps=0来自102个实际App调用逐名核验，不来自pre147命令表或同名推断；完整逐名证据为current-command-registration.json。

## 3. Skills：库存与删除保护的真实变化

DTO（跨 IPC 的字段合同，即前后端必须共同理解的字段集合）`InstalledSkillSummary` 由 8 键增为 11 键：`id,name,title,summary,relativePath,directoryPath,skillFilePath,updatedAt,managed,source,enabled`；新增 `managed/source/enabled`。`enabled` 始终有键，值为 null/false/true，不是 None 时省略。

来源枚举为 `managed/user/project/plugin/system/admin/native`；七项是来源值，不是新增七个 IPC。managed 扫描与 app-server 库存按 canonical SKILL.md 路径合并；相同路径保留 managed 身份并补 enabled。enabled 冲突转 null 并记冲突，后续不反复覆盖。外部条目 `managed=false`，id 为 canonical SKILL.md 绝对路径，directoryPath/relativePath 为父目录，updatedAt=null。

调用链为 load_installed_skills → inventory::load_inventory `0x1005e1180` → read_skills `0x1007081d0` → app-server 客户端。总 deadline 30 秒、单请求至多 10 秒；project/list 分页 limit100、至多20页、根至多256；根绝对/is_dir/canonicalize 去重、重复 cursor 防线；skills/list 使用已校验 cwds 与 forceReload=true，返回 cwd 必须属于请求集合且不重复，skill path 必须绝对且末名 SKILL.md。这里只证明本机请求与返回校验，不推导外部服务扫描规则。

库存失败降级为 managed 列表成功结果并返回 `skills_native_unavailable`；partial、单项 canonicalize 失败、缺父目录或 enabled 冲突形成 `skills_native_partial`。数据是 `SkillListPayload {items,total,rootPath,lastScanAt}`，warnings 属外层 envelope，不在 data 内；前端 HTTP 响应对象再包一层，不能因页面 `.data.warnings` 就改 IPC 字段位置。

⚠ `remove_skill` 新增绝对 id 的只读拒绝，发生在锁、备份及删除之前。managed 删除仍先备份后删除。备份 metadata 六键为 `backupID/skillID/name/title/relativePath/createdAt`；先写临时内容再 rename 发布，失败清理规则保留。pre 已有 inline ensure_directories/bootstrap_cache::update，不把命名 helper 算新增持久化；**release 仅 warnings 为空才更新缓存**，缓存失败只日志、列表仍成功。两个 import 闭包按 canonicalize fallback 与 `Invalid skill source` 内容唯一消歧，未按 hash/地址顺序强配。

## 4. Accounts：值域扩展；OAuth 两项误报撤销

`PlanType` JSON 由 `free,plus,pro5x,pro20x,team,business,enterprise,edu,unknown` 九项增为十一项，新增 `go/pro500`；内部 ordinal 不是 IPC 整数。`AccountSummary` 仍25键、`ExportedAccount` 仍14键且包含 auth；tokenStatus/credentialGeneration/accessTokenExpiresAt/catalogSlug 的可选省略规则保留。

**两项旧中间分析已失效，不得用于实现**：
1. 没有取消 OAuth 启动后三次重试。真实 caller `0x100323998 → 0x10032b7e0`，仍为100/250/500ms样本与连续成功判据；`0x10032bd90` 是 disk/reentry verify，不是 post-launch helper。
2. action+64 条件的保存凭据校验不是新增；pre `0x1007c1350` 已有。alias 第七个 native 参数旧版栈已传入，不是新增 IPC 参数。

用量刷新至多5项一批、认证重试参数、持久化告警、原子发布及条件回滚边界保留；lock/PKCE/usage helper 的外提与内联不计新增业务。NoAccountModelRestoreEntry serializer 消失是写入器内联，三种 snapshot 锁中的一个是 failure_after_snapshot_writes 内联；未证实账号功能删除。⚠ 账号切换/恢复写 auth/registry，先快照、互斥、失败验证与告警不能收窄；导出仍含 auth，消费者不得把它当脱敏日志。

## 5. Threads / analytics：过滤范围变化，fork/worktree 不删除

真实变化为 `line_is_unusable_reasoning_response_item@0x1004b0390` 经 helper `0x1004f8b60` 新增 `ccswitch-anthropic-thinking-v1:` 前缀判断；pre 只检查 AiMaMi 前缀。既有历史清理因此额外过滤这些 reasoning 条目，不是 token/计费安全改进。

两个 detect_worktree_copies 消失为内联：列表父函数仍收集/排序 cwd、至多4组调度、scoped 线程、结果映射并传给 build_codex_session；fork_thread_to_cwd 内联于创建副本 caller，thread/fork、excludeTurns、120/0 与 cwd 校验保留。instruction_meta_digest 是既有 SHA-256 校验外提，pre 已有摘要不符 retry；PathContext.windows/prefixes 原已存在，不是新缓存迁移。

⚠ rollout 成功 rename 覆盖历史，失败回收临时文件；ReadStamp 只是并发变更检测，不等于持久备份。missing_candidate 是 UPDATE 不是 DELETE；provider 收养保留事务/恢复写入，fork 仍创建线程。旧命令 `0x100310250` 反编译器 -12 仍如实，所需控制流由1135指令/271基本块原生证据支持，不伪称反编译成功。

## 6. Protocol / search：迁库不等于等价，旧续传不可照搬

pre 116 个旧 Anthropic 命名空间符号消失，release 请求/响应/SSE 改由 `cc_switch_anthropic` 处理；148个库函数单独普查，必要主链有正文/调用者证明。不能计为116项功能删除，也不能计为仅改名字。

- prepare_request 在 HTTP 前拒绝旧 `aimami-anthropic-thinking-v1:` 加密 reasoning；compaction/compaction_summary/compaction_trigger 拒绝；context_compaction 仅在 encrypted_content 存在且非 null 时拒绝。错误要求原模型/新会话，原历史记录不改。
- Context/tool-schema replay、签名历史、动态 system/tool 能力、allowed_tools、thinking/forced tool_choice 策略按新链校验；无法安全保留即拒绝，不静默放宽。schema 的 oneOf/anyOf/allOf 归一化在发送前。
- model 末尾 `[1m]` 大小写不敏感移除并 trim，原模型决定 context-1m beta；JSON accept、accept-encoding identity、messages URL/query 按当前链消费。
- 错误提供方敏感片段先替换为 `[REDACTED]`，再经现有文本脱敏并递归 JSON；413 表示上游限制。HTTP/读取/decode/转换错误不当正常响应。
- 真流经 vtable `0x101aabe68+24=0x100836f70` → poll_frame `0x100584da0` → poll_next `0x10059b160` → 新 SSE 状态机；非流式聚合另一路。message_start 顺序、重复/缺 index、开块、非法工具 JSON、thinking 签名与 terminal reason 都有错误合同；invalid_utf8/stream_error/stream_truncated 不混为成功。
- 旧 `web_search_20250305` 与 Exchange::resume 自动续传不能迁移成现行能力。未知 server_tool_use/web_search_tool_result 块在新链为空输出，不是一律显式拒绝；成功 stop reason 为 end_turn/tool_use/stop_sequence，pause_turn 走 unsupported terminal reason/failed，非旧自动续传。
- native Responses 的 hosted search 净化受 protocol/channel/model/base URL 条件限制；移除 tools 中 web_search/web_search_preview/web_search_ 前缀，additional_tools 子数组同谓词并删除滤空条目，处理相关 tool_choice/allowed_tools。**未证明删除所有 web_search_call 历史，更不代表关闭所有搜索。**
- get/set compat 的 enabled DTO、锁、未变不写、变化 persist_with_commit 与成功 acknowledge 仍在；当前 Anthropic 新链无 enabled 参数，不等于它仍控制旧 hosted 搜索，也不据此宣称全 App 无任何读点。
- TextCounts 仍 chars/ufffd 两键、相同值偏移及错误短路合同；差异是 SerializeMap 清理外提，不是请求长度/token/计费变化。analytics web_search_evidence 与 state_db_search_dirs 不是转发搜索能力。

## 7. Router / engine / platform

CLI 引擎检测新增细分失败合同；最低版本仍0.155.0-alpha.9.2。1.5秒超时、25ms轮询和 kill/wait pre 已有，不算新增保护。MCP 真实变化为写前 validated_mcp_config 与 parse_mcp_document 的结构行词法守卫；toml_edit、目标块编辑、3次冲突重试和原子发布旧版已有。

catalog_db_path 不再取首个存在路径/默认路径：枚举两类 DB、canonicalize 去重与验证，再按 ChatGPT 主进程 PID 和 DB 持有者筛选；多持有库或归属歧义明确报错。持有者谓词 `0x1008d30c0`。recovery journal/backup、commit_pending、require_sync、commit 警告保留/清理原已在调用链，不把展开显示算新增安全保障。hex_digest 从固定32字节泛化 slice，但两个真实调用点仍传32并生成64字符 hex。try_pass_through 的 with_betas(...,1) 保留，另两条 compaction 装配顺序变化按具体调用链消费，不能概括全局能力删除。

⚠ 路由修复/恢复、MCP/config 写、DB UPDATE、进程终止/重启是原有破坏性副作用；消费者仍须备份、quiet-window、冲突/失败回滚与日志边界，不因 helper 外提省略它们。当前库/路径错误可以阻止写入，不是任意 fallback 其他数据库。详见 router 原模块 final results 与 baseline-content-reduction 的29条结论；内部 audited 修复包装不可无差别压平为旧 generic fix_issue。

## 8. 四角度与本次静态比较的覆盖等级

A：release 40,277个函数的EA/完整名字已全部保存，唯一40,277、缺页/重复/传输截断0；并非只保存total。含codexmate的4,760行仍分为真App1,870、泛型/胶水2,890。App责任集合 Skills32 + accounts257 + threads335 + protocol119 + router1127 =1870，逐EA/完整名字相符，重0缺0；core1537、commands142、run103、platform82、其他6。1434同名对callee缺字段0；85新增符号候选、391消失符号、76变体组按内容/集合裁定，不按地址顺序强配。稳定面浅筛迁移，不是1870逐体full_leaf。

B：当前112注册=105分离handler+7内联入口；原109wrapper/103CCF/交94/并118的来源数保留，纠错后真实观察App命令102。缺handler0、未解0；5unused与2localStorage误报有独立未注册/源内容依据。native-only diagnose_codex_router、10个未观察页面调用注册命令与实际调用分列。注册完整性不等于112个命令均完成新全文行为认证。

C：完整名字/入口扫描已纳入本包来源体系。entry table 5406个唯一EA，其中函数4984、非函数422；旧关键词子集App933、非commands903仍属旧子集数，不冒充新扫描数。扩展关键词在排除commands相关名字后命中10544：依赖7303、App类型胶水1808、真App1252、独立后端库cc_switch_anthropic148、其类型胶水33。另核86个原生匿名候选：31个runtime错误尾、1个noop，余54项全部有native/LC_FUNCTION_STARTS/数据或pre双侧证据裁定：47加密依赖片段、1tokio、1chrono、1依赖错位、1已覆盖App错位片段、2跳表数据、1内嵌源码文本。54项互斥无遗漏、scope未解0；main CLI两侧规范化正文/相对CFG相同。cc_switch_anthropic148是后端调用库，不是前端资产；真流streamer及请求/响应/SSE变化按§6正文消费，148中已有38个独立正文引用，不能声称148全逐体认证。

本次 **C_diff_scan_complete=true，C_semantic_unqualified_pass=false**：名字/入口普查与候选盲点已闭合，选定真实变化已有五模块正文；没有宣称全库业务零变化或所有依赖逐body认证。源manifest原authoritative=false表示生产者未自行提消费门，本包现已明确采纳其具体内容证据，不再把所有来源悬置为未消费local_outtake。

D：按“本次比较责任/证据可追源”分类，真App1870为already_in_canonical，local_outtake/different_machine_owner/truly_undone均0。独立库148、main及54匿名候选另表引用已采纳的扫描/裁定来源，不混加到1870。命令层分别记录：102个真实观察App调用均already_in_canonical（其余三类0）；112注册名均已有当前分派映射（注册证据层）；原始并集另5unused与2非IPC误报不是truly_undone。函数/命令四分类均不冒充full_leaf或实现就绪证书。

必要pre正文缺口0、选定变化面语义待判0、B未解0、C本scope未解0，因此本次mac比较 **content_closed=true**。共享107体（99候选+8支持）及后续why_needed支持是补证数量，不是功能数。persistence_complete/mac_closed仍须按§9的独立最终保存验证填写；Windows与最终双审/grounded未由本文件替代。

## 9. IDB、门控、平台与不可外推项

本消费者节点不修改任何IDB。OAuth独立有界验证已通过：329530评论槽、768批，七条完整旧错误断言去空白匹配均0、自有marker重复0；六处纠正块及真postlaunch目标readback通过，真实调用/100、250、500ms/失败清连续成功计数/末尾>1均有原指令证明。pre的+64/+56保存凭据保护原已存在；disk/reentry/deferred单次验证与postlaunch三采样算法分列，不混为一条。

最新事实单写及本消费者独立只读核验均通过。`release-f019dbc8e267-final-fact-writeback-manifest.json`记录53个变更EA、19个责任模块、20次真实save（一个模块分两次），20份源快照共6987933340B；本节点逐份重hash、解读20份原始ok/path回包，并fresh逐53EA核当前名字/普通与可重复注释/模块目录，失配0。原六OAuth纠正块及C-level/bad-SP限制保留，最终329530槽旧七断言0、vibe残留0。

当前i64独立host/SMB实读相同：**349775547B，SHA `68fedeab38e84f2fdf6303392bef386c2910431dcd8c76ae41968de27f57d62c`**；host mtime_ns=1792146473688721008，SMB=1792146473688721000，打开文件前后fstat稳定。源快照→逐模块save→当前指纹链闭合，**persistence_complete=true**。OAuth有界验证10:25:29Z的25f722…及旧e685…仅为历史链中间点；198EA/42模块旧保存不替代当前终态。最终双路复审与grounded仍由编排层完成，故 **mac_closed=false、readiness=false、execution_ready_for_final_review=true**；不把本节点执行核验冒充最终双审或双平台DONE。

release `consumerStartReady=false/strictImplementationUse=false/readyToImplement=false/implementation_use=false/gate_accepted=false/full_leaf_100=false`。五模块内容可供后继审查与精确补证，不等于实现全局放行；dim6与真实 App 对照仍false。Windows release `fd5f0c5aa7d500fe7fcef21359028fa614ede9965fc48888601883832ee7d8df` 的后端比较由对应平台独立完成，本文件不提前ACK/DONE。

plugin/capability：本次没有证成新的 Tauri capability/plugin 全集变化，不用 Skills 的 plugin 来源值推导插件权限新增。OTA/package：mac Info.plist 版本由pre的1.2.6变release1.2.7；没有联网发布、更新下载或安装验收证据，不能写OTA线上已生效。

## 10. 冻结来源

活动来源及完整SHA写入同包 manifest.release_comparison.source_manifests 与 pointers/evidence-paths.md；原过程/原生正文留 intermediate，不放本结论包。优先消费五份最新模块manifest和router必要增量，旧router共享protocol60b6…与supplement形成时旧manifest哈希只属历史冻结引用，不作为现行文件哈希。源分析 OAuth 两项错误已经原位撤销；此处明确不采信其历史失效文本。

## 11. 原任务最终交付时的状态校准

§9末尾的mac_closed=false/readiness=false是当时writer尚待编排终审的历史检查点，不是现行状态。其后同包manifest.release_comparison已记录mac_closed/readiness/final_review_complete/grounded_complete=true，局部静态比较已收口；本轮不重逆或推翻该既定事实。当前联合任务通过两平台各自的正式正文和最终审查归并，不外推Windows，也不把局部收口改作实现门。

Windows当前独立结论位于同级windows-1.2.7-version-delta/SYSTEM-DIFF.md：其pre已有Skills11字段、forceReload=false、pause_turn旧为completed；这些与mac分叉明确保留。WindowsOAuth专项亦已独立证实100/250/500ms三采样及原有身份保护，不是照搬本平台。

最终联合终态以本次两路正式包复审、七项磁盘终验及manifest.release_comparison为准；dim6/live_reference与全部release实现门仍false。原文“Windows/grounded待完成”按其历史写入时点理解，不能用旧检查点抵消后出有证据终态。
