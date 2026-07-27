// module: codexmate_lib/core/voice/aliyun_asr
// addr: 0x1402c6fa0
// name: sub_1402C6FA0
// win 1.2.1 | module src/core/voice/aliyun_asr.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1402C6FA0(__int64 *a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdi
  __int64 v7; // rbx
  _QWORD *v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx

  v2 = *a1;
  if ( *a1 == -1 )
  {
    v11 = a1[1];
    if ( v11 )
      return sub_140001660(a1[2], v11, 1);
  }
  else
  {
    if ( v2 )
      result = sub_140001660(a1[1], v2, 1);
    v4 = a1[3];
    if ( v4 )
      result = sub_140001660(a1[4], 8 * v4, 2);
    v5 = a1[10];
    if ( v5 != -1 && v5 )
      result = sub_140001660(a1[11], v5, 1);
    v6 = a1[8];
    v7 = a1[9];
    if ( v7 )
    {
      v8 = (_QWORD *)(v6 + 8);
      do
      {
        v9 = *(v8 - 1);
        if ( v9 != -1 && v9 )
          result = sub_140001660(*v8, v9, 1);
        v8 += 4;
        --v7;
      }
      while ( v7 );
    }
    v10 = a1[7];
    if ( v10 )
      return sub_140001660(v6, 32 * v10, 8);
  }
  return result;
}