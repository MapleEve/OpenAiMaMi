// Pseudocode for get_usage_refresh_interval (EA: 0x14016c520, size: 0x388)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 get_usage_refresh_interval 处理器（commands::system）。读取用量刷新间隔（mac 符号 Repository 同名方法佐证）。
// Tauri 命令 get_usage_refresh_interval 处理器（commands::system）。读取用量刷新间隔（mac 符号 Repository 同名方法佐证）。
__int64 __fastcall get_usage_refresh_interval(__int64 a1)
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
  _BYTE v17[512]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v18; // [rsp+230h] [rbp+1B0h]
  _BYTE v19[384]; // [rsp+238h] [rbp+1B8h] BYREF
  __int64 v20; // [rsp+3B8h] [rbp+338h]
  int v21; // [rsp+3C0h] [rbp+340h]
  int v22; // [rsp+3C4h] [rbp+344h]
  _QWORD v23[2]; // [rsp+3C8h] [rbp+348h] BYREF
  _QWORD v24[48]; // [rsp+3D8h] [rbp+358h] BYREF
  _OWORD v25[2]; // [rsp+558h] [rbp+4D8h] BYREF
  __int64 v26; // [rsp+578h] [rbp+4F8h]
  _BYTE v27[24]; // [rsp+580h] [rbp+500h] BYREF
  __int64 v28; // [rsp+598h] [rbp+518h]
  __int64 v29; // [rsp+5A8h] [rbp+528h] BYREF
  __int128 v30; // [rsp+5B0h] [rbp+530h]
  __int128 v31; // [rsp+5C0h] [rbp+540h]
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
  v23[0] = aGetUsageRefres;
  v23[1] = 26;
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
    sub_140B28C50(v27, v2);
    sub_14172B820(v23, a1 + 520, 400);
    if ( *(_DWORD *)v27 != 1 )
    {
      *(_QWORD *)&v31 = v28;
      v30 = *(_OWORD *)&v27[8];
      LOBYTE(v29) = -1;
LABEL_14:
      v36 = 0;
      sub_140A97E60(v23, &v29);
      goto LABEL_15;
    }
    v7 = *(_QWORD *)&v27[8];
    v8 = *(_QWORD *)&v27[16];
    v9 = v28;
    if ( v28 < 0 )
    {
      v10 = 0;
      goto LABEL_5;
    }
    if ( v28 )
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
      if ( !*(_QWORD *)&v27[8] )
        goto LABEL_13;
    }
    sub_140001660(v8, v7, 1);
LABEL_13:
    LOBYTE(v29) = 3;
    *(_QWORD *)&v30 = v9;
    *((_QWORD *)&v30 + 1) = v12;
    *(_QWORD *)&v31 = v9;
    goto LABEL_14;
  }
  v37 = 1;
  sub_14172C620((__int64)v25, (__int64)v23, (__int64)v24);
  if ( LOBYTE(v25[0]) == 0xFF )
  {
    v2 = *((_QWORD *)&v25[0] + 1);
    goto LABEL_2;
  }
  v31 = v25[1];
  v30 = v25[0];
  sub_14172B820(v23, a1 + 520, 360);
  *(_OWORD *)v27 = *(_OWORD *)(a1 + 880);
  *(_QWORD *)&v27[16] = *(_QWORD *)(a1 + 896);
  v29 = 1;
  v37 = 0;
  sub_140AFFC30((__int64)v23, v20, (__int64)&v29, (__int128 *)v27, v21, v22);
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
