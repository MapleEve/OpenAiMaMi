// Pseudocode for upsert_mcp_server (EA: 0x140163e30, size: 0xe95)
// Module: commands/mcp
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 upsert_mcp_server 的 handler：新增或更新 MCP server 配置，入参含 transport/command/args/headers/environment/url 连接字段，经 mutationGate 落盘（写副作用：改 MCP 配置）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\mcp
// Tauri 命令 upsert_mcp_server 的 handler：新增或更新 MCP server 配置，入参含 transport/command/args/headers/environment/url 连接字段，经 mutationGate 落盘（写副作用：改 MCP 配置）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\mcp.rs。
__int64 __fastcall upsert_mcp_server(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 *v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int128 *v13; // [rsp+20h] [rbp-60h]
  _BYTE v14[512]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v15; // [rsp+258h] [rbp+1D8h]
  __int128 v16; // [rsp+260h] [rbp+1E0h]
  __int128 v17; // [rsp+270h] [rbp+1F0h]
  __int128 v18; // [rsp+280h] [rbp+200h]
  __int128 v19; // [rsp+290h] [rbp+210h]
  __int128 v20; // [rsp+2A0h] [rbp+220h]
  __int128 v21; // [rsp+2B0h] [rbp+230h]
  _BYTE v22[24]; // [rsp+2C0h] [rbp+240h] BYREF
  __int128 v23; // [rsp+2D8h] [rbp+258h]
  __int128 v24; // [rsp+410h] [rbp+390h] BYREF
  __int64 v25; // [rsp+420h] [rbp+3A0h]
  _BYTE v26[360]; // [rsp+430h] [rbp+3B0h] BYREF
  __int128 v27; // [rsp+598h] [rbp+518h]
  __int64 v28; // [rsp+5A8h] [rbp+528h]
  __int64 v29; // [rsp+5B0h] [rbp+530h]
  int v30; // [rsp+5B8h] [rbp+538h]
  int v31; // [rsp+5BCh] [rbp+53Ch]
  _BYTE v32[336]; // [rsp+5C0h] [rbp+540h] BYREF
  _OWORD v33[2]; // [rsp+710h] [rbp+690h] BYREF
  __m256i v34; // [rsp+730h] [rbp+6B0h] BYREF
  __m256i v35; // [rsp+750h] [rbp+6D0h] BYREF
  __m256i v36; // [rsp+770h] [rbp+6F0h] BYREF
  __m256i v37; // [rsp+790h] [rbp+710h] BYREF
  __int128 v38; // [rsp+7B0h] [rbp+730h] BYREF
  __int64 v39; // [rsp+7C0h] [rbp+740h]
  _OWORD v40[2]; // [rsp+7C8h] [rbp+748h] BYREF
  _OWORD v41[2]; // [rsp+7E8h] [rbp+768h] BYREF
  const char *v42; // [rsp+808h] [rbp+788h] BYREF
  __int64 v43; // [rsp+810h] [rbp+790h]
  const char *v44; // [rsp+818h] [rbp+798h] BYREF
  __int64 v45; // [rsp+820h] [rbp+7A0h]
  _BYTE *v46; // [rsp+828h] [rbp+7A8h]
  __int128 *v47; // [rsp+830h] [rbp+7B0h]
  __int64 v48; // [rsp+838h] [rbp+7B8h]
  _BYTE v49[48]; // [rsp+998h] [rbp+918h] BYREF
  __int64 v50; // [rsp+9C8h] [rbp+948h]
  __m256i v51; // [rsp+9D0h] [rbp+950h] BYREF
  __int128 v52; // [rsp+9F0h] [rbp+970h] BYREF
  __int64 v53; // [rsp+A00h] [rbp+980h]
  __int128 v54; // [rsp+A10h] [rbp+990h]
  __int64 v55; // [rsp+A20h] [rbp+9A0h]
  __int128 v56; // [rsp+A30h] [rbp+9B0h]
  __int64 v57; // [rsp+A40h] [rbp+9C0h]
  __int128 v58; // [rsp+A50h] [rbp+9D0h] BYREF
  __int64 v59; // [rsp+A60h] [rbp+9E0h]
  __int64 v60; // [rsp+A68h] [rbp+9E8h]
  __int128 v61; // [rsp+A70h] [rbp+9F0h] BYREF
  __int64 v62; // [rsp+A80h] [rbp+A00h]
  __int64 v63; // [rsp+A90h] [rbp+A10h]
  char v64; // [rsp+A9Dh] [rbp+A1Dh]
  char v65; // [rsp+A9Eh] [rbp+A1Eh]
  char v66; // [rsp+A9Fh] [rbp+A1Fh]
  __int64 v67; // [rsp+AA0h] [rbp+A20h]

  v67 = -2;
  sub_14172B820(v14, a1, 520);
  sub_14172B820(v26, a1 + 520, 400);
  v53 = *(_QWORD *)(a1 + 936);
  v52 = *(_OWORD *)(a1 + 920);
  v48 = 0;
  v42 = aUpsertMcpServe;
  v43 = 17;
  v44 = aRepo;
  v45 = 4;
  v46 = v14;
  v47 = &v52;
  v66 = 1;
  v2 = sub_140029DD0((volatile void *)(v15 + 16));
  v3 = v2;
  if ( v2 )
  {
    *((_QWORD *)&v41[0] + 1) = v2;
    LOBYTE(v41[0]) = -1;
  }
  else
  {
    v66 = 1;
    sub_14172C620((__int64)v41, (__int64)&v42, (__int64)&v44);
    if ( LOBYTE(v41[0]) != 0xFF )
    {
      *(_OWORD *)&v32[24] = v41[1];
      *(_OWORD *)&v32[8] = v41[0];
      sub_14172B820(&v42, a1 + 520, 360);
      *(_OWORD *)v22 = *(_OWORD *)(a1 + 880);
      *(_QWORD *)&v22[16] = *(_QWORD *)(a1 + 896);
      *(_QWORD *)v32 = 1;
      v66 = 0;
      sub_140AFFC30((__int64)&v42, v29, (__int64)v32, (__int128 *)v22, v30, v31);
      goto LABEL_31;
    }
    v3 = *((_QWORD *)&v41[0] + 1);
  }
  v48 = 0;
  v42 = aUpsertMcpServe;
  v43 = 17;
  v44 = aMutationgate;
  v45 = 12;
  v46 = v14;
  v47 = &v52;
  v66 = 1;
  v4 = sub_14002B050((volatile void *)(v15 + 16));
  v5 = v4;
  if ( v4 )
  {
    *((_QWORD *)&v40[0] + 1) = v4;
    LOBYTE(v40[0]) = -1;
  }
  else
  {
    v66 = 1;
    sub_14172C620((__int64)v40, (__int64)&v42, (__int64)&v44);
    if ( LOBYTE(v40[0]) != 0xFF )
    {
      *(_OWORD *)&v32[24] = v40[1];
      *(_OWORD *)&v32[8] = v40[0];
      sub_14172B820(&v42, a1 + 520, 360);
      *(_OWORD *)v22 = *(_OWORD *)(a1 + 880);
      *(_QWORD *)&v22[16] = *(_QWORD *)(a1 + 896);
      *(_QWORD *)v32 = 1;
      v66 = 0;
      sub_140AFFC30((__int64)&v42, v29, (__int64)v32, (__int128 *)v22, v30, v31);
      goto LABEL_31;
    }
    v5 = *((_QWORD *)&v40[0] + 1);
  }
  v48 = 0;
  v42 = aUpsertMcpServe;
  v43 = 17;
  v44 = aName_0;
  v45 = 4;
  v46 = v14;
  v47 = &v52;
  v66 = 1;
  sub_140955980(&v37, &v42);
  if ( v37.m256i_i8[0] != -1 )
  {
    *(__m256i *)&v32[8] = v37;
    sub_14172B820(&v42, a1 + 520, 360);
    *(_OWORD *)v22 = *(_OWORD *)(a1 + 880);
    *(_QWORD *)&v22[16] = *(_QWORD *)(a1 + 896);
    *(_QWORD *)v32 = 1;
    v66 = 0;
    sub_140AFFC30((__int64)&v42, v29, (__int64)v32, (__int128 *)v22, v30, v31);
    goto LABEL_31;
  }
  v62 = v37.m256i_i64[3];
  v61 = *(_OWORD *)&v37.m256i_u64[1];
  v48 = 0;
  v42 = aUpsertMcpServe;
  v43 = 17;
  v44 = aTransport;
  v45 = 9;
  v46 = v14;
  v47 = &v52;
  sub_140955980(&v36, &v42);
  LOBYTE(v63) = v36.m256i_i8[0] == -1;
  if ( v36.m256i_i8[0] == -1 )
  {
    v59 = v36.m256i_i64[3];
    v58 = *(_OWORD *)&v36.m256i_u64[1];
    v48 = 0;
    v42 = aUpsertMcpServe;
    v43 = 17;
    v44 = aEnabled;
    v45 = 7;
    v46 = v14;
    v47 = &v52;
    sub_1409562A0(v33, &v42);
    LOBYTE(v63) = LOBYTE(v33[0]) == 0xFF;
    if ( LOBYTE(v33[0]) != 0xFF )
    {
      *(_OWORD *)&v32[24] = v33[1];
      *(_OWORD *)&v32[8] = v33[0];
      sub_14172B820(&v42, v26, 360);
      *(_OWORD *)v22 = v27;
      *(_QWORD *)&v22[16] = v28;
      *(_QWORD *)v32 = 1;
      sub_140AFFC30((__int64)&v42, v29, (__int64)v32, (__int128 *)v22, v30, v31);
      goto LABEL_27;
    }
    v48 = 0;
    v42 = aUpsertMcpServe;
    v43 = 17;
    v44 = aCommand_0;
    v45 = 7;
    v46 = v14;
    v47 = &v52;
    sub_140952570(&v35, &v42);
    LOBYTE(v63) = v35.m256i_i8[0] == -1;
    if ( v35.m256i_i8[0] != -1 )
    {
      *(__m256i *)&v32[8] = v35;
      sub_14172B820(&v42, v26, 360);
      *(_OWORD *)v22 = v27;
      *(_QWORD *)&v22[16] = v28;
      *(_QWORD *)v32 = 1;
      sub_140AFFC30((__int64)&v42, v29, (__int64)v32, (__int128 *)v22, v30, v31);
LABEL_27:
      if ( (_QWORD)v58 )
        sub_140001660(*((_QWORD *)&v58 + 1), v58, 1);
      goto LABEL_29;
    }
    v57 = v35.m256i_i64[3];
    v56 = *(_OWORD *)&v35.m256i_u64[1];
    v48 = 0;
    v42 = aUpsertMcpServe;
    v43 = 17;
    v44 = aArgs;
    v45 = 4;
    v46 = v14;
    v47 = &v52;
    sub_14045AEC0(&v51, &v42);
    LOBYTE(v63) = v51.m256i_i8[0] == -1;
    if ( v51.m256i_i8[0] != -1 )
    {
      *(__m256i *)&v32[8] = v51;
      sub_14172B820(&v42, v26, 360);
      *(_OWORD *)v22 = v27;
      *(_QWORD *)&v22[16] = v28;
      *(_QWORD *)v32 = 1;
      sub_140AFFC30((__int64)&v42, v29, (__int64)v32, (__int128 *)v22, v30, v31);
      goto LABEL_25;
    }
    v39 = v51.m256i_i64[3];
    v38 = *(_OWORD *)&v51.m256i_u64[1];
    v48 = 0;
    v42 = aUpsertMcpServe;
    v43 = 17;
    v44 = aUrl;
    v45 = 3;
    v46 = v14;
    v47 = &v52;
    sub_140952570(&v34, &v42);
    LOBYTE(v63) = v34.m256i_i8[0] == -1;
    if ( v34.m256i_i8[0] == -1 )
    {
      v55 = v34.m256i_i64[3];
      v54 = *(_OWORD *)&v34.m256i_u64[1];
      v48 = 0;
      v42 = aUpsertMcpServe;
      v43 = 17;
      v44 = aHeaders;
      v45 = 7;
      v46 = v14;
      v47 = &v52;
      sub_140A7A010(v49, &v42);
      LOBYTE(v63) = *(_QWORD *)v49 != 0;
      if ( *(_QWORD *)v49 )
      {
        v21 = *(_OWORD *)&v49[32];
        v20 = *(_OWORD *)&v49[16];
        v19 = *(_OWORD *)v49;
        v48 = 0;
        v42 = aUpsertMcpServe;
        v43 = 17;
        v44 = aEnvironment;
        v45 = 11;
        v46 = v14;
        v47 = &v52;
        sub_140A7A010(v32, &v42);
        v60 = *(_QWORD *)v32;
        LOBYTE(v63) = *(_QWORD *)v32 != 0;
        if ( *(_QWORD *)v32 )
        {
          v18 = *(_OWORD *)&v32[32];
          v17 = *(_OWORD *)&v32[16];
          v16 = *(_OWORD *)v32;
          v13 = &v58;
          sub_1409F5070(v22, v3, v5, &v61);
          sub_14172B820(&v42, v26, 400);
          if ( *(_QWORD *)v22 == -1 )
          {
            v64 = 1;
            sub_1401A80B0(v49, &v22[8]);
            *(_OWORD *)&v32[24] = *(_OWORD *)&v49[16];
            *(_OWORD *)&v32[8] = *(_OWORD *)v49;
            *(_QWORD *)v32 = -1;
          }
          else
          {
            sub_14172B820(v32, v22, 336);
          }
          v64 = 0;
          sub_140A94390(&v42, v32);
          goto LABEL_31;
        }
        v23 = *(_OWORD *)&v32[24];
        *(_OWORD *)&v22[8] = *(_OWORD *)&v32[8];
        sub_14172B820(&v42, v26, 360);
        v24 = v27;
        v25 = v28;
        *(_QWORD *)v22 = 1;
        sub_140AFFC30((__int64)&v42, v29, (__int64)v22, &v24, v30, v31);
        v65 = 1;
        sub_14051F720(v49);
        if ( (__int64)v54 > 0 )
          sub_140001660(*((_QWORD *)&v54 + 1), v54, 1);
        v9 = (__int64 *)&v38;
        goto LABEL_24;
      }
      *(_OWORD *)&v32[24] = *(_OWORD *)&v49[24];
      *(_OWORD *)&v32[8] = *(_OWORD *)&v49[8];
      sub_14172B820(&v42, v26, 360);
      *(_OWORD *)v22 = v27;
      *(_QWORD *)&v22[16] = v28;
      *(_QWORD *)v32 = 1;
      sub_140AFFC30((__int64)&v42, v29, (__int64)v32, (__int128 *)v22, v30, v31);
      if ( (__int64)v54 > 0 )
        sub_140001660(*((_QWORD *)&v54 + 1), v54, 1);
    }
    else
    {
      *(__m256i *)&v32[8] = v34;
      sub_14172B820(&v42, v26, 360);
      *(_OWORD *)v22 = v27;
      *(_QWORD *)&v22[16] = v28;
      *(_QWORD *)v32 = 1;
      sub_140AFFC30((__int64)&v42, v29, (__int64)v32, (__int128 *)v22, v30, v31);
    }
    v9 = &v51.m256i_i64[1];
LABEL_24:
    sub_140033330(v9);
LABEL_25:
    if ( (__int64)v56 > 0 )
      sub_140001660(*((_QWORD *)&v56 + 1), v56, 1);
    goto LABEL_27;
  }
  *(__m256i *)&v32[8] = v36;
  sub_14172B820(&v42, a1 + 520, 360);
  *(_OWORD *)v22 = *(_OWORD *)(a1 + 880);
  *(_QWORD *)&v22[16] = *(_QWORD *)(a1 + 896);
  *(_QWORD *)v32 = 1;
  sub_140AFFC30((__int64)&v42, v29, (__int64)v32, (__int128 *)v22, v30, v31);
LABEL_29:
  v6 = v61;
  if ( (_QWORD)v61 )
    sub_140001660(*((_QWORD *)&v61 + 1), v61, 1);
LABEL_31:
  if ( (_QWORD)v52 != -1 )
  {
    v10 = *((_QWORD *)&v52 + 1);
    v60 = v53;
    v63 = 0;
    v50 = *((_QWORD *)&v52 + 1);
    while ( v60 != v63 )
    {
      ++v63;
      v11 = v10 + 96;
      sub_140401FB0(v10, v6, v7, v8, v13);
      v10 = v11;
    }
    if ( (_QWORD)v52 )
      sub_140001660(*((_QWORD *)&v52 + 1), 96 * v52, 8);
  }
  return sub_140043900(v14);
}
