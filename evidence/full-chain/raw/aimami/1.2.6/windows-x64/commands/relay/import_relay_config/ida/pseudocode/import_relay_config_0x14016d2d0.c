// Pseudocode for import_relay_config (EA: 0x14016d2d0, size: 0x60b)
// Module: commands/relay
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 import_relay_config 的 handler：从入参 filePath 导入 relay 配置（写副作用：覆盖/合并现有 provider 配置），引用 app(AppHandle) 与 relay manager。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。
// Tauri 命令 import_relay_config 的 handler：从入参 filePath 导入 relay 配置（写副作用：覆盖/合并现有 provider 配置），引用 app(AppHandle) 与 relay manager。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。
__int64 __fastcall sub_14016D2D0(__int64 a1)
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
  __int128 v33; // [rsp+640h] [rbp+5C0h]
  __int128 v34; // [rsp+650h] [rbp+5D0h]
  __int128 v35; // [rsp+690h] [rbp+610h] BYREF
  __int64 v36; // [rsp+6A0h] [rbp+620h]
  _OWORD v37[2]; // [rsp+6A8h] [rbp+628h] BYREF
  _BYTE v38[48]; // [rsp+6C8h] [rbp+648h] BYREF
  __int128 v39; // [rsp+6F8h] [rbp+678h]
  __int128 v40; // [rsp+708h] [rbp+688h]
  __int128 v41; // [rsp+718h] [rbp+698h]
  __int128 v42; // [rsp+728h] [rbp+6A8h]
  __int64 v43; // [rsp+738h] [rbp+6B8h]
  __int128 v44; // [rsp+740h] [rbp+6C0h] BYREF
  __int128 v45; // [rsp+750h] [rbp+6D0h]
  __int128 v46; // [rsp+760h] [rbp+6E0h] BYREF
  __int64 v47; // [rsp+770h] [rbp+6F0h]
  __int64 v48; // [rsp+780h] [rbp+700h]
  __int64 v49; // [rsp+788h] [rbp+708h]
  char v50; // [rsp+795h] [rbp+715h]
  char v51; // [rsp+796h] [rbp+716h]
  char v52; // [rsp+797h] [rbp+717h]
  __int64 v53; // [rsp+798h] [rbp+718h]

  v53 = -2;
  sub_14172B820(v16, a1, 520);
  sub_14172B820(v18, a1 + 520, 400);
  v47 = *(_QWORD *)(a1 + 936);
  v46 = *(_OWORD *)(a1 + 920);
  v29 = 0;
  v23 = aImportRelayCon;
  v24 = 19;
  v25 = aApp;
  v26 = 3;
  v27 = v16;
  v28 = &v46;
  v52 = 1;
  sub_1401A9630((__int64)v30, (__int64)&v23);
  if ( *(_DWORD *)v30 == -1 )
  {
    *(_OWORD *)&v38[24] = *(_OWORD *)&v30[24];
    *(_OWORD *)&v38[8] = *(_OWORD *)&v30[8];
    sub_14172B820(&v23, a1 + 520, 360);
    v44 = *(_OWORD *)(a1 + 880);
    *(_QWORD *)&v45 = *(_QWORD *)(a1 + 896);
    *(_QWORD *)v38 = 1;
    v52 = 0;
    sub_140AFFC30((__int64)&v23, v19, (__int64)v38, &v44, v20, v21);
    goto LABEL_22;
  }
  sub_14172B820(v22, v30, 152);
  v29 = 0;
  v23 = aImportRelayCon;
  v24 = 19;
  v25 = aManager_0;
  v26 = 7;
  v27 = v16;
  v28 = &v46;
  v2 = sub_14002B2A0((_QWORD *)(v17 + 16));
  if ( !v2 )
  {
    sub_14172C620((__int64)v37, (__int64)&v23, (__int64)&v25);
    if ( LOBYTE(v37[0]) != 0xFF )
    {
      *(_OWORD *)&v38[24] = v37[1];
      *(_OWORD *)&v38[8] = v37[0];
      sub_14172B820(&v23, a1 + 520, 360);
      v44 = *(_OWORD *)(a1 + 880);
      *(_QWORD *)&v45 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)v38 = 1;
      v51 = 0;
      sub_140AFFC30((__int64)&v23, v19, (__int64)v38, &v44, v20, v21);
      v52 = 0;
      sub_1400437E0(v22);
      goto LABEL_22;
    }
    v2 = *((_QWORD *)&v37[0] + 1);
  }
  v29 = 0;
  v23 = aImportRelayCon;
  v24 = 19;
  v25 = aFilepath;
  v26 = 8;
  v27 = v16;
  v28 = &v46;
  v51 = 1;
  sub_140955980(&v44, &v23);
  LOBYTE(v49) = v44;
  if ( (_BYTE)v44 == 0xFF )
  {
    sub_140544EC0(v38, v22, v2, (char *)&v44 + 8);
    sub_14172B820(&v23, a1 + 520, 400);
    if ( *(_QWORD *)v38 != -1 )
    {
      v34 = v42;
      v33 = v41;
      v32 = v40;
      v31 = v39;
      *(_OWORD *)&v30[32] = *(_OWORD *)&v38[32];
      *(_OWORD *)&v30[16] = *(_OWORD *)&v38[16];
      *(_OWORD *)v30 = *(_OWORD *)v38;
LABEL_21:
      v50 = 0;
      sub_140A960F0(&v23, v30);
      goto LABEL_22;
    }
    v7 = *(_QWORD *)&v38[8];
    *((_QWORD *)&v8 + 1) = *(_QWORD *)&v38[24];
    v9 = *(_QWORD *)&v38[16];
    if ( *(__int64 *)&v38[24] < 0 )
    {
      v10 = 0;
      goto LABEL_13;
    }
    if ( *(_QWORD *)&v38[24] )
    {
      nullsub_1(v4, v3, v5, v6, v15);
      v10 = 1;
      v11 = sub_140001650(*((_QWORD *)&v8 + 1), 1);
      if ( !v11 )
      {
LABEL_13:
        v48 = v9;
        v49 = v7;
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
  *(_OWORD *)&v38[24] = v45;
  *(_OWORD *)&v38[8] = v44;
  sub_14172B820(&v23, a1 + 520, 360);
  v35 = *(_OWORD *)(a1 + 880);
  v36 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)v38 = 1;
  sub_140AFFC30((__int64)&v23, v19, (__int64)v38, &v35, v20, v21);
  v52 = 0;
  sub_1400437E0(v22);
LABEL_22:
  if ( (_QWORD)v46 != -1 )
  {
    v12 = *((_QWORD *)&v46 + 1);
    v48 = v47;
    v49 = 0;
    v43 = *((_QWORD *)&v46 + 1);
    while ( v48 != v49 )
    {
      ++v49;
      v13 = v12 + 96;
      sub_140401FB0();
      v12 = v13;
    }
    if ( (_QWORD)v46 )
      sub_140001660(*((_QWORD *)&v46 + 1), 96 * v46, 8);
  }
  return sub_140043900(v16);
}
