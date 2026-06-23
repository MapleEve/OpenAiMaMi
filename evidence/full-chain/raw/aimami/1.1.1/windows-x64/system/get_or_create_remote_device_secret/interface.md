# interface — get_or_create_remote_device_secret (win64 1.1.1)

## Tauri Command 签名

```typescript
// Frontend invoke (from assets/index-DdcCOEJG.js line 86, fn Co)
await invoke("get_or_create_remote_device_secret")
// → returns: string  (65-char secret: "{hex32}-{hex32}")
// argKeys: []  (no arguments)
```

## Rust 命令签名（重构）

```rust
#[tauri::command]
async fn get_or_create_remote_device_secret(
    state: tauri::State<'_, AppState>,
) -> Result<String, CommandError>
```

## 输入 DTO

无参数。hotspot config 路径从 AppState 内嵌 HotspotConfigCtx（ptr at state+8）读取。

## 输出 DTO

| 情况 | 返回值 |
|---|---|
| secret 已存在 | `Ok(existing_secret_string)` |
| secret 不存在（新建） | `Ok("{hex32(uuid1)}-{hex32(uuid2)}")` — 65 char |
| remoteDeviceSecret 字段为空串 | 当作不存在，新建 |
| JSON 解析失败 | `Err(IoErr / ParseErr)` |
| 文件写入失败 | `Err(WriteErr)` |

## 写盘的 JSON schema

```json
{
  "hotspot": <object>,
  "usageRefreshInterval": <u64>,
  "deviceId": <string>,
  "remoteDeviceSecret": <string>,
  "notificationsSince": <timestamp>
}
```

## 副作用

- 可能写本机 hotspot config JSON 文件（路径来自 HotspotConfigCtx+72）
- 无 HTTP 请求
- 无 IPC emit
- 无 sidecar 调用
- 无数据库操作

## 1.0.9 vs 1.1.1 接口对比

| 维度 | 1.0.9 | 1.1.1 |
|---|---|---|
| argKeys | [] | [] （相同） |
| 返回类型 | Ok(String) | Ok(String) （相同） |
| secret 格式 | `{uuid_hyphen}-{uuid_hyphen}` (36+1+36=73) | `{hex32}-{hex32}` (32+1+32=65) |
| 写盘字段数 | 1 (deviceId only via dedicated fn) | 5 (hotspot/usageRefreshInterval/deviceId/remoteDeviceSecret/notificationsSince) |
| hotspot read | 不含 mysteryUnlock* 字段 | 含 mysteryUnlockGrants + mysteryUnlockedRoutes |
| executor | coroutine sub_1400AC510 | relay-state async executor 0x14078CD70 |
