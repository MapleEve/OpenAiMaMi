// win 1.2.7 | module src/core/debug_bundle.rs | ea 0x140bab3a0 | name sub_140BAB3A0
// win 1.2.7 | module src/core/debug_bundle.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140BAB3A0(_QWORD *a1)
{
  __int64 v2; // rsi
  _QWORD *v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rax
  __int64 v9; // rsi
  _QWORD *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rsi
  _QWORD *v14; // rdi
  __int64 v15; // rdx
  __int64 result; // rax
  __int64 v17; // rdx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx

  sub_140034990(a1);
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
  v6 = a1[185];
  if ( v6 != -1 && v6 )
    sub_140001660(a1[186], v6, 1);
  v7 = a1[188];
  if ( v7 != -1 && v7 )
    sub_140001660(a1[189], v7, 1);
  sub_1407ADB20(a1 + 127);
  sub_1403FBD20(a1 + 175);
  v8 = a1[175];
  if ( v8 )
    sub_140001660(a1[176], 104 * v8, 8);
  v9 = a1[181];
  if ( v9 )
  {
    v10 = (_QWORD *)(a1[180] + 8LL);
    do
    {
      v11 = *(v10 - 1);
      if ( v11 )
        sub_140001660(*v10, v11, 1);
      v10 += 4;
      --v9;
    }
    while ( v9 );
  }
  v12 = a1[179];
  if ( v12 )
    sub_140001660(a1[180], 32 * v12, 8);
  v13 = a1[184];
  if ( v13 )
  {
    v14 = (_QWORD *)(a1[183] + 8LL);
    do
    {
      v15 = *(v14 - 1);
      if ( v15 )
        sub_140001660(*v14, v15, 1);
      v14 += 3;
      --v13;
    }
    while ( v13 );
  }
  result = a1[182];
  if ( result )
    result = sub_140001660(a1[183], 24 * result, 8);
  v17 = a1[191];
  if ( v17 != -1 )
  {
    if ( v17 )
      result = sub_140001660(a1[192], v17, 1);
    v18 = a1[194];
    if ( v18 != -1 && v18 )
      result = sub_140001660(a1[195], v18, 1);
    v19 = a1[197];
    if ( v19 != -1 && v19 )
      result = sub_140001660(a1[198], v19, 1);
  }
  v20 = a1[202];
  if ( v20 != -1 )
  {
    if ( v20 )
      result = sub_140001660(a1[203], v20, 1);
    v21 = a1[205];
    if ( v21 != -1 )
    {
      if ( v21 )
        return sub_140001660(a1[206], v21, 1);
    }
  }
  return result;
}
