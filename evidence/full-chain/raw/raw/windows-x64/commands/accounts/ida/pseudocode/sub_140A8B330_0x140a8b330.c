// module: codexmate_lib/commands/accounts
// addr: 0x140a8b330
// name: sub_140A8B330
// win 1.2.1 | module src/commands/accounts.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140A8B330(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdi
  __int64 v5; // rbx
  _QWORD *v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax

  v2 = a1[102];
  if ( v2 )
    sub_140001660(a1[103], v2, 1);
  v3 = a1[105];
  if ( v3 )
    sub_140001660(a1[106], v3, 1);
  v4 = a1[109];
  v5 = a1[110];
  if ( v5 )
  {
    v6 = (_QWORD *)(v4 + 32);
    do
    {
      v7 = *(v6 - 4);
      if ( v7 )
        sub_140001660(*(v6 - 3), v7, 1);
      v8 = *(v6 - 1);
      if ( v8 )
        sub_140001660(*v6, v8, 1);
      v6 += 6;
      --v5;
    }
    while ( v5 );
  }
  v9 = a1[108];
  if ( v9 )
    sub_140001660(v4, 48 * v9, 8);
  return sub_140A8ED10(a1);
}