# interface — load_installed_skills (AiMaMi 1.1.1 win64)

session: <审计会话>
machine: <本地机器>
date: 2026-06-18

---

## IPC Command Interface

```
command: "load_installed_skills"
direction: Frontend → Backend (IPC invoke, no args)
response: CoreEnvelope<SkillListPayload>
```

### Frontend Call (TypeScript)

```typescript
// src/services/api/skills/skillsApi.tsx:18
loadInstalledSkills: () => invoke<CoreEnvelope<SkillListPayload>>(skillCommands.loadInstalledSkills)
```

### 无前端参数

`load_installed_skills` 不接受前端传入参数。内部通过 `ctx.repo_field` 读取 repo 路径（从 Tauri command context 注入）。

---

## 响应 DTO

### `CoreEnvelope<SkillListPayload>`

```typescript
// IPC envelope
{
  schemaVersion: string,     // IPC schema 版本
  success: boolean,          // true=成功, false=错误
  code: string,              // 错误 code（success 时空）
  message: string,           // 错误消息（success 时空）
  warnings: string[],        // 非阻断警告列表
  data: SkillListPayload,    // 成功时的 payload
}
```

### `SkillListPayload` (4 fields)

```typescript
{
  totalrootPath: string,    // 技能根目录绝对路径（已确认）
  // field 2-4: 未完全解析（field table @ 0x1412B7BF0）
  // descriptor_va: 0x1412B7BC5 "struct SkillListPayload with 4 elements"
}
```

### `SkillSnapshot` (outer, 6 fields)

序列化器 VA: `0x140197420` (`serialize_skill_snapshot_json_111`)

| 字段 | struct 偏移 | 类型 |
|------|------------|------|
| `writtenAt` | +0 | 时间戳 |
| `snapshotProgressive` | +16 | 增量标识 |
| `usageAnalytics` | +696 | 使用分析 |
| `mcpServers` | +792 | MCP server 列表 |
| `installedSkills` | +856 | `Vec<InstalledSkillSummary>` |
| `schemaVersion` | +920 | 版本字符串 |

### `InstalledSkillSummary` (8 fields)

序列化器 VA: `0x140172840` (size=0x34A1)
descriptor_va: `0x1412B7E2C` ("struct InstalledSkillSummary with 8 elements")
field_name_pool_va: `0x1412B7DFA`

| 字段 | 类型 | 确认方式 |
|------|------|---------|
| `title` | String | field_name_pool 确认 |
| `summary` | String | field_name_pool 确认 |
| `relativePath` | String | field_name_pool 确认 |
| `directoryPath` | String | field_name_pool 确认 |
| `skillFilePath` | String | field_name_pool 确认 |
| `usageStatus` | UsageStatus (enum) | `sub_140176DA0` 反序列化确认 |
| `usageLastError` | `Option<String>` | byte-wise @ 0x1401777A6 确认 |
| field_8 | 未解析 | field table @ 0x1412B7E58 |

---

## 错误 Codes

来源: `src/core/skills.rs` (@ 0x1412EC13E)

| 错误 | 触发条件 |
|------|---------|
| `"Skill not found: "` + id | skill 查找失败 |
| `"Backup not found: "` + id | 备份查找失败 |
| `"Must be a directory with SKILL.md or a SKILL.md file"` | 路径校验失败 |
| `"Directory must contain SKILL.md"` | 目录校验失败 |
| `"Backup corrupted: "` + detail | 备份损坏 |
| `"restore-rollback"` | 回滚路径标识 |

IPC envelope 错误 discriminator: `0x8000000000000005`
IPC envelope 成功 discriminator: `0x8000000000000025`

---

## 1.1.1 新增副作用（路径 B）

当 pending_auto_switch 挂起时，`load_installed_skills` 不再是纯读取：

1. **OnceLock 写入** — 通过 `sub_141095530` 获取 OnceLock slot 并写入 skills 数据
2. **快照文件写入** — `load_snapshot_read_only_111` 内部调用 `win32_file_write_bytes_111` 将序列化快照写入磁盘

此副作用在 Windows 1.0.9 不存在。实现者注意：`load_installed_skills` 在 Windows 1.1.1 非纯幂等。

---

## 注意事项

- 命令在 pending_auto_switch 挂起时（路径 B）返回结果与路径 A 不同，可能返回来自 DB 直读的数据而非 skill store snapshot
- 路径 B 触发 snapshot 文件写入，在并发场景可能引起文件锁竞争
- `poisonedLockAn` panic 字符串 (0x1412E6BB3) 出现在 `sub_1407DD060` 路径，表明 OnceLock 中毒失败会 panic
