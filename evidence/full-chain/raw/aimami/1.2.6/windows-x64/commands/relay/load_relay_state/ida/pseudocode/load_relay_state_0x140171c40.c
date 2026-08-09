// Pseudocode for load_relay_state (EA: 0x140171c40, size: 0x388)
// Module: commands/relay
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 load_relay_state 的 handler：加载 relay 持久化状态（provider 列表/活跃项等，经 relay manager）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。
// Tauri 命令 load_relay_state 的 handler：加载 relay 持久化状态（provider 列表/活跃项等，经 relay manager）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。
__int64 __fastcall sub_140171C40(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r14
  __int64 v8; // r15
  const char *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v16; // [rsp+20h] [rbp-60h]
  _BYTE v17[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v18; // [rsp+238h] [rbp+1B8h]
  char v19[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v20; // [rsp+3C0h] [rbp+340h]
  int v21; // [rsp+3C8h] [rbp+348h]
  int v22; // [rsp+3CCh] [rbp+34Ch]
  __int64 v23; // [rsp+3D0h] [rbp+350h] BYREF
  __int128 v24; // [rsp+3D8h] [rbp+358h]
  __int128 v25; // [rsp+3E8h] [rbp+368h]
  __int128 v26; // [rsp+560h] [rbp+4E0h] BYREF
  __int64 v27; // [rsp+570h] [rbp+4F0h]
  __int64 v28; // [rsp+578h] [rbp+4F8h]
  __int64 v29; // [rsp+6F8h] [rbp+678h] BYREF
  __int64 v30; // [rsp+700h] [rbp+680h]
  const char *v31; // [rsp+708h] [rbp+688h] BYREF
  __int64 v32; // [rsp+710h] [rbp+690h]
  const char *v33; // [rsp+718h] [rbp+698h]
  __int128 *v34; // [rsp+720h] [rbp+6A0h]
  __int64 v35; // [rsp+728h] [rbp+6A8h]
  _OWORD v36[2]; // [rsp+888h] [rbp+808h] BYREF
  __int64 v37; // [rsp+8A8h] [rbp+828h]
  __int128 v38; // [rsp+8B0h] [rbp+830h] BYREF
  __int64 v39; // [rsp+8C0h] [rbp+840h]
  __int64 v40; // [rsp+8C8h] [rbp+848h]
  __int64 v41; // [rsp+8D0h] [rbp+850h]
  char v42; // [rsp+8DEh] [rbp+85Eh]
  char v43; // [rsp+8DFh] [rbp+85Fh]
  __int64 v44; // [rsp+8E0h] [rbp+860h]

  v44 = -2;
  sub_14172B820(v17, a1, 520);
  sub_14172B820(v19, a1 + 520, 400);
  v39 = *(_QWORD *)(a1 + 936);
  v38 = *(_OWORD *)(a1 + 920);
  v35 = 0;
  v29 = (__int64)aLoadRelayState;
  v30 = 16;
  v31 = aManager_0;
  v32 = 7;
  v33 = v17;
  v34 = &v38;
  v43 = 1;
  v2 = sub_14002B2A0((_QWORD *)(v18 + 16));
  if ( v2 )
  {
LABEL_2:
    v43 = 1;
    sub_1405447D0(&v26, v2);
    sub_14172B820(&v23, a1 + 520, 400);
    if ( (_QWORD)v26 != -1 )
    {
      sub_14172B820(&v29, &v26, 400);
LABEL_14:
      v42 = 0;
      sub_140A96460(&v23, &v29);
      goto LABEL_15;
    }
    v7 = *((_QWORD *)&v26 + 1);
    v8 = v27;
    v9 = (const char *)v28;
    if ( v28 < 0 )
    {
      v10 = 0;
      goto LABEL_8;
    }
    if ( v28 )
    {
      nullsub_1(v4, v3, v5, v6, v16);
      v10 = 1;
      v11 = sub_140001650(v9, 1);
      if ( !v11 )
      {
LABEL_8:
        v40 = v8;
        v41 = v7;
        sub_14176E54B(v10, v9);
      }
      v12 = v11;
      sub_14172B820(v11, v8, v9);
      if ( !v7 )
      {
LABEL_13:
        LOBYTE(v30) = 3;
        v31 = v9;
        v32 = v12;
        v33 = v9;
        v29 = -1;
        goto LABEL_14;
      }
    }
    else
    {
      v12 = 1;
      if ( !*((_QWORD *)&v26 + 1) )
        goto LABEL_13;
    }
    sub_140001660(v8, v7, 1);
    goto LABEL_13;
  }
  v43 = 1;
  sub_14172C620((__int64)v36, (__int64)&v29, (__int64)&v31);
  if ( LOBYTE(v36[0]) == 0xFF )
  {
    v2 = *((_QWORD *)&v36[0] + 1);
    goto LABEL_2;
  }
  v25 = v36[1];
  v24 = v36[0];
  sub_14172B820(&v29, a1 + 520, 360);
  v26 = *(_OWORD *)(a1 + 880);
  v27 = *(_QWORD *)(a1 + 896);
  v23 = 1;
  v43 = 0;
  sub_140AFFC30((__int64)&v29, v20, (__int64)&v23, &v26, v21, v22);
LABEL_15:
  if ( (_QWORD)v38 != -1 )
  {
    v13 = *((_QWORD *)&v38 + 1);
    v40 = v39;
    v41 = 0;
    v37 = *((_QWORD *)&v38 + 1);
    while ( v40 != v41 )
    {
      ++v41;
      v14 = v13 + 96;
      sub_140401FB0();
      v13 = v14;
    }
    if ( (_QWORD)v38 )
      sub_140001660(*((_QWORD *)&v38 + 1), 96 * v38, 8);
  }
  return sub_140043900(v17);
}
