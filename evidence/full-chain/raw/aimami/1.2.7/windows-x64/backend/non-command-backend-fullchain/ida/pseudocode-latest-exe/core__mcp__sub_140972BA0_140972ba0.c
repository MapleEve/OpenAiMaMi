// win 1.2.7 latest-exe | module src/core/mcp.rs | ea 0x140972ba0 | successor of pre-update 0x140ec8c00 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.893, "str_ov": null, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140972BA0(__int64 a1, _QWORD *a2, __int64 *a3)
{
  __int64 v3; // rsi
  unsigned __int64 v4; // rax
  __int64 v5; // r15
  unsigned __int64 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rdx
  unsigned __int64 v12; // r8
  _QWORD *v13; // rbx
  __int64 v14; // r13
  _QWORD *v15; // rax
  __int64 v16; // rbx
  unsigned __int64 v17; // r14
  unsigned __int64 v18; // rsi
  __int64 v19; // r15
  __int64 v20; // rdx
  __int64 v21; // r12
  unsigned __int64 v22; // r14
  _QWORD *v23; // rsi
  unsigned __int64 v24; // rdx
  __int64 *v25; // r9
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r10
  __int64 v29; // r14
  __int64 v30; // rcx
  unsigned __int128 v31; // rax
  _QWORD *v32; // rsi
  __int64 v33; // rdi
  _QWORD *v34; // r14
  __int64 v35; // rdx
  unsigned __int64 v36; // rdi
  __int64 v37; // r14
  _QWORD *v38; // rbx
  unsigned __int64 v39; // rdi
  _QWORD *v40; // rsi
  __int64 v41; // rdx
  __int64 result; // rax
  __int64 v44; // [rsp+28h] [rbp-58h] BYREF
  __int64 v45; // [rsp+30h] [rbp-50h]
  _QWORD *v46; // [rsp+38h] [rbp-48h]
  unsigned __int64 v47; // [rsp+40h] [rbp-40h]
  unsigned __int64 v48; // [rsp+48h] [rbp-38h]
  __int64 v49; // [rsp+50h] [rbp-30h]
  __int64 v50; // [rsp+58h] [rbp-28h]
  __int64 v51; // [rsp+60h] [rbp-20h]
  __int64 v52; // [rsp+68h] [rbp-18h]
  __int64 *v53; // [rsp+70h] [rbp-10h]
  unsigned __int64 v54; // [rsp+78h] [rbp-8h]
  _QWORD *v55; // [rsp+80h] [rbp+0h]
  char v56; // [rsp+8Fh] [rbp+Fh]
  __int64 v57; // [rsp+90h] [rbp+10h]

  v57 = -2;
  v53 = a3;
  v3 = a2[1];
  v4 = a2[2];
  LOBYTE(v44) = 2;
  v55 = a2;
  if ( v4 )
  {
    v54 = v4;
    v5 = 24 * v4;
    v6 = 0;
    v7 = 0;
    do
    {
      v8 = *(_QWORD *)(v3 + v7 + 8);
      v9 = *(_QWORD *)(v3 + v7 + 16);
      if ( (unsigned __int8)toml_lexical_state_line_is_structural(&v44, v8, v9) )
      {
        v10 = sub_1408FEA60(v8, v9);
        if ( v11 == 55 && !(unsigned int)sub_141923B40(v10, aAimamiRelayMan_2, 55) )
        {
          v12 = v54;
          v13 = v55;
          if ( !v6 )
            goto LABEL_26;
          goto LABEL_10;
        }
      }
      ++v6;
      v7 += 24;
    }
    while ( v5 != v7 );
    v12 = v54;
    v6 = v54;
    v13 = v55;
    if ( !v54 )
      goto LABEL_26;
LABEL_10:
    v54 = -(__int64)v6;
    v14 = 24 * v6;
    while ( 1 )
    {
      v15 = v13;
      v16 = v13[1];
      v17 = v15[2];
      v18 = v6 - 1;
      if ( v6 - 1 >= v17 )
        break;
      v19 = *(_QWORD *)(v16 + v14 - 16);
      sub_1408FEA60(v19, *(_QWORD *)(v16 + v14 - 8));
      if ( v20 )
        break;
      v21 = *(_QWORD *)(v16 + v14 - 24);
      sub_1419234B0(v16 + v14 - 24, v14 + v16, 24 * (v17 + v54));
      v22 = v17 - 1;
      v13 = v55;
      v55[2] = v22;
      if ( v21 )
      {
        if ( v21 == -1 )
        {
          v56 = 1;
          sub_14196B3AB(v6 - 1, v22, &off_141A5CB40);
        }
        sub_140001660(v19, v21, 1);
      }
      ++v54;
      v14 -= 24;
      --v6;
      if ( !v18 )
      {
        v12 = v13[2];
        goto LABEL_26;
      }
    }
    if ( v6 > v17 )
    {
      v56 = 1;
      sub_14196B324(v6, v17, &off_141A5CB28);
    }
    if ( v17 == *v55 )
    {
      v56 = 1;
      v23 = v55;
      sub_141939F90(v55);
      v16 = v23[1];
    }
    if ( v6 < v17 )
      sub_1419234B0(v16 + v14 + 24, v16 + v14, 24 * (v17 + v54));
    *(_QWORD *)(v16 + v14) = 0;
    *(_QWORD *)(v16 + v14 + 8) = 1;
    *(_QWORD *)(v16 + v14 + 16) = 0;
    v12 = v17 + 1;
    v13 = v55;
    v55[2] = v17 + 1;
    v24 = v6 + 1;
    v25 = v53;
    if ( v6 > v17 )
      sub_14196B880(0, v24, v12, &off_141A531B0);
  }
  else
  {
    v13 = a2;
    v12 = 0;
LABEL_26:
    v24 = 0;
    v25 = v53;
  }
  v26 = *v25;
  v27 = v25[1];
  v28 = v25[2];
  v13[2] = v24;
  v44 = v13[1] + 24 * v24;
  v45 = v44;
  v46 = v13;
  v47 = v24;
  v48 = v12 - v24;
  v49 = v27;
  v50 = v27;
  v51 = v26;
  v52 = v27 + 24 * v28;
  sub_1408F48A0(&v44);
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
  if ( v48 )
  {
    v37 = v32[2];
    if ( v47 != v37 )
      sub_1419234B0(v32[1] + 24 * v37, v32[1] + 24 * v47, 24 * v48);
    v32[2] = v36 + v37;
  }
  v38 = v55;
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
  result = v38[2];
  *(_QWORD *)(a1 + 16) = result;
  *(_OWORD *)a1 = *(_OWORD *)v38;
  return result;
}
