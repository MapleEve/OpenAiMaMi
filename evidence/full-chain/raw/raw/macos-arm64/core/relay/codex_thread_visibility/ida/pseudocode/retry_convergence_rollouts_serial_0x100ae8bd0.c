// __ZN13codexmate_lib4core5relay23codex_thread_visibility33retry_convergence_rollouts_serial @ 0x100ae8bd0 | 基线 same-set
double __fastcall codexmate_lib::core::relay::codex_thread_visibility::retry_convergence_rollouts_serial::h94c518a5fe0b9c74(
        _QWORD *a1,
        _QWORD *a2,
        unsigned __int64 a3,
        const void *a4,
        unsigned __int64 *a5,
        __int64 *a6,
        __int64 a7)
{
  int v7; // eax
  __int64 v9; // rcx
  __int64 v10; // r12
  double result; // xmm0_8
  __int64 v12; // rax
  __int64 v13; // r15
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r14
  _QWORD v19[12]; // [rsp+8h] [rbp-178h] BYREF
  _QWORD v20[3]; // [rsp+68h] [rbp-118h] BYREF
  _QWORD v21[3]; // [rsp+80h] [rbp-100h] BYREF
  _BYTE v22[120]; // [rsp+98h] [rbp-E8h] BYREF
  _QWORD v23[4]; // [rsp+110h] [rbp-70h] BYREF
  unsigned __int64 *v24; // [rsp+130h] [rbp-50h]
  const void *v25; // [rsp+138h] [rbp-48h]
  unsigned __int64 v26; // [rsp+140h] [rbp-40h]
  __int64 v27; // [rsp+148h] [rbp-38h]
  int v28; // [rsp+154h] [rbp-2Ch]

  v24 = a5; /*0x100ae8be7*/
  v25 = a4; /*0x100ae8beb*/
  v26 = a3; /*0x100ae8bef*/
  v9 = a6[1]; /*0x100ae8bf9*/
  v10 = a6[2]; /*0x100ae8bfd*/
  LOBYTE(v7) = 1; /*0x100ae8c01*/
  v28 = v7; /*0x100ae8c03*/
  v27 = v9; /*0x100ae8c1c*/
  codexmate_lib::core::relay::codex_thread_visibility::restore_convergence_rollout_patches::h7e8a955e3d08ada5( /*0x100ae8c23*/
    v19,
    "thread-converge-parallelrolloutrollout changed while router migration was streaming; retry required",
    24,
    v9,
    v10);
  if ( LODWORD(v19[0]) == 11 ) /*0x100ae8c2f*/
  {
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100ae8c43*/
    {
      v19[0] = a7; /*0x100ae8c4d*/
      v19[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100ae8c5b*/
      *(_QWORD *)&v22[48] = 2; /*0x100ae8c62*/
      *(_QWORD *)&v22[56] = &unk_10167D5D6; /*0x100ae8c74*/
      *(_QWORD *)&v22[64] = 51; /*0x100ae8c7b*/
      *(_QWORD *)&v22[80] = &unk_1017CB376; /*0x100ae8c8d*/
      *(_QWORD *)&v22[88] = v19; /*0x100ae8c94*/
      *(_QWORD *)v22 = 0; /*0x100ae8c9b*/
      *(_QWORD *)&v22[8] = &unk_10167D5D6; /*0x100ae8ca6*/
      *(_QWORD *)&v22[16] = 51; /*0x100ae8cad*/
      *(_QWORD *)&v22[24] = 0; /*0x100ae8cb8*/
      *(_QWORD *)&v22[32] = "src/core/relay/codex_thread_visibility.rs"; /*0x100ae8cca*/
      *(_QWORD *)&v22[40] = 41; /*0x100ae8cd1*/
      *(_QWORD *)&v22[72] = 0x49200000001LL; /*0x100ae8ce6*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v23, v22); /*0x100ae8cf8*/
    }
    result = codexmate_lib::core::relay::codex_thread_visibility::patch_convergence_rollouts_serial::heb77275c47a759f1( /*0x100ae8d13*/
               (unsigned __int64 *)v22,
               a2,
               v26,
               v25,
               v24);
    v12 = *(_QWORD *)&v22[24]; /*0x100ae8d18*/
    v19[0] = *(_QWORD *)v22; /*0x100ae8d2d*/
    v19[1] = *(_QWORD *)&v22[8]; /*0x100ae8d34*/
    v19[2] = *(_QWORD *)&v22[16]; /*0x100ae8d42*/
    if ( *(_QWORD *)&v22[24] == 11 ) /*0x100ae8d4d*/
    {
      v20[0] = v19[0]; /*0x100ae8d61*/
      v20[1] = v19[1]; /*0x100ae8d68*/
      v20[2] = v19[2]; /*0x100ae8d76*/
      codexmate_lib::core::relay::codex_thread_visibility::verify_patched_convergence_rollouts::h2d31580b734281bd( /*0x100ae8d96*/
        a1,
        a2,
        v26,
        v25,
        v24,
        v20);
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(a7); /*0x100ae8d9f*/
      v13 = v27; /*0x100ae8da7*/
      if ( v10 ) /*0x100ae8dab*/
      {
        v14 = v27; /*0x100ae8db1*/
        do /*0x100ae8dcf*/
        {
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..AppliedConvergenceRolloutPatch$GT$::h591335b9f819025e(v14); /*0x100ae8dc3*/
          v14 += 120; /*0x100ae8dc8*/
          --v10; /*0x100ae8dcc*/
        }
        while ( v10 ); /*0x100ae8dcf*/
      }
    }
    else
    {
      qmemcpy(a1 + 4, &v22[32], 0x58u); /*0x100ae8e8f*/
      a1[2] = v19[2]; /*0x100ae8e99*/
      v17 = v19[0]; /*0x100ae8e9d*/
      a1[1] = v19[1]; /*0x100ae8eab*/
      *a1 = v17; /*0x100ae8eaf*/
      a1[3] = v12; /*0x100ae8eb3*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(a7); /*0x100ae8ebb*/
      v13 = v27; /*0x100ae8ec3*/
      if ( v10 ) /*0x100ae8ec7*/
      {
        v18 = v27; /*0x100ae8ec9*/
        do /*0x100ae8edf*/
        {
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..AppliedConvergenceRolloutPatch$GT$::h591335b9f819025e(v18); /*0x100ae8ed3*/
          v18 += 120; /*0x100ae8ed8*/
          --v10; /*0x100ae8edc*/
        }
        while ( v10 ); /*0x100ae8edf*/
      }
    }
    if ( *a6 ) /*0x100ae8ee1*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, 120 * *a6, 8); /*0x100ae8ef5*/
  }
  else
  {
    qmemcpy(v22, v19, 0x60u); /*0x100ae8dec*/
    v23[0] = a7; /*0x100ae8df3*/
    v23[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100ae8dfe*/
    v23[2] = v22; /*0x100ae8e02*/
    v23[3] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100ae8e06*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v21, &unk_1017CB319, v23); /*0x100ae8e1c*/
    a1[6] = v21[2]; /*0x100ae8e28*/
    v15 = v21[0]; /*0x100ae8e2c*/
    a1[5] = v21[1]; /*0x100ae8e3a*/
    a1[4] = v15; /*0x100ae8e3e*/
    v16 = *a6; /*0x100ae8e42*/
    a1[1] = a6[1]; /*0x100ae8e49*/
    a1[2] = a6[2]; /*0x100ae8e51*/
    *a1 = v16; /*0x100ae8e55*/
    a1[3] = 10; /*0x100ae8e59*/
    v28 = 0; /*0x100ae8e61*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v22); /*0x100ae8e6f*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(a7); /*0x100ae8e78*/
  }
  return result; /*0x100ae8efa*/
}