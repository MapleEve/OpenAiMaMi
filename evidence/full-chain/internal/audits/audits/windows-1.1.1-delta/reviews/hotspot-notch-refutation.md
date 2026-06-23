# 审查备注：hotspot/notch macOS-only 旧结论推翻

**session**: wf-aimami111-delta-20260617
**发现来源**: win-divergence-111.json

## 推翻内容

以下 4 个命令在 1.0.9 win 分析时被标注为"macOS-only"（或推测无 win backend），但 1.1.1 win 逆向发现全部有实体 backend handler：

| 命令 | 旧结论 | 1.1.1 win 实证 |
|---|---|---|
| has_notch | macOS-only | handler@0x140023000（863B），string@0x1412ac463 |
| get_hotspot_enabled | macOS-only | handler@0x140021570（879B），namespace=repo |
| set_hotspot_enabled | macOS-only | handler@0x140022070（1454B），两段式 app+repo lookup |
| hotspot_ready | macOS-only | handler@0x140016720（847B） |

## 影响

- win 1.0.9 的 hotspot/notch 逆向工作需要补做（或确认 1.0.9 也有 backend 只是被漏逆）
- 消费者不能依赖旧的"macOS-only"标注排除这些命令的 win 实现
- 这些命令应纳入 win 平台的同等 same-skip 处理，基于 1.1.1 逆向结果

## 原因分析

1.0.9 win 分析可能采用了"已知 macOS 有，win 未搜索到"的保守推断，而非实际 0 hit 验证。1.1.1 win 通过 string pool 精确搜索 + handler VA 定位，发现 4 个命令均有完整 backend。

## 不影响 same-skip 分类

这 4 个命令仍属于 win-same.txt（same-skip 类别），因为它们在 1.0.9 → 1.1.1 之间未发生功能变更（VA 不同但结构稳定）。旧结论错误的是"macOS-only"标签，不是"1.0.9→1.1.1 无变化"的判断。
