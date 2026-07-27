// __ZN13codexmate_lib4core5relay12codex_writer26is_aimami_relay_model_slug @ 0x1007c3e10 | 基线 same-set
bool __fastcall codexmate_lib::core::relay::codex_writer::is_aimami_relay_model_slug::hc51c0a465fabe627(
        __int64 a1,
        unsigned __int64 a2)
{
  if ( a2 == 12 ) /*0x1007c3e18*/
    return (*(_QWORD *)a1 ^ 0x725F696D616D6961LL | *(unsigned int *)(a1 + 8) ^ 0x79616C65LL) == 0; /*0x1007c3e34*/
  if ( a2 > 0xC ) /*0x1007c3e39*/
    return (*(_QWORD *)a1 ^ 0x725F696D616D6961LL | *(_QWORD *)(a1 + 5) ^ 0x5F79616C65725F69LL) == 0; /*0x1007c3e5d*/
  return 0; /*0x1007c3e37*/
}