// __ZN13codexmate_lib4core5relay10translator33openai_chat_to_anthropic_response @ 0x100879a70 | 基线 same-set
// [FULL decompile]

__int64 __fastcall codexmate_lib::core::relay::translator::openai_chat_to_anthropic_response::h65764620b8ca243c(
        __int64 a1,
        __int64 a2)
{
  int v2; // r13d
  __int64 v4; // rax
  const char *v5; // r15
  signed __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rax
  const char *v10; // r12
  signed __int64 v11; // rdx
  __int64 v12; // r13
  _QWORD *v13; // rax
  __int64 v14; // rax
  __int64 v15; // r13
  __int64 v16; // rax
  size_t v17; // r15
  __int64 v18; // rax
  _DWORD *v19; // rax
  _DWORD *v20; // rax
  __int64 *v21; // rdi
  _QWORD *v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  char *v25; // rdx
  _QWORD *v26; // rsi
  _DWORD *v27; // rax
  size_t v28; // rcx
  __int64 v29; // rdi
  void *v30; // rax
  size_t v31; // r13
  size_t v32; // r15
  _QWORD *v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  char *v36; // rdx
  __int64 v37; // r15
  __int64 v38; // rax
  __int64 v39; // rcx
  char *v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // rax
  char *v46; // r15
  __int64 v47; // rcx
  __int64 v48; // r12
  __int64 v49; // r13
  char **v50; // rax
  __int64 v51; // r13
  char *v52; // rcx
  char *v53; // rsi
  __int64 v54; // rax
  char *v55; // r15
  signed __int64 v56; // r12
  __int64 v57; // r13
  int v58; // r12d
  __int64 v59; // rax
  signed __int64 v60; // r13
  char *v61; // r15
  __int64 *v62; // rdi
  __int64 v63; // rsi
  __int64 v64; // rax
  __int64 v65; // r12
  __int64 v66; // rsi
  __int64 v67; // r13
  _DWORD *v68; // rax
  _QWORD *v69; // rax
  __int64 *v70; // rdi
  _QWORD *v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rdx
  char *v74; // rdx
  _QWORD *v75; // rsi
  _WORD *v76; // rax
  __int64 v77; // r13
  __int64 v78; // rax
  size_t v79; // r12
  __int64 *v80; // rdi
  _QWORD *v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rdx
  char *v84; // rdx
  _QWORD *v85; // rsi
  size_t v86; // r12
  _DWORD *v87; // rax
  __int64 v88; // r13
  __int64 v89; // rax
  __int64 *v90; // rdi
  _QWORD *v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rdx
  char *v94; // rdx
  _QWORD *v95; // rsi
  __int64 v96; // rax
  _QWORD *v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rdx
  char *v100; // rdx
  __int64 v101; // r12
  __int64 v102; // rax
  __int64 v103; // rcx
  __int64 v104; // rdx
  char *v105; // rdi
  char *v106; // rsi
  __int64 v107; // rax
  const void *v108; // r13
  __int64 v109; // r15
  _QWORD *v110; // rax
  __int64 v111; // r12
  _QWORD *v112; // rax
  void *v113; // rax
  const void *v114; // r12
  __int64 v115; // rax
  char *v116; // rdi
  __int64 v117; // rsi
  __int64 v118; // rax
  __int64 v119; // r14
  __int64 v120; // rax
  __int64 v121; // rcx
  size_t v122; // r15
  __int64 v123; // rax
  __int64 v124; // rcx
  __int64 v125; // r12
  __int64 v126; // r13
  __int64 v127; // r14
  _WORD *v128; // rax
  __int64 v129; // rax
  size_t v130; // r15
  __int64 *v131; // rdi
  _QWORD *v132; // rax
  __int64 v133; // rcx
  __int64 v134; // rdx
  char *v135; // rdx
  _QWORD *v136; // rsi
  _DWORD *v137; // rax
  _DWORD *v138; // rax
  __int64 *v139; // rdi
  _QWORD *v140; // rax
  __int64 v141; // rcx
  __int64 v142; // rdx
  char *v143; // rdx
  _QWORD *v144; // rsi
  _DWORD *v145; // rax
  __int64 v146; // rax
  __int64 *v147; // rdi
  _QWORD *v148; // rax
  __int64 v149; // rcx
  __int64 v150; // rdx
  char *v151; // rdx
  _QWORD *v152; // rsi
  __int64 v153; // r14
  __int64 v154; // rax
  __int64 v155; // rax
  __int64 *v156; // rdi
  _QWORD *v157; // rax
  __int64 v158; // rcx
  __int64 v159; // rdx
  char *v160; // rdx
  _QWORD *v161; // rsi
  _DWORD *v162; // rax
  __int64 *v163; // rdi
  _QWORD *v164; // rax
  __int64 v165; // rcx
  __int64 v166; // rdx
  char *v167; // rdx
  _QWORD *v168; // rsi
  __int64 v169; // r14
  void *v170; // rax
  size_t v171; // rbx
  size_t v172; // r12
  __int64 v173; // rax
  __int64 *v174; // rdi
  size_t v175; // r12
  _QWORD *v176; // rax
  __int64 v177; // rcx
  __int64 v178; // rdx
  char *v179; // rdx
  _QWORD *v180; // rsi
  signed __int64 v181; // rbx
  void *v182; // rax
  __int64 *v183; // rdi
  _QWORD *v184; // rax
  __int64 v185; // rcx
  __int64 v186; // rdx
  char *v187; // rdx
  _QWORD *v188; // rsi
  __int64 v189; // rax
  __int64 v190; // r13
  void *v191; // rax
  __int64 *v192; // rdi
  _QWORD *v193; // rax
  __int64 v194; // rcx
  __int64 v195; // rdx
  char *v196; // rdx
  _QWORD *v197; // rsi
  void *v198; // rax
  _QWORD *v199; // rax
  __int64 v200; // rcx
  __int64 v201; // rdx
  char *v202; // rdx
  _QWORD *v203; // rax
  __int64 v204; // rcx
  __int64 v205; // rdx
  __int64 v206; // rdx
  _DWORD *v207; // rax
  __int64 v208; // rdi
  __int64 i; // r15
  __int64 v211; // rax
  __int64 v212; // rax
  void *v213; // rax
  __int64 v214; // [rsp+8h] [rbp-238h]
  __int64 *v215; // [rsp+10h] [rbp-230h]
  __int64 v217; // [rsp+20h] [rbp-220h]
  __int64 v218; // [rsp+28h] [rbp-218h]
  char *v219; // [rsp+30h] [rbp-210h] BYREF
  __int64 v220; // [rsp+38h] [rbp-208h]
  size_t v221; // [rsp+40h] [rbp-200h]
  __int64 v222; // [rsp+48h] [rbp-1F8h]
  int v223; // [rsp+54h] [rbp-1ECh]
  void *__dst; // [rsp+58h] [rbp-1E8h]
  void *v225; // [rsp+60h] [rbp-1E0h]
  void *v226; // [rsp+68h] [rbp-1D8h]
  __int64 v227; // [rsp+70h] [rbp-1D0h]
  __int64 v228; // [rsp+78h] [rbp-1C8h] BYREF
  _DWORD *v229; // [rsp+80h] [rbp-1C0h]
  __int64 v230; // [rsp+88h] [rbp-1B8h]
  __int64 v231; // [rsp+90h] [rbp-1B0h] BYREF
  size_t v232; // [rsp+98h] [rbp-1A8h]
  __int64 v233; // [rsp+A0h] [rbp-1A0h]
  signed __int64 v234; // [rsp+A8h] [rbp-198h]
  __int64 v235; // [rsp+B0h] [rbp-190h] BYREF
  __int64 v236; // [rsp+B8h] [rbp-188h]
  __int64 v237; // [rsp+C0h] [rbp-180h]
  _WORD *v238; // [rsp+C8h] [rbp-178h]
  int v239; // [rsp+D4h] [rbp-16Ch]
  _DWORD *v240; // [rsp+D8h] [rbp-168h] BYREF
  __int64 v241; // [rsp+E0h] [rbp-160h]
  __int64 v242; // [rsp+E8h] [rbp-158h]
  void *v243; // [rsp+F0h] [rbp-150h]
  size_t __n; // [rsp+F8h] [rbp-148h]
  size_t v245; // [rsp+100h] [rbp-140h]
  signed __int64 v246; // [rsp+108h] [rbp-138h]
  __int64 v247; // [rsp+110h] [rbp-130h] BYREF
  _DWORD *v248; // [rsp+118h] [rbp-128h]
  __int64 v249; // [rsp+120h] [rbp-120h]
  __int64 v250; // [rsp+128h] [rbp-118h]
  size_t v251; // [rsp+130h] [rbp-110h]
  void *__src; // [rsp+138h] [rbp-108h]
  __int64 v253; // [rsp+140h] [rbp-100h] BYREF
  size_t v254; // [rsp+148h] [rbp-F8h]
  size_t v255; // [rsp+150h] [rbp-F0h]
  __int64 v256; // [rsp+158h] [rbp-E8h]
  size_t v257; // [rsp+160h] [rbp-E0h]
  __int64 v258; // [rsp+168h] [rbp-D8h] BYREF
  _QWORD *v259; // [rsp+170h] [rbp-D0h]
  __int64 v260; // [rsp+178h] [rbp-C8h]
  __int64 v261; // [rsp+180h] [rbp-C0h]
  char *v262; // [rsp+188h] [rbp-B8h]
  signed __int64 v263; // [rsp+190h] [rbp-B0h]
  __int64 v264; // [rsp+198h] [rbp-A8h]
  char *v265; // [rsp+1A0h] [rbp-A0h] BYREF
  size_t v266; // [rsp+1A8h] [rbp-98h] BYREF
  size_t v267; // [rsp+1B0h] [rbp-90h]
  __int64 v268; // [rsp+1B8h] [rbp-88h]
  char *v269; // [rsp+1C0h] [rbp-80h]
  signed __int64 v270; // [rsp+1C8h] [rbp-78h]
  __int64 v271; // [rsp+1D0h] [rbp-70h]
  __int64 v272; // [rsp+1D8h] [rbp-68h] BYREF
  __int64 v273; // [rsp+1E0h] [rbp-60h]
  __int64 v274; // [rsp+1E8h] [rbp-58h]
  __int64 v275; // [rsp+1F0h] [rbp-50h]
  char *v276; // [rsp+1F8h] [rbp-48h]
  size_t v277; // [rsp+200h] [rbp-40h]
  size_t v278; // [rsp+208h] [rbp-38h]
  __int64 v279; // [rsp+210h] [rbp-30h]

  v4 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("model", 5, a2);
  v5 = "unknownchoicesfinish_reasoncompletedsummary_text";
  v6 = 7;
  if ( !v4 || *(_BYTE *)v4 != 3 )
    goto LABEL_7;
  v6 = *(_QWORD *)(v4 + 24);
  if ( v6 < 0 )
  {
    v7 = 0;
    goto LABEL_5;
  }
  v5 = *(const char **)(v4 + 16);
  if ( !v6 )
  {
    v8 = 1;
    LOBYTE(v2) = 1;
    v6 = 0;
  }
  else
  {
LABEL_7:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("model", 5);
    v7 = 1;
    v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1);
    if ( !v8 )
LABEL_5:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6);
    v2 = 0;
  }
  v225 = (void *)v8;
  memcpy((void *)v8, v5, v6);
  v9 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("idassistant", 2, a2);
  v10 = "msg_unknowntoolu_unknowncontent_filter";
  __n = 11;
  if ( v9 && *(_BYTE *)v9 == 3 )
  {
    v11 = *(_QWORD *)(v9 + 24);
    __n = v11;
    if ( v11 < 0 )
    {
      v12 = 0;
      goto LABEL_13;
    }
    v239 = v2;
    v10 = *(const char **)(v9 + 16);
    if ( !v11 )
    {
      __dst = (void *)1;
      LODWORD(v246) = 1;
      __n = 0;
      goto LABEL_18;
    }
    v2 = v239;
  }
  v239 = v2;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("idassistant", 2);
  v12 = 1;
  __dst = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1);
  if ( !__dst )
LABEL_13:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v12, __n);
  LODWORD(v246) = 0;
LABEL_18:
  memcpy(__dst, v10, __n);
  v235 = 0;
  v236 = 8;
  v237 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, v10);
  v245 = 8;
  v13 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
  if ( !v13 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8);
  v226 = v13;
  *v13 = 0x6E7275745F646E65LL;
  v14 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
          "choicesfinish_reasoncompletedsummary_text",
          7,
          a2);
  v245 = 8;
  if ( v14 && *(_BYTE *)v14 == 4 && *(_QWORD *)(v14 + 24) )
  {
    v15 = *(_QWORD *)(v14 + 16);
    v245 = 8;
    v16 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("message", 7, v15);
    v17 = v16;
    if ( v16 )
    {
      v18 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
              "contentpattern.output_modehead_limit",
              7,
              v16);
      if ( v18 && *(_BYTE *)v18 == 3 && *(_QWORD *)(v18 + 24) )
      {
        v257 = *(_QWORD *)(v18 + 24);
        v251 = v17;
        v227 = v15;
        __src = *(void **)(v18 + 16);
        v231 = 0;
        v233 = 0;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("contentpattern.output_modehead_limit", 7);
        v19 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v19 )
          goto LABEL_268;
        *v19 = 1701869940;
        v247 = 4;
        v248 = v19;
        v249 = 4;
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
        v20 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v20 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
        *v20 = 1954047348;
        LOBYTE(v276) = 3;
        v277 = 4;
        v278 = (size_t)v20;
        v279 = 4;
        v21 = &v258;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v258, &v231, &v247);
        if ( __OFSUB__(0, v258) )
        {
          v22 = v259;
          v23 = 4 * v261;
          v275 = v259[4 * v261 + 3];
          v274 = v259[4 * v261 + 2];
          v24 = v259[4 * v261];
          v273 = v259[4 * v261 + 1];
          v272 = v24;
          v259[v23 + 3] = v279;
          v22[v23 + 2] = v278;
          v25 = v276;
          v26 = (_QWORD *)v277;
          v22[v23 + 1] = v277;
          v22[v23] = v25;
          if ( (_BYTE)v272 != 6 )
          {
            v21 = &v272;
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v272);
          }
        }
        else
        {
          v271 = v264;
          v270 = v263;
          v269 = v262;
          v268 = v261;
          v267 = v260;
          v266 = (size_t)v259;
          v265 = (char *)v258;
          v256 = v279;
          v255 = v278;
          v254 = v277;
          v253 = (__int64)v276;
          v21 = &v272;
          v26 = &v265;
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
            &v272,
            &v265,
            &v253);
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v21, v26);
        v27 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
        if ( !v27 )
LABEL_268:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
        *v27 = 1954047348;
        v247 = 4;
        v248 = v27;
        v249 = 4;
        v28 = v257;
        if ( (v257 & 0x8000000000000000LL) != 0LL )
        {
          v29 = 0;
          goto LABEL_35;
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
        v30 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v257, 1);
        v29 = 1;
        v28 = v257;
        if ( !v30 )
LABEL_35:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v29, v28);
        v31 = v257;
        v32 = (size_t)v30;
        memcpy(v30, __src, v257);
        LOBYTE(v276) = 3;
        v277 = v31;
        v278 = v32;
        v279 = v31;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v258, &v231, &v247);
        v15 = v227;
        if ( v258 == 0x8000000000000000LL )
        {
          v33 = v259;
          v34 = 4 * v261;
          v275 = v259[4 * v261 + 3];
          v274 = v259[4 * v261 + 2];
          v35 = v259[4 * v261];
          v273 = v259[4 * v261 + 1];
          v272 = v35;
          v259[v34 + 3] = v279;
          v33[v34 + 2] = v278;
          v36 = v276;
          v33[v34 + 1] = v277;
          v33[v34] = v36;
          if ( (_BYTE)v272 != 6 )
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v272);
        }
        else
        {
          v271 = v264;
          v270 = v263;
          v269 = v262;
          v268 = v261;
          v267 = v260;
          v266 = (size_t)v259;
          v265 = (char *)v258;
          v256 = v279;
          v255 = v278;
          v254 = v277;
          v253 = (__int64)v276;
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
            &v272,
            &v265,
            &v253);
        }
        v266 = v231;
        v267 = v232;
        v268 = v233;
        LOBYTE(v265) = 5;
        v37 = v237;
        if ( v237 == v235 )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v235);
        v38 = v236;
        v39 = 32 * v37;
        *(_QWORD *)(v236 + v39 + 24) = v268;
        *(_QWORD *)(v38 + v39 + 16) = v267;
        v40 = v265;
        *(_QWORD *)(v38 + v39 + 8) = v266;
        *(_QWORD *)(v38 + v39) = v40;
        v237 = v37 + 1;
        v17 = v251;
      }
      v41 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
              "tool_callsreasoning_content",
              10,
              v17);
      if ( v41 )
      {
        if ( *(_BYTE *)v41 == 4 )
        {
          v42 = *(_QWORD *)(v41 + 24);
          if ( v42 )
          {
            v43 = *(_QWORD *)(v41 + 16);
            v44 = 32 * v42;
            do
            {
              v214 = v44;
              v217 = v43;
              v45 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      "idassistant",
                      2,
                      v43);
              v257 = 13;
              if ( v45 )
              {
                v46 = "toolu_unknowncontent_filter";
                if ( *(_BYTE *)v45 == 3 )
                {
                  v47 = *(_QWORD *)(v45 + 24);
                  if ( v47 < 0 )
                  {
                    v49 = 0;
                    v109 = (__int64)__src;
                    goto LABEL_149;
                  }
                  v257 = *(_QWORD *)(v45 + 24);
                  v48 = v15;
                  v46 = *(char **)(v45 + 16);
                  if ( !v47 )
                  {
                    __src = (void *)1;
                    LODWORD(v238) = 1;
                    v257 = 0;
                    goto LABEL_56;
                  }
                }
              }
              else
              {
                v46 = "toolu_unknowncontent_filter";
              }
              v48 = v15;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("idassistant", 2);
              v49 = 1;
              __src = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v257, 1);
              if ( !__src )
              {
                v109 = v257;
LABEL_149:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v49, v109);
              }
              LODWORD(v238) = 0;
LABEL_56:
              memcpy(__src, v46, v257);
              v50 = (char **)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                               &unk_101674A90,
                               8,
                               v217);
              v51 = v48;
              if ( v50 )
              {
                switch ( *(_BYTE *)v50 )
                {
                  case 0:
                    LOBYTE(v265) = 0;
                    break;
                  case 1:
                  case 2:
                    v268 = (__int64)v50[3];
                    v267 = (size_t)v50[2];
                    v52 = *v50;
                    v266 = (size_t)v50[1];
                    v265 = v52;
                    break;
                  case 3:
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                      &v266,
                      v50 + 1);
                    LOBYTE(v265) = 3;
                    break;
                  case 4:
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
                      &v266,
                      v50 + 1);
                    LOBYTE(v265) = 4;
                    break;
                  case 5:
                    if ( v50[3] )
                    {
                      v53 = v50[1];
                      if ( !v53 )
                        core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248);
                      _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
                        &v266,
                        v53,
                        v50[2]);
                    }
                    else
                    {
                      v266 = 0;
                      v268 = 0;
                    }
                    LOBYTE(v265) = 5;
                    break;
                }
                v222 = v268;
                v221 = v267;
                v220 = v266;
                v219 = v265;
                LOBYTE(v265) = 0;
                core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v265);
              }
              else
              {
                LOBYTE(v265) = 0;
                v220 = v266;
                v221 = v267;
                v222 = v268;
                v219 = v265;
              }
              v54 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      "name",
                      4,
                      &v219);
              v251 = 4;
              if ( v54 )
              {
                v55 = "toolroleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls";
                if ( *(_BYTE *)v54 == 3 )
                {
                  v56 = *(_QWORD *)(v54 + 24);
                  if ( v56 < 0 )
                  {
                    v57 = 0;
                    goto LABEL_154;
                  }
                  v227 = v51;
                  v55 = *(char **)(v54 + 16);
                  if ( !v56 )
                  {
                    v243 = (void *)1;
                    v58 = 1;
                    v251 = 0;
                    goto LABEL_77;
                  }
                  v51 = v227;
                  v251 = v56;
                }
              }
              else
              {
                v55 = "toolroleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls";
              }
              v227 = v51;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("name", 4);
              v57 = 1;
              v243 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v251, 1);
              if ( !v243 )
              {
                v243 = (void *)v251;
LABEL_154:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v57, v243);
              }
              v58 = 0;
LABEL_77:
              memcpy(v243, v55, v251);
              v59 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      "arguments{}",
                      9,
                      &v219);
              v60 = 2;
              if ( v59 )
              {
                v61 = "{}";
                if ( *(_BYTE *)v59 == 3 )
                {
                  v61 = *(char **)(v59 + 16);
                  v60 = *(_QWORD *)(v59 + 24);
                }
              }
              else
              {
                v61 = "{}";
              }
              v265 = v61;
              v266 = v60;
              v268 = 0;
              v267 = 0;
              v269 = v61;
              v270 = v60;
              v62 = &v258;
              v63 = (__int64)&v265;
              serde_json::de::from_trait::h51e180b4bb6af5e0(&v258, &v265);
              if ( (_BYTE)v258 == 6 )
              {
                v215 = v259;
                v265 = (char *)v259;
                if ( v60 < 0 )
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(0, v218);
                v223 = v58;
                if ( v60 )
                {
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v258, &v265);
                  v64 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v60, 1);
                  if ( !v64 )
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v60);
                }
                else
                {
                  v64 = 1;
                }
                v65 = v64;
                memcpy((void *)v64, v61, v60);
                v232 = v60;
                v218 = v65;
                v233 = v65;
                v234 = v60;
                LOBYTE(v231) = 3;
                if ( *v215 == 1 )
                {
                  core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v215 + 1);
                }
                else if ( !*v215 )
                {
                  v66 = v215[2];
                  if ( v66 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v215[1], v66, 1);
                }
                v63 = 40;
                v62 = v215;
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v215, 40, 8);
              }
              else
              {
                v223 = v58;
                v234 = v261;
                v233 = v260;
                v232 = (size_t)v259;
                v231 = v258;
              }
              v240 = nullptr;
              v242 = 0;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v62, v63);
              v67 = 4;
              v68 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
              if ( !v68 )
                goto LABEL_269;
              *v68 = 1701869940;
              v228 = 4;
              v229 = v68;
              v230 = 4;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
              v69 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
              if ( !v69 )
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8);
              *v69 = 0x6573755F6C6F6F74LL;
              LOBYTE(v276) = 3;
              v277 = 8;
              v278 = (size_t)v69;
              v279 = 8;
              v70 = &v258;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v258, &v240, &v228);
              if ( __OFSUB__(0, v258) )
              {
                v71 = v259;
                v72 = 4 * v261;
                v275 = v259[4 * v261 + 3];
                v274 = v259[4 * v261 + 2];
                v73 = v259[4 * v261];
                v273 = v259[4 * v261 + 1];
                v272 = v73;
                v259[v72 + 3] = v279;
                v71[v72 + 2] = v278;
                v74 = v276;
                v75 = (_QWORD *)v277;
                v71[v72 + 1] = v277;
                v71[v72] = v74;
                if ( (_BYTE)v272 != 6 )
                {
                  v70 = &v272;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v272);
                }
              }
              else
              {
                v271 = v264;
                v270 = v263;
                v269 = v262;
                v268 = v261;
                v267 = v260;
                v266 = (size_t)v259;
                v265 = (char *)v258;
                v256 = v279;
                v255 = v278;
                v254 = v277;
                v253 = (__int64)v276;
                v70 = &v272;
                v75 = &v265;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v272,
                  &v265,
                  &v253);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v70, v75);
              v67 = 2;
              v76 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
              if ( !v76 )
                goto LABEL_269;
              *v76 = 25705;
              v228 = 2;
              v229 = v76;
              v230 = 2;
              v77 = 1;
              if ( !(_BYTE)v238 )
              {
                v238 = v76;
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1);
                v78 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v257, 1);
                if ( !v78 )
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v257);
                v77 = v78;
              }
              v79 = v257;
              memcpy((void *)v77, __src, v257);
              LOBYTE(v276) = 3;
              v277 = v79;
              v278 = v77;
              v279 = v79;
              v80 = &v258;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v258, &v240, &v228);
              if ( v258 == 0x8000000000000000LL )
              {
                v81 = v259;
                v82 = 4 * v261;
                v275 = v259[4 * v261 + 3];
                v274 = v259[4 * v261 + 2];
                v83 = v259[4 * v261];
                v273 = v259[4 * v261 + 1];
                v272 = v83;
                v259[v82 + 3] = v279;
                v81[v82 + 2] = v278;
                v84 = v276;
                v85 = (_QWORD *)v277;
                v81[v82 + 1] = v277;
                v81[v82] = v84;
                v86 = v251;
                if ( (_BYTE)v272 != 6 )
                {
                  v80 = &v272;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v272);
                }
              }
              else
              {
                v271 = v264;
                v270 = v263;
                v269 = v262;
                v268 = v261;
                v267 = v260;
                v266 = (size_t)v259;
                v265 = (char *)v258;
                v256 = v279;
                v255 = v278;
                v254 = v277;
                v253 = (__int64)v276;
                v80 = &v272;
                v85 = &v265;
                v86 = v251;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v272,
                  &v265,
                  &v253);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v80, v85);
              v67 = 4;
              v87 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
              if ( !v87 )
                goto LABEL_269;
              *v87 = 1701667182;
              v228 = 4;
              v229 = v87;
              v230 = 4;
              v88 = 1;
              if ( !(_BYTE)v223 )
              {
                v238 = v87;
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
                v89 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v86, 1);
                if ( !v89 )
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v86);
                v88 = v89;
              }
              memcpy((void *)v88, v243, v86);
              LOBYTE(v276) = 3;
              v277 = v86;
              v278 = v88;
              v279 = v86;
              v90 = &v258;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v258, &v240, &v228);
              if ( v258 == 0x8000000000000000LL )
              {
                v91 = v259;
                v92 = 4 * v261;
                v275 = v259[4 * v261 + 3];
                v274 = v259[4 * v261 + 2];
                v93 = v259[4 * v261];
                v273 = v259[4 * v261 + 1];
                v272 = v93;
                v259[v92 + 3] = v279;
                v91[v92 + 2] = v278;
                v94 = v276;
                v95 = (_QWORD *)v277;
                v91[v92 + 1] = v277;
                v91[v92] = v94;
                if ( (_BYTE)v272 != 6 )
                {
                  v90 = &v272;
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v272);
                }
              }
              else
              {
                v271 = v264;
                v270 = v263;
                v269 = v262;
                v268 = v261;
                v267 = v260;
                v266 = (size_t)v259;
                v265 = (char *)v258;
                v256 = v279;
                v255 = v278;
                v254 = v277;
                v253 = (__int64)v276;
                v90 = &v272;
                v95 = &v265;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v272,
                  &v265,
                  &v253);
              }
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v90, v95);
              v67 = 5;
              v96 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
              if ( !v96 )
LABEL_269:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v67);
              *(_BYTE *)(v96 + 4) = 116;
              *(_DWORD *)v96 = 1970302569;
              v228 = 5;
              v229 = (_DWORD *)v96;
              v230 = 5;
              serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
                &v265,
                &v231);
              if ( (_BYTE)v265 == 6 )
              {
                v258 = v266;
                core::result::unwrap_failed::h855bccc0ecc45c4f(
                  "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                  43,
                  &v258,
                  &off_10196D480,
                  &off_10196CE90);
              }
              v279 = v268;
              v278 = v267;
              v277 = v266;
              v276 = v265;
              alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v258, &v240, &v228);
              if ( v258 == 0x8000000000000000LL )
              {
                v97 = v259;
                v98 = 4 * v261;
                v275 = v259[4 * v261 + 3];
                v274 = v259[4 * v261 + 2];
                v99 = v259[4 * v261];
                v273 = v259[4 * v261 + 1];
                v272 = v99;
                v259[v98 + 3] = v279;
                v97[v98 + 2] = v278;
                v100 = v276;
                v97[v98 + 1] = v277;
                v97[v98] = v100;
                if ( (_BYTE)v272 != 6 )
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v272);
              }
              else
              {
                v271 = v264;
                v270 = v263;
                v269 = v262;
                v268 = v261;
                v267 = v260;
                v266 = (size_t)v259;
                v265 = (char *)v258;
                v256 = v279;
                v255 = v278;
                v254 = v277;
                v253 = (__int64)v276;
                alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                  &v272,
                  &v265,
                  &v253);
              }
              v250 = v242;
              v249 = v241;
              v248 = v240;
              LOBYTE(v247) = 5;
              v101 = v237;
              if ( v237 == v235 )
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v235);
              v102 = v236;
              v103 = 32 * v101;
              *(_QWORD *)(v236 + v103 + 24) = v250;
              *(_QWORD *)(v102 + v103 + 16) = v249;
              v104 = v247;
              *(_QWORD *)(v102 + v103 + 8) = v248;
              *(_QWORD *)(v102 + v103) = v104;
              v237 = v101 + 1;
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v231);
              if ( v251 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v243, v251, 1);
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v219);
              v15 = v227;
              if ( v257 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v257, 1);
              v43 = v217 + 32;
              v44 = v214 - 32;
            }
            while ( v214 != 32 );
          }
        }
      }
    }
    v105 = "finish_reasoncompletedsummary_text";
    v106 = (char *)13;
    v107 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
             "finish_reasoncompletedsummary_text",
             13,
             v15);
    if ( v107 && *(_BYTE *)v107 == 3 )
    {
      v108 = *(const void **)(v107 + 16);
      v109 = *(_QWORD *)(v107 + 24);
      switch ( __ROR8__(v109 - 4, 1) )
      {
        case 0LL:
          v106 = "stopLeftDownmovecell";
          v105 = *(char **)(v107 + 16);
          if ( memcmp(v108, "stopLeftDownmovecell", v109) )
            goto LABEL_147;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v108, "stopLeftDownmovecell");
          v109 = 8;
          v49 = 1;
          v110 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
          if ( !v110 )
            goto LABEL_149;
          *v110 = 0x6E7275745F646E65LL;
          v111 = (__int64)v110;
          goto LABEL_157;
        case 1LL:
          v106 = "length";
          v105 = *(char **)(v107 + 16);
          if ( memcmp(v108, "length", v109) )
            goto LABEL_147;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v108, "length");
          v109 = 10;
          v49 = 1;
          v113 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1);
          if ( !v113 )
            goto LABEL_149;
          v111 = (__int64)v113;
          qmemcpy(v113, "max_tokens", 10);
          goto LABEL_157;
        case 3LL:
          v106 = "tool_callsreasoning_content";
          v105 = *(char **)(v107 + 16);
          if ( memcmp(v108, "tool_callsreasoning_content", v109) )
            goto LABEL_147;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v108, "tool_callsreasoning_content");
          v109 = 8;
          v49 = 1;
          v112 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
          if ( !v112 )
            goto LABEL_149;
          v111 = (__int64)v112;
          *v112 = 0x6573755F6C6F6F74LL;
          goto LABEL_157;
        case 5LL:
          v106 = "content_filter";
          v105 = *(char **)(v107 + 16);
          if ( memcmp(v108, "content_filter", v109) )
            goto LABEL_147;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v108, "content_filter");
          v109 = 13;
          v49 = 1;
          v213 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
          if ( !v213 )
            goto LABEL_149;
          v111 = (__int64)v213;
          qmemcpy(v213, "stop_sequence", 13);
          goto LABEL_157;
        default:
LABEL_147:
          if ( v109 < 0 )
          {
            v49 = 0;
            goto LABEL_149;
          }
          if ( v109 )
          {
            v114 = v108;
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v105, v106);
            v49 = 1;
            v115 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v109, 1);
            if ( !v115 )
              goto LABEL_149;
            v108 = v114;
            v111 = v115;
          }
          else
          {
            v111 = 1;
          }
          memcpy((void *)v111, v108, v109);
LABEL_157:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v226, 8, 1);
          v245 = v109;
          v226 = (void *)v111;
          break;
      }
    }
    else
    {
      v245 = 8;
    }
  }
  v116 = "usage";
  v117 = 5;
  v118 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("usage", 5, a2);
  v119 = v118;
  if ( v118 )
  {
    v120 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
             "prompt_tokenscompletion_tokensinput_tokensoutput_tokens",
             13,
             v118);
    if ( v120 && *(_BYTE *)v120 == 2 && (v121 = *(_QWORD *)(v120 + 8), v121 != 2) )
    {
      if ( (_DWORD)v121 == 1 )
      {
        v122 = *(_QWORD *)(v120 + 16);
      }
      else
      {
        v211 = *(_QWORD *)(v120 + 16);
        v122 = 0;
        if ( v211 > 0 )
          v122 = v211;
      }
    }
    else
    {
      v122 = 0;
    }
    v116 = "completion_tokensinput_tokensoutput_tokens";
    v117 = 17;
    v123 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
             "completion_tokensinput_tokensoutput_tokens",
             17,
             v119);
    v257 = v122;
    if ( v123 && *(_BYTE *)v123 == 2 && (v124 = *(_QWORD *)(v123 + 8), v124 != 2) )
    {
      if ( (_DWORD)v124 == 1 )
      {
        v125 = *(_QWORD *)(v123 + 16);
      }
      else
      {
        v212 = *(_QWORD *)(v123 + 16);
        v125 = 0;
        if ( v212 > 0 )
          v125 = v212;
      }
    }
    else
    {
      v125 = 0;
    }
  }
  else
  {
    v125 = 0;
    v257 = 0;
  }
  v240 = nullptr;
  v242 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v116, v117);
  v126 = 2;
  v127 = 1;
  v128 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
  if ( !v128 )
    goto LABEL_258;
  *v128 = 25705;
  v247 = 2;
  v248 = v128;
  v249 = 2;
  if ( !(_BYTE)v246 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1);
    v129 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1);
    if ( !v129 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n);
    v127 = v129;
  }
  v130 = __n;
  memcpy((void *)v127, __dst, __n);
  LOBYTE(v276) = 3;
  v277 = v130;
  v278 = v127;
  v279 = v130;
  v131 = &v258;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v258, &v240, &v247);
  if ( __OFSUB__(0, v258) )
  {
    v132 = v259;
    v133 = 4 * v261;
    v275 = v259[4 * v261 + 3];
    v274 = v259[4 * v261 + 2];
    v134 = v259[4 * v261];
    v273 = v259[4 * v261 + 1];
    v272 = v134;
    v259[v133 + 3] = v279;
    v132[v133 + 2] = v278;
    v135 = v276;
    v136 = (_QWORD *)v277;
    v132[v133 + 1] = v277;
    v132[v133] = v135;
    if ( (_BYTE)v272 != 6 )
    {
      v131 = &v272;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v272);
    }
  }
  else
  {
    v271 = v264;
    v270 = v263;
    v269 = v262;
    v268 = v261;
    v267 = v260;
    v266 = (size_t)v259;
    v265 = (char *)v258;
    v256 = v279;
    v255 = v278;
    v254 = v277;
    v253 = (__int64)v276;
    v131 = &v272;
    v136 = &v265;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v272,
      &v265,
      &v253);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v131, v136);
  v126 = 4;
  v137 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v137 )
    goto LABEL_258;
  *v137 = 1701869940;
  v247 = 4;
  v248 = v137;
  v249 = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v138 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v138 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7);
  *(_DWORD *)((char *)v138 + 3) = 1701273971;
  *v138 = 1936942445;
  LOBYTE(v276) = 3;
  v277 = 7;
  v278 = (size_t)v138;
  v279 = 7;
  v139 = &v258;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v258, &v240, &v247);
  if ( v258 == 0x8000000000000000LL )
  {
    v140 = v259;
    v141 = 4 * v261;
    v275 = v259[4 * v261 + 3];
    v274 = v259[4 * v261 + 2];
    v142 = v259[4 * v261];
    v273 = v259[4 * v261 + 1];
    v272 = v142;
    v259[v141 + 3] = v279;
    v140[v141 + 2] = v278;
    v143 = v276;
    v144 = (_QWORD *)v277;
    v140[v141 + 1] = v277;
    v140[v141] = v143;
    if ( (_BYTE)v272 != 6 )
    {
      v139 = &v272;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v272);
    }
  }
  else
  {
    v271 = v264;
    v270 = v263;
    v269 = v262;
    v268 = v261;
    v267 = v260;
    v266 = (size_t)v259;
    v265 = (char *)v258;
    v256 = v279;
    v255 = v278;
    v254 = v277;
    v253 = (__int64)v276;
    v139 = &v272;
    v144 = &v265;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v272,
      &v265,
      &v253);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v139, v144);
  v145 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v145 )
    goto LABEL_258;
  *v145 = 1701605234;
  v247 = 4;
  v248 = v145;
  v249 = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v146 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
  if ( !v146 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
  *(_QWORD *)v146 = 0x6E61747369737361LL;
  *(_BYTE *)(v146 + 8) = 116;
  LOBYTE(v276) = 3;
  v277 = 9;
  v278 = v146;
  v279 = 9;
  v147 = &v258;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v258, &v240, &v247);
  if ( v258 == 0x8000000000000000LL )
  {
    v148 = v259;
    v149 = 4 * v261;
    v275 = v259[4 * v261 + 3];
    v274 = v259[4 * v261 + 2];
    v150 = v259[4 * v261];
    v273 = v259[4 * v261 + 1];
    v272 = v150;
    v259[v149 + 3] = v279;
    v148[v149 + 2] = v278;
    v151 = v276;
    v152 = (_QWORD *)v277;
    v148[v149 + 1] = v277;
    v148[v149] = v151;
    if ( (_BYTE)v272 != 6 )
    {
      v147 = &v272;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v272);
    }
  }
  else
  {
    v271 = v264;
    v270 = v263;
    v269 = v262;
    v268 = v261;
    v267 = v260;
    v266 = (size_t)v259;
    v265 = (char *)v258;
    v256 = v279;
    v255 = v278;
    v254 = v277;
    v253 = (__int64)v276;
    v147 = &v272;
    v152 = &v265;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v272,
      &v265,
      &v253);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v147, v152);
  v126 = 5;
  v153 = 1;
  v154 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
  if ( !v154 )
    goto LABEL_258;
  *(_BYTE *)(v154 + 4) = 108;
  *(_DWORD *)v154 = 1701080941;
  v247 = 5;
  v248 = (_DWORD *)v154;
  v249 = 5;
  if ( !(_BYTE)v239 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1);
    v155 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1);
    if ( !v155 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v6);
    v153 = v155;
  }
  memcpy((void *)v153, v225, v6);
  LOBYTE(v276) = 3;
  v277 = v6;
  v278 = v153;
  v279 = v6;
  v156 = &v258;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v258, &v240, &v247);
  if ( v258 == 0x8000000000000000LL )
  {
    v157 = v259;
    v158 = 4 * v261;
    v275 = v259[4 * v261 + 3];
    v274 = v259[4 * v261 + 2];
    v159 = v259[4 * v261];
    v273 = v259[4 * v261 + 1];
    v272 = v159;
    v259[v158 + 3] = v279;
    v157[v158 + 2] = v278;
    v160 = v276;
    v161 = (_QWORD *)v277;
    v157[v158 + 1] = v277;
    v157[v158] = v160;
    if ( (_BYTE)v272 != 6 )
    {
      v156 = &v272;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v272);
    }
  }
  else
  {
    v271 = v264;
    v270 = v263;
    v269 = v262;
    v268 = v261;
    v267 = v260;
    v266 = (size_t)v259;
    v265 = (char *)v258;
    v256 = v279;
    v255 = v278;
    v254 = v277;
    v253 = (__int64)v276;
    v156 = &v272;
    v161 = &v265;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v272,
      &v265,
      &v253);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v156, v161);
  v126 = 7;
  v162 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v162 )
    goto LABEL_258;
  *(_DWORD *)((char *)v162 + 3) = 1953391988;
  *v162 = 1953394531;
  v247 = 7;
  v248 = v162;
  v249 = 7;
  serde_core::ser::Serializer::collect_seq::h84c021fc6bf1d891(&v265, &v235);
  if ( (_BYTE)v265 == 6 )
  {
    v258 = v266;
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
      43,
      &v258,
      &off_10196D480,
      &off_10196CEA8);
  }
  v279 = v268;
  v278 = v267;
  v277 = v266;
  v276 = v265;
  v163 = &v258;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v258, &v240, &v247);
  if ( v258 == 0x8000000000000000LL )
  {
    v164 = v259;
    v165 = 4 * v261;
    v275 = v259[4 * v261 + 3];
    v274 = v259[4 * v261 + 2];
    v166 = v259[4 * v261];
    v273 = v259[4 * v261 + 1];
    v272 = v166;
    v259[v165 + 3] = v279;
    v164[v165 + 2] = v278;
    v167 = v276;
    v168 = (_QWORD *)v277;
    v164[v165 + 1] = v277;
    v164[v165] = v167;
    if ( (_BYTE)v272 != 6 )
    {
      v163 = &v272;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v272);
    }
  }
  else
  {
    v271 = v264;
    v270 = v263;
    v269 = v262;
    v268 = v261;
    v267 = v260;
    v266 = (size_t)v259;
    v265 = (char *)v258;
    v256 = v279;
    v255 = v278;
    v254 = v277;
    v253 = (__int64)v276;
    v163 = &v272;
    v168 = &v265;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v272,
      &v265,
      &v253);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v163, v168);
  v126 = 11;
  v169 = 1;
  v170 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
  if ( !v170 )
    goto LABEL_258;
  v246 = v6;
  v171 = v125;
  qmemcpy(v170, "stop_reason", 11);
  v247 = 11;
  v248 = v170;
  v249 = 11;
  v172 = v245;
  if ( v245 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(11, 1);
    v173 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v172, 1);
    if ( !v173 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v245);
    v169 = v173;
    v172 = v245;
  }
  memcpy((void *)v169, v226, v172);
  LOBYTE(v276) = 3;
  v277 = v172;
  v278 = v169;
  v279 = v172;
  v174 = &v258;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v258, &v240, &v247);
  v175 = v171;
  if ( v258 == 0x8000000000000000LL )
  {
    v176 = v259;
    v177 = 4 * v261;
    v275 = v259[4 * v261 + 3];
    v274 = v259[4 * v261 + 2];
    v178 = v259[4 * v261];
    v273 = v259[4 * v261 + 1];
    v272 = v178;
    v259[v177 + 3] = v279;
    v176[v177 + 2] = v278;
    v179 = v276;
    v180 = (_QWORD *)v277;
    v176[v177 + 1] = v277;
    v176[v177] = v179;
    v181 = v246;
    if ( (_BYTE)v272 != 6 )
    {
      v174 = &v272;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v272);
    }
  }
  else
  {
    v271 = v264;
    v270 = v263;
    v269 = v262;
    v268 = v261;
    v267 = v260;
    v266 = (size_t)v259;
    v265 = (char *)v258;
    v256 = v279;
    v255 = v278;
    v254 = v277;
    v253 = (__int64)v276;
    v174 = &v272;
    v180 = &v265;
    v181 = v246;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v272,
      &v265,
      &v253);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v174, v180);
  v126 = 13;
  v182 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
  if ( !v182 )
    goto LABEL_258;
  qmemcpy(v182, "stop_sequence", 13);
  v247 = 13;
  v248 = v182;
  v249 = 13;
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
    &v265,
    &unk_101674E38);
  if ( (_BYTE)v265 == 6 )
  {
    v258 = v266;
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
      43,
      &v258,
      &off_10196D480,
      &off_10196CEA8);
  }
  v279 = v268;
  v278 = v267;
  v277 = v266;
  v276 = v265;
  v183 = &v258;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v258, &v240, &v247);
  if ( v258 == 0x8000000000000000LL )
  {
    v184 = v259;
    v185 = 4 * v261;
    v275 = v259[4 * v261 + 3];
    v274 = v259[4 * v261 + 2];
    v186 = v259[4 * v261];
    v273 = v259[4 * v261 + 1];
    v272 = v186;
    v259[v185 + 3] = v279;
    v184[v185 + 2] = v278;
    v187 = v276;
    v188 = (_QWORD *)v277;
    v184[v185 + 1] = v277;
    v184[v185] = v187;
    if ( (_BYTE)v272 != 6 )
    {
      v183 = &v272;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v272);
    }
  }
  else
  {
    v271 = v264;
    v270 = v263;
    v269 = v262;
    v268 = v261;
    v267 = v260;
    v266 = (size_t)v259;
    v265 = (char *)v258;
    v256 = v279;
    v255 = v278;
    v254 = v277;
    v253 = (__int64)v276;
    v183 = &v272;
    v188 = &v265;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v272,
      &v265,
      &v253);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v183, v188);
  v126 = 5;
  v189 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
  if ( !v189 )
LABEL_258:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v126);
  *(_BYTE *)(v189 + 4) = 101;
  *(_DWORD *)v189 = 1734439797;
  v228 = 5;
  v229 = (_DWORD *)v189;
  v230 = 5;
  v219 = nullptr;
  v221 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1);
  v190 = 12;
  v191 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
  if ( !v191 )
    goto LABEL_260;
  qmemcpy(v191, "input_tokens", 12);
  v231 = 12;
  v232 = (size_t)v191;
  v233 = 12;
  LOBYTE(v276) = 2;
  v277 = v257 >> 63;
  v278 = v257;
  v192 = &v258;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v258, &v219, &v231);
  if ( v258 == 0x8000000000000000LL )
  {
    v193 = v259;
    v194 = 4 * v261;
    v275 = v259[4 * v261 + 3];
    v274 = v259[4 * v261 + 2];
    v195 = v259[4 * v261];
    v273 = v259[4 * v261 + 1];
    v272 = v195;
    v259[v194 + 3] = v279;
    v193[v194 + 2] = v278;
    v196 = v276;
    v197 = (_QWORD *)v277;
    v193[v194 + 1] = v277;
    v193[v194] = v196;
    if ( (_BYTE)v272 != 6 )
    {
      v192 = &v272;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v272);
    }
  }
  else
  {
    v271 = v264;
    v270 = v263;
    v269 = v262;
    v268 = v261;
    v267 = v260;
    v266 = (size_t)v259;
    v265 = (char *)v258;
    v256 = v279;
    v255 = v278;
    v254 = v277;
    v253 = (__int64)v276;
    v192 = &v272;
    v197 = &v265;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v272,
      &v265,
      &v253);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v192, v197);
  v190 = 13;
  v198 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
  if ( !v198 )
LABEL_260:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v190);
  qmemcpy(v198, "output_tokens", 13);
  v231 = 13;
  v232 = (size_t)v198;
  v233 = 13;
  LOBYTE(v276) = 2;
  v277 = v175 >> 63;
  v278 = v175;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v258, &v219, &v231);
  if ( v258 == 0x8000000000000000LL )
  {
    v199 = v259;
    v200 = 4 * v261;
    v275 = v259[4 * v261 + 3];
    v274 = v259[4 * v261 + 2];
    v201 = v259[4 * v261];
    v273 = v259[4 * v261 + 1];
    v272 = v201;
    v259[v200 + 3] = v279;
    v199[v200 + 2] = v278;
    v202 = v276;
    v199[v200 + 1] = v277;
    v199[v200] = v202;
    if ( (_BYTE)v272 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v272);
  }
  else
  {
    v271 = v264;
    v270 = v263;
    v269 = v262;
    v268 = v261;
    v267 = v260;
    v266 = (size_t)v259;
    v265 = (char *)v258;
    v256 = v279;
    v255 = v278;
    v254 = v277;
    v253 = (__int64)v276;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v272,
      &v265,
      &v253);
  }
  v248 = v219;
  v249 = v220;
  v250 = v221;
  LOBYTE(v247) = 5;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v258, &v240, &v228);
  if ( v258 == 0x8000000000000000LL )
  {
    v203 = v259;
    v204 = 4 * v261;
    v275 = v259[4 * v261 + 3];
    v274 = v259[4 * v261 + 2];
    v205 = v259[4 * v261];
    v273 = v259[4 * v261 + 1];
    v272 = v205;
    v259[v204 + 3] = v250;
    v203[v204 + 2] = v249;
    v206 = v247;
    v203[v204 + 1] = v248;
    v203[v204] = v206;
    if ( (_BYTE)v272 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v272);
  }
  else
  {
    v271 = v264;
    v270 = v263;
    v269 = v262;
    v268 = v261;
    v267 = v260;
    v266 = (size_t)v259;
    v265 = (char *)v258;
    v256 = v250;
    v255 = v249;
    v254 = (size_t)v248;
    v253 = v247;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v272,
      &v265,
      &v253);
  }
  *(_QWORD *)(a1 + 24) = v242;
  v207 = v240;
  *(_QWORD *)(a1 + 16) = v241;
  *(_QWORD *)(a1 + 8) = v207;
  *(_BYTE *)a1 = 5;
  if ( v245 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v226, v245, 1);
  v208 = v236;
  for ( i = v237 + 1; i != 1; --i )
  {
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v208);
    v208 += 32;
  }
  if ( v235 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v236, 32 * v235, 8);
  if ( __n )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst, __n, 1);
  if ( v181 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v225, v181, 1);
  return a1;
}
