// win 1.2.1 NEW migrate_session_worktree 0x140c300e0 d=1
__int64 __fastcall sub_140C300E0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdx

  sub_1407DD860(); /*0x140c300f7*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 512)) ) /*0x140c30108*/
    sub_141166E40(a1 + 512); /*0x140c30119*/
  v1 = *(_QWORD *)(a1 + 456); /*0x140c30123*/
  if ( v1 ) /*0x140c3012d*/
    sub_140001360(*(_QWORD *)(a1 + 464), v1, 1); /*0x140c3013c*/
  if ( *(_BYTE *)(a1 + 480) == 0xFF ) /*0x140c30148*/
  {
    v2 = *(_QWORD *)(a1 + 488); /*0x140c30159*/
    if ( v2 ) /*0x140c30163*/
      sub_140001360(*(_QWORD *)(a1 + 496), v2, 1); /*0x140c30176*/
  }
  else
  {
    sub_140043430(a1 + 480); /*0x140c30151*/
  }
  return sub_140047E70(a1 + 360); /*0x140c30186*/
}