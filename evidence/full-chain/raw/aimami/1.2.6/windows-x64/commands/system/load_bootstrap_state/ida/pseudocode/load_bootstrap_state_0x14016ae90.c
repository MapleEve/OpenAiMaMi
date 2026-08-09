// Pseudocode for load_bootstrap_state (EA: 0x14016ae90, size: 0x388)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 load_bootstrap_state 处理器（commands::system）。加载启动引导状态（mac 符号 Repository::load_bootstrap_state 佐证）。
// Tauri 命令 load_bootstrap_state 处理器（commands::system）。加载启动引导状态（mac 符号 Repository::load_bootstrap_state 佐证）。
__int64 __fastcall load_bootstrap_state(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  __int128 v7; // kr00_16
  const char *v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v18; // [rsp+20h] [rbp-60h]
  _BYTE v19[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v20; // [rsp+238h] [rbp+1B8h]
  __int64 v21; // [rsp+240h] [rbp+1C0h] BYREF
  __int128 v22; // [rsp+248h] [rbp+1C8h]
  __int128 v23; // [rsp+258h] [rbp+1D8h]
  char v24[384]; // [rsp+6B0h] [rbp+630h] BYREF
  __int64 v25; // [rsp+830h] [rbp+7B0h]
  int v26; // [rsp+838h] [rbp+7B8h]
  int v27; // [rsp+83Ch] [rbp+7BCh]
  __int64 v28; // [rsp+840h] [rbp+7C0h] BYREF
  __int64 v29; // [rsp+848h] [rbp+7C8h]
  const char *v30; // [rsp+850h] [rbp+7D0h] BYREF
  __int64 v31; // [rsp+858h] [rbp+7D8h]
  const char *v32; // [rsp+860h] [rbp+7E0h]
  __int128 *v33; // [rsp+868h] [rbp+7E8h]
  __int64 v34; // [rsp+870h] [rbp+7F0h]
  _OWORD v35[25]; // [rsp+CB0h] [rbp+C30h] BYREF
  __int128 v36; // [rsp+E40h] [rbp+DC0h] BYREF
  __int64 v37; // [rsp+E50h] [rbp+DD0h]
  __int64 v38; // [rsp+E58h] [rbp+DD8h]
  __int128 v39; // [rsp+E60h] [rbp+DE0h] BYREF
  __int64 v40; // [rsp+E70h] [rbp+DF0h]
  __int64 v41; // [rsp+E78h] [rbp+DF8h]
  __int64 v42; // [rsp+E80h] [rbp+E00h]
  char v43; // [rsp+E8Eh] [rbp+E0Eh]
  char v44; // [rsp+E8Fh] [rbp+E0Fh]
  __int64 v45; // [rsp+E90h] [rbp+E10h]

  v45 = -2;
  sub_14172B820(v19, a1, 520);
  sub_14172B820(v24, a1 + 520, 400);
  v40 = *(_QWORD *)(a1 + 936);
  v39 = *(_OWORD *)(a1 + 920);
  v34 = 0;
  v28 = (__int64)aLoadBootstrapS;
  v29 = 20;
  v30 = aRepo;
  v31 = 4;
  v32 = v19;
  v33 = &v39;
  v44 = 1;
  v2 = sub_140029DD0((volatile void *)(v20 + 16));
  if ( v2 )
  {
LABEL_2:
    v44 = 1;
    sub_140B25CC0(&v21, v2);
    sub_14172B820(v35, a1 + 520, 400);
    if ( (_DWORD)v21 != 2 )
    {
      sub_14172B820(&v28, &v21, 1136);
LABEL_14:
      v43 = 0;
      sub_140A95380(v35, &v28);
      goto LABEL_15;
    }
    v7 = v22;
    v8 = (const char *)v23;
    if ( (__int64)v23 < 0 )
    {
      v9 = 0;
      goto LABEL_5;
    }
    if ( (_QWORD)v23 )
    {
      nullsub_1(v4, v3, v5, v6, v18);
      v9 = 1;
      v13 = sub_140001650(v8, 1);
      if ( !v13 )
      {
LABEL_5:
        v41 = *((_QWORD *)&v7 + 1);
        v42 = v7;
        sub_14176E54B(v9, v8);
      }
      v14 = v13;
      sub_14172B820(v13, *((_QWORD *)&v7 + 1), v8);
      if ( !(_QWORD)v7 )
        goto LABEL_13;
    }
    else
    {
      v14 = 1;
      if ( !(_QWORD)v22 )
        goto LABEL_13;
    }
    sub_140001660(*((_QWORD *)&v7 + 1), v7, 1);
LABEL_13:
    LOBYTE(v29) = 3;
    v30 = v8;
    v31 = v14;
    v32 = v8;
    v28 = 2;
    goto LABEL_14;
  }
  v44 = 1;
  sub_14172C620((__int64)v35, (__int64)&v28, (__int64)&v30);
  if ( LOBYTE(v35[0]) == 0xFF )
  {
    v2 = *((_QWORD *)&v35[0] + 1);
    goto LABEL_2;
  }
  v23 = v35[1];
  v22 = v35[0];
  sub_14172B820(&v28, a1 + 520, 360);
  v36 = *(_OWORD *)(a1 + 880);
  v37 = *(_QWORD *)(a1 + 896);
  v21 = 1;
  v44 = 0;
  sub_140AFFC30((__int64)&v28, v25, (__int64)&v21, &v36, v26, v27);
LABEL_15:
  if ( (_QWORD)v39 != -1 )
  {
    v15 = *((_QWORD *)&v39 + 1);
    v41 = v40;
    v42 = 0;
    v38 = *((_QWORD *)&v39 + 1);
    while ( v41 != v42 )
    {
      ++v42;
      v16 = v15 + 96;
      sub_140401FB0(v15, v10, v11, v12, v18);
      v15 = v16;
    }
    if ( (_QWORD)v39 )
      sub_140001660(*((_QWORD *)&v39 + 1), 96 * v39, 8);
  }
  return sub_140043900(v19);
}
