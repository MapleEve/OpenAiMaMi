// __ZN13codexmate_lib4core5relay7manager12RelayManager53reconcile_current_mode_locked_from_with_writer_policy @ 0x10027eb30
__int64 __fastcall codexmate_lib::core::relay::manager::RelayManager::reconcile_current_mode_locked_from_with_writer_policy::hf7a5f317757b1502(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5)
{
  int v6; // r14d
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // r10
  __int64 v12; // r9
  __int64 v13; // r11
  __int64 v14; // rdx
  __int64 v15; // r13
  __int64 v16; // r8
  __int64 v17; // rdi
  unsigned __int64 v18; // r15
  __int64 v19; // rsi
  _QWORD *v20; // r12
  __int64 v21; // rsi
  _QWORD *v22; // r12
  __int64 v23; // rsi
  void *v24; // r12
  __int64 v25; // r14
  void *v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rax
  _QWORD *v29; // r14
  void *v30; // rax
  __int64 v31; // rax
  __int64 v33; // [rsp+30h] [rbp-7E0h] BYREF
  _BYTE v34[96]; // [rsp+38h] [rbp-7D8h] BYREF
  _BYTE __dst[640]; // [rsp+98h] [rbp-778h] BYREF
  _BYTE v36[292]; // [rsp+318h] [rbp-4F8h] BYREF
  unsigned __int8 v37; // [rsp+43Ch] [rbp-3D4h]
  char v38[3]; // [rsp+43Dh] [rbp-3D3h] BYREF
  __int64 v39; // [rsp+440h] [rbp-3D0h] BYREF
  _QWORD v40[12]; // [rsp+448h] [rbp-3C8h] BYREF
  _BYTE __src[640]; // [rsp+4A8h] [rbp-368h] BYREF
  _QWORD v42[3]; // [rsp+728h] [rbp-E8h] BYREF
  _QWORD v43[12]; // [rsp+740h] [rbp-D0h] BYREF
  _QWORD v44[2]; // [rsp+7A0h] [rbp-70h] BYREF
  void *v45; // [rsp+7B0h] [rbp-60h]
  __int64 v46; // [rsp+7B8h] [rbp-58h]
  __int64 v47; // [rsp+7C0h] [rbp-50h]
  __int64 v48; // [rsp+7C8h] [rbp-48h]
  __int64 v49; // [rsp+7D0h] [rbp-40h]
  __int64 v50; // [rsp+7D8h] [rbp-38h]
  char v51; // [rsp+7E7h] [rbp-29h] BYREF

  LODWORD(v50) = a5; /*0x10027eb44*/
  v6 = a3; /*0x10027eb4b*/
  v44[0] = a3; /*0x10027eb54*/
  v44[1] = a4; /*0x10027eb58*/
  codexmate_lib::core::relay::manager::RelayManager::snapshot::hb8b0c579b6636555(v36, a2); /*0x10027eb63*/
  codexmate_lib::core::relay::manager::RelayManager::transition_paths::h8ef4521bfd1dad53(&v39); /*0x10027eb73*/
  qmemcpy(v43, v40, sizeof(v43)); /*0x10027eb98*/
  if ( __OFSUB__(-v39, 1) ) /*0x10027eb82*/
  {
    qmemcpy(a1, v43, 0x60u); /*0x10027ebac*/
  }
  else
  {
    memcpy(__dst, __src, sizeof(__dst)); /*0x10027ebc7*/
    qmemcpy(v34, v43, sizeof(v34)); /*0x10027ebe2*/
    v33 = v39; /*0x10027ebe5*/
    v51 = v37 ^ 1; /*0x10027ebf6*/
    v42[0] = v44; /*0x10027ebfd*/
    v42[1] = a2; /*0x10027ec04*/
    v42[2] = &v33; /*0x10027ec12*/
    v43[0] = a2; /*0x10027ec19*/
    v43[1] = &v33; /*0x10027ec20*/
    v43[2] = &v51; /*0x10027ec2b*/
    codexmate_lib::core::relay::router_transition::run_with_writer_policy::h1219123683360807( /*0x10027ec69*/
      (unsigned int)&v39,
      (unsigned int)&v33,
      v37 ^ 1,
      0,
      (unsigned __int8)v50,
      v6,
      a4,
      (__int64)v42,
      (__int64)v43,
      a2,
      (__int64)v38);
    v8 = v40[0]; /*0x10027ec75*/
    v9 = v40[1]; /*0x10027ec7c*/
    v10 = v40[2]; /*0x10027ec83*/
    v11 = v40[3]; /*0x10027ec8a*/
    v12 = v40[4]; /*0x10027ec91*/
    v13 = v40[5]; /*0x10027ec98*/
    v14 = v40[6]; /*0x10027ec9f*/
    v15 = v40[7]; /*0x10027eca6*/
    v16 = v40[8]; /*0x10027ecad*/
    v17 = v40[9]; /*0x10027ecb4*/
    v18 = v40[10]; /*0x10027ecbb*/
    if ( v39 == 11 ) /*0x10027ecc6*/
    {
      if ( v40[0] == 2 ) /*0x10027eccc*/
      {
        v17 = 8; /*0x10027ecce*/
        v18 = 0; /*0x10027ecd3*/
        v19 = v40[5]; /*0x10027ecd6*/
        v13 = v40[6]; /*0x10027ecd9*/
        v16 = 0; /*0x10027ecdc*/
      }
      else
      {
        v19 = v40[4]; /*0x10027ed15*/
        v12 = v40[3]; /*0x10027ed18*/
        v15 = v40[6]; /*0x10027ed1b*/
        v11 = v40[2]; /*0x10027ed1e*/
        v10 = v40[1]; /*0x10027ed21*/
        LOBYTE(v9) = v40[0]; /*0x10027ed24*/
      }
      v48 = v19; /*0x10027ed27*/
      v49 = v13; /*0x10027ed2b*/
      v46 = v16; /*0x10027ed2f*/
      v45 = (void *)v17; /*0x10027ed33*/
      v43[0] = v10; /*0x10027ed37*/
      v47 = v11; /*0x10027ed3e*/
      v43[1] = v11; /*0x10027ed42*/
      v50 = v12; /*0x10027ed49*/
      v43[2] = v12; /*0x10027ed4d*/
      if ( (v9 & 1) != 0 ) /*0x10027ed56*/
      {
        if ( v15 ) /*0x10027ed5b*/
        {
          v20 = (_QWORD *)(v49 + 8); /*0x10027ed61*/
          do /*0x10027ed77*/
          {
            v21 = *(v20 - 1); /*0x10027ed79*/
            if ( v21 ) /*0x10027ed81*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v20, v21, 1); /*0x10027ed8c*/
            v20 += 3; /*0x10027ed70*/
            --v15; /*0x10027ed74*/
          }
          while ( v15 ); /*0x10027ed77*/
        }
      }
      else if ( v15 ) /*0x10027ed96*/
      {
        v22 = (_QWORD *)(v49 + 8); /*0x10027ed9c*/
        do /*0x10027edb7*/
        {
          v23 = *(v22 - 1); /*0x10027edb9*/
          if ( v23 ) /*0x10027edc1*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v22, v23, 1); /*0x10027edcc*/
          v22 += 3; /*0x10027edb0*/
          --v15; /*0x10027edb4*/
        }
        while ( v15 ); /*0x10027edb7*/
      }
      if ( v48 ) /*0x10027edda*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, 24 * v48, 8); /*0x10027eded*/
      v24 = v45; /*0x10027edfe*/
      v39 = (__int64)v45; /*0x10027ee06*/
      v40[1] = v46; /*0x10027ee11*/
      v40[0] = v45; /*0x10027ee18*/
      v40[2] = (char *)v45 + 24 * v18; /*0x10027ee1f*/
      if ( v18 > v10 - v50 ) /*0x10027ee2d*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10027ef7f*/
          v43,
          v50,
          v18,
          8,
          24,
          v12);
        v47 = v43[1]; /*0x10027ef8b*/
        v50 = v43[2]; /*0x10027ef96*/
      }
      v25 = v50; /*0x10027ee33*/
      v26 = (void *)(v47 + 24 * v50); /*0x10027ee3f*/
      v27 = (__int64)v24; /*0x10027ee43*/
      memcpy(v26, v24, 24 * v18); /*0x10027ee49*/
      v43[2] = v25 + v18; /*0x10027ee51*/
      if ( v46 ) /*0x10027ee5f*/
      {
        v27 = 24 * v46; /*0x10027ee65*/
        v26 = v24; /*0x10027ee6e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, 24 * v46, 8); /*0x10027ee71*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v26, v27); /*0x10027ee76*/
      v28 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x10027ee85*/
      if ( !v28 ) /*0x10027ee8d*/
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10027efa9*/
      v29 = (_QWORD *)v28; /*0x10027ee93*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 8); /*0x10027ee96*/
      v30 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(20, 1); /*0x10027eea5*/
      if ( !v30 ) /*0x10027eead*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 20); /*0x10027efba*/
      qmemcpy(v30, "router_postcondition", 20); /*0x10027eecb*/
      *v29 = 20; /*0x10027eed5*/
      v29[1] = v30; /*0x10027eedc*/
      v29[2] = 20; /*0x10027eee0*/
      a1[9] = v43[2]; /*0x10027eeef*/
      v31 = v43[0]; /*0x10027eef3*/
      a1[8] = v43[1]; /*0x10027ef01*/
      a1[7] = v31; /*0x10027ef05*/
      a1[1] = 1; /*0x10027ef09*/
      a1[2] = (__int64)v29; /*0x10027ef11*/
      a1[3] = 1; /*0x10027ef15*/
      a1[4] = 0; /*0x10027ef1d*/
      a1[5] = 8; /*0x10027ef25*/
      a1[6] = 0; /*0x10027ef2d*/
      *a1 = 11; /*0x10027ef35*/
    }
    else
    {
      *a1 = v39; /*0x10027ece1*/
      a1[1] = v8; /*0x10027ece4*/
      a1[2] = v9; /*0x10027ece8*/
      a1[3] = v10; /*0x10027ecec*/
      a1[4] = v11; /*0x10027ecf0*/
      a1[5] = v12; /*0x10027ecf4*/
      a1[6] = v13; /*0x10027ecf8*/
      a1[7] = v14; /*0x10027ecfc*/
      a1[8] = v15; /*0x10027ed00*/
      a1[9] = v16; /*0x10027ed04*/
      a1[10] = v17; /*0x10027ed08*/
      a1[11] = v18; /*0x10027ed0c*/
    }
    core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(&v33); /*0x10027ef43*/
  }
  return core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::hb48d2dacecbefd00(v36); /*0x10027ef54*/
}