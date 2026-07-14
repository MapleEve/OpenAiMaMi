// win 1.1.8 set_codex_router_no_account_mode node va=0x1400453b0 depth=1
// B0
volatile signed __int64 *__fastcall sub_1400453B0(__int64 a1)
{
  volatile signed __int64 *result; // rax

  sub_14004C1B0(a1); /*0x1400453c6*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 136)) ) /*0x1400453d7*/
    sub_140E0B010(a1 + 136); /*0x1400453e8*/
  result = *(volatile signed __int64 **)(a1 + 144); /*0x1400453f2*/
  if ( !_InterlockedDecrement64(result) ) /*0x1400453f9*/
    return (volatile signed __int64 *)sub_140A982C0(a1 + 144); /*0x14004540b*/
  return result; /*0x140045406*/
}