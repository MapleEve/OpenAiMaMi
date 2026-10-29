// win 1.2.7 | module src/core/relay/router_transition.rs | ea 0x140bc2c60 | name sub_140BC2C60
// win 1.2.7 | module src/core/relay/router_transition.rs | attributed via panic-Location xref (win-native)
__int64 __fastcall sub_140BC2C60(
        __int128 *a1,
        __int128 *a2,
        unsigned __int8 a3,
        char a4,
        __int128 a5,
        __int64 a6,
        __int64 a7,
        unsigned __int8 *a8,
        char *a9,
        __int64 a10,
        __int64 *a11,
        __int64 *a12,
        unsigned __int8 *a13)
{
  __int64 v15; // r14
  __m128i v16; // xmm0
  __int64 v17; // rbx
  __m128i v18; // xmm1
  __int64 result; // rax
  unsigned __int64 v20; // rcx
  __int128 v21; // kr10_16
  __int128 v22; // kr20_16
  __m128i v23; // xmm0
  __m128i v24; // xmm1
  unsigned __int128 v25; // rdi
  __int64 v26; // rcx
  __m128i v27; // xmm6
  __m128i v28; // xmm7
  __int64 v29; // rdx
  char v30; // al
  __m128i *v31; // rsi
  int v32; // edx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // edx
  __m128i *v38; // rdi
  char v39; // bl
  __int64 v40; // rax
  unsigned int v41; // edx
  __int64 *v42; // rax
  __int64 v43; // r9
  __int64 v44; // rax
  _QWORD *v45; // rdx
  __int64 v46; // r8
  __int64 v47; // r10
  __int64 v48; // rax
  __m128i v49; // xmm0
  __m128i v50; // xmm1
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // rcx
  __m128i v54; // xmm1
  __int64 v55; // rsi
  __int64 v56; // rax
  __int64 v57; // rcx
  __m128i v58; // xmm1
  __m128i v59; // xmm1
  int v60; // r9d
  __int64 v61; // rdx
  __m128i v62; // xmm0
  __m128i v63; // xmm1
  __int64 v64; // r15
  __int64 v65; // rbx
  _QWORD *v66; // rsi
  __int64 v67; // rdx
  __int64 v68; // rdx
  __m128i v69; // xmm0
  __m128i v70; // xmm1
  __int64 v71; // rcx
  __int64 v72; // r13
  __int64 v73; // rdx
  __m128i *v74; // rax
  __int64 v75; // rsi
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // r12
  __int64 v79; // r15
  __int64 v80; // rdx
  __int64 v81; // rax
  __m128i *v82; // rbx
  __int64 v83; // r15
  int v84; // ebx
  char v85; // r15
  __int16 v86; // r12
  __int64 v87; // rax
  int v88; // eax
  int v89; // r12d
  __int64 v90; // r15
  char v91; // r13
  __int64 v92; // rdx
  char v93; // bl
  __int64 v94; // r15
  __int64 v95; // rcx
  bool v96; // zf
  __int64 v97; // rax
  __int128 v98; // xmm0
  __int128 v99; // xmm1
  __m128i v100; // xmm1
  __int64 v101; // rbx
  __int64 v102; // r15
  __int64 v103; // r12
  _QWORD *v104; // r13
  __int64 v105; // rdx
  __m128i v106; // xmm1
  __int64 v107; // r15
  __int64 v108; // r12
  _QWORD *v109; // r13
  __int64 v110; // rdx
  __int64 v111; // rdx
  __int64 v112; // r8
  __int64 v113; // r9
  __m128i v114; // xmm0
  __m128i v115; // xmm1
  int v116; // r9d
  __int64 v117; // rdx
  __int64 v118; // rbx
  __int64 v119; // r12
  __int64 v120; // r15
  __int64 v121; // r13
  __int64 v122; // rdx
  __int64 v123; // rcx
  __int64 v124; // r8
  __int64 v125; // r9
  _QWORD *v126; // rsi
  unsigned __int64 v127; // rax
  unsigned int v128; // edx
  char v129; // r15
  __m128i v130; // xmm1
  int v131; // esi
  char v132; // bl
  unsigned __int64 v133; // rax
  unsigned int v134; // edx
  bool v135; // cl
  bool v136; // dl
  unsigned int v137; // edx
  _QWORD *v138; // rsi
  __int64 v139; // rdx
  __int64 v140; // r15
  __int64 v141; // rbx
  _QWORD *v142; // rsi
  bool v143; // cl
  bool v144; // dl
  unsigned int v145; // edx
  char v146; // di
  __m128i v147; // xmm1
  __m128i v148; // xmm0
  __m128i v149; // xmm1
  __int128 si128; // xmm0
  __int128 v151; // xmm1
  __int128 v152; // xmm2
  __int64 v153; // rax
  __int128 v154; // xmm0
  __int128 v155; // xmm1
  __int128 v156; // xmm2
  char v157; // al
  __m128i *v158; // rsi
  __int64 v159; // rax
  unsigned int v160; // edx
  __m128i v161; // xmm0
  __m128i v162; // xmm1
  __m128i v163; // xmm2
  __int128 v164; // xmm0
  __int128 v165; // xmm1
  __int128 v166; // xmm2
  __m128i *v167; // rcx
  __m128i v168; // xmm0
  __m128i v169; // xmm1
  __m128i v170; // xmm2
  __int128 v171; // xmm0
  __int128 v172; // xmm1
  __int128 v173; // xmm2
  unsigned __int8 v174; // al
  __int64 v175; // rsi
  __int64 v176; // rdi
  _QWORD *v177; // rbx
  __int64 v178; // rdx
  __m128i v179; // krE0_16
  __int64 v180; // rdx
  __int64 v181; // rcx
  __int64 v182; // r8
  __int64 v183; // r9
  int v184; // edx
  __m128i v185; // xmm0
  __m128i v186; // xmm1
  _QWORD *v187; // rsi
  __int64 v188; // rdx
  __int64 v189; // rcx
  __int64 v190; // rdx
  __int128 v191; // xmm0
  __int128 v192; // xmm1
  __int128 v193; // xmm2
  unsigned __int8 v194; // al
  __m128i v195; // xmm0
  __m128i v196; // xmm1
  __m128i v197; // xmm2
  int v198; // r9d
  __m128i v199; // xmm0
  __m128i v200; // xmm1
  __m128i *v201; // rsi
  unsigned __int128 v202; // kr110_16
  __int64 v203; // r15
  __int64 v204; // rdi
  char v205; // r14
  __m128i v206; // xmm0
  __m128i v207; // xmm1
  __m128i v208; // xmm2
  __int8 v209; // al
  unsigned __int64 v210; // rax
  __int64 v211; // rdx
  __int64 v212; // rcx
  unsigned __int64 v213; // r14
  int v214; // edi
  __m128i v215; // xmm0
  __m128i v216; // xmm1
  __int64 v217; // rax
  unsigned int v218; // edx
  __int64 (__fastcall *v219)(unsigned __int64); // rax
  __m128i v220; // xmm0
  __int64 v221; // rcx
  __int64 v222; // rdx
  __int64 v223; // rbx
  __int64 v224; // rsi
  __int64 v225; // rax
  __int64 v226; // rcx
  __m128i v227; // xmm0
  __m128i v228; // xmm1
  __m128i *v229; // r12
  __int64 v230; // rax
  unsigned int v231; // edx
  unsigned __int128 v232; // kr180_16
  _QWORD v233[3]; // [rsp+50h] [rbp-30h] BYREF
  _BYTE v234[24]; // [rsp+68h] [rbp-18h] BYREF
  _QWORD v235[3]; // [rsp+80h] [rbp+0h] BYREF
  _QWORD v236[3]; // [rsp+98h] [rbp+18h] BYREF
  _QWORD v237[3]; // [rsp+B0h] [rbp+30h] BYREF
  _QWORD v238[3]; // [rsp+C8h] [rbp+48h] BYREF
  __m128i v239; // [rsp+E0h] [rbp+60h] BYREF
  __int64 v240; // [rsp+F0h] [rbp+70h]
  __int128 v241; // [rsp+F8h] [rbp+78h] BYREF
  __int64 v242; // [rsp+108h] [rbp+88h]
  __int64 v243; // [rsp+110h] [rbp+90h] BYREF
  __int128 v244; // [rsp+118h] [rbp+98h]
  __int64 v245; // [rsp+128h] [rbp+A8h] BYREF
  unsigned __int128 v246; // [rsp+130h] [rbp+B0h]
  __int64 v247; // [rsp+140h] [rbp+C0h] BYREF
  unsigned __int128 v248; // [rsp+148h] [rbp+C8h]
  __int64 v249; // [rsp+158h] [rbp+D8h] BYREF
  unsigned __int128 v250; // [rsp+160h] [rbp+E0h]
  __m128i v251; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v252; // [rsp+180h] [rbp+100h] BYREF
  int v253; // [rsp+188h] [rbp+108h]
  __int64 v254; // [rsp+190h] [rbp+110h]
  __int64 v255; // [rsp+198h] [rbp+118h]
  __int64 v256; // [rsp+1A0h] [rbp+120h]
  unsigned __int8 *v257; // [rsp+1A8h] [rbp+128h]
  unsigned __int8 *v258; // [rsp+1B0h] [rbp+130h]
  _BYTE *v259; // [rsp+1B8h] [rbp+138h]
  __int64 v260; // [rsp+1C0h] [rbp+140h]
  __int64 v261; // [rsp+1C8h] [rbp+148h]
  __int64 v262; // [rsp+1D0h] [rbp+150h]
  _QWORD *v263; // [rsp+1D8h] [rbp+158h]
  __int64 v264; // [rsp+1E0h] [rbp+160h]
  __int128 *v265; // [rsp+1E8h] [rbp+168h]
  __int64 v266; // [rsp+1F0h] [rbp+170h]
  __int64 v267; // [rsp+1F8h] [rbp+178h]
  const __m128i *v268; // [rsp+200h] [rbp+180h]
  __int64 v269; // [rsp+208h] [rbp+188h]
  __int64 v270; // [rsp+210h] [rbp+190h]
  __int64 v271; // [rsp+218h] [rbp+198h]
  __int64 v272; // [rsp+220h] [rbp+1A0h]
  __int64 v273; // [rsp+228h] [rbp+1A8h]
  _BYTE v274[104]; // [rsp+230h] [rbp+1B0h] BYREF
  __m128i v275; // [rsp+2B8h] [rbp+238h] BYREF
  __int64 v276; // [rsp+2C8h] [rbp+248h]
  __int128 v277; // [rsp+2D0h] [rbp+250h]
  __int128 v278; // [rsp+2E0h] [rbp+260h]
  __int128 v279; // [rsp+2F0h] [rbp+270h]
  __int64 v280; // [rsp+300h] [rbp+280h]
  __int64 v281; // [rsp+308h] [rbp+288h]
  __int64 v282; // [rsp+310h] [rbp+290h]
  _QWORD *v283; // [rsp+318h] [rbp+298h]
  _QWORD *v284; // [rsp+320h] [rbp+2A0h]
  _QWORD *v285; // [rsp+328h] [rbp+2A8h]
  __int64 v286; // [rsp+330h] [rbp+2B0h]
  __int64 v287; // [rsp+338h] [rbp+2B8h]
  __int64 v288; // [rsp+340h] [rbp+2C0h]
  int v289; // [rsp+34Ch] [rbp+2CCh]
  unsigned __int64 v290; // [rsp+350h] [rbp+2D0h]
  __int64 v291; // [rsp+358h] [rbp+2D8h]
  __int64 v292; // [rsp+360h] [rbp+2E0h]
  __int64 v293; // [rsp+368h] [rbp+2E8h]
  __m128i v294; // [rsp+370h] [rbp+2F0h] BYREF
  __m128i v295; // [rsp+380h] [rbp+300h] BYREF
  __m128i v296; // [rsp+390h] [rbp+310h]
  __int128 v297; // [rsp+3A0h] [rbp+320h] BYREF
  __int128 v298; // [rsp+3B0h] [rbp+330h]
  __int128 v299; // [rsp+3C0h] [rbp+340h]
  __int128 *v300; // [rsp+3D0h] [rbp+350h]
  __int64 v301; // [rsp+3D8h] [rbp+358h]
  __m128i v302; // [rsp+3E0h] [rbp+360h] BYREF
  _BYTE v303[112]; // [rsp+3F0h] [rbp+370h] BYREF
  __int128 v304; // [rsp+460h] [rbp+3E0h]
  __m128i v305; // [rsp+470h] [rbp+3F0h]
  __int64 v306; // [rsp+480h] [rbp+400h]
  __int64 v307; // [rsp+488h] [rbp+408h]
  unsigned __int128 v308; // [rsp+490h] [rbp+410h]
  __m128i v309; // [rsp+4A0h] [rbp+420h]
  __m128i v310; // [rsp+4B0h] [rbp+430h]
  __int128 v311; // [rsp+4C0h] [rbp+440h]
  __int128 v312; // [rsp+4D0h] [rbp+450h]
  __int128 v313; // [rsp+4E0h] [rbp+460h]
  __int64 v314; // [rsp+4F0h] [rbp+470h]
  __int64 v315; // [rsp+4F8h] [rbp+478h]
  __int64 v316; // [rsp+500h] [rbp+480h]
  __m128i v317; // [rsp+508h] [rbp+488h]
  __int64 v318; // [rsp+518h] [rbp+498h]
  __int16 v319; // [rsp+520h] [rbp+4A0h]
  __int16 v320; // [rsp+522h] [rbp+4A2h]
  __int128 v321; // [rsp+528h] [rbp+4A8h]
  __int128 v322; // [rsp+538h] [rbp+4B8h]
  __int128 v323; // [rsp+548h] [rbp+4C8h]
  int v324; // [rsp+558h] [rbp+4D8h]
  char v325; // [rsp+55Ch] [rbp+4DCh]
  char v326; // [rsp+55Dh] [rbp+4DDh]
  __m128i v327; // [rsp+55Eh] [rbp+4DEh]
  __int8 v328; // [rsp+56Eh] [rbp+4EEh]
  char v329; // [rsp+56Fh] [rbp+4EFh]
  __m128i v330; // [rsp+570h] [rbp+4F0h] BYREF
  __int64 v331; // [rsp+580h] [rbp+500h]
  _BYTE v332[24]; // [rsp+588h] [rbp+508h] BYREF
  unsigned __int128 v333; // [rsp+5A0h] [rbp+520h] BYREF
  __m128i v334; // [rsp+5B0h] [rbp+530h] BYREF
  __int128 v335; // [rsp+5C0h] [rbp+540h]
  __int128 v336; // [rsp+5D0h] [rbp+550h]
  __int128 v337; // [rsp+5E0h] [rbp+560h] BYREF
  __int128 v338; // [rsp+5F0h] [rbp+570h]
  __m128i v339; // [rsp+600h] [rbp+580h]
  __int128 v340; // [rsp+610h] [rbp+590h]
  __int64 v341; // [rsp+620h] [rbp+5A0h]
  __int64 v342; // [rsp+628h] [rbp+5A8h] BYREF
  __int64 v343; // [rsp+630h] [rbp+5B0h]
  __int64 v344; // [rsp+638h] [rbp+5B8h]
  int v345; // [rsp+64Ch] [rbp+5CCh]
  __m128i v346; // [rsp+650h] [rbp+5D0h] BYREF
  __m256i v347; // [rsp+660h] [rbp+5E0h] BYREF
  __int128 v348; // [rsp+680h] [rbp+600h]
  __int128 v349; // [rsp+690h] [rbp+610h]
  __m128i v350; // [rsp+6A0h] [rbp+620h]
  __m128i v351; // [rsp+6B0h] [rbp+630h]
  _BYTE v352[24]; // [rsp+6C0h] [rbp+640h] BYREF
  __int64 v353; // [rsp+6D8h] [rbp+658h]
  __int64 v354; // [rsp+6E0h] [rbp+660h] BYREF
  __int64 v355; // [rsp+6E8h] [rbp+668h]
  __int64 v356; // [rsp+6F0h] [rbp+670h]
  __int16 v357; // [rsp+6FCh] [rbp+67Ch]
  __int16 v358; // [rsp+6FEh] [rbp+67Eh]
  __m128i v359; // [rsp+700h] [rbp+680h] BYREF
  __int64 v360; // [rsp+710h] [rbp+690h]
  __m128i v361; // [rsp+720h] [rbp+6A0h] BYREF
  __int64 v362; // [rsp+730h] [rbp+6B0h]
  __m128i v363; // [rsp+738h] [rbp+6B8h] BYREF
  __int64 v364; // [rsp+748h] [rbp+6C8h]
  unsigned __int128 v365; // [rsp+750h] [rbp+6D0h] BYREF
  __m128i v366; // [rsp+760h] [rbp+6E0h] BYREF
  __m128i v367; // [rsp+770h] [rbp+6F0h]
  __m128i v368; // [rsp+780h] [rbp+700h]
  __m128i v369; // [rsp+790h] [rbp+710h]
  __m128i v370; // [rsp+7A0h] [rbp+720h]
  __m128i v371; // [rsp+7B0h] [rbp+730h]
  __int128 v372; // [rsp+7C0h] [rbp+740h]
  __int64 v373; // [rsp+7D0h] [rbp+750h]
  unsigned int v374; // [rsp+7DCh] [rbp+75Ch]
  __m128i v375; // [rsp+7E0h] [rbp+760h] BYREF
  __m128i v376; // [rsp+7F0h] [rbp+770h] BYREF
  __int128 v377; // [rsp+800h] [rbp+780h]
  __m128i v378; // [rsp+810h] [rbp+790h] BYREF
  __m128i v379; // [rsp+820h] [rbp+7A0h] BYREF
  __m128i v380; // [rsp+830h] [rbp+7B0h]
  _BYTE v381[104]; // [rsp+840h] [rbp+7C0h] BYREF
  __m128i v382; // [rsp+8A8h] [rbp+828h]
  __m128i v383; // [rsp+8B8h] [rbp+838h] BYREF
  unsigned __int128 v384; // [rsp+8C8h] [rbp+848h] BYREF
  __int64 v385; // [rsp+8D8h] [rbp+858h]
  unsigned __int128 v386; // [rsp+8E8h] [rbp+868h] BYREF
  __int64 v387; // [rsp+8F8h] [rbp+878h]
  __m128i *v388; // [rsp+900h] [rbp+880h]
  char v389; // [rsp+909h] [rbp+889h] BYREF
  char v390; // [rsp+90Ah] [rbp+88Ah]
  char v391; // [rsp+90Bh] [rbp+88Bh]
  char v392; // [rsp+90Ch] [rbp+88Ch]
  char v393; // [rsp+90Dh] [rbp+88Dh]
  char v394; // [rsp+90Eh] [rbp+88Eh]
  char v395; // [rsp+90Fh] [rbp+88Fh]
  __int64 *v396; // [rsp+910h] [rbp+890h]
  char v397; // [rsp+91Bh] [rbp+89Bh] BYREF
  char v398; // [rsp+91Ch] [rbp+89Ch]
  char v399; // [rsp+91Dh] [rbp+89Dh]
  char v400; // [rsp+91Eh] [rbp+89Eh]
  char v401; // [rsp+91Fh] [rbp+89Fh]
  __int64 v402; // [rsp+920h] [rbp+8A0h]
  char v403; // [rsp+92Dh] [rbp+8ADh]
  char v404; // [rsp+92Eh] [rbp+8AEh]
  char v405; // [rsp+92Fh] [rbp+8AFh]
  char v406; // [rsp+930h] [rbp+8B0h]
  char v407; // [rsp+931h] [rbp+8B1h]
  char v408; // [rsp+932h] [rbp+8B2h]
  char v409; // [rsp+933h] [rbp+8B3h] BYREF
  unsigned __int8 v410; // [rsp+934h] [rbp+8B4h] BYREF
  char v411; // [rsp+935h] [rbp+8B5h]
  char v412; // [rsp+936h] [rbp+8B6h]
  unsigned __int8 v413; // [rsp+937h] [rbp+8B7h] BYREF
  __int64 v414; // [rsp+938h] [rbp+8B8h]

  v414 = -2;
  v413 = a3;
  v397 = a4;
  v363 = (__m128i)a5;
  sub_1410257E0(v303);
  v15 = *(_QWORD *)&v303[32];
  v16 = _mm_loadu_si128((const __m128i *)&v303[24]);
  v17 = *(_QWORD *)&v303[40];
  v333 = *(_OWORD *)&v303[48];
  v334 = _mm_loadu_si128((const __m128i *)&v303[64]);
  if ( *(_QWORD *)v303 != -1 )
  {
    *(_OWORD *)&v381[80] = *(_OWORD *)&v303[80];
    *(_QWORD *)&v381[16] = *(_QWORD *)&v303[16];
    *(__m128i *)&v381[24] = v16;
    *(_QWORD *)&v381[40] = *(_QWORD *)&v303[40];
    v18 = _mm_load_si128(&v334);
    *(__m128i *)&v381[48] = _mm_load_si128((const __m128i *)&v333);
    *(__m128i *)&v381[64] = v18;
    *(_OWORD *)v381 = *(_OWORD *)v303;
LABEL_3:
    *(__int128 *)((char *)a1 + 88) = *(_OWORD *)&v381[80];
    *(__int128 *)((char *)a1 + 72) = *(_OWORD *)&v381[64];
    v20 = *(_QWORD *)&v381[8];
    result = *(_QWORD *)v381;
    v21 = *(_OWORD *)&v381[16];
    v22 = *(_OWORD *)&v381[32];
    *(__m128i *)((char *)a1 + 56) = _mm_load_si128((const __m128i *)&v381[48]);
    *(__int128 *)((char *)a1 + 40) = v22;
    *(__int128 *)((char *)a1 + 24) = v21;
    *(__int128 *)((char *)a1 + 8) = __PAIR128__(v20, result);
LABEL_4:
    *((_WORD *)a1 + 52) = 0;
LABEL_5:
    *(_QWORD *)a1 = -1;
    return result;
  }
  if ( *(_QWORD *)&v303[8] != -1 )
  {
    if ( *(_QWORD *)&v303[8] )
      sub_140001660(*(_QWORD *)&v303[16], *(_QWORD *)&v303[8], 1);
    if ( (unsigned __int64)(v15 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      sub_140001660(v17, v15, 1);
  }
  sub_14023D790((__int64)v303, (__int64)a2);
  if ( *(_DWORD *)v303 == -1 )
  {
    sub_140EFE1A0(v381);
    if ( *(_QWORD *)v381 != -1 )
      goto LABEL_3;
  }
  else
  {
    *(_OWORD *)&v381[80] = *(_OWORD *)&v303[80];
    *(_OWORD *)&v381[64] = *(_OWORD *)&v303[64];
    v23 = _mm_loadu_si128((const __m128i *)v303);
    v24 = _mm_loadu_si128((const __m128i *)&v303[16]);
    *(_OWORD *)&v381[48] = *(_OWORD *)&v303[48];
    *(_OWORD *)&v381[32] = *(_OWORD *)&v303[32];
    *(__m128i *)&v381[16] = v24;
    *(__m128i *)v381 = v23;
    if ( v23.m128i_i64[0] != -1 )
      goto LABEL_3;
  }
  sub_141568C20(&v251);
  *(_QWORD *)v303 = &v397;
  *(_QWORD *)&v303[8] = sub_140C9DE00;
  *(_QWORD *)&v25 = &v363;
  *(_QWORD *)&v303[16] = &v363;
  *((_QWORD *)&v25 + 1) = sub_140186EE0;
  *(_QWORD *)&v303[24] = sub_140186EE0;
  sub_1416ABFD0(&v249, &unk_141A39F10, v303);
  v274[0] = v413;
  v402 = v250;
  v333 = v250;
  *(_QWORD *)v303 = v274;
  *(_QWORD *)&v303[8] = sub_140C98D50;
  *(_QWORD *)&v303[16] = &v333;
  *(_QWORD *)&v303[24] = sub_140186EE0;
  sub_1416ABFD0(v381, &unk_141A39D2E, v303);
  sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aStart_0, 5, (__int64)v381);
  if ( v249 )
    sub_140001660(v402, v249, 1);
  if ( !v397 )
  {
    sub_140267190((__int64 *)v381, a6, a7);
    if ( *(_DWORD *)v381 != -1 )
    {
      *(_OWORD *)&v303[80] = *(_OWORD *)&v381[80];
      *(_OWORD *)&v303[64] = *(_OWORD *)&v381[64];
      v148 = _mm_loadu_si128((const __m128i *)v381);
      v149 = _mm_loadu_si128((const __m128i *)&v381[16]);
      *(_OWORD *)&v303[48] = *(_OWORD *)&v381[48];
      *(_OWORD *)&v303[32] = *(_OWORD *)&v381[32];
      *(__m128i *)&v303[16] = v149;
      *(__m128i *)v303 = v148;
      *(_QWORD *)v274 = 0;
      *(_QWORD *)&v274[8] = 1;
      *(_QWORD *)&v274[16] = 0;
      v334.m128i_i64[0] = 1610612768;
      *(_QWORD *)&v333 = v274;
      *((_QWORD *)&v333 + 1) = &off_141A3FE88;
      if ( (unsigned __int8)sub_14104A7D0(v303, &v333) )
        sub_141939040(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v409,
          (unsigned int)&unk_141A3BB68,
          (__int64)&off_141A3FF40);
      v396 = *(__int64 **)&v274[8];
      v402 = *(_QWORD *)v274;
      sub_140C75030(a2, (__int128 *)v413);
      if ( v402 )
        sub_140001660(v396, v402, 1);
      v333 = v25;
      v334.m128i_i64[0] = (__int64)v303;
      v334.m128i_i64[1] = (__int64)sub_14104A7D0;
      sub_1416ABFD0(&v247, &unk_141A39F29, &v333);
      v375.m128i_i8[0] = v413;
      v402 = v248;
      v365 = v248;
      *(_QWORD *)&v333 = &v375;
      *((_QWORD *)&v333 + 1) = sub_140C98D50;
      v334.m128i_i64[0] = (__int64)&v365;
      v334.m128i_i64[1] = (__int64)sub_140186EE0;
      sub_1416ABFD0(v274, &unk_141A39D2E, &v333);
      result = sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aPreflightFaile, 16, (__int64)v274);
      if ( v247 )
        result = sub_140001660(v402, v247, 1);
      *(__int128 *)((char *)a1 + 88) = *(_OWORD *)&v303[80];
      *(__int128 *)((char *)a1 + 72) = *(_OWORD *)&v303[64];
      si128 = (__int128)_mm_load_si128((const __m128i *)v303);
      v151 = (__int128)_mm_load_si128((const __m128i *)&v303[16]);
      v152 = *(_OWORD *)&v303[32];
      *(__int128 *)((char *)a1 + 56) = *(_OWORD *)&v303[48];
      *(__int128 *)((char *)a1 + 40) = v152;
      *(__int128 *)((char *)a1 + 24) = v151;
      *(__int128 *)((char *)a1 + 8) = si128;
      goto LABEL_4;
    }
  }
  v289 = *a8;
  v254 = 2LL * (v289 ^ 1u) + 3;
  v390 = *a9;
  v396 = *(__int64 **)a10;
  v353 = *(_QWORD *)(a10 + 8);
  v282 = *(_QWORD *)(a10 + 16);
  v258 = *(unsigned __int8 **)(a10 + 24);
  v259 = *(_BYTE **)(a10 + 32);
  v26 = *(_QWORD *)(a10 + 40);
  v255 = *a11;
  v256 = a11[1];
  v257 = (unsigned __int8 *)a11[2];
  v27 = _mm_cvtsi32_si128(0x6E6F6974u);
  v28 = _mm_load_si128((const __m128i *)&xmmword_141A384C0);
  v260 = v26 + 24;
  v261 = v26 + 48;
  v262 = v26 + 72;
  v29 = v26 + 96;
  v268 = (const __m128i *)(v26 + 366);
  v264 = v26 + 128;
  v266 = v26 + 152;
  v267 = v26 + 176;
  v283 = (_QWORD *)(v26 + 200);
  v284 = (_QWORD *)(v26 + 224);
  v285 = (_QWORD *)(v26 + 248);
  v269 = v26 + 272;
  v291 = v26;
  v265 = (__int128 *)(v26 + 328);
  v374 = -1;
  v30 = 1;
  v31 = (__m128i *)v303;
  v388 = (__m128i *)a1;
  v300 = a2;
  v263 = (_QWORD *)(v26 + 96);
  while ( 1 )
  {
    if ( (unsigned __int8)v30 > 3u )
    {
LABEL_192:
      nullsub_1(v26);
      v153 = sub_140001650(109, 1);
      if ( !v153 )
        sub_141938D2B(1, 109);
      *(_OWORD *)(v153 + 93) = *(__int128 *)((char *)&xmmword_141A39F8C + 13);
      *(_OWORD *)(v153 + 80) = xmmword_141A39F8C;
      *(_OWORD *)(v153 + 64) = xmmword_141A39F7C;
      *(_OWORD *)(v153 + 48) = xmmword_141A39F6C;
      *(_OWORD *)(v153 + 32) = xmmword_141A39F5C;
      *(_OWORD *)(v153 + 16) = xmmword_141A39F4C;
      *(__m128i *)v153 = _mm_loadu_si128((const __m128i *)&xmmword_141A39F3C);
      *(_QWORD *)&v303[8] = 109;
      *(_QWORD *)&v303[16] = v153;
      *(_QWORD *)&v303[24] = 109;
      *(_QWORD *)v303 = 10;
      *(_QWORD *)&v333 = 0;
      *((_QWORD *)&v333 + 1) = 1;
      v334.m128i_i64[0] = 0;
      *(_QWORD *)&v381[16] = 1610612768;
      *(_QWORD *)v381 = &v333;
      *(_QWORD *)&v381[8] = &off_141A3FE88;
      if ( (unsigned __int8)sub_14104A7D0(v303, v381) )
        sub_141939040(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v409,
          (unsigned int)&unk_141A3BB68,
          (__int64)&off_141A3FF40);
      v396 = *((__int64 **)&v333 + 1);
      v402 = v333;
      sub_140C75030(a2, (__int128 *)v413);
      if ( v402 )
        sub_140001660(v396, v402, 1);
      *(_QWORD *)&v333 = 0;
      *((_QWORD *)&v333 + 1) = 1;
      v334.m128i_i64[0] = 0;
      *(_QWORD *)&v381[16] = 1610612768;
      *(_QWORD *)v381 = &v333;
      *(_QWORD *)&v381[8] = &off_141A3FE88;
      if ( (unsigned __int8)sub_14104A7D0(v303, v381) )
        sub_141939040(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v409,
          (unsigned int)&unk_141A3BB68,
          (__int64)&off_141A3FF40);
      *(_QWORD *)&v274[16] = v334.m128i_i64[0];
      *(__m128i *)v274 = _mm_loadu_si128((const __m128i *)&v333);
      result = sub_140BBE8E0(v413, (int)aRetryExhausted, 15, v274);
      *(__int128 *)((char *)a1 + 88) = *(_OWORD *)&v303[80];
      *(__int128 *)((char *)a1 + 72) = *(_OWORD *)&v303[64];
      v154 = (__int128)_mm_loadu_si128((const __m128i *)v303);
      v155 = (__int128)_mm_loadu_si128((const __m128i *)&v303[16]);
      v156 = *(_OWORD *)&v303[32];
      *(__int128 *)((char *)a1 + 56) = *(_OWORD *)&v303[48];
      *(__int128 *)((char *)a1 + 40) = v156;
      *(__int128 *)((char *)a1 + 24) = v155;
      *(__int128 *)((char *)a1 + 8) = v154;
      *((_WORD *)a1 + 52) = 772;
      goto LABEL_5;
    }
    LOBYTE(v29) = v30 == 3;
    v281 = v29;
    v32 = (unsigned __int8)(v30 + 1);
    if ( v30 == 3 )
      v32 = 3;
    v345 = v32;
    v410 = v30;
    sub_140C75030(a2, (__int128 *)v413);
    v252 = sub_14167FC00(v34, v33, v35, v36);
    v253 = v37;
    v38 = v31;
    sub_140EC0AC0((_DWORD)v31, v254, 0, v289, v390);
    *(_DWORD *)((char *)&v333 + 3) = *(_DWORD *)&v303[12];
    LODWORD(v333) = *(_DWORD *)&v303[9];
    *(_DWORD *)&v274[3] = *(_DWORD *)&v303[20];
    *(_DWORD *)v274 = *(_DWORD *)&v303[17];
    *(_DWORD *)((char *)&v365 + 3) = *(_DWORD *)&v303[28];
    LODWORD(v365) = *(_DWORD *)&v303[25];
    v375.m128i_i32[0] = *(_DWORD *)&v303[33];
    *(__int32 *)((char *)v375.m128i_i32 + 3) = *(_DWORD *)&v303[36];
    *(__int32 *)((char *)v347.m256i_i32 + 3) = *(_DWORD *)&v303[44];
    v347.m256i_i32[0] = *(_DWORD *)&v303[41];
    *(__int32 *)((char *)v294.m128i_i32 + 3) = *(_DWORD *)&v303[52];
    v294.m128i_i32[0] = *(_DWORD *)&v303[49];
    v39 = v303[56];
    *(_DWORD *)((char *)&v277 + 3) = *(_DWORD *)&v303[60];
    LODWORD(v277) = *(_DWORD *)&v303[57];
    if ( *(_QWORD *)v303 != -1 )
      break;
    LODWORD(v386) = v333;
    *(_DWORD *)((char *)&v386 + 3) = *(_DWORD *)((char *)&v333 + 3);
    v361.m128i_i32[0] = *(_DWORD *)v274;
    *(__int32 *)((char *)v361.m128i_i32 + 3) = *(_DWORD *)&v274[3];
    *(_DWORD *)v352 = v365;
    *(_DWORD *)&v352[3] = *(_DWORD *)((char *)&v365 + 3);
    v330.m128i_i32[0] = v375.m128i_i32[0];
    *(__int32 *)((char *)v330.m128i_i32 + 3) = *(__int32 *)((char *)v375.m128i_i32 + 3);
    *(__int32 *)((char *)v359.m128i_i32 + 3) = *(__int32 *)((char *)v347.m256i_i32 + 3);
    v359.m128i_i32[0] = v347.m256i_i32[0];
    *(_DWORD *)&v332[3] = *(__int32 *)((char *)v294.m128i_i32 + 3);
    *(_DWORD *)v332 = v294.m128i_i32[0];
    LODWORD(v354) = v277;
    *(_DWORD *)((char *)&v354 + 3) = *(_DWORD *)((char *)&v277 + 3);
    DWORD1(v277) = *(_DWORD *)((char *)&v333 + 3);
    *(_DWORD *)((char *)&v277 + 1) = v386;
    HIDWORD(v277) = *(_DWORD *)&v274[3];
    *(_DWORD *)((char *)&v277 + 9) = v361.m128i_i32[0];
    DWORD1(v278) = *(_DWORD *)((char *)&v365 + 3);
    *(_DWORD *)((char *)&v278 + 1) = *(_DWORD *)v352;
    HIDWORD(v278) = *(__int32 *)((char *)v375.m128i_i32 + 3);
    *(_DWORD *)((char *)&v278 + 9) = v330.m128i_i32[0];
    DWORD1(v279) = *(__int32 *)((char *)v359.m128i_i32 + 3);
    *(_DWORD *)((char *)&v279 + 1) = v347.m256i_i32[0];
    HIDWORD(v279) = *(_DWORD *)&v332[3];
    *(_DWORD *)((char *)&v279 + 9) = v294.m128i_i32[0];
    HIDWORD(v280) = *(_DWORD *)((char *)&v354 + 3);
    *(_DWORD *)((char *)&v280 + 1) = v354;
    v389 = v303[56];
    LOBYTE(v277) = v303[8];
    BYTE8(v277) = v303[16];
    LOBYTE(v278) = v303[24];
    BYTE8(v278) = v303[32];
    LOBYTE(v279) = v303[40];
    BYTE8(v279) = v303[48];
    LOBYTE(v280) = v303[56];
    v408 = 1;
    v40 = sub_14167FD50(&v252);
    a2 = v300;
    *(_OWORD *)v381 = 0x3E8 * (unsigned __int128)(unsigned __int64)v40 + v41 / 0xF4240uLL;
    *(_QWORD *)v303 = &v410;
    *(_QWORD *)&v303[8] = sub_1416B9630;
    *(_QWORD *)&v303[16] = v381;
    *(_QWORD *)&v303[24] = sub_1416B95D0;
    *(_QWORD *)&v303[32] = &v389;
    *(_QWORD *)&v303[40] = sub_1416BCC50;
    v408 = 1;
    sub_1416ABFD0(&v245, &unk_141A39FC6, v31);
    v274[0] = v413;
    v402 = v246;
    v333 = v246;
    *(_QWORD *)v303 = v274;
    *(_QWORD *)&v303[8] = sub_140C98D50;
    *(_QWORD *)&v303[16] = &v333;
    *(_QWORD *)&v303[24] = sub_140186EE0;
    sub_1416ABFD0(v381, &unk_141A39D2E, v31);
    sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aStopComplete, 13, (__int64)v381);
    if ( v245 )
      sub_140001660(v402, v245, 1);
    v408 = 1;
    sub_140C75030(a2, (__int128 *)v413);
    v361.m128i_i64[0] = *v396;
    v42 = (__int64 *)v396[1];
    v43 = *v42;
    v44 = v42[1];
    if ( v44 == 3 && !(*(_WORD *)v43 ^ 0x6C61 | *(unsigned __int8 *)(v43 + 2) ^ 0x6C) )
    {
      v51 = v396[2];
      v52 = v396[3];
      v53 = 0;
      if ( *(_QWORD *)v396[4] != -2 )
        v53 = v396[4];
      v408 = 1;
      sub_140F51460(v31, v51, v52, (__int64)&v361, (__int64)&unk_141A3ADB8, v39, v53);
      v48 = *(_QWORD *)v303;
      v365 = *(_OWORD *)&v303[8];
      v366 = *(__m128i *)&v303[24];
      v367 = *(__m128i *)&v303[40];
      v368 = *(__m128i *)&v303[56];
      v369.m128i_i64[0] = *(_QWORD *)&v303[72];
      if ( *(_QWORD *)v303 == -1 )
      {
        v375 = (__m128i)v365;
        v376 = v366;
        v377 = (__int128)v367;
        v378 = v368;
        v379.m128i_i64[0] = v369.m128i_i64[0];
        a1 = (__int128 *)v388;
        if ( *(_QWORD *)v396[5] != -1 )
        {
          *(_QWORD *)&v365 = v396[5];
          *(_QWORD *)v303 = &v365;
          *(_QWORD *)&v303[8] = sub_140369D80;
          sub_1416ABFD0(&v386, &unk_141A3ADE8, v31);
          v55 = v379.m128i_i64[0];
          if ( v379.m128i_i64[0] == v378.m128i_i64[0] )
            sub_14190FDC0(&v378);
          v56 = v378.m128i_i64[1];
          v57 = 3 * v55;
          *(_QWORD *)(v378.m128i_i64[1] + 8 * v57 + 16) = v387;
          *(_OWORD *)(v56 + 8 * v57) = v386;
          v379.m128i_i64[0] = v55 + 1;
        }
        *(_QWORD *)&v381[72] = v379.m128i_i64[0];
        v58 = _mm_load_si128(&v376);
        *(__m128i *)&v381[56] = v378;
        *(_OWORD *)&v381[40] = v377;
        *(__m128i *)&v381[24] = v58;
        *(__m128i *)&v381[8] = v375;
LABEL_41:
        v350.m128i_i64[0] = *(_QWORD *)&v381[72];
        v59 = _mm_loadu_si128((const __m128i *)&v381[24]);
        v294 = *(__m128i *)&v381[8];
        v295 = v59;
        v296 = *(__m128i *)&v381[40];
        v297 = *(_OWORD *)&v381[56];
        *(_QWORD *)&v298 = *(_QWORD *)&v381[72];
        v347.m256i_i64[0] = 2;
        v60 = *v258;
        v61 = *(_QWORD *)(v353 + 24);
        v392 = 1;
        sub_140D8FC20((unsigned int)&v354, v61, v282, v60, 0);
        if ( !*v259 && !v356 )
        {
          v405 = 1;
          sub_140D9A5F0((__int64)v38, v353);
          sub_140D90850(v381, v353, v38);
          v405 = 1;
          sub_1407ADB20(v38);
          if ( *(_QWORD *)v381 != -1 )
          {
            if ( *(_QWORD *)v381 )
              sub_140001660(*(_QWORD *)&v381[8], *(_QWORD *)v381, 1);
            goto LABEL_43;
          }
          v405 = 1;
          sub_140D8B020(&v365, v353);
          if ( (_QWORD)v365 == -1 )
          {
            v341 = v298;
            v340 = v297;
            v339 = v296;
            v338 = (__int128)v295;
            v337 = (__int128)v294;
            v147 = _mm_loadu_si128((const __m128i *)&v347.m256i_u64[2]);
            v333 = (unsigned __int128)_mm_loadu_si128((const __m128i *)&v347);
            v334 = v147;
            v335 = v348;
            v336 = v349;
            sub_1418F44E0((__m128i *)v274, (const __m128i *)&v333, 0x88u);
            v275.m128i_i64[0] = 0;
            v275.m128i_i64[1] = 8;
            v276 = 0;
            sub_140025860(&v354);
            goto LABEL_113;
          }
          *(_QWORD *)&v381[16] = v366.m128i_i64[0];
          *(_OWORD *)v381 = v365;
          v375.m128i_i64[0] = (__int64)v381;
          v375.m128i_i64[1] = (__int64)sub_1400015F0;
          sub_1416ABFD0(v38, &unk_141A3AE0F, &v375);
          *(_QWORD *)&v274[32] = *(_QWORD *)&v303[16];
          *(__m128i *)&v274[16] = _mm_loadu_si128((const __m128i *)v303);
          *(_QWORD *)&v274[8] = 10;
          *(_QWORD *)v274 = -1;
          if ( *(_QWORD *)v381 )
            sub_140001660(*(_QWORD *)&v381[8], *(_QWORD *)v381, 1);
          v64 = v355;
          v68 = v354;
          if ( v354 )
LABEL_50:
            sub_140001660(v64, 32 * v68, 8);
LABEL_112:
          sub_140035660(&v294);
          goto LABEL_113;
        }
LABEL_43:
        v405 = 1;
        sub_140D8F4C0((_DWORD)v38, v353, v282, (unsigned int)&unk_141A3AE3D, 17, v39, 0);
        *(_OWORD *)v381 = *(_OWORD *)&v303[8];
        *(_OWORD *)&v381[16] = *(_OWORD *)&v303[24];
        *(_OWORD *)&v381[32] = *(_OWORD *)&v303[40];
        *(_OWORD *)&v381[48] = *(_OWORD *)&v303[56];
        *(_OWORD *)&v381[64] = *(_OWORD *)&v303[72];
        *(_QWORD *)&v381[80] = *(_QWORD *)&v303[88];
        if ( *(_QWORD *)v303 != -1 )
        {
          *(_QWORD *)&v274[96] = *(_QWORD *)&v381[80];
          *(_OWORD *)&v274[80] = *(_OWORD *)&v381[64];
          v62 = _mm_load_si128((const __m128i *)v381);
          v63 = _mm_load_si128((const __m128i *)&v381[16]);
          *(_OWORD *)&v274[64] = *(_OWORD *)&v381[48];
          *(_OWORD *)&v274[48] = *(_OWORD *)&v381[32];
          *(__m128i *)&v274[32] = v63;
          *(__m128i *)&v274[16] = v62;
          *(_QWORD *)&v274[8] = *(_QWORD *)v303;
          *(_QWORD *)v274 = -1;
          v64 = v355;
          v65 = v356;
          if ( v356 )
          {
            v66 = (_QWORD *)(v355 + 8);
            do
            {
              v67 = *(v66 - 1);
              if ( v67 )
                sub_140001660(*v66, v67, 1);
              v66 += 4;
              --v65;
            }
            while ( v65 );
          }
          v68 = v354;
          if ( v354 )
            goto LABEL_50;
          goto LABEL_112;
        }
        v380.m128i_i64[0] = *(_QWORD *)&v381[80];
        v379 = *(__m128i *)&v381[64];
        v69 = _mm_load_si128((const __m128i *)v381);
        v70 = _mm_load_si128((const __m128i *)&v381[16]);
        v378 = *(__m128i *)&v381[48];
        v377 = *(_OWORD *)&v381[32];
        v376 = v70;
        v375 = v69;
        v71 = v295.m128i_i64[0];
        v72 = v291;
        if ( v295.m128i_i64[0] )
        {
          v71 = 24 * v295.m128i_i64[0];
          v73 = 0;
          while ( *(_QWORD *)(v294.m128i_i64[1] + v73 + 16) != 20
               || _mm_movemask_epi8(
                    _mm_and_si128(
                      _mm_cmpeq_epi8(
                        _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v294.m128i_i64[1] + v73 + 8) + 16LL)),
                        v27),
                      _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v294.m128i_i64[1] + v73 + 8)), v28))) != 0xFFFF )
          {
            v73 += 24;
            if ( v71 == v73 )
              goto LABEL_57;
          }
        }
        else
        {
LABEL_57:
          nullsub_1(v71);
          v74 = (__m128i *)sub_140001650(20, 1);
          if ( !v74 )
          {
            v407 = 1;
            v406 = 1;
            sub_141938D2B(1, 20);
          }
          *v74 = _mm_loadu_si128(&xmmword_141A3AD99);
          v402 = (__int64)v74;
          v74[1].m128i_i32[0] = 1852795252;
          v75 = v295.m128i_i64[0];
          if ( v295.m128i_i64[0] == v294.m128i_i64[0] )
            sub_14190FDC0(&v294);
          v76 = v294.m128i_i64[1];
          v77 = 3 * v75;
          *(_QWORD *)(v294.m128i_i64[1] + 8 * v77) = 20;
          *(_QWORD *)(v76 + 8 * v77 + 8) = v402;
          *(_QWORD *)(v76 + 8 * v77 + 16) = 20;
          v295.m128i_i64[0] = v75 + 1;
        }
        v79 = v376.m128i_i64[1];
        v78 = v376.m128i_i64[0];
        v80 = v298;
        if ( v376.m128i_i64[1] <= (_QWORD)v297 - (_QWORD)v298 )
        {
          if ( v376.m128i_i64[1] )
          {
            v81 = *((_QWORD *)&v297 + 1);
LABEL_64:
            v364 = v80;
            v82 = (__m128i *)(v81 + 24 * v80);
            v83 = -v79;
            v402 = 0;
            do
            {
              sub_1416AC440(v38, v78);
              v82[1].m128i_i64[0] = *(_QWORD *)&v303[16];
              *v82 = _mm_loadu_si128((const __m128i *)v303);
              v82 = (__m128i *)((char *)v82 + 24);
              v78 += 24;
              --v402;
            }
            while ( v83 != v402 );
            v80 = v364 - v402;
          }
          *(_QWORD *)&v298 = v80;
          v84 = *(_DWORD *)(v72 + 360);
          v407 = 1;
          v406 = 1;
          sub_1403F7250(v332, v72);
          sub_1403F1200(v381, v260);
          v360 = *(_QWORD *)&v381[16];
          v359 = _mm_loadu_si128((const __m128i *)v381);
          v85 = *(_BYTE *)(v72 + 122);
          v86 = *(_WORD *)(v72 + 120);
          sub_1416AC440(v352, v261);
          sub_1416AC440(&v361, v262);
          if ( *v263 == -1 )
          {
            v87 = -1;
          }
          else
          {
            sub_1416AC440(&v386, v263);
            v87 = v386;
            v330 = _mm_loadu_si128((const __m128i *)((char *)&v386 + 8));
          }
          v381[74] = v85;
          *(_WORD *)&v381[72] = v86;
          *(_OWORD *)v381 = *(_OWORD *)v352;
          *(_QWORD *)&v381[16] = *(_QWORD *)&v352[16];
          *(_QWORD *)&v381[40] = v362;
          *(__m128i *)&v381[24] = v361;
          *(_QWORD *)&v381[48] = v87;
          *(__m128i *)&v381[56] = _mm_load_si128(&v330);
          if ( *(_BYTE *)(v72 + 365) == 1 )
          {
            v88 = (int)v268;
            v302 = _mm_loadu_si128(v268);
            LOBYTE(v88) = 1;
            LODWORD(v402) = v88;
          }
          else
          {
            LODWORD(v402) = 0;
          }
          v89 = v84;
          v90 = v72;
          v91 = *(_BYTE *)(v72 + 364);
          LOBYTE(v364) = *(_BYTE *)(v90 + 382);
          sub_1403F7D40(&v330, v264);
          v93 = *(_BYTE *)(v90 + 383);
          if ( *(_QWORD *)(v90 + 152) == -1 )
          {
            v97 = -1;
          }
          else
          {
            v273 = *(_QWORD *)(v90 + 296);
            sub_1416AC440(v352, v266);
            sub_1416AC440(&v361, v267);
            v94 = -1;
            v95 = -1;
            if ( *v283 != -1 )
            {
              sub_1416AC440(&v386, v283);
              v286 = *((_QWORD *)&v386 + 1);
              v95 = v386;
              v270 = v387;
            }
            v292 = v95;
            if ( *v284 != -1 )
            {
              sub_1416AC440(&v386, v284);
              v287 = *((_QWORD *)&v386 + 1);
              v94 = v386;
              v271 = v387;
            }
            v293 = v94;
            v90 = -1;
            v96 = *v285 == -1;
            v301 = -1;
            if ( !v96 )
            {
              sub_1416AC440(&v386, v285);
              v288 = *((_QWORD *)&v386 + 1);
              v301 = v386;
              v272 = v387;
            }
            v357 = *(_WORD *)(v291 + 304);
            v358 = *(_WORD *)(v291 + 306);
            if ( *(_QWORD *)(v291 + 272) != -1 )
            {
              sub_1416AC440(&v386, v269);
              v90 = v386;
              v346 = _mm_loadu_si128((const __m128i *)((char *)&v386 + 8));
            }
            v97 = *(_QWORD *)v352;
            v365 = *(_OWORD *)&v352[8];
            v367.m128i_i64[0] = v362;
            v366 = _mm_loadu_si128(&v361);
            v92 = v273;
          }
          v98 = *(_OWORD *)(v291 + 312);
          v99 = *v265;
          v323 = v265[1];
          v322 = v99;
          v324 = v89;
          *(_OWORD *)v303 = *(_OWORD *)v332;
          *(_QWORD *)&v303[16] = *(_QWORD *)&v332[16];
          *(_QWORD *)&v303[40] = v360;
          *(__m128i *)&v303[24] = v359;
          v304 = *(_OWORD *)&v381[64];
          *(_OWORD *)&v303[96] = *(_OWORD *)&v381[48];
          *(_OWORD *)&v303[80] = *(_OWORD *)&v381[32];
          *(_OWORD *)&v303[64] = *(_OWORD *)&v381[16];
          *(_OWORD *)&v303[48] = *(_OWORD *)v381;
          v325 = v91;
          v326 = v402;
          v327 = v302;
          v328 = v364;
          v306 = v331;
          v305 = v330;
          v329 = v93;
          v307 = v97;
          v310.m128i_i64[0] = v367.m128i_i64[0];
          v309 = v366;
          v308 = v365;
          v310.m128i_i64[1] = v292;
          *(_QWORD *)&v311 = v286;
          *((_QWORD *)&v311 + 1) = v270;
          *(_QWORD *)&v312 = v293;
          *((_QWORD *)&v312 + 1) = v287;
          *(_QWORD *)&v313 = v271;
          *((_QWORD *)&v313 + 1) = v301;
          v314 = v288;
          v315 = v272;
          v316 = v90;
          v317 = v346;
          v318 = v92;
          v319 = v357;
          v320 = v358;
          v321 = v98;
          if ( v375.m128i_i64[0] == 1 )
          {
            if ( v378.m128i_i8[8] )
              v325 = 0;
          }
          else
          {
            v325 = 1;
            v328 = v378.m128i_i8[8];
          }
          v100 = _mm_load_si128(&v376);
          v349 = (__int128)v378;
          v348 = v377;
          *(__m128i *)&v347.m256i_u64[2] = v100;
          *(__m128i *)v347.m256i_i8 = v375;
          sub_140D90850(&v386, v353, v38);
          v101 = v386;
          if ( (_QWORD)v386 == -1 )
          {
            v373 = v298;
            v372 = v297;
            v371 = v296;
            v370 = v295;
            v369 = v294;
            v106 = _mm_load_si128(&v376);
            v368 = v378;
            v367 = (__m128i)v377;
            v366 = v106;
            v365 = (unsigned __int128)v375;
            v385 = v380.m128i_i64[0];
            v384 = (unsigned __int128)_mm_loadu_si128(&v379);
            sub_1418F44E0((__m128i *)v381, (const __m128i *)&v365, 0x88u);
            sub_1418F44E0((__m128i *)v274, (const __m128i *)v381, 0xA0u);
            v407 = 0;
            v406 = 0;
            sub_1407ADB20(v38);
          }
          else
          {
            v366.m128i_i64[0] = v387;
            v365 = v386;
            v361.m128i_i64[0] = (__int64)&v365;
            v361.m128i_i64[1] = (__int64)sub_1400015F0;
            sub_1416ABFD0(v381, &unk_141A3AE0F, &v361);
            *(_QWORD *)&v274[32] = *(_QWORD *)&v381[16];
            *(__m128i *)&v274[16] = _mm_loadu_si128((const __m128i *)v381);
            *(_QWORD *)&v274[8] = 10;
            *(_QWORD *)v274 = -1;
            if ( (_QWORD)v365 )
              sub_140001660(*((_QWORD *)&v365 + 1), v365, 1);
            v407 = 0;
            v406 = 1;
            sub_1407ADB20(v38);
            v102 = v379.m128i_i64[1];
            v103 = v380.m128i_i64[0];
            if ( v380.m128i_i64[0] )
            {
              v104 = (_QWORD *)(v379.m128i_i64[1] + 8);
              do
              {
                v105 = *(v104 - 1);
                if ( v105 )
                  sub_140001660(*v104, v105, 1);
                v104 += 3;
                --v103;
              }
              while ( v103 );
            }
            if ( v379.m128i_i64[0] )
              sub_140001660(v102, 24 * v379.m128i_i64[0], 8);
          }
          v107 = v355;
          v108 = v356;
          if ( v356 )
          {
            v109 = (_QWORD *)(v355 + 8);
            do
            {
              v110 = *(v109 - 1);
              if ( v110 )
                sub_140001660(*v109, v110, 1);
              v109 += 4;
              --v108;
            }
            while ( v108 );
          }
          if ( v354 )
            sub_140001660(v107, 32 * v354, 8);
          a1 = (__int128 *)v388;
          a2 = v300;
          if ( v101 == -1 )
            goto LABEL_113;
          if ( v347.m256i_i64[0] != 2 )
            sub_140BAD350(&v347);
          goto LABEL_112;
        }
        v407 = 1;
        v406 = 1;
        sub_14190D590((unsigned int)&v297, v298, v376.m128i_i32[2], 8, 24);
        v81 = *((_QWORD *)&v297 + 1);
        v80 = v298;
        goto LABEL_64;
      }
      *(_OWORD *)&v381[80] = *(_OWORD *)&v303[80];
      *(_QWORD *)&v381[72] = v369.m128i_i64[0];
      v54 = _mm_load_si128(&v366);
      *(__m128i *)&v381[56] = v368;
      *(__m128i *)&v381[40] = v367;
      *(__m128i *)&v381[24] = v54;
      *(_OWORD *)&v381[8] = v365;
      a1 = (__int128 *)v388;
    }
    else
    {
      v45 = (_QWORD *)v396[2];
      v46 = v396[3];
      v47 = 0;
      if ( *(_QWORD *)v396[4] != -2 )
        v47 = v396[4];
      v408 = 1;
      sub_140F58A10((unsigned __int64)v381, v45, v46, v43, v44, (__int64)&v361, (__int64)&unk_141A3ADB8, v39, v47);
      v48 = *(_QWORD *)v381;
      a1 = (__int128 *)v388;
      if ( *(_QWORD *)v381 == -1 )
        goto LABEL_41;
    }
    v350.m128i_i64[0] = *(_QWORD *)&v381[72];
    v349 = *(_OWORD *)&v381[56];
    v348 = *(_OWORD *)&v381[40];
    v347 = *(__m256i *)&v381[8];
    *(_OWORD *)&v274[88] = *(_OWORD *)&v381[80];
    *(_QWORD *)&v274[80] = *(_QWORD *)&v381[72];
    v49 = _mm_load_si128((const __m128i *)&v347);
    v50 = _mm_load_si128((const __m128i *)&v347.m256i_u64[2]);
    *(_OWORD *)&v274[64] = *(_OWORD *)&v381[56];
    *(_OWORD *)&v274[48] = *(_OWORD *)&v381[40];
    *(__m128i *)&v274[32] = v50;
    *(__m128i *)&v274[16] = v49;
    *(_QWORD *)&v274[8] = v48;
    *(_QWORD *)v274 = -1;
LABEL_113:
    *(_QWORD *)&v303[48] = v280;
    *(_OWORD *)&v303[32] = v279;
    *(_OWORD *)&v303[16] = v278;
    *(_OWORD *)v303 = v277;
    v399 = 1;
    sub_140EC14F0(&v294, v38);
    sub_1418F44E0(v38, (const __m128i *)v274, 0xA0u);
    v313 = v299;
    v312 = v298;
    v114 = _mm_loadu_si128(&v294);
    v115 = _mm_loadu_si128(&v295);
    v311 = v297;
    v310 = v296;
    v309 = v115;
    v308 = (unsigned __int128)v114;
    if ( *(_QWORD *)v303 == -1 )
    {
      v364 = -1;
      if ( (_DWORD)v308 != -1 )
      {
        v370 = *(__m128i *)&v274[88];
        v369 = *(__m128i *)&v274[72];
        v368 = *(__m128i *)&v274[56];
        v367 = *(__m128i *)&v274[40];
        v366 = *(__m128i *)&v274[24];
        v365 = *(_OWORD *)&v274[8];
        v338 = v299;
        v337 = v298;
        v336 = v297;
        v335 = (__int128)v296;
        v334 = v295;
        v333 = (unsigned __int128)v294;
        *(_QWORD *)v381 = &v365;
        *(_QWORD *)&v381[8] = sub_14104A7D0;
        *(_QWORD *)&v381[16] = &v333;
        *(_QWORD *)&v381[24] = sub_14104A7D0;
        sub_1416ABFD0(&v241, &unk_141A3A21C, v381);
        *(_OWORD *)&v381[8] = v241;
        *(_QWORD *)&v381[24] = v242;
        *(_QWORD *)v381 = 10;
        v347.m256i_i64[0] = 0;
        *(_OWORD *)&v347.m256i_u64[1] = 1u;
        v376.m128i_i64[0] = 1610612768;
        v375.m128i_i64[0] = (__int64)&v347;
        v375.m128i_i64[1] = (__int64)&off_141A3FE88;
        if ( (unsigned __int8)sub_14104A7D0(v381, &v375) )
          sub_141939040(
            (unsigned int)aADisplayImplem_7,
            55,
            (unsigned int)&v409,
            (unsigned int)&unk_141A3BB68,
            (__int64)&off_141A3FF40);
        v396 = (__int64 *)v347.m256i_i64[1];
        v402 = v347.m256i_i64[0];
        sub_140C75030(a2, (__int128 *)v413);
        if ( v402 )
          sub_140001660(v396, v402, 1);
        v375.m128i_i64[0] = (__int64)&v410;
        v375.m128i_i64[1] = (__int64)sub_1416B9630;
        v376.m128i_i64[0] = (__int64)v381;
        v376.m128i_i64[1] = (__int64)sub_14104A7D0;
        sub_1416ABFD0(v235, &unk_141A3A180, &v375);
        sub_140BBE8E0(v413, (int)aReconcileFaile, 16, v235);
        *(__int128 *)((char *)a1 + 88) = *(_OWORD *)&v381[80];
        *(__int128 *)((char *)a1 + 72) = *(_OWORD *)&v381[64];
        v191 = *(_OWORD *)v381;
        v192 = *(_OWORD *)&v381[16];
        v193 = *(_OWORD *)&v381[32];
        *(__int128 *)((char *)a1 + 56) = *(_OWORD *)&v381[48];
        *(__int128 *)((char *)a1 + 40) = v193;
        *(__int128 *)((char *)a1 + 24) = v192;
        *(__int128 *)((char *)a1 + 8) = v191;
        v194 = v410;
        *((_BYTE *)a1 + 104) = 2;
        *((_BYTE *)a1 + 105) = v194;
        *(_QWORD *)a1 = -1;
        sub_140BAC840(&v333);
        return sub_140BAC840(&v365);
      }
      v338 = *(_OWORD *)&v274[88];
      v337 = *(_OWORD *)&v274[72];
      v130 = _mm_loadu_si128((const __m128i *)&v274[24]);
      v336 = *(_OWORD *)&v274[56];
      v335 = *(_OWORD *)&v274[40];
      v334 = v130;
      v333 = *(_OWORD *)&v274[8];
      v131 = DWORD2(v308);
      v132 = BYTE12(v308);
      v133 = sub_14167FC00(-1, v111, v112, v113);
      if ( v397 )
        goto LABEL_202;
      if ( v131 )
      {
        if ( v410 > 2u )
          goto LABEL_202;
      }
      else if ( v410 > 2u || !v132 )
      {
        goto LABEL_202;
      }
      if ( v374 == -1 )
      {
        v290 = sub_1416A1240(v133, v134, 12, 0, (__int64)&off_141A3EA90);
        v374 = v145;
      }
      else
      {
        v143 = v134 < v374;
        v144 = v133 < v290;
        if ( v133 == v290 )
          v144 = v143;
        if ( !v144 )
        {
LABEL_202:
          *(_QWORD *)&v365 = 0;
          *((_QWORD *)&v365 + 1) = 1;
          v366.m128i_i64[0] = 0;
          *(_QWORD *)&v381[16] = 1610612768;
          *(_QWORD *)v381 = &v365;
          *(_QWORD *)&v381[8] = &off_141A3FE88;
          if ( (unsigned __int8)sub_14104A7D0(&v333, v381) )
            sub_141939040(
              (unsigned int)aADisplayImplem_7,
              55,
              (unsigned int)&v409,
              (unsigned int)&unk_141A3BB68,
              (__int64)&off_141A3FF40);
          v396 = *((__int64 **)&v365 + 1);
          v402 = v365;
          sub_140C75030(a2, (__int128 *)v413);
          if ( v402 )
            sub_140001660(v396, v402, 1);
          *(_QWORD *)v381 = &v410;
          *(_QWORD *)&v381[8] = sub_1416B9630;
          *(_QWORD *)&v381[16] = &v333;
          *(_QWORD *)&v381[24] = sub_14104A7D0;
          sub_1416ABFD0(v237, &unk_141A3A180, v381);
          sub_140BBE8E0(v413, (int)aReconcileFaile, 16, v237);
          *(__int128 *)((char *)a1 + 88) = v338;
          *(__int128 *)((char *)a1 + 72) = v337;
          v164 = (__int128)_mm_load_si128((const __m128i *)&v333);
          v165 = (__int128)_mm_load_si128(&v334);
          v166 = v335;
          *(__int128 *)((char *)a1 + 56) = v336;
          *(__int128 *)((char *)a1 + 40) = v166;
          *(__int128 *)((char *)a1 + 24) = v165;
          *(__int128 *)((char *)a1 + 8) = v164;
          result = v410;
          *((_BYTE *)a1 + 104) = 2;
          *((_BYTE *)a1 + 105) = result;
          goto LABEL_5;
        }
      }
      *(_QWORD *)&v365 = 0;
      *((_QWORD *)&v365 + 1) = 1;
      v366.m128i_i64[0] = 0;
      *(_QWORD *)&v381[16] = 1610612768;
      *(_QWORD *)v381 = &v365;
      *(_QWORD *)&v381[8] = &off_141A3FE88;
      if ( (unsigned __int8)sub_14104A7D0(&v333, v381) )
        sub_141939040(
          (unsigned int)aADisplayImplem_7,
          55,
          (unsigned int)&v409,
          (unsigned int)&unk_141A3BB68,
          (__int64)&off_141A3FF40);
      v376.m128i_i64[0] = v366.m128i_i64[0];
      v375 = _mm_loadu_si128((const __m128i *)&v365);
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        *(_QWORD *)&v365 = &v413;
        *((_QWORD *)&v365 + 1) = sub_140C98D50;
        v366.m128i_i64[0] = (__int64)&v410;
        v366.m128i_i64[1] = (__int64)sub_1416B9630;
        v367.m128i_i64[0] = (__int64)&v375;
        v367.m128i_i64[1] = (__int64)sub_1400015F0;
        *(_QWORD *)&v381[48] = 2;
        *(_QWORD *)&v381[56] = aCodexmateLibCo_31;
        *(_QWORD *)&v381[64] = 45;
        *(_QWORD *)&v381[80] = &unk_141A3A1B1;
        *(_QWORD *)&v381[88] = &v365;
        *(_QWORD *)v381 = 0;
        *(_QWORD *)&v381[8] = aCodexmateLibCo_31;
        *(_OWORD *)&v381[16] = 0x2Du;
        *(_QWORD *)&v381[32] = aSrcCoreRelayRo_0;
        *(_QWORD *)&v381[40] = 35;
        *(_QWORD *)&v381[72] = 0x12E00000001LL;
        sub_1414D53A0(&v409, v381);
      }
      sub_140C75030(a2, (__int128 *)v413);
      *(_QWORD *)v381 = &v410;
      *(_QWORD *)&v381[8] = sub_1416B9630;
      *(_QWORD *)&v381[16] = &v375;
      *(_QWORD *)&v381[24] = sub_1400015F0;
      sub_1416ABFD0(&v243, &unk_141A3A180, v381);
      LOBYTE(v386) = v413;
      v402 = v244;
      *(_OWORD *)v347.m256i_i8 = v244;
      *(_QWORD *)v381 = &v386;
      *(_QWORD *)&v381[8] = sub_140C98D50;
      *(_QWORD *)&v381[16] = &v347;
      *(_QWORD *)&v381[24] = sub_140186EE0;
      sub_1416ABFD0(&v365, &unk_141A39D2E, v381);
      sub_14019B500((unsigned int)aRouterTransiti_1, 17, (unsigned int)aReconcileRetry, 15, (__int64)&v365);
      v31 = v38;
      if ( v243 )
        sub_140001660(v402, v243, 1);
      v146 = v281;
      if ( v375.m128i_i64[0] )
        sub_140001660(v375.m128i_i64[1], v375.m128i_i64[0], 1);
      sub_140BAC840(&v333);
      v30 = v345;
      if ( (v146 & 1) != 0 )
        goto LABEL_192;
    }
    else
    {
      if ( (_DWORD)v308 != -1 )
      {
        v364 = *(_QWORD *)v303;
        *(_OWORD *)&v381[80] = v299;
        *(_OWORD *)&v381[64] = v298;
        *(_OWORD *)&v381[48] = v297;
        *(__m128i *)&v381[32] = v296;
        *(__m128i *)&v381[16] = v295;
        *(__m128i *)v381 = v294;
        *(_QWORD *)&v365 = 0;
        *((_QWORD *)&v365 + 1) = 1;
        v366.m128i_i64[0] = 0;
        v334.m128i_i64[0] = 1610612768;
        *(_QWORD *)&v333 = &v365;
        *((_QWORD *)&v333 + 1) = &off_141A3FE88;
        if ( (unsigned __int8)sub_14104A7D0(v381, &v333) )
          sub_141939040(
            (unsigned int)aADisplayImplem_7,
            55,
            (unsigned int)&v409,
            (unsigned int)&unk_141A3BB68,
            (__int64)&off_141A3FF40);
        v396 = *((__int64 **)&v365 + 1);
        v402 = v365;
        sub_140C75030(a2, (__int128 *)v413);
        if ( v402 )
          sub_140001660(v396, v402, 1);
        *(_QWORD *)&v333 = &v410;
        *((_QWORD *)&v333 + 1) = sub_1416B9630;
        v334.m128i_i64[0] = (__int64)v381;
        v334.m128i_i64[1] = (__int64)sub_14104A7D0;
        sub_1416ABFD0(v236, &unk_141A3A180, &v333);
        sub_140BBE8E0(v413, (int)aSettleFailed, 13, v236);
        *(__int128 *)((char *)a1 + 88) = *(_OWORD *)&v381[80];
        *(__int128 *)((char *)a1 + 72) = *(_OWORD *)&v381[64];
        v171 = (__int128)_mm_load_si128((const __m128i *)v381);
        v172 = (__int128)_mm_load_si128((const __m128i *)&v381[16]);
        v173 = *(_OWORD *)&v381[32];
        *(__int128 *)((char *)a1 + 56) = *(_OWORD *)&v381[48];
        *(__int128 *)((char *)a1 + 40) = v173;
        *(__int128 *)((char *)a1 + 24) = v172;
        *(__int128 *)((char *)a1 + 8) = v171;
        v174 = v410;
        *((_BYTE *)a1 + 104) = 3;
        *((_BYTE *)a1 + 105) = v174;
        *(_QWORD *)a1 = -1;
        sub_140035660(&v303[64]);
        if ( (_DWORD)v364 != 2 )
          sub_140BAD350(v303);
        v175 = v306;
        v176 = v307;
        if ( v307 )
        {
          v177 = (_QWORD *)(v306 + 8);
          do
          {
            v178 = *(v177 - 1);
            if ( v178 )
              sub_140001660(*v177, v178, 1);
            v177 += 3;
            --v176;
          }
          while ( v176 );
        }
        result = v305.m128i_i64[1];
        if ( v305.m128i_i64[1] )
          return sub_140001660(v175, 24 * v305.m128i_i64[1], 8);
        return result;
      }
      sub_1418F44E0((__m128i *)&v333, (const __m128i *)v274, 0xA0u);
      v302.m128i_i32[0] = DWORD2(v308);
      v302.m128i_i8[4] = BYTE12(v308);
      v116 = *v257;
      v117 = *(_QWORD *)(v255 + 24);
      v395 = 1;
      v394 = 1;
      sub_140D8FC20((unsigned int)&v359, v117, v256, v116, (DWORD2(v308) == 0) & (BYTE12(v308) ^ 1));
      v118 = v360;
      if ( !v360 )
      {
        if ( (v302.m128i_i32[0] || (v302.m128i_i8[4] & 1) != 0) && *(_QWORD *)off_1421E6EC0 >= 2u )
        {
          *(_QWORD *)v303 = &v413;
          *(_QWORD *)&v303[8] = sub_140C98D50;
          *(_QWORD *)&v303[16] = &v410;
          *(_QWORD *)&v303[24] = sub_1416B9630;
          *(_QWORD *)&v303[32] = &v302;
          *(_QWORD *)&v303[40] = sub_1416BBD00;
          *(_QWORD *)&v303[48] = (char *)v302.m128i_i64 + 4;
          *(_QWORD *)&v303[56] = sub_1416BCC50;
          *(_QWORD *)v381 = aCodexmateLibCo_31;
          *(_QWORD *)&v381[8] = 45;
          *(_QWORD *)&v381[16] = aCodexmateLibCo_31;
          *(_QWORD *)&v381[24] = 45;
          *(_QWORD *)&v381[32] = &off_141A3A078;
          v401 = 1;
          v400 = 1;
          sub_140BAD520(&unk_141A3A000, v303, 2, v381);
        }
        sub_1418F44E0((__m128i *)v381, (const __m128i *)&v333, 0xA0u);
        LOBYTE(v118) = v413;
        v179 = v363;
        v346 = v363;
        v412 = 1;
        v411 = 1;
        v354 = sub_14167FC00(v181, v180, v182, v183);
        LODWORD(v355) = v184;
        v412 = 1;
        v411 = 1;
        sub_1410255B0((unsigned int)&v365, (_DWORD)a2, v118, v179.m128i_i32[0], v179.m128i_i64[1]);
        if ( (_DWORD)v365 != -1 )
        {
          v380 = v370;
          v379 = v369;
          v185 = _mm_loadu_si128((const __m128i *)&v365);
          v186 = _mm_loadu_si128(&v366);
          v378 = v368;
          v377 = (__int128)v367;
          v376 = v186;
          v375 = v185;
          goto LABEL_250;
        }
        v347.m256i_i64[0] = (__int64)v381;
        *(__m128i *)&v347.m256i_u64[1] = _mm_loadu_si128(&v251);
        if ( *(_DWORD *)v381 == 2 )
        {
          v412 = 1;
          v411 = 1;
          sub_140D9A5F0((__int64)v303, (__int64)a12);
          *(__m128i *)&v332[1] = _mm_loadu_si128(&v251);
          v332[0] = 1;
          v412 = 1;
          v411 = 1;
          sub_140D82750(&v375, a12, (const __m128i *)v303, (const __m128i *)v332);
        }
        else
        {
          v198 = *a13;
          v412 = 1;
          v411 = 1;
          sub_140D883F0((unsigned int)&v375, (_DWORD)a12, (unsigned int)v381, v198, (__int64)&v347.m256i_i64[1]);
        }
        if ( v375.m128i_i64[0] != -1 )
        {
LABEL_250:
          *(__m128i *)&v303[80] = v380;
          *(__m128i *)&v303[64] = v379;
          v199 = _mm_load_si128(&v375);
          v200 = _mm_load_si128(&v376);
          *(__m128i *)&v303[48] = v378;
          *(_OWORD *)&v303[32] = v377;
          *(__m128i *)&v303[16] = v200;
          *(__m128i *)v303 = v199;
          v347.m256i_i64[0] = 0;
          *(_OWORD *)&v347.m256i_u64[1] = 1u;
          v366.m128i_i64[0] = 1610612768;
          *(_QWORD *)&v365 = &v347;
          *((_QWORD *)&v365 + 1) = &off_141A3FE88;
          if ( (unsigned __int8)sub_14104A7D0(v303, &v365) )
            sub_141939040(
              (unsigned int)aADisplayImplem_7,
              55,
              (unsigned int)&v409,
              (unsigned int)&unk_141A3BB68,
              (__int64)&off_141A3FF40);
          v396 = (__int64 *)v347.m256i_i64[1];
          v402 = v347.m256i_i64[0];
          sub_140C75030(a2, (__int128 *)(unsigned int)v118);
          v201 = v388;
          if ( v402 )
            sub_140001660(v396, v402, 1);
          *(_QWORD *)&v365 = &v346;
          *((_QWORD *)&v365 + 1) = sub_140186EE0;
          v366.m128i_i64[0] = (__int64)v303;
          v366.m128i_i64[1] = (__int64)sub_14104A7D0;
          sub_1416ABFD0(&v347, &unk_141A39F29, &v365);
          sub_140BBE8E0(v118, (int)aCommitFailed, 13, &v347);
          v202 = *(_OWORD *)v303;
          v203 = *(_QWORD *)&v303[16];
          v365 = *(_OWORD *)&v303[24];
          v366 = *(__m128i *)&v303[40];
          v367 = *(__m128i *)&v303[56];
          v368 = _mm_loadu_si128((const __m128i *)&v303[72]);
          v369.m128i_i64[0] = *(_QWORD *)&v303[88];
          sub_140035660(&v381[64]);
          v204 = -1;
          v205 = 1;
          if ( *(_DWORD *)v381 != 2 )
            sub_140BAD350(v381);
          goto LABEL_255;
        }
        v412 = 1;
        v411 = 1;
        v210 = sub_1401BD880(v375.m128i_i64[1]);
        v213 = v210;
        if ( v210 )
        {
          *(_QWORD *)v332 = v210;
          v214 = v210 & 3;
          switch ( v210 & 3 )
          {
            case 0uLL:
              LOBYTE(v210) = *(_BYTE *)(v210 + 16);
              break;
            case 1uLL:
              LOBYTE(v210) = *(_BYTE *)(v210 + 31);
              break;
            case 2uLL:
              v398 = 1;
              v219 = *(__int64 (__fastcall **)(unsigned __int64))(sub_1416B3F10(v212, v211) + 8);
              v398 = 1;
              LOBYTE(v210) = v219(HIDWORD(v213));
              break;
            case 3uLL:
              v210 >>= 32;
              break;
          }
          LOBYTE(v365) = v210;
          *(_QWORD *)v303 = &v365;
          *(_QWORD *)&v303[8] = sub_140C9E0F0;
          v398 = 1;
          sub_1416ABFD0(&v330, &unk_141A39D4C, v303);
          v398 = 1;
          sub_140BBE8E0(v118, (int)aCommitSyncUnco, 23, &v330);
          v220 = _mm_loadu_si128(&v346);
          v221 = *((_QWORD *)a2 + 97);
          v222 = *((_QWORD *)a2 + 98);
          v398 = 1;
          sub_1410237A0(
            v221,
            v222,
            v118,
            (unsigned int)&unk_141A6FF17,
            23,
            v220.m128i_i64[0],
            v220.m128i_i64[1],
            (__int64)&unk_141A702FA,
            28);
          v347.m256i_i64[2] = v385;
          *(__m128i *)v347.m256i_i8 = _mm_loadu_si128((const __m128i *)&v384);
          sub_141026E80(v303);
          v375.m128i_i64[0] = 0;
          v375.m128i_i64[1] = 1;
          v376.m128i_i64[0] = 0;
          v366.m128i_i64[0] = 1610612768;
          *(_QWORD *)&v365 = &v375;
          *((_QWORD *)&v365 + 1) = &off_141A3FE88;
          if ( (unsigned __int8)sub_14104A7D0(v303, &v365) )
            sub_141939040(
              (unsigned int)aADisplayImplem_7,
              55,
              (unsigned int)&v409,
              (unsigned int)&unk_141A3BB68,
              (__int64)&off_141A3FF40);
          v396 = (__int64 *)v375.m128i_i64[1];
          v402 = v375.m128i_i64[0];
          v223 = v376.m128i_i64[0];
          v224 = v347.m256i_i64[2];
          if ( v347.m256i_i64[2] == v347.m256i_i64[0] )
            sub_14190FDC0(&v347);
          v225 = v347.m256i_i64[1];
          v226 = 3 * v224;
          *(_QWORD *)(v347.m256i_i64[1] + 8 * v226) = v402;
          *(_QWORD *)(v225 + 8 * v226 + 8) = v396;
          *(_QWORD *)(v225 + 8 * v226 + 16) = v223;
          v347.m256i_i64[2] = v224 + 1;
          sub_140BAC840(v303);
          sub_1418F44E0((__m128i *)&v365, (const __m128i *)v381, 0x88u);
          v203 = v347.m256i_i64[2];
          v202 = *(_OWORD *)v347.m256i_i8;
          if ( (unsigned int)(v214 - 2) >= 2 && (v213 & 3) != 0 )
          {
            *(_QWORD *)&v303[8] = v213 - 1;
            v303[0] = 3;
            v412 = 0;
            v411 = 0;
            sub_1416BCB00(&v303[8]);
          }
          v204 = 2;
          goto LABEL_280;
        }
        if ( v385 )
        {
          v412 = 1;
          v411 = 1;
          sub_140D1EE10((unsigned int)v303, DWORD2(v384), v385, (unsigned int)&unk_141A39BD6, 3);
          v396 = *(__int64 **)&v303[8];
          v402 = *(_QWORD *)v303;
          sub_141026C20(
            (unsigned int)&v365,
            (_DWORD)a2,
            v118,
            v346.m128i_i32[0],
            v346.m128i_i64[1],
            *(__int64 *)&v303[8],
            *(__int64 *)&v303[16]);
          if ( (_DWORD)v365 != -1 )
          {
            *(__m128i *)&v303[80] = v370;
            *(__m128i *)&v303[64] = v369;
            v215 = _mm_loadu_si128((const __m128i *)&v365);
            v216 = _mm_loadu_si128(&v366);
            *(__m128i *)&v303[48] = v368;
            *(__m128i *)&v303[32] = v367;
            *(__m128i *)&v303[16] = v216;
            *(__m128i *)v303 = v215;
            if ( *(_QWORD *)off_1421E6EC0 >= 2u )
            {
              v347.m256i_i64[0] = (__int64)v303;
              v347.m256i_i64[1] = (__int64)sub_14104A7D0;
              v375.m128i_i64[0] = (__int64)aCodexmateLibCo_31;
              v375.m128i_i64[1] = 45;
              v376.m128i_i64[0] = (__int64)aCodexmateLibCo_31;
              v376.m128i_i64[1] = 45;
              *(_QWORD *)&v377 = &off_141A39EC0;
              sub_140BAD520(&unk_141A39E7E, &v347, 2, &v375);
            }
            sub_140BAC840(v303);
          }
          if ( v402 )
            sub_140001660(v396, v402, 1);
          v412 = 1;
          v411 = 1;
          v217 = sub_14167FD50(&v354);
          v365 = 0x3E8 * (unsigned __int128)(unsigned __int64)v217 + v218 / 0xF4240uLL;
          v375.m128i_i64[0] = v385;
          *(_QWORD *)v303 = &v346;
          *(_QWORD *)&v303[8] = sub_140186EE0;
          *(_QWORD *)&v303[16] = &v365;
          *(_QWORD *)&v303[24] = sub_1416B95D0;
          *(_QWORD *)&v303[32] = &v375;
          *(_QWORD *)&v303[40] = sub_1416BCB10;
          v412 = 1;
          v411 = 1;
          sub_1416ABFD0(v352, &unk_141A39ED8, v303);
          v412 = 1;
          v411 = 1;
          sub_140BBE8E0(v118, (int)aDegraded, 8, v352);
          sub_1418F44E0((__m128i *)&v365, (const __m128i *)v381, 0x88u);
          v204 = 1;
          v203 = v385;
          v202 = v384;
LABEL_280:
          v201 = v388;
LABEL_281:
          sub_1418F44E0(v201 + 2, (const __m128i *)&v365, 0x88u);
          v201->m128i_i64[0] = v204;
          *(__m128i *)((char *)v201 + 8) = (__m128i)v202;
          v201[1].m128i_i64[1] = v203;
        }
        else
        {
          v412 = 1;
          v411 = 1;
          sub_141022500(&v347, a2, (unsigned int)v118);
          if ( v347.m256i_i32[0] == -1 )
          {
            v412 = 1;
            v411 = 1;
            v230 = sub_14167FD50(&v354);
            v365 = 0x3E8 * (unsigned __int128)(unsigned __int64)v230 + v231 / 0xF4240uLL;
            *(_QWORD *)v303 = &v346;
            *(_QWORD *)&v303[8] = sub_140186EE0;
            *(_QWORD *)&v303[16] = &v365;
            *(_QWORD *)&v303[24] = sub_1416B95D0;
            v412 = 1;
            v411 = 1;
            sub_1416ABFD0(&v386, &unk_141A39E59, v303);
            v412 = 1;
            v411 = 1;
            sub_140BBE8E0(v118, (int)aStable, 6, &v386);
            v232 = *(_OWORD *)v381;
            v203 = *(_QWORD *)&v381[16];
            v365 = *(_OWORD *)&v381[24];
            v366 = *(__m128i *)&v381[40];
            v367 = *(__m128i *)&v381[56];
            v368 = *(__m128i *)&v381[72];
            v369 = *(__m128i *)&v381[88];
            v370 = v382;
            v371 = _mm_loadu_si128(&v383);
            sub_140025530(&v384);
            v204 = 0;
            v202 = v232;
            goto LABEL_280;
          }
          v380 = v351;
          v379 = v350;
          v227 = _mm_loadu_si128((const __m128i *)&v347);
          v228 = _mm_loadu_si128((const __m128i *)&v347.m256i_u64[2]);
          v378 = (__m128i)v349;
          v377 = v348;
          v376 = v228;
          v375 = v227;
          if ( *(_QWORD *)off_1421E6EC0 >= 2u )
          {
            *(_QWORD *)&v365 = &v375;
            *((_QWORD *)&v365 + 1) = sub_14104A7D0;
            *(_QWORD *)v303 = aCodexmateLibCo_31;
            *(_QWORD *)&v303[8] = 45;
            *(_QWORD *)&v303[16] = aCodexmateLibCo_31;
            *(_QWORD *)&v303[24] = 45;
            *(_QWORD *)&v303[32] = &off_141A39DD8;
            v391 = 1;
            sub_140BAD520(&unk_141A39D6B, &v365, 2, v303);
          }
          sub_1418F44E0((__m128i *)v303, (const __m128i *)v381, 0x88u);
          v402 = sub_140C23890(24);
          *(_QWORD *)&v365 = &v375;
          *((_QWORD *)&v365 + 1) = sub_14104A7D0;
          sub_1416ABFD0(&v361, &unk_141A39E1D, &v365);
          v229 = (__m128i *)v402;
          *(_QWORD *)(v402 + 16) = v362;
          *v229 = _mm_loadu_si128(&v361);
          sub_1418F44E0((__m128i *)&v365, (const __m128i *)v303, 0x88u);
          v412 = 0;
          v411 = 1;
          sub_140BAC840(&v375);
          v204 = 1;
          v205 = 0;
          v203 = 1;
          v201 = v388;
          v202 = __PAIR128__((unsigned __int64)v229, 1);
LABEL_255:
          sub_1403FAE40(&v384);
          if ( (_QWORD)v384 )
            sub_140001660(*((_QWORD *)&v384 + 1), 24 * v384, 8);
          if ( !v205 )
            goto LABEL_281;
          v201[6].m128i_i64[0] = v369.m128i_i64[0];
          v206 = _mm_load_si128((const __m128i *)&v365);
          v207 = _mm_load_si128(&v366);
          v208 = v367;
          v201[5] = v368;
          v201[4] = v208;
          v201[3] = v207;
          v201[2] = v206;
          v209 = v410;
          *(__m128i *)((char *)v201 + 8) = (__m128i)v202;
          v201[1].m128i_i64[1] = v203;
          v201[6].m128i_i8[8] = 5;
          v201[6].m128i_i8[9] = v209;
          v201->m128i_i64[0] = -1;
        }
        result = sub_1403FAC20(&v359);
        if ( !v359.m128i_i64[0] )
          return result;
        v189 = v359.m128i_i64[1];
        v190 = 32 * v359.m128i_i64[0];
        return sub_140001660(v189, v190, 8);
      }
      v119 = v359.m128i_i64[1];
      v401 = 1;
      v400 = 1;
      sub_1403EBE40(v381, v359.m128i_i64[1], v359.m128i_i64[1] + 32 * v360);
      v120 = *(_QWORD *)&v381[8];
      v121 = *(_QWORD *)&v381[16];
      sub_140D1EE10((_DWORD)v38, *(_DWORD *)&v381[8], *(_DWORD *)&v381[16], (unsigned int)&unk_141A39BD6, 3);
      v376.m128i_i64[0] = *(_QWORD *)&v303[16];
      v375 = _mm_loadu_si128((const __m128i *)v303);
      if ( v121 )
      {
        v126 = (_QWORD *)(v120 + 8);
        do
        {
          v122 = *(v126 - 1);
          if ( v122 )
            sub_140001660(*v126, v122, 1);
          v126 += 3;
          --v121;
        }
        while ( v121 );
      }
      if ( *(_QWORD *)v381 )
        sub_140001660(v120, 24LL * *(_QWORD *)v381, 8);
      v404 = 1;
      v403 = 1;
      v127 = sub_14167FC00(v123, v122, v124, v125);
      a2 = v300;
      v129 = v397;
      if ( v397 )
      {
        v366.m128i_i64[0] = v276;
        v365 = (unsigned __int128)_mm_loadu_si128(&v275);
        *(_QWORD *)v303 = &v375;
        *(_QWORD *)&v303[8] = sub_1400015F0;
        v393 = 1;
        sub_1416ABFD0(v234, &unk_141A3A0DE, v303);
        v393 = 1;
        sub_1401F4600(&v365, v234);
        sub_1418F44E0((__m128i *)v381, (const __m128i *)v274, 0x88u);
        v384 = (unsigned __int128)_mm_load_si128((const __m128i *)&v365);
        v385 = v366.m128i_i64[0];
        v393 = 0;
        sub_140BBE9E0(
          (__int64)v303,
          (__int64)a2,
          v413,
          v363.m128i_i64[0],
          v363.m128i_i64[1],
          (const __m128i *)v381,
          a12,
          a13,
          &v251);
        if ( *(_DWORD *)v303 != -1 )
        {
          result = sub_1418F44E0(v388, (const __m128i *)v303, 0xA8u);
          goto LABEL_230;
        }
        v167 = v388;
        *(__m128i *)((char *)v388 + 88) = *(__m128i *)&v303[88];
        *(__m128i *)((char *)v167 + 72) = *(__m128i *)&v303[72];
        v195 = _mm_loadu_si128((const __m128i *)&v303[8]);
        v196 = _mm_loadu_si128((const __m128i *)&v303[24]);
        v197 = *(__m128i *)&v303[40];
        *(__m128i *)((char *)v167 + 56) = *(__m128i *)&v303[56];
        *(__m128i *)((char *)v167 + 40) = v197;
        *(__m128i *)((char *)v167 + 24) = v196;
        *(__m128i *)((char *)v167 + 8) = v195;
        result = v410;
        v167[6].m128i_i8[8] = 5;
LABEL_209:
        v167[6].m128i_i8[9] = result;
        v167->m128i_i64[0] = -1;
LABEL_230:
        if ( v375.m128i_i64[0] )
          result = sub_140001660(v375.m128i_i64[1], v375.m128i_i64[0], 1);
        v187 = (_QWORD *)(v119 + 8);
        do
        {
          v188 = *(v187 - 1);
          if ( v188 )
            result = sub_140001660(*v187, v188, 1);
          v187 += 4;
          --v118;
        }
        while ( v118 );
        if ( v359.m128i_i64[0] )
          result = sub_140001660(v119, 32 * v359.m128i_i64[0], 8);
        if ( v129 )
          return result;
        sub_140BA9E70(&v333);
        sub_1403FAE40(&v342);
        result = v342;
        if ( !v342 )
          return result;
        v189 = v343;
        v190 = 24 * v342;
        return sub_140001660(v189, v190, 8);
      }
      if ( v302.m128i_i32[0] )
      {
        if ( v410 > 2u )
          goto LABEL_206;
      }
      else if ( v410 > 2u || (v302.m128i_i8[4] & 1) == 0 )
      {
        goto LABEL_206;
      }
      if ( v374 == -1 )
      {
        v404 = 1;
        v403 = 1;
        v290 = sub_1416A1240(v127, v128, 12, 0, (__int64)&off_141A3EA90);
        v374 = v137;
      }
      else
      {
        v135 = v128 < v374;
        v136 = v127 < v290;
        if ( v127 == v290 )
          v136 = v135;
        if ( !v136 )
        {
LABEL_206:
          *(_QWORD *)v303 = &v413;
          *(_QWORD *)&v303[8] = sub_140C98D50;
          *(_QWORD *)&v303[16] = &v375;
          *(_QWORD *)&v303[24] = sub_1400015F0;
          v404 = 1;
          v403 = 1;
          sub_1416ABFD0(&v239, &unk_141A3A090, v303);
          *(__m128i *)&v303[8] = _mm_loadu_si128(&v239);
          *(_QWORD *)&v303[24] = v240;
          *(_QWORD *)v303 = 10;
          sub_140C9CF30(v381, v303);
          v402 = *(_QWORD *)&v381[8];
          sub_140C75030(a2, (__int128 *)v413);
          if ( *(_QWORD *)v381 )
            sub_140001660(v402, *(_QWORD *)v381, 1);
          *(_QWORD *)&v365 = v118;
          *(_QWORD *)v381 = &v410;
          *(_QWORD *)&v381[8] = sub_1416B9630;
          *(_QWORD *)&v381[16] = &v365;
          *(_QWORD *)&v381[24] = sub_1416BCB10;
          sub_1416ABFD0(v233, &unk_141A3A0B1, v381);
          sub_140BBE8E0(v413, (int)aPostconditionF, 20, v233);
          v167 = v388;
          *(__m128i *)((char *)v388 + 88) = *(__m128i *)&v303[80];
          *(__m128i *)((char *)v167 + 72) = *(__m128i *)&v303[64];
          v168 = _mm_loadu_si128((const __m128i *)v303);
          v169 = _mm_loadu_si128((const __m128i *)&v303[16]);
          v170 = *(__m128i *)&v303[32];
          *(__m128i *)((char *)v167 + 56) = *(__m128i *)&v303[48];
          *(__m128i *)((char *)v167 + 40) = v170;
          *(__m128i *)((char *)v167 + 24) = v169;
          *(__m128i *)((char *)v167 + 8) = v168;
          result = v410;
          v167[6].m128i_i8[8] = 4;
          goto LABEL_209;
        }
      }
      if ( *(_QWORD *)off_1421E6EC0 >= 2u )
      {
        *(_QWORD *)v381 = &v413;
        *(_QWORD *)&v381[8] = sub_140C98D50;
        *(_QWORD *)&v381[16] = &v410;
        *(_QWORD *)&v381[24] = sub_1416B9630;
        *(_QWORD *)&v381[32] = &v375;
        *(_QWORD *)&v381[40] = sub_1400015F0;
        *(_QWORD *)&v303[48] = 2;
        *(_QWORD *)&v303[56] = aCodexmateLibCo_31;
        *(_QWORD *)&v303[64] = 45;
        *(_QWORD *)&v303[80] = &unk_141A3A11B;
        *(_QWORD *)&v303[88] = v381;
        *(_QWORD *)v303 = 0;
        *(_QWORD *)&v303[8] = aCodexmateLibCo_31;
        *(_OWORD *)&v303[16] = 0x2Du;
        *(_QWORD *)&v303[32] = aSrcCoreRelayRo_0;
        *(_QWORD *)&v303[40] = 35;
        *(_QWORD *)&v303[72] = 0x17D00000001LL;
        v404 = 1;
        v403 = 1;
        sub_1414D53A0(&v409, v38);
      }
      v404 = 1;
      v403 = 1;
      sub_140C75030(a2, (__int128 *)v413);
      if ( v375.m128i_i64[0] )
        sub_140001660(v375.m128i_i64[1], v375.m128i_i64[0], 1);
      v138 = (_QWORD *)(v119 + 8);
      do
      {
        v139 = *(v138 - 1);
        if ( v139 )
          sub_140001660(*v138, v139, 1);
        v138 += 4;
        --v118;
      }
      while ( v118 );
      if ( v359.m128i_i64[0] )
        sub_140001660(v119, 32 * v359.m128i_i64[0], 8);
      sub_140035660(&v337);
      if ( (_DWORD)v333 != 2 )
        sub_140BAD350(&v333);
      v140 = v343;
      v141 = v344;
      a1 = (__int128 *)v388;
      if ( v344 )
      {
        v142 = (_QWORD *)(v343 + 8);
        do
        {
          v29 = *(v142 - 1);
          if ( v29 )
            sub_140001660(*v142, v29, 1);
          v142 += 3;
          --v141;
        }
        while ( v141 );
      }
      if ( v342 )
        sub_140001660(v140, 24 * v342, 8);
      v30 = v345;
      v31 = v38;
      if ( (v281 & 1) != 0 )
        goto LABEL_192;
    }
  }
  LODWORD(v354) = *(_DWORD *)&v303[65];
  *(_DWORD *)((char *)&v354 + 3) = *(_DWORD *)&v303[68];
  *(_QWORD *)&v381[88] = *(_QWORD *)&v303[88];
  *(_OWORD *)&v381[72] = *(_OWORD *)&v303[72];
  *(_DWORD *)&v381[9] = v333;
  *(_DWORD *)&v381[12] = *(_DWORD *)((char *)&v333 + 3);
  LODWORD(v386) = *(_DWORD *)v274;
  *(_DWORD *)((char *)&v386 + 3) = *(_DWORD *)&v274[3];
  *(__int32 *)((char *)v361.m128i_i32 + 3) = *(_DWORD *)((char *)&v365 + 3);
  v361.m128i_i32[0] = v365;
  *(_DWORD *)&v352[3] = *(__int32 *)((char *)v375.m128i_i32 + 3);
  *(_DWORD *)v352 = v375.m128i_i32[0];
  *(__int32 *)((char *)v330.m128i_i32 + 3) = *(__int32 *)((char *)v347.m256i_i32 + 3);
  v330.m128i_i32[0] = v347.m256i_i32[0];
  *(__int32 *)((char *)v359.m128i_i32 + 3) = *(__int32 *)((char *)v294.m128i_i32 + 3);
  v359.m128i_i32[0] = v294.m128i_i32[0];
  *(_DWORD *)&v332[3] = *(_DWORD *)((char *)&v277 + 3);
  *(_DWORD *)v332 = v277;
  *(_QWORD *)v381 = *(_QWORD *)v303;
  v381[8] = v303[8];
  v381[16] = v303[16];
  *(_DWORD *)&v381[20] = *(_DWORD *)&v274[3];
  *(_DWORD *)&v381[17] = v386;
  v381[24] = v303[24];
  *(_DWORD *)&v381[28] = *(__int32 *)((char *)v361.m128i_i32 + 3);
  *(_DWORD *)&v381[25] = v365;
  v381[32] = v303[32];
  *(_DWORD *)&v381[36] = *(_DWORD *)&v352[3];
  *(_DWORD *)&v381[33] = v375.m128i_i32[0];
  v381[40] = v303[40];
  *(_DWORD *)&v381[44] = *(__int32 *)((char *)v330.m128i_i32 + 3);
  *(_DWORD *)&v381[41] = v347.m256i_i32[0];
  v381[48] = v303[48];
  *(_DWORD *)&v381[52] = *(__int32 *)((char *)v359.m128i_i32 + 3);
  *(_DWORD *)&v381[49] = v294.m128i_i32[0];
  v381[56] = v303[56];
  *(_DWORD *)&v381[60] = *(_DWORD *)&v332[3];
  *(_DWORD *)&v381[57] = v277;
  v381[64] = v303[64];
  *(_DWORD *)&v381[68] = *(_DWORD *)&v303[68];
  *(_DWORD *)&v381[65] = v354;
  *(_QWORD *)&v333 = 0;
  *((_QWORD *)&v333 + 1) = 1;
  v334.m128i_i64[0] = 0;
  *(_QWORD *)&v303[16] = 1610612768;
  *(_QWORD *)v303 = &v333;
  *(_QWORD *)&v303[8] = &off_141A3FE88;
  v157 = sub_14104A7D0(v381, v303);
  v158 = v388;
  if ( v157 )
    sub_141939040(
      (unsigned int)aADisplayImplem_7,
      55,
      (unsigned int)&v409,
      (unsigned int)&unk_141A3BB68,
      (__int64)&off_141A3FF40);
  v396 = *((__int64 **)&v333 + 1);
  v402 = v333;
  sub_140C75030(v300, (__int128 *)v413);
  if ( v402 )
    sub_140001660(v396, v402, 1);
  v159 = sub_14167FD50(&v252);
  v333 = 0x3E8 * (unsigned __int128)(unsigned __int64)v159 + v160 / 0xF4240uLL;
  *(_QWORD *)v303 = &v410;
  *(_QWORD *)&v303[8] = sub_1416B9630;
  *(_QWORD *)&v303[16] = &v333;
  *(_QWORD *)&v303[24] = sub_1416B95D0;
  *(_QWORD *)&v303[32] = v381;
  *(_QWORD *)&v303[40] = sub_14104A7D0;
  sub_1416ABFD0(v238, &unk_141A3A247, v303);
  sub_140BBE8E0(v413, (int)aStopFailed, 11, v238);
  *(__m128i *)((char *)v158 + 88) = *(__m128i *)&v381[80];
  *(__m128i *)((char *)v158 + 72) = *(__m128i *)&v381[64];
  v161 = *(__m128i *)v381;
  v162 = *(__m128i *)&v381[16];
  v163 = *(__m128i *)&v381[32];
  *(__m128i *)((char *)v158 + 56) = *(__m128i *)&v381[48];
  *(__m128i *)((char *)v158 + 40) = v163;
  *(__m128i *)((char *)v158 + 24) = v162;
  *(__m128i *)((char *)v158 + 8) = v161;
  result = v410;
  v158[6].m128i_i8[8] = 1;
  v158[6].m128i_i8[9] = result;
  v158->m128i_i64[0] = -1;
  return result;
}
