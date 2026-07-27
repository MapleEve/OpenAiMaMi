// __ZN13codexmate_lib4core5relay5quota11fetch_async28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1000da9c0 | 基线 same-set
// [FULL IDA decompiler]

char __fastcall codexmate_lib::core::relay::quota::fetch_async::_$u7b$$u7b$closure$u7d$$u7d$::h45e00fe395ffd5b2(
        _QWORD *__dst,
        __int64 a2,
        __int64 a3,
        double a4)
{
  __int64 v4; // rbx
  _QWORD *v5; // r12
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // r13
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // r14
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // r12
  char v19; // r15
  char result; // al
  __int64 v21; // rax
  _QWORD *v22; // r13
  __int64 v23; // rbx
  __int64 v24; // r14
  __int64 v25; // r15
  __int64 v26; // rax
  __int64 v27; // rcx
  char v28; // r13
  __int64 v29; // rax
  __int64 v30; // r14
  __int64 v31; // r12
  __int64 v32; // r15
  __int64 v33; // r8
  unsigned __int16 v34; // r12
  __int16 v35; // r14
  __int64 v36; // r15
  unsigned __int64 v37; // rsi
  int v38; // eax
  __int64 v39; // rdi
  unsigned __int64 v40; // r14
  __int16 v41; // cx
  int v42; // edx
  unsigned __int64 v43; // rsi
  __int64 v44; // r13
  int v45; // eax
  __int64 v46; // rdi
  __int64 v47; // rsi
  __int16 v48; // r13
  int v49; // r14d
  char v50; // of
  __int64 v51; // rt0
  __int64 v52; // rax
  __int64 v53; // rdx
  __int16 v54; // r13
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rcx
  __int64 v59; // rsi
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // r14
  __int64 v63; // r13
  __int64 v64; // rsi
  __int64 v65; // rsi
  __int64 v66; // rax
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rsi
  __int64 v70; // rsi
  __int64 v71; // rdi
  int v72; // eax
  unsigned __int64 v73; // r14
  __int64 v74; // rax
  __int64 v75; // rax
  _QWORD *v76; // rax
  __int64 v77; // rax
  __int64 v78; // rax
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // rax
  __int64 v82; // rax
  _QWORD **v83; // rdi
  __int64 v84; // rsi
  __int64 v85; // rax
  void *v86; // rax
  __int64 v87; // r14
  __int64 v88; // rax
  unsigned __int64 v89; // r15
  __int64 v90; // rax
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rax
  __int64 v94; // rcx
  __int64 v95; // r13
  unsigned __int64 v96; // r14
  __int64 v97; // rsi
  __int16 v98; // r13
  unsigned __int64 v99; // r15
  __int64 *v100; // r12
  __int64 v101; // rax
  __int64 v102; // rax
  bool v103; // bl
  unsigned __int64 **v104; // rdi
  __int64 v105; // rsi
  bool v106; // zf
  _QWORD *v107; // r12
  void *v108; // rax
  __int64 v109; // rsi
  unsigned __int64 v110; // r14
  __int64 *v111; // r12
  __int64 v112; // r14
  __int64 v113; // r15
  __int64 v114; // rax
  __int64 v115; // rax
  __int64 v116; // rcx
  __int64 v117; // rdx
  __int64 v118; // rsi
  __int64 v119; // rsi
  char v120; // r15
  char v121; // al
  char v122; // r13
  __int64 v123; // r14
  __int64 v124; // rdx
  signed __int64 v125; // r12
  int v126; // eax
  __int64 v127; // rdi
  __int64 v128; // rsi
  __int64 v129; // r12
  __int64 v130; // r14
  __int64 v131; // rsi
  __int64 v132; // rsi
  __int64 v133; // r14
  __int64 v134; // rsi
  char v135; // r14
  char v136; // r13
  signed __int64 v137; // r12
  __int64 v138; // r15
  int v139; // eax
  unsigned __int64 v140; // r15
  void *v141; // r12
  __int64 v142; // r13
  int v143; // eax
  char v144; // r15
  char v145; // r13
  __int64 v146; // rdx
  signed __int64 v147; // r12
  int v148; // eax
  __int64 v149; // rdi
  __int64 v150; // rsi
  __int64 v151; // r12
  __int64 v152; // r14
  char v153; // r14
  char v154; // r13
  signed __int64 v155; // r12
  __int64 v156; // r15
  int v157; // eax
  int v158; // eax
  __m128i v159; // xmm0
  signed __int64 v160; // rt0
  __int64 v161; // rsi
  char v162; // r15
  char v163; // r13
  __int64 v164; // rdx
  signed __int64 v165; // r12
  int v166; // eax
  __int64 v167; // rdi
  __int64 v168; // rsi
  __int64 v169; // r12
  __int64 v170; // r14
  __int64 v171; // r12
  __int64 v172; // r14
  __int64 v173; // r12
  __int64 v174; // r14
  __int64 v175; // r12
  __int64 v176; // r14
  __int64 v177; // r12
  __int64 v178; // r14
  __int64 v179; // r15
  __int64 v180; // rsi
  _QWORD *v181; // r14
  double v182; // rax
  __int64 (__fastcall **v183)(); // r12
  __int64 *v184; // r14
  __int64 v185; // rax
  unsigned __int8 *v186; // rax
  unsigned __int8 *v187; // rdi
  char v188; // al
  unsigned __int8 *v189; // rax
  __int64 v190; // r14
  double v191; // rax
  __int64 v192; // r12
  __int64 v193; // r14
  __int64 v194; // r15
  __int64 v195; // rax
  __int64 v196; // rax
  __int64 v197; // r14
  unsigned __int8 *v198; // rax
  unsigned __int8 v199; // al
  unsigned __int8 v200; // r15
  unsigned __int8 *v201; // rax
  unsigned __int64 *v202; // r14
  __int64 v203; // r15
  __int64 v204; // r12
  double v205; // rbx
  __int64 v206; // rax
  __int64 v207; // rcx
  unsigned __int8 *v208; // rdi
  __int64 v209; // rsi
  __int64 v210; // rax
  __int64 v211; // r14
  unsigned __int8 *v212; // rax
  unsigned __int8 v213; // al
  unsigned __int8 v214; // r15
  unsigned __int64 *v215; // r15
  __int64 v216; // r12
  __int64 v217; // rbx
  double v218; // r14
  __int64 v219; // rax
  __int64 v220; // rcx
  double v221; // r14
  unsigned __int8 *v222; // rdi
  char v223; // al
  __int64 v224; // r14
  double v225; // rax
  __int64 v226; // r12
  __int64 v227; // r14
  __int64 v228; // r13
  __int64 v229; // rax
  __int64 v230; // r13
  __int64 v231; // rsi
  _QWORD *v232; // r14
  double v233; // rax
  __int64 v234; // rcx
  __int64 v235; // rsi
  double v236; // rax
  double v237; // rax
  __int64 (__fastcall **v238)(); // r15
  __int64 v239; // r12
  __int64 v240; // rax
  void *v241; // rdx
  void *v242; // rcx
  __int64 v243; // r8
  __int64 (__fastcall **v244)(); // r12
  __int64 v245; // rsi
  _QWORD v246[12]; // [rsp+20h] [rbp-2D8h] BYREF
  _BYTE __src[136]; // [rsp+80h] [rbp-278h] BYREF
  _QWORD v248[3]; // [rsp+108h] [rbp-1F0h] BYREF
  __m128i v249; // [rsp+120h] [rbp-1D8h]
  void *v250; // [rsp+130h] [rbp-1C8h]
  __int64 v251; // [rsp+138h] [rbp-1C0h]
  _QWORD v252[7]; // [rsp+140h] [rbp-1B8h] BYREF
  _QWORD v253[7]; // [rsp+178h] [rbp-180h] BYREF
  __int64 v254; // [rsp+1B0h] [rbp-148h] BYREF
  __int64 v255; // [rsp+1B8h] [rbp-140h]
  __int64 v256; // [rsp+1C0h] [rbp-138h]
  __int64 v257; // [rsp+1C8h] [rbp-130h]
  __int64 v258; // [rsp+1D0h] [rbp-128h]
  unsigned __int64 *v259; // [rsp+1D8h] [rbp-120h]
  double v260; // [rsp+1E0h] [rbp-118h] BYREF
  __int64 (__fastcall *v261)(); // [rsp+1E8h] [rbp-110h]
  __int64 v262; // [rsp+1F0h] [rbp-108h]
  char *v263; // [rsp+1F8h] [rbp-100h]
  _DWORD v264[2]; // [rsp+200h] [rbp-F8h]
  unsigned __int64 *v265; // [rsp+208h] [rbp-F0h] BYREF
  __int64 v266; // [rsp+210h] [rbp-E8h]
  __int64 v267; // [rsp+218h] [rbp-E0h]
  __int64 v268; // [rsp+220h] [rbp-D8h] BYREF
  __int64 v269; // [rsp+228h] [rbp-D0h]
  __int64 v270; // [rsp+230h] [rbp-C8h]
  double v271; // [rsp+238h] [rbp-C0h]
  unsigned __int64 v272; // [rsp+240h] [rbp-B8h] BYREF
  __int64 v273; // [rsp+248h] [rbp-B0h]
  double v274; // [rsp+250h] [rbp-A8h]
  __m128i inserted; // [rsp+258h] [rbp-A0h] BYREF
  _QWORD *v276; // [rsp+268h] [rbp-90h] BYREF
  __int64 (__fastcall **v277)(); // [rsp+270h] [rbp-88h]
  __int64 v278; // [rsp+278h] [rbp-80h]
  __m128i v279; // [rsp+280h] [rbp-78h] BYREF
  void *v280; // [rsp+290h] [rbp-68h]
  __int64 v281; // [rsp+298h] [rbp-60h]
  __int64 v282; // [rsp+2A0h] [rbp-58h]
  _QWORD *v283; // [rsp+2A8h] [rbp-50h]
  char v284; // [rsp+2B7h] [rbp-41h] BYREF
  __int64 v285; // [rsp+2B8h] [rbp-40h]
  double v286; // [rsp+2C0h] [rbp-38h]
  __int64 v287; // [rsp+2C8h] [rbp-30h]

  v4 = a2;
  v5 = __dst;
  switch ( *(_BYTE *)(a2 + 241) )
  {
    case 0:
      v286 = *(double *)&a3;
      *(_BYTE *)(a2 + 240) = 0;
      v6 = *(_QWORD *)(a2 + 232);
      *(_QWORD *)(a2 + 112) = v6;
      codexmate_lib::core::relay::quota::sanitize_api_key::ha0d250b7c26b097d(
        a2 + 120,
        *(_QWORD *)(v6 + 80),
        *(_QWORD *)(v6 + 88));
      v7 = *(_QWORD *)(a2 + 112);
      if ( *(_QWORD *)(v4 + 136) )
      {
        codexmate_lib::core::relay::quota::parse_extra_headers::h2a52b95440049bf1(
          v246,
          *(_QWORD *)(v7 + 152),
          *(_QWORD *)(v7 + 160));
        if ( LODWORD(v246[0]) == 3 )
        {
          v8 = v246[1];
          v9 = v246[2];
          codexmate_lib::core::relay::quota::failed::h9d0b337dcf953e67(
            __src,
            *(_QWORD *)(v4 + 112),
            &unk_1015DAA3B,
            11,
            &unk_1015DAA46,
            21,
            v246[2],
            v246[3]);
          if ( v8 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v8, 1);
          goto LABEL_235;
        }
        qmemcpy((void *)v4, v246, 0x60u);
        v50 = 0;
        if ( codexmate_lib::core::relay::quota::ASYNC_CLIENT::hc976b3cb65913581 )
          std::sync::once_lock::OnceLock$LT$T$GT$::initialize::hd24a7e10581bdbaa(&codexmate_lib::core::relay::quota::ASYNC_CLIENT::hc976b3cb65913581);
        v51 = _InterlockedIncrement64((volatile signed __int64 *)qword_1019FF1F8);
        if ( (v51 < 0) ^ v50 | (v51 == 0) )
          BUG();
        *(_QWORD *)(v4 + 144) = qword_1019FF1F8;
        v52 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(
                *(_QWORD *)(*(_QWORD *)(v4 + 112) + 56LL),
                *(_QWORD *)(*(_QWORD *)(v4 + 112) + 64LL));
        *(_QWORD *)(v4 + 96) = v52;
        *(_QWORD *)(v4 + 104) = v53;
        alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(v4 + 152, v52, v53);
        codexmate_lib::core::relay::quota::detect_official_provider::h3e1bed4e6d0516fe(
          &v254,
          *(_QWORD *)(v4 + 160),
          *(_QWORD *)(v4 + 168));
        v283 = __dst;
        v30 = v4 + 144;
        if ( (_BYTE)v258 != 11 )
        {
          *(_QWORD *)(v4 + 280) = v258;
          *(_QWORD *)(v4 + 272) = v257;
          *(_QWORD *)(v4 + 264) = v256;
          v55 = v254;
          *(_QWORD *)(v4 + 256) = v255;
          *(_QWORD *)(v4 + 248) = v55;
          v56 = *(_QWORD *)(v4 + 96);
          v57 = *(_QWORD *)(v4 + 104);
          v31 = *(_QWORD *)(v4 + 128);
          v32 = *(_QWORD *)(v4 + 136);
          v262 = v4 + 288;
          *(_QWORD *)(v4 + 288) = v56;
          *(_QWORD *)(v4 + 296) = v57;
          *(_QWORD *)(v4 + 304) = v31;
          *(_QWORD *)(v4 + 312) = v32;
          *(_QWORD *)(v4 + 320) = v30;
          *(_QWORD *)(v4 + 328) = v4;
          v58 = v255;
          *(_QWORD *)(v4 + 336) = v254;
          *(_QWORD *)(v4 + 344) = v58;
          *(_QWORD *)(v4 + 352) = v256;
          *(_QWORD *)(v4 + 360) = v257;
          *(_QWORD *)(v4 + 368) = v258;
          v263 = (char *)(v4 + 376);
          *(_BYTE *)(v4 + 376) = 0;
          v33 = v4;
          *(double *)&a3 = v286;
          switch ( *(_BYTE *)(v4 + 368) )
          {
            case 0:
              goto LABEL_39;
            case 1:
              goto LABEL_200;
            case 2:
              goto LABEL_185;
            case 3:
              goto LABEL_189;
            case 4:
              goto LABEL_174;
            case 5:
              goto LABEL_207;
            case 6:
              goto LABEL_214;
            case 7:
              goto LABEL_193;
            case 8:
              goto LABEL_238;
            case 9:
              goto LABEL_181;
            case 0xA:
              goto LABEL_221;
          }
        }
        if ( (unsigned __int8)core::str::_$LT$impl$u20$str$GT$::contains::h49b0d72e84cbe4ab(*(void **)(v4 + 160)) )
        {
          codexmate_lib::core::relay::quota::unsupported_known::h92d5f78f93820493(
            __src,
            *(_QWORD *)(v4 + 112),
            &unk_1015DA9F1,
            11,
            &unk_1015DA9FC,
            63);
          goto LABEL_230;
        }
        v11 = *(_QWORD *)(v4 + 96);
        v12 = *(_QWORD *)(v4 + 104);
        v13 = *(_QWORD *)(v4 + 128);
        v14 = *(_QWORD *)(v4 + 136);
        v262 = v4 + 248;
        v10 = v4 + 144;
        *(_QWORD *)(v4 + 248) = v30;
        *(_QWORD *)(v4 + 256) = v11;
        *(_QWORD *)(v4 + 264) = v12;
        *(_QWORD *)(v4 + 272) = v13;
        *(_QWORD *)(v4 + 280) = v14;
        *(_QWORD *)(v4 + 288) = v4;
        v263 = (char *)(v4 + 1088);
        *(_BYTE *)(v4 + 1088) = 0;
        v15 = v4;
LABEL_7:
        codexmate_lib::core::relay::quota::build_root_url::h9fbfb677ca1e6b74(v4 + 296, v11, v12, &unk_1015DA130, 16);
        v16 = *(_QWORD *)(v4 + 304);
        v17 = *(_QWORD *)(v4 + 312);
        *(_QWORD *)(v4 + 320) = v10;
        *(_QWORD *)(v4 + 328) = v16;
        *(_QWORD *)(v4 + 336) = v17;
        *(_QWORD *)(v4 + 344) = v13;
        *(_QWORD *)(v4 + 352) = v14;
        *(_QWORD *)(v4 + 360) = v15;
        *(_BYTE *)(v4 + 368) = 0;
        v18 = v283;
        codexmate_lib::core::relay::quota::get_json::_$u7b$$u7b$closure$u7d$$u7d$::h39c67e16790a7b5a(&v276, v4 + 320);
        v19 = (char)v276;
        if ( v276 == (_QWORD *)2 )
        {
          *v263 = 3;
LABEL_9:
          *v18 = 0x8000000000000000LL;
          result = 4;
          goto LABEL_243;
        }
        v283 = v18;
        v40 = (unsigned __int16)v277;
        v41 = WORD1(v277);
        v42 = HIDWORD(v277);
        v43 = v278;
        v44 = v279.i64[1];
        inserted.i64[0] = v279.i64[0];
        v45 = *(unsigned __int8 *)(v4 + 368);
        if ( v45 == 4 )
        {
          if ( *(_BYTE *)(v4 + 1080) == 3 )
          {
            v285 = v279.i64[1];
            v98 = WORD1(v277);
            v18 = (_QWORD *)v278;
            LODWORD(v282) = HIDWORD(v277);
            core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::he09c21e64e830488(v4 + 656);
            v42 = v282;
            v41 = v98;
            v44 = v285;
          }
          else if ( !*(_BYTE *)(v4 + 1080) )
          {
            v285 = v279.i64[1];
            v54 = WORD1(v277);
            v18 = (_QWORD *)v278;
            LODWORD(v282) = HIDWORD(v277);
            core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response$GT$::h21f3ce44ac02ee4a(v4 + 520);
            v42 = v282;
            v41 = v54;
            v44 = v285;
          }
        }
        else if ( v45 == 3 )
        {
          v46 = *(_QWORD *)(v4 + 376);
          v285 = v278;
          v47 = *(_QWORD *)(v4 + 384);
          v18 = (_QWORD *)v279.i64[1];
          v48 = WORD1(v277);
          LOWORD(v282) = (_WORD)v277;
          v49 = HIDWORD(v277);
          core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2(v46, v47);
          v42 = v49;
          v40 = (unsigned __int16)v282;
          v43 = v285;
          v41 = v48;
          v44 = (__int64)v18;
        }
        if ( (v19 & 1) != 0 )
        {
          if ( (_WORD)v40 )
          {
            if ( (unsigned __int16)v40 == 1 )
            {
              v99 = 0x8000000000000001LL;
              if ( v43 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(inserted.i64[0], v43, 1);
            }
            else
            {
              v99 = v43;
              v18 = (_QWORD *)inserted.i64[0];
            }
          }
          else if ( v41 == 401 || v41 == 403 )
          {
            LOWORD(v272) = v41;
            v265 = &v272;
            *(double *)&v266 = COERCE_DOUBLE(core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0);
            alloc::fmt::format::format_inner::h3c16c74008a310d4(
              &v276,
              "\x1CNewAPI token usage upstream \xC0\x17Sub2API usage upstream \xC0\bhttps://\xC0\x0D/v1/user/info",
              &v265);
            v99 = (unsigned __int64)v276;
            v18 = v277;
            v44 = v278;
          }
          else
          {
            v99 = 0x8000000000000000LL;
            if ( v41 != 404 )
              v99 = 0x8000000000000001LL;
          }
        }
        else
        {
          LOWORD(v268) = v40;
          WORD1(v268) = v41;
          HIDWORD(v268) = v42;
          v269 = v43;
          v270 = inserted.i64[0];
          v271 = *(double *)&v44;
          v100 = &v268;
          v287 = v4;
          v101 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                   "dataunittypefullargsopenwithkindsavetrueuuidemitshowhide",
                   4,
                   &v268);
          if ( v101 )
            v100 = (__int64 *)v101;
          v102 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                   "objecttotal_availabletotal_granted",
                   6,
                   v100);
          v103 = 1;
          if ( v102 && *(_BYTE *)v102 == 3 && *(_QWORD *)(v102 + 24) == 11 )
            v103 = (**(_QWORD **)(v102 + 16) ^ 0x73755F6E656B6F74LL
                  | *(_QWORD *)(*(_QWORD *)(v102 + 16) + 3LL) ^ 0x65676173755F6E65LL) != 0;
          v104 = &v265;
          v105 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                   "total_availabletotal_granted",
                   15,
                   v100);
          codexmate_lib::core::relay::quota::value_to_string::h0db883ebfad51c2a(&v265, v105);
          v99 = 0x8000000000000000LL;
          v106 = v265 != (unsigned __int64 *)0x8000000000000000LL || !v103;
          v4 = v287;
          if ( v106 )
          {
            if ( v265 == (unsigned __int64 *)0x8000000000000000LL )
            {
              v104 = &v276;
              v105 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                       "total_granted",
                       13,
                       v100);
              codexmate_lib::core::relay::quota::value_to_string::h0db883ebfad51c2a(&v276, v105);
            }
            else
            {
              v278 = v267;
              v277 = (__int64 (__fastcall **)())v266;
              v276 = v265;
            }
            v107 = v276;
            if ( v276 != (_QWORD *)0x8000000000000000LL )
            {
              v285 = (__int64)v277;
              codexmate_lib::core::relay::quota::format_number_like::ha299b15e648e281c(&v276, v277, v278);
              v110 = (unsigned __int64)v276;
              v99 = (unsigned __int64)v277;
              inserted.i64[0] = v278;
              if ( v107 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v285, v107, 1);
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v268);
              v119 = *(_QWORD *)(v4 + 296);
              v18 = v283;
              if ( v119 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v4 + 304), v119, 1);
              *v263 = 1;
              if ( v110 == 0x8000000000000001LL )
                goto LABEL_9;
              *(double *)&v44 = COERCE_DOUBLE("newapiNewAPI Token Usagesub2apiSub2API /v1/usageobjecttotal_availabletotal_granted");
              v18 = (_QWORD *)inserted.i64[0];
LABEL_130:
              *(_BYTE *)(v4 + 240) = 1;
              *(_QWORD *)(v4 + 176) = v110;
              *(_QWORD *)(v4 + 184) = v99;
              *(_QWORD *)(v4 + 192) = v18;
              *(double *)(v4 + 200) = *(double *)&v44;
              *(_QWORD *)(v4 + 208) = 6;
              *(_QWORD *)(v4 + 216) = "NewAPI Token Usagesub2apiSub2API /v1/usageobjecttotal_availabletotal_granted";
              *(_QWORD *)(v4 + 224) = 18;
              core::ptr::drop_in_place$LT$codexmate_lib..core..relay..quota..fetch_newapi..$u7b$$u7b$closure$u7d$$u7d$$GT$::h6a102f4adceb3d26(v262);
              v111 = (__int64 *)(v4 + 176);
              if ( *(_QWORD *)(v4 + 176) == 0x8000000000000000LL )
              {
                v112 = *(_QWORD *)(v4 + 184);
                if ( v112 < 0 )
                {
                  v115 = *(_QWORD *)(v4 + 96);
                  v116 = *(_QWORD *)(v4 + 104);
                  v117 = *(_QWORD *)(v4 + 128);
                  v118 = *(_QWORD *)(v4 + 136);
                  v262 = v4 + 248;
                  *(_QWORD *)(v4 + 248) = v4 + 144;
                  *(_QWORD *)(v4 + 256) = v115;
                  *(_QWORD *)(v4 + 264) = v116;
                  *(_QWORD *)(v4 + 272) = v117;
                  *(_QWORD *)(v4 + 280) = v118;
                  *(_QWORD *)(v4 + 288) = v4;
                  v263 = (char *)(v4 + 1088);
                  *(_BYTE *)(v4 + 1088) = 0;
LABEL_12:
                  v22 = (_QWORD *)v4;
                  v23 = *(_QWORD *)(v4 + 248);
                  v24 = v22[34];
                  v25 = v22[35];
                  codexmate_lib::core::relay::quota::build_v1_url::hdd11e718a2b98831(
                    v22 + 37,
                    v22[32],
                    v22[33],
                    "/v1/usageremainingquotausage",
                    9);
                  v26 = v22[38];
                  v27 = v22[39];
                  v22[40] = v23;
                  v22[41] = v26;
                  v22[42] = v27;
                  v22[43] = v24;
                  v22[44] = v25;
                  JUMPOUT(0x1000DAC84LL);
                }
                v113 = *(_QWORD *)(v4 + 192);
                codexmate_lib::core::relay::quota::failed::h9d0b337dcf953e67(
                  __src,
                  *(_QWORD *)(v4 + 112),
                  "newapiNewAPI Token Usagesub2apiSub2API /v1/usageobjecttotal_availabletotal_granted",
                  6,
                  "NewAPI Token Usagesub2apiSub2API /v1/usageobjecttotal_availabletotal_granted",
                  18,
                  v113,
                  *(_QWORD *)(v4 + 200));
                if ( v112 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v113, v112, 1);
              }
              else
              {
                v253[6] = *(_QWORD *)(v4 + 224);
                v253[5] = *(_QWORD *)(v4 + 216);
                v253[4] = *(_QWORD *)(v4 + 208);
                v253[3] = *(_QWORD *)(v4 + 200);
                v253[2] = *(_QWORD *)(v4 + 192);
                v114 = *v111;
                v253[1] = *(_QWORD *)(v4 + 184);
                v253[0] = v114;
                codexmate_lib::core::relay::quota::QuotaDraft::with_provider::h9a918864a5a2ed2a(
                  __src,
                  v253,
                  *(_QWORD *)(v4 + 112));
              }
              if ( *v111 == 0x8000000000000000LL )
                *(_BYTE *)(v4 + 240) = 0;
              *(_BYTE *)(v4 + 240) = 0;
LABEL_230:
              v134 = *(_QWORD *)(v4 + 152);
              if ( v134 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v4 + 160), v134, 1);
              v160 = _InterlockedDecrement64(*(volatile signed __int64 **)(v4 + 144));
              v5 = v283;
              if ( v160 )
                goto LABEL_234;
              goto LABEL_233;
            }
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v104, v105);
            v99 = 42;
            v108 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(42, 1);
            if ( !v108 )
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 42);
            qmemcpy(v108, "NewAPI token usage missing total_available", 42);
            v40 = (unsigned __int64)v108;
          }
          v44 = 42;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v268);
          v18 = (_QWORD *)v40;
        }
        v109 = *(_QWORD *)(v4 + 296);
        if ( v109 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v4 + 304), v109, 1);
        *v263 = 1;
        v110 = 0x8000000000000000LL;
        goto LABEL_130;
      }
      codexmate_lib::core::relay::quota::failed::h9d0b337dcf953e67(
        __src,
        v7,
        &unk_1015DAA3B,
        11,
        &unk_1015DAA5B,
        17,
        &unk_1015DAA5B,
        17);
LABEL_235:
      v161 = *(_QWORD *)(v4 + 120);
      if ( v161 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v4 + 128), v161, 1);
      memcpy(v5, __src, 0x88u);
      result = 1;
LABEL_243:
      *(_BYTE *)(v4 + 241) = result;
      return result;
    case 1:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019524B0);
    case 2:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019524B0);
    case 3:
      v263 = (char *)(a2 + 376);
      v29 = *(unsigned __int8 *)(a2 + 376);
      v262 = a2 + 288;
      switch ( v29 )
      {
        case 0LL:
          v283 = __dst;
          v30 = *(_QWORD *)(a2 + 320);
          v31 = *(_QWORD *)(a2 + 304);
          v32 = *(_QWORD *)(a2 + 312);
          v33 = *(_QWORD *)(a2 + 328);
          switch ( *(_BYTE *)(a2 + 368) )
          {
            case 0:
LABEL_39:
              v286 = *(double *)&a3;
              v59 = *(_QWORD *)(v4 + 288);
              v60 = *(_QWORD *)(v4 + 296);
              v61 = v30;
              v62 = v4 + 384;
              v282 = v61;
              *(_QWORD *)(v4 + 384) = v61;
              *(_QWORD *)(v4 + 392) = v59;
              *(_QWORD *)(v4 + 400) = v60;
              *(_QWORD *)(v4 + 408) = v31;
              *(_QWORD *)(v4 + 416) = v32;
              v63 = v33;
              *(_QWORD *)(v4 + 424) = v33;
              inserted.i64[0] = v4 + 1224;
              *(_BYTE *)(v4 + 1224) = 0;
              goto LABEL_46;
            case 1:
LABEL_200:
              v64 = v4 + 384;
              *(_QWORD *)(v4 + 384) = v30;
              *(_QWORD *)(v4 + 392) = v31;
              *(_QWORD *)(v4 + 400) = v32;
              *(_QWORD *)(v4 + 408) = v33;
              inserted.i64[0] = v4 + 1184;
              *(_BYTE *)(v4 + 1184) = 0;
              goto LABEL_201;
            case 2:
LABEL_185:
              *(_QWORD *)(v4 + 1168) = v31;
              *(_QWORD *)(v4 + 1176) = v32;
              *(_QWORD *)(v4 + 1208) = v30;
              *(_QWORD *)(v4 + 1216) = v33;
              *(_WORD *)(v4 + 1225) = 256;
              v5 = v283;
              goto LABEL_186;
            case 3:
LABEL_189:
              *(_QWORD *)(v4 + 1168) = v31;
              *(_QWORD *)(v4 + 1176) = v32;
              *(_QWORD *)(v4 + 1208) = v30;
              *(_QWORD *)(v4 + 1216) = v33;
              *(_WORD *)(v4 + 1225) = 0;
              v5 = v283;
              goto LABEL_190;
            case 4:
LABEL_174:
              v282 = v4 + 384;
              *(_QWORD *)(v4 + 384) = v30;
              *(_QWORD *)(v4 + 392) = v31;
              *(_QWORD *)(v4 + 400) = v32;
              *(_QWORD *)(v4 + 408) = v33;
              v65 = v4 + 1184;
              *(_BYTE *)(v4 + 1184) = 0;
              goto LABEL_175;
            case 5:
LABEL_207:
              v71 = v4 + 384;
              *(_QWORD *)(v4 + 384) = v30;
              *(_QWORD *)(v4 + 392) = v31;
              *(_QWORD *)(v4 + 400) = v32;
              *(_QWORD *)(v4 + 408) = v33;
              v70 = v4 + 1184;
              *(_BYTE *)(v4 + 1184) = 0;
              goto LABEL_208;
            case 6:
LABEL_214:
              *(_QWORD *)(v4 + 1152) = v31;
              *(_QWORD *)(v4 + 1160) = v32;
              *(_QWORD *)(v4 + 1168) = v30;
              *(_QWORD *)(v4 + 1176) = v33;
              *(_WORD *)(v4 + 1185) = 256;
              v5 = v283;
              goto LABEL_215;
            case 7:
LABEL_193:
              *(_QWORD *)(v4 + 1152) = v31;
              *(_QWORD *)(v4 + 1160) = v32;
              *(_QWORD *)(v4 + 1168) = v30;
              *(_QWORD *)(v4 + 1176) = v33;
              *(_WORD *)(v4 + 1185) = 0;
              v5 = v283;
              goto LABEL_194;
            case 8:
LABEL_238:
              v69 = v4 + 384;
              *(_QWORD *)(v4 + 384) = v30;
              *(_QWORD *)(v4 + 392) = v31;
              *(_QWORD *)(v4 + 400) = v32;
              *(_QWORD *)(v4 + 408) = v33;
              inserted.i64[0] = v4 + 1184;
              *(_BYTE *)(v4 + 1184) = 0;
              goto LABEL_239;
            case 9:
LABEL_181:
              *(_QWORD *)(v4 + 1168) = v31;
              *(_QWORD *)(v4 + 1176) = v32;
              *(_QWORD *)(v4 + 1208) = v30;
              *(_QWORD *)(v4 + 1216) = v33;
              *(_WORD *)(v4 + 1224) = 256;
              v5 = v283;
              goto LABEL_182;
            case 0xA:
LABEL_221:
              *(_QWORD *)(v4 + 1168) = v31;
              *(_QWORD *)(v4 + 1176) = v32;
              *(_QWORD *)(v4 + 1208) = v30;
              *(_QWORD *)(v4 + 1216) = v33;
              *(_WORD *)(v4 + 1224) = 0;
              v5 = v283;
              goto LABEL_222;
          }
        case 1LL:
          v287 = a2;
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019525A0);
        case 2LL:
          v287 = a2;
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019525A0);
        case 3LL:
          inserted.i64[0] = a2 + 1224;
          v62 = a2 + 384;
          switch ( *(_BYTE *)(a2 + 1224) )
          {
            case 0:
              v283 = __dst;
              v286 = *(double *)&a3;
              v282 = *(_QWORD *)(a2 + 384);
              v59 = *(_QWORD *)(a2 + 392);
              v60 = *(_QWORD *)(v4 + 400);
              v31 = *(_QWORD *)(v4 + 408);
              v32 = *(_QWORD *)(v4 + 416);
              v63 = *(_QWORD *)(v4 + 424);
LABEL_46:
              v285 = v62;
              codexmate_lib::core::relay::quota::build_root_url::h9fbfb677ca1e6b74(
                v4 + 432,
                v59,
                v60,
                &unk_1015DAB86,
                13);
              v67 = *(_QWORD *)(v4 + 440);
              v68 = *(_QWORD *)(v4 + 448);
              *(_QWORD *)(v4 + 456) = v282;
              *(_QWORD *)(v4 + 464) = v67;
              *(_QWORD *)(v4 + 472) = v68;
              *(_QWORD *)(v4 + 480) = v31;
              *(_QWORD *)(v4 + 488) = v32;
              *(_QWORD *)(v4 + 496) = v63;
              *(_BYTE *)(v4 + 504) = 0;
              v5 = v283;
              break;
            case 1:
              v285 = a2 + 384;
              v287 = a2;
              core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101952528);
            case 2:
              v285 = a2 + 384;
              v287 = a2;
              core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101952528);
            case 3:
              v285 = a2 + 384;
              break;
          }
          codexmate_lib::core::relay::quota::get_json::_$u7b$$u7b$closure$u7d$$u7d$::h39c67e16790a7b5a(&v276, v4 + 456);
          v120 = (char)v276;
          if ( v276 == (_QWORD *)2 )
          {
            *(_BYTE *)inserted.i64[0] = 3;
            v121 = 3;
            goto LABEL_242;
          }
          v283 = v5;
          v122 = (char)v277;
          LODWORD(v260) = *(_DWORD *)((char *)&v277 + 1);
          *(_DWORD *)((char *)&v260 + 3) = HIDWORD(v277);
          v123 = v278;
          v125 = v279.i64[1];
          v124 = v279.i64[0];
          v126 = *(unsigned __int8 *)(v4 + 504);
          if ( v126 == 4 )
          {
            if ( *(_BYTE *)(v4 + 1216) == 3 )
            {
              v286 = *(double *)&v279.i64[1];
              v226 = v278;
              v227 = v279.i64[0];
              core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::he09c21e64e830488(v4 + 792);
              v124 = v227;
              v123 = v226;
              *(double *)&v125 = v286;
            }
            else if ( !*(_BYTE *)(v4 + 1216) )
            {
              v286 = *(double *)&v279.i64[1];
              v175 = v278;
              v176 = v279.i64[0];
              core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response$GT$::h21f3ce44ac02ee4a(v4 + 656);
              v124 = v176;
              v123 = v175;
              *(double *)&v125 = v286;
            }
          }
          else if ( v126 == 3 )
          {
            v127 = *(_QWORD *)(v4 + 512);
            v128 = *(_QWORD *)(v4 + 520);
            v286 = *(double *)&v279.i64[1];
            v129 = v278;
            v130 = v279.i64[0];
            core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2(v127, v128);
            v124 = v130;
            v123 = v129;
            *(double *)&v125 = v286;
          }
          if ( (v120 & 1) != 0 )
          {
            LOBYTE(v276) = v122;
            *(_DWORD *)((char *)&v276 + 1) = LODWORD(v260);
            HIDWORD(v276) = *(_DWORD *)((char *)&v260 + 3);
            v277 = (__int64 (__fastcall **)())v123;
            v282 = v124;
            v278 = v124;
            v279.i64[0] = v125;
            v272 = 0;
            v273 = 1;
            v274 = 0.0;
            v267 = 1610612768;
            v265 = &v272;
            *(double *)&v266 = COERCE_DOUBLE(&off_101952F18);
            v140 = 0x8000000000000000LL;
            if ( (unsigned __int8)_$LT$codexmate_lib..core..relay..quota..HttpProbeError$u20$as$u20$core..fmt..Display$GT$::fmt::hcab038be77eebdc5(
                                    &v276,
                                    &v265) )
              core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, &v284, &unk_101952FE0, &off_101952F48);
            v228 = v272;
            v286 = *(double *)&v273;
            *(double *)&v125 = v274;
            if ( (_WORD)v276 != 0 && v123 != 0 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v282, v123, 1);
            v123 = v228;
            goto LABEL_372;
          }
          if ( v122 == 6 )
          {
            v286 = *(double *)&v124;
            v140 = 0x8000000000000000LL;
LABEL_372:
            v235 = *(_QWORD *)(v4 + 432);
            if ( v235 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v4 + 440), v235, 1);
            *(_BYTE *)inserted.i64[0] = 1;
            goto LABEL_375;
          }
          HIDWORD(v268) = *(_DWORD *)((char *)&v260 + 3);
          *(_DWORD *)((char *)&v268 + 1) = LODWORD(v260);
          LOBYTE(v268) = v122;
          v269 = v123;
          v270 = v124;
          v271 = *(double *)&v125;
          v229 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                   &unk_1015DAB93,
                   13,
                   &v268);
          if ( !v229 || *(_BYTE *)v229 != 4 )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&unk_1015DAB93, 13);
            v123 = 47;
            v233 = COERCE_DOUBLE(_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(47, 1));
            if ( v233 == 0.0 )
            {
              v287 = v4;
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 47);
            }
            *(_QWORD *)(*(_QWORD *)&v233 + 39LL) = 0x736F666E695F6563LL;
            v234 = 0x636E616C61622067LL;
            goto LABEL_370;
          }
          if ( !*(_QWORD *)(v229 + 24) )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&unk_1015DAB93, 13);
            v123 = 34;
            v237 = COERCE_DOUBLE(_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(34, 1));
            if ( v237 == 0.0 )
            {
              v287 = v4;
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 34);
            }
            qmemcpy(*(void **)&v237, "DeepSeek balance response is empty", 34);
            v286 = v237;
            goto LABEL_371;
          }
          v230 = *(_QWORD *)(v229 + 16);
          v231 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                   &unk_1015DABA0,
                   13,
                   v230);
          codexmate_lib::core::relay::quota::value_to_string::h0db883ebfad51c2a(&v276, v231);
          v232 = v276;
          if ( v276 == (_QWORD *)0x8000000000000000LL )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v276, v231);
            v123 = 47;
            v233 = COERCE_DOUBLE(_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(47, 1));
            if ( v233 == 0.0 )
            {
              v287 = v4;
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 47);
            }
            *(_QWORD *)(*(_QWORD *)&v233 + 39LL) = 0x65636E616C61625FLL;
            v234 = 0x5F6C61746F742067LL;
LABEL_370:
            *(_QWORD *)(*(_QWORD *)&v233 + 32LL) = v234;
            v286 = v233;
            qmemcpy(*(void **)&v233, "DeepSeek balance response missin", 32);
LABEL_371:
            v140 = 0x8000000000000000LL;
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v268);
            v125 = v123;
            goto LABEL_372;
          }
          v238 = v277;
          v239 = v278;
          v240 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                   "currencysentencemutationbytesRiddownloadregisterdeepLinkprotocolunlistenmaximizeminimizeset_iconset_sizereparentall branches are disabled and there is no else branch",
                   8,
                   v230);
          if ( v240 )
          {
            if ( *(_BYTE *)v240 == 3 )
              v241 = *(void **)(v240 + 16);
            else
              v241 = nullptr;
            v240 = *(_QWORD *)(v240 + 24);
          }
          else
          {
            v241 = nullptr;
          }
          v242 = &unk_1015DAB4C;
          if ( v241 )
            v242 = v241;
          v243 = 3;
          if ( v241 )
            v243 = v240;
          v282 = (__int64)v238;
          codexmate_lib::core::relay::quota::format_currency::h2c6930e244df1375(&v276, v238, v239, v242, v243);
          v140 = (unsigned __int64)v276;
          v244 = v277;
          v286 = *(double *)&v278;
          if ( v232 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v282, v232, 1);
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v268);
          v245 = *(_QWORD *)(v4 + 432);
          v123 = (__int64)v244;
          if ( v245 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v4 + 440), v245, 1);
          *(_BYTE *)inserted.i64[0] = 1;
          v121 = 3;
          if ( v140 != 0x8000000000000001LL )
          {
            *(double *)&v125 = COERCE_DOUBLE(&unk_1015DABAD);
LABEL_375:
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..quota..fetch_newapi..$u7b$$u7b$closure$u7d$$u7d$$GT$::h6a102f4adceb3d26(v285);
            inserted = _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_1015DA090), v125, 0);
            v142 = 21;
            v141 = &unk_1015DABBE;
            goto LABEL_226;
          }
          goto LABEL_284;
        case 4LL:
          inserted.i64[0] = a2 + 1184;
          v64 = a2 + 384;
          switch ( *(_BYTE *)(v4 + 1184) )
          {
            case 0:
              v283 = __dst;
              v30 = *(_QWORD *)(v4 + 384);
              v31 = *(_QWORD *)(v4 + 392);
              v32 = *(_QWORD *)(v4 + 400);
              v33 = *(_QWORD *)(v4 + 408);
LABEL_201:
              v285 = v64;
              *(_QWORD *)(v4 + 416) = v30;
              *(_QWORD *)(v4 + 424) = &unk_1015DAB22;
              *(_QWORD *)(v4 + 432) = 35;
              *(_QWORD *)(v4 + 440) = v31;
              *(_QWORD *)(v4 + 448) = v32;
              *(_QWORD *)(v4 + 456) = v33;
              *(_BYTE *)(v4 + 464) = 0;
              v5 = v283;
              break;
            case 1:
              v285 = v4 + 384;
              v287 = v4;
              core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019524F8);
            case 2:
              v285 = v4 + 384;
              v287 = v4;
              core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019524F8);
            case 3:
              v285 = v4 + 384;
              break;
          }
          codexmate_lib::core::relay::quota::get_json::_$u7b$$u7b$closure$u7d$$u7d$::h39c67e16790a7b5a(&v276, v4 + 416);
          v144 = (char)v276;
          if ( v276 == (_QWORD *)2 )
          {
            *(_BYTE *)inserted.i64[0] = 3;
            v121 = 4;
            goto LABEL_242;
          }
          v283 = v5;
          v145 = (char)v277;
          LODWORD(v260) = *(_DWORD *)((char *)&v277 + 1);
          *(_DWORD *)((char *)&v260 + 3) = HIDWORD(v277);
          v123 = v278;
          v147 = v279.i64[1];
          v146 = v279.i64[0];
          v148 = *(unsigned __int8 *)(v4 + 464);
          if ( v148 == 4 )
          {
            if ( *(_BYTE *)(v4 + 1176) == 3 )
            {
              v286 = *(double *)&v279.i64[1];
              v177 = v278;
              v178 = v279.i64[0];
              core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::he09c21e64e830488(v4 + 752);
              v146 = v178;
              v123 = v177;
              *(double *)&v147 = v286;
            }
            else if ( !*(_BYTE *)(v4 + 1176) )
            {
              v286 = *(double *)&v279.i64[1];
              v171 = v278;
              v172 = v279.i64[0];
              core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response$GT$::h21f3ce44ac02ee4a(v4 + 616);
              v146 = v172;
              v123 = v171;
              *(double *)&v147 = v286;
            }
          }
          else if ( v148 == 3 )
          {
            v149 = *(_QWORD *)(v4 + 472);
            v150 = *(_QWORD *)(v4 + 480);
            v286 = *(double *)&v279.i64[1];
            v151 = v278;
            v152 = v279.i64[0];
            core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2(v149, v150);
            v146 = v152;
            v123 = v151;
            *(double *)&v147 = v286;
          }
          if ( (v144 & 1) != 0 )
          {
            LOBYTE(v276) = v145;
            *(_DWORD *)((char *)&v276 + 1) = LODWORD(v260);
            HIDWORD(v276) = *(_DWORD *)((char *)&v260 + 3);
            v277 = (__int64 (__fastcall **)())v123;
            v282 = v146;
            v278 = v146;
            v279.i64[0] = v147;
            v272 = 0;
            v273 = 1;
            v274 = 0.0;
            v267 = 1610612768;
            v265 = &v272;
            *(double *)&v266 = COERCE_DOUBLE(&off_101952F18);
            if ( (unsigned __int8)_$LT$codexmate_lib..core..relay..quota..HttpProbeError$u20$as$u20$core..fmt..Display$GT$::fmt::hcab038be77eebdc5(
                                    &v276,
                                    &v265) )
              core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, &v284, &unk_101952FE0, &off_101952F48);
            v179 = v272;
            v286 = *(double *)&v273;
            *(double *)&v147 = v274;
            if ( (_WORD)v276 != 0 && v123 != 0 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v282, v123, 1);
            v123 = v179;
            goto LABEL_279;
          }
          if ( v145 == 6 )
          {
            v286 = *(double *)&v146;
LABEL_279:
            *(_BYTE *)inserted.i64[0] = 1;
            v140 = 0x8000000000000000LL;
LABEL_280:
            inserted = _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_1015DA060), v147, 0);
            v142 = 20;
            v141 = &unk_1015DAB4F;
            goto LABEL_226;
          }
          HIDWORD(v268) = *(_DWORD *)((char *)&v260 + 3);
          *(_DWORD *)((char *)&v268 + 1) = LODWORD(v260);
          LOBYTE(v268) = v145;
          v269 = v123;
          v270 = v146;
          v271 = *(double *)&v147;
          v180 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                   &unk_1015DAB45,
                   7,
                   &v268);
          codexmate_lib::core::relay::quota::value_to_string::h0db883ebfad51c2a(&v276, v180);
          v181 = v276;
          if ( v276 == (_QWORD *)0x8000000000000000LL )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v276, v180);
            v123 = 40;
            v182 = COERCE_DOUBLE(_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(40, 1));
            if ( v182 == 0.0 )
            {
              v287 = v4;
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 40);
            }
            v286 = v182;
            qmemcpy(*(void **)&v182, "StepFun account response missing balance", 40);
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v268);
            v147 = 40;
            goto LABEL_279;
          }
          v282 = (__int64)v277;
          codexmate_lib::core::relay::quota::format_currency::h2c6930e244df1375(&v276, v277, v278, &unk_1015DAB4C, 3);
          v140 = (unsigned __int64)v276;
          v183 = v277;
          v286 = *(double *)&v278;
          if ( v181 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v282, v181, 1);
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v268);
          *(_BYTE *)inserted.i64[0] = 1;
          v121 = 4;
          if ( v140 != 0x8000000000000001LL )
          {
            v123 = (__int64)v183;
            *(double *)&v147 = COERCE_DOUBLE(&unk_1015DA150);
            goto LABEL_280;
          }
LABEL_284:
          v5 = v283;
          goto LABEL_242;
        case 5LL:
LABEL_186:
          codexmate_lib::core::relay::quota::fetch_siliconflow::_$u7b$$u7b$closure$u7d$$u7d$::h253acf2712682007(
            &v276,
            v4 + 384);
          v140 = (unsigned __int64)v276;
          if ( v276 != (_QWORD *)0x8000000000000001LL )
            goto LABEL_188;
          v121 = 5;
          goto LABEL_242;
        case 6LL:
LABEL_190:
          codexmate_lib::core::relay::quota::fetch_siliconflow::_$u7b$$u7b$closure$u7d$$u7d$::h253acf2712682007(
            &v276,
            v4 + 384);
          v140 = (unsigned __int64)v276;
          if ( v276 != (_QWORD *)0x8000000000000001LL )
          {
LABEL_188:
            v283 = v5;
            v285 = (__int64)v277;
            v286 = *(double *)&v278;
            inserted = _mm_loadu_si128(&v279);
            v141 = v280;
            v142 = v281;
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..quota..fetch_siliconflow..$u7b$$u7b$closure$u7d$$u7d$$GT$::heed8e6eb155e2ae6(v4 + 384);
            goto LABEL_225;
          }
          v121 = 6;
          goto LABEL_242;
        case 7LL:
          v65 = a2 + 1184;
          v66 = *(unsigned __int8 *)(v4 + 1184);
          v282 = v4 + 384;
          switch ( v66 )
          {
            case 0LL:
              v283 = __dst;
              v30 = *(_QWORD *)(v4 + 384);
              v31 = *(_QWORD *)(v4 + 392);
              v32 = *(_QWORD *)(v4 + 400);
              v33 = *(_QWORD *)(v4 + 408);
LABEL_175:
              inserted.i64[0] = v65;
              *(_QWORD *)(v4 + 416) = v30;
              *(_QWORD *)(v4 + 424) = &unk_1015DABD3;
              *(_QWORD *)(v4 + 432) = 36;
              *(_QWORD *)(v4 + 440) = v31;
              *(_QWORD *)(v4 + 448) = v32;
              *(_QWORD *)(v4 + 456) = v33;
              *(_BYTE *)(v4 + 464) = 0;
              v5 = v283;
              break;
            case 1LL:
              v287 = v4;
              core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101952540);
            case 2LL:
              v287 = v4;
              core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101952540);
            case 3LL:
              inserted.i64[0] = v4 + 1184;
              break;
          }
          codexmate_lib::core::relay::quota::get_json::_$u7b$$u7b$closure$u7d$$u7d$::h39c67e16790a7b5a(&v276, v4 + 416);
          v135 = (char)v276;
          if ( v276 == (_QWORD *)2 )
          {
            *(_BYTE *)inserted.i64[0] = 3;
            v121 = 7;
            goto LABEL_242;
          }
          v283 = v5;
          v136 = (char)v277;
          v264[0] = *(_DWORD *)((char *)&v277 + 1);
          *(_DWORD *)((char *)v264 + 3) = HIDWORD(v277);
          v285 = v278;
          v137 = v279.i64[1];
          v138 = v279.i64[0];
          v139 = *(unsigned __int8 *)(v4 + 464);
          if ( v139 == 4 )
          {
            if ( *(_BYTE *)(v4 + 1176) == 3 )
            {
              core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::he09c21e64e830488(v4 + 752);
            }
            else if ( !*(_BYTE *)(v4 + 1176) )
            {
              core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response$GT$::h21f3ce44ac02ee4a(v4 + 616);
            }
          }
          else if ( v139 == 3 )
          {
            core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2(
              *(_QWORD *)(v4 + 472),
              *(_QWORD *)(v4 + 480));
          }
          if ( (v135 & 1) != 0 )
          {
            LOBYTE(v276) = v136;
            *(_DWORD *)((char *)&v276 + 1) = v264[0];
            HIDWORD(v276) = *(_DWORD *)((char *)v264 + 3);
            v277 = (__int64 (__fastcall **)())v285;
            v278 = v138;
            v279.i64[0] = v137;
            v272 = 0;
            v273 = 1;
            v274 = 0.0;
            v267 = 1610612768;
            v265 = &v272;
            *(double *)&v266 = COERCE_DOUBLE(&off_101952F18);
            if ( (unsigned __int8)_$LT$codexmate_lib..core..relay..quota..HttpProbeError$u20$as$u20$core..fmt..Display$GT$::fmt::hcab038be77eebdc5(
                                    &v276,
                                    &v265) )
              core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, &v284, &unk_101952FE0, &off_101952F48);
            v123 = v272;
            v286 = *(double *)&v273;
            *(double *)&v137 = v274;
            if ( (_WORD)v276 != 0 && v285 != 0 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v138, v285, 1);
            goto LABEL_304;
          }
          v123 = v285;
          if ( v136 == 6 )
          {
            v286 = *(double *)&v138;
LABEL_304:
            *(_BYTE *)inserted.i64[0] = 1;
            v140 = 0x8000000000000000LL;
            goto LABEL_305;
          }
          HIDWORD(v268) = *(_DWORD *)((char *)v264 + 3);
          *(_DWORD *)((char *)&v268 + 1) = v264[0];
          LOBYTE(v268) = v136;
          v269 = v285;
          v270 = v138;
          v271 = *(double *)&v137;
          v184 = &v268;
          v185 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                   "dataunittypefullargsopenwithkindsavetrueuuidemitshowhide",
                   4,
                   &v268);
          if ( v185 )
            v184 = (__int64 *)v185;
          v186 = (unsigned __int8 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                                      &unk_1015DABF7,
                                      13,
                                      v184);
          v5 = v283;
          v187 = v186;
          v188 = codexmate_lib::core::relay::quota::value_to_f64::hc5078ac8837d6d68(v186);
          v286 = a4;
          if ( (v188 & 1) == 0 )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v187, 13);
            v123 = 49;
            v191 = COERCE_DOUBLE(_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(49, 1));
            if ( v191 == 0.0 )
            {
              v287 = v4;
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 49);
            }
            qmemcpy(*(void **)&v191, "OpenRouter credits response missing total_credits", 49);
            v286 = v191;
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v268);
            v137 = 49;
            goto LABEL_304;
          }
          v189 = (unsigned __int8 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                                      &unk_1015DAC04,
                                      11,
                                      v184);
          if ( (codexmate_lib::core::relay::quota::value_to_f64::hc5078ac8837d6d68(v189) & 1) == 0 )
            a4 = 0.0;
          v260 = v286 - a4;
          v265 = nullptr;
          v266 = 1;
          *(double *)&v267 = 0.0;
          v278 = 1610612768;
          v276 = &v265;
          *(double *)&v277 = COERCE_DOUBLE(&off_101952F18);
          if ( (unsigned __int8)core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h1254124821271e23(
                                  &v260,
                                  &v276) )
            core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, &v284, &unk_101952FE0, &off_101952F48);
          v259 = v265;
          v190 = v266;
          codexmate_lib::core::relay::quota::format_currency::h2c6930e244df1375(&v272, v266, v267, &unk_1015DAAFA, 3);
          v140 = v272;
          v285 = v273;
          v286 = v274;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v268);
          if ( v259 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v190, v259, 1);
          *(_BYTE *)inserted.i64[0] = 1;
          v121 = 7;
          if ( v140 != 0x8000000000000001LL )
          {
            *(double *)&v137 = COERCE_DOUBLE(&unk_1015DAC0F);
            v123 = v285;
LABEL_305:
            inserted = _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_1015DA080), v137, 0);
            v142 = 25;
            v141 = &unk_1015DAC22;
            goto LABEL_226;
          }
          goto LABEL_242;
        case 8LL:
          v70 = a2 + 1184;
          v71 = v4 + 384;
          switch ( *(_BYTE *)(v4 + 1184) )
          {
            case 0:
              v283 = v5;
              v30 = *(_QWORD *)(v4 + 384);
              v31 = *(_QWORD *)(v4 + 392);
              v32 = *(_QWORD *)(v4 + 400);
              v33 = *(_QWORD *)(v4 + 408);
LABEL_208:
              v282 = v71;
              inserted.i64[0] = v70;
              *(_QWORD *)(v4 + 416) = v30;
              *(_QWORD *)(v4 + 424) = &unk_1015DAAC3;
              *(_QWORD *)(v4 + 432) = 55;
              *(_QWORD *)(v4 + 440) = v31;
              *(_QWORD *)(v4 + 448) = v32;
              *(_QWORD *)(v4 + 456) = v33;
              *(_BYTE *)(v4 + 464) = 0;
              v5 = v283;
              break;
            case 1:
              v282 = v4 + 384;
              v287 = v4;
              core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019524E0);
            case 2:
              v282 = v4 + 384;
              v287 = v4;
              core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019524E0);
            case 3:
              v282 = v4 + 384;
              inserted.i64[0] = v4 + 1184;
              break;
          }
          codexmate_lib::core::relay::quota::get_json::_$u7b$$u7b$closure$u7d$$u7d$::h39c67e16790a7b5a(&v276, v4 + 416);
          v153 = (char)v276;
          if ( v276 == (_QWORD *)2 )
          {
            *(_BYTE *)inserted.i64[0] = 3;
            v121 = 8;
            goto LABEL_242;
          }
          v283 = v5;
          v154 = (char)v277;
          v264[0] = *(_DWORD *)((char *)&v277 + 1);
          *(_DWORD *)((char *)v264 + 3) = HIDWORD(v277);
          v285 = v278;
          v155 = v279.i64[1];
          v156 = v279.i64[0];
          v157 = *(unsigned __int8 *)(v4 + 464);
          if ( v157 == 4 )
          {
            if ( *(_BYTE *)(v4 + 1176) == 3 )
            {
              core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::he09c21e64e830488(v4 + 752);
            }
            else if ( !*(_BYTE *)(v4 + 1176) )
            {
              core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response$GT$::h21f3ce44ac02ee4a(v4 + 616);
            }
          }
          else if ( v157 == 3 )
          {
            core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2(
              *(_QWORD *)(v4 + 472),
              *(_QWORD *)(v4 + 480));
          }
          if ( (v153 & 1) != 0 )
          {
            LOBYTE(v276) = v154;
            *(_DWORD *)((char *)&v276 + 1) = v264[0];
            HIDWORD(v276) = *(_DWORD *)((char *)v264 + 3);
            v277 = (__int64 (__fastcall **)())v285;
            v278 = v156;
            v279.i64[0] = v155;
            v272 = 0;
            v273 = 1;
            v274 = 0.0;
            v267 = 1610612768;
            v265 = &v272;
            *(double *)&v266 = COERCE_DOUBLE(&off_101952F18);
            if ( (unsigned __int8)_$LT$codexmate_lib..core..relay..quota..HttpProbeError$u20$as$u20$core..fmt..Display$GT$::fmt::hcab038be77eebdc5(
                                    &v276,
                                    &v265) )
              core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, &v284, &unk_101952FE0, &off_101952F48);
            v123 = v272;
            v286 = *(double *)&v273;
            *(double *)&v155 = v274;
            if ( (_WORD)v276 != 0 && v285 != 0 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v156, v285, 1);
            goto LABEL_352;
          }
          v123 = v285;
          if ( v154 == 6 )
          {
            v286 = *(double *)&v156;
LABEL_352:
            *(_BYTE *)inserted.i64[0] = 1;
            v140 = 0x8000000000000000LL;
            goto LABEL_353;
          }
          HIDWORD(v268) = *(_DWORD *)((char *)v264 + 3);
          *(_DWORD *)((char *)&v268 + 1) = v264[0];
          LOBYTE(v268) = v154;
          v269 = v285;
          v270 = v156;
          v271 = *(double *)&v155;
          v222 = (unsigned __int8 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                                      &unk_1015DA140,
                                      16,
                                      &v268);
          v223 = codexmate_lib::core::relay::quota::value_to_f64::hc5078ac8837d6d68(v222);
          v5 = v283;
          if ( (v223 & 1) == 0 )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v222, 16);
            v123 = 48;
            v225 = COERCE_DOUBLE(_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(48, 1));
            if ( v225 == 0.0 )
            {
              v287 = v4;
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 48);
            }
            v286 = v225;
            qmemcpy(*(void **)&v225, "Novita balance response missing availableBalance", 48);
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v268);
            v155 = 48;
            goto LABEL_352;
          }
          v260 = a4 / 10000.0;
          v265 = nullptr;
          v266 = 1;
          *(double *)&v267 = 0.0;
          v278 = 1610612768;
          v276 = &v265;
          *(double *)&v277 = COERCE_DOUBLE(&off_101952F18);
          if ( (unsigned __int8)core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h1254124821271e23(
                                  &v260,
                                  &v276) )
            core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, &v284, &unk_101952FE0, &off_101952F48);
          v259 = v265;
          v224 = v266;
          codexmate_lib::core::relay::quota::format_currency::h2c6930e244df1375(&v272, v266, v267, &unk_1015DAAFA, 3);
          v140 = v272;
          v285 = v273;
          v286 = v274;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v268);
          if ( v259 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v224, v259, 1);
          *(_BYTE *)inserted.i64[0] = 1;
          v121 = 8;
          if ( v140 != 0x8000000000000001LL )
          {
            *(double *)&v155 = COERCE_DOUBLE(&unk_1015DAAFD);
            v123 = v285;
LABEL_353:
            inserted = _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_1015DA070), v155, 0);
            v142 = 22;
            v141 = &unk_1015DAB0C;
            goto LABEL_226;
          }
          goto LABEL_242;
        case 9LL:
LABEL_215:
          codexmate_lib::core::relay::quota::fetch_kimi_balance::_$u7b$$u7b$closure$u7d$$u7d$::h6d427f854e8290b8(
            &v276,
            v4 + 384);
          v140 = (unsigned __int64)v276;
          if ( v276 == (_QWORD *)0x8000000000000001LL )
          {
            v121 = 9;
            goto LABEL_242;
          }
          v283 = v5;
          v123 = (__int64)v277;
          v286 = *(double *)&v278;
          v141 = v280;
          v142 = v281;
          v106 = *(_BYTE *)(v4 + 1185) == 3;
          inserted = _mm_loadu_si128(&v279);
          if ( !v106 )
            goto LABEL_226;
          v158 = *(unsigned __int8 *)(v4 + 432);
          if ( v158 != 4 )
          {
            if ( v158 != 3 )
              goto LABEL_226;
            goto LABEL_199;
          }
          if ( *(_BYTE *)(v4 + 1144) == 3 )
            goto LABEL_384;
          if ( !*(_BYTE *)(v4 + 1144) )
            goto LABEL_264;
          goto LABEL_226;
        case 10LL:
LABEL_194:
          codexmate_lib::core::relay::quota::fetch_kimi_balance::_$u7b$$u7b$closure$u7d$$u7d$::h6d427f854e8290b8(
            &v276,
            v4 + 384);
          v140 = (unsigned __int64)v276;
          if ( v276 == (_QWORD *)0x8000000000000001LL )
          {
            v121 = 10;
            goto LABEL_242;
          }
          v283 = v5;
          v123 = (__int64)v277;
          v286 = *(double *)&v278;
          v141 = v280;
          v142 = v281;
          v106 = *(_BYTE *)(v4 + 1185) == 3;
          inserted = _mm_loadu_si128(&v279);
          if ( v106 )
          {
            v143 = *(unsigned __int8 *)(v4 + 432);
            if ( v143 == 4 )
            {
              if ( *(_BYTE *)(v4 + 1144) == 3 )
              {
LABEL_384:
                core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::he09c21e64e830488(v4 + 720);
              }
              else if ( !*(_BYTE *)(v4 + 1144) )
              {
LABEL_264:
                core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response$GT$::h21f3ce44ac02ee4a(v4 + 584);
              }
            }
            else if ( v143 == 3 )
            {
LABEL_199:
              core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2(
                *(_QWORD *)(v4 + 440),
                *(_QWORD *)(v4 + 448));
            }
          }
          goto LABEL_226;
        case 11LL:
          inserted.i64[0] = a2 + 1184;
          v69 = a2 + 384;
          switch ( *(_BYTE *)(v4 + 1184) )
          {
            case 0:
              v283 = __dst;
              v30 = *(_QWORD *)(v4 + 384);
              v31 = *(_QWORD *)(v4 + 392);
              v32 = *(_QWORD *)(v4 + 400);
              v33 = *(_QWORD *)(v4 + 408);
LABEL_239:
              v285 = v69;
              *(_QWORD *)(v4 + 416) = v30;
              *(_QWORD *)(v4 + 424) = &unk_1015DAD20;
              *(_QWORD *)(v4 + 432) = 37;
              *(_QWORD *)(v4 + 440) = v31;
              *(_QWORD *)(v4 + 448) = v32;
              *(_QWORD *)(v4 + 456) = v33;
              *(_BYTE *)(v4 + 464) = 0;
              v5 = v283;
              break;
            case 1:
              v285 = v4 + 384;
              v287 = v4;
              core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101952588);
            case 2:
              v285 = v4 + 384;
              v287 = v4;
              core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101952588);
            case 3:
              v285 = v4 + 384;
              break;
          }
          codexmate_lib::core::relay::quota::get_json::_$u7b$$u7b$closure$u7d$$u7d$::h39c67e16790a7b5a(&v276, v4 + 416);
          v162 = (char)v276;
          if ( v276 == (_QWORD *)2 )
          {
            *(_BYTE *)inserted.i64[0] = 3;
            v121 = 11;
            goto LABEL_242;
          }
          v283 = v5;
          v163 = (char)v277;
          v264[0] = *(_DWORD *)((char *)&v277 + 1);
          *(_DWORD *)((char *)v264 + 3) = HIDWORD(v277);
          v123 = v278;
          v165 = v279.i64[1];
          v164 = v279.i64[0];
          v166 = *(unsigned __int8 *)(v4 + 464);
          if ( v166 == 4 )
          {
            if ( *(_BYTE *)(v4 + 1176) == 3 )
            {
              v286 = *(double *)&v279.i64[1];
              v192 = v278;
              v193 = v279.i64[0];
              core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::he09c21e64e830488(v4 + 752);
              v164 = v193;
              v123 = v192;
              *(double *)&v165 = v286;
            }
            else if ( !*(_BYTE *)(v4 + 1176) )
            {
              v286 = *(double *)&v279.i64[1];
              v173 = v278;
              v174 = v279.i64[0];
              core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response$GT$::h21f3ce44ac02ee4a(v4 + 616);
              v164 = v174;
              v123 = v173;
              *(double *)&v165 = v286;
            }
          }
          else if ( v166 == 3 )
          {
            v167 = *(_QWORD *)(v4 + 472);
            v168 = *(_QWORD *)(v4 + 480);
            v286 = *(double *)&v279.i64[1];
            v169 = v278;
            v170 = v279.i64[0];
            core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2(v167, v168);
            v164 = v170;
            v123 = v169;
            *(double *)&v165 = v286;
          }
          if ( (v162 & 1) != 0 )
          {
            LOBYTE(v276) = v163;
            *(_DWORD *)((char *)&v276 + 1) = v264[0];
            HIDWORD(v276) = *(_DWORD *)((char *)v264 + 3);
            v277 = (__int64 (__fastcall **)())v123;
            v282 = v164;
            v278 = v164;
            v279.i64[0] = v165;
            v272 = 0;
            v273 = 1;
            v274 = 0.0;
            v267 = 1610612768;
            v265 = &v272;
            *(double *)&v266 = COERCE_DOUBLE(&off_101952F18);
            if ( (unsigned __int8)_$LT$codexmate_lib..core..relay..quota..HttpProbeError$u20$as$u20$core..fmt..Display$GT$::fmt::hcab038be77eebdc5(
                                    &v276,
                                    &v265) )
              core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, &v284, &unk_101952FE0, &off_101952F48);
            v194 = v272;
            v286 = *(double *)&v273;
            *(double *)&v165 = v274;
            if ( (_WORD)v276 != 0 && v123 != 0 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v282, v123, 1);
            v123 = v194;
          }
          else if ( v163 == 6 )
          {
            v286 = *(double *)&v164;
          }
          else
          {
            HIDWORD(v268) = *(_DWORD *)((char *)v264 + 3);
            *(_DWORD *)((char *)&v268 + 1) = v264[0];
            LOBYTE(v268) = v163;
            v269 = v123;
            v270 = v164;
            v271 = *(double *)&v165;
            v272 = 0;
            v273 = 8;
            v274 = 0.0;
            v195 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                     &unk_1015DAD45,
                     6,
                     &v268);
            v5 = v283;
            if ( v195 )
            {
              if ( *(_BYTE *)v195 == 4 )
              {
                if ( *(_QWORD *)(v195 + 24) )
                {
                  v196 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                           &unk_1015DAD4B,
                           6,
                           *(_QWORD *)(v195 + 16));
                  v197 = v196;
                  if ( v196 )
                  {
                    v198 = (unsigned __int8 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                                                &unk_1015DAD51,
                                                5,
                                                v196);
                    v199 = codexmate_lib::core::relay::quota::value_to_f64::hc5078ac8837d6d68(v198);
                    v286 = a4;
                    v200 = v199;
                    v201 = (unsigned __int8 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                                                "remainingquotausage",
                                                9,
                                                v197);
                    if ( ((unsigned __int8)codexmate_lib::core::relay::quota::value_to_f64::hc5078ac8837d6d68(v201)
                        & v200
                        & 1) != 0 )
                    {
                      v287 = v4;
                      codexmate_lib::core::relay::quota::format_percent::h6d9cf26c4a1ca922(&v276, a4, v286);
                      v260 = COERCE_DOUBLE(&v276);
                      v261 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
                      alloc::fmt::format::format_inner::h3c16c74008a310d4(
                        &v265,
                        "\x035h \xC0\x04周 \xC0\bhttps://\xC0\x28/v1/api/openplatform/coding_plan/remains",
                        &v260);
                      if ( v276 )
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v277, v276, 1);
                      v202 = v265;
                      v203 = v266;
                      v204 = v267;
                      v205 = v274;
                      if ( *(_QWORD *)&v274 == v272 )
                        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v272);
                      v206 = v273;
                      v207 = 3LL * *(_QWORD *)&v205;
                      *(_QWORD *)(v273 + 8 * v207) = v202;
                      *(_QWORD *)(v206 + 8 * v207 + 8) = v203;
                      *(_QWORD *)(v206 + 8 * v207 + 16) = v204;
                      *(_QWORD *)&v274 = *(_QWORD *)&v205 + 1LL;
                      v4 = v287;
                      v5 = v283;
                    }
                  }
                }
              }
            }
            v208 = (unsigned __int8 *)"usage";
            v209 = 5;
            v210 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                     "usage",
                     5,
                     &v268);
            v211 = v210;
            if ( v210
              && (v212 = (unsigned __int8 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                                              &unk_1015DAD51,
                                              5,
                                              v210),
                  v213 = codexmate_lib::core::relay::quota::value_to_f64::hc5078ac8837d6d68(v212),
                  v286 = a4,
                  v214 = v213,
                  v209 = 9,
                  v208 = (unsigned __int8 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                                              "remainingquotausage",
                                              9,
                                              v211),
                  ((unsigned __int8)codexmate_lib::core::relay::quota::value_to_f64::hc5078ac8837d6d68(v208) & v214 & 1) != 0) )
            {
              v287 = v4;
              codexmate_lib::core::relay::quota::format_percent::h6d9cf26c4a1ca922(&v276, a4, v286);
              v260 = COERCE_DOUBLE(&v276);
              v261 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
              v208 = (unsigned __int8 *)&v265;
              alloc::fmt::format::format_inner::h3c16c74008a310d4(
                &v265,
                "\x04周 \xC0\bhttps://\xC0\x28/v1/api/openplatform/coding_plan/remains",
                &v260);
              v209 = (__int64)v276;
              if ( v276 )
              {
                v208 = (unsigned __int8 *)v277;
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v277, v276, 1);
              }
              v215 = v265;
              v216 = v266;
              v217 = v267;
              v218 = v274;
              if ( *(_QWORD *)&v274 == v272 )
              {
                v208 = (unsigned __int8 *)&v272;
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v272);
              }
              v219 = v273;
              v220 = 3LL * *(_QWORD *)&v218;
              *(_QWORD *)(v273 + 8 * v220) = v215;
              *(_QWORD *)(v219 + 8 * v220 + 8) = v216;
              *(_QWORD *)(v219 + 8 * v220 + 16) = v217;
              *(_QWORD *)&v221 = *(_QWORD *)&v218 + 1LL;
              v274 = v221;
              v4 = v287;
              v5 = v283;
            }
            else
            {
              v221 = v274;
            }
            if ( v221 != 0.0 )
            {
              alloc::str::join_generic_copy::heca7a5e86402c6b6(&v276, v273, *(_QWORD *)&v221, &unk_1015DAD56, 3);
              v140 = (unsigned __int64)v276;
              v123 = (__int64)v277;
              v286 = *(double *)&v278;
              _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h388ebe1b1d9ed77c(&v272);
              if ( v272 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v273, 24 * v272, 8);
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v268);
              *(_BYTE *)inserted.i64[0] = 1;
              v121 = 11;
              if ( v140 == 0x8000000000000001LL )
              {
LABEL_242:
                *v263 = v121;
                *v5 = 0x8000000000000000LL;
                result = 3;
                goto LABEL_243;
              }
              *(double *)&v165 = COERCE_DOUBLE(&unk_1015DA160);
LABEL_382:
              inserted = _mm_insert_epi64(_mm_load_si128((const __m128i *)&xmmword_1015DA060), v165, 0);
              v142 = 23;
              v141 = &unk_1015DAD59;
              goto LABEL_226;
            }
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v208, v209);
            v236 = COERCE_DOUBLE(_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(46, 1));
            if ( v236 == 0.0 )
            {
              v287 = v4;
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 46);
            }
            v286 = v236;
            qmemcpy(*(void **)&v236, "Kimi coding usage response missing quota tiers", 46);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h388ebe1b1d9ed77c(&v272);
            if ( v272 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v273, 24 * v272, 8);
            v123 = 46;
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v268);
            v165 = 46;
          }
          *(_BYTE *)inserted.i64[0] = 1;
          v140 = 0x8000000000000000LL;
          goto LABEL_382;
        case 12LL:
LABEL_182:
          codexmate_lib::core::relay::quota::fetch_minimax_coding_plan::_$u7b$$u7b$closure$u7d$$u7d$::h8cd829bdc77b0743(
            &v276,
            v4 + 384);
          v140 = (unsigned __int64)v276;
          if ( v276 != (_QWORD *)0x8000000000000001LL )
            goto LABEL_224;
          v121 = 12;
          goto LABEL_242;
        case 13LL:
LABEL_222:
          codexmate_lib::core::relay::quota::fetch_minimax_coding_plan::_$u7b$$u7b$closure$u7d$$u7d$::h8cd829bdc77b0743(
            &v276,
            v4 + 384);
          v140 = (unsigned __int64)v276;
          if ( v276 == (_QWORD *)0x8000000000000001LL )
          {
            v121 = 13;
            goto LABEL_242;
          }
LABEL_224:
          v283 = v5;
          v285 = (__int64)v277;
          v286 = *(double *)&v278;
          inserted = _mm_loadu_si128(&v279);
          v141 = v280;
          v142 = v281;
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..quota..fetch_minimax_coding_plan..$u7b$$u7b$closure$u7d$$u7d$$GT$::h2fa71842fa676f54(v4 + 384);
LABEL_225:
          v123 = v285;
LABEL_226:
          *v263 = 1;
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..quota..fetch_official_provider..$u7b$$u7b$closure$u7d$$u7d$$GT$::h8a5bf6edf33013c9(v262);
          v159 = _mm_load_si128(&inserted);
          if ( v140 == 0x8000000000000000LL )
          {
            codexmate_lib::core::relay::quota::failed::h9d0b337dcf953e67(
              __src,
              *(_QWORD *)(v4 + 112),
              *(_QWORD *)(v4 + 248),
              *(_QWORD *)(v4 + 256),
              *(_QWORD *)(v4 + 264),
              *(_QWORD *)(v4 + 272),
              *(_QWORD *)&v286,
              v159.i64[0]);
            if ( *(double *)&v123 != 0.0 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v286, v123, 1);
          }
          else
          {
            v248[0] = v140;
            v248[1] = v123;
            *(double *)&v248[2] = v286;
            v249 = v159;
            v250 = v141;
            v251 = v142;
            codexmate_lib::core::relay::quota::QuotaDraft::with_provider::h9a918864a5a2ed2a(
              __src,
              v248,
              *(_QWORD *)(v4 + 112));
          }
          goto LABEL_230;
      }
    case 4:
      v263 = (char *)(a2 + 1088);
      v262 = a2 + 248;
      v283 = __dst;
      v286 = *(double *)&a3;
      v10 = *(_QWORD *)(a2 + 248);
      v11 = *(_QWORD *)(a2 + 256);
      v12 = *(_QWORD *)(v4 + 264);
      v13 = *(_QWORD *)(v4 + 272);
      v14 = *(_QWORD *)(v4 + 280);
      v15 = *(_QWORD *)(v4 + 288);
      goto LABEL_7;
    case 5:
      v21 = *(unsigned __int8 *)(a2 + 1088);
      v262 = a2 + 248;
      v263 = (char *)(a2 + 1088);
      switch ( v21 )
      {
        case 0LL:
          v283 = __dst;
          v286 = *(double *)&a3;
          goto LABEL_12;
        case 1LL:
          v287 = a2;
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101952510);
        case 2LL:
          v287 = a2;
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101952510);
        case 3LL:
          codexmate_lib::core::relay::quota::get_json::_$u7b$$u7b$closure$u7d$$u7d$::h39c67e16790a7b5a(&v276, a2 + 320);
          v28 = (char)v276;
          if ( v276 == (_QWORD *)2 )
          {
            *v263 = 3;
LABEL_16:
            *v5 = 0x8000000000000000LL;
            result = 5;
            goto LABEL_243;
          }
          v283 = __dst;
          v34 = (unsigned __int16)v277;
          v35 = WORD1(v277);
          v36 = HIDWORD(v277);
          v37 = v278;
          v286 = *(double *)&v279.i64[1];
          inserted.i64[0] = v279.i64[0];
          v38 = *(unsigned __int8 *)(v4 + 368);
          if ( v38 == 4 )
          {
            if ( *(_BYTE *)(v4 + 1080) == 3 )
            {
              v285 = v278;
              core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::he09c21e64e830488(v4 + 656);
              v37 = v285;
            }
            else if ( !*(_BYTE *)(v4 + 1080) )
            {
              v285 = v278;
              core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response$GT$::h21f3ce44ac02ee4a(v4 + 520);
              v37 = v285;
            }
          }
          else if ( v38 == 3 )
          {
            v39 = *(_QWORD *)(v4 + 376);
            v285 = v278;
            core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2(
              v39,
              *(_QWORD *)(v4 + 384));
            v37 = v285;
          }
          if ( (v28 & 1) != 0 )
          {
            v72 = v34;
            if ( v34 )
            {
              v5 = v283;
              if ( v72 == 1 )
              {
                v73 = 0x8000000000000001LL;
                if ( v37 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(inserted.i64[0], v37, 1);
              }
              else
              {
                v73 = v37;
                v36 = inserted.i64[0];
              }
            }
            else
            {
              v5 = v283;
              if ( v35 == 401 || v35 == 403 )
              {
                LOWORD(v272) = v35;
                v265 = &v272;
                *(double *)&v266 = COERCE_DOUBLE(core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0);
                alloc::fmt::format::format_inner::h3c16c74008a310d4(
                  &v276,
                  "\x17Sub2API usage upstream \xC0\bhttps://\xC0\x0D/v1/user/info",
                  &v265);
                v73 = (unsigned __int64)v276;
                v36 = (__int64)v277;
                v286 = *(double *)&v278;
              }
              else if ( v35 == 404 )
              {
                v73 = 0x8000000000000000LL;
              }
              else
              {
                v73 = 0x8000000000000001LL;
              }
            }
          }
          else
          {
            LOWORD(v268) = v34;
            WORD1(v268) = v35;
            HIDWORD(v268) = v36;
            v269 = v37;
            v270 = inserted.i64[0];
            v271 = v286;
            v74 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                    "modepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide",
                    4,
                    &v268);
            v5 = v283;
            if ( v74
              || _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                   "remainingquotausage",
                   9,
                   &v268)
              || _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                   "quotausage",
                   5,
                   &v268)
              || _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                   "usage",
                   5,
                   &v268) )
            {
              v75 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      "remainingquotausage",
                      9,
                      &v268);
              if ( v75 )
              {
                codexmate_lib::core::relay::quota::value_to_string::h0db883ebfad51c2a(&v276, v75);
                v76 = v276;
                if ( v276 != (_QWORD *)0x8000000000000000LL )
                  goto LABEL_78;
              }
              v77 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      "dataunittypefullargsopenwithkindsavetrueuuidemitshowhide",
                      4,
                      &v268);
              if ( v77 )
              {
                v78 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                        "remainingquotausage",
                        9,
                        v77);
                if ( v78 )
                {
                  codexmate_lib::core::relay::quota::value_to_string::h0db883ebfad51c2a(&v276, v78);
                  v76 = v276;
                  if ( v276 != (_QWORD *)0x8000000000000000LL )
                    goto LABEL_78;
                }
              }
              v79 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      "quotausage",
                      5,
                      &v268);
              if ( v79 )
              {
                v80 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                        "remainingquotausage",
                        9,
                        v79);
                if ( v80 )
                {
                  codexmate_lib::core::relay::quota::value_to_string::h0db883ebfad51c2a(&v276, v80);
                  v76 = v276;
                  if ( v276 != (_QWORD *)0x8000000000000000LL )
                    goto LABEL_78;
                }
              }
              v81 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      "usage",
                      5,
                      &v268);
              if ( v81 )
              {
                v82 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                        "remainingquotausage",
                        9,
                        v81);
                if ( v82 )
                {
                  codexmate_lib::core::relay::quota::value_to_string::h0db883ebfad51c2a(&v276, v82);
                  v76 = v276;
                  if ( v276 != (_QWORD *)0x8000000000000000LL )
                    goto LABEL_78;
                }
              }
              v83 = (_QWORD **)&unk_1015DAB45;
              v84 = 7;
              v85 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      &unk_1015DAB45,
                      7,
                      &v268);
              if ( v85 )
              {
                v83 = &v276;
                v84 = v85;
                codexmate_lib::core::relay::quota::value_to_string::h0db883ebfad51c2a(&v276, v85);
                v76 = v276;
                if ( v276 != (_QWORD *)0x8000000000000000LL )
                {
LABEL_78:
                  v282 = (__int64)v76;
                  v286 = *(double *)&v277;
                  v87 = v278;
                  v88 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                          "unittypefullargsopenwithkindsavetrueuuidemitshowhide",
                          4,
                          &v268);
                  if ( !v88
                    || (codexmate_lib::core::relay::quota::value_to_string::h0db883ebfad51c2a(&v265, v88),
                        v89 = (unsigned __int64)v265,
                        v265 == (unsigned __int64 *)0x8000000000000000LL) )
                  {
                    v90 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                            "quotausage",
                            5,
                            &v268);
                    if ( !v90
                      || (v91 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                                  "unittypefullargsopenwithkindsavetrueuuidemitshowhide",
                                  4,
                                  v90)) == 0
                      || (codexmate_lib::core::relay::quota::value_to_string::h0db883ebfad51c2a(&v265, v91),
                          v89 = (unsigned __int64)v265,
                          v265 == (unsigned __int64 *)0x8000000000000000LL) )
                    {
                      v92 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                              "dataunittypefullargsopenwithkindsavetrueuuidemitshowhide",
                              4,
                              &v268);
                      v89 = 0x8000000000000000LL;
                      if ( v92 )
                      {
                        v93 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                                "unittypefullargsopenwithkindsavetrueuuidemitshowhide",
                                4,
                                v92);
                        v89 = 0x8000000000000000LL;
                        if ( v93 )
                        {
                          codexmate_lib::core::relay::quota::value_to_string::h0db883ebfad51c2a(&v265, v93);
                          v89 = (unsigned __int64)v265;
                          if ( v265 == (unsigned __int64 *)0x8000000000000000LL )
                            v89 = 0x8000000000000000LL;
                        }
                      }
                    }
                  }
                  v94 = 0;
                  v95 = v266;
                  if ( v89 != 0x8000000000000000LL )
                    v94 = v266;
                  codexmate_lib::core::relay::quota::format_with_optional_unit::hf36850b8f654e2a9(
                    &v276,
                    *(_QWORD *)&v286,
                    v87,
                    v94,
                    v267);
                  v96 = (unsigned __int64)v276;
                  v285 = (__int64)v277;
                  inserted.i64[0] = v278;
                  if ( 2 * v89 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v95, v89, 1);
                  if ( v282 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v286, v282, 1);
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v268);
                  v36 = inserted.i64[0];
                  v97 = *(_QWORD *)(v4 + 296);
                  if ( v97 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v4 + 304), v97, 1);
                  *v263 = 1;
                  if ( v96 == 0x8000000000000001LL )
                    goto LABEL_16;
                  v286 = COERCE_DOUBLE("sub2apiSub2API /v1/usageobjecttotal_availabletotal_granted");
LABEL_161:
                  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..quota..fetch_newapi..$u7b$$u7b$closure$u7d$$u7d$$GT$::h6a102f4adceb3d26(v262);
                  if ( v96 == 0x8000000000000000LL )
                  {
                    v132 = *(_QWORD *)(v4 + 112);
                    v133 = v285;
                    if ( v285 < 0 )
                    {
                      codexmate_lib::core::relay::quota::unsupported::hd29da747289b020c(__src, v132);
                    }
                    else
                    {
                      codexmate_lib::core::relay::quota::failed::h9d0b337dcf953e67(
                        __src,
                        v132,
                        "sub2apiSub2API /v1/usageobjecttotal_availabletotal_granted",
                        7,
                        "Sub2API /v1/usageobjecttotal_availabletotal_granted",
                        17,
                        v36,
                        *(_QWORD *)&v286);
                      if ( v133 )
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v133, 1);
                    }
                  }
                  else
                  {
                    v252[0] = v96;
                    v252[1] = v285;
                    v252[2] = v36;
                    *(double *)&v252[3] = v286;
                    v252[4] = 7;
                    v252[5] = "Sub2API /v1/usageobjecttotal_availabletotal_granted";
                    v252[6] = 17;
                    codexmate_lib::core::relay::quota::QuotaDraft::with_provider::h9a918864a5a2ed2a(
                      __src,
                      v252,
                      *(_QWORD *)(v4 + 112));
                  }
                  if ( *(_QWORD *)(v4 + 176) == 0x8000000000000000LL )
                    *(_BYTE *)(v4 + 240) = 0;
                  *(_BYTE *)(v4 + 240) = 0;
                  v134 = *(_QWORD *)(v4 + 152);
                  if ( v134 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v4 + 160), v134, 1);
                  if ( _InterlockedDecrement64(*(volatile signed __int64 **)(v4 + 144)) )
                    goto LABEL_234;
LABEL_233:
                  alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he53e89bcba3b87c6(v4 + 144, v134);
LABEL_234:
                  core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::hb91855b753871e5f(v4);
                  goto LABEL_235;
                }
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v83, v84);
              v73 = 31;
              v86 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(31, 1);
              if ( !v86 )
              {
                v287 = v4;
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 31);
              }
              v36 = (__int64)v86;
              qmemcpy(v86, "Sub2API usage missing remaining", 31);
            }
            else
            {
              v73 = 0x8000000000000000LL;
            }
            *(_QWORD *)&v286 = 31;
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v268);
          }
          v285 = v73;
          v131 = *(_QWORD *)(v4 + 296);
          if ( v131 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v4 + 304), v131, 1);
          *v263 = 1;
          v96 = 0x8000000000000000LL;
          goto LABEL_161;
      }
  }
}
