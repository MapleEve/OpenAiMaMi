// module: codexmate_lib/commands
// addr: 0x14017e3e0
// name: set_voice_overlay_style
// win 1.2.1 | tauri command handler = set_voice_overlay_style | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall set_voice_overlay_style(__int64 a1)
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
  __int128 v21; // [rsp+240h] [rbp+1C0h]
  __int128 v22; // [rsp+250h] [rbp+1D0h]
  char v23[384]; // [rsp+530h] [rbp+4B0h] BYREF
  __int64 v24; // [rsp+6B0h] [rbp+630h]
  int v25; // [rsp+6B8h] [rbp+638h]
  int v26; // [rsp+6BCh] [rbp+63Ch]
  __int128 v27; // [rsp+6C0h] [rbp+640h] BYREF
  const char *v28; // [rsp+6D0h] [rbp+650h]
  __int64 v29; // [rsp+6D8h] [rbp+658h]
  char v30[688]; // [rsp+6E0h] [rbp+660h] BYREF
  int v31; // [rsp+990h] [rbp+910h] BYREF
  __int128 v32; // [rsp+998h] [rbp+918h]
  __int128 v33; // [rsp+9A8h] [rbp+928h]
  _BYTE v34[152]; // [rsp+A28h] [rbp+9A8h] BYREF
  __int64 v35; // [rsp+AC0h] [rbp+A40h] BYREF
  __int64 v36; // [rsp+AC8h] [rbp+A48h]
  const char *v37; // [rsp+AD0h] [rbp+A50h]
  __int64 v38; // [rsp+AD8h] [rbp+A58h]
  _BYTE *v39; // [rsp+AE0h] [rbp+A60h] BYREF
  __int128 *v40; // [rsp+AE8h] [rbp+A68h]
  __int64 v41; // [rsp+AF0h] [rbp+A70h]
  _OWORD v42[2]; // [rsp+DD8h] [rbp+D58h] BYREF
  __int64 v43; // [rsp+DF8h] [rbp+D78h]
  __int128 v44; // [rsp+E00h] [rbp+D80h] BYREF
  const char *v45; // [rsp+E10h] [rbp+D90h]
  const char *v46; // [rsp+E18h] [rbp+D98h]
  __int64 v47; // [rsp+E20h] [rbp+DA0h]
  char v48; // [rsp+E2Eh] [rbp+DAEh]
  char v49; // [rsp+E2Fh] [rbp+DAFh]
  __int64 v50; // [rsp+E30h] [rbp+DB0h]

  v50 = -2;
  sub_141684120(v19, a1, 520);
  v2 = a1 + 520;
  sub_141684120(v23, a1 + 520, 400);
  v45 = *(const char **)(a1 + 936);
  v44 = *(_OWORD *)(a1 + 920);
  v41 = 0;
  v35 = (__int64)aSetVoiceOverla;
  v36 = 23;
  v37 = aApp;
  v38 = 3;
  v39 = v19;
  v40 = &v44;
  v49 = 1;
  sub_1401C3650(&v31, &v35);
  if ( v31 == -1 )
  {
    v22 = v33;
    v21 = v32;
    sub_141684120(&v35, a1 + 520, 360);
    v27 = *(_OWORD *)(a1 + 880);
    v28 = *(const char **)(a1 + 896);
    v20 = 1;
    v49 = 0;
    sub_14047E370((unsigned int)&v35, v24, (unsigned int)&v20, (unsigned int)&v27, v25, v26);
    goto LABEL_19;
  }
  sub_141684120(v34, &v31, 152);
  v41 = 0;
  v35 = (__int64)aSetVoiceOverla;
  v36 = 23;
  v37 = aStyle;
  v38 = 5;
  v39 = v19;
  v40 = &v44;
  sub_140AEF780(v42, &v35);
  LOBYTE(v47) = v42[0];
  if ( LOBYTE(v42[0]) == 0xFF )
  {
    sub_14087A030((__int64)&v35, (__int64)v34, SBYTE1(v42[0]));
    v6 = v35;
    v7 = v36;
    v8 = v37;
    v9 = v38;
    if ( v35 == 2 )
    {
      v10 = 2;
    }
    else
    {
      sub_141684120(v30, &v39, 680);
      *(_QWORD *)&v27 = v6;
      *((_QWORD *)&v27 + 1) = v7;
      v28 = v8;
      v29 = v9;
      sub_140ACCBE0(&v35, &v27);
      v10 = v35;
      v7 = v36;
      v8 = v37;
      v9 = v38;
      sub_141684120(&v20, &v39, 760);
    }
    sub_140014150(v34);
    sub_141684120(&v27, v2, 400);
    if ( v10 != 2 )
    {
      v35 = v10;
      v36 = v7;
      v37 = v8;
      v38 = v9;
      sub_141684120(&v39, &v20, 760);
LABEL_18:
      v48 = 0;
      sub_1404353B0(&v27, &v35);
      goto LABEL_19;
    }
    if ( v9 < 0 )
    {
      v12 = 0;
      goto LABEL_11;
    }
    if ( v9 )
    {
      nullsub_1(v11);
      v12 = 1;
      v13 = sub_140001650(v9, 1);
      if ( !v13 )
      {
LABEL_11:
        v46 = v8;
        v47 = v7;
        sub_1416C2D4B(v12, v9);
      }
      v14 = v13;
      sub_141684120(v13, v8, v9);
      if ( !v7 )
        goto LABEL_17;
    }
    else
    {
      v14 = 1;
      if ( !v7 )
        goto LABEL_17;
    }
    sub_140001660(v8, v7, 1);
LABEL_17:
    LOBYTE(v36) = 3;
    v37 = (const char *)v9;
    v38 = v14;
    v39 = (_BYTE *)v9;
    v35 = 2;
    goto LABEL_18;
  }
  v22 = v42[1];
  v21 = v42[0];
  sub_141684120(&v35, a1 + 520, 360);
  v27 = *(_OWORD *)(a1 + 880);
  v28 = *(const char **)(a1 + 896);
  v20 = 1;
  sub_14047E370((unsigned int)&v35, v24, (unsigned int)&v20, (unsigned int)&v27, v25, v26);
  v49 = 0;
  sub_140014150(v34);
LABEL_19:
  if ( (_QWORD)v44 != -1 )
  {
    v15 = *((_QWORD *)&v44 + 1);
    v46 = v45;
    v47 = 0;
    v43 = *((_QWORD *)&v44 + 1);
    while ( v46 != (const char *)v47 )
    {
      ++v47;
      v16 = v15 + 96;
      sub_1402C7520(v15, v3, v4, v5, v18);
      v15 = v16;
    }
    if ( (_QWORD)v44 )
      sub_140001660(*((_QWORD *)&v44 + 1), 96 * v44, 8);
  }
  return sub_140014270(v19);
}