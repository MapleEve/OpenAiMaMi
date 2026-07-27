// module: codexmate_lib/core/repository
// addr: 0x140392350
// name: load_local_state_synced
// win 1.2.3 | tree_not_on_disk gapfill | win-native Hex-Rays decompile (strip) | session win-1.2.3-tree-not-on-disk-gapfill-20260726
// win 1.2.3 | = mac codexmate_lib::core::repository::Repository::load_local_state_synced | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall load_local_state_synced(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int64 v8; // rbx
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  _QWORD *v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rdx
  __int64 v17; // r14
  __int64 v18; // rbx
  int v19; // edx
  int v20; // r8d
  __int128 v21; // kr00_16
  __int64 v22; // r15
  void *v23; // rax
  unsigned __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int64 v29; // rdi
  unsigned __int64 v30; // rbx
  unsigned __int64 v31; // r14
  __int128 v33; // [rsp+28h] [rbp-58h]
  _BYTE v34[40]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v35; // [rsp+68h] [rbp-18h]
  __int128 v36; // [rsp+78h] [rbp-8h]
  __int128 v37; // [rsp+88h] [rbp+8h]
  __int128 v38; // [rsp+98h] [rbp+18h]
  _BYTE v39[728]; // [rsp+A8h] [rbp+28h] BYREF
  __int128 v40; // [rsp+380h] [rbp+300h]
  unsigned __int64 v41; // [rsp+390h] [rbp+310h]
  __int64 v42; // [rsp+470h] [rbp+3F0h] BYREF
  __int128 v43; // [rsp+478h] [rbp+3F8h]
  _BYTE v44[80]; // [rsp+488h] [rbp+408h]
  char v45[968]; // [rsp+4D8h] [rbp+458h] BYREF
  __int128 v46; // [rsp+8A0h] [rbp+820h] BYREF
  __int64 v47; // [rsp+8B0h] [rbp+830h]
  __int128 v48; // [rsp+8B8h] [rbp+838h] BYREF
  __m256i v49; // [rsp+8C8h] [rbp+848h]
  __int64 v50; // [rsp+8E8h] [rbp+868h]
  __m256i v51; // [rsp+8F0h] [rbp+870h] BYREF
  __int128 v52; // [rsp+910h] [rbp+890h]
  __int128 v53; // [rsp+920h] [rbp+8A0h]
  __int128 v54; // [rsp+930h] [rbp+8B0h]
  __int128 v55; // [rsp+940h] [rbp+8C0h]
  __int64 v56; // [rsp+958h] [rbp+8D8h] BYREF
  __int128 v57; // [rsp+960h] [rbp+8E0h] BYREF
  unsigned __int64 v58; // [rsp+970h] [rbp+8F0h]
  __int64 v59; // [rsp+978h] [rbp+8F8h]
  __int64 v60; // [rsp+980h] [rbp+900h]

  v60 = -2;
  sub_140393880((__int64)&v42, (_QWORD *)a2);
  v4 = v42;
  *(_OWORD *)v34 = v43;
  *(_QWORD *)&v34[16] = *(_QWORD *)v44;
  if ( v42 != -1 )
  {
    v5 = *(_OWORD *)&v44[8];
    v6 = *(_OWORD *)&v44[24];
    v7 = *(_OWORD *)&v44[40];
    *(_OWORD *)(a1 + 88) = *(_OWORD *)&v44[56];
    *(_OWORD *)(a1 + 72) = v7;
    *(_OWORD *)(a1 + 56) = v6;
    *(_OWORD *)(a1 + 40) = v5;
    *(_QWORD *)(a1 + 32) = *(_QWORD *)&v34[16];
    *(_OWORD *)(a1 + 16) = *(_OWORD *)v34;
    *(_QWORD *)(a1 + 8) = v4;
    *(_QWORD *)a1 = 2;
    return a1;
  }
  v57 = *(_OWORD *)v34;
  v58 = *(_QWORD *)&v34[16];
  sub_14038E3B0(&v42, a2);
  v8 = v42;
  *(_OWORD *)v51.m256i_i8 = v43;
  *(_OWORD *)&v51.m256i_u64[2] = *(_OWORD *)v44;
  v52 = *(_OWORD *)&v44[16];
  v53 = *(_OWORD *)&v44[32];
  v54 = *(_OWORD *)&v44[48];
  v55 = *(_OWORD *)&v44[64];
  if ( v42 == 2 )
  {
    *(_OWORD *)(a1 + 88) = v55;
    *(_OWORD *)(a1 + 72) = v54;
    v9 = *(_OWORD *)v51.m256i_i8;
    v10 = *(_OWORD *)&v51.m256i_u64[2];
    v11 = v52;
    *(_OWORD *)(a1 + 56) = v53;
    *(_OWORD *)(a1 + 40) = v11;
    *(_OWORD *)(a1 + 24) = v10;
    *(_OWORD *)(a1 + 8) = v9;
    *(_QWORD *)a1 = 2;
    v12 = *((_QWORD *)&v57 + 1);
    v13 = v58;
    if ( v58 )
    {
      v14 = (_QWORD *)(*((_QWORD *)&v57 + 1) + 32LL);
      do
      {
        v15 = *(v14 - 4);
        if ( v15 )
          sub_140001660(*(v14 - 3), v15, 1);
        v16 = *(v14 - 1);
        if ( v16 )
          sub_140001660(*v14, v16, 1);
        v14 += 6;
        --v13;
      }
      while ( v13 );
    }
    if ( (_QWORD)v57 )
      sub_140001660(v12, 48 * v57, 8);
    return a1;
  }
  sub_141684120(v39, v45, 968);
  *(__m256i *)&v34[8] = v51;
  v35 = v52;
  v36 = v53;
  v37 = v54;
  v38 = v55;
  *(_QWORD *)v34 = v8;
  if ( v39[640] == 1 )
  {
    sub_1403F6BF0(&v42);
    v17 = v42;
    v18 = v43;
    if ( v42 )
    {
      if ( (_DWORD)v42 == 1 || !(_QWORD)v43 )
        goto LABEL_21;
    }
    else if ( (__int64)v43 <= 0 )
    {
      goto LABEL_20;
    }
    sub_140001660(*((_QWORD *)&v43 + 1), v43, 1);
LABEL_20:
    if ( v17 == 0 && v18 != -1 )
      goto LABEL_31;
LABEL_21:
    sub_141483A00(&v42);
    if ( v42 == -1 )
    {
      v56 = v43;
      *(_QWORD *)&v48 = &v56;
      *((_QWORD *)&v48 + 1) = sub_141490720;
      sub_14149C0F0(&v51, &unk_14174CC1A, &v48);
      v21 = *(_OWORD *)v51.m256i_i8;
      v22 = v51.m256i_i64[2];
      sub_140018650(&v56);
      *(_OWORD *)&v51.m256i_u64[1] = v21;
      v51.m256i_i64[3] = v22;
      v51.m256i_i64[0] = 10;
    }
    else
    {
      v59 = v42;
      v33 = *(_OWORD *)(a2 + 8);
      v50 = v43;
      sub_1403F5E30((unsigned int)&v51, v19, v20, v43, *((__int64 *)&v43 + 1), v33, *((__int64 *)&v33 + 1));
      if ( v59 )
        sub_140001660(v50, v59, 1);
      if ( v51.m256i_i64[0] == -1 )
        goto LABEL_31;
    }
    *(_OWORD *)&v44[56] = v55;
    *(_OWORD *)&v44[40] = v54;
    *(_OWORD *)&v44[24] = v53;
    *(_OWORD *)&v44[8] = v52;
    *(_QWORD *)v44 = v51.m256i_i64[3];
    v42 = v51.m256i_i64[0];
    v43 = *(_OWORD *)&v51.m256i_u64[1];
    nullsub_1(v51.m256i_i64[1]);
    v23 = (void *)sub_140001650(32, 1);
    if ( !v23 )
      sub_1416C2D4B(1, 32);
    v59 = (__int64)v23;
    qmemcpy(v23, "AUTO_SWITCH_DAEMON_REPAIR_FAILED", 32);
    *(_QWORD *)&v48 = &v42;
    *((_QWORD *)&v48 + 1) = sub_140B036A0;
    sub_14149C0F0(&v46, &unk_14174EEF0, &v48);
    *(_QWORD *)&v48 = 32;
    *((_QWORD *)&v48 + 1) = v59;
    v49.m256i_i64[0] = 32;
    *(_OWORD *)&v49.m256i_u64[1] = v46;
    v49.m256i_i64[3] = v47;
    v24 = v58;
    if ( v58 == (_QWORD)v57 )
      sub_141688FC0(&v57);
    v25 = *((_QWORD *)&v57 + 1);
    v26 = 48 * v24;
    v27 = v48;
    v28 = *(_OWORD *)v49.m256i_i8;
    *(_OWORD *)(*((_QWORD *)&v57 + 1) + v26 + 32) = *(_OWORD *)&v49.m256i_u64[2];
    *(_OWORD *)(v25 + v26 + 16) = v28;
    *(_OWORD *)(v25 + v26) = v27;
    v58 = v24 + 1;
    sub_14034ED40(&v42);
  }
LABEL_31:
  v29 = *((_QWORD *)&v40 + 1);
  v30 = v41;
  v31 = v58;
  if ( v41 > (unsigned __int64)v57 - v58 )
  {
    sub_141688D30((unsigned int)&v57, v58, v41, 8, 48);
    v31 = v58;
    goto LABEL_33;
  }
  if ( v41 )
LABEL_33:
    sub_141684120(*((_QWORD *)&v57 + 1) + 48 * v31, v29, 48 * v30);
  v58 = v30 + v31;
  if ( (_QWORD)v40 )
    sub_140001660(v29, 48 * v40, 8);
  v41 = v58;
  v40 = v57;
  sub_141684120(a1, v34, 1072);
  return a1;
}
