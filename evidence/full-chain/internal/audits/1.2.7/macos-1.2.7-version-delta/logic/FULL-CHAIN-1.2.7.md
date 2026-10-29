# macOS 1.2.7 release — 比较范围的端到端静态合同

本文件承接既有消费者合同第10节及SYSTEM-DIFF的已决同平台证据，不重新逆向，不把变化面比较扩大成全App实现认证。pre SHA ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9；release SHA f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0。原1.2.6→pre合同和门保持，只对当前release记录静态差异。

## 1. Skills UI→库存→列表→删除

Skills页查询缓存60秒；挂载刷新、手动刷新与isFetching防重入，窗口聚焦不触发刷新。前端wrapper→load_installed_skills handler→inventory::load_inventory（0x1005e1180）→read_skills（0x1007081d0）→app-server客户端。managed本地扫描与native库存按canonical SKILL.md路径合并，相同路径保留managed身份并补enabled；冲突enabled转null并记warning。

请求总deadline30秒、单次至多10秒；project/list每页100，至多20页、根至多256。根须绝对、is_dir且canonicalize去重，防重复cursor；skills/list使用已校验cwds及forceReload=true。返回cwd须属于请求集合且不能重复；skill路径须绝对且末名SKILL.md。这些是本机请求/结果校验，不代表外部服务扫描所有实现已恢复。

输出条目11键，较pre新增managed/source/enabled；enabled键始终存在且null/false/true。外部项managed=false，id是canonical SKILL.md绝对路径，updatedAt=null。列表data为items/total/rootPath/lastScanAt；warnings在外层信封。库存失败降级managed成功列表与skills_native_unavailable，partial/路径/冲突形成skills_native_partial。只有warnings为空才更新bootstrap缓存，缓存失败不使列表失败。

⚠ 删除入口先拒绝绝对id，发生于锁/备份/删除前；managed项仍先备份再删。备份metadata为backupID/skillID/name/title/relativePath/createdAt，临时写后rename。删除失败不自动恢复；删除备份不再生成备份；恢复/发布失败的再恢复也可能失败。不能因UI隐藏删除按钮而删除后端只读校验。

## 2. 账户、值域与启动后核验

PlanType新增go/pro500，9→11；AccountSummary25键、ExportedAccount14键含auth不变。导出不能当脱敏日志。可选tokenStatus/credentialGeneration/accessTokenExpiresAt/catalogSlug等省略规则不因helper变化而改写。

真实post-launch caller 0x100323998→0x10032b7e0：启动后100/250/500ms采样，失败清连续成功计数，末尾通过数>1才成功。disk/reentry核验0x10032bd90不是这条链，不能以它单次执行声称取消三采样。pre0x1007c1350已有action+64条件及action+56保存凭据核验保护；alias第七native参数pre已有，不是新增IPC字段。

⚠ 切换/恢复会写auth/registry、快照并可能操作进程；互斥、提交、失败核验、警告和回滚边界保留。用量刷新至多5项一批；额外认证/持久化告警不等于所有失败都回滚。没有真实App/用户数据验收。

## 3. 历史/线程/统计

历史reasoning读取/过滤caller→line_is_unusable_reasoning_response_item（0x1004b0390）→helper0x1004f8b60：额外识别ccswitch-anthropic-thinking-v1:前缀。不能解释为新的计费/token安全机制。

列表路径仍收集/排序cwd、至多4组调度、scoped线程和映射build_codex_session。detect_worktree_copies及fork_thread_to_cwd符号消失有内联证据；thread/fork、excludeTurns、120/0及cwd guard保留。摘要不符retry不是新增，PathContext.windows/prefixes不是新缓存迁移。

⚠ rollout成功rename覆盖历史，失败回收临时文件；ReadStamp只防并发漂移，不等于备份。missing_candidate执行UPDATE而非DELETE。provider收养/恢复事务和创建fork的副作用分别保留；旧命令反编译器失败按原生指令证据披露，不冒称反编译成功。

## 4. Anthropic请求→HTTP→真流→终态

请求在HTTP前检查旧加密reasoning、compaction/compaction_summary/compaction_trigger和带非null encrypted_content的context_compaction；不安全的replay、schema、工具约束不静默放宽。签名历史保序、动态工具能力、allowed_tools、thinking/forced tool_choice与schema归一化按当前链校验。模型末尾[1m]去除/trim和context-1m beta的决定条件分开。

真实流：vtable0x101aabe68 slot24→0x100836f70→poll_frame0x100584da0→poll_next0x10059b160→新SSE状态机；非流聚合另路。校验message_start顺序、block index/重复、开块、工具JSON对象、thinking签名与terminal reason。invalid_utf8、stream_error、stream_truncated不当成功。HTTP/读取/decode/转换错误按错误合同，敏感body先脱敏再递归处理，不记真实凭据。

成功stop reason为end_turn/tool_use/stop_sequence；pause_turn当前unsupported terminal reason/failed。旧web_search_20250305及Exchange::resume自动续传不能照搬为现行能力。未知合法server tool/search块为空输出，不是一律拒绝。native Responses hosted搜索净化按protocol/channel/model/baseURL条件，不是关闭所有搜索或证明删除所有历史web_search_call。

compat getter/setter命令仍存在：DTO、锁、未变不写/变化persist_with_commit和成功ack保持。维护页开关无实际操作入口不等于命令删除。新Anthropic链不接enabled不证明全App无读点。

## 5. Router/engine/MCP/platform

CLI引擎检测新增细分错误；最低0.155.0-alpha.9.2、1.5秒超时、25ms轮询及kill/wait为已有保护。MCP写前validated_mcp_config及结构行词法guard改变；TOML目标块编辑、3次冲突重试、原子发布旧版已有。

DB路径不再取首个存在项：候选枚举→canonicalize去重/验证→主进程PID及持有者筛选→唯一归属；多持有库/歧义报错，不任取fallback。恢复journal/backup/commit_pending/require_sync与commit警告是原有合同，不把helper展开算新增保障。路径/DB错误可能阻止写入。

⚠ MCP/config写、DB UPDATE、路由修复/恢复、终止/重启均保留备份、quiet窗口、冲突/回滚与日志边界。内部audited修复不能一律压成generic fix_issue。

## 6. 注册、覆盖与验收上限

当前112注册=105分离handler+7内联；纠正localStorage误报与clean漏提后102实际观察App调用，缺handler0。5unused wrapper、2非IPC键、10未观察页面调用注册命令分开，不把已注册当全链认证。

真App1870在五模块唯一分区，稳定面是size/BB/direct-call浅筛迁移，非1870逐体full_leaf。40277完整名字/5406入口/匿名候选和148独立库按本scope分类；C_diff_scan_complete=true但C_semantic_unqualified_pass=false，不声称所有依赖已逐体认证。

实现验收未来应覆盖库存降级/partial/只读删除、三态enabled、OAuth三采样、reasoning前缀、SSE非法/截断/terminal、DB多候选歧义和写失败；这些只是应测合同，不是本轮已执行dim6。真实App/OTA未验，release所有实现门false。Windows必须独立消费其包，不能以本文件代替。
