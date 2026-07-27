// module: codexmate_lib/core/voice/workspace
// addr: 0x1406ce470
// name: sub_1406CE470
// win 1.2.1 | module src/core/voice/workspace.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1406CE470(__int64 a1)
{
  _QWORD *v1; // rcx
  _QWORD *v2; // rsi
  __int64 v3; // rax
  __int64 v4; // rsi
  __int64 v5; // rdi
  _QWORD *v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rsi
  __int64 result; // rax
  __int64 v14; // [rsp+28h] [rbp-28h]
  __int64 v15; // [rsp+28h] [rbp-28h]
  _QWORD *v16; // [rsp+30h] [rbp-20h]
  _QWORD *v17; // [rsp+30h] [rbp-20h]
  __int64 v18; // [rsp+38h] [rbp-18h]
  __int64 v19; // [rsp+38h] [rbp-18h]
  __int64 v20; // [rsp+38h] [rbp-18h]

  v18 = *(_QWORD *)(a1 + 8);
  sub_1402C8EE0(v18, *(_QWORD *)(a1 + 16));
  if ( *(_QWORD *)a1 )
    sub_140001660(v18, 112LL * *(_QWORD *)a1, 8);
  v1 = *(_QWORD **)(a1 + 32);
  v14 = *(_QWORD *)(a1 + 40);
  v19 = 0;
  v16 = v1;
  while ( v14 != v19 )
  {
    ++v19;
    v2 = v1 + 20;
    sub_1402C64E0(v1);
    v1 = v2;
  }
  v3 = *(_QWORD *)(a1 + 24);
  if ( v3 )
    sub_140001660(v16, 160 * v3, 8);
  v4 = *(_QWORD *)(a1 + 56);
  v5 = *(_QWORD *)(a1 + 64);
  if ( v5 )
  {
    v6 = (_QWORD *)(v4 + 56);
    do
    {
      v7 = *(v6 - 7);
      if ( v7 )
        sub_140001660(*(v6 - 6), v7, 1);
      v8 = *(v6 - 4);
      if ( v8 )
        sub_140001660(*(v6 - 3), v8, 1);
      v9 = *(v6 - 1);
      if ( v9 )
        sub_140001660(*v6, v9, 1);
      v6 += 9;
      --v5;
    }
    while ( v5 );
  }
  v10 = *(_QWORD *)(a1 + 48);
  if ( v10 )
    sub_140001660(v4, 72 * v10, 8);
  v11 = *(_QWORD **)(a1 + 80);
  v15 = *(_QWORD *)(a1 + 88);
  v20 = 0;
  v17 = v11;
  while ( v15 != v20 )
  {
    ++v20;
    v12 = v11 + 55;
    sub_1402C61B0(v11);
    v11 = v12;
  }
  result = *(_QWORD *)(a1 + 72);
  if ( result )
    result = sub_140001660(v17, 440 * result, 8);
  if ( *(_BYTE *)(a1 + 96) != 0xFF )
    return sub_1400104F0(a1 + 96);
  return result;
}