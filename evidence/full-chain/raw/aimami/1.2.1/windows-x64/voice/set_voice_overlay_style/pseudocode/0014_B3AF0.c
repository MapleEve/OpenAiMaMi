// win 1.2.1 NEW set_voice_overlay_style 0x1402b3af0 d=1
__int64 __fastcall sub_1402B3AF0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdx

  sub_140045840(); /*0x1402b3b07*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 512)) ) /*0x1402b3b18*/
    sub_141166E40(a1 + 512); /*0x1402b3b29*/
  v1 = *(_QWORD *)(a1 + 456); /*0x1402b3b33*/
  if ( v1 ) /*0x1402b3b3d*/
    sub_140001360(*(_QWORD *)(a1 + 464), v1, 1); /*0x1402b3b4c*/
  if ( *(_BYTE *)(a1 + 480) == 0xFF ) /*0x1402b3b58*/
  {
    v2 = *(_QWORD *)(a1 + 488); /*0x1402b3b69*/
    if ( v2 ) /*0x1402b3b73*/
      sub_140001360(*(_QWORD *)(a1 + 496), v2, 1); /*0x1402b3b86*/
  }
  else
  {
    sub_1402B2F60(a1 + 480); /*0x1402b3b61*/
  }
  return sub_1402B7180(a1 + 360); /*0x1402b3b96*/
}