# voice current-source evidence map

本文只登记 voice 当前公开源码与 owner 边界。voice 当前仅为空骨架、合同清单和中文边界说明；不声明功能恢复，不声明录音、快捷键、语音识别、系统权限、后台任务或 IPC 能力已经恢复。

## 当前结论

- voice 只保留后端四层空骨架，用于占位 owner 边界和后续补证位置。
- voice 不接后端命令、不接 IPC、不接运行链路。
- voice 不新增前端 route、service IPC wrapper、mock handler 或 runtime 启动链。
- 本文不替代 raw/internal gate，不作为双平台完整 leaf、可执行功能或闭源业务恢复声明。

## 合同清单

| 路径 | 当前 owner | 合同清单 | 中文边界说明 |
| --- | --- | --- | --- |
| `src-tauri/src/commands/voice.rs` | command adapter 占位 | `VoiceCommandBoundary`、`VoiceCommandPort` | 只保留参数接收和用例调度层的边界说明；当前没有 Tauri 命令。 |
| `src-tauri/src/application/usecase/voice.rs` | usecase 占位 | `VoiceUseCase`、`VoiceUseCaseBoundary` | 只保留用户动作事务边界；当前没有可执行流程。 |
| `src-tauri/src/contracts/voice.rs` | contract 占位 | `VoiceContractBoundary`、`VoiceContractPlaceholder` | 只保留跨层类型边界；当前没有对外 DTO 承诺。 |
| `src-tauri/src/repository/voice.rs` | repository 占位 | `VoiceRepository`、`VoiceRepositoryBoundary` | 只保留仓储 owner 边界；当前不读写文件事实。 |
| `src-tauri/src/lib.rs` | Tauri 注册表 | 无 voice command | command registry 中不注册 voice，也不把 voice 放入 handler 表。 |

## 未声明边界

- 不声明 voice 已接入后端命令、IPC、事件订阅、事件发送、后台任务、平台能力或外部进程。
- 不声明 voice 已接入 accounts、relay、mcp、daemon、runtime 或 platform 相关链路。
- 不声明 voice 拥有录音、语音识别、快捷键、设备权限、托盘、窗口或通知能力。
- 不声明 voice 前端入口、路由、服务门面、E2E mock 或运行时初始化已经接入。

## 验证入口

- `scripts/validate-backend-voice-owner.mjs` 验证四个 Rust 空骨架、Tauri 注册表和本文边界。
- `npm run validate:backend-voice-owner` 单独执行 voice 后端 owner 验证。
- `npm run validate:backend` 聚合执行 voice 后端 owner 验证。
