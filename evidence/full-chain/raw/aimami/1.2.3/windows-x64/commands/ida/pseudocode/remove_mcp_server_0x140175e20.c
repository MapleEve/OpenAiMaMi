// module: codexmate_lib/commands
// addr: 0x140175e20
// name: remove_mcp_server
// win 1.2.1 | tauri command handler = remove_mcp_server | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall remove_mcp_server(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // rcx
  __int64 v5; // r14
  __int64 v6; // r15
  __int128 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  _BYTE v13[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v14; // [rsp+238h] [rbp+1B8h]
  _BYTE v15[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v16; // [rsp+3C0h] [rbp+340h]
  int v17; // [rsp+3C8h] [rbp+348h]
  int v18; // [rsp+3CCh] [rbp+34Ch]
  const char *v19; // [rsp+3D0h] [rbp+350h] BYREF
  __int64 v20; // [rsp+3D8h] [rbp+358h]
  const char *v21; // [rsp+3E0h] [rbp+360h] BYREF
  __int64 v22; // [rsp+3E8h] [rbp+368h]
  _BYTE *v23; // [rsp+3F0h] [rbp+370h]
  __int128 *v24; // [rsp+3F8h] [rbp+378h]
  __int64 v25; // [rsp+400h] [rbp+380h]
  __int128 v26; // [rsp+560h] [rbp+4E0h] BYREF
  __int64 v27; // [rsp+570h] [rbp+4F0h]
  __int64 v28; // [rsp+578h] [rbp+4F8h]
  __int128 v29; // [rsp+5F0h] [rbp+570h] BYREF
  __int64 v30; // [rsp+600h] [rbp+580h]
  __int64 v31; // [rsp+610h] [rbp+590h] BYREF
  __m256i v32; // [rsp+618h] [rbp+598h]
  __m256i v33; // [rsp+698h] [rbp+618h] BYREF
  __m256i v34; // [rsp+6B8h] [rbp+638h] BYREF
  __m256i v35; // [rsp+6D8h] [rbp+658h] BYREF
  __int64 v36; // [rsp+6F8h] [rbp+678h]
  __int128 v37; // [rsp+700h] [rbp+680h] BYREF
  __int64 v38; // [rsp+710h] [rbp+690h]
  __int64 v39; // [rsp+718h] [rbp+698h]
  __int64 v40; // [rsp+720h] [rbp+6A0h]
  char v41; // [rsp+72Eh] [rbp+6AEh]
  char v42; // [rsp+72Fh] [rbp+6AFh]
  __int64 v43; // [rsp+730h] [rbp+6B0h]

  v43 = -2;
  sub_141684120(v13, a1, 520);
  sub_141684120(v15, a1 + 520, 400);
  v38 = *(_QWORD *)(a1 + 936);
  v37 = *(_OWORD *)(a1 + 920);
  v25 = 0;
  v19 = aRemoveMcpServe_0;
  v20 = 17;
  v21 = aRepo;
  v22 = 4;
  v23 = v13;
  v24 = &v37;
  v42 = 1;
  v2 = sub_140003640((volatile void *)(v14 + 16));
  if ( !v2 )
  {
    v42 = 1;
    sub_1416850A0(&v34, &v19, &v21);
    if ( v34.m256i_i8[0] != -1 )
    {
      v32 = v34;
      sub_141684120(&v19, a1 + 520, 360);
      v26 = *(_OWORD *)(a1 + 880);
      v27 = *(_QWORD *)(a1 + 896);
      v31 = 1;
      v42 = 0;
      sub_14047E370((unsigned int)&v19, v16, (unsigned int)&v31, (unsigned int)&v26, v17, v18);
      goto LABEL_24;
    }
    v2 = v34.m256i_i64[1];
  }
  v25 = 0;
  v19 = aRemoveMcpServe_0;
  v20 = 17;
  v21 = aMutationgate;
  v22 = 12;
  v23 = v13;
  v24 = &v37;
  v42 = 1;
  v3 = sub_1400048C0((volatile void *)(v14 + 16));
  if ( !v3 )
  {
    v42 = 1;
    sub_1416850A0(&v33, &v19, &v21);
    if ( v33.m256i_i8[0] != -1 )
    {
      v32 = v33;
      sub_141684120(&v19, a1 + 520, 360);
      v26 = *(_OWORD *)(a1 + 880);
      v27 = *(_QWORD *)(a1 + 896);
      v31 = 1;
      v42 = 0;
      sub_14047E370((unsigned int)&v19, v16, (unsigned int)&v31, (unsigned int)&v26, v17, v18);
      goto LABEL_24;
    }
    v3 = v33.m256i_i64[1];
  }
  v25 = 0;
  v19 = aRemoveMcpServe_0;
  v20 = 17;
  v21 = aName_0;
  v22 = 4;
  v23 = v13;
  v24 = &v37;
  v42 = 1;
  sub_1409757B0(&v35, &v19);
  if ( v35.m256i_i8[0] == -1 )
  {
    v30 = v35.m256i_i64[3];
    v29 = *(_OWORD *)&v35.m256i_u64[1];
    v42 = 1;
    sub_14096C290(&v26, v2, v3, &v29);
    sub_141684120(&v19, a1 + 520, 400);
    if ( (_QWORD)v26 != -1 )
    {
      sub_141684120(&v31, &v26, 136);
LABEL_23:
      v41 = 0;
      sub_1404349E0(&v19, &v31);
      goto LABEL_24;
    }
    v5 = *((_QWORD *)&v26 + 1);
    v6 = v27;
    *((_QWORD *)&v7 + 1) = v28;
    if ( v28 < 0 )
    {
      v8 = 0;
      goto LABEL_15;
    }
    if ( v28 )
    {
      nullsub_1(v4);
      v8 = 1;
      v9 = sub_140001650(*((_QWORD *)&v7 + 1), 1);
      if ( !v9 )
      {
LABEL_15:
        v39 = v6;
        v40 = v5;
        sub_1416C2D4B(v8, *((_QWORD *)&v7 + 1));
      }
      *(_QWORD *)&v7 = v9;
      sub_141684120(v9, v6, *((_QWORD *)&v7 + 1));
    }
    else
    {
      *(_QWORD *)&v7 = 1;
    }
    if ( v5 )
      sub_140001660(v6, v5, 1);
    v32.m256i_i8[0] = 3;
    v32.m256i_i64[1] = *((_QWORD *)&v7 + 1);
    *(_OWORD *)&v32.m256i_u64[2] = v7;
    v31 = -1;
    goto LABEL_23;
  }
  v32 = v35;
  sub_141684120(&v19, a1 + 520, 360);
  v26 = *(_OWORD *)(a1 + 880);
  v27 = *(_QWORD *)(a1 + 896);
  v31 = 1;
  v42 = 0;
  sub_14047E370((unsigned int)&v19, v16, (unsigned int)&v31, (unsigned int)&v26, v17, v18);
LABEL_24:
  if ( (_QWORD)v37 != -1 )
  {
    v10 = *((_QWORD *)&v37 + 1);
    v39 = v38;
    v40 = 0;
    v36 = *((_QWORD *)&v37 + 1);
    while ( v39 != v40 )
    {
      ++v40;
      v11 = v10 + 96;
      sub_1402C7520();
      v10 = v11;
    }
    if ( (_QWORD)v37 )
      sub_140001660(*((_QWORD *)&v37 + 1), 96 * v37, 8);
  }
  return sub_140014270(v13);
}