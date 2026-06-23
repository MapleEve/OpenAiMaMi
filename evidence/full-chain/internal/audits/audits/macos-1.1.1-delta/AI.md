# AI.md — AiMaMi 1.1.1 macOS arm64 Delta 消费交接

**session**: wf-aimami111-delta-20260617-repair
**produced_at**: 2026-06-17
**role**: 消费者 intake 交接（本机 <本地机器> = 消费者+生产者）

---

## 消费者应知的最重要事项（按优先级）

### P0：影响实现方向的结论

1. **智能路由整体升级，新增两种 relay 接入模式**
   - 模式 A（直连 key）：原有 set_codex_router_enabled 基础能力
   - 模式 B（API 登录代理）：新增 `set_codex_api_login` + `set_codex_api_slots`；virtual-auth-marker.json 控制生命周期；Codex 进程停/启管理
   - 前端新 argKey `apiLogin` 在 `set_codex_router_enabled` 中，两模式统一入口

2. **hostStr/portStr 格式变更影响前端直接使用**
   - `get_relay_proxy_status` 返回的 `hostStr` 从 `"127.0.0.1:<PORT>"` 变为 `"http://127.0.0.1:<PORT>/codex/v1"`
   - `portStr` 从 `"<PORT>"` 变为 `"http://127.0.0.1:<PORT>"`
   - 若前端直接用 hostStr 拼 URL，需注意此格式变化

3. **流式测试命令取代非流式**
   - `test_relay_draft` → `test_relay_draft_stream`（新 input DTO：RelayDraftTestInput 8字段，含 wireApi）
   - `test_relay_provider` → `test_relay_provider_stream`（同 body，is_stream_terminal_event 终止判断）
   - 两命令共享 test_provider_staged async 状态机（VA 0x10009d110）

4. **plugin 系列全部消失，passthrough 系列全部消失**
   - plugin×4 / passthrough×2 共 6 条命令从 IPC 合约移除
   - 若 C5 实现中有 plugin 管理或 passthrough 审计，对应接口需同步下线

### P1：新增命令接口摘要

| 命令 | argKeys | 响应 | 关键副作用 |
|------|---------|------|-----------|
| `set_codex_api_login` | [enabled:bool] | CoreEnvelope<CodexApiLoginTogglePayload> | stop/launch Codex，写 virtual-auth-marker.json |
| `set_codex_api_slots` | [manager:String, slots:Vec<CodexApiSlot>] | CoreEnvelope<RelayState> | persist RelayState，sync_codex_config |
| `get_relay_provider_quota` | [manager:String, providerId:String] | CoreEnvelope<{remaining,quota,usage}> | GET /v1/usage；3层 key 获取 |
| `reorder_relay_providers` | [manager:String, orderedIds:String[]] | CoreEnvelope<RelayState> | persist+sync_codex_config |
| `reveal_relay_api_key` | [providerId:String] | CoreEnvelope<Option<String>> | 3层读取+write-through cache |
| `set_relay_display_tags` | [manager:String, global:String, woyao:String] | CoreEnvelope<()> | persist RelayState |
| `parse_aimami_deeplink` | [url:String] | CoreEnvelope<DeeplinkResult> | 纯解析，无副作用 |
| `test_relay_draft_stream` | [input:RelayDraftTestInput] | streaming response | POST /v1/chat/completions，stream=true |
| `test_relay_provider_stream` | [input:RelayProviderTestInput] | streaming response | 同 draft 路径 |

### P2：诊断/修复命令变更

- `diagnose_codex_router`：新增 has_migration/thread_migration_exists 字段；6 条中文诊断字符串（见 VERSION-DIFF ③）
- `fix_codex_router_issue`：新增 itemId `thread-router-migrations`/`residual_manifest`/`relay-state-cache.json`；新增 stop_codex_for_file_edit + launch_codex_app 流程
- `configure_auto_switch`：DTO 破坏性变更：**移除 hasSchedule/scheduleMin**，新增 threshold5hPercent/thresholdWeeklyPercent（Option<u32>）

### P3：voice 系列 / custom_instructions 孤儿

全部标为 orphan-no-backend（34 条）。C5 **不实现** backend。capture_voice_trigger_key / cancel_voice_trigger_capture 已有 readyToImplement gate（见 gate-report）。

---

## 已知 Unknown 汇总（accepted，不阻塞）

| Unknown | 命令 | 等级 |
|---------|------|------|
| CodexApiLoginTogglePayload 精确字段布局 | set_codex_api_login | accepted_unknown |
| virtual-auth-marker.json 第4个 BTreeMap key（16B） | set_codex_api_login | accepted_unknown |
| "woyao" 精确语义/字段名 | set_relay_display_tags | accepted_unknown |
| AutoSwitchConfig 0x78B struct 字段顺序 | configure_auto_switch | accepted_unknown |
| Windows 1.1.1 set_codex_api_login 行为 | set_codex_api_login | blocks Windows gate |
| xhigh 推理强度具体字符串 | diagnose（疑似） | ⚠ 待追 |
| 流式回复中断修复具体逻辑 | test_relay_provider_stream | accepted_unknown |

---

## 消费者行动建议

1. 优先实现 `set_codex_api_login` + `set_codex_api_slots`（API 登录模式核心）
2. 更新 `set_codex_router_enabled` 以处理新 `apiLogin` argKey 和 15 字段 payload
3. 更新 `get_relay_proxy_status` 的 hostStr/portStr 消费逻辑（格式变了）
4. 对接 `test_relay_draft_stream` / `test_relay_provider_stream`（替代旧非流式版本）
5. 新增 `parse_aimami_deeplink`（纯解析，无副作用，优先级低）
6. 下线 plugin×4 / passthrough×2 / set_relay_provider_network / reset_codex_config 的实现
7. 更新 `configure_auto_switch` DTO（hasSchedule 参数已移除）
