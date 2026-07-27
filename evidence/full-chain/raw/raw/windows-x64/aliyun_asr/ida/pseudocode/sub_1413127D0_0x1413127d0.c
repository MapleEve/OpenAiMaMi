// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x1413127d0
// name: sub_1413127D0
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1413127D0(__int64 a1, __int64 a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = a1;
  nullsub_1(a1);
  v4 = sub_140001650(24, 8);
  if ( !v4 )
    sub_1416C2D31(8, 24);
  *(_QWORD *)(v4 + 16) = *(_QWORD *)(a2 + 16);
  *(_OWORD *)v4 = *(_OWORD *)a2;
  return sub_141475210(v3, v4, &off_14195DB28);
}