// Pseudocode for set_api_proxy_config (EA: 0x14016cab0, size: 0x5fd)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 set_api_proxy_config 的 handler：按入参 mode/url 设置 API 代理配置并持久化（写副作用：改代理设置）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族（detect/test_api_proxy_config 锚定 src\commands\system.rs）推断。
// Tauri 命令 set_api_proxy_config 的 handler：按入参 mode/url 设置 API 代理配置并持久化（写副作用：改代理设置）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族（detect/test_api_proxy_config 锚定 src\commands\system.rs）推断。
__int64 __fastcall set_api_proxy_config(__int64 a1)
{
  unsigned int v1; // r15d
  __int64 v3; // r14
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r14
  __int128 v9; // rdi
  __int64 v10; // r15
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v16; // [rsp+20h] [rbp-60h]
  _BYTE v17[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v18; // [rsp+238h] [rbp+1B8h]
  _BYTE v19[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v20; // [rsp+3C0h] [rbp+340h]
  int v21; // [rsp+3C8h] [rbp+348h]
  int v22; // [rsp+3CCh] [rbp+34Ch]
  const char *v23; // [rsp+3D0h] [rbp+350h] BYREF
  __int64 v24; // [rsp+3D8h] [rbp+358h]
  const char *v25; // [rsp+3E0h] [rbp+360h] BYREF
  __int64 v26; // [rsp+3E8h] [rbp+368h]
  _BYTE *v27; // [rsp+3F0h] [rbp+370h]
  __int128 *v28; // [rsp+3F8h] [rbp+378h]
  __int64 v29; // [rsp+400h] [rbp+380h]
  __int128 v30; // [rsp+560h] [rbp+4E0h] BYREF
  __int64 v31; // [rsp+570h] [rbp+4F0h]
  _OWORD v32[2]; // [rsp+580h] [rbp+500h] BYREF
  _OWORD v33[2]; // [rsp+5A0h] [rbp+520h] BYREF
  __m256i v34; // [rsp+5C0h] [rbp+540h] BYREF
  __int128 v35; // [rsp+5E0h] [rbp+560h] BYREF
  __int128 v36; // [rsp+5F0h] [rbp+570h]
  __int128 v37; // [rsp+600h] [rbp+580h]
  __int128 v38; // [rsp+610h] [rbp+590h]
  __int128 v39; // [rsp+620h] [rbp+5A0h]
  __int128 v40; // [rsp+630h] [rbp+5B0h]
  __int128 v41; // [rsp+640h] [rbp+5C0h]
  _BYTE v42[48]; // [rsp+650h] [rbp+5D0h] BYREF
  __int128 v43; // [rsp+680h] [rbp+600h]
  __int128 v44; // [rsp+690h] [rbp+610h]
  __int128 v45; // [rsp+6A0h] [rbp+620h]
  __int128 v46; // [rsp+6B0h] [rbp+630h]
  __int64 v47; // [rsp+6C8h] [rbp+648h]
  __int128 v48; // [rsp+6D0h] [rbp+650h] BYREF
  __int64 v49; // [rsp+6E0h] [rbp+660h]
  __int64 v50; // [rsp+6E8h] [rbp+668h]
  __int64 v51; // [rsp+6F0h] [rbp+670h]
  char v52; // [rsp+6FEh] [rbp+67Eh]
  char v53; // [rsp+6FFh] [rbp+67Fh]
  __int64 v54; // [rsp+700h] [rbp+680h]

  v54 = -2;
  sub_14172B820(v17, a1, 520);
  sub_14172B820(v19, a1 + 520, 400);
  v49 = *(_QWORD *)(a1 + 936);
  v48 = *(_OWORD *)(a1 + 920);
  v29 = 0;
  v23 = aSetApiProxyCon;
  v24 = 20;
  v25 = aRepo;
  v26 = 4;
  v27 = v17;
  v28 = &v48;
  v53 = 1;
  v3 = sub_140029DD0((volatile void *)(v18 + 16));
  if ( !v3 )
  {
    v53 = 1;
    sub_14172C620((__int64)v33, (__int64)&v23, (__int64)&v25);
    if ( LOBYTE(v33[0]) != 0xFF )
    {
      *(_OWORD *)&v42[24] = v33[1];
      *(_OWORD *)&v42[8] = v33[0];
      sub_14172B820(&v23, a1 + 520, 360);
      v35 = *(_OWORD *)(a1 + 880);
      *(_QWORD *)&v36 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)v42 = 1;
      v53 = 0;
      sub_140AFFC30((__int64)&v23, v20, (__int64)v42, &v35, v21, v22);
      goto LABEL_22;
    }
    v3 = *((_QWORD *)&v33[0] + 1);
  }
  v29 = 0;
  v23 = aSetApiProxyCon;
  v24 = 20;
  v25 = aMode;
  v26 = 4;
  v27 = v17;
  v28 = &v48;
  v53 = 1;
  sub_1404F6500(v32, &v23);
  if ( LOBYTE(v32[0]) == 0xFF )
  {
    LOBYTE(v1) = BYTE1(v32[0]);
    v29 = 0;
    v23 = aSetApiProxyCon;
    v24 = 20;
    v25 = aUrl;
    v26 = 3;
    v27 = v17;
    v28 = &v48;
    v53 = 1;
    sub_140952570(&v34, &v23);
    if ( v34.m256i_i8[0] != -1 )
    {
      *(__m256i *)&v42[8] = v34;
      sub_14172B820(&v23, a1 + 520, 360);
      v35 = *(_OWORD *)(a1 + 880);
      *(_QWORD *)&v36 = *(_QWORD *)(a1 + 896);
      *(_QWORD *)v42 = 1;
      v53 = 0;
      sub_140AFFC30((__int64)&v23, v20, (__int64)v42, &v35, v21, v22);
      goto LABEL_22;
    }
    v31 = v34.m256i_i64[3];
    v30 = *(_OWORD *)&v34.m256i_u64[1];
    v53 = 1;
    sub_140B25FD0(&v35, v3, v1, &v30);
    sub_14172B820(&v23, a1 + 520, 400);
    if ( (_QWORD)v35 != -1 )
    {
      v46 = v41;
      v45 = v40;
      v44 = v39;
      v43 = v38;
      *(_OWORD *)&v42[32] = v37;
      *(_OWORD *)&v42[16] = v36;
      *(_OWORD *)v42 = v35;
LABEL_21:
      v52 = 0;
      sub_140A92930(&v23, v42);
      goto LABEL_22;
    }
    v8 = *((_QWORD *)&v35 + 1);
    *((_QWORD *)&v9 + 1) = *((_QWORD *)&v36 + 1);
    v10 = v36;
    if ( v36 < 0 )
    {
      v11 = 0;
      goto LABEL_13;
    }
    if ( *((_QWORD *)&v36 + 1) )
    {
      nullsub_1(v5, v4, v6, v7, v16);
      v11 = 1;
      v12 = sub_140001650(*((_QWORD *)&v9 + 1), 1);
      if ( !v12 )
      {
LABEL_13:
        v50 = v10;
        v51 = v8;
        sub_14176E54B(v11, *((_QWORD *)&v9 + 1));
      }
      *(_QWORD *)&v9 = v12;
      sub_14172B820(v12, v10, *((_QWORD *)&v9 + 1));
    }
    else
    {
      *(_QWORD *)&v9 = 1;
    }
    if ( v8 )
      sub_140001660(v10, v8, 1);
    v42[8] = 3;
    *(_QWORD *)&v42[16] = *((_QWORD *)&v9 + 1);
    *(_OWORD *)&v42[24] = v9;
    *(_QWORD *)v42 = -1;
    goto LABEL_21;
  }
  *(_OWORD *)&v42[24] = v32[1];
  *(_OWORD *)&v42[8] = v32[0];
  sub_14172B820(&v23, a1 + 520, 360);
  v35 = *(_OWORD *)(a1 + 880);
  *(_QWORD *)&v36 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)v42 = 1;
  v53 = 0;
  sub_140AFFC30((__int64)&v23, v20, (__int64)v42, &v35, v21, v22);
LABEL_22:
  if ( (_QWORD)v48 != -1 )
  {
    v13 = *((_QWORD *)&v48 + 1);
    v50 = v49;
    v51 = 0;
    v47 = *((_QWORD *)&v48 + 1);
    while ( v50 != v51 )
    {
      ++v51;
      v14 = v13 + 96;
      sub_140401FB0();
      v13 = v14;
    }
    if ( (_QWORD)v48 )
      sub_140001660(*((_QWORD *)&v48 + 1), 96 * v48, 8);
  }
  return sub_140043900(v17);
}
