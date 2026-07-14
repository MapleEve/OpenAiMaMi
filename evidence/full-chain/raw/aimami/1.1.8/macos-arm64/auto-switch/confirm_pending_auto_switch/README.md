# confirm_pending_auto_switch — AiMaMi 1.1.8 macOS (universal, x86_64 slice)

同步时间: 2026-07-13
会话: <审计会话> (machine: <本地机器>)
最终结论: strictImplementationUse (dim1-4 accepted, dim5 partial macOS-only, dim6 empty — 未达 readyToImplement)
对比基线: raw/aimami/1.0.9/macos/auto-switch/confirm_pending_auto_switch

## 一句话结论
1.1.8 在"用户确认此前建议的账号自动切换"这条路径里，新增了一整套"候选凭证新鲜度校验闸门"：重新同步本地状态、按 key 在候选列表里重新定位目标账号、必要时对该账号做一次真实的 OAuth token 刷新（HTTPS 请求 auth.openai.com），刷新成功才继续原有的 switch_account 动作；任何一步失败都会清掉 auto-switch 的 snooze 状态并返回三条全新的用户可见错误文案。1.0.9 里这条命令没有这套闸门，也没有任何网络请求。

## Backend Control Flow（1.1.8）
1. `load_pending_auto_switch` — 读 `pending_auto_switch.json`（与 1.0.9 相同，未变）。
   - None → `Err("No pending auto-switch request")`（未变）。
2. Some → **新增闸门**：
   a. `load_local_state_synced`（新调用点；内部还带一个"守护进程自愈"子分支：`check_daemon_state` → `resolve_daemon_binary` → `install_daemon`，失败只写内部诊断串，不影响本命令结果）。若它自己返回错误，直接转发（新行为）。
   b. 在刚同步好的候选列表（336 字节步长）里按 key 线性查找目标账号；找不到 → 新错误 `"Candidate account no longer exists locally"`。
   c. 找到后按两个打包字段判断是否需要新鲜度复核：
      - 需要：先看本地是否已有该候选的 snapshot 文件；没有则 `load_auth_file` → `api_proxy_config` → `oauth_refresh::ensure_fresh_token`（真实 HTTPS 请求 `https://auth.openai.com/oauth/token`，`User-Agent: AiMaMi/1.1.8`）→ 失败则清 snooze + 新错误 `"Candidate token is no longer valid, please try another account"`；成功则继续。
      - 不需要（else 分支）：直接清 snooze + 新错误 `"Candidate account credentials have expired since the suggestion was made"`，不做任何刷新尝试。
   d. 通过闸门后调用 `switch_account`（核心动作未变：读 registry → 建目录 → 拷贝快照 → 写回 registry → 封装成功响应）。
3. Token 刷新成功时，新的 auth 文件会通过 `relay::atomic_write::write_atomic`（temp 文件 + fsync + `rename(2)` 原子写）写回磁盘 — 这是 1.0.9 完全没有的持久化副作用。

## Error（新增 3 条 + 1 条未变）
- `"No pending auto-switch request"`（30B，未变）
- `"Candidate account no longer exists locally"`（42B，新增）
- `"Candidate account credentials have expired since the suggestion was made"`（72B，新增）
- `"Candidate token is no longer valid, please try another account"`（62B，新增）

## Gate Leaf
dim1-4: accepted。dim5: macOS 侧本轮确认，Windows 侧未在本轮交叉核对（见 interface.md）。dim6: empty。
call-tree 深度达到 3 层，几乎每条边都有明确 terminated_reason（fs 读写、HTTPS 外呼、JSON 序列化、cleanup），无 accepted_unknown / genuine_ceiling 声明。

详见 `evidence.md`（Confirmed/Inferred/Unknown 三段）、`interface.md`（接口与副作用全貌）、`ida/pseudocode/*.c`（owner + 6 个关键 callee 的反编译）、`call-trees/confirm_pending_auto_switch.jsonl`（55 条边的完整调用树）。
