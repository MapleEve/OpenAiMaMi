// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1405e7ae0
// name: sub_1405E7AE0
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1405E7AE0(_QWORD *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rsi
  __int64 v3; // rsi
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v12; // [rsp+28h] [rbp-28h]
  __int64 v13; // [rsp+30h] [rbp-20h]
  __int64 v15; // [rsp+40h] [rbp-10h]

  v12 = a1[2];
  v13 = 0;
  v15 = a1[1];
  v1 = v15;
  while ( v12 != v13 )
  {
    ++v13;
    v2 = v1 + 232;
    sub_140018960(v1);
    v1 = v2;
  }
  if ( *a1 )
    sub_140001660(v15, 232LL * *a1, 8);
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
  v7 = a1[3];
  if ( v7 )
    sub_140001660(v3, 24 * v7, 8);
  v8 = a1[6];
  if ( v8 )
    sub_140001660(a1[7], v8, 1);
  v9 = a1[9];
  if ( v9 )
    sub_140001660(a1[10], v9, 1);
  v10 = a1[12];
  if ( v10 != -1 && v10 )
    sub_140001660(a1[13], v10, 1);
  return sub_140009140(a1 + 16);
}