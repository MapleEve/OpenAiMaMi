// win 1.2.7 | module src/core/relay/proxy_server.rs | ea 0x1409e4df0 | name sub_1409E4DF0
// win 1.2.7 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1409E4DF0(__int64 *a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // rsi
  _QWORD *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rsi
  _QWORD *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 result; // rax
  __int64 v19; // [rsp+28h] [rbp-18h]
  __int64 v20; // [rsp+30h] [rbp-10h]
  __int64 v21; // [rsp+38h] [rbp-8h]

  v1 = *a1;
  v2 = *(_QWORD *)(*a1 + 32);
  v21 = v1;
  v19 = *(_QWORD *)(v1 + 40);
  v20 = 0;
  while ( v19 != v20 )
  {
    ++v20;
    v3 = v2 + 256;
    sub_14038CFC0(v2);
    v2 = v3;
  }
  v4 = *(_QWORD *)(v21 + 24);
  if ( v4 )
    sub_140001660(*(_QWORD *)(v21 + 32), v4 << 8, 8);
  v5 = *(_QWORD *)(v21 + 64);
  if ( v5 )
  {
    v6 = (_QWORD *)(*(_QWORD *)(v21 + 56) + 8LL);
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
  v8 = *(_QWORD *)(v21 + 48);
  if ( v8 )
    sub_140001660(*(_QWORD *)(v21 + 56), 24 * v8, 8);
  v9 = *(_QWORD *)(v21 + 72);
  if ( v9 )
    sub_140001660(*(_QWORD *)(v21 + 80), v9, 1);
  v10 = *(_QWORD *)(v21 + 96);
  if ( v10 )
    sub_140001660(*(_QWORD *)(v21 + 104), v10, 1);
  v11 = *(_QWORD *)(v21 + 120);
  if ( v11 != -1 && v11 )
    sub_140001660(*(_QWORD *)(v21 + 128), v11, 1);
  v12 = *(_QWORD *)(v21 + 168);
  if ( v12 )
  {
    v13 = (_QWORD *)(*(_QWORD *)(v21 + 160) + 56LL);
    do
    {
      v14 = *(v13 - 7);
      if ( v14 )
        sub_140001660(*(v13 - 6), v14, 1);
      v15 = *(v13 - 4);
      if ( v15 )
        sub_140001660(*(v13 - 3), v15, 1);
      v16 = *(v13 - 1);
      if ( v16 != -1 && v16 )
        sub_140001660(*v13, v16, 1);
      v13 += 9;
      --v12;
    }
    while ( v12 );
  }
  v17 = *(_QWORD *)(v21 + 152);
  if ( v17 )
    sub_140001660(*(_QWORD *)(v21 + 160), 72 * v17, 8);
  result = sub_140020F20(v21 + 176);
  if ( v21 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v21 + 8)) )
    return sub_140001660(v21, 408, 8);
  return result;
}
