// win 1.2.1 NEW set_voice_overlay_style 0x140544050 d=2
__int64 __fastcall sub_140544050(__int64 *a1)
{
  __int64 v1; // rcx
  __int64 result; // rax

  v1 = *a1; /*0x140544050*/
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) ) /*0x140544059*/
    return sub_140001360(v1, 24, 8); /*0x14054406b*/
  return result; /*0x140544070*/
}