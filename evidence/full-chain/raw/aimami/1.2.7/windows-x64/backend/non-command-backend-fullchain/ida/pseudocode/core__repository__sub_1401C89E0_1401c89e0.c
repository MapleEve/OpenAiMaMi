// win 1.2.7 | module src/core/repository.rs | ea 0x1401c89e0 | name sub_1401C89E0
// win 1.2.7 | module src/core/repository.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_1401C89E0(__int64 a1, __int64 a2, const __m128i *a3, unsigned __int64 a4)
{
  __int64 v8; // rax
  __m128i v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm2
  __int64 v12; // r12
  signed __int64 v13; // r13
  char v14; // r12
  __int64 v15; // rdi
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int128 v18; // xmm2
  __int64 v19; // rdx
  const __m128i *v20; // rcx
  __int128 v21; // xmm0
  __int64 v22; // rax
  char v23; // cl
  int v24; // ecx
  __int64 v26; // r8
  __int64 v27; // rcx
  __int64 v28; // rdi
  int v29; // eax
  __int64 v30; // r13
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // rdi
  __int64 v35; // r12
  __int128 v36; // xmm0
  __int128 v37; // xmm1
  __int128 v38; // xmm2
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  __m128i *v42; // rax
  __int64 v43; // rdi
  char v44; // di
  __int64 v45; // r13
  __int64 v46; // r12
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  __int128 v50; // xmm0
  __int128 v51; // xmm1
  __int128 v52; // xmm2
  __int64 v53; // r13
  __int64 v54; // rdi
  __int128 v55; // kr10_16
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm2
  __int128 v59; // kr20_16
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  __int128 v62; // xmm2
  __int64 v63; // r12
  unsigned __int64 v64; // r13
  __m128i v65; // xmm0
  __int128 v66; // xmm1
  __int128 v67; // xmm2
  __int64 v68; // rdx
  __int64 v69; // r8
  __int64 v70; // r13
  __int64 v71; // rcx
  __int64 v72; // rcx
  __int64 v73; // r12
  __int64 v74; // rax
  void *v75; // rax
  __int64 v76; // rbx
  __int64 v77; // rcx
  __int32 v78; // edx
  int v79; // r8d
  int v80; // r9d
  __int64 v81; // rax
  int v82; // eax
  __int64 v83; // rdx
  __int64 v84; // r8
  __int64 v85; // rax
  int v86; // r9d
  __int64 v87; // rdi
  __int64 v88; // r15
  char v89; // di
  __int64 v90; // rax
  char v91; // al
  __int64 v92; // rax
  __int128 v93; // xmm0
  __m128i v94; // xmm0
  __int128 v95; // xmm1
  void *v96; // rax
  __int64 v97; // rdx
  __int64 v98; // r14
  signed __int64 v99; // r15
  int v100; // edi
  __int64 v101; // rax
  __int64 v102; // rcx
  __int128 v103; // xmm0
  __int128 v104; // xmm1
  __int128 v105; // xmm2
  int v106; // r12d
  __int64 v107; // rax
  __int64 v108; // r9
  __int64 v109; // r12
  __int64 v110; // rax
  __int64 v111; // rcx
  __int64 v112; // rcx
  __int64 v113; // rdx
  __int64 v114; // r8
  __int64 v115; // rax
  __int64 v116; // rcx
  _OWORD *v117; // rax
  void *v118; // rax
  __int64 v119; // rcx
  __int64 v120; // rax
  __int64 v121; // rdx
  __int64 v122; // r8
  int v123; // edi
  __int64 v124; // rax
  int v125; // r9d
  __int64 v126; // rdi
  __int64 v127; // r15
  __int64 v128; // rdi
  __int128 v129; // xmm1
  __int128 v130; // xmm2
  __int128 v131; // xmm3
  __int64 v132; // [rsp+30h] [rbp-50h] BYREF
  __m128i v133[10]; // [rsp+38h] [rbp-48h] BYREF
  _BYTE v134[48]; // [rsp+E0h] [rbp+60h] BYREF
  __int128 v135; // [rsp+110h] [rbp+90h]
  __int128 v136; // [rsp+120h] [rbp+A0h]
  __int128 v137; // [rsp+130h] [rbp+B0h]
  __int128 v138; // [rsp+260h] [rbp+1E0h] BYREF
  __int64 v139; // [rsp+270h] [rbp+1F0h]
  __int128 v140; // [rsp+278h] [rbp+1F8h] BYREF
  __int64 v141; // [rsp+288h] [rbp+208h]
  _OWORD v142[3]; // [rsp+290h] [rbp+210h] BYREF
  __int64 v143; // [rsp+2C0h] [rbp+240h]
  __m128i v144; // [rsp+2D0h] [rbp+250h] BYREF
  _OWORD v145[4]; // [rsp+2E0h] [rbp+260h] BYREF
  __int64 v146; // [rsp+320h] [rbp+2A0h]
  _QWORD v147[2]; // [rsp+330h] [rbp+2B0h] BYREF
  __int128 v148; // [rsp+340h] [rbp+2C0h] BYREF
  __int128 v149; // [rsp+350h] [rbp+2D0h]
  __int128 v150; // [rsp+360h] [rbp+2E0h]
  __int128 v151; // [rsp+370h] [rbp+2F0h]
  __int128 v152; // [rsp+380h] [rbp+300h]
  __int128 v153; // [rsp+390h] [rbp+310h]
  __m128i v154; // [rsp+3A0h] [rbp+320h] BYREF
  __int128 v155; // [rsp+3B0h] [rbp+330h]
  __int128 v156; // [rsp+3C0h] [rbp+340h]
  __int128 v157; // [rsp+3D0h] [rbp+350h]
  __int128 v158; // [rsp+3E0h] [rbp+360h]
  __int128 v159; // [rsp+3F0h] [rbp+370h]
  __int64 v160; // [rsp+520h] [rbp+4A0h]
  __int64 v161; // [rsp+528h] [rbp+4A8h]
  unsigned __int64 v162; // [rsp+530h] [rbp+4B0h]
  __int64 v163; // [rsp+538h] [rbp+4B8h]
  __int64 v164; // [rsp+540h] [rbp+4C0h]
  unsigned __int64 v165; // [rsp+548h] [rbp+4C8h]
  __int16 v166; // [rsp+550h] [rbp+4D0h]
  __int128 v167; // [rsp+560h] [rbp+4E0h] BYREF
  _BYTE *v168; // [rsp+570h] [rbp+4F0h]
  __int64 (__fastcall *v169)(_QWORD, _QWORD); // [rsp+578h] [rbp+4F8h]
  __int64 v170; // [rsp+588h] [rbp+508h] BYREF
  __int64 v171; // [rsp+590h] [rbp+510h]
  __int64 v172; // [rsp+598h] [rbp+518h]
  __int128 v173; // [rsp+5A8h] [rbp+528h] BYREF
  _BYTE *v174; // [rsp+5B8h] [rbp+538h]
  _BYTE v175[96]; // [rsp+5C0h] [rbp+540h] BYREF
  __int64 v176; // [rsp+620h] [rbp+5A0h]
  __m128i v177[26]; // [rsp+628h] [rbp+5A8h] BYREF
  __m128i v178; // [rsp+7D0h] [rbp+750h] BYREF
  __int128 v179; // [rsp+7E0h] [rbp+760h] BYREF
  __int128 v180; // [rsp+7F0h] [rbp+770h]
  __int128 v181; // [rsp+800h] [rbp+780h]
  __int128 v182; // [rsp+810h] [rbp+790h]
  __int64 v183; // [rsp+820h] [rbp+7A0h]
  __int64 v184; // [rsp+830h] [rbp+7B0h]
  __int64 v185; // [rsp+838h] [rbp+7B8h]
  __int128 v186; // [rsp+840h] [rbp+7C0h] BYREF
  __int64 v187; // [rsp+850h] [rbp+7D0h]
  __int64 v188; // [rsp+858h] [rbp+7D8h] BYREF
  __int64 v189; // [rsp+860h] [rbp+7E0h]
  __int64 v190; // [rsp+868h] [rbp+7E8h]
  char v191; // [rsp+870h] [rbp+7F0h]
  __int64 v192; // [rsp+878h] [rbp+7F8h] BYREF
  __int64 v193; // [rsp+880h] [rbp+800h] BYREF
  __m128i v194; // [rsp+888h] [rbp+808h] BYREF
  __int64 v195; // [rsp+898h] [rbp+818h]
  __int64 v196; // [rsp+8A0h] [rbp+820h]
  __int64 v197; // [rsp+8A8h] [rbp+828h]
  __int64 v198; // [rsp+8B0h] [rbp+830h]
  __int64 v199; // [rsp+8B8h] [rbp+838h]
  __int64 v200; // [rsp+8C0h] [rbp+840h]
  __int64 v201; // [rsp+8C8h] [rbp+848h]
  const __m128i *v202; // [rsp+8D0h] [rbp+850h]
  unsigned __int64 v203; // [rsp+8D8h] [rbp+858h]
  __int64 v204; // [rsp+8E0h] [rbp+860h]
  __int64 v205; // [rsp+8E8h] [rbp+868h]
  __int64 v206; // [rsp+8F0h] [rbp+870h]
  __int64 v207; // [rsp+8F8h] [rbp+878h]
  __int64 v208; // [rsp+900h] [rbp+880h]
  __int64 v209; // [rsp+908h] [rbp+888h]
  __int64 v210; // [rsp+910h] [rbp+890h]
  __int64 v211; // [rsp+918h] [rbp+898h]
  __int64 v212; // [rsp+920h] [rbp+8A0h]
  __int64 v213; // [rsp+928h] [rbp+8A8h]
  __int64 v214; // [rsp+930h] [rbp+8B0h]
  __int64 v215; // [rsp+938h] [rbp+8B8h]
  __int64 v216; // [rsp+940h] [rbp+8C0h]
  signed __int64 v217; // [rsp+948h] [rbp+8C8h]
  char v218; // [rsp+956h] [rbp+8D6h]
  char v219; // [rsp+957h] [rbp+8D7h]
  __int64 v220; // [rsp+958h] [rbp+8D8h]
  char v221; // [rsp+967h] [rbp+8E7h]
  char v222; // [rsp+968h] [rbp+8E8h]
  char v223; // [rsp+969h] [rbp+8E9h]
  char v224; // [rsp+96Ah] [rbp+8EAh]
  char v225; // [rsp+96Bh] [rbp+8EBh]
  char v226; // [rsp+96Ch] [rbp+8ECh]
  char v227; // [rsp+96Dh] [rbp+8EDh]
  char v228; // [rsp+96Eh] [rbp+8EEh]
  char v229; // [rsp+96Fh] [rbp+8EFh]
  __int64 v230; // [rsp+970h] [rbp+8F0h]

  v230 = -2;
  v147[0] = a3;
  v147[1] = a4;
  sub_1401C7E40(v175, *(_QWORD *)(a2 + 296), *(_QWORD *)(a2 + 304));
  v8 = *(_QWORD *)v175;
  v154 = *(__m128i *)&v175[8];
  v155 = *(_OWORD *)&v175[24];
  v156 = *(_OWORD *)&v175[40];
  v157 = *(_OWORD *)&v175[56];
  v158 = *(_OWORD *)&v175[72];
  *(_QWORD *)&v159 = *(_QWORD *)&v175[88];
  if ( *(_QWORD *)v175 == -1 )
  {
    v146 = v159;
    v145[3] = v158;
    v145[2] = v157;
    v145[1] = v156;
    v145[0] = v155;
    v144 = v154;
    if ( !(_QWORD)v155 )
    {
LABEL_13:
      v154.m128i_i64[0] = (__int64)v147;
      v154.m128i_i64[1] = (__int64)sub_140186EE0;
      sub_1416ABFD0(&v175[8], &unk_1419D6B52, &v154);
      v21 = *(_OWORD *)&v175[8];
      v22 = *(_QWORD *)&v175[24];
      v23 = v175[32];
      *(_DWORD *)v134 = *(_DWORD *)&v175[33];
      *(_DWORD *)&v134[3] = *(_DWORD *)&v175[36];
      *(_QWORD *)(a1 + 96) = *(_QWORD *)&v175[88];
      *(_OWORD *)(a1 + 80) = *(_OWORD *)&v175[72];
      *(_OWORD *)(a1 + 64) = *(_OWORD *)&v175[56];
      *(_OWORD *)(a1 + 48) = *(_OWORD *)&v175[40];
      LODWORD(v132) = *(_DWORD *)v134;
      *(_DWORD *)((char *)&v132 + 3) = *(_DWORD *)&v134[3];
      *(_OWORD *)(a1 + 16) = v21;
      *(_QWORD *)(a1 + 32) = v22;
      *(_BYTE *)(a1 + 40) = v23;
      v24 = *(_DWORD *)((char *)&v132 + 3);
      *(_DWORD *)(a1 + 41) = v132;
      *(_DWORD *)(a1 + 44) = v24;
      *(_QWORD *)(a1 + 8) = 8;
      *(_QWORD *)a1 = 2;
      goto LABEL_14;
    }
    v12 = 0;
    while ( *(_QWORD *)(v144.m128i_i64[1] + v12 + 208) != a4
         || (unsigned int)sub_1418F4B70(*(_QWORD *)(v144.m128i_i64[1] + v12 + 200), a3) )
    {
      v12 += 424;
      if ( 424LL * (_QWORD)v155 == v12 )
        goto LABEL_13;
    }
    sub_1416AB9B0(v175, *(_QWORD *)(v144.m128i_i64[1] + v12 + 224), *(_QWORD *)(v144.m128i_i64[1] + v12 + 232));
    v199 = *(_QWORD *)v175;
    v13 = *(_QWORD *)&v175[16];
    v14 = v175[24];
    v15 = *(_QWORD *)(a2 + 328);
    v220 = *(_QWORD *)(a2 + 336);
    v202 = *(const __m128i **)&v175[8];
    sub_140ED9AE0((unsigned int)v175, *(_DWORD *)&v175[8], *(_DWORD *)&v175[16], v15, v220);
    if ( *(_DWORD *)v175 != -1 )
    {
      *(_OWORD *)(a1 + 88) = *(_OWORD *)&v175[80];
      *(_OWORD *)(a1 + 72) = *(_OWORD *)&v175[64];
      v16 = *(_OWORD *)v175;
      v17 = *(_OWORD *)&v175[16];
      v18 = *(_OWORD *)&v175[32];
      *(_OWORD *)(a1 + 56) = *(_OWORD *)&v175[48];
      *(_OWORD *)(a1 + 40) = v18;
      *(_OWORD *)(a1 + 24) = v17;
      *(_OWORD *)(a1 + 8) = v16;
      *(_QWORD *)a1 = 2;
LABEL_10:
      v19 = v199;
      if ( !v199 )
      {
LABEL_14:
        sub_140033D80(&v144);
        return a1;
      }
      v20 = v202;
LABEL_12:
      sub_140001660(v20, v19, 1);
      goto LABEL_14;
    }
    v26 = *(_QWORD *)(a2 + 48);
    v216 = *(_QWORD *)(a2 + 40);
    v206 = v26;
    sub_1401D1C40(v175, v216, v26);
    v215 = v15;
    v28 = *(_QWORD *)v175;
    v217 = v13;
    LOBYTE(v214) = v14;
    if ( *(_QWORD *)v175 == -1 )
    {
      if ( *((_QWORD *)&v145[0] + 1) == -1
        || (sub_1416AC440(&v154, (char *)v145 + 8), v28 = v154.m128i_i64[0], v154.m128i_i64[0] == -1) )
      {
LABEL_33:
        v188 = -1;
        v35 = -1;
        v34 = -1;
        goto LABEL_34;
      }
      v211 = v154.m128i_i64[1];
      v27 = v155;
      v213 = v155;
      if ( (_QWORD)v155 != a4 )
      {
LABEL_24:
        v212 = v28;
        if ( *(_QWORD *)&v145[0] )
        {
          v30 = 0;
          while ( 1 )
          {
            if ( *(_QWORD *)(v144.m128i_i64[1] + v30 + 208) == v27 )
            {
              v31 = sub_1418F4B70(*(_QWORD *)(v144.m128i_i64[1] + v30 + 200), v211);
              v27 = v213;
              if ( !v31 )
                break;
            }
            v30 += 424;
            if ( 424LL * *(_QWORD *)&v145[0] == v30 )
              goto LABEL_32;
          }
          v32 = *(_QWORD *)(v144.m128i_i64[1] + v30 + 224);
          v33 = *(_QWORD *)(v144.m128i_i64[1] + v30 + 232);
          v185 = v211;
          v34 = v212;
          v184 = v212;
          sub_1416AB9B0(&v188, v32, v33);
          v35 = v188;
          v13 = v217;
          if ( v188 == -1 )
          {
            v35 = -1;
          }
          else
          {
            v201 = v211;
            v200 = v34;
            sub_140ED9AE0((unsigned int)v175, v189, v190, v215, v220);
            if ( *(_DWORD *)v175 != -1 )
            {
              *(_OWORD *)(a1 + 88) = *(_OWORD *)&v175[80];
              *(_OWORD *)(a1 + 72) = *(_OWORD *)&v175[64];
              v36 = *(_OWORD *)v175;
              v37 = *(_OWORD *)&v175[16];
              v38 = *(_OWORD *)&v175[32];
              *(_OWORD *)(a1 + 56) = *(_OWORD *)&v175[48];
              *(_OWORD *)(a1 + 40) = v38;
              *(_OWORD *)(a1 + 24) = v37;
              *(_OWORD *)(a1 + 8) = v36;
              *(_QWORD *)a1 = 2;
              goto LABEL_79;
            }
          }
        }
        else
        {
LABEL_32:
          v188 = -1;
          v35 = -1;
          v34 = v212;
          v13 = v217;
        }
LABEL_34:
        nullsub_1(v27);
        v39 = sub_140001650(32, 8);
        if ( !v39 )
        {
          v201 = v211;
          v200 = v34;
          sub_141938D11(8, 32);
        }
        v212 = v34;
        if ( v13 < 0 )
        {
          v220 = v39;
          v41 = 0;
          goto LABEL_37;
        }
        v215 = v35;
        if ( v13 )
        {
          v220 = v39;
          nullsub_1(v40);
          v42 = (__m128i *)sub_140001650(v13, 1);
          v41 = 1;
          if ( !v42 )
LABEL_37:
            sub_141938D2B(v41, v13);
          v43 = (__int64)v42;
          sub_1418F44E0(v42, v202, v13);
          v35 = v215;
          v39 = v220;
        }
        else
        {
          v43 = 1;
        }
        *(_QWORD *)v39 = v13;
        *(_QWORD *)(v39 + 8) = v43;
        *(_QWORD *)(v39 + 16) = v13;
        *(_BYTE *)(v39 + 24) = v214;
        v194.m128i_i64[0] = 1;
        v194.m128i_i64[1] = v39;
        v195 = 1;
        if ( v35 != -1 )
        {
          v225 = 1;
          sub_1403F19B0(v175, &v188);
          v44 = v191;
          v214 = *(_QWORD *)&v175[8];
          v220 = *(_QWORD *)v175;
          v45 = *(_QWORD *)&v175[16];
          v46 = v195;
          if ( v195 == v194.m128i_i64[0] )
            sub_14190F570(&v194);
          v47 = v194.m128i_i64[1];
          v48 = 32 * v46;
          *(_QWORD *)(v194.m128i_i64[1] + v48) = v220;
          *(_QWORD *)(v47 + v48 + 8) = v214;
          *(_QWORD *)(v47 + v48 + 16) = v45;
          *(_BYTE *)(v47 + v48 + 24) = v44;
          v195 = v46 + 1;
          v35 = v215;
        }
        *(_QWORD *)&v155 = v195;
        v154 = v194;
        v225 = 0;
        sub_140FA5F10(v175, &v154);
        v49 = *(_QWORD *)v175;
        *(_OWORD *)v134 = *(_OWORD *)&v175[8];
        *(_QWORD *)&v134[16] = *(_QWORD *)&v175[24];
        if ( *(_QWORD *)v175 != -1 )
        {
          v50 = *(_OWORD *)&v175[32];
          v51 = *(_OWORD *)&v175[48];
          v52 = *(_OWORD *)&v175[64];
          *(_OWORD *)(a1 + 88) = *(_OWORD *)&v175[80];
          *(_OWORD *)(a1 + 72) = v52;
          *(_OWORD *)(a1 + 56) = v51;
          *(_OWORD *)(a1 + 40) = v50;
          *(_QWORD *)(a1 + 32) = *(_QWORD *)&v134[16];
          *(_OWORD *)(a1 + 16) = *(_OWORD *)v134;
          *(_QWORD *)(a1 + 8) = v49;
          *(_QWORD *)a1 = 2;
          goto LABEL_78;
        }
        v186 = *(_OWORD *)v134;
        v187 = *(_QWORD *)&v134[16];
        v53 = *(_QWORD *)(a2 + 264);
        v54 = *(_QWORD *)(a2 + 272);
        sub_140FE6090(v175, v53);
        v55 = *(_OWORD *)v175;
        if ( *(_QWORD *)v175 != -1 )
        {
          *(_OWORD *)(a1 + 88) = *(_OWORD *)&v175[80];
          v56 = *(_OWORD *)&v175[16];
          v57 = *(_OWORD *)&v175[32];
          v58 = *(_OWORD *)&v175[48];
          *(_OWORD *)(a1 + 72) = *(_OWORD *)&v175[64];
          *(_OWORD *)(a1 + 56) = v58;
          *(_OWORD *)(a1 + 40) = v57;
          *(_OWORD *)(a1 + 24) = v56;
          *(_OWORD *)(a1 + 8) = v55;
          *(_QWORD *)a1 = 2;
          goto LABEL_76;
        }
        v193 = *(_QWORD *)&v175[8];
        sub_140FE62A0(v175, v53, v54);
        v59 = *(_OWORD *)v175;
        if ( *(_QWORD *)v175 != -1 )
        {
          *(_OWORD *)(a1 + 88) = *(_OWORD *)&v175[80];
          v60 = *(_OWORD *)&v175[16];
          v61 = *(_OWORD *)&v175[32];
          v62 = *(_OWORD *)&v175[48];
          *(_OWORD *)(a1 + 72) = *(_OWORD *)&v175[64];
          *(_OWORD *)(a1 + 56) = v62;
          *(_OWORD *)(a1 + 40) = v61;
          *(_OWORD *)(a1 + 24) = v60;
          *(_OWORD *)(a1 + 8) = v59;
          *(_QWORD *)a1 = 2;
LABEL_75:
          sub_140195380(&v193);
LABEL_76:
          sub_1403FB7C0(&v186);
          if ( (_QWORD)v186 )
            sub_140001660(*((_QWORD *)&v186 + 1), 8 * v186, 8);
LABEL_78:
          v34 = v212;
          if ( v35 == -1 )
          {
LABEL_81:
            if ( (unsigned __int64)(v34 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
              sub_140001660(v211, v34, 1);
            goto LABEL_10;
          }
LABEL_79:
          if ( v35 )
            sub_140001660(v189, v35, 1);
          goto LABEL_81;
        }
        v192 = *(_QWORD *)&v175[8];
        sub_1401DDEB0(v175, a2, a3, a4);
        v63 = v176;
        v154 = *(__m128i *)v175;
        v155 = *(_OWORD *)&v175[16];
        v156 = *(_OWORD *)&v175[32];
        v157 = *(_OWORD *)&v175[48];
        v158 = *(_OWORD *)&v175[64];
        *(_QWORD *)&v159 = *(_QWORD *)&v175[80];
        v64 = *(_QWORD *)&v175[88];
        if ( v176 == 2 )
        {
          *(_QWORD *)(a1 + 88) = v159;
          *(_OWORD *)(a1 + 72) = v158;
          v65 = v154;
          v66 = v155;
          v67 = v156;
          *(_OWORD *)(a1 + 56) = v157;
          *(_OWORD *)(a1 + 40) = v67;
          *(_OWORD *)(a1 + 24) = v66;
          *(__m128i *)(a1 + 8) = v65;
          *(_QWORD *)(a1 + 96) = v64;
          *(_QWORD *)a1 = 2;
          v35 = v215;
LABEL_74:
          sub_140195380(&v192);
          goto LABEL_75;
        }
        sub_1418F44E0(v133, v177, 0xA8u);
        v183 = v159;
        v182 = v158;
        v181 = v157;
        v180 = v156;
        v179 = v155;
        v178 = v154;
        v132 = v63;
        if ( *((_QWORD *)&v155 + 1) == -1 )
        {
          v220 = -1;
        }
        else
        {
          sub_1416AC440(v175, (char *)&v179 + 8);
          v210 = *(_QWORD *)&v175[8];
          v220 = *(_QWORD *)v175;
          v204 = *(_QWORD *)&v175[16];
        }
        if ( v64 >= (unsigned __int64)v179 )
        {
          v219 = 1;
          sub_1419390C3(v64, v179, &off_1419D99E0);
        }
        v203 = v64;
        v68 = *(_QWORD *)(v178.m128i_i64[1] + 424 * v64 + 224);
        v196 = 424 * v64;
        v69 = *(_QWORD *)(v178.m128i_i64[1] + 424 * v64 + 232);
        v219 = 1;
        sub_1416AB9B0(v175, v68, v69);
        v214 = *(_QWORD *)v175;
        v224 = 1;
        v207 = *(_QWORD *)&v175[8];
        v70 = *(_QWORD *)&v175[16];
        if ( !(unsigned __int8)sub_1402899E0(*(_QWORD *)&v175[8], *(_QWORD *)&v175[16], v202, v217) )
        {
          nullsub_1(v71);
          v75 = (void *)sub_140001650(74, 1);
          if ( !v75 )
          {
            v224 = 1;
            sub_141938D2B(1, 74);
          }
          qmemcpy(v75, "Account snapshot location changed while the switch was acquiring ownership", 74);
          *(_QWORD *)(a1 + 8) = 10;
          *(_QWORD *)(a1 + 16) = 74;
          *(_QWORD *)(a1 + 24) = v75;
          *(_QWORD *)(a1 + 32) = 74;
          *(_QWORD *)a1 = 2;
          v35 = v215;
          v76 = v220;
          if ( v214 )
            sub_140001660(v207, v214, 1);
          if ( (unsigned __int64)(v76 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            goto LABEL_73;
LABEL_72:
          sub_140001660(v210, v76, 1);
LABEL_73:
          sub_140034220(&v132);
          sub_140033D80(&v178);
          goto LABEL_74;
        }
        v224 = 1;
        sub_1401D1C40(v175, v216, v206);
        v72 = *(_QWORD *)&v175[8];
        v209 = *(_QWORD *)&v175[8];
        v73 = *(_QWORD *)&v175[16];
        v217 = *(_QWORD *)v175;
        if ( (v220 & *(_QWORD *)v175) == 0xFFFFFFFFFFFFFFFFuLL )
        {
LABEL_61:
          v170 = -1;
          if ( (v212 & v215) == 0xFFFFFFFFFFFFFFFFuLL )
          {
LABEL_62:
            v213 = -1;
            goto LABEL_63;
          }
          goto LABEL_127;
        }
        if ( v217 != -1 )
        {
          if ( *(_QWORD *)&v175[16] != a4 )
          {
            v78 = v178.m128i_i32[2];
            v79 = v179;
            v80 = v209;
            v81 = *(_QWORD *)&v175[16];
            goto LABEL_115;
          }
          v77 = v209;
LABEL_108:
          if ( !(unsigned int)sub_1418F4B70(v77, a3) )
            goto LABEL_61;
          v78 = v178.m128i_i32[2];
          v79 = v179;
          v80 = v209;
          v81 = v73;
          if ( v217 == -1 )
            goto LABEL_112;
LABEL_115:
          v218 = 1;
          sub_1401B12C0((unsigned int)&v170, v78, v79, v80, v81);
          if ( v217 == -1 )
          {
            if ( v220 == -1 )
            {
              if ( v212 == -1 || MEMORY[0x10] != v213 )
                goto LABEL_127;
              v72 = MEMORY[8];
            }
            else
            {
              if ( v212 == -1 || v204 != v213 )
                goto LABEL_127;
              v72 = v210;
            }
          }
          else
          {
            if ( v212 == -1 )
              goto LABEL_127;
            v72 = v209;
            if ( v73 != v213 )
              goto LABEL_127;
          }
          if ( !(unsigned int)sub_1418F4B70(v72, v211) )
          {
            v213 = v170;
            if ( v170 == -1 )
            {
              if ( v215 == -1 )
                goto LABEL_62;
            }
            else if ( v215 != -1 )
            {
              v100 = v171;
              v228 = 1;
              v208 = v172;
              if ( (unsigned __int8)sub_1402899E0(v171, v172, v189, v190) )
              {
                v101 = v209;
                v102 = v73;
                if ( v217 == -1 )
                {
                  v101 = v210;
                  v102 = v204;
                  if ( v220 == -1 )
                  {
                    v101 = MEMORY[8];
                    v102 = MEMORY[0x10];
                  }
                }
                v228 = 1;
                sub_1401EF2A0((unsigned int)v175, a2, v100, v208, v101, v102);
                if ( *(_DWORD *)v175 != -1 )
                  goto LABEL_136;
LABEL_63:
                if ( v220 == -1 || v204 != a4 || (v82 = sub_1418F4B70(v210, a3), v217 == -1) || v82 )
                {
                  if ( v217 == -1 || v73 != a4 )
                    goto LABEL_101;
                }
                else
                {
                  if ( v73 != a4 )
                    goto LABEL_101;
                  if ( !(unsigned int)sub_1418F4B70(v209, a3) )
                  {
                    v228 = 1;
                    sub_1401EF2A0((unsigned int)v175, a2, v207, v70, (__int64)a3, a4);
                    if ( *(_DWORD *)v175 == -1 )
                    {
                      v83 = *(_QWORD *)(a2 + 552);
                      v84 = *(_QWORD *)(a2 + 560);
                      v228 = 1;
                      sub_14021B070(&v148, v83, v84);
                      v85 = sub_14021B590(&v148, a3, a4);
                      if ( v203 >= (unsigned __int64)v179 )
                      {
                        v221 = 1;
                        sub_1419390C3(v203, v179, &off_1419D9B48);
                      }
                      v221 = 1;
                      LOBYTE(v86) = 1;
                      sub_1401E88B0((unsigned int)v134, v178.m128i_i32[2] + v196, (unsigned int)&v132, v86, v85);
                      sub_14072C410((unsigned int)v175, a4, 0, 1, 1);
                      v87 = *(_QWORD *)&v175[8];
                      LOBYTE(v216) = v175[0];
                      if ( v175[0] )
                        sub_141938D2B(*(_QWORD *)&v175[8], *(_QWORD *)&v175[16]);
                      v88 = *(_QWORD *)&v175[16];
                      if ( a4 )
                        sub_1418F44E0(*(__m128i **)&v175[16], a3, a4);
                      sub_1418F44E0(&v154, (const __m128i *)v134, 0x180u);
                      v163 = v220;
                      v164 = v210;
                      v165 = a4;
                      v160 = v87;
                      v161 = v88;
                      v162 = a4;
                      v166 = 0;
                      sub_140FE6E50(v175, &v154);
                      sub_1418F44E0((__m128i *)a1, (const __m128i *)v175, 0x208u);
                      sub_140034090((__int64 *)&v148);
                      v89 = 0;
                      goto LABEL_139;
                    }
                    goto LABEL_136;
                  }
                }
                if ( !(unsigned int)sub_1418F4B70(v209, a3) )
                {
                  v228 = 1;
                  v74 = sub_1401EF2A0((unsigned int)v175, a2, v207, v70, (__int64)a3, a4);
                  if ( *(_DWORD *)v175 == -1 )
                  {
                    LOBYTE(v74) = 1;
                    LODWORD(v208) = v74;
LABEL_102:
                    v228 = 1;
                    v90 = sub_1401B6D70((_QWORD *)a2);
                    if ( v90 )
                    {
                      *(_QWORD *)(a1 + 8) = 2;
                      *(_QWORD *)(a1 + 16) = v90;
LABEL_137:
                      *(_QWORD *)a1 = 2;
LABEL_138:
                      v89 = 1;
LABEL_139:
                      v35 = v215;
                      v76 = v220;
                      v98 = v214;
                      v99 = v217;
                      v97 = v213;
                      goto LABEL_140;
                    }
                    v228 = 1;
                    sub_1403F19B0(&v148, a2 + 32);
                    v91 = *(_BYTE *)(a2 + 56);
                    *(_QWORD *)&v134[16] = v149;
                    *(_OWORD *)v134 = v148;
                    v134[24] = v91;
                    v228 = 1;
                    sub_1401C5130((__int64)v175, (__int64)v134);
                    v92 = *(_QWORD *)v175;
                    v154 = *(__m128i *)&v175[8];
                    v155 = *(_OWORD *)&v175[24];
                    v156 = *(_OWORD *)&v175[40];
                    *(_QWORD *)&v157 = *(_QWORD *)&v175[56];
                    if ( *(_QWORD *)v175 != -1 )
                    {
                      v93 = *(_OWORD *)&v175[64];
                      *(_OWORD *)(a1 + 88) = *(_OWORD *)&v175[80];
                      *(_OWORD *)(a1 + 72) = v93;
                      *(_QWORD *)(a1 + 64) = v157;
                      v94 = v154;
                      v95 = v155;
                      *(_OWORD *)(a1 + 48) = v156;
                      *(_OWORD *)(a1 + 32) = v95;
                      *(__m128i *)(a1 + 16) = v94;
                      *(_QWORD *)(a1 + 8) = v92;
                      goto LABEL_137;
                    }
                    v142[0] = v154;
                    v142[1] = v155;
                    v142[2] = v156;
                    v143 = v157;
                    if ( !(_BYTE)v208 )
                    {
                      v229 = 1;
                      sub_141695A00(v175, v216, v206);
                      v106 = *(_DWORD *)v175;
                      v229 = 1;
                      sub_14018FCC0(*(_QWORD *)v175, *(_QWORD *)&v175[8]);
                      if ( v106 != 2 )
                      {
                        v229 = 1;
                        *(_QWORD *)v134 = sub_140ED4BD0();
                        v154.m128i_i64[0] = (__int64)v134;
                        v154.m128i_i64[1] = (__int64)sub_1416BCBE0;
                        v229 = 1;
                        sub_1416ABFD0(v175, &unk_1419D99F8, &v154);
                        v205 = *(_QWORD *)v175;
                        v114 = *(_QWORD *)(a2 + 368);
                        v113 = *(_QWORD *)(a2 + 360);
                        v197 = *(_QWORD *)&v175[8];
                        sub_1416828D0((unsigned int)v175, v113, v114, *(_DWORD *)&v175[8], *(__int64 *)&v175[16]);
                        v198 = *(_QWORD *)&v175[8];
                        v115 = sub_140222D40(v216, v206, *(_QWORD *)&v175[8], *(_QWORD *)&v175[16]);
                        if ( v115 )
                        {
                          *(_QWORD *)(a1 + 8) = 2;
                          *(_QWORD *)(a1 + 16) = v115;
                          *(_QWORD *)a1 = 2;
                          if ( *(_QWORD *)v175 )
                            sub_140001660(v198, *(_QWORD *)v175, 1);
                          if ( v205 )
                            sub_140001660(v197, v205, 1);
                          goto LABEL_197;
                        }
                        if ( *(_QWORD *)v175 )
                          sub_140001660(v198, *(_QWORD *)v175, 1);
                        if ( v205 )
                          sub_140001660(v197, v205, 1);
                      }
                      v229 = 1;
                      v107 = sub_140222D40(v207, v70, v216, v206);
                      if ( v107 )
                      {
                        *(_QWORD *)(a1 + 8) = 2;
                        *(_QWORD *)(a1 + 16) = v107;
                        goto LABEL_196;
                      }
                    }
                    v229 = 1;
                    v216 = sub_140ED4BD0();
                    sub_14072C410((unsigned int)v175, a4, 0, 1, 1);
                    v206 = *(_QWORD *)&v175[8];
                    if ( *(_DWORD *)v175 == 1 )
                    {
                      v229 = 1;
                      sub_141938D2B(v206, *(_QWORD *)&v175[16]);
                    }
                    v109 = *(_QWORD *)&v175[16];
                    if ( a4 )
                      sub_1418F44E0(*(__m128i **)&v175[16], a3, a4);
                    if ( *((_QWORD *)&v179 + 1) != -1 && *((_QWORD *)&v179 + 1) )
                      sub_140001660(v180, *((_QWORD *)&v179 + 1), 1);
                    *((_QWORD *)&v179 + 1) = v206;
                    *(_QWORD *)&v180 = v109;
                    *((_QWORD *)&v180 + 1) = a4;
                    *((_QWORD *)&v182 + 1) = v216;
                    if ( v203 >= (unsigned __int64)v179 )
                    {
                      v229 = 1;
                      sub_1419390C3(v203, v179, &off_1419D9A08);
                    }
                    v110 = v178.m128i_i64[1];
                    v111 = v196;
                    *(_QWORD *)(v178.m128i_i64[1] + v196 + 80) = 1;
                    *(_QWORD *)(v110 + v111 + 88) = v216;
                    v229 = 1;
                    LOBYTE(v108) = 1;
                    sub_1401CF760(&v148, a2, &v178, v108);
                    if ( (_DWORD)v148 != -1 )
                    {
                      v137 = v153;
                      v136 = v152;
                      v135 = v151;
                      *(_OWORD *)&v134[32] = v150;
                      *(_OWORD *)&v134[16] = v149;
                      *(_OWORD *)v134 = v148;
                      sub_1401C5300(&v154, v142);
                      if ( v154.m128i_i32[0] != -1 )
                      {
                        *(_OWORD *)&v175[80] = v159;
                        *(_OWORD *)&v175[64] = v158;
                        *(_OWORD *)&v175[48] = v157;
                        *(_OWORD *)&v175[32] = v156;
                        *(_OWORD *)&v175[16] = v155;
                        *(__m128i *)v175 = v154;
                        *(_QWORD *)&v167 = v134;
                        *((_QWORD *)&v167 + 1) = sub_14104A7D0;
                        v168 = v175;
                        v169 = sub_14104A7D0;
                        sub_1416ABFD0(&v140, &unk_1419D9A20, &v167);
                        sub_1401954F0(v175);
                        *(_QWORD *)(a1 + 8) = 10;
                        *(_OWORD *)(a1 + 16) = v140;
                        *(_QWORD *)(a1 + 32) = v141;
                        *(_QWORD *)a1 = 2;
                        v229 = 1;
                        sub_1401954F0(v134);
LABEL_197:
                        sub_140194B60(v142);
                        goto LABEL_138;
                      }
                      *(_QWORD *)(a1 + 8) = *(_QWORD *)v134;
                      *(_OWORD *)(a1 + 16) = *(_OWORD *)&v134[8];
                      *(_QWORD *)(a1 + 32) = *(_QWORD *)&v134[24];
                      v129 = v135;
                      v130 = v136;
                      v131 = v137;
                      *(_OWORD *)(a1 + 40) = *(_OWORD *)&v134[32];
                      *(_OWORD *)(a1 + 56) = v129;
                      *(_OWORD *)(a1 + 72) = v130;
                      *(_OWORD *)(a1 + 88) = v131;
LABEL_196:
                      *(_QWORD *)a1 = 2;
                      goto LABEL_197;
                    }
                    *(_QWORD *)&v173 = 0;
                    *((_QWORD *)&v173 + 1) = 8;
                    v174 = nullptr;
                    if ( !(_BYTE)v208 )
                    {
                      nullsub_1(v112);
                      v216 = sub_140001650(26, 1);
                      if ( !v216 )
                      {
                        v227 = 1;
                        v226 = 1;
                        sub_141938D2B(1, 26);
                      }
                      v117 = (_OWORD *)v216;
                      *(_OWORD *)(v216 + 10) = *(__int128 *)((char *)&xmmword_1419D9A6B + 10);
                      *v117 = xmmword_1419D9A6B;
                      nullsub_1(v116);
                      v118 = (void *)sub_140001650(63, 1);
                      if ( !v118 )
                        sub_141938D2B(1, 63);
                      qmemcpy(v118, "Restart Codex clients for the new auth snapshot to take effect.", 63);
                      *(_QWORD *)v175 = 26;
                      *(_QWORD *)&v175[8] = v216;
                      *(_QWORD *)&v175[16] = 26;
                      *(_QWORD *)&v175[24] = 63;
                      *(_QWORD *)&v175[32] = v118;
                      *(_QWORD *)&v175[40] = 63;
                      v227 = 1;
                      v226 = 1;
                      sub_14016E9E0(&v173, (__int128 *)v175);
                    }
                    v227 = 1;
                    v226 = 1;
                    sub_1401EB2A0(&v154, a2);
                    if ( v154.m128i_i32[0] != -1 )
                    {
                      *(_OWORD *)&v175[80] = v159;
                      *(_OWORD *)&v175[64] = v158;
                      *(_OWORD *)&v175[48] = v157;
                      *(_OWORD *)&v175[32] = v156;
                      *(_OWORD *)&v175[16] = v155;
                      *(__m128i *)v175 = v154;
                      nullsub_1(v119);
                      v216 = sub_140001650(36, 1);
                      if ( !v216 )
                        sub_141938D2B(1, 36);
                      v120 = v216;
                      *(_OWORD *)(v216 + 16) = xmmword_1419D9AD4;
                      *(_OWORD *)v120 = xmmword_1419D9AC4;
                      *(_DWORD *)(v120 + 32) = 1145392201;
                      *(_QWORD *)v134 = v175;
                      *(_QWORD *)&v134[8] = sub_14104A7D0;
                      sub_1416ABFD0(&v138, &unk_1419D9AE8, v134);
                      *(_QWORD *)v134 = 36;
                      *(_QWORD *)&v134[8] = v216;
                      *(_QWORD *)&v134[16] = 36;
                      *(_OWORD *)&v134[24] = v138;
                      *(_QWORD *)&v134[40] = v139;
                      sub_14016E9E0(&v173, (__int128 *)v134);
                      v227 = 1;
                      v226 = 1;
                      sub_1401954F0(v175);
                    }
                    v121 = *(_QWORD *)(a2 + 552);
                    v122 = *(_QWORD *)(a2 + 560);
                    v227 = 1;
                    v226 = 1;
                    sub_14021B070(&v148, v121, v122);
                    if ( v203 >= (unsigned __int64)v179 )
                    {
                      v223 = 1;
                      v222 = 1;
                      sub_1419390C3(v203, v179, &off_1419D9B30);
                    }
                    v123 = v178.m128i_i32[2] + v196;
                    v124 = sub_14021B590(
                             &v148,
                             *(_QWORD *)(v178.m128i_i64[1] + v196 + 200),
                             *(_QWORD *)(v178.m128i_i64[1] + v196 + 208));
                    v223 = 1;
                    v222 = 1;
                    LOBYTE(v125) = 1;
                    sub_1401E88B0((unsigned int)v134, v123, (unsigned int)&v132, v125, v124);
                    sub_14072C410((unsigned int)v175, a4, 0, 1, 1);
                    v126 = *(_QWORD *)&v175[8];
                    LOBYTE(v216) = v175[0];
                    if ( v175[0] )
                      sub_141938D2B(*(_QWORD *)&v175[8], *(_QWORD *)&v175[16]);
                    v127 = *(_QWORD *)&v175[16];
                    if ( a4 )
                      sub_1418F44E0(*(__m128i **)&v175[16], a3, a4);
                    sub_1418F44E0(&v154, (const __m128i *)v134, 0x180u);
                    v163 = v220;
                    v164 = v210;
                    v165 = v204;
                    v160 = v126;
                    v161 = v127;
                    v162 = a4;
                    LOBYTE(v166) = v208 ^ 1;
                    HIBYTE(v166) = 1;
                    v168 = v174;
                    v167 = v173;
                    sub_140FE6CA0(v175, &v154, &v167);
                    sub_1418F44E0((__m128i *)a1, (const __m128i *)v175, 0x208u);
                    sub_140034090((__int64 *)&v148);
                    sub_140194B60(v142);
                    if ( (unsigned __int64)(v213 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
                    {
                      if ( (unsigned __int64)(v217 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
                      {
LABEL_183:
                        if ( !v214 )
                          goto LABEL_185;
                        goto LABEL_184;
                      }
                    }
                    else
                    {
                      sub_140001660(v171, v213, 1);
                      if ( (unsigned __int64)(v217 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
                        goto LABEL_183;
                    }
                    sub_140001660(v209, v217, 1);
                    if ( !v214 )
                    {
LABEL_185:
                      sub_140034220(&v132);
                      sub_140033D80(&v178);
                      v128 = v215;
                      sub_140195380(&v192);
                      sub_140195380(&v193);
                      v225 = 0;
                      sub_140190810(&v186);
                      if ( (unsigned __int64)(v128 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
                      {
                        if ( (unsigned __int64)(v212 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
                        {
LABEL_187:
                          if ( !v199 )
                            goto LABEL_14;
LABEL_194:
                          v20 = v202;
                          v19 = v199;
                          goto LABEL_12;
                        }
                      }
                      else
                      {
                        sub_140001660(v189, v215, 1);
                        if ( (unsigned __int64)(v212 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
                          goto LABEL_187;
                      }
                      sub_140001660(v211, v212, 1);
                      if ( !v199 )
                        goto LABEL_14;
                      goto LABEL_194;
                    }
LABEL_184:
                    sub_140001660(v207, v214, 1);
                    goto LABEL_185;
                  }
LABEL_136:
                  *(_OWORD *)(a1 + 88) = *(_OWORD *)&v175[80];
                  *(_OWORD *)(a1 + 72) = *(_OWORD *)&v175[64];
                  v103 = *(_OWORD *)v175;
                  v104 = *(_OWORD *)&v175[16];
                  v105 = *(_OWORD *)&v175[32];
                  *(_OWORD *)(a1 + 56) = *(_OWORD *)&v175[48];
                  *(_OWORD *)(a1 + 40) = v105;
                  *(_OWORD *)(a1 + 24) = v104;
                  *(_OWORD *)(a1 + 8) = v103;
                  goto LABEL_137;
                }
LABEL_101:
                LODWORD(v208) = 0;
                goto LABEL_102;
              }
            }
          }
LABEL_127:
          nullsub_1(v72);
          v96 = (void *)sub_140001650(95, 1);
          if ( !v96 )
          {
            v228 = 1;
            sub_141938D2B(1, 95);
          }
          qmemcpy(
            v96,
            "Outgoing account identity or snapshot location changed while the switch was acquiring ownership",
            95);
          *(_QWORD *)(a1 + 8) = 10;
          *(_QWORD *)(a1 + 16) = 95;
          *(_QWORD *)(a1 + 24) = v96;
          *(_QWORD *)(a1 + 32) = 95;
          *(_QWORD *)a1 = 2;
          v89 = 1;
          v97 = v170;
          v35 = v215;
          v76 = v220;
          v98 = v214;
          v99 = v217;
LABEL_140:
          if ( (unsigned __int64)(v97 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
          {
            if ( (unsigned __int64)(v99 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
            {
LABEL_142:
              if ( !v98 )
                goto LABEL_144;
              goto LABEL_143;
            }
          }
          else
          {
            sub_140001660(v171, v97, 1);
            if ( (unsigned __int64)(v99 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
              goto LABEL_142;
          }
          sub_140001660(v209, v99, 1);
          if ( !v98 )
          {
LABEL_144:
            if ( (((unsigned __int64)(v76 - 1) < 0xFFFFFFFFFFFFFFFEuLL) & (unsigned __int8)v89) == 0 )
              goto LABEL_73;
            goto LABEL_72;
          }
LABEL_143:
          sub_140001660(v207, v98, 1);
          goto LABEL_144;
        }
        if ( v220 == -1 )
        {
          if ( MEMORY[0x10] == a4 )
          {
            v77 = MEMORY[8];
            goto LABEL_108;
          }
        }
        else if ( v204 == a4 )
        {
          v77 = v210;
          goto LABEL_108;
        }
        v78 = v178.m128i_i32[2];
        v79 = v179;
LABEL_112:
        if ( v220 == -1 )
        {
          v80 = MEMORY[8];
          v81 = MEMORY[0x10];
        }
        else
        {
          v80 = v210;
          v81 = v204;
        }
        goto LABEL_115;
      }
    }
    else
    {
      v211 = *(_QWORD *)&v175[8];
      v27 = *(_QWORD *)&v175[16];
      v213 = *(_QWORD *)&v175[16];
      if ( *(_QWORD *)&v175[16] != a4 )
        goto LABEL_24;
    }
    v29 = sub_1418F4B70(v211, a3);
    v27 = v213;
    if ( !v29 )
    {
      if ( v28 )
        sub_140001660(v211, v28, 1);
      goto LABEL_33;
    }
    goto LABEL_24;
  }
  *(_QWORD *)(a1 + 96) = v159;
  *(_OWORD *)(a1 + 80) = v158;
  v9 = v154;
  v10 = v155;
  v11 = v156;
  *(_OWORD *)(a1 + 64) = v157;
  *(_OWORD *)(a1 + 48) = v11;
  *(_OWORD *)(a1 + 32) = v10;
  *(__m128i *)(a1 + 16) = v9;
  *(_QWORD *)(a1 + 8) = v8;
  *(_QWORD *)a1 = 2;
  return a1;
}
