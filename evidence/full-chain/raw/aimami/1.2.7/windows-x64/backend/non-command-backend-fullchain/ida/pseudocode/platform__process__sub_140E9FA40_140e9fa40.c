// win 1.2.7 | module src/platform/process.rs | ea 0x140e9fa40 | name sub_140E9FA40
// win 1.2.7 | module src/platform/process.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140E9FA40(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  char v6; // bl
  unsigned __int64 v7; // rsi
  int v8; // eax
  int v9; // edx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r12
  unsigned int v15; // r13d
  unsigned __int64 v16; // rbx
  unsigned __int32 v17; // edx
  unsigned __int32 v18; // r14d
  __int64 v19; // rax
  __int64 v20; // rdi
  __int64 v21; // rax
  int v22; // r15d
  unsigned __int8 v23; // al
  __int64 v24; // rcx
  __int64 v25; // rdx
  int v26; // ecx
  char v27; // r12
  __int64 v28; // r15
  __int64 v29; // r12
  __int64 v30; // rdi
  __int64 v31; // r8
  bool v32; // zf
  unsigned int v33; // edx
  bool v34; // cc
  bool v35; // cl
  __int64 v36; // rbx
  __int64 v37; // rdi
  __int64 v38; // r14
  __int64 v39; // rdx
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm2
  __int64 v43; // rdx
  __int64 v44; // rsi
  int v45; // r9d
  _OWORD *v46; // rax
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  __int128 v49; // xmm2
  int v50; // r9d
  _OWORD *v51; // rax
  __int128 v52; // xmm0
  __int128 v53; // xmm1
  __int128 v54; // xmm2
  _QWORD *v55; // rbx
  __int64 v56; // rdx
  __int128 v57; // rax
  __int64 v58; // rdi
  __int64 v59; // rsi
  __int64 v60; // rcx
  _QWORD *v61; // rbx
  __int64 v62; // rdx
  _QWORD *v63; // rax
  __int64 result; // rax
  __int128 v65; // [rsp+30h] [rbp-50h] BYREF
  __int64 v66; // [rsp+40h] [rbp-40h]
  __int128 v67; // [rsp+48h] [rbp-38h] BYREF
  __int128 v68; // [rsp+58h] [rbp-28h]
  __int128 v69; // [rsp+68h] [rbp-18h]
  __int128 v70; // [rsp+78h] [rbp-8h]
  __int128 v71; // [rsp+88h] [rbp+8h]
  __int128 v72; // [rsp+98h] [rbp+18h]
  unsigned __int64 v73; // [rsp+A8h] [rbp+28h]
  __int128 v74; // [rsp+B0h] [rbp+30h] BYREF
  __int128 v75; // [rsp+C0h] [rbp+40h]
  __int128 v76; // [rsp+D0h] [rbp+50h]
  __int128 v77; // [rsp+E0h] [rbp+60h]
  __int128 v78; // [rsp+F0h] [rbp+70h]
  __int128 v79; // [rsp+100h] [rbp+80h]
  char *v80; // [rsp+118h] [rbp+98h] BYREF
  __int64 v81; // [rsp+120h] [rbp+A0h]
  void *v82; // [rsp+128h] [rbp+A8h]
  __int64 (__fastcall *v83)(); // [rsp+130h] [rbp+B0h]
  bool *v84; // [rsp+138h] [rbp+B8h]
  __int64 (__fastcall *v85)(); // [rsp+140h] [rbp+C0h]
  __int128 *v86; // [rsp+148h] [rbp+C8h]
  __int64 (__fastcall *v87)(_QWORD, _QWORD); // [rsp+150h] [rbp+D0h]
  __int64 v88; // [rsp+158h] [rbp+D8h]
  __int64 v89; // [rsp+160h] [rbp+E0h] BYREF
  __int64 v90; // [rsp+168h] [rbp+E8h]
  __int64 v91; // [rsp+170h] [rbp+F0h]
  char v92; // [rsp+178h] [rbp+F8h]
  __int16 v93; // [rsp+179h] [rbp+F9h]
  unsigned __int32 v94; // [rsp+184h] [rbp+104h]
  __int64 v95; // [rsp+188h] [rbp+108h]
  __int64 v96; // [rsp+190h] [rbp+110h]
  __int64 v97; // [rsp+198h] [rbp+118h]
  __int64 v98; // [rsp+1A0h] [rbp+120h]
  __int64 v99; // [rsp+1A8h] [rbp+128h]
  __int128 v100; // [rsp+1B0h] [rbp+130h]
  __int64 v101; // [rsp+1C0h] [rbp+140h]
  __m256i v102; // [rsp+1C8h] [rbp+148h] BYREF
  __int128 v103; // [rsp+1E8h] [rbp+168h]
  __int128 v104; // [rsp+1F8h] [rbp+178h]
  __int128 v105; // [rsp+208h] [rbp+188h]
  __int128 v106; // [rsp+218h] [rbp+198h]
  __int64 v107; // [rsp+228h] [rbp+1A8h]
  __int64 v108; // [rsp+230h] [rbp+1B0h]
  __int64 v109; // [rsp+238h] [rbp+1B8h]
  __int64 v110; // [rsp+240h] [rbp+1C0h]
  char v111; // [rsp+24Dh] [rbp+1CDh] BYREF
  char v112; // [rsp+24Eh] [rbp+1CEh] BYREF
  unsigned __int8 v113; // [rsp+24Fh] [rbp+1CFh]
  __int64 v114; // [rsp+250h] [rbp+1D0h]
  bool v115; // [rsp+25Fh] [rbp+1DFh] BYREF
  __int64 v116; // [rsp+260h] [rbp+1E0h]

  v116 = -2;
  v113 = a4;
  v6 = a3;
  v7 = a2;
  v107 = a1;
  v8 = sub_14167FC00(a1, a2, a3, a4);
  v99 = 0;
  v73 = sub_1416A1240(v8, v9, v7, 0, (__int64)&off_141A55F50);
  v94 = v10;
  v89 = 0;
  v90 = 4;
  v91 = 0;
  v92 = v6;
  v93 = 0;
  v14 = -1;
  v15 = -1;
  while ( 1 )
  {
    v98 = v5;
    v97 = v14;
    v16 = sub_14167FC00(v11, v10, v12, v13);
    v18 = v17;
    v98 = v5;
    v97 = v14;
    sub_140EE9280(&v102);
    v19 = v102.m256i_i64[0];
    v74 = *(_OWORD *)&v102.m256i_u64[1];
    *(_QWORD *)&v75 = v102.m256i_i64[3];
    if ( v102.m256i_i64[0] != -1 )
    {
      v40 = v103;
      v41 = v104;
      v42 = v105;
      v43 = v107;
      *(_OWORD *)(v107 + 80) = v106;
      *(_OWORD *)(v43 + 64) = v42;
      *(_OWORD *)(v43 + 48) = v41;
      *(_OWORD *)(v43 + 32) = v40;
      *(_QWORD *)(v43 + 24) = v75;
      *(_OWORD *)(v43 + 8) = v74;
      *(_QWORD *)v43 = v19;
      goto LABEL_66;
    }
    v100 = v74;
    v20 = v75;
    v101 = v75;
    v21 = v5;
    v22 = DWORD2(v74);
    v114 = v21;
    v109 = v21;
    v110 = v14;
    v108 = v14;
    v23 = sub_140EC1B80(&v89, *((_QWORD *)&v74 + 1), v75);
    if ( v23 == 4 )
    {
      v24 = (unsigned int)(v99 + 1);
      if ( (_DWORD)v99 == -1 )
        v24 = 0xFFFFFFFFLL;
      v99 = v24;
    }
    v25 = v110;
    if ( v23 <= 4u )
    {
      v26 = 22;
      if ( _bittest(&v26, v23) )
      {
        v27 = HIBYTE(v93) + 1;
        if ( HIBYTE(v93) == 0xFF )
          v27 = -1;
        v112 = v27;
        v109 = v114;
        v108 = v110;
        sub_140EEFAC0((unsigned int)&v67, v22, v20, v113, a5);
        if ( (_DWORD)v67 == -1 )
        {
          v93 = 1;
          v28 = -1;
          if ( (unsigned __int64)(v110 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            sub_140001660(v114, v110, 1);
        }
        else
        {
          v79 = v72;
          v78 = v71;
          v77 = v70;
          v76 = v69;
          v75 = v68;
          v115 = (unsigned __int8)v27 >= 3u;
          v74 = v67;
          HIBYTE(v93) = v27;
          if ( *(_QWORD *)off_1421E6EC0 >= 2u )
          {
            v80 = &v112;
            v81 = (__int64)sub_1416B9630;
            v82 = &unk_141A55F68;
            v83 = sub_1416B9630;
            v84 = &v115;
            v85 = sub_1416BCC50;
            v86 = &v74;
            v87 = sub_14104A7D0;
            *(_QWORD *)&v104 = 2;
            *((_QWORD *)&v104 + 1) = aCodexmateLibPl_2;
            *(_QWORD *)&v105 = 32;
            *(_QWORD *)&v106 = &unk_141A55F69;
            *((_QWORD *)&v106 + 1) = &v80;
            v102.m256i_i64[0] = 0;
            v102.m256i_i64[1] = (__int64)aCodexmateLibPl_2;
            *(_OWORD *)&v102.m256i_u64[2] = 0x20u;
            *(_QWORD *)&v103 = aSrcPlatformPro_1;
            *((_QWORD *)&v103 + 1) = 23;
            *((_QWORD *)&v105 + 1) = 0x7F200000001LL;
            v96 = v114;
            v95 = v110;
            sub_1414D53A0(&v111, &v102);
          }
          v80 = nullptr;
          v81 = 1;
          v82 = nullptr;
          v102.m256i_i64[2] = 1610612768;
          v102.m256i_i64[0] = (__int64)&v80;
          v102.m256i_i64[1] = (__int64)&off_141A65938;
          if ( (unsigned __int8)sub_14104A7D0(&v74, &v102) )
            sub_141939040(
              (unsigned int)aADisplayImplem_10,
              55,
              (unsigned int)&v111,
              (unsigned int)&unk_141A58C98,
              (__int64)&off_141A659F0);
          v28 = (__int64)v80;
          v29 = v81;
          v30 = (__int64)v82;
          if ( (unsigned __int64)(v110 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            sub_140001660(v114, v110, 1);
          v88 = v30;
          if ( v115 )
          {
            v44 = *((_QWORD *)&v100 + 1);
            v20 = v101;
            v50 = 0;
            if ( v28 != -1 )
              v50 = v29;
            v96 = v29;
            v95 = v28;
            sub_140EECCE0((unsigned int)&v102, DWORD2(v100), v101, v50, v88);
            v51 = (_OWORD *)v107;
            *(_OWORD *)(v107 + 80) = v106;
            v51[4] = v105;
            v52 = *(_OWORD *)v102.m256i_i8;
            v53 = *(_OWORD *)&v102.m256i_u64[2];
            v54 = v103;
            v51[3] = v104;
            v51[2] = v54;
            v51[1] = v53;
            *v51 = v52;
            v109 = v29;
            v108 = v28;
            sub_140E97700(&v74);
            v114 = v29;
            v14 = v28;
            v5 = v114;
            if ( v20 )
              goto LABEL_48;
            goto LABEL_64;
          }
          v109 = v29;
          v108 = v28;
          sub_140E97700(&v74);
          v114 = v29;
        }
        v20 = v101;
        v25 = v28;
      }
    }
    v102.m256i_i64[0] = v16;
    v102.m256i_i32[2] = v18;
    v31 = v114;
    if ( v20 )
    {
      v15 = -1;
    }
    else
    {
      v32 = v15 == -1;
      if ( v15 == -1 )
        v15 = v18;
      if ( v32 )
        v7 = v16;
      v109 = v114;
      v110 = v25;
      v108 = v25;
      if ( sub_14167FA50(&v102, v7, v15) )
      {
        v25 = v110;
        v31 = v114;
LABEL_53:
        v109 = v31;
        v108 = v25;
        sub_140EEDA50(&v102);
        *(_QWORD *)&v57 = v102.m256i_i64[0];
        *((_QWORD *)&v57 + 1) = v102.m256i_i64[1] + 32 * v102.m256i_i64[2];
        v102.m256i_i64[0] = v102.m256i_i64[1];
        *(_OWORD *)&v102.m256i_u64[2] = v57;
        v109 = v114;
        v108 = v110;
        sub_14038F600((unsigned __int64 *)&v67, &v102);
        v58 = v68;
        if ( (_QWORD)v68 )
        {
          v59 = *((_QWORD *)&v67 + 1);
          sub_140D1EE10((unsigned int)&v102, DWORD2(v67), v68, (unsigned int)&unk_141A55FEA, 3);
          *(_QWORD *)&v75 = v102.m256i_i64[2];
          v74 = *(_OWORD *)v102.m256i_i8;
          v102.m256i_i64[0] = (__int64)&v74;
          v102.m256i_i64[1] = (__int64)sub_1400015F0;
          sub_1416ABFD0(&v65, &unk_141A55FED, &v102);
          if ( (_QWORD)v74 )
            sub_140001660(*((_QWORD *)&v74 + 1), v74, 1);
          v60 = v107;
          *(_QWORD *)(v107 + 24) = v66;
          *(_OWORD *)(v60 + 8) = v65;
          *(_QWORD *)v60 = 10;
          v61 = (_QWORD *)(v59 + 8);
          v14 = v110;
          v5 = v114;
          do
          {
            v62 = *(v61 - 1);
            if ( v62 )
              sub_140001660(*v61, v62, 1);
            v61 += 3;
            --v58;
          }
          while ( v58 );
        }
        else
        {
          v63 = (_QWORD *)v107;
          *(_DWORD *)(v107 + 8) = v99;
          *v63 = -1;
          v59 = *((_QWORD *)&v67 + 1);
          v14 = v110;
          v5 = v114;
        }
        if ( (_QWORD)v67 )
          sub_140001660(v59, 24 * v67, 8);
        v44 = *((_QWORD *)&v100 + 1);
        goto LABEL_64;
      }
      v34 = v33 <= 0x29B926FF;
      v25 = v110;
      v31 = v114;
      if ( !v34 )
        goto LABEL_53;
    }
    v35 = v16 >= v73;
    if ( v16 == v73 )
      v35 = v18 >= v94;
    if ( v35 )
      break;
    v109 = v31;
    v14 = v25;
    v108 = v25;
    sub_141696800(0, 80000000);
    v36 = *((_QWORD *)&v100 + 1);
    v5 = v114;
    if ( v20 )
    {
      v37 = 32 * v20;
      v38 = 0;
      do
      {
        v39 = *(_QWORD *)(v36 + v38 + 8);
        if ( v39 )
          sub_140001660(*(_QWORD *)(v36 + v38 + 16), v39, 1);
        v38 += 32;
      }
      while ( v37 != v38 );
    }
    v10 = v100;
    if ( (_QWORD)v100 )
      sub_140001660(v36, 32 * v100, 8);
  }
  v44 = *((_QWORD *)&v100 + 1);
  v45 = 0;
  if ( v25 != -1 )
    v45 = v31;
  v109 = v31;
  v14 = v25;
  v108 = v25;
  sub_140EECCE0((unsigned int)&v102, DWORD2(v100), v20, v45, v88);
  v46 = (_OWORD *)v107;
  *(_OWORD *)(v107 + 80) = v106;
  v46[4] = v105;
  v47 = *(_OWORD *)v102.m256i_i8;
  v48 = *(_OWORD *)&v102.m256i_u64[2];
  v49 = v103;
  v46[3] = v104;
  v46[2] = v49;
  v46[1] = v48;
  *v46 = v47;
  v5 = v114;
  if ( v20 )
  {
LABEL_48:
    v55 = (_QWORD *)(v44 + 16);
    do
    {
      v56 = *(v55 - 1);
      if ( v56 )
        sub_140001660(*v55, v56, 1);
      v55 += 4;
      --v20;
    }
    while ( v20 );
  }
LABEL_64:
  if ( (_QWORD)v100 )
    sub_140001660(v44, 32 * v100, 8);
LABEL_66:
  result = v14 - 1;
  if ( (unsigned __int64)(v14 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    result = sub_140001660(v5, v14, 1);
  if ( v89 )
    return sub_140001660(v90, 4 * v89, 4);
  return result;
}
