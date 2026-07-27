// __ZN13codexmate_lib4core5relay16codex_diagnostic26check_router_http_contract @ 0x1004fd550 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::codex_diagnostic::check_router_http_contract::h1f5d10a08e55f54d(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _BYTE *a4,
        __int64 a5)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // r12
  __int64 v7; // r14
  __int64 v8; // rcx
  _QWORD *result; // rax
  void *v10; // rax
  void *v11; // rbx
  _DWORD *v12; // rax
  _DWORD *v13; // r14
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16; // rsi
  __int64 v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rdi
  unsigned __int64 v20; // rsi
  __int64 v21; // r12
  __int64 v22; // r13
  __m128i v23; // xmm0
  void *v24; // rax
  void *v25; // r13
  __int64 v26; // rax
  __int64 v27; // r14
  __int64 v28; // rbx
  void *v29; // rax
  _QWORD *v30; // r14
  __int64 v31; // rsi
  unsigned __int64 v32; // r14
  __int64 (__fastcall *v33)(); // rax
  void *v34; // rax
  __int64 v35; // rax
  __int64 v36; // r12
  _QWORD *v37; // rax
  _QWORD *v38; // rbx
  void *v39; // rax
  void *v40; // r14
  unsigned __int64 v41; // [rsp+8h] [rbp-B8h] BYREF
  __int64 v42; // [rsp+10h] [rbp-B0h]
  __int64 v43; // [rsp+18h] [rbp-A8h]
  _QWORD v44[2]; // [rsp+20h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+30h] [rbp-90h] BYREF
  __int64 v46; // [rsp+38h] [rbp-88h]
  __int64 (__fastcall *v47)(); // [rsp+40h] [rbp-80h]
  __int64 (__fastcall *v48)(); // [rsp+48h] [rbp-78h] BYREF
  __int64 v49; // [rsp+50h] [rbp-70h]
  __int64 v50; // [rsp+58h] [rbp-68h]
  void *v51; // [rsp+60h] [rbp-60h] BYREF
  __int64 (__fastcall *v52)(); // [rsp+68h] [rbp-58h]
  __int64 v53; // [rsp+70h] [rbp-50h]
  __int64 v54; // [rsp+78h] [rbp-48h]
  __int64 v55; // [rsp+80h] [rbp-40h]
  void *v56; // [rsp+88h] [rbp-38h]
  unsigned __int64 v57; // [rsp+90h] [rbp-30h]

  if ( !a4[292] ) /*0x1004fd56e*/
    return (_QWORD *)codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x1004fd61c*/
                       a1,
                       "router_http_contract",
                       20,
                       &unk_1015FDA31,
                       48);
  if ( a2 ) /*0x1004fd573*/
  {
    v6 = 0x8000000000000000LL; /*0x1004fd579*/
    if ( a4[122] ) /*0x1004fd583*/
    {
      v51 = a4 + 120; /*0x1004fd591*/
      v52 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0; /*0x1004fd59c*/
      v7 = a3; /*0x1004fd5b8*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v41, &unk_1017C01AB, &v51); /*0x1004fd5be*/
      a3 = v7; /*0x1004fd5c6*/
      v5 = v42; /*0x1004fd5d0*/
      a5 = v43; /*0x1004fd5d7*/
      v8 = 0; /*0x1004fd5de*/
      if ( v41 != 0x8000000000000000LL ) /*0x1004fd5e3*/
        v8 = v42; /*0x1004fd5e3*/
      v6 = v41; /*0x1004fd5e7*/
    }
    else
    {
      v8 = 0; /*0x1004fd7ae*/
    }
    codexmate_lib::core::relay::codex_writer::router_http_contract_issues::hc4329a58b4f5a619(&v51, a2, a3, v8, a5); /*0x1004fd7b4*/
    if ( (_DWORD)v51 == 1 ) /*0x1004fd7bd*/
    {
      codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x1004fd7db*/
        a1,
        "router_http_contract",
        20,
        &unk_1015FDACF,
        56);
      v16 = (__int64)v52; /*0x1004fd7e0*/
      if ( !v52 ) /*0x1004fd7e7*/
      {
LABEL_18:
        result = (_QWORD *)(2 * v6); /*0x1004fd7f7*/
        if ( !(2 * v6) ) /*0x1004fd802*/
          return result; /*0x1004fd802*/
        v19 = v5; /*0x1004fd80d*/
        v20 = v6; /*0x1004fd810*/
        return (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v20, 1); /*0x1004fda2c*/
      }
      v17 = v53; /*0x1004fd7e9*/
      v18 = 1; /*0x1004fd7ed*/
LABEL_17:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v16, v18); /*0x1004fd7f2*/
      goto LABEL_18; /*0x1004fd7f2*/
    }
    v57 = v6; /*0x1004fd818*/
    v21 = v54; /*0x1004fd81c*/
    v50 = v54; /*0x1004fd820*/
    v49 = v53; /*0x1004fd82c*/
    v48 = v52; /*0x1004fd830*/
    v55 = v5; /*0x1004fd837*/
    if ( v54 ) /*0x1004fd83b*/
    {
      if ( v54 == 1 /*0x1004fd878*/
        && (v22 = v49, *(_QWORD *)(v49 + 16) == 31)
        && (v23 = _mm_or_si128(
                    _mm_xor_si128(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v49 + 8)), (__m128i)xmmword_1015FBD40),
                    _mm_xor_si128(
                      _mm_loadu_si128((const __m128i *)(*(_QWORD *)(v49 + 8) + 15LL)),
                      (__m128i)xmmword_1015FBD30)),
            _mm_testz_si128(v23, v23)) )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v51, a2); /*0x1004fda77*/
        v34 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(20, 1); /*0x1004fda86*/
        if ( v34 ) /*0x1004fda8e*/
        {
          qmemcpy(v34, "router_http_contract", 20); /*0x1004fdaac*/
          v56 = v34; /*0x1004fdaaf*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(20, 1); /*0x1004fdaba*/
          v35 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1004fdac9*/
          if ( !v35 ) /*0x1004fdad1*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x1004fdc68*/
          v36 = v35; /*0x1004fdad7*/
          *(_BYTE *)(v35 + 4) = 114; /*0x1004fdada*/
          *(_DWORD *)v35 = 1869771365; /*0x1004fdade*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x1004fdae4*/
          v37 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 1); /*0x1004fdaf3*/
          if ( !v37 ) /*0x1004fdafb*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 32); /*0x1004fdc79*/
          v38 = v37; /*0x1004fdb01*/
          qmemcpy(v37 + 1, "imai1 HTTP-only provider", 24); /*0x1004fdb2a*/
          *v37 = 0x612091B0E5BABCE7LL; /*0x1004fdb38*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 1); /*0x1004fdb3b*/
          v39 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(68, 1); /*0x1004fdb4a*/
          if ( !v39 ) /*0x1004fdb52*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 68); /*0x1004fdc8a*/
          v40 = v39; /*0x1004fdb58*/
          memcpy(v39, &unk_1015FDA68, 0x44u); /*0x1004fdb6a*/
          *(_QWORD *)a1 = 20; /*0x1004fdb6f*/
          *(_QWORD *)(a1 + 8) = v56; /*0x1004fdb7a*/
          *(_QWORD *)(a1 + 16) = 20; /*0x1004fdb7e*/
          *(_QWORD *)(a1 + 24) = 5; /*0x1004fdb86*/
          *(_QWORD *)(a1 + 32) = v36; /*0x1004fdb8e*/
          *(_QWORD *)(a1 + 40) = 5; /*0x1004fdb92*/
          *(_QWORD *)(a1 + 48) = 32; /*0x1004fdb9a*/
          *(_QWORD *)(a1 + 56) = v38; /*0x1004fdba2*/
          *(_QWORD *)(a1 + 64) = 32; /*0x1004fdba6*/
          *(_QWORD *)(a1 + 72) = 68; /*0x1004fdbae*/
          *(_QWORD *)(a1 + 80) = v40; /*0x1004fdbb6*/
          *(_QWORD *)(a1 + 88) = 68; /*0x1004fdbba*/
          *(_BYTE *)(a1 + 96) = 1; /*0x1004fdbc2*/
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h388ebe1b1d9ed77c(&v48); /*0x1004fdbcb*/
          v6 = v57; /*0x1004fdbd7*/
          v5 = v55; /*0x1004fdbdb*/
          if ( !v48 ) /*0x1004fdbdf*/
            goto LABEL_18; /*0x1004fdbdf*/
          v16 = 24LL * (_QWORD)v48; /*0x1004fdbe9*/
          v18 = 8; /*0x1004fdbed*/
          v17 = v22; /*0x1004fdbf2*/
          goto LABEL_17; /*0x1004fdbf5*/
        }
      }
      else
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v51, a2); /*0x1004fd87e*/
        v24 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(20, 1); /*0x1004fd88d*/
        if ( v24 ) /*0x1004fd895*/
        {
          v25 = v24; /*0x1004fd89b*/
          qmemcpy(v24, "router_http_contract", 20); /*0x1004fd8b6*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(20, 1); /*0x1004fd8c2*/
          v26 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1004fd8d1*/
          if ( !v26 ) /*0x1004fd8d9*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x1004fdc57*/
          v27 = v26; /*0x1004fd8df*/
          *(_BYTE *)(v26 + 4) = 114; /*0x1004fd8e2*/
          *(_DWORD *)v26 = 1869771365; /*0x1004fd8e6*/
          v45 = v21; /*0x1004fd8ec*/
          v44[0] = &v45; /*0x1004fd8fa*/
          v44[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1004fd908*/
          alloc::fmt::format::format_inner::h3c16c74008a310d4(&v51, &unk_1017C017A, v44); /*0x1004fd921*/
          v56 = v51; /*0x1004fd92a*/
          v47 = v52; /*0x1004fd932*/
          v46 = v53; /*0x1004fd93a*/
          v28 = v49; /*0x1004fd941*/
          alloc::str::join_generic_copy::heca7a5e86402c6b6(&v51, v49, v21, &unk_1015FD2A7, 3); /*0x1004fd95c*/
          *(_QWORD *)(a1 + 88) = v53; /*0x1004fd965*/
          v29 = v51; /*0x1004fd969*/
          *(_QWORD *)(a1 + 80) = v52; /*0x1004fd971*/
          *(_QWORD *)(a1 + 72) = v29; /*0x1004fd975*/
          *(_QWORD *)a1 = 20; /*0x1004fd979*/
          *(_QWORD *)(a1 + 8) = v25; /*0x1004fd980*/
          *(_QWORD *)(a1 + 16) = 20; /*0x1004fd984*/
          *(_QWORD *)(a1 + 24) = 5; /*0x1004fd98c*/
          *(_QWORD *)(a1 + 32) = v27; /*0x1004fd994*/
          *(_QWORD *)(a1 + 40) = 5; /*0x1004fd998*/
          *(_QWORD *)(a1 + 48) = v56; /*0x1004fd9a4*/
          *(_QWORD *)(a1 + 56) = v47; /*0x1004fd9ac*/
          *(_QWORD *)(a1 + 64) = v46; /*0x1004fd9b7*/
          *(_BYTE *)(a1 + 96) = 1; /*0x1004fd9bb*/
          v30 = (_QWORD *)(v28 + 8); /*0x1004fd9c0*/
          do /*0x1004fd9d7*/
          {
            v31 = *(v30 - 1); /*0x1004fd9d9*/
            if ( v31 ) /*0x1004fd9e0*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v30, v31, 1); /*0x1004fd9ea*/
            v30 += 3; /*0x1004fd9d0*/
            --v21; /*0x1004fd9d4*/
          }
          while ( v21 ); /*0x1004fd9d7*/
          v32 = v57; /*0x1004fd9f1*/
          v33 = v48; /*0x1004fd9f5*/
          if ( !v48 ) /*0x1004fd9fc*/
            goto LABEL_32; /*0x1004fd9fc*/
LABEL_31:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, 24LL * (_QWORD)v33, 8); /*0x1004fd9fe*/
LABEL_32:
          result = (_QWORD *)(2 * v32); /*0x1004fda13*/
          if ( !(2 * v32) ) /*0x1004fda1e*/
            return result; /*0x1004fda1e*/
          v19 = v55; /*0x1004fda25*/
          v20 = v32; /*0x1004fda29*/
          return (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v20, 1); /*0x1004fda29*/
        }
      }
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 20); /*0x1004fdc46*/
    }
    v32 = v57; /*0x1004fda5f*/
    codexmate_lib::core::relay::codex_diagnostic::ok_item::hb5644450cf28c701( /*0x1004fda63*/
      a1,
      "router_http_contract",
      20,
      &unk_1015FDAAC,
      35);
    v28 = v49; /*0x1004fda68*/
    v33 = v48; /*0x1004fda6c*/
    if ( !v48 ) /*0x1004fda73*/
      goto LABEL_32; /*0x1004fda73*/
    goto LABEL_31; /*0x1004fda73*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, 0); /*0x1004fd621*/
  v10 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(20, 1); /*0x1004fd630*/
  if ( !v10 ) /*0x1004fd638*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 20); /*0x1004fdc04*/
  v11 = v10; /*0x1004fd63e*/
  qmemcpy(v10, "router_http_contract", 20); /*0x1004fd659*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(20, 1); /*0x1004fd663*/
  v12 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1004fd672*/
  if ( !v12 ) /*0x1004fd67a*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1004fdc13*/
  v13 = v12; /*0x1004fd680*/
  *(_DWORD *)((char *)v12 + 3) = 1735289198; /*0x1004fd683*/
  *v12 = 1852989815; /*0x1004fd68a*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1); /*0x1004fd690*/
  v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(49, 1); /*0x1004fd69f*/
  if ( !v14 ) /*0x1004fd6a7*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 49); /*0x1004fdc24*/
  v15 = v14; /*0x1004fd6ad*/
  *(_QWORD *)(v14 + 40) = 0xBCEF87BFE8B3B7E8LL; /*0x1004fd6ba*/
  *(_QWORD *)(v14 + 32) = 0x8CBCEFBBAFE8AF8FLL; /*0x1004fd6c9*/
  *(_QWORD *)(v14 + 24) = 0xE58DB8E420676966LL; /*0x1004fd6d8*/
  *(_QWORD *)(v14 + 16) = 0x6E6F6388BCEFA6BALL; /*0x1004fd6e7*/
  *(_QWORD *)(v14 + 8) = 0xE791A5E520505454LL; /*0x1004fd6f6*/
  *(_QWORD *)v14 = 0x4820726574756F52LL; /*0x1004fd705*/
  *(_BYTE *)(v14 + 48) = -119; /*0x1004fd709*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(49, 1); /*0x1004fd70f*/
  result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1); /*0x1004fd71e*/
  if ( !result ) /*0x1004fd726*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24); /*0x1004fdc35*/
  result[2] = 0x6C6D6F742E676966LL; /*0x1004fd736*/
  result[1] = 0x6E6F6320968FE5BBLL; /*0x1004fd744*/
  *result = 0xAFE895B3E6A097E6LL; /*0x1004fd752*/
  *(_QWORD *)a1 = 20; /*0x1004fd755*/
  *(_QWORD *)(a1 + 8) = v11; /*0x1004fd75c*/
  *(_QWORD *)(a1 + 16) = 20; /*0x1004fd760*/
  *(_QWORD *)(a1 + 24) = 7; /*0x1004fd768*/
  *(_QWORD *)(a1 + 32) = v13; /*0x1004fd770*/
  *(_QWORD *)(a1 + 40) = 7; /*0x1004fd774*/
  *(_QWORD *)(a1 + 48) = 49; /*0x1004fd77c*/
  *(_QWORD *)(a1 + 56) = v15; /*0x1004fd784*/
  *(_QWORD *)(a1 + 64) = 49; /*0x1004fd788*/
  *(_QWORD *)(a1 + 72) = 24; /*0x1004fd790*/
  *(_QWORD *)(a1 + 80) = result; /*0x1004fd798*/
  *(_QWORD *)(a1 + 88) = 24; /*0x1004fd79c*/
  *(_BYTE *)(a1 + 96) = 0; /*0x1004fd7a4*/
  return result; /*0x1004fd60b*/
}