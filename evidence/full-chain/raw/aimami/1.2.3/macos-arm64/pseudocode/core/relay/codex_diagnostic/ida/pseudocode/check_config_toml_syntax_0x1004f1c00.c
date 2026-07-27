// __ZN13codexmate_lib4core5relay16codex_diagnostic24check_config_toml_syntax @ 0x1004f1c00 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::check_config_toml_syntax::ha7a46b071f53d04b(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdx
  void *v5; // rcx
  __int64 v6; // r8
  __int64 result; // rax
  __int64 v8; // r15
  __int64 v9; // r14
  void *v10; // rax
  void *v11; // r12
  __int64 v12; // rax
  __int64 v13; // r13
  _QWORD *v14; // rax
  __int64 v15; // rbx
  __int64 v16; // r14
  _QWORD *v17; // r15
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _QWORD v23[12]; // [rsp+0h] [rbp-2E0h] BYREF
  _BYTE v24[104]; // [rsp+60h] [rbp-280h] BYREF
  _BYTE __dst[144]; // [rsp+C8h] [rbp-218h] BYREF
  _BYTE v26[104]; // [rsp+158h] [rbp-188h] BYREF
  _BYTE __src[144]; // [rsp+1C0h] [rbp-120h] BYREF
  _QWORD v28[12]; // [rsp+250h] [rbp-90h] BYREF
  __int64 v29; // [rsp+2B0h] [rbp-30h]

  if ( !a2 ) /*0x1004f1c1a*/
  {
    v5 = &unk_1015FD487; /*0x1004f1cb7*/
    v6 = 41; /*0x1004f1cc3*/
    return codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x1004f1cf8*/
             a1,
             &anon_92869709a5e99ce1936aa4e326b6c562_457,
             18,
             v5,
             v6);
  }
  core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, a3); /*0x1004f1c2c*/
  if ( !v4 ) /*0x1004f1c34*/
  {
    v5 = &unk_1015FD451; /*0x1004f1cd2*/
    v6 = 32; /*0x1004f1cde*/
    return codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x1004f1cde*/
             a1,
             &anon_92869709a5e99ce1936aa4e326b6c562_457,
             18,
             v5,
             v6);
  }
  _$LT$toml_edit..de..Deserializer$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h3e4345bc85cb5622(v26, a2, a3); /*0x1004f1c47*/
  qmemcpy(v28, &v26[8], sizeof(v28)); /*0x1004f1c66*/
  if ( *(_QWORD *)v26 != 2 ) /*0x1004f1c6d*/
  {
    memcpy(__dst, __src, sizeof(__dst)); /*0x1004f1d10*/
    qmemcpy(v23, v28, sizeof(v23)); /*0x1004f1d2b*/
    *(_QWORD *)v24 = *(_QWORD *)v26; /*0x1004f1d2e*/
    qmemcpy(&v24[8], v23, 0x60u); /*0x1004f1d44*/
    _$LT$toml_edit..de..Deserializer$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_any::h8b47c0d0d8825eaf( /*0x1004f1d55*/
      v26,
      v24);
    if ( *(_DWORD *)v26 == 2 ) /*0x1004f1d61*/
    {
      v28[4] = *(_QWORD *)&v26[32]; /*0x1004f1d6e*/
      v28[3] = *(_QWORD *)&v26[24]; /*0x1004f1d79*/
      v28[2] = *(_QWORD *)&v26[16]; /*0x1004f1d8b*/
      v28[1] = *(_QWORD *)&v26[8]; /*0x1004f1d8f*/
      v28[0] = 2; /*0x1004f1d96*/
    }
    else
    {
      qmemcpy(v28, v26, sizeof(v28)); /*0x1004f1fd7*/
      if ( LODWORD(v28[0]) != 2 ) /*0x1004f1fe1*/
        goto LABEL_11; /*0x1004f1fe1*/
    }
LABEL_27:
    codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x1004f1fe7*/
      a1,
      &anon_92869709a5e99ce1936aa4e326b6c562_457,
      18,
      &unk_1015FD471,
      17);
    return core::ptr::drop_in_place$LT$toml..value..Value$GT$::hcc07c86b75b1978f( /*0x1004f200f*/
             &v28[1],
             &anon_92869709a5e99ce1936aa4e326b6c562_457,
             v19,
             v20,
             v21,
             v22);
  }
  qmemcpy(v23, v28, sizeof(v23)); /*0x1004f1c89*/
  qmemcpy(v28, v23, sizeof(v28)); /*0x1004f1c9b*/
  if ( LODWORD(v28[0]) == 2 ) /*0x1004f1ca5*/
    goto LABEL_27; /*0x1004f1ca5*/
LABEL_11:
  qmemcpy(v24, v28, 0x60u); /*0x1004f1dc4*/
  v23[0] = v24; /*0x1004f1dc7*/
  v23[1] = _$LT$toml..de..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hb4e2762bdfecb2bd; /*0x1004f1dd5*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v26, &unk_1017B9036, v23); /*0x1004f1df1*/
  v29 = *(_QWORD *)v26; /*0x1004f1dfd*/
  v8 = *(_QWORD *)&v26[8]; /*0x1004f1e01*/
  v9 = *(_QWORD *)&v26[16]; /*0x1004f1e08*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v26, &unk_1017B9036); /*0x1004f1e0f*/
  v10 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1); /*0x1004f1e1e*/
  if ( !v10 ) /*0x1004f1e26*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 18); /*0x1004f2030*/
  v11 = v10; /*0x1004f1e2c*/
  qmemcpy(v10, "config_toml_syntax", 18); /*0x1004f1e48*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(18, 1); /*0x1004f1e54*/
  v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1004f1e63*/
  if ( !v12 ) /*0x1004f1e6b*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x1004f2041*/
  v13 = v12; /*0x1004f1e71*/
  *(_BYTE *)(v12 + 4) = 114; /*0x1004f1e74*/
  *(_DWORD *)v12 = 1869771365; /*0x1004f1e78*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x1004f1e7e*/
  v14 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(29, 1); /*0x1004f1e8d*/
  if ( !v14 ) /*0x1004f1e95*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 29); /*0x1004f2052*/
  *(_QWORD *)((char *)v14 + 21) = 0xAFAFE89994E995B3LL; /*0x1004f1ea5*/
  v14[2] = 0xE995B3E6ADAFE820LL; /*0x1004f1eb3*/
  qmemcpy(v14, "config.toml TOML", 16); /*0x1004f1ecf*/
  *(_QWORD *)(a1 + 72) = v29; /*0x1004f1ed6*/
  *(_QWORD *)(a1 + 80) = v8; /*0x1004f1eda*/
  *(_QWORD *)(a1 + 88) = v9; /*0x1004f1ede*/
  *(_QWORD *)a1 = 18; /*0x1004f1ee2*/
  *(_QWORD *)(a1 + 8) = v11; /*0x1004f1ee9*/
  *(_QWORD *)(a1 + 16) = 18; /*0x1004f1eed*/
  *(_QWORD *)(a1 + 24) = 5; /*0x1004f1ef5*/
  *(_QWORD *)(a1 + 32) = v13; /*0x1004f1efd*/
  *(_QWORD *)(a1 + 40) = 5; /*0x1004f1f01*/
  *(_QWORD *)(a1 + 48) = 29; /*0x1004f1f09*/
  *(_QWORD *)(a1 + 56) = v14; /*0x1004f1f11*/
  *(_QWORD *)(a1 + 64) = 29; /*0x1004f1f15*/
  *(_BYTE *)(a1 + 96) = 1; /*0x1004f1f1d*/
  if ( *(_QWORD *)&v24[24] ) /*0x1004f1f2b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v24[32], *(_QWORD *)&v24[24], 1); /*0x1004f1f39*/
  if ( !__OFSUB__(-*(_QWORD *)&v24[72], 1) && *(_QWORD *)&v24[72] ) /*0x1004f1f4d*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v24[80], *(_QWORD *)&v24[72], 1); /*0x1004f1f5b*/
  v15 = *(_QWORD *)&v24[56]; /*0x1004f1f60*/
  v16 = *(_QWORD *)&v24[64]; /*0x1004f1f67*/
  if ( *(_QWORD *)&v24[64] ) /*0x1004f1f71*/
  {
    v17 = (_QWORD *)(*(_QWORD *)&v24[56] + 8LL); /*0x1004f1f73*/
    do /*0x1004f1f87*/
    {
      v18 = *(v17 - 1); /*0x1004f1f89*/
      if ( v18 ) /*0x1004f1f90*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v17, v18, 1); /*0x1004f1f9a*/
      v17 += 3; /*0x1004f1f80*/
      --v16; /*0x1004f1f84*/
    }
    while ( v16 ); /*0x1004f1f87*/
  }
  result = *(_QWORD *)&v24[48]; /*0x1004f1fa1*/
  if ( *(_QWORD *)&v24[48] ) /*0x1004f1fab*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, 24LL * *(_QWORD *)&v24[48], 8); /*0x1004f1fbd*/
  return result; /*0x1004f1ce7*/
}