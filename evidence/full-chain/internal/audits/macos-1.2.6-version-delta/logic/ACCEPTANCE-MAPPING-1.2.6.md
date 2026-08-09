# 三叶 C5 验收映射草案

本页是未执行的 acceptance draft，不是运行时通过记录。三叶均为 `consumerStartReady=false`，因此不得据此开始实现。

| Leaf | 未来验收条件 | 必要观察 | 当前状态 |
| --- | --- | --- | --- |
| `get_codex_router_auth_readiness` | 有/无可用 real OAuth、可恢复 backup、no-account mode 各自返回一致状态 | response data 字段、CoreError、无意外持久化 | draft only；x64 owner partial、ARM64/运行时未证 |
| `update_voice_runtime_settings` | enabled/shortcut/model/mode 更新后配置、监听器、sidecar 和状态事件符合合同；失败不留下错误配置 | config before/after、sidecar 生命周期、事件、rollback/error envelope | draft only；递归 owner/error/ARM64 未证 |
| `start_voice_capture` | 权限拒绝、缺配置、standby 成功、legacy fallback、启动失败 cleanup 五类路径可判定 | temporary file、sidecar/watchdog、tray/overlay/audio、状态事件、cleanup residue | draft only；运行时未执行，严禁将静态 `remove_file` 当 cleanup 成功证明 |

需要同平台 ARM64 runtime harness、可审计的 fixture 结果和消费者实现测试后，dim6 才可能升级。本页维持 dim6=`FAIL`。