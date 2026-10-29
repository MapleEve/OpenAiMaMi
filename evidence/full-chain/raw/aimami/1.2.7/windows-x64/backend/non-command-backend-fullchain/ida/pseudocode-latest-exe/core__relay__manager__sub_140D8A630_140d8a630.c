// win 1.2.7 latest-exe | module src/core/relay/manager.rs | ea 0x140d8a630 | successor of pre-update 0x140d1ccf0 | session <审计会话>
// match evidence: {"body_sim": 0.875, "str_ov": 0, "anchor": 0.066, "conf": 0.0, "verdict": "CONFIRMED_POOL_MATCH"}
double __fastcall sub_140D8A630(__int64 *a1)
{
  __int64 v2; // rdi
  __int64 v3; // r14
  __int64 v4; // rbx
  __int64 v5; // rdx
  double result; // xmm0_8
  __int64 v7; // rdi
  __int64 v8; // rbx
  _QWORD *v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rbx
  _QWORD *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rdx

  v2 = a1[13];
  v3 = a1[14];
  if ( v3 )
  {
    v4 = a1[13];
    do
    {
      sub_1401B16C0(v4);
      v4 += 256;
      --v3;
    }
    while ( v3 );
  }
  v5 = a1[12];
  if ( v5 )
    result = sub_140001660(v2, v5 << 8, 8);
  v7 = a1[16];
  v8 = a1[17];
  if ( v8 )
  {
    v9 = (_QWORD *)(v7 + 8);
    do
    {
      v10 = *(v9 - 1);
      if ( v10 )
        result = sub_140001660(*v9, v10, 1);
      v9 += 3;
      --v8;
    }
    while ( v8 );
  }
  v11 = a1[15];
  if ( v11 )
    result = sub_140001660(v7, 24 * v11, 8);
  v12 = a1[19];
  v13 = a1[20];
  if ( v13 )
  {
    v14 = (_QWORD *)(v12 + 56);
    do
    {
      v15 = *(v14 - 7);
      if ( v15 )
        result = sub_140001660(*(v14 - 6), v15, 1);
      v16 = *(v14 - 4);
      if ( v16 )
        result = sub_140001660(*(v14 - 3), v16, 1);
      v17 = *(v14 - 1);
      if ( v17 > 0 )
        result = sub_140001660(*v14, v17, 1);
      v14 += 9;
      --v13;
    }
    while ( v13 );
  }
  v18 = a1[18];
  if ( v18 )
    result = sub_140001660(v12, 72 * v18, 8);
  v19 = *a1;
  if ( *a1 != -1 )
  {
    v20 = a1[8];
    if ( v20 )
      result = sub_140001660(a1[9], v20, 1);
    if ( (_DWORD)v19 != 2 )
    {
      v21 = a1[2];
      if ( v21 )
        return sub_140001660(a1[3], v21, 1);
    }
  }
  return result;
}
