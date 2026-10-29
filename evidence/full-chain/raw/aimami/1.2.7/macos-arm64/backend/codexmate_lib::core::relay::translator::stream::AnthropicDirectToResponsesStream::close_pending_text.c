// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::close_pending_text::h9de32fb4fc64acb3; addr: 0x1002a9cb0; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:50Z
void __fastcall codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::close_pending_text::h9de32fb4fc64acb3(
        __int64 *a1,
        _QWORD *a2)
{
  __int64 v2; // r10
  _QWORD v3[2]; // [rsp-88h] [rbp-88h] BYREF
  _BYTE v4[112]; // [rsp-78h] [rbp-78h] BYREF

  v2 = a1[20]; /*0x1002a9cba*/
  a1[20] = 0x8000000000000000LL; /*0x1002a9cc1*/
  if ( !__OFSUB__(-v2, 1) ) /*0x1002a9cce*/
  {
    qmemcpy(v4, a1 + 21, sizeof(v4)); /*0x1002a9cf4*/
    v3[1] = v2; /*0x1002a9cf7*/
    v3[0] = 0x8000000000000001LL; /*0x1002a9cfe*/
    codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::close_anthropic_block::hbeceaa9a3c767f00( /*0x1002a9d0b*/
      a1,
      (__int64)v3,
      nullptr,
      0,
      a2);
  }
}