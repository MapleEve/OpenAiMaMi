// Pseudocode for load_pending_auto_switch (EA: 0x14016a900, size: 0x388)
// Module: commands/accounts
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri命令handler:读取当前挂起的auto-switch状态(repo参数),薄wrapper转Repository::load_pending_auto_switch。归属:win无直接锚,按auto-switch pending族归system(mac符号commands::system确认)。
// Tauri命令handler:读取当前挂起的auto-switch状态(repo参数),薄wrapper转Repository::load_pending_auto_switch。归属:win无直接锚,按auto-switch pending族归system(mac符号commands::system确认)。
__int64 __fastcall load_pending_auto_switch(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int128 v7; // kr00_16
  const char *v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v15; // [rsp+20h] [rbp-60h]
  _BYTE v16[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v17; // [rsp+238h] [rbp+1B8h]
  char v18[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v19; // [rsp+3C0h] [rbp+340h]
  int v20; // [rsp+3C8h] [rbp+348h]
  int v21; // [rsp+3CCh] [rbp+34Ch]
  __int64 v22; // [rsp+3D0h] [rbp+350h] BYREF
  __int128 v23; // [rsp+3D8h] [rbp+358h]
  __int128 v24; // [rsp+3E8h] [rbp+368h]
  _OWORD v25[25]; // [rsp+6A8h] [rbp+628h] BYREF
  __int64 v26; // [rsp+838h] [rbp+7B8h] BYREF
  __int64 v27; // [rsp+840h] [rbp+7C0h]
  const char *v28; // [rsp+848h] [rbp+7C8h] BYREF
  __int64 v29; // [rsp+850h] [rbp+7D0h]
  const char *v30; // [rsp+858h] [rbp+7D8h]
  __int128 *v31; // [rsp+860h] [rbp+7E0h]
  __int64 v32; // [rsp+868h] [rbp+7E8h]
  __int128 v33; // [rsp+B10h] [rbp+A90h] BYREF
  __int64 v34; // [rsp+B20h] [rbp+AA0h]
  __int64 v35; // [rsp+B28h] [rbp+AA8h]
  __int128 v36; // [rsp+B30h] [rbp+AB0h] BYREF
  __int64 v37; // [rsp+B40h] [rbp+AC0h]
  __int64 v38; // [rsp+B48h] [rbp+AC8h]
  __int64 v39; // [rsp+B50h] [rbp+AD0h]
  char v40; // [rsp+B5Eh] [rbp+ADEh]
  char v41; // [rsp+B5Fh] [rbp+ADFh]
  __int64 v42; // [rsp+B60h] [rbp+AE0h]

  v42 = -2;
  sub_14172B820(v16, a1, 520);
  sub_14172B820(v18, a1 + 520, 400);
  v37 = *(_QWORD *)(a1 + 936);
  v36 = *(_OWORD *)(a1 + 920);
  v32 = 0;
  v26 = (__int64)aLoadPendingAut;
  v27 = 24;
  v28 = aRepo;
  v29 = 4;
  v30 = v16;
  v31 = &v36;
  v41 = 1;
  v2 = sub_140029DD0((volatile void *)(v17 + 16));
  if ( v2 )
  {
LABEL_2:
    v41 = 1;
    sub_140B26550(&v22, v2);
    sub_14172B820(v25, a1 + 520, 400);
    if ( (_DWORD)v22 != -1 )
    {
      sub_14172B820(&v26, &v22, 728);
LABEL_14:
      v40 = 0;
      sub_140A90CA0(v25, &v26);
      goto LABEL_15;
    }
    v7 = v23;
    v8 = (const char *)v24;
    if ( (__int64)v24 < 0 )
    {
      v9 = 0;
      goto LABEL_8;
    }
    if ( (_QWORD)v24 )
    {
      nullsub_1(v4, v3, v5, v6, v15);
      v9 = 1;
      v10 = sub_140001650(v8, 1);
      if ( !v10 )
      {
LABEL_8:
        v38 = *((_QWORD *)&v7 + 1);
        v39 = v7;
        sub_14176E54B(v9, v8);
      }
      v11 = v10;
      sub_14172B820(v10, *((_QWORD *)&v7 + 1), v8);
      if ( !(_QWORD)v7 )
      {
LABEL_13:
        LOBYTE(v27) = 3;
        v28 = v8;
        v29 = v11;
        v30 = v8;
        v26 = -1;
        goto LABEL_14;
      }
    }
    else
    {
      v11 = 1;
      if ( !(_QWORD)v23 )
        goto LABEL_13;
    }
    sub_140001660(*((_QWORD *)&v7 + 1), v7, 1);
    goto LABEL_13;
  }
  v41 = 1;
  sub_14172C620((__int64)v25, (__int64)&v26, (__int64)&v28);
  if ( LOBYTE(v25[0]) == 0xFF )
  {
    v2 = *((_QWORD *)&v25[0] + 1);
    goto LABEL_2;
  }
  v24 = v25[1];
  v23 = v25[0];
  sub_14172B820(&v26, a1 + 520, 360);
  v33 = *(_OWORD *)(a1 + 880);
  v34 = *(_QWORD *)(a1 + 896);
  v22 = 1;
  v41 = 0;
  sub_140AFFC30((__int64)&v26, v19, (__int64)&v22, &v33, v20, v21);
LABEL_15:
  if ( (_QWORD)v36 != -1 )
  {
    v12 = *((_QWORD *)&v36 + 1);
    v38 = v37;
    v39 = 0;
    v35 = *((_QWORD *)&v36 + 1);
    while ( v38 != v39 )
    {
      ++v39;
      v13 = v12 + 96;
      sub_140401FB0();
      v12 = v13;
    }
    if ( (_QWORD)v36 )
      sub_140001660(*((_QWORD *)&v36 + 1), 96 * v36, 8);
  }
  return sub_140043900(v16);
}
