// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x14068b170
// name: sub_14068B170
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14068B170(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 result; // rax
  __int64 v4; // [rsp+28h] [rbp-8h]
  __int64 v5; // [rsp+28h] [rbp-8h]

  if ( *(_BYTE *)(a1 + 184) >= 0xAu )
  {
    v1 = *(_QWORD *)(a1 + 200);
    if ( v1 )
    {
      v2 = a1;
      sub_140001660(*(_QWORD *)(a1 + 192), v1, 1);
      a1 = v2;
    }
  }
  v4 = a1;
  sub_1402C3580(a1 + 96);
  sub_140017140(v4);
  result = v4;
  if ( *(_QWORD *)(v4 + 208) )
  {
    v5 = *(_QWORD *)(v4 + 208);
    sub_14067E8F0();
    return sub_140001660(v5, 32, 8);
  }
  return result;
}