// Pseudocode for dismiss_pending_auto_switch (EA: 0x14016a380, size: 0x378)
// Module: commands/accounts
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri命令handler:撤销/忽略挂起的auto-switch(repo参数),薄wrapper转Repository::dismiss_pending_auto_switch。归属:win无直接锚,按auto-switch pending族归system(mac符号commands::system确认)。
// Tauri命令handler:撤销/忽略挂起的auto-switch(repo参数),薄wrapper转Repository::dismiss_pending_auto_switch。归属:win无直接锚,按auto-switch pending族归system(mac符号commands::system确认)。
__int64 __fastcall dismiss_pending_auto_switch(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
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
  __int64 v31; // [rsp+5C0h] [rbp+540h]
  __int128 v32; // [rsp+5D0h] [rbp+550h] BYREF
  __int64 v33; // [rsp+5E0h] [rbp+560h]
  __int64 v34; // [rsp+5E8h] [rbp+568h]
  __int64 v35; // [rsp+5F0h] [rbp+570h]
  char v36; // [rsp+5FEh] [rbp+57Eh]
  char v37; // [rsp+5FFh] [rbp+57Fh]
  __int64 v38; // [rsp+600h] [rbp+580h]

  v38 = -2;
  sub_14172B820(v17, a1, 520);
  sub_14172B820(v19, a1 + 520, 400);
  v33 = *(_QWORD *)(a1 + 936);
  v32 = *(_OWORD *)(a1 + 920);
  v24[4] = 0;
  v23[0] = aDismissPending;
  v23[1] = 27;
  v24[0] = aRepo;
  v24[1] = 4;
  v24[2] = v17;
  v24[3] = &v32;
  v37 = 1;
  v2 = sub_140029DD0((volatile void *)(v18 + 16));
  if ( v2 )
  {
LABEL_2:
    v37 = 1;
    sub_140B29860(&v30, v2);
    sub_14172B820(v23, a1 + 520, 400);
    v7 = v30;
    if ( (_QWORD)v30 == -1 )
    {
      LOWORD(v27) = __PAIR16__(BYTE8(v30), -1);
LABEL_14:
      v36 = 0;
      sub_140A99C40(v23, &v27);
      goto LABEL_15;
    }
    v8 = *((_QWORD *)&v30 + 1);
    v9 = v31;
    if ( v31 < 0 )
    {
      v10 = 0;
      goto LABEL_5;
    }
    if ( v31 )
    {
      nullsub_1(v4, v3, v5, v6, v16);
      v10 = 1;
      v11 = sub_140001650(v9, 1);
      if ( !v11 )
      {
LABEL_5:
        v34 = v8;
        v35 = v7;
        sub_14176E54B(v10, v9);
      }
      v12 = v11;
      sub_14172B820(v11, v8, v9);
      if ( !v7 )
        goto LABEL_13;
    }
    else
    {
      v12 = 1;
      if ( !(_QWORD)v30 )
        goto LABEL_13;
    }
    sub_140001660(v8, v7, 1);
LABEL_13:
    LOBYTE(v27) = 3;
    *(_QWORD *)&v28 = v9;
    *((_QWORD *)&v28 + 1) = v12;
    *(_QWORD *)&v29 = v9;
    goto LABEL_14;
  }
  v37 = 1;
  sub_14172C620((__int64)v25, (__int64)v23, (__int64)v24);
  if ( LOBYTE(v25[0]) == 0xFF )
  {
    v2 = *((_QWORD *)&v25[0] + 1);
    goto LABEL_2;
  }
  v29 = v25[1];
  v28 = v25[0];
  sub_14172B820(v23, a1 + 520, 360);
  v30 = *(_OWORD *)(a1 + 880);
  v31 = *(_QWORD *)(a1 + 896);
  v27 = 1;
  v37 = 0;
  sub_140AFFC30((__int64)v23, v20, (__int64)&v27, &v30, v21, v22);
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
      sub_140401FB0();
      v13 = v14;
    }
    if ( (_QWORD)v32 )
      sub_140001660(*((_QWORD *)&v32 + 1), 96 * v32, 8);
  }
  return sub_140043900(v17);
}
