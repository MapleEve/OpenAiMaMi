// module: codexmate_lib/commands
// addr: 0x140175890
// name: load_voice_workspace
// win 1.2.1 | tauri command handler = load_voice_workspace | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall load_voice_workspace(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r14
  __int64 v5; // r15
  __int128 v6; // rdi
  __int64 v7; // rbx
  __int64 v8; // rax
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
  __int64 v21; // [rsp+570h] [rbp+4F0h]
  __int64 v22; // [rsp+578h] [rbp+4F8h]
  __int64 v23; // [rsp+638h] [rbp+5B8h] BYREF
  __int128 v24; // [rsp+640h] [rbp+5C0h]
  __int128 v25; // [rsp+650h] [rbp+5D0h]
  _OWORD v26[2]; // [rsp+708h] [rbp+688h] BYREF
  __int64 v27; // [rsp+728h] [rbp+6A8h]
  __int128 v28; // [rsp+730h] [rbp+6B0h] BYREF
  __int64 v29; // [rsp+740h] [rbp+6C0h]
  __int64 v30; // [rsp+748h] [rbp+6C8h]
  __int64 v31; // [rsp+750h] [rbp+6D0h]
  char v32; // [rsp+75Eh] [rbp+6DEh]
  char v33; // [rsp+75Fh] [rbp+6DFh]
  __int64 v34; // [rsp+760h] [rbp+6E0h]

  v34 = -2;
  sub_141684120(v12, a1, 520);
  sub_141684120(v14, a1 + 520, 400);
  v29 = *(_QWORD *)(a1 + 936);
  v28 = *(_OWORD *)(a1 + 920);
  v19[4] = 0;
  v18[0] = aLoadVoiceWorks;
  v18[1] = 20;
  v19[0] = aRepo;
  v19[1] = 4;
  v19[2] = v12;
  v19[3] = &v28;
  v33 = 1;
  v2 = sub_140003640((volatile void *)(v13 + 16));
  if ( v2 )
  {
LABEL_2:
    v33 = 1;
    sub_140754590(&v20, v2);
    sub_141684120(v18, a1 + 520, 400);
    if ( (_QWORD)v20 != -1 )
    {
      sub_141684120(&v23, &v20, 208);
LABEL_14:
      v32 = 0;
      sub_1404346B0(v18, &v23);
      goto LABEL_15;
    }
    v4 = *((_QWORD *)&v20 + 1);
    v5 = v21;
    *((_QWORD *)&v6 + 1) = v22;
    if ( v22 < 0 )
    {
      v7 = 0;
      goto LABEL_8;
    }
    if ( v22 )
    {
      nullsub_1(v3);
      v7 = 1;
      v8 = sub_140001650(*((_QWORD *)&v6 + 1), 1);
      if ( !v8 )
      {
LABEL_8:
        v30 = v5;
        v31 = v4;
        sub_1416C2D4B(v7, *((_QWORD *)&v6 + 1));
      }
      *(_QWORD *)&v6 = v8;
      sub_141684120(v8, v5, *((_QWORD *)&v6 + 1));
      if ( !v4 )
      {
LABEL_13:
        LOBYTE(v24) = 3;
        *((_QWORD *)&v24 + 1) = *((_QWORD *)&v6 + 1);
        v25 = v6;
        v23 = -1;
        goto LABEL_14;
      }
    }
    else
    {
      *(_QWORD *)&v6 = 1;
      if ( !*((_QWORD *)&v20 + 1) )
        goto LABEL_13;
    }
    sub_140001660(v5, v4, 1);
    goto LABEL_13;
  }
  v33 = 1;
  sub_1416850A0(v26, v18, v19);
  if ( LOBYTE(v26[0]) == 0xFF )
  {
    v2 = *((_QWORD *)&v26[0] + 1);
    goto LABEL_2;
  }
  v25 = v26[1];
  v24 = v26[0];
  sub_141684120(v18, a1 + 520, 360);
  v20 = *(_OWORD *)(a1 + 880);
  v21 = *(_QWORD *)(a1 + 896);
  v23 = 1;
  v33 = 0;
  sub_14047E370((unsigned int)v18, v15, (unsigned int)&v23, (unsigned int)&v20, v16, v17);
LABEL_15:
  if ( (_QWORD)v28 != -1 )
  {
    v9 = *((_QWORD *)&v28 + 1);
    v30 = v29;
    v31 = 0;
    v27 = *((_QWORD *)&v28 + 1);
    while ( v30 != v31 )
    {
      ++v31;
      v10 = v9 + 96;
      sub_1402C7520();
      v9 = v10;
    }
    if ( (_QWORD)v28 )
      sub_140001660(*((_QWORD *)&v28 + 1), 96 * v28, 8);
  }
  return sub_140014270(v12);
}