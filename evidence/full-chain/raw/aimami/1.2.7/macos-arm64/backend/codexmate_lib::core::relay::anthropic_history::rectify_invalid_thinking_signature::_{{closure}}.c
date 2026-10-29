// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::anthropic_history::rectify_invalid_thinking_signature::_$u7b$$u7b$closure$u7d$$u7d$::h6f3e4f2542948c25; addr: 0x100581030; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:50:41Z
__int64 __fastcall codexmate_lib::core::relay::anthropic_history::rectify_invalid_thinking_signature::_$u7b$$u7b$closure$u7d$$u7d$::h6f3e4f2542948c25(
        __int64 a1,
        _BYTE *a2)
{
  unsigned int v2; // r15d
  __int64 v3; // rax
  const __m128i *v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rax
  __m128i v7; // xmm1
  _BYTE v9[56]; // [rsp+8h] [rbp-38h] BYREF

  v3 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100581052*/
         &anon_05dfdba247e196beb5b0260c96b315e5_29,
         4,
         a2);
  if ( v3 && *(_BYTE *)v3 == 3 ) /*0x10058105f*/
  {
    v4 = *(const __m128i **)(v3 + 16); /*0x100581061*/
    v5 = *(_QWORD *)(v3 + 24); /*0x100581065*/
    if ( v5 == 17 ) /*0x10058106d*/
    {
      v7 = _mm_or_si128( /*0x1005810a5*/
             _mm_xor_si128(_mm_cvtsi32_si128(v4[1].u8[0]), (__m128i)xmmword_10181FD60),
             _mm_xor_si128(_mm_loadu_si128(v4), (__m128i)xmmword_10181FD50));
      if ( _mm_testz_si128(v7, v7) ) /*0x1005810ae*/
      {
        v6 = *(_QWORD **)(a1 + 8); /*0x1005810ed*/
        goto LABEL_12; /*0x1005810ed*/
      }
    }
    else if ( v5 == 8 && v4->i64[0] == 0x676E696B6E696874LL ) /*0x100581082*/
    {
      v6 = *(_QWORD **)a1; /*0x100581084*/
LABEL_12:
      ++*v6; /*0x1005810f1*/
      return 0; /*0x1005810f4*/
    }
  }
  LOBYTE(v2) = 1; /*0x1005810b0*/
  if ( *a2 == 5 ) /*0x1005810b7*/
  {
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::h99277105167e0864( /*0x1005810d0*/
      v9,
      a2 + 8,
      &anon_05dfdba247e196beb5b0260c96b315e5_141,
      9);
    if ( v9[0] != 6 ) /*0x1005810d9*/
    {
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v9); /*0x1005810df*/
      ++**(_QWORD **)(a1 + 16); /*0x1005810e8*/
    }
  }
  return v2; /*0x1005810fa*/
}