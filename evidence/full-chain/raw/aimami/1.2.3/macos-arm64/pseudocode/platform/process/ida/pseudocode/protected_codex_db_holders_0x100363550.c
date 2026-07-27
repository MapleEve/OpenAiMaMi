// __ZN13codexmate_lib8platform7process26protected_codex_db_holders @ 0x100363550
__int64 __fastcall codexmate_lib::platform::process::protected_codex_db_holders::he3dae47a4922cb14(__int64 a1)
{
  __int64 v1; // rcx
  unsigned __int64 v2; // r15
  __int64 v3; // r12
  __int64 result; // rax
  _QWORD v5[5]; // [rsp+0h] [rbp-80h] BYREF
  __int64 v6; // [rsp+28h] [rbp-58h] BYREF
  __int64 v7; // [rsp+30h] [rbp-50h]
  __int64 v8; // [rsp+38h] [rbp-48h]
  unsigned __int64 v9; // [rsp+40h] [rbp-40h] BYREF
  __int64 v10; // [rsp+48h] [rbp-38h]
  __int64 v11; // [rsp+50h] [rbp-30h]

  codexmate_lib::platform::process::codex_app_bundle_path::h67ee45f90aea67f0(&v9); /*0x100363575*/
  v2 = v9; /*0x10036357a*/
  if ( __OFSUB__(-(__int64)v9, 1) ) /*0x100363581*/
  {
    v9 = 0x8000000000000000LL; /*0x100363586*/
  }
  else
  {
    v3 = v10; /*0x10036358c*/
    codexmate_lib::platform::process::codex_macos_bundle_main_executable::h65e006069063e1dd(&v9, v10, v11, v1); /*0x10036359b*/
    if ( v2 ) /*0x1003635a3*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v2, 1); /*0x1003635b0*/
  }
  codexmate_lib::platform::process::list_codex_db_holder_processes::hfeff6cd4dce4f953(&v6); /*0x1003635b9*/
  v5[0] = v7; /*0x1003635d1*/
  v5[1] = v7; /*0x1003635d5*/
  v5[2] = v6; /*0x1003635d9*/
  v5[3] = v7 + 32 * v8; /*0x1003635dd*/
  v5[4] = &v9; /*0x1003635e1*/
  result = ((__int64 (__fastcall *)(__int64, _QWORD *))alloc::vec::in_place_collect::from_iter_in_place::hd0040981d22448c4)( /*0x1003635ec*/
             a1,
             v5);
  if ( v9 != 0x8000000000000000LL ) /*0x1003635f8*/
  {
    if ( v9 ) /*0x1003635fd*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v9, 1); /*0x100363608*/
  }
  return result; /*0x10036360d*/
}