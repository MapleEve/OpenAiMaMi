// win 1.2.7 | module src/core/codex_app_server.rs | ea 0x14041c960 | name sub_14041C960
// win 1.2.7 | module src/core/codex_app_server.rs | attributed via call-graph propagation (>=2 same-module callers) (win-native)
__int64 __fastcall sub_14041C960(__int64 a1, _QWORD *a2)
{
  __int64 v2; // r15
  int v4; // edi
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdi
  __int8 v9; // al
  __int8 v10; // cl
  __int64 v11; // rcx
  __int8 v12; // al
  __int8 v13; // al
  __int8 v14; // al
  char v15; // al
  __int64 v16; // rdx
  __int8 v17; // al
  __int8 v18; // al
  __int64 v19; // rax
  __int8 v20; // al
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rdx
  __int64 v26; // rdi
  __int64 v27; // rdi
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v31; // rax
  bool v32; // zf
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // r9
  __int64 v36; // r8
  __int64 v37; // r8
  bool v38; // zf
  __int64 v39; // r10
  __int64 v40; // r12
  __int64 v41; // rax
  __int64 v42; // r12
  __int64 v43; // rbx
  __int64 v44; // r14
  __int64 v45; // r13
  __int64 v46; // r15
  __int64 v47; // r9
  __int64 v48; // r11
  __int64 v49; // r8
  __int64 v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rdi
  __m128i v53[22]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v54; // [rsp+190h] [rbp+110h] BYREF
  __int64 v55; // [rsp+198h] [rbp+118h]
  __int64 v56; // [rsp+1A0h] [rbp+120h]
  __int64 v57; // [rsp+1A8h] [rbp+128h]
  __int128 v58; // [rsp+1B0h] [rbp+130h]
  __m256i v59; // [rsp+1C0h] [rbp+140h] BYREF
  __int64 v60; // [rsp+1E0h] [rbp+160h]
  __int64 v61; // [rsp+1E8h] [rbp+168h]
  __int64 v62; // [rsp+1F0h] [rbp+170h]
  __int64 v63; // [rsp+1F8h] [rbp+178h]
  __int64 v64; // [rsp+200h] [rbp+180h]
  __int64 v65; // [rsp+208h] [rbp+188h]
  __int64 v66; // [rsp+210h] [rbp+190h]
  __int64 v67; // [rsp+218h] [rbp+198h]
  __int64 v68; // [rsp+220h] [rbp+1A0h]
  __int64 v69; // [rsp+228h] [rbp+1A8h]
  __int64 v70; // [rsp+230h] [rbp+1B0h]
  __int64 v71; // [rsp+238h] [rbp+1B8h]
  __int64 v72; // [rsp+240h] [rbp+1C0h]
  __int64 v73; // [rsp+248h] [rbp+1C8h]
  __int64 v74; // [rsp+250h] [rbp+1D0h]
  __int64 v75; // [rsp+258h] [rbp+1D8h]
  __int64 v76; // [rsp+2B8h] [rbp+238h]
  __int64 v77; // [rsp+2C0h] [rbp+240h]
  __int64 v78; // [rsp+2C8h] [rbp+248h]
  __int64 v79; // [rsp+2D0h] [rbp+250h]
  __int64 v80; // [rsp+2D8h] [rbp+258h]
  __int64 v81; // [rsp+2E0h] [rbp+260h]
  __int64 v82; // [rsp+2E8h] [rbp+268h]
  __int64 v83; // [rsp+2F0h] [rbp+270h]
  __int64 v84; // [rsp+2F8h] [rbp+278h]
  __int64 v85; // [rsp+300h] [rbp+280h]
  __int64 v86; // [rsp+308h] [rbp+288h]
  _QWORD v87[8]; // [rsp+310h] [rbp+290h] BYREF
  __int64 v88; // [rsp+350h] [rbp+2D0h]
  char v89; // [rsp+358h] [rbp+2D8h] BYREF
  _BYTE v90[31]; // [rsp+359h] [rbp+2D9h]
  _BYTE *v91; // [rsp+378h] [rbp+2F8h]
  __int64 v92; // [rsp+380h] [rbp+300h]
  __int64 v93; // [rsp+388h] [rbp+308h]
  __m256i v94; // [rsp+390h] [rbp+310h] BYREF
  __int64 v95; // [rsp+3B0h] [rbp+330h]
  __int64 v96; // [rsp+3B8h] [rbp+338h]
  __int64 v97; // [rsp+3C0h] [rbp+340h]
  __int64 v98; // [rsp+3C8h] [rbp+348h]
  __m256i v99; // [rsp+3D0h] [rbp+350h] BYREF
  char v100; // [rsp+3FFh] [rbp+37Fh] BYREF
  __int64 v101; // [rsp+400h] [rbp+380h]
  __int64 v102; // [rsp+408h] [rbp+388h]
  __int64 v103; // [rsp+410h] [rbp+390h]
  __int64 v104; // [rsp+418h] [rbp+398h]
  __int64 v105; // [rsp+420h] [rbp+3A0h]
  __int64 v106; // [rsp+428h] [rbp+3A8h]
  __int64 v107; // [rsp+430h] [rbp+3B0h]
  __int64 v108; // [rsp+438h] [rbp+3B8h]
  __int64 v109; // [rsp+440h] [rbp+3C0h]
  __int64 v110; // [rsp+448h] [rbp+3C8h]
  __int64 v111; // [rsp+450h] [rbp+3D0h]
  __int64 v112; // [rsp+458h] [rbp+3D8h]
  __int64 v113; // [rsp+460h] [rbp+3E0h]
  __int64 v114; // [rsp+468h] [rbp+3E8h]
  __int64 v115; // [rsp+470h] [rbp+3F0h]
  __int64 v116; // [rsp+478h] [rbp+3F8h]
  __int64 v117; // [rsp+480h] [rbp+400h]
  __int64 v118; // [rsp+488h] [rbp+408h]
  __int64 v119; // [rsp+490h] [rbp+410h]
  __int64 v120; // [rsp+498h] [rbp+418h]
  __int64 v121; // [rsp+4A0h] [rbp+420h]
  __int64 v122; // [rsp+4A8h] [rbp+428h]
  __int64 v123; // [rsp+4B0h] [rbp+430h]
  __int64 v124; // [rsp+4B8h] [rbp+438h]
  __int64 v125; // [rsp+4C0h] [rbp+440h]
  char v126; // [rsp+4CFh] [rbp+44Fh]
  __int64 v127; // [rsp+4D0h] [rbp+450h]

  v127 = -2;
  v4 = *(unsigned __int8 *)a2;
  v91 = a2;
  if ( v4 == 4 )
  {
    sub_140643390(a1, a2 + 1);
    return a1;
  }
  if ( v4 != 5 )
  {
    *(_QWORD *)(a1 + 8) = sub_14190A750(a2, &v100, &unk_1419F0068);
    *(_QWORD *)a1 = 2;
    if ( (v4 & 6) != 4 )
      goto LABEL_115;
    return a1;
  }
  v5 = a2[1];
  v6 = a2[2];
  v7 = a2[3];
  v60 = v7;
  if ( !v5 )
    v7 = 0;
  v87[0] = v5 != 0;
  v87[1] = 0;
  v87[2] = v5;
  v87[3] = v6;
  v87[4] = v87[0];
  v87[5] = 0;
  v87[6] = v5;
  v87[7] = v6;
  v88 = v7;
  v89 = -1;
  v59.m256i_i8[0] = -1;
  v57 = -1;
  v8 = 2;
  LOBYTE(v5) = -1;
  v113 = v5;
  v122 = -1;
  v119 = -2;
  v117 = -3;
  v95 = 0;
  v116 = -2;
  v118 = -2;
  v115 = -2;
  v114 = -2;
  v121 = -2;
  v120 = -2;
  v123 = -1;
  v125 = -1;
  v124 = -1;
  while ( 2 )
  {
    v96 = v2;
    v98 = v6;
    v97 = v5;
    v112 = v117;
    v111 = v119;
    v110 = v116;
    v109 = v118;
    v108 = v115;
    v107 = v114;
    v106 = v122;
    v105 = v121;
    v104 = v120;
    v103 = v123;
    v102 = v125;
    v126 = v113;
    v101 = v124;
    sub_14071B190(&v99, v87);
    if ( v99.m256i_i8[0] == 1 )
    {
      v2 = v99.m256i_i64[1];
      goto LABEL_77;
    }
    switch ( v99.m256i_i8[1] )
    {
      case 0:
        if ( v125 != -1 )
        {
          v94.m256i_i64[0] = (__int64)aId_3;
          v99.m256i_i64[0] = (__int64)&v94;
          v99.m256i_i64[1] = (__int64)sub_140186EE0;
          v94.m256i_i64[1] = 2;
          v112 = v117;
          v111 = v119;
          v110 = v116;
          v109 = v118;
          v108 = v115;
          v107 = v114;
          v106 = v122;
          v105 = v121;
          v104 = v120;
          v103 = v123;
          v102 = v125;
          v126 = v113;
          v101 = v124;
          v5 = sub_141911DB0(&unk_141A506A4, &v99);
          goto LABEL_154;
        }
        v9 = v89;
        v89 = -1;
        if ( v9 == -1 )
        {
          v112 = v117;
          v111 = v119;
          v110 = v116;
          v109 = v118;
          v108 = v115;
          v107 = v114;
          v106 = v122;
          v105 = v121;
          v104 = v120;
          v103 = v123;
          v102 = -1;
          v126 = v113;
          v101 = v124;
          v41 = sub_141911F40(aValueIsMissing, 16);
          goto LABEL_157;
        }
        v99.m256i_i8[0] = v9;
        *(_OWORD *)&v99.m256i_u64[2] = *(_OWORD *)&v90[15];
        *(_OWORD *)&v99.m256i_i8[1] = *(_OWORD *)v90;
        if ( v9 == 3 )
        {
          v2 = *(_QWORD *)&v90[15];
          v68 = *(_QWORD *)&v90[23];
          v5 = v97;
          v6 = v98;
          v125 = *(_QWORD *)&v90[7];
          if ( *(_QWORD *)&v90[7] != -1 )
            continue;
        }
        else
        {
          v2 = sub_14190A750(&v99, &v100, &unk_1419EFEA8);
          v112 = v117;
          v111 = v119;
          v110 = v116;
          v109 = v118;
          v108 = v115;
          v107 = v114;
          v106 = v122;
          v105 = v121;
          v104 = v120;
          v103 = v123;
          v102 = -1;
          v126 = v113;
          v101 = v124;
          sub_140409B40(&v99);
        }
        v125 = -1;
        goto LABEL_77;
      case 1:
        if ( v123 != -1 )
        {
          v94.m256i_i64[0] = (__int64)aCwd_0;
          v99.m256i_i64[0] = (__int64)&v94;
          v99.m256i_i64[1] = (__int64)sub_140186EE0;
          v94.m256i_i64[1] = 3;
          v112 = v117;
          v111 = v119;
          v110 = v116;
          v109 = v118;
          v108 = v115;
          v107 = v114;
          v106 = v122;
          v105 = v121;
          v104 = v120;
          v103 = v123;
          v102 = v125;
          v126 = v113;
          v101 = v124;
          v5 = sub_141911DB0(&unk_141A506A4, &v99);
          goto LABEL_154;
        }
        v18 = v89;
        v89 = -1;
        if ( v18 == -1 )
        {
          v112 = v117;
          v111 = v119;
          v110 = v116;
          v109 = v118;
          v108 = v115;
          v107 = v114;
          v106 = v122;
          v105 = v121;
          v104 = v120;
          v103 = -1;
          v102 = v125;
          v126 = v113;
          v101 = v124;
          v2 = sub_141911F40(aValueIsMissing, 16);
          v123 = -1;
          goto LABEL_77;
        }
        v99.m256i_i8[0] = v18;
        *(_OWORD *)&v99.m256i_u64[2] = *(_OWORD *)&v90[15];
        *(_OWORD *)&v99.m256i_i8[1] = *(_OWORD *)v90;
        if ( v18 != 3 )
        {
          v2 = sub_14190A750(&v99, &v100, &unk_1419EFEA8);
          v112 = v117;
          v111 = v119;
          v110 = v116;
          v109 = v118;
          v108 = v115;
          v107 = v114;
          v106 = v122;
          v105 = v121;
          v104 = v120;
          v103 = -1;
          v102 = v125;
          v126 = v113;
          v101 = v124;
          sub_140409B40(&v99);
          v123 = -1;
          goto LABEL_77;
        }
        v6 = *(_QWORD *)&v90[15];
        v86 = *(_QWORD *)&v90[23];
        v5 = v97;
        v2 = v96;
        v123 = *(_QWORD *)&v90[7];
        if ( *(_QWORD *)&v90[7] == -1 )
        {
          v123 = -1;
          v2 = *(_QWORD *)&v90[15];
          goto LABEL_77;
        }
        continue;
      case 2:
        if ( v120 != -2 )
        {
          v94.m256i_i64[0] = (__int64)aPath_5;
          v99.m256i_i64[0] = (__int64)&v94;
          v99.m256i_i64[1] = (__int64)sub_140186EE0;
          v94.m256i_i64[1] = 4;
          v112 = v117;
          v111 = v119;
          v110 = v116;
          v109 = v118;
          v108 = v115;
          v107 = v114;
          v106 = v122;
          v105 = v121;
          v104 = v120;
          v103 = v123;
          v102 = v125;
          v126 = v113;
          v101 = v124;
          v5 = sub_141911DB0(&unk_141A506A4, &v99);
          goto LABEL_154;
        }
        v112 = v117;
        v111 = v119;
        v110 = v116;
        v109 = v118;
        v108 = v115;
        v107 = v114;
        v106 = v122;
        v105 = v121;
        v104 = -2;
        v103 = v123;
        v102 = v125;
        v126 = v113;
        v101 = v124;
        sub_14071D210(&v99, v87);
        v2 = v99.m256i_i64[1];
        v120 = v99.m256i_i64[0];
        if ( v99.m256i_i64[0] == -2 )
        {
          v120 = -2;
          goto LABEL_77;
        }
        v67 = v99.m256i_i64[2];
        v5 = v97;
        v82 = v99.m256i_i64[1];
        goto LABEL_9;
      case 3:
        if ( v121 != -2 )
        {
          v94.m256i_i64[0] = (__int64)aName_4;
          v99.m256i_i64[0] = (__int64)&v94;
          v99.m256i_i64[1] = (__int64)sub_140186EE0;
          v94.m256i_i64[1] = 4;
          v112 = v117;
          v111 = v119;
          v110 = v116;
          v109 = v118;
          v108 = v115;
          v107 = v114;
          v106 = v122;
          v105 = v121;
          v104 = v120;
          v103 = v123;
          v102 = v125;
          v126 = v113;
          v101 = v124;
          v5 = sub_141911DB0(&unk_141A506A4, &v99);
          goto LABEL_154;
        }
        v112 = v117;
        v111 = v119;
        v110 = v116;
        v109 = v118;
        v108 = v115;
        v107 = v114;
        v106 = v122;
        v105 = -2;
        v104 = v120;
        v103 = v123;
        v102 = v125;
        v126 = v113;
        v101 = v124;
        sub_14071D210(&v99, v87);
        v2 = v99.m256i_i64[1];
        v121 = v99.m256i_i64[0];
        if ( v99.m256i_i64[0] == -2 )
        {
          v121 = -2;
          goto LABEL_77;
        }
        v66 = v99.m256i_i64[2];
        v5 = v97;
        v83 = v99.m256i_i64[1];
        goto LABEL_9;
      case 4:
        if ( v122 != -1 )
        {
          v94.m256i_i64[0] = (__int64)aPreview_0;
          v99.m256i_i64[0] = (__int64)&v94;
          v99.m256i_i64[1] = (__int64)sub_140186EE0;
          v94.m256i_i64[1] = 7;
          v112 = v117;
          v111 = v119;
          v110 = v116;
          v109 = v118;
          v108 = v115;
          v107 = v114;
          v106 = v122;
          v105 = v121;
          v104 = v120;
          v103 = v123;
          v102 = v125;
          v126 = v113;
          v101 = v124;
          v5 = sub_141911DB0(&unk_141A506A4, &v99);
          goto LABEL_154;
        }
        v13 = v89;
        v89 = -1;
        if ( v13 == -1 )
        {
          v112 = v117;
          v111 = v119;
          v110 = v116;
          v109 = v118;
          v108 = v115;
          v107 = v114;
          v106 = -1;
          v105 = v121;
          v104 = v120;
          v103 = v123;
          v102 = v125;
          v126 = v113;
          v101 = v124;
          v2 = sub_141911F40(aValueIsMissing, 16);
          v122 = -1;
          goto LABEL_77;
        }
        v99.m256i_i8[0] = v13;
        *(_OWORD *)&v99.m256i_u64[2] = *(_OWORD *)&v90[15];
        *(_OWORD *)&v99.m256i_i8[1] = *(_OWORD *)v90;
        if ( v13 != 3 )
        {
          v2 = sub_14190A750(&v99, &v100, &unk_1419EFEA8);
          v112 = v117;
          v111 = v119;
          v110 = v116;
          v109 = v118;
          v108 = v115;
          v107 = v114;
          v106 = -1;
          v105 = v121;
          v104 = v120;
          v103 = v123;
          v102 = v125;
          v126 = v113;
          v101 = v124;
          sub_140409B40(&v99);
          v122 = -1;
          goto LABEL_77;
        }
        v5 = *(_QWORD *)&v90[15];
        v85 = *(_QWORD *)&v90[23];
        v6 = v98;
        v2 = v96;
        v122 = *(_QWORD *)&v90[7];
        if ( *(_QWORD *)&v90[7] != -1 )
          continue;
        v122 = -1;
        goto LABEL_154;
      case 5:
        if ( (_BYTE)v113 != 0xFF )
        {
          v94.m256i_i64[0] = (__int64)aSource_2;
          v99.m256i_i64[0] = (__int64)&v94;
          v99.m256i_i64[1] = (__int64)sub_140186EE0;
          v94.m256i_i64[1] = 6;
          v112 = v117;
          v111 = v119;
          v110 = v116;
          v109 = v118;
          v108 = v115;
          v107 = v114;
          v106 = v122;
          v105 = v121;
          v104 = v120;
          v103 = v123;
          v102 = v125;
          v126 = v113;
          v101 = v124;
          v5 = sub_141911DB0(&unk_141A506A4, &v99);
          goto LABEL_154;
        }
        v112 = v117;
        v111 = v119;
        v110 = v116;
        v109 = v118;
        v108 = v115;
        v107 = v114;
        v106 = v122;
        v105 = v121;
        v104 = v120;
        v103 = v123;
        v102 = v125;
        v126 = -1;
        v101 = v124;
        v19 = sub_14071D460(&v99, v87);
        if ( v99.m256i_i8[0] == -1 )
        {
          v2 = v99.m256i_i64[1];
          LOBYTE(v19) = -1;
          v113 = v19;
          goto LABEL_77;
        }
        v59 = v99;
        v113 = v99.m256i_u8[0];
        goto LABEL_8;
      case 6:
        if ( v114 == -2 )
        {
          v112 = v117;
          v111 = v119;
          v110 = v116;
          v109 = v118;
          v108 = v115;
          v107 = -2;
          v106 = v122;
          v105 = v121;
          v104 = v120;
          v103 = v123;
          v102 = v125;
          v126 = v113;
          v101 = v124;
          sub_14071D210(&v99, v87);
          v2 = v99.m256i_i64[1];
          v114 = v99.m256i_i64[0];
          if ( v99.m256i_i64[0] == -2 )
          {
            v114 = -2;
            goto LABEL_77;
          }
          v65 = v99.m256i_i64[2];
          v77 = v99.m256i_i64[1];
          goto LABEL_8;
        }
        v94.m256i_i64[0] = (__int64)&unk_1419EF8A5;
        v99.m256i_i64[0] = (__int64)&v94;
        v99.m256i_i64[1] = (__int64)sub_140186EE0;
        v94.m256i_i64[1] = 14;
        v112 = v117;
        v111 = v119;
        v110 = v116;
        v109 = v118;
        v108 = v115;
        v107 = v114;
        v106 = v122;
        v105 = v121;
        v104 = v120;
        v103 = v123;
        v102 = v125;
        v126 = v113;
        v101 = v124;
        v5 = sub_141911DB0(&unk_141A506A4, &v99);
        goto LABEL_154;
      case 7:
        if ( v115 != -2 )
        {
          v94.m256i_i64[0] = (__int64)&unk_1419EF8B3;
          v99.m256i_i64[0] = (__int64)&v94;
          v99.m256i_i64[1] = (__int64)sub_140186EE0;
          v94.m256i_i64[1] = 13;
          v112 = v117;
          v111 = v119;
          v110 = v116;
          v109 = v118;
          v108 = v115;
          v107 = v114;
          v106 = v122;
          v105 = v121;
          v104 = v120;
          v103 = v123;
          v102 = v125;
          v126 = v113;
          v101 = v124;
          v5 = sub_141911DB0(&unk_141A506A4, &v99);
          goto LABEL_154;
        }
        v112 = v117;
        v111 = v119;
        v110 = v116;
        v109 = v118;
        v108 = -2;
        v107 = v114;
        v106 = v122;
        v105 = v121;
        v104 = v120;
        v103 = v123;
        v102 = v125;
        v126 = v113;
        v101 = v124;
        sub_14071D210(&v99, v87);
        v2 = v99.m256i_i64[1];
        v115 = v99.m256i_i64[0];
        if ( v99.m256i_i64[0] == -2 )
        {
          v115 = -2;
          goto LABEL_77;
        }
        v64 = v99.m256i_i64[2];
        v78 = v99.m256i_i64[1];
        goto LABEL_8;
      case 8:
        if ( v118 != -2 )
        {
          v94.m256i_i64[0] = (__int64)&unk_1419EF8C0;
          v99.m256i_i64[0] = (__int64)&v94;
          v99.m256i_i64[1] = (__int64)sub_140186EE0;
          v94.m256i_i64[1] = 9;
          v112 = v117;
          v111 = v119;
          v110 = v116;
          v109 = v118;
          v108 = v115;
          v107 = v114;
          v106 = v122;
          v105 = v121;
          v104 = v120;
          v103 = v123;
          v102 = v125;
          v126 = v113;
          v101 = v124;
          v5 = sub_141911DB0(&unk_141A506A4, &v99);
          goto LABEL_154;
        }
        v112 = v117;
        v111 = v119;
        v110 = v116;
        v109 = -2;
        v108 = v115;
        v107 = v114;
        v106 = v122;
        v105 = v121;
        v104 = v120;
        v103 = v123;
        v102 = v125;
        v126 = v113;
        v101 = v124;
        sub_14071D210(&v99, v87);
        v2 = v99.m256i_i64[1];
        v118 = v99.m256i_i64[0];
        if ( v99.m256i_i64[0] == -2 )
        {
          v118 = -2;
          goto LABEL_77;
        }
        v63 = v99.m256i_i64[2];
        v79 = v99.m256i_i64[1];
        goto LABEL_8;
      case 9:
        if ( v116 != -2 )
        {
          v94.m256i_i64[0] = (__int64)&unk_1419EF8C9;
          v99.m256i_i64[0] = (__int64)&v94;
          v99.m256i_i64[1] = (__int64)sub_140186EE0;
          v94.m256i_i64[1] = 9;
          v112 = v117;
          v111 = v119;
          v110 = v116;
          v109 = v118;
          v108 = v115;
          v107 = v114;
          v106 = v122;
          v105 = v121;
          v104 = v120;
          v103 = v123;
          v102 = v125;
          v126 = v113;
          v101 = v124;
          v5 = sub_141911DB0(&unk_141A506A4, &v99);
          goto LABEL_154;
        }
        v112 = v117;
        v111 = v119;
        v110 = -2;
        v109 = v118;
        v108 = v115;
        v107 = v114;
        v106 = v122;
        v105 = v121;
        v104 = v120;
        v103 = v123;
        v102 = v125;
        v126 = v113;
        v101 = v124;
        sub_14071D210(&v99, v87);
        v2 = v99.m256i_i64[1];
        v116 = v99.m256i_i64[0];
        if ( v99.m256i_i64[0] == -2 )
        {
          v116 = -2;
          goto LABEL_77;
        }
        v62 = v99.m256i_i64[2];
        v80 = v99.m256i_i64[1];
        goto LABEL_8;
      case 0xA:
        if ( v119 == -2 )
        {
          v112 = v117;
          v111 = -2;
          v110 = v116;
          v109 = v118;
          v108 = v115;
          v107 = v114;
          v106 = v122;
          v105 = v121;
          v104 = v120;
          v103 = v123;
          v102 = v125;
          v126 = v113;
          v101 = v124;
          sub_14071D210(&v99, v87);
          v2 = v99.m256i_i64[1];
          v119 = v99.m256i_i64[0];
          if ( v99.m256i_i64[0] == -2 )
          {
            v119 = -2;
            goto LABEL_77;
          }
          v61 = v99.m256i_i64[2];
          v81 = v99.m256i_i64[1];
          goto LABEL_8;
        }
        v94.m256i_i64[0] = (__int64)&unk_1419EF8D2;
        v99.m256i_i64[0] = (__int64)&v94;
        v99.m256i_i64[1] = (__int64)sub_140186EE0;
        v94.m256i_i64[1] = 11;
        v112 = v117;
        v111 = v119;
        v110 = v116;
        v109 = v118;
        v108 = v115;
        v107 = v114;
        v106 = v122;
        v105 = v121;
        v104 = v120;
        v103 = v123;
        v102 = v125;
        v126 = v113;
        v101 = v124;
        v5 = sub_141911DB0(&unk_141A506A4, &v99);
        goto LABEL_154;
      case 0xB:
        if ( v117 != -3 )
        {
          v94.m256i_i64[0] = (__int64)&unk_1419EF8DD;
          v99.m256i_i64[0] = (__int64)&v94;
          v99.m256i_i64[1] = (__int64)sub_140186EE0;
          v94.m256i_i64[1] = 7;
          v112 = v117;
          v111 = v119;
          v110 = v116;
          v109 = v118;
          v108 = v115;
          v107 = v114;
          v106 = v122;
          v105 = v121;
          v104 = v120;
          v103 = v123;
          v102 = v125;
          v126 = v113;
          v101 = v124;
          v5 = sub_141911DB0(&unk_141A506A4, &v99);
          goto LABEL_154;
        }
        v12 = v89;
        v89 = -1;
        if ( v12 == -1 )
        {
          v112 = -3;
          v111 = v119;
          v110 = v116;
          v109 = v118;
          v108 = v115;
          v107 = v114;
          v106 = v122;
          v105 = v121;
          v104 = v120;
          v103 = v123;
          v102 = v125;
          v126 = v113;
          v101 = v124;
          v2 = sub_141911F40(aValueIsMissing, 16);
          v117 = -3;
          goto LABEL_77;
        }
        v94.m256i_i8[0] = v12;
        *(_OWORD *)&v94.m256i_u64[2] = *(_OWORD *)&v90[15];
        *(_OWORD *)&v94.m256i_i8[1] = *(_OWORD *)v90;
        if ( v12 )
        {
          v99 = v94;
          v112 = -3;
          v111 = v119;
          v110 = v116;
          v109 = v118;
          v108 = v115;
          v107 = v114;
          v106 = v122;
          v105 = v121;
          v104 = v120;
          v103 = v123;
          v102 = v125;
          v126 = v113;
          v101 = v124;
          sub_140423020(&v54, &v99);
          v2 = v55;
          v117 = v54;
          if ( v54 == -2 )
          {
            v117 = -3;
            goto LABEL_77;
          }
          v69 = v56;
          v84 = v55;
        }
        else
        {
          v112 = -3;
          v111 = v119;
          v110 = v116;
          v109 = v118;
          v108 = v115;
          v107 = v114;
          v106 = v122;
          v105 = v121;
          v104 = v120;
          v103 = v123;
          v102 = v125;
          v126 = v113;
          v101 = v124;
          sub_14002F9D0(&v94);
          v117 = -2;
        }
        goto LABEL_8;
      case 0xC:
        if ( v95 )
        {
          v94.m256i_i64[0] = (__int64)aUpdatedat_0;
          v99.m256i_i64[0] = (__int64)&v94;
          v99.m256i_i64[1] = (__int64)sub_140186EE0;
          v94.m256i_i64[1] = 9;
          v112 = v117;
          v111 = v119;
          v110 = v116;
          v109 = v118;
          v108 = v115;
          v107 = v114;
          v106 = v122;
          v105 = v121;
          v104 = v120;
          v103 = v123;
          v102 = v125;
          v126 = v113;
          v101 = v124;
          v5 = sub_141911DB0(&unk_141A506A4, &v99);
          goto LABEL_154;
        }
        v14 = v89;
        v89 = -1;
        if ( v14 != -1 )
        {
          v99.m256i_i8[0] = v14;
          *(_OWORD *)&v99.m256i_u64[2] = *(_OWORD *)&v90[15];
          *(_OWORD *)&v99.m256i_i8[1] = *(_OWORD *)v90;
          v112 = v117;
          v111 = v119;
          v110 = v116;
          v109 = v118;
          v108 = v115;
          v107 = v114;
          v106 = v122;
          v105 = v121;
          v104 = v120;
          v103 = v123;
          v102 = v125;
          v126 = v113;
          v101 = v124;
          v15 = sub_140414820((__int64)&v99);
          v92 = v16;
          if ( (v15 & 1) != 0 )
            goto LABEL_146;
          v95 = 1;
          goto LABEL_8;
        }
        v112 = v117;
        v111 = v119;
        v110 = v116;
        v109 = v118;
        v108 = v115;
        v107 = v114;
        v106 = v122;
        v105 = v121;
        v104 = v120;
        v103 = v123;
        v102 = v125;
        v126 = v113;
        v101 = v124;
        v92 = sub_141911F40(aValueIsMissing, 16);
LABEL_146:
        v2 = v92;
LABEL_77:
        *(_QWORD *)(a1 + 8) = v2;
        *(_QWORD *)a1 = 2;
        if ( v124 != -1 )
        {
LABEL_78:
          v95 = 0;
          v23 = v93;
          while ( v76 != v95 )
          {
            ++v95;
            v24 = v23 + 32;
            sub_1403880E0(v23);
            v23 = v24;
          }
          if ( v124 )
            sub_140001660(v93, 32 * v124, 8);
        }
        v25 = v117;
        if ( v117 <= 0 )
          goto LABEL_85;
        goto LABEL_84;
      case 0xD:
        if ( v8 != 2 )
        {
          v94.m256i_i64[0] = (__int64)&unk_1419EF8ED;
          v99.m256i_i64[0] = (__int64)&v94;
          v99.m256i_i64[1] = (__int64)sub_140186EE0;
          v94.m256i_i64[1] = 9;
          v112 = v117;
          v111 = v119;
          v110 = v116;
          v109 = v118;
          v108 = v115;
          v107 = v114;
          v106 = v122;
          v105 = v121;
          v104 = v120;
          v103 = v123;
          v102 = v125;
          v126 = v113;
          v101 = v124;
          v5 = sub_141911DB0(&unk_141A506A4, &v99);
          goto LABEL_154;
        }
        v20 = v89;
        v89 = -1;
        if ( v20 == -1 )
        {
LABEL_136:
          v112 = v117;
          v111 = v119;
          v110 = v116;
          v109 = v118;
          v108 = v115;
          v107 = v114;
          v106 = v122;
          v105 = v121;
          v104 = v120;
          v103 = v123;
          v102 = v125;
          v126 = v113;
          v101 = v124;
          v5 = sub_141911F40(aValueIsMissing, 16);
LABEL_154:
          v2 = v5;
          goto LABEL_77;
        }
        v94.m256i_i8[0] = v20;
        *(_OWORD *)&v94.m256i_u64[2] = *(_OWORD *)&v90[15];
        *(_OWORD *)&v94.m256i_i8[1] = *(_OWORD *)v90;
        if ( v20 )
        {
          v99 = v94;
          v112 = v117;
          v111 = v119;
          v110 = v116;
          v109 = v118;
          v108 = v115;
          v107 = v114;
          v106 = v122;
          v105 = v121;
          v104 = v120;
          v103 = v123;
          v102 = v125;
          v126 = v113;
          v101 = v124;
          v21 = sub_140414820((__int64)&v99);
          v70 = v22;
          v8 = v21 + 1;
          v5 = v97;
          v6 = v98;
          v2 = v96;
          if ( v8 == 2 )
          {
            v2 = v70;
            goto LABEL_77;
          }
        }
        else
        {
          v112 = v117;
          v111 = v119;
          v110 = v116;
          v109 = v118;
          v108 = v115;
          v107 = v114;
          v106 = v122;
          v105 = v121;
          v104 = v120;
          v103 = v123;
          v102 = v125;
          v126 = v113;
          v101 = v124;
          sub_14002F9D0(&v94);
          v5 = v97;
          v6 = v98;
          v2 = v96;
          v8 = 0;
        }
        continue;
      case 0xE:
        if ( v124 != -1 )
        {
          v94.m256i_i64[0] = (__int64)&unk_1419EF8F6;
          v99.m256i_i64[0] = (__int64)&v94;
          v99.m256i_i64[1] = (__int64)sub_140186EE0;
          v94.m256i_i64[1] = 5;
          v112 = v117;
          v111 = v119;
          v110 = v116;
          v109 = v118;
          v108 = v115;
          v107 = v114;
          v106 = v122;
          v105 = v121;
          v104 = v120;
          v103 = v123;
          v102 = v125;
          v126 = v113;
          v101 = v124;
          *(_QWORD *)(a1 + 8) = sub_141911DB0(&unk_141A506A4, &v99);
          *(_QWORD *)a1 = 2;
          goto LABEL_78;
        }
        v10 = v89;
        v89 = -1;
        if ( v10 == -1 )
        {
          v112 = v117;
          v111 = v119;
          v110 = v116;
          v109 = v118;
          v108 = v115;
          v107 = v114;
          v106 = v122;
          v105 = v121;
          v104 = v120;
          v103 = v123;
          v102 = v125;
          v126 = v113;
          v101 = -1;
          v11 = sub_141911F40(aValueIsMissing, 16);
          goto LABEL_138;
        }
        v99.m256i_i8[0] = v10;
        *(_OWORD *)&v99.m256i_u64[2] = *(_OWORD *)&v90[15];
        *(_OWORD *)&v99.m256i_i8[1] = *(_OWORD *)v90;
        LOBYTE(v124) = v10;
        if ( v10 == 4 )
        {
          sub_14063CF10(&v94, &v99.m256i_u64[1]);
          v11 = v94.m256i_i64[1];
          if ( v94.m256i_i64[0] == -1 )
            goto LABEL_138;
          __SET_PAIR__(v93, v124, *(_OWORD *)v94.m256i_i8);
          v57 = v94.m256i_i64[0];
          v76 = v94.m256i_i64[2];
          v58 = *(_OWORD *)&v94.m256i_u64[1];
LABEL_8:
          v5 = v97;
LABEL_9:
          v6 = v98;
          v2 = v96;
          continue;
        }
        v52 = sub_14190A750(&v99, &v100, &unk_1419EFCE8);
        v94.m256i_i64[1] = v52;
        v94.m256i_i64[0] = -1;
        v112 = v117;
        v111 = v119;
        v110 = v116;
        v109 = v118;
        v108 = v115;
        v107 = v114;
        v106 = v122;
        v105 = v121;
        v104 = v120;
        v103 = v123;
        v102 = v125;
        v126 = v113;
        v101 = -1;
        sub_140409B40(&v99);
        v11 = v52;
LABEL_138:
        *(_QWORD *)(a1 + 8) = v11;
        *(_QWORD *)a1 = 2;
        v25 = v117;
        if ( v117 > 0 )
LABEL_84:
          sub_140001660(v84, v25, 1);
LABEL_85:
        if ( v119 > 0 )
          sub_140001660(v81, v119, 1);
        if ( v116 > 0 )
          sub_140001660(v80, v116, 1);
        if ( v118 > 0 )
          sub_140001660(v79, v118, 1);
        if ( v115 > 0 )
          sub_140001660(v78, v115, 1);
        if ( v114 > 0 )
          sub_140001660(v77, v114, 1);
        v26 = v122;
        if ( (_BYTE)v113 != 0xFF )
        {
          v75 = v122;
          v74 = v121;
          v73 = v120;
          v72 = v123;
          v71 = v125;
          sub_140409B40(&v59);
        }
        if ( (unsigned __int64)(v26 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
          sub_140001660(v97, v26, 1);
        v27 = v96;
        v28 = v98;
        if ( v121 > 0 )
          sub_140001660(v83, v121, 1);
        if ( v120 > 0 )
          sub_140001660(v82, v120, 1);
        if ( (unsigned __int64)(v123 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          v29 = v125;
          if ( (unsigned __int64)(v125 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_108;
LABEL_105:
          if ( *(_DWORD *)a1 == 2 )
            goto LABEL_106;
LABEL_109:
          sub_1418F44E0(v53, (const __m128i *)a1, 0x160u);
          if ( v88 )
          {
            *(_QWORD *)(a1 + 8) = sub_1419120F0(v60, &off_1419EFC30, &unk_1419EFC40);
            *(_QWORD *)a1 = 2;
            sub_14040CF40(v53);
          }
          sub_140DF2FD0(v87);
        }
        else
        {
          sub_140001660(v28, v123, 1);
          v29 = v125;
          if ( (unsigned __int64)(v125 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_105;
LABEL_108:
          sub_140001660(v27, v29, 1);
          if ( *(_DWORD *)a1 != 2 )
            goto LABEL_109;
LABEL_106:
          sub_140DF2FD0(v87);
        }
        if ( v89 != -1 )
          sub_140409B40(&v89);
        if ( (*v91 & 6) != 4 )
LABEL_115:
          sub_140409B40(v91);
        return a1;
      case 0xF:
        v17 = v89;
        v89 = -1;
        if ( v17 == -1 )
          goto LABEL_136;
        v99.m256i_i8[0] = v17;
        *(_OWORD *)&v99.m256i_u64[2] = *(_OWORD *)&v90[15];
        *(_OWORD *)&v99.m256i_i8[1] = *(_OWORD *)v90;
        v112 = v117;
        v111 = v119;
        v110 = v116;
        v109 = v118;
        v108 = v115;
        v107 = v114;
        v106 = v122;
        v105 = v121;
        v104 = v120;
        v103 = v123;
        v102 = v125;
        v126 = v113;
        v101 = v124;
        sub_140409B40(&v99);
        goto LABEL_8;
      default:
        if ( v125 == -1 )
        {
          v94.m256i_i64[0] = (__int64)aId_3;
          v99.m256i_i64[0] = (__int64)&v94;
          v99.m256i_i64[1] = (__int64)sub_140186EE0;
          v94.m256i_i64[1] = 2;
          v112 = v117;
          v111 = v119;
          v110 = v116;
          v109 = v118;
          v108 = v115;
          v107 = v114;
          v106 = v122;
          v105 = v121;
          v104 = v120;
          v103 = v123;
          v102 = -1;
          v126 = v113;
          v101 = v124;
          v41 = sub_141911DB0(&unk_141A50628, &v99);
LABEL_157:
          v2 = v41;
          v125 = -1;
          goto LABEL_77;
        }
        v31 = v123;
        v32 = v123 == -1;
        if ( v123 == -1 )
          v31 = 0;
        v123 = v31;
        v33 = v98;
        if ( v32 )
          v33 = 1;
        v98 = v33;
        v34 = v86;
        if ( v32 )
          v34 = 0;
        v86 = v34;
        v35 = v120;
        if ( v120 == -2 )
          v35 = -1;
        v120 = v35;
        v36 = v121;
        if ( v121 == -2 )
          v36 = -1;
        v121 = v36;
        v37 = v122;
        v38 = v122 == -1;
        if ( v122 == -1 )
          v37 = 0;
        v122 = v37;
        v39 = v97;
        if ( v38 )
          v39 = 1;
        v40 = v85;
        if ( v38 )
          v40 = 0;
        v85 = v40;
        if ( (_BYTE)v113 == 0xFF )
        {
          v113 = 0;
        }
        else
        {
          *(_OWORD *)((char *)&v99.m256i_u64[1] + 7) = *(_OWORD *)&v59.m256i_u64[2];
          *(_OWORD *)v99.m256i_i8 = *(_OWORD *)&v59.m256i_i8[1];
        }
        v42 = v92;
        v43 = v114;
        if ( v114 == -2 )
          v43 = -1;
        v44 = v115;
        if ( v115 == -2 )
          v44 = -1;
        v45 = v118;
        if ( v118 == -2 )
          v45 = -1;
        v46 = v116;
        if ( v116 == -2 )
          v46 = -1;
        v47 = v119;
        if ( v119 == -2 )
          v47 = -1;
        v48 = -2;
        if ( v117 != -3 )
          v48 = v117;
        if ( (v95 & 1) == 0 )
          v42 = 0;
        if ( v8 == 2 )
          v8 = 0;
        v49 = v124;
        v50 = v93;
        if ( v124 == -1 )
        {
          v50 = 8;
          v49 = 0;
        }
        v51 = v76;
        if ( v124 == -1 )
          v51 = 0;
        *(_QWORD *)a1 = v8;
        *(_QWORD *)(a1 + 8) = v70;
        *(_QWORD *)(a1 + 16) = v125;
        *(_QWORD *)(a1 + 24) = v96;
        *(_QWORD *)(a1 + 32) = v68;
        *(_QWORD *)(a1 + 40) = v123;
        *(_QWORD *)(a1 + 48) = v98;
        *(_QWORD *)(a1 + 56) = v86;
        *(_QWORD *)(a1 + 64) = v122;
        *(_QWORD *)(a1 + 72) = v39;
        *(_QWORD *)(a1 + 80) = v85;
        *(_QWORD *)(a1 + 88) = v49;
        *(_QWORD *)(a1 + 96) = v50;
        *(_QWORD *)(a1 + 104) = v51;
        *(_QWORD *)(a1 + 112) = v120;
        *(_QWORD *)(a1 + 120) = v82;
        *(_QWORD *)(a1 + 128) = v67;
        *(_QWORD *)(a1 + 136) = v121;
        *(_QWORD *)(a1 + 144) = v83;
        *(_QWORD *)(a1 + 152) = v66;
        *(_QWORD *)(a1 + 160) = v43;
        *(_QWORD *)(a1 + 168) = v77;
        *(_QWORD *)(a1 + 176) = v65;
        *(_QWORD *)(a1 + 184) = v44;
        *(_QWORD *)(a1 + 192) = v78;
        *(_QWORD *)(a1 + 200) = v64;
        *(_QWORD *)(a1 + 208) = v45;
        *(_QWORD *)(a1 + 216) = v79;
        *(_QWORD *)(a1 + 224) = v63;
        *(_QWORD *)(a1 + 232) = v46;
        *(_QWORD *)(a1 + 240) = v80;
        *(_QWORD *)(a1 + 248) = v62;
        *(_QWORD *)(a1 + 256) = v47;
        *(_QWORD *)(a1 + 264) = v81;
        *(_QWORD *)(a1 + 272) = v61;
        *(_QWORD *)(a1 + 280) = v48;
        *(_QWORD *)(a1 + 288) = v84;
        *(_QWORD *)(a1 + 296) = v69;
        *(_BYTE *)(a1 + 304) = v113;
        *(_OWORD *)(a1 + 320) = *(_OWORD *)((char *)&v99.m256i_u64[1] + 7);
        *(_OWORD *)(a1 + 305) = *(_OWORD *)v99.m256i_i8;
        *(_QWORD *)(a1 + 336) = v42;
        *(_BYTE *)(a1 + 344) = 0;
        if ( *(_DWORD *)a1 == 2 )
          goto LABEL_106;
        goto LABEL_109;
    }
  }
}
