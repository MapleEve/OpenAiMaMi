// module: codexmate_lib/commands
// addr: 0x140176630
// name: set_mcp_server_enabled
// win 1.2.1 | tauri command handler = set_mcp_server_enabled | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall set_mcp_server_enabled(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rcx
  __int64 v6; // r14
  __int64 v7; // r15
  __int128 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rsi
  _BYTE v14[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v15; // [rsp+238h] [rbp+1B8h]
  _BYTE v16[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v17; // [rsp+3C0h] [rbp+340h]
  int v18; // [rsp+3C8h] [rbp+348h]
  int v19; // [rsp+3CCh] [rbp+34Ch]
  __int128 v20; // [rsp+3D0h] [rbp+350h] BYREF
  __int64 v21; // [rsp+3E0h] [rbp+360h]
  __int64 v22; // [rsp+3E8h] [rbp+368h]
  __int64 v23; // [rsp+528h] [rbp+4A8h] BYREF
  __m256i v24; // [rsp+530h] [rbp+4B0h]
  const char *v25; // [rsp+678h] [rbp+5F8h] BYREF
  __int64 v26; // [rsp+680h] [rbp+600h]
  const char *v27; // [rsp+688h] [rbp+608h] BYREF
  __int64 v28; // [rsp+690h] [rbp+610h]
  _BYTE *v29; // [rsp+698h] [rbp+618h]
  __int128 *v30; // [rsp+6A0h] [rbp+620h]
  __int64 v31; // [rsp+6A8h] [rbp+628h]
  __m256i v32; // [rsp+808h] [rbp+788h] BYREF
  __m256i v33; // [rsp+828h] [rbp+7A8h] BYREF
  __m256i v34; // [rsp+848h] [rbp+7C8h] BYREF
  __m256i v35; // [rsp+868h] [rbp+7E8h] BYREF
  __int64 v36; // [rsp+888h] [rbp+808h]
  __int128 v37; // [rsp+890h] [rbp+810h] BYREF
  __int64 v38; // [rsp+8A0h] [rbp+820h]
  __int128 v39; // [rsp+8B0h] [rbp+830h] BYREF
  __int64 v40; // [rsp+8C0h] [rbp+840h]
  __int64 v41; // [rsp+8C8h] [rbp+848h]
  __int64 v42; // [rsp+8D0h] [rbp+850h]
  char v43; // [rsp+8DEh] [rbp+85Eh]
  char v44; // [rsp+8DFh] [rbp+85Fh]
  __int64 v45; // [rsp+8E0h] [rbp+860h]

  v45 = -2;
  sub_141684120(v14, a1, 520);
  sub_141684120(v16, a1 + 520, 400);
  v40 = *(_QWORD *)(a1 + 936);
  v39 = *(_OWORD *)(a1 + 920);
  v31 = 0;
  v25 = aSetMcpServerEn;
  v26 = 22;
  v27 = aRepo;
  v28 = 4;
  v29 = v14;
  v30 = &v39;
  v44 = 1;
  v2 = sub_140003640((volatile void *)(v15 + 16));
  v3 = v2;
  if ( v2 )
  {
    v35.m256i_i64[1] = v2;
    v35.m256i_i8[0] = -1;
  }
  else
  {
    v44 = 1;
    sub_1416850A0(&v35, &v25, &v27);
    if ( v35.m256i_i8[0] != -1 )
    {
      v24 = v35;
      sub_141684120(&v25, a1 + 520, 360);
      v20 = *(_OWORD *)(a1 + 880);
      v21 = *(_QWORD *)(a1 + 896);
      v23 = 1;
      v44 = 0;
      sub_14047E370((unsigned int)&v25, v17, (unsigned int)&v23, (unsigned int)&v20, v18, v19);
      goto LABEL_28;
    }
    v3 = v35.m256i_i64[1];
  }
  v31 = 0;
  v25 = aSetMcpServerEn;
  v26 = 22;
  v27 = aMutationgate;
  v28 = 12;
  v29 = v14;
  v30 = &v39;
  v44 = 1;
  v4 = sub_1400048C0((volatile void *)(v15 + 16));
  if ( !v4 )
  {
    v44 = 1;
    sub_1416850A0(&v33, &v25, &v27);
    if ( v33.m256i_i8[0] != -1 )
    {
      v24 = v33;
      sub_141684120(&v25, a1 + 520, 360);
      v20 = *(_OWORD *)(a1 + 880);
      v21 = *(_QWORD *)(a1 + 896);
      v23 = 1;
      v44 = 0;
      sub_14047E370((unsigned int)&v25, v17, (unsigned int)&v23, (unsigned int)&v20, v18, v19);
      goto LABEL_28;
    }
    v4 = v33.m256i_i64[1];
  }
  v31 = 0;
  v25 = aSetMcpServerEn;
  v26 = 22;
  v27 = aName_0;
  v28 = 4;
  v29 = v14;
  v30 = &v39;
  v44 = 1;
  sub_1409757B0(&v34, &v25);
  if ( v34.m256i_i8[0] != -1 )
  {
    v24 = v34;
    sub_141684120(&v25, a1 + 520, 360);
    v20 = *(_OWORD *)(a1 + 880);
    v21 = *(_QWORD *)(a1 + 896);
    v23 = 1;
    v44 = 0;
    sub_14047E370((unsigned int)&v25, v17, (unsigned int)&v23, (unsigned int)&v20, v18, v19);
    goto LABEL_28;
  }
  v38 = v34.m256i_i64[3];
  v37 = *(_OWORD *)&v34.m256i_u64[1];
  v31 = 0;
  v25 = aSetMcpServerEn;
  v26 = 22;
  v27 = aEnabled;
  v28 = 7;
  v29 = v14;
  v30 = &v39;
  sub_1401BCE80(&v32, &v25);
  LOBYTE(v42) = v32.m256i_i8[0];
  if ( v32.m256i_i8[0] == -1 )
  {
    sub_14096E670(&v20, v3, v4, &v37, v32.m256i_i8[1]);
    sub_141684120(&v25, a1 + 520, 400);
    if ( (_QWORD)v20 != -1 )
    {
      sub_141684120(&v23, &v20, 336);
LABEL_27:
      v43 = 0;
      sub_140435080(&v25, &v23);
      goto LABEL_28;
    }
    v6 = *((_QWORD *)&v20 + 1);
    v7 = v21;
    *((_QWORD *)&v8 + 1) = v22;
    if ( v22 < 0 )
    {
      v9 = 0;
      goto LABEL_19;
    }
    if ( v22 )
    {
      nullsub_1(v5);
      v9 = 1;
      v10 = sub_140001650(*((_QWORD *)&v8 + 1), 1);
      if ( !v10 )
      {
LABEL_19:
        v41 = v7;
        v42 = v6;
        sub_1416C2D4B(v9, *((_QWORD *)&v8 + 1));
      }
      *(_QWORD *)&v8 = v10;
      sub_141684120(v10, v7, *((_QWORD *)&v8 + 1));
    }
    else
    {
      *(_QWORD *)&v8 = 1;
    }
    if ( v6 )
      sub_140001660(v7, v6, 1);
    v24.m256i_i8[0] = 3;
    v24.m256i_i64[1] = *((_QWORD *)&v8 + 1);
    *(_OWORD *)&v24.m256i_u64[2] = v8;
    v23 = -1;
    goto LABEL_27;
  }
  v24 = v32;
  sub_141684120(&v25, a1 + 520, 360);
  v20 = *(_OWORD *)(a1 + 880);
  v21 = *(_QWORD *)(a1 + 896);
  v23 = 1;
  sub_14047E370((unsigned int)&v25, v17, (unsigned int)&v23, (unsigned int)&v20, v18, v19);
  if ( (_QWORD)v37 )
    sub_140001660(*((_QWORD *)&v37 + 1), v37, 1);
LABEL_28:
  if ( (_QWORD)v39 != -1 )
  {
    v11 = *((_QWORD *)&v39 + 1);
    v41 = v40;
    v42 = 0;
    v36 = *((_QWORD *)&v39 + 1);
    while ( v41 != v42 )
    {
      ++v42;
      v12 = v11 + 96;
      sub_1402C7520();
      v11 = v12;
    }
    if ( (_QWORD)v39 )
      sub_140001660(*((_QWORD *)&v39 + 1), 96 * v39, 8);
  }
  return sub_140014270(v14);
}