// win 1.2.1 | module src/core/relay/router_transition.rs | attributed via panic-Location xref (win-native)
// win 1.2.3 | = mac codexmate_lib::core::relay::router_transition::run_with_writer_policy | 跨平台字符串签名匹配(名↔函数一致)
__int64 __fastcall run_with_writer_policy(
        __int128 *a1,
        void *a2,
        __int8 a3,
        char a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 *a8,
        __int64 a9,
        unsigned __int8 *a10)
{
  __m128i si128; // xmm0
  int v12; // edx
  int v13; // eax
  int v14; // edx
  unsigned int v15; // edx
  __int64 (__fastcall *v16)(); // r14
  __int64 v17; // rcx
  __int64 *v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rdx
  __m128i v21; // xmm6
  __m128i v22; // xmm7
  char v23; // al
  __int64 v24; // rax
  __m128i v25; // xmm0
  __m128i v26; // xmm1
  __int64 result; // rax
  __m128i v28; // xmm0
  __m128i v29; // xmm1
  __int128 v30; // xmm2
  __int128 v31; // xmm3
  int v32; // edx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __m128i v36; // xmm0
  int v37; // r9d
  int v38; // edx
  __int64 v39; // rax
  unsigned int v40; // edx
  char v41; // bl
  __int64 *v42; // rax
  __int64 v43; // r9
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // r8
  __m128i v47; // xmm0
  __m128i v48; // xmm1
  __m128i v49; // xmm1
  int v50; // r9d
  __int64 v51; // rdx
  __m128i v52; // xmm0
  __m128i v53; // xmm1
  __int64 v54; // rdi
  __int64 v55; // rsi
  _QWORD *v56; // rbx
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // r8
  __m128i v61; // xmm0
  __m128i v62; // xmm1
  __int64 v63; // rcx
  __int64 v64; // rdx
  __m128i *v65; // rax
  __int64 v66; // rsi
  __int64 v67; // rax
  __int64 v68; // rcx
  __int128 v69; // rdi
  __int64 v70; // rdx
  __int64 v71; // rax
  __m128i *v72; // rbx
  __m128i v73; // xmm1
  __int64 v74; // rdi
  __int64 v75; // rbx
  __int64 v76; // rsi
  _QWORD *v77; // r12
  __int64 v78; // rdx
  __int64 v79; // rbx
  __int64 v80; // rsi
  __m128i v81; // xmm1
  _QWORD *v82; // r12
  __int64 v83; // rdx
  __int64 v84; // rdx
  __int64 v85; // r8
  __m128i v86; // xmm0
  __m128i v87; // xmm1
  int v88; // r9d
  __int64 v89; // rdx
  __int64 v90; // r12
  __int64 v91; // rdi
  __int64 (__fastcall *v92)(); // r15
  __int64 v93; // rbx
  __int64 v94; // rsi
  __int64 v95; // rdx
  __int64 v96; // rcx
  __int64 v97; // r8
  _QWORD *v98; // r14
  unsigned __int64 v99; // rax
  unsigned int v100; // edx
  bool v101; // zf
  bool v102; // al
  char v103; // bl
  __m128i v104; // xmm1
  __int32 v105; // esi
  __int8 v106; // bl
  unsigned __int64 v107; // rax
  unsigned int v108; // edx
  bool v109; // al
  __m128i v110; // xmm0
  __m128i v111; // xmm1
  _QWORD *v112; // rsi
  __int64 v113; // rdx
  __int64 v114; // rsi
  __int64 v115; // rdi
  _QWORD *v116; // rbx
  __m128i v117; // xmm0
  __m128i v118; // xmm1
  char v119; // si
  __m128i v120; // xmm1
  __int64 v121; // rax
  unsigned int v122; // edx
  __m128i v123; // xmm0
  __m128i v124; // xmm1
  __int128 *v125; // rax
  __m128i v126; // xmm0
  __m128i v127; // xmm1
  __int128 v128; // xmm2
  __int64 v129; // rsi
  __int64 v130; // rdi
  _QWORD *v131; // rbx
  __int64 v132; // rdx
  __int64 v133; // r9
  __m128i v134; // xmm0
  __m128i v135; // xmm1
  __m128i v136; // xmm0
  __m128i v137; // xmm1
  __int128 *v138; // rax
  __m128i v139; // xmm0
  __m128i v140; // xmm1
  __int128 v141; // xmm2
  char v142; // bl
  char v143; // si
  __int64 v144; // rdi
  _QWORD *v145; // rbx
  __int64 v146; // rdx
  __int64 v147; // rsi
  __int64 v148; // rax
  __int64 v149; // rcx
  __int64 v150; // rsi
  __m128i v151; // xmm0
  __m128i v152; // xmm1
  __m128i v153; // xmm0
  __m128i v154; // xmm1
  __int128 *v155; // rax
  __m128i v156; // xmm0
  __m128i v157; // xmm1
  __int128 v158; // xmm2
  __int64 v159; // rsi
  _QWORD *v160; // r14
  __int64 v161; // rdx
  __m128i v162; // xmm0
  __m128i v163; // xmm1
  __m128i v164; // xmm0
  __m128i v165; // xmm1
  __int128 v166; // xmm2
  __int64 v167; // rsi
  __m128i v168; // xmm0
  __m128i v169; // xmm1
  __int64 v170; // rax
  unsigned int v171; // edx
  __int64 v172; // rdx
  __int128 *v173; // rax
  __int128 v174; // xmm0
  __int128 v175; // xmm1
  __int128 v176; // xmm2
  __int64 v177; // rax
  unsigned int v178; // edx
  __int128 *v179; // rdi
  __m128i v180; // xmm0
  __m128i v181; // xmm1
  __int64 v182; // rax
  unsigned int v183; // edx
  _QWORD *v184; // r14
  __int64 v185; // rdx
  __m512i v186; // [rsp+40h] [rbp-40h] BYREF
  __m256i v187; // [rsp+80h] [rbp+0h]
  __m128i v188; // [rsp+A0h] [rbp+20h] BYREF
  __int64 v189; // [rsp+B0h] [rbp+30h]
  __m128i v190; // [rsp+B8h] [rbp+38h] BYREF
  __int64 v191; // [rsp+C8h] [rbp+48h]
  __m128i v192; // [rsp+D0h] [rbp+50h] BYREF
  __int64 v193; // [rsp+E0h] [rbp+60h]
  __int128 v194; // [rsp+E8h] [rbp+68h] BYREF
  __int64 v195; // [rsp+F8h] [rbp+78h]
  __int128 v196; // [rsp+100h] [rbp+80h]
  __int128 v197; // [rsp+110h] [rbp+90h]
  __int128 v198; // [rsp+120h] [rbp+A0h]
  __int64 v199; // [rsp+130h] [rbp+B0h]
  __int64 v200; // [rsp+140h] [rbp+C0h] BYREF
  __int128 v201; // [rsp+148h] [rbp+C8h]
  __int64 v202; // [rsp+158h] [rbp+D8h] BYREF
  __int128 v203; // [rsp+160h] [rbp+E0h]
  __int64 v204; // [rsp+170h] [rbp+F0h] BYREF
  __int128 v205; // [rsp+178h] [rbp+F8h]
  __m128i v206; // [rsp+188h] [rbp+108h] BYREF
  __int64 v207; // [rsp+198h] [rbp+118h]
  __int64 v208; // [rsp+1A0h] [rbp+120h] BYREF
  __int128 v209; // [rsp+1A8h] [rbp+128h]
  __int64 v210; // [rsp+1B8h] [rbp+138h] BYREF
  __int128 v211; // [rsp+1C0h] [rbp+140h]
  __int64 v212; // [rsp+1D0h] [rbp+150h] BYREF
  __int128 v213; // [rsp+1D8h] [rbp+158h]
  __int64 v214; // [rsp+1E8h] [rbp+168h] BYREF
  __int128 v215; // [rsp+1F0h] [rbp+170h]
  __int64 v216; // [rsp+200h] [rbp+180h] BYREF
  __int128 v217; // [rsp+208h] [rbp+188h]
  __int64 v218; // [rsp+218h] [rbp+198h] BYREF
  __int128 v219; // [rsp+220h] [rbp+1A0h]
  __int64 v220; // [rsp+230h] [rbp+1B0h] BYREF
  __int128 v221; // [rsp+238h] [rbp+1B8h]
  __int64 v222; // [rsp+248h] [rbp+1C8h] BYREF
  __int64 v223; // [rsp+250h] [rbp+1D0h]
  __int64 v224; // [rsp+258h] [rbp+1D8h]
  __int64 v225; // [rsp+260h] [rbp+1E0h] BYREF
  __int64 v226; // [rsp+268h] [rbp+1E8h]
  __int64 v227; // [rsp+270h] [rbp+1F0h]
  __int64 v228; // [rsp+278h] [rbp+1F8h] BYREF
  __int64 v229; // [rsp+280h] [rbp+200h]
  __int64 v230; // [rsp+288h] [rbp+208h]
  __int64 v231; // [rsp+290h] [rbp+210h] BYREF
  int v232; // [rsp+298h] [rbp+218h]
  __m128i v233; // [rsp+2A0h] [rbp+220h] BYREF
  __int64 v234; // [rsp+2B0h] [rbp+230h]
  __int64 v235; // [rsp+2B8h] [rbp+238h]
  unsigned __int8 *v236; // [rsp+2C0h] [rbp+240h]
  unsigned __int8 *v237; // [rsp+2C8h] [rbp+248h]
  _BYTE *v238; // [rsp+2D0h] [rbp+250h]
  _QWORD v239[2]; // [rsp+2D8h] [rbp+258h] BYREF
  __int64 v240; // [rsp+2E8h] [rbp+268h] BYREF
  int v241; // [rsp+2F0h] [rbp+270h]
  __m256i v242; // [rsp+2F8h] [rbp+278h] BYREF
  __int128 v243; // [rsp+318h] [rbp+298h]
  __int128 v244; // [rsp+328h] [rbp+2A8h]
  __int128 v245; // [rsp+338h] [rbp+2B8h]
  __int128 v246; // [rsp+348h] [rbp+2C8h]
  __int64 v247; // [rsp+358h] [rbp+2D8h]
  __int64 v248; // [rsp+360h] [rbp+2E0h] BYREF
  __int64 v249; // [rsp+368h] [rbp+2E8h]
  __int64 v250; // [rsp+370h] [rbp+2F0h]
  __int64 v251; // [rsp+378h] [rbp+2F8h]
  unsigned __int64 v252; // [rsp+380h] [rbp+300h]
  __int64 v253; // [rsp+388h] [rbp+308h]
  __int128 v254; // [rsp+390h] [rbp+310h] BYREF
  __int128 v255; // [rsp+3A0h] [rbp+320h]
  __int128 v256; // [rsp+3B0h] [rbp+330h]
  __int128 v257; // [rsp+3C0h] [rbp+340h]
  __int128 v258; // [rsp+3D0h] [rbp+350h]
  __int128 v259; // [rsp+3E0h] [rbp+360h]
  _BYTE FileHandle[104]; // [rsp+3F0h] [rbp+370h] BYREF
  __m128i v261; // [rsp+478h] [rbp+3F8h] BYREF
  __int64 v262; // [rsp+488h] [rbp+408h]
  __m128i v263; // [rsp+490h] [rbp+410h] BYREF
  __int64 v264; // [rsp+4A0h] [rbp+420h]
  __m256i v265; // [rsp+4B0h] [rbp+430h] BYREF
  __int128 v266; // [rsp+4D0h] [rbp+450h]
  __int128 v267; // [rsp+4E0h] [rbp+460h]
  __int128 v268; // [rsp+4F0h] [rbp+470h]
  __int128 v269; // [rsp+500h] [rbp+480h]
  int v270; // [rsp+518h] [rbp+498h]
  unsigned int v271; // [rsp+51Ch] [rbp+49Ch]
  __int64 v272; // [rsp+520h] [rbp+4A0h]
  __int64 v273; // [rsp+528h] [rbp+4A8h]
  __int64 v274; // [rsp+530h] [rbp+4B0h]
  __int32 v275; // [rsp+538h] [rbp+4B8h] BYREF
  __int8 v276; // [rsp+53Ch] [rbp+4BCh] BYREF
  __m256i v277; // [rsp+540h] [rbp+4C0h] BYREF
  __int128 v278; // [rsp+560h] [rbp+4E0h]
  __int128 v279; // [rsp+570h] [rbp+4F0h] BYREF
  __int128 v280; // [rsp+580h] [rbp+500h]
  __int128 v281; // [rsp+590h] [rbp+510h]
  __m128i v282; // [rsp+5A0h] [rbp+520h] BYREF
  __int64 v283; // [rsp+5B0h] [rbp+530h]
  _BYTE v284[96]; // [rsp+5C0h] [rbp+540h] BYREF
  __m128i v285; // [rsp+648h] [rbp+5C8h]
  __int64 v286; // [rsp+658h] [rbp+5D8h]
  __m128i v287; // [rsp+660h] [rbp+5E0h]
  __m128i v288; // [rsp+670h] [rbp+5F0h]
  __int128 v289; // [rsp+680h] [rbp+600h]
  __int128 v290; // [rsp+690h] [rbp+610h]
  __int128 v291; // [rsp+6A0h] [rbp+620h]
  __int128 v292; // [rsp+6B0h] [rbp+630h]
  unsigned __int128 v293; // [rsp+6C0h] [rbp+640h] BYREF
  __m128i v294; // [rsp+6D0h] [rbp+650h]
  __int128 v295; // [rsp+6E0h] [rbp+660h]
  __int128 v296; // [rsp+6F0h] [rbp+670h]
  __m256i v297; // [rsp+700h] [rbp+680h] BYREF
  __int128 v298; // [rsp+720h] [rbp+6A0h]
  __int128 v299; // [rsp+730h] [rbp+6B0h]
  __int64 v300; // [rsp+740h] [rbp+6C0h]
  __m128i v301; // [rsp+748h] [rbp+6C8h] BYREF
  __int64 v302; // [rsp+758h] [rbp+6D8h]
  __int128 *v303; // [rsp+768h] [rbp+6E8h]
  __m256i v304; // [rsp+770h] [rbp+6F0h] BYREF
  __int128 v305; // [rsp+790h] [rbp+710h]
  __int128 v306; // [rsp+7A0h] [rbp+720h]
  __m256i v307; // [rsp+7B0h] [rbp+730h] BYREF
  __m512i v308; // [rsp+7D0h] [rbp+750h] BYREF
  __m256i v309; // [rsp+810h] [rbp+790h]
  __int128 v310; // [rsp+830h] [rbp+7B0h]
  __int128 v311; // [rsp+840h] [rbp+7C0h]
  __int64 v312; // [rsp+850h] [rbp+7D0h]
  void *Buf; // [rsp+858h] [rbp+7D8h]
  char v314; // [rsp+866h] [rbp+7E6h]
  char v315; // [rsp+867h] [rbp+7E7h] BYREF
  __int64 *v316; // [rsp+868h] [rbp+7E8h]
  _BYTE v317[2]; // [rsp+874h] [rbp+7F4h] BYREF
  char v318; // [rsp+876h] [rbp+7F6h]
  char v319; // [rsp+877h] [rbp+7F7h]
  __int64 v320; // [rsp+878h] [rbp+7F8h]
  char v321; // [rsp+883h] [rbp+803h]
  char v322; // [rsp+884h] [rbp+804h]
  char v323; // [rsp+885h] [rbp+805h] BYREF
  char v324; // [rsp+886h] [rbp+806h] BYREF
  unsigned __int8 v325; // [rsp+887h] [rbp+807h] BYREF
  __int64 v326; // [rsp+888h] [rbp+808h]

  v326 = -2;
  Buf = a2;
  v303 = a1;
  si128 = _mm_load_si128((const __m128i *)&a5);
  v325 = a3;
  v317[0] = a4;
  v233 = si128;
  v240 = ((__int64 (*)(void))sub_141471910)();
  v241 = v12;
  v13 = ((__int64 (*)(void))sub_141471910)();
  v252 = sub_141491390(v13, v14, 12, 0, (__int64)&off_1417874D0);
  v271 = v15;
  *(_QWORD *)v284 = v317;
  *(_QWORD *)&v284[8] = sub_1407B87B0;
  *(_QWORD *)&v284[16] = &v233;
  v16 = sub_14041F680;
  *(_QWORD *)&v284[24] = sub_14041F680;
  sub_14149C0F0(&v228, &unk_1417874E8, v284);
  v308.m512i_i8[0] = a3;
  v320 = v229;
  *(_QWORD *)FileHandle = v229;
  *(_QWORD *)&FileHandle[8] = v230;
  *(_QWORD *)v284 = &v308;
  *(_QWORD *)&v284[8] = sub_1407B2DA0;
  *(_QWORD *)&v284[16] = FileHandle;
  *(_QWORD *)&v284[24] = sub_14041F680;
  sub_14149C0F0(&v293, &unk_141787489, v284);
  sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aStart_1, 5, (__int64)&v293);
  v18 = a8;
  v19 = a7;
  v20 = v228;
  if ( v228 )
    sub_140001660(v320, v228, 1);
  v316 = *(__int64 **)v19;
  v273 = *(_QWORD *)(v19 + 8);
  v253 = *(_QWORD *)(v19 + 16);
  v237 = *(unsigned __int8 **)(v19 + 24);
  v238 = *(_BYTE **)(v19 + 32);
  v234 = *v18;
  v235 = v18[1];
  v236 = (unsigned __int8 *)v18[2];
  v21 = _mm_cvtsi32_si128(0x6E6F6974u);
  v22 = _mm_load_si128((const __m128i *)&xmmword_1417862A0);
  v23 = 1;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( (unsigned __int8)v23 > 3u )
      {
LABEL_4:
        nullsub_1(v17);
        v24 = sub_140001650(109, 1);
        if ( !v24 )
          sub_1416C2D4B(1, 109);
        *(_OWORD *)(v24 + 93) = *(__int128 *)((char *)&xmmword_141787551 + 13);
        *(_OWORD *)(v24 + 80) = xmmword_141787551;
        *(_OWORD *)(v24 + 64) = xmmword_141787541;
        *(_OWORD *)(v24 + 48) = xmmword_141787531;
        *(_OWORD *)(v24 + 32) = xmmword_141787521;
        *(_OWORD *)(v24 + 16) = xmmword_141787511;
        *(__m128i *)v24 = _mm_loadu_si128((const __m128i *)&xmmword_141787501);
        v308.m512i_i64[1] = 109;
        v308.m512i_i64[2] = v24;
        v308.m512i_i64[3] = 109;
        v308.m512i_i64[0] = 10;
        *(_QWORD *)&v293 = 0;
        *((_QWORD *)&v293 + 1) = 1;
        v294.m128i_i64[0] = 0;
        *(_QWORD *)&v284[16] = 1610612768;
        *(_QWORD *)v284 = &v293;
        *(_QWORD *)&v284[8] = &off_141790AA0;
        if ( (unsigned __int8)sub_140B036A0(&v308, v284) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v324,
            (unsigned int)&unk_141789060,
            (__int64)&off_141790B58);
        v316 = *((__int64 **)&v293 + 1);
        v320 = v293;
        write((int)FileHandle, Buf, v325);
        if ( *(_DWORD *)FileHandle != -1 )
        {
          v297 = *(__m256i *)&FileHandle[64];
          v25 = _mm_loadu_si128((const __m128i *)FileHandle);
          v26 = _mm_loadu_si128((const __m128i *)&FileHandle[16]);
          v296 = *(_OWORD *)&FileHandle[48];
          v295 = *(_OWORD *)&FileHandle[32];
          v294 = v26;
          v293 = (unsigned __int128)v25;
          if ( *(_QWORD *)off_141EC8D80 >= 2u )
          {
            v304.m256i_i64[0] = (__int64)&v293;
            v304.m256i_i64[1] = (__int64)sub_140B036A0;
            *(_QWORD *)v284 = 0;
            *(_QWORD *)&v284[8] = aCodexmateLibCo_27;
            *(_OWORD *)&v284[16] = 0x2Du;
            *(_QWORD *)&v284[32] = aSrcCoreRelayRo_1;
            *(_QWORD *)&v284[40] = 35;
            *(_QWORD *)&v284[48] = 2;
            *(_QWORD *)&v284[56] = aCodexmateLibCo_27;
            *(_QWORD *)&v284[64] = 45;
            *(_QWORD *)&v284[72] = 0x15F00000001LL;
            *(_QWORD *)&v284[80] = &unk_14178FCF6;
            *(_QWORD *)&v284[88] = &v304;
            sub_1412C36A0(&v324, v284);
          }
          sub_1406CDA20(&v293);
        }
        if ( v320 )
          sub_140001660(v316, v320, 1);
        *(_QWORD *)&v293 = 0;
        *((_QWORD *)&v293 + 1) = 1;
        v294.m128i_i64[0] = 0;
        *(_QWORD *)&v284[16] = 1610612768;
        *(_QWORD *)v284 = &v293;
        *(_QWORD *)&v284[8] = &off_141790AA0;
        if ( (unsigned __int8)sub_140B036A0(&v308, v284) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v324,
            (unsigned int)&unk_141789060,
            (__int64)&off_141790B58);
        v320 = v293;
        v304.m256i_i8[0] = v325;
        Buf = *((void **)&v293 + 1);
        *(_QWORD *)FileHandle = *((_QWORD *)&v293 + 1);
        *(_QWORD *)&FileHandle[8] = v294.m128i_i64[0];
        *(_QWORD *)v284 = &v304;
        *(_QWORD *)&v284[8] = sub_1407B2DA0;
        *(_QWORD *)&v284[16] = FileHandle;
        *(_QWORD *)&v284[24] = v16;
        sub_14149C0F0(&v293, &unk_141787489, v284);
        sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aRetryExhausted, 15, (__int64)&v293);
        if ( v320 )
          sub_140001660(Buf, v320, 1);
        result = (__int64)v303;
        *(__m256i *)((char *)v303 + 72) = v309;
        v28 = _mm_loadu_si128((const __m128i *)&v308);
        v29 = _mm_loadu_si128((const __m128i *)&v308.m512i_u64[2]);
        v30 = *(_OWORD *)&v308.m512i_u64[4];
        v31 = *(_OWORD *)&v308.m512i_u64[6];
        goto LABEL_182;
      }
      LOBYTE(v20) = v23 == 3;
      v251 = v20;
      v32 = (unsigned __int8)(v23 + 1);
      if ( v23 == 3 )
        v32 = 3;
      v270 = v32;
      v323 = v23;
      write((int)FileHandle, Buf, v325);
      if ( *(_DWORD *)FileHandle != -1 )
      {
        v297 = *(__m256i *)&FileHandle[64];
        v36 = _mm_loadu_si128((const __m128i *)FileHandle);
        v296 = *(_OWORD *)&FileHandle[48];
        v295 = *(_OWORD *)&FileHandle[32];
        v294 = *(__m128i *)&FileHandle[16];
        v293 = (unsigned __int128)v36;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          v308.m512i_i64[0] = (__int64)&v293;
          v308.m512i_i64[1] = (__int64)sub_140B036A0;
          *(_QWORD *)v284 = 0;
          *(_QWORD *)&v284[8] = aCodexmateLibCo_27;
          *(_OWORD *)&v284[16] = 0x2Du;
          *(_QWORD *)&v284[32] = aSrcCoreRelayRo_1;
          *(_QWORD *)&v284[40] = 35;
          *(_QWORD *)&v284[48] = 2;
          *(_QWORD *)&v284[56] = aCodexmateLibCo_27;
          *(_QWORD *)&v284[64] = 45;
          *(_QWORD *)&v284[72] = 0x15F00000001LL;
          *(_QWORD *)&v284[80] = &unk_14178FCF6;
          *(_QWORD *)&v284[88] = &v308;
          sub_1412C36A0(&v324, v284);
        }
        sub_1406CDA20(&v293);
      }
      v231 = sub_141471910(v34, v33, v35);
      v232 = v38;
      if ( !v317[0] )
      {
        acquire_with_policy((unsigned int)&v186, 5, 0, 0, 0);
        if ( v186.m512i_i32[0] == -1 )
          goto LABEL_28;
LABEL_162:
        v309 = v187;
        v308 = v186;
        *(_QWORD *)&v293 = 0;
        *((_QWORD *)&v293 + 1) = 1;
        v294.m128i_i64[0] = 0;
        *(_QWORD *)&v284[16] = 1610612768;
        *(_QWORD *)v284 = &v293;
        *(_QWORD *)&v284[8] = &off_141790AA0;
        if ( (unsigned __int8)sub_140B036A0(&v308, v284) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v324,
            (unsigned int)&unk_141789060,
            (__int64)&off_141790B58);
        v316 = *((__int64 **)&v293 + 1);
        v320 = v293;
        write((int)FileHandle, Buf, v325);
        if ( *(_DWORD *)FileHandle != -1 )
        {
          v297 = *(__m256i *)&FileHandle[64];
          v296 = *(_OWORD *)&FileHandle[48];
          v295 = *(_OWORD *)&FileHandle[32];
          v294 = *(__m128i *)&FileHandle[16];
          v293 = *(_OWORD *)FileHandle;
          if ( *(_QWORD *)off_141EC8D80 >= 2u )
          {
            v304.m256i_i64[0] = (__int64)&v293;
            v304.m256i_i64[1] = (__int64)sub_140B036A0;
            *(_QWORD *)v284 = 0;
            *(_QWORD *)&v284[8] = aCodexmateLibCo_27;
            *(_OWORD *)&v284[16] = 0x2Du;
            *(_QWORD *)&v284[32] = aSrcCoreRelayRo_1;
            *(_QWORD *)&v284[40] = 35;
            *(_QWORD *)&v284[48] = 2;
            *(_QWORD *)&v284[56] = aCodexmateLibCo_27;
            *(_QWORD *)&v284[64] = 45;
            *(_QWORD *)&v284[72] = 0x15F00000001LL;
            *(_QWORD *)&v284[80] = &unk_14178FCF6;
            *(_QWORD *)&v284[88] = &v304;
            sub_1412C36A0(&v324, v284);
          }
          sub_1406CDA20(&v293);
        }
        if ( v320 )
          sub_140001660(v316, v320, 1);
        v121 = sub_141471AC0(&v231);
        v293 = 0x3E8 * (unsigned __int128)(unsigned __int64)v121 + v122 / 0xF4240uLL;
        *(_QWORD *)v284 = &v323;
        *(_QWORD *)&v284[8] = sub_1414A9660;
        *(_QWORD *)&v284[16] = &v293;
        *(_QWORD *)&v284[24] = sub_1414A9600;
        *(_QWORD *)&v284[32] = &v308;
        *(_QWORD *)&v284[40] = sub_140B036A0;
        sub_14149C0F0(&v225, &unk_1417878F4, v284);
        v304.m256i_i8[0] = v325;
        v320 = v226;
        *(_QWORD *)FileHandle = v226;
        *(_QWORD *)&FileHandle[8] = v227;
        *(_QWORD *)v284 = &v304;
        *(_QWORD *)&v284[8] = sub_1407B2DA0;
        *(_QWORD *)&v284[16] = FileHandle;
        *(_QWORD *)&v284[24] = v16;
        sub_14149C0F0(&v293, &unk_141787489, v284);
        sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aStopFailed, 11, (__int64)&v293);
        if ( v225 )
          sub_140001660(v320, v225, 1);
        result = (__int64)v303;
        *(__m256i *)((char *)v303 + 72) = v309;
        v28 = *(__m128i *)v308.m512i_i8;
        v29 = *(__m128i *)&v308.m512i_u64[2];
        v30 = *(_OWORD *)&v308.m512i_u64[4];
        v31 = *(_OWORD *)&v308.m512i_u64[6];
LABEL_182:
        *(_OWORD *)(result + 56) = v31;
        *(_OWORD *)(result + 40) = v30;
        *(__m128i *)(result + 24) = v29;
        *(__m128i *)(result + 8) = v28;
        *(_QWORD *)result = -2;
        return result;
      }
      LOBYTE(v37) = 1;
      acquire_with_policy((unsigned int)&v186, 3, 0, v37, 0);
      if ( v186.m512i_i32[0] != -1 )
        goto LABEL_162;
LABEL_28:
      v199 = v186.m512i_i64[7];
      v198 = *(_OWORD *)&v186.m512i_u64[5];
      v197 = *(_OWORD *)&v186.m512i_u64[3];
      v196 = *(_OWORD *)&v186.m512i_u64[1];
      v315 = v186.m512i_i8[56];
      v321 = 1;
      v39 = sub_141471AC0(&v231);
      v293 = 0x3E8 * (unsigned __int128)(unsigned __int64)v39 + v40 / 0xF4240uLL;
      *(_QWORD *)v284 = &v323;
      *(_QWORD *)&v284[8] = sub_1414A9660;
      *(_QWORD *)&v284[16] = &v293;
      *(_QWORD *)&v284[24] = sub_1414A9600;
      *(_QWORD *)&v284[32] = &v315;
      *(_QWORD *)&v284[40] = sub_1414AC660;
      v321 = 1;
      sub_14149C0F0(&v222, &unk_141787591, v284);
      v308.m512i_i8[0] = v325;
      v320 = v223;
      *(_QWORD *)FileHandle = v223;
      *(_QWORD *)&FileHandle[8] = v224;
      *(_QWORD *)v284 = &v308;
      *(_QWORD *)&v284[8] = sub_1407B2DA0;
      *(_QWORD *)&v284[16] = FileHandle;
      *(_QWORD *)&v284[24] = v16;
      sub_14149C0F0(&v293, &unk_141787489, v284);
      sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aStopComplete, 13, (__int64)&v293);
      if ( v222 )
        sub_140001660(v320, v222, 1);
      v321 = 1;
      write((int)FileHandle, Buf, v325);
      if ( *(_DWORD *)FileHandle != -1 )
      {
        v297 = *(__m256i *)&FileHandle[64];
        v296 = *(_OWORD *)&FileHandle[48];
        v295 = *(_OWORD *)&FileHandle[32];
        v294 = *(__m128i *)&FileHandle[16];
        v293 = *(_OWORD *)FileHandle;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          v308.m512i_i64[0] = (__int64)&v293;
          v308.m512i_i64[1] = (__int64)sub_140B036A0;
          *(_QWORD *)v284 = 0;
          *(_QWORD *)&v284[8] = aCodexmateLibCo_27;
          *(_OWORD *)&v284[16] = 0x2Du;
          *(_QWORD *)&v284[32] = aSrcCoreRelayRo_1;
          *(_QWORD *)&v284[40] = 35;
          *(_QWORD *)&v284[48] = 2;
          *(_QWORD *)&v284[56] = aCodexmateLibCo_27;
          *(_QWORD *)&v284[64] = 45;
          *(_QWORD *)&v284[72] = 0x15F00000001LL;
          *(_QWORD *)&v284[80] = &unk_14178FCF6;
          *(_QWORD *)&v284[88] = &v308;
          sub_1412C36A0(&v324, v284);
        }
        v321 = 1;
        sub_1406CDA20(&v293);
      }
      v41 = v315;
      v304.m256i_i64[0] = *v316;
      v42 = (__int64 *)v316[1];
      v43 = *v42;
      v44 = v42[1];
      if ( v44 == 3 && !(*(_WORD *)v43 ^ 0x6C61 | *(unsigned __int8 *)(v43 + 2) ^ 0x6C) )
      {
        v59 = v316[2];
        v60 = v316[3];
        v321 = 1;
        sub_140790A30((unsigned int)v284, v59, v60, (unsigned int)&v304, (__int64)&unk_141788038, v315);
      }
      else
      {
        v45 = v316[2];
        v46 = v316[3];
        v321 = 1;
        fix_thread_poisoned_instructions(
          (unsigned int)v284,
          v45,
          v46,
          v43,
          v44,
          (__int64)&v304,
          (__int64)&unk_141788038,
          v315);
      }
      v308 = *(__m512i *)&v284[8];
      v309.m256i_i64[0] = *(_QWORD *)&v284[72];
      if ( *(_QWORD *)v284 != -1 )
      {
        *(_OWORD *)&FileHandle[88] = *(_OWORD *)&v284[80];
        *(_QWORD *)&FileHandle[80] = v309.m256i_i64[0];
        v47 = _mm_load_si128((const __m128i *)&v308);
        v48 = _mm_load_si128((const __m128i *)&v308.m512i_u64[2]);
        *(_OWORD *)&FileHandle[64] = *(_OWORD *)&v308.m512i_u64[6];
        *(_OWORD *)&FileHandle[48] = *(_OWORD *)&v308.m512i_u64[4];
        *(__m128i *)&FileHandle[32] = v48;
        *(__m128i *)&FileHandle[16] = v47;
        *(_QWORD *)&FileHandle[8] = *(_QWORD *)v284;
        *(_QWORD *)FileHandle = -1;
        goto LABEL_93;
      }
      v49 = _mm_load_si128((const __m128i *)&v308.m512i_u64[2]);
      *(_OWORD *)v277.m256i_i8 = *(_OWORD *)v308.m512i_i8;
      *(__m128i *)&v277.m256i_u64[2] = v49;
      v278 = *(_OWORD *)&v308.m512i_u64[4];
      v279 = *(_OWORD *)&v308.m512i_u64[6];
      *(_QWORD *)&v280 = v309.m256i_i64[0];
      v265.m256i_i64[0] = 2;
      v50 = *v237;
      v51 = *(_QWORD *)(v273 + 24);
      v247 = 2;
      sub_140852800((unsigned int)&v242, v51, v253, v50, 0);
      if ( *v238 || v242.m256i_i64[2] )
        goto LABEL_42;
      v272 = 2;
      codex_config_stale_reason(v284, v273);
      if ( *(_QWORD *)v284 != -1 )
      {
        if ( *(_QWORD *)v284 )
          sub_140001660(*(_QWORD *)&v284[8], *(_QWORD *)v284, 1);
LABEL_42:
        v272 = 2;
        sub_140851F40((unsigned int)v284, v273, v253, (unsigned int)&unk_141788096, 17, v41);
        v308 = *(__m512i *)&v284[8];
        *(_OWORD *)v309.m256i_i8 = *(_OWORD *)&v284[72];
        v309.m256i_i64[2] = *(_QWORD *)&v284[88];
        if ( *(_QWORD *)v284 != -1 )
        {
          *(_QWORD *)&FileHandle[96] = v309.m256i_i64[2];
          *(_OWORD *)&FileHandle[80] = *(_OWORD *)v309.m256i_i8;
          v52 = _mm_load_si128((const __m128i *)&v308);
          v53 = _mm_load_si128((const __m128i *)&v308.m512i_u64[2]);
          *(_OWORD *)&FileHandle[64] = *(_OWORD *)&v308.m512i_u64[6];
          *(_OWORD *)&FileHandle[48] = *(_OWORD *)&v308.m512i_u64[4];
          *(__m128i *)&FileHandle[32] = v53;
          *(__m128i *)&FileHandle[16] = v52;
          *(_QWORD *)&FileHandle[8] = *(_QWORD *)v284;
          *(_QWORD *)FileHandle = -1;
          v54 = v242.m256i_i64[2];
          v55 = v242.m256i_i64[1];
          if ( v242.m256i_i64[2] )
          {
            v56 = (_QWORD *)(v242.m256i_i64[1] + 8);
            do
            {
              v57 = *(v56 - 1);
              if ( v57 )
                sub_140001660(*v56, v57, 1);
              v56 += 4;
              --v54;
            }
            while ( v54 );
          }
          v58 = v242.m256i_i64[0];
          if ( v242.m256i_i64[0] )
            goto LABEL_49;
          goto LABEL_92;
        }
        v307.m256i_i64[2] = v309.m256i_i64[2];
        *(_OWORD *)v307.m256i_i8 = *(_OWORD *)v309.m256i_i8;
        v61 = _mm_load_si128((const __m128i *)&v308);
        v62 = _mm_load_si128((const __m128i *)&v308.m512i_u64[2]);
        v306 = *(_OWORD *)&v308.m512i_u64[6];
        v305 = *(_OWORD *)&v308.m512i_u64[4];
        *(__m128i *)&v304.m256i_u64[2] = v62;
        *(__m128i *)v304.m256i_i8 = v61;
        v63 = v277.m256i_i64[2];
        if ( v277.m256i_i64[2] )
        {
          v63 = 24 * v277.m256i_i64[2];
          v64 = 0;
          while ( *(_QWORD *)(v277.m256i_i64[1] + v64 + 16) != 20
               || _mm_movemask_epi8(
                    _mm_and_si128(
                      _mm_cmpeq_epi8(
                        _mm_cvtsi32_si128(*(_DWORD *)(*(_QWORD *)(v277.m256i_i64[1] + v64 + 8) + 16LL)),
                        v21),
                      _mm_cmpeq_epi8(_mm_loadu_si128((const __m128i *)*(_QWORD *)(v277.m256i_i64[1] + v64 + 8)), v22))) != 0xFFFF )
          {
            v64 += 24;
            if ( v63 == v64 )
              goto LABEL_57;
          }
        }
        else
        {
LABEL_57:
          nullsub_1(v63);
          v65 = (__m128i *)sub_140001650(20, 1);
          if ( !v65 )
          {
            v318 = 1;
            sub_1416C2D4B(1, 20);
          }
          *v65 = _mm_loadu_si128((const __m128i *)aRouterPostcond);
          v320 = (__int64)v65;
          v65[1].m128i_i32[0] = 1852795252;
          v66 = v277.m256i_i64[2];
          if ( v277.m256i_i64[2] == v277.m256i_i64[0] )
            sub_141689AB0(&v277);
          v67 = v277.m256i_i64[1];
          v68 = 3 * v66;
          *(_QWORD *)(v277.m256i_i64[1] + 8 * v68) = 20;
          *(_QWORD *)(v67 + 8 * v68 + 8) = v320;
          *(_QWORD *)(v67 + 8 * v68 + 16) = 20;
          v277.m256i_i64[2] = v66 + 1;
        }
        v69 = *(_OWORD *)&v304.m256i_u64[2];
        v70 = v280;
        if ( v304.m256i_i64[3] > (_QWORD)v279 - (_QWORD)v280 )
        {
          v318 = 1;
          sub_141688D30((unsigned int)&v279, v280, v304.m256i_i32[6], 8, 24);
          v71 = *((_QWORD *)&v279 + 1);
          v70 = v280;
          goto LABEL_64;
        }
        if ( v304.m256i_i64[3] )
        {
          v71 = *((_QWORD *)&v279 + 1);
LABEL_64:
          v274 = v70;
          v72 = (__m128i *)(v71 + 24 * v70);
          *((_QWORD *)&v69 + 1) = -*((_QWORD *)&v69 + 1);
          v320 = 0;
          do
          {
            sub_14149C500(v284, v69);
            v72[1].m128i_i64[0] = *(_QWORD *)&v284[16];
            *v72 = _mm_loadu_si128((const __m128i *)v284);
            v72 = (__m128i *)((char *)v72 + 24);
            *(_QWORD *)&v69 = v69 + 24;
            --v320;
          }
          while ( *((_QWORD *)&v69 + 1) != v320 );
          v70 = v274 - v320;
        }
        *(_QWORD *)&v280 = v70;
        v73 = _mm_load_si128((const __m128i *)&v304.m256i_u64[2]);
        *(_OWORD *)v265.m256i_i8 = *(_OWORD *)v304.m256i_i8;
        *(__m128i *)&v265.m256i_u64[2] = v73;
        v266 = v305;
        v267 = v306;
        v318 = 0;
        codex_config_stale_reason(&v254, v273);
        v74 = v254;
        if ( (_QWORD)v254 == -1 )
        {
          v312 = v280;
          v311 = v279;
          v310 = v278;
          v309 = v277;
          v81 = _mm_load_si128((const __m128i *)&v304.m256i_u64[2]);
          *(_OWORD *)&v308.m512i_u64[6] = v306;
          *(_OWORD *)&v308.m512i_u64[4] = v305;
          *(__m128i *)&v308.m512i_u64[2] = v81;
          *(_OWORD *)v308.m512i_i8 = *(_OWORD *)v304.m256i_i8;
          v285 = _mm_loadu_si128((const __m128i *)&v307);
          v286 = v307.m256i_i64[2];
          sub_141684120(v284, &v308, 136);
          sub_141684120(FileHandle, v284, 160);
          v79 = v242.m256i_i64[2];
          v80 = v242.m256i_i64[1];
          if ( !v242.m256i_i64[2] )
            goto LABEL_87;
        }
        else
        {
          v308.m512i_i64[2] = v255;
          *(_OWORD *)v308.m512i_i8 = v254;
          v282.m128i_i64[0] = (__int64)&v308;
          v282.m128i_i64[1] = (__int64)sub_1400015F0;
          sub_14149C0F0(v284, &unk_141788068, &v282);
          *(_QWORD *)&FileHandle[32] = *(_QWORD *)&v284[16];
          *(__m128i *)&FileHandle[16] = _mm_loadu_si128((const __m128i *)v284);
          *(_QWORD *)&FileHandle[8] = 10;
          *(_QWORD *)FileHandle = -1;
          if ( v308.m512i_i64[0] )
            sub_140001660(v308.m512i_i64[1], v308.m512i_i64[0], 1);
          v75 = v307.m256i_i64[2];
          v76 = v307.m256i_i64[1];
          if ( v307.m256i_i64[2] )
          {
            v77 = (_QWORD *)(v307.m256i_i64[1] + 8);
            do
            {
              v78 = *(v77 - 1);
              if ( v78 )
                sub_140001660(*v77, v78, 1);
              v77 += 3;
              --v75;
            }
            while ( v75 );
          }
          if ( v307.m256i_i64[0] )
            sub_140001660(v76, 24 * v307.m256i_i64[0], 8);
          v79 = v242.m256i_i64[2];
          v80 = v242.m256i_i64[1];
          if ( !v242.m256i_i64[2] )
          {
LABEL_87:
            if ( v242.m256i_i64[0] )
              sub_140001660(v80, 32 * v242.m256i_i64[0], 8);
            if ( v74 != -1 )
            {
              if ( v265.m256i_i64[0] != 2 )
                sub_1406CE2E0(&v265);
              goto LABEL_92;
            }
            goto LABEL_93;
          }
        }
        v82 = (_QWORD *)(v80 + 8);
        do
        {
          v83 = *(v82 - 1);
          if ( v83 )
            sub_140001660(*v82, v83, 1);
          v82 += 4;
          --v79;
        }
        while ( v79 );
        goto LABEL_87;
      }
      v272 = 2;
      codex_config_stale_reason(&v304, v273);
      if ( v304.m256i_i64[0] != -1 )
      {
        v308.m512i_i64[2] = v304.m256i_i64[2];
        *(_OWORD *)v308.m512i_i8 = *(_OWORD *)v304.m256i_i8;
        *(_QWORD *)&v254 = &v308;
        *((_QWORD *)&v254 + 1) = sub_1400015F0;
        sub_14149C0F0(v284, &unk_141788068, &v254);
        *(_QWORD *)&FileHandle[32] = *(_QWORD *)&v284[16];
        *(__m128i *)&FileHandle[16] = _mm_loadu_si128((const __m128i *)v284);
        *(_QWORD *)&FileHandle[8] = 10;
        *(_QWORD *)FileHandle = -1;
        if ( v308.m512i_i64[0] )
          sub_140001660(v308.m512i_i64[1], v308.m512i_i64[0], 1);
        v55 = v242.m256i_i64[1];
        v58 = v242.m256i_i64[0];
        if ( !v242.m256i_i64[0] )
          goto LABEL_92;
LABEL_49:
        sub_140001660(v55, 32 * v58, 8);
LABEL_92:
        sub_14052E730(&v277);
        goto LABEL_93;
      }
      v300 = v280;
      v299 = v279;
      v298 = v278;
      v297 = v277;
      v120 = _mm_loadu_si128((const __m128i *)&v265.m256i_u64[2]);
      v293 = (unsigned __int128)_mm_loadu_si128((const __m128i *)&v265);
      v294 = v120;
      v295 = v266;
      v296 = v267;
      sub_141684120(FileHandle, &v293, 136);
      v261.m128i_i64[0] = 0;
      v261.m128i_i64[1] = 8;
      v262 = 0;
      if ( v242.m256i_i64[0] )
        sub_140001660(v242.m256i_i64[1], 32 * v242.m256i_i64[0], 8);
LABEL_93:
      *(_QWORD *)&v284[48] = v199;
      *(_OWORD *)&v284[32] = v198;
      *(_OWORD *)&v284[16] = v197;
      *(_OWORD *)v284 = v196;
      v317[1] = 1;
      sub_140387CC0(&v242, v284);
      sub_141684120(v284, FileHandle, 160);
      v292 = v246;
      v291 = v245;
      v86 = _mm_loadu_si128((const __m128i *)&v242);
      v87 = _mm_loadu_si128((const __m128i *)&v242.m256i_u64[2]);
      v290 = v244;
      v289 = v243;
      v288 = v87;
      v287 = v86;
      if ( *(_QWORD *)v284 != -1 )
        break;
      v274 = -1;
      if ( v287.m128i_i32[0] != -1 )
      {
        v259 = *(_OWORD *)&FileHandle[88];
        v258 = *(_OWORD *)&FileHandle[72];
        v257 = *(_OWORD *)&FileHandle[56];
        v256 = *(_OWORD *)&FileHandle[40];
        v255 = *(_OWORD *)&FileHandle[24];
        v254 = *(_OWORD *)&FileHandle[8];
        v269 = v246;
        v268 = v245;
        v267 = v244;
        v266 = v243;
        v265 = v242;
        *(_QWORD *)&v293 = &v254;
        *((_QWORD *)&v293 + 1) = sub_140B036A0;
        v294.m128i_i64[0] = (__int64)&v265;
        v294.m128i_i64[1] = (__int64)sub_140B036A0;
        sub_14149C0F0(&v194, &unk_1417878C9, &v293);
        *(_OWORD *)&v277.m256i_u64[1] = v194;
        v277.m256i_i64[3] = v195;
        v277.m256i_i64[0] = 10;
        v308.m512i_i64[0] = 0;
        *(_OWORD *)&v308.m512i_u64[1] = 1u;
        v294.m128i_i64[0] = 1610612768;
        *(_QWORD *)&v293 = &v308;
        *((_QWORD *)&v293 + 1) = &off_141790AA0;
        if ( (unsigned __int8)sub_140B036A0(&v277, &v293) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v324,
            (unsigned int)&unk_141789060,
            (__int64)&off_141790B58);
        v316 = (__int64 *)v308.m512i_i64[1];
        v320 = v308.m512i_i64[0];
        write((int)&v304, Buf, v325);
        if ( v304.m256i_i32[0] != -1 )
        {
          v309 = v307;
          *(_OWORD *)&v308.m512i_u64[6] = v306;
          *(_OWORD *)&v308.m512i_u64[4] = v305;
          *(__m256i *)v308.m512i_i8 = v304;
          if ( *(_QWORD *)off_141EC8D80 >= 2u )
          {
            v282.m128i_i64[0] = (__int64)&v308;
            v282.m128i_i64[1] = (__int64)sub_140B036A0;
            *(_QWORD *)&v293 = 0;
            *((_QWORD *)&v293 + 1) = aCodexmateLibCo_27;
            v294 = (__m128i)0x2DuLL;
            *(_QWORD *)&v295 = aSrcCoreRelayRo_1;
            *((_QWORD *)&v295 + 1) = 35;
            *(_QWORD *)&v296 = 2;
            *((_QWORD *)&v296 + 1) = aCodexmateLibCo_27;
            v297.m256i_i64[0] = 45;
            v297.m256i_i64[1] = 0x15F00000001LL;
            v297.m256i_i64[2] = (__int64)&unk_14178FCF6;
            v297.m256i_i64[3] = (__int64)&v282;
            sub_1412C36A0(&v324, &v293);
          }
          sub_1406CDA20(&v308);
        }
        if ( v320 )
          sub_140001660(v316, v320, 1);
        *(_QWORD *)&v293 = &v323;
        *((_QWORD *)&v293 + 1) = sub_1414A9660;
        v294.m128i_i64[0] = (__int64)&v277;
        v294.m128i_i64[1] = (__int64)sub_140B036A0;
        sub_14149C0F0(&v214, &unk_1417876C6, &v293);
        v282.m128i_i8[0] = v325;
        v320 = v215;
        *(_OWORD *)v304.m256i_i8 = v215;
        *(_QWORD *)&v293 = &v282;
        *((_QWORD *)&v293 + 1) = sub_1407B2DA0;
        v294.m128i_i64[0] = (__int64)&v304;
        v294.m128i_i64[1] = (__int64)v16;
        sub_14149C0F0(&v308, &unk_141787489, &v293);
        sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aReconcileFaile, 16, (__int64)&v308);
        if ( v214 )
          sub_140001660(v320, v214, 1);
        v173 = v303;
        *(__int128 *)((char *)v303 + 88) = v281;
        *(__int128 *)((char *)v173 + 72) = v280;
        v174 = *(_OWORD *)v277.m256i_i8;
        v175 = *(_OWORD *)&v277.m256i_u64[2];
        v176 = v278;
        *(__int128 *)((char *)v173 + 56) = v279;
        *(__int128 *)((char *)v173 + 40) = v176;
        *(__int128 *)((char *)v173 + 24) = v175;
        *(__int128 *)((char *)v173 + 8) = v174;
        *(_QWORD *)v173 = -2;
        sub_1406CDA20(&v265);
        return sub_1406CDA20(&v254);
      }
      v281 = *(_OWORD *)&FileHandle[88];
      v280 = *(_OWORD *)&FileHandle[72];
      v104 = _mm_loadu_si128((const __m128i *)&FileHandle[24]);
      v279 = *(_OWORD *)&FileHandle[56];
      v278 = *(_OWORD *)&FileHandle[40];
      *(__m128i *)&v277.m256i_u64[2] = v104;
      *(_OWORD *)v277.m256i_i8 = *(_OWORD *)&FileHandle[8];
      v105 = v287.m128i_i32[2];
      v106 = v287.m128i_i8[12];
      v107 = sub_141471910(-1, v84, v85);
      v101 = v107 == v252;
      v109 = v107 < v252;
      if ( v101 )
        v109 = v108 < v271;
      if ( v317[0] )
      {
LABEL_172:
        v308.m512i_i64[0] = 0;
        *(_OWORD *)&v308.m512i_u64[1] = 1u;
        v294.m128i_i64[0] = 1610612768;
        *(_QWORD *)&v293 = &v308;
        *((_QWORD *)&v293 + 1) = &off_141790AA0;
        if ( (unsigned __int8)sub_140B036A0(&v277, &v293) )
          sub_1416C3060(
            (unsigned int)aADisplayImplem_6,
            55,
            (unsigned int)&v324,
            (unsigned int)&unk_141789060,
            (__int64)&off_141790B58);
        v316 = (__int64 *)v308.m512i_i64[1];
        v320 = v308.m512i_i64[0];
        write((int)&v304, Buf, v325);
        if ( v304.m256i_i32[0] != -1 )
        {
          v309 = v307;
          v123 = _mm_loadu_si128((const __m128i *)&v304);
          v124 = _mm_loadu_si128((const __m128i *)&v304.m256i_u64[2]);
          *(_OWORD *)&v308.m512i_u64[6] = v306;
          *(_OWORD *)&v308.m512i_u64[4] = v305;
          *(__m128i *)&v308.m512i_u64[2] = v124;
          *(__m128i *)v308.m512i_i8 = v123;
          if ( *(_QWORD *)off_141EC8D80 >= 2u )
          {
            v265.m256i_i64[0] = (__int64)&v308;
            v265.m256i_i64[1] = (__int64)sub_140B036A0;
            *(_QWORD *)&v293 = 0;
            *((_QWORD *)&v293 + 1) = aCodexmateLibCo_27;
            v294 = (__m128i)0x2DuLL;
            *(_QWORD *)&v295 = aSrcCoreRelayRo_1;
            *((_QWORD *)&v295 + 1) = 35;
            *(_QWORD *)&v296 = 2;
            *((_QWORD *)&v296 + 1) = aCodexmateLibCo_27;
            v297.m256i_i64[0] = 45;
            v297.m256i_i64[1] = 0x15F00000001LL;
            v297.m256i_i64[2] = (__int64)&unk_14178FCF6;
            v297.m256i_i64[3] = (__int64)&v265;
            sub_1412C36A0(&v324, &v293);
          }
          sub_1406CDA20(&v308);
        }
        if ( v320 )
          sub_140001660(v316, v320, 1);
        *(_QWORD *)&v293 = &v323;
        *((_QWORD *)&v293 + 1) = sub_1414A9660;
        v294.m128i_i64[0] = (__int64)&v277;
        v294.m128i_i64[1] = (__int64)sub_140B036A0;
        sub_14149C0F0(&v218, &unk_1417876C6, &v293);
        v265.m256i_i8[0] = v325;
        v320 = v219;
        *(_OWORD *)v304.m256i_i8 = v219;
        *(_QWORD *)&v293 = &v265;
        *((_QWORD *)&v293 + 1) = sub_1407B2DA0;
        v294.m128i_i64[0] = (__int64)&v304;
        v294.m128i_i64[1] = (__int64)v16;
        sub_14149C0F0(&v308, &unk_141787489, &v293);
        sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aReconcileFaile, 16, (__int64)&v308);
        if ( v218 )
          sub_140001660(v320, v218, 1);
        result = (__int64)v303;
        *(__int128 *)((char *)v303 + 88) = v281;
        *(_OWORD *)(result + 72) = v280;
        v28 = _mm_load_si128((const __m128i *)&v277);
        v29 = _mm_load_si128((const __m128i *)&v277.m256i_u64[2]);
        v30 = v278;
        v31 = v279;
        goto LABEL_182;
      }
      if ( v105 )
      {
        if ( !v109 || (unsigned __int8)v323 >= 3u )
          goto LABEL_172;
      }
      else if ( (v109 & (unsigned __int8)v106 & ((unsigned __int8)v323 < 3u)) == 0 )
      {
        goto LABEL_172;
      }
      v308.m512i_i64[0] = 0;
      *(_OWORD *)&v308.m512i_u64[1] = 1u;
      v294.m128i_i64[0] = 1610612768;
      *(_QWORD *)&v293 = &v308;
      *((_QWORD *)&v293 + 1) = &off_141790AA0;
      if ( (unsigned __int8)sub_140B036A0(&v277, &v293) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_6,
          55,
          (unsigned int)&v324,
          (unsigned int)&unk_141789060,
          (__int64)&off_141790B58);
      v265.m256i_i64[2] = v308.m512i_i64[2];
      *(__m128i *)v265.m256i_i8 = _mm_loadu_si128((const __m128i *)&v308);
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        v308.m512i_i64[0] = (__int64)&v325;
        v308.m512i_i64[1] = (__int64)sub_1407B2DA0;
        v308.m512i_i64[2] = (__int64)&v323;
        v308.m512i_i64[3] = (__int64)sub_1414A9660;
        v308.m512i_i64[4] = (__int64)&v265;
        v308.m512i_i64[5] = (__int64)sub_1400015F0;
        *(_QWORD *)&v293 = 0;
        *((_QWORD *)&v293 + 1) = aCodexmateLibCo_27;
        v294 = (__m128i)0x2DuLL;
        *(_QWORD *)&v295 = aSrcCoreRelayRo_1;
        *((_QWORD *)&v295 + 1) = 35;
        *(_QWORD *)&v296 = 2;
        *((_QWORD *)&v296 + 1) = aCodexmateLibCo_27;
        v297.m256i_i64[0] = 45;
        v297.m256i_i64[1] = 0xA800000001LL;
        v297.m256i_i64[2] = (__int64)&unk_14178785E;
        v297.m256i_i64[3] = (__int64)&v308;
        sub_1412C36A0(&v324, &v293);
      }
      write((int)&v304, Buf, v325);
      if ( v304.m256i_i32[0] != -1 )
      {
        v309 = v307;
        v117 = _mm_loadu_si128((const __m128i *)&v304);
        v118 = _mm_loadu_si128((const __m128i *)&v304.m256i_u64[2]);
        *(_OWORD *)&v308.m512i_u64[6] = v306;
        *(_OWORD *)&v308.m512i_u64[4] = v305;
        *(__m128i *)&v308.m512i_u64[2] = v118;
        *(__m128i *)v308.m512i_i8 = v117;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          *(_QWORD *)&v254 = &v308;
          *((_QWORD *)&v254 + 1) = sub_140B036A0;
          *(_QWORD *)&v293 = 0;
          *((_QWORD *)&v293 + 1) = aCodexmateLibCo_27;
          v294 = (__m128i)0x2DuLL;
          *(_QWORD *)&v295 = aSrcCoreRelayRo_1;
          *((_QWORD *)&v295 + 1) = 35;
          *(_QWORD *)&v296 = 2;
          *((_QWORD *)&v296 + 1) = aCodexmateLibCo_27;
          v297.m256i_i64[0] = 45;
          v297.m256i_i64[1] = 0x15F00000001LL;
          v297.m256i_i64[2] = (__int64)&unk_14178FCF6;
          v297.m256i_i64[3] = (__int64)&v254;
          sub_1412C36A0(&v324, &v293);
        }
        sub_1406CDA20(&v308);
      }
      *(_QWORD *)&v293 = &v323;
      *((_QWORD *)&v293 + 1) = sub_1414A9660;
      v294.m128i_i64[0] = (__int64)&v265;
      v294.m128i_i64[1] = (__int64)sub_1400015F0;
      sub_14149C0F0(&v220, &unk_1417876C6, &v293);
      LOBYTE(v254) = v325;
      v320 = v221;
      *(_OWORD *)v304.m256i_i8 = v221;
      *(_QWORD *)&v293 = &v254;
      *((_QWORD *)&v293 + 1) = sub_1407B2DA0;
      v294.m128i_i64[0] = (__int64)&v304;
      v294.m128i_i64[1] = (__int64)v16;
      sub_14149C0F0(&v308, &unk_141787489, &v293);
      sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aReconcileRetry, 15, (__int64)&v308);
      v119 = v251;
      if ( v220 )
        sub_140001660(v320, v220, 1);
      if ( v265.m256i_i64[0] )
        sub_140001660(v265.m256i_i64[1], v265.m256i_i64[0], 1);
      sub_1406CDA20(&v277);
      v23 = v270;
      if ( (v119 & 1) != 0 )
        goto LABEL_4;
    }
    if ( v287.m128i_i32[0] != -1 )
      break;
    sub_141684120(&v293, FileHandle, 160);
    v275 = v287.m128i_i32[2];
    v276 = v287.m128i_i8[12];
    v88 = *v236;
    v89 = *(_QWORD *)(v234 + 24);
    v314 = 1;
    sub_140852800((unsigned int)&v248, v89, v235, v88, (v287.m128i_i32[2] == 0) & (v287.m128i_i8[12] ^ 1));
    v90 = v250;
    if ( !v250 )
    {
      if ( (v275 || (v276 & 1) != 0) && *(_QWORD *)off_141EC8D80 >= 2u )
      {
        v308.m512i_i64[0] = (__int64)&v325;
        v308.m512i_i64[1] = (__int64)sub_1407B2DA0;
        v308.m512i_i64[2] = (__int64)&v323;
        v308.m512i_i64[3] = (__int64)sub_1414A9660;
        v308.m512i_i64[4] = (__int64)&v275;
        v308.m512i_i64[5] = (__int64)sub_1414AB780;
        v308.m512i_i64[6] = (__int64)&v276;
        v308.m512i_i64[7] = (__int64)sub_1414AC660;
        *(_QWORD *)v284 = 0;
        *(_QWORD *)&v284[8] = aCodexmateLibCo_27;
        *(_OWORD *)&v284[16] = 0x2Du;
        *(_QWORD *)&v284[32] = aSrcCoreRelayRo_1;
        *(_QWORD *)&v284[40] = 35;
        *(_QWORD *)&v284[48] = 2;
        *(_QWORD *)&v284[56] = aCodexmateLibCo_27;
        *(_QWORD *)&v284[64] = 45;
        *(_QWORD *)&v284[72] = 0xDA00000001LL;
        *(_QWORD *)&v284[80] = &unk_1417875CB;
        *(_QWORD *)&v284[88] = &v308;
        v322 = 1;
        sub_1412C36A0(&v324, v284);
      }
      if ( (_DWORD)v293 != 2 )
      {
        v133 = *a10;
        v322 = 1;
        sub_14084BFF0(&v265, a9, &v293, v133);
        if ( v265.m256i_i64[0] != -1 )
        {
          v281 = v269;
          v280 = v268;
          v134 = _mm_loadu_si128((const __m128i *)&v265);
          v135 = _mm_loadu_si128((const __m128i *)&v265.m256i_u64[2]);
          v279 = v267;
          v278 = v266;
          *(__m128i *)&v277.m256i_u64[2] = v135;
          *(__m128i *)v277.m256i_i8 = v134;
          *(_QWORD *)v284 = &v325;
          *(_QWORD *)&v284[8] = sub_1407B2DA0;
          *(_QWORD *)&v284[16] = &v277;
          *(_QWORD *)&v284[24] = sub_140B036A0;
          sub_14149C0F0(&v192, &unk_141787685, v284);
          *(__m128i *)&v304.m256i_u64[1] = _mm_loadu_si128(&v192);
          v304.m256i_i64[3] = v193;
          v304.m256i_i64[0] = 10;
          v308.m512i_i64[0] = 0;
          *(_OWORD *)&v308.m512i_u64[1] = 1u;
          *(_QWORD *)&v284[16] = 1610612768;
          *(_QWORD *)v284 = &v308;
          *(_QWORD *)&v284[8] = &off_141790AA0;
          if ( (unsigned __int8)sub_140B036A0(&v304, v284) )
            sub_1416C3060(
              (unsigned int)aADisplayImplem_6,
              55,
              (unsigned int)&v324,
              (unsigned int)&unk_141789060,
              (__int64)&off_141790B58);
          v316 = (__int64 *)v308.m512i_i64[1];
          v320 = v308.m512i_i64[0];
          write((int)&v308, Buf, v325);
          if ( v308.m512i_i32[0] != -1 )
          {
            *(__m256i *)&v284[64] = v309;
            v136 = _mm_loadu_si128((const __m128i *)&v308);
            v137 = _mm_loadu_si128((const __m128i *)&v308.m512i_u64[2]);
            *(_OWORD *)&v284[48] = *(_OWORD *)&v308.m512i_u64[6];
            *(_OWORD *)&v284[32] = *(_OWORD *)&v308.m512i_u64[4];
            *(__m128i *)&v284[16] = v137;
            *(__m128i *)v284 = v136;
            if ( *(_QWORD *)off_141EC8D80 >= 2u )
            {
              v282.m128i_i64[0] = (__int64)v284;
              v282.m128i_i64[1] = (__int64)sub_140B036A0;
              *(_QWORD *)&v254 = aCodexmateLibCo_27;
              *((_QWORD *)&v254 + 1) = 45;
              *(_QWORD *)&v255 = aCodexmateLibCo_27;
              *((_QWORD *)&v255 + 1) = 45;
              *(_QWORD *)&v256 = &off_14178FD30;
              sub_140985BA0(&unk_14178FCF6, &v282, 2, &v254);
            }
            sub_1406CDA20(v284);
          }
          if ( v320 )
            sub_140001660(v316, v320, 1);
          *(_QWORD *)v284 = &v323;
          *(_QWORD *)&v284[8] = sub_1414A9660;
          *(_QWORD *)&v284[16] = &v304;
          *(_QWORD *)&v284[24] = sub_140B036A0;
          sub_14149C0F0(&v212, &unk_1417876C6, v284);
          v282.m128i_i8[0] = v325;
          v320 = v213;
          v254 = v213;
          *(_QWORD *)v284 = &v282;
          *(_QWORD *)&v284[8] = sub_1407B2DA0;
          *(_QWORD *)&v284[16] = &v254;
          *(_QWORD *)&v284[24] = v16;
          sub_14149C0F0(&v308, &unk_141787489, v284);
          sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aCommitFailed, 13, (__int64)&v308);
          if ( v212 )
            sub_140001660(v320, v212, 1);
          v138 = v303;
          *(__m256i *)((char *)v303 + 72) = v307;
          v139 = _mm_loadu_si128((const __m128i *)&v304);
          v140 = _mm_loadu_si128((const __m128i *)&v304.m256i_u64[2]);
          v141 = v305;
          *(__int128 *)((char *)v138 + 56) = v306;
          *(__int128 *)((char *)v138 + 40) = v141;
          *(__int128 *)((char *)v138 + 24) = (__int128)v140;
          *(__int128 *)((char *)v138 + 8) = (__int128)v139;
          *(_QWORD *)v138 = -2;
          v322 = 1;
          result = sub_1406CDA20(&v277);
          v142 = 1;
          v91 = v249;
          v143 = 1;
          goto LABEL_217;
        }
      }
      v167 = v302;
      if ( v302 )
      {
        v322 = 1;
        sub_140440300((unsigned int)v284, v301.m128i_i32[2], v302, (unsigned int)&unk_1417876F9, 3);
        v316 = *(__int64 **)&v284[8];
        v320 = *(_QWORD *)v284;
        write((int)&v308, Buf, v325);
        if ( v308.m512i_i32[0] != -1 )
        {
          *(__m256i *)&v284[64] = v309;
          v168 = _mm_loadu_si128((const __m128i *)&v308);
          v169 = _mm_loadu_si128((const __m128i *)&v308.m512i_u64[2]);
          *(_OWORD *)&v284[48] = *(_OWORD *)&v308.m512i_u64[6];
          *(_OWORD *)&v284[32] = *(_OWORD *)&v308.m512i_u64[4];
          *(__m128i *)&v284[16] = v169;
          *(__m128i *)v284 = v168;
          if ( *(_QWORD *)off_141EC8D80 >= 2u )
          {
            v277.m256i_i64[0] = (__int64)v284;
            v277.m256i_i64[1] = (__int64)sub_140B036A0;
            v304.m256i_i64[0] = (__int64)aCodexmateLibCo_27;
            v304.m256i_i64[1] = 45;
            v304.m256i_i64[2] = (__int64)aCodexmateLibCo_27;
            v304.m256i_i64[3] = 45;
            *(_QWORD *)&v305 = &off_14178FD30;
            sub_140985BA0(&unk_14178FCF6, &v277, 2, &v304);
          }
          sub_1406CDA20(v284);
        }
        if ( v320 )
          sub_140001660(v316, v320, 1);
        v322 = 1;
        v170 = sub_141471AC0(&v240);
        *(_OWORD *)v308.m512i_i8 = 0x3E8 * (unsigned __int128)(unsigned __int64)v170 + v171 / 0xF4240uLL;
        v304.m256i_i64[0] = v167;
        *(_QWORD *)v284 = &v323;
        *(_QWORD *)&v284[8] = sub_1414A9660;
        *(_QWORD *)&v284[16] = &v308;
        *(_QWORD *)&v284[24] = sub_1414A9600;
        *(_QWORD *)&v284[32] = &v304;
        *(_QWORD *)&v284[40] = sub_1414AC520;
        v322 = 1;
        sub_14149C0F0(&v208, &unk_141787704, v284);
        v277.m256i_i8[0] = v325;
        v320 = v209;
        *(_OWORD *)v304.m256i_i8 = v209;
        *(_QWORD *)v284 = &v277;
        *(_QWORD *)&v284[8] = sub_1407B2DA0;
        *(_QWORD *)&v284[16] = &v304;
        *(_QWORD *)&v284[24] = v16;
        sub_14149C0F0(&v308, &unk_141787489, v284);
        sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aDegraded, 8, (__int64)&v308);
        if ( v208 )
          sub_140001660(v320, v208, 1);
        sub_141684120(v284, &v293, 136);
        v285 = _mm_loadu_si128(&v301);
        v286 = v302;
        result = sub_141684120(v303, v284, 160);
        v172 = v248;
        if ( v248 )
          goto LABEL_268;
      }
      else
      {
        v322 = 1;
        sub_140ADF0F0(Buf);
        v322 = 1;
        v177 = sub_141471AC0(&v240);
        *(_OWORD *)v308.m512i_i8 = 0x3E8 * (unsigned __int128)(unsigned __int64)v177 + v178 / 0xF4240uLL;
        *(_QWORD *)v284 = &v323;
        *(_QWORD *)&v284[8] = sub_1414A9660;
        *(_QWORD *)&v284[16] = &v308;
        *(_QWORD *)&v284[24] = sub_1414A9600;
        v322 = 1;
        sub_14149C0F0(&v210, &unk_1417876DA, v284);
        v277.m256i_i8[0] = v325;
        v320 = v211;
        *(_OWORD *)v304.m256i_i8 = v211;
        *(_QWORD *)v284 = &v277;
        *(_QWORD *)&v284[8] = sub_1407B2DA0;
        *(_QWORD *)&v284[16] = &v304;
        *(_QWORD *)&v284[24] = v16;
        sub_14149C0F0(&v308, &unk_141787489, v284);
        sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aStable, 6, (__int64)&v308);
        if ( v210 )
          sub_140001660(v320, v210, 1);
        v179 = v303;
        result = sub_141684120((char *)v303 + 8, &v293, 136);
        *(_QWORD *)v179 = -1;
        v172 = v248;
        if ( v248 )
LABEL_268:
          result = sub_140001660(v249, 32 * v172, 8);
      }
      if ( !v167 )
        goto LABEL_223;
      return result;
    }
    v91 = v249;
    v322 = 1;
    sub_140328B20(&v308, v249, v249 + 32 * v250);
    v92 = v16;
    v93 = v308.m512i_i64[2];
    v94 = v308.m512i_i64[1];
    sub_140440300((unsigned int)v284, v308.m512i_i32[2], v308.m512i_i32[4], (unsigned int)&unk_1417876F9, 3);
    v264 = *(_QWORD *)&v284[16];
    v263 = _mm_loadu_si128((const __m128i *)v284);
    if ( v93 )
    {
      v98 = (_QWORD *)(v94 + 8);
      do
      {
        v95 = *(v98 - 1);
        if ( v95 )
          sub_140001660(*v98, v95, 1);
        v98 += 3;
        --v93;
      }
      while ( v93 );
    }
    if ( v308.m512i_i64[0] )
      sub_140001660(v94, 24 * v308.m512i_i64[0], 8);
    v319 = 1;
    v99 = sub_141471910(v96, v95, v97);
    v16 = v92;
    v101 = v99 == v252;
    v102 = v99 < v252;
    if ( v101 )
      v102 = v100 < v271;
    v103 = v317[0];
    if ( v317[0] )
    {
      v283 = v262;
      v282 = _mm_loadu_si128(&v261);
      *(_QWORD *)v284 = &v263;
      *(_QWORD *)&v284[8] = sub_1400015F0;
      sub_14149C0F0(&v206, &unk_14178777C, v284);
      v147 = v283;
      if ( v283 == v282.m128i_i64[0] )
        sub_141689AB0(&v282);
      v148 = v282.m128i_i64[1];
      v149 = 3 * v147;
      *(_QWORD *)(v282.m128i_i64[1] + 8 * v149 + 16) = v207;
      *(__m128i *)(v148 + 8 * v149) = _mm_loadu_si128(&v206);
      v150 = v147 + 1;
      v283 = v150;
      if ( (_DWORD)v293 != 2 )
      {
        sub_14084BFF0(&v265, a9, FileHandle, *a10);
        if ( v265.m256i_i64[0] != -1 )
        {
          v281 = v269;
          v280 = v268;
          v151 = _mm_loadu_si128((const __m128i *)&v265);
          v152 = _mm_loadu_si128((const __m128i *)&v265.m256i_u64[2]);
          v279 = v267;
          v278 = v266;
          *(__m128i *)&v277.m256i_u64[2] = v152;
          *(__m128i *)v277.m256i_i8 = v151;
          *(_QWORD *)v284 = &v325;
          *(_QWORD *)&v284[8] = sub_1407B2DA0;
          *(_QWORD *)&v284[16] = &v277;
          *(_QWORD *)&v284[24] = sub_140B036A0;
          sub_14149C0F0(&v190, &unk_1417877B9, v284);
          *(__m128i *)&v304.m256i_u64[1] = _mm_loadu_si128(&v190);
          v304.m256i_i64[3] = v191;
          v304.m256i_i64[0] = 10;
          v308.m512i_i64[0] = 0;
          *(_OWORD *)&v308.m512i_u64[1] = 1u;
          *(_QWORD *)&v284[16] = 1610612768;
          *(_QWORD *)v284 = &v308;
          *(_QWORD *)&v284[8] = &off_141790AA0;
          if ( (unsigned __int8)sub_140B036A0(&v304, v284) )
            sub_1416C3060(
              (unsigned int)aADisplayImplem_6,
              55,
              (unsigned int)&v324,
              (unsigned int)&unk_141789060,
              (__int64)&off_141790B58);
          v316 = (__int64 *)v308.m512i_i64[1];
          v320 = v308.m512i_i64[0];
          write((int)&v308, Buf, v325);
          if ( v308.m512i_i32[0] != -1 )
          {
            *(__m256i *)&v284[64] = v309;
            v153 = _mm_loadu_si128((const __m128i *)&v308);
            v154 = _mm_loadu_si128((const __m128i *)&v308.m512i_u64[2]);
            *(_OWORD *)&v284[48] = *(_OWORD *)&v308.m512i_u64[6];
            *(_OWORD *)&v284[32] = *(_OWORD *)&v308.m512i_u64[4];
            *(__m128i *)&v284[16] = v154;
            *(__m128i *)v284 = v153;
            if ( *(_QWORD *)off_141EC8D80 >= 2u )
            {
              v239[0] = v284;
              v239[1] = sub_140B036A0;
              *(_QWORD *)&v254 = aCodexmateLibCo_27;
              *((_QWORD *)&v254 + 1) = 45;
              *(_QWORD *)&v255 = aCodexmateLibCo_27;
              *((_QWORD *)&v255 + 1) = 45;
              *(_QWORD *)&v256 = &off_14178FD30;
              sub_140985BA0(&unk_14178FCF6, v239, 2, &v254);
            }
            sub_1406CDA20(v284);
          }
          if ( v320 )
            sub_140001660(v316, v320, 1);
          *(_QWORD *)v284 = &v323;
          *(_QWORD *)&v284[8] = sub_1414A9660;
          *(_QWORD *)&v284[16] = &v304;
          *(_QWORD *)&v284[24] = sub_140B036A0;
          sub_14149C0F0(&v204, &unk_1417876C6, v284);
          LOBYTE(v239[0]) = v325;
          v320 = v205;
          v254 = v205;
          *(_QWORD *)v284 = v239;
          *(_QWORD *)&v284[8] = sub_1407B2DA0;
          *(_QWORD *)&v284[16] = &v254;
          *(_QWORD *)&v284[24] = v92;
          sub_14149C0F0(&v308, &unk_141787489, v284);
          sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aCommitFailed, 13, (__int64)&v308);
          if ( v204 )
            sub_140001660(v320, v204, 1);
          v155 = v303;
          *(__m256i *)((char *)v303 + 72) = v307;
          v156 = _mm_loadu_si128((const __m128i *)&v304);
          v157 = _mm_loadu_si128((const __m128i *)&v304.m256i_u64[2]);
          v158 = v305;
          *(__int128 *)((char *)v155 + 56) = v306;
          *(__int128 *)((char *)v155 + 40) = v158;
          *(__int128 *)((char *)v155 + 24) = (__int128)v157;
          *(__int128 *)((char *)v155 + 8) = (__int128)v156;
          *(_QWORD *)v155 = -2;
          sub_1406CDA20(&v277);
          v159 = v283;
          if ( v283 )
          {
            v160 = (_QWORD *)(v282.m128i_i64[1] + 8);
            do
            {
              v161 = *(v160 - 1);
              if ( v161 )
                sub_140001660(*v160, v161, 1);
              v160 += 3;
              --v159;
            }
            while ( v159 );
          }
          result = v282.m128i_i64[0];
          v143 = 1;
          if ( v282.m128i_i64[0] )
            result = sub_140001660(v282.m128i_i64[1], 24 * v282.m128i_i64[0], 8);
          goto LABEL_298;
        }
        LODWORD(v150) = v283;
      }
      sub_140440300((unsigned int)v284, v282.m128i_i32[2], v150, (unsigned int)&unk_1417876F9, 3);
      v316 = *(__int64 **)&v284[8];
      v320 = *(_QWORD *)v284;
      write((int)&v304, Buf, v325);
      if ( v304.m256i_i32[0] != -1 )
      {
        v309 = v307;
        v180 = _mm_loadu_si128((const __m128i *)&v304);
        v181 = _mm_loadu_si128((const __m128i *)&v304.m256i_u64[2]);
        *(_OWORD *)&v308.m512i_u64[6] = v306;
        *(_OWORD *)&v308.m512i_u64[4] = v305;
        *(__m128i *)&v308.m512i_u64[2] = v181;
        *(__m128i *)v308.m512i_i8 = v180;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          v277.m256i_i64[0] = (__int64)&v308;
          v277.m256i_i64[1] = (__int64)sub_140B036A0;
          *(_QWORD *)v284 = 0;
          *(_QWORD *)&v284[8] = aCodexmateLibCo_27;
          *(_OWORD *)&v284[16] = 0x2Du;
          *(_QWORD *)&v284[32] = aSrcCoreRelayRo_1;
          *(_QWORD *)&v284[40] = 35;
          *(_QWORD *)&v284[48] = 2;
          *(_QWORD *)&v284[56] = aCodexmateLibCo_27;
          *(_QWORD *)&v284[64] = 45;
          *(_QWORD *)&v284[72] = 0x15F00000001LL;
          *(_QWORD *)&v284[80] = &unk_14178FCF6;
          *(_QWORD *)&v284[88] = &v277;
          sub_1412C36A0(&v324, v284);
        }
        sub_1406CDA20(&v308);
      }
      if ( v320 )
        sub_140001660(v316, v320, 1);
      v182 = sub_141471AC0(&v240);
      *(_OWORD *)v308.m512i_i8 = 0x3E8 * (unsigned __int128)(unsigned __int64)v182 + v183 / 0xF4240uLL;
      v304.m256i_i64[0] = v283;
      *(_QWORD *)v284 = &v323;
      *(_QWORD *)&v284[8] = sub_1414A9660;
      *(_QWORD *)&v284[16] = &v308;
      *(_QWORD *)&v284[24] = sub_1414A9600;
      *(_QWORD *)&v284[32] = &v304;
      *(_QWORD *)&v284[40] = sub_1414AC520;
      sub_14149C0F0(&v202, &unk_141787704, v284);
      v277.m256i_i8[0] = v325;
      v320 = v203;
      *(_OWORD *)v304.m256i_i8 = v203;
      *(_QWORD *)v284 = &v277;
      *(_QWORD *)&v284[8] = sub_1407B2DA0;
      *(_QWORD *)&v284[16] = &v304;
      *(_QWORD *)&v284[24] = v92;
      sub_14149C0F0(&v308, &unk_141787489, v284);
      sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aDegraded, 8, (__int64)&v308);
      if ( v202 )
        sub_140001660(v320, v202, 1);
      sub_141684120(v284, &v293, 136);
      v285 = _mm_load_si128(&v282);
      v286 = v283;
      result = sub_141684120(v303, v284, 160);
      v143 = 0;
LABEL_298:
      if ( v263.m128i_i64[0] )
        result = sub_140001660(v263.m128i_i64[1], v263.m128i_i64[0], 1);
      v142 = v103 ^ 1;
      v184 = (_QWORD *)(v91 + 8);
      do
      {
        v185 = *(v184 - 1);
        if ( v185 )
          result = sub_140001660(*v184, v185, 1);
        v184 += 4;
        --v90;
      }
      while ( v90 );
LABEL_217:
      if ( v248 )
        result = sub_140001660(v91, 32 * v248, 8);
      if ( v143 )
      {
        result = sub_14052E730(&v297);
        if ( (_DWORD)v293 != 2 )
          result = sub_1406CE2E0(&v293);
      }
      if ( v142 )
      {
LABEL_223:
        v129 = v301.m128i_i64[1];
        v144 = v302;
        if ( v302 )
        {
          v145 = (_QWORD *)(v301.m128i_i64[1] + 8);
          do
          {
            v146 = *(v145 - 1);
            if ( v146 )
              sub_140001660(*v145, v146, 1);
            v145 += 3;
            --v144;
          }
          while ( v144 );
        }
        result = v301.m128i_i64[0];
        if ( v301.m128i_i64[0] )
          return sub_140001660(v129, 24 * result, 8);
      }
      return result;
    }
    if ( v275 )
    {
      if ( !v102 || (unsigned __int8)v323 >= 3u )
        goto LABEL_248;
    }
    else if ( (v102 & (unsigned __int8)v276 & ((unsigned __int8)v323 < 3u)) == 0 )
    {
LABEL_248:
      *(_QWORD *)v284 = &v325;
      *(_QWORD *)&v284[8] = sub_1407B2DA0;
      *(_QWORD *)&v284[16] = &v263;
      *(_QWORD *)&v284[24] = sub_1400015F0;
      v319 = 1;
      sub_14149C0F0(&v188, &unk_14178772E, v284);
      *(__m128i *)&v277.m256i_u64[1] = _mm_loadu_si128(&v188);
      v277.m256i_i64[3] = v189;
      v277.m256i_i64[0] = 10;
      v308.m512i_i64[0] = 0;
      *(_OWORD *)&v308.m512i_u64[1] = 1u;
      *(_QWORD *)&v284[16] = 1610612768;
      *(_QWORD *)v284 = &v308;
      *(_QWORD *)&v284[8] = &off_141790AA0;
      if ( (unsigned __int8)sub_140B036A0(&v277, v284) )
        sub_1416C3060(
          (unsigned int)aADisplayImplem_6,
          55,
          (unsigned int)&v324,
          (unsigned int)&unk_141789060,
          (__int64)&off_141790B58);
      v316 = (__int64 *)v308.m512i_i64[1];
      v320 = v308.m512i_i64[0];
      write((int)&v304, Buf, v325);
      if ( v304.m256i_i32[0] != -1 )
      {
        v309 = v307;
        v162 = _mm_loadu_si128((const __m128i *)&v304);
        v163 = _mm_loadu_si128((const __m128i *)&v304.m256i_u64[2]);
        *(_OWORD *)&v308.m512i_u64[6] = v306;
        *(_OWORD *)&v308.m512i_u64[4] = v305;
        *(__m128i *)&v308.m512i_u64[2] = v163;
        *(__m128i *)v308.m512i_i8 = v162;
        if ( *(_QWORD *)off_141EC8D80 >= 2u )
        {
          v265.m256i_i64[0] = (__int64)&v308;
          v265.m256i_i64[1] = (__int64)sub_140B036A0;
          *(_QWORD *)v284 = 0;
          *(_QWORD *)&v284[8] = aCodexmateLibCo_27;
          *(_OWORD *)&v284[16] = 0x2Du;
          *(_QWORD *)&v284[32] = aSrcCoreRelayRo_1;
          *(_QWORD *)&v284[40] = 35;
          *(_QWORD *)&v284[48] = 2;
          *(_QWORD *)&v284[56] = aCodexmateLibCo_27;
          *(_QWORD *)&v284[64] = 45;
          *(_QWORD *)&v284[72] = 0x15F00000001LL;
          *(_QWORD *)&v284[80] = &unk_14178FCF6;
          *(_QWORD *)&v284[88] = &v265;
          sub_1412C36A0(&v324, v284);
        }
        sub_1406CDA20(&v308);
      }
      if ( v320 )
        sub_140001660(v316, v320, 1);
      v308.m512i_i64[0] = v90;
      *(_QWORD *)v284 = &v323;
      *(_QWORD *)&v284[8] = sub_1414A9660;
      *(_QWORD *)&v284[16] = &v308;
      *(_QWORD *)&v284[24] = sub_1414AC520;
      sub_14149C0F0(&v200, &unk_14178774F, v284);
      v265.m256i_i8[0] = v325;
      v320 = v201;
      *(_OWORD *)v304.m256i_i8 = v201;
      *(_QWORD *)v284 = &v265;
      *(_QWORD *)&v284[8] = sub_1407B2DA0;
      *(_QWORD *)&v284[16] = &v304;
      *(_QWORD *)&v284[24] = v92;
      sub_14149C0F0(&v308, &unk_141787489, v284);
      sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aPostconditionF, 20, (__int64)&v308);
      if ( v200 )
        sub_140001660(v320, v200, 1);
      result = (__int64)v303;
      *(__int128 *)((char *)v303 + 88) = v281;
      *(_OWORD *)(result + 72) = v280;
      v164 = _mm_loadu_si128((const __m128i *)&v277);
      v165 = _mm_loadu_si128((const __m128i *)&v277.m256i_u64[2]);
      v166 = v278;
      *(_OWORD *)(result + 56) = v279;
      *(_OWORD *)(result + 40) = v166;
      *(__m128i *)(result + 24) = v165;
      *(__m128i *)(result + 8) = v164;
      *(_QWORD *)result = -2;
      v143 = 1;
      goto LABEL_298;
    }
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      v308.m512i_i64[0] = (__int64)&v325;
      v308.m512i_i64[1] = (__int64)sub_1407B2DA0;
      v308.m512i_i64[2] = (__int64)&v323;
      v308.m512i_i64[3] = (__int64)sub_1414A9660;
      v308.m512i_i64[4] = (__int64)&v263;
      v308.m512i_i64[5] = (__int64)sub_1400015F0;
      *(_QWORD *)v284 = 0;
      *(_QWORD *)&v284[8] = aCodexmateLibCo_27;
      *(_OWORD *)&v284[16] = 0x2Du;
      *(_QWORD *)&v284[32] = aSrcCoreRelayRo_1;
      *(_QWORD *)&v284[40] = 35;
      *(_QWORD *)&v284[48] = 2;
      *(_QWORD *)&v284[56] = aCodexmateLibCo_27;
      *(_QWORD *)&v284[64] = 45;
      *(_QWORD *)&v284[72] = 0x10B00000001LL;
      *(_QWORD *)&v284[80] = &unk_1417877DC;
      *(_QWORD *)&v284[88] = &v308;
      v319 = 1;
      sub_1412C36A0(&v324, v284);
    }
    v319 = 1;
    write((int)&v304, Buf, v325);
    if ( v304.m256i_i32[0] != -1 )
    {
      v309 = v307;
      v110 = _mm_loadu_si128((const __m128i *)&v304);
      v111 = _mm_loadu_si128((const __m128i *)&v304.m256i_u64[2]);
      *(_OWORD *)&v308.m512i_u64[6] = v306;
      *(_OWORD *)&v308.m512i_u64[4] = v305;
      *(__m128i *)&v308.m512i_u64[2] = v111;
      *(__m128i *)v308.m512i_i8 = v110;
      if ( *(_QWORD *)off_141EC8D80 >= 2u )
      {
        v277.m256i_i64[0] = (__int64)&v308;
        v277.m256i_i64[1] = (__int64)sub_140B036A0;
        *(_QWORD *)v284 = 0;
        *(_QWORD *)&v284[8] = aCodexmateLibCo_27;
        *(_OWORD *)&v284[16] = 0x2Du;
        *(_QWORD *)&v284[32] = aSrcCoreRelayRo_1;
        *(_QWORD *)&v284[40] = 35;
        *(_QWORD *)&v284[48] = 2;
        *(_QWORD *)&v284[56] = aCodexmateLibCo_27;
        *(_QWORD *)&v284[64] = 45;
        *(_QWORD *)&v284[72] = 0x15F00000001LL;
        *(_QWORD *)&v284[80] = &unk_14178FCF6;
        *(_QWORD *)&v284[88] = &v277;
        sub_1412C36A0(&v324, v284);
      }
      v319 = 1;
      sub_1406CDA20(&v308);
    }
    if ( v263.m128i_i64[0] )
      sub_140001660(v263.m128i_i64[1], v263.m128i_i64[0], 1);
    v112 = (_QWORD *)(v91 + 8);
    do
    {
      v113 = *(v112 - 1);
      if ( v113 )
        sub_140001660(*v112, v113, 1);
      v112 += 4;
      --v90;
    }
    while ( v90 );
    if ( v248 )
      sub_140001660(v91, 32 * v248, 8);
    sub_14052E730(&v297);
    if ( (_DWORD)v293 != 2 )
      sub_1406CE2E0(&v293);
    v114 = v301.m128i_i64[1];
    v115 = v302;
    if ( v302 )
    {
      v116 = (_QWORD *)(v301.m128i_i64[1] + 8);
      do
      {
        v20 = *(v116 - 1);
        if ( v20 )
          sub_140001660(*v116, v20, 1);
        v116 += 3;
        --v115;
      }
      while ( v115 );
    }
    if ( v301.m128i_i64[0] )
      sub_140001660(v114, 24 * v301.m128i_i64[0], 8);
    v23 = v270;
    if ( (v251 & 1) != 0 )
      goto LABEL_4;
  }
  v274 = *(_QWORD *)v284;
  v281 = v246;
  v280 = v245;
  v279 = v244;
  v278 = v243;
  v277 = v242;
  v308.m512i_i64[0] = 0;
  *(_OWORD *)&v308.m512i_u64[1] = 1u;
  v294.m128i_i64[0] = 1610612768;
  *(_QWORD *)&v293 = &v308;
  *((_QWORD *)&v293 + 1) = &off_141790AA0;
  if ( (unsigned __int8)sub_140B036A0(&v277, &v293) )
    sub_1416C3060(
      (unsigned int)aADisplayImplem_6,
      55,
      (unsigned int)&v324,
      (unsigned int)&unk_141789060,
      (__int64)&off_141790B58);
  v316 = (__int64 *)v308.m512i_i64[1];
  v320 = v308.m512i_i64[0];
  write((int)&v304, Buf, v325);
  if ( v304.m256i_i32[0] != -1 )
  {
    v309 = v307;
    *(_OWORD *)&v308.m512i_u64[6] = v306;
    *(_OWORD *)&v308.m512i_u64[4] = v305;
    *(__m256i *)v308.m512i_i8 = v304;
    if ( *(_QWORD *)off_141EC8D80 >= 2u )
    {
      v265.m256i_i64[0] = (__int64)&v308;
      v265.m256i_i64[1] = (__int64)sub_140B036A0;
      *(_QWORD *)&v293 = 0;
      *((_QWORD *)&v293 + 1) = aCodexmateLibCo_27;
      v294 = (__m128i)0x2DuLL;
      *(_QWORD *)&v295 = aSrcCoreRelayRo_1;
      *((_QWORD *)&v295 + 1) = 35;
      *(_QWORD *)&v296 = 2;
      *((_QWORD *)&v296 + 1) = aCodexmateLibCo_27;
      v297.m256i_i64[0] = 45;
      v297.m256i_i64[1] = 0x15F00000001LL;
      v297.m256i_i64[2] = (__int64)&unk_14178FCF6;
      v297.m256i_i64[3] = (__int64)&v265;
      sub_1412C36A0(&v324, &v293);
    }
    sub_1406CDA20(&v308);
  }
  if ( v320 )
    sub_140001660(v316, v320, 1);
  *(_QWORD *)&v293 = &v323;
  *((_QWORD *)&v293 + 1) = sub_1414A9660;
  v294.m128i_i64[0] = (__int64)&v277;
  v294.m128i_i64[1] = (__int64)sub_140B036A0;
  sub_14149C0F0(&v216, &unk_1417876C6, &v293);
  v265.m256i_i8[0] = v325;
  v320 = v217;
  *(_OWORD *)v304.m256i_i8 = v217;
  *(_QWORD *)&v293 = &v265;
  *((_QWORD *)&v293 + 1) = sub_1407B2DA0;
  v294.m128i_i64[0] = (__int64)&v304;
  v294.m128i_i64[1] = (__int64)v16;
  sub_14149C0F0(&v308, &unk_141787489, &v293);
  sub_1403565C0((unsigned int)aRouterTransiti, 17, (unsigned int)aSettleFailed, 13, (__int64)&v308);
  if ( v216 )
    sub_140001660(v320, v216, 1);
  v125 = v303;
  *(__int128 *)((char *)v303 + 88) = v281;
  *(__int128 *)((char *)v125 + 72) = v280;
  v126 = _mm_load_si128((const __m128i *)&v277);
  v127 = _mm_load_si128((const __m128i *)&v277.m256i_u64[2]);
  v128 = v278;
  *(__int128 *)((char *)v125 + 56) = v279;
  *(__int128 *)((char *)v125 + 40) = v128;
  *(__int128 *)((char *)v125 + 24) = (__int128)v127;
  *(__int128 *)((char *)v125 + 8) = (__int128)v126;
  *(_QWORD *)v125 = -2;
  sub_14052E730(&v284[64]);
  if ( (_DWORD)v274 != 2 )
    sub_1406CE2E0(v284);
  v129 = v285.m128i_i64[1];
  v130 = v286;
  if ( v286 )
  {
    v131 = (_QWORD *)(v285.m128i_i64[1] + 8);
    do
    {
      v132 = *(v131 - 1);
      if ( v132 )
        sub_140001660(*v131, v132, 1);
      v131 += 3;
      --v130;
    }
    while ( v130 );
  }
  result = v285.m128i_i64[0];
  if ( v285.m128i_i64[0] )
    return sub_140001660(v129, 24 * result, 8);
  return result;
}
