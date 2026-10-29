// win 1.2.7 | module src/core/voice/aliyun_asr.rs | ea 0x1409632e0 | name sub_1409632E0
// win 1.2.7 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1409632E0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  __int64 result; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // [rsp+28h] [rbp-18h]

  sub_1400331B0(a1);
  result = a1;
  v5 = *(_QWORD *)(a1 + 96);
  if ( v5 )
  {
    v7 = *(_QWORD *)(a1 + 96);
    sub_14036F280(v5, v1, v2, v3);
    sub_140001660(v7, 32, 8);
    result = a1;
  }
  v6 = *(_QWORD *)(result + 112);
  if ( v6 != -1 )
  {
    if ( v6 )
      return sub_140001660(*(_QWORD *)(result + 120), v6, 1);
  }
  return result;
}
