// __ZN13codexmate_lib4core3mcp17upsert_mcp_server @ 0x100846d50 | 基线 same-set
// [FULL decompile]

_QWORD *__fastcall codexmate_lib::core::mcp::upsert_mcp_server::h5e6eaa54129c4429(
        _QWORD *a1,
        void *a2,
        size_t a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  void *v7; // r14
  __int64 v8; // rcx
  void *v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rcx
  const __m128i *v16; // r12
  __int64 v17; // rsi
  __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rcx
  size_t v21; // r15
  unsigned __int64 v22; // rax
  __int64 v24; // rbx
  __int64 v25; // rsi
  __m128i v26; // xmm1
  __int64 v27; // r14
  __int64 k; // rdi
  unsigned __int64 v29; // rax
  __m128i v30; // xmm2
  size_t v32; // r15
  void *v33; // r12
  int v34; // eax
  bool v35; // zf
  void *v36; // rsi
  __int64 v37; // rax
  _QWORD *v38; // rbx
  __int64 v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  double v44; // xmm0_8
  __int64 v45; // rbx
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rsi
  __int64 v49; // rdx
  __int64 v50; // rbx
  __int64 v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rbx
  _QWORD *v55; // r14
  __int64 v56; // rsi
  __int64 v58; // r14
  __int64 v59; // rbx
  __int64 v60; // r15
  const __m128i *v62; // r12
  int v63; // r13d
  __int64 v64; // rax
  __int64 v65; // rsi
  __int64 v66; // rdx
  __int64 v67; // rbx
  __int64 v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rdx
  __int64 v71; // rbx
  __int64 v72; // r14
  _QWORD *v73; // r15
  __int64 v74; // rsi
  unsigned __int64 v75; // rax
  __int64 v76; // r14
  __int64 v77; // rbx
  __int64 v78; // rbx
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rbx
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rbx
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 (__fastcall *v89)(); // rdi
  unsigned __int64 v90; // rbx
  _OWORD *v91; // rsi
  __int64 *v92; // r14
  __int64 v93; // rax
  __int64 v94; // rcx
  __int64 v95; // rdx
  __int64 v96; // r15
  unsigned __int64 v97; // rax
  __m128i v99; // xmm1
  const void *v100; // r14
  size_t v101; // r15
  __int64 j; // rdx
  __int64 v103; // rax
  __m128i v104; // xmm2
  const __m128i *v106; // rbx
  const __m128i *v107; // r12
  int v108; // eax
  __int64 v109; // rsi
  __int64 v110; // rdx
  __int64 v111; // rbx
  __int64 v112; // rbx
  __int64 v113; // rax
  __int64 v114; // rcx
  __int64 v115; // rbx
  __int64 v116; // rax
  __int64 v117; // rcx
  __int64 v118; // rdx
  _QWORD *v119; // rdi
  unsigned __int64 v120; // rbx
  __int64 v121; // rsi
  __int64 *v122; // r14
  __int64 v123; // rax
  __int64 v124; // rcx
  __int64 v125; // rdx
  __int64 v126; // r15
  unsigned __int64 v127; // rax
  __m128i v128; // xmm1
  const void *v129; // rbx
  size_t v130; // r15
  __int64 i; // rdx
  __int64 v132; // rax
  __m128i v134; // xmm2
  __int64 v136; // r12
  int v137; // eax
  __int64 v138; // rsi
  __int64 v139; // rdx
  __int64 v140; // rbx
  unsigned __int64 v141; // r14
  __int64 v142; // r15
  __int64 v143; // r9
  __int64 v144; // rbx
  __int64 v145; // rax
  _QWORD *v146; // rcx
  __int64 v148; // rbx
  __int64 v149; // r13
  const __m128i *v151; // r14
  int v152; // r12d
  __int64 v153; // rax
  __int64 v154; // rsi
  unsigned __int64 v155; // rax
  _QWORD *v156; // rbx
  __int64 v157; // rsi
  __int64 v158; // r14
  __m128i v159; // xmm0
  __int64 v160; // r12
  __int64 v161; // rbx
  __int128 v162; // kr00_16
  __int64 v163; // rbx
  void *v164; // r14
  __int64 v165; // r14
  __int64 v166; // r15
  __int64 (__fastcall *v167)(); // r14
  _QWORD *v168; // r14
  __int64 v169; // rbx
  __int64 v170; // r12
  _QWORD *v171; // r13
  __int64 v172; // rsi
  unsigned __int64 v173; // rsi
  __int64 v174; // rbx
  void *v175; // rsi
  __int64 v176; // rdx
  __int64 v177; // rcx
  __int64 v178; // r15
  __int64 v179; // rax
  __int64 v180; // r13
  __int64 v181; // r12
  unsigned __int64 v182; // r14
  _OWORD *v183; // r14
  __int64 v184; // rcx
  __int64 v185; // rsi
  unsigned __int64 v186; // rbx
  __int64 v187; // rax
  __int64 v188; // rax
  char v189; // dl
  __int64 v190; // rax
  __int64 v191; // rbx
  __int64 v192; // rsi
  _QWORD *v193; // r15
  _QWORD *result; // rax
  _QWORD *v195; // r8
  __int64 v196; // rbx
  _QWORD *v197; // r15
  __int64 v198; // rcx
  __int64 v199; // rcx
  _QWORD v200[3]; // [rsp+8h] [rbp-778h] BYREF
  __int128 v201; // [rsp+20h] [rbp-760h] BYREF
  __int64 v202; // [rsp+30h] [rbp-750h]
  _QWORD v203[3]; // [rsp+38h] [rbp-748h] BYREF
  __int64 v204; // [rsp+50h] [rbp-730h] BYREF
  __int64 v205; // [rsp+58h] [rbp-728h] BYREF
  _QWORD *v206; // [rsp+60h] [rbp-720h]
  unsigned __int64 v207; // [rsp+68h] [rbp-718h]
  _QWORD v208[3]; // [rsp+70h] [rbp-710h] BYREF
  _QWORD v209[3]; // [rsp+88h] [rbp-6F8h] BYREF
  __int64 v210; // [rsp+A0h] [rbp-6E0h] BYREF
  _QWORD v211[3]; // [rsp+A8h] [rbp-6D8h] BYREF
  _QWORD v212[3]; // [rsp+C0h] [rbp-6C0h] BYREF
  _QWORD v213[3]; // [rsp+D8h] [rbp-6A8h] BYREF
  _QWORD v214[3]; // [rsp+F0h] [rbp-690h] BYREF
  __int64 v215; // [rsp+108h] [rbp-678h] BYREF
  __int64 v216; // [rsp+110h] [rbp-670h]
  __int64 v217; // [rsp+118h] [rbp-668h]
  unsigned __int64 v218; // [rsp+120h] [rbp-660h]
  __int128 v219; // [rsp+128h] [rbp-658h]
  __int64 v220; // [rsp+138h] [rbp-648h]
  __int64 v221; // [rsp+140h] [rbp-640h]
  __int64 v222; // [rsp+148h] [rbp-638h]
  const __m128i *v223; // [rsp+150h] [rbp-630h]
  __int64 v224; // [rsp+158h] [rbp-628h]
  __int64 v225; // [rsp+160h] [rbp-620h]
  __int64 v226; // [rsp+168h] [rbp-618h]
  __int64 v227; // [rsp+170h] [rbp-610h]
  __int64 v228; // [rsp+178h] [rbp-608h]
  __int64 v229; // [rsp+180h] [rbp-600h]
  _BYTE v230[248]; // [rsp+188h] [rbp-5F8h] BYREF
  _QWORD v231[2]; // [rsp+280h] [rbp-500h] BYREF
  __m128i v232; // [rsp+290h] [rbp-4F0h] BYREF
  _QWORD v233[3]; // [rsp+2A0h] [rbp-4E0h] BYREF
  __int64 v234; // [rsp+2B8h] [rbp-4C8h]
  __int64 v235; // [rsp+2C0h] [rbp-4C0h]
  const __m128i *v236; // [rsp+2C8h] [rbp-4B8h]
  const __m128i *v237; // [rsp+2D0h] [rbp-4B0h]
  __int64 v238; // [rsp+2D8h] [rbp-4A8h]
  __int64 v239; // [rsp+2E0h] [rbp-4A0h]
  __int64 v240; // [rsp+2E8h] [rbp-498h]
  __int64 v241; // [rsp+2F0h] [rbp-490h]
  __int64 v242; // [rsp+2F8h] [rbp-488h]
  __int64 v243; // [rsp+300h] [rbp-480h]
  __int64 v244; // [rsp+308h] [rbp-478h]
  __int64 v245; // [rsp+310h] [rbp-470h]
  __int64 (__fastcall *v246)(); // [rsp+318h] [rbp-468h]
  __int64 v247; // [rsp+320h] [rbp-460h]
  __int64 v248; // [rsp+328h] [rbp-458h]
  __m128i v249; // [rsp+330h] [rbp-450h] BYREF
  __m128i v250; // [rsp+340h] [rbp-440h] BYREF
  __m128i v251; // [rsp+350h] [rbp-430h] BYREF
  _OWORD __dst[13]; // [rsp+360h] [rbp-420h] BYREF
  __int64 v253; // [rsp+430h] [rbp-350h] BYREF
  __int64 v254; // [rsp+438h] [rbp-348h]
  __int64 v255; // [rsp+440h] [rbp-340h]
  size_t v256; // [rsp+448h] [rbp-338h]
  __int64 v257; // [rsp+450h] [rbp-330h]
  __int64 v258; // [rsp+458h] [rbp-328h]
  __int64 v259; // [rsp+460h] [rbp-320h]
  __int64 v260; // [rsp+468h] [rbp-318h]
  _QWORD *v261; // [rsp+470h] [rbp-310h]
  _OWORD v262[8]; // [rsp+478h] [rbp-308h] BYREF
  __int128 v263; // [rsp+4F8h] [rbp-288h] BYREF
  __int128 v264; // [rsp+508h] [rbp-278h]
  __int128 v265; // [rsp+518h] [rbp-268h]
  __int128 v266; // [rsp+528h] [rbp-258h]
  _OWORD v267[6]; // [rsp+538h] [rbp-248h] BYREF
  size_t v268; // [rsp+598h] [rbp-1E8h]
  void *v269; // [rsp+5A0h] [rbp-1E0h]
  void *__s1; // [rsp+5A8h] [rbp-1D8h]
  __m128i v271; // [rsp+5B0h] [rbp-1D0h] BYREF
  _BYTE v272[248]; // [rsp+5C0h] [rbp-1C0h] BYREF
  int v273; // [rsp+6BCh] [rbp-C4h]
  const __m128i *v274; // [rsp+6C0h] [rbp-C0h]
  size_t __n; // [rsp+6C8h] [rbp-B8h]
  _QWORD *v276; // [rsp+6D0h] [rbp-B0h]
  _OWORD *v277; // [rsp+6D8h] [rbp-A8h] BYREF
  __int64 (__fastcall *v278)(); // [rsp+6E0h] [rbp-A0h]
  unsigned __int64 v279; // [rsp+6E8h] [rbp-98h]
  __m128i v280; // [rsp+6F0h] [rbp-90h] BYREF
  __m128i v281; // [rsp+700h] [rbp-80h] BYREF
  _QWORD *v282; // [rsp+710h] [rbp-70h]
  __int64 (__fastcall *v283)(); // [rsp+718h] [rbp-68h]
  __int64 v284; // [rsp+720h] [rbp-60h]
  __m128i v285; // [rsp+728h] [rbp-58h] BYREF
  __int64 v286; // [rsp+738h] [rbp-48h]
  unsigned __int64 v287; // [rsp+740h] [rbp-40h]
  __int64 v288; // [rsp+748h] [rbp-38h]
  void *__s2; // [rsp+750h] [rbp-30h]

  v257 = a4;
  v261 = a1;
  v231[0] = &unk_101674B47;
  v231[1] = 17;
  v269 = a2;
  v268 = a3;
  v4 = std::path::Path::parent::h4c3ac26770731fbb(a2, a3);
  if ( v4 )
  {
    *(_WORD *)v272 = 511;
    v272[2] = 1;
    v6 = std::fs::DirBuilder::_create::h099c6e2853c95452(v272, v4, v5);
    if ( v6 )
    {
      *(_QWORD *)&v267[0] = 2;
      *((_QWORD *)&v267[0] + 1) = v6;
LABEL_248:
      result = v261;
      qmemcpy(v261 + 1, v267, 0x60u);
      *result = 0x8000000000000000LL;
      return result;
    }
  }
  v7 = *(void **)(v257 + 8);
  v8 = *(unsigned __int8 *)(v257 + 216);
  v9 = &anon_10420c9971c21f44d230d15b39fb3fec_8;
  if ( *(_BYTE *)(v257 + 216) )
    v9 = &anon_10420c9971c21f44d230d15b39fb3fec_9;
  *(_QWORD *)&v219 = v9;
  v258 = v8;
  *((_QWORD *)&v219 + 1) = v8 ^ 5;
  v10 = *(_QWORD *)(v257 + 64);
  v244 = *(_QWORD *)(v257 + 72);
  v11 = *(_QWORD *)(v257 + 80);
  v247 = v11;
  if ( v244 == 0x8000000000000000LL )
    v11 = 0;
  v220 = v11;
  v245 = *(_QWORD *)(v257 + 96);
  v12 = *(_QWORD *)(v257 + 104);
  v248 = v12;
  if ( v245 == 0x8000000000000000LL )
    v12 = 0;
  v221 = v12;
  v243 = v10;
  __n = *(_QWORD *)(v257 + 16);
  v13 = *(unsigned __int8 *)(v257 + 217);
  v273 = v13 - 1;
  v228 = v257 + 72;
  v14 = *(_QWORD *)(v257 + 56);
  v216 = 24 * v10;
  v235 = v14;
  v226 = v14 + 24 * v10;
  v229 = v257 + 96;
  v241 = v257 + 168;
  v236 = (const __m128i *)(v257 + 200);
  v242 = v257 + 120;
  v237 = (const __m128i *)(v257 + 152);
  v259 = *(_QWORD *)(v257 + 88);
  v260 = *(_QWORD *)(v257 + 112);
  v239 = *(_QWORD *)(v257 + 192);
  v15 = *(_QWORD *)(v257 + 176);
  v16 = *(const __m128i **)(v257 + 168);
  v240 = *(_QWORD *)(v257 + 144);
  v17 = *(_QWORD *)(v257 + 128);
  v18 = *(_QWORD *)(v257 + 120);
  v284 = v15;
  v222 = (__int64)v16->i64 + v15 + 1;
  v223 = v16 + 1;
  v234 = v17;
  v224 = v18 + v17 + 1;
  v280.i64[0] = v18;
  v225 = v18 + 16;
  v227 = v13;
  v238 = (unsigned __int8)v13;
  v19 = 1;
  v274 = v16;
  __s1 = v7;
  while ( 1 )
  {
    v20 = v19 + 1;
    if ( v19 == 3 )
      v20 = 3;
    v218 = v20;
    v217 = v19;
    v215 = v19;
    codexmate_lib::core::codex_config::read_text::hc57e0f5031a1d03f(v272, (__int64)v269, v268);
    v21 = *(_QWORD *)&v272[24];
    if ( *(_QWORD *)v272 != 11 )
    {
      v267[5] = *(_OWORD *)&v272[80];
      v267[4] = *(_OWORD *)&v272[64];
      v267[3] = *(_OWORD *)&v272[48];
      v267[2] = *(_OWORD *)&v272[32];
      *(_OWORD *)((char *)v267 + 8) = *(_OWORD *)&v272[8];
      *((_QWORD *)&v267[1] + 1) = *(_QWORD *)&v272[24];
      *(_QWORD *)&v267[0] = *(_QWORD *)v272;
      goto LABEL_248;
    }
    v288 = *(_QWORD *)&v272[8];
    __s2 = *(void **)&v272[16];
    codexmate_lib::core::mcp::parse_mcp_document::hd6580a239eb217f7(v230);
    v256 = v21;
    if ( !*(_QWORD *)&v230[48] )
    {
LABEL_23:
      v202 = *(_QWORD *)&v230[16];
      v201 = *(_OWORD *)v230;
      v36 = __s1;
      codexmate_lib::core::mcp::quote_toml::h9a3c92de86158d21((__int64)v233, (__int64)__s1, __n);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v233, v36);
      v37 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
      if ( !v37 )
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
      v38 = (_QWORD *)v37;
      *(_QWORD *)&__dst[0] = v233;
      *((_QWORD *)&__dst[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v200, &unk_1017C59E5, __dst);
      v38[2] = v200[2];
      v39 = v200[0];
      v38[1] = v200[1];
      *v38 = v39;
      v285.i64[0] = 1;
      v285.i64[1] = (__int64)v38;
      v286 = 1;
      v262[0] = v219;
      *(_QWORD *)&__dst[0] = v262;
      *((_QWORD *)&__dst[0] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v214, &unk_1017C59F7, __dst);
      v40 = v286;
      if ( v286 == v285.i64[0] )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v285);
      v41 = v285.i64[1];
      v42 = 3 * v40;
      *(_QWORD *)(v285.i64[1] + 8 * v42 + 16) = v214[2];
      v43 = v214[0];
      *(_QWORD *)(v41 + 8 * v42 + 8) = v214[1];
      *(_QWORD *)(v41 + 8 * v42) = v43;
      v286 = v40 + 1;
      v44 = codexmate_lib::core::mcp::quote_toml::h9a3c92de86158d21(
              (__int64)__dst,
              (__int64)*(&off_10196D700 + v238),
              qword_101676258[v238]);
      *(_QWORD *)&v262[0] = __dst;
      *((_QWORD *)&v262[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v213, &unk_1017C5A04, v262);
      if ( *(_QWORD *)&__dst[0] )
        v44 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__dst[0] + 1), *(_QWORD *)&__dst[0], 1);
      v45 = v286;
      if ( v286 == v285.i64[0] )
        v44 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v285);
      v46 = v285.i64[1];
      v47 = 3 * v45;
      *(_QWORD *)(v285.i64[1] + 8 * v47 + 16) = v213[2];
      v48 = v213[0];
      *(_QWORD *)(v46 + 8 * v47 + 8) = v213[1];
      *(_QWORD *)(v46 + 8 * v47) = v48;
      v286 = v45 + 1;
      if ( (unsigned __int8)v273 >= 2u )
      {
        if ( v244 != 0x8000000000000000LL )
        {
          core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v247, v259);
          if ( v66 )
          {
            v44 = codexmate_lib::core::mcp::quote_toml::h9a3c92de86158d21((__int64)__dst, v247, v259);
            *(_QWORD *)&v262[0] = __dst;
            *((_QWORD *)&v262[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v212, &unk_1017C5A1C, v262);
            if ( *(_QWORD *)&__dst[0] )
              v44 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__dst[0] + 1), *(_QWORD *)&__dst[0], 1);
            v67 = v286;
            if ( v286 == v285.i64[0] )
              v44 = alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v285);
            v68 = v285.i64[1];
            v69 = 3 * v67;
            *(_QWORD *)(v285.i64[1] + 8 * v69 + 16) = v212[2];
            v70 = v212[0];
            *(_QWORD *)(v68 + 8 * v69 + 8) = v212[1];
            *(_QWORD *)(v68 + 8 * v69) = v70;
            v286 = v67 + 1;
          }
        }
        if ( v243 )
        {
          _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hed38d5a7c6cf94b9(
            v262,
            v235,
            v226,
            v44);
          v71 = *((_QWORD *)&v262[0] + 1);
          v72 = *(_QWORD *)&v262[1];
          alloc::str::join_generic_copy::heca7a5e86402c6b6(
            __dst,
            *((_QWORD *)&v262[0] + 1),
            *(_QWORD *)&v262[1],
            &unk_101674B45,
            2);
          v282 = *(_QWORD **)&__dst[1];
          v281 = (__m128i)__dst[0];
          if ( v72 )
          {
            v73 = (_QWORD *)(v71 + 8);
            do
            {
              v74 = *(v73 - 1);
              if ( v74 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v73, v74, 1);
              v73 += 3;
              --v72;
            }
            while ( v72 );
          }
          if ( *(_QWORD *)&v262[0] )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v71, 24LL * *(_QWORD *)&v262[0], 8);
          *(_QWORD *)&__dst[0] = &v281;
          *((_QWORD *)&__dst[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(&v253, &unk_1017C5A29, __dst);
          v78 = v286;
          if ( v286 == v285.i64[0] )
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v285);
          v79 = v285.i64[1];
          v80 = 3 * v78;
          *(_QWORD *)(v285.i64[1] + 8 * v80 + 16) = v255;
          v81 = v253;
          *(_QWORD *)(v79 + 8 * v80 + 8) = v254;
          *(_QWORD *)(v79 + 8 * v80) = v81;
          v286 = v78 + 1;
          if ( v281.i64[0] )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v281.i64[1], v281.i64[0], 1);
        }
      }
      else if ( v245 != 0x8000000000000000LL )
      {
        core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v248, v260);
        if ( v49 )
        {
          codexmate_lib::core::mcp::quote_toml::h9a3c92de86158d21((__int64)__dst, v248, v260);
          *(_QWORD *)&v262[0] = __dst;
          *((_QWORD *)&v262[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(&v253, &unk_1017C5A13, v262);
          if ( *(_QWORD *)&__dst[0] )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__dst[0] + 1), *(_QWORD *)&__dst[0], 1);
          v50 = v286;
          if ( v286 == v285.i64[0] )
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v285);
          v51 = v285.i64[1];
          v52 = 3 * v50;
          *(_QWORD *)(v285.i64[1] + 8 * v52 + 16) = v255;
          v53 = v253;
          *(_QWORD *)(v51 + 8 * v52 + 8) = v254;
          *(_QWORD *)(v51 + 8 * v52) = v53;
          v286 = v50 + 1;
        }
      }
      if ( !v239 )
      {
LABEL_103:
        if ( !v240 )
        {
LABEL_129:
          v282 = (_QWORD *)v286;
          v281 = v285;
          if ( v233[0] )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v233[1], v233[0], 1);
          codexmate_lib::core::mcp::insert_mcp_block::hb6a75642a4639e3d(v262, &v201, v281.i64);
          v141 = *((_QWORD *)&v262[0] + 1);
          v142 = *(_QWORD *)&v262[1];
          alloc::str::join_generic_copy::heca7a5e86402c6b6(
            __dst,
            *((_QWORD *)&v262[0] + 1),
            *(_QWORD *)&v262[1],
            "\n# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)no entry found for keychange MCP server state",
            1);
          v144 = *(_QWORD *)&__dst[1];
          v282 = *(_QWORD **)&__dst[1];
          v281 = (__m128i)__dst[0];
          if ( *(_QWORD *)&__dst[1] )
          {
            v145 = v281.i64[1];
            if ( *(_BYTE *)(v281.i64[1] + *(_QWORD *)&__dst[1] - 1) != 10 )
            {
              v146 = *(_QWORD **)&__dst[1];
              if ( v281.i64[0] == *(_QWORD *)&__dst[1] )
              {
                alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
                  &v281,
                  *(_QWORD *)&__dst[1],
                  1,
                  1,
                  1,
                  v143);
                v145 = v281.i64[1];
                v146 = v282;
              }
              *((_BYTE *)v146 + v145) = 10;
              v282 = (_QWORD *)(v144 + 1);
            }
          }
          *(_QWORD *)&v272[24] = v282;
          *(__m128i *)&v272[8] = v281;
          *(_QWORD *)v272 = 11;
          HIDWORD(_RAX) = *(_DWORD *)&v230[36];
          if ( *(_QWORD *)&v230[32] )
          {
            v271.i64[0] = *(_QWORD *)&v230[32];
            v287 = v141;
            v148 = *(_QWORD *)&v230[48];
            if ( *(_QWORD *)&v230[48] )
            {
              v149 = *(_QWORD *)&v230[24];
              _R12D = ~_mm_movemask_epi8(_mm_load_si128(*(const __m128i **)&v230[24]));
              v151 = (const __m128i *)(*(_QWORD *)&v230[24] + 16LL);
              do
              {
                if ( !(_WORD)_R12D )
                {
                  do
                  {
                    v152 = _mm_movemask_epi8(_mm_load_si128(v151));
                    v149 -= 640;
                    ++v151;
                  }
                  while ( v152 == 0xFFFF );
                  _R12D = ~v152;
                }
                __asm { tzcnt   eax, r12d }
                v153 = -5 * _RAX;
                v154 = *(_QWORD *)(v149 + 8 * v153 - 40);
                if ( v154 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v149 + 8 * v153 - 32), v154, 1);
                --v148;
                _RAX = _R12D & (unsigned int)(_R12D - 1);
                _R12D &= _R12D - 1;
              }
              while ( v148 );
            }
            v155 = (40 * v271.i64[0] + 55) & 0xFFFFFFFFFFFFFFF0LL;
            v141 = v287;
            if ( v155 + v271.i64[0] != -17 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v230[24] - v155, v155 + v271.i64[0] + 17, 16);
          }
          if ( v142 )
          {
            v156 = (_QWORD *)(v141 + 8);
            do
            {
              v157 = *(v156 - 1);
              if ( v157 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v156, v157, 1);
              v156 += 3;
              --v142;
            }
            while ( v142 );
          }
          if ( *(_QWORD *)&v262[0] )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v141, 24LL * *(_QWORD *)&v262[0], 8);
          goto LABEL_154;
        }
        v112 = v286;
        if ( v286 == v285.i64[0] )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v285);
        v113 = v285.i64[1];
        v114 = 3 * v112;
        *(_QWORD *)(v285.i64[1] + 8 * v114) = 0;
        *(_QWORD *)(v113 + 8 * v114 + 8) = 1;
        *(_QWORD *)(v113 + 8 * v114 + 16) = 0;
        v286 = v112 + 1;
        *(_QWORD *)&__dst[0] = v233;
        *((_QWORD *)&__dst[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v208, &unk_1017C5A4C, __dst);
        v115 = v286;
        if ( v286 == v285.i64[0] )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v285);
        v116 = v285.i64[1];
        v117 = 3 * v115;
        *(_QWORD *)(v285.i64[1] + 8 * v117 + 16) = v208[2];
        v118 = v208[0];
        *(_QWORD *)(v116 + 8 * v117 + 8) = v208[1];
        *(_QWORD *)(v116 + 8 * v117) = v118;
        v286 = v115 + 1;
        LOWORD(v116) = _mm_movemask_epi8(_mm_load_si128((const __m128i *)v280.i64[0]));
        *(_QWORD *)&__dst[0] = v280.i64[0];
        *((_QWORD *)&__dst[0] + 1) = v225;
        *(_QWORD *)&__dst[1] = v224;
        WORD4(__dst[1]) = ~(_WORD)v116;
        *(_QWORD *)&__dst[2] = v240;
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::he07c4365ace7a405(
          &v205,
          __dst);
        v119 = v206;
        v120 = v207;
        if ( v207 >= 2 )
        {
          v168 = v206;
          if ( v207 >= 0x15 )
            core::slice::sort::stable::driftsort_main::hfe65d5b0347d955f(v206, v207, &v281);
          else
            core::slice::sort::shared::smallsort::insertion_sort_shift_left::hfaeeae3887c66215(v206, v207, 1, &v281);
          v121 = v205;
          v119 = v168;
        }
        else
        {
          v121 = v205;
          if ( !v207 )
          {
LABEL_127:
            if ( v121 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v119, 8 * v121, 8);
            goto LABEL_129;
          }
        }
        v232.i64[0] = v121;
        v287 = (unsigned __int64)&v119[v120];
        v276 = v119;
        v122 = v119;
        do
        {
          v126 = *v122;
          v204 = v126;
          v127 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(v237, v126);
          ++v122;
          v128 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v127 >> 57), (__m128i)0LL);
          v129 = *(const void **)(v126 + 8);
          v130 = *(_QWORD *)(v126 + 16);
          for ( i = 0; ; i += 16 )
          {
            v132 = v234 & v127;
            HIDWORD(_RCX) = v280.i32[1];
            v134 = _mm_loadu_si128((const __m128i *)(v280.i64[0] + v132));
            _R13D = _mm_movemask_epi8(_mm_cmpeq_epi8(v134, v128));
            if ( _R13D )
              break;
LABEL_118:
            if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v134, (__m128i)-1LL)) )
            {
              v138 = 1;
              v139 = 0;
              goto LABEL_122;
            }
            v127 = v132 + i + 16;
          }
          v271.i64[0] = v132;
          v249 = v128;
          v250.i64[0] = i;
          v251 = v134;
          while ( 1 )
          {
            __asm { tzcnt   ecx, r13d }
            _RCX = -(v234 & (v132 + _RCX));
            if ( v130 == *(_QWORD *)(v280.i64[0] + 48 * _RCX - 32) )
            {
              v136 = v280.i64[0] + 48 * _RCX;
              if ( !memcmp(v129, *(const void **)(v136 - 40), v130) )
                break;
            }
            v137 = _R13D - 1;
            LOWORD(v137) = _R13D & (_R13D - 1);
            v35 = (_WORD)v137 == 0;
            _R13D = v137;
            v132 = v271.i64[0];
            v128 = _mm_load_si128(&v249);
            i = v250.i64[0];
            v134 = _mm_load_si128(&v251);
            if ( v35 )
              goto LABEL_118;
          }
          v138 = *(_QWORD *)(v136 - 16);
          v139 = *(_QWORD *)(v136 - 8);
LABEL_122:
          codexmate_lib::core::mcp::quote_toml::h9a3c92de86158d21((__int64)&v277, v138, v139);
          v281.i64[0] = (__int64)&v204;
          v281.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b;
          v282 = &v277;
          v283 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v203, &unk_1017C5A66, &v281);
          if ( v277 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v278, v277, 1);
          v140 = v286;
          if ( v286 == v285.i64[0] )
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v285);
          v123 = v285.i64[1];
          v124 = 3 * v140;
          *(_QWORD *)(v285.i64[1] + 8 * v124 + 16) = v203[2];
          v125 = v203[0];
          *(_QWORD *)(v123 + 8 * v124 + 8) = v203[1];
          *(_QWORD *)(v123 + 8 * v124) = v125;
          v286 = v140 + 1;
        }
        while ( v122 != (__int64 *)v287 );
        v119 = v276;
        v121 = v232.i64[0];
        goto LABEL_127;
      }
      v82 = v286;
      if ( v286 == v285.i64[0] )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v285);
      v83 = v285.i64[1];
      v84 = 3 * v82;
      *(_QWORD *)(v285.i64[1] + 8 * v84) = 0;
      *(_QWORD *)(v83 + 8 * v84 + 8) = 1;
      *(_QWORD *)(v83 + 8 * v84 + 16) = 0;
      v286 = v82 + 1;
      *(_QWORD *)&__dst[0] = v233;
      *((_QWORD *)&__dst[0] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v211, &unk_1017C5A36, __dst);
      v85 = v286;
      if ( v286 == v285.i64[0] )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v285);
      v86 = v285.i64[1];
      v87 = 3 * v85;
      *(_QWORD *)(v285.i64[1] + 8 * v87 + 16) = v211[2];
      v88 = v211[0];
      *(_QWORD *)(v86 + 8 * v87 + 8) = v211[1];
      *(_QWORD *)(v86 + 8 * v87) = v88;
      v286 = v85 + 1;
      LOWORD(v86) = _mm_movemask_epi8(_mm_load_si128(v16));
      *(_QWORD *)&v262[0] = v16;
      *((_QWORD *)&v262[0] + 1) = v223;
      *(_QWORD *)&v262[1] = v222;
      WORD4(v262[1]) = ~(_WORD)v86;
      *(_QWORD *)&v262[2] = v239;
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::he07c4365ace7a405(
        &v277,
        v262);
      v89 = v278;
      v90 = v279;
      if ( v279 >= 2 )
      {
        v167 = v278;
        if ( v279 >= 0x15 )
          core::slice::sort::stable::driftsort_main::hfe65d5b0347d955f(v278, v279, &v281);
        else
          core::slice::sort::shared::smallsort::insertion_sort_shift_left::hfaeeae3887c66215(v278, v279, 1, &v281);
        v91 = v277;
        v89 = v167;
      }
      else
      {
        v91 = v277;
        if ( !v279 )
        {
LABEL_101:
          if ( v91 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v89, 8LL * (_QWORD)v91, 8);
          goto LABEL_103;
        }
      }
      v276 = v91;
      v271.i64[0] = (__int64)v89 + 8 * v90;
      v246 = v89;
      v92 = (__int64 *)v89;
      do
      {
        v96 = *v92;
        v210 = v96;
        v97 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(v236, v96);
        v287 = (unsigned __int64)(v92 + 1);
        _RCX = v97 >> 57;
        v99 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v97 >> 57), (__m128i)0LL);
        v100 = *(const void **)(v96 + 8);
        v101 = *(_QWORD *)(v96 + 16);
        for ( j = 0; ; j += 16 )
        {
          v103 = v284 & v97;
          v104 = _mm_loadu_si128((const __m128i *)((char *)v16 + v103));
          _R13D = _mm_movemask_epi8(_mm_cmpeq_epi8(v104, v99));
          if ( _R13D )
            break;
LABEL_92:
          _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v104, (__m128i)-1LL));
          if ( (_DWORD)_RCX )
          {
            v109 = 1;
            v110 = 0;
            v16 = v274;
            goto LABEL_96;
          }
          v97 = v103 + j + 16;
          v16 = v274;
        }
        v249.i64[0] = v103;
        v250 = v99;
        v251.i64[0] = j;
        v232 = v104;
        while ( 1 )
        {
          __asm { tzcnt   ecx, r13d }
          _RCX = -(__int64)(v284 & (v103 + _RCX));
          v106 = v274;
          if ( v101 == v274[3 * _RCX - 2].i64[0] )
          {
            v107 = &v274[3 * _RCX];
            if ( !memcmp(v100, (const void *)v107[-3].i64[1], v101) )
              break;
          }
          v108 = _R13D - 1;
          LOWORD(v108) = _R13D & (_R13D - 1);
          v35 = (_WORD)v108 == 0;
          _R13D = v108;
          v103 = v249.i64[0];
          v99 = _mm_load_si128(&v250);
          j = v251.i64[0];
          v104 = _mm_load_si128(&v232);
          if ( v35 )
            goto LABEL_92;
        }
        v109 = v107[-1].i64[0];
        v110 = v107[-1].i64[1];
        v16 = v106;
LABEL_96:
        codexmate_lib::core::mcp::quote_toml::h9a3c92de86158d21((__int64)&v281, v109, v110);
        v92 = (__int64 *)v287;
        *(_QWORD *)&__dst[0] = &v210;
        *((_QWORD *)&__dst[0] + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b;
        *(_QWORD *)&__dst[1] = &v281;
        *((_QWORD *)&__dst[1] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v209, &unk_1017C5A66, __dst);
        if ( v281.i64[0] )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v281.i64[1], v281.i64[0], 1);
        v111 = v286;
        if ( v286 == v285.i64[0] )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v285);
        v93 = v285.i64[1];
        v94 = 3 * v111;
        *(_QWORD *)(v285.i64[1] + 8 * v94 + 16) = v209[2];
        v95 = v209[0];
        *(_QWORD *)(v93 + 8 * v94 + 8) = v209[1];
        *(_QWORD *)(v93 + 8 * v94) = v95;
        v286 = v111 + 1;
      }
      while ( v92 != (__int64 *)v271.i64[0] );
      v89 = v246;
      v91 = v276;
      goto LABEL_101;
    }
    v22 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(&v230[56], v257);
    _RCX = v22 >> 57;
    v24 = *(_QWORD *)&v230[24];
    v25 = *(_QWORD *)&v230[32];
    v26 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v22 >> 57), (__m128i)0LL);
    v27 = *(_QWORD *)&v230[24] - 40LL;
    for ( k = 0; ; k += 16 )
    {
      v29 = v25 & v22;
      v30 = _mm_loadu_si128((const __m128i *)(v24 + v29));
      _R13D = _mm_movemask_epi8(_mm_cmpeq_epi8(v30, v26));
      v32 = __n;
      if ( _R13D )
        break;
LABEL_21:
      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v30, (__m128i)-1LL));
      v16 = v274;
      if ( (_DWORD)_RCX )
        goto LABEL_23;
      v22 = v29 + k + 16;
    }
    v287 = v29;
    v271 = v26;
    v249.i64[0] = v25;
    v250.i64[0] = k;
    v251 = v30;
    while ( 1 )
    {
      __asm { tzcnt   ecx, r13d }
      _RCX = -(__int64)(v25 & (v29 + _RCX));
      v33 = __s1;
      if ( v32 == *(_QWORD *)(v27 + 40 * _RCX + 16) && !memcmp(__s1, *(const void **)(v27 + 40 * _RCX + 8), v32) )
        break;
      v34 = _R13D - 1;
      LOWORD(v34) = _R13D & (_R13D - 1);
      v35 = (_WORD)v34 == 0;
      _R13D = v34;
      v29 = v287;
      v26 = _mm_load_si128(&v271);
      v25 = v249.i64[0];
      k = v250.i64[0];
      v30 = _mm_load_si128(&v251);
      if ( v35 )
        goto LABEL_21;
    }
    codexmate_lib::core::mcp::prepare_existing_mcp_block::h411c36bd5386c3f8(v272, __s2, v256, v33, v32);
    v54 = *(_QWORD *)&v230[16];
    if ( *(_QWORD *)&v230[16] )
    {
      v55 = (_QWORD *)(*(_QWORD *)&v230[8] + 8LL);
      do
      {
        v56 = *(v55 - 1);
        if ( v56 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v55, v56, 1);
        v55 += 3;
        --v54;
      }
      while ( v54 );
    }
    HIDWORD(_RAX) = *(_DWORD *)&v230[4];
    if ( *(_QWORD *)v230 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v230[8], 24LL * *(_QWORD *)v230, 8);
    v58 = *(_QWORD *)&v230[32];
    if ( *(_QWORD *)&v230[32] )
    {
      v59 = *(_QWORD *)&v230[48];
      if ( *(_QWORD *)&v230[48] )
      {
        v60 = *(_QWORD *)&v230[24];
        _R13D = ~_mm_movemask_epi8(_mm_load_si128(*(const __m128i **)&v230[24]));
        v62 = (const __m128i *)(*(_QWORD *)&v230[24] + 16LL);
        do
        {
          if ( !(_WORD)_R13D )
          {
            do
            {
              v63 = _mm_movemask_epi8(_mm_load_si128(v62));
              v60 -= 640;
              ++v62;
            }
            while ( v63 == 0xFFFF );
            _R13D = ~v63;
          }
          __asm { tzcnt   eax, r13d }
          v64 = -5 * _RAX;
          v65 = *(_QWORD *)(v60 + 8 * v64 - 40);
          if ( v65 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v60 + 8 * v64 - 32), v65, 1);
          --v59;
          _RAX = _R13D & (unsigned int)(_R13D - 1);
          _R13D &= _R13D - 1;
        }
        while ( v59 );
      }
      v75 = (40 * v58 + 55) & 0xFFFFFFFFFFFFFFF0LL;
      v76 = v75 + v58 + 17;
      if ( v76 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v230[24] - v75, v76, 16);
    }
    v77 = *(_QWORD *)v272;
    if ( *(_QWORD *)v272 != 11 )
    {
      v280 = *(__m128i *)&v272[8];
      v193 = *(_QWORD **)&v272[24];
      v263 = *(_OWORD *)&v272[32];
      v264 = *(_OWORD *)&v272[48];
      v265 = *(_OWORD *)&v272[64];
      v266 = *(_OWORD *)&v272[80];
      goto LABEL_245;
    }
LABEL_154:
    v287 = *(_QWORD *)&v272[8];
    v158 = *(_QWORD *)&v272[16];
    _$LT$toml_edit..document..Document$u20$as$u20$core..str..traits..FromStr$GT$::from_str::h65e4d7afdee388aa(v272);
    if ( *(_QWORD *)v272 == 2 )
    {
      qmemcpy(v262, &v272[8], 0x60u);
      v277 = v262;
      v278 = _$LT$toml_edit..parser..errors..TomlError$u20$as$u20$core..fmt..Display$GT$::fmt::h82500e813022202e;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v281, &unk_1017C5AAC, &v277);
      v280 = _mm_load_si128(&v281);
      v193 = v282;
      if ( *((_QWORD *)&v262[1] + 1) )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v262[2], *((_QWORD *)&v262[1] + 1), 1);
      if ( *((_QWORD *)&v262[4] + 1) != 0x8000000000000000LL && *((_QWORD *)&v262[4] + 1) )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v262[5], *((_QWORD *)&v262[4] + 1), 1);
      v169 = *((_QWORD *)&v262[3] + 1);
      v170 = *(_QWORD *)&v262[4];
      if ( *(_QWORD *)&v262[4] )
      {
        v171 = (_QWORD *)(*((_QWORD *)&v262[3] + 1) + 8LL);
        do
        {
          v172 = *(v171 - 1);
          if ( v172 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v171, v172, 1);
          v171 += 3;
          --v170;
        }
        while ( v170 );
      }
      if ( *(_QWORD *)&v262[3] )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v169, 24LL * *(_QWORD *)&v262[3], 8);
      v77 = 9;
      v173 = v287;
      if ( !v287 )
        goto LABEL_245;
      goto LABEL_218;
    }
    memcpy(__dst, &v272[40], sizeof(__dst));
    v271 = *(__m128i *)&v272[16];
    *(_OWORD *)&v230[88] = __dst[3];
    *(_OWORD *)&v230[72] = __dst[2];
    *(_OWORD *)&v230[56] = __dst[1];
    *(_OWORD *)&v230[40] = __dst[0];
    memcpy(&v230[104], &__dst[4], 0x90u);
    v159 = _mm_load_si128(&v271);
    *(__m128i *)&v230[16] = v159;
    *(_QWORD *)&v230[32] = *(_QWORD *)&v272[32];
    *(_OWORD *)v230 = *(_OWORD *)v272;
    codexmate_lib::core::mcp::editable_mcp_server_table::hbad15a135f5ae9f0(v272, v230, __s1, __n);
    v77 = *(_QWORD *)v272;
    v160 = *(_QWORD *)&v272[8];
    if ( *(_QWORD *)v272 != 11 )
    {
      v193 = *(_QWORD **)&v272[24];
      v263 = *(_OWORD *)&v272[32];
      v264 = *(_OWORD *)&v272[48];
      v265 = *(_OWORD *)&v272[64];
      v266 = *(_OWORD *)&v272[80];
      v280 = _mm_loadl_epi64((const __m128i *)&v272[16]);
      core::ptr::drop_in_place$LT$toml_edit..document..Document$GT$::hcd2652bb7f1de8eb(v230);
      v280 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v160, v280);
      v173 = v287;
      if ( !v287 )
      {
LABEL_245:
        v267[5] = v266;
        v267[4] = v265;
        v267[3] = v264;
        v267[2] = v263;
        *((_QWORD *)&v267[1] + 1) = v193;
        *(_QWORD *)&v267[0] = v77;
        *(__m128i *)((char *)v267 + 8) = _mm_load_si128(&v280);
LABEL_246:
        if ( v288 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v288, 1);
        goto LABEL_248;
      }
LABEL_218:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v158, v173, 1);
      goto LABEL_245;
    }
    *(_QWORD *)v272 = 5;
    *(_QWORD *)&v272[8] = 0x8000000000000003LL;
    *(_QWORD *)&v272[32] = 0x8000000000000003LL;
    *(_QWORD *)&v272[56] = 0x8000000000000003LL;
    v272[80] = v258;
    toml_edit::table::Table::insert::hb018739605f59eb7(__dst, v160, &unk_101674B6F, 7, v272);
    if ( LODWORD(__dst[0]) != 12 )
      core::ptr::drop_in_place$LT$toml_edit..item..Item$GT$::hdb318a6f14234e1d(__dst);
    _$LT$toml_edit..value..Value$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h9b73b1de15a8cca9(
      v272,
      *(&off_10196D700 + v238),
      qword_101676258[v238]);
    toml_edit::table::Table::insert::hb018739605f59eb7(__dst, v160, &unk_101674B58, 9, v272);
    if ( LODWORD(__dst[0]) != 12 )
      core::ptr::drop_in_place$LT$toml_edit..item..Item$GT$::hdb318a6f14234e1d(__dst);
    if ( (unsigned __int8)v273 >= 2u )
    {
      toml_edit::table::Table::remove::hc792c60f6bbc5b1e(v272);
      if ( *(_DWORD *)v272 != 12 )
        core::ptr::drop_in_place$LT$toml_edit..item..Item$GT$::hdb318a6f14234e1d(v272);
      codexmate_lib::core::mcp::set_optional_string::hc483d8d0488dd0fc(v160, (__int64)&unk_101674B65, 7, v220, v259);
      if ( v243 )
      {
        *(_QWORD *)&v262[3] = 0x8000000000000000LL;
        BYTE8(v262[7]) = 0;
        *((_QWORD *)&v262[4] + 1) = 0x8000000000000003LL;
        *(_QWORD *)&v262[6] = 0x8000000000000003LL;
        *(_QWORD *)&v262[0] = 0;
        *((_QWORD *)&v262[1] + 1) = 0;
        v262[2] = 8u;
        v161 = 0;
        do
        {
          _$LT$toml_edit..value..Value$u20$as$u20$core..convert..From$LT$$RF$str$GT$$GT$::from::h9b73b1de15a8cca9(
            v272,
            *(_QWORD *)(v235 + v161 + 8),
            *(_QWORD *)(v235 + v161 + 16));
          toml_edit::array::Array::value_op::h62d4023e55e18ba2(v262, v272, 1);
          v161 += 24;
        }
        while ( v216 != v161 );
        qmemcpy(&v272[8], v262, 0x80u);
        *(_QWORD *)v272 = 7;
        toml_edit::table::Table::insert::hb018739605f59eb7(
          __dst,
          v160,
          "argsopenwithkindsavetrueuuidemitshowhide",
          4,
          v272);
        if ( LODWORD(__dst[0]) != 12 )
          core::ptr::drop_in_place$LT$toml_edit..item..Item$GT$::hdb318a6f14234e1d(__dst);
      }
      else
      {
        toml_edit::table::Table::remove::hc792c60f6bbc5b1e(v272);
        if ( *(_DWORD *)v272 != 12 )
          core::ptr::drop_in_place$LT$toml_edit..item..Item$GT$::hdb318a6f14234e1d(v272);
      }
    }
    else
    {
      toml_edit::table::Table::remove::hc792c60f6bbc5b1e(v272);
      if ( *(_DWORD *)v272 != 12 )
        core::ptr::drop_in_place$LT$toml_edit..item..Item$GT$::hdb318a6f14234e1d(v272);
      toml_edit::table::Table::remove::hc792c60f6bbc5b1e(v272);
      if ( *(_DWORD *)v272 != 12 )
        core::ptr::drop_in_place$LT$toml_edit..item..Item$GT$::hdb318a6f14234e1d(v272);
      codexmate_lib::core::mcp::set_optional_string::hc483d8d0488dd0fc(v160, (__int64)&unk_101674B6C, 3, v221, v260);
    }
    codexmate_lib::core::mcp::replace_string_table::h9fa9a983a0d54fdf(v160, &unk_101674B76, 3, v241);
    codexmate_lib::core::mcp::replace_string_table::h9fa9a983a0d54fdf(v160, &unk_101674B79, 7, v242);
    *(_QWORD *)&__dst[0] = 0;
    *((_QWORD *)&__dst[0] + 1) = 1;
    *(_QWORD *)&__dst[1] = 0;
    *(_QWORD *)&v272[16] = 1610612768;
    *(_QWORD *)v272 = __dst;
    *(_QWORD *)&v272[8] = &anon_10420c9971c21f44d230d15b39fb3fec_964;
    if ( (unsigned __int8)toml_edit::encode::_$LT$impl$u20$core..fmt..Display$u20$for$u20$toml_edit..document..Document$GT$::fmt::h4eb41f41630bb967(
                            v230,
                            v272) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_10420c9971c21f44d230d15b39fb3fec_965,
        55,
        &v281,
        &anon_10420c9971c21f44d230d15b39fb3fec_976,
        &anon_10420c9971c21f44d230d15b39fb3fec_967);
    v162 = __dst[0];
    v163 = *(_QWORD *)&__dst[1];
    core::ptr::drop_in_place$LT$toml_edit..document..Document$GT$::hcd2652bb7f1de8eb(v230);
    if ( v287 )
      *(double *)v159.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v158, v287, 1);
    v164 = __s2;
    if ( v163 == v256 && !memcmp(*((const void **)&v162 + 1), __s2, v256) )
      break;
    codexmate_lib::core::codex_config::read_text::hc57e0f5031a1d03f(v272, (__int64)v269, v268);
    v165 = *(_QWORD *)&v272[8];
    v166 = *(_QWORD *)&v272[16];
    if ( *(_QWORD *)v272 != 11 )
    {
      v267[5] = *(_OWORD *)&v272[80];
      v267[4] = *(_OWORD *)&v272[64];
      v267[3] = *(_OWORD *)&v272[48];
      v267[2] = *(_OWORD *)&v272[32];
      *(_OWORD *)((char *)v267 + 8) = *(_OWORD *)&v272[8];
      *((_QWORD *)&v267[1] + 1) = *(_QWORD *)&v272[24];
      *(_QWORD *)&v267[0] = *(_QWORD *)v272;
LABEL_220:
      if ( (_QWORD)v162 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v162 + 1), v162, 1);
      goto LABEL_246;
    }
    if ( *(_QWORD *)&v272[24] == v256 && !memcmp(*(const void **)&v272[16], __s2, v256) )
    {
      v190 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(
               v269,
               v268,
               *((__int64 *)&v162 + 1),
               v163,
               1);
      if ( !v190 )
      {
        *(_QWORD *)&v267[0] = 11;
        if ( v165 )
          *(double *)v159.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v166, v165, 1);
        if ( (_QWORD)v162 )
          *(double *)v159.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v162 + 1), v162, 1);
        v174 = v288;
        v164 = __s2;
        if ( v288 )
          goto LABEL_226;
        goto LABEL_227;
      }
      *(_QWORD *)&__dst[0] = v190;
      *(_QWORD *)v272 = v231;
      *(_QWORD *)&v272[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      *(_QWORD *)&v272[16] = __dst;
      *(_QWORD *)&v272[24] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v230, &unk_1017C59A2, v272);
      *(_OWORD *)v272 = *(_OWORD *)v230;
      *(_QWORD *)&v272[16] = *(_QWORD *)&v230[16];
      if ( (__dst[0] & 3) == 1 )
      {
        v280.i64[0] = *(_QWORD *)&__dst[0] - 1LL;
        v287 = *(_QWORD *)(*(_QWORD *)&__dst[0] - 1LL);
        v191 = *(_QWORD *)(*(_QWORD *)&__dst[0] + 7LL);
        if ( *(_QWORD *)v191 )
          (*(void (__fastcall **)(unsigned __int64, double))v191)(v287, *(double *)v159.i64);
        v192 = *(_QWORD *)(v191 + 8);
        if ( v192 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v287, v192, *(_QWORD *)(v191 + 16));
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v280.i64[0], 24, 8);
      }
      *(_OWORD *)((char *)v267 + 8) = *(_OWORD *)v272;
      *((_QWORD *)&v267[1] + 1) = *(_QWORD *)&v272[16];
      *(_QWORD *)&v267[0] = 10;
      if ( v165 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v166, v165, 1);
      goto LABEL_220;
    }
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u )
    {
      *(_QWORD *)v230 = v231;
      *(_QWORD *)&v230[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
      *(_QWORD *)&v230[16] = &v215;
      *(_QWORD *)&v230[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      *(_QWORD *)&v230[32] = &unk_101674A80;
      *(_QWORD *)&v230[40] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6;
      *(_QWORD *)&v272[48] = 2;
      *(_QWORD *)&v272[56] = "codexmate_lib::core::codex_config";
      *(_QWORD *)&v272[64] = 33;
      *(_QWORD *)&v272[80] = &unk_1017C5943;
      *(_QWORD *)&v272[88] = v230;
      *(_QWORD *)v272 = 0;
      *(_QWORD *)&v272[8] = "codexmate_lib::core::codex_config";
      *(_QWORD *)&v272[16] = 33;
      *(_QWORD *)&v272[24] = 0;
      *(_QWORD *)&v272[32] = "src/core/codex_config.rs";
      *(_QWORD *)&v272[40] = 24;
      *(_QWORD *)&v272[72] = 0x1B00000001LL;
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v281, v272);
    }
    if ( v165 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v166, v165, 1);
    if ( (_QWORD)v162 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v162 + 1), v162, 1);
    if ( v288 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v288, 1);
    v16 = v274;
    if ( v217 != 3 )
    {
      v19 = v218;
      if ( v218 <= 3 )
        continue;
    }
    *(_QWORD *)v272 = v231;
    *(_QWORD *)&v272[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    alloc::fmt::format::format_inner::h3c16c74008a310d4((char *)v267 + 8, &unk_1017C58FB, v272);
    *(_QWORD *)&v267[0] = 10;
    goto LABEL_248;
  }
  v174 = v288;
  if ( (_QWORD)v162 )
    *(double *)v159.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v162 + 1), v162, 1);
  if ( v174 )
LABEL_226:
    *(double *)v159.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v164, v174, 1);
LABEL_227:
  v175 = v269;
  codexmate_lib::core::mcp::load_mcp_servers::h201cbab0198c4973(v272, (__int64)v269, v268);
  v176 = *(_QWORD *)v272;
  v177 = *(_QWORD *)&v272[8];
  v178 = *(_QWORD *)&v272[16];
  v179 = *(_QWORD *)&v272[24];
  if ( *(_QWORD *)v272 == 11 )
  {
    v180 = 224LL * *(_QWORD *)&v272[24];
    v181 = *(_QWORD *)&v272[16] + 224LL * *(_QWORD *)&v272[24];
    *(_QWORD *)&v267[0] = *(_QWORD *)&v272[16];
    *(_QWORD *)&v267[1] = *(_QWORD *)&v272[8];
    *((_QWORD *)&v267[0] + 1) = *(_QWORD *)&v272[16];
    *((_QWORD *)&v267[1] + 1) = v181;
    v182 = 0x8000000000000000LL;
    if ( *(_QWORD *)&v272[24] )
    {
      v178 = *(_QWORD *)&v272[16] + 224LL;
      do
      {
        v175 = (void *)(v178 - 224);
        memcpy(v272, (const void *)(v178 - 224), 0xE0u);
        if ( *(_QWORD *)&v272[16] == __n && (v175 = __s1, !memcmp(*(const void **)&v272[8], __s1, __n)) )
        {
          v183 = *(_OWORD **)v272;
          if ( *(_QWORD *)v272 != 0x8000000000000000LL )
          {
            *((_QWORD *)&v267[0] + 1) = v178;
            memcpy(&v230[8], (const void *)(v178 - 216), 0xD8u);
            v184 = *(_QWORD *)(v178 - 208);
            *(_QWORD *)v272 = *(_QWORD *)(v178 - 216);
            *(_QWORD *)&v272[8] = v184;
            *(_QWORD *)&v272[16] = *(_QWORD *)(v178 - 200);
            *(_QWORD *)&v272[24] = *(_QWORD *)(v178 - 192);
            *(_OWORD *)&v272[32] = *(_OWORD *)(v178 - 184);
            *(_QWORD *)&v272[48] = *(_QWORD *)(v178 - 168);
            *(_QWORD *)&v272[56] = *(_QWORD *)(v178 - 160);
            v287 = *(_QWORD *)&v230[72];
            v284 = *(_QWORD *)&v230[80];
            v185 = *(_QWORD *)&v230[88];
            v186 = *(_QWORD *)&v230[96];
            v181 = *(_QWORD *)&v230[104];
            v180 = *(_QWORD *)&v230[112];
            __dst[2] = *(_OWORD *)(v178 - 72);
            __dst[1] = *(_OWORD *)(v178 - 88);
            v187 = *(_QWORD *)(v178 - 104);
            *((_QWORD *)&__dst[0] + 1) = *(_QWORD *)(v178 - 96);
            *(_QWORD *)&__dst[0] = v187;
            v262[2] = *(_OWORD *)(v178 - 24);
            v262[1] = *(_OWORD *)(v178 - 40);
            v188 = *(_QWORD *)(v178 - 56);
            *((_QWORD *)&v262[0] + 1) = *(_QWORD *)(v178 - 48);
            *(_QWORD *)&v262[0] = v188;
            v258 = v230[216];
            v189 = v230[217];
            WORD2(v263) = *(_WORD *)(v178 - 2);
            LODWORD(v263) = *(_DWORD *)(v178 - 6);
            goto LABEL_263;
          }
        }
        else
        {
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..McpServerSummary$GT$::hf8a16a03b52b2b9a(v272);
        }
        v178 += 224;
        v35 = v180 == 224;
        v180 -= 224;
        v182 = 0x8000000000000000LL;
      }
      while ( !v35 );
      *((_QWORD *)&v267[0] + 1) = v181;
    }
    *(_QWORD *)v230 = 0x8000000000000000LL;
    core::ptr::drop_in_place$LT$core..ops..control_flow..ControlFlow$LT$codexmate_lib..core..models..McpServerSummary$GT$$GT$::hc95b050e11ae6969(
      v230,
      v175,
      v176,
      v177,
      *(double *)v159.i64);
    v196 = v257;
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v277, v257);
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v281, v196 + 24);
    if ( v244 == 0x8000000000000000LL )
    {
      v287 = 0x8000000000000000LL;
    }
    else
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v272, v228);
      v287 = *(_QWORD *)v272;
      v284 = *(_QWORD *)&v272[8];
      v178 = *(_QWORD *)&v272[16];
    }
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h7fbe18e4ad208c44(&v263, v196 + 48);
    if ( v245 != 0x8000000000000000LL )
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v272, v229);
      v182 = *(_QWORD *)v272;
      v181 = *(_QWORD *)&v272[8];
      v180 = *(_QWORD *)&v272[16];
    }
    v280 = _mm_loadu_si128(v237);
    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h75267910c8af8f2e(v272);
    v186 = v182;
    *(__m128i *)&v272[32] = v280;
    *(_OWORD *)v230 = *(_OWORD *)v272;
    *(_OWORD *)&v230[16] = *(_OWORD *)&v272[16];
    *(__m128i *)&v230[32] = v280;
    v280 = _mm_loadu_si128(v236);
    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h75267910c8af8f2e(v272);
    v159 = _mm_load_si128(&v280);
    v262[0] = *(_OWORD *)v272;
    v262[1] = *(_OWORD *)&v272[16];
    v262[2] = v159;
    v183 = v277;
    *(_QWORD *)v272 = v278;
    *(_QWORD *)&v272[8] = v279;
    *(_QWORD *)&v272[32] = v282;
    *(__m128i *)&v272[16] = v281;
    *(_QWORD *)&v272[56] = v264;
    *(_OWORD *)&v272[40] = v263;
    __dst[2] = *(_OWORD *)&v230[32];
    __dst[1] = *(_OWORD *)&v230[16];
    __dst[0] = *(_OWORD *)v230;
    v189 = v227;
    v185 = v178;
LABEL_263:
    v197 = v261;
    *v261 = v183;
    v198 = *(_QWORD *)&v272[8];
    v197[1] = *(_QWORD *)v272;
    v197[2] = v198;
    v197[3] = *(_QWORD *)&v272[16];
    v197[4] = *(_QWORD *)&v272[24];
    v197[5] = *(_QWORD *)&v272[32];
    v197[6] = *(_QWORD *)&v272[40];
    v197[7] = *(_QWORD *)&v272[48];
    v197[8] = *(_QWORD *)&v272[56];
    v197[9] = v287;
    v197[10] = v284;
    v197[11] = v185;
    v197[12] = v186;
    v197[13] = v181;
    v197[14] = v180;
    *(_OWORD *)(v197 + 19) = __dst[2];
    *(_OWORD *)(v197 + 17) = __dst[1];
    *(_OWORD *)(v197 + 15) = __dst[0];
    v199 = *((_QWORD *)&v262[0] + 1);
    v197[21] = *(_QWORD *)&v262[0];
    v197[22] = v199;
    *(_OWORD *)(v197 + 23) = v262[1];
    *(_OWORD *)(v197 + 25) = v262[2];
    *((_BYTE *)v197 + 216) = v258;
    *((_BYTE *)v197 + 217) = v189;
    *(_DWORD *)((char *)v197 + 218) = v263;
    *((_WORD *)v197 + 111) = WORD2(v263);
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h320a351df85c37a2(
      v267,
      *(double *)v159.i64);
    return v197;
  }
  else
  {
    v195 = v261;
    v261[12] = *(_QWORD *)&v272[88];
    v195[11] = *(_QWORD *)&v272[80];
    v195[10] = *(_QWORD *)&v272[72];
    v195[9] = *(_QWORD *)&v272[64];
    v195[8] = *(_QWORD *)&v272[56];
    v195[7] = *(_QWORD *)&v272[48];
    *(_OWORD *)(v195 + 5) = *(_OWORD *)&v272[32];
    v195[1] = v176;
    v195[2] = v177;
    v195[3] = v178;
    v195[4] = v179;
    *v195 = 0x8000000000000000LL;
    return v195;
  }
}
