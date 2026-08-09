# 指定三叶副作用目录 — AiMaMi 1.2.6 macOS x86_64

| Leaf | 副作用 | 直接证据叶 | 分类 | 验收风险 |
| --- | --- | --- | --- | --- |
| router readiness | 读取 auth、marker 与 backup；解析 snapshot | `load_auth_file 0x10023d510`、`backup_contains_usable_real_oauth 0x100735d30` | filesystem/parser read terminal | 文件缺失、损坏或 backup 不可用时，必须验证返回错误而非写回。 |
| runtime settings | 创建目录、写 runtime JSON、temporary file、sync、rename、失败清理 | `write_runtime_file 0x10047f700` → `write_atomic_with_mode 0x100a4ca40` → `replace_staged_file 0x100a4c840` | filesystem write/cleanup terminal | ⚠ 检查写失败后原目标未被替换且临时文件无残留。 |
| runtime settings | listener 控制、sidecar stdin、cleanup thread、状态 event | `update_settings_internal 0x10048ffb0`、`shutdown_standby_sidecar 0x10048fa80`、`emit_status 0x100474d50` | process/thread/event terminal | ⚠ 检查停止/清理线程与 event 失败时的可观测状态。 |
| start capture | 权限请求、workspace/config 读取、temporary sidecar config、sidecar 启动、watchdog、tray/overlay/audio | `start_capture 0x100476ac0` | system/filesystem/process/thread/UI terminal | ⚠ 检查权限拒绝和启动失败不会遗留 sidecar 或临时配置。 |
| start capture | 清理临时文件 | `remove_file` cleanup edge from `start_capture 0x100476ac0` | dangerous filesystem delete terminal | ⚠ 真实验收必须检查只删除临时目标，不误删用户文件。 |

本目录是静态副作用编目，不是运行时通过记录。`LIVE_REFERENCE_NOT_RUN`；dim6 保持该状态，implementation gate 保持 false。