// module: codexmate_lib/commands
// addr: 0x14016bc40
// name: force_kill_codex
// win 1.2.1 | tauri command handler = force_kill_codex | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall force_kill_codex(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r14
  __int128 v5; // kr00_16
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rsi
  _BYTE v12[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v13; // [rsp+238h] [rbp+1B8h]
  _BYTE v14[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v15; // [rsp+3C0h] [rbp+340h]
  int v16; // [rsp+3C8h] [rbp+348h]
  int v17; // [rsp+3CCh] [rbp+34Ch]
  _QWORD v18[2]; // [rsp+3D0h] [rbp+350h] BYREF
  _QWORD v19[48]; // [rsp+3E0h] [rbp+360h] BYREF
  __int128 v20; // [rsp+560h] [rbp+4E0h] BYREF
  __int128 v21; // [rsp+570h] [rbp+4F0h]
  __int128 v22; // [rsp+580h] [rbp+500h]
  __int128 v23; // [rsp+590h] [rbp+510h]
  __int128 v24; // [rsp+5A0h] [rbp+520h]
  __int128 v25; // [rsp+5B0h] [rbp+530h]
  __int128 v26; // [rsp+5C0h] [rbp+540h]
  _BYTE v27[48]; // [rsp+5D0h] [rbp+550h] BYREF
  __int128 v28; // [rsp+600h] [rbp+580h]
  __int128 v29; // [rsp+610h] [rbp+590h]
  __int128 v30; // [rsp+620h] [rbp+5A0h]
  __int128 v31; // [rsp+630h] [rbp+5B0h]
  _OWORD v32[2]; // [rsp+648h] [rbp+5C8h] BYREF
  __int64 v33; // [rsp+668h] [rbp+5E8h]
  __int128 v34; // [rsp+670h] [rbp+5F0h] BYREF
  __int64 v35; // [rsp+680h] [rbp+600h]
  __int64 v36; // [rsp+688h] [rbp+608h]
  __int64 v37; // [rsp+690h] [rbp+610h]
  char v38; // [rsp+69Eh] [rbp+61Eh]
  char v39; // [rsp+69Fh] [rbp+61Fh]
  __int64 v40; // [rsp+6A0h] [rbp+620h]

  v40 = -2;
  sub_141684120(v12, a1, 520);
  sub_141684120(v14, a1 + 520, 400);
  v35 = *(_QWORD *)(a1 + 936);
  v34 = *(_OWORD *)(a1 + 920);
  v19[4] = 0;
  v18[0] = aForceKillCodex;
  v18[1] = 16;
  v19[0] = aMutationgate;
  v19[1] = 12;
  v19[2] = v12;
  v19[3] = &v34;
  v39 = 1;
  v2 = sub_1400048C0((volatile void *)(v13 + 16));
  if ( v2 )
  {
LABEL_2:
    v39 = 1;
    sub_1403CF440(&v20, v2);
    sub_141684120(v18, a1 + 520, 400);
    if ( (_QWORD)v20 != -1 )
    {
      v31 = v26;
      v30 = v25;
      v29 = v24;
      v28 = v23;
      *(_OWORD *)&v27[32] = v22;
      *(_OWORD *)&v27[16] = v21;
      *(_OWORD *)v27 = v20;
LABEL_14:
      v38 = 0;
      sub_140434010(v18, v27);
      goto LABEL_15;
    }
    v4 = *((_QWORD *)&v20 + 1);
    v5 = v21;
    if ( v21 < 0 )
    {
      v6 = 0;
      goto LABEL_8;
    }
    if ( *((_QWORD *)&v21 + 1) )
    {
      nullsub_1(v3);
      v6 = 1;
      v7 = sub_140001650(*((_QWORD *)&v5 + 1), 1);
      if ( !v7 )
      {
LABEL_8:
        v36 = v5;
        v37 = v4;
        sub_1416C2D4B(v6, *((_QWORD *)&v5 + 1));
      }
      v8 = v7;
      sub_141684120(v7, v5, *((_QWORD *)&v5 + 1));
      if ( !v4 )
      {
LABEL_13:
        v27[8] = 3;
        *(_QWORD *)&v27[16] = *((_QWORD *)&v5 + 1);
        *(_QWORD *)&v27[24] = v8;
        *(_QWORD *)&v27[32] = *((_QWORD *)&v5 + 1);
        *(_QWORD *)v27 = -1;
        goto LABEL_14;
      }
    }
    else
    {
      v8 = 1;
      if ( !*((_QWORD *)&v20 + 1) )
        goto LABEL_13;
    }
    sub_140001660(v5, v4, 1);
    goto LABEL_13;
  }
  v39 = 1;
  sub_1416850A0(v32, v18, v19);
  if ( LOBYTE(v32[0]) == 0xFF )
  {
    v2 = *((_QWORD *)&v32[0] + 1);
    goto LABEL_2;
  }
  *(_OWORD *)&v27[24] = v32[1];
  *(_OWORD *)&v27[8] = v32[0];
  sub_141684120(v18, a1 + 520, 360);
  v20 = *(_OWORD *)(a1 + 880);
  *(_QWORD *)&v21 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)v27 = 1;
  v39 = 0;
  sub_14047E370((unsigned int)v18, v15, (unsigned int)v27, (unsigned int)&v20, v16, v17);
LABEL_15:
  if ( (_QWORD)v34 != -1 )
  {
    v9 = *((_QWORD *)&v34 + 1);
    v36 = v35;
    v37 = 0;
    v33 = *((_QWORD *)&v34 + 1);
    while ( v36 != v37 )
    {
      ++v37;
      v10 = v9 + 96;
      sub_1402C7520();
      v9 = v10;
    }
    if ( (_QWORD)v34 )
      sub_140001660(*((_QWORD *)&v34 + 1), 96 * v34, 8);
  }
  return sub_140014270(v12);
}