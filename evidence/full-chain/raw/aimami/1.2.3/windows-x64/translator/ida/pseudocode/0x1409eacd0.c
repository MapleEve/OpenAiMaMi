// win 1.2.1 | module src/core/relay/translator.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1409EACD0(__int64 *a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  unsigned __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // rcx
  unsigned __int64 v13; // rdx
  __int64 v14; // r12
  unsigned __int64 v15; // r13
  __int64 v16; // rcx
  unsigned __int64 v17; // r14
  __int64 v18; // rax
  _QWORD v19[5]; // [rsp+28h] [rbp-80h] BYREF
  char v20; // [rsp+50h] [rbp-58h]
  char v21[8]; // [rsp+58h] [rbp-50h] BYREF
  __int64 v22; // [rsp+60h] [rbp-48h]

  v3 = a3; /*0x1409eacdf*/
  result = sub_14033C560(a2, a3); /*0x1409eacee*/
  if ( v7 >= 0x1B ) /*0x1409eacf7*/
  {
    v8 = (unsigned int)_mm_movemask_epi8( /*0x1409ead16*/
                         _mm_and_si128(
                           _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)result), (__m128i)xmmword_1417A2D50),
                           _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(result + 11)), (__m128i)xmmword_1417A2D40)));
    if ( (_DWORD)v8 == 0xFFFF ) /*0x1409ead20*/
    {
      v14 = result; /*0x1409ead70*/
      v19[0] = result; /*0x1409ead73*/
      v19[1] = v7; /*0x1409ead78*/
      v19[2] = 0; /*0x1409ead7d*/
      v15 = v7; /*0x1409ead86*/
      v19[3] = v7; /*0x1409ead89*/
      v20 = 1; /*0x1409ead8e*/
      v19[4] = 0xA0000000ALL; /*0x1409ead9d*/
      result = sub_140A68660(v21, v19); /*0x1409eadac*/
      if ( !v21[0] ) /*0x1409eadb6*/
      {
        v3 = 0; /*0x1409eadfc*/
        v11 = 1; /*0x1409eadfe*/
        goto LABEL_17; /*0x1409eadfe*/
      }
      v17 = v22 + 1; /*0x1409eadbd*/
      result = v15; /*0x1409eadc3*/
      if ( v22 != -1 ) /*0x1409eadc6*/
      {
        if ( v15 <= v17 ) /*0x1409eadcb*/
        {
          if ( v15 != v17 ) /*0x1409eae1e*/
LABEL_14:
            sub_1416C2F60(v14, v15, v22 + 1, v15, (__int64)&off_1417A7808); /*0x1409eadd4*/
        }
        else if ( *(char *)(v14 + v17) < -64 ) /*0x1409eadd2*/
        {
          goto LABEL_14; /*0x1409eadd2*/
        }
      }
      v3 = v15 - v17; /*0x1409eae23*/
      if ( (__int64)(v15 - v17) < 0 ) /*0x1409eae26*/
        goto LABEL_4; /*0x1409eae26*/
      if ( v15 == v17 ) /*0x1409eae2c*/
      {
        v11 = 1; /*0x1409eae61*/
      }
      else
      {
        nullsub_1(v16); /*0x1409eae2e*/
        v9 = 1; /*0x1409eae33*/
        v18 = sub_140001650(v3, 1); /*0x1409eae41*/
        if ( !v18 ) /*0x1409eae49*/
          goto LABEL_5; /*0x1409eae49*/
        v11 = v18; /*0x1409eae4f*/
        result = v15; /*0x1409eae55*/
        if ( v15 != v17 ) /*0x1409eae5b*/
        {
          v13 = v17 + v14; /*0x1409eae6b*/
          v12 = v11; /*0x1409eae6e*/
          goto LABEL_9; /*0x1409eae71*/
        }
      }
      v3 = 0; /*0x1409eae5d*/
      goto LABEL_17; /*0x1409eae5f*/
    }
  }
  if ( v3 < 0 ) /*0x1409ead25*/
  {
LABEL_4:
    v9 = 0; /*0x1409ead27*/
    goto LABEL_5; /*0x1409ead27*/
  }
  if ( !v3 ) /*0x1409ead37*/
  {
    v11 = 1; /*0x1409eadf3*/
    v3 = 0; /*0x1409eadf8*/
    goto LABEL_17; /*0x1409eadfa*/
  }
  nullsub_1(v8); /*0x1409ead3d*/
  v9 = 1; /*0x1409ead42*/
  v10 = sub_140001650(v3, 1); /*0x1409ead50*/
  if ( !v10 ) /*0x1409ead58*/
LABEL_5:
    sub_1416C2D4B(v9, v3); /*0x1409ead2a*/
  v11 = v10; /*0x1409ead5a*/
  v12 = v10; /*0x1409ead5d*/
  v13 = a2; /*0x1409ead60*/
LABEL_9:
  result = sub_141684120(v12, v13, v3); /*0x1409ead63*/
LABEL_17:
  *a1 = v3; /*0x1409eae03*/
  a1[1] = v11; /*0x1409eae06*/
  a1[2] = v3; /*0x1409eae0a*/
  return result; /*0x1409eae0e*/
}