// win 1.2.7 | module src/core/relay/anthropic_trace.rs | ea 0x140bebf90 | name sub_140BEBF90
// win 1.2.7 | module src/core/relay/anthropic_trace.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140BEBF90(_QWORD *a1, __int64 a2, signed __int64 a3, _QWORD *a4)
{
  __int64 v6; // rbx
  __int64 v8; // r12
  _QWORD *v10; // r13
  __m128i *v11; // rax
  __int64 v12; // r14
  __m128i v13; // xmm0
  __m128i *v14; // rax
  __int64 v15; // rdx
  _QWORD *v16; // rbx
  __int64 v17; // rax
  _BYTE v18[32]; // [rsp+20h] [rbp-60h] BYREF
  char v19[8]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v20; // [rsp+48h] [rbp-38h]
  __int64 v21; // [rsp+50h] [rbp-30h]
  _QWORD v22[3]; // [rsp+60h] [rbp-20h] BYREF
  __m128i v23; // [rsp+78h] [rbp-8h] BYREF
  __m128i v24; // [rsp+88h] [rbp+8h] BYREF
  __m128i *v25; // [rsp+98h] [rbp+18h]
  __int64 v26; // [rsp+A0h] [rbp+20h]

  v26 = -2;
  v6 = *a1;
  if ( *a1 != -2 )
  {
    if ( a3 < 0 )
    {
      v8 = 0;
      goto LABEL_7;
    }
    if ( a3 )
    {
      v10 = a4;
      nullsub_1(a1);
      v8 = 1;
      v11 = (__m128i *)sub_140001650(a3, 1);
      if ( !v11 )
LABEL_7:
        sub_141938D2B(v8, a3);
      v12 = (__int64)v11;
      sub_1418F44E0(v11, (const __m128i *)a2, a3);
      a4 = v10;
      if ( v6 == -1 )
      {
LABEL_19:
        a1[1] = v12;
        a1[2] = a3;
        *a1 = -1;
        v22[1] = a1[1];
        v22[2] = a1[2];
        v22[0] = a3;
        v17 = *a4;
        v19[0] = 2;
        v20 = 0;
        v21 = v17;
        sub_140E72AA0(v18, a1 + 3, v22, v19);
        if ( v18[0] != 0xFF )
          sub_14002F9D0(v18);
        return 0;
      }
    }
    else
    {
      v12 = 1;
      if ( v6 == -1 )
        goto LABEL_19;
    }
    if ( v6 )
    {
      v15 = v6;
      v16 = a4;
      sub_140001660(a1[1], v15, 1);
      a4 = v16;
    }
    goto LABEL_19;
  }
  if ( a3 != 30
    || _mm_movemask_epi8(
         _mm_and_si128(
           _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a2), (__m128i)xmmword_141A17120),
           _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a2 + 14)), (__m128i)xmmword_141A17110))) != 0xFFFF )
  {
    return sub_141934E70();
  }
  sub_141934EA0(&v23, *a4);
  if ( v23.m128i_i8[0] != -1 )
  {
    v25 = (__m128i *)(a1 + 1);
    if ( *((_BYTE *)a1 + 8) != 0xFF )
      sub_14002F9D0(v25);
    v13 = _mm_loadu_si128(&v23);
    v14 = v25;
    v25[1] = _mm_loadu_si128(&v24);
    *v14 = v13;
    return 0;
  }
  return v23.m128i_i64[1];
}
