# Windows 1.2.7 pre→release — 逐面差异与迁移合同


同一版本按SHA比较。历史1.2.6→pre合同不变。下列为已闭合分析的消费者归约，不包含原始伪代码、ASM或批处理日志。原始来源通过pointers追溯。

## 1. 判定口径

changed表示有同平台内容差异；same/retained表示指定面保留；extracted/inline表示内部实现拆合，不能当功能新增/删除。每条只覆盖其文字所指分支，不等同full_leaf或实现放行。正文状态为交付中的静态合同，最终审查状态以manifest.release_comparison为准。

## 2. 协议请求、响应和SSE（53面）

来源：`release-fd5f0c5aa7d5-content-closure-protocol-request-sse.json#/facts`；SHA256 `dd0ce1af8b6668d83e09119b975d8c57aa0096e9b886febeba3fd5d6419c02cb`。只采纳最终明确分支；源中未作全局完成声明不表示本包可越过其范围。

| 条目 | 指定面裁定 | 消费合同 |
|---|---|---|

| wire-api-enum (`/facts/0`) | same | pre：pre Windows序列化/visitor已有0/1/2及三个名称。；release：release仍为0=openai-chat、1=openai-responses、2=anthropic；parser对其它字符串返回错误。 |

| codex-three-dispatch (`/facts/1`) | extracted | pre：pre单个0x1406de860内按provider+254分流，2在其内部构造Anthropic请求再await0x1406f2900。；release：release0x140448d40按同一+254枚举分流：2调用0x1404597e0，1走native Responses路径，其余走Chat转换0x1409d84f0。 |

| native-compaction-refusal (`/facts/2`) | same | pre：pre已有HTTP400和router.native_compaction_required，不生成兼容性伪摘要。；release：release保留HTTP400及同一reason；completed/panicked状态是Future生命周期守卫。 |

| search-state-bool-surface (`/facts/3`) | same | pre：pre get/set_claude_web_search_compat接收enabled布尔，getter返回成功envelope中的布尔字段。；release：release getter/setter仍存在，setter解析enabled并传入同形后台任务；getter经配置快照取结果，输出+77为bool。 |

| hosted-retain-flat (`/facts/4`) | same | pre：pre在provider循环0x1406ec330读取feature配置后retain tools。；release：release把同一净化提前到0x140455600复制请求之后。 |

| hosted-retain-nested (`/facts/5`) | same | pre：pre已有input中的additional_tools递归层净化。；release：release同样只处理type=additional_tools且tools为数组的项，调用同一flat retain；计数累加，净化为空的wrapper被移除。 |

| native-chat-history-retain (`/facts/6`) | same | pre：pre在wireApi=0时对input执行相应历史项清洗。；release：release在wireApi=0时执行同职责的输入历史清洗。 |

| hosted-feature-vs-search-state (`/facts/7`) | same | pre：pre配置文件特征缓存用来决定是否去除hosted image工具。；release：release保留缓存/mtime失效与[features] image_generation=false检测。 |

| legacy-reasoning-request-refusal (`/facts/8`) | same | pre：pre识别input reasoning encrypted_content中的旧AiMaMi Claude前缀并拒绝。；release：release仍先识别该旧前缀并返回明确重新建会话提示。 |

| anthropic-compaction-input-defense (`/facts/9`) | changed | pre：pre请求helper在旧reasoning拒绝后进入模型/预算与库转换；原compact路由已有独立拒绝。；release：release请求helper增加对compaction以及特定encrypted compaction输入的直接拒绝。 |

| model-capabilities-and-options (`/facts/10`) | changed | pre：pre从模型后缀/能力选择预算，调用旧转换入口，默认转换常量0x2000。；release：release按模型能力组装options位集合、effort、工具和输出格式能力，经验证后调用转换。 |

| namespace-declaration-atomicity (`/facts/11`) | changed | pre：pre由旧声明收集/转换逻辑消费tools与input。；release：release在转换开始先遍历namespace tools/children，包括input声明中的tools。 |

| signed-history-ordering (`/facts/12`) | changed | pre：pre旧转换在构造messages时合并系统/相邻消息和tool use/result序列。；release：release为签名重放与动态工具历史增加保序能力约束。 |

| mixed-replay-schema-versions (`/facts/13`) | changed | pre：pre无同一请求helper中的新版本保序验证阶段。；release：release检查签名历史的aimami_tool_schema/replay版本，拒绝混用或不支持的重放版本。 |

| allowed-tools-preservation (`/facts/14`) | changed | pre：pre在旧tool_choice转换分支中处理请求；不具有release的这一前置保留约束错误出口。；release：release对/tool_choice/type=allowed_tools执行显式拒绝，说明不能安全保留约束，不自动放宽。 |

| adaptive-forced-tool-choice (`/facts/15`) | same | pre：pre已有requires adaptive thinking and cannot honor a forced tool_choice错误。；release：release保留同一模型能力冲突拒绝。 |

| thinking-effort-model-constraints (`/facts/16`) | changed | pre：pre旧模型能力路径含thinking预算和缺少已签名thinking历史的冲突处理。；release：release把禁用thinking的能力检查、effort合法性与重放合同分开，具有明确cannot disable thinking错误。 |

| structured-output-contract (`/facts/17`) | changed | pre：pre旧请求转换没有release这组text.format/schema/strict的同职责前置出口。；release：release显式读取text.format；对json_schema提取schema和strict，依模型能力写output_config.format或返回错误。 |

| tool-schema-post-normalization (`/facts/18`) | changed | pre：pre App请求helper在库转换后直接补model/返回，没有同位置的post-normalization循环。；release：release成功转换后在相应选项下检查tools及system tool_addition里的tool_definition。 |

| model-suffix-and-http-headers (`/facts/19`) | extracted | pre：pre已有[1m]模型后缀及context-1m beta行为。；release：release保留后缀去除并外提header构造。 |

| real-anthropic-stream-chain (`/facts/20`) | extracted | pre：pre实际HTTP响应→vtable0x141A37BB8→poll0x140B65530→0x1407657B0→driver0x140BE2C50→事件分派0x14116A730。；release：release实际HTTP响应→vtable0x14185C6F0(slot24=0x1406EDF80)→0x140CE0D60→0x1404AE850→0x140FA97D0→message_stop的0x140FA5770。 |

| sse-utf8-strictness (`/facts/21`) | changed | pre：pre UTF8 feed在非法序列路径追加EF BF BD替换字符，保留可能跨chunk的尾部；超过三个字节的旧pending也经lossy转换。；release：release增量UTF8 decoder区分完整、可续接尾部和非法序列。 |

| sse-eof-no-inferred-success (`/facts/22`) | changed | pre：pre EOF时若0x141167870发现已有output或非空block内容，会合成max_tokens并调用终结器，返回incomplete；无内容另有stream_truncated。；release：release若非已终结且非aggregate fallback完成，EOF统一报Upstream Anthropic stream ended before message_stop/type=stream_truncated。 |

| message-start-validation (`/facts/23`) | changed | pre：pre缺message仍可进入created/in_progress发射路径，未有同等duplicate标记检查。；release：release要求message为object且仅一次；+365置message_started，重复/非法返回invalid_response。 |

| block-start-and-index (`/facts/24`) | changed | pre：pre对缺失/错误index及未知type多走空输出；没有相同的duplicate index前置拒绝。；release：release要求非负整数index，已存在index报Duplicate Anthropic content block index；content必须在message_start之后。 |

| delta-index-state-validation (`/facts/25`) | changed | pre：pre recognized delta缺index、未知block等多返回空数据。；release：release recognized text/thinking/signature/input_json delta要求有效index且已有匹配block。 |

| delta-accumulation (`/facts/26`) | same | pre：pre按block累积text/thinking/partial_json，signature更新原始block。；release：release保留同样数据类型分工，在新状态校验通过后执行。 |

| block-stop-deferred-closure (`/facts/27`) | changed | pre：pre content_block_stop直接调用0x141163EF0关闭并发done事件；缺index静默空输出。；release：release content_block_stop只标block+157已关闭，完整输出收口延后至message_stop验证。 |

| open-block-at-message-stop (`/facts/28`) | changed | pre：pre终结器遍历现存block并调用关闭helper，能补关闭未stop的内容。；release：release先检查所有已登记block的closed标记；任何open block使failed/invalid_response。 |

| tool-json-terminal-validation (`/facts/29`) | changed | pre：pre在block关闭helper里进行工具输出组装。；release：release终结前选累积partial_json或原input，要求id/name非空、参数能解析且必须object。 |

| thinking-signature-terminal (`/facts/30`) | changed | pre：pre将thinking/reasoning item关闭与转换放在宽松block finalizer中。；release：release终结前要求thinking.signature或redacted_thinking.data为非空string，且能形成重放信封。 |

| pause-turn-runtime-delta (`/facts/31`) | changed | pre：pre精确识别pause_turn并记录treating it as completed，返回completed。；release：release pause_turn落入不支持terminal reason，返回failed，error.type=invalid_response，message=Missing or unsupported Anthropic terminal reason。 |

| anthropic-terminal-reason-matrix (`/facts/32`) | changed | pre：pre除max_tokens/model_context_window_exceeded/refusal外，缺失或未知reason默认completed。；release：release成功白名单end_turn/tool_use/stop_sequence；max_tokens与model_context_window_exceeded→incomplete/max_output_tokens；refusal→incomplete/content_filter；缺失/未知→failed/invalid_response。 |

| unknown-server-block-boundary (`/facts/33`) | same | pre：pre只登记text/thinking/redacted_thinking/tool_use，其他string type不登记。；release：release对well-formed但未知的server content block同样不登记、不转成客户端工具调用。 |

| sse-event-envelope (`/facts/34`) | same | pre：pre按event/data行切分，data JSON驱动事件type，未知事件忽略。；release：release保留CRLF/LF处理、多data行拼接、JSON type覆盖event名称及未知事件忽略。 |

| aggregate-response-vs-stream (`/facts/35`) | changed | pre：pre单JSON Anthropic响应可转换为事件序列或聚合Responses结果。；release：release仍保留两条aggregate转换职责，并在shape、block字段、签名、terminal reason上收紧。 |

| vendor-error-payload-scope (`/facts/36`) | same | pre：pre failed response可保留上游error.message和可选type。；release：release同样从error/message/detail/status_msg/base_resp提取可展示错误并组failed；协议自产错误为固定字符串。 |

| safe-error-summary-redaction (`/facts/37`) | same | pre：pre已把错误body摘要为upstream_status/body_bytes/error_fp，可选安全type/code/param。；release：release保留同一安全摘要算法与字段过滤。 |

| chat-request-mapping (`/facts/38`) | same | pre：pre已支持Responses input/messages、工具历史、reasoning摘要、function/custom/namespace声明到Chat请求转换。；release：release保留同一可见映射面。 |

| chat-aggregate-response (`/facts/39`) | same | pre：pre聚合Chat响应生成text、reasoning、function_call输出及usage和终态。；release：release保留同一输出形状和严格Chat finish_reason映射。 |

| chat-stream-completion-guard (`/facts/40`) | same | pre：pre真feed_line为0x140A4AD10，真handle_event为0x140A375F0，已拒绝completion后的内容或冲突finish_reason。；release：release0x14098FAD0保留同一逻辑和usage/模型更新、tool index片段累积。 |

| chat-finalizer-and-item-closure (`/facts/41`) | same | pre：pre Chat finalizer+477幂等，先flush reasoning/text/tool状态，再组Response终态；text和reasoning各有done事件。；release：release保留同一合同，未无条件返回completed。 |

| leading-think-flush (`/facts/42`) | extracted | pre：pre首段<think>拆分与未闭合开标签剥离由helper组合完成。；release：release把开标签尾部处理内联进flush；仍仅识别leading完整<think>...</think>，正文头部空白与后继空白有独立处理。 |

| billing-header-line-stripping (`/facts/43`) | same | pre：pre已识别x-anthropic-billing-header:行前缀并剥除首行。；release：release保留同一前缀长度27与换行截取。 |

| stop-reason-diagnostic-classifier (`/facts/44`) | changed | pre：pre runtime stop mapper对pause_turn默认completed。；release：release诊断分类器仍能给pause_turn单独标签，但runtime terminal body已拒绝它。 |

| anthropic-trace-dto (`/facts/45`) | changed | pre：pre trace summary已有事件/错误及用量诊断。；release：release扩展error_class/error_kind、delta_counts、first/last_byte_ms、max_gap_ms、block_starts/stops、message_stop及usage采样/省略计数。 |

| cache-control-trace-count (`/facts/46`) | same | pre：pre发现cache_control时增加总计，并按ephemeral/other计数。；release：release保留相同计数分支。 |

| reasoning-model-token-boundaries (`/facts/47`) | same | pre：pre模型token匹配考虑前后分隔符与日期后缀。；release：release同样通过边界位图与8位数字日期后缀避免把子串误识别为能力token。 |

| tool-declaration-real-pair (`/facts/48`) | same | pre：pre0x1408AAEB0实际以type/custom/name/format/description构造工具声明，非SSE事件handler。；release：release对应工具声明body为0x1409F06C0，转换function/custom工具，description与schema信息按类型组装。 |

| namespace-output-tool-metadata (`/facts/49`) | extracted | pre：pre工具输出在旧block finalizer中组装。；release：release将namespace映射、纯文本output message、Read.pages处理外提到明确helper。 |

| pure-stream-support-helpers (`/facts/50`) | extracted | pre：pre已存在Unfold队列拉取、JSON前缀识别、stream state初始化与清理。；release：release分工仍是队列/size_hint/JSON sniff/state初始化/清理/trace包裹，业务终态由上述真实handlers裁定。 |

| official-image-passthrough-scope (`/facts/51`) | same | pre：pre已有独立官方images passthrough Future0x1406ED980，具有router关闭、无账号登录与ChatGPT凭据边界。；release：release0x140453FE0保留同职责独立Future与官方图片请求边界；不是release首次外提。 |

| relay-server-entry (`/facts/52`) | same | pre：pre输出relay proxy server端口并进入服务Future。；release：release保留对应启动/监听生命周期入口；此处未发现协议注册总量结论。 |

## 3. 运行时显示及Skills（41条）

来源：`release-fd5f0c5aa7d5-remaining-runtime-skills.json#/clauses`；SHA256 `78c8adba4c7f4c1d9bb563887f3d5385d08e51893fe41b7cda7164ab0454859c`。只采纳最终明确分支；源中未作全局完成声明不表示本包可越过其范围。

| 条目 | 指定面裁定 | 消费合同 |
|---|---|---|

| R01 (`/clauses/0`) | same | 刷新前选择值优先从进程内RuntimeDisplaySnapshot取；快照不可用才取App状态并构建快照；poison/无快照返回0xff，不把它当普通false。 |

| R02 (`/clauses/1`) | same | refresh_usage_snapshot业务核先持锁读progressive状态并复制状态持有者+528/+536的字符串，再解锁做用量刷新，重新取锁后保存；不在慢刷新期间一直持该锁。不凭布局猜该字符串是root或accountKey。 |

| R03 (`/clauses/2`) | same | 首次或再次取锁poison，以及初始progressive状态读取错误均返回错误；每条错误支路释放锁/捕获资源，不返回伪成功。 |

| R04 (`/clauses/3`) | same | progressive保存失败不撤销已取得的用量结果，而追加PROGRESSIVE_STATE_SAVE_FAILED的code/message warning继续构建返回快照。 |

| R05 (`/clauses/4`) | same | 随后构建状态并以usage-refresh上下文回写；该后置状态回写失败只日志/释放错误，不把整个成功响应改成失败；没有回滚已完成保存。 |

| R06 (`/clauses/5`) | same | refresh_usage_snapshot任务层真实core是release0x14036d9e0/pre0x140ececc0；原生任务构造、poll与adapter只用于到达core，不能代替R02—R05。 |

| R07 (`/clauses/6`) | same | 另一usage caller先读选择值/状态标记，成功后用source=usage更新显示快照；失败立即传播，广播之前不把错误对象当snapshot。 |

| R08 (`/clauses/7`) | same | 可选重试要求调用方flag且返回状态byte==2；最多三次额外刷新，使用800<<attempt与原生时间余数计算等待值，额外轮次第四参数固定0。 |

| R09 (`/clauses/8`) | same | 每次额外刷新成功都会更新共享显示快照并广播usage；晚期任一刷新失败直接返回错误，不回滚前面已更新的全局状态。 |

| R10 (`/clauses/9`) | same | 额外轮次状态脱离2时返回该次快照；三次仍为2则返回保留的首次快照，即返回值和最近广播/缓存快照可以不同，不能擅自统一成最后结果。 |

| R11 (`/clauses/10`) | same | 广播Future外层state0初始化/3恢复；内层state0创建任务/3poll；Pending返回sentinel并保留环境；Ready消费句柄，join错误格式化为应用错误，只有业务成功调用update_and_emit。 |

| R12 (`/clauses/11`) | same | Future外层/内层state1再次poll分别走completed guard，state2走panicking guard；这些是runtime控制状态，不是DTO或业务枚举。 |

| R13 (`/clauses/12`) | same | update先锁显示状态；旧/新authRevision同epoch且新sequence较小则复用旧快照，防止旧更新覆盖较新状态；没有revision或epoch不同走正常分流。 |

| R14 (`/clauses/13`) | same | full/usage/progressive/push等普通source默认取新快照；account且带key只合并匹配账户，任一侧找不到key则保留旧快照。 |

| R15 (`/clauses/14`) | same-inline-movement | auth与account-alias按accountKey合并旧显示用量和新身份/备注，再重建activeAccount；旧activeAccountKey相同才保留对应连接状态；refreshReport按原有Option分支复制。pre独立0x140d42ec0在release内联进0x140370b40。 |

| R16 (`/clauses/15`) | same | account更新只替换指定账户并更新活动账户相关状态；lastScanAt取新旧较大值，不因单账户更新倒退。 |

| R17 (`/clauses/16`) | same | full/usage/account/progressive分支触发FILETIME到Unix时钟更新；auth/account-alias/push不由这个switch触发该调用。全局值先替换，再解锁，再投递main/emit。 |

| R18 (`/clauses/17`) | same | 全局poison时不写共享全局，仍可从输入构造局部快照走后续广播；emit返回错误被清理/忽略，未见撤销全局赋值的补偿。此处只判执行/失败顺序，不裁决事件JSON外层。 |

| R19 (`/clauses/18`) | same | 0x1402cf600不是SkillListPayload/Option序列化器，而是刷新后错误/告警累积器；tag1将上下文与错误合成warning，否则遍历48B code/message记录，遇-1结束有效项并清理后续资源。 |

| R20 (`/clauses/19`) | same | remove_accounts等真实caller在主操作后运行broadcast Future，再把该结果累积进先前结果；保留RUNTIME_REFRESH_FAILED_AFTER_REMOVE等操作后warning上下文，不能据后续刷新失败推断账户删除已回滚。 |

| R21 (`/clauses/20`) | retained-accepted-getter-contract | load_runtime_display_snapshot仍是零参数、只读进程内getter；未初始化/poison快照不可用以data:null表达，成功envelope不因此变失败。事件隔离冲突不推翻getter。 |

| S01 (`/clauses/21`) | same | load_installed_skills真实链为IPC→构造任务→poll→0x1406d3470闭包→0x140374010 core；pre闭包0x140186650→0x140a75a10。闭包只透传96B结果，不把它当4字段SkillListPayload。 |

| S02 (`/clauses/22`) | same | native query在获取Skill mutation锁之前先执行；锁poison为硬错误，会清理native结果而非直接回退管理库存成功。 |

| S03 (`/clauses/23`) | same | native query创建/取得本平台app-server会话后带30常量超时上下文；当前目录规范化失败为错误，所有查询只做静态取证，本节点未启动进程或请求服务。 |

| S04 (`/clauses/24`) | same | project/list每页limit=100、初始cursor=null；最多20次，遇空cursor或重复cursor结束；分页/解析错误和超限设置partial而不是把所有库存静默当完整。 |

| S05 (`/clauses/25`) | same | 从项目响应收集可用绝对目录，canonicalize并去重；单条无效路径被跳过并标partial；总cwd列表最多256项（含初始目录），达到上限标partial。 |

| S06 (`/clauses/26`) | same | skills/list请求包含cwds及forceReload=false；不是每次强制刷新外部server库存。前端缓存时间改变不能推出此参数新增。 |

| S07 (`/clauses/27`) | same | skills/list传输/响应解析失败为query错误；caller在管理库存可读取时转换为skills_native_unavailable warning并返回管理项，不能当整个IPC失败，也不能伪造native空数组。 |

| S08 (`/clauses/28`) | same | 返回的每组cwd必须canonicalize后属于请求集合并且不重复；越界/重复cwd或canonicalize错误走错误结果而非直接信任返回路径。 |

| S09 (`/clauses/29`) | same | native item路径必须绝对、文件名精确SKILL.md（8字节），否则query错误；返回错误向量非空、cwd返回数与请求数不符均使partial=true。 |

| S10 (`/clauses/30`) | same | 管理库存metadata读取失败时返回空管理库存的成功容器；存在根则walker扫描并排序。这里只对管理读取/合并界面判等，不由此声称mutation导入/恢复/删除全链已复审。 |

| S11 (`/clauses/31`) | same | managed与native通过canonical path对齐：已有项保留管理身份，只更新enabled；同路径不同enabled首次冲突写None并记冲突集合，后续重复不再把冲突重置成某一方bool。 |

| S12 (`/clauses/32`) | same | 新外部项managed=false，ID取外部路径；双侧该构造路径把updatedAt置None、title置None，summary保留native描述Option；enabled取native bool。source为既有user/project/plugin/system/admin/native映射，而非本次才新增来源枚举。 |

| S13 (`/clauses/33`) | same | native部分不可用、路径canonicalize失败、路径父级缺失、enabled冲突等合并异常设置partial；最后仍排序全部结果，返回skills_native_partial code/message warning。 |

| S14 (`/clauses/34`) | same | native完全失败时只附一个skills_native_unavailable对象；部分失败只附skills_native_partial对象；warning成员是code/message，不是字符串数组。两warning双侧既有。 |

| S15 (`/clauses/35`) | same | 最终handler才将业务库存/告警转换成CoreEnvelope，其data恒为items/total/rootPath/lastScanAt四字段对象；items才是InstalledSkillSummary数组，不能把外层Result/CoreEnvelope当data数组或Option。 |

| S16 (`/clauses/36`) | same | handler成功分支现场读取Windows时间，减0x019DB1DED53E8000，再除10000000取Unix整秒；纪元前/差值错误回落0。lastScanAt是该次handler完成时的扫描时间，不是item.updatedAt最大值，也不是毫秒。 |

| S17 (`/clauses/37`) | retained-field-contract | InstalledSkillSummary双侧既有11字段、7个source值；title/summary/updatedAt以及enabled三态边界不改。既有字段不计release新增；DTO由字段序列化器而非CoreEnvelope内存大小确认。 |

| S18 (`/clauses/38`) | changed-frontend-only | Skills页installed-skills查询由pre staleTime=Infinity改release60000ms；release显式refetchOnMount=always、refetchOnWindowFocus=false，并提供刷新按钮按当前tab手动refetch。不是backend IPC参数变化。 |

| S19 (`/clauses/39`) | changed-frontend-only | release Skills页展示warnings.message并以code为key，显示source标签/managed=false只读/disabled状态、外部directoryPath；managed!==false才显示remove按钮。pre native字段已存在但该页未作这些消费。 |

| S20 (`/clauses/40`) | same | 导入/移除/恢复成功继续invalidate installed-skills；移除/恢复同时invalidate skill-backups，删除备份只invalidate backups。前端刷新不是后端可写权限放宽，既有External Skills are read-only守卫仍有效。 |

## 4. 账户、刷新与平台既有边界

来源：`release-fd5f0c5aa7d5-content-closure-accounts-oauth-platform.json#/clauses`；SHA256 `cec2672397394c72d1201f3bf6cf291ea4905f7e93262aec0b90c9640f780b57`。只采纳最终明确分支；源中未作全局完成声明不表示本包可越过其范围。

| 条目 | 指定面裁定 | 消费合同 |
|---|---|---|

| S01 (`/clauses/0`) | same | 先读registry；读取/解析失败直接返回原错误；账号集合为空或key不匹配返回account-not-found，未开始写auth。 |

| S02 (`/clauses/1`) | same | 目标snapshot与现有outgoing snapshot须有父目录，规范化父目录等于managed snapshot根；越界和canonicalize错误在拿锁/写入前返回。 |

| S03 (`/clauses/2`) | same | 目标/旧active路径按32B路径记录组成集合并排序/去重后取得所有权；集合或锁失败不进入后续写入；不是只锁目标文件。 |

| S04 (`/clauses/3`) | same | 路径所有权后依次获取.live-auth.lock与.account-domain.lock；第二把失败释放第一把，不带锁返回。 |

| S05 (`/clauses/4`) | same | 所有权等待后重读registry与目标snapshot；snapshot位置与先前位置不同报74B错误，不使用旧预览指针覆盖新位置。 |

| S06 (`/clauses/5`) | same | 重读live active身份；outgoing身份或snapshot路径相对锁前变化报95B错误；尚未开始目标auth写入。 |

| S07 (`/clauses/6`) | same | 同目标已active分支先做credential handoff/最新代际协调，成功可返回幂等成功；不是每次无条件重写/重启。 |

| S08 (`/clauses/7`) | same | handoff遇live缺失可直接成功；读/parse失败返回；live账号必须等于outgoing key，否则Live account changed；在受管snapshot验证后优先保留较新代际，最后才原子更新snapshot。 |

| S09 (`/clauses/8`) | same | 写之前捕获live auth的存在/内容快照；读取不存在是可恢复缺失态，其他读取错误阻断，不把权限错误当文件不存在。 |

| S10 (`/clauses/9`) | same | 目标切换将旧live auth先备份；备份复制失败与目标复制失败都直接返回；保留原active字段直到目标文件成功落盘。 |

| S11 (`/clauses/10`) | same | 目标写入后才更新registry.active key及selected记录last-used时间；registry持久化失败恢复之前live auth；恢复也失败则把两个错误一起返回，不声称切换成功。 |

| S12 (`/clauses/11`) | same | registry写时backup旧registry失败只记warning继续；序列化失败为错误3；原子写失败为错误2；最低schema/默认策略与其顺序保留。 |

| S13 (`/clauses/12`) | same | 提交后清理auto-switch瞬态文件失败作为AUTO_SWITCH_TRANSIENT_CLEANUP_FAILED warning，不把已经提交的磁盘状态冒充未提交；成功结果保留restart建议和warning集合。 |

| R01 (`/clauses/13`) | same | 回滚把原始错误作为第一项保留；开始记录transaction失败，再按上下文存在性解析先前registry/选中generation；不抹去原失败原因。 |

| R02 (`/clauses/14`) | same | 回滚再次获得live/domain文件锁；失败立即进入rollback失败装配并释放已持HANDLE，不在无所有权状态写凭据。 |

| R03 (`/clauses/15`) | same | 回滚前读取当前live凭据，比较当前身份与原/选中身份；不属于本事务拥有的generation时不盲目覆盖别的写入者。 |

| R04 (`/clauses/16`) | same | 恢复选择可以采用同账号更近期snapshot而不是旧字节；先比较last_refresh时间元组，必要时比较JWT exp；同值不是newer。 |

| R05 (`/clauses/17`) | same | 原live不存在则remove_file，允许NotFound；原live存在则原子恢复对应字节。失败进入rollback_failed，禁止把部分文件恢复说成回滚成功。 |

| R06 (`/clauses/18`) | same | 上下文snapshot槽+88、+144、+200按原生顺序恢复；+88还处理registry active key/保留新代际；后两个槽不凭mac名称给文件命名。 |

| R07 (`/clauses/19`) | same | 恢复后重新验证：原不存在时auth仍存在报37B错误；存在时字节/generation不匹配报68B错误；registry.active不匹配回滚目标报58B错误。 |

| R08 (`/clauses/20`) | same | 只有恢复校验通过才记录rollback_completed；失败附加rollback_failed文本。随后总会运行quiet-fence和解；和解错误并入原因，不跳过HANDLE/锁清理。 |

| R09 (`/clauses/21`) | same | 和解返回event_count>0或monitor_uncertain时阻止复启并附180B说明；只有恢复已verified且无writer重入/不确定时才尝试重启。 |

| R10 (`/clauses/22`) | same | 最终错误由保留的原始原因+恢复失败+和解/重启失败聚合；内存释放/CloseHandle后返回。不能仅取最后一个错误或bool。 |

| O01 (`/clauses/23`) | same | 先取account credential锁重读磁盘snapshot并替换调用者缓存；锁/读取/解析错误格式化返回，原缓存不能作为继续刷新依据。 |

| O02 (`/clauses/24`) | same | 有live路径时先判断是否同账号：虚拟auth拒作真实账号；读parse失败或同账号重载路径走live锁后再次读取；更旧snapshot可原子补成live的较新generation。 |

| O03 (`/clauses/25`) | same | force标志a10也不越过writer保护：ChatGPT.exe或Codex.exe存在，或host检测失败/有host集合时，active账号刷新延后；不为了force直接kill。 |

| O04 (`/clauses/26`) | same | 非force且access token.exp距现在至少301秒时不发refresh；若磁盘snapshot较新且仍拥有live路径可同步；路径丢失返回明确错误。 |

| O05 (`/clauses/27`) | same | active客户端仍占auth时：现有token未过期/无法取exp可返回未刷新态；否则返回deferred。无refresh_token则返回独立no_refresh_token内部枚举，不混成网络错误。 |

| O06 (`/clauses/28`) | changed | POST端点/form参数/15秒请求时限保留；User-Agent真实从AiMaMi/1.2.6变为AiMaMi/1.2.7。此为同1.2.7两个build的请求头差异，不是新OAuth流程。 |

| O07 (`/clauses/29`) | same | HTTP Client按配置构造/缓存；手工proxy无URL报错；创建/发送失败映射http client或token endpoint request，不跳过认证配置；没有将mac TLS行为搬到Windows。 |

| O08 (`/clauses/30`) | same | 声明长度或实读长度≥262145均返回response size limit；实读限定262145以发现溢出，最大接受262144；状态码200..299才按成功解析。 |

| O09 (`/clauses/31`) | extracted | pre内联token成功JSON visitor在release外提到0x14071E220→0x1407F1710；均要求access_token，refresh_token/id_token可空/缺省，重复已知key报错，未知key跳过，数组形式顺序保留，尾部非空白拒绝；不是字段减少。 |

| O10 (`/clauses/32`) | same | trim后access_token为空拒绝；非2xx提取error code，invalid_grant/invalid_token/refresh_token_expired/refresh_token_reused/refresh_token_invalidated映射permanent内部态；其他状态保留HTTP+安全错误信息。 |

| O11 (`/clauses/33`) | same | 刷新成功后保留缺省refresh_token/id_token，用现有+返回凭据重建账号；重建失败或新key与原账号不符时拒绝写入，different account错误不被当成功。 |

| O12 (`/clauses/34`) | same | 验证同账号后先原子写account snapshot；写失败立刻返回refreshed-but-snapshot-write-failed。快照成功并不保证live同步也成功。 |

| O13 (`/clauses/35`) | same | live同步再次检查进程、live路径与原字节是否相同；Codex变active或live变更时跳过同步但保留已刷新snapshot，返回refreshed内部态；I/O和序列化错误独立返回。 |

| O14 (`/clauses/36`) | same | 失败日志分类优先snapshot+write、auth.json+sync/write、timeout/timed out、proxy、HTTP429、HTTP5xx、size limit、request/client、parse/other；只记录类别/上下文，不输出凭据。 |

| W01 (`/clauses/37`) | same | 原子写要求parent存在、staging与target不同且同父目录；创建临时文件、写全、同步、关闭、最终替换；任何失败清理临时文件并返回错误。不是直接truncate目标。 |

| W02 (`/clauses/38`) | same | 文件锁等待deadline=20秒，争用sleep25ms；Interrupted重试，其他错误立即格式化，超时返回busy；拿锁失败关闭HANDLE。 |

| W03 (`/clauses/39`) | same | 进程存在检测把basename加.exe并做ASCII不区分大小写转换，CreateToolhelp32Snapshot/Process32FirstW/NextW扫描，匹配返回1，失败/无匹配返回0，关闭所有HANDLE。 |

| W04 (`/clauses/40`) | same | OAuth writer保护同时检查ChatGPT/Codex进程名与host枚举；host检测失败按仍active保护，不把检测失败当安全可写。 |

| W05 (`/clauses/41`) | same | quiet-fence和解先停止监视/持有线程句柄，重扫进程、settle，再查询数据库持锁进程；严格模式错误返回，best-effort NativeOff降为warn；结果含event_count与monitor_uncertain而非单bool。 |

| W06 (`/clauses/42`) | same | rollback外层转发和解的event_count/uncertain，未丢字段；relaunch失败转换成字符串，供聚合错误。 |

| W07 (`/clauses/43`) | same | CredMan blob读取调用CredReadW(type1/flags0)，复制返回blob，擦除Win32提供的blob后CredFree；零长度返回空buffer，不是凭据缺失。 |

| W08 (`/clauses/44`) | same | CredMan字符串读取：奇数字节数与UTF16转换错误保留独立错误；偶数按UTF16转换；所有分支清零/释放临时Win32blob。 |

| W09 (`/clauses/45`) | same | CredMan metadata读取保留UserName/TargetName/TargetAlias/Comment的可空性；结束擦除CredentialBlob并CredFree，不把metadata体当账号switch核心。 |

| W10 (`/clauses/46`) | same | CredWriteW构造type1、Persist3、flags0与既定target/user/alias/comment，复制入参后写；成功/失败均清理复制blob，错误原样由Win32码转换。 |

| W11 (`/clauses/47`) | same | CredDeleteW(type1/flags0)成功回success，失败调用统一GetLastError映射；不存在不是伪成功，在此层保留NoEntry态。 |

| W12 (`/clauses/48`) | same | GetLastError1168→niche2；1312→niche1并附Win32码；其他→niche0附实际码；三态两build一致，不把无登录会话当未找到凭据。 |

| W13 (`/clauses/49`) | same | Windows credential backend工厂成功创建96B对象+具体vtable，失败透传；实际槽含read/write/delete；这些库helper必须保留根/库目录，不能塞进App账户模块。 |

| B01 (`/clauses/50`) | same | 两switch命令进入同一同步执行桥：先busy guard、repository锁、account-transition文件锁、preflight，再quiet acquire；任一步失败释放前锁且不提交。 |

| B02 (`/clauses/51`) | same | quiet后捕获rollback上下文280B：原auth/registry及两额外文件快照；捕获失败settle，只有无writer重入才重启，聚合捕获/settle/restart错误。 |

| B03 (`/clauses/52`) | same | repository锁保护下执行switch磁盘核心；核心失败调用三对中finish_switch_failure，释放transition ownership后刷新runtime，不能只看磁盘core成功宣告全部switch成功。 |

| B04 (`/clauses/53`) | same | 磁盘提交后核验live+registry，再做fence和解；发现writer重入先reconcile并重验，重复重入错误明确停止；随后启动client与live校验。 |

| B05 (`/clauses/54`) | same | CLIENT_RESTART_FAILED属于committed-launch-failed带warning；live verify失败按是否可rollback分支处理，不能把所有启动错误统一回滚或统一成功。 |

| B06 (`/clauses/55`) | same | runtime刷新失败附SWITCH_RUNTIME_REFRESH_FAILED到原错误，warning只记warning；原错误与运行时错误都保留，不静默吞原error。 |

| B07 (`/clauses/56`) | same | logout依次transition/live/domain锁，拒绝router-managed/guardbusy；捕获原live，先备份再删除auth，清active并persist registry；commit失败restore live，restore失败双错误；cleanup为warning。 |

| B08 (`/clauses/57`) | same | 导入先重读backup并比preview指纹，变动即拒绝；逐条token/auth模式/key检查，已存在snapshot须regular/non-reparse且受管；credential/live/domain锁失败写per-row错误继续。 |

| B09 (`/clauses/58`) | same | 导入锁后再次检查snapshot位置/active key；冲突跳过/active保护依a7 replace策略；身份必须匹配，序列化失败per-row错误。snapshot先原子落盘，成功才更新name与registry重建；不声明整文件事务all-or-nothing。 |

| B10 (`/clauses/59`) | changed | 单账号usage刷新使用相同snapshot→OAuth→quota→缓存/历史写入链及错误，Plan unknown guard由8→10，go/pro500等新Plan可保留；这是枚举扩展传播，不是新增quota请求重试次数。 |

| B11 (`/clauses/60`) | same | 单账号缺snapshot、OAuth失败、无法形成API上下文、connectivity probe失败四错误均保留；失败更新cache状态且不会无条件丢掉先前有效quota；终态写runtime snapshot/warnings。 |

| B12 (`/clauses/61`) | changed | quota应用保留window/time有效性规则和QUOTA_HISTORY_APPEND_FAILED warning；Plan unknown哨兵两处由8改10，非unknown新Plan仍更新显示状态。 |

| B13 (`/clauses/62`) | same | 订阅metadata TTL为6小时、失败冷却5分钟；请求失败不替换有效字段，采用原错误分类；Plan字段新增值由共享parser提供。 |

| B14 (`/clauses/63`) | same | reset credits/refresh读取snapshot时再次受管/regular-file校验，key失效返回Account is no longer available；live同账号更晚generation优先，不盲目回写旧snapshot。 |

| G01 (`/clauses/64`) | same | switch preflight只判断目标可用及是否已active；current把旧按路径的virtual-auth guard改为传CodexPaths但仍只读+40/+48 auth路径；apikey、虚拟router与真实OAuth区分相同。 |

| G02 (`/clauses/65`) | same | busy guard按mutex poisoned状态与调用者文本组装错误；拿锁失败或poisoned必须release+wake，持guard成功返回让caller负责释放；不是async body。 |

## 5. ActivityID和plan字段

来源：`release-fd5f0c5aa7d5-remaining-activity-id-plan.json#/facet_decisions`；SHA256 `063a7750de33376e412cdd41a80aec9fabb44df0611bb50c13083359f795f058`。只采纳最终明确分支；源中未作全局完成声明不表示本包可越过其范围。

| 条目 | 指定面裁定 | 消费合同 |
|---|---|---|

| active-row-production (`/facet_decisions/0`) | same | 所谓ActivityID在本scope是未归档threads行的id，不是Windows ETW ActivityID。双侧SQL选择id、rollout_path、model_provider、COALESCE(source,'')及model/NULL五列，COALESCE(archived,0)=0并ORDER BY id。该集合从当前DB生产，不能把函数名或activeThreadIds串池未命中当新缓存/功能删除。 |

| optional-model-column (`/facet_decisions/1`) | externalized | 两侧先PRAGMA table_info(threads)，按精确长度5/字节model判断该列是否存在；存在才拼model，否则拼NULL。release将列名集合读取外提helper，非新增缺列保护。probe/prepare/query/collect失败均有明确Err，不据列缺失就报整库无任务。 |

| collection-layout-not-json-schema (`/facet_decisions/2`) | same | 双侧Result行迭代占120B，经in-place收集压紧为104B业务行；容量与长度分离、尾部drop清理一致。计划snapshot仍424B、恢复snapshot仍176B、顶层汇总仍168B。只证明native数据布局/分支保持，不把这些尺寸伪称serde字段清单。 |

| root-source-and-dedup (`/facet_decisions/3`) | same | 两侧root来源均先检查上下文+960的显式路径；存在则返回单元素32B路径记录，否则枚举候选、解析DB路径并去重。无效候选跳过，正常遇end结束；局部Vec由返回值交接，不存在本体新建全局ActivityID缓存或持久化JSON调用。release路径比较被展开为原生path-components比较，不能改判成新安全保护。 |

| target-validation (`/facet_decisions/4`) | same | pre与release都只接收长度6且精确openai或aimai1目标，其他目标在任何工作前返回unsupported thread provider convergence target错误；不是release新增校验。 |

| root-iteration-skip (`/facet_decisions/5`) | same | 主计划按32B root记录循环；路径metadata获取失败分支构造该root零计数/空变更后继续；数据库打开/checkpoint的硬错误则立即返回Err，已积累的内存汇总被drop。空活动行成功返回零计数；非空行逐104B先校验再进入写阶段。 |

| retry-not-new-windows-guard (`/facet_decisions/6`) | same | 打开写库+checkpoint双侧最多4轮；SQLite busy/locked与Windows暂不可访问的既有错误类别走等待重试，其余错误直接退出。耗尽后附DB holders诊断文字；本scope不执行进程探测/杀进程。不能把release包装器外提当新增安全机制。 |

| plan-snapshot-construction (`/facet_decisions/7`) | same | 双侧serial plan构造按104B输入推进、生成424B snapshot；首个plan构造错误即返回错误及此前可用于恢复的176B条目，drop已构造424B结果；正常完成释放临时176B列表并返回snapshot列表。>=8且rollout路径无重复时可走parallel；小集合或路径重复退serial，局部去重HashSet用后释放，不是持久化缓存。 |

| snapshot-recheck-not-new (`/facet_decisions/8`) | same | 双侧写前均将行数与snapshot数取min并逐项复验；unreadable(-2)及不允许provider组合跳过，缺rollout且需要修改返回明确错误，旧metadata/fingerprint不匹配则更新/重建snapshot，不把release新增名推成新并发保护。 |

| sql-write-and-soft-failure (`/facet_decisions/9`) | same | 双侧事务中UPDATE threads SET model_provider = ?2 WHERE id = ?1（52字节）；affected=0或SQL错误走错误/恢复。snapshot unreadable单独累计unreadable_skipped，并最多保留3条examples、去重保留其rollout路径，然后继续；可读但不允许的provider分支直接跳过，不假装是成功写入。 |

| memory-manifest-key-value (`/facet_decisions/10`) | same | 主计划在COMMIT成功后，可选a5非空且row有rollout_path、snapshot+200存在时，插入调用者传入的HashMap。key来自row+48的32B路径；value是row起始24B id与snapshot+200..256复制出的88B恢复描述，合并后桶项120B。路径同key替换并返回旧value供drop。双侧这些条件/偏移/大小一致；这个调用本身只有内存哈希/比较/分配，没有serde JSON键或文件写，不能凭manifest称呼杜撰JSON字段、新磁盘缓存或备份文件名。 |

| partial-success-return-boundary (`/facet_decisions/11`) | same | soft unreadable可保留其它成功及统计；hard错误返回Err而不是Ok(partial_summary)。但较早root已COMMIT、已改rollout不会因后续root失败或最终验证失败自动全局回滚。单root事务/rollout恢复走既有shared history helper；不把内存结果drop当磁盘回滚。 |

| output-stitching (`/facet_decisions/12`) | same | 正常root结果六计数相加、88B与120B变更列表按顺序拼接；examples整个聚合最多3条，32B路径列表按平台路径比较去重；新建局部集合没有持久化副作用。只有最终全部分支返回成功时交接168B完整汇总。 |

| multi-root-final-verification (`/facet_decisions/13`) | same | 仅root数>1时主计划重做只读校验报告；report内target、read_errors列表、examples列表、scanned/db_mismatched/rollout_mismatched/missing_rollouts/unreadable_rollouts数据均保留。致错条件是db/rollout mismatch、missing或read_errors非空；单独unreadable计数不是hard失败。错误拼接target=、db_mismatched=、rollout_mismatched=、missing_rollouts=、unreadable_rollouts=、read_errors=与examples（分隔符沿native格式）；晚期失败不回滚此前提交。 |

| migration-final-readonly-dependency (`/facet_decisions/14`) | externalized | 迁移协调体pre0x1407F6BE0/release0x140575F30逐root累计成功的DB影响行数与176B变更条目数；末尾必调用pre0x1407E63D0/release0x140565420。getter返回RAX/RDX双计数（native出口已核），但协调体仅检查RAX：非零返回错误，否则返回两个累计数。其前写库/rollout已发生，最终getter失败态没有全局撤销。release将readonly打开外提，flags仍0x8001、无CREATE。 |

| readonly-count-is-best-effort (`/facet_decisions/15`) | same | getter的136B COUNT查询按model_provider统计，82B source查询另按未归档/来源（排除subagent）累计，不能混成同一计数。每root metadata/open/prepare/bind/row错误可记录日志并按0继续，负COUNT夹到0。因此RAX=0不是全部根已被可靠读过的证书，也不意味着第二计数为0；这个软失败边界pre已存在。getter本身只读，不是migration writer。 |

## 6. 健康读取、删除和路径

来源：`release-fd5f0c5aa7d5-remaining-health-delete-path.json#/facets`；SHA256 `60822b0bd3c92926645508e4e66e63ab4fd001482c73c4ca839e10bf60c1fce9`。只采纳最终明确分支；源中未作全局完成声明不表示本包可越过其范围。

| 条目 | 指定面裁定 | 消费合同 |
|---|---|---|

| H01-bounded-line-reader (`/facets/0`) | same | 双侧实际行读取器均以64KiB分片、8MiB单行上限读取，并区别取消、EOF、超长与底层IO错误。 |

| H02-event-parser-terminals (`/facets/1`) | externalized | pre 0x14082d500与release 0x1403765e0保留相同事件派发、thread/ordinal门、错误标记和暂存上限；抽出的helper不当成功能新增。 |

| H03-legacy-number-shape (`/facets/2`) | externalized | legacy token的五个可空计数在pre helper里解析、在release主体内联；非负整数与空值规则保留。 |

| H04-legacy-baseline-and-recovery (`/facets/3`) | externalized | 重复累计值、压缩后首次基线、计数回退及部分使用量各有独立恢复分支，pre已存在。 |

| H05-legacy-delta-and-partial (`/facets/4`) | externalized | 五字段安全差分、加减溢出、缓存/推理子计数及zero/partial降级分支逐项保留。 |

| H06-path-input-and-prefix (`/facets/5`) | same | 分析用路径链是词法归一化及散列，不是文件系统canonicalize；双侧拒绝空/NUL/超长输入，保留Windows扩展、设备、UNC和drive分支。 |

| H07-path-components-and-fallback (`/facets/6`) | same | 双侧.、..、根保留、分量上限、相对基底及unresolved fallback合同保留。 |

| H08-protected-export-and-atomic (`/facets/7`) | consume_existing_closed_facets | 原sessions-analytics-platform中export-format/protected-root/atomic/windows-rename既有条款保持只读；现在明确它与词法path parser不同。 |

| H09-user-rollout-directory-enumeration (`/facets/8`) | same | 健康目录扫描保留两个配置根(+160,+192)、目录/reparse检查、rollout扩展名与UUID/重复ID错误。 |

| H10-health-metadata-and-read-model (`/facets/9`) | same | 目录扫描之后逐条读rollout摘要、路径/引用关系与文件元数据；任何硬读错误先返回，危险动作尚未开始。 |

| H11-health-report-and-recheck (`/facets/10`) | externalized | 健康报告主体保留先观察、重验missing候选、再只读DB比对的顺序，错误不是空健康报告。 |

| H12-orphan-and-stale-delete-planning (`/facets/11`) | externalized | 两种健康清理入口都在完整读模型之后生成安全ID集合；引用图递归、visited和当前集合保护不是本地文件unlink。 |

| H13-health-db-repair (`/facets/12`) | same | 健康DB修复仅把已证实missing的local catalog行标记为missing_candidate=1；不CREATE空DB、不DELETE用户DB、不重建用户目录。 |

| H14-delete-capability-and-id-validation (`/facets/13`) | same | 真正删除服务兼容门和ID规范化在Windows pre已具；无列表、无兼容服务与坏ID各有不同路径。 |

| H15-delete-rpc-and-notification (`/facets/14`) | same | 成功RPC响应不是删除完成：要匹配thread/deleted通知；请求120s与通知5s是本地等待边界。 |

| H16-delete-error-accumulator-and-stop (`/facets/15`) | same | 逐ID错误累计与停止后续RPC的latch保留；并非首错全部中止，也不是所有错误都继续删除。 |

| H17-delete-late-client-catalog (`/facets/16`) | consume_existing_closed_facets | 原late-catalog-failure条款保持：thread/delete之后客户端运行状态决定是否写catalog，晚期失败仅warning。 |

| H18-delete-diagnostic-sanitization (`/facets/17`) | externalized | pre删除体内联的诊断清洗在release抽成0x140b18b50；只影响日志显示不改变删除错误latch。 |

| H19-index-completeness-and-lock-release (`/facets/18`) | same | 索引健康由scan_complete、文件不完整标志和当前fingerprint共同判定；缺meta行是默认状态，查询失败不是健康成功。 |

| H20-native-db-freshness-degradation (`/facets/19`) | externalized | Windows平台DB观测保留只读open、75ms busy timeout、短重试以及schema字段降级；不能把它写成DB修复。 |

| H21-legacy-auth-marker-preservation (`/facets/20`) | same | legacy凭据清理先读virtual-auth-marker.json；marker错误或auth.json不可读时，明确保留marker与api-login-auth-backup.json。 |

| H22-legacy-auth-backup-eligibility (`/facets/21`) | externalized | 恢复只接受可读可解析的user-owned auth备份；虚拟/占位备份拒绝并保留。pre组合谓词在release更多内联，不按wrapper形态推断core变化。 |

| H23-legacy-auth-restore-delete-and-late-failure (`/facets/22`) | same | marker指示原auth存在时恢复合法backup；否则仅删除仍属本marker的虚拟auth；最后依次永久删除backup与marker。 |

| H24-export-streaming-race (`/facets/23`) | consume_existing_closed_facets | 原stream-copy-race与MoveFileExW既有裁定保持；本范围补全不把copy helper消失当新增文件保护。 |

| H25-threads-read-model-core (`/facets/24`) | externalized | 补齐只读threads实体核心，不再拿先前14条SQL事实替代整个健康读模型：pre 0x140876e90与release 0x140a81e80的schema、动态列、逐行终止及不可读降级保留。 |

## 7. catalog/MCP/process/proxy（13面）

来源：`release-fd5f0c5aa7d5-remaining-catalog-mcp-process-proxy.json#/facts`；SHA256 `20c10c1c3837b2a1ec5c378d4aa6d3f698a1df74ad330e84391f666d39914d29`。只采纳最终明确分支；源中未作全局完成声明不表示本包可越过其范围。

| 条目 | 指定面裁定 | 消费合同 |
|---|---|---|

| catalog-json-writer-actual-pre-counterpart (`/facts/0`) | externalized_serializer_same_application_contract | 先执行目录候选校验：pre L143-154、release L112-115/463-480；错误按原结构返回，未生成成功结果。；a7为真直接构建默认模型；为假则遍历每条9-QWORD选择记录，与256-byte原模型按id匹配；未命中则构造带原id/名称的缺省项，再合并模型特性。pre L156-289、release L116-253。；选择项可覆盖slug；缺失slug写JSON null（采用已决同平台精化）。所有补充项强制visibility=hide、priority=1000。pre L291-367与release L254-330。；外层JSON写models及aimami_no_account；布尔为a7 XOR 1而非a7。pre L393-438与release L356-401。；pre在L439-644内联pretty JSON序列化，release L402调用0x1404ce6b0；两者错误均格式化为原错误结果，只有成功才装配模型元数据、序列化bytes与a7。此处判定序列化外提，不将新增helper当新功能。；本体构建JSON及返回待发布内容，不直接写磁盘；原子发布属于caller，不能把生成成功当持久化成功。 |

| catalog-no-account-reader-pre-not-new (`/facts/1`) | pre_existing_facet | 显式aimami_no_account存在时必须bool，否则返回router catalog aimami_no_account must be boolean。；没有显式key时必须models数组，否则返回router catalog has no models array。；遍历模型slug，仅当所有项属于gpt-5.6-sol/terra/luna、gpt-5.5、gpt-5.4固定缺省集合时推导无账户；空集合/任一不匹配/slug非string返回false。 |

| catalog-cleanup-retry-bounds (`/facts/2`) | same_native_retry_and_error_facet | 目标仅是repository路径拼接codex_router_catalog.json；字符串池相邻models_cache.json不属于本调用25-byte路径。；删除成功或错误不满足可重试条件立即返回；仅原生OS错误5、32、33或1224可重试。；初始attempt=1；当前attempt>=6不再重试，因此最多6次调用、最多5次100ms等待。非OS编码错误直接结束，不把所有IO错误都重试。；失败返回错误对象；不宣称删除失败已回滚其它先前写入。；pre L33-138同为最多6次删除、5次100ms等待及原生错误5/32/33/1224；编译器去除饱和计数和unreachable形态不改变重试上限。 |

| windows-process-db-holder-rm-native (`/facts/3`) | current_native_branches_reduced | 0x140b0c650以DB候选根派生主文件、-wal和-shm三个路径；metadata失败忽略该候选。按Windows路径语义去重，不是仅按文本字符串去重。；无资源路径直接空结果；RmStartSession失败记录后返回空；成功后RmRegisterResources失败同样返回空并RmEndSession。；RmGetList先用空buffer探测，只有ERROR_MORE_DATA=234且needed>0才分配668-byte RM_PROCESS_INFO数组并第二次读取。其它返回值不伪造成已有owner。第二次失败返回空并释放资源/结束session。；第二次成功把GetCurrentProcessId作为过滤上下文，真实PID过滤与去重在0x14061c370；不能从LIMIT 0 schema查询推导host_id归属。；0x140b08b70先枚举应用进程，再合并RM持有者；使用PID集合去重，RM条目必须通过可执行名分类才纳入；不是拿所有锁文件的任意进程当ChatGPT。；实际RM过滤体0x140bb0740 L87-95排除PID=0、自身PID及已见PID；L315-392能查询image就使用真实路径，查询失败保留RM应用名，应用名为空则生成PID展示串。RM采集本身不强制ChatGPT名称；只有0x140b08b70合并时再分类。 |

| mcp-edit-three-attempts-actual-pre-pair (`/facts/4`) | same_concurrency_and_publication_facet | 先保证父路径存在，错误直接返回；随后每轮读取config原文并TOML解析，解析失败返回Invalid Codex config.toml，不在坏文档上写回。；旧文档有目标项时先验证现有项；无mcp_servers或不是可编辑table时使用受控插入路径，不把随机TOML value当table。；完成字段修改和序列化后由pre0x14097a580/current0x1409d3f40验证候选、比较受管标记；相同文本直接no-op，不发布新文件。；真正写前再读磁盘，必须与本轮原文length+memcmp完全相同；不同重新从磁盘生成，非覆盖并发修改。pre L211-228/629-712与release L208-225/623-674均最多3轮，不是4轮。；写入由pre0x1407c8880/current0x140534ef0原子发布；发布返回错误即构造操作失败。成功后执行parent sync尽力路径，再load_mcp_servers；后置reload失败仍返回错误，但写入可能已完成，正文没有自动恢复旧config。；删除核pre0x1409751d0/current0x1409ce940同样原文重读、3轮冲突限额及原子发布；这里只裁定实际读取的并发/发布分支，不以command wrapper参数相同替代编辑核。 |

| mcp-managed-marker-two-sided (`/facts/5`) | same_validation_and_marker_compare_facet | 先验证候选config，错误保留原错误且释放候选字符串；验证通过才提取旧、新原文的受管标记。；比较提取条目数、每条byte长度与内容，条数不同或任意memcmp不同拒绝；两侧都是58-byte错误“MCP 编辑会改变路由受管块标记，未修改配置”。；比较通过仅返回候选文本给caller；没有在该helper里持久化，也不绕过caller写前并发复验。 |

| mcp-field-normalizer-two-sided (`/facts/6`) | same_normalization_facet | enabled写bool，transport显式key删除。内部transport byte只有1/2进入http/sse分支；stdio=0与未知=3均走另一分支，不把未知隐式当http。；http/sse删除command与args；非空url写入，否则删除url。stdio/其它删除url；非空command写入，否则删除command；非空args转字符串数组，否则删除args。；env从字符串map重写；旧headers删除，规范headers写http_headers；两侧对应helper为pre0x140979fa0与release0x1409d3970。；保留原始transport枚举及enabled独立含义；不把本规范化器误识别成与MCP无关的relay模型校验0x140cd4910。 |

| process-enumeration-name-path-fallback (`/facts/7`) | current_windows_native_contract | Toolhelp snapshot TH32CS_SNAPPROCESS=2，PROCESSENTRY32W.dwSize=568；snapshot无效或Process32First失败返回空集合，持有的snapshot句柄必关闭。；每条PID先排除自身；可执行名ASCII小写后由0x140b04250分类，接受codex.exe及codex-/codex /codex helper、chatgpt.exe/chatgpt /chatgpt helper相关前缀；不是只允许一个完全相等exe。；命中名称后尝试OpenProcess(0x1000)+QueryFullProcessImageNameW，容量1024 WCHAR；成功再metadata验证路径。查询/metadata失败不升级权限、不返回假路径；Toolhelp caller仍保留枚举名作为降级标识。；0x140b10470仅取最后路径段、ASCII小写并分类，不kill进程；0x1406c9940仅查询路径并CloseHandle，不是终止进程。 |

| process-taskkill-argv-and-failure-recheck (`/facts/8`) | current_windows_destructive_contract | 提取PID并排序去重；空PID集合立即成功不spawn。argv生成/F、/T，再为每个PID追加/PID与十进制PID。明确不是taskkill所有同名进程。；spawn taskkill使用CREATE_NO_WINDOW=0x08000000；spawn失败格式化系统错误。退出码0成功；非零退出码逐PID再用Toolhelp查询。；所有PID已不存在时容忍taskkill非零退出；仍有任一PID或无法确认枚举时返回带退出码和PID列表错误。不会把非零退出码一概当成功。 |

| process-elevation-single-attempt-and-recheck (`/facts/9`) | current_windows_destructive_contract | 先调用非提权taskkill，再以750ms等待目标PID消失；全消失即可成功，保留前次可能非零退出的事实。；仍存活时a4指向授权尝试标志；已置位则返回原错误/仍存活错误，不反复弹权限框。首次提权前置标志=1。；系统可执行路径从SystemRoot取得，缺失降级C:\Windows，再派生系统taskkill路径；通过ShellExecuteExW请求授权，保留进程handle。；WaitForSingleObject等待30000ms：WAIT_FAILED取系统错误，WAIT_TIMEOUT=258返回CODEX_FORCE_KILL_AUTHORIZATION_TIMEOUT；无process handle明确失败；ShellExecute错误1223单独授权取消。；退出成功拿ExitCodeProcess后再以3秒等待目标进程清空，仍存活返回错误，即使提权进程退出码为0也不假称目标已退出。所有持有HANDLE与UTF16 buffer释放；不执行任意shell字符串或实际弹框。 |

| process-transition-fence-native-state (`/facts/10`) | current_native_state_reduced | 转场先尝试关闭流程；relaunch/quiet相关flag决定是保留错误还是进入短等待与后续强制关闭。创建codex-transition-fence线程，spawn失败返回错误并释放三个Arc状态对象。；后台fence每80ms枚举应用进程+DB持有者，对PID集合排序去重；状态比较以集合而非枚举顺序，空集/新PID/已尝试集合独立处理；状态值4才增加reappearance计数。；后台fence失败计数饱和255，状态3只抑制同批PID的重复关闭，不在第3次失败退出；新PID仍可触发关闭。前台同步quiet是另一条路径，具有总deadline和第三次关闭失败的错误出口；其空集需连续700ms稳定后再查非应用数据库持有者。两层边界详见§11转场quiet/fence合同，不可合并成同一个退出条件。；最终仍有非应用分类DB-holder则返回阻止转场的错误，不因应用进程为空就假定DB可安全改写；返回时附重现计数。 |

| engine-selection-path-and-ambiguity-native (`/facts/11`) | current_windows_selector_contract | 优先收集运行中ChatGPT真实image、可验证缓存、默认安装位置、Store及本地engine候选。每个App根检查6布局；候选父目录按路径组件匹配该App根或该根/app，不能放宽成任意bin链。配套四文件固定为codex.exe、codex-code-mode-host.exe、codex-windows-sandbox-setup.exe、codex-command-runner.exe，逐文件读取稳定内容摘要；组合输入按上述顺序为文件名字节、NUL、文件内容摘要的hex文本、NUL，组合摘要hex前16字符作缓存键，不是安装相关文本的摘要。缓存路径还须满足basename codex.exe、祖父目录bin、父目录16位hex及完整四文件验证。多个原始路径不直接等于歧义；合格accepted候选去重后至少2项或后续实际匹配设置ambiguity才报CODEX_ENGINE_AMBIGUOUS；无适用路径报CODEX_ENGINE_NOT_FOUND。Store隐藏查询的3秒时限、stdout/read/wait及先stop/reap的清理错误优先级详见§11引擎合同。版本门仍为既有≥0.155.0-alpha.9.2；原始same裁定不变，校准的是旧消费者简写。 |

| main-process-classifier-not-boolean-contract (`/facts/12`) | native_caller_prevents_false_simplification | 0x140b0bc40枚举后获取有效缓存/发现路径作为分类上下文，0x1405cc230实际对路径调用0x140b0d050筛选。；0x140b0d050返回0/1/2，不是可直接解释为“main process true/false”的公共DTO；含extensions/VSCode/Cursor/Windsurf、node_modules/roaming/Volta/Scoop/Chocolatey路径分支。；已独立查原生callsite0x1405cc2ca：call后0x1405cc2d0为test al,al，0x1405cc2d2为jz，因此caller保留所有非零分类，不只分类1。不得依据helper别名把分类2筛掉。 |

## 8. manager/quit/lifecycle（20面）

来源：`release-fd5f0c5aa7d5-remaining-manager-quit-lifecycle.json#/facts`；SHA256 `5c8ff2e636cfe9b5e14830706a717af3139c6598dbf776c1146b76949025b95b`。只采纳最终明确分支；源中未作全局完成声明不表示本包可越过其范围。

| 条目 | 指定面裁定 | 消费合同 |
|---|---|---|

| F01 (`/facts/0`) | same-owned-state/lock/redaction-facets | 初始化错误先返回；mutation gate与transition锁独立，poison拒绝并释放已取guard；state锁内clone、锁外业务准备、写入前再取锁。UI返回clone与原始state分离，清除provider私有credential/cache槽，不能把去敏返回值当持久化原文。 |

| F02 (`/facts/1`) | CONFIRMED active-core-call-order-change; not mere relocation | pre的deactivate/import/upsert/reorder/activate在state持久化前调用0x140E9EBF0：从旧state与proxy endpoint构造target并调用有文件副作用的config reconciler0x14063BFC0；任一失败短路。release五个对应manager核不再执行该独立preflight，直接走state持久化/专用import核；current wrapper0x1404940B0也直接调用停用核。reconciler并未删除：0x140C3B5D0仍由诊断repair的0x140316C70闭包经0x1403170B0调用。因此不能把五核全部判为same或把额外config读取/修复/错误顺序当编译噪声；本结论不夸大为所有IPC路径绝无其它config写入。 |

| F03 (`/facts/2`) | same-critical-commit/receipt-boundary | 普通save拒绝active route改变和过期receipt；transition save允许调用者提供receipt，但先检查journal/takeover/pending commit。只有state文件write成功后才替换内存state；write后的receipt回读失败会记录错误而非倒写旧文件。NativeOff提交必须有verified ChatGPT write window并先过目标postconditions；RouterOn同样先过postconditions。state DB上下文由选择核返回，不把LIMIT0/schema检查误称host ownership验证。 |

| F04 (`/facts/3`) | same-journal-recovery-safety-facet | journal仅regular file、最大1MiB、schemaVersion1；解析/版本/IO错误不当成无记录。committing记录不被普通阶段覆盖；target不符或同步未确认保留恢复记录并返回ROUTER_COMMIT_RECOVERY_REQUIRED，明确不自动launch ChatGPT。只有条件安全时删除journal；failed/retrying/committing/reconciling/stopping_codex分别保留语义。 |

| F05 (`/facts/4`) | same-late-failure-not-rollback-guarantee | 三种transition完成器均分：committing写失败/commit callback失败→commit_failed；state同步未确认→commit_sync_unconfirmed并保留journal与recovery-required warning；已提交且有warnings→degraded，完成journal记录写失败仅记录，不对已经完成的配置/DB/state副作用承诺自动回滚。 |

| F06 (`/facts/5`) | same-manager-rollback-routing-facets | 根据原snapshot.routerEnabled选择恢复callback：旧routerEnabled为真走0x140327590（NativeOff失败后的恢复），为假走0x1403280B0（RouterOn失败后的恢复），不可把发起失败的transition名称误作恢复目标。后者快路径要求当前routerOff且mode相同并无pending committing；否则经恢复事务/receipt把routerEnabled=0及目标mode写回。restore重新检查journal/takeover/postconditions；sync未确认保留recovery记录。切换调用者只在可恢复的pre-commit失败尝试rollback，late commit不重复rollback；relaunch仍由显式请求与原进程状态控制，quit链传0/0不launch。 |

| F07 (`/facts/6`) | same-cleanup-body-inlined-at-startup; not new cleanup feature | release startup0x14032E2B0把pre0x140EAEF20→0x140D6FA70的revision清理内联：验证目录身份与state字节一致，最多处理4096项，引用中的/未知文件保留；每次delete前再读目录身份和state字节，file identity相符才删除。错误记录后继续建立runtime，不虚构已全部清理。runtime初始化失败记录proxy disabled；bootstrap/self-heal遇pending committing保留恢复状态，不自动启动ChatGPT。 |

| F08 (`/facts/7`) | same-non-excluded-shutdown-order; excluded cleanup removal separately identified | proxy ensure先检查现handle和localhost探测：两次300ms、间隔50ms；stale handle丢弃后重建。shutdown先take proxy handle，再在runtime停止等待5000ms；超时/失败记录错误但不把handle放回，之后清runtime字段并best-effort持久化。App callback tag5按顺序发送stop channel→置共享task flag→CloseHandle本平台持有handle→manager shutdown；tag6且无exit_guard时busy/route-on会阻止退出并展示退出UI。pre同样非voice顺序。pre额外0x14081CDB0的managed-state getter0x140595030被voice-runtime-updated/voice-overlay/native voice模块caller共同锚定，仅作排除域身份识别，不深逆voice。不得把channel或Future析构称taskkill/TerminateProcess；未观测到的DB/tray具体清理不臆造顺序。 |

| F09 (`/facts/8`) | same-quit-success/error/Pending/Ready/drop-facets; native recovery complete | release quit Future0x140E160F0的133CFG块/726指令与pre0x14036FCF0的144块/742指令对照；有效状态0/3执行、1/2重poll拒绝。参数/manager缺失、busy拒绝、JoinError、manager关闭失败均只错误回复不exit。关闭链最终manager(enabled=0,relaunch=0)。仅成功边记录closed_then_exit、置exit_guard、调用App.exit(0)。Pending写DB0/DB8/DC0/DD0=3，返回1；Ready回复后DC0/DD0=1，返回0。Ready与取消经task storage replacement调用真正外层Drop→command Drop→await/join Drop；join/App与IPC参数所有权及96-byte列表逐项释放；成功result的warnings/vector释放由inline改为0x1402C9DB0，不是清理删除。drop不承诺撤回已运行blocking任务或业务补偿回滚。 |

| F10 (`/facts/9`) | same-quiet-dispatch/predicate-facet | pre0x140A9CE20与release0x140A11C90均先判断quiet classifier：需要quiet但参数不是1立即错误，不调用修复handler。23个有效修复label逐桶映射，unknown/default错误；两侧40个16-byte SSE常量集合独立读盘相等。classifier额外识别router_postcondition需quiet，但dispatcher无该label，不能把它算第24个可执行修复。repair all保留传入hook；NativeOff/RouterOn postconditions另校验live proxy状态。 |

| F11 (`/facts/10`) | same-daemon-owned-core-facets; independent true-body-pair | run_daemon_once两侧都提取App后spawn blocking并处理Join Pending/Ready/Error，非仅spawn胶水。pre实际链0x140376FF0→0x14001BC60/table141A111A0→B00ED0→F4C750→3E9E30→1867C0→720EE0；release→E7B610→6D3C50→522CA0。业务核在锁内读取work snapshot/配置，释放锁做refresh，再取锁重读snapshot判竞态；disabled/状态改变、repair/refresh失败与poison分别返回。pre F4F880/B00F20是web-search storage setter而非daemon，已按实际体纠正身份。 |

| F12 (`/facts/11`) | same-schema16/read/migrate/write-facets | 两侧storage在metadata失败时返回schema16默认state；read失败返回错误。空文件、非32-bit schema、未来schema>16、schema<15带receipt及非法receipt均拒绝且保留原文件。legacy activeByIde codex单字符串/null规范为列表；<10/<13/<14迁移、provider id重复/模型有效性和旧inline key迁移保留。write先验证state和receipt可表示性，再序列化、atomic write；schema<=14不允许receipt。不要把metadata error默认化改写成所有IO错误都失败。 |

| F13 (`/facts/12`) | same-top-level-state-serialization-facet; inlined serde helper | pre0x1406C4DB0→92BE20与release0x1403F6520→C61B40均序列化schemaVersion/providers/activeByIde/proxy/codexRouterEnabled/可选routerCommitId/codexRouterNoAccountMode/codexNoAccountSlots/claudeWebSearchCompat；receipt flag false省略该key。release把大量provider/map序列化内联，1184行不等于新增业务字段；相邻字符串codexApiSlots不能越过显式长度当实际写出key。C61B40是App特化Serialize实现，不按显式库依赖标签直接排除。 |

| F14 (`/facts/13`) | retained-provider-safety-facets; F02 overrides blanket sameness | 普通card结构修改在RouterOn时拒绝；provider id精确查找，missing报错；enabled无变化直接去敏返回，有变化更新时间戳再persist。delete先从state/activeByIde移除并persist，之后凭据清理失败仅warning，不回退已经持久化的state。reorder对provider列表本身走排序而非调用provider删除核，activeByIde另走集合规范化步骤，不把它概括成任意删除磁盘资源。upsert revision guard在持久化失败时恢复清理许可、身份匹配才删新revision；成功标记保持，仍引用的revision不因guard析构被删。 |

| F15 (`/facts/14`) | owned-config/backup/recovery-facets-confirmed; no blanket cross-platform claim | 配置拼接核保留非受管原文、受管块和换行边界。恢复takeover/top-level backup先验证、比较目标当前字节再delete/替换，最多100个候选命名；源/目标readback不一致与delete失败单独错误。unlock-auth按状态分支恢复或删除残留，已经写入后再失败没有全局回滚保证。所有这些是Windows来源，不引用mac的原子rename/权限行为。 |

| F16 (`/facts/15`) | shared-interface-content-confirmed | 账户协调锁先取得本地handle；经retry分类的错误按25ms等待和20秒deadline处理，timeout/永久错误封装后CloseHandle，成功交还handle所有权。另有错误kind==35释放错误对象后立即返回try-lock循环的显式分支；不能省略，也不能对所有错误一概承诺20秒退出。该函数不是历史执行核或DB holder，仅复用Windows账户lane原生正文，不改该lane既接受合同。 |

| F17 (`/facts/16`) | content-identity-adjudicated; generated-context-not-manager-callback | 0x14004B8E0虽334853B/9098CFG块，已有54615条完整asm；定向DataRefs读到dev.aimami.desktop/main/index.html、开发URL、dist/icons及嵌入资产路径，入口反复构造配置/资产对象。它不是0x1405E0F00的运行事件callback，不能仅因体积或source hint lib就当漏掉manager业务；资产变化已属于前端/打包既有比较输入，不把资产构造体全库重逆设成新门。 |

| F18 (`/facts/17`) | same-router-switch/async/progress-facets with explicit changed ordinary mutators in F02 | set_codex_router_enabled两侧均提取App/manager/required enabled bool/optional relaunch bool，参数失败不spawn，join Pending/Ready/Error分离；切换核分同目标reconcile、RouterOn准备、NativeOff关闭及no-account mode。进度phase保存raw串：preparing1、stopping_codex/其它2、starting_proxy3、preparing_auth4、writing_config/restoring_config5、reconciling_threads6、launching_codex7、done8；不能把未知raw串丢弃。只有已请求且原先/当前进程条件相符才relaunch。 |

| F19 (`/facts/18`) | positive-content-identity-adjudication | 列表深clone/集合转换、Result析构、XOR、Tokio task分配分别依据实际字段/调用/分支内容归类；没有用位置相邻、体积、source_module_votes或architecture-only排除，也未为它们新增全依赖逐body实现门。 |

| F20 (`/facts/19`) | same-storage-setter/envelope-facets; not network protocol claim | pre B00F20→F4F880→3EAF00→186960→EA7A90 与release C0FAA0→8AF170→E7C340→6D5420→3268F0是claudeWebSearchCompat存储布尔setter链；一次性消费标志和task状态不构成daemon功能。pre CF5CA0只构造ok/Success并放bool data；与HTTP hosted web search是否支持、runtime-state-updated事件outer shape均非同一合同。 |

## 9. 历史改写的操作顺序与迁移

定义分支范围内新增行为列表为空；不能把serializer/恢复helper外提算新持久化能力。保留以下各路径不同的副作用合同：

- **serial**：bounded index→eligible provider checks→task rollout presence→cache fastpath resolve→invalidate cache→optional snapshot→metadata/provider read→three target equality checks→optional post snapshot equality→cache insert/continue; error exits first failure without restoring prior items

- **fallback**：recorded baseline array reverse restore all→if any failure return composite error+baselines→otherwise rebuild plan sequentially→if rebuild succeeds replay serial once→propagate replay failure with extracted baselines; no recursive retries

- **inplace**：build/sort replacements→reject overlap→layout guard→resolve/open/stat→verify all old lines by seek/read→all equal length and !force? seek/write each→best-effort SetFileTime→CloseHandle→success; NO explicit sync_data here

- **stream_temp**：same-parent unique name→open source→open temp with observed write/create option bytes→copy gaps/seek old/write new/tail→SetFileAttributesW→CloseHandle temp→stat source→fingerprint compare→CloseHandle source→MoveFileExW flag9→best-effort parent flush; NO explicit FlushFileBuffers before rename on this branch

- **whole_rewrite**：resolve twice and compare representation→parent/temp open with observed options→reader→plain BufWriter or zstd(level3)→line/native offset guards and replacement writes→buffer flush/encoder finish→SetFileAttributesW→FlushFileBuffers→CloseHandle temp/drop reader→resolve+full fingerprint check→MoveFileExW flag9→best-effort parent flush and file time restoration

⚠ 原地改写、流式临时替换和整文件重写的flush顺序不一样；不是每条分支都在rename前显式FlushFileBuffers。恢复最多重建重放一轮。失败后不能虚构全部旧文件已经自动恢复。完整中文解释见FULL-CHAIN第6节。

## 10. OAuth专项更正与最终字节证明

外层、内部核验和等待单位已经独立补齐并双审：每轮100/250/500ms同步等待、固定三轮、失败清连续计数、末尾两次通过；registry active及auth派生身份都要匹配同一预期；相关保护pre已存在。两条82B错误文本逐字相同。此结论取代“取消三重试/新增saved保护”的错误泛化，但不宣称所有底层目录相同。来源为oauth-post-launch三份manifest，见pointers。

## 11. Catalog全部责任的消费者行为合同

原30分片/210责任计数只证明原始证据分配和闭合，不代表消费者已经拿到业务语义。以下按已有同平台分支归约实际输入、guard、成功/失败、副作用与迁移边界；每个original_id均映射到实质小节。库式支持体不是新增功能，也不把这一映射当作full_app/full_leaf认证。

⚠ 配置、凭据、备份、历史文件和进程副作用只静态描述，不在本次交付执行。失败后的已提交状态按各条实际顺序保留，不能统一假设事务回滚。

### 已授权的精确来源文字纠正

PM已定点授权original_id192的清理方向纠正；原句与原始体的相反分支均已保全。最终commit前，包装器把本次导入产生的88B revision guard条目byte+80置1，表示抑制条件删除。最终state commit的out tag=-1为成功，成功支保持1；非成功支才置0，随后销毁接出的guard buffer。只有byte+80=false才按保存的路径和文件identity尝试删除新revision；identity不等拒删，删除失败只日志，不能保证所有失败revision均已删除。不能把另一层revision写入核的-1失败编码混用于state commit；亦不能把内存drop当成磁盘回滚。pre/release这段清理方向同形，caller前检时机变化仍保留。异常展开、OOM及未完整展开的collector内部不被扩成全局补偿证明。

来源：`release-fd5f0c5aa7d5-provider-import-correction.json`，SHA256 `b5c9c7dfe648d7f136504bc8ca71990b719e3e6d0012249d53d1cea52418d164`。引擎四文件摘要和缺slug=null采用已决同平台精化，不沿旧消费者简写。

<a id="catalog-contract-1"></a>

### 11.1. Windows系统代理候选读取：三来源累积、局部失败与顺序保持

责任ID：0

【裁定与范围】这是系统代理候选收集器，不是代理设置器。pre与release的应用分支保持不变；release外提分行、ASCII小写等支持函数，不构成新增代理能力。返回原生字符串列表，没有新增IPC错误信封。本组五条均只消费Windows同1.2.7的pre SHA 51cb41b613aaa50f410d606e1c4271b1de34576b497a1cba0f734eba46279faf与release SHA fd5f0c5aa7d500fe7fcef21359028fa614ede9965fc48888601883832ee7d8df；consumerStartReady、strictImplementationUse、readyToImplement、implementation_use、gate_accepted、full_leaf_100、dim6、live_reference全部保持false，不以静态内容闭合替代实现或真机验收。

1. 从空列表开始，固定按用户Registry代理→AutoConfigURL/PAC→WinHTTP顺序收集，最后整体去重。Registry查询根为HKCU\Software\Microsoft\Windows\CurrentVersion\Internet Settings，子进程使用CREATE_NO_WINDOW=0x08000000。先reg query该根的ProxyEnable；只有进程成功退出且有损UTF-8转换后的stdout包含0x1或0x00000001，才查询ProxyServer。这是文本包含判断，不是整数解析或精确值比较。启动、输出读取或非零退出仅跳过该来源。
2. ProxyServer取首个包含该名字的行，再取REG_SZ之后的文本并trim；不要求字段名位于行首。首个匹配行缺REG_SZ或值为空便不追加，不继续寻找另一同名行。代理值没有等号时按http候选处理；有等号时按分号分项，以首个等号拆scheme与地址，scheme经trim和ASCII小写后，http/https映射http，socks/socks5映射socks5，未知scheme忽略；空项、缺等号项、空scheme或空地址不产出。候选地址已有://时保留，否则补scheme://前缀；不验证连通性、不启动代理。
3. AutoConfigURL查询不依赖ProxyEnable真假。与ProxyServer一样按首个匹配行、REG_SZ和trim提取非空URL。仅识别长度至少7且以小写file://、http://或https://开头的值；其它scheme或短值产生空PAC结果。file://去掉前7字节后按原生百分号规则解码：有效两位十六进制消费3字节，%+A一类保留原单数位解析分支，无效或不完整百分号按原字节推进；再以有损UTF-8构造路径，但文件内容读取要求有效UTF-8。open/read/预分配/内容解码失败只丢本次PAC结果。HTTP(S)依次构造客户端、执行请求、读取text，每阶段一次；本调用层没有重试循环、显式超时或error_for_status检查，不能补造库默认策略，也不能声称非2xx必在此被拒绝。
4. 获取PAC文本后，仅把副本中的ASCII小写转大写用于搜索，地址仍从原文本切片。按SOCKS5、SOCKS、HTTPS、PROXY四组分别从头搜索，映射依次为socks5、socks5、http、http；输出按组顺序，不按脚本全局出现顺序。token后的地址遇空格、双引号、单引号、分号或Unicode空白终止，再trim，空地址忽略。DIRECT没有单独追加路径。这是静态文本提取，不执行FindProxyForURL或PAC脚本。PAC列表先局部去重再追加，保留此前Registry项。
5. 最后独立执行netsh winhttp show proxy，同样隐藏窗口、检查执行与退出状态并有损解码。逐行trim后要求长度至少12、前12字节精确为英文Proxy Server，再取首个冒号后的非空值；精确六字节(none)忽略并继续。不是本地化标签通配匹配。找到值后复用代理字段解析器，追加到总列表。
6. 最终按字符串长度与字节精确去重，保留第一次出现及其顺序；不做地址语义或大小写合并。内部迭代遇结束sentinel时停止、释放剩余项并返回已收集前缀。普通来源全部失败也可成功返回空列表；借用字符串的capacity=-1不是失败。trim、查找、clone和集合支持只负责切片、分配与去重，不引入新业务或持久化。OOM、负容量、UTF-8切片不变量失败属于原生致命路径，不伪装成可恢复业务Err。

⚠ 后续Registry/PAC/网络/WinHTTP读取失败不得抹掉先前已有候选。真实外部动作限于最多三次reg query、一次netsh show，以及读取本地PAC或获取HTTP(S)内容；没有reg add/delete、配置写入、文件删除、进程强杀或App退出，也不存在需要回滚的代理设置提交。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/catalog-content-closure-proof.json#/records；SHA256=bce646383cd8dbec16ee22c500c74950d00e78c299639e6622710c078425137d。筛选01—05的实际唯一集合为[0,9,17,22,41]，无重复或漏项。
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-01-result.json#/records/0；SHA256=ab3f861bbcf9e1be93e70fbbf4c52791287899ac850b60451277fe10c1c5652a；已核result、record_pointer、原源文件与原源code哈希。
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-01-result.json#/compiler_externalizations、/support_branch_adjudications、/normalization_data_proof

<a id="catalog-contract-2"></a>

### 11.2. MCP、退出和重启的精确命令分派与参数失败边界

责任ID：9

【裁定】只对指定的11个非voice命令臂、公共请求/响应交接和可见适配层判定保持不变；入口迁移不等于整个dispatcher或全部下层业务等价。命令须先匹配长度，再匹配全部字节，不接受前缀。选中后返回1仅表示请求已处理；未匹配时释放请求并返回0。某个已选命令的字段/state提取失败由自己的responder返回，不再尝试其它臂，也不降成unknown-command。请求、响应及参数所有权被交接和释放，不是业务回滚。

1. load_mcp_servers先取repo state：快速lookup取得handle即使用，否则走通用提取；失败立即响应，不调用业务核。下层错误被复制并标成错误响应，成功结果交专用responder；不能从这层推导读取到的配置内容相同。
2. force_kill_codex先取mutationGate，缺state或提取失败不进入强杀核心。成功提取后下层结果才决定成功或错误；dispatcher的handled不能代表进程已终止。
3. upsert_mcp_server严格依repo→mutationGate→name→transport→enabled→command→args→url→headers→environment顺序提取，全部成功才调用核心；失败逆序释放已取得的参数。headers失败清理url/args/command/transport/name，environment失败还要清理headers。此处不猜解析器内部的默认值、可空性或新增DTO。
4. remove_mcp_server按repo→mutationGate→name提取；set_mcp_server_enabled再追加enabled解析。bool解析的成功sentinel与实际bool分属不同位置，不能把sentinel当enabled值。name已经取得而enabled失败时须释放name。各分支均先完成参数守卫，再进入业务；业务错误转换成错误响应，成功结果交自己的responder。mutationGate提取不等于quiet判定，也不等于受管块校验；这些检查没有因适配函数迁移而被证明删除。
5. restart_codex、quit_after_closing_router、switch_account_and_restart_codex、confirm_pending_auto_switch_and_restart_codex五个异步入口保存invoke/响应上下文及各自Future payload，再进行任务构造和调度；第一个runtime hook返回非零才调用第二个hook。该层不把调度返回值变成业务成功，也不在这里消费或吞掉JoinError、Pending、Ready。不能由任务复制、Drop或调度结构推导下层执行已撤销。
6. quit_keeping_router先取app，再取manager，任一步失败不退出。busy为真返回错误，不置exit_guard、不发exit；否则记录保留router退出的选择→置exit_guard→App.exit(0)。此核心没有关闭router或撤销退出的路径，退出请求后不能保证成功responder仍有机会送达。
7. graceful_restart_for_update只先取app，失败走错误responder；成功交给不返回的重启helper，所以调用方不能要求它再返回一个成功响应。该分支没有额外配置恢复路径。
8. quit_after_closing_router的真实Future继续采用本包既有F09合同：缺参数/manager、busy、JoinError或关闭失败只回复错误，不exit；关闭链使用enabled=0、relaunch=0，仅成功才记录closed_then_exit、置exit_guard并App.exit(0)。Pending保留等待上下文，Ready回复并完成；完成态/异常态再次poll被拒绝。Ready或取消后的Drop释放任务、join、App和参数所有权，不承诺停止已经运行的blocking任务或补偿业务副作用。

⚠ MCP下层可能创建、修改或移除配置；强杀、退出、切换账户和重启可能已经发生。前置提取失败意味着业务尚未启动，进入业务后的晚失败则不提供适配层全局回滚。MCP编辑核原有三次冲突尝试、受管标记和原子发布职责仍由本包既有正文承载，本记录不把可见参数层的相同扩大成全部callee等价。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-02-result.json#/primary_adjudications/0；SHA256=138a5680f963ced6c446c19486c9b305ebe58c1b1eb63a027632722e88f47fc7；已核result、record_pointer、原源文件与原源code哈希。
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-02-result.json#/additional_paired_effect_proofs、/managed_and_quiet_boundary
- <内部存储>/internal-reverse/audits/windows-1.2.7-version-delta/logic/DELTA-LOGIC-1.2.7.md#8-managerquitlifecycle；F09及第7节MCP并发/受管标记条款

<a id="catalog-contract-3"></a>

### 11.3. Windows引擎发现、四可执行文件验证与查询子进程清理

责任ID：17

【裁定】引擎发现和选择的指定原生分支保持不变；release将selector、Microsoft Store查询runner及部分分行支持外提。不能把外提算新增平台安全能力。本条对已有引擎摘要作精确化：摘要输入是四份可执行文件，不是“四个配套执行文件的内容”；布局父目录约束不是任意受控bin链。

1. 先收集运行中ChatGPT真实image及缓存App路径，metadata可用且basename精确11字节、ASCII不区分大小写ChatGPT.exe才接受。缓存在锁内克隆、锁外验证；image通过OpenProcess(0x1000)、1024 WCHAR的QueryFullProcessImageNameW取得，查询、空image或metadata失败没有假路径，已打开handle均关闭。进程候选枚举使用Toolhelp，排除自身PID，保留codex.exe、codex-、codex空格、codex helper及chatgpt.exe、chatgpt空格、chatgpt helper相关原有名称前缀；image失败可保留枚举名。snapshot/首项失败为空，枚举后续终止保留已收集项，不在此kill App。
2. 默认安装发现独立按顺序寻找首个结果，不汇集所有默认来源。先查十组环境路径：LOCALAPPDATA下依次Programs\ChatGPT\ChatGPT.exe、ChatGPT\ChatGPT.exe、Programs\OpenAI ChatGPT\ChatGPT.exe、Programs\OpenAI\ChatGPT.exe；再PROGRAMFILES及PROGRAMFILES(X86)，每组依次ChatGPT\ChatGPT.exe、OpenAI ChatGPT\ChatGPT.exe、OpenAI\ChatGPT.exe。环境缺失、非Unicode或trim后空跳过；trim只判空，拼接仍使用原环境值。这个阶段首个metadata成功即返回，不能补造它没有的basename/reparse守卫。
3. 环境路径均未取得结果，才依HKCU→HKLM查询SOFTWARE\Microsoft\Windows\CurrentVersion\App Paths\ChatGPT.exe的默认值。按行去CRLF、trim，匹配REG_SZ/REG_EXPAND_SZ，以四空格分成至多三字段，第三字段非空且路径metadata、basename校验成功才返回；REG_EXPAND_SZ匹配不代表另行展开%VAR%。之后依HKCU→HKLM查询CurrentVersion\Uninstall，隐藏PowerShell筛DisplayName含ChatGPT且InstallLocation非空，逐输出目录追加ChatGPT.exe，首个metadata成功返回。再尝试where ChatGPT.exe、where ChatGPT；每个命令只检查首个非空输出路径，若该路径无效便结束当前命令，不继续扫描其余非空行。默认发现查询没有Store专用的3秒deadline，不能统一套用。
4. Store查询用隐藏PowerShell及-NoProfile、-NonInteractive、-Command。脚本筛Name或PackageFamily含OpenAI且同时含ChatGPT或Codex的包，按Version降序输出所有非空InstallLocation，不是只取首包。pre内联与release runner调用均为3秒deadline，轮询等待不超过10ms；必须stdout完成且child退出才成功。退出非零不能当成功输出。查询失败保存为候选仲裁时使用的错误，不必立即终止整个引擎发现，也不是永远忽略。
5. ⚠ 查询进程已spawn后，缺stdout、reader线程创建失败、wait/output错误、reader异常或超时都先stop/reap。清理顺序为尝试kill；kill失败再try_wait，已退出可视为清理成功；kill成功还须wait。仍活着/状态失败返回store_query_stop，wait失败返回store_query_reap；这些清理错误优先于原reader/wait/timeout错误。清理成功后才返回相应store_query_reader_spawn、store_query_wait、store_query_output或3000ms超时；部分stdout不缓存成有效结果。这里只终止安装查询子进程，不是强杀ChatGPT。
6. 收集有效缓存路径、默认发现、Store及本地engine候选；本地根优先LOCALAPPDATA，缺失或空再由home拼AppData\Local，环境/home不可用便省略。每个App根固定尝试resources/codex.exe、resources/codex、app/resources/codex.exe、app/resources/codex、app/codex.exe、codex.exe六种布局。通过文件判据后，父目录按原生路径组件约束匹配App根或App根/app，并检查四个配套可执行文件。失败布局释放后继续，不能放宽成任意bin路径。路径去重先作原生组件比较，必要时双侧canonicalize后ASCII不区分大小写比较；任一canonicalize失败按不等处理，不伪造相同路径。
7. 四份输入固定顺序为codex.exe、codex-code-mode-host.exe、codex-windows-sandbox-setup.exe、codex-command-runner.exe。缺parent或任一文件不存在跳过该App候选；进入摘要读取后的read_executable、metadata、read、changed完整错误必须传播，不能因为已有默认路径就吞掉。读取拒绝目录及所列0x400/0x20000000重解析属性组合，单文件大于512MiB拒绝，以64KiB块读取；总读长超初始size、读后size或指定metadata字段变化、读后metadata失败都使本次摘要无效。
8. 按四文件名+NUL+各摘要hex+NUL的顺序形成组合摘要，前16个hex字符作为缓存匹配键。缓存路径须basename为ASCII不区分大小写codex.exe、祖父目录为bin、父目录为16位十六进制；十六进制语法允许大小写，但键实际匹配仍按字节。键匹配后仍验证四文件，不因同名exe或目录标识就接受。验证器明确false才继续，copy_metadata和读取/稳定性Err不能统一降成false或NotFound。仅首个App候选且尚无accepted结果时，逐本地根探测root/<16hex>/codex.exe；首个true选中，无命中保留默认App路径。
9. 经过完整合格筛选后，多匹配标志或匹配数至少2返回CODEX_ENGINE_AMBIGUOUS，不是看见两个原始路径就报歧义，也不任取其一。保存的Store错误仅在相应仍未处理候选等原有条件下回送；无候选返回CODEX_ENGINE_NOT_FOUND。成功候选祖父目录为bin才更新进程内engine缓存，更新发生在验证完成后。整条发现/验证链没有复制、删除或写回exe；仅环境、Registry、进程、metadata、文件摘要读取、查询子进程及内存缓存变化。晚期读取失败不能提交不稳定摘要或声称缓存已成功更新。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-03-result.json#/records/0；SHA256=1a5b836fe8a6609b1ce5ade8e169e247ec435bd6c8ad464a0a702049996fb2e8；已核result、record_pointer、原源文件与原源code哈希。
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-03-result.json#/records/0/necessary_support_branch_ledger、/records/0/static_data_closure
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-03-auxiliary.json#/rows/0、/literal_snapshots、/encoded_uninstall_templates；SHA256=8f12f515d92a8b2d74aa426d5dd8b9ddd508bb2f1fbc1f6dcbfda68d9a4b0f65

<a id="catalog-contract-4"></a>

### 11.4. Catalog的provider/model选取、五别名分配及纯内存差异

责任ID：22

【裁定】这是从relay state选择provider/model配对并分配五种公开模型别名的内存辅助体，不是catalog JSON写盘器。provider在本条指state中的上游模型供应配置；本函数仅选择其中允许的模型，不连接供应商或改配置。两侧选取业务相同；release有明确容量乘法溢出守卫，不能把原生控制流说成逐指令相同。

1. 初始化允许ID集合、provider/model配对集合、已用alias集合和空输出；TLS哈希种子已初始化就复用，否则生成并置标记，计数递增。这些只是进程内集合支持，不是新增缓存文件。按候选原顺序扫描，最多保留五个不同配对。provider列表为空、找不到候选provider、provider不在允许ID集合，均跳过而非返回业务错误；哈希命中还要长度和字节相等，不能把碰撞当命中。
2. 对匹配provider枚举模型：配置模型列表非空就克隆列表，否则从provider自身默认模型构造恰好一项。候选model必须按字符串内容属于枚举结果，空列表或未命中则释放临时克隆并继续。provider/model两字符串共同去重，首次配对保留，重复配对丢弃并释放传入克隆；重复候选不能占用自己的alias。
3. 候选可选alias仅精确接受gpt-5.6-sol、gpt-5.6-terra、gpt-5.6-luna、gpt-5.5、gpt-5.4，不trim、不折叠大小写。None、非法alias或重复alias都变成None；首个合法且未用alias保留并登记。每个有效配对输出provider、model、可选alias，不把临时模型的其它字段扩成新输出schema。
4. 已有任何选中行时，只补None alias，不进入自动模型补全。按输出顺序为缺alias项取首个未使用值，优先序固定sol→terra→luna→5.5→5.4；已有合法alias不覆盖，五项已用尽不生成第六项。达到五个配对正常提前成功，后续候选不再处理。
5. 只有选中行数为0且a8为真，才按允许ID的原顺序查provider并枚举模型自动补全；找不到provider继续，模型数组结束或原生结束sentinel到达时结束该provider，不把sentinel解释为启用状态。每个成功插入的唯一配对按当前成功输出下标取得同一五项alias表；重复配对不推进alias序号，最多五行。a8为假或无可用允许模型时返回空列表，不能无条件填五行，也不能为非空选择额外凑满五行。
6. 两种集合helper的返回极性均是已有项返回1并消耗临时字符串，首次插入返回0；clone、reserve、碰撞探测和析构都是内存所有权工作。零元素模型clone返回空Vec，None可选字符串不克隆；release模型clone新增count大于0x155555555555555时的容量乘法溢出致命守卫。可选字符串析构条件与局部hashset分配布局亦有代码生成差异，但合法对象的正常释放语义和选择结果不变，不是新增产品字段或磁盘副作用。

无Result错误信封：不合格候选被跳过、alias问题被补位；OOM、grow、bounds及内部不变量失败走原生致命路径，不正常返回部分结果。即使集合或输出已部分构造后再遇致命失败，也没有持久化事务可回滚。函数只写回完整返回列表及更新TLS/局部内存，没有fs/Registry/HTTP、凭据、kill或App调用；后续caller的catalog发布不能冒充本函数已落盘。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-04-result.json#/records/0；SHA256=9e43429504a84fbce8c994d909c585f49353e1b9afb3c7ce1cda12e98bedb239；已核result、record_pointer、原源文件与原源code哈希。
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-04-result.json#/support_pairs、/default_alias_table、/native_deltas、/static_acceptance_cases

<a id="catalog-contract-5"></a>

### 11.5. 调试/日志文本脱敏：字段遮罩、账户匿名摘要与词元二次过滤

责任ID：41

【裁定】这是应用特化的文本脱敏器，不是请求发送器、协议解析器或凭据读取器。pre与release按同一合同迁移，无新增业务。它不能与HTTP错误body的upstream_status/body_bytes/error_fp安全摘要器合并为一个合同。

1. 先克隆输入；存在非空可选路径时，以有损路径文本作非重叠子串替换，全部命中变成~/.codex；再独立查询固定Windows KnownFolder，把非空路径匹配替换为~。KnownFolder失败只跳过这一层，不使整个脱敏失败，也不撤销第一层已完成替换。查询使用固定GUID <审计会话>、flags=0、token=null，返回内存经CoTaskMemFree释放；不创建目录。路径有损转换的借用sentinel不是错误，surrogate编码以替换字符处理。
2. 第一阶段按Unicode标量扫描31个敏感键，仅ASCII不区分大小写。普通遮罩键为authorization、proxy-authorization、x-api-key、api-key、api_key、apikey、openai-api-key、openai_api_key、token、access-token、access_token、refresh-token、refresh_token、id-token、id_token、jwt、cookie、set-cookie、secret、extra-headers、extra_headers、extraheaders、headers、last-error、last_error、lasterror、previous_response_id、prev_resp_id；账户摘要键为account-key、account_key、accountkey。键可用单/双引号包裹，必须同型闭合；裸键前后不得是ASCII字母数字、连字符或下划线。完整键后可有Unicode空白，但必须跟冒号或等号；缺分隔符、键嵌在其它词内等均不匹配，原字符保留。
3. Unicode空白的具体范围为U+0009—U+000D、U+0020、U+0085、U+00A0、U+1680、U+2000—U+200A、U+2028、U+2029、U+202F、U+205F、U+3000，不收窄成ASCII-only。匹配后保留键、外围引号、空白及分隔符，再消费原值。普通键替换为[REDACTED]，即使分隔符后已到EOF或没有值也输出遮罩；账户键无值或空选区同样遮罩，不对空值生成摘要。
4. 引号值以反斜杠连续数量的奇偶判断同型引号是否结束，输出保留开引号和实际找到的结束引号；未闭合读至EOF，不补造结束引号。以数组/对象起始的值整体替换，仅计同型括号深度、跳过引号内括号；不是完整JSON混合括号语法验证。普通裸值吞至CR/LF、逗号、分号、右方括号或右花括号，允许中间空格；账户裸值还会在任意Unicode空白终止。这两种终止规则不能统一。分隔字符留给后续原样输出。
5. 非空账户值先取得所选文本的UTF-8字节；引号值取内容，数组/对象取整段文本，不把它解析成账户DTO。计算SHA-256，取前六个摘要字节，以小写十六进制形成12字符标识并用[ACCOUNT:…]包裹；不是可恢复的账号key。摘要byte格式化失败的原生分支先使用空中间String再继续账户包装，不返回业务Err。未匹配字符逐标量重编码为UTF-8，替换后从已消费值尾继续，不丢其它文本。
6. 第二阶段重新扫描第一阶段结果，以Unicode空白及双引号、&、单引号、左右圆括号、逗号、斜杠、冒号、分号、小于号、等号、大于号、问号、左右方括号、反引号、左花括号、竖线、右花括号这19种标点分词；点号、连字符、下划线不在分隔集合。分类窗口从词元两端剥掉非ASCII字母数字且非连字符/下划线的标量，但普通词元输出仍用原始范围，不能永久裁边。
7. 空词元不写，分类窗口为空则原样追加。其余词元满足任一条件就整体替换[REDACTED]：ASCII小写窗口长度至少10且前缀sk-；原窗口精确以eyJ开头、长度至少40且至少两个点号；窗口长度至少5且同时有@和点号。JWT规则不验证签名或完整结构，邮箱规则不验证顺序或语法。其它词元保留全部原字节；每个分隔符也保留，末尾还须flush最后一个词元。pre点号迭代计数与release显式计数都是至少两个点，没有一处点号与两处点号的行为变化。
8. 末词元flush完成后才交付新的完整String，再释放输入克隆、字符向量和中间缓冲。没有业务错误envelope；不完整引号/容器按EOF宽松消费，OOM、负容量或范围不变量失败走原生致命路径，不返回部分文本。

⚠ 环境路径查询失败不得抹掉已经完成的可选路径替换；本函数仅查询KnownFolder并操作内存，不读真实token、不写配置/Registry/DB、不联网、不kill/exit。调用者可以把返回文本写日志，但这不等于本函数自己写日志，也不能据此宣称整个日志系统无落盘副作用。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-05-result.json#/records/0；SHA256=0a0aa6a1aad7628374f40d85e6f54c3995fdc4601fead9f0c5ac2616081db62d；已核result、record_pointer、原源文件与原源code哈希。
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-05-result.json#/sensitive_key_table、/unicode_whitespace_table、/records/0/support_pairs
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-05-native-branch-evidence.json#/environment_terminal、/token_window_followup、/render_followup

<a id="catalog-contract-6"></a>

### 11.6. 本批共同身份、消费范围与门控边界

责任ID：

本批只归约 Windows x64 同一 1.2.7 的 pre→release 已决内容：pre SHA256=51cb41b613aaa50f410d606e1c4271b1de34576b497a1cba0f734eba46279faf，release SHA256=fd5f0c5aa7d500fe7fcef21359028fa614ede9965fc48888601883832ee7d8df；不借用 macOS 解释。catalog-content-closure-proof.json 的现场完整 SHA256 为 bce646383cd8dbec16ee22c500c74950d00e78c299639e6622710c078425137d。按 records.slice_id 筛得的全部责任恰为 06→61、07→63、08→133、09→154、10→156，各一条，无分配重复或缺漏。五份 result 的完整 SHA 与 proof 全部匹配，五条主正文的文件哈希、code_sha256 与指针全部匹配；另检查32组现存直接来源文件指纹，失配0。正文结论来自逐条 branch/decision/identity/source 的实际内容，不用 closed 标签或哈希配对代替语义。
以下五项均保留原已决的 same／内联或外提裁定，不据 helper 拆合认定新增业务。现有 SYSTEM-DIFF §3.5、FULL-CHAIN §5 与 DELTA-LOGIC §8 F15 只有概述，不能独立承载这五条完整责任，因此本批不以它们计作完整复用。
这些是静态内容归约，不是实现许可或真实 App 对照。consumerStartReady、strictImplementationUse、readyToImplement、implementation_use、gate_accepted、full_leaf_100、dim6、live_reference 均保持 false；不改变历史 pre 窄范围门控。本路只读，未采集新函数、未操作 IDA/App、未写任何文件。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/catalog-content-closure-proof.json#/records
- <内部存储>/internal-reverse/audits/windows-1.2.7-version-delta/SYSTEM-DIFF.md#3.5
- <内部存储>/internal-reverse/audits/windows-1.2.7-version-delta/logic/FULL-CHAIN-1.2.7.md#5
- <内部存储>/internal-reverse/audits/windows-1.2.7-version-delta/logic/DELTA-LOGIC-1.2.7.md#11

<a id="catalog-contract-7"></a>

### 11.7. original_id 61：Windows engine 选择、内容校验与延迟 Store 错误

责任ID：61

【裁定与职责】这是 App 特化的 Windows engine 选择核，不是可排除的通用库函数。release 将 pre 大体内的选择逻辑外提，选择顺序、候选校验、错误优先级和调用者收尾保持。它接收 App 根、已有 engine 路径、本地 engine 根，以及先前 Store 查询错误；选择核本身不启动目标 App、不安装或复制 engine。
【候选生产】调用者依次准备运行中 ChatGPT 的真实 image 路径、经过验证的缓存 App 路径、默认安装位置、Store 查询结果及已有 engine 列表，再准备 LOCALAPPDATA／用户 home 回退的本地 engine 根。Store 错误先保留，不立即中止。对每个 App 根按固定顺序尝试 resources/codex.exe、resources/codex、app/resources/codex.exe、app/resources/codex、app/codex.exe、codex.exe。候选必须通过文件判据，其父目录必须按路径组件语义匹配该 App 根或该根/app；任意目录内同名 exe 不可直接接受。同父目录的 codex.exe、codex-code-mode-host.exe、codex-windows-sandbox-setup.exe、codex-command-runner.exe 必须全部存在，才采纳该 App 根首个通过的布局。失败布局跳过，六种均失败不产生路径。候选通过 Windows 路径语义去重；组件比较不定时才尝试双方 canonicalize 后比较，任一规范化失败判不相等。清理重复字符串只是释放内存，不是删除文件。
【默认值与工作门】首个 App 候选先成为默认路径。后续 App 候选不是无条件执行摘要 IO：只有存在已有 engine 路径，并仍有合法缓存语法而尚未被接受的条目时才继续内容校验。因此两个 App 根不等于必报歧义，也不能用“任选第一个目录”替代整条逻辑。
【四文件摘要与缓存验证】进入内容校验时，先检查四个配套文件，再逐个读取稳定摘要。读取器区分 open/read 与 metadata 错误；拒绝目录、命中既定 reparse/tag 拒绝谓词的对象，以及大于512MiB的文件。以64KiB分块读取；读数超过初始大小立即报文件改变，EOF后再查 metadata，要求实际读数、最终大小均等于初始大小，且保存的 metadata +32 字段未变，才返回摘要文本。这里不把该不透明字段猜成新增 DTO 或某个时间字段。后置 read/metadata 失败不返回已有摘要。候选验证器对 metadata 错误按既有原生错误分类分别返回 false 或传播 copy_metadata 错误，不得把所有 IO 失败一概忽略。
组合摘要按四文件固定顺序输入“文件名字节→NUL→该文件摘要hex文本→NUL”；最终取格式化结果前16个有效UTF-8边界字节作为缓存键。这里读取的是四个可执行文件，不是四份安装配置文本。已有 engine 路径语法要求 basename 大小写不敏感等于 codex.exe、祖父目录名大小写不敏感等于 bin、父目录名恰为16个ASCII hex字符；语法允许 A–F，不代表摘要键匹配也忽略大小写。键逐字节相等后还须逐一验证四文件内容摘要；false跳过，错误完整传播。
【选择与歧义】第一 App 候选的已验证缓存命中可以替换默认路径；后续 App 候选出现已验证命中则置 ambiguity。所有内容验证为真的、不重复缓存路径进入 accepted 列表。只有首 App 候选且 accepted 仍空时，才按本地根顺序检查 root/<16hex>/codex.exe 及四文件内容，首个 true 被选中；全无命中保留默认 App 路径，验证错误立即返回。最终 ambiguity 已置位或 accepted 数≥2，优先返回 CODEX_ENGINE_AMBIGUOUS，而不是按 App 根数量判断。
【错误与收尾】歧义判定之后处理借入的 Store 错误：没有已选路径时传播；已有路径但 engine 列表仍有合法缓存语法、尚未被接受的条目时也传播；否则释放旧 Store 错误并继续。无路径最终由调用者转换为 CODEX_ENGINE_NOT_FOUND。后续候选的摘要读取错误可以使此前已有默认路径的调用失败，不得因“已经找到一个”而吞错。负长度、分配失败、摘要切片长度/UTF-8边界断言属于原生失败，不伪装为业务 NotFound。
⚠ Store 支路会以 CREATE_NO_WINDOW 启动固定 powershell -NoProfile -NonInteractive -Command 查询，并创建 stdout reader 线程，deadline为3秒，轮询等待最多10ms。spawn、stdout、reader创建、通道、output、wait分别有错误。超时及后置失败先停止并回收查询子进程：stop失败后再poll，确认已退出可吞stop错误，仍存活或poll失败返回 store_query_stop；stop成功后wait失败返回 store_query_reap。清理错误可优先于原超时或读错，不把这条有子进程的外层链说成零副作用。
选择成功后，仅选中exe的祖父目录名为 bin 才在互斥保护下更新进程内 engine-root 缓存；其它路径照常成功但不更新此缓存。没有本选择核的 mkdir/copy/remove、持久配置写入或目标 App kill，也没有磁盘回滚合同。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-06-result.json#/records/0；SHA256=f12a73b45d3fffb24818d25716b4e150299b1f040eb8b70a0e92615d3d8f4433
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-06-result.json#/support_adjudications
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-protocol-platform-credential-system-00.json#/rows/4
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-content-closure-router-catalog-mcp-lifecycle-directed-pre.json#/rows/11

<a id="catalog-contract-8"></a>

### 11.8. original_id 63：系统代理候选三来源累积，失败不清空前项

责任ID：63

【裁定与结果】Windows 用户代理、PAC文本、WinHTTP 三来源依次向同一候选列表追加，最终精确去重后返回；空列表也是正常结果，不新增 IPC 错误信封。19项应用分支保持，release 的分行、ASCII小写等外提不构成功能新增。本记录复用已闭合分片01对同一 release 正文的证明，但这里只登记 original_id 63 的责任，不重复认领其它分片。
【用户代理】先隐藏窗口执行 reg query HKCU\Software\Microsoft\Windows\CurrentVersion\Internet Settings /v ProxyEnable。spawn/output失败或退出码非零只跳过这一来源；成功 stdout 按有损UTF-8转文本，检查是否包含 0x1 或 0x00000001，不做数值解析或整串相等。只有命中才再 query 同键的 ProxyServer。成功输出中寻找首个包含 ProxyServer 的行，取 REG_SZ 后片段并trim；缺行、格式缺失或空值不追加，首个匹配行解析失败也不继续找另一个同名行。
提取值不含“=”时按 http 候选处理；含“=”时按分号拆项，再按每项首个“=”拆 scheme 和地址。scheme trim并ASCII小写：http/https→http，socks/socks5→socks5，其它忽略。空项、缺等号项、空scheme/地址不产出。已有“://”的地址保留，否则加规范scheme前缀；不测试代理连通性。
【PAC独立读取】不论 ProxyEnable 是否启用，都独立 query AutoConfigURL，以相同 stdout/REG_SZ/trim规则取首个值。仅识别小写 file://、http://、https://，URL长度须至少7；其它scheme、太短或空值产生空PAC结果而不是业务错误。file:// 去掉前7字节后逐字节百分号解码：后两字节可解析才合成；原生带“+”单数位分支也保留；无效或残缺“%”按原字节保留。解码路径按有损UTF-8构造，而文件正文读取要求有效UTF-8。open/read/分配型IO/正文UTF-8失败局部丢弃，继续WinHTTP，不清空用户代理候选。UTF-8切片断言或运行时分配终止不伪称可恢复Err。
http(s)分支依次构造客户端、发送一次请求、读response text；每阶段失败局部释放并跳过PAC。该 owner 没有显式重试循环、超时或 error_for_status 成功码门，不将库默认策略编造成新增合同；收到非2xx也不是由此 owner 的显式状态门一律排除。
【PAC不是脚本求值】取得正文后复制一份做ASCII大写搜索，地址仍从原正文截取，不强改地址大小写。依次完整搜索 SOCKS5␠、SOCKS␠、HTTPS␠、PROXY␠ 四组，分别映射 socks5、socks5、http、http；输出先按组序，不是脚本文本中跨组的整体出现顺序。地址到ASCII空格、双引号、单引号、分号或Unicode空白处停止，再trim；空地址忽略，有“://”保留，否则加scheme。DIRECT没有独立候选。PAC局部先去重，再追加总列表；没有执行 FindProxyForURL，也不保证取出的文本token就是某URL实际会使用的代理。
【WinHTTP与最终顺序】最后隐藏窗口执行 netsh winhttp show proxy。失败或非零退出只跳过此来源。对成功输出逐行trim，要求长度≥12且前12字节精确为 Proxy Server，取首个冒号之后的非空值；精确“(none)”跳过该行继续查找。不做本地化标签通配。可用值复用上述 proxy-field parser，再追加总列表。
最终按字符串长度+字节完全相等去重，保留首次出现顺序，不做URL等价、地址大小写或路径级规范化。内部移动哨兵使迭代结束时，释放剩余项并返回已收集前缀；不是追加未初始化项。
⚠ 普通注册表查询、文件、网络、最晚WinHTTP读取错误都不得抹掉已经取得的候选。这是候选发现器，不是系统代理设置器：最多三次只读 reg query、一次 netsh show，另有PAC本地读取或HTTP(S)请求；没有 reg add/delete、文件写、代理启动、目标App终止或需要撤销的配置提交。trim、contains、clone、HashSet和分行辅助函数只支撑以上实际分支，不分别计为新增代理功能。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-07-result.json#/records/0；SHA256=afe8d3f48fb8f4173689c31a3ae26ae62f00593fb2e4e9125b87990c2485e38d
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-07-result.json#/support_branch_adjudications
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-protocol-platform-credential-system-00.json#/rows/2
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-content-closure-router-catalog-mcp-lifecycle-directed-pre.json#/rows/10

<a id="catalog-contract-9"></a>

### 11.9. original_id 133：thread/list 两轮分页、归属验证与全列表失败边界

责任ID：133

【裁定与请求】这是 App 的线程列表归集逻辑，不是可排除的通用库支持。pre/release 的应用合同保持；ThreadListPage 的map解码由内联改为外提，不是新分页策略。先 archived=false，后 archived=true；两轮共用线程ID集合和累计列表，每轮独立清空cursor集合、页计数与当前cursor。
每页请求 thread/list，固定 limit=100、sortKey=recency_at、sortDirection=desc、useStateDbOnly=true、sourceKinds=[cli,vscode,exec,appServer,subAgent,subAgentReview]。archived为当前轮bool；初始cursor=null，之后复制nextCursor原串。可选 parentThreadId 仅存在时加入，Some空串仍属存在，不擅自trim或改成None。
【时间和页数】共用30秒安全预算；每页发送前，已用整秒数>29即失败。单页调用时限按秒+纳秒计算剩余总预算，再与10秒取小值，保留纳秒借位/零剩余边界，不是每页另给30秒。每个成功页均计数，包括空data页。nextCursor=None才结束本轮；Some空串仍继续，并参与本轮精确游标去重。再次出现同长度同字节游标即失败。只有尚有nextCursor时检查页数>99：第100页无下一页可以成功，第100页仍有下一页则报分页安全上限；不是全局共100页，也不是99页就停。
【页与条目解码】ThreadListPage接受map或sequence，其它形状拒绝。map必须有data数组；nextCursor缺省/null为None，string为Some。重复data/nextCursor、缺少值或data、错误类型均失败；未知key跳过。sequence首项必须data数组，第二项可选且为可空string，不接受额外元素。release 的分派器/map/sequence拆分不改变该有效wire合同。
每个条目必须经既有 AppServerThread 解码，损坏条目不是静默跳过，而是格式化app-server错误后终止。ID只通过Unicode trim判断非空，全空白ID报错；保存和去重始终用原始ID，不将trim结果写回。projectId只是透传字段，不据此推断项目写入或项目筛选。
【parent先于去重】请求带parent时，返回记录已有Some且其长度/字节不同即失败；已有相同值或None均填入请求parent。无请求parent则不额外校验或改写。这个检查在ID去重之前，因此重复ID也不能绕过错误parent保护。
随后把archived置为当前轮；将原ID插入跨两轮共享集合。重复项释放，首次项按遇见顺序追加，不合并、不重排。因此两轮重复ID保留先遇见的未归档记录。空页仍须执行nextCursor逻辑。两轮全部完成才交出成功列表；反编译清理寄存器的double返回不是浮点业务API，原生容器大小也不等于新增JSON字段。
【错误与副作用】请求包装器传播完整非RPC错误；RPC错误按message及可选numeric code格式化，缺message有既有unknown回退；响应缺result同样报错，不返回假空页。session请求桥增加request ID，发送method/id/params，读取至匹配的numeric ID；中间或不匹配输入被消费/丢弃。它不是零副作用的进程内getter。
任何后续请求、页解码、条目解码、空ID、parent冲突、重复游标或页数超限，都会释放此前累计的全部线程并返回错误，不交付partial success；但已发送请求、递增的session计数及已消费输入不会倒退。主核及所读必要支持体没有文件/SQLite/项目写入、kill、提权或exit。HashSet/Vec/JSON清理只是在内存中释放，不是线程删除，也不新增业务事务或全传输栈认证。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-08-result.json#/records/0；SHA256=2958b2f4b10ef710591b370613497878dd51385b73af729c369bc310e23c4752
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-08-result.json#/support_branch_adjudications
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-content-closure-aggregate-candidate-identities-release-280.json#/rows/6
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-content-closure-aggregate-core-counterpart-candidates-pre-016.json#/rows/4

<a id="catalog-contract-10"></a>

### 11.10. original_id 154：受管配置文本生成、pruning与发布前边界

责任ID：154

【裁定与输入】pre/release保持同一受管配置生成合同；pre的model删除谓词被release内联，有效集合构造布局变化也不是新增保护。输入是已有native结构，不据偏移另造IPC字段：byte+80控制启用，byte+81控制账号模式，+0与+16为两项用于生成块的字符串槽，+64/+72为72字节附加条目集合。
先按活动选择项的原始长度/字节匹配provider，取其模型列表首项并trim；须有非空模型、byte+80为真、两字符串槽均有值、provider集合非空才启用pruning。无活动项、provider不存在、空模型降为false，不报业务Err。两种账号模式都构造有效模型名集合；byte+81为真额外纳入+64/+72条目，false只使用provider及活动选择输入。
【处理顺序】先剥旧受管块，再逐行词法扫描，最后生成新块并拼接规范化。旧块剥离的三遍、精确marker与层级冲突规则由紧随本节的original_id156正文完整承载。这里每行是否能触发表头/键规则由进入该行时的词法状态决定；多行字符串里的伪表头/标记不生效，普通引号、反斜杠、注释照既有规则更新后续状态，不拿全文contains代替解析。
pruning=false保留结构表头；pruning=true时，model_providers./profiles.后解析的名字不属于 aimami_relay、aimami_relay_前缀、aimai1、aimami_codex_router，则丢弃该表头及直到下一表头的内容。受管名字不触发这条foreign-section删除。已保留表头后的普通表区原文保留，不把顶层键清理套进任意表。
仅在pruning=true的根区，对非注释且包含“=”的行清除五个冲突键：profile、openai_base_url、model_provider、model_catalog_json、disable_response_storage。要求完整key前缀后接“=”或Unicode空白，不能按任意子串误删更长键。
在相应根区，对解析key恰为model的行才解析值：非aimami_relay族保留；该族在pruning=false时删除；pruning=true但有效集合为空或无精确成员时也删除，精确成员才保留。键/值解析失败哨兵按保留处理，不变成新增业务Err。pre谓词true表示删除，不能反转成保留。
【新块与账号模式】pruning=false不生成新块；+0缺失不生成body块，+16缺失不生成top块。body沿用managed-start/end、生成注释和provider模板；用于格式化的字符串逐个裁尾“/”。name、wire_api=responses、supports_websockets=false保持，requires_openai_auth取byte+81反值。byte+81真使用无账号模板；false使用官方+中转模板并含catalog值。该生成过程不读写用户凭据。
top块沿用codex-router top-start/end与HTTP-only说明，账号模式决定其既有注释和附加行。false分支对原有两项实验endpoint顶层键分别做解析后补缺：缺哪个补哪个，已有不覆盖，不是全文匹配。随后输出固定顶层provider选择值；true分支另追加路径相关字符串。pre同样实际传入字符串与长度，旧反编译漏参数不等于release新增路径使用。
【文本组合】按top块→保留原文→body块排序。top存在时裁原文头部CR/LF；块间补足空行，缺原文、单块或双块均分开处理。保留行原内容，追加LF；裁过量末尾空行和单独LF。末尾独立规范化器只去前后空行、保留中间空行并使非空行LF结尾，不逐行trim掉用户缩进/内容。
⚠ 返回文本会有条件移除foreign provider/profile节、冲突顶层键、失效受管model及旧受管块；这属于有破坏性的文本变换，但本函数只分配/返回字符串，没有直接文件删除/写入、DB提交、HTTP或进程终止。业务路径无Result/Err；负容量/OOM、非法UTF-8切片走原生终止或panic，不返回“安全空配置”。
真正发布由调用者负责：读原配置→生成→校验新文本→相同则不写→重读磁盘并比较本轮原字节→内容冲突时最多3轮重建→交原子writer发布。校验或重读/写失败可使生成成功后的调用失败；生成器不承担此前其它副作用的全局回滚，也不能凭字符串生成成功宣称配置已提交或quiet已满足。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-09-result.json#/records/0；SHA256=7a28be1ee2c2f9f79955d39039d1060d5a97509e90a13bd5514235168ab7ac1d
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-09-result.json#/embedded_native_evidence/key_tables
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-content-closure-aggregate-candidate-identities-release-312.json#/rows/4
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-remaining-content-reduction.json#/facts/6
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-content-closure-aggregate-candidate-identities-release-232.json#/rows/3

<a id="catalog-contract-11"></a>

### 11.11. original_id 156：三遍受管块剥离、独立表保留与损坏marker边界

责任ID：156

【裁定与接口】这是 App 特化的受管配置文本变换，不是文件恢复器或可排除的库函数。pre已存在相同合同；release内联分行及部分搜索，未新增业务。输入为有效UTF-8文本切片，返回有所有权的String；不把反编译double清理返回值、String三元组或HashSet布局伪造成IPC DTO。三遍各自从词法普通态开始，LF分行并剥一个LF及其前一个CR，无末尾LF的最后非空片段也处理。
【词法守卫与精确marker】判断结构行依据进入本行时是否普通态，同时在原行而非trim后行上更新状态：普通态、跨行三双引号、跨行三单引号分开；普通双引号反斜杠跳过下一字符，普通单引号到闭引号，普通态“#”停止扫描。因此多行字符串内部的伪marker/表头不能生效；这不是完整TOML语法校验器。
认可的start精确为“# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)”、“# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)”、“# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)”；end精确为“# <<< aimami-relay managed end”、“# <<< aimami-relay managed end (top)”、“# <<< aimami-relay codex-router top end”。长度依次55/60/64与30/36/39字节，不拿字符串池尾部扩展匹配。
【第一遍：收集块外表头】start设置布尔受管态，任一认可end退出，不是嵌套栈，也不校验start/end类型配对。仅在块外收集trim后首“[”尾“]”的表头内部原文本，允许内部空串，供第二遍冲突比较。
【第二遍：删除受管内容，但保留独立用户表】marker行本身丢弃。块内表头先判受管归属：原始内部文本以 model_providers. 或 profiles. 开头，suffix为精确aimami_relay、aimami_relay_前缀、精确aimai1或aimami_codex_router即属受管；带双引号的原始表名不能仅凭去引号后的名字自动套此归属。受管表头及当前段正文受抑制。
块内非受管表头则与第一遍所有块外表头比较层级：先按双引号感知的“.”分段；引号不输出，仅双引号切换quote，quote内反斜杠消费下一字符且不输出反斜杠，quote外点才拆段。每段Unicode trim，末尾总推一段，允许空段；不做全部TOML转义解码，不识别单引号quote，未闭quote不另报Err。
比较分段长度/字节；任一方完整分段序列是另一方前缀，包括相等或空段边界，即抑制本段，不能换成裸字符串starts_with。没有块外表头或全部无冲突，则把该独立非受管表头及其段内容保留。块外原行保留；块内普通/非结构行按当前段抑制位处理。块态与段抑制态分离，end复位；不是从start开始一律截到EOF。
【第三遍：旧残留表与生成行】重新按词法守卫处理表头；受管表头和其后被抑制的非空行丢弃，非受管表头走普通行/注释判据。抑制态遇空行时丢掉该空行并复位，因此不能简化为“受管表头之后一直删除到EOF”或完整TOML表删除。
另丢弃以“# CLI:”开头且包含精确12字节aimami_relay的行，以及既有固定生成注释前缀/20字节标签匹配行：# Codex 桌面 GUI 智能路由已启用、# Generated by AiMaMi、# 修改请通过 AiMaMi 应用页面、# Codex 智能路由、# 保持 openai 为 active provider、# 在 AiMaMi 里关闭智能路由、# 中转模型功能。不是删除所有注释。
未被过滤的行按原内容复制并补LF；多行字符串内部且未处于抑制态的内容保留。输出末尾连续LF收敛到最多一个，仅单个LF的结果变空；CRLF归一到LF，原无终止LF的非空尾行也补一个，不能宣称字节级还原原文。
⚠ 未配对或交叉marker没有专门业务Err，EOF仍按当前布尔状态返回；因此损坏配置中某些受管段原文可以被丢弃，不能承诺start之后全部保全。内存分配/grow/切片边界失败为运行时终止或panic，不是可重试错误信封。输出完成后释放中间文本、表头集合及局部内存；没有本函数直接fs写/删、备份、DB、网络、kill/quit或quiet校验。只有上层writer发布返回文本后才改变配置；后续校验、备份、写入及其失败是否补偿属于调用者，不能由本函数存在推导“自动备份、原子恢复或全局回滚”。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-10-result.json#/records/0；SHA256=8e7f638362d8c082587a8b5b8f3beb45a40c76729e6c517813840c7fdf1fa8dd
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-10-result.json#/records/0/necessary_support
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-content-closure-aggregate-candidate-identities-release-312.json#/rows/6
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-content-closure-aggregate-core-counterpart-candidates-pre-008.json#/rows/4
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-remaining-content-reduction.json#/managed_template_exact_length_comparison
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-10-native-evidence.json#/captures

<a id="catalog-contract-12"></a>

### 11.12. 第三方配置残留清理：先备份、两遍重建、发布后仍有后置失败

责任ID：165

裁定：pre/release 的清理业务合同不变；行迭代、集合查找的内联/外提不是新清理能力。本批仅采纳 Windows pre SHA 51cb41b613aaa50f410d606e1c4271b1de34576b497a1cba0f734eba46279faf 与 release SHA fd5f0c5aa7d500fe7fcef21359028fa614ede9965fc48888601883832ee7d8df 的既决静态结果，不提升任何实现门。
入口读取配置，读错立即返回原 IO 错误。由当前256字节条目构建保留ID集合，分别收集 model_providers/profiles 待清理节、非注释第三方信号、托管块外顶层 openai_base_url；三者都无内容时成功返回“无第三方残留”，本体不备份、不写配置。保留 OpenAI（ASCII大小写不敏感）、aimai1、openai-bundled、openai-primary-runtime；当前ID集合通常受保护，但 aimami_relay 及 aimami_relay_ 家族不因集合成员关系豁免。旧工具标识包括 cc-switch、cc_switch、ccswitch、codex-switch、codex_switch、deecodex。
有候选才先创建备份：原字节读取仅 NotFound 可容错，其他读取错误失败；创建 config-backups，以毫秒时间和随机量命名 config.toml.*.bak，调用原子写包装，失败即返回。备份成功后尽力清理旧备份到20项；枚举/删除旧项失败不推翻已创建备份。
第一遍按LF分行并去CRLF尾，使用跨行词法状态识别结构：多行单/双引号中的文本不作节头或标记，注释不作第三方信号；六种旧/新 managed/top/codex-router 分隔标记保留。解析 [model_providers.<id>]、[profiles.<id>] 的引号/转义首段，保留ID优先，仅精确命中待删集合才跳过该节至下一结构节；保留行补一个LF。
第二遍独立维护词法、managed及普通section状态，只在托管块外顶层清理 selector。profile、model_provider 必须满足完整key及等号/空白边界，取赋值分段、trim、去双引号；仅非空且未受保护、又命中待删集合或旧工具标识才删。model_catalog_json 解码后若与当前catalog的文本规范路径相等或位于其斜杠子路径则保留；否则仅旧工具来源命中才删。该规范化只是反斜杠改斜杠、折叠重复斜杠、去尾斜杠、ASCII小写，不是文件系统 canonicalize。非空 openai_base_url 不含 /codex/router/v1 时，须第一遍结果仍有第三方信号、候选节或外部顶层端点之一才删；空值/受管路由值保留。circuit_breaker/provider_router 也须额外信号命中，不按字段名一概删除。
重建结束释放临时集合，再调用原子写包装替换原配置；失败返回IO错误，成功返回清理说明、节数量及可选顶层重定向说明。包装先验证同父目录且staging不同于目标，再写staging、同步/处理元数据、替换，错误走guard清理。
⚠ 备份创建、旧备份删除、配置替换不构成整体事务；后续失败不撤销先前动作。外层只有主清理成功后才调用传入回调，回调失败原样传播；回调成功后重读配置并做 config_third_party 后验，后验读取失败降为空文本，仍不等于前面的主读取失败。清理已落盘后回调/后验仍可能报错。dispatcher 在进入handler前要求 config_third_party 的quiet参数为1；不足quiet不调用清理。本体不kill、启动应用或联网。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/catalog-content-closure-proof.json#/records
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-11-result.json#/records/0
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-11-result.json#/quiet_dependency

<a id="catalog-contract-13"></a>

### 11.13. 只读线程诊断扫描：缺列降级与整批失败必须区分

责任ID：170

裁定：双侧原生诊断合同不变。这是应用诊断扫描器，不是可按serde/std名字排除的库函数，也不是写回修复器。
诊断上下文提供单一DB覆盖路径时复制该路径及来源标记，否则枚举并按路径组件等价去重；空列表正常成功。逐库以 READONLY|NOMUTEX（32769）打开，打开失败立即报带路径的诊断错误。设置3000ms busy timeout，设置失败仅释放错误后继续；随后准备、执行 PRAGMA table_info(threads)，任一准备/查询/读取schema错误均整体失败。
model、reasoning_effort 是可选列：不存在时SELECT对应位置用SQL NULL，并保存两项存在位；source、archived不是这种降级项，缺少导致后续SQL错误。查询未归档行，选择 id、rollout_path、model_provider、COALESCE(source,'')、model或NULL、reasoning_effort或NULL，每库按id排序。迭代错误与正常无行分开，不能吞成扫描结束。
id/source必须为合法UTF-8 Text；rollout_path、model_provider、model、reasoning_effort 可为SQL NULL。空Text不等于None；越界、非Text、非法UTF-8均走带路径的read-row错误，不跳过坏行。内部错误转发/停止迭代标记不能改写成“NULL id可忽略”。source按大小写敏感子串查找精确带双引号的10字节 "subagent"；命中只过滤该内存行，不解析JSON、不接受裸subagent等价、不删除线程或rollout。
结果保留DB路径/来源、id、原nullable provider、派生provider字符串、nullable model/reasoning及schema存在位。provider=None时派生空字符串；rollout=None或Unicode-trim后为空时派生None，非空则保留原始未trim路径。正常完成才交出向量。较晚数据库、行或字段失败会释放全部已积累记录、未扫描路径、statement及连接，不返回部分成功。副作用仅只读DB、连接timeout状态、内存及资源关闭；无持久化、进程或网络操作。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-12-result.json#/records/0
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-12-result.json#/native_support_pairs

<a id="catalog-contract-14"></a>

### 11.14. 线程分析聚合：files状态、两遍facts与精度守卫

责任ID：182

裁定：应用级聚合分支不变，差别为集合/析构实现外提，不是新增写库能力。本体只执行SELECT；SQL中的json_set是投影表达式，不是UPDATE。
先从files的rollout_id及state.history_base.rollout_id建立历史基底集合，准备/参数数目/收集错误整体返回。再读取 thread_id非空的files行：thread_id、complete/incomplete/failed列转换错误不能降级。按thread_id复用或插入有序聚合项；complete且非incomplete时累计failed与非failed标记，其余置诊断标记。需要state时必须读出并成功解析JSON，错误整体失败；已有原因加入去重原因集合，空原因用原始码16。不完整加入码12，failed加入码13；rollout命中历史基底集合置诊断标记并加入码14。原因码不猜业务标签。
facts查询只选 token/coverage/turn/tool；token缺model时可从同key/priority且model为非空文本的事实补入；存在更高priority、或同priority更小source的winner时淘汰当前行。两遍查询均绑定两个i64::MIN常量，参数个数不符、绑定、step或字段类型错整体失败。每行须ts>0且ts<=传入上界、thread_id非空；不满足仅跳过。data JSON解析失败则整体报错，不当空对象。
第一遍按(thread_id,turn_id)建立覆盖表：complete缺省false；source=native设置native存在位，complete且positive total时累计native总量；legacy同样仅在complete时累计positive total；coverage事实置覆盖位。总量溢出饱和到i64::MAX。
第二遍允许facts创建files中不存在的线程。tool按name计数，缺失/非文本/空name使用unknown；turn仅在turn_id非空时加入turn集合，status精确completed才加入完成集合。token/coverage必须能查到第一遍覆盖项，缺项是原有断言终止，不作静默fallback。存在native且legacy总量更大，或coverage位为真时，置诊断标记并加入原因6。
token.complete必须为bool true，否则加入原因5。已有native时，仅source精确legacy被抑制，缺source/非文本/其他source不因该规则被抑制。input/cached/output/reasoning/total五项必须为非负整数且各<2^53，cached<=input、reasoning<=output、input+output==total；不合法加入原因5并继续，日期转换失败加入原因1且不计该条。合法五项以有符号i64饱和累加，保留累计超过2^53-1的精度标记；model仅在文本且规范检查非空时增加model维度，缺model不妨碍总量/日期维度；日期维度累计total。
两遍全部完成才交出有序结果容器，重复键的容器构造保留最后同键值。任意晚期query/列/JSON错误清理全部局部聚合而非部分成功；OOM、缺覆盖项等不变量终止不伪装为可恢复错误。没有凭据写、文件删除、进程或HTTP副作用。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-13-result.json#/records/0
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-13-result.json#/necessary_support

<a id="catalog-contract-15"></a>

### 11.15. 索引后台任务收尾与专用析构：失败不等于底层未改动

责任ID：30, 31, 84, 119

30：双侧均调用索引更新核心后分成功、普通错误、捕获panic三路。成功清last_error；普通失败可按 source_or_index_io/index_decode/index_state记录分类日志，panic可记录worker panicked，但对共享状态都保存 index_update_failed。锁内释放旧错误并写新值，释放锁时按等待态唤醒；以当前UTC秒做CAS，只有共享时间仍等于捕获的旧值才替换；三种结果均清in_flight，最后释放capture/Arc。⚠ 更新核心可在失败前已有source/index读写；收尾不回滚，last_error不证明索引完全未改。这里只裁定worker边界，不扩张为两个更新核心全部同构。
31：104字节共享状态析构，仅在可选错误字符串容量既非-1又非0时释放；两个子Arc各自最后强引用才drop，weak最后归零才释放对象。不是业务删除或新返回DTO。
84/119：352字节 AppServerThread形状的资源清理，释放必有/可选字符串、嵌套JSON、逐项32字节向量并按capacity释放缓存。pre可选容量用>0，release排除-1/0，末项另排除-2；等价限于合法Rust容量/缺省域，不能推及伪造负容量。119的JSON走通用drop入口，84走特化入口；实际均按Value标签释放String/数组/对象。它们不是线程历史删除命令，无SQL DELETE、用户文件删除或kill，也不产生业务错误信封；内存drop不提供业务补偿回滚。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-14-result.json#/records/0
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-14-result.json#/records/1
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-15-result.json#/records/0
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-15-result.json#/records/1

<a id="catalog-contract-16"></a>

### 11.16. 可取消有界行读取器：取消、EOF、超限和IO错误不能合并

责任ID：51

裁定：双侧读取策略不变。每次fill前先检查取消，成功fill后再检查；取消返回独立结果并释放积累buffer。fill_buf错误透传IO错误；空buffer为EOF，并另记此前是否已经消费字节，不等于普通空行。
每块最多扫描64KiB，遇LF消费到LF之后；累计长度仅超过8MiB才清空积累长度、进入discard模式，继续消费该行余部，之后不重新积累。遇LF时更新reader计数，discard返回独立超限结果，否则返回行buffer。取消、EOF、超限、IO错误四类内部判别必须保留；OOM/边界panic也不能改成正常空行。本体只推进reader、分配释放和更新计数，不改源文件；早退可能已消费多块，不回卷，且不能承诺早退执行了仅在LF路径的计数更新。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-14-result.json#/records/2

<a id="catalog-contract-17"></a>

### 11.17. SQL集合适配：同键覆盖、去重和错误槽的调用边界

责任ID：122, 124, 128

三条均为真实索引查询的数据收集支撑，业务语义不变；内联、ABI参数次序与cleanup外提不能算新增功能或据此排除应用调用链。
122收集 String→Option<String> map：先推进row，列0必须String，列1允许SQL NULL为None；下标、UTF-8、类型或step错误写共享错误槽并短路，列1失败须释放已取得key。按key长度和字节相等判同键，后值覆盖旧Option，释放重复新key及旧value，不把重复行当错误。失败前map可已有插入，外层caller发现错误后销毁临时map，不是数据库回滚。
124收集String set：列0必需String，成功插入并去重；正常行终止、内部停止标记和错误转发保留。错误替换共享错误槽并终止，不跳过坏行；先前元素由caller管理生命周期，本体不逐项撤销。
128是SQL String列迭代适配器：正常有row才解码列0并交出拥有所有权的String，无row返回无值；step/getter错误写共享错误槽，不伪造空字符串。双侧caller将连续字符串收成向量，初始无项返回空向量，后续发现错误须清理前序值。三者只有内存集合、字符串、iterator和错误槽副作用，无SQL INSERT/UPDATE/DELETE；失败后不回卷reader。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-14-result.json#/records/3
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-14-result.json#/records/4
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-14-result.json#/records/5

<a id="catalog-contract-18"></a>

### 11.18. 索引标量查询：空聚合、缺行和执行错误的不同默认值

责任ID：129, 131, 132, 181

裁定：四条原生合同不变，131/132只是将原标量helper内联。
129：statement原生预检查非零时直接返回参数/预检查错误，不进入rows；正常next且有row才取列0 i64，正常无row是独立缺行错误，不是0。列0只接受SQLite integer，越界/类型错/step失败保留原错误；不将数字字符串宽松转换。rows在成功失败都清理，推进后转换失败不回卷。
131只计 files 中 thread_id非空且subagent=0的 DISTINCT thread_id。132只读 files 的 fingerprint JSON $.size之SUM，SQL COALESCE仅将NULL聚合转0。两者prepare、预检查、next、无row及整数转换错误都不能被默认0吞掉，成功失败都关闭statement。
181读取 meta 中key=generation的value；成功返回读取值，仅缺行错误特判为0，其余SQL/列错误带analytics index上下文格式化后失败。它不写meta、不递增generation。四条都只有SELECT、SQLite资源生命周期与错误文案分配；没有持久化写回。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-14-result.json#/records/6
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-14-result.json#/records/7
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-14-result.json#/records/8
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-14-result.json#/records/9

<a id="catalog-contract-19"></a>

### 11.19. 工具变更统计生成change事件，不执行文件修改

责任ID：183

裁定：双侧归并逻辑不变。遍历结果项，仅成功tag1、added>=0、deleted存在且>=0的项目纳入files及统计；added/deleted均以有符号饱和相加，不回绕。用原位置元数据建立事件基础，序列化files并写入JSON，同时写累计added/deleted和事件类型change，再向调用者事件Vec追加；没有新增广播。
files序列化失败保留原unwrap/panic边界，不能静默换成空files；JSON插入失败结果按原逻辑释放，分配失败终止。先积累后序列化、最后append，因此序列化panic可发生在append前。本体只有内存事件/JSON副作用，files列表不代表它删除或改写文件；外层工具若已做文件操作，不能因本体失败宣称已撤销。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-14-result.json#/records/10

<a id="catalog-contract-20"></a>

### 11.20. 原生模型快照：engine选择、配置双检和20页收口

责任ID：46

身份是 codex_app_server 模型快照分页读取，不是project写命令。裁定：分页业务合同稳定；initialize.clientInfo.version由1.2.6改1.2.7；Page sequence对非法内部String容量-2增加检查，只是表示域守卫差异，不新增JSON字段。
setup先选择并验证Windows engine，失败原样包为setup错误，不进入config/read或model/list。候选源包括进程image/名称fallback、默认路径、注册表App Paths/卸载项、where、Store及缓存；有效engine需受控App根/bin布局、配套三个exe、四文件稳定摘要及16hex缓存键，规范路径去重，无匹配报CODEX_ENGINE_NOT_FOUND，多匹配/冲突报CODEX_ENGINE_AMBIGUOUS，不能任取。Store查询3秒，spawn/reader/wait/output/stop/reap/timeout错误分开，清理错误可覆盖先前错误；只在验证完成后更新进程内路径缓存。
setup随后以 CODEX_HOME 启动 app-server --stdio、建立管道/reader线程并完成initialize和initialized通知；spawn、缺管道、initialize/通知失败清理并返回，reader线程创建失败保留panic。
建立20秒总deadline，每次请求最多min(剩余时间,10秒)。先config/read(includeLayers=false)并校验：配置必须object，model_catalog_json缺省或null；model_provider缺省/null按openai，否则只能合法openai或受控aimai1。openai_base_url缺省/null可用，非缺须文本去尾斜杠后精确等于 https://chatgpt.com/backend-api/codex。aimai1另要求运行上下文两布尔守卫分别为真/假，base_url为http、127.0.0.1、当前端口、路径/codex/router/v1且无用户信息/query/fragment，requires_openai_auth=true，http_headers中的x-aimami-catalog-revision必须与计算摘要相等；不读取实际凭据作本次验证。
每页model/list传includeHidden=false、limit=100、cursor=null或上一游标；data必须数组，nextCursor缺省/null为None；重复字段、类型错或缺data失败，未知字段消费后释放；sequence形态恰两项。每项id须Unicode-trim后非空，display字段长度非零，alias元素非空，id不能重复，否则整批失败。Some nextCursor必须非空且未见；若第20页仍有后继则失败，无nextCursor才结束，不返回部分models。
收完再config/read及同一守卫，完整配置JSON必须与首读相等，变化则丢弃全部models并报配置变化错误；全部通过才交出向量。
⚠ 这不是零副作用getter：发现查询可启动隐藏查询进程并在失败/超时时终止该查询进程，setup另启动app-server；不等于启动Codex或执行taskkill。RPC失败、分页错误、最终配置变化均可能发生在进程已启动/请求已发出后；清理不构成业务回滚RPC或磁盘事务。本体没有任务写RPC、文件删除或业务DB写。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-14-result.json#/records/11
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-14-result.json#/support_sources
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-14-native-evidence.json#/model_guard_rows/2

<a id="catalog-contract-21"></a>

### 11.21. app-server同步RPC、结果适配和initialized通知

责任ID：135, 136, 137

裁定：三条请求/响应合同稳定。
136先取旧u64 counter作为id，再饱和递增；达到MAX保持MAX，不回绕。构造method/id并复制params，params转换的unwrap失败仍是panic。writer必须就绪；序列化JSON、正文写和尾换行各自保留错误边界，发送失败立即返回，不重发。发送成功后建立deadline，按剩余时间从reader通道读；timeout、关闭、IO错误分别传播。trim后坏JSON仅释放并继续等到同一deadline，不重置时钟。
服务消息优先处理：没有method为未处理；有method无id将任意JSON形态的通知复制入本地队列；有method有id发送JSON-RPC -32601拒绝响应，发送失败不能吞掉。这两种已处理消息不参与当前响应匹配。其余只有id属于无符号整数且等于本次旧counter才接受，其他消息释放后继续；不是把signed/float数值相等也当匹配。
匹配响应的非null error优先于result；message非文本用Unknown app-server error，code仅整数且能表示i64时有效。无非null error时，有result键就克隆其JSON成功，包括null；缺result是method相关错误。135将核心JSON成功移动到上层成功结果；RPC错误加method/明细格式化成业务错误，其余IO/读取/超时/解析等错误变体原样转出，不把所有失败归成一个字符串。
137只发送method=initialized与params，不含id、不消耗counter、不等响应；params转换失败panic，发送结果原样返回。
⚠ 失败时可能已有部分JSON字节/换行写出、counter已消耗、通知已入队，均不撤销；没有隐含重试、清空通知队列或“发送失败就完全没发”的保证。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-15-result.json#/records/2
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-15-result.json#/records/3
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-15-result.json#/records/4
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-15-result.json#/support_adjudications

<a id="catalog-contract-22"></a>

### 11.22. thread/list双归档分页与固定sourceKinds数组

责任ID：141, 186

141裁定：双侧分页、类型解码与去重合同不变。使用同一起始时钟，依次archived=false、true两轮；全局thread-id集合跨两轮，每轮单独cursor集合。每页开始检查elapsed>29秒则报30秒安全上限错误，而不是每页重新计时。请求thread/list传archived、cursor、limit=100、sortKey=recency_at、sortDirection=desc、useStateDbOnly=(a3 XOR 1)，单次请求使用10秒deadline参数。
sourceKinds固定顺序为 cli、vscode、exec、appServer、subAgent、subAgentReview、subAgentCompact、subAgentThreadSpawn、subAgentOther、unknown；不是只选主线程或仅两三种source。
响应先按ThreadListPage解码，失败独立报解析错误；每个item再按原15字段AppServerThread类型解码，失败立即清理并报错，不将内部352字节布局当IPC字段。thread id经过trim空值检查，空id失败。全局id重复只释放后项，首个条目保留，并写入当前archived状态。页尾无nextCursor才结束该轮；有nextCursor则做重复游标检查，换游标后若页数>99报上限错误。因此无后继的第100页可结束，仍有后继的第100页失败；不能套用model/list的20页上限或额外非空游标规则。
两轮全部成功才返回向量。请求、Page/item类型、空ID、重复游标、页数/时长任一晚期失败都释放已积累线程及cursor/集合，不返回部分成功；已发请求、消耗ID、通知队列副作用不回滚，无删除/kill/DB写回。
186是上述十字符串数组的序列化支撑：预留10项，按原序克隆每项为JSON String并组成数组，保留空字符串；数组初始化错误透传，非法容量/OOM终止。pre展开十次调用的clone helper正常恒成功、失败为分配panic；release改循环/特化并不表示删除十个业务错误分支。它本身只有JSON分配，无I/O。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-15-result.json#/records/5
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-15-result.json#/records/11
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-15-native-data.json#/rows

<a id="catalog-contract-23"></a>

### 11.23. Windows项目路径文本处理与日期目录排除

责任ID：176, 177, 179

三条合同不变，都是调用者选择的内存处理支撑，不做路径持久化或删除。
176先Unicode trim，仅在字节前缀精确为Windows扩展路径前缀（两个反斜杠、问号、反斜杠）时去掉四字节，再按UTF-8边界从尾部连续去除正/反斜杠，复制剩余文本；全部为空返回空字符串。它不访问磁盘，不canonicalize、不小写盘符、不统一内部斜杠；全分隔符输入可归空，不能拿它作安全根目录证明。容量/OOM为原panic边界。
177按字节序key及长度在BTree查指定字段；map/字段不存在或字段不是数组返回空向量。克隆字段Value并转换时，仅字符串元素经176正规化后非空才保留；不对任意值toString、不去重、不排序，保持原数组顺序。内部序列化/分配失败仍可panic，不是业务错误降级。
179以两种斜杠拆组件，少于三段为false；滑动检查任意连续三段documents/codex/YYYY-MM-DD，前两段ASCII大小写不敏感，第三段只检查长10、位置4/7为连字符、其余数字。它不验证日历、目录存在、用户profile或根位置，因此2026-99-99形状也会命中。true只表示调用者应排除这个候选，不代表删除真实目录。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-15-result.json#/records/6
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-15-result.json#/records/7
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-15-result.json#/records/9

<a id="catalog-contract-24"></a>

### 11.24. 项目state DB主读取与rollout缺失cwd候选：warning和skip层次

责任ID：178, 180

裁定：主读取和fallback合同不变；BTree/map生成形态变化不等于新增业务。
180优先可选缓存DB路径，否则动态解析；找不到路径或metadata失败正常返回全空。以32769只读打开失败返回空数据加一条warning；设置500ms连接timeout，设置失败释放后继续。schema读取失败返回warning空结果；缺id或cwd列返回空。archived存在时仅COALESCE(archived,0)=0，否则不过滤；排序表达式依次优先updated_at_ms、updated_at、常数0，已有列用COALESCE(...,0)，降序。
先COUNT，再读取id/cwd非空行。count查询错误或负计数只将计数归0；主查询prepare/step/列错误则释放全部主列表/map/set，返回warning空数据，不返回部分列表。cwd字节不能转UTF-8时累计skip继续；正规化后空cwd丢弃。非空cwd先写id→cwd map，同id后值替换；Documents/Codex日期形状或已见cwd不加入唯一项目列表，因此map与唯一项目列表不能视为同一集合。可记录UTF-8 skip数量。
随后178为DB中cwd空的线程读rollout补候选。它要求schema有id/cwd/rollout_path，否则空成功；archived可选筛选同上，source存在时COALESCE(source,'')，否则空字符串。SQL/step/三列解码错是整体Error并清理已积累候选；外部id集合已含该id或source命中精确10字节subagent模式时跳过。其余打开rollout，打开/读取失败、空输入、无效JSON、payload非object、payload.id不是与行id等长逐字节相等的字符串、payload.cwd非字符串，均只跳过当前行。有效cwd经176正规化，空或179日期路径也跳过，否则加入(id,cwd)候选。它不修复DB，不把找到候选等同UPDATE。
180调用fallback后仅保留候选数量并释放fallback向量，不将这些候选补入已得到的主项目列表/map；fallback错误只令该数量为0，不丢掉正常主列表。应分别表达“没有DB”“warning空结果”“count归零”“fallback数量0”和“单行rollout skip”。两体只有DB/rollout读取、内存集合及可能日志，无数据库写回、文件删除或kill；晚期主SQL错误不返回半成品，日志/读取不撤销。
本批proof SHA为bce646383cd8dbec16ee22c500c74950d00e78c299639e6622710c078425137d；5分片结果SHA及27条原source文件/正文SHA、original_id/role/ea/指针关系均实读匹配，分配集合27条、唯一27、无缺漏重复。此核验只证明本批归约输入身份，不把closed或hash相等当语义。consumerStartReady、strictImplementationUse、readyToImplement、implementation_use、gate_accepted、full_leaf_100、dim6、live_reference继续false；未运行真实App，不声明全App或真机一致。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-15-result.json#/records/8
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-15-result.json#/records/10
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-15-native-data.json#/rows

<a id="catalog-contract-25"></a>

### 11.25. 适用范围与证据身份

责任ID：

仅适用Windows x64同标签1.2.7的pre→release：pre SHA256=51cb41b613aaa50f410d606e1c4271b1de34576b497a1cba0f734eba46279faf，release SHA256=fd5f0c5aa7d500fe7fcef21359028fa614ede9965fc48888601883832ee7d8df。不借macOS，不扩大到全App。proof及五份result哈希、60个record_pointer与original_id对应关系均匹配；覆盖集合缺失0、额外0、重复0。下文是已决静态内容的消费者归约，不更改其他条目的原closed状态；ID192来源文字的矛盾已按真实PM定点确认纠正，现行清理合同以本章对应小节及provider-import-correction为准，原错误句保留作历史，不再列作现行未决项。consumerStartReady、strictImplementationUse、readyToImplement、implementation_use、gate_accepted、full_leaf_100、dim6、live_reference均保持false。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/catalog-content-closure-proof.json SHA256=bce646383cd8dbec16ee22c500c74950d00e78c299639e6622710c078425137d；仅records中slice_id=16–20
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-16-result.json SHA256=49acb868798fc29902b873cbe83d9627952ec6b30ca5af7fb89bc43b7d87a44e
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-17-result.json SHA256=2abbe3d7abbf8ca49f767ab5db247f97b9efee5ce2af36ecd76a9493b881be0f
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-18-result.json SHA256=df984a97acd796fe7a3d152ad3790dd5add48ffe58374a8b1f5c96a93bb7929d
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-19-result.json SHA256=336b912536181eec79746966ad13a713039552be13807504e9dcb05cdd63fa53
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-20-result.json SHA256=53031ad02c15773eeee1fe7e2b9c5a4073715ba5d951cf3f3a4bc3504c9457f3

<a id="catalog-contract-26"></a>

### 11.26. 模型目录生成、五别名分配与摘要

责任ID：42, 43, 67, 69

ID67：先验证模型选择记录，错误原样返回。a7为真构造默认模型；否则按id匹配选择项与原模型，未命中则构造保留id/名称的缺省项，再合并特性。补充项的slug缺失时实际写JSON null，存在才克隆；随后强制visibility=hide、priority=1000。外层写models及aimami_no_account，后者为a7 XOR 1。模型构造后pretty序列化仍可失败；成功才交还模型元数据、bytes与a7。release只是将pretty序列化外提；本体不写磁盘，生成成功不等于发布成功。此处采用slice16已经明确的nullable精化，不能沿用现有§7“缺slug保留原合并结果”的宽泛措辞。
ID69：选择项必须同时命中原模型、allowed-id集合和effort/特性名；按(model,effort)去重，最多5项。显式slug严格接受gpt-5.6-sol、gpt-5.6-terra、gpt-5.6-luna、gpt-5.5、gpt-5.4，不trim；无效、缺失或已占用者先留空，再按上述固定顺序分配未用别名。已有任一有效选择即返回；仅零结果且a8为真才按allowed-id顺序展开特性作为fallback，a8为假则返回空。全部仅内存操作；容量/分配不变量失败不是普通空结果。
ID42：source缺失或含非ASCII32..126且非tab的字节时降为“-”；合法空串保留。将source及另外两项上下文按既有格式计算SHA256，hex摘要进入既有HeaderValue格式；输出拒绝控制字节（tab除外）与DEL，标为非敏感值。本体不发HTTP；header不变量失败可终止，不伪装业务成功。
ID43：模型构建→紧凑JSON→SHA256→hex，release把pre摘要helper内联，算法与释放合同保留；序列化断言/OOM可在模型已构建后失败。这里只判摘要管线，不借此证明所有模型输入数据未变，也不新增持久化。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-16-result.json#/semantic_groups/json_writer
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-16-result.json#/semantic_groups/aliases；/semantic_groups/header；/semantic_groups/catalog_digest

<a id="catalog-contract-27"></a>

### 11.27. 目录缓存删除与引擎版本探测

责任ID：20, 21, 66, 68

ID20/66为pre/release同一删除合同。⚠ 目标只为repository下codex_router_catalog.json，不是相邻models_cache.json。删除成功或NotFound类结果视为成功；其他非OS编码错误直接返回。仅Windows错误5/32/33/1224且attempt<6才等待100ms重试；最多6次删除、5次等待。耗尽返回原错误，没有其他文件回滚。
ID21/68为同一版本探测合同，不把选择器全部内部逻辑一并判same。先选本平台引擎，选择失败透传；metadata失败单独报错。缓存仅在路径、metadata身份和可解析版本文本均匹配时复用；未命中释放锁后以隐藏窗口启动选定引擎--version并捕获输出。⚠ 1.5秒deadline、25ms轮询；wait错误/超时会清理、必要时终止并回收本次child及句柄。read_output、非零退出、UTF8、codex-cli空格前缀或版本解析失败均不写成功缓存。格式合法的版本文本可以先缓存，即使过旧；每次仍比较最低0.155.0-alpha.9.2。无法确认返回VERSION_UNCONFIRMED，过旧返回VERSION_UNSUPPORTED，满足才成功；缓存不绕过版本检查。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-16-result.json#/semantic_groups/cleanup
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-16-result.json#/semantic_groups/version_probe

<a id="catalog-contract-28"></a>

### 11.28. 引擎文件指纹与I/O错误上下文

责任ID：16, 59, 60

ID16/60为同一pre/release只读可执行文件指纹合同：打开失败带read_executable上下文；初始metadata失败带metadata上下文并关闭HANDLE。属性不满足普通安全文件条件，或size>=0x20000001时返回CODEX_ENGINE_INVALID_FILE；不是只核文件名。以64KiB分片流式计算SHA256，累计读量超过初始size立即失败。EOF后再次metadata，只有总读量、初末size及相应metadata身份/时间字段一致才输出hex摘要；读完后发生变化仍失败，不交还半成品摘要。读错误及后置metadata错误保留；所有已打开句柄正常错误出口关闭。此函数不执行或修改exe，合同保留。
ID59是这类探测使用的I/O上下文构造器：逐种处理四类打包错误表示，保留ErrorKind与可用raw OS code，按kind==1区分ACCESS_DENIED和DISCOVERY_FAILED前缀，并带operation上下文，输出既有错误变体10。只构造/释放内存，不据此增加文件操作、重试或新业务入口。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-18-result.json#/records/10
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-19-result.json#/records/0；/records/1

<a id="catalog-contract-29"></a>

### 11.29. Windows安装发现、六布局选择与有界查询child

责任ID：62, 143, 144

ID144保留独立ChatGPT安装发现合同。固定候选按顺序：LOCALAPPDATA下Programs\ChatGPT\ChatGPT.exe、ChatGPT\ChatGPT.exe、Programs\OpenAI ChatGPT\ChatGPT.exe、Programs\OpenAI\ChatGPT.exe；PROGRAMFILES与PROGRAMFILES(X86)各按ChatGPT\ChatGPT.exe、OpenAI ChatGPT\ChatGPT.exe、OpenAI\ChatGPT.exe。缺失/空环境项跳过，首个metadata有效候选返回。后续AppPaths、Uninstall注册表查询及where来源均验证输出、路径和ChatGPT.exe判据；reg query /ve只接受REG_SZ/REG_EXPAND_SZ并按既有三字段格式提取。spawn、非零退出、UTF8、空输出或无效路径均转下一来源；where只验证首个非空行，失败后换下一个name，不自动遍历全部行。耗尽返回None。其普通output调用没有已证的Store三秒deadline，不能外推。
ID143保留选择决策、内部helper外提：运行中ChatGPT真实image→有效缓存/安装发现/Store来源→应用进程派生候选与另一缓存→LOCALAPPDATA或home的AppData/Local下OpenAI/Codex/bin来源。每App根实际构造resources/codex.exe、resources/codex、app/resources/codex.exe、app/resources/codex、app/codex.exe、codex.exe六布局；再验证受控根、配套codex-code-mode-host.exe、codex-windows-sandbox-setup.exe、codex-command-runner.exe并按Windows路径语义去重。安装来源摘要前16个hex用于匹配引擎缓存标识，仍须具体验证；活动候选冲突或多个合格候选返回CODEX_ENGINE_AMBIGUOUS，不任取。无候选返回CODEX_ENGINE_NOT_FOUND；Store失败信息依原分支保留。只有选择成功且相应末级目录为ASCII不区分大小写的bin才更新进程内缓存；失败不发布缓存。这里不启动选中的引擎、不写磁盘cache。
ID62是pre内联的隐藏安装查询执行器外提，实际caller传三秒deadline，轮询睡眠min(剩余,10ms)。⚠ 创建查询child及stdout reader线程；缺pipe、reader创建/读取/异常结束、wait和timeout均先stop/reap并关闭自身资源，清理失败优先于原拟返回错误。终止范围仅本次创建的discovery child，不是用户所有ChatGPT/Codex进程。上述发现路径只读环境、registry与文件；不含注册表写、安装或卸载。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-19-result.json#/records/2；/records/4；/records/5
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-protocol-platform-credential-system-00.json#/rows/4，L276–634
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-19-support.json#/static_native/release

<a id="catalog-contract-30"></a>

### 11.30. 线程与分页Value解码及其内存支持

责任ID：187, 188, 207, 209

ID187：线程Value只接受sequence或map；其他JSON种类返回类型错误并释放输入。15字段及sequence顺序为id、cwd、path、name、preview、source、parentThreadId、agentNickname、agentRole、projectId、historyMode、gitInfo、updatedAt、recencyAt、turns。id必须存在；cwd/preview缺省空串，nullable字符串缺省None，source缺省null，gitInfo/recencyAt可选，updatedAt缺省0，turns缺省空vec。重复已知字段、key缺value、类型错误和nested错误传播；未知字段消费忽略。完整装配后仍检查剩余输入，多余项使错误并释放临时线程值，不能提前认成功。release外提map decoder，合同保留；不读写线程DB。
ID188：page的data必须存在且为数组，nextCursor可缺/null为None；map重复字段、缺value、错误类型及nested线程错误失败，未知键消费。sequence第一项data必需，第二项可选cursor；装配后多余输入仍失败并清理，不能把错误当data=[]。同样只是decoder外提。
ID207：线程vec按元素352B、align8增长，new_capacity=max(4,2*old_capacity)；成功才替换ptr/capacity，len由caller写。容量/分配失败为终止，不是业务错误或空结果；可能使旧指针失效，无磁盘副作用。
ID209：把JSON null/bool/数值/字符串/数组/对象映射为unexpected-kind，数值保留浮点/有符号/无符号与payload，组合unexpected显示值和expected descriptor构造错误。adapter自身不释放输入，caller负责；不是有效线程/page返回，也不是新增App功能。两支持体的调用合同保留，不以库形态排除责任。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-16-result.json#/records/0；/records/1；/records/2；/records/3
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-16-native-evidence.json#/paired_thread_field_tables

<a id="catalog-contract-31"></a>

### 11.31. stateDbs诊断对象与每DB读取边界

责任ID：52, 120

ID52：snapshot的显式DB路径override存在则克隆，否则从配置上下文派生默认路径；空路径与非法负长度分开，后者触发容量/分配终止。将DB路径集合逐项映射为stateDbs对象数组，再插入JSON；序列化失败是unwrap panic，不返回半对象。
ID120承接每DB项：输出path经过Windows路径显示与既有脱敏；active比较原始路径组件，而非脱敏字符串。exists与bytes分别独立读取metadata，错误分别降为false/null；不能复用第一次metadata证明两字段同时可靠。threadsTable缺文件时exists=false、columns=[]、missingCoreColumns=[]；存在则flags32769只读打开、500ms busy timeout、PRAGMA table_info(threads)读取列1；open/prepare/step错误表现为exists=false与readError。成功以columns非空决定exists，分别检查id/model_provider/rollout_path。JSON转换失败仍可panic。空输入不访问DB；后项失败时initialized-count只用于释放已构建前缀，不是持久化事务。全部保留，无UPDATE/DELETE或修复写回。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-17-result.json#/records/1；/records/10
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-17-result.json#/support_branch_adjudications

<a id="catalog-contract-32"></a>

### 11.32. 双目标threadShape与五分项健康统计

责任ID：53, 56

ID53：只有transition-active且状态为retrying/committing/reconciling/stopping_codex才返回专用忙态，不做正常DB发现/双目标检查。正常分别以aimai1与openai检查，按stateDbs→routerTarget→nativeTarget组对象。DB override存在则单根，否则枚举、转换并按Windows路径组件去重；metadata无效根跳过。目标检查只读打开flags32769、5秒busy timeout；读取错误收进readErrors，不执行修复。超过7条尝试并行，建池失败退串行。JSON转换失败panic，不返回第一个目标的半成品。
ID56将既有统计构造成targetProvider、clean、scanned、issueCount、dbMismatched、rolloutMismatched、missingRollouts、unreadableRollouts、readErrors、examples。clean仅当四项数值计数与readErrors数量全零；scanned和examples不参与clean。issueCount是dbMismatched+rolloutMismatched+missingRollouts+unreadableRollouts+readErrors数量。readErrors/examples分别脱敏和序列化，任一失败不返回部分JSON。只格式化、释放既有统计，不新增DB/rollout写入；双侧合同保留。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-17-result.json#/records/2；/records/5

<a id="catalog-contract-33"></a>

### 11.33. catalogShape字段比较的非对称判定

责任ID：54

读取router根codex_router_catalog.json与native根models_cache.json，各自报告exists/bytes、readError/parseError/parsedOk、rootFields、clientVersion、modelsCount/modelObjectCount/nonObjectModelCount、modelFields、relayModelCount/relayModelFields。metadata错误降为false/null；读取与JSON解析错误分别表达，不混作有效空目录。relay集合仅包含slug为String且含精确“::”的模型对象。officialCatalog可为null；catalogMode分别为native-discovery或static-relay-only。
fieldComparison优先选非空relayModels，否则allRouterModels。双方集合可用时，reference减选定router集合为missingFromRouter，反向为extraInRouter；status只看missing是否为空：非空mismatch，空compatible，extra非空不单独改成mismatch。缺任一侧为unavailable，两差集均空数组，source仍按原选择保留。转换/分配失败可panic，不能全部降为unavailable。仅文件读取和内存比较，无catalog写回；pre/release合同保留。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-17-result.json#/records/3

<a id="catalog-contract-34"></a>

### 11.34. processShape与完整诊断快照聚合

责任ID：55, 57

ID55先查ChatGPT，仅结果!=1再查Codex，codexRunning只接受任一结果==1；探测失败/非1在本caller按false，不使用其他进程分类器的“任意非零”合同。精确.exe名称匹配、ASCII大小写折叠、Toolhelp枚举与句柄关闭保留，无kill。dbHolders独立转JSON，转换失败panic。
ID57顺序构造schemaVersion=1、targetMode、configShape、authShape、catalogShape、threadShape、threadCatalogHealth、globalStateShape、processShape、invariants.violations。targetMode有效0为RouterOn，1为NativeOff。config诊断保留backupExists、foreignTopLevelKeys/foreignSections、topLevelModelProvider/topLevelModel、hasModelCatalogJson及routerEntry/providerSection/profileSection。auth读取成功只暴露模式、hasOpenAiApiKey、isRouterUnlockAuth、routerUnlockActive、routerUnlockMarkerExists及has-token布尔；失败为exists/error，不输出token。nativeNoAccountAuth/routerUsesOpenAiKey依既有状态布尔。globalStateShape读取/转换失败可返回error对象；各子项随后转JSON失败才是panic。后续子项失败不交还半快照。此聚合器会读配置/auth/catalog/DB和探测进程，不是纯内存，但没有修复或配置写回；双侧合同保留。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-17-result.json#/records/4；/records/6

<a id="catalog-contract-35"></a>

### 11.35. 专用资源释放与两种SQLite集合错误策略

责任ID：83, 85, 89, 90, 91, 93, 123

ID83释放96B元素vec的三组拥有字符串，再按capacity释放buffer；可选串区分None与空值，无文件/secret回滚。pre对可选容量用signed>0，release用非-1且非0：合法String/None合同一致，但损坏布局<-1的低层分支确有差别，不能宣称所有原始整数域same。ID85释放192B诊断候选的七组拥有字段；普通容量0跳过，可选容量-1/0跳过。两者均是App数据资源支持，不是async业务体；反编译返回寄存器不是业务返回值。
ID89、90、91是三个真实caller上下文的Result/Option字符串收集器，分别属于debug_bundle两个位置及project_state；90使用独立project错误析构，不能拿debug析构替换。底层SQLite step/reset及列1文本读取可失败；外层drop失败元素后继续，成功None也跳过，首个值分配capacity4，后续grow/append；耗尽清理iterator，空输出是空vec。OOM/容量错误不是空集合成功，集合少项不证明DB没有对应值。
ID93是旧迁移检查的filter-map next：仅活动variant==1推进，底层列0映射，逐项错误销毁继续，成功非None才搬移字符串；耗尽drop并清活动状态。ID123则是PRAGMA字符串HashSet fold：列1映射遇首个错误立即保留完整错误并停止，上层释放部分集合，绝不套用ID93丢错继续。release将pre caller负责的iterator drop移入fold正常/错误出口。除真实只读statement推进与内存清理外，无SQL写或磁盘恢复；指定合同保留。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-17-result.json#/records/0；/records/7；/records/8；/records/9
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-18-result.json#/records/0；/records/1；/records/3

<a id="catalog-contract-36"></a>

### 11.36. 两种数据库探针不能合并错误语义

责任ID：18, 142, 168

ID18/142为local_thread_catalog结构探针：mode1只读打开，250ms busy timeout设置失败即错误；sqlite_master表存在查询的prepare/step/列bool转换、缺表各自失败。表存在后仍必须准备SELECT host_id, thread_id, missing_candidate FROM local_thread_catalog LIMIT 0，缺列/prepare失败仍Err，成功仅证明这三个列可准备，不证明host归属、进程安全或数据完整。不CREATE、不修复，资源在各出口释放；pre通用转换在release展开不新增行为。
ID168另为threads可读性布尔探针：flags32769打开失败false；设置3秒busy timeout失败容忍后继续。查询SELECT COUNT(*) FROM threads WHERE COALESCE(archived, 0) = 0，prepare/step/无行/列0转换失败false；成功取到Result即true，不检查COUNT>0，所以合法count=0仍true。全部只读并释放statement/connection，合同保留。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-18-result.json#/records/6；/records/11
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-19-result.json#/records/3

<a id="catalog-contract-37"></a>

### 11.37. 修复计划报告、response-item-ID扫描与批修复

责任ID：121, 167, 171, 174

ID121只构造修复计划报告：每项threadId、rolloutPath、originalRollout.first/last的provider/model/reasoningEffort、originalDbRows及target。first/last的model/effort None写null，Some空串仍空串；target.provider固定openai，model/effort取计划目标，不取原首末值。originalDbRows转换失败panic；仅内存JSON，不执行修复。
ID171扫描归并response-item-ID异常：候选读取错误原样返回；按192B候选去重，缺值/重复/检查失败分开，不将所有跳过算checked。待检>=8尝试线程池，建池失败日志后串行；逐项错误加入failed IDs继续，非零异常计数才生成异常项，零计数丢弃。输出异常列表、失败ID列表与已检计数，不能当全健康。实际参数仍穿透settings override，反编译少参不代表release删除设置参数。
ID167先扫描，错误时未动文件；无可修复项时区分完全空与失败/跳过ID。⚠ 有项则逐文件修复，成功累加实际计数，失败记ID并继续。普通JSONL用temp、flush/sync、原metadata+SHA复查、备份描述、替换和替换后验证；受保护native布局变化报LAYOUT_PROTECTED而不替换，.jsonl.zst独立转换，无异常返回0。替换后验证仍可失败。所有项后重扫，重扫Err直接返回；有剩余/失败则部分成功说明并保留ID，仅全部清空才成功。晚期重扫或后项失败不撤销前面已替换文件。
ID174是thread_provider_consistency报告：按参数选择openai/aimai1并筛路径；>=8的线程池只作预热，建池失败仍执行最终统计。全部异常为0才ok；只有警告计数为warning，任意错误计数为error并保留失败ID/补充说明。native +96标志按原warning=0/error=1保留，不杜撰JSON字段名。上述报告/扫描/批次合同均保留，不等于底层全部库逐体认证。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-18-result.json#/records/2；/records/5；/records/7；/records/9

<a id="catalog-contract-38"></a>

### 11.38. 条件TOML修复与诊断状态best-effort发布

责任ID：161, 173

ID161：先做TOML语法诊断；读取失败不调用修复，只有异常标志==1且status!=ok才进入重建，否则Ok(false)。重建先修整并解析；仍不合法则按跨行三引号、单行引号/转义与注释状态分段，保留可解析片段；整体验证仍错退至既有226B重建头，不能用逐行遇方括号替代词法状态。⚠ 经同目录不同staging创建/写入/同步/替换，特定替换错误最多10次、间隔500ms；失败清理局部staging并透传错误。成功丢弃message返回Ok(true)，不是guard为真就成功，也不从包装层保证备份成功。pre/release条件修复合同保留。
ID173先原地替换调用者JSON.status，再写当前毫秒completedAtMs；仅failure指针存在才写failure，长度0为“”，指针None时不删除旧failure。⚠ 随后序列化并原子写状态文件；序列化/写入失败在上层只日志并drop，不向上传Err、不撤销内存更新。因此返回并不证明落盘，内存/磁盘可不同步；该顺序双侧保留。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-18-result.json#/records/4；/records/8；/support_pair_adjudications

<a id="catalog-contract-39"></a>

### 11.39. Provider导入与revision guard正常清理合同（已授权纠正）

责任ID：192

已可消费部分：provider导入按项校验ID/必填字段/headers，既有与同批已成功ID一起去重。INVALID_FIELD、DUPLICATE_ID、KEYCHAIN_WRITE逐项累积并继续，不是整批all-or-nothing。secret absent/空长度不写；真实revision writer另限<=1MiB且trim非空。⚠ 写secret实际是Windows key_revisions文件：创建并验证目录，独占建revision、读取file identity、编码aimami-relay-key-v1记录、write+flush后才交还guard；不是按KEYCHAIN_WRITE标签套macOS Keychain。成功项追加provider并以同一毫秒赋created/updated，返回成功数、错误及辅助操作列表。后项失败不自动撤销前项。最终commit仍检查状态/snapshot/active-route冲突，持久化后才替换内存state，执行体成功不等于最终提交成功。pre在executor前的config reconciler前检在release同位置不再执行，属于调用时机真变化，不可将整链标same。
最终commit前，包装器把本次导入产生的88B revision guard条目byte+80置1，表示抑制条件删除。最终state commit的out tag=-1为成功，成功支保持1；非成功支才置0，随后销毁接出的guard buffer。只有byte+80=false才按保存的路径和文件identity尝试删除新revision；identity不等拒删，删除失败只日志，不能保证所有失败revision均已删除。不能把另一层revision写入核的-1失败编码混用于state commit；亦不能把内存drop当成磁盘回滚。pre/release这段清理方向同形，caller前检时机变化仍保留。异常展开、OOM及未完整展开的collector内部不被扩成全局补偿证明。 PM定点裁决已解决该文字冲突；原错误句保留在correction证据，不再作为现行消费者合同。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-17-result.json#/records/11/adjudication
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-17-directed-support.json#/rows/44，L84–143
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-content-closure-router-catalog-mcp-lifecycle-manager-native-00.json#/rows/4，L430–435
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-protocol-platform-credential-system-00.json#/rows/1，L16–18

<a id="catalog-contract-40"></a>

### 11.40. 配置词法行、节名和顶层键提取

责任ID：70, 71, 72, 74, 76, 134, 157, 158, 159

ID134按TOML词法状态合并LF物理行，直到回到结构态或EOF，输出原输入连续slice；未闭多行字符串尾部仍保留，EOF状态防重复消费，无增长返回None。词法状态2为结构层、0/1为多行双/单引号；结构层#终止，双引号转义跳下一byte。范围/UTF8边界不合法为panic，不重新排版。
ID71、74、158共用六个trim后精确marker：# <<< aimami-relay managed end；# <<< aimami-relay managed end (top)；# <<< aimami-relay codex-router top end；# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)；# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)；# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)。只有结构行识别marker，多行字符串内部伪marker不改变状态。ID71收集非managed区域的合法节header并规范化；ID74仅收集首个section前的非managed合法bare root-key；ID158同范围保留完整原逻辑行而非仅key，marker跳过。遇section后继续扫描但不再采顶层，反编译的普通行提前return不是真实控制流。
ID76与157是两个独立release key提取体，共用同一pre对应：空输入、首字节#、无首个=、trim后空key均None；key只接受ASCII字母/数字/-/_，合法才分配复制。函数自身不将前导空白后的#当首字节#，那要由caller先trim；非法key与OOM/容量终止不可混同。
ID72按点分组件，组件trim并去双引号后以点join。ID159另为首组件parser：双引号切换quoted，quoted反斜杠保留并转义下一字符，quoted内点保留，首个非quoted点结束；trim结果，空值仍空串。ID70仅比较点分组件的较短数量，逐对长度/bytes相同便true，不要求总组件数相等。上述内联/外提保留原合同，均不直接修改配置文件；不能把这些词法helper提升为完整TOML语法验证。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-19-result.json#/records/6；/records/7；/records/8；/records/10
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-20-result.json#/records/0；/records/3；/records/5；/records/6；/records/7
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-20-completion-evidence.json#/native_literal_tables/managed_markers

<a id="catalog-contract-41"></a>

### 11.41. 受管内容捕获、quiet判据与三标记扫描

责任ID：73, 75, 77, 155

ID73在逻辑行/marker词法保护下返回剩余text及捕获的section/top-level项，不直接persist。marker原文保留，切换区段先flush当前capture；managed区内部文本保留，非managed的provider/profile section依据ID75分流，组件前缀关系用ID70。根级处理model/profile/model_provider/openai_base_url/model_catalog_json/model_reasoning_effort/disable_response_storage七键；quiet-owned为真时不进capture且不按普通行保留。非结构行保持所属capture，EOF flush并裁掉capture尾空行，最后规范化输出。捕获/抽离是内存结果，不等于已经删磁盘配置。
ID75仅接model_providers.或profiles.前缀，以首个quoted组件parser取suffix；aimami_relay、aimami_relay_前缀、aimai1、aimami_codex_router属于managed，谓词返回其反值：true捕获外部，false保留managed。其他前缀false；不把另一个正向helper当其pre对偶。
ID77要求两次key提取及TOML值解析/转换/查找成功且值为string，否则false。model仅认aimami_relay或aimami_relay_前缀；profile/model_provider另认aimai1/aimami_codex_router。model_catalog_json与state目录拼codex_router_catalog.json比较，规则为trim、反斜杠转斜杠、去末尾斜杠、ASCII不区分大小写；不读目标文件，也不声称canonicalize或存在验证。openai_base_url须http、127.0.0.1、空username/password、去尾斜杠path=/codex/router/v1、无query/fragment，并具有Some端口；不是端口数值==1。HTTP默认80被parser归一None，非默认合法u16端口才Some。
ID155独立扫描三个标记：model_providers.aimai1存在、profiles.aimai1存在、当前model_providers.aimai1段raw行含/codex/router/v1。section切换重置当前段，前两个存在位累计；返回flag0|flag1<<8|routeFlag<<16，不压成bool。第三位只是substring观测，不是URL验证，注释含该串也不代表发送过请求。上述合同双侧保留；分配/UTF8边界失败按native终止，无文件发布。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-19-result.json#/records/9；/records/11
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-20-result.json#/records/1；/records/4

<a id="catalog-contract-42"></a>

### 11.42. managed restore发布与两备份清理顺序

责任ID：78

先执行既有前置受管处理，错误立即返回；随后依次读managed plan、top-level plan，任一步失败清理返回。两plan均空直接空报告，不写配置。非空时读当前config，提取top/section；owned顶层项和owned section（含其结构header）跳过，外部项按已有/新增冲突列表分流并保留完整内容。合成后必须配置验证，失败不写。
⚠ 新旧文本不同才同目录staging发布：staging必须为不同兄弟路径，创建、写入、同步/校验后替换，失败仅局部清理staging。发布后目录sync未确认转ATOMIC_WRITE_PUBLISHED_SYNC_UNCONFIRMED: replacement exists; retain recovery record错误，保留恢复记录，不继续清理备份。文本相等分支不是创建备份，而是目标存在时进行file-identity同步；identity读取、同步中/同步后身份变更、missing parent均错误，不能凭文本相等跳过。
仅上述成功后，先删除router-takeover-backup.json，再删codex_router_top_level_backup.json。NotFound类算成功；仅原生5/32/33/1224最多10次、间隔250ms，其他立即错误。Win32 AccessDenied还可能走SetFileInformationByHandle删除回退。第一份成功第二份失败时，配置发布及第一份删除均不回滚；成功报告必须等两份清理均完成。pre/release此非跨文件事务合同保留，不能把atomic staging称整个restore原子回滚。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-20-result.json#/records/2
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-content-closure-aggregate-candidate-identities-release-160.json#/rows/3，L134–503

<a id="catalog-contract-43"></a>

### 11.43. provider保护名与第三方冲突候选

责任ID：160, 162

ID160：openai-primary-runtime、openai-bundled、ASCII不区分大小写openai及精确aimai1优先返回true；其他名称要求caller传入集合非空且长度/bytes精确命中，命中后仍排除aimami_relay与aimami_relay_前缀。集合来自调用者provider vector逐256B记录首个String，不是全局进程名单或联网结果。空集/未命中false，built-in优先于集合。
ID162只生成第三方provider/profile冲突报告，不写配置。结构header仅认model_providers./profiles.，先规范化suffix，再过保护名；保护项不进入风险扫描。非保护名称trim并ASCII小写，检测cc-switch/cc_switch/ccswitch/codex-switch/codex_switch/deecodex，命中即报告一次。未命中名称才检查当前section结构正文：首字节#排除，检测前五token加circuit_breaker/provider_router；正文命中在下个header/EOF报告一次，不与名称重复。其他header仅结束前候选，多行quote内伪header无效；报告标签分别为[model_providers.{name}]、[profiles.{name}]。双侧分支保留，容量/分配失败不当空报告成功。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-20-result.json#/records/8；/records/9

<a id="catalog-contract-44"></a>

### 11.44. config备份保留策略与quiet三态分类

责任ID：163, 164

ID163：读config只忽略既有ErrorKind0，其他读错返回read config.toml before backup failed；创建config-backups目录失败立即返回。以毫秒时间（计算失败取0）及16B ID编码的32位小写hex生成config.toml.{millis}.{hex32}.bak，原子写失败返回错误。⚠ 写成后目录sync warning仅日志/drop；目录枚举失败也仍返回成功备份path，不撤销新备份。候选只按文件名字节前缀config.toml.、后缀.bak与最小长度筛，不虚构regular-file或mtime筛选。以Windows路径组件升序排序，>=21条才尝试删除前count-20条；单次删错drop继续，循环有sentinel提前结束保护。不是按mtime清理，也不保证最终恰好20份；晚期枚举/删错不回滚新备份。合同保留。
ID164只读str三态，非bool：residual_cache/residual_manifest→0；下列22项→1：config_stale、auth_integrity、catalog_integrity、config_toml_syntax、config_third_party、db_orphan_providers、state_db_relocation、router_postcondition、router_http_contract、catalog_path_validity、takeover_backup_orphan、config_global_validity、config_profile_conflict、thread_missing_rollouts、legacy_migrated_threads、project_state_integrity、thread_response_item_ids、rollout_orphan_providers、router_unlock_auth_residue、thread_provider_consistency、thread_poisoned_instructions、thread_model_catalog_consistency。其他→2，精确大小写/长度。caller的supported filter跳过2，unknown计数只数2，修复资格只认1；set入口允许all或!=2，其他错误。分类器本身不执行quiet/修复、无IO。router_postcondition被分类不等于dispatcher多了可执行repair label；双侧完整分类合同保留。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-20-result.json#/records/10；/records/11
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-20-completion-evidence.json#/native_literal_tables/quiet

<a id="catalog-contract-45"></a>

### 11.45. MCP命令入口、操作锁与编辑后重新加载

责任ID：1, 2, 3, 4, 5, 6, 7, 8, 103, 104

本路只消费Windows同一1.2.7 pre→release的既决内容。proof SHA为bce646383cd8dbec16ee22c500c74950d00e78c299639e6622710c078425137d；五份result哈希全部匹配，60条record_pointer均指向相应original_id，60份原始主正文及source文件哈希匹配。二进制重新计算：pre=51cb41b613aaa50f410d606e1c4271b1de34576b497a1cba0f734eba46279faf，37413376B；release=fd5f0c5aa7d500fe7fcef21359028fa614ede9965fc48888601883832ee7d8df，34981888B。以下不借mac、不重判closed；implementation_use、strictImplementationUse、readyToImplement、gate_accepted、dim6、live_reference均保持false。
ID5/6/7/8分别是remove_mcp_server、set_mcp_server_enabled、upsert_mcp_server、load_mcp_servers的IPC参数/响应入口。load只要求repo状态；另外三个还要求mutationGate。remove解析name；toggle解析name和enabled bool；upsert依次解析name、transport、enabled及command、args、url、headers、environment。缺状态或任何字段解析错误立即回复，释放此前已取得字段，不调用编辑操作。响应中的原生136/144/336字节布局不是JSON字段定义，不应当作新增DTO。
ID1的load操作取repo锁，poison拒绝；锁内加载配置失败返回错误。成功复制路径、列表、数量及时间，再尽力持久化MCP快照。pre在保存helper里做九处目录检查，release外提到load调用者并显式传路径；是职责外提，不是新增能力。快照序列化/保存错误被丢弃，不推翻列表成功。⚠ load可检查/创建目录及写快照，不能因没有mutationGate而称全链只读。
ID2与103为两版remove操作；ID3与104为两版upsert操作；ID4为toggle操作。均先mutationGate，再repo锁；gate失败或poison不编辑，各出口释放已经取得的锁并按等待者状态唤醒。upsert按长度与字节识别stdio/http/sse为0/1/2，其它保留3，不把unknown改称stdio；全部字段传入编辑核。编辑失败不继续load；编辑成功后重新加载完整服务器列表，成功才装配响应。toggle还需按name找回目标，upsert内核找不到回读项时保留输入项作为fallback。⚠ 后置reload或目标查找失败可发生在config已替换之后，返回错误不恢复旧文件。
加载核允许配置缺失为空；真实读取错误仍失败。坏TOML返回Invalid Codex config.toml；缺mcp_servers为空，存在但非table拒绝。每项须table；command/url须string，enabled须bool，args须string数组；坏项失败并清理此前条目。transport先据command再据url推导，enabled缺省true，args/maps缺省空，http_headers优先headers，env独立；headers/env存在时必须是字符串值table。成功列表排序后返回。删除/启停/更新保留候选验证、受管marker保护、最多三轮写前重读比较及原子发布；它们不是跨整个命令的事务。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/catalog-content-closure-proof.json#/records
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-21-result.json#/records
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-21-result.json#/support_results
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-22-result.json#/records/0

<a id="catalog-contract-46"></a>

### 11.46. 损坏配置挽救与两种不可混同的第三方标记判断

责任ID：166, 169, 172

ID166两版分支不变。先读取config，按错误分类允许空输入或返回真实读取错误。受管内容剥离器先识别非受管合法表头，再按六种BEGIN/END标记与路径父子关系去除受管块、残留CLI/固定说明行，整理尾空行；词法状态保护字符串里的伪表头/伪标记，剥离器本身只生成内存文本。
剥离结果若TOML及目标结构解码均通过，直接原子发布该结果并返回剥离提示；不先做损坏备份。仍无法解码才备份原文件，备份失败即停止。备份允许原文缺失但不吞真实读取错误；创建备份目录、按含时间等片段的名称原子保存，成功后枚举排序，超过20项才尽力删除旧备份。之后按LF扫描并剥CR，只有词法上的表头才分块；空块丢弃，每块独立TOML/结构解码，仅保留可解块，trim后用两个换行拼接。整个候选再解码，仍失败则只保留既定226字节重建头；最终发布成功后区分“只剩重建头”和“挽救了部分内容”的提示，发布失败返回IO错误。pre迭代器与release内联扫描是同一合同。
⚠ 此过程会覆盖config并丢弃不可挽救块，还会删除超额旧备份；备份及旧备份清理在最终配置发布之前。后续重建/发布失败不撤销已写备份或已删旧备份；本repair没有MCP式三轮原文比较，不得补称并发事务。
ID169：不trim，仅ASCII小写；非空且首字符为#立即false。随后短路contains集合cc-switch、cc_switch、ccswitch、codex-switch、codex_switch、circuit_breaker、provider_router。
ID172：先trim再ASCII小写，无169的#首字符过滤；集合为cc-switch、cc_switch、ccswitch、codex-switch、codex_switch、deecodex，不含circuit_breaker/provider_router。两者均只返回bool及分配/释放临时串，不读取配置、不关闭进程；空串首字符保护与分配失败终端保留。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-21-result.json#/records/0
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-21-result.json#/records/1
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-21-result.json#/records/2

<a id="catalog-contract-47"></a>

### 11.47. 通用配置重写、图像设置变换与读取错误分类

责任ID：112, 113, 115

ID112是配置文本生成/验证/发布核，不是MCP命令包装。两版均先准备父路径；失败直接返回。最多执行三轮：读取原文→生成并验证/规范化候选→候选与原文长度和字节全同则成功no-op→再次读取同一路径→两次原文长度和字节一致才发布。只有第二次原文发生冲突才释放文本、按日志级别记录并重试；读取、候选验证及发布错误不是重试理由。三轮冲突耗尽返回明确错误；CODEX_CONFIG_REWRITE_INVALID验证错误保持。成功不额外reload。
ID113沿用三轮、相同候选no-op、两次原文比较及发布错误规则，但变换由传入byte控制：非零在[features]确保image_generation = false，零删除该设置，不能把非零解释为启用图像。生成器是行扫描，不是引号感知TOML解析：trim后精确识别[features]，只扫描首个目标表到下一表；设置行须精确key、后接trim后的=且值非空，多个命中保留最后可替换位置。开启禁用设置时替换已有行，否则插到表头后，或按末尾LF补边界后追加表和设置。删除模式移除目标设置；无其它实质行时删表头及后续连续空白，注释本身不被该循环删除。输出按LF连接，非空且缺末尾LF则补LF，空结果仍为空。
ID115是共用读取适配器：底层成功返回文本；失败按四种原生错误表示取得kind，kind==0转成功空文本并释放错误，kind!=0保留错误。不能把kind0擅自改称某个未经证明的Win32错误。初始dispatch的fallback值pre42/release43不同，但均非零，适配器仍走Err；也不能据初始表推断运行时全部错误映射。底层open/read/UTF8检查及CloseHandle边界保留。
⚠ 两个重写核都可能先创建目录、后替换配置；写前重读比较不是OS级原子compare-and-swap，比较后至发布前仍不能承诺无竞态。发布失败也不能一概推为目标未变；本体没有自动恢复旧文件。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-22-result.json#/records/2
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-22-result.json#/records/3
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-22-result.json#/records/4

<a id="catalog-contract-48"></a>

### 11.48. MCP的TOML内存支持：转换、表选择、插入和析构

责任ID：111, 116, 117, 118, 204, 205

六项均是两版保持的局部内存合同，不新增IPC、文件事务或MCP业务。
ID116区分三条路径：缺headers/env值→空map；存在但非table→MCP headers/env must be a TOML table；table中任一value非string→MCP headers/env values must be strings，并清理部分map，不跳过坏值。全部合法时复制key/value形成映射。pre外提B-tree迭代与release内联遍历保持节点、索引、remaining及终止规则；不变量失败不当成功。
ID118确保mcp_servers和指定server都是可编辑table：缺失时插入空表；已有值仅接受相应普通/inline table接口，顶层或子项任一类型不符分别报错，不把错误类型强制覆盖成table。插入忽略的旧值交析构支持，最终lookup失败仍报错。
ID204只初始化空table：线程哈希状态未初始化时先初始化，已有则复用，推进状态计数，清空容器长度/容量及样式/装饰槽。随机种子不是固定业务常量。
ID117先通过目标trait处理旧内容，非成功返回值析构；输入map空时到此返回。非空收集key并排序，2..20和>=21只是排序策略阈值，不是条目上限。继承目标表样式，逐key用hash及长度/字节查原value；找不到是No entry found for key不变量panic，不是跳过。复制值经205插入新表，最后替换目标内存table；不直接落盘，也不向上提供文件发布成功证明。
ID205处理owned key：负长度/OOM终止，空key用空哨兵，非空分配复制；搬移输入值，用table哈希状态插入。没有旧值返回无旧值哨兵；替换时释放旧key相关字段，把旧值交回调用者继续析构，不统一当作没有旧值。
ID111按变体清理：tag8无释放；tag2清四组owned字段，tag3..6清三组，tag7递归，其余基础变体按有效字段处理；tag10清附加字符串、哈希存储及304字节entry；其它高tag遍历176字节值。长度零不遍历、容量零不free，递归析构及对齐保持。它不是async工作体；释放堆资源不等于删除配置、终止进程或业务回滚。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-22-result.json#/records

<a id="catalog-contract-49"></a>

### 11.49. 应用名称、ChatGPT精确名称、路径查询与诊断格式化

责任ID：87, 94, 105, 152, 153

ID152取slash/backslash分隔后的最后一段，无分段结果回用原输入，ASCII小写后调用联合名称谓词。两版接受精确codex.exe/chatgpt.exe（长度9/11）；还接受codex-、codex空格、chatgpt空格前缀，分别至少6/6/8字节；helper专门分支至少12/14字节，虽被通用空格前缀包含也不能收窄删除。裸codex/chatgpt不自动接受。负长度/分配失败终止，零长仍安全交谓词。pre先复制再小写，release融合复制/小写，所有尾段保持。
ID153是另一条更窄的路径谓词：取得原生file-name且可转UTF8，必须恰好11字节，逐字ASCII大小写无关等于chatgpt.exe；没有文件名、转换失败或长度不符均false。不能拿联合名称谓词代替启动路径的精确检查。
ID105只查询路径：OpenProcess访问权0x1000，QueryFullProcessImageNameW使用1024 WCHAR；打开失败、查询失败或空路径返回None，已开句柄均CloseHandle。长度越界有原生guard；路径转换后还须metadata通过，否则释放路径与错误返回None，不提权、不伪造路径。调用者可以保留Toolhelp枚举名降级；None不证明PID不存在。
ID87消耗32字节进程记录，仅在152分类为false时生成PID/name展示串，分类true不输出；每项原owned名称均释放，输出为字符串向量，余项和底层缓冲正确回收。ID94不做这个筛选，而是把给定范围全部32字节PID/路径记录转换成24字节诊断字符串；空范围返回空，容量溢出/OOM走终端。两者都只是诊断/内存支持，不枚举或kill；格式化成功不证明进程已退出，也不会撤销调用者早前的kill。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-22-result.json#/records/11
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-23-result.json#/records/0
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-23-result.json#/records/1
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-24-result.json#/records/0
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-24-result.json#/records/1

<a id="catalog-contract-50"></a>

### 11.50. DB资源、Restart Manager持有者与唯一DB选择

责任ID：145, 146, 147, 149

均为Windows双侧不变合同，只读发现，不执行SQL或写DB。
ID149解析CODEX_HOME的OS字符串成功即使用，不自行增加UTF8/非空限制；取不到再取home，home缺失回相对.并拼.codex。扫描既有state_数字.sqlite：数字段非空，允许前置+数字，单独+/-和溢出拒绝；目录/条目失败降级略过。每个DB派生主文件、-wal、-shm，metadata成功才纳入；Windows Path组件语义去重后交RM，不是裸字符串去重。
ID147没有资源就返回空；RmStartSession失败记录后空。成功后注册UTF16资源，注册失败空并结束session。第一次RmGetList只探测，必须ERROR_MORE_DATA=234且needed>0才分配668字节一条的数组并第二次查询；其它情况空，第二次失败也空，不无界重试。成功按真实条数遍历，过滤PID0、自身和已见PID。能查image就采用路径；失败保留RM名称，名称trim后仍空再生成PID展示。成功启动的session在正常返回路径均EndSession并释放数组/UTF16；此处无RmShutdown或kill。
ID146先Toolhelp枚举，向PID集合登记已有项，再合并RM结果；RM记录只有通过联合Codex/ChatGPT名称谓词且PID未见才追加。Toolhelp snapshot无效或first失败的底层合同是退空并关有效句柄；但枚举链实际返回Err时本层原样传播，不能一律伪为空成功。RM采集本身允许其它程序，名称筛选是在合并层。
ID145选择的是state DB路径，不是exe。逐DB查询主文件/WAL/SHM持有者，以ChatGPT/WindowsApps及缓存ChatGPT父路径关系校验owner；有路径按目录/受控前缀，无分隔短名按chatgpt/chatgpt.exe或缓存basename匹配，不接受任意锁文件程序。对合格DB候选排序并按Path组件去重；仅去重后恰好一个才返回，零或多个返回None，多候选日志开关不改变选择。RM失败可退空，None由调用者进入其它语义选择，不能解释为DB不存在。
⚠ RM失败→空是既有降级行为，绝不构成“无锁、可以安全改写DB”的证明；应用列表为空也不排除其它程序持有DB。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-23-result.json#/records/5
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-23-result.json#/records/6
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-23-result.json#/records/7
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-23-result.json#/records/9
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-23-result.json#/support_dispositions

<a id="catalog-contract-51"></a>

### 11.51. 转场围栏的创建、后台循环、收尾及强制关闭

责任ID：28, 138, 139, 150, 151

两版分支不变；围栏是在改配置/DB前跟踪并收敛writer进程的后台保护，不等于单次kill成功。
ID138先preflight。严格模式a4=false：preflight错误直接返回，成功后等待12秒quiet；容错模式a4=true：记录并释放preflight错误，quiet改为2秒，quiet失败置degraded仍可继续spawn。创建stop、重现计数、degraded三个Arc状态，线程名codex-transition-fence；spawn失败返回错误并释放三者。此前关闭的进程不因此复活。
PID状态支持每轮提取、排序、去重：空集返回0并清状态；旧集空按initial标志返回1或4；当前出现上次没有的PID返回4并清success/failure；当前只是旧集子集不算新一代。无新增时返回2 | success | (failure>=3)，即2或3；每轮保存当前集。排序阈值21不是进程上限。
ID28后台worker只有stop共享位控制外循环退出，每轮80ms。枚举错误置degraded、清理后继续；仅状态1/2/4尝试关闭，4增加重现计数。关闭成功置success并清失败数；失败数饱和255、置degraded。>=3用于日志和状态3抑制同一批PID重复关闭，不是在worker里第三次失败立即break；新PID仍能触发新关闭。关闭分派保留flag两路：真时先主进程分类/安全关闭再重新枚举过滤；假时区分是否提供授权attempt对象。worker实际attempt=null，不能删去quiet分支。前台quiet循环则另有总deadline，关闭连续失败>=3可直接返回错误；空集须连续700ms，再复核非应用DB-holder，通常80ms轮询，不能与worker混写。
ID139先stop=1，take线程handle并join；join错误置degraded。随后复核writer：仍有则quiet(4秒、initial=true、attempt=null)，没有则检查名称谓词不接受的RM DB-holder，残留报错且不强杀任意其它程序。对象严格标志为false时传播错误，为true时明确记录/吞错并保留degraded；重现计数相加溢出饱和u32::MAX。成功也可带degraded。
ID150是独立3秒协调循环：反复Toolhelp+RM，枚举错误传播，deadline到返回残留诊断；未到调用强制关闭，成功后300ms再查。应用为空仍需拒绝非应用DB-holder。ID151仅对给定PID集合等待：取枚举交集、排序去重，空或deadline到返回真实remaining向量；未到睡眠min(剩余时间,50ms)。返回成功信封可以仍有PID，不是bool“已退出”。
⚠ 关闭支持按去重PID生成taskkill /F /T及各/PID，空集不spawn；隐藏窗口运行，非零退出码需逐PID复查。普通关闭后先等750ms；仍存活才按共享attempt标志至多提权一次，授权前置标志，SystemRoot缺失才回C:\Windows。runas要求进程handle，等待30000ms，区分取消1223、超时258、WAIT_FAILED和取退出码失败，之后仍需3秒存活复查。外层3秒不覆盖内部授权30秒。部分kill后仍可能失败，所有已完成关闭均无回滚。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-22-result.json#/records/10
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-22-result.json#/support_branch_adjudications
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-23-result.json#/records
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-23-result.json#/quiet_and_worker_dependency_closure

<a id="catalog-contract-52"></a>

### 11.52. ChatGPT重启与直接启动fallback顺序

责任ID：140, 148

ID140为策略协调，ID148为直接exe/PowerShell启动支持；双侧保持，pre路径分割helper在release内联不算新增重启能力。先在锁内克隆缓存，metadata及ChatGPT路径谓词通过才用，否则重新定位。统一分隔符后按完整路径段、ASCII大小写无关识别11字节windowsapps，不能改成任意子串匹配。
非Store候选先进入148：候选不满足ChatGPT专用路径谓词立即拒绝；隐藏spawn，父目录存在时设置cwd，释放child/stdio句柄，然后每80ms检查，最多10秒，必须观察ChatGPT就绪才成功。spawn失败或未就绪进入PowerShell fallback：路径先处理单引号，固定-NoProfile、-WindowStyle Hidden、-Command及Start-Process，再独立做一轮10秒/80ms就绪检查；spawn、退出或handle释放本身不等于ready。
直接策略失败累积错误后尝试Store resolver；缺Store应用与激活失败分别保留。存在AUMID时通过隐藏explorer.exe启动，也须10秒/80ms就绪检查。只有原候选存在且原本属于WindowsApps，Store策略失败后才再尝试该候选直接启动；不是所有失败都无条件重试全部方式。某策略成功则清理此前错误，全部失败才汇总返回。
⚠ 第一策略已经spawn但未ready时仍可能启动下一策略；最后返回失败不自动kill或撤销先前已启动的进程。这里只归约静态合同，未启动任何App。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-23-result.json#/records/4
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-23-result.json#/records/8

<a id="catalog-contract-53"></a>

### 11.53. 过渡journal：受限读取、写入、投影与有保护的清除

责任ID：10, 11, 12, 13, 14, 15, 26, 191

这些合同双侧保持，不是新增恢复事务。ID191底层reader先查metadata：目录及被拒绝的reparse组合报非普通文件错误；仅missing返回None，权限/其它IO保留错误。最多读取1048577字节，超过1MiB拒绝，等于限额允许。先验证schemaVersion=1，再执行记录解析，两个阶段各自错误均明确返回，不做legacy错误fallback；handle均关闭，不修复坏文件。
ID14是特定宽容投影：reader成功提取可选记录，错误按日志级别记录后drop并返回None。ID15再只保留精确retrying、committing、reconciling、stopping_codex，其它phase释放记录返回None；同样可在本包装吞读错。不能把这两个包装的吞错扩大成底层reader合同。
ID11 writer先读现有journal，读错不创建phase。旧phase=committing且force=0时保留journal，可能记录观察日志，然后返回ROUTER_COMMIT_RECOVERY_REQUIRED。目标相同保留startedAtMs，目标不同或无旧记录用当前时间，updatedAtMs总更新；序列化schemaVersion、target、phase、startedAtMs、updatedAtMs、可选reason，超过1MiB拒绝，合格才原子发布router-transition-journal.json。成功后再写观察历史。ID12仅在无旧记录或target一致时调用固定8字节收尾phase `degraded`的force=1 writer；目标不符返回相同恢复错误，reader/writer错误仍保留。force只绕过committing保护，不绕读错/序列化/限额/IO；该phase确切为ASCII `degraded`（8字节），双侧原生字节和调用点已核；不能替换为done或complete。ID13只分配并复制同一170字节恢复错误，不写文件、不停进程。
ID26只尝试failed phase、force=0；writer成功消费可选warning，失败仅按级别诊断/drop，不让次级阶段错误替代上游原错误。它仍可能被committing保护拒绝。
ID10清除器：reader错误原样传播，None直接成功不删。有记录时mode2是通配目标，但committing时拒绝；显式mode!=2按target是否匹配决定，不能写成所有committing都不可清。通过保护才删journal：要求父目录，NotFound视成功，其它错误保留；AccessDenied有句柄式SetFileInformationByHandle删除fallback并关闭句柄。拒绝保留记录，说明ChatGPT不自动启动。删除成功/已不存在后才记cleared_sync_unsupported及transition completed or already stable观察记录。
⚠ 原子writer要求同父目录、不同路径staging，写/sync/close后替换目标并做后续同步；晚期返回错误不能保证目标未替换。观察历史读取/解析失败退空，新行追加、最多保留最后200条、补LF后重写，写失败不回滚主journal；读错后重写可能覆盖旧历史。清除journal先于观察历史，后者失败不恢复已删journal；普通日志错误被丢弃不改变清除成功。

**original_id12精确合同**：本收尾包装器传给writer的phase是ASCII `degraded`（8B），force=1；pre0x1407d7100与release0x140cc43b0对应调用点及两侧原生字节均已绑定，不能替成complete或committed。原有“固定8字节值未交付”的缺口已由本节字节证据补齐。

三常量正式补证：`release-fd5f0c5aa7d5-consumer-literal-contract-supplement.json`，SHA256 `51ad1d8c67127a50c1e44d0058ea48113e61e905ca0edd25eb12493b675560b2`；两侧值逐字节相同，未改变原guard或side-effect顺序。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-25-result.json#/records
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-25-result.json#/support_adjudications
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-24-result.json#/records/11

<a id="catalog-contract-54"></a>

### 11.54. 三种提交完成器：主操作、同步warning和journal错误分开

责任ID：23, 24, 25

三种包装双侧迁移，不新增业务，不能因共享收尾模板而抹掉真实操作分派和flag来源。共同顺序是begin-committing→实际操作→判断同步warning→记录同步未确认或收尾phase→返回原操作数据及warnings。
begin失败或操作失败时尝试记录commit_failed；这次记录再失败只诊断/drop，保留原始操作错误，不以次级journal错误替换。实际操作成功但同步warning非零时，记commit_sync_unconfirmed观察记录，并把170字节恢复提示追加warnings，返回degraded成功载荷，不把已经完成动作伪成未发生。同步已确认则合并warnings，调用target受控收尾writer；收尾失败只诊断/drop，仍返回原成功数据与warnings。因此成功响应不保证journal一定完成更新。
ID23有输入判别值2的专用操作链，其它值走普通链，并从传入flag指针取控制位；原生136字节结果及其专有成功/错误判别保留。ID24读取输入对象的控制字节以及独立flag指针，保留对象前段和warnings；ID25的控制flag明确来自另一输入对象偏移382字节，而不是ID24的flag指针，不能合并为同一参数读取。内部结果tag与字节布局不是可新增的公共IPC枚举。
⚠ 主动作可能已经修改配置/DB/state，后面的同步warning、恢复提示或journal错误不提供全局回滚；包装不能把“返回degraded”“保留恢复记录”“主操作失败”合并为一个bool。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-25-result.json#/records/5
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-25-result.json#/records/6
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-25-result.json#/records/7

<a id="catalog-contract-55"></a>

### 11.55. 子进程输出捕获与工作结果所有权清理

责任ID：27, 45

ID27两版均以8192字节缓冲读取传入handle，只保留最前1MiB；接近上限追加min(本次字节,剩余容量)。达到1MiB后仍持续drain到EOF，不再增长返回Vec，不能提前关闭管道造成子进程阻塞。EOF返回已收集内容并CloseHandle；读取错误丢弃此前缓冲，返回IO错误并仍关闭handle，不返回部分成功。单次读长越8192及分配失败走原生guard。读取会消费管道数据，失败不可重放；这不是191那种超过1MiB即拒绝的文件reader，也不自带整个子进程deadline。
ID45只负责Result<Vec<104字节记录>,动态错误>的owned资源。错误分支用可空vtable.drop，再按size/alignment释放；release把pre工作线程join错误分支的内联清理外提。成功清理路径逐记录释放必选String，并尊重嵌套Option的None哨兵，不能读取/释放无效字段；先清元素，再在capacity非零时按104*capacity、align8释放Vec。正常成功消费者则将元素移动到累积器，pre的drain尾部释放的是已消费的Vec分配，不能移动后再析构原字段。不捏造pre独立同名成功析构地址。
二者无文件删除、session删除、truncate、kill或exit。内存清理支持不能用来证明整个工作线程调度/执行顺序稳定，也不补偿调用者此前外部副作用。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-25-result.json#/records/10
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-25-result.json#/records/11

<a id="catalog-contract-56"></a>

### 11.56. 按dialect应用thinking/reasoning：保持分支，不把外提算新能力

责任ID：107

本体只改调用者内存JSON，不发HTTP、不写配置；tag0模型筛选/值复制从pre内联外提，其它dialect分支保留。
设置状态先看原有effort查询项：字符串trim并ASCII小写，off/disabled/none为关闭0，空串或其它字符串为开启1；没有该字符串才看reasoning字段，存在且非Null为1、Null为0，都无为未设置2。实际输入查询参数为 `/reasoning/effort`（17字节），不同于16字节输出键 `reasoning_effort`；双侧调用和原生常量已核。
tag0先将模型名trim、小写，gpt-后首字符5..9或o后首字符0..9才处理；查询项存在时按原JSON类型复制到输出reasoning_effort，不限制为string。tag1写thinking.type enabled/disabled，仅开启才继续effort；tag2/4/5写thinking后直接返回，不能把后方共享但当前不可达的映射说成新增输出；tag3写reasoning_split bool。tag6关闭写reasoning.effort=none，未设置不动，开启进入映射。
effort缺失或非字符串不继续；trim、小写后off/disabled/none不再写。tag1把max/ultra/xhigh映射max，其它非关闭字符串（含空）映射high，写reasoning_effort；tag6把max/ultra映射xhigh，low/high/xhigh/medium/minimal保留，其它不写，写reasoning对象的effort。未命中tag不写。
⚠ thinking可能在后续字符串构造失败前已修改；原生JSON构造失败可panic，不存在内存修改的事务式回滚。此支持合同不替代上层请求能力/结构校验。

**original_id107精确合同**：effort查询的输入参数是ASCII `/reasoning/effort`（17B，包含两个斜杠）；不能把输出对象的 `reasoning_effort`（16B）作为输入key。双侧helper调用和常量字节均已确认。原有“17字节输入名缺源”检查点不再适用。

三常量正式补证：`release-fd5f0c5aa7d5-consumer-literal-contract-supplement.json`，SHA256 `51ad1d8c67127a50c1e44d0058ea48113e61e905ca0edd25eb12493b675560b2`；两侧值逐字节相同，未改变原guard或side-effect顺序。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-24-result.json#/records/3
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-24-result.json#/directed_auxiliary/0
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-24-result.json#/directed_auxiliary/12

<a id="catalog-contract-57"></a>

### 11.57. 协议链的缓冲适配、空白与边界匹配支持

责任ID：44, 130, 175, 194

四项都是双侧保持的局部支持，不新增协议请求、端点或持久化。
ID44优先消费32字节游标队列，有效项返回item，队列耗尽清理。仅在没有可取队列项时消费一次tag1错误：先置已消费状态并清源tag，再分配动态错误封装；没有缓存/错误才返回结束。completed/poisoned重入分别panic。分配失败前状态已改变，不能称错误仍可重新消费或原子回滚；无网络/进程操作。
ID130扫描有效UTF8切片的前导Unicode空白，空串原指针返回，全空白返回末尾。按1/2/3/4字节解码，ASCII9..13及32直接接受，其余按相同Unicode表及U+1680/U+3000判断；遇首个非空白停止。它不是裸字节UTF8验证器，不修改输入、不分配。
ID175不是普通contains。逐pattern命中检查两侧必须为字符串边界或-、/、:、@；后续为-时再扫描后缀段，非数字后缀接受，数字后缀只有恰好八位十进制例外接受，其它继续寻找下一命中。八位规则不等于日历有效性校验；所有候选失败才false，UTF8切片边界/索引不变量失败是panic而非false。
ID194匹配三字节HTTP状态码：长度<3拒绝；从开头命中仍要求右侧非数字或结束，其它位置还要求左侧非数字。初次边界失败继续找后续命中，不能从更长数字中取码。调用者据403/401/404/429/500/502/503分类错误；本体只是字符串谓词，不发送请求。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-24-result.json#/records/2
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-24-result.json#/records/4
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-24-result.json#/records/5
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-24-result.json#/records/9

<a id="catalog-contract-58"></a>

### 11.58. 诊断计数/快照、模型校验与连接Future生命周期

责任ID：189, 190, 193, 195

ID189只在输入对象含cache_control时计数：先增调用者指定总数，再按type是否为精确ephemeral字符串增ephemeral或other分类。缺计数默认为0，已有计数必须u64，否则panic，不把非法值清零；总数已增后分类计数仍可出错，不回滚总数。仅改内存JSON。
ID190构造Anthropic流诊断对象，两版合同相同，六项计数、环形缓冲序列化及Option处理发生内联/外提。字段为outcome、error_class、error_kind、attempts、events、deltas、delta_counts、bytes、first_byte_ms、last_byte_ms、max_gap_ms、block_starts、block_stops、message_stop、stop、tail、text、usage_samples、usage_omitted。delta_counts固定按六个原始u64顺序；first/last时间可空；tail按环形逻辑顺序先连续尾段再环回段，不按物理数组。text内upstream/responses的非Some写null。usage_omitted为samples减8的饱和减法。末尾才发布完整本地对象；序列化失败清理暂存并可能被unwrap为panic，不返回部分成功JSON。它不写日志文件、不发HTTP，不把诊断字段当新增协议能力。
ID193校验relay模型列表。空列表只验证默认id，返回空列表加该id/flag；非空逐项验证并复制，最后选第一项id/flag，不在此保证传入selected id属于列表。id先trim、非空、至多256个Unicode字符，禁止U+0000..001F及007F..009F，重复立即错误；可选context window只允许1..10000000。display name缺省/trim后空视None，非空最多128字符；suffix最多8字符且不额外trim，二者同样禁控制字符。中途错误清理已通过项和集合，不落盘；不能误归为MCP transport核。
ID195轮询连接Future：初始态装配future，Pending保持运行状态3且不清flag、不drop；completed/poisoned重poll分别panic。Ready先drop/free future，再清共享运行flag，随后仅在有错误且logger启用时记录并drop错误，最后释放Arc、标完成。日志之前已经清flag，不因日志恢复。双侧仅日志label/源码行343→344有元数据变化，生命周期相同；不是kill/exit，也不据此发明future内部网络协议。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-24-result.json#/records/6
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-24-result.json#/records/7
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-24-result.json#/records/8
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-24-result.json#/records/10

<a id="catalog-contract-59"></a>

### 11.59. 归约范围、身份与门控边界

责任ID：

本路仅消费Windows分片26—30的53条原始责任记录；正文分组并集53、重复0、遗漏0、越界0。proof SHA256=bce646383cd8dbec16ee22c500c74950d00e78c299639e6622710c078425137d；pre=51cb41b613aaa50f410d606e1c4271b1de34576b497a1cba0f734eba46279faf，release=fd5f0c5aa7d500fe7fcef21359028fa614ede9965fc48888601883832ee7d8df。五份result的实际哈希分别为26:441db9aa7e673b594f0e6f7a265c23ddd34d57356d556ba942336d3dcb5adf63；27:dd56303da071f100c3f161dedc741d4965a34b7c0dd9be409f34a99cf7ce8e17；28:c14c28f331362f0dafc377dca1be2a962952d7f9b0b64e309b887fd54c49a85a；29:7bb444db817082403b36195939ec175be26fca57aad32ff2df234240e7d32d63；30:1a764423a5955d62576fc9929f01f269374615fd35cb8ca0bcc022116bfbec14，均与proof相符。逐record核对指针、original_id、primary source文件哈希、代码哈希及角色SHA，53条无失配；这些校验仅保证来源配对，业务结论依据下列实际分支归约。未重新采集函数、未运行IDA/App/凭据API、未写文件，未以mac证据代替Windows。已决静态same/extracted结论不重判；implementation_use、consumerStartReady、strictImplementationUse、readyToImplement、gate_accepted、full_leaf_100、dim6、live_reference均保持false。original_id80的默认标签字面值已由同SHA双侧IDA定点补证为 `Untitled Session`（16字节），现行合同及来源见对应小节和consumer-literal-contract-supplement；此前缺源不再是现行阻塞。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/catalog-content-closure-proof.json#/records

<a id="catalog-contract-60"></a>

### 11.60. Worktree探测的并行分组、结果合并及内存支持

责任ID：47, 48, 86, 88, 92, 114, 206, 208

47、48是两个不同输入适配器/worker变体，不能合并成一种新探测业务。均先收集字符串候选：空输入返回空map，1项不排序，2—20项插入排序，≥21项走缓冲排序；按min(n,4)建组并轮转分配。release将pre独立scope helper的等待、合并、日志和panic尾段内联，非新增探测策略。逐worker等待并把104字节结果插入map；单个join错误在日志级别≥2时记录、释放错误并继续其它worker。最终仍等待scope未完成计数归零；scope panic标志置位会在已构建结果之后panic，不能把所有worker异常概括为吞错成功。
86逐24字节join记录先CloseHandle，再分别递减两个共享引用，归零才释放；零记录不循环，CloseHandle失败不形成业务错误。关闭句柄不是杀进程或取消已运行线程。
88先推进源游标再移动104字节条目；新key插入，重复key替换旧value并释放重复的新key及返回的旧value，最后释放源vector。旧值-2/-1不按普通值析构。第三可选容量的pre>0与release非-1且非0判据在合法String/None上对应；不声称对伪造负容量也等价。
92按16个控制字节一组枚举字符串槽。空表或首项-1输出空；后续遇-1保留已收集前缀，释放未迁移字符串和旧table；满容量扩容，溢出/OOM为panic而非业务Result。114以公共长度memcmp、相等再比较长度，只有严格小于前项才移动，保持相等项位置；非法排序参数走BUG。
206取scratch项数max(ceil(n/2),min(n,333333))；<171用170项栈缓冲，否则8字节对齐heap，排序核心另收n<65标志，正常结束仅释放heap缓冲。208是同一104字节map的reserve：数量加法溢出先报容量错误，小表/7⁄8容量规则决定原位重排或增长；原位移动不改变len，新表分配失败不替换旧header，成功搬完才替换header并释放旧buffer。上述支持体只改变内存桶、顺序和所有权，不删除session文件，不提供元素地址稳定或部分结果事务回滚保证；分配失败保留运行时终止边界。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-26-result.json（/records/0=47，/records/1=48，/records/4=86，/records/5=88，/records/6=92，/records/7=114，/records/11=206；各条branches）
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-27-result.json#/records/0（original_id208，branches、side_effects、error_boundary）

<a id="catalog-contract-61"></a>

### 11.61. Session详情：优先读取、分页分流、晚期回退与消息限额

责任ID：79, 80

80的两次前置获取若返回tag2先保留原错误，未成功则进入fallback。展示标签先取trim后非空的可选label，再取另一个label，均空使用固定16字节默认标签 `Untitled Session`（S大写，无NUL计入），两侧原生字节与复制分支已核。精确9字节paginated标记走专门分页parser，不先走普通rollout读取；其它情况优先读取已有且可用的rollout。普通/分页parser和最终rollout读取均传300。优先读取失败可在日志级别≥2时记录并继续后续路径；主parser失败也保留错误后再尝试列表回退，而不是立即终止。
fallback列表失败透传typed错误；没有匹配对象返回“未找到对应线程”；缺文件标志返回“该线程缺少 rollout 文件，无法查看内容”；路径缺失或trim为空返回“线程未记录 rollout 文件路径”。有有效路径才最终读取rollout，读取失败透传typed错误。成功必须保留消息、计数、has-more/完成态和截断标志；计数饱和到INT_MAX，截断状态合并，不能简化为只返回消息数组。各分支清理未选对象、warning及filter集合。
79负责内存消息裁剪：从末尾优先保留较新记录，总预算0x200000字节，单项上限min(0x10000,剩余预算)。超限先退至UTF-8字符边界，有7字节余量加入“\n\n[...]”，不足则只取安全前缀，无法取字符则丢弃并标截断；预算耗尽时释放未保留项。最后反转72字节记录恢复原顺序并返回独立截断标志。非法切片边界、负长度或OOM是panic路径。两版这些caller分支及三条中文错误相同，控制流生成方式变化不是新业务。它们只读取/组装详情，不truncate磁盘rollout，也不承诺对已读取内容做持久化回滚。

**original_id80精确合同**：两条可选label都经trim判空后，使用ASCII `Untitled Session`（16B，S大写、无终止NUL计入长度）；release常量0x141870a10、pre常量0x141a81ab0及各16B复制分支已绑定。不是借旧版本文案猜补，原“默认标签尚缺源”条目已解决。

三常量正式补证：`release-fd5f0c5aa7d5-consumer-literal-contract-supplement.json`，SHA256 `51ad1d8c67127a50c1e44d0058ea48113e61e905ca0edd25eb12493b675560b2`；两侧值逐字节相同，未改变原guard或side-effect顺序。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-26-result.json（/records/2=79，/records/3=80；branches、guard、error、late_failure）
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-26-static-evidence.json#/captures

<a id="catalog-contract-62"></a>

### 11.62. SQL列名读取：逐行容错、非空筛选与字符串去重

责任ID：125, 126

125、126是PRAGMA table_info(<table>)的SQL行消费链，不是目录遍历或任意字节UTF-8验证器。父级prepare/bind或执行初始化失败返回code10；正常创建内存字符串set再逐行消费。native step100提供row，101结束并reset，其它错误包装、reset并清理二次reset错误；不可能的错误映射/溢出走panic。collector对结束哨兵停止，对row/step的可恢复错误析构后继续，因此后期出错可留下此前列名，不能声称整批原子成功。
126先区分typed-cell错误、NULL和-2/-1哨兵：错误释放，缺项跳过；有效字符串仅用Unicode trim后的长度判断是否全空白。全空白释放并跳过，非空白返回原容量/原指针/原长度，保留原首尾空白，不能把trim子串替换输出。无效UTF-8转换有独立错误variant，column越界及OOM仍是panic。125用长度和字节比较去重，重复只释放传入字符串，不覆盖既有值。两版为稳定元数据读取支持；只推进statement、更新内存set和释放资源，不修改数据库。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-26-result.json（/records/8=125，/records/9=126；branches、error、late_failure）

<a id="catalog-contract-63"></a>

### 11.63. Session列表：App-server失败时本地回退与warning顺序

责任ID：127

先获取App-server客户端，成功才调用服务列表；服务列表成功立即返回数据及空warnings。客户端获取或列表失败保留原错误，按日志guard记录后调用本地列表。本地失败透传其typed错误；本地成功则保留sessions及原warnings，在index0前插code为CODEX_APP_SERVER_UNAVAILABLE、message由服务错误格式化的warning。服务失败但本地成功不是顶层失败，也不丢弃本地结果或原warnings。两版wrapper分支相同，分配失败仍为panic；该结论不替代两个列表核心内部的独立责任，不新增文件/数据库写入或进程操作。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-26-result.json#/records/10（original_id127，branches）

<a id="catalog-contract-64"></a>

### 11.64. 健康修复分发器：23个可执行label与quiet先决条件

责任ID：19

扩写本包§8 F10的分发范围。先调用quiet classifier；其低位为1且quiet参数不是1时直接报错，不调用任何repair handler。仅residual_cache、residual_manifest不要求quiet；其余21个有效label均要求quiet：config_stale、auth_integrity、catalog_integrity、config_toml_syntax、config_third_party、db_orphan_providers、state_db_relocation、router_http_contract、catalog_path_validity、takeover_backup_orphan、config_global_validity、config_profile_conflict、thread_missing_rollouts、legacy_migrated_threads、project_state_integrity、thread_response_item_ids、rollout_orphan_providers、router_unlock_auth_residue、thread_provider_consistency、thread_poisoned_instructions、thread_model_catalog_consistency。逐字匹配失败/default均返回unknown；classifier的2表示unknown，不能当true。router_postcondition虽被classifier判为需quiet，但dispatcher没有这个label，不是第24个可执行修复。
db_orphan_providers与rollout_orphan_providers虽共用handler，传参不同，不能合成一种修复。handler结果成功哨兵-1进入成功/描述转换；非-1按tag<2或≥2选择错误说明，装入各item结果后释放临时文本。两版selector、参数转发与包装相同；dispatcher自身不直接改文件或进程，但被选handler可有真实副作用。⚠ handler已执行后，描述装配/包装失败不证明其修复被回滚；本条不把23个handler的全部内部业务再次宣告等价。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-27-result.json#/records/1（original_id19，branches、dispatch_branches、error_boundary）

<a id="catalog-contract-65"></a>

### 11.65. 周期额度刷新线程：到期互斥、错误通知与完成时间

责任ID：29

永久循环先初始化全局状态并取锁；竞争则等待，poison分支释放/唤醒后park1秒再循环。只有enabled==1才计时；last<=0按0，时间减法溢出饱和，周期配置<31统一30秒。未到期按剩余时间条件等待，未启用无限条件等待。到期先设置inflight；已经inflight则等待，不重复刷新；否则释放调度锁后以true参数调用额度刷新核。
普通错误tag=-1仅按日志guard记录并释放，其它正常结果按类型drop；只有未捕获异常tag=-2构建type:error、message为“更新额度失败：刷新任务出现未捕获异常”的runtime-notify。事件名先验证，有效才发送；无效及发送失败都清理payload/结果，无通知重试。刷新及错误处理后先清inflight，再获取完成时间，重新取锁更新last并signal。两版调度、错误分类和发布顺序相同。通知成功不等于刷新成功，通知失败也不撤销已发生的刷新副作用；本条不是退出适配器，也不以该线程包装器替代额度核心全链。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-27-result.json#/records/2（original_id29，branches、side_effects、late_failure）

<a id="catalog-contract-66"></a>

### 11.66. 保持路由退出：state提取、busy检查与退出请求不等于退出完成

责任ID：34, 39, 40

34的quit_keeping_router依次提取App、manager；任一缺失/lookup错误立即回应错误并释放已取得对象，不调用退出核。manager现成slot存在即使用，否则state lookup。核成功包装unit，失败保留错误字符串；短路及结束均释放请求、96字节列表项和App引用。
39只暂时try-lock transition互斥锁：CAS冲突返回busy；取得后维护panic/poison状态再解锁，旧锁值2时唤醒等待者。它不是routerEnabled、远端进程状态或全manager健康判断，也不把锁持有到exit，不构成无竞态预留。
40在busy时返回“智能路由正在切换，请等待完成后再退出”，不置bypass、不请求退出。非busy先记keep_router_exit选择，再置全局exit-guard bypass=1，调用App.exit(0)，返回成功哨兵；没有禁用router的manager调用。⚠ bypass先于exit请求生效，事件发送失败不会清回bypass，成功包装也不能证明进程必已结束。两版此wrapper、busy分支及顺序相同，不把它与关闭router后退出混为一条路径。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-27-result.json（/records/5=34，/records/10=39，/records/11=40）

<a id="catalog-contract-67"></a>

### 11.67. App退出及更新重启：主线程、跨线程事件与发散失败边界

责任ID：35, 36, 37, 58

35的graceful_restart_for_update没有命令参数；App state提取失败才返回IPC错误。成功复制AppHandle，经58的无guard转发thunk进入真正restart核，正常路径不回到responder，不能添加成功unit回执。
36的App.exit先构造variant29及调用者exit code并发送runtime事件；发送结果首byte为0xff时直接返回，不cleanup、不process exit；成功才释放发送结果，按日志guard记录，然后cleanup_before_exit→process exit(code)。
37的restart先取互斥锁，保留竞争等待和poison/unwrap panic。当前线程等于记录主线程时先释放锁，再cleanup→构造环境→process restart。其它线程先维护引用/poison并解锁，必要时WakeByAddressSingle，随后置exit-requested，发送variant29、code=0x7fffffff；发送失败永久park，成功释放结果后cleanup→环境→restart。日志开关不改执行分支。⚠ 这些是进程退出/重启副作用；exit-requested置位后的发送失败不恢复flag，cleanup后没有业务回滚保证，panic/永久park不转换为普通IPC错误。两版分支相同；本轮没有实际重启App。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-27-result.json（/records/6=35，/records/7=36，/records/8=37）
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-28-result.json（/records/2=58，/support_branch_adjudications中restart_actual_pair）

<a id="catalog-contract-68"></a>

### 11.68. 共享调用上下文clone：保留runtime变体和引用计数guard

责任ID：38

129字节共享上下文clone先保留主共享引用，再按runtime tag0、1、其它分别递增不同强引用槽；接着复制整数/裸值并逐个clone其余Arc/RC引用，最后集中写目标槽和byte128标志。任一引用计数溢出/非正均fatal，不是可恢复的部分成功Result。两版完整变体、引用和写入顺序对应；只有引用计数及目标内存副作用，不产生文件、DB、网络、kill或exit操作，不能据位置或大小排成无关库，也不能把析构当业务补偿。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-27-result.json#/records/9（original_id38，branches）

<a id="catalog-contract-69"></a>

### 11.69. 扩写§4 W01：Windows同目录staging发布、10次替换限额及身份保护清理

责任ID：49, 50, 64, 65, 81, 82

64要求target有parent，父目录准备失败立即返回；在同父目录以basename/PID/随机值形成staging，拒绝与target相同的路径，并以原生路径比较验证同父目录。通过后create-new、share7打开staging，记录文件identity→WriteAll→FlushFileBuffers→CloseHandle→重读identity核对→替换。identity读取拒绝metadata错误及flags&0x410异常对象，临时取得的handle必关闭。WriteAll短写推进指针/剩余长，0字节形成WriteZero，只有kind35错误重试；写过量panic。flush失败或identity变更均不发布。
65的替换为MoveFileExW flags9，具replace-existing/write-through、无copy-allowed，不承诺跨卷搬运。只重试Win32错误5/32/33/1224；counter0到9，共最多10次调用、9次500ms等待，其它错误立即返回。日志关闭不取消等待；成功返回0，失败保留原错误并释放宽串。它不同于§7 catalog删除的6次/100ms策略。
81仅在identity tag、附加DWORD及两个QWORD全部匹配时删除；不匹配报FileIdentityChanged，不删。identity读取/新造错误统一按四tag解码kind，仅kind0可抑制并释放拥有型错误，其余返回，不能把任意stat错误视为可删。删除先DeleteFileW；error5才尝试额外handle及SetFileInformationByHandle备用删除；备用成功关闭handle，失败仍保留原error5。不是递归删目录。
82是staging guard析构：解除标记2直接跳过；未解除才调用上述受保护删除，失败仅按日志guard警告并释放拥有型Error，无重试、不抛新IPC错误。49仅按日志阈值记录target/错误并原样返回Error；50对零Error无操作，非零可诊断四种tag，只有拥有型tag1需drop，二者都不是rename/delete核。
⚠ 写入/flush后仍可替换失败；失败只对身份匹配的staging尽力清理，可能留孤儿，不能把W01的“清理临时文件”理解成必删保证。替换成功后解除guard防止误删；没有恢复旧target或目录fsync保证。两版发布、重试与清理合同相同，不是新增事务。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-28-result.json（/records/0=49，/records/1=50，/records/3=64，/records/4=65，/records/5=81，/records/6=82；semantic_branch_groups、support_branch_adjudications）

<a id="catalog-contract-70"></a>

### 11.70. 三条异步命令的IPC搬运、runtime选择与任务分配边界

责任ID：32, 33, 95, 96, 97, 98, 99, 100, 101, 102, 184, 185, 196, 197

97/98/99分别为quit_after_closing_router、set_codex_router_enabled、run_daemon_once的异步invoke adapter：搬运360字节IPC对象及附加元数据，前两者命令Future为1568字节，daemon为1064字节，均置初态0后具体spawn。最终CAS task状态204→132，相等直接返回false，不等才调task vtable+32；这个布尔是调度握手，不是退出、配置落盘或daemon业务成功。runtime外层按variant==2与其它variant选guard/spawn表，spawn后释放guard，返回tag2不减引用，其余按tag选择相应末引用释放。
100/101/102是各自具体runtime spawn实例：原子task id跳过0；上下文flag0直接用、1先恢复/初始化再置0，其它值先drop输入Future再panic，不提交。临时借用计数溢出panic；runtime kind2先drop Future并撤销临时借用再panic；kind1走单线程，其它有效kind走多线程，结束撤销临时借用。三种Future类型及poll绑定独立，不能因布局相似接错业务。
32/33为quit/router-enabled单线程分配登记：保留runtime强引用，具体constructor复制3544字节payload，task分配3712字节、128对齐，持有可选runtime+496上下文；state204初始化后依次在runtime+128登记、+480通知id、+16提交调度。
184/185是对应多线程登记体；196/197是其header constructor：可选上下文在+688而非+496，空保持零，非空retain；同样3544字节payload、3712字节/128对齐，独立类型vtable及零状态槽。先runtime+352登记，再+672通知id；登记结果非零才额外调度，零不调度。
95/96是quit/daemon的blocking任务构造，不是业务退出或daemon核：非零task id，runtime tag选+480/+672上下文，可选关联对象retain两次；quit捕获216字节、task640字节，daemon捕获152字节、task384字节，均128对齐、state204；register(flag1)组合错误进入panic，否则交还task。以上均为两版稳定的应用特化调度支持；引用溢出fatal、OOM终止，不包装成IPC错误。⚠ 入队、drop及取消均不证明业务已完成，也不能撤销已经运行的文件、配置或进程副作用；不能把任务生命周期字节新增成业务DTO。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-27-result.json（/records/3=32，/records/4=33）
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-28-result.json（/records/7=95，/records/8=96，/records/9=97，/records/10=98，/records/11=99；support_branch_adjudications）
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-29-result.json（/records/0=100，/records/1=101，/records/2=102，/records/7=184，/records/8=185，/records/9=196，/records/10=197；support_pairs）

<a id="catalog-contract-71"></a>

### 11.71. Blocking闭包与poll/storage：一次性消费、Pending竞争及真实业务核复用

责任ID：106, 108, 109, 110

106的daemon闭包读捕获首word后立即写-1，旧值已-1则panic，防止重复消费；移动App捕获并进入blocking上下文，提取manager锁；poison/null锁失败panic，非默认成功。随后执行daemon核，释放捕获并保留完整168字节Result。业务核沿用本包§8 F11：锁内读取work snapshot/配置，锁外refresh，再加锁重读snapshot判竞态；disabled、状态改变及repair/refresh失败分别返回。
108是daemon blocking任务poll/result适配：初始probe0才建context运行闭包。Pending哨兵-2后二次probe分0返回、1终止清理后汇合、2直接汇合、3 drop Future；另一哨兵-3重编码为-2且重排payload，不能压成同一业务错误。Ready在context guard中以tag1及完整payload替换task storage；初始probe1先drop再finalize，2直接返回，3 release。
109/110分别poll真正quit/router-enabled Future；storage完成标志非零拒绝重poll。进入/退出runtime context后，完成时先替换为tag2，再在Ready低位为0路径替换tag1/unit-like输出并finalize，旧storage的析构不可省。Pending后二次probe0返回，1先wake/引用处理再按标志release，2 release，3先drop再finalize；初始非零probe也分别保留drop/返回/release。
两版适配合同相同，不是新增业务状态。真实quit仅在关闭链成功后置exit_guard并App.exit(0)，错误只应答不exit；真实router切换保留required enabled/optional relaunch及同目标reconcile、RouterOn/NativeOff/no-account分支，详见本包既有F09/F18而非重复改写业务核。⚠ storage替换、drop和取消不撤销已运行blocking核；不保证恢复router、重建proxy或回滚late commit。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-29-result.json（/records/3=106，/records/4=108，/records/5=109，/records/6=110；branches、business_core_dependencies）
- <内部存储>/internal-reverse/audits/windows-1.2.7-version-delta/logic/DELTA-LOGIC-1.2.7.md §8 F09、F11、F18

<a id="catalog-contract-72"></a>

### 11.72. 扩写§4 W07—W12：Windows凭据元数据、字节/UTF16读取及写删顺序

责任ID：198, 199, 200, 201, 202, 203

这些为两版稳定的Windows凭据平台支持，不因位于库/运行时位置而丢掉应用调用责任，也不是MCP受管块或process quiet分支。本段用于扩写既有W07—W12，不另建同义功能。
198元数据读取与199原始字节读取、202 UTF16读取、203删除均先校验user字节长≤513、target非空且≤32767、alias/comment各≤256；失败原样返回错误、不调用Win32 API。本入口secret校验参数为空，不能宣称执行了通用helper的2560字节secret上限分支。target由有效Rust UTF8转UTF16并加单NUL，非BMP字符生成代理对，容量不足扩容，OOM/溢出终止。
198调用CredReadW(type1,flags0)，分别复制UserName/TargetName/TargetAlias/Comment；各字段null或空NUL串独立降为空字符串，不作为整体失败。release把pre逐WORD扫NUL改为wcslen，不改变不含终止符的区间。它不把CredentialBlob交给调用者，而是按8字节块及余数清零临时blob，再CredFree返回四个元数据字符串。这里擦除临时buffer不是删除持久化凭据。
199同样读取，非空blob复制为调用者拥有的原始字节；零长返回空buffer而非NoEntry。随后擦除Win32返回blob并CredFree，原始副本保留，不做UTF16有效性校验。
202复制原blob后检查偶数长度；奇数或非法代理项返回独立InvalidEncoding，并把原始字节副本保留为错误载荷，不替换为空串。偶数长度经独立宽字节容器解码为UTF8：空输入成功为空串；孤立低代理、缺配对高代理或后继错误均失败，无替代字符降级。成功才两轮擦除并释放原始byte副本；中间UTF16容器也擦除后释放；正常成功/编码错误出口均清零Win32 blob并CredFree。解码helper失败会释放已生成的UTF8部分，但没有证明该部分也zeroize，不能声称一切失败临时分配均已擦除。读取成功后仍可OOM/断言终止，不承诺终止路径全清理。
200是更底层写体，本体不调用上述字段校验，不能把wrapper guard移植成它自身行为。按user、target、alias、comment转宽串，复制非空blob，构造CREDENTIALW(type1、flags0、Persist3、AttributeCount0、Attributes=null、LastWritten0)，一次CredWriteW(...,0)；blob长直接转DWORD。API失败先捕获错误；不论成功失败，非空副本两轮清零后释放，再逐项释放四个宽串；空blob跳过副本分配/擦除。
203验证后一次CredDeleteW(target,1,0)，成功即success，失败经201映射；释放宽串后返回，无重试、重查或恢复。201把GetLastError1168映射NoEntry，1312映射独立平台错误，其它码保留原值；后两类需分配4字节，OOM不能降为NoEntry。删除不存在仍是NoEntry错误，不吞成成功。
⚠ 200可创建/覆盖持久化凭据，203删除目标凭据；API成功之后清理不等于可回滚，均无事务补偿。原始字节返回和InvalidEncoding载荷仍可含秘密，不得写日志或外发；本路只读取静态证据，没有执行凭据API或获取实际秘密。

证据追溯：
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-29-result.json#/records/11（original_id198，branches、support_pairs中credential-validation及credential-platform-error）
- <内部存储>/intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-catalog-slice-30-result.json（/records/0=199，/records/1=200，/records/2=201，/records/3=202，/records/4=203；branches、supplemental_support）

### 11.责任映射. 210条责任到正文

此表只定位上方已承载的业务合同，不能代替上方合同。

| original_id | 消费正文 |
|---|---|

| 0 | [Windows系统代理候选读取：三来源累积、局部失败与顺序保持](#catalog-contract-1) |

| 1 | [MCP命令入口、操作锁与编辑后重新加载](#catalog-contract-45) |

| 2 | [MCP命令入口、操作锁与编辑后重新加载](#catalog-contract-45) |

| 3 | [MCP命令入口、操作锁与编辑后重新加载](#catalog-contract-45) |

| 4 | [MCP命令入口、操作锁与编辑后重新加载](#catalog-contract-45) |

| 5 | [MCP命令入口、操作锁与编辑后重新加载](#catalog-contract-45) |

| 6 | [MCP命令入口、操作锁与编辑后重新加载](#catalog-contract-45) |

| 7 | [MCP命令入口、操作锁与编辑后重新加载](#catalog-contract-45) |

| 8 | [MCP命令入口、操作锁与编辑后重新加载](#catalog-contract-45) |

| 9 | [MCP、退出和重启的精确命令分派与参数失败边界](#catalog-contract-2) |

| 10 | [过渡journal：受限读取、写入、投影与有保护的清除](#catalog-contract-53) |

| 11 | [过渡journal：受限读取、写入、投影与有保护的清除](#catalog-contract-53) |

| 12 | [过渡journal：受限读取、写入、投影与有保护的清除](#catalog-contract-53) |

| 13 | [过渡journal：受限读取、写入、投影与有保护的清除](#catalog-contract-53) |

| 14 | [过渡journal：受限读取、写入、投影与有保护的清除](#catalog-contract-53) |

| 15 | [过渡journal：受限读取、写入、投影与有保护的清除](#catalog-contract-53) |

| 16 | [引擎文件指纹与I/O错误上下文](#catalog-contract-28) |

| 17 | [Windows引擎发现、四可执行文件验证与查询子进程清理](#catalog-contract-3) |

| 18 | [两种数据库探针不能合并错误语义](#catalog-contract-36) |

| 19 | [健康修复分发器：23个可执行label与quiet先决条件](#catalog-contract-64) |

| 20 | [目录缓存删除与引擎版本探测](#catalog-contract-27) |

| 21 | [目录缓存删除与引擎版本探测](#catalog-contract-27) |

| 22 | [Catalog的provider/model选取、五别名分配及纯内存差异](#catalog-contract-4) |

| 23 | [三种提交完成器：主操作、同步warning和journal错误分开](#catalog-contract-54) |

| 24 | [三种提交完成器：主操作、同步warning和journal错误分开](#catalog-contract-54) |

| 25 | [三种提交完成器：主操作、同步warning和journal错误分开](#catalog-contract-54) |

| 26 | [过渡journal：受限读取、写入、投影与有保护的清除](#catalog-contract-53) |

| 27 | [子进程输出捕获与工作结果所有权清理](#catalog-contract-55) |

| 28 | [转场围栏的创建、后台循环、收尾及强制关闭](#catalog-contract-51) |

| 29 | [周期额度刷新线程：到期互斥、错误通知与完成时间](#catalog-contract-65) |

| 30 | [索引后台任务收尾与专用析构：失败不等于底层未改动](#catalog-contract-15) |

| 31 | [索引后台任务收尾与专用析构：失败不等于底层未改动](#catalog-contract-15) |

| 32 | [三条异步命令的IPC搬运、runtime选择与任务分配边界](#catalog-contract-70) |

| 33 | [三条异步命令的IPC搬运、runtime选择与任务分配边界](#catalog-contract-70) |

| 34 | [保持路由退出：state提取、busy检查与退出请求不等于退出完成](#catalog-contract-66) |

| 35 | [App退出及更新重启：主线程、跨线程事件与发散失败边界](#catalog-contract-67) |

| 36 | [App退出及更新重启：主线程、跨线程事件与发散失败边界](#catalog-contract-67) |

| 37 | [App退出及更新重启：主线程、跨线程事件与发散失败边界](#catalog-contract-67) |

| 38 | [共享调用上下文clone：保留runtime变体和引用计数guard](#catalog-contract-68) |

| 39 | [保持路由退出：state提取、busy检查与退出请求不等于退出完成](#catalog-contract-66) |

| 40 | [保持路由退出：state提取、busy检查与退出请求不等于退出完成](#catalog-contract-66) |

| 41 | [调试/日志文本脱敏：字段遮罩、账户匿名摘要与词元二次过滤](#catalog-contract-5) |

| 42 | [模型目录生成、五别名分配与摘要](#catalog-contract-26) |

| 43 | [模型目录生成、五别名分配与摘要](#catalog-contract-26) |

| 44 | [协议链的缓冲适配、空白与边界匹配支持](#catalog-contract-57) |

| 45 | [子进程输出捕获与工作结果所有权清理](#catalog-contract-55) |

| 46 | [原生模型快照：engine选择、配置双检和20页收口](#catalog-contract-20) |

| 47 | [Worktree探测的并行分组、结果合并及内存支持](#catalog-contract-60) |

| 48 | [Worktree探测的并行分组、结果合并及内存支持](#catalog-contract-60) |

| 49 | [扩写§4 W01：Windows同目录staging发布、10次替换限额及身份保护清理](#catalog-contract-69) |

| 50 | [扩写§4 W01：Windows同目录staging发布、10次替换限额及身份保护清理](#catalog-contract-69) |

| 51 | [可取消有界行读取器：取消、EOF、超限和IO错误不能合并](#catalog-contract-16) |

| 52 | [stateDbs诊断对象与每DB读取边界](#catalog-contract-31) |

| 53 | [双目标threadShape与五分项健康统计](#catalog-contract-32) |

| 54 | [catalogShape字段比较的非对称判定](#catalog-contract-33) |

| 55 | [processShape与完整诊断快照聚合](#catalog-contract-34) |

| 56 | [双目标threadShape与五分项健康统计](#catalog-contract-32) |

| 57 | [processShape与完整诊断快照聚合](#catalog-contract-34) |

| 58 | [App退出及更新重启：主线程、跨线程事件与发散失败边界](#catalog-contract-67) |

| 59 | [引擎文件指纹与I/O错误上下文](#catalog-contract-28) |

| 60 | [引擎文件指纹与I/O错误上下文](#catalog-contract-28) |

| 61 | [original_id 61：Windows engine 选择、内容校验与延迟 Store 错误](#catalog-contract-7) |

| 62 | [Windows安装发现、六布局选择与有界查询child](#catalog-contract-29) |

| 63 | [original_id 63：系统代理候选三来源累积，失败不清空前项](#catalog-contract-8) |

| 64 | [扩写§4 W01：Windows同目录staging发布、10次替换限额及身份保护清理](#catalog-contract-69) |

| 65 | [扩写§4 W01：Windows同目录staging发布、10次替换限额及身份保护清理](#catalog-contract-69) |

| 66 | [目录缓存删除与引擎版本探测](#catalog-contract-27) |

| 67 | [模型目录生成、五别名分配与摘要](#catalog-contract-26) |

| 68 | [目录缓存删除与引擎版本探测](#catalog-contract-27) |

| 69 | [模型目录生成、五别名分配与摘要](#catalog-contract-26) |

| 70 | [配置词法行、节名和顶层键提取](#catalog-contract-40) |

| 71 | [配置词法行、节名和顶层键提取](#catalog-contract-40) |

| 72 | [配置词法行、节名和顶层键提取](#catalog-contract-40) |

| 73 | [受管内容捕获、quiet判据与三标记扫描](#catalog-contract-41) |

| 74 | [配置词法行、节名和顶层键提取](#catalog-contract-40) |

| 75 | [受管内容捕获、quiet判据与三标记扫描](#catalog-contract-41) |

| 76 | [配置词法行、节名和顶层键提取](#catalog-contract-40) |

| 77 | [受管内容捕获、quiet判据与三标记扫描](#catalog-contract-41) |

| 78 | [managed restore发布与两备份清理顺序](#catalog-contract-42) |

| 79 | [Session详情：优先读取、分页分流、晚期回退与消息限额](#catalog-contract-61) |

| 80 | [Session详情：优先读取、分页分流、晚期回退与消息限额](#catalog-contract-61) |

| 81 | [扩写§4 W01：Windows同目录staging发布、10次替换限额及身份保护清理](#catalog-contract-69) |

| 82 | [扩写§4 W01：Windows同目录staging发布、10次替换限额及身份保护清理](#catalog-contract-69) |

| 83 | [专用资源释放与两种SQLite集合错误策略](#catalog-contract-35) |

| 84 | [索引后台任务收尾与专用析构：失败不等于底层未改动](#catalog-contract-15) |

| 85 | [专用资源释放与两种SQLite集合错误策略](#catalog-contract-35) |

| 86 | [Worktree探测的并行分组、结果合并及内存支持](#catalog-contract-60) |

| 87 | [应用名称、ChatGPT精确名称、路径查询与诊断格式化](#catalog-contract-49) |

| 88 | [Worktree探测的并行分组、结果合并及内存支持](#catalog-contract-60) |

| 89 | [专用资源释放与两种SQLite集合错误策略](#catalog-contract-35) |

| 90 | [专用资源释放与两种SQLite集合错误策略](#catalog-contract-35) |

| 91 | [专用资源释放与两种SQLite集合错误策略](#catalog-contract-35) |

| 92 | [Worktree探测的并行分组、结果合并及内存支持](#catalog-contract-60) |

| 93 | [专用资源释放与两种SQLite集合错误策略](#catalog-contract-35) |

| 94 | [应用名称、ChatGPT精确名称、路径查询与诊断格式化](#catalog-contract-49) |

| 95 | [三条异步命令的IPC搬运、runtime选择与任务分配边界](#catalog-contract-70) |

| 96 | [三条异步命令的IPC搬运、runtime选择与任务分配边界](#catalog-contract-70) |

| 97 | [三条异步命令的IPC搬运、runtime选择与任务分配边界](#catalog-contract-70) |

| 98 | [三条异步命令的IPC搬运、runtime选择与任务分配边界](#catalog-contract-70) |

| 99 | [三条异步命令的IPC搬运、runtime选择与任务分配边界](#catalog-contract-70) |

| 100 | [三条异步命令的IPC搬运、runtime选择与任务分配边界](#catalog-contract-70) |

| 101 | [三条异步命令的IPC搬运、runtime选择与任务分配边界](#catalog-contract-70) |

| 102 | [三条异步命令的IPC搬运、runtime选择与任务分配边界](#catalog-contract-70) |

| 103 | [MCP命令入口、操作锁与编辑后重新加载](#catalog-contract-45) |

| 104 | [MCP命令入口、操作锁与编辑后重新加载](#catalog-contract-45) |

| 105 | [应用名称、ChatGPT精确名称、路径查询与诊断格式化](#catalog-contract-49) |

| 106 | [Blocking闭包与poll/storage：一次性消费、Pending竞争及真实业务核复用](#catalog-contract-71) |

| 107 | [按dialect应用thinking/reasoning：保持分支，不把外提算新能力](#catalog-contract-56) |

| 108 | [Blocking闭包与poll/storage：一次性消费、Pending竞争及真实业务核复用](#catalog-contract-71) |

| 109 | [Blocking闭包与poll/storage：一次性消费、Pending竞争及真实业务核复用](#catalog-contract-71) |

| 110 | [Blocking闭包与poll/storage：一次性消费、Pending竞争及真实业务核复用](#catalog-contract-71) |

| 111 | [MCP的TOML内存支持：转换、表选择、插入和析构](#catalog-contract-48) |

| 112 | [通用配置重写、图像设置变换与读取错误分类](#catalog-contract-47) |

| 113 | [通用配置重写、图像设置变换与读取错误分类](#catalog-contract-47) |

| 114 | [Worktree探测的并行分组、结果合并及内存支持](#catalog-contract-60) |

| 115 | [通用配置重写、图像设置变换与读取错误分类](#catalog-contract-47) |

| 116 | [MCP的TOML内存支持：转换、表选择、插入和析构](#catalog-contract-48) |

| 117 | [MCP的TOML内存支持：转换、表选择、插入和析构](#catalog-contract-48) |

| 118 | [MCP的TOML内存支持：转换、表选择、插入和析构](#catalog-contract-48) |

| 119 | [索引后台任务收尾与专用析构：失败不等于底层未改动](#catalog-contract-15) |

| 120 | [stateDbs诊断对象与每DB读取边界](#catalog-contract-31) |

| 121 | [修复计划报告、response-item-ID扫描与批修复](#catalog-contract-37) |

| 122 | [SQL集合适配：同键覆盖、去重和错误槽的调用边界](#catalog-contract-17) |

| 123 | [专用资源释放与两种SQLite集合错误策略](#catalog-contract-35) |

| 124 | [SQL集合适配：同键覆盖、去重和错误槽的调用边界](#catalog-contract-17) |

| 125 | [SQL列名读取：逐行容错、非空筛选与字符串去重](#catalog-contract-62) |

| 126 | [SQL列名读取：逐行容错、非空筛选与字符串去重](#catalog-contract-62) |

| 127 | [Session列表：App-server失败时本地回退与warning顺序](#catalog-contract-63) |

| 128 | [SQL集合适配：同键覆盖、去重和错误槽的调用边界](#catalog-contract-17) |

| 129 | [索引标量查询：空聚合、缺行和执行错误的不同默认值](#catalog-contract-18) |

| 130 | [协议链的缓冲适配、空白与边界匹配支持](#catalog-contract-57) |

| 131 | [索引标量查询：空聚合、缺行和执行错误的不同默认值](#catalog-contract-18) |

| 132 | [索引标量查询：空聚合、缺行和执行错误的不同默认值](#catalog-contract-18) |

| 133 | [original_id 133：thread/list 两轮分页、归属验证与全列表失败边界](#catalog-contract-9) |

| 134 | [配置词法行、节名和顶层键提取](#catalog-contract-40) |

| 135 | [app-server同步RPC、结果适配和initialized通知](#catalog-contract-21) |

| 136 | [app-server同步RPC、结果适配和initialized通知](#catalog-contract-21) |

| 137 | [app-server同步RPC、结果适配和initialized通知](#catalog-contract-21) |

| 138 | [转场围栏的创建、后台循环、收尾及强制关闭](#catalog-contract-51) |

| 139 | [转场围栏的创建、后台循环、收尾及强制关闭](#catalog-contract-51) |

| 140 | [ChatGPT重启与直接启动fallback顺序](#catalog-contract-52) |

| 141 | [thread/list双归档分页与固定sourceKinds数组](#catalog-contract-22) |

| 142 | [两种数据库探针不能合并错误语义](#catalog-contract-36) |

| 143 | [Windows安装发现、六布局选择与有界查询child](#catalog-contract-29) |

| 144 | [Windows安装发现、六布局选择与有界查询child](#catalog-contract-29) |

| 145 | [DB资源、Restart Manager持有者与唯一DB选择](#catalog-contract-50) |

| 146 | [DB资源、Restart Manager持有者与唯一DB选择](#catalog-contract-50) |

| 147 | [DB资源、Restart Manager持有者与唯一DB选择](#catalog-contract-50) |

| 148 | [ChatGPT重启与直接启动fallback顺序](#catalog-contract-52) |

| 149 | [DB资源、Restart Manager持有者与唯一DB选择](#catalog-contract-50) |

| 150 | [转场围栏的创建、后台循环、收尾及强制关闭](#catalog-contract-51) |

| 151 | [转场围栏的创建、后台循环、收尾及强制关闭](#catalog-contract-51) |

| 152 | [应用名称、ChatGPT精确名称、路径查询与诊断格式化](#catalog-contract-49) |

| 153 | [应用名称、ChatGPT精确名称、路径查询与诊断格式化](#catalog-contract-49) |

| 154 | [original_id 154：受管配置文本生成、pruning与发布前边界](#catalog-contract-10) |

| 155 | [受管内容捕获、quiet判据与三标记扫描](#catalog-contract-41) |

| 156 | [original_id 156：三遍受管块剥离、独立表保留与损坏marker边界](#catalog-contract-11) |

| 157 | [配置词法行、节名和顶层键提取](#catalog-contract-40) |

| 158 | [配置词法行、节名和顶层键提取](#catalog-contract-40) |

| 159 | [配置词法行、节名和顶层键提取](#catalog-contract-40) |

| 160 | [provider保护名与第三方冲突候选](#catalog-contract-43) |

| 161 | [条件TOML修复与诊断状态best-effort发布](#catalog-contract-38) |

| 162 | [provider保护名与第三方冲突候选](#catalog-contract-43) |

| 163 | [config备份保留策略与quiet三态分类](#catalog-contract-44) |

| 164 | [config备份保留策略与quiet三态分类](#catalog-contract-44) |

| 165 | [第三方配置残留清理：先备份、两遍重建、发布后仍有后置失败](#catalog-contract-12) |

| 166 | [损坏配置挽救与两种不可混同的第三方标记判断](#catalog-contract-46) |

| 167 | [修复计划报告、response-item-ID扫描与批修复](#catalog-contract-37) |

| 168 | [两种数据库探针不能合并错误语义](#catalog-contract-36) |

| 169 | [损坏配置挽救与两种不可混同的第三方标记判断](#catalog-contract-46) |

| 170 | [只读线程诊断扫描：缺列降级与整批失败必须区分](#catalog-contract-13) |

| 171 | [修复计划报告、response-item-ID扫描与批修复](#catalog-contract-37) |

| 172 | [损坏配置挽救与两种不可混同的第三方标记判断](#catalog-contract-46) |

| 173 | [条件TOML修复与诊断状态best-effort发布](#catalog-contract-38) |

| 174 | [修复计划报告、response-item-ID扫描与批修复](#catalog-contract-37) |

| 175 | [协议链的缓冲适配、空白与边界匹配支持](#catalog-contract-57) |

| 176 | [Windows项目路径文本处理与日期目录排除](#catalog-contract-23) |

| 177 | [Windows项目路径文本处理与日期目录排除](#catalog-contract-23) |

| 178 | [项目state DB主读取与rollout缺失cwd候选：warning和skip层次](#catalog-contract-24) |

| 179 | [Windows项目路径文本处理与日期目录排除](#catalog-contract-23) |

| 180 | [项目state DB主读取与rollout缺失cwd候选：warning和skip层次](#catalog-contract-24) |

| 181 | [索引标量查询：空聚合、缺行和执行错误的不同默认值](#catalog-contract-18) |

| 182 | [线程分析聚合：files状态、两遍facts与精度守卫](#catalog-contract-14) |

| 183 | [工具变更统计生成change事件，不执行文件修改](#catalog-contract-19) |

| 184 | [三条异步命令的IPC搬运、runtime选择与任务分配边界](#catalog-contract-70) |

| 185 | [三条异步命令的IPC搬运、runtime选择与任务分配边界](#catalog-contract-70) |

| 186 | [thread/list双归档分页与固定sourceKinds数组](#catalog-contract-22) |

| 187 | [线程与分页Value解码及其内存支持](#catalog-contract-30) |

| 188 | [线程与分页Value解码及其内存支持](#catalog-contract-30) |

| 189 | [诊断计数/快照、模型校验与连接Future生命周期](#catalog-contract-58) |

| 190 | [诊断计数/快照、模型校验与连接Future生命周期](#catalog-contract-58) |

| 191 | [过渡journal：受限读取、写入、投影与有保护的清除](#catalog-contract-53) |

| 192 | [Provider导入与revision guard正常清理合同（已授权纠正）](#catalog-contract-39) |

| 193 | [诊断计数/快照、模型校验与连接Future生命周期](#catalog-contract-58) |

| 194 | [协议链的缓冲适配、空白与边界匹配支持](#catalog-contract-57) |

| 195 | [诊断计数/快照、模型校验与连接Future生命周期](#catalog-contract-58) |

| 196 | [三条异步命令的IPC搬运、runtime选择与任务分配边界](#catalog-contract-70) |

| 197 | [三条异步命令的IPC搬运、runtime选择与任务分配边界](#catalog-contract-70) |

| 198 | [扩写§4 W07—W12：Windows凭据元数据、字节/UTF16读取及写删顺序](#catalog-contract-72) |

| 199 | [扩写§4 W07—W12：Windows凭据元数据、字节/UTF16读取及写删顺序](#catalog-contract-72) |

| 200 | [扩写§4 W07—W12：Windows凭据元数据、字节/UTF16读取及写删顺序](#catalog-contract-72) |

| 201 | [扩写§4 W07—W12：Windows凭据元数据、字节/UTF16读取及写删顺序](#catalog-contract-72) |

| 202 | [扩写§4 W07—W12：Windows凭据元数据、字节/UTF16读取及写删顺序](#catalog-contract-72) |

| 203 | [扩写§4 W07—W12：Windows凭据元数据、字节/UTF16读取及写删顺序](#catalog-contract-72) |

| 204 | [MCP的TOML内存支持：转换、表选择、插入和析构](#catalog-contract-48) |

| 205 | [MCP的TOML内存支持：转换、表选择、插入和析构](#catalog-contract-48) |

| 206 | [Worktree探测的并行分组、结果合并及内存支持](#catalog-contract-60) |

| 207 | [线程与分页Value解码及其内存支持](#catalog-contract-30) |

| 208 | [Worktree探测的并行分组、结果合并及内存支持](#catalog-contract-60) |

| 209 | [线程与分页Value解码及其内存支持](#catalog-contract-30) |

原始归约交接：`release-fd5f0c5aa7d5-consumer-catalog-reduction.json`，SHA256 `359396c8da9f92974a699a5acb13580bf907950e566ee2821756690dd811f0ea`。原192文字矛盾已按PM裁决纠正；当前最终消费者复验状态以manifest为准；覆盖数字不能覆盖真实blocking。

## 12. 未变面迁移与Unknown

wireApi三态、Chat主要合同、hosted净化、刷新writer保护、Windows原有Skills11字段及只读保护、历史改写与manager多数分支按same/extracted证据迁移。真正changed协议面不得直接继承旧宽松错误策略。

尚未验的全局边界：真实App/live、dim6实现验收、在线OTA、所有依赖逐体认证、无参路径读取入口的真实机器目录。这些不因本次静态比较收口消失；implementation_use/gate_accepted/full_leaf_100等保持false。
