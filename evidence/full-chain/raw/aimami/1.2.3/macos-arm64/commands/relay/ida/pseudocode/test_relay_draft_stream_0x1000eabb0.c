// __ZN13codexmate_lib8commands5relay23test_relay_draft_stream28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1000eabb0 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::relay::test_relay_draft_stream::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h8cafc4d4612d2e43(
        __int64 *a1)
{
  __int64 v1; // r14
  __int64 result; // rax
  _QWORD v3[4]; // [rsp+0h] [rbp-80h] BYREF
  __int64 v4; // [rsp+20h] [rbp-60h] BYREF
  __int64 v5; // [rsp+28h] [rbp-58h]
  __int64 v6; // [rsp+30h] [rbp-50h]
  __int64 v7; // [rsp+38h] [rbp-48h]
  __int64 v8; // [rsp+40h] [rbp-40h]
  __int64 v9; // [rsp+50h] [rbp-30h]
  __int64 v10; // [rsp+58h] [rbp-28h]
  __int64 v11; // [rsp+60h] [rbp-20h]
  __int64 v12; // [rsp+68h] [rbp-18h]

  v1 = *a1; /*0x1000eabc5*/
  _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::h38d276405869679f(&v4); /*0x1000eabcc*/
  v9 = v5; /*0x1000eabd9*/
  v10 = v6; /*0x1000eabe1*/
  v11 = v7; /*0x1000eabe9*/
  v12 = v8; /*0x1000eabf1*/
  if ( v4 != 0x8000000000000025LL ) /*0x1000eabf8*/
  {
    v5 = v9; /*0x1000eac41*/
    v6 = v10; /*0x1000eac45*/
    v7 = v11; /*0x1000eac4d*/
    v8 = v12; /*0x1000eac55*/
    return core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(&v4); /*0x1000eac55*/
  }
  v3[0] = v9; /*0x1000eac02*/
  v3[1] = v10; /*0x1000eac06*/
  v3[2] = v11; /*0x1000eac0e*/
  v3[3] = v12; /*0x1000eac16*/
  result = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD *))(*(_QWORD *)(v1 + 24) + 40LL))( /*0x1000eac2a*/
             &v4,
             *(_QWORD *)(v1 + 16),
             v3);
  if ( v4 != 0x8000000000000025LL ) /*0x1000eac31*/
    return core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(&v4); /*0x1000eac61*/
  return result; /*0x1000eac6a*/
}