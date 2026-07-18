// win 1.2.1 NEW set_voice_overlay_style 0x141166820 d=2
volatile signed __int64 *__fastcall sub_141166820(__int64 *a1)
{
  __int64 v1; // rdi
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // rdx
  volatile signed __int64 *result; // rax

  v1 = *a1; /*0x141166834*/
  v2 = *a1 + 24; /*0x141166837*/
  v3 = *(_QWORD *)(*a1 + 352); /*0x14116683b*/
  if ( v3 ) /*0x141166845*/
    sub_140001360(*(_QWORD *)(v1 + 360), v3, 1); /*0x141166854*/
  sub_141162B10(v2); /*0x141166861*/
  if ( *(_DWORD *)(v1 + 168) != -1 ) /*0x141166872*/
  {
    v4 = *(_QWORD *)(v1 + 320); /*0x141166878*/
    if ( v4 ) /*0x141166882*/
      sub_140001360(*(_QWORD *)(v1 + 328), v4, 1); /*0x141166891*/
    if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v1 + 304)) ) /*0x1411668a4*/
      sub_140544050(v1 + 304); /*0x1411668b1*/
    sub_141162B10(v1 + 168); /*0x1411668ba*/
  }
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v1 + 536)) ) /*0x1411668cb*/
    sub_141166ED0(v1 + 536); /*0x1411668dc*/
  sub_141163860(v1 + 384); /*0x1411668ed*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v1 + 544)) ) /*0x1411668fe*/
    sub_141166670(v1 + 544); /*0x14116690f*/
  result = *(volatile signed __int64 **)(v1 + 552); /*0x141166919*/
  if ( !_InterlockedDecrement64(result) ) /*0x141166920*/
    result = (volatile signed __int64 *)sub_141166AD0(v1 + 552); /*0x141166931*/
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) ) /*0x141166941*/
    return (volatile signed __int64 *)sub_140001360(v1, 560, 8); /*0x14116695a*/
  return result; /*0x141166953*/
}