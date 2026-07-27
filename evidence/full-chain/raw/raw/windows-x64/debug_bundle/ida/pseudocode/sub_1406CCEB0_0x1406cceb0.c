// module: codexmate_lib/core/debug_bundle
// addr: 0x1406cceb0
// name: sub_1406CCEB0
// win 1.2.1 | module src/core/debug_bundle.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_1406CCEB0(_QWORD *a1)
{
  __int64 v2; // rsi
  _QWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rsi
  _QWORD *v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rsi
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  __int64 result; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx

  sub_140016620(a1);
  v2 = a1[126];
  if ( v2 )
  {
    v3 = (_QWORD *)(a1[125] + 8LL);
    do
    {
      v4 = *(v3 - 1);
      if ( v4 )
        sub_140001660(*v3, v4, 1);
      v3 += 4;
      --v2;
    }
    while ( v2 );
  }
  v5 = a1[124];
  if ( v5 )
    sub_140001660(a1[125], 32 * v5, 8);
  v6 = a1[174];
  if ( v6 != -1 && v6 )
    sub_140001660(a1[175], v6, 1);
  v7 = a1[177];
  if ( v7 != -1 && v7 )
    sub_140001660(a1[178], v7, 1);
  sub_1405E7AE0(a1 + 127);
  sub_1403351C0(a1 + 164, v8);
  v9 = a1[164];
  if ( v9 )
    sub_140001660(a1[165], 104 * v9, 8);
  v10 = a1[170];
  if ( v10 )
  {
    v11 = (_QWORD *)(a1[169] + 8LL);
    do
    {
      v12 = *(v11 - 1);
      if ( v12 )
        sub_140001660(*v11, v12, 1);
      v11 += 4;
      --v10;
    }
    while ( v10 );
  }
  v13 = a1[168];
  if ( v13 )
    sub_140001660(a1[169], 32 * v13, 8);
  v14 = a1[173];
  if ( v14 )
  {
    v15 = (_QWORD *)(a1[172] + 8LL);
    do
    {
      v16 = *(v15 - 1);
      if ( v16 )
        sub_140001660(*v15, v16, 1);
      v15 += 3;
      --v14;
    }
    while ( v14 );
  }
  result = a1[171];
  if ( result )
    result = sub_140001660(a1[172], 24 * result, 8);
  v18 = a1[180];
  if ( v18 != -1 )
  {
    if ( v18 )
      result = sub_140001660(a1[181], v18, 1);
    v19 = a1[183];
    if ( v19 != -1 && v19 )
      result = sub_140001660(a1[184], v19, 1);
  }
  v20 = a1[188];
  if ( v20 != -1 )
  {
    if ( v20 )
      result = sub_140001660(a1[189], v20, 1);
    v21 = a1[191];
    if ( v21 != -1 )
    {
      if ( v21 )
        return sub_140001660(a1[192], v21, 1);
    }
  }
  return result;
}