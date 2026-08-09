// Pseudocode for reveal_relay_api_key (EA: 0x14016e1d0, size: 0x56e)
// Module: commands/relay
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 reveal_relay_api_key 的 handler：按入参 providerId 取回该 relay provider 的 API Key 明文返回前端（敏感：凭据明文出进程）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。
// Tauri 命令 reveal_relay_api_key 的 handler：按入参 providerId 取回该 relay provider 的 API Key 明文返回前端（敏感：凭据明文出进程）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。
__int64 __fastcall sub_14016E1D0(__int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // r14
  const char *v4; // rbx
  __int64 v5; // r14
  const char *v6; // r15
  __int64 v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rsi
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v18; // [rsp+20h] [rbp-60h]
  _BYTE v19[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v20; // [rsp+238h] [rbp+1B8h]
  char v21[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v22; // [rsp+3C0h] [rbp+340h]
  int v23; // [rsp+3C8h] [rbp+348h]
  int v24; // [rsp+3CCh] [rbp+34Ch]
  const char *v25; // [rsp+3D0h] [rbp+350h] BYREF
  __int64 v26; // [rsp+3D8h] [rbp+358h]
  const char *v27; // [rsp+3E0h] [rbp+360h] BYREF
  __int64 v28; // [rsp+3E8h] [rbp+368h]
  __int128 v29; // [rsp+3F0h] [rbp+370h]
  __int128 v30; // [rsp+400h] [rbp+380h]
  __int128 v31; // [rsp+410h] [rbp+390h]
  __int128 v32; // [rsp+420h] [rbp+3A0h]
  __int64 v33; // [rsp+430h] [rbp+3B0h]
  _OWORD v34[2]; // [rsp+560h] [rbp+4E0h] BYREF
  __int128 v35; // [rsp+580h] [rbp+500h] BYREF
  __int128 v36; // [rsp+590h] [rbp+510h]
  __int128 v37; // [rsp+5A0h] [rbp+520h] BYREF
  __int128 v38; // [rsp+5B0h] [rbp+530h]
  __int128 v39; // [rsp+5C0h] [rbp+540h]
  __int128 v40; // [rsp+5D0h] [rbp+550h]
  __int64 v41; // [rsp+5E0h] [rbp+560h]
  __int64 v42; // [rsp+5F0h] [rbp+570h] BYREF
  __int128 v43; // [rsp+5F8h] [rbp+578h]
  _QWORD v44[11]; // [rsp+608h] [rbp+588h]
  __int128 v45; // [rsp+660h] [rbp+5E0h] BYREF
  const char *v46; // [rsp+670h] [rbp+5F0h]
  const char *v47; // [rsp+680h] [rbp+600h]
  __int64 v48; // [rsp+688h] [rbp+608h]
  char v49; // [rsp+696h] [rbp+616h]
  char v50; // [rsp+697h] [rbp+617h]
  __int64 v51; // [rsp+698h] [rbp+618h]

  v51 = -2;
  sub_14172B820(v19, a1, 520);
  v2 = a1 + 520;
  sub_14172B820(v21, a1 + 520, 400);
  v46 = *(const char **)(a1 + 936);
  v45 = *(_OWORD *)(a1 + 920);
  *(_QWORD *)&v30 = 0;
  v25 = aRevealRelayApi;
  v26 = 20;
  v27 = aManager_0;
  v28 = 7;
  *(_QWORD *)&v29 = v19;
  *((_QWORD *)&v29 + 1) = &v45;
  v50 = 1;
  v3 = sub_14002B2A0((_QWORD *)(v20 + 16));
  if ( !v3 )
  {
    v50 = 1;
    sub_14172C620((__int64)v34, (__int64)&v25, (__int64)&v27);
    if ( LOBYTE(v34[0]) != 0xFF )
    {
      *(_OWORD *)v44 = v34[1];
      v43 = v34[0];
      sub_14172B820(&v25, a1 + 520, 360);
      v37 = *(_OWORD *)(a1 + 880);
      *(_QWORD *)&v38 = *(_QWORD *)(a1 + 896);
      v42 = 1;
      v50 = 0;
      sub_140AFFC30((__int64)&v25, v22, (__int64)&v42, &v37, v23, v24);
      goto LABEL_20;
    }
    v3 = *((_QWORD *)&v34[0] + 1);
  }
  *(_QWORD *)&v30 = 0;
  v25 = aRevealRelayApi;
  v26 = 20;
  v27 = aProviderid;
  v28 = 10;
  *(_QWORD *)&v29 = v19;
  *((_QWORD *)&v29 + 1) = &v45;
  v50 = 1;
  sub_140955980(&v35, &v25);
  if ( (_BYTE)v35 == 0xFF )
  {
    v48 = *((_QWORD *)&v35 + 1);
    v47 = (const char *)v36;
    sub_1409ACBD0(&v42, v3, v36, *((_QWORD *)&v36 + 1));
    sub_1404D02D0(&v25, &v42);
    v4 = v25;
    v5 = v26;
    v6 = v27;
    v7 = v28;
    v37 = v29;
    v38 = v30;
    v39 = v31;
    v40 = v32;
    v41 = v33;
    if ( v48 )
      sub_140001660(v47, v48, 1);
    sub_14172B820(&v25, v2, 400);
    if ( v4 != (const char *)-1LL )
    {
      v42 = (__int64)v4;
      *(_QWORD *)&v43 = v5;
      *((_QWORD *)&v43 + 1) = v6;
      v44[0] = v7;
      *(_OWORD *)&v44[1] = v37;
      *(_OWORD *)&v44[3] = v38;
      *(_OWORD *)&v44[5] = v39;
      *(_OWORD *)&v44[7] = v40;
      v44[9] = v41;
LABEL_19:
      v49 = 0;
      sub_140A956B0(&v25, &v42);
      goto LABEL_20;
    }
    if ( v7 < 0 )
    {
      v12 = 0;
      goto LABEL_13;
    }
    if ( v7 )
    {
      nullsub_1(v9, v8, v10, v11, v18);
      v12 = 1;
      v13 = sub_140001650(v7, 1);
      if ( !v13 )
      {
LABEL_13:
        v47 = v6;
        v48 = v5;
        sub_14176E54B(v12, v7);
      }
      v14 = v13;
      sub_14172B820(v13, v6, v7);
      if ( !v5 )
      {
LABEL_18:
        LOBYTE(v43) = 3;
        *((_QWORD *)&v43 + 1) = v7;
        v44[0] = v14;
        v44[1] = v7;
        v42 = -1;
        goto LABEL_19;
      }
    }
    else
    {
      v14 = 1;
      if ( !v5 )
        goto LABEL_18;
    }
    sub_140001660(v6, v5, 1);
    goto LABEL_18;
  }
  *(_OWORD *)v44 = v36;
  v43 = v35;
  sub_14172B820(&v25, a1 + 520, 360);
  v37 = *(_OWORD *)(a1 + 880);
  *(_QWORD *)&v38 = *(_QWORD *)(a1 + 896);
  v42 = 1;
  v50 = 0;
  sub_140AFFC30((__int64)&v25, v22, (__int64)&v42, &v37, v23, v24);
LABEL_20:
  if ( (_QWORD)v45 != -1 )
  {
    v15 = *((_QWORD *)&v45 + 1);
    v47 = v46;
    v48 = 0;
    v44[10] = *((_QWORD *)&v45 + 1);
    while ( v47 != (const char *)v48 )
    {
      ++v48;
      v16 = v15 + 96;
      sub_140401FB0();
      v15 = v16;
    }
    if ( (_QWORD)v45 )
      sub_140001660(*((_QWORD *)&v45 + 1), 96 * v45, 8);
  }
  return sub_140043900(v19);
}
