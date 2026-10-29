// win 1.2.7 | module src/core/relay/translator.rs | ea 0x140e4f6f0 | name sub_140E4F6F0
// win 1.2.7 | module src/core/relay/translator.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140E4F6F0(__int64 a1, _QWORD *a2, const char *a3, __int64 a4)
{
  __int64 v4; // rax
  int v5; // r9d
  __int64 v6; // r8
  char *v7; // rax
  bool v9; // [rsp+27h] [rbp-81h] BYREF
  __int64 v10; // [rsp+28h] [rbp-80h] BYREF
  __int64 v11; // [rsp+30h] [rbp-78h] BYREF
  _QWORD v12[2]; // [rsp+38h] [rbp-70h] BYREF
  _QWORD v13[2]; // [rsp+48h] [rbp-60h] BYREF
  _QWORD v14[10]; // [rsp+58h] [rbp-50h] BYREF

  switch ( a4 )
  {
    case 9LL:
      if ( *(_QWORD *)a3 ^ 0x6F7272655F697061LL | *((unsigned __int8 *)a3 + 8) ^ 0x72LL )
        goto LABEL_23;
      v4 = 9;
      break;
    case 14LL:
      if ( *(_QWORD *)a3 ^ 0x5F746E65746E6F63LL | *(_QWORD *)(a3 + 6) ^ 0x7265746C69665F74LL )
        goto LABEL_23;
      v4 = 14;
      break;
    case 15LL:
      if ( *(_QWORD *)a3 ^ 0x6E756F665F746F6ELL | *(_QWORD *)(a3 + 7) ^ 0x726F7272655F646ELL )
        goto LABEL_23;
      v4 = 15;
      break;
    case 16LL:
      v4 = 16;
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a3), (__m128i)xmmword_1419D3610)) != 0xFFFF
        && _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a3), (__m128i)xmmword_1419D3640)) != 0xFFFF
        && _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a3), (__m128i)xmmword_1419D3620)) != 0xFFFF )
      {
        v5 = _mm_movemask_epi8(_mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a3), (__m128i)xmmword_1419D3630));
        goto LABEL_20;
      }
      break;
    case 17LL:
      v4 = 17;
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_cvtsi32_si128(*((unsigned __int8 *)a3 + 16)), (__m128i)xmmword_141A08430),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a3), (__m128i)xmmword_141A51CB0))) != 0xFFFF )
      {
        v5 = _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_cvtsi32_si128(*((unsigned __int8 *)a3 + 16)), (__m128i)xmmword_141A08410),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a3), (__m128i)xmmword_141A51CC0)));
LABEL_20:
        if ( v5 != 0xFFFF )
          goto LABEL_23;
      }
      break;
    case 20LL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a3), (__m128i)xmmword_1419D35E0),
               _mm_cmpeq_epi8(_mm_cvtsi32_si128(*((_DWORD *)a3 + 4)), (__m128i)xmmword_1419D35D0))) != 0xFFFF )
        goto LABEL_23;
      v4 = 20;
      break;
    case 21LL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a3), (__m128i)xmmword_1419D3600),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a3 + 5)), (__m128i)xmmword_1419D35F0))) != 0xFFFF )
        goto LABEL_23;
      v4 = 21;
      break;
    case 23LL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a3), (__m128i)xmmword_1419D3660),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a3 + 7)), (__m128i)xmmword_1419D3650))) != 0xFFFF )
        goto LABEL_23;
      v4 = 23;
      break;
    case 31LL:
      if ( _mm_movemask_epi8(
             _mm_and_si128(
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)a3), (__m128i)xmmword_1419D35C0),
               _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(a3 + 15)), (__m128i)xmmword_1419D35B0))) != 0xFFFF )
        goto LABEL_23;
      v4 = 31;
      break;
    default:
LABEL_23:
      v4 = 14;
      a3 = aUpstreamError_0;
      break;
  }
  v12[0] = a3;
  v12[1] = v4;
  v6 = 7;
  if ( a2[43] == -1 )
  {
    v7 = (char *)&unk_141A541B6;
  }
  else
  {
    v7 = (char *)a2[44];
    switch ( a2[45] )
    {
      case 7LL:
        if ( *(_DWORD *)v7 ^ 0x75666572 | *(_DWORD *)(v7 + 3) ^ 0x6C617375 )
          goto LABEL_38;
        break;
      case 8LL:
        v6 = 8;
        if ( *(_QWORD *)v7 != 0x6E7275745F646E65LL && *(_QWORD *)v7 != 0x6573755F6C6F6F74LL )
          goto LABEL_38;
        break;
      case 0xALL:
        v6 = 10;
        if ( *(_QWORD *)v7 ^ 0x75745F6573756170LL | *((unsigned __int16 *)v7 + 4) ^ 0x6E72LL
          && *(_QWORD *)v7 ^ 0x656B6F745F78616DLL | *((unsigned __int16 *)v7 + 4) ^ 0x736ELL )
        {
          goto LABEL_38;
        }
        break;
      case 0xDLL:
        if ( *(_QWORD *)v7 ^ 0x7165735F706F7473LL | *(_QWORD *)(v7 + 5) ^ 0x65636E6575716573LL )
          goto LABEL_38;
        v6 = 13;
        break;
      case 0x1DLL:
        if ( _mm_movemask_epi8(
               _mm_and_si128(
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)v7), (__m128i)xmmword_14193C1F0),
                 _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)(v7 + 13)), (__m128i)xmmword_14193C1E0))) != 0xFFFF )
          goto LABEL_38;
        v6 = 29;
        break;
      default:
LABEL_38:
        v7 = (char *)&unk_141A541CF;
        v6 = 7;
        break;
    }
  }
  v13[0] = v7;
  v13[1] = v6;
  v10 = a2[83];
  v11 = a2[16];
  v9 = a2[46] != -2 && a2[62] != 0;
  v14[0] = v12;
  v14[1] = sub_140186EE0;
  v14[2] = v13;
  v14[3] = sub_140186EE0;
  v14[4] = &v10;
  v14[5] = sub_1416BCB10;
  v14[6] = &v11;
  v14[7] = sub_1416BCB10;
  v14[8] = &v9;
  v14[9] = sub_1416BCC50;
  return sub_1416ABFD0(a1, &unk_141A541D6, v14);
}
