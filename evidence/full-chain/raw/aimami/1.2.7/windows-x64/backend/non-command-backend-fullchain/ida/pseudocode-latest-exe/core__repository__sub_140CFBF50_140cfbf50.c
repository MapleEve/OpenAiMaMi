// win 1.2.7 latest-exe | module src/core/repository.rs | ea 0x140cfbf50 | successor of pre-update 0x1401c89e0 | session <审计会话>
// match evidence: {"conf": false, "body_sim": 0.913, "str_ov": 1.0, "verdict": "CONFIRMED_DIFF"}
__int64 __fastcall sub_140CFBF50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // rax
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int64 v12; // r12
  __int64 v13; // r12
  char v14; // r13
  __int64 v15; // rdi
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __int64 v19; // rdi
  __int128 v20; // xmm0
  __int64 v21; // rax
  char v22; // cl
  int v23; // ecx
  __int64 v24; // rdi
  __int64 v25; // r14
  __int64 v26; // rbx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rdi
  int v32; // eax
  __int64 v33; // r12
  __int64 v34; // r13
  __int64 v35; // rdi
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r12
  __int64 v40; // r13
  __int128 v41; // xmm0
  __int128 v42; // xmm1
  __int128 v43; // xmm2
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r13
  __int64 v48; // rax
  __int64 v49; // rdi
  char v50; // di
  __int64 v51; // r13
  __int64 v52; // r12
  __int64 v53; // rax
  __int64 v54; // rcx
  __int64 v55; // rax
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm2
  __int64 v59; // rdi
  __int64 v60; // r12
  __int128 v61; // kr10_16
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  __int128 v64; // xmm2
  __int128 v65; // kr20_16
  __int128 v66; // xmm0
  __int128 v67; // xmm1
  __int128 v68; // xmm2
  __int64 v69; // rdi
  unsigned __int64 v70; // r12
  __int128 v71; // xmm0
  __int128 v72; // xmm1
  __int128 v73; // xmm2
  unsigned __int64 v74; // rcx
  __int64 v75; // r12
  __int64 v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // r8
  __int64 v79; // rdi
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // r13
  __int64 v85; // rax
  void *v86; // rax
  __int64 v87; // rbx
  __int64 v88; // rcx
  int v89; // edx
  int v90; // r8d
  int v91; // r9d
  __int64 v92; // rax
  int v93; // eax
  __int64 v94; // rdx
  __int64 v95; // r8
  __int64 v96; // rax
  int v97; // r9d
  __int64 v98; // rdi
  __int64 v99; // r15
  char v100; // di
  __int64 v101; // rax
  char v102; // al
  __int64 v103; // rax
  __int128 v104; // xmm0
  __int128 v105; // xmm0
  __int128 v106; // xmm1
  __int64 v107; // r8
  void *v108; // rax
  __int64 v109; // rdx
  __int64 v110; // r14
  __int64 v111; // r15
  __int64 v112; // rax
  __int64 v113; // rcx
  __int128 v114; // xmm0
  __int128 v115; // xmm1
  __int128 v116; // xmm2
  int v117; // r13d
  __int64 v118; // rax
  __int64 v119; // r9
  __int64 v120; // r13
  __int64 v121; // rax
  __int64 v122; // rcx
  __int64 v123; // rdx
  __int64 v124; // rcx
  __int64 v125; // rdx
  __int64 v126; // r8
  __int64 v127; // rax
  __int64 v128; // rdx
  __int64 v129; // rcx
  _OWORD *v130; // rax
  void *v131; // rax
  __int64 v132; // rdx
  __int64 v133; // rcx
  __int64 v134; // rax
  __int64 v135; // rdx
  __int64 v136; // r8
  int v137; // r15d
  __int64 v138; // rax
  int v139; // r9d
  __int64 v140; // r13
  __int64 v141; // r15
  __int128 v142; // xmm1
  __int128 v143; // xmm2
  __int128 v144; // xmm3
  __int64 v145; // [rsp+30h] [rbp-50h] BYREF
  char v146[168]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v147[48]; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v148; // [rsp+110h] [rbp+90h]
  __int128 v149; // [rsp+120h] [rbp+A0h]
  __int128 v150; // [rsp+130h] [rbp+B0h]
  __int128 v151; // [rsp+260h] [rbp+1E0h] BYREF
  __int64 v152; // [rsp+270h] [rbp+1F0h]
  __int128 v153; // [rsp+278h] [rbp+1F8h] BYREF
  __int64 v154; // [rsp+288h] [rbp+208h]
  _OWORD v155[3]; // [rsp+290h] [rbp+210h] BYREF
  __int64 v156; // [rsp+2C0h] [rbp+240h]
  _QWORD v157[2]; // [rsp+2D0h] [rbp+250h] BYREF
  __int128 v158; // [rsp+2E0h] [rbp+260h] BYREF
  __int128 v159; // [rsp+2F0h] [rbp+270h]
  __int128 v160; // [rsp+300h] [rbp+280h]
  __int128 v161; // [rsp+310h] [rbp+290h]
  __int128 v162; // [rsp+320h] [rbp+2A0h]
  __int128 v163; // [rsp+330h] [rbp+2B0h]
  __int128 v164; // [rsp+340h] [rbp+2C0h] BYREF
  __int128 v165; // [rsp+350h] [rbp+2D0h]
  __int128 v166; // [rsp+360h] [rbp+2E0h]
  __int128 v167; // [rsp+370h] [rbp+2F0h]
  __int128 v168; // [rsp+380h] [rbp+300h]
  __int128 v169; // [rsp+390h] [rbp+310h]
  __int64 v170; // [rsp+4C0h] [rbp+440h]
  __int64 v171; // [rsp+4C8h] [rbp+448h]
  __int64 v172; // [rsp+4D0h] [rbp+450h]
  __int64 v173; // [rsp+4D8h] [rbp+458h]
  __int64 v174; // [rsp+4E0h] [rbp+460h]
  __int64 v175; // [rsp+4E8h] [rbp+468h]
  __int16 v176; // [rsp+4F0h] [rbp+470h]
  __int128 v177; // [rsp+500h] [rbp+480h] BYREF
  __int128 v178; // [rsp+510h] [rbp+490h] BYREF
  __int128 v179; // [rsp+520h] [rbp+4A0h]
  __int128 v180; // [rsp+530h] [rbp+4B0h]
  __int128 v181; // [rsp+540h] [rbp+4C0h]
  __int64 v182; // [rsp+550h] [rbp+4D0h]
  __int128 v183; // [rsp+560h] [rbp+4E0h] BYREF
  _BYTE *v184; // [rsp+570h] [rbp+4F0h]
  __int64 (__fastcall *v185)(_QWORD, _QWORD); // [rsp+578h] [rbp+4F8h]
  __int64 v186; // [rsp+588h] [rbp+508h] BYREF
  __int64 v187; // [rsp+590h] [rbp+510h]
  __int64 v188; // [rsp+598h] [rbp+518h]
  __int128 v189; // [rsp+5A8h] [rbp+528h] BYREF
  _BYTE *v190; // [rsp+5B8h] [rbp+538h]
  _BYTE v191[96]; // [rsp+5C0h] [rbp+540h] BYREF
  __int64 v192; // [rsp+620h] [rbp+5A0h]
  char v193[424]; // [rsp+628h] [rbp+5A8h] BYREF
  __int128 v194; // [rsp+7D0h] [rbp+750h] BYREF
  __int128 v195; // [rsp+7E0h] [rbp+760h] BYREF
  __int128 v196; // [rsp+7F0h] [rbp+770h]
  __int128 v197; // [rsp+800h] [rbp+780h]
  __int128 v198; // [rsp+810h] [rbp+790h]
  __int64 v199; // [rsp+820h] [rbp+7A0h]
  __int64 v200; // [rsp+830h] [rbp+7B0h]
  __int64 v201; // [rsp+838h] [rbp+7B8h]
  __int128 v202; // [rsp+840h] [rbp+7C0h] BYREF
  __int64 v203; // [rsp+850h] [rbp+7D0h]
  __int64 v204; // [rsp+858h] [rbp+7D8h] BYREF
  __int64 v205; // [rsp+860h] [rbp+7E0h]
  __int64 v206; // [rsp+868h] [rbp+7E8h]
  char v207; // [rsp+870h] [rbp+7F0h]
  __int64 v208; // [rsp+878h] [rbp+7F8h] BYREF
  __int64 v209; // [rsp+880h] [rbp+800h] BYREF
  __int128 v210; // [rsp+888h] [rbp+808h] BYREF
  __int64 v211; // [rsp+898h] [rbp+818h]
  __int64 v212; // [rsp+8A0h] [rbp+820h]
  __int64 v213; // [rsp+8A8h] [rbp+828h]
  __int64 v214; // [rsp+8B0h] [rbp+830h]
  __int64 v215; // [rsp+8B8h] [rbp+838h]
  __int64 v216; // [rsp+8C0h] [rbp+840h]
  __int64 v217; // [rsp+8C8h] [rbp+848h]
  __int64 v218; // [rsp+8D0h] [rbp+850h]
  unsigned __int64 v219; // [rsp+8D8h] [rbp+858h]
  __int64 v220; // [rsp+8E0h] [rbp+860h]
  __int64 v221; // [rsp+8E8h] [rbp+868h]
  __int64 v222; // [rsp+8F0h] [rbp+870h]
  __int64 v223; // [rsp+8F8h] [rbp+878h]
  __int64 v224; // [rsp+900h] [rbp+880h]
  __int64 v225; // [rsp+908h] [rbp+888h]
  __int64 v226; // [rsp+910h] [rbp+890h]
  __int64 v227; // [rsp+918h] [rbp+898h]
  __int64 v228; // [rsp+920h] [rbp+8A0h]
  __int64 v229; // [rsp+928h] [rbp+8A8h]
  __int64 v230; // [rsp+930h] [rbp+8B0h]
  __int64 v231; // [rsp+938h] [rbp+8B8h]
  __int64 v232; // [rsp+940h] [rbp+8C0h]
  __int64 v233; // [rsp+948h] [rbp+8C8h]
  char v234; // [rsp+957h] [rbp+8D7h]
  __int64 v235; // [rsp+958h] [rbp+8D8h]
  char v236; // [rsp+966h] [rbp+8E6h]
  char v237; // [rsp+967h] [rbp+8E7h]
  char v238; // [rsp+968h] [rbp+8E8h]
  char v239; // [rsp+969h] [rbp+8E9h]
  char v240; // [rsp+96Ah] [rbp+8EAh]
  char v241; // [rsp+96Bh] [rbp+8EBh]
  char v242; // [rsp+96Ch] [rbp+8ECh]
  char v243; // [rsp+96Dh] [rbp+8EDh]
  char v244; // [rsp+96Eh] [rbp+8EEh]
  char v245; // [rsp+96Fh] [rbp+8EFh]
  __int64 v246; // [rsp+970h] [rbp+8F0h]

  v246 = -2;
  v157[0] = a3;
  v157[1] = a4;
  sub_140CFB3B0(v191, *(_QWORD *)(a2 + 296), *(_QWORD *)(a2 + 304));
  v8 = *(_QWORD *)v191;
  v164 = *(_OWORD *)&v191[8];
  v165 = *(_OWORD *)&v191[24];
  v166 = *(_OWORD *)&v191[40];
  v167 = *(_OWORD *)&v191[56];
  v168 = *(_OWORD *)&v191[72];
  *(_QWORD *)&v169 = *(_QWORD *)&v191[88];
  if ( *(_QWORD *)v191 != -1 )
  {
    *(_QWORD *)(a1 + 96) = v169;
    *(_OWORD *)(a1 + 80) = v168;
    v9 = v164;
    v10 = v165;
    v11 = v166;
    *(_OWORD *)(a1 + 64) = v167;
    *(_OWORD *)(a1 + 48) = v11;
    *(_OWORD *)(a1 + 32) = v10;
    *(_OWORD *)(a1 + 16) = v9;
    *(_QWORD *)(a1 + 8) = v8;
    *(_QWORD *)a1 = 2;
    return a1;
  }
  v182 = v169;
  v181 = v168;
  v180 = v167;
  v179 = v166;
  v178 = v165;
  v177 = v164;
  if ( (_QWORD)v165 )
  {
    v12 = 0;
    while ( *(_QWORD *)(*((_QWORD *)&v177 + 1) + v12 + 208) != a4
         || (unsigned int)sub_141923B40(*(_QWORD *)(*((_QWORD *)&v177 + 1) + v12 + 200), a3, a4) )
    {
      v12 += 424;
      if ( 424LL * (_QWORD)v165 == v12 )
        goto LABEL_10;
    }
    sub_1416DA980(
      v191,
      *(_QWORD *)(*((_QWORD *)&v177 + 1) + v12 + 224),
      *(_QWORD *)(*((_QWORD *)&v177 + 1) + v12 + 232));
    v221 = *(_QWORD *)v191;
    v13 = *(_QWORD *)&v191[16];
    v14 = v191[24];
    v15 = *(_QWORD *)(a2 + 328);
    v215 = *(_QWORD *)(a2 + 336);
    v218 = *(_QWORD *)&v191[8];
    sub_14071E1C0((unsigned int)v191, *(_DWORD *)&v191[8], *(_DWORD *)&v191[16], v15, v215);
    if ( *(_DWORD *)v191 != -1 )
    {
      *(_OWORD *)(a1 + 88) = *(_OWORD *)&v191[80];
      *(_OWORD *)(a1 + 72) = *(_OWORD *)&v191[64];
      v16 = *(_OWORD *)v191;
      v17 = *(_OWORD *)&v191[16];
      v18 = *(_OWORD *)&v191[32];
      *(_OWORD *)(a1 + 56) = *(_OWORD *)&v191[48];
      *(_OWORD *)(a1 + 40) = v18;
      *(_OWORD *)(a1 + 24) = v17;
      *(_OWORD *)(a1 + 8) = v16;
      *(_QWORD *)a1 = 2;
      v19 = v221;
LABEL_84:
      if ( v19 )
        sub_140001660(v218, v19, 1);
      goto LABEL_11;
    }
    v28 = *(_QWORD *)(a2 + 48);
    v231 = *(_QWORD *)(a2 + 40);
    v222 = v28;
    sub_140D05480(v191, v231, v28);
    v233 = v15;
    v31 = *(_QWORD *)v191;
    v232 = v13;
    LOBYTE(v235) = v14;
    if ( *(_QWORD *)v191 == -1 )
    {
      if ( *((_QWORD *)&v178 + 1) == -1 || (sub_1416DB410(&v164, (char *)&v178 + 8), v31 = v164, (_QWORD)v164 == -1) )
      {
LABEL_37:
        v204 = -1;
        v40 = -1;
        v39 = -1;
        goto LABEL_38;
      }
      v228 = *((_QWORD *)&v164 + 1);
      v30 = v165;
      v230 = v165;
      if ( (_QWORD)v165 != a4 )
      {
LABEL_28:
        v229 = v31;
        if ( (_QWORD)v178 )
        {
          v33 = *((_QWORD *)&v177 + 1);
          v34 = 424 * v178;
          v35 = 0;
          while ( 1 )
          {
            if ( *(_QWORD *)(v33 + v35 + 208) == v30 )
            {
              v36 = sub_141923B40(*(_QWORD *)(v33 + v35 + 200), v228, v230);
              v30 = v230;
              if ( !v36 )
                break;
            }
            v35 += 424;
            if ( v34 == v35 )
              goto LABEL_36;
          }
          v37 = *(_QWORD *)(v33 + v35 + 224);
          v38 = *(_QWORD *)(v33 + v35 + 232);
          v201 = v228;
          v39 = v229;
          v200 = v229;
          sub_1416DA980(&v204, v37, v38);
          v40 = v204;
          if ( v204 == -1 )
          {
            v40 = -1;
          }
          else
          {
            v217 = v228;
            v216 = v39;
            sub_14071E1C0((unsigned int)v191, v205, v206, v233, v215);
            if ( *(_DWORD *)v191 != -1 )
            {
              *(_OWORD *)(a1 + 88) = *(_OWORD *)&v191[80];
              *(_OWORD *)(a1 + 72) = *(_OWORD *)&v191[64];
              v41 = *(_OWORD *)v191;
              v42 = *(_OWORD *)&v191[16];
              v43 = *(_OWORD *)&v191[32];
              *(_OWORD *)(a1 + 56) = *(_OWORD *)&v191[48];
              *(_OWORD *)(a1 + 40) = v43;
              *(_OWORD *)(a1 + 24) = v42;
              *(_OWORD *)(a1 + 8) = v41;
              *(_QWORD *)a1 = 2;
              v19 = v221;
              goto LABEL_80;
            }
          }
        }
        else
        {
LABEL_36:
          v204 = -1;
          v40 = -1;
          v39 = v229;
        }
LABEL_38:
        v215 = v40;
        nullsub_1(v30, v29);
        v44 = sub_140001650(32, 8);
        if ( !v44 )
        {
          v217 = v228;
          v216 = v39;
          sub_14196B2C1(8, 32);
        }
        v46 = v44;
        v47 = v232;
        v229 = v39;
        if ( v232 )
        {
          v233 = v44;
          nullsub_1(v44, v45);
          v48 = sub_140001650(v47, 1);
          if ( !v48 )
            sub_14196B2DB(1, v47);
          v49 = v48;
          sub_1419234B0(v48, v218, v47);
          v46 = v233;
        }
        else
        {
          v49 = 1;
        }
        *(_QWORD *)v46 = v47;
        *(_QWORD *)(v46 + 8) = v49;
        *(_QWORD *)(v46 + 16) = v47;
        *(_BYTE *)(v46 + 24) = v235;
        *(_QWORD *)&v210 = 1;
        *((_QWORD *)&v210 + 1) = v46;
        v211 = 1;
        v40 = v215;
        if ( v215 != -1 )
        {
          v241 = 1;
          sub_14022C3D0(v191, &v204);
          v50 = v207;
          v233 = *(_QWORD *)&v191[8];
          v235 = *(_QWORD *)v191;
          v51 = *(_QWORD *)&v191[16];
          v52 = v211;
          if ( v211 == (_QWORD)v210 )
            sub_1419397B0(&v210);
          v53 = *((_QWORD *)&v210 + 1);
          v54 = 32 * v52;
          *(_QWORD *)(*((_QWORD *)&v210 + 1) + v54) = v235;
          *(_QWORD *)(v53 + v54 + 8) = v233;
          *(_QWORD *)(v53 + v54 + 16) = v51;
          *(_BYTE *)(v53 + v54 + 24) = v50;
          v211 = v52 + 1;
          v40 = v215;
        }
        *(_QWORD *)&v165 = v211;
        v164 = v210;
        v241 = 0;
        sub_140C69CD0(v191, &v164);
        v55 = *(_QWORD *)v191;
        *(_OWORD *)v147 = *(_OWORD *)&v191[8];
        *(_QWORD *)&v147[16] = *(_QWORD *)&v191[24];
        if ( *(_QWORD *)v191 != -1 )
        {
          v56 = *(_OWORD *)&v191[32];
          v57 = *(_OWORD *)&v191[48];
          v58 = *(_OWORD *)&v191[64];
          *(_OWORD *)(a1 + 88) = *(_OWORD *)&v191[80];
          *(_OWORD *)(a1 + 72) = v58;
          *(_OWORD *)(a1 + 56) = v57;
          *(_OWORD *)(a1 + 40) = v56;
          *(_QWORD *)(a1 + 32) = *(_QWORD *)&v147[16];
          *(_OWORD *)(a1 + 16) = *(_OWORD *)v147;
          *(_QWORD *)(a1 + 8) = v55;
          *(_QWORD *)a1 = 2;
          goto LABEL_79;
        }
        v202 = *(_OWORD *)v147;
        v203 = *(_QWORD *)&v147[16];
        v59 = *(_QWORD *)(a2 + 264);
        v60 = *(_QWORD *)(a2 + 272);
        sub_140C9CDA0(v191, v59, v60);
        v61 = *(_OWORD *)v191;
        if ( *(_QWORD *)v191 != -1 )
        {
          *(_OWORD *)(a1 + 88) = *(_OWORD *)&v191[80];
          v62 = *(_OWORD *)&v191[16];
          v63 = *(_OWORD *)&v191[32];
          v64 = *(_OWORD *)&v191[48];
          *(_OWORD *)(a1 + 72) = *(_OWORD *)&v191[64];
          *(_OWORD *)(a1 + 56) = v64;
          *(_OWORD *)(a1 + 40) = v63;
          *(_OWORD *)(a1 + 24) = v62;
          *(_OWORD *)(a1 + 8) = v61;
          *(_QWORD *)a1 = 2;
          goto LABEL_77;
        }
        v209 = *(_QWORD *)&v191[8];
        sub_140C9CFB0(v191, v59, v60);
        v65 = *(_OWORD *)v191;
        if ( *(_QWORD *)v191 != -1 )
        {
          *(_OWORD *)(a1 + 88) = *(_OWORD *)&v191[80];
          v66 = *(_OWORD *)&v191[16];
          v67 = *(_OWORD *)&v191[32];
          v68 = *(_OWORD *)&v191[48];
          *(_OWORD *)(a1 + 72) = *(_OWORD *)&v191[64];
          *(_OWORD *)(a1 + 56) = v68;
          *(_OWORD *)(a1 + 40) = v67;
          *(_OWORD *)(a1 + 24) = v66;
          *(_OWORD *)(a1 + 8) = v65;
          *(_QWORD *)a1 = 2;
LABEL_76:
          sub_1401AF000(&v209);
LABEL_77:
          sub_1402350E0(&v202);
          if ( (_QWORD)v202 )
            sub_140001660(*((_QWORD *)&v202 + 1), 8 * v202, 8);
LABEL_79:
          v19 = v221;
          v39 = v229;
          if ( v40 == -1 )
          {
LABEL_82:
            if ( (unsigned __int64)(v39 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              sub_140001660(v228, v39, 1);
            goto LABEL_84;
          }
LABEL_80:
          if ( v40 )
            sub_140001660(v205, v40, 1);
          goto LABEL_82;
        }
        v208 = *(_QWORD *)&v191[8];
        sub_140D11710(v191, a2, a3, a4);
        v69 = v192;
        v164 = *(_OWORD *)v191;
        v165 = *(_OWORD *)&v191[16];
        v166 = *(_OWORD *)&v191[32];
        v167 = *(_OWORD *)&v191[48];
        v168 = *(_OWORD *)&v191[64];
        *(_QWORD *)&v169 = *(_QWORD *)&v191[80];
        v70 = *(_QWORD *)&v191[88];
        if ( v192 == 2 )
        {
          *(_QWORD *)(a1 + 88) = v169;
          *(_OWORD *)(a1 + 72) = v168;
          v71 = v164;
          v72 = v165;
          v73 = v166;
          *(_OWORD *)(a1 + 56) = v167;
          *(_OWORD *)(a1 + 40) = v73;
          *(_OWORD *)(a1 + 24) = v72;
          *(_OWORD *)(a1 + 8) = v71;
          *(_QWORD *)(a1 + 96) = v70;
          *(_QWORD *)a1 = 2;
LABEL_75:
          sub_1401AF000(&v208);
          goto LABEL_76;
        }
        sub_1419234B0(v146, v193, 168);
        v199 = v169;
        v198 = v168;
        v197 = v167;
        v196 = v166;
        v195 = v165;
        v194 = v164;
        v145 = v69;
        if ( *((_QWORD *)&v165 + 1) == -1 )
        {
          v74 = v70;
          v235 = -1;
        }
        else
        {
          sub_1416DB410(v191, (char *)&v195 + 8);
          v74 = v70;
          v227 = *(_QWORD *)&v191[8];
          v235 = *(_QWORD *)v191;
          v220 = *(_QWORD *)&v191[16];
        }
        if ( v74 >= (unsigned __int64)v195 )
        {
          v236 = 1;
          sub_14196B673(v74, v195, &off_141A94720);
        }
        v75 = v40;
        v219 = v74;
        v76 = 424 * v74;
        v77 = *(_QWORD *)(*((_QWORD *)&v194 + 1) + v76 + 224);
        v212 = v76;
        v78 = *(_QWORD *)(*((_QWORD *)&v194 + 1) + v76 + 232);
        v236 = 1;
        sub_1416DA980(v191, v77, v78);
        v233 = *(_QWORD *)v191;
        v240 = 1;
        v223 = *(_QWORD *)&v191[8];
        v79 = *(_QWORD *)&v191[16];
        if ( !(unsigned __int8)sub_140222930(*(_QWORD *)&v191[8], *(_QWORD *)&v191[16], v218, v232) )
        {
          nullsub_1(v81, v80);
          v86 = (void *)sub_140001650(74, 1);
          if ( !v86 )
          {
            v240 = 1;
            sub_14196B2DB(1, 74);
          }
          qmemcpy(v86, "Account snapshot location changed while the switch was acquiring ownership", 74);
          *(_QWORD *)(a1 + 8) = 10;
          *(_QWORD *)(a1 + 16) = 74;
          *(_QWORD *)(a1 + 24) = v86;
          *(_QWORD *)(a1 + 32) = 74;
          *(_QWORD *)a1 = 2;
          v87 = v235;
          if ( v233 )
            sub_140001660(v223, v233, 1);
          if ( (unsigned __int64)(v87 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_74;
LABEL_73:
          sub_140001660(v227, v87, 1);
LABEL_74:
          sub_140037800(&v145);
          sub_140037470(&v194);
          goto LABEL_75;
        }
        v240 = 1;
        sub_140D05480(v191, v231, v222);
        v83 = *(_QWORD *)&v191[8];
        v226 = *(_QWORD *)&v191[8];
        v84 = *(_QWORD *)&v191[16];
        v232 = *(_QWORD *)v191;
        if ( (v235 & *(_QWORD *)v191) == 0xFFFFFFFFFFFFFFFFuLL )
        {
LABEL_62:
          v186 = -1;
          if ( (v229 & v75) == 0xFFFFFFFFFFFFFFFFuLL )
          {
LABEL_63:
            v230 = -1;
            goto LABEL_64;
          }
          goto LABEL_129;
        }
        if ( v232 != -1 )
        {
          if ( *(_QWORD *)&v191[16] != a4 )
          {
            v89 = DWORD2(v194);
            v90 = v195;
            v91 = v226;
            v92 = *(_QWORD *)&v191[16];
            goto LABEL_117;
          }
          v88 = v226;
LABEL_110:
          if ( !(unsigned int)sub_141923B40(v88, a3, a4) )
            goto LABEL_62;
          v89 = DWORD2(v194);
          v90 = v195;
          v91 = v226;
          v92 = v84;
          if ( v232 == -1 )
            goto LABEL_114;
LABEL_117:
          v234 = 1;
          sub_140CEDF30((unsigned int)&v186, v89, v90, v91, v92);
          if ( v232 == -1 )
          {
            if ( v235 == -1 )
            {
              v107 = v230;
              if ( v229 == -1 || MEMORY[0x10] != v230 )
                goto LABEL_129;
              v83 = MEMORY[8];
            }
            else
            {
              v107 = v230;
              if ( v229 == -1 || v220 != v230 )
                goto LABEL_129;
              v83 = v227;
            }
          }
          else
          {
            v107 = v230;
            if ( v229 == -1 )
              goto LABEL_129;
            v83 = v226;
            if ( v84 != v230 )
              goto LABEL_129;
          }
          if ( !(unsigned int)sub_141923B40(v83, v228, v107) )
          {
            v230 = v186;
            if ( v186 == -1 )
            {
              if ( v75 == -1 )
                goto LABEL_63;
            }
            else if ( v75 != -1 )
            {
              v244 = 1;
              v224 = v187;
              v225 = v188;
              if ( (unsigned __int8)sub_140222930(v187, v188, v205, v206) )
              {
                v112 = v226;
                v113 = v84;
                if ( v232 == -1 )
                {
                  v112 = v227;
                  v113 = v220;
                  if ( v235 == -1 )
                  {
                    v112 = MEMORY[8];
                    v113 = MEMORY[0x10];
                  }
                }
                v244 = 1;
                sub_140D23B40((unsigned int)v191, a2, v224, v225, v112, v113);
                if ( *(_DWORD *)v191 != -1 )
                  goto LABEL_138;
LABEL_64:
                if ( v235 == -1 || v220 != a4 || (v93 = sub_141923B40(v227, a3, a4), v232 == -1) || v93 )
                {
                  if ( v232 == -1 || v84 != a4 )
                    goto LABEL_103;
                }
                else
                {
                  if ( v84 != a4 )
                    goto LABEL_103;
                  if ( !(unsigned int)sub_141923B40(v226, a3, a4) )
                  {
                    v244 = 1;
                    sub_140D23B40((unsigned int)v191, a2, v223, v79, a3, a4);
                    if ( *(_DWORD *)v191 == -1 )
                    {
                      v94 = *(_QWORD *)(a2 + 552);
                      v95 = *(_QWORD *)(a2 + 560);
                      v244 = 1;
                      sub_140D36B30(&v158, v94, v95);
                      v96 = sub_140D37050(&v158, a3, a4);
                      if ( v219 >= (unsigned __int64)v195 )
                      {
                        v237 = 1;
                        sub_14196B673(v219, v195, &off_141A94888);
                      }
                      v237 = 1;
                      LOBYTE(v97) = 1;
                      sub_140D1C580((unsigned int)v147, DWORD2(v194) + v212, (unsigned int)&v145, v97, v96);
                      sub_1401E7560((unsigned int)v191, a4, 0, 1, 1);
                      v98 = *(_QWORD *)&v191[8];
                      LOBYTE(v231) = v191[0];
                      if ( v191[0] )
                        sub_14196B2DB(*(_QWORD *)&v191[8], *(_QWORD *)&v191[16]);
                      v99 = *(_QWORD *)&v191[16];
                      if ( a4 )
                        sub_1419234B0(*(_QWORD *)&v191[16], a3, a4);
                      sub_1419234B0(&v164, v147, 384);
                      v173 = v235;
                      v174 = v227;
                      v175 = a4;
                      v170 = v98;
                      v171 = v99;
                      v172 = a4;
                      v176 = 0;
                      sub_140CF57A0(v191, &v164);
                      sub_1419234B0(a1, v191, 520);
                      sub_1400376C0(&v158);
                      v100 = 0;
                      goto LABEL_141;
                    }
                    goto LABEL_138;
                  }
                }
                if ( !(unsigned int)sub_141923B40(v226, a3, a4) )
                {
                  v244 = 1;
                  v85 = sub_140D23B40((unsigned int)v191, a2, v223, v79, a3, a4);
                  if ( *(_DWORD *)v191 == -1 )
                  {
                    LOBYTE(v85) = 1;
                    LODWORD(v224) = v85;
LABEL_104:
                    v244 = 1;
                    v101 = sub_140A2C1C0(a2);
                    if ( v101 )
                    {
                      *(_QWORD *)(a1 + 8) = 2;
                      *(_QWORD *)(a1 + 16) = v101;
LABEL_139:
                      *(_QWORD *)a1 = 2;
LABEL_140:
                      v100 = 1;
LABEL_141:
                      v40 = v75;
                      v87 = v235;
                      v110 = v233;
                      v111 = v232;
                      v109 = v230;
                      goto LABEL_142;
                    }
                    v244 = 1;
                    sub_14022C3D0(&v158, a2 + 32);
                    v102 = *(_BYTE *)(a2 + 56);
                    *(_QWORD *)&v147[16] = v159;
                    *(_OWORD *)v147 = v158;
                    v147[24] = v102;
                    v244 = 1;
                    sub_140CF3620(v191, v147);
                    v103 = *(_QWORD *)v191;
                    v164 = *(_OWORD *)&v191[8];
                    v165 = *(_OWORD *)&v191[24];
                    v166 = *(_OWORD *)&v191[40];
                    *(_QWORD *)&v167 = *(_QWORD *)&v191[56];
                    if ( *(_QWORD *)v191 != -1 )
                    {
                      v104 = *(_OWORD *)&v191[64];
                      *(_OWORD *)(a1 + 88) = *(_OWORD *)&v191[80];
                      *(_OWORD *)(a1 + 72) = v104;
                      *(_QWORD *)(a1 + 64) = v167;
                      v105 = v164;
                      v106 = v165;
                      *(_OWORD *)(a1 + 48) = v166;
                      *(_OWORD *)(a1 + 32) = v106;
                      *(_OWORD *)(a1 + 16) = v105;
                      *(_QWORD *)(a1 + 8) = v103;
                      goto LABEL_139;
                    }
                    v155[0] = v164;
                    v155[1] = v165;
                    v155[2] = v166;
                    v156 = v167;
                    if ( !(_BYTE)v224 )
                    {
                      v245 = 1;
                      sub_1416C49D0(v191, v231, v222);
                      v117 = *(_DWORD *)v191;
                      v245 = 1;
                      sub_14019F370(*(_QWORD *)v191, *(_QWORD *)&v191[8]);
                      if ( v117 != 2 )
                      {
                        v245 = 1;
                        *(_QWORD *)v147 = sub_140719230();
                        *(_QWORD *)&v164 = v147;
                        *((_QWORD *)&v164 + 1) = sub_1416EBBB0;
                        v245 = 1;
                        sub_1416DAFA0(v191, &unk_141A94738, &v164);
                        v225 = *(_QWORD *)v191;
                        v126 = *(_QWORD *)(a2 + 368);
                        v125 = *(_QWORD *)(a2 + 360);
                        v213 = *(_QWORD *)&v191[8];
                        sub_1416B18A0((unsigned int)v191, v125, v126, *(_DWORD *)&v191[8], *(__int64 *)&v191[16]);
                        v214 = *(_QWORD *)&v191[8];
                        v127 = sub_1407C87B0(v231, v222, *(_QWORD *)&v191[8], *(_QWORD *)&v191[16]);
                        if ( v127 )
                        {
                          *(_QWORD *)(a1 + 8) = 2;
                          *(_QWORD *)(a1 + 16) = v127;
                          *(_QWORD *)a1 = 2;
                          if ( *(_QWORD *)v191 )
                            sub_140001660(v214, *(_QWORD *)v191, 1);
                          if ( v225 )
                            sub_140001660(v213, v225, 1);
                          goto LABEL_201;
                        }
                        if ( *(_QWORD *)v191 )
                          sub_140001660(v214, *(_QWORD *)v191, 1);
                        if ( v225 )
                          sub_140001660(v213, v225, 1);
                      }
                      v245 = 1;
                      v118 = sub_1407C87B0(v223, v79, v231, v222);
                      if ( v118 )
                      {
                        *(_QWORD *)(a1 + 8) = 2;
                        *(_QWORD *)(a1 + 16) = v118;
                        goto LABEL_200;
                      }
                    }
                    v245 = 1;
                    v231 = sub_140719230();
                    sub_1401E7560((unsigned int)v191, a4, 0, 1, 1);
                    v222 = *(_QWORD *)&v191[8];
                    if ( *(_DWORD *)v191 == 1 )
                    {
                      v245 = 1;
                      sub_14196B2DB(v222, *(_QWORD *)&v191[16]);
                    }
                    v120 = *(_QWORD *)&v191[16];
                    if ( a4 )
                      sub_1419234B0(*(_QWORD *)&v191[16], a3, a4);
                    if ( *((_QWORD *)&v195 + 1) != -1 && *((_QWORD *)&v195 + 1) )
                      sub_140001660(v196, *((_QWORD *)&v195 + 1), 1);
                    *((_QWORD *)&v195 + 1) = v222;
                    *(_QWORD *)&v196 = v120;
                    *((_QWORD *)&v196 + 1) = a4;
                    *((_QWORD *)&v198 + 1) = v231;
                    if ( v219 >= (unsigned __int64)v195 )
                    {
                      v245 = 1;
                      sub_14196B673(v219, v195, &off_141A94748);
                    }
                    v121 = *((_QWORD *)&v194 + 1);
                    v122 = v212;
                    *(_QWORD *)(*((_QWORD *)&v194 + 1) + v212 + 80) = 1;
                    *(_QWORD *)(v121 + v122 + 88) = v231;
                    v245 = 1;
                    LOBYTE(v119) = 1;
                    sub_140D02DF0(&v158, a2, &v194, v119);
                    if ( (_DWORD)v158 != -1 )
                    {
                      v150 = v163;
                      v149 = v162;
                      v148 = v161;
                      *(_OWORD *)&v147[32] = v160;
                      *(_OWORD *)&v147[16] = v159;
                      *(_OWORD *)v147 = v158;
                      sub_140CF37F0(&v164, v155);
                      if ( (_DWORD)v164 != -1 )
                      {
                        *(_OWORD *)&v191[80] = v169;
                        *(_OWORD *)&v191[64] = v168;
                        *(_OWORD *)&v191[48] = v167;
                        *(_OWORD *)&v191[32] = v166;
                        *(_OWORD *)&v191[16] = v165;
                        *(_OWORD *)v191 = v164;
                        *(_QWORD *)&v183 = v147;
                        *((_QWORD *)&v183 + 1) = sub_140D76130;
                        v184 = v191;
                        v185 = sub_140D76130;
                        sub_1416DAFA0(&v153, &unk_141A94760, &v183);
                        sub_140CB96B0(v191);
                        *(_QWORD *)(a1 + 8) = 10;
                        *(_OWORD *)(a1 + 16) = v153;
                        *(_QWORD *)(a1 + 32) = v154;
                        *(_QWORD *)a1 = 2;
                        v245 = 1;
                        sub_140CB96B0(v147);
LABEL_201:
                        sub_1401921C0(v155);
                        goto LABEL_140;
                      }
                      *(_QWORD *)(a1 + 8) = *(_QWORD *)v147;
                      *(_OWORD *)(a1 + 16) = *(_OWORD *)&v147[8];
                      *(_QWORD *)(a1 + 32) = *(_QWORD *)&v147[24];
                      v142 = v148;
                      v143 = v149;
                      v144 = v150;
                      *(_OWORD *)(a1 + 40) = *(_OWORD *)&v147[32];
                      *(_OWORD *)(a1 + 56) = v142;
                      *(_OWORD *)(a1 + 72) = v143;
                      *(_OWORD *)(a1 + 88) = v144;
LABEL_200:
                      *(_QWORD *)a1 = 2;
                      goto LABEL_201;
                    }
                    *(_QWORD *)&v189 = 0;
                    *((_QWORD *)&v189 + 1) = 8;
                    v190 = nullptr;
                    if ( !(_BYTE)v224 )
                    {
                      nullsub_1(v124, v123);
                      v231 = sub_140001650(26, 1);
                      if ( !v231 )
                      {
                        v243 = 1;
                        v242 = 1;
                        sub_14196B2DB(1, 26);
                      }
                      v130 = (_OWORD *)v231;
                      *(_OWORD *)(v231 + 10) = *(__int128 *)((char *)&xmmword_141A947AB + 10);
                      *v130 = xmmword_141A947AB;
                      nullsub_1(v129, v128);
                      v131 = (void *)sub_140001650(63, 1);
                      if ( !v131 )
                        sub_14196B2DB(1, 63);
                      qmemcpy(v131, "Restart Codex clients for the new auth snapshot to take effect.", 63);
                      *(_QWORD *)v191 = 26;
                      *(_QWORD *)&v191[8] = v231;
                      *(_QWORD *)&v191[16] = 26;
                      *(_QWORD *)&v191[24] = 63;
                      *(_QWORD *)&v191[32] = v131;
                      *(_QWORD *)&v191[40] = 63;
                      v243 = 1;
                      v242 = 1;
                      sub_14017A7B0(&v189, v191);
                    }
                    v243 = 1;
                    v242 = 1;
                    sub_140D1F830(&v164, a2);
                    if ( (_DWORD)v164 != -1 )
                    {
                      *(_OWORD *)&v191[80] = v169;
                      *(_OWORD *)&v191[64] = v168;
                      *(_OWORD *)&v191[48] = v167;
                      *(_OWORD *)&v191[32] = v166;
                      *(_OWORD *)&v191[16] = v165;
                      *(_OWORD *)v191 = v164;
                      nullsub_1(v133, v132);
                      v231 = sub_140001650(36, 1);
                      if ( !v231 )
                        sub_14196B2DB(1, 36);
                      v134 = v231;
                      *(_OWORD *)(v231 + 16) = xmmword_141A94814;
                      *(_OWORD *)v134 = xmmword_141A94804;
                      *(_DWORD *)(v134 + 32) = 1145392201;
                      *(_QWORD *)v147 = v191;
                      *(_QWORD *)&v147[8] = sub_140D76130;
                      sub_1416DAFA0(&v151, &unk_141A94828, v147);
                      *(_QWORD *)v147 = 36;
                      *(_QWORD *)&v147[8] = v231;
                      *(_QWORD *)&v147[16] = 36;
                      *(_OWORD *)&v147[24] = v151;
                      *(_QWORD *)&v147[40] = v152;
                      sub_14017A7B0(&v189, v147);
                      v243 = 1;
                      v242 = 1;
                      sub_140CB96B0(v191);
                    }
                    v135 = *(_QWORD *)(a2 + 552);
                    v136 = *(_QWORD *)(a2 + 560);
                    v243 = 1;
                    v242 = 1;
                    sub_140D36B30(&v158, v135, v136);
                    if ( v219 >= (unsigned __int64)v195 )
                    {
                      v239 = 1;
                      v238 = 1;
                      sub_14196B673(v219, v195, &off_141A94870);
                    }
                    v137 = DWORD2(v194) + v212;
                    v138 = sub_140D37050(
                             &v158,
                             *(_QWORD *)(*((_QWORD *)&v194 + 1) + v212 + 200),
                             *(_QWORD *)(*((_QWORD *)&v194 + 1) + v212 + 208));
                    v239 = 1;
                    v238 = 1;
                    LOBYTE(v139) = 1;
                    sub_140D1C580((unsigned int)v147, v137, (unsigned int)&v145, v139, v138);
                    sub_1401E7560((unsigned int)v191, a4, 0, 1, 1);
                    v140 = *(_QWORD *)&v191[8];
                    LOBYTE(v231) = v191[0];
                    if ( v191[0] )
                      sub_14196B2DB(*(_QWORD *)&v191[8], *(_QWORD *)&v191[16]);
                    v141 = *(_QWORD *)&v191[16];
                    if ( a4 )
                      sub_1419234B0(*(_QWORD *)&v191[16], a3, a4);
                    sub_1419234B0(&v164, v147, 384);
                    v173 = v235;
                    v174 = v227;
                    v175 = v220;
                    v170 = v140;
                    v171 = v141;
                    v172 = a4;
                    LOBYTE(v176) = v224 ^ 1;
                    HIBYTE(v176) = 1;
                    v184 = v190;
                    v183 = v189;
                    sub_140CF55F0(v191, &v164, &v183);
                    sub_1419234B0(a1, v191, 520);
                    sub_1400376C0(&v158);
                    sub_1401921C0(v155);
                    if ( (unsigned __int64)(v230 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
                    {
                      if ( (unsigned __int64)(v232 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
                      {
LABEL_186:
                        if ( !v233 )
                          goto LABEL_188;
                        goto LABEL_187;
                      }
                    }
                    else
                    {
                      sub_140001660(v187, v230, 1);
                      if ( (unsigned __int64)(v232 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
                        goto LABEL_186;
                    }
                    sub_140001660(v226, v232, 1);
                    if ( !v233 )
                    {
LABEL_188:
                      sub_140037800(&v145);
                      sub_140037470(&v194);
                      sub_1401AF000(&v208);
                      sub_1401AF000(&v209);
                      v241 = 0;
                      sub_140902BA0(&v202);
                      if ( (unsigned __int64)(v75 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
                      {
                        if ( (unsigned __int64)(v229 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
                        {
LABEL_190:
                          if ( !v221 )
                          {
LABEL_192:
                            sub_140037470(&v177);
                            return a1;
                          }
LABEL_191:
                          sub_140001660(v218, v221, 1);
                          goto LABEL_192;
                        }
                      }
                      else
                      {
                        sub_140001660(v205, v75, 1);
                        if ( (unsigned __int64)(v229 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
                          goto LABEL_190;
                      }
                      sub_140001660(v228, v229, 1);
                      if ( !v221 )
                        goto LABEL_192;
                      goto LABEL_191;
                    }
LABEL_187:
                    sub_140001660(v223, v233, 1);
                    goto LABEL_188;
                  }
LABEL_138:
                  *(_OWORD *)(a1 + 88) = *(_OWORD *)&v191[80];
                  *(_OWORD *)(a1 + 72) = *(_OWORD *)&v191[64];
                  v114 = *(_OWORD *)v191;
                  v115 = *(_OWORD *)&v191[16];
                  v116 = *(_OWORD *)&v191[32];
                  *(_OWORD *)(a1 + 56) = *(_OWORD *)&v191[48];
                  *(_OWORD *)(a1 + 40) = v116;
                  *(_OWORD *)(a1 + 24) = v115;
                  *(_OWORD *)(a1 + 8) = v114;
                  goto LABEL_139;
                }
LABEL_103:
                LODWORD(v224) = 0;
                goto LABEL_104;
              }
            }
          }
LABEL_129:
          nullsub_1(v83, v82);
          v108 = (void *)sub_140001650(95, 1);
          if ( !v108 )
          {
            v244 = 1;
            sub_14196B2DB(1, 95);
          }
          qmemcpy(
            v108,
            "Outgoing account identity or snapshot location changed while the switch was acquiring ownership",
            95);
          *(_QWORD *)(a1 + 8) = 10;
          *(_QWORD *)(a1 + 16) = 95;
          *(_QWORD *)(a1 + 24) = v108;
          *(_QWORD *)(a1 + 32) = 95;
          *(_QWORD *)a1 = 2;
          v100 = 1;
          v109 = v186;
          v40 = v75;
          v87 = v235;
          v110 = v233;
          v111 = v232;
LABEL_142:
          if ( (unsigned __int64)(v109 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          {
            if ( (unsigned __int64)(v111 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            {
LABEL_144:
              if ( !v110 )
                goto LABEL_146;
              goto LABEL_145;
            }
          }
          else
          {
            sub_140001660(v187, v109, 1);
            if ( (unsigned __int64)(v111 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_144;
          }
          sub_140001660(v226, v111, 1);
          if ( !v110 )
          {
LABEL_146:
            if ( (((unsigned __int64)(v87 - 1) < 0xFFFFFFFFFFFFFFFEuLL) & (unsigned __int8)v100) == 0 )
              goto LABEL_74;
            goto LABEL_73;
          }
LABEL_145:
          sub_140001660(v223, v110, 1);
          goto LABEL_146;
        }
        if ( v235 == -1 )
        {
          if ( MEMORY[0x10] == a4 )
          {
            v88 = MEMORY[8];
            goto LABEL_110;
          }
        }
        else if ( v220 == a4 )
        {
          v88 = v227;
          goto LABEL_110;
        }
        v89 = DWORD2(v194);
        v90 = v195;
LABEL_114:
        if ( v235 == -1 )
        {
          v91 = MEMORY[8];
          v92 = MEMORY[0x10];
        }
        else
        {
          v91 = v227;
          v92 = v220;
        }
        goto LABEL_117;
      }
    }
    else
    {
      v228 = *(_QWORD *)&v191[8];
      v30 = *(_QWORD *)&v191[16];
      v230 = *(_QWORD *)&v191[16];
      if ( *(_QWORD *)&v191[16] != a4 )
        goto LABEL_28;
    }
    v32 = sub_141923B40(v228, a3, a4);
    v30 = v230;
    if ( !v32 )
    {
      if ( v31 )
        sub_140001660(v228, v31, 1);
      goto LABEL_37;
    }
    goto LABEL_28;
  }
LABEL_10:
  *(_QWORD *)&v164 = v157;
  *((_QWORD *)&v164 + 1) = sub_140191200;
  sub_1416DAFA0(&v191[8], &unk_141A93596, &v164);
  v20 = *(_OWORD *)&v191[8];
  v21 = *(_QWORD *)&v191[24];
  v22 = v191[32];
  *(_DWORD *)v147 = *(_DWORD *)&v191[33];
  *(_DWORD *)&v147[3] = *(_DWORD *)&v191[36];
  *(_QWORD *)(a1 + 96) = *(_QWORD *)&v191[88];
  *(_OWORD *)(a1 + 80) = *(_OWORD *)&v191[72];
  *(_OWORD *)(a1 + 64) = *(_OWORD *)&v191[56];
  *(_OWORD *)(a1 + 48) = *(_OWORD *)&v191[40];
  LODWORD(v145) = *(_DWORD *)v147;
  *(_DWORD *)((char *)&v145 + 3) = *(_DWORD *)&v147[3];
  *(_OWORD *)(a1 + 16) = v20;
  *(_QWORD *)(a1 + 32) = v21;
  *(_BYTE *)(a1 + 40) = v22;
  v23 = *(_DWORD *)((char *)&v145 + 3);
  *(_DWORD *)(a1 + 41) = v145;
  *(_DWORD *)(a1 + 44) = v23;
  *(_QWORD *)(a1 + 8) = 8;
  *(_QWORD *)a1 = 2;
LABEL_11:
  if ( *((_QWORD *)&v178 + 1) != -1 && *((_QWORD *)&v178 + 1) )
    sub_140001660(v179, *((_QWORD *)&v178 + 1), 1);
  v24 = *((_QWORD *)&v177 + 1);
  v25 = v178;
  if ( (_QWORD)v178 )
  {
    v26 = *((_QWORD *)&v177 + 1);
    do
    {
      sub_1401AE3E0(v26);
      v26 += 424;
      --v25;
    }
    while ( v25 );
  }
  if ( (_QWORD)v177 )
    sub_140001660(v24, 424 * v177, 8);
  return a1;
}
