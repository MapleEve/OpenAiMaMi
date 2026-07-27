// __ZN13codexmate_lib8commands8accounts30finalize_failed_switch_runtime @ 0x10069be90
__int64 __fastcall codexmate_lib::commands::accounts::finalize_failed_switch_runtime::h0e1be2a6d79fb52d(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 *a4)
{
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rax
  int __dst; // [rsp+0h] [rbp-410h] BYREF
  __int64 v10; // [rsp+8h] [rbp-408h]
  __int64 v11; // [rsp+10h] [rbp-400h]
  __int64 v12; // [rsp+18h] [rbp-3F8h]
  __int64 v13; // [rsp+370h] [rbp-A0h]
  _BYTE v14[24]; // [rsp+380h] [rbp-90h] BYREF
  _BYTE v15[24]; // [rsp+398h] [rbp-78h] BYREF
  _QWORD v16[2]; // [rsp+3B0h] [rbp-60h] BYREF
  __int64 *v17; // [rsp+3C0h] [rbp-50h] BYREF
  __int64 (__fastcall *v18)(); // [rsp+3C8h] [rbp-48h]
  __int64 *v19; // [rsp+3D0h] [rbp-40h]
  __int64 (__fastcall *v20)(); // [rsp+3D8h] [rbp-38h]
  __int64 v21; // [rsp+3E0h] [rbp-30h] BYREF
  __int64 v22; // [rsp+3E8h] [rbp-28h]
  __int64 v23; // [rsp+3F0h] [rbp-20h]

  codexmate_lib::commands::accounts::refresh_local_runtime_snapshot_after_mutation::hcf84ef475d51a3e9(&__dst); /*0x10069beb0*/
  if ( __dst == 3 ) /*0x10069bebc*/
  {
    v23 = v12; /*0x10069bec9*/
    v22 = v11; /*0x10069bedb*/
    v21 = v10; /*0x10069bedf*/
    v16[0] = codexmate_lib::commands::accounts::switch_error_code::h067c73bb59b91569(); /*0x10069bee8*/
    v16[1] = v6; /*0x10069beec*/
    v17 = v16; /*0x10069bef4*/
    v18 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10069beff*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v14, (char *)&loc_1017C33C3 + 2, &v17); /*0x10069bf15*/
    codexmate_lib::commands::accounts::AccountSwitchTrace::event::h45db447b3c672556( /*0x10069bf30*/
      a3,
      "runtime_refresh_failedmanual",
      22,
      v14);
    v17 = a4; /*0x10069bf35*/
    v18 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10069bf40*/
    v19 = &v21; /*0x10069bf48*/
    v20 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10069bf4c*/
    result = alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, &unk_1017C3458, &v17); /*0x10069bf5e*/
    if ( v21 ) /*0x10069bf6a*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v21, 1); /*0x10069bf75*/
    if ( *a4 ) /*0x10069bf7a*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a4[1], *a4, 1); /*0x10069bf8f*/
  }
  else
  {
    if ( v13 ) /*0x10069bfa0*/
    {
      v21 = v13; /*0x10069bfa2*/
      v17 = &v21; /*0x10069bfaa*/
      v18 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10069bfb5*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v15, &unk_1017C344F, &v17); /*0x10069bfc8*/
      codexmate_lib::commands::accounts::AccountSwitchTrace::event::h45db447b3c672556( /*0x10069bfe0*/
        a3,
        "runtime_refresh_warningruntime_refresh_failedmanual",
        23,
        v15);
    }
    a1[2] = a4[2]; /*0x10069bfe9*/
    v8 = *a4; /*0x10069bfed*/
    a1[1] = a4[1]; /*0x10069bff4*/
    *a1 = v8; /*0x10069bff8*/
    return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..CoreSnapshotPayload$GT$$GT$::h12516f312afacad3(&__dst); /*0x10069c002*/
  }
  return result; /*0x10069c007*/
}