# catalog_models — Windows 侧本轮 NOT_FOUND（编译器内联证据）

- mac 符号: `codexmate_lib::core::relay::codex_catalog::catalog_models::h6fb83aa1a4226ac8`
- mac EA: `0x100acecf0`, size 153B（薄 JSON 字段访问器）
- mac 行为: 接收已解析的 serde_json::Value，按字段名 "models" 索引取出 Array，Clone 返回。

## 已尝试的方法（红线13诚实记录）

1. **generic 符号直接检索**：检索 `index_into`（serde_json 通用索引函数）作为独立符号，
   func_query 无命中，证实该 generic 辅助函数在 win 侧未以独立符号形式存在
   （按调用点单态化/内联，Rust monomorphization + inlining 的典型表现）。

2. **字段名字符串 xref**："models"(6字节) 字符串在 codex_catalog 模块内被 **7处**
   不同代码位置引用（`0x140556590`/`0x1405607e0`/`0x1405622d0`×2/`0x14057c4b0` 等）。
   decompile 其中最相似的 2 处候选：
   - `0x140556590`(535B)：先调用 `run_bundled_cli`(0x140555B60) 获取 CLI 输出，
     再索引 "models" 字段 + tag==4 校验 + Vec::clone
   - `0x1405607e0`(888B)：先取值，再索引 "models" 字段，之后走进一步的模型条目遍历逻辑

   两者均为**融合函数**（同时包含"获取源 Value(经 run_bundled_cli 或其它 resolver)
   + 索引 models 字段 + clone/遍历"多步逻辑），不是 mac 侧 153B 的独立薄访问器边界。

## 结论

catalog_models 的字段索引逻辑（`index_into("models",6,...)`+`tag==4`校验+`Vec::clone`）
**确实存在**于 win 侧代码中，但因编译器内联散布在至少 2 个不同的融合调用点，
**未发现与 mac 153B 独立函数 1:1 对应的函数边界**。这不是"未找到"而是"架构上不存在
独立对应体"——按红线29诚实标注为 `NOT_FOUND_LIKELY_INLINED`，不强行 rename 到
融合函数（避免张冠李戴）。已在 win IDB 相关地址（0x140556590, 0x1405622d0）
写入说明性注释。
