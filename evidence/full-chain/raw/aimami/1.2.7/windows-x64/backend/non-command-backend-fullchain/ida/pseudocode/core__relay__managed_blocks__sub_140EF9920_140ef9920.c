// win 1.2.7 | module src/core/relay/managed_blocks.rs | ea 0x140ef9920 | name sub_140EF9920
// win 1.2.7 | module src/core/relay/managed_blocks.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140EF9920(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // al
  __m128i si128; // xmm6
  __m128i v5; // xmm7
  char v6; // di
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // rsi
  __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // rcx
  const char *v15; // rdx
  bool v16; // zf
  char v17; // al
  __int64 v18; // r9
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 result; // rax
  __int64 v24; // [rsp+38h] [rbp-48h]
  _QWORD v26[5]; // [rsp+48h] [rbp-38h] BYREF
  char v27; // [rsp+70h] [rbp-10h]
  __int16 v28; // [rsp+78h] [rbp-8h]
  __m128i v29; // [rsp+80h] [rbp+0h] BYREF
  __int64 v30; // [rsp+90h] [rbp+10h]
  __int128 v31; // [rsp+98h] [rbp+18h] BYREF
  __int64 v32; // [rsp+A8h] [rbp+28h]
  char v33; // [rsp+B7h] [rbp+37h] BYREF
  __int64 v34; // [rsp+B8h] [rbp+38h]

  v34 = -2;
  *(_QWORD *)&v31 = 0;
  *((_QWORD *)&v31 + 1) = 8;
  v32 = 0;
  v33 = 2;
  v24 = 0;
  v26[0] = a2;
  v26[1] = a3;
  v26[2] = 0;
  v26[3] = a3;
  v26[4] = 0xA0000000ALL;
  v27 = 1;
  v28 = 0;
  v3 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_141A38650);
  v5 = _mm_load_si128((const __m128i *)&xmmword_141A38660);
  v6 = 0;
  while ( (v3 & 1) == 0 )
  {
    v7 = v26[0];
    sub_140F9C6A0(&v29, v26);
    if ( v29.m128i_i32[0] == 1 )
    {
      v8 = v24;
      v24 = v30;
      v9 = v30 - v8;
      v10 = v8 + v7;
      if ( v30 == v8 )
        goto LABEL_16;
LABEL_10:
      if ( *(_BYTE *)(v10 + v9 - 1) == 10 )
      {
        if ( v9 == 1 )
        {
          v9 = 0;
        }
        else if ( *(_BYTE *)(v10 + v9 - 2) == 13 )
        {
          v9 -= 2;
        }
        else
        {
          --v9;
        }
      }
      goto LABEL_16;
    }
    if ( HIBYTE(v28) )
      break;
    HIBYTE(v28) = 1;
    v9 = a3 - v24;
    if ( ((unsigned __int8)v28 | (a3 != v24)) != 1 )
      break;
    v10 = v26[0] + v24;
    if ( v9 )
      goto LABEL_10;
LABEL_16:
    v11 = sub_140E91160(v10, v9);
    v13 = v12;
    if ( (unsigned __int8)sub_1402B5F80(&v33, v10, v9) )
    {
      switch ( v13 )
      {
        case 30LL:
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v11 + 14)), si128),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v11), v5))) != 0xFFFF )
            goto LABEL_24;
          v6 = 0;
          v3 = HIBYTE(v28);
          continue;
        case 36LL:
          if ( (unsigned int)sub_1418F4B70(v11, aAimamiRelayMan_4) )
            goto LABEL_24;
          v6 = 0;
          v3 = HIBYTE(v28);
          continue;
        case 39LL:
          if ( (unsigned int)sub_1418F4B70(v11, aAimamiRelayCod_0) )
            goto LABEL_24;
          v6 = 0;
          v3 = HIBYTE(v28);
          continue;
        case 55LL:
          v14 = v11;
          v15 = aAimamiRelayMan_1;
          goto LABEL_29;
        case 60LL:
          v14 = v11;
          v15 = aAimamiRelayMan_2;
          goto LABEL_29;
        case 64LL:
          v14 = v11;
          v15 = aAimamiRelayCod;
LABEL_29:
          v17 = v6 | ((unsigned int)sub_1418F4B70(v14, v15) == 0);
          v6 = 1;
          if ( (v17 & 1) == 0 )
            goto LABEL_30;
          goto LABEL_2;
        default:
LABEL_24:
          v16 = (v6 & 1) == 0;
          v6 = 1;
          if ( !v16 )
            goto LABEL_2;
          if ( v13 )
          {
LABEL_30:
            if ( *(_BYTE *)v11 == 91 )
            {
              if ( *(_BYTE *)(v11 + v13 - 1) == 93 )
              {
                v18 = v13 - 1;
                if ( v13 == 1 || *(char *)(v11 + 1) <= -65 )
                  sub_141938F40(v11, v13, 1, v18, (__int64)&off_1419E98C8);
                sub_140EF9D20(&v29, v11 + 1, v13 - 2, v18);
                v19 = v32;
                if ( v32 == (_QWORD)v31 )
                  sub_14190FDC0(&v31);
                v20 = *((_QWORD *)&v31 + 1);
                v21 = 3 * v19;
                *(_QWORD *)(*((_QWORD *)&v31 + 1) + 8 * v21 + 16) = v30;
                *(__m128i *)(v20 + 8 * v21) = _mm_loadu_si128(&v29);
                v32 = v19 + 1;
                v6 = 0;
                v3 = HIBYTE(v28);
              }
              else
              {
                v6 = 0;
                v3 = HIBYTE(v28);
              }
            }
            else
            {
              v6 = 0;
              v3 = HIBYTE(v28);
            }
          }
          else
          {
            v6 = 0;
            v3 = HIBYTE(v28);
          }
          break;
      }
    }
    else
    {
LABEL_2:
      v3 = HIBYTE(v28);
    }
  }
  result = v32;
  *(_QWORD *)(a1 + 16) = v32;
  *(_OWORD *)a1 = v31;
  return result;
}
