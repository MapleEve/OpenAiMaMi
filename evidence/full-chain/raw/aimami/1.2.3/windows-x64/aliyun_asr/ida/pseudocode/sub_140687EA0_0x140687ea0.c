// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x140687ea0
// name: sub_140687EA0
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
volatile signed __int64 *__fastcall sub_140687EA0(__int64 a1)
{
  volatile signed __int64 *result; // rax

  if ( *(_DWORD *)a1 == 2 )
  {
    sub_14068F6F0(a1 + 8);
  }
  else
  {
    ((void (*)(void))sub_14068F6F0)();
    sub_14068F7B0(a1 + 40);
  }
  if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(a1 + 1104)) )
    sub_140575E30((__int64 *)(a1 + 1104));
  result = *(volatile signed __int64 **)(a1 + 1112);
  if ( !_InterlockedDecrement64(result) )
    return (volatile signed __int64 *)sub_140575E30((__int64 *)(a1 + 1112));
  return result;
}