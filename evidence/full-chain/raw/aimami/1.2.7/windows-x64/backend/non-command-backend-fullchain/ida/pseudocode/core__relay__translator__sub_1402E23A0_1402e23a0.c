// win 1.2.7 | module src/core/relay/translator.rs | ea 0x1402e23a0 | name sub_1402E23A0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1402E23A0(signed __int64 *a1, const __m128i *a2, signed __int64 a3)
{
  signed __int64 v3; // rdi
  __int64 result; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rbx
  __m128i *v12; // rcx
  const __m128i *v13; // rdx
  __int64 v14; // r12
  unsigned __int64 v15; // r13
  __int64 v16; // rcx
  unsigned __int64 v17; // r14
  __int64 v18; // rax
  _QWORD v19[5]; // [rsp+28h] [rbp-80h] BYREF
  char v20; // [rsp+50h] [rbp-58h]
  char v21[8]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v22; // [rsp+60h] [rbp-48h]

  v3 = a3;
  result = sub_140E91B30(a2, a3);
  if ( v7 >= 0x1B )
  {
    v8 = (unsigned int)_mm_movemask_epi8(
                         _mm_and_si128(
                           _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)result), (__m128i)xmmword_1419E4620),
                           _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(result + 11)), (__m128i)xmmword_1419E4610)));
    if ( (_DWORD)v8 == 0xFFFF )
    {
      v14 = result;
      v19[0] = result;
      v19[1] = v7;
      v19[2] = 0;
      v15 = v7;
      v19[3] = v7;
      v20 = 1;
      v19[4] = 0xA0000000ALL;
      result = sub_14036BCE0(v21, v19);
      if ( !v21[0] )
      {
        v3 = 0;
        v11 = 1;
        goto LABEL_17;
      }
      v17 = v22 + 1;
      result = v15;
      if ( v22 != -1 )
      {
        if ( v15 <= v17 )
        {
          if ( v15 != v17 )
LABEL_14:
            sub_141938F40(v14, v15, v22 + 1, v15, (__int64)&off_1419E83B8);
        }
        else if ( *(char *)(v14 + v17) < -64 )
        {
          goto LABEL_14;
        }
      }
      v3 = v15 - v17;
      if ( (__int64)(v15 - v17) < 0 )
        goto LABEL_4;
      if ( v15 == v17 )
      {
        v11 = 1;
      }
      else
      {
        nullsub_1(v16);
        v9 = 1;
        v18 = sub_140001650(v3, 1);
        if ( !v18 )
          goto LABEL_5;
        v11 = v18;
        result = v15;
        if ( v15 != v17 )
        {
          v13 = (const __m128i *)(v17 + v14);
          v12 = (__m128i *)v11;
          goto LABEL_9;
        }
      }
      v3 = 0;
      goto LABEL_17;
    }
  }
  if ( v3 < 0 )
  {
LABEL_4:
    v9 = 0;
    goto LABEL_5;
  }
  if ( !v3 )
  {
    v11 = 1;
    v3 = 0;
    goto LABEL_17;
  }
  nullsub_1(v8);
  v9 = 1;
  v10 = sub_140001650(v3, 1);
  if ( !v10 )
LABEL_5:
    sub_141938D2B(v9, v3);
  v11 = v10;
  v12 = (__m128i *)v10;
  v13 = a2;
LABEL_9:
  result = sub_1418F44E0(v12, v13, v3);
LABEL_17:
  *a1 = v3;
  a1[1] = v11;
  a1[2] = v3;
  return result;
}
