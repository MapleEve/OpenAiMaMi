// module: codexmate_lib/core/debug_report_upload
// addr: 0x140cf1d00
// name: serialize_15
// win 1.2.1 | module src/core/debug_report_upload.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::debug_bundle::_::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$codexmate_lib..core..debug_bundle..DebugBundlePayload$GT$::serialize | 跨平台字符串签名匹配(名↔函数一致)
char __fastcall serialize_15(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _BYTE *v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rax
  __int128 v7; // xmm1
  __int128 v8; // xmm2
  __int128 v9; // xmm3
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rdi
  _BYTE *v13; // r14
  int v14; // r15d
  int v15; // eax
  int v16; // ecx
  _BYTE *v17; // r12
  PVOID v18; // r13
  __int64 v19; // rbx
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // r10
  _QWORD *v26; // rdx
  __int64 *v27; // r12
  __int64 v28; // rdx
  __int64 v29; // rcx
  PVOID v30; // rcx
  char v31; // al
  __int64 v32; // rsi
  char v33; // al
  char *v34; // r14
  __int64 v35; // r15
  __int64 v36; // rdx
  PVOID v37; // rcx
  char v38; // al
  char v39; // si
  __int64 v40; // rcx
  __int64 v41; // rdx
  char *v42; // rsi
  char v43; // al
  __int64 v44; // r14
  __int64 v45; // rcx
  __int64 v46; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int128 v49; // xmm1
  __int128 v50; // xmm2
  __int128 v51; // xmm3
  __int64 v52; // rsi
  char *v53; // rcx
  __int64 v54; // rdi
  __int64 v55; // rax
  volatile signed __int64 **v56; // rdi
  _BYTE *v57; // rdx
  volatile signed __int64 ***v58; // r8
  volatile signed __int64 **v59; // rdi
  bool v60; // cf
  __int64 v61; // rax
  signed __int64 v62; // rt0
  __int64 v63; // rax
  __int64 v64; // rdi
  __int64 v65; // rsi
  __int64 v66; // rdi
  __int64 v67; // rbx
  char v68; // r14
  __int64 v69; // rdx
  int v70; // ecx
  int v71; // ecx
  __int64 v72; // rsi
  __int64 v73; // rax
  __int64 v74; // r15
  __int8 v75; // r12
  __int64 v76; // r14
  unsigned __int128 v77; // kr50_16
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
  __int64 v101; // rdi
  __int64 v102; // r12
  __int64 v103; // r15
  __int64 v104; // r13
  __int64 v105; // rsi
  __int64 v106; // rax
  __int64 v107; // r14
  __int64 v108; // r15
  __int64 v109; // rax
  __int128 *v110; // r12
  _BYTE *v111; // r9
  volatile signed __int64 **v112; // r10
  volatile signed __int64 *v113; // rcx
  __int64 v114; // rax
  __int64 v115; // rdx
  __int64 v116; // rax
  __int64 v117; // rcx
  __int128 v118; // rax
  __int64 v119; // r15
  __int64 v120; // rcx
  char v121; // al
  __int128 *v122; // rdx
  __int128 v123; // xmm0
  __int128 v124; // xmm1
  __int128 v125; // xmm2
  char *v126; // r8
  __int128 v127; // xmm0
  __int128 v128; // xmm1
  __int128 v129; // xmm2
  __int64 v130; // rax
  char v131; // al
  __int64 v132; // rbx
  __int64 v133; // rsi
  __int64 v134; // rcx
  void (__fastcall *v135)(_QWORD); // rdx
  __int64 v136; // rax
  bool v137; // zf
  __int128 v138; // xmm1
  __int128 v139; // xmm2
  __int128 v140; // xmm3
  __int64 v141; // rax
  __int64 v142; // rbx
  _BYTE *v143; // rdi
  PVOID v144; // rsi
  __int64 v145; // r14
  __int64 v146; // rcx
  __int64 v147; // rax
  __int64 v148; // rbx
  __int64 v149; // r8
  __int64 v150; // rcx
  __int128 v151; // xmm0
  __int128 v152; // xmm1
  __int128 v153; // xmm2
  __int64 v154; // rdx
  __int64 v155; // rdx
  __int64 v156; // rdx
  __int64 v157; // r12
  __int64 v158; // rdx
  __int64 v159; // rcx
  __int128 v160; // xmm0
  __int128 v161; // xmm1
  __int128 v162; // xmm2
  __int64 v163; // rcx
  __int128 v164; // xmm0
  __int128 v165; // xmm1
  __int128 v166; // xmm2
  __int128 v167; // xmm6
  __int64 v168; // r14
  __int64 v169; // rsi
  __int128 v170; // xmm6
  __int64 v171; // rdi
  __int64 v172; // rdx
  __int64 v173; // rax
  __int64 v174; // rcx
  __int64 v175; // rdx
  __int64 v176; // rax
  __int64 v177; // rdx
  __int64 v178; // rdx
  __int64 v179; // rdx
  __int64 v180; // rsi
  __int64 v181; // rdi
  char *v182; // rdx
  __int64 v183; // r15
  __int64 v184; // rdx
  __int64 v185; // rax
  __int64 v186; // rcx
  __int64 v187; // r15
  __int64 v188; // rdx
  __int64 v189; // r14
  __int64 v190; // rdi
  __int64 v191; // r12
  char v192; // al
  __int64 v193; // rdx
  __int128 v194; // xmm0
  __int128 v195; // xmm0
  __int64 v196; // rax
  __int64 v197; // rdx
  __int64 v198; // rax
  __int64 v199; // rax
  __int64 v200; // rdx
  _BYTE *v201; // r14
  __int64 v202; // r15
  __int64 v203; // rax
  __int64 v204; // rsi
  __int64 v205; // rdx
  __int64 v206; // rdx
  __int64 v207; // rdx
  __int64 v208; // rdx
  __int64 v209; // rax
  __int64 v210; // rdx
  __int64 v211; // rdx
  __int64 v212; // rdx
  __int64 v213; // rdx
  int v214; // eax
  __int64 v215; // [rsp+30h] [rbp-50h] BYREF
  __int128 v216; // [rsp+38h] [rbp-48h]
  __int128 v217; // [rsp+48h] [rbp-38h]
  __int64 v218; // [rsp+58h] [rbp-28h]
  __m256i v219; // [rsp+60h] [rbp-20h]
  __int128 v220; // [rsp+80h] [rbp+0h]
  __int64 v221; // [rsp+90h] [rbp+10h]
  char v222[152]; // [rsp+98h] [rbp+18h] BYREF
  _OWORD v223[4]; // [rsp+130h] [rbp+B0h] BYREF
  __int128 v224; // [rsp+170h] [rbp+F0h]
  __m256i v225; // [rsp+180h] [rbp+100h]
  __int128 v226; // [rsp+1A0h] [rbp+120h]
  __int128 v227; // [rsp+1B0h] [rbp+130h]
  __int128 v228; // [rsp+1C0h] [rbp+140h]
  __int128 v229; // [rsp+1D0h] [rbp+150h]
  __m256i v230; // [rsp+1E0h] [rbp+160h]
  __int128 v231; // [rsp+200h] [rbp+180h]
  __m256i v232; // [rsp+210h] [rbp+190h]
  __int128 v233; // [rsp+230h] [rbp+1B0h]
  __int128 v234; // [rsp+240h] [rbp+1C0h]
  __int128 v235; // [rsp+250h] [rbp+1D0h]
  __int128 v236; // [rsp+260h] [rbp+1E0h]
  __m256i v237; // [rsp+270h] [rbp+1F0h]
  __int128 v238; // [rsp+290h] [rbp+210h]
  __m256i v239; // [rsp+2A0h] [rbp+220h]
  __int128 v240; // [rsp+2C0h] [rbp+240h]
  __int128 v241; // [rsp+2D0h] [rbp+250h]
  __int128 v242; // [rsp+2E0h] [rbp+260h]
  __int128 v243; // [rsp+2F0h] [rbp+270h]
  __m256i v244; // [rsp+300h] [rbp+280h]
  __int128 v245; // [rsp+320h] [rbp+2A0h]
  __int128 v246; // [rsp+330h] [rbp+2B0h]
  _QWORD v247[6]; // [rsp+340h] [rbp+2C0h] BYREF
  __m256i v248; // [rsp+370h] [rbp+2F0h]
  __int128 v249; // [rsp+390h] [rbp+310h]
  __int64 v250; // [rsp+3A0h] [rbp+320h]
  char v251[152]; // [rsp+3A8h] [rbp+328h] BYREF
  __int128 v252; // [rsp+440h] [rbp+3C0h]
  __int128 v253; // [rsp+450h] [rbp+3D0h]
  __int128 v254; // [rsp+460h] [rbp+3E0h]
  __int128 v255; // [rsp+470h] [rbp+3F0h]
  __int128 v256; // [rsp+480h] [rbp+400h]
  __int128 v257; // [rsp+490h] [rbp+410h]
  __int128 v258; // [rsp+4A0h] [rbp+420h]
  __int128 v259; // [rsp+4B0h] [rbp+430h]
  __int128 v260; // [rsp+4C0h] [rbp+440h]
  __int128 v261; // [rsp+4D0h] [rbp+450h]
  __int128 v262; // [rsp+4E0h] [rbp+460h]
  __int128 v263; // [rsp+4F0h] [rbp+470h]
  __int128 v264; // [rsp+500h] [rbp+480h]
  __int128 v265; // [rsp+510h] [rbp+490h]
  __int64 v266; // [rsp+520h] [rbp+4A0h]
  __m256i v267; // [rsp+530h] [rbp+4B0h]
  __int128 v268; // [rsp+550h] [rbp+4D0h]
  __m256i v269; // [rsp+560h] [rbp+4E0h]
  __int64 v270; // [rsp+580h] [rbp+500h]
  __m256i v271; // [rsp+590h] [rbp+510h]
  __int128 v272; // [rsp+5B0h] [rbp+530h]
  __int64 v273; // [rsp+5C0h] [rbp+540h]
  __m256i v274; // [rsp+5D0h] [rbp+550h]
  __int128 v275; // [rsp+5F0h] [rbp+570h]
  __int64 v276; // [rsp+600h] [rbp+580h]
  __m256i v277; // [rsp+610h] [rbp+590h]
  __int128 v278; // [rsp+630h] [rbp+5B0h]
  __int64 v279; // [rsp+640h] [rbp+5C0h]
  __m256i v280; // [rsp+650h] [rbp+5D0h]
  __int128 v281; // [rsp+670h] [rbp+5F0h]
  __int64 v282; // [rsp+680h] [rbp+600h]
  __m256i v283; // [rsp+690h] [rbp+610h]
  __int128 v284; // [rsp+6B0h] [rbp+630h]
  __int64 v285; // [rsp+6C0h] [rbp+640h]
  __m256i v286; // [rsp+6D0h] [rbp+650h]
  __int128 v287; // [rsp+6F0h] [rbp+670h]
  __int64 v288; // [rsp+700h] [rbp+680h]
  __m256i v289; // [rsp+710h] [rbp+690h]
  __int128 v290; // [rsp+730h] [rbp+6B0h]
  __int64 v291; // [rsp+740h] [rbp+6C0h]
  __m256i v292; // [rsp+750h] [rbp+6D0h] BYREF
  __int128 v293; // [rsp+770h] [rbp+6F0h]
  __int128 v294; // [rsp+780h] [rbp+700h]
  __int128 v295; // [rsp+790h] [rbp+710h]
  __int128 v296; // [rsp+7A0h] [rbp+720h]
  __int128 v297; // [rsp+7B0h] [rbp+730h]
  __int64 v298; // [rsp+7C0h] [rbp+740h]
  __int128 v299; // [rsp+7D0h] [rbp+750h] BYREF
  __int64 v300; // [rsp+7E0h] [rbp+760h] BYREF
  __int128 v301; // [rsp+898h] [rbp+818h]
  __int64 v302; // [rsp+8A8h] [rbp+828h]
  __m256i v303; // [rsp+8B0h] [rbp+830h]
  __m256i v304; // [rsp+8D0h] [rbp+850h]
  __int128 v305; // [rsp+8F0h] [rbp+870h]
  __int64 v306; // [rsp+900h] [rbp+880h]
  _BYTE v307[48]; // [rsp+910h] [rbp+890h] BYREF
  __m256i v308; // [rsp+940h] [rbp+8C0h]
  __int128 v309; // [rsp+960h] [rbp+8E0h]
  __int64 v310; // [rsp+970h] [rbp+8F0h]
  __m256i v311; // [rsp+978h] [rbp+8F8h]
  __int128 v312; // [rsp+998h] [rbp+918h]
  __int128 v313; // [rsp+9A8h] [rbp+928h]
  __int128 v314; // [rsp+9B8h] [rbp+938h]
  __int128 v315; // [rsp+9C8h] [rbp+948h]
  char *v316; // [rsp+9D8h] [rbp+958h]
  __int64 v317; // [rsp+9E0h] [rbp+960h]
  volatile signed __int64 **v318; // [rsp+9E8h] [rbp+968h]
  __m256i v319; // [rsp+9F0h] [rbp+970h]
  __int64 v320; // [rsp+C08h] [rbp+B88h]
  int v321; // [rsp+C10h] [rbp+B90h]
  char v322[140]; // [rsp+C14h] [rbp+B94h] BYREF
  _OWORD v323[2]; // [rsp+CA0h] [rbp+C20h] BYREF
  __int128 v324; // [rsp+CC0h] [rbp+C40h]
  __m256i v325; // [rsp+CD0h] [rbp+C50h] BYREF
  __int128 v326; // [rsp+CF0h] [rbp+C70h]
  __m256i v327; // [rsp+D00h] [rbp+C80h]
  __m256i v328; // [rsp+D20h] [rbp+CA0h]
  __int128 v329; // [rsp+D40h] [rbp+CC0h]
  __int64 v330; // [rsp+D50h] [rbp+CD0h]
  __m256i v331; // [rsp+D60h] [rbp+CE0h] BYREF
  _BYTE v332[80]; // [rsp+D80h] [rbp+D00h]
  __int128 v333; // [rsp+DD0h] [rbp+D50h]
  __int64 v334; // [rsp+DE0h] [rbp+D60h]
  __int64 v335; // [rsp+1008h] [rbp+F88h]
  int v336; // [rsp+1010h] [rbp+F90h]
  char v337[140]; // [rsp+1064h] [rbp+FE4h] BYREF
  __m256i v338; // [rsp+10F0h] [rbp+1070h] BYREF
  __int128 v339; // [rsp+1110h] [rbp+1090h]
  void (__fastcall **v340)(_QWORD); // [rsp+1120h] [rbp+10A0h]
  __int64 v341; // [rsp+1130h] [rbp+10B0h]
  _BYTE *v342; // [rsp+1138h] [rbp+10B8h]
  _BYTE *v343; // [rsp+1140h] [rbp+10C0h]
  volatile signed __int64 **v344; // [rsp+1148h] [rbp+10C8h]
  __int64 v345; // [rsp+1150h] [rbp+10D0h]
  PVOID v346; // [rsp+1158h] [rbp+10D8h]
  _BYTE *v347; // [rsp+1160h] [rbp+10E0h]
  PVOID v348; // [rsp+1168h] [rbp+10E8h]
  _BYTE *v349; // [rsp+1170h] [rbp+10F0h]
  __int64 *v350; // [rsp+1178h] [rbp+10F8h]
  __int128 v351; // [rsp+1180h] [rbp+1100h]
  _BYTE v352[48]; // [rsp+1190h] [rbp+1110h] BYREF
  __m256i v353; // [rsp+11C0h] [rbp+1140h]
  __int128 v354; // [rsp+11E0h] [rbp+1160h]
  __int64 v355; // [rsp+11F0h] [rbp+1170h]
  __m256i v356; // [rsp+11F8h] [rbp+1178h]
  __int128 v357; // [rsp+1218h] [rbp+1198h]
  __int128 v358; // [rsp+1228h] [rbp+11A8h]
  __int128 v359; // [rsp+1238h] [rbp+11B8h]
  __int128 v360; // [rsp+1248h] [rbp+11C8h]
  char *v361; // [rsp+1258h] [rbp+11D8h]
  __int64 v362; // [rsp+1260h] [rbp+11E0h]
  volatile signed __int64 **v363; // [rsp+1268h] [rbp+11E8h]
  __m256i v364; // [rsp+1270h] [rbp+11F0h]
  __int64 v365; // [rsp+1298h] [rbp+1218h]
  __int64 v366; // [rsp+12A0h] [rbp+1220h]
  __int64 v367; // [rsp+12A8h] [rbp+1228h]
  __int64 v368; // [rsp+12B0h] [rbp+1230h]
  __int64 v369; // [rsp+12B8h] [rbp+1238h]
  __int64 v370; // [rsp+12C0h] [rbp+1240h]
  __int64 v371; // [rsp+12C8h] [rbp+1248h]
  __int64 v372; // [rsp+12D0h] [rbp+1250h]
  __int64 v373; // [rsp+12D8h] [rbp+1258h]
  __int64 v374; // [rsp+12E0h] [rbp+1260h]
  __int64 v375; // [rsp+1300h] [rbp+1280h]
  _BYTE *v376; // [rsp+1308h] [rbp+1288h]
  _BYTE *v377; // [rsp+1310h] [rbp+1290h]
  __int64 v378; // [rsp+1318h] [rbp+1298h]
  __int64 v379; // [rsp+1320h] [rbp+12A0h]
  __int64 v380; // [rsp+1328h] [rbp+12A8h]
  __int64 v381; // [rsp+1330h] [rbp+12B0h]
  __int64 v382; // [rsp+1338h] [rbp+12B8h]
  __int64 v383; // [rsp+1340h] [rbp+12C0h]
  _BYTE *v384; // [rsp+1348h] [rbp+12C8h]
  _BYTE *v385; // [rsp+1350h] [rbp+12D0h]
  __int64 v386; // [rsp+1358h] [rbp+12D8h]
  __int64 v387; // [rsp+1360h] [rbp+12E0h]
  __int64 v388; // [rsp+1368h] [rbp+12E8h]
  __int64 v389; // [rsp+1370h] [rbp+12F0h]
  __int64 v390; // [rsp+1378h] [rbp+12F8h]
  _BYTE *v391; // [rsp+1380h] [rbp+1300h]
  _BYTE *v392; // [rsp+1388h] [rbp+1308h]
  volatile signed __int64 **v393; // [rsp+1390h] [rbp+1310h]
  __int64 v394; // [rsp+1398h] [rbp+1318h]
  PVOID v395; // [rsp+13A0h] [rbp+1320h]
  _BYTE *v396; // [rsp+13A8h] [rbp+1328h]
  __int64 v397; // [rsp+13B0h] [rbp+1330h]
  PVOID v398; // [rsp+13B8h] [rbp+1338h]
  _BYTE *v399; // [rsp+13C0h] [rbp+1340h]
  __int64 *v400; // [rsp+13C8h] [rbp+1348h]
  __m256i v401; // [rsp+13D0h] [rbp+1350h] BYREF
  __int128 v402; // [rsp+13F0h] [rbp+1370h]
  __m256i v403; // [rsp+1400h] [rbp+1380h]
  __int128 v404; // [rsp+1420h] [rbp+13A0h]
  __int64 v405; // [rsp+1430h] [rbp+13B0h]
  __int64 v406; // [rsp+1438h] [rbp+13B8h]
  __int64 v407; // [rsp+1440h] [rbp+13C0h]
  __int64 v408; // [rsp+1448h] [rbp+13C8h]
  __int64 v409; // [rsp+1450h] [rbp+13D0h]
  __int64 v410; // [rsp+1458h] [rbp+13D8h]
  __int64 v411; // [rsp+1460h] [rbp+13E0h]
  __int64 v412; // [rsp+1468h] [rbp+13E8h]
  __int64 v413; // [rsp+1470h] [rbp+13F0h]
  _BYTE *v414; // [rsp+1478h] [rbp+13F8h]
  __int64 v415; // [rsp+1480h] [rbp+1400h]
  __int64 v416; // [rsp+1488h] [rbp+1408h]
  __int64 v417; // [rsp+1490h] [rbp+1410h]
  __int64 v418; // [rsp+1498h] [rbp+1418h]
  __int64 v419; // [rsp+14A0h] [rbp+1420h]
  PVOID v420; // [rsp+14A8h] [rbp+1428h]
  _BYTE *v421; // [rsp+14B0h] [rbp+1430h]
  __int64 v422; // [rsp+14B8h] [rbp+1438h]
  PVOID v423; // [rsp+14C0h] [rbp+1440h]
  _BYTE *v424; // [rsp+14C8h] [rbp+1448h]
  volatile signed __int64 **v425; // [rsp+14D0h] [rbp+1450h]
  _BYTE *v426; // [rsp+14D8h] [rbp+1458h]
  volatile signed __int64 ***v427; // [rsp+14E0h] [rbp+1460h]
  _BYTE *v428; // [rsp+14E8h] [rbp+1468h]
  __int64 v429; // [rsp+14F0h] [rbp+1470h]
  PVOID v430; // [rsp+14F8h] [rbp+1478h]
  _BYTE *v431; // [rsp+1500h] [rbp+1480h]
  _QWORD *v432; // [rsp+1508h] [rbp+1488h]
  char *v433; // [rsp+1510h] [rbp+1490h]
  __int64 v434; // [rsp+1518h] [rbp+1498h]
  _BYTE *v435; // [rsp+1520h] [rbp+14A0h]
  _BYTE *v436; // [rsp+1528h] [rbp+14A8h]
  volatile signed __int64 **v437; // [rsp+1530h] [rbp+14B0h]
  __int64 v438; // [rsp+1538h] [rbp+14B8h]
  PVOID v439; // [rsp+1540h] [rbp+14C0h]
  _BYTE *v440; // [rsp+1548h] [rbp+14C8h]
  __int64 v441; // [rsp+1550h] [rbp+14D0h]
  PVOID v442; // [rsp+1558h] [rbp+14D8h]
  _BYTE *v443; // [rsp+1560h] [rbp+14E0h]
  _BYTE *v444; // [rsp+1568h] [rbp+14E8h]
  void (__fastcall **v445)(_QWORD); // [rsp+1570h] [rbp+14F0h]
  PVOID v446; // [rsp+1578h] [rbp+14F8h]
  _BYTE *v447; // [rsp+1580h] [rbp+1500h]
  _DWORD v448[2]; // [rsp+1588h] [rbp+1508h]
  _DWORD v449[2]; // [rsp+1590h] [rbp+1510h]
  _DWORD v450[2]; // [rsp+1598h] [rbp+1518h]
  PVOID v451; // [rsp+15A0h] [rbp+1520h]
  _BYTE *v452; // [rsp+15A8h] [rbp+1528h]
  __int64 v453; // [rsp+15B0h] [rbp+1530h]
  PVOID v454; // [rsp+15B8h] [rbp+1538h]
  _BYTE *v455; // [rsp+15C0h] [rbp+1540h]
  PVOID v456; // [rsp+15C8h] [rbp+1548h]
  _BYTE *v457; // [rsp+15D0h] [rbp+1550h]
  volatile signed __int64 **v458; // [rsp+15D8h] [rbp+1558h]
  _QWORD *v459; // [rsp+15E0h] [rbp+1560h]
  __int64 v460; // [rsp+15E8h] [rbp+1568h]
  _BYTE v461[7]; // [rsp+15F0h] [rbp+1570h]
  char *v462; // [rsp+15F8h] [rbp+1578h]
  char v463; // [rsp+1605h] [rbp+1585h]
  char v464; // [rsp+1606h] [rbp+1586h]
  char v465; // [rsp+1607h] [rbp+1587h]
  _BYTE *v466; // [rsp+1608h] [rbp+1588h]
  char v467; // [rsp+1615h] [rbp+1595h]
  char v468; // [rsp+1616h] [rbp+1596h]
  char v469; // [rsp+1617h] [rbp+1597h]
  _BYTE *v470; // [rsp+1618h] [rbp+1598h]
  __int64 v471; // [rsp+1620h] [rbp+15A0h]
  char v472; // [rsp+162Fh] [rbp+15AFh] BYREF
  PVOID Address; // [rsp+1630h] [rbp+15B0h]
  _BYTE *v474; // [rsp+1638h] [rbp+15B8h]
  __int64 v475; // [rsp+1640h] [rbp+15C0h]
  __int64 v476; // [rsp+1648h] [rbp+15C8h]

  v476 = -2;
  v453 = a3;
  v5 = a2;
  v400 = a1;
  v6 = *(unsigned __int8 *)(a2 + 240);
  v475 = a2;
  switch ( v6 )
  {
    case 0LL:
      *(_WORD *)(a2 + 241) = 0;
      *(_OWORD *)(a2 + 80) = *(_OWORD *)(a2 + 64);
      v7 = *(_OWORD *)(a2 + 16);
      v8 = *(_OWORD *)(a2 + 32);
      v9 = *(_OWORD *)(a2 + 48);
      *(_OWORD *)(a2 + 96) = *(_OWORD *)a2;
      *(_OWORD *)(a2 + 112) = v7;
      *(_OWORD *)(a2 + 128) = v8;
      *(_OWORD *)(a2 + 144) = v9;
      sub_14073A590(v307, (_QWORD *)(a2 + 96));
      if ( *(_DWORD *)v307 != -1 )
      {
        *(_OWORD *)&v332[48] = v309;
        *(__m256i *)&v332[16] = v308;
        *(_OWORD *)v332 = *(_OWORD *)&v307[32];
        v331 = *(__m256i *)v307;
        *(_QWORD *)&v299 = 0;
        *((_QWORD *)&v299 + 1) = 1;
        v300 = 0;
        *(_QWORD *)&v352[16] = 1610612768;
        *(_QWORD *)v352 = &v299;
        *(_QWORD *)&v352[8] = &off_1417C41C0;
        if ( (unsigned __int8)sub_140B036A0(&v331, v352) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v472,
            (unsigned int)&unk_1417BC180,
            (__int64)&off_1417C4278);
        v13 = *((_BYTE **)&v299 + 1);
        v12 = v299;
        LOBYTE(v14) = v300;
        LODWORD(v247[0]) = *(_DWORD *)((char *)&v300 + 1);
        *(_DWORD *)((char *)v247 + 3) = HIDWORD(v300);
        sub_140BF2F60(v307);
        if ( v12 != -1 )
        {
          v15 = v247[0];
          v16 = *(_DWORD *)((char *)v247 + 3);
LABEL_19:
          *(_DWORD *)&v461[3] = v16;
          *(_DWORD *)v461 = v15;
          goto LABEL_83;
        }
      }
      v13 = *(_BYTE **)(v475 + 88);
      LOBYTE(v11) = 1;
      if ( _InterlockedCompareExchange8(v13, 1, 0) )
        sub_1416C15B0(v13);
      v27 = off_141EC90B8;
      if ( 2 * *off_141EC90B8 )
      {
        v214 = sub_1416C2250(v11, v10);
        LOBYTE(v214) = v214 ^ 1;
        LODWORD(v474) = v214;
        if ( !v13[1] )
          goto LABEL_27;
      }
      else
      {
        LODWORD(v474) = 0;
        if ( !v13[1] )
          goto LABEL_27;
      }
      Address = v13;
      *(_QWORD *)v307 = 0;
      *(_QWORD *)&v307[8] = 1;
      *(_QWORD *)&v307[16] = 0;
      v331.m256i_i64[2] = 1610612768;
      v331.m256i_i64[0] = (__int64)v307;
      v331.m256i_i64[1] = (__int64)&off_1417C41C0;
      if ( (unsigned __int8)sub_1414ACAB0(aPoisonedLockAn, 41, &v331) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_11,
          55,
          (unsigned int)&v472,
          (unsigned int)&unk_1417BC180,
          (__int64)&off_1417C4278);
      v13 = *(_BYTE **)&v307[8];
      v12 = *(_QWORD *)v307;
      v14 = v307[16];
      *(_DWORD *)v352 = *(_DWORD *)&v307[17];
      *(_DWORD *)&v352[3] = *(_DWORD *)&v307[20];
      if ( !(_BYTE)v474 && 2 * *v27 && !(unsigned __int8)sub_1416C2250(v29, v28) )
        *((_BYTE *)Address + 1) = 1;
      v30 = Address;
      v31 = *(_BYTE *)Address;
      *(_BYTE *)Address = 0;
      if ( v31 == 2 )
        WakeByAddressSingle(v30);
      *(_DWORD *)((char *)&v299 + 3) = *(_DWORD *)&v352[3];
      LODWORD(v299) = *(_DWORD *)v352;
      if ( v12 != -1 )
      {
        v15 = v299;
        v16 = *(_DWORD *)((char *)&v299 + 3);
        goto LABEL_19;
      }
      LODWORD(v474) = v14;
LABEL_27:
      Address = v13;
      sub_1403920D0(v307, v13 + 8);
      if ( *(_DWORD *)v307 != -1 )
      {
        *(_OWORD *)&v332[48] = v309;
        *(__m256i *)&v332[16] = v308;
        *(_OWORD *)v332 = *(_OWORD *)&v307[32];
        v331 = *(__m256i *)v307;
        *(_QWORD *)&v299 = 0;
        *((_QWORD *)&v299 + 1) = 1;
        v300 = 0;
        *(_QWORD *)&v352[16] = 1610612768;
        *(_QWORD *)v352 = &v299;
        *(_QWORD *)&v352[8] = &off_1417C41C0;
        if ( (unsigned __int8)sub_140B036A0(&v331, v352) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v472,
            (unsigned int)&unk_1417BC180,
            (__int64)&off_1417C4278);
        v13 = *((_BYTE **)&v299 + 1);
        v12 = v299;
        LOBYTE(v14) = v300;
        LODWORD(v247[0]) = *(_DWORD *)((char *)&v300 + 1);
        *(_DWORD *)((char *)v247 + 3) = HIDWORD(v300);
        sub_140BF2F60(v307);
        v450[0] = v247[0];
        *(_DWORD *)((char *)v450 + 3) = *(_DWORD *)((char *)v247 + 3);
        *(_DWORD *)v461 = v450[0];
        *(_DWORD *)&v461[3] = *(_DWORD *)((char *)v247 + 3);
        if ( ((unsigned __int8)v474 & 1) == 0
          && 2 * *v27
          && !(unsigned __int8)sub_1416C2250(*(unsigned int *)((char *)v247 + 3), v36) )
        {
          *((_BYTE *)Address + 1) = 1;
        }
        v37 = Address;
        v38 = *(_BYTE *)Address;
        *(_BYTE *)Address = 0;
        if ( v38 == 2 )
          WakeByAddressSingle(v37);
        goto LABEL_83;
      }
      v471 = *(_QWORD *)&v307[8];
      v470 = *(_BYTE **)&v307[16];
      v39 = v307[24];
      LODWORD(v247[0]) = *(_DWORD *)&v307[25];
      *(_DWORD *)((char *)v247 + 3) = *(_DWORD *)&v307[28];
      v450[0] = v247[0];
      *(_DWORD *)((char *)v450 + 3) = *(_DWORD *)&v307[28];
      sub_1403A94E0(v307, v13 + 8);
      if ( *(_DWORD *)v307 != -1 )
      {
        *(_OWORD *)&v332[48] = v309;
        *(__m256i *)&v332[16] = v308;
        *(_OWORD *)v332 = *(_OWORD *)&v307[32];
        v331 = *(__m256i *)v307;
        *(_QWORD *)&v299 = 0;
        *((_QWORD *)&v299 + 1) = 1;
        v300 = 0;
        *(_QWORD *)&v352[16] = 1610612768;
        *(_QWORD *)v352 = &v299;
        *(_QWORD *)&v352[8] = &off_1417C41C0;
        if ( (unsigned __int8)sub_140B036A0(&v331, v352) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v472,
            (unsigned int)&unk_1417BC180,
            (__int64)&off_1417C4278);
        v13 = *((_BYTE **)&v299 + 1);
        v12 = v299;
        LOBYTE(v14) = v300;
        LODWORD(v247[0]) = *(_DWORD *)((char *)&v300 + 1);
        *(_DWORD *)((char *)v247 + 3) = HIDWORD(v300);
        sub_140BF2F60(v307);
        v449[0] = v247[0];
        *(_DWORD *)((char *)v449 + 3) = *(_DWORD *)((char *)v247 + 3);
        v40 = *(unsigned int *)((char *)v247 + 3);
        *(_DWORD *)v461 = v449[0];
        *(_DWORD *)&v461[3] = *(_DWORD *)((char *)v247 + 3);
        v41 = v471;
        if ( v471 )
          sub_140001660(v470, v471, 1);
        v42 = (char *)Address;
        if ( ((unsigned __int8)v474 & 1) == 0 && 2 * *v27 && !(unsigned __int8)sub_1416C2250(v40, v41) )
          v42[1] = 1;
        v43 = *v42;
        *v42 = 0;
        if ( v43 == 2 )
          WakeByAddressSingle(v42);
        goto LABEL_83;
      }
      v66 = *(_QWORD *)&v307[8];
      v67 = *(_QWORD *)&v307[16];
      v68 = v307[24];
      LODWORD(v247[0]) = *(_DWORD *)&v307[25];
      *(_DWORD *)((char *)v247 + 3) = *(_DWORD *)&v307[28];
      v449[0] = v247[0];
      *(_DWORD *)((char *)v449 + 3) = *(_DWORD *)&v307[28];
      sub_14000E270(Address, (unsigned int)v474);
      v69 = v475;
      *(_QWORD *)(v475 + 160) = v471;
      *(_QWORD *)(v69 + 168) = v470;
      *(_BYTE *)(v69 + 176) = v39;
      v70 = *(_DWORD *)((char *)v450 + 3);
      *(_DWORD *)(v69 + 177) = v450[0];
      *(_DWORD *)(v69 + 180) = v70;
      *(_QWORD *)(v69 + 184) = v66;
      *(_QWORD *)(v69 + 192) = v67;
      *(_BYTE *)(v69 + 200) = v68;
      v71 = *(_DWORD *)((char *)v449 + 3);
      *(_DWORD *)(v69 + 201) = v449[0];
      *(_DWORD *)(v69 + 204) = v71;
      sub_140710A10(v69 + 208);
      sub_1414734D0(&v292, *(_QWORD *)(v475 + 216), *(_QWORD *)(v475 + 224));
      v72 = v475;
      *(_BYTE *)(v475 + 242) = 1;
      sub_140D3E970(v223, *(_QWORD *)(v72 + 80));
      *(_BYTE *)(v72 + 241) = 1;
      *(_QWORD *)v307 = v72 + 136;
      *(_QWORD *)&v307[8] = sub_1400015F0;
      sub_1406610A0(&v331, &unk_1417BAC17, v307);
      *(_OWORD *)v307 = *(_OWORD *)v331.m256i_i8;
      *(_QWORD *)&v307[16] = v331.m256i_i64[2];
      sub_1403565C0((unsigned int)aDebugReport, 12, (unsigned int)aUploadStarted, 14, (__int64)v307);
      *(_WORD *)(v475 + 241) = 0;
      v331 = v292;
      *(_OWORD *)v332 = v223[0];
      *(_OWORD *)&v332[16] = v223[1];
      *(_OWORD *)&v332[32] = v223[2];
      *(_OWORD *)&v332[48] = v223[3];
      v73 = sub_1405EA0A0(&v331);
      v5 = v475;
      *(_QWORD *)(v475 + 248) = v73;
LABEL_63:
      Address = (PVOID)(v5 + 248);
      sub_140B00D40(&v331, v5 + 248, v453);
      v74 = v331.m256i_i64[0];
      if ( v331.m256i_i64[0] == -3 )
      {
        *v400 = -2;
        result = 3;
        v5 = v475;
        goto LABEL_149;
      }
      if ( v331.m256i_i64[0] == -2 )
      {
        v75 = v331.m256i_i8[16];
        *(_DWORD *)v352 = *(__int32 *)((char *)&v331.m256i_i32[4] + 1);
        *(_DWORD *)&v352[3] = v331.m256i_i32[5];
        v76 = v331.m256i_i64[3];
        v77 = __PAIR128__(v331.m256i_u64[1], 0x800000000000000CuLL);
      }
      else
      {
        v77 = *(_OWORD *)&v331.m256i_u64[1];
        v75 = v331.m256i_i8[24];
        *(_DWORD *)v352 = *(__int32 *)((char *)&v331.m256i_i32[6] + 1);
        *(_DWORD *)&v352[3] = v331.m256i_i32[7];
        v76 = *(_QWORD *)v332;
        *(_OWORD *)v307 = *(_OWORD *)&v332[8];
        *(_OWORD *)&v307[16] = *(_OWORD *)&v332[24];
        *(_OWORD *)&v307[32] = *(_OWORD *)&v332[40];
        *(_OWORD *)v308.m256i_i8 = *(_OWORD *)&v332[56];
        v308.m256i_i64[2] = *(_QWORD *)&v332[72];
      }
      v448[0] = *(_DWORD *)v352;
      *(_DWORD *)((char *)v448 + 3) = *(_DWORD *)&v352[3];
      v294 = *(_OWORD *)v307;
      v295 = *(_OWORD *)&v307[16];
      v296 = *(_OWORD *)&v307[32];
      v297 = *(_OWORD *)v308.m256i_i8;
      v298 = v308.m256i_i64[2];
      v79 = *(_QWORD *)Address;
      if ( (unsigned __int8)sub_1412F2A80(*(_QWORD *)Address) )
        sub_1412E7580(v79);
      if ( v74 == -1 )
      {
        *(_OWORD *)v331.m256i_i8 = v77;
        v331.m256i_i8[16] = v75;
        *(__int32 *)((char *)&v331.m256i_i32[4] + 1) = v448[0];
        v331.m256i_i32[5] = *(_DWORD *)((char *)v448 + 3);
        v331.m256i_i64[3] = v76;
        *(_OWORD *)v332 = v294;
        *(_OWORD *)&v332[16] = v295;
        *(_OWORD *)&v332[32] = v296;
        *(_OWORD *)&v332[48] = v297;
        *(_QWORD *)v352 = 0;
        *(_QWORD *)&v352[8] = 1;
        *(_QWORD *)&v352[16] = 0;
        *(_QWORD *)&v307[16] = 1610612768;
        *(_QWORD *)v307 = v352;
        *(_QWORD *)&v307[8] = &off_1417C41C0;
        if ( (unsigned __int8)sub_140B036A0(&v331, v307) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_11,
            55,
            (unsigned int)&v472,
            (unsigned int)&unk_1417BC180,
            (__int64)&off_1417C4278);
        v13 = *(_BYTE **)&v352[8];
        v12 = *(_QWORD *)v352;
        LOBYTE(v14) = v352[16];
        LODWORD(v299) = *(_DWORD *)&v352[17];
        *(_DWORD *)((char *)&v299 + 3) = *(_DWORD *)&v352[20];
        sub_140BF2F60(&v331);
        *(_DWORD *)v461 = v299;
        *(_DWORD *)&v461[3] = *(_DWORD *)((char *)&v299 + 3);
        goto LABEL_75;
      }
      if ( v74 == -2 )
      {
        *(_OWORD *)v331.m256i_i8 = v77;
        v331.m256i_i8[16] = v75;
        *(__int32 *)((char *)&v331.m256i_i32[4] + 1) = v448[0];
        v331.m256i_i32[5] = *(_DWORD *)((char *)v448 + 3);
        v331.m256i_i64[3] = v76;
        *(_OWORD *)v332 = v294;
        *(_QWORD *)v352 = &v331;
        *(_QWORD *)&v352[8] = sub_141230630;
        sub_14149C0F0(v307, &unk_1417B9F32, v352);
        sub_140BF0F60(&v331);
        v13 = *(_BYTE **)&v307[8];
        v12 = *(_QWORD *)v307;
        LOBYTE(v14) = v307[16];
        *(_DWORD *)v461 = *(_DWORD *)&v307[17];
        *(_DWORD *)&v461[3] = *(_DWORD *)&v307[20];
LABEL_75:
        v80 = v475;
        *(_BYTE *)(v475 + 241) = 0;
        *(_BYTE *)(v80 + 242) = 0;
        v81 = sub_141485EF0(*(_QWORD *)(v80 + 216), *(_QWORD *)(v80 + 224));
        if ( v81 )
          sub_1401DD260(v81);
        v82 = (_QWORD *)v475;
        v83 = *(_QWORD *)(v475 + 208);
        if ( v83 )
          sub_140001660(*(_QWORD *)(v475 + 216), v83, 1);
        v84 = v82[23];
        if ( v84 )
          sub_140001660(v82[24], v84, 1);
        v85 = v82[20];
        if ( v85 )
          sub_140001660(v82[21], v85, 1);
LABEL_83:
        v5 = v475;
        v86 = *(_QWORD *)(v475 + 112);
        if ( v86 )
          sub_140001660(*(_QWORD *)(v475 + 120), v86, 1);
        v87 = *(_QWORD *)(v5 + 136);
        v88 = -1;
        if ( !v87 )
          goto LABEL_87;
        goto LABEL_86;
      }
      v94 = v475;
      v21 = v475 + 1088;
      *(_QWORD *)(v475 + 1088) = v74;
      *(_OWORD *)(v94 + 1096) = v77;
      v5 = v94;
      *(_BYTE *)(v94 + 1112) = v75;
      v95 = *(_DWORD *)((char *)v448 + 3);
      *(_DWORD *)(v94 + 1113) = v448[0];
      *(_DWORD *)(v94 + 1116) = v95;
      *(_QWORD *)(v94 + 1120) = v76;
      v96 = v295;
      v97 = v296;
      v98 = v297;
      *(_OWORD *)(v94 + 1128) = v294;
      *(_OWORD *)(v94 + 1144) = v96;
      *(_OWORD *)(v94 + 1160) = v97;
      *(_OWORD *)(v94 + 1176) = v98;
      *(_QWORD *)(v94 + 1192) = v298;
      v19 = *(_QWORD *)(v94 + 216);
      v20 = *(_QWORD *)(v94 + 224);
      v22 = *(_QWORD *)(v94 + 168);
      v23 = *(_QWORD *)(v5 + 176);
      v24 = *(_QWORD *)(v5 + 192);
      v25 = *(_QWORD *)(v5 + 200);
      v26 = (_QWORD *)(v5 + 96);
      *(_QWORD *)(v5 + 280) = v19;
      *(_QWORD *)(v5 + 288) = v20;
      *(_QWORD *)(v5 + 296) = v22;
      *(_QWORD *)(v5 + 304) = v23;
      *(_QWORD *)(v5 + 312) = v24;
      *(_QWORD *)(v5 + 320) = v25;
      *(_QWORD *)(v5 + 352) = v21;
      *(_QWORD *)(v5 + 360) = v5 + 96;
      v17 = (_BYTE *)(v5 + 371);
      *(_BYTE *)(v5 + 371) = 0;
      v18 = Address;
LABEL_89:
      *(_BYTE *)(v5 + 370) = 0;
      *(_WORD *)(v5 + 368) = 0;
      *(_QWORD *)(v5 + 328) = v21;
      *(_QWORD *)(v5 + 248) = v22;
      *(_QWORD *)(v5 + 256) = v23;
      *(_QWORD *)(v5 + 264) = v24;
      *(_QWORD *)(v5 + 272) = v25;
      *(_QWORD *)(v5 + 336) = v26;
      v349 = v17;
      v348 = v18;
      sub_14073A590(&v331, v26);
      v64 = v331.m256i_i64[0];
      if ( v331.m256i_i64[0] != -1 )
      {
        v44 = v331.m256i_i64[1];
        v351 = *(_OWORD *)&v331.m256i_u64[2];
        v4 = *(_BYTE **)v332;
        v328 = *(__m256i *)&v332[8];
        v329 = *(_OWORD *)&v332[40];
        v330 = *(_QWORD *)&v332[56];
        goto LABEL_222;
      }
      v5 = v475;
      *(_QWORD *)(v475 + 392) = v19;
      *(_QWORD *)(v5 + 400) = v20;
      v462 = (char *)(v5 + 523);
      *(_BYTE *)(v5 + 523) = 0;
      v35 = v5 + 376;
LABEL_92:
      *(_WORD *)(v5 + 520) = 0;
      *(_BYTE *)(v5 + 522) = 0;
      *(_QWORD *)(v5 + 376) = v19;
      *(_QWORD *)(v5 + 384) = v20;
      v443 = v17;
      v442 = v18;
      v441 = v35;
      v99 = sub_1414742C0(v19, v20);
      v474 = v17;
      if ( v99 )
      {
        v443 = v17;
        v442 = v18;
        v441 = v35;
        sub_14149B760(v307, v99, v100);
        v471 = v35;
        v101 = *(_QWORD *)&v307[8];
        v102 = *(_QWORD *)v307;
        v103 = *(_QWORD *)&v307[16];
        Address = v18;
        if ( *(_QWORD *)v307 == -1 )
        {
          sub_140388B60((unsigned int)&v331, *(_DWORD *)&v307[16], 0, 1, 1);
          v102 = v331.m256i_i64[1];
          v105 = v475;
          if ( v331.m256i_i32[0] == 1 )
          {
            v443 = v474;
            v442 = Address;
            v441 = v471;
            sub_1416C2D4B(v331.m256i_i64[1], v331.m256i_i64[2]);
          }
          v104 = v331.m256i_i64[2];
          if ( v103 )
            sub_141684120(v331.m256i_i64[2], v101, v103);
          else
            v103 = 0;
        }
        else
        {
          v104 = *(_QWORD *)&v307[8];
          v105 = v475;
        }
        *(_QWORD *)(v105 + 408) = v102;
        *(_QWORD *)(v105 + 416) = v104;
        *(_QWORD *)(v105 + 424) = v103;
        v18 = Address;
        v17 = v474;
        v35 = v471;
      }
      else
      {
        v105 = v475;
        *(_QWORD *)(v475 + 408) = -1;
      }
      *(_BYTE *)(v105 + 522) = 1;
      v399 = v17;
      v398 = v18;
      v397 = v35;
      v114 = sub_141474250(v19, v20);
      if ( v114 )
      {
        v399 = v17;
        v398 = v18;
        v397 = v35;
        sub_1414A3C90(&v331, v114, v115);
        if ( v331.m256i_i8[0] )
          v116 = 0;
        else
          v116 = v331.m256i_i64[1];
        v115 = v331.m256i_i64[2];
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
      v421 = v17;
      v420 = v18;
      v419 = v35;
      *(_QWORD *)&v118 = sub_1411C8ED0(v117, v115);
      *(_OWORD *)v331.m256i_i8 = v118;
      v421 = v17;
      v420 = v18;
      v419 = v35;
      sub_1411C8EE0(v475 + 432, &v331);
      v5 = v475;
      *(_BYTE *)(v475 + 521) = 1;
      v56 = (volatile signed __int64 **)(v5 + 528);
      *(_QWORD *)(v5 + 528) = v19;
      *(_QWORD *)(v5 + 536) = v20;
      v444 = (_BYTE *)(v5 + 749);
      *(_BYTE *)(v5 + 749) = 0;
      v471 = v35;
      v110 = (__int128 *)(v5 + 712);
      *(_DWORD *)(v5 + 712) = 0;
      *(_QWORD *)(v5 + 720) = 0;
      *(_DWORD *)(v5 + 728) = 7;
      *(_QWORD *)(v5 + 732) = 0;
      *(_QWORD *)(v5 + 737) = 0;
      *(_BYTE *)(v5 + 736) = 1;
      *(_BYTE *)(v5 + 748) = 0;
      v466 = (_BYTE *)(v5 + 544);
      *(_QWORD *)(v5 + 544) = v5 + 712;
      *(_QWORD *)(v5 + 552) = v19;
      *(_QWORD *)(v5 + 560) = v20;
      v470 = (_BYTE *)(v5 + 704);
      *(_BYTE *)(v5 + 704) = 0;
LABEL_122:
      *(_QWORD *)(v5 + 584) = v19;
      *(_QWORD *)(v5 + 592) = v20;
      *(_QWORD *)(v5 + 688) = v110;
      v445 = (void (__fastcall **)(_QWORD))(v5 + 697);
      *(_BYTE *)(v5 + 697) = 0;
LABEL_123:
      *(_BYTE *)(v5 + 696) = 0;
      *(_QWORD *)(v5 + 568) = v19;
      *(_QWORD *)(v5 + 576) = v20;
      v396 = v474;
      v395 = v18;
      v394 = v471;
      v393 = v56;
      v392 = v470;
      v391 = v466;
      v119 = v5 + 568;
      v390 = v5 + 568;
      sub_1414734D0(v323, v19, v20);
      v120 = v475;
      *(_BYTE *)(v475 + 696) = 1;
      v121 = *((_BYTE *)v110 + 32);
      v122 = (__int128 *)(v120 + 600);
      v123 = *v110;
      v124 = v110[1];
      *(_BYTE *)(v120 + 696) = 0;
      v125 = v323[0];
      *(_OWORD *)(v120 + 616) = v323[1];
      *(_OWORD *)(v120 + 600) = v125;
      *(_OWORD *)(v120 + 632) = v123;
      *(_OWORD *)(v120 + 648) = v124;
      *(_BYTE *)(v120 + 664) = v121;
      v126 = (char *)(v120 + 680);
      *(_BYTE *)(v120 + 680) = 0;
      v17 = v474;
      v34 = v462;
LABEL_124:
      *(_QWORD *)&v332[32] = *((_QWORD *)v122 + 8);
      v127 = *v122;
      v128 = v122[1];
      v129 = v122[2];
      *(_OWORD *)&v332[16] = v122[3];
      *(_OWORD *)v332 = v129;
      *(_OWORD *)&v331.m256i_u64[2] = v128;
      *(_OWORD *)v331.m256i_i8 = v127;
      v440 = v17;
      v439 = v18;
      v438 = v471;
      v437 = v56;
      v436 = v470;
      v435 = v466;
      v434 = v119;
      v462 = v126;
      v433 = v126;
      v459 = v122;
      v432 = v122;
      v130 = sub_1408C2FF0(&v331, &off_1417B7D58);
      v460 = v119;
      v458 = v56;
      v474 = v17;
      Address = v18;
      v5 = v475;
      *(_QWORD *)(v475 + 672) = v130;
LABEL_125:
      v350 = (__int64 *)(v5 + 672);
      sub_140B007F0(&v338, v5 + 672, v453);
      if ( v338.m256i_i8[0] )
      {
        *v462 = 3;
        *(_BYTE *)v445 = 3;
        *v470 = 3;
        *v444 = 3;
        v131 = 3;
LABEL_146:
        *v34 = v131;
        v5 = v475;
LABEL_147:
        v53 = v474;
        v33 = 3;
        goto LABEL_148;
      }
      v340 = (void (__fastcall **)(_QWORD))v338.m256i_i64[3];
      v339 = *(_OWORD *)&v338.m256i_u64[1];
      v132 = *v350;
      v17 = v474;
      v440 = v474;
      v18 = Address;
      v439 = Address;
      v438 = v471;
      v59 = v458;
      v437 = v458;
      v436 = v470;
      v435 = v466;
      v133 = v460;
      v434 = v460;
      v433 = v462;
      v432 = v459;
      if ( (unsigned __int8)sub_1412F2A80(v132) )
      {
        v440 = v17;
        v439 = v18;
        v438 = v471;
        v437 = v59;
        v436 = v470;
        v435 = v466;
        v434 = v133;
        v433 = v462;
        v432 = v459;
        sub_1412E7580(v132);
      }
      if ( (_QWORD)v339 )
      {
        LOBYTE(v134) = 40;
        v4 = (_BYTE *)sub_14146B840(v134, aBackgroundTask, 22);
        v444 = *((_BYTE **)&v339 + 1);
        if ( *((_QWORD *)&v339 + 1) )
        {
          v445 = v340;
          if ( *v340 )
            (*v340)(v444);
          v135 = v445[1];
          if ( v135 )
            sub_140001660(v444, v135, v445[2]);
        }
        *v462 = 1;
        v136 = 0;
        v18 = Address;
        v17 = v474;
        v35 = v471;
        v59 = v458;
      }
      else
      {
        v4 = v340;
        v137 = BYTE8(v339) == 0;
        *v462 = 1;
        if ( v137 )
        {
          v347 = v17;
          v346 = v18;
          v35 = v471;
          v345 = v471;
          v344 = v59;
          v343 = v470;
          v342 = v466;
          v341 = v133;
          sub_1412F8D70(&v331, v4);
          v4 = (_BYTE *)v331.m256i_i64[1];
          v136 = v331.m256i_i64[0];
          *(_OWORD *)v307 = *(_OWORD *)&v331.m256i_u64[2];
          *(_OWORD *)&v307[16] = *(_OWORD *)v332;
          *(_OWORD *)&v307[32] = *(_OWORD *)&v332[16];
          v308 = *(__m256i *)&v332[32];
          *(_QWORD *)&v309 = *(_QWORD *)&v332[64];
        }
        else
        {
          v136 = 0;
          v35 = v471;
        }
      }
      v5 = v475;
      *(_BYTE *)(v475 + 696) = 0;
      v401 = *(__m256i *)v307;
      v402 = *(_OWORD *)&v307[32];
      v403 = v308;
      *(_QWORD *)&v404 = v309;
      *(_BYTE *)(v5 + 697) = 1;
      *(_BYTE *)(v5 + 704) = 1;
      *(_WORD *)(v5 + 748) = 256;
      v270 = v404;
      v269 = v403;
      v268 = v402;
      v267 = v401;
      if ( v136 )
      {
        *(_QWORD *)&v332[48] = v270;
        *(__m256i *)&v332[16] = v269;
        *(_OWORD *)v332 = v268;
        v331 = v267;
        *(_BYTE *)(v5 + 520) = 1;
        *(_QWORD *)(v5 + 528) = v136;
        *(_QWORD *)(v5 + 536) = v4;
        v138 = *(_OWORD *)&v331.m256i_u64[2];
        v139 = *(_OWORD *)v332;
        v140 = *(_OWORD *)&v332[16];
        *(_OWORD *)(v5 + 544) = *(_OWORD *)v331.m256i_i8;
        *(_OWORD *)(v5 + 560) = v138;
        *(_OWORD *)(v5 + 576) = v139;
        *(_OWORD *)(v5 + 592) = v140;
        *(_OWORD *)(v5 + 608) = *(_OWORD *)&v332[32];
        *(_QWORD *)(v5 + 624) = *(_QWORD *)&v332[48];
        v58 = (volatile signed __int64 ***)(v5 + 632);
        *(_QWORD *)(v5 + 632) = v59;
        v57 = (_BYTE *)(v5 + 664);
        *(_BYTE *)(v5 + 664) = 0;
LABEL_141:
        v113 = *v59;
        if ( _InterlockedIncrement64(*v59) <= 0 )
          BUG();
        v112 = (volatile signed __int64 **)(v5 + 640);
        *(_QWORD *)(v5 + 640) = v113;
        v111 = (_BYTE *)(v5 + 656);
        *(_BYTE *)(v5 + 656) = 0;
LABEL_143:
        v431 = v17;
        v430 = v18;
        v429 = v35;
        v470 = v57;
        v428 = v57;
        v462 = (char *)v58;
        v427 = v58;
        v466 = v111;
        v426 = v111;
        v458 = v112;
        v425 = v112;
        v141 = sub_1408C3460(v113, &off_1417B7D58);
        v471 = v35;
        v474 = v17;
        Address = v18;
        v5 = v475;
        *(_QWORD *)(v475 + 648) = v141;
LABEL_144:
        v459 = (_QWORD *)(v5 + 648);
        sub_140B009A0(&v331, v5 + 648, v453);
        if ( v331.m256i_i32[0] == -2 )
        {
          *v466 = 3;
          *v470 = 3;
          v131 = 4;
          goto LABEL_146;
        }
        *(_QWORD *)&v309 = *(_QWORD *)&v332[48];
        v308 = *(__m256i *)&v332[16];
        *(_OWORD *)&v307[32] = *(_OWORD *)v332;
        *(__m256i *)v307 = v331;
        v142 = *v459;
        v143 = v474;
        v431 = v474;
        v144 = Address;
        v430 = Address;
        v145 = v471;
        v429 = v471;
        v428 = v470;
        v427 = (volatile signed __int64 ***)v462;
        v426 = v466;
        v425 = v458;
        if ( (unsigned __int8)sub_1412F2A80(v142) )
        {
          v431 = v143;
          v430 = v144;
          v429 = v145;
          v428 = v470;
          v427 = (volatile signed __int64 ***)v462;
          v426 = v466;
          v425 = v458;
          sub_1412E7580(v142);
        }
        v147 = *(_QWORD *)v307;
        if ( *(_QWORD *)v307 == -1 )
        {
          LOBYTE(v146) = 40;
          v148 = sub_14146B840(v146, aBackgroundTask, 22);
          v459 = *(_QWORD **)&v307[16];
          if ( *(_QWORD *)&v307[16] )
          {
            v460 = *(_QWORD *)&v307[24];
            if ( **(_QWORD **)&v307[24] )
              (**(void (__fastcall ***)(_QWORD *))&v307[24])(v459);
            v158 = *(_QWORD *)(v460 + 8);
            if ( v158 )
              sub_140001660(v459, v158, *(_QWORD *)(v460 + 16));
          }
          *v466 = 1;
          *v470 = 1;
          v144 = Address;
          v143 = v474;
          v145 = v471;
        }
        else
        {
          v148 = *(_QWORD *)&v307[8];
          v149 = v308.m256i_i64[1];
          *v466 = 1;
          *v470 = 1;
          if ( v147 != 2 )
          {
            v150 = v475;
            *(_BYTE *)(v475 + 520) = 0;
            v405 = *(_QWORD *)(v150 + 624);
            v404 = *(_OWORD *)(v150 + 608);
            *(_OWORD *)&v403.m256i_u64[2] = *(_OWORD *)(v150 + 592);
            v151 = *(_OWORD *)(v150 + 528);
            v152 = *(_OWORD *)(v150 + 544);
            v153 = *(_OWORD *)(v150 + 560);
            *(_OWORD *)v403.m256i_i8 = *(_OWORD *)(v150 + 576);
            v402 = v153;
            *(_OWORD *)&v401.m256i_u64[2] = v152;
            *(_OWORD *)v401.m256i_i8 = v151;
            v424 = v143;
            v423 = v144;
            v422 = v145;
            sub_140684A10(&v331, &v401, v149);
LABEL_171:
            v163 = v475;
            *(_BYTE *)(v475 + 521) = 0;
            *(_QWORD *)&v404 = *(_QWORD *)(v163 + 512);
            *(_OWORD *)&v403.m256i_u64[2] = *(_OWORD *)(v163 + 496);
            v164 = *(_OWORD *)(v163 + 432);
            v165 = *(_OWORD *)(v163 + 448);
            v166 = *(_OWORD *)(v163 + 464);
            *(_OWORD *)v403.m256i_i8 = *(_OWORD *)(v163 + 480);
            v402 = v166;
            *(_OWORD *)&v401.m256i_u64[2] = v165;
            *(_OWORD *)v401.m256i_i8 = v164;
            v424 = v143;
            v423 = v144;
            v422 = v145;
            sub_141042810(v307, &v331, &v401);
            v5 = v475;
            v34 = *(char **)(v475 + 408);
            if ( v34 == (char *)-1LL )
            {
              v4 = *(_BYTE **)&v307[8];
              v157 = *(_QWORD *)v307;
              v470 = *(_BYTE **)&v307[16];
              v323[0] = *(_OWORD *)&v307[24];
              v18 = *(PVOID *)&v307[40];
              v401 = v308;
              v402 = v309;
              v403.m256i_i64[0] = v310;
              v331 = v311;
              *(_OWORD *)v332 = v312;
              *(_OWORD *)&v332[16] = v313;
              *(_OWORD *)&v332[32] = v314;
              *(_OWORD *)&v332[48] = v315;
              v34 = v316;
              v35 = v317;
              v59 = v318;
              v338 = v319;
            }
            else
            {
              *(_BYTE *)(v475 + 522) = 0;
              v35 = *(_QWORD *)(v5 + 416);
              v59 = *(volatile signed __int64 ***)(v5 + 424);
              if ( (unsigned __int64)(v316 - 1) <= 0xFFFFFFFFFFFFFFFCuLL )
                sub_140001660(v317, v316, 1);
              v470 = *(_BYTE **)&v307[16];
              v323[0] = *(_OWORD *)&v307[24];
              v18 = *(PVOID *)&v307[40];
              v401 = v308;
              v402 = v309;
              v403.m256i_i64[0] = v310;
              v331 = v311;
              *(_OWORD *)v332 = v312;
              *(_OWORD *)&v332[16] = v313;
              *(_OWORD *)&v332[32] = v314;
              *(_OWORD *)&v332[48] = v315;
              v338 = v319;
              v4 = *(_BYTE **)&v307[8];
              v157 = *(_QWORD *)v307;
            }
            v224 = v323[0];
            v271 = v401;
            v272 = v402;
            v273 = v403.m256i_i64[0];
            v225 = v331;
            v226 = *(_OWORD *)v332;
            v227 = *(_OWORD *)&v332[16];
            v228 = *(_OWORD *)&v332[32];
            v229 = *(_OWORD *)&v332[48];
            v230 = v338;
            *(_WORD *)(v5 + 520) = 0;
            goto LABEL_177;
          }
        }
        v424 = v143;
        v423 = v144;
        v422 = v145;
        sub_1401DD260(v148);
        v159 = v475;
        *(_BYTE *)(v475 + 520) = 0;
        v405 = *(_QWORD *)(v159 + 624);
        v404 = *(_OWORD *)(v159 + 608);
        *(_OWORD *)&v403.m256i_u64[2] = *(_OWORD *)(v159 + 592);
        v160 = *(_OWORD *)(v159 + 528);
        v161 = *(_OWORD *)(v159 + 544);
        v162 = *(_OWORD *)(v159 + 560);
        *(_OWORD *)v403.m256i_i8 = *(_OWORD *)(v159 + 576);
        v402 = v162;
        *(_OWORD *)&v401.m256i_u64[2] = v161;
        *(_OWORD *)v401.m256i_i8 = v160;
        v424 = v143;
        v423 = v144;
        v422 = v145;
        sub_140684B90(&v331, &v401);
        goto LABEL_171;
      }
      *(_BYTE *)(v5 + 520) = 0;
      if ( *(_BYTE *)(v5 + 480) )
      {
        v154 = *(_QWORD *)(v5 + 488);
        if ( v154 )
          sub_140001660(*(_QWORD *)(v5 + 496), v154, 1);
      }
      v155 = *(_QWORD *)(v5 + 448);
      if ( v155 > 0 )
        sub_140001660(*(_QWORD *)(v5 + 456), 32 * v155, 8);
      *(_BYTE *)(v5 + 521) = 0;
      v156 = *(_QWORD *)(v5 + 408);
      v157 = 2;
      if ( v156 != -1 && v156 )
        sub_140001660(*(_QWORD *)(v5 + 416), v156, 1);
LABEL_177:
      *(_BYTE *)(v5 + 522) = 0;
      v238 = v224;
      v277 = v271;
      v278 = v272;
      v279 = v273;
      v239 = v225;
      v240 = v226;
      v241 = v227;
      v242 = v228;
      v243 = v229;
      v244 = v230;
      *(_BYTE *)(v5 + 523) = 1;
      if ( v157 == -1 )
        goto LABEL_147;
      v231 = v238;
      v274 = v277;
      v275 = v278;
      v276 = v279;
      v232 = v239;
      v233 = v240;
      v234 = v241;
      v235 = v242;
      v236 = v243;
      v237 = v244;
      v455 = v474;
      v454 = Address;
      sub_140BC5430(v471);
      if ( v157 == 2 )
      {
        v401.m256i_i64[0] = (__int64)v4;
        *(_QWORD *)v307 = &v401;
        *(_QWORD *)&v307[8] = sub_141490720;
        sub_14149C0F0(&v331, &unk_1417B9E88, v307);
        v44 = v331.m256i_i64[0];
        v245 = *(_OWORD *)&v331.m256i_u64[1];
        v455 = v474;
        v454 = Address;
        sub_1401DD260(v401.m256i_i64[0]);
        v246 = v245;
        v351 = v245;
        v328 = v280;
        v329 = v281;
        v330 = v282;
LABEL_184:
        v64 = 10;
        *(_BYTE *)(v475 + 370) = 0;
        v18 = Address;
        v17 = v474;
        goto LABEL_222;
      }
      v360 = v236;
      v359 = v235;
      v358 = v234;
      v357 = v233;
      v356 = v232;
      v361 = v34;
      v362 = v35;
      v363 = v59;
      v364 = v237;
      v246 = v231;
      v282 = v276;
      v281 = v275;
      v280 = v274;
      *(_OWORD *)&v352[24] = v231;
      v355 = v276;
      v354 = v275;
      v353 = v274;
      *(_QWORD *)v352 = v157;
      *(_QWORD *)&v352[8] = v4;
      *(_QWORD *)&v352[16] = v470;
      *(_QWORD *)&v352[40] = v18;
      sub_14149C500(&v331, *(_QWORD *)(v475 + 328) + 24LL);
      if ( (unsigned __int64)(v34 - 1) <= 0xFFFFFFFFFFFFFFFCuLL )
        sub_140001660(v35, v34, 1);
      v167 = *(_OWORD *)v331.m256i_i8;
      v168 = v331.m256i_i64[2];
      sub_141684120(&v300, &v352[16], 184);
      v301 = v167;
      v302 = v168;
      v303 = v364;
      *(_QWORD *)&v299 = v157;
      *((_QWORD *)&v299 + 1) = v4;
      v455 = v474;
      v454 = Address;
      sub_141042930(v247, &v299, aApplicationZip, 15);
      v169 = v247[0];
      if ( v247[0] == 2 )
      {
        *(_QWORD *)v352 = v247[1];
        *(_QWORD *)v307 = v352;
        *(_QWORD *)&v307[8] = sub_141031F10;
        sub_14149C0F0(&v331, &unk_1417B9EEE, v307);
        v44 = v331.m256i_i64[0];
        v324 = *(_OWORD *)&v331.m256i_u64[1];
        v455 = v474;
        v454 = Address;
        sub_140528900(*(_QWORD *)v352);
        v252 = v324;
        v283 = v304;
        v284 = v305;
        v285 = v306;
        v351 = v324;
        v330 = v306;
        v329 = v305;
        v328 = v304;
        goto LABEL_184;
      }
      v170 = *(_OWORD *)&v247[1];
      v324 = *(_OWORD *)&v247[3];
      v171 = v247[5];
      v304 = v248;
      v305 = v249;
      v306 = v250;
      sub_141684120(v222, v251, 152);
      v252 = v324;
      v285 = v306;
      v284 = v305;
      v283 = v304;
      v217 = v324;
      v219 = v304;
      v220 = v305;
      v221 = v306;
      *(_BYTE *)(v475 + 370) = 1;
      v215 = v169;
      v216 = v170;
      v218 = v171;
      v457 = v474;
      v456 = Address;
      sub_14104BA50(&v331);
      v172 = *(_QWORD *)(v475 + 336) + 40LL;
      v465 = 1;
      sub_14149C500(v352, v172);
      v465 = 0;
      sub_140686320(
        (__int64)v307,
        (__int128 *)v331.m256i_i8,
        (__int64 (__fastcall **)())aCategory_0,
        (__int64 (__fastcall **)())8,
        (__int64 (__fastcall ***)())v352);
      v173 = *(_QWORD *)(v475 + 336);
      v174 = *(_QWORD *)(v173 + 24);
      v175 = *(_QWORD *)(v173 + 32);
      v469 = 1;
      v176 = sub_14033BC10(v174, v175);
      v469 = 1;
      sub_140403BA0((__int64)v352, v176, v177);
      v469 = 0;
      sub_140686320(
        (__int64)&v331,
        (__int128 *)v307,
        (__int64 (__fastcall **)())aUsernote_0,
        (__int64 (__fastcall **)())8,
        (__int64 (__fastcall ***)())v352);
      v178 = *(_QWORD *)(v475 + 328) + 48LL;
      v464 = 1;
      sub_14149C500(v352, v178);
      v464 = 0;
      sub_140686320(
        (__int64)v307,
        (__int128 *)v331.m256i_i8,
        (__int64 (__fastcall **)())aSummary_5,
        (__int64 (__fastcall **)())7,
        (__int64 (__fastcall ***)())v352);
      v179 = *(_QWORD *)(v475 + 328) + 72LL;
      v463 = 1;
      v4 = v352;
      sub_14149C500(v352, v179);
      v463 = 0;
      sub_140686320(
        (__int64)&v331,
        (__int128 *)v307,
        (__int64 (__fastcall **)())aTargetmode_0,
        (__int64 (__fastcall **)())0xA,
        (__int64 (__fastcall ***)())v352);
      v180 = *(unsigned __int8 *)(*(_QWORD *)(v475 + 328) + 104LL);
      sub_140388B60((unsigned int)v307, v180 ^ 5, 0, 1, 1);
      v181 = *(_QWORD *)&v307[8];
      v471 = *(_QWORD *)v307;
      if ( *(_QWORD *)v307 == 1 )
        sub_1416C2D4B(*(_QWORD *)&v307[8], *(_QWORD *)&v307[16]);
      v182 = aFalsetrue_0;
      if ( (_BYTE)v180 )
        v182 = &aFalsetrue_0[5];
      v183 = *(_QWORD *)&v307[16];
      sub_141684120(*(_QWORD *)&v307[16], v182, v180 ^ 5);
      *(_QWORD *)v352 = v181;
      *(_QWORD *)&v352[8] = v183;
      *(_QWORD *)&v352[16] = v180 ^ 5;
      sub_140686320(
        (__int64)&v325,
        (__int128 *)v331.m256i_i8,
        (__int64 (__fastcall **)())aHasissues_0,
        (__int64 (__fastcall **)())9,
        (__int64 (__fastcall ***)())v352);
      v184 = v475;
      *(_BYTE *)(v475 + 368) = 1;
      v185 = *(_QWORD *)(v184 + 336);
      if ( *(_DWORD *)v185 == 1 )
      {
        v186 = *(_QWORD *)(v185 + 8);
        *(_BYTE *)(v184 + 368) = 0;
        v468 = 1;
        v187 = sub_1414A2960(v186, &v299, 20);
        v189 = v188;
        sub_140388B60((unsigned int)v307, v188, 0, 1, 1);
        v190 = *(_QWORD *)&v307[8];
        if ( *(_DWORD *)v307 == 1 )
        {
          v468 = 1;
          sub_1416C2D4B(*(_QWORD *)&v307[8], *(_QWORD *)&v307[16]);
        }
        v191 = *(_QWORD *)&v307[16];
        if ( v189 )
          sub_141684120(*(_QWORD *)&v307[16], v187, v189);
        *(_QWORD *)v352 = v190;
        *(_QWORD *)&v352[8] = v191;
        *(_QWORD *)&v352[16] = v189;
        v468 = 0;
        sub_140686320(
          (__int64)&v331,
          (__int128 *)v325.m256i_i8,
          (__int64 (__fastcall **)())aFeedbackid_0,
          (__int64 (__fastcall **)())0xA,
          (__int64 (__fastcall ***)())v352);
        v184 = v475;
        *(_BYTE *)(v475 + 368) = 1;
        v327 = *(__m256i *)&v332[16];
        v326 = *(_OWORD *)v332;
        v325 = v331;
      }
      *(_BYTE *)(v184 + 368) = 0;
      *(_BYTE *)(v184 + 370) = 0;
      v17 = v474;
      v447 = v474;
      v18 = Address;
      v446 = Address;
      sub_1406861A0((unsigned int)&v331, (unsigned int)&v325, (unsigned int)aBundle, 6, (__int64)&v215);
      *(_BYTE *)(v475 + 368) = 1;
      v327 = *(__m256i *)&v332[16];
      v326 = *(_OWORD *)v332;
      v325 = v331;
      v447 = v17;
      v446 = v18;
      sub_14104B490(&v331);
      v335 = 15;
      v336 = 0;
      sub_141684120(v307, &v331, 760);
      sub_141684120(v322, v337, 140);
      v320 = 90;
      v321 = 0;
      v447 = v17;
      v446 = v18;
      v192 = sub_141042BD0(v307);
      v44 = v193;
      v64 = 6;
      if ( (v192 & 1) != 0 )
        goto LABEL_219;
      *(_QWORD *)(v475 + 344) = v193;
      v452 = v17;
      v451 = v18;
      sub_1405A48C0((unsigned int)&v331, v193, (unsigned int)&unk_141764700, (unsigned int)&unk_1417BAA79, 51);
      v194 = *(_OWORD *)(v475 + 248);
      v452 = v17;
      v451 = v18;
      sub_1406C6D60(
        (unsigned int)v307,
        (unsigned int)&v331,
        (unsigned int)aXDeviceId,
        11,
        v194,
        *((__int64 *)&v194 + 1));
      v195 = *(_OWORD *)(v475 + 264);
      v452 = v17;
      v451 = v18;
      sub_1406C6D60(
        (unsigned int)&v331,
        (unsigned int)v307,
        (unsigned int)aXDeviceSecret,
        15,
        v195,
        *((__int64 *)&v195 + 1));
      *(_BYTE *)(v475 + 368) = 0;
      v353 = v327;
      *(_OWORD *)&v352[32] = v326;
      *(__m256i *)v352 = v325;
      v452 = v17;
      v451 = v18;
      sub_14103C330(v307, &v331, v352);
      v452 = v17;
      v451 = v18;
      v196 = sub_14103C180(v307);
      v5 = v475;
      *(_QWORD *)(v475 + 376) = v196;
      *(_QWORD *)(v5 + 384) = v197;
LABEL_21:
      sub_14104DCF0(&v331, v5 + 376, v453);
      v32 = v331.m256i_i64[0];
      if ( v331.m256i_i64[0] != -2 )
      {
        v44 = v331.m256i_i64[1];
        v259 = *(_OWORD *)&v331.m256i_u64[2];
        v260 = *(_OWORD *)v332;
        v261 = *(_OWORD *)&v332[16];
        v262 = *(_OWORD *)&v332[32];
        v263 = *(_OWORD *)&v332[48];
        v264 = *(_OWORD *)&v332[64];
        v265 = v333;
        v266 = v334;
        v45 = *(_QWORD *)(v475 + 376);
        v46 = *(_QWORD *)(v475 + 384);
        v17 = v474;
        v452 = v474;
        v18 = Address;
        v451 = Address;
        sub_140BF25D0(v45, v46);
        if ( (_DWORD)v32 == -1 )
        {
          v64 = 6;
          v65 = v475;
          goto LABEL_217;
        }
        v47 = v475;
        v48 = v475 + 384;
        *(_QWORD *)(v475 + 384) = v32;
        v5 = v47;
        *(_QWORD *)(v47 + 392) = v44;
        *(_OWORD *)(v47 + 480) = v264;
        v49 = v260;
        v50 = v261;
        v51 = v262;
        *(_OWORD *)(v47 + 400) = v259;
        *(_OWORD *)(v47 + 416) = v49;
        *(_OWORD *)(v47 + 432) = v50;
        *(_OWORD *)(v47 + 448) = v51;
        *(_OWORD *)(v47 + 464) = v263;
        *(_OWORD *)(v47 + 496) = v265;
        *(_QWORD *)(v47 + 512) = v266;
        *(_WORD *)(v47 + 376) = *(_WORD *)(v47 + 488);
        *(_BYTE *)(v47 + 369) = 0;
        sub_141684120(v47 + 520, v48, 136);
        *(_BYTE *)(v5 + 1080) = 0;
LABEL_43:
        v471 = v5 + 520;
        sub_140CF0F50(&v331, v5 + 520, v453);
        v52 = v331.m256i_i64[0];
        if ( v331.m256i_i64[0] == -2 )
        {
          v33 = 5;
          goto LABEL_45;
        }
        v54 = v331.m256i_i64[2];
        v44 = v331.m256i_i64[1];
        if ( *(_BYTE *)(v475 + 1080) == 3 )
        {
          sub_140BE80E0(v475 + 656);
        }
        else if ( !*(_BYTE *)(v475 + 1080) )
        {
          sub_140BF21C0(v471);
        }
        if ( v52 == -1 )
        {
          v64 = 6;
          v65 = v475;
          v18 = Address;
          v17 = v474;
          goto LABEL_217;
        }
        v453 = v52;
        v60 = (unsigned __int16)(*(_WORD *)(v475 + 376) - 200) < 0x64u;
        v470 = (_BYTE *)v44;
        if ( v60 )
        {
          sub_1408AA6A0(v307, v44, v54);
          v44 = *(_QWORD *)v307;
          if ( *(_QWORD *)v307 != -1 )
          {
            v351 = *(_OWORD *)&v307[8];
            v4 = *(_BYTE **)(*(_QWORD *)(v475 + 328) + 96LL);
            if ( v453 )
              sub_140001660(v470, v453, 1);
            v61 = v475;
            *(_BYTE *)(v475 + 369) = 0;
            v62 = _InterlockedDecrement64(*(volatile signed __int64 **)(v61 + 344));
            v18 = Address;
            v17 = v474;
            if ( !v62 )
            {
              v447 = v474;
              v446 = Address;
              sub_141018B80(v475 + 344);
            }
            v63 = v475;
            *(_BYTE *)(v475 + 368) = 0;
            *(_BYTE *)(v63 + 370) = 0;
            v64 = -1;
            goto LABEL_222;
          }
          v401.m256i_i64[0] = *(_QWORD *)&v307[8];
          *(_QWORD *)v352 = &v401;
          *(_QWORD *)&v352[8] = sub_14142D3F0;
          sub_14149C0F0(&v331, &unk_1417B9EC2, v352);
          v4 = (_BYTE *)v331.m256i_i64[0];
          *(_OWORD *)v352 = *(_OWORD *)&v331.m256i_u64[1];
          v199 = *(_QWORD *)v401.m256i_i64[0];
          v137 = *(_QWORD *)v401.m256i_i64[0] == 1;
          v471 = v401.m256i_i64[0];
          if ( v137 )
          {
            sub_1401DD260(*(_QWORD *)(v401.m256i_i64[0] + 8));
          }
          else if ( !v199 )
          {
            v200 = *(_QWORD *)(v471 + 16);
            if ( v200 )
              sub_140001660(*(_QWORD *)(v471 + 8), v200, 1);
          }
          sub_140001660(v471, 40, 8);
          v299 = *(_OWORD *)v352;
          *(_OWORD *)v247 = *(_OWORD *)v352;
          v351 = *(_OWORD *)v352;
          v65 = v475;
          v18 = Address;
          v17 = v474;
          v201 = v470;
          v202 = v453;
          goto LABEL_214;
        }
        v331.m256i_i64[0] = v44;
        v331.m256i_i64[1] = v54;
        *(_OWORD *)&v331.m256i_u64[2] = 0;
        *(_QWORD *)v332 = v44;
        *(_QWORD *)&v332[8] = v54;
        sub_1408A6200(v307, &v331);
        if ( v307[0] == 0xFF )
        {
          sub_140BA5680(v307);
        }
        else
        {
          v331 = *(__m256i *)v307;
          v106 = sub_141433D50(aError_44, 5, &v331);
          v107 = -1;
          if ( v106 && *(_BYTE *)v106 == 3 )
          {
            v108 = *(_QWORD *)(v106 + 16);
            v4 = *(_BYTE **)(v106 + 24);
            sub_140388B60((unsigned int)v307, (_DWORD)v4, 0, 1, 1);
            v107 = *(_QWORD *)&v307[8];
            if ( *(_DWORD *)v307 == 1 )
              sub_1416C2D4B(*(_QWORD *)&v307[8], *(_QWORD *)&v307[16]);
            v52 = *(_QWORD *)&v307[16];
            if ( v4 )
              sub_141684120(*(_QWORD *)&v307[16], v108, v4);
            else
              v4 = nullptr;
          }
          sub_1400104F0(&v331);
          if ( v107 != -1 )
          {
            *(_QWORD *)v352 = v107;
            *(_QWORD *)&v352[8] = v52;
            *(_QWORD *)&v352[16] = v4;
LABEL_206:
            v471 = v52;
            sub_140403BA0((__int64)&v331, v52, (__int64)v4);
            *(_QWORD *)&v299 = &v331;
            *((_QWORD *)&v299 + 1) = sub_1400015F0;
            sub_14149C0F0(v307, &unk_1417BAAC6, &v299);
            if ( v331.m256i_i64[0] )
              sub_140001660(v331.m256i_i64[1], v331.m256i_i64[0], 1);
            v4 = *(_BYTE **)v307;
            v351 = *(_OWORD *)&v307[8];
            v65 = v475;
            v18 = Address;
            v17 = v474;
            v201 = v470;
            v202 = v453;
            if ( *(_QWORD *)v352 )
              sub_140001660(v471, *(_QWORD *)v352, 1);
LABEL_214:
            v64 = 10;
            if ( v202 )
              sub_140001660(v201, v202, 1);
            v44 = (__int64)v4;
LABEL_217:
            *(_BYTE *)(v65 + 369) = 0;
            if ( !_InterlockedDecrement64(*(volatile signed __int64 **)(v65 + 344)) )
            {
              v447 = v17;
              v446 = v18;
              sub_141018B80(v65 + 344);
            }
LABEL_219:
            if ( *(_BYTE *)(v475 + 368) )
            {
              v457 = v17;
              v456 = v18;
              sub_1406882B0(&v325);
            }
            v203 = v475;
            *(_BYTE *)(v475 + 368) = 0;
            *(_BYTE *)(v203 + 370) = 0;
LABEL_222:
            v258 = v351;
            v289 = v328;
            v290 = v329;
            v291 = v330;
            *v17 = 1;
            v293 = v258;
            v286 = v289;
            v287 = v290;
            v288 = v291;
            sub_140BE8E70(v18);
            if ( (_DWORD)v64 == -1 )
            {
              *(_QWORD *)v352 = v44;
              *(_OWORD *)&v352[8] = v293;
              *(_QWORD *)&v352[24] = v4;
              v331.m256i_i64[0] = (__int64)v352;
              v331.m256i_i64[1] = (__int64)sub_1400015F0;
              v331.m256i_i64[2] = (__int64)&v352[24];
              v331.m256i_i64[3] = (__int64)sub_1414AC520;
              v467 = 1;
              sub_14149C0F0(v307, &unk_1417BAC78, &v331);
              *(_OWORD *)v331.m256i_i8 = *(_OWORD *)v307;
              v331.m256i_i64[2] = *(_QWORD *)&v307[16];
              v467 = 1;
              sub_1403565C0((unsigned int)aDebugReport, 12, (unsigned int)aUploadSucceede, 16, (__int64)&v331);
              *(_OWORD *)&v307[16] = *(_OWORD *)&v352[16];
              *(_OWORD *)v307 = *(_OWORD *)v352;
              v467 = 0;
              sub_140ACCA70(&v331, v307);
              v12 = v331.m256i_i64[1];
              v88 = v331.m256i_i64[0];
              v13 = (_BYTE *)v331.m256i_i64[2];
              LOBYTE(v14) = v331.m256i_i8[24];
              *(_DWORD *)v461 = *(__int32 *)((char *)&v331.m256i_i32[6] + 1);
              *(_DWORD *)&v461[3] = v331.m256i_i32[7];
              v253 = *(_OWORD *)v332;
              v254 = *(_OWORD *)&v332[16];
              v255 = *(_OWORD *)&v332[32];
              v256 = *(_OWORD *)&v332[48];
              v257 = *(_OWORD *)&v332[64];
              v204 = v475;
              v205 = *(_QWORD *)(v475 + 1088);
              if ( v205 )
LABEL_225:
                sub_140001660(*(_QWORD *)(v204 + 1096), v205, 1);
            }
            else
            {
              v331.m256i_i64[0] = v64;
              v331.m256i_i64[1] = v44;
              *(_OWORD *)&v331.m256i_u64[2] = v293;
              *(_QWORD *)v332 = v4;
              *(__m256i *)&v332[8] = v286;
              *(_OWORD *)&v332[40] = v287;
              *(_QWORD *)&v332[56] = v288;
              *(_QWORD *)v352 = &v331;
              *(_QWORD *)&v352[8] = sub_140B036A0;
              sub_14149C0F0(v307, &unk_1417BAC01, v352);
              *(_OWORD *)v352 = *(_OWORD *)v307;
              *(_QWORD *)&v352[16] = *(_QWORD *)&v307[16];
              sub_1403565C0((unsigned int)aDebugReport, 12, (unsigned int)aUploadFailed, 13, (__int64)v352);
              *(_QWORD *)v352 = 0;
              *(_QWORD *)&v352[8] = 1;
              *(_QWORD *)&v352[16] = 0;
              *(_QWORD *)&v307[16] = 1610612768;
              *(_QWORD *)v307 = v352;
              *(_QWORD *)&v307[8] = &off_1417C41C0;
              if ( (unsigned __int8)sub_140B036A0(&v331, v307) )
                sub_1416C3060(
                  (unsigned int)aADisplayImplem_11,
                  55,
                  (unsigned int)&v472,
                  (unsigned int)&unk_1417BC180,
                  (__int64)&off_1417C4278);
              v13 = *(_BYTE **)&v352[8];
              v12 = *(_QWORD *)v352;
              LOBYTE(v14) = v352[16];
              *(_DWORD *)v461 = *(_DWORD *)&v352[17];
              *(_DWORD *)&v461[3] = *(_DWORD *)&v352[20];
              sub_140BF2F60(&v331);
              v88 = -1;
              v204 = v475;
              v205 = *(_QWORD *)(v475 + 1088);
              if ( v205 )
                goto LABEL_225;
            }
            v206 = *(_QWORD *)(v204 + 1112);
            if ( v206 )
              sub_140001660(*(_QWORD *)(v204 + 1120), v206, 1);
            v207 = *(_QWORD *)(v204 + 1136);
            if ( v207 )
              sub_140001660(*(_QWORD *)(v204 + 1144), v207, 1);
            v208 = *(_QWORD *)(v204 + 1160);
            if ( v208 )
              sub_140001660(*(_QWORD *)(v204 + 1168), v208, 1);
            *(_BYTE *)(v204 + 241) = 0;
            *(_BYTE *)(v204 + 242) = 0;
            v209 = sub_141485EF0(*(_QWORD *)(v204 + 216), *(_QWORD *)(v204 + 224));
            if ( v209 )
              sub_1401DD260(v209);
            v5 = v475;
            v210 = *(_QWORD *)(v475 + 208);
            if ( v210 )
              sub_140001660(*(_QWORD *)(v475 + 216), v210, 1);
            v211 = *(_QWORD *)(v5 + 184);
            if ( v211 )
              sub_140001660(*(_QWORD *)(v5 + 192), v211, 1);
            v212 = *(_QWORD *)(v5 + 160);
            if ( v212 )
              sub_140001660(*(_QWORD *)(v5 + 168), v212, 1);
            v213 = *(_QWORD *)(v5 + 112);
            if ( v213 )
              sub_140001660(*(_QWORD *)(v5 + 120), v213, 1);
            v87 = *(_QWORD *)(v5 + 136);
            if ( !v87 )
              goto LABEL_87;
LABEL_86:
            sub_140001660(*(_QWORD *)(v5 + 144), v87, 1);
LABEL_87:
            v89 = v400;
            *v400 = v88;
            v89[1] = v12;
            v89[2] = (__int64)v13;
            *((_BYTE *)v89 + 24) = v14;
            v90 = *(_DWORD *)&v461[3];
            *(_DWORD *)((char *)v89 + 25) = *(_DWORD *)v461;
            *((_DWORD *)v89 + 7) = v90;
            v91 = v254;
            v92 = v255;
            v93 = v256;
            *((_OWORD *)v89 + 2) = v253;
            *((_OWORD *)v89 + 3) = v91;
            *((_OWORD *)v89 + 4) = v92;
            *((_OWORD *)v89 + 5) = v93;
            *((_OWORD *)v89 + 6) = v257;
            result = 1;
            goto LABEL_149;
          }
        }
        *(_WORD *)v307 = *(_WORD *)(v475 + 376);
        v331.m256i_i64[0] = (__int64)v307;
        v331.m256i_i64[1] = (__int64)sub_1414AAE30;
        sub_14149C0F0(v352, &unk_1417B9EBA, &v331);
        v52 = *(_QWORD *)&v352[8];
        v4 = *(_BYTE **)&v352[16];
        goto LABEL_206;
      }
      v33 = 4;
LABEL_45:
      v5 = v475;
      v53 = v474;
LABEL_148:
      *v53 = v33;
      *v400 = -2;
      result = 4;
LABEL_149:
      *(_BYTE *)(v5 + 240) = result;
      return result;
    case 1LL:
      sub_1416C3400(&off_1417BAC60, a2, a3, a4);
    case 2LL:
      sub_1416C3420(&off_1417BAC60, a2, a3, a4);
    case 3LL:
      goto LABEL_63;
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
          v26 = *(_QWORD **)(a2 + 360);
          goto LABEL_89;
        case 1:
          v365 = a2 + 248;
          sub_1416C3400(&off_1417BAA18, a2, a3, a4);
        case 2:
          v365 = a2 + 248;
          sub_1416C3420(&off_1417BAA18, a2, a3, a4);
        case 3:
          v34 = (char *)(a2 + 523);
          v35 = a2 + 376;
          switch ( *(_BYTE *)(a2 + 523) )
          {
            case 0:
              v462 = (char *)(a2 + 523);
              v19 = *(_QWORD *)(a2 + 392);
              v20 = *(_QWORD *)(a2 + 400);
              goto LABEL_92;
            case 1:
              v368 = a2 + 371;
              v367 = a2 + 248;
              v366 = a2 + 376;
              sub_1416C3400(&off_1417B79C8, a2, a3, a4);
            case 2:
              v368 = a2 + 371;
              v367 = a2 + 248;
              JUMPOUT(0x140CF5C59LL);
            case 3:
              v444 = (_BYTE *)(a2 + 749);
              v55 = *(unsigned __int8 *)(a2 + 749);
              v56 = (volatile signed __int64 **)(a2 + 528);
              v474 = (_BYTE *)(a2 + 371);
              switch ( v55 )
              {
                case 0LL:
                  JUMPOUT(0x140CF269FLL);
                case 1LL:
                  v413 = a2 + 371;
                  v412 = a2 + 248;
                  v411 = a2 + 376;
                  v410 = a2 + 528;
                  sub_1416C3400(&off_1417B78B0, a2, a3, a4);
                case 2LL:
                  v413 = a2 + 371;
                  v412 = a2 + 248;
                  v411 = a2 + 376;
                  v410 = a2 + 528;
                  sub_1416C3420(&off_1417B78B0, a2, a3, a4);
                case 3LL:
                  v470 = (_BYTE *)(a2 + 704);
                  v109 = *(unsigned __int8 *)(a2 + 704);
                  v466 = (_BYTE *)(a2 + 544);
                  v471 = a2 + 376;
                  switch ( v109 )
                  {
                    case 0LL:
                      v462 = (char *)(a2 + 523);
                      v110 = *(__int128 **)(a2 + 544);
                      v19 = *(_QWORD *)(a2 + 552);
                      v20 = *(_QWORD *)(a2 + 560);
                      goto LABEL_122;
                    case 1LL:
                      v418 = a2 + 371;
                      v417 = a2 + 248;
                      v416 = a2 + 376;
                      v415 = a2 + 528;
                      v414 = v466;
                      sub_1416C3400(&off_1417B7818, a2, a3, a4);
                    case 2LL:
                      v418 = a2 + 371;
                      v417 = a2 + 248;
                      v416 = a2 + 376;
                      v415 = a2 + 528;
                      v414 = v466;
                      sub_1416C3420(&off_1417B7818, a2, a3, a4);
                    case 3LL:
                      v445 = (void (__fastcall **)(_QWORD))(a2 + 697);
                      v198 = *(unsigned __int8 *)(a2 + 697);
                      v460 = a2 + 568;
                      switch ( v198 )
                      {
                        case 0LL:
                          v462 = (char *)(a2 + 523);
                          v110 = *(__int128 **)(a2 + 688);
                          v19 = *(_QWORD *)(a2 + 584);
                          v20 = *(_QWORD *)(a2 + 592);
                          break;
                        case 1LL:
                          v381 = a2 + 371;
                          v380 = a2 + 248;
                          v379 = v471;
                          v378 = a2 + 528;
                          v377 = v470;
                          v376 = v466;
                          v375 = v460;
                          sub_1416C3400(&off_1417B7830, a2, a3, a4);
                        case 2LL:
                          v381 = a2 + 371;
                          v380 = a2 + 248;
                          v379 = v471;
                          v378 = a2 + 528;
                          v377 = v470;
                          v376 = v466;
                          v375 = v460;
                          sub_1416C3420(&off_1417B7830, a2, a3, a4);
                        case 3LL:
                          v126 = (char *)(a2 + 680);
                          v122 = (__int128 *)(a2 + 600);
                          switch ( *(_BYTE *)(v5 + 680) )
                          {
                            case 0:
                              v119 = v460;
                              goto LABEL_124;
                            case 1:
                              v389 = v5 + 371;
                              v388 = v5 + 248;
                              v387 = v471;
                              v386 = v5 + 528;
                              v385 = v470;
                              v384 = v466;
                              v383 = v460;
                              v382 = v5 + 600;
                              sub_1416C3400(&off_1417B7D70, v122, v126, a4);
                            case 2:
                              v389 = v5 + 371;
                              v388 = v5 + 248;
                              v387 = v471;
                              v386 = v5 + 528;
                              v385 = v470;
                              v384 = v466;
                              v383 = v460;
                              v382 = v5 + 600;
                              sub_1416C3420(&off_1417B7D70, v122, v126, a4);
                            case 3:
                              v462 = (char *)(v5 + 680);
                              v459 = (_QWORD *)(v5 + 600);
                              v458 = (volatile signed __int64 **)(v5 + 528);
                              Address = (PVOID)(v5 + 248);
                              goto LABEL_125;
                          }
                      }
                      goto LABEL_123;
                  }
              }
            case 4:
              v57 = (_BYTE *)(a2 + 664);
              v58 = (volatile signed __int64 ***)(v5 + 632);
              switch ( *(_BYTE *)(v5 + 664) )
              {
                case 0:
                  v59 = *v58;
                  break;
                case 1:
                  v409 = v5 + 371;
                  v408 = v5 + 248;
                  v407 = v5 + 376;
                  v406 = v5 + 632;
                  sub_1416C3400(&off_1417BA620, v57, v58, a4);
                case 2:
                  v409 = v5 + 371;
                  v408 = v5 + 248;
                  v407 = v5 + 376;
                  v406 = v5 + 632;
                  sub_1416C3420(&off_1417BA620, v57, v58, a4);
                case 3:
                  v111 = (_BYTE *)(v5 + 656);
                  v112 = (volatile signed __int64 **)(v5 + 640);
                  switch ( *(_BYTE *)(v5 + 656) )
                  {
                    case 0:
                      v113 = *v112;
                      goto LABEL_143;
                    case 1:
                      v374 = v5 + 371;
                      v373 = v5 + 248;
                      v372 = v5 + 376;
                      v371 = v5 + 664;
                      v370 = v5 + 632;
                      v369 = v5 + 640;
                      sub_1416C3400(&off_1417B7D70, v57, v58, v111);
                    case 2:
                      v374 = v5 + 371;
                      v373 = v5 + 248;
                      v372 = v5 + 376;
                      v371 = v5 + 664;
                      v370 = v5 + 632;
                      v369 = v5 + 640;
                      sub_1416C3420(&off_1417B7D70, v57, v58, v111);
                    case 3:
                      v458 = (volatile signed __int64 **)(v5 + 640);
                      v466 = (_BYTE *)(v5 + 656);
                      v462 = (char *)(v5 + 632);
                      v470 = (_BYTE *)(v5 + 664);
                      v471 = v5 + 376;
                      v474 = (_BYTE *)(v5 + 371);
                      Address = (PVOID)(v5 + 248);
                      goto LABEL_144;
                  }
              }
              goto LABEL_141;
          }
        case 4:
          v474 = (_BYTE *)(a2 + 371);
          Address = (PVOID)(a2 + 248);
          goto LABEL_21;
        case 5:
          v474 = (_BYTE *)(a2 + 371);
          Address = (PVOID)(a2 + 248);
          goto LABEL_43;
      }
  }
}