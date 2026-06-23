# test_relay_draft_stream — Owner (Windows x64)

## 定位链

| 步骤 | 地址 | 内容 |
|------|------|------|
| 字符串 | `0x1412fa9c8` | `"test_relay_draft_stream"` (23B) |
| xref_to | `0x14094F2E0` | `sub_14094F2E0` — 唯一引用者，封闭函数 |
| 重命名后 | `test_relay_draft_stream_owner_sys` | IDB 已写回 |

## 函数基本信息

| 字段 | 值 |
|------|----|
| VA | `0x14094F2E0` |
| Size | 4621 B |
| Type | async coroutine (Rust Future poll 状态机) |
| Stripped | YES — PE x64，无符号 |

## 异步状态机结构

外层状态寄存器：`a1+12848`（主 poll 阶段控制）
内层嵌套状态：`a1+12832`、`a1+12816`、`a1+12808`

这是 Rust `async fn` 编译产物特征：多帧偏移状态字段，每个 `.await` 点对应一层。

## 平台差异（Win vs macOS）

| 方面 | Windows PE | macOS ARM64 |
|------|-----------|-------------|
| 原子锁 | `_InterlockedCompareExchange8` + `WakeByAddressSingle` | `parking_lot` |
| 环境变量 | `USERNAME` | `USER` |
| RelayProvider stride | 232B | 232B（相同） |
| IDB 工具 | `<逆向工具通道>` (<内部网络>) | `<逆向工具通道>` |

## IPC 参数（dim2 确认）

| 参数 | 类型 | 字符串 VA | 长度 |
|------|------|----------|------|
| `manager` | `String` | `0x1412fa999` | 7B |
| `input` | `RelayDraftTestInput` | `0x1412fa9df` | 5B |
| `onEvent` | Event handler | `0x1412fa9e4` | 7B |

## 核心调用关系

```
test_relay_draft_stream_owner_sys (0x14094F2E0)
├── relay_draft_test_deserialize_input_sys (0x140241F50)   → RelayDraftTestInput 反序列化入口
│   └── relay_draft_test_input_visitor_sys (0x1408943A0)   → 8字段 serde Visitor
├── relay_keychain_lookup_for_quota_sys (0x1402EE7C0)      → secrets.json + SHA-256 API key 派生（共享叶）
├── relay_draft_stream_sse_executor_sys (0x1408BDE90)      → SSE HTTP 流执行器（11908B）
│   ├── relay_draft_stream_http_request_builder_sys (0x1405BF9E0) → POST /v1/chat/completions 构建
│   ├── relay_model_type_classifier_sys (0x1405C4350)      → embedding/embed/v1 路径检测
│   └── sub_1405C2F20 / sub_1405C4470                      → URL path 规范化（/v1 后缀处理）
└── relay_event_payload_builder_sys (0x140229AF0)           → SSE 事件 JSON 构造
    ├── relay_event_field_warnings_sys (0x1402494C0)        → "warnings" 字段
    └── relay_event_field_data_sys (0x1402495E0)            → "data" 字段
```

## 副作用

1. 读取 `secrets.json`（通过 `relay_keychain_lookup_for_quota_sys`）
2. 读取 RelayProvider 状态向量（stride=232B，通过状态扫描）
3. 发出 HTTP POST 流式请求到上游 relay baseUrl
4. 通过 `onEvent` 回调向前端推送 SSE 事件

## 会话信息

- Session: `<审计会话>`
- Machine: `<本地机器>`
- Role: 纯生产者 (SOP steps 0-6)
- 逆向分析 server: `<逆向工具通道>` @ <内部网络>
