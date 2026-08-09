# read_top_level_model_line — 目标未找到（诚实缺口，非 accepted_unknown 伪造闭合）

## 排查过程（recovery_attempts）

1. `func_query {"name_regex":"top_level_model"}` → 3 命中，均非目标本身：
   - `invariants::top_level_model_surface_violation` (0x10081aa50, 576B)
   - `codex_writer::strip_invalid_router_top_level_model` (0x1008244f0, 1994B)
   - `codex_diagnostic::is_top_level_model_key` (0x100af4670, 295B)
2. `func_query {"name_regex":"read_top_level"}` → 1 命中：
   - `codex_writer::read_top_level_string_value` (0x100822e30, 745B) —— **最接近候选**，见下
3. `func_query {"name_regex":"codex_writer"}` 全模块广域枚举 → 24 命中，无 `read_top_level_model_line` 精确名

## 最接近的候选：codex_writer::read_top_level_string_value（已完整反编译，见 pseudocode/0011）

- 通用的"读取顶层 TOML 字符串赋值"原语：先调用 `top_level_assignment_lines` 拿到全部顶层
  `key = "value"` 行，逐行 `trim` 后用 `top_level_assignment_key` 解析出 key 名，
  与调用方传入的目标 key（`a4`,`a5` 字节切片）做 `memcmp` 精确比较，命中后调用
  `extract_toml_string_value` 提取值。
- **推断**：`read_top_level_model_line` 极可能就是调用方以 `"model"` 作为 `a4/a5` 参数
  对本函数的一次具体调用（本函数是通用参数化原语，不是"model"专用），
  或是该调用点的一个内联特化版本（Rust 泛型/内联优化可能导致独立符号消失）。
- 另一强关联候选：`codex_writer::strip_invalid_router_top_level_model`（1994B）——
  从名字看是"剥离无效的 router 顶层 model 行"，语义上更贴近"处理顶层 model 行"，
  但未反编译验证是否内部复用了 `read_top_level_string_value`。

## 未尝试的破法（诚实标注）

- 未反编译 `strip_invalid_router_top_level_model` 验证其是否内部以 `"model"` 调用
  `read_top_level_string_value`（若确认调用关系，则可确定 `read_top_level_model_line`
  这一具体行为已被 `strip_invalid_router_top_level_model` 承载，只是无独立符号）
- 未做 `xrefs_to(0x100822e30)` 反查 `read_top_level_string_value` 的全部调用点，
  逐一检查是否有调用点传入字面量 `"model"`

`accepted_unknown`/`genuine_ceiling` 均**不适用**——本项同上，是符号名未找到的诚实缺口。
