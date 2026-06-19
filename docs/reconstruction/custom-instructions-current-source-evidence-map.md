# Custom Instructions 后端 current-source 证据映射

## 目的

本文只记录当前公开后端源码中 Custom Instructions 五个 IPC 命令的 raw/internal/full-chain 证据来源、当前 source owner 归属和可验证边界。本文不是 raw/internal 审计报告的替代品，也不声明闭源后端业务已经全量还原。

本文覆盖的 IPC 命令：

- `load_custom_instruction_state`
- `preview_custom_instruction_apply`
- `apply_custom_instruction`
- `clear_custom_instruction_block`
- `rollback_custom_instruction`

## 证据来源

| 证据路径 | 本文使用方式 |
| --- | --- |
| `evidence/full-chain/internal/audits/audits/windows-1.0.9-custom-instructions/gate-report.json` | 确认 Windows 1.0.9 custom-instructions 队列覆盖五个命令，并记录该队列是当前源码归档产品/本地行为，闭源后端 owner parity 使用 absence substitute，不得据此扩展为闭源后端全量还原声明。 |
| `evidence/full-chain/internal/audits/audits/macos-1.0.9-custom-instructions/gate-report.json` | 确认 macOS 侧存在同名 custom-instructions gate-report；本文只用它作为 full-chain/internal 平台证据入口，不把平台差异推导为当前后端副作用。 |
| `evidence/full-chain/raw/aimami/1.0.9/windows/custom-instructions/load_custom_instruction_state/manifest.json` | 确认 load state 命令 leaf 存在；当前公开后端对应为读取全局文件、解析受控块、读取 history 并返回 state payload。 |
| `evidence/full-chain/raw/aimami/1.0.9/windows/custom-instructions/preview_custom_instruction_apply/manifest.json` | 确认 preview apply 命令 leaf 存在；当前公开后端对应为校验输入、解析现有受控块、组合预览结果，不写入文件。 |
| `evidence/full-chain/raw/aimami/1.0.9/windows/custom-instructions/apply_custom_instruction/manifest.json` | 确认 apply 命令 leaf 存在；当前公开后端对应为保存 history snapshot、写入全局文件并返回新的 state payload。 |
| `evidence/full-chain/raw/aimami/1.0.9/windows/custom-instructions/clear_custom_instruction_block/manifest.json` | 确认 clear 命令 leaf 存在；当前公开后端对应为移除当前受控块，必要时删除全局文件，并保存 history snapshot。 |
| `evidence/full-chain/raw/aimami/1.0.9/windows/custom-instructions/rollback_custom_instruction/manifest.json` | 确认 rollback 命令 leaf 存在；当前公开后端对应为按 history id 找回 snapshot，写回或删除全局文件，并记录 rollback snapshot。 |

## 当前后端 source owner

| owner | 当前源码路径 | 可验证归属 |
| --- | --- | --- |
| IPC 注册 | `src-tauri/src/lib.rs` | `tauri::generate_handler!` 注册五个 custom-instructions command。 |
| command adapter | `src-tauri/src/commands/custom_instructions.rs` | 只负责 Tauri 参数反序列化、获取 `State<Mutex<Repository>>`、调用 usecase、封装 `CoreEnvelope::ok`。 |
| usecase | `src-tauri/src/application/usecase/custom_instructions.rs` | owning `load_state`、`preview_apply`、`apply`、`clear_block`、`rollback` 用户动作事务；编排 repository helper、core parser、history snapshot 与 DTO 映射。 |
| repository | `src-tauri/src/repository/custom_instructions.rs` | owning 全局文件和 custom-instructions history JSON 的窄读写接口；通过 repository file system adapter 读写，不 owning parser 或 IPC DTO。 |
| core parser | `src-tauri/src/core/parser/custom_instructions.rs` | owning 受控块 marker、parse、保护态检查、内容组合、清理和输入校验。 |
| core model | `src-tauri/src/core/model/custom_instructions.rs` | owning protection state、history action、parsed block、history snapshot 和 history limit 领域模型。 |
| contracts | `src-tauri/src/contracts/custom_instructions.rs` | owning 可序列化 IPC DTO：current state、history entry、state payload、preview payload 和 protection/action 枚举。 |

## 当前源码闭环

| 命令 | 当前后端闭环 |
| --- | --- |
| `load_custom_instruction_state` | command 调 `usecase::custom_instructions::load_state`；usecase 调 repository `ensure_storage`、`read_global_file`、`load_history`，并用 core parser `parse_managed_block` 生成 current/history payload。 |
| `preview_custom_instruction_apply` | command 调 `preview_apply`；usecase 校验 managed content，解析全局文件，检查 protected 状态，调用 core parser 组合预览内容，只返回 preview payload，不写全局文件或 history。 |
| `apply_custom_instruction` | command 传入 content/template/source；usecase 校验并组合新内容，内容变化时保存 `Apply` history snapshot，再由 repository 写入全局文件，最后重新加载 state。 |
| `clear_custom_instruction_block` | command 调 `clear_block`；usecase 解析受控块并检查保护态，存在受控块时保存 `Clear` history snapshot，再写回清理后的文件或删除空文件。 |
| `rollback_custom_instruction` | command 传入 history id；usecase 从 repository 查找 snapshot，保存当前内容的 `Rollback` snapshot，再把目标 snapshot 写回全局文件或删除空文件。 |

## 已覆盖边界

- 当前公开后端覆盖 Custom Instructions 的 command/usecase/repository/core parser/core model/contracts 分层 owner。
- 当前公开后端覆盖全局文件受控块的 marker、parse、protected/unmanaged/ready 状态、preview/apply/clear/rollback 和 history JSON 读写。
- 当前公开后端通过 `Repository` 暴露的 file system adapter 完成文件读写，repository 不保存跨命令业务状态。
- 当前公开后端 DTO 与 领域模型 分离：contracts 只表达 IPC payload，core model 表达领域状态和 history snapshot。
- 当前 validator 入口是 `npm run validate:backend-custom-instructions-owner`，聚合入口是 `npm run validate:backend`。

## 前端 E2E mock 合同

- `src/mocks/fixtures/commands.ts` 为五个 custom-instructions IPC 提供专用 handler，不再回退到默认 mock。
- mock state 覆盖 `load_custom_instruction_state`、`preview_custom_instruction_apply`、`apply_custom_instruction`、`clear_custom_instruction_block` 和 `rollback_custom_instruction` 的 state/preview payload 形状。
- `preview_custom_instruction_apply` 只返回预览 payload，不写入 mock state；`apply_custom_instruction`、`clear_custom_instruction_block` 和 `rollback_custom_instruction` 通过 mock state 镜像用户动作结果。
- `scripts/validate-e2e-mocks.mjs` 验证五个命令的专用 handler、service wrapper、mutation hook 和 stateful mock 合同；聚合入口是 `npm run validate:frontend` 与 `npm run validate:all`。

## 未声明边界

- 不声明闭源后端已经全量还原；本文只约束当前公开后端已有能力和 owner 边界。
- 不声明 raw/internal gate 已被本文替代；raw/internal/full-chain 证据仍以 evidence 目录中的报告和 manifest 为准。
- 不声明平台级副作用、后台 watcher、daemon reload、外部进程、网络请求、通知或托盘行为属于 Custom Instructions 后端命令。
- 不声明前端页面、TanStack cache 或文案链路由本文闭合；这些属于前端 owner 和其他 validator。本文只登记 custom-instructions E2E mock 合同已经由 `scripts/validate-e2e-mocks.mjs` 验证。
- 不处理 voice 边界。

## validator 接入

`scripts/validate-backend-custom-instructions-owner.mjs` 必须验证：

- 本文档存在，并列出 raw/internal 证据路径、当前源码 owner 路径、五个命令、已覆盖边界和未声明边界。
- `docs/reconstruction/source-map.md` 与 `docs/reconstruction/README.md` 注册本文档。
- command、usecase、repository、core parser、core model、contracts 等关键 Rust owner 文件存在。
- Windows/macOS custom-instructions internal gate-report 存在。
- Windows custom-instructions 五个 raw manifest 存在。
- 当前源码保持 command 薄 adapter、usecase owning 用户动作事务、core owning marker/parser/model、repository 只 owning 全局文件和 history JSON 读写。
- `scripts/validate-e2e-mocks.mjs` 必须验证 custom-instructions 五个 IPC 均绑定专用 mock handler，且 service wrapper、mutation hook 和 stateful mock 合同未回退到默认 handler。
