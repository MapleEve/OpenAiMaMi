// win 1.2.7 | module src/core/voice/aliyun_asr.rs | ea 0x140996180 | name sub_140996180
// win 1.2.7 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140996180(__int64 a1)
{
  SOCKET s; // [rsp+28h] [rbp-18h]

  sub_140C9AD30();
  if ( *(_QWORD *)(a1 + 24) != -1 )
  {
    s = *(_QWORD *)(a1 + 24);
    sub_14040CBB0(*(_QWORD *)(a1 + 32));
    closesocket(s);
  }
  return sub_1408EE9C0();
}
