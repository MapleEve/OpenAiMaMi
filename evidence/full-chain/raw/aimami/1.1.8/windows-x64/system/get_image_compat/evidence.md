# evidence — get_image_compat (win 1.1.8) — OWNER ABSENT



## Confirmed
- owner **不存在于 win64 二进制**。5 法交叉验证均确认命令名/owner 缺失:
  1. owner-map-118.jsonl: present=False
  2. 活 反编译器 find_regex {"pattern":"get_image_compat"} → n=0 命中
  3. func_query *image_compat* / *get_image* → 无 owner 函数匹配(仅通用 sub_ 列表)
  4. STAGE1: anchored + unanchored + substring 全法 0 命中
  5. 无 dispatcher xref 指向该命令 wrapper

## Inferred
- get_image_compat 为 **frontend-only / 平台条件编译命令**:Windows 无 notch/图像兼容后端实现(该能力 macOS 专属,如刘海屏 has_notch 场景),前端 invoke 在 win 下走降级或空实现。
- 属 1.1.8 前端 delta(win-delta.txt),但 win 后端不落地——非遗漏,是平台差异。

## Unknown
- 前端在 win 下对 get_image_compat 的降级行为需看前端 mock/service(非后端逆向范围)。

## Delta vs 1.0.9
- 1.1.8 新增前端命令;win 后端始终 absent(平台门控)。分类:orphan/owner_absent,不占 win backend 实现面。
