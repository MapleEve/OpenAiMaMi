// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND sse_event node 0x1001b2930 depth=0
size_t *__fastcall codexmate_lib::core::relay::translator::stream::sse_event::hb4e46a3512204b52(size_t *a1, __int64 a2)
{
  _QWORD v3[4]; // [rsp+8h] [rbp-38h] BYREF
  _QWORD v4[2]; // [rsp+28h] [rbp-18h] BYREF
  __int64 v5; // [rsp+38h] [rbp-8h] BYREF

  v4[0] = "content_block_startcontent_block_deltacontent_block_stopmessage_deltamessage_stop"; /*0x1001b293f*/
  v4[1] = 19; /*0x1001b2943*/
  v5 = a2; /*0x1001b294b*/
  v3[0] = v4; /*0x1001b2953*/
  v3[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x1001b295e*/
  v3[2] = &v5; /*0x1001b2966*/
  v3[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4cfba58d71f5359b; /*0x1001b2971*/
  return alloc::fmt::format::format_inner::h3c16c74008a310d4(
           a1,
           (unsigned __int8 *)"\aevent: \xC0\x07\ndata: \xC0\x02\n\n",
           (unsigned __int64)v3);
}