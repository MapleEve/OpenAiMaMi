// module: codexmate_lib/core/relay/codex_diagnostic
// addr: 0x140782cb0
// name: fix_project_state_integrity
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_diagnostic::fix_project_state_integrity | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall fix_project_state_integrity(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  __int64 v5; // rbx
  __int128 v6; // kr00_16
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rcx
  _QWORD *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rcx
  _QWORD *v19; // rdi
  __int64 v20; // rax
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm1
  _OWORD *v24; // rcx
  __int128 v25; // xmm0
  char v26; // si
  _QWORD *v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // r14
  __int64 v34; // rax
  _QWORD *v35; // rax
  __int128 v36; // xmm0
  _QWORD v37[29]; // [rsp+28h] [rbp-58h] BYREF
  char v38; // [rsp+112h] [rbp+92h]
  __int128 v39; // [rsp+118h] [rbp+98h] BYREF
  __int64 v40; // [rsp+128h] [rbp+A8h]
  _QWORD v41[2]; // [rsp+130h] [rbp+B0h] BYREF
  __int128 v42; // [rsp+140h] [rbp+C0h] BYREF
  __int64 v43; // [rsp+150h] [rbp+D0h]
  __int128 v44; // [rsp+158h] [rbp+D8h]
  __m256i v45; // [rsp+168h] [rbp+E8h]
  __m256i v46; // [rsp+188h] [rbp+108h]
  __int64 v47; // [rsp+1C0h] [rbp+140h]
  __int64 v48; // [rsp+1C8h] [rbp+148h]
  __int64 v49; // [rsp+1D0h] [rbp+150h]
  __int128 v50; // [rsp+1D8h] [rbp+158h]
  __int64 v51; // [rsp+1E8h] [rbp+168h]
  __int64 v52; // [rsp+1F0h] [rbp+170h]
  __int64 v53; // [rsp+1F8h] [rbp+178h]
  _BYTE v54[40]; // [rsp+200h] [rbp+180h] BYREF
  __int64 v55; // [rsp+228h] [rbp+1A8h]
  __int128 v56; // [rsp+230h] [rbp+1B0h]
  __int64 v57; // [rsp+240h] [rbp+1C0h]
  _QWORD *v58; // [rsp+250h] [rbp+1D0h]
  _QWORD *v59; // [rsp+258h] [rbp+1D8h]
  char v60; // [rsp+265h] [rbp+1E5h]
  char v61; // [rsp+266h] [rbp+1E6h]
  char v62; // [rsp+267h] [rbp+1E7h]
  __int64 v63; // [rsp+268h] [rbp+1E8h]

  v63 = -2;
  sub_1404A1A50(v37, a2);
  if ( !v38 )
  {
    nullsub_1(v4);
    v13 = sub_140001650(24, 8);
    if ( !v13 )
      sub_1416C2D31(8, 24);
    v15 = (_QWORD *)v13;
    nullsub_1(v14);
    v16 = sub_140001650(23, 1);
    if ( !v16 )
    {
      v59 = v15;
      sub_1416C2D4B(1, 23);
    }
    *(_OWORD *)v16 = *(_OWORD *)aProjectStateIn;
    *(_QWORD *)(v16 + 15) = 0x797469726765746ELL;
    *v15 = 23;
    v15[1] = v16;
    v15[2] = 23;
    *(_QWORD *)&v56 = 1;
    *((_QWORD *)&v56 + 1) = v15;
    v57 = 1;
    *(_QWORD *)v54 = 0;
    *(_QWORD *)&v54[8] = 8;
    *(_QWORD *)&v54[16] = 0;
    nullsub_1(0x797469726765746ELL);
    v17 = sub_140001650(24, 8);
    if ( !v17 )
      sub_1416C2D31(8, 24);
    v19 = (_QWORD *)v17;
    nullsub_1(v18);
    v20 = sub_140001650(39, 1);
    if ( !v20 )
    {
      v59 = v19;
      sub_1416C2D4B(1, 39);
    }
    *(_OWORD *)(v20 + 16) = xmmword_14178E222;
    *(_OWORD *)v20 = xmmword_14178E212;
    *(_QWORD *)(v20 + 31) = 0x8DA4E5AEBFE4809CuLL;
    *v19 = 39;
    v19[1] = v20;
    v19[2] = 39;
    v43 = v57;
    v21 = v56;
    v42 = v56;
    v45.m256i_i64[0] = *(_QWORD *)&v54[16];
    v44 = *(_OWORD *)v54;
    *(_QWORD *)(a1 + 40) = *(_QWORD *)&v54[8];
    *(_QWORD *)(a1 + 48) = v45.m256i_i64[0];
    *(_QWORD *)(a1 + 24) = v43;
    *(_QWORD *)(a1 + 32) = v44;
    *(_OWORD *)(a1 + 8) = v21;
    *(_QWORD *)(a1 + 56) = 1;
    *(_QWORD *)(a1 + 64) = v19;
    *(_QWORD *)(a1 + 72) = 1;
    *(_QWORD *)a1 = -1;
    return sub_14043F000(v37);
  }
  repair_if_needed((__int64)&v42, a2);
  v5 = v43;
  v6 = v44;
  if ( (_QWORD)v42 == -1 )
  {
    v22 = *(_OWORD *)&v45.m256i_u64[2];
    v56 = *(_OWORD *)v45.m256i_i8;
    *(__m256i *)v54 = v46;
    *(_QWORD *)a1 = *((_QWORD *)&v42 + 1);
    *(_QWORD *)(a1 + 8) = v5;
    *(_OWORD *)(a1 + 16) = v6;
    *(_OWORD *)(a1 + 32) = v56;
    *(_OWORD *)(a1 + 48) = v22;
    v23 = *(_OWORD *)&v54[16];
    *(_OWORD *)(a1 + 64) = *(_OWORD *)v54;
    *(_OWORD *)(a1 + 80) = v23;
    return sub_14043F000(v37);
  }
  v49 = *((_QWORD *)&v44 + 1);
  v47 = v44;
  v53 = *((_QWORD *)&v42 + 1);
  v59 = (_QWORD *)v42;
  v48 = v45.m256i_i64[3];
  v52 = v45.m256i_i64[2];
  check_project_state_integrity(&v42, a2);
  if ( v45.m256i_i64[0] == 2 && **((_WORD **)&v44 + 1) == 27503 )
  {
    nullsub_1(v7);
    v31 = sub_140001650(24, 8);
    if ( !v31 )
    {
      v62 = 1;
      sub_1416C2D31(8, 24);
    }
    v33 = (_QWORD *)v31;
    nullsub_1(v32);
    v34 = sub_140001650(23, 1);
    v27 = v59;
    if ( !v34 )
    {
      v58 = v33;
      sub_1416C2D4B(1, 23);
    }
    *(_OWORD *)v34 = *(_OWORD *)aProjectStateIn;
    *(_QWORD *)(v34 + 15) = 0x797469726765746ELL;
    *v33 = 23;
    v33[1] = v34;
    v33[2] = 23;
    *(_QWORD *)&v50 = 1;
    *((_QWORD *)&v50 + 1) = v33;
    v51 = 1;
    *(_QWORD *)&v56 = 0;
    *((_QWORD *)&v56 + 1) = 8;
    v57 = 0;
    nullsub_1(0x797469726765746ELL);
    v35 = (_QWORD *)sub_140001650(24, 8);
    if ( !v35 )
      sub_1416C2D31(8, 24);
    *v35 = v27;
    v35[1] = v53;
    v35[2] = v5;
    *(_QWORD *)&v54[16] = v51;
    v36 = v50;
    *(_OWORD *)v54 = v50;
    *(_OWORD *)&v54[24] = v56;
    v55 = v57;
    *(_QWORD *)(a1 + 40) = *((_QWORD *)&v56 + 1);
    *(_QWORD *)(a1 + 48) = v55;
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v54[16];
    *(_OWORD *)(a1 + 8) = v36;
    *(_QWORD *)(a1 + 56) = 1;
    *(_QWORD *)(a1 + 64) = v35;
    *(_QWORD *)(a1 + 72) = 1;
    *(_QWORD *)a1 = -1;
    v26 = 1;
    v28 = v52;
    v29 = v42;
    if ( (_QWORD)v42 )
      goto LABEL_21;
  }
  else
  {
    *(_QWORD *)&v50 = 0;
    *((_QWORD *)&v50 + 1) = 8;
    v51 = 0;
    nullsub_1(v7);
    v8 = sub_140001650(24, 8);
    if ( !v8 )
    {
      v61 = 1;
      sub_1416C2D31(8, 24);
    }
    v10 = (_QWORD *)v8;
    nullsub_1(v9);
    v11 = sub_140001650(23, 1);
    if ( !v11 )
    {
      v58 = v10;
      sub_1416C2D4B(1, 23);
    }
    *(_OWORD *)v11 = *(_OWORD *)aProjectStateIn;
    *(_QWORD *)(v11 + 15) = 0x797469726765746ELL;
    *v10 = 23;
    v10[1] = v11;
    v10[2] = 23;
    *(_QWORD *)&v56 = 1;
    *((_QWORD *)&v56 + 1) = v10;
    v57 = 1;
    nullsub_1(0x797469726765746ELL);
    v12 = sub_140001650(24, 8);
    if ( !v12 )
    {
      v60 = 1;
      sub_1416C2D31(8, 24);
    }
    v58 = (_QWORD *)v12;
    if ( v46.m256i_i64[0] == -1 )
    {
      *(_QWORD *)&v54[16] = v45.m256i_i64[3];
      *(_OWORD *)v54 = *(_OWORD *)&v45.m256i_u64[1];
    }
    else
    {
      *(_QWORD *)v54 = v46.m256i_i64[0];
      *(_OWORD *)&v54[8] = *(_OWORD *)&v46.m256i_u64[1];
      if ( v45.m256i_i64[1] )
        sub_140001660(v45.m256i_i64[2], v45.m256i_i64[1], 1);
    }
    v41[0] = v54;
    v41[1] = sub_1400015F0;
    sub_14149C0F0(&v39, &unk_14178E239, v41);
    if ( *(_QWORD *)v54 )
      sub_140001660(*(_QWORD *)&v54[8], *(_QWORD *)v54, 1);
    v24 = v58;
    v58[2] = v40;
    *v24 = v39;
    v25 = v50;
    *(_OWORD *)v54 = v50;
    *(_QWORD *)&v54[16] = v51;
    *(_OWORD *)&v54[24] = v56;
    v55 = v57;
    *(_QWORD *)(a1 + 40) = *((_QWORD *)&v56 + 1);
    *(_QWORD *)(a1 + 48) = v55;
    *(_OWORD *)(a1 + 24) = *(_OWORD *)&v54[16];
    *(_OWORD *)(a1 + 8) = v25;
    *(_QWORD *)(a1 + 56) = 1;
    *(_QWORD *)(a1 + 64) = v24;
    *(_QWORD *)(a1 + 72) = 1;
    *(_QWORD *)a1 = -1;
    v26 = 0;
    v27 = v59;
    v28 = v52;
    v29 = v42;
    if ( (_QWORD)v42 )
LABEL_21:
      sub_140001660(*((_QWORD *)&v42 + 1), v29, 1);
  }
  if ( (_QWORD)v44 )
    sub_140001660(*((_QWORD *)&v44 + 1), v44, 1);
  if ( v26 )
  {
    if ( v45.m256i_i64[1] )
      sub_140001660(v45.m256i_i64[2], v45.m256i_i64[1], 1);
    if ( v46.m256i_i64[0] != -1 && v46.m256i_i64[0] )
      sub_140001660(v46.m256i_i64[1], v46.m256i_i64[0], 1);
  }
  if ( (unsigned __int64)(v47 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( (unsigned __int64)(v28 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
      goto LABEL_32;
LABEL_36:
    sub_140001660(v48, v28, 1);
    if ( (unsigned __int8)v26 | (v27 == nullptr) )
      return sub_14043F000(v37);
    goto LABEL_33;
  }
  sub_140001660(v49, v47, 1);
  if ( (unsigned __int64)(v28 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    goto LABEL_36;
LABEL_32:
  if ( !((unsigned __int8)v26 | (v27 == nullptr)) )
LABEL_33:
    sub_140001660(v53, v27, 1);
  return sub_14043F000(v37);
}