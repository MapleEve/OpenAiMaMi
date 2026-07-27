// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x1405af460
// name: sub_1405AF460
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
volatile signed __int64 *__fastcall sub_1405AF460(__int64 a1)
{
  volatile signed __int64 *result; // rax

  if ( *(_DWORD *)a1 == 2 )
  {
    sub_1405E7F40(a1 + 8);
  }
  else
  {
    ((void (*)(void))sub_1405E7F40)();
    sub_1405E8300(a1 + 40);
  }
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 1104)) )
    sub_140575E30((__int64 *)(a1 + 1104));
  result = *(volatile signed __int64 **)(a1 + 1112);
  if ( !_InterlockedDecrement64(result) )
    return (volatile signed __int64 *)sub_140575E30((__int64 *)(a1 + 1112));
  return result;
}