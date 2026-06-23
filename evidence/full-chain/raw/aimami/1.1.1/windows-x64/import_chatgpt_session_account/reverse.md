# import_chatgpt_session_account — windows-x64 1.1.1 逆向证据

## 元信息
- session: <审计会话>
- machine: <本地机器>
- idb: <本地路径>
- produced: 2026-06-18
- method: ceiling_cracked — 160 BB 大协程，HexRays decompile 整体失败；采用 basic_blocks 取块列表 + disasm 全量 939 条指令分 3 段覆盖；callees 独立提取
- ceiling_cracked: true
- recovery_attempts: 1（第一次 decompile 失败后直接转 disasm 分块方案）
- coverage: full（939/939 条指令已读；160/160 BB 已枚举；所有主路径均有覆盖）
- partial: false

## 函数定位
- owner VA: 0x140953280
- size: 0x14d3 bytes
- basic_blocks: 160
- 字符串锚: "import_chatgpt_session_account" @ 0x1412faaf4
- xref caller: sub_140953280 @ 0x140953341（aImportChatgptS）

## ::poll 状态机骨架

### 顶层状态分发（outer switch，byte @ rcx+0x1100）
地址 0x1409532C8：switch 4 cases
- case 0 → loc_1409532CA：Poll::Pending 初始化路径，设 word[r14+0x1101]=0x101，byte[r14+0x1103]=1
- case 1（loc_140954690）/ case 2（loc_14095469E）→ 非法状态，ud2 panic（已完成/越界）
- case 3 → loc_140953310：继续中路径（Poll::Pending 回绕）

### 内层状态分发（inner switch，byte @ rcx+0x10F0）
地址 0x14095330E：switch 8 cases
- case 0（loc_14095332F）：IPC 参数解析阶段
- case 3（loc_140953404）：session JSON 解析阶段
- case 4（loc_140953421）：overwriteExisting 参数解析阶段
- case 7（loc_140953463）：chatgpt provider 检查/账号写入阶段
- case 1/2：panic（invalid state，ud2）

### 最内层 sub-switch（byte @ rcx+0x1059）
地址 0x140953471：switch 5 cases
- case 0（loc_1409534A7）：正常 await 入口
- case 4（loc_140953836）→ loc_140953D37：成功完成路径
- case 3（loc_1409538C4）：结果 Future 检查路径
- case 1/2：panic

## 关键 callees 与语义

### 参数解析
- confirm_pending_auto_switch_deserialize_request_sys (0x140089A50)
  - 入参: rcx=&request_buf, rdx=&arg_descriptor[import_chatgpt_session_account,app]
  - 对应 IPC 参数: command="import_chatgpt_session_account"（len=0x1E），namespace="app"（len=3）
- remove_skill_parse_id_param_111 (0x1402FED40)
  - 解析 "sessionJson" 字段（字符串 @ 0x1412FAB12，len=0x0B）
  - discriminant 6 = Some(String) — Option<String> 解码器
- parse_bool_from_ipc_arg_sys (0x1402FF1A0)
  - 解析 "overwriteExisting" 字段（字符串 @ 0x1412FAA4A，len=0x11）
  - 返回 discriminant 6 = Some(bool)

### DTO 字段（入参）
| 字段 | 类型 | 字符串 VA | 备注 |
|------|------|-----------|------|
| sessionJson | Option<String> | 0x1412FAB12 | ChatGPT session JSON 原文 |
| overwriteExisting | Option<bool> | 0x1412FAA4A | 是否覆盖现有账号 |

### provider 检查
- sub_140EFCAF0 (0x140EFCAF0) — chatgpt provider 可用性检查，返回 bool
- sub_140EFD8E0 (0x140EFD8E0) — 条件性调用（仅 provider 可用时），推测为 provider metadata 更新
- sub_14023CD50 (0x14023CD50) — 用于构造 Future，r9 指向 cargo registry 路径字面量（build artifact）
- sub_14023D620 (0x14023D620) — 第二次 Future 构造（账号写入分支）

### 账号写入核心
- sub_140872110 (0x140872110) — 主账号写入调用，rdx = &[r14+0x1060]（账号结构体偏移），r8 = r13（session context）
- sub_140872C70 (0x140872C70) — 账号状态更新/检查（后续 overwrite 决策点）
- sub_1410A1DF0 (0x1410A1DF0) — Future 组合器/await 调度（多处调用，含 byte_1412FCC18 vtable）
- sub_14091A6D0 (0x14091A6D0) — 结果清理/drop（多处调用，Result 析构）

### 账号写入DTO（self 偏移，r14/rax = 协程 state）
| 偏移 | 写入内容 |
|------|----------|
| +0x105A | import_in_progress flag（0/1） |
| +0x105B | 子阶段 flag |
| +0x1059 | sub-state discriminant |
| +0x1068 | imported account id / error union |
| +0x1070 | account data ptr |
| +0x1078 | account name ptr |
| +0x1080 | account metadata |
| +0x1088~+0x10D8 | xmm block（6×16B）账号完整结构 |
| +0x10E8 | provider state discriminant（byte） |
| +0x10F0 | inner state discriminant（byte） |
| +0xBF8 | sessionJson ptr |
| +0xC00 | sessionJson namespace ptr |
| +0xC08 | sessionJson len |
| +0xCA8 | overwriteExisting flag（byte） |
| +0xCA9 | overwriteExisting valid（0 = None） |

### 监听器清理（Arc drop loop）
两处 has_notch_arc_listener_drop_loop (0x14033AB50)：
1. loc_140953B6E — 清理 [rax+0xB50] 起的 listener 数组（每项 stride=0x60）
2. loc_1409544DE — 清理 [rcx+0xB50] 第二组 listener 数组（stride=0x60）

### 广播与响应
- broadcast_runtime_state_updated_111 (0x140790230) — 导入成功后广播 "runtime-state-updated" 事件
  - 经由 sub_140074A00 event bus emit；触发 tray 刷新
  - 仅 import 成功路径（loc_1409540F7 后续，字符串 "import" @ 0x1412FCC70）
- has_notch_invoke_resolver_respond (0x14080C3C0) — InvokeResolver::respond，WakeByAddressSingle terminal，在 loc_1409545F8 处最终返回 IPC 响应

## 错误路径
- rdi = 0x8000000000000002 → early bail（provider 不可用或 parsing 失败），al=3 → loc_140953D67
- 0x8000000000000001 → overwriteExisting 拒绝分支，写 [rax+0x105A]=1 并保存 error context (+0x1068~+0x10D8)
- 0x8000000000000025 → loc_140953FC8：空 ok/xor edi，走快速成功路径
- sub_140E30410 失败 → loc_14095465F，"a Display implementation returned an error unexpectedly"（panic msg）→ sub_14124BFE0

## 1.0.9 对比
1.0.9 windows-x64 未做 import_chatgpt_session_account 独立逆向（raw/aimami/1.0.9/windows-x64/ 中无此 leaf）。
win-same.txt 将其列为 same 候选，但本次逆向发现协程结构显著扩展：
- 1.1.1 状态机增加 outer×inner×sub 三层 switch，160 BB（1.0.9 无基线 BB 数对比）
- DTO 新增 +0xBF8~+0xCA9 区段（sessionJson/overwriteExisting 持久化到协程 state）
- broadcast_runtime_state_updated_111 在导入成功后新增 tray 刷新广播（1.0.9 基线无此调用痕迹）
- listener Arc drop loop 两处（1.0.9 基线无法确认）
**判定：delta（协程结构扩展 + 新增 DTO 字段 + 新增广播副作用）**

## callees 完整列表（去重）
sub_141212FB0（memcpy/move）、confirm_pending_auto_switch_deserialize_request_sys(0x140089A50)、
sub_1400803E0(0x1400803E0)、sub_14023CD50(0x14023CD50)、remove_skill_parse_id_param_111(0x1402FED40)、
parse_bool_from_ipc_arg_sys(0x1402FF1A0)、sub_140041870(0x140041870)、sub_140872110(0x140872110)、
sub_140EFCAF0(0x140EFCAF0)、sub_140EFD8E0(0x140EFD8E0)、sub_1410A1DF0(0x1410A1DF0)、
sub_14091A6D0(0x14091A6D0)、sub_140001370(0x140001370)、sub_140921810(0x140921810)、
has_notch_arc_listener_drop_loop(0x14033AB50)、sub_14023D620(0x14023D620)、sub_140872C70(0x140872C70)、
sub_1402361B0(0x1402361B0)、sub_1408ED1D0(0x1408ED1D0)、sub_14124BCCB(0x14124BCCB)、
sub_14022E350(0x14022E350)、sub_140214870(0x140214870)、broadcast_runtime_state_updated_111(0x140790230)、
sub_1408ED4F0(0x1408ED4F0)、sub_140E30410(0x140E30410)、nullsub_1(0x1400013A0)、
sub_140001360(0x140001360)、sub_1412208A0(0x1412208A0)、sub_1408F10F0(0x1408F10F0)、
has_notch_invoke_resolver_respond(0x14080C3C0)、sub_1412271EF(0x1412271EF)、
sub_14124BFE0(0x14124BFE0)、sub_14124C3A0(0x14124C3A0)、sub_14124C380(0x14124C380)

---

## dim 状态评估（<审计会话>）

| dim | 状态 | 证据来源 |
|-----|------|---------|
| dim1 前端 CCF | PARTIAL — ceiling_cracked 逆向确认 argKeys=[sessionJson, overwriteExisting]；前端 CCF live 未在 1.1.1 win 重验 | reverse.md 参数解析 callees 确认字段存在 |
| dim2 owner/pseudocode | PASS — 160 BB 全覆盖（939 条指令），三层 switch 骨架完整 | ceiling_cracked disasm 3段覆盖 |
| dim3 call-tree | PARTIAL — callees 完整列表已提取（34 个 callee）；leaf 终止理由未逐 callee 标注；无 call-trees/ JSONL 文件 | callees 完整列表末尾 |
| dim4 DTO/错误 | PASS — 入参 DTO (sessionJson/overwriteExisting)、账号写入 state 偏移表、错误路径（rdi=0x8000...002/001/025）全部确认 | reverse.md DTO 字段 + 错误路径节 |
| dim5 平台 gate | PASS — windows-x64 协程结构 + IDB idb_path 确认 | 元信息 idb 字段 |

**缺口**：dim1 CCF 未 live 复验（migrated 不是 live-confirmed）；dim3 无 call-trees/JSONL + leaf 终止理由未系统标注。这两个缺口阻止升 readyToImplement。

## dim6 验收映射（producer-acceptance-draft）

**dim6_basis**: reverse.md 参数解析（sessionJson/overwriteExisting argKeys）、账号写入 callees（sub_140872110/sub_140872C70）、错误路径（rdi enum）、广播副作用（broadcast_runtime_state_updated_111）

### happy_path

- 输入: `invoke('import_chatgpt_session_account', { sessionJson: '<json string>', overwriteExisting: true })`
- 前置条件: chatgpt provider 可用（sub_140EFCAF0 返回 true）
- 期望响应: `Ok` — rdi = 0x8000000000000025（快速成功路径 loc_140953FC8），xor edi / 空 ok 响应
- 副作用断言:
  - sub_140872110 执行账号写入（rdx = &[r14+0x1060] 账号结构体）
  - broadcast_runtime_state_updated_111(0x140790230) 调用 → 'runtime-state-updated' 事件广播 → tray 刷新
  - import_in_progress flag [r14+0x105A] 置 1（写入阶段）后恢复

### boundary / error

| 触发条件 | rdi 值 | 预期结果 |
|----------|--------|---------|
| chatgpt provider 不可用（sub_140EFCAF0 返回 false）或参数解析失败 | 0x8000000000000002 | early bail → loc_140953D67；IPC 错误响应；无账号写入 |
| overwriteExisting=false 且账号已存在（sub_140872C70 拒绝） | 0x8000000000000001 | [rax+0x105A]=1 标记；错误 context 保存到 +0x1068~+0x10D8；无广播 |
| sessionJson=None（Optional 未提供） | discriminant 6 ≠ Some | parser 返回 None；参数解析阶段 bail out |

### side_effect_asserts

- 广播: import 成功后 'runtime-state-updated' 事件必须被前端 event listener 接收到
- 账号状态: 导入后账号可通过账号列表 IPC 查到
- 无文件写入（除账号 state 内部存储）；无 HTTP

### test_mapping

| 类型 | 场景 | 理由 |
|------|------|------|
| e2e | happy_path — sessionJson 有效，账号导入成功，tray 刷新 | 需要真实 chatgpt provider + 事件总线；不可单元模拟 |
| unit (producer-acceptance-draft) | provider 不可用 → early bail，无账号写入 | mock sub_140EFCAF0 返回 false；assert 无广播调用 |
| unit (producer-acceptance-draft) | overwriteExisting=false 且账号已存在 → skipped | mock sub_140872C70；assert 0x8000000000000001 error variant |
| unit (producer-acceptance-draft) | sessionJson=None → 解析失败，无写入 | None 路径直接 bail |
| manual | tray icon 刷新可见（broadcast 副作用验收） | 需真实桌面 App 窗口 |

### gate（本命令）

dim1 CCF 未 live 复验 + dim3 无 JSONL call-tree → **不可升 readyToImplement**；保持 acceptance_draft_only。
缺口：dim1 需 1.1.1 win 前端 CCF live 再验（find_regex 'import_chatgpt_session_account' + ipc-contracts.jsonl 比对）；dim3 需 call-trees/import_chatgpt_session_account.jsonl 产出。
