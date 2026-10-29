// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::codex_thread_visibility::observe_provider_convergence_target_default::hef91745c0c436119; addr: 0x1004b32f0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
void __fastcall codexmate_lib::core::relay::codex_thread_visibility::observe_provider_convergence_target_default::hef91745c0c436119(
        unsigned __int64 *a1,
        _QWORD *a2)
{
  unsigned __int64 v3; // r13
  const void *v4; // r15
  size_t v5; // r14
  __int64 v6; // rdx
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // rax
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // r14
  __int64 v13; // rsi
  __int64 v14; // rdi
  bool v15; // zf
  unsigned __int64 v16; // rax
  _BYTE v17[96]; // [rsp+8h] [rbp-2C8h] BYREF
  _QWORD v18[12]; // [rsp+68h] [rbp-268h] BYREF
  _DWORD v19[24]; // [rsp+C8h] [rbp-208h] BYREF
  __int64 __dst; // [rsp+128h] [rbp-1A8h] BYREF
  _QWORD v21[20]; // [rsp+130h] [rbp-1A0h] BYREF
  _QWORD v22[9]; // [rsp+1D0h] [rbp-100h] BYREF
  __int64 v23; // [rsp+218h] [rbp-B8h] BYREF
  _QWORD v24[12]; // [rsp+220h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+280h] [rbp-50h]
  __int64 v26; // [rsp+288h] [rbp-48h]
  __int64 v27; // [rsp+290h] [rbp-40h]
  __int64 v28; // [rsp+298h] [rbp-38h]
  __int64 v29; // [rsp+2A0h] [rbp-30h]

  if ( __OFSUB__(0, a2[6]) ) /*0x1004b3313*/
  {
    v3 = 0x8000000000000001LL; /*0x1004b3319*/
LABEL_3:
    *a1 = v3; /*0x1004b331c*/
    return; /*0x1004b331c*/
  }
  v4 = (const void *)a2[7]; /*0x1004b3331*/
  v5 = a2[8]; /*0x1004b3338*/
  codexmate_lib::core::relay::codex_thread_visibility::rollout_history::resolve::h705afcdb05904caf(&__dst); /*0x1004b3349*/
  if ( __OFSUB__(-__dst, 1) ) /*0x1004b335b*/
  {
    if ( v5 ) /*0x1004b34d3*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&__dst, __dst, v6); /*0x1004b34d9*/
      v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1); /*0x1004b34eb*/
      if ( !v14 ) /*0x1004b34f1*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v5); /*0x1004b34ff*/
    }
    else
    {
      v14 = 1; /*0x1004b3667*/
    }
    a1[1] = v5; /*0x1004b366c*/
    a1[2] = v14; /*0x1004b3670*/
    memcpy((void *)v14, v4, v5); /*0x1004b367a*/
    a1[3] = v5; /*0x1004b367f*/
    v3 = 0x8000000000000002LL; /*0x1004b3683*/
    goto LABEL_3; /*0x1004b3687*/
  }
  if ( __dst != 0x8000000000000001LL ) /*0x1004b336e*/
  {
    if ( __dst ) /*0x1004b3373*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21[0], __dst, 1); /*0x1004b3381*/
    codexmate_lib::core::relay::codex_thread_visibility::convergence_anchors_for_thread::h50c5127b22cc79d9(&__dst); /*0x1004b339d*/
    v7 = __dst; /*0x1004b33a2*/
    qmemcpy(v18, v21, sizeof(v18)); /*0x1004b33bc*/
    if ( __dst == 0x8000000000000000LL ) /*0x1004b33c2*/
    {
      qmemcpy(v19, v18, sizeof(v19)); /*0x1004b33db*/
    }
    else
    {
      v29 = v21[16]; /*0x1004b350b*/
      v28 = v21[15]; /*0x1004b3516*/
      v27 = v21[14]; /*0x1004b3521*/
      v26 = v21[13]; /*0x1004b3533*/
      v25 = v21[12]; /*0x1004b3537*/
      qmemcpy(v24, v18, sizeof(v24)); /*0x1004b354e*/
      v23 = __dst; /*0x1004b3551*/
      codexmate_lib::core::relay::codex_thread_visibility::rollout_provider_anchors::h285dddb3fde87d00( /*0x1004b356c*/
        v19,
        &v23,
        v4,
        v5);
      if ( v7 ) /*0x1004b3574*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24[0], v7, 1); /*0x1004b3585*/
      if ( v24[5] ) /*0x1004b3594*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24[6], v24[5], 1); /*0x1004b359f*/
      if ( v24[11] != 0x8000000000000000LL && v24[11] ) /*0x1004b35b0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v24[11], 1); /*0x1004b35bb*/
    }
    if ( v19[0] == 11 ) /*0x1004b35c7*/
    {
      qmemcpy(v22, &v19[2], sizeof(v22)); /*0x1004b35dc*/
      if ( v22[0] != 0x8000000000000001LL ) /*0x1004b35ea*/
      {
        qmemcpy(a1, v22, 0x48u); /*0x1004b35fb*/
        return; /*0x1004b35fb*/
      }
    }
    else
    {
      qmemcpy(v17, v19, sizeof(v17)); /*0x1004b3619*/
      codexmate_lib::core::relay::codex_thread_visibility::RolloutProviderReadFailure::from_core_error::h2b8019703dc33854( /*0x1004b3626*/
        &v22[1],
        v17);
    }
    v15 = LOBYTE(v22[1]) == 0; /*0x1004b3632*/
    a1[3] = v22[4]; /*0x1004b3639*/
    v16 = v22[2]; /*0x1004b363d*/
    a1[2] = v22[3]; /*0x1004b364b*/
    a1[1] = v16; /*0x1004b364f*/
    if ( v15 ) /*0x1004b3653*/
      v3 = 0x8000000000000004LL; /*0x1004b365e*/
    else
      v3 = 0x8000000000000005LL; /*0x1004b3655*/
    goto LABEL_3; /*0x1004b3659*/
  }
  v8 = v21[0]; /*0x1004b33e3*/
  v18[0] = v21[0]; /*0x1004b33ea*/
  v23 = 0; /*0x1004b33f1*/
  v24[0] = 1; /*0x1004b33fc*/
  v24[1] = 0; /*0x1004b3407*/
  v21[1] = 1610612768; /*0x1004b3412*/
  __dst = (__int64)&v23; /*0x1004b3424*/
  v21[0] = &anon_19faa30eef2c8845dad92cc05fa4a600_1278; /*0x1004b3432*/
  if ( (unsigned __int8)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0( /*0x1004b3447*/
                          v18,
                          &__dst) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004b36ad*/
      &anon_19faa30eef2c8845dad92cc05fa4a600_1279,
      55,
      v17,
      &anon_19faa30eef2c8845dad92cc05fa4a600_1291,
      &anon_19faa30eef2c8845dad92cc05fa4a600_1281);
  a1[3] = v24[1]; /*0x1004b345b*/
  v9 = v23; /*0x1004b345f*/
  a1[2] = v24[0]; /*0x1004b346d*/
  a1[1] = v9; /*0x1004b3471*/
  *a1 = 0x8000000000000005LL; /*0x1004b3479*/
  if ( (v8 & 3) == 1 ) /*0x1004b3485*/
  {
    v10 = v8 - 1; /*0x1004b348b*/
    v11 = *(_QWORD *)(v8 - 1); /*0x1004b348f*/
    v12 = *(_QWORD *)(v8 + 7); /*0x1004b3493*/
    if ( *(_QWORD *)v12 ) /*0x1004b3497*/
      (*(void (__fastcall **)(__int64))v12)(v11); /*0x1004b34a2*/
    v13 = *(_QWORD *)(v12 + 8); /*0x1004b34a4*/
    if ( v13 ) /*0x1004b34ab*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v13, *(_QWORD *)(v12 + 16)); /*0x1004b34b4*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, 24, 8); /*0x1004b34c6*/
  }
}
