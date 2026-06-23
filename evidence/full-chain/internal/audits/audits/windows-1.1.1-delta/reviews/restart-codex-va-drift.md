# 审查备注：restart_codex VA 漂移

**session**: wf-aimami111-delta-20260617
**发现来源**: win-divergence-111.json changed[0]

## 漂移内容

| | 地址 | 内容 |
|---|---|---|
| 1.0.9 VA（原以为可继承） | 0x14026f140 | **1.1.1 中已被 JSON token 提取函数复用**（sub_14026EE50） |
| 1.1.1 真实 handler | 0x14001AE30 | restart_codex handler（547B），delegate 0x1407838D0（376B） |

## 定位方法

1.1.1 handler 通过 byte-level dispatcher scan 找到：
```
dispatcher case-13 region → byte scan for 'restart_codex' byte sequence
→ JE @ 0x1400108d2 → CALL @ 0x140010921 → sub_14001AE30
```

## 行为变化

无行为级变化。VA 漂移是 1.1.1 代码重新布局的结果，不是功能变更。handler 结构与 1.0.9 基本一致。

## 消费者影响

任何基于 VA 硬编码的 restart_codex 查找**必须更新**。不能继承 1.0.9 VA 0x14026f140。
