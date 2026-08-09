// Pseudocode for get_mystery_unlock_grants (EA: 0x140169860, size: 0x388)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 get_mystery_unlock_grants 处理器（commands::system）。读取 mystery 解锁授权（mac 符号 Repository::get_mystery_unlock_grants 佐证）。
// Tauri 命令 get_mystery_unlock_grants 处理器（commands::system）。读取 mystery 解锁授权（mac 符号 Repository::get_mystery_unlock_grants 佐证）。
__int64 __fastcall get_mystery_unlock_grants(__int64 a1)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v19; // [rsp+20h] [rbp-60h]
  _BYTE v20[512]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v21; // [rsp+230h] [rbp+1B0h]
  _BYTE v22[384]; // [rsp+238h] [rbp+1B8h] BYREF
  __int64 v23; // [rsp+3B8h] [rbp+338h]
  int v24; // [rsp+3C0h] [rbp+340h]
  int v25; // [rsp+3C4h] [rbp+344h]
  _QWORD v26[2]; // [rsp+3C8h] [rbp+348h] BYREF
  _QWORD v27[48]; // [rsp+3D8h] [rbp+358h] BYREF
  _OWORD v28[2]; // [rsp+558h] [rbp+4D8h] BYREF
  __int64 v29; // [rsp+578h] [rbp+4F8h]
  _BYTE v30[24]; // [rsp+580h] [rbp+500h] BYREF
  __int64 v31; // [rsp+598h] [rbp+518h]
  __int64 v32; // [rsp+5A8h] [rbp+528h] BYREF
  __int128 v33; // [rsp+5B0h] [rbp+530h]
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
  v26[0] = aGetMysteryUnlo;
  v26[1] = 25;
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
    sub_140B28800(v30, v2);
    sub_14172B820(v26, a1 + 520, 400);
    if ( *(_DWORD *)v30 != 1 )
    {
      *(_QWORD *)&v34 = v31;
      v33 = *(_OWORD *)&v30[8];
      LOBYTE(v32) = -1;
LABEL_14:
      v39 = 0;
      sub_140A91560(v26, &v32);
      goto LABEL_15;
    }
    v7 = *(_QWORD *)&v30[8];
    v8 = *(_QWORD *)&v30[16];
    v9 = v31;
    if ( v31 < 0 )
    {
      v10 = 0;
      goto LABEL_5;
    }
    if ( v31 )
    {
      nullsub_1(v4, v3, v5, v6, v19);
      v10 = 1;
      v14 = sub_140001650(v9, 1);
      if ( !v14 )
      {
LABEL_5:
        v37 = v8;
        v38 = v7;
        sub_14176E54B(v10, v9);
      }
      v15 = v14;
      sub_14172B820(v14, v8, v9);
      if ( !v7 )
        goto LABEL_13;
    }
    else
    {
      v15 = 1;
      if ( !*(_QWORD *)&v30[8] )
        goto LABEL_13;
    }
    sub_140001660(v8, v7, 1);
LABEL_13:
    LOBYTE(v32) = 3;
    *(_QWORD *)&v33 = v9;
    *((_QWORD *)&v33 + 1) = v15;
    *(_QWORD *)&v34 = v9;
    goto LABEL_14;
  }
  v40 = 1;
  sub_14172C620((__int64)v28, (__int64)v26, (__int64)v27);
  if ( LOBYTE(v28[0]) == 0xFF )
  {
    v2 = *((_QWORD *)&v28[0] + 1);
    goto LABEL_2;
  }
  v34 = v28[1];
  v33 = v28[0];
  sub_14172B820(v26, a1 + 520, 360);
  *(_OWORD *)v30 = *(_OWORD *)(a1 + 880);
  *(_QWORD *)&v30[16] = *(_QWORD *)(a1 + 896);
  v32 = 1;
  v40 = 0;
  sub_140AFFC30((__int64)v26, v23, (__int64)&v32, (__int128 *)v30, v24, v25);
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
      sub_140401FB0(v16, v11, v12, v13, v19);
      v16 = v17;
    }
    if ( (_QWORD)v35 )
      sub_140001660(*((_QWORD *)&v35 + 1), 96 * v35, 8);
  }
  return sub_140043900(v20);
}
