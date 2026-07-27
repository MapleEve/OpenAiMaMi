// module: codexmate_lib/commands
// addr: 0x140189830
// name: merge_mystery_unlock_grants
// win 1.2.1 | tauri command handler = merge_mystery_unlock_grants | mapped via command-name string xref (win-native, ground-truth)
__int64 __fastcall merge_mystery_unlock_grants(__int64 a1)
{
  __int64 v2; // r14
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rcx
  __int64 v7; // r14
  __int64 v8; // r15
  __int128 v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  __int64 v15; // [rsp+20h] [rbp-60h]
  _BYTE v16[512]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v17; // [rsp+238h] [rbp+1B8h]
  _BYTE v18[384]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v19; // [rsp+3C0h] [rbp+340h]
  int v20; // [rsp+3C8h] [rbp+348h]
  int v21; // [rsp+3CCh] [rbp+34Ch]
  const char *v22; // [rsp+3D0h] [rbp+350h] BYREF
  __int64 v23; // [rsp+3D8h] [rbp+358h]
  const char *v24; // [rsp+3E0h] [rbp+360h] BYREF
  __int64 v25; // [rsp+3E8h] [rbp+368h]
  _BYTE *v26; // [rsp+3F0h] [rbp+370h]
  __int128 *v27; // [rsp+3F8h] [rbp+378h]
  __int64 v28; // [rsp+400h] [rbp+380h]
  __int128 v29; // [rsp+560h] [rbp+4E0h] BYREF
  __int64 v30; // [rsp+570h] [rbp+4F0h]
  __m256i v31; // [rsp+578h] [rbp+4F8h] BYREF
  __int64 v32; // [rsp+598h] [rbp+518h]
  __m256i v33; // [rsp+5A0h] [rbp+520h] BYREF
  _BYTE v34[24]; // [rsp+5C0h] [rbp+540h] BYREF
  __int64 v35; // [rsp+5D8h] [rbp+558h]
  __int64 v36; // [rsp+5E8h] [rbp+568h] BYREF
  __m256i v37; // [rsp+5F0h] [rbp+570h]
  __int128 v38; // [rsp+610h] [rbp+590h] BYREF
  __int64 v39; // [rsp+620h] [rbp+5A0h]
  __int64 v40; // [rsp+630h] [rbp+5B0h]
  __int64 v41; // [rsp+638h] [rbp+5B8h]
  char v42; // [rsp+646h] [rbp+5C6h]
  char v43; // [rsp+647h] [rbp+5C7h]
  __int64 v44; // [rsp+648h] [rbp+5C8h]

  v44 = -2;
  sub_141684120(v16, a1, 520);
  sub_141684120(v18, a1 + 520, 400);
  v39 = *(_QWORD *)(a1 + 936);
  v38 = *(_OWORD *)(a1 + 920);
  v28 = 0;
  v22 = aMergeMysteryUn;
  v23 = 27;
  v24 = aRepo;
  v25 = 4;
  v26 = v16;
  v27 = &v38;
  v43 = 1;
  v2 = sub_140003640((volatile void *)(v17 + 16));
  if ( !v2 )
  {
    v43 = 1;
    sub_1416850A0(&v31, &v22, &v24);
    if ( v31.m256i_i8[0] != -1 )
    {
      v37 = v31;
      sub_141684120(&v22, a1 + 520, 360);
      *(_OWORD *)v33.m256i_i8 = *(_OWORD *)(a1 + 880);
      v33.m256i_i64[2] = *(_QWORD *)(a1 + 896);
      v36 = 1;
      v43 = 0;
      sub_14047E370((unsigned int)&v22, v19, (unsigned int)&v36, (unsigned int)&v33, v20, v21);
      goto LABEL_18;
    }
    v2 = v31.m256i_i64[1];
  }
  v28 = 0;
  v22 = aMergeMysteryUn;
  v23 = 27;
  v24 = aGrants;
  v25 = 6;
  v26 = v16;
  v27 = &v38;
  v43 = 1;
  sub_1403207E0(&v33, &v22);
  if ( v33.m256i_i8[0] == -1 )
  {
    v30 = v33.m256i_i64[3];
    v29 = *(_OWORD *)&v33.m256i_u64[1];
    v43 = 1;
    sub_1403D47B0(v34, v2, &v29);
    sub_141684120(&v22, a1 + 520, 400);
    if ( *(_DWORD *)v34 != 1 )
    {
      v37.m256i_i64[2] = v35;
      *(_OWORD *)v37.m256i_i8 = *(_OWORD *)&v34[8];
      LOBYTE(v36) = -1;
LABEL_17:
      v42 = 0;
      sub_140431F20(&v22, &v36);
      goto LABEL_18;
    }
    v7 = *(_QWORD *)&v34[8];
    v8 = *(_QWORD *)&v34[16];
    *((_QWORD *)&v9 + 1) = v35;
    if ( v35 < 0 )
    {
      v10 = 0;
      goto LABEL_9;
    }
    if ( v35 )
    {
      nullsub_1(v6);
      v10 = 1;
      v11 = sub_140001650(*((_QWORD *)&v9 + 1), 1);
      if ( !v11 )
      {
LABEL_9:
        v40 = v8;
        v41 = v7;
        sub_1416C2D4B(v10, *((_QWORD *)&v9 + 1));
      }
      *(_QWORD *)&v9 = v11;
      sub_141684120(v11, v8, *((_QWORD *)&v9 + 1));
      if ( !v7 )
        goto LABEL_16;
    }
    else
    {
      *(_QWORD *)&v9 = 1;
      if ( !*(_QWORD *)&v34[8] )
        goto LABEL_16;
    }
    sub_140001660(v8, v7, 1);
LABEL_16:
    LOBYTE(v36) = 3;
    v37.m256i_i64[0] = *((_QWORD *)&v9 + 1);
    *(_OWORD *)&v37.m256i_u64[1] = v9;
    goto LABEL_17;
  }
  v37 = v33;
  sub_141684120(&v22, a1 + 520, 360);
  *(_OWORD *)v34 = *(_OWORD *)(a1 + 880);
  *(_QWORD *)&v34[16] = *(_QWORD *)(a1 + 896);
  v36 = 1;
  v43 = 0;
  sub_14047E370((unsigned int)&v22, v19, (unsigned int)&v36, (unsigned int)v34, v20, v21);
LABEL_18:
  if ( (_QWORD)v38 != -1 )
  {
    v12 = *((_QWORD *)&v38 + 1);
    v40 = v39;
    v41 = 0;
    v32 = *((_QWORD *)&v38 + 1);
    while ( v40 != v41 )
    {
      ++v41;
      v13 = v12 + 96;
      sub_1402C7520(v12, v3, v4, v5, v15);
      v12 = v13;
    }
    if ( (_QWORD)v38 )
      sub_140001660(*((_QWORD *)&v38 + 1), 96 * v38, 8);
  }
  return sub_140014270(v16);
}