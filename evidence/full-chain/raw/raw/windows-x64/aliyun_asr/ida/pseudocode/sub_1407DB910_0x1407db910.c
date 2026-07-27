// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x1407db910
// name: sub_1407DB910
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
volatile signed __int64 *__fastcall sub_1407DB910(__int64 a1)
{
  __int64 v1; // rcx
  SOCKET s; // [rsp+28h] [rbp-18h]

  sub_1406B5D30(a1);
  v1 = a1;
  if ( *(_QWORD *)(a1 + 24) != -1 )
  {
    s = *(_QWORD *)(a1 + 24);
    sub_14052CCE0(*(volatile signed __int64 ***)(a1 + 32));
    closesocket(s);
    v1 = a1;
  }
  return sub_1405E8000(v1);
}