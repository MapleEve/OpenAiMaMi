// Pseudocode for get_autostart_state (EA: 0x140166990, size: 0x4e8)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 get_autostart_state 处理器（commands::autostart）。读取开机自启动状态。
// Tauri 命令 get_autostart_state 处理器（commands::autostart）。读取开机自启动状态。
__int64 __fastcall sub_140166990(__int64 a1)
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
  _BYTE v35[48]; // [rsp+6A8h] [rbp+628h] BYREF
  __int128 v36; // [rsp+6D8h] [rbp+658h]
  __int128 v37; // [rsp+6E8h] [rbp+668h]
  __int64 v38; // [rsp+6F8h] [rbp+678h]
  __int128 v39; // [rsp+700h] [rbp+680h] BYREF
  __int128 v40; // [rsp+710h] [rbp+690h]
  __int128 v41; // [rsp+720h] [rbp+6A0h] BYREF
  __int64 v42; // [rsp+730h] [rbp+6B0h]
  __int64 v43; // [rsp+738h] [rbp+6B8h]
  __int64 v44; // [rsp+740h] [rbp+6C0h]
  char v45; // [rsp+74Dh] [rbp+6CDh]
  char v46; // [rsp+74Eh] [rbp+6CEh]
  char v47; // [rsp+74Fh] [rbp+6CFh]
  __int64 v48; // [rsp+750h] [rbp+6D0h]

  v48 = -2;
  sub_14172B820(v16, a1, 520);
  sub_14172B820(v18, a1 + 520, 400);
  v42 = *(_QWORD *)(a1 + 936);
  v41 = *(_OWORD *)(a1 + 920);
  v29 = 0;
  v23 = aGetAutostartSt;
  v24 = 19;
  v25 = aApp;
  v26 = 3;
  v27 = v16;
  v28 = &v41;
  v47 = 1;
  sub_1401A9630((__int64)v30, (__int64)&v23);
  if ( *(_DWORD *)v30 == -1 )
  {
    *(_OWORD *)&v35[24] = *(_OWORD *)&v30[24];
    *(_OWORD *)&v35[8] = *(_OWORD *)&v30[8];
    sub_14172B820(&v23, a1 + 520, 360);
    v39 = *(_OWORD *)(a1 + 880);
    *(_QWORD *)&v40 = *(_QWORD *)(a1 + 896);
    *(_QWORD *)v35 = 1;
    v47 = 0;
    sub_140AFFC30((__int64)&v23, v19, (__int64)v35, &v39, v20, v21);
  }
  else
  {
    sub_14172B820(v22, v30, 152);
    v29 = 0;
    v23 = aGetAutostartSt;
    v24 = 19;
    v25 = aRepo;
    v26 = 4;
    v27 = v16;
    v28 = &v41;
    v2 = sub_140029DD0((volatile void *)(v17 + 16));
    if ( v2 )
      goto LABEL_3;
    sub_14172C620((__int64)&v39, (__int64)&v23, (__int64)&v25);
    if ( (_BYTE)v39 == 0xFF )
    {
      v2 = *((_QWORD *)&v39 + 1);
LABEL_3:
      v46 = 1;
      sub_140547E40(v35, v22, v2);
      sub_14172B820(&v23, a1 + 520, 400);
      if ( *(_QWORD *)v35 != -1 )
      {
        v32 = v37;
        v31 = v36;
        *(_OWORD *)&v30[32] = *(_OWORD *)&v35[32];
        *(_OWORD *)&v30[16] = *(_OWORD *)&v35[16];
        *(_OWORD *)v30 = *(_OWORD *)v35;
LABEL_16:
        v45 = 0;
        sub_140A977C0(&v23, v30);
        goto LABEL_17;
      }
      v7 = *(_QWORD *)&v35[8];
      v8 = *(_OWORD *)&v35[16];
      if ( *(__int64 *)&v35[24] < 0 )
      {
        v9 = 0;
        goto LABEL_10;
      }
      if ( *(_QWORD *)&v35[24] )
      {
        nullsub_1(v4, v3, v5, v6, v15);
        v9 = 1;
        v10 = sub_140001650(*((_QWORD *)&v8 + 1), 1);
        if ( !v10 )
        {
LABEL_10:
          v43 = v8;
          v44 = v7;
          sub_14176E54B(v9, *((_QWORD *)&v8 + 1));
        }
        v11 = v10;
        sub_14172B820(v10, v8, *((_QWORD *)&v8 + 1));
        if ( !v7 )
        {
LABEL_15:
          v30[8] = 3;
          *(_QWORD *)&v30[16] = *((_QWORD *)&v8 + 1);
          *(_QWORD *)&v30[24] = v11;
          *(_QWORD *)&v30[32] = *((_QWORD *)&v8 + 1);
          *(_QWORD *)v30 = -1;
          goto LABEL_16;
        }
      }
      else
      {
        v11 = 1;
        if ( !*(_QWORD *)&v35[8] )
          goto LABEL_15;
      }
      sub_140001660(v8, v7, 1);
      goto LABEL_15;
    }
    *(_OWORD *)&v35[24] = v40;
    *(_OWORD *)&v35[8] = v39;
    sub_14172B820(&v23, a1 + 520, 360);
    v33 = *(_OWORD *)(a1 + 880);
    v34 = *(_QWORD *)(a1 + 896);
    *(_QWORD *)v35 = 1;
    v46 = 0;
    sub_140AFFC30((__int64)&v23, v19, (__int64)v35, &v33, v20, v21);
    v47 = 0;
    sub_1400437E0(v22);
  }
LABEL_17:
  if ( (_QWORD)v41 != -1 )
  {
    v12 = *((_QWORD *)&v41 + 1);
    v43 = v42;
    v44 = 0;
    v38 = *((_QWORD *)&v41 + 1);
    while ( v43 != v44 )
    {
      ++v44;
      v13 = v12 + 96;
      sub_140401FB0();
      v12 = v13;
    }
    if ( (_QWORD)v41 )
      sub_140001660(*((_QWORD *)&v41 + 1), 96 * v41, 8);
  }
  return sub_140043900(v16);
}
