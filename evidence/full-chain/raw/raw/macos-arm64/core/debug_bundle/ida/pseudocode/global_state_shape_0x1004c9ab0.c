// __ZN13codexmate_lib4core12debug_bundle18global_state_shape @ 0x1004c9ab0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::debug_bundle::global_state_shape::h37ed77449b4d4089(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  size_t v7; // r13
  __int64 v8; // r14
  __int64 result; // rax
  __int64 v10; // rax
  __int64 v11; // r15
  _QWORD *v12; // r14
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  _QWORD *v18; // [rsp+8h] [rbp-208h] BYREF
  __int64 (__fastcall **v19)(); // [rsp+10h] [rbp-200h]
  size_t v20; // [rsp+18h] [rbp-1F8h]
  __int64 v21; // [rsp+20h] [rbp-1F0h]
  __int64 v22; // [rsp+28h] [rbp-1E8h]
  __int64 v23; // [rsp+30h] [rbp-1E0h]
  __int64 v24; // [rsp+38h] [rbp-1D8h]
  _QWORD v25[4]; // [rsp+E8h] [rbp-128h] BYREF
  _QWORD v26[3]; // [rsp+108h] [rbp-108h] BYREF
  __int64 v27; // [rsp+120h] [rbp-F0h] BYREF
  __int64 v28; // [rsp+128h] [rbp-E8h]
  __int64 v29; // [rsp+130h] [rbp-E0h]
  __int64 v30; // [rsp+138h] [rbp-D8h]
  _QWORD v31[4]; // [rsp+140h] [rbp-D0h] BYREF
  _QWORD v32[2]; // [rsp+160h] [rbp-B0h] BYREF
  __int64 v33; // [rsp+170h] [rbp-A0h]
  _QWORD *v34; // [rsp+178h] [rbp-98h] BYREF
  __int64 v35; // [rsp+180h] [rbp-90h]
  size_t __n; // [rsp+188h] [rbp-88h]
  __int64 v37; // [rsp+190h] [rbp-80h]
  __int64 v38; // [rsp+198h] [rbp-78h]
  __int64 v39; // [rsp+1A0h] [rbp-70h]
  __int64 v40; // [rsp+1A8h] [rbp-68h]
  __int64 v41; // [rsp+1B0h] [rbp-60h]
  size_t v42; // [rsp+1B8h] [rbp-58h]
  __int64 v43; // [rsp+1C0h] [rbp-50h]
  size_t v44; // [rsp+1C8h] [rbp-48h]
  __int64 v45; // [rsp+1D0h] [rbp-40h] BYREF
  void *__src; // [rsp+1D8h] [rbp-38h]
  _QWORD *v47; // [rsp+1E0h] [rbp-30h]

  codexmate_lib::core::relay::codex_project_state::inspect::hec557ca3f520652c(&v18, a2); /*0x1004c9ad1*/
  codexmate_lib::core::relay::codex_project_state::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..relay..codex_project_state..ProjectStateInspection$GT$::serialize::h16410cbb0149c066( /*0x1004c9ae0*/
    (__int64)&v27,
    (__int64)&v18);
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_project_state..ProjectStateInspection$GT$::h103578b79c33f9ee(&v18); /*0x1004c9aec*/
  if ( (_BYTE)v27 == 6 ) /*0x1004c9af8*/
  {
    v45 = v28; /*0x1004c9b05*/
    v32[0] = 0; /*0x1004c9b09*/
    v33 = 0; /*0x1004c9b14*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v18, &v18); /*0x1004c9b1f*/
    v2 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1004c9b2e*/
    if ( !v2 ) /*0x1004c9b36*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x1004c9e3f*/
    *(_BYTE *)(v2 + 4) = 114; /*0x1004c9b3f*/
    *(_DWORD *)v2 = 1869771365; /*0x1004c9b43*/
    v26[0] = 5; /*0x1004c9b49*/
    v26[1] = v2; /*0x1004c9b54*/
    v26[2] = 5; /*0x1004c9b5b*/
    v34 = nullptr; /*0x1004c9b66*/
    v35 = 1; /*0x1004c9b71*/
    __n = 0; /*0x1004c9b7c*/
    v20 = 1610612768; /*0x1004c9b87*/
    v18 = &v34; /*0x1004c9b99*/
    v19 = &anon_92869709a5e99ce1936aa4e326b6c562_1257; /*0x1004c9ba7*/
    if ( (unsigned __int8)_$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d( /*0x1004c9bb9*/
                            &v45,
                            &v18,
                            v3,
                            v4,
                            v5,
                            v6) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004c9e2e*/
        &anon_92869709a5e99ce1936aa4e326b6c562_1258,
        55,
        v31,
        &anon_92869709a5e99ce1936aa4e326b6c562_1272,
        &anon_92869709a5e99ce1936aa4e326b6c562_1260);
    __src = (void *)v35; /*0x1004c9bd4*/
    v7 = __n; /*0x1004c9bd8*/
    v47 = v34; /*0x1004c9be2*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1004c9be6*/
    {
      v8 = 0; /*0x1004c9be8*/
      goto LABEL_6; /*0x1004c9be8*/
    }
    if ( __n ) /*0x1004c9c2b*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v45, &v18); /*0x1004c9c2d*/
      v8 = 1; /*0x1004c9c32*/
      v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x1004c9c40*/
      if ( !v10 ) /*0x1004c9c48*/
LABEL_6:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x1004c9beb*/
      v11 = v10; /*0x1004c9c4a*/
    }
    else
    {
      v11 = 1; /*0x1004c9c4f*/
    }
    memcpy((void *)v11, __src, v7); /*0x1004c9c5f*/
    LOBYTE(v41) = 3; /*0x1004c9c64*/
    v42 = v7; /*0x1004c9c68*/
    v43 = v11; /*0x1004c9c6c*/
    v44 = v7; /*0x1004c9c70*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v34, v32, v26); /*0x1004c9c89*/
    v12 = v47; /*0x1004c9c97*/
    if ( __OFSUB__(0, v34) ) /*0x1004c9c90*/
    {
      v13 = v35; /*0x1004c9c9d*/
      v14 = 32 * v37; /*0x1004c9ca8*/
      v31[3] = *(_QWORD *)(v35 + 32 * v37 + 24); /*0x1004c9cb1*/
      v31[2] = *(_QWORD *)(v35 + 32 * v37 + 16); /*0x1004c9cbd*/
      v15 = *(_QWORD *)(v35 + 32 * v37); /*0x1004c9cc4*/
      v31[1] = *(_QWORD *)(v35 + 32 * v37 + 8); /*0x1004c9ccd*/
      v31[0] = v15; /*0x1004c9cd4*/
      *(_QWORD *)(v35 + v14 + 24) = v44; /*0x1004c9cdf*/
      *(_QWORD *)(v13 + v14 + 16) = v43; /*0x1004c9ce8*/
      v16 = v41; /*0x1004c9ced*/
      *(_QWORD *)(v13 + v14 + 8) = v42; /*0x1004c9cf5*/
      *(_QWORD *)(v13 + v14) = v16; /*0x1004c9cfa*/
      if ( LOBYTE(v31[0]) != 6 ) /*0x1004c9d05*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v31); /*0x1004c9d12*/
    }
    else
    {
      v24 = v40; /*0x1004c9d20*/
      v23 = v39; /*0x1004c9d2b*/
      v22 = v38; /*0x1004c9d36*/
      v21 = v37; /*0x1004c9d41*/
      v20 = __n; /*0x1004c9d4f*/
      v19 = (__int64 (__fastcall **)())v35; /*0x1004c9d64*/
      v18 = v34; /*0x1004c9d6b*/
      v25[3] = v44; /*0x1004c9d76*/
      v25[2] = v43; /*0x1004c9d81*/
      v25[1] = v42; /*0x1004c9d90*/
      v25[0] = v41; /*0x1004c9d97*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1004c9db3*/
        v31,
        &v18,
        v25);
    }
    if ( v12 ) /*0x1004c9dbb*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v12, 1); /*0x1004c9dc9*/
    *(_QWORD *)(a1 + 24) = v33; /*0x1004c9dd5*/
    v17 = v32[0]; /*0x1004c9dd9*/
    *(_QWORD *)(a1 + 16) = v32[1]; /*0x1004c9de7*/
    *(_QWORD *)(a1 + 8) = v17; /*0x1004c9deb*/
    *(_BYTE *)a1 = 5; /*0x1004c9def*/
    return core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&v45); /*0x1004c9df6*/
  }
  else
  {
    *(_QWORD *)(a1 + 24) = v30; /*0x1004c9c02*/
    *(_QWORD *)(a1 + 16) = v29; /*0x1004c9c0d*/
    result = v27; /*0x1004c9c11*/
    *(_QWORD *)(a1 + 8) = v28; /*0x1004c9c1f*/
    *(_QWORD *)a1 = result; /*0x1004c9c23*/
  }
  return result; /*0x1004c9dfb*/
}