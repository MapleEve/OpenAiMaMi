// codexmate_lib::core::relay::codex_thread_visibility::patch_relay_thread_instructions_excluding
// owner_ea: 0x100770980, size: 0x5f3
// source: ida decompile (mac 1.2.6 IDB, hexrays_ready=true)
// binary_sha256: 1.2.6-mac-arm64
// session: delta-1.2.4-to-1.2.6-mac-fullchain-v2
// notes: Renamed successor of patch_relay_thread_instructions (1.2.4->1.2.6). Rayon parallel + serial fallback

// 1.2.4→1.2.6 delta 重命名后继(removed: patch_relay_thread_instructions): 使用 rayon 并行修补 relay 线程指令。调用 find_reference_instructions→patch_instructions_rollouts_serial。caller: reconcile_threads_with_progress。源码: src/core/relay/codex_thread_visibility.rs。A-level owner for patch_relay_thread_instructions_excluding
double __fastcall codexmate_lib::core::relay::codex_thread_visibility::patch_relay_thread_instructions_excluding::h4e3c2158ef5c3bef(
        __int64 a1,
        __int64 *a2,
        __int64 a3)
{
  __int64 *v4; // rbx
  double result; // xmm0_8
  volatile signed __int64 **v7; // rdi
  __int64 v8; // r13
  volatile signed __int64 *v9; // rax
  volatile signed __int64 *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // r12
  char *v13; // rbx
  __int64 v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // r12
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rbx
  unsigned __int64 v20; // r14
  _QWORD *v21; // r15
  __int64 v22; // rsi
  __int64 v23; // r14
  _QWORD v24[5]; // [rsp+0h] [rbp-140h] BYREF
  __int64 v25; // [rsp+28h] [rbp-118h] BYREF
  __int64 v26; // [rsp+30h] [rbp-110h]
  unsigned __int64 v27; // [rsp+38h] [rbp-108h]
  volatile signed __int64 *v28; // [rsp+40h] [rbp-100h] BYREF
  volatile signed __int64 *v29; // [rsp+48h] [rbp-F8h]
  __int128 v30; // [rsp+50h] [rbp-F0h] BYREF
  __int64 v31; // [rsp+60h] [rbp-E0h] BYREF
  __int64 v32; // [rsp+70h] [rbp-D0h] BYREF
  volatile signed __int64 *v33; // [rsp+78h] [rbp-C8h]
  __int128 *v34; // [rsp+80h] [rbp-C0h]
  __int64 (__fastcall *v35)(); // [rsp+88h] [rbp-B8h]
  __int64 *v36; // [rsp+90h] [rbp-B0h]
  __int64 (__fastcall *v37)(); // [rsp+98h] [rbp-A8h]
  __int64 v38; // [rsp+A0h] [rbp-A0h] BYREF
  char *v39; // [rsp+A8h] [rbp-98h]
  __int64 v40; // [rsp+B0h] [rbp-90h]
  __int64 v41; // [rsp+B8h] [rbp-88h]
  const char *v42; // [rsp+C0h] [rbp-80h]
  __int64 v43; // [rsp+C8h] [rbp-78h]
  __int64 v44; // [rsp+D0h] [rbp-70h]
  void *v45; // [rsp+D8h] [rbp-68h]
  __int64 v46; // [rsp+E0h] [rbp-60h]
  __int64 v47; // [rsp+E8h] [rbp-58h]
  char *v48; // [rsp+F0h] [rbp-50h]
  __int64 v49; // [rsp+F8h] [rbp-48h]
  __int64 v50; // [rsp+100h] [rbp-40h]
  __int64 v51; // [rsp+108h] [rbp-38h]
  _BYTE v52[41]; // [rsp+117h] [rbp-29h] BYREF

  v4 = a2;
  result = 0.0;
  v30 = 0;
  v31 = 0;
  v7 = (volatile signed __int64 **)&v32;
  codexmate_lib::core::relay::codex_thread_visibility::find_reference_instructions::hb66743830ff2bfc2(&v32);
  v50 = v32;
  if ( __OFSUB__(-v32, 1) )
  {
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 2u )
    {
      v44 = 3;
      v45 = &anon_3f0cee2931c58d8d540c26f0254bc451_522;
      v46 = 51;
      v48 = "[AiMaMi][patch-instructions] no donor thread found, using fallback instructionsFollow the user's instructions carefully. Respond helpfully and use tools when appropriate.rollout changed while private reasoning cleanup was streaming; retry required";
      v49 = 159;
      v38 = 0;
      v39 = (char *)&anon_3f0cee2931c58d8d540c26f0254bc451_522;
      v40 = 51;
      v41 = 0;
      v42 = "src/core/relay/codex_thread_visibility.rs";
      v43 = 41;
      v47 = 0x20DB00000001LL;
      v7 = (volatile signed __int64 **)v52;
      a2 = &v38;
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v52, &v38);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, a2);
    v8 = 91;
    v9 = (volatile signed __int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(91, 1);
    if ( !v9 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 91);
    v10 = v9;
    memcpy(
      (void *)v9,
      "Follow the user's instructions carefully. Respond helpfully and use tools when appropriate.rollout changed while private reasoning cleanup was streaming; retry required",
      0x5Bu);
    v50 = 91;
  }
  else
  {
    v10 = v33;
    v8 = (__int64)v34;
  }
  v51 = (__int64)v10;
  codexmate_lib::core::relay::codex_thread_visibility::collect_active_rollout_paths::h9bb933b8b6b262a7(&v38, v4);
  v24[0] = v39;
  v24[1] = v39;
  v24[2] = v38;
  v24[3] = &v39[24 * v40];
  v24[4] = a3;
  ((void (__fastcall *)(__int64 *, _QWORD *))alloc::vec::in_place_collect::from_iter_in_place::h5118d6e8b537915f)(
    &v25,
    v24);
  v12 = v26;
  v13 = (char *)v27;
  *(_QWORD *)&v30 = v27;
  if ( v27 <= 7 )
  {
    v14 = codexmate_lib::core::relay::codex_thread_visibility::patch_instructions_rollouts_serial::h7ca8f2efdc119cd4(
            v26,
            v27,
            v10,
            v8);
    v16 = v17;
  }
  else
  {
    v38 = 0;
    v40 = 4;
    v41 = 0;
    v43 = 1;
    v44 = (__int64)&anon_c267236184b514dd3bb615f659186bd4_3;
    v45 = nullptr;
    v47 = 0;
    LOWORD(v49) = 0;
    rayon_core::registry::Registry::new::h986a0e8e90377841(&v32, &v38, v11);
    if ( v32 == 3 )
    {
      v32 = (__int64)v33;
      v38 = v12;
      v39 = v13;
      v40 = v51;
      v41 = v8;
      v14 = rayon_core::registry::Registry::in_worker::hb7947cd0631114c4(v33 + 16, &v38);
      v16 = v15;
      _$LT$rayon_core..thread_pool..ThreadPool$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha4b9412e9655f829(&v32);
      if ( !_InterlockedDecrement64((volatile signed __int64 *)v32) )
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::hde6f8c6f6f4c92ed(&v32);
    }
    else
    {
      v28 = (volatile signed __int64 *)v32;
      v29 = v33;
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
      {
        v32 = (__int64)&v28;
        v33 = (volatile signed __int64 *)_$LT$rayon_core..ThreadPoolBuildError$u20$as$u20$core..fmt..Display$GT$::fmt::h6af0e53b3a5f6f50;
        v44 = 2;
        v45 = &anon_3f0cee2931c58d8d540c26f0254bc451_522;
        v46 = 51;
        v48 = (char *)&unk_101860C90;
        v49 = (__int64)&v32;
        v38 = 0;
        v39 = (char *)&anon_3f0cee2931c58d8d540c26f0254bc451_522;
        v40 = 51;
        v41 = 0;
        v42 = "src/core/relay/codex_thread_visibility.rs";
        v43 = 41;
        v47 = 0x212D00000001LL;
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v52, &v38);
      }
      v14 = codexmate_lib::core::relay::codex_thread_visibility::patch_instructions_rollouts_serial::h7ca8f2efdc119cd4(
              v12,
              v13,
              v51,
              v8);
      v16 = v18;
      core::ptr::drop_in_place$LT$rayon_core..ThreadPoolBuildError$GT$::h2454a216012a46c4(v28, v29);
    }
  }
  *((_QWORD *)&v30 + 1) = v14;
  v31 = v16;
  if ( v14 && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u )
  {
    v32 = (__int64)&v30 + 8;
    v33 = (volatile signed __int64 *)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    v34 = &v30;
    v35 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    v36 = &v31;
    v37 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
    v44 = 3;
    v45 = &anon_3f0cee2931c58d8d540c26f0254bc451_522;
    v46 = 51;
    v48 = (char *)&unk_10186171C;
    v49 = (__int64)&v32;
    v38 = 0;
    v39 = (char *)&anon_3f0cee2931c58d8d540c26f0254bc451_522;
    v40 = 51;
    v41 = 0;
    v42 = "src/core/relay/codex_thread_visibility.rs";
    v43 = 41;
    v47 = 0x20FD00000001LL;
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v52, &v38);
  }
  *(_QWORD *)(a1 + 16) = v31;
  *(_OWORD *)a1 = v30;
  v19 = v26;
  v20 = v27;
  if ( v27 )
  {
    v21 = (_QWORD *)(v26 + 8);
    do
    {
      v22 = *(v21 - 1);
      if ( v22 )
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v21, v22, 1);
      v21 += 3;
      --v20;
    }
    while ( v20 );
  }
  v23 = v51;
  if ( v25 )
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, 24 * v25, 8);
  if ( v50 )
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v50, 1);
  return result;
}

