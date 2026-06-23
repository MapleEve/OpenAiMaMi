# owner — load_installed_skills (AiMaMi 1.1.1 win64)

session: <审计会话>
machine: <本地机器>
date: 2026-06-18
delta_class: integrity_recovered
baseline: 1.0.9
sha: d24e429a

---

## 身份

| 属性 | 值 |
|------|-----|
| 函数名 | `load_installed_skills_cmd_111` (IDB已重命名) |
| VA | `0x14002A100` |
| size | `0x38F` bytes (911 bytes) |
| IPC 命令字符串 | `"load_installed_skills"` (@ 0x1412AC157, len=21) |
| repo 字段标识 | `"repo"` (@ 0x1412AC6D1, len=4) |
| IPC dispatch xref | `0x14002A180` (data ref in command dispatch table) |

---

## 架构位置

```
Frontend: skillsApi.loadInstalledSkills()
  → invoke<CoreEnvelope<SkillListPayload>>("load_installed_skills")
  → Tauri IPC → 命令分发表 @ 0x14002A180
  → load_installed_skills_cmd_111  [0x14002A100]  ← owner
```

---

## 双路径摘要（1.1.1 新增的两条执行路径）

### 路径 A：pending_auto_switch 无挂起（正常路径）

1. `pending_auto_switch_state_lock_acquire_111` 返回 0
2. 进入 `query_installed_skills_with_repo_111` 读取 skill store
3. 结果序列化 → IPC 响应

### 路径 B：pending_auto_switch 挂起中（1.1.1 新增路径）

1. `pending_auto_switch_state_lock_acquire_111` 返回非 0（auto-switch 进行中）
2. 调用 `sub_1407DD060`（bootstrap-cache write-back core）
3. `sub_1407DD060` 内部：
   - 调用 `skill_list_db_query_111` (0x1406F0D80) 直接从 DB 读技能列表
   - 若结果 discriminant==10（成功）：
     - 通过 `sub_141095530` 获取 OnceLock slot
     - 调用 `load_snapshot_read_only_111` (0x1401B4A90) 写回 OnceLock cache + 触发 snapshot 文件写入
   - 若结果 discriminant≠10（失败）：通过 `sub_140243FC0` 转换错误，drop 结果
4. 返回（不经过 query_installed_skills_with_repo_111 路径）

---

## 相对 1.0.9 的变更

| 变更项 | 1.0.9 | 1.1.1 |
|--------|-------|-------|
| `pending_auto_switch_state_lock_acquire_111` | 不存在 | 第一个调用，depth=1 |
| `sub_1407DD060` (bootstrap cache write-back) | 不存在 | 路径 B 新增 |
| skill store 读取是否受保护 | 无锁 | 受 pending_auto_switch spinlock 保护 |
| Windows OnceLock 写回 | 不存在 | 路径 B 新增 side effect |
| snapshot 文件写入 | 不存在（Windows 1.0.9 read-only） | 路径 B 通过 `win32_file_write_bytes_111` 写入 |
| DTO 结构 | 同 | 同 |
| IPC envelope | 同 | 同 |

---

## Dim1 — 前端 CCF 确认

- `src/services/api/skills/skillsApi.tsx:8` → `loadInstalledSkills: "load_installed_skills"`
- `src/services/api/skills/skillsApi.tsx:18` → `invoke<CoreEnvelope<SkillListPayload>>(skillCommands.loadInstalledSkills)` — 无参数（read command）
- 测试文件同步确认：`src/services/api.test.tsx:263`

dim1: PASS — 前端 invoke 与 IPC 命令字对齐，无 argKeys（符合 read-only command 模式）

---

## Dim2 — argKeys 与 extractor

| arg | type | 提取位置 |
|-----|------|---------|
| 无入参 | — | 命令不接受前端参数 |
| `repo` (内部字段) | 从 ctx 偏移读取 | `ctx.repo_field`（`aRepo` @ 0x1412AC6D1） |

dim2: PASS — 命令无前端 argKey；内部 repo 字段从 ctx 读取。

---

## Dim4 — DTO 与 struct 字段

见 pseudocode.md § DTO 章节（InstalledSkillSummary 8字段、SkillListPayload 4字段、SkillSnapshot 6字段）。

dim4: PASS（InstalledSkillSummary 8 字段与 1.0.9 一致，SkillListPayload 3个字段未完全解析 — 见 gate-report pending）

---

## Dim5 — 同平台 gate

此文件是 windows-x64 专项逆向，不与 mac 混用。
dim5: PASS

---

## IDB inline 注释（已完成）

```
rename: sub_14002A100 → load_installed_skills_cmd_111
set_comments @ 0x14002A100: "gold-leaf for load_installed_skills; sha d24e429a; session <审计会话>; not gate promotion"
```
