# 三叶接口、错误与副作用边界

> 本页只登记直接前端合同与 x86_64 IDA 可证明的 decode、Result、filesystem/process/event 边界。`LIVE_REFERENCE_NOT_RUN`，不把 Tauri callback serializer 或系统服务反推成未证实的 JSON/ABI 合同。

| Leaf | 前端输入、required/default/nullable | 成功与错误 envelope | 副作用与 terminal | 结论 |
| --- | --- | --- | --- | --- |
| `get_codex_router_auth_readiness` | 零业务参数调用；没有前端 nullable/default 输入。前端消费目标包含 `willUseNoAccountMode`。 | dispatcher 从 State 取得 relay state，`readiness` 与 snapshot 的成功结果经 `CoreEnvelope::ok 0x1005ac480` 和 `InvokeResolver::respond`；State/CommandArg 失败经 `InvokeResolver::return_result 0x10026b540`。具体 JSON 字段属于 Tauri serializer external terminal。 | `load_auth_file 0x10023d510` 使用 `std::fs::read_to_string` + serde；backup helper 使用 `std::fs::read` + serde；OAuth/marker/snapshot 为 auth-domain/filesystem terminal。 | x86_64 静态接口和错误路由已闭合；不提升运行时 gate。 |
| `update_voice_runtime_settings` | 前端参数键顺序为 `enabled`、`shortcut`、`speechModel`、`processingMode`、`processingModeId`。`enabled` 直接提供；其余四键均以 `??null` 传入。dispatcher 对五项逐个 `CommandArg::from_command`，最后一项为 16-byte payload。 | 每个 decode failure 都直接进入 `return_result`；handler/core 的业务 `Result` 成功由 `CoreEnvelope::ok` 包装、失败转 responder 错误输入并由 `respond` 送往 Tauri callback。callback 的 JSON 序列化是 external terminal。 | 写 `voice-runtime.json`：ensure directory → serialize → temporary write → `write_all` → `sync_data` → `rename`；失败回收 staged file。管理 listener、sidecar stdin/cleanup thread、状态 event。 | x86_64 静态 DTO/default、decode、错误分流与副作用边界已闭合；不声明端到端业务 transaction rollback。 |
| `start_voice_capture` | 前端零业务参数调用；没有前端 nullable/default 输入。 | command wrapper 调用 `start_capture`，成功经 `CoreEnvelope::ok`；core `Result` 的具体 error JSON 由 Tauri callback serializer external terminal 处理。 | 权限同步、workspace/config filesystem 访问、temporary config `OpenOptions`/`write_all`、sidecar spawn/standby/legacy、watchdog、tray/overlay/audio、status event；cleanup `remove_file` 为危险删除副作用。 | x86_64 静态入口、Result 边界和副作用链已闭合；实时权限/sidecar outcome 未运行。 |

## 错误边界裁定

1. **Tauri decode**：`update_voice_runtime_settings` 的五个 decode 失败分支均可定位到 `return_result`。这证明错误不会继续进入业务 handler；不声称 callback 生成的 JSON code/message/data 字段。
2. **业务 Result**：三个 command wrapper/handler 都把 core `Result` 接到 `CoreEnvelope::ok` 或 responder 错误输入。`CoreEnvelope::ok` 与 `return_result` 是已证实 concrete leaf，不是凭字符串推断。
3. **filesystem**：auth 读取、backup 读取、runtime temporary write、sync、rename 和 cleanup 都以 `Result` 或 OS error 作为 terminal；没有把系统 IO 错误改写成伪造的应用 DTO。
4. **process/thread/event**：sidecar stdin/spawn、cleanup/watchdog thread、Tauri `Emitter::emit` 分别是 process/thread/event terminal。未运行真实 App，故不把实际 sidecar 状态或 event delivery 宣称为已验证。

## 收口规则

- `accepted_unknown=[]`；本页不使用 `accepted_unknown`，故无缺失 `recovery_attempts`。
- ARM64 地址 parity 是 scope note；macOS x86_64 是本轮 sidecar 行为证据。Windows 不从本页外推。
- `LIVE_REFERENCE_NOT_RUN`；所有 implementation gate 字段保持 false。