// module: codexmate_lib/core/relay/proxy_server
// addr: 0x140574db0
// name: sub_140574DB0
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140574DB0(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // rsi
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 result; // rax
  __int64 v13; // [rsp+28h] [rbp-18h]
  __int64 v14; // [rsp+30h] [rbp-10h]
  __int64 v15; // [rsp+38h] [rbp-8h]

  v1 = *a1;
  v2 = *(_QWORD *)(*a1 + 32);
  v15 = v1;
  v13 = *(_QWORD *)(v1 + 40);
  v14 = 0;
  while ( v13 != v14 )
  {
    ++v14;
    v3 = v2 + 232;
    sub_140018960(v2);
    v2 = v3;
  }
  v4 = *(_QWORD *)(v15 + 24);
  if ( v4 )
    sub_140001660(*(_QWORD *)(v15 + 32), 232 * v4, 8);
  v5 = *(_QWORD *)(v15 + 64);
  if ( v5 )
  {
    v6 = (_QWORD *)(*(_QWORD *)(v15 + 56) + 8LL);
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
  v8 = *(_QWORD *)(v15 + 48);
  if ( v8 )
    sub_140001660(*(_QWORD *)(v15 + 56), 24 * v8, 8);
  v9 = *(_QWORD *)(v15 + 72);
  if ( v9 )
    sub_140001660(*(_QWORD *)(v15 + 80), v9, 1);
  v10 = *(_QWORD *)(v15 + 96);
  if ( v10 )
    sub_140001660(*(_QWORD *)(v15 + 104), v10, 1);
  v11 = *(_QWORD *)(v15 + 120);
  if ( v11 != -1 && v11 )
    sub_140001660(*(_QWORD *)(v15 + 128), v11, 1);
  result = sub_140009140(v15 + 152);
  if ( v15 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v15 + 8)) )
    return sub_140001660(v15, 320, 8);
  return result;
}