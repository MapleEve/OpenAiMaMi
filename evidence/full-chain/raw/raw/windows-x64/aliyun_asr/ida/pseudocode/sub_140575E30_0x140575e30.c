// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x140575e30
// name: sub_140575E30
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140575E30(__int64 *a1)
{
  __int64 v1; // rax
  __int64 result; // rax
  __int64 v3; // [rsp+20h] [rbp-10h]

  v3 = *a1;
  v1 = *(_QWORD *)(*a1 + 16);
  if ( v1 )
    (*(void (__fastcall **)(_QWORD))(v1 + 24))(*(_QWORD *)(v3 + 24));
  result = *(_QWORD *)(v3 + 40);
  if ( result )
    result = (*(__int64 (__fastcall **)(_QWORD))(result + 24))(*(_QWORD *)(v3 + 48));
  if ( v3 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v3 + 8)) )
    return sub_140001660(v3, 64, 8);
  return result;
}