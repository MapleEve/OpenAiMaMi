// Pseudocode for delete_relay_provider (EA: 0x140170a40, size: 0x60b)
// Module: commands/relay
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 delete_relay_provider 的 handler：按入参 providerId 删除 relay provider 配置（破坏性副作用：移除持久化 provider 记录），引用 app(AppHandle) 与 relay manager。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。
// Tauri 命令 delete_relay_provider 的 handler：按入参 providerId 删除 relay provider 配置（破坏性副作用：移除持久化 provider 记录），引用 app(AppHandle) 与 relay manager。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。
__int64 __fastcall sub_140170A40(__int64 a1)
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
  __int128 v33; // [rsp+690h] [rbp+610h] BYREF
  __int64 v34; // [rsp+6A0h] [rbp+620h]
  __int128 v35; // [rsp+6B0h] [rbp+630h] BYREF
  __int64 v36; // [rsp+6C0h] [rbp+640h]
  _OWORD v37[2]; // [rsp+6C8h] [rbp+648h] BYREF
  __int64 v38; // [rsp+6E8h] [rbp+668h]
  _BYTE v39[48]; // [rsp+6F0h] [rbp+670h] BYREF
  __int128 v40; // [rsp+720h] [rbp+6A0h]
  __int128 v41; // [rsp+730h] [rbp+6B0h]
  __m256i v42; // [rsp+740h] [rbp+6C0h] BYREF
  __int128 v43; // [rsp+760h] [rbp+6E0h] BYREF
  __int64 v44; // [rsp+770h] [rbp+6F0h]
  __int64 v45; // [rsp+780h] [rbp+700h]
  __int64 v46; // [rsp+788h] [rbp+708h]
  char v47; // [rsp+795h] [rbp+715h]
  char v48; // [rsp+796h] [rbp+716h]
  char v49; // [rsp+797h] [rbp+717h]
  __int64 v50; // [rsp+798h] [rbp+718h]

  v50 = -2;
  sub_14172B820(v16, a1, 520);
  sub_14172B820(v18, a1 + 520, 400);
  v44 = *(_QWORD *)(a1 + 936);
  v43 = *(_OWORD *)(a1 + 920);
  v29 = 0;
  v23 = aDeleteRelayPro;
  v24 = 21;
  v25 = aApp;
  v26 = 3;
  v27 = v16;
  v28 = &v43;
  v49 = 1;
  sub_1401A9630((__int64)v30, (__int64)&v23);
  if ( *(_DWORD *)v30 == -1 )
  {
    *(_OWORD *)&v39[24] = *(_OWORD *)&v30[24];
    *(_OWORD *)&v39[8] = *(_OWORD *)&v30[8];
    sub_14172B820(&v23, a1 + 520, 360);
    *(_OWORD *)v42.m256i_i8 = *(_OWORD *)(a1 + 880);
    v42.m256i_i64[2] = *(_QWORD *)(a1 + 896);
    *(_QWORD *)v39 = 1;
    v49 = 0;
    sub_140AFFC30((__int64)&v23, v19, (__int64)v39, (__int128 *)v42.m256i_i8, v20, v21);
    goto LABEL_22;
  }
  sub_14172B820(v22, v30, 152);
  v29 = 0;
  v23 = aDeleteRelayPro;
  v24 = 21;
  v25 = aManager_0;
  v26 = 7;
  v27 = v16;
  v28 = &v43;
  v2 = sub_14002B2A0((_QWORD *)(v17 + 16));
  if ( !v2 )
  {
    sub_14172C620((__int64)v37, (__int64)&v23, (__int64)&v25);
    if ( LOBYTE(v37[0]) != 0xFF )
    {
      *(_OWORD *)&v39[24] = v37[1];
      *(_OWORD *)&v39[8] = v37[0];
      sub_14172B820(&v23, a1 + 520, 360);
      *(_OWORD *)v42.m256i_i8 = *(_OWORD *)(a1 + 880);
      v42.m256i_i64[2] = *(_QWORD *)(a1 + 896);
      *(_QWORD *)v39 = 1;
      v48 = 0;
      sub_140AFFC30((__int64)&v23, v19, (__int64)v39, (__int128 *)v42.m256i_i8, v20, v21);
      v49 = 0;
      sub_1400437E0(v22);
      goto LABEL_22;
    }
    v2 = *((_QWORD *)&v37[0] + 1);
  }
  v29 = 0;
  v23 = aDeleteRelayPro;
  v24 = 21;
  v25 = aProviderid;
  v26 = 10;
  v27 = v16;
  v28 = &v43;
  v48 = 1;
  sub_140955980(&v42, &v23);
  LOBYTE(v46) = v42.m256i_i8[0];
  if ( v42.m256i_i8[0] == -1 )
  {
    v36 = v42.m256i_i64[3];
    v35 = *(_OWORD *)&v42.m256i_u64[1];
    sub_1405453C0(v39, v22, v2, &v35);
    sub_14172B820(&v23, a1 + 520, 400);
    if ( *(_QWORD *)v39 != -1 )
    {
      v32 = v41;
      v31 = v40;
      *(_OWORD *)&v30[32] = *(_OWORD *)&v39[32];
      *(_OWORD *)&v30[16] = *(_OWORD *)&v39[16];
      *(_OWORD *)v30 = *(_OWORD *)v39;
LABEL_21:
      v47 = 0;
      sub_140A97B10(&v23, v30);
      goto LABEL_22;
    }
    v7 = *(_QWORD *)&v39[8];
    *((_QWORD *)&v8 + 1) = *(_QWORD *)&v39[24];
    v9 = *(_QWORD *)&v39[16];
    if ( *(__int64 *)&v39[24] < 0 )
    {
      v10 = 0;
      goto LABEL_13;
    }
    if ( *(_QWORD *)&v39[24] )
    {
      nullsub_1(v4, v3, v5, v6, v15);
      v10 = 1;
      v11 = sub_140001650(*((_QWORD *)&v8 + 1), 1);
      if ( !v11 )
      {
LABEL_13:
        v45 = v9;
        v46 = v7;
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
  *(__m256i *)&v39[8] = v42;
  sub_14172B820(&v23, a1 + 520, 360);
  v33 = *(_OWORD *)(a1 + 880);
  v34 = *(_QWORD *)(a1 + 896);
  *(_QWORD *)v39 = 1;
  sub_140AFFC30((__int64)&v23, v19, (__int64)v39, &v33, v20, v21);
  v49 = 0;
  sub_1400437E0(v22);
LABEL_22:
  if ( (_QWORD)v43 != -1 )
  {
    v12 = *((_QWORD *)&v43 + 1);
    v45 = v44;
    v46 = 0;
    v38 = *((_QWORD *)&v43 + 1);
    while ( v45 != v46 )
    {
      ++v46;
      v13 = v12 + 96;
      sub_140401FB0();
      v12 = v13;
    }
    if ( (_QWORD)v43 )
      sub_140001660(*((_QWORD *)&v43 + 1), 96 * v43, 8);
  }
  return sub_140043900(v16);
}
