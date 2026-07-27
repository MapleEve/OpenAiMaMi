// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x1405ae6d0
// name: sub_1405AE6D0
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405AE6D0(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // [rsp+28h] [rbp-18h]

  sub_140017140(a1);
  result = a1;
  if ( *(_QWORD *)(a1 + 96) )
  {
    v3 = *(_QWORD *)(a1 + 96);
    sub_14067E8F0();
    sub_140001660(v3, 32, 8);
    result = a1;
  }
  v2 = *(_QWORD *)(result + 112);
  if ( v2 != -1 )
  {
    if ( v2 )
      return sub_140001660(*(_QWORD *)(result + 120), v2, 1);
  }
  return result;
}