// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::anthropic_tools::validate_tool_choice::h71dd73ca4602f618; addr: 0x1007f6ae0; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:22Z
void *__fastcall codexmate_lib::core::relay::translator::anthropic_tools::validate_tool_choice::h71dd73ca4602f618(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4)
{
  __int64 v6; // rax
  void *v7; // rax
  void *result; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __m128i v12; // xmm1
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // rax
  __m128i v16; // xmm1
  unsigned __int64 v17; // rdx
  unsigned __int64 v18; // rax
  int v19; // ecx
  _BYTE v20[35]; // [rsp+8h] [rbp-48h] BYREF
  unsigned __int8 v21; // [rsp+2Bh] [rbp-25h]
  char v22; // [rsp+2Dh] [rbp-23h]

  v6 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a1, "/tool_choice/type", 17); /*0x1007f6b07*/
  if ( v6 /*0x1007f6b3f*/
    && *(_BYTE *)v6 == 3
    && *(_QWORD *)(v6 + 24) == 13
    && !(**(_QWORD **)(v6 + 16) ^ 0x5F6465776F6C6C61LL | *(_QWORD *)(*(_QWORD *)(v6 + 16) + 5LL) ^ 0x736C6F6F745F6465LL) )
  {
    return &unk_1018CBCED; /*0x1007f6c78*/
  }
  v7 = (void *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1007f6b54*/
                 &anon_5fc5982723cbea77922f0a3a965b6f67_271,
                 11,
                 a1);
  if ( !v7 ) /*0x1007f6b5c*/
    v7 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x1007f6b5e*/
  if ( !(unsigned __int8)serde_json::value::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$$RF$str$GT$$u20$for$u20$serde_json..value..Value$GT$::eq::h2d984bbc88f4cc13( /*0x1007f6b6f*/
                           v7,
                           &off_101C01EB8) )
  {
    v9 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a1, "/tool_choice/type", 17); /*0x1007f6bad*/
    if ( !v9 || *(_BYTE *)v9 != 3 ) /*0x1007f6bbe*/
      goto LABEL_33; /*0x1007f6bbe*/
    v10 = *(_QWORD *)(v9 + 16); /*0x1007f6bc4*/
    v11 = *(_QWORD *)(v9 + 24); /*0x1007f6bc8*/
    switch ( v11 ) /*0x1007f6be8*/
    {
      case 6uLL: /*0x1007f6be8*/
        if ( !(*(_DWORD *)v10 ^ 0x74737563 | *(unsigned __int16 *)(v10 + 4) ^ 0x6D6F) ) /*0x1007f6bfb*/
          goto LABEL_8; /*0x1007f6bfd*/
        goto LABEL_33; /*0x1007f6bfd*/
      case 8uLL: /*0x1007f6be8*/
        if ( *(_QWORD *)v10 == 0x6E6F6974636E7566LL ) /*0x1007f6cbf*/
          goto LABEL_8; /*0x1007f6cbf*/
        goto LABEL_33; /*0x1007f6cbf*/
      case 0xAuLL: /*0x1007f6be8*/
        if ( !(*(_QWORD *)v10 ^ 0x726165735F626577LL | *(unsigned __int16 *)(v10 + 8) ^ 0x6863LL) ) /*0x1007f6ca4*/
          goto LABEL_8; /*0x1007f6ca7*/
        goto LABEL_33; /*0x1007f6ca7*/
      case 0xBuLL: /*0x1007f6be8*/
        if ( !(*(_QWORD *)v10 ^ 0x6165735F6C6F6F74LL | *(_QWORD *)(v10 + 3) ^ 0x6863726165735F6CLL) ) /*0x1007f6ce1*/
          goto LABEL_8; /*0x1007f6ce4*/
        break; /*0x1007f6ce4*/
      case 0x12uLL: /*0x1007f6be8*/
        v12 = _mm_or_si128( /*0x1007f6d07*/
                _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(v10 + 16)), (__m128i)xmmword_101820250),
                _mm_xor_si128(_mm_loadu_si128((const __m128i *)v10), (__m128i)xmmword_101820240));
        if ( _mm_testz_si128(v12, v12) ) /*0x1007f6d10*/
          goto LABEL_8; /*0x1007f6d10*/
        break; /*0x1007f6d10*/
      default:
        if ( v11 < 0xB ) /*0x1007f6c81*/
          goto LABEL_33; /*0x1007f6c81*/
        break; /*0x1007f6c81*/
    }
    if ( *(_QWORD *)v10 ^ 0x726165735F626577LL | *(_QWORD *)(v10 + 3) ^ 0x5F6863726165735FLL ) /*0x1007f6d31*/
    {
LABEL_33:
      if ( !a4 ) /*0x1007f6d3d*/
        return nullptr; /*0x1007f6d9d*/
LABEL_34:
      v13 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(a1, "/tool_choice/type", 17); /*0x1007f6d3f*/
      if ( v13 && *(_BYTE *)v13 == 3 ) /*0x1007f6d5b*/
      {
        v14 = *(_QWORD *)(v13 + 16); /*0x1007f6d5d*/
        v15 = *(_QWORD *)(v13 + 24); /*0x1007f6d61*/
        if ( v15 == 10 ) /*0x1007f6d69*/
        {
          v17 = 0x7765625F73656172LL; /*0x1007f6dac*/
          v18 = _byteswap_uint64(*(_QWORD *)v14); /*0x1007f6db9*/
          if ( v18 == 0x7765625F73656172LL ) /*0x1007f6dbf*/
          {
            v18 = (unsigned __int16)__ROL2__(*(_WORD *)(v14 + 8), 8); /*0x1007f6dc9*/
            v19 = 0; /*0x1007f6dcc*/
            if ( (unsigned __int16)v18 == 25448 ) /*0x1007f6dd3*/
              goto LABEL_49; /*0x1007f6dd3*/
            v17 = 25448; /*0x1007f6dd5*/
          }
        }
        else
        {
          if ( v15 == 18 ) /*0x1007f6d6f*/
          {
            v16 = _mm_or_si128( /*0x1007f6d8d*/
                    _mm_xor_si128(_mm_cvtsi32_si128(*(unsigned __int16 *)(v14 + 16)), (__m128i)xmmword_101820250),
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)v14), (__m128i)xmmword_101820240));
            if ( _mm_testz_si128(v16, v16) ) /*0x1007f6d91*/
              return &unk_1018CBD5C; /*0x1007f6d96*/
          }
          else if ( v15 < 0xB ) /*0x1007f6de0*/
          {
            return nullptr; /*0x1007f6de0*/
          }
          v18 = 0x7765625F73656172LL; /*0x1007f6de2*/
          v17 = _byteswap_uint64(*(_QWORD *)v14); /*0x1007f6def*/
          if ( v17 == 0x7765625F73656172LL ) /*0x1007f6df5*/
          {
            v18 = 0x5F7365617263685FLL; /*0x1007f6df7*/
            v17 = _byteswap_uint64(*(_QWORD *)(v14 + 3)); /*0x1007f6e05*/
            v19 = 0; /*0x1007f6e08*/
            if ( v17 == 0x5F7365617263685FLL ) /*0x1007f6e0d*/
            {
LABEL_49:
              if ( !v19 ) /*0x1007f6e1d*/
                return &unk_1018CBD5C; /*0x1007f6e2b*/
              return nullptr; /*0x1007f6e26*/
            }
          }
        }
        v19 = 2 * (v18 >= v17) - 1; /*0x1007f6e17*/
        goto LABEL_49; /*0x1007f6e17*/
      }
      return nullptr; /*0x1007f6d5b*/
    }
  }
LABEL_8:
  codexmate_lib::core::relay::anthropic_reasoning::model_profile::hb9cabe2ec75bffa2((__int64)v20, a2, a3); /*0x1007f6b78*/
  if ( v22 == 2 ) /*0x1007f6b8b*/
    return &unk_1018CBE94; /*0x1007f6b99*/
  codexmate_lib::core::relay::anthropic_reasoning::model_profile::hb9cabe2ec75bffa2((__int64)v20, a2, a3); /*0x1007f6c12*/
  if ( v22 == 2 || v20[33] ) /*0x1007f6c25*/
    goto LABEL_33; /*0x1007f6c25*/
  codexmate_lib::core::relay::anthropic_reasoning::model_profile::hb9cabe2ec75bffa2((__int64)v20, a2, a3); /*0x1007f6c35*/
  result = nullptr; /*0x1007f6c41*/
  if ( (v21 & (v22 != 2)) == 0 ) /*0x1007f6c4d*/
    result = &unk_1018CBEDF; /*0x1007f6c4d*/
  if ( a4 && (v21 & (v22 != 2)) != 0 ) /*0x1007f6c61*/
    goto LABEL_34; /*0x1007f6c61*/
  return result; /*0x1007f6d9f*/
}