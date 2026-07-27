// __ZN13codexmate_lib8commands8accounts36store_bootstrap_snapshot_best_effort @ 0x1006a4ad0
__int64 __fastcall codexmate_lib::commands::accounts::store_bootstrap_snapshot_best_effort::h70c2e4619a79948f(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 result; // rax
  _BYTE v5[96]; // [rsp+0h] [rbp-160h] BYREF
  _DWORD v6[24]; // [rsp+60h] [rbp-100h] BYREF
  _QWORD v7[12]; // [rsp+C0h] [rbp-A0h] BYREF
  _QWORD v8[4]; // [rsp+120h] [rbp-40h] BYREF
  _QWORD v9[2]; // [rsp+140h] [rbp-20h] BYREF
  _BYTE v10[9]; // [rsp+157h] [rbp-9h] BYREF

  v9[0] = a3; /*0x1006a4ae2*/
  v9[1] = a4; /*0x1006a4ae6*/
  result = codexmate_lib::core::repository::Repository::store_bootstrap_snapshot_progressive::hd60d885067446f82( /*0x1006a4af4*/
             v6,
             a1,
             a2);
  if ( v6[0] != 11 ) /*0x1006a4b00*/
  {
    qmemcpy(v5, v6, sizeof(v5)); /*0x1006a4b1c*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1006a4b2d*/
    {
      v8[0] = v9; /*0x1006a4b37*/
      v8[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1006a4b42*/
      v8[2] = v5; /*0x1006a4b46*/
      v8[3] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x1006a4b51*/
      v7[6] = 2; /*0x1006a4b55*/
      v7[7] = "codexmate_lib::commands::accountsfull_refresh"; /*0x1006a4b64*/
      v7[8] = 33; /*0x1006a4b68*/
      v7[10] = &anon_4776471024d1e9bb78f2861cb2b51e1e_685; /*0x1006a4b77*/
      v7[11] = v8; /*0x1006a4b7f*/
      v7[0] = 0; /*0x1006a4b83*/
      v7[1] = "codexmate_lib::commands::accountsfull_refresh"; /*0x1006a4b8e*/
      v7[2] = 33; /*0x1006a4b95*/
      v7[3] = 0; /*0x1006a4ba0*/
      v7[4] = "src/commands/accounts.rs"; /*0x1006a4bb2*/
      v7[5] = 24; /*0x1006a4bb6*/
      v7[9] = 0x3000000001LL; /*0x1006a4bc8*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v10, v7); /*0x1006a4bd7*/
    }
    return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v5); /*0x1006a4be3*/
  }
  return result; /*0x1006a4be8*/
}