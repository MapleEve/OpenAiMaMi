// module: codexmate_lib/core/repository
// addr: 0x1403897f0
// name: switch_account_0
// win 1.2.1 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::repository::Repository::switch_account | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall switch_account_0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int64 v12; // r12
  __int64 v13; // r12
  __int64 v14; // r9
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm2
  __int64 v18; // rdx
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int128 v22; // xmm1
  __int128 v24; // kr00_16
  __int128 v25; // xmm0
  __int128 v26; // xmm1
  __int128 v27; // xmm2
  __int64 v28; // r15
  __int64 v29; // r13
  __int128 v30; // kr10_16
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm2
  __int128 v34; // kr20_16
  __int128 v35; // xmm0
  __int128 v36; // xmm1
  __int128 v37; // xmm2
  __int64 v38; // r13
  unsigned __int64 v39; // r15
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm2
  __int64 v43; // rdx
  __int64 v44; // r8
  __int64 v45; // r13
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // r8
  __int64 v49; // r12
  __int64 v50; // rax
  void *v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rdx
  __int64 v54; // rcx
  __int64 v55; // rdx
  __int64 v56; // rcx
  char v57; // al
  __int64 v58; // rax
  __int128 v59; // xmm0
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int64 v62; // r12
  __int64 v63; // r8
  __int64 v64; // rax
  __int64 v65; // r12
  __int64 v66; // r9
  __int64 v67; // r13
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // r8
  __int64 v72; // rax
  int v73; // r9d
  __int64 v74; // r14
  __int64 v75; // r15
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rcx
  _OWORD *v81; // rax
  void *v82; // rax
  _QWORD *v83; // rcx
  __int64 v84; // rcx
  __int64 v85; // rax
  __int64 v86; // rdx
  __int64 v87; // r8
  int v88; // r14d
  __int64 v89; // rax
  int v90; // r9d
  __int64 v91; // r14
  __int64 v92; // r15
  __int128 v93; // xmm1
  __int128 v94; // xmm2
  __int128 v95; // xmm3
  __int64 v96; // [rsp+20h] [rbp-60h]
  __int64 v97; // [rsp+28h] [rbp-58h] BYREF
  char v98[144]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v99[48]; // [rsp+C0h] [rbp+40h] BYREF
  __int128 v100; // [rsp+F0h] [rbp+70h]
  __int128 v101; // [rsp+100h] [rbp+80h]
  __int128 v102; // [rsp+110h] [rbp+90h]
  __int128 v103; // [rsp+220h] [rbp+1A0h] BYREF
  __int64 v104; // [rsp+230h] [rbp+1B0h]
  __int128 v105; // [rsp+238h] [rbp+1B8h] BYREF
  __int64 v106; // [rsp+248h] [rbp+1C8h]
  _OWORD v107[5]; // [rsp+250h] [rbp+1D0h] BYREF
  __int64 v108; // [rsp+2A0h] [rbp+220h]
  _OWORD v109[3]; // [rsp+2B0h] [rbp+230h] BYREF
  __int64 v110; // [rsp+2E0h] [rbp+260h]
  _QWORD v111[2]; // [rsp+2F0h] [rbp+270h] BYREF
  __int128 v112; // [rsp+300h] [rbp+280h] BYREF
  __int128 v113; // [rsp+310h] [rbp+290h]
  __int128 v114; // [rsp+320h] [rbp+2A0h]
  __int128 v115; // [rsp+330h] [rbp+2B0h]
  __int128 v116; // [rsp+340h] [rbp+2C0h]
  __int128 v117; // [rsp+350h] [rbp+2D0h]
  __int128 v118; // [rsp+360h] [rbp+2E0h] BYREF
  _BYTE *v119; // [rsp+370h] [rbp+2F0h]
  __int64 (__fastcall *v120)(_QWORD, _QWORD); // [rsp+378h] [rbp+2F8h]
  __int128 v121; // [rsp+380h] [rbp+300h] BYREF
  __int128 v122; // [rsp+390h] [rbp+310h]
  __int128 v123; // [rsp+3A0h] [rbp+320h]
  __int128 v124; // [rsp+3B0h] [rbp+330h]
  __int128 v125; // [rsp+3C0h] [rbp+340h]
  __int128 v126; // [rsp+3D0h] [rbp+350h]
  __int64 v127; // [rsp+4E0h] [rbp+460h]
  __int64 v128; // [rsp+4E8h] [rbp+468h]
  __int64 v129; // [rsp+4F0h] [rbp+470h]
  __int64 v130; // [rsp+4F8h] [rbp+478h]
  __int64 v131; // [rsp+500h] [rbp+480h]
  __int64 v132; // [rsp+508h] [rbp+488h]
  __int16 v133; // [rsp+510h] [rbp+490h]
  _BYTE v134[96]; // [rsp+520h] [rbp+4A0h] BYREF
  __int64 v135; // [rsp+580h] [rbp+500h]
  char v136[384]; // [rsp+588h] [rbp+508h] BYREF
  __int128 v137; // [rsp+708h] [rbp+688h] BYREF
  __int64 v138; // [rsp+718h] [rbp+698h]
  __int128 v139; // [rsp+720h] [rbp+6A0h] BYREF
  __int128 v140; // [rsp+730h] [rbp+6B0h] BYREF
  __int128 v141; // [rsp+740h] [rbp+6C0h]
  __int128 v142; // [rsp+750h] [rbp+6D0h]
  __int128 v143; // [rsp+760h] [rbp+6E0h]
  __int64 v144; // [rsp+770h] [rbp+6F0h]
  __int64 v145; // [rsp+780h] [rbp+700h] BYREF
  __int64 v146; // [rsp+788h] [rbp+708h] BYREF
  __int64 v147; // [rsp+790h] [rbp+710h]
  __int64 v148; // [rsp+798h] [rbp+718h]
  __int64 v149; // [rsp+7A0h] [rbp+720h]
  HANDLE hObject; // [rsp+7A8h] [rbp+728h] BYREF
  __int64 v151; // [rsp+7B0h] [rbp+730h]
  __int64 v152; // [rsp+7B8h] [rbp+738h]
  __int64 v153; // [rsp+7C0h] [rbp+740h]
  __int64 v154; // [rsp+7C8h] [rbp+748h]
  __int64 v155; // [rsp+7D0h] [rbp+750h]
  _QWORD *v156; // [rsp+7D8h] [rbp+758h]
  __int64 v157; // [rsp+7E0h] [rbp+760h]
  __int64 v158; // [rsp+7E8h] [rbp+768h]
  __int64 v159; // [rsp+7F0h] [rbp+770h]
  char v160; // [rsp+7F8h] [rbp+778h]
  char v161; // [rsp+7F9h] [rbp+779h]
  char v162; // [rsp+7FAh] [rbp+77Ah]
  char v163; // [rsp+7FBh] [rbp+77Bh]
  char v164; // [rsp+7FCh] [rbp+77Ch]
  char v165; // [rsp+7FDh] [rbp+77Dh]
  char v166; // [rsp+7FEh] [rbp+77Eh]
  char v167; // [rsp+7FFh] [rbp+77Fh]
  __int64 v168; // [rsp+800h] [rbp+780h]

  v168 = -2;
  v111[0] = a3;
  v111[1] = a4;
  sub_140388C10((__int64)v134, *(_QWORD *)(a2 + 296), *(_QWORD *)(a2 + 304));
  v8 = *(_QWORD *)v134;
  v121 = *(_OWORD *)&v134[8];
  v122 = *(_OWORD *)&v134[24];
  v123 = *(_OWORD *)&v134[40];
  v124 = *(_OWORD *)&v134[56];
  v125 = *(_OWORD *)&v134[72];
  *(_QWORD *)&v126 = *(_QWORD *)&v134[88];
  if ( *(_QWORD *)v134 == -1 )
  {
    v108 = v126;
    v107[4] = v125;
    v107[3] = v124;
    v107[2] = v123;
    v107[1] = v122;
    v107[0] = v121;
    if ( !(_QWORD)v122 )
    {
LABEL_11:
      *(_QWORD *)&v121 = v111;
      *((_QWORD *)&v121 + 1) = sub_14041F680;
      sub_14149C0F0(&v134[8], &unk_14174CA98, &v121);
      v19 = *(_OWORD *)&v134[8];
      v20 = *(_OWORD *)&v134[40];
      v21 = *(_OWORD *)&v134[56];
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v134[72];
      *(_OWORD *)(a1 + 64) = v21;
      *(_OWORD *)(a1 + 48) = v20;
      *(_QWORD *)(a1 + 96) = *(_QWORD *)&v134[88];
      v22 = *(_OWORD *)&v134[24];
      *(_OWORD *)(a1 + 16) = v19;
      *(_OWORD *)(a1 + 32) = v22;
      *(_QWORD *)(a1 + 8) = 8;
      *(_QWORD *)a1 = 2;
LABEL_12:
      sub_14034DF40(v107);
      return a1;
    }
    v12 = 0;
    while ( *(_QWORD *)(*((_QWORD *)&v107[0] + 1) + v12 + 208) != a4
         || (unsigned int)sub_1416847B0(*(_QWORD *)(*((_QWORD *)&v107[0] + 1) + v12 + 200), a3, a4) )
    {
      v12 += 424;
      if ( 424LL * (_QWORD)v122 == v12 )
        goto LABEL_11;
    }
    sub_14149BB70(
      v134,
      *(_QWORD *)(*((_QWORD *)&v107[0] + 1) + v12 + 224),
      *(_QWORD *)(*((_QWORD *)&v107[0] + 1) + v12 + 232));
    v154 = *(_QWORD *)v134;
    v13 = *(_QWORD *)&v134[16];
    v14 = *(_QWORD *)(a2 + 328);
    v96 = *(_QWORD *)(a2 + 336);
    v151 = *(_QWORD *)&v134[8];
    sub_1403CE160((unsigned int)v134, *(_DWORD *)&v134[8], *(_DWORD *)&v134[16], v14, v96);
    if ( *(_DWORD *)v134 != -1 )
    {
      *(_OWORD *)(a1 + 88) = *(_OWORD *)&v134[80];
      *(_OWORD *)(a1 + 72) = *(_OWORD *)&v134[64];
      v15 = *(_OWORD *)v134;
      v16 = *(_OWORD *)&v134[16];
      v17 = *(_OWORD *)&v134[32];
      *(_OWORD *)(a1 + 56) = *(_OWORD *)&v134[48];
      *(_OWORD *)(a1 + 40) = v17;
      *(_OWORD *)(a1 + 24) = v16;
      *(_OWORD *)(a1 + 8) = v15;
      *(_QWORD *)a1 = 2;
      v18 = v154;
      if ( !v154 )
        goto LABEL_12;
      goto LABEL_54;
    }
    sub_1403C8920(v99, v151, v13);
    v159 = *(_QWORD *)&v99[8];
    sub_14037FAC0((__int64)v134, *(__int64 *)&v99[8], *(__int64 *)&v99[16], (__int64)&aTtenaccountCre[4], 18);
    v24 = *(_OWORD *)v134;
    if ( *(_QWORD *)v134 != -1 )
    {
      v125 = *(_OWORD *)&v134[80];
      v124 = *(_OWORD *)&v134[64];
      v123 = *(_OWORD *)&v134[48];
      v122 = *(_OWORD *)&v134[32];
      v121 = *(_OWORD *)&v134[16];
      if ( *(_QWORD *)v99 )
        sub_140001660(v159, *(_QWORD *)v99, 1);
      *(_OWORD *)(a1 + 88) = v125;
      v25 = v121;
      v26 = v122;
      v27 = v123;
      *(_OWORD *)(a1 + 72) = v124;
      *(_OWORD *)(a1 + 56) = v27;
      *(_OWORD *)(a1 + 40) = v26;
      *(_OWORD *)(a1 + 24) = v25;
      *(_OWORD *)(a1 + 8) = v24;
      *(_QWORD *)a1 = 2;
      v18 = v154;
      if ( !v154 )
        goto LABEL_12;
      goto LABEL_54;
    }
    if ( *(_QWORD *)v99 )
      sub_140001660(v159, *(_QWORD *)v99, 1);
    hObject = *((HANDLE *)&v24 + 1);
    v28 = *(_QWORD *)(a2 + 264);
    v29 = *(_QWORD *)(a2 + 272);
    sub_1403871C0(v134, v28, v29);
    v30 = *(_OWORD *)v134;
    if ( *(_QWORD *)v134 != -1 )
    {
      *(_OWORD *)(a1 + 88) = *(_OWORD *)&v134[80];
      v31 = *(_OWORD *)&v134[16];
      v32 = *(_OWORD *)&v134[32];
      v33 = *(_OWORD *)&v134[48];
      *(_OWORD *)(a1 + 72) = *(_OWORD *)&v134[64];
      *(_OWORD *)(a1 + 56) = v33;
      *(_OWORD *)(a1 + 40) = v32;
      *(_OWORD *)(a1 + 24) = v31;
      *(_OWORD *)(a1 + 8) = v30;
      *(_QWORD *)a1 = 2;
      goto LABEL_51;
    }
    v146 = *(_QWORD *)&v134[8];
    sub_1403885B0(v134, v28, v29);
    v34 = *(_OWORD *)v134;
    if ( *(_QWORD *)v134 != -1 )
    {
      *(_OWORD *)(a1 + 88) = *(_OWORD *)&v134[80];
      v35 = *(_OWORD *)&v134[16];
      v36 = *(_OWORD *)&v134[32];
      v37 = *(_OWORD *)&v134[48];
      *(_OWORD *)(a1 + 72) = *(_OWORD *)&v134[64];
      *(_OWORD *)(a1 + 56) = v37;
      *(_OWORD *)(a1 + 40) = v36;
      *(_OWORD *)(a1 + 24) = v35;
      *(_OWORD *)(a1 + 8) = v34;
      *(_QWORD *)a1 = 2;
LABEL_50:
      sub_14034E7D0(&v146);
LABEL_51:
      *(_QWORD *)v134 = sub_1412018B0(&hObject);
      if ( *(_QWORD *)v134 )
        sub_140018650(v134);
      CloseHandle(hObject);
      v18 = v154;
      if ( !v154 )
        goto LABEL_12;
LABEL_54:
      v56 = v151;
LABEL_55:
      sub_140001660(v56, v18, 1);
      goto LABEL_12;
    }
    v145 = *(_QWORD *)&v134[8];
    sub_14039B470(v134, a2, a3, a4);
    v38 = v135;
    v121 = *(_OWORD *)v134;
    v122 = *(_OWORD *)&v134[16];
    v123 = *(_OWORD *)&v134[32];
    v124 = *(_OWORD *)&v134[48];
    v125 = *(_OWORD *)&v134[64];
    *(_QWORD *)&v126 = *(_QWORD *)&v134[80];
    v39 = *(_QWORD *)&v134[88];
    if ( v135 == 2 )
    {
      *(_QWORD *)(a1 + 88) = v126;
      *(_OWORD *)(a1 + 72) = v125;
      v40 = v121;
      v41 = v122;
      v42 = v123;
      *(_OWORD *)(a1 + 56) = v124;
      *(_OWORD *)(a1 + 40) = v42;
      *(_OWORD *)(a1 + 24) = v41;
      *(_OWORD *)(a1 + 8) = v40;
      *(_QWORD *)(a1 + 96) = v39;
      *(_QWORD *)a1 = 2;
LABEL_49:
      sub_14034E7D0(&v145);
      goto LABEL_50;
    }
    sub_141684120(v98, v136, 144);
    v144 = v126;
    v143 = v125;
    v142 = v124;
    v141 = v123;
    v140 = v122;
    v139 = v121;
    v97 = v38;
    if ( *((_QWORD *)&v122 + 1) == -1 )
    {
      v159 = -1;
    }
    else
    {
      sub_14149C500(v134, (char *)&v140 + 8);
      v155 = *(_QWORD *)&v134[8];
      v159 = *(_QWORD *)v134;
      v149 = *(_QWORD *)&v134[16];
    }
    if ( v39 >= (unsigned __int64)v140 )
    {
      v160 = 1;
      sub_1416C30E3(v39, v140, &off_14174E590);
    }
    v43 = *(_QWORD *)(*((_QWORD *)&v139 + 1) + 424 * v39 + 224);
    v153 = 424 * v39;
    v44 = *(_QWORD *)(*((_QWORD *)&v139 + 1) + 424 * v39 + 232);
    v160 = 1;
    sub_14149BB70(v134, v43, v44);
    v157 = *(_QWORD *)v134;
    v45 = *(_QWORD *)&v134[16];
    v166 = 1;
    v152 = *(_QWORD *)&v134[8];
    if ( !(unsigned __int8)sub_140421A00(*(_QWORD *)&v134[8], *(_QWORD *)&v134[16], v151, v13) )
    {
      nullsub_1(v46);
      v51 = (void *)sub_140001650(74, 1);
      if ( !v51 )
      {
        v166 = 1;
        sub_1416C2D4B(1, 74);
      }
      qmemcpy(v51, "Account snapshot location changed while the switch was acquiring ownership", 74);
      *(_QWORD *)(a1 + 8) = 10;
      *(_QWORD *)(a1 + 16) = 74;
      *(_QWORD *)(a1 + 24) = v51;
      *(_QWORD *)(a1 + 32) = 74;
LABEL_43:
      *(_QWORD *)a1 = 2;
      v52 = v159;
      v53 = v157;
      if ( !v157 )
      {
LABEL_45:
        if ( v52 <= 0 )
        {
LABEL_48:
          sub_14034E8D0(&v97);
          sub_14034DF40(&v139);
          goto LABEL_49;
        }
        v54 = v155;
        v55 = v52;
LABEL_47:
        sub_140001660(v54, v55, 1);
        goto LABEL_48;
      }
LABEL_44:
      sub_140001660(v152, v53, 1);
      goto LABEL_45;
    }
    if ( v149 == a4 && v159 != -1 && !(unsigned int)sub_1416847B0(v155, a3, a4) )
    {
      v47 = *(_QWORD *)(a2 + 40);
      v48 = *(_QWORD *)(a2 + 48);
      v166 = 1;
      sub_140391DB0(v134, v47, v48);
      v158 = *(_QWORD *)&v134[8];
      v49 = *(_QWORD *)v134;
      if ( *(_QWORD *)v134 != -1 && *(_QWORD *)&v134[16] == a4 && !(unsigned int)sub_1416847B0(v158, a3, a4) )
      {
        if ( v49 > 0 )
          sub_140001660(v158, v49, 1);
        v70 = *(_QWORD *)(a2 + 552);
        v71 = *(_QWORD *)(a2 + 560);
        v166 = 1;
        sub_1403C71F0(&v112, v70, v71);
        v72 = sub_1403C7710(&v112, a3, a4);
        if ( v39 >= (unsigned __int64)v140 )
        {
          v161 = 1;
          sub_1416C30E3(v39, v140, &off_14174E6F8);
        }
        v161 = 1;
        LOBYTE(v73) = 1;
        sub_1403A60C0((unsigned int)v99, DWORD2(v139) + v153, (unsigned int)&v97, v73, v72);
        sub_140388B60((unsigned int)v134, a4, 0, 1, 1);
        v74 = *(_QWORD *)&v134[8];
        LOBYTE(v149) = v134[0];
        if ( v134[0] )
          sub_1416C2D4B(*(_QWORD *)&v134[8], *(_QWORD *)&v134[16]);
        v75 = *(_QWORD *)&v134[16];
        if ( a4 )
          sub_141684120(*(_QWORD *)&v134[16], a3, a4);
        sub_141684120(&v121, v99, 352);
        v130 = v159;
        v131 = v155;
        v132 = a4;
        v127 = v74;
        v128 = v75;
        v129 = a4;
        v133 = 0;
        sub_140AC9B00(v134, &v121);
        sub_141684120(a1, v134, 488);
        sub_140015650((__int64 *)&v112);
        if ( !v157 )
          goto LABEL_48;
        v54 = v152;
        v55 = v157;
        goto LABEL_47;
      }
      if ( v49 > 0 )
        sub_140001660(v158, v49, 1);
    }
    v166 = 1;
    v50 = sub_140712590(a2);
    if ( v50 )
    {
      *(_QWORD *)(a1 + 8) = 2;
      *(_QWORD *)(a1 + 16) = v50;
      goto LABEL_43;
    }
    v166 = 1;
    sub_14032C610(&v112, a2 + 32);
    v57 = *(_BYTE *)(a2 + 56);
    *(_QWORD *)&v99[16] = v113;
    *(_OWORD *)v99 = v112;
    v99[24] = v57;
    v166 = 1;
    sub_140381430((__int64)v134, (__int64)v99);
    v58 = *(_QWORD *)v134;
    v121 = *(_OWORD *)&v134[8];
    v122 = *(_OWORD *)&v134[24];
    v123 = *(_OWORD *)&v134[40];
    *(_QWORD *)&v124 = *(_QWORD *)&v134[56];
    if ( *(_QWORD *)v134 != -1 )
    {
      v59 = *(_OWORD *)&v134[64];
      *(_OWORD *)(a1 + 88) = *(_OWORD *)&v134[80];
      *(_OWORD *)(a1 + 72) = v59;
      *(_QWORD *)(a1 + 64) = v124;
      v60 = v121;
      v61 = v122;
      *(_OWORD *)(a1 + 48) = v123;
      *(_OWORD *)(a1 + 32) = v61;
      *(_OWORD *)(a1 + 16) = v60;
      *(_QWORD *)(a1 + 8) = v58;
      goto LABEL_43;
    }
    v109[0] = v121;
    v109[1] = v122;
    v109[2] = v123;
    v110 = v124;
    v62 = *(_QWORD *)(a2 + 40);
    v63 = *(_QWORD *)(a2 + 48);
    v167 = 1;
    v158 = v63;
    sub_141486710(v134, v62, v63);
    if ( *(_DWORD *)v134 == 2 )
    {
      *((_QWORD *)&v121 + 1) = *(_QWORD *)&v134[8];
      *(_QWORD *)&v121 = 2;
    }
    else
    {
      v121 = *(_OWORD *)v134;
      *(_QWORD *)&v126 = *(_QWORD *)&v134[80];
      v125 = *(_OWORD *)&v134[64];
      v124 = *(_OWORD *)&v134[48];
      v123 = *(_OWORD *)&v134[32];
      v122 = *(_OWORD *)&v134[16];
      if ( *(_QWORD *)v134 != 2 )
      {
        v167 = 1;
        *(_QWORD *)v99 = sub_1403C9370();
        *(_QWORD *)&v121 = v99;
        *((_QWORD *)&v121 + 1) = sub_1414AC5F0;
        v167 = 1;
        sub_14149C0F0(v134, &unk_14174E5A8, &v121);
        v156 = *(_QWORD **)v134;
        v77 = *(_QWORD *)(a2 + 368);
        v76 = *(_QWORD *)(a2 + 360);
        v147 = *(_QWORD *)&v134[8];
        sub_141473FA0((unsigned int)v134, v76, v77, *(_DWORD *)&v134[8], *(__int64 *)&v134[16]);
        v148 = *(_QWORD *)&v134[8];
        v78 = sub_140872600(v62, v158, *(_QWORD *)&v134[8], *(_QWORD *)&v134[16]);
        if ( v78 )
        {
          *(_QWORD *)(a1 + 8) = 2;
          *(_QWORD *)(a1 + 16) = v78;
          *(_QWORD *)a1 = 2;
          if ( *(_QWORD *)v134 )
            sub_140001660(v148, *(_QWORD *)v134, 1);
          if ( v156 )
            sub_140001660(v147, v156, 1);
          goto LABEL_65;
        }
        if ( *(_QWORD *)v134 )
          sub_140001660(v148, *(_QWORD *)v134, 1);
        if ( v156 )
          sub_140001660(v147, v156, 1);
LABEL_62:
        v167 = 1;
        v64 = sub_140872600(v152, v45, v62, v158);
        if ( v64 )
        {
          *(_QWORD *)(a1 + 8) = 2;
          *(_QWORD *)(a1 + 16) = v64;
LABEL_64:
          *(_QWORD *)a1 = 2;
          goto LABEL_65;
        }
        v167 = 1;
        v65 = sub_1403C9370();
        sub_140388B60((unsigned int)v134, a4, 0, 1, 1);
        v158 = *(_QWORD *)&v134[8];
        if ( *(_DWORD *)v134 == 1 )
        {
          v167 = 1;
          sub_1416C2D4B(v158, *(_QWORD *)&v134[16]);
        }
        v67 = *(_QWORD *)&v134[16];
        if ( a4 )
          sub_141684120(*(_QWORD *)&v134[16], a3, a4);
        if ( *((__int64 *)&v140 + 1) > 0 )
          sub_140001660(v141, *((_QWORD *)&v140 + 1), 1);
        *((_QWORD *)&v140 + 1) = v158;
        *(_QWORD *)&v141 = v67;
        *((_QWORD *)&v141 + 1) = a4;
        *((_QWORD *)&v143 + 1) = v65;
        if ( v39 >= (unsigned __int64)v140 )
        {
          v167 = 1;
          sub_1416C30E3(v39, v140, &off_14174E5B8);
        }
        v68 = *((_QWORD *)&v139 + 1);
        v69 = v153;
        *(_QWORD *)(*((_QWORD *)&v139 + 1) + v153 + 80) = 1;
        *(_QWORD *)(v68 + v69 + 88) = v65;
        v167 = 1;
        LOBYTE(v66) = 1;
        persist_registry(&v112, a2, &v139, v66);
        if ( (_DWORD)v112 == -1 )
        {
          v167 = 1;
          v156 = (_QWORD *)sub_1403B9610(48);
          nullsub_1(v79);
          v158 = sub_140001650(26, 1);
          if ( !v158 )
            sub_1416C2D4B(1, 26);
          v81 = (_OWORD *)v158;
          *(_OWORD *)(v158 + 10) = *(__int128 *)((char *)&xmmword_14174E61B + 10);
          *v81 = xmmword_14174E61B;
          nullsub_1(v80);
          v82 = (void *)sub_140001650(63, 1);
          if ( !v82 )
            sub_1416C2D4B(1, 63);
          qmemcpy(v82, "Restart Codex clients for the new auth snapshot to take effect.", 63);
          v83 = v156;
          *v156 = 26;
          v83[1] = v158;
          v83[2] = 26;
          v83[3] = 63;
          v83[4] = v82;
          v83[5] = 63;
          *(_QWORD *)&v137 = 1;
          *((_QWORD *)&v137 + 1) = v83;
          v138 = 1;
          v165 = 1;
          v164 = 1;
          sub_1403A9160(&v121, a2);
          if ( (_DWORD)v121 != -1 )
          {
            *(_OWORD *)&v134[80] = v126;
            *(_OWORD *)&v134[64] = v125;
            *(_OWORD *)&v134[48] = v124;
            *(_OWORD *)&v134[32] = v123;
            *(_OWORD *)&v134[16] = v122;
            *(_OWORD *)v134 = v121;
            nullsub_1(v84);
            v158 = sub_140001650(36, 1);
            if ( !v158 )
              sub_1416C2D4B(1, 36);
            v85 = v158;
            *(_OWORD *)(v158 + 16) = xmmword_14174E684;
            *(_OWORD *)v85 = xmmword_14174E674;
            *(_DWORD *)(v85 + 32) = 1145392201;
            *(_QWORD *)v99 = v134;
            *(_QWORD *)&v99[8] = sub_140B036A0;
            sub_14149C0F0(&v103, &unk_14174E698, v99);
            *(_QWORD *)v99 = 36;
            *(_QWORD *)&v99[8] = v158;
            *(_QWORD *)&v99[16] = 36;
            *(_OWORD *)&v99[24] = v103;
            *(_QWORD *)&v99[40] = v104;
            sub_1403B1FF0(&v137, v99);
            v165 = 1;
            v164 = 1;
            sub_14034ED40(v134);
          }
          v86 = *(_QWORD *)(a2 + 552);
          v87 = *(_QWORD *)(a2 + 560);
          v165 = 1;
          v164 = 1;
          sub_1403C71F0(&v112, v86, v87);
          if ( v39 >= (unsigned __int64)v140 )
          {
            v163 = 1;
            v162 = 1;
            sub_1416C30E3(v39, v140, &off_14174E6E0);
          }
          v88 = DWORD2(v139) + v153;
          v89 = sub_1403C7710(
                  &v112,
                  *(_QWORD *)(*((_QWORD *)&v139 + 1) + v153 + 200),
                  *(_QWORD *)(*((_QWORD *)&v139 + 1) + v153 + 208));
          v163 = 1;
          v162 = 1;
          LOBYTE(v90) = 1;
          sub_1403A60C0((unsigned int)v99, v88, (unsigned int)&v97, v90, v89);
          sub_140388B60((unsigned int)v134, a4, 0, 1, 1);
          v91 = *(_QWORD *)&v134[8];
          LOBYTE(v153) = v134[0];
          if ( v134[0] )
            sub_1416C2D4B(*(_QWORD *)&v134[8], *(_QWORD *)&v134[16]);
          v92 = *(_QWORD *)&v134[16];
          if ( a4 )
            sub_141684120(*(_QWORD *)&v134[16], a3, a4);
          sub_141684120(&v121, v99, 352);
          v130 = v159;
          v131 = v155;
          v132 = v149;
          v127 = v91;
          v128 = v92;
          v129 = a4;
          v133 = 257;
          v119 = (_BYTE *)v138;
          v118 = v137;
          sub_140AC9950(v134, &v121, &v118);
          sub_141684120(a1, v134, 488);
          sub_140015650((__int64 *)&v112);
          sub_14034E200(v109);
          if ( v157 )
            sub_140001660(v152, v157, 1);
          sub_14034E8D0(&v97);
          sub_14034DF40(&v139);
          sub_14034E7D0(&v145);
          sub_14034E7D0(&v146);
          sub_14034E7D0(&hObject);
          if ( !v154 )
            goto LABEL_12;
          v56 = v151;
          v18 = v154;
          goto LABEL_55;
        }
        v102 = v117;
        v101 = v116;
        v100 = v115;
        *(_OWORD *)&v99[32] = v114;
        *(_OWORD *)&v99[16] = v113;
        *(_OWORD *)v99 = v112;
        sub_140381540(&v121, v109);
        if ( (_DWORD)v121 == -1 )
        {
          *(_QWORD *)(a1 + 8) = *(_QWORD *)v99;
          *(_OWORD *)(a1 + 16) = *(_OWORD *)&v99[8];
          *(_QWORD *)(a1 + 32) = *(_QWORD *)&v99[24];
          v93 = v100;
          v94 = v101;
          v95 = v102;
          *(_OWORD *)(a1 + 40) = *(_OWORD *)&v99[32];
          *(_OWORD *)(a1 + 56) = v93;
          *(_OWORD *)(a1 + 72) = v94;
          *(_OWORD *)(a1 + 88) = v95;
          goto LABEL_64;
        }
        *(_OWORD *)&v134[80] = v126;
        *(_OWORD *)&v134[64] = v125;
        *(_OWORD *)&v134[48] = v124;
        *(_OWORD *)&v134[32] = v123;
        *(_OWORD *)&v134[16] = v122;
        *(_OWORD *)v134 = v121;
        *(_QWORD *)&v118 = v99;
        *((_QWORD *)&v118 + 1) = sub_140B036A0;
        v119 = v134;
        v120 = sub_140B036A0;
        sub_14149C0F0(&v105, &unk_14174E5D0, &v118);
        sub_14034ED40(v134);
        *(_QWORD *)(a1 + 8) = 10;
        *(_OWORD *)(a1 + 16) = v105;
        *(_QWORD *)(a1 + 32) = v106;
        *(_QWORD *)a1 = 2;
        v167 = 1;
        sub_14034ED40(v99);
LABEL_65:
        sub_14034E200(v109);
        v52 = v159;
        v53 = v157;
        if ( !v157 )
          goto LABEL_45;
        goto LABEL_44;
      }
    }
    v167 = 1;
    sub_140018650((char *)&v121 + 8);
    goto LABEL_62;
  }
  *(_QWORD *)(a1 + 96) = v126;
  *(_OWORD *)(a1 + 80) = v125;
  v9 = v121;
  v10 = v122;
  v11 = v123;
  *(_OWORD *)(a1 + 64) = v124;
  *(_OWORD *)(a1 + 48) = v11;
  *(_OWORD *)(a1 + 32) = v10;
  *(_OWORD *)(a1 + 16) = v9;
  *(_QWORD *)(a1 + 8) = v8;
  *(_QWORD *)a1 = 2;
  return a1;
}