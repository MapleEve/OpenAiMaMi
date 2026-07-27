// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x1405aff20
// name: sub_1405AFF20
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405AFF20(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rdi
  _QWORD *v7; // r14
  __int64 v8; // rdx

  v2 = a1[9];
  if ( v2 )
    result = sub_140001660(a1[10], v2, 1);
  v4 = a1[12];
  if ( v4 != -1 )
  {
    v5 = a1[13];
    v6 = a1[14];
    if ( v6 )
    {
      v7 = (_QWORD *)(v5 + 8);
      do
      {
        v8 = *(v7 - 1);
        if ( v8 )
          result = sub_140001660(*v7, v8, 1);
        v7 += 3;
        --v6;
      }
      while ( v6 );
    }
    if ( v4 )
      return sub_140001660(v5, 24 * v4, 8);
  }
  return result;
}