// module: codexmate_lib/core/relay/proxy_server
// addr: 0x1406ced30
// name: sub_1406CED30
// win 1.2.1 | module src/core/relay/proxy_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1406CED30(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rsi
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // [rsp+20h] [rbp-20h]
  __int64 v14; // [rsp+28h] [rbp-18h]
  __int64 v15; // [rsp+30h] [rbp-10h]
  __int64 v16; // [rsp+38h] [rbp-8h]

  if ( *(_QWORD *)a1 )
    sub_140001660(*(_QWORD *)(a1 + 8), *(_QWORD *)a1, 1);
  v2 = *(_QWORD *)(a1 + 24);
  if ( v2 )
    sub_140001660(*(_QWORD *)(a1 + 32), v2, 1);
  v3 = *(_QWORD *)(a1 + 72);
  if ( v3 != -1 )
  {
    if ( v3 )
      sub_140001660(*(_QWORD *)(a1 + 80), v3, 1);
    v4 = *(_QWORD *)(a1 + 96);
    if ( v4 )
      sub_140001660(*(_QWORD *)(a1 + 104), v4, 1);
    v5 = *(_QWORD *)(a1 + 120);
    if ( v5 )
      sub_140001660(*(_QWORD *)(a1 + 128), v5, 1);
    v6 = *(_QWORD *)(a1 + 144);
    if ( v6 )
      sub_140001660(*(_QWORD *)(a1 + 152), v6, 1);
  }
  v7 = *(_QWORD *)(a1 + 176);
  if ( v7 != -1 )
  {
    if ( v7 )
      sub_140001660(*(_QWORD *)(a1 + 184), v7, 1);
    v8 = *(_QWORD *)(a1 + 200);
    if ( v8 )
      sub_140001660(*(_QWORD *)(a1 + 208), v8, 1);
  }
  v16 = a1;
  sub_1406813C0((const __m128i **)(a1 + 232));
  sub_14067EB80(a1 + 280);
  v9 = *(_QWORD *)(a1 + 56);
  v13 = *(_QWORD *)(a1 + 64);
  v14 = 0;
  v15 = v9;
  while ( v13 != v14 )
  {
    ++v14;
    v10 = v9 + 32;
    sub_1402C3260();
    v9 = v10;
  }
  result = v16;
  v12 = *(_QWORD *)(v16 + 48);
  if ( v12 )
    return sub_140001660(v15, 32 * v12, 8);
  return result;
}