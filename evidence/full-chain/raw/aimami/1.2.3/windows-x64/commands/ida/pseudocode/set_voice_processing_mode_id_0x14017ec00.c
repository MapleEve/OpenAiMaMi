// module: codexmate_lib/commands
// addr: 0x14017ec00
// name: set_voice_processing_mode_id
// win 1.2.1 | tauri command handler = set_voice_processing_mode_id | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall set_voice_processing_mode_id(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  __int64 v7; // r14
  const char *v8; // r15
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v18; // [rsp+20h] [rbp-60h]
  _BYTE v19[520]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v20; // [rsp+238h] [rbp+1B8h] BYREF
  __m256i v21; // [rsp+240h] [rbp+1C0h]
  __int128 v22; // [rsp+530h] [rbp+4B0h] BYREF
  const char *v23; // [rsp+540h] [rbp+4C0h]
  __int64 v24; // [rsp+548h] [rbp+4C8h]
  char v25[688]; // [rsp+550h] [rbp+4D0h] BYREF
  char v26[384]; // [rsp+800h] [rbp+780h] BYREF
  __int64 v27; // [rsp+980h] [rbp+900h]
  int v28; // [rsp+988h] [rbp+908h]
  int v29; // [rsp+98Ch] [rbp+90Ch]
  int v30; // [rsp+990h] [rbp+910h] BYREF
  __m256i v31; // [rsp+998h] [rbp+918h]
  _BYTE v32[152]; // [rsp+A28h] [rbp+9A8h] BYREF
  __int64 v33; // [rsp+AC0h] [rbp+A40h] BYREF
  __int64 v34; // [rsp+AC8h] [rbp+A48h]
  const char *v35; // [rsp+AD0h] [rbp+A50h]
  __int64 v36; // [rsp+AD8h] [rbp+A58h]
  _BYTE *v37; // [rsp+AE0h] [rbp+A60h] BYREF
  __int128 *v38; // [rsp+AE8h] [rbp+A68h]
  __int64 v39; // [rsp+AF0h] [rbp+A70h]
  __m256i v40; // [rsp+DD8h] [rbp+D58h] BYREF
  __m256i v41; // [rsp+DF8h] [rbp+D78h] BYREF
  __int64 v42; // [rsp+E18h] [rbp+D98h]
  __int128 v43; // [rsp+E20h] [rbp+DA0h] BYREF
  __int64 v44; // [rsp+E30h] [rbp+DB0h]
  __int128 v45; // [rsp+E40h] [rbp+DC0h] BYREF
  const char *v46; // [rsp+E50h] [rbp+DD0h]
  const char *v47; // [rsp+E58h] [rbp+DD8h]
  __int64 v48; // [rsp+E60h] [rbp+DE0h]
  char v49; // [rsp+E6Eh] [rbp+DEEh]
  char v50; // [rsp+E6Fh] [rbp+DEFh]
  __int64 v51; // [rsp+E70h] [rbp+DF0h]

  v51 = -2;
  sub_141684120(v19, a1, 520);
  v2 = a1 + 520;
  sub_141684120(v26, a1 + 520, 400);
  v46 = *(const char **)(a1 + 936);
  v45 = *(_OWORD *)(a1 + 920);
  v39 = 0;
  v33 = (__int64)aSetVoiceProces;
  v34 = 28;
  v35 = aApp;
  v36 = 3;
  v37 = v19;
  v38 = &v45;
  v50 = 1;
  sub_1401C3650(&v30, &v33);
  if ( v30 == -1 )
  {
    v21 = v31;
    sub_141684120(&v33, a1 + 520, 360);
    v22 = *(_OWORD *)(a1 + 880);
    v23 = *(const char **)(a1 + 896);
    v20 = 1;
    v50 = 0;
    sub_14047E370((unsigned int)&v33, v27, (unsigned int)&v20, (unsigned int)&v22, v28, v29);
    goto LABEL_25;
  }
  sub_141684120(v32, &v30, 152);
  v39 = 0;
  v33 = (__int64)aSetVoiceProces;
  v34 = 28;
  v35 = aModeid;
  v36 = 6;
  v37 = v19;
  v38 = &v45;
  sub_1409757B0(&v41, &v33);
  LOBYTE(v48) = v41.m256i_i8[0] == -1;
  if ( v41.m256i_i8[0] != -1 )
  {
    v21 = v41;
    sub_141684120(&v33, a1 + 520, 360);
    v22 = *(_OWORD *)(a1 + 880);
    v23 = *(const char **)(a1 + 896);
    v20 = 1;
    sub_14047E370((unsigned int)&v33, v27, (unsigned int)&v20, (unsigned int)&v22, v28, v29);
    v50 = 0;
    sub_140014150(v32);
    goto LABEL_25;
  }
  v44 = v41.m256i_i64[3];
  v43 = *(_OWORD *)&v41.m256i_u64[1];
  v39 = 0;
  v33 = (__int64)aSetVoiceProces;
  v34 = 28;
  v35 = aProcessingmode;
  v36 = 14;
  v37 = v19;
  v38 = &v45;
  sub_1409748E0(&v40, &v33);
  LOBYTE(v48) = v40.m256i_i8[0];
  if ( v40.m256i_i8[0] == -1 )
  {
    sub_140881410(&v33, v32, &v43, v40.m256i_u8[1]);
    v6 = v33;
    v7 = v34;
    v8 = v35;
    v9 = v36;
    if ( v33 == 2 )
    {
      v10 = 2;
    }
    else
    {
      sub_141684120(v25, &v37, 680);
      *(_QWORD *)&v22 = v6;
      *((_QWORD *)&v22 + 1) = v7;
      v23 = v8;
      v24 = v9;
      sub_140ACCBE0(&v33, &v22);
      v10 = v33;
      v7 = v34;
      v8 = v35;
      v9 = v36;
      sub_141684120(&v20, &v37, 760);
    }
    sub_140014150(v32);
    sub_141684120(&v22, v2, 400);
    if ( v10 == 2 )
    {
      if ( v9 < 0 )
      {
        v12 = 0;
        goto LABEL_15;
      }
      if ( v9 )
      {
        nullsub_1(v11);
        v12 = 1;
        v13 = sub_140001650(v9, 1);
        if ( !v13 )
        {
LABEL_15:
          v47 = v8;
          v48 = v7;
          sub_1416C2D4B(v12, v9);
        }
        v14 = v13;
        sub_141684120(v13, v8, v9);
      }
      else
      {
        v14 = 1;
      }
      if ( v7 )
        sub_140001660(v8, v7, 1);
      LOBYTE(v34) = 3;
      v35 = (const char *)v9;
      v36 = v14;
      v37 = (_BYTE *)v9;
      v33 = 2;
    }
    else
    {
      v33 = v10;
      v34 = v7;
      v35 = v8;
      v36 = v9;
      sub_141684120(&v37, &v20, 760);
    }
    v49 = 0;
    sub_1404353B0(&v22, &v33);
    goto LABEL_25;
  }
  v21 = v40;
  sub_141684120(&v33, a1 + 520, 360);
  v22 = *(_OWORD *)(a1 + 880);
  v23 = *(const char **)(a1 + 896);
  v20 = 1;
  sub_14047E370((unsigned int)&v33, v27, (unsigned int)&v20, (unsigned int)&v22, v28, v29);
  if ( (_QWORD)v43 )
    sub_140001660(*((_QWORD *)&v43 + 1), v43, 1);
  v50 = 0;
  sub_140014150(v32);
LABEL_25:
  if ( (_QWORD)v45 != -1 )
  {
    v15 = *((_QWORD *)&v45 + 1);
    v47 = v46;
    v48 = 0;
    v42 = *((_QWORD *)&v45 + 1);
    while ( v47 != (const char *)v48 )
    {
      ++v48;
      v16 = v15 + 96;
      sub_1402C7520(v15, v3, v4, v5, v18);
      v15 = v16;
    }
    if ( (_QWORD)v45 )
      sub_140001660(*((_QWORD *)&v45 + 1), 96 * v45, 8);
  }
  return sub_140014270(v19);
}