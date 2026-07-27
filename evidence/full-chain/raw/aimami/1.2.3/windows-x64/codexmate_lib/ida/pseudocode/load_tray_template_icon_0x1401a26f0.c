// module: codexmate_lib
// addr: 0x1401a26f0
// name: load_tray_template_icon
// win 1.2.1 | module src/lib.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::load_tray_template_icon | 跨平台字符串签名匹配(名↔函数一致)
_OWORD *__fastcall load_tray_template_icon(__int64 a1, __int64 a2)
{
  __int64 v2; // r15
  __int64 v3; // r12
  __int64 v4; // rsi
  char v5; // of
  volatile signed __int64 *v6; // rcx
  __int64 v7; // rt0
  volatile signed __int64 *v8; // rdx
  __int64 v9; // rt0
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // r11
  bool v13; // of
  volatile signed __int64 *v14; // r10
  __int64 v15; // rt0
  __m512i *v16; // rcx
  __int64 v17; // rt0
  int v18; // eax
  volatile signed __int64 *v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rt0
  _QWORD *v22; // rbx
  bool v23; // zf
  bool v24; // of
  volatile signed __int64 *v25; // r14
  __int64 v26; // rt0
  volatile signed __int64 *v27; // r13
  __int64 v28; // rt0
  __int64 v29; // r8
  __int64 v30; // rt0
  volatile signed __int64 *v31; // r15
  __int64 v32; // rt0
  __int64 v33; // rt0
  volatile signed __int64 *v34; // rsi
  __int64 v35; // rt0
  __int64 v36; // rt0
  char v37; // dl
  __int64 v38; // rt0
  volatile signed __int64 *v39; // rcx
  __int64 v40; // rt0
  volatile signed __int64 *v41; // rdi
  __int64 v42; // rt0
  PVOID v43; // r12
  __int64 v44; // r13
  volatile signed __int64 *v45; // r15
  __int64 v46; // rt0
  volatile signed __int64 *v47; // rbx
  __int64 v48; // rsi
  __int64 v49; // r14
  unsigned __int8 *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  unsigned __int8 *v53; // rbx
  __int64 *v54; // rsi
  int v55; // eax
  __int64 v56; // rcx
  unsigned __int8 v57; // al
  char v58; // bl
  __int64 v59; // rdx
  __int64 v60; // rcx
  PVOID v61; // rcx
  char v62; // al
  __int64 v63; // rdx
  PVOID v64; // rcx
  _OWORD *result; // rax
  __int64 v66; // rax
  HANDLE v67; // rsi
  HANDLE v68; // r14
  _OWORD *v69; // rsi
  __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // rsi
  char v75; // of
  volatile signed __int64 *v76; // rsi
  __int64 v77; // rt0
  volatile signed __int64 *v78; // rdi
  __int64 v79; // rt0
  __int64 v80; // rcx
  void *v81; // rax
  volatile signed __int64 *v82; // rsi
  __int64 v83; // rdi
  __int64 v84; // rcx
  __int128 v85; // xmm0
  __int128 v86; // xmm1
  char v87; // of
  volatile signed __int64 *v88; // rdi
  __int64 v89; // rt0
  volatile signed __int64 *v90; // rbx
  __int64 v91; // rt0
  __int128 *v92; // [rsp+28h] [rbp-58h] BYREF
  __int128 v93; // [rsp+30h] [rbp-50h]
  __int64 v94; // [rsp+40h] [rbp-40h]
  __int128 v95; // [rsp+48h] [rbp-38h]
  char v96; // [rsp+A8h] [rbp+28h]
  __int64 v97; // [rsp+B0h] [rbp+30h]
  __int64 v98; // [rsp+B8h] [rbp+38h]
  volatile signed __int64 *v99; // [rsp+C0h] [rbp+40h]
  volatile signed __int64 *v100; // [rsp+C8h] [rbp+48h]
  __m512i v101; // [rsp+3A0h] [rbp+320h] BYREF
  void *v102; // [rsp+3E0h] [rbp+360h]
  __int64 v103; // [rsp+3E8h] [rbp+368h]
  __int64 v104; // [rsp+3F0h] [rbp+370h]
  volatile signed __int64 *v105; // [rsp+428h] [rbp+3A8h]
  volatile signed __int64 *v106; // [rsp+430h] [rbp+3B0h]
  __int64 v107; // [rsp+438h] [rbp+3B8h]
  __int64 v108; // [rsp+440h] [rbp+3C0h]
  __int64 v109; // [rsp+450h] [rbp+3D0h]
  __int64 v110; // [rsp+458h] [rbp+3D8h]
  _QWORD *v111; // [rsp+468h] [rbp+3E8h] BYREF
  char v112[360]; // [rsp+5B8h] [rbp+538h] BYREF
  __m512i v113; // [rsp+720h] [rbp+6A0h] BYREF
  __int128 v114; // [rsp+760h] [rbp+6E0h]
  __int64 v115; // [rsp+770h] [rbp+6F0h]
  char v116; // [rsp+7A1h] [rbp+721h]
  __int128 v117; // [rsp+7A2h] [rbp+722h]
  _OWORD v118[13]; // [rsp+7B2h] [rbp+732h]
  __int64 v119; // [rsp+888h] [rbp+808h]
  volatile signed __int64 *v120; // [rsp+890h] [rbp+810h]
  __int64 v121; // [rsp+898h] [rbp+818h]
  volatile signed __int64 *v122; // [rsp+8A0h] [rbp+820h]
  __int64 v123; // [rsp+8A8h] [rbp+828h]
  volatile signed __int64 *v124; // [rsp+8B0h] [rbp+830h]
  _QWORD *v125; // [rsp+8B8h] [rbp+838h]
  __int64 v126; // [rsp+8C0h] [rbp+840h]
  int v127; // [rsp+8C8h] [rbp+848h]
  volatile signed __int64 *v128; // [rsp+8D0h] [rbp+850h]
  volatile signed __int64 *v129; // [rsp+8D8h] [rbp+858h]
  volatile signed __int64 *v130; // [rsp+8E0h] [rbp+860h]
  volatile signed __int64 *v131; // [rsp+8E8h] [rbp+868h]
  volatile signed __int64 *v132; // [rsp+8F0h] [rbp+870h]
  volatile signed __int64 *v133; // [rsp+8F8h] [rbp+878h]
  volatile signed __int64 *v134; // [rsp+900h] [rbp+880h]
  char v135; // [rsp+908h] [rbp+888h]
  volatile signed __int64 *v136; // [rsp+910h] [rbp+890h]
  volatile signed __int64 *v137; // [rsp+918h] [rbp+898h]
  volatile signed __int64 *v138; // [rsp+920h] [rbp+8A0h]
  volatile signed __int64 *v139; // [rsp+928h] [rbp+8A8h]
  volatile signed __int64 *v140; // [rsp+930h] [rbp+8B0h]
  _BYTE v141[360]; // [rsp+938h] [rbp+8B8h] BYREF
  __m512i v142; // [rsp+AA0h] [rbp+A20h] BYREF
  __int128 v143; // [rsp+AE0h] [rbp+A60h]
  __int64 v144; // [rsp+AF0h] [rbp+A70h]
  _BYTE v145[38]; // [rsp+B22h] [rbp+AA2h]
  __int64 v146; // [rsp+C08h] [rbp+B88h]
  volatile signed __int64 *v147; // [rsp+C10h] [rbp+B90h]
  __int64 v148; // [rsp+C18h] [rbp+B98h]
  PVOID v149; // [rsp+C20h] [rbp+BA0h]
  __int64 v150; // [rsp+C28h] [rbp+BA8h]
  volatile signed __int64 *v151; // [rsp+C30h] [rbp+BB0h]
  _QWORD *v152; // [rsp+C38h] [rbp+BB8h]
  __int64 v153; // [rsp+C40h] [rbp+BC0h]
  int v154; // [rsp+C48h] [rbp+BC8h]
  volatile signed __int64 *v155; // [rsp+C50h] [rbp+BD0h]
  volatile signed __int64 *v156; // [rsp+C58h] [rbp+BD8h]
  volatile signed __int64 *v157; // [rsp+C60h] [rbp+BE0h]
  volatile signed __int64 *v158; // [rsp+C68h] [rbp+BE8h]
  volatile signed __int64 *v159; // [rsp+C70h] [rbp+BF0h]
  volatile signed __int64 *v160; // [rsp+C78h] [rbp+BF8h]
  volatile signed __int64 *v161; // [rsp+C80h] [rbp+C00h]
  char v162; // [rsp+C88h] [rbp+C08h]
  volatile signed __int64 *v163; // [rsp+C90h] [rbp+C10h]
  volatile signed __int64 *v164; // [rsp+C98h] [rbp+C18h]
  __int64 v165; // [rsp+CA0h] [rbp+C20h]
  volatile signed __int64 *v166; // [rsp+CA8h] [rbp+C28h]
  volatile signed __int64 *v167; // [rsp+CB0h] [rbp+C30h] BYREF
  __int128 v168; // [rsp+E20h] [rbp+DA0h] BYREF
  HANDLE hObject[2]; // [rsp+E30h] [rbp+DB0h]
  __int128 v170; // [rsp+E40h] [rbp+DC0h]
  _QWORD v171[3]; // [rsp+F90h] [rbp+F10h] BYREF
  volatile signed __int64 *v172; // [rsp+FA8h] [rbp+F28h]
  volatile signed __int64 *v173; // [rsp+FB0h] [rbp+F30h]
  volatile signed __int64 *v174; // [rsp+FB8h] [rbp+F38h]
  _QWORD *v175; // [rsp+FC0h] [rbp+F40h]
  volatile signed __int64 *v176; // [rsp+FC8h] [rbp+F48h]
  volatile signed __int64 *v177; // [rsp+FD0h] [rbp+F50h]
  volatile signed __int64 *v178; // [rsp+FD8h] [rbp+F58h]
  volatile signed __int64 *v179; // [rsp+FE0h] [rbp+F60h]
  __int64 v180; // [rsp+FE8h] [rbp+F68h]
  __int64 v181; // [rsp+FF0h] [rbp+F70h]
  volatile signed __int64 *v182; // [rsp+FF8h] [rbp+F78h]
  __m512i *v183; // [rsp+1000h] [rbp+F80h] BYREF
  __int64 (__fastcall *v184)(_QWORD, _QWORD); // [rsp+1008h] [rbp+F88h]
  void *v185; // [rsp+1010h] [rbp+F90h]
  __int128 v186; // [rsp+1020h] [rbp+FA0h]
  __int128 v187; // [rsp+1030h] [rbp+FB0h] BYREF
  __int128 v188; // [rsp+1040h] [rbp+FC0h]
  __int128 v189; // [rsp+1050h] [rbp+FD0h]
  __int64 v190; // [rsp+1068h] [rbp+FE8h] BYREF
  void *v191; // [rsp+1070h] [rbp+FF0h]
  __int64 v192; // [rsp+1078h] [rbp+FF8h]
  int v193; // [rsp+1084h] [rbp+1004h]
  __int64 v194; // [rsp+1088h] [rbp+1008h]
  volatile signed __int64 *v195; // [rsp+1090h] [rbp+1010h]
  volatile signed __int64 *v196; // [rsp+1098h] [rbp+1018h] BYREF
  volatile signed __int64 *v197; // [rsp+10A0h] [rbp+1020h]
  PVOID Address; // [rsp+10A8h] [rbp+1028h]
  __int64 v199; // [rsp+10B0h] [rbp+1030h]
  char v200; // [rsp+10BFh] [rbp+103Fh]
  __int64 v201; // [rsp+10C0h] [rbp+1040h]
  char v202; // [rsp+10CCh] [rbp+104Ch]
  char v203; // [rsp+10CDh] [rbp+104Dh] BYREF
  char v204; // [rsp+10CEh] [rbp+104Eh]
  char v205; // [rsp+10CFh] [rbp+104Fh]
  __int64 v206; // [rsp+10D0h] [rbp+1050h]

  v206 = -2;
  v2 = a2;
  v3 = *(_QWORD *)(a2 + 352);
  sub_14065B290(&v168, v3 + 16, aMain_3, 4);
  if ( (_DWORD)v168 != -1 )
  {
    sub_141684120(&v113, &v168, 360);
    sub_14047AB10(&v101, &v168);
    if ( (unsigned __int8)sub_1403B7FE0(&v101) )
    {
      v4 = v101.m512i_i64[0];
      sub_141684120(&v142, &v101.m512i_u64[1], 528);
      sub_141684120(&v167, &v113, 360);
      sub_141684120(&v92, &v142, 888);
      if ( v4 == -1 )
        goto LABEL_32;
      v113.m512i_i64[0] = v4;
      sub_141684120(&v113.m512i_u64[1], &v92, 888);
      sub_1401BE0B0(&v101, &v113);
      v6 = v138;
      v7 = _InterlockedIncrement64(v138);
      if ( (v7 < 0) ^ v5 | (v7 == 0) )
        goto LABEL_120;
      v8 = v122;
      v9 = _InterlockedIncrement64(v122);
      if ( (v9 < 0) ^ v5 | (v9 == 0) )
        goto LABEL_120;
      v10 = v123;
      v11 = v119;
      v12 = v121;
      v13 = 0;
      if ( v119 )
      {
        v13 = __OFSUB__((_DWORD)v119, 1);
        if ( (_DWORD)v119 == 1 )
        {
          v14 = v120;
          v15 = _InterlockedIncrement64(v120 + 48);
          if ( (v15 < 0) ^ v13 | (v15 == 0) )
            __fastfail(7u);
        }
        else
        {
          v14 = v120;
          v17 = _InterlockedIncrement64(v120 + 14);
          if ( (v17 < 0) ^ __OFSUB__((_DWORD)v11, 1) | (v17 == 0) )
            __fastfail(7u);
        }
      }
      else
      {
        v14 = v120;
        if ( _InterlockedIncrement64(v120 + 64) <= 0 )
          __fastfail(7u);
      }
      v18 = v127;
      v19 = v124;
      v20 = v126;
      v21 = _InterlockedIncrement64(v124);
      if ( (v21 < 0) ^ v13 | (v21 == 0) )
        goto LABEL_120;
      v22 = v125;
      v24 = __OFADD__(1, *v125);
      v23 = (*v125)++ == -1;
      if ( v23 )
        goto LABEL_120;
      v194 = v20;
      Address = (PVOID)v8;
      v201 = (__int64)v6;
      v199 = v10;
      v25 = v128;
      v26 = _InterlockedIncrement64(v128);
      if ( (v26 < 0) ^ v24 | (v26 == 0) )
        goto LABEL_120;
      v27 = v129;
      v28 = _InterlockedIncrement64(v129);
      if ( (v28 < 0) ^ v24 | (v28 == 0) )
        goto LABEL_120;
      v29 = v2;
      v197 = v130;
      v30 = _InterlockedIncrement64(v130);
      if ( (v30 < 0) ^ v24 | (v30 == 0) )
        goto LABEL_120;
      v31 = v131;
      v32 = _InterlockedIncrement64(v131);
      if ( (v32 < 0) ^ v24 | (v32 == 0) )
        goto LABEL_120;
      v195 = v132;
      v33 = _InterlockedIncrement64(v132);
      if ( (v33 < 0) ^ v24 | (v33 == 0) )
        goto LABEL_120;
      v34 = v133;
      v35 = _InterlockedIncrement64(v133);
      if ( (v35 < 0) ^ v24 | (v35 == 0) )
        goto LABEL_120;
      v172 = v134;
      v36 = _InterlockedIncrement64(v134);
      if ( (v36 < 0) ^ v24 | (v36 == 0) )
        goto LABEL_120;
      v37 = v135;
      v173 = v136;
      v38 = _InterlockedIncrement64(v136);
      if ( (v38 < 0) ^ v24 | (v38 == 0) )
        goto LABEL_120;
      v39 = v137;
      v40 = _InterlockedIncrement64(v137);
      if ( (v40 < 0) ^ v24 | (v40 == 0) )
        goto LABEL_120;
      v179 = v34;
      v178 = v31;
      v177 = v27;
      v176 = v25;
      v175 = v22;
      v174 = v19;
      v181 = v3;
      v180 = v29;
      v41 = v139;
      v42 = _InterlockedIncrement64(v139);
      if ( (v42 < 0) ^ v24 | (v42 == 0) )
        goto LABEL_120;
      v182 = v39;
      v200 = v37;
      v193 = v18;
      v43 = Address;
      v44 = v201;
      v45 = v140;
      v46 = _InterlockedIncrement64(v140);
      if ( (v46 < 0) ^ v24 | (v46 == 0) )
        goto LABEL_120;
      v47 = v14;
      v48 = v11;
      v49 = v12;
      sub_141684120(&v142, &v101, 360);
      v165 = v44;
      v146 = v48;
      v147 = v47;
      v148 = v49;
      v149 = v43;
      v150 = v199;
      v151 = v174;
      v152 = v175;
      v153 = v194;
      v154 = v193;
      v155 = v176;
      v156 = v177;
      v157 = v197;
      v158 = v178;
      v159 = v195;
      v160 = v179;
      v161 = v172;
      v162 = v200;
      v163 = v173;
      v164 = v182;
      v166 = v41;
      v167 = v45;
      sub_1404DE320(&v168, v141);
      sub_141684120(&v101, &v142, 536);
      sub_141684120(v112, &v168, 360);
      sub_141684120(&v142, &v101, 896);
      sub_1402DAC50(&v113, &v142);
      v2 = v180;
      v3 = v181;
      if ( (unsigned __int8)((__int64 (*)(void))sub_1401A5FA0)() )
      {
        DWORD2(v143) = *(_DWORD *)((char *)&v117 + 6);
        v142.m512i_i32[2] = 41;
        v142.m512i_i8[0] = 31;
        sub_140285770(&v168, &v113, &v142);
        if ( (_DWORD)v168 != -1 )
        {
          v142.m512i_i64[3] = (__int64)hObject[0];
          *(_OWORD *)&v142.m512i_u64[1] = v168;
          v142.m512i_i64[0] = 0x8000000000000000uLL;
          sub_140014760(&v142);
        }
      }
      sub_140014B00(&v113);
      v16 = (__m512i *)v141;
    }
    else
    {
      sub_140014B00(&v101);
      v16 = &v113;
    }
    sub_140014D70(v16);
  }
LABEL_32:
  v50 = (unsigned __int8 *)sub_140003640((volatile void *)(*(_QWORD *)(v3 + 5016) + 16LL));
  if ( !v50 )
  {
    v101.m512i_i64[0] = (__int64)aStdSyncPoisonM;
    v101.m512i_i64[1] = 76;
    v142.m512i_i64[0] = (__int64)&v101;
    v142.m512i_i64[1] = (__int64)sub_14041F680;
    sub_1416C32C0(&unk_1416C99C2, &v142, &off_1416C9A50);
  }
  v53 = v50;
  LOBYTE(v52) = 1;
  if ( _InterlockedCompareExchange8((volatile signed __int8 *)v50, 1, 0) )
    sub_1416C15B0(v50);
  v54 = off_141EC90B8;
  if ( 2 * *off_141EC90B8 )
  {
    v55 = sub_1416C2250(v52, v51);
    LOBYTE(v55) = v55 ^ 1;
    v56 = v53[1];
    if ( (_BYTE)v56 )
    {
LABEL_37:
      v203 = 0;
      if ( !(_BYTE)v55 && 2 * *v54 && !(unsigned __int8)sub_1416C2250(v56, v51) )
        v53[1] = 1;
      v57 = *v53;
      *v53 = 0;
      if ( v57 == 2 )
        WakeByAddressSingle(v53);
      goto LABEL_48;
    }
  }
  else
  {
    v55 = 0;
    v56 = v53[1];
    if ( (_BYTE)v56 )
      goto LABEL_37;
  }
  LODWORD(v201) = v55;
  Address = v53;
  sub_140388D60(&v142, v53 + 8);
  v58 = v145[14];
  sub_14034E2C0(&v142);
  if ( !(_BYTE)v201 && 2 * *v54 && !(unsigned __int8)sub_1416C2250(v60, v59) )
    *((_BYTE *)Address + 1) = 1;
  v61 = Address;
  v62 = *(_BYTE *)Address;
  *(_BYTE *)Address = 0;
  if ( v62 == 2 )
    WakeByAddressSingle(v61);
  v203 = v58;
LABEL_48:
  v142.m512i_i64[0] = (__int64)&v203;
  v142.m512i_i64[1] = (__int64)sub_1414AC660;
  sub_14149C0F0(&v190, &unk_1416CDD8A, &v142);
  if ( dword_141EC24A0 )
  {
    v63 = v190;
    if ( !v190 )
      goto LABEL_54;
    v64 = v191;
  }
  else
  {
    Address = v191;
    sub_1404032D0(&unk_141EC2480, v191, v192);
    v63 = v190;
    if ( !v190 )
      goto LABEL_54;
    v64 = Address;
  }
  sub_140001660(v64, v63, 1);
LABEL_54:
  create_bootstrap_tray_menu(v171, v2);
  if ( v171[0] != -1 )
    return (_OWORD *)sub_14149C970(v171);
  v196 = (volatile signed __int64 *)v171[1];
  v102 = &unk_1416CE736;
  v103 = 6023;
  v104 = 0;
  v101.m512i_i64[4] = -2;
  v101.m512i_i64[0] = 1;
  v101.m512i_i64[1] = 0x20000000;
  v101.m512i_i32[4] = 0;
  v101.m512i_i32[6] = 0;
  sub_140ABEA80(&v113, &v101);
  if ( v113.m512i_i64[0] == 2 )
  {
    *(_QWORD *)&v168 = v113.m512i_i64[1];
    v92 = &v168;
    *(_QWORD *)&v93 = sub_141490720;
    sub_14149C0F0(&v101, &unk_1416CDCB7, &v92);
    sub_140018650(&v168);
    v67 = (HANDLE)v101.m512i_i64[1];
    v66 = v101.m512i_i64[0];
    v68 = (HANDLE)v101.m512i_i64[2];
    goto LABEL_61;
  }
  v142 = v113;
  v143 = v114;
  v144 = v115;
  sub_140ABF000(&v113, &v142);
  if ( v113.m512i_i64[0] != -1 )
  {
    v101 = v113;
    *(_QWORD *)&v187 = &v101;
    *((_QWORD *)&v187 + 1) = sub_140F482D0;
    sub_14149C0F0(&v183, &unk_1416CDCDC, &v187);
    sub_1400139B0(&v101);
    v66 = (__int64)v183;
    v67 = v184;
    v68 = v185;
    goto LABEL_61;
  }
  v95 = *(_OWORD *)&v113.m512i_u64[5];
  v93 = *(_OWORD *)&v113.m512i_u64[2];
  v94 = v113.m512i_i64[4];
  v92 = (__int128 *)v113.m512i_i64[1];
  sub_140F48A70(&v168, &v92);
  sub_1400175F0(&v92);
  v66 = *((_QWORD *)&v168 + 1);
  v67 = hObject[0];
  v68 = hObject[1];
  Address = (PVOID)v168;
  if ( (_QWORD)v168 == -2 )
  {
LABEL_61:
    v142.m512i_i64[0] = v66;
    v142.m512i_i64[1] = (__int64)v67;
    v142.m512i_i64[2] = (__int64)v68;
    result = (_OWORD *)sub_14149C970(&v142);
    if ( _InterlockedDecrement64(v196) )
      return result;
    goto LABEL_62;
  }
  v194 = *((_QWORD *)&v168 + 1);
  v205 = 1;
  sub_1412C7380(&v113);
  sub_141684120(&v142, &v113, 136);
  v205 = 1;
  sub_1401C94F0(&v113, &v142, aMain_3, 4);
  sub_141684120(&v142, &v113, 136);
  *(_QWORD *)&v145[6] = 0;
  *(_QWORD *)&v145[22] = 0;
  v113.m512i_i64[0] = (__int64)Address;
  v113.m512i_i64[1] = v194;
  v113.m512i_i64[2] = (__int64)v67;
  v113.m512i_i64[3] = (__int64)v68;
  v205 = 0;
  sub_1407188F0(&v92, &v142, &v113);
  v96 = 0;
  sub_141684120(&v142, &v92, 136);
  sub_1401C91B0(&v113, &v142, aAimami, 6);
  sub_141684120(&v92, &v113, 136);
  sub_141684120(&v168, &v92, 136);
  v201 = v97;
  v199 = v98;
  v195 = v99;
  v197 = v100;
  sub_141684120(&v142, &v92, 136);
  v202 = 1;
  v70 = sub_140B11A20(&v196);
  v202 = 0;
  sub_1412C77A0(&v113, &v142, v70, v71);
  sub_141684120(&v168, &v113, 136);
  sub_141684120(&v142, &v168, 136);
  *(_QWORD *)&v145[22] = v195;
  *(_QWORD *)&v145[30] = v197;
  *(_QWORD *)&v145[6] = 1;
  *(_QWORD *)&v145[14] = &unk_141786C70;
  if ( v201 )
  {
    if ( *(_QWORD *)v199 )
      (*(void (__fastcall **)(__int64))v199)(v201);
    v72 = *(_QWORD *)(v199 + 8);
    if ( v72 )
      sub_140001660(v201, v72, *(_QWORD *)(v199 + 16));
  }
  sub_141684120(&v113, &v142, 129);
  v117 = *(_OWORD *)v145;
  v118[0] = *(_OWORD *)&v145[16];
  *(_QWORD *)((char *)v118 + 14) = *(_QWORD *)&v145[30];
  v116 = 1;
  v205 = 0;
  sub_1407172B0(&v142, &v113, v2);
  v74 = v142.m512i_i64[0];
  v168 = *(_OWORD *)&v142.m512i_u64[1];
  *(_OWORD *)hObject = *(_OWORD *)&v142.m512i_u64[3];
  v170 = *(_OWORD *)&v142.m512i_u64[5];
  if ( v142.m512i_i64[0] != -1 )
  {
    sub_141684120(&v101.m512i_u64[7], &v142.m512i_u64[7], 152);
    v186 = v170;
    v189 = v170;
    v188 = *(_OWORD *)hObject;
    v187 = v168;
    *(_OWORD *)&v101.m512i_u64[1] = v168;
    *(_OWORD *)&v101.m512i_u64[3] = *(_OWORD *)hObject;
    *(_OWORD *)&v101.m512i_u64[5] = v170;
    v101.m512i_i64[0] = v74;
    if ( v107 )
      sub_140001660(v108, v107, 1);
    if ( v109 )
      sub_140001660(v110, v109, 1);
    v23 = (*v111)-- == 1;
    if ( v23 )
      sub_1407190E0(&v111);
    v205 = 0;
    sub_140014150(&v101);
    v205 = 0;
    sub_1403D57A0(v2);
    v205 = 0;
    sub_1403D4E50(v2);
    sub_1401C50B0(&v142, v2);
    v76 = *(volatile signed __int64 **)(v2 + 136);
    v77 = _InterlockedIncrement64(v76);
    if ( !((v77 < 0) ^ v75 | (v77 == 0)) )
    {
      v78 = *(volatile signed __int64 **)(v2 + 144);
      v79 = _InterlockedIncrement64(v78);
      if ( !((v79 < 0) ^ v75 | (v79 == 0)) )
      {
        sub_141684120(&v101, &v142, 136);
        v105 = v76;
        v106 = v78;
        v142.m512i_i64[2] = -1;
        v142.m512i_i64[0] = 0;
        v142.m512i_i8[40] = 0;
        nullsub_1(v80);
        v81 = (void *)sub_140001650(23, 1);
        v201 = (__int64)v81;
        if ( !v81 )
          sub_1416C2D4B(1, 23);
        qmemcpy(v81, "aimami-router-bootstrap", 23);
        *(_QWORD *)&v168 = 23;
        *((_QWORD *)&v168 + 1) = v81;
        hObject[0] = (HANDLE)23;
        sub_141471DD0(&v113, &v142, &v168);
        sub_141684120(&v142, &v101, 152);
        v204 = 0;
        sub_1404E76D0(&v168, &v113, &v142);
        v82 = (volatile signed __int64 *)v168;
        if ( (_QWORD)v168 )
          goto LABEL_83;
        v183 = *((__m512i **)&v168 + 1);
        if ( *(_QWORD *)off_141EC8D80 )
        {
          v113.m512i_i64[0] = (__int64)&v183;
          v113.m512i_i64[1] = (__int64)sub_141490720;
          v142.m512i_i64[0] = (__int64)aCodexmateLib;
          v142.m512i_i64[1] = 13;
          v142.m512i_i64[2] = (__int64)aCodexmateLib;
          v142.m512i_i64[3] = 13;
          v142.m512i_i64[4] = (__int64)&off_1416CDE08;
          sub_140985BA0(&unk_1416CDDC6, &v113, 1, &v142);
        }
        sub_140018650(&v183);
        v82 = (volatile signed __int64 *)v168;
        if ( (_QWORD)v168 )
        {
LABEL_83:
          CloseHandle(hObject[0]);
          if ( !_InterlockedDecrement64(v82) )
            sub_141481D70(&v168);
          if ( !_InterlockedDecrement64(*((volatile signed __int64 **)&v168 + 1)) )
          {
            v204 = 0;
            sub_141481C30((char *)&v168 + 8);
          }
        }
        v204 = 0;
        sub_1401B89F0();
        v204 = 0;
        sub_140876030(&v168, v2);
        if ( (_QWORD)v168 != -1 )
        {
          v113.m512i_i64[2] = (__int64)hObject[0];
          *(_OWORD *)v113.m512i_i8 = v168;
          if ( *(_QWORD *)off_141EC8D80 >= 2u )
          {
            v183 = &v113;
            v184 = sub_1400015F0;
            v142.m512i_i64[0] = (__int64)aCodexmateLib;
            v142.m512i_i64[1] = 13;
            v142.m512i_i64[2] = (__int64)aCodexmateLib;
            v142.m512i_i64[3] = 13;
            v142.m512i_i64[4] = (__int64)&off_1416CDE60;
            sub_140985BA0(&unk_1416CDE20, &v183, 2, &v142);
          }
          if ( v113.m512i_i64[0] )
            sub_140001660(v113.m512i_i64[1], v113.m512i_i64[0], 1);
        }
        v204 = 0;
        sub_141483A00(&v113);
        if ( v113.m512i_i64[0] == -1 )
        {
          v204 = 0;
          sub_140018650(&v113.m512i_u64[1]);
        }
        else
        {
          v201 = v113.m512i_i64[1];
          v199 = v113.m512i_i64[0];
          v83 = v113.m512i_i64[2];
          sub_1407126F0(&v142);
          v197 = (volatile signed __int64 *)v142.m512i_i64[1];
          sub_1403F78F0(v201, v83, v142.m512i_i64[1], v142.m512i_i64[2]);
          if ( v142.m512i_i64[0] )
            sub_140001660(v197, v142.m512i_i64[0], 1);
          v84 = v201;
          if ( v199 )
            sub_140001660(v201, v199, 1);
        }
        v204 = 0;
        if ( (unsigned __int8)sub_1401A5FA0(v84) )
          goto LABEL_109;
        sub_1401C50B0(&v113, v2);
        v88 = *(volatile signed __int64 **)(v2 + 136);
        v89 = _InterlockedIncrement64(v88);
        if ( !((v89 < 0) ^ v87 | (v89 == 0)) )
        {
          v90 = *(volatile signed __int64 **)(v2 + 144);
          v91 = _InterlockedIncrement64(v90);
          if ( !((v91 < 0) ^ v87 | (v91 == 0)) )
          {
            sub_141684120(&v142, &v113, 136);
            *(_QWORD *)&v145[6] = v88;
            *(_QWORD *)&v145[14] = v90;
            v113.m512i_i64[2] = -1;
            v113.m512i_i64[0] = 0;
            v113.m512i_i8[40] = 0;
            v204 = 0;
            sub_1404E9C10(&v168, &v113, &v142);
            if ( !(_QWORD)v168 )
            {
              v113.m512i_i64[0] = *((_QWORD *)&v168 + 1);
              sub_1416C3060(
                (unsigned int)aFailedToSpawnT_8,
                22,
                (unsigned int)&v113,
                (unsigned int)&off_14173B290,
                (__int64)&off_1416CE3F0);
            }
            v113.m512i_i64[2] = (__int64)hObject[0];
            *(_OWORD *)v113.m512i_i8 = v168;
            CloseHandle(hObject[0]);
            if ( !_InterlockedDecrement64((volatile signed __int64 *)v113.m512i_i64[0]) )
              sub_141481D70(&v113);
            if ( !_InterlockedDecrement64((volatile signed __int64 *)v113.m512i_i64[1]) )
            {
              v204 = 0;
              sub_141481C30(&v113.m512i_u64[1]);
            }
LABEL_109:
            if ( !_InterlockedDecrement64(v196) )
              sub_1412151D0(&v196);
            return nullptr;
          }
        }
      }
    }
LABEL_120:
    BUG();
  }
  v187 = v168;
  v188 = *(_OWORD *)hObject;
  v189 = v170;
  *(_OWORD *)&v142.m512i_u64[4] = v170;
  *(_OWORD *)&v142.m512i_u64[2] = *(_OWORD *)hObject;
  *(_OWORD *)v142.m512i_i8 = v168;
  nullsub_1(v73);
  result = (_OWORD *)sub_140001650(48, 8);
  if ( !result )
    sub_1416C2D31(8, 48);
  v85 = v187;
  v86 = v188;
  result[2] = v189;
  result[1] = v86;
  *result = v85;
  if ( !_InterlockedDecrement64(v196) )
  {
LABEL_62:
    v69 = result;
    sub_1412151D0(&v196);
    return v69;
  }
  return result;
}