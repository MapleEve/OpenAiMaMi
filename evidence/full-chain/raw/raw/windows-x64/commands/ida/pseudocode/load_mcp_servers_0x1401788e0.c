// module: codexmate_lib/commands
// addr: 0x1401788e0
// name: load_mcp_servers
// win 1.2.1 | tauri command handler = load_mcp_servers | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall load_mcp_servers(__int64 a1)
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
  __int64 v23; // [rsp+5F8h] [rbp+578h] BYREF
  __int128 v24; // [rsp+600h] [rbp+580h]
  __int128 v25; // [rsp+610h] [rbp+590h]
  _OWORD v26[2]; // [rsp+688h] [rbp+608h] BYREF
  __int64 v27; // [rsp+6A8h] [rbp+628h]
  __int128 v28; // [rsp+6B0h] [rbp+630h] BYREF
  __int64 v29; // [rsp+6C0h] [rbp+640h]
  __int64 v30; // [rsp+6C8h] [rbp+648h]
  __int64 v31; // [rsp+6D0h] [rbp+650h]
  char v32; // [rsp+6DEh] [rbp+65Eh]
  char v33; // [rsp+6DFh] [rbp+65Fh]
  __int64 v34; // [rsp+6E0h] [rbp+660h]

  v34 = -2;
  sub_141684120(v12, a1, 520);
  sub_141684120(v14, a1 + 520, 400);
  v29 = *(_QWORD *)(a1 + 936);
  v28 = *(_OWORD *)(a1 + 920);
  v19[4] = 0;
  v18[0] = aLoadMcpServers;
  v18[1] = 16;
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
    sub_14096BAB0(&v20, v2);
    sub_141684120(v18, a1 + 520, 400);
    if ( (_QWORD)v20 != -1 )
    {
      sub_141684120(&v23, &v20, 144);
LABEL_14:
      v32 = 0;
      sub_1404339B0(v18, &v23);
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