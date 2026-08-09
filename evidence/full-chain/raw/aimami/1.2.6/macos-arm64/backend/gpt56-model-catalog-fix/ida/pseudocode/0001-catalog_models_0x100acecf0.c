// codexmate_lib::core::relay::codex_catalog::catalog_models::h6fb83aa1a4226ac8
// EA 0x100acecf0, size 0x99 (153B), macOS arm64/x86_64 universal, AiMaMi 1.2.6
// 符号来源: mac IDB 精确 demangled 符号（非猜测），func_query name_regex="catalog_models" 命中唯一 1 条
double __fastcall codexmate_lib::core::relay::codex_catalog::catalog_models::h6fb83aa1a4226ac8(
        unsigned __int64 *a1,
        __int64 a2)
{
  _BYTE *v3; // rax
  unsigned __int64 v4; // rax
  unsigned __int64 v5; // rsi
  unsigned __int64 v6; // rdi
  double result; // xmm0_8
  unsigned __int64 v8; // [rsp+0h] [rbp-20h] BYREF
  unsigned __int64 v9; // [rsp+8h] [rbp-18h]
  unsigned __int64 v10; // [rsp+10h] [rbp-10h]

  v3 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                  &unk_1016FF3AA, /* 字符串常量"models"，serde_json::Value 按字段名索引 */
                  6,
                  a2);
  if ( !v3 || *v3 != 4 ) /* tag!=4 即非 Array 变体 */
  {
    v4 = 0x8000000000000000LL; /* None/Err sentinel */
    goto LABEL_6;
  }
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h46129033bc30b0e4(&v8, v3 + 8);
  if ( v10 )
  {
    a1[2] = v10;
    v4 = v8;
    a1[1] = v9;
LABEL_6:
    *a1 = v4;
    return result;
  }
  v5 = v8;
  v6 = v9;
  *a1 = 0x8000000000000000LL;
  if ( v5 )
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, 32 * v5, 8);
  return result;
}

/*
行为结论：catalog_models 是一个 153 字节的薄访问器（thin accessor），
接收一个已解析好的 serde_json::Value（参数 a2，来自调用方——很可能是编译期内嵌的
默认/bundled 目录 JSON，或运行期抓取的官方目录 JSON），
按字段名 "models" 索引取出对应的 JSON Array，Clone 一份 Vec<Model> 返回。
本函数自身不含解析/合并/回退逻辑，只是"models"字段的取值器。
*/
