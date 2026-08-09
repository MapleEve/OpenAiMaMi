// Pseudocode for upsert_relay_provider (EA: 0x140171350, size: 0x5ee)
// Module: commands/relay
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 upsert_relay_provider 的 handler：按入参 input（provider 配置）新增或更新 relay provider（写副作用：改持久化配置），引用 app(AppHandle) 与 relay manager。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。
// Tauri 命令 upsert_relay_provider 的 handler：按入参 input（provider 配置）新增或更新 relay provider（写副作用：改持久化配置），引用 app(AppHandle) 与 relay manager。归属：命令名串精确 xref 唯一归属（live 复验）；模块按命令族推断 src\commands\relay.rs。
__int64 __fastcall upsert_relay_provider(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // r14
  __int64 v8; // r15
  __int128 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v15; // [rsp+20h] [rbp-60h]
  _BYTE v16[176]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v17[512]; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v18; // [rsp+2E8h] [rbp+268h]
  char v19[384]; // [rsp+2F0h] [rbp+270h] BYREF
  __int64 v20; // [rsp+470h] [rbp+3F0h]
  int v21; // [rsp+478h] [rbp+3F8h]
  int v22; // [rsp+47Ch] [rbp+3FCh]
  int v23; // [rsp+480h] [rbp+400h] BYREF
  __int128 v24; // [rsp+488h] [rbp+408h]
  __int128 v25; // [rsp+498h] [rbp+418h]
  _BYTE v26[152]; // [rsp+518h] [rbp+498h] BYREF
  _BYTE v27[24]; // [rsp+5B0h] [rbp+530h] BYREF
  __int128 v28; // [rsp+5C8h] [rbp+548h]
  __int64 v29; // [rsp+6E8h] [rbp+668h] BYREF
  __int128 v30; // [rsp+6F0h] [rbp+670h]
  __int128 v31; // [rsp+700h] [rbp+680h]
  const char *v32; // [rsp+820h] [rbp+7A0h] BYREF
  __int64 v33; // [rsp+828h] [rbp+7A8h]
  const char *v34; // [rsp+830h] [rbp+7B0h] BYREF
  __int64 v35; // [rsp+838h] [rbp+7B8h]
  _BYTE *v36; // [rsp+840h] [rbp+7C0h]
  __int128 *v37; // [rsp+848h] [rbp+7C8h]
  __int64 v38; // [rsp+850h] [rbp+7D0h]
  __int128 v39; // [rsp+9B0h] [rbp+930h] BYREF
  __int64 v40; // [rsp+9C0h] [rbp+940h]
  _OWORD v41[2]; // [rsp+9C8h] [rbp+948h] BYREF
  __int64 v42; // [rsp+9E8h] [rbp+968h]
  __int128 v43; // [rsp+9F0h] [rbp+970h] BYREF
  __int64 v44; // [rsp+A00h] [rbp+980h]
  __int64 v45; // [rsp+A10h] [rbp+990h]
  __int64 v46; // [rsp+A18h] [rbp+998h]
  char v47; // [rsp+A25h] [rbp+9A5h]
  char v48; // [rsp+A26h] [rbp+9A6h]
  char v49; // [rsp+A27h] [rbp+9A7h]
  __int64 v50; // [rsp+A28h] [rbp+9A8h]

  v50 = -2;
  sub_14172B820(v17, a1, 520);
  sub_14172B820(v19, a1 + 520, 400);
  v44 = *(_QWORD *)(a1 + 936);
  v43 = *(_OWORD *)(a1 + 920);
  v38 = 0;
  v32 = aUpsertRelayPro;
  v33 = 21;
  v34 = aApp;
  v35 = 3;
  v36 = v17;
  v37 = &v43;
  v49 = 1;
  sub_1401A9630((__int64)&v23, (__int64)&v32);
  if ( v23 == -1 )
  {
    v31 = v25;
    v30 = v24;
    sub_14172B820(&v32, a1 + 520, 360);
    *(_OWORD *)v27 = *(_OWORD *)(a1 + 880);
    *(_QWORD *)&v27[16] = *(_QWORD *)(a1 + 896);
    v29 = 1;
    v49 = 0;
    sub_140AFFC30((__int64)&v32, v20, (__int64)&v29, (__int128 *)v27, v21, v22);
  }
  else
  {
    sub_14172B820(v26, &v23, 152);
    v38 = 0;
    v32 = aUpsertRelayPro;
    v33 = 21;
    v34 = aManager_0;
    v35 = 7;
    v36 = v17;
    v37 = &v43;
    v2 = sub_14002B2A0((_QWORD *)(v18 + 16));
    if ( !v2 )
    {
      sub_14172C620((__int64)v41, (__int64)&v32, (__int64)&v34);
      if ( LOBYTE(v41[0]) != 0xFF )
      {
        v31 = v41[1];
        v30 = v41[0];
        sub_14172B820(&v32, a1 + 520, 360);
        *(_OWORD *)v27 = *(_OWORD *)(a1 + 880);
        *(_QWORD *)&v27[16] = *(_QWORD *)(a1 + 896);
        v29 = 1;
        v48 = 0;
        sub_140AFFC30((__int64)&v32, v20, (__int64)&v29, (__int128 *)v27, v21, v22);
        v49 = 0;
        sub_1400437E0(v26);
        goto LABEL_20;
      }
      v2 = *((_QWORD *)&v41[0] + 1);
    }
    v38 = 0;
    v32 = aUpsertRelayPro;
    v33 = 21;
    v34 = aInput;
    v35 = 5;
    v36 = v17;
    v37 = &v43;
    v48 = 1;
    sub_1404F6D60(&v29, &v32);
    v46 = v29;
    if ( v29 != -1 )
    {
      sub_14172B820(v16, &v29, 176);
      sub_140546EE0(v27, v26, v2, v16);
      sub_14172B820(&v32, a1 + 520, 400);
      if ( *(_QWORD *)v27 != -1 )
      {
        sub_14172B820(&v29, v27, 312);
LABEL_19:
        v47 = 0;
        sub_140A96790(&v32, &v29);
        goto LABEL_20;
      }
      v7 = *(_QWORD *)&v27[8];
      v8 = *(_QWORD *)&v27[16];
      *((_QWORD *)&v9 + 1) = v28;
      if ( (__int64)v28 < 0 )
      {
        v10 = 0;
        goto LABEL_12;
      }
      if ( (_QWORD)v28 )
      {
        nullsub_1(v4, v3, v5, v6, v15);
        v10 = 1;
        v11 = sub_140001650(*((_QWORD *)&v9 + 1), 1);
        if ( !v11 )
        {
LABEL_12:
          v45 = v8;
          v46 = v7;
          sub_14176E54B(v10, *((_QWORD *)&v9 + 1));
        }
        *(_QWORD *)&v9 = v11;
        sub_14172B820(v11, v8, *((_QWORD *)&v9 + 1));
        if ( !v7 )
        {
LABEL_18:
          LOBYTE(v30) = 3;
          *((_QWORD *)&v30 + 1) = *((_QWORD *)&v9 + 1);
          v31 = v9;
          v29 = -1;
          goto LABEL_19;
        }
      }
      else
      {
        *(_QWORD *)&v9 = 1;
        if ( !*(_QWORD *)&v27[8] )
          goto LABEL_18;
      }
      sub_140001660(v8, v7, 1);
      goto LABEL_18;
    }
    v28 = v31;
    *(_OWORD *)&v27[8] = v30;
    sub_14172B820(&v32, a1 + 520, 360);
    v39 = *(_OWORD *)(a1 + 880);
    v40 = *(_QWORD *)(a1 + 896);
    *(_QWORD *)v27 = 1;
    sub_140AFFC30((__int64)&v32, v20, (__int64)v27, &v39, v21, v22);
    v49 = 0;
    sub_1400437E0(v26);
  }
LABEL_20:
  if ( (_QWORD)v43 != -1 )
  {
    v12 = *((_QWORD *)&v43 + 1);
    v45 = v44;
    v46 = 0;
    v42 = *((_QWORD *)&v43 + 1);
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
  return sub_140043900(v17);
}
