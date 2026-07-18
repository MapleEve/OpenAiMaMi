// win 1.2.1 NEW set_voice_overlay_style 0x1400300c0 d=2
volatile signed __int64 *__fastcall sub_1400300C0(__int64 a1)
{
  volatile signed __int64 *result; // rax

  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 24)) ) /*0x1400300da*/
    sub_141166720(a1 + 24); /*0x1400300e8*/
  sub_140497540(a1); /*0x1400300f2*/
  sub_14002FFA0(a1 + 40); /*0x140030100*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 88)) ) /*0x14003010e*/
    sub_1411664A0(a1 + 88); /*0x14003011c*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 96)) ) /*0x14003012a*/
    sub_140544050((__int64 *)(a1 + 96)); /*0x140030138*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 104)) ) /*0x140030146*/
    sub_140544050((__int64 *)(a1 + 104)); /*0x140030154*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 112)) ) /*0x140030162*/
    sub_140544050((__int64 *)(a1 + 112)); /*0x140030170*/
  result = *(volatile signed __int64 **)(a1 + 120); /*0x14003017a*/
  if ( !_InterlockedDecrement64(result) ) /*0x14003017e*/
    return (volatile signed __int64 *)sub_140544050((__int64 *)(a1 + 120)); /*0x14003018d*/
  return result; /*0x140030188*/
}