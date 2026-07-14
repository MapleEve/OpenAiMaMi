// win 1.1.8 reorder_relay_providers node va=0x140140cb0 depth=2
// CB0
volatile signed __int64 *__fastcall sub_140140CB0(__int64 a1)
{
  __int64 v1; // rdx
  volatile signed __int64 *result; // rax

  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 328)) ) /*0x140140cce*/
    sub_140E0A8A0(a1 + 328); /*0x140140cdf*/
  v1 = *(_QWORD *)(a1 + 152); /*0x140140ce9*/
  if ( v1 ) /*0x140140cf3*/
    sub_140001370(*(_QWORD *)(a1 + 160), v1, 1); /*0x140140d02*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 136)) ) /*0x140140d0e*/
    sub_1404E9190(a1 + 136); /*0x140140d1f*/
  sub_14004C1B0(a1); /*0x140140d29*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 336)) ) /*0x140140d3a*/
    sub_140E0B010(a1 + 336); /*0x140140d4b*/
  sub_1400453B0(a1 + 176); /*0x140140d5c*/
  result = *(volatile signed __int64 **)(a1 + 344); /*0x140140d66*/
  if ( !_InterlockedDecrement64(result) ) /*0x140140d6d*/
    return (volatile signed __int64 *)sub_140E0ACC0(a1 + 344); /*0x140140d80*/
  return result; /*0x140140d7a*/
}