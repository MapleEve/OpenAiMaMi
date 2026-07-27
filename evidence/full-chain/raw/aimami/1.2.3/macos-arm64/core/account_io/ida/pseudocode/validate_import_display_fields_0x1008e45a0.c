// __ZN13codexmate_lib4core10account_io30validate_import_display_fields @ 0x1008e45a0
// 1.2.3 NEW-delta | codexmate_lib::core::account_io::validate_import_display_fields | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
_QWORD *__fastcall codexmate_lib::core::account_io::validate_import_display_fields::ha74f21d7ef2f2eaf(
        void *a1,
        _QWORD *a2)
{
  unsigned __int64 v2; // rax
  _QWORD *result; // rax
  unsigned __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // rax
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rcx
  int v11; // edx
  unsigned __int64 v12; // rcx
  __int64 v13; // rax
  bool v14; // r12
  __int64 v15; // rbx
  __int64 v16; // r15
  __int128 *v17; // rsi
  __int64 v18; // rdi
  unsigned __int64 v19; // rcx
  int v20; // edx
  unsigned __int64 v21; // rcx
  __int64 v22; // rax
  bool v23; // si
  __int64 v24; // rbx
  int v25; // edx
  int v26; // edx
  char *v27; // rdx
  __int128 *v28; // r15
  __int64 v29; // r12
  __int64 v30; // rax
  bool v31; // r12
  __int64 v32; // rbx
  __int64 v33; // r15
  __int64 v34; // rdi
  void *v35; // rsi
  __int64 (__fastcall *v36)(); // r15
  __int128 **v37; // r12
  __int64 v38; // [rsp+8h] [rbp-138h] BYREF
  __int64 v39; // [rsp+10h] [rbp-130h]
  __int64 v40; // [rsp+18h] [rbp-128h]
  _QWORD v41[12]; // [rsp+20h] [rbp-120h] BYREF
  __int64 v42; // [rsp+80h] [rbp-C0h]
  int v43; // [rsp+8Ch] [rbp-B4h]
  int v44; // [rsp+90h] [rbp-B0h]
  int v45; // [rsp+94h] [rbp-ACh]
  __int64 v46; // [rsp+98h] [rbp-A8h]
  __int64 v47; // [rsp+A0h] [rbp-A0h]
  __int64 v48; // [rsp+A8h] [rbp-98h] BYREF
  __int64 v49; // [rsp+B0h] [rbp-90h]
  __int64 v50; // [rsp+B8h] [rbp-88h]
  _QWORD *v51; // [rsp+C0h] [rbp-80h]
  __int64 v52; // [rsp+C8h] [rbp-78h] BYREF
  __int64 v53; // [rsp+D0h] [rbp-70h] BYREF
  __int64 v54; // [rsp+D8h] [rbp-68h]
  __int128 **v55; // [rsp+E0h] [rbp-60h] BYREF
  __int64 (__fastcall *v56)(); // [rsp+E8h] [rbp-58h]
  __int64 *v57; // [rsp+F0h] [rbp-50h]
  __int64 (__fastcall *v58)(); // [rsp+F8h] [rbp-48h]
  __int128 *v59; // [rsp+100h] [rbp-40h] BYREF
  __int64 v60; // [rsp+108h] [rbp-38h]
  __int64 v61; // [rsp+110h] [rbp-30h]

  v2 = a2[5]; /*0x1008e45b7*/
  v59 = (__int128 *)&unk_1016766E7; /*0x1008e45c2*/
  v60 = 10; /*0x1008e45c6*/
  v48 = 1024; /*0x1008e45ce*/
  if ( v2 >= 0x401 || !__OFSUB__(0, a2[9]) && (v4 = a2[11], v59 = &xmmword_101676360, v60 = 16, v48 = 1024, v4 > 0x400) ) /*0x1008e4673*/
  {
    v55 = &v59; /*0x1008e45e5*/
    v56 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008e45f0*/
    v57 = &v48; /*0x1008e45fb*/
    v58 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008e4606*/
    result = (_QWORD *)alloc::fmt::format::format_inner::h3c16c74008a310d4(&v41[1], &unk_1017C6DD9, &v55); /*0x1008e461c*/
    v41[0] = 9; /*0x1008e4621*/
    qmemcpy(a1, v41, 0x60u); /*0x1008e463b*/
    return result; /*0x1008e463b*/
  }
  v51 = a1; /*0x1008e4679*/
  v5 = a2[8]; /*0x1008e467d*/
  if ( !v5 ) /*0x1008e4684*/
  {
LABEL_88:
    result = v51; /*0x1008e51f0*/
    *v51 = 11; /*0x1008e51f4*/
    return result; /*0x1008e51fb*/
  }
  v6 = a2[7]; /*0x1008e468a*/
  v40 = 416 * v5; /*0x1008e4695*/
  v7 = 0; /*0x1008e469c*/
  v8 = 0; /*0x1008e469f*/
  v42 = v6; /*0x1008e46a1*/
  while ( 1 ) /*0x1008e46a8*/
  {
    v39 = v8; /*0x1008e46a8*/
    v38 = v8; /*0x1008e46af*/
    v55 = (__int128 **)&v38; /*0x1008e46bd*/
    v56 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008e46c8*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v41, &unk_1017C6F3B, &v55); /*0x1008e46e1*/
    v48 = v41[0]; /*0x1008e46f4*/
    v49 = v41[1]; /*0x1008e46fb*/
    v50 = v41[2]; /*0x1008e4709*/
    v59 = (__int128 *)&v48; /*0x1008e4717*/
    v60 = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008e4722*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v55, &unk_1017C6F49, &v59); /*0x1008e4734*/
    v9 = *(_QWORD *)(v6 + v7 + 48); /*0x1008e4745*/
    v59 = (__int128 *)v56; /*0x1008e474a*/
    v60 = (__int64)v57; /*0x1008e474e*/
    v53 = 256; /*0x1008e4752*/
    if ( v9 >= 0x101 ) /*0x1008e4761*/
      goto LABEL_93; /*0x1008e4761*/
    if ( v55 ) /*0x1008e476a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, v55, 1); /*0x1008e4771*/
    v59 = (__int128 *)&v48; /*0x1008e477d*/
    v60 = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008e4788*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v55, &unk_1017C6F57, &v59); /*0x1008e479b*/
    v10 = *(_QWORD *)(v6 + v7 + 72); /*0x1008e47ac*/
    v59 = (__int128 *)v56; /*0x1008e47b1*/
    v60 = (__int64)v57; /*0x1008e47b5*/
    v53 = 1024; /*0x1008e47b9*/
    if ( v10 >= 0x401 ) /*0x1008e47c8*/
      goto LABEL_93; /*0x1008e47c8*/
    if ( v55 ) /*0x1008e47d1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, v55, 1); /*0x1008e47d8*/
    v59 = (__int128 *)&v48; /*0x1008e47e4*/
    v60 = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008e47ef*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v55, &unk_1017C6F60, &v59); /*0x1008e4802*/
    v12 = *(_QWORD *)(v6 + v7 + 96); /*0x1008e4813*/
    v59 = (__int128 *)v56; /*0x1008e4818*/
    v60 = (__int64)v57; /*0x1008e481c*/
    v53 = 4096; /*0x1008e4820*/
    if ( v12 >= 0x1001 ) /*0x1008e482f*/
    {
LABEL_93:
      v36 = v56; /*0x1008e5449*/
      v37 = v55; /*0x1008e544c*/
      v55 = &v59; /*0x1008e5453*/
      v56 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008e545e*/
      v57 = &v53; /*0x1008e5466*/
      v58 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008e5471*/
      result = (_QWORD *)alloc::fmt::format::format_inner::h3c16c74008a310d4(&v41[1], &unk_1017C6DD9, &v55); /*0x1008e5487*/
      v41[0] = 9; /*0x1008e548c*/
      qmemcpy(v51, v41, 0x60u); /*0x1008e54a7*/
      if ( !v37 ) /*0x1008e54ad*/
        goto LABEL_96; /*0x1008e54ad*/
      goto LABEL_94; /*0x1008e54ad*/
    }
    if ( v55 ) /*0x1008e4838*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, v55, 1); /*0x1008e483f*/
    v13 = *(_QWORD *)(v6 + v7 + 152); /*0x1008e4844*/
    if ( v13 == 0x8000000000000000LL ) /*0x1008e4859*/
    {
      v14 = 0; /*0x1008e485b*/
      v15 = *(_QWORD *)(v6 + v7 + 176); /*0x1008e485e*/
      if ( v15 != 0x8000000000000000LL ) /*0x1008e4869*/
        goto LABEL_18; /*0x1008e4869*/
    }
    else
    {
      v14 = *(_QWORD *)(v6 + v7 + 168) >= 0x1001u; /*0x1008e48bc*/
      v15 = *(_QWORD *)(v6 + v7 + 176); /*0x1008e48c0*/
      if ( v15 != 0x8000000000000000LL ) /*0x1008e48cb*/
      {
LABEL_18:
        LOBYTE(v11) = *(_QWORD *)(v6 + v7 + 192) >= 0x1001u; /*0x1008e486b*/
        LODWORD(v46) = v11; /*0x1008e487a*/
        v16 = *(_QWORD *)(v6 + v7 + 200); /*0x1008e4880*/
        if ( v16 != 0x8000000000000000LL ) /*0x1008e488b*/
          goto LABEL_19; /*0x1008e488b*/
        goto LABEL_22; /*0x1008e488b*/
      }
    }
    LODWORD(v46) = 0; /*0x1008e48cd*/
    v16 = *(_QWORD *)(v6 + v7 + 200); /*0x1008e48d7*/
    if ( v16 != 0x8000000000000000LL ) /*0x1008e48e2*/
    {
LABEL_19:
      LOBYTE(v11) = *(_QWORD *)(v6 + v7 + 216) >= 0x1001u; /*0x1008e488d*/
      LODWORD(v47) = v11; /*0x1008e489c*/
      goto LABEL_23; /*0x1008e48a2*/
    }
LABEL_22:
    LODWORD(v47) = 0; /*0x1008e48e4*/
LABEL_23:
    v53 = (__int64)&unk_10167671B; /*0x1008e48ee*/
    v54 = 11; /*0x1008e48f9*/
    if ( v13 != 0x8000000000000000LL ) /*0x1008e4904*/
    {
      v55 = (__int128 **)&v48; /*0x1008e490d*/
      v56 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008e4918*/
      v57 = &v53; /*0x1008e4920*/
      v58 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008e492b*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v59, &unk_1017C0A32, &v55); /*0x1008e493e*/
      v17 = v59; /*0x1008e4943*/
      v18 = v60; /*0x1008e4947*/
      v59 = (__int128 *)v60; /*0x1008e494f*/
      v60 = v61; /*0x1008e4953*/
      v52 = 4096; /*0x1008e4957*/
      if ( v14 ) /*0x1008e4962*/
        goto LABEL_91; /*0x1008e4962*/
      if ( v17 ) /*0x1008e496b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v17, 1); /*0x1008e4972*/
    }
    v53 = (__int64)&unk_101676726; /*0x1008e497e*/
    v54 = 13; /*0x1008e4982*/
    if ( v15 != 0x8000000000000000LL ) /*0x1008e4997*/
    {
      v55 = (__int128 **)&v48; /*0x1008e49a0*/
      v56 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008e49ab*/
      v57 = &v53; /*0x1008e49b3*/
      v58 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008e49be*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v59, &unk_1017C0A32, &v55); /*0x1008e49d1*/
      v17 = v59; /*0x1008e49d6*/
      v18 = v60; /*0x1008e49da*/
      v59 = (__int128 *)v60; /*0x1008e49e2*/
      v60 = v61; /*0x1008e49e6*/
      v52 = 4096; /*0x1008e49ea*/
      if ( (_BYTE)v46 ) /*0x1008e49f9*/
        goto LABEL_91; /*0x1008e49f9*/
      if ( v17 ) /*0x1008e4a02*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v17, 1); /*0x1008e4a09*/
    }
    v53 = (__int64)&unk_101676733; /*0x1008e4a15*/
    v54 = 11; /*0x1008e4a19*/
    if ( v16 != 0x8000000000000000LL ) /*0x1008e4a2e*/
    {
      v55 = (__int128 **)&v48; /*0x1008e4a37*/
      v56 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008e4a42*/
      v57 = &v53; /*0x1008e4a4a*/
      v58 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008e4a55*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v59, &unk_1017C0A32, &v55); /*0x1008e4a68*/
      v17 = v59; /*0x1008e4a6d*/
      v18 = v60; /*0x1008e4a71*/
      v59 = (__int128 *)v60; /*0x1008e4a79*/
      v60 = v61; /*0x1008e4a7d*/
      v52 = 4096; /*0x1008e4a81*/
      if ( (_BYTE)v47 ) /*0x1008e4a90*/
        goto LABEL_91; /*0x1008e4a90*/
      if ( v17 ) /*0x1008e4a99*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v17, 1); /*0x1008e4aa0*/
    }
    v59 = (__int128 *)&v48; /*0x1008e4aac*/
    v60 = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008e4ab7*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v55, &unk_1017C6F69, &v59); /*0x1008e4aca*/
    v19 = *(_QWORD *)(v6 + v7 + 120); /*0x1008e4adb*/
    v59 = (__int128 *)v56; /*0x1008e4ae0*/
    v60 = (__int64)v57; /*0x1008e4ae4*/
    v53 = 1024; /*0x1008e4ae8*/
    if ( v19 >= 0x401 ) /*0x1008e4af7*/
      goto LABEL_93; /*0x1008e4af7*/
    if ( v55 ) /*0x1008e4b00*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, v55, 1); /*0x1008e4b07*/
    v59 = (__int128 *)&v48; /*0x1008e4b13*/
    v60 = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008e4b1e*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v55, &unk_1017C6F71, &v59); /*0x1008e4b31*/
    v21 = *(_QWORD *)(v6 + v7 + 144); /*0x1008e4b42*/
    v59 = (__int128 *)v56; /*0x1008e4b4a*/
    v60 = (__int64)v57; /*0x1008e4b4e*/
    v53 = 1024; /*0x1008e4b52*/
    if ( v21 >= 0x401 ) /*0x1008e4b61*/
      goto LABEL_93; /*0x1008e4b61*/
    if ( v55 ) /*0x1008e4b6a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, v55, 1); /*0x1008e4b71*/
    v22 = *(_QWORD *)(v6 + v7 + 296); /*0x1008e4b76*/
    if ( v22 == 0x8000000000000000LL ) /*0x1008e4b8b*/
    {
      v23 = 0; /*0x1008e4b91*/
      v24 = *(_QWORD *)(v6 + v7 + 320); /*0x1008e4b93*/
      if ( v24 != 0x8000000000000000LL ) /*0x1008e4b9e*/
        goto LABEL_43; /*0x1008e4b9e*/
    }
    else
    {
      v23 = *(_QWORD *)(v6 + v7 + 312) >= 0x100001u; /*0x1008e4c2c*/
      v24 = *(_QWORD *)(v6 + v7 + 320); /*0x1008e4c30*/
      if ( v24 != 0x8000000000000000LL ) /*0x1008e4c3b*/
      {
LABEL_43:
        LOBYTE(v20) = *(_QWORD *)(v6 + v7 + 336) >= 0x100001u; /*0x1008e4ba4*/
        v43 = v20; /*0x1008e4bb3*/
        v46 = *(_QWORD *)(v6 + v7 + 272); /*0x1008e4bc4*/
        v25 = v46; /*0x1008e4bb9*/
        if ( v46 != 0x8000000000000000LL ) /*0x1008e4bcb*/
          goto LABEL_44; /*0x1008e4bcb*/
        goto LABEL_48; /*0x1008e4bcb*/
      }
    }
    v43 = 0; /*0x1008e4c41*/
    v46 = *(_QWORD *)(v6 + v7 + 272); /*0x1008e4c56*/
    v25 = v46; /*0x1008e4c4b*/
    if ( v46 != 0x8000000000000000LL ) /*0x1008e4c5d*/
    {
LABEL_44:
      LOBYTE(v25) = *(_QWORD *)(v6 + v7 + 288) >= 0x100001u; /*0x1008e4bd1*/
      v44 = v25; /*0x1008e4be0*/
      v47 = *(_QWORD *)(v6 + v7 + 248); /*0x1008e4bf1*/
      v26 = v47; /*0x1008e4be6*/
      if ( v47 != 0x8000000000000000LL ) /*0x1008e4bf8*/
        goto LABEL_45; /*0x1008e4bf8*/
      goto LABEL_49; /*0x1008e4bf8*/
    }
LABEL_48:
    v44 = 0; /*0x1008e4c63*/
    v47 = *(_QWORD *)(v6 + v7 + 248); /*0x1008e4c78*/
    v26 = v47; /*0x1008e4c6d*/
    if ( v47 != 0x8000000000000000LL ) /*0x1008e4c7f*/
    {
LABEL_45:
      LOBYTE(v26) = *(_QWORD *)(v6 + v7 + 264) >= 0x100001u; /*0x1008e4bfe*/
      v45 = v26; /*0x1008e4c0d*/
      goto LABEL_50; /*0x1008e4c13*/
    }
LABEL_49:
    v45 = 0; /*0x1008e4c85*/
LABEL_50:
    v27 = "accessTokenrefreshTokenidTokenapiKeyaccountIdlastRefreshExisting account snapshot is not a switchable ChatGPT OAuth credential"; /*0x1008e4c8f*/
    v53 = (__int64)"accessTokenrefreshTokenidTokenapiKeyaccountIdlastRefreshExisting account snapshot is not a switchable ChatGPT OAuth credential"; /*0x1008e4c96*/
    v54 = 11; /*0x1008e4c9a*/
    if ( v22 != 0x8000000000000000LL ) /*0x1008e4ca5*/
    {
      v55 = (__int128 **)&v48; /*0x1008e4cb5*/
      v56 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008e4cc0*/
      v57 = &v53; /*0x1008e4cc8*/
      v58 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008e4cd3*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v59, &unk_1017C6F7D, &v55); /*0x1008e4ce6*/
      v28 = v59; /*0x1008e4ceb*/
      v29 = v60; /*0x1008e4cef*/
      v59 = (__int128 *)v60; /*0x1008e4cf7*/
      v60 = v61; /*0x1008e4cfb*/
      v52 = 0x100000; /*0x1008e4cff*/
      if ( v23 ) /*0x1008e4d0a*/
        goto LABEL_89; /*0x1008e4d0a*/
      v6 = v42; /*0x1008e4d1d*/
      if ( v28 ) /*0x1008e4d24*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v28, 1); /*0x1008e4d31*/
    }
    v53 = (__int64)"refreshTokenidTokenapiKeyaccountIdlastRefreshExisting account snapshot is not a switchable ChatGPT OAuth credential"; /*0x1008e4d47*/
    v54 = 12; /*0x1008e4d4b*/
    if ( v24 != 0x8000000000000000LL ) /*0x1008e4d56*/
    {
      v55 = (__int128 **)&v48; /*0x1008e4d63*/
      v56 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008e4d6e*/
      v57 = &v53; /*0x1008e4d76*/
      v58 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008e4d81*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v59, &unk_1017C6F7D, &v55); /*0x1008e4d94*/
      v28 = v59; /*0x1008e4d99*/
      v29 = v60; /*0x1008e4d9d*/
      v59 = (__int128 *)v60; /*0x1008e4da5*/
      v60 = v61; /*0x1008e4da9*/
      v52 = 0x100000; /*0x1008e4dad*/
      if ( (_BYTE)v43 ) /*0x1008e4dbc*/
        goto LABEL_89; /*0x1008e4dbc*/
      v6 = v42; /*0x1008e4dcf*/
      if ( v28 ) /*0x1008e4dd6*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v28, 1); /*0x1008e4de3*/
    }
    v53 = (__int64)"idTokenapiKeyaccountIdlastRefreshExisting account snapshot is not a switchable ChatGPT OAuth credential"; /*0x1008e4df9*/
    v54 = 7; /*0x1008e4dfd*/
    if ( v46 != 0x8000000000000000LL ) /*0x1008e4e0c*/
    {
      v55 = (__int128 **)&v48; /*0x1008e4e19*/
      v56 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008e4e24*/
      v57 = &v53; /*0x1008e4e2c*/
      v58 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008e4e37*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v59, &unk_1017C6F7D, &v55); /*0x1008e4e4a*/
      v28 = v59; /*0x1008e4e4f*/
      v29 = v60; /*0x1008e4e53*/
      v59 = (__int128 *)v60; /*0x1008e4e5b*/
      v60 = v61; /*0x1008e4e5f*/
      v52 = 0x100000; /*0x1008e4e63*/
      if ( (_BYTE)v44 ) /*0x1008e4e72*/
        goto LABEL_89; /*0x1008e4e72*/
      v6 = v42; /*0x1008e4e85*/
      if ( v28 ) /*0x1008e4e8c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v28, 1); /*0x1008e4e99*/
    }
    v53 = (__int64)"apiKeyaccountIdlastRefreshExisting account snapshot is not a switchable ChatGPT OAuth credential"; /*0x1008e4eaf*/
    v54 = 6; /*0x1008e4eb3*/
    if ( v47 != 0x8000000000000000LL ) /*0x1008e4ec2*/
      break; /*0x1008e4ec2*/
LABEL_66:
    v30 = *(_QWORD *)(v6 + v7 + 344); /*0x1008e4f5e*/
    if ( v30 == 0x8000000000000000LL ) /*0x1008e4f69*/
    {
      v31 = 0; /*0x1008e4f6b*/
      v32 = *(_QWORD *)(v6 + v7 + 224); /*0x1008e4f6e*/
      if ( v32 != 0x8000000000000000LL ) /*0x1008e4f79*/
        goto LABEL_68; /*0x1008e4f79*/
    }
    else
    {
      v31 = *(_QWORD *)(v6 + v7 + 360) >= 0x401u; /*0x1008e4fcc*/
      v32 = *(_QWORD *)(v6 + v7 + 224); /*0x1008e4fd0*/
      if ( v32 != 0x8000000000000000LL ) /*0x1008e4fdb*/
      {
LABEL_68:
        LOBYTE(v27) = *(_QWORD *)(v6 + v7 + 240) >= 0x401u; /*0x1008e4f7b*/
        LODWORD(v46) = (_DWORD)v27; /*0x1008e4f8a*/
        v33 = *(_QWORD *)(v6 + v7 + 368); /*0x1008e4f90*/
        if ( v33 != 0x8000000000000000LL ) /*0x1008e4f9b*/
          goto LABEL_69; /*0x1008e4f9b*/
        goto LABEL_72; /*0x1008e4f9b*/
      }
    }
    LODWORD(v46) = 0; /*0x1008e4fdd*/
    v33 = *(_QWORD *)(v6 + v7 + 368); /*0x1008e4fe7*/
    if ( v33 != 0x8000000000000000LL ) /*0x1008e4ff2*/
    {
LABEL_69:
      LOBYTE(v27) = *(_QWORD *)(v6 + v7 + 384) >= 0x401u; /*0x1008e4f9d*/
      LODWORD(v47) = (_DWORD)v27; /*0x1008e4fac*/
      goto LABEL_73; /*0x1008e4fb2*/
    }
LABEL_72:
    LODWORD(v47) = 0; /*0x1008e4ff4*/
LABEL_73:
    v53 = (__int64)"accountIdlastRefreshExisting account snapshot is not a switchable ChatGPT OAuth credential"; /*0x1008e4ffe*/
    v54 = 9; /*0x1008e5009*/
    if ( v30 != 0x8000000000000000LL ) /*0x1008e5014*/
    {
      v55 = (__int128 **)&v48; /*0x1008e501d*/
      v56 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008e5028*/
      v57 = &v53; /*0x1008e5030*/
      v58 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008e503b*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v59, &unk_1017C6F7D, &v55); /*0x1008e504e*/
      v17 = v59; /*0x1008e5053*/
      v18 = v60; /*0x1008e5057*/
      v59 = (__int128 *)v60; /*0x1008e505f*/
      v60 = v61; /*0x1008e5063*/
      v52 = 1024; /*0x1008e5067*/
      if ( v31 ) /*0x1008e5072*/
        goto LABEL_91; /*0x1008e5072*/
      if ( v17 ) /*0x1008e507b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v17, 1); /*0x1008e5082*/
    }
    v53 = (__int64)&unk_1016021E0; /*0x1008e508e*/
    v54 = 8; /*0x1008e5092*/
    if ( v32 != 0x8000000000000000LL ) /*0x1008e50a7*/
    {
      v55 = (__int128 **)&v48; /*0x1008e50b0*/
      v56 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008e50bb*/
      v57 = &v53; /*0x1008e50c3*/
      v58 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008e50ce*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v59, &unk_1017C6F7D, &v55); /*0x1008e50e1*/
      v17 = v59; /*0x1008e50e6*/
      v18 = v60; /*0x1008e50ea*/
      v59 = (__int128 *)v60; /*0x1008e50f2*/
      v60 = v61; /*0x1008e50f6*/
      v52 = 1024; /*0x1008e50fa*/
      if ( (_BYTE)v46 ) /*0x1008e5109*/
        goto LABEL_91; /*0x1008e5109*/
      if ( v17 ) /*0x1008e5112*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v17, 1); /*0x1008e5119*/
    }
    v53 = (__int64)"lastRefreshExisting account snapshot is not a switchable ChatGPT OAuth credential"; /*0x1008e5125*/
    v54 = 11; /*0x1008e5129*/
    if ( v33 != 0x8000000000000000LL ) /*0x1008e513e*/
    {
      v55 = (__int128 **)&v48; /*0x1008e5147*/
      v56 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008e5152*/
      v57 = &v53; /*0x1008e515a*/
      v58 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008e5165*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v59, &unk_1017C6F7D, &v55); /*0x1008e5178*/
      v17 = v59; /*0x1008e517d*/
      v18 = v60; /*0x1008e5181*/
      v59 = (__int128 *)v60; /*0x1008e5189*/
      v60 = v61; /*0x1008e518d*/
      v52 = 1024; /*0x1008e5191*/
      if ( (_BYTE)v47 ) /*0x1008e51a0*/
      {
LABEL_91:
        v36 = (__int64 (__fastcall *)())v18; /*0x1008e52bd*/
        v37 = (__int128 **)v17; /*0x1008e52c0*/
        v55 = &v59; /*0x1008e52c7*/
        v56 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008e52d2*/
        v57 = &v52; /*0x1008e52da*/
        v58 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008e52e5*/
        result = (_QWORD *)alloc::fmt::format::format_inner::h3c16c74008a310d4(&v41[1], &unk_1017C6DD9, &v55); /*0x1008e52fb*/
        v41[0] = 9; /*0x1008e5304*/
        qmemcpy(v51, v41, 0x60u); /*0x1008e531b*/
        if ( !v17 ) /*0x1008e5321*/
          goto LABEL_96; /*0x1008e5321*/
LABEL_94:
        v34 = (__int64)v36; /*0x1008e54af*/
        v35 = v37; /*0x1008e54b7*/
        goto LABEL_95; /*0x1008e54b7*/
      }
      if ( v17 ) /*0x1008e51a9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v17, 1); /*0x1008e51b0*/
    }
    if ( v48 ) /*0x1008e51bf*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, v48, 1); /*0x1008e51cd*/
    v7 += 416; /*0x1008e51d2*/
    v8 = v39 + 1; /*0x1008e51e0*/
    if ( v40 == v7 ) /*0x1008e51ea*/
      goto LABEL_88; /*0x1008e51ea*/
  }
  v55 = (__int128 **)&v48; /*0x1008e4ecf*/
  v56 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1008e4eda*/
  v57 = &v53; /*0x1008e4ee2*/
  v58 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008e4eed*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v59, &unk_1017C6F7D, &v55); /*0x1008e4f00*/
  v28 = v59; /*0x1008e4f05*/
  v29 = v60; /*0x1008e4f09*/
  v59 = (__int128 *)v60; /*0x1008e4f11*/
  v60 = v61; /*0x1008e4f15*/
  v52 = 0x100000; /*0x1008e4f19*/
  if ( !(_BYTE)v45 ) /*0x1008e4f28*/
  {
    v6 = v42; /*0x1008e4f3b*/
    if ( v28 ) /*0x1008e4f42*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, v28, 1); /*0x1008e4f4f*/
    goto LABEL_66; /*0x1008e4f4f*/
  }
LABEL_89:
  v55 = &v59; /*0x1008e5200*/
  v56 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1008e520f*/
  v57 = &v52; /*0x1008e5217*/
  v58 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1008e5222*/
  result = (_QWORD *)alloc::fmt::format::format_inner::h3c16c74008a310d4(&v41[1], &unk_1017C6DD9, &v55); /*0x1008e5238*/
  v41[0] = 9; /*0x1008e5241*/
  qmemcpy(v51, v41, 0x60u); /*0x1008e5258*/
  if ( !v28 ) /*0x1008e525e*/
    goto LABEL_96; /*0x1008e525e*/
  v34 = v29; /*0x1008e5269*/
  v35 = v28; /*0x1008e526c*/
LABEL_95:
  result = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v35, 1); /*0x1008e54ba*/
LABEL_96:
  if ( v48 ) /*0x1008e54c9*/
    return (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, v48, 1); /*0x1008e54d7*/
  return result; /*0x1008e54dc*/
}