// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::anthropic_tools::append_grammar_description::h570d759f3811fe4c; addr: 0x1007f6e70; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:22Z
void *__fastcall codexmate_lib::core::relay::translator::anthropic_tools::append_grammar_description::h570d759f3811fe4c(
        _QWORD *a1,
        __int64 a2)
{
  __int64 v2; // r13
  void *v3; // r14
  void *v4; // rax
  _QWORD *v5; // rax
  __int64 v6; // r12
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  void *result; // rax
  const void *v11; // r14
  size_t v12; // r15
  __int64 v13; // r12
  _QWORD v14[4]; // [rsp+0h] [rbp-80h] BYREF
  _QWORD v15[2]; // [rsp+20h] [rbp-60h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v17[2]; // [rsp+40h] [rbp-40h] BYREF
  size_t __n; // [rsp+50h] [rbp-30h]

  v3 = (void *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1007f6e98*/
                 &unk_1018CBDA9,
                 6,
                 a2);
  if ( !v3 ) /*0x1007f6ea5*/
    v3 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x1007f6ea5*/
  v4 = (void *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1007f6eb8*/
                 &anon_5fc5982723cbea77922f0a3a965b6f67_91,
                 4,
                 v3);
  if ( !v4 ) /*0x1007f6ec0*/
    v4 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x1007f6ec0*/
  if ( !(unsigned __int8)serde_json::value::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$$RF$str$GT$$u20$for$u20$serde_json..value..Value$GT$::eq::h2d984bbc88f4cc13( /*0x1007f6ed5*/
                           v4,
                           &off_101C01EC8) )
    return nullptr; /*0x1007f6ed5*/
  v5 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1007f6eea*/
                   &unk_1018CBDB6,
                   6,
                   v3);
  if ( !v5 ) /*0x1007f6ef2*/
    v5 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x1007f6ef4*/
  if ( *(_BYTE *)v5 == 3 ) /*0x1007f6efe*/
  {
    v6 = v5[2]; /*0x1007f6f00*/
    v2 = v5[3]; /*0x1007f6f04*/
  }
  else
  {
    v6 = 0; /*0x1007f6f0a*/
  }
  if ( !v2 ) /*0x1007f6f10*/
    v6 = 0; /*0x1007f6f10*/
  v7 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1007f6f23*/
                   "definitionAdditional tools must be an array",
                   10,
                   v3);
  if ( !v7 ) /*0x1007f6f2b*/
    v7 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x1007f6f2d*/
  if ( *(_BYTE *)v7 == 3 ) /*0x1007f6f33*/
  {
    v9 = v7[2]; /*0x1007f6f35*/
    v8 = v7[3]; /*0x1007f6f39*/
  }
  else
  {
    v9 = 0; /*0x1007f6f3f*/
  }
  if ( !v8 ) /*0x1007f6f44*/
    v9 = 0; /*0x1007f6f44*/
  result = &unk_1018CBE62; /*0x1007f6f48*/
  if ( v6 && v9 ) /*0x1007f6f5b*/
  {
    v16[0] = v6; /*0x1007f6f61*/
    v16[1] = v2; /*0x1007f6f65*/
    v15[0] = v9; /*0x1007f6f69*/
    v15[1] = v8; /*0x1007f6f6d*/
    v14[0] = v16; /*0x1007f6f75*/
    v14[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h977911c2df74694e; /*0x1007f6f80*/
    v14[2] = v15; /*0x1007f6f88*/
    v14[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h977911c2df74694e; /*0x1007f6f8c*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v17, &unk_1018CBDBC, v14); /*0x1007f6f9f*/
    v11 = (const void *)v17[1]; /*0x1007f6fa4*/
    v12 = __n; /*0x1007f6fa8*/
    v13 = a1[2]; /*0x1007f6faf*/
    if ( __n > *a1 - v13 ) /*0x1007f6fb9*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h651fd2e8859c1d59(a1, a1[2], __n, 1, 1); /*0x1007f700f*/
      v13 = a1[2]; /*0x1007f7014*/
    }
    memcpy((void *)(v13 + a1[1]), v11, v12); /*0x1007f6fc8*/
    a1[2] = v12 + v13; /*0x1007f6fd0*/
    if ( v17[0] ) /*0x1007f6fdb*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v17[0], 1); /*0x1007f6fe5*/
    return nullptr; /*0x1007f6fea*/
  }
  return result; /*0x1007f6fec*/
}