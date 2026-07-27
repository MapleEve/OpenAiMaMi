// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x1407d5600
// name: sub_1407D5600
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1407D5600(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // rbx
  _QWORD *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // rsi
  __int64 v11; // rdi

  v2 = a1[9];
  if ( v2 )
    sub_140001660(a1[10], v2, 1);
  v3 = a1[12];
  if ( v3 != -1 )
  {
    v4 = a1[13];
    v5 = a1[14];
    if ( v5 )
    {
      v6 = (_QWORD *)(v4 + 8);
      do
      {
        v7 = *(v6 - 1);
        if ( v7 )
          sub_140001660(*v6, v7, 1);
        v6 += 3;
        --v5;
      }
      while ( v5 );
    }
    if ( v3 )
      sub_140001660(v4, 24 * v3, 8);
  }
  sub_1407D6120(a1 + 15);
  v8 = a1[155];
  result = (v8 - 0x7FFFFFFFFFFFFFFFLL) & (v8 >> 63);
  if ( !result )
  {
    v10 = 4096;
    v11 = 4;
    if ( v8 )
      sub_140001660(a1[156], v8, 1);
    return sub_140001660(a1[v11 + 155], v10, 1);
  }
  if ( result == 1 )
  {
    v10 = a1[156];
    v11 = 2;
    if ( v10 )
      return sub_140001660(a1[v11 + 155], v10, 1);
  }
  return result;
}