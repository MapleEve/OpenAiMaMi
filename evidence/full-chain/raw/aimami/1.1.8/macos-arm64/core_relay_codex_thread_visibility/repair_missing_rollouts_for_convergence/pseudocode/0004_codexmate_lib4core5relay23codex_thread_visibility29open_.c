// mac 1.1.8 behavioral repair_missing_rollouts_for_convergence 0x100407aa0 d=1
size_t __fastcall codexmate_lib::core::relay::codex_thread_visibility::open_codex_db_for_convergence::hd566ce42c5fa8db6(
        _QWORD *a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned int *v3; // rax
  unsigned __int64 v4; // rdx
  unsigned __int64 *v5; // r12
  __int64 v6; // r14
  unsigned __int64 v7; // r13
  char v8; // r12
  unsigned __int64 v9; // r14
  unsigned int v10; // r13d
  size_t v11; // rdx
  double v12; // xmm0_8
  __int64 v13; // r15
  __int64 v14; // rbx
  __int64 v15; // r14
  _QWORD *v16; // rdx
  size_t v17; // rax
  size_t result; // rax
  void *v19; // rax
  _QWORD *v20; // rdx
  _QWORD v21[14]; // [rsp+8h] [rbp-2A8h] BYREF
  _QWORD v22[2]; // [rsp+78h] [rbp-238h] BYREF
  unsigned __int64 v23; // [rsp+88h] [rbp-228h]
  unsigned __int64 v24; // [rsp+90h] [rbp-220h]
  _BYTE __dst[67]; // [rsp+98h] [rbp-218h] BYREF
  unsigned int *v26; // [rsp+E0h] [rbp-1D0h]
  unsigned __int64 v27; // [rsp+E8h] [rbp-1C8h] BYREF
  __int64 (*v28)(); // [rsp+F0h] [rbp-1C0h]
  __int64 v29; // [rsp+F8h] [rbp-1B8h]
  __int64 (__fastcall *v30)(); // [rsp+100h] [rbp-1B0h]
  int v31; // [rsp+108h] [rbp-1A8h]
  char v32; // [rsp+10Ch] [rbp-1A4h]
  __int128 v33; // [rsp+10Dh] [rbp-1A3h]
  _BYTE v34[11]; // [rsp+11Dh] [rbp-193h]
  unsigned __int64 v35; // [rsp+128h] [rbp-188h] BYREF
  unsigned __int64 v36; // [rsp+130h] [rbp-180h] BYREF
  _QWORD *v37; // [rsp+138h] [rbp-178h]
  unsigned __int64 v38; // [rsp+140h] [rbp-170h] BYREF
  size_t v39; // [rsp+148h] [rbp-168h]
  size_t v40; // [rsp+150h] [rbp-160h]
  size_t v41[14]; // [rsp+158h] [rbp-158h] BYREF
  unsigned __int64 v42; // [rsp+1C8h] [rbp-E8h] BYREF
  __int64 v43; // [rsp+1D0h] [rbp-E0h]
  size_t v44; // [rsp+1D8h] [rbp-D8h]
  unsigned __int64 v45[14]; // [rsp+1E0h] [rbp-D0h] BYREF
  unsigned __int64 v46; // [rsp+250h] [rbp-60h]
  unsigned __int64 v47; // [rsp+258h] [rbp-58h]
  _DWORD v48[2]; // [rsp+260h] [rbp-50h]
  unsigned __int64 v49; // [rsp+268h] [rbp-48h] BYREF
  unsigned __int64 v50; // [rsp+270h] [rbp-40h]
  unsigned __int64 v51; // [rsp+278h] [rbp-38h]
  int v52; // [rsp+280h] [rbp-30h]
  char v53[41]; // [rsp+287h] [rbp-29h] BYREF

  v46 = a3; /*0x100407ab4*/
  v47 = a2; /*0x100407ab8*/
  v37 = a1; /*0x100407abc*/
  v36 = 4; /*0x100407ac3*/
  v42 = 0; /*0x100407ace*/
  v43 = 1; /*0x100407ad9*/
  v44 = 0; /*0x100407ae4*/
  v3 = (unsigned int *)&unk_1012C4380; /*0x100407af6*/
  v4 = 0; /*0x100407afd*/
  v5 = v45; /*0x100407b06*/
  while ( 1 )
  {
    v26 = v3; /*0x100407b10*/
    v6 = (__int64)v5; /*0x100407b17*/
    v23 = v4; /*0x100407b1a*/
    v24 = v4 + 1; /*0x100407b25*/
    v35 = v4 + 1; /*0x100407b2c*/
    codexmate_lib::core::relay::codex_thread_visibility::open_codex_db_raw::h25c4e64449bbb7db(v21, v47, v46, 32770); /*0x100407b47*/
    if ( LOBYTE(v21[13]) != 3 ) /*0x100407b53*/
      break; /*0x100407b53*/
    v7 = v21[0]; /*0x100407b55*/
    v49 = v21[1]; /*0x100407b63*/
    v50 = v21[2]; /*0x100407b67*/
    v51 = v21[3]; /*0x100407b6f*/
    v52 = v21[4]; /*0x100407b76*/
    v8 = BYTE4(v21[4]); /*0x100407b79*/
    memcpy(__dst, (char *)&v21[4] + 5, sizeof(__dst)); /*0x100407b94*/
    v48[0] = *(_DWORD *)((char *)&v21[13] + 1); /*0x100407b9f*/
    *(_DWORD *)((char *)v48 + 3) = HIDWORD(v21[13]); /*0x100407ba2*/
LABEL_8:
    if ( v7 != 0x8000000000000000LL || (unsigned __int8)(v8 - 3) >= 2u ) /*0x100407d08*/
    {
      v45[0] = v7; /*0x100408155*/
      v45[1] = v49; /*0x100408164*/
      v45[2] = v50; /*0x10040816b*/
      v45[3] = v51; /*0x100408176*/
      LODWORD(v45[4]) = v52; /*0x100408180*/
      BYTE4(v45[4]) = v8; /*0x100408186*/
      *(_OWORD *)((char *)&v45[4] + 5) = *(_OWORD *)__dst; /*0x10040819b*/
      *(unsigned __int64 *)((char *)&v45[6] + 5) = *(_QWORD *)&__dst[16]; /*0x1004081b0*/
      HIDWORD(v45[7]) = *(_DWORD *)&__dst[23]; /*0x1004081bd*/
      v27 = v6; /*0x1004081c3*/
      v28 = (__int64 (*)())_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x1004081d1*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v41, byte_101229003, (unsigned __int64)&v27); /*0x1004081ed*/
      v16 = v37; /*0x1004081f9*/
      v37[3] = v41[2]; /*0x100408200*/
      v17 = v41[0]; /*0x100408204*/
      v16[2] = v41[1]; /*0x100408212*/
      v16[1] = v17; /*0x100408216*/
      *v16 = 9; /*0x10040821a*/
      *((_BYTE *)v16 + 104) = 3; /*0x100408221*/
      result = (size_t)core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hc22c33be057bddad((__int64 *)v45); /*0x10040822c*/
LABEL_33:
      if ( !v42 ) /*0x10040839f*/
        return result; /*0x10040839f*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004083ad*/
    }
    v27 = 0x8000000000000000LL; /*0x100407d18*/
    v31 = v52; /*0x100407d29*/
    v30 = (__int64 (__fastcall *)())v51; /*0x100407d30*/
    v29 = v50; /*0x100407d3c*/
    v28 = (__int64 (*)())v49; /*0x100407d40*/
    v32 = v8; /*0x100407d43*/
    *(_DWORD *)&v34[7] = *(_DWORD *)&__dst[23]; /*0x100407d50*/
    *(_QWORD *)v34 = *(_QWORD *)&__dst[16]; /*0x100407d5a*/
    v33 = *(_OWORD *)__dst; /*0x100407d70*/
    v41[0] = 0; /*0x100407d74*/
    v41[1] = 1; /*0x100407d7f*/
    v41[2] = 0; /*0x100407d8a*/
    v45[2] = 1610612768; /*0x100407d95*/
    v45[0] = (unsigned __int64)v41; /*0x100407da7*/
    v45[1] = (unsigned __int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_902; /*0x100407db5*/
    v5 = (unsigned __int64 *)v6; /*0x100407dbf*/
    if ( (unsigned __int8)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4( /*0x100407dc5*/
                            &v27,
                            v6) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10040857f*/
        (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_903,
        55,
        (__int64)v53,
        (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_917,
        (__int64)&anon_0eedd02070250de7472aa97ee6b1a8ea_905);
    v38 = v41[0]; /*0x100407de0*/
    v39 = v41[1]; /*0x100407de7*/
    v40 = v41[2]; /*0x100407df5*/
    if ( v42 ) /*0x100407e06*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100407e14*/
    v44 = v40; /*0x100407e20*/
    v43 = v39; /*0x100407e35*/
    v42 = v38; /*0x100407e3c*/
    if ( v23 < 3 ) /*0x100407e4b*/
    {
      v9 = *((_QWORD *)v26 - 1); /*0x100407e62*/
      v10 = *v26; /*0x100407e7b*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100407e6a*/
      {
        v11 = (0x3E8 * (unsigned __int128)v9 + *v26 / 0xF4240uLL) >> 64; /*0x100407e8c*/
        v38 = 1000 * v9 + *v26 / 0xF4240uLL; /*0x100407e8c*/
        v39 = v11; /*0x100407e97*/
        v22[0] = v47; /*0x100407ea2*/
        v22[1] = v46; /*0x100407ead*/
        v41[0] = (size_t)v22; /*0x100407ebb*/
        v41[1] = (size_t)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100407ec9*/
        v41[2] = (size_t)&v35; /*0x100407ed7*/
        v41[3] = (size_t)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100407ee5*/
        v41[4] = (size_t)&v36; /*0x100407ef3*/
        v41[5] = (size_t)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100407efa*/
        v41[6] = (size_t)&v27; /*0x100407f01*/
        v41[7] = (size_t)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100407f0f*/
        v41[8] = (size_t)&v38; /*0x100407f1d*/
        v41[9] = (size_t)core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750; /*0x100407f2b*/
        v45[6] = 2; /*0x100407f32*/
        v45[7] = (unsigned __int64)"codexmate_lib::core::relay::codex_thread_visibilityPRAGMA table_info(threads)rollout"; /*0x100407f44*/
        v45[8] = 51; /*0x100407f4b*/
        v45[10] = (unsigned __int64)&unk_101228FA4; /*0x100407f5d*/
        v45[11] = (unsigned __int64)v41; /*0x100407f68*/
        v45[0] = 0; /*0x100407f6c*/
        v45[1] = (unsigned __int64)"codexmate_lib::core::relay::codex_thread_visibilityPRAGMA table_info(threads)rollout"; /*0x100407f77*/
        v45[2] = 51; /*0x100407f7e*/
        v45[3] = 0; /*0x100407f89*/
        v45[4] = (unsigned __int64)"src/core/relay/codex_thread_visibility.rs"; /*0x100407f9b*/
        v45[5] = 41; /*0x100407fa2*/
        v45[9] = 0x5E000000001LL; /*0x100407fb7*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(); /*0x100407fc5*/
      }
      std::thread::functions::sleep::h8fc88f8bc00bad5c(v9, v10); /*0x100407fd9*/
    }
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hc22c33be057bddad((__int64 *)&v27); /*0x100407fe1*/
    v3 = v26 + 4; /*0x100407fed*/
    v4 = v24; /*0x100407ff8*/
    if ( v24 >= v36 )
    {
      v49 = v47; /*0x10040800c*/
      v50 = v46; /*0x100408014*/
      v12 = codexmate_lib::platform::process::list_codex_db_holder_processes::hc3af5600c2e57f87(v41); /*0x100408022*/
      v45[0] = v41[1]; /*0x100408043*/
      v45[1] = v41[1]; /*0x10040804a*/
      v45[2] = v41[0]; /*0x100408051*/
      v45[3] = v41[1] + 32 * v41[2]; /*0x100408058*/
      alloc::vec::in_place_collect::from_iter_in_place::h7c08de7ffe08b139(__dst, v45, v12); /*0x10040806d*/
      v13 = *(_QWORD *)&__dst[16]; /*0x100408072*/
      if ( *(_QWORD *)&__dst[16] )
      {
        v14 = *(_QWORD *)&__dst[8]; /*0x100408082*/
        alloc::str::join_generic_copy::hd50f750ef8c6057e( /*0x1004080a3*/
          v45,
          *(__int64 *)&__dst[8],
          *(__int64 *)&__dst[16],
          " | BEGIN DEFERREDBEGIN IMMEDIATEBEGIN EXCLUSIVEthread-convergePRAGMA wal_checkpoint(TRUNCATE);payload",
          3u);
        v41[2] = v45[2]; /*0x1004080af*/
        v41[1] = v45[1]; /*0x1004080c4*/
        v41[0] = v45[0]; /*0x1004080cb*/
        v45[0] = (unsigned __int64)v41; /*0x1004080d2*/
        v45[1] = (unsigned __int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1004080e0*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(&v27, byte_101228090, (unsigned __int64)v45); /*0x1004080fc*/
        if ( v41[0] ) /*0x10040810b*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100408119*/
        v15 = v14 + 8; /*0x10040811e*/
        do /*0x100408137*/
        {
          if ( *(_QWORD *)(v15 - 8) ) /*0x10040813d*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10040814e*/
          v15 += 24; /*0x100408130*/
          --v13; /*0x100408134*/
        }
        while ( v13 ); /*0x100408137*/
      }
      else
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100408236*/
        v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x19u, 1u); /*0x100408245*/
        if ( !v19 ) /*0x10040824d*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 25); /*0x100408590*/
        qmemcpy(v19, "db holders: none detected", 25);
        v27 = 25; /*0x100408280*/
        v28 = (__int64 (*)())v19; /*0x10040828b*/
        v29 = 25; /*0x100408292*/
      }
      if ( *(_QWORD *)__dst ) /*0x1004082b5*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004082c7*/
      v45[0] = (unsigned __int64)&v49; /*0x1004082d0*/
      v45[1] = (unsigned __int64)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1004082de*/
      v45[2] = (unsigned __int64)&v36; /*0x1004082ec*/
      v45[3] = (unsigned __int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1004082fa*/
      v45[4] = (unsigned __int64)&v42; /*0x100408308*/
      v45[5] = (unsigned __int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100408316*/
      v45[6] = (unsigned __int64)&v27; /*0x10040831d*/
      v45[7] = (unsigned __int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100408324*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v41, byte_101228F16, (unsigned __int64)v45); /*0x100408340*/
      if ( v27 ) /*0x10040834f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10040835d*/
      v20 = v37; /*0x100408369*/
      v37[3] = v41[2]; /*0x100408370*/
      result = v41[0]; /*0x100408374*/
      v20[2] = v41[1]; /*0x100408382*/
      v20[1] = result; /*0x100408386*/
      *v20 = 9; /*0x10040838a*/
      *((_BYTE *)v20 + 104) = 3; /*0x100408391*/
      goto LABEL_33; /*0x100408391*/
    }
  }
  qmemcpy(v41, v21, sizeof(v41)); /*0x100407bc6*/
  rusqlite::Connection::execute_batch::h4a2529fc120bbad7( /*0x100407bdb*/
    &v27,
    v41,
    "PRAGMA wal_checkpoint(FULL);UPDATE threads SET model_provider = ?1 WHERE model_provider = ?2 OR model_provider = ?3 "
    "OR (model_provider LIKE 'openai' AND model_provider <> ?1)provider-normalize",
    28);
  qmemcpy(v5, v41, 0x70u); /*0x100407beb*/
  v7 = v27; /*0x100407bee*/
  if ( v27 != 0x8000000000000016LL ) /*0x100407c06*/
  {
    v52 = v31; /*0x100407c9a*/
    v51 = (unsigned __int64)v30; /*0x100407ca1*/
    v50 = v29; /*0x100407cac*/
    v49 = (unsigned __int64)v28; /*0x100407cb0*/
    v8 = v32; /*0x100407cb4*/
    *(_OWORD *)__dst = v33; /*0x100407cc4*/
    *(_QWORD *)&__dst[16] = *(_QWORD *)v34; /*0x100407cd6*/
    *(_DWORD *)&__dst[23] = *(_DWORD *)&v34[7]; /*0x100407ce0*/
    core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::hfd0dbfc58fd406d0(v6); /*0x100407ce9*/
    goto LABEL_8; /*0x100407ce9*/
  }
  v7 = v41[0]; /*0x100407c0c*/
  v49 = v41[1]; /*0x100407c21*/
  v50 = v41[2]; /*0x100407c25*/
  v51 = v41[3]; /*0x100407c2d*/
  v52 = v41[4]; /*0x100407c34*/
  v8 = BYTE4(v41[4]); /*0x100407c37*/
  memcpy(__dst, (char *)&v41[4] + 5, sizeof(__dst)); /*0x100407c52*/
  v48[0] = *(_DWORD *)((char *)&v41[13] + 1); /*0x100407c65*/
  *(_DWORD *)((char *)v48 + 3) = HIDWORD(v41[13]); /*0x100407c68*/
  if ( LOBYTE(v41[13]) == 3 ) /*0x100407c6f*/
    goto LABEL_8; /*0x100407c6f*/
  v45[0] = v41[0]; /*0x1004083c4*/
  v45[1] = v49; /*0x1004083d3*/
  v45[2] = v50; /*0x1004083da*/
  v45[3] = v51; /*0x1004083e5*/
  LODWORD(v45[4]) = v52; /*0x1004083ef*/
  BYTE4(v45[4]) = BYTE4(v41[4]); /*0x1004083f5*/
  memcpy((char *)&v45[4] + 5, __dst, 0x43u); /*0x10040840f*/
  LOBYTE(v45[13]) = v41[13]; /*0x100408414*/
  result = v48[0]; /*0x100408418*/
  *(_DWORD *)((char *)&v45[13] + 1) = v48[0]; /*0x10040841e*/
  HIDWORD(v45[13]) = *(_DWORD *)((char *)v48 + 3); /*0x100408421*/
  if ( v35 > 1 ) /*0x10040842c*/
  {
    result = log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8; /*0x100408439*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u ) /*0x100408440*/
    {
      v38 = v47; /*0x10040844a*/
      v39 = v46; /*0x100408455*/
      v27 = (unsigned __int64)&v38; /*0x100408463*/
      v28 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100408471*/
      v29 = (__int64)&v35; /*0x10040847f*/
      v30 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10040848d*/
      v41[6] = 3; /*0x100408494*/
      v41[7] = (size_t)"codexmate_lib::core::relay::codex_thread_visibilityPRAGMA table_info(threads)rollout"; /*0x1004084a6*/
      v41[8] = 51; /*0x1004084ad*/
      v41[10] = (size_t)&unk_101228F55; /*0x1004084bf*/
      v41[11] = (size_t)&v27; /*0x1004084cd*/
      v41[0] = 0; /*0x1004084d4*/
      v41[1] = (size_t)"codexmate_lib::core::relay::codex_thread_visibilityPRAGMA table_info(threads)rollout"; /*0x1004084df*/
      v41[2] = 51; /*0x1004084e6*/
      v41[3] = 0; /*0x1004084f1*/
      v41[4] = (size_t)"src/core/relay/codex_thread_visibility.rs"; /*0x100408503*/
      v41[5] = 41; /*0x10040850a*/
      v41[9] = 0x5D600000001LL; /*0x10040851f*/
      result = _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(); /*0x100408531*/
    }
  }
  qmemcpy(v37, v45, 0x70u); /*0x100408549*/
  if ( v42 ) /*0x100408556*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100408556*/
  return result; /*0x1004083b2*/
}