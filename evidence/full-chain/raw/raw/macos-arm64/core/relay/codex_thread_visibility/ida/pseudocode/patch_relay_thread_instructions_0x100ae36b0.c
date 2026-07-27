// __ZN13codexmate_lib4core5relay23codex_thread_visibility31patch_relay_thread_instructions @ 0x100ae36b0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::patch_relay_thread_instructions::hc9e5c9fe3e5facfe(
        __int64 a1,
        __int64 *a2)
{
  __int64 *v2; // r12
  volatile signed __int64 **v4; // rdi
  __int64 v5; // rcx
  signed __int64 v6; // r13
  volatile signed __int64 *v7; // rax
  volatile signed __int64 *v8; // r14
  double v9; // xmm0_8
  __int64 v10; // rbx
  __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // rdx
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rbx
  unsigned __int64 v17; // r14
  _QWORD *v18; // r12
  __int64 v19; // rsi
  volatile signed __int64 *v20; // r14
  __int64 v22; // rdx
  __int64 v23; // r14
  __int64 v24; // rbx
  __int64 v25; // rsi
  __int64 v26; // [rsp+0h] [rbp-120h] BYREF
  __int64 v27; // [rsp+8h] [rbp-118h]
  unsigned __int64 v28; // [rsp+10h] [rbp-110h]
  char *v29; // [rsp+18h] [rbp-108h]
  volatile signed __int64 *v30; // [rsp+20h] [rbp-100h] BYREF
  volatile signed __int64 *v31; // [rsp+28h] [rbp-F8h]
  __int128 v32; // [rsp+30h] [rbp-F0h] BYREF
  __int64 v33; // [rsp+40h] [rbp-E0h] BYREF
  __int64 v34; // [rsp+50h] [rbp-D0h] BYREF
  volatile signed __int64 *v35; // [rsp+58h] [rbp-C8h]
  __int128 *v36; // [rsp+60h] [rbp-C0h]
  __int64 (__fastcall *v37)(); // [rsp+68h] [rbp-B8h]
  __int64 *v38; // [rsp+70h] [rbp-B0h]
  __int64 (__fastcall *v39)(); // [rsp+78h] [rbp-A8h]
  __int64 v40; // [rsp+80h] [rbp-A0h]
  __int64 v41; // [rsp+88h] [rbp-98h] BYREF
  void *v42; // [rsp+90h] [rbp-90h]
  __int64 v43; // [rsp+98h] [rbp-88h]
  signed __int64 v44; // [rsp+A0h] [rbp-80h]
  const char *v45; // [rsp+A8h] [rbp-78h]
  __int64 v46; // [rsp+B0h] [rbp-70h]
  __int64 v47; // [rsp+B8h] [rbp-68h]
  void *v48; // [rsp+C0h] [rbp-60h]
  __int64 v49; // [rsp+C8h] [rbp-58h]
  __int64 v50; // [rsp+D0h] [rbp-50h]
  char *v51; // [rsp+D8h] [rbp-48h]
  __int64 v52; // [rsp+E0h] [rbp-40h]
  volatile signed __int64 *v53; // [rsp+E8h] [rbp-38h]
  _BYTE v54[41]; // [rsp+F7h] [rbp-29h] BYREF

  v2 = a2; /*0x100ae36c4*/
  v32 = 0; /*0x100ae36cd*/
  v33 = 0; /*0x100ae36d4*/
  v4 = (volatile signed __int64 **)&v34; /*0x100ae36df*/
  codexmate_lib::core::relay::codex_thread_visibility::find_reference_instructions::h37bba5dc08e7bf70(&v34); /*0x100ae36e6*/
  v5 = v34; /*0x100ae36eb*/
  if ( __OFSUB__(-v34, 1) ) /*0x100ae36f5*/
  {
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 2u ) /*0x100ae370c*/
    {
      v47 = 3; /*0x100ae3712*/
      v48 = &unk_10167D5D6; /*0x100ae3721*/
      v49 = 51; /*0x100ae3725*/
      v51 = "[AiMaMi][patch-instructions] no donor thread found, using fallback instructionsFollow the user's instructions carefully. Respond helpfully and use tools when appropriate."; /*0x100ae3734*/
      v52 = 159; /*0x100ae3738*/
      v41 = 0; /*0x100ae3740*/
      v42 = &unk_10167D5D6; /*0x100ae374b*/
      v43 = 51; /*0x100ae3752*/
      v44 = 0; /*0x100ae375d*/
      v45 = "src/core/relay/codex_thread_visibility.rs"; /*0x100ae376c*/
      v46 = 41; /*0x100ae3770*/
      v50 = 0x17CA00000001LL; /*0x100ae3782*/
      v4 = (volatile signed __int64 **)v54; /*0x100ae3786*/
      a2 = &v41; /*0x100ae378a*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v54, &v41); /*0x100ae3791*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v4, a2); /*0x100ae3796*/
    v6 = 91; /*0x100ae379b*/
    v7 = (volatile signed __int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(91, 1); /*0x100ae37ab*/
    if ( !v7 ) /*0x100ae37b3*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 91); /*0x100ae3c08*/
    v8 = v7; /*0x100ae37b9*/
    memcpy( /*0x100ae37cb*/
      (void *)v7,
      "Follow the user's instructions carefully. Respond helpfully and use tools when appropriate.",
      0x5Bu);
    v5 = 91; /*0x100ae37d0*/
  }
  else
  {
    v8 = v35; /*0x100ae37d7*/
    v6 = (signed __int64)v36; /*0x100ae37de*/
  }
  v40 = v5; /*0x100ae37e5*/
  v53 = v8; /*0x100ae37f6*/
  v9 = codexmate_lib::core::relay::codex_thread_visibility::collect_active_rollout_paths::h780c6fe0c7fd3d31(&v26, v2); /*0x100ae37fa*/
  v10 = v27; /*0x100ae37ff*/
  v11 = v28; /*0x100ae3806*/
  *(_QWORD *)&v32 = v28; /*0x100ae380d*/
  if ( v28 <= 7 ) /*0x100ae3818*/
  {
    v12 = codexmate_lib::core::relay::codex_thread_visibility::patch_instructions_rollouts_serial::hc0a99dbc7539a887( /*0x100ae3905*/
            v27,
            v28,
            (const void *)v8,
            v6);
    v14 = v15; /*0x100ae3908*/
  }
  else
  {
    v41 = 0; /*0x100ae381e*/
    v43 = 4; /*0x100ae3829*/
    v44 = 0; /*0x100ae3834*/
    v46 = 1; /*0x100ae383c*/
    v47 = (__int64)&anon_338d2c24067067f307e22096ebff88a8_0; /*0x100ae384b*/
    v48 = nullptr; /*0x100ae384f*/
    v50 = 0; /*0x100ae3857*/
    LOWORD(v52) = 0; /*0x100ae385f*/
    rayon_core::registry::Registry::new::hb2bc9749757c351b(&v34, &v41); /*0x100ae3876*/
    if ( v34 == 3 ) /*0x100ae388d*/
    {
      v34 = (__int64)v35; /*0x100ae3893*/
      v41 = v10; /*0x100ae389e*/
      v42 = (void *)v11; /*0x100ae38a5*/
      v43 = (__int64)v53; /*0x100ae38b0*/
      v44 = v6; /*0x100ae38b7*/
      v12 = rayon_core::registry::Registry::in_worker::h2de2e7125a06bdc1(v35 + 16, &v41, v9); /*0x100ae38c7*/
      v14 = v13; /*0x100ae38ca*/
      _$LT$rayon_core..thread_pool..ThreadPool$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha4b9412e9655f829(&v34); /*0x100ae38d4*/
      if ( !_InterlockedDecrement64((volatile signed __int64 *)v34) ) /*0x100ae38e0*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hde6f8c6f6f4c92ed(&v34); /*0x100ae38ed*/
    }
    else
    {
      v30 = (volatile signed __int64 *)v34; /*0x100ae3ab6*/
      v31 = v35; /*0x100ae3abd*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100ae3ad2*/
      {
        v34 = (__int64)&v30; /*0x100ae3adf*/
        v35 = (volatile signed __int64 *)_$LT$rayon_core..ThreadPoolBuildError$u20$as$u20$core..fmt..Display$GT$::fmt::h6af0e53b3a5f6f50; /*0x100ae3aed*/
        v47 = 2; /*0x100ae3af4*/
        v48 = &unk_10167D5D6; /*0x100ae3b03*/
        v49 = 51; /*0x100ae3b07*/
        v51 = (char *)&unk_1017CB917; /*0x100ae3b16*/
        v52 = (__int64)&v34; /*0x100ae3b1a*/
        v41 = 0; /*0x100ae3b1e*/
        v42 = &unk_10167D5D6; /*0x100ae3b29*/
        v43 = 51; /*0x100ae3b30*/
        v44 = 0; /*0x100ae3b3b*/
        v45 = "src/core/relay/codex_thread_visibility.rs"; /*0x100ae3b4a*/
        v46 = 41; /*0x100ae3b4e*/
        v50 = 0x181900000001LL; /*0x100ae3b60*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v54, &v41); /*0x100ae3b6f*/
      }
      v12 = codexmate_lib::core::relay::codex_thread_visibility::patch_instructions_rollouts_serial::hc0a99dbc7539a887( /*0x100ae3b86*/
              v10,
              v11,
              (const void *)v53,
              v6);
      v14 = v22; /*0x100ae3b89*/
      if ( (unsigned int)v30 >= 2 && ((unsigned __int8)v31 & 3) == 1 ) /*0x100ae3ba8*/
      {
        v29 = (char *)v31 - 1; /*0x100ae3bb2*/
        v23 = *(volatile signed __int64 *)((char *)v31 - 1); /*0x100ae3bb9*/
        v24 = *(volatile signed __int64 *)((char *)v31 + 7); /*0x100ae3bbd*/
        if ( *(_QWORD *)v24 ) /*0x100ae3bc1*/
          (*(void (__fastcall **)(__int64, double))v24)(v23, v9); /*0x100ae3bcc*/
        v25 = *(_QWORD *)(v24 + 8); /*0x100ae3bce*/
        if ( v25 ) /*0x100ae3bd5*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v25, *(_QWORD *)(v24 + 16)); /*0x100ae3bde*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, 24, 8); /*0x100ae3bf4*/
      }
    }
  }
  *((_QWORD *)&v32 + 1) = v12; /*0x100ae390b*/
  v33 = v14; /*0x100ae3912*/
  if ( v12 && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u ) /*0x100ae3930*/
  {
    v34 = (__int64)&v32 + 8; /*0x100ae3944*/
    v35 = (volatile signed __int64 *)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100ae3952*/
    v36 = &v32; /*0x100ae3960*/
    v37 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100ae3967*/
    v38 = &v33; /*0x100ae396e*/
    v39 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100ae3975*/
    v47 = 3; /*0x100ae397c*/
    v48 = &unk_10167D5D6; /*0x100ae398b*/
    v49 = 51; /*0x100ae398f*/
    v51 = (char *)&unk_1017CB151; /*0x100ae399e*/
    v52 = (__int64)&v34; /*0x100ae39a9*/
    v41 = 0; /*0x100ae39ad*/
    v42 = &unk_10167D5D6; /*0x100ae39b8*/
    v43 = 51; /*0x100ae39bf*/
    v44 = 0; /*0x100ae39ca*/
    v45 = "src/core/relay/codex_thread_visibility.rs"; /*0x100ae39d9*/
    v46 = 41; /*0x100ae39dd*/
    v50 = 0x17E900000001LL; /*0x100ae39ef*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v54, &v41); /*0x100ae39fe*/
  }
  *(_QWORD *)(a1 + 16) = v33; /*0x100ae3a0a*/
  *(_OWORD *)a1 = v32; /*0x100ae3a20*/
  v16 = v27; /*0x100ae3a23*/
  v17 = v28; /*0x100ae3a2a*/
  if ( v28 ) /*0x100ae3a34*/
  {
    v18 = (_QWORD *)(v27 + 8); /*0x100ae3a36*/
    do /*0x100ae3a47*/
    {
      v19 = *(v18 - 1); /*0x100ae3a49*/
      if ( v19 ) /*0x100ae3a51*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v18, v19, 1); /*0x100ae3a5c*/
      v18 += 3; /*0x100ae3a40*/
      --v17; /*0x100ae3a44*/
    }
    while ( v17 ); /*0x100ae3a47*/
  }
  v20 = v53; /*0x100ae3a6d*/
  if ( v26 ) /*0x100ae3a71*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, 24 * v26, 8); /*0x100ae3a83*/
  if ( v40 ) /*0x100ae3a92*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v40, 1); /*0x100ae3a9c*/
  return a1; /*0x100ae3aa4*/
}