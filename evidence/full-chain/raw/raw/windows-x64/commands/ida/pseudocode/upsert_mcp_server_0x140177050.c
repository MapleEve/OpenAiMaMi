// module: codexmate_lib/commands
// addr: 0x140177050
// name: upsert_mcp_server
// win 1.2.1 | tauri command handler = upsert_mcp_server | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall upsert_mcp_server(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  char v6; // r15
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 *v10; // rcx
  _BYTE v11[512]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v12; // [rsp+258h] [rbp+1D8h]
  _OWORD v13[3]; // [rsp+260h] [rbp+1E0h] BYREF
  _OWORD v14[3]; // [rsp+290h] [rbp+210h] BYREF
  _BYTE v15[24]; // [rsp+2C0h] [rbp+240h] BYREF
  __int128 v16; // [rsp+2D8h] [rbp+258h]
  __int128 v17; // [rsp+410h] [rbp+390h] BYREF
  __int64 v18; // [rsp+420h] [rbp+3A0h]
  _BYTE v19[360]; // [rsp+430h] [rbp+3B0h] BYREF
  __int128 v20; // [rsp+598h] [rbp+518h]
  __int64 v21; // [rsp+5A8h] [rbp+528h]
  __int64 v22; // [rsp+5B0h] [rbp+530h]
  int v23; // [rsp+5B8h] [rbp+538h]
  int v24; // [rsp+5BCh] [rbp+53Ch]
  _BYTE v25[336]; // [rsp+5C0h] [rbp+540h] BYREF
  _OWORD v26[2]; // [rsp+710h] [rbp+690h] BYREF
  __m256i v27; // [rsp+730h] [rbp+6B0h] BYREF
  __m256i v28; // [rsp+750h] [rbp+6D0h] BYREF
  __m256i v29; // [rsp+770h] [rbp+6F0h] BYREF
  __m256i v30; // [rsp+790h] [rbp+710h] BYREF
  __int128 v31; // [rsp+7B0h] [rbp+730h] BYREF
  __int64 v32; // [rsp+7C0h] [rbp+740h]
  _OWORD v33[2]; // [rsp+7C8h] [rbp+748h] BYREF
  _OWORD v34[2]; // [rsp+7E8h] [rbp+768h] BYREF
  const char *v35; // [rsp+808h] [rbp+788h] BYREF
  __int64 v36; // [rsp+810h] [rbp+790h]
  const char *v37; // [rsp+818h] [rbp+798h] BYREF
  __int64 v38; // [rsp+820h] [rbp+7A0h]
  _BYTE *v39; // [rsp+828h] [rbp+7A8h]
  __int128 *v40; // [rsp+830h] [rbp+7B0h]
  __int64 v41; // [rsp+838h] [rbp+7B8h]
  _BYTE v42[48]; // [rsp+998h] [rbp+918h] BYREF
  __int64 v43; // [rsp+9C8h] [rbp+948h]
  __m256i v44; // [rsp+9D0h] [rbp+950h] BYREF
  __int128 v45; // [rsp+9F0h] [rbp+970h] BYREF
  __int64 v46; // [rsp+A00h] [rbp+980h]
  __int128 v47; // [rsp+A10h] [rbp+990h] BYREF
  __int64 v48; // [rsp+A20h] [rbp+9A0h]
  __int128 v49; // [rsp+A30h] [rbp+9B0h] BYREF
  __int64 v50; // [rsp+A40h] [rbp+9C0h]
  __int128 v51; // [rsp+A50h] [rbp+9D0h] BYREF
  __int64 v52; // [rsp+A60h] [rbp+9E0h]
  __int64 v53; // [rsp+A68h] [rbp+9E8h]
  __int128 v54; // [rsp+A70h] [rbp+9F0h] BYREF
  __int64 v55; // [rsp+A80h] [rbp+A00h]
  __int64 v56; // [rsp+A90h] [rbp+A10h]
  char v57; // [rsp+A9Dh] [rbp+A1Dh]
  char v58; // [rsp+A9Eh] [rbp+A1Eh]
  char v59; // [rsp+A9Fh] [rbp+A1Fh]
  __int64 v60; // [rsp+AA0h] [rbp+A20h]

  v60 = -2;
  sub_141684120(v11, a1, 520);
  sub_141684120(v19, a1 + 520, 400);
  v46 = *(_QWORD *)(a1 + 936);
  v45 = *(_OWORD *)(a1 + 920);
  v41 = 0;
  v35 = aUpsertMcpServe;
  v36 = 17;
  v37 = aRepo;
  v38 = 4;
  v39 = v11;
  v40 = &v45;
  v59 = 1;
  v2 = sub_140003640((volatile void *)(v12 + 16));
  v3 = v2;
  if ( v2 )
  {
    *((_QWORD *)&v34[0] + 1) = v2;
    LOBYTE(v34[0]) = -1;
  }
  else
  {
    v59 = 1;
    sub_1416850A0(v34, &v35, &v37);
    if ( LOBYTE(v34[0]) != 0xFF )
    {
      *(_OWORD *)&v25[24] = v34[1];
      *(_OWORD *)&v25[8] = v34[0];
      sub_141684120(&v35, a1 + 520, 360);
      *(_OWORD *)v15 = *(_OWORD *)(a1 + 880);
      *(_QWORD *)&v15[16] = *(_QWORD *)(a1 + 896);
      *(_QWORD *)v25 = 1;
      v59 = 0;
      sub_14047E370((unsigned int)&v35, v22, (unsigned int)v25, (unsigned int)v15, v23, v24);
      goto LABEL_23;
    }
    v3 = *((_QWORD *)&v34[0] + 1);
  }
  v41 = 0;
  v35 = aUpsertMcpServe;
  v36 = 17;
  v37 = aMutationgate;
  v38 = 12;
  v39 = v11;
  v40 = &v45;
  v59 = 1;
  v4 = sub_1400048C0((volatile void *)(v12 + 16));
  v5 = v4;
  if ( v4 )
  {
    *((_QWORD *)&v33[0] + 1) = v4;
    LOBYTE(v33[0]) = -1;
  }
  else
  {
    v59 = 1;
    sub_1416850A0(v33, &v35, &v37);
    if ( LOBYTE(v33[0]) != 0xFF )
    {
      *(_OWORD *)&v25[24] = v33[1];
      *(_OWORD *)&v25[8] = v33[0];
      sub_141684120(&v35, a1 + 520, 360);
      *(_OWORD *)v15 = *(_OWORD *)(a1 + 880);
      *(_QWORD *)&v15[16] = *(_QWORD *)(a1 + 896);
      *(_QWORD *)v25 = 1;
      v59 = 0;
      sub_14047E370((unsigned int)&v35, v22, (unsigned int)v25, (unsigned int)v15, v23, v24);
      goto LABEL_23;
    }
    v5 = *((_QWORD *)&v33[0] + 1);
  }
  v41 = 0;
  v35 = aUpsertMcpServe;
  v36 = 17;
  v37 = aName_0;
  v38 = 4;
  v39 = v11;
  v40 = &v45;
  v59 = 1;
  sub_1409757B0(&v30, &v35);
  if ( v30.m256i_i8[0] != -1 )
  {
    *(__m256i *)&v25[8] = v30;
    sub_141684120(&v35, a1 + 520, 360);
    *(_OWORD *)v15 = *(_OWORD *)(a1 + 880);
    *(_QWORD *)&v15[16] = *(_QWORD *)(a1 + 896);
    *(_QWORD *)v25 = 1;
    v59 = 0;
    sub_14047E370((unsigned int)&v35, v22, (unsigned int)v25, (unsigned int)v15, v23, v24);
    goto LABEL_23;
  }
  v55 = v30.m256i_i64[3];
  v54 = *(_OWORD *)&v30.m256i_u64[1];
  v41 = 0;
  v35 = aUpsertMcpServe;
  v36 = 17;
  v37 = aTransport;
  v38 = 9;
  v39 = v11;
  v40 = &v45;
  sub_1409757B0(&v29, &v35);
  LOBYTE(v56) = v29.m256i_i8[0] == -1;
  if ( v29.m256i_i8[0] == -1 )
  {
    v52 = v29.m256i_i64[3];
    v51 = *(_OWORD *)&v29.m256i_u64[1];
    v41 = 0;
    v35 = aUpsertMcpServe;
    v36 = 17;
    v37 = aEnabled;
    v38 = 7;
    v39 = v11;
    v40 = &v45;
    sub_1401BCE80(v26, &v35);
    LOBYTE(v56) = LOBYTE(v26[0]) == 0xFF;
    if ( LOBYTE(v26[0]) != 0xFF )
    {
      *(_OWORD *)&v25[24] = v26[1];
      *(_OWORD *)&v25[8] = v26[0];
      sub_141684120(&v35, v19, 360);
      *(_OWORD *)v15 = v20;
      *(_QWORD *)&v15[16] = v21;
      *(_QWORD *)v25 = 1;
      sub_14047E370((unsigned int)&v35, v22, (unsigned int)v25, (unsigned int)v15, v23, v24);
      goto LABEL_19;
    }
    v6 = BYTE1(v26[0]);
    v41 = 0;
    v35 = aUpsertMcpServe;
    v36 = 17;
    v37 = aCommand_0;
    v38 = 7;
    v39 = v11;
    v40 = &v45;
    sub_140973410(&v28, &v35);
    LOBYTE(v56) = v28.m256i_i8[0] == -1;
    if ( v28.m256i_i8[0] != -1 )
    {
      *(__m256i *)&v25[8] = v28;
      sub_141684120(&v35, v19, 360);
      *(_OWORD *)v15 = v20;
      *(_QWORD *)&v15[16] = v21;
      *(_QWORD *)v25 = 1;
      sub_14047E370((unsigned int)&v35, v22, (unsigned int)v25, (unsigned int)v15, v23, v24);
LABEL_19:
      if ( (_QWORD)v51 )
        sub_140001660(*((_QWORD *)&v51 + 1), v51, 1);
      goto LABEL_21;
    }
    v50 = v28.m256i_i64[3];
    v49 = *(_OWORD *)&v28.m256i_u64[1];
    v41 = 0;
    v35 = aUpsertMcpServe;
    v36 = 17;
    v37 = aArgs;
    v38 = 4;
    v39 = v11;
    v40 = &v45;
    sub_1403204C0(&v44, &v35);
    LOBYTE(v56) = v44.m256i_i8[0] == -1;
    if ( v44.m256i_i8[0] != -1 )
    {
      *(__m256i *)&v25[8] = v44;
      sub_141684120(&v35, v19, 360);
      *(_OWORD *)v15 = v20;
      *(_QWORD *)&v15[16] = v21;
      *(_QWORD *)v25 = 1;
      sub_14047E370((unsigned int)&v35, v22, (unsigned int)v25, (unsigned int)v15, v23, v24);
LABEL_36:
      if ( (_QWORD)v49 != -1 && (_QWORD)v49 )
        sub_140001660(*((_QWORD *)&v49 + 1), v49, 1);
      goto LABEL_19;
    }
    v32 = v44.m256i_i64[3];
    v31 = *(_OWORD *)&v44.m256i_u64[1];
    v41 = 0;
    v35 = aUpsertMcpServe;
    v36 = 17;
    v37 = aUrl;
    v38 = 3;
    v39 = v11;
    v40 = &v45;
    sub_140973410(&v27, &v35);
    LOBYTE(v56) = v27.m256i_i8[0] == -1;
    if ( v27.m256i_i8[0] == -1 )
    {
      v48 = v27.m256i_i64[3];
      v47 = *(_OWORD *)&v27.m256i_u64[1];
      v41 = 0;
      v35 = aUpsertMcpServe;
      v36 = 17;
      v37 = aHeaders;
      v38 = 7;
      v39 = v11;
      v40 = &v45;
      sub_1401BBA60(v42, &v35);
      LOBYTE(v56) = *(_QWORD *)v42 != 0;
      if ( *(_QWORD *)v42 )
      {
        v14[2] = *(_OWORD *)&v42[32];
        v14[1] = *(_OWORD *)&v42[16];
        v14[0] = *(_OWORD *)v42;
        v41 = 0;
        v35 = aUpsertMcpServe;
        v36 = 17;
        v37 = aEnvironment;
        v38 = 11;
        v39 = v11;
        v40 = &v45;
        sub_1401BBA60(v25, &v35);
        v53 = *(_QWORD *)v25;
        LOBYTE(v56) = *(_QWORD *)v25 != 0;
        if ( *(_QWORD *)v25 )
        {
          v13[2] = *(_OWORD *)&v25[32];
          v13[1] = *(_OWORD *)&v25[16];
          v13[0] = *(_OWORD *)v25;
          sub_14096D030(v15, v3, v5, &v54, &v51, v6, &v49, &v31, &v47, v14, v13);
          sub_141684120(&v35, v19, 400);
          if ( *(_QWORD *)v15 == -1 )
          {
            v57 = 1;
            sub_1401BDB30(v42, &v15[8]);
            *(_OWORD *)&v25[24] = *(_OWORD *)&v42[16];
            *(_OWORD *)&v25[8] = *(_OWORD *)v42;
            *(_QWORD *)v25 = -1;
          }
          else
          {
            sub_141684120(v25, v15, 336);
          }
          v57 = 0;
          sub_140435080(&v35, v25);
          goto LABEL_23;
        }
        v16 = *(_OWORD *)&v25[24];
        *(_OWORD *)&v15[8] = *(_OWORD *)&v25[8];
        sub_141684120(&v35, v19, 360);
        v17 = v20;
        v18 = v21;
        *(_QWORD *)v15 = 1;
        sub_14047E370((unsigned int)&v35, v22, (unsigned int)v15, (unsigned int)&v17, v23, v24);
        v58 = 1;
        sub_14067EB80(v42);
        if ( (_QWORD)v47 != -1 && (_QWORD)v47 )
          sub_140001660(*((_QWORD *)&v47 + 1), v47, 1);
        v10 = (__int64 *)&v31;
        goto LABEL_35;
      }
      *(_OWORD *)&v25[24] = *(_OWORD *)&v42[24];
      *(_OWORD *)&v25[8] = *(_OWORD *)&v42[8];
      sub_141684120(&v35, v19, 360);
      *(_OWORD *)v15 = v20;
      *(_QWORD *)&v15[16] = v21;
      *(_QWORD *)v25 = 1;
      sub_14047E370((unsigned int)&v35, v22, (unsigned int)v25, (unsigned int)v15, v23, v24);
      if ( (_QWORD)v47 != -1 && (_QWORD)v47 )
        sub_140001660(*((_QWORD *)&v47 + 1), v47, 1);
    }
    else
    {
      *(__m256i *)&v25[8] = v27;
      sub_141684120(&v35, v19, 360);
      *(_OWORD *)v15 = v20;
      *(_QWORD *)&v15[16] = v21;
      *(_QWORD *)v25 = 1;
      sub_14047E370((unsigned int)&v35, v22, (unsigned int)v25, (unsigned int)v15, v23, v24);
    }
    v10 = &v44.m256i_i64[1];
LABEL_35:
    sub_140009B20(v10);
    goto LABEL_36;
  }
  *(__m256i *)&v25[8] = v29;
  sub_141684120(&v35, a1 + 520, 360);
  *(_OWORD *)v15 = *(_OWORD *)(a1 + 880);
  *(_QWORD *)&v15[16] = *(_QWORD *)(a1 + 896);
  *(_QWORD *)v25 = 1;
  sub_14047E370((unsigned int)&v35, v22, (unsigned int)v25, (unsigned int)v15, v23, v24);
LABEL_21:
  if ( (_QWORD)v54 )
    sub_140001660(*((_QWORD *)&v54 + 1), v54, 1);
LABEL_23:
  if ( (_QWORD)v45 != -1 )
  {
    v7 = *((_QWORD *)&v45 + 1);
    v53 = v46;
    v56 = 0;
    v43 = *((_QWORD *)&v45 + 1);
    while ( v53 != v56 )
    {
      ++v56;
      v8 = v7 + 96;
      sub_1402C7520();
      v7 = v8;
    }
    if ( (_QWORD)v45 )
      sub_140001660(*((_QWORD *)&v45 + 1), 96 * v45, 8);
  }
  return sub_140014270(v11);
}