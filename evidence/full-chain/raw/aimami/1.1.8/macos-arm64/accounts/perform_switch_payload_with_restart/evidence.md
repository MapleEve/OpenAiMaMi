# evidence — perform_switch_payload_with_restart (mac 1.1.8) — BACKEND-ONLY (角度A/C, NEW-in-1.1.8)



## Confirmed (来自 1.1.8 反编译)
- owner 签名: `_QWORD *__fastcall codexmate_lib::commands::accounts::perform_switch_payload_with_restart::h96604dd095920ea0(`
- call-tree: max_depth=8, pseudocode 节点=36(真实 decompile 落盘)。
- 关键字符串:
- `
                   `
- `
                     `
- ` | `
- `Candidate account no longer exists locally`
- `Candidate token is no longer valid, please try another account`
- `No pending auto-switch request`
- `RUNTIME_REFRESH_FAILED_AFTER_SWITCH`
- `poisoned lock: another task failed inside`

## Inferred
- 行为: 执行账号切换 payload 并重启 Codex:switch_account_and_restart_codex 的后端同步实现,应用切换+触发重启。
- 接口: switch payload
- 副作用: 持久化切换+进程重启

## Delta vs 1.0.9 / 1.1.1
- NEW-in-1.1.8 backend-only(不在 1.1.1 已characterized 的 31+2 集内)。account switch 后端同步实现。
- 分类:backend-only characterized(角度A 符号枚举 + 角度C 已逆),不占前端 131 delta 分母。
