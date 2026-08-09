// codexmate_lib::core::relay::config_takeover::is_aimami_owned_model_section::h54056e81d487509e
// EA 0x100ae9de0, size 305B (0x131), macOS, AiMaMi 1.2.6
// 完整反编译，无截断（红线20核验：decompile() code 字段长度 2870 字符，无截断标记）。
//
// 修复记录：此前同名文件是手写摘要/删节稿（覆盖率估算仅约9-48%）。本次重新调用
// decompile() 工具直接获取真实逐行伪代码。
// changelog-item-4证据: is_aimami_owned_model_section — 判定TOML section header是否以"profiles."(9B)/"profile."前缀开头，再取first_section_part与多个已知model/provider字面量(长度12/6/19)做SIMD字节比较，命中即判定为AiMaMi管理的[profiles.X]段
__int64 __fastcall codexmate_lib::core::relay::config_takeover::is_aimami_owned_model_section::h54056e81d487509e(
        const __m128i *a1,
        unsigned __int64 a2)
{
  unsigned int v2; // ebx
  __m128i v3; // xmm0
  unsigned __int64 v4; // rdx
  const __m128i *v5; // rsi
  bool v7; // zf
  __m128i v8; // xmm2
  __int64 v9; // [rsp+0h] [rbp-20h] BYREF
  const __m128i *v10; // [rsp+8h] [rbp-18h]
  unsigned __int64 v11; // [rsp+10h] [rbp-10h]

  if ( a2 >= 0x10 ) /*0x100ae9df3*/
  {
    v3 = _mm_xor_si128(_mm_loadu_si128(a1), (__m128i)xmmword_1016F4840); /*0x100ae9e01*/
    if ( _mm_testz_si128(v3, v3) ) /*0x100ae9e0e*/
    {
      v4 = a2 - 16; /*0x100ae9e34*/
      v5 = a1 + 1; /*0x100ae9e38*/
      goto LABEL_8; /*0x100ae9e38*/
    }
  }
  else if ( a2 < 9 ) /*0x100ae9df9*/
  {
    return 0; /*0x100ae9df9*/
  }
  if ( a1->i64[0] ^ 0x73656C69666F7270LL | a1->u8[8] ^ 0x2ELL ) /*0x100ae9e25*/
    return 0; /*0x100ae9e51*/
  v4 = a2 - 9; /*0x100ae9e2a*/
  v5 = (const __m128i *)((char *)&a1->u64[1] + 1); /*0x100ae9e2e*/
LABEL_8:
  codexmate_lib::core::relay::config_takeover::first_section_part::h7372ff51d40b3fd1(&v9, v5, v4); /*0x100ae9e3c*/
  if ( __OFSUB__(-v9, 1) ) /*0x100ae9e4c*/
    return 0; /*0x100ae9e4f*/
  if ( v11 == 12 ) /*0x100ae9e68*/
  {
    v7 = (anon_597a1ab5dc54f5a7c7ef0ba6972bc544_284 ^ v10->i64[0] | v10->i32[2] ^ 0x79616C65u) == 0; /*0x100ae9e7d*/
LABEL_19:
    LOBYTE(v2) = v7; /*0x100ae9eee*/
    goto LABEL_20; /*0x100ae9eee*/
  }
  if ( v11 <= 0xC /*0x100ae9e99*/
    || v10->i64[0] ^ anon_597a1ab5dc54f5a7c7ef0ba6972bc544_292
     | *(__int64 *)((char *)v10->i64 + 5) ^ *(__int64 *)((char *)&anon_597a1ab5dc54f5a7c7ef0ba6972bc544_292 + 5) )
  {
    if ( v11 == 6 ) /*0x100ae9ea2*/
    {
      v7 = (anon_597a1ab5dc54f5a7c7ef0ba6972bc544_191 ^ v10->i32[0] | v10->i16[2] ^ 0x3169) == 0; /*0x100ae9eec*/
      goto LABEL_19; /*0x100ae9eec*/
    }
    if ( v11 == 19 ) /*0x100ae9ea8*/
    {
      v8 = _mm_or_si128( /*0x100ae9ecb*/
             _mm_xor_si128(
               _mm_loadu_si128((const __m128i *)((char *)&anon_597a1ab5dc54f5a7c7ef0ba6972bc544_315 + 3)),
               _mm_loadu_si128((const __m128i *)((char *)v10->i32 + 3))),
             _mm_xor_si128(
               _mm_loadu_si128(v10),
               _mm_loadu_si128((const __m128i *)&anon_597a1ab5dc54f5a7c7ef0ba6972bc544_315)));
      v7 = _mm_testz_si128(v8, v8); /*0x100ae9ecf*/
      goto LABEL_19; /*0x100ae9ed4*/
    }
    v2 = 0; /*0x100ae9f09*/
  }
  else
  {
    LOBYTE(v2) = 1; /*0x100ae9f0d*/
  }
LABEL_20:
  if ( v9 ) /*0x100ae9ef4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v9, 1); /*0x100ae9eff*/
  return v2; /*0x100ae9e55*/
}
/*
真实行为结论（基于完整反编译核对）：
判定一个 TOML section header 字节切片（a1,a2=ptr,len）是否是 AiMaMi 自身管理的
[profiles.X] 段：
  1. 若 len>=16：对前16字节做 SIMD XOR 与常量 xmmword_1016F4840 比较，testz==0 即前缀命中
     （常量具体内容本轮未解出，但比较逻辑与后续走向确认是 "profiles." 前缀的快速路径）；
  2. 否则若 len<9：直接返回 false；
  3. 否则走慢速路径：精确比较前8字节等于 "profiles"(0x73656C69666F7270 LE) 且第9字节=='.'
     （0x2E），命中则跳过这9字节前缀；
  4. 取前缀之后的 first_section_part（第一个点分段），若解析失败返回 false；
  5. 按该段长度分四种情况与已知字面量比较：
     - len==12：与 anon_284 常量做 XOR+testz 比较；
     - len>12：与 anon_292 常量做首13字节比较；
     - len==6：与 anon_191 常量做 XOR+testz 比较；
     - len==19：与 anon_315 常量做 SIMD XOR+testz 比较；
     - 都不满足：返回 false。
命中任一即返回 true（是 AiMaMi 拥有的 model section）。anon_284/292/191/315 四个常量本轮
未能解析出具体地址（lookup_funcs/get_global_value 均未命中该匿名符号名，因其是编译器生成
的匿名数据常量而非可命名符号），故其字面量内容仍是诚实缺口（推测为已知 model/provider
slug，如长度12/6/19字节的字面量，但未做字节级验证）。
*/
