# evidence.md — load_runtime_display_snapshot win 1.2.7 最新 exe full-chain

session `<审计会话>`｜IDA <审计环境>（AiMaMi.1.2.7 win64.exe，sha256 51cb41b6...）｜全部地址为该 IDB live 实测。

## 0. 裁决背景与禁实现撤销

- 2026-10-01 轮判定「双平台双版本零后端符号 → owner 未定位前禁实现」（migration-matrix OPEN_NO_BACKEND_SYMBOL_BOTH_SIDES）。
- 2026-10-06 池化命名轮破解池化串机制（≥16B 命令名被 LLVM 拆 first16+last16 重叠窗口常量入 .rdata 驻留池，全名连续字节不存在 → 全名搜索假阴性），三重实证 win 侧存在真 handler（glue 0x1405ec7d0），呈报用户裁决。
- 用户 2026-10-06 裁决「全都做完」= 撤销 win 侧禁实现并补全证据链。本 leaf 即该裁决的执行。mac 侧维持零符号如实标注（win-only 注册），不在本轮外推。

## 1. 注册链（本轮 live 独立复验，不链式引用 Oct 6 IDB 注释，红线31）

1. dispatcher 0x1405fbca0（tauri invoke_handler，28374B）对 ≥16B 命令名做碎片比较：
   - `pcmpeqb xmm1, cs:xmmword_141A23430` @0x1405fc0d9（last16 = "display_snapshot"，live 读串 0x141a23430 = "display_snapshot..."）
   - first16 窗口 = "load_runtime_dis" @0x141a23440（live 读串），窗口偏移 [rcx+0xD] 与名字长度 29 精确吻合（29-16=13=0xD）
2. `jz loc_1405FE736` @0x1405fc0f6（live disasm）→ arm（参数结构 memcpy 520+400+24）
3. `call load_runtime_display_snapshot` @0x1405fe788（live disasm，目标 0x1405ec7d0）
4. .rdata 注册表项 0x141ea6c70（stru_141EA6C70）：首 u32 = 0x005ec7d0 = glue RVA（imagebase 0x140000000 + 0x5ec7d0 = 0x1405EC7D0，live 读字节 d0c75e00ffffffff...）
5. mac 1.2.7：全名/first16/last16 符号搜索零命中（Oct 6 轮实测，本轮引用维持）→ win-only 注册

## 2. glue full-chain（glue 0x1405EC7D0，380B）

```
sub_1405EC7D0(a1):                     // tauri glue，零用户参数
  memcpy(v13, a1, 520);                // 环境结构拷贝1
  memcpy(v12, a1+520, 400);            // 环境结构拷贝2（a1+65*8）
  v2/v3/v4 = a1[115]/a1[116]/a1[117];  // responder ctx
  runtime_display_state_get_snapshot(v11);      // 0x140ECA180：960B 输出（880B snapshot 或首qword=-1）
  load_runtime_display_snapshot_build_envelope(v9, v11);  // 0x140CF4D10：880B payload + envelope 元数据
  memcpy(v10, a1+520, 400);            // responder ctx 拷贝
  memcpy(v11, v9, 960);
  load_runtime_display_snapshot_respond(v10, v11);  // 0x140AABEA0：序列化+respond
  96B×N 清理循环（drop params）
  return sub_1405251E0(v13);           // glue 收尾
```

- 零用户参数：无任何用户参数解析；520+400B 为 tauri AppHandle/Webview 环境捕获。前端 CCF `loadRuntimeDisplaySnapshot` argKeys=[]（api-map.json，definedIn assets/index-CCfI07iB.js）双端互证。

## 3. semantic implementation leaf（数据来自哪里）

**数据源 = 进程内全局静态状态，非 invoke 时读文件/进程**：

- 全局：`0x142239468`（.data，880B）= RuntimeDisplaySnapshot 状态本体；首 dword == -1 表示未初始化（getter 输出首 qword=-1 → 序列化为 `"data": null`）。
- getter `runtime_display_state_get_snapshot`（0x140ECA180，共享×5 调用方：本命令 glue / commands/account_alias(sub_14014EFF0) / sub_140B41EC0 / commands/account_observer(sub_140D43AF0) / usage 刷新(sub_140ED2A40)）：park 锁（byte_142239460 + WaitOnAddress）下读全局 → `runtime_display_state_to_snapshot`（0x140ED8380）转换为 880B snapshot DTO。
- 状态维护者 `runtime_display_state_update_and_emit`（0x140ED1DD0，2523B，writer×9 feeder）：
  - 更新种类 kind（live 字符串比较实证）：`push` / `account` / `account-alias` / `auth` / `full` / `usage` / `progressive`（+accountKey 定位）
  - full/usage/account/progressive 类更新时计算 lastScanAt（sub_1416B2E50 取 FILETIME + sub_1416B2E00 减纪元常量 0xD53E8000/0x019DB1DE = 0x019DB1DED53E8000，Windows FILETIME→Unix 换算实证）
  - account/account-alias 类经 sub_140D42EC0 合并账户项（384B 项按 accountKey 定位，sub_140EC9250 合并+sub_140D74C80 重建显示项）
  - 更新全局（drop 旧值 sub_140D86090 + memcpy 880B）后 emit tauri 事件 **`runtime-state-updated`**（串 0x141aa18d7，载荷为外层对象 {snapshot, source, accountKey?}；snapshot 字段内为新 RuntimeDisplaySnapshot；accountKey 为 None 时省略整个键而非 null；外层序列化器 0x140DDA7A0，sub_140594C70）
- feeder（xref 全枚举）：`load_snapshot`（0x14036BF70，commands/accounts，从磁盘账户快照加载）/ `refresh_usage_snapshot` / `refresh_single_account_usage`（用量刷新）/ `set_account_alias` / `logout` / `remove_accounts` / `import_accounts_from_file` / oauth_login 链（sub_140293D70→sub_1403A94E0，auth 类更新）/ account_observer（sub_140D43AF0）
- 即：文件 I/O 与远端用量拉取都发生在 feeder 命令里；本命令是纯读取端。

## 4. DTO 字段级（serde 序列化器逐字段反编译，全部字段名 live 命中）

### 4.1 响应 envelope（build_envelope 0x140CF4D10 + serialize_envelope 0x140D763A0）

| 字段 | 类型 | 值域（本命令） | 证据 |
|---|---|---|---|
| schemaVersion | u32 | 恒 1 | 立即数 1 @+952；字段名池 0x141A90A1F "schemaVersion"(13) |
| success | bool | 恒 true | 立即数 1 @+956；"success" |
| code | String | 恒 "ok" | alloc(2,1)+27503=0x6B6F→"ok"；String=(cap,ptr,len) 布局实证（+880 cap=2/+888 ptr/+896 len=2） |
| message | String | 恒 "Success" | alloc(7,1)+1667462483=0x63637553("succ" 首字母大写S)+1936942435=0x73736563("cess") → "Success" |
| warnings | Vec | 恒 []（空 Vec：(cap=0,ptr=8 dangling,len=0) 常量写入） | 字段名 "warnings" |
| data | Option\<RuntimeDisplaySnapshot\> | snapshot 或 null | 首 qword==-1 → 写 0x6C6C756E="null"（serialize "data" 字段 helper 0x1407A7230） |

序列化顺序 = 声明顺序：schemaVersion, success, code, message, warnings, data。responder（0x140AABEA0）另有 envelope 首 dword==-2 错误分支（32B 错误载荷），本命令 envelope 构建器只写成功变体，永不触发。

### 4.2 RuntimeDisplaySnapshot（880B，serialize_data 0x140CD7E50）

```
{ "status": {...}, "accounts": [AccountItem...], "refreshReport": {...}|缺省 }
```
- status（0x140CE2280，736B）：
  - activeAccount: AccountItem|null（@+0，384B；首 dword==2 → None → "null"，序列化器 0x1407A6850 实证）
  - paths（@+384，176B，0x140CE19A0）：codexHome/accountsPath/authPath/registryPath/sessionsPath/launchAgentPath/autoSwitchLogPath（7×String）+ authExists/registryExists/sessionsExists（3×bool）
  - autoSwitch（@+560，40B，0x140CE1F00）：serviceLabel(String)/threshold5hPercent(u32)/thresholdWeeklyPercent(u32)/enabled(bool)/serviceState(4 变体枚举，含 "unknown")
  - activeAccountKey: String|null（@+600，Option<String>）
  - api（@+624，Option，0x140CE2080）：{ proxy: {...} }（proxy 子结构 sub_140CE1C20，本轮未下钻，如实标注）
  - apiConnectivity（@+656，0x140CE2160）：usageLastError(String|null) + usageStatus(枚举 unknown/…/unreachable)
  - authRevision（@+688，Option，0x140CE2490）：{ epoch: String, sequence: u64 }，None 时整个字段缺省
  - lastScanAt: u64（@+720，FILETIME→Unix 换算产物）
  - accountCount: u32（@+728）
  - usageSource: 枚举 "local"|"api"（@+732）
- accounts: Vec\<AccountItem\>（@+736，384B/项；事件 "runtime-state-updated" 外层对象的 snapshot 字段共用 RuntimeDisplaySnapshot 内层序列化器 0x140CD7E50；事件整体由 0x140DDA7A0 序列化为 {snapshot, source, accountKey?}，accountKey 为 None 时省略）
- refreshReport（@+760，Option，0x140CD80E0，skip_serializing_if None → 字段缺省）：revision(String)/scope∈{full,usage,account}/accountKey(String|null)/startedAt(u64)/finishedAt(u64)/token+metadata+usage（各 {attempted:u32, succeeded:u32, failed:u32, status:4变体枚举}）

### 4.3 AccountItem（384B，serialize_item 0x140CE0910，25 字段）

| 字段 | 偏移 | 类型 |
|---|---|---|
| planObservedAt | +0 | u64 |
| subscriptionExpiresAt | +16 | Option\<u64\> |
| subscriptionObservedAt | +32 | Option\<u64\> |
| lastUsedAt | +48 | Option\<u64\> |
| lastUsageAt | +64 | Option\<u64\> |
| primaryWindow | +80 | Option\<Window\>（40B：resetsAt Option\<u64\> / windowMinutes Option\<i64\> / usedPercent Option\<f64\> / remainingPercent u32） |
| secondaryWindow | +120 | Option\<Window\>（同上） |
| tokenStatus | +160 | 条件字段（tag==2 缺省）：{ accessTokenExpiresAt Option\<u64\>, credentialGeneration Option\<…\>, code 子结构(sub_140CE1630 未下钻) } |
| accountKey | +208 | String |
| email | +232 | String |
| alias | +256 | String |
| accountName | +280 | Option\<String\> |
| workspaceName | +304 | Option\<String\> |
| profileName | +328 | Option\<String\> |
| availableResetCredits | +352 | Option\<数值\> |
| createdAt | +360 | u64 |
| authMode | +368 | 枚举 "chatgpt"\|"apikey" |
| isActive | +369 | bool |
| usageSource | +370 | 枚举 "local"\|"api" |
| hasActiveSubscription | +371 | Option\<bool\>（null/true/false 三态，0x65727574="true"/0x736C6166="fals" 实证） |
| subscriptionWillRenew | +372 | Option\<bool\> |
| planSource | +373 | 枚举 "jwt"\|"remote"\|"usage" |
| subscriptionStatus | +374 | 枚举 "active"\|"inactive"\|"stale" |
| subscriptionSource | +375 | 枚举 "livePlan"\|"jwt"\|"remote" |
| plan | +376 | 枚举 free/plus/pro5x/pro20x/team/business/enterprise/edu/unknown（switch case 0-8 live 实证） |

Nullability 总则：Option 字段 None → JSON null（字段仍出现）；refreshReport/authRevision/tokenStatus 为 skip_serializing_if（None → 字段缺省）。default：无 serde default 证据（非 Option 字段恒出现）。

## 5. 错误面与副作用

- **错误面**：本命令应用层不可失败——envelope 恒成功（code="ok"/message="Success"/success=true）；「不可用」以带内 `data:null` 表达（全局首 dword==-1）。envelope 类型存在 -2 错误变体（responder 分支），但本命令构建器只写成功变体。序列化为纯 string/u64/bool/f64 写入器，无 fallible 自定义序列化。
- **副作用**：**只读**。读取路径零写盘/零进程操作/零配置变更。状态写入发生在 feeder 命令（另一路径）。全链无 ⚠ 破坏性操作（无 remove/delete/kill/truncate）。
- tauri 层错误（如 IPC 序列化基础设施错误）不属于本命令语义面。

## 6. dim1-5 完成度

| dim | 内容 | 状态 |
|---|---|---|
| dim1 | 前端 CCF：loadRuntimeDisplaySnapshot argKeys=[]（api-map.json；前端 bundle 双平台字节一致） | PASS |
| dim2 | glue+全链 12 函数 live decompile 0 截断 0 空桩（伪代码 12 份落盘 ida/pseudocode/） | PASS |
| dim3 | 调用树/owner：dispatcher→glue→getter→converter→envelope→responder 全链 + writer×9 feeder 枚举（call-tree.json） | PASS |
| dim4 | DTO 字段级：envelope 6 字段 + snapshot 3 顶层 + status 10 字段 + paths 10 + autoSwitch 5 + apiConnectivity 2 + authRevision 2 + refreshReport 8 + AccountItem 25，类型/偏移/nullability 全表 | PASS |
| dim5 | 平台差异：win-only 注册（mac 零符号如实标注，不外推）；lastScanAt FILETIME→Unix 为 win 实现细节；launchAgentPath 字段为 mac 语义名（win 侧照常填充，值语义属上游跨平台模型） | PASS |
| dim6 | 实现侧验收 | BLANK（任务规定留白） |

## 7. 模块归属与 IDB 归位（红线24，已完成标注写）

- 归属证据链：① runtime-state 字符串簇（"Failed to persist refreshed runtime state"/"[AiMaMi][accounts] bootstrap snapshot cache write failed"/full_refresh/usage_refresh/mutation_refresh/"runtime-state-updated"）与模块路径串 `codexmate_lib::commands::accounts`（0x141aa18aa）在 .rdata 邻接聚簇；② 全部 writer feeder 在 commands/accounts（panic-Location 两跳真值注释实证：sub_140ED2FD0/sub_1403A94E0 = src/commands/accounts.rs）；③ 同地址簇（0x140EDxxxx）内已归属函数均为 accounts。
- IDB 写（原生 IDAPython API，rename 12 + 中文注释 12 + dirtree move 12 至 /codexmate_lib/commands/accounts/ + db_save ok=true；readback 12/12 abspath/name/cmt 全对，/vibe/ 零残留，accounts 目录 52 项）。
- 保持不动：sub_140D74C80（core/repository，Oct 5 已归属）；dispatcher/其余池化命令维持原状。

## 8. 残留 Unknown（如实）

- api.proxy 子结构（sub_140CE1C20）、tokenStatus.code 子结构（sub_140CE1630）、tokenMeta.status 4 变体名、serviceState 变体 0/1/2 名、apiConnectivity.usageStatus 变体 1 名、credentialGeneration 具体类型：未逐层下钻，标注 Unknown，不阻塞合同级实现（字段名与存在性已实证）。
- usedPercent=Option\<f64\> 与 remainingPercent=u32 的混合类型为反编译观测事实（float 写入器 sub_14167A480 vs u32 写入器），如实记录。
- 字符串簇中 "snapshotPath"/"items"/"apiRegistryItem"/"updatedAt"/"planStateSource"/"planStateUpdatedAt"/"subscriptionStateSource"/"subscriptionLastAttemptAt"/"subscriptionLastCheckedAt"/"subscriptionStateUpdatedAt"/"cachedPrimaryWindow"/"cachedSecondaryWindow" 属持久化/内部状态模型（state file schema），不在本命令 DTO 序列化面（本 DTO 用 primaryWindow/secondaryWindow 等），不混淆。


## runtime-state-updated 事件陈述纠正历史

- 本次仅纠正 Windows pre `51cb41b613aaa50f410d606e1c4271b1de34576b497a1cba0f734eba46279faf` 的事件外层陈述，不是产品行为变化；getter 的零参数、只读、`data=RuntimeDisplaySnapshot|null`、恒成功信封与既定门控全部保留。
- 授权来源：原主 transcript `<审计会话>.jsonl` L20827/L20833；用户于 `2026-10-16T17:50:58.749Z` 选择「定点更正确认」，所选说明授予 `EXPLICIT_OVERWRITE_CANONICAL`。实际回执行 SHA256=`ded9548fb61f4cec98ba18894d9750a4189713d1f151791d63fa9e38361ea304`。
- 原生证据与完整旧字节：`intermediate/aimami/1.2.7/windows-x64/version-delta/release-fd5f0c5aa7d5-event-correction-proof.json`（SHA256=`5ca8847ac0d53817082bbd09ee2869045628efdcdb550d37609c8d87dc75158d`）；同目录 `release-fd5f0c5aa7d5-event-correction-manifest.json` 绑定本次新指纹。全部路径相对共享根。
- 已证发送链 `0x140ED1DD0 → 0x140594C70 → 0x140012D40 → 0x1405028B0 → 0x140DDA7A0`；事件外层为 `{snapshot, source, accountKey?}`，`snapshot` 字段内才是原 Snapshot，`accountKey` 为 None 时省略整个键，不写 null。外层序列化器 `0x140DDA7A0` 与内层 `0x140CD7E50` 不混用；不补猜 source/accountKey 的未证类型或可空性，不据此宣称 pre→release 发送链相同。
- 以下仅保留旧表述历史，已被上文定点纠正，不再作为当前事件外层合同：
>   - 更新全局（drop 旧值 sub_140D86090 + memcpy 880B）后 emit tauri 事件 **`runtime-state-updated`**（串 0x141aa18d7，载荷=新 snapshot，sub_140594C70）
> - accounts: Vec\<AccountItem\>（@+736，384B/项；事件 "runtime-state-updated" 载荷共用同一序列化器）
