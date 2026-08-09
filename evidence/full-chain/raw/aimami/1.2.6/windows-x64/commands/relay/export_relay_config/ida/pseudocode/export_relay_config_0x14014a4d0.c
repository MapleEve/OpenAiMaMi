// Pseudocode for export_relay_config (EA: 0x14014a4d0, size: 0x61b)
// Module: commands/relay
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 export_relay_config 的 handler：导出 relay 配置到入参 filePath 指定文件，includeApiKeys 控制是否含 API Key 明文（敏感：可写出凭据）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。
// Tauri 命令 export_relay_config 的 handler：导出 relay 配置到入参 filePath 指定文件，includeApiKeys 控制是否含 API Key 明文（敏感：可写出凭据）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。
__int64 __fastcall sub_14014A4D0(__int64 a1)
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
  _BYTE v16[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v17; // [rsp+238h] [rbp+1B8h]
  _BYTE v18[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v19; // [rsp+3C0h] [rbp+340h]
  int v20; // [rsp+3C8h] [rbp+348h]
  int v21; // [rsp+3CCh] [rbp+34Ch]
  const char *v22; // [rsp+3D0h] [rbp+350h] BYREF
  __int64 v23; // [rsp+3D8h] [rbp+358h]
  const char *v24; // [rsp+3E0h] [rbp+360h] BYREF
  __int64 v25; // [rsp+3E8h] [rbp+368h]
  _BYTE *v26; // [rsp+3F0h] [rbp+370h]
  __int128 *v27; // [rsp+3F8h] [rbp+378h]
  __int64 v28; // [rsp+400h] [rbp+380h]
  _OWORD v29[2]; // [rsp+560h] [rbp+4E0h] BYREF
  _OWORD v30[2]; // [rsp+580h] [rbp+500h] BYREF
  __int128 v31; // [rsp+5A0h] [rbp+520h] BYREF
  __int128 v32; // [rsp+5B0h] [rbp+530h]
  __int128 v33; // [rsp+5C0h] [rbp+540h]
  __int128 v34; // [rsp+5D0h] [rbp+550h]
  __int128 v35; // [rsp+5E0h] [rbp+560h]
  __int128 v36; // [rsp+5F0h] [rbp+570h]
  __int128 v37; // [rsp+600h] [rbp+580h]
  __int64 v38; // [rsp+610h] [rbp+590h]
  _BYTE v39[48]; // [rsp+620h] [rbp+5A0h] BYREF
  __int128 v40; // [rsp+650h] [rbp+5D0h]
  __int128 v41; // [rsp+660h] [rbp+5E0h]
  __int128 v42; // [rsp+670h] [rbp+5F0h]
  __int128 v43; // [rsp+680h] [rbp+600h]
  __int64 v44; // [rsp+690h] [rbp+610h]
  __int128 v45; // [rsp+6A0h] [rbp+620h] BYREF
  __int128 v46; // [rsp+6B0h] [rbp+630h]
  __int128 v47; // [rsp+6C0h] [rbp+640h] BYREF
  __int64 v48; // [rsp+6D0h] [rbp+650h]
  __int64 v49; // [rsp+6D8h] [rbp+658h]
  __int64 v50; // [rsp+6E0h] [rbp+660h]
  __int64 v51; // [rsp+6E8h] [rbp+668h]
  char v52; // [rsp+6F6h] [rbp+676h]
  char v53; // [rsp+6F7h] [rbp+677h]
  __int64 v54; // [rsp+6F8h] [rbp+678h]

  v54 = -2;
  sub_14172B820(v16, a1, 520);
  sub_14172B820(v18, a1 + 520, 400);
  v48 = *(_QWORD *)(a1 + 936);
  v47 = *(_OWORD *)(a1 + 920);
  v28 = 0;
  v22 = aExportRelayCon;
  v23 = 19;
  v24 = aManager_0;
  v25 = 7;
  v26 = v16;
  v27 = &v47;
  v53 = 1;
  v2 = sub_14002B2A0((_QWORD *)(v17 + 16));
  if ( !v2 )
  {
    v53 = 1;
    sub_14172C620((__int64)v30, (__int64)&v22, (__int64)&v24);
    if ( LOBYTE(v30[0]) != 0xFF )
    {
      *(_OWORD *)&v39[24] = v30[1];
      *(_OWORD *)&v39[8] = v30[0];
      sub_14172B820(&v22, a1 + 520, 360);
      v31 = *(_OWORD *)(a1 + 880);
      *(_QWORD *)&v32 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)v39 = 1;
      v53 = 0;
      sub_140AFFC30((__int64)&v22, v19, (__int64)v39, &v31, v20, v21);
      goto LABEL_23;
    }
    v2 = *((_QWORD *)&v30[0] + 1);
  }
  v28 = 0;
  v22 = aExportRelayCon;
  v23 = 19;
  v24 = aFilepath;
  v25 = 8;
  v26 = v16;
  v27 = &v47;
  v53 = 1;
  sub_140955980(&v45, &v22);
  if ( (_BYTE)v45 != 0xFF )
  {
    *(_OWORD *)&v39[24] = v46;
    *(_OWORD *)&v39[8] = v45;
    sub_14172B820(&v22, a1 + 520, 360);
    v31 = *(_OWORD *)(a1 + 880);
    *(_QWORD *)&v32 = *(_QWORD *)(a1 + 896);
    *(_QWORD *)v39 = 1;
    v53 = 0;
    sub_140AFFC30((__int64)&v22, v19, (__int64)v39, &v31, v20, v21);
    goto LABEL_23;
  }
  v51 = *((_QWORD *)&v45 + 1);
  v50 = v46;
  v28 = 0;
  v22 = aExportRelayCon;
  v23 = 19;
  v24 = aIncludeapikeys;
  v25 = 14;
  v26 = v16;
  v27 = &v47;
  sub_1409562A0(v29, &v22);
  LOBYTE(v49) = v29[0];
  if ( LOBYTE(v29[0]) == 0xFF )
  {
    sub_140544B20(&v31, v2, (char *)&v45 + 8, BYTE1(v29[0]));
    sub_14172B820(&v22, a1 + 520, 400);
    if ( (_QWORD)v31 != -1 )
    {
      v44 = v38;
      v43 = v37;
      v42 = v36;
      v41 = v35;
      v40 = v34;
      *(_OWORD *)&v39[32] = v33;
      *(_OWORD *)&v39[16] = v32;
      *(_OWORD *)v39 = v31;
LABEL_22:
      v52 = 0;
      sub_140A95D80(&v22, v39);
      goto LABEL_23;
    }
    v7 = *((_QWORD *)&v31 + 1);
    *((_QWORD *)&v8 + 1) = *((_QWORD *)&v32 + 1);
    v9 = v32;
    if ( v32 < 0 )
    {
      v10 = 0;
      goto LABEL_14;
    }
    if ( *((_QWORD *)&v32 + 1) )
    {
      nullsub_1(v4, v3, v5, v6, v15);
      v10 = 1;
      v11 = sub_140001650(*((_QWORD *)&v8 + 1), 1);
      if ( !v11 )
      {
LABEL_14:
        v50 = v9;
        v51 = v7;
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
    v39[8] = 3;
    *(_QWORD *)&v39[16] = *((_QWORD *)&v8 + 1);
    *(_OWORD *)&v39[24] = v8;
    *(_QWORD *)v39 = -1;
    goto LABEL_22;
  }
  *(_OWORD *)&v39[24] = v29[1];
  *(_OWORD *)&v39[8] = v29[0];
  sub_14172B820(&v22, a1 + 520, 360);
  v31 = *(_OWORD *)(a1 + 880);
  *(_QWORD *)&v32 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)v39 = 1;
  sub_140AFFC30((__int64)&v22, v19, (__int64)v39, &v31, v20, v21);
  if ( v51 )
    sub_140001660(v50, v51, 1);
LABEL_23:
  if ( (_QWORD)v47 != -1 )
  {
    v12 = *((_QWORD *)&v47 + 1);
    v50 = v48;
    v51 = 0;
    v49 = *((_QWORD *)&v47 + 1);
    while ( v50 != v51 )
    {
      ++v51;
      v13 = v12 + 96;
      sub_140401FB0();
      v12 = v13;
    }
    if ( (_QWORD)v47 )
      sub_140001660(*((_QWORD *)&v47 + 1), 96 * v47, 8);
  }
  return sub_140043900(v16);
}
