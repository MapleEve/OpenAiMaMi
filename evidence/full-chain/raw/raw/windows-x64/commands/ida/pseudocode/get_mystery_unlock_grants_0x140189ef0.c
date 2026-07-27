// module: codexmate_lib/commands
// addr: 0x140189ef0
// name: get_mystery_unlock_grants
// win 1.2.1 | tauri command handler = get_mystery_unlock_grants | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall get_mystery_unlock_grants(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v16; // [rsp+20h] [rbp-60h]
  _BYTE v17[512]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v18; // [rsp+230h] [rbp+1B0h]
  _BYTE v19[384]; // [rsp+238h] [rbp+1B8h] BYREF
  __int64 v20; // [rsp+3B8h] [rbp+338h]
  int v21; // [rsp+3C0h] [rbp+340h]
  int v22; // [rsp+3C4h] [rbp+344h]
  _QWORD v23[2]; // [rsp+3C8h] [rbp+348h] BYREF
  _QWORD v24[48]; // [rsp+3D8h] [rbp+358h] BYREF
  _OWORD v25[2]; // [rsp+558h] [rbp+4D8h] BYREF
  __int64 v26; // [rsp+578h] [rbp+4F8h]
  _BYTE v27[24]; // [rsp+580h] [rbp+500h] BYREF
  __int64 v28; // [rsp+598h] [rbp+518h]
  __int64 v29; // [rsp+5A8h] [rbp+528h] BYREF
  __int128 v30; // [rsp+5B0h] [rbp+530h]
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
  v23[0] = aGetMysteryUnlo;
  v23[1] = 25;
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
    sub_1403D32D0(v27, v2);
    sub_141684120(v23, a1 + 520, 400);
    if ( *(_DWORD *)v27 != 1 )
    {
      *(_QWORD *)&v31 = v28;
      v30 = *(_OWORD *)&v27[8];
      LOBYTE(v29) = -1;
LABEL_14:
      v36 = 0;
      sub_140431F20(v23, &v29);
      goto LABEL_15;
    }
    v4 = *(_QWORD *)&v27[8];
    v5 = *(_QWORD *)&v27[16];
    v6 = v28;
    if ( v28 < 0 )
    {
      v7 = 0;
      goto LABEL_5;
    }
    if ( v28 )
    {
      nullsub_1(v3);
      v7 = 1;
      v11 = sub_140001650(v6, 1);
      if ( !v11 )
      {
LABEL_5:
        v34 = v5;
        v35 = v4;
        sub_1416C2D4B(v7, v6);
      }
      v12 = v11;
      sub_141684120(v11, v5, v6);
      if ( !v4 )
        goto LABEL_13;
    }
    else
    {
      v12 = 1;
      if ( !*(_QWORD *)&v27[8] )
        goto LABEL_13;
    }
    sub_140001660(v5, v4, 1);
LABEL_13:
    LOBYTE(v29) = 3;
    *(_QWORD *)&v30 = v6;
    *((_QWORD *)&v30 + 1) = v12;
    *(_QWORD *)&v31 = v6;
    goto LABEL_14;
  }
  v37 = 1;
  sub_1416850A0(v25, v23, v24);
  if ( LOBYTE(v25[0]) == 0xFF )
  {
    v2 = *((_QWORD *)&v25[0] + 1);
    goto LABEL_2;
  }
  v31 = v25[1];
  v30 = v25[0];
  sub_141684120(v23, a1 + 520, 360);
  *(_OWORD *)v27 = *(_OWORD *)(a1 + 880);
  *(_QWORD *)&v27[16] = *(_QWORD *)(a1 + 896);
  v29 = 1;
  v37 = 0;
  sub_14047E370((unsigned int)v23, v20, (unsigned int)&v29, (unsigned int)v27, v21, v22);
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
      sub_1402C7520(v13, v8, v9, v10, v16);
      v13 = v14;
    }
    if ( (_QWORD)v32 )
      sub_140001660(*((_QWORD *)&v32 + 1), 96 * v32, 8);
  }
  return sub_140014270(v17);
}