// module: codexmate_lib/core/mcp
// addr: 0x1409e1880
// name: sub_1409E1880
// win 1.2.1 | module src/core/mcp.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1409E1880(__int64 a1, _QWORD *a2, __int64 *a3)
{
  _QWORD *v3; // r13
  unsigned __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // r12
  unsigned __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // r14
  unsigned __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  unsigned __int64 v18; // r14
  __int64 *v19; // rcx
  __int64 v20; // r15
  __int64 v21; // r12
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rdx
  __int64 *v24; // r9
  _QWORD *v25; // rbx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // r15
  __int64 v30; // rcx
  unsigned __int128 v31; // rax
  _QWORD *v32; // r14
  __int64 v33; // rdi
  _QWORD *v34; // r15
  __int64 v35; // rdx
  unsigned __int64 v36; // rdi
  _QWORD *v37; // r12
  __int64 v38; // r15
  unsigned __int64 v39; // rdi
  _QWORD *v40; // r14
  __int64 v41; // rdx
  __int64 result; // rax
  __int64 v44; // [rsp+30h] [rbp-50h] BYREF
  __int64 v45; // [rsp+38h] [rbp-48h]
  _QWORD *v46; // [rsp+40h] [rbp-40h]
  unsigned __int64 v47; // [rsp+48h] [rbp-38h]
  unsigned __int64 v48; // [rsp+50h] [rbp-30h]
  __int64 v49; // [rsp+58h] [rbp-28h]
  __int64 v50; // [rsp+60h] [rbp-20h]
  __int64 v51; // [rsp+68h] [rbp-18h]
  __int64 v52; // [rsp+70h] [rbp-10h]
  __int64 *v53; // [rsp+78h] [rbp-8h]
  _QWORD *v54; // [rsp+80h] [rbp+0h]
  char v55; // [rsp+8Fh] [rbp+Fh]
  __int64 v56; // [rsp+90h] [rbp+10h]

  v56 = -2;
  v53 = a3;
  v3 = a2;
  v4 = a2[2];
  v54 = a2;
  if ( v4 )
  {
    v5 = a2[1];
    v6 = v5 + 24 * v4;
    v7 = 0;
    do
    {
      v8 = *(_QWORD *)(v5 + 8);
      v9 = *(_QWORD *)(v5 + 16);
      v55 = 1;
      v10 = sub_14033BC10(v8, v9);
      if ( v11 == 55 && !(unsigned int)sub_1416847B0(v10, aAimamiRelayMan_6, 55) )
        goto LABEL_8;
      v5 += 24;
      ++v7;
    }
    while ( v5 != v6 );
    v7 = v4;
LABEL_8:
    v3 = v54;
    goto LABEL_10;
  }
  v7 = 0;
  while ( 1 )
  {
LABEL_10:
    if ( !v7 )
    {
      v22 = v3[2];
      v23 = 0;
      v24 = v53;
      goto LABEL_25;
    }
    v12 = v3[2];
    v13 = v7 - 1;
    if ( v7 - 1 >= v12 )
      goto LABEL_19;
    v14 = v3[1];
    v15 = *(_QWORD *)(v14 + 24 * v13 + 8);
    v16 = *(_QWORD *)(v14 + 24 * v13 + 16);
    v55 = 1;
    sub_14033BC10(v15, v16);
    if ( v17 )
      break;
    v3 = v54;
    v18 = v54[2];
    if ( v13 >= v18 )
      goto LABEL_44;
    v19 = (__int64 *)(v54[1] + 24 * v13);
    v20 = *v19;
    v21 = v19[1];
    sub_141684120(v19, v19 + 3, 24 * (v18 - v7));
    v54[2] = --v18;
    --v7;
    if ( v20 )
    {
      if ( v20 == -1 )
      {
LABEL_44:
        v55 = 1;
        sub_1416C2E1B(v13, v18, &off_1417A74C0);
      }
      sub_140001660(v21, v20, 1);
      v7 = v13;
    }
  }
  v3 = v54;
  v12 = v54[2];
LABEL_19:
  if ( v12 < v7 )
  {
    v55 = 1;
    sub_1416C2D94(v7, v12, &off_1417A74A8);
  }
  if ( v12 == *v3 )
  {
    v55 = 1;
    sub_141689AB0(v54);
  }
  v3 = v54;
  v25 = (_QWORD *)(v54[1] + 24 * v7);
  if ( v12 > v7 )
    sub_141684120(v25 + 3, v54[1] + 24 * v7, 24 * (v12 - v7));
  *v25 = 0;
  v25[1] = 1;
  v25[2] = 0;
  v22 = v12 + 1;
  v3[2] = v12 + 1;
  v23 = v7 + 1;
  v24 = v53;
  if ( v12 < v7 )
    sub_1416C32F0(0, v23, v22, &off_1417A66B8);
LABEL_25:
  v26 = *v24;
  v27 = v24[1];
  v28 = v24[2];
  v3[2] = v23;
  v44 = v3[1] + 24 * v23;
  v45 = v44;
  v46 = v3;
  v47 = v23;
  v48 = v22 - v23;
  v49 = v27;
  v50 = v27;
  v51 = v26;
  v52 = v27 + 24 * v28;
  sub_1404DD600(&v44);
  v29 = v44;
  v30 = v45;
  v31 = 0xAAAAAAAAAAAAAAABuLL * (unsigned __int128)(unsigned __int64)(v45 - v44);
  v44 = 8;
  v45 = 8;
  v32 = v46;
  if ( v30 != v29 )
  {
    v33 = *((_QWORD *)&v31 + 1) >> 4;
    v34 = (_QWORD *)(v29 + 8);
    do
    {
      v35 = *(v34 - 1);
      if ( v35 )
        sub_140001660(*v34, v35, 1);
      v34 += 3;
      --v33;
    }
    while ( v33 );
  }
  v36 = v48;
  v37 = v54;
  if ( v48 )
  {
    v38 = v32[2];
    if ( v47 != v38 )
      sub_141684120(v32[1] + 24 * v38, v32[1] + 24 * v47, 24 * v48);
    v32[2] = v36 + v38;
  }
  if ( v52 != v50 )
  {
    v39 = (v52 - v50) / 0x18uLL;
    v40 = (_QWORD *)(v50 + 8);
    do
    {
      v41 = *(v40 - 1);
      if ( v41 )
        sub_140001660(*v40, v41, 1);
      v40 += 3;
      --v39;
    }
    while ( v39 );
  }
  if ( v51 )
    sub_140001660(v49, 24 * v51, 8);
  result = v37[2];
  *(_QWORD *)(a1 + 16) = result;
  *(_OWORD *)a1 = *(_OWORD *)v37;
  return result;
}