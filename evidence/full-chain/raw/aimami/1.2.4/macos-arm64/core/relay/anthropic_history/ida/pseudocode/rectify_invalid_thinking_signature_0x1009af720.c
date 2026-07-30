// __ZN13codexmate_lib4core5relay17anthropic_history34rectify_invalid_thinking_signature28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009af720 | 1.2.4 NEW-delta
__int64 __fastcall codexmate_lib::core::relay::anthropic_history::rectify_invalid_thinking_signature::_$u7b$$u7b$closure$u7d$$u7d$::hd2ab461e505fd0b5(
        __int64 a1,
        _BYTE *a2)
{
  unsigned int v2; // r15d
  __int64 v4; // rax
  const __m128i *v5; // rcx
  __int64 v6; // rax
  _QWORD *v7; // rax
  __m128i v8; // xmm1
  _BYTE *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  _BYTE v13[56]; // [rsp+8h] [rbp-38h] BYREF

  v4 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("type", 4, a2); /*0x1009af742*/
  if ( v4 && *(_BYTE *)v4 == 3 ) /*0x1009af74f*/
  {
    v5 = *(const __m128i **)(v4 + 16); /*0x1009af751*/
    v6 = *(_QWORD *)(v4 + 24); /*0x1009af755*/
    if ( v6 == 17 ) /*0x1009af75d*/
    {
      v8 = _mm_or_si128( /*0x1009af795*/
             _mm_xor_si128(_mm_cvtsi32_si128(v5[1].u8[0]), (__m128i)xmmword_101665E80),
             _mm_xor_si128(_mm_loadu_si128(v5), (__m128i)xmmword_10166CCA0));
      if ( _mm_testz_si128(v8, v8) ) /*0x1009af79e*/
      {
        v7 = *(_QWORD **)(a1 + 8); /*0x1009af7dd*/
        goto LABEL_12; /*0x1009af7dd*/
      }
    }
    else if ( v6 == 8 && v5->i64[0] == 0x676E696B6E696874LL ) /*0x1009af772*/
    {
      v7 = *(_QWORD **)a1; /*0x1009af774*/
LABEL_12:
      ++*v7; /*0x1009af7e1*/
      return 0; /*0x1009af7e4*/
    }
  }
  LOBYTE(v2) = 1; /*0x1009af7a0*/
  if ( *a2 == 5 ) /*0x1009af7a7*/
  {
    v9 = a2 + 8; /*0x1009af7bd*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::hbb390a8031d3b729(v13, a2 + 8, "signature", 9); /*0x1009af7c0*/
    if ( v13[0] != 6 ) /*0x1009af7c9*/
    {
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(v13, v9, v10, v11); /*0x1009af7cf*/
      ++**(_QWORD **)(a1 + 16); /*0x1009af7d8*/
    }
  }
  return v2; /*0x1009af7ea*/
}