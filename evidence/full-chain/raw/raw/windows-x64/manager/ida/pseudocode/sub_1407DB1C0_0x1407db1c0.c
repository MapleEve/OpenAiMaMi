// module: codexmate_lib/core/relay/manager
// addr: 0x1407db1c0
// name: sub_1407DB1C0
// win 1.2.1 | module src/core/relay/manager.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1407DB1C0(_QWORD *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // [rsp+28h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-20h]
  __int64 v11; // [rsp+40h] [rbp-10h]

  v8 = a1[2];
  v9 = 0;
  v11 = a1[1];
  v1 = v11;
  while ( v8 != v9 )
  {
    ++v9;
    v2 = v1 + 232;
    sub_140018960(v1);
    v1 = v2;
  }
  if ( *a1 )
    sub_140001660(v11, 232LL * *a1, 8);
  v3 = a1[4];
  v4 = a1[5];
  if ( v4 )
  {
    v5 = (_QWORD *)(v3 + 8);
    do
    {
      v6 = *(v5 - 1);
      if ( v6 )
        sub_140001660(*v5, v6, 1);
      v5 += 3;
      --v4;
    }
    while ( v4 );
  }
  result = a1[3];
  if ( result )
    return sub_140001660(v3, 24 * result, 8);
  return result;
}