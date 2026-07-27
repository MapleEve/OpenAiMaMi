// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x14052df40
// name: sub_14052DF40
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14052DF40(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rsi
  __int64 v4; // rdi
  __int64 *v5; // rbx

  v1 = *a1;
  result = (*a1 - 0x7FFFFFFFFFFFFFFFLL) & (*a1 >> 63);
  if ( !result )
  {
    v3 = 4096;
    v4 = 4;
    if ( v1 )
    {
      v5 = a1;
      sub_140001660(a1[1], v1, 1);
      a1 = v5;
    }
    return sub_140001660(a1[v4], v3, 1);
  }
  if ( result == 1 )
  {
    v3 = a1[1];
    v4 = 2;
    if ( v3 )
      return sub_140001660(a1[v4], v3, 1);
  }
  return result;
}