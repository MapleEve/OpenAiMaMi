// win 1.2.7 | module src/core/analytics/index.rs | ea 0x140e98950 | name sub_140E98950
// win 1.2.7 | module src/core/analytics/index.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_140E98950(_QWORD *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  _QWORD *v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // rdx
  __int64 v12; // rdx
  _QWORD *v13; // r15
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // r14
  __int64 v16; // rdi
  unsigned __int64 v17; // rax
  __int64 v18; // rcx
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // r12
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r12
  bool v23; // cf
  _QWORD *v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 i; // rax
  __int64 v31; // rdx
  _QWORD *v32; // rcx
  _QWORD *v33; // rsi
  _QWORD *v34; // r15
  __int64 v35; // rax
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rbx
  _QWORD *v39; // r14
  __int64 v40; // rdx
  unsigned __int64 v41; // r9
  unsigned __int64 v42; // rdx
  unsigned __int64 v43; // rax
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rax
  unsigned __int64 v46; // rdx
  _QWORD *v47; // r13
  __int64 v48; // rdx
  __int64 result; // rax
  _QWORD v50[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v51; // [rsp+30h] [rbp-50h]
  __int64 v52; // [rsp+38h] [rbp-48h] BYREF
  __int64 v53; // [rsp+40h] [rbp-40h]
  __int64 v54; // [rsp+48h] [rbp-38h]
  __int64 v55; // [rsp+50h] [rbp-30h]
  __int64 v56; // [rsp+58h] [rbp-28h]
  __int64 v57; // [rsp+60h] [rbp-20h]
  __int64 v58; // [rsp+68h] [rbp-18h]
  __int64 v59; // [rsp+70h] [rbp-10h]
  __int64 v60; // [rsp+78h] [rbp-8h]
  __int64 v61; // [rsp+80h] [rbp+0h]
  __int64 v62; // [rsp+88h] [rbp+8h]
  _QWORD *v63; // [rsp+90h] [rbp+10h]
  _QWORD *v64; // [rsp+98h] [rbp+18h]
  __int64 v65; // [rsp+A0h] [rbp+20h]

  v65 = -2;
  v2 = a1[20];
  if ( v2 )
    sub_140001660(a1[21], v2, 1);
  v3 = a1[50];
  v64 = a1;
  if ( v3 )
  {
    v4 = a1[51];
    v5 = a1[52];
    v53 = 0;
    v54 = v3;
    v55 = v4;
    v57 = 0;
    v58 = v3;
    v59 = v4;
    v6 = 1;
  }
  else
  {
    v6 = 0;
    v5 = 0;
  }
  v52 = v6;
  v56 = v6;
  v60 = v5;
  do
    sub_140E85300(v50, &v52);
  while ( v50[0] );
  v7 = v64;
  if ( *((_DWORD *)v64 + 8) != 2 )
  {
    v8 = v64[6];
    if ( v8 )
      sub_140001660(v64[7], v8, 1);
  }
  v9 = v7[23];
  if ( v9 )
    sub_140001660(v7[24], v9, 1);
  v10 = v7[40];
  if ( v10 != -1 && v10 )
    sub_140001660(v7[41], v10, 1);
  v11 = v7[26];
  if ( v11 )
    sub_140001660(v7[27], v11, 1);
  v12 = v7[43];
  if ( v12 != -1 && v12 )
    sub_140001660(v7[44], v12, 1);
  sub_140E8B8F0(v7 + 53);
  v13 = v64;
  v14 = v64[29];
  v15 = v64[32];
  if ( v15 )
  {
    v16 = v64[30];
    v17 = v64[31];
    v18 = v64[29];
    if ( v17 < v14 )
      v18 = 0;
    v19 = v14 - (v17 - v18);
    v20 = v17 - v18 + v15;
    v21 = v15 - v19;
    if ( v15 < v19 )
      v21 = 0;
    if ( v15 > v19 )
      v20 = v64[29];
    v22 = v20 - (v17 - v18);
    if ( v22 )
    {
      v47 = (_QWORD *)(24 * v17 - 24 * v18 + v16 + 8);
      do
      {
        v48 = *(v47 - 1);
        if ( v48 )
          sub_140001660(*v47, v48, 1);
        v47 += 3;
        --v22;
      }
      while ( v22 );
    }
    v23 = v19 < v15;
    v13 = v64;
    if ( v23 )
    {
      v24 = (_QWORD *)(v16 + 8);
      do
      {
        v25 = *(v24 - 1);
        if ( v25 )
          sub_140001660(*v24, v25, 1);
        v24 += 3;
        --v21;
      }
      while ( v21 );
    }
  }
  if ( v14 )
    sub_140001660(v13[30], 24 * v14, 8);
  v26 = v13[56];
  if ( v26 )
  {
    v27 = v13[57];
    v28 = v13[58];
    v53 = 0;
    v54 = v26;
    v55 = v27;
    v57 = 0;
    v58 = v26;
    v59 = v27;
    v29 = 1;
  }
  else
  {
    v29 = 0;
    v28 = 0;
  }
  v52 = v29;
  v56 = v29;
  v60 = v28;
  sub_140E84780(v50, &v52);
  for ( i = v50[0]; v50[0]; i = v50[0] )
  {
    v31 = *(_QWORD *)(i + 24 * v51 + 8);
    if ( v31 )
      sub_140001660(*(_QWORD *)(i + 24 * v51 + 16), v31, 1);
    sub_140E84780(v50, &v52);
  }
  v32 = (_QWORD *)v64[34];
  v61 = v64[35];
  v62 = 0;
  v63 = v32;
  while ( v61 != v62 )
  {
    ++v62;
    v33 = v32 + 18;
    sub_14038D330(v32);
    v32 = v33;
  }
  v34 = v64;
  v35 = v64[33];
  if ( v35 )
    sub_140001660(v63, 144 * v35, 8);
  v36 = v34[46];
  if ( v36 != -1 )
  {
    v37 = v34[47];
    v38 = v34[48];
    if ( v38 )
    {
      v39 = (_QWORD *)(v37 + 8);
      do
      {
        v40 = *(v39 - 1);
        if ( v40 )
          sub_140001660(*v39, v40, 1);
        v39 += 3;
        --v38;
      }
      while ( v38 );
    }
    if ( v36 )
      sub_140001660(v37, 24 * v36, 8);
  }
  sub_140E8A940(v34 + 59);
  v41 = v64[36];
  v42 = v64[39];
  v61 = v41;
  if ( v42 )
  {
    v43 = v64[38];
    v44 = 0;
    if ( v43 >= v41 )
      v44 = v41;
    v45 = v43 - v44;
    if ( v42 <= v41 - v45 )
    {
      v46 = v45 + v42;
      v63 = nullptr;
    }
    else
    {
      v63 = (_QWORD *)(v42 - (v41 - v45));
      v46 = v41;
    }
  }
  else
  {
    v63 = nullptr;
    v46 = 0;
    v45 = 0;
  }
  v62 = v64[37];
  sub_140035E60(v62 + 56 * v45, v46 - v45);
  sub_140035E60(v62, (__int64)v63);
  result = v61;
  if ( v61 )
    return sub_140001660(v62, 56 * v61, 8);
  return result;
}
