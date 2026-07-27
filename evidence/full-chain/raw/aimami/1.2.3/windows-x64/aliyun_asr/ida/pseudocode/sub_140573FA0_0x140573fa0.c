// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x140573fa0
// name: sub_140573FA0
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140573FA0(__int64 *a1)
{
  __int64 result; // rax
  __int64 v2; // rsi
  unsigned __int64 v3; // rdx
  __int64 v4; // [rsp+28h] [rbp-8h]

  result = *a1;
  v4 = *a1;
  v2 = *(_QWORD *)(*a1 + 48);
  if ( (v2 & 1) != 0 )
    result = sub_1412F0A10(v4 + 32);
  if ( (v2 & 8) != 0 )
    result = sub_1412F0A10(v4 + 16);
  v3 = *(_QWORD *)(v4 + 56);
  if ( v3 <= 0xFFFFFFFFFFFFFFFDuLL && v3 )
    result = sub_140001660(*(_QWORD *)(v4 + 64), v3, 1);
  if ( v4 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v4 + 8)) )
    return sub_140001660(v4, 80, 8);
  return result;
}