// mac 1.1.8 test_relay_draft_stream node va=0x1000a6550 depth=0
// test_relay_draft_stream_owner
__int64 __fastcall codexmate_lib::commands::relay::test_relay_draft_stream::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h30bd936d9e64158b(
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

  v1 = *a1; /*0x1000a6565*/
  _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::hd6af5c5e641087b3(&v4); /*0x1000a656c*/
  v9 = v5; /*0x1000a6579*/
  v10 = v6; /*0x1000a6581*/
  v11 = v7; /*0x1000a6589*/
  v12 = v8; /*0x1000a6591*/
  if ( v4 != 0x8000000000000025LL ) /*0x1000a6598*/
  {
    v5 = v9; /*0x1000a65e1*/
    v6 = v10; /*0x1000a65e5*/
    v7 = v11; /*0x1000a65ed*/
    v8 = v12; /*0x1000a65f5*/
    return core::ptr::drop_in_place$LT$tauri..error..Error$GT$::h70cb689e8008b774(&v4); /*0x1000a65f5*/
  }
  v3[0] = v9; /*0x1000a65a2*/
  v3[1] = v10; /*0x1000a65a6*/
  v3[2] = v11; /*0x1000a65ae*/
  v3[3] = v12; /*0x1000a65b6*/
  result = (*(__int64 (__fastcall **)(__int64 *, _QWORD, _QWORD *))(*(_QWORD *)(v1 + 24) + 40LL))( /*0x1000a65ca*/
             &v4,
             *(_QWORD *)(v1 + 16),
             v3);
  if ( v4 != 0x8000000000000025LL ) /*0x1000a65d1*/
    return core::ptr::drop_in_place$LT$tauri..error..Error$GT$::h70cb689e8008b774(&v4); /*0x1000a6601*/
  return result; /*0x1000a660a*/
}