__int64 *__fastcall codexmate_lib::core::relay::manager::RelayManager::set_codex_router_no_account_mode::_$u7b$$u7b$closure$u7d$$u7d$::h503b57a0c105b514(
        __int64 a1)
{
  char v1; // r14
  __int64 *result; // rax
  __int64 v3; // rbx
  __int64 v4; // r15
  char v5; // r12
  void *v6; // rax
  _QWORD v7[3]; // [rsp+0h] [rbp-40h] BYREF
  char v8; // [rsp+18h] [rbp-28h]
  char v9; // [rsp+19h] [rbp-27h]

  v1 = **(_BYTE **)a1 + 1; /*0x1005c9a76*/
  **(_BYTE **)a1 = v1; /*0x1005c9a79*/
  result = *(__int64 **)(a1 + 8); /*0x1005c9a7c*/
  v3 = *result; /*0x1005c9a80*/
  if ( *result ) /*0x1005c9a80*/
  {
    v4 = result[1]; /*0x1005c9a88*/
    v5 = **(_BYTE **)(a1 + 16); /*0x1005c9a90*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1); /*0x1005c9a94*/
    v6 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1); /*0x1005c9aa3*/
    if ( !v6 ) /*0x1005c9aab*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 15); /*0x1005c9b06*/
    qmemcpy(v6, "launching_codex", 15); /*0x1005c9ac5*/
    v7[0] = 15; /*0x1005c9ac8*/
    v7[1] = v6; /*0x1005c9ad0*/
    v7[2] = 15; /*0x1005c9ad4*/
    v8 = v1; /*0x1005c9adc*/
    v9 = v5; /*0x1005c9ae0*/
    return (__int64 *)(*(__int64 (__fastcall **)(__int64, _QWORD *))(v4 + 40))(v3, v7); /*0x1005c9aeb*/
  }
  return result; /*0x1005c9aef*/
}
---REFS---
0x100001470 __RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2
0x100001430 __RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc
0x10112fd51 __ZN5alloc7raw_vec12handle_error17h81a7e8c5d8a11b4fE
