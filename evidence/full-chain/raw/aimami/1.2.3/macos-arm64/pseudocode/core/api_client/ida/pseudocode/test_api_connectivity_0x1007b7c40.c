// __ZN13codexmate_lib4core10api_client21test_api_connectivity @ 0x1007b7c40 | 基线 same-set
__int64 __fastcall codexmate_lib::core::api_client::test_api_connectivity::h010670e6f25f2492(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        double a4,
        double a5)
{
  void *v6; // rax
  void *v7; // r15
  __int64 v8; // rcx
  void *v9; // rax
  void *v10; // r14
  __int64 v11; // rax
  void *v12; // rax
  void *v13; // r14
  __int64 v14; // rax
  void *v15; // rdx
  unsigned __int16 v16; // r15
  _WORD *v17; // rax
  _WORD *v18; // r14
  __int64 v19; // rcx
  _BYTE __src[328]; // [rsp+10h] [rbp-4B0h] BYREF
  _QWORD __dst[41]; // [rsp+158h] [rbp-368h] BYREF
  _OWORD v23[21]; // [rsp+2A0h] [rbp-220h] BYREF
  _BYTE v24[24]; // [rsp+3F0h] [rbp-D0h] BYREF
  _QWORD v25[3]; // [rsp+408h] [rbp-B8h] BYREF
  _QWORD v26[2]; // [rsp+420h] [rbp-A0h] BYREF
  __int64 v27; // [rsp+430h] [rbp-90h] BYREF
  __int128 v28; // [rsp+438h] [rbp-88h]
  __int64 v29; // [rsp+448h] [rbp-78h]
  volatile signed __int64 *v30; // [rsp+450h] [rbp-70h] BYREF
  __int128 v31; // [rsp+458h] [rbp-68h]
  __int64 *v32; // [rsp+468h] [rbp-58h] BYREF
  __int64 (__fastcall **v33)(); // [rsp+470h] [rbp-50h]
  __int64 v34; // [rsp+478h] [rbp-48h]
  __int64 (__fastcall *v35)(); // [rsp+480h] [rbp-40h]
  __int64 v36; // [rsp+488h] [rbp-38h] BYREF
  __int64 v37; // [rsp+490h] [rbp-30h]
  __int64 v38; // [rsp+498h] [rbp-28h]
  unsigned __int16 v39; // [rsp+4A6h] [rbp-1Ah] BYREF

  codexmate_lib::core::api_client::sanitize_proxy_config::h442c99beeb88638a((__int64)v23, a2); /*0x1007b7c5d*/
  if ( LODWORD(v23[0]) == 11 ) /*0x1007b7c69*/
  {
    v29 = *(_QWORD *)&v23[2]; /*0x1007b7c76*/
    v28 = v23[1]; /*0x1007b7c93*/
    v27 = *((_QWORD *)&v23[0] + 1); /*0x1007b7c9a*/
    codexmate_lib::core::api_client::http_client::hd6199412cc486f7f((__int64)v23, (__int64)&v27, a4, a5); /*0x1007b7caf*/
    if ( LODWORD(v23[0]) == 11 ) /*0x1007b7cbb*/
    {
      v31 = v23[1]; /*0x1007b7cda*/
      v30 = *((volatile signed __int64 **)&v23[0] + 1); /*0x1007b7cde*/
      memset(v23, 1, 24); /*0x1007b7cfa*/
      reqwest::blocking::client::Client::request::h7c2f6eecf4bb7488(__dst); /*0x1007b7d20*/
      reqwest::blocking::request::RequestBuilder::header_sensitive::h88aff67beb7138a9(__src, __dst, 0); /*0x1007b7d53*/
      if ( a3 ) /*0x1007b7d5b*/
      {
        memcpy(__dst, __src, sizeof(__dst)); /*0x1007b7d74*/
        *(_QWORD *)&v23[0] = a3; /*0x1007b7d79*/
        *((_QWORD *)&v23[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1007b7d87*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v24, &unk_1017B931C, v23); /*0x1007b7da3*/
        reqwest::blocking::request::RequestBuilder::header_sensitive::hf40612ea765502d2(v23, __dst); /*0x1007b7dcc*/
        reqwest::blocking::request::RequestBuilder::header_sensitive::h6eed384825c3beec(__dst, v23); /*0x1007b7df5*/
        reqwest::blocking::request::RequestBuilder::header_sensitive::h88aff67beb7138a9(__src, __dst, 0); /*0x1007b7e28*/
      }
      reqwest::blocking::request::RequestBuilder::send::hcef8dd63d8ba20b3(v23, __src); /*0x1007b7e3b*/
      if ( LODWORD(v23[0]) == 3 ) /*0x1007b7e47*/
      {
        v32 = *((__int64 **)&v23[0] + 1); /*0x1007b7e54*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v23, __src); /*0x1007b7e58*/
        v6 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x1007b7e67*/
        if ( !v6 ) /*0x1007b7e6f*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13); /*0x1007b82a1*/
        v7 = v6; /*0x1007b7e75*/
        qmemcpy(v6, "network_error", 13); /*0x1007b7e90*/
        __dst[0] = &v32; /*0x1007b7e97*/
        __dst[1] = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11; /*0x1007b7ea5*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v25, &unk_1017C4DF9, __dst); /*0x1007b7ec1*/
        *(_QWORD *)a1 = 13; /*0x1007b7ec6*/
        *(_QWORD *)(a1 + 8) = v7; /*0x1007b7ecd*/
        *(_QWORD *)(a1 + 16) = 13; /*0x1007b7ed1*/
        *(_BYTE *)(a1 + 56) = 0; /*0x1007b7ed9*/
        *(_DWORD *)(a1 + 48) = 0; /*0x1007b7edd*/
        v8 = v25[1]; /*0x1007b7eeb*/
        *(_QWORD *)(a1 + 24) = v25[0]; /*0x1007b7ef2*/
        *(_QWORD *)(a1 + 32) = v8; /*0x1007b7ef6*/
        *(_QWORD *)(a1 + 40) = v25[2]; /*0x1007b7f01*/
        core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38(v32); /*0x1007b7f09*/
      }
      else
      {
        memcpy(__dst, v23, 0xB0u); /*0x1007b80f4*/
        v15 = &unk_1016736D1; /*0x1007b8104*/
        if ( (_BYTE)v29 ) /*0x1007b810e*/
          v15 = &unk_1016732A0; /*0x1007b810e*/
        v16 = __dst[13]; /*0x1007b8112*/
        v26[0] = v15; /*0x1007b811e*/
        v26[1] = (unsigned __int8)v29 ^ 0x11LL; /*0x1007b8125*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, v23); /*0x1007b812c*/
        v17 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x1007b813b*/
        if ( !v17 ) /*0x1007b8143*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x1007b82b2*/
        v18 = v17; /*0x1007b8149*/
        *v17 = 27503; /*0x1007b814c*/
        v39 = v16; /*0x1007b8151*/
        v32 = v26; /*0x1007b815d*/
        v33 = (__int64 (__fastcall **)())_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1007b8168*/
        v34 = (__int64)&v39; /*0x1007b8170*/
        v35 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x1007b817b*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v36, &unk_1017C4E14, &v32); /*0x1007b818e*/
        *(_QWORD *)a1 = 2; /*0x1007b8197*/
        *(_QWORD *)(a1 + 8) = v18; /*0x1007b819e*/
        *(_QWORD *)(a1 + 16) = 2; /*0x1007b81a2*/
        *(_BYTE *)(a1 + 56) = 1; /*0x1007b81aa*/
        *(_DWORD *)(a1 + 48) = 1; /*0x1007b81ae*/
        *(_DWORD *)(a1 + 52) = v16; /*0x1007b81b5*/
        v19 = v37; /*0x1007b81bc*/
        *(_QWORD *)(a1 + 24) = v36; /*0x1007b81c0*/
        *(_QWORD *)(a1 + 32) = v19; /*0x1007b81c4*/
        *(_QWORD *)(a1 + 40) = v38; /*0x1007b81cc*/
        core::ptr::drop_in_place$LT$reqwest..blocking..response..Response$GT$::h5421d9ae43e533e2(__dst); /*0x1007b81d7*/
      }
      if ( !_InterlockedDecrement64(v30) ) /*0x1007b81e0*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h47ee1b0b32217f4e(&v30); /*0x1007b81ea*/
    }
    else
    {
      qmemcpy(__dst, v23, 0x60u); /*0x1007b8009*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&__dst[12], &v23[6]); /*0x1007b800c*/
      v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1); /*0x1007b801b*/
      if ( !v12 ) /*0x1007b8023*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 19); /*0x1007b8290*/
      v13 = v12; /*0x1007b8029*/
      qmemcpy(v12, "client_build_failed", 19); /*0x1007b8044*/
      v36 = 0; /*0x1007b804f*/
      v37 = 1; /*0x1007b8057*/
      v38 = 0; /*0x1007b805f*/
      v34 = 1610612768; /*0x1007b8067*/
      v32 = &v36; /*0x1007b8073*/
      v33 = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007b807e*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1007b808d*/
                              __dst,
                              &v32) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007b826e*/
          &anon_3ce6d1417794db0febde534c64082f90_390,
          55,
          v26,
          &anon_3ce6d1417794db0febde534c64082f90_429,
          &anon_3ce6d1417794db0febde534c64082f90_392);
      *(_QWORD *)(a1 + 40) = v38; /*0x1007b809e*/
      v14 = v36; /*0x1007b80a2*/
      *(_QWORD *)(a1 + 32) = v37; /*0x1007b80aa*/
      *(_QWORD *)(a1 + 24) = v14; /*0x1007b80ae*/
      *(_QWORD *)a1 = 19; /*0x1007b80b2*/
      *(_QWORD *)(a1 + 8) = v13; /*0x1007b80b9*/
      *(_QWORD *)(a1 + 16) = 19; /*0x1007b80bd*/
      *(_BYTE *)(a1 + 56) = 0; /*0x1007b80c5*/
      *(_DWORD *)(a1 + 48) = 0; /*0x1007b80c9*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v23); /*0x1007b80d7*/
    }
    if ( 2 * v27 ) /*0x1007b81f6*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v27, 1); /*0x1007b820f*/
  }
  else
  {
    qmemcpy(__dst, v23, 0x60u); /*0x1007b7f26*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&__dst[12], &v23[6]); /*0x1007b7f29*/
    v9 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1); /*0x1007b7f38*/
    if ( !v9 ) /*0x1007b7f40*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 14); /*0x1007b827f*/
    v10 = v9; /*0x1007b7f46*/
    qmemcpy(v9, "invalid_config", 14); /*0x1007b7f61*/
    v36 = 0; /*0x1007b7f64*/
    v37 = 1; /*0x1007b7f6c*/
    v38 = 0; /*0x1007b7f74*/
    v34 = 1610612768; /*0x1007b7f7c*/
    v32 = &v36; /*0x1007b7f88*/
    v33 = &anon_3ce6d1417794db0febde534c64082f90_389; /*0x1007b7f93*/
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2( /*0x1007b7fa2*/
                            __dst,
                            &v32) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1007b8246*/
        &anon_3ce6d1417794db0febde534c64082f90_390,
        55,
        v26,
        &anon_3ce6d1417794db0febde534c64082f90_429,
        &anon_3ce6d1417794db0febde534c64082f90_392);
    *(_QWORD *)(a1 + 40) = v38; /*0x1007b7fb3*/
    v11 = v36; /*0x1007b7fb7*/
    *(_QWORD *)(a1 + 32) = v37; /*0x1007b7fbf*/
    *(_QWORD *)(a1 + 24) = v11; /*0x1007b7fc3*/
    *(_QWORD *)a1 = 14; /*0x1007b7fc7*/
    *(_QWORD *)(a1 + 8) = v10; /*0x1007b7fce*/
    *(_QWORD *)(a1 + 16) = 14; /*0x1007b7fd2*/
    *(_BYTE *)(a1 + 56) = 0; /*0x1007b7fda*/
    *(_DWORD *)(a1 + 48) = 0; /*0x1007b7fde*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v23); /*0x1007b7fec*/
  }
  return a1; /*0x1007b8217*/
}