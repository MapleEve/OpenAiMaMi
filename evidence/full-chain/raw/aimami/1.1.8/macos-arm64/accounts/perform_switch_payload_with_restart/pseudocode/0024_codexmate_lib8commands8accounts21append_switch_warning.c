// mac 1.1.8 BACKEND-ONLY perform_switch_payload_with_restart node 0x1004c7d90 depth=1
// codexmate_lib8commands8accounts21append_switch_warning
__int64 __fastcall codexmate_lib::commands::accounts::append_switch_warning::h18d90cca06c9c790(
        __int64 *a1,
        __int64 *a2)
{
  void *v2; // rax
  __int64 v3; // r14
  __int64 result; // rax
  __int64 v5; // rcx
  void *v6; // [rsp+8h] [rbp-38h]
  __int64 v7; // [rsp+18h] [rbp-28h]
  __int64 v8; // [rsp+20h] [rbp-20h]
  __int64 v9; // [rsp+28h] [rbp-18h]

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004c7da1*/
  v2 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x23u, 1u); /*0x1004c7db0*/
  if ( !v2 ) /*0x1004c7db8*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 35); /*0x1004c7ea4*/
  qmemcpy(v2, "RUNTIME_REFRESH_FAILED_AFTER_SWITCH", 35); /*0x1004c7df2*/
  v9 = a2[2]; /*0x1004c7e00*/
  v8 = a2[1]; /*0x1004c7e0b*/
  v7 = *a2; /*0x1004c7e0f*/
  v6 = v2; /*0x1004c7e1b*/
  v3 = a1[57]; /*0x1004c7e27*/
  if ( v3 == a1[55] ) /*0x1004c7e35*/
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hfc41e23f4c06165d(a1 + 55); /*0x1004c7e3e*/
  result = a1[56]; /*0x1004c7e43*/
  v5 = 48 * v3; /*0x1004c7e4e*/
  *(_QWORD *)(result + v5 + 40) = v9; /*0x1004c7e56*/
  *(_QWORD *)(result + v5 + 32) = v8; /*0x1004c7e5f*/
  *(_QWORD *)(result + v5 + 24) = v7; /*0x1004c7e68*/
  *(_QWORD *)(result + v5 + 16) = 35; /*0x1004c7e71*/
  *(_QWORD *)(result + v5 + 8) = v6; /*0x1004c7e7e*/
  *(_QWORD *)(result + v5) = 35; /*0x1004c7e83*/
  a1[57] = v3 + 1; /*0x1004c7e8a*/
  return result; /*0x1004c7e91*/
}