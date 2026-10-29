// win 1.2.7 latest-exe | module src/core/relay/managed_blocks.rs | ea 0x1408cf8d0 | successor of pre-update 0x140efbc90 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.938, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_1408CF8D0(__int64 a1, __int64 a2, __int64 a3)
{
  __m128i si128; // xmm6
  __m128i v4; // xmm7
  char v5; // di
  __int64 v6; // r13
  __int64 v7; // rax
  __int64 v8; // rsi
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r12
  __int64 v13; // rdx
  __int64 v14; // r15
  int v15; // eax
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 result; // rax
  __int64 v21; // [rsp+40h] [rbp-40h]
  _QWORD v23[5]; // [rsp+50h] [rbp-30h] BYREF
  char v24; // [rsp+78h] [rbp-8h]
  __int16 v25; // [rsp+80h] [rbp+0h]
  __m128i v26; // [rsp+88h] [rbp+8h] BYREF
  __int64 v27; // [rsp+98h] [rbp+18h]
  __int128 v28; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v29; // [rsp+B0h] [rbp+30h]
  __int64 v30; // [rsp+B8h] [rbp+38h]
  char v31; // [rsp+C7h] [rbp+47h] BYREF
  __int64 v32; // [rsp+C8h] [rbp+48h]

  v32 = -2;
  *(_QWORD *)&v28 = 0;
  *((_QWORD *)&v28 + 1) = 8;
  v29 = 0;
  v31 = 2;
  v21 = 0;
  v23[0] = a2;
  v23[1] = a3;
  v23[2] = 0;
  v23[3] = a3;
  v23[4] = 0xA0000000ALL;
  v24 = 1;
  v25 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_141A505A0);
  v4 = _mm_load_si128((const __m128i *)&xmmword_141A505B0);
  LODWORD(v30) = 0;
  v5 = 0;
  while ( 1 )
  {
    v6 = v23[0];
    sub_1408FD7D0(&v26, v23);
    if ( v26.m128i_i32[0] == 1 )
    {
      v7 = v21;
      v21 = v27;
      v8 = v27 - v7;
      v9 = v7 + v6;
      if ( v27 != v7 )
        goto LABEL_9;
      goto LABEL_18;
    }
    if ( HIBYTE(v25) )
      break;
    HIBYTE(v25) = 1;
    v8 = a3 - v21;
    if ( ((unsigned __int8)v25 | (a3 != v21)) != 1 )
      break;
    v9 = v23[0] + v21;
    if ( v8 )
    {
LABEL_9:
      if ( *(_BYTE *)(v9 + v8 - 1) == 10 )
      {
        v10 = v8 - 1;
        if ( v8 == 1 )
        {
          v8 = -1;
          v11 = 0;
        }
        else
        {
          v11 = v9;
          if ( *(_BYTE *)(v9 + v8 - 2) != 13 )
            v11 = 0;
          v8 -= 2;
        }
        if ( v11 )
          v9 = v11;
        else
          v8 = v10;
      }
    }
LABEL_18:
    v12 = sub_1408FEA60(v9, v8);
    v14 = v13;
    if ( (unsigned __int8)toml_lexical_state_line_is_structural(&v31, v9, v8) )
    {
      v15 = v14 - 30;
      switch ( v14 )
      {
        case 30LL:
          v15 = _mm_movemask_epi8(
                  _mm_and_si128(
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v12 + 14)), si128),
                    _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v12), v4)));
          if ( v15 == 0xFFFF )
            goto LABEL_47;
          break;
        case 36LL:
          v15 = sub_141923B40(v12, aAimamiRelayMan, 36);
          if ( !v15 )
            goto LABEL_47;
          break;
        case 39LL:
          v15 = sub_141923B40(v12, &xmmword_141A54794, 39);
          if ( !v15 )
            goto LABEL_47;
          break;
        case 55LL:
          v15 = sub_141923B40(v12, &xmmword_141A542EF, 55);
          if ( !v15 )
            goto LABEL_2;
          break;
        case 60LL:
          v15 = sub_141923B40(v12, aAimamiRelayMan_1, 60);
          if ( !v15 )
            goto LABEL_2;
          break;
        case 64LL:
          v15 = sub_141923B40(v12, &xmmword_141A544DE, 64);
          if ( !v15 )
            goto LABEL_2;
          break;
        default:
          break;
      }
      if ( (v5 & 1) != 0 )
        goto LABEL_2;
      if ( v14 && *(_BYTE *)v12 == 91 && *(_BYTE *)(v12 + v14 - 1) == 93 )
      {
        if ( v14 == 1 || *(char *)(v12 + 1) <= -65 )
          sub_14196B4F0(v12, v14, 1, v14 - 1, (__int64)&off_141A496C8);
      }
      else if ( (v30 & 1) == 0 )
      {
        sub_1408D1C90(&v26, v12, v14);
        if ( v26.m128i_i64[0] != -1 )
        {
          v30 = v26.m128i_i64[0];
          v16 = v29;
          if ( v29 == (_QWORD)v28 )
            sub_141939F90(&v28);
          v17 = *((_QWORD *)&v28 + 1);
          v18 = 3 * v16;
          *(_QWORD *)(*((_QWORD *)&v28 + 1) + 8 * v18 + 16) = v27;
          *(__m128i *)(v17 + 8 * v18) = _mm_loadu_si128(&v26);
          v29 = v16 + 1;
        }
        LODWORD(v30) = 0;
        goto LABEL_47;
      }
      LOBYTE(v15) = 1;
      LODWORD(v30) = v15;
LABEL_47:
      v5 = 0;
      if ( (v25 & 0x100) != 0 )
        break;
    }
    else
    {
      if ( v5 != 1 )
        goto LABEL_47;
LABEL_2:
      v5 = 1;
      if ( (v25 & 0x100) != 0 )
        break;
    }
  }
  result = v29;
  *(_QWORD *)(a1 + 16) = v29;
  *(_OWORD *)a1 = v28;
  return result;
}
