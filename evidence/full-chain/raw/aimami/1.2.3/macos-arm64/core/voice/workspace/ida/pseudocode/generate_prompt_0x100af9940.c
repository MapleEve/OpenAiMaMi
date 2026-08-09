// __ZN13codexmate_lib4core5voice9workspace15generate_prompt @ 0x100af9940 | 基线 same-set
// [FULL hexrays]

_QWORD *__fastcall codexmate_lib::core::voice::workspace::generate_prompt::hcca4b46aeb1f0fb5(
        _QWORD *a1,
        __int64 a2,
        const __m128i *a3,
        __int64 a4,
        __int64 a5,
        __m128i si128,
        __m128i a7)
{
  _QWORD *v9; // r15
  char v10; // r12
  __int64 v11; // rdi
  __int64 v12; // rsi
  size_t v13; // rdx
  const void *v14; // r13
  size_t v15; // rdx
  size_t v16; // r12
  __int64 v17; // r14
  __int64 v18; // r13
  const void *v19; // r15
  size_t v20; // r12
  void *v21; // rax
  __int64 v22; // rsi
  __int64 v23; // rsi
  __int64 v24; // rsi
  __int64 v25; // rsi
  __int64 v26; // rsi
  __int64 v27; // rsi
  __int64 v28; // rsi
  __int64 v29; // rsi
  __int64 v30; // rsi
  __int64 v31; // rsi
  __int64 v32; // rsi
  __int64 v33; // rsi
  __int64 v34; // rsi
  __int64 v35; // rsi
  __int64 v36; // rsi
  __int64 v37; // rsi
  __int64 v38; // rsi
  const __m128i *v40; // rsi
  int *v41; // rdi
  signed __int64 v42; // r14
  const void *v43; // r15
  __int64 v44; // r12
  void *v45; // rax
  void *v46; // rdi
  int v47; // ecx
  size_t v48; // r12
  __int64 v49; // r15
  __int64 v50; // rax
  signed __int64 v51; // rdx
  void *v52; // rax
  void *v53; // r15
  void *v54; // rdi
  int v55; // edx
  __int64 v56; // rax
  __int64 v57; // r14
  __int64 v58; // r15
  __int64 v59; // rsi
  void *v60; // rax
  signed __int64 v61; // rdx
  signed __int64 v62; // r13
  __int64 v63; // r12
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // r14
  __int64 v67; // r15
  __int64 v68; // rsi
  const void *v69; // rax
  void *v70; // rdx
  void *v71; // r13
  __int64 v72; // r12
  __int64 v73; // rax
  __int64 v74; // rdi
  __int64 v75; // r14
  __int64 v76; // r15
  __int64 v77; // rsi
  const void *v78; // rax
  signed __int64 v79; // rdx
  signed __int64 v80; // r13
  __int64 v81; // r12
  __int64 v82; // rax
  __int64 v83; // rdi
  __int64 v84; // r14
  __int64 v85; // r15
  __int64 v86; // rsi
  void *v87; // rax
  signed __int64 v88; // rdx
  signed __int64 v89; // r13
  __int64 v90; // r12
  __int64 v91; // rax
  __int64 v92; // r13
  __int64 v93; // rax
  void *v94; // rcx
  __int64 v95; // rdx
  __int64 v96; // r12
  __int64 v97; // rdx
  __int64 v98; // rax
  __int64 v99; // rcx
  __int64 v100; // rdx
  __int64 v101; // rax
  __int64 v102; // rcx
  __int64 v103; // rdx
  __int64 v104; // r12
  __int64 v105; // rdx
  __int64 v106; // rax
  __int64 v107; // rcx
  __int64 v108; // r14
  __int64 v109; // rax
  size_t v110; // r13
  __int64 v111; // r14
  char *v112; // rax
  char *v113; // rdi
  _Unwind_Exception *v114; // rsi
  size_t v115; // rdx
  size_t v116; // r14
  __int64 v117; // rax
  size_t v118; // r12
  __int64 v119; // r13
  const __m128i *v120; // r15
  _QWORD *v121; // rsi
  unsigned __int64 v122; // r13
  __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rcx
  __int64 v126; // r14
  __int64 v127; // rax
  __int64 v128; // rdx
  _QWORD *v129; // r13
  unsigned __int64 v130; // r14
  size_t v131; // r15
  _QWORD *v132; // r12
  char *v133; // r8
  size_t v134; // r14
  _QWORD *v135; // rdi
  char *v136; // r15
  _QWORD *v137; // r14
  char *v138; // r15
  _QWORD *v139; // rax
  _QWORD *v140; // r13
  char *v141; // rsi
  char *v142; // rcx
  _QWORD *v143; // rcx
  __int64 v144; // rdx
  _QWORD *v145; // rcx
  __int64 v146; // rsi
  void *v147; // r13
  __int64 v148; // r14
  signed __int64 v149; // r13
  __int64 v150; // r9
  __int64 v151; // rax
  __int64 v152; // rcx
  __int64 v153; // rax
  unsigned __int64 v154; // rdi
  size_t v155; // r15
  int v156; // eax
  unsigned __int64 v157; // r15
  __int64 v158; // rsi
  unsigned int v159; // r14d
  __int64 v160; // rcx
  __int64 v161; // rcx
  int v162; // r14d
  int v163; // eax
  unsigned __int64 v164; // rdx
  char v165; // si
  unsigned int *v166; // rcx
  unsigned __int64 v167; // r14
  unsigned int *v168; // rax
  char v169; // dl
  unsigned int v170; // edi
  unsigned int v171; // edx
  bool v172; // al
  int v173; // eax
  size_t v174; // rcx
  size_t v175; // r13
  size_t v176; // r14
  __int64 v177; // r9
  size_t v178; // rsi
  size_t v179; // r13
  size_t v180; // r14
  size_t v181; // r13
  __int64 v182; // rdi
  __int64 v183; // rsi
  void *v184; // rax
  __int64 v185; // rdx
  __int64 v186; // rdi
  size_t v187; // r14
  const __m128i *v189; // r15
  const __m128i *v190; // r12
  const __m128i *v192; // r13
  int v193; // r14d
  __int64 v194; // rax
  __int64 v195; // rsi
  unsigned __int64 v196; // rax
  __int64 v197; // r14
  __int64 v198; // r15
  __int64 v199; // rdx
  __int64 v200; // rcx
  __int64 v201; // r8
  __int64 v202; // r9
  int *v203; // r12
  const __m128i *v204; // r14
  const __m128i *v205; // r15
  __int64 *v206; // r13
  __int64 v207; // rdx
  __int64 v208; // rdi
  int *v209; // rdi
  size_t v210; // r15
  __int64 v211; // rsi
  __int64 v212; // rax
  __int64 v213; // rdi
  __int64 v214; // rsi
  __int64 v215; // rdx
  __int64 v216; // r14
  void *v217; // rax
  __int64 v218; // r15
  const __m128i *v219; // rdi
  char *v220; // rax
  __int64 v221; // rcx
  void *v222; // rax
  __int64 v223; // r15
  const __m128i *v224; // rdi
  unsigned __int64 v225; // r14
  char *v226; // r15
  __int64 v227; // r13
  __int64 v228; // rax
  __int64 v229; // r12
  __int64 v230; // rax
  __int64 v231; // r14
  __int64 v232; // rsi
  __int64 v233; // rdi
  __int64 v234; // rdx
  __int64 v235; // r15
  __int64 v236; // rax
  __int64 v237; // r12
  const __m128i *v238; // rdi
  char *v239; // rax
  const __m128i *v240; // r14
  const __m128i *v241; // r15
  __int64 v242; // r13
  size_t v243; // r14
  char v244; // r12
  char *v245; // rax
  int *v246; // rdi
  __int64 *v247; // rsi
  __int64 v248; // r15
  __int64 v249; // r14
  int v250; // edx
  __int64 v251; // rax
  __m128i v252; // xmm0
  __int64 v253; // r14
  _QWORD *v254; // r13
  char v255; // r12
  char v256; // r14
  __int64 v257; // rdx
  const __m128i **v258; // rdi
  int *v259; // rsi
  char v260; // r14
  __int64 v261; // r12
  __int64 v262; // r15
  unsigned __int64 v263; // rax
  unsigned __int64 v264; // r15
  __m128i *v265; // r14
  __int64 v266; // r12
  const __m128i *v267; // rdi
  char *v268; // r15
  const __m128i *v269; // r14
  __int64 v270; // rax
  int v271; // edx
  __int64 v272; // rax
  __int64 v273; // rsi
  __int64 v274; // rdx
  __int64 v275; // rsi
  __int64 v276; // rsi
  __int64 v277; // rsi
  __int64 v278; // rsi
  size_t v279; // r14
  __int64 v280; // r14
  __int64 v281; // rax
  __int64 v282; // rcx
  __int64 v283; // rax
  char v284; // al
  __int64 v285; // rdi
  size_t v286; // r15
  void *v287; // rax
  __int64 v288; // r14
  __int64 v289; // rax
  __int64 v290; // rcx
  __m128i v291; // xmm2
  __m128i v292; // xmm3
  __m128i v293; // xmm4
  __m128i v294; // xmm5
  __m128i v295; // xmm6
  __int64 v296; // rcx
  __m128i v297; // xmm2
  __m128i v298; // xmm3
  __m128i v299; // xmm4
  size_t v300; // [rsp+0h] [rbp-A80h]
  _QWORD v301[16]; // [rsp+10h] [rbp-A70h] BYREF
  __int64 v302; // [rsp+90h] [rbp-9F0h] BYREF
  _QWORD v303[17]; // [rsp+98h] [rbp-9E8h] BYREF
  __int64 v304; // [rsp+120h] [rbp-960h]
  __int64 v305; // [rsp+128h] [rbp-958h]
  _QWORD v306[3]; // [rsp+130h] [rbp-950h] BYREF
  _QWORD v307[3]; // [rsp+148h] [rbp-938h] BYREF
  _QWORD v308[3]; // [rsp+160h] [rbp-920h] BYREF
  _QWORD v309[3]; // [rsp+178h] [rbp-908h] BYREF
  _QWORD v310[3]; // [rsp+190h] [rbp-8F0h] BYREF
  _QWORD v311[3]; // [rsp+1A8h] [rbp-8D8h] BYREF
  __int64 v312; // [rsp+1C0h] [rbp-8C0h]
  __int64 v313; // [rsp+1C8h] [rbp-8B8h]
  __int64 v314; // [rsp+1D0h] [rbp-8B0h]
  _QWORD *v315; // [rsp+1D8h] [rbp-8A8h]
  __int64 v316; // [rsp+1E0h] [rbp-8A0h]
  void *v317; // [rsp+1E8h] [rbp-898h]
  unsigned __int64 v318; // [rsp+1F0h] [rbp-890h]
  unsigned int *v319; // [rsp+1F8h] [rbp-888h]
  int v320[160]; // [rsp+200h] [rbp-880h] BYREF
  int v321[110]; // [rsp+480h] [rbp-600h] BYREF
  __int64 v322; // [rsp+638h] [rbp-448h] BYREF
  _QWORD v323[12]; // [rsp+640h] [rbp-440h] BYREF
  __int64 v324; // [rsp+6A0h] [rbp-3E0h]
  __int64 v325; // [rsp+6A8h] [rbp-3D8h]
  __int64 v326; // [rsp+6B0h] [rbp-3D0h]
  char *v327; // [rsp+6B8h] [rbp-3C8h]
  _QWORD *v328; // [rsp+6C0h] [rbp-3C0h]
  size_t v329; // [rsp+6C8h] [rbp-3B8h]
  char *v330; // [rsp+6D0h] [rbp-3B0h]
  unsigned int *v331; // [rsp+6D8h] [rbp-3A8h]
  const __m128i *v332; // [rsp+6E0h] [rbp-3A0h] BYREF
  const __m128i *v333; // [rsp+6E8h] [rbp-398h]
  const __m128i **v334; // [rsp+6F0h] [rbp-390h]
  const __m128i *v335; // [rsp+6F8h] [rbp-388h] BYREF
  const __m128i *v336; // [rsp+700h] [rbp-380h]
  size_t *v337; // [rsp+708h] [rbp-378h]
  __int64 v338; // [rsp+710h] [rbp-370h] BYREF
  __int64 v339; // [rsp+718h] [rbp-368h]
  __int64 v340; // [rsp+720h] [rbp-360h]
  __int64 v341; // [rsp+728h] [rbp-358h] BYREF
  __int64 v342; // [rsp+730h] [rbp-350h]
  __int64 v343; // [rsp+738h] [rbp-348h]
  int v344[24]; // [rsp+740h] [rbp-340h] BYREF
  __int64 v345; // [rsp+7A0h] [rbp-2E0h] BYREF
  _QWORD *v346; // [rsp+7A8h] [rbp-2D8h]
  unsigned __int64 v347; // [rsp+7B0h] [rbp-2D0h]
  const __m128i *v348[16]; // [rsp+7B8h] [rbp-2C8h] BYREF
  __int64 v349; // [rsp+838h] [rbp-248h]
  __int64 v350; // [rsp+840h] [rbp-240h]
  __int64 v351; // [rsp+848h] [rbp-238h] BYREF
  _QWORD *v352; // [rsp+850h] [rbp-230h]
  unsigned __int64 v353; // [rsp+858h] [rbp-228h]
  __int64 v354; // [rsp+860h] [rbp-220h]
  __int64 v355; // [rsp+868h] [rbp-218h]
  size_t v356; // [rsp+870h] [rbp-210h]
  char **v357; // [rsp+878h] [rbp-208h]
  int v358[2]; // [rsp+880h] [rbp-200h]
  void *v359; // [rsp+888h] [rbp-1F8h]
  __int64 v360; // [rsp+890h] [rbp-1F0h]
  __int64 v361; // [rsp+898h] [rbp-1E8h]
  unsigned int *v362; // [rsp+8A0h] [rbp-1E0h]
  unsigned __int8 *v363; // [rsp+8A8h] [rbp-1D8h] BYREF
  char *v364; // [rsp+8B0h] [rbp-1D0h]
  __int64 v365; // [rsp+8B8h] [rbp-1C8h]
  __int64 v366; // [rsp+8C0h] [rbp-1C0h] BYREF
  unsigned int *v367; // [rsp+8C8h] [rbp-1B8h]
  __int64 v368; // [rsp+8D0h] [rbp-1B0h]
  size_t v369; // [rsp+8D8h] [rbp-1A8h] BYREF
  __int64 v370; // [rsp+8E0h] [rbp-1A0h]
  size_t v371; // [rsp+8E8h] [rbp-198h]
  unsigned __int64 v372; // [rsp+8F0h] [rbp-190h] BYREF
  void *v373; // [rsp+8F8h] [rbp-188h]
  size_t v374; // [rsp+900h] [rbp-180h]
  __int64 v375; // [rsp+908h] [rbp-178h]
  _QWORD *v376; // [rsp+910h] [rbp-170h]
  unsigned __int64 v377; // [rsp+918h] [rbp-168h]
  __int64 v378; // [rsp+920h] [rbp-160h] BYREF
  unsigned __int64 v379; // [rsp+928h] [rbp-158h]
  unsigned __int64 v380; // [rsp+930h] [rbp-150h]
  unsigned __int64 v381; // [rsp+938h] [rbp-148h] BYREF
  char *v382; // [rsp+940h] [rbp-140h]
  __int64 v383; // [rsp+948h] [rbp-138h]
  __int64 v384; // [rsp+950h] [rbp-130h]
  __int64 v385; // [rsp+958h] [rbp-128h] BYREF
  __int64 v386; // [rsp+960h] [rbp-120h]
  __int64 v387; // [rsp+968h] [rbp-118h]
  __int64 v388; // [rsp+970h] [rbp-110h]
  __int64 v389; // [rsp+978h] [rbp-108h]
  size_t v390; // [rsp+980h] [rbp-100h]
  size_t v391; // [rsp+988h] [rbp-F8h]
  size_t v392; // [rsp+990h] [rbp-F0h]
  int v393[2]; // [rsp+998h] [rbp-E8h]
  size_t v394; // [rsp+9A0h] [rbp-E0h]
  const __m128i *v395; // [rsp+9A8h] [rbp-D8h] BYREF
  __int64 v396; // [rsp+9B0h] [rbp-D0h]
  size_t v397; // [rsp+9B8h] [rbp-C8h]
  void *v398; // [rsp+9C0h] [rbp-C0h]
  void *v399; // [rsp+9C8h] [rbp-B8h]
  size_t v400; // [rsp+9D0h] [rbp-B0h]
  unsigned __int64 v401; // [rsp+9D8h] [rbp-A8h]
  __int64 v402; // [rsp+9E0h] [rbp-A0h]
  __int64 v403; // [rsp+9E8h] [rbp-98h]
  size_t __n; // [rsp+9F0h] [rbp-90h]
  unsigned __int64 v405; // [rsp+9F8h] [rbp-88h]
  char *v406; // [rsp+A00h] [rbp-80h]
  size_t v407; // [rsp+A08h] [rbp-78h]
  void *v408; // [rsp+A10h] [rbp-70h]
  void *v409; // [rsp+A18h] [rbp-68h]
  __int64 v410; // [rsp+A20h] [rbp-60h]
  __int64 v411; // [rsp+A28h] [rbp-58h]
  void *__src; // [rsp+A30h] [rbp-50h]
  size_t v413; // [rsp+A38h] [rbp-48h]
  _Unwind_Exception *exception_object[2]; // [rsp+A40h] [rbp-40h] BYREF
  __int64 i64; // [rsp+A50h] [rbp-30h]

  v411 = a4;
  v9 = a1;
  codexmate_lib::core::voice::workspace::read_workspace_file::h3fcc1022bf4267c6(v320, a2);
  qmemcpy(v321, &v320[2], 0x60u);
  if ( *(_QWORD *)v320 == 0x8000000000000000LL )
  {
    qmemcpy(a1 + 1, v321, 0x60u);
    *a1 = 2;
    v10 = 1;
    goto LABEL_17;
  }
  v410 = a5;
  v403 = a2;
  v409 = a1;
  v303[16] = *(_QWORD *)&v320[34];
  v303[15] = *(_QWORD *)&v320[32];
  v303[14] = *(_QWORD *)&v320[30];
  v303[13] = *(_QWORD *)&v320[28];
  v303[12] = *(_QWORD *)&v320[26];
  qmemcpy(v303, v321, 0x60u);
  v302 = *(_QWORD *)v320;
  v11 = a3[3].i64[0];
  v12 = a3[3].i64[1];
  exception_object[0] = (_Unwind_Exception *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v11, v12);
  v413 = v13;
  if ( !v13 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, v12);
    v21 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1);
    if ( !v21 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24);
    qmemcpy(v21, "Raw text cannot be empty", 24);
    v9 = v409;
    *((_QWORD *)v409 + 1) = 9;
    v9[2] = 24;
    v9[3] = v21;
    v9[4] = 24;
    goto LABEL_15;
  }
  if ( a3[10].i64[0] != 0x8000000000000000LL )
  {
    v14 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a3[10].i64[1], a3[11].i64[0]);
    v16 = v15;
    if ( v14 != nullptr && v15 != 0 )
    {
      v40 = a3 + 1;
      v41 = v321;
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v321, &a3[1]);
      if ( a3[11].i64[1] == 0x8000000000000000LL )
      {
        v42 = 15;
        v43 = &unk_10167DF5A;
      }
      else
      {
        v41 = (int *)a3[12].i64[0];
        v40 = (const __m128i *)a3[12].i64[1];
        v50 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v41, v40);
        LOBYTE(v40) = v50 == 0 || v51 == 0;
        v42 = 15;
        if ( !(_BYTE)v40 )
          v42 = v51;
        v43 = &unk_10167DF5A;
        if ( v50 != 0 && v51 != 0 )
          v43 = (const void *)v50;
        if ( v42 < 0 )
        {
          v44 = 0;
          v42 = v51;
          goto LABEL_80;
        }
      }
      __n = v16;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v41, v40);
      v44 = 1;
      v45 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v42, 1);
      if ( v45 )
      {
        __src = v45;
        v46 = v45;
        memcpy(v45, v43, v42);
        v47 = 5;
        if ( (unsigned __int8)a3[26].i32[2] != 6 )
          v47 = a3[26].i32[2];
        v48 = __n;
        if ( (__n & 0x8000000000000000LL) == 0LL )
        {
          v393[0] = v47;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v46, v43);
          v49 = 1;
          v52 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v48, 1);
          if ( v52 )
          {
            v53 = v52;
            v54 = v52;
            memcpy(v52, v14, v48);
            v348[0] = (const __m128i *)std::time::SystemTime::now::h1fe79e41f9d5677f(v54, v14);
            LODWORD(v348[1]) = v55;
            std::time::SystemTime::duration_since::had059553cab94f96(v320, v348, 0, 0);
            if ( LOBYTE(v320[0]) )
              v56 = 0;
            else
              v56 = *(_QWORD *)&v320[2];
            v322 = *(_QWORD *)v321;
            v323[0] = *(_QWORD *)&v321[2];
            v323[1] = *(_QWORD *)&v321[4];
            v323[2] = v42;
            v323[3] = __src;
            v323[4] = v42;
            v323[5] = 0;
            v323[6] = 1;
            v323[7] = 0;
            BYTE1(v324) = v393[0];
            v323[8] = __n;
            v323[9] = v53;
            v323[10] = __n;
            LOBYTE(v324) = 0;
            v323[11] = v56;
            goto LABEL_86;
          }
        }
        else
        {
          v49 = 0;
        }
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v49, v48);
      }
LABEL_80:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v44, v42);
    }
  }
  if ( !v303[1] )
  {
LABEL_14:
    *(_QWORD *)v344 = a3 + 1;
    *(_QWORD *)&v344[2] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v320[2], &unk_1017CBF28, v344);
    *(_QWORD *)v320 = 8;
    qmemcpy(v321, v320, 0x60u);
    qmemcpy(v348, v321, 0x60u);
    v9 = v409;
    qmemcpy((char *)v409 + 8, v348, 0x60u);
LABEL_15:
    *v9 = 2;
    v10 = 1;
    goto LABEL_16;
  }
  v17 = v303[0];
  v18 = 112LL * v303[1];
  v19 = (const void *)a3[1].i64[1];
  v20 = a3[2].u64[0];
  while ( *(_QWORD *)(v17 + 16) != v20 || memcmp(*(const void **)(v17 + 8), v19, v20) )
  {
    v17 += 112;
    v18 -= 112;
    if ( !v18 )
      goto LABEL_14;
  }
  _$LT$codexmate_lib..core..models..VoicePromptTemplate$u20$as$u20$core..clone..Clone$GT$::clone::hd33e9bd87df1e3d3(
    v320,
    v17);
  qmemcpy(v321, &v320[2], 0x60u);
  qmemcpy(v348, v321, 0x60u);
  qmemcpy(v323, v348, sizeof(v323));
  v322 = *(_QWORD *)v320;
  v324 = *(_QWORD *)&v320[26];
LABEL_86:
  v57 = a3[4].i64[0];
  v58 = 1;
  if ( v57 != 0x8000000000000000LL )
    v58 = a3[4].i64[1];
  v59 = a3[5].i64[0];
  if ( v57 == 0x8000000000000000LL )
  {
    v59 = 0;
    v57 = 0;
  }
  v60 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v58, v59);
  __n = v61;
  v62 = v61;
  if ( v61 < 0 )
  {
    v63 = 0;
    goto LABEL_92;
  }
  if ( v61 )
  {
    __src = v60;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v58, v59);
    v63 = 1;
    v64 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v62, 1);
    if ( !v64 )
LABEL_92:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v63, __n);
    v65 = v64;
    v60 = __src;
  }
  else
  {
    v65 = 1;
  }
  *(_QWORD *)v393 = v65;
  memcpy((void *)v65, v60, __n);
  if ( v57 )
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58, v57, 1);
  v66 = a3[5].i64[1];
  v67 = 1;
  if ( v66 != 0x8000000000000000LL )
    v67 = a3[6].i64[0];
  v68 = a3[6].i64[1];
  if ( v66 == 0x8000000000000000LL )
  {
    v68 = 0;
    v66 = 0;
  }
  v69 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v67, v68);
  __src = v70;
  v71 = v70;
  if ( (__int64)v70 < 0 )
  {
    v72 = 0;
    goto LABEL_105;
  }
  if ( v70 )
  {
    v400 = (size_t)v69;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v67, v68);
    v72 = 1;
    v73 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v71, 1);
    if ( !v73 )
LABEL_105:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v72, __src);
    v74 = v73;
    v69 = (const void *)v400;
  }
  else
  {
    v74 = 1;
  }
  *(_QWORD *)v358 = v74;
  memcpy((void *)v74, v69, (size_t)__src);
  if ( v66 )
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67, v66, 1);
  v75 = a3[7].i64[0];
  v76 = 1;
  if ( v75 != 0x8000000000000000LL )
    v76 = a3[7].i64[1];
  v77 = a3[8].i64[0];
  if ( v75 == 0x8000000000000000LL )
  {
    v77 = 0;
    v75 = 0;
  }
  v78 = (const void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v76, v77);
  v400 = v79;
  v80 = v79;
  if ( v79 < 0 )
  {
    v81 = 0;
    goto LABEL_118;
  }
  if ( v79 )
  {
    v391 = (size_t)v78;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v76, v77);
    v81 = 1;
    v82 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v80, 1);
    if ( !v82 )
LABEL_118:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v81, v400);
    v83 = v82;
    v78 = (const void *)v391;
  }
  else
  {
    v83 = 1;
  }
  v359 = (void *)v83;
  memcpy((void *)v83, v78, v400);
  if ( v75 )
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, v75, 1);
  v84 = a3[8].i64[1];
  v85 = 1;
  if ( v84 != 0x8000000000000000LL )
    v85 = a3[9].i64[0];
  v86 = a3[9].i64[1];
  if ( v84 == 0x8000000000000000LL )
  {
    v86 = 0;
    v84 = 0;
  }
  v87 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v85, v86);
  v89 = v88;
  v391 = v88;
  if ( v88 < 0 )
  {
    v90 = 0;
    goto LABEL_131;
  }
  if ( v88 )
  {
    v398 = v87;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v85, v86);
    v90 = 1;
    v91 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v89, 1);
    if ( !v91 )
LABEL_131:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v90, v391);
    v92 = v91;
    v87 = v398;
  }
  else
  {
    v92 = 1;
  }
  memcpy((void *)v92, v87, v391);
  if ( v84 )
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v85, v84, 1);
  *(_QWORD *)&v320[4] = a3[20].i64[0];
  v93 = a3[19].i64[0];
  *(_QWORD *)&v320[2] = a3[19].i64[1];
  *(_QWORD *)v320 = v93;
  v355 = v92;
  codexmate_lib::core::voice::workspace::sanitize_optional::hf40af034a8607c38(v321, v320);
  v94 = *(void **)v321;
  v95 = *(_QWORD *)&v321[4];
  if ( *(_QWORD *)v321 == 0x8000000000000000LL )
    v95 = 0;
  v325 = v95;
  v96 = 1;
  v97 = *(_QWORD *)&v321[2];
  if ( *(_QWORD *)v321 == 0x8000000000000000LL )
    v97 = 1;
  v361 = v97;
  if ( *(_QWORD *)v321 == 0x8000000000000000LL )
    v94 = nullptr;
  v398 = v94;
  *(_QWORD *)&v320[4] = a3[21].i64[1];
  v98 = a3[20].i64[1];
  *(_QWORD *)&v320[2] = a3[21].i64[0];
  *(_QWORD *)v320 = v98;
  codexmate_lib::core::voice::workspace::sanitize_optional::hf40af034a8607c38(v321, v320);
  v99 = *(_QWORD *)v321;
  v100 = *(_QWORD *)&v321[4];
  if ( *(_QWORD *)v321 == 0x8000000000000000LL )
    v100 = 0;
  v326 = v100;
  if ( *(_QWORD *)v321 != 0x8000000000000000LL )
    v96 = *(_QWORD *)&v321[2];
  v384 = v96;
  if ( *(_QWORD *)v321 == 0x8000000000000000LL )
    v99 = 0;
  v388 = v99;
  *(_QWORD *)&v320[4] = a3[23].i64[0];
  v101 = a3[22].i64[0];
  *(_QWORD *)&v320[2] = a3[22].i64[1];
  *(_QWORD *)v320 = v101;
  codexmate_lib::core::voice::workspace::sanitize_optional::hf40af034a8607c38(v321, v320);
  v102 = *(_QWORD *)v321;
  v103 = *(_QWORD *)&v321[4];
  if ( *(_QWORD *)v321 == 0x8000000000000000LL )
    v103 = 0;
  v312 = v103;
  v104 = 1;
  v105 = *(_QWORD *)&v321[2];
  if ( *(_QWORD *)v321 == 0x8000000000000000LL )
    v105 = 1;
  v354 = v105;
  if ( *(_QWORD *)v321 == 0x8000000000000000LL )
    v102 = 0;
  v389 = v102;
  *(_QWORD *)&v320[4] = a3[24].i64[1];
  v106 = a3[23].i64[1];
  *(_QWORD *)&v320[2] = a3[24].i64[0];
  *(_QWORD *)v320 = v106;
  codexmate_lib::core::voice::workspace::sanitize_optional::hf40af034a8607c38(v321, v320);
  v107 = *(_QWORD *)v321;
  v108 = *(_QWORD *)&v321[4];
  if ( *(_QWORD *)v321 == 0x8000000000000000LL )
    v108 = 0;
  else
    v104 = *(_QWORD *)&v321[2];
  if ( *(_QWORD *)v321 == 0x8000000000000000LL )
    v107 = 0;
  v360 = v107;
  *(_QWORD *)&v320[4] = a3[26].i64[0];
  v109 = a3[25].i64[0];
  *(_QWORD *)&v320[2] = a3[25].i64[1];
  *(_QWORD *)v320 = v109;
  codexmate_lib::core::voice::workspace::sanitize_optional::hf40af034a8607c38(v311, v320);
  v110 = v413;
  if ( (v413 & 0x8000000000000000LL) != 0LL )
  {
    v111 = 0;
    goto LABEL_163;
  }
  v314 = v108;
  i64 = v303[3];
  v405 = v303[4];
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v311, v320);
  v111 = 1;
  v112 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v110, 1);
  if ( !v112 )
LABEL_163:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v111, v110);
  v406 = v112;
  v113 = v112;
  v114 = exception_object[0];
  memcpy(v112, exception_object[0], v110);
  v115 = v400;
  v402 = v104;
  if ( v400 )
  {
    v116 = v400;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v113, v114);
    v117 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v116, 1);
    if ( !v117 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v400);
    v111 = v117;
    v115 = v400;
  }
  v118 = v115;
  memcpy((void *)v111, v359, v115);
  *(_QWORD *)v320 = v118;
  *(_QWORD *)&v320[2] = v111;
  *(_QWORD *)&v320[4] = v118;
  codexmate_lib::core::voice::workspace::sanitize_optional::hf40af034a8607c38(v321, v320);
  v119 = *(_QWORD *)v321;
  if ( *(_QWORD *)v321 == 0x8000000000000000LL )
  {
    v369 = 0;
    v370 = 1;
    v371 = 0;
    goto LABEL_170;
  }
  v182 = *(_QWORD *)&v321[2];
  v183 = *(_QWORD *)&v321[4];
  v184 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(
                   *(_QWORD *)&v321[2],
                   *(_QWORD *)&v321[4]);
  if ( v185 < 0 )
  {
    v186 = 0;
    goto LABEL_280;
  }
  v399 = v184;
  if ( v185 )
  {
    v286 = v185;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v182, v183);
    v287 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v286, 1);
    v186 = 1;
    v185 = v286;
    if ( !v287 )
LABEL_280:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v186, v185);
    v288 = (__int64)v287;
    memcpy(v287, v399, v286);
    if ( v286 < 8 )
    {
      v289 = 0;
      do
      {
LABEL_459:
        *(_BYTE *)(v288 + v289) |= 32 * ((unsigned __int8)(*(_BYTE *)(v288 + v289) - 65) < 0x1Au);
        ++v289;
LABEL_460:
        ;
      }
      while ( v286 != v289 );
      goto LABEL_461;
    }
    if ( v286 < 0x20 )
    {
      v289 = 0;
      goto LABEL_456;
    }
    v289 = v286 & 0x7FFFFFFFFFFFFFE0LL;
    v290 = 0;
    si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC980);
    a7 = _mm_load_si128((const __m128i *)&xmmword_1015DC990);
    v291 = _mm_load_si128((const __m128i *)&xmmword_1015DC9A0);
    do
    {
      v292 = _mm_loadu_si128((const __m128i *)(v288 + v290));
      v293 = _mm_loadu_si128((const __m128i *)(v288 + v290 + 16));
      v294 = _mm_add_epi8(v292, si128);
      v295 = _mm_add_epi8(v293, si128);
      *(__m128i *)(v288 + v290) = _mm_or_si128(_mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v294, a7), v294), v291), v292);
      *(__m128i *)(v288 + v290 + 16) = _mm_or_si128(
                                         _mm_and_si128(_mm_cmpeq_epi8(_mm_min_epu8(v295, a7), v295), v291),
                                         v293);
      v290 += 32;
    }
    while ( v289 != v290 );
    if ( v286 != v289 )
    {
      if ( (v286 & 0x18) == 0 )
        goto LABEL_459;
LABEL_456:
      v296 = v289;
      v289 = v286 & 0x7FFFFFFFFFFFFFF8LL;
      si128 = _mm_load_si128((const __m128i *)&xmmword_1015DC9B0);
      a7 = _mm_load_si128((const __m128i *)&xmmword_1015DC9C0);
      v297 = _mm_load_si128((const __m128i *)&xmmword_1015DC9D0);
      do
      {
        v298 = _mm_loadl_epi64((const __m128i *)(v288 + v296));
        v299 = _mm_add_epi8(v298, si128);
        *(_QWORD *)(v288 + v296) = _mm_or_si128(
                                     _mm_andnot_si128(_mm_cmpeq_epi8(_mm_max_epu8(v299, a7), v299), v297),
                                     v298).u64[0];
        v296 += 8;
      }
      while ( v289 != v296 );
      goto LABEL_460;
    }
  }
  else
  {
    v288 = 1;
    v286 = 0;
  }
LABEL_461:
  v369 = v286;
  v370 = v288;
  v371 = v286;
  if ( v119 )
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v321[2], v119, 1);
LABEL_170:
  v120 = (const __m128i *)(i64 + 160 * v405);
  v335 = (const __m128i *)i64;
  v336 = v120;
  v337 = &v369;
  v121 = &v335;
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hde6ce8865e954bdc(
    &v351,
    &v335);
  v376 = v352;
  v122 = v353;
  *(_QWORD *)v320 = &v395;
  v405 = v353;
  if ( v353 >= 2 )
  {
    v122 = v405;
    v121 = (_QWORD *)v405;
    if ( v353 >= 0x15 )
      core::slice::sort::stable::driftsort_main::hfaaecf57165269ff(v376, v405, v320);
    else
      core::slice::sort::shared::smallsort::insertion_sort_shift_left::h52ccfae505388aca(v376, v405, 1, v320);
  }
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384();
  v126 = v123;
  if ( *(_BYTE *)(v123 + 16) == 1 )
  {
    v127 = *(_QWORD *)v123;
    v128 = *(_QWORD *)(v126 + 8);
  }
  else
  {
    v127 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(
             &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
             v121,
             v124,
             v125);
    *(_QWORD *)v126 = v127;
    *(_QWORD *)(v126 + 8) = v128;
    *(_BYTE *)(v126 + 16) = 1;
  }
  *(_QWORD *)v126 = v127 + 1;
  memset(&v321[2], 0, 24);
  *(_QWORD *)v321 = &xmmword_1015FBEC0;
  *(_QWORD *)&v321[8] = v127;
  *(_QWORD *)&v321[10] = v128;
  if ( v122 )
  {
    hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h6cca294c8f1b4c57(v321, v122, &v321[8], 1);
    v280 = 0;
    do
    {
      v281 = v376[v280];
      v282 = *(_QWORD *)(v281 + 32);
      v283 = v282 + *(_QWORD *)(v281 + 40);
      *(_QWORD *)v320 = 0;
      *(_QWORD *)&v320[10] = 0;
      *(_QWORD *)&v320[20] = v282;
      *(_QWORD *)&v320[22] = v283;
      _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h62ed965d1a9dd46c(
        v348,
        v320);
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(v321, v348);
      ++v280;
    }
    while ( v405 != v280 );
  }
  v348[5] = *(const __m128i **)&v321[10];
  v348[4] = *(const __m128i **)&v321[8];
  v348[3] = *(const __m128i **)&v321[6];
  v348[2] = *(const __m128i **)&v321[4];
  v348[1] = *(const __m128i **)&v321[2];
  v348[0] = *(const __m128i **)v321;
  v332 = (const __m128i *)i64;
  v333 = v120;
  v334 = v348;
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h181c7018e05d41c0(
    &v345,
    &v332);
  v129 = v346;
  v130 = v347;
  *(_QWORD *)v320 = &v395;
  v131 = v413;
  if ( v347 >= 2 )
  {
    if ( v347 >= 0x15 )
    {
      v131 = v413;
      core::slice::sort::stable::driftsort_main::hfaaecf57165269ff(v346, v347, v320);
    }
    else
    {
      core::slice::sort::shared::smallsort::insertion_sort_shift_left::h52ccfae505388aca(v346, v347, 1, v320);
      v131 = v413;
    }
  }
  v132 = v376;
  v133 = (char *)&v129[v130];
  *(_QWORD *)v320 = v129;
  *(_QWORD *)&v320[2] = v129;
  *(_QWORD *)&v320[4] = v345;
  *(_QWORD *)&v320[6] = v133;
  *(_QWORD *)&v320[8] = v376;
  *(_QWORD *)&v320[10] = v376;
  v316 = v351;
  *(_QWORD *)&v320[12] = v351;
  v315 = &v376[v405];
  *(_QWORD *)&v320[14] = v315;
  i64 = v345;
  v375 = 8 * v345;
  v134 = v131;
  v407 = v131;
  v135 = v129;
  v136 = v406;
  v399 = v133;
LABEL_176:
  v408 = v136;
  v394 = v134;
  v137 = v132;
  v138 = (char *)v129;
  v139 = v135;
  v140 = v315;
  while ( 1 )
  {
    while ( 1 )
    {
      if ( !v139 )
        goto LABEL_183;
      if ( v138 == v133 )
        break;
      v141 = v138 + 8;
      *(_QWORD *)&v320[2] = v138 + 8;
      v132 = v137;
      v142 = v138;
      v138 += 8;
      v143 = *(_QWORD **)v142;
      v144 = v143[5];
      if ( v144 )
        goto LABEL_185;
    }
    if ( i64 )
    {
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v135, v375, 8);
      v133 = (char *)v399;
    }
    *(_QWORD *)v320 = 0;
    v135 = nullptr;
LABEL_183:
    if ( v137 == v140 )
      break;
    v132 = v137 + 1;
    *(_QWORD *)&v320[10] = v137 + 1;
    v141 = v138;
    v139 = nullptr;
    v145 = v137++;
    v143 = (_QWORD *)*v145;
    v144 = v143[5];
    if ( v144 )
    {
LABEL_185:
      v328 = v135;
      v327 = v141;
      v146 = v143[4];
      v147 = (void *)v143[7];
      v356 = v143[8];
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h25e00c27ea0f6b28(
        &v366,
        v146,
        v146 + v144);
      v148 = v368;
      if ( !v368 )
      {
        v134 = v407;
        if ( (v407 & 0x8000000000000000LL) == 0LL )
        {
          if ( v407 )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v366, v146);
            v153 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v134, 1);
            if ( !v153 )
            {
              v330 = (char *)v134;
              v285 = 1;
              goto LABEL_322;
            }
          }
          else
          {
            v153 = 1;
          }
          v136 = (char *)v153;
          memcpy((void *)v153, v408, v134);
          v330 = v136;
          goto LABEL_273;
        }
        v285 = 0;
LABEL_322:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v285, v330);
      }
      v317 = v147;
      v357 = &off_101974A50;
      v149 = v407;
      v363 = (unsigned __int8 *)v408;
      v364 = (char *)v408 + v407;
      v365 = 0;
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h4f67827a2554d233(
        &v378,
        &v363);
      if ( v149 < 0 )
      {
        v208 = 0;
        goto LABEL_307;
      }
      if ( v149 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v378, &v363);
        v151 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v407, 1);
        if ( v151 )
        {
          v152 = v151;
          goto LABEL_195;
        }
        v329 = v407;
        v208 = 1;
LABEL_307:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v208, v329);
      }
      v152 = 1;
LABEL_195:
      v395 = (const __m128i *)v407;
      v396 = v152;
      v397 = 0;
      v401 = v380;
      v329 = v152;
      if ( !v380 )
      {
        v406 = (char *)v152;
        v390 = 0;
LABEL_264:
        v180 = 0;
        goto LABEL_268;
      }
      v362 = v367;
      v331 = &v367[v148];
      v405 = v379;
      v318 = v379 + 40;
      v406 = (char *)v152;
      v390 = 0;
      v154 = 0;
      v155 = 0;
      while ( 2 )
      {
        v392 = v155;
        while ( 2 )
        {
          if ( v154 )
          {
            v156 = *(_DWORD *)(v405 + 24 * v154 - 8);
            if ( (unsigned int)(v156 - 48) < 0xA || (v156 & 0xFFFFFFDF) - 65 < 0x1A )
              goto LABEL_198;
          }
          v157 = v154;
          v313 = 3 * v154;
          v158 = *(unsigned int *)(v405 + 24 * v154 + 16);
          v159 = *v362;
          if ( (_DWORD)v158 != *v362 )
          {
            core::unicode::unicode_data::conversions::to_lower::h2af512d1fec7c9a4(&v341, v158);
            v160 = 2LL - (HIDWORD(v341) == 0);
            if ( (_DWORD)v342 )
              v160 = 3;
            *(_QWORD *)v344 = 0;
            *(_QWORD *)&v344[2] = v160;
            v344[6] = v342;
            *(_QWORD *)&v344[4] = v341;
            core::unicode::unicode_data::conversions::to_lower::h2af512d1fec7c9a4(&v338, v159);
            v161 = 2LL - (HIDWORD(v338) == 0);
            if ( (_DWORD)v339 )
              v161 = 3;
            *(_QWORD *)v321 = 0;
            *(_QWORD *)&v321[2] = v161;
            v321[6] = v339;
            *(_QWORD *)&v321[4] = v338;
            v162 = _$LT$core..char..ToUppercase$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2279edf74aeac0d0(v344);
            v163 = _$LT$core..char..ToUppercase$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2279edf74aeac0d0(v321);
            if ( v162 == 1114112 )
            {
              if ( v163 != 1114112 )
                goto LABEL_198;
            }
            else if ( v162 != v163 )
            {
              goto LABEL_198;
            }
            if ( (unsigned int)_$LT$core..char..ToUppercase$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2279edf74aeac0d0(v344) != 1114112
              || (unsigned int)_$LT$core..char..ToUppercase$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h2279edf74aeac0d0(v321) != 1114112 )
            {
LABEL_198:
              if ( ++v154 >= v401 )
              {
                v155 = v392;
                goto LABEL_259;
              }
              continue;
            }
          }
          break;
        }
        v164 = 1;
        v165 = 0;
        v166 = v362;
        v167 = v154;
LABEL_214:
        v377 = v167 + 1;
        if ( (v165 & 1) != 0 )
        {
          if ( v166 == v331 )
            goto LABEL_236;
          goto LABEL_216;
        }
        if ( v164 < (unsigned __int64)((char *)v331 - (char *)v166) >> 2 )
        {
          v166 += v164;
LABEL_216:
          v154 = v157;
          if ( v377 >= v401 )
            goto LABEL_198;
          v319 = v166 + 1;
          v168 = (unsigned int *)(v318 + 24 * v167);
          v167 = v377;
          while ( 1 )
          {
            v170 = *v168;
            if ( *v168 - 9 >= 5 && v170 != 32 )
            {
              if ( v170 < 0x80 )
                goto LABEL_232;
              v171 = v170 >> 8;
              if ( v170 >> 8 > 0x1F )
              {
                if ( v171 == 32 )
                {
                  v169 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v170] >> 1;
                }
                else
                {
                  if ( v171 != 48 )
                  {
LABEL_232:
                    v172 = codexmate_lib::core::voice::workspace::char_eq_ci::hcfa7b9039f40d686(v170, *v166);
                    v165 = 1;
                    v164 = 0;
                    v166 = v319;
                    v154 = v157;
                    if ( !v172 )
                      goto LABEL_198;
                    goto LABEL_214;
                  }
                  v169 = v170 == 12288;
                }
              }
              else if ( v171 )
              {
                if ( v171 != 22 )
                  goto LABEL_232;
                v169 = v170 == 5760;
              }
              else
              {
                v169 = core::unicode::unicode_data::white_space::WHITESPACE_MAP::h382ce1dcc13c69e3[(unsigned __int8)v170];
              }
              if ( (v169 & 1) == 0 )
                goto LABEL_232;
            }
            ++v167;
            v168 += 6;
            v154 = v157;
            if ( v401 == v167 )
              goto LABEL_198;
          }
        }
LABEL_236:
        if ( v377 < v401 )
        {
          v154 = v157;
          v173 = *(_DWORD *)(v405 + 24 * v377 + 16);
          v166 = (unsigned int *)(unsigned int)(v173 - 48);
          if ( (unsigned int)v166 < 0xA || (v173 & 0xFFFFFFDF) - 65 < 0x1A )
            goto LABEL_198;
        }
        if ( v167 >= v401 )
          core::panicking::panic_bounds_check::h56740b1198b22635(v167, v401, &off_101974A68, v166);
        if ( v157 >= v401 )
          core::panicking::panic_bounds_check::h56740b1198b22635(v157, v401, &off_101974A38, v166);
        v174 = *(_QWORD *)(v405 + 8 * v313);
        v175 = v174 - v392;
        if ( v174 < v392 )
LABEL_440:
          core::str::slice_error_fail::h480e51fbd8b15eba(v408, v407, v392, v174, v357);
        v155 = *(_QWORD *)(v405 + 24 * v167 + 8);
        if ( v392 )
        {
          if ( v392 >= v407 )
          {
            if ( v392 != v407 )
              goto LABEL_440;
          }
          else if ( *((char *)v408 + v392) <= -65 )
          {
            goto LABEL_440;
          }
        }
        if ( v174 )
        {
          if ( v174 >= v407 )
          {
            if ( v174 != v407 )
              goto LABEL_440;
          }
          else if ( *((char *)v408 + v174) <= -65 )
          {
            goto LABEL_440;
          }
        }
        if ( v175 > (unsigned __int64)v395 - v390 )
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
            &v395,
            v390,
            v175,
            1,
            1,
            v150);
          v406 = (char *)v396;
          v390 = v397;
        }
        v176 = v390;
        memcpy(&v406[v390], (char *)v408 + v392, v175);
        v397 = v175 + v176;
        v178 = v175 + v176;
        if ( v356 > (unsigned __int64)v395 - v175 - v176 )
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
            &v395,
            v178,
            v356,
            1,
            1,
            v177);
          v178 = v397;
        }
        v406 = (char *)v396;
        v179 = v356;
        memcpy((void *)(v396 + v178), v317, v356);
        v390 = v179 + v178;
        v397 = v179 + v178;
        v154 = v377;
        if ( v377 < v401 )
          continue;
        break;
      }
LABEL_259:
      if ( !v155 )
        goto LABEL_264;
      if ( v155 >= v407 )
      {
        v180 = v407;
        if ( v155 != v407 )
        {
LABEL_439:
          v392 = v155;
          v174 = v407;
          v357 = &off_101974A20;
          goto LABEL_440;
        }
      }
      else
      {
        v180 = v155;
        if ( *((char *)v408 + v155) <= -65 )
          goto LABEL_439;
      }
LABEL_268:
      v181 = v390;
      v407 -= v180;
      if ( v407 > (unsigned __int64)v395 - v390 )
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
          &v395,
          v390,
          v407,
          1,
          1,
          v150);
        v136 = (char *)v396;
        v181 = v397;
      }
      else
      {
        v136 = v406;
      }
      memcpy(&v136[v181], (char *)v408 + v180, v407);
      v134 = (size_t)v395;
      if ( v378 )
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v379, 24 * v378, 8);
      v407 += v181;
LABEL_273:
      if ( v366 )
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v367, 4 * v366, 4);
      v129 = v327;
      v133 = (char *)v399;
      v135 = v328;
      if ( v394 )
      {
        *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v408, v394, 1);
        v135 = v328;
        v133 = (char *)v399;
        v129 = v327;
      }
      goto LABEL_176;
    }
  }
  if ( v316 )
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v376, 8 * v316, 8);
  v310[0] = v394;
  v310[1] = v408;
  v187 = v407;
  v310[2] = v407;
  HIDWORD(_RAX) = HIDWORD(v348[1]);
  if ( v348[1] )
  {
    i64 = (__int64)v348[1]->i64;
    v189 = v348[3];
    if ( v348[3] )
    {
      v190 = v348[0];
      si128 = _mm_load_si128(v348[0]);
      _R14D = ~_mm_movemask_epi8(si128);
      v192 = v348[0] + 1;
      do
      {
        if ( !(_WORD)_R14D )
        {
          do
          {
            si128 = _mm_load_si128(v192);
            v193 = _mm_movemask_epi8(si128);
            v190 -= 24;
            ++v192;
          }
          while ( v193 == 0xFFFF );
          _R14D = ~v193;
        }
        __asm { tzcnt   eax, r14d }
        v194 = -3 * _RAX;
        v195 = *((_QWORD *)&v190[-1] + v194 - 1);
        if ( v195 )
          *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v190[-1].i64[v194], v195, 1);
        v189 = (const __m128i *)((char *)v189 - 1);
        _RAX = _R14D & (unsigned int)(_R14D - 1);
        _R14D &= _R14D - 1;
      }
      while ( v189 );
    }
    v196 = (24 * i64 + 39) & 0xFFFFFFFFFFFFFFF0LL;
    v187 = v407;
    if ( v196 + i64 != -17 )
      *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v348[0] - v196, v196 + i64 + 17, 16);
  }
  if ( v369 )
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v370, v369, 1);
  alloc::str::_$LT$impl$u20$str$GT$::replace::h0711137c3db96933(
    (int)v320,
    v323[9],
    v323[10],
    (int)"{text}{selected}{clipboard}",
    6,
    (int)v408,
    v187);
  v197 = *(_QWORD *)&v320[2];
  alloc::str::_$LT$impl$u20$str$GT$::replace::h0711137c3db96933(
    (int)v321,
    v320[2],
    v320[4],
    (int)"{selected}{clipboard}",
    10,
    v393[0],
    __n);
  v198 = *(_QWORD *)&v321[2];
  alloc::str::_$LT$impl$u20$str$GT$::replace::h0711137c3db96933(
    (int)v344,
    v321[2],
    v321[4],
    (int)"{clipboard}",
    11,
    v358[0],
    (size_t)__src);
  if ( *(_QWORD *)v321 )
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v198, *(_QWORD *)v321, 1);
  if ( *(_QWORD *)v320 )
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v197, *(_QWORD *)v320, 1);
  v203 = *(int **)&v344[2];
  *(_QWORD *)v320 = 0;
  *(_QWORD *)&v320[2] = *(_QWORD *)&v344[4];
  *(_QWORD *)&v320[4] = *(_QWORD *)&v344[2];
  *(_QWORD *)&v320[6] = *(_QWORD *)&v344[4];
  *(_QWORD *)&v320[8] = 0;
  *(_QWORD *)&v320[10] = *(_QWORD *)&v344[4];
  *(_QWORD *)&v320[12] = 0xA0000000ALL;
  LOBYTE(v320[14]) = 1;
  LOWORD(v320[16]) = 0;
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h65d289e0da49e4b6(
    v348,
    v320,
    v199,
    v200,
    v201,
    v202,
    v300);
  v204 = v348[1];
  v205 = v348[2];
  if ( v348[2] )
  {
    i64 = (__int64)v348[0]->i64;
    v206 = &v348[1][(__int64)v348[2]->i64 - 1].i64[1];
    while ( 1 )
    {
      core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(*(v206 - 1), *v206);
      if ( v207 )
        break;
      v206 -= 2;
      v205 = (const __m128i *)((char *)v205 - 1);
      if ( !v205 )
      {
        v205 = nullptr;
        break;
      }
    }
    v348[2] = v205;
  }
  else
  {
    v205 = nullptr;
  }
  v209 = v321;
  alloc::str::join_generic_copy::ha9d2732844b8793d(
    v321,
    v204,
    v205,
    "\n"
    "struct RegistryFilestruct RegistryItemstruct HotspotConfigstruct AutoSwitchConfigstruct CodexMateSettingsstruct Myst"
    "eryRouteGrantstruct AutoSwitchSnoozeRecordstruct VoiceWorkspaceFilestruct RuntimeCache",
    1);
  v405 = *(_QWORD *)v321;
  v399 = *(void **)&v321[2];
  v210 = *(_QWORD *)&v321[4];
  if ( v348[0] )
  {
    v209 = (int *)v204;
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v204, 16 * (__int64)v348[0]->i64, 8);
  }
  v211 = *(_QWORD *)v344;
  if ( *(_QWORD *)v344 )
  {
    v209 = v203;
    *(double *)si128.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v203, *(_QWORD *)v344, 1);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v209, v211);
  v212 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
  if ( !v212 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
  *(_QWORD *)v212 = 0x6574656C706D6F63LL;
  *(_BYTE *)(v212 + 8) = 100;
  v385 = 9;
  v386 = v212;
  v387 = 9;
  v381 = 0x8000000000000000LL;
  if ( BYTE1(v324)
    && (i64 = v212,
        v213 = v323[9],
        v214 = v323[10],
        core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v323[9], v323[10]),
        v215) )
  {
    if ( a3[13].i64[0] == 0x8000000000000000LL )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v213, v214);
      v216 = 11;
      v217 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
      if ( v217 )
      {
        v218 = (__int64)v217;
        qmemcpy(v217, "llm_missing", 11);
        v219 = (const __m128i *)i64;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(i64, 9, 1);
        v385 = 11;
        v386 = v218;
        v387 = 11;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v219, 9);
        v216 = 46;
        v220 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(46, 1);
        if ( v220 )
        {
          qmemcpy(v220, "LLM config is missing; used raw dictation text", 46);
          v221 = 46;
          goto LABEL_329;
        }
      }
LABEL_435:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v216);
    }
    if ( (unsigned __int8)codexmate_lib::core::voice::llm::LlmConfig::is_configured::h23c56cc13cc1dc96(a3[13].i64) )
    {
      if ( v411 )
        codexmate_lib::core::voice::llm::call_llm_streaming::h7ee9e798df91cf33(
          v320,
          (const __m128i *)a3[13].i64,
          v399,
          v210,
          v411,
          v410,
          *(double *)si128.i64,
          *(double *)a7.i64);
      else
        codexmate_lib::core::voice::llm::call_llm::h6022ef50e8dbad9a(
          v320,
          (const __m128i *)a3[13].i64,
          v399,
          v210,
          *(double *)si128.i64,
          *(double *)a7.i64);
      if ( v320[0] == 1 )
      {
        v225 = *(_QWORD *)&v320[2];
        v226 = *(char **)&v320[4];
        v227 = *(_QWORD *)&v320[6];
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v320, &a3[13]);
        v228 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
        if ( !v228 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
        v229 = v228;
        *(_QWORD *)v228 = 0x6F7272655F6D6C6CLL;
        *(_BYTE *)(v228 + 8) = 114;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(i64, 9, 1);
        v385 = 9;
        v386 = v229;
        v387 = 9;
        v381 = v225;
        v382 = v226;
        v383 = v227;
        v230 = _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v372, v310);
      }
      else
      {
        v231 = *(_QWORD *)&v320[4];
        v232 = *(_QWORD *)&v320[6];
        v233 = *(_QWORD *)&v320[4];
        core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(*(_QWORD *)&v320[4], *(_QWORD *)&v320[6]);
        if ( v234 )
        {
          v374 = *(_QWORD *)&v320[6];
          LODWORD(v230) = v320[2];
          v373 = *(void **)&v320[4];
          v372 = *(_QWORD *)&v320[2];
        }
        else
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v233, v232);
          v235 = 9;
          v236 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
          if ( !v236 )
            goto LABEL_442;
          v237 = v236;
          *(_QWORD *)v236 = 0x6F7272655F6D6C6CLL;
          *(_BYTE *)(v236 + 8) = 114;
          v238 = (const __m128i *)i64;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(i64, 9, 1);
          v385 = 9;
          v386 = v237;
          v387 = 9;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v238, 9);
          v235 = 27;
          v239 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(27, 1);
          if ( !v239 )
LABEL_442:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v235);
          qmemcpy(v239, "LLM returned empty response", 27);
          v381 = 27;
          v382 = v239;
          v383 = 27;
          v230 = _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v372, v310);
          if ( *(_QWORD *)&v320[2] )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v231, *(_QWORD *)&v320[2], 1);
        }
      }
      LOBYTE(v230) = 1;
      LODWORD(v411) = v230;
    }
    else
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&a3[13], v214);
      v216 = 11;
      v222 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
      if ( !v222 )
        goto LABEL_435;
      v223 = (__int64)v222;
      qmemcpy(v222, "llm_missing", 11);
      v224 = (const __m128i *)i64;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(i64, 9, 1);
      v385 = 11;
      v386 = v223;
      v387 = 11;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v224, 9);
      v216 = 49;
      v220 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(49, 1);
      if ( !v220 )
        goto LABEL_435;
      qmemcpy(v220, "LLM config is incomplete; used raw dictation text", 49);
      v221 = 49;
LABEL_329:
      v381 = v221;
      v382 = v220;
      v383 = v221;
      LOBYTE(v220) = 1;
      LODWORD(v411) = (_DWORD)v220;
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v372, v310);
    }
  }
  else
  {
    v372 = v405;
    v373 = v399;
    v374 = v210;
    LODWORD(v411) = 0;
  }
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(v344);
  v348[0] = nullptr;
  v348[1] = (const __m128i *)1;
  v348[2] = nullptr;
  *(_QWORD *)&v320[4] = 1610612768;
  *(_QWORD *)v320 = v348;
  *(_QWORD *)&v320[2] = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107;
  if ( (unsigned __int8)uuid::fmt::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$uuid..Uuid$GT$::fmt::h318954c16e5fd96c(
                          v344,
                          v320) )
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
      55,
      &v395,
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
  v240 = v348[0];
  v241 = v348[1];
  if ( v348[2] <= (const __m128i *)8 )
  {
    if ( v348[2] != (const __m128i *)8 )
LABEL_344:
      core::str::slice_error_fail::h480e51fbd8b15eba(v348[1], v348[2], 0, 8, &off_1019749F0);
  }
  else if ( v348[1]->i8[8] < -64 )
  {
    goto LABEL_344;
  }
  v395 = v348[1];
  v396 = 8;
  v348[0] = (const __m128i *)&v395;
  v348[1] = (const __m128i *)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v320, &unk_1017CBF17, v348);
  if ( v240 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v241, v240, 1);
  v410 = *(_QWORD *)v320;
  v242 = *(_QWORD *)&v320[4];
  v401 = *(_QWORD *)&v320[2];
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v378, &v322);
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v363, &v323[2]);
  v243 = v413;
  v244 = BYTE1(v324);
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v395, &v323[8]);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v395, &v323[8]);
  v245 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v243, 1);
  if ( !v245 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v243);
  v406 = v245;
  memcpy(v245, exception_object[0], v243);
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v344, &v372);
  v246 = (int *)v348;
  v247 = &v385;
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v348, &v385);
  if ( v381 == 0x8000000000000000LL )
  {
    i64 = 0x8000000000000000LL;
  }
  else
  {
    v246 = v320;
    v247 = (__int64 *)&v381;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v320, &v381);
    i64 = *(_QWORD *)v320;
    v407 = *(_QWORD *)&v320[2];
    v362 = *(unsigned int **)&v320[4];
  }
  *(__m128i *)exception_object = _mm_loadu_si128(a3);
  v375 = v311[0];
  v248 = v311[1];
  v249 = v311[2];
  v366 = std::time::SystemTime::now::h1fe79e41f9d5677f(v246, v247);
  LODWORD(v367) = v250;
  std::time::SystemTime::duration_since::had059553cab94f96(v320, &v366, 0, 0);
  if ( LOBYTE(v320[0]) )
    v251 = 0;
  else
    v251 = *(_QWORD *)&v320[2];
  v252 = _mm_load_si128((const __m128i *)exception_object);
  *(_QWORD *)&v321[4] = v410;
  *(_QWORD *)&v321[6] = v401;
  *(_QWORD *)&v321[8] = v242;
  *(_QWORD *)&v321[10] = v378;
  *(_QWORD *)&v321[12] = v379;
  *(_QWORD *)&v321[14] = v380;
  *(_QWORD *)&v321[16] = v363;
  *(_QWORD *)&v321[18] = v364;
  *(_QWORD *)&v321[20] = v365;
  LOBYTE(v321[108]) = v244;
  *(_QWORD *)&v321[26] = v397;
  *(_QWORD *)&v321[24] = v396;
  *(_QWORD *)&v321[22] = v395;
  *(_QWORD *)&v321[28] = v413;
  *(_QWORD *)&v321[30] = v406;
  *(_QWORD *)&v321[32] = v413;
  *(_QWORD *)&v321[38] = *(_QWORD *)&v344[4];
  *(_QWORD *)&v321[36] = *(_QWORD *)&v344[2];
  *(_QWORD *)&v321[34] = *(_QWORD *)v344;
  *(_QWORD *)&v321[40] = __n;
  *(_QWORD *)&v321[42] = *(_QWORD *)v393;
  *(_QWORD *)&v321[44] = __n;
  *(_QWORD *)&v321[46] = __src;
  *(_QWORD *)&v321[48] = *(_QWORD *)v358;
  *(_QWORD *)&v321[50] = __src;
  *(_QWORD *)&v321[52] = v400;
  *(_QWORD *)&v321[54] = v359;
  *(_QWORD *)&v321[56] = v400;
  *(_QWORD *)&v321[58] = v391;
  *(_QWORD *)&v321[60] = v355;
  *(_QWORD *)&v321[62] = v391;
  *(const __m128i **)&v321[68] = v348[2];
  *(const __m128i **)&v321[66] = v348[1];
  *(const __m128i **)&v321[64] = v348[0];
  *(_QWORD *)&v321[94] = i64;
  *(_QWORD *)&v321[96] = v407;
  *(_QWORD *)&v321[98] = v362;
  *(_QWORD *)&v321[70] = v398;
  *(_QWORD *)&v321[72] = v361;
  *(_QWORD *)&v321[74] = v325;
  *(_QWORD *)&v321[76] = v388;
  *(_QWORD *)&v321[78] = v384;
  *(_QWORD *)&v321[80] = v326;
  *(_QWORD *)&v321[82] = v389;
  *(_QWORD *)&v321[84] = v354;
  *(_QWORD *)&v321[86] = v312;
  *(_QWORD *)&v321[88] = v360;
  *(_QWORD *)&v321[90] = v402;
  *(_QWORD *)&v321[92] = v314;
  *(__m128i *)v321 = v252;
  *(_QWORD *)&v321[100] = v375;
  *(_QWORD *)&v321[102] = v248;
  *(_QWORD *)&v321[104] = v249;
  *(_QWORD *)&v321[106] = v251;
  codexmate_lib::core::voice::workspace::lock_voice_workspace_write::h4d6db098030bc119(v320);
  v9 = v409;
  v253 = *(_QWORD *)v320;
  v254 = *(_QWORD **)&v320[2];
  v255 = v320[4];
  if ( *(_QWORD *)v320 != 11 )
  {
    memcpy((char *)v409 + 25, (char *)&v320[4] + 1, 0x4Fu);
    v9[1] = v253;
    v9[2] = v254;
    *((_BYTE *)v9 + 24) = v255;
    *v9 = 2;
    goto LABEL_398;
  }
  v256 = v320[4];
  codexmate_lib::core::voice::workspace::read_workspace_file::h3fcc1022bf4267c6(v320, v403);
  v257 = *(_QWORD *)v320;
  qmemcpy(v344, &v320[2], sizeof(v344));
  if ( *(_QWORD *)v320 == 0x8000000000000000LL )
  {
    qmemcpy(v9 + 1, v344, 0x60u);
    v259 = (int *)&v345;
    v258 = (const __m128i **)(v9 + 13);
    *v9 = 2;
LABEL_395:
    if ( (v256 & 1) == 0
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v258,
                             v259,
                             v257,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *((_BYTE *)v254 + 8) = 1;
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v254);
LABEL_398:
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..VoiceHistoryEntry$GT$::h511d12a3e26047e3(v321);
    if ( v372 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v373, v372, 1);
    v279 = v394;
    if ( v381 != 0x8000000000000000LL && v381 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v382, v381, 1);
    if ( v385 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v386, v385, 1);
    if ( ((v405 != 0) & (unsigned __int8)v411) != 0 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v399, v405, 1);
    if ( v279 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v408, v279, 1);
    if ( v322 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v323[0], v322, 1);
    if ( v323[2] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v323[3], v323[2], 1);
    if ( v323[5] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v323[6], v323[5], 1);
    if ( v323[8] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v323[9], v323[8], 1);
    v10 = 0;
LABEL_16:
    core::ptr::drop_in_place$LT$codexmate_lib..core..voice..workspace..VoiceWorkspaceFile$GT$::hfe85bcf4beb87dbc(&v302);
LABEL_17:
    v22 = a3[1].i64[0];
    if ( v22 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[1].i64[1], v22, 1);
    v23 = a3[2].i64[1];
    if ( v23 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[3].i64[0], v23, 1);
    if ( v10 )
    {
      v24 = a3[4].i64[0];
      if ( v24 != 0x8000000000000000LL && v24 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[4].i64[1], v24, 1);
      v25 = a3[5].i64[1];
      if ( v25 != 0x8000000000000000LL && v25 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[6].i64[0], v25, 1);
      v26 = a3[7].i64[0];
      if ( v26 != 0x8000000000000000LL && v26 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[7].i64[1], v26, 1);
      v27 = a3[8].i64[1];
      if ( v27 != 0x8000000000000000LL && v27 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[9].i64[0], v27, 1);
    }
    v28 = a3[10].i64[0];
    if ( v28 != 0x8000000000000000LL && v28 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[10].i64[1], v28, 1);
    v29 = a3[11].i64[1];
    if ( v29 != 0x8000000000000000LL && v29 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[12].i64[0], v29, 1);
    v30 = a3[13].i64[0];
    if ( v30 != 0x8000000000000000LL )
    {
      if ( v30 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[13].i64[1], v30, 1);
      v31 = a3[14].i64[1];
      if ( v31 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[15].i64[0], v31, 1);
      v32 = a3[16].i64[0];
      if ( v32 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[16].i64[1], v32, 1);
      v33 = a3[17].i64[1];
      if ( v33 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[18].i64[0], v33, 1);
    }
    if ( v10 )
    {
      v34 = a3[19].i64[0];
      if ( v34 != 0x8000000000000000LL && v34 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[19].i64[1], v34, 1);
      v35 = a3[20].i64[1];
      if ( v35 != 0x8000000000000000LL && v35 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[21].i64[0], v35, 1);
      v36 = a3[22].i64[0];
      if ( v36 != 0x8000000000000000LL && v36 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[22].i64[1], v36, 1);
      v37 = a3[23].i64[1];
      if ( v37 != 0x8000000000000000LL && v37 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[24].i64[0], v37, 1);
      v38 = a3[25].i64[0];
      if ( v38 != 0x8000000000000000LL && v38 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[25].i64[1], v38, 1);
    }
  }
  else
  {
    v350 = *(_QWORD *)&v320[34];
    v349 = *(_QWORD *)&v320[32];
    v348[15] = *(const __m128i **)&v320[30];
    v348[14] = *(const __m128i **)&v320[28];
    v348[13] = *(const __m128i **)&v320[26];
    qmemcpy(&v348[1], v344, 0x60u);
    v348[0] = *(const __m128i **)v320;
    v413 = (size_t)v254;
    LOBYTE(v410) = v255;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v309, &v321[4]);
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v308, &v321[10]);
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v307, &v321[16]);
    v260 = v321[108];
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v306, &v321[22]);
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v341, &v321[28]);
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v338, &v321[34]);
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v369, &v321[40]);
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v351, &v321[46]);
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v335, &v321[52]);
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v345, &v321[58]);
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v332, &v321[64]);
    if ( *(_QWORD *)&v321[94] == 0x8000000000000000LL )
    {
      i64 = 0x8000000000000000LL;
    }
    else
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v344, &v321[94]);
      i64 = *(_QWORD *)v344;
      v401 = *(_QWORD *)&v344[2];
      v254 = *(_QWORD **)&v344[4];
    }
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v366, &v321[70]);
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v378, &v321[76]);
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v363, &v321[82]);
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v395, &v321[88]);
    v261 = *(_QWORD *)v321;
    v262 = *(_QWORD *)&v321[2];
    v263 = 0x8000000000000000LL;
    if ( *(_QWORD *)&v321[100] != 0x8000000000000000LL )
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v344, &v321[100]);
      v263 = *(_QWORD *)v344;
      v304 = *(_QWORD *)&v344[2];
      v305 = *(_QWORD *)&v344[4];
    }
    *(_QWORD *)&v320[4] = v309[0];
    *(_QWORD *)&v320[6] = v309[1];
    *(_QWORD *)&v320[8] = v309[2];
    *(_QWORD *)&v320[10] = v308[0];
    *(_QWORD *)&v320[12] = v308[1];
    *(_QWORD *)&v320[14] = v308[2];
    *(_QWORD *)&v320[16] = v307[0];
    *(_QWORD *)&v320[18] = v307[1];
    *(_QWORD *)&v320[20] = v307[2];
    LOBYTE(v320[108]) = v260;
    *(_QWORD *)&v320[22] = v306[0];
    *(_QWORD *)&v320[24] = v306[1];
    *(_QWORD *)&v320[26] = v306[2];
    *(_QWORD *)&v320[28] = v341;
    *(_QWORD *)&v320[30] = v342;
    *(_QWORD *)&v320[32] = v343;
    *(_QWORD *)&v320[34] = v338;
    *(_QWORD *)&v320[36] = v339;
    *(_QWORD *)&v320[38] = v340;
    *(_QWORD *)&v320[44] = v371;
    *(_QWORD *)&v320[42] = v370;
    *(_QWORD *)&v320[40] = v369;
    *(_QWORD *)&v320[50] = v353;
    *(_QWORD *)&v320[48] = v352;
    *(_QWORD *)&v320[46] = v351;
    *(_QWORD *)&v320[56] = v337;
    *(_QWORD *)&v320[54] = v336;
    *(_QWORD *)&v320[52] = v335;
    *(_QWORD *)&v320[62] = v347;
    *(_QWORD *)&v320[60] = v346;
    *(_QWORD *)&v320[58] = v345;
    *(_QWORD *)&v320[68] = v334;
    *(_QWORD *)&v320[66] = v333;
    *(_QWORD *)&v320[64] = v332;
    *(_QWORD *)&v320[94] = i64;
    *(_QWORD *)&v320[96] = v401;
    *(_QWORD *)&v320[98] = v254;
    *(_QWORD *)&v320[74] = v368;
    *(_QWORD *)&v320[72] = v367;
    *(_QWORD *)&v320[70] = v366;
    *(_QWORD *)&v320[80] = v380;
    *(_QWORD *)&v320[78] = v379;
    *(_QWORD *)&v320[76] = v378;
    *(_QWORD *)&v320[86] = v365;
    *(_QWORD *)&v320[84] = v364;
    *(_QWORD *)&v320[82] = v363;
    *(_QWORD *)&v320[92] = v397;
    *(_QWORD *)&v320[90] = v396;
    *(_QWORD *)&v320[88] = v395;
    *(_QWORD *)v320 = v261;
    *(_QWORD *)&v320[2] = v262;
    *(_QWORD *)&v320[100] = v263;
    *(_QWORD *)&v320[104] = v305;
    *(_QWORD *)&v320[102] = v304;
    *(_QWORD *)&v320[106] = *(_QWORD *)&v321[106];
    v264 = (unsigned __int64)v348[11];
    if ( v348[11] == v348[9] )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h92bfd5ff6f17080d(&v348[9]);
    v265 = (__m128i *)v348[10];
    v266 = v403;
    v254 = (_QWORD *)v413;
    if ( v264 )
    {
      memmove(&v348[10][27].u64[1], v348[10], 440 * v264);
      v267 = v265;
      memcpy(v265, v320, 0x1B8u);
      v348[11] = (const __m128i *)(v264 + 1);
      if ( v264 >= 0x27 )
      {
        v348[11] = (const __m128i *)40;
        v268 = (char *)(v264 - 39);
        if ( v268 )
        {
          v269 = v265 + 1100;
          do
          {
            v267 = v269;
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..VoiceHistoryEntry$GT$::h511d12a3e26047e3(v269);
            v269 = (const __m128i *)((char *)v269 + 440);
            --v268;
          }
          while ( v268 );
        }
      }
    }
    else
    {
      v267 = v348[10];
      memcpy((void *)v348[10], v320, 0x1B8u);
      v348[11] = (const __m128i *)1;
    }
    LODWORD(v350) = 1;
    v256 = v410;
    v270 = std::time::SystemTime::now::h1fe79e41f9d5677f(v267, v320);
    v9 = v409;
    *(_QWORD *)v344 = v270;
    v344[2] = v271;
    std::time::SystemTime::duration_since::had059553cab94f96(v320, v344, 0, 0);
    if ( LOBYTE(v320[0]) )
      v272 = 0;
    else
      v272 = *(_QWORD *)&v320[2];
    v349 = v272;
    codexmate_lib::core::voice::workspace::sort_workspace::ha9838581ed593335(v348);
    codexmate_lib::core::voice::workspace::write_workspace_file::hda812925c979e5b7(v320, v266, v348);
    if ( v320[0] != 11 )
    {
      qmemcpy(v9 + 1, v320, 0x60u);
      v259 = &v320[24];
      *v9 = 2;
      v258 = v348;
      core::ptr::drop_in_place$LT$codexmate_lib..core..voice..workspace..VoiceWorkspaceFile$GT$::hfe85bcf4beb87dbc(v348);
      goto LABEL_395;
    }
    v273 = *(_QWORD *)(v266 + 536);
    codexmate_lib::core::voice::workspace::to_payload::h61bf235998727f47(
      v301,
      v273,
      *(_QWORD *)(v266 + 544),
      (__int64)v348);
    core::ptr::drop_in_place$LT$codexmate_lib..core..voice..workspace..VoiceWorkspaceFile$GT$::hfe85bcf4beb87dbc(v348);
    if ( (v256 & 1) == 0
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
    {
      v284 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v348, v273, v274, 0x7FFFFFFFFFFFFFFFLL);
      v254 = (_QWORD *)v413;
      if ( !v284 )
        *(_BYTE *)(v413 + 8) = 1;
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v254);
    *(_QWORD *)&v320[114] = v374;
    *(_QWORD *)&v320[112] = v373;
    *(_QWORD *)&v320[110] = v372;
    memcpy(v320, v321, 0x1B8u);
    *(_QWORD *)&v320[148] = v385;
    *(_QWORD *)&v320[150] = v386;
    *(_QWORD *)&v320[152] = v387;
    *(_QWORD *)&v320[154] = v381;
    *(_QWORD *)&v320[156] = v382;
    *(_QWORD *)&v320[158] = v383;
    qmemcpy(&v320[116], v301, 0x80u);
    memcpy(v9, v320, 0x280u);
    if ( ((v405 != 0) & (unsigned __int8)v411) != 0 )
      *(double *)v252.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v399, v405, 1);
    if ( v394 )
      *(double *)v252.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v408, v394, 1);
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..VoicePromptTemplate$GT$::h7a11b6da4c4872f2(
      &v322,
      *(double *)v252.i64);
    core::ptr::drop_in_place$LT$codexmate_lib..core..voice..workspace..VoiceWorkspaceFile$GT$::hfe85bcf4beb87dbc(&v302);
    v275 = a3[1].i64[0];
    if ( v275 )
      *(double *)v252.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[1].i64[1], v275, 1);
    v276 = a3[2].i64[1];
    if ( v276 )
      *(double *)v252.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[3].i64[0], v276, 1);
    v277 = a3[10].i64[0];
    if ( v277 != 0x8000000000000000LL && v277 )
      *(double *)v252.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[10].i64[1], v277, 1);
    v278 = a3[11].i64[1];
    if ( v278 != 0x8000000000000000LL && v278 )
      *(double *)v252.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[12].i64[0], v278, 1);
    core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..voice..llm..LlmConfig$GT$$GT$::h4f1af29e286a972d(
      &a3[13],
      *(double *)v252.i64);
    return v409;
  }
  return v9;
}
