// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::failure_diagnostic::h9787bc748bb0ebe9; addr: 0x1002a9d20; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:51Z
__int64 __fastcall codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::failure_diagnostic::h9787bc748bb0ebe9(
        __int64 a1,
        _QWORD *a2,
        char *a3,
        __int64 a4)
{
  __int64 v4; // rcx
  __m128i v5; // xmm0
  __m128i v6; // xmm0
  __m128i v7; // xmm0
  __m128i v8; // xmm0
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  __m128i v11; // xmm0
  __m128i v12; // xmm1
  __m128i v13; // xmm1
  __m128i v14; // xmm0
  __int64 v15; // rdx
  char *v16; // rcx
  __m128i v17; // xmm0
  _QWORD v19[10]; // [rsp-90h] [rbp-90h] BYREF
  _QWORD v20[2]; // [rsp-40h] [rbp-40h] BYREF
  _QWORD v21[2]; // [rsp-30h] [rbp-30h] BYREF
  __int64 v22; // [rsp-20h] [rbp-20h] BYREF
  __int64 v23; // [rsp-18h] [rbp-18h] BYREF
  bool v24; // [rsp-9h] [rbp-9h] BYREF

  switch ( a4 ) /*0x1002a9d3c*/
  {
    case 9LL: /*0x1002a9d3c*/
      if ( *(_QWORD *)a3 ^ 0x6F7272655F697061LL | (unsigned __int8)a3[8] ^ 0x72LL ) /*0x1002a9d53*/
        goto LABEL_23; /*0x1002a9d56*/
      v4 = 9; /*0x1002a9d5c*/
      break; /*0x1002a9d61*/
    case 14LL: /*0x1002a9d3c*/
      if ( *(_QWORD *)a3 ^ 0x5F746E65746E6F63LL | *(_QWORD *)(a3 + 6) ^ 0x7265746C69665F74LL ) /*0x1002a9de1*/
        goto LABEL_23; /*0x1002a9de4*/
      v4 = 14; /*0x1002a9dea*/
      break; /*0x1002a9def*/
    case 15LL: /*0x1002a9d3c*/
      if ( *(_QWORD *)a3 ^ 0x6E756F665F746F6ELL | *(_QWORD *)(a3 + 7) ^ 0x726F7272655F646ELL ) /*0x1002a9d81*/
        goto LABEL_23; /*0x1002a9d84*/
      v4 = 15; /*0x1002a9d8a*/
      break; /*0x1002a9d8f*/
    case 16LL: /*0x1002a9d3c*/
      v8 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)a3), (__m128i)xmmword_10181FE30); /*0x1002a9e5c*/
      v4 = 16; /*0x1002a9e64*/
      if ( !_mm_testz_si128(v8, v8) ) /*0x1002a9e6e*/
      {
        v9 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)a3), (__m128i)xmmword_10181FE40); /*0x1002a9e78*/
        if ( !_mm_testz_si128(v9, v9) ) /*0x1002a9e85*/
        {
          v10 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)a3), (__m128i)xmmword_10181FE50); /*0x1002a9e8f*/
          if ( !_mm_testz_si128(v10, v10) ) /*0x1002a9e9c*/
          {
            v11 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)a3), (__m128i)xmmword_10181FE60); /*0x1002a9ea6*/
            if ( !_mm_testz_si128(v11, v11) ) /*0x1002a9eb3*/
              goto LABEL_23; /*0x1002a9eb3*/
          }
        }
      }
      break; /*0x1002a9eb3*/
    case 17LL: /*0x1002a9d3c*/
      v12 = _mm_or_si128( /*0x1002a9eda*/
              _mm_xor_si128(_mm_cvtsi32_si128((unsigned __int8)a3[16]), (__m128i)xmmword_10181FDA0),
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)a3), (__m128i)xmmword_10181FD90));
      v4 = 17; /*0x1002a9ede*/
      if ( !_mm_testz_si128(v12, v12) ) /*0x1002a9ee8*/
      {
        v13 = _mm_or_si128( /*0x1002a9f06*/
                _mm_xor_si128(_mm_cvtsi32_si128((unsigned __int8)a3[16]), (__m128i)xmmword_10181FDC0),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)a3), (__m128i)xmmword_10181FDB0));
        if ( !_mm_testz_si128(v13, v13) ) /*0x1002a9f0f*/
          goto LABEL_23; /*0x1002a9f0f*/
      }
      break; /*0x1002a9f0f*/
    case 20LL: /*0x1002a9d3c*/
      v5 = _mm_or_si128( /*0x1002a9dad*/
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a3), (__m128i)xmmword_10181FDE0),
             _mm_xor_si128(_mm_cvtsi32_si128(*((_DWORD *)a3 + 4)), (__m128i)xmmword_10181FDD0));
      if ( !_mm_testz_si128(v5, v5) ) /*0x1002a9db6*/
        goto LABEL_23; /*0x1002a9db6*/
      v4 = 20; /*0x1002a9dbc*/
      break; /*0x1002a9dc1*/
    case 21LL: /*0x1002a9d3c*/
      v6 = _mm_or_si128( /*0x1002a9e0d*/
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a3), (__m128i)xmmword_10181FE00),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a3 + 5)), (__m128i)xmmword_10181FDF0));
      if ( !_mm_testz_si128(v6, v6) ) /*0x1002a9e16*/
        goto LABEL_23; /*0x1002a9e16*/
      v4 = 21; /*0x1002a9e1c*/
      break; /*0x1002a9e21*/
    case 23LL: /*0x1002a9d3c*/
      v7 = _mm_or_si128( /*0x1002a9e3f*/
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)a3), (__m128i)xmmword_10181FE80),
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a3 + 7)), (__m128i)xmmword_10181FE70));
      if ( !_mm_testz_si128(v7, v7) ) /*0x1002a9e48*/
        goto LABEL_23; /*0x1002a9e48*/
      v4 = 23; /*0x1002a9e4e*/
      break; /*0x1002a9e53*/
    case 31LL: /*0x1002a9d3c*/
      v14 = _mm_or_si128( /*0x1002a9f2c*/
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)a3), (__m128i)xmmword_10181FE20),
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)(a3 + 15)), (__m128i)xmmword_10181FE10));
      if ( !_mm_testz_si128(v14, v14) ) /*0x1002a9f35*/
        goto LABEL_23; /*0x1002a9f35*/
      v4 = 31; /*0x1002aa143*/
      break; /*0x1002aa148*/
    default:
LABEL_23:
      v4 = 14; /*0x1002a9f3b*/
      a3 = "upstream_errorUpstream Chat emitted an error event{}chat.completion.chunkmessage_startcontent_block_startcontent_block_deltacontent_block_stopmessage_deltamessage_stop"; /*0x1002a9f40*/
      break; /*0x1002a9f40*/
  }
  v21[0] = a3; /*0x1002a9f5c*/
  v21[1] = v4; /*0x1002a9f60*/
  v15 = 7; /*0x1002a9f64*/
  if ( __OFSUB__(0, a2[43]) ) /*0x1002a9f6b*/
  {
    v16 = "missing"; /*0x1002a9f74*/
  }
  else
  {
    v16 = (char *)a2[44]; /*0x1002a9f95*/
    switch ( a2[45] ) /*0x1002a9faa*/
    {
      case 7LL: /*0x1002a9faa*/
        if ( *(_DWORD *)v16 ^ 0x75666572 | *(_DWORD *)(v16 + 3) ^ 0x6C617375 ) /*0x1002a9fc0*/
          goto LABEL_38; /*0x1002a9fc3*/
        break; /*0x1002a9fc3*/
      case 8LL: /*0x1002a9faa*/
        v15 = 8; /*0x1002aa022*/
        if ( *(_QWORD *)v16 != 0x6E7275745F646E65LL && *(_QWORD *)v16 != 0x6573755F6C6F6F74LL ) /*0x1002aa039*/
          goto LABEL_38; /*0x1002aa039*/
        break; /*0x1002aa039*/
      case 0xALL: /*0x1002a9faa*/
        v15 = 10; /*0x1002a9fe7*/
        if ( *(_QWORD *)v16 ^ 0x75745F6573756170LL | *((unsigned __int16 *)v16 + 4) ^ 0x6E72LL /*0x1002aa00e*/
          && *(_QWORD *)v16 ^ 0x656B6F745F78616DLL | *((unsigned __int16 *)v16 + 4) ^ 0x736ELL )
        {
          goto LABEL_38; /*0x1002aa011*/
        }
        break; /*0x1002aa011*/
      case 0xDLL: /*0x1002a9faa*/
        if ( *(_QWORD *)v16 ^ 0x7165735F706F7473LL | *(_QWORD *)(v16 + 5) ^ 0x65636E6575716573LL ) /*0x1002aa058*/
          goto LABEL_38; /*0x1002aa05b*/
        v15 = 13; /*0x1002aa05d*/
        break; /*0x1002aa062*/
      case 0x1DLL: /*0x1002a9faa*/
        v17 = _mm_or_si128( /*0x1002aa07d*/
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)v16), (__m128i)xmmword_10181FEA0),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v16 + 13)), (__m128i)xmmword_10181FE90));
        if ( !_mm_testz_si128(v17, v17) ) /*0x1002aa086*/
          goto LABEL_38; /*0x1002aa086*/
        v15 = 29; /*0x1002aa14d*/
        break; /*0x1002aa152*/
      default:
LABEL_38:
        v16 = "unknown"; /*0x1002aa08c*/
        v15 = 7; /*0x1002aa093*/
        break; /*0x1002aa093*/
    }
  }
  v20[0] = v16; /*0x1002aa098*/
  v20[1] = v15; /*0x1002aa09c*/
  v23 = a2[83]; /*0x1002aa0a7*/
  v22 = a2[16]; /*0x1002aa0b2*/
  v24 = a2[46] != 0x8000000000000001LL && a2[62] != 0; /*0x1002aa0d0*/
  v19[0] = v21; /*0x1002aa0d7*/
  v19[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h977911c2df74694e; /*0x1002aa0e5*/
  v19[2] = v20; /*0x1002aa0ed*/
  v19[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h977911c2df74694e; /*0x1002aa0f1*/
  v19[4] = &v23; /*0x1002aa0f9*/
  v19[5] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1002aa104*/
  v19[6] = &v22; /*0x1002aa10c*/
  v19[7] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1002aa110*/
  v19[8] = &v24; /*0x1002aa118*/
  v19[9] = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x1002aa123*/
  return alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, &unk_101A2CBFF, v19); /*0x1002aa142*/
}