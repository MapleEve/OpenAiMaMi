// win 1.2.7 latest-exe | module src/core/analytics/index.rs | ea 0x1409078a0 | successor of pre-update 0x140e98950 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.899, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
double __fastcall sub_1409078A0(_QWORD *a1)
{
  __int64 v2; // rdx
  double result; // xmm0_8
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  __int64 v13; // rdx
  _QWORD *v14; // r15
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // r14
  __int64 v17; // rdi
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  unsigned __int64 v20; // r15
  unsigned __int64 v21; // r12
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // r12
  bool v24; // cf
  _QWORD *v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 i; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rsi
  _QWORD *v35; // r15
  __int64 v36; // rax
  __int64 v37; // rdi
  __int64 v38; // rsi
  __int64 v39; // rbx
  _QWORD *v40; // r14
  __int64 v41; // rdx
  _QWORD *v42; // r13
  __int64 v43; // rdx
  _QWORD v44[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v45; // [rsp+30h] [rbp-50h]
  __int64 v46; // [rsp+38h] [rbp-48h] BYREF
  __int64 v47; // [rsp+40h] [rbp-40h]
  __int64 v48; // [rsp+48h] [rbp-38h]
  __int64 v49; // [rsp+50h] [rbp-30h]
  __int64 v50; // [rsp+58h] [rbp-28h]
  __int64 v51; // [rsp+60h] [rbp-20h]
  __int64 v52; // [rsp+68h] [rbp-18h]
  __int64 v53; // [rsp+70h] [rbp-10h]
  __int64 v54; // [rsp+78h] [rbp-8h]
  _QWORD *v55; // [rsp+80h] [rbp+0h]
  __int64 v56; // [rsp+88h] [rbp+8h]
  _QWORD *v57; // [rsp+90h] [rbp+10h]
  _QWORD *v58; // [rsp+98h] [rbp+18h]
  __int64 v59; // [rsp+A0h] [rbp+20h]

  v59 = -2;
  v2 = a1[20];
  if ( v2 )
    result = sub_140001660(a1[21], v2, 1);
  v4 = a1[50];
  v58 = a1;
  if ( v4 )
  {
    v5 = a1[51];
    v6 = a1[52];
    v47 = 0;
    v48 = v4;
    v49 = v5;
    v51 = 0;
    v52 = v4;
    v53 = v5;
    v7 = 1;
  }
  else
  {
    v7 = 0;
    v6 = 0;
  }
  v46 = v7;
  v50 = v7;
  v54 = v6;
  do
    sub_140A727A0(v44, &v46);
  while ( v44[0] );
  v8 = v58;
  if ( *((_DWORD *)v58 + 8) != 2 )
  {
    v9 = v58[6];
    if ( v9 )
      result = sub_140001660(v58[7], v9, 1);
  }
  v10 = v8[23];
  if ( v10 )
    result = sub_140001660(v8[24], v10, 1);
  v11 = v8[40];
  if ( v11 != -1 && v11 )
    result = sub_140001660(v8[41], v11, 1);
  v12 = v8[26];
  if ( v12 )
    result = sub_140001660(v8[27], v12, 1);
  v13 = v8[43];
  if ( v13 != -1 && v13 )
    result = sub_140001660(v8[44], v13, 1);
  sub_140A95430(v8 + 53);
  v14 = v58;
  v15 = v58[29];
  v16 = v58[32];
  if ( v16 )
  {
    v17 = v58[30];
    v18 = v58[31];
    v19 = v58[29];
    if ( v18 < v15 )
      v19 = 0;
    v20 = v15 - (v18 - v19);
    v21 = v18 - v19 + v16;
    v22 = v16 - v20;
    if ( v16 < v20 )
      v22 = 0;
    if ( v16 > v20 )
      v21 = v58[29];
    v23 = v21 - (v18 - v19);
    if ( v23 )
    {
      v42 = (_QWORD *)(24 * v18 - 24 * v19 + v17 + 8);
      do
      {
        v43 = *(v42 - 1);
        if ( v43 )
          result = sub_140001660(*v42, v43, 1);
        v42 += 3;
        --v23;
      }
      while ( v23 );
    }
    v24 = v20 < v16;
    v14 = v58;
    if ( v24 )
    {
      v25 = (_QWORD *)(v17 + 8);
      do
      {
        v26 = *(v25 - 1);
        if ( v26 )
          result = sub_140001660(*v25, v26, 1);
        v25 += 3;
        --v22;
      }
      while ( v22 );
    }
  }
  if ( v15 )
    result = sub_140001660(v14[30], 24 * v15, 8);
  v27 = v14[56];
  if ( v27 )
  {
    v28 = v14[57];
    v29 = v14[58];
    v47 = 0;
    v48 = v27;
    v49 = v28;
    v51 = 0;
    v52 = v27;
    v53 = v28;
    v30 = 1;
  }
  else
  {
    v30 = 0;
    v29 = 0;
  }
  v46 = v30;
  v50 = v30;
  v54 = v29;
  sub_140A71C20(v44, &v46);
  for ( i = v44[0]; v44[0]; i = v44[0] )
  {
    v32 = *(_QWORD *)(i + 24 * v45 + 8);
    if ( v32 )
      result = sub_140001660(*(_QWORD *)(i + 24 * v45 + 16), v32, 1);
    sub_140A71C20(v44, &v46);
  }
  v33 = v58[34];
  v55 = (_QWORD *)v58[35];
  v57 = nullptr;
  v56 = v33;
  while ( v55 != v57 )
  {
    v57 = (_QWORD *)((char *)v57 + 1);
    v34 = v33 + 144;
    sub_1401B1A20();
    v33 = v34;
  }
  v35 = v58;
  v36 = v58[33];
  if ( v36 )
    result = sub_140001660(v56, 144 * v36, 8);
  v37 = v35[46];
  if ( v37 != -1 )
  {
    v38 = v35[47];
    v39 = v35[48];
    if ( v39 )
    {
      v40 = (_QWORD *)(v38 + 8);
      do
      {
        v41 = *(v40 - 1);
        if ( v41 )
          result = sub_140001660(*v40, v41, 1);
        v40 += 3;
        --v39;
      }
      while ( v39 );
    }
    if ( v37 )
      result = sub_140001660(v38, 24 * v37, 8);
  }
  sub_140A94990(v35 + 59);
  v57 = v58 + 36;
  sub_140224130();
  if ( *v57 )
    return sub_140001660(v58[37], 56LL * *v57, 8);
  return result;
}
