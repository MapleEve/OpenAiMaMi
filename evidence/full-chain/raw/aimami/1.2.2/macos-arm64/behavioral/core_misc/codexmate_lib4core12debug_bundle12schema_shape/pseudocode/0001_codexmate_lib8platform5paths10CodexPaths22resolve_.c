// mac 1.2.2 NEW codexmate_lib4core12debug_bundle12schema_shape 0x100a3e7a0 d=1
__int64 __fastcall codexmate_lib::platform::paths::CodexPaths::resolve_codex_state_db::hf2d8723635f4afeb(
        size_t *a1,
        const void *a2,
        size_t a3)
{
  size_t *v4; // r13
  __int64 v5; // rbx
  __int64 v6; // r15
  signed __int64 v7; // r14
  __int64 v8; // r13
  const void *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // r12
  __int64 v12; // r12
  size_t *v13; // rdi
  __int64 v14; // r14
  __int64 *v15; // r12
  __int64 *v16; // r13
  __int64 result; // rax
  unsigned __int64 v18; // r12
  __int64 v19; // r14
  __int64 v20; // rax
  unsigned __int64 v21; // r12
  _QWORD *v22; // rbx
  __int64 v23; // rdx
  size_t v24; // rcx
  unsigned __int64 v25; // r12
  __int64 *v26; // r13
  _QWORD v27[4]; // [rsp+0h] [rbp-100h] BYREF
  _QWORD v28[4]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v29[4]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v30; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v31; // [rsp+68h] [rbp-98h]
  unsigned __int64 v32; // [rsp+70h] [rbp-90h]
  __int64 v33; // [rsp+78h] [rbp-88h] BYREF
  __int64 v34; // [rsp+80h] [rbp-80h]
  __int64 v35; // [rsp+88h] [rbp-78h]
  size_t *v36; // [rsp+90h] [rbp-70h]
  const void *v37; // [rsp+98h] [rbp-68h]
  __int64 *v38; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v39; // [rsp+A8h] [rbp-58h]
  __int64 v40; // [rsp+B0h] [rbp-50h]
  __int64 *v41; // [rsp+B8h] [rbp-48h]
  signed __int64 v42; // [rsp+C0h] [rbp-40h] BYREF
  const void *v43; // [rsp+C8h] [rbp-38h]
  size_t v44; // [rsp+D0h] [rbp-30h]

  v4 = a1; /*0x100a3e7ba*/
  codexmate_lib::platform::paths::CodexPaths::state_db_search_dirs::ha11ba42e47ba4078(&v33, a2, a3); /*0x100a3e7c4*/
  v5 = v35; /*0x100a3e7c9*/
  if ( v35 ) /*0x100a3e7d0*/
  {
    v6 = v34; /*0x100a3e7d2*/
    v7 = *(_QWORD *)(v34 + 16); /*0x100a3e7d6*/
    if ( v7 < 0 ) /*0x100a3e7dd*/
    {
      v8 = 0; /*0x100a3e7df*/
      goto LABEL_4; /*0x100a3e7df*/
    }
    v9 = *(const void **)(v34 + 8); /*0x100a3e811*/
    if ( v7 ) /*0x100a3e815*/
    {
      v37 = *(const void **)(v34 + 8); /*0x100a3e817*/
      v36 = a1; /*0x100a3e81b*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100a3e81f*/
      v8 = 1; /*0x100a3e824*/
      v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1u); /*0x100a3e832*/
      if ( !v10 ) /*0x100a3e83a*/
LABEL_4:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8); /*0x100a3e7e2*/
      v11 = v10; /*0x100a3e83c*/
      v4 = v36; /*0x100a3e83f*/
      v9 = v37; /*0x100a3e843*/
    }
    else
    {
      v11 = 1; /*0x100a3e849*/
    }
    memcpy((void *)v11, v9, v7); /*0x100a3e855*/
    v42 = v7; /*0x100a3e85a*/
    v43 = (const void *)v11; /*0x100a3e85e*/
    v44 = v7; /*0x100a3e862*/
  }
  else
  {
    std::path::Path::_join::hb1a495d4f06b13b8((size_t *)&v42, a2, a3, byte_1015A11F1, 6u); /*0x100a3e806*/
    v6 = v34; /*0x100a3e80b*/
  }
  v29[0] = v6; /*0x100a3e874*/
  v29[1] = v6; /*0x100a3e87b*/
  v29[2] = v33; /*0x100a3e882*/
  v29[3] = v6 + 32 * v5; /*0x100a3e889*/
  alloc::vec::in_place_collect::from_iter_in_place::h022ca8b1d1eac60c(&v30, v29); /*0x100a3e89e*/
  v12 = 4 * v32; /*0x100a3e8ad*/
  if ( v32 < 2 ) /*0x100a3e8b5*/
  {
    v13 = v4; /*0x100a3e8b7*/
    v14 = v30; /*0x100a3e8ba*/
    v15 = &v31[v12]; /*0x100a3e8c8*/
    v38 = v31; /*0x100a3e8cb*/
    v40 = v30; /*0x100a3e8cf*/
    v39 = v31; /*0x100a3e8d3*/
    v41 = v15; /*0x100a3e8d7*/
    v16 = v31; /*0x100a3e8db*/
    if ( v32 && (v16 = v31 + 4, v39 = v31 + 4, result = *v31, !__OFSUB__(-*v31, 1)) ) /*0x100a3e8f4*/
    {
      v24 = v31[1]; /*0x100a3ea3c*/
      v13[2] = v31[2]; /*0x100a3ea44*/
      v13[1] = v24; /*0x100a3ea48*/
      *v13 = result; /*0x100a3ea4c*/
      v18 = (char *)v15 - (char *)v16; /*0x100a3ea4f*/
      if ( !v18 ) /*0x100a3ea52*/
        goto LABEL_31; /*0x100a3ea52*/
    }
    else
    {
      result = (__int64)std::path::Path::_join::hb1a495d4f06b13b8(v13, v43, v44, byte_1015B4337, 0xEu); /*0x100a3e90f*/
      v18 = (char *)v15 - (char *)v16; /*0x100a3e914*/
      if ( !v18 ) /*0x100a3e917*/
      {
LABEL_31:
        if ( v14 ) /*0x100a3ea85*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a3ea96*/
        goto LABEL_33; /*0x100a3ea96*/
      }
    }
    v25 = v18 >> 5; /*0x100a3ea54*/
    v26 = v16 + 1; /*0x100a3ea58*/
    do /*0x100a3ea67*/
    {
      if ( *(v26 - 1) ) /*0x100a3ea69*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a3ea7b*/
      v26 += 4; /*0x100a3ea60*/
      --v25; /*0x100a3ea64*/
    }
    while ( v25 ); /*0x100a3ea67*/
    goto LABEL_31; /*0x100a3ea67*/
  }
  v19 = v30; /*0x100a3e922*/
  v20 = *v31; /*0x100a3e930*/
  if ( __OFSUB__(-*v31, 1) ) /*0x100a3e936*/
  {
    v21 = (unsigned __int64)(v12 * 8 - 32) >> 5; /*0x100a3e93f*/
    v22 = v31 + 5; /*0x100a3e943*/
    do /*0x100a3e957*/
    {
      if ( *(v22 - 1) ) /*0x100a3e95d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a3e96e*/
      v22 += 4; /*0x100a3e950*/
      --v21; /*0x100a3e954*/
    }
    while ( v21 ); /*0x100a3e957*/
    if ( v19 ) /*0x100a3ea07*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a3ea18*/
  }
  else
  {
    v27[3] = v31[3]; /*0x100a3e980*/
    v23 = v31[1]; /*0x100a3e987*/
    v27[2] = v31[2]; /*0x100a3e98f*/
    v27[1] = v23; /*0x100a3e996*/
    v27[0] = v20; /*0x100a3e99d*/
    v38 = v31; /*0x100a3e9a4*/
    v39 = v31 + 4; /*0x100a3e9a8*/
    v40 = v30; /*0x100a3e9ac*/
    v41 = &v31[v12]; /*0x100a3e9b0*/
    ((void (__fastcall *)(_QWORD *, __int64 **, _QWORD *))_$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h74f2c163ec31cfd3)( /*0x100a3e9c6*/
      v28,
      &v38,
      v27);
    if ( v28[0] != 0x8000000000000000LL ) /*0x100a3e9dc*/
    {
      v4[2] = v28[2]; /*0x100a3e9e5*/
      result = v28[0]; /*0x100a3e9e9*/
      v4[1] = v28[1]; /*0x100a3e9f7*/
      *v4 = result; /*0x100a3e9fb*/
      goto LABEL_33; /*0x100a3e9ff*/
    }
  }
  result = (__int64)std::path::Path::_join::hb1a495d4f06b13b8(v4, v43, v44, byte_1015B4337, 0xEu); /*0x100a3ea35*/
LABEL_33:
  if ( v42 ) /*0x100a3eaa2*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100a3eaad*/
  return result; /*0x100a3eab2*/
}