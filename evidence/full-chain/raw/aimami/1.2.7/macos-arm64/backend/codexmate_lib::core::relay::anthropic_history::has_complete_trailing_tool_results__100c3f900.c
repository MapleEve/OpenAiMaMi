// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::anthropic_history::has_complete_trailing_tool_results::ha703a4f1ab699dd3; addr: 0x100c3f900; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:54:45Z
__int64 __fastcall codexmate_lib::core::relay::anthropic_history::has_complete_trailing_tool_results::ha703a4f1ab699dd3(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // r14
  _BYTE *v3; // rax
  _BYTE *v4; // rcx
  unsigned int v5; // r14d
  bool v6; // zf
  __int64 v7; // r14
  void *v8; // rax
  _BYTE *v9; // rax
  _BYTE *v10; // rcx
  __int64 v11; // rbx
  __int64 v12; // r14
  _QWORD *v13; // r15
  __int64 v14; // rsi
  __int64 v15; // r13
  __int64 v16; // r15
  _QWORD *v17; // r12
  __int64 v18; // rsi
  _QWORD *v19; // r12
  __int64 v20; // rsi
  _QWORD v22[2]; // [rsp+8h] [rbp-B8h] BYREF
  __int64 v23; // [rsp+18h] [rbp-A8h] BYREF
  _BYTE *v24; // [rsp+20h] [rbp-A0h]
  __int64 v25; // [rsp+28h] [rbp-98h]
  __int64 v26; // [rsp+38h] [rbp-88h]
  char *v27; // [rsp+48h] [rbp-78h]
  __int64 v28; // [rsp+50h] [rbp-70h]
  char **v29; // [rsp+58h] [rbp-68h]
  __int64 v30; // [rsp+60h] [rbp-60h] BYREF
  __int64 v31; // [rsp+68h] [rbp-58h]
  __int64 v32; // [rsp+70h] [rbp-50h]
  char *v33; // [rsp+78h] [rbp-48h] BYREF
  __int64 v34; // [rsp+80h] [rbp-40h]
  __int64 v35; // [rsp+88h] [rbp-38h]
  __int64 v36; // [rsp+90h] [rbp-30h]

  if ( a2 ) /*0x100c3f917*/
  {
    v2 = a1 + 32 * a2; /*0x100c3f923*/
    v33 = "tool_use_id"; /*0x100c3f933*/
    v34 = 11; /*0x100c3f937*/
    v3 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100c3f94b*/
                    &anon_859d1b4600149d0c2c9adb806d5a63b7_295,
                    7,
                    v2 - 32);
    if ( v3 ) /*0x100c3f953*/
    {
      v4 = nullptr; /*0x100c3f95c*/
      if ( *v3 == 4 ) /*0x100c3f961*/
        v4 = v3 + 8; /*0x100c3f961*/
    }
    else
    {
      v4 = nullptr; /*0x100c3f96f*/
    }
    v23 = 1; /*0x100c3f971*/
    v24 = v4; /*0x100c3f97c*/
    v25 = 0; /*0x100c3f983*/
    v26 = 0; /*0x100c3f98e*/
    v27 = "tool_resulttool_use_id"; /*0x100c3f9a0*/
    v28 = 11; /*0x100c3f9a4*/
    v29 = &v33; /*0x100c3f9b0*/
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::heeb02adeaa19481d( /*0x100c3f9bf*/
      &v30,
      &v23);
    v6 = v2 == 64; /*0x100c3f9cb*/
    v7 = v2 - 64; /*0x100c3f9cb*/
    if ( a2 == 1 || v6 ) /*0x100c3f9d2*/
      goto LABEL_16; /*0x100c3f9d2*/
    v8 = (void *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100c3f9e5*/
                   "roletask-axobluedaterectMoveline",
                   4,
                   v7);
    if ( !v8 ) /*0x100c3f9ed*/
      v8 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x100c3f9ef*/
    if ( !(unsigned __int8)serde_json::value::partial_eq::_$LT$impl$u20$core..cmp..PartialEq$LT$$RF$str$GT$$u20$for$u20$serde_json..value..Value$GT$::eq::h2d984bbc88f4cc13( /*0x100c3fa00*/
                             v8,
                             &off_101C0DAA0) )
    {
LABEL_16:
      v11 = v31; /*0x100c3fa4d*/
      v12 = v32; /*0x100c3fa51*/
      if ( v32 ) /*0x100c3fa58*/
      {
        v13 = (_QWORD *)(v31 + 8); /*0x100c3fa5a*/
        do /*0x100c3fa67*/
        {
          v14 = *(v13 - 1); /*0x100c3fa69*/
          if ( v14 ) /*0x100c3fa70*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v13, v14, 1); /*0x100c3fa7a*/
          v13 += 3; /*0x100c3fa60*/
          --v12; /*0x100c3fa64*/
        }
        while ( v12 ); /*0x100c3fa67*/
        v5 = 0; /*0x100c3fa81*/
      }
      else
      {
        v5 = 1; /*0x100c3fa89*/
      }
    }
    else
    {
      v22[0] = "idtool_resulttool_use_id"; /*0x100c3fa10*/
      v22[1] = 2; /*0x100c3fa17*/
      v9 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100c3fa31*/
                      &anon_859d1b4600149d0c2c9adb806d5a63b7_295,
                      7,
                      v7);
      if ( v9 ) /*0x100c3fa39*/
      {
        v10 = nullptr; /*0x100c3fa42*/
        if ( *v9 == 4 ) /*0x100c3fa47*/
          v10 = v9 + 8; /*0x100c3fa47*/
      }
      else
      {
        v10 = nullptr; /*0x100c3fa91*/
      }
      v23 = 1; /*0x100c3fa93*/
      v24 = v10; /*0x100c3fa9e*/
      v25 = 0; /*0x100c3faa5*/
      v26 = 0; /*0x100c3fab0*/
      v27 = (char *)&unk_1018C39C8; /*0x100c3fac2*/
      v28 = 8; /*0x100c3fac6*/
      v29 = (char **)v22; /*0x100c3fad5*/
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::heeb02adeaa19481d( /*0x100c3fae4*/
        &v33,
        &v23);
      v15 = v35; /*0x100c3faed*/
      v11 = v31; /*0x100c3faf1*/
      v16 = v32; /*0x100c3faf5*/
      v36 = v34; /*0x100c3fafc*/
      v5 = codexmate_lib::core::relay::anthropic_history::complete_tool_pair::h0a6c7b4bbb181489(v7, v34, v35, v31, v32); /*0x100c3fb0e*/
      if ( v15 ) /*0x100c3fb14*/
      {
        v17 = (_QWORD *)(v36 + 8); /*0x100c3fb1a*/
        do /*0x100c3fb27*/
        {
          v18 = *(v17 - 1); /*0x100c3fb29*/
          if ( v18 ) /*0x100c3fb31*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v17, v18, 1); /*0x100c3fb3c*/
          v17 += 3; /*0x100c3fb20*/
          --v15; /*0x100c3fb24*/
        }
        while ( v15 ); /*0x100c3fb27*/
      }
      if ( v33 ) /*0x100c3fb4a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, 24LL * (_QWORD)v33, 8); /*0x100c3fb5d*/
      if ( v16 ) /*0x100c3fb65*/
      {
        v19 = (_QWORD *)(v11 + 8); /*0x100c3fb67*/
        do /*0x100c3fb77*/
        {
          v20 = *(v19 - 1); /*0x100c3fb79*/
          if ( v20 ) /*0x100c3fb81*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v19, v20, 1); /*0x100c3fb8c*/
          v19 += 3; /*0x100c3fb70*/
          --v16; /*0x100c3fb74*/
        }
        while ( v16 ); /*0x100c3fb77*/
      }
    }
    if ( v30 ) /*0x100c3fb9a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, 24 * v30, 8); /*0x100c3fbac*/
  }
  else
  {
    return 0; /*0x100c3f967*/
  }
  return v5; /*0x100c3fbb4*/
}