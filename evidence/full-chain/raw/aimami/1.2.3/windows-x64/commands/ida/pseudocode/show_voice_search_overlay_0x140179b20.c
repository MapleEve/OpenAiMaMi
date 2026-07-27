// module: codexmate_lib/commands
// addr: 0x140179b20
// name: show_voice_search_overlay
// win 1.2.1 | tauri command handler = show_voice_search_overlay | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall show_voice_search_overlay(__int64 a1)
{
  __int64 v2; // rsi
  const char *v3; // r12
  const char *v4; // rbx
  __int64 v5; // r14
  const char *v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rsi
  _BYTE v15[520]; // [rsp+38h] [rbp-48h] BYREF
  char v16[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v17; // [rsp+3C0h] [rbp+340h]
  int v18; // [rsp+3C8h] [rbp+348h]
  int v19; // [rsp+3CCh] [rbp+34Ch]
  _BYTE v20[152]; // [rsp+3D0h] [rbp+350h] BYREF
  const char *v21; // [rsp+468h] [rbp+3E8h] BYREF
  __int64 v22; // [rsp+470h] [rbp+3F0h]
  const char *v23; // [rsp+478h] [rbp+3F8h]
  _BYTE v24[24]; // [rsp+480h] [rbp+400h]
  __int128 v25; // [rsp+498h] [rbp+418h]
  __int128 v26; // [rsp+4A8h] [rbp+428h]
  __int64 v27; // [rsp+5F8h] [rbp+578h] BYREF
  __int128 v28; // [rsp+600h] [rbp+580h]
  _OWORD v29[8]; // [rsp+610h] [rbp+590h]
  __int128 v30; // [rsp+690h] [rbp+610h] BYREF
  __int64 v31; // [rsp+6A0h] [rbp+620h]
  __int128 v32; // [rsp+6B0h] [rbp+630h] BYREF
  __int128 v33; // [rsp+6C0h] [rbp+640h]
  __m256i v34; // [rsp+6D0h] [rbp+650h] BYREF
  _BYTE v35[48]; // [rsp+6F0h] [rbp+670h] BYREF
  __int128 v36; // [rsp+720h] [rbp+6A0h] BYREF
  const char *v37; // [rsp+730h] [rbp+6B0h]
  __int64 v38; // [rsp+738h] [rbp+6B8h]
  const char *v39; // [rsp+740h] [rbp+6C0h]
  const char *v40; // [rsp+748h] [rbp+6C8h]
  char v41; // [rsp+756h] [rbp+6D6h]
  char v42; // [rsp+757h] [rbp+6D7h]
  __int64 v43; // [rsp+758h] [rbp+6D8h]

  v43 = -2;
  sub_141684120(v15, a1, 520);
  v2 = a1 + 520;
  sub_141684120(v16, a1 + 520, 400);
  v37 = *(const char **)(a1 + 936);
  v36 = *(_OWORD *)(a1 + 920);
  *(_QWORD *)&v25 = 0;
  v21 = aShowVoiceSearc;
  v22 = 25;
  v23 = aApp;
  *(_QWORD *)v24 = 3;
  *(_QWORD *)&v24[8] = v15;
  *(_QWORD *)&v24[16] = &v36;
  v42 = 1;
  sub_1401C3650(&v27, &v21);
  if ( (_DWORD)v27 == -1 )
  {
    *(_OWORD *)&v35[24] = v29[0];
    *(_OWORD *)&v35[8] = v28;
    sub_141684120(&v21, a1 + 520, 360);
    *(_OWORD *)v34.m256i_i8 = *(_OWORD *)(a1 + 880);
    v34.m256i_i64[2] = *(_QWORD *)(a1 + 896);
    *(_QWORD *)v35 = 1;
    v42 = 0;
    sub_14047E370((unsigned int)&v21, v17, (unsigned int)v35, (unsigned int)&v34, v18, v19);
    goto LABEL_22;
  }
  sub_141684120(v20, &v27, 152);
  *(_QWORD *)&v25 = 0;
  v21 = aShowVoiceSearc;
  v22 = 25;
  v23 = aQuery;
  *(_QWORD *)v24 = 5;
  *(_QWORD *)&v24[8] = v15;
  *(_QWORD *)&v24[16] = &v36;
  sub_1409757B0(&v32, &v21);
  LOBYTE(v39) = (_BYTE)v32 == 0xFF;
  if ( (_BYTE)v32 != 0xFF )
  {
    *(_OWORD *)&v35[24] = v33;
    *(_OWORD *)&v35[8] = v32;
    sub_141684120(&v21, a1 + 520, 360);
    *(_OWORD *)v34.m256i_i8 = *(_OWORD *)(a1 + 880);
    v34.m256i_i64[2] = *(_QWORD *)(a1 + 896);
    *(_QWORD *)v35 = 1;
    sub_14047E370((unsigned int)&v21, v17, (unsigned int)v35, (unsigned int)&v34, v18, v19);
    v42 = 0;
    sub_140014150(v20);
    goto LABEL_22;
  }
  v40 = *((const char **)&v32 + 1);
  v3 = *((const char **)&v33 + 1);
  v38 = v33;
  *(_QWORD *)&v25 = 0;
  v21 = aShowVoiceSearc;
  v22 = 25;
  v23 = aOutput;
  *(_QWORD *)v24 = 6;
  *(_QWORD *)&v24[8] = v15;
  *(_QWORD *)&v24[16] = &v36;
  sub_1409757B0(&v34, &v21);
  LOBYTE(v39) = v34.m256i_i8[0];
  if ( v34.m256i_i8[0] == -1 )
  {
    v21 = v40;
    v22 = v38;
    v23 = v3;
    *(_OWORD *)v24 = *(_OWORD *)&v34.m256i_u64[1];
    *(_QWORD *)&v24[16] = v34.m256i_i64[3];
    sub_140AEE5D0(v20, &v21);
    sub_140ACF2F0(&v21);
    v4 = v21;
    v5 = v22;
    v6 = v23;
    v7 = *(_QWORD *)v24;
    *(_OWORD *)v35 = *(_OWORD *)&v24[8];
    *(_OWORD *)&v35[16] = v25;
    *(_OWORD *)&v35[32] = v26;
    sub_140014150(v20);
    sub_141684120(&v21, v2, 400);
    if ( v4 != (const char *)-1LL )
    {
      v27 = (__int64)v4;
      *(_QWORD *)&v28 = v5;
      *((_QWORD *)&v28 + 1) = v6;
      *(_QWORD *)&v29[0] = v7;
      *(_OWORD *)((char *)v29 + 8) = *(_OWORD *)v35;
      *(_OWORD *)((char *)&v29[1] + 8) = *(_OWORD *)&v35[16];
      *(_OWORD *)((char *)&v29[2] + 8) = *(_OWORD *)&v35[32];
LABEL_21:
      v41 = 0;
      sub_140438810(&v21, &v27);
      goto LABEL_22;
    }
    if ( v7 < 0 )
    {
      v9 = 0;
      goto LABEL_13;
    }
    if ( v7 )
    {
      nullsub_1(v8);
      v9 = 1;
      v10 = sub_140001650(v7, 1);
      if ( !v10 )
      {
LABEL_13:
        v40 = v6;
        v39 = (const char *)v5;
        sub_1416C2D4B(v9, v7);
      }
      v11 = v10;
      sub_141684120(v10, v6, v7);
    }
    else
    {
      v11 = 1;
    }
    if ( v5 )
      sub_140001660(v6, v5, 1);
    LOBYTE(v28) = 3;
    *((_QWORD *)&v28 + 1) = v7;
    *(_QWORD *)&v29[0] = v11;
    *((_QWORD *)&v29[0] + 1) = v7;
    v27 = -1;
    goto LABEL_21;
  }
  *(__m256i *)&v35[8] = v34;
  sub_141684120(&v21, a1 + 520, 360);
  v30 = *(_OWORD *)(a1 + 880);
  v31 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)v35 = 1;
  sub_14047E370((unsigned int)&v21, v17, (unsigned int)v35, (unsigned int)&v30, v18, v19);
  if ( v40 )
    sub_140001660(v38, v40, 1);
  v42 = 0;
  sub_140014150(v20);
LABEL_22:
  if ( (_QWORD)v36 != -1 )
  {
    v12 = *((_QWORD *)&v36 + 1);
    v40 = v37;
    v39 = nullptr;
    v38 = *((_QWORD *)&v36 + 1);
    while ( v40 != v39 )
    {
      ++v39;
      v13 = v12 + 96;
      sub_1402C7520();
      v12 = v13;
    }
    if ( (_QWORD)v36 )
      sub_140001660(*((_QWORD *)&v36 + 1), 96 * v36, 8);
  }
  return sub_140014270(v15);
}