// win 1.2.7 | module src/core/codex_app_server.rs | ea 0x140c8dc00 | name sub_140C8DC00
// win 1.2.7 | module src/core/codex_app_server.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140C8DC00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rax
  __int128 v12; // xmm0
  __int64 v13; // rax
  __int64 v14; // rdx
  __int128 v15; // xmm1
  __int128 v16; // xmm2
  __int128 v17; // xmm3
  __int64 v19; // r14
  __int64 v20; // rdx
  __int64 v21; // r12
  __int64 v22; // rdi
  __int64 v23; // r14
  __int64 v24; // rbx
  __int64 v25; // r15
  __int64 v26; // r13
  __int64 v27; // rdx
  _OWORD *v28; // rax
  __int64 v29; // rbx
  __int64 v30; // rdi
  _OWORD *v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rdi
  __int64 v37; // r14
  __int64 v38; // rcx
  __int64 v39; // r15
  __int64 v40; // rdx
  __int64 v41; // r12
  _QWORD *v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rax
  __int64 v45; // rcx
  void *v46; // rax
  __int64 v47; // r12
  __int64 v48; // r15
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 v61; // rdx
  __int64 v62; // rax
  _OWORD *v63; // rax
  __int64 v64; // r14
  __int64 v65; // r12
  __int64 v66; // rcx
  __int64 v67; // rdx
  __int64 v68; // rax
  __int128 v69; // xmm1
  __int128 v70; // xmm2
  char *v71; // [rsp+40h] [rbp-40h] BYREF
  __int128 v72; // [rsp+48h] [rbp-38h]
  __int64 v73; // [rsp+58h] [rbp-28h]
  __int64 v74; // [rsp+60h] [rbp-20h]
  __int64 v75; // [rsp+68h] [rbp-18h]
  __m256i v76; // [rsp+70h] [rbp-10h]
  __int128 v77; // [rsp+90h] [rbp+10h]
  __int64 v78; // [rsp+A0h] [rbp+20h]
  __int128 v79; // [rsp+A8h] [rbp+28h]
  __int128 v80; // [rsp+B8h] [rbp+38h]
  __int128 v81; // [rsp+C8h] [rbp+48h]
  __int128 v82; // [rsp+D8h] [rbp+58h]
  __int64 v83; // [rsp+E8h] [rbp+68h]
  __int128 v84; // [rsp+F0h] [rbp+70h] BYREF
  __int64 v85; // [rsp+100h] [rbp+80h]
  __int64 v86; // [rsp+108h] [rbp+88h]
  char *v87; // [rsp+110h] [rbp+90h] BYREF
  __int128 v88; // [rsp+118h] [rbp+98h] BYREF
  __int64 v89; // [rsp+128h] [rbp+A8h]
  __int64 v90; // [rsp+130h] [rbp+B0h]
  __m512i v91; // [rsp+138h] [rbp+B8h]
  __int128 v92; // [rsp+178h] [rbp+F8h]
  __int128 v93; // [rsp+188h] [rbp+108h]
  __int128 v94; // [rsp+198h] [rbp+118h]
  __int128 v95; // [rsp+1A8h] [rbp+128h]
  __int64 v96; // [rsp+1B8h] [rbp+138h]
  __int64 v97; // [rsp+1C0h] [rbp+140h]
  __int64 v98; // [rsp+1C8h] [rbp+148h]
  __int64 v99; // [rsp+1D8h] [rbp+158h]
  __int64 v100; // [rsp+1E0h] [rbp+160h]
  __int64 v101; // [rsp+1F0h] [rbp+170h]
  __int64 v102; // [rsp+1F8h] [rbp+178h]
  __int64 v103; // [rsp+208h] [rbp+188h]
  __int64 v104; // [rsp+210h] [rbp+190h]
  __int64 v105; // [rsp+218h] [rbp+198h]
  __int64 v106; // [rsp+220h] [rbp+1A0h]
  __int64 v107; // [rsp+228h] [rbp+1A8h]
  __int64 v108; // [rsp+230h] [rbp+1B0h]
  __int64 v109; // [rsp+238h] [rbp+1B8h]
  _OWORD *v110; // [rsp+240h] [rbp+1C0h]
  __int64 v111; // [rsp+248h] [rbp+1C8h]
  unsigned __int8 v112; // [rsp+251h] [rbp+1D1h]
  __int64 v113; // [rsp+258h] [rbp+1D8h]
  __int64 v114; // [rsp+260h] [rbp+1E0h]
  __int64 v115; // [rsp+270h] [rbp+1F0h]
  __int64 v116; // [rsp+278h] [rbp+1F8h]
  __int64 v117; // [rsp+288h] [rbp+208h]
  __int64 v118; // [rsp+290h] [rbp+210h]
  __int64 v119; // [rsp+2A0h] [rbp+220h]
  __int64 v120; // [rsp+2A8h] [rbp+228h]
  __int64 v121; // [rsp+2B8h] [rbp+238h]
  __int64 v122; // [rsp+2C0h] [rbp+240h]
  __int64 v123; // [rsp+2D0h] [rbp+250h]
  __int64 v124; // [rsp+2D8h] [rbp+258h]
  __int64 v125; // [rsp+2E8h] [rbp+268h]
  __int64 v126; // [rsp+2F0h] [rbp+270h]
  __int64 v127; // [rsp+300h] [rbp+280h]
  __int64 v128; // [rsp+308h] [rbp+288h]
  _QWORD v129[3]; // [rsp+328h] [rbp+2A8h] BYREF
  _QWORD v130[2]; // [rsp+340h] [rbp+2C0h] BYREF
  _QWORD v131[2]; // [rsp+350h] [rbp+2D0h] BYREF
  __int128 v132; // [rsp+360h] [rbp+2E0h]
  __m256i v133; // [rsp+370h] [rbp+2F0h] BYREF
  __int128 v134; // [rsp+390h] [rbp+310h] BYREF
  __int128 v135; // [rsp+3A0h] [rbp+320h]
  __int64 v136; // [rsp+3B0h] [rbp+330h]
  __int64 v137; // [rsp+3B8h] [rbp+338h]
  char v138[24]; // [rsp+3C8h] [rbp+348h] BYREF
  __int64 v139; // [rsp+3E0h] [rbp+360h]
  __int64 v140; // [rsp+3E8h] [rbp+368h]
  __int64 v141; // [rsp+3F8h] [rbp+378h]
  __int64 v142; // [rsp+400h] [rbp+380h]
  __int64 v143; // [rsp+410h] [rbp+390h]
  __int64 v144; // [rsp+418h] [rbp+398h]
  __int64 v145; // [rsp+428h] [rbp+3A8h]
  __int64 v146; // [rsp+430h] [rbp+3B0h]
  __int64 v147; // [rsp+440h] [rbp+3C0h]
  __int64 v148; // [rsp+448h] [rbp+3C8h]
  __int64 v149; // [rsp+458h] [rbp+3D8h]
  __int64 v150; // [rsp+460h] [rbp+3E0h]
  __int64 v151; // [rsp+470h] [rbp+3F0h]
  __int64 v152; // [rsp+478h] [rbp+3F8h]
  __int64 v153; // [rsp+488h] [rbp+408h]
  __int64 v154; // [rsp+490h] [rbp+410h]
  char v155[48]; // [rsp+4A0h] [rbp+420h] BYREF
  __int64 v156; // [rsp+4D0h] [rbp+450h]
  __int64 v157; // [rsp+4D8h] [rbp+458h]
  __int64 v158; // [rsp+4E0h] [rbp+460h]
  __int64 v159; // [rsp+4E8h] [rbp+468h]
  __m256i v160; // [rsp+4F0h] [rbp+470h]
  __int128 v161; // [rsp+510h] [rbp+490h]
  __int64 v162; // [rsp+520h] [rbp+4A0h]
  __int128 v163; // [rsp+530h] [rbp+4B0h] BYREF
  __int64 v164; // [rsp+540h] [rbp+4C0h]
  __int64 v165; // [rsp+548h] [rbp+4C8h]
  __m256i v166; // [rsp+550h] [rbp+4D0h] BYREF
  __int64 v167; // [rsp+570h] [rbp+4F0h]
  __int64 v168; // [rsp+578h] [rbp+4F8h]
  __int64 v169; // [rsp+580h] [rbp+500h]
  __int64 v170; // [rsp+588h] [rbp+508h]
  __int64 v171; // [rsp+590h] [rbp+510h]
  __int64 v172; // [rsp+598h] [rbp+518h]
  __int64 v173; // [rsp+5A0h] [rbp+520h]
  __int64 v174; // [rsp+5A8h] [rbp+528h]
  __int64 v175; // [rsp+5B0h] [rbp+530h]
  __int64 v176; // [rsp+5B8h] [rbp+538h]
  __int64 v177; // [rsp+5C0h] [rbp+540h]
  __int64 v178; // [rsp+5C8h] [rbp+548h]
  __int64 v179; // [rsp+5D0h] [rbp+550h]
  __int64 v180; // [rsp+5D8h] [rbp+558h]
  __int64 v181; // [rsp+5E0h] [rbp+560h]
  __int64 v182; // [rsp+5E8h] [rbp+568h]
  __int64 v183; // [rsp+5F0h] [rbp+570h]
  __int64 v184; // [rsp+5F8h] [rbp+578h]
  __int64 v185; // [rsp+600h] [rbp+580h]
  __int64 v186; // [rsp+608h] [rbp+588h]
  __int64 v187; // [rsp+610h] [rbp+590h]
  __int64 v188; // [rsp+618h] [rbp+598h]
  __int64 v189; // [rsp+620h] [rbp+5A0h]
  __int64 v190; // [rsp+628h] [rbp+5A8h]
  __int64 v191; // [rsp+630h] [rbp+5B0h]
  __int64 v192; // [rsp+638h] [rbp+5B8h]
  __int64 v193; // [rsp+640h] [rbp+5C0h]
  __int64 v194; // [rsp+648h] [rbp+5C8h]
  __int64 v195; // [rsp+650h] [rbp+5D0h]
  __int64 v196; // [rsp+658h] [rbp+5D8h]
  __int64 v197; // [rsp+660h] [rbp+5E0h]
  __int64 v198; // [rsp+668h] [rbp+5E8h]
  __int64 v199; // [rsp+670h] [rbp+5F0h]
  __int64 v200; // [rsp+678h] [rbp+5F8h]
  __int64 v201; // [rsp+680h] [rbp+600h]
  _OWORD *v202; // [rsp+688h] [rbp+608h]
  __int64 v203; // [rsp+690h] [rbp+610h]
  __int64 v204; // [rsp+698h] [rbp+618h] BYREF
  _QWORD *v205; // [rsp+6A0h] [rbp+620h]
  __int64 v206; // [rsp+6A8h] [rbp+628h]
  __int64 v207; // [rsp+6B0h] [rbp+630h]
  __int64 v208; // [rsp+6B8h] [rbp+638h]
  __int64 v209; // [rsp+6C0h] [rbp+640h]
  unsigned __int8 v210; // [rsp+6CDh] [rbp+64Dh]
  char v211; // [rsp+6CEh] [rbp+64Eh]
  char v212; // [rsp+6CFh] [rbp+64Fh]
  __int64 v213; // [rsp+6D0h] [rbp+650h]

  v213 = -2;
  v6 = sub_140E91160(a3, a4);
  if ( !v7 )
  {
    nullsub_1(v8);
    v13 = sub_140001650(22, 1);
    if ( !v13 )
      sub_141938D2B(1, 22);
    *(__m128i *)v13 = xmmword_141A3DA81;
    *(_QWORD *)(v13 + 14) = 0xBAA9E7BAB8E4BD83uLL;
    *(_QWORD *)(a1 + 8) = 9;
    *(_QWORD *)(a1 + 16) = 22;
    *(_QWORD *)(a1 + 24) = v13;
    *(_QWORD *)(a1 + 32) = 22;
    goto LABEL_10;
  }
  sub_1402D1BD0(&v87, a2, v6, v7);
  if ( v87 != (char *)-1LL )
  {
    if ( (_DWORD)v87 == 2 )
    {
      nullsub_1(v9);
      v10 = 21;
      v11 = sub_140001650(21, 1);
      if ( !v11 )
        sub_141938D2B(1, 21);
      *(_OWORD *)v11 = xmmword_141A3B7E6;
      *(_QWORD *)(v11 + 13) = 0x8BA8E7BFBAE794BAuLL;
      v12 = xmmword_141A38720;
      goto LABEL_9;
    }
    v19 = v90;
    v200 = v91.m512i_i64[0];
    v167 = v91.m512i_i64[3];
    v184 = v91.m512i_i64[2];
    v182 = v91.m512i_i64[6];
    v199 = v91.m512i_i64[5];
    v181 = *((_QWORD *)&v92 + 1);
    v198 = v92;
    v197 = *((_QWORD *)&v93 + 1);
    v180 = v94;
    v179 = *((_QWORD *)&v95 + 1);
    v196 = v95;
    v195 = v97;
    v178 = v98;
    v194 = v99;
    v177 = v100;
    v193 = v101;
    v176 = v102;
    v20 = v103;
    v192 = v113;
    v175 = v114;
    v191 = v115;
    v174 = v116;
    v190 = v117;
    v173 = v118;
    v189 = v119;
    v172 = v120;
    v188 = v121;
    v171 = v122;
    v187 = v123;
    v170 = v124;
    v186 = v125;
    v169 = v126;
    v185 = v127;
    v168 = v128;
    if ( v103 == -1 )
    {
      nullsub_1(v9);
      v28 = (_OWORD *)sub_140001650(74, 1);
      if ( !v28 )
      {
        v209 = v19;
        sub_141938D2B(1, 74);
      }
      *(_OWORD *)((char *)v28 + 58) = *(__int128 *)((char *)&xmmword_141A3B85B + 10);
      v28[3] = xmmword_141A3B85B;
      v28[2] = xmmword_141A3B84B;
      v28[1] = xmmword_141A3B83B;
      *v28 = xmmword_141A3B82B;
      *(_QWORD *)(a1 + 8) = 10;
      *(_QWORD *)(a1 + 16) = 74;
      *(_QWORD *)(a1 + 24) = v28;
      *(_QWORD *)(a1 + 32) = 74;
      *(_QWORD *)a1 = -1;
LABEL_51:
      if ( v19 )
        sub_140001660(v200, v19, 1);
      if ( v184 )
        sub_140001660(v167, v184, 1);
      v27 = v199;
      if ( (unsigned __int64)(v199 - 1) >= 0xFFFFFFFFFFFFFFFEuLL )
      {
LABEL_57:
        if ( (unsigned __int64)(v198 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
          v49 = v197;
          if ( (unsigned __int64)(v197 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          {
LABEL_59:
            v50 = v196;
            if ( (unsigned __int64)(v196 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_60;
            goto LABEL_74;
          }
        }
        else
        {
          sub_140001660(v181, v198, 1);
          v49 = v197;
          if ( (unsigned __int64)(v197 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_59;
        }
        sub_140001660(v180, v49, 1);
        v50 = v196;
        if ( (unsigned __int64)(v196 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_60:
          sub_140001660(v179, v50, 1);
          v51 = v195;
          if ( (unsigned __int64)(v195 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_61;
          goto LABEL_75;
        }
LABEL_74:
        v51 = v195;
        if ( (unsigned __int64)(v195 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_61:
          v52 = v194;
          if ( (unsigned __int64)(v194 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_62;
          goto LABEL_76;
        }
LABEL_75:
        sub_140001660(v178, v51, 1);
        v52 = v194;
        if ( (unsigned __int64)(v194 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_62:
          sub_140001660(v177, v52, 1);
          v53 = v193;
          if ( (unsigned __int64)(v193 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_63;
          goto LABEL_77;
        }
LABEL_76:
        v53 = v193;
        if ( (unsigned __int64)(v193 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_63:
          v54 = v192;
          if ( (unsigned __int64)(v192 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_64;
          goto LABEL_78;
        }
LABEL_77:
        sub_140001660(v176, v53, 1);
        v54 = v192;
        if ( (unsigned __int64)(v192 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_64:
          sub_140001660(v175, v54, 1);
          v55 = v191;
          if ( (unsigned __int64)(v191 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_65;
          goto LABEL_79;
        }
LABEL_78:
        v55 = v191;
        if ( (unsigned __int64)(v191 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_65:
          v56 = v190;
          if ( (unsigned __int64)(v190 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_66;
          goto LABEL_80;
        }
LABEL_79:
        sub_140001660(v174, v55, 1);
        v56 = v190;
        if ( (unsigned __int64)(v190 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_66:
          sub_140001660(v173, v56, 1);
          v57 = v189;
          if ( (unsigned __int64)(v189 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_67;
          goto LABEL_81;
        }
LABEL_80:
        v57 = v189;
        if ( (unsigned __int64)(v189 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_67:
          v58 = v188;
          if ( (unsigned __int64)(v188 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_68;
          goto LABEL_82;
        }
LABEL_81:
        sub_140001660(v172, v57, 1);
        v58 = v188;
        if ( (unsigned __int64)(v188 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_68:
          sub_140001660(v171, v58, 1);
          v59 = v187;
          if ( (unsigned __int64)(v187 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_69;
          goto LABEL_83;
        }
LABEL_82:
        v59 = v187;
        if ( (unsigned __int64)(v187 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_69:
          v60 = v186;
          if ( (unsigned __int64)(v186 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_70;
          goto LABEL_84;
        }
LABEL_83:
        sub_140001660(v170, v59, 1);
        v60 = v186;
        if ( (unsigned __int64)(v186 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
LABEL_70:
          sub_140001660(v169, v60, 1);
          v61 = v185;
          if ( (unsigned __int64)(v185 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            return a1;
LABEL_85:
          sub_140001660(v168, v61, 1);
          return a1;
        }
LABEL_84:
        v61 = v185;
        if ( (unsigned __int64)(v185 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          return a1;
        goto LABEL_85;
      }
LABEL_56:
      sub_140001660(v182, v27, 1);
      goto LABEL_57;
    }
    v183 = v104;
    v201 = v106;
    v203 = v107;
    v202 = v110;
    v210 = v112;
    if ( (v112 & 1) != 0 )
    {
      v207 = v103;
      v208 = v109;
      v209 = v90;
      v165 = v91.m512i_i64[1];
      v156 = v105;
      v21 = v108;
      sub_140C1C870(&v87);
      v22 = *((_QWORD *)&v88 + 1);
      v23 = v88;
      v24 = v89;
      v25 = v90;
      v26 = v91.m512i_i64[0];
      v133 = *(__m256i *)&v91.m512i_u64[1];
      v134 = *(_OWORD *)&v91.m512i_u64[5];
      *(_QWORD *)&v135 = v91.m512i_i64[7];
      if ( v87 == (char *)2 )
      {
        v160 = v133;
        v161 = v134;
        v162 = v135;
        if ( (_QWORD)v88 == -1 )
          goto LABEL_16;
      }
      else
      {
        v83 = v96;
        v82 = v95;
        v81 = v94;
        v80 = v93;
        v79 = v92;
        v72 = v88;
        v73 = v89;
        v74 = v90;
        v75 = v91.m512i_i64[0];
        v76 = v133;
        v77 = v134;
        v78 = v135;
        v71 = v87;
        v33 = sub_140E91160(v200, v165);
        v36 = v34;
        if ( v34 )
        {
          v37 = v33;
          v131[0] = v33;
          v131[1] = v34;
          v39 = sub_140E91160(v203, v21);
          v41 = v40;
          v130[0] = v39;
          v130[1] = v40;
          if ( v40 )
          {
            *(_QWORD *)&v163 = 0;
            v164 = 0;
            nullsub_1(v38);
            v42 = (_QWORD *)sub_140001650(8, 1);
            if ( !v42 )
              sub_141938D2B(1, 8);
            *v42 = 0x6449646165726874LL;
            v204 = 8;
            v205 = v42;
            v206 = 8;
            v212 = 1;
            sub_14040FB10(&v133, v131);
            if ( v133.m256i_i8[0] == -1 )
            {
              v166.m256i_i64[0] = v133.m256i_i64[1];
              sub_141939040(
                (unsigned int)aCalledResultUn_13,
                43,
                (unsigned int)&v166,
                (unsigned int)&off_141A3BB28,
                (__int64)&off_141A3DAB8);
            }
            v166 = v133;
            v212 = 0;
            sub_140E72AA0(&v133, &v163, &v204, &v166);
            if ( v133.m256i_i8[0] != -1 )
              sub_14002F9D0(&v133);
            nullsub_1(v43);
            v44 = sub_140001650(3, 1);
            if ( !v44 )
              sub_141938D2B(1, 3);
            *(_BYTE *)(v44 + 2) = 100;
            *(_WORD *)v44 = 30563;
            v204 = 3;
            v205 = (_QWORD *)v44;
            v206 = 3;
            v211 = 1;
            sub_14040FB10(&v133, v130);
            if ( v133.m256i_i8[0] == -1 )
            {
              v166.m256i_i64[0] = v133.m256i_i64[1];
              sub_141939040(
                (unsigned int)aCalledResultUn_13,
                43,
                (unsigned int)&v166,
                (unsigned int)&off_141A3BB28,
                (__int64)&off_141A3DAB8);
            }
            v166 = v133;
            v211 = 0;
            sub_140E72AA0(&v133, &v163, &v204, &v166);
            if ( v133.m256i_i8[0] != -1 )
              sub_14002F9D0(&v133);
            nullsub_1(v45);
            v46 = (void *)sub_140001650(12, 1);
            if ( !v46 )
              sub_141938D2B(1, 12);
            qmemcpy(v46, "excludeTurns", 12);
            v204 = 12;
            v205 = v46;
            v206 = 12;
            v133.m256i_i16[0] = 257;
            sub_140E72AA0(&v166, &v163, &v204, &v133);
            if ( v166.m256i_i8[0] != -1 )
              sub_14002F9D0(&v166);
            *(_OWORD *)&v133.m256i_u64[1] = v163;
            v133.m256i_i64[3] = v164;
            v133.m256i_i8[0] = 5;
            sub_140C1BC30((__int128 *)&v87, (unsigned int)&v71);
            v159 = v41;
            v158 = v39;
            v157 = v37;
            v47 = v36;
            v23 = (__int64)v87;
            v24 = *((_QWORD *)&v88 + 1);
            v22 = v88;
            v25 = v89;
            v26 = v90;
            if ( v87 == (char *)-1LL )
            {
              v84 = v88;
              v85 = v89;
              v86 = v90;
              sub_140421AD0(&v87, &v84, "ThreadReadResponsethread", 18, &off_141A3A6B8, 1, 0);
              v64 = v47;
              v25 = v157;
              v65 = v158;
              v26 = v159;
              v24 = (__int64)v87;
              v22 = v88;
              if ( v87 == (char *)2 )
              {
                v23 = 3;
              }
              else
              {
                sub_1418F44E0((__m128i *)&v133.m256i_u64[2], (const __m128i *)((char *)&v88 + 8), 0x150u);
                v133.m256i_i64[0] = v24;
                v133.m256i_i64[1] = v22;
                sub_140E91160(v133.m256i_i64[3], v134);
                if ( v67 && ((_QWORD)v134 != v64 || (unsigned int)sub_1418F4B70(v133.m256i_i64[3], v25)) )
                {
                  if ( (unsigned __int8)sub_140C47670(v135, *((_QWORD *)&v135 + 1), v65, v26) )
                  {
                    v24 = v133.m256i_i64[3];
                    v22 = v133.m256i_i64[2];
                    v26 = *((_QWORD *)&v134 + 1);
                    v25 = v134;
                    *(_OWORD *)v160.m256i_i8 = v135;
                    if ( v139 != -1 && v139 )
                      sub_140001660(v140, v139, 1);
                    if ( v141 != -1 && v141 )
                      sub_140001660(v142, v141, 1);
                    if ( v136 )
                      sub_140001660(v137, v136, 1);
                    sub_14002F9D0(v155);
                    if ( v143 != -1 && v143 )
                      sub_140001660(v144, v143, 1);
                    if ( v145 != -1 && v145 )
                      sub_140001660(v146, v145, 1);
                    if ( v147 != -1 && v147 )
                      sub_140001660(v148, v147, 1);
                    if ( v149 != -1 && v149 )
                      sub_140001660(v150, v149, 1);
                    if ( v151 != -1 && v151 )
                      sub_140001660(v152, v151, 1);
                    if ( v153 > 0 )
                      sub_140001660(v154, v153, 1);
                    sub_1401901C0(v138);
                    sub_140BAC0A0(&v71);
LABEL_16:
                    v132 = *(_OWORD *)v160.m256i_i8;
                    *(_OWORD *)(a1 + 80) = *(_OWORD *)v160.m256i_i8;
                    *(_QWORD *)a1 = v209;
                    *(_QWORD *)(a1 + 8) = v200;
                    *(_QWORD *)(a1 + 16) = v165;
                    *(_QWORD *)(a1 + 48) = v207;
                    *(_QWORD *)(a1 + 56) = v183;
                    *(_QWORD *)(a1 + 64) = v156;
                    *(_QWORD *)(a1 + 24) = v22;
                    *(_QWORD *)(a1 + 32) = v24;
                    *(_QWORD *)(a1 + 40) = v25;
                    *(_QWORD *)(a1 + 72) = v26;
                    *(_BYTE *)(a1 + 96) = 1;
                    if ( v201 )
                      sub_140001660(v203, v201, 1);
                    if ( (unsigned __int64)(v208 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
                      sub_140001660(v202, v208, 1);
                    if ( v184 )
                      sub_140001660(v167, v184, 1);
                    v27 = v199;
                    if ( (unsigned __int64)(v199 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
                      goto LABEL_57;
                    goto LABEL_56;
                  }
                  v87 = (char *)&v134 + 8;
                  *(_QWORD *)&v88 = sub_1400015F0;
                  sub_1416ABFD0(v129, &unk_141A3DADB, &v87);
                  v22 = v129[0];
                  v24 = v129[1];
                  v25 = v129[2];
                }
                else
                {
                  nullsub_1(v66);
                  v25 = 49;
                  v68 = sub_140001650(49, 1);
                  if ( !v68 )
                    sub_141938D2B(1, 49);
                  v24 = v68;
                  *(_OWORD *)(v68 + 32) = xmmword_141A3DB3B;
                  *(_OWORD *)(v68 + 16) = xmmword_141A3DB2B;
                  *(_OWORD *)v68 = xmmword_141A3DB1B;
                  *(_BYTE *)(v68 + 48) = 68;
                  v22 = 49;
                }
                v23 = 10;
                sub_14029D3A0(&v133);
              }
            }
            else
            {
              v162 = v91.m512i_i64[6];
              v161 = *(_OWORD *)&v91.m512i_u64[4];
              v160 = *(__m256i *)v91.m512i_i8;
            }
          }
          else
          {
            nullsub_1(v38);
            v63 = (_OWORD *)sub_140001650(30, 1);
            if ( !v63 )
              sub_141938D2B(1, 30);
            v24 = (__int64)v63;
            *(_OWORD *)((char *)v63 + 14) = *(__int128 *)((char *)&xmmword_141A3DA99 + 14);
            *v63 = xmmword_141A3DA99;
            v23 = 9;
            v25 = 30;
            v22 = 30;
          }
        }
        else
        {
          nullsub_1(v35);
          v25 = 22;
          v62 = sub_140001650(22, 1);
          if ( !v62 )
            sub_141938D2B(1, 22);
          v24 = v62;
          *(__m128i *)v62 = xmmword_141A3DA81;
          *(_QWORD *)(v62 + 14) = 0xBAA9E7BAB8E4BD83uLL;
          v23 = 9;
          v22 = 22;
        }
        sub_140BAC0A0(&v71);
      }
      v69 = *(_OWORD *)&v160.m256i_u64[2];
      v70 = v161;
      v132 = *(_OWORD *)v160.m256i_i8;
      *(_QWORD *)(a1 + 96) = v162;
      *(_OWORD *)(a1 + 80) = v70;
      *(_OWORD *)(a1 + 64) = v69;
      *(_OWORD *)(a1 + 48) = v132;
      *(_QWORD *)(a1 + 8) = v23;
      *(_QWORD *)(a1 + 16) = v22;
      *(_QWORD *)(a1 + 24) = v24;
      *(_QWORD *)(a1 + 32) = v25;
      *(_QWORD *)(a1 + 40) = v26;
      *(_QWORD *)a1 = -1;
      v19 = v209;
      v29 = v208;
      v20 = v207;
      if ( !v207 )
        goto LABEL_47;
    }
    else
    {
      v29 = v109;
      if ( v109 == -1 )
      {
        v48 = v103;
        nullsub_1(v112);
        v30 = 48;
        v31 = (_OWORD *)sub_140001650(48, 1);
        if ( !v31 )
        {
          v207 = v48;
          v208 = -1;
          v209 = v19;
          sub_141938D2B(1, 48);
        }
        v31[2] = xmmword_141A3B81B;
        v31[1] = xmmword_141A3B80B;
        *v31 = xmmword_141A3B7FB;
        v32 = 48;
        v20 = v48;
      }
      else
      {
        v30 = v111;
        v31 = v202;
        v32 = v109;
      }
      *(_QWORD *)(a1 + 8) = 10;
      *(_QWORD *)(a1 + 16) = v32;
      *(_QWORD *)(a1 + 24) = v31;
      *(_QWORD *)(a1 + 32) = v30;
      *(_QWORD *)a1 = -1;
      if ( !v20 )
        goto LABEL_47;
    }
    sub_140001660(v183, v20, 1);
LABEL_47:
    if ( v201 )
      sub_140001660(v203, v201, 1);
    if ( (((unsigned __int64)(v29 - 1) < 0xFFFFFFFFFFFFFFFEuLL) & v210) != 0 )
      sub_140001660(v202, v29, 1);
    goto LABEL_51;
  }
  v12 = v88;
  v11 = v89;
  v10 = v90;
  v14 = v91.m512i_i64[3];
  v15 = *(_OWORD *)&v91.m512i_u64[6];
  v16 = *(_OWORD *)&v91.m512i_u64[1];
  v17 = *(_OWORD *)&v91.m512i_u64[4];
  *(_QWORD *)(a1 + 40) = v91.m512i_i64[0];
  *(_OWORD *)(a1 + 48) = v16;
  *(_QWORD *)(a1 + 64) = v14;
  *(_OWORD *)(a1 + 72) = v17;
  *(_OWORD *)(a1 + 88) = v15;
LABEL_9:
  *(_OWORD *)(a1 + 8) = v12;
  *(_QWORD *)(a1 + 24) = v11;
  *(_QWORD *)(a1 + 32) = v10;
LABEL_10:
  *(_QWORD *)a1 = -1;
  return a1;
}
