// __ZN13codexmate_lib4core10repository10Repository27restore_auto_switch_service @ 0x100a6a760
// 1.2.3 NEW-delta | codexmate_lib::core::repository | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::repository::Repository::restore_auto_switch_service::h4929bd797d587a0a(
        __int64 *a1,
        _QWORD *a2,
        int a3)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // r14
  __int64 v6; // r8
  __int64 v7; // rcx
  _QWORD v8[2]; // [rsp+10h] [rbp-80h] BYREF
  __int64 v9; // [rsp+20h] [rbp-70h]
  __int64 v10; // [rsp+28h] [rbp-68h]
  __int64 v11; // [rsp+30h] [rbp-60h]
  __int64 v12; // [rsp+38h] [rbp-58h]
  __int64 v13; // [rsp+40h] [rbp-50h]
  __int64 v14; // [rsp+48h] [rbp-48h]
  __int64 v15; // [rsp+50h] [rbp-40h]
  __int64 v16; // [rsp+58h] [rbp-38h]
  __int64 v17; // [rsp+60h] [rbp-30h]
  __int64 v18; // [rsp+68h] [rbp-28h]

  if ( !a3 ) /*0x100a6a774*/
    return codexmate_lib::platform::daemon::uninstall_daemon::h418875776827d0e2(a1, a2[79], a2[80]); /*0x100a6a7fc*/
  codexmate_lib::core::repository::Repository::resolve_daemon_binary::h8f3b0e04c1a4350c(v8); /*0x100a6a77d*/
  result = v8[0]; /*0x100a6a782*/
  v4 = v8[1]; /*0x100a6a786*/
  v5 = v9; /*0x100a6a78a*/
  v6 = v10; /*0x100a6a78e*/
  if ( v8[0] == 11 ) /*0x100a6a796*/
  {
    result = codexmate_lib::platform::daemon::install_daemon::h8900ce8616dff972( /*0x100a6a7b8*/
               (_DWORD)a1,
               a2[79],
               a2[80],
               v9,
               v10,
               a2[1],
               a2[2]);
    if ( v4 ) /*0x100a6a7c0*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x100a6a7dd*/
  }
  else
  {
    a1[11] = v18; /*0x100a6a805*/
    a1[10] = v17; /*0x100a6a80e*/
    a1[9] = v16; /*0x100a6a817*/
    a1[8] = v15; /*0x100a6a820*/
    a1[7] = v14; /*0x100a6a829*/
    a1[6] = v13; /*0x100a6a832*/
    v7 = v11; /*0x100a6a837*/
    a1[5] = v12; /*0x100a6a83f*/
    a1[4] = v7; /*0x100a6a844*/
    a1[1] = v4; /*0x100a6a849*/
    a1[2] = v5; /*0x100a6a84e*/
    a1[3] = v6; /*0x100a6a853*/
    *a1 = result; /*0x100a6a858*/
  }
  return result; /*0x100a6a7d1*/
}