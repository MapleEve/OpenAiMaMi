# Windows 1.2.7 release — 消费侧端到端静态合同

本文件只覆盖同包 SYSTEM-DIFF 所界定的 pre→release 比较面。Evidence Source：SOT confirmed（限定静态变化面）；不授予实现放行。pre SHA `51cb41b613aaa50f410d606e1c4271b1de34576b497a1cba0f734eba46279faf`；release SHA `fd5f0c5aa7d500fe7fcef21359028fa614ede9965fc48888601883832ee7d8df`。历史 pre 的五目标消费者合同在 `CONSUMER-CONTRACT-1.2.7.md` 保留，本文件不把其旧地址自动当当前 release 地址。

## 1. UI 到 IPC 和运行时

Skills 页触发列表任务：挂载刷新/当前 tab 手动刷新 → 前端防重入与查询缓存 → load_installed_skills wrapper → Tauri handler/任务构造 → poll → release 列表闭包 `0x1406d3470` → core `0x140374010`。闭包透传内部结果，不把内部96字节结果布局当成四字段 JSON。

前端消费 data 的 items/total/rootPath/lastScanAt 与外层 warnings；managed/source/enabled 位于条目。enabled 缺可用状态时仍是 null，不应把 null 当 false。Windows pre 已有这些字段，当前真实变化主要在前端刷新策略与状态消费。外部条目不提供删除入口；后端只读保护不能因 UI 隐藏而省略。

边界：app-server skills/list 在 Windows 两版使用 forceReload=false；不要从 mac forceReload=true 推导 Windows 也要强制扫描。native 库存失败与部分库存 warning、列表硬错误分别表达，不能把降级成功当空库存硬错误。原始分支源：remaining-runtime-skills clauses S01–S20、frontend_evidence。

## 2. 账户切换和启动后核验

上层 caller 先处理原有快照/写入/启动路径；启动成功之后才进入本次已补齐的三次核验。启动失败的 CLIENT_RESTART_FAILED 与核验失败的 SWITCH_LIVE_VERIFY_FAILED 是两类不同退出。

| 层次 | pre | release | 实际合同 |
|---|---|---|---|
| 切换 caller | 0x14042f320 | 0x1405ced90 | launch_ready 后调用核验，成功才 live_verified；失败走原恢复分支 |
| 三次外层 | 0x14042de60 | 0x1405cdef0 | 每次先等待，再检查；固定三次，最终连续通过数>1 |
| repository 锁包装 | 0x140ec8db0 | 0x140367780 | 取锁、poison 分支、锁内核验、释放并唤醒等待者 |
| registry/auth 核 | 0x140d05b20 | 0x140a4dbb0 | registry active 和 auth 派生身份均须匹配同一目标 |
| 等待入口→实现 | 0x1416c57d0→0x1416ca5b0 | 0x141514c70→0x141519c10 | 秒/纳秒参数→相对100ns timer→同步等待；失败回落Sleep |

核验顺序：100ms等待→第1次；250ms→第2次；500ms→第3次。失败不重置下一档索引，只清连续通过计数，并保存当前具体错误。三次结果中仅 SSS/FSS 成功；不能在 SS 后提前结束，也不能使用“任意两次成功”。850ms不是包含 IO/锁等待/启动的总时限。

registry 读/解析失败传播；active 不存在或不匹配返回 registry 错误。auth 读取/解析后排除虚拟受管、API-key 和不可用 token 输入，再从身份字段构造 key；无可匹配身份或 key 不等返回 auth 错误。账号标识优先 auth 显式 account_id、再 chatgpt_account_id、再 unknown-account；用户部分优先 chatgpt_user_id、再 user_id、再规范化 email。不是只比较邮箱、套餐、token字符串或“有saved文件就成功”。token形态检查不等于远端签名/有效期认证。

失败全文：
- `SWITCH_REGISTRY_VERIFY_FAILED: active account does not match the requested account`
- `SWITCH_AUTH_VERIFY_FAILED: auth.json identity does not match the requested account`

两条均82B，pre/release逐字节相同。上层恢复可能生成组合错误；普通失败保留最后具体错误，不能把外层兜底字面量说成所有失败统一文本。

⚠ 本核验 helper 读取/解析、加锁、构造身份与内存释放，不直接修复/写回凭据。上层真实切换和失败恢复会写 auth/registry、快照及可能重启进程；不能把 helper 的只读属性扩大为整个切换无副作用。pre显式路径参数→release无参读取入口的接口差别已记录，但真实机器目录尚未运行对照。

## 3. 用量刷新、快照合并、事件

刷新前选择优先读进程内快照，不可用再读 App 状态；poison/无快照不是普通 false。业务 core pre `0x140ececc0` / release `0x14036d9e0`：持锁读 progressive 与必要上下文→解锁慢刷新→重取锁保存→构建/回写显示状态。保存失败可能加 PROGRESSIVE_STATE_SAVE_FAILED warning 继续返回，后置状态回写失败只记录，不自动撤销已有写入。

可选额外刷新最多三轮，需 caller flag 且状态 byte==2；等待按800<<attempt及时间余数计算。成功轮次可更新和广播共享快照，晚期失败不回滚前轮；三轮仍为2时可返回保留的首次快照。消费者不能为了统一而强制返回最近广播值。

合并 guard：同epoch下拒绝倒退sequence；按 full/usage/progressive/push、account、auth/account-alias 分流。指定accountKey不存在时保留旧快照；lastScanAt不倒退。全局赋值→解锁→主线程投递/emit，emit失败不提供补偿式回滚。

getter 与事件不可混淆：
- load_runtime_display_snapshot：零参数、只读，成功信封 data=RuntimeDisplaySnapshot|null。
- runtime-state-updated：外壳 `{snapshot,source,accountKey?}`，None省略整个accountKey键。

事件外壳为已授权旧陈述修正；这不是pre→release新增业务变化，不撤销getter旧门。依据 runtime-skills R01–R21 及 event-correction-proof。

## 4. Anthropic 请求→HTTP→响应/流

入口按provider.wireApi分三路，三个枚举值pre已有。Anthropic release请求 helper `0x1404597e0` 位于当前分派链中；它在HTTP之前完成 encrypted compaction、工具声明/namespace、能力选项、thinking/effort、签名重放版本和structured output校验。不能保留的allowed_tools约束直接拒绝，不悄悄变为宽松选择。转换后按options规范化tool schema，model后缀/header构造属于既有行为外提。

真实流入口：HTTP response → vtable `0x14185c6f0` slot24 `0x1406edf80` → `0x140ce0d60` → `0x1404ae850` → `0x140fa97d0` → message_stop终结 `0x140fa5770`。这些是实际调用链，不用 drop/shim 或库名字替代流业务体。非流式 aggregate 单独验证响应shape、block和terminal reason，不能直接套流末尾策略。

SSE流程：增量UTF8→event/data行处理→JSON type事件分派→message_start→block start/delta/stop→message_stop验证→Responses输出。可跨chunk的未完整UTF8尾部暂存，确定非法及EOF残片报invalid_utf8；没有message_stop的EOF报stream_truncated，不由已有内容推断max_tokens。

message_start必须一次有效object；block index必须有效不重复；delta必须匹配已有block；block_stop仅先标关闭，message_stop前所有block必须closed。tool调用id/name非空，参数JSON必须为object；thinking签名/redacted data须满足非空重放要求。

| stop_reason | release结果 |
|---|---|
| end_turn / tool_use / stop_sequence | completed |
| max_tokens / model_context_window_exceeded | incomplete / max_output_tokens |
| refusal | incomplete / content_filter |
| pause_turn / 缺失 / 未知 | failed / invalid_response |

Windows pre pause_turn为completed，不借mac旧自动续传合同。未知但合法server block不变成客户端工具调用，也不能统一写成显式拒绝。HTTP/读取/decode/转换错误不当正常响应；保留脱敏摘要，扩展trace计数不表示新增业务能力。协议53条逐面结果见DELTA-LOGIC。

## 5. Catalog / MCP / process 与生命周期

catalog生成：验证目录候选→按模型选择匹配/构造默认项→slug与特性合并→隐藏补充项visibility/priority→构造models及aimami_no_account→序列化→交调用者发布。构造体本身不落盘，原子发布成功与内存生成成功不能混淆。

MCP修改保留三次冲突尝试、managed marker/字段规范化及发布职责，writer helper外提不算新增原子事务。Windows进程与DB归属以原生分类结果而非bool处理，含名称/路径fallback、终止后复查、一次提权及歧义失败。manager quiet/reconcile与退出重启按真实caller分流，Future completed/panicked只是生命周期guard，不是新增DTO业务枚举。

⚠ 删除/终止/修复/恢复/配置发布均保留原有失败边界，不因层次精简而跳过复查、备份或把非原子过程称原子。此处不执行任何进程操作。

## 6. 历史替换与健康/删除

串行顺序：有界索引→provider资格与rollout存在→缓存快路径→失效缓存→可选快照→元数据/provider读取→三目标相等检查→可选后快照检查→缓存/下一项；首错退出，不承诺恢复此前全部项目。

fallback：反向恢复已记录baseline→任何恢复错返回复合错误及baseline→全部恢复成功再顺序重建计划→最多重放串行一次。不是无限循环。

三种写入路径不能压平：
1. 等长原地：替换排序/重叠拒绝→布局guard→resolve/open/stat→逐旧行seek/read核对→seek/write→best-effort SetFileTime→close；本分支没有显式sync_data。
2. 流式临时：同目录唯一temp→copy gaps与替换→SetFileAttributes→close temp→重查源指纹→MoveFileExW flag9→best-effort父目录flush；不能声称rename前显式FlushFileBuffers。
3. 整文件：plain BufWriter或zstd level3→布局与offset guard→flush/encoder finish→attributes→FlushFileBuffers→close→再resolve及完整指纹检查→MoveFileExW flag9→best-effort父目录flush/时间恢复。

⚠ 三条均可能覆盖/改写历史；ReadStamp/指纹检查不等于持久备份。健康读取64KiB分片、8MiB单行上限，取消/EOF/超长/IO错误分开。删除后刷新或warning不意味着删除回滚。ActivityID指未归档thread行id，不是ETW。

## 7. 可实现边界与验收映射

本文件提供静态合同，不生成实现验收结果。将来验收至少应覆盖：Skills 60秒缓存/只读删除与enabled三态；OAuth八种S/F组合及registry/auth不匹配；UTF8跨chunk/非法/EOF；重复start/index、open block与工具JSON；pause_turn和未知reason；三种历史写入失败及一次fallback；进程/DB归属歧义与退出后复查。

这些只是应测条件，**未执行 dim6**。真实App对照未做，不能写“与真实App一致”；实现用consumerStartReady/strictImplementationUse/最高门均以对应正式scope门为准，当前release门保持false。现有旧pre合同的窄门不覆盖本次全部release面。

## 10. Catalog消费者合同的完整承接

DELTA-LOGIC第11节已按210条责任建立正文映射，而不是只列closed计数。消费范围包含：系统代理用户注册项/PAC/WinHTTP候选顺序及后来源失败保留；模型pair与五别名选择；诊断敏感键与账户摘要；thread/list双归档分页/总deadline/重复cursor与本地回退；项目DB与rollout cwd边界；只读诊断/批修复及后置重扫失败不回滚；analytics两遍聚合与饱和计数；provider导入逐项错误与credential revision；managed quiet/恢复/两备份清理、最多20备份与坏TOML挽救；消息2MiB/64KiB预算与服务失败回退warning；周期额度刷新和保持router退出；staging身份保护与原子替换的具体重试；Windows凭据读取/写入/删除及临时内存清理；具体任务适配与析构边界。

这些主要是原有合同的完整迁移/职责外提，不自动计成release新增功能。正文列清每个调用实际可达条件、失败与晚期副作用；allocator/drop等支持体不复制原始代码，只承载应用所需所有权边界。任何精确来源冲突在第11节单列，不从closed/hash推断冲突已解决；不能据此提前宣布全部消费者达标。

## Provider导入清理定点裁决

最终commit前，包装器把本次导入产生的88B revision guard条目byte+80置1，表示抑制条件删除。最终state commit的out tag=-1为成功，成功支保持1；非成功支才置0，随后销毁接出的guard buffer。只有byte+80=false才按保存的路径和文件identity尝试删除新revision；identity不等拒删，删除失败只日志，不能保证所有失败revision均已删除。不能把另一层revision写入核的-1失败编码混用于state commit；亦不能把内存drop当成磁盘回滚。pre/release这段清理方向同形，caller前检时机变化仍保留。异常展开、OOM及未完整展开的collector内部不被扩成全局补偿证明。

仅原192叙述被授权纠正；逐项错误/字段校验与caller前检时机差异不变，所有实现门不提升。完整依据见DELTA-LOGIC第11节及pointers中的provider-import-correction。
