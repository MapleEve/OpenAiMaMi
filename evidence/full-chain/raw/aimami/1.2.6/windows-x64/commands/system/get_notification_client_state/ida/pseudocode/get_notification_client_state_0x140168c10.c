// Pseudocode for get_notification_client_state (EA: 0x140168c10, size: 0x388)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 get_notification_client_state 处理器（commands::system，mac 符号）。读取通知客户端状态。
// Tauri 命令 get_notification_client_state 处理器（commands::system，mac 符号）。读取通知客户端状态。
__int64 __fastcall get_notification_client_state(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r14
  __int128 v12; // rdi
  __int64 v13; // r15
  __int64 v14; // rbx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v19; // [rsp+20h] [rbp-60h]
  _BYTE v20[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v21; // [rsp+238h] [rbp+1B8h]
  _BYTE v22[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v23; // [rsp+3C0h] [rbp+340h]
  int v24; // [rsp+3C8h] [rbp+348h]
  int v25; // [rsp+3CCh] [rbp+34Ch]
  _QWORD v26[2]; // [rsp+3D0h] [rbp+350h] BYREF
  _QWORD v27[48]; // [rsp+3E0h] [rbp+360h] BYREF
  _OWORD v28[2]; // [rsp+560h] [rbp+4E0h] BYREF
  __int64 v29; // [rsp+580h] [rbp+500h]
  __int64 v30; // [rsp+588h] [rbp+508h] BYREF
  __int128 v31; // [rsp+590h] [rbp+510h]
  __int128 v32; // [rsp+5A0h] [rbp+520h]
  __int128 v33; // [rsp+5B0h] [rbp+530h] BYREF
  __int128 v34; // [rsp+5C0h] [rbp+540h]
  __int128 v35; // [rsp+5D0h] [rbp+550h] BYREF
  __int64 v36; // [rsp+5E0h] [rbp+560h]
  __int64 v37; // [rsp+5E8h] [rbp+568h]
  __int64 v38; // [rsp+5F0h] [rbp+570h]
  char v39; // [rsp+5FEh] [rbp+57Eh]
  char v40; // [rsp+5FFh] [rbp+57Fh]
  __int64 v41; // [rsp+600h] [rbp+580h]

  v41 = -2;
  sub_14172B820(v20, a1, 520);
  sub_14172B820(v22, a1 + 520, 400);
  v36 = *(_QWORD *)(a1 + 936);
  v35 = *(_OWORD *)(a1 + 920);
  v27[4] = 0;
  v26[0] = aGetNotificatio;
  v26[1] = 29;
  v27[0] = aRepo;
  v27[1] = 4;
  v27[2] = v20;
  v27[3] = &v35;
  v40 = 1;
  v2 = sub_140029DD0((volatile void *)(v21 + 16));
  if ( v2 )
  {
LABEL_2:
    v40 = 1;
    sub_140B2AAD0(&v33, v2);
    sub_14172B820(v26, a1 + 520, 400);
    if ( (_QWORD)v33 != -1 )
    {
      v32 = v34;
      v31 = v33;
      v7 = 0;
LABEL_14:
      v30 = v7;
      v39 = 0;
      sub_140A98C80(v26, &v30);
      goto LABEL_15;
    }
    v11 = *((_QWORD *)&v33 + 1);
    *((_QWORD *)&v12 + 1) = *((_QWORD *)&v34 + 1);
    v13 = v34;
    if ( v34 < 0 )
    {
      v14 = 0;
      goto LABEL_8;
    }
    if ( *((_QWORD *)&v34 + 1) )
    {
      nullsub_1(v4, v3, v5, v6, v19);
      v14 = 1;
      v15 = sub_140001650(*((_QWORD *)&v12 + 1), 1);
      if ( !v15 )
      {
LABEL_8:
        v37 = v13;
        v38 = v11;
        sub_14176E54B(v14, *((_QWORD *)&v12 + 1));
      }
      *(_QWORD *)&v12 = v15;
      sub_14172B820(v15, v13, *((_QWORD *)&v12 + 1));
      if ( !v11 )
      {
LABEL_13:
        LOBYTE(v31) = 3;
        *((_QWORD *)&v31 + 1) = *((_QWORD *)&v12 + 1);
        v32 = v12;
        v7 = 1;
        goto LABEL_14;
      }
    }
    else
    {
      *(_QWORD *)&v12 = 1;
      if ( !*((_QWORD *)&v33 + 1) )
        goto LABEL_13;
    }
    sub_140001660(v13, v11, 1);
    goto LABEL_13;
  }
  v40 = 1;
  sub_14172C620((__int64)v28, (__int64)v26, (__int64)v27);
  if ( LOBYTE(v28[0]) == 0xFF )
  {
    v2 = *((_QWORD *)&v28[0] + 1);
    goto LABEL_2;
  }
  v32 = v28[1];
  v31 = v28[0];
  sub_14172B820(v26, a1 + 520, 360);
  v33 = *(_OWORD *)(a1 + 880);
  *(_QWORD *)&v34 = *(_QWORD *)(a1 + 896);
  v30 = 1;
  v40 = 0;
  sub_140AFFC30((__int64)v26, v23, (__int64)&v30, &v33, v24, v25);
LABEL_15:
  if ( (_QWORD)v35 != -1 )
  {
    v16 = *((_QWORD *)&v35 + 1);
    v37 = v36;
    v38 = 0;
    v29 = *((_QWORD *)&v35 + 1);
    while ( v37 != v38 )
    {
      ++v38;
      v17 = v16 + 96;
      sub_140401FB0(v16, v8, v9, v10, v19);
      v16 = v17;
    }
    if ( (_QWORD)v35 )
      sub_140001660(*((_QWORD *)&v35 + 1), 96 * v35, 8);
  }
  return sub_140043900(v20);
}
