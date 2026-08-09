// Pseudocode for set_relay_provider_network (EA: 0x14016f080, size: 0x5cb)
// Module: commands/relay
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 set_relay_provider_network 的 handler：按入参 providerId + network 设置指定 relay provider 的网络配置并持久化（写副作用）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。
// Tauri 命令 set_relay_provider_network 的 handler：按入参 providerId + network 设置指定 relay provider 的网络配置并持久化（写副作用）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。
__int64 __fastcall sub_14016F080(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r14
  __int64 v8; // r15
  const char *v9; // rsi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v16; // [rsp+20h] [rbp-60h]
  _BYTE v17[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v18; // [rsp+238h] [rbp+1B8h]
  char v19[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v20; // [rsp+3C0h] [rbp+340h]
  int v21; // [rsp+3C8h] [rbp+348h]
  int v22; // [rsp+3CCh] [rbp+34Ch]
  __int64 v23; // [rsp+3D0h] [rbp+350h] BYREF
  __m256i v24; // [rsp+3D8h] [rbp+358h]
  __int128 v25; // [rsp+560h] [rbp+4E0h] BYREF
  __int64 v26; // [rsp+570h] [rbp+4F0h]
  __int64 v27; // [rsp+578h] [rbp+4F8h]
  __int64 v28; // [rsp+6F8h] [rbp+678h] BYREF
  __int64 v29; // [rsp+700h] [rbp+680h]
  const char *v30; // [rsp+708h] [rbp+688h] BYREF
  __int64 v31; // [rsp+710h] [rbp+690h]
  const char *v32; // [rsp+718h] [rbp+698h]
  __int128 *v33; // [rsp+720h] [rbp+6A0h]
  __int64 v34; // [rsp+728h] [rbp+6A8h]
  __m256i v35; // [rsp+888h] [rbp+808h] BYREF
  __m256i v36; // [rsp+8A8h] [rbp+828h] BYREF
  __m256i v37; // [rsp+8C8h] [rbp+848h] BYREF
  __int64 v38; // [rsp+8E8h] [rbp+868h]
  __int128 v39; // [rsp+8F0h] [rbp+870h] BYREF
  __int64 v40; // [rsp+900h] [rbp+880h]
  __int128 v41; // [rsp+910h] [rbp+890h] BYREF
  __int64 v42; // [rsp+920h] [rbp+8A0h]
  __int64 v43; // [rsp+930h] [rbp+8B0h]
  __int64 v44; // [rsp+938h] [rbp+8B8h]
  char v45; // [rsp+946h] [rbp+8C6h]
  char v46; // [rsp+947h] [rbp+8C7h]
  __int64 v47; // [rsp+948h] [rbp+8C8h]

  v47 = -2;
  sub_14172B820(v17, a1, 520);
  sub_14172B820(v19, a1 + 520, 400);
  v42 = *(_QWORD *)(a1 + 936);
  v41 = *(_OWORD *)(a1 + 920);
  v34 = 0;
  v28 = (__int64)aSetRelayProvid;
  v29 = 26;
  v30 = aManager_0;
  v31 = 7;
  v32 = v17;
  v33 = &v41;
  v46 = 1;
  v2 = sub_14002B2A0((_QWORD *)(v18 + 16));
  if ( !v2 )
  {
    v46 = 1;
    sub_14172C620((__int64)&v36, (__int64)&v28, (__int64)&v30);
    if ( v36.m256i_i8[0] != -1 )
    {
      v24 = v36;
      sub_14172B820(&v28, a1 + 520, 360);
      v25 = *(_OWORD *)(a1 + 880);
      v26 = *(_QWORD *)(a1 + 896);
      v23 = 1;
      v46 = 0;
      sub_140AFFC30((__int64)&v28, v20, (__int64)&v23, &v25, v21, v22);
      goto LABEL_23;
    }
    v2 = v36.m256i_i64[1];
  }
  v34 = 0;
  v28 = (__int64)aSetRelayProvid;
  v29 = 26;
  v30 = aProviderid;
  v31 = 10;
  v32 = v17;
  v33 = &v41;
  v46 = 1;
  sub_140955980(&v37, &v28);
  if ( v37.m256i_i8[0] != -1 )
  {
    v24 = v37;
    sub_14172B820(&v28, a1 + 520, 360);
    v25 = *(_OWORD *)(a1 + 880);
    v26 = *(_QWORD *)(a1 + 896);
    v23 = 1;
    v46 = 0;
    sub_140AFFC30((__int64)&v28, v20, (__int64)&v23, &v25, v21, v22);
    goto LABEL_23;
  }
  v40 = v37.m256i_i64[3];
  v39 = *(_OWORD *)&v37.m256i_u64[1];
  v34 = 0;
  v28 = (__int64)aSetRelayProvid;
  v29 = 26;
  v30 = aNetwork;
  v31 = 7;
  v32 = v17;
  v33 = &v41;
  sub_1404F6BB0(&v35, &v28);
  LOBYTE(v44) = v35.m256i_i8[0];
  if ( v35.m256i_i8[0] == -1 )
  {
    sub_1405479A0(&v25, v2, &v39, v35.m256i_u8[1]);
    sub_14172B820(&v23, a1 + 520, 400);
    if ( (_QWORD)v25 != -1 )
    {
      sub_14172B820(&v28, &v25, 400);
LABEL_22:
      v45 = 0;
      sub_140A96460(&v23, &v28);
      goto LABEL_23;
    }
    v7 = *((_QWORD *)&v25 + 1);
    v8 = v26;
    v9 = (const char *)v27;
    if ( v27 < 0 )
    {
      v10 = 0;
      goto LABEL_14;
    }
    if ( v27 )
    {
      nullsub_1(v4, v3, v5, v6, v16);
      v10 = 1;
      v11 = sub_140001650(v9, 1);
      if ( !v11 )
      {
LABEL_14:
        v43 = v8;
        v44 = v7;
        sub_14176E54B(v10, v9);
      }
      v12 = v11;
      sub_14172B820(v11, v8, v9);
    }
    else
    {
      v12 = 1;
    }
    if ( v7 )
      sub_140001660(v8, v7, 1);
    LOBYTE(v29) = 3;
    v30 = v9;
    v31 = v12;
    v32 = v9;
    v28 = -1;
    goto LABEL_22;
  }
  v24 = v35;
  sub_14172B820(&v28, a1 + 520, 360);
  v25 = *(_OWORD *)(a1 + 880);
  v26 = *(_QWORD *)(a1 + 896);
  v23 = 1;
  sub_140AFFC30((__int64)&v28, v20, (__int64)&v23, &v25, v21, v22);
  if ( (_QWORD)v39 )
    sub_140001660(*((_QWORD *)&v39 + 1), v39, 1);
LABEL_23:
  if ( (_QWORD)v41 != -1 )
  {
    v13 = *((_QWORD *)&v41 + 1);
    v43 = v42;
    v44 = 0;
    v38 = *((_QWORD *)&v41 + 1);
    while ( v43 != v44 )
    {
      ++v44;
      v14 = v13 + 96;
      sub_140401FB0();
      v13 = v14;
    }
    if ( (_QWORD)v41 )
      sub_140001660(*((_QWORD *)&v41 + 1), 96 * v41, 8);
  }
  return sub_140043900(v17);
}
