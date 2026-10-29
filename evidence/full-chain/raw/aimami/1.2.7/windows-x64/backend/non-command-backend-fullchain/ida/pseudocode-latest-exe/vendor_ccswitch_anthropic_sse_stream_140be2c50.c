_QWORD *__fastcall sub_140BE2C50(_QWORD *a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rsi
  __int64 *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdx
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  char *v12; // rcx
  bool v13; // zf
  unsigned __int8 v14; // di
  char v15; // bl
  char *v16; // rax
  char *v17; // rcx
  char *v18; // rax
  char *v19; // rcx
  _QWORD *v20; // rax
  char *v21; // rax
  char *v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // r9
  __int64 v32; // rcx
  _OWORD *v33; // r8
  __int128 v34; // kr10_16
  __int128 v35; // xmm0
  __int64 v36; // r14
  __int128 v37; // xmm0
  __int64 v39; // r15
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 v42; // r14
  __int64 v43; // r15
  __int64 v44; // rbx
  __int64 v45; // rdx
  __int64 v46; // rcx
  unsigned __int64 v47; // r13
  _QWORD *v48; // r12
  unsigned __int64 v49; // r14
  char *v50; // r8
  char *v51; // r8
  __int64 v52; // rbx
  __int64 v53; // r15
  __int64 v54; // rax
  bool v55; // cf
  __int64 v56; // rax
  __int64 v57; // rdx
  char *v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rsi
  __int64 v63; // rcx
  __int128 v64; // xmm1
  __int64 v65; // rcx
  __int128 v66; // xmm1
  __int64 v67; // rdx
  __int128 v68; // xmm1
  __int64 v69; // rax
  __int64 v70; // rdx
  __int64 v71; // rcx
  char *v72; // rax
  __int64 v73; // rcx
  __int64 v74; // rdx
  _OWORD *v75; // rdi
  __int64 v76; // rax
  __int128 v77; // xmm1
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rdx
  __int128 v82; // rax
  __int128 *v83; // rdi
  __int128 v84; // xmm0
  __int64 v85; // rax
  __int128 *v86; // rax
  unsigned __int64 v87; // rdx
  __int64 v88; // rcx
  __int64 v89; // r8
  __int128 *v90; // rax
  unsigned __int64 v91; // rdx
  __int64 v92; // rcx
  __int64 v93; // r8
  __int64 v94; // rdi
  __int64 v95; // r14
  __int64 v96; // rbx
  __int64 v97; // rdx
  __int128 *v98; // rax
  unsigned __int64 v99; // rdx
  __int64 v100; // rcx
  _OWORD *v101; // rbx
  __int64 v102; // rax
  __int128 v103; // xmm1
  __int64 v104; // r8
  __int128 *v105; // rax
  unsigned __int64 v106; // rdx
  __int64 v107; // rcx
  _QWORD *v108; // rdx
  __int128 v109; // xmm0
  __int128 v110; // xmm0
  __int128 v111; // xmm1
  __int64 v112; // rax
  __int64 v113; // rcx
  __int64 v114; // rcx
  __int128 *v115; // rdx
  __int128 v116; // xmm0
  __int128 v117; // xmm0
  __int128 v118; // xmm1
  __int64 v119; // rax
  __int64 v120; // rcx
  __int64 v121; // rax
  __int128 *v122; // rdx
  __int128 v123; // xmm0
  __int128 v124; // xmm0
  __int128 v125; // xmm1
  __int64 v126; // rax
  __int64 v127; // rcx
  _QWORD *v128; // rdx
  __int128 v129; // xmm0
  __int128 v130; // xmm0
  __int128 v131; // xmm1
  __int64 v132; // rax
  __int64 v133; // rcx
  __int64 v134; // rax
  __int64 v135; // rcx
  __int64 v136; // rdx
  __int64 v137; // rdx
  _OWORD v138[2]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v139; // [rsp+48h] [rbp-38h]
  _BYTE v140[40]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v141; // [rsp+78h] [rbp-8h]
  __int128 v142; // [rsp+80h] [rbp+0h] BYREF
  __int128 v143; // [rsp+90h] [rbp+10h]
  __int128 v144; // [rsp+A0h] [rbp+20h]
  __int64 v145; // [rsp+128h] [rbp+A8h]
  __int64 v146; // [rsp+130h] [rbp+B0h]
  __int64 v147; // [rsp+138h] [rbp+B8h] BYREF
  _QWORD v148[2]; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v149; // [rsp+150h] [rbp+D0h] BYREF
  __int64 v150; // [rsp+160h] [rbp+E0h]
  char v151; // [rsp+16Fh] [rbp+EFh]
  char *v152; // [rsp+170h] [rbp+F0h]
  __int64 v153; // [rsp+178h] [rbp+F8h]
  __int64 v154; // [rsp+180h] [rbp+100h]

  v154 = -2;
  v3 = a1;
  if ( *(_BYTE *)(a2 + 1024) )
  {
    *a1 = 0;
    return v3;
  }
  *(_QWORD *)&v138[0] = 0;
  v6 = (__int64 *)sub_1411D8DB0();
  v141 = *v6;
  *v6 = (__int64)v138;
  v7 = *(unsigned __int8 *)(a2 + 824);
  v153 = a2;
  switch ( v7 )
  {
    case 0LL:
      *(_QWORD *)(a2 + 272) = 0;
      *(_QWORD *)(a2 + 280) = 1;
      *(_OWORD *)(a2 + 288) = 0;
      *(_QWORD *)(a2 + 304) = 1;
      *(_QWORD *)(a2 + 312) = 0;
      *(_DWORD *)(a2 + 826) = 0x10000;
      sub_1419234B0(&v142, a2 + 104, 168);
      sub_1411673D0(a2 + 320, &v142);
      v8 = v153;
      *(_BYTE *)(v153 + 825) = 0;
      *(_BYTE *)(v8 + 828) = 0;
      v9 = *(_OWORD *)(v8 + 16);
      v10 = *(_OWORD *)(v8 + 32);
      v11 = *(_OWORD *)(v8 + 48);
      *(_OWORD *)(v8 + 640) = *(_OWORD *)v8;
      *(_OWORD *)(v8 + 656) = v9;
      *(_OWORD *)(v8 + 672) = v10;
      *(_OWORD *)(v8 + 688) = v11;
      *(_OWORD *)(v8 + 704) = *(_OWORD *)(v8 + 64);
      *(_OWORD *)(v8 + 720) = *(_OWORD *)(v8 + 80);
      *(_QWORD *)(v8 + 736) = *(_QWORD *)(v8 + 96);
      *(_QWORD *)(v8 + 744) = v8 + 640;
      goto LABEL_85;
    case 1LL:
      sub_14196B990(&off_141A88C50);
    case 2LL:
      sub_14196B9B0(&off_141A88C50);
    case 3LL:
      v20 = *(_QWORD **)(a2 + 832);
      goto LABEL_86;
    case 4LL:
      v19 = (char *)(a2 + 888);
      v13 = *(_BYTE *)(a2 + 888) == 0;
      v147 = a2 + 888;
      if ( v13 )
        goto LABEL_44;
      break;
    case 5LL:
      v17 = (char *)(a2 + 840);
      v13 = *(_BYTE *)(a2 + 840) == 0;
      *(_QWORD *)&v142 = a2 + 840;
      if ( !v13 )
        goto LABEL_11;
      goto LABEL_96;
    case 6LL:
      v21 = (char *)(a2 + 832);
      v13 = *(_BYTE *)(a2 + 832) == 0;
      *(_QWORD *)&v149 = a2 + 832;
      if ( v13 )
        goto LABEL_143;
      goto LABEL_136;
    case 7LL:
      v22 = (char *)(a2 + 840);
      v13 = *(_BYTE *)(a2 + 840) == 0;
      v147 = a2 + 840;
      if ( v13 )
        goto LABEL_129;
      goto LABEL_122;
    case 8LL:
      v16 = (char *)(a2 + 832);
      v13 = *(_BYTE *)(a2 + 832) == 0;
      *(_QWORD *)&v149 = a2 + 832;
      if ( v13 )
        goto LABEL_172;
      goto LABEL_165;
    case 9LL:
      v18 = (char *)(a2 + 832);
      v13 = *(_BYTE *)(a2 + 832) == 0;
      *(_QWORD *)&v149 = a2 + 832;
      if ( v13 )
        goto LABEL_158;
      goto LABEL_151;
    case 10LL:
      v12 = (char *)(a2 + 832);
      v13 = *(_BYTE *)(a2 + 832) == 0;
      *(_QWORD *)&v142 = a2 + 832;
      if ( !v13 )
        goto LABEL_6;
      goto LABEL_175;
  }
  while ( 1 )
  {
    v152 = v19;
    if ( (unsigned __int8)sub_140AA0BC0(&off_141A8A480, &v147) )
      break;
    if ( *(_QWORD *)v152 )
    {
      v29 = *(_QWORD *)(v153 + 896);
      if ( v29 )
      {
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v29 + 32))(
          v153 + 920,
          *(_QWORD *)(v153 + 904),
          *(_QWORD *)(v153 + 912));
      }
      else
      {
        v30 = *(_QWORD *)(v153 + 904) & 3LL;
        if ( (unsigned int)(v30 - 2) >= 2 && v30 )
        {
          v148[0] = *(_QWORD *)(v153 + 904) - 1LL;
          LOBYTE(v147) = 3;
          sub_1416EBAD0(v148);
        }
      }
    }
LABEL_44:
    v31 = v153;
    v32 = v153 + 960;
    v33 = (_OWORD *)(v153 + 992);
    *((_QWORD *)&v34 + 1) = *(_QWORD *)(v153 + 968);
    if ( *((_QWORD *)&v34 + 1) == *(_QWORD *)(v153 + 984) )
      goto LABEL_53;
    while ( 1 )
    {
      *(_QWORD *)(v31 + 968) = *((_QWORD *)&v34 + 1) + 32LL;
      v35 = **((_OWORD **)&v34 + 1);
      v33[1] = *(_OWORD *)(*((_QWORD *)&v34 + 1) + 16LL);
      *v33 = v35;
      if ( *(_QWORD *)(v31 + 992) )
        break;
      while ( 1 )
      {
        sub_1402327C0(v32);
        v39 = v153;
        if ( *(_BYTE *)(v153 + 832) )
        {
          *(_BYTE *)(v153 + 825) = 1;
          *(_BYTE *)(v39 + 827) = 0;
          v40 = *(_QWORD *)(v39 + 864);
          if ( v40 )
            sub_140001660(*(_QWORD *)(v39 + 872), v40, 1);
          goto LABEL_83;
        }
        *(_BYTE *)(v153 + 827) = 0;
        v41 = *(_QWORD *)(v39 + 864);
        if ( v41 )
          sub_140001660(*(_QWORD *)(v39 + 872), v41, 1);
LABEL_59:
        v42 = *(_QWORD *)(v39 + 280);
        v43 = *(_QWORD *)(v39 + 288);
        sub_1416E1760((unsigned int)&v142, v42, v43, (unsigned int)asc_141A8A078, 4);
        sub_140BECF00(&v149, &v142);
        v152 = *((char **)&v149 + 1);
        v44 = v149;
        sub_1416E1760((unsigned int)&v142, v42, v43, (unsigned int)&asc_141A8A078[4], 2);
        sub_140BECF00(&v149, &v142);
        v39 = v153;
        v47 = v153 + 272;
        v48 = (_QWORD *)(v153 + 840);
        v49 = 4;
        if ( (_BYTE)v149 )
        {
          v50 = v152;
          LOBYTE(v46) = v44 & (*((_QWORD *)&v149 + 1) >= (unsigned __int64)v152);
          v45 = 1;
          if ( !(_BYTE)v46 )
          {
            v44 = 1;
            v50 = *((char **)&v149 + 1);
          }
          v152 = v50;
          v49 = 2LL * (unsigned __int8)v46 + 2;
        }
        if ( !v44 )
        {
          *v48 = -1;
          while ( 1 )
          {
LABEL_83:
            v63 = v39 + 952;
            if ( *(_BYTE *)(v39 + 825) )
            {
              (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v39 + 928) + 32LL))(
                v63,
                *(_QWORD *)(v39 + 936),
                *(_QWORD *)(v39 + 944));
              goto LABEL_99;
            }
            (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)(v39 + 928) + 32LL))(
              v63,
              *(_QWORD *)(v39 + 936),
              *(_QWORD *)(v39 + 944));
LABEL_85:
            v20 = (_QWORD *)(v153 + 744);
            *(_QWORD *)(v153 + 832) = v153 + 744;
LABEL_86:
            sub_14075C750(v140, *v20, a3);
            if ( *(_DWORD *)v140 == 2 )
            {
              v14 = 1;
              v15 = 3;
              goto LABEL_48;
            }
            v64 = *(_OWORD *)&v140[16];
            v65 = v153;
            *(_OWORD *)(v153 + 752) = *(_OWORD *)v140;
            *(_QWORD *)(v65 + 784) = *(_QWORD *)&v140[32];
            *(_OWORD *)(v65 + 768) = v64;
            if ( *(_DWORD *)(v65 + 752) != 1 )
              goto LABEL_99;
            v66 = *(_OWORD *)&v140[24];
            v67 = v153;
            *(_OWORD *)(v153 + 792) = *(_OWORD *)&v140[8];
            *(_OWORD *)(v67 + 808) = v66;
            if ( !*(_QWORD *)(v67 + 792) )
              break;
            v68 = *(_OWORD *)&v140[24];
            *(_OWORD *)(v67 + 928) = *(_OWORD *)&v140[8];
            *(_OWORD *)(v67 + 944) = v68;
            sub_141170BA0(v67 + 272, v67 + 296, *(_QWORD *)(v67 + 936), *(_QWORD *)(v67 + 944));
            v69 = sub_14116A430(*(_QWORD *)(v153 + 280), *(_QWORD *)(v153 + 288));
            v39 = v153;
            if ( !v69 )
              goto LABEL_59;
          }
          *(_QWORD *)(v67 + 832) = *(_QWORD *)(v67 + 800);
          v147 = v67 + 832;
          v148[0] = sub_1416EA080;
          sub_1416DAFA0(&v142, &unk_141A88C68, &v147);
          v149 = v142;
          v150 = v143;
          nullsub_1(v71, v70);
          v72 = (char *)sub_140001650(12, 1);
          v152 = v72;
          if ( !v72 )
            sub_14196B2DB(1, 12);
          v73 = v153;
          v74 = v153 + 320;
          qmemcpy(v72, "stream_error", 12);
          *(_QWORD *)&v142 = 12;
          *((_QWORD *)&v142 + 1) = v72;
          *(_QWORD *)&v143 = 12;
          v75 = (_OWORD *)(v73 + 880);
          sub_141165BB0(v73 + 880, v74, &v149, &v142);
          if ( *(_QWORD *)v75 )
          {
            v76 = v153;
            v17 = (char *)(v153 + 840);
            *(_QWORD *)(v153 + 840) = 1;
            v77 = v75[1];
            *(_OWORD *)(v76 + 848) = *v75;
            *(_OWORD *)(v76 + 864) = v77;
            *(_QWORD *)&v142 = v17;
LABEL_11:
            v152 = v17;
            if ( (unsigned __int8)sub_140AA0BC0(&off_141A8A480, &v142) )
            {
              v14 = 1;
              v15 = 5;
              goto LABEL_48;
            }
            if ( *(_QWORD *)v152 )
            {
              v23 = *(_QWORD *)(v153 + 848);
              if ( v23 )
              {
                (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v23 + 32))(
                  v153 + 872,
                  *(_QWORD *)(v153 + 856),
                  *(_QWORD *)(v153 + 864));
              }
              else
              {
                v25 = *(_QWORD *)(v153 + 856) & 3LL;
                if ( (unsigned int)(v25 - 2) >= 2 && v25 )
                {
                  *((_QWORD *)&v142 + 1) = *(_QWORD *)(v153 + 856) - 1LL;
                  LOBYTE(v142) = 3;
                  sub_1416EBAD0((char *)&v142 + 8);
                }
              }
            }
          }
LABEL_96:
          v78 = v153;
          *(_BYTE *)(v153 + 825) = 1;
          v79 = *(_QWORD *)(v78 + 832);
          if ( (unsigned int)(v79 & 3) - 2 >= 2 && (v79 & 3) != 0 )
          {
            *((_QWORD *)&v142 + 1) = v79 - 1;
            LOBYTE(v142) = 3;
            sub_1416EBAD0((char *)&v142 + 8);
          }
LABEL_99:
          v80 = v153;
          if ( !*(_BYTE *)(v153 + 825) )
          {
            sub_1408FEA60(*(_QWORD *)(v153 + 280), *(_QWORD *)(v153 + 288));
            v80 = v153;
            if ( v81 )
            {
              if ( *(_BYTE *)(v153 + 636) != 1 )
              {
                *(_QWORD *)&v82 = sub_14116A430(*(_QWORD *)(v153 + 280), *(_QWORD *)(v153 + 288));
                if ( (_QWORD)v82 )
                {
                  v83 = (__int128 *)(v153 + 872);
                  v142 = v82;
                  v143 = 0;
                  v144 = v82;
                  sub_140D8B500((_OWORD *)(v153 + 872), &v142);
                  if ( *(_BYTE *)v83 != 0xFF )
                  {
                    v84 = *v83;
                    v85 = v153;
                    *(_OWORD *)(v153 + 920) = v83[1];
                    *(_OWORD *)(v85 + 904) = v84;
                    sub_140BE7380(&v142, v85 + 392);
                    sub_14116B5E0(&v149, v153 + 904, &v142);
                    v86 = *((__int128 **)&v149 + 1);
                    v87 = v149;
                    v88 = *((_QWORD *)&v149 + 1) + 32 * v150;
                    v89 = v153;
                    *(_QWORD *)(v153 + 936) = *((_QWORD *)&v149 + 1);
                    *(_QWORD *)(v89 + 944) = v86;
                    *(_OWORD *)(v89 + 952) = __PAIR128__(v88, v87);
                    while ( 1 )
                    {
                      v115 = (__int128 *)(v89 + 968);
                      if ( v86 == (__int128 *)v88 )
                        break;
                      *(_QWORD *)(v89 + 944) = v86 + 2;
                      v116 = *v86;
                      *(_OWORD *)(v89 + 984) = v86[1];
                      *v115 = v116;
                      if ( !*(_QWORD *)(v89 + 968) )
                        goto LABEL_145;
                      v117 = *v86;
                      v143 = v86[1];
                      v142 = v117;
                      v21 = (char *)(v89 + 832);
                      *(_QWORD *)(v89 + 832) = 1;
                      v118 = v143;
                      *(_OWORD *)(v89 + 840) = v142;
                      *(_OWORD *)(v89 + 856) = v118;
                      *(_QWORD *)&v149 = v89 + 832;
LABEL_136:
                      v152 = v21;
                      if ( (unsigned __int8)sub_140AA0BC0(&off_141A8A480, &v149) )
                      {
                        v14 = 1;
                        v15 = 6;
                        goto LABEL_48;
                      }
                      if ( *(_QWORD *)v152 )
                      {
                        v119 = *(_QWORD *)(v153 + 840);
                        if ( v119 )
                        {
                          (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v119 + 32))(
                            v153 + 864,
                            *(_QWORD *)(v153 + 848),
                            *(_QWORD *)(v153 + 856));
                        }
                        else
                        {
                          v120 = *(_QWORD *)(v153 + 848) & 3LL;
                          if ( (unsigned int)(v120 - 2) >= 2 && v120 )
                          {
                            *((_QWORD *)&v149 + 1) = *(_QWORD *)(v153 + 848) - 1LL;
                            LOBYTE(v149) = 3;
                            sub_1416EBAD0((char *)&v149 + 8);
                          }
                        }
                      }
LABEL_143:
                      v89 = v153;
                      v86 = *(__int128 **)(v153 + 944);
                      v88 = *(_QWORD *)(v153 + 960);
                    }
                    *(_QWORD *)v115 = 0;
LABEL_145:
                    sub_1402327C0(v89 + 936);
                    v121 = v153;
                    *(_BYTE *)(v153 + 637) = 1;
                    sub_1406C0ED0(v121 + 904);
                    if ( *(_BYTE *)(v153 + 872) != 0xFF )
                      goto LABEL_117;
                  }
                  sub_140032F30(v153 + 880);
                }
              }
LABEL_117:
              v80 = v153;
              if ( !*(_BYTE *)(v153 + 637) )
              {
                sub_14116A730(&v142, v153 + 320, *(_QWORD *)(v153 + 280), *(_QWORD *)(v153 + 288));
                v150 = v143;
                v149 = v142;
                v104 = v153;
                *(_BYTE *)(v153 + 832) = BYTE8(v143);
                *(_BYTE *)(v104 + 826) = 0;
                v105 = *((__int128 **)&v149 + 1);
                v106 = v149;
                v107 = *((_QWORD *)&v149 + 1) + 32 * v150;
                *(_QWORD *)(v104 + 880) = *((_QWORD *)&v149 + 1);
                *(_QWORD *)(v104 + 888) = v105;
                *(_OWORD *)(v104 + 896) = __PAIR128__(v107, v106);
                while ( 1 )
                {
                  v108 = (_QWORD *)(v104 + 912);
                  if ( v105 == (__int128 *)v107 )
                  {
                    *v108 = 0;
LABEL_131:
                    sub_1402327C0(v104 + 880);
                    v114 = v153;
                    *(_BYTE *)(v153 + 825) = *(_BYTE *)(v153 + 832);
                    *(_BYTE *)(v114 + 826) = 0;
                    v80 = v114;
                    goto LABEL_106;
                  }
                  *(_QWORD *)(v104 + 888) = v105 + 2;
                  v109 = *v105;
                  *(_OWORD *)(v104 + 928) = v105[1];
                  *(_OWORD *)v108 = v109;
                  if ( !*(_QWORD *)(v104 + 912) )
                    goto LABEL_131;
                  v110 = *v105;
                  v143 = v105[1];
                  v142 = v110;
                  v22 = (char *)(v104 + 840);
                  *(_QWORD *)(v104 + 840) = 1;
                  v111 = v143;
                  *(_OWORD *)(v104 + 848) = v142;
                  *(_OWORD *)(v104 + 864) = v111;
                  v147 = v104 + 840;
LABEL_122:
                  v152 = v22;
                  if ( (unsigned __int8)sub_140AA0BC0(&off_141A8A480, &v147) )
                    break;
                  if ( *(_QWORD *)v152 )
                  {
                    v112 = *(_QWORD *)(v153 + 848);
                    if ( v112 )
                    {
                      (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v112 + 32))(
                        v153 + 872,
                        *(_QWORD *)(v153 + 856),
                        *(_QWORD *)(v153 + 864));
                    }
                    else
                    {
                      v113 = *(_QWORD *)(v153 + 856) & 3LL;
                      if ( (unsigned int)(v113 - 2) >= 2 && v113 )
                      {
                        v148[0] = *(_QWORD *)(v153 + 856) - 1LL;
                        LOBYTE(v147) = 3;
                        sub_1416EBAD0(v148);
                      }
                    }
                  }
LABEL_129:
                  v104 = v153;
                  v105 = *(__int128 **)(v153 + 888);
                  v107 = *(_QWORD *)(v153 + 904);
                }
                v14 = 1;
                v15 = 7;
                goto LABEL_48;
              }
            }
          }
LABEL_106:
          if ( !*(_BYTE *)(v80 + 825) && !*(_BYTE *)(v153 + 637) )
          {
            if ( *(_QWORD *)(v153 + 560) != -1 )
            {
              sub_1411699C0(&v142, v153 + 320);
              v90 = *((__int128 **)&v142 + 1);
              v91 = v142;
              v92 = *((_QWORD *)&v142 + 1) + 32 * v143;
              v93 = v153;
              *(_QWORD *)(v153 + 872) = *((_QWORD *)&v142 + 1);
              *(_QWORD *)(v93 + 880) = v90;
              *(_OWORD *)(v93 + 888) = __PAIR128__(v92, v91);
              while ( 1 )
              {
                v128 = (_QWORD *)(v93 + 904);
                if ( v90 == (__int128 *)v92 )
                {
                  *v128 = 0;
                  goto LABEL_174;
                }
                *(_QWORD *)(v93 + 880) = v90 + 2;
                v129 = *v90;
                *(_OWORD *)(v93 + 920) = v90[1];
                *(_OWORD *)v128 = v129;
                if ( !*(_QWORD *)(v93 + 904) )
                  goto LABEL_174;
                v130 = *v90;
                v143 = v90[1];
                v142 = v130;
                v16 = (char *)(v93 + 832);
                *(_QWORD *)(v93 + 832) = 1;
                v131 = v143;
                *(_OWORD *)(v93 + 840) = v142;
                *(_OWORD *)(v93 + 856) = v131;
                *(_QWORD *)&v149 = v93 + 832;
LABEL_165:
                v152 = v16;
                if ( (unsigned __int8)sub_140AA0BC0(&off_141A8A480, &v149) )
                  break;
                if ( *(_QWORD *)v152 )
                {
                  v132 = *(_QWORD *)(v153 + 840);
                  if ( v132 )
                  {
                    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v132 + 32))(
                      v153 + 864,
                      *(_QWORD *)(v153 + 848),
                      *(_QWORD *)(v153 + 856));
                  }
                  else
                  {
                    v133 = *(_QWORD *)(v153 + 848) & 3LL;
                    if ( (unsigned int)(v133 - 2) >= 2 && v133 )
                    {
                      *((_QWORD *)&v149 + 1) = *(_QWORD *)(v153 + 848) - 1LL;
                      LOBYTE(v149) = 3;
                      sub_1416EBAD0((char *)&v149 + 8);
                    }
                  }
                }
LABEL_172:
                v93 = v153;
                v90 = *(__int128 **)(v153 + 880);
                v92 = *(_QWORD *)(v153 + 896);
              }
              v14 = 1;
              v15 = 8;
              goto LABEL_48;
            }
            v94 = v153 + 320;
            if ( (unsigned __int8)sub_141167870(v153 + 320) )
            {
              sub_1403F7CF0(&v142, aMaxTokens_1, 10);
              v95 = v153;
              v96 = v153 + 560;
              v150 = v143;
              v149 = v142;
              v97 = *(_QWORD *)(v153 + 560);
              if ( v97 != -1 && v97 )
                sub_140001660(*(_QWORD *)(v153 + 568), v97, 1);
              *(_QWORD *)(v96 + 16) = v150;
              *(_OWORD *)v96 = v149;
              *(_BYTE *)(v95 + 638) = 1;
              sub_1411699C0(&v142, v94);
              v98 = *((__int128 **)&v142 + 1);
              v99 = v142;
              v100 = *((_QWORD *)&v142 + 1) + 32 * v143;
              v93 = v153;
              *(_QWORD *)(v153 + 872) = *((_QWORD *)&v142 + 1);
              *(_QWORD *)(v93 + 880) = v98;
              *(_OWORD *)(v93 + 888) = __PAIR128__(v100, v99);
              while ( 1 )
              {
                v122 = (__int128 *)(v93 + 904);
                if ( v98 == (__int128 *)v100 )
                  break;
                *(_QWORD *)(v93 + 880) = v98 + 2;
                v123 = *v98;
                *(_OWORD *)(v93 + 920) = v98[1];
                *v122 = v123;
                if ( !*(_QWORD *)(v93 + 904) )
                  goto LABEL_174;
                v124 = *v98;
                v143 = v98[1];
                v142 = v124;
                v18 = (char *)(v93 + 832);
                *(_QWORD *)(v93 + 832) = 1;
                v125 = v143;
                *(_OWORD *)(v93 + 840) = v142;
                *(_OWORD *)(v93 + 856) = v125;
                *(_QWORD *)&v149 = v93 + 832;
LABEL_151:
                v152 = v18;
                if ( (unsigned __int8)sub_140AA0BC0(&off_141A8A480, &v149) )
                {
                  v14 = 1;
                  v15 = 9;
                  goto LABEL_48;
                }
                if ( *(_QWORD *)v152 )
                {
                  v126 = *(_QWORD *)(v153 + 840);
                  if ( v126 )
                  {
                    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v126 + 32))(
                      v153 + 864,
                      *(_QWORD *)(v153 + 848),
                      *(_QWORD *)(v153 + 856));
                  }
                  else
                  {
                    v127 = *(_QWORD *)(v153 + 848) & 3LL;
                    if ( (unsigned int)(v127 - 2) >= 2 && v127 )
                    {
                      *((_QWORD *)&v149 + 1) = *(_QWORD *)(v153 + 848) - 1LL;
                      LOBYTE(v149) = 3;
                      sub_1416EBAD0((char *)&v149 + 8);
                    }
                  }
                }
LABEL_158:
                v93 = v153;
                v98 = *(__int128 **)(v153 + 880);
                v100 = *(_QWORD *)(v153 + 896);
              }
              *(_QWORD *)v122 = 0;
LABEL_174:
              sub_1402327C0(v93 + 872);
            }
            else
            {
              sub_1403F7CF0(&v147, aUpstreamAnthro, 51);
              v151 = 1;
              sub_1403F7CF0(&v142, aStreamTruncate_0, 16);
              v150 = v143;
              v149 = v142;
              v101 = (_OWORD *)(v153 + 872);
              v151 = 0;
              sub_141165BB0(v153 + 872, v94, &v147, &v149);
              if ( *(_QWORD *)v101 )
              {
                v102 = v153;
                v12 = (char *)(v153 + 832);
                *(_QWORD *)(v153 + 832) = 1;
                v103 = v101[1];
                *(_OWORD *)(v102 + 840) = *v101;
                *(_OWORD *)(v102 + 856) = v103;
                *(_QWORD *)&v142 = v12;
LABEL_6:
                v152 = v12;
                if ( (unsigned __int8)sub_140AA0BC0(&off_141A8A480, &v142) )
                {
                  v14 = 1;
                  v15 = 10;
                  goto LABEL_48;
                }
                if ( *(_QWORD *)v152 )
                {
                  v24 = *(_QWORD *)(v153 + 840);
                  if ( v24 )
                  {
                    (*(void (__fastcall **)(__int64, _QWORD, _QWORD))(v24 + 32))(
                      v153 + 864,
                      *(_QWORD *)(v153 + 848),
                      *(_QWORD *)(v153 + 856));
                  }
                  else
                  {
                    v26 = *(_QWORD *)(v153 + 848) & 3LL;
                    if ( (unsigned int)(v26 - 2) >= 2 && v26 )
                    {
                      *((_QWORD *)&v142 + 1) = *(_QWORD *)(v153 + 848) - 1LL;
                      LOBYTE(v142) = 3;
                      sub_1416EBAD0((char *)&v142 + 8);
                    }
                  }
                }
              }
            }
          }
LABEL_175:
          v134 = *(_QWORD *)(v153 + 640);
          if ( v134 == 1 )
          {
            if ( *(_BYTE *)(v153 + 721) == 3 )
            {
              sub_140B6A800(*(_QWORD *)(v153 + 688));
              *(_BYTE *)(v153 + 720) = 0;
            }
            else if ( !*(_BYTE *)(v153 + 721) )
            {
              v135 = *(_QWORD *)(v153 + 648);
              if ( v135 )
LABEL_178:
                sub_140B6A800(v135);
            }
          }
          else if ( !v134 )
          {
            v135 = *(_QWORD *)(v153 + 648);
            if ( v135 )
              goto LABEL_178;
          }
          sub_1406C4580(v153 + 320);
          v36 = v153;
          v136 = *(_QWORD *)(v153 + 296);
          if ( v136 )
            sub_140001660(*(_QWORD *)(v153 + 304), v136, 1);
          v137 = *(_QWORD *)(v36 + 272);
          v15 = 1;
          if ( v137 )
            sub_140001660(*(_QWORD *)(v36 + 280), v137, 1);
          v14 = 0;
          goto LABEL_49;
        }
        v51 = *(char **)(v153 + 288);
        v52 = (__int64)v152;
        if ( v152 )
        {
          v53 = *(_QWORD *)(v153 + 280);
          if ( v152 >= v51 )
          {
            if ( v152 != v51 )
LABEL_67:
              sub_14196B4F0(v53, (_DWORD)v51, 0, (_DWORD)v152, (__int64)&off_141A8A0B0);
          }
          else if ( v152[v53] <= -65 )
          {
            goto LABEL_67;
          }
          if ( (__int64)v152 < 0 )
          {
            v60 = 0;
            goto LABEL_77;
          }
          v146 = (__int64)v3;
          nullsub_1(v46, v45);
          v61 = sub_140001650(v52, 1);
          if ( !v61 )
          {
            v146 = v52;
            v60 = 1;
LABEL_77:
            sub_14196B2DB(v60, v146);
          }
          v62 = v61;
          sub_1419234B0(v61, v53, v52);
          v39 = v153;
          v51 = *(char **)(v153 + 288);
          v145 = v62;
          v54 = v62;
          v3 = (_QWORD *)v146;
          v49 += v52;
          v55 = v49 < (unsigned __int64)v51;
          if ( v49 > (unsigned __int64)v51 )
LABEL_80:
            sub_14196B880(0, v49, v51, &off_141A531B0);
        }
        else
        {
          v54 = 1;
          v145 = 1;
          v55 = v49 < (unsigned __int64)v51;
          if ( v49 > (unsigned __int64)v51 )
            goto LABEL_80;
        }
        v146 = v54;
        v56 = *(_QWORD *)(v39 + 280);
        if ( v55 && *(char *)(v56 + v49) <= -65 )
          sub_14196B830(aAssertionFaile_23, 44, &off_141A8A0C8);
        v143 = v47;
        *(_QWORD *)&v144 = v49;
        *(_QWORD *)&v142 = v56;
        *((_QWORD *)&v142 + 1) = v56 + v49;
        sub_1416DB330(&v142);
        v57 = v153;
        v58 = v152;
        *(_QWORD *)(v153 + 840) = v152;
        *(_QWORD *)(v57 + 848) = v145;
        *(_QWORD *)(v57 + 856) = v58;
        *(_OWORD *)(v57 + 864) = *(_OWORD *)v48;
        *(_QWORD *)(v57 + 880) = v48[2];
        sub_14116A730(&v142, v57 + 320, *(_QWORD *)(v57 + 872), *(_QWORD *)(v57 + 880));
        v150 = v143;
        v149 = v142;
        v31 = v153;
        *(_BYTE *)(v153 + 832) = BYTE8(v143);
        *(_BYTE *)(v31 + 827) = 0;
        v34 = v149;
        v59 = *((_QWORD *)&v149 + 1) + 32 * v150;
        *(_QWORD *)(v31 + 960) = *((_QWORD *)&v149 + 1);
        *(_QWORD *)(v31 + 968) = *((_QWORD *)&v34 + 1);
        *(_QWORD *)(v31 + 976) = v34;
        *(_QWORD *)(v31 + 984) = v59;
        v32 = v31 + 960;
        v33 = (_OWORD *)(v31 + 992);
        if ( *((_QWORD *)&v34 + 1) != v59 )
          break;
LABEL_53:
        *(_QWORD *)v33 = 0;
      }
    }
    v27 = **((_OWORD **)&v34 + 1);
    v143 = *(_OWORD *)(*((_QWORD *)&v34 + 1) + 16LL);
    v142 = v27;
    v19 = (char *)(v31 + 888);
    *(_QWORD *)(v31 + 888) = 1;
    v28 = v143;
    *(_OWORD *)(v31 + 896) = v142;
    *(_OWORD *)(v31 + 912) = v28;
    v147 = v31 + 888;
  }
  v14 = 1;
  v15 = 4;
LABEL_48:
  v36 = v153;
LABEL_49:
  *(_BYTE *)(v36 + 824) = v15;
  *(_QWORD *)sub_1411D8DB0() = v141;
  *(_BYTE *)(v36 + 1024) = v14 ^ 1;
  if ( *(_QWORD *)&v138[0] )
  {
    v3[4] = v139;
    v37 = v138[0];
    *((_OWORD *)v3 + 1) = v138[1];
    *(_OWORD *)v3 = v37;
  }
  else
  {
    *v3 = 2 * (unsigned int)v14;
  }
  return v3;
}
