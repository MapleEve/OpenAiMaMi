# get_relay_provider_quota — 逻辑文档

**版本**: 1.1.1 windows-x64 新增命令
**gate**: strictImplementationUse_candidate
**session_extension**: wf-aimami111-delta-20260617（截断解决版）
**binary SHA256**: d24e429ab16a9b683c1c23212555c7d1d59a3e2e6ee24a9f3a16acd7f8231610

## IPC 合约

```
command: "get_relay_provider_quota"
params:
  manager: String
  providerId: String
response: RelayProviderQuota (232B struct, field names stripped — genuine ceiling)
errors: 10 paths catalogued
```

## 调用链

```
IPC dispatch
→ get_relay_provider_quota_coroutine_sys @ 0x14093DEB0 (4746B)
  → relay_quota_state_lookup_sys @ 0x1406DB960
  → relay_quota_item_clone_sys @ 0x14065F950
  → relay_keychain_lookup_for_quota_sys @ 0x1402EE7C0 (reads secrets.json + SHA-256)
  → relay_quota_http_request_builder_sys @ 0x1408DBB30 (15931B, 47 callees)
    → relay_quota_provider_url_classifier_sys @ 0x1406D5620  [NEW — 11 provider URL router]
    → relay_quota_date_header_build_sys @ 0x1406D5B10
    → relay_quota_extra_headers_validate_sys @ 0x1406D4BC0
    → relay_quota_header_line_trim_sys @ 0x1406D3F90
  → [HTTP request execution]
  → relay_quota_http_response_state_machine_sys @ 0x1408E34D0  [NEW]
    → relay_minimax_quota_response_parser_sys @ 0x1408E2820  [NEW — MiniMax 专用]
  → relay_http_request_cleanup_sys @ 0x140921FC0  [NEW — Arc deref + free]
```

## Provider URL 路由（11 providers）

由 relay_quota_provider_url_classifier_sys@0x1406D5620 处理：

| 端点字符串 | VA |
|---|---|
| Sub2API /v1/usage | 0x1412fc127 |
| /api/usage/token | 0x1412fc138 |
| balance/v1/usage | 0x1412fc316 |
| https://api.kimi.com/coding/v1/usages | 0x1412fc828 |
| minimax-coding-plan tag | 0x1412fca31 |

## MiniMax 专用 Response 字段

relay_minimax_quota_response_parser_sys 解析：

```
{
  base_resp: {
    status_code: i64,
    status_msg: String
  },
  model_remains[]: {
    model_name: String,         // checked == 'general'
    current_interval_remaining_percent: Option<f64>,
    current_weekly_status: bool,
    current_weekly_remaining_percent: Option<f64>
  }
}
```

## OpenAI Rate Limit 字段 schema（@0x1412e87d0）

```
limit / hard_limit / remaining / remaining_requests / used / used_requests /
limit_window_seconds / window_seconds / period_seconds / reset_at / resets_at
```

## RelayProviderQuota struct（stride=232B，field names stripped）

字段 offset/type 已逆（通过 clone 分析）；field 语义标签为推断（genuine ceiling — stripped PE）。

## WIN 平台特有

- InterlockedCompareExchange8（vs mac parking_lot）
- WakeByAddressSingle
- USERNAME env var（vs USER on mac）
- 额外 Headers 无效错误字符串（中文，WIN binary 内）
- InterlockedDecrement64 in relay_http_request_cleanup_sys

## 副作用

1. 读 secrets.json
2. 读 env var USER/USERNAME
3. 计算 SHA-256
4. HTTP request build（per-provider 端点）
5. HTTP quota 端点 fetch
6. MiniMax API response parse（for MiniMax providers）

## gate 升级阻塞项（mac 侧）

- mac quota Vec stride 未在本 session 确认（pending mac producer）
- RelayProviderQuota exact field names stripped（genuine ceiling，已接受）
- Sub2API/novita/openrouter exact quota URL 构建未完整追踪（URL pattern 已从字符串确认）
