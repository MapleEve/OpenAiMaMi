// __ZN13codexmate_lib4core5relay23codex_thread_visibility33patch_convergence_rollouts_serial @ 0x100ae6fb0 | 基线 same-set
double __fastcall codexmate_lib::core::relay::codex_thread_visibility::patch_convergence_rollouts_serial::heb77275c47a759f1(
        unsigned __int64 *a1,
        _QWORD *a2,
        unsigned __int64 a3,
        const void *a4,
        unsigned __int64 *a5)
{
  __int64 v5; // rbx
  __int64 v6; // r13
  _QWORD *v7; // r12
  unsigned __int64 v8; // r14
  __int64 v9; // rax
  unsigned __int64 v10; // rsi
  __int64 v11; // r14
  const void *v12; // rdx
  bool v13; // zf
  const void *v14; // rbx
  unsigned __int64 *v15; // r13
  __int64 v16; // r15
  unsigned __int64 v17; // r15
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // r14
  _QWORD *v20; // rbx
  __int64 v21; // rsi
  double result; // xmm0_8
  __int64 v23; // rsi
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rsi
  __int64 v27; // r14
  unsigned __int64 *v28; // rdx
  unsigned __int64 v29; // rax
  __int64 v30; // rbx
  _BYTE v31[120]; // [rsp+8h] [rbp-2D8h] BYREF
  _BYTE v32[120]; // [rsp+80h] [rbp-260h] BYREF
  _QWORD __dst[24]; // [rsp+F8h] [rbp-1E8h] BYREF
  _QWORD __src[24]; // [rsp+1B8h] [rbp-128h] BYREF
  const void *v35; // [rsp+278h] [rbp-68h]
  unsigned __int64 *v36; // [rsp+280h] [rbp-60h]
  __int64 v37; // [rsp+288h] [rbp-58h] BYREF
  __int64 v38; // [rsp+290h] [rbp-50h]
  __int64 v39; // [rsp+298h] [rbp-48h]
  unsigned __int64 v40; // [rsp+2A0h] [rbp-40h] BYREF
  __int64 v41; // [rsp+2A8h] [rbp-38h]
  unsigned __int64 v42; // [rsp+2B0h] [rbp-30h]

  v5 = 192 * a3; /*0x100ae6fcb*/
  if ( a3 > 0xAAAAAAAAAAAAAALL ) /*0x100ae6fdc*/
  {
    v6 = 0; /*0x100ae6fde*/
    goto LABEL_3; /*0x100ae6fde*/
  }
  v7 = a2; /*0x100ae6fec*/
  if ( v5 ) /*0x100ae6ff2*/
  {
    v35 = a4; /*0x100ae6ff4*/
    v36 = a5; /*0x100ae6ff8*/
    v8 = a3; /*0x100ae6fff*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100ae7002*/
    v6 = 8; /*0x100ae7007*/
    v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 8); /*0x100ae7015*/
    if ( !v9 ) /*0x100ae701d*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6, v5); /*0x100ae6fe1*/
    a3 = v8; /*0x100ae701f*/
    v10 = v8; /*0x100ae7022*/
    a5 = v36; /*0x100ae7028*/
    a4 = v35; /*0x100ae702c*/
  }
  else
  {
    v9 = 8; /*0x100ae7032*/
    v10 = 0; /*0x100ae7037*/
  }
  v40 = v10; /*0x100ae7039*/
  v41 = v9; /*0x100ae703d*/
  v42 = 0; /*0x100ae7041*/
  v37 = 0; /*0x100ae7049*/
  v38 = 8; /*0x100ae7051*/
  v39 = 0; /*0x100ae7059*/
  if ( a3 ) /*0x100ae7064*/
  {
    v36 = a1; /*0x100ae706a*/
    v11 = 72 * a3; /*0x100ae7072*/
    v12 = a4; /*0x100ae7080*/
    while ( 1 ) /*0x100ae70dc*/
    {
      v14 = v12; /*0x100ae70dc*/
      v15 = a5; /*0x100ae70df*/
      codexmate_lib::core::relay::codex_thread_visibility::patch_convergence_rollout_target::h126d5ccf125eac50( /*0x100ae70e5*/
        (char *)__dst,
        v7,
        v12,
        (size_t)a5);
      if ( __dst[0] == 0x8000000000000000LL ) /*0x100ae70f1*/
        break; /*0x100ae70f1*/
      memcpy(__src, __dst, sizeof(__src)); /*0x100ae710a*/
      if ( __src[9] != 0x8000000000000000LL ) /*0x100ae7116*/
      {
        _$LT$codexmate_lib..core..relay..codex_thread_visibility..AppliedConvergenceRolloutPatch$u20$as$u20$core..clone..Clone$GT$::clone::h523d68ed5c49ca83( /*0x100ae7129*/
          v31,
          &__src[9]);
        qmemcpy(v32, v31, sizeof(v32)); /*0x100ae713d*/
        v16 = v39; /*0x100ae7140*/
        if ( v39 == v37 ) /*0x100ae7148*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h1b084316e5dd5683(&v37); /*0x100ae714e*/
        qmemcpy((void *)(v38 + 120 * v16), v32, 0x78u); /*0x100ae7167*/
        v39 = v16 + 1; /*0x100ae716d*/
      }
      v17 = v42; /*0x100ae7171*/
      if ( v42 == v40 ) /*0x100ae7179*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::he120a85c2e37736d(&v40); /*0x100ae7183*/
      v7 += 9; /*0x100ae7090*/
      memmove((void *)(v41 + 192 * v17), __src, 0xC0u); /*0x100ae70ac*/
      v42 = v17 + 1; /*0x100ae70b4*/
      v13 = v11 == 72; /*0x100ae70b8*/
      v11 -= 72; /*0x100ae70b8*/
      a5 = v15; /*0x100ae70c6*/
      v12 = v14; /*0x100ae70c9*/
      if ( v13 ) /*0x100ae70cc*/
      {
        v27 = v39; /*0x100ae7287*/
        v28 = v36; /*0x100ae728f*/
        v36[2] = v42; /*0x100ae7293*/
        v29 = v40; /*0x100ae7297*/
        v28[1] = v41; /*0x100ae729f*/
        *v28 = v29; /*0x100ae72a3*/
        v28[3] = 11; /*0x100ae72a6*/
        if ( v27 ) /*0x100ae72b1*/
        {
          v30 = v38; /*0x100ae72b3*/
          do /*0x100ae72cf*/
          {
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..AppliedConvergenceRolloutPatch$GT$::h591335b9f819025e(v30); /*0x100ae72c3*/
            v30 += 120; /*0x100ae72c8*/
            --v27; /*0x100ae72cc*/
          }
          while ( v27 ); /*0x100ae72cf*/
        }
        goto LABEL_35; /*0x100ae72cf*/
      }
    }
    qmemcpy(&__src[3], &__dst[1], 0x60u); /*0x100ae71c4*/
    __src[2] = v39; /*0x100ae71cb*/
    __src[1] = v38; /*0x100ae71da*/
    __src[0] = v37; /*0x100ae71e1*/
    qmemcpy(v36, __src, 0x78u); /*0x100ae71f8*/
    v19 = v42; /*0x100ae71fb*/
    if ( v42 ) /*0x100ae7202*/
    {
      v20 = (_QWORD *)(v41 + 72); /*0x100ae7208*/
      do /*0x100ae721a*/
      {
        v21 = *(v20 - 9); /*0x100ae721c*/
        if ( v21 ) /*0x100ae7223*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v20 - 8), v21, 1); /*0x100ae722e*/
        v23 = *(v20 - 6); /*0x100ae7233*/
        if ( v23 ) /*0x100ae723a*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v20 - 5), v23, 1); /*0x100ae7245*/
        v24 = *(v20 - 3); /*0x100ae724a*/
        if ( v24 ) /*0x100ae7251*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v20 - 2), v24, 1); /*0x100ae725c*/
        if ( *v20 != 0x8000000000000000LL ) /*0x100ae7264*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..codex_thread_visibility..AppliedConvergenceRolloutPatch$GT$::h591335b9f819025e(v20); /*0x100ae7269*/
        v20 += 24; /*0x100ae7210*/
        --v19; /*0x100ae7217*/
      }
      while ( v19 ); /*0x100ae721a*/
    }
    if ( v40 ) /*0x100ae7277*/
    {
      v25 = v41; /*0x100ae7279*/
      v26 = 192 * v40; /*0x100ae7281*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v26, 8); /*0x100ae7285*/
    }
  }
  else
  {
    a1[2] = v42; /*0x100ae7191*/
    v18 = v40; /*0x100ae7195*/
    a1[1] = v41; /*0x100ae719d*/
    *a1 = v18; /*0x100ae71a1*/
    a1[3] = 11; /*0x100ae71a4*/
LABEL_35:
    if ( v37 ) /*0x100ae72d8*/
    {
      v25 = v38; /*0x100ae72da*/
      v26 = 120 * v37; /*0x100ae72de*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v26, 8); /*0x100ae72e2*/
    }
  }
  return result; /*0x100ae72ec*/
}