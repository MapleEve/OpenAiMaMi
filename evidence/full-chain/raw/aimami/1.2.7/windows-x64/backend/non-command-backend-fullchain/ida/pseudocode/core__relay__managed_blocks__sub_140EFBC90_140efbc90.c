// win 1.2.7 | module src/core/relay/managed_blocks.rs | ea 0x140efbc90 | name sub_140EFBC90
// win 1.2.7 | module src/core/relay/managed_blocks.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140EFBC90(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i si128; // xmm6
  __m128i v4; // xmm7
  char v5; // di
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r13
  __int64 v10; // r12
  __int64 v11; // rdx
  __int64 v12; // r15
  int v13; // eax
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 result; // rax
  __int64 v19; // [rsp+40h] [rbp-40h]
  _QWORD v21[5]; // [rsp+50h] [rbp-30h] BYREF
  char v22; // [rsp+78h] [rbp-8h]
  __int16 v23; // [rsp+80h] [rbp+0h]
  __m128i v24; // [rsp+88h] [rbp+8h] BYREF
  __int64 v25; // [rsp+98h] [rbp+18h]
  __int128 v26; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v27; // [rsp+B0h] [rbp+30h]
  __int64 v28; // [rsp+B8h] [rbp+38h]
  char v29; // [rsp+C7h] [rbp+47h] BYREF
  __int64 v30; // [rsp+C8h] [rbp+48h]

  v30 = -2;
  *(_QWORD *)&v26 = 0;
  *((_QWORD *)&v26 + 1) = 8;
  v27 = 0;
  v29 = 2;
  v19 = 0;
  v21[0] = a2;
  v21[1] = a3;
  v21[2] = 0;
  v21[3] = a3;
  v21[4] = 0xA0000000ALL;
  v22 = 1;
  v23 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_141A38650);
  v4 = _mm_load_si128((const __m128i *)&xmmword_141A38660);
  LODWORD(v28) = 0;
  v5 = 0;
  while ( 1 )
  {
    v6 = v21[0];
    sub_140F9C6A0(&v24, v21);
    if ( v24.m128i_i32[0] == 1 )
    {
      v7 = v19;
      v19 = v25;
      v8 = v25 - v7;
      v9 = v7 + v6;
      if ( v25 != v7 )
        goto LABEL_9;
      goto LABEL_15;
    }
    if ( HIBYTE(v23) )
      break;
    HIBYTE(v23) = 1;
    v8 = a3 - v19;
    if ( ((unsigned __int8)v23 | (a3 != v19)) != 1 )
      break;
    v9 = v21[0] + v19;
    if ( v8 )
    {
LABEL_9:
      if ( *(_BYTE *)(v9 + v8 - 1) == 10 )
      {
        if ( v8 == 1 )
        {
          v8 = 0;
        }
        else if ( *(_BYTE *)(v9 + v8 - 2) == 13 )
        {
          v8 -= 2;
        }
        else
        {
          --v8;
        }
      }
    }
LABEL_15:
    v10 = sub_140E91160(v9, v8);
    v12 = v11;
    if ( (unsigned __int8)sub_1402B5F80(&v29, v9, v8) )
    {
      v13 = v12 - 30;
      switch ( v12 )
      {
        case 30LL:
          v13 = _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v10 + 14)), si128),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v10), v4)));
          if ( v13 == 0xFFFF )
            goto LABEL_44;
          break;
        case 36LL:
          v13 = sub_1418F4B70(v10, aAimamiRelayMan_4);
          if ( !v13 )
            goto LABEL_44;
          break;
        case 39LL:
          v13 = sub_1418F4B70(v10, aAimamiRelayCod_0);
          if ( !v13 )
            goto LABEL_44;
          break;
        case 55LL:
          v13 = sub_1418F4B70(v10, aAimamiRelayMan_1);
          if ( !v13 )
            goto LABEL_2;
          break;
        case 60LL:
          v13 = sub_1418F4B70(v10, aAimamiRelayMan_2);
          if ( !v13 )
            goto LABEL_2;
          break;
        case 64LL:
          v13 = sub_1418F4B70(v10, aAimamiRelayCod);
          if ( !v13 )
            goto LABEL_2;
          break;
        default:
          break;
      }
      if ( (v5 & 1) != 0 )
        goto LABEL_2;
      if ( v12 && *(_BYTE *)v10 == 91 && *(_BYTE *)(v10 + v12 - 1) == 93 )
      {
        if ( v12 == 1 || *(char *)(v10 + 1) <= -65 )
          sub_141938F40(v10, v12, 1, v12 - 1, (__int64)&off_1419E98C8);
      }
      else if ( (v28 & 1) == 0 )
      {
        sub_140EFDF00(&v24, v10, v12);
        if ( v24.m128i_i64[0] != -1 )
        {
          v28 = v24.m128i_i64[0];
          v14 = v27;
          if ( v27 == (_QWORD)v26 )
            sub_14190FDC0(&v26);
          v15 = *((_QWORD *)&v26 + 1);
          v16 = 3 * v14;
          *(_QWORD *)(*((_QWORD *)&v26 + 1) + 8 * v16 + 16) = v25;
          *(__m128i *)(v15 + 8 * v16) = _mm_loadu_si128(&v24);
          v27 = v14 + 1;
        }
        LODWORD(v28) = 0;
        goto LABEL_44;
      }
      LOBYTE(v13) = 1;
      LODWORD(v28) = v13;
LABEL_44:
      v5 = 0;
      if ( (v23 & 0x100) != 0 )
        break;
    }
    else
    {
      if ( v5 != 1 )
        goto LABEL_44;
LABEL_2:
      v5 = 1;
      if ( (v23 & 0x100) != 0 )
        break;
    }
  }
  result = v27;
  *(_QWORD *)(a1 + 16) = v27;
  *(_OWORD *)a1 = v26;
  return result;
}
