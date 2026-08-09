# 内嵌默认目录 JSON 承载函数 — sub_1405622D0 @ 0x1405622d0

- 大小: 8907 字节 (0x22cb)，316 basic_blocks，cyclomatic_complexity 161
- 调用方 (4个，真实 xrefs)：`sub_14055EA40`、`sub_1405619B0`、`sub_140566130`、`sub_140566D20`
- 状态：**decompile() 在 54480 字符处硬截断**（红线20，`decompile_truncated:1436` 字段确认）；
  `analyze_function` 返回的 `strings` 字段直接提取到完整字面量证据（见下），非猜测编造。

## 真实字符串常量（analyze_function.strings，原样提取）

```
"codexmate_lib::core::relay::codex_cataloggpt-5.6gpt-5.6-"
"src\\core\\relay\\codex_catalog.rs"
"modelsinternal error: entered unreachable code: catalog removal loop always returnssrc\\core\\relay\\codex_catalog.rs"
"client_versiongpt-5.6-solgpt-5.6-terragpt-5.6-lunagpt-5.4"
"{\"models\":[{\"slug\":\"gpt-5.6-sol\",\"display_name\":\"GPT-5.6-Sol\",\"description\":\"Latest frontier agentic coding model.\",\"default_reasoning_level\":\"low\",\"supported_reasoning_levels\":[{\"effort\":\"low\",\"description\":\"Fast responses with lighter reasoning\"},{\"effort\":\"medium\",\"description\":\"Balances speed and reasoning depth for everyday tasks\"},{\"effort\":\"high\",\"description\":\"Greater reasoning depth for complex problems\"},{\"effort\":\"xhigh\",\"description\":\"Extra high reasoning depth for complex problems\"},{\"effort\":\"max\",\"description\":\"Maximum reasoning depth for the hardest problems\"},{\"effort\":\"ultra\",\"description\":\"Maximum reasoning with automatic task delegation\"}],\"shell_type\":\"shell_command\",\"visibility\":\"list\",\"supported_in_api\":true,\"priority\":1,\"additional_speed_tiers\":[\"fast\"],\"service_tiers\":[{\"id\":\"priority\",\"name\":\"Fast\",\"description\":\"1.5x speed, increased usage\"}],\"availability_nux\":{\"message\":\"Our most capable model yet. GPT-5.6 Sol can tackle complex code changes, dig into resea... [113506 字符总长，本轮仅截取此片段]"
"slugfreeformtext_and_image#write codex router catalog failed: "
```

## Callees（真实提取）

`sub_14172BEB0`（memcmp风格比较）、`sub_14046EB10`、`sub_14151B4E0`、`sub_140465C50`、
`sub_1414D4800`、`sub_14152E890`、`sub_140001650`（内存分配）、`sub_14086BB40`、
`sub_1406E71E0`（tracing/log格式化）、`sub_14043E640`

## Comments（IDA 已有）

- `0x1405640ed` "switch 5 cases" + 5 个 jumptable case 注释——函数内部含一个 5 分支 switch

## 行为结论（基于字符串+调用图的结构性证据，未获得完整反编译体确认）

本函数在 8907 字节体内直接持有/构造一份**完整的默认/bundled 模型目录 JSON**
（首个 `models[0]` 条目即 `gpt-5.6-sol`，含 `default_reasoning_level="low"` +
6 档 `supported_reasoning_levels`），并在附近字符串池中并列着
`gpt-5.6-terra`、`gpt-5.6-luna`、`gpt-5.4` 等模型 slug。同时函数体内也嵌有
"catalog removal loop always returns" panic 串（与其它 codex_catalog 候选函数
共享同一份 `.rs` 源文件 Location），暗示该函数除了持有默认目录数据外，还承担
某种 catalog 生命周期管理逻辑（构建/移除/合并）。

**这是本轮 changelog-item-4 (GPT-5.6模型清单修复) 最直接的实锤证据**：证明
1.2.6 版本二进制内确实内嵌了包含 3 个 GPT-5.6 变体的默认目录数据，这正是官方
changelog "修复...缺少GPT-5.6系列模型" 所指向的数据载体。

## 诚实缺口

未获取完整 8907 字节反编译体（超大函数，decompile 在 54480 字符/1436 字节处
截断）；5 分支 switch 的具体分支逻辑未展开；与 `catalog_models`/`full_reasoning_levels`
mac 侧对应符号的精确调用链层级关系未通过 xrefs 逐层验证（仅确认4个调用方地址，
未反编译调用方本身确认参数传递语义）。`recovery_attempts`：`decompile()`（截断）+
`analyze_function()`（拿到strings/callees/basic_blocks完整结构证据）；未尝试
`basic_blocks()` 分块反编译（316块，超出本轮时间预算）。
