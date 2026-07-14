// router_unlock_auth_has_real_oauth_sys @ 0x14060c510 size=601 proto=__int64 __fastcall(__int64)
__int64 __fastcall router_unlock_auth_has_real_oauth_sys(__int64 a1)
{
  unsigned int v1; // esi
  bool v3; // al
  __m128i v4; // rax
  __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned __int64 i; // r15
  __int64 v8; // rdx
  __m128i v9; // [rsp+28h] [rbp-58h] BYREF
  __int64 v10; // [rsp+38h] [rbp-48h]
  __int64 v11; // [rsp+40h] [rbp-40h]
  __int64 v12; // [rsp+48h] [rbp-38h]
  char v13; // [rsp+50h] [rbp-30h]
  __m128i v14; // [rsp+D8h] [rbp+58h] BYREF
  __int64 v15; // [rsp+E8h] [rbp+68h]
  __int64 v16; // [rsp+F0h] [rbp+70h]
  const __m128i *v17; // [rsp+F8h] [rbp+78h]
  unsigned __int64 v18; // [rsp+100h] [rbp+80h]
  __int64 v19; // [rsp+120h] [rbp+A0h]
  __int64 v20; // [rsp+128h] [rbp+A8h]
  char v21; // [rsp+180h] [rbp+100h]
  _DWORD v22[6]; // [rsp+188h] [rbp+108h] BYREF
  __int64 v23; // [rsp+1A0h] [rbp+120h]

  v23 = -2; /*0x14060c527*/
  sub_1401C2D20(&v9, *(_QWORD *)(a1 + 40), *(_QWORD *)(a1 + 48)); /*0x14060c53e*/
  if ( v9.m128i_i64[0] != 0x8000000000000001uLL ) /*0x14060c551*/
  {
    sub_1412762D0(&v14, &v9, 0xB0u); /*0x14060c56e*/
    if ( !v21 /*0x14060c5d9*/
      && (__OFSUB__(0, v16)
       || v18 < 0x17
       || _mm_movemask_epi8(
            _mm_and_si128(
              _mm_cmpeq_epi8(_mm_loadu_si128(v17), (__m128i)xmmword_141322F30),
              _mm_cmpeq_epi8(
                _mm_loadu_si128((const __m128i *)((char *)&v17->m128i_u32[1] + 3)),
                (__m128i)xmmword_141322F20))) != 0xFFFF) )
    {
      if ( __OFSUB__(0, v14.m128i_i64[0]) || v15 != 6 ) /*0x14060c5ec*/
      {
        v1 = 0; /*0x14060c686*/
        if ( __OFSUB__(0, v19) ) /*0x14060c68f*/
          goto LABEL_5; /*0x14060c68f*/
      }
      else
      {
        v3 = (*(_BYTE *)v14.m128i_i64[1] /*0x14060c681*/
            | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)v14.m128i_i64[1] - 65) < 0x1Au))) == 97
          && (*(_BYTE *)(v14.m128i_i64[1] + 1)
            | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(v14.m128i_i64[1] + 1) - 65) < 0x1Au))) == 112
          && (*(_BYTE *)(v14.m128i_i64[1] + 2)
            | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(v14.m128i_i64[1] + 2) - 65) < 0x1Au))) == 105
          && (*(_BYTE *)(v14.m128i_i64[1] + 3)
            | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(v14.m128i_i64[1] + 3) - 65) < 0x1Au))) == 107
          && (*(_BYTE *)(v14.m128i_i64[1] + 4)
            | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(v14.m128i_i64[1] + 4) - 65) < 0x1Au))) == 101
          && (*(_BYTE *)(v14.m128i_i64[1] + 5)
            | (unsigned __int8)(32 * ((unsigned __int8)(*(_BYTE *)(v14.m128i_i64[1] + 5) - 65) < 0x1Au))) == 121;
        v1 = 0; /*0x14060c699*/
        if ( v3 || __OFSUB__(-v19, 1) ) /*0x14060c6ad*/
          goto LABEL_5; /*0x14060c6ad*/
      }
      v4.m128i_i64[0] = sub_1402A1980(v20); /*0x14060c6c1*/
      v5 = v4.m128i_i64[1]; /*0x14060c6c7*/
      if ( v4.m128i_i64[1] ) /*0x14060c6cd*/
      {
        v6 = v4.m128i_i64[0]; /*0x14060c6d3*/
        if ( v4.m128i_i64[1] == 1 || *(_WORD *)v4.m128i_i64[0] != 24415 ) /*0x14060c6e1*/
        {
          v9 = v4; /*0x14060c6e7*/
          v10 = 0; /*0x14060c6ef*/
          v11 = v4.m128i_i64[1]; /*0x14060c6f7*/
          v12 = 0x2E0000002ELL; /*0x14060c705*/
          v13 = 1; /*0x14060c709*/
          for ( i = 0; ; ++i ) /*0x14060c70d*/
          {
            sub_1405B3270(v22, &v9); /*0x14060c726*/
            if ( v22[0] != 1 ) /*0x14060c733*/
              break; /*0x14060c733*/
          }
          if ( i >= 2 ) /*0x14060c73e*/
          {
            v1 = sub_1405BD9E0(v6, v5); /*0x14060c750*/
            LOBYTE(v1) = (v8 >= 301) | v1 ^ 1; /*0x14060c761*/
            goto LABEL_5; /*0x14060c764*/
          }
        }
      }
    }
    v1 = 0; /*0x14060c57c*/
LABEL_5:
    sub_140142730(&v14); /*0x14060c57e*/
    goto LABEL_6; /*0x14060c582*/
  }
  sub_140637CC0(&v9.m128i_u64[1]); /*0x14060c557*/
  v1 = 0; /*0x14060c55c*/
LABEL_6:
  LOBYTE(v1) = v1 & 1; /*0x14060c587*/