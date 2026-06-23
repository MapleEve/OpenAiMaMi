# AiMaMi 1.1.1 Windows-x64 Delta 消费结论包

**Bundle 版本**: 1.0
**产出 session**: wf-aimami111-delta-20260617-repair
**机器**: <本地机器>
**角色**: 纯生产者（SOP 步骤 0-6）
**平台**: windows-x64
**基线**: 1.0.9（100% 已逆完）
**目标**: 1.1.1 delta
**binary SHA256**: d24e429ab16a9b683c1c23212555c7d1d59a3e2e6ee24a9f3a16acd7f8231610
**binary_format**: pe
**产出日期**: 2026-06-17

---

## 包结构

```
windows-1.1.1-delta/
├── README.md                    本文件：包结构与索引
├── AI.md                        消费者快速入口（先读这里）
├── SYSTEM-DIFF.md               系统级架构差异摘要
├── VERSION-DIFF.md              ★ 核心：诚实五分类差异清单
├── CHANGELOG-CROSSMAP.md        ★ 核心：官方 changelog 5 条逐条命中映射
├── manifest.json                包级 manifest（版本/产物路径/会话链）
├── gate-report.json             聚合各 leaf gate-report（汇总门控状态）
├── data/
│   └── producer-ledger.json     生产者账本（已有则更新）
├── pointers/
│   └── evidence-paths.md        指向真实 raw leaf 路径（含 canonical drift 注记）
├── logic/                       关键变更命令逻辑文档
│   ├── set_codex_api_login.md
│   ├── set_codex_api_slots.md
│   ├── get_relay_provider_quota.md
│   ├── reorder_relay_providers.md
│   ├── reveal_relay_api_key.md
│   ├── set_relay_display_tags.md
│   ├── parse_aimami_deeplink.md
│   ├── test_relay_draft_stream.md
│   ├── test_relay_provider_stream.md
│   ├── confirm_pending_auto_switch_and_restart_codex.md
│   └── import_accounts_from_file.md
├── interfaces/                  接口合约文档
└── reviews/                     审查备注
```

---

## 关键结论速览

| 分类 | 数量 | 说明 |
|---|---|---|
| ① 真新增命令 | 10 | 9 前端新增 + fix_codex_router_issue（dispatcher 新增，不在前端合约） |
| ② 真删除命令 | 10 | plugin×4 + passthrough×2 + relay替换×2 + set_relay_provider_network + reset_codex_config |
| ③ 真 body-delta | 5 | confirm_pending 协程重构、import_accounts 并发路径、restart_codex VA 漂移、set_codex_router_enabled 新增 apiLogin 参数、diagnose 系列扩充 |
| ④ 真无差异 same-skip | 70+ | 详见 win-same.txt（117 同 - 逐步深核覆盖） |
| ⑤ orphan-no-backend | 43 | voice 全家 + mystery + preview_custom_instruction 等（macOS 独有或无 IPC backend） |

---

## 重大发现（消费者必读）

1. **hotspot/notch 旧结论被推翻**：has_notch / get_hotspot_enabled / set_hotspot_enabled / hotspot_ready 原标注"macOS-only"，win 1.1.1 全部有实体 backend handler。

2. **confirm_pending 协程复杂度跃升**：1.0.9 是 6-phase 线性协程，1.1.1 变为 4-outer-state + nested sub-state machine，通过 relay provider type vtable（off_141899420）做 provider 类型分叉，消费者实现必须处理这个分叉。

3. **restart_codex VA 漂移**：1.0.9 baseline VA 0x14026f140 在 1.1.1 已被 JSON token 提取函数复用，真实 handler 在 0x14001AE30。VA 不可继承。

4. **relay proxy/agent 命令仅 macOS**：relay_proxy_server / append_assistant_and_tool_results 在 win 1.1.1 无 IPC backend（0 string hits）。Changelog #3 relay agent 连贯性在 win 是内部行为，不通过 IPC 暴露。

5. **线程迁移命令仅 macOS**：migrate_threads_for_router / has_router_thread_migration / rollback_threads_for_router 在 win 1.1.1 无 IPC backend。

6. **set_codex_router_enabled 签名变更**：1.1.1 新增 apiLogin 参数，原命令语义扩展为"router开关+API登录状态"合并原子调用。
