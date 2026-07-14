// mac 1.1.8 BEHAVIORAL-BACKEND start_activation_watcher node 0x100417900 depth=0
// start_activation_watcher_owner
_QWORD *__fastcall codexmate_lib::platform::single_instance::start_activation_watcher::ha683dfe4af908047(
        _QWORD *a1,
        const void *a2)
{
  __int64 v2; // rax
  int v3; // ecx
  __int64 v4; // rax
  _QWORD __dst[23]; // [rsp+8h] [rbp-128h] BYREF
  int v7[2]; // [rsp+C0h] [rbp-70h] BYREF
  __int64 v8; // [rsp+D8h] [rbp-58h] BYREF
  __int64 v9; // [rsp+E0h] [rbp-50h]
  __int64 v10; // [rsp+E8h] [rbp-48h]
  __int64 v11; // [rsp+F0h] [rbp-40h]
  int v12[2]; // [rsp+F8h] [rbp-38h] BYREF
  volatile signed __int64 *v13; // [rsp+100h] [rbp-30h] BYREF
  _QWORD v14[5]; // [rsp+108h] [rbp-28h] BYREF

  codexmate_lib::platform::single_instance::activation_request_path::h25d20e85da257612(&v8); /*0x10041791c*/
  codexmate_lib::platform::single_instance::prepare_activation_dir::hdcba006b9aaea08f(__dst, v9, v10); /*0x100417936*/
  if ( __OFSUB__(0, __dst[0]) ) /*0x10041793d*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10041794a*/
    v2 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x18u, 8u); /*0x100417959*/
    if ( !v2 ) /*0x100417961*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100417a9c*/
    *(_QWORD *)v2 = 1; /*0x100417967*/
    *(_QWORD *)(v2 + 8) = 1; /*0x10041796e*/
    *(_BYTE *)(v2 + 16) = 0; /*0x100417976*/
    v11 = v2; /*0x10041797a*/
    if ( _InterlockedIncrement64((volatile signed __int64 *)v2) <= 0 ) /*0x100417982*/
      BUG(); /*0x100417aca*/
    __dst[21] = v10; /*0x100417996*/
    __dst[20] = v9; /*0x1004179a2*/
    __dst[19] = v8; /*0x1004179a9*/
    __dst[22] = v2; /*0x1004179b0*/
    memcpy(__dst, a2, 0x98u); /*0x1004179bf*/
    *(_QWORD *)v7 = 0x8000000000000000LL; /*0x1004179c4*/
    std::thread::lifecycle::spawn_unchecked::h44c9f123aef0529a((int)v12, (int)v7, 0, v3, 0, 0, __dst); /*0x1004179dc*/
    if ( !*(_QWORD *)v12 ) /*0x1004179ec*/
    {
      *(_QWORD *)v12 = v13; /*0x100417aa3*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100417ac5*/
        (__int64)"failed to spawn thread",
        22,
        (__int64)v12,
        (__int64)&off_10152F5A0,
        (__int64)&off_10152F208);
    }
    _$LT$std..sys..thread..unix..Thread$u20$as$u20$core..ops..drop..Drop$GT$::drop::h533be1924c487c06(v14); /*0x100417a0a*/
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)v12) ) /*0x100417a13*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h302336a593597939((__int64 *)v12); /*0x100417a1d*/
    if ( !_InterlockedDecrement64(v13) ) /*0x100417a26*/
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h4316fdb44971ee38(&v13); /*0x100417a2f*/
    a1[1] = v11; /*0x100417a38*/
    *a1 = 0x8000000000000000LL; /*0x100417a3c*/
  }
  else
  {
    a1[2] = __dst[2]; /*0x100417a48*/
    v4 = __dst[0]; /*0x100417a4c*/
    a1[1] = __dst[1]; /*0x100417a5a*/
    *a1 = v4; /*0x100417a5e*/
    if ( v8 ) /*0x100417a68*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100417a72*/
    core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h37a69480f082a44f(a2); /*0x100417a7a*/
  }
  return a1; /*0x100417a82*/
}