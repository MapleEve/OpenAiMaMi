// win 1.2.7 | module src/core/relay/managed_blocks.rs | ea 0x140c72050 | name sub_140C72050
// win 1.2.7 | module src/core/relay/managed_blocks.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140C72050(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // si
  __m128i si128; // xmm6
  __m128i v5; // xmm7
  __int64 v6; // rax
  const __m128i *v7; // r15
  __int64 v8; // rdx
  __int64 v9; // r14
  __int64 v10; // r13
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // r12
  bool v13; // zf
  __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  __m128i *v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rcx
  __int64 result; // rax
  _OWORD *v23; // rcx
  signed __int64 v24[3]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v25[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v26; // [rsp+50h] [rbp-30h]
  __int64 v27; // [rsp+60h] [rbp-20h]
  __int64 v28; // [rsp+68h] [rbp-18h]
  __int64 v29; // [rsp+70h] [rbp-10h]
  __int64 v30; // [rsp+78h] [rbp-8h]
  __int64 v31; // [rsp+80h] [rbp+0h]
  __int64 v32; // [rsp+88h] [rbp+8h]
  char v33; // [rsp+90h] [rbp+10h]
  __int16 v34; // [rsp+98h] [rbp+18h]
  __int64 v35; // [rsp+A0h] [rbp+20h]
  __int128 v36; // [rsp+A8h] [rbp+28h] BYREF
  __int64 v37; // [rsp+B8h] [rbp+38h]
  __int64 v38; // [rsp+C0h] [rbp+40h]
  __int64 v39; // [rsp+C8h] [rbp+48h]
  char v40; // [rsp+D7h] [rbp+57h] BYREF
  __int64 v41; // [rsp+D8h] [rbp+58h]

  v41 = -2;
  v35 = a1;
  *(_QWORD *)&v36 = 0;
  *((_QWORD *)&v36 + 1) = 8;
  v37 = 0;
  v40 = 2;
  v26 = 0;
  v25[0] = a2;
  v25[1] = a3;
  v27 = a3;
  v28 = a2;
  v29 = a3;
  v30 = 0;
  v31 = a3;
  v32 = 0xA0000000ALL;
  v33 = 1;
  v34 = 0;
  v3 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_141A38650);
  v5 = _mm_load_si128((const __m128i *)&xmmword_141A38660);
  while ( 1 )
  {
    v6 = sub_140C161C0(v25);
    v7 = (const __m128i *)v6;
    v38 = v8;
    if ( !v6 )
      break;
    v9 = v38;
    v10 = sub_140E91160(v6, v38);
    v12 = v11;
    if ( (unsigned __int8)sub_1402B5F80(&v40, v7, v9) )
    {
      switch ( v12 )
      {
        case 0uLL:
          goto LABEL_21;
        case 0x1EuLL:
          if ( _mm_movemask_epi8(
                 _mm_and_si128(
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v10 + 14)), si128),
                   _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v10), v5))) == 0xFFFF )
            continue;
          goto LABEL_16;
        case 0x24uLL:
          if ( !(unsigned int)sub_1418F4B70(
                                v10,
                                "# <<< aimami-relay managed end (top)# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)") )
            continue;
          goto LABEL_16;
        case 0x27uLL:
          if ( !(unsigned int)sub_1418F4B70(v10, &xmmword_141A3E5F4) )
            continue;
          goto LABEL_16;
        case 0x37uLL:
          if ( (unsigned int)sub_1418F4B70(v10, &xmmword_141A3E139) )
            goto LABEL_16;
          continue;
        case 0x3CuLL:
          if ( !(unsigned int)sub_1418F4B70(v10, "# >>> aimami-relay managed start (top, DO NOT EDIT MANUALLY)") )
            continue;
          goto LABEL_16;
        case 0x40uLL:
          if ( !(unsigned int)sub_1418F4B70(v10, &xmmword_141A3E31B) )
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
            sub_140C70C30(v24, (_BYTE *)v10, v12);
            if ( v24[0] == -1 )
            {
              v3 = 0;
              continue;
            }
            if ( v24[0] )
              sub_140001660(v24[1], v24[0], 1);
            v15 = v38;
            if ( v38 < 0 )
            {
              v21 = 0;
              goto LABEL_35;
            }
            if ( v38 )
            {
              nullsub_1(v14);
              v16 = (__m128i *)sub_140001650(v15, 1);
              if ( !v16 )
              {
                v39 = v15;
                v21 = 1;
LABEL_35:
                sub_141938D2B(v21, v39);
              }
              v39 = (__int64)v16;
              sub_1418F44E0(v16, v7, v15);
              v17 = v37;
              if ( v37 != (_QWORD)v36 )
                goto LABEL_33;
LABEL_32:
              sub_14190FDC0(&v36);
            }
            else
            {
              v39 = 1;
              v17 = v37;
              if ( v37 == (_QWORD)v36 )
                goto LABEL_32;
            }
LABEL_33:
            v18 = *((_QWORD *)&v36 + 1);
            v19 = 3 * v17;
            v20 = v38;
            *(_QWORD *)(*((_QWORD *)&v36 + 1) + 8 * v19) = v38;
            *(_QWORD *)(v18 + 8 * v19 + 8) = v39;
            *(_QWORD *)(v18 + 8 * v19 + 16) = v20;
            v37 = v17 + 1;
            v3 = 0;
            continue;
          }
          if ( v12 == 1 || (v3 = 1, *(char *)(v10 + 1) <= -65) )
            sub_141938F40(v10, v12, 1, v12 - 1, (__int64)&off_1419E98C8);
          return result;
      }
    }
  }
  result = v37;
  v23 = (_OWORD *)v35;
  *(_QWORD *)(v35 + 16) = v37;
  *v23 = v36;
  return result;
}
