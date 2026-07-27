// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x1405e7f40
// name: sub_1405E7F40
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405E7F40(__int64 a1)
{
  SOCKET s; // [rsp+28h] [rbp-18h]

  sub_1406B5D30();
  if ( *(_QWORD *)(a1 + 24) != -1 )
  {
    s = *(_QWORD *)(a1 + 24);
    sub_14052CCE0(*(volatile signed __int64 ***)(a1 + 32));
    closesocket(s);
  }
  return sub_1405E8000();
}