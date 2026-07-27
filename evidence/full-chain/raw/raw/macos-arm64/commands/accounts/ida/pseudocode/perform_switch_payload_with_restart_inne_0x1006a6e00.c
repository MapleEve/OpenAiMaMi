// __ZN13codexmate_lib8commands8accounts41perform_switch_payload_with_restart_inner28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1006a6e00 | 基线 same-set
__int64 __fastcall codexmate_lib::commands::accounts::perform_switch_payload_with_restart_inner::_$u7b$$u7b$closure$u7d$$u7d$::h299f2df2dee7db2c(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5)
{
  codexmate_lib::commands::accounts::verify_account_switch::hd0ef62e79ae4c84d(a1, a2, a3, a4); /*0x1006a6e0a*/
  return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..SwitchPayload$GT$$GT$::h979f018b3821b1f3(a5); /*0x1006a6e12*/
}