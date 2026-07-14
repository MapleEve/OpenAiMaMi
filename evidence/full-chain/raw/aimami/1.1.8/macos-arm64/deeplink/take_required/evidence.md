# evidence — take_required (mac 1.1.8) — BACKEND-ONLY (角度A/C, NEW-in-1.1.8)



## Confirmed (来自 1.1.8 反编译)
- owner 签名: `__int64 __fastcall codexmate_lib::commands::deeplink::take_required::h4e0ee256dd41eea2(`
- call-tree: max_depth=6, pseudocode 节点=21(真实 decompile 落盘)。
- 关键字符串:
- `capacity overflowLayoutError`

## Inferred
- 行为: deeplink 解析助手:从已解析的 aimami:// 参数中取出必需字段,缺失则报错。parse_aimami_deeplink 的子过程。
- 接口: required field
- 副作用: 取值+错误

## Delta vs 1.0.9 / 1.1.1
- NEW-in-1.1.8 backend-only(不在 1.1.1 已characterized 的 31+2 集内)。deeplink 解析子过程。
- 分类:backend-only characterized(角度A 符号枚举 + 角度C 已逆),不占前端 131 delta 分母。
