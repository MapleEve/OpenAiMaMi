// Pseudocode for set_autostart_enabled (EA: 0x1401660a0, size: 0x5eb)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 set_autostart_enabled 处理器（commands::autostart，argKeys: enabled）。设置开机自启动。⚠副作用：写系统自启配置。
// Tauri 命令 set_autostart_enabled 处理器（commands::autostart，argKeys: enabled）。设置开机自启动。⚠副作用：写系统自启配置。
__int64 __fastcall sub_1401660A0(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r14
  __int128 v8; // rdi
  __int64 v9; // r15
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v15; // [rsp+20h] [rbp-60h]
  _BYTE v16[512]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v17; // [rsp+230h] [rbp+1B0h]
  _BYTE v18[384]; // [rsp+238h] [rbp+1B8h] BYREF
  __int64 v19; // [rsp+3B8h] [rbp+338h]
  int v20; // [rsp+3C0h] [rbp+340h]
  int v21; // [rsp+3C4h] [rbp+344h]
  _BYTE v22[152]; // [rsp+3C8h] [rbp+348h] BYREF
  const char *v23; // [rsp+460h] [rbp+3E0h] BYREF
  __int64 v24; // [rsp+468h] [rbp+3E8h]
  const char *v25; // [rsp+470h] [rbp+3F0h] BYREF
  __int64 v26; // [rsp+478h] [rbp+3F8h]
  _BYTE *v27; // [rsp+480h] [rbp+400h]
  __int128 *v28; // [rsp+488h] [rbp+408h]
  __int64 v29; // [rsp+490h] [rbp+410h]
  _BYTE v30[48]; // [rsp+5F0h] [rbp+570h] BYREF
  __int128 v31; // [rsp+620h] [rbp+5A0h]
  __int128 v32; // [rsp+630h] [rbp+5B0h]
  __int128 v33; // [rsp+690h] [rbp+610h] BYREF
  __int64 v34; // [rsp+6A0h] [rbp+620h]
  _OWORD v35[2]; // [rsp+6A8h] [rbp+628h] BYREF
  __int64 v36; // [rsp+6C8h] [rbp+648h]
  _BYTE v37[48]; // [rsp+6D0h] [rbp+650h] BYREF
  __int128 v38; // [rsp+700h] [rbp+680h]
  __int128 v39; // [rsp+710h] [rbp+690h]
  __int128 v40; // [rsp+720h] [rbp+6A0h] BYREF
  __int128 v41; // [rsp+730h] [rbp+6B0h]
  __int128 v42; // [rsp+740h] [rbp+6C0h] BYREF
  __int64 v43; // [rsp+750h] [rbp+6D0h]
  __int64 v44; // [rsp+760h] [rbp+6E0h]
  __int64 v45; // [rsp+768h] [rbp+6E8h]
  char v46; // [rsp+775h] [rbp+6F5h]
  char v47; // [rsp+776h] [rbp+6F6h]
  char v48; // [rsp+777h] [rbp+6F7h]
  __int64 v49; // [rsp+778h] [rbp+6F8h]

  v49 = -2;
  sub_14172B820(v16, a1, 520);
  sub_14172B820(v18, a1 + 520, 400);
  v43 = *(_QWORD *)(a1 + 936);
  v42 = *(_OWORD *)(a1 + 920);
  v29 = 0;
  v23 = aSetAutostartEn;
  v24 = 21;
  v25 = aApp;
  v26 = 3;
  v27 = v16;
  v28 = &v42;
  v48 = 1;
  sub_1401A9630((__int64)v30, (__int64)&v23);
  if ( *(_DWORD *)v30 == -1 )
  {
    *(_OWORD *)&v37[24] = *(_OWORD *)&v30[24];
    *(_OWORD *)&v37[8] = *(_OWORD *)&v30[8];
    sub_14172B820(&v23, a1 + 520, 360);
    v40 = *(_OWORD *)(a1 + 880);
    *(_QWORD *)&v41 = *(_QWORD *)(a1 + 896);
    *(_QWORD *)v37 = 1;
    v48 = 0;
    sub_140AFFC30((__int64)&v23, v19, (__int64)v37, &v40, v20, v21);
    goto LABEL_22;
  }
  sub_14172B820(v22, v30, 152);
  v29 = 0;
  v23 = aSetAutostartEn;
  v24 = 21;
  v25 = aRepo;
  v26 = 4;
  v27 = v16;
  v28 = &v42;
  v2 = sub_140029DD0((volatile void *)(v17 + 16));
  if ( !v2 )
  {
    sub_14172C620((__int64)v35, (__int64)&v23, (__int64)&v25);
    if ( LOBYTE(v35[0]) != 0xFF )
    {
      *(_OWORD *)&v37[24] = v35[1];
      *(_OWORD *)&v37[8] = v35[0];
      sub_14172B820(&v23, a1 + 520, 360);
      v40 = *(_OWORD *)(a1 + 880);
      *(_QWORD *)&v41 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)v37 = 1;
      v47 = 0;
      sub_140AFFC30((__int64)&v23, v19, (__int64)v37, &v40, v20, v21);
      v48 = 0;
      sub_1400437E0(v22);
      goto LABEL_22;
    }
    v2 = *((_QWORD *)&v35[0] + 1);
  }
  v29 = 0;
  v23 = aSetAutostartEn;
  v24 = 21;
  v25 = aEnabled;
  v26 = 7;
  v27 = v16;
  v28 = &v42;
  v47 = 1;
  sub_1409562A0(&v40, &v23);
  LOBYTE(v45) = v40;
  if ( (_BYTE)v40 == 0xFF )
  {
    sub_1405481B0(v37, v22, v2, BYTE1(v40));
    sub_14172B820(&v23, a1 + 520, 400);
    if ( *(_QWORD *)v37 != -1 )
    {
      v32 = v39;
      v31 = v38;
      *(_OWORD *)&v30[32] = *(_OWORD *)&v37[32];
      *(_OWORD *)&v30[16] = *(_OWORD *)&v37[16];
      *(_OWORD *)v30 = *(_OWORD *)v37;
LABEL_21:
      v46 = 0;
      sub_140A977C0(&v23, v30);
      goto LABEL_22;
    }
    v7 = *(_QWORD *)&v37[8];
    *((_QWORD *)&v8 + 1) = *(_QWORD *)&v37[24];
    v9 = *(_QWORD *)&v37[16];
    if ( *(__int64 *)&v37[24] < 0 )
    {
      v10 = 0;
      goto LABEL_13;
    }
    if ( *(_QWORD *)&v37[24] )
    {
      nullsub_1(v4, v3, v5, v6, v15);
      v10 = 1;
      v11 = sub_140001650(*((_QWORD *)&v8 + 1), 1);
      if ( !v11 )
      {
LABEL_13:
        v44 = v9;
        v45 = v7;
        sub_14176E54B(v10, *((_QWORD *)&v8 + 1));
      }
      *(_QWORD *)&v8 = v11;
      sub_14172B820(v11, v9, *((_QWORD *)&v8 + 1));
    }
    else
    {
      *(_QWORD *)&v8 = 1;
    }
    if ( v7 )
      sub_140001660(v9, v7, 1);
    v30[8] = 3;
    *(_QWORD *)&v30[16] = *((_QWORD *)&v8 + 1);
    *(_OWORD *)&v30[24] = v8;
    *(_QWORD *)v30 = -1;
    goto LABEL_21;
  }
  *(_OWORD *)&v37[24] = v41;
  *(_OWORD *)&v37[8] = v40;
  sub_14172B820(&v23, a1 + 520, 360);
  v33 = *(_OWORD *)(a1 + 880);
  v34 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)v37 = 1;
  sub_140AFFC30((__int64)&v23, v19, (__int64)v37, &v33, v20, v21);
  v48 = 0;
  sub_1400437E0(v22);
LABEL_22:
  if ( (_QWORD)v42 != -1 )
  {
    v12 = *((_QWORD *)&v42 + 1);
    v44 = v43;
    v45 = 0;
    v36 = *((_QWORD *)&v42 + 1);
    while ( v44 != v45 )
    {
      ++v45;
      v13 = v12 + 96;
      sub_140401FB0();
      v12 = v13;
    }
    if ( (_QWORD)v42 )
      sub_140001660(*((_QWORD *)&v42 + 1), 96 * v42, 8);
  }
  return sub_140043900(v16);
}
