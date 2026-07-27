// __ZN13codexmate_lib8commands7hotspot19get_hotspot_enabled @ 0x1006fd5e0 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::hotspot::get_hotspot_enabled::h8e3704e0ef7761d3(__int64 a1, __int64 *a2)
{
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  unsigned int v7; // r12d
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // r12
  char v11; // r15
  int v12; // ecx
  _QWORD *v13; // rsi
  char v14; // r15
  __int64 v15; // rdx
  _QWORD __dst[18]; // [rsp+0h] [rbp-E0h] BYREF
  char v18; // [rsp+90h] [rbp-50h]
  __int64 v19; // [rsp+98h] [rbp-48h] BYREF
  __int64 v20; // [rsp+A0h] [rbp-40h]
  __int64 v21; // [rsp+A8h] [rbp-38h]
  _BYTE v22[7]; // [rsp+B0h] [rbp-30h]
  _BYTE v23[41]; // [rsp+B7h] [rbp-29h] BYREF

  v4 = *a2; /*0x1006fd5fa*/
  if ( !*a2 ) /*0x1006fd5fa*/
    v4 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(a2); /*0x1006fd6f4*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v4); /*0x1006fd606*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 )
  {
    v7 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v4, a2, v5, v6); /*0x1006fd701*/
    LOBYTE(v7) = v7 ^ 1; /*0x1006fd704*/
    if ( *((_BYTE *)a2 + 8) ) /*0x1006fd712*/
      goto LABEL_5; /*0x1006fd718*/
  }
  else
  {
    v7 = 0; /*0x1006fd622*/
    if ( *((_BYTE *)a2 + 8) )
    {
LABEL_5:
      v19 = 0; /*0x1006fd63b*/
      v20 = 1; /*0x1006fd643*/
      v21 = 0; /*0x1006fd64b*/
      __dst[2] = 1610612768; /*0x1006fd653*/
      __dst[0] = &v19; /*0x1006fd662*/
      __dst[1] = &off_101969DD0; /*0x1006fd670*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              __dst) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1016727F0, 55, v23, &unk_101969E38, &off_101969E00); /*0x1006fd79d*/
      v8 = v19; /*0x1006fd69d*/
      v9 = v7; /*0x1006fd6a1*/
      v10 = v20; /*0x1006fd6a4*/
      v11 = v21; /*0x1006fd6a8*/
      *(_DWORD *)v22 = *(_DWORD *)((char *)&v21 + 1); /*0x1006fd6b0*/
      *(_DWORD *)&v22[3] = HIDWORD(v21); /*0x1006fd6b6*/
      if ( !(_BYTE)v9
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               0x7FFFFFFFFFFFFFFFLL,
                               &std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6,
                               v9) )
      {
        *((_BYTE *)a2 + 8) = 1; /*0x1006fd7b1*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x1006fd6cc*/
      *(_QWORD *)a1 = v8; /*0x1006fd6d1*/
      *(_QWORD *)(a1 + 8) = v10; /*0x1006fd6d4*/
      *(_BYTE *)(a1 + 16) = v11; /*0x1006fd6d8*/
      v12 = *(_DWORD *)&v22[3]; /*0x1006fd6df*/
      *(_DWORD *)(a1 + 17) = *(_DWORD *)v22; /*0x1006fd6e2*/
      *(_DWORD *)(a1 + 20) = v12; /*0x1006fd6e6*/
      return a1; /*0x1006fd6ea*/
    }
  }
  v13 = a2 + 2; /*0x1006fd71e*/
  codexmate_lib::core::repository::Repository::load_settings::hfb581409936e6334(__dst); /*0x1006fd729*/
  v14 = v18; /*0x1006fd72e*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h5b0c78a37d6585d2(__dst, v13); /*0x1006fd73a*/
  *(_BYTE *)(a1 + 8) = v14; /*0x1006fd73f*/
  *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1006fd751*/
  if ( !(_BYTE)v7 /*0x1006fd7ba*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           __dst,
                           v13,
                           v15,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *((_BYTE *)a2 + 8) = 1; /*0x1006fd7c3*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*a2); /*0x1006fd765*/
  return a1; /*0x1006fd76d*/
}