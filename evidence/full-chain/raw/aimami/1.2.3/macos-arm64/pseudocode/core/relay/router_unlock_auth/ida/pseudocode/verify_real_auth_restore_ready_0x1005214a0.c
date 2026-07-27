// __ZN13codexmate_lib4core5relay18router_unlock_auth30verify_real_auth_restore_ready @ 0x1005214a0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::router_unlock_auth::verify_real_auth_restore_ready::hd6c33ff9eb693774(
        _QWORD *a1,
        __int64 a2,
        double a3)
{
  __int64 v3; // r14
  char v5; // r15
  __int64 v6; // r15
  unsigned __int8 v7; // al
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 *v10; // rdi
  __int64 v11; // rsi
  double v12; // xmm0_8
  __int64 v13; // r12
  __int64 v14; // r14
  char v15; // r15
  void *v16; // rax
  void *v17; // r14
  void *v18; // rax
  void *v19; // r14
  void *v20; // rax
  void *v21; // r14
  _QWORD __dst[22]; // [rsp+8h] [rbp-198h] BYREF
  __int64 __src[22]; // [rsp+B8h] [rbp-E8h] BYREF
  __int64 v25; // [rsp+168h] [rbp-38h]
  __int64 v26; // [rsp+170h] [rbp-30h]

  v3 = a2; /*0x1005214b4*/
  codexmate_lib::core::auth::load_auth_file::h495f6935c70eecba(__src, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40)); /*0x1005214d3*/
  if ( __src[0] == 0x8000000000000001LL ) /*0x1005214e4*/
  {
    a3 = core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&__src[1]); /*0x1005214ed*/
  }
  else
  {
    memcpy(__dst, __src, sizeof(__dst)); /*0x10052150d*/
    v5 = codexmate_lib::core::relay::router_unlock_auth::auth_is_usable_real_oauth::h1af7e13263bef1f7(__dst); /*0x10052151a*/
    if ( __dst[0] != 0x8000000000000000LL && __dst[0] ) /*0x10052152c*/
      a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], __dst[0], 1); /*0x10052153a*/
    if ( __dst[3] != 0x8000000000000000LL && __dst[3] ) /*0x10052154e*/
      a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[4], __dst[3], 1); /*0x10052155c*/
    if ( __dst[6] != 0x8000000000000000LL && __dst[6] ) /*0x100521570*/
      a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[7], __dst[6], 1); /*0x10052157e*/
    if ( __dst[9] != 0x8000000000000000LL && __dst[9] ) /*0x100521592*/
      a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[10], __dst[9], 1); /*0x1005215a0*/
    if ( __dst[12] != 0x8000000000000000LL && __dst[12] ) /*0x1005215b4*/
      a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[13], __dst[12], 1); /*0x1005215c2*/
    if ( __dst[15] != 0x8000000000000000LL && __dst[15] ) /*0x1005215d6*/
      a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[16], __dst[15], 1); /*0x1005215e4*/
    if ( __dst[18] != 0x8000000000000000LL && __dst[18] ) /*0x1005215f8*/
      a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[19], __dst[18], 1); /*0x100521606*/
    if ( v5 ) /*0x10052160e*/
      goto LABEL_83; /*0x10052160e*/
  }
  codexmate_lib::core::relay::legacy_virtual_auth::restorable_backup_auth::h9e0a67d19b88b522(__src); /*0x10052161e*/
  v6 = __src[0]; /*0x100521623*/
  if ( __src[0] != 0x8000000000000001LL ) /*0x10052162d*/
  {
    if ( (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::auth_is_usable_real_oauth::h1af7e13263bef1f7(__src) ) /*0x100521700*/
    {
      if ( v6 != 0x8000000000000000LL && v6 ) /*0x100521715*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[1], v6, 1); /*0x100521726*/
      if ( __src[3] != 0x8000000000000000LL && __src[3] ) /*0x10052173a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[4], __src[3], 1); /*0x100521748*/
      if ( __src[6] != 0x8000000000000000LL && __src[6] ) /*0x10052175c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[7], __src[6], 1); /*0x10052176a*/
      if ( __src[9] != 0x8000000000000000LL && __src[9] ) /*0x10052177e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[10], __src[9], 1); /*0x10052178c*/
      if ( __src[12] != 0x8000000000000000LL && __src[12] ) /*0x1005217a0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[13], __src[12], 1); /*0x1005217ab*/
      if ( __src[15] != 0x8000000000000000LL && __src[15] ) /*0x1005217bc*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[16], __src[15], 1); /*0x1005217c7*/
      if ( __src[18] != 0x8000000000000000LL && __src[18] ) /*0x1005217dc*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[19], __src[18], 1); /*0x1005217eb*/
      goto LABEL_83; /*0x1005217f0*/
    }
    if ( v6 != 0x8000000000000000LL && v6 ) /*0x10052185d*/
      a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[1], v6, 1); /*0x10052186e*/
    if ( __src[3] != 0x8000000000000000LL && __src[3] ) /*0x100521882*/
      a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[4], __src[3], 1); /*0x100521890*/
    if ( __src[6] != 0x8000000000000000LL && __src[6] ) /*0x1005218a4*/
      a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[7], __src[6], 1); /*0x1005218b2*/
    if ( __src[9] != 0x8000000000000000LL && __src[9] ) /*0x1005218c6*/
      a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[10], __src[9], 1); /*0x1005218d4*/
    if ( __src[12] != 0x8000000000000000LL && __src[12] ) /*0x1005218e8*/
      a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[13], __src[12], 1); /*0x1005218f3*/
    if ( __src[15] != 0x8000000000000000LL && __src[15] ) /*0x100521904*/
      a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[16], __src[15], 1); /*0x10052190f*/
    a2 = __src[18]; /*0x100521914*/
    if ( __src[18] != 0x8000000000000000LL && __src[18] ) /*0x100521924*/
      a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[19], __src[18], 1); /*0x100521933*/
  }
  v7 = codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h209d941b27fe5ba8(v3); /*0x100521636*/
  if ( v7 < 2u ) /*0x10052163d*/
  {
    if ( (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::marker_exists::h2162276b7b4c6489(v3) ) /*0x100521646*/
    {
      v8 = *(_QWORD *)(v3 + 584); /*0x100521653*/
      v9 = *(_QWORD *)(v3 + 592); /*0x10052165a*/
      v10 = __src; /*0x100521661*/
      v11 = v8; /*0x100521668*/
      v12 = codexmate_lib::core::relay::router_unlock_auth::read_marker::h8487a1125204f37a(__src, v8, v9); /*0x10052166e*/
      if ( __src[0] == 0x8000000000000000LL ) /*0x10052167a*/
        goto LABEL_90; /*0x10052167a*/
      v13 = __src[0]; /*0x100521680*/
      v26 = __src[1]; /*0x10052168e*/
      v14 = __src[3]; /*0x100521692*/
      v25 = __src[4]; /*0x1005216a0*/
      if ( (__src[7] & 1) == 0 ) /*0x1005216ab*/
      {
        if ( __src[0] ) /*0x1005219b8*/
        {
          v10 = (__int64 *)v26; /*0x1005219bf*/
          v11 = __src[0]; /*0x1005219c3*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, __src[0], 1); /*0x1005219c6*/
        }
        if ( v14 ) /*0x1005219ce*/
        {
          v10 = (__int64 *)v25; /*0x1005219d5*/
          v11 = v14; /*0x1005219d9*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v14, 1); /*0x1005219dc*/
        }
        goto LABEL_90; /*0x1005219dc*/
      }
      v10 = (__int64 *)v8; /*0x1005216b1*/
      v11 = v9; /*0x1005216b4*/
      v15 = codexmate_lib::core::relay::router_unlock_auth::backup_contains_usable_real_oauth::h2d0adfdb410430d2( /*0x1005216bc*/
              v8,
              v9,
              v12);
      if ( v13 ) /*0x1005216c2*/
      {
        v10 = (__int64 *)v26; /*0x1005216c9*/
        v11 = v13; /*0x1005216cd*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v13, 1); /*0x1005216d0*/
      }
      if ( v14 ) /*0x1005216d8*/
      {
        v10 = (__int64 *)v25; /*0x1005216df*/
        v11 = v14; /*0x1005216e3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v14, 1); /*0x1005216e6*/
      }
      if ( !v15 ) /*0x1005216ee*/
      {
LABEL_90:
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10, v11); /*0x1005219e1*/
        v20 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(144, 1); /*0x1005219f0*/
        if ( !v20 ) /*0x1005219f8*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 144); /*0x100521a4b*/
        v21 = v20; /*0x1005219fa*/
        memcpy(v20, &unk_1015FE891, 0x90u); /*0x100521a0c*/
        *a1 = 10; /*0x100521a11*/
        a1[1] = 144; /*0x100521a18*/
        a1[2] = v21; /*0x100521a20*/
        a1[3] = 144; /*0x100521a24*/
        return a1; /*0x100521a24*/
      }
    }
    else
    {
      v10 = *(__int64 **)(v3 + 584); /*0x10052193d*/
      v11 = *(_QWORD *)(v3 + 592); /*0x100521944*/
      if ( !(unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::backup_contains_usable_real_oauth::h2d0adfdb410430d2( /*0x100521952*/
                               v10,
                               v11,
                               a3) )
        goto LABEL_90; /*0x100521952*/
    }
LABEL_83:
    *a1 = 11; /*0x100521958*/
    return a1; /*0x10052195f*/
  }
  if ( v7 == 2 ) /*0x1005217fb*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v3, a2); /*0x100521801*/
    v16 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(119, 1); /*0x100521810*/
    if ( !v16 ) /*0x100521818*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 119); /*0x100521a5a*/
    v17 = v16; /*0x10052181e*/
    memcpy(v16, &unk_1015FE921, 0x77u); /*0x100521830*/
    *a1 = 10; /*0x100521835*/
    a1[1] = 119; /*0x10052183c*/
    a1[2] = v17; /*0x100521844*/
    a1[3] = 119; /*0x100521848*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v3, a2); /*0x100521964*/
    v18 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(110, 1); /*0x100521973*/
    if ( !v18 ) /*0x10052197b*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 110); /*0x100521a69*/
    v19 = v18; /*0x100521981*/
    memcpy(v18, &unk_1015FE998, 0x6Eu); /*0x100521993*/
    *a1 = 10; /*0x100521998*/
    a1[1] = 110; /*0x10052199f*/
    a1[2] = v19; /*0x1005219a7*/
    a1[3] = 110; /*0x1005219ab*/
  }
  return a1; /*0x100521a2f*/
}