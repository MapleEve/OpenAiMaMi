# AiMaMi 1.2.7 Windows — pre 与实际 release 的最终静态差异

## 1. 范围与制品身份

本文件归属于原任务 `<审计会话>`、原消费者包；没有新增版本。比较的是同一 1.2.7 标签的两个不同构建，不是重新制作 1.2.6 基线。历史 pre 合同及其门控保留，本次 release 状态独立记录在 `manifest.json.release_comparison`。

| 平台 | pre SHA256 / 字节数 | release SHA256 / 字节数 |
|---|---|---|
| Windows x64（本文件正文依据） | `51cb41b613aaa50f410d606e1c4271b1de34576b497a1cba0f734eba46279faf` / 37,413,376 | `fd5f0c5aa7d500fe7fcef21359028fa614ede9965fc48888601883832ee7d8df` / 34,981,888 |
| macOS（独立比较，仅交叉引用） | `ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9` / 71,204,992 | `f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0` / 68,357,552 |

本轮直接重算上述四份 SOT 文件的完整 SHA、字节数及 mtime，均与原证据匹配。Windows pre/release 的 mtime_ns 分别为 1790744322000000000 / 1791391220000000000；macOS 分别为 1790690198000000000 / 1791388983000000000。SOT 位于共享根 `raw/binary/`，具体文件和冻结证据见 `pointers/evidence-paths.md`。不因文件体积下降推导功能删除。

**结论：pre 与实际 release 有真实行为差异，不能把 pre 当作 release 直接复用。** 主要涉及 Anthropic 请求转换、SSE 的非法输入/结束条件、套餐值域和 Skills 前端刷新。内部函数外提、内联、重分包和地址变化则大量存在，不能都算新功能。

本次范围是已登记的同平台构建差异及其必要依赖、四角度完整性核对和 IDB 保存交付，不是全 App 全路径逐函数源码恢复。voice/audio/capture/runtime-settings/trigger-listener 排除。真实 App 未运行对照，dim6 与 live_reference 未验；任何静态比较完成状态均不提升实现门。

## 2. Frontend IPC / Control-flow

两平台分别使用各自前端证据；历史 pre 的 147 IPC / 402 行 CCF 只描述旧构建，不能充作当前 release 注册数量或当前可调用路径数量。release 的静态 wrapper、实际页面调用、Tauri 注册和内联分派必须分开计数。Windows 四角度来源中的 `B_registration_reference` 证明活动命令标签匹配、缺 handler 为 0；本文件不把 macOS 的 112 注册 / 102 实际观察调用计数移植成 Windows 独立结果。

Windows Skills 页由无限陈旧时间改为 **60 秒 staleTime**，新增挂载刷新及当前 tab 手动刷新，展示 warning、source、disabled 与外部只读状态；`managed=false` 不显示删除入口。依据 `remaining-runtime-skills.json#/frontend_evidence` 及 clauses S19/S20。

重要平台差别：**Windows pre 已有 11 个 Skills 字段及外部条目只读删除保护**，不是 release 新增；Windows 两版 `skills/list.forceReload=false`。macOS 的字段 8→11、绝对 ID 删除前拒绝和 `forceReload=true` 只属于其对应平台证据，不外推到 Windows。

## 3. Backend Commands / Control-flow / implementation leaves

### 3.1 Accounts 与 OAuth

- 套餐 `PlanType` 从九种变体扩展为十一种，新增 `go`、`pro500`。内部 ordinal 不是 IPC 整数合同；不能据此声称新增 AccountSummary 字段。
- refresh 请求 User-Agent 从 `AiMaMi/1.2.6` 改为 `AiMaMi/1.2.7`。POST endpoint、form 的 `grant_type/refresh_token/client_id`、refresh_token grant 及 **15 秒 HTTP 请求时限保留**。这是请求配置差异，不是新增 OAuth 流程。
- 真实启动后核验链是 pre `0x14042f320 → 0x14042de60 → 0x140ec8db0 → 0x140d05b20`，release `0x1405ced90 → 0x1405cdef0 → 0x140367780 → 0x140a4dbb0`。启动前 disk/reentry 检查是另一层，不能替代这条链。
- 两版均在每次检查前同步等待 **100/250/500ms**。等待实现落到 Windows waitable timer / `WaitForSingleObject`，失败回落 `Sleep`；850ms 只是名义等待和，不是总切换时限或实测耗时。
- 正常路径固定执行三次，成功不会提前结束。失败清零连续成功计数，但不把重试索引重置。仅 `SSS`、`FSS` 成功，即最后两次必须连续通过；`SSF` 不成功。最终失败保留最后一次具体错误。
- 核验要求 registry 的 active 身份与 auth 派生身份均存在，并在长度和字节上等于同一目标身份，不是逐项比较 access_token/refresh_token。虚拟受管 auth、API-key 模式或不可用 token 形态被排除的保护在 pre 已存在；这不是 release 新增 saved-credentials 保护。saved 快照不能替代本链失败的 auth 身份核验。
- 两条错误全文均为 82 字节，release 由已采原始常量及缓冲写入重建，与 pre 逐字节相同：`SWITCH_REGISTRY_VERIFY_FAILED: active account does not match the requested account`；`SWITCH_AUTH_VERIFY_FAILED: auth.json identity does not match the requested account`。
- 保留可见接口差别：pre 向采样读取入口显式传入配置路径，release 调用无参读取入口。没有真实机器目录解析或 App 对照证据，不把它概括成目录已改变，也不声称整个 OAuth 调用链完全字节等价。

来源：`content-closure-accounts-oauth-platform.json#/observable_delta`、其 support 的 rows 101/110；`oauth-post-launch-raw-manifest.json`、`oauth-post-launch-helper-complete-raw-manifest.json`、`oauth-post-launch-helper-140a4dbb0-error-header-constants-raw-manifest.json`。完整冻结文件名与 SHA 见 pointers。该专项已由两路独立静态复核闭合，不能替代最终消费者包复审。

### 3.2 Runtime display 与 Skills 后端

用量刷新先取/复制必要状态、释放锁执行慢操作，再重取锁保存；保存失败可能成为 warning 而不是撤销已取得用量。后续状态写回失败只日志，不回滚已完成保存。可选额外刷新最多三轮，晚期失败不撤销此前已经更新/广播的状态；三轮仍处于等待状态时可返回首次快照，因此返回值不必等于最近广播值。

显示快照同 epoch 的 revision/sequence 防止旧更新覆盖新状态；按 source 与 accountKey 合并的路径分开。共享状态替换、解锁、再投递/emit 的顺序保留；emit 失败没有补偿式撤销全局赋值。

getter `load_runtime_display_snapshot` 仍零参数、只读，`data=RuntimeDisplaySnapshot|null` 且快照不可用不把成功信封改成失败。事件 wire 是 **`{snapshot, source, accountKey?}`**，accountKey 为 None 时整个键省略。该事件陈述是已定稿的旧文档纠正，不是本次产品新增行为，也不由此声称两构建所有发送链均等价。历史 getter 门控不变。

Skills 列表返回 data 的 items/total/rootPath/lastScanAt；warning 归 envelope。Windows 两版已有 managed/source/enabled 三字段，enabled 的 null/false/true 不应合并。列表降级/partial、managed 与外部库存归属、备份/删除/恢复失败分支必须分别消费。字段级与调用链结果见本包 `logic/DELTA-LOGIC-1.2.7.md`，不是用 UI 改动猜后端新增。

### 3.3 Anthropic 请求与协议转换：实质变化

`wireApi` 三态本来就存在：0=openai-chat、1=openai-responses、2=anthropic；不是 release 新增协议枚举。请求/响应/SSE 迁入新转换链并不代表仅库改名。

真实变化包括：
1. HTTP 前显式拒绝 compaction 及特定 encrypted compaction 输入，旧 AiMaMi reasoning 前缀拒绝原已存在。
2. 模型 capabilities/options、effort、thinking 能力和工具/输出格式约束分开校验；自适应 thinking 与强制 tool_choice 的既有冲突不当作新保护。
3. namespace tools/children 及 input 内声明先行遍历；签名历史保序、混合 replay/schema 版本校验增加。
4. `allowed_tools` 不能安全保留约束时显式拒绝，不能静默降级为任意工具。
5. `text.format=json_schema` 的 schema/strict 与模型结构化输出能力对应；不能保留时返回错误。
6. 转换成功后按 options 对 tool schema 做 post-normalization。

保留/外提面：模型 `[1m]` 后缀和 context-1m beta、native compaction HTTP400、hosted 工具净化的目标分支、Chat 请求/聚合/流式主要合同及错误摘要脱敏均已有 pre 证据。未知 server content block 不登记、不生成客户端工具调用，不能写成一律拒绝。诊断 trace 新增字段不是新增上游业务能力。

### 3.4 SSE 与 terminal reason

| 面 | pre | release |
|---|---|---|
| 非法 UTF-8 | 替换为 U+FFFD，保留可跨 chunk 尾部 | 区分可续接尾部与确定非法序列；非法或 EOF 残片为 `invalid_utf8` |
| 未见 message_stop 的 EOF | 有部分输出时可合成 max_tokens/incomplete | 不能仅据已有内容推成功；报 `stream_truncated`，保留明确 aggregate fallback 边界 |
| message_start | 较宽松 | message 必须为对象且只能一次 |
| block index / delta | 多处缺失或错误索引为空输出 | 要求非负有效 index、已登记匹配 block，重复 index 拒绝 |
| block_stop | 立即关闭/发 done | 先标 closed，完整收口延至 message_stop 校验 |
| message_stop 尚有 open block | 可补关闭 | failed/invalid_response |
| tool 参数 | 在旧 block finalizer 中组装 | id/name 必须非空，partial_json/input 必须可解析且为对象 |
| thinking | 旧宽松收口 | signature 或 redacted data 必须满足非空可重放要求 |
| pause_turn | completed | failed/invalid_response |
| 缺失/未知 stop reason | 默认 completed | failed/invalid_response |

release 成功白名单为 `end_turn/tool_use/stop_sequence`；`max_tokens/model_context_window_exceeded` → incomplete/max_output_tokens，`refusal` → incomplete/content_filter。Windows pre 的 pause_turn 是 completed，不能套用 macOS 旧 Exchange::resume 的续传叙述。

依据 `content-closure-protocol-request-sse.json#/facts/9–35` 及各条同平台原始引用；53条逐面结果在 DELTA-LOGIC 中列出。

### 3.5 Catalog / MCP / process / manager

catalog JSON serializer 外提不代表新增磁盘写入：模型选择、visibility/priority、aimami_no_account 布尔及失败封装保留；实际原子发布属于调用者。MCP 并发修改的三次尝试、managed marker 和字段规范化有双侧证据，不能因 helper 出现而算新增事务。

Windows 的 DB 持有者/主进程分类及路径选择按同平台 native 分支消费：不能把多值进程判别结果压成 bool，不能省略名称/路径 fallback、退出后复查、提权一次及原生 Restart Manager 边界。DB/引擎候选的歧义不能任取路径。manager 的 quiet/reconcile、退出和重启路径按真实 caller 分开；单实例/进程生命周期不因函数地址或 Future guard 变化就算新增业务状态。

⚠ 进程终止/重启、配置写回、数据库修复及账户恢复均是有副作用操作，不能执行作本次验收。此处只交付静态合同。catalog/MCP/process 的13项和manager的20项结果在 DELTA-LOGIC 展开。

### 3.6 History / activity / health / delete

- 本 scope 的 ActivityID 是未归档 thread 行 id，不是 Windows ETW ActivityID；SQL 的 id/rollout_path/model_provider/source/model 列及未归档筛选、排序保留。
- 历史串行改写与 fallback 复用既有逻辑。恢复先反向处理已记录 baseline；恢复出错返回复合错误和 baselines；恢复成功后只重建/重放一轮，不无限递归重试。已读定义分支范围未发现新增行为，不能把外提 helper 算新恢复能力。
- 原地等长改写、同目录临时流式替换、整文件 plain/zstd 重写各有不同发布/flush 路径：不能声称每条路径 rename 前都显式 FlushFileBuffers。最终指纹复查和失败边界不得省略。
- bounded reader 两版均 64KiB 分片、8MiB 单行上限，取消/EOF/超长/IO 错误分别返回；容器清理函数不是读取器。
- 健康检查、路径解析、删除后的 UI/广播和持久化结果分开；后置刷新 warning 不等于前置删除自动回滚。

具体分支、失败和副作用见 FULL-CHAIN 与 DELTA-LOGIC；内容来源为六个 remaining scope 与 catalog 30 分片，不用 macOS 替代。

## 4. Interface / Error / Boundary

本次不重新裁决历史 pre 五目标及 getter 合同。当前 release 的消费门单独为 false；旧顶层 pre `readiness=true/strictImplementationUse=true` 不能用于 release。账户导出含 auth，不能记入普通日志。token 形态检查不是远端有效期/签名认证。

Windows 与 macOS 的真实分叉至少包括 Skills pre 字段、forceReload、pause_turn 的旧行为，以及平台进程/等待实现。端点/错误/DTO 某项相同不意味着全平台行为同构。

## 5. 四角度与内容范围

A/C/D 独立清查候选共1041：本 lane 851、其他模块190；旧244项“库”标签中219经内容重归为 App/支持，仅25保留库排除。851逐项四分类在归约源中是 local_outtake/责任归属，不是851项实现认证；本次按这些已核来源完成消费者采纳，不将之改写为851个 full_leaf。

共享198=54 pre+144 release，其中127 runtime、71本 lane；与候选851无重叠，但与旧共享81有78重叠，余3已有模块承接，不能机械累加各计数。

catalog 最终证明为 **30分片 / 210唯一责任记录 / closed210 / 缺失0 / 重复0 / remaining0**；另六 scope 已闭合。B 活动标签一致、缺 handler0。范围不含全 App 依赖逐体认证；完整函数数会受 IDA 元数据补定义变化影响，不能当 PE 新增代码证据。

## 6. IDB 持久化

最终保存清单记录562条事实、350个目标、7处高置信重命名、148处模块归目录、27处原有注释保留；56组（53模块+3根支持组）及112次成功保存回执，350条独立读回无失配。读取/检查原始回执和保存文件，不把文字摘要当保存。

Windows 当前独立保存制品：`intermediate/aimami/1.2.7/windows-x64/version-delta/trials/release-fd5f0c5aa7d5-final-root-unattributed-support-saved.i64`，**738,972,383 B**，SHA256 **`0ff4fc87d1308471f1a803d80f23c9d792c5325812a54265d8dacbf77b21dec5`**。它与当时活动 `<内部存储>\AiMaMi 1.2.7 win64-release.exe.i64` 路径不是同一个“packed 文件存在性”概念；原活动 packed 路径缺文件不代表该独立制品不存在。未重开 IDB 验证可加载性，本次文档收口不触碰 IDB。

macOS 已有独立保存：349,775,547 B，SHA256 `68fedeab38e84f2fdf6303392bef386c2910431dcd8c76ae41968de27f57d62c`，独立来源见 mac 包，不拿它证明 Windows 保存。

## 7. Plugin / Capability / OTA / Package

未证成新的 Tauri plugin/capability 权限全集变化；Skills 来源值 `plugin` 不等于新增插件权限。Windows app-server initialize 的 clientInfo.version 已证从1.2.6改为1.2.7；macOS Info.plist同样变化，但两者不能证明 OTA 在线发布、下载或安装已验。没有运行 App、更新器或写用户数据。

## 8. Gate leaf 与后续行动

本包交付的是同构建 SHA 绑定的静态差异结论。最终双审、grounded七项和当前静态比较 readiness 以 `manifest.json.release_comparison`、`gate-report.json.release_comparison` 为准；不得用历史正文或旧顶层 pre 字段替代。

**保持 false**：release consumerStartReady、strictImplementationUse、readyToImplement、implementation_use、gate_accepted、full_leaf_100、dim6、live_reference。实现侧仍须完成自身验收映射与真实 App 对照；本次不执行实现、提交、发布或用户状态变更。

消费者只需从本包 README → SYSTEM-DIFF → logic/FULL-CHAIN-1.2.7.md 与 DELTA-LOGIC-1.2.7.md 阅读当前结论；旧 pre 合同继续保留，原始正文/ASM/传输材料仅经 pointers 追源，不复制到消费者区。

## 9. 最终交付的 OAuth 补证注释持久化

§6的738972383B保存件是前一阶段350EA/56组完整链的保留制品，不删除、不覆写。本次新补齐的OAuth正文另增加5处可重复函数注释并逐地址读回：0x1405cdef0、0x140367780、0x140a4dbb0、0x141514c70、0x141519c10。未新猜Rust模块、未重命名或移动现有根支持条目，标准库等待实现不伪归App。原148处模块归目录及350EA证据不变，/vibe不存在。

新增注释前官方flags4独占快照739111647B/SHA3254da78af600638f4786a2a009b1b7643de7fa7f8ff7b8953181af378f06f8a；写后官方独占保存 **739128031B / SHA e412394647af56e739937e89eb9b3687c9792195d9bbfc19f32bf6f92c92b432**，当前保存制品为trials/release-fd5f0c5aa7d5-oauth-supplement-saved.i64。Windows host与SMB完整文件哈希一致，5/5注释读回匹配。活动IDB路径未变，无重载/打开/二进制补丁；官方保存正常flush源工作组件，不声称源组件字节完全不变。

正式回执：intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-oauth-supplement-persistence-receipt.json，含真实工具请求/回包的transcript指针及内容哈希。这是原完整持久化链的增量，不把5处注释冒称新的五功能或full_leaf认证。

## 10. Catalog消费者合同的完整承接

DELTA-LOGIC第11节已按210条责任建立正文映射，而不是只列closed计数。消费范围包含：系统代理用户注册项/PAC/WinHTTP候选顺序及后来源失败保留；模型pair与五别名选择；诊断敏感键与账户摘要；thread/list双归档分页/总deadline/重复cursor与本地回退；项目DB与rollout cwd边界；只读诊断/批修复及后置重扫失败不回滚；analytics两遍聚合与饱和计数；provider导入逐项错误与credential revision；managed quiet/恢复/两备份清理、最多20备份与坏TOML挽救；消息2MiB/64KiB预算与服务失败回退warning；周期额度刷新和保持router退出；staging身份保护与原子替换的具体重试；Windows凭据读取/写入/删除及临时内存清理；具体任务适配与析构边界。

这些主要是原有合同的完整迁移/职责外提，不自动计成release新增功能。正文列清每个调用实际可达条件、失败与晚期副作用；allocator/drop等支持体不复制原始代码，只承载应用所需所有权边界。任何精确来源冲突在第11节单列，不从closed/hash推断冲突已解决；不能据此提前宣布全部消费者达标。

## Provider导入清理定点裁决

最终commit前，包装器把本次导入产生的88B revision guard条目byte+80置1，表示抑制条件删除。最终state commit的out tag=-1为成功，成功支保持1；非成功支才置0，随后销毁接出的guard buffer。只有byte+80=false才按保存的路径和文件identity尝试删除新revision；identity不等拒删，删除失败只日志，不能保证所有失败revision均已删除。不能把另一层revision写入核的-1失败编码混用于state commit；亦不能把内存drop当成磁盘回滚。pre/release这段清理方向同形，caller前检时机变化仍保留。异常展开、OOM及未完整展开的collector内部不被扩成全局补偿证明。

仅原192叙述被授权纠正；逐项错误/字段校验与caller前检时机差异不变，所有实现门不提升。完整依据见DELTA-LOGIC第11节及pointers中的provider-import-correction。
