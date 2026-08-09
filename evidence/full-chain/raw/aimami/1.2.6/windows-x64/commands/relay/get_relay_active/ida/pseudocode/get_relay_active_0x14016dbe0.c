// Pseudocode for get_relay_active (EA: 0x14016dbe0, size: 0x3e8)
// Module: commands/relay
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 get_relay_active 的 handler：读取当前活跃 relay provider（经 relay manager 状态）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。
// Tauri 命令 get_relay_active 的 handler：读取当前活跃 relay provider（经 relay manager 状态）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。
__int64 __fastcall sub_14016DBE0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r14
  __int128 v8; // kr00_16
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v15; // [rsp+20h] [rbp-60h]
  _BYTE v16[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v17; // [rsp+238h] [rbp+1B8h]
  _BYTE v18[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v19; // [rsp+3C0h] [rbp+340h]
  int v20; // [rsp+3C8h] [rbp+348h]
  int v21; // [rsp+3CCh] [rbp+34Ch]
  _QWORD v22[2]; // [rsp+3D0h] [rbp+350h] BYREF
  _QWORD v23[48]; // [rsp+3E0h] [rbp+360h] BYREF
  __int128 v24; // [rsp+560h] [rbp+4E0h] BYREF
  __int128 v25; // [rsp+570h] [rbp+4F0h]
  __int128 v26; // [rsp+580h] [rbp+500h]
  __int128 v27; // [rsp+590h] [rbp+510h]
  __int128 v28; // [rsp+5A0h] [rbp+520h]
  __int128 v29; // [rsp+5B0h] [rbp+530h]
  __int64 v30; // [rsp+5C0h] [rbp+540h]
  _OWORD v31[2]; // [rsp+5D0h] [rbp+550h] BYREF
  _BYTE v32[48]; // [rsp+5F0h] [rbp+570h] BYREF
  __int128 v33; // [rsp+620h] [rbp+5A0h]
  __int128 v34; // [rsp+630h] [rbp+5B0h]
  __int128 v35; // [rsp+640h] [rbp+5C0h]
  __int64 v36; // [rsp+650h] [rbp+5D0h]
  __int64 v37; // [rsp+658h] [rbp+5D8h]
  __int128 v38; // [rsp+660h] [rbp+5E0h] BYREF
  __int64 v39; // [rsp+670h] [rbp+5F0h]
  __int64 v40; // [rsp+678h] [rbp+5F8h]
  __int64 v41; // [rsp+680h] [rbp+600h]
  char v42; // [rsp+68Eh] [rbp+60Eh]
  char v43; // [rsp+68Fh] [rbp+60Fh]
  __int64 v44; // [rsp+690h] [rbp+610h]

  v44 = -2;
  sub_14172B820(v16, a1, 520);
  sub_14172B820(v18, a1 + 520, 400);
  v39 = *(_QWORD *)(a1 + 936);
  v38 = *(_OWORD *)(a1 + 920);
  v23[4] = 0;
  v22[0] = aGetRelayActive;
  v22[1] = 16;
  v23[0] = aManager_0;
  v23[1] = 7;
  v23[2] = v16;
  v23[3] = &v38;
  v43 = 1;
  v2 = sub_14002B2A0((_QWORD *)(v17 + 16));
  if ( v2 )
  {
LABEL_2:
    v43 = 1;
    sub_1409AB0A0(v22, v2);
    v43 = 1;
    sub_1404CBAE0(&v24, v22);
    sub_14172B820(v22, a1 + 520, 400);
    if ( (_QWORD)v24 != -1 )
    {
      v36 = v30;
      v35 = v29;
      v34 = v28;
      v33 = v27;
      *(_OWORD *)&v32[32] = v26;
      *(_OWORD *)&v32[16] = v25;
      *(_OWORD *)v32 = v24;
LABEL_14:
      v42 = 0;
      sub_140A96AC0(v22, v32);
      goto LABEL_15;
    }
    v7 = *((_QWORD *)&v24 + 1);
    v8 = v25;
    if ( v25 < 0 )
    {
      v9 = 0;
      goto LABEL_8;
    }
    if ( *((_QWORD *)&v25 + 1) )
    {
      nullsub_1(v4, v3, v5, v6, v15);
      v9 = 1;
      v10 = sub_140001650(*((_QWORD *)&v8 + 1), 1);
      if ( !v10 )
      {
LABEL_8:
        v40 = v8;
        v41 = v7;
        sub_14176E54B(v9, *((_QWORD *)&v8 + 1));
      }
      v11 = v10;
      sub_14172B820(v10, v8, *((_QWORD *)&v8 + 1));
      if ( !v7 )
      {
LABEL_13:
        v32[8] = 3;
        *(_QWORD *)&v32[16] = *((_QWORD *)&v8 + 1);
        *(_QWORD *)&v32[24] = v11;
        *(_QWORD *)&v32[32] = *((_QWORD *)&v8 + 1);
        *(_QWORD *)v32 = -1;
        goto LABEL_14;
      }
    }
    else
    {
      v11 = 1;
      if ( !*((_QWORD *)&v24 + 1) )
        goto LABEL_13;
    }
    sub_140001660(v8, v7, 1);
    goto LABEL_13;
  }
  v43 = 1;
  sub_14172C620((__int64)v31, (__int64)v22, (__int64)v23);
  if ( LOBYTE(v31[0]) == 0xFF )
  {
    v2 = *((_QWORD *)&v31[0] + 1);
    goto LABEL_2;
  }
  *(_OWORD *)&v32[24] = v31[1];
  *(_OWORD *)&v32[8] = v31[0];
  sub_14172B820(v22, a1 + 520, 360);
  v24 = *(_OWORD *)(a1 + 880);
  *(_QWORD *)&v25 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)v32 = 1;
  v43 = 0;
  sub_140AFFC30((__int64)v22, v19, (__int64)v32, &v24, v20, v21);
LABEL_15:
  if ( (_QWORD)v38 != -1 )
  {
    v12 = *((_QWORD *)&v38 + 1);
    v40 = v39;
    v41 = 0;
    v37 = *((_QWORD *)&v38 + 1);
    while ( v40 != v41 )
    {
      ++v41;
      v13 = v12 + 96;
      sub_140401FB0();
      v12 = v13;
    }
    if ( (_QWORD)v38 )
      sub_140001660(*((_QWORD *)&v38 + 1), 96 * v38, 8);
  }
  return sub_140043900(v16);
}
