// __ZN13codexmate_lib4core5relay10translator37translate_openai_message_to_anthropic @ 0x100881a60
// [FULL — IDA decompiler 全解 60201B, 超大体分页取回]
// 1.2.3 NEW-delta | codexmate_lib::core::relay::translator::translate_openai_message_to_anthropic | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::relay::translator::translate_openai_message_to_anthropic::h2841191c7f22086b(
        __int64 a1,
        _QWORD *a2,
        __int64 *a3)
{
  __int64 v6; // r12
  __int64 v7; // rax
  char *v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rax
  const void *v13; // r15
  __int64 v14; // r14
  __int64 v15; // rsi
  __int64 v16; // r14
  _DWORD *v17; // rax
  _DWORD *v18; // rax
  __m256i *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __m256i *v23; // rsi
  __int64 v24; // r12
  _DWORD *v25; // rax
  _DWORD *v26; // rax
  __m256i *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __m256i *v31; // rsi
  _DWORD *v32; // rax
  __int64 v33; // r12
  __int64 v34; // rbx
  _QWORD *v35; // r14
  __int64 v36; // rax
  __int64 v37; // r13
  __int64 v38; // rsi
  __m256i *v39; // rdi
  size_t v40; // rax
  __int64 v41; // rbx
  __int128 v42; // kr20_16
  __int64 v43; // rdx
  __int64 v44; // rbx
  __int64 v45; // rsi
  __int64 v46; // rdx
  __int64 v47; // rdi
  __int64 v49; // rbx
  __int128 v50; // kr30_16
  _DWORD *v51; // rax
  const void *v52; // rbx
  void *v53; // rax
  __int64 v54; // r13
  __int64 v55; // rdx
  __int64 v56; // rbx
  const char *v57; // rdi
  __int64 v58; // rsi
  __int64 v59; // rax
  __int64 v60; // rbx
  void *v61; // r15
  __int64 v62; // rbx
  __int64 v63; // rax
  char *v64; // r14
  void *v65; // rcx
  _QWORD *v66; // r15
  __int64 v67; // r13
  __int64 v68; // rax
  __int64 v69; // rsi
  __int64 v70; // rax
  __int64 v71; // rbx
  __int64 *v72; // r14
  __int8 v73; // r14
  char *v74; // r15
  __int64 v75; // r15
  size_t v76; // rdx
  __int64 v77; // rax
  signed __int64 v78; // r15
  char *v79; // r13
  __m256i *v80; // rdi
  __int64 v81; // rsi
  __m256i *v82; // r14
  __int64 v83; // rax
  void *v84; // r13
  __m128i v85; // xmm1
  unsigned __int64 v86; // rax
  unsigned __int64 v87; // rcx
  int v88; // edx
  __int64 v89; // rbx
  __int64 v90; // rsi
  __int64 v91; // r15
  _DWORD *v92; // rax
  _QWORD *v93; // rax
  __m256i *v94; // rdi
  __int64 v95; // rax
  __int64 v96; // rcx
  __int64 v97; // rdx
  __m256i *v98; // rsi
  _WORD *v99; // rax
  __int64 v100; // r15
  __int64 v101; // rax
  __m256i *v102; // rdi
  __int64 v103; // rax
  __int64 v104; // rcx
  __int64 v105; // rdx
  __m256i *v106; // rsi
  _DWORD *v107; // rax
  __int64 v108; // r15
  __int64 v109; // rax
  size_t v110; // rbx
  __m256i *v111; // rdi
  __int64 v112; // rax
  __int64 v113; // rcx
  __int64 v114; // rdx
  __m256i *v115; // rsi
  __int64 v116; // rax
  __int64 v117; // rdx
  __int64 v118; // r14
  bool v119; // zf
  __int64 v120; // rax
  __int64 v121; // rcx
  __int64 v122; // r15
  _DWORD *v123; // rax
  __int64 v124; // rax
  __m256i *v125; // rdi
  __int64 v126; // rax
  __int64 v127; // rcx
  __int64 v128; // rdx
  __m256i *v129; // rsi
  _DWORD *v130; // rax
  __int64 v131; // rdx
  __int64 v132; // rbx
  __int64 v133; // rdi
  __int64 i; // r15
  __int64 v135; // rax
  __int64 v136; // r15
  _QWORD *v137; // rbx
  size_t v138; // r12
  __int64 v139; // r14
  __int64 v140; // rdi
  __int64 v141; // r12
  __m256i *v142; // rax
  _DWORD *v143; // rax
  void *v144; // rax
  char v145; // bl
  __m256i *v146; // rdi
  __m256i *v147; // rsi
  __int64 v148; // r15
  __int64 v149; // r12
  _DWORD *v150; // rax
  _DWORD *v151; // rax
  __m256i *v152; // rdi
  __int64 v153; // rax
  __int64 v154; // rcx
  __int64 v155; // rdx
  __m256i *v156; // rsi
  _DWORD *v157; // rax
  __int64 v158; // rax
  __int64 v159; // r13
  __int64 v160; // r12
  _DWORD *v161; // rax
  void *v162; // rax
  __m256i *v163; // rdi
  __int64 v164; // rax
  __int64 v165; // rcx
  __int64 v166; // rdx
  __m256i *v167; // rsi
  __int64 v168; // r14
  void *v169; // rax
  __int64 v170; // rax
  void *v171; // rbx
  __m256i *v172; // rdi
  __int64 v173; // rax
  __int64 v174; // rcx
  __int64 v175; // rdx
  __m256i *v176; // rsi
  _DWORD *v177; // rax
  __int64 v178; // rbx
  __int64 v179; // rax
  __int64 v180; // r12
  __int64 v181; // rdx
  _QWORD *v182; // r14
  __int64 v183; // rdx
  __int64 v184; // rbx
  __int64 v186; // [rsp+38h] [rbp-208h]
  __int64 v187; // [rsp+40h] [rbp-200h]
  __m256i v188; // [rsp+48h] [rbp-1F8h] BYREF
  __int64 v189; // [rsp+68h] [rbp-1D8h] BYREF
  unsigned __int128 v190; // [rsp+70h] [rbp-1D0h]
  __int128 v191; // [rsp+80h] [rbp-1C0h] BYREF
  size_t v192; // [rsp+90h] [rbp-1B0h]
  int v193; // [rsp+98h] [rbp-1A8h]
  int v194; // [rsp+9Ch] [rbp-1A4h]
  _QWORD *v195; // [rsp+A0h] [rbp-1A0h]
  __int64 v196; // [rsp+A8h] [rbp-198h] BYREF
  __int64 v197; // [rsp+B0h] [rbp-190h]
  __int64 v198; // [rsp+B8h] [rbp-188h]
  size_t v199; // [rsp+C0h] [rbp-180h]
  __int64 v200; // [rsp+C8h] [rbp-178h]
  void *v201; // [rsp+D0h] [rbp-170h]
  __int128 v202; // [rsp+D8h] [rbp-168h] BYREF
  size_t __n; // [rsp+E8h] [rbp-158h]
  _BYTE v204[31]; // [rsp+F0h] [rbp-150h] BYREF
  __m256i v205; // [rsp+110h] [rbp-130h] BYREF
  void *v206; // [rsp+130h] [rbp-110h]
  void *__dst; // [rsp+138h] [rbp-108h]
  __m256i v208; // [rsp+140h] [rbp-100h] BYREF
  __m256i v209; // [rsp+160h] [rbp-E0h] BYREF
  char *v210; // [rsp+180h] [rbp-C0h]
  signed __int64 v211; // [rsp+188h] [rbp-B8h]
  __int64 v212; // [rsp+190h] [rbp-B0h]
  __int64 v213; // [rsp+198h] [rbp-A8h] BYREF
  __m256i *v214; // [rsp+1A0h] [rbp-A0h]
  size_t v215; // [rsp+1A8h] [rbp-98h]
  __int64 v216; // [rsp+1B0h] [rbp-90h]
  void *__src; // [rsp+1B8h] [rbp-88h]
  __m256i v218; // [rsp+1C0h] [rbp-80h] BYREF
  char *v219; // [rsp+1E0h] [rbp-60h]
  signed __int64 v220; // [rsp+1E8h] [rbp-58h]
  __int64 v221; // [rsp+1F0h] [rbp-50h]
  __m256i v222; // [rsp+1F8h] [rbp-48h] BYREF
  __m256i v223; // 0:^18.32

  v6 = 4;
  v7 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
         "roleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls",
         4,
         a1);
  v8 = "usercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls";
  if ( v7 && *(_BYTE *)v7 == 3 )
  {
    v8 = *(char **)(v7 + 16);
    v6 = *(_QWORD *)(v7 + 24);
  }
  v9 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
         "contentpattern.output_modehead_limit",
         7,
         a1);
  if ( !v9 )
  {
    v218.i8[0] = 0;
    v188 = v218;
    if ( v6 != 4 )
      goto LABEL_23;
    goto LABEL_8;
  }
  switch ( *(_BYTE *)v9 )
  {
    case 0:
      v218.i8[0] = 0;
      break;
    case 1:
    case 2:
      v218.i128[1] = *(_OWORD *)(v9 + 16);
      v10 = *(_QWORD *)v9;
      v218.i64[1] = *(_QWORD *)(v9 + 8);
      v218.i64[0] = v10;
      break;
    case 3:
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v218.u32[2], v9 + 8);
      v218.i8[0] = 3;
      break;
    case 4:
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
        &v218.u32[2],
        v9 + 8);
      v218.i8[0] = 4;
      break;
    case 5:
      if ( *(_QWORD *)(v9 + 24) )
      {
        v15 = *(_QWORD *)(v9 + 8);
        if ( !v15 )
          core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248);
        _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
          &v218.u32[2],
          v15,
          *(_QWORD *)(v9 + 16));
      }
      else
      {
        v218.i64[1] = 0;
        v218.i64[3] = 0;
      }
      v218.i8[0] = 5;
      break;
    case 6:
      JUMPOUT(0x100C87073LL);
  }
  v188 = v218;
  v218.i8[0] = 0;
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v218);
  if ( v6 == 4 )
  {
LABEL_8:
    if ( *(_DWORD *)v8 != 1819242356 )
      goto LABEL_34;
    __src = (void *)12;
    v11 = 12;
    v12 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_101674E1F, 12, a1);
    v13 = &unk_101674E13;
    if ( !v12 || *(_BYTE *)v12 != 3 )
      goto LABEL_252;
    v11 = *(_QWORD *)(v12 + 24);
    if ( v11 < 0 )
    {
      v14 = 0;
      goto LABEL_13;
    }
    __src = *(void **)(v12 + 24);
    v13 = *(const void **)(v12 + 16);
    if ( !v11 )
    {
      __dst = (void *)1;
      v145 = 1;
      __src = nullptr;
    }
    else
    {
LABEL_252:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&unk_101674E1F, v11);
      v14 = 1;
      __dst = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__src, 1);
      if ( !__dst )
      {
        v11 = (__int64)__src;
LABEL_13:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v14, v11);
      }
      v145 = 0;
    }
    memcpy(__dst, v13, (size_t)__src);
    v146 = (__m256i *)&v213;
    v147 = &v188;
    codexmate_lib::core::relay::translator::flatten_openai_text::h49350bf0fa79c4c0(&v213, &v188);
    v148 = v215;
    if ( v215 )
    {
      v200 = v213;
      v206 = v214;
    }
    else
    {
      if ( v188.i8[0] )
      {
        v209.i64[0] = 0;
        *(__int128 *)((char *)v209.i128 + 8) = 1u;
        v218.i64[2] = 1610612768;
        v218.i64[0] = (__int64)&v209;
        v218.i64[1] = (__int64)&anon_10420c9971c21f44d230d15b39fb3fec_964;
        v146 = &v188;
        if ( (unsigned __int8)_$LT$serde_json..value..Value$u20$as$u20$core..fmt..Display$GT$::fmt::hb110daad55e1d5ce(
                                &v188,
                                &v218) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(
            &anon_10420c9971c21f44d230d15b39fb3fec_965,
            55,
            &v208,
            &anon_10420c9971c21f44d230d15b39fb3fec_976,
            &anon_10420c9971c21f44d230d15b39fb3fec_967);
        v200 = v209.i64[0];
        v148 = v209.i64[2];
        v206 = (void *)v209.i64[1];
      }
      else
      {
        v206 = (void *)1;
        v148 = 0;
        v200 = 0;
      }
      v147 = (__m256i *)v213;
      if ( v213 )
      {
        v146 = v214;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v214, v213, 1);
      }
    }
    *(_QWORD *)&v191 = 0;
    v192 = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v146, v147);
    v149 = 4;
    v150 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v150 )
      goto LABEL_309;
    *v150 = 1701605234;
    v205.i64[0] = 4;
    v205.i64[1] = (__int64)v150;
    v205.i64[2] = 4;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
    v151 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v151 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
    *v151 = 1919251317;
    v222.i8[0] = 3;
    v222.i64[1] = 4;
    v222.i64[2] = (__int64)v151;
    v222.i64[3] = 4;
    v152 = &v209;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v209, &v191, &v205);
    if ( __OFSUB__(0, v209.i64[0]) )
    {
      v153 = v209.i64[1];
      v154 = 32 * v209.i64[3];
      v216 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3] + 24);
      v215 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3] + 16);
      v155 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3]);
      v214 = *(__m256i **)(v209.i64[1] + 32 * v209.i64[3] + 8);
      v213 = v155;
      *(_OWORD *)(v209.i64[1] + v154 + 16) = v222.i128[1];
      v156 = (__m256i *)v222.i64[1];
      *(_OWORD *)(v153 + v154) = v222.i128[0];
      if ( (_BYTE)v213 != 6 )
      {
        v152 = (__m256i *)&v213;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v213);
      }
    }
    else
    {
      v221 = v212;
      v220 = v211;
      v219 = v210;
      v218 = v209;
      v208 = v222;
      v152 = (__m256i *)&v213;
      v156 = &v218;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v213,
        &v218,
        &v208);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v152, v156);
    v149 = 7;
    v157 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
    if ( !v157 )
LABEL_309:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v149);
    v195 = a2;
    *(_DWORD *)((char *)v157 + 3) = 1953391988;
    *v157 = 1953394531;
    v189 = 7;
    v201 = v157;
    *(_QWORD *)&v190 = v157;
    *((_QWORD *)&v190 + 1) = 7;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
    v158 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8);
    if ( !v158 )
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32);
    v159 = v158;
    *(_QWORD *)&v202 = 0;
    __n = 0;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 8);
    v160 = 4;
    v161 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
    if ( !v161 )
      goto LABEL_308;
    *v161 = 1701869940;
    *(_QWORD *)v204 = 4;
    *(_QWORD *)&v204[8] = v161;
    *(_QWORD *)&v204[16] = 4;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
    v162 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
    if ( !v162 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 11);
    qmemcpy(v162, "tool_result", 11);
    v222.i8[0] = 3;
    v222.i64[1] = 11;
    v222.i64[2] = (__int64)v162;
    v222.i64[3] = 11;
    v163 = &v209;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v209, &v202, v204);
    if ( v209.i64[0] == 0x8000000000000000LL )
    {
      v164 = v209.i64[1];
      v165 = 32 * v209.i64[3];
      v216 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3] + 24);
      v215 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3] + 16);
      v166 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3]);
      v214 = *(__m256i **)(v209.i64[1] + 32 * v209.i64[3] + 8);
      v213 = v166;
      *(_OWORD *)(v209.i64[1] + v165 + 16) = v222.i128[1];
      v167 = (__m256i *)v222.i64[1];
      *(_OWORD *)(v164 + v165) = v222.i128[0];
      if ( (_BYTE)v213 != 6 )
      {
        v163 = (__m256i *)&v213;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v213);
      }
    }
    else
    {
      v221 = v212;
      v220 = v211;
      v219 = v210;
      v218 = v209;
      v208 = v222;
      v163 = (__m256i *)&v213;
      v167 = &v218;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v213,
        &v218,
        &v208);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v163, v167);
    v160 = 11;
    v168 = 1;
    v169 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
    if ( !v169 )
      goto LABEL_308;
    qmemcpy(v169, "tool_use_id", 11);
    *(_QWORD *)v204 = 11;
    *(_QWORD *)&v204[8] = v169;
    *(_QWORD *)&v204[16] = 11;
    if ( !v145 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(11, 1);
      v170 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__src, 1);
      if ( !v170 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __src);
      v168 = v170;
    }
    v171 = __src;
    memcpy((void *)v168, __dst, (size_t)__src);
    v222.i8[0] = 3;
    v222.i64[1] = (__int64)v171;
    v222.i64[2] = v168;
    v222.i64[3] = (__int64)v171;
    v172 = &v209;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v209, &v202, v204);
    if ( v209.i64[0] == 0x8000000000000000LL )
    {
      v173 = v209.i64[1];
      v174 = 32 * v209.i64[3];
      v216 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3] + 24);
      v215 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3] + 16);
      v175 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3]);
      v214 = *(__m256i **)(v209.i64[1] + 32 * v209.i64[3] + 8);
      v213 = v175;
      *(_OWORD *)(v209.i64[1] + v174 + 16) = v222.i128[1];
      v176 = (__m256i *)v222.i64[1];
      *(_OWORD *)(v173 + v174) = v222.i128[0];
      if ( (_BYTE)v213 != 6 )
      {
        v172 = (__m256i *)&v213;
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v213);
      }
    }
    else
    {
      v221 = v212;
      v220 = v211;
      v219 = v210;
      v218 = v209;
      v208 = v222;
      v172 = (__m256i *)&v213;
      v176 = &v218;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v213,
        &v218,
        &v208);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v172, v176);
    v160 = 7;
    v177 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
    if ( !v177 )
LABEL_308:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v160);
    *(_DWORD *)((char *)v177 + 3) = 1953391988;
    *v177 = 1953394531;
    *(_QWORD *)v204 = 7;
    *(_QWORD *)&v204[8] = v177;
    *(_QWORD *)&v204[16] = 7;
    if ( v148 < 0 )
    {
      v178 = 0;
      goto LABEL_287;
    }
    if ( v148 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
      v178 = 1;
      v179 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v148, 1);
      if ( !v179 )
LABEL_287:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v178, v148);
      v180 = v179;
    }
    else
    {
      v180 = 1;
    }
    memcpy((void *)v180, v206, v148);
    v222.i8[0] = 3;
    v222.i64[1] = v148;
    v222.i64[2] = v180;
    v222.i64[3] = v148;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v209, &v202, v204);
    if ( v209.i64[0] == 0x8000000000000000LL )
    {
      v216 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3] + 24);
      v215 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3] + 16);
      v181 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3]);
      v214 = *(__m256i **)(v209.i64[1] + 32 * v209.i64[3] + 8);
      v213 = v181;
      *(__m256i *)(v209.i64[1] + 32 * v209.i64[3]) = v222;
      if ( (_BYTE)v213 != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v213);
    }
    else
    {
      v221 = v212;
      v220 = v211;
      v219 = v210;
      v218 = v209;
      v208 = v222;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v213,
        &v218,
        &v208);
    }
    *(__int128 *)((char *)v218.i128 + 7) = v202;
    *(__int64 *)((char *)&v218.i64[2] + 7) = __n;
    *(_BYTE *)v159 = 5;
    *(_QWORD *)(v159 + 24) = *(__int64 *)((char *)&v218.i64[2] + 7);
    *(_QWORD *)(v159 + 17) = v218.i64[2];
    *(_OWORD *)(v159 + 1) = v218.i128[0];
    v205.i64[1] = 1;
    v205.i64[2] = v159;
    v205.i64[3] = 1;
    v205.i8[0] = 4;
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v209, &v191, &v189);
    v182 = v195;
    if ( v209.i64[0] == 0x8000000000000000LL )
    {
      v216 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3] + 24);
      v215 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3] + 16);
      v183 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3]);
      v214 = *(__m256i **)(v209.i64[1] + 32 * v209.i64[3] + 8);
      v213 = v183;
      *(__m256i *)(v209.i64[1] + 32 * v209.i64[3]) = v205;
      if ( (_BYTE)v213 != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v213);
    }
    else
    {
      v221 = v212;
      v220 = v211;
      v219 = v210;
      v218 = v209;
      v208 = v205;
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
        &v213,
        &v218,
        &v208);
    }
    *(__int128 *)((char *)v218.i128 + 8) = v191;
    v218.i64[3] = v192;
    v218.i8[0] = 5;
    v184 = v182[2];
    if ( v184 == *v182 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(v182);
    *(__m256i *)(v182[1] + 32 * v184) = v218;
    v182[2] = v184 + 1;
    if ( v200 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v206, v200, 1);
    v45 = (__int64)__src;
    if ( __src )
    {
      v46 = 1;
      v47 = (__int64)__dst;
      goto LABEL_60;
    }
    return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v188);
  }
LABEL_23:
  if ( v6 == 6 )
  {
    if ( *(_DWORD *)v8 ^ 0x74737973 | *((unsigned __int16 *)v8 + 2) ^ 0x6D65 )
      goto LABEL_34;
    goto LABEL_47;
  }
  if ( v6 != 9 )
    goto LABEL_34;
  if ( !(*(_QWORD *)v8 ^ 0x65706F6C65766564LL | (unsigned __int8)v8[8] ^ 0x72LL) )
  {
LABEL_47:
    codexmate_lib::core::relay::translator::flatten_openai_text::h49350bf0fa79c4c0(&v208, &v188);
    v38 = *a3;
    v39 = (__m256i *)a3[1];
    v40 = a3[2];
    *a3 = 0x8000000000000000LL;
    if ( __OFSUB__(-v38, 1) )
    {
      v41 = v208.i64[0];
      v42 = *(__int128 *)((char *)v208.i128 + 8);
    }
    else
    {
      if ( v40 )
      {
        if ( v208.i64[2] )
        {
          v213 = v38;
          v214 = v39;
          v215 = v40;
          v218.i64[0] = (__int64)&v213;
          v218.i64[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
          v218.i64[2] = (__int64)&v208;
          v218.i64[3] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(&v209, &unk_1017C5D97, &v218);
          v49 = v209.i64[0];
          v50 = *(__int128 *)((char *)v209.i128 + 8);
          if ( v213 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v214, v213, 1);
          if ( *((_QWORD *)&v50 + 1) )
          {
            *a3 = v49;
            *(_OWORD *)(a3 + 1) = v50;
          }
          else if ( v49 )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, v49, 1);
          }
        }
        else
        {
          *a3 = v38;
          a3[1] = (__int64)v39;
          a3[2] = v40;
        }
        v45 = v208.i64[0];
        if ( v208.i64[0] )
        {
          v47 = v208.i64[1];
          v46 = 1;
          goto LABEL_60;
        }
        return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v188);
      }
      v41 = v208.i64[0];
      v42 = *(__int128 *)((char *)v208.i128 + 8);
      if ( v38 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, v38, 1);
    }
    if ( !*((_QWORD *)&v42 + 1) )
    {
      if ( !v41 )
        return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v188);
      v46 = 1;
      v47 = v42;
      v45 = v41;
      goto LABEL_60;
    }
    *a3 = v41;
    *(_OWORD *)(a3 + 1) = v42;
    return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v188);
  }
  if ( !(*(_QWORD *)v8 ^ 0x6E61747369737361LL | (unsigned __int8)v8[8] ^ 0x74LL) )
  {
    v196 = 0;
    v197 = 8;
    v198 = 0;
    codexmate_lib::core::relay::translator::flatten_openai_text::h49350bf0fa79c4c0(&v191, &v188);
    v16 = v192;
    if ( v192 )
    {
      *(_QWORD *)v204 = 0;
      *(_QWORD *)&v204[16] = 0;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v191, &v188);
      v17 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
      if ( !v17 )
        goto LABEL_238;
      *v17 = 1701869940;
      v205.i64[0] = 4;
      v205.i64[1] = (__int64)v17;
      v205.i64[2] = 4;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
      v18 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
      if ( !v18 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
      *v18 = 1954047348;
      v222.i8[0] = 3;
      v222.i64[1] = 4;
      v222.i64[2] = (__int64)v18;
      v222.i64[3] = 4;
      v19 = &v209;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v209, v204, &v205);
      if ( v209.i64[0] == 0x8000000000000000LL )
      {
        v20 = v209.i64[1];
        v21 = 32 * v209.i64[3];
        v216 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3] + 24);
        v215 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3] + 16);
        v22 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3]);
        v214 = *(__m256i **)(v209.i64[1] + 32 * v209.i64[3] + 8);
        v213 = v22;
        *(_OWORD *)(v209.i64[1] + v21 + 16) = v222.i128[1];
        v23 = (__m256i *)v222.i64[1];
        *(_OWORD *)(v20 + v21) = v222.i128[0];
        if ( (_BYTE)v213 != 6 )
        {
          v19 = (__m256i *)&v213;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v213);
        }
      }
      else
      {
        v221 = v212;
        v220 = v211;
        v219 = v210;
        v218 = v209;
        v208 = v222;
        v19 = (__m256i *)&v213;
        v23 = &v218;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v213,
          &v218,
          &v208);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19, v23);
      v51 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
      if ( !v51 )
LABEL_238:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
      v195 = a2;
      *v51 = 1954047348;
      v205.i64[0] = 4;
      v205.i64[1] = (__int64)v51;
      v205.i64[2] = 4;
      v52 = *((const void **)&v191 + 1);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
      v53 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v16, 1);
      if ( !v53 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v16);
      v54 = (__int64)v53;
      memcpy(v53, v52, v16);
      v222.i8[0] = 3;
      v222.i64[1] = v16;
      v222.i64[2] = v54;
      v222.i64[3] = v16;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v209, v204, &v205);
      a2 = v195;
      if ( v209.i64[0] == 0x8000000000000000LL )
      {
        v216 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3] + 24);
        v215 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3] + 16);
        v55 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3]);
        v214 = *(__m256i **)(v209.i64[1] + 32 * v209.i64[3] + 8);
        v213 = v55;
        *(__m256i *)(v209.i64[1] + 32 * v209.i64[3]) = v222;
        if ( (_BYTE)v213 != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v213);
      }
      else
      {
        v221 = v212;
        v220 = v211;
        v219 = v210;
        v218 = v209;
        v208 = v222;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v213,
          &v218,
          &v208);
      }
      *(__int128 *)((char *)v218.i128 + 8) = *(_OWORD *)v204;
      v218.i64[3] = *(_QWORD *)&v204[16];
      v218.i8[0] = 5;
      v56 = v198;
      if ( v198 == v196 )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v196);
      *(__m256i *)(v197 + 32 * v56) = v218;
      v198 = v56 + 1;
    }
    v57 = "tool_callsreasoning_content";
    v58 = 10;
    v59 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
            "tool_callsreasoning_content",
            10,
            a1);
    if ( v59 )
    {
      if ( *(_BYTE *)v59 == 4 )
      {
        v60 = *(_QWORD *)(v59 + 24);
        if ( v60 )
        {
          v61 = *(void **)(v59 + 16);
          v62 = 32 * v60;
          do
          {
            v63 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                    "idassistant",
                    2,
                    v61);
            __src = (void *)13;
            if ( v63 )
            {
              v64 = "toolu_unknowncontent_filter";
              if ( *(_BYTE *)v63 == 3 )
              {
                v65 = *(void **)(v63 + 24);
                if ( (__int64)v65 < 0 )
                {
                  v67 = 0;
                  goto LABEL_208;
                }
                v206 = v61;
                __src = v65;
                v66 = a2;
                v64 = *(char **)(v63 + 16);
                if ( !v65 )
                {
                  __dst = (void *)1;
                  v193 = 1;
                  __src = nullptr;
                  goto LABEL_95;
                }
                v61 = v206;
              }
            }
            else
            {
              v64 = "toolu_unknowncontent_filter";
            }
            v206 = v61;
            v66 = a2;
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("idassistant", 2);
            v67 = 1;
            __dst = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__src, 1);
            if ( !__dst )
            {
              v144 = __src;
LABEL_233:
              __dst = v144;
LABEL_208:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v67, __dst);
            }
            v193 = 0;
LABEL_95:
            memcpy(__dst, v64, (size_t)__src);
            v68 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                    &unk_101674A90,
                    8,
                    v206);
            a2 = v66;
            v200 = v68;
            if ( v68 )
            {
              v69 = 4;
              v70 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                      "name",
                      4,
                      v68);
              v186 = v62;
              v71 = 4;
              v195 = v66;
              if ( !v70 )
              {
                v72 = (__int64 *)"toolroleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls";
                goto LABEL_105;
              }
              v72 = (__int64 *)"toolroleusercodedonehttpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls";
              if ( *(_BYTE *)v70 != 3 )
                goto LABEL_105;
              v72 = *(__int64 **)(v70 + 16);
              v71 = *(_QWORD *)(v70 + 24);
              if ( v71 == 18 )
              {
                v85 = _mm_or_si128(
                        _mm_xor_si128(_mm_cvtsi32_si128(*((unsigned __int16 *)v72 + 8)), (__m128i)xmmword_1015E35E0),
                        _mm_xor_si128(_mm_loadu_si128((const __m128i *)v72), (__m128i)xmmword_1015E35D0));
                if ( !_mm_testz_si128(v85, v85) )
                  goto LABEL_122;
              }
              else
              {
                if ( v71 == 10 )
                {
                  if ( !(*v72 ^ 0x726165735F626577LL | *((unsigned __int16 *)v72 + 4) ^ 0x6863LL) )
                    v72 = &anon_10420c9971c21f44d230d15b39fb3fec_363;
                  v71 = 10;
                  goto LABEL_105;
                }
                if ( (unsigned __int64)v71 <= 0xA )
                {
                  if ( v71 )
                    goto LABEL_105;
                  v201 = (void *)1;
                  v194 = 1;
                  v76 = 0;
                  goto LABEL_107;
                }
LABEL_122:
                v86 = _byteswap_uint64(*v72);
                v87 = 0x7765625F73656172LL;
                if ( v86 != 0x7765625F73656172LL
                  || (v86 = _byteswap_uint64(*(__int64 *)((char *)v72 + 3)),
                      v88 = 0,
                      v69 = 0x5F7365617263685FLL,
                      v87 = 0x5F7365617263685FLL,
                      v86 != 0x5F7365617263685FLL) )
                {
                  v88 = 2 * (v87 >= v86) - 1;
                }
                if ( v88 )
                {
                  if ( v71 < 0 )
                  {
                    v75 = 0;
                    goto LABEL_227;
                  }
LABEL_105:
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("name", v69);
                  v75 = 1;
                  v201 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v71, 1);
                  if ( !v201 )
                  {
                    v201 = (void *)v71;
LABEL_227:
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v75, v201);
                  }
                  v194 = 0;
                  v76 = v71;
LABEL_107:
                  v199 = v76;
                  memcpy(v201, v72, v76);
                  v77 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                          "arguments{}",
                          9,
                          v200);
                  v78 = 2;
                  if ( v77 )
                  {
                    v79 = "{}";
                    if ( *(_BYTE *)v77 == 3 )
                    {
                      v79 = *(char **)(v77 + 16);
                      v78 = *(_QWORD *)(v77 + 24);
                    }
                  }
                  else
                  {
                    v79 = "{}";
                  }
                  v218.i64[0] = (__int64)v79;
                  *(__int128 *)((char *)v218.i128 + 8) = (unsigned __int64)v78;
                  v218.i64[3] = 0;
                  v219 = v79;
                  v220 = v78;
                  v80 = &v209;
                  v81 = (__int64)&v218;
                  serde_json::de::from_trait::h51e180b4bb6af5e0(&v209, &v218);
                  if ( v209.i8[0] == 6 )
                  {
                    v82 = (__m256i *)v209.i64[1];
                    v218.i64[0] = v209.i64[1];
                    if ( v78 < 0 )
                      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(0, v187);
                    if ( v78 )
                    {
                      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v209, &v218);
                      v83 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v78, 1);
                      if ( !v83 )
                        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v78);
                    }
                    else
                    {
                      v83 = 1;
                    }
                    v89 = v83;
                    memcpy((void *)v83, v79, v78);
                    v205.i64[1] = v78;
                    v187 = v89;
                    v205.i64[2] = v89;
                    v205.i64[3] = v78;
                    v205.i8[0] = 3;
                    if ( v82->i64[0] == 1 )
                    {
                      v84 = __src;
                      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(&v82->u32[2]);
                    }
                    else
                    {
                      v84 = __src;
                      if ( !v82->i64[0] )
                      {
                        v90 = v82->i64[2];
                        if ( v90 )
                          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v82->i64[1], v90, 1);
                      }
                    }
                    v81 = 40;
                    v80 = v82;
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v82, 40, 8);
                  }
                  else
                  {
                    v205 = v209;
                    v84 = __src;
                  }
                  v189 = 0;
                  *((_QWORD *)&v190 + 1) = 0;
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v80, v81);
                  v91 = 4;
                  v92 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                  if ( !v92 )
                    goto LABEL_242;
                  *v92 = 1701869940;
                  *(_QWORD *)&v202 = 4;
                  *((_QWORD *)&v202 + 1) = v92;
                  __n = 4;
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
                  v93 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
                  if ( !v93 )
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8);
                  *v93 = 0x6573755F6C6F6F74LL;
                  v222.i8[0] = 3;
                  v222.i64[1] = 8;
                  v222.i64[2] = (__int64)v93;
                  v222.i64[3] = 8;
                  v94 = &v209;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                    &v209,
                    &v189,
                    &v202);
                  if ( v209.i64[0] == 0x8000000000000000LL )
                  {
                    v95 = v209.i64[1];
                    v96 = 32 * v209.i64[3];
                    v216 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3] + 24);
                    v215 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3] + 16);
                    v97 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3]);
                    v214 = *(__m256i **)(v209.i64[1] + 32 * v209.i64[3] + 8);
                    v213 = v97;
                    *(_OWORD *)(v209.i64[1] + v96 + 16) = v222.i128[1];
                    v98 = (__m256i *)v222.i64[1];
                    *(_OWORD *)(v95 + v96) = v222.i128[0];
                    if ( (_BYTE)v213 != 6 )
                    {
                      v94 = (__m256i *)&v213;
                      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v213);
                    }
                  }
                  else
                  {
                    v221 = v212;
                    v220 = v211;
                    v219 = v210;
                    v218 = v209;
                    v208 = v222;
                    v94 = (__m256i *)&v213;
                    v98 = &v218;
                    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                      &v213,
                      &v218,
                      &v208);
                  }
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v94, v98);
                  v91 = 2;
                  v99 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
                  if ( !v99 )
                    goto LABEL_242;
                  *v99 = 25705;
                  *(_QWORD *)&v202 = 2;
                  *((_QWORD *)&v202 + 1) = v99;
                  __n = 2;
                  v100 = 1;
                  if ( !(_BYTE)v193 )
                  {
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1);
                    v101 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v84, 1);
                    if ( !v101 )
                      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v84);
                    v100 = v101;
                  }
                  memcpy((void *)v100, __dst, (size_t)v84);
                  v222.i8[0] = 3;
                  v222.i64[1] = (__int64)v84;
                  v222.i64[2] = v100;
                  v222.i64[3] = (__int64)v84;
                  v102 = &v209;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                    &v209,
                    &v189,
                    &v202);
                  if ( v209.i64[0] == 0x8000000000000000LL )
                  {
                    v103 = v209.i64[1];
                    v104 = 32 * v209.i64[3];
                    v216 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3] + 24);
                    v215 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3] + 16);
                    v105 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3]);
                    v214 = *(__m256i **)(v209.i64[1] + 32 * v209.i64[3] + 8);
                    v213 = v105;
                    *(_OWORD *)(v209.i64[1] + v104 + 16) = v222.i128[1];
                    v106 = (__m256i *)v222.i64[1];
                    *(_OWORD *)(v103 + v104) = v222.i128[0];
                    if ( (_BYTE)v213 != 6 )
                    {
                      v102 = (__m256i *)&v213;
                      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v213);
                    }
                  }
                  else
                  {
                    v221 = v212;
                    v220 = v211;
                    v219 = v210;
                    v218 = v209;
                    v208 = v222;
                    v102 = (__m256i *)&v213;
                    v106 = &v218;
                    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                      &v213,
                      &v218,
                      &v208);
                  }
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v102, v106);
                  v91 = 4;
                  v107 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
                  if ( !v107 )
                    goto LABEL_242;
                  *v107 = 1701667182;
                  *(_QWORD *)&v202 = 4;
                  *((_QWORD *)&v202 + 1) = v107;
                  __n = 4;
                  v108 = 1;
                  if ( !(_BYTE)v194 )
                  {
                    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
                    v109 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v199, 1);
                    if ( !v109 )
                      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v199);
                    v108 = v109;
                  }
                  v110 = v199;
                  memcpy((void *)v108, v201, v199);
                  v222.i8[0] = 3;
                  v222.i64[1] = v110;
                  v222.i64[2] = v108;
                  v222.i64[3] = v110;
                  v111 = &v209;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                    &v209,
                    &v189,
                    &v202);
                  v62 = v186;
                  if ( v209.i64[0] == 0x8000000000000000LL )
                  {
                    v112 = v209.i64[1];
                    v113 = 32 * v209.i64[3];
                    v216 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3] + 24);
                    v215 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3] + 16);
                    v114 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3]);
                    v214 = *(__m256i **)(v209.i64[1] + 32 * v209.i64[3] + 8);
                    v213 = v114;
                    *(_OWORD *)(v209.i64[1] + v113 + 16) = v222.i128[1];
                    v115 = (__m256i *)v222.i64[1];
                    *(_OWORD *)(v112 + v113) = v222.i128[0];
                    if ( (_BYTE)v213 != 6 )
                    {
                      v111 = (__m256i *)&v213;
                      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v213);
                    }
                  }
                  else
                  {
                    v221 = v212;
                    v220 = v211;
                    v219 = v210;
                    v218 = v209;
                    v208 = v222;
                    v111 = (__m256i *)&v213;
                    v115 = &v218;
                    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                      &v213,
                      &v218,
                      &v208);
                  }
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v111, v115);
                  v91 = 5;
                  v116 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
                  if ( !v116 )
LABEL_242:
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v91);
                  *(_BYTE *)(v116 + 4) = 116;
                  *(_DWORD *)v116 = 1970302569;
                  *(_QWORD *)&v202 = 5;
                  *((_QWORD *)&v202 + 1) = v116;
                  __n = 5;
                  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
                    &v218,
                    &v205);
                  if ( v218.i8[0] == 6 )
                  {
                    v209.i64[0] = v218.i64[1];
                    core::result::unwrap_failed::h855bccc0ecc45c4f(
                      "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                      43,
                      &v209,
                      &off_10196D480,
                      &off_10196CEF0);
                  }
                  v222 = v218;
                  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(
                    &v209,
                    &v189,
                    &v202);
                  if ( v209.i64[0] == 0x8000000000000000LL )
                  {
                    v216 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3] + 24);
                    v215 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3] + 16);
                    v117 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3]);
                    v214 = *(__m256i **)(v209.i64[1] + 32 * v209.i64[3] + 8);
                    v213 = v117;
                    *(__m256i *)(v209.i64[1] + 32 * v209.i64[3]) = v222;
                    if ( (_BYTE)v213 != 6 )
                      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v213);
                  }
                  else
                  {
                    v221 = v212;
                    v220 = v211;
                    v219 = v210;
                    v218 = v209;
                    v208 = v222;
                    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
                      &v213,
                      &v218,
                      &v208);
                  }
                  *(_OWORD *)&v204[15] = v190;
                  *(_QWORD *)&v204[7] = v189;
                  v218.i128[0] = *(_OWORD *)v204;
                  v218.i64[2] = v190 >> 8;
                  *(__int64 *)((char *)&v218.i64[2] + 7) = *((_QWORD *)&v190 + 1);
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v205);
                  v73 = 5;
                  if ( v199 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v201, v199, 1);
                  a2 = v195;
                  v74 = (char *)v206;
                  v68 = v200;
                  goto LABEL_167;
                }
              }
              v71 = 10;
              v72 = &anon_10420c9971c21f44d230d15b39fb3fec_363;
              goto LABEL_105;
            }
            v73 = 6;
            v74 = (char *)v206;
LABEL_167:
            v58 = (__int64)__src;
            if ( __src )
            {
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst, __src, 1);
              v68 = v200;
            }
            if ( v68 )
            {
              v223.i8[0] = v73;
              v223.i64[3] = *(__int64 *)((char *)&v218.i64[2] + 7);
              *(__int128 *)((char *)v223.i128 + 9) = *(__int128 *)((char *)v218.i128 + 8);
              *(__int64 *)((char *)v223.i64 + 1) = v218.i64[0];
              v118 = v198;
              if ( v198 == v196 )
                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v196);
              *(__m256i *)(v197 + 32 * v118) = v223;
              v58 = v223.i64[1];
              v198 = v118 + 1;
            }
            v61 = v74 + 32;
            v119 = v62 == 32;
            v62 -= 32;
            v57 = "idassistant";
          }
          while ( !v119 );
        }
      }
    }
    if ( v198 == 1
      && (v57 = (const char *)&anon_10420c9971c21f44d230d15b39fb3fec_75,
          v58 = 4,
          (v120 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                    &anon_10420c9971c21f44d230d15b39fb3fec_75,
                    4,
                    v197)) != 0)
      && *(_BYTE *)v120 == 3
      && *(_QWORD *)(v120 + 24) == 4
      && **(_DWORD **)(v120 + 16) == 1954047348 )
    {
      if ( !v198 )
        core::panicking::panic_bounds_check::h56740b1198b22635(0, 0, &off_10196CF20, v121);
      v135 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
               &anon_10420c9971c21f44d230d15b39fb3fec_110,
               4,
               v197);
      v136 = 1;
      if ( v135 && *(_BYTE *)v135 == 3 )
      {
        v137 = a2;
        v136 = *(_QWORD *)(v135 + 16);
        v138 = *(_QWORD *)(v135 + 24);
      }
      else
      {
        v137 = a2;
        v138 = 0;
      }
      alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v218, v138, 0, 1, 1);
      v67 = v218.i64[1];
      if ( v218.i32[0] == 1 )
      {
        v144 = (void *)v218.i64[2];
        goto LABEL_233;
      }
      v139 = v218.i64[2];
      v140 = v218.i64[2];
      memcpy((void *)v218.i64[2], (const void *)v136, v138);
      v222.i64[0] = v67;
      v222.i64[1] = v139;
      v222.i64[2] = v138;
      v208.i64[0] = 0;
      v208.i64[2] = 0;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v140, v136);
      v141 = 4;
      v142 = (__m256i *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
      if ( !v142 )
        goto LABEL_248;
      v142->i32[0] = 1701605234;
      v213 = 4;
      v214 = v142;
      v215 = 4;
      serde_json::value::to_value::h29e3c39dc75a9151(&v218, &off_10196C970);
      if ( v218.i8[0] == 6 )
      {
        v209.i64[0] = v218.i64[1];
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
          43,
          &v209,
          &off_10196D480,
          &off_10196CF38);
      }
      v209 = v218;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v218, &v208, &v213, &v209);
      if ( v218.i8[0] != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v218);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v218, &v208);
      v141 = 7;
      v143 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
      if ( !v143 )
LABEL_248:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v141);
      *(_DWORD *)((char *)v143 + 3) = 1953391988;
      *v143 = 1953394531;
      v213 = 7;
      v214 = (__m256i *)v143;
      v215 = 7;
      serde_json::value::to_value::hf4a5c51664f5d8d6(&v218, &v222);
      if ( v218.i8[0] == 6 )
      {
        v209.i64[0] = v218.i64[1];
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
          43,
          &v209,
          &off_10196D480,
          &off_10196CF38);
      }
      v209 = v218;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v218, &v208, &v213, &v209);
      if ( v218.i8[0] != 6 )
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v218);
      *(__int128 *)((char *)v218.i128 + 8) = v208.i128[0];
      v218.i64[3] = v208.i64[2];
      v218.i8[0] = 5;
      alloc::vec::Vec$LT$T$C$A$GT$::push_mut::hec645efee4458724(v137, &v218);
      if ( v67 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v139, v67, 1);
    }
    else
    {
      *(_QWORD *)v204 = 0;
      *(_QWORD *)&v204[16] = 0;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v57, v58);
      v122 = 4;
      v123 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
      if ( !v123 )
        goto LABEL_237;
      *v123 = 1701605234;
      v205.i64[0] = 4;
      v205.i64[1] = (__int64)v123;
      v205.i64[2] = 4;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
      v124 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
      if ( !v124 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
      *(_QWORD *)v124 = 0x6E61747369737361LL;
      *(_BYTE *)(v124 + 8) = 116;
      v222.i8[0] = 3;
      v222.i64[1] = 9;
      v222.i64[2] = v124;
      v222.i64[3] = 9;
      v125 = &v209;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v209, v204, &v205);
      if ( v209.i64[0] == 0x8000000000000000LL )
      {
        v126 = v209.i64[1];
        v127 = 32 * v209.i64[3];
        v216 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3] + 24);
        v215 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3] + 16);
        v128 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3]);
        v214 = *(__m256i **)(v209.i64[1] + 32 * v209.i64[3] + 8);
        v213 = v128;
        *(_OWORD *)(v209.i64[1] + v127 + 16) = v222.i128[1];
        v129 = (__m256i *)v222.i64[1];
        *(_OWORD *)(v126 + v127) = v222.i128[0];
        if ( (_BYTE)v213 != 6 )
        {
          v125 = (__m256i *)&v213;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v213);
        }
      }
      else
      {
        v221 = v212;
        v220 = v211;
        v219 = v210;
        v218 = v209;
        v208 = v222;
        v125 = (__m256i *)&v213;
        v129 = &v218;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v213,
          &v218,
          &v208);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v125, v129);
      v122 = 7;
      v130 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
      if ( !v130 )
LABEL_237:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v122);
      *(_DWORD *)((char *)v130 + 3) = 1953391988;
      *v130 = 1953394531;
      v205.i64[0] = 7;
      v205.i64[1] = (__int64)v130;
      v205.i64[2] = 7;
      serde_core::ser::Serializer::collect_seq::h84c021fc6bf1d891(&v218, &v196);
      if ( v218.i8[0] == 6 )
      {
        v209.i64[0] = v218.i64[1];
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
          43,
          &v209,
          &off_10196D480,
          &off_10196CF50);
      }
      v222 = v218;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v209, v204, &v205);
      if ( v209.i64[0] == 0x8000000000000000LL )
      {
        v216 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3] + 24);
        v215 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3] + 16);
        v131 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3]);
        v214 = *(__m256i **)(v209.i64[1] + 32 * v209.i64[3] + 8);
        v213 = v131;
        *(__m256i *)(v209.i64[1] + 32 * v209.i64[3]) = v222;
        if ( (_BYTE)v213 != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v213);
      }
      else
      {
        v221 = v212;
        v220 = v211;
        v219 = v210;
        v218 = v209;
        v208 = v222;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v213,
          &v218,
          &v208);
      }
      *(__int128 *)((char *)v218.i128 + 8) = *(_OWORD *)v204;
      v218.i64[3] = *(_QWORD *)&v204[16];
      v218.i8[0] = 5;
      v132 = a2[2];
      if ( v132 == *a2 )
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(a2);
      *(__m256i *)(a2[1] + 32 * v132) = v218;
      a2[2] = v132 + 1;
    }
    if ( (_QWORD)v191 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v191 + 1), v191, 1);
    v133 = v197;
    for ( i = v198 + 1; i != 1; --i )
    {
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v133);
      v133 += 32;
    }
    if ( v196 )
    {
      v47 = v197;
      v45 = 32 * v196;
      v46 = 8;
      goto LABEL_60;
    }
    return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v188);
  }
LABEL_34:
  codexmate_lib::core::relay::translator::flatten_openai_text::h49350bf0fa79c4c0(&v202, &v188);
  *(_QWORD *)v204 = 0;
  *(_QWORD *)&v204[16] = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v202, &v188);
  v24 = 4;
  v25 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v25 )
    goto LABEL_231;
  *v25 = 1701605234;
  v205.i64[0] = 4;
  v205.i64[1] = (__int64)v25;
  v205.i64[2] = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v26 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v26 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
  *v26 = 1919251317;
  v222.i8[0] = 3;
  v222.i64[1] = 4;
  v222.i64[2] = (__int64)v26;
  v222.i64[3] = 4;
  v27 = &v209;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v209, v204, &v205);
  if ( __OFSUB__(0, v209.i64[0]) )
  {
    v28 = v209.i64[1];
    v29 = 32 * v209.i64[3];
    v216 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3] + 24);
    v215 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3] + 16);
    v30 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3]);
    v214 = *(__m256i **)(v209.i64[1] + 32 * v209.i64[3] + 8);
    v213 = v30;
    *(_OWORD *)(v209.i64[1] + v29 + 16) = v222.i128[1];
    v31 = (__m256i *)v222.i64[1];
    *(_OWORD *)(v28 + v29) = v222.i128[0];
    if ( (_BYTE)v213 != 6 )
    {
      v27 = (__m256i *)&v213;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v213);
    }
  }
  else
  {
    v221 = v212;
    v220 = v211;
    v219 = v210;
    v218 = v209;
    v208 = v222;
    v27 = (__m256i *)&v213;
    v31 = &v218;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v213,
      &v218,
      &v208);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v27, v31);
  v24 = 7;
  v32 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v32 )
LABEL_231:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v24);
  *(_DWORD *)((char *)v32 + 3) = 1953391988;
  *v32 = 1953394531;
  v205.i64[0] = 7;
  v205.i64[1] = (__int64)v32;
  v205.i64[2] = 7;
  v33 = __n;
  if ( (__n & 0x8000000000000000LL) != 0LL )
  {
    v34 = 0;
    goto LABEL_43;
  }
  v35 = a2;
  __src = *((void **)&v202 + 1);
  if ( __n )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
    v34 = 1;
    v36 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v33, 1);
    if ( !v36 )
LABEL_43:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v34, v33);
    v37 = v36;
  }
  else
  {
    v37 = 1;
  }
  memcpy((void *)v37, __src, v33);
  v222.i8[0] = 3;
  v222.i64[1] = v33;
  v222.i64[2] = v37;
  v222.i64[3] = v33;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v209, v204, &v205);
  if ( v209.i64[0] == 0x8000000000000000LL )
  {
    v216 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3] + 24);
    v215 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3] + 16);
    v43 = *(_QWORD *)(v209.i64[1] + 32 * v209.i64[3]);
    v214 = *(__m256i **)(v209.i64[1] + 32 * v209.i64[3] + 8);
    v213 = v43;
    *(__m256i *)(v209.i64[1] + 32 * v209.i64[3]) = v222;
    if ( (_BYTE)v213 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v213);
  }
  else
  {
    v221 = v212;
    v220 = v211;
    v219 = v210;
    v218 = v209;
    v208 = v222;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v213,
      &v218,
      &v208);
  }
  *(__int128 *)((char *)v218.i128 + 8) = *(_OWORD *)v204;
  v218.i64[3] = *(_QWORD *)&v204[16];
  v218.i8[0] = 5;
  v44 = v35[2];
  if ( v44 == *v35 )
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(v35);
  *(__m256i *)(v35[1] + 32 * v44) = v218;
  v35[2] = v44 + 1;
  v45 = v202;
  if ( (_QWORD)v202 )
  {
    v46 = 1;
    v47 = (__int64)__src;
LABEL_60:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v45, v46);
  }
  return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v188);
}
