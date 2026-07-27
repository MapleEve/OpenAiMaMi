// module: codexmate_lib/core/relay/health_check
// addr: 0x140666fa0
// name: extract_stream_text_delta
// win 1.2.3 | = mac codexmate_lib::core::relay::health_check::extract_stream_text_delta | 跨平台字符串签名匹配(名↔函数一致)
__int64 *__fastcall extract_stream_text_delta(__int64 *a1, char a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdi
  __int64 v13; // r15
  __int64 v14; // rax
  __int64 v15; // rax
  const char *v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rdi
  __int64 v22; // r14
  __int64 v23; // r15
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rbx
  char v28; // [rsp+28h] [rbp-40h] BYREF
  __int64 v29; // [rsp+30h] [rbp-38h]
  __int64 v30; // [rsp+38h] [rbp-30h]

  if ( !a2 )
  {
    v8 = sub_141433D50(aChoices, 7, a3);
    if ( !v8 )
      goto LABEL_32;
    if ( *(_BYTE *)v8 != 4 )
      goto LABEL_32;
    if ( !*(_QWORD *)(v8 + 24) )
      goto LABEL_32;
    v9 = sub_141433D50(aDelta_1, 5, *(_QWORD *)(v8 + 16));
    if ( !v9 )
      goto LABEL_32;
    v10 = sub_141433D50(aContent_3, 7, v9);
    if ( !v10 || *(_BYTE *)v10 != 3 )
      goto LABEL_32;
    v12 = *(_QWORD *)(v10 + 24);
    if ( v12 < 0 )
    {
      v13 = 0;
      goto LABEL_17;
    }
    if ( v12 )
    {
      v25 = *(_QWORD *)(v10 + 16);
      nullsub_1(v11);
      v13 = 1;
      v26 = sub_140001650(v12, 1);
      if ( !v26 )
LABEL_17:
        sub_1416C2D4B(v13, v12);
      v27 = v26;
      sub_141684120(v26, v25, v12);
    }
    else
    {
      v27 = 1;
    }
    *a1 = v12;
    a1[1] = v27;
    a1[2] = v12;
    return a1;
  }
  if ( a2 == 1 )
  {
    v5 = sub_141433D50(aType_5, 4, a3);
    if ( !v5 || *(_BYTE *)v5 != 3 )
      goto LABEL_32;
    v6 = *(_QWORD *)(v5 + 16);
    v7 = *(_QWORD *)(v5 + 24);
    if ( v7 == 37 )
    {
      if ( (unsigned int)sub_1416847B0(v6, aResponseReason_0, 37) )
      {
LABEL_32:
        *a1 = -1;
        return a1;
      }
    }
    else if ( v7 != 26
           || _mm_movemask_epi8(
                _mm_and_si128(
                  _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v6), (__m128i)xmmword_1417640A0),
                  _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v6 + 10)), (__m128i)xmmword_141764090))) != 0xFFFF )
    {
      goto LABEL_32;
    }
    v16 = aDelta_1;
    v17 = 5;
    v18 = a3;
  }
  else
  {
    v14 = sub_141433D50(aType_5, 4, a3);
    if ( !v14 )
      goto LABEL_32;
    if ( *(_BYTE *)v14 != 3 )
      goto LABEL_32;
    if ( *(_QWORD *)(v14 + 24) != 19 )
      goto LABEL_32;
    if ( _mm_movemask_epi8(
           _mm_and_si128(
             _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v14 + 16)), (__m128i)xmmword_141764080),
             _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(*(_QWORD *)(v14 + 16) + 3LL)), (__m128i)xmmword_141764070))) != 0xFFFF )
      goto LABEL_32;
    v15 = sub_141433D50(aDelta_1, 5, a3);
    if ( !v15 )
      goto LABEL_32;
    v16 = aText_5;
    v17 = 4;
    v18 = v15;
  }
  v19 = sub_141433D50(v16, v17, v18);
  if ( !v19 || *(_BYTE *)v19 != 3 )
    goto LABEL_32;
  v20 = *(_QWORD *)(v19 + 16);
  v21 = *(_QWORD *)(v19 + 24);
  sub_140388B60((unsigned int)&v28, v21, 0, 1, 1);
  v22 = v29;
  if ( v28 )
    sub_1416C2D4B(v29, v30);
  v23 = v30;
  if ( v21 )
    sub_141684120(v30, v20, v21);
  *a1 = v22;
  a1[1] = v23;
  a1[2] = v21;
  return a1;
}