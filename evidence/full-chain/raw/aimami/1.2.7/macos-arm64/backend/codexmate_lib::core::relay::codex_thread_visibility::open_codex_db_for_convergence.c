// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::codex_thread_visibility::open_codex_db_for_convergence::h3b468e57114146c7; addr: 0x1004878b0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
_QWORD *__fastcall codexmate_lib::core::relay::codex_thread_visibility::open_codex_db_for_convergence::h3b468e57114146c7(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        double a4)
{
  int v4; // edx
  unsigned int *v5; // rbx
  unsigned __int64 v6; // rcx
  __int64 v7; // r12
  char v8; // r15
  unsigned __int64 v9; // r15
  unsigned int v10; // r12d
  __int64 v11; // rdx
  _QWORD *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rax
  unsigned int v15; // edx
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // r15
  _QWORD *v19; // r13
  __int64 v20; // rsi
  void *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rsi
  _QWORD __dst[9]; // [rsp+8h] [rbp-2C8h] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp-280h] BYREF
  __int64 v27; // [rsp+60h] [rbp-270h] BYREF
  int v28; // [rsp+68h] [rbp-268h]
  unsigned __int64 v29; // [rsp+70h] [rbp-260h]
  unsigned __int64 v30; // [rsp+78h] [rbp-258h]
  unsigned __int64 v31; // [rsp+80h] [rbp-250h]
  _BYTE v32[67]; // [rsp+88h] [rbp-248h] BYREF
  unsigned __int64 v33; // [rsp+D0h] [rbp-200h] BYREF
  _QWORD *v34; // [rsp+D8h] [rbp-1F8h]
  __int64 v35; // [rsp+E0h] [rbp-1F0h] BYREF
  __int128 v36; // [rsp+E8h] [rbp-1E8h]
  unsigned __int64 v37; // [rsp+F8h] [rbp-1D8h] BYREF
  __int64 v38; // [rsp+100h] [rbp-1D0h]
  __int64 v39; // [rsp+108h] [rbp-1C8h]
  _BYTE v40[24]; // [rsp+110h] [rbp-1C0h] BYREF
  __int64 (__fastcall *v41)(); // [rsp+128h] [rbp-1A8h]
  int v42; // [rsp+130h] [rbp-1A0h]
  char v43; // [rsp+134h] [rbp-19Ch]
  __int128 v44; // [rsp+135h] [rbp-19Bh]
  _BYTE v45[11]; // [rsp+145h] [rbp-18Bh]
  _QWORD v46[14]; // [rsp+150h] [rbp-180h] BYREF
  __int128 v47; // [rsp+1C0h] [rbp-110h]
  __int64 (__fastcall *v48)(); // [rsp+1D0h] [rbp-100h]
  int v49; // [rsp+1D8h] [rbp-F8h]
  _QWORD v50[14]; // [rsp+1E0h] [rbp-F0h] BYREF
  _DWORD v51[2]; // [rsp+250h] [rbp-80h]
  _DWORD v52[2]; // [rsp+258h] [rbp-78h]
  __int128 v53; // [rsp+260h] [rbp-70h] BYREF
  __int64 (__fastcall *v54)(); // [rsp+270h] [rbp-60h]
  int v55; // [rsp+278h] [rbp-58h]
  _BYTE v56[27]; // [rsp+280h] [rbp-50h] BYREF
  _BYTE v57[41]; // [rsp+2A7h] [rbp-29h] BYREF

  v38 = a3; /*0x1004878c4*/
  v39 = a2; /*0x1004878cb*/
  v34 = a1; /*0x1004878d2*/
  v37 = 4; /*0x1004878d9*/
  v27 = std::time::Instant::now::hda76af2c3a449055(a4); /*0x1004878e9*/
  v28 = v4; /*0x1004878f0*/
  v35 = 0; /*0x1004878f6*/
  v36 = 1u; /*0x100487901*/
  v5 = (unsigned int *)&unk_1016F3ED8; /*0x100487925*/
  v6 = 0; /*0x10048792c*/
  while ( 1 )
  {
    v29 = v6; /*0x100487940*/
    v30 = v6 + 1; /*0x10048794b*/
    v33 = v6 + 1; /*0x100487952*/
    rusqlite::Connection::open_with_flags::h8e5ddb3fe8e2df46(v50, v39, v38, 32770); /*0x10048796c*/
    v7 = v50[0]; /*0x10048797f*/
    *(_OWORD *)v40 = *(_OWORD *)&v50[1]; /*0x10048798e*/
    *(_QWORD *)&v40[16] = v50[3]; /*0x1004879a0*/
    LODWORD(v41) = v50[4]; /*0x1004879ab*/
    v8 = BYTE4(v50[4]); /*0x1004879b1*/
    *(_QWORD *)v56 = *(_QWORD *)((char *)&v50[4] + 5); /*0x1004879c1*/
    *(_OWORD *)&v56[8] = *(_OWORD *)((char *)&v50[5] + 5); /*0x1004879c5*/
    *(_DWORD *)&v56[23] = HIDWORD(v50[7]); /*0x1004879d5*/
    if ( LOBYTE(v50[13]) != 3 ) /*0x1004879da*/
      break; /*0x1004879da*/
    v47 = *(_OWORD *)v40; /*0x1004879ea*/
    v48 = *(__int64 (__fastcall **)())&v40[16]; /*0x1004879ff*/
    v49 = (int)v41; /*0x100487a0c*/
    __dst[0] = *(_QWORD *)v56; /*0x100487a1a*/
    *(_OWORD *)&__dst[1] = *(_OWORD *)&v56[8]; /*0x100487a21*/
    *(_DWORD *)((char *)&__dst[2] + 7) = *(_DWORD *)&v56[23]; /*0x100487a36*/
LABEL_8:
    v55 = v49; /*0x100487c1a*/
    v54 = v48; /*0x100487c2a*/
    v53 = v47; /*0x100487c40*/
    memcpy(v32, __dst, sizeof(v32)); /*0x100487c57*/
    v52[0] = v51[0]; /*0x100487c62*/
    *(_DWORD *)((char *)v52 + 3) = *(_DWORD *)((char *)v51 + 3); /*0x100487c65*/
LABEL_9:
    if ( v7 != 0x8000000000000000LL || (unsigned __int8)(v8 - 3) >= 2u ) /*0x100487c81*/
    {
      v50[0] = v7; /*0x10048810c*/
      *(_OWORD *)&v50[1] = v53; /*0x10048811b*/
      v50[3] = v54; /*0x10048812d*/
      LODWORD(v50[4]) = v55; /*0x100488137*/
      BYTE4(v50[4]) = v8; /*0x10048813d*/
      *(_OWORD *)((char *)&v50[4] + 5) = *(_OWORD *)v32; /*0x100488152*/
      *(_QWORD *)((char *)&v50[6] + 5) = *(_QWORD *)&v32[16]; /*0x100488167*/
      HIDWORD(v50[7]) = *(_DWORD *)&v32[23]; /*0x100488174*/
      *(_QWORD *)v40 = v50; /*0x100488181*/
      *(_QWORD *)&v40[8] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10048818f*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v46, &unk_1018F9555, v40); /*0x1004881ab*/
      v12 = v34; /*0x1004881b7*/
      v34[3] = v46[2]; /*0x1004881be*/
      v13 = v46[0]; /*0x1004881c2*/
      v12[2] = v46[1]; /*0x1004881d0*/
      v12[1] = v13; /*0x1004881d4*/
      *v12 = 10; /*0x1004881d8*/
      *((_BYTE *)v12 + 104) = 3; /*0x1004881df*/
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(v50); /*0x1004881ea*/
LABEL_42:
      v23 = v35; /*0x10048861d*/
      if ( !v35 ) /*0x100488627*/
        return v12; /*0x100488627*/
LABEL_43:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v23, 1); /*0x100488629*/
      return v12; /*0x100488635*/
    }
    *(_QWORD *)v40 = 0x8000000000000000LL; /*0x100487c91*/
    v42 = v55; /*0x100487c9b*/
    v41 = v54; /*0x100487ca3*/
    *(_OWORD *)&v40[8] = v53; /*0x100487cb3*/
    v43 = v8; /*0x100487cb7*/
    *(_DWORD *)&v45[7] = *(_DWORD *)&v32[23]; /*0x100487cc4*/
    *(_QWORD *)v45 = *(_QWORD *)&v32[16]; /*0x100487ccf*/
    v44 = *(_OWORD *)v32; /*0x100487ce5*/
    v46[0] = 0; /*0x100487ce9*/
    *(_OWORD *)&v46[1] = 1u; /*0x100487cf4*/
    v50[2] = 1610612768; /*0x100487d0a*/
    v50[0] = v46; /*0x100487d1c*/
    v50[1] = &anon_19faa30eef2c8845dad92cc05fa4a600_1278; /*0x100487d2a*/
    if ( (unsigned __int8)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4( /*0x100487d3f*/
                            v40,
                            v50) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004887ca*/
        &anon_19faa30eef2c8845dad92cc05fa4a600_1279,
        55,
        v57,
        &anon_19faa30eef2c8845dad92cc05fa4a600_1291,
        &anon_19faa30eef2c8845dad92cc05fa4a600_1281);
    *(_QWORD *)v56 = v46[0]; /*0x100487d5a*/
    *(_OWORD *)&v56[8] = *(_OWORD *)&v46[1]; /*0x100487d5e*/
    if ( v35 ) /*0x100487d77*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v35, 1); /*0x100487d85*/
    v36 = *(_OWORD *)&v56[8]; /*0x100487d9d*/
    v35 = *(_QWORD *)v56; /*0x100487da4*/
    if ( v29 < 3 ) /*0x100487db3*/
    {
      v9 = *((_QWORD *)v5 - 1); /*0x100487dc3*/
      v10 = *v5; /*0x100487ddc*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100487dcb*/
      {
        v11 = (0x3E8 * (unsigned __int128)v9 + *v5 / 0xF4240uLL) >> 64; /*0x100487ded*/
        *(_QWORD *)v56 = 1000 * v9 + *v5 / 0xF4240uLL; /*0x100487ded*/
        *(_QWORD *)&v56[8] = v11; /*0x100487df5*/
        v26[0] = v39; /*0x100487e00*/
        v26[1] = v38; /*0x100487e0e*/
        v46[0] = v26; /*0x100487e1c*/
        v46[1] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100487e2a*/
        v46[2] = &v33; /*0x100487e38*/
        v46[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100487e46*/
        v46[4] = &v37; /*0x100487e54*/
        v46[5] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100487e5b*/
        v46[6] = v40; /*0x100487e69*/
        v46[7] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100487e77*/
        v46[8] = v56; /*0x100487e82*/
        v46[9] = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x100487e90*/
        v50[6] = 2; /*0x100487e97*/
        v50[7] = "codexmate_lib::core::relay::codex_thread_visibility/payload/model_provider"; /*0x100487ea9*/
        v50[8] = 51; /*0x100487eb0*/
        v50[10] = &unk_1018F94F6; /*0x100487ec2*/
        v50[11] = v46; /*0x100487ed0*/
        v50[0] = 0; /*0x100487ed7*/
        v50[1] = "codexmate_lib::core::relay::codex_thread_visibility/payload/model_provider"; /*0x100487ee2*/
        v50[2] = 51; /*0x100487ee9*/
        v50[3] = 0; /*0x100487ef4*/
        v50[4] = "src/core/relay/codex_thread_visibility.rs"; /*0x100487f06*/
        v50[5] = 41; /*0x100487f0d*/
        v50[9] = 0x10CA00000001LL; /*0x100487f22*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v57, v50); /*0x100487f34*/
      }
      std::thread::functions::sleep::h8fc88f8bc00bad5c(v9, v10); /*0x100487f49*/
    }
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(v40); /*0x100487f55*/
    v5 += 4; /*0x100487f5a*/
    v6 = v30; /*0x100487f65*/
    if ( v30 >= v37 )
    {
      v14 = std::time::Instant::elapsed::h457f209775ed485c(&v27); /*0x1004881fb*/
      *(_OWORD *)v56 = 0x3E8 * (unsigned __int128)(unsigned __int64)v14 + v15 / 0xF4240uLL; /*0x10048821e*/
      codexmate_lib::core::relay::codex_thread_visibility::codex_db_log_path::h0144f8e50eb7acd6(&v53, v39, v38); /*0x10048823b*/
      codexmate_lib::platform::process::list_codex_db_holder_processes::h57273fcaab73a596(v46); /*0x10048824a*/
      v50[0] = v46[1]; /*0x10048826b*/
      v50[1] = v46[1]; /*0x100488272*/
      v50[2] = v46[0]; /*0x100488279*/
      v50[3] = v46[1] + 32LL * v46[2]; /*0x100488280*/
      alloc::vec::in_place_collect::from_iter_in_place::h112b7e8f2b4a689c(v32, v50); /*0x100488295*/
      v17 = *(_QWORD *)&v32[16]; /*0x10048829a*/
      if ( *(_QWORD *)&v32[16] )
      {
        v18 = *(_QWORD *)&v32[8]; /*0x1004882aa*/
        alloc::str::join_generic_copy::h877a7dfcc3252013( /*0x1004882cb*/
          v50,
          *(_QWORD *)&v32[8],
          *(_QWORD *)&v32[16],
          &unk_1016F285E,
          3);
        *(_OWORD *)&v46[1] = *(_OWORD *)&v50[1]; /*0x1004882ec*/
        v46[0] = v50[0]; /*0x1004882f3*/
        v50[0] = v46; /*0x1004882fa*/
        v50[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100488308*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v40, &unk_1018F7866, v50); /*0x100488324*/
        if ( v46[0] ) /*0x100488333*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46[1], v46[0], 1); /*0x100488341*/
        v19 = (_QWORD *)(v18 + 8); /*0x100488346*/
        do /*0x100488357*/
        {
          v20 = *(v19 - 1); /*0x10048835d*/
          if ( v20 ) /*0x100488364*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v19, v20, 1); /*0x10048836f*/
          v19 += 3; /*0x100488350*/
          --v17; /*0x100488354*/
        }
        while ( v17 ); /*0x100488357*/
      }
      else
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v32, v50, v16); /*0x100488376*/
        v21 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(25, 1); /*0x100488385*/
        if ( !v21 ) /*0x10048838d*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 25); /*0x1004887db*/
        qmemcpy(v21, "db holders: none detected", 25);
        *(_QWORD *)v40 = 25; /*0x1004883c0*/
        *(_QWORD *)&v40[8] = v21; /*0x1004883cb*/
        *(_QWORD *)&v40[16] = 25; /*0x1004883d2*/
        v18 = *(_QWORD *)&v32[8]; /*0x1004883dd*/
      }
      if ( *(_QWORD *)v32 ) /*0x1004883ee*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, 24LL * *(_QWORD *)v32, 8); /*0x100488400*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100488413*/
      {
        v46[0] = &v53; /*0x100488419*/
        v46[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100488427*/
        v46[2] = &v37; /*0x100488435*/
        v46[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100488443*/
        v46[4] = v56; /*0x10048844e*/
        v46[5] = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x10048845c*/
        v46[6] = &v35; /*0x10048846a*/
        v46[7] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100488471*/
        v46[8] = v40; /*0x10048847f*/
        v46[9] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100488486*/
        v50[6] = 2; /*0x10048848d*/
        v50[7] = "codexmate_lib::core::relay::codex_thread_visibility/payload/model_provider"; /*0x10048849f*/
        v50[8] = 51; /*0x1004884a6*/
        v50[10] = &unk_1018F9401; /*0x1004884b8*/
        v50[11] = v46; /*0x1004884bf*/
        v50[0] = 0; /*0x1004884c6*/
        v50[1] = "codexmate_lib::core::relay::codex_thread_visibility/payload/model_provider"; /*0x1004884d1*/
        v50[2] = 51; /*0x1004884d8*/
        v50[3] = 0; /*0x1004884e3*/
        v50[4] = "src/core/relay/codex_thread_visibility.rs"; /*0x1004884f5*/
        v50[5] = 41; /*0x1004884fc*/
        v50[9] = 0x10E600000001LL; /*0x100488511*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v57, v50); /*0x100488523*/
      }
      v50[0] = &v53; /*0x100488528*/
      v50[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100488536*/
      v50[2] = &v37; /*0x100488544*/
      v50[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100488552*/
      v50[4] = v56; /*0x10048855d*/
      v50[5] = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x10048856b*/
      v50[6] = &v35; /*0x100488579*/
      v50[7] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100488580*/
      v50[8] = v40; /*0x10048858e*/
      v50[9] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100488595*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v46, &unk_1018F9460, v50); /*0x1004885b1*/
      v12 = v34; /*0x1004885bd*/
      v34[3] = v46[2]; /*0x1004885c4*/
      v22 = v46[0]; /*0x1004885c8*/
      v12[2] = v46[1]; /*0x1004885d6*/
      v12[1] = v22; /*0x1004885da*/
      *v12 = 10; /*0x1004885de*/
      *((_BYTE *)v12 + 104) = 3; /*0x1004885e5*/
      if ( *(_QWORD *)v40 ) /*0x1004885f3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v40[8], *(_QWORD *)v40, 1); /*0x100488601*/
      if ( (_QWORD)v53 ) /*0x10048860d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v53 + 1), v53, 1); /*0x100488618*/
      goto LABEL_42; /*0x100488618*/
    }
  }
  v46[12] = v50[12]; /*0x100487a54*/
  v46[11] = v50[11]; /*0x100487a5c*/
  v46[10] = v50[10]; /*0x100487a64*/
  v46[9] = v50[9]; /*0x100487a70*/
  v46[8] = v50[8]; /*0x100487a74*/
  v46[13] = v50[13]; /*0x100487a7f*/
  v46[0] = v50[0]; /*0x100487a84*/
  LODWORD(v46[4]) = (_DWORD)v41; /*0x100487a91*/
  v46[3] = *(_QWORD *)&v40[16]; /*0x100487a9b*/
  *(_OWORD *)&v46[1] = *(_OWORD *)v40; /*0x100487ab1*/
  BYTE4(v46[4]) = BYTE4(v50[4]); /*0x100487ab5*/
  HIDWORD(v46[7]) = *(_DWORD *)&v56[23]; /*0x100487ac6*/
  *(_OWORD *)((char *)&v46[5] + 5) = *(_OWORD *)&v56[8]; /*0x100487ad9*/
  *(_QWORD *)((char *)&v46[4] + 5) = *(_QWORD *)v56; /*0x100487add*/
  rusqlite::busy::_$LT$impl$u20$rusqlite..Connection$GT$::busy_timeout::h18e2a2db6b41fc10(v50, v46, 5, 0); /*0x100487afb*/
  v7 = v50[0]; /*0x100487b00*/
  if ( v50[0] != 0x8000000000000016LL ) /*0x100487b18*/
  {
    v49 = v50[4]; /*0x100487bb4*/
    v48 = (__int64 (__fastcall *)())v50[3]; /*0x100487bbe*/
    v47 = *(_OWORD *)&v50[1]; /*0x100487bd4*/
    v8 = BYTE4(v50[4]); /*0x100487bdb*/
    __dst[0] = *(_QWORD *)((char *)&v50[4] + 5); /*0x100487beb*/
    *(_OWORD *)&__dst[1] = *(_OWORD *)((char *)&v50[5] + 5); /*0x100487bf2*/
    *(_DWORD *)((char *)&__dst[2] + 7) = HIDWORD(v50[7]); /*0x100487c08*/
    core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::hb359d5fa94c4ce7d(v46); /*0x100487c15*/
    goto LABEL_8; /*0x100487c15*/
  }
  v31 = 0x8000000000000016LL; /*0x100487b1e*/
  v7 = v46[0]; /*0x100487b25*/
  v47 = *(_OWORD *)&v46[1]; /*0x100487b3b*/
  v48 = (__int64 (__fastcall *)())v46[3]; /*0x100487b4d*/
  v49 = v46[4]; /*0x100487b58*/
  v8 = BYTE4(v46[4]); /*0x100487b5e*/
  memcpy(__dst, (char *)&v46[4] + 5, 0x43u); /*0x100487b79*/
  v51[0] = *(_DWORD *)((char *)&v46[13] + 1); /*0x100487b8e*/
  *(_DWORD *)((char *)v51 + 3) = HIDWORD(v46[13]); /*0x100487b91*/
  if ( LOBYTE(v46[13]) == 3 ) /*0x100487b98*/
    goto LABEL_8; /*0x100487b98*/
  LODWORD(v46[4]) = v49; /*0x100487f8e*/
  v46[3] = v48; /*0x100487f98*/
  *(_OWORD *)&v46[1] = v47; /*0x100487fae*/
  memcpy((char *)&v46[4] + 5, __dst, 0x43u); /*0x100487fcf*/
  *(_DWORD *)((char *)&v46[13] + 1) = v51[0]; /*0x100487fda*/
  HIDWORD(v46[13]) = *(_DWORD *)((char *)v51 + 3); /*0x100487fdd*/
  rusqlite::Connection::execute_batch::h4a2529fc120bbad7(v40, v46, &unk_1016F3724, 28); /*0x100488005*/
  qmemcpy(v50, v46, sizeof(v50)); /*0x100488023*/
  v7 = *(_QWORD *)v40; /*0x100488026*/
  if ( *(_QWORD *)v40 != v31 ) /*0x100488034*/
  {
    v55 = v42; /*0x1004880b1*/
    v54 = v41; /*0x1004880b8*/
    v53 = *(_OWORD *)&v40[8]; /*0x1004880c8*/
    v8 = v43; /*0x1004880cc*/
    *(_OWORD *)v32 = v44; /*0x1004880dc*/
    *(_QWORD *)&v32[16] = *(_QWORD *)v45; /*0x1004880ee*/
    *(_DWORD *)&v32[23] = *(_DWORD *)&v45[7]; /*0x1004880f9*/
    core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::hb359d5fa94c4ce7d(v50); /*0x100488102*/
    goto LABEL_9; /*0x100488107*/
  }
  v7 = v46[0]; /*0x100488036*/
  v53 = *(_OWORD *)&v46[1]; /*0x10048804c*/
  v54 = (__int64 (__fastcall *)())v46[3]; /*0x100488058*/
  v55 = v46[4]; /*0x100488060*/
  v8 = BYTE4(v46[4]); /*0x100488063*/
  memcpy(v32, (char *)&v46[4] + 5, sizeof(v32)); /*0x10048807e*/
  v52[0] = *(_DWORD *)((char *)&v46[13] + 1); /*0x100488092*/
  *(_DWORD *)((char *)v52 + 3) = HIDWORD(v46[13]); /*0x100488095*/
  if ( LOBYTE(v46[13]) == 3 ) /*0x10048809b*/
    goto LABEL_9; /*0x10048809b*/
  v50[0] = v46[0]; /*0x10048864f*/
  *(_OWORD *)&v50[1] = v53; /*0x10048865e*/
  v50[3] = v54; /*0x100488670*/
  LODWORD(v50[4]) = v55; /*0x10048867a*/
  BYTE4(v50[4]) = BYTE4(v46[4]); /*0x100488680*/
  memcpy((char *)&v50[4] + 5, v32, 0x43u); /*0x10048869c*/
  LOBYTE(v50[13]) = v46[13]; /*0x1004886a1*/
  *(_DWORD *)((char *)&v50[13] + 1) = v52[0]; /*0x1004886ad*/
  HIDWORD(v50[13]) = *(_DWORD *)((char *)v52 + 3); /*0x1004886b3*/
  v12 = v34; /*0x1004886c1*/
  if ( v33 > 1 && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u ) /*0x1004886dc*/
  {
    *(_QWORD *)v56 = v39; /*0x1004886e9*/
    *(_QWORD *)&v56[8] = v38; /*0x1004886f4*/
    *(_QWORD *)v40 = v56; /*0x1004886fc*/
    *(_QWORD *)&v40[8] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x10048870a*/
    *(_QWORD *)&v40[16] = &v33; /*0x100488718*/
    v41 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100488726*/
    v46[0] = "codexmate_lib::core::relay::codex_thread_visibility/payload/model_provider"; /*0x100488734*/
    v46[1] = 51; /*0x10048873b*/
    v46[2] = "codexmate_lib::core::relay::codex_thread_visibility/payload/model_provider"; /*0x100488746*/
    v46[3] = 51; /*0x10048874d*/
    v46[4] = &off_101AA8BD8; /*0x10048875f*/
    log::__private_api::log::hf5bade4875454669(&unk_1018F94A7, v40, 3, v46); /*0x100488780*/
  }
  qmemcpy(v12, v50, 0x70u); /*0x100488794*/
  v23 = v35; /*0x100488797*/
  if ( v35 ) /*0x1004887a1*/
    goto LABEL_43; /*0x1004887a1*/
  return v12; /*0x10048863d*/
}
