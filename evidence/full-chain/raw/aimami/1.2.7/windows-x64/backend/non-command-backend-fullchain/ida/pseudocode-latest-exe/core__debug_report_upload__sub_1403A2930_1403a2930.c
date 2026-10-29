// win 1.2.7 latest-exe | module src/core/debug_report_upload.rs | ea 0x1403a2930 | successor of pre-update 0x140b4ce80 | session <审计会话>
// match evidence: {"conf": false, "verdict": "LIKELY_SCORE"}
char __fastcall sub_1403A2930(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rsi
  __int64 v5; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int128 v8; // xmm3
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rdi
  _BYTE *v13; // r14
  int v14; // r15d
  int v15; // eax
  int v16; // ecx
  _BYTE *v17; // r12
  PVOID v18; // r13
  __int64 v19; // r15
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r10
  __int64 v26; // rdx
  __int64 *v27; // r12
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  PVOID v31; // rcx
  char v32; // al
  __int64 v33; // rsi
  char v34; // al
  __int64 v35; // rax
  _BYTE *v36; // rdi
  _BYTE *v37; // rdi
  __int64 v38; // rdx
  __int64 v39; // r8
  PVOID v40; // rcx
  char v41; // al
  char v42; // si
  __int64 v43; // r8
  __int64 v44; // rcx
  _BYTE *v45; // rdx
  char *v46; // rsi
  char v47; // al
  __int64 v48; // rbx
  __int64 v49; // rcx
  __int64 v50; // rdx
  __int64 v51; // rax
  __int64 v52; // rdx
  __int128 v53; // xmm1
  __int128 v54; // xmm2
  __int128 v55; // xmm3
  char *v56; // rcx
  __int64 v57; // rsi
  __int64 v58; // rdx
  __int64 v59; // rcx
  __int64 v60; // rbx
  __int64 v61; // rsi
  __int64 v62; // rdi
  __int64 v63; // rcx
  bool v64; // cf
  __int64 v65; // rsi
  signed __int64 v66; // rt0
  __int64 v67; // rax
  __int64 v68; // rdi
  __int64 v69; // rax
  volatile signed __int64 **v70; // r15
  _BYTE *v71; // rdi
  volatile signed __int64 ***v72; // rdx
  volatile signed __int64 **v73; // r15
  __int64 v74; // rdx
  __int64 v75; // rdi
  __int64 v76; // rbx
  char v77; // r14
  __int64 v78; // rdx
  int v79; // ecx
  int v80; // ecx
  __int64 v81; // rsi
  __int64 v82; // rax
  __int64 v83; // r15
  __int64 v84; // r13
  char v85; // r12
  unsigned __int64 v86; // rsi
  __int64 v87; // r14
  char result; // al
  __int64 v89; // rdi
  __int64 v90; // rax
  __int64 v91; // rax
  _QWORD *v92; // rsi
  __int64 v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rdx
  __int64 v96; // rdx
  __int64 v97; // rdx
  __int64 v98; // rbx
  __int64 *v99; // rdx
  int v100; // ecx
  __int128 v101; // xmm1
  __int128 v102; // xmm2
  __int128 v103; // xmm3
  __int64 v104; // rcx
  int v105; // edx
  __int128 v106; // xmm1
  __int128 v107; // xmm2
  __int128 v108; // xmm3
  __int64 v109; // rax
  __int64 v110; // rdi
  __int64 v111; // r12
  __int64 v112; // rbx
  __int64 v113; // r13
  __int64 v114; // rsi
  __int64 v115; // rax
  __int64 v116; // r15
  __int64 v117; // rax
  __int128 *v118; // r12
  _BYTE *v119; // rbx
  _QWORD *v120; // r15
  volatile signed __int64 *v121; // rcx
  __int64 v122; // rbx
  __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rax
  __int64 v126; // rcx
  __int128 v127; // rax
  __int64 v128; // rcx
  char v129; // al
  __int128 *v130; // rdx
  __int128 v131; // xmm0
  __int128 v132; // xmm1
  __int128 v133; // xmm2
  _BYTE *v134; // r8
  __int64 v135; // rsi
  __int128 v136; // xmm0
  __int128 v137; // xmm1
  __int128 v138; // xmm2
  __int64 v139; // rax
  char v140; // al
  __int64 v141; // rbx
  __int64 v142; // rsi
  __int64 v143; // rcx
  __int64 v144; // rbx
  bool v145; // zf
  __int64 v146; // rax
  __int128 v147; // xmm1
  __int128 v148; // xmm2
  __int128 v149; // xmm3
  __int64 v150; // rax
  __int64 v151; // rbx
  _BYTE *v152; // rdi
  PVOID v153; // rsi
  _BYTE *v154; // r14
  _BYTE *v155; // r15
  __int64 v156; // rcx
  __int64 v157; // rax
  __int64 v158; // rbx
  __int64 v159; // r8
  __int64 v160; // rcx
  __int128 v161; // xmm0
  __int128 v162; // xmm1
  __int128 v163; // xmm2
  __int64 v164; // rdx
  __int64 v165; // rdx
  __int64 v166; // rdx
  __int64 v167; // r12
  _BYTE *v168; // r14
  __int64 v169; // rcx
  __int128 v170; // xmm0
  __int128 v171; // xmm1
  __int128 v172; // xmm2
  __int64 v173; // rcx
  __int128 v174; // xmm0
  __int128 v175; // xmm1
  __int128 v176; // xmm2
  __int128 v177; // xmm6
  __int64 v178; // rsi
  __int128 v179; // xmm6
  __int64 v180; // rdi
  __int64 v181; // rdx
  __int64 v182; // rax
  __int64 v183; // rdx
  __int64 v184; // rdx
  __int64 v185; // rdx
  __int64 v186; // rsi
  __int64 v187; // rdi
  char *v188; // rdx
  __int64 v189; // r15
  __int64 v190; // rdx
  __int64 v191; // rax
  __int64 v192; // rcx
  __int64 v193; // r15
  __int64 v194; // rdx
  __int64 v195; // rdi
  __int64 v196; // r12
  char v197; // al
  __int64 v198; // rdx
  __int128 v199; // xmm0
  __int128 v200; // xmm0
  __int64 v201; // rax
  __int64 v202; // rdx
  __int64 v203; // rax
  __int64 v204; // rax
  __int64 v205; // rsi
  __int64 v206; // rax
  __int64 v207; // rsi
  __int64 v208; // rdx
  __int64 v209; // rdx
  __int64 v210; // rdx
  __int64 v211; // rdx
  __int64 v212; // rax
  __int64 v213; // rdx
  __int64 v214; // rdx
  __int64 v215; // rdx
  __int64 v216; // rdx
  int v217; // eax
  __int64 v218; // [rsp+30h] [rbp-50h] BYREF
  __int128 v219; // [rsp+38h] [rbp-48h]
  __int128 v220; // [rsp+48h] [rbp-38h]
  __int64 v221; // [rsp+58h] [rbp-28h]
  __int128 v222; // [rsp+60h] [rbp-20h]
  __int128 v223; // [rsp+70h] [rbp-10h]
  __int128 v224; // [rsp+80h] [rbp+0h]
  __int64 v225; // [rsp+90h] [rbp+10h]
  char v226[152]; // [rsp+98h] [rbp+18h] BYREF
  _OWORD v227[4]; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v228; // [rsp+170h] [rbp+F0h] BYREF
  __int128 v229; // [rsp+178h] [rbp+F8h]
  __int128 v230; // [rsp+188h] [rbp+108h]
  __int64 v231; // [rsp+198h] [rbp+118h]
  __int128 v232; // [rsp+1A0h] [rbp+120h]
  __int128 v233; // [rsp+1B0h] [rbp+130h]
  __int128 v234; // [rsp+1C0h] [rbp+140h]
  __int64 v235; // [rsp+1D0h] [rbp+150h]
  char v236[152]; // [rsp+1D8h] [rbp+158h] BYREF
  __int128 v237; // [rsp+270h] [rbp+1F0h]
  __m256i v238; // [rsp+280h] [rbp+200h]
  __int128 v239; // [rsp+2A0h] [rbp+220h]
  __int128 v240; // [rsp+2B0h] [rbp+230h]
  __int128 v241; // [rsp+2C0h] [rbp+240h]
  __int128 v242; // [rsp+2D0h] [rbp+250h]
  __int128 v243; // [rsp+2E0h] [rbp+260h]
  __int128 v244; // [rsp+2F0h] [rbp+270h]
  __int128 v245; // [rsp+300h] [rbp+280h]
  __m256i v246; // [rsp+310h] [rbp+290h]
  __int128 v247; // [rsp+330h] [rbp+2B0h]
  __int128 v248; // [rsp+340h] [rbp+2C0h]
  __int128 v249; // [rsp+350h] [rbp+2D0h]
  __int128 v250; // [rsp+360h] [rbp+2E0h]
  __int128 v251; // [rsp+370h] [rbp+2F0h]
  __int128 v252; // [rsp+380h] [rbp+300h]
  __int128 v253; // [rsp+390h] [rbp+310h]
  __m256i v254; // [rsp+3A0h] [rbp+320h]
  __int128 v255; // [rsp+3C0h] [rbp+340h]
  __int128 v256; // [rsp+3D0h] [rbp+350h]
  __int128 v257; // [rsp+3E0h] [rbp+360h]
  __int128 v258; // [rsp+3F0h] [rbp+370h]
  __int128 v259; // [rsp+400h] [rbp+380h]
  __int128 v260; // [rsp+410h] [rbp+390h]
  __int128 v261; // [rsp+420h] [rbp+3A0h]
  __int128 v262; // [rsp+430h] [rbp+3B0h]
  __int128 v263; // [rsp+440h] [rbp+3C0h]
  __int128 v264; // [rsp+450h] [rbp+3D0h]
  __int128 v265; // [rsp+460h] [rbp+3E0h]
  __int128 v266; // [rsp+470h] [rbp+3F0h]
  __int128 v267; // [rsp+480h] [rbp+400h]
  __int128 v268; // [rsp+490h] [rbp+410h]
  __int128 v269; // [rsp+4A0h] [rbp+420h]
  __int64 v270; // [rsp+4B0h] [rbp+430h]
  __int128 v271; // [rsp+4C0h] [rbp+440h]
  __int128 v272; // [rsp+4D0h] [rbp+450h]
  __int128 v273; // [rsp+4E0h] [rbp+460h]
  __int128 v274; // [rsp+4F0h] [rbp+470h]
  __int128 v275; // [rsp+500h] [rbp+480h]
  __int64 v276; // [rsp+510h] [rbp+490h]
  __int128 v277; // [rsp+520h] [rbp+4A0h]
  __int128 v278; // [rsp+530h] [rbp+4B0h]
  __int128 v279; // [rsp+540h] [rbp+4C0h]
  __int64 v280; // [rsp+550h] [rbp+4D0h]
  __int128 v281; // [rsp+560h] [rbp+4E0h]
  __int128 v282; // [rsp+570h] [rbp+4F0h]
  __int128 v283; // [rsp+580h] [rbp+500h]
  __int64 v284; // [rsp+590h] [rbp+510h]
  __int128 v285; // [rsp+5A0h] [rbp+520h]
  __int128 v286; // [rsp+5B0h] [rbp+530h]
  __int128 v287; // [rsp+5C0h] [rbp+540h]
  __int64 v288; // [rsp+5D0h] [rbp+550h]
  __int128 v289; // [rsp+5E0h] [rbp+560h]
  __int128 v290; // [rsp+5F0h] [rbp+570h]
  __int128 v291; // [rsp+600h] [rbp+580h]
  __int64 v292; // [rsp+610h] [rbp+590h]
  __int128 v293; // [rsp+620h] [rbp+5A0h]
  __int128 v294; // [rsp+630h] [rbp+5B0h]
  __int128 v295; // [rsp+640h] [rbp+5C0h]
  __int64 v296; // [rsp+650h] [rbp+5D0h]
  __int128 v297; // [rsp+660h] [rbp+5E0h]
  __int128 v298; // [rsp+670h] [rbp+5F0h]
  __int128 v299; // [rsp+680h] [rbp+600h]
  __int64 v300; // [rsp+690h] [rbp+610h]
  __int128 v301; // [rsp+6A0h] [rbp+620h]
  __int128 v302; // [rsp+6B0h] [rbp+630h]
  __int128 v303; // [rsp+6C0h] [rbp+640h]
  __int64 v304; // [rsp+6D0h] [rbp+650h]
  _OWORD v305[2]; // [rsp+6E0h] [rbp+660h] BYREF
  __int128 v306; // [rsp+700h] [rbp+680h] BYREF
  __int128 v307; // [rsp+710h] [rbp+690h]
  __int128 v308; // [rsp+720h] [rbp+6A0h]
  __int128 v309; // [rsp+730h] [rbp+6B0h]
  __int128 v310; // [rsp+740h] [rbp+6C0h]
  __int128 v311; // [rsp+750h] [rbp+6D0h]
  __int128 v312; // [rsp+760h] [rbp+6E0h]
  __int128 v313; // [rsp+770h] [rbp+6F0h]
  __int128 v314; // [rsp+780h] [rbp+700h]
  __int128 v315; // [rsp+790h] [rbp+710h]
  __int128 v316; // [rsp+7A0h] [rbp+720h]
  __int64 v317; // [rsp+7B0h] [rbp+730h]
  __int128 v318; // [rsp+7C0h] [rbp+740h]
  __int128 v319; // [rsp+7D0h] [rbp+750h]
  __int128 v320; // [rsp+7E0h] [rbp+760h]
  __int64 v321; // [rsp+7F0h] [rbp+770h]
  __int128 v322; // [rsp+800h] [rbp+780h] BYREF
  __int64 v323; // [rsp+810h] [rbp+790h] BYREF
  __int128 v324; // [rsp+8C8h] [rbp+848h]
  __int64 v325; // [rsp+8D8h] [rbp+858h]
  __m256i v326; // [rsp+8E0h] [rbp+860h]
  _BYTE v327[48]; // [rsp+900h] [rbp+880h] BYREF
  __int128 v328; // [rsp+930h] [rbp+8B0h]
  __int128 v329; // [rsp+940h] [rbp+8C0h]
  __int128 v330; // [rsp+950h] [rbp+8D0h]
  __int64 v331; // [rsp+960h] [rbp+8E0h]
  __int128 v332; // [rsp+968h] [rbp+8E8h]
  __int128 v333; // [rsp+978h] [rbp+8F8h]
  __int128 v334; // [rsp+988h] [rbp+908h]
  __int128 v335; // [rsp+998h] [rbp+918h]
  __int128 v336; // [rsp+9A8h] [rbp+928h]
  __int128 v337; // [rsp+9B8h] [rbp+938h]
  __int64 v338; // [rsp+9C8h] [rbp+948h]
  volatile signed __int64 **v339; // [rsp+9D0h] [rbp+950h]
  _BYTE *v340; // [rsp+9D8h] [rbp+958h]
  __m256i v341; // [rsp+9E0h] [rbp+960h]
  __int64 v342; // [rsp+BF8h] [rbp+B78h]
  int v343; // [rsp+C00h] [rbp+B80h]
  char v344[140]; // [rsp+C04h] [rbp+B84h] BYREF
  _OWORD v345[2]; // [rsp+C90h] [rbp+C10h] BYREF
  __int128 v346; // [rsp+CB0h] [rbp+C30h]
  __int128 v347; // [rsp+CC0h] [rbp+C40h] BYREF
  __int128 v348; // [rsp+CD0h] [rbp+C50h]
  __int128 v349; // [rsp+CE0h] [rbp+C60h]
  __int128 v350; // [rsp+CF0h] [rbp+C70h]
  __int128 v351; // [rsp+D00h] [rbp+C80h]
  __int128 v352; // [rsp+D10h] [rbp+C90h]
  __int128 v353; // [rsp+D20h] [rbp+CA0h]
  __int128 v354; // [rsp+D30h] [rbp+CB0h]
  __int64 v355; // [rsp+D40h] [rbp+CC0h]
  __int128 v356; // [rsp+D50h] [rbp+CD0h] BYREF
  __int64 v357; // [rsp+D60h] [rbp+CE0h]
  _BYTE v358[112]; // [rsp+D70h] [rbp+CF0h] BYREF
  __int128 v359; // [rsp+DE0h] [rbp+D60h]
  __int64 v360; // [rsp+DF0h] [rbp+D70h]
  __int64 v361; // [rsp+1018h] [rbp+F98h]
  int v362; // [rsp+1020h] [rbp+FA0h]
  char v363[140]; // [rsp+1074h] [rbp+FF4h] BYREF
  __m256i v364; // [rsp+1100h] [rbp+1080h] BYREF
  __int64 v365; // [rsp+1130h] [rbp+10B0h]
  volatile signed __int64 ***v366; // [rsp+1138h] [rbp+10B8h]
  _BYTE *v367; // [rsp+1140h] [rbp+10C0h]
  volatile signed __int64 **v368; // [rsp+1148h] [rbp+10C8h]
  _BYTE *v369; // [rsp+1150h] [rbp+10D0h]
  PVOID v370; // [rsp+1158h] [rbp+10D8h]
  _BYTE *v371; // [rsp+1160h] [rbp+10E0h]
  PVOID v372; // [rsp+1168h] [rbp+10E8h]
  _BYTE *v373; // [rsp+1170h] [rbp+10F0h]
  _BYTE *v374; // [rsp+1178h] [rbp+10F8h]
  _BYTE *v375; // [rsp+1180h] [rbp+1100h]
  __int64 *v376; // [rsp+1188h] [rbp+1108h]
  __int128 v377; // [rsp+1190h] [rbp+1110h]
  _BYTE v378[48]; // [rsp+11A0h] [rbp+1120h] BYREF
  __int128 v379; // [rsp+11D0h] [rbp+1150h]
  __int128 v380; // [rsp+11E0h] [rbp+1160h]
  __int128 v381; // [rsp+11F0h] [rbp+1170h]
  __int64 v382; // [rsp+1200h] [rbp+1180h]
  __int128 v383; // [rsp+1208h] [rbp+1188h]
  __int128 v384; // [rsp+1218h] [rbp+1198h]
  __int128 v385; // [rsp+1228h] [rbp+11A8h]
  __int128 v386; // [rsp+1238h] [rbp+11B8h]
  __int128 v387; // [rsp+1248h] [rbp+11C8h]
  __int128 v388; // [rsp+1258h] [rbp+11D8h]
  __int64 v389; // [rsp+1268h] [rbp+11E8h]
  volatile signed __int64 **v390; // [rsp+1270h] [rbp+11F0h]
  _BYTE *v391; // [rsp+1278h] [rbp+11F8h]
  __m256i v392; // [rsp+1280h] [rbp+1200h]
  __int64 v393; // [rsp+12A0h] [rbp+1220h]
  __int64 v394; // [rsp+12A8h] [rbp+1228h]
  __int64 v395; // [rsp+12B0h] [rbp+1230h]
  __int64 v396; // [rsp+12B8h] [rbp+1238h]
  __int64 v397; // [rsp+12C0h] [rbp+1240h]
  __int64 v398; // [rsp+12C8h] [rbp+1248h]
  __int64 v399; // [rsp+12D0h] [rbp+1250h]
  __int64 v400; // [rsp+12D8h] [rbp+1258h]
  __int64 v401; // [rsp+12E0h] [rbp+1260h]
  _BYTE *v402; // [rsp+12E8h] [rbp+1268h]
  __int64 v403; // [rsp+12F0h] [rbp+1270h]
  __int64 v404; // [rsp+12F8h] [rbp+1278h]
  __int64 v405; // [rsp+1300h] [rbp+1280h]
  __int64 v406; // [rsp+1320h] [rbp+12A0h]
  volatile signed __int64 ***v407; // [rsp+1328h] [rbp+12A8h]
  _BYTE *v408; // [rsp+1330h] [rbp+12B0h]
  __int64 v409; // [rsp+1338h] [rbp+12B8h]
  __int64 v410; // [rsp+1340h] [rbp+12C0h]
  __int64 v411; // [rsp+1348h] [rbp+12C8h]
  __int64 v412; // [rsp+1350h] [rbp+12D0h]
  __int64 v413; // [rsp+1358h] [rbp+12D8h]
  __int64 v414; // [rsp+1360h] [rbp+12E0h]
  volatile signed __int64 ***v415; // [rsp+1368h] [rbp+12E8h]
  _BYTE *v416; // [rsp+1370h] [rbp+12F0h]
  __int64 v417; // [rsp+1378h] [rbp+12F8h]
  __int64 v418; // [rsp+1380h] [rbp+1300h]
  __int64 v419; // [rsp+1388h] [rbp+1308h]
  __int64 v420; // [rsp+1390h] [rbp+1310h]
  __int64 v421; // [rsp+1398h] [rbp+1318h]
  volatile signed __int64 ***v422; // [rsp+13A0h] [rbp+1320h]
  _BYTE *v423; // [rsp+13A8h] [rbp+1328h]
  _BYTE *v424; // [rsp+13B0h] [rbp+1330h]
  _BYTE *v425; // [rsp+13B8h] [rbp+1338h]
  PVOID v426; // [rsp+13C0h] [rbp+1340h]
  _BYTE *v427; // [rsp+13C8h] [rbp+1348h]
  _BYTE *v428; // [rsp+13D0h] [rbp+1350h]
  PVOID v429; // [rsp+13D8h] [rbp+1358h]
  _BYTE *v430; // [rsp+13E0h] [rbp+1360h]
  __int64 *v431; // [rsp+13E8h] [rbp+1368h]
  __int128 v432; // [rsp+13F0h] [rbp+1370h] BYREF
  __int128 v433; // [rsp+1400h] [rbp+1380h]
  __int128 v434; // [rsp+1410h] [rbp+1390h]
  __int128 v435; // [rsp+1420h] [rbp+13A0h]
  __int128 v436; // [rsp+1430h] [rbp+13B0h]
  __int128 v437; // [rsp+1440h] [rbp+13C0h]
  __int64 v438; // [rsp+1450h] [rbp+13D0h]
  __int64 v439; // [rsp+1458h] [rbp+13D8h]
  __int64 v440; // [rsp+1460h] [rbp+13E0h]
  __int64 v441; // [rsp+1468h] [rbp+13E8h]
  __int64 v442; // [rsp+1470h] [rbp+13F0h]
  __int64 v443; // [rsp+1478h] [rbp+13F8h]
  __int64 v444; // [rsp+1480h] [rbp+1400h]
  __int64 v445; // [rsp+1488h] [rbp+1408h]
  __int64 v446; // [rsp+1490h] [rbp+1410h]
  volatile signed __int64 ***v447; // [rsp+1498h] [rbp+1418h]
  __int64 v448; // [rsp+14A0h] [rbp+1420h]
  __int64 v449; // [rsp+14A8h] [rbp+1428h]
  __int64 v450; // [rsp+14B0h] [rbp+1430h]
  __int64 v451; // [rsp+14B8h] [rbp+1438h]
  _BYTE *v452; // [rsp+14C0h] [rbp+1440h]
  PVOID v453; // [rsp+14C8h] [rbp+1448h]
  _BYTE *v454; // [rsp+14D0h] [rbp+1450h]
  _BYTE *v455; // [rsp+14D8h] [rbp+1458h]
  PVOID v456; // [rsp+14E0h] [rbp+1460h]
  _BYTE *v457; // [rsp+14E8h] [rbp+1468h]
  _BYTE *v458; // [rsp+14F0h] [rbp+1470h]
  _BYTE *v459; // [rsp+14F8h] [rbp+1478h]
  volatile signed __int64 ***v460; // [rsp+1500h] [rbp+1480h]
  _BYTE *v461; // [rsp+1508h] [rbp+1488h]
  _BYTE *v462; // [rsp+1510h] [rbp+1490h]
  PVOID v463; // [rsp+1518h] [rbp+1498h]
  _BYTE *v464; // [rsp+1520h] [rbp+14A0h]
  _QWORD *v465; // [rsp+1528h] [rbp+14A8h]
  _BYTE *v466; // [rsp+1530h] [rbp+14B0h]
  __int64 v467; // [rsp+1538h] [rbp+14B8h]
  volatile signed __int64 ***v468; // [rsp+1540h] [rbp+14C0h]
  _BYTE *v469; // [rsp+1548h] [rbp+14C8h]
  volatile signed __int64 **v470; // [rsp+1550h] [rbp+14D0h]
  _BYTE *v471; // [rsp+1558h] [rbp+14D8h]
  PVOID v472; // [rsp+1560h] [rbp+14E0h]
  _BYTE *v473; // [rsp+1568h] [rbp+14E8h]
  _BYTE *v474; // [rsp+1570h] [rbp+14F0h]
  PVOID v475; // [rsp+1578h] [rbp+14F8h]
  _BYTE *v476; // [rsp+1580h] [rbp+1500h]
  PVOID v477; // [rsp+1588h] [rbp+1508h]
  _BYTE *v478; // [rsp+1590h] [rbp+1510h]
  _DWORD v479[2]; // [rsp+1598h] [rbp+1518h]
  _DWORD v480[2]; // [rsp+15A0h] [rbp+1520h]
  _DWORD v481[2]; // [rsp+15A8h] [rbp+1528h]
  PVOID v482; // [rsp+15B0h] [rbp+1530h]
  _BYTE *v483; // [rsp+15B8h] [rbp+1538h]
  _QWORD *v484; // [rsp+15C0h] [rbp+1540h]
  __int64 v485; // [rsp+15C8h] [rbp+1548h]
  __int64 v486; // [rsp+15D0h] [rbp+1550h]
  PVOID v487; // [rsp+15D8h] [rbp+1558h]
  _BYTE *v488; // [rsp+15E0h] [rbp+1560h]
  PVOID v489; // [rsp+15E8h] [rbp+1568h]
  _BYTE *v490; // [rsp+15F0h] [rbp+1570h]
  _BYTE v491[7]; // [rsp+15F8h] [rbp+1578h]
  _BYTE *v492; // [rsp+1600h] [rbp+1580h]
  volatile signed __int64 ***v493; // [rsp+1608h] [rbp+1588h]
  char v494; // [rsp+1614h] [rbp+1594h]
  char v495; // [rsp+1615h] [rbp+1595h]
  char v496; // [rsp+1616h] [rbp+1596h]
  char v497; // [rsp+1617h] [rbp+1597h]
  _BYTE *v498; // [rsp+1618h] [rbp+1598h]
  char v499; // [rsp+1626h] [rbp+15A6h]
  char v500; // [rsp+1627h] [rbp+15A7h]
  _BYTE *v501; // [rsp+1628h] [rbp+15A8h]
  _BYTE *v502; // [rsp+1630h] [rbp+15B0h]
  char v503; // [rsp+163Fh] [rbp+15BFh] BYREF
  PVOID Address; // [rsp+1640h] [rbp+15C0h]
  _BYTE *v505; // [rsp+1648h] [rbp+15C8h]
  __int64 v506; // [rsp+1650h] [rbp+15D0h]
  __int64 v507; // [rsp+1658h] [rbp+15D8h]

  v507 = -2;
  v486 = a3;
  v4 = a2;
  v431 = a1;
  v5 = *(unsigned __int8 *)(a2 + 240);
  v506 = a2;
  switch ( v5 )
  {
    case 0LL:
      *(_WORD *)(a2 + 241) = 0;
      *(_OWORD *)(a2 + 80) = *(_OWORD *)(a2 + 64);
      v6 = *(_OWORD *)(a2 + 16);
      v7 = *(_OWORD *)(a2 + 32);
      v8 = *(_OWORD *)(a2 + 48);
      *(_OWORD *)(a2 + 96) = *(_OWORD *)a2;
      *(_OWORD *)(a2 + 112) = v6;
      *(_OWORD *)(a2 + 128) = v7;
      *(_OWORD *)(a2 + 144) = v8;
      sub_1404B6220(v327, a2 + 96);
      if ( *(_DWORD *)v327 != -1 )
      {
        *(_OWORD *)&v358[80] = v330;
        *(_OWORD *)&v358[64] = v329;
        *(_OWORD *)&v358[48] = v328;
        *(_OWORD *)&v358[32] = *(_OWORD *)&v327[32];
        *(_OWORD *)&v358[16] = *(_OWORD *)&v327[16];
        *(_OWORD *)v358 = *(_OWORD *)v327;
        *(_QWORD *)&v322 = 0;
        *((_QWORD *)&v322 + 1) = 1;
        v323 = 0;
        *(_QWORD *)&v378[16] = 1610612768;
        *(_QWORD *)v378 = &v322;
        *(_QWORD *)&v378[8] = &off_141A19198;
        if ( (unsigned __int8)sub_140D76130(v358, v378) )
          sub_14196B5F0(
            (unsigned int)aADisplayImplem_0,
            55,
            (unsigned int)&v503,
            (unsigned int)&unk_141A10708,
            (__int64)&off_141A19250);
        v13 = *((_BYTE **)&v322 + 1);
        v12 = v322;
        LOBYTE(v14) = v323;
        LODWORD(v228) = *(_DWORD *)((char *)&v323 + 1);
        *(_DWORD *)((char *)&v228 + 3) = HIDWORD(v323);
        sub_140292440(v327);
        if ( v12 != -1 )
        {
          v15 = v228;
          v16 = *(_DWORD *)((char *)&v228 + 3);
LABEL_19:
          *(_DWORD *)&v491[3] = v16;
          *(_DWORD *)v491 = v15;
          goto LABEL_86;
        }
      }
      v13 = *(_BYTE **)(v506 + 88);
      LOBYTE(v10) = 1;
      if ( _InterlockedCompareExchange8(v13, 1, 0) )
        sub_141969A30(v13);
      v27 = off_142240260;
      if ( 2 * *off_142240260 )
      {
        v217 = sub_14196A710(v10, v9, v11);
        LOBYTE(v217) = v217 ^ 1;
        LODWORD(v505) = v217;
        if ( !v13[1] )
          goto LABEL_28;
      }
      else
      {
        LODWORD(v505) = 0;
        if ( !v13[1] )
          goto LABEL_28;
      }
      Address = v13;
      *(_QWORD *)v327 = 0;
      *(_QWORD *)&v327[8] = 1;
      *(_QWORD *)&v327[16] = 0;
      *(_QWORD *)&v358[16] = 1610612768;
      *(_QWORD *)v358 = v327;
      *(_QWORD *)&v358[8] = &off_141A19198;
      if ( (unsigned __int8)sub_1416EC060(aPoisonedLockAn, 41, v358) )
        sub_14196B5F0(
          (unsigned int)aADisplayImplem_0,
          55,
          (unsigned int)&v503,
          (unsigned int)&unk_141A10708,
          (__int64)&off_141A19250);
      v13 = *(_BYTE **)&v327[8];
      v12 = *(_QWORD *)v327;
      v14 = v327[16];
      *(_DWORD *)v378 = *(_DWORD *)&v327[17];
      *(_DWORD *)&v378[3] = *(_DWORD *)&v327[20];
      if ( !(_BYTE)v505 && 2 * *v27 && !(unsigned __int8)sub_14196A710(v29, v28, v30) )
        *((_BYTE *)Address + 1) = 1;
      v31 = Address;
      v32 = *(_BYTE *)Address;
      *(_BYTE *)Address = 0;
      if ( v32 == 2 )
        WakeByAddressSingle(v31);
      *(_DWORD *)((char *)&v322 + 3) = *(_DWORD *)&v378[3];
      LODWORD(v322) = *(_DWORD *)v378;
      if ( v12 != -1 )
      {
        v15 = v322;
        v16 = *(_DWORD *)((char *)&v322 + 3);
        goto LABEL_19;
      }
      LODWORD(v505) = v14;
LABEL_28:
      Address = v13;
      sub_140D05F20(v327, v13 + 8);
      if ( *(_DWORD *)v327 != -1 )
      {
        *(_OWORD *)&v358[80] = v330;
        *(_OWORD *)&v358[64] = v329;
        *(_OWORD *)&v358[48] = v328;
        *(_OWORD *)&v358[32] = *(_OWORD *)&v327[32];
        *(_OWORD *)&v358[16] = *(_OWORD *)&v327[16];
        *(_OWORD *)v358 = *(_OWORD *)v327;
        *(_QWORD *)&v322 = 0;
        *((_QWORD *)&v322 + 1) = 1;
        v323 = 0;
        *(_QWORD *)&v378[16] = 1610612768;
        *(_QWORD *)v378 = &v322;
        *(_QWORD *)&v378[8] = &off_141A19198;
        if ( (unsigned __int8)sub_140D76130(v358, v378) )
          sub_14196B5F0(
            (unsigned int)aADisplayImplem_0,
            55,
            (unsigned int)&v503,
            (unsigned int)&unk_141A10708,
            (__int64)&off_141A19250);
        v13 = *((_BYTE **)&v322 + 1);
        v12 = v322;
        LOBYTE(v14) = v323;
        LODWORD(v228) = *(_DWORD *)((char *)&v323 + 1);
        *(_DWORD *)((char *)&v228 + 3) = HIDWORD(v323);
        sub_140292440(v327);
        v481[0] = v228;
        *(_DWORD *)((char *)v481 + 3) = *(_DWORD *)((char *)&v228 + 3);
        *(_DWORD *)v491 = v481[0];
        *(_DWORD *)&v491[3] = *(_DWORD *)((char *)&v228 + 3);
        if ( ((unsigned __int8)v505 & 1) == 0
          && 2 * *v27
          && !(unsigned __int8)sub_14196A710(*(unsigned int *)((char *)&v228 + 3), v38, v39) )
        {
          *((_BYTE *)Address + 1) = 1;
        }
        v40 = Address;
        v41 = *(_BYTE *)Address;
        *(_BYTE *)Address = 0;
        if ( v41 == 2 )
          WakeByAddressSingle(v40);
        goto LABEL_86;
      }
      v502 = *(_BYTE **)&v327[8];
      v501 = *(_BYTE **)&v327[16];
      v42 = v327[24];
      LODWORD(v228) = *(_DWORD *)&v327[25];
      *(_DWORD *)((char *)&v228 + 3) = *(_DWORD *)&v327[28];
      v481[0] = v228;
      *(_DWORD *)((char *)v481 + 3) = *(_DWORD *)&v327[28];
      sub_140D1FDB0(v327, v13 + 8);
      if ( *(_DWORD *)v327 != -1 )
      {
        *(_OWORD *)&v358[80] = v330;
        *(_OWORD *)&v358[64] = v329;
        *(_OWORD *)&v358[48] = v328;
        *(_OWORD *)&v358[32] = *(_OWORD *)&v327[32];
        *(_OWORD *)&v358[16] = *(_OWORD *)&v327[16];
        *(_OWORD *)v358 = *(_OWORD *)v327;
        *(_QWORD *)&v322 = 0;
        *((_QWORD *)&v322 + 1) = 1;
        v323 = 0;
        *(_QWORD *)&v378[16] = 1610612768;
        *(_QWORD *)v378 = &v322;
        *(_QWORD *)&v378[8] = &off_141A19198;
        if ( (unsigned __int8)sub_140D76130(v358, v378) )
          sub_14196B5F0(
            (unsigned int)aADisplayImplem_0,
            55,
            (unsigned int)&v503,
            (unsigned int)&unk_141A10708,
            (__int64)&off_141A19250);
        v13 = *((_BYTE **)&v322 + 1);
        v12 = v322;
        LOBYTE(v14) = v323;
        LODWORD(v228) = *(_DWORD *)((char *)&v323 + 1);
        *(_DWORD *)((char *)&v228 + 3) = HIDWORD(v323);
        sub_140292440(v327);
        v480[0] = v228;
        *(_DWORD *)((char *)v480 + 3) = *(_DWORD *)((char *)&v228 + 3);
        v44 = *(unsigned int *)((char *)&v228 + 3);
        *(_DWORD *)v491 = v480[0];
        *(_DWORD *)&v491[3] = *(_DWORD *)((char *)&v228 + 3);
        v45 = v502;
        if ( v502 )
          sub_140001660(v501, v502, 1);
        v46 = (char *)Address;
        if ( ((unsigned __int8)v505 & 1) == 0 && 2 * *v27 && !(unsigned __int8)sub_14196A710(v44, v45, v43) )
          v46[1] = 1;
        v47 = *v46;
        *v46 = 0;
        if ( v47 == 2 )
          WakeByAddressSingle(v46);
        goto LABEL_86;
      }
      v75 = *(_QWORD *)&v327[8];
      v76 = *(_QWORD *)&v327[16];
      v77 = v327[24];
      LODWORD(v228) = *(_DWORD *)&v327[25];
      *(_DWORD *)((char *)&v228 + 3) = *(_DWORD *)&v327[28];
      v480[0] = v228;
      *(_DWORD *)((char *)v480 + 3) = *(_DWORD *)&v327[28];
      sub_14002B980(Address, (unsigned int)v505);
      v78 = v506;
      *(_QWORD *)(v506 + 160) = v502;
      *(_QWORD *)(v78 + 168) = v501;
      *(_BYTE *)(v78 + 176) = v42;
      v79 = *(_DWORD *)((char *)v481 + 3);
      *(_DWORD *)(v78 + 177) = v481[0];
      *(_DWORD *)(v78 + 180) = v79;
      *(_QWORD *)(v78 + 184) = v75;
      *(_QWORD *)(v78 + 192) = v76;
      *(_BYTE *)(v78 + 200) = v77;
      v80 = *(_DWORD *)((char *)v480 + 3);
      *(_DWORD *)(v78 + 201) = v480[0];
      *(_DWORD *)(v78 + 204) = v80;
      sub_140460B40(v78 + 208);
      sub_1416B0D00(v305, *(_QWORD *)(v506 + 216), *(_QWORD *)(v506 + 224));
      v81 = v506;
      *(_BYTE *)(v506 + 242) = 1;
      sub_1403F9D50(v227, *(_QWORD *)(v81 + 80));
      *(_BYTE *)(v81 + 241) = 1;
      *(_QWORD *)v327 = v81 + 136;
      *(_QWORD *)&v327[8] = sub_1400015F0;
      sub_1403F7C60(v358, &unk_141A0EFBF, v327);
      *(_OWORD *)v327 = *(_OWORD *)v358;
      *(_QWORD *)&v327[16] = *(_QWORD *)&v358[16];
      sub_1406C9730((unsigned int)aDebugReport, 12, (unsigned int)aUploadStarted, 14, (__int64)v327);
      *(_WORD *)(v506 + 241) = 0;
      *(_OWORD *)&v358[16] = v305[1];
      *(_OWORD *)v358 = v305[0];
      *(_OWORD *)&v358[32] = v227[0];
      *(_OWORD *)&v358[48] = v227[1];
      *(_OWORD *)&v358[64] = v227[2];
      *(_OWORD *)&v358[80] = v227[3];
      v82 = sub_140662630(v358);
      v4 = v506;
      *(_QWORD *)(v506 + 248) = v82;
LABEL_64:
      Address = (PVOID)(v4 + 248);
      sub_140B5DDD0(v358, v4 + 248, v486);
      v83 = *(_QWORD *)v358;
      if ( *(_QWORD *)v358 != -3 )
      {
        if ( *(_QWORD *)v358 == -2 )
        {
          v84 = *(_QWORD *)&v358[8];
          v85 = v358[16];
          *(_DWORD *)v378 = *(_DWORD *)&v358[17];
          *(_DWORD *)&v378[3] = *(_DWORD *)&v358[20];
          v86 = 0x800000000000000CuLL;
          v87 = *(_QWORD *)&v358[24];
        }
        else
        {
          v86 = *(_QWORD *)&v358[8];
          v84 = *(_QWORD *)&v358[16];
          v85 = v358[24];
          *(_DWORD *)v378 = *(_DWORD *)&v358[25];
          *(_DWORD *)&v378[3] = *(_DWORD *)&v358[28];
          v87 = *(_QWORD *)&v358[32];
          *(_OWORD *)v327 = *(_OWORD *)&v358[40];
          *(_OWORD *)&v327[16] = *(_OWORD *)&v358[56];
          *(_OWORD *)&v327[32] = *(_OWORD *)&v358[72];
          v328 = *(_OWORD *)&v358[88];
          *(_QWORD *)&v329 = *(_QWORD *)&v358[104];
        }
        v479[0] = *(_DWORD *)v378;
        *(_DWORD *)((char *)v479 + 3) = *(_DWORD *)&v378[3];
        v313 = *(_OWORD *)v327;
        v314 = *(_OWORD *)&v327[16];
        v315 = *(_OWORD *)&v327[32];
        v316 = v328;
        v317 = v329;
        v89 = *(_QWORD *)Address;
        if ( (unsigned __int8)sub_141532BE0(*(_QWORD *)Address) )
          sub_1415334F0(v89);
        if ( v83 == -1 )
        {
          *(_QWORD *)v358 = v86;
          *(_QWORD *)&v358[8] = v84;
          v358[16] = v85;
          *(_DWORD *)&v358[17] = v479[0];
          *(_DWORD *)&v358[20] = *(_DWORD *)((char *)v479 + 3);
          *(_QWORD *)&v358[24] = v87;
          *(_OWORD *)&v358[32] = v313;
          *(_OWORD *)&v358[48] = v314;
          *(_OWORD *)&v358[64] = v315;
          *(_OWORD *)&v358[80] = v316;
          *(_QWORD *)v378 = 0;
          *(_QWORD *)&v378[8] = 1;
          *(_QWORD *)&v378[16] = 0;
          *(_QWORD *)&v327[16] = 1610612768;
          *(_QWORD *)v327 = v378;
          *(_QWORD *)&v327[8] = &off_141A19198;
          if ( (unsigned __int8)sub_140D76130(v358, v327) )
            sub_14196B5F0(
              (unsigned int)aADisplayImplem_0,
              55,
              (unsigned int)&v503,
              (unsigned int)&unk_141A10708,
              (__int64)&off_141A19250);
          v13 = *(_BYTE **)&v378[8];
          v12 = *(_QWORD *)v378;
          LOBYTE(v14) = v378[16];
          LODWORD(v322) = *(_DWORD *)&v378[17];
          *(_DWORD *)((char *)&v322 + 3) = *(_DWORD *)&v378[20];
          sub_140292440(v358);
          *(_DWORD *)v491 = v322;
          *(_DWORD *)&v491[3] = *(_DWORD *)((char *)&v322 + 3);
          goto LABEL_76;
        }
        if ( v83 == -2 )
        {
          *(_QWORD *)v358 = v86;
          *(_QWORD *)&v358[8] = v84;
          v358[16] = v85;
          *(_DWORD *)&v358[17] = v479[0];
          *(_DWORD *)&v358[20] = *(_DWORD *)((char *)v479 + 3);
          *(_QWORD *)&v358[24] = v87;
          *(_OWORD *)&v358[32] = v313;
          *(_QWORD *)v378 = v358;
          *(_QWORD *)&v378[8] = sub_141473A60;
          sub_1416DAFA0(v327, &unk_141A0E1B2, v378);
          sub_14028D380(v358);
          v13 = *(_BYTE **)&v327[8];
          v12 = *(_QWORD *)v327;
          LOBYTE(v14) = v327[16];
          *(_DWORD *)v491 = *(_DWORD *)&v327[17];
          *(_DWORD *)&v491[3] = *(_DWORD *)&v327[20];
LABEL_76:
          v90 = v506;
          *(_BYTE *)(v506 + 241) = 0;
          *(_BYTE *)(v90 + 242) = 0;
          v91 = sub_1416C4110(*(_QWORD *)(v90 + 216), *(_QWORD *)(v90 + 224));
          if ( v91 && (unsigned int)(v91 & 3) - 2 >= 2 && (v91 & 3) != 0 )
          {
            *(_QWORD *)&v358[8] = v91 - 1;
            v358[0] = 3;
            sub_1416EBAD0(&v358[8]);
          }
          v92 = (_QWORD *)v506;
          v93 = *(_QWORD *)(v506 + 208);
          if ( v93 )
            sub_140001660(*(_QWORD *)(v506 + 216), v93, 1);
          v94 = v92[23];
          if ( v94 )
            sub_140001660(v92[24], v94, 1);
          v95 = v92[20];
          if ( v95 )
            sub_140001660(v92[21], v95, 1);
LABEL_86:
          v4 = v506;
          v96 = *(_QWORD *)(v506 + 112);
          if ( v96 )
            sub_140001660(*(_QWORD *)(v506 + 120), v96, 1);
          v97 = *(_QWORD *)(v4 + 136);
          v98 = -1;
          if ( !v97 )
            goto LABEL_90;
          goto LABEL_89;
        }
        v104 = v506;
        v21 = v506 + 1088;
        *(_QWORD *)(v506 + 1088) = v83;
        *(_QWORD *)(v104 + 1096) = v86;
        v4 = v104;
        *(_QWORD *)(v104 + 1104) = v84;
        *(_BYTE *)(v104 + 1112) = v85;
        v105 = *(_DWORD *)((char *)v479 + 3);
        *(_DWORD *)(v104 + 1113) = v479[0];
        *(_DWORD *)(v104 + 1116) = v105;
        *(_QWORD *)(v104 + 1120) = v87;
        v106 = v314;
        v107 = v315;
        v108 = v316;
        *(_OWORD *)(v104 + 1128) = v313;
        *(_OWORD *)(v104 + 1144) = v106;
        *(_OWORD *)(v104 + 1160) = v107;
        *(_OWORD *)(v104 + 1176) = v108;
        *(_QWORD *)(v104 + 1192) = v317;
        v19 = *(_QWORD *)(v104 + 216);
        v20 = *(_QWORD *)(v104 + 224);
        v22 = *(_QWORD *)(v104 + 168);
        v23 = *(_QWORD *)(v4 + 176);
        v24 = *(_QWORD *)(v4 + 192);
        v25 = *(_QWORD *)(v4 + 200);
        v26 = v4 + 96;
        *(_QWORD *)(v4 + 280) = v19;
        *(_QWORD *)(v4 + 288) = v20;
        *(_QWORD *)(v4 + 296) = v22;
        *(_QWORD *)(v4 + 304) = v23;
        *(_QWORD *)(v4 + 312) = v24;
        *(_QWORD *)(v4 + 320) = v25;
        *(_QWORD *)(v4 + 352) = v21;
        *(_QWORD *)(v4 + 360) = v4 + 96;
        v17 = (_BYTE *)(v4 + 371);
        *(_BYTE *)(v4 + 371) = 0;
        v18 = Address;
LABEL_92:
        *(_BYTE *)(v4 + 370) = 0;
        *(_WORD *)(v4 + 368) = 0;
        *(_QWORD *)(v4 + 328) = v21;
        *(_QWORD *)(v4 + 248) = v22;
        *(_QWORD *)(v4 + 256) = v23;
        *(_QWORD *)(v4 + 264) = v24;
        *(_QWORD *)(v4 + 272) = v25;
        *(_QWORD *)(v4 + 336) = v26;
        v373 = v17;
        v372 = v18;
        sub_1404B6220(v358, v26);
        v68 = *(_QWORD *)v358;
        if ( *(_QWORD *)v358 != -1 )
        {
          v48 = *(_QWORD *)&v358[8];
          v377 = *(_OWORD *)&v358[16];
          v3 = *(_QWORD *)&v358[32];
          v352 = *(_OWORD *)&v358[40];
          v353 = *(_OWORD *)&v358[56];
          v354 = *(_OWORD *)&v358[72];
          v355 = *(_QWORD *)&v358[88];
          goto LABEL_220;
        }
        v4 = v506;
        *(_QWORD *)(v506 + 392) = v19;
        *(_QWORD *)(v4 + 400) = v20;
        v492 = (_BYTE *)(v4 + 523);
        *(_BYTE *)(v4 + 523) = 0;
        v37 = (_BYTE *)(v4 + 376);
LABEL_95:
        *(_WORD *)(v4 + 520) = 0;
        *(_BYTE *)(v4 + 522) = 0;
        *(_QWORD *)(v4 + 376) = v19;
        *(_QWORD *)(v4 + 384) = v20;
        v476 = v17;
        v475 = v18;
        v474 = v37;
        v109 = sub_1416B1C00(v19, v20);
        v502 = v37;
        if ( v109 )
        {
          v476 = v17;
          v475 = v18;
          v474 = v37;
          sub_1416DA570(v327);
          v505 = v17;
          v110 = *(_QWORD *)&v327[8];
          v111 = *(_QWORD *)v327;
          v112 = *(_QWORD *)&v327[16];
          Address = v18;
          if ( *(_QWORD *)v327 == -1 )
          {
            sub_1401E7560((unsigned int)v358, *(_DWORD *)&v327[16], 0, 1, 1);
            v111 = *(_QWORD *)&v358[8];
            v114 = v506;
            if ( *(_DWORD *)v358 == 1 )
            {
              v476 = v505;
              v475 = Address;
              v474 = v502;
              sub_14196B2DB(*(_QWORD *)&v358[8], *(_QWORD *)&v358[16]);
            }
            v113 = *(_QWORD *)&v358[16];
            if ( v112 )
              sub_1419234B0(*(_QWORD *)&v358[16], v110, v112);
            else
              v112 = 0;
          }
          else
          {
            v113 = *(_QWORD *)&v327[8];
            v114 = v506;
          }
          v37 = v502;
          *(_QWORD *)(v114 + 408) = v111;
          *(_QWORD *)(v114 + 416) = v113;
          *(_QWORD *)(v114 + 424) = v112;
          v18 = Address;
          v17 = v505;
        }
        else
        {
          v114 = v506;
          *(_QWORD *)(v506 + 408) = -1;
        }
        *(_BYTE *)(v114 + 522) = 1;
        v430 = v17;
        v429 = v18;
        v428 = v37;
        v123 = sub_1416B1B90(v19, v20);
        if ( v123 )
        {
          v430 = v17;
          v429 = v18;
          v428 = v37;
          sub_1416E2AB0(v358, v123, v124);
          if ( v358[0] )
            v125 = 0;
          else
            v125 = *(_QWORD *)&v358[8];
          v124 = *(_QWORD *)&v358[16];
        }
        else
        {
          v125 = 0;
        }
        v126 = 1;
        if ( v125 )
          v126 = v125;
        else
          v124 = 0;
        v454 = v17;
        v453 = v18;
        v452 = v37;
        *(_QWORD *)&v127 = sub_1413F6C40(v126, v124);
        *(_OWORD *)v358 = v127;
        v454 = v17;
        v453 = v18;
        v452 = v37;
        sub_1413F6C50(v506 + 432, v358);
        v71 = v17;
        v4 = v506;
        *(_BYTE *)(v506 + 521) = 1;
        v501 = (_BYTE *)(v4 + 528);
        *(_QWORD *)(v4 + 528) = v19;
        *(_QWORD *)(v4 + 536) = v20;
        v374 = (_BYTE *)(v4 + 749);
        *(_BYTE *)(v4 + 749) = 0;
LABEL_128:
        v118 = (__int128 *)(v4 + 712);
        *(_DWORD *)(v4 + 712) = 0;
        *(_QWORD *)(v4 + 720) = 0;
        *(_DWORD *)(v4 + 728) = 7;
        *(_QWORD *)(v4 + 732) = 0;
        *(_QWORD *)(v4 + 737) = 0;
        *(_BYTE *)(v4 + 736) = 1;
        *(_BYTE *)(v4 + 748) = 0;
        v493 = (volatile signed __int64 ***)(v4 + 544);
        *(_QWORD *)(v4 + 544) = v4 + 712;
        *(_QWORD *)(v4 + 552) = v19;
        *(_QWORD *)(v4 + 560) = v20;
        v498 = (_BYTE *)(v4 + 704);
        *(_BYTE *)(v4 + 704) = 0;
LABEL_129:
        *(_QWORD *)(v4 + 584) = v19;
        *(_QWORD *)(v4 + 592) = v20;
        *(_QWORD *)(v4 + 688) = v118;
        v375 = (_BYTE *)(v4 + 697);
        *(_BYTE *)(v4 + 697) = 0;
LABEL_130:
        *(_BYTE *)(v4 + 696) = 0;
        *(_QWORD *)(v4 + 568) = v19;
        *(_QWORD *)(v4 + 576) = v20;
        v427 = v71;
        v426 = v18;
        v425 = v502;
        v424 = v501;
        v423 = v498;
        v422 = v493;
        v421 = v4 + 568;
        sub_1416B0D00(v345, v19, v20);
        v128 = v506;
        *(_BYTE *)(v506 + 696) = 1;
        v129 = *((_BYTE *)v118 + 32);
        v130 = (__int128 *)(v128 + 600);
        v131 = *v118;
        v132 = v118[1];
        *(_BYTE *)(v128 + 696) = 0;
        v133 = v345[0];
        *(_OWORD *)(v128 + 616) = v345[1];
        *(_OWORD *)(v128 + 600) = v133;
        *(_OWORD *)(v128 + 632) = v131;
        *(_OWORD *)(v128 + 648) = v132;
        *(_BYTE *)(v128 + 664) = v129;
        v134 = (_BYTE *)(v128 + 680);
        *(_BYTE *)(v128 + 680) = 0;
        v17 = v71;
        v37 = v502;
        v3 = (__int64)v492;
        v70 = (volatile signed __int64 **)v501;
        v135 = v4 + 568;
LABEL_131:
        *(_QWORD *)&v358[64] = *((_QWORD *)v130 + 8);
        v136 = *v130;
        v137 = v130[1];
        v138 = v130[2];
        *(_OWORD *)&v358[48] = v130[3];
        *(_OWORD *)&v358[32] = v138;
        *(_OWORD *)&v358[16] = v137;
        *(_OWORD *)v358 = v136;
        v473 = v17;
        v472 = v18;
        v471 = v37;
        v470 = v70;
        v469 = v498;
        v468 = v493;
        v467 = v135;
        v492 = v134;
        v466 = v134;
        v484 = v130;
        v465 = v130;
        v139 = sub_140061680(v358, &off_141A0BEB8);
        v485 = v135;
        v501 = v70;
        v502 = v37;
        v505 = v17;
        Address = v18;
        v4 = v506;
        *(_QWORD *)(v506 + 672) = v139;
LABEL_132:
        v376 = (__int64 *)(v4 + 672);
        sub_140B5D6D0(&v364, v4 + 672, v486);
        if ( v364.m256i_i8[0] )
        {
          *v492 = 3;
          *v375 = 3;
          *v498 = 3;
          *v374 = 3;
          v140 = 3;
LABEL_147:
          *(_BYTE *)v3 = v140;
          v4 = v506;
LABEL_148:
          v56 = v505;
          v34 = 3;
          goto LABEL_149;
        }
        v357 = v364.m256i_i64[3];
        v356 = *(_OWORD *)&v364.m256i_u64[1];
        v141 = *v376;
        v17 = v505;
        v473 = v505;
        v18 = Address;
        v472 = Address;
        v37 = v502;
        v471 = v502;
        v73 = (volatile signed __int64 **)v501;
        v470 = (volatile signed __int64 **)v501;
        v469 = v498;
        v468 = v493;
        v142 = v485;
        v467 = v485;
        v466 = v492;
        v465 = v484;
        if ( (unsigned __int8)sub_141532BE0(v141) )
        {
          v473 = v17;
          v472 = v18;
          v471 = v37;
          v470 = v73;
          v469 = v498;
          v468 = v493;
          v467 = v142;
          v466 = v492;
          v465 = v484;
          sub_1415334F0(v141);
        }
        if ( (_QWORD)v356 )
        {
          LOBYTE(v143) = 41;
          v144 = sub_1416A8370(v143, aBackgroundTask, 22);
          v17 = v505;
          v473 = v505;
          v18 = Address;
          v472 = Address;
          v37 = v502;
          v471 = v502;
          v73 = (volatile signed __int64 **)v501;
          v470 = (volatile signed __int64 **)v501;
          v469 = v498;
          v468 = v493;
          v467 = v485;
          v466 = v492;
          v465 = v484;
          sub_1402381D0(&v356);
          *v492 = 1;
        }
        else
        {
          v144 = v357;
          v145 = BYTE8(v356) == 0;
          *v492 = 1;
          if ( v145 )
          {
            v371 = v17;
            v370 = v18;
            v369 = v37;
            v368 = v73;
            v367 = v498;
            v366 = v493;
            v365 = v142;
            sub_141549EE0(v358, v144);
            v144 = *(_QWORD *)&v358[8];
            v146 = *(_QWORD *)v358;
            *(_OWORD *)v327 = *(_OWORD *)&v358[16];
            *(_OWORD *)&v327[16] = *(_OWORD *)&v358[32];
            *(_OWORD *)&v327[32] = *(_OWORD *)&v358[48];
            v328 = *(_OWORD *)&v358[64];
            v329 = *(_OWORD *)&v358[80];
            *(_QWORD *)&v330 = *(_QWORD *)&v358[96];
LABEL_140:
            v4 = v506;
            *(_BYTE *)(v506 + 696) = 0;
            v432 = *(_OWORD *)v327;
            v433 = *(_OWORD *)&v327[16];
            v434 = *(_OWORD *)&v327[32];
            v435 = v328;
            v436 = v329;
            *(_QWORD *)&v437 = v330;
            *(_BYTE *)(v4 + 697) = 1;
            *(_BYTE *)(v4 + 704) = 1;
            *(_WORD *)(v4 + 748) = 256;
            v276 = v437;
            v275 = v436;
            v274 = v435;
            v273 = v434;
            v272 = v433;
            v271 = v432;
            if ( !v146 )
            {
              *(_BYTE *)(v4 + 520) = 0;
              if ( *(_BYTE *)(v4 + 480) )
              {
                v164 = *(_QWORD *)(v4 + 488);
                if ( v164 )
                  sub_140001660(*(_QWORD *)(v4 + 496), v164, 1);
              }
              v165 = *(_QWORD *)(v4 + 448);
              if ( v165 > 0 )
                sub_140001660(*(_QWORD *)(v4 + 456), 32 * v165, 8);
              *(_BYTE *)(v4 + 521) = 0;
              v166 = *(_QWORD *)(v4 + 408);
              v167 = 2;
              if ( v166 != -1 && v166 )
                sub_140001660(*(_QWORD *)(v4 + 416), v166, 1);
LABEL_176:
              *(_BYTE *)(v4 + 522) = 0;
              v247 = v237;
              v285 = v277;
              v286 = v278;
              v287 = v279;
              v288 = v280;
              v248 = v306;
              v249 = v307;
              v250 = v308;
              v251 = v309;
              v252 = v310;
              v253 = v311;
              v254 = v238;
              *(_BYTE *)(v4 + 523) = 1;
              if ( v167 == -1 )
                goto LABEL_148;
              v239 = v247;
              v281 = v285;
              v282 = v286;
              v283 = v287;
              v284 = v288;
              v240 = v248;
              v241 = v249;
              v242 = v250;
              v243 = v251;
              v244 = v252;
              v245 = v253;
              v246 = v254;
              v488 = v505;
              v487 = Address;
              sub_14025EB80(v502);
              if ( v167 == 2 )
              {
                *(_QWORD *)&v306 = v144;
                *(_QWORD *)v327 = &v306;
                *(_QWORD *)&v327[8] = sub_1416EA080;
                sub_1416DAFA0(v358, &unk_141A0E108, v327);
                v48 = *(_QWORD *)v358;
                v432 = *(_OWORD *)&v358[8];
                if ( (unsigned int)(v306 & 3) - 2 >= 2 && (v306 & 3) != 0 )
                {
                  *(_QWORD *)&v327[8] = v306 - 1;
                  v327[0] = 3;
                  v488 = v505;
                  v487 = Address;
                  sub_1416EBAD0(&v327[8]);
                }
                v255 = v432;
                v377 = v432;
                v352 = v289;
                v353 = v290;
                v354 = v291;
                v355 = v292;
                goto LABEL_186;
              }
              v388 = v245;
              v387 = v244;
              v386 = v243;
              v385 = v242;
              v384 = v241;
              v383 = v240;
              v389 = v3;
              v390 = v73;
              v391 = v37;
              v392 = v246;
              v255 = v239;
              v292 = v284;
              v291 = v283;
              v290 = v282;
              v289 = v281;
              *(_OWORD *)&v378[24] = v239;
              v382 = v284;
              v381 = v283;
              v380 = v282;
              v379 = v281;
              *(_QWORD *)v378 = v167;
              *(_QWORD *)&v378[8] = v144;
              *(_QWORD *)&v378[16] = v501;
              *(_QWORD *)&v378[40] = v18;
              sub_1416DB410(v358, *(_QWORD *)(v506 + 328) + 24LL);
              if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFCuLL )
                sub_140001660(v73, v3, 1);
              v177 = *(_OWORD *)v358;
              v3 = *(_QWORD *)&v358[16];
              sub_1419234B0(&v323, &v378[16], 184);
              v324 = v177;
              v325 = v3;
              v326 = v392;
              *(_QWORD *)&v322 = v167;
              *((_QWORD *)&v322 + 1) = v144;
              v488 = v505;
              v487 = Address;
              sub_14126F720(&v228, &v322, aApplicationZip, 15);
              v178 = v228;
              if ( v228 == 2 )
              {
                *(_QWORD *)v378 = v229;
                *(_QWORD *)v327 = v378;
                *(_QWORD *)&v327[8] = sub_141246C00;
                sub_1416DAFA0(v358, &unk_141A0E16E, v327);
                v48 = *(_QWORD *)v358;
                v346 = *(_OWORD *)&v358[8];
                v488 = v505;
                v487 = Address;
                sub_14028DCE0(*(_QWORD *)v378);
                v256 = v346;
                v293 = v318;
                v294 = v319;
                v295 = v320;
                v296 = v321;
                v377 = v346;
                v355 = v321;
                v354 = v320;
                v353 = v319;
                v352 = v318;
LABEL_186:
                v68 = 10;
                *(_BYTE *)(v506 + 370) = 0;
                v18 = Address;
                v17 = v505;
                goto LABEL_220;
              }
              v179 = v229;
              v346 = v230;
              v180 = v231;
              v318 = v232;
              v319 = v233;
              v320 = v234;
              v321 = v235;
              sub_1419234B0(v226, v236, 152);
              v256 = v346;
              v296 = v321;
              v295 = v320;
              v294 = v319;
              v293 = v318;
              v220 = v346;
              v222 = v318;
              v223 = v319;
              v224 = v320;
              v225 = v321;
              *(_BYTE *)(v506 + 370) = 1;
              v218 = v178;
              v219 = v179;
              v221 = v180;
              v490 = v505;
              v489 = Address;
              sub_141270F70(v358);
              v181 = *(_QWORD *)(v506 + 336) + 40LL;
              v497 = 1;
              sub_1416DB410(v378, v181);
              v497 = 0;
              sub_14065FE80((unsigned int)v327, (unsigned int)v358, (unsigned int)aCategory, 8, (__int64)v378);
              v182 = sub_1408FEA60(
                       *(_QWORD *)(*(_QWORD *)(v506 + 336) + 24LL),
                       *(_QWORD *)(*(_QWORD *)(v506 + 336) + 32LL));
              v496 = 1;
              sub_14072B2A0(v378, v182, v183);
              v496 = 0;
              sub_14065FE80((unsigned int)v358, (unsigned int)v327, (unsigned int)aUsernote, 8, (__int64)v378);
              v184 = *(_QWORD *)(v506 + 328) + 48LL;
              v495 = 1;
              sub_1416DB410(v378, v184);
              v495 = 0;
              sub_14065FE80((unsigned int)v327, (unsigned int)v358, (unsigned int)aSummary, 7, (__int64)v378);
              v185 = *(_QWORD *)(v506 + 328) + 72LL;
              v494 = 1;
              sub_1416DB410(v378, v185);
              v494 = 0;
              sub_14065FE80((unsigned int)v358, (unsigned int)v327, (unsigned int)aTargetmode, 10, (__int64)v378);
              v186 = *(unsigned __int8 *)(*(_QWORD *)(v506 + 328) + 104LL);
              v3 = v186 ^ 5;
              sub_1401E7560((unsigned int)v327, v186 ^ 5, 0, 1, 1);
              v187 = *(_QWORD *)&v327[8];
              v502 = *(_BYTE **)v327;
              if ( *(_QWORD *)v327 == 1 )
                sub_14196B2DB(*(_QWORD *)&v327[8], *(_QWORD *)&v327[16]);
              v188 = aFalsetrue_1;
              if ( (_BYTE)v186 )
                v188 = &aFalsetrue_1[5];
              v189 = *(_QWORD *)&v327[16];
              sub_1419234B0(*(_QWORD *)&v327[16], v188, v3);
              *(_QWORD *)v378 = v187;
              *(_QWORD *)&v378[8] = v189;
              *(_QWORD *)&v378[16] = v186 ^ 5;
              sub_14065FE80((unsigned int)&v347, (unsigned int)v358, (unsigned int)aHasissues, 9, (__int64)v378);
              v190 = v506;
              *(_BYTE *)(v506 + 368) = 1;
              v191 = *(_QWORD *)(v190 + 336);
              if ( *(_DWORD *)v191 == 1 )
              {
                v192 = *(_QWORD *)(v191 + 8);
                *(_BYTE *)(v190 + 368) = 0;
                v500 = 1;
                v193 = sub_1416E1730(v192, &v322, 20);
                v3 = v194;
                sub_1401E7560((unsigned int)v327, v194, 0, 1, 1);
                v195 = *(_QWORD *)&v327[8];
                if ( *(_DWORD *)v327 == 1 )
                {
                  v500 = 1;
                  sub_14196B2DB(*(_QWORD *)&v327[8], *(_QWORD *)&v327[16]);
                }
                v196 = *(_QWORD *)&v327[16];
                if ( v3 )
                  sub_1419234B0(*(_QWORD *)&v327[16], v193, v3);
                *(_QWORD *)v378 = v195;
                *(_QWORD *)&v378[8] = v196;
                *(_QWORD *)&v378[16] = v3;
                v500 = 0;
                sub_14065FE80((unsigned int)v358, (unsigned int)&v347, (unsigned int)aFeedbackid, 10, (__int64)v378);
                v190 = v506;
                *(_BYTE *)(v506 + 368) = 1;
                v351 = *(_OWORD *)&v358[64];
                v350 = *(_OWORD *)&v358[48];
                v349 = *(_OWORD *)&v358[32];
                v348 = *(_OWORD *)&v358[16];
                v347 = *(_OWORD *)v358;
              }
              *(_BYTE *)(v190 + 368) = 0;
              *(_BYTE *)(v190 + 370) = 0;
              v17 = v505;
              v478 = v505;
              v18 = Address;
              v477 = Address;
              sub_14065FD00((unsigned int)v358, (unsigned int)&v347, (unsigned int)aBundle, 6, (__int64)&v218);
              *(_BYTE *)(v506 + 368) = 1;
              v351 = *(_OWORD *)&v358[64];
              v350 = *(_OWORD *)&v358[48];
              v349 = *(_OWORD *)&v358[32];
              v348 = *(_OWORD *)&v358[16];
              v347 = *(_OWORD *)v358;
              v478 = v17;
              v477 = v18;
              sub_141296CF0(v358);
              v361 = 15;
              v362 = 0;
              sub_1419234B0(v327, v358, 760);
              sub_1419234B0(v344, v363, 140);
              v342 = 90;
              v343 = 0;
              v478 = v17;
              v477 = v18;
              v197 = sub_14128D4A0(v327);
              v48 = v198;
              v68 = 6;
              if ( (v197 & 1) != 0 )
                goto LABEL_217;
              *(_QWORD *)(v506 + 344) = v198;
              v483 = v17;
              v482 = v18;
              sub_140657900((unsigned int)v358, v198, (unsigned int)&unk_141A35958, (unsigned int)&unk_141A0EE21, 51);
              v199 = *(_OWORD *)(v506 + 248);
              v483 = v17;
              v482 = v18;
              sub_14065F9F0(
                (unsigned int)v327,
                (unsigned int)v358,
                (unsigned int)aXDeviceId,
                11,
                v199,
                *((__int64 *)&v199 + 1));
              v200 = *(_OWORD *)(v506 + 264);
              v483 = v17;
              v482 = v18;
              sub_14065F9F0(
                (unsigned int)v358,
                (unsigned int)v327,
                (unsigned int)aXDeviceSecret,
                15,
                v200,
                *((__int64 *)&v200 + 1));
              *(_BYTE *)(v506 + 368) = 0;
              v380 = v351;
              v379 = v350;
              *(_OWORD *)&v378[32] = v349;
              *(_OWORD *)&v378[16] = v348;
              *(_OWORD *)v378 = v347;
              v483 = v17;
              v482 = v18;
              sub_14126FE60(v327, v358, v378);
              v483 = v17;
              v482 = v18;
              v201 = sub_14126FCB0(v327);
              v4 = v506;
              *(_QWORD *)(v506 + 376) = v201;
              *(_QWORD *)(v4 + 384) = v202;
LABEL_21:
              sub_141298A20(v358, v4 + 376, v486);
              v33 = *(_QWORD *)v358;
              if ( *(_QWORD *)v358 == -2 )
              {
                v34 = 4;
LABEL_47:
                v4 = v506;
                v56 = v505;
LABEL_149:
                *v56 = v34;
                *v431 = -2;
                result = 4;
                goto LABEL_150;
              }
              v48 = *(_QWORD *)&v358[8];
              v263 = *(_OWORD *)&v358[16];
              v264 = *(_OWORD *)&v358[32];
              v265 = *(_OWORD *)&v358[48];
              v266 = *(_OWORD *)&v358[64];
              v267 = *(_OWORD *)&v358[80];
              v268 = *(_OWORD *)&v358[96];
              v269 = v359;
              v270 = v360;
              v49 = *(_QWORD *)(v506 + 376);
              v50 = *(_QWORD *)(v506 + 384);
              v17 = v505;
              v483 = v505;
              v18 = Address;
              v482 = Address;
              sub_140290050(v49, v50);
              if ( (_DWORD)v33 == -1 )
              {
                v68 = 6;
                goto LABEL_215;
              }
              v51 = v506;
              v52 = v506 + 384;
              *(_QWORD *)(v506 + 384) = v33;
              v4 = v51;
              *(_QWORD *)(v51 + 392) = v48;
              *(_OWORD *)(v51 + 480) = v268;
              v53 = v264;
              v54 = v265;
              v55 = v266;
              *(_OWORD *)(v51 + 400) = v263;
              *(_OWORD *)(v51 + 416) = v53;
              *(_OWORD *)(v51 + 432) = v54;
              *(_OWORD *)(v51 + 448) = v55;
              *(_OWORD *)(v51 + 464) = v267;
              *(_OWORD *)(v51 + 496) = v269;
              *(_QWORD *)(v51 + 512) = v270;
              *(_WORD *)(v51 + 376) = *(_WORD *)(v51 + 488);
              *(_BYTE *)(v51 + 369) = 0;
              v36 = (_BYTE *)(v51 + 520);
              sub_1419234B0(v51 + 520, v52, 136);
              v502 = (_BYTE *)(v4 + 1080);
              *(_BYTE *)(v4 + 1080) = 0;
LABEL_44:
              v505 = v17;
              Address = v18;
              v498 = v36;
              sub_1419234B0(v4 + 656, v36, 136);
              *(_BYTE *)(v4 + 1072) = 0;
LABEL_45:
              v501 = (_BYTE *)(v4 + 656);
              sub_1403A1ED0(v358, v4 + 656, v486);
              if ( *(_DWORD *)v358 == 1 )
              {
                *v502 = 3;
                v34 = 5;
                goto LABEL_47;
              }
              v57 = *(_QWORD *)&v358[8];
              v48 = *(_QWORD *)&v358[16];
              *(_OWORD *)v378 = *(_OWORD *)&v358[24];
              sub_140285110(v501);
              if ( !v57 )
              {
                *v502 = 1;
                v68 = 6;
                v74 = v506;
                v18 = Address;
                v17 = v505;
                *(_BYTE *)(v506 + 369) = 0;
                if ( _InterlockedDecrement64(*(volatile signed __int64 **)(v74 + 344)) )
                  goto LABEL_217;
                goto LABEL_216;
              }
              *(_OWORD *)&v327[16] = *(_OWORD *)v378;
              *(_QWORD *)v327 = v57;
              *(_QWORD *)&v327[8] = v48;
              sub_1416D8D10(v358, v48, *(_QWORD *)v378);
              v61 = *(_QWORD *)&v358[8];
              v60 = *(_QWORD *)v358;
              v62 = *(_QWORD *)&v358[16];
              if ( *(_QWORD *)v358 != -1 )
              {
LABEL_50:
                (*(void (__fastcall **)(_BYTE *, _QWORD, _QWORD))(*(_QWORD *)v327 + 32LL))(
                  &v327[24],
                  *(_QWORD *)&v327[8],
                  *(_QWORD *)&v327[16]);
                v486 = v60;
                v63 = v506;
                *(_BYTE *)(v506 + 1080) = 1;
                v64 = (unsigned __int16)(*(_WORD *)(v63 + 376) - 200) < 0x64u;
                v501 = (_BYTE *)v61;
                if ( v64 )
                {
                  sub_140D902C0(v327, v61, v62);
                  v48 = *(_QWORD *)v327;
                  if ( *(_QWORD *)v327 != -1 )
                  {
                    v377 = *(_OWORD *)&v327[8];
                    v65 = v506;
                    v3 = *(_QWORD *)(*(_QWORD *)(v506 + 328) + 96LL);
                    if ( v486 )
                      sub_140001660(v501, v486, 1);
                    *(_BYTE *)(v65 + 369) = 0;
                    v66 = _InterlockedDecrement64(*(volatile signed __int64 **)(v65 + 344));
                    v18 = Address;
                    v17 = v505;
                    if ( !v66 )
                    {
                      v478 = v505;
                      v477 = Address;
                      sub_141258070(v506 + 344);
                    }
                    v67 = v506;
                    *(_BYTE *)(v506 + 368) = 0;
                    *(_BYTE *)(v67 + 370) = 0;
                    v68 = -1;
                    goto LABEL_220;
                  }
                  *(_QWORD *)&v432 = *(_QWORD *)&v327[8];
                  *(_QWORD *)v378 = &v432;
                  *(_QWORD *)&v378[8] = sub_14166FAD0;
                  sub_1416DAFA0(v358, &unk_141A0E142, v378);
                  v48 = *(_QWORD *)v358;
                  v322 = *(_OWORD *)&v358[8];
                  sub_140032F30(&v432);
                  v377 = v322;
                  v18 = Address;
                  v17 = v505;
                  v205 = v486;
                  goto LABEL_213;
                }
                *(_QWORD *)v358 = v61;
                *(_QWORD *)&v358[8] = v62;
                *(_OWORD *)&v358[16] = 0;
                *(_QWORD *)&v358[32] = v61;
                *(_QWORD *)&v358[40] = v62;
                sub_140D8B500(v327, (__int128 *)v358);
                if ( v327[0] == 0xFF )
                {
                  sub_140032F30(&v327[8]);
                }
                else
                {
                  *(_OWORD *)&v358[16] = *(_OWORD *)&v327[16];
                  *(_OWORD *)&v358[1] = *(_OWORD *)&v327[1];
                  v358[0] = v327[0];
                  v115 = sub_1416724D0(aError_36, 5, v358);
                  v3 = -1;
                  if ( v115 && *(_BYTE *)v115 == 3 )
                  {
                    v116 = *(_QWORD *)(v115 + 16);
                    v60 = *(_QWORD *)(v115 + 24);
                    sub_1401E7560((unsigned int)v327, v60, 0, 1, 1);
                    v3 = *(_QWORD *)&v327[8];
                    if ( *(_DWORD *)v327 == 1 )
                      sub_14196B2DB(*(_QWORD *)&v327[8], *(_QWORD *)&v327[16]);
                    v61 = *(_QWORD *)&v327[16];
                    if ( v60 )
                      sub_1419234B0(*(_QWORD *)&v327[16], v116, v60);
                    else
                      v60 = 0;
                  }
                  sub_140032FF0(v358);
                  if ( v3 != -1 )
                  {
                    *(_QWORD *)v378 = v3;
                    *(_QWORD *)&v378[8] = v61;
                    *(_QWORD *)&v378[16] = v60;
LABEL_209:
                    v502 = (_BYTE *)v61;
                    sub_14072B2A0(v358, v61, v60);
                    *(_QWORD *)&v322 = v358;
                    *((_QWORD *)&v322 + 1) = sub_1400015F0;
                    sub_1416DAFA0(v327, &unk_141A0EE6E, &v322);
                    if ( *(_QWORD *)v358 )
                      sub_140001660(*(_QWORD *)&v358[8], *(_QWORD *)v358, 1);
                    v48 = *(_QWORD *)v327;
                    v377 = *(_OWORD *)&v327[8];
                    v18 = Address;
                    v17 = v505;
                    v205 = v486;
                    if ( *(_QWORD *)v378 )
                      sub_140001660(v502, *(_QWORD *)v378, 1);
LABEL_213:
                    v68 = 10;
                    if ( v205 )
                      sub_140001660(v501, v205, 1);
LABEL_215:
                    v74 = v506;
                    *(_BYTE *)(v506 + 369) = 0;
                    if ( _InterlockedDecrement64(*(volatile signed __int64 **)(v74 + 344)) )
                    {
LABEL_217:
                      if ( *(_BYTE *)(v506 + 368) )
                      {
                        v490 = v17;
                        v489 = v18;
                        sub_1402903E0(&v347);
                      }
                      v206 = v506;
                      *(_BYTE *)(v506 + 368) = 0;
                      *(_BYTE *)(v206 + 370) = 0;
LABEL_220:
                      v262 = v377;
                      v301 = v352;
                      v302 = v353;
                      v303 = v354;
                      v304 = v355;
                      *v17 = 1;
                      v312 = v262;
                      v297 = v301;
                      v298 = v302;
                      v299 = v303;
                      v300 = v304;
                      sub_140285FF0(v18);
                      if ( (_DWORD)v68 == -1 )
                      {
                        *(_QWORD *)v378 = v48;
                        *(_OWORD *)&v378[8] = v312;
                        *(_QWORD *)&v378[24] = v3;
                        *(_QWORD *)v358 = v378;
                        *(_QWORD *)&v358[8] = sub_1400015F0;
                        *(_QWORD *)&v358[16] = &v378[24];
                        *(_QWORD *)&v358[24] = sub_1416EBAE0;
                        v499 = 1;
                        sub_1416DAFA0(v327, &unk_141A0F020, v358);
                        *(_OWORD *)v358 = *(_OWORD *)v327;
                        *(_QWORD *)&v358[16] = *(_QWORD *)&v327[16];
                        v499 = 1;
                        sub_1406C9730((unsigned int)aDebugReport, 12, (unsigned int)aUploadSucceede, 16, (__int64)v358);
                        *(_OWORD *)&v327[16] = *(_OWORD *)&v378[16];
                        *(_OWORD *)v327 = *(_OWORD *)v378;
                        v499 = 0;
                        sub_140CF8150(v358, v327);
                        v12 = *(_QWORD *)&v358[8];
                        v98 = *(_QWORD *)v358;
                        v13 = *(_BYTE **)&v358[16];
                        LOBYTE(v14) = v358[24];
                        *(_DWORD *)v491 = *(_DWORD *)&v358[25];
                        *(_DWORD *)&v491[3] = *(_DWORD *)&v358[28];
                        v257 = *(_OWORD *)&v358[32];
                        v258 = *(_OWORD *)&v358[48];
                        v259 = *(_OWORD *)&v358[64];
                        v260 = *(_OWORD *)&v358[80];
                        v261 = *(_OWORD *)&v358[96];
                        v207 = v506;
                        v208 = *(_QWORD *)(v506 + 1088);
                        if ( v208 )
LABEL_223:
                          sub_140001660(*(_QWORD *)(v207 + 1096), v208, 1);
                      }
                      else
                      {
                        *(_QWORD *)v358 = v68;
                        *(_QWORD *)&v358[8] = v48;
                        *(_OWORD *)&v358[16] = v312;
                        *(_QWORD *)&v358[32] = v3;
                        *(_OWORD *)&v358[40] = v297;
                        *(_OWORD *)&v358[56] = v298;
                        *(_OWORD *)&v358[72] = v299;
                        *(_QWORD *)&v358[88] = v300;
                        *(_QWORD *)v378 = v358;
                        *(_QWORD *)&v378[8] = sub_140D76130;
                        sub_1416DAFA0(v327, &unk_141A0EFA9, v378);
                        *(_OWORD *)v378 = *(_OWORD *)v327;
                        *(_QWORD *)&v378[16] = *(_QWORD *)&v327[16];
                        sub_1406C9730((unsigned int)aDebugReport, 12, (unsigned int)aUploadFailed, 13, (__int64)v378);
                        *(_QWORD *)v378 = 0;
                        *(_QWORD *)&v378[8] = 1;
                        *(_QWORD *)&v378[16] = 0;
                        *(_QWORD *)&v327[16] = 1610612768;
                        *(_QWORD *)v327 = v378;
                        *(_QWORD *)&v327[8] = &off_141A19198;
                        if ( (unsigned __int8)sub_140D76130(v358, v327) )
                          sub_14196B5F0(
                            (unsigned int)aADisplayImplem_0,
                            55,
                            (unsigned int)&v503,
                            (unsigned int)&unk_141A10708,
                            (__int64)&off_141A19250);
                        v13 = *(_BYTE **)&v378[8];
                        v12 = *(_QWORD *)v378;
                        LOBYTE(v14) = v378[16];
                        *(_DWORD *)v491 = *(_DWORD *)&v378[17];
                        *(_DWORD *)&v491[3] = *(_DWORD *)&v378[20];
                        sub_140292440(v358);
                        v98 = -1;
                        v207 = v506;
                        v208 = *(_QWORD *)(v506 + 1088);
                        if ( v208 )
                          goto LABEL_223;
                      }
                      v209 = *(_QWORD *)(v207 + 1112);
                      if ( v209 )
                        sub_140001660(*(_QWORD *)(v207 + 1120), v209, 1);
                      v210 = *(_QWORD *)(v207 + 1136);
                      if ( v210 )
                        sub_140001660(*(_QWORD *)(v207 + 1144), v210, 1);
                      v211 = *(_QWORD *)(v207 + 1160);
                      if ( v211 )
                        sub_140001660(*(_QWORD *)(v207 + 1168), v211, 1);
                      *(_BYTE *)(v207 + 241) = 0;
                      *(_BYTE *)(v207 + 242) = 0;
                      v212 = sub_1416C4110(*(_QWORD *)(v207 + 216), *(_QWORD *)(v207 + 224));
                      if ( v212 && (unsigned int)(v212 & 3) - 2 >= 2 && (v212 & 3) != 0 )
                      {
                        *(_QWORD *)&v358[8] = v212 - 1;
                        v358[0] = 3;
                        sub_1416EBAD0(&v358[8]);
                      }
                      v4 = v506;
                      v213 = *(_QWORD *)(v506 + 208);
                      if ( v213 )
                        sub_140001660(*(_QWORD *)(v506 + 216), v213, 1);
                      v214 = *(_QWORD *)(v4 + 184);
                      if ( v214 )
                        sub_140001660(*(_QWORD *)(v4 + 192), v214, 1);
                      v215 = *(_QWORD *)(v4 + 160);
                      if ( v215 )
                        sub_140001660(*(_QWORD *)(v4 + 168), v215, 1);
                      v216 = *(_QWORD *)(v4 + 112);
                      if ( v216 )
                        sub_140001660(*(_QWORD *)(v4 + 120), v216, 1);
                      v97 = *(_QWORD *)(v4 + 136);
                      if ( !v97 )
                        goto LABEL_90;
LABEL_89:
                      sub_140001660(*(_QWORD *)(v4 + 144), v97, 1);
LABEL_90:
                      v99 = v431;
                      *v431 = v98;
                      v99[1] = v12;
                      v99[2] = (__int64)v13;
                      *((_BYTE *)v99 + 24) = v14;
                      v100 = *(_DWORD *)&v491[3];
                      *(_DWORD *)((char *)v99 + 25) = *(_DWORD *)v491;
                      *((_DWORD *)v99 + 7) = v100;
                      v101 = v258;
                      v102 = v259;
                      v103 = v260;
                      *((_OWORD *)v99 + 2) = v257;
                      *((_OWORD *)v99 + 3) = v101;
                      *((_OWORD *)v99 + 4) = v102;
                      *((_OWORD *)v99 + 5) = v103;
                      *((_OWORD *)v99 + 6) = v261;
                      result = 1;
                      goto LABEL_150;
                    }
LABEL_216:
                    v478 = v17;
                    v477 = v18;
                    sub_141258070(v74 + 344);
                    goto LABEL_217;
                  }
                }
                *(_WORD *)v327 = *(_WORD *)(v506 + 376);
                *(_QWORD *)v358 = v327;
                *(_QWORD *)&v358[8] = sub_1416EA1B0;
                sub_1416DAFA0(v378, &unk_141A0E13A, v358);
                v61 = *(_QWORD *)&v378[8];
                v60 = *(_QWORD *)&v378[16];
                goto LABEL_209;
              }
              if ( *(__int64 *)&v358[16] >= 0 )
              {
                if ( !*(_QWORD *)&v358[16] )
                {
                  v61 = 1;
                  v60 = 0;
                  v62 = 0;
                  goto LABEL_50;
                }
                nullsub_1(v59, v58);
                v122 = 1;
                v204 = sub_140001650(v62, 1);
                if ( v204 )
                {
                  v3 = v204;
                  sub_1419234B0(v204, v61, v62);
                  v60 = v62;
                  v61 = v3;
                  goto LABEL_50;
                }
              }
              else
              {
                v122 = 0;
              }
              sub_14196B2DB(v122, v62);
            }
            *(_QWORD *)&v358[80] = v276;
            *(_OWORD *)&v358[64] = v275;
            *(_OWORD *)&v358[48] = v274;
            *(_OWORD *)&v358[32] = v273;
            *(_OWORD *)&v358[16] = v272;
            *(_OWORD *)v358 = v271;
            *(_BYTE *)(v4 + 520) = 1;
            *(_QWORD *)(v4 + 528) = v146;
            *(_QWORD *)(v4 + 536) = v144;
            v147 = *(_OWORD *)&v358[16];
            v148 = *(_OWORD *)&v358[32];
            v149 = *(_OWORD *)&v358[48];
            *(_OWORD *)(v4 + 544) = *(_OWORD *)v358;
            *(_OWORD *)(v4 + 560) = v147;
            *(_OWORD *)(v4 + 576) = v148;
            *(_OWORD *)(v4 + 592) = v149;
            *(_OWORD *)(v4 + 608) = *(_OWORD *)&v358[64];
            *(_QWORD *)(v4 + 624) = *(_QWORD *)&v358[80];
            v72 = (volatile signed __int64 ***)(v4 + 632);
            *(_QWORD *)(v4 + 632) = v73;
            v501 = (_BYTE *)(v4 + 664);
            *(_BYTE *)(v4 + 664) = 0;
LABEL_142:
            v121 = *v73;
            if ( _InterlockedIncrement64(*v73) <= 0 )
              BUG();
            v120 = (_QWORD *)(v4 + 640);
            *(_QWORD *)(v4 + 640) = v121;
            v119 = (_BYTE *)(v4 + 656);
            *(_BYTE *)(v4 + 656) = 0;
LABEL_144:
            v464 = v17;
            v463 = v18;
            v502 = v37;
            v462 = v37;
            v461 = v501;
            v493 = v72;
            v460 = v72;
            v459 = v119;
            v458 = v120;
            v150 = sub_140061B00(v121, &off_141A0BEB8);
            v492 = v120;
            v498 = v119;
            v505 = v17;
            Address = v18;
            v4 = v506;
            *(_QWORD *)(v506 + 648) = v150;
LABEL_145:
            v484 = (_QWORD *)(v4 + 648);
            sub_140B5D870(v358, v4 + 648, v486);
            if ( *(_DWORD *)v358 == -2 )
            {
              *v498 = 3;
              *v501 = 3;
              v140 = 4;
              goto LABEL_147;
            }
            *(_QWORD *)&v330 = *(_QWORD *)&v358[80];
            v329 = *(_OWORD *)&v358[64];
            v328 = *(_OWORD *)&v358[48];
            *(_OWORD *)&v327[32] = *(_OWORD *)&v358[32];
            *(_OWORD *)&v327[16] = *(_OWORD *)&v358[16];
            *(_OWORD *)v327 = *(_OWORD *)v358;
            v151 = *v484;
            v152 = v505;
            v464 = v505;
            v153 = Address;
            v463 = Address;
            v462 = v502;
            v461 = v501;
            v460 = v493;
            v154 = v498;
            v459 = v498;
            v155 = v492;
            v458 = v492;
            if ( (unsigned __int8)sub_141532BE0(v151) )
            {
              v464 = v152;
              v463 = v153;
              v462 = v502;
              v461 = v501;
              v460 = v493;
              v459 = v154;
              v458 = v155;
              sub_1415334F0(v151);
            }
            v157 = *(_QWORD *)v327;
            if ( *(_QWORD *)v327 == -1 )
            {
              LOBYTE(v156) = 41;
              v158 = sub_1416A8370(v156, aBackgroundTask, 22);
              v152 = v505;
              v464 = v505;
              v153 = Address;
              v463 = Address;
              v462 = v502;
              v461 = v501;
              v460 = v493;
              v168 = v498;
              v459 = v498;
              v458 = v492;
              sub_1402382B0(v327);
              *v168 = 1;
              *v501 = 1;
            }
            else
            {
              v158 = *(_QWORD *)&v327[8];
              v159 = *((_QWORD *)&v328 + 1);
              *v154 = 1;
              *v501 = 1;
              if ( v157 != 2 )
              {
                v160 = v506;
                *(_BYTE *)(v506 + 520) = 0;
                v438 = *(_QWORD *)(v160 + 624);
                v437 = *(_OWORD *)(v160 + 608);
                v436 = *(_OWORD *)(v160 + 592);
                v161 = *(_OWORD *)(v160 + 528);
                v162 = *(_OWORD *)(v160 + 544);
                v163 = *(_OWORD *)(v160 + 560);
                v435 = *(_OWORD *)(v160 + 576);
                v434 = v163;
                v433 = v162;
                v432 = v161;
                v457 = v152;
                v456 = v153;
                v455 = v502;
                sub_140654F30(v358, &v432, v159);
LABEL_170:
                v173 = v506;
                *(_BYTE *)(v506 + 521) = 0;
                *(_QWORD *)&v437 = *(_QWORD *)(v173 + 512);
                v436 = *(_OWORD *)(v173 + 496);
                v174 = *(_OWORD *)(v173 + 432);
                v175 = *(_OWORD *)(v173 + 448);
                v176 = *(_OWORD *)(v173 + 464);
                v435 = *(_OWORD *)(v173 + 480);
                v434 = v176;
                v433 = v175;
                v432 = v174;
                v457 = v152;
                v456 = v153;
                v455 = v502;
                sub_14126F600(v327, v358, &v432);
                v4 = v506;
                v3 = *(_QWORD *)(v506 + 408);
                if ( v3 == -1 )
                {
                  v144 = *(_QWORD *)&v327[8];
                  v167 = *(_QWORD *)v327;
                  v501 = *(_BYTE **)&v327[16];
                  v345[0] = *(_OWORD *)&v327[24];
                  v18 = *(PVOID *)&v327[40];
                  v432 = v328;
                  v433 = v329;
                  v434 = v330;
                  *(_QWORD *)&v435 = v331;
                  *(_OWORD *)v358 = v332;
                  *(_OWORD *)&v358[16] = v333;
                  *(_OWORD *)&v358[32] = v334;
                  *(_OWORD *)&v358[48] = v335;
                  *(_OWORD *)&v358[64] = v336;
                  *(_OWORD *)&v358[80] = v337;
                  v3 = v338;
                  v73 = v339;
                  v37 = v340;
                  v364 = v341;
                }
                else
                {
                  *(_BYTE *)(v506 + 522) = 0;
                  v73 = *(volatile signed __int64 ***)(v4 + 416);
                  v37 = *(_BYTE **)(v4 + 424);
                  if ( (unsigned __int64)(v338 - 1) <= 0xFFFFFFFFFFFFFFFCuLL )
                    sub_140001660(v339, v338, 1);
                  v501 = *(_BYTE **)&v327[16];
                  v345[0] = *(_OWORD *)&v327[24];
                  v18 = *(PVOID *)&v327[40];
                  v432 = v328;
                  v433 = v329;
                  v434 = v330;
                  *(_QWORD *)&v435 = v331;
                  *(_OWORD *)v358 = v332;
                  *(_OWORD *)&v358[16] = v333;
                  *(_OWORD *)&v358[32] = v334;
                  *(_OWORD *)&v358[48] = v335;
                  *(_OWORD *)&v358[64] = v336;
                  *(_OWORD *)&v358[80] = v337;
                  v364 = v341;
                  v144 = *(_QWORD *)&v327[8];
                  v167 = *(_QWORD *)v327;
                }
                v237 = v345[0];
                v277 = v432;
                v278 = v433;
                v279 = v434;
                v280 = v435;
                v306 = *(_OWORD *)v358;
                v307 = *(_OWORD *)&v358[16];
                v308 = *(_OWORD *)&v358[32];
                v309 = *(_OWORD *)&v358[48];
                v310 = *(_OWORD *)&v358[64];
                v311 = *(_OWORD *)&v358[80];
                v238 = v364;
                *(_WORD *)(v4 + 520) = 0;
                goto LABEL_176;
              }
            }
            if ( (unsigned int)(v158 & 3) - 2 >= 2 && (v158 & 3) != 0 )
            {
              *(_QWORD *)&v358[8] = v158 - 1;
              v358[0] = 3;
              v457 = v152;
              v456 = v153;
              v455 = v502;
              sub_1416EBAD0(&v358[8]);
            }
            v169 = v506;
            *(_BYTE *)(v506 + 520) = 0;
            v438 = *(_QWORD *)(v169 + 624);
            v437 = *(_OWORD *)(v169 + 608);
            v436 = *(_OWORD *)(v169 + 592);
            v170 = *(_OWORD *)(v169 + 528);
            v171 = *(_OWORD *)(v169 + 544);
            v172 = *(_OWORD *)(v169 + 560);
            v435 = *(_OWORD *)(v169 + 576);
            v434 = v172;
            v433 = v171;
            v432 = v170;
            v457 = v152;
            v456 = v153;
            v455 = v502;
            sub_1406550B0(v358, &v432, v159);
            goto LABEL_170;
          }
        }
        v146 = 0;
        goto LABEL_140;
      }
      *v431 = -2;
      result = 3;
      v4 = v506;
LABEL_150:
      *(_BYTE *)(v4 + 240) = result;
      return result;
    case 1LL:
      sub_14196B990(&off_141A0F008);
    case 2LL:
      sub_14196B9B0(&off_141A0F008);
    case 3LL:
      goto LABEL_64;
    case 4LL:
      v17 = (_BYTE *)(a2 + 371);
      v18 = (PVOID)(a2 + 248);
      switch ( *(_BYTE *)(a2 + 371) )
      {
        case 0:
          v19 = *(_QWORD *)(a2 + 280);
          v20 = *(_QWORD *)(a2 + 288);
          v21 = *(_QWORD *)(a2 + 352);
          v22 = *(_QWORD *)(a2 + 296);
          v23 = *(_QWORD *)(a2 + 304);
          v24 = *(_QWORD *)(a2 + 312);
          v25 = *(_QWORD *)(a2 + 320);
          v26 = *(_QWORD *)(a2 + 360);
          goto LABEL_92;
        case 1:
          v393 = a2 + 248;
          sub_14196B990(&off_141A0EDC0);
        case 2:
          v393 = a2 + 248;
          sub_14196B9B0(&off_141A0EDC0);
        case 3:
          v3 = a2 + 523;
          v37 = (_BYTE *)(a2 + 376);
          switch ( *(_BYTE *)(a2 + 523) )
          {
            case 0:
              v492 = (_BYTE *)(a2 + 523);
              v19 = *(_QWORD *)(a2 + 392);
              v20 = *(_QWORD *)(a2 + 400);
              goto LABEL_95;
            case 1:
              v399 = a2 + 371;
              v398 = a2 + 248;
              v397 = a2 + 376;
              sub_14196B990(&off_141A0BB40);
            case 2:
              v399 = a2 + 371;
              v398 = a2 + 248;
              v397 = a2 + 376;
              sub_14196B9B0(&off_141A0BB40);
            case 3:
              v374 = (_BYTE *)(a2 + 749);
              v69 = *(unsigned __int8 *)(a2 + 749);
              v70 = (volatile signed __int64 **)(a2 + 528);
              v502 = (_BYTE *)(a2 + 376);
              v501 = (_BYTE *)(a2 + 528);
              switch ( v69 )
              {
                case 0LL:
                  v492 = (_BYTE *)(a2 + 523);
                  v71 = (_BYTE *)(a2 + 371);
                  v19 = *(_QWORD *)(a2 + 528);
                  v20 = *(_QWORD *)(a2 + 536);
                  break;
                case 1LL:
                  v446 = a2 + 371;
                  v445 = a2 + 248;
                  v444 = a2 + 376;
                  v443 = a2 + 528;
                  sub_14196B990(&off_141A0BA28);
                case 2LL:
                  v446 = a2 + 371;
                  v445 = a2 + 248;
                  v444 = a2 + 376;
                  v443 = a2 + 528;
                  sub_14196B9B0(&off_141A0BA28);
                case 3LL:
                  v498 = (_BYTE *)(a2 + 704);
                  v117 = *(unsigned __int8 *)(a2 + 704);
                  v493 = (volatile signed __int64 ***)(a2 + 544);
                  switch ( v117 )
                  {
                    case 0LL:
                      v492 = (_BYTE *)(a2 + 523);
                      v71 = (_BYTE *)(a2 + 371);
                      v118 = *(__int128 **)(a2 + 544);
                      v19 = *(_QWORD *)(a2 + 552);
                      v20 = *(_QWORD *)(a2 + 560);
                      goto LABEL_129;
                    case 1LL:
                      v451 = a2 + 371;
                      v450 = a2 + 248;
                      v449 = a2 + 376;
                      v448 = a2 + 528;
                      v447 = v493;
                      sub_14196B990(&off_141A0B990);
                    case 2LL:
                      v451 = a2 + 371;
                      v450 = a2 + 248;
                      v449 = a2 + 376;
                      v448 = a2 + 528;
                      v447 = v493;
                      sub_14196B9B0(&off_141A0B990);
                    case 3LL:
                      v375 = (_BYTE *)(a2 + 697);
                      v203 = *(unsigned __int8 *)(a2 + 697);
                      v485 = a2 + 568;
                      switch ( v203 )
                      {
                        case 0LL:
                          v492 = (_BYTE *)(a2 + 523);
                          v71 = (_BYTE *)(a2 + 371);
                          v118 = *(__int128 **)(a2 + 688);
                          v19 = *(_QWORD *)(a2 + 584);
                          v20 = *(_QWORD *)(a2 + 592);
                          break;
                        case 1LL:
                          v412 = a2 + 371;
                          v411 = a2 + 248;
                          v410 = a2 + 376;
                          v409 = a2 + 528;
                          v408 = v498;
                          v407 = v493;
                          v406 = v485;
                          sub_14196B990(&off_141A0B9A8);
                        case 2LL:
                          v412 = a2 + 371;
                          v411 = a2 + 248;
                          v410 = a2 + 376;
                          v409 = a2 + 528;
                          v408 = v498;
                          v407 = v493;
                          v406 = v485;
                          sub_14196B9B0(&off_141A0B9A8);
                        case 3LL:
                          v134 = (_BYTE *)(a2 + 680);
                          v130 = (__int128 *)(a2 + 600);
                          switch ( *(_BYTE *)(v4 + 680) )
                          {
                            case 0:
                              v135 = v485;
                              goto LABEL_131;
                            case 1:
                              v420 = v4 + 371;
                              v419 = v4 + 248;
                              v418 = v4 + 376;
                              v417 = v4 + 528;
                              v416 = v498;
                              v415 = v493;
                              v414 = v485;
                              v413 = v4 + 600;
                              sub_14196B990(&off_141A0BED0);
                            case 2:
                              v420 = v4 + 371;
                              v419 = v4 + 248;
                              v418 = v4 + 376;
                              v417 = v4 + 528;
                              v416 = v498;
                              v415 = v493;
                              v414 = v485;
                              v413 = v4 + 600;
                              sub_14196B9B0(&off_141A0BED0);
                            case 3:
                              v492 = (_BYTE *)(v4 + 680);
                              v484 = (_QWORD *)(v4 + 600);
                              v505 = (_BYTE *)(v4 + 371);
                              Address = (PVOID)(v4 + 248);
                              goto LABEL_132;
                          }
                      }
                      goto LABEL_130;
                  }
              }
              goto LABEL_128;
            case 4:
              v501 = (_BYTE *)(a2 + 664);
              v72 = (volatile signed __int64 ***)(a2 + 632);
              switch ( *(_BYTE *)(v4 + 664) )
              {
                case 0:
                  v73 = *v72;
                  break;
                case 1:
                  v442 = v4 + 371;
                  v441 = v4 + 248;
                  v440 = v4 + 376;
                  v439 = v4 + 632;
                  sub_14196B990(&off_141A0E9E0);
                case 2:
                  v442 = v4 + 371;
                  v441 = v4 + 248;
                  v440 = v4 + 376;
                  v439 = v4 + 632;
                  sub_14196B9B0(&off_141A0E9E0);
                case 3:
                  v119 = (_BYTE *)(v4 + 656);
                  v120 = (_QWORD *)(v4 + 640);
                  switch ( *(_BYTE *)(v4 + 656) )
                  {
                    case 0:
                      v121 = (volatile signed __int64 *)*v120;
                      goto LABEL_144;
                    case 1:
                      v405 = v4 + 371;
                      v404 = v4 + 248;
                      v403 = v4 + 376;
                      v402 = v501;
                      v401 = v4 + 632;
                      v400 = v4 + 640;
                      sub_14196B990(&off_141A0BED0);
                    case 2:
                      v405 = v4 + 371;
                      v404 = v4 + 248;
                      v403 = v4 + 376;
                      v402 = v501;
                      v401 = v4 + 632;
                      v400 = v4 + 640;
                      sub_14196B9B0(&off_141A0BED0);
                    case 3:
                      v492 = (_BYTE *)(v4 + 640);
                      v498 = (_BYTE *)(v4 + 656);
                      v493 = (volatile signed __int64 ***)(v4 + 632);
                      v502 = (_BYTE *)(v4 + 376);
                      v505 = (_BYTE *)(v4 + 371);
                      Address = (PVOID)(v4 + 248);
                      goto LABEL_145;
                  }
              }
              goto LABEL_142;
          }
        case 4:
          v505 = (_BYTE *)(a2 + 371);
          Address = (PVOID)(a2 + 248);
          goto LABEL_21;
        case 5:
          v35 = *(unsigned __int8 *)(a2 + 1080);
          v36 = (_BYTE *)(a2 + 520);
          v502 = (_BYTE *)(a2 + 1080);
          switch ( v35 )
          {
            case 0LL:
              goto LABEL_44;
            case 1LL:
              v396 = a2 + 371;
              v395 = a2 + 248;
              v394 = a2 + 520;
              sub_14196B990(&off_141A0E998);
            case 2LL:
              v396 = a2 + 371;
              v395 = a2 + 248;
              v394 = a2 + 520;
              sub_14196B9B0(&off_141A0E998);
            case 3LL:
              v498 = (_BYTE *)(a2 + 520);
              v505 = (_BYTE *)(a2 + 371);
              Address = (PVOID)(a2 + 248);
              goto LABEL_45;
          }
      }
  }
}
