// Pseudocode for load_mcp_servers (EA: 0x1401656b0, size: 0x388)
// Module: commands/mcp
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 load_mcp_servers 的 handler：从持久化 repo 加载 MCP server 配置列表。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\mcp.rs（MCP 配置面）。
// Tauri 命令 load_mcp_servers 的 handler：从持久化 repo 加载 MCP server 配置列表。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\mcp.rs（MCP 配置面）。
__int64 __fastcall load_mcp_servers(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // r14
  __int64 v11; // r15
  __int128 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v18; // [rsp+20h] [rbp-60h]
  _BYTE v19[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v20; // [rsp+238h] [rbp+1B8h]
  _BYTE v21[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v22; // [rsp+3C0h] [rbp+340h]
  int v23; // [rsp+3C8h] [rbp+348h]
  int v24; // [rsp+3CCh] [rbp+34Ch]
  _QWORD v25[2]; // [rsp+3D0h] [rbp+350h] BYREF
  _QWORD v26[48]; // [rsp+3E0h] [rbp+360h] BYREF
  __int128 v27; // [rsp+560h] [rbp+4E0h] BYREF
  __int64 v28; // [rsp+570h] [rbp+4F0h]
  __int64 v29; // [rsp+578h] [rbp+4F8h]
  __int64 v30; // [rsp+5F8h] [rbp+578h] BYREF
  __int128 v31; // [rsp+600h] [rbp+580h]
  __int128 v32; // [rsp+610h] [rbp+590h]
  _OWORD v33[2]; // [rsp+688h] [rbp+608h] BYREF
  __int64 v34; // [rsp+6A8h] [rbp+628h]
  __int128 v35; // [rsp+6B0h] [rbp+630h] BYREF
  __int64 v36; // [rsp+6C0h] [rbp+640h]
  __int64 v37; // [rsp+6C8h] [rbp+648h]
  __int64 v38; // [rsp+6D0h] [rbp+650h]
  char v39; // [rsp+6DEh] [rbp+65Eh]
  char v40; // [rsp+6DFh] [rbp+65Fh]
  __int64 v41; // [rsp+6E0h] [rbp+660h]

  v41 = -2;
  sub_14172B820(v19, a1, 520);
  sub_14172B820(v21, a1 + 520, 400);
  v36 = *(_QWORD *)(a1 + 936);
  v35 = *(_OWORD *)(a1 + 920);
  v26[4] = 0;
  v25[0] = aLoadMcpServers;
  v25[1] = 16;
  v26[0] = aRepo;
  v26[1] = 4;
  v26[2] = v19;
  v26[3] = &v35;
  v40 = 1;
  v2 = sub_140029DD0((volatile void *)(v20 + 16));
  if ( v2 )
  {
LABEL_2:
    v40 = 1;
    sub_1409F3AC0(&v27, v2);
    sub_14172B820(v25, a1 + 520, 400);
    if ( (_QWORD)v27 != -1 )
    {
      sub_14172B820(&v30, &v27, 144);
LABEL_14:
      v39 = 0;
      sub_140A92FF0(v25, &v30);
      goto LABEL_15;
    }
    v10 = *((_QWORD *)&v27 + 1);
    v11 = v28;
    *((_QWORD *)&v12 + 1) = v29;
    if ( v29 < 0 )
    {
      v13 = 0;
      goto LABEL_8;
    }
    if ( v29 )
    {
      nullsub_1(v4, v3, v5, v6, v18);
      v13 = 1;
      v14 = sub_140001650(*((_QWORD *)&v12 + 1), 1);
      if ( !v14 )
      {
LABEL_8:
        v37 = v11;
        v38 = v10;
        sub_14176E54B(v13, *((_QWORD *)&v12 + 1));
      }
      *(_QWORD *)&v12 = v14;
      sub_14172B820(v14, v11, *((_QWORD *)&v12 + 1));
      if ( !v10 )
      {
LABEL_13:
        LOBYTE(v31) = 3;
        *((_QWORD *)&v31 + 1) = *((_QWORD *)&v12 + 1);
        v32 = v12;
        v30 = -1;
        goto LABEL_14;
      }
    }
    else
    {
      *(_QWORD *)&v12 = 1;
      if ( !*((_QWORD *)&v27 + 1) )
        goto LABEL_13;
    }
    sub_140001660(v11, v10, 1);
    goto LABEL_13;
  }
  v40 = 1;
  sub_14172C620((__int64)v33, (__int64)v25, (__int64)v26);
  if ( LOBYTE(v33[0]) == 0xFF )
  {
    v2 = *((_QWORD *)&v33[0] + 1);
    goto LABEL_2;
  }
  v32 = v33[1];
  v31 = v33[0];
  sub_14172B820(v25, a1 + 520, 360);
  v27 = *(_OWORD *)(a1 + 880);
  v28 = *(_QWORD *)(a1 + 896);
  v30 = 1;
  v40 = 0;
  sub_140AFFC30((__int64)v25, v22, (__int64)&v30, &v27, v23, v24);
LABEL_15:
  if ( (_QWORD)v35 != -1 )
  {
    v15 = *((_QWORD *)&v35 + 1);
    v37 = v36;
    v38 = 0;
    v34 = *((_QWORD *)&v35 + 1);
    while ( v37 != v38 )
    {
      ++v38;
      v16 = v15 + 96;
      sub_140401FB0(v15, v7, v8, v9, v18);
      v15 = v16;
    }
    if ( (_QWORD)v35 )
      sub_140001660(*((_QWORD *)&v35 + 1), 96 * v35, 8);
  }
  return sub_140043900(v19);
}
