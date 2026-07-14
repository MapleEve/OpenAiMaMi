// win 1.1.8 detect_api_proxy_config node va=0x14004c1b0 depth=2
// C1B0
volatile signed __int64 *__fastcall sub_14004C1B0(__int64 a1)
{
  volatile signed __int64 *result; // rax

  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 24)) ) /*0x14004c1ca*/
    sub_140E0AB60(a1 + 24); /*0x14004c1d8*/
  sub_14075FF40(a1); /*0x14004c1e2*/
  sub_14004D840(a1 + 40); /*0x14004c1f0*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 88)) ) /*0x14004c1fe*/
    sub_140E0A770(a1 + 88); /*0x14004c20c*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 96)) ) /*0x14004c21a*/
    sub_1404E9190((__int64 *)(a1 + 96)); /*0x14004c228*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 104)) ) /*0x14004c236*/
    sub_1404E9190((__int64 *)(a1 + 104)); /*0x14004c244*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 112)) ) /*0x14004c252*/
    sub_1404E9190((__int64 *)(a1 + 112)); /*0x14004c260*/
  result = *(volatile signed __int64 **)(a1 + 120); /*0x14004c26a*/
  if ( !_InterlockedDecrement64(result) ) /*0x14004c26e*/
    return (volatile signed __int64 *)sub_1404E9190((__int64 *)(a1 + 120)); /*0x14004c27d*/
  return result; /*0x14004c278*/
}