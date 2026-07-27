// __ZN13codexmate_lib4core5relay18router_unlock_auth22ensure_auth_for_router @ 0x10051fd50 | 基线 same-set
_BYTE *__fastcall codexmate_lib::core::relay::router_unlock_auth::ensure_auth_for_router::h48dde466d6c9786e(
        _BYTE *a1,
        __int64 a2,
        double a3)
{
  __int64 v3; // rax
  char v5; // r15
  __int64 v6; // r14
  __int64 v7; // r15
  char v8; // r14
  char v9; // r15
  _QWORD __src[22]; // [rsp+0h] [rbp-180h] BYREF
  _QWORD __dst[26]; // [rsp+B0h] [rbp-D0h] BYREF

  v3 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h1799bcb22c1ee820(a2); /*0x10051fd6b*/
  if ( v3 ) /*0x10051fd73*/
  {
    *(_QWORD *)a1 = 2; /*0x10051fd75*/
    *((_QWORD *)a1 + 1) = v3; /*0x10051fd7c*/
    return a1; /*0x10051fd7c*/
  }
  codexmate_lib::core::auth::load_auth_file::h495f6935c70eecba(__src, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40)); /*0x10051fdac*/
  if ( __src[0] == 0x8000000000000001LL ) /*0x10051fdbd*/
  {
    a3 = core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&__src[1]); /*0x10051fdc6*/
LABEL_31:
    if ( !(unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::has_residue::h9c8693d593a80163(a2) /*0x10051ff42*/
      || (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h209d941b27fe5ba8(a2) == 1
      || (codexmate_lib::core::relay::router_unlock_auth::cleanup::hb4afc95ddd21e582(__src, a2),
          v7 = __src[0],
          __src[0] == 11) )
    {
      codexmate_lib::core::relay::router_unlock_auth::install_virtual_unlock_auth::h1fbbeee5d38cb27b(__src, a2, 0, a3); /*0x10051ff50*/
      if ( LODWORD(__src[0]) == 11 ) /*0x10051ff5c*/
      {
        a1[8] = 1; /*0x10051ff5e*/
        *(_QWORD *)a1 = 11; /*0x10051ff62*/
      }
      else
      {
        qmemcpy(a1, __src, 0x60u); /*0x10051ff7d*/
      }
    }
    else
    {
      v8 = __src[1]; /*0x10051ff85*/
      memcpy(a1 + 9, (char *)&__src[1] + 1, 0x57u); /*0x10051ff9d*/
      *(_QWORD *)a1 = v7; /*0x10051ffa2*/
      a1[8] = v8; /*0x10051ffa5*/
    }
    return a1; /*0x10051ff69*/
  }
  memcpy(__dst, __src, 0xB0u); /*0x10051fde6*/
  v5 = codexmate_lib::core::relay::router_unlock_auth::auth_is_usable_real_oauth::h1af7e13263bef1f7(__dst); /*0x10051fdf3*/
  if ( __dst[0] != 0x8000000000000000LL && __dst[0] ) /*0x10051fe05*/
    a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], __dst[0], 1); /*0x10051fe13*/
  if ( __dst[3] != 0x8000000000000000LL && __dst[3] ) /*0x10051fe27*/
    a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[4], __dst[3], 1); /*0x10051fe35*/
  if ( __dst[6] != 0x8000000000000000LL && __dst[6] ) /*0x10051fe49*/
    a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[7], __dst[6], 1); /*0x10051fe57*/
  if ( __dst[9] != 0x8000000000000000LL && __dst[9] ) /*0x10051fe6b*/
    a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[10], __dst[9], 1); /*0x10051fe76*/
  if ( __dst[12] != 0x8000000000000000LL && __dst[12] ) /*0x10051fe87*/
    a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[13], __dst[12], 1); /*0x10051fe92*/
  if ( __dst[15] != 0x8000000000000000LL && __dst[15] ) /*0x10051fea3*/
    a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[16], __dst[15], 1); /*0x10051feae*/
  if ( __dst[18] != 0x8000000000000000LL && __dst[18] ) /*0x10051febf*/
    a3 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[19], __dst[18], 1); /*0x10051feca*/
  if ( !v5 ) /*0x10051fed2*/
    goto LABEL_31; /*0x10051fed2*/
  if ( (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::has_residue::h9c8693d593a80163(a2) /*0x10051fefa*/
    && (codexmate_lib::core::relay::router_unlock_auth::cleanup::hb4afc95ddd21e582(__src, a2),
        v6 = __src[0],
        __src[0] != 11) )
  {
    v9 = __src[1]; /*0x10051ffae*/
    memcpy(a1 + 9, (char *)&__src[1] + 1, 0x57u); /*0x10051ffc6*/
    *(_QWORD *)a1 = v6; /*0x10051ffcb*/
    a1[8] = v9; /*0x10051ffce*/
  }
  else
  {
    a1[8] = 0; /*0x10051ff00*/
    *(_QWORD *)a1 = 11; /*0x10051ff04*/
  }
  return a1; /*0x10051fd83*/
}