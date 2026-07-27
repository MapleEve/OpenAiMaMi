// module: codexmate_lib/core/relay/codex_diagnostic
// addr: 0x14076df50
// name: run_diagnostics_with_mode
// win 1.2.3 | = mac codexmate_lib::core::relay::codex_diagnostic::run_diagnostics_with_mode | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall run_diagnostics_with_mode(_QWORD *a1, _QWORD *a2, __int64 a3, char a4)
{
  __int128 *v4; // r13
  __int128 v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 v9; // rdx
  __m128i v10; // xmm6
  __m128i v11; // xmm7
  __int64 v12; // rax
  __int64 v13; // rbx
  __int128 v14; // rax
  __int64 v15; // r15
  __int64 v16; // r12
  __m128i v17; // xmm0
  __int64 v18; // rcx
  __int64 v19; // rcx
  void *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // rcx
  __m128i *v24; // rax
  __m128i v25; // xmm0
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // rcx
  void *v30; // rax
  __int64 v31; // rcx
  _DWORD *v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rax
  __int64 v35; // rcx
  __int64 v36; // rbx
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rcx
  __m128i v43; // xmm0
  __m128i v44; // xmm0
  LPCWSTR v45; // rsi
  void *v46; // rax
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rax
  void *v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rax
  __int64 v53; // rcx
  __m128i *v54; // rax
  __int64 v55; // rcx
  __m128i *v56; // rbx
  __int64 v57; // rax
  __m256i *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rax
  __int64 v62; // rax
  bool v63; // zf
  __int64 v64; // rdx
  LPCWSTR v65; // rsi
  __int64 v66; // rax
  __int64 v67; // rdx
  char v68; // bl
  __int64 v69; // rax
  __m256i *v70; // rbx
  __int64 *v71; // r14
  __int64 *v72; // r15
  __int64 *v73; // r12
  __int64 v74; // rcx
  void *v75; // rax
  __int64 v76; // rax
  __int64 v77; // rcx
  __int64 v78; // rax
  __int64 v79; // r8
  __int64 v80; // rcx
  LPCWSTR v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 v84; // rcx
  unsigned __int16 *v85; // rax
  void *v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rsi
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rcx
  __m128i v93; // xmm0
  __int64 v94; // rcx
  unsigned int v95; // r12d
  char v96; // bl
  void *v97; // rax
  __int64 v98; // rcx
  void *v99; // r14
  _WORD *v100; // rax
  _QWORD *v101; // rax
  __int64 v102; // rcx
  _QWORD *v103; // rdi
  _WORD *v104; // rax
  __int64 v105; // rcx
  _WORD *v106; // rbx
  __int64 v107; // rax
  __int64 v108; // rax
  __int64 v109; // rcx
  __m256i *v110; // rbx
  __int64 v111; // rax
  unsigned __int64 v112; // rcx
  __int64 v113; // r15
  __int64 v114; // rax
  __int64 v115; // rdi
  __int64 v116; // rsi
  unsigned __int8 v117; // r14
  __int64 v118; // rcx
  bool v119; // bl
  unsigned __int64 v120; // r13
  __int64 v121; // rdi
  const __m128i *v122; // r15
  unsigned __int64 v123; // rsi
  __int64 v124; // r15
  const __m128i *v125; // rdi
  unsigned __int64 v126; // rsi
  __m128i *v127; // rax
  __int64 v128; // rcx
  __int64 v129; // rax
  char *v130; // rdx
  __int64 v131; // rbx
  LPCWSTR v132; // rsi
  __int64 v133; // rdi
  _QWORD *v134; // r14
  __int64 v135; // rdx
  _QWORD *v136; // r15
  __int64 v137; // rdx
  __int64 v138; // rdx
  unsigned __int64 v139; // r12
  __int64 v140; // rax
  __m128i v141; // xmm0
  __int64 v142; // rcx
  __int64 v143; // r8
  void *v144; // rax
  __int64 v145; // rcx
  __int64 v146; // rsi
  _DWORD *v147; // rax
  __int64 v148; // rcx
  __int64 v149; // rax
  __int64 v150; // rcx
  __int64 v151; // rdx
  unsigned __int64 v152; // r12
  __int64 v153; // rax
  __m128i v154; // xmm0
  void *v155; // rdx
  __int64 v156; // rcx
  void *v157; // r9
  _QWORD *v158; // rsi
  __int128 *v159; // rdi
  __int64 v160; // rbx
  __int64 v161; // rcx
  LPCWSTR v162; // rdx
  __int64 v163; // rsi
  __int64 v164; // rcx
  __m128i v165; // xmm0
  __int64 v166; // rax
  __int64 v167; // rsi
  __m128i v168; // xmm0
  __int64 v169; // rcx
  __int64 v170; // rbx
  __int64 v171; // rdi
  __m128i *v172; // rax
  __int64 v173; // rcx
  __int64 *v174; // rsi
  _DWORD *v175; // rax
  __int64 v176; // rcx
  _DWORD *v177; // r14
  __int64 v178; // rax
  __int64 v179; // rcx
  __int64 v180; // r15
  __int64 v181; // rax
  _QWORD *v182; // rax
  __int64 v183; // rcx
  _QWORD *v184; // rsi
  _DWORD *v185; // rax
  __int64 v186; // rcx
  _DWORD *v187; // r14
  __int64 v188; // rax
  unsigned __int64 v189; // rcx
  __m128i v191; // xmm8
  unsigned __int64 v193; // r15
  __int64 v194; // rax
  unsigned __int64 v195; // rcx
  __int64 i; // r14
  __int64 v197; // rax
  unsigned __int64 v198; // rsi
  _QWORD *v199; // r13
  __m128i v200; // xmm0
  __m128i v201; // xmm7
  char v202; // r14
  __int64 v203; // rsi
  _QWORD *v204; // rax
  __int64 v205; // rcx
  _QWORD *v206; // rsi
  _DWORD *v207; // rax
  __int64 v208; // rcx
  _DWORD *v209; // r14
  __int64 v210; // rax
  __int64 v211; // rcx
  __int64 v212; // r15
  __int64 v213; // rax
  __int64 *v214; // r12
  __int64 v215; // rsi
  __int64 v216; // rcx
  __int64 *v217; // r14
  __int64 v218; // rdx
  __int64 v219; // rsi
  __int64 v220; // rsi
  HKEY v221; // rax
  __m128i *v222; // rax
  __int64 v223; // rcx
  __int64 v224; // rax
  __int64 v225; // rdi
  __int64 v226; // rsi
  unsigned int v227; // r12d
  HKEY v228; // rdi
  __int64 v229; // rdx
  bool v230; // r14
  LPCWSTR v231; // rbx
  __int64 v232; // rdi
  const WCHAR *v233; // r15
  __int64 v234; // rcx
  __int64 v235; // rdi
  __int64 v236; // rax
  __int64 v237; // rax
  __int64 v238; // rcx
  __int64 v239; // rdi
  _WORD *v240; // rax
  __int64 v241; // rax
  __int64 v242; // rcx
  _QWORD *v243; // rsi
  _WORD *v244; // rax
  __int64 v245; // rcx
  _WORD *v246; // rdi
  _QWORD *v247; // rax
  __int64 v248; // rcx
  _QWORD *v249; // rbx
  __int64 v250; // rax
  __int128 v251; // kr60_16
  __int64 v252; // rdi
  __int64 v253; // rax
  __int64 v254; // rsi
  _QWORD *v255; // rdi
  __int64 v256; // rdx
  __m128i v257; // xmm0
  __int64 v258; // rax
  __int64 v259; // rax
  __int64 v260; // rcx
  __int64 v261; // rdi
  unsigned __int64 v262; // rdx
  unsigned __int64 v263; // rsi
  __int64 v264; // rax
  __int64 v265; // rcx
  bool v266; // bl
  __m128i *v267; // rax
  __int64 v268; // rcx
  __int64 *v269; // rsi
  __int64 v270; // rax
  __int64 v271; // rcx
  __int64 v272; // rdi
  __int64 v273; // rax
  __int64 v274; // rcx
  __int64 v275; // rbx
  __int64 v276; // rax
  __m128i *v277; // rax
  __int64 v278; // rcx
  _DWORD *v279; // rax
  __int128 v280; // kr80_16
  __int64 v281; // rsi
  __int64 v282; // rcx
  __int64 v283; // rdi
  __int64 v284; // rax
  __m128i v285; // xmm0
  __m128i *v286; // rax
  __int64 v287; // rcx
  __int64 *v288; // rsi
  _DWORD *v289; // rax
  __int64 v290; // rcx
  _DWORD *v291; // rdi
  __int64 v292; // rax
  __int64 v293; // rcx
  __int64 v294; // rbx
  __int64 v295; // rax
  __m128i *v296; // rax
  __int64 v297; // rcx
  __m128i *v298; // rdi
  __int64 v299; // rax
  __int64 v300; // rcx
  __int64 v301; // rax
  LPCWSTR v302; // r9
  __int64 v303; // rax
  __int64 v304; // rax
  __int64 v305; // rcx
  _QWORD *v306; // rsi
  __int64 v307; // rax
  __int64 v308; // rcx
  __int64 v309; // rbx
  __int64 v310; // rax
  const WCHAR *v311; // rsi
  __int64 j; // rdi
  __int64 v313; // r12
  __int64 v314; // rsi
  __int64 v315; // r14
  LPCWSTR v316; // rax
  __int64 v317; // rsi
  __int64 v318; // rbx
  __int64 v319; // rcx
  const WCHAR *v320; // rsi
  __int64 v321; // rax
  __int64 v322; // rsi
  const WCHAR *v323; // rsi
  __int64 v324; // rax
  __int64 v325; // rcx
  __int64 v326; // rax
  __int64 v327; // rdi
  __int64 v328; // rbx
  __int64 v329; // rax
  __m128i v330; // xmm0
  const char *v331; // rcx
  const WCHAR *v332; // rsi
  __int64 v333; // rax
  __int64 v334; // rcx
  __int64 v335; // rsi
  __int64 v336; // rbx
  __int64 v337; // rcx
  LPCWSTR v338; // r14
  BOOL DiskFreeSpace; // r15d
  unsigned __int64 v340; // r13
  __int64 v341; // rax
  __int64 v342; // rcx
  __int64 v343; // rdi
  __int64 v344; // rax
  __int64 v345; // rdi
  const WCHAR *v346; // rdi
  _QWORD *v347; // r14
  __int64 v348; // rdx
  __int64 v349; // rax
  __int64 v350; // rcx
  __int64 v351; // rax
  __int128 v352; // krB0_16
  __int64 v353; // rdi
  __int64 v354; // rcx
  __int64 v355; // rax
  __int64 v356; // rax
  __int64 v357; // rcx
  _DWORD *v358; // rax
  __int128 v359; // krC0_16
  __int64 v360; // rdi
  __int64 v361; // rcx
  __int64 v362; // rax
  const WCHAR *v363; // rdi
  _QWORD *v364; // r14
  __int64 v365; // rdx
  __int64 v366; // rcx
  __int64 v367; // rdi
  __int64 v368; // r15
  __int64 v369; // rcx
  __int64 v370; // r14
  __int64 v371; // rax
  __int64 v372; // r15
  __int64 v373; // r15
  __int64 v374; // r12
  char v375; // di
  __int64 v376; // rcx
  __int64 v377; // r13
  __int64 v378; // rsi
  __int64 v379; // rdi
  __m128i v380; // xmm0
  __int64 v381; // rbx
  __int64 v382; // rcx
  __int64 v383; // rax
  __int64 v384; // rcx
  _DWORD *v385; // rax
  __int64 v386; // rdi
  __int64 v387; // r14
  const WCHAR *v388; // r15
  _QWORD *v389; // rdi
  __int64 v390; // rdx
  __int64 v391; // rsi
  __int64 v392; // rdx
  __int64 v393; // rcx
  __int64 v394; // r9
  __int128 v395; // xmm0
  __int128 v396; // xmm1
  __int128 v397; // xmm2
  __int128 v398; // xmm1
  __int128 v399; // xmm2
  __int128 v400; // xmm3
  __int128 v401; // xmm1
  __int128 v402; // xmm2
  __int128 v403; // xmm3
  __int128 v404; // xmm1
  __int128 v405; // xmm2
  __m128i v406; // xmm3
  __int128 v407; // xmm1
  __int128 v408; // xmm2
  __int128 v409; // xmm3
  __int128 v410; // xmm0
  __int128 v411; // xmm1
  __int128 v412; // xmm2
  __int128 v413; // xmm1
  __int128 v414; // xmm2
  __int128 v415; // xmm3
  __int128 v416; // xmm1
  __int128 v417; // xmm2
  __int128 v418; // xmm3
  __int128 v419; // xmm1
  __int128 v420; // xmm2
  __int128 v421; // xmm3
  __int128 v422; // xmm1
  __int128 v423; // xmm2
  __int128 v424; // xmm3
  __int128 v425; // xmm1
  __int128 v426; // xmm2
  __int128 v427; // xmm3
  __int128 v428; // xmm1
  __int128 v429; // xmm2
  __int128 v430; // xmm3
  __int128 v431; // xmm1
  __int128 v432; // xmm2
  __int128 v433; // xmm3
  __int128 v434; // xmm1
  __int128 v435; // xmm2
  __int128 v436; // xmm3
  __int128 v437; // xmm1
  __int128 v438; // xmm2
  __int128 v439; // xmm3
  __int128 v440; // xmm1
  __int128 v441; // xmm2
  __int128 v442; // xmm3
  __int128 v443; // xmm1
  __int128 v444; // xmm2
  __int128 v445; // xmm3
  __int128 v446; // xmm1
  __int128 v447; // xmm2
  __int128 v448; // xmm3
  __int128 v449; // xmm1
  __int128 v450; // xmm2
  __int128 v451; // xmm3
  __int128 v452; // xmm1
  __int128 v453; // xmm2
  __int128 v454; // xmm3
  __int128 v455; // xmm1
  __int128 v456; // xmm2
  __int128 v457; // xmm3
  __int128 v458; // xmm1
  __int128 v459; // xmm2
  __int128 v460; // xmm3
  __int128 v461; // xmm1
  __int128 v462; // xmm2
  __int128 v463; // xmm3
  __int128 v464; // xmm1
  __int128 v465; // xmm2
  __int128 v466; // xmm3
  __int128 v467; // xmm1
  __int128 v468; // xmm2
  __int128 v469; // xmm3
  __int128 v470; // xmm1
  __int128 v471; // xmm2
  __int128 v472; // xmm3
  __int128 v473; // xmm1
  __int128 v474; // xmm2
  __int128 v475; // xmm3
  __int128 v476; // xmm1
  __int128 v477; // xmm2
  __int128 v478; // xmm3
  __int128 v479; // xmm1
  __int128 v480; // xmm2
  __int128 v481; // xmm3
  __int64 v482; // rcx
  __int64 v483; // rdx
  __int64 v484; // rax
  _WORD *v485; // r8
  __int64 result; // rax
  __int64 v487; // rsi
  __int64 v488; // rdi
  __int64 v489; // rbx
  const __m128i *v490; // r14
  __m128i v492; // xmm0
  __int64 v493; // rax
  __int64 v494; // rdx
  __int64 v495; // rsi
  __int64 v496; // rsi
  __int64 v497; // rdi
  __int64 v498; // rbx
  const __m128i *v499; // r14
  __m128i v501; // xmm0
  __int64 v502; // rax
  __int64 v503; // rdx
  __int64 v504; // rsi
  __int64 v505; // rax
  __int64 v506; // rcx
  __int64 v507; // rdi
  _DWORD *v508; // rax
  __int64 v509; // rcx
  _DWORD *v510; // rbx
  __int64 v511; // rax
  __int64 v512; // rcx
  __int64 v513; // r14
  __int64 v514; // rax
  __int64 v515; // rsi
  _QWORD *v516; // rdi
  __int64 v517; // rdx
  _QWORD *v518; // rdi
  __int64 v519; // rdx
  __int64 v520; // rdi
  __int64 v521; // rbx
  __int64 v522; // r15
  _OWORD v523[6]; // [rsp+38h] [rbp-48h] BYREF
  __int64 v524; // [rsp+98h] [rbp+18h]
  _OWORD v525[6]; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v526; // [rsp+100h] [rbp+80h]
  _OWORD v527[6]; // [rsp+108h] [rbp+88h] BYREF
  __int64 v528; // [rsp+168h] [rbp+E8h]
  _OWORD v529[6]; // [rsp+170h] [rbp+F0h] BYREF
  __int64 v530; // [rsp+1D0h] [rbp+150h]
  _OWORD v531[6]; // [rsp+1D8h] [rbp+158h] BYREF
  __int64 v532; // [rsp+238h] [rbp+1B8h]
  _OWORD v533[6]; // [rsp+240h] [rbp+1C0h] BYREF
  __int64 v534; // [rsp+2A0h] [rbp+220h]
  _OWORD v535[6]; // [rsp+2A8h] [rbp+228h] BYREF
  __int64 v536; // [rsp+308h] [rbp+288h]
  _OWORD v537[6]; // [rsp+310h] [rbp+290h] BYREF
  __int64 v538; // [rsp+370h] [rbp+2F0h]
  _OWORD v539[6]; // [rsp+378h] [rbp+2F8h] BYREF
  __int64 v540; // [rsp+3D8h] [rbp+358h]
  _OWORD v541[6]; // [rsp+3E0h] [rbp+360h] BYREF
  __int64 v542; // [rsp+440h] [rbp+3C0h]
  _OWORD v543[6]; // [rsp+448h] [rbp+3C8h] BYREF
  __int64 v544; // [rsp+4A8h] [rbp+428h]
  _OWORD v545[6]; // [rsp+4B0h] [rbp+430h] BYREF
  __int64 v546; // [rsp+510h] [rbp+490h]
  _OWORD v547[6]; // [rsp+518h] [rbp+498h] BYREF
  __int64 v548; // [rsp+578h] [rbp+4F8h]
  _OWORD v549[6]; // [rsp+580h] [rbp+500h] BYREF
  __int64 v550; // [rsp+5E0h] [rbp+560h]
  _OWORD v551[6]; // [rsp+5E8h] [rbp+568h] BYREF
  __int64 v552; // [rsp+648h] [rbp+5C8h]
  _OWORD v553[6]; // [rsp+650h] [rbp+5D0h] BYREF
  __int64 v554; // [rsp+6B0h] [rbp+630h]
  __m128i v555; // [rsp+6B8h] [rbp+638h] BYREF
  __int64 v556; // [rsp+6C8h] [rbp+648h]
  __m128i v557; // [rsp+6D0h] [rbp+650h]
  __int128 v558; // [rsp+6E0h] [rbp+660h]
  __int128 v559; // [rsp+6F0h] [rbp+670h]
  __int128 v560; // [rsp+700h] [rbp+680h]
  __m256i v561; // [rsp+710h] [rbp+690h]
  __int64 v562; // [rsp+730h] [rbp+6B0h]
  __m128i v563; // [rsp+740h] [rbp+6C0h] BYREF
  __int128 v564; // [rsp+750h] [rbp+6D0h]
  __int128 v565; // [rsp+760h] [rbp+6E0h]
  __int128 v566; // [rsp+770h] [rbp+6F0h]
  __m256i v567; // [rsp+780h] [rbp+700h]
  __int64 v568; // [rsp+7A0h] [rbp+720h]
  __int128 v569; // [rsp+7A8h] [rbp+728h] BYREF
  __int128 v570; // [rsp+7B8h] [rbp+738h]
  __int128 v571; // [rsp+7C8h] [rbp+748h]
  __int128 v572; // [rsp+7D8h] [rbp+758h]
  __m256i v573; // [rsp+7E8h] [rbp+768h]
  __int64 v574; // [rsp+808h] [rbp+788h]
  __int128 v575; // [rsp+810h] [rbp+790h] BYREF
  __int128 v576; // [rsp+820h] [rbp+7A0h]
  __int128 v577; // [rsp+830h] [rbp+7B0h]
  __int128 v578; // [rsp+840h] [rbp+7C0h]
  __m256i v579; // [rsp+850h] [rbp+7D0h]
  __int64 v580; // [rsp+870h] [rbp+7F0h]
  __m128i v581; // [rsp+878h] [rbp+7F8h] BYREF
  __int128 v582; // [rsp+888h] [rbp+808h]
  __int128 v583; // [rsp+898h] [rbp+818h]
  __int128 v584; // [rsp+8A8h] [rbp+828h]
  __m256i v585; // [rsp+8B8h] [rbp+838h]
  __int64 v586; // [rsp+8D8h] [rbp+858h]
  __m128i si128; // [rsp+8E0h] [rbp+860h] BYREF
  __int128 v588; // [rsp+8F0h] [rbp+870h]
  __int128 v589; // [rsp+900h] [rbp+880h]
  __int128 v590; // [rsp+910h] [rbp+890h] BYREF
  __int128 v591; // [rsp+920h] [rbp+8A0h]
  __int128 v592; // [rsp+930h] [rbp+8B0h]
  __int128 v593; // [rsp+940h] [rbp+8C0h]
  __int128 v594; // [rsp+950h] [rbp+8D0h]
  __int128 v595; // [rsp+960h] [rbp+8E0h]
  __int64 v596; // [rsp+970h] [rbp+8F0h]
  _QWORD *v597; // [rsp+978h] [rbp+8F8h]
  __int64 v598; // [rsp+980h] [rbp+900h]
  __int64 v599; // [rsp+988h] [rbp+908h] BYREF
  __int64 *v600; // [rsp+990h] [rbp+910h]
  __int64 v601; // [rsp+998h] [rbp+918h]
  __m128i v602; // [rsp+9A0h] [rbp+920h] BYREF
  __int128 v603; // [rsp+9B0h] [rbp+930h]
  __int128 v604; // [rsp+9C0h] [rbp+940h] BYREF
  __int128 v605; // [rsp+9D0h] [rbp+950h] BYREF
  __int128 v606; // [rsp+9E0h] [rbp+960h]
  __int128 v607; // [rsp+9F0h] [rbp+970h]
  __int128 v608; // [rsp+A00h] [rbp+980h]
  __int128 v609; // [rsp+A10h] [rbp+990h]
  __int128 v610; // [rsp+A20h] [rbp+9A0h]
  __int64 v611; // [rsp+A30h] [rbp+9B0h]
  __m128i v612; // [rsp+A38h] [rbp+9B8h] BYREF
  __int128 v613; // [rsp+A48h] [rbp+9C8h]
  __int128 v614; // [rsp+A58h] [rbp+9D8h]
  __int128 v615; // [rsp+A68h] [rbp+9E8h]
  __int128 v616; // [rsp+A78h] [rbp+9F8h]
  __m128i v617; // [rsp+A88h] [rbp+A08h]
  __int64 v618; // [rsp+A98h] [rbp+A18h]
  LPCWSTR v619; // [rsp+AA0h] [rbp+A20h]
  __m128i v620; // [rsp+AA8h] [rbp+A28h] BYREF
  __int64 v621; // [rsp+AB8h] [rbp+A38h]
  __int128 v622; // [rsp+AC8h] [rbp+A48h]
  __int128 v623; // [rsp+AD8h] [rbp+A58h]
  __int128 v624; // [rsp+AE8h] [rbp+A68h]
  __m128i v625; // [rsp+AF8h] [rbp+A78h]
  __int128 v626; // [rsp+B08h] [rbp+A88h] BYREF
  __int128 v627; // [rsp+B18h] [rbp+A98h] BYREF
  __int64 v628; // [rsp+B28h] [rbp+AA8h]
  __int64 v629; // [rsp+B30h] [rbp+AB0h]
  __int64 v630; // [rsp+B38h] [rbp+AB8h]
  __int64 v631; // [rsp+B40h] [rbp+AC0h]
  __m128i v632; // [rsp+B48h] [rbp+AC8h] BYREF
  __int64 v633; // [rsp+B58h] [rbp+AD8h]
  __m128i v634; // [rsp+B68h] [rbp+AE8h] BYREF
  __int64 v635; // [rsp+B78h] [rbp+AF8h]
  char v636; // [rsp+B80h] [rbp+B00h]
  char v637; // [rsp+BA0h] [rbp+B20h]
  char v638; // [rsp+BA1h] [rbp+B21h]
  const char *v639; // [rsp+BA8h] [rbp+B28h] BYREF
  __int64 v640; // [rsp+BB0h] [rbp+B30h]
  __int64 v641; // [rsp+BB8h] [rbp+B38h]
  __int64 v642; // [rsp+BC0h] [rbp+B40h]
  __int64 v643; // [rsp+BC8h] [rbp+B48h]
  __m128i v644; // [rsp+BD0h] [rbp+B50h] BYREF
  __int128 v645; // [rsp+BE0h] [rbp+B60h]
  __int128 v646; // [rsp+BF0h] [rbp+B70h]
  __int128 v647; // [rsp+C00h] [rbp+B80h]
  __int128 v648; // [rsp+C10h] [rbp+B90h]
  __int128 v649; // [rsp+C20h] [rbp+BA0h]
  __int64 v650; // [rsp+C30h] [rbp+BB0h]
  __m128i v651; // [rsp+C40h] [rbp+BC0h] BYREF
  __int64 v652; // [rsp+C50h] [rbp+BD0h]
  char v653; // [rsp+C58h] [rbp+BD8h]
  LPCWSTR lpDirectoryName[2]; // [rsp+C60h] [rbp+BE0h] BYREF
  __int128 v655; // [rsp+C70h] [rbp+BF0h]
  __int128 v656; // [rsp+C80h] [rbp+C00h]
  __int128 v657; // [rsp+C90h] [rbp+C10h]
  __int64 v658; // [rsp+CA0h] [rbp+C20h]
  __int64 v659; // [rsp+CA8h] [rbp+C28h]
  LPCWSTR lpSubKey[2]; // [rsp+CB0h] [rbp+C30h] BYREF
  __int128 v661; // [rsp+CC0h] [rbp+C40h]
  __int128 v662; // [rsp+CD0h] [rbp+C50h]
  __int128 v663; // [rsp+CE0h] [rbp+C60h]
  __int128 v664; // [rsp+CF0h] [rbp+C70h]
  __int128 v665; // [rsp+D00h] [rbp+C80h]
  __int64 v666; // [rsp+D10h] [rbp+C90h]
  __int128 v667; // [rsp+D68h] [rbp+CE8h] BYREF
  __int128 v668; // [rsp+D78h] [rbp+CF8h] BYREF
  __int128 v669; // [rsp+D88h] [rbp+D08h] BYREF
  __int128 v670; // [rsp+D98h] [rbp+D18h] BYREF
  __m256i v671; // [rsp+DA8h] [rbp+D28h] BYREF
  __int64 v672; // [rsp+DC8h] [rbp+D48h]
  __m128i v673; // [rsp+DD0h] [rbp+D50h] BYREF
  __int128 v674; // [rsp+DE0h] [rbp+D60h]
  __int128 v675; // [rsp+DF0h] [rbp+D70h]
  __int128 v676; // [rsp+E00h] [rbp+D80h]
  __m256i v677; // [rsp+E10h] [rbp+D90h]
  __int64 v678; // [rsp+E30h] [rbp+DB0h]
  __int128 *v679; // [rsp+E38h] [rbp+DB8h]
  HKEY hKey[2]; // [rsp+E40h] [rbp+DC0h] BYREF
  __int128 v681; // [rsp+E50h] [rbp+DD0h]
  __int128 v682; // [rsp+E60h] [rbp+DE0h]
  __int128 v683; // [rsp+E70h] [rbp+DF0h]
  __m256i v684; // [rsp+E80h] [rbp+E00h]
  __int64 v685; // [rsp+EA0h] [rbp+E20h]
  const WCHAR *v686; // [rsp+EB0h] [rbp+E30h] BYREF
  __int64 v687; // [rsp+EB8h] [rbp+E38h]
  const WCHAR *v688; // [rsp+EC0h] [rbp+E40h]
  __int64 v689; // [rsp+EC8h] [rbp+E48h]
  __m256i phkResult; // [rsp+ED0h] [rbp+E50h] BYREF
  __int128 v691; // [rsp+EF0h] [rbp+E70h] BYREF
  __int128 v692; // [rsp+F00h] [rbp+E80h]
  _BYTE v693[24]; // [rsp+F10h] [rbp+E90h] BYREF
  __int64 v694; // [rsp+F28h] [rbp+EA8h]
  __int64 v695; // [rsp+F30h] [rbp+EB0h]
  char v696; // [rsp+F38h] [rbp+EB8h]
  __int128 *v697; // [rsp+F80h] [rbp+F00h]
  __int64 v698; // [rsp+F88h] [rbp+F08h]
  __int64 v699; // [rsp+F90h] [rbp+F10h]
  LPCWSTR v700; // [rsp+F98h] [rbp+F18h]
  char v701; // [rsp+FA7h] [rbp+F27h]
  __int64 v702; // [rsp+FA8h] [rbp+F28h]
  __m256i *v703; // [rsp+FB0h] [rbp+F30h]
  __int128 v704; // [rsp+FB8h] [rbp+F38h]
  _QWORD *v705; // [rsp+FC8h] [rbp+F48h]
  __int128 v706; // [rsp+FD0h] [rbp+F50h]
  char v707; // [rsp+FE7h] [rbp+F67h]
  __int64 v708; // [rsp+FE8h] [rbp+F68h]

  v708 = -2;
  LOBYTE(v702) = a4;
  v705 = a2;
  v597 = a1;
  *((_QWORD *)&v5 + 1) = *(_QWORD *)(a3 + 8);
  *(_QWORD *)&v706 = a3;
  *(_QWORD *)&v5 = *(_QWORD *)(a3 + 16);
  v6 = sub_141470CD0(a1, a2);
  if ( *(_BYTE *)(v6 + 16) == 1 )
  {
    v8 = *(_QWORD *)v6;
    v9 = *(_QWORD *)(v6 + 8);
  }
  else
  {
    v521 = v6;
    v8 = sub_141486EF0();
    v6 = v521;
    *(_QWORD *)v521 = v8;
    *(_QWORD *)(v521 + 8) = v9;
    *(_BYTE *)(v521 + 16) = 1;
  }
  *(_QWORD *)v6 = v8 + 1;
  v10 = _mm_loadu_si128((const __m128i *)&off_141786750 + 1);
  *(__m128i *)&phkResult.m256i_u64[2] = v10;
  v11 = _mm_loadu_si128((const __m128i *)&off_141786750);
  *(__m128i *)phkResult.m256i_i8 = v11;
  *(_QWORD *)&v691 = v8;
  *((_QWORD *)&v691 + 1) = v9;
  if ( (_QWORD)v5 )
  {
    LOBYTE(v7) = 1;
    sub_1416BA580(&phkResult, v5, &v691, v7);
    v522 = 0;
    do
    {
      sub_14149C500(lpSubKey, *((_QWORD *)&v5 + 1) + 232 * v522);
      sub_140474440(&phkResult, lpSubKey);
      ++v522;
    }
    while ( v522 != (_QWORD)v5 );
  }
  v589 = v691;
  v588 = *(_OWORD *)&phkResult.m256i_u64[2];
  si128 = _mm_load_si128((const __m128i *)&phkResult);
  v12 = sub_141470CD0(v8, v9);
  v13 = v12;
  if ( *(_BYTE *)(v12 + 16) == 1 )
  {
    v14 = *(_OWORD *)v12;
  }
  else
  {
    *(_QWORD *)&v14 = sub_141486EF0();
    *(_OWORD *)v13 = v14;
    *(_BYTE *)(v13 + 16) = 1;
  }
  *(_QWORD *)v13 = v14 + 1;
  *(__m128i *)&phkResult.m256i_u64[2] = v10;
  *(__m128i *)phkResult.m256i_i8 = v11;
  v691 = v14;
  if ( (_QWORD)v5 )
  {
    v15 = *((_QWORD *)&v5 + 1);
    v16 = v5;
    do
    {
      sub_14149C500(lpSubKey, v15);
      sub_140474440(&phkResult, lpSubKey);
      v15 += 232;
      --v16;
    }
    while ( v16 );
  }
  v17 = _mm_load_si128((const __m128i *)&phkResult);
  v604 = v691;
  v603 = *(_OWORD *)&phkResult.m256i_u64[2];
  v602 = v17;
  sub_14031B2D0(&v599, *((_QWORD *)&v5 + 1), *((_QWORD *)&v5 + 1) + 232 * v5);
  sub_14148D130(&phkResult, v705[9], v705[10]);
  *(_QWORD *)&v5 = phkResult.m256i_i64[1];
  v658 = phkResult.m256i_i64[0];
  if ( phkResult.m256i_i64[0] == -1 )
  {
    if ( sub_140718A30(phkResult.m256i_u64[1]) )
    {
      hKey[0] = (HKEY)v5;
      nullsub_1(v19);
      v20 = (void *)sub_140001650(13, 1);
      if ( !v20 )
        sub_1416C2D4B(1, 13);
      *(_QWORD *)&v5 = v20;
      qmemcpy(v20, "config_access", 13);
      nullsub_1(v21);
      v22 = sub_140001650(5, 1);
      *((_QWORD *)&v706 + 1) = v5;
      if ( !v22 )
        sub_1416C2D4B(1, 5);
      *(_BYTE *)(v22 + 4) = 114;
      v699 = v22;
      *(_DWORD *)v22 = 1869771365;
      nullsub_1(v23);
      v24 = (__m128i *)sub_140001650(24, 1);
      if ( !v24 )
        sub_1416C2D4B(1, 24);
      *v24 = _mm_loadu_si128(&xmmword_14178DA8A);
      *(_QWORD *)&v704 = v24;
      v24[1].m128i_i64[0] = 0x968FE5BBAFE895B3uLL;
      lpSubKey[0] = (LPCWSTR)hKey;
      lpSubKey[1] = (LPCWSTR)sub_141490720;
      sub_14149C0F0(&v555, &unk_14178DAA2, lpSubKey);
      *(__m128i *)&v585.m256i_u64[1] = _mm_loadu_si128(&v555);
      v585.m256i_i64[3] = v556;
      v581.m128i_i64[0] = 13;
      v581.m128i_i64[1] = *((_QWORD *)&v706 + 1);
      *(_QWORD *)&v582 = 13;
      *((_QWORD *)&v582 + 1) = 5;
      *(_QWORD *)&v583 = v699;
      *((_QWORD *)&v583 + 1) = 5;
      *(_QWORD *)&v584 = 24;
      *((_QWORD *)&v584 + 1) = v704;
      v585.m256i_i64[0] = 24;
      LOBYTE(v586) = 0;
      sub_1401DD260(hKey[0]);
    }
    else
    {
      v699 = v5;
      sub_140797030((unsigned int)&v581, (unsigned int)aConfigAccess, 13, (unsigned int)&unk_14178DA66, 36);
      sub_1401DD260(v699);
    }
    v699 = 0;
  }
  else
  {
    v699 = phkResult.m256i_i64[1];
    sub_140797030((unsigned int)&v581, (unsigned int)aConfigAccess, 13, (unsigned int)&unk_14178DA4B, 27);
    *(_QWORD *)&v704 = phkResult.m256i_i64[2];
  }
  v568 = v586;
  v567 = v585;
  v25 = _mm_loadu_si128(&v581);
  v566 = v584;
  v565 = v583;
  v564 = v582;
  v563 = v25;
  nullsub_1(v18);
  v26 = sub_140001650(3016, 8);
  if ( !v26 )
  {
    v701 = 1;
    sub_1416C2D31(8, 3016);
  }
  v630 = v26;
  v27 = v705[5];
  v28 = v705[6];
  v707 = 1;
  v659 = v27;
  v629 = v28;
  sub_141486710(&phkResult, v27, v28);
  if ( phkResult.m256i_i32[0] == 2 )
  {
    v707 = 1;
    sub_1401DD260(phkResult.m256i_i64[1]);
    nullsub_1(v29);
    v30 = (void *)sub_140001650(14, 1);
    if ( !v30 )
    {
      v707 = 1;
      sub_1416C2D4B(1, 14);
    }
    *((_QWORD *)&v5 + 1) = v30;
    qmemcpy(v30, "auth_integrity", 14);
    nullsub_1(v31);
    v32 = (_DWORD *)sub_140001650(7, 1);
    if ( !v32 )
    {
      v705 = *((_QWORD **)&v5 + 1);
      sub_1416C2D4B(1, 7);
    }
    *(_QWORD *)&v5 = v32;
    *(_DWORD *)((char *)v32 + 3) = 1735289198;
    *v32 = 1852989815;
    nullsub_1(v33);
    v34 = sub_140001650(19, 1);
    if ( !v34 )
    {
      v705 = *((_QWORD **)&v5 + 1);
      *(_QWORD *)&v706 = v5;
      sub_1416C2D4B(1, 19);
    }
    v36 = v34;
    *(__m128i *)v34 = _mm_loadu_si128(&xmmword_14178BF63);
    *(_DWORD *)(v34 + 15) = -1466112616;
    nullsub_1(v35);
    v37 = sub_140001650(72, 1);
    if ( !v37 )
    {
      *((_QWORD *)&v706 + 1) = v36;
      v705 = *((_QWORD **)&v5 + 1);
      *(_QWORD *)&v706 = v5;
      sub_1416C2D4B(1, 72);
    }
    *(_OWORD *)(v37 + 48) = xmmword_14178BFA6;
    *(_OWORD *)(v37 + 32) = xmmword_14178BF96;
    *(_OWORD *)(v37 + 16) = xmmword_14178BF86;
    *(__m128i *)v37 = _mm_loadu_si128((const __m128i *)&xmmword_14178BF76);
    *(_QWORD *)(v37 + 64) = 0x89BCEF31303488BCuLL;
    *(_QWORD *)&v667 = 14;
    *((_QWORD *)&v667 + 1) = *((_QWORD *)&v5 + 1);
    *(_QWORD *)&v668 = 14;
    *((_QWORD *)&v668 + 1) = 7;
    *(_QWORD *)&v669 = v5;
    *((_QWORD *)&v669 + 1) = 7;
    *(_QWORD *)&v670 = 19;
    *((_QWORD *)&v670 + 1) = v36;
    v671.m256i_i64[0] = 19;
    v671.m256i_i64[1] = 72;
    v671.m256i_i64[2] = v37;
    v671.m256i_i64[3] = 72;
    LOBYTE(v672) = 1;
    goto LABEL_89;
  }
  v707 = 1;
  sub_14148D130(lpSubKey, v659, v629);
  if ( lpSubKey[0] != (LPCWSTR)-1LL )
  {
    *((LPCWSTR *)&v704 + 1) = lpSubKey[0];
    v39 = v661;
    *((LPCWSTR *)&v706 + 1) = lpSubKey[1];
    sub_14033BC10(lpSubKey[1], v661);
    if ( !v41 )
    {
      nullsub_1(v40);
      v50 = (void *)sub_140001650(14, 1);
      if ( !v50 )
        sub_1416C2D4B(1, 14);
      *((_QWORD *)&v5 + 1) = v50;
      qmemcpy(v50, "auth_integrity", 14);
      nullsub_1(v51);
      v52 = sub_140001650(5, 1);
      if ( !v52 )
      {
        v705 = *((_QWORD **)&v5 + 1);
        sub_1416C2D4B(1, 5);
      }
      *(_QWORD *)&v5 = v52;
      *(_BYTE *)(v52 + 4) = 114;
      *(_DWORD *)v52 = 1869771365;
      nullsub_1(v53);
      v54 = (__m128i *)sub_140001650(16, 1);
      if ( !v54 )
      {
        v705 = *((_QWORD **)&v5 + 1);
        *(_QWORD *)&v706 = v5;
        sub_1416C2D4B(1, 16);
      }
      v56 = v54;
      *v54 = _mm_loadu_si128((const __m128i *)&xmmword_14178BFBE);
      nullsub_1(v55);
      v57 = sub_140001650(48, 1);
      if ( !v57 )
      {
        v702 = (__int64)v56;
        v705 = *((_QWORD **)&v5 + 1);
        *(_QWORD *)&v706 = v5;
        sub_1416C2D4B(1, 48);
      }
      *(_OWORD *)(v57 + 32) = xmmword_14178BFEE;
      *(_OWORD *)(v57 + 16) = xmmword_14178BFDE;
      *(__m128i *)v57 = _mm_loadu_si128((const __m128i *)&xmmword_14178BFCE);
      *(_QWORD *)&v667 = 14;
      *((_QWORD *)&v667 + 1) = *((_QWORD *)&v5 + 1);
      *(_QWORD *)&v668 = 14;
      *((_QWORD *)&v668 + 1) = 5;
      *(_QWORD *)&v669 = v5;
      *((_QWORD *)&v669 + 1) = 5;
      *(_QWORD *)&v670 = 16;
      *((_QWORD *)&v670 + 1) = v56;
      v671.m256i_i64[0] = 16;
      v671.m256i_i64[1] = 48;
      v671.m256i_i64[2] = v57;
      v671.m256i_i64[3] = 48;
      LOBYTE(v672) = 1;
      goto LABEL_87;
    }
    phkResult.m256i_i64[0] = *((_QWORD *)&v706 + 1);
    phkResult.m256i_i64[1] = v39;
    *(_OWORD *)&phkResult.m256i_u64[2] = 0;
    *(_QWORD *)&v691 = *((_QWORD *)&v706 + 1);
    *((_QWORD *)&v691 + 1) = v39;
    sub_1408A6200(lpSubKey, &phkResult);
    if ( LOBYTE(lpSubKey[0]) == 0xFF )
    {
      v673.m128i_i64[0] = (__int64)lpSubKey[1];
      nullsub_1(v42);
      v58 = (__m256i *)sub_140001650(14, 1);
      if ( !v58 )
        sub_1416C2D4B(1, 14);
      v703 = v58;
      qmemcpy(v58, "auth_integrity", 14);
      nullsub_1(0x746E695F68747561LL);
      v59 = sub_140001650(5, 1);
      if ( !v59 )
        sub_1416C2D4B(1, 5);
      *(_BYTE *)(v59 + 4) = 114;
      v697 = (__int128 *)v59;
      *(_DWORD *)v59 = 1869771365;
      nullsub_1(v60);
      v61 = sub_140001650(27, 1);
      if ( !v61 )
        sub_1416C2D4B(1, 27);
      *(_OWORD *)(v61 + 11) = *(__int128 *)((char *)&xmmword_14178C252 + 11);
      v679 = (__int128 *)v61;
      *(__m128i *)v61 = _mm_loadu_si128((const __m128i *)&xmmword_14178C252);
      v644.m128i_i64[0] = (__int64)&v673;
      v644.m128i_i64[1] = (__int64)sub_14142D3F0;
      sub_14149C0F0(&phkResult, &unk_14178C26D, &v644);
      v671.m256i_i64[3] = phkResult.m256i_i64[2];
      *(__m128i *)&v671.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&phkResult);
      *(_QWORD *)&v667 = 14;
      *((_QWORD *)&v667 + 1) = v703;
      *(_QWORD *)&v668 = 14;
      *((_QWORD *)&v668 + 1) = 5;
      *(_QWORD *)&v669 = v697;
      *((_QWORD *)&v669 + 1) = 5;
      *(_QWORD *)&v670 = 27;
      *((_QWORD *)&v670 + 1) = v679;
      v671.m256i_i64[0] = 27;
      LOBYTE(v672) = 1;
      v62 = *(_QWORD *)v673.m128i_i64[0];
      v63 = *(_QWORD *)v673.m128i_i64[0] == 1;
      v703 = (__m256i *)v673.m128i_i64[0];
      if ( v63 )
      {
        sub_1401DD260(*(_QWORD *)(v673.m128i_i64[0] + 8));
      }
      else if ( !v62 )
      {
        v64 = v703->m256i_i64[2];
        if ( v64 )
          sub_140001660(v703->m256i_i64[1], v64, 1);
      }
      sub_140001660(v703, 40, 8);
      goto LABEL_87;
    }
    v43 = _mm_loadu_si128((const __m128i *)lpSubKey);
    v681 = v661;
    *(__m128i *)hKey = v43;
    switch ( v43.m128i_i8[0] )
    {
      case 0:
        phkResult.m256i_i8[0] = 0;
        break;
      case 1:
      case 2:
        v44 = _mm_load_si128((const __m128i *)hKey);
        *(_OWORD *)&phkResult.m256i_u64[2] = v681;
        *(__m128i *)phkResult.m256i_i8 = v44;
        break;
      case 3:
        sub_14149C500(&phkResult.m256i_u64[1], &hKey[1]);
        phkResult.m256i_i8[0] = 3;
        break;
      case 4:
        sub_1402CE260(&phkResult.m256i_u64[1], v681, *((_QWORD *)&v681 + 1));
        phkResult.m256i_i8[0] = 4;
        break;
      case 5:
        if ( *((_QWORD *)&v681 + 1) )
        {
          if ( !hKey[1] )
            sub_1416C3040(&off_141747358);
          sub_1402CCD80(&phkResult.m256i_u64[1], hKey[1], v681);
        }
        else
        {
          phkResult.m256i_i64[1] = 0;
          phkResult.m256i_i64[3] = 0;
        }
        phkResult.m256i_i8[0] = 5;
        break;
    }
    sub_140B858A0(lpSubKey, &phkResult, aAuthfile_0, 8, &off_14178C038, 5);
    v65 = lpSubKey[0];
    if ( lpSubKey[0] == (LPCWSTR)-2LL )
    {
      v66 = *(_QWORD *)lpSubKey[1];
      v63 = *(_QWORD *)lpSubKey[1] == 1;
      v703 = (__m256i *)lpSubKey[1];
      if ( v63 )
      {
        sub_1401DD260(*((_QWORD *)lpSubKey[1] + 1));
      }
      else if ( !v66 )
      {
        v67 = v703->m256i_i64[2];
        if ( v67 )
          sub_140001660(v703->m256i_i64[1], v67, 1);
      }
      sub_140001660(v703, 40, 8);
    }
    else
    {
      sub_141684120(&phkResult.m256i_u64[1], &lpSubKey[1], 168);
      phkResult.m256i_i64[0] = (__int64)v65;
      v68 = sub_1403CCAD0(&phkResult);
      sub_14052D960(&phkResult);
      if ( v68 )
      {
        sub_140797030((unsigned int)&v667, (unsigned int)aAuthIntegrity, 14, (unsigned int)&unk_14178C21C, 54);
LABEL_86:
        sub_1400104F0(hKey);
LABEL_87:
        if ( *((_QWORD *)&v704 + 1) )
          sub_140001660(*((_QWORD *)&v706 + 1), *((_QWORD *)&v704 + 1), 1);
        goto LABEL_89;
      }
    }
    v69 = sub_14142E200(hKey, aTokensAccessTo, 20);
    v703 = &v671;
    v70 = (__m256i *)&v671.m256i_u64[3];
    v697 = (__int128 *)((char *)&v670 + 8);
    v71 = &v671.m256i_i64[2];
    v679 = &v670;
    v72 = &v671.m256i_i64[1];
    v73 = (__int64 *)&v669 + 1;
    v4 = &v669;
    if ( v69 && *(_BYTE *)v69 == 3 && (*((_QWORD *)&v5 + 1) = *(_QWORD *)(v69 + 24)) != 0 )
    {
      *(_QWORD *)&v5 = *(_QWORD *)(v69 + 16);
      if ( (unsigned __int8)sub_14077CA10(v5, *(_QWORD *)(v69 + 24)) )
      {
        nullsub_1(v74);
        v75 = (void *)sub_140001650(14, 1);
        if ( !v75 )
          sub_1416C2D4B(1, 14);
        v698 = (__int64)v75;
        qmemcpy(v75, "auth_integrity", 14);
        nullsub_1(0x746E695F68747561LL);
        v76 = sub_140001650(5, 1);
        if ( !v76 )
          sub_1416C2D4B(1, 5);
        *(_BYTE *)(v76 + 4) = 114;
        v700 = (LPCWSTR)v76;
        *(_DWORD *)v76 = 1869771365;
        nullsub_1(v77);
        v78 = sub_140001650(35, 1);
        if ( !v78 )
          sub_1416C2D4B(1, 35);
        *(_OWORD *)(v78 + 16) = xmmword_14178C1AD;
        *(__m128i *)v78 = _mm_loadu_si128((const __m128i *)&xmmword_14178C19D);
        v689 = v78;
        *(_DWORD *)(v78 + 31) = -1498617971;
        phkResult.m256i_i64[0] = v5;
        phkResult.m256i_i64[1] = v5 + *((_QWORD *)&v5 + 1);
        phkResult.m256i_i64[2] = 20;
        sub_1408CD3D0(lpSubKey, (__int64)&phkResult);
        v644.m128i_i64[0] = (__int64)lpSubKey;
        v644.m128i_i64[1] = (__int64)sub_1400015F0;
        sub_14149C0F0(&phkResult, &unk_14178C1C0, &v644);
        if ( lpSubKey[0] )
          sub_140001660(lpSubKey[1], lpSubKey[0], 1);
        v70 = &v671;
        v71 = (__int64 *)&v670 + 1;
        v72 = (__int64 *)&v670;
        v703 = (__m256i *)((char *)&v669 + 8);
        v697 = &v669;
        v679 = (__int128 *)((char *)&v668 + 8);
        v73 = (__int64 *)&v668;
        v4 = (__int128 *)((char *)&v667 + 8);
        *(__m128i *)&v671.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&phkResult);
        v671.m256i_i64[3] = phkResult.m256i_i64[2];
        *(_QWORD *)&v667 = 14;
        *((_QWORD *)&v5 + 1) = 35;
        v79 = 5;
        v80 = 14;
        *(_QWORD *)&v5 = v698;
        v81 = v700;
        v82 = v689;
        goto LABEL_85;
      }
      phkResult.m256i_i64[0] = 0;
      phkResult.m256i_i64[1] = *((_QWORD *)&v5 + 1);
      *(_OWORD *)&phkResult.m256i_u64[2] = v5;
      *(_QWORD *)&v691 = 0;
      *((_QWORD *)&v691 + 1) = *((_QWORD *)&v5 + 1);
      *(_QWORD *)&v692 = 0x2E0000002ELL;
      BYTE8(v692) = 1;
      *(_WORD *)v693 = 1;
      sub_14031B430(lpSubKey, &phkResult);
      if ( (_QWORD)v661 == 3 )
      {
        v143 = *(_QWORD *)lpSubKey[1];
        v700 = lpSubKey[1];
        sub_140443B90(&phkResult, &unk_14178B744, v143, *((_QWORD *)lpSubKey[1] + 1));
        if ( phkResult.m256i_i64[0] != -1 )
        {
          if ( phkResult.m256i_i64[0] )
            sub_140001660(phkResult.m256i_i64[1], phkResult.m256i_i64[0], 1);
          sub_140443B90(&phkResult, &unk_14178B744, *((_QWORD *)v700 + 2), *((_QWORD *)v700 + 3));
          if ( phkResult.m256i_i64[0] != -1 )
          {
            if ( phkResult.m256i_i64[0] )
              sub_140001660(phkResult.m256i_i64[1], phkResult.m256i_i64[0], 1);
            if ( lpSubKey[0] )
              sub_140001660(v700, 16 * (__int64)lpSubKey[0], 8);
            sub_140797030((unsigned int)&v667, (unsigned int)aAuthIntegrity, 14, (unsigned int)&unk_14178C187, 22);
            sub_1400104F0(hKey);
            goto LABEL_87;
          }
        }
      }
      if ( lpSubKey[0] )
        sub_140001660(lpSubKey[1], 16 * (__int64)lpSubKey[0], 8);
      nullsub_1(v142);
      v144 = (void *)sub_140001650(14, 1);
      if ( !v144 )
        sub_1416C2D4B(1, 14);
      v146 = (__int64)v144;
      qmemcpy(v144, "auth_integrity", 14);
      nullsub_1(v145);
      v147 = (_DWORD *)sub_140001650(7, 1);
      v689 = v146;
      if ( !v147 )
        sub_1416C2D4B(1, 7);
      *(_QWORD *)&v5 = v147;
      *(_DWORD *)((char *)v147 + 3) = 1735289198;
      *v147 = 1852989815;
      nullsub_1(v148);
      v149 = sub_140001650(35, 1);
      if ( !v149 )
      {
        v698 = v5;
        sub_1416C2D4B(1, 35);
      }
      *(_OWORD *)(v149 + 16) = xmmword_14178C13A;
      *(__m128i *)v149 = _mm_loadu_si128((const __m128i *)&xmmword_14178C12A);
      v700 = (LPCWSTR)v149;
      *(_DWORD *)(v149 + 31) = -1195842174;
      nullsub_1(v150);
      *((_QWORD *)&v5 + 1) = 58;
      v82 = sub_140001650(58, 1);
      if ( !v82 )
      {
        v698 = v5;
        sub_1416C2D4B(1, 58);
      }
      *(_OWORD *)(v82 + 42) = *(__int128 *)((char *)&xmmword_14178C16D + 10);
      *(_OWORD *)(v82 + 32) = xmmword_14178C16D;
      *(_OWORD *)(v82 + 16) = xmmword_14178C15D;
      *(__m128i *)v82 = _mm_loadu_si128((const __m128i *)&xmmword_14178C14D);
      *(_QWORD *)&v667 = 14;
      *((_QWORD *)&v667 + 1) = v689;
      *(_QWORD *)&v668 = 14;
      *((_QWORD *)&v668 + 1) = 7;
      v79 = 35;
      v80 = 7;
    }
    else
    {
      v83 = sub_141433D50(aOpenaiApiKey_5, 14, hKey);
      if ( v83 )
      {
        if ( *(_BYTE *)v83 == 3 && *(_QWORD *)(v83 + 24) > 2u )
        {
          v85 = *(unsigned __int16 **)(v83 + 16);
          v84 = *v85 ^ 0x6B73u;
          if ( !(*v85 ^ 0x6B73 | *((unsigned __int8 *)v85 + 2) ^ 0x2D) )
          {
            sub_140797030((unsigned int)&v667, (unsigned int)aAuthIntegrity, 14, (unsigned int)&unk_14178C106, 36);
            goto LABEL_86;
          }
        }
      }
      nullsub_1(v84);
      v86 = (void *)sub_140001650(14, 1);
      if ( !v86 )
        sub_1416C2D4B(1, 14);
      v88 = (__int64)v86;
      qmemcpy(v86, "auth_integrity", 14);
      nullsub_1(v87);
      v89 = sub_140001650(5, 1);
      v689 = v88;
      if ( !v89 )
        sub_1416C2D4B(1, 5);
      *(_QWORD *)&v5 = v89;
      *(_BYTE *)(v89 + 4) = 114;
      *(_DWORD *)v89 = 1869771365;
      nullsub_1(v90);
      v91 = sub_140001650(29, 1);
      if ( !v91 )
      {
        v698 = v5;
        sub_1416C2D4B(1, 29);
      }
      *(_OWORD *)(v91 + 13) = *(__int128 *)((char *)&xmmword_14178C088 + 13);
      v700 = (LPCWSTR)v91;
      *(__m128i *)v91 = _mm_loadu_si128((const __m128i *)&xmmword_14178C088);
      nullsub_1(v92);
      *((_QWORD *)&v5 + 1) = 97;
      v82 = sub_140001650(97, 1);
      if ( !v82 )
      {
        v698 = v5;
        sub_1416C2D4B(1, 97);
      }
      *(_OWORD *)(v82 + 80) = xmmword_14178C0F5;
      *(_OWORD *)(v82 + 64) = xmmword_14178C0E5;
      *(_OWORD *)(v82 + 48) = xmmword_14178C0D5;
      *(_OWORD *)(v82 + 32) = xmmword_14178C0C5;
      *(_OWORD *)(v82 + 16) = xmmword_14178C0B5;
      *(__m128i *)v82 = _mm_loadu_si128((const __m128i *)&xmmword_14178C0A5);
      *(_BYTE *)(v82 + 96) = -70;
      *(_QWORD *)&v667 = 14;
      *((_QWORD *)&v667 + 1) = v689;
      *(_QWORD *)&v668 = 14;
      *((_QWORD *)&v668 + 1) = 5;
      v79 = 29;
      v80 = 5;
    }
    v81 = v700;
LABEL_85:
    *(_QWORD *)v4 = v5;
    *v73 = v80;
    *(_QWORD *)v679 = v79;
    *(_QWORD *)v697 = v81;
    v703->m256i_i64[0] = v79;
    *v72 = *((_QWORD *)&v5 + 1);
    *v71 = v82;
    v70->m256i_i64[0] = *((_QWORD *)&v5 + 1);
    LOBYTE(v672) = 1;
    goto LABEL_86;
  }
  v45 = lpSubKey[1];
  v644.m128i_i64[0] = (__int64)lpSubKey[1];
  nullsub_1(v38);
  v46 = (void *)sub_140001650(14, 1);
  if ( !v46 )
  {
    v619 = v45;
    sub_1416C2D4B(1, 14);
  }
  *((_QWORD *)&v706 + 1) = v46;
  qmemcpy(v46, "auth_integrity", 14);
  nullsub_1(0x746E695F68747561LL);
  v47 = sub_140001650(5, 1);
  if ( !v47 )
    sub_1416C2D4B(1, 5);
  *(_BYTE *)(v47 + 4) = 114;
  *((_QWORD *)&v704 + 1) = v47;
  *(_DWORD *)v47 = 1869771365;
  nullsub_1(v48);
  v49 = sub_140001650(22, 1);
  if ( !v49 )
    sub_1416C2D4B(1, 22);
  *(__m128i *)v49 = _mm_loadu_si128(&xmmword_14178C27F);
  v703 = (__m256i *)v49;
  *(_QWORD *)(v49 + 14) = 0x968FE5BBAFE895B3uLL;
  hKey[0] = (HKEY)&v644;
  hKey[1] = (HKEY)sub_141490720;
  sub_14149C0F0(&phkResult, &unk_141787117, hKey);
  *(__m128i *)&v671.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&phkResult);
  v671.m256i_i64[3] = phkResult.m256i_i64[2];
  *(_QWORD *)&v667 = 14;
  *((_QWORD *)&v667 + 1) = *((_QWORD *)&v706 + 1);
  *(_QWORD *)&v668 = 14;
  *((_QWORD *)&v668 + 1) = 5;
  *(_QWORD *)&v669 = *((_QWORD *)&v704 + 1);
  *((_QWORD *)&v669 + 1) = 5;
  *(_QWORD *)&v670 = 22;
  *((_QWORD *)&v670 + 1) = v703;
  v671.m256i_i64[0] = 22;
  LOBYTE(v672) = 1;
  v707 = 1;
  sub_1401DD260(v644.m128i_i64[0]);
LABEL_89:
  v562 = v568;
  v561 = v567;
  v93 = _mm_load_si128(&v563);
  v560 = v566;
  v559 = v565;
  v558 = v564;
  v557 = v93;
  sub_14076A8B0(v553, v699, v704);
  *((_QWORD *)&v5 + 1) = (char *)&v626 + 8;
  v95 = *(unsigned __int8 *)(v706 + 292);
  if ( !(_BYTE)v95 )
  {
    nullsub_1(v94);
    v101 = (_QWORD *)sub_140001650(13, 1);
    if ( !v101 )
      sub_1416C2D4B(1, 13);
    v103 = v101;
    qmemcpy(v101, "proxy_running", 13);
    nullsub_1(v102);
    v104 = (_WORD *)sub_140001650(2, 1);
    if ( !v104 )
    {
      v705 = v103;
      sub_1416C2D4B(1, 2);
    }
    v106 = v104;
    *v104 = 27503;
    nullsub_1(v105);
    v107 = sub_140001650(54, 1);
    if ( !v107 )
    {
      *(_QWORD *)&v706 = v106;
      v705 = v103;
      sub_1416C2D4B(1, 54);
    }
    *(_OWORD *)(v107 + 32) = xmmword_14178BEF8;
    *(_OWORD *)(v107 + 16) = xmmword_14178BEE8;
    *(__m128i *)v107 = _mm_loadu_si128((const __m128i *)&xmmword_14178BED8);
    *(_QWORD *)(v107 + 46) = 0x89BCEF8BB5E680A3uLL;
    *(_QWORD *)&v622 = 13;
    *((_QWORD *)&v622 + 1) = v103;
    *(_QWORD *)&v623 = 13;
    *((_QWORD *)&v623 + 1) = 2;
    *(_QWORD *)&v624 = v106;
    *((_QWORD *)&v624 + 1) = 2;
    v625.m128i_i64[0] = 54;
    v625.m128i_i64[1] = v107;
    *(_QWORD *)&v626 = 54;
    goto LABEL_98;
  }
  v96 = *(_BYTE *)(v706 + 122);
  nullsub_1(v94);
  v97 = (void *)sub_140001650(13, 1);
  v99 = v97;
  if ( v96 )
  {
    if ( !v97 )
      sub_1416C2D4B(1, 13);
    *((_QWORD *)&v706 + 1) = v97;
    qmemcpy(v97, "proxy_running", 13);
    nullsub_1(v98);
    v100 = (_WORD *)sub_140001650(2, 1);
    if ( !v100 )
      sub_1416C2D4B(1, 2);
    *((_QWORD *)&v704 + 1) = v100;
    *v100 = 27503;
    lpSubKey[0] = (LPCWSTR)(v706 + 120);
    lpSubKey[1] = (LPCWSTR)sub_1414AAE30;
    sub_14149C0F0(&phkResult, &unk_14178BF49, lpSubKey);
    *(_QWORD *)&v622 = 13;
    *((_QWORD *)&v622 + 1) = *((_QWORD *)&v706 + 1);
    *(_QWORD *)&v623 = 13;
    *((_QWORD *)&v623 + 1) = 2;
    *(_QWORD *)&v624 = *((_QWORD *)&v704 + 1);
    *((_QWORD *)&v624 + 1) = 2;
    v625 = _mm_loadu_si128((const __m128i *)&phkResult);
    *(_QWORD *)&v626 = phkResult.m256i_i64[2];
LABEL_98:
    *(_QWORD *)&v5 = -1;
    goto LABEL_110;
  }
  if ( !v97 )
    sub_1416C2D4B(1, 13);
  qmemcpy(v97, "proxy_running", 13);
  nullsub_1(v98);
  v108 = sub_140001650(5, 1);
  if ( !v108 )
  {
    *((_QWORD *)&v706 + 1) = v99;
    sub_1416C2D4B(1, 5);
  }
  v110 = (__m256i *)v108;
  *(_BYTE *)(v108 + 4) = 114;
  *(_DWORD *)v108 = 1869771365;
  nullsub_1(v109);
  v111 = sub_140001650(21, 1);
  if ( !v111 )
  {
    v703 = v110;
    *((_QWORD *)&v706 + 1) = v99;
    sub_1416C2D4B(1, 21);
  }
  *(__m128i *)v111 = _mm_loadu_si128(&xmmword_14178BF0E);
  v112 = 0x8CA1E890BFE8AA9CuLL;
  *((_QWORD *)&v704 + 1) = v111;
  *(_QWORD *)(v111 + 13) = 0x8CA1E890BFE8AA9CuLL;
  if ( *(_QWORD *)(v706 + 96) == -1 )
  {
    v113 = -1;
  }
  else
  {
    v703 = v110;
    *((_QWORD *)&v706 + 1) = v99;
    sub_14149C500(&phkResult, v706 + 96);
    v4 = (__int128 *)phkResult.m256i_i64[1];
    v113 = phkResult.m256i_i64[0];
    *(_QWORD *)&v5 = phkResult.m256i_i64[2];
    v99 = *((void **)&v706 + 1);
    v110 = v703;
  }
  nullsub_1(v112);
  v114 = sub_140001650(38, 1);
  if ( !v114 )
  {
    *(_QWORD *)&v706 = v4;
    v705 = (_QWORD *)v113;
    v703 = v110;
    *((_QWORD *)&v706 + 1) = v99;
    sub_1416C2D4B(1, 38);
  }
  *(_OWORD *)(v114 + 16) = xmmword_14178BF33;
  *(__m128i *)v114 = _mm_loadu_si128((const __m128i *)&xmmword_14178BF23);
  *(_QWORD *)(v114 + 30) = 0xB7B5E8898BE6A88AuLL;
  if ( v113 == -1 )
  {
    *(_QWORD *)&v5 = 38;
    v4 = (__int128 *)v114;
    v113 = 38;
  }
  else
  {
    sub_140001660(v114, 38, 1);
  }
  *((_QWORD *)&v5 + 1) = (char *)&v627 + 8;
  *(_QWORD *)&v622 = 13;
  *((_QWORD *)&v622 + 1) = v99;
  *(_QWORD *)&v623 = 13;
  *((_QWORD *)&v623 + 1) = 5;
  *(_QWORD *)&v624 = v110;
  *((_QWORD *)&v624 + 1) = 5;
  v625.m128i_i64[0] = 21;
  v625.m128i_i64[1] = *((_QWORD *)&v704 + 1);
  *(_QWORD *)&v626 = 21;
  *((_QWORD *)&v626 + 1) = v113;
  *(_QWORD *)&v627 = v4;
LABEL_110:
  **((_QWORD **)&v5 + 1) = v5;
  LOBYTE(v628) = 0;
  v115 = v704;
  check_config_third_party((__int64)v551, v699, v704, (__int64)&si128);
  sub_140786130(v549, v699, v115, v95);
  v116 = v706;
  sub_1407609C0(v547, v699, v115, v706);
  check_router_http_contract(v545, v699, v115, v116);
  v117 = v95 ^ 1;
  verify_invariants_with_depth((__int64)&v644, v705, v95 ^ 1, 0);
  sub_1407609C0(&phkResult, v699, v704, v706);
  v119 = 1;
  if ( *((_QWORD *)&v691 + 1) == 2 )
    v119 = *(_WORD *)v691 != 27503;
  if ( phkResult.m256i_i64[0] )
    sub_140001660(phkResult.m256i_i64[1], phkResult.m256i_i64[0], 1);
  if ( phkResult.m256i_i64[3] )
    sub_140001660(v691, phkResult.m256i_i64[3], 1);
  if ( (_QWORD)v692 )
    sub_140001660(*((_QWORD *)&v692 + 1), v692, 1);
  if ( *(_QWORD *)&v693[8] != -1 && *(_QWORD *)&v693[8] )
    sub_140001660(*(_QWORD *)&v693[16], *(_QWORD *)&v693[8], 1);
  LOBYTE(v679) = v95;
  if ( !v119 )
  {
    v120 = v645;
    if ( !(_QWORD)v645 )
      goto LABEL_184;
    goto LABEL_128;
  }
  v120 = v645;
  if ( (_QWORD)v645 )
  {
    v121 = v644.m128i_i64[1];
    v122 = (const __m128i *)(v644.m128i_i64[1] + 32);
    v123 = 0;
    while ( v122[-1].m128i_i8[8] )
    {
      ++v123;
      v122 += 2;
      if ( (_QWORD)v645 == v123 )
        goto LABEL_128;
    }
    v151 = v122[-2].m128i_i64[0];
    if ( v151 )
      sub_140001660(v122[-2].m128i_i64[1], v151, 1);
    if ( v123 + 1 < v120 )
    {
      v152 = v120 + ~v123;
      do
      {
        if ( v122[1].m128i_i8[8] )
        {
          v153 = 32 * v123;
          v154 = _mm_loadu_si128(v122);
          *(__m128i *)(v121 + v153 + 16) = v122[1];
          *(__m128i *)(v121 + v153) = v154;
          ++v123;
        }
        else if ( v122->m128i_i64[0] )
        {
          sub_140001660(v122->m128i_i64[1], v122->m128i_i64[0], 1);
        }
        v122 += 2;
        --v152;
      }
      while ( v152 );
    }
    *(_QWORD *)&v645 = v123;
    v120 = v123;
    v95 = (unsigned __int8)v679;
    if ( v123 )
    {
LABEL_128:
      v124 = v644.m128i_i64[1];
      v125 = (const __m128i *)(v644.m128i_i64[1] + 32);
      v126 = 0;
      while ( v125[-1].m128i_i8[8] != 4 )
      {
        ++v126;
        v125 += 2;
        if ( v120 == v126 )
          goto LABEL_131;
      }
      v138 = v125[-2].m128i_i64[0];
      if ( v138 )
        sub_140001660(v125[-2].m128i_i64[1], v138, 1);
      if ( v126 + 1 < v120 )
      {
        v139 = v120 + ~v126;
        do
        {
          if ( v125[1].m128i_i8[8] == 4 )
          {
            if ( v125->m128i_i64[0] )
              sub_140001660(v125->m128i_i64[1], v125->m128i_i64[0], 1);
          }
          else
          {
            v140 = 32 * v126;
            v141 = _mm_loadu_si128(v125);
            *(__m128i *)(v124 + v140 + 16) = v125[1];
            *(__m128i *)(v124 + v140) = v141;
            ++v126;
          }
          v125 += 2;
          --v139;
        }
        while ( v139 );
      }
      *(_QWORD *)&v645 = v126;
      v120 = v126;
      v95 = (unsigned __int8)v679;
      if ( v126 )
      {
LABEL_131:
        nullsub_1(v118);
        v127 = (__m128i *)sub_140001650(20, 1);
        if ( !v127 )
          sub_1416C2D4B(1, 20);
        *v127 = _mm_loadu_si128((const __m128i *)aRouterPostcond);
        *((_QWORD *)&v706 + 1) = v127;
        v127[1].m128i_i32[0] = 1852795252;
        nullsub_1(v128);
        v129 = sub_140001650(2LL * v117 + 5, 1);
        if ( !v129 )
          sub_1416C2D4B(1, 2LL * v117 + 5);
        v130 = aWarningerror;
        if ( (_BYTE)v95 )
          v130 = &aWarningerror[7];
        v703 = (__m256i *)v129;
        *((_QWORD *)&v704 + 1) = 2LL * v117 + 5;
        sub_141684120(v129, v130, *((_QWORD *)&v704 + 1));
        hKey[0] = (HKEY)v120;
        lpSubKey[0] = (LPCWSTR)hKey;
        lpSubKey[1] = (LPCWSTR)sub_1414AC520;
        sub_14149C0F0(&phkResult, &unk_14178DCD6, lpSubKey);
        v700 = (LPCWSTR)phkResult.m256i_i64[1];
        v697 = (__int128 *)phkResult.m256i_i64[0];
        v131 = phkResult.m256i_i64[2];
        sub_140328B20(lpSubKey, v124, v124 + 32 * v120);
        v132 = lpSubKey[1];
        v133 = v661;
        sub_140440300((unsigned int)&phkResult, lpSubKey[1], v661, (unsigned int)&unk_14178CCCE, 3);
        *(_QWORD *)&v681 = phkResult.m256i_i64[2];
        *(_OWORD *)hKey = *(_OWORD *)phkResult.m256i_i8;
        if ( v133 )
        {
          v134 = v132 + 4;
          do
          {
            v135 = *(v134 - 1);
            if ( v135 )
              sub_140001660(*v134, v135, 1);
            v134 += 3;
            --v133;
          }
          while ( v133 );
        }
        if ( lpSubKey[0] )
          sub_140001660(v132, 24 * (__int64)lpSubKey[0], 8);
        *(__m128i *)&v579.m256i_u64[1] = _mm_load_si128((const __m128i *)hKey);
        v579.m256i_i64[3] = v681;
        *(_QWORD *)&v575 = 20;
        *((_QWORD *)&v575 + 1) = *((_QWORD *)&v706 + 1);
        *(_QWORD *)&v576 = 20;
        *((_QWORD *)&v576 + 1) = *((_QWORD *)&v704 + 1);
        *(_QWORD *)&v577 = v703;
        *((_QWORD *)&v577 + 1) = *((_QWORD *)&v704 + 1);
        *(_QWORD *)&v578 = v697;
        *((_QWORD *)&v578 + 1) = v700;
        v579.m256i_i64[0] = v131;
        LOBYTE(v580) = 1;
        v136 = (_QWORD *)(v124 + 8);
        do
        {
          v137 = *(v136 - 1);
          if ( v137 )
            sub_140001660(*v136, v137, 1);
          v136 += 4;
          --v120;
        }
        while ( v120 );
        goto LABEL_191;
      }
    }
  }
LABEL_184:
  v155 = &unk_14178DC76;
  if ( (_BYTE)v95 )
    v155 = &unk_14178DC5E;
  v156 = 71;
  if ( !v119 )
    v156 = (unsigned __int8)v95 ^ 0x19LL;
  v157 = &unk_14178DC8F;
  if ( !v119 )
    LODWORD(v157) = (_DWORD)v155;
  sub_140797030((unsigned int)&v575, (unsigned int)aRouterPostcond, 20, (_DWORD)v157, v156);
LABEL_191:
  if ( v644.m128i_i64[0] )
    sub_140001660(v644.m128i_i64[1], 32 * v644.m128i_i64[0], 8);
  v158 = v705;
  check_takeover_backup_orphan(v543, v705, v95);
  v159 = (__int128 *)v158[97];
  v160 = v158[98];
  sub_14077D8A0((unsigned int)v541, v699, v704, (_DWORD)v159, v160, v95);
  sub_14078D200(v539, v158, v95);
  sub_14076BC20((__int64)v537, (__int64)v158, (int)&v602, v95);
  sub_140787E50(v535, v158);
  sub_14078E5C0(v533, v158, v95);
  sub_14078FD60(v531, v158, v95);
  sub_14078EC40(v529, v158);
  sub_140786890(v527, v158, v95);
  sub_141473FA0((unsigned int)&phkResult, (_DWORD)v159, v160, (unsigned int)&unk_14178BDE1, 24);
  *((_QWORD *)&v706 + 1) = phkResult.m256i_i64[1];
  sub_141473FA0(
    (unsigned int)lpSubKey,
    phkResult.m256i_i32[2],
    phkResult.m256i_i32[4],
    (unsigned int)&unk_14178C424,
    12);
  if ( phkResult.m256i_i64[0] )
    sub_140001660(*((_QWORD *)&v706 + 1), phkResult.m256i_i64[0], 1);
  *((LPCWSTR *)&v706 + 1) = lpSubKey[1];
  sub_141486710(&phkResult, lpSubKey[1], v661);
  if ( phkResult.m256i_i32[0] == 2 )
  {
    sub_1401DD260(phkResult.m256i_i64[1]);
    sub_140797030((unsigned int)&v590, (unsigned int)aResidualManife, 17, (unsigned int)&unk_14178CCD1, 24);
    goto LABEL_199;
  }
  if ( (_BYTE)v95 )
  {
    sub_140797030((unsigned int)&v590, (unsigned int)aResidualManife, 17, (unsigned int)&unk_14178CD47, 52);
LABEL_199:
    v162 = lpSubKey[0];
    if ( !lpSubKey[0] )
      goto LABEL_201;
    goto LABEL_200;
  }
  nullsub_1(v161);
  v172 = (__m128i *)sub_140001650(17, 1);
  if ( !v172 )
    sub_1416C2D4B(1, 17);
  v174 = (__int64 *)v172;
  *v172 = _mm_loadu_si128((const __m128i *)aResidualManife);
  v172[1].m128i_i8[0] = 116;
  nullsub_1(v173);
  v175 = (_DWORD *)sub_140001650(7, 1);
  if ( !v175 )
  {
    v705 = v174;
    sub_1416C2D4B(1, 7);
  }
  v177 = v175;
  *(_DWORD *)((char *)v175 + 3) = 1735289198;
  *v175 = 1852989815;
  nullsub_1(v176);
  v178 = sub_140001650(43, 1);
  if ( !v178 )
  {
    *(_QWORD *)&v706 = v177;
    v705 = v174;
    sub_1416C2D4B(1, 43);
  }
  v180 = v178;
  *(_OWORD *)(v178 + 27) = *(__int128 *)((char *)&xmmword_14178CCF9 + 11);
  *(_OWORD *)(v178 + 16) = xmmword_14178CCF9;
  *(__m128i *)v178 = _mm_loadu_si128((const __m128i *)&xmmword_14178CCE9);
  nullsub_1(v179);
  v181 = sub_140001650(51, 1);
  if ( !v181 )
  {
    v702 = v180;
    *(_QWORD *)&v706 = v177;
    v705 = v174;
    sub_1416C2D4B(1, 51);
  }
  *(_OWORD *)(v181 + 32) = xmmword_14178CD34;
  *(_OWORD *)(v181 + 16) = xmmword_14178CD24;
  *(__m128i *)v181 = _mm_loadu_si128((const __m128i *)&xmmword_14178CD14);
  *(_DWORD *)(v181 + 47) = -1115428705;
  *(_QWORD *)&v590 = 17;
  *((_QWORD *)&v590 + 1) = v174;
  *(_QWORD *)&v591 = 17;
  *((_QWORD *)&v591 + 1) = 7;
  *(_QWORD *)&v592 = v177;
  *((_QWORD *)&v592 + 1) = 7;
  *(_QWORD *)&v593 = 43;
  *((_QWORD *)&v593 + 1) = v180;
  *(_QWORD *)&v594 = 43;
  *((_QWORD *)&v594 + 1) = 51;
  *(_QWORD *)&v595 = v181;
  *((_QWORD *)&v595 + 1) = 51;
  LOBYTE(v596) = 1;
  v162 = lpSubKey[0];
  if ( lpSubKey[0] )
LABEL_200:
    sub_140001660(*((_QWORD *)&v706 + 1), v162, 1);
LABEL_201:
  sub_141473FA0((unsigned int)&phkResult, (_DWORD)v159, v160, (unsigned int)&unk_14178BDE1, 24);
  *((_QWORD *)&v706 + 1) = phkResult.m256i_i64[1];
  sub_141473FA0((unsigned int)hKey, phkResult.m256i_i32[2], phkResult.m256i_i32[4], (unsigned int)&unk_14178BDF9, 22);
  if ( phkResult.m256i_i64[0] )
    sub_140001660(*((_QWORD *)&v706 + 1), phkResult.m256i_i64[0], 1);
  v163 = v681;
  v703 = (__m256i *)hKey[1];
  sub_141486710(&phkResult, hKey[1], v681);
  v697 = v159;
  if ( phkResult.m256i_i32[0] != 2 )
  {
    sub_14148D130(&phkResult, v703, v163);
    if ( phkResult.m256i_i64[0] == -1 )
    {
      nullsub_1(v164);
      v182 = (_QWORD *)sub_140001650(14, 1);
      if ( !v182 )
        sub_1416C2D4B(1, 14);
      v184 = v182;
      qmemcpy(v182, "residual_cache", 14);
      nullsub_1(v183);
      v185 = (_DWORD *)sub_140001650(7, 1);
      if ( !v185 )
      {
        v705 = v184;
        sub_1416C2D4B(1, 7);
      }
      v187 = v185;
      *(_DWORD *)((char *)v185 + 3) = 1735289198;
      *v185 = 1852989815;
      nullsub_1(v186);
      v188 = sub_140001650(36, 1);
      if ( !v188 )
      {
        *(_QWORD *)&v706 = v187;
        v705 = v184;
        sub_1416C2D4B(1, 36);
      }
      *(_OWORD *)(v188 + 16) = xmmword_14178C332;
      *(__m128i *)v188 = _mm_loadu_si128((const __m128i *)&xmmword_14178C322);
      *(_DWORD *)(v188 + 32) = -1768954437;
      *(_QWORD *)&v605 = 14;
      *((_QWORD *)&v605 + 1) = v184;
      *(_QWORD *)&v606 = 14;
      *((_QWORD *)&v606 + 1) = 7;
      *(_QWORD *)&v607 = v187;
      *((_QWORD *)&v607 + 1) = 7;
      *(_QWORD *)&v608 = 36;
      *((_QWORD *)&v608 + 1) = v188;
      *(_QWORD *)&v609 = 36;
      *((_QWORD *)&v609 + 1) = -1;
      LOBYTE(v611) = 1;
      sub_1401DD260(phkResult.m256i_i64[1]);
      goto LABEL_256;
    }
    v700 = (LPCWSTR)phkResult.m256i_i64[0];
    *(_OWORD *)phkResult.m256i_i8 = *(_OWORD *)&phkResult.m256i_u64[1];
    *(_OWORD *)&phkResult.m256i_u64[2] = 0;
    v689 = phkResult.m256i_i64[0];
    v691 = *(_OWORD *)phkResult.m256i_i8;
    sub_1408A6200(lpSubKey, &phkResult);
    if ( LOBYTE(lpSubKey[0]) == 0xFF )
    {
      sub_1406C9CF0((__int64)lpSubKey);
    }
    else
    {
      v165 = _mm_loadu_si128((const __m128i *)((char *)lpSubKey + 1));
      *(_OWORD *)&phkResult.m256i_u64[2] = v661;
      *(__m128i *)&phkResult.m256i_i8[1] = v165;
      phkResult.m256i_i8[0] = (__int8)lpSubKey[0];
      v166 = sub_141433D50(aEntries_1, 7, &phkResult);
      if ( v166 )
      {
        v167 = -1;
        if ( *(_BYTE *)v166 == 4 )
        {
          sub_1402CE260(lpSubKey, *(_QWORD *)(v166 + 16), *(_QWORD *)(v166 + 24));
          v167 = (__int64)lpSubKey[0];
          v644 = _mm_loadu_si128((const __m128i *)&lpSubKey[1]);
        }
        sub_1400104F0(&phkResult);
        if ( v167 != -1 )
        {
          v168 = _mm_load_si128(&v644);
          *(__m128i *)&phkResult.m256i_u64[1] = v168;
          v642 = v167;
          phkResult.m256i_i64[0] = v167;
          __SET_PAIR__(*((unsigned __int64 *)&v704 + 1), v169, *(_OWORD *)&v168);
          v698 = v168.m128i_i64[0];
          if ( v168.m128i_i64[1] )
          {
            v643 = v160;
            v170 = v168.m128i_i64[0] + 32 * v168.m128i_i64[1];
            v598 = *((_QWORD *)&v603 + 1);
            v631 = v602.m128i_i64[1];
            *((_QWORD *)&v706 + 1) = v602.m128i_i64[0];
            v171 = v168.m128i_i64[0];
            do
            {
              v197 = sub_141433D50(
                       "modelROLLBACKrecency_at_msupdated_at_msupdated_atarchivedstate_.sqlitesqlite_home",
                       5,
                       v171);
              if ( v197 )
              {
                if ( *(_BYTE *)v197 == 3 )
                {
                  v198 = *(_QWORD *)(v197 + 24);
                  if ( v198 >= 0xD )
                  {
                    v199 = *(_QWORD **)(v197 + 16);
                    if ( !(*v199 ^ 0x725F696D616D6961LL | *(_QWORD *)((char *)v199 + 5) ^ 0x5F79616C65725F69LL) )
                    {
                      v202 = 1;
                      if ( !v598 )
                        goto LABEL_240;
                      v195 = sub_1403795A0(&v604, v199, v198);
                      v200 = _mm_cvtsi32_si128(v195 >> 57);
                      v201 = _mm_shuffle_epi32(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v200, v200), 0), 68);
                      for ( i = 0; ; i += 16 )
                      {
                        v189 = v631 & v195;
                        HIDWORD(_RAX) = HIDWORD(v706);
                        v191 = _mm_loadu_si128((const __m128i *)(*((_QWORD *)&v706 + 1) + v189));
                        _R12D = _mm_movemask_epi8(_mm_cmpeq_epi8(v191, v201));
                        if ( _R12D )
                          break;
LABEL_229:
                        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v191, (__m128i)-1LL)) )
                        {
                          LODWORD(v159) = (_DWORD)v697;
                          v160 = v643;
                          v169 = v698;
                          v202 = 1;
                          goto LABEL_242;
                        }
                        v195 = i + v189 + 16;
                      }
                      while ( 1 )
                      {
                        __asm { tzcnt   eax, r12d }
                        v193 = v189;
                        v194 = -3LL * (v631 & (v189 + _RAX));
                        if ( v198 == *(_QWORD *)(*((_QWORD *)&v706 + 1) + 8 * v194 - 8)
                          && !(unsigned int)sub_1416847B0(
                                              v199,
                                              *(_QWORD *)(*((_QWORD *)&v706 + 1) + 8 * v194 - 16),
                                              v198) )
                        {
                          break;
                        }
                        _RAX = (unsigned int)(_R12D - 1);
                        LOWORD(_RAX) = _R12D & (_R12D - 1);
                        _R12D = _RAX;
                        v189 = v193;
                        if ( !(_WORD)_RAX )
                          goto LABEL_229;
                      }
                    }
                  }
                }
              }
              v171 += 32;
            }
            while ( v171 != v170 );
            v202 = 0;
LABEL_240:
            LODWORD(v159) = (_DWORD)v697;
            v160 = v643;
            v169 = v698;
          }
          else
          {
            v202 = 0;
          }
LABEL_242:
          *((_QWORD *)&v706 + 1) = 0;
          while ( *((_QWORD *)&v704 + 1) != *((_QWORD *)&v706 + 1) )
          {
            ++*((_QWORD *)&v706 + 1);
            v203 = v169 + 32;
            sub_1402C3260();
            v169 = v203;
          }
          if ( v642 )
            sub_140001660(v698, 32 * v642, 8);
          if ( v202 )
          {
            nullsub_1(v169);
            v204 = (_QWORD *)sub_140001650(14, 1);
            if ( !v204 )
              sub_1416C2D4B(1, 14);
            v206 = v204;
            qmemcpy(v204, "residual_cache", 14);
            nullsub_1(v205);
            v207 = (_DWORD *)sub_140001650(7, 1);
            if ( !v207 )
            {
              v705 = v206;
              sub_1416C2D4B(1, 7);
            }
            v209 = v207;
            *(_DWORD *)((char *)v207 + 3) = 1735289198;
            *v207 = 1852989815;
            nullsub_1(v208);
            v210 = sub_140001650(48, 1);
            if ( !v210 )
            {
              *(_QWORD *)&v706 = v209;
              v705 = v206;
              sub_1416C2D4B(1, 48);
            }
            v212 = v210;
            *(_OWORD *)(v210 + 32) = xmmword_14178C2E8;
            *(_OWORD *)(v210 + 16) = xmmword_14178C2D8;
            *(__m128i *)v210 = _mm_loadu_si128((const __m128i *)&xmmword_14178C2C8);
            nullsub_1(v211);
            v213 = sub_140001650(42, 1);
            if ( !v213 )
            {
              *((_QWORD *)&v706 + 1) = v212;
              *(_QWORD *)&v706 = v209;
              v705 = v206;
              sub_1416C2D4B(1, 42);
            }
            *(_OWORD *)(v213 + 26) = *(__int128 *)((char *)&xmmword_14178C308 + 10);
            *(_OWORD *)(v213 + 16) = xmmword_14178C308;
            *(__m128i *)v213 = _mm_loadu_si128((const __m128i *)&xmmword_14178C2F8);
            *(_QWORD *)&v605 = 14;
            *((_QWORD *)&v605 + 1) = v206;
            *(_QWORD *)&v606 = 14;
            *((_QWORD *)&v606 + 1) = 7;
            *(_QWORD *)&v607 = v209;
            *((_QWORD *)&v607 + 1) = 7;
            *(_QWORD *)&v608 = 48;
            *((_QWORD *)&v608 + 1) = v212;
            *(_QWORD *)&v609 = 48;
            *((_QWORD *)&v609 + 1) = 42;
            *(_QWORD *)&v610 = v213;
            *((_QWORD *)&v610 + 1) = 42;
            LOBYTE(v611) = 1;
            goto LABEL_254;
          }
        }
      }
      else
      {
        sub_1400104F0(&phkResult);
      }
    }
    sub_140797030((unsigned int)&v605, (unsigned int)aResidualCache, 14, (unsigned int)&unk_14178C2B0, 24);
LABEL_254:
    if ( v700 )
      sub_140001660(v689, v700, 1);
    goto LABEL_256;
  }
  sub_1401DD260(phkResult.m256i_i64[1]);
  sub_140797030((unsigned int)&v605, (unsigned int)aResidualCache, 14, (unsigned int)&unk_14178C295, 27);
LABEL_256:
  if ( hKey[0] )
    sub_140001660(v703, hKey[0], 1);
  v214 = v600;
  v215 = v601;
  sub_140764F00((unsigned int)v525, (_DWORD)v159, v160, v706, (__int64)v600, v601);
  hKey[0] = nullptr;
  hKey[1] = (HKEY)8;
  *(_QWORD *)&v681 = 0;
  v217 = &v214[v215];
  while ( v214 != v217 )
  {
    v219 = *v214++;
    if ( *(_BYTE *)(v219 + 228) )
    {
      get_api_key(&phkResult, (__int64)v705, *(_QWORD *)(v219 + 8), *(_QWORD *)(v219 + 16));
      v218 = phkResult.m256i_i64[1];
      v216 = phkResult.m256i_i64[0];
      if ( (phkResult.m256i_i8[0] | (phkResult.m256i_i64[1] == -1)) == 1 || !phkResult.m256i_i64[3] )
      {
        *(_QWORD *)&v706 = phkResult.m256i_i64[1];
        *((_QWORD *)&v706 + 1) = phkResult.m256i_i64[0];
        sub_14149C500(lpSubKey, v219 + 24);
        v220 = v681;
        if ( (HKEY)v681 == hKey[0] )
          sub_141689AB0(hKey);
        v221 = hKey[1];
        v216 = 3 * v220;
        *((_QWORD *)hKey[1] + v216 + 2) = v661;
        *(__m128i *)(v221 + 2 * v216) = _mm_loadu_si128((const __m128i *)lpSubKey);
        *(_QWORD *)&v681 = v220 + 1;
        if ( BYTE8(v706) )
        {
          v218 = v706;
          if ( (_QWORD)v706 )
            goto LABEL_260;
        }
        else
        {
          v218 = v706;
          if ( (unsigned __int64)(v706 - 1) < 0xFFFFFFFFFFFFFFFEuLL )
LABEL_260:
            sub_140001660(phkResult.m256i_i64[2], v218, 1);
        }
      }
      else if ( phkResult.m256i_i64[1] )
      {
        goto LABEL_260;
      }
    }
  }
  if ( (_QWORD)v681 )
  {
    nullsub_1(v216);
    v222 = (__m128i *)sub_140001650(17, 1);
    if ( !v222 )
      sub_1416C2D4B(1, 17);
    *v222 = _mm_loadu_si128((const __m128i *)aApiKeyIntegrit);
    *(_QWORD *)&v706 = v222;
    v222[1].m128i_i8[0] = 121;
    nullsub_1(v223);
    v224 = sub_140001650(5, 1);
    if ( !v224 )
      sub_1416C2D4B(1, 5);
    *(_BYTE *)(v224 + 4) = 114;
    *((_QWORD *)&v706 + 1) = v224;
    *(_DWORD *)v224 = 1869771365;
    v644.m128i_i64[0] = v681;
    lpSubKey[0] = (LPCWSTR)&v644;
    lpSubKey[1] = (LPCWSTR)sub_1414AC520;
    sub_14149C0F0(&phkResult, &unk_14178C60D, lpSubKey);
    v703 = (__m256i *)phkResult.m256i_i64[1];
    *((_QWORD *)&v704 + 1) = phkResult.m256i_i64[0];
    v225 = phkResult.m256i_i64[2];
    sub_140440300((unsigned int)&phkResult, hKey[1], v681, (unsigned int)&unk_141789F28, 2);
    *(_QWORD *)&v661 = phkResult.m256i_i64[2];
    *(__m128i *)lpSubKey = _mm_loadu_si128((const __m128i *)&phkResult);
    v644.m128i_i64[0] = (__int64)lpSubKey;
    v644.m128i_i64[1] = (__int64)sub_1400015F0;
    sub_14149C0F0(&phkResult, &unk_14178C62A, &v644);
    if ( lpSubKey[0] )
      sub_140001660(lpSubKey[1], lpSubKey[0], 1);
    *(__m128i *)&v573.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&phkResult);
    v573.m256i_i64[3] = phkResult.m256i_i64[2];
    *(_QWORD *)&v569 = 17;
    *((_QWORD *)&v569 + 1) = v706;
    *(_QWORD *)&v570 = 17;
    *((_QWORD *)&v570 + 1) = 5;
    *(_QWORD *)&v571 = *((_QWORD *)&v706 + 1);
    *((_QWORD *)&v571 + 1) = 5;
    *(_QWORD *)&v572 = *((_QWORD *)&v704 + 1);
    *((_QWORD *)&v572 + 1) = v703;
    v573.m256i_i64[0] = v225;
    LOBYTE(v574) = 0;
  }
  else
  {
    sub_140797030((unsigned int)&v569, (unsigned int)aApiKeyIntegrit, 17, (unsigned int)&unk_14178C5FD, 16);
  }
  v226 = v681;
  v227 = (unsigned __int8)v679;
  if ( (_QWORD)v681 )
  {
    v228 = hKey[1] + 2;
    do
    {
      v229 = *((_QWORD *)v228 - 1);
      if ( v229 )
        sub_140001660(*(_QWORD *)v228, v229, 1);
      v228 += 6;
      --v226;
    }
    while ( v226 );
  }
  if ( hKey[0] )
    sub_140001660(hKey[1], 24 * (__int64)hKey[0], 8);
  check_config_global_validity((unsigned int)v523, v699, v704, (_DWORD)v697, v160);
  v230 = 1;
  if ( (unsigned int)sub_140AECEB0(aChatgpt, 7) != 1 )
    v230 = (unsigned int)sub_140AECEB0(aCodex_0, 5) == 1;
  hKey[0] = HKEY_CURRENT_USER;
  phkResult.m256i_i64[0] = (__int64)&unk_14178B887;
  phkResult.m256i_i64[1] = (__int64)aDisplayversion_0;
  phkResult.m256i_i16[8] = 0;
  phkResult.m256i_i32[6] = 1;
  sub_14031FB40(lpSubKey, &phkResult);
  phkResult.m256i_i64[0] = 0;
  v231 = lpSubKey[1];
  v232 = (unsigned int)RegOpenKeyExW(hKey[0], lpSubKey[1], 0, 0x20019u, (PHKEY)&phkResult);
  v233 = (const WCHAR *)phkResult.m256i_i64[0];
  if ( lpSubKey[0] )
    sub_140001660(v231, 2 * (__int64)lpSubKey[0], 2);
  if ( (_DWORD)v232 )
  {
    sub_1401DD260((v232 << 32) | 2);
    v673.m128i_i64[0] = -1;
  }
  else
  {
    lpSubKey[0] = v233;
    sub_140B1C310(&phkResult, lpSubKey, aDisplayversion_0, 14);
    if ( phkResult.m256i_i64[0] == -1 )
    {
      v673.m128i_i64[0] = -1;
      sub_1401DD260(phkResult.m256i_i64[1]);
    }
    else
    {
      *(_QWORD *)&v674 = phkResult.m256i_i64[2];
      v673 = _mm_loadu_si128((const __m128i *)&phkResult);
    }
    sub_140FB8470(lpSubKey);
  }
  sub_140FB8470(hKey);
  if ( v230 )
  {
    v644.m128i_i64[0] = 0;
    v644.m128i_i64[1] = 8;
    *(_QWORD *)&v645 = 0;
    if ( v673.m128i_i64[0] != -1 )
    {
      lpSubKey[0] = (LPCWSTR)&v673;
      phkResult.m256i_i64[0] = (__int64)lpSubKey;
      phkResult.m256i_i64[1] = (__int64)sub_1406B5450;
      sub_14149C0F0(hKey, &unk_14178D4C3, &phkResult);
      v235 = v645;
      if ( (_QWORD)v645 == v644.m128i_i64[0] )
        sub_141689AB0(&v644);
      v236 = v644.m128i_i64[1];
      v234 = 3 * v235;
      *(_QWORD *)(v644.m128i_i64[1] + 8 * v234 + 16) = v681;
      *(__m128i *)(v236 + 8 * v234) = _mm_loadu_si128((const __m128i *)hKey);
      *(_QWORD *)&v645 = v235 + 1;
    }
    nullsub_1(v234);
    v237 = sub_140001650(19, 1);
    if ( !v237 )
      sub_1416C2D4B(1, 19);
    v239 = v237;
    *(__m128i *)v237 = _mm_loadu_si128(&xmmword_14178D461);
    *(_DWORD *)(v237 + 15) = 1702125940;
    nullsub_1(v238);
    v240 = (_WORD *)sub_140001650(2, 1);
    *(_QWORD *)&v706 = v239;
    if ( !v240 )
      sub_1416C2D4B(1, 2);
    *((_QWORD *)&v706 + 1) = v240;
    *v240 = 27503;
    if ( v673.m128i_i64[0] == -1 )
    {
      lpSubKey[0] = nullptr;
      lpSubKey[1] = (LPCWSTR)1;
      *(_QWORD *)&v661 = 0;
    }
    else
    {
      v612 = _mm_loadu_si128((const __m128i *)&v673.m128i_u64[1]);
      lpSubKey[0] = (LPCWSTR)&v612;
      lpSubKey[1] = (LPCWSTR)sub_14041F680;
      sub_14149C0F0(&phkResult, &unk_141788026, lpSubKey);
      *(__m128i *)lpSubKey = _mm_loadu_si128((const __m128i *)&phkResult);
      *(_QWORD *)&v661 = phkResult.m256i_i64[2];
    }
    v612.m128i_i64[0] = (__int64)lpSubKey;
    v612.m128i_i64[1] = (__int64)sub_1400015F0;
    sub_14149C0F0(&phkResult, &unk_14178D4CF, &v612);
    if ( lpSubKey[0] )
      sub_140001660(lpSubKey[1], lpSubKey[0], 1);
    v251 = *(_OWORD *)phkResult.m256i_i8;
    v252 = phkResult.m256i_i64[2];
    if ( (_QWORD)v645 )
    {
      v704 = *(_OWORD *)phkResult.m256i_i8;
      sub_140440300((unsigned int)&phkResult, v644.m128i_i32[2], v645, (unsigned int)&unk_14178D4E1, 3);
      v253 = phkResult.m256i_i64[0];
      *(__m128i *)lpSubKey = _mm_loadu_si128((const __m128i *)&phkResult.m256i_u64[1]);
      v254 = v645;
      v251 = v704;
    }
    else
    {
      v253 = -1;
      v254 = 0;
    }
    v612.m128i_i64[0] = 19;
    v612.m128i_i64[1] = v706;
    *(_QWORD *)&v613 = 19;
    *((_QWORD *)&v613 + 1) = 2;
    *(_QWORD *)&v614 = *((_QWORD *)&v706 + 1);
    *((_QWORD *)&v614 + 1) = 2;
    v615 = v251;
    *(_QWORD *)&v616 = v252;
    *((_QWORD *)&v616 + 1) = v253;
    v617 = _mm_load_si128((const __m128i *)lpSubKey);
    LOBYTE(v618) = 0;
    if ( v254 )
    {
      v255 = (_QWORD *)(v644.m128i_i64[1] + 8);
      do
      {
        v256 = *(v255 - 1);
        if ( v256 )
          sub_140001660(*v255, v256, 1);
        v255 += 3;
        --v254;
      }
      while ( v254 );
    }
    if ( v644.m128i_i64[0] )
      sub_140001660(v644.m128i_i64[1], 24 * v644.m128i_i64[0], 8);
  }
  else
  {
    nullsub_1(v234);
    v241 = sub_140001650(19, 1);
    if ( !v241 )
      sub_1416C2D4B(1, 19);
    v243 = (_QWORD *)v241;
    *(__m128i *)v241 = _mm_loadu_si128(&xmmword_14178D461);
    *(_DWORD *)(v241 + 15) = 1702125940;
    nullsub_1(v242);
    v244 = (_WORD *)sub_140001650(2, 1);
    if ( !v244 )
    {
      v705 = v243;
      sub_1416C2D4B(1, 2);
    }
    v246 = v244;
    *v244 = 27503;
    nullsub_1(v245);
    v247 = (_QWORD *)sub_140001650(15, 1);
    if ( !v247 )
    {
      *(_QWORD *)&v706 = v246;
      v705 = v243;
      sub_1416C2D4B(1, 15);
    }
    v249 = v247;
    *(_QWORD *)((char *)v247 + 7) = 0x8CA1E890BFE8AA9CuLL;
    *v247 = 0x9CE6207865646F43uLL;
    nullsub_1(v248);
    v250 = sub_140001650(79, 1);
    if ( !v250 )
    {
      *((_QWORD *)&v706 + 1) = v249;
      *(_QWORD *)&v706 = v246;
      v705 = v243;
      sub_1416C2D4B(1, 79);
    }
    *(_OWORD *)(v250 + 63) = *(__int128 *)((char *)&xmmword_14178D4A4 + 15);
    *(_OWORD *)(v250 + 48) = xmmword_14178D4A4;
    *(_OWORD *)(v250 + 32) = xmmword_14178D494;
    *(_OWORD *)(v250 + 16) = xmmword_14178D484;
    *(__m128i *)v250 = _mm_loadu_si128((const __m128i *)&xmmword_14178D474);
    v612.m128i_i64[0] = 19;
    v612.m128i_i64[1] = (__int64)v243;
    *(_QWORD *)&v613 = 19;
    *((_QWORD *)&v613 + 1) = 2;
    *(_QWORD *)&v614 = v246;
    *((_QWORD *)&v614 + 1) = 2;
    *(_QWORD *)&v615 = 15;
    *((_QWORD *)&v615 + 1) = v249;
    *(_QWORD *)&v616 = 15;
    *((_QWORD *)&v616 + 1) = 79;
    v617.m128i_i64[0] = v250;
    v617.m128i_i64[1] = 79;
    LOBYTE(v618) = 0;
  }
  if ( v673.m128i_i64[0] != -1 && v673.m128i_i64[0] )
    sub_140001660(v673.m128i_i64[1], v673.m128i_i64[0], 1);
  sub_141486710(&phkResult, v659, v629);
  if ( phkResult.m256i_i32[0] != 2 )
  {
    sub_14148D130(&phkResult, v705[5], v705[6]);
    if ( phkResult.m256i_i64[0] == -1 )
    {
      sub_140797030((unsigned int)&v673, (unsigned int)aAuthTokenExpir, 17, (unsigned int)&unk_14178C960, 45);
      sub_1401DD260(phkResult.m256i_i64[1]);
      goto LABEL_385;
    }
    *(_QWORD *)&v706 = phkResult.m256i_i64[0];
    *(_OWORD *)phkResult.m256i_i8 = *(_OWORD *)&phkResult.m256i_u64[1];
    *(_OWORD *)&phkResult.m256i_u64[2] = 0;
    *((_QWORD *)&v706 + 1) = phkResult.m256i_i64[0];
    v691 = *(_OWORD *)phkResult.m256i_i8;
    sub_1408A6200(lpSubKey, &phkResult);
    if ( LOBYTE(lpSubKey[0]) == 0xFF )
    {
      sub_140797030((unsigned int)&v673, (unsigned int)aAuthTokenExpir, 17, (unsigned int)&unk_14178C934, 44);
      sub_1406C9CF0((__int64)lpSubKey);
      goto LABEL_383;
    }
    v257 = _mm_loadu_si128((const __m128i *)lpSubKey);
    v681 = v661;
    *(__m128i *)hKey = v257;
    v258 = sub_141433D50(aAuthMode_2, 9, hKey);
    if ( v258
      && *(_BYTE *)v258 == 3
      && *(_QWORD *)(v258 + 24) == 6
      && !(**(_DWORD **)(v258 + 16) ^ 0x6B697061 | *(unsigned __int16 *)(*(_QWORD *)(v258 + 16) + 4LL) ^ 0x7965) )
    {
      sub_140797030((unsigned int)&v673, (unsigned int)aAuthTokenExpir, 17, (unsigned int)&unk_14178C902, 50);
    }
    else
    {
      v259 = sub_14142E200(hKey, aTokensAccessTo, 20);
      if ( !v259 || *(_BYTE *)v259 != 3 || !*(_QWORD *)(v259 + 24) )
      {
        nullsub_1(v260);
        v267 = (__m128i *)sub_140001650(17, 1);
        if ( !v267 )
          sub_1416C2D4B(1, 17);
        v269 = (__int64 *)v267;
        *v267 = _mm_loadu_si128((const __m128i *)aAuthTokenExpir);
        v267[1].m128i_i8[0] = 121;
        nullsub_1(v268);
        v270 = sub_140001650(5, 1);
        if ( !v270 )
        {
          v705 = v269;
          sub_1416C2D4B(1, 5);
        }
        v272 = v270;
        *(_BYTE *)(v270 + 4) = 114;
        *(_DWORD *)v270 = 1869771365;
        nullsub_1(v271);
        v273 = sub_140001650(19, 1);
        if ( !v273 )
        {
          v702 = v272;
          v705 = v269;
          sub_1416C2D4B(1, 19);
        }
        v275 = v273;
        *(__m128i *)v273 = _mm_loadu_si128(&xmmword_14178C6A5);
        *(_DWORD *)(v273 + 15) = -1163270214;
        nullsub_1(v274);
        v276 = sub_140001650(45, 1);
        if ( !v276 )
        {
          *(_QWORD *)&v704 = v275;
          v702 = v272;
          v705 = v269;
          sub_1416C2D4B(1, 45);
        }
        *(_OWORD *)(v276 + 29) = *(__int128 *)((char *)&xmmword_14178C6C8 + 13);
        *(_OWORD *)(v276 + 16) = xmmword_14178C6C8;
        *(__m128i *)v276 = _mm_loadu_si128((const __m128i *)&xmmword_14178C6B8);
        v673.m128i_i64[0] = 17;
        v673.m128i_i64[1] = (__int64)v269;
        *(_QWORD *)&v674 = 17;
        *((_QWORD *)&v674 + 1) = 5;
        *(_QWORD *)&v675 = v272;
        *((_QWORD *)&v675 + 1) = 5;
        *(_QWORD *)&v676 = 19;
        *((_QWORD *)&v676 + 1) = v275;
        v677.m256i_i64[0] = 19;
        v677.m256i_i64[1] = 45;
        v677.m256i_i64[2] = v276;
        v677.m256i_i64[3] = 45;
        LOBYTE(v678) = 0;
        goto LABEL_382;
      }
      v261 = sub_1409DC570(*(_QWORD *)(v259 + 16));
      v263 = v262;
      v264 = sub_14142E200(hKey, aTokensRefreshT, 21);
      v266 = v264 && *(_BYTE *)v264 == 3 && *(_QWORD *)(v264 + 24) != 0;
      if ( v261 == 1 )
      {
        if ( (__int64)v263 <= 0 )
        {
          nullsub_1(v265);
          v296 = (__m128i *)sub_140001650(17, 1);
          v298 = v296;
          if ( v266 )
          {
            if ( !v296 )
              sub_1416C2D4B(1, 17);
            *v296 = _mm_loadu_si128((const __m128i *)aAuthTokenExpir);
            v296[1].m128i_i8[0] = 121;
            nullsub_1(v297);
            v299 = sub_140001650(5, 1);
            *(_QWORD *)&v704 = v298;
            if ( !v299 )
              sub_1416C2D4B(1, 5);
            *(_BYTE *)(v299 + 4) = 114;
            *((_QWORD *)&v704 + 1) = v299;
            *(_DWORD *)v299 = 1869771365;
            nullsub_1(v300);
            v301 = sub_140001650(22, 1);
            if ( !v301 )
              sub_1416C2D4B(1, 22);
            *(__m128i *)v301 = _mm_loadu_si128(&xmmword_14178C88A);
            v659 = v301;
            *(_QWORD *)(v301 + 14) = 0x9F9CE687BFE8B2B7uLL;
            v644.m128i_i64[0] = ((unsigned __int64)(((unsigned __int128)((__int64)0x8888888888888889uLL
                                                                       * (__int128)-(__int64)v263) >> 64)
                                                  - v263) >> 63)
                              + ((__int64)(((unsigned __int128)((__int64)0x8888888888888889uLL * (__int128)-(__int64)v263) >> 64)
                                         - v263) >> 5);
            lpSubKey[0] = (LPCWSTR)&v644;
            lpSubKey[1] = (LPCWSTR)sub_1414AC5F0;
            sub_14149C0F0(&phkResult, &unk_14178C8A0, lpSubKey);
            *(__m128i *)&v677.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&phkResult);
            v677.m256i_i64[3] = phkResult.m256i_i64[2];
            v673.m128i_i64[0] = 17;
            v673.m128i_i64[1] = v704;
            *(_QWORD *)&v674 = 17;
            *((_QWORD *)&v674 + 1) = 5;
            *(_QWORD *)&v675 = *((_QWORD *)&v704 + 1);
            *((_QWORD *)&v675 + 1) = 5;
            *(_QWORD *)&v676 = 22;
            *((_QWORD *)&v676 + 1) = v659;
            v677.m256i_i64[0] = 22;
          }
          else
          {
            if ( !v296 )
              sub_1416C2D4B(1, 17);
            *v296 = _mm_loadu_si128((const __m128i *)aAuthTokenExpir);
            v296[1].m128i_i8[0] = 121;
            nullsub_1(v297);
            v304 = sub_140001650(5, 1);
            if ( !v304 )
            {
              *(_QWORD *)&v704 = v298;
              sub_1416C2D4B(1, 5);
            }
            v306 = (_QWORD *)v304;
            *(_BYTE *)(v304 + 4) = 114;
            *(_DWORD *)v304 = 1869771365;
            nullsub_1(v305);
            v307 = sub_140001650(42, 1);
            if ( !v307 )
            {
              v705 = v306;
              *(_QWORD *)&v704 = v298;
              sub_1416C2D4B(1, 42);
            }
            v309 = v307;
            *(_OWORD *)(v307 + 26) = *(__int128 *)((char *)&xmmword_14178C856 + 10);
            *(_OWORD *)(v307 + 16) = xmmword_14178C856;
            *(__m128i *)v307 = _mm_loadu_si128((const __m128i *)&xmmword_14178C846);
            nullsub_1(v308);
            v310 = sub_140001650(26, 1);
            if ( !v310 )
            {
              v702 = v309;
              v705 = v306;
              *(_QWORD *)&v704 = v298;
              sub_1416C2D4B(1, 26);
            }
            *(_OWORD *)(v310 + 10) = *(__int128 *)((char *)&xmmword_14178C870 + 10);
            *(__m128i *)v310 = _mm_loadu_si128((const __m128i *)&xmmword_14178C870);
            v673.m128i_i64[0] = 17;
            v673.m128i_i64[1] = (__int64)v298;
            *(_QWORD *)&v674 = 17;
            *((_QWORD *)&v674 + 1) = 5;
            *(_QWORD *)&v675 = v306;
            *((_QWORD *)&v675 + 1) = 5;
            *(_QWORD *)&v676 = 42;
            *((_QWORD *)&v676 + 1) = v309;
            v677.m256i_i64[0] = 42;
            v677.m256i_i64[1] = 26;
            v677.m256i_i64[2] = v310;
            v677.m256i_i64[3] = 26;
          }
        }
        else
        {
          if ( v263 >= 0xE10 )
          {
            v634.m128i_i64[0] = v263 / 0xE10;
            lpDirectoryName[0] = (LPCWSTR)(v263 / 0x15180);
            if ( v263 >= 0x15180 )
            {
              v644.m128i_i64[0] = v263 / 0xE10 - 24 * ((0xAAAAAAAAAAAAAABLL * (unsigned __int128)(v263 / 0xE10)) >> 64);
              phkResult.m256i_i64[0] = (__int64)lpDirectoryName;
              phkResult.m256i_i64[1] = (__int64)sub_1414AC5F0;
              phkResult.m256i_i64[2] = (__int64)&v644;
              phkResult.m256i_i64[3] = (__int64)sub_1414AC5F0;
              sub_14149C0F0(lpSubKey, &unk_14178C776, &phkResult);
              *(LPCWSTR *)&v704 = lpSubKey[0];
              v302 = lpSubKey[1];
              v303 = v661;
            }
            else
            {
              lpSubKey[0] = (LPCWSTR)&v634;
              lpSubKey[1] = (LPCWSTR)sub_1414AC5F0;
              sub_14149C0F0(&phkResult, &unk_14178C74B, lpSubKey);
              v302 = (LPCWSTR)phkResult.m256i_i64[1];
              *(_QWORD *)&v704 = phkResult.m256i_i64[0];
              v303 = phkResult.m256i_i64[2];
            }
            *((_QWORD *)&v704 + 1) = v302;
            sub_140797030((unsigned int)&v673, (unsigned int)aAuthTokenExpir, 17, (_DWORD)v302, v303);
            if ( (_QWORD)v704 )
              sub_140001660(*((_QWORD *)&v704 + 1), v704, 1);
            goto LABEL_382;
          }
          v644.m128i_i64[0] = (unsigned int)(34953 * v263) >> 21;
          nullsub_1(v265);
          v277 = (__m128i *)sub_140001650(17, 1);
          if ( !v277 )
            sub_1416C2D4B(1, 17);
          *v277 = _mm_loadu_si128((const __m128i *)aAuthTokenExpir);
          *(_QWORD *)&v704 = v277;
          v277[1].m128i_i8[0] = 121;
          nullsub_1(v278);
          v279 = (_DWORD *)sub_140001650(7, 1);
          if ( !v279 )
            sub_1416C2D4B(1, 7);
          *(_DWORD *)((char *)v279 + 3) = 1735289198;
          *((_QWORD *)&v704 + 1) = v279;
          *v279 = 1852989815;
          lpSubKey[0] = (LPCWSTR)&v644;
          lpSubKey[1] = (LPCWSTR)sub_1414AC5F0;
          sub_14149C0F0(&phkResult, &unk_14178C7A8, lpSubKey);
          v280 = *(_OWORD *)phkResult.m256i_i8;
          v281 = phkResult.m256i_i64[2];
          nullsub_1(v282);
          if ( v266 )
          {
            v283 = 74;
            v284 = sub_140001650(74, 1);
            if ( !v284 )
            {
              v702 = *((_QWORD *)&v280 + 1);
              v705 = (_QWORD *)v280;
              sub_1416C2D4B(1, 74);
            }
            *(_OWORD *)(v284 + 58) = *(__int128 *)((char *)&xmmword_14178C82C + 10);
            *(_OWORD *)(v284 + 48) = xmmword_14178C82C;
            *(_OWORD *)(v284 + 32) = xmmword_14178C81C;
            *(_OWORD *)(v284 + 16) = xmmword_14178C80C;
            v285 = _mm_loadu_si128((const __m128i *)&xmmword_14178C7FC);
          }
          else
          {
            v283 = 44;
            v284 = sub_140001650(44, 1);
            if ( !v284 )
            {
              v702 = *((_QWORD *)&v280 + 1);
              v705 = (_QWORD *)v280;
              sub_1416C2D4B(1, 44);
            }
            *(_OWORD *)(v284 + 28) = *(__int128 *)((char *)&xmmword_14178C7E0 + 12);
            *(_OWORD *)(v284 + 16) = xmmword_14178C7E0;
            v285 = _mm_loadu_si128((const __m128i *)&xmmword_14178C7D0);
          }
          *(__m128i *)v284 = v285;
          v673.m128i_i64[0] = 17;
          v673.m128i_i64[1] = v704;
          *(_QWORD *)&v674 = 17;
          *((_QWORD *)&v674 + 1) = 7;
          *(_QWORD *)&v675 = *((_QWORD *)&v704 + 1);
          *((_QWORD *)&v675 + 1) = 7;
          v676 = v280;
          v677.m256i_i64[0] = v281;
          v677.m256i_i64[1] = v283;
          v677.m256i_i64[2] = v284;
          v677.m256i_i64[3] = v283;
        }
      }
      else
      {
        nullsub_1(v265);
        v286 = (__m128i *)sub_140001650(17, 1);
        if ( !v286 )
          sub_1416C2D4B(1, 17);
        v288 = (__int64 *)v286;
        *v286 = _mm_loadu_si128((const __m128i *)aAuthTokenExpir);
        v286[1].m128i_i8[0] = 121;
        nullsub_1(v287);
        v289 = (_DWORD *)sub_140001650(7, 1);
        if ( !v289 )
        {
          v705 = v288;
          sub_1416C2D4B(1, 7);
        }
        v291 = v289;
        *(_DWORD *)((char *)v289 + 3) = 1735289198;
        *v289 = 1852989815;
        nullsub_1(v290);
        v292 = sub_140001650(38, 1);
        if ( !v292 )
        {
          v702 = (__int64)v291;
          v705 = v288;
          sub_1416C2D4B(1, 38);
        }
        v294 = v292;
        *(_OWORD *)(v292 + 16) = xmmword_14178C70A;
        *(__m128i *)v292 = _mm_loadu_si128((const __m128i *)&xmmword_14178C6FA);
        *(_QWORD *)(v292 + 30) = 0xB497E9B697E69F9CuLL;
        nullsub_1(v293);
        v295 = sub_140001650(43, 1);
        if ( !v295 )
        {
          *(_QWORD *)&v704 = v294;
          v702 = (__int64)v291;
          v705 = v288;
          sub_1416C2D4B(1, 43);
        }
        *(_OWORD *)(v295 + 27) = *(__int128 *)((char *)&xmmword_14178C730 + 11);
        *(_OWORD *)(v295 + 16) = xmmword_14178C730;
        *(__m128i *)v295 = _mm_loadu_si128((const __m128i *)&xmmword_14178C720);
        v673.m128i_i64[0] = 17;
        v673.m128i_i64[1] = (__int64)v288;
        *(_QWORD *)&v674 = 17;
        *((_QWORD *)&v674 + 1) = 7;
        *(_QWORD *)&v675 = v291;
        *((_QWORD *)&v675 + 1) = 7;
        *(_QWORD *)&v676 = 38;
        *((_QWORD *)&v676 + 1) = v294;
        v677.m256i_i64[0] = 38;
        v677.m256i_i64[1] = 43;
        v677.m256i_i64[2] = v295;
        v677.m256i_i64[3] = 43;
      }
      LOBYTE(v678) = 0;
    }
LABEL_382:
    sub_1400104F0(hKey);
LABEL_383:
    if ( (_QWORD)v706 )
      sub_140001660(*((_QWORD *)&v706 + 1), v706, 1);
    goto LABEL_385;
  }
  sub_1401DD260(phkResult.m256i_i64[1]);
  sub_140797030((unsigned int)&v673, (unsigned int)aAuthTokenExpir, 17, (unsigned int)&unk_14178C677, 46);
LABEL_385:
  v311 = (const WCHAR *)v705;
  check_rollout_orphan_providers(&v644, v705, &v602, v227);
  v686 = nullptr;
  v687 = 8;
  v688 = nullptr;
  lpSubKey[0] = v311;
  lpSubKey[1] = (LPCWSTR)aCodex_4;
  *(_QWORD *)&v661 = 8;
  *((_QWORD *)&v661 + 1) = v311 + 80;
  *(_QWORD *)&v662 = aSessions;
  *((_QWORD *)&v662 + 1) = 8;
  *(_QWORD *)&v663 = v311 + 224;
  *((_QWORD *)&v663 + 1) = aCodexmate_0;
  *(_QWORD *)&v664 = 9;
  *((_QWORD *)&v664 + 1) = v311 + 384;
  *(_QWORD *)&v665 = aRelay_0;
  *((_QWORD *)&v665 + 1) = 5;
  for ( j = 0; j != 12; j += 3 )
  {
    while ( 1 )
    {
      lpDirectoryName[0] = (LPCWSTR)&lpSubKey[j + 1];
      v316 = lpSubKey[j];
      v317 = *((_QWORD *)v316 + 1);
      v318 = *((_QWORD *)v316 + 2);
      sub_141486710(&phkResult, v317, v318);
      if ( phkResult.m256i_i32[0] != 2 )
        break;
      sub_1401DD260(phkResult.m256i_i64[1]);
      phkResult.m256i_i64[0] = (__int64)lpDirectoryName;
      phkResult.m256i_i64[1] = (__int64)sub_14041F660;
      sub_14149C0F0(&v620, &unk_14178CB13, &phkResult);
      v320 = v688;
      if ( v688 == v686 )
        sub_141689AB0(&v686);
      v321 = v687;
      v319 = 3LL * (_QWORD)v320;
      *(_QWORD *)(v687 + 8 * v319 + 16) = v621;
      *(__m128i *)(v321 + 8 * v319) = _mm_loadu_si128(&v620);
      v688 = (const WCHAR *)((char *)v320 + 1);
      j += 3;
      if ( j == 12 )
        goto LABEL_386;
    }
    if ( !(_BYTE)v702 )
    {
      sub_141473FA0((unsigned int)&phkResult, v317, v318, (unsigned int)&unk_14178CB26, 13);
      v322 = phkResult.m256i_i64[2];
      *(_QWORD *)&v706 = phkResult.m256i_i64[1];
      *((_QWORD *)&v706 + 1) = sub_14148D5C0(phkResult.m256i_i64[1], phkResult.m256i_i64[2], aProbe, 5);
      if ( *((_QWORD *)&v706 + 1) )
      {
        hKey[0] = (HKEY)lpDirectoryName;
        hKey[1] = (HKEY)sub_14041F660;
        sub_14149C0F0(&v632, &unk_14178CB38, hKey);
        v323 = v688;
        if ( v688 == v686 )
          sub_141689AB0(&v686);
        v324 = v687;
        v325 = 3LL * (_QWORD)v323;
        *(_QWORD *)(v687 + 8 * v325 + 16) = v633;
        *(__m128i *)(v324 + 8 * v325) = _mm_loadu_si128(&v632);
        v688 = (const WCHAR *)((char *)v323 + 1);
      }
      else
      {
        v326 = sub_141485EF0(v706, v322);
        if ( v326 )
          sub_1401DD260(v326);
      }
      if ( phkResult.m256i_i64[0] )
        sub_140001660(v706, phkResult.m256i_i64[0], 1);
      v319 = *((_QWORD *)&v706 + 1);
      if ( *((_QWORD *)&v706 + 1) )
        sub_1401DD260(*((_QWORD *)&v706 + 1));
    }
  }
LABEL_386:
  v313 = v705[120];
  if ( v313 == -1 )
  {
    sub_140713CC0(&v634, v705[1], v705[2]);
    v327 = v634.m128i_i64[1];
    v314 = v635;
  }
  else
  {
    v314 = v705[122];
    if ( v314 < 0 )
    {
      v315 = 0;
      goto LABEL_389;
    }
    if ( v314 )
    {
      v328 = v705[121];
      nullsub_1(v319);
      v315 = 1;
      v329 = sub_140001650(v314, 1);
      if ( !v329 )
LABEL_389:
        sub_1416C2D4B(v315, v314);
      v327 = v329;
      v634.m128i_i64[0] = v314;
      v634.m128i_i64[1] = v329;
      sub_141684120(v329, v328, v314);
      v635 = v314;
    }
    else
    {
      v634.m128i_i64[0] = 0;
      v634.m128i_i64[1] = 1;
      v635 = 0;
      v327 = 1;
    }
    v636 = *((_BYTE *)v705 + 984);
  }
  sub_141486710(&phkResult, v327, v314);
  if ( phkResult.m256i_i32[0] == 2 )
  {
    sub_1401DD260(phkResult.m256i_i64[1]);
  }
  else
  {
    sub_1406C1800((__int64)&phkResult, v327, v314, 32770 - (unsigned __int8)v702);
    if ( v696 != -1 )
      goto LABEL_421;
    v330 = _mm_loadu_si128((const __m128i *)&phkResult);
    v683 = v692;
    v682 = v691;
    v681 = *(_OWORD *)&phkResult.m256i_u64[2];
    *(__m128i *)hKey = v330;
    v331 = asc_14178CB4B;
    if ( (_BYTE)v702 )
      v331 = (const char *)&unk_14178CB51;
    v639 = v331;
    v640 = 6;
    lpDirectoryName[0] = (LPCWSTR)&v639;
    lpDirectoryName[1] = (LPCWSTR)sub_14041F680;
    *(_QWORD *)&v655 = hKey;
    *((_QWORD *)&v655 + 1) = sub_140FB8910;
    sub_14149C0F0(&v651, &unk_14178CB57, lpDirectoryName);
    v332 = v688;
    if ( v688 == v686 )
      sub_141689AB0(&v686);
    v333 = v687;
    v334 = 3LL * (_QWORD)v332;
    *(_QWORD *)(v687 + 8 * v334 + 16) = v652;
    *(__m128i *)(v333 + 8 * v334) = _mm_loadu_si128(&v651);
    v688 = (const WCHAR *)((char *)v332 + 1);
    sub_1406CBAD0(hKey);
    if ( v696 != -1 )
LABEL_421:
      sub_1406CB500(&phkResult);
  }
  v335 = v705[1];
  v336 = v705[2];
  sub_1414A3C90(hKey, v335, v336);
  if ( !LOBYTE(hKey[0]) )
  {
    phkResult.m256i_i64[0] = (__int64)hKey[1];
    phkResult.m256i_i64[1] = (__int64)hKey[1] + v681;
    phkResult.m256i_i16[8] = 0;
    phkResult.m256i_i32[6] = 1;
    sub_14031FB40(lpDirectoryName, &phkResult);
    phkResult.m256i_i64[0] = 0;
    v338 = lpDirectoryName[1];
    DiskFreeSpace = GetDiskFreeSpaceExW(lpDirectoryName[1], (PULARGE_INTEGER)&phkResult, nullptr, nullptr);
    v340 = phkResult.m256i_i64[0];
    if ( lpDirectoryName[0] )
      sub_140001660(v338, 2 * (__int64)lpDirectoryName[0], 2);
    if ( v688 )
      goto LABEL_428;
    if ( !DiskFreeSpace )
      goto LABEL_443;
    if ( v340 >= 0xA00000 )
    {
      if ( v340 >= 0x6400000 )
      {
        lpDirectoryName[0] = (LPCWSTR)(v340 >> 30);
        hKey[0] = (HKEY)lpDirectoryName;
        hKey[1] = (HKEY)sub_1414AC520;
        sub_14149C0F0(&phkResult, &unk_14178CBC3, hKey);
        v706 = *(_OWORD *)phkResult.m256i_i8;
        sub_140797030(
          (unsigned int)hKey,
          (unsigned int)aCodexHomeWrita,
          19,
          phkResult.m256i_i32[2],
          phkResult.m256i_i64[2]);
        if ( (_QWORD)v706 )
          sub_140001660(*((_QWORD *)&v706 + 1), v706, 1);
        goto LABEL_450;
      }
      lpDirectoryName[0] = (LPCWSTR)(v340 >> 20);
      nullsub_1(v337);
      v356 = sub_140001650(19, 1);
      if ( !v356 )
        sub_1416C2D4B(1, 19);
      *(__m128i *)v356 = _mm_loadu_si128((const __m128i *)aCodexHomeWrita);
      *(_QWORD *)&v706 = v356;
      *(_DWORD *)(v356 + 15) = 1701601889;
      nullsub_1(v357);
      v358 = (_DWORD *)sub_140001650(7, 1);
      if ( !v358 )
        sub_1416C2D4B(1, 7);
      *(_DWORD *)((char *)v358 + 3) = 1735289198;
      *((_QWORD *)&v706 + 1) = v358;
      *v358 = 1852989815;
      hKey[0] = (HKEY)lpDirectoryName;
      hKey[1] = (HKEY)sub_1414AC520;
      sub_14149C0F0(&phkResult, &unk_14178CBE9, hKey);
      v359 = *(_OWORD *)phkResult.m256i_i8;
      v360 = phkResult.m256i_i64[2];
      nullsub_1(v361);
      v362 = sub_140001650(46, 1);
      if ( !v362 )
      {
        v702 = *((_QWORD *)&v359 + 1);
        v705 = (_QWORD *)v359;
        sub_1416C2D4B(1, 46);
      }
      *(_OWORD *)(v362 + 30) = *(__int128 *)((char *)&xmmword_14178CC1F + 14);
      *(_OWORD *)(v362 + 16) = xmmword_14178CC1F;
      *(__m128i *)v362 = _mm_loadu_si128((const __m128i *)&xmmword_14178CC0F);
      hKey[0] = (HKEY)19;
      hKey[1] = (HKEY)v706;
      *(_QWORD *)&v681 = 19;
      *((_QWORD *)&v681 + 1) = 7;
      *(_QWORD *)&v682 = *((_QWORD *)&v706 + 1);
      *((_QWORD *)&v682 + 1) = 7;
      v683 = v359;
      v684.m256i_i64[0] = v360;
      v684.m256i_i64[1] = 46;
      v684.m256i_i64[2] = v362;
      v684.m256i_i64[3] = 46;
    }
    else
    {
      lpDirectoryName[0] = (LPCWSTR)(v340 >> 20);
      nullsub_1(v337);
      v349 = sub_140001650(19, 1);
      if ( !v349 )
        sub_1416C2D4B(1, 19);
      *(__m128i *)v349 = _mm_loadu_si128((const __m128i *)aCodexHomeWrita);
      *(_QWORD *)&v706 = v349;
      *(_DWORD *)(v349 + 15) = 1701601889;
      nullsub_1(v350);
      v351 = sub_140001650(5, 1);
      if ( !v351 )
        sub_1416C2D4B(1, 5);
      *(_BYTE *)(v351 + 4) = 114;
      *((_QWORD *)&v706 + 1) = v351;
      *(_DWORD *)v351 = 1869771365;
      hKey[0] = (HKEY)lpDirectoryName;
      hKey[1] = (HKEY)sub_1414AC520;
      sub_14149C0F0(&phkResult, &unk_14178CC3D, hKey);
      v352 = *(_OWORD *)phkResult.m256i_i8;
      v353 = phkResult.m256i_i64[2];
      nullsub_1(v354);
      v355 = sub_140001650(63, 1);
      if ( !v355 )
      {
        v702 = *((_QWORD *)&v352 + 1);
        v705 = (_QWORD *)v352;
        sub_1416C2D4B(1, 63);
      }
      *(_OWORD *)(v355 + 47) = *(__int128 *)((char *)&xmmword_14178CC89 + 15);
      *(_OWORD *)(v355 + 32) = xmmword_14178CC89;
      *(_OWORD *)(v355 + 16) = xmmword_14178CC79;
      *(__m128i *)v355 = _mm_loadu_si128((const __m128i *)&xmmword_14178CC69);
      hKey[0] = (HKEY)19;
      hKey[1] = (HKEY)v706;
      *(_QWORD *)&v681 = 19;
      *((_QWORD *)&v681 + 1) = 5;
      *(_QWORD *)&v682 = *((_QWORD *)&v706 + 1);
      *((_QWORD *)&v682 + 1) = 5;
      v683 = v352;
      v684.m256i_i64[0] = v353;
      v684.m256i_i64[1] = 63;
      v684.m256i_i64[2] = v355;
      v684.m256i_i64[3] = 63;
    }
    LOBYTE(v685) = 0;
LABEL_450:
    if ( v634.m128i_i64[0] )
      sub_140001660(v634.m128i_i64[1], v634.m128i_i64[0], 1);
    v363 = v688;
    if ( v688 )
    {
      v364 = (_QWORD *)(v687 + 8);
      do
      {
        v365 = *(v364 - 1);
        if ( v365 )
          sub_140001660(*v364, v365, 1);
        v364 += 3;
        v363 = (const WCHAR *)((char *)v363 - 1);
      }
      while ( v363 );
    }
    goto LABEL_457;
  }
  if ( !v688 )
  {
LABEL_443:
    sub_140797030((unsigned int)hKey, (unsigned int)aCodexHomeWrita, 19, (unsigned int)&unk_14178CB96, 45);
    goto LABEL_450;
  }
LABEL_428:
  nullsub_1(v337);
  v341 = sub_140001650(19, 1);
  if ( !v341 )
    sub_1416C2D4B(1, 19);
  v343 = v341;
  *(__m128i *)v341 = _mm_loadu_si128((const __m128i *)aCodexHomeWrita);
  *(_DWORD *)(v341 + 15) = 1701601889;
  nullsub_1(v342);
  v344 = sub_140001650(5, 1);
  *(_QWORD *)&v706 = v343;
  if ( !v344 )
    sub_1416C2D4B(1, 5);
  *(_BYTE *)(v344 + 4) = 114;
  *((_QWORD *)&v706 + 1) = v344;
  *(_DWORD *)v344 = 1869771365;
  lpDirectoryName[0] = v688;
  hKey[0] = (HKEY)lpDirectoryName;
  hKey[1] = (HKEY)sub_1414AC520;
  sub_14149C0F0(&phkResult, &unk_14178CCA8, hKey);
  *(_QWORD *)&v704 = phkResult.m256i_i64[1];
  v702 = phkResult.m256i_i64[0];
  v345 = phkResult.m256i_i64[2];
  sub_140440300((unsigned int)&phkResult, v687, (_DWORD)v688, (unsigned int)&unk_14178CCCE, 3);
  v684.m256i_i64[3] = phkResult.m256i_i64[2];
  *(__m128i *)&v684.m256i_u64[1] = _mm_loadu_si128((const __m128i *)&phkResult);
  hKey[0] = (HKEY)19;
  hKey[1] = (HKEY)v706;
  *(_QWORD *)&v681 = 19;
  *((_QWORD *)&v681 + 1) = 5;
  *(_QWORD *)&v682 = *((_QWORD *)&v706 + 1);
  *((_QWORD *)&v682 + 1) = 5;
  *(_QWORD *)&v683 = v702;
  *((_QWORD *)&v683 + 1) = v704;
  v684.m256i_i64[0] = v345;
  LOBYTE(v685) = 0;
  if ( v634.m128i_i64[0] )
    sub_140001660(v634.m128i_i64[1], v634.m128i_i64[0], 1);
  v346 = v688;
  if ( v688 )
  {
    v347 = (_QWORD *)(v687 + 8);
    do
    {
      v348 = *(v347 - 1);
      if ( v348 )
        sub_140001660(*v347, v348, 1);
      v347 += 3;
      v346 = (const WCHAR *)((char *)v346 - 1);
    }
    while ( v346 );
  }
LABEL_457:
  if ( v686 )
    sub_140001660(v687, 24LL * (_QWORD)v686, 8);
  check_project_state_integrity(lpSubKey, v705);
  sub_141473FA0((unsigned int)&v620, v335, v336, (unsigned int)&unk_141789397, 6);
  sub_1407130B0((__int64)&v632, v335, v336);
  if ( v313 == -1 )
  {
    sub_140713CC0(&v651, v335, v336);
    v369 = v651.m128i_i64[1];
    v367 = v652;
  }
  else
  {
    v367 = v705[122];
    if ( v367 < 0 )
    {
      v368 = 0;
      goto LABEL_462;
    }
    if ( v367 )
    {
      v370 = v705[121];
      nullsub_1(v366);
      v368 = 1;
      v371 = sub_140001650(v367, 1);
      if ( !v371 )
LABEL_462:
        sub_1416C2D4B(v368, v367);
      v651.m128i_i64[0] = v367;
      v651.m128i_i64[1] = v371;
      v372 = v371;
      sub_141684120(v371, v370, v367);
      v369 = v372;
      v652 = v367;
    }
    else
    {
      v651.m128i_i64[0] = 0;
      v651.m128i_i64[1] = 1;
      v652 = 0;
      v369 = 1;
    }
    v653 = *((_BYTE *)v705 + 984);
  }
  v373 = v620.m128i_i64[1];
  v374 = v621;
  v705 = (_QWORD *)v369;
  v375 = sub_1414734E0(v369, v367, v620.m128i_i64[1], v621);
  sub_1407635A0((__int64)&v639, v335, v336);
  if ( v375 && (v377 = v641) != 0 )
  {
    v378 = v632.m128i_i64[0];
    if ( v632.m128i_i64[0] != -1 )
    {
      v379 = v632.m128i_i64[1];
      sub_141473290(&v634, v632.m128i_i64[1], v633);
      sub_141473290(lpDirectoryName, v373, v374);
      if ( (LPCWSTR)v634.m128i_i64[1] == lpDirectoryName[1]
        && v637 == BYTE8(v657)
        && v638 == 2
        && BYTE9(v657) == 2
        && (unsigned __int8)v635 < 3u == (unsigned __int8)v655 < 3u
        && !(unsigned int)sub_1416847B0(v634.m128i_i64[0], lpDirectoryName[0], v634.m128i_i64[1]) )
      {
        goto LABEL_479;
      }
      v380 = _mm_loadu_si128((const __m128i *)lpDirectoryName);
      v692 = v657;
      v691 = v656;
      *(_OWORD *)&phkResult.m256i_u64[2] = v655;
      *(__m128i *)phkResult.m256i_i8 = v380;
      if ( (unsigned __int8)sub_140467AB0(&v634, &phkResult) )
      {
LABEL_479:
        v381 = v640;
        sub_1403118F0(&v686, v640, v640 + 32 * v377);
        nullsub_1(v382);
        v383 = sub_140001650(19, 1);
        if ( !v383 )
          sub_1416C2D4B(1, 19);
        *(__m128i *)v383 = _mm_loadu_si128((const __m128i *)aStateDbRelocat);
        *(_QWORD *)&v706 = v383;
        *(_DWORD *)(v383 + 15) = 1852795252;
        nullsub_1(v384);
        v385 = (_DWORD *)sub_140001650(7, 1);
        if ( !v385 )
          sub_1416C2D4B(1, 7);
        *(_QWORD *)&v704 = v379;
        *(_DWORD *)((char *)v385 + 3) = 1735289198;
        *((_QWORD *)&v706 + 1) = v385;
        *v385 = 1852989815;
        v634.m128i_i64[0] = v377;
        lpDirectoryName[0] = (LPCWSTR)&v634;
        lpDirectoryName[1] = (LPCWSTR)sub_1414AC520;
        sub_14149C0F0(&phkResult, &unk_14178D601, lpDirectoryName);
        *((_QWORD *)&v704 + 1) = phkResult.m256i_i64[1];
        v702 = phkResult.m256i_i64[0];
        v386 = phkResult.m256i_i64[2];
        v387 = v687;
        v388 = v688;
        sub_140440300((unsigned int)&phkResult, v687, (_DWORD)v688, (unsigned int)&unk_141789F28, 2);
        *(_QWORD *)&v655 = phkResult.m256i_i64[2];
        *(__m128i *)lpDirectoryName = _mm_loadu_si128((const __m128i *)&phkResult);
        phkResult.m256i_i64[0] = (__int64)lpDirectoryName;
        phkResult.m256i_i64[1] = (__int64)sub_1400015F0;
        sub_14149C0F0(&v634, &unk_14178D62E, &phkResult);
        if ( lpDirectoryName[0] )
          sub_140001660(lpDirectoryName[1], lpDirectoryName[0], 1);
        *(__m128i *)&v693[8] = _mm_loadu_si128(&v634);
        v694 = v635;
        phkResult.m256i_i64[0] = 19;
        phkResult.m256i_i64[1] = v706;
        phkResult.m256i_i64[2] = 19;
        phkResult.m256i_i64[3] = 7;
        *(_QWORD *)&v691 = *((_QWORD *)&v706 + 1);
        *((_QWORD *)&v691 + 1) = 7;
        *(_QWORD *)&v692 = v702;
        *((_QWORD *)&v692 + 1) = *((_QWORD *)&v704 + 1);
        *(_QWORD *)v693 = v386;
        LOBYTE(v695) = 1;
        if ( v388 )
        {
          v389 = (_QWORD *)(v387 + 8);
          do
          {
            v390 = *(v389 - 1);
            if ( v390 )
              sub_140001660(*v389, v390, 1);
            v389 += 3;
            v388 = (const WCHAR *)((char *)v388 - 1);
          }
          while ( v388 );
        }
        if ( v686 )
          sub_140001660(v387, 24LL * (_QWORD)v686, 8);
        v518 = (_QWORD *)(v381 + 8);
        do
        {
          v519 = *(v518 - 1);
          if ( v519 )
            sub_140001660(*v518, v519, 1);
          v518 += 4;
          --v377;
        }
        while ( v377 );
        if ( v639 )
          sub_140001660(v381, 32LL * (_QWORD)v639, 8);
        v520 = v704;
        if ( v651.m128i_i64[0] )
          sub_140001660(v705, v651.m128i_i64[0], 1);
        if ( v378 )
        {
          v393 = v520;
          v392 = v378;
LABEL_496:
          sub_140001660(v393, v392, 1);
        }
        goto LABEL_497;
      }
    }
    nullsub_1(v376);
    v505 = sub_140001650(19, 1);
    if ( !v505 )
      sub_1416C2D4B(1, 19);
    v507 = v505;
    *(__m128i *)v505 = _mm_loadu_si128((const __m128i *)aStateDbRelocat);
    *(_DWORD *)(v505 + 15) = 1852795252;
    nullsub_1(v506);
    v508 = (_DWORD *)sub_140001650(7, 1);
    if ( !v508 )
    {
      *(_QWORD *)&v706 = v507;
      sub_1416C2D4B(1, 7);
    }
    v510 = v508;
    *(_DWORD *)((char *)v508 + 3) = 1735289198;
    *v508 = 1852989815;
    nullsub_1(v509);
    v511 = sub_140001650(33, 1);
    if ( !v511 )
    {
      *((_QWORD *)&v706 + 1) = v510;
      *(_QWORD *)&v706 = v507;
      sub_1416C2D4B(1, 33);
    }
    v513 = v511;
    *(_OWORD *)(v511 + 16) = xmmword_14178D743;
    *(__m128i *)v511 = _mm_loadu_si128((const __m128i *)&xmmword_14178D733);
    *(_BYTE *)(v511 + 32) = -109;
    nullsub_1(v512);
    v514 = sub_140001650(164, 1);
    if ( !v514 )
    {
      v702 = v513;
      *((_QWORD *)&v706 + 1) = v510;
      *(_QWORD *)&v706 = v507;
      sub_1416C2D4B(1, 164);
    }
    v515 = v514;
    sub_141684120(v514, aCodexSqliteHom_0, 164);
    phkResult.m256i_i64[0] = 19;
    phkResult.m256i_i64[1] = v507;
    phkResult.m256i_i64[2] = 19;
    phkResult.m256i_i64[3] = 7;
    *(_QWORD *)&v691 = v510;
    *((_QWORD *)&v691 + 1) = 7;
    *(_QWORD *)&v692 = 33;
    *((_QWORD *)&v692 + 1) = v513;
    *(_QWORD *)v693 = 33;
    *(_QWORD *)&v693[8] = 164;
    *(_QWORD *)&v693[16] = v515;
    v694 = 164;
    LOBYTE(v695) = 0;
    v391 = v640;
LABEL_533:
    v516 = (_QWORD *)(v391 + 8);
    do
    {
      v517 = *(v516 - 1);
      if ( v517 )
        sub_140001660(*v516, v517, 1);
      v516 += 4;
      --v377;
    }
    while ( v377 );
  }
  else
  {
    sub_140797030((unsigned int)&phkResult, (unsigned int)aStateDbRelocat, 19, (unsigned int)&unk_14178D5E6, 27);
    v391 = v640;
    v377 = v641;
    if ( v641 )
      goto LABEL_533;
  }
  if ( v639 )
    sub_140001660(v391, 32LL * (_QWORD)v639, 8);
  if ( v651.m128i_i64[0] )
    sub_140001660(v705, v651.m128i_i64[0], 1);
  v392 = v632.m128i_i64[0];
  if ( v632.m128i_i64[0] != -1 && v632.m128i_i64[0] )
  {
    v393 = v632.m128i_i64[1];
    goto LABEL_496;
  }
LABEL_497:
  if ( v620.m128i_i64[0] )
    sub_140001660(v620.m128i_i64[1], v620.m128i_i64[0], 1);
  v394 = v630;
  *(_QWORD *)(v630 + 96) = v672;
  *(__m256i *)(v394 + 64) = v671;
  v395 = v667;
  v396 = v668;
  v397 = v669;
  *(_OWORD *)(v394 + 48) = v670;
  *(_OWORD *)(v394 + 32) = v397;
  *(_OWORD *)(v394 + 16) = v396;
  *(_OWORD *)v394 = v395;
  v398 = v558;
  v399 = v559;
  v400 = v560;
  *(__m128i *)(v394 + 104) = v557;
  *(_OWORD *)(v394 + 120) = v398;
  *(_OWORD *)(v394 + 136) = v399;
  *(_OWORD *)(v394 + 152) = v400;
  *(__m256i *)(v394 + 168) = v561;
  *(_QWORD *)(v394 + 200) = v562;
  v401 = v553[1];
  v402 = v553[2];
  v403 = v553[3];
  *(_OWORD *)(v394 + 208) = v553[0];
  *(_OWORD *)(v394 + 224) = v401;
  *(_OWORD *)(v394 + 240) = v402;
  *(_OWORD *)(v394 + 256) = v403;
  *(_OWORD *)(v394 + 272) = v553[4];
  *(_OWORD *)(v394 + 288) = v553[5];
  *(_QWORD *)(v394 + 304) = v554;
  v404 = v623;
  v405 = v624;
  v406 = v625;
  *(_OWORD *)(v394 + 312) = v622;
  *(_OWORD *)(v394 + 328) = v404;
  *(_OWORD *)(v394 + 344) = v405;
  *(__m128i *)(v394 + 360) = v406;
  *(_OWORD *)(v394 + 376) = v626;
  *(_OWORD *)(v394 + 392) = v627;
  *(_QWORD *)(v394 + 408) = v628;
  v407 = v551[1];
  v408 = v551[2];
  v409 = v551[3];
  *(_OWORD *)(v394 + 416) = v551[0];
  *(_OWORD *)(v394 + 432) = v407;
  *(_OWORD *)(v394 + 448) = v408;
  *(_OWORD *)(v394 + 464) = v409;
  *(_OWORD *)(v394 + 480) = v551[4];
  *(_QWORD *)(v394 + 512) = v552;
  *(_OWORD *)(v394 + 496) = v551[5];
  *(_QWORD *)(v394 + 616) = v550;
  *(_OWORD *)(v394 + 600) = v549[5];
  *(_OWORD *)(v394 + 584) = v549[4];
  v410 = v549[0];
  v411 = v549[1];
  v412 = v549[2];
  *(_OWORD *)(v394 + 568) = v549[3];
  *(_OWORD *)(v394 + 552) = v412;
  *(_OWORD *)(v394 + 536) = v411;
  *(_OWORD *)(v394 + 520) = v410;
  v413 = v547[1];
  v414 = v547[2];
  v415 = v547[3];
  *(_OWORD *)(v394 + 624) = v547[0];
  *(_OWORD *)(v394 + 640) = v413;
  *(_OWORD *)(v394 + 656) = v414;
  *(_OWORD *)(v394 + 672) = v415;
  *(_OWORD *)(v394 + 688) = v547[4];
  *(_OWORD *)(v394 + 704) = v547[5];
  *(_QWORD *)(v394 + 720) = v548;
  v416 = v545[1];
  v417 = v545[2];
  v418 = v545[3];
  *(_OWORD *)(v394 + 728) = v545[0];
  *(_OWORD *)(v394 + 744) = v416;
  *(_OWORD *)(v394 + 760) = v417;
  *(_OWORD *)(v394 + 776) = v418;
  *(_OWORD *)(v394 + 792) = v545[4];
  *(_OWORD *)(v394 + 808) = v545[5];
  *(_QWORD *)(v394 + 824) = v546;
  v419 = v576;
  v420 = v577;
  v421 = v578;
  *(_OWORD *)(v394 + 832) = v575;
  *(_OWORD *)(v394 + 848) = v419;
  *(_OWORD *)(v394 + 864) = v420;
  *(_OWORD *)(v394 + 880) = v421;
  *(__m256i *)(v394 + 896) = v579;
  *(_QWORD *)(v394 + 928) = v580;
  v422 = v543[1];
  v423 = v543[2];
  v424 = v543[3];
  *(_OWORD *)(v394 + 936) = v543[0];
  *(_OWORD *)(v394 + 952) = v422;
  *(_OWORD *)(v394 + 968) = v423;
  *(_OWORD *)(v394 + 984) = v424;
  *(_OWORD *)(v394 + 1000) = v543[4];
  *(_OWORD *)(v394 + 1016) = v543[5];
  *(_QWORD *)(v394 + 1032) = v544;
  v425 = v541[1];
  v426 = v541[2];
  v427 = v541[3];
  *(_OWORD *)(v394 + 1040) = v541[0];
  *(_OWORD *)(v394 + 1056) = v425;
  *(_OWORD *)(v394 + 1072) = v426;
  *(_OWORD *)(v394 + 1088) = v427;
  *(_OWORD *)(v394 + 1104) = v541[4];
  *(_OWORD *)(v394 + 1120) = v541[5];
  *(_QWORD *)(v394 + 1136) = v542;
  v428 = v539[1];
  v429 = v539[2];
  v430 = v539[3];
  *(_OWORD *)(v394 + 1144) = v539[0];
  *(_OWORD *)(v394 + 1160) = v428;
  *(_OWORD *)(v394 + 1176) = v429;
  *(_OWORD *)(v394 + 1192) = v430;
  *(_OWORD *)(v394 + 1208) = v539[4];
  *(_OWORD *)(v394 + 1224) = v539[5];
  *(_QWORD *)(v394 + 1240) = v540;
  v431 = v537[1];
  v432 = v537[2];
  v433 = v537[3];
  *(_OWORD *)(v394 + 1248) = v537[0];
  *(_OWORD *)(v394 + 1264) = v431;
  *(_OWORD *)(v394 + 1280) = v432;
  *(_OWORD *)(v394 + 1296) = v433;
  *(_OWORD *)(v394 + 1312) = v537[4];
  *(_OWORD *)(v394 + 1328) = v537[5];
  *(_QWORD *)(v394 + 1344) = v538;
  v434 = v535[1];
  v435 = v535[2];
  v436 = v535[3];
  *(_OWORD *)(v394 + 1352) = v535[0];
  *(_OWORD *)(v394 + 1368) = v434;
  *(_OWORD *)(v394 + 1384) = v435;
  *(_OWORD *)(v394 + 1400) = v436;
  *(_OWORD *)(v394 + 1416) = v535[4];
  *(_OWORD *)(v394 + 1432) = v535[5];
  *(_QWORD *)(v394 + 1448) = v536;
  v437 = v533[1];
  v438 = v533[2];
  v439 = v533[3];
  *(_OWORD *)(v394 + 1456) = v533[0];
  *(_OWORD *)(v394 + 1472) = v437;
  *(_OWORD *)(v394 + 1488) = v438;
  *(_OWORD *)(v394 + 1504) = v439;
  *(_OWORD *)(v394 + 1520) = v533[4];
  *(_OWORD *)(v394 + 1536) = v533[5];
  *(_QWORD *)(v394 + 1552) = v534;
  v440 = v531[1];
  v441 = v531[2];
  v442 = v531[3];
  *(_OWORD *)(v394 + 1560) = v531[0];
  *(_OWORD *)(v394 + 1576) = v440;
  *(_OWORD *)(v394 + 1592) = v441;
  *(_OWORD *)(v394 + 1608) = v442;
  *(_OWORD *)(v394 + 1624) = v531[4];
  *(_OWORD *)(v394 + 1640) = v531[5];
  *(_QWORD *)(v394 + 1656) = v532;
  v443 = v529[1];
  v444 = v529[2];
  v445 = v529[3];
  *(_OWORD *)(v394 + 1664) = v529[0];
  *(_OWORD *)(v394 + 1680) = v443;
  *(_OWORD *)(v394 + 1696) = v444;
  *(_OWORD *)(v394 + 1712) = v445;
  *(_OWORD *)(v394 + 1728) = v529[4];
  *(_OWORD *)(v394 + 1744) = v529[5];
  *(_QWORD *)(v394 + 1760) = v530;
  v446 = v527[1];
  v447 = v527[2];
  v448 = v527[3];
  *(_OWORD *)(v394 + 1768) = v527[0];
  *(_OWORD *)(v394 + 1784) = v446;
  *(_OWORD *)(v394 + 1800) = v447;
  *(_OWORD *)(v394 + 1816) = v448;
  *(_OWORD *)(v394 + 1832) = v527[4];
  *(_OWORD *)(v394 + 1848) = v527[5];
  *(_QWORD *)(v394 + 1864) = v528;
  v449 = v591;
  v450 = v592;
  v451 = v593;
  *(_OWORD *)(v394 + 1872) = v590;
  *(_OWORD *)(v394 + 1888) = v449;
  *(_OWORD *)(v394 + 1904) = v450;
  *(_OWORD *)(v394 + 1920) = v451;
  *(_OWORD *)(v394 + 1936) = v594;
  *(_OWORD *)(v394 + 1952) = v595;
  *(_QWORD *)(v394 + 1968) = v596;
  v452 = v606;
  v453 = v607;
  v454 = v608;
  *(_OWORD *)(v394 + 1976) = v605;
  *(_OWORD *)(v394 + 1992) = v452;
  *(_OWORD *)(v394 + 2008) = v453;
  *(_OWORD *)(v394 + 2024) = v454;
  *(_OWORD *)(v394 + 2040) = v609;
  *(_OWORD *)(v394 + 2056) = v610;
  *(_QWORD *)(v394 + 2072) = v611;
  v455 = v525[1];
  v456 = v525[2];
  v457 = v525[3];
  *(_OWORD *)(v394 + 2080) = v525[0];
  *(_OWORD *)(v394 + 2096) = v455;
  *(_OWORD *)(v394 + 2112) = v456;
  *(_OWORD *)(v394 + 2128) = v457;
  *(_OWORD *)(v394 + 2144) = v525[4];
  *(_OWORD *)(v394 + 2160) = v525[5];
  *(_QWORD *)(v394 + 2176) = v526;
  v458 = v570;
  v459 = v571;
  v460 = v572;
  *(_OWORD *)(v394 + 2184) = v569;
  *(_OWORD *)(v394 + 2200) = v458;
  *(_OWORD *)(v394 + 2216) = v459;
  *(_OWORD *)(v394 + 2232) = v460;
  *(__m256i *)(v394 + 2248) = v573;
  *(_QWORD *)(v394 + 2280) = v574;
  v461 = v523[1];
  v462 = v523[2];
  v463 = v523[3];
  *(_OWORD *)(v394 + 2288) = v523[0];
  *(_OWORD *)(v394 + 2304) = v461;
  *(_OWORD *)(v394 + 2320) = v462;
  *(_OWORD *)(v394 + 2336) = v463;
  *(_OWORD *)(v394 + 2352) = v523[4];
  *(_OWORD *)(v394 + 2368) = v523[5];
  *(_QWORD *)(v394 + 2384) = v524;
  v464 = v613;
  v465 = v614;
  v466 = v615;
  *(__m128i *)(v394 + 2392) = v612;
  *(_OWORD *)(v394 + 2408) = v464;
  *(_OWORD *)(v394 + 2424) = v465;
  *(_OWORD *)(v394 + 2440) = v466;
  *(_OWORD *)(v394 + 2456) = v616;
  *(__m128i *)(v394 + 2472) = v617;
  *(_QWORD *)(v394 + 2488) = v618;
  v467 = v674;
  v468 = v675;
  v469 = v676;
  *(__m128i *)(v394 + 2496) = v673;
  *(_OWORD *)(v394 + 2512) = v467;
  *(_OWORD *)(v394 + 2528) = v468;
  *(_OWORD *)(v394 + 2544) = v469;
  *(__m256i *)(v394 + 2560) = v677;
  *(_QWORD *)(v394 + 2592) = v678;
  v470 = v645;
  v471 = v646;
  v472 = v647;
  *(__m128i *)(v394 + 2600) = v644;
  *(_OWORD *)(v394 + 2616) = v470;
  *(_OWORD *)(v394 + 2632) = v471;
  *(_OWORD *)(v394 + 2648) = v472;
  *(_OWORD *)(v394 + 2664) = v648;
  *(_OWORD *)(v394 + 2680) = v649;
  *(_QWORD *)(v394 + 2696) = v650;
  v473 = v681;
  v474 = v682;
  v475 = v683;
  *(_OWORD *)(v394 + 2704) = *(_OWORD *)hKey;
  *(_OWORD *)(v394 + 2720) = v473;
  *(_OWORD *)(v394 + 2736) = v474;
  *(_OWORD *)(v394 + 2752) = v475;
  *(__m256i *)(v394 + 2768) = v684;
  *(_QWORD *)(v394 + 2800) = v685;
  v476 = v661;
  v477 = v662;
  v478 = v663;
  *(_OWORD *)(v394 + 2808) = *(_OWORD *)lpSubKey;
  *(_OWORD *)(v394 + 2824) = v476;
  *(_OWORD *)(v394 + 2840) = v477;
  *(_OWORD *)(v394 + 2856) = v478;
  *(_OWORD *)(v394 + 2872) = v664;
  *(_OWORD *)(v394 + 2888) = v665;
  *(_QWORD *)(v394 + 2904) = v666;
  v479 = *(_OWORD *)&phkResult.m256i_u64[2];
  v480 = v691;
  v481 = v692;
  *(_OWORD *)(v394 + 2912) = *(_OWORD *)phkResult.m256i_i8;
  *(_OWORD *)(v394 + 2928) = v479;
  *(_OWORD *)(v394 + 2944) = v480;
  *(_OWORD *)(v394 + 2960) = v481;
  *(_OWORD *)(v394 + 2976) = *(_OWORD *)v693;
  *(__m128i *)(v394 + 2992) = _mm_loadu_si128((const __m128i *)&v693[16]);
  *(_QWORD *)(v394 + 3008) = v695;
  v482 = 40;
  v483 = v658;
  do
  {
    v484 = v482;
    if ( v482 == 3056 )
      break;
    if ( *(_QWORD *)(v394 + v482) != 2 )
      break;
    v485 = *(_WORD **)(v394 + v482 - 8);
    v482 += 104;
  }
  while ( *v485 == 27503 );
  v63 = v484 == 3056;
  result = (__int64)v597;
  *v597 = 29;
  *(_QWORD *)(result + 8) = v394;
  *(_QWORD *)(result + 16) = 29;
  *(_BYTE *)(result + 24) = !v63;
  *(_BYTE *)(result + 25) = 0;
  if ( v483 > 0 )
    result = sub_140001660(v699, v483, 1);
  if ( v599 )
    result = sub_140001660(v600, 8 * v599, 8);
  v487 = v602.m128i_i64[1];
  if ( v602.m128i_i64[1] )
  {
    v488 = *((_QWORD *)&v603 + 1);
    if ( *((_QWORD *)&v603 + 1) )
    {
      v489 = v602.m128i_i64[0];
      v490 = (const __m128i *)(v602.m128i_i64[0] + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v602.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v492 = _mm_load_si128(v490);
            v489 -= 384;
            ++v490;
            _R15D = _mm_movemask_epi8(v492) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v493 = -3 * result;
        v494 = *(_QWORD *)(v489 + 8 * v493 - 24);
        if ( v494 )
          sub_140001660(*(_QWORD *)(v489 + 8 * v493 - 16), v494, 1);
        --v488;
        result = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v488 );
    }
    result = (24 * v487 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v495 = result + v487 + 17;
    if ( v495 )
      result = sub_140001660(v602.m128i_i64[0] - result, v495, 16);
  }
  v496 = si128.m128i_i64[1];
  if ( si128.m128i_i64[1] )
  {
    v497 = *((_QWORD *)&v588 + 1);
    if ( *((_QWORD *)&v588 + 1) )
    {
      v498 = si128.m128i_i64[0];
      v499 = (const __m128i *)(si128.m128i_i64[0] + 16);
      _R15D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)si128.m128i_i64[0]));
      do
      {
        if ( !(_WORD)_R15D )
        {
          do
          {
            v501 = _mm_load_si128(v499);
            v498 -= 384;
            ++v499;
            _R15D = _mm_movemask_epi8(v501) ^ 0xFFFF;
          }
          while ( !_R15D );
        }
        __asm { tzcnt   eax, r15d }
        v502 = -3 * result;
        v503 = *(_QWORD *)(v498 + 8 * v502 - 24);
        if ( v503 )
          sub_140001660(*(_QWORD *)(v498 + 8 * v502 - 16), v503, 1);
        --v497;
        result = _R15D & (unsigned int)(_R15D - 1);
        _R15D &= _R15D - 1;
      }
      while ( v497 );
    }
    result = (24 * v496 + 39) & 0xFFFFFFFFFFFFFFF0uLL;
    v504 = result + v496 + 17;
    if ( v504 )
      return sub_140001660(si128.m128i_i64[0] - result, v504, 16);
  }
  return result;
}