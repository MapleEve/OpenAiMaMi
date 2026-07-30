// win 1.2.4 delta | codexmate_lib4core5relay23codex_thread_visibility4 @ 0x14054d260
// [FULL decompile]
// win 1.2.4 delta | codexmate_lib4core5relay23codex_thread_visibility4 | (win-native 锚点: 命令名串/跨平台签名)
_QWORD *__fastcall sub_14054D260(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  __int64 v8; // rbx
  _QWORD *v9; // r12
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // r13
  __int64 v17; // r12
  __int64 v18; // r12
  _QWORD *v19; // r15
  __int64 v20; // rdx
  __int64 v21; // rdx
  __int64 v22; // r13
  __int64 v23; // rax
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  __int128 v26; // xmm2
  __int64 v27; // r15
  _QWORD *v28; // r12
  __int64 v29; // rdx
  __int64 v30; // rdx
  _QWORD *v31; // rdx
  __int64 v32; // r13
  __int64 v33; // rax
  __int128 v34; // xmm0
  __int128 v35; // xmm1
  __int128 v36; // xmm2
  __int64 v37; // rsi
  _QWORD *v38; // rbx
  __int64 v39; // rsi
  _QWORD *v40; // rdi
  __int64 v41; // rdx
  _QWORD v43[12]; // [rsp+38h] [rbp-48h] BYREF
  __int128 v44; // [rsp+98h] [rbp+18h]
  __int128 v45; // [rsp+A8h] [rbp+28h]
  __int128 v46; // [rsp+B8h] [rbp+38h]
  __int128 v47; // [rsp+C8h] [rbp+48h]
  __int128 v48; // [rsp+D8h] [rbp+58h]
  __int128 v49; // [rsp+E8h] [rbp+68h]
  _QWORD *v50; // [rsp+F8h] [rbp+78h] BYREF
  __m256i v51; // [rsp+100h] [rbp+80h]
  __int128 v52; // [rsp+120h] [rbp+A0h]
  __int128 v53; // [rsp+130h] [rbp+B0h]
  __int128 v54; // [rsp+140h] [rbp+C0h]
  __int128 v55; // [rsp+150h] [rbp+D0h]
  _QWORD v56[3]; // [rsp+160h] [rbp+E0h] BYREF
  __int64 v57; // [rsp+178h] [rbp+F8h]
  __int64 v58; // [rsp+180h] [rbp+100h]
  __int64 v59; // [rsp+190h] [rbp+110h]
  __int64 v60; // [rsp+198h] [rbp+118h]
  __int64 v61; // [rsp+1A8h] [rbp+128h]
  __int64 v62; // [rsp+1B0h] [rbp+130h]
  _BYTE v63[104]; // [rsp+220h] [rbp+1A0h] BYREF
  char v64[200]; // [rsp+288h] [rbp+208h] BYREF
  __m256i v65; // [rsp+350h] [rbp+2D0h]
  __int128 v66; // [rsp+370h] [rbp+2F0h]
  __int128 v67; // [rsp+380h] [rbp+300h]
  __int128 v68; // [rsp+390h] [rbp+310h]
  __int128 v69; // [rsp+3A0h] [rbp+320h]
  __int128 v70; // [rsp+3B8h] [rbp+338h] BYREF
  __int64 v71; // [rsp+3C8h] [rbp+348h]
  __m256i v72; // [rsp+3D0h] [rbp+350h] BYREF
  __int128 v73; // [rsp+3F0h] [rbp+370h]
  __int128 v74; // [rsp+400h] [rbp+380h]
  __int128 v75; // [rsp+410h] [rbp+390h]
  __int128 v76; // [rsp+420h] [rbp+3A0h]
  __int128 v77; // [rsp+430h] [rbp+3B0h] BYREF
  __m256i v78; // [rsp+440h] [rbp+3C0h]
  __int128 v79; // [rsp+460h] [rbp+3E0h]
  __int64 v80; // [rsp+470h] [rbp+3F0h]
  __int64 v81; // [rsp+478h] [rbp+3F8h]
  _QWORD *v82; // [rsp+480h] [rbp+400h]
  __int128 v83; // [rsp+488h] [rbp+408h] BYREF
  __int64 v84; // [rsp+498h] [rbp+418h]
  __int128 v85; // [rsp+4A0h] [rbp+420h] BYREF
  __m256i v86; // [rsp+4B0h] [rbp+430h]
  __int64 v87; // [rsp+4D0h] [rbp+450h] BYREF
  __int64 v88; // [rsp+4D8h] [rbp+458h]
  __int64 v89; // [rsp+4E0h] [rbp+460h]
  __int128 *v90; // [rsp+4E8h] [rbp+468h]
  _QWORD *v91; // [rsp+4F0h] [rbp+470h]
  __int64 v92; // [rsp+4F8h] [rbp+478h] BYREF
  __int64 v93; // [rsp+500h] [rbp+480h]
  __int64 v94; // [rsp+508h] [rbp+488h]
  __int64 v95; // [rsp+510h] [rbp+490h]

  v95 = -2;
  v3 = a2;
  v82 = a1;
  v87 = 0;
  v88 = 8;
  v89 = 0;
  v4 = a2 + 152 * a3;
  v90 = &v77;
  v81 = a2;
  while ( v3 != v4 )
  {
    v7 = *(_QWORD *)(v4 - 144);
    v8 = *(_QWORD *)(v4 - 136);
    sub_140530AD0((unsigned int)v63, v7, v8, *(_QWORD *)(v4 - 112), *(_QWORD *)(v4 - 104));
    v65 = *(__m256i *)&v63[8];
    v66 = *(_OWORD *)&v63[40];
    v67 = *(_OWORD *)&v63[56];
    v68 = *(_OWORD *)&v63[72];
    v69 = *(_OWORD *)&v63[88];
    if ( *(_QWORD *)v63 == -2 )
    {
      v72 = v65;
      v73 = v66;
      v74 = v67;
      v75 = v68;
      v76 = v69;
      goto LABEL_78;
    }
    v91 = *(_QWORD **)v63;
    sub_1416F15C0(v43, v64, 192);
    if ( v91 == (_QWORD *)-1LL )
    {
      *(_QWORD *)&v85 = v7;
      *((_QWORD *)&v85 + 1) = v8;
      *(_QWORD *)&v77 = &v85;
      *((_QWORD *)&v77 + 1) = sub_1414FC840;
      sub_141509590(&v63[8], &unk_1417E0429, v90);
      *(_QWORD *)v63 = 9;
      *(_OWORD *)&v72.m256i_u64[2] = *(_OWORD *)&v63[16];
      v73 = *(_OWORD *)&v63[32];
      v74 = *(_OWORD *)&v63[48];
      v75 = *(_OWORD *)&v63[64];
      v76 = *(_OWORD *)&v63[80];
      *(_OWORD *)v72.m256i_i8 = __PAIR128__(*(unsigned __int64 *)&v63[8], 9);
      goto LABEL_78;
    }
    v9 = v91;
    sub_1416F15C0(v56, v43, 192);
    v51 = v65;
    v52 = v66;
    v53 = v67;
    v54 = v68;
    v55 = v69;
    v50 = v9;
    *(_OWORD *)&v63[80] = v49;
    *(_OWORD *)&v63[64] = v48;
    *(_OWORD *)&v63[48] = v47;
    *(_OWORD *)&v63[32] = v46;
    *(_OWORD *)&v63[16] = v45;
    *(_OWORD *)v63 = v44;
    nullsub_1(v11, v10, v12);
    v13 = sub_140001650(144, 8);
    if ( !v13 )
      sub_141733E1B(8, 144);
    LODWORD(v14) = v13;
    v92 = 2;
    v93 = v13;
    v94 = 0;
    if ( *(_QWORD *)(v4 - 96) == -1 )
      goto LABEL_16;
    v15 = *(_QWORD *)&v63[16];
    if ( *(_QWORD *)&v63[16] != *(_QWORD *)(v4 - 56)
      || (unsigned int)sub_1416F1C50(*(_QWORD *)&v63[8], *(_QWORD *)(v4 - 64), *(_QWORD *)&v63[16]) )
    {
      if ( v15 != *(_QWORD *)(v4 - 80) || (unsigned int)sub_1416F1C50(*(_QWORD *)&v63[8], *(_QWORD *)(v4 - 88), v15) )
      {
        *(_QWORD *)&v83 = v7;
        *((_QWORD *)&v83 + 1) = v8;
        *(_QWORD *)&v85 = &v83;
        *((_QWORD *)&v85 + 1) = sub_1414FC840;
        sub_141509590(v90, &unk_1417E69EB, &v85);
        goto LABEL_22;
      }
LABEL_16:
      v16 = 0;
      if ( *(_QWORD *)(v4 - 48) == -1 )
        goto LABEL_32;
      goto LABEL_17;
    }
    sub_1415099A0(&v85, v63);
    *(_OWORD *)&v86.m256i_u64[1] = *(_OWORD *)&v63[24];
    v86.m256i_i16[12] = *(_WORD *)&v63[40];
    sub_1415099A0(&v83, v4 - 96);
    v78 = v86;
    v77 = v85;
    v80 = v84;
    v79 = v83;
    v22 = v94;
    if ( v94 == v92 )
      sub_141709BA0(&v92);
    v14 = v93;
    v23 = 9 * v22;
    *(_QWORD *)(v93 + 8 * v23 + 64) = v80;
    v24 = v77;
    v25 = *(_OWORD *)v78.m256i_i8;
    v26 = *(_OWORD *)&v78.m256i_u64[2];
    *(_OWORD *)(v14 + 8 * v23 + 48) = v79;
    *(_OWORD *)(v14 + 8 * v23 + 32) = v26;
    *(_OWORD *)(v14 + 8 * v23 + 16) = v25;
    *(_OWORD *)(v14 + 8 * v23) = v24;
    v16 = v22 + 1;
    v94 = v16;
    if ( *(_QWORD *)(v4 - 48) == -1 )
      goto LABEL_32;
LABEL_17:
    v17 = *(_QWORD *)&v63[64];
    if ( *(_QWORD *)&v63[64] != *(_QWORD *)(v4 - 8)
      || (unsigned int)sub_1416F1C50(*(_QWORD *)&v63[56], *(_QWORD *)(v4 - 16), *(_QWORD *)&v63[64]) )
    {
      if ( v17 != *(_QWORD *)(v4 - 32) || (unsigned int)sub_1416F1C50(*(_QWORD *)&v63[56], *(_QWORD *)(v4 - 40), v17) )
      {
        *(_QWORD *)&v83 = v7;
        *((_QWORD *)&v83 + 1) = v8;
        *(_QWORD *)&v85 = &v83;
        *((_QWORD *)&v85 + 1) = sub_1414FC840;
        sub_141509590(v90, &unk_1417E6A2E, &v85);
LABEL_22:
        v72.m256i_i64[3] = *((_QWORD *)v90 + 2);
        *(_OWORD *)&v72.m256i_u64[1] = *v90;
        v18 = v94;
        v72.m256i_i64[0] = 10;
        if ( v94 )
        {
          v19 = (_QWORD *)(v93 + 56);
          do
          {
            v20 = *(v19 - 7);
            if ( v20 )
              sub_140001660(*(v19 - 6), v20, 1);
            v21 = *(v19 - 1);
            if ( v21 )
              sub_140001660(*v19, v21, 1);
            v19 += 9;
            --v18;
          }
          while ( v18 );
        }
LABEL_52:
        if ( v92 )
          sub_140001660(v93, 72 * v92, 8);
        v3 = v81;
        if ( *(_QWORD *)v63 )
          sub_140001660(*(_QWORD *)&v63[8], *(_QWORD *)v63, 1);
        if ( *(_QWORD *)&v63[48] )
          sub_140001660(*(_QWORD *)&v63[56], *(_QWORD *)&v63[48], 1);
        v31 = v91;
        if ( !v91 )
          goto LABEL_60;
        goto LABEL_59;
      }
LABEL_32:
      if ( !v16 )
        goto LABEL_51;
      goto LABEL_33;
    }
    sub_1415099A0(&v85, &v63[48]);
    *(_OWORD *)&v86.m256i_u64[1] = *(_OWORD *)&v63[72];
    v86.m256i_i16[12] = *(_WORD *)&v63[88];
    sub_1415099A0(&v83, v4 - 48);
    v78 = v86;
    v77 = v85;
    v80 = v84;
    v79 = v83;
    v32 = v94;
    if ( v94 == v92 )
      sub_141709BA0(&v92);
    v14 = v93;
    v33 = 9 * v32;
    *(_QWORD *)(v93 + 8 * v33 + 64) = v80;
    v34 = v77;
    v35 = *(_OWORD *)v78.m256i_i8;
    v36 = *(_OWORD *)&v78.m256i_u64[2];
    *(_OWORD *)(v14 + 8 * v33 + 48) = v79;
    *(_OWORD *)(v14 + 8 * v33 + 32) = v36;
    *(_OWORD *)(v14 + 8 * v33 + 16) = v35;
    *(_OWORD *)(v14 + 8 * v33) = v34;
    v16 = v32 + 1;
    v94 = v16;
    if ( !v16 )
    {
LABEL_51:
      v72.m256i_i64[0] = -1;
      goto LABEL_52;
    }
LABEL_33:
    sub_14054C8F0((unsigned int)&v72, v7, v8, v14, v16, 1);
    v27 = v94;
    if ( v94 )
    {
      v28 = (_QWORD *)(v93 + 56);
      do
      {
        v29 = *(v28 - 7);
        if ( v29 )
          sub_140001660(*(v28 - 6), v29, 1);
        v30 = *(v28 - 1);
        if ( v30 )
          sub_140001660(*v28, v30, 1);
        v28 += 9;
        --v27;
      }
      while ( v27 );
    }
    if ( v92 )
      sub_140001660(v93, 72 * v92, 8);
    v3 = v81;
    if ( *(_QWORD *)v63 )
      sub_140001660(*(_QWORD *)&v63[8], *(_QWORD *)v63, 1);
    if ( *(_QWORD *)&v63[48] )
      sub_140001660(*(_QWORD *)&v63[56], *(_QWORD *)&v63[48], 1);
    v31 = v91;
    if ( !v91 )
      goto LABEL_60;
LABEL_59:
    sub_140001660(v51.m256i_i64[0], v31, 1);
LABEL_60:
    if ( v51.m256i_i64[3] )
      sub_140001660(v52, v51.m256i_i64[3], 1);
    if ( (_QWORD)v53 )
      sub_140001660(*((_QWORD *)&v53 + 1), v53, 1);
    if ( *((_QWORD *)&v54 + 1) != -1 && *((_QWORD *)&v54 + 1) )
      sub_140001660(v55, *((_QWORD *)&v54 + 1), 1);
    if ( v56[0] != -1 && v56[0] )
      sub_140001660(v56[1], v56[0], 1);
    if ( v57 )
      sub_140001660(v58, v57, 1);
    if ( v59 != -1 && v59 )
      sub_140001660(v60, v59, 1);
    if ( v61 != -1 && v61 )
      sub_140001660(v62, v61, 1);
LABEL_78:
    if ( v72.m256i_i64[0] != -1 )
    {
      *(_OWORD *)&v63[80] = v76;
      *(_OWORD *)&v63[64] = v75;
      *(_OWORD *)&v63[48] = v74;
      *(_OWORD *)&v63[32] = v73;
      *(__m256i *)v63 = v72;
      v43[0] = v7;
      v43[1] = v8;
      v50 = v43;
      v51.m256i_i64[0] = (__int64)sub_1414FC840;
      v51.m256i_i64[1] = (__int64)v63;
      v51.m256i_i64[2] = (__int64)sub_1406A4FE0;
      sub_141509590(&v70, &unk_1417DF076, &v50);
      v37 = v89;
      if ( v89 == v87 )
        sub_14170A000(&v87);
      v5 = v88;
      v6 = 3 * v37;
      *(_QWORD *)(v88 + 8 * v6 + 16) = v71;
      *(_OWORD *)(v5 + 8 * v6) = v70;
      v89 = v37 + 1;
      sub_14049A140(v63);
    }
    v4 -= 152;
  }
  if ( v89 )
  {
    sub_1408AE040((unsigned int)v63, v88, v89, (unsigned int)&aCodeSwitchRoll[35], 3);
    v38 = v82;
    v82[3] = *(_QWORD *)&v63[16];
    *(_OWORD *)(v38 + 1) = *(_OWORD *)v63;
    v39 = v89;
    *v38 = 10;
    if ( v39 )
    {
      v40 = (_QWORD *)(v88 + 8);
      do
      {
        v41 = *(v40 - 1);
        if ( v41 )
          sub_140001660(*v40, v41, 1);
        v40 += 3;
        --v39;
      }
      while ( v39 );
    }
  }
  else
  {
    v38 = v82;
    *v82 = -1;
  }
  if ( v87 )
    sub_140001660(v88, 24 * v87, 8);
  return v38;
}
