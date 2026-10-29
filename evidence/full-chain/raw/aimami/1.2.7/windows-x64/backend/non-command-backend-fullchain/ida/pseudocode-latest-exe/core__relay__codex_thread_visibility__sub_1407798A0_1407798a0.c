// win 1.2.7 latest-exe | module src/core/relay/codex_thread_visibility.rs | ea 0x1407798a0 | successor of pre-update 0x1403fbef0 | session <审计会话>
// match evidence: {"body_sim": 0.4, "str_ov": 0, "anchor": 0.066, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
double __fastcall sub_1407798A0(_QWORD *a1)
{
  double result; // xmm0_8
  __int64 v3; // rdi
  __int64 v4; // rbx
  _QWORD *v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rbx
  _QWORD *v10; // r14
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdi
  __int64 v14; // rbx
  _QWORD *v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rbx
  _QWORD *v21; // r14
  __int64 v22; // rdx
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rax

  if ( *a1 )
    result = sub_140001660(a1[1], *a1, 1);
  v3 = a1[4];
  v4 = a1[5];
  if ( v4 )
  {
    v5 = (_QWORD *)(v3 + 8);
    do
    {
      v6 = *(v5 - 1);
      if ( v6 )
        result = sub_140001660(*v5, v6, 1);
      v5 += 3;
      --v4;
    }
    while ( v4 );
  }
  v7 = a1[3];
  if ( v7 )
    result = sub_140001660(v3, 24 * v7, 8);
  v8 = a1[7];
  v9 = a1[8];
  if ( v9 )
  {
    v10 = (_QWORD *)(v8 + 8);
    do
    {
      v11 = *(v10 - 1);
      if ( v11 )
        result = sub_140001660(*v10, v11, 1);
      v10 += 4;
      --v9;
    }
    while ( v9 );
  }
  v12 = a1[6];
  if ( v12 )
    result = sub_140001660(v8, 32 * v12, 8);
  v13 = a1[10];
  v14 = a1[11];
  if ( v14 )
  {
    v15 = (_QWORD *)(v13 + 32);
    do
    {
      v16 = *(v15 - 4);
      if ( v16 )
        result = sub_140001660(*(v15 - 3), v16, 1);
      v17 = *(v15 - 1);
      if ( v17 )
        result = sub_140001660(*v15, v17, 1);
      v15 += 11;
      --v14;
    }
    while ( v14 );
  }
  v18 = a1[9];
  if ( v18 )
    result = sub_140001660(v13, 88 * v18, 8);
  v19 = a1[13];
  v20 = a1[14];
  if ( v20 )
  {
    v21 = (_QWORD *)(v19 + 64);
    do
    {
      v22 = *(v21 - 8);
      if ( v22 )
        result = sub_140001660(*(v21 - 7), v22, 1);
      v23 = *(v21 - 5);
      if ( v23 )
        result = sub_140001660(*(v21 - 4), v23, 1);
      v24 = *(v21 - 1);
      if ( v24 > 0 )
        result = sub_140001660(*v21, v24, 1);
      v21 += 15;
      --v20;
    }
    while ( v20 );
  }
  v25 = a1[12];
  if ( v25 )
    return sub_140001660(v19, 120 * v25, 8);
  return result;
}
