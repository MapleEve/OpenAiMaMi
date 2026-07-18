// win 1.2.1 NEW set_voice_overlay_style 0x140043ca0 d=1
volatile signed __int64 *__fastcall sub_140043CA0(__int64 a1)
{
  volatile signed __int64 *result; // rax

  sub_1400300C0(a1); /*0x140043cb6*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 136)) ) /*0x140043cc7*/
    sub_141166ED0(a1 + 136); /*0x140043cd8*/
  result = *(volatile signed __int64 **)(a1 + 144); /*0x140043ce2*/
  if ( !_InterlockedDecrement64(result) ) /*0x140043ce9*/
    return (volatile signed __int64 *)sub_140D75BF0(a1 + 144); /*0x140043cfb*/
  return result; /*0x140043cf6*/
}