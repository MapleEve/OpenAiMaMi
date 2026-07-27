// __ZN13codexmate_lib4core5relay16codex_diagnostic24check_config_third_party @ 0x1004f10d0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::check_config_third_party::h0fff69e9ac3abe91(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  unsigned __int8 v6; // r15
  __int64 v7; // rdi
  __int64 v8; // r14
  void *v9; // rax
  void *v10; // r14
  _WORD *v11; // rax
  _WORD *v12; // r15
  _QWORD *v13; // rax
  __int64 result; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  void *v17; // rax
  void *v18; // r14
  _DWORD *v19; // rax
  _DWORD *v20; // r15
  _QWORD *v21; // rax
  _QWORD *v22; // r12
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // r12
  _QWORD *v28; // rax
  _QWORD *v29; // r13
  __int64 v30; // r12
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // r12
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rdx
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rax
  _QWORD *v40; // r15
  __int64 v41; // rax
  _QWORD *v42; // rax
  void *v43; // rax
  void *v44; // r13
  __int64 v45; // rax
  __int64 v46; // r12
  __int64 v47; // rax
  __int64 v48; // rbx
  _QWORD *v49; // r15
  __int64 v50; // rsi
  __int64 v51; // rbx
  _QWORD *v52; // r15
  __int64 v53; // rsi
  _QWORD v54[3]; // [rsp+8h] [rbp-108h] BYREF
  __int64 v55; // [rsp+20h] [rbp-F0h] BYREF
  __int64 v56; // [rsp+28h] [rbp-E8h]
  __int64 v57; // [rsp+30h] [rbp-E0h]
  __int64 v58; // [rsp+38h] [rbp-D8h] BYREF
  __int64 v59; // [rsp+40h] [rbp-D0h]
  __int64 v60; // [rsp+48h] [rbp-C8h]
  __int64 v61; // [rsp+50h] [rbp-C0h] BYREF
  __int64 v62; // [rsp+58h] [rbp-B8h]
  __int64 v63; // [rsp+60h] [rbp-B0h]
  _QWORD v64[3]; // [rsp+68h] [rbp-A8h] BYREF
  __int64 v65; // [rsp+80h] [rbp-90h] BYREF
  _QWORD **v66; // [rsp+88h] [rbp-88h]
  __int64 *v67; // [rsp+90h] [rbp-80h] BYREF
  __int64 (__fastcall *v68)(); // [rsp+98h] [rbp-78h]
  __int64 **v69; // [rsp+A0h] [rbp-70h]
  __int64 (__fastcall *v70)(); // [rsp+A8h] [rbp-68h]
  __int64 *v71; // [rsp+B0h] [rbp-60h] BYREF
  __int64 (__fastcall *v72)(); // [rsp+B8h] [rbp-58h]
  __int64 **v73; // [rsp+C0h] [rbp-50h]
  _QWORD **v74; // [rsp+C8h] [rbp-48h]
  __int64 v75; // [rsp+D0h] [rbp-40h] BYREF
  __int64 v76; // [rsp+D8h] [rbp-38h]
  __int64 v77; // [rsp+E0h] [rbp-30h]

  if ( !a2 ) /*0x1004f10ea*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, 0); /*0x1004f1268*/
    v17 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1); /*0x1004f1277*/
    if ( !v17 ) /*0x1004f127f*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 18); /*0x1004f196e*/
    v18 = v17; /*0x1004f1285*/
    qmemcpy(v17, "config_third_party", 18); /*0x1004f12a0*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(18, 1); /*0x1004f12aa*/
    v19 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1004f12b9*/
    if ( !v19 ) /*0x1004f12c1*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1004f197d*/
    v20 = v19; /*0x1004f12c7*/
    *(_DWORD *)((char *)v19 + 3) = 1735289198; /*0x1004f12ca*/
    *v19 = 1852989815; /*0x1004f12d1*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1); /*0x1004f12d7*/
    v21 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1); /*0x1004f12e6*/
    if ( !v21 ) /*0x1004f12ee*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24); /*0x1004f1991*/
    v22 = v21; /*0x1004f12f4*/
    v21[2] = 0x6C6D6F742E676966LL; /*0x1004f1301*/
    v21[1] = 0x6E6F6320968FE5BBLL; /*0x1004f1310*/
    *v21 = 0xAFE895B3E6A097E6LL; /*0x1004f131f*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 1); /*0x1004f1323*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(33, 1); /*0x1004f1332*/
    if ( !result ) /*0x1004f133a*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 33); /*0x1004f19a2*/
    *(_QWORD *)(result + 24) = 0x99E9839DE6968FE5LL; /*0x1004f134a*/
    *(_QWORD *)(result + 16) = 0xBBAFE8A097E69688LL; /*0x1004f1358*/
    *(_QWORD *)(result + 8) = 0xE6A89CE598ADE58DLL; /*0x1004f1366*/
    *(_QWORD *)result = 0xB8E4B6BBE48796E6LL; /*0x1004f1374*/
    *(_BYTE *)(result + 32) = -112; /*0x1004f1377*/
    *(_QWORD *)a1 = 18; /*0x1004f137b*/
    *(_QWORD *)(a1 + 8) = v18; /*0x1004f1382*/
    *(_QWORD *)(a1 + 16) = 18; /*0x1004f1386*/
    *(_QWORD *)(a1 + 24) = 7; /*0x1004f138e*/
    *(_QWORD *)(a1 + 32) = v20; /*0x1004f1396*/
    *(_QWORD *)(a1 + 40) = 7; /*0x1004f139a*/
    *(_QWORD *)(a1 + 48) = 24; /*0x1004f13a2*/
    *(_QWORD *)(a1 + 56) = v22; /*0x1004f13aa*/
    *(_QWORD *)(a1 + 64) = 24; /*0x1004f13ae*/
    *(_QWORD *)(a1 + 72) = 33; /*0x1004f13b6*/
    *(_QWORD *)(a1 + 80) = result; /*0x1004f13be*/
    *(_QWORD *)(a1 + 88) = 33; /*0x1004f13c2*/
    *(_BYTE *)(a1 + 96) = 0; /*0x1004f13ca*/
    return result; /*0x1004f13ce*/
  }
  codexmate_lib::core::relay::codex_diagnostic::find_foreign_providers::he2f1fa39fdef0c1d(&v61, a2, a3, a4); /*0x1004f10fd*/
  v6 = codexmate_lib::core::relay::codex_diagnostic::is_cc_switch_fingerprint::h0a9e1d8b185a113c(a2, a3); /*0x1004f110d*/
  v7 = (__int64)v64; /*0x1004f1110*/
  codexmate_lib::core::relay::codex_diagnostic::find_third_party_base_url::h66db96e52908178a(v64, a2, a3); /*0x1004f111d*/
  v8 = v63; /*0x1004f112c*/
  if ( !(v6 | (v63 != 0)) && v64[0] == 0x8000000000000000LL ) /*0x1004f1149*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v64, a2); /*0x1004f114f*/
    v9 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1); /*0x1004f115e*/
    if ( !v9 ) /*0x1004f1166*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 18); /*0x1004f19c2*/
    v10 = v9; /*0x1004f116c*/
    qmemcpy(v9, "config_third_party", 18); /*0x1004f1187*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(18, 1); /*0x1004f1191*/
    v11 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x1004f11a0*/
    if ( !v11 ) /*0x1004f11a8*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x1004f19d3*/
    v12 = v11; /*0x1004f11ae*/
    *v11 = 27503; /*0x1004f11b1*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x1004f11b6*/
    v13 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1); /*0x1004f11c5*/
    if ( !v13 ) /*0x1004f11cd*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24); /*0x1004f19e4*/
    v13[2] = 0x9995E78BAEE6A585LL; /*0x1004f11dd*/
    v13[1] = 0xE5A8B3E6B996E689LL; /*0x1004f11eb*/
    *v13 = 0xB8E4ACACE7A097E6LL; /*0x1004f11f9*/
    *(_QWORD *)a1 = 18; /*0x1004f11fc*/
    *(_QWORD *)(a1 + 8) = v10; /*0x1004f1203*/
    *(_QWORD *)(a1 + 16) = 18; /*0x1004f1207*/
    *(_QWORD *)(a1 + 24) = 2; /*0x1004f120f*/
    *(_QWORD *)(a1 + 32) = v12; /*0x1004f1217*/
    *(_QWORD *)(a1 + 40) = 2; /*0x1004f121b*/
    *(_QWORD *)(a1 + 48) = 24; /*0x1004f1223*/
    *(_QWORD *)(a1 + 56) = v13; /*0x1004f122b*/
    *(_QWORD *)(a1 + 64) = 24; /*0x1004f122f*/
    *(_QWORD *)(a1 + 72) = 0x8000000000000000LL; /*0x1004f1237*/
    *(_BYTE *)(a1 + 96) = 0; /*0x1004f123b*/
    result = v61; /*0x1004f123f*/
    if ( v61 ) /*0x1004f1249*/
    {
      v15 = v62; /*0x1004f124f*/
      v16 = 24 * v61; /*0x1004f125a*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v16, 8); /*0x1004f194d*/
    }
    return result; /*0x1004f1249*/
  }
  v75 = 0; /*0x1004f13d3*/
  v76 = 8; /*0x1004f13db*/
  v77 = 0; /*0x1004f13e3*/
  if ( v63 ) /*0x1004f13ee*/
  {
    v65 = v63; /*0x1004f13f4*/
    alloc::str::join_generic_copy::heca7a5e86402c6b6(&v67, v62, v63, ", ", 2); /*0x1004f1416*/
    v73 = v69; /*0x1004f141f*/
    v72 = v68; /*0x1004f142b*/
    v71 = v67; /*0x1004f142f*/
    v67 = &v65; /*0x1004f143a*/
    v68 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1004f1445*/
    v69 = &v71; /*0x1004f144d*/
    v70 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004f1458*/
    v7 = (__int64)&v58; /*0x1004f1463*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v58, &unk_1017BFEDB, &v67); /*0x1004f146e*/
    if ( v71 ) /*0x1004f147a*/
    {
      v7 = (__int64)v72; /*0x1004f147c*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, v71, 1); /*0x1004f1485*/
    }
    v23 = v77; /*0x1004f148a*/
    if ( v77 == v75 ) /*0x1004f1492*/
    {
      v7 = (__int64)&v75; /*0x1004f1494*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v75); /*0x1004f1498*/
    }
    v24 = v76; /*0x1004f149d*/
    v25 = 3 * v23; /*0x1004f14a1*/
    *(_QWORD *)(v76 + 8 * v25 + 16) = v60; /*0x1004f14ac*/
    v26 = v58; /*0x1004f14b1*/
    a2 = v59; /*0x1004f14b8*/
    *(_QWORD *)(v24 + 8 * v25 + 8) = v59; /*0x1004f14bf*/
    *(_QWORD *)(v24 + 8 * v25) = v26; /*0x1004f14c4*/
    v77 = v23 + 1; /*0x1004f14cb*/
  }
  if ( v6 ) /*0x1004f14d2*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, a2); /*0x1004f14d8*/
    v27 = 16; /*0x1004f14dd*/
    v7 = 16; /*0x1004f14e3*/
    a2 = 1; /*0x1004f14e8*/
    v28 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1); /*0x1004f14ed*/
    if ( !v28 ) /*0x1004f14f5*/
      goto LABEL_63; /*0x1004f14f5*/
    v29 = v28; /*0x1004f14fb*/
    v28[1] = 0xB9BAE7878CE62068LL; /*0x1004f1508*/
    *v28 = 0x63746977732D6363LL; /*0x1004f1516*/
    v30 = v77; /*0x1004f151a*/
    if ( v77 == v75 ) /*0x1004f1522*/
    {
      v7 = (__int64)&v75; /*0x1004f1524*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v75); /*0x1004f1528*/
    }
    v31 = v76; /*0x1004f152d*/
    v32 = 3 * v30; /*0x1004f1531*/
    *(_QWORD *)(v76 + 8 * v32) = 16; /*0x1004f1535*/
    *(_QWORD *)(v31 + 8 * v32 + 8) = v29; /*0x1004f153d*/
    *(_QWORD *)(v31 + 8 * v32 + 16) = 16; /*0x1004f1542*/
    v77 = v30 + 1; /*0x1004f154e*/
  }
  if ( v64[0] != 0x8000000000000000LL ) /*0x1004f1563*/
  {
    v71 = v64; /*0x1004f1570*/
    v67 = (__int64 *)&v71; /*0x1004f1578*/
    v68 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b; /*0x1004f1583*/
    v7 = (__int64)&v55; /*0x1004f158e*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v55, &unk_1017BFEF2, &v67); /*0x1004f1599*/
    v33 = v77; /*0x1004f159e*/
    if ( v77 == v75 ) /*0x1004f15a6*/
    {
      v7 = (__int64)&v75; /*0x1004f15a8*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v75); /*0x1004f15ac*/
    }
    v34 = v76; /*0x1004f15b1*/
    v35 = 3 * v33; /*0x1004f15b5*/
    *(_QWORD *)(v76 + 8 * v35 + 16) = v57; /*0x1004f15c0*/
    v36 = v55; /*0x1004f15c5*/
    a2 = v56; /*0x1004f15cc*/
    *(_QWORD *)(v34 + 8 * v35 + 8) = v56; /*0x1004f15d3*/
    *(_QWORD *)(v34 + 8 * v35) = v36; /*0x1004f15d8*/
    v77 = v33 + 1; /*0x1004f15df*/
    if ( v64[0] != 0x8000000000000000LL ) /*0x1004f15ea*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, a2); /*0x1004f16ae*/
      v27 = 39; /*0x1004f16b3*/
      v37 = 39; /*0x1004f16b9*/
      v38 = 1; /*0x1004f16be*/
      v42 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(39, 1); /*0x1004f16c3*/
      if ( v42 ) /*0x1004f16cb*/
      {
        v40 = v42; /*0x1004f16d1*/
        *(_QWORD *)((char *)v42 + 31) = 0x9995E78BAEE69190LL; /*0x1004f16de*/
        v42[3] = 0x90E59AAEE58D87E9LL; /*0x1004f16ec*/
        v42[2] = 0x8D90E59F9FE5B996LL; /*0x1004f16fa*/
        v42[1] = 0xE689B8E4ACACE7B0LL; /*0x1004f1708*/
        *v42 = 0x88E58BB5E680A3E6LL; /*0x1004f1716*/
        v41 = 39; /*0x1004f1719*/
        goto LABEL_35; /*0x1004f1719*/
      }
LABEL_63:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v27); /*0x1004f19a9*/
    }
  }
  if ( !v6 ) /*0x1004f15f3*/
  {
    v65 = v8; /*0x1004f1664*/
    v71 = &v65; /*0x1004f1672*/
    v72 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1004f167d*/
    v38 = (__int64)&unk_1017BFF2E; /*0x1004f1681*/
    v37 = (__int64)&v67; /*0x1004f1688*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v67, &unk_1017BFF2E, &v71); /*0x1004f1690*/
    v74 = (_QWORD **)v67; /*0x1004f1699*/
    v40 = v68; /*0x1004f169d*/
    v66 = v69; /*0x1004f16a5*/
    goto LABEL_36; /*0x1004f16ac*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, a2); /*0x1004f15f5*/
  v27 = 36; /*0x1004f15fa*/
  v37 = 36; /*0x1004f1600*/
  v38 = 1; /*0x1004f1605*/
  v39 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(36, 1); /*0x1004f160a*/
  if ( !v39 ) /*0x1004f1612*/
    goto LABEL_63; /*0x1004f1612*/
  v40 = (_QWORD *)v39; /*0x1004f1618*/
  *(_QWORD *)(v39 + 24) = 0x85E99995E78BAEE6LL; /*0x1004f1625*/
  *(_QWORD *)(v39 + 16) = 0xB785E5A5B7E5B996LL; /*0x1004f1633*/
  *(_QWORD *)(v39 + 8) = 0xE689B8E4ACACE7B0LL; /*0x1004f1641*/
  *(_QWORD *)v39 = 0x88E58BB5E680A3E6LL; /*0x1004f164f*/
  *(_DWORD *)(v39 + 32) = -1363286131; /*0x1004f1652*/
  v41 = 36; /*0x1004f165a*/
LABEL_35:
  v66 = (_QWORD **)v41; /*0x1004f171e*/
  v74 = (_QWORD **)v41; /*0x1004f1725*/
LABEL_36:
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v37, v38); /*0x1004f1729*/
  v43 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1); /*0x1004f1738*/
  if ( !v43 ) /*0x1004f1740*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 18); /*0x1004f19f5*/
  v44 = v43; /*0x1004f1746*/
  qmemcpy(v43, "config_third_party", 18); /*0x1004f1761*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(18, 1); /*0x1004f176c*/
  v45 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x1004f177b*/
  if ( !v45 ) /*0x1004f1783*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x1004f1a06*/
  v46 = v45; /*0x1004f1789*/
  *(_BYTE *)(v45 + 4) = 114; /*0x1004f178c*/
  *(_DWORD *)v45 = 1869771365; /*0x1004f1790*/
  alloc::str::join_generic_copy::heca7a5e86402c6b6(&v67, v76, v77, &unk_1015FD2A7, 3); /*0x1004f17af*/
  v73 = v69; /*0x1004f17b8*/
  v72 = v68; /*0x1004f17c4*/
  v71 = v67; /*0x1004f17c8*/
  v67 = (__int64 *)&v71; /*0x1004f17d0*/
  v68 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004f17db*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v54, &unk_1017BFF52, &v67); /*0x1004f17f1*/
  if ( v71 ) /*0x1004f17fd*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, v71, 1); /*0x1004f1808*/
  *(_QWORD *)(a1 + 88) = v54[2]; /*0x1004f1814*/
  v47 = v54[0]; /*0x1004f1818*/
  *(_QWORD *)(a1 + 80) = v54[1]; /*0x1004f1826*/
  *(_QWORD *)(a1 + 72) = v47; /*0x1004f182a*/
  *(_QWORD *)a1 = 18; /*0x1004f182e*/
  *(_QWORD *)(a1 + 8) = v44; /*0x1004f1835*/
  *(_QWORD *)(a1 + 16) = 18; /*0x1004f1839*/
  *(_QWORD *)(a1 + 24) = 5; /*0x1004f1841*/
  *(_QWORD *)(a1 + 32) = v46; /*0x1004f1849*/
  *(_QWORD *)(a1 + 40) = 5; /*0x1004f184d*/
  *(_QWORD *)(a1 + 48) = v74; /*0x1004f1859*/
  *(_QWORD *)(a1 + 56) = v40; /*0x1004f185d*/
  *(_QWORD *)(a1 + 64) = v66; /*0x1004f1868*/
  *(_BYTE *)(a1 + 96) = 1; /*0x1004f186c*/
  v48 = v77; /*0x1004f1870*/
  if ( v77 ) /*0x1004f1881*/
  {
    v49 = (_QWORD *)(v76 + 8); /*0x1004f1887*/
    do /*0x1004f1897*/
    {
      v50 = *(v49 - 1); /*0x1004f1899*/
      if ( v50 ) /*0x1004f18a0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v49, v50, 1); /*0x1004f18aa*/
      v49 += 3; /*0x1004f1890*/
      --v48; /*0x1004f1894*/
    }
    while ( v48 ); /*0x1004f1897*/
  }
  if ( v75 ) /*0x1004f18b8*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, 24 * v75, 8); /*0x1004f18cb*/
  if ( v64[0] != 0x8000000000000000LL && v64[0] ) /*0x1004f18df*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v64[1], v64[0], 1); /*0x1004f18ed*/
  v51 = v62; /*0x1004f18f2*/
  if ( v8 ) /*0x1004f18fc*/
  {
    v52 = (_QWORD *)(v62 + 8); /*0x1004f18fe*/
    do /*0x1004f1917*/
    {
      v53 = *(v52 - 1); /*0x1004f1919*/
      if ( v53 ) /*0x1004f1920*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v52, v53, 1); /*0x1004f192a*/
      v52 += 3; /*0x1004f1910*/
      --v8; /*0x1004f1914*/
    }
    while ( v8 ); /*0x1004f1917*/
  }
  result = v61; /*0x1004f1931*/
  if ( v61 ) /*0x1004f193b*/
  {
    v16 = 24 * v61; /*0x1004f1941*/
    v15 = v51; /*0x1004f194a*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v16, 8); /*0x1004f194a*/
  }
  return result; /*0x1004f1952*/
}