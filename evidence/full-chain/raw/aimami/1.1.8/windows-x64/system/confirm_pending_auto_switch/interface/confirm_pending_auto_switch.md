# interface — confirm_pending_auto_switch (AiMaMi 1.1.8, windows-x64)

## 命令标识

- IPC 命令名: `confirm_pending_auto_switch`（Tauri `#[command]`，字符串常量 `aConfirmPending` @0x14133b457，长度 27）
- 配对命令: `confirm_pending_auto_switch_and_restart_codex`（同 module，owner_va=0x1403cf5b0，本轮未展开，属于 dispatcher 内联 match-arm 而非独立包装函数，见 owner-map-118.jsonl row 12）
- owner_va: `0x1403ebe20`（本轮已 rename `confirm_pending_auto_switch_owner_sys`，size `0x49f`）

## argKeys（Confirmed）

- `argKeys=[]`（零参命令），来源 `raw/aimami/1.1.8/windows-x64/frontend/ipc-contracts.jsonl` 第 103 行，前端 wrapper `confirmPendingAutoSwitch:()=>te("confirm_pending_auto_switch")`。
- 与 mac 1.1.1（`argKeys=[] (zero-arity)`，见 `REVERSE-STATUS.md` 2256 行）及 win 1.0.9/1.1.1 既有记录一致，跨版本零参形状未变。

## 副作用（Confirmed / Inferred 混合，见标注）

1. **Confirmed（1.0.9 windows 基线，引自 `win-shard-1.json` 所引用的 `raw/aimami/1.0.9/windows/auto-switch/confirm_pending_auto_switch/AI.md`）**: 提升 `pendingSwitchAccountKey`→`activeAccountKey`、写 `switchedAccountKey`、清空 `pendingSwitchAccountKey`；1.0.9 call_tree_depth=5，终端叶子 `sub_140563ED0`（promote）/`WakeByAddressSingle`/`tokio_task_spawn`/`tauri_ipc_resolve_sys`。本轮未在 1.1.8 二进制里逐字节重新验证这组 key 名称本身（stripped 符号表限制），但作为既有基线行为记录于此，供后续批次比对。
2. **Confirmed**: 内部经 tracing-instrument 包装（`sub_140421360`）调用一个捕获 6 个 `Arc<T>` 共享状态资源的 async 任务体（`sub_140870B80`），资源偏移 136/312/320/328/336/344。
3. **Inferred**: 这 6 个资源语义上对应 `.manage()` 注册的 `Repository`/`RelayManager`/`PluginRegistry` 类共享状态（依据 `THREAD-MODEL.md` 记录的 3 类 `.manage()` state 外推，未做逐偏移类型恢复）。
4. **Confirmed（持久化面）**: `AutoSwitchSnoozeRecord` 结构体（2 处字符串命中）与 `auto-switch-snooze.json` 路径（路径表字符串 @0x14132c05c）在 1.1.8 win 二进制中确认存在，`xrefs_to` 确认该路径表仅被 `sub_1402868C0` 所在函数簇引用；与 `intermediate/aimami/1.1.8/windows-x64/version-delta/buckets/win-shard-1.json` 记录一致（该文件/类型自 1.0.9 起已存在，非本版本新增）。**Unknown**: 本命令这次调用具体是读取/校验还是写入该文件，未定位到独立的 `fs::write` 调用点，不声明 `persistence_commit`。
5. **Inferred**: `sub_1402868C0` 内的 `"mutation"` 标记分支（15 callee 的仓储-加锁-变更包装器）暗示存在一次仓储层写操作探测，且该链路（`sub_1402868C0`→`sub_140344B00`→`sub_1400603E0`）相对 1.0.9 简单 5 叶子树是**新增的复杂度**（见"与 1.0.9 基线的接口差异"）。
6. **Unknown**: 是否存在与 mac 侧 1.1.8 已确认的"候选账号凭据新鲜度校验"（`load_auth_file`/`api_proxy_config`/`ensure_fresh_token`/`clear_auto_switch_snooze`）等价的 win 侧副作用——6 个相关字面量模式在 win 1.1.8 二进制全部 0 命中，无法确认或证伪。

## 错误路径（Confirmed 字符串）

| 字符串 | 地址 | 语义 |
|---|---|---|
| `poisoned lock: another task failed inside` | 0x141322060 | 共享状态锁（Mutex/RwLock）被污染守卫，说明本命令与其它任务共享账号/仓储状态 |
| `a Display implementation returned an error unexpectedly`（出现两次: 0x14132c4c0, 0x141358000） | — | 通用 `fmt::Display` 格式化失败兜底（Rust std/anyhow 样板，非命令专属） |
| `resolver consumed` | 0x141358298 | IPC 异步命令 resolver 一次性消费守卫（`sub_1407A7610` 内，通用运行时基础设施） |
| `called Result::unwrap() on an Err value` | 0x141358190 | 防御性断言，正常路径不可达（`sub_1407A7610` 内部不变式检查） |
| `mutation` | 0x1413352dd | 一次仓储写操作/事务的结果标签（`sub_1402868C0` 内），语义 Inferred |

## response 字段

- discriminant 层面 Confirmed：owner 顶层结果槽 `v24` 的判别值 `3` 对应"已解析成功值"快速路径（走 `sub_14127A550` + 直接 `sub_1407A7610`）；`sub_1402868C0`/`sub_1407B6C80` 路径写入判别值 `2`（Err 变体）。
- 具体成功态 payload 的字段级结构（是否为 `Result<(), String>` 还是携带候选账号/switch 状态的结构体）本轮**未**逐字节展开，Unknown——需要在后续批次交叉比对前端 TS 类型定义（4 角度中的前端 CCF 角度，本轮只做了后端角度）或对 `sub_14127A550`/`sub_1402868C0` 内的 OWORD payload 布局做进一步类型恢复。

## 与 1.0.9 基线的接口差异

- 前端接口形状（零参、wrapper 名 `confirmPendingAutoSwitch`）三版本（1.0.9/1.1.1/1.1.8）一致，无变化（`cmd-same.win.txt`/`cmd-same.mac.txt` 均命中该命令）。
- **win 侧确认 delta（call-chain 复杂度增加）**: 1.1.8 win 的 `sub_1402868C0`(15 callee 加锁包装)→`sub_140344B00`(24 callee 反序列化/错误格式化)→`sub_1400603E0`(8 路 error-Display) 这条链路，在 1.0.9 win 基线的 5 叶子简单树描述里完全不存在；本轮独立 decompile 复核并与同 session 更早的 `win-shard-1.json` 桶产物逐字节交叉验证一致（见 evidence.md Confirmed #6）。
- mac 侧本 session 已确认 1.1.8 相对 1.0.9 存在后端 delta（候选凭据新鲜度校验新增）；**win 侧本轮无法用同一方法确认该 gate 是否为同一变更的 Windows 对应实现**（stripped 符号表是真实的交叉验证过的能力边界，不是搜索失败），但上面这条独立确认的 call-chain 复杂度增加本身已足以支持"delta"判定，不依赖对 mac 特定错误串的复现。
