// __ZN13codexmate_lib8platform15single_instance24start_activation_watcher @ 0x10035a8d0 | 基线 same-set
unsigned __int64 *__fastcall codexmate_lib::platform::single_instance::start_activation_watcher::h6d311a45054e369b(
        unsigned __int64 *a1,
        const void *a2)
{
  __int64 v3; // r12
  __int64 v4; // rsi
  __int64 v5; // rax
  __int64 v6; // r15
  int v7; // ecx
  unsigned __int64 v8; // rax
  unsigned __int64 __dst[23]; // [rsp+10h] [rbp-130h] BYREF
  int v11[2]; // [rsp+C8h] [rbp-78h] BYREF
  __int64 v12; // [rsp+E0h] [rbp-60h]
  unsigned __int64 v13; // [rsp+E8h] [rbp-58h] BYREF
  __int64 v14; // [rsp+F0h] [rbp-50h]
  __int64 v15; // [rsp+F8h] [rbp-48h]
  int v16[2]; // [rsp+100h] [rbp-40h] BYREF
  __int64 v17; // [rsp+108h] [rbp-38h]

  codexmate_lib::platform::single_instance::activation_request_path::hb58f9774144637eb((__int64)&v13); /*0x10035a8ee*/
  v3 = v14; /*0x10035a8f3*/
  v4 = v14; /*0x10035a905*/
  codexmate_lib::platform::single_instance::prepare_activation_dir::h902d2372d45b757d(__dst, v14, v15); /*0x10035a908*/
  if ( __OFSUB__(0, __dst[0]) ) /*0x10035a90f*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, v4); /*0x10035a91c*/
    v5 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x10035a92b*/
    if ( !v5 ) /*0x10035a933*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x10035aa49*/
    v6 = v5; /*0x10035a939*/
    *(_QWORD *)v5 = 1; /*0x10035a93c*/
    *(_QWORD *)(v5 + 8) = 1; /*0x10035a943*/
    *(_BYTE *)(v5 + 16) = 0; /*0x10035a94b*/
    v12 = v5; /*0x10035a94f*/
    if ( _InterlockedIncrement64((volatile signed __int64 *)v5) <= 0 ) /*0x10035a957*/
      BUG(); /*0x10035aa77*/
    __dst[21] = v15; /*0x10035a96b*/
    __dst[20] = v14; /*0x10035a97a*/
    __dst[19] = v13; /*0x10035a981*/
    __dst[22] = v5; /*0x10035a988*/
    memcpy(__dst, a2, 0x98u); /*0x10035a997*/
    *(_QWORD *)v11 = 0x8000000000000000LL; /*0x10035a99c*/
    std::thread::lifecycle::spawn_unchecked::h07dbd2c55aa4384f((int)v16, (int)v11, 0, v7, 0, 0, __dst); /*0x10035a9b4*/
    if ( !*(_QWORD *)v16 ) /*0x10035a9c4*/
    {
      *(_QWORD *)v16 = v17; /*0x10035aa50*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10035aa72*/
        "failed to spawn threadaimami-single-instance.lock",
        22,
        v16,
        &off_1019620A8,
        &off_1019617A8);
    }
    core::ptr::drop_in_place$LT$std..thread..join_handle..JoinHandle$LT$$LP$$RP$$GT$$GT$::h9bda91b0eda32292(v16); /*0x10035a9de*/
    a1[1] = v6; /*0x10035a9e3*/
    *a1 = 0x8000000000000000LL; /*0x10035a9e7*/
  }
  else
  {
    a1[2] = __dst[2]; /*0x10035a9f3*/
    v8 = __dst[0]; /*0x10035a9f7*/
    a1[1] = __dst[1]; /*0x10035aa05*/
    *a1 = v8; /*0x10035aa09*/
    if ( v13 ) /*0x10035aa13*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v13, 1); /*0x10035aa1d*/
    core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(a2); /*0x10035aa25*/
  }
  return a1; /*0x10035aa2d*/
}