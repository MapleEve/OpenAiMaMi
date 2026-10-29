// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::anthropic_search::valid_content::h9394c8404f8502a0; addr: 0x100ac7af0; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:20Z
char __fastcall codexmate_lib::core::relay::translator::anthropic_search::valid_content::h9394c8404f8502a0(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // rbx
  _BYTE *v4; // rax
  _QWORD *v5; // rcx
  __int64 v6; // rdx
  char result; // al
  __int64 v8; // rcx
  _BYTE *v9; // rax
  _BYTE *v10; // rax
  __m128i v11; // xmm1
  void *v12; // rax
  _QWORD *v13; // rax
  _BYTE *v14; // rax
  __m128i v15; // xmm1
  _QWORD *v16; // rax
  _BYTE *v17; // rax
  _BYTE *v18; // rax
  _QWORD *v19; // rax

  if ( !a2 ) /*0x100ac7b01*/
    return 0; /*0x100ac7b01*/
  v3 = 32 * a2; /*0x100ac7b0d*/
  while ( 2 ) /*0x100ac7b42*/
  {
    v5 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ac7b42*/
                     "typereasoningcompleted",
                     4,
                     a1);
    if ( !v5 ) /*0x100ac7b58*/
      v5 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100ac7b5a*/
    if ( *(_BYTE *)v5 != 3 ) /*0x100ac7b60*/
      return 0; /*0x100ac7e1a*/
    v6 = v5[3]; /*0x100ac7b66*/
    result = 0; /*0x100ac7b6a*/
    v8 = v5[2]; /*0x100ac7b7a*/
    switch ( v6 ) /*0x100ac7b85*/
    {
      case 4LL: /*0x100ac7b85*/
        if ( *(_DWORD *)v8 != 1954047348 ) /*0x100ac7b8d*/
          return 0; /*0x100ac7b8d*/
        v4 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ac7ba2*/
                        "text",
                        4,
                        a1);
        if ( v4 ) /*0x100ac7baa*/
          goto LABEL_4; /*0x100ac7baa*/
        goto LABEL_3; /*0x100ac7baa*/
      case 8LL: /*0x100ac7b85*/
        if ( *(_QWORD *)v8 == 0x676E696B6E696874LL ) /*0x100ac7bc2*/
        {
          v18 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ac7ddc*/
                           &unk_101820370,
                           8,
                           a1);
          if ( !v18 ) /*0x100ac7de4*/
            v18 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100ac7de6*/
          if ( *v18 != 3 ) /*0x100ac7dec*/
            return 0; /*0x100ac7dec*/
          v19 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ac7dfd*/
                            &unk_1018D6512,
                            9,
                            a1);
          if ( !v19 ) /*0x100ac7e05*/
            v19 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100ac7e07*/
          if ( *(_BYTE *)v19 != 3 || !v19[3] ) /*0x100ac7e0f*/
            return 0; /*0x100ac7e14*/
        }
        else
        {
          if ( *(_QWORD *)v8 != 0x6573755F6C6F6F74LL ) /*0x100ac7bd5*/
            return 0; /*0x100ac7bd5*/
          v9 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ac7bea*/
                          &anon_934eb766a8cad5eebd2cfa1275fd1b1a_214,
                          2,
                          a1);
          if ( !v9 ) /*0x100ac7bf2*/
            v9 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100ac7bf4*/
          if ( *v9 != 3 ) /*0x100ac7bfa*/
            return 0; /*0x100ac7bfa*/
          v10 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ac7c0f*/
                           "namechatgpt_subscription_active_untilauth.json contains AiMaMi managed virtual auth; not a re"
                           "al accountchatgpt_account_id",
                           4,
                           a1);
          if ( !v10 ) /*0x100ac7c17*/
            v10 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100ac7c19*/
          if ( *v10 != 3 ) /*0x100ac7c1f*/
            return 0; /*0x100ac7c1f*/
LABEL_33:
          v14 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ac7d04*/
                           &anon_934eb766a8cad5eebd2cfa1275fd1b1a_476,
                           5,
                           a1);
          if ( !v14 ) /*0x100ac7d1b*/
LABEL_34:
            v14 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100ac7d1d*/
LABEL_35:
          if ( *v14 != 5 ) /*0x100ac7d23*/
            return 0; /*0x100ac7d23*/
        }
LABEL_5:
        a1 += 32; /*0x100ac7b34*/
        v3 -= 32; /*0x100ac7b38*/
        if ( v3 ) /*0x100ac7b3c*/
          continue; /*0x100ac7b3c*/
        result = 1; /*0x100ac7e2b*/
        break; /*0x100ac7e2b*/
      case 15LL: /*0x100ac7b85*/
        if ( *(_QWORD *)v8 ^ 0x745F726576726573LL | *(_QWORD *)(v8 + 7) ^ 0x6573755F6C6F6F74LL ) /*0x100ac7c98*/
          return 0; /*0x100ac7c98*/
        v12 = (void *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ac7cb0*/
                        "namechatgpt_subscription_active_untilauth.json contains AiMaMi managed virtual auth; not a real "
                        "accountchatgpt_account_id",
                        4,
                        a1);
        if ( !v12 ) /*0x100ac7cb8*/
          v12 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100ac7cba*/
        if ( !(unsigned __int8)serde_json::value::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$$RF$str$GT$$u20$for$u20$serde_json..value..Value$GT$::eq::h2d984bbc88f4cc13( /*0x100ac7cc7*/
                                 v12,
                                 &off_101C08B08) )
          return 0; /*0x100ac7cc7*/
        v13 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ac7ce3*/
                          &anon_934eb766a8cad5eebd2cfa1275fd1b1a_214,
                          2,
                          a1);
        if ( !v13 ) /*0x100ac7ceb*/
          v13 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100ac7ced*/
        if ( *(_BYTE *)v13 != 3 || !v13[3] ) /*0x100ac7cf9*/
          return 0; /*0x100ac7cfe*/
        goto LABEL_33; /*0x100ac7cfe*/
      case 17LL: /*0x100ac7b85*/
        v11 = _mm_or_si128( /*0x100ac7c46*/
                _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int8 *)(v8 + 16)), (__m128i)xmmword_10181FD60),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)v8), (__m128i)xmmword_10181FD50));
        if ( !_mm_testz_si128(v11, v11) ) /*0x100ac7c4f*/
          return 0; /*0x100ac7c4f*/
        v4 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ac7c64*/
                        "dataunittypefulljsonargsopenwithkindsavetrueuuidemithideshow",
                        4,
                        a1);
        if ( !v4 ) /*0x100ac7c6c*/
LABEL_3:
          v4 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100ac7b28*/
LABEL_4:
        if ( *v4 == 3 ) /*0x100ac7b2e*/
          goto LABEL_5; /*0x100ac7b2e*/
        return 0; /*0x100ac7b2e*/
      case 22LL: /*0x100ac7b85*/
        v15 = _mm_or_si128( /*0x100ac7d47*/
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v8 + 6)), (__m128i)xmmword_10181FD70),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)v8), (__m128i)xmmword_10181FD80));
        if ( !_mm_testz_si128(v15, v15) ) /*0x100ac7d4b*/
          return 0; /*0x100ac7d4b*/
        v16 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ac7d65*/
                          "tool_use_idweb_searchfailed",
                          11,
                          a1);
        if ( !v16 ) /*0x100ac7d6d*/
          v16 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100ac7d6f*/
        if ( *(_BYTE *)v16 != 3 || !v16[3] ) /*0x100ac7d7b*/
          return 0; /*0x100ac7d80*/
        v17 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ac7d95*/
                         "content",
                         7,
                         a1);
        if ( !v17 ) /*0x100ac7d9d*/
          v17 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100ac7d9f*/
        if ( *v17 == 4 ) /*0x100ac7da5*/
          goto LABEL_5; /*0x100ac7da5*/
        v14 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100ac7dba*/
                         "content",
                         7,
                         a1);
        if ( v14 ) /*0x100ac7dc2*/
          goto LABEL_35; /*0x100ac7dc2*/
        goto LABEL_34; /*0x100ac7dc2*/
      default:
        return result;
    }
    return result; /*0x100ac7e20*/
  }
}