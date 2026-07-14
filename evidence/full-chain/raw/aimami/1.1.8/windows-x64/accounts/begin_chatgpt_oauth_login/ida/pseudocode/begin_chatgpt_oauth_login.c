// begin_chatgpt_oauth_login -- AiMaMi 1.1.8 windows-x64 -- 反编译器 Hex-Rays 伪代码留档
// owner_va=0x14096b4e0 module="AiMaMi 1.1.8 win64.exe" session=<审计会话>
// sha256(AiMaMi 1.1.8 win64.exe)=f25d8129528b25ac7f69524fa07c78f961da189a7a8f2c758c288ec96bc68f10
// 说明: owner 是 dedicated_per_command_wrapper_fn (Tauri command handler), 单函数内联了本命令绝大部分业务逻辑;
// 下方另附 call-tree depth1~depth5 沿途 5 个函数完整伪代码 (均为泛型 Rust 运行时基础设施, 非命令专属业务逻辑)。

// ===== depth0/owner: sub_14096B4E0 (begin_chatgpt_oauth_login command handler) =====
char __fastcall sub_14096B4E0(__int64 *a1, __int64 a2, char *a3)
{
  __int64 v3; // rsi
  __int64 v4; // rax
  __int64 v5; // r8
  unsigned __int64 v6; // rdx
  signed __int64 v7; // r12
  char v8; // r13
  __int64 v9; // r14
  signed __int64 v10; // r15
  signed __int64 v11; // rbx
  __int64 v12; // rdi
  _BYTE *v13; // rcx
  _BYTE *v14; // rsi
  __int64 v15; // r8
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rdi
  __int64 v19; // rdx
  __int128 v20; // xmm1
  __int128 v21; // xmm2
  __int128 v22; // xmm3
  __int64 v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rdx
  char *v26; // rcx
  __int128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm2
  __int64 *v30; // r15
  int v31; // edi
  char *v32; // rsi
  unsigned __int64 v33; // r14
  int v34; // r13d
  int v35; // edi
  __int64 v36; // r12
  char v37; // al
  unsigned __int64 v38; // r13
  __int64 v39; // rax
  bool v40; // zf
  __int64 v41; // rdi
  _QWORD *v42; // rsi
  char v43; // al
  volatile signed __int64 *v44; // r14
  _BYTE *v45; // r12
  void (__fastcall **v46)(volatile signed __int64 *); // r15
  __int64 v47; // rbx
  __int64 v48; // rcx
  __int64 v49; // rdi
  __int64 v50; // rdx
  __int64 v51; // r8
  __int64 v52; // r9
  __int64 v53; // rax
  _BYTE *v54; // r13
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  _QWORD *v57; // r9
  char *v58; // rbx
  const char *v59; // rdx
  volatile signed __int64 *v60; // r10
  __int64 v61; // r8
  __int128 v62; // xmm0
  unsigned int v63; // edi
  char v64; // al
  __int64 v65; // rsi
  char *v66; // r13
  __int64 v67; // rax
  unsigned int v68; // r15d
  __int64 v69; // r12
  void (__fastcall **v70)(volatile signed __int64 *); // rsi
  __int64 v71; // r14
  __int64 v72; // rsi
  unsigned __int64 v73; // r12
  volatile signed __int64 *v74; // rdi
  __int64 v75; // r12
  __int64 v76; // r15
  __int64 v77; // rdi
  __int64 v78; // rcx
  __int64 v79; // rdi
  char *v80; // rsi
  char v81; // r14
  __int64 v82; // r12
  volatile signed __int64 *v83; // rdi
  void (__fastcall **v84)(volatile signed __int64 *); // r13
  __int64 v85; // rdx
  char *v86; // rbx
  volatile signed __int64 *v87; // rdi
  int *v88; // rax
  volatile signed __int64 *v89; // rdx
  __int64 v90; // rdi
  __int64 v91; // r13
  char v92; // r15
  __int64 v93; // r14
  __int64 v94; // rdx
  __int64 v95; // rbx
  __int64 v96; // rax
  __int64 v97; // rdi
  char v98; // al
  char v99; // r15
  char v100; // r15
  volatile signed __int64 **v101; // rcx
  __int64 v102; // rsi
  __int64 v103; // rdx
  __int64 v104; // rdx
  __int64 v105; // r15
  PVOID v106; // rdi
  __int64 v107; // rcx
  char *v108; // rdx
  int v109; // ecx
  __int64 v110; // rax
  __int64 v111; // r8
  __int64 v112; // rdx
  __int64 v113; // r8
  PVOID v114; // rsi
  __int64 v115; // rax
  __int64 v116; // rsi
  volatile signed __int64 *v117; // rdx
  char *v118; // r14
  __int64 *v119; // rbx
  __int64 v120; // rdi
  __int64 v121; // rax
  __int128 v122; // xmm0
  __int64 v123; // rax
  void (__fastcall **v124)(volatile signed __int64 *); // rsi
  PVOID v125; // rdi
  __int64 v126; // r14
  __int64 v127; // rax
  __int64 v128; // rcx
  __int64 v129; // rdx
  __int64 v130; // rax
  __int64 v131; // rcx
  __int64 v132; // rax
  __int64 v133; // rcx
  __int64 v134; // r8
  _OWORD *v135; // rdx
  __int128 v136; // xmm0
  __int128 v137; // xmm1
  __int128 v138; // xmm2
  unsigned __int64 v139; // rdi
  __int64 v140; // rax
  void (__fastcall **v141)(volatile signed __int64 *); // r14
  unsigned __int64 v142; // rax
  __int64 v143; // rsi
  __int64 v144; // rdi
  void *v145; // rax
  int v146; // ecx
  char v147; // r13
  void *v148; // rbx
  __int64 v149; // rdi
  __int64 v150; // rax
  __int64 v151; // rdx
  void (__fastcall **v152)(volatile signed __int64 *); // rsi
  __int64 v153; // rax
  _OWORD *v154; // rax
  __int64 v155; // rbx
  __int64 v156; // rcx
  __int64 v157; // rax
  char *v158; // r8
  __int64 v159; // rcx
  __int64 v160; // r15
  PVOID v161; // rcx
  char v162; // al
  __int64 v163; // rdx
  __int64 v164; // rcx
  PVOID v165; // rcx
  char v166; // al
  void (__fastcall **v167)(volatile signed __int64 *); // rsi
  volatile signed __int64 *v168; // rdi
  __int64 v169; // rax
  __int64 v170; // rax
  __int64 v171; // rax
  __int64 v172; // rdx
  __int64 v173; // rdx
  unsigned __int64 v174; // r15
  char result; // al
  __int64 v176; // rdx
  __int64 v177; // rcx
  __int64 *v178; // rdi
  __int64 v179; // rcx
  char v180; // al
  volatile signed __int64 *v181; // rdi
  PVOID v182; // rsi
  __int64 v183; // r14
  __int64 v184; // r15
  __int64 v185; // rcx
  PVOID v186; // rdi
  __int64 v187; // rbx
  __int64 v188; // rax
  __int64 v189; // r9
  __int128 v190; // xmm0
  __int128 v191; // xmm1
  __int128 v192; // xmm2
  __int128 v193; // xmm3
  __int128 v194; // xmm4
  __int128 v195; // xmm5
  __int128 v196; // xmm6
  unsigned __int8 *v197; // rax
  int v198; // r14d
  unsigned __int8 *v199; // rbx
  __int64 *v200; // rbx
  __int64 v201; // rcx
  char v202; // di
  __int64 v203; // rbx
  __int64 v204; // rdx
  __int64 v205; // rcx
  __int64 v206; // rdx
  __int64 v207; // rax
  __int64 v208; // rdx
  __int64 v209; // rcx
  char v210; // al
  char v211; // al
  char v212; // r15
  char v213; // r15
  volatile signed __int64 *v214; // rdi
  unsigned int v215; // eax
  __int64 v216; // rbx
  char v217; // al
  __int64 v218; // rax
  __int64 v219; // rdx
  __int64 v220; // rcx
  __int64 v221; // rdi
  __int64 v222; // r8
  __int64 v223; // rax
  PVOID v224; // rdx
  __int64 v225; // rdx
  __int64 v226; // r8
  char *v227; // rcx
  char *v228; // rsi
  __int64 *v229; // rcx
  char *v230; // rdi
  volatile signed __int64 *v231; // rsi
  char *v232; // rdi
  volatile signed __int64 *v233; // rsi
  char v234; // al
  _BYTE v235[144]; // [rsp+30h] [rbp-50h] BYREF
  _BYTE v236[152]; // [rsp+C0h] [rbp+40h] BYREF
  _BYTE v237[152]; // [rsp+158h] [rbp+D8h] BYREF
  _BYTE v238[144]; // [rsp+1F0h] [rbp+170h] BYREF
  _BYTE v239[144]; // [rsp+280h] [rbp+200h] BYREF
  _QWORD v240[5]; // [rsp+310h] [rbp+290h] BYREF
  char v241[144]; // [rsp+338h] [rbp+2B8h] BYREF
  char *v242; // [rsp+3C8h] [rbp+348h] BYREF
  PVOID Address; // [rsp+3D0h] [rbp+350h]
  __int64 v244; // [rsp+3D8h] [rbp+358h]
  __int64 v245; // [rsp+3E0h] [rbp+360h]
  __int64 v246; // [rsp+3E8h] [rbp+368h]
  __int64 v247; // [rsp+3F0h] [rbp+370h]
  __int64 v248; // [rsp+3F8h] [rbp+378h]
  _OWORD v249[4]; // [rsp+668h] [rbp+5E8h] BYREF
  __int64 v250; // [rsp+6A8h] [rbp+628h]
  unsigned __int64 v251; // [rsp+6F8h] [rbp+678h]
  volatile signed __int64 *v252; // [rsp+700h] [rbp+680h]
  char *v253; // [rsp+708h] [rbp+688h]
  unsigned __int64 v254; // [rsp+710h] [rbp+690h]
  char *v255; // [rsp+718h] [rbp+698h] BYREF
  char v256[144]; // [rsp+720h] [rbp+6A0h] BYREF
  __int128 v257; // [rsp+7B0h] [rbp+730h] BYREF
  __int128 v258; // [rsp+7C0h] [rbp+740h]
  __int128 v259[9]; // [rsp+7D0h] [rbp+750h] BYREF
  __int128 v260; // [rsp+868h] [rbp+7E8h] BYREF
  __int64 v261; // [rsp+878h] [rbp+7F8h]
  __int128 v262; // [rsp+880h] [rbp+800h]
  __int128 v263; // [rsp+890h] [rbp+810h]
  __int128 v264; // [rsp+8A0h] [rbp+820h]
  __int128 v265; // [rsp+8B0h] [rbp+830h]
  __int128 v266; // [rsp+8C0h] [rbp+840h]
  __int128 v267; // [rsp+8D0h] [rbp+850h]
  __int128 v268; // [rsp+8E0h] [rbp+860h]
  __int128 v269; // [rsp+8F0h] [rbp+870h]
  __int64 v270; // [rsp+900h] [rbp+880h]
  __int128 v271; // [rsp+910h] [rbp+890h] BYREF
  __int128 v272; // [rsp+920h] [rbp+8A0h]
  __int64 v273; // [rsp+930h] [rbp+8B0h]
  volatile signed __int64 *v274; // [rsp+9A8h] [rbp+928h]
  __int64 v275; // [rsp+9B0h] [rbp+930h]
  volatile signed __int64 *v276; // [rsp+9B8h] [rbp+938h]
  _BYTE v277[120]; // [rsp+9C0h] [rbp+940h] BYREF
  __int128 v278; // [rsp+A38h] [rbp+9B8h]
  __int128 v279; // [rsp+A48h] [rbp+9C8h]
  char v280[616]; // [rsp+A58h] [rbp+9D8h] BYREF
  __int128 v281; // [rsp+CC0h] [rbp+C40h] BYREF
  __int128 v282; // [rsp+CD0h] [rbp+C50h]
  __int128 v283; // [rsp+CE0h] [rbp+C60h] BYREF
  __int128 v284; // [rsp+CF0h] [rbp+C70h]
  __int64 v285; // [rsp+D00h] [rbp+C80h]
  __int64 v286; // [rsp+D08h] [rbp+C88h]
  __int64 v287; // [rsp+D10h] [rbp+C90h]
  __int64 v288; // [rsp+D18h] [rbp+C98h]
  __int64 v289; // [rsp+D20h] [rbp+CA0h]
  __int64 v290; // [rsp+D28h] [rbp+CA8h]
  __int64 v291; // [rsp+D30h] [rbp+CB0h]
  char *v292; // [rsp+D38h] [rbp+CB8h]
  int v293; // [rsp+D40h] [rbp+CC0h]
  char v294; // [rsp+D44h] [rbp+CC4h]
  char v295; // [rsp+D45h] [rbp+CC5h]
  PVOID v296; // [rsp+D50h] [rbp+CD0h]
  void (__fastcall **v297)(volatile signed __int64 *); // [rsp+D58h] [rbp+CD8h]
  __int64 v298; // [rsp+D60h] [rbp+CE0h]
  void (__fastcall **v299)(volatile signed __int64 *); // [rsp+D68h] [rbp+CE8h]
  void (__fastcall **v300)(volatile signed __int64 *); // [rsp+D70h] [rbp+CF0h]
  __int64 v301; // [rsp+D78h] [rbp+CF8h]
  __int128 v302; // [rsp+D80h] [rbp+D00h]
  __int64 v303; // [rsp+D90h] [rbp+D10h]
  __int128 v304; // [rsp+DA0h] [rbp+D20h] BYREF
  __int128 v305; // [rsp+DB0h] [rbp+D30h]
  __int64 v306; // [rsp+DC0h] [rbp+D40h]
  __int64 v307; // [rsp+DC8h] [rbp+D48h]
  __int64 v308; // [rsp+DD0h] [rbp+D50h]
  __int64 v309; // [rsp+DD8h] [rbp+D58h]
  char *v310; // [rsp+DE0h] [rbp+D60h]
  __int64 v311; // [rsp+DE8h] [rbp+D68h]
  __int64 v312; // [rsp+DF8h] [rbp+D78h]
  __int64 v313; // [rsp+E00h] [rbp+D80h]
  __int64 v314; // [rsp+E08h] [rbp+D88h]
  __int64 v315; // [rsp+E18h] [rbp+D98h]
  __int64 v316; // [rsp+E20h] [rbp+DA0h]
  __int64 v317; // [rsp+E28h] [rbp+DA8h]
  PVOID v318; // [rsp+E40h] [rbp+DC0h]
  void (__fastcall **v319)(volatile signed __int64 *); // [rsp+E48h] [rbp+DC8h]
  __int64 v320; // [rsp+E50h] [rbp+DD0h]
  __int64 v321; // [rsp+E58h] [rbp+DD8h]
  __int64 v322; // [rsp+E60h] [rbp+DE0h]
  __int64 v323; // [rsp+E68h] [rbp+DE8h]
  __int128 v324; // [rsp+E70h] [rbp+DF0h] BYREF
  __int64 v325; // [rsp+E80h] [rbp+E00h]
  _DWORD v326[2]; // [rsp+E88h] [rbp+E08h]
  __int64 v327; // [rsp+E90h] [rbp+E10h]
  PVOID v328; // [rsp+E98h] [rbp+E18h]
  void (__fastcall **v329)(volatile signed __int64 *); // [rsp+EA0h] [rbp+E20h]
  void (__fastcall **v330)(volatile signed __int64 *); // [rsp+EA8h] [rbp+E28h]
  __int64 *v331; // [rsp+EB0h] [rbp+E30h]
  __int64 v332; // [rsp+EB8h] [rbp+E38h]
  __int128 v333; // [rsp+EC0h] [rbp+E40h] BYREF
  __int128 v334; // [rsp+ED0h] [rbp+E50h]
  __int128 v335; // [rsp+EE0h] [rbp+E60h] BYREF
  __int128 v336; // [rsp+EF0h] [rbp+E70h]
  __int128 v337; // [rsp+F00h] [rbp+E80h]
  __int128 v338; // [rsp+F10h] [rbp+E90h]
  __int128 v339; // [rsp+F20h] [rbp+EA0h]
  __int64 v340; // [rsp+F30h] [rbp+EB0h]
  PVOID v341; // [rsp+F80h] [rbp+F00h]
  void (__fastcall **v342)(volatile signed __int64 *); // [rsp+F88h] [rbp+F08h]
  PVOID v343; // [rsp+F90h] [rbp+F10h]
  void (__fastcall **v344)(volatile signed __int64 *); // [rsp+F98h] [rbp+F18h]
  PVOID v345; // [rsp+FA0h] [rbp+F20h]
  void (__fastcall **v346)(volatile signed __int64 *); // [rsp+FA8h] [rbp+F28h]
  _BYTE *v347; // [rsp+FB0h] [rbp+F30h]
  _BYTE v348[7]; // [rsp+FB8h] [rbp+F38h]
  _BYTE v349[7]; // [rsp+FC0h] [rbp+F40h]
  __int64 v350; // [rsp+FC8h] [rbp+F48h]
  _DWORD v351[2]; // [rsp+FD0h] [rbp+F50h] BYREF
  PVOID v352; // [rsp+FD8h] [rbp+F58h]
  void (__fastcall **v353)(volatile signed __int64 *); // [rsp+FE0h] [rbp+F60h]
  PVOID v354; // [rsp+FE8h] [rbp+F68h]
  void (__fastcall **v355)(volatile signed __int64 *); // [rsp+FF0h] [rbp+F70h]
  PVOID v356; // [rsp+FF8h] [rbp+F78h]
  void (__fastcall **v357)(volatile signed __int64 *); // [rsp+1000h] [rbp+F80h]
  volatile signed __int64 *v358; // [rsp+1008h] [rbp+F88h]
  PVOID v359; // [rsp+1010h] [rbp+F90h]
  void (__fastcall **v360)(volatile signed __int64 *); // [rsp+1018h] [rbp+F98h]
  volatile signed __int64 *v361; // [rsp+1020h] [rbp+FA0h] BYREF
  volatile signed __int64 *v362; // [rsp+1028h] [rbp+FA8h] BYREF
  _OWORD *v363; // [rsp+1030h] [rbp+FB0h]
  __int64 v364; // [rsp+1038h] [rbp+FB8h]
  _DWORD v365[2]; // [rsp+1040h] [rbp+FC0h]
  void (__fastcall **v366)(volatile signed __int64 *); // [rsp+1048h] [rbp+FC8h]
  char *v367; // [rsp+1050h] [rbp+FD0h]
  volatile signed __int64 *v368; // [rsp+1058h] [rbp+FD8h]
  void (__fastcall **v369)(volatile signed __int64 *); // [rsp+1060h] [rbp+FE0h]
  void (__fastcall **v370)(volatile signed __int64 *); // [rsp+1068h] [rbp+FE8h]
  char *v371; // [rsp+1070h] [rbp+FF0h]
  volatile signed __int64 *v372; // [rsp+1078h] [rbp+FF8h]
  _DWORD v373[2]; // [rsp+1080h] [rbp+1000h]
  _BYTE v374[7]; // [rsp+1088h] [rbp+1008h]
  void (__fastcall **v375)(volatile signed __int64 *); // [rsp+1090h] [rbp+1010h]
  char *v376; // [rsp+1098h] [rbp+1018h]
  volatile signed __int64 *v377; // [rsp+10A0h] [rbp+1020h]
  _DWORD v378[2]; // [rsp+10A8h] [rbp+1028h]
  volatile signed __int64 **v379; // [rsp+10B0h] [rbp+1030h]
  char v380; // [rsp+10BEh] [rbp+103Eh]
  char v381; // [rsp+10BFh] [rbp+103Fh]
  char *v382; // [rsp+10C0h] [rbp+1040h]
  char *v383; // [rsp+10C8h] [rbp+1048h]
  char v384; // [rsp+10D7h] [rbp+1057h] BYREF
  volatile signed __int64 *v385; // [rsp+10D8h] [rbp+1058h]
  PVOID v386; // [rsp+10E0h] [rbp+1060h]
  void (__fastcall **v387)(volatile signed __int64 *); // [rsp+10E8h] [rbp+1068h]
  __int64 v388; // [rsp+10F0h] [rbp+1070h]
  __int64 v389; // [rsp+10F8h] [rbp+1078h]

  v389 = -2; /*0x14096b508*/
  v382 = a3; /*0x14096b513*/
  v3 = a2; /*0x14096b51a*/
  v331 = a1; /*0x14096b51d*/
  v4 = *(unsigned __int8 *)(a2 + 2880); /*0x14096b524*/
  v388 = a2; /*0x14096b539*/
  switch ( v4 ) /*0x14096b540*/
  {
    case 0LL: /*0x14096b540*/
      v248 = 0; /*0x14096b549*/
      v242 = aBeginChatgptOa; /*0x14096b55b*/
      Address = (PVOID)25; /*0x14096b562*/
      v244 = (__int64)aApp_4; /*0x14096b574*/
      v245 = 3; /*0x14096b57b*/
      v246 = a2; /*0x14096b586*/
      v247 = a2 + 520; /*0x14096b58d*/
      sub_140421360(v277, &v242); /*0x14096b5a2*/
      v6 = (unsigned __int64)((v277[15] << 16) | (unsigned int)*(unsigned __int16 *)&v277[13]) << 32; /*0x14096b5c2*/
      v7 = v6 | *(unsigned int *)&v277[9]; /*0x14096b5cd*/
      v8 = v277[8]; /*0x14096b5d0*/
      v9 = *(_QWORD *)&v277[24]; /*0x14096b5df*/
      v10 = *(_QWORD *)&v277[16]; /*0x14096b5df*/
      v11 = *(_QWORD *)&v277[32]; /*0x14096b5e6*/
      if ( *(_QWORD *)v277 != 3 ) /*0x14096b5f1*/
      {
        v268 = v279; /*0x14096b6d5*/
        v267 = v278; /*0x14096b6e3*/
        v266 = *(_OWORD *)&v277[104]; /*0x14096b6f1*/
        v265 = *(_OWORD *)&v277[88]; /*0x14096b714*/
        v264 = *(_OWORD *)&v277[72]; /*0x14096b71b*/
        v263 = *(_OWORD *)&v277[56]; /*0x14096b722*/
        v262 = *(_OWORD *)&v277[40]; /*0x14096b729*/
        v3 = v388; /*0x14096b730*/
        v19 = v388 + 544; /*0x14096b737*/
        *(_QWORD *)(v388 + 544) = *(_QWORD *)v277; /*0x14096b73e*/
        *(_BYTE *)(v3 + 552) = v8; /*0x14096b745*/
        *(_BYTE *)(v3 + 559) = BYTE6(v7); /*0x14096b753*/
        *(_WORD *)(v3 + 557) = WORD2(v7); /*0x14096b760*/
        *(_DWORD *)(v3 + 553) = v7; /*0x14096b767*/
        *(_QWORD *)(v3 + 560) = v10; /*0x14096b76e*/
        *(_QWORD *)(v3 + 568) = v9; /*0x14096b775*/
        *(_QWORD *)(v3 + 576) = v11; /*0x14096b77c*/
        v20 = v263; /*0x14096b78a*/
        v21 = v264; /*0x14096b791*/
        v22 = v265; /*0x14096b798*/
        *(_OWORD *)(v3 + 584) = v262; /*0x14096b79f*/
        *(_OWORD *)(v3 + 600) = v20; /*0x14096b7a6*/
        *(_OWORD *)(v3 + 616) = v21; /*0x14096b7ad*/
        *(_OWORD *)(v3 + 632) = v22; /*0x14096b7b4*/
        *(_OWORD *)(v3 + 648) = v266; /*0x14096b7c2*/
        *(_OWORD *)(v3 + 664) = v267; /*0x14096b7d0*/
        *(_OWORD *)(v3 + 680) = v268; /*0x14096b7de*/
        *(_BYTE *)(v3 + 1312) = 0; /*0x14096b7e5*/
        sub_1412762D0(v3 + 1320, v19, 776); /*0x14096b7fc*/
        v17 = v3 + 1320; /*0x14096b801*/
        v347 = (_BYTE *)(v3 + 2872); /*0x14096b80b*/
        *(_BYTE *)(v3 + 2872) = 0; /*0x14096b812*/
LABEL_10:
        v18 = v3 + 2096; /*0x14096b819*/
        v321 = v17; /*0x14096b829*/
        sub_1412762D0(v3 + 2096, v17, 776); /*0x14096b830*/
        switch ( *(_BYTE *)(v3 + 2864) ) /*0x14096b84a*/
        {
          case 0: /*0x14096b84a*/
            goto LABEL_11;
          case 1: /*0x14096b84a*/
            goto LABEL_316;
          case 2: /*0x14096b84a*/
            goto LABEL_315;
          case 3: /*0x14096b84a*/
            goto LABEL_38;
        }
      }
      v386 = (PVOID)(v3 + 520); /*0x14096b5f7*/
      sub_1409B5490(v388, v6, v5); /*0x14096b605*/
      v12 = 1; /*0x14096b60b*/
      if ( !__OFSUB__(0, *(_QWORD *)v386) ) /*0x14096b61c*/
      {
        v13 = *(_BYTE **)(v388 + 528); /*0x14096b629*/
        v382 = *(char **)(v388 + 536); /*0x14096b637*/
        v387 = nullptr; /*0x14096b63e*/
        v347 = v13; /*0x14096b649*/
        while ( v382 != (char *)v387 ) /*0x14096b65e*/
        {
          v387 = (void (__fastcall **)(volatile signed __int64 *))((char *)v387 + 1); /*0x14096b667*/
          v14 = v13 + 96; /*0x14096b66e*/
          sub_1401EEBE0(); /*0x14096b672*/
          v13 = v14; /*0x14096b678*/
        }
        v67 = *(_QWORD *)v386; /*0x14096bec4*/
        if ( *(_QWORD *)v386 ) /*0x14096bec4*/
        {
          v65 = v388; /*0x14096becc*/
          goto LABEL_290; /*0x14096bed3*/
        }
      }
      v65 = v388; /*0x14096bed8*/
      goto LABEL_291; /*0x14096bedf*/
    case 1LL: /*0x14096b540*/
      sub_1412ADB20(&off_1413613C8); /*0x14096eba7*/
    case 2LL: /*0x14096b540*/
      sub_1412ADB40(&off_1413613C8); /*0x14096eb99*/
    case 3LL: /*0x14096b540*/
      v15 = a2 + 2872; /*0x14096b67d*/
      v16 = *(unsigned __int8 *)(a2 + 2872); /*0x14096b684*/
      v17 = a2 + 1320; /*0x14096b68b*/
      v347 = (_BYTE *)(v3 + 2872); /*0x14096b6a0*/
      switch ( v16 ) /*0x14096b6a7*/
      {
        case 0LL: /*0x14096b6a7*/
          goto LABEL_10;
        case 1LL: /*0x14096b6a7*/
          v312 = v3 + 1320; /*0x14096ebf9*/
          sub_1412ADB20(&off_141363708); /*0x14096ec07*/
        case 2LL: /*0x14096b6a7*/
          v312 = v3 + 1320; /*0x14096ebe0*/
          sub_1412ADB40(&off_141363708); /*0x14096ebee*/
        case 3LL: /*0x14096b6a7*/
          v321 = v3 + 1320; /*0x14096b6a9*/
          v18 = v3 + 2096; /*0x14096b6b0*/
          switch ( *(_BYTE *)(v3 + 2864) ) /*0x14096b6cc*/
          {
            case 0: /*0x14096b6cc*/
LABEL_11:
              *(_WORD *)(v3 + 2865) = 0; /*0x14096b84c*/
              v23 = v3 + 2248; /*0x14096b855*/
              v332 = v18; /*0x14096b865*/
              sub_1412762D0(v3 + 2248, v18, 152); /*0x14096b86f*/
              *(_QWORD *)v277 = 1; /*0x14096b874*/
              *(_QWORD *)&v277[8] = 1; /*0x14096b87f*/
              *(_QWORD *)&v277[48] = 0; /*0x14096b88a*/
              v277[56] = 0; /*0x14096b895*/
              ((void (*)(void))nullsub_1)(); /*0x14096b89c*/
              v24 = sub_140001360(64, 8); /*0x14096b8ab*/
              if ( !v24 ) /*0x14096b8b3*/
                sub_1412AD451(8, 64); /*0x14096e1e2*/
              v27 = *(_OWORD *)v277; /*0x14096b8b9*/
              v28 = *(_OWORD *)&v277[16]; /*0x14096b8c0*/
              v29 = *(_OWORD *)&v277[32]; /*0x14096b8c7*/
              *(_OWORD *)(v24 + 48) = *(_OWORD *)&v277[48]; /*0x14096b8d5*/
              *(_OWORD *)(v24 + 32) = v29; /*0x14096b8d9*/
              *(_OWORD *)(v24 + 16) = v28; /*0x14096b8dd*/
              *(_OWORD *)v24 = v27; /*0x14096b8e1*/
              if ( _InterlockedIncrement64((volatile signed __int64 *)v24) <= 0 ) /*0x14096b8e8*/
                BUG(); /*0x14096ed7b*/
              *(_BYTE *)(v3 + 2866) = 1; /*0x14096b8ee*/
              v362 = (volatile signed __int64 *)v24; /*0x14096b8f5*/
              *(_BYTE *)(v3 + 2865) = 1; /*0x14096b8fc*/
              v361 = (volatile signed __int64 *)v24; /*0x14096b903*/
              if ( dword_14195D0C0 ) /*0x14096b912*/
                sub_1412781B7(); /*0x14096e1ed*/
              LOBYTE(v26) = 1; /*0x14096b918*/
              if ( _InterlockedCompareExchange8(&byte_14195D0A8, 1, 0) ) /*0x14096b91c*/
                sub_1412ABCB0(&byte_14195D0A8); /*0x14096e1ff*/
              v30 = off_141963EA8; /*0x14096b92a*/
              if ( 2 * *off_141963EA8 ) /*0x14096b934*/
              {
                v31 = sub_1412AC970(v26, v25); /*0x14096e210*/
                LOBYTE(v31) = v31 ^ 1; /*0x14096e212*/
                if ( byte_14195D0A9 ) /*0x14096e21f*/
                  goto LABEL_19; /*0x14096e21f*/
              }
              else
              {
                v31 = 0; /*0x14096b940*/
                if ( byte_14195D0A9 ) /*0x14096b94b*/
                {
LABEL_19:
                  LODWORD(v387) = v31; /*0x14096b951*/
                  v242 = nullptr; /*0x14096b957*/
                  Address = (PVOID)1; /*0x14096b962*/
                  v244 = 0; /*0x14096b96d*/
                  *(_QWORD *)&v277[16] = 1610612768; /*0x14096b978*/
                  *(_QWORD *)v277 = &v242; /*0x14096b98a*/
                  *(_QWORD *)&v277[8] = &off_141363340; /*0x14096b998*/
                  if ( (unsigned __int8)sub_14109EE30(aPoisonedLockAn, 41, v277) ) /*0x14096b9b2*/
                    sub_1412AD780( /*0x14096e3f3*/
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v384,
                      (unsigned int)&unk_141363430,
                      (__int64)&off_1413633F8);
                  v386 = v242; /*0x14096b9c7*/
                  v32 = (char *)Address; /*0x14096b9ce*/
                  LODWORD(v33) = (unsigned __int8)v244; /*0x14096b9d5*/
                  v34 = HIBYTE(v244); /*0x14096b9dd*/
                  v35 = *(unsigned __int16 *)((char *)&v244 + 5); /*0x14096b9e5*/
                  v36 = *(unsigned int *)((char *)&v244 + 1); /*0x14096b9ec*/
                  if ( !(_BYTE)v387 && 2 * *v30 && !(unsigned __int8)sub_1412AC970(v26, v25) ) /*0x14096e462*/
                    byte_14195D0A9 = 1; /*0x14096e470*/
                  v37 = byte_14195D0A8; /*0x14096ba0d*/
                  byte_14195D0A8 = 0; /*0x14096ba0d*/
                  if ( v37 == 2 ) /*0x14096ba15*/
                    WakeByAddressSingle(&byte_14195D0A8); /*0x14096e405*/
                  if ( !__OFSUB__(-(__int64)v386, 1) ) /*0x14096ba25*/
                  {
                    v38 = (unsigned int)(v34 << 16); /*0x14096bfa0*/
                    v73 = ((unsigned __int64)((unsigned int)v38 | v35) << 32) | v36; /*0x14096bfab*/
                    v74 = v361; /*0x14096bfae*/
                    if ( v361 ) /*0x14096bfb8*/
                    {
LABEL_237:
                      v211 = _InterlockedOr64(v74 + 6, 4u); /*0x14096e2e0*/
                      if ( (v211 & 0xA) == 8 ) /*0x14096e2f7*/
                      {
                        v212 = v211; /*0x14096e301*/
                        (*(void (__fastcall **)(_QWORD))(*((_QWORD *)v74 + 2) + 16LL))(*((_QWORD *)v74 + 3)); /*0x14096e304*/
                        v211 = v212; /*0x14096e307*/
                      }
                      if ( (v211 & 3) == 1 ) /*0x14096e312*/
                      {
                        _InterlockedAnd64(v74 + 6, 0xFFFFFFFFFFFFFFFEuLL); /*0x14096e314*/
                        v213 = v211; /*0x14096e31e*/
                        sub_140EF1800(v74 + 4); /*0x14096e321*/
                        v211 = v213; /*0x14096e326*/
                      }
                      if ( (v211 & 2) != 0 ) /*0x14096e32b*/
                        *((_BYTE *)v74 + 56) = 0; /*0x14096e32d*/
                      if ( v361 && !_InterlockedDecrement64(v361) ) /*0x14096e33d*/
                        sub_140EEA580(&v361); /*0x14096e34a*/
                    }
LABEL_246:
                    *(_BYTE *)(v388 + 2865) = 0; /*0x14096e350*/
                    v214 = v362; /*0x14096e35e*/
                    if ( v362 ) /*0x14096e368*/
                    {
                      if ( (sub_140EF1810(v362 + 6) & 5) == 1 ) /*0x14096e37a*/
                        (*(void (__fastcall **)(_QWORD))(*((_QWORD *)v214 + 4) + 16LL))(*((_QWORD *)v214 + 5)); /*0x14096e384*/
                      if ( v362 && !_InterlockedDecrement64(v362) ) /*0x14096e394*/
                        sub_140EEA580(&v362); /*0x14096e3a1*/
                    }
                    *(_BYTE *)(v388 + 2866) = 0; /*0x14096e3ae*/
                    sub_1400453B0(v23); /*0x14096e3b8*/
                    v174 = 0x8000000000000000uLL; /*0x14096e3be*/
LABEL_272:
                    sub_1412762D0(v235, v238, 144); /*0x14096e58f*/
                    *(_BYTE *)(v388 + 2864) = 1; /*0x14096e5af*/
                    v7 = v73 << 8; /*0x14096e5b6*/
                    v11 = v7 | (unsigned __int8)v33; /*0x14096e5be*/
                    sub_1412762D0(v239, v235, 144); /*0x14096e5d1*/
                    if ( !__OFSUB__(-(__int64)v174, 1) ) /*0x14096e5dc*/
                    {
                      sub_1412762D0(v241, v239, 144); /*0x14096e615*/
                      v240[0] = v174; /*0x14096e61a*/
                      v240[1] = v386; /*0x14096e628*/
                      v240[2] = v32; /*0x14096e62f*/
                      v240[3] = v7 | (unsigned __int8)v33; /*0x14096e636*/
                      v240[4] = v38; /*0x14096e63d*/
                      sub_140035010(v277, v240); /*0x14096e652*/
                      v7 = ((unsigned __int64)((v277[15] << 16) | (unsigned int)*(unsigned __int16 *)&v277[13]) << 32) /*0x14096e67d*/
                         | *(unsigned int *)&v277[9];
                      v8 = v277[8]; /*0x14096e68a*/
                      v9 = *(_QWORD *)&v277[24]; /*0x14096e699*/
                      v10 = *(_QWORD *)&v277[16]; /*0x14096e699*/
                      v11 = *(_QWORD *)&v277[32]; /*0x14096e6a0*/
                      if ( *(_QWORD *)v277 == 0x8000000000000025uLL ) /*0x14096e6aa*/
                      {
                        v12 = 0; /*0x14096e6ac*/
                      }
                      else
                      {
                        v277[15] = (((unsigned __int64)((v277[15] << 16) | (unsigned int)*(unsigned __int16 *)&v277[13]) << 32) /*0x14096e6c1*/
                                  | *(unsigned int *)&v277[9]) >> 48;
                        *(_WORD *)&v277[13] = WORD2(v7); /*0x14096e6ce*/
                        *(_DWORD *)&v277[9] = v7; /*0x14096e6d5*/
                        *(_QWORD *)&v333 = 0; /*0x14096e706*/
                        *((_QWORD *)&v333 + 1) = 1; /*0x14096e711*/
                        *(_QWORD *)&v334 = 0; /*0x14096e71c*/
                        v244 = 1610612768; /*0x14096e727*/
                        v242 = (char *)&v333; /*0x14096e739*/
                        Address = &off_141363340; /*0x14096e747*/
                        if ( (unsigned __int8)sub_140E156C0(v277, &v242, v222) ) /*0x14096e75c*/
                          sub_1412AD780( /*0x14096e959*/
                            (unsigned int)aADisplayImplem_11,
                            55,
                            (unsigned int)&v384,
                            (unsigned int)&unk_141363430,
                            (__int64)&off_1413633F8);
                        v9 = *((_QWORD *)&v333 + 1); /*0x14096e771*/
                        v10 = v333; /*0x14096e771*/
                        v11 = v334; /*0x14096e778*/
                        sub_1409AF240(v277); /*0x14096e786*/
                        v12 = 1; /*0x14096e78c*/
                        v8 = 3; /*0x14096e791*/
                      }
                      goto LABEL_285; /*0x14096e6ae*/
                    }
                    if ( v7 < 0 ) /*0x14096e5e1*/
                    {
                      v221 = 0; /*0x14096e5e7*/
                      goto LABEL_275; /*0x14096e5e7*/
                    }
                    if ( v11 ) /*0x14096e799*/
                    {
                      nullsub_1(v220, v219); /*0x14096e79f*/
                      v221 = 1; /*0x14096e7a4*/
                      v223 = sub_140001360(v7 | (unsigned __int8)v33, 1); /*0x14096e7b1*/
                      if ( !v223 ) /*0x14096e7b9*/
                      {
LABEL_275:
                        v382 = v32; /*0x14096e5e9*/
                        sub_1412AD46B(v221, v7 | (unsigned __int8)v33); /*0x14096e5f6*/
                      }
                      v9 = v223; /*0x14096e7bf*/
                      sub_1412762D0(v223, v32, v11); /*0x14096e7cb*/
                      v224 = v386; /*0x14096e7d0*/
                      if ( !v386 ) /*0x14096e7da*/
                        goto LABEL_284; /*0x14096e7da*/
                    }
                    else
                    {
                      v9 = 1; /*0x14096e90a*/
                      v224 = v386; /*0x14096e910*/
                      if ( !v386 ) /*0x14096e91a*/
                        goto LABEL_284; /*0x14096e91a*/
                    }
                    sub_140001370(v32, v224, 1); /*0x14096e7e5*/
LABEL_284:
                    v12 = 1; /*0x14096e7ea*/
                    v8 = 3; /*0x14096e7ef*/
                    v10 = v11; /*0x14096e7f2*/
LABEL_285:
                    *v347 = 1; /*0x14096e7f5*/
                    sub_1409A45F0(v321); /*0x14096e806*/
                    sub_1409B5490(v388, v225, v226); /*0x14096e813*/
                    v65 = v388; /*0x14096e81b*/
                    if ( !__OFSUB__(0, *(_QWORD *)(v388 + 520)) ) /*0x14096e829*/
                    {
                      v227 = *(char **)(v388 + 528); /*0x14096e82f*/
                      v382 = *(char **)(v388 + 536); /*0x14096e83d*/
                      v387 = nullptr; /*0x14096e844*/
                      v386 = v227; /*0x14096e84f*/
                      while ( v382 != (char *)v387 ) /*0x14096e86e*/
                      {
                        v387 = (void (__fastcall **)(volatile signed __int64 *))((char *)v387 + 1); /*0x14096e873*/
                        v228 = v227 + 96; /*0x14096e87a*/
                        sub_1401EEBE0(); /*0x14096e87e*/
                        v227 = v228; /*0x14096e884*/
                      }
                      v65 = v388; /*0x14096e889*/
                      v67 = *(_QWORD *)(v388 + 520); /*0x14096e890*/
                      if ( v67 ) /*0x14096e89a*/
LABEL_290:
                        sub_140001370(*(_QWORD *)(v65 + 528), 96 * v67, 8); /*0x14096e89c*/
                    }
LABEL_291:
                    v229 = v331; /*0x14096e8b6*/
                    *v331 = v12; /*0x14096e8bd*/
                    *((_BYTE *)v229 + 8) = v8; /*0x14096e8c0*/
                    *(_DWORD *)((char *)v229 + 9) = v7; /*0x14096e8c4*/
                    *((_BYTE *)v229 + 15) = BYTE6(v7); /*0x14096e8cf*/
                    *(_WORD *)((char *)v229 + 13) = WORD2(v7); /*0x14096e8d6*/
                    v229[2] = v10; /*0x14096e8db*/
                    v229[3] = v9; /*0x14096e8df*/
                    v229[4] = v11; /*0x14096e8e3*/
                    result = 1; /*0x14096e8e7*/
                    goto LABEL_292; /*0x14096e8e7*/
                  }
                  v38 = (unsigned __int64)v32; /*0x14096ba2b*/
                  v31 = v33; /*0x14096ba2e*/
                  v39 = v388; /*0x14096ba31*/
                  if ( !*((_QWORD *)v32 + 1) ) /*0x14096ba38*/
                    goto LABEL_26; /*0x14096ba3d*/
LABEL_232:
                  ((void (*)(void))nullsub_1)(); /*0x14096e23e*/
                  v207 = sub_140001360(72, 1); /*0x14096e24d*/
                  if ( !v207 ) /*0x14096e255*/
                  {
                    v386 = (PVOID)v38; /*0x14096ec12*/
                    LODWORD(v387) = v31; /*0x14096ec19*/
                    sub_1412AD46B(1, 72); /*0x14096ec29*/
                  }
                  v32 = (char *)v207; /*0x14096e25b*/
                  *(_OWORD *)(v207 + 48) = xmmword_1413627F1; /*0x14096e265*/
                  *(_OWORD *)(v207 + 32) = xmmword_1413627E1; /*0x14096e270*/
                  *(_OWORD *)(v207 + 16) = xmmword_1413627D1; /*0x14096e27b*/
                  *(_OWORD *)v207 = xmmword_1413627C1; /*0x14096e286*/
                  *(_QWORD *)(v207 + 64) = 0x8280E395AFE88D86uLL; /*0x14096e293*/
                  if ( (v31 & 1) == 0 && 2 * *v30 && !(unsigned __int8)sub_1412AC970(v209, v208) ) /*0x14096e995*/
                    *(_BYTE *)(v38 + 1) = 1; /*0x14096e9a3*/
                  v210 = *(_BYTE *)v38; /*0x14096e2ae*/
                  *(_BYTE *)v38 = 0; /*0x14096e2ae*/
                  v73 = 0; /*0x14096e2b2*/
                  LOBYTE(v33) = 72; /*0x14096e2b5*/
                  v386 = (PVOID)72; /*0x14096e2bd*/
                  if ( v210 == 2 ) /*0x14096e2c6*/
                  {
                    WakeByAddressSingle((PVOID)v38); /*0x14096e444*/
                    v73 = 0; /*0x14096e44a*/
                    v74 = v361; /*0x14096e44d*/
                    if ( v361 ) /*0x14096e457*/
                      goto LABEL_237; /*0x14096e457*/
                  }
                  else
                  {
                    v74 = v361; /*0x14096e2cc*/
                    if ( v361 ) /*0x14096e2d6*/
                      goto LABEL_237; /*0x14096e2d6*/
                  }
                  goto LABEL_246; /*0x14096e2d6*/
                }
              }
              v38 = (unsigned __int64)&byte_14195D0A8; /*0x14096e225*/
              v39 = v388; /*0x14096e22c*/
              if ( qword_14195D0B0 ) /*0x14096e238*/
                goto LABEL_232; /*0x14096e238*/
LABEL_26:
              LODWORD(v387) = v31; /*0x14096ba43*/
              *(_BYTE *)(v39 + 2866) = 0; /*0x14096ba49*/
              v385 = v362; /*0x14096ba57*/
              v40 = *(_QWORD *)(v38 + 8) == 0; /*0x14096ba5e*/
              v386 = (PVOID)v38; /*0x14096ba63*/
              if ( !v40 ) /*0x14096ba6a*/
              {
                v41 = *((_QWORD *)v386 + 2); /*0x14096ba73*/
                if ( v41 ) /*0x14096ba7a*/
                {
                  v383 = (char *)v386 + 16; /*0x14096ba87*/
                  if ( (sub_140EF1810(v41 + 48) & 5) == 1 ) /*0x14096ba9e*/
                    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v41 + 32) + 16LL))(*(_QWORD *)(v41 + 40)); /*0x14096baa8*/
                  v26 = v383; /*0x14096baac*/
                  if ( *(_QWORD *)v383 && !_InterlockedDecrement64(*(volatile signed __int64 **)v383) ) /*0x14096babb*/
                    sub_140EEA580(v26); /*0x14096bac1*/
                }
              }
              v42 = v386; /*0x14096bac7*/
              *((_QWORD *)v386 + 1) = 1; /*0x14096bace*/
              v42[2] = v385; /*0x14096badd*/
              if ( ((unsigned __int8)v387 & 1) == 0 && 2 * *v30 && !(unsigned __int8)sub_1412AC970(v26, v25) ) /*0x14096e9ad*/
                *((_BYTE *)v42 + 1) = 1; /*0x14096e9bb*/
              v43 = *(_BYTE *)v42; /*0x14096bafb*/
              *(_BYTE *)v42 = 0; /*0x14096bafb*/
              if ( v43 == 2 ) /*0x14096baff*/
                WakeByAddressSingle(v42); /*0x14096e928*/
              v3 = v388; /*0x14096bb05*/
              *(_BYTE *)(v388 + 2865) = 0; /*0x14096bb0c*/
              v44 = v361; /*0x14096bb13*/
              *(_QWORD *)(v3 + 2480) = v361; /*0x14096bb1a*/
              *(_QWORD *)(v3 + 2520) = v23; /*0x14096bb21*/
              v45 = (_BYTE *)(v3 + 2536); /*0x14096bb28*/
              *(_BYTE *)(v3 + 2536) = 0; /*0x14096bb2f*/
              v46 = (void (__fastcall **)(volatile signed __int64 *))(v3 + 2400); /*0x14096bb36*/
LABEL_40:
              *(_QWORD *)(v3 + 2528) = 0x100000000000000LL; /*0x14096bb79*/
              *(_QWORD *)(v3 + 2488) = v23; /*0x14096bb8a*/
              v276 = v44; /*0x14096bb91*/
              v47 = v3 + 2432; /*0x14096bb98*/
              v300 = v46; /*0x14096bb9f*/
              sub_140230C00(v3 + 2432); /*0x14096bba9*/
              *(_BYTE *)(v388 + 2534) = 1; /*0x14096bbb6*/
              v387 = v46; /*0x14096bbbd*/
              v330 = v46; /*0x14096bbc4*/
              sub_140F47940(&v257); /*0x14096bbd2*/
              *(_QWORD *)&v333 = 0; /*0x14096bbd8*/
              *((_QWORD *)&v333 + 1) = 1; /*0x14096bbe3*/
              *(_QWORD *)&v334 = 0; /*0x14096bbee*/
              *(_QWORD *)&v277[16] = 1610612768; /*0x14096bbf9*/
              *(_QWORD *)v277 = &v333; /*0x14096bc0b*/
              *(_QWORD *)&v277[8] = &off_14132C490; /*0x14096bc19*/
              if ( (unsigned __int8)sub_140F47EA0(&v257, v277) ) /*0x14096bc2e*/
                sub_1412AD780( /*0x14096e436*/
                  (unsigned int)aADisplayImplem_3,
                  55,
                  (unsigned int)&v384,
                  (unsigned int)&unk_14132C858,
                  (__int64)&off_14132C548);
              v48 = v388; /*0x14096bc3c*/
              v49 = v388 + 2496; /*0x14096bc43*/
              *(_QWORD *)(v388 + 2512) = v334; /*0x14096bc51*/
              *(_OWORD *)v49 = v333; /*0x14096bc5c*/
              *(_BYTE *)(v48 + 2533) = 1; /*0x14096bc5f*/
              v50 = *(_QWORD *)(v48 + 2464); /*0x14096bc66*/
              v51 = *(_QWORD *)(v48 + 2472); /*0x14096bc6d*/
              v52 = *(_QWORD *)(v48 + 2504); /*0x14096bc74*/
              v53 = *(_QWORD *)(v48 + 2512); /*0x14096bc7b*/
              v46 = v387; /*0x14096bc82*/
              v299 = v387; /*0x14096bc89*/
              sub_140231190((unsigned int)&v260, v50, v51, v52, v53); /*0x14096bc9c*/
              v54 = v45; /*0x14096bca2*/
              v3 = v388; /*0x14096bca5*/
              *(_BYTE *)(v388 + 2534) = 0; /*0x14096bcac*/
              *(_BYTE *)(v3 + 2529) = 1; /*0x14096bcb3*/
              *(_OWORD *)(v3 + 2544) = *(_OWORD *)v47; /*0x14096bcbd*/
              *(_QWORD *)(v3 + 2560) = *(_QWORD *)(v47 + 16); /*0x14096bcc8*/
              *(_BYTE *)(v3 + 2533) = 0; /*0x14096bccf*/
              *(_QWORD *)&v277[16] = *(_QWORD *)(v49 + 16); /*0x14096bcda*/
              *(_OWORD *)v277 = *(_OWORD *)v49; /*0x14096bce4*/
              *(_BYTE *)(v3 + 2535) = 0; /*0x14096bceb*/
              *(_OWORD *)&v277[24] = v260; /*0x14096bcf9*/
              *(_QWORD *)&v277[40] = v261; /*0x14096bd07*/
              v55 = *(_OWORD *)v277; /*0x14096bd0e*/
              v257 = *(_OWORD *)v277; /*0x14096bd15*/
              v56 = *(_OWORD *)&v277[16]; /*0x14096bd1c*/
              v258 = *(_OWORD *)&v277[16]; /*0x14096bd23*/
              v259[0] = *(_OWORD *)&v277[32]; /*0x14096bd31*/
              v57 = (_QWORD *)(v3 + 2568); /*0x14096bd38*/
              *(_OWORD *)(v3 + 2600) = *(_OWORD *)&v277[32]; /*0x14096bd3f*/
              *(_OWORD *)(v3 + 2584) = v56; /*0x14096bd46*/
              *(_OWORD *)(v3 + 2568) = v55; /*0x14096bd4d*/
              *(_QWORD *)(v3 + 2616) = v44; /*0x14096bd54*/
              v58 = (char *)(v3 + 2704); /*0x14096bd5b*/
              *(_BYTE *)(v3 + 2704) = 0; /*0x14096bd62*/
LABEL_42:
              *(_QWORD *)(v3 + 2706) = 0; /*0x14096bd69*/
              *(_DWORD *)(v3 + 2713) = 0; /*0x14096bd74*/
              *(_BYTE *)(v3 + 2709) = 1; /*0x14096bd7e*/
              *(_OWORD *)(v3 + 2720) = *(_OWORD *)v57; /*0x14096bd89*/
              *(_QWORD *)(v3 + 2736) = v57[2]; /*0x14096bd94*/
              *(_OWORD *)(v3 + 2624) = *(_OWORD *)(v3 + 2592); /*0x14096bda2*/
              *(_QWORD *)(v3 + 2640) = *(_QWORD *)(v3 + 2608); /*0x14096bdb0*/
              *(_BYTE *)(v3 + 2708) = 1; /*0x14096bdb7*/
              *(_QWORD *)(v3 + 2744) = v44; /*0x14096bdbe*/
              v363 = (_OWORD *)(v3 + 2752); /*0x14096bdcc*/
              v59 = a1270011455; /*0x14096bdd3*/
              *(_QWORD *)(v3 + 2752) = a1270011455; /*0x14096bdda*/
              *(_QWORD *)(v3 + 2760) = 14; /*0x14096bde1*/
              v60 = (volatile signed __int64 *)(v3 + 2800); /*0x14096bdec*/
              *(_BYTE *)(v3 + 2800) = 0; /*0x14096bdf3*/
              v61 = 14; /*0x14096bdfa*/
LABEL_43:
              v360 = v46; /*0x14096be00*/
              v386 = v57; /*0x14096be07*/
              v359 = v57; /*0x14096be0e*/
              v385 = v60; /*0x14096be15*/
              v358 = v60; /*0x14096be1c*/
              sub_140EF3FB0(&v333, v59, v61); /*0x14096be2a*/
              v387 = v46; /*0x14096be30*/
              v62 = v333; /*0x14096be37*/
              v305 = v334; /*0x14096be45*/
              v304 = v333; /*0x14096be4c*/
              v3 = v388; /*0x14096be53*/
              *(_OWORD *)(v388 + 2784) = v334; /*0x14096be5a*/
              *(_OWORD *)(v3 + 2768) = v62; /*0x14096be61*/
LABEL_44:
              v383 = (char *)(v3 + 2768); /*0x14096be68*/
              sub_140F019E0(&v333, v3 + 2768, v382); /*0x14096be84*/
              v63 = v333; /*0x14096be8a*/
              if ( (_DWORD)v333 == 3 ) /*0x14096be93*/
              {
                *(_BYTE *)v385 = 3; /*0x14096be9c*/
                v64 = 3; /*0x14096be9f*/
                v65 = v388; /*0x14096bea1*/
                v45 = v54; /*0x14096bea8*/
                v66 = v58; /*0x14096beab*/
                goto LABEL_46; /*0x14096beab*/
              }
              v68 = DWORD1(v333); /*0x14096bee4*/
              v69 = *((_QWORD *)&v333 + 1); /*0x14096beeb*/
              v281 = v334; /*0x14096bef9*/
              *(_QWORD *)&v282 = v335; /*0x14096bf07*/
              v70 = v387; /*0x14096bf19*/
              if ( *(_WORD *)v383 == 3 ) /*0x14096bf20*/
              {
                v71 = *(_QWORD *)(v388 + 2776); /*0x14096bf29*/
                v360 = v387; /*0x14096bf30*/
                v359 = v386; /*0x14096bf3e*/
                v358 = v385; /*0x14096bf4c*/
                if ( (unsigned __int8)sub_140EE8B80(v71) ) /*0x14096bf56*/
                {
                  v360 = v70; /*0x14096bf60*/
                  v359 = v386; /*0x14096bf6e*/
                  v358 = v385; /*0x14096bf7c*/
                  sub_140EE5BB0(v71); /*0x14096bf86*/
                }
              }
              if ( v63 == 2 ) /*0x14096bf8f*/
              {
                v72 = v69; /*0x14096bf95*/
                v45 = v54; /*0x14096bf98*/
LABEL_96:
                v303 = *(_QWORD *)&v277[32]; /*0x14096c5b2*/
                v302 = *(_OWORD *)&v277[16]; /*0x14096c5c7*/
                *(_BYTE *)v385 = 1; /*0x14096c5d5*/
                v269 = v302; /*0x14096c5df*/
                v270 = v303; /*0x14096c5ed*/
                v379 = (volatile signed __int64 **)v72; /*0x14096c5f4*/
                *(_QWORD *)&v283 = v72; /*0x14096c5fb*/
                *(_QWORD *)&v333 = 0; /*0x14096c602*/
                *((_QWORD *)&v333 + 1) = 1; /*0x14096c60d*/
                *(_QWORD *)&v334 = 0; /*0x14096c618*/
                *(_QWORD *)&v277[16] = 1610612768; /*0x14096c623*/
                *(_QWORD *)v277 = &v333; /*0x14096c635*/
                *(_QWORD *)&v277[8] = &off_141363340; /*0x14096c643*/
                if ( (unsigned __int8)sub_141084170(&v283, v277) ) /*0x14096c658*/
                  sub_1412AD780( /*0x14096e98a*/
                    (unsigned int)aADisplayImplem_11,
                    55,
                    (unsigned int)&v384,
                    (unsigned int)&unk_141363430,
                    (__int64)&off_1413633F8);
                v383 = *((char **)&v333 + 1); /*0x14096c67b*/
                v385 = (volatile signed __int64 *)v333; /*0x14096c67b*/
                v81 = v334; /*0x14096c682*/
                LODWORD(v350) = *(_DWORD *)((char *)&v334 + 1); /*0x14096c68f*/
                *(_DWORD *)((char *)&v350 + 3) = DWORD1(v334); /*0x14096c69b*/
                v84 = v387; /*0x14096c6a1*/
                v357 = v387; /*0x14096c6a8*/
                v356 = v386; /*0x14096c6b6*/
                sub_140140280(v379); /*0x14096c6c4*/
                v373[0] = v350; /*0x14096c6d6*/
                *(_DWORD *)((char *)v373 + 3) = *(_DWORD *)((char *)&v350 + 3); /*0x14096c6dc*/
                v95 = 0; /*0x14096c6e2*/
LABEL_98:
                v96 = v388; /*0x14096c6e4*/
                *(_BYTE *)(v388 + 2716) = 0; /*0x14096c6eb*/
                v97 = *(_QWORD *)(v96 + 2744); /*0x14096c6f2*/
                if ( v97 ) /*0x14096c6fc*/
                {
                  v379 = (volatile signed __int64 **)(v388 + 2744); /*0x14096c70f*/
                  v98 = _InterlockedOr64((volatile signed __int64 *)(v97 + 48), 4u); /*0x14096c727*/
                  if ( (v98 & 0xA) == 8 ) /*0x14096c737*/
                  {
                    v99 = v98; /*0x14096c741*/
                    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v97 + 16) + 16LL))(*(_QWORD *)(v97 + 24)); /*0x14096c744*/
                    v98 = v99; /*0x14096c747*/
                  }
                  if ( (v98 & 3) == 1 ) /*0x14096c752*/
                  {
                    _InterlockedAnd64((volatile signed __int64 *)(v97 + 48), 0xFFFFFFFFFFFFFFFEuLL); /*0x14096c754*/
                    v100 = v98; /*0x14096c75e*/
                    sub_140EF1800(v97 + 32); /*0x14096c761*/
                    v98 = v100; /*0x14096c766*/
                  }
                  if ( (v98 & 2) != 0 ) /*0x14096c76b*/
                    *(_BYTE *)(v97 + 56) = 0; /*0x14096c76d*/
                  v101 = v379; /*0x14096c771*/
                  v84 = v387; /*0x14096c77e*/
                  if ( *v379 && !_InterlockedDecrement64(*v379) ) /*0x14096c787*/
                  {
                    v342 = v84; /*0x14096c78d*/
                    v341 = v386; /*0x14096c79b*/
                    sub_140EEA580(v101); /*0x14096c7a2*/
                  }
                }
                v102 = v388; /*0x14096c7a8*/
                *(_BYTE *)(v388 + 2708) = 0; /*0x14096c7af*/
                v103 = *(_QWORD *)(v102 + 2624); /*0x14096c7b6*/
                if ( v103 ) /*0x14096c7c0*/
                  sub_140001370(*(_QWORD *)(v102 + 2632), v103, 1); /*0x14096c7cf*/
                v104 = *(_QWORD *)(v102 + 2720); /*0x14096c7d4*/
                if ( v104 ) /*0x14096c7de*/
                  sub_140001370(*(_QWORD *)(v102 + 2728), v104, 1); /*0x14096c7ed*/
                *(_BYTE *)(v102 + 2709) = 0; /*0x14096c7f2*/
                *(_DWORD *)&v348[3] = *(_DWORD *)((char *)v373 + 3); /*0x14096c805*/
                *(_DWORD *)v348 = v373[0]; /*0x14096c80b*/
                *(_BYTE *)(v102 + 2704) = 1; /*0x14096c811*/
                v105 = 1; /*0x14096c818*/
                v106 = v386; /*0x14096c81e*/
                goto LABEL_113; /*0x14096c81e*/
              }
              v383 = v58; /*0x14096c0a3*/
              v379 = (volatile signed __int64 **)v54; /*0x14096c0aa*/
              *(_QWORD *)&v335 = v282; /*0x14096c0b8*/
              v334 = v281; /*0x14096c0c6*/
              *(_QWORD *)&v333 = __PAIR64__(v68, v63); /*0x14096c0cd*/
              *((_QWORD *)&v333 + 1) = v69; /*0x14096c0da*/
              v77 = 0; /*0x14096c0e1*/
              while ( 1 ) /*0x14096c100*/
              {
                v72 = v77; /*0x14096c100*/
                v320 = v77; /*0x14096c103*/
                sub_140F01CA0(&v304, &v333); /*0x14096c110*/
                if ( (_WORD)v304 == 2 ) /*0x14096c11e*/
                {
                  if ( (_DWORD)v333 && *((_QWORD *)&v334 + 1) ) /*0x14096c564*/
                    sub_140001370(*((_QWORD *)&v333 + 1), 32LL * *((_QWORD *)&v334 + 1), 4); /*0x14096c577*/
                  v45 = v379; /*0x14096c57f*/
                  if ( !v77 ) /*0x14096c586*/
                  {
                    v298 = 0; /*0x14096c588*/
                    v381 = 0; /*0x14096c593*/
                    LOBYTE(v78) = 20; /*0x14096c5a7*/
                    v72 = sub_14105F2D0(v78, aCouldNotResolv, 32); /*0x14096c5af*/
                  }
                  goto LABEL_96; /*0x14096c5af*/
                }
                v284 = v305; /*0x14096c132*/
                v283 = v304; /*0x14096c139*/
                v320 = v77; /*0x14096c140*/
                sub_140EE48E0(v277, &v283); /*0x14096c14d*/
                v79 = *(_QWORD *)v277; /*0x14096c153*/
                if ( *(_QWORD *)v277 != 2 ) /*0x14096c15e*/
                  break; /*0x14096c15e*/
                v77 = *(_QWORD *)&v277[8]; /*0x14096c164*/
                if ( v72 ) /*0x14096c16e*/
                {
                  v320 = *(_QWORD *)&v277[8]; /*0x14096c170*/
                  sub_140140280(v72); /*0x14096c17a*/
                }
              }
              if ( (_DWORD)v333 && *((_QWORD *)&v334 + 1) ) /*0x14096ca27*/
                sub_140001370(*((_QWORD *)&v333 + 1), 32LL * *((_QWORD *)&v334 + 1), 4); /*0x14096ca3a*/
              v46 = v387; /*0x14096ca42*/
              v45 = v379; /*0x14096ca49*/
              v66 = v383; /*0x14096ca50*/
              if ( v72 ) /*0x14096ca57*/
              {
                v360 = v387; /*0x14096ca59*/
                v359 = v386; /*0x14096ca67*/
                v358 = v385; /*0x14096ca75*/
                sub_140140280(v72); /*0x14096ca7f*/
              }
              v110 = *(_QWORD *)&v277[8]; /*0x14096ca85*/
              v302 = *(_OWORD *)&v277[16]; /*0x14096ca93*/
              v303 = *(_QWORD *)&v277[32]; /*0x14096caa1*/
              v111 = v388; /*0x14096caa8*/
              *(_BYTE *)(v388 + 2800) = 1; /*0x14096caaf*/
              v269 = v302; /*0x14096cabe*/
              v270 = v303; /*0x14096cacc*/
              v272 = v302; /*0x14096cad3*/
              v273 = v303; /*0x14096cada*/
              *(_BYTE *)(v111 + 2716) = 1; /*0x14096cae1*/
              *(_QWORD *)&v271 = v79; /*0x14096cae9*/
              *((_QWORD *)&v271 + 1) = v110; /*0x14096caf0*/
              v112 = *(_QWORD *)(v111 + 2632); /*0x14096caf7*/
              v113 = *(_QWORD *)(v111 + 2640); /*0x14096cafe*/
              v344 = v46; /*0x14096cb05*/
              v114 = v386; /*0x14096cb0c*/
              v343 = v386; /*0x14096cb13*/
              sub_140230F60(&v333, v112, v113); /*0x14096cb21*/
              if ( (_DWORD)v333 != 10 ) /*0x14096cb2e*/
              {
                *(_OWORD *)&v277[80] = v338; /*0x14096da1a*/
                *(_OWORD *)&v277[64] = v337; /*0x14096da28*/
                *(_OWORD *)&v277[48] = v336; /*0x14096da4b*/
                *(_OWORD *)&v277[32] = v335; /*0x14096da52*/
                *(_OWORD *)&v277[16] = v334; /*0x14096da59*/
                *(_OWORD *)v277 = v333; /*0x14096da60*/
                *(_QWORD *)&v304 = 0; /*0x14096da67*/
                *((_QWORD *)&v304 + 1) = 1; /*0x14096da72*/
                *(_QWORD *)&v305 = 0; /*0x14096da7d*/
                *(_QWORD *)&v284 = 1610612768; /*0x14096da88*/
                *(_QWORD *)&v283 = &v304; /*0x14096da93*/
                *((_QWORD *)&v283 + 1) = &off_141363340; /*0x14096daa1*/
                if ( (unsigned __int8)sub_1400603E0(v277, &v283) ) /*0x14096dab6*/
                  sub_1412AD780( /*0x14096ea6f*/
                    (unsigned int)aADisplayImplem_11,
                    55,
                    (unsigned int)&v384,
                    (unsigned int)&unk_141363430,
                    (__int64)&off_1413633F8);
                v383 = *((char **)&v304 + 1); /*0x14096dad2*/
                v181 = (volatile signed __int64 *)v304; /*0x14096dad2*/
                v81 = v305; /*0x14096dad9*/
                v373[0] = *(_DWORD *)((char *)&v305 + 1); /*0x14096dae6*/
                *(_DWORD *)((char *)v373 + 3) = DWORD1(v305); /*0x14096daf2*/
                v84 = v387; /*0x14096daf8*/
                v344 = v387; /*0x14096daff*/
                v182 = v386; /*0x14096db06*/
                v343 = v386; /*0x14096db0d*/
                sub_1409B6100(&v333); /*0x14096db1b*/
                v385 = v181; /*0x14096db21*/
                v357 = v84; /*0x14096db28*/
                v356 = v182; /*0x14096db2f*/
                v95 = 3; /*0x14096db36*/
                sub_1407A5C30(&v271); /*0x14096db42*/
                goto LABEL_98; /*0x14096db48*/
              }
              v344 = v46; /*0x14096cb34*/
              v343 = v114; /*0x14096cb3b*/
              v115 = sub_140948B00(&off_141361668); /*0x14096cb49*/
              v275 = v115; /*0x14096cb4f*/
              v116 = v388; /*0x14096cb56*/
              *(_BYTE *)(v388 + 2714) = 1; /*0x14096cb5d*/
              v385 = v117; /*0x14096cb64*/
              v274 = v117; /*0x14096cb6b*/
              *(_BYTE *)(v116 + 2709) = 0; /*0x14096cb72*/
              v118 = *(char **)(v116 + 2720); /*0x14096cb79*/
              v119 = *(__int64 **)(v116 + 2728); /*0x14096cb80*/
              v120 = *(_QWORD *)(v116 + 2736); /*0x14096cb87*/
              *(_BYTE *)(v116 + 2715) = 0; /*0x14096cb8e*/
              *(_QWORD *)v277 = 1; /*0x14096cb95*/
              *(_QWORD *)&v277[8] = 1; /*0x14096cba0*/
              *(_WORD *)&v277[16] = 0; /*0x14096cbab*/
              *(_QWORD *)&v277[24] = 1; /*0x14096cbb9*/
              *(_QWORD *)&v277[32] = v115; /*0x14096cbc4*/
              ((void (*)(void))nullsub_1)(); /*0x14096cbcb*/
              v121 = sub_140001360(40, 8); /*0x14096cbda*/
              if ( !v121 ) /*0x14096cbe2*/
              {
                v331 = v119; /*0x14096ea26*/
                v382 = v118; /*0x14096ea2d*/
                sub_1412AD451(8, 40); /*0x14096ea3e*/
              }
              *(_QWORD *)(v121 + 32) = *(_QWORD *)&v277[32]; /*0x14096cbef*/
              v122 = *(_OWORD *)v277; /*0x14096cbf3*/
              *(_OWORD *)(v121 + 16) = *(_OWORD *)&v277[16]; /*0x14096cc01*/
              *(_OWORD *)v121 = v122; /*0x14096cc05*/
              *(_BYTE *)(v116 + 2713) = 1; /*0x14096cc08*/
              *(_QWORD *)&v283 = v118; /*0x14096cc0f*/
              *((_QWORD *)&v283 + 1) = v119; /*0x14096cc16*/
              *(_QWORD *)&v284 = v120; /*0x14096cc1d*/
              *((_QWORD *)&v284 + 1) = v121; /*0x14096cc24*/
              v346 = v46; /*0x14096cc2b*/
              v345 = v386; /*0x14096cc39*/
              *(_QWORD *)&v333 = sub_14059D7A0(); /*0x14096cc46*/
              v380 = 1; /*0x14096cc4d*/
              v364 = v333; /*0x14096cc5b*/
              sub_140599B70(v277); /*0x14096cc62*/
              v380 = 0; /*0x14096cc68*/
              v123 = sub_1405A01C0(v364, (unsigned int)aAuthCallback, 14, (unsigned int)v277, (__int64)&off_141361690); /*0x14096cc96*/
              *(_BYTE *)(v388 + 2713) = 0; /*0x14096cca3*/
              *(_OWORD *)&v277[16] = v284; /*0x14096ccb8*/
              *(_OWORD *)v277 = v283; /*0x14096ccbf*/
              v124 = v387; /*0x14096ccc6*/
              v346 = v387; /*0x14096cccd*/
              v125 = v386; /*0x14096ccd4*/
              v345 = v386; /*0x14096ccdb*/
              v126 = sub_14059C0F0(v123, v277); /*0x14096ccf2*/
              v350 = v126; /*0x14096ccf5*/
              *(_BYTE *)(v388 + 2712) = 1; /*0x14096cd03*/
              v297 = v124; /*0x14096cd0a*/
              v296 = v125; /*0x14096cd11*/
              v127 = sub_140948A50(&off_1413616A8); /*0x14096cd1f*/
              v128 = v388; /*0x14096cd25*/
              *(_BYTE *)(v388 + 2707) = 1; /*0x14096cd2c*/
              *(_QWORD *)(v128 + 2648) = v127; /*0x14096cd33*/
              *(_QWORD *)&v302 = v129; /*0x14096cd3a*/
              *(_BYTE *)(v128 + 2716) = 0; /*0x14096cd41*/
              *(_WORD *)(v128 + 2711) = 0; /*0x14096cd48*/
              *(_QWORD *)&v277[32] = v273; /*0x14096cd58*/
              *(_OWORD *)&v277[16] = v272; /*0x14096cd6d*/
              *(_OWORD *)v277 = v271; /*0x14096cd74*/
              *(_QWORD *)&v277[40] = v126; /*0x14096cd7b*/
              *(_QWORD *)&v277[48] = v129; /*0x14096cd82*/
              v277[72] = 0; /*0x14096cd89*/
              v319 = v124; /*0x14096cd90*/
              v318 = v125; /*0x14096cd97*/
              v130 = sub_1407C6F30(v277, &off_1413616C0); /*0x14096cdac*/
              v131 = v388; /*0x14096cdb2*/
              *(_QWORD *)(v388 + 2656) = v130; /*0x14096cdb9*/
              *(_BYTE *)(v131 + 2706) = 1; /*0x14096cdc0*/
              *(_BYTE *)(v131 + 2705) = 0; /*0x14096cdc7*/
              *(_BYTE *)(v131 + 2714) = 0; /*0x14096cdce*/
              *(_QWORD *)&v281 = v385; /*0x14096cddc*/
              *(_BYTE *)(v131 + 2708) = 0; /*0x14096cde3*/
              *(_QWORD *)&v304 = *(_QWORD *)(v131 + 2744); /*0x14096cdf1*/
              sub_140EE5810(&v333, 300, 0, &off_1413616D8); /*0x14096ce0e*/
              v3 = v388; /*0x14096ce14*/
              v132 = v388 + 2736; /*0x14096ce1b*/
              v133 = v388 + 2705; /*0x14096ce22*/
              v134 = v304; /*0x14096ce30*/
              *(_OWORD *)&v277[96] = v339; /*0x14096ce3e*/
              *(_OWORD *)&v277[80] = v338; /*0x14096ce4c*/
              *(_OWORD *)&v277[64] = v337; /*0x14096ce5a*/
              *(_OWORD *)&v277[48] = v336; /*0x14096ce7d*/
              *(_OWORD *)&v277[32] = v335; /*0x14096ce84*/
              *(_OWORD *)&v277[16] = v334; /*0x14096ce8b*/
              *(_OWORD *)v277 = v333; /*0x14096ce92*/
              *(_QWORD *)(v388 + 2736) = v281; /*0x14096ce99*/
              *(_QWORD *)(v3 + 2744) = v134; /*0x14096cea0*/
              v135 = v363; /*0x14096ceae*/
              v363[6] = *(_OWORD *)&v277[96]; /*0x14096ceb5*/
              v135[5] = *(_OWORD *)&v277[80]; /*0x14096cec0*/
              v135[4] = *(_OWORD *)&v277[64]; /*0x14096cecb*/
              v136 = *(_OWORD *)v277; /*0x14096cecf*/
              v137 = *(_OWORD *)&v277[16]; /*0x14096ced6*/
              v138 = *(_OWORD *)&v277[32]; /*0x14096cedd*/
              v135[3] = *(_OWORD *)&v277[48]; /*0x14096ceeb*/
              v135[2] = v138; /*0x14096ceef*/
              v135[1] = v137; /*0x14096cef3*/
              *v135 = v136; /*0x14096cef7*/
              *(_QWORD *)(v3 + 2720) = v133; /*0x14096cefa*/
              *(_QWORD *)(v3 + 2728) = v132; /*0x14096cf01*/
LABEL_130:
              sub_140969AA0(v277, v3 + 2720, v382); /*0x14096cf18*/
              v139 = *(_QWORD *)v277; /*0x14096cf33*/
              if ( *(_QWORD *)v277 == 6 ) /*0x14096cf3e*/
              {
                v64 = 4; /*0x14096cf40*/
                v65 = v388; /*0x14096cf42*/
                goto LABEL_46; /*0x14096cf49*/
              }
              v325 = *(_QWORD *)&v277[24]; /*0x14096cfad*/
              v324 = *(_OWORD *)&v277[8]; /*0x14096cfbb*/
              v141 = v387; /*0x14096cfd0*/
              v355 = v387; /*0x14096cfd7*/
              v354 = v386; /*0x14096cfe5*/
              sub_14098CC40(v388 + 2736); /*0x14096cfec*/
              v142 = 0; /*0x14096cff2*/
              if ( v139 >= 2 ) /*0x14096cffb*/
                v142 = v139 - 2; /*0x14096cffb*/
              switch ( v142 ) /*0x14096d00d*/
              {
                case 0uLL: /*0x14096d00d*/
                  v143 = v388; /*0x14096d012*/
                  if ( (_DWORD)v139 == 2 ) /*0x14096d019*/
                  {
                    ((void (*)(void))nullsub_1)(); /*0x14096d01f*/
                    v144 = 1; /*0x14096d024*/
                    v145 = (void *)sub_140001360(23, 1); /*0x14096d033*/
                    if ( !v145 ) /*0x14096d03b*/
                    {
                      v355 = v141; /*0x14096ed56*/
                      v354 = v386; /*0x14096ed64*/
                      sub_1412AD46B(1, 23); /*0x14096ed75*/
                    }
                    qmemcpy(v145, "callback channel closed", 23); /*0x14096d048*/
                    *(_QWORD *)(v143 + 2672) = 3; /*0x14096d059*/
                    *(_QWORD *)(v143 + 2680) = 23; /*0x14096d064*/
                    *(_QWORD *)(v143 + 2688) = v145; /*0x14096d06f*/
                    *(_QWORD *)(v143 + 2696) = 23; /*0x14096d076*/
                  }
                  else
                  {
                    *(_QWORD *)(v388 + 2672) = v139; /*0x14096ddbd*/
                    *(_OWORD *)(v143 + 2680) = v324; /*0x14096ddcb*/
                    *(_QWORD *)(v143 + 2696) = v325; /*0x14096ddd9*/
                    v144 = 0; /*0x14096dde0*/
                  }
                  *(_QWORD *)(v143 + 2664) = v144; /*0x14096dde2*/
                  *(_BYTE *)(v143 + 2710) = 1; /*0x14096dde9*/
                  break; /*0x14096dde9*/
                case 1uLL: /*0x14096d00d*/
                  v143 = v388; /*0x14096dd60*/
                  *(_BYTE *)(v388 + 2710) = 1; /*0x14096dd67*/
                  *(_QWORD *)(v143 + 2672) = 1; /*0x14096dd6e*/
                  *(_QWORD *)(v143 + 2664) = 1; /*0x14096dd79*/
                  break; /*0x14096dd84*/
                case 2uLL: /*0x14096d00d*/
                  v143 = v388; /*0x14096dd37*/
                  *(_BYTE *)(v388 + 2710) = 1; /*0x14096dd3e*/
                  *(_QWORD *)(v143 + 2672) = 2; /*0x14096dd45*/
                  *(_QWORD *)(v143 + 2664) = 1; /*0x14096dd50*/
                  break; /*0x14096dd5b*/
                case 3uLL: /*0x14096d00d*/
                  v355 = v141; /*0x14096ed26*/
                  v354 = v386; /*0x14096ed34*/
                  sub_1412AD9E0("all branches are disabled and there is no else branch", 107, &off_141361708); /*0x14096ed4e*/
              }
              *(_BYTE *)(v143 + 2707) = 0; /*0x14096ddf0*/
              v185 = *(_QWORD *)(v143 + 2648); /*0x14096ddf7*/
              v329 = v141; /*0x14096ddfe*/
              v186 = v386; /*0x14096de05*/
              v328 = v386; /*0x14096de0c*/
              sub_1409485B0(v185); /*0x14096de13*/
              v187 = *(_QWORD *)(v388 + 2656); /*0x14096de20*/
              v329 = v141; /*0x14096de27*/
              v328 = v186; /*0x14096de2e*/
              sub_140EE5BE0(v187); /*0x14096de38*/
              v188 = v388; /*0x14096de3e*/
              *(_QWORD *)(v388 + 2720) = v187; /*0x14096de45*/
              *(_BYTE *)(v188 + 2706) = 0; /*0x14096de4c*/
              v189 = *(_QWORD *)(v188 + 2656); /*0x14096de53*/
              v353 = v141; /*0x14096de5a*/
              v352 = v186; /*0x14096de61*/
              sub_140948BE0((unsigned int)v277, 2, 0, v189, (__int64)&off_1413616F0); /*0x14096de83*/
              v340 = *(_QWORD *)&v277[112]; /*0x14096de90*/
              v190 = *(_OWORD *)&v277[96]; /*0x14096de97*/
              v339 = *(_OWORD *)&v277[96]; /*0x14096de9e*/
              v191 = *(_OWORD *)&v277[80]; /*0x14096dea5*/
              v338 = *(_OWORD *)&v277[80]; /*0x14096deac*/
              v192 = *(_OWORD *)&v277[64]; /*0x14096deb3*/
              v337 = *(_OWORD *)&v277[64]; /*0x14096deba*/
              v193 = *(_OWORD *)v277; /*0x14096dec1*/
              v194 = *(_OWORD *)&v277[16]; /*0x14096dec8*/
              v195 = *(_OWORD *)&v277[32]; /*0x14096decf*/
              v196 = *(_OWORD *)&v277[48]; /*0x14096ded6*/
              v336 = *(_OWORD *)&v277[48]; /*0x14096dedd*/
              v335 = *(_OWORD *)&v277[32]; /*0x14096dee4*/
              v334 = *(_OWORD *)&v277[16]; /*0x14096deeb*/
              v333 = *(_OWORD *)v277; /*0x14096def2*/
              v3 = v388; /*0x14096def9*/
              *(_QWORD *)(v388 + 2840) = *(_QWORD *)&v277[112]; /*0x14096df00*/
              *(_OWORD *)(v3 + 2824) = v190; /*0x14096df07*/
              *(_OWORD *)(v3 + 2808) = v191; /*0x14096df0e*/
              *(_OWORD *)(v3 + 2792) = v192; /*0x14096df15*/
              *(_OWORD *)(v3 + 2776) = v196; /*0x14096df1c*/
              *(_OWORD *)(v3 + 2760) = v195; /*0x14096df23*/
              *(_OWORD *)(v3 + 2744) = v194; /*0x14096df2a*/
              *(_OWORD *)(v3 + 2728) = v193; /*0x14096df31*/
LABEL_208:
              v385 = (volatile signed __int64 *)(v3 + 2728); /*0x14096df38*/
              v197 = (unsigned __int8 *)sub_140EDF720(a1, v17, v15, v57); /*0x14096df46*/
              v198 = v197[72]; /*0x14096df4c*/
              if ( v198 == 1 ) /*0x14096df55*/
              {
LABEL_211:
                LOBYTE(v198) = sub_140EE1AF0(v197[68], v197[69]); /*0x14096df77*/
              }
              else if ( v198 != 2 ) /*0x14096df5b*/
              {
                v199 = v197; /*0x14096df5d*/
                sub_14107F1B0(v197, sub_140473F20); /*0x14096df6a*/
                v197 = v199; /*0x14096df70*/
                v199[72] = 1; /*0x14096df73*/
                goto LABEL_211; /*0x14096df73*/
              }
              v200 = (__int64 *)(v388 + 2840); /*0x14096df8f*/
              sub_140064240(v277, v388 + 2840, v382); /*0x14096dfa7*/
              v202 = v277[0]; /*0x14096dfad*/
              if ( *(_QWORD *)v277 != 1 ) /*0x14096dfb8*/
              {
                v46 = *(void (__fastcall ***)(volatile signed __int64 *))&v277[24]; /*0x14096dff4*/
                v3 = *(_QWORD *)&v277[16]; /*0x14096dff4*/
                LOBYTE(v198) = *(_QWORD *)&v277[8] == 0; /*0x14096e003*/
LABEL_216:
                v203 = *v200; /*0x14096e009*/
                if ( (unsigned __int8)sub_140EE8B80(v203) ) /*0x14096e00f*/
                  sub_140EE5BB0(v203); /*0x14096e01c*/
                v84 = v387; /*0x14096e022*/
                v353 = v387; /*0x14096e029*/
                v352 = v386; /*0x14096e037*/
                sub_140141040(v385); /*0x14096e045*/
                if ( v202 ) /*0x14096e04e*/
                {
                  v353 = v84; /*0x14096e05e*/
                  v352 = v386; /*0x14096e06c*/
                  sub_140EE6060(v388 + 2720); /*0x14096e073*/
                }
                else if ( !((v3 == 0) | v198 & 1) ) /*0x14096e084*/
                {
                  v385 = (volatile signed __int64 *)v3; /*0x14096e08a*/
                  v383 = (char *)v46; /*0x14096e091*/
                  if ( *v46 ) /*0x14096e098*/
                    (*v46)(v385); /*0x14096e0a7*/
                  v204 = *((_QWORD *)v383 + 1); /*0x14096e0b1*/
                  v84 = v387; /*0x14096e0b8*/
                  if ( v204 ) /*0x14096e0c6*/
                    sub_140001370(v385, v204, *((_QWORD *)v383 + 2)); /*0x14096e0cc*/
                }
                v205 = v388; /*0x14096e0d1*/
                *(_BYTE *)(v388 + 2710) = 0; /*0x14096e0d8*/
                v105 = *(_QWORD *)(v205 + 2664); /*0x14096e0df*/
                v95 = *(_QWORD *)(v205 + 2672); /*0x14096e0e6*/
                v385 = *(volatile signed __int64 **)(v205 + 2680); /*0x14096e0f4*/
                v383 = *(char **)(v205 + 2688); /*0x14096e102*/
                v81 = *(_BYTE *)(v205 + 2696); /*0x14096e109*/
                v373[0] = *(_DWORD *)(v205 + 2697); /*0x14096e116*/
                *(_DWORD *)((char *)v373 + 3) = *(_DWORD *)(v205 + 2700); /*0x14096e122*/
                v329 = v84; /*0x14096e12f*/
                v106 = v386; /*0x14096e136*/
                v328 = v386; /*0x14096e13d*/
                sub_140EF73C0(v205 + 2720); /*0x14096e144*/
                v65 = v388; /*0x14096e14a*/
                *(_BYTE *)(v388 + 2706) = 0; /*0x14096e151*/
                *(_BYTE *)(v65 + 2707) = 0; /*0x14096e158*/
                *(_DWORD *)(v65 + 2710) = 0; /*0x14096e15f*/
                *(_BYTE *)(v65 + 2714) = 0; /*0x14096e169*/
                *(_BYTE *)(v65 + 2715) = 0; /*0x14096e170*/
                *(_BYTE *)(v65 + 2716) = 0; /*0x14096e177*/
                *(_BYTE *)(v65 + 2708) = 0; /*0x14096e17e*/
                v206 = *(_QWORD *)(v65 + 2624); /*0x14096e185*/
                if ( v206 ) /*0x14096e18f*/
                  sub_140001370(*(_QWORD *)(v65 + 2632), v206, 1); /*0x14096e19e*/
                *(_BYTE *)(v65 + 2709) = 0; /*0x14096e1a3*/
                *(_DWORD *)&v348[3] = *(_DWORD *)((char *)v373 + 3); /*0x14096e1b6*/
                *(_DWORD *)v348 = v373[0]; /*0x14096e1bc*/
                *(_BYTE *)(v65 + 2704) = 1; /*0x14096e1c2*/
                if ( v105 == 2 ) /*0x14096e1cd*/
                  goto LABEL_47; /*0x14096e1cd*/
LABEL_113:
                *(_DWORD *)&v374[3] = *(_DWORD *)&v348[3]; /*0x14096c825*/
                *(_DWORD *)v374 = *(_DWORD *)v348; /*0x14096c837*/
                v369 = v84; /*0x14096c83d*/
                sub_1409B6B60(v106); /*0x14096c847*/
                v108 = v383; /*0x14096c851*/
                v87 = v385; /*0x14096c858*/
                if ( v105 == 1 ) /*0x14096c85f*/
                {
                  switch ( v95 ) /*0x14096c873*/
                  {
                    case 0LL: /*0x14096c873*/
                      v387 = v84; /*0x14096c875*/
                      *(_QWORD *)v277 = v385; /*0x14096c87c*/
                      *(_QWORD *)&v277[8] = v383; /*0x14096c883*/
                      v277[16] = v81; /*0x14096c88a*/
                      *(_DWORD *)&v277[17] = *(_DWORD *)v374; /*0x14096c89d*/
                      *(_DWORD *)&v277[20] = *(_DWORD *)&v374[3]; /*0x14096c8a3*/
                      *(_QWORD *)&v271 = v277; /*0x14096c8b0*/
                      *((_QWORD *)&v271 + 1) = sub_140001000; /*0x14096c8be*/
                      sub_14108F360(&v333, &unk_141362699, &v271); /*0x14096c8da*/
                      goto LABEL_156; /*0x14096c8e0*/
                    case 1LL: /*0x14096c873*/
                      nullsub_1(v107, v383); /*0x14096d7bf*/
                      v171 = sub_140001360(24, 1); /*0x14096d7ce*/
                      v65 = v388; /*0x14096d7d6*/
                      if ( !v171 ) /*0x14096d7dd*/
                      {
                        v369 = v84; /*0x14096ecc2*/
                        sub_1412AD46B(1, 24); /*0x14096ecd3*/
                      }
                      *(_OWORD *)v171 = xmmword_141362707; /*0x14096d7ea*/
                      *(_QWORD *)(v171 + 16) = 0x8280E395BDE5BB99uLL; /*0x14096d7f7*/
                      *(_QWORD *)&v333 = 24; /*0x14096d7fb*/
                      *((_QWORD *)&v333 + 1) = v171; /*0x14096d806*/
                      *(_QWORD *)&v334 = 24; /*0x14096d80d*/
                      break; /*0x14096d80d*/
                    case 2LL: /*0x14096c873*/
                      nullsub_1(v107, v383); /*0x14096d435*/
                      v154 = (_OWORD *)sub_140001360(48, 1); /*0x14096d444*/
                      v65 = v388; /*0x14096d44c*/
                      if ( !v154 ) /*0x14096d453*/
                      {
                        v369 = v84; /*0x14096eca6*/
                        sub_1412AD46B(1, 48); /*0x14096ecb7*/
                      }
                      v154[2] = xmmword_14136273F; /*0x14096d460*/
                      v154[1] = xmmword_14136272F; /*0x14096d46b*/
                      *v154 = xmmword_14136271F; /*0x14096d476*/
                      *(_QWORD *)&v333 = 48; /*0x14096d479*/
                      *((_QWORD *)&v333 + 1) = v154; /*0x14096d484*/
                      *(_QWORD *)&v334 = 48; /*0x14096d48b*/
                      break; /*0x14096d496*/
                    case 3LL: /*0x14096c873*/
                      v387 = v84; /*0x14096d49b*/
                      *(_QWORD *)v277 = v385; /*0x14096d4a2*/
                      *(_QWORD *)&v277[8] = v383; /*0x14096d4a9*/
                      v277[16] = v81; /*0x14096d4b0*/
                      *(_DWORD *)&v277[17] = *(_DWORD *)v374; /*0x14096d4c3*/
                      *(_DWORD *)&v277[20] = *(_DWORD *)&v374[3]; /*0x14096d4c9*/
                      *(_QWORD *)&v271 = v277; /*0x14096d4d6*/
                      *((_QWORD *)&v271 + 1) = sub_140001000; /*0x14096d4e4*/
                      sub_14108F360(&v333, &unk_14136274F, &v271); /*0x14096d500*/
LABEL_156:
                      if ( *(_QWORD *)v277 ) /*0x14096d510*/
                        sub_140001370(*(_QWORD *)&v277[8], *(_QWORD *)v277, 1); /*0x14096d51f*/
                      v65 = v388; /*0x14096d524*/
                      v84 = v387; /*0x14096d52b*/
                      break; /*0x14096d532*/
                  }
                  v108 = *((char **)&v333 + 1); /*0x14096d81f*/
                  v87 = (volatile signed __int64 *)v333; /*0x14096d81f*/
                  v81 = v334; /*0x14096d826*/
                  *(_DWORD *)v349 = *(_DWORD *)((char *)&v334 + 1); /*0x14096d834*/
                  *(_DWORD *)&v349[3] = DWORD1(v334); /*0x14096d840*/
LABEL_175:
                  *(_DWORD *)((char *)v378 + 3) = *(_DWORD *)&v349[3]; /*0x14096d846*/
                  v378[0] = *(_DWORD *)v349; /*0x14096d858*/
                  v86 = v108; /*0x14096d85e*/
                  *(_WORD *)(v65 + 2531) = 0; /*0x14096d861*/
                  if ( !*(_BYTE *)(v65 + 2529) ) /*0x14096d871*/
                    goto LABEL_178; /*0x14096d871*/
LABEL_176:
                  v172 = *(_QWORD *)(v65 + 2544); /*0x14096d873*/
                  if ( v172 ) /*0x14096d87d*/
                    sub_140001370(*(_QWORD *)(v65 + 2552), v172, 1); /*0x14096d88c*/
LABEL_178:
                  *(_BYTE *)(v65 + 2529) = 0; /*0x14096d891*/
                  *(_BYTE *)(v65 + 2533) = 0; /*0x14096d898*/
                  v173 = *(_QWORD *)(v65 + 2456); /*0x14096d89f*/
                  v174 = 0x8000000000000000uLL; /*0x14096d8a6*/
                  if ( !v173 ) /*0x14096d8b3*/
                    goto LABEL_180; /*0x14096d8b3*/
                  goto LABEL_179; /*0x14096d8b3*/
                }
                *(_DWORD *)&v349[3] = *(_DWORD *)&v374[3]; /*0x14096c8f1*/
                *(_DWORD *)v349 = *(_DWORD *)v374; /*0x14096c8f7*/
                v65 = v388; /*0x14096c901*/
                if ( v95 == 2 ) /*0x14096c908*/
                  goto LABEL_175; /*0x14096c908*/
                *(_WORD *)(v388 + 2531) = 257; /*0x14096c90e*/
                *(_QWORD *)(v65 + 2400) = v95; /*0x14096c917*/
                *(_QWORD *)(v65 + 2408) = v87; /*0x14096c91e*/
                *(_QWORD *)(v65 + 2416) = v108; /*0x14096c925*/
                *(_BYTE *)(v65 + 2424) = v81; /*0x14096c92c*/
                v109 = *(_DWORD *)&v374[3]; /*0x14096c939*/
                *(_DWORD *)(v65 + 2425) = *(_DWORD *)v374; /*0x14096c93f*/
                *(_DWORD *)(v65 + 2428) = v109; /*0x14096c945*/
                v387 = v84; /*0x14096c94e*/
                if ( (v95 & 1) != 0 ) /*0x14096c955*/
                {
                  *(_BYTE *)(v65 + 2532) = 0; /*0x14096c962*/
                  *(_QWORD *)&v334 = *(_QWORD *)(v65 + 2424); /*0x14096c96d*/
                  v333 = *(_OWORD *)(v65 + 2408); /*0x14096c977*/
                  *(_QWORD *)&v257 = &v333; /*0x14096c985*/
                  *((_QWORD *)&v257 + 1) = sub_140001000; /*0x14096c993*/
                  sub_14108F360(v277, &unk_141362650, &v257); /*0x14096c9af*/
                  v86 = *(char **)&v277[8]; /*0x14096c9bc*/
                  v87 = *(volatile signed __int64 **)v277; /*0x14096c9bc*/
                  v81 = v277[16]; /*0x14096c9c3*/
                  v378[0] = *(_DWORD *)&v277[17]; /*0x14096c9d1*/
                  *(_DWORD *)((char *)v378 + 3) = *(_DWORD *)&v277[20]; /*0x14096c9dd*/
                  if ( (_QWORD)v333 ) /*0x14096c9ed*/
                    sub_140001370(*((_QWORD *)&v333 + 1), v333, 1); /*0x14096c9fc*/
                  v65 = v388; /*0x14096ca01*/
                  v84 = v387; /*0x14096ca08*/
                  goto LABEL_150; /*0x14096ca0f*/
                }
                *(_BYTE *)(v65 + 2531) = 0; /*0x14096d537*/
                v155 = *(_QWORD *)(v65 + 2424); /*0x14096d53e*/
                *(_BYTE *)(v65 + 2528) = 1; /*0x14096d545*/
                v156 = *(_QWORD *)(v65 + 2488); /*0x14096d54c*/
                v372 = v87; /*0x14096d553*/
                v371 = v108; /*0x14096d55a*/
                v370 = v84; /*0x14096d561*/
                v157 = sub_14041AF60(v156); /*0x14096d568*/
                v372 = v87; /*0x14096d56e*/
                v371 = v383; /*0x14096d57c*/
                v370 = v84; /*0x14096d583*/
                sub_1405901E0(&v257, v157); /*0x14096d594*/
                v158 = *((char **)&v257 + 1); /*0x14096d59a*/
                LOBYTE(v379) = v258; /*0x14096d5a8*/
                if ( (_BYTE)v257 ) /*0x14096d5b5*/
                {
                  v386 = *((PVOID *)&v257 + 1); /*0x14096d5bb*/
                  *(_QWORD *)&v333 = 0; /*0x14096d5c2*/
                  *((_QWORD *)&v333 + 1) = 1; /*0x14096d5cd*/
                  *(_QWORD *)&v334 = 0; /*0x14096d5d8*/
                  *(_QWORD *)&v277[16] = 1610612768; /*0x14096d5e3*/
                  *(_QWORD *)v277 = &v333; /*0x14096d5f5*/
                  *(_QWORD *)&v277[8] = &off_141363340; /*0x14096d603*/
                  if ( (unsigned __int8)sub_14109EE30(aPoisonedLockAn, 41, v277) ) /*0x14096d61d*/
                    sub_1412AD780( /*0x14096eac7*/
                      (unsigned int)aADisplayImplem_11,
                      55,
                      (unsigned int)&v384,
                      (unsigned int)&unk_141363430,
                      (__int64)&off_1413633F8);
                  v158 = *((char **)&v333 + 1); /*0x14096d632*/
                  v160 = v333; /*0x14096d632*/
                  v81 = v334; /*0x14096d639*/
                  LODWORD(v271) = *(_DWORD *)((char *)&v334 + 1); /*0x14096d647*/
                  *(_DWORD *)((char *)&v271 + 3) = DWORD1(v334); /*0x14096d653*/
                  v84 = v387; /*0x14096d660*/
                  v89 = v385; /*0x14096d667*/
                  if ( !(_BYTE)v379 ) /*0x14096d66e*/
                  {
                    if ( 2 * *off_141963EA8 ) /*0x14096d67a*/
                    {
                      v372 = v385; /*0x14096eb4c*/
                      v371 = v383; /*0x14096eb5a*/
                      v370 = v387; /*0x14096eb61*/
                      v232 = *((char **)&v333 + 1); /*0x14096eb68*/
                      v233 = v385; /*0x14096eb6b*/
                      v234 = sub_1412AC970(v159, v385); /*0x14096eb6e*/
                      v89 = v233; /*0x14096eb74*/
                      v158 = v232; /*0x14096eb77*/
                      if ( !v234 ) /*0x14096eb7c*/
                        *((_BYTE *)v386 + 1) = 1; /*0x14096eb89*/
                    }
                  }
                  v161 = v386; /*0x14096d688*/
                  v162 = *(_BYTE *)v386; /*0x14096d68f*/
                  *(_BYTE *)v386 = 0; /*0x14096d68f*/
                  if ( v162 == 2 ) /*0x14096d693*/
                  {
                    v372 = v89; /*0x14096ead2*/
                    v371 = v383; /*0x14096eae0*/
                    v370 = v84; /*0x14096eae7*/
                    v230 = v158; /*0x14096eaee*/
                    v231 = v89; /*0x14096eaf1*/
                    WakeByAddressSingle(v161); /*0x14096eaf4*/
                    v89 = v231; /*0x14096eaf9*/
                    v158 = v230; /*0x14096eafc*/
                  }
                  *(_DWORD *)((char *)&v283 + 3) = *(_DWORD *)((char *)&v271 + 3); /*0x14096d6a5*/
                  LODWORD(v283) = v271; /*0x14096d6ab*/
                  if ( !__OFSUB__(-v160, 1) ) /*0x14096d6b7*/
                  {
                    v86 = v158; /*0x14096dd86*/
                    *(_DWORD *)((char *)v378 + 3) = *(_DWORD *)((char *)&v283 + 3); /*0x14096dd95*/
                    v378[0] = v283; /*0x14096dd9b*/
                    v65 = v388; /*0x14096dda1*/
                    v87 = (volatile signed __int64 *)v160; /*0x14096dda8*/
                    if ( *(_BYTE *)(v388 + 2528) != 1 ) /*0x14096ddb2*/
                      goto LABEL_150; /*0x14096ddb2*/
                    goto LABEL_148; /*0x14096ddb2*/
                  }
                  LOBYTE(v379) = v81; /*0x14096d6bd*/
                }
                v386 = v158; /*0x14096d6c4*/
                sub_1403376E0(&v281, v158 + 8); /*0x14096d6d6*/
                if ( ((unsigned __int8)v379 & 1) == 0 ) /*0x14096d6e3*/
                {
                  if ( 2 * *off_141963EA8 ) /*0x14096d6ef*/
                  {
                    v372 = v385; /*0x14096eb0b*/
                    v371 = v383; /*0x14096eb19*/
                    v370 = v387; /*0x14096eb27*/
                    if ( !(unsigned __int8)sub_1412AC970(v164, v163) ) /*0x14096eb2e*/
                      *((_BYTE *)v386 + 1) = 1; /*0x14096eb43*/
                  }
                }
                v165 = v386; /*0x14096d6fd*/
                v166 = *(_BYTE *)v386; /*0x14096d704*/
                *(_BYTE *)v386 = 0; /*0x14096d704*/
                v167 = v387; /*0x14096d708*/
                v168 = v385; /*0x14096d70f*/
                if ( v166 == 2 ) /*0x14096d716*/
                {
                  v372 = v385; /*0x14096ea7a*/
                  v371 = v383; /*0x14096ea88*/
                  v370 = v387; /*0x14096ea8f*/
                  WakeByAddressSingle(v165); /*0x14096ea96*/
                }
                v169 = v388; /*0x14096d71c*/
                *(_WORD *)(v388 + 2528) = 0; /*0x14096d723*/
                *(_QWORD *)v277 = v168; /*0x14096d72c*/
                *(_QWORD *)&v277[8] = v383; /*0x14096d73a*/
                *(_QWORD *)&v277[16] = v155; /*0x14096d741*/
                *(_OWORD *)&v277[24] = *(_OWORD *)(v169 + 2544); /*0x14096d74f*/
                *(_QWORD *)&v277[40] = *(_QWORD *)(v169 + 2560); /*0x14096d75d*/
                *(_OWORD *)&v277[48] = v281; /*0x14096d772*/
                *(_OWORD *)&v277[64] = v282; /*0x14096d779*/
                v377 = v168; /*0x14096d780*/
                v376 = v383; /*0x14096d787*/
                v375 = v167; /*0x14096d78e*/
                v170 = sub_1401A1E30(v277, &off_141362638); /*0x14096d7a3*/
                v3 = v388; /*0x14096d7a9*/
                *(_QWORD *)(v388 + 2544) = v170; /*0x14096d7b7*/
LABEL_59:
                v379 = (volatile signed __int64 **)v45; /*0x14096bfca*/
                v386 = (PVOID)(v3 + 2544); /*0x14096bfe2*/
                sub_1400643F0(v277, v3 + 2544, v382); /*0x14096bff0*/
                v75 = *(_QWORD *)v277; /*0x14096bff6*/
                if ( *(_QWORD *)v277 == 0x8000000000000003uLL ) /*0x14096c00a*/
                {
                  *(_BYTE *)v379 = 4; /*0x14096c019*/
LABEL_64:
                  v65 = v388; /*0x14096c060*/
                  goto LABEL_181; /*0x14096c067*/
                }
                v90 = *(_QWORD *)&v277[8]; /*0x14096c3b4*/
                v91 = *(_QWORD *)&v277[16]; /*0x14096c3bb*/
                v92 = v277[24]; /*0x14096c3c2*/
                v365[0] = *(_DWORD *)&v277[25]; /*0x14096c3cf*/
                *(_DWORD *)((char *)v365 + 3) = *(_DWORD *)&v277[28]; /*0x14096c3db*/
                sub_1412762D0(v249, &v277[32], 144); /*0x14096c3f5*/
                v93 = *(_QWORD *)v386; /*0x14096c401*/
                v377 = v385; /*0x14096c40b*/
                v376 = v383; /*0x14096c419*/
                v375 = v387; /*0x14096c427*/
                if ( (unsigned __int8)sub_140EE8B80(v93) ) /*0x14096c431*/
                {
                  v377 = v385; /*0x14096c442*/
                  v376 = v383; /*0x14096c450*/
                  v375 = v387; /*0x14096c45e*/
                  sub_140EE5BB0(v93); /*0x14096c468*/
                }
                if ( v75 == 0x8000000000000001uLL ) /*0x14096c47b*/
                {
                  *(_QWORD *)v277 = v90; /*0x14096d1aa*/
                  *(_QWORD *)&v277[8] = v91; /*0x14096d1b1*/
                  v277[16] = v92; /*0x14096d1b8*/
                  *(_DWORD *)&v277[17] = v365[0]; /*0x14096d1cb*/
                  *(_DWORD *)&v277[20] = *(_DWORD *)((char *)v365 + 3); /*0x14096d1d1*/
                  *(_OWORD *)&v277[24] = v249[0]; /*0x14096d1f3*/
                  *(_OWORD *)&v277[40] = v249[1]; /*0x14096d1fa*/
                  *(_OWORD *)&v277[56] = v249[2]; /*0x14096d201*/
                  *(_OWORD *)&v277[72] = v249[3]; /*0x14096d208*/
                  *(_QWORD *)&v277[88] = v250; /*0x14096d216*/
                  *(_QWORD *)&v271 = v277; /*0x14096d21d*/
                  *((_QWORD *)&v271 + 1) = sub_1400603E0; /*0x14096d22b*/
                  sub_14108F360(&v333, &unk_1413627A3, &v271); /*0x14096d247*/
                  v377 = v385; /*0x14096d254*/
                  v376 = v383; /*0x14096d262*/
                  v375 = v387; /*0x14096d270*/
                  sub_1409B6100(v277); /*0x14096d27e*/
                }
                else
                {
                  if ( v75 != 0x8000000000000002uLL ) /*0x14096c48e*/
                  {
                    sub_1412762D0(v259, v249, 144); /*0x14096d324*/
                    *(_DWORD *)((char *)&v258 + 9) = v365[0]; /*0x14096d335*/
                    HIDWORD(v258) = *(_DWORD *)((char *)v365 + 3); /*0x14096d33b*/
                    v150 = v388; /*0x14096d341*/
                    *(_BYTE *)(v388 + 2530) = 1; /*0x14096d348*/
                    *(_QWORD *)&v257 = v75; /*0x14096d34f*/
                    *((_QWORD *)&v257 + 1) = v90; /*0x14096d356*/
                    *(_QWORD *)&v258 = v91; /*0x14096d35d*/
                    BYTE8(v258) = v92; /*0x14096d364*/
                    v151 = *(_QWORD *)(v150 + 2488); /*0x14096d36b*/
                    v368 = v385; /*0x14096d379*/
                    v367 = v383; /*0x14096d387*/
                    v152 = v387; /*0x14096d38e*/
                    v366 = v387; /*0x14096d395*/
                    sub_14041E030(&v271, v151); /*0x14096d3a3*/
                    *(_BYTE *)(v388 + 2530) = 0; /*0x14096d3b0*/
                    sub_1412762D0(v277, &v271, 152); /*0x14096d3c7*/
                    sub_1412762D0(v280, &v257, 176); /*0x14096d3e0*/
                    v368 = v385; /*0x14096d3ec*/
                    v367 = v383; /*0x14096d3fa*/
                    v366 = v152; /*0x14096d401*/
                    v153 = sub_1401A1A40(v277, &off_141362668); /*0x14096d412*/
                    *(_QWORD *)v386 = v153; /*0x14096d41f*/
                    v3 = v388; /*0x14096d422*/
                    v45 = v379; /*0x14096d429*/
LABEL_62:
                    v379 = (volatile signed __int64 **)(v3 + 2544); /*0x14096c024*/
                    sub_140064050(v277, v3 + 2544, v382); /*0x14096c043*/
                    v76 = *(_QWORD *)&v277[80]; /*0x14096c049*/
                    if ( *(_QWORD *)&v277[80] == 5 ) /*0x14096c054*/
                    {
                      *v45 = 5; /*0x14096c05c*/
                      goto LABEL_64; /*0x14096c05c*/
                    }
                    v80 = *(char **)&v277[8]; /*0x14096c193*/
                    v386 = *(PVOID *)v277; /*0x14096c193*/
                    v81 = v277[16]; /*0x14096c19a*/
                    v351[0] = *(_DWORD *)&v277[17]; /*0x14096c1a7*/
                    *(_DWORD *)((char *)v351 + 3) = *(_DWORD *)&v277[20]; /*0x14096c1b3*/
                    v363 = *(_OWORD **)&v277[24]; /*0x14096c1c0*/
                    v301 = *(_QWORD *)&v277[40]; /*0x14096c1dc*/
                    v322 = *(_QWORD *)&v277[32]; /*0x14096c1dc*/
                    v323 = *(_QWORD *)&v277[56]; /*0x14096c1f8*/
                    v364 = *(_QWORD *)&v277[48]; /*0x14096c1f8*/
                    v82 = *(_QWORD *)&v277[72]; /*0x14096c20d*/
                    v382 = *(char **)&v277[64]; /*0x14096c20d*/
                    sub_1412762D0(&v242, &v277[88], 672); /*0x14096c228*/
                    v83 = *v379; /*0x14096c234*/
                    v368 = v385; /*0x14096c23e*/
                    v367 = v383; /*0x14096c24c*/
                    v84 = v387; /*0x14096c253*/
                    v366 = v387; /*0x14096c25a*/
                    if ( (unsigned __int8)sub_140EE8B80(v83) ) /*0x14096c264*/
                    {
                      v368 = v385; /*0x14096c275*/
                      v367 = v383; /*0x14096c283*/
                      v366 = v84; /*0x14096c28a*/
                      sub_140EE5BB0(v83); /*0x14096c294*/
                    }
                    if ( (_DWORD)v76 == 3 ) /*0x14096c29e*/
                    {
                      v86 = v80; /*0x14096d086*/
                      v88 = v351; /*0x14096d089*/
                      v65 = v388; /*0x14096d090*/
                      v89 = v385; /*0x14096d097*/
                      v87 = (volatile signed __int64 *)v386; /*0x14096d09e*/
                    }
                    else
                    {
                      if ( (_DWORD)v76 != 4 ) /*0x14096c2a8*/
                      {
                        *((_QWORD *)&v305 + 1) = v363; /*0x14096d0d6*/
                        v306 = v322; /*0x14096d0e4*/
                        v307 = v301; /*0x14096d0f2*/
                        v308 = v364; /*0x14096d100*/
                        v309 = v323; /*0x14096d10e*/
                        v310 = v382; /*0x14096d11c*/
                        v311 = v82; /*0x14096d123*/
                        sub_1412762D0(&v277[8], &v242, 672); /*0x14096d13e*/
                        *(_DWORD *)((char *)&v305 + 1) = v351[0]; /*0x14096d14f*/
                        DWORD1(v305) = *(_DWORD *)((char *)v351 + 3); /*0x14096d155*/
                        *(_QWORD *)&v304 = v386; /*0x14096d162*/
                        *((_QWORD *)&v304 + 1) = v80; /*0x14096d169*/
                        LOBYTE(v305) = v81; /*0x14096d170*/
                        *(_QWORD *)v277 = v76; /*0x14096d177*/
                        if ( BYTE4(v82) == 2 ) /*0x14096d190*/
                        {
                          v147 = 0; /*0x14096d196*/
                          v148 = &unk_14136268C; /*0x14096d199*/
                          v149 = 13; /*0x14096d1a0*/
                        }
                        else
                        {
                          sub_140352C90(*(_QWORD *)(v388 + 2488), v277, aImport, 6); /*0x14096db82*/
                          v149 = 2LL * (BYTE4(v82) != 0) + 5; /*0x14096db90*/
                          v148 = &unk_141362685; /*0x14096db9c*/
                          if ( !BYTE4(v82) ) /*0x14096dba3*/
                            v148 = &unk_141362680; /*0x14096dba3*/
                          v147 = 1; /*0x14096dba7*/
                        }
                        sub_1400DEBD0((unsigned int)&v324, v149, 0, 1, 1); /*0x14096dbc6*/
                        v183 = *((_QWORD *)&v324 + 1); /*0x14096dbcb*/
                        if ( (_DWORD)v324 == 1 ) /*0x14096dbd9*/
                        {
                          v382 = v80; /*0x14096ea0a*/
                          sub_1412AD46B(*((_QWORD *)&v324 + 1), v325); /*0x14096ea1b*/
                        }
                        v184 = v325; /*0x14096dbe6*/
                        sub_1412762D0(v325, v148, v149); /*0x14096dbf6*/
                        v294 = v147; /*0x14096dbfb*/
                        v283 = v304; /*0x14096dc09*/
                        *(_QWORD *)&v284 = v305; /*0x14096dc17*/
                        *((_QWORD *)&v284 + 1) = v363; /*0x14096dc25*/
                        v285 = v322; /*0x14096dc33*/
                        v286 = v301; /*0x14096dc41*/
                        v295 = BYTE5(v82); /*0x14096dc48*/
                        v293 = v82; /*0x14096dc4f*/
                        v290 = v364; /*0x14096dc5d*/
                        v291 = v323; /*0x14096dc6b*/
                        v292 = v382; /*0x14096dc79*/
                        v287 = v183; /*0x14096dc80*/
                        v288 = v184; /*0x14096dc87*/
                        v289 = v149; /*0x14096dc8e*/
                        sub_14001BBD0(&v333, &v283); /*0x14096dca3*/
                        v87 = *((volatile signed __int64 **)&v333 + 1); /*0x14096dcb0*/
                        v174 = v333; /*0x14096dcb0*/
                        v86 = (char *)v334; /*0x14096dcb7*/
                        v81 = BYTE8(v334); /*0x14096dcbe*/
                        v378[0] = *(_DWORD *)((char *)&v334 + 9); /*0x14096dccb*/
                        *(_DWORD *)((char *)v378 + 3) = HIDWORD(v334); /*0x14096dcd7*/
                        sub_1412762D0(v236, &v335, 152); /*0x14096dcee*/
                        sub_140407710(v277); /*0x14096dcfb*/
                        v65 = v388; /*0x14096dd01*/
                        *(_WORD *)(v388 + 2532) = 0; /*0x14096dd08*/
                        *(_DWORD *)(v65 + 2528) = 0; /*0x14096dd11*/
                        v173 = *(_QWORD *)(v65 + 2456); /*0x14096dd1b*/
                        v84 = v387; /*0x14096dd25*/
                        if ( !v173 ) /*0x14096dd2c*/
                        {
LABEL_180:
                          *(_WORD *)(v65 + 2534) = 0; /*0x14096d8c7*/
                          v326[0] = v378[0]; /*0x14096d8dc*/
                          *(_DWORD *)((char *)v326 + 3) = *(_DWORD *)((char *)v378 + 3); /*0x14096d8e2*/
                          sub_1412762D0(v237, v236, 152); /*0x14096d8f9*/
                          *(_BYTE *)(v65 + 2536) = 1; /*0x14096d8fe*/
                          if ( v174 == 0x8000000000000001uLL ) /*0x14096d912*/
                            goto LABEL_181; /*0x14096d912*/
                          HIDWORD(v254) = *(_DWORD *)((char *)v326 + 3); /*0x14096d943*/
                          *(_DWORD *)((char *)&v254 + 1) = v326[0]; /*0x14096d949*/
                          sub_1412762D0(&v255, v237, 152); /*0x14096d963*/
                          v251 = v174; /*0x14096d968*/
                          v386 = (PVOID)v87; /*0x14096d96f*/
                          v252 = v87; /*0x14096d976*/
                          v32 = v86; /*0x14096d97d*/
                          v253 = v86; /*0x14096d980*/
                          LOBYTE(v254) = v81; /*0x14096d987*/
                          sub_1409838E0(v84); /*0x14096d991*/
                          if ( dword_14195D0C0 ) /*0x14096d99f*/
                            sub_1412781B7(); /*0x14096e47c*/
                          LOBYTE(v177) = 1; /*0x14096d9a5*/
                          if ( _InterlockedCompareExchange8(&byte_14195D0A8, 1, 0) ) /*0x14096d9a9*/
                            sub_1412ABCB0(&byte_14195D0A8); /*0x14096e48e*/
                          v178 = off_141963EA8; /*0x14096d9b7*/
                          if ( 2 * *off_141963EA8 ) /*0x14096d9c1*/
                          {
                            v215 = sub_1412AC970(v177, v176); /*0x14096e499*/
                            v179 = v215; /*0x14096e49f*/
                            LOBYTE(v179) = v215 ^ 1; /*0x14096e4a1*/
                            if ( byte_14195D0A9 ) /*0x14096e4ad*/
                              goto LABEL_188; /*0x14096e4ad*/
                          }
                          else
                          {
                            v179 = 0; /*0x14096d9cd*/
                            if ( byte_14195D0A9 ) /*0x14096d9d8*/
                            {
LABEL_188:
                              if ( !(_BYTE)v179 && 2 * *v178 && !(unsigned __int8)sub_1412AC970(v179, v176) ) /*0x14096e9d6*/
                                byte_14195D0A9 = 1; /*0x14096e9e4*/
                              v180 = byte_14195D0A8; /*0x14096d9f3*/
                              byte_14195D0A8 = 0; /*0x14096d9f3*/
                              if ( v180 != 2 ) /*0x14096d9fb*/
                                goto LABEL_271; /*0x14096d9fb*/
                              goto LABEL_270; /*0x14096d9fb*/
                            }
                          }
                          LODWORD(v387) = v179; /*0x14096e4b3*/
                          if ( qword_14195D0B0 ) /*0x14096e4c1*/
                          {
                            v216 = qword_14195D0B8; /*0x14096e4c3*/
                            if ( qword_14195D0B8 ) /*0x14096e4cd*/
                            {
                              if ( (sub_140EF1810(qword_14195D0B8 + 48) & 5) == 1 ) /*0x14096e4df*/
                                (*(void (__fastcall **)(_QWORD))(*(_QWORD *)(v216 + 32) + 16LL))(*(_QWORD *)(v216 + 40)); /*0x14096e4e9*/
                              if ( qword_14195D0B8 /*0x14096e4f9*/
                                && !_InterlockedDecrement64((volatile signed __int64 *)qword_14195D0B8) )
                              {
                                sub_140EEA580(&qword_14195D0B8); /*0x14096e506*/
                              }
                            }
                          }
                          qword_14195D0B0 = 0; /*0x14096e50c*/
                          if ( !(_BYTE)v387 && 2 * *v178 && !(unsigned __int8)sub_1412AC970(v179, v176) ) /*0x14096e9f0*/
                            byte_14195D0A9 = 1; /*0x14096e9fe*/
                          v217 = byte_14195D0A8; /*0x14096e531*/
                          byte_14195D0A8 = 0; /*0x14096e531*/
                          if ( v217 != 2 ) /*0x14096e539*/
                            goto LABEL_271; /*0x14096e539*/
LABEL_270:
                          WakeByAddressSingle(&byte_14195D0A8); /*0x14096e9c4*/
LABEL_271:
                          v33 = v254; /*0x14096e53f*/
                          v38 = (unsigned __int64)v255; /*0x14096e546*/
                          sub_1412762D0(v238, v256, 144); /*0x14096e561*/
                          v218 = v388; /*0x14096e566*/
                          *(_BYTE *)(v388 + 2865) = 0; /*0x14096e56d*/
                          *(_BYTE *)(v218 + 2866) = 0; /*0x14096e574*/
                          sub_1400453B0(v218 + 2248); /*0x14096e582*/
                          v73 = v33 >> 8; /*0x14096e58b*/
                          goto LABEL_272; /*0x14096e58b*/
                        }
LABEL_179:
                        sub_140001370(*(_QWORD *)(v65 + 2464), v173, 1); /*0x14096d8b5*/
                        goto LABEL_180; /*0x14096d8c2*/
                      }
                      *(_QWORD *)v277 = v386; /*0x14096c2b5*/
                      *(_QWORD *)&v277[8] = v80; /*0x14096c2bc*/
                      v277[16] = v81; /*0x14096c2c3*/
                      *(_DWORD *)&v277[17] = v351[0]; /*0x14096c2d6*/
                      *(_DWORD *)&v277[20] = *(_DWORD *)((char *)v351 + 3); /*0x14096c2dc*/
                      *(_QWORD *)&v283 = v277; /*0x14096c2e2*/
                      *((_QWORD *)&v283 + 1) = sub_140EF7240; /*0x14096c2f0*/
                      sub_14108F360(&v333, &unk_141362785, &v283); /*0x14096c30c*/
                      v382 = *(char **)&v277[8]; /*0x14096c319*/
                      if ( *(_QWORD *)&v277[8] ) /*0x14096c323*/
                      {
                        v386 = *(PVOID *)&v277[16]; /*0x14096c32c*/
                        if ( **(_QWORD **)&v277[16] ) /*0x14096c333*/
                          (**(void (__fastcall ***)(char *))&v277[16])(v382); /*0x14096c342*/
                        v85 = *((_QWORD *)v386 + 1); /*0x14096c34c*/
                        if ( v85 ) /*0x14096c353*/
                          sub_140001370(v382, v85, *((_QWORD *)v386 + 2)); /*0x14096c360*/
                      }
                      v86 = *((char **)&v333 + 1); /*0x14096c36c*/
                      v87 = (volatile signed __int64 *)v333; /*0x14096c36c*/
                      v81 = v334; /*0x14096c373*/
                      LODWORD(v324) = *(_DWORD *)((char *)&v334 + 1); /*0x14096c381*/
                      *(_DWORD *)((char *)&v324 + 3) = DWORD1(v334); /*0x14096c38d*/
                      v88 = (int *)&v324; /*0x14096c393*/
                      v65 = v388; /*0x14096c39a*/
                      v84 = v387; /*0x14096c3a1*/
                      v89 = v385; /*0x14096c3a8*/
                    }
                    v146 = *v88; /*0x14096d0a5*/
                    *(_DWORD *)((char *)v378 + 3) = *(int *)((char *)v88 + 3); /*0x14096d0aa*/
                    v378[0] = v146; /*0x14096d0b0*/
                    *(_BYTE *)(v65 + 2530) = 0; /*0x14096d0b6*/
                    if ( *(_BYTE *)(v65 + 2528) != 1 ) /*0x14096d0c4*/
                    {
LABEL_150:
                      *(_BYTE *)(v65 + 2528) = 0; /*0x14096d2ee*/
                      *(_WORD *)(v65 + 2531) = 0; /*0x14096d2f5*/
                      if ( !*(_BYTE *)(v65 + 2529) ) /*0x14096d2fe*/
                        goto LABEL_178; /*0x14096d305*/
                      goto LABEL_176; /*0x14096d305*/
                    }
LABEL_148:
                    if ( v89 ) /*0x14096d2da*/
                      sub_140001370(v383, v89, 1); /*0x14096d2e9*/
                    goto LABEL_150; /*0x14096d2e9*/
                  }
                  *(_QWORD *)v277 = v90; /*0x14096c494*/
                  *(_QWORD *)&v277[8] = v91; /*0x14096c49b*/
                  v277[16] = v92; /*0x14096c4a2*/
                  *(_DWORD *)&v277[17] = v365[0]; /*0x14096c4b5*/
                  *(_DWORD *)&v277[20] = *(_DWORD *)((char *)v365 + 3); /*0x14096c4bb*/
                  *(_QWORD *)&v271 = v277; /*0x14096c4c1*/
                  *((_QWORD *)&v271 + 1) = sub_140EF7240; /*0x14096c4cf*/
                  sub_14108F360(&v333, &unk_141362767, &v271); /*0x14096c4eb*/
                  v382 = *(char **)&v277[8]; /*0x14096c4f8*/
                  if ( *(_QWORD *)&v277[8] ) /*0x14096c502*/
                  {
                    v386 = *(PVOID *)&v277[16]; /*0x14096c50f*/
                    if ( **(_QWORD **)&v277[16] ) /*0x14096c516*/
                      (**(void (__fastcall ***)(char *))&v277[16])(v382); /*0x14096c525*/
                    v94 = *((_QWORD *)v386 + 1); /*0x14096c52f*/
                    if ( v94 ) /*0x14096c536*/
                      sub_140001370(v382, v94, *((_QWORD *)v386 + 2)); /*0x14096c547*/
                  }
                }
                v86 = *((char **)&v333 + 1); /*0x14096d28b*/
                v87 = (volatile signed __int64 *)v333; /*0x14096d28b*/
                v81 = v334; /*0x14096d292*/
                v378[0] = *(_DWORD *)((char *)&v334 + 1); /*0x14096d2a0*/
                *(_DWORD *)((char *)v378 + 3) = DWORD1(v334); /*0x14096d2ac*/
                v65 = v388; /*0x14096d2b2*/
                *(_BYTE *)(v388 + 2530) = 0; /*0x14096d2b9*/
                v84 = v387; /*0x14096d2c0*/
                v89 = v385; /*0x14096d2c7*/
                if ( *(_BYTE *)(v65 + 2528) != 1 ) /*0x14096d2d5*/
                  goto LABEL_150; /*0x14096d2d5*/
                goto LABEL_148; /*0x14096d2d5*/
              }
              LOBYTE(v201) = v198 & 1 | ((_BYTE)v198 == 2); /*0x14096dfc4*/
              if ( !(unsigned __int8)sub_140EFCFB0(v201, v385, v382) ) /*0x14096dfdd*/
                goto LABEL_216; /*0x14096dfdd*/
              v64 = 5; /*0x14096dfdf*/
              v65 = v388; /*0x14096dfe1*/
LABEL_46:
              *v66 = v64; /*0x14096beae*/
LABEL_47:
              *v45 = 3; /*0x14096beb2*/
LABEL_181:
              *(_BYTE *)(v65 + 2864) = 3; /*0x14096d914*/
              *(_BYTE *)(v65 + 2872) = 3; /*0x14096d91b*/
              *v331 = 2; /*0x14096d929*/
              result = 3; /*0x14096d930*/
LABEL_292:
              *(_BYTE *)(v65 + 2880) = result; /*0x14096e8e9*/
              return result;
            case 1: /*0x14096b6cc*/
LABEL_316:
              v332 = v18; /*0x14096ebc7*/
              sub_1412ADB20(&off_141362810); /*0x14096ebd5*/
            case 2: /*0x14096b6cc*/
LABEL_315:
              v332 = v18; /*0x14096ebae*/
              sub_1412ADB40(&off_141362810); /*0x14096ebbc*/
            case 3: /*0x14096b6cc*/
LABEL_38:
              v332 = v18; /*0x14096bb3f*/
              v45 = (_BYTE *)(v3 + 2536); /*0x14096bb46*/
              v46 = (void (__fastcall **)(volatile signed __int64 *))(v3 + 2400); /*0x14096bb54*/
              switch ( *(_BYTE *)(v3 + 2536) ) /*0x14096bb69*/
              {
                case 0: /*0x14096bb69*/
                  v44 = *(volatile signed __int64 **)(v3 + 2480); /*0x14096bb6b*/
                  v23 = *(_QWORD *)(v3 + 2520); /*0x14096bb72*/
                  goto LABEL_40; /*0x14096bb72*/
                case 1: /*0x14096bb69*/
                  v327 = v3 + 2400; /*0x14096ec4d*/
                  sub_1412ADB20(&off_141362620); /*0x14096ec5b*/
                case 2: /*0x14096bb69*/
                  v327 = v3 + 2400; /*0x14096ec34*/
                  sub_1412ADB40(&off_141362620); /*0x14096ec42*/
                case 3: /*0x14096bb69*/
                  v66 = (char *)(v3 + 2704); /*0x14096c06c*/
                  v57 = (_QWORD *)(v3 + 2568); /*0x14096c07a*/
                  switch ( *(_BYTE *)(v3 + 2704) ) /*0x14096c08f*/
                  {
                    case 0: /*0x14096c08f*/
                      v58 = (char *)(v3 + 2704); /*0x14096c091*/
                      v54 = (_BYTE *)(v3 + 2536); /*0x14096c094*/
                      v44 = *(volatile signed __int64 **)(v3 + 2616); /*0x14096c097*/
                      goto LABEL_42; /*0x14096c09e*/
                    case 1: /*0x14096c08f*/
                      v314 = v3 + 2400; /*0x14096ec86*/
                      v313 = v3 + 2568; /*0x14096ec8d*/
                      sub_1412ADB20(&off_141361650); /*0x14096ec9b*/
                    case 2: /*0x14096c08f*/
                      v314 = v3 + 2400; /*0x14096ec66*/
                      JUMPOUT(0x14096EC6DLL); /*0x14096ec6d*/
                    case 3: /*0x14096c08f*/
                      v58 = (char *)(v3 + 2704); /*0x14096cf61*/
                      v54 = (_BYTE *)(v3 + 2536); /*0x14096cf64*/
                      v60 = (volatile signed __int64 *)(v3 + 2800); /*0x14096cf67*/
                      v140 = *(unsigned __int8 *)(v3 + 2800); /*0x14096cf6e*/
                      v363 = (_OWORD *)(v3 + 2752); /*0x14096cf8a*/
                      switch ( v140 ) /*0x14096cf91*/
                      {
                        case 0LL: /*0x14096cf91*/
                          v59 = *(const char **)(v3 + 2752); /*0x14096cf93*/
                          v61 = *(_QWORD *)(v3 + 2760); /*0x14096cf9a*/
                          goto LABEL_43; /*0x14096cfa1*/
                        case 1LL: /*0x14096cf91*/
                          v317 = v3 + 2400; /*0x14096ed02*/
                          v316 = v3 + 2568; /*0x14096ed09*/
                          v315 = v3 + 2800; /*0x14096ed10*/
                          sub_1412ADB20(&off_141364890); /*0x14096ed1e*/
                        case 2LL: /*0x14096cf91*/
                          v317 = v3 + 2400; /*0x14096ecde*/
                          v316 = v3 + 2568; /*0x14096ece5*/
                          v315 = v3 + 2800; /*0x14096ecec*/
                          sub_1412ADB40(&off_141364890); /*0x14096ecfa*/
                        case 3LL: /*0x14096cf91*/
                          v385 = (volatile signed __int64 *)(v3 + 2800); /*0x14096db4d*/
                          v386 = (PVOID)(v3 + 2568); /*0x14096db54*/
                          v387 = (void (__fastcall **)(volatile signed __int64 *))(v3 + 2400); /*0x14096db5b*/
                          goto LABEL_44; /*0x14096db62*/
                      }
                    case 4: /*0x14096c08f*/
                      v386 = (PVOID)(v3 + 2568); /*0x14096cf0a*/
                      v387 = (void (__fastcall **)(volatile signed __int64 *))(v3 + 2400); /*0x14096cf11*/
                      goto LABEL_130; /*0x14096cf11*/
                    case 5: /*0x14096c08f*/
                      v386 = (PVOID)(v3 + 2568); /*0x14096cf4e*/
                      v387 = (void (__fastcall **)(volatile signed __int64 *))(v3 + 2400); /*0x14096cf55*/
                      goto LABEL_208; /*0x14096cf5c*/
                  }
                case 4: /*0x14096bb69*/
                  v387 = (void (__fastcall **)(volatile signed __int64 *))(v3 + 2400); /*0x14096bfc3*/
                  goto LABEL_59; /*0x14096bfc3*/
                case 5: /*0x14096bb69*/
                  v387 = (void (__fastcall **)(volatile signed __int64 *))(v3 + 2400); /*0x14096c01d*/
                  goto LABEL_62; /*0x14096c01d*/
              }
          }
      }
  }
}

// ===== depth1: sub_140F019E0 (tokio JoinHandle 轮询结果解包: Ok/Cancelled/Panicked) =====
__int64 __fastcall sub_140F019E0(__int64 a1, __int128 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int128 v5; // xmm0
  __int64 v7; // r9
  __int64 v8; // r8
  char *v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // [rsp+20h] [rbp-40h] BYREF
  __int64 v15; // [rsp+28h] [rbp-38h]
  __int64 v16; // [rsp+30h] [rbp-30h]
  __int64 v17; // [rsp+38h] [rbp-28h]
  __int64 v18; // [rsp+40h] [rbp-20h]
  __int64 v19; // [rsp+48h] [rbp-18h]
  __int64 v20; // [rsp+50h] [rbp-10h]
  __int64 v21; // [rsp+58h] [rbp-8h]

  v21 = -2; /*0x140f019ec*/
  if ( *(_WORD *)a2 == 3 ) /*0x140f019fb*/
  {
    sub_140EE6440(&v14, (char *)a2 + 8); /*0x140f01a05*/
    if ( v14 == 2 ) /*0x140f01a12*/
    {
      *(_DWORD *)a1 = 3; /*0x140f01a14*/
    }
    else
    {
      v7 = v16; /*0x140f01a41*/
      v8 = v17; /*0x140f01a45*/
      if ( (_DWORD)v14 == 1 ) /*0x140f01a4c*/
      {
        v20 = v17; /*0x140f01a4e*/
        v9 = &aTaskWasCancell[18]; /*0x140f01a66*/
        if ( !v16 ) /*0x140f01a6d*/
          v9 = aTaskWasCancell; /*0x140f01a6d*/
        LOBYTE(v4) = 40; /*0x140f01a71*/
        v19 = v16; /*0x140f01a73*/
        v10 = sub_14105F2D0(v4, v9, 5LL * (v16 == 0) + 13); /*0x140f01a7d*/
        if ( v19 ) /*0x140f01a8b*/
        {
          if ( *(_QWORD *)v20 ) /*0x140f01a8d*/
            (*(void (__fastcall **)(__int64))v20)(v19); /*0x140f01a99*/
          v11 = *(_QWORD *)(v20 + 8); /*0x140f01aa0*/
          if ( v11 ) /*0x140f01aab*/
            sub_140001370(v19, v11, *(_QWORD *)(v20 + 16)); /*0x140f01ab1*/
        }
        *(_DWORD *)a1 = 2; /*0x140f01ab6*/
        *(_QWORD *)(a1 + 8) = v10; /*0x140f01abc*/
      }
      else
      {
        v12 = v15; /*0x140f01ac5*/
        if ( v15 ) /*0x140f01acc*/
        {
          v3 = v18; /*0x140f01ace*/
          v13 = 1; /*0x140f01ad2*/
        }
        else
        {
          v13 = 2; /*0x140f01ad9*/
          v12 = v16; /*0x140f01ade*/
        }
        *(_DWORD *)a1 = v13; /*0x140f01ae1*/
        *(_QWORD *)(a1 + 8) = v12; /*0x140f01ae3*/
        *(_QWORD *)(a1 + 16) = v7; /*0x140f01ae7*/
        *(_QWORD *)(a1 + 24) = v8; /*0x140f01aeb*/
        *(_QWORD *)(a1 + 32) = v3; /*0x140f01aef*/
      }
    }
  }
  else
  {
    v5 = *a2; /*0x140f01a1c*/
    *(_OWORD *)(a1 + 20) = a2[1]; /*0x140f01a23*/
    *(_OWORD *)(a1 + 4) = v5; /*0x140f01a27*/
    *(_WORD *)a2 = 2; /*0x140f01a2b*/
    *(_DWORD *)a1 = 0; /*0x140f01a30*/
  }
  return a1; /*0x140f01a39*/
}

// ===== depth2: sub_140EE6440 (TLS/TEB panic-hook 状态探测, NtCurrentTeb) =====
__int64 __fastcall sub_140EE6440(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  __int64 v4; // rax
  _BYTE *v5; // rdi
  int v6; // eax
  char v7; // bl
  unsigned __int8 v8; // r14
  _QWORD *v9; // rbx
  _QWORD *v10; // r14
  char v11; // al
  bool v12; // al
  __int128 v13; // xmm0
  int v14; // eax
  __int64 v15; // rcx
  _OWORD v17[2]; // [rsp+28h] [rbp-38h] BYREF
  __int64 v18; // [rsp+48h] [rbp-18h]
  unsigned __int8 v19; // [rsp+55h] [rbp-Bh]
  char v20; // [rsp+56h] [rbp-Ah]
  char v21; // [rsp+57h] [rbp-9h]
  __int64 v22; // [rsp+58h] [rbp-8h]

  v22 = -2; /*0x140ee644f*/
  *(_QWORD *)&v17[0] = 2; /*0x140ee645a*/
  v4 = *((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)TlsIndex); /*0x140ee6471*/
  v5 = (_BYTE *)(v4 + 392); /*0x140ee6475*/
  v6 = *(unsigned __int8 *)(v4 + 464); /*0x140ee647c*/
  if ( v6 != 1 ) /*0x140ee6486*/
  {
    if ( v6 == 2 ) /*0x140ee648b*/
    {
      v7 = 0; /*0x140ee648d*/
      v8 = 0; /*0x140ee648f*/
      goto LABEL_9; /*0x140ee6492*/
    }
    v9 = a2; /*0x140ee6494*/
    v10 = a3; /*0x140ee6497*/
    v21 = 0; /*0x140ee649a*/
    sub_14107F1B0(v5, sub_140EE6640); /*0x140ee64a8*/
    v5[72] = 1; /*0x140ee64ae*/
    a3 = v10; /*0x140ee64b2*/
    a2 = v9; /*0x140ee64b5*/
  }
  v8 = v5[68]; /*0x140ee64b8*/
  v7 = v5[69]; /*0x140ee64bd*/
  v11 = v7; /*0x140ee64c1*/
  if ( v8 == 1 ) /*0x140ee64c7*/
  {
    if ( !v7 ) /*0x140ee64cb*/
    {
      v15 = *a3; /*0x140ee6540*/
      v21 = 0; /*0x140ee6543*/
      sub_140EF9E60(v15, &off_1414D9208); /*0x140ee654e*/
      *(_QWORD *)a1 = 2; /*0x140ee6554*/
      return a1; /*0x140ee6554*/
    }
    v11 = v7 - 1; /*0x140ee64cd*/
  }
  v5[69] = v11; /*0x140ee64d0*/
LABEL_9:
  v19 = v8; /*0x140ee64d3*/
  v20 = v7; /*0x140ee64d7*/
  (*(void (__fastcall **)(_QWORD, _OWORD *, _QWORD))(*(_QWORD *)(*a2 + 16LL) + 24LL))(*a2, v17, *a3); /*0x140ee64e8*/
  v12 = LODWORD(v17[0]) == 2; /*0x140ee64f0*/
  *(_QWORD *)(a1 + 32) = v18; /*0x140ee64f7*/
  v13 = v17[0]; /*0x140ee64fb*/
  *(_OWORD *)(a1 + 16) = v17[1]; /*0x140ee6503*/
  *(_OWORD *)a1 = v13; /*0x140ee6507*/
  if ( (v8 & v12) == 1 ) /*0x140ee650f*/
  {
    v14 = (unsigned __int8)v5[72]; /*0x140ee6511*/
    if ( v14 == 1 ) /*0x140ee6518*/
    {
LABEL_13:
      v5[68] = 1; /*0x140ee6537*/
      v5[69] = v7; /*0x140ee653b*/
      return a1; /*0x140ee653e*/
    }
    if ( v14 != 2 ) /*0x140ee651d*/
    {
      v21 = 1; /*0x140ee651f*/
      sub_14107F1B0(v5, sub_140EE6640); /*0x140ee652d*/
      v5[72] = 1; /*0x140ee6533*/
      goto LABEL_13; /*0x140ee6533*/
    }
  }
  return a1; /*0x140ee655e*/
}

// ===== depth3: sub_14105F2D0 (堆分配 + 拼接 'task was cancelled'/'task panicked' 消息串) =====
__int64 __fastcall sub_14105F2D0(__int64 a1, const __m128i *a2, unsigned __int64 a3)
{
  char v4; // bl
  __m128i *v6; // rax
  __int64 v7; // r14
  unsigned __int64 *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 *v11; // rsi
  __int64 v12; // rax

  v4 = a1; /*0x14105f2ea*/
  if ( a3 ) /*0x14105f2ef*/
  {
    nullsub_1(a1, a2); /*0x14105f2f4*/
    v6 = (__m128i *)sub_140001360(a3, 1); /*0x14105f301*/
    if ( !v6 ) /*0x14105f309*/
      sub_1412AD46B(1, a3); /*0x14105f3bf*/
    v7 = (__int64)v6; /*0x14105f30f*/
    sub_1412762D0(v6, a2, a3); /*0x14105f31b*/
  }
  else
  {
    v7 = 1; /*0x14105f322*/
  }
  nullsub_1(a1, a2); /*0x14105f328*/
  v8 = (unsigned __int64 *)sub_140001360(24, 8); /*0x14105f337*/
  if ( !v8 ) /*0x14105f33f*/
    sub_1412AD451(8, 24); /*0x14105f399*/
  v11 = v8; /*0x14105f341*/
  *v8 = a3; /*0x14105f344*/
  v8[1] = v7; /*0x14105f347*/
  v8[2] = a3; /*0x14105f34b*/
  nullsub_1(v10, v9); /*0x14105f34f*/
  v12 = sub_140001360(24, 8); /*0x14105f35e*/
  if ( !v12 ) /*0x14105f366*/
    sub_1412AD451(8, 24); /*0x14105f3af*/
  *(_QWORD *)v12 = v11; /*0x14105f368*/
  *(_QWORD *)(v12 + 8) = &off_1415BE0E0; /*0x14105f372*/
  *(_BYTE *)(v12 + 16) = v4; /*0x14105f376*/
  return v12 + 1; /*0x14105f37c*/
}

// ===== depth4: sub_140001360 (thunk -> sub_141064840, Rust 全局分配器) =====
// attributes: thunk
__int64 __fastcall sub_140001360(__int64 a1, __int64 a2)
{
  return sub_141064840(a1, a2);
}

// ===== 补充 depth1 兄弟节点: sub_140969AA0 (embedded HTTP listener accept/poll 驱动, 含 'called after complete' Future 误用 panic 守卫) =====
__int64 *__fastcall sub_140969AA0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rdi
  _BYTE *v5; // r13
  unsigned __int8 *v6; // rax
  int v7; // ecx
  unsigned __int8 *v8; // rsi
  int v9; // ebx
  __int64 v10; // r9
  int v11; // r15d
  __int64 v12; // rcx
  __int64 v13; // rdi
  char *v14; // rcx
  __int64 v15; // rdx
  unsigned int v16; // eax
  char v17; // al
  volatile signed __int64 *v18; // r14
  _BYTE *v19; // rax
  __int64 v20; // rdx
  int v21; // ecx
  char v22; // r12
  char v23; // di
  char v24; // al
  _BYTE *v25; // rdi
  char v26; // cl
  volatile signed __int64 *v27; // r12
  char v28; // al
  _QWORD *v29; // rcx
  __int64 v30; // r12
  __int64 v31; // rcx
  __int64 v33; // [rsp+38h] [rbp-38h]
  __int64 v34; // [rsp+40h] [rbp-30h]
  __int64 v35; // [rsp+48h] [rbp-28h]
  __int64 *v36; // [rsp+50h] [rbp-20h]
  volatile signed __int64 **v37; // [rsp+58h] [rbp-18h]
  __int16 v39; // [rsp+68h] [rbp-8h] BYREF
  char v40; // [rsp+6Ah] [rbp-6h]
  _BYTE v41[2]; // [rsp+6Eh] [rbp-2h] BYREF
  __int64 v42; // [rsp+70h] [rbp+0h]

  v42 = -2; /*0x140969ab5*/
  v4 = a1; /*0x140969ac1*/
  v5 = *(_BYTE **)a2; /*0x140969ac4*/
  v37 = *(volatile signed __int64 ***)(a2 + 8); /*0x140969acb*/
  v6 = (unsigned __int8 *)sub_140EDF720(a1, a2, a3, a4); /*0x140969acf*/
  v7 = v6[72]; /*0x140969ad4*/
  if ( v7 == 1 ) /*0x140969adb*/
  {
LABEL_4:
    if ( !(unsigned __int8)sub_140EE1AF0(v6[68], v6[69]) ) /*0x140969b0a*/
    {
      sub_140EE1A80(a3); /*0x140969d63*/
      *v4 = 6; /*0x140969d68*/
      return v4; /*0x140969d6f*/
    }
    goto LABEL_5; /*0x140969b0a*/
  }
  if ( v7 != 2 ) /*0x140969ae0*/
  {
    v8 = v6; /*0x140969aec*/
    sub_14107F1B0(v6, sub_140473F20); /*0x140969aef*/
    v6 = v8; /*0x140969af4*/
    v8[72] = 1; /*0x140969af7*/
    goto LABEL_4; /*0x140969af7*/
  }
LABEL_5:
  v36 = v4; /*0x140969b10*/
  v9 = sub_140EF9790(3); /*0x140969b1e*/
  v11 = 0; /*0x140969b34*/
  v12 = 0; /*0x140969b3c*/
  v13 = a3; /*0x140969b3e*/
  while ( 1 ) /*0x140969b70*/
  {
    v15 = (unsigned __int8)*v5; /*0x140969b70*/
    v16 = (v11 + v9) % 3u; /*0x140969b75*/
    if ( v16 ) /*0x140969b78*/
    {
      if ( v16 == 1 ) /*0x140969b7d*/
      {
        if ( (v15 & 2) == 0 ) /*0x140969b82*/
        {
          v17 = sub_14096A030(v37 + 1, v13); /*0x140969b8b*/
          LOBYTE(v12) = 1; /*0x140969b90*/
          if ( v17 != 2 ) /*0x140969b94*/
          {
            *v5 |= 2u; /*0x140969d84*/
            v4 = v36; /*0x140969d89*/
            *v36 = 3; /*0x140969d8d*/
            *((_BYTE *)v36 + 8) = v17; /*0x140969d94*/
            return v4; /*0x140969d97*/
          }
        }
      }
      else if ( (v15 & 4) == 0 ) /*0x140969bd3*/
      {
        v24 = sub_140EE6240(v37 + 2, v13); /*0x140969be0*/
        LOBYTE(v12) = 1; /*0x140969be5*/
        if ( !v24 ) /*0x140969be9*/
        {
          *v5 |= 4u; /*0x140969d99*/
          v4 = v36; /*0x140969d9e*/
          *v36 = 4; /*0x140969da2*/
          return v4; /*0x140969da9*/
        }
      }
      goto LABEL_8; /*0x140969b94*/
    }
    if ( (v15 & 1) == 0 ) /*0x140969ba3*/
      break; /*0x140969ba3*/
LABEL_8:
    if ( ++v11 == 3 ) /*0x140969b57*/
    {
      v4 = v36; /*0x140969d4f*/
      if ( (v12 & 1) != 0 ) /*0x140969d4d*/
        *v36 = 6; /*0x140969d53*/
      else
        *v36 = 5; /*0x140969d78*/
      return v4; /*0x140969d5a*/
    }
  }
  v18 = *v37; /*0x140969ba9*/
  if ( !*v37 ) /*0x140969baf*/
    sub_1412AD9E0("called after complete", 43, &off_141360E58); /*0x140969e3b*/
  v19 = (_BYTE *)sub_140EDF720(v12, v15, 3 * ((v11 + v9) / 3u), v10); /*0x140969bb5*/
  v21 = (unsigned __int8)v19[72]; /*0x140969bba*/
  if ( v21 != 1 ) /*0x140969bc1*/
  {
    if ( v21 == 2 ) /*0x140969bc6*/
    {
      v22 = 0; /*0x140969bc8*/
      v23 = 0; /*0x140969bcb*/
      goto LABEL_27; /*0x140969bcd*/
    }
    v25 = v19; /*0x140969bfe*/
    sub_14107F1B0(v19, sub_140473F20); /*0x140969c01*/
    v19 = v25; /*0x140969c06*/
    v25[72] = 1; /*0x140969c09*/
  }
  v22 = v19[68]; /*0x140969c0d*/
  v23 = v19[69]; /*0x140969c12*/
  v26 = v23; /*0x140969c16*/
  if ( v22 == 1 ) /*0x140969c1c*/
  {
    if ( !v23 ) /*0x140969c21*/
    {
      v13 = a3; /*0x140969d2b*/
      sub_140EE1A80(a3); /*0x140969d32*/
      v40 = 0; /*0x140969d37*/
      HIBYTE(v39) = 0; /*0x140969d3b*/
      v14 = (char *)&v39 + 1; /*0x140969d41*/
      goto LABEL_7; /*0x140969d45*/
    }
    v26 = v23 - 1; /*0x140969c27*/
  }
  v19[69] = v26; /*0x140969c2a*/
  v40 = 0; /*0x140969c2d*/
  HIBYTE(v39) = 0; /*0x140969c31*/
  sub_140EE4800((char *)&v39 + 1); /*0x140969c3b*/
LABEL_27:
  v41[0] = v22; /*0x140969c40*/
  v41[1] = v23; /*0x140969c44*/
  v27 = v18 + 10; /*0x140969c48*/
  LOBYTE(v20) = 2; /*0x140969c4f*/
  v28 = sub_140EF1840(v18 + 10, v20); /*0x140969c51*/
  v13 = a3; /*0x140969c57*/
  if ( (v28 & 2) != 0 ) /*0x140969c5d*/
    goto LABEL_37; /*0x140969c5d*/
  if ( (v28 & 4) == 0 ) /*0x140969c65*/
  {
    if ( (v28 & 1) == 0 ) /*0x140969c6d*/
      goto LABEL_34; /*0x140969c6d*/
    v29 = v18 + 8; /*0x140969c6f*/
    if ( *((_QWORD *)v18 + 9) == *(_QWORD *)(*(_QWORD *)a3 + 8LL) && *v29 == **(_QWORD **)a3 ) /*0x140969c86*/
    {
LABEL_6:
      v14 = v41; /*0x140969b44*/
LABEL_7:
      sub_140EE4800(v14); /*0x140969b48*/
      LOBYTE(v12) = 1; /*0x140969b4d*/
      goto LABEL_8; /*0x140969b4d*/
    }
    if ( (_InterlockedAnd64(v27, 0xFFFFFFFFFFFFFFFEuLL) & 2) == 0 ) /*0x140969ca1*/
    {
      sub_140EF1800(v29); /*0x140969ca3*/
LABEL_34:
      sub_140EF17D0(v18 + 8, a3); /*0x140969ca9*/
      if ( (_InterlockedOr64(v27, 1u) & 2) == 0 ) /*0x140969cd1*/
        goto LABEL_6; /*0x140969cd1*/
      goto LABEL_37; /*0x140969cd1*/
    }
    _InterlockedOr64(v18 + 10, 1u); /*0x140969cd9*/
LABEL_37:
    v41[0] = 0; /*0x140969cdf*/
    v30 = *((_QWORD *)v18 + 2); /*0x140969ce3*/
    *((_QWORD *)v18 + 2) = 2; /*0x140969ce7*/
    if ( v30 == 2 ) /*0x140969cf3*/
      goto LABEL_46; /*0x140969cf3*/
    v35 = *((_QWORD *)v18 + 3); /*0x140969cfd*/
    v34 = *((_QWORD *)v18 + 4); /*0x140969d05*/
    v33 = *((_QWORD *)v18 + 5); /*0x140969d0d*/
    sub_140EE4800(v41); /*0x140969d15*/
    LOBYTE(v12) = 1; /*0x140969d1a*/
    if ( v30 != 3 ) /*0x140969d20*/
      goto LABEL_47; /*0x140969d20*/
    goto LABEL_8; /*0x140969d20*/
  }
  v41[0] = 0; /*0x140969dab*/
LABEL_46:
  sub_140EE4800(v41); /*0x140969daf*/
  v30 = 2; /*0x140969db8*/
LABEL_47:
  v4 = v36; /*0x140969dbe*/
  v31 = v33; /*0x140969dcc*/
  if ( *v37 ) /*0x140969dc2*/
  {
    if ( !_InterlockedDecrement64(*v37) ) /*0x140969dd6*/
    {
      sub_1404E94F0(v37); /*0x140969de0*/
      v31 = v33; /*0x140969de5*/
    }
    *v37 = nullptr; /*0x140969ded*/
  }
  v36[1] = v35; /*0x140969dfc*/
  v36[2] = v34; /*0x140969e04*/
  v36[3] = v31; /*0x140969e08*/
  *v5 |= 1u; /*0x140969e0c*/
  *v36 = v30; /*0x140969e11*/
  return v4; /*0x140969e17*/
}

// ===== 补充 depth1 兄弟节点: sub_140230C00 (future 组合子装配, 两次调用 sub_140F47940) =====
__int64 __fastcall sub_140230C00(__int64 a1)
{
  const __m128i *v2; // rdx
  unsigned __int64 v3; // rdi
  __m128i si128; // xmm0
  __m128i v5; // xmm1
  __m128i v6; // xmm3
  unsigned __int64 v7; // rbx
  __m128i v8; // xmm1
  __m128i v9; // xmm2
  _OWORD v11[2]; // [rsp+20h] [rbp-60h] BYREF
  _OWORD v12[3]; // [rsp+40h] [rbp-40h] BYREF
  __int64 v13; // [rsp+70h] [rbp-10h]
  unsigned __int64 v14; // [rsp+78h] [rbp-8h]
  __int128 v15; // [rsp+88h] [rbp+8h] BYREF
  __int64 v16; // [rsp+98h] [rbp+18h]
  __int128 v17; // [rsp+A0h] [rbp+20h] BYREF
  _QWORD v18[11]; // [rsp+B0h] [rbp+30h] BYREF
  char v19; // [rsp+108h] [rbp+88h]
  int v20; // [rsp+109h] [rbp+89h]
  __int16 v21; // [rsp+10Dh] [rbp+8Dh]
  char v22; // [rsp+10Fh] [rbp+8Fh]
  __m128i v23; // [rsp+110h] [rbp+90h] BYREF
  __m128i v24; // [rsp+120h] [rbp+A0h] BYREF
  _OWORD v25[4]; // [rsp+130h] [rbp+B0h] BYREF
  unsigned __int64 v26; // [rsp+170h] [rbp+F0h]
  char v27; // [rsp+178h] [rbp+F8h]
  int v28; // [rsp+179h] [rbp+F9h]
  __int16 v29; // [rsp+17Dh] [rbp+FDh]
  char v30; // [rsp+17Fh] [rbp+FFh]
  __int128 v31; // [rsp+188h] [rbp+108h] BYREF
  unsigned __int64 v32; // [rsp+198h] [rbp+118h]
  __int64 v33; // [rsp+1A0h] [rbp+120h]
  __int64 v34; // [rsp+1A8h] [rbp+128h]

  v34 = -2; /*0x140230c15*/
  sub_140F47940(v12); /*0x140230c2a*/
  sub_140F47940(&v17); /*0x140230c36*/
  v23.m128i_i64[0] = (__int64)v12; /*0x140230c3b*/
  v23.m128i_i64[1] = (__int64)sub_1402AB810; /*0x140230c49*/
  v24.m128i_i64[0] = (__int64)&v17; /*0x140230c50*/
  v24.m128i_i64[1] = (__int64)sub_1402AB810; /*0x140230c57*/
  sub_14108F360(&v31, &unk_1413275A0, &v23); /*0x140230c73*/
  v2 = *((const __m128i **)&v31 + 1); /*0x140230c78*/
  v3 = v32; /*0x140230c7f*/
  v19 = 0; /*0x140230c9d*/
  v17 = xmmword_141331700; /*0x140230cab*/
  *(__m128i *)v18 = _mm_loadu_si128((const __m128i *)&xmmword_141331710); /*0x140230cb7*/
  memset(&v18[2], 0, 72); /*0x140230cbc*/
  v33 = *((_QWORD *)&v31 + 1); /*0x140230cc8*/
  if ( v32 >= 0x40 ) /*0x140230ccf*/
  {
    v18[2] = v32 >> 6; /*0x140230cd8*/
    sub_140BFF2F0(&v17); /*0x140230ce0*/
    v2 = (const __m128i *)(v33 + (v3 & 0x7FFFFFFFFFFFFFC0LL)); /*0x140230cf3*/
    v3 &= 0x3Fu; /*0x140230cfa*/
  }
  sub_1412762D0((__m128i *)&v18[3], v2, v3); /*0x140230d03*/
  v19 = v3; /*0x140230d08*/
  v26 = v18[10]; /*0x140230d16*/
  v27 = v3; /*0x140230d24*/
  v28 = v20; /*0x140230d30*/
  v29 = v21; /*0x140230d3d*/
  v30 = v22; /*0x140230d4b*/
  si128 = _mm_load_si128((const __m128i *)&v17); /*0x140230d51*/
  v5 = _mm_load_si128((const __m128i *)v18); /*0x140230d56*/
  v6 = _mm_load_si128((const __m128i *)&v18[4]); /*0x140230d5f*/
  v25[0] = *(_OWORD *)&v18[2]; /*0x140230d64*/
  v25[3] = *(_OWORD *)&v18[8]; /*0x140230d6f*/
  v25[2] = _mm_load_si128((const __m128i *)&v18[6]); /*0x140230d7b*/
  v25[1] = v6; /*0x140230d83*/
  v24 = v5; /*0x140230d8b*/
  v23 = si128; /*0x140230d93*/
  v7 = _byteswap_uint64((v18[2] << 9) | (8 * (unsigned int)(unsigned __int8)v3)); /*0x140230dc0*/
  *((_BYTE *)v25 + (unsigned __int8)v3 + 8) = 0x80; /*0x140230dc3*/
  if ( (unsigned __int8)v3 == 63 /*0x140230df6*/
    || (sub_141276A60((char *)v25 + (unsigned __int8)v3 + 9, 0, (unsigned __int8)v3 ^ 0x3FLL),
        ((unsigned __int8)v3 ^ 0x38u) <= 7) )
  {
    sub_140BFF2F0(&v23); /*0x140230e08*/
    memset(v12, 0, sizeof(v12)); /*0x140230e1c*/
    v13 = 0; /*0x140230e21*/
    v14 = v7; /*0x140230e29*/
    sub_140BFF2F0(&v23); /*0x140230e3e*/
  }
  else
  {
    v26 = v7; /*0x140230e46*/
    sub_140BFF2F0(&v23); /*0x140230e5d*/
  }
  v8 = _mm_load_si128(&v23); /*0x140230e67*/
  v9 = _mm_load_si128(&v24); /*0x140230e6f*/
  v11[0] = _mm_packus_epi16( /*0x140230ebf*/
             _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v8, (__m128i)0LL), 27), 27),
             _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_unpackhi_epi8(v8, (__m128i)0LL), 27), 27));
  v11[1] = _mm_packus_epi16( /*0x140230ec4*/
             _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_unpacklo_epi8(v9, (__m128i)0LL), 27), 27),
             _mm_shufflehi_epi16(_mm_shufflelo_epi16(_mm_unpackhi_epi8(v9, (__m128i)0LL), 27), 27));
  ((void (__fastcall *)(__int128 *, void *, _OWORD *, __int64))sub_14005FED0)(&v15, &unk_1413275A3, v11, 32); /*0x140230ede*/
  *(_QWORD *)(a1 + 16) = v32; /*0x140230eeb*/
  *(_OWORD *)a1 = v31; /*0x140230ef6*/
  *(_OWORD *)(a1 + 24) = v15; /*0x140230efd*/
  *(_QWORD *)(a1 + 40) = v16; /*0x140230f05*/
  return a1; /*0x140230f0c*/
}