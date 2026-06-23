# AiMaMi 1.1.1 macOS arm64 Delta — 消费结论包

**bundle_id**: macos-1.1.1-delta
**session**: <审计会话>
**machine**: <本地机器>
**produced_at**: 2026-06-17
**role**: 纯生产者（SOP steps 0-6）
**binary_sha256**: f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb
**baseline**: AiMaMi 1.0.9 macOS（100% 逆完，gate=readyToImplement）

---

## 包结构

```
macos-1.1.1-delta/
├── README.md                   本文件，包索引
├── AI.md                       AI 交接摘要（消费者直读）
├── SYSTEM-DIFF.md              系统级行为变更对照
├── VERSION-DIFF.md             ★五分类版本差异（核心）
├── CHANGELOG-CROSSMAP.md       ★官方更新日志命中映射（核心）
├── manifest.json               命令级元数据清单
├── gate-report.json            聚合各 leaf gate 状态
├── data/
│   └── producer-ledger.json    生产者账本
├── pointers/
│   └── evidence-paths.md       指向 raw leaf 证据路径
├── logic/                      关键命令 logic 文档
│   ├── set_codex_api_login.md
│   ├── set_codex_router_enabled.md
│   ├── test_relay_provider_stream.md
│   └── test_relay_draft_stream.md
├── interfaces/                 DTO 接口定义
│   └── relay-new-commands.md
└── reviews/                    审查笔记
    └── surface-traps.md
```

## delta 概要

| 分类 | 数量 | 说明 |
|------|------|------|
| 真新增命令（含 backend） | 9 | frontend-delta 新增集合全部逆完 |
| 真删除命令 | 10 | plugin×4 / passthrough×2 / relay×4 |
| 真 body-delta | 18 | 已逆，行为变更逐条记录于 VERSION-DIFF.md |
| 真无差异 same-skip | 56 | 继承 1.0.9 baseline gate，含 mac-shard same+baseline_absent 重合 |
| orphan-no-backend | 34 | voice 全家 + custom_instructions 孤儿，Product 决策不逆 |

**官方 changelog 5 条均命中实证**（见 CHANGELOG-CROSSMAP.md）。
