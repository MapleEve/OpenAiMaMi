// win 1.2.4 delta | codexmate_lib4core5relay23codex_thread_visibility3 @ 0x14053fb50
// [FULL decompile]
// win 1.2.4 delta | codexmate_lib4core5relay23codex_thread_visibility3 | (win-native 锚点: 命令名串/跨平台签名)
__int64 __fastcall sub_14053FB50(__int64 a1, int a2, int a3)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r15
  __int64 v9; // r12
  unsigned __int128 v10; // kr00_16
  __int64 v11; // rsi
  __int64 v12; // rdi
  __int64 result; // rax
  __int64 v14; // rax
  bool v15; // zf
  __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r13
  _QWORD *v22; // rdi
  __int64 v23; // rbx
  __int64 v24; // r14
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  void *v28; // rax
  _QWORD *v29; // r12
  __int64 v30; // rdx
  __int64 v31; // rdx
  __int64 v32; // rdx
  __int128 v33; // xmm0
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int128 v36; // xmm0
  __int128 v37; // [rsp+28h] [rbp-58h] BYREF
  __int64 v38; // [rsp+38h] [rbp-48h]
  __int128 v39; // [rsp+40h] [rbp-40h] BYREF
  __int64 v40; // [rsp+50h] [rbp-30h]
  __int128 v41; // [rsp+58h] [rbp-28h] BYREF
  __int64 v42; // [rsp+68h] [rbp-18h]
  __int128 v43; // [rsp+70h] [rbp-10h] BYREF
  __int64 v44; // [rsp+90h] [rbp+10h] BYREF
  __int64 v45; // [rsp+98h] [rbp+18h]
  __int64 v46; // [rsp+A0h] [rbp+20h]
  _QWORD v47[2]; // [rsp+B0h] [rbp+30h] BYREF
  _OWORD v48[2]; // [rsp+C0h] [rbp+40h] BYREF
  __m256i v49; // [rsp+E0h] [rbp+60h] BYREF
  __m256i v50; // [rsp+100h] [rbp+80h] BYREF
  _QWORD *v51; // [rsp+128h] [rbp+A8h] BYREF
  __int64 v52; // [rsp+130h] [rbp+B0h]
  _QWORD *v53; // [rsp+138h] [rbp+B8h]
  __int128 v54; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v55; // [rsp+150h] [rbp+D0h]
  __int64 v56; // [rsp+160h] [rbp+E0h]
  __int64 v57; // [rsp+168h] [rbp+E8h]
  __int64 v58; // [rsp+170h] [rbp+F0h]
  __int64 v59; // [rsp+178h] [rbp+F8h]
  __int64 v60; // [rsp+180h] [rbp+100h]

  v60 = -2;
  sub_1414E1440((unsigned int)&v44, a2, a3, (unsigned int)&unk_1417E69C7, 36);
  v4 = v46;
  v52 = v45;
  sub_1414FA860(&v49, v45, v46);
  v5 = v49.m256i_i64[1];
  if ( v49.m256i_i64[0] == -1 )
  {
    if ( (unsigned __int8)sub_1404BC190(v49.m256i_i64[1]) )
    {
      *(_QWORD *)&v48[0] = v5;
      *(_QWORD *)&v43 = v52;
      *((_QWORD *)&v43 + 1) = v4;
      *(_QWORD *)&v54 = &v43;
      *((_QWORD *)&v54 + 1) = sub_1414FC840;
      *(_QWORD *)&v55 = v48;
      *((_QWORD *)&v55 + 1) = sub_1414FDBC0;
      sub_141509590(&v41, &unk_1417E6993, &v54);
      *(_QWORD *)(a1 + 24) = v42;
      *(_OWORD *)(a1 + 8) = v41;
      *(_QWORD *)a1 = 10;
      result = sub_14049AA50(*(_QWORD *)&v48[0]);
    }
    else
    {
      *(_QWORD *)(a1 + 8) = 0;
      *(_QWORD *)(a1 + 16) = 8;
      *(_QWORD *)(a1 + 24) = 0;
      *(_DWORD *)(a1 + 32) = 0;
      *(_QWORD *)a1 = -1;
      result = sub_14049AA50(v5);
    }
    goto LABEL_42;
  }
  v58 = v49.m256i_i64[1];
  v59 = v49.m256i_i64[0];
  v54 = *(_OWORD *)&v49.m256i_u64[1];
  v55 = 0;
  sub_1406DC350(&v49, &v54);
  if ( v49.m256i_i64[0] == -1 )
  {
    v51 = (_QWORD *)v49.m256i_i64[1];
    v47[0] = v52;
    v47[1] = v4;
    *(_QWORD *)&v54 = v47;
    *((_QWORD *)&v54 + 1) = sub_1414FC840;
    *(_QWORD *)&v55 = &v51;
    *((_QWORD *)&v55 + 1) = sub_14149BB80;
    sub_141509590(&v37, &unk_1417E03DC, &v54);
    *(_QWORD *)&v55 = v38;
    v54 = v37;
    v14 = *v51;
    v15 = *v51 == 1;
    v53 = v51;
    if ( v15 )
    {
      sub_14049AA50(v51[1]);
    }
    else if ( !v14 )
    {
      v16 = v53[2];
      if ( v16 )
        sub_140001660(v53[1], v16, 1);
    }
    result = sub_140001660(v53, 40, 8);
    v33 = v54;
    v43 = v54;
    v48[1] = v55;
    v48[0] = v54;
    *(_OWORD *)(a1 + 24) = v55;
    *(_OWORD *)(a1 + 8) = v33;
    *(_QWORD *)a1 = 10;
    v11 = v58;
    v12 = v59;
    if ( !v59 )
      goto LABEL_42;
LABEL_40:
    v34 = v11;
    v35 = v12;
LABEL_41:
    result = sub_140001660(v34, v35, 1);
    goto LABEL_42;
  }
  v50 = v49;
  v8 = v49.m256i_i64[2];
  if ( v49.m256i_i64[2] && v50.m256i_i32[6] != 1 )
  {
    *(_QWORD *)&v54 = &v50.m256i_i64[3];
    *((_QWORD *)&v54 + 1) = sub_141518C20;
    sub_141509590(&v39, &unk_1417E695B, &v54);
    *(_QWORD *)(a1 + 24) = v40;
    *(_OWORD *)(a1 + 8) = v39;
    *(_QWORD *)a1 = 10;
    v10 = *(_OWORD *)&v50.m256i_u64[1];
    v8 = v10 >> 64;
    v9 = v10;
    v11 = v58;
    v12 = v59;
LABEL_23:
    if ( v8 )
    {
      v29 = (_QWORD *)(v9 + 56);
      do
      {
        v30 = *(v29 - 7);
        if ( v30 )
          sub_140001660(*(v29 - 6), v30, 1);
        v31 = *(v29 - 1);
        if ( v31 != -1 && v31 )
          sub_140001660(*v29, v31, 1);
        v32 = *(v29 - 4);
        if ( v32 )
          sub_140001660(*(v29 - 3), v32, 1);
        v29 += 9;
        --v8;
      }
      while ( v8 );
    }
    result = v50.m256i_i64[0];
    if ( v50.m256i_i64[0] )
      result = sub_140001660(v50.m256i_i64[1], 72 * v50.m256i_i64[0], 8);
    if ( !v12 )
      goto LABEL_42;
    goto LABEL_40;
  }
  v17 = sub_1414DE170(v7, v6);
  v18 = v17;
  if ( *(_BYTE *)(v17 + 16) == 1 )
  {
    v19 = *(_QWORD *)v17;
    v20 = *(_QWORD *)(v18 + 8);
  }
  else
  {
    v19 = sub_1414F4390();
    *(_QWORD *)v18 = v19;
    *(_QWORD *)(v18 + 8) = v20;
    *(_BYTE *)(v18 + 16) = 1;
  }
  *(_QWORD *)v18 = v19 + 1;
  v55 = xmmword_1417DE6A0;
  v54 = *(_OWORD *)&off_1417DE690;
  v56 = v19;
  v57 = v20;
  v9 = v50.m256i_i64[1];
  result = 9 * v8;
  v21 = v50.m256i_i64[1] + 72 * v8;
  v22 = (_QWORD *)v50.m256i_i64[1];
  while ( v22 != (_QWORD *)v21 )
  {
    v23 = v22[1];
    v24 = v22[2];
    sub_1407B6700(v23, v24);
    if ( v25 )
    {
      if ( (unsigned __int8)sub_140A33B90(v22[4], v22[5]) )
      {
        result = sub_1402E3550(&v54, v23, v24);
        v22 += 9;
        if ( !(_BYTE)result )
          continue;
      }
    }
    nullsub_1(v26, v25, v27);
    v28 = (void *)sub_140001650(49, 1);
    if ( !v28 )
      sub_141733E1B(1, 49);
    qmemcpy(v28, "invalid no-account model restore journal contents", 49);
    *(_QWORD *)a1 = 10;
    *(_QWORD *)(a1 + 8) = 49;
    *(_QWORD *)(a1 + 16) = v28;
    *(_QWORD *)(a1 + 24) = 49;
    v11 = v58;
    v12 = v59;
    if ( *((_QWORD *)&v54 + 1) && 17LL * *((_QWORD *)&v54 + 1) != -33 )
      sub_140001660(v54 - 16LL * *((_QWORD *)&v54 + 1) - 16, 17LL * *((_QWORD *)&v54 + 1) + 33, 16);
    goto LABEL_23;
  }
  v36 = *(_OWORD *)v50.m256i_i8;
  *(_OWORD *)(a1 + 24) = *(_OWORD *)&v50.m256i_u64[2];
  *(_OWORD *)(a1 + 8) = v36;
  *(_QWORD *)a1 = -1;
  if ( *((_QWORD *)&v54 + 1) )
  {
    result = 16LL * *((_QWORD *)&v54 + 1);
    if ( 17LL * *((_QWORD *)&v54 + 1) != -33 )
      result = sub_140001660(v54 - result - 16, 17LL * *((_QWORD *)&v54 + 1) + 33, 16);
  }
  v35 = v59;
  v34 = v58;
  if ( v59 )
    goto LABEL_41;
LABEL_42:
  if ( v44 )
    return sub_140001660(v52, v44, 1);
  return result;
}
