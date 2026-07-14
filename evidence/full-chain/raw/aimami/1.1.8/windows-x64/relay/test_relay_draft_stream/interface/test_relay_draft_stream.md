# interface — test_relay_draft_stream (AiMaMi 1.1.8, windows-x64)

## IPC contract (frontend-confirmed, `raw/aimami/1.1.8/windows-x64/frontend/ipc-contracts.jsonl` line 126)

- **command**: `test_relay_draft_stream`
- **frontend argKeys**: `["input", "onEvent"]` (`tauriInvokeRaw` kind, `assets/index-CX-I_QAq.js` line 86)
- **backend-observed keys** (owner pseudocode literal string refs, live-confirmed this round): `manager` (0x1413613b0, 7B), `input` (0x1413613b7, 5B), `onEvent` (0x141361583, 7B) — the extra `manager` key is a Tauri-injected `State<T>` extraction literal (not sent from the frontend JSON payload), matching the exact same 3-key shape (`manager`/`input`/`onEvent`) already fully documented in the 1.1.1 windows-x64 baseline interface (`raw/aimami/1.1.1/windows-x64/test_relay_draft_stream/interface.md`)

```
invoke("test_relay_draft_stream", {
  input: RelayDraftTestInput,   // request body, shape inherited from 1.1.1 baseline (not re-enumerated field-by-field this round)
  onEvent: EventHandler         // SSE chunk callback
})
→ text/event-stream (SSE), final response dispatched via invoke_resolver_respond_sys
```

## 与 1.1.1 基线对比 (delta)

- argKeys 集合**未变**：`manager`/`input`/`onEvent` 三键在 1.1.8 owner 的字符串池中逐字节存在（长度 7/5/7B，与 1.1.1 完全一致）
- owner 函数体量几乎不变：1.1.1 `test_relay_draft_stream_owner_sys`@0x14094F2E0 = 4621B → 1.1.8 owner@0x1409D9370 = 4637B（+16B，VA churn + 轻微体积增长，符合本 session 已确认的普遍二进制增长模式）
- Display-impl 错误检查辅助函数体量**字节级完全相同**：1.1.1 文档记录的 `sub_140E30410` = 1709B ↔ 1.1.8 本轮确认的 `sub_140E156C0` = 1709B（exact match）
- SSE 执行器体量近似：1.1.1 `relay_draft_stream_sse_executor_sys` = 11908B ↔ 1.1.8 `sub_1409717F0` = 12059B（+151B / +1.3%）
- 1.1.8 owner 顶层直接 callee 数量（29 个）显著多于 1.1.1 owner 文档记录的 5 个 D1 子任务——推断为编译器在 1.1.8 构建中对 deserialize/keychain-lookup/event-builder 阶段做了更激进的内联（未证实为行为变化，只是代码生成形状差异）
- 结论：**接口层零行为 delta**（同 argKeys、同响应模式），内部实现层为 VA churn + 内联程度差异，非新增/删除的业务逻辑

## 异步状态机结构

外层状态寄存器：`a1+12848`（主 poll 阶段控制，4 态）
内层嵌套状态：`a1+12832`、`a1+12816`、`a1+12808`（每层对应一个 `.await` 恢复点，与 1.1.1 基线文档记录的结构完全一致）

## Windows 平台特有机制（本轮实测确认）

- 原子快路径检查 + `WakeByAddressSingle`（`sub_140419560`@0x140419560，487B）——与 1.1.1 基线文档的 "`_InterlockedCompareExchange8` + `WakeByAddressSingle`" 平台差异说明完全吻合

## 副作用（继承自 1.1.1 基线，本轮未逐项重新枚举）

1. 读取/解析 `RelayDraftTestInput`（8 字段 serde 结构，字段集合本轮未重新逐一验证，见 Unknown）
2. 通过 `relay_keychain_lookup_for_quota_sys` 等价路径读取 `secrets.json`（1.1.1 已确认，本轮未独立重验）
3. 向上游 relay baseUrl 发起 HTTP POST 流式请求（本轮通过 `sub_1409717F0` → `relay_http_request_cleanup_sys` 的 callee 链间接确认，未重新解 12KB 函数体）
4. 通过 `onEvent` 回调向前端推送 SSE 事件

## dim4 覆盖度（本轮）

- [x] IPC 参数名确认（owner 字符串池 3 键逐字节核对）
- [x] 与 1.1.1 基线的体量级 delta 比对（4 个函数尺寸交叉核对）
- [ ] RelayDraftTestInput 字段全集本轮独立重验（继承 1.1.1 文档，未重新 decompile 反序列化 Visitor）
- [ ] 上游请求 path/method/auth 本轮独立重验（继承 1.1.1 文档）
- [ ] SSE 执行器 12KB 完整函数体本轮未完整重新反编译（仅通过 callee 清单+体量比对间接确认）
