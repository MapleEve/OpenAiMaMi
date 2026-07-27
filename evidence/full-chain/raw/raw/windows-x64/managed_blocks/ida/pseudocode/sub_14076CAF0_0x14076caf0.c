// win 1.2.1 | module src/core/relay/managed_blocks.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_14076CAF0(__m128i *a1, __int64 a2, __int64 a3)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __m128i si128; // xmm6
  __int64 v10; // r15
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r15
  unsigned __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __m128i v18; // xmm0
  __m128i v19; // xmm1
  __int64 v20; // rdi
  int v22[4]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v23; // [rsp+38h] [rbp-48h]
  __m128i v24; // [rsp+40h] [rbp-40h] BYREF
  __m128i v25; // [rsp+50h] [rbp-30h]
  __m128i v26; // [rsp+60h] [rbp-20h]
  __int64 v27; // [rsp+70h] [rbp-10h]
  __int64 v28; // [rsp+78h] [rbp-8h]
  _QWORD v29[5]; // [rsp+80h] [rbp+0h] BYREF
  char v30; // [rsp+A8h] [rbp+28h]
  __int16 v31; // [rsp+B0h] [rbp+30h]
  __int64 v32; // [rsp+B8h] [rbp+38h]

  v32 = -2; /*0x14076cb0b*/
  v6 = sub_141470CD0(a1, a2); /*0x14076cb1c*/
  if ( *(_BYTE *)(v6 + 16) == 1 ) /*0x14076cb25*/
  {
    v7 = *(_QWORD *)v6; /*0x14076cb2b*/
    v8 = *(_QWORD *)(v6 + 8); /*0x14076cb2e*/
  }
  else
  {
    v20 = v6; /*0x14076cd00*/
    v7 = sub_141486EF0(); /*0x14076cd08*/
    v6 = v20; /*0x14076cd0b*/
    *(_QWORD *)v20 = v7; /*0x14076cd0e*/
    *(_QWORD *)(v20 + 8) = v8; /*0x14076cd11*/
    *(_BYTE *)(v20 + 16) = 1; /*0x14076cd15*/
  }
  *(_QWORD *)v6 = v7 + 1; /*0x14076cb36*/
  v25 = *((__m128i *)&off_141786750 + 1); /*0x14076cb40*/
  v24 = _mm_loadu_si128((const __m128i *)&off_141786750); /*0x14076cb4c*/
  v26.m128i_i64[0] = v7; /*0x14076cb51*/
  v26.m128i_i64[1] = v8; /*0x14076cb55*/
  v27 = 0; /*0x14076cb59*/
  v28 = a3; /*0x14076cb61*/
  v29[0] = a2; /*0x14076cb69*/
  v29[1] = a3; /*0x14076cb6d*/
  v29[2] = 0; /*0x14076cb71*/
  v29[3] = a3; /*0x14076cb79*/
  v29[4] = 0xA0000000ALL; /*0x14076cb87*/
  v30 = 1; /*0x14076cb8b*/
  v31 = 0; /*0x14076cb8f*/
  si128 = _mm_load_si128((const __m128i *)&xmmword_141748EC0); /*0x14076cb99*/
  do /*0x14076cbb4*/
  {
    v10 = v29[0]; /*0x14076cbba*/
    LOBYTE(v11) = sub_1407BC790(v22, v29); /*0x14076cbc4*/
    if ( v22[0] == 1 ) /*0x14076cbce*/
    {
      v12 = v27; /*0x14076cbd4*/
      v27 = v23; /*0x14076cbd8*/
      v13 = v23 - v12; /*0x14076cbdc*/
      v14 = v12 + v10; /*0x14076cbdf*/
      if ( v23 == v12 ) /*0x14076cbe5*/
        goto LABEL_17; /*0x14076cbe5*/
LABEL_11:
      if ( *(_BYTE *)(v14 + v13 - 1) == 10 ) /*0x14076cc26*/
      {
        if ( v13 == 1 ) /*0x14076cc2e*/
        {
          v13 = 0; /*0x14076cc3e*/
        }
        else if ( *(_BYTE *)(v14 + v13 - 2) == 13 ) /*0x14076cc36*/
        {
          v13 -= 2; /*0x14076cc38*/
        }
        else
        {
          --v13; /*0x14076cc42*/
        }
      }
      goto LABEL_17; /*0x14076cc3c*/
    }
    if ( HIBYTE(v31) ) /*0x14076cbf4*/
      break; /*0x14076cbf4*/
    HIBYTE(v31) = 1; /*0x14076cbfa*/
    v13 = v28 - v27; /*0x14076cc06*/
    LOBYTE(v11) = v31 | (v28 != v27); /*0x14076cc0c*/
    if ( (_BYTE)v11 != 1 ) /*0x14076cc11*/
      break; /*0x14076cc11*/
    v14 = v29[0] + v27; /*0x14076cc17*/
    if ( v13 ) /*0x14076cc1e*/
      goto LABEL_11; /*0x14076cc1e*/
LABEL_17:
    v11 = sub_14033BC10(v14, v13); /*0x14076cc50*/
    if ( v15 && *(_BYTE *)v11 == 91 && *(_BYTE *)(v11 + v15 - 1) == 93 ) /*0x14076cc70*/
    {
      if ( v15 == 1 || *(char *)(v11 + 1) <= -65 ) /*0x14076cc84*/
        sub_1416C2F60(v11, v15, 1, v15 - 1, (__int64)&off_141782B88); /*0x14076cd37*/
      if ( v15 >= 0x12 /*0x14076cca7*/
        && _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v11 + 1)), si128)) == 0xFFFF )
      {
        v16 = sub_14033BE90(v11 + 17, v15 - 18, 34); /*0x14076ccbb*/
        LOBYTE(v11) = sub_140475960(&v24, v16, v17); /*0x14076ccca*/
      }
    }
  }
  while ( !HIBYTE(v31) ); /*0x14076cbb4*/
  v18 = v24; /*0x14076ccd5*/
  v19 = v25; /*0x14076ccd9*/
  a1[2] = v26; /*0x14076cce1*/
  a1[1] = v19; /*0x14076cce5*/
  *a1 = v18; /*0x14076cce9*/
  return v11; /*0x14076ccec*/
}