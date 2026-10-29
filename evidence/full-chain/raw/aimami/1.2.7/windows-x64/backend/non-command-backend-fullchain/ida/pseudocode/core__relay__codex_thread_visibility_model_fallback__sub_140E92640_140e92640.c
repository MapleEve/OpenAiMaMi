// win 1.2.7 | module src/core/relay/codex_thread_visibility_model_fallback.rs | ea 0x140e92640 | name sub_140E92640
// win 1.2.7 | module src/core/relay/codex_thread_visibility_model_fallback.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140E92640(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v5; // r15
  __int64 v6; // r14
  __int64 v7; // r12
  int v8; // eax
  unsigned __int64 v9; // r13
  int v10; // ebx
  unsigned int v11; // eax
  _QWORD *v12; // rdx
  unsigned __int128 v13; // kr00_16
  unsigned __int64 v14; // rax
  __int64 *v15; // rdi
  unsigned __int64 v17; // rax
  __int128 v18; // kr10_16
  __int64 v19; // rbx
  __int128 v20; // xmm0
  unsigned __int64 v21; // rax
  __int128 v22; // kr20_16
  __int64 v23; // r14
  __int128 v24; // xmm0
  unsigned __int64 v25; // rax
  __int128 v26; // kr30_16
  __int64 v27; // r15
  __int128 v28; // xmm0
  unsigned __int64 v29; // rax
  __int128 v30; // xmm0
  _QWORD *v31; // rdi
  __int64 v32; // rbx
  __int64 v33; // [rsp+20h] [rbp-60h]
  __int64 v34; // [rsp+20h] [rbp-60h]
  __int64 v35; // [rsp+20h] [rbp-60h]
  __int64 v36; // [rsp+20h] [rbp-60h]
  __int64 v37; // [rsp+28h] [rbp-58h]
  __int64 v38; // [rsp+28h] [rbp-58h]
  __int64 v39; // [rsp+28h] [rbp-58h]
  __int64 v40; // [rsp+28h] [rbp-58h]
  __int128 v41; // [rsp+30h] [rbp-50h]
  __int128 v42; // [rsp+40h] [rbp-40h]
  __int128 v43; // [rsp+50h] [rbp-30h]
  __int128 v44; // [rsp+60h] [rbp-20h]
  __int128 v45; // [rsp+60h] [rbp-20h]
  __int128 v46; // [rsp+70h] [rbp-10h]
  __int64 v47; // [rsp+70h] [rbp-10h]
  __int64 v48; // [rsp+80h] [rbp+0h]
  __int64 v49; // [rsp+90h] [rbp+10h] BYREF
  __int64 v50; // [rsp+98h] [rbp+18h] BYREF
  __int64 v51; // [rsp+A0h] [rbp+20h]
  unsigned __int64 v52; // [rsp+A8h] [rbp+28h] BYREF
  _BYTE v53[56]; // [rsp+B0h] [rbp+30h]
  __int64 v54; // [rsp+E8h] [rbp+68h]
  __int64 v55; // [rsp+F0h] [rbp+70h]
  __int64 v56; // [rsp+F8h] [rbp+78h]
  __int64 v57; // [rsp+100h] [rbp+80h]
  _QWORD *v58; // [rsp+108h] [rbp+88h]
  __int64 v59; // [rsp+110h] [rbp+90h]

  v59 = -2;
  v5 = *a3;
  v6 = a3[1];
  v58 = *(_QWORD **)a2;
  v7 = *(_QWORD *)(a2 + 56);
  v8 = sub_1417A9630(v7);
  v9 = 0x8000000000000013uLL;
  if ( !v8 )
  {
    v13 = 1u;
    goto LABEL_15;
  }
  v10 = v8;
  if ( !v6 )
    LODWORD(v5) = 1;
  v11 = sub_1417A9200(v7, 1, v5, v6, -(v6 != 0), 1);
  if ( *v58 >= 0x7FFFFFFFFFFFFFFFuLL )
    sub_141938FA0(&off_141A594A0);
  v12 = v58;
  ++*v58;
  sub_141404710(&v52, v12[2], v11);
  --*v58;
  if ( v52 != -1 )
  {
    v13 = *(_OWORD *)v53;
    v44 = *(_OWORD *)&v53[16];
    v46 = *(_OWORD *)&v53[32];
    v48 = *(_QWORD *)&v53[48];
    v9 = v52;
LABEL_15:
    *(_QWORD *)(a1 + 64) = v48;
    *(_OWORD *)(a1 + 48) = v46;
    *(_OWORD *)(a1 + 32) = v44;
    *(_QWORD *)(a1 + 8) = v9;
    *(_OWORD *)(a1 + 16) = v13;
    *(_QWORD *)a1 = -1;
    return a1;
  }
  if ( v10 != 1 )
  {
    v13 = __PAIR128__(v10, 1);
    goto LABEL_15;
  }
  v49 = a2;
  v50 = 0;
  sub_140F9AB20(&v52, &v49);
  v14 = v52;
  if ( v52 != -1 )
  {
    v15 = *(__int64 **)v53;
    v41 = *(_OWORD *)&v53[8];
    v42 = *(_OWORD *)&v53[24];
    v43 = *(_OWORD *)&v53[40];
LABEL_11:
    *(_QWORD *)(a1 + 8) = v14;
    *(_QWORD *)(a1 + 16) = v15;
    *(_OWORD *)(a1 + 24) = v41;
    *(_OWORD *)(a1 + 40) = v42;
    *(_OWORD *)(a1 + 56) = v43;
LABEL_12:
    *(_QWORD *)a1 = -1;
    goto LABEL_13;
  }
  v15 = &v50;
  if ( !v50 )
  {
    v14 = 0x8000000000000009uLL;
    goto LABEL_11;
  }
  sub_14018E680(&v52, &v50, 0, &off_141A58B38, v33, v37);
  v17 = v52;
  v18 = *(_OWORD *)v53;
  v19 = *(_QWORD *)&v53[16];
  if ( v52 != -1 )
  {
    v20 = *(_OWORD *)&v53[24];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v53[40];
    *(_OWORD *)(a1 + 40) = v20;
    *(_OWORD *)(a1 + 16) = v18;
    *(_QWORD *)(a1 + 32) = v19;
    *(_QWORD *)(a1 + 8) = v17;
    goto LABEL_12;
  }
  v56 = *(_QWORD *)&v53[8];
  v58 = *(_QWORD **)v53;
  sub_14018E680(&v52, &v50, 1, &off_141A58B50, v34, v38);
  v21 = v52;
  v22 = *(_OWORD *)v53;
  v23 = *(_QWORD *)&v53[16];
  if ( v52 == -1 )
  {
    v55 = *(_QWORD *)&v53[8];
    v57 = *(_QWORD *)v53;
    sub_14018E680(&v52, &v50, 2, &off_141A58B68, v35, v39);
    v25 = v52;
    v26 = *(_OWORD *)v53;
    v27 = *(_QWORD *)&v53[16];
    if ( v52 == -1 )
    {
      v51 = *(_QWORD *)&v53[8];
      v54 = *(_QWORD *)v53;
      sub_14018E680(&v52, &v50, 3, &off_141A58B80, v36, v40);
      v29 = v52;
      v45 = *(_OWORD *)v53;
      v47 = *(_QWORD *)&v53[16];
      if ( v52 == -1 )
      {
        *(_QWORD *)(a1 + 88) = *(_QWORD *)&v53[16];
        *(_OWORD *)(a1 + 72) = v45;
        *(_QWORD *)a1 = v58;
        *(_QWORD *)(a1 + 8) = v56;
        *(_QWORD *)(a1 + 16) = v19;
        *(_QWORD *)(a1 + 24) = v57;
        *(_QWORD *)(a1 + 32) = v55;
        *(_QWORD *)(a1 + 40) = v23;
        *(_QWORD *)(a1 + 48) = v54;
        *(_QWORD *)(a1 + 56) = v51;
        *(_QWORD *)(a1 + 64) = v27;
      }
      else
      {
        v30 = *(_OWORD *)&v53[24];
        *(_OWORD *)(a1 + 56) = *(_OWORD *)&v53[40];
        *(_OWORD *)(a1 + 40) = v30;
        *(_QWORD *)(a1 + 32) = v47;
        *(_OWORD *)(a1 + 16) = v45;
        *(_QWORD *)(a1 + 8) = v29;
        *(_QWORD *)a1 = -1;
        if ( v54 )
          sub_140001660(v51, v54, 1);
        v31 = v58;
        v32 = v56;
        if ( v57 )
          sub_140001660(v55, v57, 1);
        if ( v31 )
          sub_140001660(v32, v31, 1);
      }
      goto LABEL_13;
    }
    v28 = *(_OWORD *)&v53[24];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v53[40];
    *(_OWORD *)(a1 + 40) = v28;
    *(_OWORD *)(a1 + 16) = v26;
    *(_QWORD *)(a1 + 32) = v27;
    *(_QWORD *)(a1 + 8) = v25;
    *(_QWORD *)a1 = -1;
    if ( v57 )
      sub_140001660(v55, v57, 1);
  }
  else
  {
    v24 = *(_OWORD *)&v53[24];
    *(_OWORD *)(a1 + 56) = *(_OWORD *)&v53[40];
    *(_OWORD *)(a1 + 40) = v24;
    *(_OWORD *)(a1 + 16) = v22;
    *(_QWORD *)(a1 + 32) = v23;
    *(_QWORD *)(a1 + 8) = v21;
    *(_QWORD *)a1 = -1;
  }
  if ( v58 )
    sub_140001660(v56, v58, 1);
LABEL_13:
  sub_140E96D30(&v49);
  return a1;
}
