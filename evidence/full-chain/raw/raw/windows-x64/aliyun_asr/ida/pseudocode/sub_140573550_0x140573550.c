// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x140573550
// name: sub_140573550
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140573550(__int64 *a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax
  unsigned __int64 v3; // rsi
  __int64 v4; // r8
  __int64 *v5; // [rsp+20h] [rbp-10h]
  __int64 v6; // [rsp+28h] [rbp-8h]

  v6 = *a1;
  v1 = (__int64 *)a1[1];
  result = *v1;
  v5 = v1;
  v3 = v1[2];
  if ( *v1 )
    result = ((__int64 (__fastcall *)(unsigned __int64))result)(v6 + ((v3 - 1) & 0xFFFFFFFFFFFFFFF0uLL) + 16);
  if ( v6 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v6 + 8)) )
  {
    v4 = 8;
    if ( v3 >= 9 )
      v4 = v3;
    result = v4 + v5[1] + 15;
    if ( (result & -v4) != 0 )
      return sub_140001660(v6, result & -v4, v4);
  }
  return result;
}