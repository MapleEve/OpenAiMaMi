// __ZN13codexmate_lib4core5relay16codex_diagnostic38check_thread_model_catalog_consistency @ 0x1005149b0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::check_thread_model_catalog_consistency::h789673723c3e4b34(
        __int64 a1,
        __int64 a2,
        char a3)
{
  __int64 v3; // r14
  void *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // r14
  void *v8; // rax
  void *v9; // r12
  __int64 v10; // rax
  __int64 v11; // r13
  _QWORD *v12; // rax
  _QWORD *v13; // rcx
  _BYTE v14[16]; // [rsp+8h] [rbp-108h] BYREF
  __int64 v15; // [rsp+18h] [rbp-F8h]
  __int64 v16; // [rsp+28h] [rbp-E8h]
  __int64 v17; // [rsp+30h] [rbp-E0h]
  __int64 v18; // [rsp+48h] [rbp-C8h] BYREF
  char v19; // [rsp+50h] [rbp-C0h] BYREF
  __int64 v20; // [rsp+58h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+60h] [rbp-B0h] BYREF
  _QWORD *v22; // [rsp+68h] [rbp-A8h]
  __int64 v23; // [rsp+70h] [rbp-A0h]
  _QWORD v24[3]; // [rsp+78h] [rbp-98h] BYREF
  __int64 *v25; // [rsp+90h] [rbp-80h] BYREF
  __int64 (__fastcall *v26)(); // [rsp+98h] [rbp-78h]
  __int64 *v27; // [rsp+A0h] [rbp-70h]
  __int64 (__fastcall *v28)(); // [rsp+A8h] [rbp-68h]
  __int64 *v29; // [rsp+B0h] [rbp-60h]
  __int64 (__fastcall *v30)(); // [rsp+B8h] [rbp-58h]
  __int64 v31; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v32; // [rsp+C8h] [rbp-48h]
  __int64 v33; // [rsp+D0h] [rbp-40h]
  __int64 v34; // [rsp+D8h] [rbp-38h]
  __int64 v35; // [rsp+E0h] [rbp-30h]

  if ( (a3 & 1) == 0 ) /*0x1005149c7*/
    return codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x100514a3b*/
             a1,
             &anon_92869709a5e99ce1936aa4e326b6c562_613,
             32,
             &unk_1015FE65E,
             63);
  codexmate_lib::core::relay::codex_thread_visibility::inspect_router_thread_model_catalog::hef17cfa3d974fdef(v14, a2); /*0x1005149d3*/
  v3 = v15; /*0x1005149d8*/
  if ( v15 | v18 ) /*0x1005149e6*/
  {
    if ( v17 ) /*0x100514a4a*/
    {
      alloc::str::join_generic_copy::heca7a5e86402c6b6(&v25, v16, v17, &unk_1015FD2A7, 3); /*0x100514a68*/
      v33 = (__int64)v27; /*0x100514a71*/
      v32 = (__int64)v26; /*0x100514a7d*/
      v31 = (__int64)v25; /*0x100514a81*/
      if ( v3 ) /*0x100514a8f*/
      {
LABEL_7:
        v20 = v3; /*0x100514a95*/
        v25 = &v20; /*0x100514aa3*/
        v26 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100514aae*/
        v27 = &v18; /*0x100514ab2*/
        v28 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100514ab6*/
        v29 = &v31; /*0x100514abe*/
        v30 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100514ac9*/
        v5 = &unk_1017C0F79; /*0x100514acd*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v24, &unk_1017C0F79, &v25); /*0x100514adf*/
LABEL_11:
        v35 = v24[0]; /*0x100514b83*/
        v34 = v24[1]; /*0x100514b95*/
        v7 = v24[2]; /*0x100514b99*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v24, v5); /*0x100514ba0*/
        v8 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 1); /*0x100514baf*/
        if ( !v8 ) /*0x100514bb7*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 32); /*0x100514d87*/
        v9 = v8; /*0x100514bbd*/
        qmemcpy(v8, "thread_model_catalog_consistency", 32); /*0x100514bf7*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 1); /*0x100514bfb*/
        v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100514c0a*/
        if ( !v10 ) /*0x100514c12*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x100514d98*/
        v11 = v10; /*0x100514c18*/
        *(_BYTE *)(v10 + 4) = 114; /*0x100514c1b*/
        *(_DWORD *)v10 = 1869771365; /*0x100514c1f*/
        if ( v15 ) /*0x100514c2d*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x100514c33*/
          v12 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(45, 1); /*0x100514c42*/
          if ( !v12 ) /*0x100514c4a*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 45); /*0x100514da9*/
          *(_QWORD *)((char *)v12 + 37) = 0xA5B4E8B1A4E5A59FLL; /*0x100514c5a*/
          v12[4] = 0xE5A59FE680A3E6A7LL; /*0x100514c68*/
          v12[3] = 0x80E6B487E880B8E4LL; /*0x100514c76*/
          v12[2] = 0x20676F6C61746143LL; /*0x100514c84*/
          v12[1] = 0x208EB8E48B9EE5A1LL; /*0x100514c92*/
          *v12 = 0xA8E68BA8E7BFBAE7LL; /*0x100514ca0*/
          v21 = 45; /*0x100514ca3*/
          v22 = v12; /*0x100514cae*/
          v23 = 45; /*0x100514cb5*/
        }
        else
        {
          v25 = &v18; /*0x100514cc2*/
          v26 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100514ccd*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(&v21, &unk_1017C0FCC, &v25); /*0x100514ce3*/
        }
        *(_QWORD *)(a1 + 72) = v35; /*0x100514cec*/
        *(_QWORD *)(a1 + 80) = v34; /*0x100514cf4*/
        *(_QWORD *)(a1 + 88) = v7; /*0x100514cf8*/
        *(_QWORD *)a1 = 32; /*0x100514cfc*/
        *(_QWORD *)(a1 + 8) = v9; /*0x100514d03*/
        *(_QWORD *)(a1 + 16) = 32; /*0x100514d07*/
        *(_QWORD *)(a1 + 24) = 5; /*0x100514d0f*/
        *(_QWORD *)(a1 + 32) = v11; /*0x100514d17*/
        *(_QWORD *)(a1 + 40) = 5; /*0x100514d1b*/
        v13 = v22; /*0x100514d2a*/
        *(_QWORD *)(a1 + 48) = v21; /*0x100514d31*/
        *(_QWORD *)(a1 + 56) = v13; /*0x100514d35*/
        *(_QWORD *)(a1 + 64) = v23; /*0x100514d40*/
        *(_BYTE *)(a1 + 96) = 1; /*0x100514d44*/
        if ( v31 ) /*0x100514d4f*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v31, 1); /*0x100514d5a*/
        return core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadModelCatalogInspection$GT$::h5aea47d90a3b05a1(v14); /*0x100514d5a*/
      }
    }
    else
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v14, a2); /*0x100514ae9*/
      v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1); /*0x100514af8*/
      if ( !v6 ) /*0x100514b00*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9); /*0x100514dba*/
      *(_QWORD *)v6 = 0xBEE4BAA4E7A097E6LL; /*0x100514b10*/
      *(_BYTE *)(v6 + 8) = -117; /*0x100514b13*/
      v31 = 9; /*0x100514b17*/
      v32 = v6; /*0x100514b1f*/
      v33 = 9; /*0x100514b23*/
      if ( v3 ) /*0x100514b35*/
        goto LABEL_7; /*0x100514b35*/
    }
    v25 = &v18; /*0x100514b42*/
    v26 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100514b4d*/
    v27 = (__int64 *)&v19; /*0x100514b51*/
    v28 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100514b55*/
    v29 = &v31; /*0x100514b5d*/
    v30 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100514b68*/
    v5 = &unk_1017C0F10; /*0x100514b6c*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v24, &unk_1017C0F10, &v25); /*0x100514b7e*/
    goto LABEL_11; /*0x100514b7e*/
  }
  codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x100514a07*/
    a1,
    &anon_92869709a5e99ce1936aa4e326b6c562_613,
    32,
    &unk_1015FE6A2,
    36);
  return core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..ThreadModelCatalogInspection$GT$::h5aea47d90a3b05a1(v14); /*0x100514a2a*/
}