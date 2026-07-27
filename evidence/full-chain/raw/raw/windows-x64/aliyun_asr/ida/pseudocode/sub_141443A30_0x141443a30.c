// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x141443a30
// name: sub_141443A30
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
_BOOL8 __fastcall sub_141443A30(__int64 a1)
{
  __int64 v2; // [rsp+20h] [rbp-18h] BYREF

  if ( !*(_QWORD *)(a1 + 32) )
    return 0;
  sub_141444A20(&v2, a1 + 16);
  return v2 != 0;
}