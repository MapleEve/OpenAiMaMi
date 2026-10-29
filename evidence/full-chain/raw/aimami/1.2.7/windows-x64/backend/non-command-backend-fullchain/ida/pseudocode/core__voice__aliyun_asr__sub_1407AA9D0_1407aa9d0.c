// win 1.2.7 | module src/core/voice/aliyun_asr.rs | ea 0x1407aa9d0 | name sub_1407AA9D0
// win 1.2.7 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1407AA9D0(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 result; // rax
  __int64 v7; // rcx
  __int64 v8; // [rsp+28h] [rbp-8h]
  __int64 v9; // [rsp+28h] [rbp-8h]

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
  v8 = a1;
  sub_14029B810(a1 + 96);
  sub_1400331B0(v8);
  result = v8;
  v7 = *(_QWORD *)(v8 + 208);
  if ( v7 )
  {
    v9 = *(_QWORD *)(v8 + 208);
    sub_14036F280(v7, v3, v4, v5);
    return sub_140001660(v9, 32, 8);
  }
  return result;
}
