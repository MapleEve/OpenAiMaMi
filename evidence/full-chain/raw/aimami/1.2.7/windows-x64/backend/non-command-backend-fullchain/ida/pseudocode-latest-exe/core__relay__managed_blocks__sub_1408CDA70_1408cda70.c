// win 1.2.7 latest-exe | module src/core/relay/managed_blocks.rs | ea 0x1408cda70 | successor of pre-update 0x140ef9920 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.914, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_1408CDA70(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  __m128i si128; // xmm6
  __m128i v5; // xmm7
  char v6; // di
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // r8
  __int64 v17; // rcx
  __int128 *v18; // rdx
  bool v19; // zf
  char v20; // al
  __int64 v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 result; // rax
  __int64 v26; // [rsp+38h] [rbp-48h]
  _QWORD v28[5]; // [rsp+48h] [rbp-38h] BYREF
  char v29; // [rsp+70h] [rbp-10h]
  __int16 v30; // [rsp+78h] [rbp-8h]
  __m128i v31; // [rsp+80h] [rbp+0h] BYREF
  __int64 v32; // [rsp+90h] [rbp+10h]
  __int128 v33; // [rsp+98h] [rbp+18h] BYREF
  __int64 v34; // [rsp+A8h] [rbp+28h]
  char v35; // [rsp+B7h] [rbp+37h] BYREF
  __int64 v36; // [rsp+B8h] [rbp+38h]

  v36 = -2;
  *(_QWORD *)&v33 = 0;
  *((_QWORD *)&v33 + 1) = 8;
  v34 = 0;
  v35 = 2;
  v26 = 0;
  v28[0] = a2;
  v28[1] = a3;
  v28[2] = 0;
  v28[3] = a3;
  v28[4] = 0xA0000000ALL;
  v29 = 1;
  v30 = 0;
  v3 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_141A505A0);
  v5 = _mm_load_si128((const __m128i *)&xmmword_141A505B0);
  v6 = 0;
  while ( (v3 & 1) == 0 )
  {
    v7 = v28[0];
    sub_1408FD7D0(&v31, v28);
    if ( v31.m128i_i32[0] == 1 )
    {
      v8 = v26;
      v26 = v32;
      v9 = v32 - v8;
      v10 = v8 + v7;
      if ( v32 == v8 )
        goto LABEL_19;
LABEL_10:
      if ( *(_BYTE *)(v10 + v9 - 1) == 10 )
      {
        v11 = v9 - 1;
        if ( v9 == 1 )
        {
          v9 = -1;
          v12 = 0;
        }
        else
        {
          v12 = v10;
          if ( *(_BYTE *)(v10 + v9 - 2) != 13 )
            v12 = 0;
          v9 -= 2;
        }
        if ( v12 )
          v10 = v12;
        else
          v9 = v11;
      }
      goto LABEL_19;
    }
    if ( HIBYTE(v30) )
      break;
    HIBYTE(v30) = 1;
    v9 = a3 - v26;
    if ( ((unsigned __int8)v30 | (a3 != v26)) != 1 )
      break;
    v10 = v28[0] + v26;
    if ( v9 )
      goto LABEL_10;
LABEL_19:
    v13 = sub_1408FEA60(v10, v9);
    v15 = v14;
    if ( (unsigned __int8)toml_lexical_state_line_is_structural(&v35, v10, v9) )
    {
      switch ( v15 )
      {
        case 30LL:
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v13 + 14)), si128),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v13), v5))) != 0xFFFF )
            goto LABEL_27;
          v6 = 0;
          v3 = HIBYTE(v30);
          continue;
        case 36LL:
          if ( (unsigned int)sub_141923B40(v13, aAimamiRelayMan, 36) )
            goto LABEL_27;
          v6 = 0;
          v3 = HIBYTE(v30);
          continue;
        case 39LL:
          if ( (unsigned int)sub_141923B40(v13, &xmmword_141A54794, 39) )
            goto LABEL_27;
          v6 = 0;
          v3 = HIBYTE(v30);
          continue;
        case 55LL:
          v16 = 55;
          v17 = v13;
          v18 = &xmmword_141A542EF;
          goto LABEL_32;
        case 60LL:
          v16 = 60;
          v17 = v13;
          v18 = (__int128 *)aAimamiRelayMan_1;
          goto LABEL_32;
        case 64LL:
          v16 = 64;
          v17 = v13;
          v18 = &xmmword_141A544DE;
LABEL_32:
          v20 = v6 | ((unsigned int)sub_141923B40(v17, v18, v16) == 0);
          v6 = 1;
          if ( (v20 & 1) == 0 )
            goto LABEL_33;
          goto LABEL_2;
        default:
LABEL_27:
          v19 = (v6 & 1) == 0;
          v6 = 1;
          if ( !v19 )
            goto LABEL_2;
          if ( v15 )
          {
LABEL_33:
            if ( *(_BYTE *)v13 == 91 )
            {
              if ( *(_BYTE *)(v13 + v15 - 1) == 93 )
              {
                if ( v15 == 1 || *(char *)(v13 + 1) <= -65 )
                  sub_14196B4F0(v13, v15, 1, v15 - 1, (__int64)&off_141A496C8);
                sub_1408CDE80(&v31, v13 + 1, v15 - 2);
                v21 = v34;
                if ( v34 == (_QWORD)v33 )
                  sub_141939F90(&v33);
                v22 = *((_QWORD *)&v33 + 1);
                v23 = 3 * v21;
                *(_QWORD *)(*((_QWORD *)&v33 + 1) + 8 * v23 + 16) = v32;
                *(__m128i *)(v22 + 8 * v23) = _mm_loadu_si128(&v31);
                v34 = v21 + 1;
                v6 = 0;
                v3 = HIBYTE(v30);
              }
              else
              {
                v6 = 0;
                v3 = HIBYTE(v30);
              }
            }
            else
            {
              v6 = 0;
              v3 = HIBYTE(v30);
            }
          }
          else
          {
            v6 = 0;
            v3 = HIBYTE(v30);
          }
          break;
      }
    }
    else
    {
LABEL_2:
      v3 = HIBYTE(v30);
    }
  }
  result = v34;
  *(_QWORD *)(a1 + 16) = v34;
  *(_OWORD *)a1 = v33;
  return result;
}
