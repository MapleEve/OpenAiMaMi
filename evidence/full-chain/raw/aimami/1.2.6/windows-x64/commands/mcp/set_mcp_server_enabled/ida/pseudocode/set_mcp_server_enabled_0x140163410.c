// Pseudocode for set_mcp_server_enabled (EA: 0x140163410, size: 0x71d)
// Module: commands/mcp
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 set_mcp_server_enabled 的 handler：按入参 name + enabled 开关指定 MCP server，经 mutationGate 变更门禁后落盘（写副作用：改 MCP 配置）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\mcp.rs。
// Tauri 命令 set_mcp_server_enabled 的 handler：按入参 name + enabled 开关指定 MCP server，经 mutationGate 变更门禁后落盘（写副作用：改 MCP 配置）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\mcp.rs。
__int64 __fastcall set_mcp_server_enabled(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r14
  __int64 v13; // r15
  __int128 v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rsi
  __int64 v20; // [rsp+20h] [rbp-60h]
  _BYTE v21[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v22; // [rsp+238h] [rbp+1B8h]
  _BYTE v23[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v24; // [rsp+3C0h] [rbp+340h]
  int v25; // [rsp+3C8h] [rbp+348h]
  int v26; // [rsp+3CCh] [rbp+34Ch]
  __int128 v27; // [rsp+3D0h] [rbp+350h] BYREF
  __int64 v28; // [rsp+3E0h] [rbp+360h]
  __int64 v29; // [rsp+3E8h] [rbp+368h]
  __int64 v30; // [rsp+528h] [rbp+4A8h] BYREF
  __m256i v31; // [rsp+530h] [rbp+4B0h]
  const char *v32; // [rsp+678h] [rbp+5F8h] BYREF
  __int64 v33; // [rsp+680h] [rbp+600h]
  const char *v34; // [rsp+688h] [rbp+608h] BYREF
  __int64 v35; // [rsp+690h] [rbp+610h]
  _BYTE *v36; // [rsp+698h] [rbp+618h]
  __int128 *v37; // [rsp+6A0h] [rbp+620h]
  __int64 v38; // [rsp+6A8h] [rbp+628h]
  __m256i v39; // [rsp+808h] [rbp+788h] BYREF
  __m256i v40; // [rsp+828h] [rbp+7A8h] BYREF
  __m256i v41; // [rsp+848h] [rbp+7C8h] BYREF
  __m256i v42; // [rsp+868h] [rbp+7E8h] BYREF
  __int64 v43; // [rsp+888h] [rbp+808h]
  __int128 v44; // [rsp+890h] [rbp+810h] BYREF
  __int64 v45; // [rsp+8A0h] [rbp+820h]
  __int128 v46; // [rsp+8B0h] [rbp+830h] BYREF
  __int64 v47; // [rsp+8C0h] [rbp+840h]
  __int64 v48; // [rsp+8C8h] [rbp+848h]
  __int64 v49; // [rsp+8D0h] [rbp+850h]
  char v50; // [rsp+8DEh] [rbp+85Eh]
  char v51; // [rsp+8DFh] [rbp+85Fh]
  __int64 v52; // [rsp+8E0h] [rbp+860h]

  v52 = -2;
  sub_14172B820(v21, a1, 520);
  sub_14172B820(v23, a1 + 520, 400);
  v47 = *(_QWORD *)(a1 + 936);
  v46 = *(_OWORD *)(a1 + 920);
  v38 = 0;
  v32 = aSetMcpServerEn;
  v33 = 22;
  v34 = aRepo;
  v35 = 4;
  v36 = v21;
  v37 = &v46;
  v51 = 1;
  v2 = sub_140029DD0((volatile void *)(v22 + 16));
  v3 = v2;
  if ( v2 )
  {
    v42.m256i_i64[1] = v2;
    v42.m256i_i8[0] = -1;
  }
  else
  {
    v51 = 1;
    sub_14172C620((__int64)&v42, (__int64)&v32, (__int64)&v34);
    if ( v42.m256i_i8[0] != -1 )
    {
      v31 = v42;
      sub_14172B820(&v32, a1 + 520, 360);
      v27 = *(_OWORD *)(a1 + 880);
      v28 = *(_QWORD *)(a1 + 896);
      v30 = 1;
      v51 = 0;
      sub_140AFFC30((__int64)&v32, v24, (__int64)&v30, &v27, v25, v26);
      goto LABEL_28;
    }
    v3 = v42.m256i_i64[1];
  }
  v38 = 0;
  v32 = aSetMcpServerEn;
  v33 = 22;
  v34 = aMutationgate;
  v35 = 12;
  v36 = v21;
  v37 = &v46;
  v51 = 1;
  v4 = sub_14002B050((volatile void *)(v22 + 16));
  if ( !v4 )
  {
    v51 = 1;
    sub_14172C620((__int64)&v40, (__int64)&v32, (__int64)&v34);
    if ( v40.m256i_i8[0] != -1 )
    {
      v31 = v40;
      sub_14172B820(&v32, a1 + 520, 360);
      v27 = *(_OWORD *)(a1 + 880);
      v28 = *(_QWORD *)(a1 + 896);
      v30 = 1;
      v51 = 0;
      sub_140AFFC30((__int64)&v32, v24, (__int64)&v30, &v27, v25, v26);
      goto LABEL_28;
    }
    v4 = v40.m256i_i64[1];
  }
  v38 = 0;
  v32 = aSetMcpServerEn;
  v33 = 22;
  v34 = aName_0;
  v35 = 4;
  v36 = v21;
  v37 = &v46;
  v51 = 1;
  sub_140955980(&v41, &v32);
  if ( v41.m256i_i8[0] != -1 )
  {
    v31 = v41;
    sub_14172B820(&v32, a1 + 520, 360);
    v27 = *(_OWORD *)(a1 + 880);
    v28 = *(_QWORD *)(a1 + 896);
    v30 = 1;
    v51 = 0;
    sub_140AFFC30((__int64)&v32, v24, (__int64)&v30, &v27, v25, v26);
    goto LABEL_28;
  }
  v45 = v41.m256i_i64[3];
  v44 = *(_OWORD *)&v41.m256i_u64[1];
  v38 = 0;
  v32 = aSetMcpServerEn;
  v33 = 22;
  v34 = aEnabled;
  v35 = 7;
  v36 = v21;
  v37 = &v46;
  sub_1409562A0(&v39, &v32);
  LOBYTE(v49) = v39.m256i_i8[0];
  if ( v39.m256i_i8[0] == -1 )
  {
    LOBYTE(v20) = v39.m256i_i8[1];
    sub_1409F66B0(&v27, v3, v4, &v44);
    sub_14172B820(&v32, a1 + 520, 400);
    if ( (_QWORD)v27 != -1 )
    {
      sub_14172B820(&v30, &v27, 336);
LABEL_27:
      v50 = 0;
      sub_140A94390(&v32, &v30);
      goto LABEL_28;
    }
    v12 = *((_QWORD *)&v27 + 1);
    v13 = v28;
    *((_QWORD *)&v14 + 1) = v29;
    if ( v29 < 0 )
    {
      v15 = 0;
      goto LABEL_19;
    }
    if ( v29 )
    {
      nullsub_1(v9, v8, v10, v11, v20);
      v15 = 1;
      v16 = sub_140001650(*((_QWORD *)&v14 + 1), 1);
      if ( !v16 )
      {
LABEL_19:
        v48 = v13;
        v49 = v12;
        sub_14176E54B(v15, *((_QWORD *)&v14 + 1));
      }
      *(_QWORD *)&v14 = v16;
      sub_14172B820(v16, v13, *((_QWORD *)&v14 + 1));
    }
    else
    {
      *(_QWORD *)&v14 = 1;
    }
    if ( v12 )
      sub_140001660(v13, v12, 1);
    v31.m256i_i8[0] = 3;
    v31.m256i_i64[1] = *((_QWORD *)&v14 + 1);
    *(_OWORD *)&v31.m256i_u64[2] = v14;
    v30 = -1;
    goto LABEL_27;
  }
  v31 = v39;
  sub_14172B820(&v32, a1 + 520, 360);
  v27 = *(_OWORD *)(a1 + 880);
  v28 = *(_QWORD *)(a1 + 896);
  v30 = 1;
  sub_140AFFC30((__int64)&v32, v24, (__int64)&v30, &v27, v25, v26);
  v5 = v44;
  if ( (_QWORD)v44 )
    sub_140001660(*((_QWORD *)&v44 + 1), v44, 1);
LABEL_28:
  if ( (_QWORD)v46 != -1 )
  {
    v17 = *((_QWORD *)&v46 + 1);
    v48 = v47;
    v49 = 0;
    v43 = *((_QWORD *)&v46 + 1);
    while ( v48 != v49 )
    {
      ++v49;
      v18 = v17 + 96;
      sub_140401FB0(v17, v5, v6, v7, v20);
      v17 = v18;
    }
    if ( (_QWORD)v46 )
      sub_140001660(*((_QWORD *)&v46 + 1), 96 * v46, 8);
  }
  return sub_140043900(v21);
}
