// __ZN13codexmate_lib4core5relay10translator6stream9sse_event @ 0x100ac5e00 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::translator::stream::sse_event::hcc82cd85f00ee8ac(__int64 a1, __int64 a2)
{
  _QWORD v3[4]; // [rsp+8h] [rbp-38h] BYREF
  _QWORD v4[2]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v5; // [rsp+38h] [rbp-8h] BYREF

  v4[0] = "content_block_startcontent_block_deltacontent_block_stopmessage_deltamessage_stop"; /*0x100ac5e0f*/
  v4[1] = 19; /*0x100ac5e13*/
  v5 = a2; /*0x100ac5e1b*/
  v3[0] = v4; /*0x100ac5e23*/
  v3[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100ac5e2e*/
  v3[2] = &v5; /*0x100ac5e36*/
  v3[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcb50c2f2fdedac0f; /*0x100ac5e41*/
  return alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, &unk_1017C9F28, v3); /*0x100ac5e55*/
}