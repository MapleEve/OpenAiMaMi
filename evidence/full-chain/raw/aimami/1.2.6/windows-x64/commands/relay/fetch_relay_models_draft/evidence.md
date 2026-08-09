# Evidence: fetch_relay_models_draft

## 命令身份
- 命令名: `fetch_relay_models_draft`
- Owner EA: `0x140d871d0`
- Owner 函数名: `fetch_relay_models_draft`
- 模块: `commands/relay`
- 版本: 1.2.6 / 平台: windows-x64
- 函数大小: 0x3097 (12439 bytes)

## Owner 定位
- 方法: delta-commands.txt 已记录 EA (conf=high)，IDA find_regex 确认命令名串存在
- Xrefs to owner: tauri generate_handler! dispatcher

## 反编译
- 文件: `ida/pseudocode/fetch_relay_models_draft_0x140d871d0.c`
- 状态: decompiled
- IDA 注释: Tauri 命令 fetch_relay_models_draft 的 handler：按入参 input（provider 草稿配置）拉取模型列表草稿；HTTP GET {base}/v1/models，支持 OpenAI 与 Anthropic（x-api-key + anthropic-version: 2023-06-01）两种鉴权头，带重试（all retries exhausted）。

## 调用树
- 文件: `call-tree.json`
- Callee 数量: 51 / Edge 数量: 51
- 终止原因: leaf_handler

## 接口报告
- 文件: `interface-report.json`
- 置信度: high
- 副作用: 无检测到

## 字符串引用
- `0x0x1418941f4`: *0O
- `0x0x1418941f4`: *0O
- `0x0x1418872c9`: fetch_relay_models_draft
- `0x0x1418865b4`: manager
- `0x0x1418872e1`: input
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
- `0x0x141891b78`: a Display implementation returned an error unexpectedly
- `0x0x141888c25`: /v1/models
- `0x0x141888c25`: /v1/models
- `0x0x141888c48`: x-api-key
- ... (共 23 条)
