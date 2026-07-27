// __ZN13codexmate_lib4core13oauth_refresh32external_codex_writer_is_present @ 0x1007be900
// 1.2.3 NEW-delta | codexmate_lib::core::oauth_refresh::external_codex_writer_is_present | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::oauth_refresh::external_codex_writer_is_present::h567ad782b47e3644()
{
  _BYTE *v0; // rbx
  _BYTE v2[24]; // [rsp+0h] [rbp-100h] BYREF
  __int64 v3; // [rsp+18h] [rbp-E8h] BYREF
  __int64 v4; // [rsp+20h] [rbp-E0h]
  __int64 v5; // [rsp+28h] [rbp-D8h]
  __int64 v6; // [rsp+30h] [rbp-D0h]
  __int64 v7; // [rsp+38h] [rbp-C8h]
  __int64 v8; // [rsp+40h] [rbp-C0h]
  __int64 v9; // [rsp+48h] [rbp-B8h]
  __int64 v10; // [rsp+50h] [rbp-B0h]
  __int64 v11; // [rsp+58h] [rbp-A8h]
  __int64 v12; // [rsp+60h] [rbp-A0h]
  __int64 v13; // [rsp+68h] [rbp-98h]
  __int64 v14; // [rsp+70h] [rbp-90h]
  _QWORD v15[4]; // [rsp+78h] [rbp-88h] BYREF
  _QWORD v16[13]; // [rsp+98h] [rbp-68h] BYREF

  LOBYTE(v0) = 1; /*0x1007be90c*/
  if ( !(unsigned __int8)codexmate_lib::platform::process::is_codex_app_running::ha65c033875f26151() ) /*0x1007be90e*/
  {
    codexmate_lib::platform::process::collect_external_codex_writers::h013c99e264542e67(&v3); /*0x1007be922*/
    if ( v3 == 11 ) /*0x1007be947*/
    {
      v15[0] = v5; /*0x1007be950*/
      v15[1] = v5; /*0x1007be957*/
      v15[2] = v4; /*0x1007be95b*/
      v15[3] = v5 + 32 * v6; /*0x1007be95f*/
      v0 = v2; /*0x1007be963*/
      alloc::vec::in_place_collect::from_iter_in_place::h7c38924dca936911(v2, v15); /*0x1007be974*/
      codexmate_lib::platform::process::reject_external_codex_writers::h04ed4542d20e0d8e(v16, v2); /*0x1007be980*/
      LOBYTE(v0) = v16[0] != 11; /*0x1007be98a*/
      if ( v16[0] == 11 ) /*0x1007be98d*/
        return (unsigned int)v0; /*0x1007be98d*/
    }
    else
    {
      v16[11] = v14; /*0x1007be998*/
      v16[10] = v13; /*0x1007be9a3*/
      v16[9] = v12; /*0x1007be9ae*/
      v16[8] = v11; /*0x1007be9b9*/
      v16[7] = v10; /*0x1007be9c4*/
      v16[6] = v9; /*0x1007be9cf*/
      v16[5] = v8; /*0x1007be9e1*/
      v16[4] = v7; /*0x1007be9e5*/
      v16[0] = v3; /*0x1007be9e9*/
      v16[1] = v4; /*0x1007be9ed*/
      v16[2] = v5; /*0x1007be9f1*/
      v16[3] = v6; /*0x1007be9f5*/
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v16); /*0x1007be9fd*/
  }
  return (unsigned int)v0; /*0x1007bea04*/
}