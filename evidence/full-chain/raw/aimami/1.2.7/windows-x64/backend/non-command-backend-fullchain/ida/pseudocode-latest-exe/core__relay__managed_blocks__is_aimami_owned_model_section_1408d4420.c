// win 1.2.7 latest-exe | module src/core/relay/managed_blocks.rs | ea 0x1408d4420 | successor of pre-update 0x140f00780 | session <审计会话>
// match evidence: {"body_sim": 0.634, "str_ov": 0, "anchor": 0.066, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
char __fastcall is_aimami_owned_model_section(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // r8
  int v4; // r9d
  unsigned __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rax
  bool v8; // zf
  char result; // al
  char v10; // si
  __int64 v11; // [rsp+28h] [rbp-20h] BYREF
  const __m128i *v12; // [rsp+30h] [rbp-18h]
  unsigned __int64 v13; // [rsp+38h] [rbp-10h]

  if ( a2 < 0x10 )
  {
    if ( a2 < 9 )
      return 0;
LABEL_8:
    v5 = _byteswap_uint64(*a1);
    if ( v5 == 0x70726F66696C6573LL )
    {
      if ( *((_BYTE *)a1 + 8) == 46 )
        goto LABEL_12;
    }
    else if ( 2 * (v5 <= 0x70726F66696C6573LL) == 1 )
    {
LABEL_12:
      v6 = -9;
      v7 = 9;
      goto LABEL_14;
    }
    return 0;
  }
  v2 = _byteswap_uint64(*a1);
  v3 = 0x6D6F64656C5F7072LL;
  if ( v2 != 0x6D6F64656C5F7072LL
    || (v2 = _byteswap_uint64(a1[1]), v3 = 0x6F7669646572732ELL, v4 = 0, v2 != 0x6F7669646572732ELL) )
  {
    v4 = 2 * (v3 >= v2) - 1;
  }
  if ( v4 )
    goto LABEL_8;
  v6 = -16;
  v7 = 16;
LABEL_14:
  sub_1408CD0F0(&v11, (char *)a1 + v7, a2 + v6);
  if ( v11 == -1 )
    return 0;
  if ( v13 == 12 )
  {
    v8 = (v12->m128i_i64[0] ^ 0x725F696D616D6961LL | v12->m128i_u32[2] ^ 0x79616C65LL) == 0;
LABEL_25:
    result = v8;
    goto LABEL_26;
  }
  if ( v13 <= 0xC
    || v12->m128i_i64[0] ^ 0x725F696D616D6961LL | *(__int64 *)((char *)v12->m128i_i64 + 5) ^ 0x5F79616C65725F69LL )
  {
    if ( v13 == 6 )
    {
      v8 = (v12->m128i_i32[0] ^ 0x616D6961 | v12->m128i_u16[2] ^ 0x3169) == 0;
      goto LABEL_25;
    }
    if ( v13 == 19 )
    {
      v8 = _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128(v12), (__m128i)xmmword_141A45260),
               _mm_cmpeq_epi8(
                 _mm_loadu_si128((const __m128i *)((char *)v12->m128i_i32 + 3)),
                 (__m128i)xmmword_141A45250))) == 0xFFFF;
      goto LABEL_25;
    }
    result = 0;
  }
  else
  {
    result = 1;
  }
LABEL_26:
  if ( v11 )
  {
    v10 = result;
    sub_140001660(v12, v11, 1);
    return v10;
  }
  return result;
}
