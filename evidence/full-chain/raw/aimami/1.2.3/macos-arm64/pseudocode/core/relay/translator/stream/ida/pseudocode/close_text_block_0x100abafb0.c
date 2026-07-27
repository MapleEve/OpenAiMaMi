// __ZN13codexmate_lib4core5relay10translator6stream32AnthropicDirectToResponsesStream16close_text_block @ 0x100abafb0 | 基线 same-set
// [FULL decompile]

double __fastcall codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::close_text_block::h9e7dc35fe5891c9d(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v4; // r15
  _DWORD *v5; // rax
  void *v6; // rax
  __m256i *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  __m256i *v11; // rsi
  void *v12; // rax
  __m256i *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __m256i *v17; // rsi
  _DWORD *v18; // rax
  size_t v19; // rcx
  __int64 v20; // r12
  __int64 v21; // rax
  __int64 v22; // r15
  __int64 v23; // rbx
  __m256i *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  __m256i *v28; // rsi
  void *v29; // rax
  __m256i *v30; // rdi
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __m256i *v34; // rsi
  _DWORD *v35; // rax
  __int64 v36; // r12
  __int64 v37; // rax
  __int64 v38; // r15
  __int64 v39; // rdx
  __int64 v40; // r9
  __int128 v41; // kr40_16
  _QWORD *v42; // rdx
  __int64 v43; // rsi
  unsigned __int64 v44; // rax
  _QWORD *v45; // r12
  __int64 v46; // rsi
  __int64 v47; // r13
  __int64 v48; // r12
  _DWORD *v49; // rax
  void *v50; // rax
  __m256i *v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rdx
  __m256i *v55; // rsi
  void *v56; // rax
  __m256i *v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rdx
  __m256i *v61; // rsi
  __int64 v62; // rbx
  _DWORD *v63; // rax
  size_t v64; // rcx
  size_t v65; // rbx
  __int64 v66; // rax
  __int64 v67; // r15
  __m256i *v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rdx
  __m256i *v72; // rsi
  void *v73; // rax
  __m256i *v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rdx
  __m256i *v78; // rsi
  _DWORD *v79; // rax
  _DWORD *v80; // rax
  void *v81; // rax
  __m256i *v82; // rdi
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rdx
  __m256i *v86; // rsi
  __int64 v87; // r15
  _DWORD *v88; // rax
  __int64 v89; // rax
  __m256i *v90; // rdi
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rdx
  __m256i *v94; // rsi
  void *v95; // rax
  __int64 v96; // rdx
  __int64 v97; // rdx
  __int64 v98; // r9
  __int128 v99; // krB0_16
  _QWORD *v100; // rdi
  __int64 v101; // rsi
  __int64 v102; // rsi
  __int64 v103; // rbx
  _DWORD *v104; // rax
  _DWORD *v105; // rax
  __m256i *v106; // rdi
  __int64 v107; // rax
  __int64 v108; // rcx
  __int64 v109; // rdx
  __m256i *v110; // rsi
  __int64 v111; // r15
  _WORD *v112; // rax
  size_t v113; // rcx
  size_t v114; // r15
  __int64 v115; // rax
  __int64 v116; // rbx
  __m256i *v117; // rdi
  __int64 v118; // rax
  __int64 v119; // rcx
  __int64 v120; // rdx
  __m256i *v121; // rsi
  __int64 v122; // rax
  __int64 v123; // rax
  __m256i *v124; // rdi
  __int64 v125; // rax
  __int64 v126; // rcx
  __int64 v127; // rdx
  __m256i *v128; // rsi
  _DWORD *v129; // rax
  __int64 v130; // rax
  __m256i *v131; // rdi
  __int64 v132; // rax
  __int64 v133; // rcx
  __int64 v134; // rdx
  __m256i *v135; // rsi
  _DWORD *v136; // rax
  __int64 v137; // rax
  __int64 v138; // rbx
  __int64 v139; // r13
  _DWORD *v140; // rax
  void *v141; // rax
  __m256i *v142; // rdi
  __int64 v143; // rax
  __int64 v144; // rcx
  __int64 v145; // rdx
  __m256i *v146; // rsi
  __int64 v147; // r12
  _DWORD *v148; // rax
  __int64 v149; // r13
  __int64 v150; // rax
  __m256i *v151; // rdi
  __int64 v152; // rax
  __int64 v153; // rcx
  __int64 v154; // rdx
  __m256i *v155; // rsi
  void *v156; // rax
  __int64 v157; // rdx
  __m256i *v158; // rdi
  __int64 v159; // rax
  __int64 v160; // rcx
  __int64 v161; // rdx
  __m256i *v162; // rsi
  __int64 v163; // r15
  _DWORD *v164; // rax
  void *v165; // rax
  __m256i *v166; // rdi
  __int64 v167; // rax
  __int64 v168; // rcx
  __int64 v169; // rdx
  __m256i *v170; // rsi
  void *v171; // rax
  __m256i *v172; // rdi
  __int64 v173; // rax
  __int64 v174; // rcx
  __int64 v175; // rdx
  __m256i *v176; // rsi
  __int64 v177; // rbx
  _DWORD *v178; // rax
  size_t v179; // rcx
  size_t v180; // rbx
  __int64 v181; // rax
  __int64 v182; // r15
  __m256i *v183; // rdi
  __int64 v184; // rax
  __int64 v185; // rcx
  __int64 v186; // rdx
  __m256i *v187; // rsi
  _DWORD *v188; // rax
  __int64 v189; // rdx
  __int64 v190; // r9
  __int128 v191; // kr160_16
  _QWORD *v192; // rdi
  __int64 v193; // rsi
  double result; // xmm0_8
  __int64 v195; // rbx
  __int64 v196; // rax
  __int64 v197; // rcx
  __int64 v198; // rdx
  __int128 v199; // kr170_16
  __int64 v200; // [rsp+18h] [rbp-208h]
  void *v201; // [rsp+30h] [rbp-1F0h]
  signed __int64 v202; // [rsp+38h] [rbp-1E8h]
  __int64 v203; // [rsp+40h] [rbp-1E0h]
  void *v204; // [rsp+48h] [rbp-1D8h]
  __int64 v205; // [rsp+50h] [rbp-1D0h]
  __int64 v206; // [rsp+58h] [rbp-1C8h]
  __int64 v207; // [rsp+60h] [rbp-1C0h] BYREF
  _DWORD *v208; // [rsp+68h] [rbp-1B8h]
  __int64 v209; // [rsp+70h] [rbp-1B0h]
  __int64 v210; // [rsp+78h] [rbp-1A8h]
  size_t v211; // [rsp+80h] [rbp-1A0h]
  __int64 *v212; // [rsp+88h] [rbp-198h]
  void *v213; // [rsp+90h] [rbp-190h]
  __int64 v214; // [rsp+98h] [rbp-188h]
  void *__src; // [rsp+A0h] [rbp-180h]
  __int64 v216; // [rsp+A8h] [rbp-178h]
  _QWORD *v217; // [rsp+B0h] [rbp-170h]
  __int128 v218; // [rsp+B8h] [rbp-168h] BYREF
  __int64 v219; // [rsp+C8h] [rbp-158h]
  __int128 v220; // [rsp+D0h] [rbp-150h] BYREF
  __int64 v221; // [rsp+E0h] [rbp-140h]
  size_t __n; // [rsp+E8h] [rbp-138h]
  __int128 v223; // [rsp+F0h] [rbp-130h] BYREF
  __int64 v224; // [rsp+100h] [rbp-120h]
  __m256i v225; // [rsp+108h] [rbp-118h] BYREF
  __m256i v226; // [rsp+128h] [rbp-F8h] BYREF
  __m256i v227; // [rsp+148h] [rbp-D8h] BYREF
  __int64 v228; // [rsp+168h] [rbp-B8h]
  __int64 v229; // [rsp+170h] [rbp-B0h]
  __int64 v230; // [rsp+178h] [rbp-A8h]
  __m256i v231; // [rsp+180h] [rbp-A0h] BYREF
  __int64 v232; // [rsp+1A0h] [rbp-80h]
  __int64 v233; // [rsp+1A8h] [rbp-78h]
  __int64 v234; // [rsp+1B0h] [rbp-70h]
  __int64 v235; // [rsp+1B8h] [rbp-68h] BYREF
  __int64 v236; // [rsp+1C0h] [rbp-60h]
  __int64 v237; // [rsp+1C8h] [rbp-58h]
  __int64 v238; // [rsp+1D0h] [rbp-50h]
  __m256i v239; // [rsp+1D8h] [rbp-48h]

  v2 = a1[22];
  a1[22] = 0x8000000000000000LL;
  if ( __OFSUB__(-v2, 1) )
    return result;
  v217 = a2;
  v200 = v2;
  v201 = (void *)a1[23];
  v202 = a1[24];
  v203 = a1[25];
  v204 = (void *)a1[26];
  v205 = a1[27];
  v206 = a1[28];
  *(_QWORD *)&v223 = 0;
  v224 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2);
  v4 = 4;
  v5 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v5 )
    goto LABEL_187;
  *v5 = 1701869940;
  v225.i64[0] = 4;
  v225.i64[1] = (__int64)v5;
  v225.i64[2] = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v6 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(25, 1);
  if ( !v6 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 25);
  qmemcpy(v6, "response.output_text.done", 25);
  v239.i8[0] = 3;
  v239.i64[1] = 25;
  v239.i64[2] = (__int64)v6;
  v239.i64[3] = 25;
  v7 = &v231;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v231, &v223, &v225);
  if ( v231.i64[0] == 0x8000000000000000LL )
  {
    v8 = v231.i64[1];
    v9 = 32 * v231.i64[3];
    v238 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 24);
    v237 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 16);
    v10 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3]);
    v236 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 8);
    v235 = v10;
    *(_OWORD *)(v231.i64[1] + v9 + 16) = v239.i128[1];
    v11 = (__m256i *)v239.i64[1];
    *(_OWORD *)(v8 + v9) = v239.i128[0];
    if ( (_BYTE)v235 != 6 )
    {
      v7 = (__m256i *)&v235;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v235);
    }
  }
  else
  {
    v230 = v234;
    v229 = v233;
    v228 = v232;
    v227 = v231;
    v226 = v239;
    v7 = (__m256i *)&v235;
    v11 = &v227;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v235,
      &v227,
      &v226);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, v11);
  v4 = 12;
  v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
  if ( !v12 )
    goto LABEL_187;
  qmemcpy(v12, "output_index", 12);
  v225.i64[0] = 12;
  v225.i64[1] = (__int64)v12;
  v225.i64[2] = 12;
  v239.i8[0] = 2;
  v239.i64[1] = 0;
  v210 = (unsigned int)v206;
  v239.i64[2] = (unsigned int)v206;
  v13 = &v231;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v231, &v223, &v225);
  if ( v231.i64[0] == 0x8000000000000000LL )
  {
    v14 = v231.i64[1];
    v15 = 32 * v231.i64[3];
    v238 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 24);
    v237 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 16);
    v16 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3]);
    v236 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 8);
    v235 = v16;
    *(_OWORD *)(v231.i64[1] + v15 + 16) = v239.i128[1];
    v17 = (__m256i *)v239.i64[1];
    *(_OWORD *)(v14 + v15) = v239.i128[0];
    if ( (_BYTE)v235 != 6 )
    {
      v13 = (__m256i *)&v235;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v235);
    }
  }
  else
  {
    v230 = v234;
    v229 = v233;
    v228 = v232;
    v227 = v231;
    v226 = v239;
    v13 = (__m256i *)&v235;
    v17 = &v227;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v235,
      &v227,
      &v226);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v13, v17);
  v4 = 7;
  v18 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v18 )
    goto LABEL_187;
  *(_DWORD *)((char *)v18 + 3) = 1684627309;
  *v18 = 1835365481;
  v225.i64[0] = 7;
  v225.i64[1] = (__int64)v18;
  v225.i64[2] = 7;
  v19 = v202;
  if ( v202 < 0 )
  {
    v20 = 0;
    goto LABEL_17;
  }
  v212 = a1 + 44;
  __src = v201;
  __n = v202;
  if ( v202 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
    v20 = 1;
    v21 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1);
    v19 = __n;
    if ( !v21 )
LABEL_17:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v20, v19);
    v22 = v21;
  }
  else
  {
    v22 = 1;
  }
  v23 = v19;
  memcpy((void *)v22, __src, v19);
  v239.i8[0] = 3;
  v239.i64[1] = v23;
  v239.i64[2] = v22;
  v239.i64[3] = v23;
  v24 = &v231;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v231, &v223, &v225);
  if ( v231.i64[0] == 0x8000000000000000LL )
  {
    v25 = v231.i64[1];
    v26 = 32 * v231.i64[3];
    v238 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 24);
    v237 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 16);
    v27 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3]);
    v236 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 8);
    v235 = v27;
    *(_OWORD *)(v231.i64[1] + v26 + 16) = v239.i128[1];
    v28 = (__m256i *)v239.i64[1];
    *(_OWORD *)(v25 + v26) = v239.i128[0];
    if ( (_BYTE)v235 != 6 )
    {
      v24 = (__m256i *)&v235;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v235);
    }
  }
  else
  {
    v230 = v234;
    v229 = v233;
    v228 = v232;
    v227 = v231;
    v226 = v239;
    v24 = (__m256i *)&v235;
    v28 = &v227;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v235,
      &v227,
      &v226);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v24, v28);
  v4 = 13;
  v29 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
  if ( !v29 )
    goto LABEL_187;
  qmemcpy(v29, "content_index", 13);
  v225.i64[0] = 13;
  v225.i64[1] = (__int64)v29;
  v225.i64[2] = 13;
  v239.i8[0] = 2;
  *(__int128 *)((char *)v239.i128 + 8) = 0u;
  v30 = &v231;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v231, &v223, &v225);
  if ( v231.i64[0] == 0x8000000000000000LL )
  {
    v31 = v231.i64[1];
    v32 = 32 * v231.i64[3];
    v238 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 24);
    v237 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 16);
    v33 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3]);
    v236 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 8);
    v235 = v33;
    *(_OWORD *)(v231.i64[1] + v32 + 16) = v239.i128[1];
    v34 = (__m256i *)v239.i64[1];
    *(_OWORD *)(v31 + v32) = v239.i128[0];
    if ( (_BYTE)v235 != 6 )
    {
      v30 = (__m256i *)&v235;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v235);
    }
  }
  else
  {
    v230 = v234;
    v229 = v233;
    v228 = v232;
    v227 = v231;
    v226 = v239;
    v30 = (__m256i *)&v235;
    v34 = &v227;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v235,
      &v227,
      &v226);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v30, v34);
  v4 = 4;
  v35 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v35 )
LABEL_187:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v4);
  *v35 = 1954047348;
  v225.i64[0] = 4;
  v225.i64[1] = (__int64)v35;
  v225.i64[2] = 4;
  if ( v205 < 0 )
  {
    v36 = 0;
    goto LABEL_34;
  }
  v213 = v204;
  if ( v205 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
    v36 = 1;
    v37 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v205, 1);
    if ( !v37 )
LABEL_34:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v36, v205);
    v38 = v37;
  }
  else
  {
    v38 = 1;
  }
  memcpy((void *)v38, v213, v205);
  v239.i8[0] = 3;
  v239.i64[1] = v205;
  v239.i64[2] = v38;
  v239.i64[3] = v205;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v231, &v223, &v225);
  if ( v231.i64[0] == 0x8000000000000000LL )
  {
    v238 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 24);
    v237 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 16);
    v39 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3]);
    v236 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 8);
    v235 = v39;
    *(__m256i *)(v231.i64[1] + 32 * v231.i64[3]) = v239;
    if ( (_BYTE)v235 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v235);
  }
  else
  {
    v230 = v234;
    v229 = v233;
    v228 = v232;
    v227 = v231;
    v226 = v239;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v235,
      &v227,
      &v226);
  }
  *(__int128 *)((char *)v227.i128 + 8) = v223;
  v227.i64[3] = v224;
  v227.i8[0] = 5;
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h58d84150b89f409c(
    &v231,
    v212,
    (__int64)"response.output_text.doneresponse.content_part.doneoutput_text",
    (__int64 (__fastcall *)())0x19,
    v227.i8);
  v41 = *(__int128 *)((char *)v231.i128 + 8);
  v42 = v217;
  v43 = v217[2];
  v44 = *v217 - v43;
  v211 = v205;
  if ( v231.i64[2] > v44 )
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
      v217,
      v43,
      v231.i64[2],
      1,
      1,
      v40);
    v43 = v217[2];
    v42 = v217;
  }
  v216 = v42[1];
  v45 = v42;
  memcpy((void *)(v216 + v43), (const void *)v41, *((size_t *)&v41 + 1));
  v214 = *((_QWORD *)&v41 + 1) + v43;
  v45[2] = *((_QWORD *)&v41 + 1) + v43;
  v46 = v231.i64[0];
  if ( v231.i64[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, v231.i64[0], 1);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v227);
  v47 = v211;
  *(_QWORD *)&v218 = 0;
  v219 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v227, v46);
  v48 = 4;
  v49 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v49 )
    goto LABEL_188;
  *v49 = 1701869940;
  v225.i64[0] = 4;
  v225.i64[1] = (__int64)v49;
  v225.i64[2] = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v50 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(26, 1);
  if ( !v50 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 26);
  qmemcpy(v50, "response.content_part.done", 26);
  v239.i8[0] = 3;
  v239.i64[1] = 26;
  v239.i64[2] = (__int64)v50;
  v239.i64[3] = 26;
  v51 = &v231;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v231, &v218, &v225);
  if ( v231.i64[0] == 0x8000000000000000LL )
  {
    v52 = v231.i64[1];
    v53 = 32 * v231.i64[3];
    v238 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 24);
    v237 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 16);
    v54 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3]);
    v236 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 8);
    v235 = v54;
    *(_OWORD *)(v231.i64[1] + v53 + 16) = v239.i128[1];
    v55 = (__m256i *)v239.i64[1];
    *(_OWORD *)(v52 + v53) = v239.i128[0];
    if ( (_BYTE)v235 != 6 )
    {
      v51 = (__m256i *)&v235;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v235);
    }
  }
  else
  {
    v230 = v234;
    v229 = v233;
    v228 = v232;
    v227 = v231;
    v226 = v239;
    v51 = (__m256i *)&v235;
    v55 = &v227;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v235,
      &v227,
      &v226);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v51, v55);
  v48 = 12;
  v56 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
  if ( !v56 )
    goto LABEL_188;
  qmemcpy(v56, "output_index", 12);
  v225.i64[0] = 12;
  v225.i64[1] = (__int64)v56;
  v225.i64[2] = 12;
  v239.i8[0] = 2;
  v239.i64[1] = 0;
  v239.i64[2] = v210;
  v57 = &v231;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v231, &v218, &v225);
  if ( v231.i64[0] == 0x8000000000000000LL )
  {
    v58 = v231.i64[1];
    v59 = 32 * v231.i64[3];
    v238 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 24);
    v237 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 16);
    v60 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3]);
    v236 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 8);
    v235 = v60;
    *(_OWORD *)(v231.i64[1] + v59 + 16) = v239.i128[1];
    v61 = (__m256i *)v239.i64[1];
    *(_OWORD *)(v58 + v59) = v239.i128[0];
    if ( (_BYTE)v235 != 6 )
    {
      v57 = (__m256i *)&v235;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v235);
    }
  }
  else
  {
    v230 = v234;
    v229 = v233;
    v228 = v232;
    v227 = v231;
    v226 = v239;
    v57 = (__m256i *)&v235;
    v61 = &v227;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v235,
      &v227,
      &v226);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v57, v61);
  v48 = 7;
  v62 = 1;
  v63 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v63 )
    goto LABEL_188;
  *(_DWORD *)((char *)v63 + 3) = 1684627309;
  *v63 = 1835365481;
  v225.i64[0] = 7;
  v225.i64[1] = (__int64)v63;
  v225.i64[2] = 7;
  v64 = __n;
  if ( __n )
  {
    v65 = __n;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
    v66 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v65, 1);
    if ( !v66 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n);
    v62 = v66;
    v64 = __n;
  }
  v67 = v64;
  memcpy((void *)v62, __src, v64);
  v239.i8[0] = 3;
  *(__int128 *)((char *)v239.i128 + 8) = __PAIR128__(v62, v67);
  v239.i64[3] = v67;
  v68 = &v231;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v231, &v218, &v225);
  if ( v231.i64[0] == 0x8000000000000000LL )
  {
    v69 = v231.i64[1];
    v70 = 32 * v231.i64[3];
    v238 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 24);
    v237 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 16);
    v71 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3]);
    v236 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 8);
    v235 = v71;
    *(_OWORD *)(v231.i64[1] + v70 + 16) = v239.i128[1];
    v72 = (__m256i *)v239.i64[1];
    *(_OWORD *)(v69 + v70) = v239.i128[0];
    if ( (_BYTE)v235 != 6 )
    {
      v68 = (__m256i *)&v235;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v235);
    }
  }
  else
  {
    v230 = v234;
    v229 = v233;
    v228 = v232;
    v227 = v231;
    v226 = v239;
    v68 = (__m256i *)&v235;
    v72 = &v227;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v235,
      &v227,
      &v226);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v68, v72);
  v48 = 13;
  v73 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
  if ( !v73 )
    goto LABEL_188;
  qmemcpy(v73, "content_index", 13);
  v225.i64[0] = 13;
  v225.i64[1] = (__int64)v73;
  v225.i64[2] = 13;
  v239.i8[0] = 2;
  *(__int128 *)((char *)v239.i128 + 8) = 0u;
  v74 = &v231;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v231, &v218, &v225);
  if ( v231.i64[0] == 0x8000000000000000LL )
  {
    v75 = v231.i64[1];
    v76 = 32 * v231.i64[3];
    v238 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 24);
    v237 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 16);
    v77 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3]);
    v236 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 8);
    v235 = v77;
    *(_OWORD *)(v231.i64[1] + v76 + 16) = v239.i128[1];
    v78 = (__m256i *)v239.i64[1];
    *(_OWORD *)(v75 + v76) = v239.i128[0];
    if ( (_BYTE)v235 != 6 )
    {
      v74 = (__m256i *)&v235;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v235);
    }
  }
  else
  {
    v230 = v234;
    v229 = v233;
    v228 = v232;
    v227 = v231;
    v226 = v239;
    v74 = (__m256i *)&v235;
    v78 = &v227;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v235,
      &v227,
      &v226);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v74, v78);
  v48 = 4;
  v79 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v79 )
LABEL_188:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v48);
  *v79 = 1953653104;
  v207 = 4;
  v208 = v79;
  v209 = 4;
  *(_QWORD *)&v220 = 0;
  v221 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v80 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v80 )
    goto LABEL_192;
  *v80 = 1701869940;
  *(_QWORD *)&v223 = 4;
  *((_QWORD *)&v223 + 1) = v80;
  v224 = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v81 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
  if ( !v81 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 11);
  qmemcpy(v81, "output_text", 11);
  v239.i8[0] = 3;
  v239.i64[1] = 11;
  v239.i64[2] = (__int64)v81;
  v239.i64[3] = 11;
  v82 = &v231;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v231, &v220, &v223);
  if ( v231.i64[0] == 0x8000000000000000LL )
  {
    v83 = v231.i64[1];
    v84 = 32 * v231.i64[3];
    v238 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 24);
    v237 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 16);
    v85 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3]);
    v236 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 8);
    v235 = v85;
    *(_OWORD *)(v231.i64[1] + v84 + 16) = v239.i128[1];
    v86 = (__m256i *)v239.i64[1];
    *(_OWORD *)(v83 + v84) = v239.i128[0];
    if ( (_BYTE)v235 != 6 )
    {
      v82 = (__m256i *)&v235;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v235);
    }
  }
  else
  {
    v230 = v234;
    v229 = v233;
    v228 = v232;
    v227 = v231;
    v226 = v239;
    v82 = (__m256i *)&v235;
    v86 = &v227;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v235,
      &v227,
      &v226);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v82, v86);
  v87 = 1;
  v88 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v88 )
    goto LABEL_192;
  *v88 = 1954047348;
  *(_QWORD *)&v223 = 4;
  *((_QWORD *)&v223 + 1) = v88;
  v224 = 4;
  if ( v47 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
    v89 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v47, 1);
    if ( !v89 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v47);
    v87 = v89;
  }
  memcpy((void *)v87, v213, v47);
  v239.i8[0] = 3;
  v239.i64[1] = v47;
  v239.i64[2] = v87;
  v239.i64[3] = v47;
  v90 = &v231;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v231, &v220, &v223);
  if ( v231.i64[0] == 0x8000000000000000LL )
  {
    v91 = v231.i64[1];
    v92 = 32 * v231.i64[3];
    v238 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 24);
    v237 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 16);
    v93 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3]);
    v236 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 8);
    v235 = v93;
    *(_OWORD *)(v231.i64[1] + v92 + 16) = v239.i128[1];
    v94 = (__m256i *)v239.i64[1];
    *(_OWORD *)(v91 + v92) = v239.i128[0];
    if ( (_BYTE)v235 != 6 )
    {
      v90 = (__m256i *)&v235;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v235);
    }
  }
  else
  {
    v230 = v234;
    v229 = v233;
    v228 = v232;
    v227 = v231;
    v226 = v239;
    v90 = (__m256i *)&v235;
    v94 = &v227;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v235,
      &v227,
      &v226);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v90, v94);
  v48 = 11;
  v95 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
  if ( !v95 )
LABEL_192:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v48);
  qmemcpy(v95, "annotations", 11);
  *(_QWORD *)&v223 = 11;
  *((_QWORD *)&v223 + 1) = v95;
  v224 = 11;
  v239.i64[1] = 0;
  v239.i128[1] = 8u;
  v239.i8[0] = 4;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v231, &v220, &v223);
  if ( v231.i64[0] == 0x8000000000000000LL )
  {
    v238 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 24);
    v237 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 16);
    v96 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3]);
    v236 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 8);
    v235 = v96;
    *(__m256i *)(v231.i64[1] + 32 * v231.i64[3]) = v239;
    if ( (_BYTE)v235 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v235);
  }
  else
  {
    v230 = v234;
    v229 = v233;
    v228 = v232;
    v227 = v231;
    v226 = v239;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v235,
      &v227,
      &v226);
  }
  *(__int128 *)((char *)v225.i128 + 8) = v220;
  v225.i64[3] = v221;
  v225.i8[0] = 5;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v231, &v218, &v207);
  if ( v231.i64[0] == 0x8000000000000000LL )
  {
    v238 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 24);
    v237 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 16);
    v97 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3]);
    v236 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 8);
    v235 = v97;
    *(__m256i *)(v231.i64[1] + 32 * v231.i64[3]) = v225;
    if ( (_BYTE)v235 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v235);
  }
  else
  {
    v230 = v234;
    v229 = v233;
    v228 = v232;
    v227 = v231;
    v226 = v225;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v235,
      &v227,
      &v226);
  }
  *(__int128 *)((char *)v227.i128 + 8) = v218;
  v227.i64[3] = v219;
  v227.i8[0] = 5;
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h58d84150b89f409c(
    &v231,
    v212,
    (__int64)"response.content_part.doneoutput_text",
    (__int64 (__fastcall *)())0x1A,
    v227.i8);
  v99 = *(__int128 *)((char *)v231.i128 + 8);
  v100 = v217;
  v101 = v214;
  if ( v231.i64[2] > (unsigned __int64)(*v217 - v214) )
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
      v217,
      v214,
      v231.i64[2],
      1,
      1,
      v98);
    v216 = v100[1];
    v101 = v100[2];
  }
  memcpy((void *)(v216 + v101), (const void *)v99, *((size_t *)&v99 + 1));
  v214 = *((_QWORD *)&v99 + 1) + v101;
  v217[2] = *((_QWORD *)&v99 + 1) + v101;
  v102 = v231.i64[0];
  if ( v231.i64[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v99, v231.i64[0], 1);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v227);
  *(_QWORD *)&v218 = 0;
  v219 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v227, v102);
  v103 = 4;
  v104 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v104 )
    goto LABEL_189;
  *v104 = 1701869940;
  v225.i64[0] = 4;
  v225.i64[1] = (__int64)v104;
  v225.i64[2] = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v105 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v105 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7);
  *(_DWORD *)((char *)v105 + 3) = 1701273971;
  *v105 = 1936942445;
  v239.i8[0] = 3;
  v239.i64[1] = 7;
  v239.i64[2] = (__int64)v105;
  v239.i64[3] = 7;
  v106 = &v231;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v231, &v218, &v225);
  if ( v231.i64[0] == 0x8000000000000000LL )
  {
    v107 = v231.i64[1];
    v108 = 32 * v231.i64[3];
    v238 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 24);
    v237 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 16);
    v109 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3]);
    v236 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 8);
    v235 = v109;
    *(_OWORD *)(v231.i64[1] + v108 + 16) = v239.i128[1];
    v110 = (__m256i *)v239.i64[1];
    *(_OWORD *)(v107 + v108) = v239.i128[0];
    if ( (_BYTE)v235 != 6 )
    {
      v106 = (__m256i *)&v235;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v235);
    }
  }
  else
  {
    v230 = v234;
    v229 = v233;
    v228 = v232;
    v227 = v231;
    v226 = v239;
    v106 = (__m256i *)&v235;
    v110 = &v227;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v235,
      &v227,
      &v226);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v106, v110);
  v103 = 2;
  v111 = 1;
  v112 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
  if ( !v112 )
    goto LABEL_189;
  *v112 = 25705;
  v225.i64[0] = 2;
  v225.i64[1] = (__int64)v112;
  v225.i64[2] = 2;
  v113 = __n;
  if ( __n )
  {
    v114 = __n;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1);
    v115 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v114, 1);
    if ( !v115 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n);
    v111 = v115;
    v113 = __n;
  }
  v116 = v113;
  memcpy((void *)v111, __src, v113);
  v239.i8[0] = 3;
  v239.i64[1] = v116;
  v239.i64[2] = v111;
  v239.i64[3] = v116;
  v117 = &v231;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v231, &v218, &v225);
  if ( v231.i64[0] == 0x8000000000000000LL )
  {
    v118 = v231.i64[1];
    v119 = 32 * v231.i64[3];
    v238 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 24);
    v237 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 16);
    v120 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3]);
    v236 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 8);
    v235 = v120;
    *(_OWORD *)(v231.i64[1] + v119 + 16) = v239.i128[1];
    v121 = (__m256i *)v239.i64[1];
    *(_OWORD *)(v118 + v119) = v239.i128[0];
    if ( (_BYTE)v235 != 6 )
    {
      v117 = (__m256i *)&v235;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v235);
    }
  }
  else
  {
    v230 = v234;
    v229 = v233;
    v228 = v232;
    v227 = v231;
    v226 = v239;
    v117 = (__m256i *)&v235;
    v121 = &v227;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v235,
      &v227,
      &v226);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v117, v121);
  v103 = 6;
  v122 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
  if ( !v122 )
    goto LABEL_189;
  *(_WORD *)(v122 + 4) = 29557;
  *(_DWORD *)v122 = 1952543859;
  v225.i64[0] = 6;
  v225.i64[1] = v122;
  v225.i64[2] = 6;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1);
  v123 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
  if ( !v123 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
  *(_QWORD *)v123 = 0x6574656C706D6F63LL;
  *(_BYTE *)(v123 + 8) = 100;
  v239.i8[0] = 3;
  v239.i64[1] = 9;
  v239.i64[2] = v123;
  v239.i64[3] = 9;
  v124 = &v231;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v231, &v218, &v225);
  if ( v231.i64[0] == 0x8000000000000000LL )
  {
    v125 = v231.i64[1];
    v126 = 32 * v231.i64[3];
    v238 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 24);
    v237 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 16);
    v127 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3]);
    v236 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 8);
    v235 = v127;
    *(_OWORD *)(v231.i64[1] + v126 + 16) = v239.i128[1];
    v128 = (__m256i *)v239.i64[1];
    *(_OWORD *)(v125 + v126) = v239.i128[0];
    if ( (_BYTE)v235 != 6 )
    {
      v124 = (__m256i *)&v235;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v235);
    }
  }
  else
  {
    v230 = v234;
    v229 = v233;
    v228 = v232;
    v227 = v231;
    v226 = v239;
    v124 = (__m256i *)&v235;
    v128 = &v227;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v235,
      &v227,
      &v226);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v124, v128);
  v103 = 4;
  v129 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v129 )
    goto LABEL_189;
  *v129 = 1701605234;
  v225.i64[0] = 4;
  v225.i64[1] = (__int64)v129;
  v225.i64[2] = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v130 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
  if ( !v130 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
  *(_QWORD *)v130 = 0x6E61747369737361LL;
  *(_BYTE *)(v130 + 8) = 116;
  v239.i8[0] = 3;
  v239.i64[1] = 9;
  v239.i64[2] = v130;
  v239.i64[3] = 9;
  v131 = &v231;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v231, &v218, &v225);
  if ( v231.i64[0] == 0x8000000000000000LL )
  {
    v132 = v231.i64[1];
    v133 = 32 * v231.i64[3];
    v238 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 24);
    v237 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 16);
    v134 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3]);
    v236 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 8);
    v235 = v134;
    *(_OWORD *)(v231.i64[1] + v133 + 16) = v239.i128[1];
    v135 = (__m256i *)v239.i64[1];
    *(_OWORD *)(v132 + v133) = v239.i128[0];
    if ( (_BYTE)v235 != 6 )
    {
      v131 = (__m256i *)&v235;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v235);
    }
  }
  else
  {
    v230 = v234;
    v229 = v233;
    v228 = v232;
    v227 = v231;
    v226 = v239;
    v131 = (__m256i *)&v235;
    v135 = &v227;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v235,
      &v227,
      &v226);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v131, v135);
  v103 = 7;
  v136 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v136 )
LABEL_189:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v103);
  *(_DWORD *)((char *)v136 + 3) = 1953391988;
  *v136 = 1953394531;
  v207 = 7;
  v208 = v136;
  v209 = 7;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
  v137 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8);
  if ( !v137 )
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32);
  v138 = v137;
  *(_QWORD *)&v220 = 0;
  v221 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 8);
  v139 = 4;
  v140 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v140 )
    goto LABEL_193;
  *v140 = 1701869940;
  *(_QWORD *)&v223 = 4;
  *((_QWORD *)&v223 + 1) = v140;
  v224 = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v141 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
  if ( !v141 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 11);
  qmemcpy(v141, "output_text", 11);
  v239.i8[0] = 3;
  v239.i64[1] = 11;
  v239.i64[2] = (__int64)v141;
  v239.i64[3] = 11;
  v142 = &v231;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v231, &v220, &v223);
  if ( v231.i64[0] == 0x8000000000000000LL )
  {
    v143 = v231.i64[1];
    v144 = 32 * v231.i64[3];
    v238 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 24);
    v237 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 16);
    v145 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3]);
    v236 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 8);
    v235 = v145;
    *(_OWORD *)(v231.i64[1] + v144 + 16) = v239.i128[1];
    v146 = (__m256i *)v239.i64[1];
    *(_OWORD *)(v143 + v144) = v239.i128[0];
    if ( (_BYTE)v235 != 6 )
    {
      v142 = (__m256i *)&v235;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v235);
    }
  }
  else
  {
    v230 = v234;
    v229 = v233;
    v228 = v232;
    v227 = v231;
    v226 = v239;
    v142 = (__m256i *)&v235;
    v146 = &v227;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v235,
      &v227,
      &v226);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v142, v146);
  v147 = 1;
  v148 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v148 )
    goto LABEL_193;
  *v148 = 1954047348;
  *(_QWORD *)&v223 = 4;
  *((_QWORD *)&v223 + 1) = v148;
  v224 = 4;
  v149 = v211;
  if ( v211 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
    v150 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v149, 1);
    if ( !v150 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v149);
    v147 = v150;
  }
  memcpy((void *)v147, v213, v149);
  v239.i8[0] = 3;
  v239.i64[1] = v149;
  v239.i64[2] = v147;
  v239.i64[3] = v149;
  v151 = &v231;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v231, &v220, &v223);
  if ( v231.i64[0] == 0x8000000000000000LL )
  {
    v152 = v231.i64[1];
    v153 = 32 * v231.i64[3];
    v238 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 24);
    v237 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 16);
    v154 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3]);
    v236 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 8);
    v235 = v154;
    *(_OWORD *)(v231.i64[1] + v153 + 16) = v239.i128[1];
    v155 = (__m256i *)v239.i64[1];
    *(_OWORD *)(v152 + v153) = v239.i128[0];
    if ( (_BYTE)v235 != 6 )
    {
      v151 = (__m256i *)&v235;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v235);
    }
  }
  else
  {
    v230 = v234;
    v229 = v233;
    v228 = v232;
    v227 = v231;
    v226 = v239;
    v151 = (__m256i *)&v235;
    v155 = &v227;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v235,
      &v227,
      &v226);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v151, v155);
  v139 = 11;
  v156 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
  if ( !v156 )
LABEL_193:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v139);
  qmemcpy(v156, "annotations", 11);
  *(_QWORD *)&v223 = 11;
  *((_QWORD *)&v223 + 1) = v156;
  v224 = 11;
  v239.i64[1] = 0;
  v239.i128[1] = 8u;
  v239.i8[0] = 4;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v231, &v220, &v223);
  if ( v231.i64[0] == 0x8000000000000000LL )
  {
    v238 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 24);
    v237 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 16);
    v157 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3]);
    v236 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 8);
    v235 = v157;
    *(__m256i *)(v231.i64[1] + 32 * v231.i64[3]) = v239;
    if ( (_BYTE)v235 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v235);
  }
  else
  {
    v230 = v234;
    v229 = v233;
    v228 = v232;
    v227 = v231;
    v226 = v239;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v235,
      &v227,
      &v226);
  }
  *(__int128 *)((char *)v227.i128 + 7) = v220;
  *(__int64 *)((char *)&v227.i64[2] + 7) = v221;
  *(_BYTE *)v138 = 5;
  *(_QWORD *)(v138 + 24) = *(__int64 *)((char *)&v227.i64[2] + 7);
  *(_QWORD *)(v138 + 17) = v227.i64[2];
  *(_OWORD *)(v138 + 1) = v227.i128[0];
  v225.i64[1] = 1;
  v225.i64[2] = v138;
  v225.i64[3] = 1;
  v225.i8[0] = 4;
  v158 = &v231;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v231, &v218, &v207);
  if ( v231.i64[0] == 0x8000000000000000LL )
  {
    v159 = v231.i64[1];
    v160 = 32 * v231.i64[3];
    v238 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 24);
    v237 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 16);
    v161 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3]);
    v236 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 8);
    v235 = v161;
    *(_OWORD *)(v231.i64[1] + v160 + 16) = v225.i128[1];
    v162 = (__m256i *)v225.i64[1];
    *(_OWORD *)(v159 + v160) = v225.i128[0];
    if ( (_BYTE)v235 != 6 )
    {
      v158 = (__m256i *)&v235;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v235);
    }
  }
  else
  {
    v230 = v234;
    v229 = v233;
    v228 = v232;
    v227 = v231;
    v226 = v225;
    v158 = (__m256i *)&v235;
    v162 = &v227;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v235,
      &v227,
      &v226);
  }
  *(__int128 *)((char *)v225.i128 + 8) = v218;
  v225.i64[3] = v219;
  v225.i8[0] = 5;
  *(_QWORD *)&v220 = 0;
  v221 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v158, v162);
  v163 = 4;
  v164 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v164 )
    goto LABEL_191;
  *v164 = 1701869940;
  *(_QWORD *)&v223 = 4;
  *((_QWORD *)&v223 + 1) = v164;
  v224 = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v165 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(25, 1);
  if ( !v165 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 25);
  qmemcpy(v165, "response.output_item.done", 25);
  v239.i8[0] = 3;
  v239.i64[1] = 25;
  v239.i64[2] = (__int64)v165;
  v239.i64[3] = 25;
  v166 = &v231;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v231, &v220, &v223);
  if ( v231.i64[0] == 0x8000000000000000LL )
  {
    v167 = v231.i64[1];
    v168 = 32 * v231.i64[3];
    v238 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 24);
    v237 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 16);
    v169 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3]);
    v236 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 8);
    v235 = v169;
    *(_OWORD *)(v231.i64[1] + v168 + 16) = v239.i128[1];
    v170 = (__m256i *)v239.i64[1];
    *(_OWORD *)(v167 + v168) = v239.i128[0];
    if ( (_BYTE)v235 != 6 )
    {
      v166 = (__m256i *)&v235;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v235);
    }
  }
  else
  {
    v230 = v234;
    v229 = v233;
    v228 = v232;
    v227 = v231;
    v226 = v239;
    v166 = (__m256i *)&v235;
    v170 = &v227;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v235,
      &v227,
      &v226);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v166, v170);
  v163 = 12;
  v171 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
  if ( !v171 )
    goto LABEL_191;
  qmemcpy(v171, "output_index", 12);
  *(_QWORD *)&v223 = 12;
  *((_QWORD *)&v223 + 1) = v171;
  v224 = 12;
  v239.i8[0] = 2;
  v239.i64[1] = 0;
  v239.i64[2] = v210;
  v172 = &v231;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v231, &v220, &v223);
  if ( v231.i64[0] == 0x8000000000000000LL )
  {
    v173 = v231.i64[1];
    v174 = 32 * v231.i64[3];
    v238 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 24);
    v237 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 16);
    v175 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3]);
    v236 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 8);
    v235 = v175;
    *(_OWORD *)(v231.i64[1] + v174 + 16) = v239.i128[1];
    v176 = (__m256i *)v239.i64[1];
    *(_OWORD *)(v173 + v174) = v239.i128[0];
    if ( (_BYTE)v235 != 6 )
    {
      v172 = (__m256i *)&v235;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v235);
    }
  }
  else
  {
    v230 = v234;
    v229 = v233;
    v228 = v232;
    v227 = v231;
    v226 = v239;
    v172 = (__m256i *)&v235;
    v176 = &v227;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v235,
      &v227,
      &v226);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v172, v176);
  v163 = 7;
  v177 = 1;
  v178 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v178 )
    goto LABEL_191;
  *(_DWORD *)((char *)v178 + 3) = 1684627309;
  *v178 = 1835365481;
  *(_QWORD *)&v223 = 7;
  *((_QWORD *)&v223 + 1) = v178;
  v224 = 7;
  v179 = __n;
  if ( __n )
  {
    v180 = __n;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
    v181 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v180, 1);
    if ( !v181 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n);
    v177 = v181;
    v179 = __n;
  }
  v182 = v179;
  memcpy((void *)v177, __src, v179);
  v239.i8[0] = 3;
  *(__int128 *)((char *)v239.i128 + 8) = __PAIR128__(v177, v182);
  v239.i64[3] = v182;
  v183 = &v231;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v231, &v220, &v223);
  if ( v231.i64[0] == 0x8000000000000000LL )
  {
    v184 = v231.i64[1];
    v185 = 32 * v231.i64[3];
    v238 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 24);
    v237 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 16);
    v186 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3]);
    v236 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 8);
    v235 = v186;
    *(_OWORD *)(v231.i64[1] + v185 + 16) = v239.i128[1];
    v187 = (__m256i *)v239.i64[1];
    *(_OWORD *)(v184 + v185) = v239.i128[0];
    if ( (_BYTE)v235 != 6 )
    {
      v183 = (__m256i *)&v235;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v235);
    }
  }
  else
  {
    v230 = v234;
    v229 = v233;
    v228 = v232;
    v227 = v231;
    v226 = v239;
    v183 = (__m256i *)&v235;
    v187 = &v227;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v235,
      &v227,
      &v226);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v183, v187);
  v163 = 4;
  v188 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v188 )
LABEL_191:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v163);
  *v188 = 1835365481;
  *(_QWORD *)&v223 = 4;
  *((_QWORD *)&v223 + 1) = v188;
  v224 = 4;
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
    &v227,
    &v225);
  if ( v227.i8[0] == 6 )
  {
    v231.i64[0] = v227.i64[1];
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, &v231, &off_101974C58, &off_1019746F8);
  }
  v239 = v227;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v231, &v220, &v223);
  if ( v231.i64[0] == 0x8000000000000000LL )
  {
    v238 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 24);
    v237 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 16);
    v189 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3]);
    v236 = *(_QWORD *)(v231.i64[1] + 32 * v231.i64[3] + 8);
    v235 = v189;
    *(__m256i *)(v231.i64[1] + 32 * v231.i64[3]) = v239;
    if ( (_BYTE)v235 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v235);
  }
  else
  {
    v230 = v234;
    v229 = v233;
    v228 = v232;
    v227 = v231;
    v226 = v239;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v235,
      &v227,
      &v226);
  }
  *(__int128 *)((char *)v227.i128 + 8) = v220;
  v227.i64[3] = v221;
  v227.i8[0] = 5;
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h58d84150b89f409c(
    &v231,
    v212,
    (__int64)"response.output_item.doneresponse.function_call_arguments.done",
    (__int64 (__fastcall *)())0x19,
    v227.i8);
  v191 = *(__int128 *)((char *)v231.i128 + 8);
  v192 = v217;
  v193 = v214;
  if ( v231.i64[2] > (unsigned __int64)(*v217 - v214) )
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
      v217,
      v214,
      v231.i64[2],
      1,
      1,
      v190);
    v216 = v192[1];
    v193 = v192[2];
  }
  memcpy((void *)(v193 + v216), (const void *)v191, *((size_t *)&v191 + 1));
  v217[2] = *((_QWORD *)&v191 + 1) + v193;
  if ( v231.i64[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v191, v231.i64[0], 1);
  result = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v227);
  v195 = a1[8];
  if ( v195 == a1[6] )
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(a1 + 6);
  v196 = a1[7];
  v197 = 32 * v195;
  v198 = v225.i64[0];
  v199 = *(__int128 *)((char *)v225.i128 + 8);
  *(_QWORD *)(v196 + v197 + 24) = v225.i64[3];
  *(_OWORD *)(v196 + v197 + 8) = v199;
  *(_QWORD *)(v196 + v197) = v198;
  a1[8] = v195 + 1;
  if ( v200 )
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v201, v200, 1);
  if ( v203 )
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v204, v203, 1);
  return result;
}
