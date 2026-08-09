// Pseudocode for get_relay_proxy_status (EA: 0x140167df0, size: 0x3a8)
// Module: commands/relay
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 get_relay_proxy_status 的 handler：查询 relay 中转代理运行状态（经 relay manager/proxy 状态面）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。
// Tauri 命令 get_relay_proxy_status 的 handler：查询 relay 中转代理运行状态（经 relay manager/proxy 状态面）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。
__int64 __fastcall sub_140167DF0(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r14
  __int64 v9; // r15
  __int128 v10; // rdi
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
  __int128 v25; // [rsp+560h] [rbp+4E0h] BYREF
  __int64 v26; // [rsp+570h] [rbp+4F0h]
  __int64 v27; // [rsp+578h] [rbp+4F8h]
  __int64 v28; // [rsp+608h] [rbp+588h] BYREF
  __int128 v29; // [rsp+610h] [rbp+590h]
  __int128 v30; // [rsp+620h] [rbp+5A0h]
  _OWORD v31[2]; // [rsp+6A8h] [rbp+628h] BYREF
  __int64 v32; // [rsp+6C8h] [rbp+648h]
  __int128 v33; // [rsp+6D0h] [rbp+650h] BYREF
  __int64 v34; // [rsp+6E0h] [rbp+660h]
  __int64 v35; // [rsp+6E8h] [rbp+668h]
  __int64 v36; // [rsp+6F0h] [rbp+670h]
  char v37; // [rsp+6FEh] [rbp+67Eh]
  char v38; // [rsp+6FFh] [rbp+67Fh]
  __int64 v39; // [rsp+700h] [rbp+680h]

  v39 = -2;
  sub_14172B820(v17, a1, 520);
  sub_14172B820(v19, a1 + 520, 400);
  v34 = *(_QWORD *)(a1 + 936);
  v33 = *(_OWORD *)(a1 + 920);
  v24[4] = 0;
  v23[0] = aGetRelayProxyS;
  v23[1] = 22;
  v24[0] = aManager_0;
  v24[1] = 7;
  v24[2] = v17;
  v24[3] = &v33;
  v38 = 1;
  v2 = sub_14002B2A0((_QWORD *)(v18 + 16));
  if ( v2 )
  {
LABEL_2:
    v3 = *(_QWORD *)(v2 + 24);
    v38 = 1;
    sub_1409ADA20(v23, v3);
    v38 = 1;
    sub_1404D0FA0(&v25, v23);
    sub_14172B820(v23, a1 + 520, 400);
    if ( (_QWORD)v25 != -1 )
    {
      sub_14172B820(&v28, &v25, 160);
LABEL_14:
      v37 = 0;
      sub_140A96E30(v23, &v28);
      goto LABEL_15;
    }
    v8 = *((_QWORD *)&v25 + 1);
    v9 = v26;
    *((_QWORD *)&v10 + 1) = v27;
    if ( v27 < 0 )
    {
      v11 = 0;
      goto LABEL_8;
    }
    if ( v27 )
    {
      nullsub_1(v5, v4, v6, v7, v16);
      v11 = 1;
      v12 = sub_140001650(*((_QWORD *)&v10 + 1), 1);
      if ( !v12 )
      {
LABEL_8:
        v35 = v9;
        v36 = v8;
        sub_14176E54B(v11, *((_QWORD *)&v10 + 1));
      }
      *(_QWORD *)&v10 = v12;
      sub_14172B820(v12, v9, *((_QWORD *)&v10 + 1));
      if ( !v8 )
      {
LABEL_13:
        LOBYTE(v29) = 3;
        *((_QWORD *)&v29 + 1) = *((_QWORD *)&v10 + 1);
        v30 = v10;
        v28 = -1;
        goto LABEL_14;
      }
    }
    else
    {
      *(_QWORD *)&v10 = 1;
      if ( !*((_QWORD *)&v25 + 1) )
        goto LABEL_13;
    }
    sub_140001660(v9, v8, 1);
    goto LABEL_13;
  }
  v38 = 1;
  sub_14172C620((__int64)v31, (__int64)v23, (__int64)v24);
  if ( LOBYTE(v31[0]) == 0xFF )
  {
    v2 = *((_QWORD *)&v31[0] + 1);
    goto LABEL_2;
  }
  v30 = v31[1];
  v29 = v31[0];
  sub_14172B820(v23, a1 + 520, 360);
  v25 = *(_OWORD *)(a1 + 880);
  v26 = *(_QWORD *)(a1 + 896);
  v28 = 1;
  v38 = 0;
  sub_140AFFC30((__int64)v23, v20, (__int64)&v28, &v25, v21, v22);
LABEL_15:
  if ( (_QWORD)v33 != -1 )
  {
    v13 = *((_QWORD *)&v33 + 1);
    v35 = v34;
    v36 = 0;
    v32 = *((_QWORD *)&v33 + 1);
    while ( v35 != v36 )
    {
      ++v36;
      v14 = v13 + 96;
      sub_140401FB0();
      v13 = v14;
    }
    if ( (_QWORD)v33 )
      sub_140001660(*((_QWORD *)&v33 + 1), 96 * v33, 8);
  }
  return sub_140043900(v17);
}
