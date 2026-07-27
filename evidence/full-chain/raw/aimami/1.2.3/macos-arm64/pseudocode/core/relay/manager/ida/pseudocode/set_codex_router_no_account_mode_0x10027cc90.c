// __ZN13codexmate_lib4core5relay7manager12RelayManager32set_codex_router_no_account_mode28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10027cc90 | 基线 same-set
__int64 *__fastcall codexmate_lib::core::relay::manager::RelayManager::set_codex_router_no_account_mode::_$u7b$$u7b$closure$u7d$$u7d$::h85337424ec03525b(
        __int64 a1,
        __int64 a2)
{
  char v2; // r14
  __int64 *result; // rax
  __int64 v4; // rbx
  __int64 v5; // r15
  char v6; // r12
  void *v7; // rax
  _QWORD v8[3]; // [rsp+0h] [rbp-40h] BYREF
  char v9; // [rsp+18h] [rbp-28h]
  char v10; // [rsp+19h] [rbp-27h]

  v2 = **(_BYTE **)a1 + 1; /*0x10027cca6*/
  **(_BYTE **)a1 = v2; /*0x10027cca9*/
  result = *(__int64 **)(a1 + 8); /*0x10027ccac*/
  v4 = *result; /*0x10027ccb0*/
  if ( *result ) /*0x10027ccb0*/
  {
    v5 = result[1]; /*0x10027ccb8*/
    v6 = **(_BYTE **)(a1 + 16); /*0x10027ccc0*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10027ccc4*/
    v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1); /*0x10027ccd3*/
    if ( !v7 ) /*0x10027ccdb*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 15); /*0x10027cd36*/
    qmemcpy(v7, "launching_codex", 15); /*0x10027ccf5*/
    v8[0] = 15; /*0x10027ccf8*/
    v8[1] = v7; /*0x10027cd00*/
    v8[2] = 15; /*0x10027cd04*/
    v9 = v2; /*0x10027cd0c*/
    v10 = v6; /*0x10027cd10*/
    return (__int64 *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(v5 + 40))(v4, v8); /*0x10027cd1b*/
  }
  return result; /*0x10027cd1f*/
}