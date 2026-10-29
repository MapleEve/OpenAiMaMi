// win 1.2.7 latest-exe | module src/core/relay/proxy_server.rs | ea 0x1406d6060 | successor of pre-update 0x140d4d630 | session <审计会话>
// match evidence: {"conf": false, "verdict": "CONFIRMED_STR_PARTIAL"}
char __fastcall sub_1406D6060(__int64 *a1, __int128 *a2, __int64 a3)
{
  __int128 *v4; // r15
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // r12
  __int128 v9; // xmm1
  __int128 v10; // xmm2
  __int128 v11; // xmm3
  __int64 v12; // r14
  _BYTE *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rdx
  __int128 v20; // xmm0
  char v21; // cl
  __int128 v22; // xmm2
  __int128 v23; // xmm3
  _OWORD *v24; // r13
  char *v25; // r8
  __int128 v26; // xmm0
  __int128 *v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r15
  unsigned __int32 v30; // eax
  bool v31; // of
  signed __int32 v32; // eax
  int v33; // ett
  __int64 v34; // rt0
  __int64 v35; // rdx
  __int128 *v36; // r14
  __int64 v37; // rax
  __int128 *v38; // rcx
  __int64 v39; // rax
  __int64 v40; // r13
  unsigned __int32 v41; // eax
  bool v42; // of
  signed __int32 v43; // eax
  int v44; // ett
  __int64 v45; // rt0
  __int64 v46; // r14
  unsigned __int32 v47; // eax
  bool v48; // of
  signed __int32 v49; // eax
  int v50; // ett
  __int64 v51; // rt0
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r14
  char result; // al
  char *v56; // r15
  __int128 *v57; // rcx
  __int128 *v58; // rbx
  __int128 v59; // xmm1
  __int128 v60; // xmm2
  __int128 v61; // xmm3
  __int64 v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rdx
  __int64 v65; // r14
  __int64 i; // rax
  __int64 v67; // rcx
  unsigned __int32 v68; // eax
  bool v69; // of
  signed __int32 v70; // eax
  int v71; // ett
  __int64 v72; // rt0
  char *v73; // r14
  __int64 v74; // rax
  __int64 v75; // rdx
  _DWORD *v76; // rbx
  __int64 v77; // r14
  char v78; // al
  __int64 v79; // r13
  __int64 v80; // rcx
  __int64 v81; // rdx
  _OWORD *v82; // r12
  __int64 v83; // rdx
  __int128 v84; // xmm1
  __int128 v85; // xmm2
  __int128 v86; // xmm3
  int v87; // eax
  __int64 v88; // rdx
  __int128 *v89; // rdi
  __int64 v90; // rdx
  char v91; // di
  __int64 v92; // rdx
  __int64 v93; // rcx
  __int64 *v94; // rax
  __int64 v95; // rdi
  __int64 v96; // rdx
  __int64 v97; // rcx
  __int64 v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // rdi
  int v101; // edx
  __int64 v102; // rbx
  __int128 *v103; // r14
  __int64 v104; // rcx
  __int64 v105; // rdx
  __int64 v106; // rdi
  int v107; // edx
  __int128 *v108; // r14
  _OWORD *v109; // rdi
  _QWORD *v110; // rdi
  __int64 v111; // r12
  int v112; // r14d
  __int128 *v113; // rdi
  _QWORD *v114; // rdi
  __int64 v115; // rdx
  __int128 *v116; // rax
  __int16 *v117; // rbx
  int v118; // eax
  unsigned int v119; // edi
  __int64 v120; // rcx
  __int64 v121; // rdx
  _QWORD *v122; // rax
  __int64 v123; // r15
  char *v124; // r14
  __int64 v125; // rdi
  char *v126; // rax
  volatile signed __int64 **v127; // r14
  __int16 v128; // di
  __int16 v129; // cx
  __int128 v130; // rax
  _OWORD *v131; // rax
  __int128 *v132; // r15
  _OWORD *v133; // r14
  __int128 v134; // xmm0
  __int128 v135; // xmm1
  __int128 v136; // xmm2
  char v137; // of
  volatile signed __int64 *v138; // r14
  __int64 v139; // rt0
  volatile signed __int64 *v140; // r12
  __int64 v141; // rt0
  __int64 v142; // rdx
  __int64 v143; // rdx
  __int64 v144; // rcx
  __int64 v145; // rax
  __int64 v146; // rdi
  __int16 v147; // di
  __int16 v148; // cx
  __int64 v149; // rdi
  __int64 v150; // rdx
  __int64 v151; // rcx
  __int64 v152; // rax
  __int64 v153; // rdi
  int v154; // edx
  volatile signed __int64 **v155; // rax
  signed __int64 v156; // rt0
  char *v157; // rbx
  int v158; // edx
  char *v159; // rax
  char *j; // rcx
  char v161; // dl
  __int16 v162; // di
  __int16 v163; // ax
  __int128 *v164; // rdi
  __int64 v165; // rdx
  __int128 *v166; // rax
  __int64 v167; // rdx
  int v168; // ecx
  unsigned int v169; // ecx
  int v170; // edx
  char *v171; // r14
  __int64 v172; // rdi
  __int16 v173; // kr00_2
  __int128 v174; // rax
  char *v175; // rdi
  _OWORD *v176; // r14
  __int64 v177; // rdx
  int v178; // eax
  unsigned int v179; // eax
  int v180; // ecx
  __int64 v181; // r14
  __int64 v182; // r15
  __int64 v183; // rax
  _OWORD v184[9]; // [rsp+80h] [rbp+0h] BYREF
  _OWORD v185[6]; // [rsp+110h] [rbp+90h] BYREF
  __int128 v186; // [rsp+170h] [rbp+F0h]
  __int128 v187; // [rsp+180h] [rbp+100h]
  __int128 v188; // [rsp+190h] [rbp+110h]
  __int128 v189; // [rsp+1A0h] [rbp+120h]
  __int128 v190; // [rsp+1B0h] [rbp+130h]
  __m256i v191; // [rsp+1C0h] [rbp+140h]
  __int128 v192; // [rsp+1E0h] [rbp+160h]
  __int128 v193; // [rsp+1F0h] [rbp+170h]
  __int128 v194; // [rsp+200h] [rbp+180h]
  __int128 v195; // [rsp+210h] [rbp+190h]
  __int128 v196; // [rsp+220h] [rbp+1A0h]
  __m256i v197; // [rsp+230h] [rbp+1B0h]
  __int128 v198; // [rsp+250h] [rbp+1D0h]
  __int128 v199; // [rsp+260h] [rbp+1E0h]
  __int128 v200; // [rsp+270h] [rbp+1F0h]
  __int128 v201; // [rsp+280h] [rbp+200h]
  __int128 v202; // [rsp+290h] [rbp+210h]
  __int128 v203; // [rsp+2A0h] [rbp+220h]
  __int128 v204; // [rsp+2B0h] [rbp+230h]
  __int64 v205; // [rsp+2C0h] [rbp+240h]
  __int128 v206; // [rsp+2D0h] [rbp+250h]
  __int128 v207; // [rsp+2E0h] [rbp+260h]
  __int128 v208; // [rsp+2F0h] [rbp+270h]
  __int128 v209; // [rsp+300h] [rbp+280h]
  __int128 v210; // [rsp+310h] [rbp+290h]
  __int128 v211; // [rsp+320h] [rbp+2A0h]
  volatile signed __int64 *v212; // [rsp+330h] [rbp+2B0h] BYREF
  __int16 v213; // [rsp+338h] [rbp+2B8h]
  __int128 v214; // [rsp+33Ah] [rbp+2BAh]
  __int128 v215; // [rsp+34Ah] [rbp+2CAh]
  __int128 v216; // [rsp+35Ah] [rbp+2DAh]
  __int128 v217; // [rsp+36Ah] [rbp+2EAh]
  __int128 v218; // [rsp+37Ah] [rbp+2FAh]
  _BYTE v219[22]; // [rsp+38Ah] [rbp+30Ah]
  __int128 v220; // [rsp+3A0h] [rbp+320h]
  __int128 v221; // [rsp+3B0h] [rbp+330h]
  __int128 v222; // [rsp+3C0h] [rbp+340h]
  __int128 v223; // [rsp+3D0h] [rbp+350h]
  __int128 v224; // [rsp+3E0h] [rbp+360h]
  __int128 v225; // [rsp+3F0h] [rbp+370h]
  __int128 v226; // [rsp+400h] [rbp+380h]
  __int128 v227; // [rsp+410h] [rbp+390h]
  __int128 v228; // [rsp+420h] [rbp+3A0h]
  __int128 v229; // [rsp+430h] [rbp+3B0h] BYREF
  __int128 v230; // [rsp+440h] [rbp+3C0h]
  __int128 v231; // [rsp+450h] [rbp+3D0h]
  __int128 v232; // [rsp+460h] [rbp+3E0h]
  __int128 v233; // [rsp+470h] [rbp+3F0h]
  __int128 v234; // [rsp+480h] [rbp+400h]
  __int128 v235; // [rsp+490h] [rbp+410h]
  __int64 v236; // [rsp+4A0h] [rbp+420h]
  volatile signed __int64 *v237; // [rsp+4A8h] [rbp+428h]
  __int128 v238; // [rsp+4B0h] [rbp+430h] BYREF
  __int128 v239; // [rsp+4C0h] [rbp+440h]
  __int128 v240; // [rsp+4D0h] [rbp+450h]
  __int128 v241; // [rsp+4E0h] [rbp+460h]
  __int128 v242; // [rsp+4F0h] [rbp+470h]
  __int128 v243; // [rsp+500h] [rbp+480h]
  __int128 v244; // [rsp+510h] [rbp+490h] BYREF
  __int128 v245; // [rsp+520h] [rbp+4A0h]
  __int128 v246; // [rsp+530h] [rbp+4B0h]
  __int128 v247; // [rsp+540h] [rbp+4C0h]
  __int128 v248; // [rsp+550h] [rbp+4D0h]
  __int128 v249; // [rsp+560h] [rbp+4E0h]
  __int128 v250; // [rsp+570h] [rbp+4F0h]
  __m256i v251; // [rsp+580h] [rbp+500h]
  _BYTE v252[112]; // [rsp+5A0h] [rbp+520h] BYREF
  __int128 v253; // [rsp+650h] [rbp+5D0h]
  __int64 v254; // [rsp+660h] [rbp+5E0h]
  const char *v255; // [rsp+668h] [rbp+5E8h]
  __int64 v256; // [rsp+670h] [rbp+5F0h]
  __int64 v257; // [rsp+678h] [rbp+5F8h]
  volatile signed __int64 *v258; // [rsp+680h] [rbp+600h]
  volatile signed __int64 *v259; // [rsp+688h] [rbp+608h]
  char v260; // [rsp+690h] [rbp+610h]
  __int64 v261; // [rsp+6B8h] [rbp+638h]
  _OWORD *v262; // [rsp+6C0h] [rbp+640h]
  char *v263; // [rsp+6C8h] [rbp+648h]
  _OWORD *v264; // [rsp+6D0h] [rbp+650h]
  char *v265; // [rsp+6D8h] [rbp+658h]
  _BYTE v266[104]; // [rsp+6E0h] [rbp+660h] BYREF
  __int16 v267; // [rsp+748h] [rbp+6C8h]
  int v268; // [rsp+74Ah] [rbp+6CAh]
  __int16 v269; // [rsp+74Eh] [rbp+6CEh]
  char *v270; // [rsp+750h] [rbp+6D0h]
  __int64 v271; // [rsp+758h] [rbp+6D8h]
  __int128 v272; // [rsp+760h] [rbp+6E0h] BYREF
  __int128 v273; // [rsp+770h] [rbp+6F0h]
  __int128 v274; // [rsp+780h] [rbp+700h]
  __int128 v275; // [rsp+790h] [rbp+710h]
  __int128 v276; // [rsp+7A0h] [rbp+720h]
  __int128 v277; // [rsp+7B0h] [rbp+730h]
  __int128 v278; // [rsp+7C0h] [rbp+740h]
  __m256i v279; // [rsp+7D0h] [rbp+750h]
  _OWORD *v280; // [rsp+7F0h] [rbp+770h]
  char *v281; // [rsp+7F8h] [rbp+778h]
  _BYTE v282[152]; // [rsp+800h] [rbp+780h] BYREF
  char v283; // [rsp+898h] [rbp+818h]
  _OWORD *v284; // [rsp+918h] [rbp+898h]
  char *v285; // [rsp+920h] [rbp+8A0h]
  _OWORD *v286; // [rsp+928h] [rbp+8A8h]
  char *v287; // [rsp+930h] [rbp+8B0h]
  __int64 v288; // [rsp+938h] [rbp+8B8h]
  volatile signed __int64 *v289; // [rsp+940h] [rbp+8C0h]
  char v290; // [rsp+94Bh] [rbp+8CBh]
  char v291; // [rsp+94Ch] [rbp+8CCh]
  char v292; // [rsp+94Dh] [rbp+8CDh]
  char v293; // [rsp+94Eh] [rbp+8CEh]
  char v294; // [rsp+94Fh] [rbp+8CFh]
  __int64 v295; // [rsp+950h] [rbp+8D0h]
  _OWORD *v296; // [rsp+958h] [rbp+8D8h]
  char v297; // [rsp+966h] [rbp+8E6h]
  char v298; // [rsp+967h] [rbp+8E7h]
  char *v299; // [rsp+968h] [rbp+8E8h]
  char v300; // [rsp+970h] [rbp+8F0h]
  char v301; // [rsp+971h] [rbp+8F1h]
  char v302; // [rsp+972h] [rbp+8F2h]
  char v303; // [rsp+973h] [rbp+8F3h]
  char v304; // [rsp+974h] [rbp+8F4h]
  char v305; // [rsp+975h] [rbp+8F5h]
  char v306; // [rsp+976h] [rbp+8F6h]
  char v307; // [rsp+977h] [rbp+8F7h]
  __int128 *v308; // [rsp+978h] [rbp+8F8h]
  __int64 v309; // [rsp+980h] [rbp+900h]

  v309 = -2;
  v4 = a2;
  v6 = *((unsigned __int8 *)a2 + 197);
  v308 = a2;
  switch ( v6 )
  {
    case 0LL:
      *(_DWORD *)((char *)a2 + 193) = 256;
      a2[9] = *(__int128 *)((char *)a2 + 168);
      v7 = *((_QWORD *)a2 + 16);
      v8 = *((_QWORD *)a2 + 17);
      v9 = a2[5];
      v10 = a2[6];
      v11 = a2[7];
      *a2 = a2[4];
      a2[1] = v9;
      v12 = *((_QWORD *)a2 + 23);
      a2[2] = v10;
      a2[3] = v11;
      *((_BYTE *)a2 + 192) = *((_BYTE *)a2 + 198);
      v13 = (_BYTE *)sub_1416724D0(aStream, 6, a2 + 2);
      if ( v13 && *v13 == 1 && (v13[1] & 1) != 0 )
      {
        v4 = v308;
        if ( *(_BYTE *)v308 == 5 )
        {
          nullsub_1(v15, v14);
          v17 = sub_140001650(6, 1);
          if ( !v17 )
            sub_14196B2DB(1, 6);
          *(_WORD *)(v17 + 4) = 28001;
          *(_DWORD *)v17 = 1701999731;
          *(_QWORD *)&v272 = 6;
          *((_QWORD *)&v272 + 1) = v17;
          *(_QWORD *)&v273 = 6;
          *(_WORD *)v282 = 257;
          sub_140A68320(v252, (char *)v4 + 8, &v272, v282);
          if ( v252[0] != 0xFF )
            sub_1406C0ED0(v252);
          v4 = v308;
        }
        v18 = *((_QWORD *)v4 + 18);
        v19 = *((_QWORD *)v4 + 19);
        *((_BYTE *)v4 + 194) = 0;
        v20 = *v4;
        *(_OWORD *)&v282[48] = v4[1];
        *(_OWORD *)&v282[32] = v20;
        v21 = *((_BYTE *)v4 + 192);
        v22 = *(_OWORD *)v282;
        v23 = *(_OWORD *)&v282[16];
        v24 = (__int128 *)((char *)v4 + 200);
        *(__int128 *)((char *)v4 + 248) = *(_OWORD *)&v282[48];
        *(__int128 *)((char *)v4 + 232) = v20;
        *(__int128 *)((char *)v4 + 216) = v23;
        *(__int128 *)((char *)v4 + 200) = v22;
        *((_QWORD *)v4 + 33) = v7;
        *((_QWORD *)v4 + 34) = v8;
        *((_QWORD *)v4 + 38) = v18;
        *((_QWORD *)v4 + 39) = v19;
        *((_QWORD *)v4 + 40) = v12;
        v25 = (char *)v4 + 331;
        *((_BYTE *)v4 + 331) = 0;
        *((_BYTE *)v4 + 332) = v21;
LABEL_13:
        *(_WORD *)((char *)v4 + 329) = 0;
        *((_QWORD *)v4 + 35) = v18;
        *((_QWORD *)v4 + 36) = v19;
        v26 = *(__int128 *)((char *)v4 + 232);
        v24[1] = *(__int128 *)((char *)v4 + 248);
        *v24 = v26;
        *((_BYTE *)v4 + 328) = v21;
        v299 = v25;
        v265 = v25;
        v264 = v24;
        LOBYTE(v25) = 1;
        sub_140736EB0(v185, v19, v25);
        v27 = v308;
        *((_BYTE *)v308 + 330) = 1;
        v28 = *((_QWORD *)v27 + 35);
        if ( *(_BYTE *)(*((_QWORD *)v27 + 36) + 253LL) == 1 )
        {
          v29 = *(_QWORD *)(v28 + 32);
          v30 = *(_DWORD *)(v29 + 16);
          if ( v30 > 0x3FFFFFFD
            || (v33 = *(_DWORD *)(v29 + 16),
                v32 = _InterlockedCompareExchange((volatile signed __int32 *)(v29 + 16), v30 + 1, v30),
                v31 = __OFSUB__(v33, v32),
                v33 != v32) )
          {
            v281 = v299;
            v280 = v24;
            sub_141969B00((volatile void *)(v29 + 16));
          }
          v34 = _InterlockedIncrement64(*(volatile signed __int64 **)(v29 + 32));
          if ( (v34 < 0) ^ v31 | (v34 == 0) )
            goto LABEL_212;
          v35 = *(_QWORD *)(v29 + 32);
          if ( __OFSUB__(-(_InterlockedDecrement((volatile signed __int32 *)(v29 + 16)) & 0xBFFFFFFF), 1) )
          {
LABEL_53:
            v281 = v299;
            v280 = v24;
            v181 = v35;
            sub_141969DF0(v29 + 16);
            v35 = v181;
          }
        }
        else
        {
          v29 = *(_QWORD *)(v28 + 24);
          v68 = *(_DWORD *)(v29 + 16);
          if ( v68 > 0x3FFFFFFD
            || (v71 = *(_DWORD *)(v29 + 16),
                v70 = _InterlockedCompareExchange((volatile signed __int32 *)(v29 + 16), v68 + 1, v68),
                v69 = __OFSUB__(v71, v70),
                v71 != v70) )
          {
            v281 = v299;
            v280 = v24;
            sub_141969B00((volatile void *)(v29 + 16));
          }
          v72 = _InterlockedIncrement64(*(volatile signed __int64 **)(v29 + 32));
          if ( (v72 < 0) ^ v69 | (v72 == 0) )
            goto LABEL_212;
          v35 = *(_QWORD *)(v29 + 32);
          if ( __OFSUB__(-(_InterlockedDecrement((volatile signed __int32 *)(v29 + 16)) & 0xBFFFFFFF), 1) )
            goto LABEL_53;
        }
        *((_QWORD *)v308 + 37) = v35;
        v73 = v299;
        v285 = v299;
        v284 = v24;
        sub_140657900((unsigned int)v282, v35, (unsigned int)&unk_141A35958, v7, v8);
        *((_BYTE *)v308 + 330) = 0;
        *(_OWORD *)&v266[80] = v185[5];
        *(_OWORD *)&v266[64] = v185[4];
        *(_OWORD *)&v266[48] = v185[3];
        *(_OWORD *)&v266[32] = v185[2];
        *(_OWORD *)&v266[16] = v185[1];
        *(_OWORD *)v266 = v185[0];
        v285 = v73;
        v284 = v24;
        sub_14126FD80(v252, v282, v266);
        v285 = v73;
        v284 = v24;
        sub_14065F550(v282, v252, v24);
        v285 = v73;
        v284 = v24;
        v74 = sub_14126FCB0(v282);
        v296 = v24;
        v4 = v308;
        *((_QWORD *)v308 + 42) = v74;
        *((_QWORD *)v4 + 43) = v75;
LABEL_55:
        v76 = v4 + 21;
        sub_141298A20(v282, v4 + 21, a3);
        v77 = *(_QWORD *)v282;
        if ( *(_QWORD *)v282 == -2 )
        {
          v78 = 3;
LABEL_71:
          *v299 = v78;
LABEL_72:
          *a1 = -1;
          result = 3;
          goto LABEL_84;
        }
        v79 = *(_QWORD *)&v282[8];
        v229 = *(_OWORD *)&v282[16];
        v230 = *(_OWORD *)&v282[32];
        v231 = *(_OWORD *)&v282[48];
        v232 = *(_OWORD *)&v282[64];
        v233 = *(_OWORD *)&v282[80];
        v234 = *(_OWORD *)&v282[96];
        v235 = *(_OWORD *)&v282[112];
        v236 = *(_QWORD *)&v282[128];
        v80 = *((_QWORD *)v308 + 42);
        v81 = *((_QWORD *)v308 + 43);
        v285 = v299;
        v82 = v296;
        v284 = v296;
        sub_1406C1D00(v80, v81);
        if ( (_DWORD)v77 == -1 )
        {
          v295 = v79;
          v104 = *((_QWORD *)v308 + 35);
          v105 = *(unsigned __int8 *)(*((_QWORD *)v308 + 36) + 253LL);
          v303 = 1;
          sub_14070F130(v104, v105);
          v303 = 0;
          *(_QWORD *)v266 = sub_1412469C0(v295);
          *(_QWORD *)v252 = v266;
          *(_QWORD *)&v252[8] = sub_141246C00;
          sub_1416DAFA0(v282, &unk_141A39A80, v252);
          v303 = 0;
          sub_14028DCE0(*(_QWORD *)v266);
          *(_OWORD *)v266 = *(_OWORD *)v282;
          *(_QWORD *)&v266[16] = *(_QWORD *)&v282[16];
          sub_1416DB410(v252, v266);
          v106 = *(_QWORD *)&v266[8];
          LOWORD(v107) = 502;
          sub_1407360F0(
            (unsigned int)v282,
            v107,
            *(_DWORD *)&v266[8],
            *(_DWORD *)&v266[16],
            (__int64)aProxyUpstream,
            14);
          v102 = *(_QWORD *)v282;
          v272 = *(_OWORD *)&v282[8];
          v273 = *(_OWORD *)&v282[24];
          v274 = *(_OWORD *)&v282[40];
          v275 = *(_OWORD *)&v282[56];
          v276 = *(_OWORD *)&v282[72];
          v277 = *(_OWORD *)&v282[88];
          v278 = *(_OWORD *)&v282[104];
          v279.m256i_i64[0] = *(_QWORD *)&v282[120];
          *(_OWORD *)&v279.m256i_u64[1] = *(_OWORD *)v252;
          v279.m256i_i64[3] = *(_QWORD *)&v252[16];
          v108 = v308;
          if ( *(_QWORD *)v266 )
            sub_140001660(v106, *(_QWORD *)v266, 1);
        }
        else
        {
          v4 = v308;
          v83 = (__int64)v308 + 344;
          *((_BYTE *)v308 + 329) = 1;
          *((_QWORD *)v4 + 43) = v77;
          *((_QWORD *)v4 + 44) = v79;
          v84 = v230;
          v85 = v231;
          v86 = v232;
          *(__int128 *)((char *)v4 + 360) = v229;
          *(__int128 *)((char *)v4 + 376) = v84;
          *(__int128 *)((char *)v4 + 392) = v85;
          *(__int128 *)((char *)v4 + 408) = v86;
          *(__int128 *)((char *)v4 + 424) = v233;
          *(__int128 *)((char *)v4 + 440) = v234;
          *(__int128 *)((char *)v4 + 456) = v235;
          *((_QWORD *)v4 + 59) = v236;
          v87 = *((_DWORD *)v4 + 112);
          *((_WORD *)v4 + 168) = v87;
          if ( (unsigned __int16)(v87 - 200) <= 0x63u )
          {
            *((_BYTE *)v4 + 329) = 0;
            sub_1419234B0(v282, v83, 136);
            v287 = v299;
            v286 = v82;
            v295 = sub_14107D110(v282);
            v288 = v88;
            v89 = v308;
            v90 = *((_QWORD *)v308 + 36) + 96LL;
            v294 = 1;
            sub_1416DB410(v266, v90);
            v91 = *((_BYTE *)v89 + 328);
            nullsub_1(v93, v92);
            v94 = (__int64 *)sub_140001650(16, 8);
            if ( !v94 )
              sub_14196B2C1(8, 16);
            *v94 = v295;
            v94[1] = v288;
            v206 = 0;
            v207 = 1u;
            *(_QWORD *)&v208 = v94;
            BYTE8(v208) = 0;
            if ( v91 )
            {
              v95 = *(_QWORD *)&v266[8];
              v297 = 1;
              sub_140A36E30((__int64)v282, *(__int64 *)&v266[8], *(__int64 *)&v266[16]);
              *(_OWORD *)&v252[96] = *(_OWORD *)&v282[96];
              *(_OWORD *)&v252[80] = *(_OWORD *)&v282[80];
              *(_OWORD *)&v252[64] = *(_OWORD *)&v282[64];
              *(_OWORD *)&v252[48] = *(_OWORD *)&v282[48];
              *(_OWORD *)&v252[32] = *(_OWORD *)&v282[32];
              *(_OWORD *)&v252[16] = *(_OWORD *)&v282[16];
              *(_OWORD *)v252 = *(_OWORD *)v282;
            }
            else
            {
              v95 = *(_QWORD *)&v266[8];
              v297 = 1;
              sub_140A64270((__int64)v282, *(__int64 *)&v266[8], *(__int64 *)&v266[16]);
              *(_QWORD *)&v252[104] = *(_QWORD *)&v282[96];
              *(_OWORD *)&v252[88] = *(_OWORD *)&v282[80];
              *(_OWORD *)&v252[72] = *(_OWORD *)&v282[64];
              *(_OWORD *)&v252[56] = *(_OWORD *)&v282[48];
              *(_OWORD *)&v252[40] = *(_OWORD *)&v282[32];
              *(_OWORD *)&v252[24] = *(_OWORD *)&v282[16];
              *(_OWORD *)&v252[8] = *(_OWORD *)v282;
              *(_QWORD *)v252 = -1;
            }
            nullsub_1(v97, v96);
            v131 = (_OWORD *)sub_140001650(64, 8);
            v132 = v308;
            if ( !v131 )
              sub_14196B2C1(8, 64);
            v133 = v131;
            v134 = v206;
            v135 = v207;
            v136 = v208;
            v131[3] = v209;
            v131[2] = v136;
            v131[1] = v135;
            *v131 = v134;
            v222 = *(_OWORD *)v252;
            v223 = *(_OWORD *)&v252[16];
            v224 = *(_OWORD *)&v252[32];
            v225 = *(_OWORD *)&v252[48];
            v226 = *(_OWORD *)&v252[64];
            v227 = *(_OWORD *)&v252[80];
            v228 = *(_OWORD *)&v252[96];
            v137 = 0;
            if ( *(_QWORD *)v266 )
              sub_140001660(v95, *(_QWORD *)v266, 1);
            *(_OWORD *)v282 = 0;
            *(_OWORD *)&v282[16] = 1u;
            *(_OWORD *)&v282[32] = v222;
            *(_OWORD *)&v282[48] = v223;
            *(_OWORD *)&v282[64] = v224;
            *(_OWORD *)&v282[80] = v225;
            *(_OWORD *)&v282[96] = v226;
            *(_OWORD *)&v282[112] = v227;
            *(_OWORD *)&v282[128] = v228;
            *(_QWORD *)&v282[144] = v133;
            v283 = 0;
            v138 = **((volatile signed __int64 ***)v132 + 35);
            v139 = _InterlockedIncrement64(v138);
            if ( !((v139 < 0) ^ v137 | (v139 == 0)) )
            {
              v237 = v138;
              v140 = *(volatile signed __int64 **)(*((_QWORD *)v132 + 35) + 8LL);
              v141 = _InterlockedIncrement64(v140);
              if ( !((v141 < 0) ^ v137 | (v141 == 0)) )
              {
                v289 = v140;
                v142 = *((_QWORD *)v132 + 36);
                v304 = 1;
                sub_1416DB410(v266, v142);
                *(_QWORD *)&v238 = v138;
                v212 = v140;
                nullsub_1(v144, v143);
                v145 = sub_140001650(24, 8);
                if ( !v145 )
                {
                  v295 = (__int64)v140;
                  sub_14196B2C1(8, 24);
                }
                v146 = v145;
                *(_QWORD *)v145 = 1;
                *(_QWORD *)(v145 + 8) = 1;
                *(_BYTE *)(v145 + 16) = 0;
                sub_1419234B0(v252, v282, 176);
                v253 = *(_OWORD *)v266;
                v254 = *(_QWORD *)&v266[16];
                v255 = aRelayTranslate;
                v256 = 30;
                v257 = v146;
                v258 = v140;
                v259 = v138;
                v260 = 0;
                v147 = 200;
                if ( (unsigned __int16)(*v76 - 1000) >= 0xFC7Cu )
                  v147 = *v76;
                v306 = 1;
                sub_14167FD30(v282);
                v238 = *(_OWORD *)&v282[8];
                v239 = *(_OWORD *)&v282[24];
                v240 = *(_OWORD *)&v282[40];
                v241 = *(_OWORD *)&v282[56];
                v242 = *(_OWORD *)&v282[72];
                v243 = *(_OWORD *)&v282[88];
                v148 = *(_WORD *)&v282[104];
                LODWORD(v289) = *(_DWORD *)&v282[106];
                WORD2(v289) = *(_WORD *)&v282[110];
                if ( *(_QWORD *)v282 != -1 )
                {
                  v243 = *(_OWORD *)&v282[88];
                  v242 = *(_OWORD *)&v282[72];
                  v241 = *(_OWORD *)&v282[56];
                  v240 = *(_OWORD *)&v282[40];
                  v239 = *(_OWORD *)&v282[24];
                  v238 = *(_OWORD *)&v282[8];
                  LODWORD(v289) = *(_DWORD *)&v282[106];
                  WORD2(v289) = *(_WORD *)&v282[110];
                  v148 = v147;
                }
                *(_QWORD *)v266 = *(_QWORD *)v282;
                *(_OWORD *)&v266[8] = v238;
                *(_OWORD *)&v266[24] = v239;
                *(_OWORD *)&v266[40] = v240;
                *(_OWORD *)&v266[56] = v241;
                *(_OWORD *)&v266[72] = v242;
                *(_OWORD *)&v266[88] = v243;
                v267 = v148;
                v268 = (int)v289;
                v269 = WORD2(v289);
                v240 = xmmword_141A37720;
                v239 = xmmword_141A37710;
                *(_QWORD *)&v238 = aTextEventStrea;
                *((_QWORD *)&v238 + 1) = 17;
                v306 = 1;
                sub_140656BD0(v282, v266, &v238);
                v240 = xmmword_141A39E00;
                v239 = xmmword_141A39DF0;
                *(_QWORD *)&v238 = aNoCache;
                *((_QWORD *)&v238 + 1) = 8;
                v306 = 1;
                sub_140656BD0(v266, v282, &v238);
                *(_QWORD *)v282 = aXAccelBufferin_0;
                *(_QWORD *)&v282[8] = 17;
                *(_QWORD *)&v282[16] = aNo_0;
                *(_QWORD *)&v282[24] = 2;
                v306 = 1;
                sub_140656FD0(&v212, v266, v282);
                v149 = *(_QWORD *)v252;
                if ( *(_QWORD *)v252 == -1 )
                {
                  v298 = 1;
                  sub_14196B5D0(&off_141A37B10);
                }
                sub_1419234B0(&v282[24], &v252[24], 224);
                *(_QWORD *)v282 = v149;
                *(_OWORD *)&v282[8] = *(_OWORD *)&v252[8];
                nullsub_1(v151, v150);
                v152 = sub_140001650(248, 8);
                if ( !v152 )
                  sub_14196B2C1(8, 248);
                v153 = v152;
                sub_1419234B0(v152, v282, 248);
                if ( v212 == (volatile signed __int64 *)-1LL )
                {
                  v295 = v153;
                  sub_14068C100(v153);
                  sub_14069B920(v295 + 176);
                  sub_140001660(v295, 248, 8);
                  v306 = 0;
                  LOWORD(v154) = 500;
                  sub_1407360F0(
                    (unsigned int)v282,
                    v154,
                    (unsigned int)aBuildSseBodyFa,
                    21,
                    (__int64)aProxyUpstream,
                    14);
                }
                else
                {
                  *(_OWORD *)&v282[10] = v214;
                  *(_OWORD *)&v282[26] = v215;
                  *(_OWORD *)&v282[42] = v216;
                  *(_OWORD *)&v282[58] = v217;
                  *(_OWORD *)&v282[74] = v218;
                  *(_OWORD *)&v282[90] = *(_OWORD *)v219;
                  *(_QWORD *)&v282[104] = *(_QWORD *)&v219[14];
                  *(_QWORD *)v282 = v212;
                  *(_WORD *)&v282[8] = v213;
                  *(_QWORD *)&v282[112] = v153;
                  *(_QWORD *)&v282[120] = &off_141A37C18;
                }
                *(_OWORD *)v279.m256i_i8 = *(_OWORD *)&v282[112];
                v278 = *(_OWORD *)&v282[96];
                v277 = *(_OWORD *)&v282[80];
                v276 = *(_OWORD *)&v282[64];
                v275 = *(_OWORD *)&v282[48];
                v274 = *(_OWORD *)&v282[32];
                v273 = *(_OWORD *)&v282[16];
                v272 = *(_OWORD *)v282;
                v155 = (volatile signed __int64 **)v308;
                *((_BYTE *)v308 + 329) = 0;
                v156 = _InterlockedDecrement64(v155[37]);
                v109 = v296;
                if ( !v156 )
                {
                  v281 = v299;
                  v280 = v296;
                  sub_141258070((char *)v308 + 296);
                }
                *((_BYTE *)v308 + 330) = 0;
                v157 = v299;
                v263 = v299;
                v262 = v109;
                sub_1406C0ED0(v109);
                sub_1419234B0(v184, &v272, 144);
                *v157 = 1;
                v102 = 3;
LABEL_174:
                sub_1419234B0(&v244, v184, 144);
                sub_1406BA490(v109);
                v116 = v308;
                goto LABEL_175;
              }
            }
LABEL_212:
            BUG();
          }
          *((_BYTE *)v4 + 329) = 0;
          sub_1419234B0(v4 + 30, v83, 136);
          *((_WORD *)v4 + 484) = 1;
LABEL_69:
          v295 = (__int64)(v4 + 30);
          sub_1406DDA90(v282, v4 + 30, a3);
          v102 = *(_QWORD *)v282;
          if ( *(_QWORD *)v282 == -2 )
          {
            v78 = 4;
            goto LABEL_71;
          }
          v221 = *(_OWORD *)&v282[24];
          v220 = *(_OWORD *)&v282[8];
          v186 = *(_OWORD *)&v282[40];
          v187 = *(_OWORD *)&v282[56];
          v188 = *(_OWORD *)&v282[72];
          v189 = *(_OWORD *)&v282[88];
          v190 = *(_OWORD *)&v282[104];
          v191 = *(__m256i *)&v282[120];
          if ( *((_BYTE *)v308 + 969) == 3 )
          {
            v287 = v299;
            v109 = v296;
            v286 = v296;
            sub_1406B87F0((char *)v308 + 616);
          }
          else
          {
            v109 = v296;
            if ( !*((_BYTE *)v308 + 969) )
            {
              sub_14068B4D0(v295);
              v110 = *((_QWORD **)v308 + 76);
              if ( *v110 )
                sub_140001660(v110[1], *v110, 1);
              sub_140001660(v110, 88, 8);
              v109 = v296;
            }
          }
          if ( (_DWORD)v102 != -1 )
          {
            v273 = v221;
            v272 = v220;
            v274 = v186;
            v275 = v187;
            v276 = v188;
            v277 = v189;
            v278 = v190;
            v279 = v191;
            v127 = (volatile signed __int64 **)v308;
            *((_BYTE *)v308 + 329) = 0;
            if ( _InterlockedDecrement64(v127[37]) )
            {
LABEL_173:
              *((_BYTE *)v308 + 330) = 0;
              v171 = v299;
              v263 = v299;
              v262 = v109;
              sub_1406C0ED0(v109);
              sub_1419234B0(v184, &v272, 144);
              *v171 = 1;
              if ( v102 == -1 )
                goto LABEL_72;
              goto LABEL_174;
            }
LABEL_172:
            v281 = v299;
            v280 = v109;
            sub_141258070((char *)v308 + 296);
            goto LABEL_173;
          }
          v239 = v221;
          v238 = v220;
          v128 = 502;
          if ( (unsigned __int16)(*((_DWORD *)v308 + 84) - 1000) >= 0xFC7Cu )
            v128 = *((_DWORD *)v308 + 84);
          v305 = 1;
          sub_14167FD30(v252);
          v222 = *(_OWORD *)&v252[8];
          v223 = *(_OWORD *)&v252[24];
          v224 = *(_OWORD *)&v252[40];
          v225 = *(_OWORD *)&v252[56];
          v226 = *(_OWORD *)&v252[72];
          v227 = *(_OWORD *)&v252[88];
          v129 = *(_WORD *)&v252[104];
          LODWORD(v289) = *(_DWORD *)&v252[106];
          WORD2(v289) = *(_WORD *)&v252[110];
          if ( *(_QWORD *)v252 != -1 )
          {
            v227 = *(_OWORD *)&v252[88];
            v226 = *(_OWORD *)&v252[72];
            v225 = *(_OWORD *)&v252[56];
            v224 = *(_OWORD *)&v252[40];
            v223 = *(_OWORD *)&v252[24];
            v222 = *(_OWORD *)&v252[8];
            LODWORD(v289) = *(_DWORD *)&v252[106];
            WORD2(v289) = *(_WORD *)&v252[110];
            v129 = v128;
          }
          *(_QWORD *)v266 = *(_QWORD *)v252;
          *(_OWORD *)&v266[8] = v222;
          *(_OWORD *)&v266[24] = v223;
          *(_OWORD *)&v266[40] = v224;
          *(_OWORD *)&v266[56] = v225;
          *(_OWORD *)&v266[72] = v226;
          *(_OWORD *)&v266[88] = v227;
          v267 = v129;
          v268 = (int)v289;
          v269 = WORD2(v289);
          *(_OWORD *)&v252[32] = xmmword_141A37720;
          *(_OWORD *)&v252[16] = xmmword_141A37710;
          *(_QWORD *)v252 = "application/json";
          *(_QWORD *)&v252[8] = 16;
          v305 = 1;
          sub_140656BD0(&v212, v266, v252);
          *(_OWORD *)&v252[16] = v221;
          *(_OWORD *)v252 = v220;
          v293 = 1;
          *(_QWORD *)&v130 = sub_1411E71E0(v252);
          if ( v212 == (volatile signed __int64 *)-1LL )
          {
            v288 = *((_QWORD *)&v130 + 1);
            v295 = v130;
            if ( **((_QWORD **)&v130 + 1) )
              (**((void (__fastcall ***)(__int64))&v130 + 1))(v295);
            v167 = *(_QWORD *)(v288 + 8);
            if ( v167 )
              sub_140001660(v295, v167, *(_QWORD *)(v288 + 16));
            v305 = 0;
            LOWORD(v167) = 502;
            sub_1407360F0((unsigned int)v282, v167, (unsigned int)aBuildErrorBody, 23, (__int64)aProxyUpstream, 14);
          }
          else
          {
            *(_OWORD *)&v282[10] = v214;
            *(_OWORD *)&v282[26] = v215;
            *(_OWORD *)&v282[42] = v216;
            *(_OWORD *)&v282[58] = v217;
            *(_OWORD *)&v282[74] = v218;
            *(_OWORD *)&v282[90] = *(_OWORD *)v219;
            *(_QWORD *)&v282[104] = *(_QWORD *)&v219[14];
            *(_QWORD *)v282 = v212;
            *(_WORD *)&v282[8] = v213;
            *(_OWORD *)&v282[112] = v130;
          }
          v108 = v308;
          v168 = *((unsigned __int16 *)v308 + 168);
          if ( (unsigned __int16)(v168 - 500) < 0x64u
            || (v169 = v168 - 401, v169 <= 0x1C) && (v170 = 268435917, _bittest(&v170, v169)) )
          {
            *(_QWORD *)v266 = v308 + 21;
            *(_QWORD *)&v266[8] = sub_141680990;
            sub_1416DAFA0(v252, &unk_141A39E21, v266);
            *(_OWORD *)&v279.m256i_u64[1] = *(_OWORD *)v252;
            v279.m256i_i64[3] = *(_QWORD *)&v252[16];
            v102 = *(_QWORD *)v282;
            v272 = *(_OWORD *)&v282[8];
            v273 = *(_OWORD *)&v282[24];
            v274 = *(_OWORD *)&v282[40];
            v275 = *(_OWORD *)&v282[56];
            v276 = *(_OWORD *)&v282[72];
            v277 = *(_OWORD *)&v282[88];
            v278 = *(_OWORD *)&v282[104];
            v279.m256i_i64[0] = *(_QWORD *)&v282[120];
            v108 = v308;
          }
          else
          {
            *(_OWORD *)v279.m256i_i8 = *(_OWORD *)&v282[112];
            v278 = *(_OWORD *)&v282[96];
            v277 = *(_OWORD *)&v282[80];
            v276 = *(_OWORD *)&v282[64];
            v275 = *(_OWORD *)&v282[48];
            v274 = *(_OWORD *)&v282[32];
            v273 = *(_OWORD *)&v282[16];
            v272 = *(_OWORD *)v282;
            v102 = 5;
          }
        }
        v109 = v296;
        *((_BYTE *)v108 + 329) = 0;
        if ( _InterlockedDecrement64(*((volatile signed __int64 **)v108 + 37)) )
          goto LABEL_173;
        goto LABEL_172;
      }
      v36 = v308;
      if ( *(_BYTE *)v308 == 5 )
      {
        nullsub_1(v15, v14);
        v37 = sub_140001650(6, 1);
        if ( !v37 )
          sub_14196B2DB(1, 6);
        *(_WORD *)(v37 + 4) = 28001;
        *(_DWORD *)v37 = 1701999731;
        *(_QWORD *)&v272 = 6;
        *((_QWORD *)&v272 + 1) = v37;
        *(_QWORD *)&v273 = 6;
        *(_WORD *)v282 = 1;
        sub_140A68320(v252, (char *)v36 + 8, &v272, v282);
        if ( v252[0] != 0xFF )
          sub_1406C0ED0(v252);
        v36 = v308;
      }
      LOBYTE(v16) = 1;
      sub_140736EB0(v184, *((_QWORD *)v36 + 19), v16);
      v38 = v308;
      *((_BYTE *)v308 + 196) = 1;
      v39 = *((_QWORD *)v38 + 18);
      if ( *(_BYTE *)(*((_QWORD *)v38 + 19) + 253LL) == 1 )
      {
        v40 = *(_QWORD *)(v39 + 32);
        v41 = *(_DWORD *)(v40 + 16);
        if ( v41 > 0x3FFFFFFD
          || (v44 = *(_DWORD *)(v40 + 16),
              v43 = _InterlockedCompareExchange((volatile signed __int32 *)(v40 + 16), v41 + 1, v41),
              v42 = __OFSUB__(v44, v43),
              v44 != v43) )
        {
          sub_141969B00((volatile void *)(v40 + 16));
        }
        v45 = _InterlockedIncrement64(*(volatile signed __int64 **)(v40 + 32));
        if ( (v45 < 0) ^ v42 | (v45 == 0) )
          goto LABEL_212;
        v46 = *(_QWORD *)(v40 + 32);
        if ( __OFSUB__(-(_InterlockedDecrement((volatile signed __int32 *)(v40 + 16)) & 0xBFFFFFFF), 1) )
LABEL_34:
          sub_141969DF0(v40 + 16);
      }
      else
      {
        v40 = *(_QWORD *)(v39 + 24);
        v47 = *(_DWORD *)(v40 + 16);
        if ( v47 > 0x3FFFFFFD
          || (v50 = *(_DWORD *)(v40 + 16),
              v49 = _InterlockedCompareExchange((volatile signed __int32 *)(v40 + 16), v47 + 1, v47),
              v48 = __OFSUB__(v50, v49),
              v50 != v49) )
        {
          sub_141969B00((volatile void *)(v40 + 16));
        }
        v51 = _InterlockedIncrement64(*(volatile signed __int64 **)(v40 + 32));
        if ( (v51 < 0) ^ v48 | (v51 == 0) )
          goto LABEL_212;
        v46 = *(_QWORD *)(v40 + 32);
        if ( __OFSUB__(-(_InterlockedDecrement((volatile signed __int32 *)(v40 + 16)) & 0xBFFFFFFF), 1) )
          goto LABEL_34;
      }
      *((_QWORD *)v308 + 20) = v46;
      sub_140657900((unsigned int)v282, v46, (unsigned int)&unk_141A35958, v7, v8);
      *((_BYTE *)v308 + 196) = 0;
      v277 = v184[5];
      v276 = v184[4];
      v275 = v184[3];
      v274 = v184[2];
      v273 = v184[1];
      v272 = v184[0];
      sub_14126FD80(v252, v282, &v272);
      sub_14065F550(v282, v252, v308);
      v52 = sub_14126FCB0(v282);
      v4 = v308;
      *((_QWORD *)v308 + 25) = v52;
      *((_QWORD *)v4 + 26) = v53;
LABEL_36:
      sub_141298A20(v282, (char *)v4 + 200, a3);
      v54 = *(_QWORD *)v282;
      if ( *(_QWORD *)v282 != -2 )
      {
        v56 = *(char **)&v282[8];
        v198 = *(_OWORD *)&v282[16];
        v199 = *(_OWORD *)&v282[32];
        v200 = *(_OWORD *)&v282[48];
        v201 = *(_OWORD *)&v282[64];
        v202 = *(_OWORD *)&v282[80];
        v203 = *(_OWORD *)&v282[96];
        v204 = *(_OWORD *)&v282[112];
        v205 = *(_QWORD *)&v282[128];
        sub_1406C1D00(*((_QWORD *)v308 + 25), *((_QWORD *)v308 + 26));
        if ( (_DWORD)v54 == -1 )
        {
          v299 = v56;
          v98 = *((_QWORD *)v308 + 18);
          v99 = *(unsigned __int8 *)(*((_QWORD *)v308 + 19) + 253LL);
          v302 = 1;
          sub_14070F130(v98, v99);
          v302 = 0;
          *(_QWORD *)&v272 = sub_1412469C0(v299);
          *(_QWORD *)v252 = &v272;
          *(_QWORD *)&v252[8] = sub_141246C00;
          sub_1416DAFA0(v282, &unk_141A39A80, v252);
          v302 = 0;
          sub_14028DCE0(v272);
          v272 = *(_OWORD *)v282;
          *(_QWORD *)&v273 = *(_QWORD *)&v282[16];
          sub_1416DB410(v252, &v272);
          v100 = *((_QWORD *)&v272 + 1);
          LOWORD(v101) = 502;
          sub_1407360F0((unsigned int)v282, v101, DWORD2(v272), v273, (__int64)aProxyUpstream, 14);
          v102 = *(_QWORD *)v282;
          v244 = *(_OWORD *)&v282[8];
          v245 = *(_OWORD *)&v282[24];
          v246 = *(_OWORD *)&v282[40];
          v247 = *(_OWORD *)&v282[56];
          v248 = *(_OWORD *)&v282[72];
          v249 = *(_OWORD *)&v282[88];
          v250 = *(_OWORD *)&v282[104];
          v251.m256i_i64[0] = *(_QWORD *)&v282[120];
          *(_OWORD *)&v251.m256i_u64[1] = *(_OWORD *)v252;
          v251.m256i_i64[3] = *(_QWORD *)&v252[16];
          v103 = v308;
          if ( (_QWORD)v272 )
          {
            sub_140001660(v100, v272, 1);
            *((_BYTE *)v103 + 195) = 0;
            if ( _InterlockedDecrement64(*((volatile signed __int64 **)v103 + 20)) )
              goto LABEL_101;
            goto LABEL_100;
          }
          goto LABEL_97;
        }
        v57 = v308;
        v58 = v308 + 13;
        *((_BYTE *)v308 + 195) = 1;
        *((_QWORD *)v57 + 26) = v54;
        *((_QWORD *)v57 + 27) = v56;
        v59 = v199;
        v60 = v200;
        v61 = v201;
        v57[14] = v198;
        v57[15] = v59;
        v57[16] = v60;
        v57[17] = v61;
        v57[18] = v202;
        v57[19] = v203;
        v57[20] = v204;
        *((_QWORD *)v57 + 42) = v205;
        *((_WORD *)v57 + 100) = *((_WORD *)v57 + 156);
        *(_OWORD *)&v282[16] = xmmword_141A37720;
        *(_OWORD *)v282 = xmmword_141A37710;
        v62 = sub_1406513C0(v58, v282);
        v63 = 344;
        if ( v62 )
        {
          v64 = *(_QWORD *)(v62 + 16);
          v4 = v308;
          if ( v64 )
          {
            v65 = *(_QWORD *)(v62 + 8);
            for ( i = 0; i != v64; ++i )
            {
              if ( (unsigned __int8)(*(_BYTE *)(v65 + i) - 32) >= 0x5Fu && *(_BYTE *)(v65 + i) != 9 )
              {
                v64 = -1;
                goto LABEL_81;
              }
            }
            if ( v64 < 0 )
            {
              v67 = 0;
              goto LABEL_46;
            }
            v182 = v64;
            nullsub_1(344, v64);
            v183 = sub_140001650(v182, 1);
            v67 = 1;
            v64 = v182;
            if ( !v183 )
LABEL_46:
              sub_14196B2DB(v67, v64);
            v111 = v183;
            sub_1419234B0(v183, v65, v182);
            v64 = v182;
            v4 = v308;
          }
          else
          {
            v111 = 1;
          }
          *((_QWORD *)v4 + 43) = v64;
          *((_QWORD *)v4 + 44) = v111;
          v63 = 360;
        }
        else
        {
          v64 = -1;
          v4 = v308;
        }
LABEL_81:
        *(_QWORD *)((char *)v4 + v63) = v64;
        *((_BYTE *)v4 + 193) = 1;
        *((_BYTE *)v4 + 195) = 0;
        v112 = *((_DWORD *)v4 + 50) - 300;
        sub_1419234B0(v4 + 23, v58, 136);
        *((_BYTE *)v4 + 856) = (unsigned __int16)v112 < 0xFF9Cu;
        *((_BYTE *)v4 + 857) = 0;
LABEL_82:
        v299 = (char *)(v4 + 23);
        sub_1406DDA90(v282, v4 + 23, a3);
        v102 = *(_QWORD *)v282;
        if ( *(_QWORD *)v282 == -2 )
        {
          *a1 = -1;
          result = 5;
          goto LABEL_84;
        }
        v211 = *(_OWORD *)&v282[24];
        v210 = *(_OWORD *)&v282[8];
        v192 = *(_OWORD *)&v282[40];
        v193 = *(_OWORD *)&v282[56];
        v194 = *(_OWORD *)&v282[72];
        v195 = *(_OWORD *)&v282[88];
        v196 = *(_OWORD *)&v282[104];
        v197 = *(__m256i *)&v282[120];
        if ( *((_BYTE *)v308 + 857) == 3 )
        {
          sub_1406B87F0((char *)v308 + 504);
        }
        else if ( !*((_BYTE *)v308 + 857) )
        {
          sub_14068B4D0(v299);
          v114 = *((_QWORD **)v308 + 62);
          if ( *v114 )
            sub_140001660(v114[1], *v114, 1);
          sub_140001660(v114, 88, 8);
        }
        if ( (_DWORD)v102 != -1 )
        {
          v245 = v211;
          v244 = v210;
          v246 = v192;
          v247 = v193;
          v248 = v194;
          v249 = v195;
          v250 = v196;
          v251 = v197;
          goto LABEL_93;
        }
        *(_OWORD *)&v266[16] = v211;
        *(_OWORD *)v266 = v210;
        v117 = (__int16 *)v308 + 100;
        v118 = *((_DWORD *)v308 + 50);
        if ( (unsigned __int16)(v118 - 200) < 0x64u )
        {
          *(_OWORD *)v282 = *(_OWORD *)&v266[8];
          *(_OWORD *)&v282[16] = 0;
          v307 = 1;
          vendor_json_parse_str_with_trailing_check(v252, (__int128 *)v282);
          if ( v252[0] != 0xFF )
          {
            v230 = *(_OWORD *)&v252[16];
            v229 = *(_OWORD *)v252;
            if ( *((_BYTE *)v308 + 192) == 1 )
              sub_1408BB9A0(&v272, &v229);
            else
              sub_1408B8EF0((__int64)&v272, (__int64)&v229);
            v162 = *v117;
            *(_OWORD *)&v252[16] = v273;
            *(_OWORD *)v252 = v272;
            sub_140CA7480(v282, v252);
            v163 = 200;
            if ( (unsigned __int16)(v162 - 1000) >= 0xFC7Cu )
              v163 = v162;
            *(_WORD *)&v282[104] = v163;
            v244 = *(_OWORD *)v282;
            v245 = *(_OWORD *)&v282[16];
            v246 = *(_OWORD *)&v282[32];
            v247 = *(_OWORD *)&v282[48];
            v248 = *(_OWORD *)&v282[64];
            v249 = *(_OWORD *)&v282[80];
            *(_OWORD *)v251.m256i_i8 = *(_OWORD *)&v282[112];
            *(_QWORD *)&v250 = *(_QWORD *)&v282[96];
            WORD4(v250) = v163;
            *(_DWORD *)((char *)&v250 + 10) = *(_DWORD *)&v282[106];
            HIWORD(v250) = *(_WORD *)&v282[110];
            v307 = 1;
            sub_1406C0ED0(&v229);
            (*(void (__fastcall **)(_BYTE *, _QWORD, _QWORD))(*(_QWORD *)v266 + 32LL))(
              &v266[24],
              *(_QWORD *)&v266[8],
              *(_QWORD *)&v266[16]);
            v164 = v308;
            v165 = *((_QWORD *)v308 + 43);
            if ( v165 != -1 && v165 )
              sub_140001660(*((_QWORD *)v308 + 44), v165, 1);
            *((_BYTE *)v164 + 193) = 0;
            *((_BYTE *)v164 + 195) = 0;
            if ( !_InterlockedDecrement64(*((volatile signed __int64 **)v164 + 20)) )
              sub_141258070(v308 + 10);
            v166 = v308;
            *((_BYTE *)v308 + 196) = 0;
            sub_1406C0ED0(v166 + 2);
            sub_1406C0ED0(v308);
            v113 = v308;
            *((_BYTE *)v308 + 194) = 0;
            v102 = 3;
            goto LABEL_178;
          }
          v212 = *(volatile signed __int64 **)&v252[8];
          sub_1407381F0(&v272, *((_QWORD *)v308 + 18));
          LOWORD(v158) = 502;
          v299 = *((char **)&v272 + 1);
          sub_1407360F0((unsigned int)v282, v158, DWORD2(v272), v273, (__int64)aProxyUpstream, 14);
          *(_OWORD *)v251.m256i_i8 = *(_OWORD *)&v282[112];
          v250 = *(_OWORD *)&v282[96];
          v249 = *(_OWORD *)&v282[80];
          v248 = *(_OWORD *)&v282[64];
          v247 = *(_OWORD *)&v282[48];
          v246 = *(_OWORD *)&v282[32];
          v245 = *(_OWORD *)&v282[16];
          v244 = *(_OWORD *)v282;
          if ( (_QWORD)v272 )
            sub_140001660(v299, v272, 1);
          v307 = 1;
          sub_140032F30(&v212);
          v102 = 5;
          (*(void (__fastcall **)(_BYTE *, _QWORD, _QWORD))(*(_QWORD *)v266 + 32LL))(
            &v266[24],
            *(_QWORD *)&v266[8],
            *(_QWORD *)&v266[16]);
          goto LABEL_93;
        }
        v119 = 502;
        if ( (unsigned __int16)(v118 - 1000) >= 0xFC7Cu )
          v119 = *((_DWORD *)v308 + 50);
        v307 = 1;
        sub_14167FD30(v282);
        v272 = *(_OWORD *)&v282[8];
        v273 = *(_OWORD *)&v282[24];
        v274 = *(_OWORD *)&v282[40];
        v275 = *(_OWORD *)&v282[56];
        v276 = *(_OWORD *)&v282[72];
        v277 = *(_OWORD *)&v282[88];
        v120 = *(unsigned __int16 *)&v282[104];
        LODWORD(v229) = *(_DWORD *)&v282[106];
        v121 = *(unsigned __int16 *)&v282[110];
        WORD2(v229) = *(_WORD *)&v282[110];
        if ( *(_QWORD *)v282 != -1 )
        {
          v277 = *(_OWORD *)&v282[88];
          v276 = *(_OWORD *)&v282[72];
          v275 = *(_OWORD *)&v282[56];
          v274 = *(_OWORD *)&v282[40];
          v273 = *(_OWORD *)&v282[24];
          v272 = *(_OWORD *)&v282[8];
          v121 = *(unsigned int *)&v282[106];
          LODWORD(v229) = *(_DWORD *)&v282[106];
          WORD2(v229) = *(_WORD *)&v282[110];
          v120 = v119;
        }
        *(_QWORD *)v252 = *(_QWORD *)v282;
        *(_OWORD *)&v252[8] = v272;
        *(_OWORD *)&v252[24] = v273;
        *(_OWORD *)&v252[40] = v274;
        *(_OWORD *)&v252[56] = v275;
        *(_OWORD *)&v252[72] = v276;
        *(_OWORD *)&v252[88] = v277;
        *(_WORD *)&v252[104] = v120;
        *(_DWORD *)&v252[106] = v229;
        *(_WORD *)&v252[110] = WORD2(v229);
        v122 = v308;
        *((_BYTE *)v308 + 193) = 0;
        v123 = v122[43];
        if ( v123 == -1 )
        {
          nullsub_1(v120, v121);
          v159 = (char *)sub_140001650(16, 1);
          if ( !v159 )
          {
            v291 = 1;
            v290 = 1;
            sub_14196B2DB(1, 16);
          }
          v124 = v159;
          *(_OWORD *)v159 = *(_OWORD *)"application/json";
          v126 = v159 + 16;
          v123 = 16;
          goto LABEL_147;
        }
        v124 = (char *)v122[44];
        v125 = v122[45];
        if ( v125 )
        {
          v126 = &v124[v125];
LABEL_147:
          for ( j = v124; j != v126; ++j )
          {
            v161 = *j;
            if ( (unsigned __int8)*j > 0x1Fu )
            {
              if ( v161 == 127 )
                goto LABEL_152;
            }
            else if ( v161 != 9 )
            {
LABEL_152:
              v296 = (_OWORD *)v123;
              v299 = v124;
              goto LABEL_181;
            }
          }
        }
        v271 = v123;
        v270 = v124;
        v301 = 1;
        v300 = 1;
        sub_141682400(&v229, v124);
        LOBYTE(v231) = 0;
        *(_QWORD *)&v276 = v231;
        v275 = v230;
        v274 = v229;
        v272 = xmmword_141A37710;
        v273 = xmmword_141A37720;
        v271 = v123;
        v270 = v124;
        v301 = 1;
        v300 = 0;
        sub_140656870(v282, v252, &v272);
        v296 = (_OWORD *)v123;
        v299 = v124;
        *(_OWORD *)v252 = *(_OWORD *)v282;
        *(_OWORD *)&v252[16] = *(_OWORD *)&v282[16];
        *(_OWORD *)&v252[32] = *(_OWORD *)&v282[32];
        *(_OWORD *)&v252[48] = *(_OWORD *)&v282[48];
        *(_OWORD *)&v252[64] = *(_OWORD *)&v282[64];
        *(_OWORD *)&v252[80] = *(_OWORD *)&v282[80];
        *(_OWORD *)&v252[96] = *(_OWORD *)&v282[96];
LABEL_181:
        v172 = *(_QWORD *)v252;
        v173 = *(_WORD *)&v252[8];
        *(_OWORD *)&v282[16] = *(_OWORD *)&v266[16];
        *(_OWORD *)v282 = *(_OWORD *)v266;
        v292 = 1;
        *(_QWORD *)&v174 = sub_1411E71E0(v282);
        if ( v172 == -1 )
        {
          v288 = *((_QWORD *)&v174 + 1);
          v295 = v174;
          if ( **((_QWORD **)&v174 + 1) )
            (**((void (__fastcall ***)(__int64))&v174 + 1))(v295);
          v177 = *(_QWORD *)(v288 + 8);
          if ( v177 )
            sub_140001660(v295, v177, *(_QWORD *)(v288 + 16));
          v176 = v296;
          v271 = (__int64)v296;
          v175 = v299;
          v270 = v299;
          v301 = 0;
          v300 = 0;
          LOWORD(v177) = 502;
          sub_1407360F0((unsigned int)v282, v177, (unsigned int)aBuildErrorBody, 23, (__int64)aProxyUpstream, 14);
        }
        else
        {
          *(_QWORD *)&v282[104] = *(_QWORD *)&v252[104];
          *(_OWORD *)&v282[90] = *(_OWORD *)&v252[90];
          *(_OWORD *)&v282[74] = *(_OWORD *)&v252[74];
          *(_OWORD *)&v282[58] = *(_OWORD *)&v252[58];
          *(_OWORD *)&v282[42] = *(_OWORD *)&v252[42];
          *(_OWORD *)&v282[26] = *(_OWORD *)&v252[26];
          *(_OWORD *)&v282[10] = *(_OWORD *)&v252[10];
          *(_QWORD *)v282 = v172;
          *(_WORD *)&v282[8] = v173;
          *(_OWORD *)&v282[112] = v174;
          v175 = v299;
          v176 = v296;
        }
        v178 = (unsigned __int16)*v117;
        if ( (unsigned __int16)(v178 - 500) < 0x64u
          || (v179 = v178 - 401, v179 <= 0x1C) && (v180 = 268435917, _bittest(&v180, v179)) )
        {
          *(_QWORD *)&v229 = v117;
          *((_QWORD *)&v229 + 1) = sub_141680990;
          sub_1403F7C60(&v272, &unk_141A39A9B, &v229);
          *(_OWORD *)&v251.m256i_u64[1] = v272;
          v251.m256i_i64[3] = v273;
          v102 = *(_QWORD *)v282;
          v244 = *(_OWORD *)&v282[8];
          v245 = *(_OWORD *)&v282[24];
          v246 = *(_OWORD *)&v282[40];
          v247 = *(_OWORD *)&v282[56];
          v248 = *(_OWORD *)&v282[72];
          v249 = *(_OWORD *)&v282[88];
          v250 = *(_OWORD *)&v282[104];
          v251.m256i_i64[0] = *(_QWORD *)&v282[120];
          v175 = v299;
          v176 = v296;
          if ( !v296 )
            goto LABEL_93;
        }
        else
        {
          *(_OWORD *)v251.m256i_i8 = *(_OWORD *)&v282[112];
          v250 = *(_OWORD *)&v282[96];
          v249 = *(_OWORD *)&v282[80];
          v248 = *(_OWORD *)&v282[64];
          v247 = *(_OWORD *)&v282[48];
          v246 = *(_OWORD *)&v282[32];
          v245 = *(_OWORD *)&v282[16];
          v244 = *(_OWORD *)v282;
          v102 = 5;
          if ( !v176 )
          {
LABEL_93:
            v103 = v308;
            if ( !*((_BYTE *)v308 + 193) || (v115 = *((_QWORD *)v308 + 43), v115 == -1) || !v115 )
            {
              *((_BYTE *)v308 + 193) = 0;
              *((_BYTE *)v103 + 195) = 0;
              if ( _InterlockedDecrement64(*((volatile signed __int64 **)v103 + 20)) )
              {
LABEL_101:
                v116 = v308;
                *((_BYTE *)v308 + 196) = 0;
LABEL_175:
                sub_1406C0ED0(v116 + 2);
                if ( *((_BYTE *)v308 + 194) )
                  sub_1406C0ED0(v308);
                v113 = v308;
                *((_BYTE *)v308 + 194) = 0;
LABEL_178:
                *a1 = v102;
                sub_1419234B0(a1 + 1, &v244, 144);
                result = 1;
                goto LABEL_179;
              }
LABEL_100:
              sub_141258070(v308 + 10);
              goto LABEL_101;
            }
            sub_140001660(*((_QWORD *)v308 + 44), v115, 1);
            *((_BYTE *)v103 + 193) = 0;
LABEL_97:
            *((_BYTE *)v103 + 195) = 0;
            if ( _InterlockedDecrement64(*((volatile signed __int64 **)v103 + 20)) )
              goto LABEL_101;
            goto LABEL_100;
          }
        }
        sub_140001660(v175, v176, 1);
        goto LABEL_93;
      }
      *a1 = -1;
      result = 4;
LABEL_84:
      v113 = v308;
LABEL_179:
      *((_BYTE *)v113 + 197) = result;
      return result;
    case 1LL:
      sub_14196B990(&off_141A39A68);
    case 2LL:
      sub_14196B9B0(&off_141A39A68);
    case 3LL:
      v299 = (char *)a2 + 331;
      v24 = (__int128 *)((char *)a2 + 200);
      switch ( *((_BYTE *)a2 + 331) )
      {
        case 0:
          v18 = *((_QWORD *)a2 + 38);
          v19 = *((_QWORD *)a2 + 39);
          v7 = *((_QWORD *)v4 + 33);
          v8 = *((_QWORD *)v4 + 34);
          v21 = *((_BYTE *)v4 + 332);
          v25 = (char *)v4 + 331;
          goto LABEL_13;
        case 1:
          v261 = (__int64)a2 + 200;
          sub_14196B990(&off_141A39DB8);
        case 2:
          v261 = (__int64)a2 + 200;
          sub_14196B9B0(&off_141A39DB8);
        case 3:
          v296 = (__int128 *)((char *)a2 + 200);
          goto LABEL_55;
        case 4:
          v296 = (__int128 *)((char *)a2 + 200);
          goto LABEL_69;
      }
    case 4LL:
      goto LABEL_36;
    case 5LL:
      goto LABEL_82;
  }
}
