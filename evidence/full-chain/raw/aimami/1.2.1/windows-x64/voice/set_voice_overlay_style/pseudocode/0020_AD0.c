// win 1.2.1 NEW set_voice_overlay_style 0x141166ad0 d=2
__int64 __fastcall sub_141166AD0(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // [rsp+20h] [rbp-10h]

  v2 = *a1; /*0x141166ae5*/
  result = sub_14115BEF0(*a1 + 24); /*0x141166aed*/
  if ( v2 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v2 + 8)) ) /*0x141166afd*/
    return sub_140001360(v2, 48, 8); /*0x141166b14*/
  return result; /*0x141166b0f*/
}