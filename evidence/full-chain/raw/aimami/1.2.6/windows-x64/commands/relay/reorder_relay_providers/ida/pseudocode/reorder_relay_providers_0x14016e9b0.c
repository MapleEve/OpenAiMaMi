// Pseudocode for reorder_relay_providers (EA: 0x14016e9b0, size: 0x4be)
// Module: commands/relay
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 reorder_relay_providers 的 handler：按入参 orderedIds 重排 relay provider 优先级顺序并持久化（写副作用：改持久化顺序）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。
// Tauri 命令 reorder_relay_providers 的 handler：按入参 orderedIds 重排 relay provider 优先级顺序并持久化（写副作用：改持久化顺序）。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。
__int64 __fastcall sub_14016E9B0(__int64 a1)
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
  __int64 v28; // [rsp+6F0h] [rbp+670h] BYREF
  __int64 v29; // [rsp+6F8h] [rbp+678h]
  const char *v30; // [rsp+700h] [rbp+680h] BYREF
  __int64 v31; // [rsp+708h] [rbp+688h]
  const char *v32; // [rsp+710h] [rbp+690h]
  __int128 *v33; // [rsp+718h] [rbp+698h]
  __int64 v34; // [rsp+720h] [rbp+6A0h]
  __int128 v35; // [rsp+880h] [rbp+800h] BYREF
  __int64 v36; // [rsp+890h] [rbp+810h]
  __m256i v37; // [rsp+898h] [rbp+818h] BYREF
  __m256i v38; // [rsp+8B8h] [rbp+838h] BYREF
  __int64 v39; // [rsp+8D8h] [rbp+858h]
  __int128 v40; // [rsp+8E0h] [rbp+860h] BYREF
  __int64 v41; // [rsp+8F0h] [rbp+870h]
  __int64 v42; // [rsp+900h] [rbp+880h]
  __int64 v43; // [rsp+908h] [rbp+888h]
  char v44; // [rsp+916h] [rbp+896h]
  char v45; // [rsp+917h] [rbp+897h]
  __int64 v46; // [rsp+918h] [rbp+898h]

  v46 = -2;
  sub_14172B820(v17, a1, 520);
  sub_14172B820(v19, a1 + 520, 400);
  v41 = *(_QWORD *)(a1 + 936);
  v40 = *(_OWORD *)(a1 + 920);
  v34 = 0;
  v28 = (__int64)aReorderRelayPr;
  v29 = 23;
  v30 = aManager_0;
  v31 = 7;
  v32 = v17;
  v33 = &v40;
  v45 = 1;
  v2 = sub_14002B2A0((_QWORD *)(v18 + 16));
  if ( !v2 )
  {
    v45 = 1;
    sub_14172C620((__int64)&v37, (__int64)&v28, (__int64)&v30);
    if ( v37.m256i_i8[0] != -1 )
    {
      v24 = v37;
      sub_14172B820(&v28, a1 + 520, 360);
      v25 = *(_OWORD *)(a1 + 880);
      v26 = *(_QWORD *)(a1 + 896);
      v23 = 1;
      v45 = 0;
      sub_140AFFC30((__int64)&v28, v20, (__int64)&v23, &v25, v21, v22);
      goto LABEL_18;
    }
    v2 = v37.m256i_i64[1];
  }
  v34 = 0;
  v28 = (__int64)aReorderRelayPr;
  v29 = 23;
  v30 = aOrderedids;
  v31 = 10;
  v32 = v17;
  v33 = &v40;
  v45 = 1;
  sub_14045AEC0(&v38, &v28);
  if ( v38.m256i_i8[0] == -1 )
  {
    v36 = v38.m256i_i64[3];
    v35 = *(_OWORD *)&v38.m256i_u64[1];
    v45 = 1;
    sub_1405474B0(&v25, v2, &v35);
    sub_14172B820(&v23, a1 + 520, 400);
    if ( (_QWORD)v25 != -1 )
    {
      sub_14172B820(&v28, &v25, 400);
LABEL_17:
      v44 = 0;
      sub_140A96460(&v23, &v28);
      goto LABEL_18;
    }
    v7 = *((_QWORD *)&v25 + 1);
    v8 = v26;
    v9 = (const char *)v27;
    if ( v27 < 0 )
    {
      v10 = 0;
      goto LABEL_11;
    }
    if ( v27 )
    {
      nullsub_1(v4, v3, v5, v6, v16);
      v10 = 1;
      v11 = sub_140001650(v9, 1);
      if ( !v11 )
      {
LABEL_11:
        v42 = v8;
        v43 = v7;
        sub_14176E54B(v10, v9);
      }
      v12 = v11;
      sub_14172B820(v11, v8, v9);
      if ( !v7 )
      {
LABEL_16:
        LOBYTE(v29) = 3;
        v30 = v9;
        v31 = v12;
        v32 = v9;
        v28 = -1;
        goto LABEL_17;
      }
    }
    else
    {
      v12 = 1;
      if ( !*((_QWORD *)&v25 + 1) )
        goto LABEL_16;
    }
    sub_140001660(v8, v7, 1);
    goto LABEL_16;
  }
  v24 = v38;
  sub_14172B820(&v28, a1 + 520, 360);
  v25 = *(_OWORD *)(a1 + 880);
  v26 = *(_QWORD *)(a1 + 896);
  v23 = 1;
  v45 = 0;
  sub_140AFFC30((__int64)&v28, v20, (__int64)&v23, &v25, v21, v22);
LABEL_18:
  if ( (_QWORD)v40 != -1 )
  {
    v13 = *((_QWORD *)&v40 + 1);
    v42 = v41;
    v43 = 0;
    v39 = *((_QWORD *)&v40 + 1);
    while ( v42 != v43 )
    {
      ++v43;
      v14 = v13 + 96;
      sub_140401FB0();
      v13 = v14;
    }
    if ( (_QWORD)v40 )
      sub_140001660(*((_QWORD *)&v40 + 1), 96 * v40, 8);
  }
  return sub_140043900(v17);
}
