// win 1.2.7 latest-exe | module src/core/debug_bundle.rs | ea 0x140905260 | successor of pre-update 0x140bab3a0 | session <审计会话>
// match evidence: {"body_sim": 0.96, "str_ov": 0, "anchor": 0.192, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
double __fastcall sub_140905260(_QWORD *a1)
{
  __int64 v2; // rdi
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  double result; // xmm0_8
  __int64 v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdi
  _QWORD *v11; // rbx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rdi
  _QWORD *v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rdx
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // rdx

  sub_140038710(a1);
  v2 = a1[126];
  if ( v2 )
  {
    v3 = (_QWORD *)(a1[125] + 8LL);
    do
    {
      v4 = *(v3 - 1);
      if ( v4 )
        result = sub_140001660(*v3, v4, 1);
      v3 += 4;
      --v2;
    }
    while ( v2 );
  }
  v6 = a1[124];
  if ( v6 )
    result = sub_140001660(a1[125], 32 * v6, 8);
  v7 = a1[185];
  if ( v7 != -1 && v7 )
    result = sub_140001660(a1[186], v7, 1);
  v8 = a1[188];
  if ( v8 != -1 && v8 )
    result = sub_140001660(a1[189], v8, 1);
  sub_140907610(a1 + 127);
  sub_140235740(a1 + 175);
  v9 = a1[175];
  if ( v9 )
    result = sub_140001660(a1[176], 104 * v9, 8);
  v10 = a1[181];
  if ( v10 )
  {
    v11 = (_QWORD *)(a1[180] + 8LL);
    do
    {
      v12 = *(v11 - 1);
      if ( v12 )
        result = sub_140001660(*v11, v12, 1);
      v11 += 4;
      --v10;
    }
    while ( v10 );
  }
  v13 = a1[179];
  if ( v13 )
    result = sub_140001660(a1[180], 32 * v13, 8);
  v14 = a1[184];
  if ( v14 )
  {
    v15 = (_QWORD *)(a1[183] + 8LL);
    do
    {
      v16 = *(v15 - 1);
      if ( v16 )
        result = sub_140001660(*v15, v16, 1);
      v15 += 3;
      --v14;
    }
    while ( v14 );
  }
  v17 = a1[182];
  if ( v17 )
    result = sub_140001660(a1[183], 24 * v17, 8);
  v18 = a1[191];
  if ( v18 != -1 )
  {
    if ( v18 )
      result = sub_140001660(a1[192], v18, 1);
    v19 = a1[194];
    if ( v19 != -1 && v19 )
      result = sub_140001660(a1[195], v19, 1);
    v20 = a1[197];
    if ( v20 != -1 && v20 )
      result = sub_140001660(a1[198], v20, 1);
  }
  v21 = a1[202];
  if ( v21 != -1 )
  {
    if ( v21 )
      result = sub_140001660(a1[203], v21, 1);
    v22 = a1[205];
    if ( v22 != -1 )
    {
      if ( v22 )
        return sub_140001660(a1[206], v22, 1);
    }
  }
  return result;
}
