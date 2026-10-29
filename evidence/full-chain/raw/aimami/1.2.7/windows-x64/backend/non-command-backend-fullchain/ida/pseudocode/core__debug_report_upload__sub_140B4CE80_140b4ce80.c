// win 1.2.7 | module src/core/debug_report_upload.rs | ea 0x140b4ce80 | name sub_140B4CE80
// win 1.2.7 | module src/core/debug_report_upload.rs | attributed via panic-Location xref (win-native)
char __fastcall sub_140B4CE80(__int64 *a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r14
  __int64 v4; // rsi
  __int64 v5; // rax
  __int128 v6; // xmm1
  __int128 v7; // xmm2
  __int128 v8; // xmm3
  __int64 v9; // rcx
  __int64 v10; // rdi
  _BYTE *v11; // r14
  int v12; // r15d
  int v13; // eax
  int v14; // ecx
  _BYTE *v15; // r12
  PVOID v16; // r13
  __int64 v17; // rbx
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r10
  __int64 v24; // rdx
  __int64 *v25; // r12
  __int64 v26; // rcx
  PVOID v27; // rcx
  char v28; // al
  __int64 v29; // rsi
  char v30; // al
  __int64 v31; // rax
  const __m128i *v32; // rdi
  char *v33; // rbx
  _BYTE *v34; // r15
  PVOID v35; // rcx
  char v36; // al
  char v37; // si
  __int64 v38; // rcx
  char *v39; // rsi
  char v40; // al
  __int64 v41; // rbx
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rax
  const __m128i *v45; // rdx
  __int128 v46; // xmm1
  __int128 v47; // xmm2
  __int128 v48; // xmm3
  char *v49; // rcx
  __int64 v50; // rsi
  __int64 v51; // rcx
  unsigned __int64 v52; // rbx
  __int64 v53; // rsi
  unsigned __int64 v54; // rdi
  __int64 v55; // rcx
  bool v56; // cf
  __int64 v57; // rsi
  signed __int64 v58; // rt0
  __int64 v59; // rax
  __int64 v60; // rdi
  __int64 v61; // rax
  unsigned __int64 v62; // rdi
  unsigned __int64 *v63; // rdx
  __int64 v64; // rdx
  __int64 v65; // rdi
  __int64 v66; // rbx
  char v67; // r14
  __int64 v68; // rdx
  int v69; // ecx
  int v70; // ecx
  __int64 v71; // rsi
  __int64 v72; // rax
  __int64 v73; // r15
  __int64 v74; // r13
  char v75; // r12
  unsigned __int64 v76; // rsi
  __int64 v77; // r14
  char result; // al
  __int64 v79; // rdi
  __int64 v80; // rax
  __int64 v81; // rax
  _QWORD *v82; // rsi
  __int64 v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // rbx
  __int64 *v89; // rdx
  int v90; // ecx
  __int128 v91; // xmm1
  __int128 v92; // xmm2
  __int128 v93; // xmm3
  __int64 v94; // rcx
  int v95; // edx
  __int128 v96; // xmm1
  __int128 v97; // xmm2
  __int128 v98; // xmm3
  __int64 v99; // rax
  __int64 v100; // rdx
  const __m128i *v101; // rdi
  __int64 v102; // r12
  unsigned __int64 v103; // r15
  __int64 v104; // r13
  __int64 v105; // rsi
  __int64 v106; // rax
  const __m128i *v107; // r15
  __int64 v108; // rax
  __int128 *v109; // r12
  __m128i *v110; // r8
  volatile signed __int64 **v111; // r9
  volatile signed __int64 *v112; // rcx
  __int64 v113; // rbx
  __int64 v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rax
  __int64 v117; // rcx
  __int128 v118; // rax
  _QWORD *v119; // r15
  __int64 v120; // rcx
  char v121; // al
  __int128 *v122; // rdx
  __int128 v123; // xmm0
  __int128 v124; // xmm1
  __int128 v125; // xmm2
  unsigned __int64 *v126; // r8
  __int128 v127; // xmm0
  __int128 v128; // xmm1
  __int128 v129; // xmm2
  __int64 v130; // rax
  char v131; // al
  char *v132; // rdi
  __int64 v133; // rbx
  _QWORD *v134; // rsi
  __int64 v135; // rcx
  __int64 v136; // rbx
  bool v137; // zf
  __int64 v138; // rax
  __int128 v139; // xmm1
  __int128 v140; // xmm2
  __int128 v141; // xmm3
  __int64 v142; // rax
  __int64 v143; // rbx
  _BYTE *v144; // rdi
  PVOID v145; // rsi
  _BYTE *v146; // r14
  __int64 v147; // rcx
  __int64 v148; // rax
  __int64 v149; // rbx
  __int64 v150; // r8
  __int64 v151; // rcx
  __int128 v152; // xmm0
  __int128 v153; // xmm1
  __int128 v154; // xmm2
  __int64 v155; // rdx
  __int64 v156; // rdx
  __int64 v157; // rdx
  __int64 v158; // r12
  __int64 v159; // rcx
  __int128 v160; // xmm0
  __int128 v161; // xmm1
  __int128 v162; // xmm2
  __int64 v163; // rcx
  __int128 v164; // xmm0
  __int128 v165; // xmm1
  __int128 v166; // xmm2
  __int128 v167; // xmm6
  __int64 v168; // rsi
  __int128 v169; // xmm6
  __int64 v170; // rdi
  __int64 v171; // rdx
  const __m128i *v172; // rax
  __int64 v173; // rdx
  __int64 v174; // rdx
  __int64 v175; // rdx
  __int64 v176; // rsi
  __int64 v177; // rdi
  const __m128i *v178; // rdx
  __int64 v179; // r15
  __int64 v180; // rdx
  __int64 v181; // rax
  __int64 v182; // rcx
  const __m128i *v183; // r15
  unsigned __int64 v184; // rdx
  __int64 v185; // rdi
  __int64 v186; // r12
  char v187; // al
  __int64 v188; // rdx
  __int128 v189; // xmm0
  __int128 v190; // xmm0
  __int64 v191; // rax
  __int64 v192; // rdx
  __int64 v193; // rax
  __m128i *v194; // rax
  unsigned __int64 v195; // rsi
  __int64 v196; // rax
  __int64 v197; // rsi
  __int64 v198; // rdx
  __int64 v199; // rdx
  __int64 v200; // rdx
  __int64 v201; // rdx
  __int64 v202; // rax
  __int64 v203; // rdx
  __int64 v204; // rdx
  __int64 v205; // rdx
  __int64 v206; // rdx
  int v207; // eax
  __int64 v208; // [rsp+30h] [rbp-50h] BYREF
  __int128 v209; // [rsp+38h] [rbp-48h]
  __int128 v210; // [rsp+48h] [rbp-38h]
  __int64 v211; // [rsp+58h] [rbp-28h]
  __int128 v212; // [rsp+60h] [rbp-20h]
  __int128 v213; // [rsp+70h] [rbp-10h]
  __int128 v214; // [rsp+80h] [rbp+0h]
  __int64 v215; // [rsp+90h] [rbp+10h]
  __m128i v216[9]; // [rsp+98h] [rbp+18h] BYREF
  _OWORD v217[4]; // [rsp+130h] [rbp+B0h] BYREF
  __int64 v218; // [rsp+170h] [rbp+F0h] BYREF
  __int128 v219; // [rsp+178h] [rbp+F8h]
  __int128 v220; // [rsp+188h] [rbp+108h]
  __int64 v221; // [rsp+198h] [rbp+118h]
  __int128 v222; // [rsp+1A0h] [rbp+120h]
  __int128 v223; // [rsp+1B0h] [rbp+130h]
  __int128 v224; // [rsp+1C0h] [rbp+140h]
  __int64 v225; // [rsp+1D0h] [rbp+150h]
  __m128i v226[9]; // [rsp+1D8h] [rbp+158h] BYREF
  __int128 v227; // [rsp+270h] [rbp+1F0h]
  __m256i v228; // [rsp+280h] [rbp+200h]
  __int128 v229; // [rsp+2A0h] [rbp+220h]
  __int128 v230; // [rsp+2B0h] [rbp+230h]
  __int128 v231; // [rsp+2C0h] [rbp+240h]
  __int128 v232; // [rsp+2D0h] [rbp+250h]
  __int128 v233; // [rsp+2E0h] [rbp+260h]
  __int128 v234; // [rsp+2F0h] [rbp+270h]
  __int128 v235; // [rsp+300h] [rbp+280h]
  __m256i v236; // [rsp+310h] [rbp+290h]
  __int128 v237; // [rsp+330h] [rbp+2B0h]
  __int128 v238; // [rsp+340h] [rbp+2C0h]
  __int128 v239; // [rsp+350h] [rbp+2D0h]
  __int128 v240; // [rsp+360h] [rbp+2E0h]
  __int128 v241; // [rsp+370h] [rbp+2F0h]
  __int128 v242; // [rsp+380h] [rbp+300h]
  __int128 v243; // [rsp+390h] [rbp+310h]
  __m256i v244; // [rsp+3A0h] [rbp+320h]
  __int128 v245; // [rsp+3C0h] [rbp+340h]
  __int128 v246; // [rsp+3D0h] [rbp+350h]
  __int128 v247; // [rsp+3E0h] [rbp+360h]
  __int128 v248; // [rsp+3F0h] [rbp+370h]
  __int128 v249; // [rsp+400h] [rbp+380h]
  __int128 v250; // [rsp+410h] [rbp+390h]
  __int128 v251; // [rsp+420h] [rbp+3A0h]
  __int128 v252; // [rsp+430h] [rbp+3B0h]
  __int128 v253; // [rsp+440h] [rbp+3C0h]
  __int128 v254; // [rsp+450h] [rbp+3D0h]
  __int128 v255; // [rsp+460h] [rbp+3E0h]
  __int128 v256; // [rsp+470h] [rbp+3F0h]
  __int128 v257; // [rsp+480h] [rbp+400h]
  __int128 v258; // [rsp+490h] [rbp+410h]
  __int128 v259; // [rsp+4A0h] [rbp+420h]
  __int64 v260; // [rsp+4B0h] [rbp+430h]
  __int128 v261; // [rsp+4C0h] [rbp+440h]
  __int128 v262; // [rsp+4D0h] [rbp+450h]
  __int128 v263; // [rsp+4E0h] [rbp+460h]
  __int128 v264; // [rsp+4F0h] [rbp+470h]
  __int128 v265; // [rsp+500h] [rbp+480h]
  __int64 v266; // [rsp+510h] [rbp+490h]
  __int128 v267; // [rsp+520h] [rbp+4A0h]
  __int128 v268; // [rsp+530h] [rbp+4B0h]
  __int128 v269; // [rsp+540h] [rbp+4C0h]
  __int64 v270; // [rsp+550h] [rbp+4D0h]
  __int128 v271; // [rsp+560h] [rbp+4E0h]
  __int128 v272; // [rsp+570h] [rbp+4F0h]
  __int128 v273; // [rsp+580h] [rbp+500h]
  __int64 v274; // [rsp+590h] [rbp+510h]
  __int128 v275; // [rsp+5A0h] [rbp+520h]
  __int128 v276; // [rsp+5B0h] [rbp+530h]
  __int128 v277; // [rsp+5C0h] [rbp+540h]
  __int64 v278; // [rsp+5D0h] [rbp+550h]
  __int128 v279; // [rsp+5E0h] [rbp+560h]
  __int128 v280; // [rsp+5F0h] [rbp+570h]
  __int128 v281; // [rsp+600h] [rbp+580h]
  __int64 v282; // [rsp+610h] [rbp+590h]
  __int128 v283; // [rsp+620h] [rbp+5A0h]
  __int128 v284; // [rsp+630h] [rbp+5B0h]
  __int128 v285; // [rsp+640h] [rbp+5C0h]
  __int64 v286; // [rsp+650h] [rbp+5D0h]
  __int128 v287; // [rsp+660h] [rbp+5E0h]
  __int128 v288; // [rsp+670h] [rbp+5F0h]
  __int128 v289; // [rsp+680h] [rbp+600h]
  __int64 v290; // [rsp+690h] [rbp+610h]
  __int128 v291; // [rsp+6A0h] [rbp+620h]
  __int128 v292; // [rsp+6B0h] [rbp+630h]
  __int128 v293; // [rsp+6C0h] [rbp+640h]
  __int64 v294; // [rsp+6D0h] [rbp+650h]
  _OWORD v295[2]; // [rsp+6E0h] [rbp+660h] BYREF
  __int128 v296; // [rsp+700h] [rbp+680h] BYREF
  __int128 v297; // [rsp+710h] [rbp+690h]
  __int128 v298; // [rsp+720h] [rbp+6A0h]
  __int128 v299; // [rsp+730h] [rbp+6B0h]
  __int128 v300; // [rsp+740h] [rbp+6C0h]
  __int128 v301; // [rsp+750h] [rbp+6D0h]
  __int128 v302; // [rsp+760h] [rbp+6E0h]
  __int128 v303; // [rsp+770h] [rbp+6F0h]
  __int128 v304; // [rsp+780h] [rbp+700h]
  __int128 v305; // [rsp+790h] [rbp+710h]
  __int128 v306; // [rsp+7A0h] [rbp+720h]
  __int64 v307; // [rsp+7B0h] [rbp+730h]
  __int128 v308; // [rsp+7C0h] [rbp+740h]
  __int128 v309; // [rsp+7D0h] [rbp+750h]
  __int128 v310; // [rsp+7E0h] [rbp+760h]
  __int64 v311; // [rsp+7F0h] [rbp+770h]
  __int128 v312; // [rsp+800h] [rbp+780h] BYREF
  _QWORD v313[26]; // [rsp+810h] [rbp+790h] BYREF
  __m256i v314; // [rsp+8E0h] [rbp+860h]
  _BYTE v315[48]; // [rsp+900h] [rbp+880h] BYREF
  __int128 v316; // [rsp+930h] [rbp+8B0h]
  __int128 v317; // [rsp+940h] [rbp+8C0h]
  __int128 v318; // [rsp+950h] [rbp+8D0h]
  __int64 v319; // [rsp+960h] [rbp+8E0h]
  __int128 v320; // [rsp+968h] [rbp+8E8h]
  __int128 v321; // [rsp+978h] [rbp+8F8h]
  __int128 v322; // [rsp+988h] [rbp+908h]
  __int128 v323; // [rsp+998h] [rbp+918h]
  __int128 v324; // [rsp+9A8h] [rbp+928h]
  __int128 v325; // [rsp+9B8h] [rbp+938h]
  unsigned __int64 v326; // [rsp+9C8h] [rbp+948h]
  _BYTE *v327; // [rsp+9D0h] [rbp+950h]
  char *v328; // [rsp+9D8h] [rbp+958h]
  __m256i v329; // [rsp+9E0h] [rbp+960h]
  __int64 v330; // [rsp+BF8h] [rbp+B78h]
  int v331; // [rsp+C00h] [rbp+B80h]
  __m128i v332[8]; // [rsp+C04h] [rbp+B84h] BYREF
  _OWORD v333[2]; // [rsp+C90h] [rbp+C10h] BYREF
  __int128 v334; // [rsp+CB0h] [rbp+C30h]
  __int128 v335; // [rsp+CC0h] [rbp+C40h] BYREF
  __int128 v336; // [rsp+CD0h] [rbp+C50h]
  __int128 v337; // [rsp+CE0h] [rbp+C60h]
  __int128 v338; // [rsp+CF0h] [rbp+C70h]
  __int128 v339; // [rsp+D00h] [rbp+C80h]
  __int128 v340; // [rsp+D10h] [rbp+C90h]
  __int128 v341; // [rsp+D20h] [rbp+CA0h]
  __int128 v342; // [rsp+D30h] [rbp+CB0h]
  __int64 v343; // [rsp+D40h] [rbp+CC0h]
  __int128 v344; // [rsp+D50h] [rbp+CD0h] BYREF
  __int64 v345; // [rsp+D60h] [rbp+CE0h]
  _BYTE v346[112]; // [rsp+D70h] [rbp+CF0h] BYREF
  __int128 v347; // [rsp+DE0h] [rbp+D60h]
  __int64 v348; // [rsp+DF0h] [rbp+D70h]
  __int64 v349; // [rsp+1018h] [rbp+F98h]
  int v350; // [rsp+1020h] [rbp+FA0h]
  __m128i v351[9]; // [rsp+1074h] [rbp+FF4h] BYREF
  _QWORD *v352; // [rsp+1110h] [rbp+1090h]
  __m128i *v353; // [rsp+1118h] [rbp+1098h]
  _BYTE *v354; // [rsp+1120h] [rbp+10A0h]
  unsigned __int64 v355; // [rsp+1128h] [rbp+10A8h]
  _BYTE *v356; // [rsp+1130h] [rbp+10B0h]
  PVOID v357; // [rsp+1138h] [rbp+10B8h]
  _BYTE *v358; // [rsp+1140h] [rbp+10C0h]
  PVOID v359; // [rsp+1148h] [rbp+10C8h]
  _BYTE *v360; // [rsp+1150h] [rbp+10D0h]
  _BYTE *v361; // [rsp+1158h] [rbp+10D8h]
  _BYTE *v362; // [rsp+1160h] [rbp+10E0h]
  __int64 *v363; // [rsp+1168h] [rbp+10E8h]
  __m256i v364; // [rsp+1170h] [rbp+10F0h] BYREF
  __int128 v365; // [rsp+1190h] [rbp+1110h]
  _BYTE v366[48]; // [rsp+11A0h] [rbp+1120h] BYREF
  __int128 v367; // [rsp+11D0h] [rbp+1150h]
  __int128 v368; // [rsp+11E0h] [rbp+1160h]
  __int128 v369; // [rsp+11F0h] [rbp+1170h]
  __int64 v370; // [rsp+1200h] [rbp+1180h]
  __int128 v371; // [rsp+1208h] [rbp+1188h]
  __int128 v372; // [rsp+1218h] [rbp+1198h]
  __int128 v373; // [rsp+1228h] [rbp+11A8h]
  __int128 v374; // [rsp+1238h] [rbp+11B8h]
  __int128 v375; // [rsp+1248h] [rbp+11C8h]
  __int128 v376; // [rsp+1258h] [rbp+11D8h]
  unsigned __int64 v377; // [rsp+1268h] [rbp+11E8h]
  _BYTE *v378; // [rsp+1270h] [rbp+11F0h]
  char *v379; // [rsp+1278h] [rbp+11F8h]
  __m256i v380; // [rsp+1280h] [rbp+1200h]
  __int64 v381; // [rsp+12A0h] [rbp+1220h]
  __int64 v382; // [rsp+12A8h] [rbp+1228h]
  __int64 v383; // [rsp+12B0h] [rbp+1230h]
  __int64 v384; // [rsp+12B8h] [rbp+1238h]
  __int64 v385; // [rsp+12C0h] [rbp+1240h]
  __int64 v386; // [rsp+12C8h] [rbp+1248h]
  __int64 v387; // [rsp+12D0h] [rbp+1250h]
  __int64 v388; // [rsp+12D8h] [rbp+1258h]
  __int64 v389; // [rsp+12E0h] [rbp+1260h]
  _BYTE *v390; // [rsp+12E8h] [rbp+1268h]
  __int64 v391; // [rsp+12F0h] [rbp+1270h]
  __int64 v392; // [rsp+12F8h] [rbp+1278h]
  __int64 v393; // [rsp+1300h] [rbp+1280h]
  _QWORD *v394; // [rsp+1320h] [rbp+12A0h]
  __m128i *v395; // [rsp+1328h] [rbp+12A8h]
  _BYTE *v396; // [rsp+1330h] [rbp+12B0h]
  __int64 v397; // [rsp+1338h] [rbp+12B8h]
  _BYTE *v398; // [rsp+1340h] [rbp+12C0h]
  __int64 v399; // [rsp+1348h] [rbp+12C8h]
  __int64 v400; // [rsp+1350h] [rbp+12D0h]
  __int64 v401; // [rsp+1358h] [rbp+12D8h]
  _QWORD *v402; // [rsp+1360h] [rbp+12E0h]
  __m128i *v403; // [rsp+1368h] [rbp+12E8h]
  _BYTE *v404; // [rsp+1370h] [rbp+12F0h]
  __int64 v405; // [rsp+1378h] [rbp+12F8h]
  _BYTE *v406; // [rsp+1380h] [rbp+1300h]
  __int64 v407; // [rsp+1388h] [rbp+1308h]
  __int64 v408; // [rsp+1390h] [rbp+1310h]
  __int64 v409; // [rsp+1398h] [rbp+1318h]
  __m128i *v410; // [rsp+13A0h] [rbp+1320h]
  _BYTE *v411; // [rsp+13A8h] [rbp+1328h]
  unsigned __int64 v412; // [rsp+13B0h] [rbp+1330h]
  _BYTE *v413; // [rsp+13B8h] [rbp+1338h]
  PVOID v414; // [rsp+13C0h] [rbp+1340h]
  _BYTE *v415; // [rsp+13C8h] [rbp+1348h]
  _BYTE *v416; // [rsp+13D0h] [rbp+1350h]
  PVOID v417; // [rsp+13D8h] [rbp+1358h]
  _BYTE *v418; // [rsp+13E0h] [rbp+1360h]
  __int64 *v419; // [rsp+13E8h] [rbp+1368h]
  __int128 v420; // [rsp+13F0h] [rbp+1370h] BYREF
  __int128 v421; // [rsp+1400h] [rbp+1380h]
  __int128 v422; // [rsp+1410h] [rbp+1390h]
  __int128 v423; // [rsp+1420h] [rbp+13A0h]
  __int128 v424; // [rsp+1430h] [rbp+13B0h]
  __int128 v425; // [rsp+1440h] [rbp+13C0h]
  __int64 v426; // [rsp+1450h] [rbp+13D0h]
  __int64 v427; // [rsp+1458h] [rbp+13D8h]
  __int64 v428; // [rsp+1460h] [rbp+13E0h]
  __int64 v429; // [rsp+1468h] [rbp+13E8h]
  __int64 v430; // [rsp+1470h] [rbp+13F0h]
  __int64 v431; // [rsp+1478h] [rbp+13F8h]
  __int64 v432; // [rsp+1480h] [rbp+1400h]
  __int64 v433; // [rsp+1488h] [rbp+1408h]
  __int64 v434; // [rsp+1490h] [rbp+1410h]
  __m128i *v435; // [rsp+1498h] [rbp+1418h]
  __int64 v436; // [rsp+14A0h] [rbp+1420h]
  __int64 v437; // [rsp+14A8h] [rbp+1428h]
  __int64 v438; // [rsp+14B0h] [rbp+1430h]
  __int64 v439; // [rsp+14B8h] [rbp+1438h]
  _BYTE *v440; // [rsp+14C0h] [rbp+1440h]
  PVOID v441; // [rsp+14C8h] [rbp+1448h]
  _BYTE *v442; // [rsp+14D0h] [rbp+1450h]
  unsigned __int64 v443; // [rsp+14D8h] [rbp+1458h]
  _BYTE *v444; // [rsp+14E0h] [rbp+1460h]
  PVOID v445; // [rsp+14E8h] [rbp+1468h]
  _BYTE *v446; // [rsp+14F0h] [rbp+1470h]
  volatile signed __int64 **v447; // [rsp+14F8h] [rbp+1478h]
  __m128i *v448; // [rsp+1500h] [rbp+1480h]
  unsigned __int64 *v449; // [rsp+1508h] [rbp+1488h]
  _BYTE *v450; // [rsp+1510h] [rbp+1490h]
  _BYTE *v451; // [rsp+1518h] [rbp+1498h]
  PVOID v452; // [rsp+1520h] [rbp+14A0h]
  _BYTE *v453; // [rsp+1528h] [rbp+14A8h]
  volatile signed __int64 **v454; // [rsp+1530h] [rbp+14B0h]
  unsigned __int64 *v455; // [rsp+1538h] [rbp+14B8h]
  _QWORD *v456; // [rsp+1540h] [rbp+14C0h]
  __m128i *v457; // [rsp+1548h] [rbp+14C8h]
  _BYTE *v458; // [rsp+1550h] [rbp+14D0h]
  unsigned __int64 v459; // [rsp+1558h] [rbp+14D8h]
  _BYTE *v460; // [rsp+1560h] [rbp+14E0h]
  PVOID v461; // [rsp+1568h] [rbp+14E8h]
  _BYTE *v462; // [rsp+1570h] [rbp+14F0h]
  _BYTE *v463; // [rsp+1578h] [rbp+14F8h]
  PVOID v464; // [rsp+1580h] [rbp+1500h]
  _BYTE *v465; // [rsp+1588h] [rbp+1508h]
  PVOID v466; // [rsp+1590h] [rbp+1510h]
  _BYTE *v467; // [rsp+1598h] [rbp+1518h]
  _DWORD v468[2]; // [rsp+15A0h] [rbp+1520h]
  _DWORD v469[2]; // [rsp+15A8h] [rbp+1528h]
  _DWORD v470[2]; // [rsp+15B0h] [rbp+1530h]
  PVOID v471; // [rsp+15B8h] [rbp+1538h]
  _BYTE *v472; // [rsp+15C0h] [rbp+1540h]
  unsigned __int64 v473; // [rsp+15C8h] [rbp+1548h]
  PVOID v474; // [rsp+15D0h] [rbp+1550h]
  _BYTE *v475; // [rsp+15D8h] [rbp+1558h]
  PVOID v476; // [rsp+15E0h] [rbp+1560h]
  _BYTE *v477; // [rsp+15E8h] [rbp+1568h]
  volatile signed __int64 **v478; // [rsp+15F0h] [rbp+1570h]
  _QWORD *v479; // [rsp+15F8h] [rbp+1578h]
  _BYTE v480[7]; // [rsp+1600h] [rbp+1580h]
  unsigned __int64 *v481; // [rsp+1608h] [rbp+1588h]
  char v482; // [rsp+1614h] [rbp+1594h]
  char v483; // [rsp+1615h] [rbp+1595h]
  char v484; // [rsp+1616h] [rbp+1596h]
  char v485; // [rsp+1617h] [rbp+1597h]
  __m128i *v486; // [rsp+1618h] [rbp+1598h]
  char v487; // [rsp+1626h] [rbp+15A6h]
  char v488; // [rsp+1627h] [rbp+15A7h]
  _BYTE *v489; // [rsp+1628h] [rbp+15A8h]
  _BYTE *v490; // [rsp+1630h] [rbp+15B0h]
  char v491; // [rsp+163Fh] [rbp+15BFh] BYREF
  PVOID Address; // [rsp+1640h] [rbp+15C0h]
  _BYTE *v493; // [rsp+1648h] [rbp+15C8h]
  __int64 v494; // [rsp+1650h] [rbp+15D0h]
  __int64 v495; // [rsp+1658h] [rbp+15D8h]

  v495 = -2;
  v473 = a3;
  v4 = a2;
  v419 = a1;
  v5 = *(unsigned __int8 *)(a2 + 240);
  v494 = a2;
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
      sub_140FF5390(v315, a2 + 96);
      if ( *(_DWORD *)v315 != -1 )
      {
        *(_OWORD *)&v346[80] = v318;
        *(_OWORD *)&v346[64] = v317;
        *(_OWORD *)&v346[48] = v316;
        *(_OWORD *)&v346[32] = *(_OWORD *)&v315[32];
        *(_OWORD *)&v346[16] = *(_OWORD *)&v315[16];
        *(_OWORD *)v346 = *(_OWORD *)v315;
        *(_QWORD *)&v312 = 0;
        *((_QWORD *)&v312 + 1) = 1;
        v313[0] = 0;
        *(_QWORD *)&v366[16] = 1610612768;
        *(_QWORD *)v366 = &v312;
        *(_QWORD *)&v366[8] = &off_141A353B8;
        if ( (unsigned __int8)sub_14104A7D0(v346, v366) )
          sub_141939040(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v491,
            (unsigned int)&unk_141A2C928,
            (__int64)&off_141A35470);
        v11 = *((_BYTE **)&v312 + 1);
        v10 = v312;
        LOBYTE(v12) = v313[0];
        LODWORD(v218) = *(_DWORD *)((char *)v313 + 1);
        *(_DWORD *)((char *)&v218 + 3) = HIDWORD(v313[0]);
        sub_140A3D8F0(v315);
        if ( v10 != -1 )
        {
          v13 = v218;
          v14 = *(_DWORD *)((char *)&v218 + 3);
LABEL_19:
          *(_DWORD *)&v480[3] = v14;
          *(_DWORD *)v480 = v13;
          goto LABEL_86;
        }
      }
      v11 = *(_BYTE **)(v494 + 88);
      LOBYTE(v9) = 1;
      if ( _InterlockedCompareExchange8(v11, 1, 0) )
        sub_141937480(v11);
      v25 = off_1421E7210;
      if ( 2 * *off_1421E7210 )
      {
        v207 = sub_141938160(v9);
        LOBYTE(v207) = v207 ^ 1;
        LODWORD(v493) = v207;
        if ( !v11[1] )
          goto LABEL_28;
      }
      else
      {
        LODWORD(v493) = 0;
        if ( !v11[1] )
          goto LABEL_28;
      }
      Address = v11;
      *(_QWORD *)v315 = 0;
      *(_QWORD *)&v315[8] = 1;
      *(_QWORD *)&v315[16] = 0;
      *(_QWORD *)&v346[16] = 1610612768;
      *(_QWORD *)v346 = v315;
      *(_QWORD *)&v346[8] = &off_141A353B8;
      if ( (unsigned __int8)sub_1416BD090(aPoisonedLockAn_0, 41, v346) )
        sub_141939040(
          (unsigned int)aADisplayImplem_6,
          55,
          (unsigned int)&v491,
          (unsigned int)&unk_141A2C928,
          (__int64)&off_141A35470);
      v11 = *(_BYTE **)&v315[8];
      v10 = *(_QWORD *)v315;
      v12 = v315[16];
      *(_DWORD *)v366 = *(_DWORD *)&v315[17];
      *(_DWORD *)&v366[3] = *(_DWORD *)&v315[20];
      if ( !(_BYTE)v493 && 2 * *v25 && !(unsigned __int8)sub_141938160(v26) )
        *((_BYTE *)Address + 1) = 1;
      v27 = Address;
      v28 = *(_BYTE *)Address;
      *(_BYTE *)Address = 0;
      if ( v28 == 2 )
        WakeByAddressSingle(v27);
      *(_DWORD *)((char *)&v312 + 3) = *(_DWORD *)&v366[3];
      LODWORD(v312) = *(_DWORD *)v366;
      if ( v10 != -1 )
      {
        v13 = v312;
        v14 = *(_DWORD *)((char *)&v312 + 3);
        goto LABEL_19;
      }
      LODWORD(v493) = v12;
LABEL_28:
      Address = v11;
      sub_1401D2600(v315, v11 + 8);
      if ( *(_DWORD *)v315 != -1 )
      {
        *(_OWORD *)&v346[80] = v318;
        *(_OWORD *)&v346[64] = v317;
        *(_OWORD *)&v346[48] = v316;
        *(_OWORD *)&v346[32] = *(_OWORD *)&v315[32];
        *(_OWORD *)&v346[16] = *(_OWORD *)&v315[16];
        *(_OWORD *)v346 = *(_OWORD *)v315;
        *(_QWORD *)&v312 = 0;
        *((_QWORD *)&v312 + 1) = 1;
        v313[0] = 0;
        *(_QWORD *)&v366[16] = 1610612768;
        *(_QWORD *)v366 = &v312;
        *(_QWORD *)&v366[8] = &off_141A353B8;
        if ( (unsigned __int8)sub_14104A7D0(v346, v366) )
          sub_141939040(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v491,
            (unsigned int)&unk_141A2C928,
            (__int64)&off_141A35470);
        v11 = *((_BYTE **)&v312 + 1);
        v10 = v312;
        LOBYTE(v12) = v313[0];
        LODWORD(v218) = *(_DWORD *)((char *)v313 + 1);
        *(_DWORD *)((char *)&v218 + 3) = HIDWORD(v313[0]);
        sub_140A3D8F0(v315);
        v470[0] = v218;
        *(_DWORD *)((char *)v470 + 3) = *(_DWORD *)((char *)&v218 + 3);
        *(_DWORD *)v480 = v470[0];
        *(_DWORD *)&v480[3] = *(_DWORD *)((char *)&v218 + 3);
        if ( ((unsigned __int8)v493 & 1) == 0
          && 2 * *v25
          && !(unsigned __int8)sub_141938160(*(unsigned int *)((char *)&v218 + 3)) )
        {
          *((_BYTE *)Address + 1) = 1;
        }
        v35 = Address;
        v36 = *(_BYTE *)Address;
        *(_BYTE *)Address = 0;
        if ( v36 == 2 )
          WakeByAddressSingle(v35);
        goto LABEL_86;
      }
      v489 = *(_BYTE **)&v315[8];
      v490 = *(_BYTE **)&v315[16];
      v37 = v315[24];
      LODWORD(v218) = *(_DWORD *)&v315[25];
      *(_DWORD *)((char *)&v218 + 3) = *(_DWORD *)&v315[28];
      v470[0] = v218;
      *(_DWORD *)((char *)v470 + 3) = *(_DWORD *)&v315[28];
      sub_1401EB820(v315, v11 + 8);
      if ( *(_DWORD *)v315 != -1 )
      {
        *(_OWORD *)&v346[80] = v318;
        *(_OWORD *)&v346[64] = v317;
        *(_OWORD *)&v346[48] = v316;
        *(_OWORD *)&v346[32] = *(_OWORD *)&v315[32];
        *(_OWORD *)&v346[16] = *(_OWORD *)&v315[16];
        *(_OWORD *)v346 = *(_OWORD *)v315;
        *(_QWORD *)&v312 = 0;
        *((_QWORD *)&v312 + 1) = 1;
        v313[0] = 0;
        *(_QWORD *)&v366[16] = 1610612768;
        *(_QWORD *)v366 = &v312;
        *(_QWORD *)&v366[8] = &off_141A353B8;
        if ( (unsigned __int8)sub_14104A7D0(v346, v366) )
          sub_141939040(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v491,
            (unsigned int)&unk_141A2C928,
            (__int64)&off_141A35470);
        v11 = *((_BYTE **)&v312 + 1);
        v10 = v312;
        LOBYTE(v12) = v313[0];
        LODWORD(v218) = *(_DWORD *)((char *)v313 + 1);
        *(_DWORD *)((char *)&v218 + 3) = HIDWORD(v313[0]);
        sub_140A3D8F0(v315);
        v469[0] = v218;
        *(_DWORD *)((char *)v469 + 3) = *(_DWORD *)((char *)&v218 + 3);
        v38 = *(unsigned int *)((char *)&v218 + 3);
        *(_DWORD *)v480 = v469[0];
        *(_DWORD *)&v480[3] = *(_DWORD *)((char *)&v218 + 3);
        if ( v489 )
          sub_140001660(v490, v489, 1);
        v39 = (char *)Address;
        if ( ((unsigned __int8)v493 & 1) == 0 && 2 * *v25 && !(unsigned __int8)sub_141938160(v38) )
          v39[1] = 1;
        v40 = *v39;
        *v39 = 0;
        if ( v40 == 2 )
          WakeByAddressSingle(v39);
        goto LABEL_86;
      }
      v65 = *(_QWORD *)&v315[8];
      v66 = *(_QWORD *)&v315[16];
      v67 = v315[24];
      LODWORD(v218) = *(_DWORD *)&v315[25];
      *(_DWORD *)((char *)&v218 + 3) = *(_DWORD *)&v315[28];
      v469[0] = v218;
      *(_DWORD *)((char *)v469 + 3) = *(_DWORD *)&v315[28];
      sub_140028CC0(Address, (unsigned int)v493);
      v68 = v494;
      *(_QWORD *)(v494 + 160) = v489;
      *(_QWORD *)(v68 + 168) = v490;
      *(_BYTE *)(v68 + 176) = v37;
      v69 = *(_DWORD *)((char *)v470 + 3);
      *(_DWORD *)(v68 + 177) = v470[0];
      *(_DWORD *)(v68 + 180) = v69;
      *(_QWORD *)(v68 + 184) = v65;
      *(_QWORD *)(v68 + 192) = v66;
      *(_BYTE *)(v68 + 200) = v67;
      v70 = *(_DWORD *)((char *)v469 + 3);
      *(_DWORD *)(v68 + 201) = v469[0];
      *(_DWORD *)(v68 + 204) = v70;
      sub_140FE1C60(v68 + 208);
      sub_141681D30(v295, *(_QWORD *)(v494 + 216), *(_QWORD *)(v494 + 224));
      v71 = v494;
      *(_BYTE *)(v494 + 242) = 1;
      sub_140BA0BD0(v217, *(_QWORD *)(v71 + 80));
      *(_BYTE *)(v71 + 241) = 1;
      *(_QWORD *)v315 = v71 + 136;
      *(_QWORD *)&v315[8] = sub_1400015F0;
      sub_140BA0AC0(v346, &unk_141A2B24F, v315);
      *(_OWORD *)v315 = *(_OWORD *)v346;
      *(_QWORD *)&v315[16] = *(_QWORD *)&v346[16];
      sub_14019B500((unsigned int)aDebugReport, 12, (unsigned int)aUploadStarted, 14, (__int64)v315);
      *(_WORD *)(v494 + 241) = 0;
      *(_OWORD *)&v346[16] = v295[1];
      *(_OWORD *)v346 = v295[0];
      *(_OWORD *)&v346[32] = v217[0];
      *(_OWORD *)&v346[48] = v217[1];
      *(_OWORD *)&v346[64] = v217[2];
      *(_OWORD *)&v346[80] = v217[3];
      v72 = sub_140CBAA20(v346);
      v4 = v494;
      *(_QWORD *)(v494 + 248) = v72;
LABEL_64:
      Address = (PVOID)(v4 + 248);
      sub_14093EFA0(v346, v4 + 248, v473);
      v73 = *(_QWORD *)v346;
      if ( *(_QWORD *)v346 != -3 )
      {
        if ( *(_QWORD *)v346 == -2 )
        {
          v74 = *(_QWORD *)&v346[8];
          v75 = v346[16];
          *(_DWORD *)v366 = *(_DWORD *)&v346[17];
          *(_DWORD *)&v366[3] = *(_DWORD *)&v346[20];
          v76 = 0x800000000000000CuLL;
          v77 = *(_QWORD *)&v346[24];
        }
        else
        {
          v76 = *(_QWORD *)&v346[8];
          v74 = *(_QWORD *)&v346[16];
          v75 = v346[24];
          *(_DWORD *)v366 = *(_DWORD *)&v346[25];
          *(_DWORD *)&v366[3] = *(_DWORD *)&v346[28];
          v77 = *(_QWORD *)&v346[32];
          *(_OWORD *)v315 = *(_OWORD *)&v346[40];
          *(_OWORD *)&v315[16] = *(_OWORD *)&v346[56];
          *(_OWORD *)&v315[32] = *(_OWORD *)&v346[72];
          v316 = *(_OWORD *)&v346[88];
          *(_QWORD *)&v317 = *(_QWORD *)&v346[104];
        }
        v468[0] = *(_DWORD *)v366;
        *(_DWORD *)((char *)v468 + 3) = *(_DWORD *)&v366[3];
        v303 = *(_OWORD *)v315;
        v304 = *(_OWORD *)&v315[16];
        v305 = *(_OWORD *)&v315[32];
        v306 = v316;
        v307 = v317;
        v79 = *(_QWORD *)Address;
        if ( (unsigned __int8)sub_1414FCFD0(*(_QWORD *)Address) )
          sub_1414FD8E0(v79);
        if ( v73 == -1 )
        {
          *(_QWORD *)v346 = v76;
          *(_QWORD *)&v346[8] = v74;
          v346[16] = v75;
          *(_DWORD *)&v346[17] = v468[0];
          *(_DWORD *)&v346[20] = *(_DWORD *)((char *)v468 + 3);
          *(_QWORD *)&v346[24] = v77;
          *(_OWORD *)&v346[32] = v303;
          *(_OWORD *)&v346[48] = v304;
          *(_OWORD *)&v346[64] = v305;
          *(_OWORD *)&v346[80] = v306;
          *(_QWORD *)v366 = 0;
          *(_QWORD *)&v366[8] = 1;
          *(_QWORD *)&v366[16] = 0;
          *(_QWORD *)&v315[16] = 1610612768;
          *(_QWORD *)v315 = v366;
          *(_QWORD *)&v315[8] = &off_141A353B8;
          if ( (unsigned __int8)sub_14104A7D0(v346, v315) )
            sub_141939040(
              (unsigned int)aADisplayImplem_6,
              55,
              (unsigned int)&v491,
              (unsigned int)&unk_141A2C928,
              (__int64)&off_141A35470);
          v11 = *(_BYTE **)&v366[8];
          v10 = *(_QWORD *)v366;
          LOBYTE(v12) = v366[16];
          LODWORD(v312) = *(_DWORD *)&v366[17];
          *(_DWORD *)((char *)&v312 + 3) = *(_DWORD *)&v366[20];
          sub_140A3D8F0(v346);
          *(_DWORD *)v480 = v312;
          *(_DWORD *)&v480[3] = *(_DWORD *)((char *)&v312 + 3);
          goto LABEL_76;
        }
        if ( v73 == -2 )
        {
          *(_QWORD *)v346 = v76;
          *(_QWORD *)&v346[8] = v74;
          v346[16] = v75;
          *(_DWORD *)&v346[17] = v468[0];
          *(_DWORD *)&v346[20] = *(_DWORD *)((char *)v468 + 3);
          *(_QWORD *)&v346[24] = v77;
          *(_OWORD *)&v346[32] = v303;
          *(_QWORD *)v366 = v346;
          *(_QWORD *)&v366[8] = sub_14144FD90;
          sub_1416ABFD0(v315, &unk_141A2A442, v366);
          sub_140A3BD30(v346);
          v11 = *(_BYTE **)&v315[8];
          v10 = *(_QWORD *)v315;
          LOBYTE(v12) = v315[16];
          *(_DWORD *)v480 = *(_DWORD *)&v315[17];
          *(_DWORD *)&v480[3] = *(_DWORD *)&v315[20];
LABEL_76:
          v80 = v494;
          *(_BYTE *)(v494 + 241) = 0;
          *(_BYTE *)(v80 + 242) = 0;
          v81 = sub_141695140(*(_QWORD *)(v80 + 216), *(_QWORD *)(v80 + 224));
          if ( v81 && (unsigned int)(v81 & 3) - 2 >= 2 && (v81 & 3) != 0 )
          {
            *(_QWORD *)&v346[8] = v81 - 1;
            v346[0] = 3;
            sub_1416BCB00(&v346[8]);
          }
          v82 = (_QWORD *)v494;
          v83 = *(_QWORD *)(v494 + 208);
          if ( v83 )
            sub_140001660(*(_QWORD *)(v494 + 216), v83, 1);
          v84 = v82[23];
          if ( v84 )
            sub_140001660(v82[24], v84, 1);
          v85 = v82[20];
          if ( v85 )
            sub_140001660(v82[21], v85, 1);
LABEL_86:
          v4 = v494;
          v86 = *(_QWORD *)(v494 + 112);
          if ( v86 )
            sub_140001660(*(_QWORD *)(v494 + 120), v86, 1);
          v87 = *(_QWORD *)(v4 + 136);
          v88 = -1;
          if ( !v87 )
            goto LABEL_90;
          goto LABEL_89;
        }
        v94 = v494;
        v19 = v494 + 1088;
        *(_QWORD *)(v494 + 1088) = v73;
        *(_QWORD *)(v94 + 1096) = v76;
        v4 = v94;
        *(_QWORD *)(v94 + 1104) = v74;
        *(_BYTE *)(v94 + 1112) = v75;
        v95 = *(_DWORD *)((char *)v468 + 3);
        *(_DWORD *)(v94 + 1113) = v468[0];
        *(_DWORD *)(v94 + 1116) = v95;
        *(_QWORD *)(v94 + 1120) = v77;
        v96 = v304;
        v97 = v305;
        v98 = v306;
        *(_OWORD *)(v94 + 1128) = v303;
        *(_OWORD *)(v94 + 1144) = v96;
        *(_OWORD *)(v94 + 1160) = v97;
        *(_OWORD *)(v94 + 1176) = v98;
        *(_QWORD *)(v94 + 1192) = v307;
        v17 = *(_QWORD *)(v94 + 216);
        v18 = *(_QWORD *)(v94 + 224);
        v20 = *(_QWORD *)(v94 + 168);
        v21 = *(_QWORD *)(v4 + 176);
        v22 = *(_QWORD *)(v4 + 192);
        v23 = *(_QWORD *)(v4 + 200);
        v24 = v4 + 96;
        *(_QWORD *)(v4 + 280) = v17;
        *(_QWORD *)(v4 + 288) = v18;
        *(_QWORD *)(v4 + 296) = v20;
        *(_QWORD *)(v4 + 304) = v21;
        *(_QWORD *)(v4 + 312) = v22;
        *(_QWORD *)(v4 + 320) = v23;
        *(_QWORD *)(v4 + 352) = v19;
        *(_QWORD *)(v4 + 360) = v4 + 96;
        v15 = (_BYTE *)(v4 + 371);
        *(_BYTE *)(v4 + 371) = 0;
        v16 = Address;
LABEL_92:
        *(_BYTE *)(v4 + 370) = 0;
        *(_WORD *)(v4 + 368) = 0;
        *(_QWORD *)(v4 + 328) = v19;
        *(_QWORD *)(v4 + 248) = v20;
        *(_QWORD *)(v4 + 256) = v21;
        *(_QWORD *)(v4 + 264) = v22;
        *(_QWORD *)(v4 + 272) = v23;
        *(_QWORD *)(v4 + 336) = v24;
        v360 = v15;
        v359 = v16;
        sub_140FF5390(v346, v24);
        v60 = *(_QWORD *)v346;
        if ( *(_QWORD *)v346 != -1 )
        {
          v41 = *(_QWORD *)&v346[8];
          v365 = *(_OWORD *)&v346[16];
          v3 = *(_QWORD *)&v346[32];
          v340 = *(_OWORD *)&v346[40];
          v341 = *(_OWORD *)&v346[56];
          v342 = *(_OWORD *)&v346[72];
          v343 = *(_QWORD *)&v346[88];
          goto LABEL_220;
        }
        v4 = v494;
        *(_QWORD *)(v494 + 392) = v17;
        *(_QWORD *)(v4 + 400) = v18;
        v481 = (unsigned __int64 *)(v4 + 523);
        *(_BYTE *)(v4 + 523) = 0;
        v34 = (_BYTE *)(v4 + 376);
LABEL_95:
        *(_WORD *)(v4 + 520) = 0;
        *(_BYTE *)(v4 + 522) = 0;
        *(_QWORD *)(v4 + 376) = v17;
        *(_QWORD *)(v4 + 384) = v18;
        v465 = v15;
        v464 = v16;
        v463 = v34;
        v99 = sub_141682C30(v17, v18);
        v493 = v15;
        if ( v99 )
        {
          v465 = v15;
          v464 = v16;
          v463 = v34;
          sub_1416AB5A0(v315, v99, v100);
          v489 = v34;
          v101 = *(const __m128i **)&v315[8];
          v102 = *(_QWORD *)v315;
          v103 = *(_QWORD *)&v315[16];
          Address = v16;
          if ( *(_QWORD *)v315 == -1 )
          {
            sub_14072C410((unsigned int)v346, *(_DWORD *)&v315[16], 0, 1, 1);
            v102 = *(_QWORD *)&v346[8];
            v105 = v494;
            if ( *(_DWORD *)v346 == 1 )
            {
              v465 = v493;
              v464 = Address;
              v463 = v489;
              sub_141938D2B(*(_QWORD *)&v346[8], *(_QWORD *)&v346[16]);
            }
            v104 = *(_QWORD *)&v346[16];
            if ( v103 )
              sub_1418F44E0(*(__m128i **)&v346[16], v101, v103);
            else
              v103 = 0;
          }
          else
          {
            v104 = *(_QWORD *)&v315[8];
            v105 = v494;
          }
          *(_QWORD *)(v105 + 408) = v102;
          *(_QWORD *)(v105 + 416) = v104;
          *(_QWORD *)(v105 + 424) = v103;
          v16 = Address;
          v15 = v493;
          v34 = v489;
        }
        else
        {
          v105 = v494;
          *(_QWORD *)(v494 + 408) = -1;
        }
        *(_BYTE *)(v105 + 522) = 1;
        v418 = v15;
        v417 = v16;
        v416 = v34;
        v114 = sub_141682BC0(v17, v18);
        if ( v114 )
        {
          v418 = v15;
          v417 = v16;
          v416 = v34;
          sub_1416B3AE0(v346, v114, v115);
          if ( v346[0] )
            v116 = 0;
          else
            v116 = *(_QWORD *)&v346[8];
          v115 = *(_QWORD *)&v346[16];
        }
        else
        {
          v116 = 0;
        }
        v117 = 1;
        if ( v116 )
          v117 = v116;
        else
          v115 = 0;
        v442 = v15;
        v441 = v16;
        v440 = v34;
        *(_QWORD *)&v118 = sub_1413CA800(v117, v115);
        *(_OWORD *)v346 = v118;
        v442 = v15;
        v441 = v16;
        v440 = v34;
        sub_1413CA810(v494 + 432, v346);
        v4 = v494;
        *(_BYTE *)(v494 + 521) = 1;
        v62 = v4 + 528;
        *(_QWORD *)(v4 + 528) = v17;
        *(_QWORD *)(v4 + 536) = v18;
        v361 = (_BYTE *)(v4 + 749);
        *(_BYTE *)(v4 + 749) = 0;
LABEL_128:
        v489 = v34;
        v109 = (__int128 *)(v4 + 712);
        *(_DWORD *)(v4 + 712) = 0;
        *(_QWORD *)(v4 + 720) = 0;
        *(_DWORD *)(v4 + 728) = 7;
        *(_QWORD *)(v4 + 732) = 0;
        *(_QWORD *)(v4 + 737) = 0;
        *(_BYTE *)(v4 + 736) = 1;
        *(_BYTE *)(v4 + 748) = 0;
        v486 = (__m128i *)(v4 + 544);
        *(_QWORD *)(v4 + 544) = v4 + 712;
        *(_QWORD *)(v4 + 552) = v17;
        *(_QWORD *)(v4 + 560) = v18;
        v490 = (_BYTE *)(v4 + 704);
        *(_BYTE *)(v4 + 704) = 0;
LABEL_129:
        *(_QWORD *)(v4 + 584) = v17;
        *(_QWORD *)(v4 + 592) = v18;
        *(_QWORD *)(v4 + 688) = v109;
        v362 = (_BYTE *)(v4 + 697);
        *(_BYTE *)(v4 + 697) = 0;
LABEL_130:
        *(_BYTE *)(v4 + 696) = 0;
        *(_QWORD *)(v4 + 568) = v17;
        *(_QWORD *)(v4 + 576) = v18;
        v415 = v493;
        v414 = v16;
        v413 = v489;
        v412 = v62;
        v411 = v490;
        v410 = v486;
        v119 = (_QWORD *)(v4 + 568);
        v409 = v4 + 568;
        sub_141681D30(v333, v17, v18);
        v120 = v494;
        *(_BYTE *)(v494 + 696) = 1;
        v121 = *((_BYTE *)v109 + 32);
        v122 = (__int128 *)(v120 + 600);
        v123 = *v109;
        v124 = v109[1];
        *(_BYTE *)(v120 + 696) = 0;
        v125 = v333[0];
        *(_OWORD *)(v120 + 616) = v333[1];
        *(_OWORD *)(v120 + 600) = v125;
        *(_OWORD *)(v120 + 632) = v123;
        *(_OWORD *)(v120 + 648) = v124;
        *(_BYTE *)(v120 + 664) = v121;
        v126 = (unsigned __int64 *)(v120 + 680);
        *(_BYTE *)(v120 + 680) = 0;
        v15 = v493;
        v33 = (char *)v481;
LABEL_131:
        *(_QWORD *)&v346[64] = *((_QWORD *)v122 + 8);
        v127 = *v122;
        v128 = v122[1];
        v129 = v122[2];
        *(_OWORD *)&v346[48] = v122[3];
        *(_OWORD *)&v346[32] = v129;
        *(_OWORD *)&v346[16] = v128;
        *(_OWORD *)v346 = v127;
        v462 = v15;
        v461 = v16;
        v460 = v489;
        v459 = v62;
        v458 = v490;
        v457 = v486;
        v456 = v119;
        v481 = v126;
        v455 = v126;
        v478 = (volatile signed __int64 **)v122;
        v454 = (volatile signed __int64 **)v122;
        v130 = sub_140058200(v346, &off_141A28148);
        v479 = v119;
        v443 = v62;
        v493 = v15;
        Address = v16;
        v4 = v494;
        *(_QWORD *)(v494 + 672) = v130;
LABEL_132:
        v363 = (__int64 *)(v4 + 672);
        sub_14093E8A0(&v364, v4 + 672, v473);
        if ( v364.m256i_i8[0] )
        {
          *(_BYTE *)v481 = 3;
          *v362 = 3;
          *v490 = 3;
          *v361 = 3;
          v131 = 3;
LABEL_147:
          *v33 = v131;
          v4 = v494;
LABEL_148:
          v49 = v493;
          v30 = 3;
          goto LABEL_149;
        }
        v132 = v33;
        v345 = v364.m256i_i64[3];
        v344 = *(_OWORD *)&v364.m256i_u64[1];
        v133 = *v363;
        v15 = v493;
        v462 = v493;
        v16 = Address;
        v461 = Address;
        v460 = v489;
        v3 = v443;
        v459 = v443;
        v458 = v490;
        v457 = v486;
        v134 = v479;
        v456 = v479;
        v455 = v481;
        v454 = v478;
        if ( (unsigned __int8)sub_1414FCFD0(v133) )
        {
          v462 = v15;
          v461 = v16;
          v460 = v489;
          v459 = v3;
          v458 = v490;
          v457 = v486;
          v456 = v134;
          v455 = v481;
          v454 = v478;
          sub_1414FD8E0(v133);
        }
        if ( (_QWORD)v344 )
        {
          LOBYTE(v135) = 41;
          v136 = sub_1416793A0(v135, aBackgroundTask, 22);
          v15 = v493;
          v462 = v493;
          v16 = Address;
          v461 = Address;
          v460 = v489;
          v3 = v443;
          v459 = v443;
          v458 = v490;
          v457 = v486;
          v456 = v479;
          v455 = v481;
          v454 = v478;
          sub_140755620(&v344);
          *(_BYTE *)v481 = 1;
        }
        else
        {
          v136 = v345;
          v137 = BYTE8(v344) == 0;
          *(_BYTE *)v481 = 1;
          if ( v137 )
          {
            v358 = v15;
            v357 = v16;
            v34 = v489;
            v356 = v489;
            v355 = v3;
            v354 = v490;
            v353 = v486;
            v352 = v134;
            sub_14150FD00(v346, v136);
            v136 = *(_QWORD *)&v346[8];
            v138 = *(_QWORD *)v346;
            *(_OWORD *)v315 = *(_OWORD *)&v346[16];
            *(_OWORD *)&v315[16] = *(_OWORD *)&v346[32];
            *(_OWORD *)&v315[32] = *(_OWORD *)&v346[48];
            v316 = *(_OWORD *)&v346[64];
            v317 = *(_OWORD *)&v346[80];
            *(_QWORD *)&v318 = *(_QWORD *)&v346[96];
LABEL_140:
            v4 = v494;
            *(_BYTE *)(v494 + 696) = 0;
            v420 = *(_OWORD *)v315;
            v421 = *(_OWORD *)&v315[16];
            v422 = *(_OWORD *)&v315[32];
            v423 = v316;
            v424 = v317;
            *(_QWORD *)&v425 = v318;
            *(_BYTE *)(v4 + 697) = 1;
            *(_BYTE *)(v4 + 704) = 1;
            *(_WORD *)(v4 + 748) = 256;
            v266 = v425;
            v265 = v424;
            v264 = v423;
            v263 = v422;
            v262 = v421;
            v261 = v420;
            if ( !v138 )
            {
              *(_BYTE *)(v4 + 520) = 0;
              if ( *(_BYTE *)(v4 + 480) )
              {
                v155 = *(_QWORD *)(v4 + 488);
                if ( v155 )
                  sub_140001660(*(_QWORD *)(v4 + 496), v155, 1);
              }
              v156 = *(_QWORD *)(v4 + 448);
              if ( v156 > 0 )
                sub_140001660(*(_QWORD *)(v4 + 456), 32 * v156, 8);
              *(_BYTE *)(v4 + 521) = 0;
              v157 = *(_QWORD *)(v4 + 408);
              v158 = 2;
              if ( v157 != -1 && v157 )
                sub_140001660(*(_QWORD *)(v4 + 416), v157, 1);
LABEL_176:
              *(_BYTE *)(v4 + 522) = 0;
              v237 = v227;
              v275 = v267;
              v276 = v268;
              v277 = v269;
              v278 = v270;
              v238 = v296;
              v239 = v297;
              v240 = v298;
              v241 = v299;
              v242 = v300;
              v243 = v301;
              v244 = v228;
              *(_BYTE *)(v4 + 523) = 1;
              if ( v158 == -1 )
                goto LABEL_148;
              v229 = v237;
              v271 = v275;
              v272 = v276;
              v273 = v277;
              v274 = v278;
              v230 = v238;
              v231 = v239;
              v232 = v240;
              v233 = v241;
              v234 = v242;
              v235 = v243;
              v236 = v244;
              v475 = v493;
              v474 = Address;
              sub_140A0E4F0(v489);
              if ( v158 == 2 )
              {
                *(_QWORD *)&v296 = v136;
                *(_QWORD *)v315 = &v296;
                *(_QWORD *)&v315[8] = sub_1416BB0B0;
                sub_1416ABFD0(v346, &unk_141A2A398, v315);
                v41 = *(_QWORD *)v346;
                v420 = *(_OWORD *)&v346[8];
                if ( (unsigned int)(v296 & 3) - 2 >= 2 && (v296 & 3) != 0 )
                {
                  *(_QWORD *)&v315[8] = v296 - 1;
                  v315[0] = 3;
                  v475 = v493;
                  v474 = Address;
                  sub_1416BCB00(&v315[8]);
                }
                v245 = v420;
                v365 = v420;
                v340 = v279;
                v341 = v280;
                v342 = v281;
                v343 = v282;
                goto LABEL_186;
              }
              v376 = v235;
              v375 = v234;
              v374 = v233;
              v373 = v232;
              v372 = v231;
              v371 = v230;
              v377 = v3;
              v378 = v34;
              v379 = v132;
              v380 = v236;
              v245 = v229;
              v282 = v274;
              v281 = v273;
              v280 = v272;
              v279 = v271;
              *(_OWORD *)&v366[24] = v229;
              v370 = v274;
              v369 = v273;
              v368 = v272;
              v367 = v271;
              *(_QWORD *)v366 = v158;
              *(_QWORD *)&v366[8] = v136;
              *(_QWORD *)&v366[16] = v490;
              *(_QWORD *)&v366[40] = v16;
              sub_1416AC440(v346, *(_QWORD *)(v494 + 328) + 24LL);
              if ( v3 - 1 <= 0xFFFFFFFFFFFFFFFCuLL )
                sub_140001660(v34, v3, 1);
              v167 = *(_OWORD *)v346;
              v3 = *(_QWORD *)&v346[16];
              sub_1418F44E0((__m128i *)v313, (const __m128i *)&v366[16], 0xB8u);
              *(_OWORD *)&v313[23] = v167;
              v313[25] = v3;
              v314 = v380;
              *(_QWORD *)&v312 = v158;
              *((_QWORD *)&v312 + 1) = v136;
              v475 = v493;
              v474 = Address;
              sub_141259210(&v218, &v312, aApplicationZip, 15);
              v168 = v218;
              if ( v218 == 2 )
              {
                *(_QWORD *)v366 = v219;
                *(_QWORD *)v315 = v366;
                *(_QWORD *)&v315[8] = sub_14122E940;
                sub_1416ABFD0(v346, &unk_141A2A3FE, v315);
                v41 = *(_QWORD *)v346;
                v334 = *(_OWORD *)&v346[8];
                v475 = v493;
                v474 = Address;
                sub_140192750(*(_QWORD *)v366);
                v246 = v334;
                v283 = v308;
                v284 = v309;
                v285 = v310;
                v286 = v311;
                v365 = v334;
                v343 = v311;
                v342 = v310;
                v341 = v309;
                v340 = v308;
LABEL_186:
                v60 = 10;
                *(_BYTE *)(v494 + 370) = 0;
                v16 = Address;
                v15 = v493;
                goto LABEL_220;
              }
              v169 = v219;
              v334 = v220;
              v170 = v221;
              v308 = v222;
              v309 = v223;
              v310 = v224;
              v311 = v225;
              sub_1418F44E0(v216, v226, 0x98u);
              v246 = v334;
              v286 = v311;
              v285 = v310;
              v284 = v309;
              v283 = v308;
              v210 = v334;
              v212 = v308;
              v213 = v309;
              v214 = v310;
              v215 = v311;
              *(_BYTE *)(v494 + 370) = 1;
              v208 = v168;
              v209 = v169;
              v211 = v170;
              v477 = v493;
              v476 = Address;
              sub_14125AA60(v346);
              v171 = *(_QWORD *)(v494 + 336) + 40LL;
              v485 = 1;
              sub_1416AC440(v366, v171);
              v485 = 0;
              sub_140CB5A60((unsigned int)v315, (unsigned int)v346, (unsigned int)aCategory_2, 8, (__int64)v366);
              v172 = (const __m128i *)sub_140E91160(
                                        *(_QWORD *)(*(_QWORD *)(v494 + 336) + 24LL),
                                        *(_QWORD *)(*(_QWORD *)(v494 + 336) + 32LL));
              v484 = 1;
              sub_14021D030((__int64)v366, v172, v173);
              v484 = 0;
              sub_140CB5A60((unsigned int)v346, (unsigned int)v315, (unsigned int)aUsernote_0, 8, (__int64)v366);
              v174 = *(_QWORD *)(v494 + 328) + 48LL;
              v483 = 1;
              sub_1416AC440(v366, v174);
              v483 = 0;
              sub_140CB5A60((unsigned int)v315, (unsigned int)v346, (unsigned int)aSummary_2, 7, (__int64)v366);
              v175 = *(_QWORD *)(v494 + 328) + 72LL;
              v482 = 1;
              sub_1416AC440(v366, v175);
              v482 = 0;
              sub_140CB5A60((unsigned int)v346, (unsigned int)v315, (unsigned int)aTargetmode, 10, (__int64)v366);
              v176 = *(unsigned __int8 *)(*(_QWORD *)(v494 + 328) + 104LL);
              v3 = v176 ^ 5;
              sub_14072C410((unsigned int)v315, v176 ^ 5, 0, 1, 1);
              v177 = *(_QWORD *)&v315[8];
              v489 = *(_BYTE **)v315;
              if ( *(_QWORD *)v315 == 1 )
                sub_141938D2B(*(_QWORD *)&v315[8], *(_QWORD *)&v315[16]);
              v178 = (const __m128i *)aFalsetrue_1;
              if ( (_BYTE)v176 )
                v178 = (const __m128i *)&aFalsetrue_1[5];
              v179 = *(_QWORD *)&v315[16];
              sub_1418F44E0(*(__m128i **)&v315[16], v178, v3);
              *(_QWORD *)v366 = v177;
              *(_QWORD *)&v366[8] = v179;
              *(_QWORD *)&v366[16] = v176 ^ 5;
              sub_140CB5A60((unsigned int)&v335, (unsigned int)v346, (unsigned int)aHasissues, 9, (__int64)v366);
              v180 = v494;
              *(_BYTE *)(v494 + 368) = 1;
              v181 = *(_QWORD *)(v180 + 336);
              if ( *(_DWORD *)v181 == 1 )
              {
                v182 = *(_QWORD *)(v181 + 8);
                *(_BYTE *)(v180 + 368) = 0;
                v488 = 1;
                v183 = (const __m128i *)sub_1416B2760(v182, &v312, 20);
                v3 = v184;
                sub_14072C410((unsigned int)v315, v184, 0, 1, 1);
                v185 = *(_QWORD *)&v315[8];
                if ( *(_DWORD *)v315 == 1 )
                {
                  v488 = 1;
                  sub_141938D2B(*(_QWORD *)&v315[8], *(_QWORD *)&v315[16]);
                }
                v186 = *(_QWORD *)&v315[16];
                if ( v3 )
                  sub_1418F44E0(*(__m128i **)&v315[16], v183, v3);
                *(_QWORD *)v366 = v185;
                *(_QWORD *)&v366[8] = v186;
                *(_QWORD *)&v366[16] = v3;
                v488 = 0;
                sub_140CB5A60((unsigned int)v346, (unsigned int)&v335, (unsigned int)aFeedbackid_0, 10, (__int64)v366);
                v180 = v494;
                *(_BYTE *)(v494 + 368) = 1;
                v339 = *(_OWORD *)&v346[64];
                v338 = *(_OWORD *)&v346[48];
                v337 = *(_OWORD *)&v346[32];
                v336 = *(_OWORD *)&v346[16];
                v335 = *(_OWORD *)v346;
              }
              *(_BYTE *)(v180 + 368) = 0;
              *(_BYTE *)(v180 + 370) = 0;
              v15 = v493;
              v467 = v493;
              v16 = Address;
              v466 = Address;
              sub_140CB58E0((unsigned int)v346, (unsigned int)&v335, (unsigned int)aBundle, 6, (__int64)&v208);
              *(_BYTE *)(v494 + 368) = 1;
              v339 = *(_OWORD *)&v346[64];
              v338 = *(_OWORD *)&v346[48];
              v337 = *(_OWORD *)&v346[32];
              v336 = *(_OWORD *)&v346[16];
              v335 = *(_OWORD *)v346;
              v467 = v15;
              v466 = v16;
              sub_14126A8B0(v346);
              v349 = 15;
              v350 = 0;
              sub_1418F44E0((__m128i *)v315, (const __m128i *)v346, 0x2F8u);
              sub_1418F44E0(v332, v351, 0x8Cu);
              v330 = 90;
              v331 = 0;
              v467 = v15;
              v466 = v16;
              v187 = sub_141261060(v315);
              v41 = v188;
              v60 = 6;
              if ( (v187 & 1) != 0 )
                goto LABEL_217;
              *(_QWORD *)(v494 + 344) = v188;
              v472 = v15;
              v471 = v16;
              sub_140CAF8C0((unsigned int)v346, v188, (unsigned int)&unk_141A433A0, (unsigned int)&unk_141A2B0B1, 51);
              v189 = *(_OWORD *)(v494 + 248);
              v472 = v15;
              v471 = v16;
              sub_140CB55D0(
                (unsigned int)v315,
                (unsigned int)v346,
                (unsigned int)aXDeviceId,
                11,
                v189,
                *((__int64 *)&v189 + 1));
              v190 = *(_OWORD *)(v494 + 264);
              v472 = v15;
              v471 = v16;
              sub_140CB55D0(
                (unsigned int)v346,
                (unsigned int)v315,
                (unsigned int)aXDeviceSecret,
                15,
                v190,
                *((__int64 *)&v190 + 1));
              *(_BYTE *)(v494 + 368) = 0;
              v368 = v339;
              v367 = v338;
              *(_OWORD *)&v366[32] = v337;
              *(_OWORD *)&v366[16] = v336;
              *(_OWORD *)v366 = v335;
              v472 = v15;
              v471 = v16;
              sub_141259950(v315, v346, v366);
              v472 = v15;
              v471 = v16;
              v191 = sub_1412597A0(v315);
              v4 = v494;
              *(_QWORD *)(v494 + 376) = v191;
              *(_QWORD *)(v4 + 384) = v192;
LABEL_21:
              sub_14126C5E0(v346, v4 + 376, v473);
              v29 = *(_QWORD *)v346;
              if ( *(_QWORD *)v346 == -2 )
              {
                v30 = 4;
LABEL_47:
                v4 = v494;
                v49 = v493;
LABEL_149:
                *v49 = v30;
                *v419 = -2;
                result = 4;
                goto LABEL_150;
              }
              v41 = *(_QWORD *)&v346[8];
              v253 = *(_OWORD *)&v346[16];
              v254 = *(_OWORD *)&v346[32];
              v255 = *(_OWORD *)&v346[48];
              v256 = *(_OWORD *)&v346[64];
              v257 = *(_OWORD *)&v346[80];
              v258 = *(_OWORD *)&v346[96];
              v259 = v347;
              v260 = v348;
              v42 = *(_QWORD *)(v494 + 376);
              v43 = *(_QWORD *)(v494 + 384);
              v15 = v493;
              v472 = v493;
              v16 = Address;
              v471 = Address;
              sub_1407AC3B0(v42, v43);
              if ( (_DWORD)v29 == -1 )
              {
                v60 = 6;
                goto LABEL_215;
              }
              v44 = v494;
              v45 = (const __m128i *)(v494 + 384);
              *(_QWORD *)(v494 + 384) = v29;
              v4 = v44;
              *(_QWORD *)(v44 + 392) = v41;
              *(_OWORD *)(v44 + 480) = v258;
              v46 = v254;
              v47 = v255;
              v48 = v256;
              *(_OWORD *)(v44 + 400) = v253;
              *(_OWORD *)(v44 + 416) = v46;
              *(_OWORD *)(v44 + 432) = v47;
              *(_OWORD *)(v44 + 448) = v48;
              *(_OWORD *)(v44 + 464) = v257;
              *(_OWORD *)(v44 + 496) = v259;
              *(_QWORD *)(v44 + 512) = v260;
              *(_WORD *)(v44 + 376) = *(_WORD *)(v44 + 488);
              *(_BYTE *)(v44 + 369) = 0;
              v32 = (const __m128i *)(v44 + 520);
              sub_1418F44E0((__m128i *)(v44 + 520), v45, 0x88u);
              v489 = (_BYTE *)(v4 + 1080);
              *(_BYTE *)(v4 + 1080) = 0;
LABEL_44:
              v493 = v15;
              Address = v16;
              v486 = (__m128i *)v32;
              sub_1418F44E0((__m128i *)(v4 + 656), v32, 0x88u);
              *(_BYTE *)(v4 + 1072) = 0;
LABEL_45:
              v490 = (_BYTE *)(v4 + 656);
              sub_140B4C420(v346, v4 + 656, v473);
              if ( *(_DWORD *)v346 == 1 )
              {
                *v489 = 3;
                v30 = 5;
                goto LABEL_47;
              }
              v50 = *(_QWORD *)&v346[8];
              v41 = *(_QWORD *)&v346[16];
              *(_OWORD *)v366 = *(_OWORD *)&v346[24];
              sub_1407A90D0(v490);
              if ( !v50 )
              {
                *v489 = 1;
                v60 = 6;
                v64 = v494;
                v16 = Address;
                v15 = v493;
                *(_BYTE *)(v494 + 369) = 0;
                if ( _InterlockedDecrement64(*(volatile signed __int64 **)(v64 + 344)) )
                  goto LABEL_217;
                goto LABEL_216;
              }
              *(_OWORD *)&v315[16] = *(_OWORD *)v366;
              *(_QWORD *)v315 = v50;
              *(_QWORD *)&v315[8] = v41;
              sub_1416A9D40(v346, v41, *(_QWORD *)v366);
              v53 = *(_QWORD *)&v346[8];
              v52 = *(_QWORD *)v346;
              v54 = *(_QWORD *)&v346[16];
              if ( *(_QWORD *)v346 != -1 )
              {
LABEL_50:
                (*(void (__fastcall **)(_BYTE *, _QWORD, _QWORD))(*(_QWORD *)v315 + 32LL))(
                  &v315[24],
                  *(_QWORD *)&v315[8],
                  *(_QWORD *)&v315[16]);
                v473 = v52;
                v55 = v494;
                *(_BYTE *)(v494 + 1080) = 1;
                v56 = (unsigned __int16)(*(_WORD *)(v55 + 376) - 200) < 0x64u;
                v490 = (_BYTE *)v53;
                if ( v56 )
                {
                  sub_140631EB0(v315, v53, v54);
                  v41 = *(_QWORD *)v315;
                  if ( *(_QWORD *)v315 != -1 )
                  {
                    v365 = *(_OWORD *)&v315[8];
                    v57 = v494;
                    v3 = *(_QWORD *)(*(_QWORD *)(v494 + 328) + 96LL);
                    if ( v473 )
                      sub_140001660(v490, v473, 1);
                    *(_BYTE *)(v57 + 369) = 0;
                    v58 = _InterlockedDecrement64(*(volatile signed __int64 **)(v57 + 344));
                    v16 = Address;
                    v15 = v493;
                    if ( !v58 )
                    {
                      v467 = v493;
                      v466 = Address;
                      sub_141242F50(v494 + 344);
                    }
                    v59 = v494;
                    *(_BYTE *)(v494 + 368) = 0;
                    *(_BYTE *)(v59 + 370) = 0;
                    v60 = -1;
                    goto LABEL_220;
                  }
                  *(_QWORD *)&v420 = *(_QWORD *)&v315[8];
                  *(_QWORD *)v366 = &v420;
                  *(_QWORD *)&v366[8] = sub_14163CE40;
                  sub_1416ABFD0(v346, &unk_141A2A3D2, v366);
                  v41 = *(_QWORD *)v346;
                  v312 = *(_OWORD *)&v346[8];
                  sub_14002F910(&v420);
                  v365 = v312;
                  v16 = Address;
                  v15 = v493;
                  v195 = v473;
                  goto LABEL_213;
                }
                *(_QWORD *)v346 = v53;
                *(_QWORD *)&v346[8] = v54;
                *(_OWORD *)&v346[16] = 0;
                *(_QWORD *)&v346[32] = v53;
                *(_QWORD *)&v346[40] = v54;
                sub_14062D280(v315, v346);
                if ( v315[0] == 0xFF )
                {
                  sub_14002F910(&v315[8]);
                }
                else
                {
                  *(_OWORD *)&v346[16] = *(_OWORD *)&v315[16];
                  *(_OWORD *)&v346[1] = *(_OWORD *)&v315[1];
                  v346[0] = v315[0];
                  v106 = sub_1416419F0(aError_42, 5, v346);
                  v3 = -1;
                  if ( v106 && *(_BYTE *)v106 == 3 )
                  {
                    v107 = *(const __m128i **)(v106 + 16);
                    v52 = *(_QWORD *)(v106 + 24);
                    sub_14072C410((unsigned int)v315, v52, 0, 1, 1);
                    v3 = *(_QWORD *)&v315[8];
                    if ( *(_DWORD *)v315 == 1 )
                      sub_141938D2B(*(_QWORD *)&v315[8], *(_QWORD *)&v315[16]);
                    v53 = *(_QWORD *)&v315[16];
                    if ( v52 )
                      sub_1418F44E0(*(__m128i **)&v315[16], v107, v52);
                    else
                      v52 = 0;
                  }
                  sub_14002F9D0(v346);
                  if ( v3 != -1 )
                  {
                    *(_QWORD *)v366 = v3;
                    *(_QWORD *)&v366[8] = v53;
                    *(_QWORD *)&v366[16] = v52;
LABEL_209:
                    v489 = (_BYTE *)v53;
                    sub_14021D030((__int64)v346, (const __m128i *)v53, v52);
                    *(_QWORD *)&v312 = v346;
                    *((_QWORD *)&v312 + 1) = sub_1400015F0;
                    sub_1416ABFD0(v315, &unk_141A2B0FE, &v312);
                    if ( *(_QWORD *)v346 )
                      sub_140001660(*(_QWORD *)&v346[8], *(_QWORD *)v346, 1);
                    v41 = *(_QWORD *)v315;
                    v365 = *(_OWORD *)&v315[8];
                    v16 = Address;
                    v15 = v493;
                    v195 = v473;
                    if ( *(_QWORD *)v366 )
                      sub_140001660(v489, *(_QWORD *)v366, 1);
LABEL_213:
                    v60 = 10;
                    if ( v195 )
                      sub_140001660(v490, v195, 1);
LABEL_215:
                    v64 = v494;
                    *(_BYTE *)(v494 + 369) = 0;
                    if ( _InterlockedDecrement64(*(volatile signed __int64 **)(v64 + 344)) )
                    {
LABEL_217:
                      if ( *(_BYTE *)(v494 + 368) )
                      {
                        v477 = v15;
                        v476 = v16;
                        sub_140A3C980(&v335);
                      }
                      v196 = v494;
                      *(_BYTE *)(v494 + 368) = 0;
                      *(_BYTE *)(v196 + 370) = 0;
LABEL_220:
                      v252 = v365;
                      v291 = v340;
                      v292 = v341;
                      v293 = v342;
                      v294 = v343;
                      *v15 = 1;
                      v302 = v252;
                      v287 = v291;
                      v288 = v292;
                      v289 = v293;
                      v290 = v294;
                      sub_140A34C70(v16);
                      if ( (_DWORD)v60 == -1 )
                      {
                        *(_QWORD *)v366 = v41;
                        *(_OWORD *)&v366[8] = v302;
                        *(_QWORD *)&v366[24] = v3;
                        *(_QWORD *)v346 = v366;
                        *(_QWORD *)&v346[8] = sub_1400015F0;
                        *(_QWORD *)&v346[16] = &v366[24];
                        *(_QWORD *)&v346[24] = sub_1416BCB10;
                        v487 = 1;
                        sub_1416ABFD0(v315, &unk_141A2B2B0, v346);
                        *(_OWORD *)v346 = *(_OWORD *)v315;
                        *(_QWORD *)&v346[16] = *(_QWORD *)&v315[16];
                        v487 = 1;
                        sub_14019B500((unsigned int)aDebugReport, 12, (unsigned int)aUploadSucceede, 16, (__int64)v346);
                        *(_OWORD *)&v315[16] = *(_OWORD *)&v366[16];
                        *(_OWORD *)v315 = *(_OWORD *)v366;
                        v487 = 0;
                        sub_140FE99A0(v346, v315);
                        v10 = *(_QWORD *)&v346[8];
                        v88 = *(_QWORD *)v346;
                        v11 = *(_BYTE **)&v346[16];
                        LOBYTE(v12) = v346[24];
                        *(_DWORD *)v480 = *(_DWORD *)&v346[25];
                        *(_DWORD *)&v480[3] = *(_DWORD *)&v346[28];
                        v247 = *(_OWORD *)&v346[32];
                        v248 = *(_OWORD *)&v346[48];
                        v249 = *(_OWORD *)&v346[64];
                        v250 = *(_OWORD *)&v346[80];
                        v251 = *(_OWORD *)&v346[96];
                        v197 = v494;
                        v198 = *(_QWORD *)(v494 + 1088);
                        if ( v198 )
LABEL_223:
                          sub_140001660(*(_QWORD *)(v197 + 1096), v198, 1);
                      }
                      else
                      {
                        *(_QWORD *)v346 = v60;
                        *(_QWORD *)&v346[8] = v41;
                        *(_OWORD *)&v346[16] = v302;
                        *(_QWORD *)&v346[32] = v3;
                        *(_OWORD *)&v346[40] = v287;
                        *(_OWORD *)&v346[56] = v288;
                        *(_OWORD *)&v346[72] = v289;
                        *(_QWORD *)&v346[88] = v290;
                        *(_QWORD *)v366 = v346;
                        *(_QWORD *)&v366[8] = sub_14104A7D0;
                        sub_1416ABFD0(v315, &unk_141A2B239, v366);
                        *(_OWORD *)v366 = *(_OWORD *)v315;
                        *(_QWORD *)&v366[16] = *(_QWORD *)&v315[16];
                        sub_14019B500((unsigned int)aDebugReport, 12, (unsigned int)aUploadFailed, 13, (__int64)v366);
                        *(_QWORD *)v366 = 0;
                        *(_QWORD *)&v366[8] = 1;
                        *(_QWORD *)&v366[16] = 0;
                        *(_QWORD *)&v315[16] = 1610612768;
                        *(_QWORD *)v315 = v366;
                        *(_QWORD *)&v315[8] = &off_141A353B8;
                        if ( (unsigned __int8)sub_14104A7D0(v346, v315) )
                          sub_141939040(
                            (unsigned int)aADisplayImplem_6,
                            55,
                            (unsigned int)&v491,
                            (unsigned int)&unk_141A2C928,
                            (__int64)&off_141A35470);
                        v11 = *(_BYTE **)&v366[8];
                        v10 = *(_QWORD *)v366;
                        LOBYTE(v12) = v366[16];
                        *(_DWORD *)v480 = *(_DWORD *)&v366[17];
                        *(_DWORD *)&v480[3] = *(_DWORD *)&v366[20];
                        sub_140A3D8F0(v346);
                        v88 = -1;
                        v197 = v494;
                        v198 = *(_QWORD *)(v494 + 1088);
                        if ( v198 )
                          goto LABEL_223;
                      }
                      v199 = *(_QWORD *)(v197 + 1112);
                      if ( v199 )
                        sub_140001660(*(_QWORD *)(v197 + 1120), v199, 1);
                      v200 = *(_QWORD *)(v197 + 1136);
                      if ( v200 )
                        sub_140001660(*(_QWORD *)(v197 + 1144), v200, 1);
                      v201 = *(_QWORD *)(v197 + 1160);
                      if ( v201 )
                        sub_140001660(*(_QWORD *)(v197 + 1168), v201, 1);
                      *(_BYTE *)(v197 + 241) = 0;
                      *(_BYTE *)(v197 + 242) = 0;
                      v202 = sub_141695140(*(_QWORD *)(v197 + 216), *(_QWORD *)(v197 + 224));
                      if ( v202 && (unsigned int)(v202 & 3) - 2 >= 2 && (v202 & 3) != 0 )
                      {
                        *(_QWORD *)&v346[8] = v202 - 1;
                        v346[0] = 3;
                        sub_1416BCB00(&v346[8]);
                      }
                      v4 = v494;
                      v203 = *(_QWORD *)(v494 + 208);
                      if ( v203 )
                        sub_140001660(*(_QWORD *)(v494 + 216), v203, 1);
                      v204 = *(_QWORD *)(v4 + 184);
                      if ( v204 )
                        sub_140001660(*(_QWORD *)(v4 + 192), v204, 1);
                      v205 = *(_QWORD *)(v4 + 160);
                      if ( v205 )
                        sub_140001660(*(_QWORD *)(v4 + 168), v205, 1);
                      v206 = *(_QWORD *)(v4 + 112);
                      if ( v206 )
                        sub_140001660(*(_QWORD *)(v4 + 120), v206, 1);
                      v87 = *(_QWORD *)(v4 + 136);
                      if ( !v87 )
                        goto LABEL_90;
LABEL_89:
                      sub_140001660(*(_QWORD *)(v4 + 144), v87, 1);
LABEL_90:
                      v89 = v419;
                      *v419 = v88;
                      v89[1] = v10;
                      v89[2] = (__int64)v11;
                      *((_BYTE *)v89 + 24) = v12;
                      v90 = *(_DWORD *)&v480[3];
                      *(_DWORD *)((char *)v89 + 25) = *(_DWORD *)v480;
                      *((_DWORD *)v89 + 7) = v90;
                      v91 = v248;
                      v92 = v249;
                      v93 = v250;
                      *((_OWORD *)v89 + 2) = v247;
                      *((_OWORD *)v89 + 3) = v91;
                      *((_OWORD *)v89 + 4) = v92;
                      *((_OWORD *)v89 + 5) = v93;
                      *((_OWORD *)v89 + 6) = v251;
                      result = 1;
                      goto LABEL_150;
                    }
LABEL_216:
                    v467 = v15;
                    v466 = v16;
                    sub_141242F50(v64 + 344);
                    goto LABEL_217;
                  }
                }
                *(_WORD *)v315 = *(_WORD *)(v494 + 376);
                *(_QWORD *)v346 = v315;
                *(_QWORD *)&v346[8] = sub_1416BB1E0;
                sub_1416ABFD0(v366, &unk_141A2A3CA, v346);
                v53 = *(_QWORD *)&v366[8];
                v52 = *(_QWORD *)&v366[16];
                goto LABEL_209;
              }
              if ( *(__int64 *)&v346[16] >= 0 )
              {
                if ( !*(_QWORD *)&v346[16] )
                {
                  v53 = 1;
                  v52 = 0;
                  v54 = 0;
                  goto LABEL_50;
                }
                nullsub_1(v51);
                v113 = 1;
                v194 = (__m128i *)sub_140001650(v54, 1);
                if ( v194 )
                {
                  v3 = (unsigned __int64)v194;
                  sub_1418F44E0(v194, (const __m128i *)v53, v54);
                  v52 = v54;
                  v53 = v3;
                  goto LABEL_50;
                }
              }
              else
              {
                v113 = 0;
              }
              sub_141938D2B(v113, v54);
            }
            *(_QWORD *)&v346[80] = v266;
            *(_OWORD *)&v346[64] = v265;
            *(_OWORD *)&v346[48] = v264;
            *(_OWORD *)&v346[32] = v263;
            *(_OWORD *)&v346[16] = v262;
            *(_OWORD *)v346 = v261;
            *(_BYTE *)(v4 + 520) = 1;
            *(_QWORD *)(v4 + 528) = v138;
            *(_QWORD *)(v4 + 536) = v136;
            v139 = *(_OWORD *)&v346[16];
            v140 = *(_OWORD *)&v346[32];
            v141 = *(_OWORD *)&v346[48];
            *(_OWORD *)(v4 + 544) = *(_OWORD *)v346;
            *(_OWORD *)(v4 + 560) = v139;
            *(_OWORD *)(v4 + 576) = v140;
            *(_OWORD *)(v4 + 592) = v141;
            *(_OWORD *)(v4 + 608) = *(_OWORD *)&v346[64];
            *(_QWORD *)(v4 + 624) = *(_QWORD *)&v346[80];
            v63 = (unsigned __int64 *)(v4 + 632);
            *(_QWORD *)(v4 + 632) = v3;
            v490 = (_BYTE *)(v4 + 664);
            *(_BYTE *)(v4 + 664) = 0;
            v33 = v132;
LABEL_142:
            v112 = *(volatile signed __int64 **)v3;
            if ( _InterlockedIncrement64(*(volatile signed __int64 **)v3) <= 0 )
              BUG();
            v111 = (volatile signed __int64 **)(v4 + 640);
            *(_QWORD *)(v4 + 640) = v112;
            v110 = (__m128i *)(v4 + 656);
            *(_BYTE *)(v4 + 656) = 0;
LABEL_144:
            v453 = v15;
            v452 = v16;
            v451 = v34;
            v450 = v490;
            v481 = v63;
            v449 = v63;
            v486 = v110;
            v448 = v110;
            v478 = v111;
            v447 = v111;
            v142 = sub_140058680(v112, &off_141A28148);
            v489 = v34;
            v493 = v15;
            Address = v16;
            v4 = v494;
            *(_QWORD *)(v494 + 648) = v142;
LABEL_145:
            v479 = (_QWORD *)(v4 + 648);
            sub_14093EA40(v346, v4 + 648, v473);
            if ( *(_DWORD *)v346 == -2 )
            {
              v486->m128i_i8[0] = 3;
              *v490 = 3;
              v131 = 4;
              goto LABEL_147;
            }
            *(_QWORD *)&v318 = *(_QWORD *)&v346[80];
            v317 = *(_OWORD *)&v346[64];
            v316 = *(_OWORD *)&v346[48];
            *(_OWORD *)&v315[32] = *(_OWORD *)&v346[32];
            *(_OWORD *)&v315[16] = *(_OWORD *)&v346[16];
            *(_OWORD *)v315 = *(_OWORD *)v346;
            v143 = *v479;
            v144 = v493;
            v453 = v493;
            v145 = Address;
            v452 = Address;
            v146 = v489;
            v451 = v489;
            v450 = v490;
            v449 = v481;
            v448 = v486;
            v447 = v478;
            if ( (unsigned __int8)sub_1414FCFD0(v143) )
            {
              v453 = v144;
              v452 = v145;
              v451 = v146;
              v450 = v490;
              v449 = v481;
              v448 = v486;
              v447 = v478;
              sub_1414FD8E0(v143);
            }
            v148 = *(_QWORD *)v315;
            if ( *(_QWORD *)v315 == -1 )
            {
              LOBYTE(v147) = 41;
              v149 = sub_1416793A0(v147, aBackgroundTask, 22);
              v144 = v493;
              v453 = v493;
              v145 = Address;
              v452 = Address;
              v146 = v489;
              v451 = v489;
              v450 = v490;
              v449 = v481;
              v448 = v486;
              v447 = v478;
              sub_140755700(v315);
              v486->m128i_i8[0] = 1;
              *v490 = 1;
            }
            else
            {
              v149 = *(_QWORD *)&v315[8];
              v150 = *((_QWORD *)&v316 + 1);
              v486->m128i_i8[0] = 1;
              *v490 = 1;
              if ( v148 != 2 )
              {
                v151 = v494;
                *(_BYTE *)(v494 + 520) = 0;
                v426 = *(_QWORD *)(v151 + 624);
                v425 = *(_OWORD *)(v151 + 608);
                v424 = *(_OWORD *)(v151 + 592);
                v152 = *(_OWORD *)(v151 + 528);
                v153 = *(_OWORD *)(v151 + 544);
                v154 = *(_OWORD *)(v151 + 560);
                v423 = *(_OWORD *)(v151 + 576);
                v422 = v154;
                v421 = v153;
                v420 = v152;
                v446 = v144;
                v445 = v145;
                v444 = v146;
                sub_140CAB5B0(v346, &v420, v150);
LABEL_170:
                v163 = v494;
                *(_BYTE *)(v494 + 521) = 0;
                *(_QWORD *)&v425 = *(_QWORD *)(v163 + 512);
                v424 = *(_OWORD *)(v163 + 496);
                v164 = *(_OWORD *)(v163 + 432);
                v165 = *(_OWORD *)(v163 + 448);
                v166 = *(_OWORD *)(v163 + 464);
                v423 = *(_OWORD *)(v163 + 480);
                v422 = v166;
                v421 = v165;
                v420 = v164;
                v446 = v144;
                v445 = v145;
                v444 = v146;
                sub_1412590F0(v315, v346, &v420);
                v4 = v494;
                v3 = *(_QWORD *)(v494 + 408);
                if ( v3 == -1 )
                {
                  v136 = *(_QWORD *)&v315[8];
                  v158 = *(_QWORD *)v315;
                  v490 = *(_BYTE **)&v315[16];
                  v333[0] = *(_OWORD *)&v315[24];
                  v16 = *(PVOID *)&v315[40];
                  v420 = v316;
                  v421 = v317;
                  v422 = v318;
                  *(_QWORD *)&v423 = v319;
                  *(_OWORD *)v346 = v320;
                  *(_OWORD *)&v346[16] = v321;
                  *(_OWORD *)&v346[32] = v322;
                  *(_OWORD *)&v346[48] = v323;
                  *(_OWORD *)&v346[64] = v324;
                  *(_OWORD *)&v346[80] = v325;
                  v3 = v326;
                  v34 = v327;
                  v132 = v328;
                  v364 = v329;
                }
                else
                {
                  *(_BYTE *)(v494 + 522) = 0;
                  v34 = *(_BYTE **)(v4 + 416);
                  v132 = *(char **)(v4 + 424);
                  if ( v326 - 1 <= 0xFFFFFFFFFFFFFFFCuLL )
                    sub_140001660(v327, v326, 1);
                  v490 = *(_BYTE **)&v315[16];
                  v333[0] = *(_OWORD *)&v315[24];
                  v16 = *(PVOID *)&v315[40];
                  v420 = v316;
                  v421 = v317;
                  v422 = v318;
                  *(_QWORD *)&v423 = v319;
                  *(_OWORD *)v346 = v320;
                  *(_OWORD *)&v346[16] = v321;
                  *(_OWORD *)&v346[32] = v322;
                  *(_OWORD *)&v346[48] = v323;
                  *(_OWORD *)&v346[64] = v324;
                  *(_OWORD *)&v346[80] = v325;
                  v364 = v329;
                  v136 = *(_QWORD *)&v315[8];
                  v158 = *(_QWORD *)v315;
                }
                v227 = v333[0];
                v267 = v420;
                v268 = v421;
                v269 = v422;
                v270 = v423;
                v296 = *(_OWORD *)v346;
                v297 = *(_OWORD *)&v346[16];
                v298 = *(_OWORD *)&v346[32];
                v299 = *(_OWORD *)&v346[48];
                v300 = *(_OWORD *)&v346[64];
                v301 = *(_OWORD *)&v346[80];
                v228 = v364;
                *(_WORD *)(v4 + 520) = 0;
                goto LABEL_176;
              }
            }
            if ( (unsigned int)(v149 & 3) - 2 >= 2 && (v149 & 3) != 0 )
            {
              *(_QWORD *)&v346[8] = v149 - 1;
              v346[0] = 3;
              v446 = v144;
              v445 = v145;
              v444 = v146;
              sub_1416BCB00(&v346[8]);
            }
            v159 = v494;
            *(_BYTE *)(v494 + 520) = 0;
            v426 = *(_QWORD *)(v159 + 624);
            v425 = *(_OWORD *)(v159 + 608);
            v424 = *(_OWORD *)(v159 + 592);
            v160 = *(_OWORD *)(v159 + 528);
            v161 = *(_OWORD *)(v159 + 544);
            v162 = *(_OWORD *)(v159 + 560);
            v423 = *(_OWORD *)(v159 + 576);
            v422 = v162;
            v421 = v161;
            v420 = v160;
            v446 = v144;
            v445 = v145;
            v444 = v146;
            sub_140DC9270(&v364, &v420, v150);
            v446 = v144;
            v445 = v145;
            v444 = v146;
            sub_141259060(v346, &v364, 0);
            goto LABEL_170;
          }
        }
        v138 = 0;
        v34 = v489;
        goto LABEL_140;
      }
      *v419 = -2;
      result = 3;
      v4 = v494;
LABEL_150:
      *(_BYTE *)(v4 + 240) = result;
      return result;
    case 1LL:
      sub_1419393E0(&off_141A2B298);
    case 2LL:
      sub_141939400(&off_141A2B298);
    case 3LL:
      goto LABEL_64;
    case 4LL:
      v15 = (_BYTE *)(a2 + 371);
      v16 = (PVOID)(a2 + 248);
      switch ( *(_BYTE *)(a2 + 371) )
      {
        case 0:
          v17 = *(_QWORD *)(a2 + 280);
          v18 = *(_QWORD *)(a2 + 288);
          v19 = *(_QWORD *)(a2 + 352);
          v20 = *(_QWORD *)(a2 + 296);
          v21 = *(_QWORD *)(a2 + 304);
          v22 = *(_QWORD *)(a2 + 312);
          v23 = *(_QWORD *)(a2 + 320);
          v24 = *(_QWORD *)(a2 + 360);
          goto LABEL_92;
        case 1:
          v381 = a2 + 248;
          sub_1419393E0(&off_141A2B050);
        case 2:
          v381 = a2 + 248;
          sub_141939400(&off_141A2B050);
        case 3:
          v33 = (char *)(a2 + 523);
          v34 = (_BYTE *)(a2 + 376);
          switch ( *(_BYTE *)(a2 + 523) )
          {
            case 0:
              v481 = (unsigned __int64 *)(a2 + 523);
              v17 = *(_QWORD *)(a2 + 392);
              v18 = *(_QWORD *)(a2 + 400);
              goto LABEL_95;
            case 1:
              v387 = a2 + 371;
              v386 = a2 + 248;
              v385 = a2 + 376;
              sub_1419393E0(&off_141A27DD0);
            case 2:
              v387 = a2 + 371;
              v386 = a2 + 248;
              v385 = a2 + 376;
              sub_141939400(&off_141A27DD0);
            case 3:
              v361 = (_BYTE *)(a2 + 749);
              v61 = *(unsigned __int8 *)(a2 + 749);
              v62 = a2 + 528;
              v493 = (_BYTE *)(a2 + 371);
              switch ( v61 )
              {
                case 0LL:
                  v481 = (unsigned __int64 *)(a2 + 523);
                  v17 = *(_QWORD *)(a2 + 528);
                  v18 = *(_QWORD *)(a2 + 536);
                  break;
                case 1LL:
                  v434 = a2 + 371;
                  v433 = a2 + 248;
                  v432 = a2 + 376;
                  v431 = a2 + 528;
                  sub_1419393E0(&off_141A27CB8);
                case 2LL:
                  v434 = a2 + 371;
                  v433 = a2 + 248;
                  v432 = a2 + 376;
                  v431 = a2 + 528;
                  sub_141939400(&off_141A27CB8);
                case 3LL:
                  v490 = (_BYTE *)(a2 + 704);
                  v108 = *(unsigned __int8 *)(a2 + 704);
                  v486 = (__m128i *)(a2 + 544);
                  v489 = (_BYTE *)(a2 + 376);
                  switch ( v108 )
                  {
                    case 0LL:
                      v481 = (unsigned __int64 *)(a2 + 523);
                      v109 = *(__int128 **)(a2 + 544);
                      v17 = *(_QWORD *)(a2 + 552);
                      v18 = *(_QWORD *)(a2 + 560);
                      goto LABEL_129;
                    case 1LL:
                      v439 = a2 + 371;
                      v438 = a2 + 248;
                      v437 = a2 + 376;
                      v436 = a2 + 528;
                      v435 = v486;
                      sub_1419393E0(&off_141A27C20);
                    case 2LL:
                      v439 = a2 + 371;
                      v438 = a2 + 248;
                      v437 = a2 + 376;
                      v436 = a2 + 528;
                      v435 = v486;
                      sub_141939400(&off_141A27C20);
                    case 3LL:
                      v362 = (_BYTE *)(a2 + 697);
                      v193 = *(unsigned __int8 *)(a2 + 697);
                      v479 = (_QWORD *)(a2 + 568);
                      switch ( v193 )
                      {
                        case 0LL:
                          v481 = (unsigned __int64 *)(a2 + 523);
                          v109 = *(__int128 **)(a2 + 688);
                          v17 = *(_QWORD *)(a2 + 584);
                          v18 = *(_QWORD *)(a2 + 592);
                          break;
                        case 1LL:
                          v400 = a2 + 371;
                          v399 = a2 + 248;
                          v398 = v489;
                          v397 = a2 + 528;
                          v396 = v490;
                          v395 = v486;
                          v394 = v479;
                          sub_1419393E0(&off_141A27C38);
                        case 2LL:
                          v400 = a2 + 371;
                          v399 = a2 + 248;
                          v398 = v489;
                          v397 = a2 + 528;
                          v396 = v490;
                          v395 = v486;
                          v394 = v479;
                          sub_141939400(&off_141A27C38);
                        case 3LL:
                          v126 = (unsigned __int64 *)(a2 + 680);
                          v122 = (__int128 *)(a2 + 600);
                          switch ( *(_BYTE *)(v4 + 680) )
                          {
                            case 0:
                              v119 = v479;
                              goto LABEL_131;
                            case 1:
                              v408 = v4 + 371;
                              v407 = v4 + 248;
                              v406 = v489;
                              v405 = v4 + 528;
                              v404 = v490;
                              v403 = v486;
                              v402 = v479;
                              v401 = v4 + 600;
                              sub_1419393E0(&off_141A28160);
                            case 2:
                              v408 = v4 + 371;
                              v407 = v4 + 248;
                              v406 = v489;
                              v405 = v4 + 528;
                              v404 = v490;
                              v403 = v486;
                              v402 = v479;
                              v401 = v4 + 600;
                              sub_141939400(&off_141A28160);
                            case 3:
                              v481 = (unsigned __int64 *)(v4 + 680);
                              v478 = (volatile signed __int64 **)(v4 + 600);
                              v443 = v4 + 528;
                              Address = (PVOID)(v4 + 248);
                              goto LABEL_132;
                          }
                      }
                      goto LABEL_130;
                  }
              }
              goto LABEL_128;
            case 4:
              v490 = (_BYTE *)(a2 + 664);
              v63 = (unsigned __int64 *)(a2 + 632);
              switch ( *(_BYTE *)(v4 + 664) )
              {
                case 0:
                  v3 = *v63;
                  break;
                case 1:
                  v430 = v4 + 371;
                  v429 = v4 + 248;
                  v428 = v4 + 376;
                  v427 = v4 + 632;
                  sub_1419393E0(&off_141A2AC70);
                case 2:
                  v430 = v4 + 371;
                  v429 = v4 + 248;
                  v428 = v4 + 376;
                  v427 = v4 + 632;
                  sub_141939400(&off_141A2AC70);
                case 3:
                  v110 = (__m128i *)(v4 + 656);
                  v111 = (volatile signed __int64 **)(v4 + 640);
                  switch ( *(_BYTE *)(v4 + 656) )
                  {
                    case 0:
                      v112 = *v111;
                      goto LABEL_144;
                    case 1:
                      v393 = v4 + 371;
                      v392 = v4 + 248;
                      v391 = v4 + 376;
                      v390 = v490;
                      v389 = v4 + 632;
                      v388 = v4 + 640;
                      sub_1419393E0(&off_141A28160);
                    case 2:
                      v393 = v4 + 371;
                      v392 = v4 + 248;
                      v391 = v4 + 376;
                      v390 = v490;
                      v389 = v4 + 632;
                      v388 = v4 + 640;
                      sub_141939400(&off_141A28160);
                    case 3:
                      v478 = (volatile signed __int64 **)(v4 + 640);
                      v486 = (__m128i *)(v4 + 656);
                      v481 = (unsigned __int64 *)(v4 + 632);
                      v489 = (_BYTE *)(v4 + 376);
                      v493 = (_BYTE *)(v4 + 371);
                      Address = (PVOID)(v4 + 248);
                      goto LABEL_145;
                  }
              }
              goto LABEL_142;
          }
        case 4:
          v493 = (_BYTE *)(a2 + 371);
          Address = (PVOID)(a2 + 248);
          goto LABEL_21;
        case 5:
          v31 = *(unsigned __int8 *)(a2 + 1080);
          v32 = (const __m128i *)(a2 + 520);
          v489 = (_BYTE *)(a2 + 1080);
          switch ( v31 )
          {
            case 0LL:
              goto LABEL_44;
            case 1LL:
              v384 = a2 + 371;
              v383 = a2 + 248;
              v382 = a2 + 520;
              sub_1419393E0(&off_141A2AC28);
            case 2LL:
              v384 = a2 + 371;
              v383 = a2 + 248;
              v382 = a2 + 520;
              sub_141939400(&off_141A2AC28);
            case 3LL:
              v486 = (__m128i *)(a2 + 520);
              v493 = (_BYTE *)(a2 + 371);
              Address = (PVOID)(a2 + 248);
              goto LABEL_45;
          }
      }
  }
}
