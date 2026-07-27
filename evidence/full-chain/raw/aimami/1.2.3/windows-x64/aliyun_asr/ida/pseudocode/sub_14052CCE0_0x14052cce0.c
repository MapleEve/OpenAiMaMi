// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x14052cce0
// name: sub_14052CCE0
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14052CCE0(volatile signed __int64 **a1)
{
  __int64 result; // rax

  if ( a1 )
  {
    sub_141310DE0();
    if ( !_InterlockedDecrement64(*a1) )
      sub_141312250(a1);
    if ( !_InterlockedDecrement64(a1[1]) )
      sub_141311EC0(a1 + 1);
    return sub_140001660(a1, 32, 8);
  }
  return result;
}