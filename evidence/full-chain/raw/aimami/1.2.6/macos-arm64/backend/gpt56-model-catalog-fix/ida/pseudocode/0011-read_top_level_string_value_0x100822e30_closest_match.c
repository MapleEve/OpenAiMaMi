// codexmate_lib::core::relay::codex_writer::read_top_level_string_value::ha10b87c92ab94199
// EA 0x100822e30, size 0x2e9 (745B), macOS, AiMaMi 1.2.6 — 完整反编译，无截断
// 【最接近 read_top_level_model_line 的候选，非精确符号名匹配，见 0010 号说明】
_QWORD *__fastcall codexmate_lib::core::relay::codex_writer::read_top_level_string_value::ha10b87c92ab94199(
        _QWORD *a1,
        __int64 a2, __int64 a3, /* TOML 原始文本 (ptr,len) */
        void *a4, size_t a5)    /* 目标 key 名字面量，如 "model" (ptr,len) */
{
  codexmate_lib::core::relay::codex_writer::top_level_assignment_lines::h4c657d32e2ec3c63(&v34);
  /* v34 = Vec<(key_ptr,key_len,val_ptr,val_len)> 顶层赋值行列表（已跳过嵌套 section 内的行）*/

  for (每一行 (key,val) in 列表) {
    trimmed_key = core::str::trim_matches(key);
    parsed = codexmate_lib::core::relay::codex_writer::top_level_assignment_key::head7348ee1c75772(trimmed_key);
    if (parsed == None) continue; /* 非合法 "key = " 形式的行，跳过 */
    if (parsed.len == a5 && memcmp(parsed.ptr, a4, a5) == 0) {
      /* key 精确匹配目标（调用方传入 "model" 即为读取顶层 model 行） */
      codexmate_lib::core::relay::codex_writer::extract_toml_string_value::h9ffcb6dae9e9cf92(a1, val_ptr, val_len);
      /* 释放临时 Vec 内存后返回 */
      return a1;
    }
  }
  *a1 = 0x8000000000000000LL; /* 未找到该 key -> None */
  return a1;
}

/*
行为结论：本函数是通用的"按 key 名读取 TOML 顶层字符串赋值"原语——
先取全部顶层（非 [section] 内）的 `key = value` 行，逐行 trim + 解析 key 名，
与调用方指定的目标 key（本例中很可能是字面量 "model"）做精确匹配，
命中后调用 extract_toml_string_value 提取并转义处理值字符串，返回 Option<String>。

若调用方以 "model" 作为 (a4,a5) 参数调用本函数，其效果即等价于用户要求的
"read_top_level_model_line"（读取用户 ~/.codex/config.toml 顶层的 model= 赋值行，
排除嵌套在 [profiles.X] 段内的同名字段）。本轮未做 xrefs_to 反查验证是否存在
以字面量 "model" 调用本函数的具体调用点，故未 100% 确认二者等价，仅作为高置信度候选记录。
*/
