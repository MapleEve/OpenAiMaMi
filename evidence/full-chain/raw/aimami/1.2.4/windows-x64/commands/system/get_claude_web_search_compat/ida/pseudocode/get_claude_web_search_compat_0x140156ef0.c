// win 1.2.4 delta | cmd_get_claude_web_search_compat @ 0x140156ef0
// [FULL decompile]
// win 1.2.4 delta | cmd_get_claude_web_search_compat | (win-native 锚点: 命令名串/跨平台签名)
__int64 __fastcall get_claude_web_search_compat(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r14
  __int128 v7; // kr00_16
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rsi
  _BYTE v14[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v15; // [rsp+238h] [rbp+1B8h]
  _BYTE v16[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v17; // [rsp+3C0h] [rbp+340h]
  int v18; // [rsp+3C8h] [rbp+348h]
  int v19; // [rsp+3CCh] [rbp+34Ch]
  _QWORD v20[2]; // [rsp+3D0h] [rbp+350h] BYREF
  _QWORD v21[48]; // [rsp+3E0h] [rbp+360h] BYREF
  _OWORD v22[2]; // [rsp+560h] [rbp+4E0h] BYREF
  __int128 v23; // [rsp+580h] [rbp+500h] BYREF
  __int128 v24; // [rsp+590h] [rbp+510h]
  __int128 v25; // [rsp+5A0h] [rbp+520h]
  __int128 v26; // [rsp+5B0h] [rbp+530h]
  __int128 v27; // [rsp+5C0h] [rbp+540h]
  _BYTE v28[48]; // [rsp+5D0h] [rbp+550h] BYREF
  __int128 v29; // [rsp+600h] [rbp+580h]
  __int128 v30; // [rsp+610h] [rbp+590h]
  __int64 v31; // [rsp+628h] [rbp+5A8h]
  __int128 v32; // [rsp+630h] [rbp+5B0h] BYREF
  __int64 v33; // [rsp+640h] [rbp+5C0h]
  __int64 v34; // [rsp+648h] [rbp+5C8h]
  __int64 v35; // [rsp+650h] [rbp+5D0h]
  char v36; // [rsp+65Eh] [rbp+5DEh]
  char v37; // [rsp+65Fh] [rbp+5DFh]
  __int64 v38; // [rsp+660h] [rbp+5E0h]

  v38 = -2;
  sub_1416F15C0(v14, a1, 520);
  sub_1416F15C0(v16, a1 + 520, 400);
  v33 = *(_QWORD *)(a1 + 936);
  v32 = *(_OWORD *)(a1 + 920);
  v21[4] = 0;
  v20[0] = aGetClaudeWebSe;
  v20[1] = 28;
  v21[0] = aManager_0;
  v21[1] = 7;
  v21[2] = v14;
  v21[3] = &v32;
  v37 = 1;
  v2 = sub_14002B7A0((volatile void *)(v15 + 16));
  if ( v2 )
  {
LABEL_2:
    v37 = 1;
    sub_14044BAB0(&v23, v2);
    sub_1416F15C0(v20, a1 + 520, 400);
    if ( (_QWORD)v23 != -1 )
    {
      v30 = v27;
      v29 = v26;
      *(_OWORD *)&v28[32] = v25;
      *(_OWORD *)&v28[16] = v24;
      *(_OWORD *)v28 = v23;
LABEL_14:
      v36 = 0;
      sub_1406C6BA0(v20, v28);
      goto LABEL_15;
    }
    v6 = *((_QWORD *)&v23 + 1);
    v7 = v24;
    if ( v24 < 0 )
    {
      v8 = 0;
      goto LABEL_8;
    }
    if ( *((_QWORD *)&v24 + 1) )
    {
      nullsub_1(v4, v3, v5);
      v8 = 1;
      v9 = sub_140001650(*((_QWORD *)&v7 + 1), 1);
      if ( !v9 )
      {
LABEL_8:
        v34 = v7;
        v35 = v6;
        sub_141733E1B(v8, *((_QWORD *)&v7 + 1));
      }
      v10 = v9;
      sub_1416F15C0(v9, v7, *((_QWORD *)&v7 + 1));
      if ( !v6 )
      {
LABEL_13:
        v28[8] = 3;
        *(_QWORD *)&v28[16] = *((_QWORD *)&v7 + 1);
        *(_QWORD *)&v28[24] = v10;
        *(_QWORD *)&v28[32] = *((_QWORD *)&v7 + 1);
        *(_QWORD *)v28 = -1;
        goto LABEL_14;
      }
    }
    else
    {
      v10 = 1;
      if ( !*((_QWORD *)&v23 + 1) )
        goto LABEL_13;
    }
    sub_140001660(v7, v6, 1);
    goto LABEL_13;
  }
  v37 = 1;
  sub_1416F2670(v22, v20, v21);
  if ( LOBYTE(v22[0]) == 0xFF )
  {
    v2 = *((_QWORD *)&v22[0] + 1);
    goto LABEL_2;
  }
  *(_OWORD *)&v28[24] = v22[1];
  *(_OWORD *)&v28[8] = v22[0];
  sub_1416F15C0(v20, a1 + 520, 360);
  v23 = *(_OWORD *)(a1 + 880);
  *(_QWORD *)&v24 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)v28 = 1;
  v37 = 0;
  sub_1407A09A0((unsigned int)v20, v17, (unsigned int)v28, (unsigned int)&v23, v18, v19);
LABEL_15:
  if ( (_QWORD)v32 != -1 )
  {
    v11 = *((_QWORD *)&v32 + 1);
    v34 = v33;
    v35 = 0;
    v31 = *((_QWORD *)&v32 + 1);
    while ( v34 != v35 )
    {
      ++v35;
      v12 = v11 + 96;
      sub_140296460();
      v11 = v12;
    }
    if ( (_QWORD)v32 )
      sub_140001660(*((_QWORD *)&v32 + 1), 96 * v32, 8);
  }
  return sub_140041450(v14);
}
