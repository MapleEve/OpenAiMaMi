// module: codexmate_lib/core/relay/router_reconciler
// addr: 0x14043f000
// name: sub_14043F000
// win 1.2.1 | module src/core/relay/router_reconciler.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14043F000(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rdi
  __int64 v6; // rbx
  _QWORD *v7; // r14
  __int64 v8; // rdx
  __int64 result; // rax
  __int64 v10; // rdx

  if ( *a1 )
    sub_140001660(a1[1], *a1, 1);
  v2 = a1[7];
  if ( v2 != -1 && v2 )
    sub_140001660(a1[8], v2, 1);
  v3 = a1[10];
  if ( v3 != -1 && v3 )
    sub_140001660(a1[11], v3, 1);
  v4 = a1[13];
  if ( v4 != -1 && v4 )
    sub_140001660(a1[14], v4, 1);
  v5 = a1[5];
  v6 = a1[6];
  if ( v6 )
  {
    v7 = (_QWORD *)(v5 + 8);
    do
    {
      v8 = *(v7 - 1);
      if ( v8 )
        sub_140001660(*v7, v8, 1);
      v7 += 3;
      --v6;
    }
    while ( v6 );
  }
  result = a1[4];
  if ( result )
    result = sub_140001660(v5, 24 * result, 8);
  v10 = a1[17];
  if ( v10 != -1 )
  {
    if ( v10 )
      return sub_140001660(a1[18], v10, 1);
  }
  return result;
}