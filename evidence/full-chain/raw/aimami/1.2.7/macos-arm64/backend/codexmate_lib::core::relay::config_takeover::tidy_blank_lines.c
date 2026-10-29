// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::config_takeover::tidy_blank_lines::h04b8db1c046290aa; addr: 0x100220ce0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
__int64 *__fastcall codexmate_lib::core::relay::config_takeover::tidy_blank_lines::h04b8db1c046290aa(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r14
  __int64 v5; // rax
  size_t v6; // rbx
  __int64 v7; // r13
  __int64 v8; // r15
  __int64 v9; // r14
  __int64 v10; // rax
  size_t v11; // r12
  char *v12; // r14
  __int64 v13; // rdx
  __int64 i; // rcx
  size_t v15; // rax
  __int64 v16; // r13
  __int64 v17; // r15
  size_t v18; // r12
  size_t v19; // rax
  __int64 *result; // rax
  __int64 v21; // rdx
  int v22[4]; // [rsp+0h] [rbp-B0h] BYREF
  __int64 v23; // [rsp+10h] [rbp-A0h]
  __int64 *v24; // [rsp+18h] [rbp-98h]
  __int64 v25; // [rsp+20h] [rbp-90h]
  __int64 v26; // [rsp+28h] [rbp-88h]
  _QWORD v27[5]; // [rsp+30h] [rbp-80h] BYREF
  char v28; // [rsp+58h] [rbp-58h]
  __int16 v29; // [rsp+60h] [rbp-50h]
  __int64 v30; // [rsp+68h] [rbp-48h]
  __int64 v31; // [rsp+70h] [rbp-40h] BYREF
  __int64 v32; // [rsp+78h] [rbp-38h]
  size_t v33; // [rsp+80h] [rbp-30h]

  if ( a3 < 0 ) /*0x100220cfa*/
  {
    v4 = 0; /*0x100220cfc*/
    goto LABEL_3; /*0x100220cfc*/
  }
  v24 = a1; /*0x100220d0a*/
  if ( a3 ) /*0x100220d11*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2, a3); /*0x100220d16*/
    v4 = 1; /*0x100220d1b*/
    v5 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1); /*0x100220d29*/
    if ( !v5 ) /*0x100220d31*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, a3); /*0x100220cff*/
  }
  else
  {
    v5 = 1; /*0x100220d38*/
  }
  v31 = a3; /*0x100220d3d*/
  v30 = v5; /*0x100220d41*/
  v32 = v5; /*0x100220d45*/
  v33 = 0; /*0x100220d49*/
  v25 = 0; /*0x100220d51*/
  v26 = a3; /*0x100220d5c*/
  v27[0] = a2; /*0x100220d63*/
  v27[1] = a3; /*0x100220d67*/
  v27[2] = 0; /*0x100220d6b*/
  v27[3] = a3; /*0x100220d73*/
  v27[4] = 0xA0000000ALL; /*0x100220d81*/
  v28 = 1; /*0x100220d85*/
  v29 = 0; /*0x100220d89*/
  v6 = 0; /*0x100220d8f*/
  v7 = 0; /*0x100220d91*/
  do /*0x100220f1e*/
  {
    v8 = 0; /*0x100220d94*/
    while ( 1 ) /*0x100220da0*/
    {
      v9 = v27[0]; /*0x100220da0*/
      _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x100220daf*/
        v22,
        v27);
      if ( v22[0] == 1 ) /*0x100220dbb*/
      {
        v10 = v25; /*0x100220dc4*/
        v25 = v23; /*0x100220dcb*/
        v11 = v23 - v10; /*0x100220dd2*/
        v12 = (char *)(v10 + v9); /*0x100220dd5*/
        if ( v23 == v10 ) /*0x100220ddb*/
          goto LABEL_22; /*0x100220ddb*/
LABEL_16:
        if ( v12[v11 - 1] == 10 ) /*0x100220e1c*/
        {
          if ( v11 == 1 ) /*0x100220e24*/
          {
            v11 = 0; /*0x100220e34*/
          }
          else if ( v12[v11 - 2] == 13 ) /*0x100220e2c*/
          {
            v11 -= 2LL; /*0x100220e2e*/
          }
          else
          {
            --v11; /*0x100220e39*/
          }
        }
        goto LABEL_22; /*0x100220e32*/
      }
      if ( HIBYTE(v29) ) /*0x100220de4*/
        goto LABEL_34; /*0x100220de4*/
      HIBYTE(v29) = 1; /*0x100220dea*/
      v11 = v26 - v25; /*0x100220dfc*/
      if ( ((unsigned __int8)v29 | (v26 != v25)) != 1 ) /*0x100220e07*/
        goto LABEL_34; /*0x100220e07*/
      v12 = (char *)(v27[0] + v25); /*0x100220e0d*/
      if ( v11 ) /*0x100220e14*/
        goto LABEL_16; /*0x100220e14*/
LABEL_22:
      core::str::_$LT$impl$u20$str$GT$::trim_matches::he240eae126997fe6(v12, v11); /*0x100220e46*/
      if ( v13 ) /*0x100220e4e*/
        break; /*0x100220e4e*/
      v8 += v7; /*0x100220e50*/
      if ( HIBYTE(v29) ) /*0x100220e57*/
        goto LABEL_34; /*0x100220e57*/
    }
    for ( i = v30; v8; --v8 ) /*0x100220e77*/
    {
      v15 = v6; /*0x100220e80*/
      if ( v6 == v31 ) /*0x100220e87*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f(&v31, v6, 1, 1, 1); /*0x100220eb2*/
        i = v32; /*0x100220eb7*/
        v15 = v33; /*0x100220ebb*/
      }
      *(_BYTE *)(i + v15) = 10; /*0x100220e89*/
      v33 = ++v6; /*0x100220e90*/
    }
    v16 = v31; /*0x100220ed0*/
    if ( v11 > v31 - v6 ) /*0x100220edd*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f(&v31, v6, v11, 1, 1); /*0x100220f3b*/
      v16 = v31; /*0x100220f40*/
      v6 = v33; /*0x100220f44*/
    }
    v17 = v32; /*0x100220edf*/
    memcpy((void *)(v32 + v6), v12, v11); /*0x100220eed*/
    v18 = v6 + v11; /*0x100220ef2*/
    v33 = v18; /*0x100220ef5*/
    v19 = v18; /*0x100220ef9*/
    if ( v16 == v18 ) /*0x100220eff*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f(&v31, v16, 1, 1, 1); /*0x100220f61*/
      v17 = v32; /*0x100220f66*/
      v19 = v33; /*0x100220f6a*/
    }
    v30 = v17; /*0x100220f01*/
    *(_BYTE *)(v17 + v19) = 10; /*0x100220f05*/
    v33 = v18 + 1; /*0x100220f0d*/
    v7 = 1; /*0x100220f11*/
    v6 = v18 + 1; /*0x100220f1b*/
  }
  while ( !HIBYTE(v29) ); /*0x100220f1e*/
LABEL_34:
  result = v24; /*0x100220f70*/
  v24[2] = v33; /*0x100220f7b*/
  v21 = v31; /*0x100220f7f*/
  result[1] = v32; /*0x100220f87*/
  *result = v21; /*0x100220f8b*/
  return result; /*0x100220f8e*/
}
