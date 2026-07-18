// win 1.2.1 NEW write_client_debug_log 0x140045840 d=2
volatile signed __int64 *__fastcall sub_140045840(__int64 a1)
{
  __int64 v1; // rdx
  volatile signed __int64 *result; // rax

  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 328)) ) /*0x14004585e*/
    sub_141166820(a1 + 328); /*0x14004586f*/
  v1 = *(_QWORD *)(a1 + 152); /*0x140045879*/
  if ( v1 ) /*0x140045883*/
    sub_140001360(*(_QWORD *)(a1 + 160), v1, 1); /*0x140045892*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 136)) ) /*0x14004589e*/
    sub_140544050(a1 + 136); /*0x1400458af*/
  sub_1400300C0(a1); /*0x1400458b9*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 336)) ) /*0x1400458ca*/
    sub_141166ED0(a1 + 336); /*0x1400458db*/
  sub_140043CA0(a1 + 176); /*0x1400458ec*/
  result = *(volatile signed __int64 **)(a1 + 344); /*0x1400458f6*/
  if ( !_InterlockedDecrement64(result) ) /*0x1400458fd*/
    return (volatile signed __int64 *)sub_141166AD0(a1 + 344); /*0x140045910*/
  return result; /*0x14004590a*/
}