// module: codexmate_lib/commands
// addr: 0x1401892a0
// name: get_notification_client_state
// win 1.2.1 | tauri command handler = get_notification_client_state | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall get_notification_client_state(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r14
  __int128 v9; // rdi
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v16; // [rsp+20h] [rbp-60h]
  _BYTE v17[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v18; // [rsp+238h] [rbp+1B8h]
  _BYTE v19[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v20; // [rsp+3C0h] [rbp+340h]
  int v21; // [rsp+3C8h] [rbp+348h]
  int v22; // [rsp+3CCh] [rbp+34Ch]
  _QWORD v23[2]; // [rsp+3D0h] [rbp+350h] BYREF
  _QWORD v24[48]; // [rsp+3E0h] [rbp+360h] BYREF
  _OWORD v25[2]; // [rsp+560h] [rbp+4E0h] BYREF
  __int64 v26; // [rsp+580h] [rbp+500h]
  __int64 v27; // [rsp+588h] [rbp+508h] BYREF
  __int128 v28; // [rsp+590h] [rbp+510h]
  __int128 v29; // [rsp+5A0h] [rbp+520h]
  __int128 v30; // [rsp+5B0h] [rbp+530h] BYREF
  __int128 v31; // [rsp+5C0h] [rbp+540h]
  __int128 v32; // [rsp+5D0h] [rbp+550h] BYREF
  __int64 v33; // [rsp+5E0h] [rbp+560h]
  __int64 v34; // [rsp+5E8h] [rbp+568h]
  __int64 v35; // [rsp+5F0h] [rbp+570h]
  char v36; // [rsp+5FEh] [rbp+57Eh]
  char v37; // [rsp+5FFh] [rbp+57Fh]
  __int64 v38; // [rsp+600h] [rbp+580h]

  v38 = -2;
  sub_141684120(v17, a1, 520);
  sub_141684120(v19, a1 + 520, 400);
  v33 = *(_QWORD *)(a1 + 936);
  v32 = *(_OWORD *)(a1 + 920);
  v24[4] = 0;
  v23[0] = aGetNotificatio;
  v23[1] = 29;
  v24[0] = aRepo;
  v24[1] = 4;
  v24[2] = v17;
  v24[3] = &v32;
  v37 = 1;
  v2 = sub_140003640((volatile void *)(v18 + 16));
  if ( v2 )
  {
LABEL_2:
    v37 = 1;
    sub_1403D5210(&v30, v2);
    sub_141684120(v23, a1 + 520, 400);
    if ( (_QWORD)v30 != -1 )
    {
      v29 = v31;
      v28 = v30;
      v4 = 0;
LABEL_14:
      v27 = v4;
      v36 = 0;
      sub_140439830(v23, &v27);
      goto LABEL_15;
    }
    v8 = *((_QWORD *)&v30 + 1);
    *((_QWORD *)&v9 + 1) = *((_QWORD *)&v31 + 1);
    v10 = v31;
    if ( v31 < 0 )
    {
      v11 = 0;
      goto LABEL_8;
    }
    if ( *((_QWORD *)&v31 + 1) )
    {
      nullsub_1(v3);
      v11 = 1;
      v12 = sub_140001650(*((_QWORD *)&v9 + 1), 1);
      if ( !v12 )
      {
LABEL_8:
        v34 = v10;
        v35 = v8;
        sub_1416C2D4B(v11, *((_QWORD *)&v9 + 1));
      }
      *(_QWORD *)&v9 = v12;
      sub_141684120(v12, v10, *((_QWORD *)&v9 + 1));
      if ( !v8 )
      {
LABEL_13:
        LOBYTE(v28) = 3;
        *((_QWORD *)&v28 + 1) = *((_QWORD *)&v9 + 1);
        v29 = v9;
        v4 = 1;
        goto LABEL_14;
      }
    }
    else
    {
      *(_QWORD *)&v9 = 1;
      if ( !*((_QWORD *)&v30 + 1) )
        goto LABEL_13;
    }
    sub_140001660(v10, v8, 1);
    goto LABEL_13;
  }
  v37 = 1;
  sub_1416850A0(v25, v23, v24);
  if ( LOBYTE(v25[0]) == 0xFF )
  {
    v2 = *((_QWORD *)&v25[0] + 1);
    goto LABEL_2;
  }
  v29 = v25[1];
  v28 = v25[0];
  sub_141684120(v23, a1 + 520, 360);
  v30 = *(_OWORD *)(a1 + 880);
  *(_QWORD *)&v31 = *(_QWORD *)(a1 + 896);
  v27 = 1;
  v37 = 0;
  sub_14047E370((unsigned int)v23, v20, (unsigned int)&v27, (unsigned int)&v30, v21, v22);
LABEL_15:
  if ( (_QWORD)v32 != -1 )
  {
    v13 = *((_QWORD *)&v32 + 1);
    v34 = v33;
    v35 = 0;
    v26 = *((_QWORD *)&v32 + 1);
    while ( v34 != v35 )
    {
      ++v35;
      v14 = v13 + 96;
      sub_1402C7520(v13, v5, v6, v7, v16);
      v13 = v14;
    }
    if ( (_QWORD)v32 )
      sub_140001660(*((_QWORD *)&v32 + 1), 96 * v32, 8);
  }
  return sub_140014270(v17);
}