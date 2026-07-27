// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x1405e8000
// name: sub_1405E8000
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
volatile signed __int64 *__fastcall sub_1405E8000(__int64 a1)
{
  volatile signed __int64 **v1; // rcx
  volatile signed __int64 *result; // rax

  sub_1412F1C50();
  v1 = (volatile signed __int64 **)(a1 + 8);
  if ( *(_BYTE *)a1 )
  {
    if ( !_InterlockedDecrement64(*v1) )
      sub_1412E9930(v1);
  }
  else if ( !_InterlockedDecrement64(*v1) )
  {
    sub_1412E9570(v1);
  }
  result = *(volatile signed __int64 **)(a1 + 16);
  if ( !_InterlockedDecrement64(result) )
    return (volatile signed __int64 *)sub_1412E90B0(a1 + 16);
  return result;
}