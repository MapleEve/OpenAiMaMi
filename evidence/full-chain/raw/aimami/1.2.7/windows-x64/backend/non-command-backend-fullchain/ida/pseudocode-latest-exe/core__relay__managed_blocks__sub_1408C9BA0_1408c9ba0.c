// win 1.2.7 latest-exe | module src/core/relay/managed_blocks.rs | ea 0x1408c9ba0 | successor of pre-update 0x140c72050 | session <审计会话>
// match evidence: {"conf": true, "verdict": "CONFIRMED_STR"}
__int64 __fastcall sub_1408C9BA0(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  __m128i si128; // xmm6
  __m128i v5; // xmm7
  __int64 v6; // rax
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r12
  bool v13; // zf
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rcx
  __int64 result; // rax
  _OWORD *v24; // rcx
  _QWORD v25[3]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v26[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v27; // [rsp+50h] [rbp-30h]
  __int64 v28; // [rsp+60h] [rbp-20h]
  __int64 v29; // [rsp+68h] [rbp-18h]
  __int64 v30; // [rsp+70h] [rbp-10h]
  __int64 v31; // [rsp+78h] [rbp-8h]
  __int64 v32; // [rsp+80h] [rbp+0h]
  __int64 v33; // [rsp+88h] [rbp+8h]
  char v34; // [rsp+90h] [rbp+10h]
  __int16 v35; // [rsp+98h] [rbp+18h]
  __int64 v36; // [rsp+A0h] [rbp+20h]
  __int128 v37; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v38; // [rsp+B8h] [rbp+38h]
  __int64 v39; // [rsp+C0h] [rbp+40h]
  __int64 v40; // [rsp+C8h] [rbp+48h]
  char v41; // [rsp+D7h] [rbp+57h] BYREF
  __int64 v42; // [rsp+D8h] [rbp+58h]

  v42 = -2;
  v36 = a1;
  *(_QWORD *)&v37 = 0;
  *((_QWORD *)&v37 + 1) = 8;
  v38 = 0;
  v41 = 2;
  v27 = 0;
  v26[0] = a2;
  v26[1] = a3;
  v28 = a3;
  v29 = a2;
  v30 = a3;
  v31 = 0;
  v32 = a3;
  v33 = 0xA0000000ALL;
  v34 = 1;
  v35 = 0;
  v3 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_141A505A0);
  v5 = _mm_load_si128((const __m128i *)&xmmword_141A505B0);
  while ( 1 )
  {
    v6 = sub_140867020(v26);
    v7 = v6;
    v39 = v8;
    if ( !v6 )
      break;
    v9 = v39;
    v10 = sub_1408FEA60(v6, v39);
    v12 = v11;
    if ( (unsigned __int8)toml_lexical_state_line_is_structural(&v41, v7, v9) )
    {
      switch ( v12 )
      {
        case 0LL:
          goto LABEL_21;
        case 30LL:
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v10 + 14)), si128),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v10), v5))) == 0xFFFF )
            continue;
          goto LABEL_16;
        case 36LL:
          if ( !(unsigned int)sub_141923B40(v10, aAimamiRelayMan, 36) )
            continue;
          goto LABEL_16;
        case 39LL:
          if ( !(unsigned int)sub_141923B40(v10, &xmmword_141A54794, 39) )
            continue;
          goto LABEL_16;
        case 55LL:
          if ( (unsigned int)sub_141923B40(v10, &xmmword_141A542EF, 55) )
            goto LABEL_16;
          continue;
        case 60LL:
          if ( !(unsigned int)sub_141923B40(v10, aAimamiRelayMan_1, 60) )
            continue;
          goto LABEL_16;
        case 64LL:
          if ( !(unsigned int)sub_141923B40(v10, &xmmword_141A544DE, 64) )
            continue;
          goto LABEL_16;
        default:
LABEL_16:
          if ( *(_BYTE *)v10 != 91 || *(_BYTE *)(v10 + v12 - 1) != 93 )
          {
LABEL_21:
            v13 = (v3 & 1) == 0;
            v3 = 1;
            if ( !v13 )
              continue;
            sub_1408D1C90(v25, v10, v12);
            v15 = v25[0];
            if ( v25[0] == -1 )
            {
              v3 = 0;
              continue;
            }
            if ( v25[0] )
              sub_140001660(v25[1], v25[0], 1);
            v16 = v39;
            if ( v39 < 0 )
            {
              v22 = 0;
              goto LABEL_35;
            }
            if ( v39 )
            {
              nullsub_1(v14, v15);
              v17 = sub_140001650(v16, 1);
              if ( !v17 )
              {
                v40 = v16;
                v22 = 1;
LABEL_35:
                sub_14196B2DB(v22, v40);
              }
              v40 = v17;
              sub_1419234B0(v17, v7, v16);
              v18 = v38;
              if ( v38 != (_QWORD)v37 )
                goto LABEL_33;
LABEL_32:
              sub_141939F90(&v37);
            }
            else
            {
              v40 = 1;
              v18 = v38;
              if ( v38 == (_QWORD)v37 )
                goto LABEL_32;
            }
LABEL_33:
            v19 = *((_QWORD *)&v37 + 1);
            v20 = 3 * v18;
            v21 = v39;
            *(_QWORD *)(*((_QWORD *)&v37 + 1) + 8 * v20) = v39;
            *(_QWORD *)(v19 + 8 * v20 + 8) = v40;
            *(_QWORD *)(v19 + 8 * v20 + 16) = v21;
            v38 = v18 + 1;
            v3 = 0;
            continue;
          }
          if ( v12 == 1 || (v3 = 1, *(char *)(v10 + 1) <= -65) )
            sub_14196B4F0(v10, v12, 1, v12 - 1, (__int64)&off_141A496C8);
          return result;
      }
    }
  }
  result = v38;
  v24 = (_OWORD *)v36;
  *(_QWORD *)(v36 + 16) = v38;
  *v24 = v37;
  return result;
}
