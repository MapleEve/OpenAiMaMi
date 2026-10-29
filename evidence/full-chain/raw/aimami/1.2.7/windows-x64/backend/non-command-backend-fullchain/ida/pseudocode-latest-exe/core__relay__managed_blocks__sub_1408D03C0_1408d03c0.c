// win 1.2.7 latest-exe | module src/core/relay/managed_blocks.rs | ea 0x1408d03c0 | successor of pre-update 0x140efc690 | session <审计会话>
// match evidence: {"body_sim": 0.644, "str_ov": 0, "anchor": 0.066, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
char __fastcall sub_1408D03C0(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // r8
  int v4; // r9d
  unsigned __int64 v5; // rax
  __int64 v6; // r8
  __int64 v7; // rax
  bool v8; // zf
  char result; // al
  char v10; // al
  char v11; // si
  __int64 v12; // [rsp+28h] [rbp-20h] BYREF
  const __m128i *v13; // [rsp+30h] [rbp-18h]
  unsigned __int64 v14; // [rsp+38h] [rbp-10h]

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
  sub_1408CD0F0(&v12, (char *)a1 + v7, a2 + v6);
  if ( v12 == -1 )
    return 0;
  if ( v14 == 12 )
  {
    v8 = (v13->m128i_i64[0] ^ 0x725F696D616D6961LL | v13->m128i_u32[2] ^ 0x79616C65LL) == 0;
LABEL_25:
    v10 = v8;
    goto LABEL_26;
  }
  if ( v14 <= 0xC
    || v13->m128i_i64[0] ^ 0x725F696D616D6961LL | *(__int64 *)((char *)v13->m128i_i64 + 5) ^ 0x5F79616C65725F69LL )
  {
    if ( v14 == 6 )
    {
      v8 = (v13->m128i_i32[0] ^ 0x616D6961 | v13->m128i_u16[2] ^ 0x3169) == 0;
      goto LABEL_25;
    }
    if ( v14 == 19 )
    {
      v8 = _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128(v13), (__m128i)xmmword_141A45260),
               _mm_cmpeq_epi8(
                 _mm_loadu_si128((const __m128i *)((char *)v13->m128i_i32 + 3)),
                 (__m128i)xmmword_141A45250))) == 0xFFFF;
      goto LABEL_25;
    }
    v10 = 0;
  }
  else
  {
    v10 = 1;
  }
LABEL_26:
  result = v10 ^ 1;
  if ( v12 )
  {
    v11 = result;
    sub_140001660(v13, v12, 1);
    return v11;
  }
  return result;
}
