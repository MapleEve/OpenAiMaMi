// win 1.1.8 set_codex_router_no_account_mode node va=0x1409b5490 depth=1
// B5490
__int64 __fastcall sub_1409B5490(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rdx

  sub_1400D59C0(); /*0x1409b54a7*/
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 512)) ) /*0x1409b54b8*/
    sub_140E0A320(a1 + 512); /*0x1409b54c9*/
  v1 = *(_QWORD *)(a1 + 456); /*0x1409b54d3*/
  if ( v1 ) /*0x1409b54dd*/
    sub_140001370(*(_QWORD *)(a1 + 464), v1, 1); /*0x1409b54ec*/
  if ( *(_BYTE *)(a1 + 480) == 6 ) /*0x1409b54f8*/
  {
    v2 = *(_QWORD *)(a1 + 488); /*0x1409b54fa*/
    if ( v2 ) /*0x1409b5504*/
      sub_140001370(*(_QWORD *)(a1 + 496), v2, 1); /*0x1409b5517*/
  }
  else
  {
    sub_1400D5C50(a1 + 480); /*0x1409b5525*/
  }
  return sub_140045C00(a1 + 360); /*0x1409b5536*/
}