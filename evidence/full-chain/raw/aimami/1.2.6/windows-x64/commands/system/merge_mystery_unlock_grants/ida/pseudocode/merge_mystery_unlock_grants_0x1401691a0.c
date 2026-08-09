// Pseudocode for merge_mystery_unlock_grants (EA: 0x1401691a0, size: 0x4ae)
// Module: commands/system
// Source: IDA Hex-Rays decompiler
// IDA Comment: Tauri 命令 merge_mystery_unlock_grants 处理器（commands::system，argKeys: grants）。合并写入 mystery 解锁授权。⚠副作用：写本地存储。
// Tauri 命令 merge_mystery_unlock_grants 处理器（commands::system，argKeys: grants）。合并写入 mystery 解锁授权。⚠副作用：写本地存储。
__int64 __fastcall merge_mystery_unlock_grants(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rdx
  __int64 v7; // rcx
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
  const char *v25; // [rsp+3D0h] [rbp+350h] BYREF
  __int64 v26; // [rsp+3D8h] [rbp+358h]
  const char *v27; // [rsp+3E0h] [rbp+360h] BYREF
  __int64 v28; // [rsp+3E8h] [rbp+368h]
  _BYTE *v29; // [rsp+3F0h] [rbp+370h]
  __int128 *v30; // [rsp+3F8h] [rbp+378h]
  __int64 v31; // [rsp+400h] [rbp+380h]
  __int128 v32; // [rsp+560h] [rbp+4E0h] BYREF
  __int64 v33; // [rsp+570h] [rbp+4F0h]
  __m256i v34; // [rsp+578h] [rbp+4F8h] BYREF
  __int64 v35; // [rsp+598h] [rbp+518h]
  __m256i v36; // [rsp+5A0h] [rbp+520h] BYREF
  _BYTE v37[24]; // [rsp+5C0h] [rbp+540h] BYREF
  __int64 v38; // [rsp+5D8h] [rbp+558h]
  __int64 v39; // [rsp+5E8h] [rbp+568h] BYREF
  __m256i v40; // [rsp+5F0h] [rbp+570h]
  __int128 v41; // [rsp+610h] [rbp+590h] BYREF
  __int64 v42; // [rsp+620h] [rbp+5A0h]
  __int64 v43; // [rsp+630h] [rbp+5B0h]
  __int64 v44; // [rsp+638h] [rbp+5B8h]
  char v45; // [rsp+646h] [rbp+5C6h]
  char v46; // [rsp+647h] [rbp+5C7h]
  __int64 v47; // [rsp+648h] [rbp+5C8h]

  v47 = -2;
  sub_14172B820(v19, a1, 520);
  sub_14172B820(v21, a1 + 520, 400);
  v42 = *(_QWORD *)(a1 + 936);
  v41 = *(_OWORD *)(a1 + 920);
  v31 = 0;
  v25 = aMergeMysteryUn;
  v26 = 27;
  v27 = aRepo;
  v28 = 4;
  v29 = v19;
  v30 = &v41;
  v46 = 1;
  v2 = sub_140029DD0((volatile void *)(v20 + 16));
  if ( !v2 )
  {
    v46 = 1;
    sub_14172C620((__int64)&v34, (__int64)&v25, (__int64)&v27);
    if ( v34.m256i_i8[0] != -1 )
    {
      v40 = v34;
      sub_14172B820(&v25, a1 + 520, 360);
      *(_OWORD *)v36.m256i_i8 = *(_OWORD *)(a1 + 880);
      v36.m256i_i64[2] = *(_QWORD *)(a1 + 896);
      v39 = 1;
      v46 = 0;
      sub_140AFFC30((__int64)&v25, v22, (__int64)&v39, (__int128 *)v36.m256i_i8, v23, v24);
      goto LABEL_18;
    }
    v2 = v34.m256i_i64[1];
  }
  v31 = 0;
  v25 = aMergeMysteryUn;
  v26 = 27;
  v27 = aGrants;
  v28 = 6;
  v29 = v19;
  v30 = &v41;
  v46 = 1;
  sub_14045B1E0(&v36, &v25);
  if ( v36.m256i_i8[0] == -1 )
  {
    v33 = v36.m256i_i64[3];
    v32 = *(_OWORD *)&v36.m256i_u64[1];
    v46 = 1;
    sub_140B29CE0(v37, v2, &v32);
    sub_14172B820(&v25, a1 + 520, 400);
    if ( *(_DWORD *)v37 != 1 )
    {
      v40.m256i_i64[2] = v38;
      *(_OWORD *)v40.m256i_i8 = *(_OWORD *)&v37[8];
      LOBYTE(v39) = -1;
LABEL_17:
      v45 = 0;
      sub_140A91560(&v25, &v39);
      goto LABEL_18;
    }
    v10 = *(_QWORD *)&v37[8];
    v11 = *(_QWORD *)&v37[16];
    *((_QWORD *)&v12 + 1) = v38;
    if ( v38 < 0 )
    {
      v13 = 0;
      goto LABEL_9;
    }
    if ( v38 )
    {
      nullsub_1(v7, v6, v8, v9, v18);
      v13 = 1;
      v14 = sub_140001650(*((_QWORD *)&v12 + 1), 1);
      if ( !v14 )
      {
LABEL_9:
        v43 = v11;
        v44 = v10;
        sub_14176E54B(v13, *((_QWORD *)&v12 + 1));
      }
      *(_QWORD *)&v12 = v14;
      sub_14172B820(v14, v11, *((_QWORD *)&v12 + 1));
      if ( !v10 )
        goto LABEL_16;
    }
    else
    {
      *(_QWORD *)&v12 = 1;
      if ( !*(_QWORD *)&v37[8] )
        goto LABEL_16;
    }
    sub_140001660(v11, v10, 1);
LABEL_16:
    LOBYTE(v39) = 3;
    v40.m256i_i64[0] = *((_QWORD *)&v12 + 1);
    *(_OWORD *)&v40.m256i_u64[1] = v12;
    goto LABEL_17;
  }
  v40 = v36;
  sub_14172B820(&v25, a1 + 520, 360);
  *(_OWORD *)v37 = *(_OWORD *)(a1 + 880);
  *(_QWORD *)&v37[16] = *(_QWORD *)(a1 + 896);
  v39 = 1;
  v46 = 0;
  sub_140AFFC30((__int64)&v25, v22, (__int64)&v39, (__int128 *)v37, v23, v24);
LABEL_18:
  if ( (_QWORD)v41 != -1 )
  {
    v15 = *((_QWORD *)&v41 + 1);
    v43 = v42;
    v44 = 0;
    v35 = *((_QWORD *)&v41 + 1);
    while ( v43 != v44 )
    {
      ++v44;
      v16 = v15 + 96;
      sub_140401FB0(v15, v3, v4, v5, v18);
      v15 = v16;
    }
    if ( (_QWORD)v41 )
      sub_140001660(*((_QWORD *)&v41 + 1), 96 * v41, 8);
  }
  return sub_140043900(v19);
}
