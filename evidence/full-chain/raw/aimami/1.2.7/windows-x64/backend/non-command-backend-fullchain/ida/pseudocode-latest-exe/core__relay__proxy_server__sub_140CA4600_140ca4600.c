// win 1.2.7 latest-exe | module src/core/relay/proxy_server.rs | ea 0x140ca4600 | successor of pre-update 0x1409e4df0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.925, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
double __fastcall sub_140CA4600(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdx
  double result; // xmm0_8
  __int64 v6; // rdi
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdi
  _QWORD *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rax

  v1 = *a1;
  v2 = *(_QWORD *)(*a1 + 40);
  if ( v2 )
  {
    v3 = *(_QWORD *)(v1 + 32);
    do
    {
      sub_1401B16C0(v3);
      v3 += 256;
      --v2;
    }
    while ( v2 );
  }
  v4 = *(_QWORD *)(v1 + 24);
  if ( v4 )
    result = sub_140001660(*(_QWORD *)(v1 + 32), v4 << 8, 8);
  v6 = *(_QWORD *)(v1 + 64);
  if ( v6 )
  {
    v7 = (_QWORD *)(*(_QWORD *)(v1 + 56) + 8LL);
    do
    {
      v8 = *(v7 - 1);
      if ( v8 )
        result = sub_140001660(*v7, v8, 1);
      v7 += 3;
      --v6;
    }
    while ( v6 );
  }
  v9 = *(_QWORD *)(v1 + 48);
  if ( v9 )
    result = sub_140001660(*(_QWORD *)(v1 + 56), 24 * v9, 8);
  v10 = *(_QWORD *)(v1 + 72);
  if ( v10 )
    result = sub_140001660(*(_QWORD *)(v1 + 80), v10, 1);
  v11 = *(_QWORD *)(v1 + 96);
  if ( v11 )
    result = sub_140001660(*(_QWORD *)(v1 + 104), v11, 1);
  v12 = *(_QWORD *)(v1 + 120);
  if ( v12 != -1 && v12 )
    result = sub_140001660(*(_QWORD *)(v1 + 128), v12, 1);
  v13 = *(_QWORD *)(v1 + 168);
  if ( v13 )
  {
    v14 = (_QWORD *)(*(_QWORD *)(v1 + 160) + 56LL);
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
  v18 = *(_QWORD *)(v1 + 152);
  if ( v18 )
    result = sub_140001660(*(_QWORD *)(v1 + 160), 72 * v18, 8);
  sub_1400262A0(v1 + 176);
  if ( v1 != -1 && !_InterlockedDecrement64((volatile signed __int64 *)(v1 + 8)) )
    return sub_140001660(v1, 408, 8);
  return result;
}
