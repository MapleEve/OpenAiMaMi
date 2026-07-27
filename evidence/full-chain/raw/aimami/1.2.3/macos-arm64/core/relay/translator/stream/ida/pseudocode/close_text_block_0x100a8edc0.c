// __ZN13codexmate_lib4core5relay10translator6stream21ChatToResponsesStream16close_text_block @ 0x100a8edc0 | 基线 same-set
// [FULL IDA decompiler]

double __fastcall codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::close_text_block::h24b24176cdd772a0(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  __int64 v4; // rbx
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
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // r15
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
  __int64 v36; // r13
  __int64 v37; // rax
  __int64 v38; // rbx
  __int64 v39; // rdx
  __int64 v40; // r9
  void *v41; // r12
  size_t v42; // rbx
  _QWORD *v43; // rdx
  __int64 v44; // rsi
  size_t v45; // rax
  _QWORD *v46; // r13
  __int64 v47; // rsi
  double result; // xmm0_8
  __int64 v49; // rbx
  _DWORD *v50; // rax
  __int64 v51; // r15
  void *v52; // rax
  __m256i *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rdx
  __m256i *v57; // rsi
  void *v58; // rax
  __m256i *v59; // rdi
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rdx
  __m256i *v63; // rsi
  __int64 v64; // r12
  _DWORD *v65; // rax
  size_t v66; // rcx
  size_t v67; // r12
  __int64 v68; // rax
  __int64 v69; // rbx
  __m256i *v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rdx
  __m256i *v74; // rsi
  void *v75; // rax
  __m256i *v76; // rdi
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rdx
  __m256i *v80; // rsi
  _DWORD *v81; // rax
  __int64 v82; // r13
  _DWORD *v83; // rax
  void *v84; // rax
  __m256i *v85; // rdi
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rdx
  __m256i *v89; // rsi
  __int64 v90; // r12
  _DWORD *v91; // rax
  __int64 v92; // rax
  __m256i *v93; // rdi
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rdx
  __m256i *v97; // rsi
  void *v98; // rax
  __int64 v99; // rdx
  __int64 v100; // rdx
  __int64 v101; // r9
  void *v102; // r12
  size_t v103; // rbx
  _QWORD *v104; // rdi
  size_t v105; // rsi
  __int64 v106; // rsi
  __int64 v107; // rbx
  _DWORD *v108; // rax
  _DWORD *v109; // rax
  __m256i *v110; // rdi
  __int64 v111; // rax
  __int64 v112; // rcx
  __int64 v113; // rdx
  __m256i *v114; // rsi
  __int64 v115; // r12
  _WORD *v116; // rax
  __int64 v117; // r15
  __int64 v118; // rax
  __m256i *v119; // rdi
  __int64 v120; // rax
  __int64 v121; // rcx
  __int64 v122; // rdx
  __m256i *v123; // rsi
  __int64 v124; // rax
  __int64 v125; // rax
  __m256i *v126; // rdi
  __int64 v127; // rax
  __int64 v128; // rcx
  __int64 v129; // rdx
  __m256i *v130; // rsi
  _DWORD *v131; // rax
  __int64 v132; // rax
  __m256i *v133; // rdi
  __int64 v134; // rax
  __int64 v135; // rcx
  __int64 v136; // rdx
  __m256i *v137; // rsi
  _DWORD *v138; // rax
  __int64 v139; // rax
  __int64 v140; // r12
  __int64 v141; // r13
  _DWORD *v142; // rax
  void *v143; // rax
  __m256i *v144; // rdi
  __int64 v145; // rax
  __int64 v146; // rcx
  __int64 v147; // rdx
  __m256i *v148; // rsi
  __int64 v149; // rbx
  _DWORD *v150; // rax
  __int64 v151; // r15
  __int64 v152; // rax
  __m256i *v153; // rdi
  __int64 v154; // rax
  __int64 v155; // rcx
  __int64 v156; // rdx
  __m256i *v157; // rsi
  void *v158; // rax
  __int64 v159; // rdx
  __m256i *v160; // rdi
  __int64 v161; // rax
  __int64 v162; // rcx
  __int64 v163; // rdx
  __m256i *v164; // rsi
  __int64 v165; // r12
  _DWORD *v166; // rax
  void *v167; // rax
  __m256i *v168; // rdi
  __int64 v169; // rax
  __int64 v170; // rcx
  __int64 v171; // rdx
  __m256i *v172; // rsi
  void *v173; // rax
  __m256i *v174; // rdi
  __int64 v175; // rax
  __int64 v176; // rcx
  __int64 v177; // rdx
  __m256i *v178; // rsi
  _DWORD *v179; // rax
  __int64 v180; // rdx
  __int64 v181; // r9
  void *v182; // r15
  size_t v183; // rbx
  _QWORD *v184; // rdi
  size_t v185; // rsi
  __int64 v186; // rbx
  __int64 v187; // rax
  __int64 v188; // rcx
  __int64 v189; // rdx
  __int128 v190; // kr130_16
  __int64 v191; // [rsp+20h] [rbp-200h]
  void *__src; // [rsp+38h] [rbp-1E8h]
  signed __int64 v193; // [rsp+40h] [rbp-1E0h]
  __int64 v194; // [rsp+48h] [rbp-1D8h]
  void *v195; // [rsp+50h] [rbp-1D0h]
  __int64 v196; // [rsp+58h] [rbp-1C8h]
  __int64 v197; // [rsp+60h] [rbp-1C0h]
  __int64 v198; // [rsp+68h] [rbp-1B8h] BYREF
  _DWORD *v199; // [rsp+70h] [rbp-1B0h]
  __int64 v200; // [rsp+78h] [rbp-1A8h]
  __int64 v201; // [rsp+80h] [rbp-1A0h]
  void *v202; // [rsp+88h] [rbp-198h]
  void *v203; // [rsp+90h] [rbp-190h]
  size_t v204; // [rsp+98h] [rbp-188h]
  size_t v205; // [rsp+A0h] [rbp-180h]
  __int64 v206; // [rsp+A8h] [rbp-178h]
  _QWORD *v207; // [rsp+B0h] [rbp-170h]
  __int128 v208; // [rsp+B8h] [rbp-168h] BYREF
  __int64 v209; // [rsp+C8h] [rbp-158h]
  __int128 v210; // [rsp+D0h] [rbp-150h] BYREF
  __int64 v211; // [rsp+E0h] [rbp-140h]
  size_t __n; // [rsp+E8h] [rbp-138h]
  __int128 v213; // [rsp+F0h] [rbp-130h] BYREF
  __int64 v214; // [rsp+100h] [rbp-120h]
  __m256i v215; // [rsp+108h] [rbp-118h] BYREF
  __m256i v216; // [rsp+128h] [rbp-F8h] BYREF
  __int64 v217; // [rsp+148h] [rbp-D8h]
  __int64 v218; // [rsp+150h] [rbp-D0h]
  __int64 v219; // [rsp+158h] [rbp-C8h]
  __m256i v220; // [rsp+160h] [rbp-C0h] BYREF
  __m256i v221; // [rsp+180h] [rbp-A0h] BYREF
  __int64 v222; // [rsp+1A0h] [rbp-80h]
  __int64 v223; // [rsp+1A8h] [rbp-78h]
  __int64 v224; // [rsp+1B0h] [rbp-70h]
  __int64 v225; // [rsp+1B8h] [rbp-68h] BYREF
  void *v226; // [rsp+1C0h] [rbp-60h]
  size_t v227; // [rsp+1C8h] [rbp-58h]
  __int64 v228; // [rsp+1D0h] [rbp-50h]
  __m256i v229[2]; // [rsp+1D8h] [rbp-48h] BYREF

  v2 = a1[22];
  a1[22] = 0x8000000000000000LL;
  if ( __OFSUB__(-v2, 1) )
    return result;
  v207 = a2;
  v191 = v2;
  __src = (void *)a1[23];
  v193 = a1[24];
  v194 = a1[25];
  v195 = (void *)a1[26];
  v196 = a1[27];
  v197 = a1[28];
  *(_QWORD *)&v213 = 0;
  v214 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2);
  v4 = 4;
  v5 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v5 )
    goto LABEL_179;
  *v5 = 1701869940;
  v215.i64[0] = 4;
  v215.i64[1] = (__int64)v5;
  v215.i64[2] = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v6 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(25, 1);
  if ( !v6 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 25);
  qmemcpy(v6, "response.output_text.done", 25);
  v229[0].i8[0] = 3;
  v229[0].i64[1] = 25;
  v229[0].i64[2] = (__int64)v6;
  v229[0].i64[3] = 25;
  v7 = &v221;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v221, &v213, &v215);
  if ( v221.i64[0] == 0x8000000000000000LL )
  {
    v8 = v221.i64[1];
    v9 = 32 * v221.i64[3];
    v228 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 24);
    v227 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 16);
    v10 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3]);
    v226 = *(void **)(v221.i64[1] + 32 * v221.i64[3] + 8);
    v225 = v10;
    *(_OWORD *)(v221.i64[1] + v9 + 16) = v229[0].i128[1];
    v11 = (__m256i *)v229[0].i64[1];
    *(_OWORD *)(v8 + v9) = v229[0].i128[0];
    if ( (_BYTE)v225 != 6 )
    {
      v7 = (__m256i *)&v225;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v225);
    }
  }
  else
  {
    v219 = v224;
    v218 = v223;
    v217 = v222;
    v216 = v221;
    v220 = v229[0];
    v7 = (__m256i *)&v225;
    v11 = &v216;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v225,
      &v216,
      &v220);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, v11);
  v4 = 12;
  v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
  if ( !v12 )
    goto LABEL_179;
  qmemcpy(v12, "output_index", 12);
  v215.i64[0] = 12;
  v215.i64[1] = (__int64)v12;
  v215.i64[2] = 12;
  v229[0].i8[0] = 2;
  v229[0].i64[1] = 0;
  v201 = (unsigned int)v197;
  v229[0].i64[2] = (unsigned int)v197;
  v13 = &v221;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v221, &v213, &v215);
  if ( v221.i64[0] == 0x8000000000000000LL )
  {
    v14 = v221.i64[1];
    v15 = 32 * v221.i64[3];
    v228 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 24);
    v227 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 16);
    v16 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3]);
    v226 = *(void **)(v221.i64[1] + 32 * v221.i64[3] + 8);
    v225 = v16;
    *(_OWORD *)(v221.i64[1] + v15 + 16) = v229[0].i128[1];
    v17 = (__m256i *)v229[0].i64[1];
    *(_OWORD *)(v14 + v15) = v229[0].i128[0];
    if ( (_BYTE)v225 != 6 )
    {
      v13 = (__m256i *)&v225;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v225);
    }
  }
  else
  {
    v219 = v224;
    v218 = v223;
    v217 = v222;
    v216 = v221;
    v220 = v229[0];
    v13 = (__m256i *)&v225;
    v17 = &v216;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v225,
      &v216,
      &v220);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v13, v17);
  v4 = 7;
  v18 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v18 )
    goto LABEL_179;
  *(_DWORD *)((char *)v18 + 3) = 1684627309;
  *v18 = 1835365481;
  v215.i64[0] = 7;
  v215.i64[1] = (__int64)v18;
  v215.i64[2] = 7;
  v19 = v193;
  if ( v193 < 0 )
  {
    v20 = 0;
    goto LABEL_17;
  }
  __n = v193;
  if ( v193 )
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
  v202 = __src;
  v23 = v19;
  memcpy((void *)v22, __src, v19);
  v229[0].i8[0] = 3;
  *(__int128 *)((char *)v229[0].i128 + 8) = __PAIR128__(v22, v23);
  v229[0].i64[3] = v23;
  v24 = &v221;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v221, &v213, &v215);
  if ( v221.i64[0] == 0x8000000000000000LL )
  {
    v25 = v221.i64[1];
    v26 = 32 * v221.i64[3];
    v228 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 24);
    v227 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 16);
    v27 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3]);
    v226 = *(void **)(v221.i64[1] + 32 * v221.i64[3] + 8);
    v225 = v27;
    *(_OWORD *)(v221.i64[1] + v26 + 16) = v229[0].i128[1];
    v28 = (__m256i *)v229[0].i64[1];
    *(_OWORD *)(v25 + v26) = v229[0].i128[0];
    if ( (_BYTE)v225 != 6 )
    {
      v24 = (__m256i *)&v225;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v225);
    }
  }
  else
  {
    v219 = v224;
    v218 = v223;
    v217 = v222;
    v216 = v221;
    v220 = v229[0];
    v24 = (__m256i *)&v225;
    v28 = &v216;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v225,
      &v216,
      &v220);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v24, v28);
  v4 = 13;
  v29 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
  if ( !v29 )
    goto LABEL_179;
  qmemcpy(v29, "content_index", 13);
  v215.i64[0] = 13;
  v215.i64[1] = (__int64)v29;
  v215.i64[2] = 13;
  v229[0].i8[0] = 2;
  *(__int128 *)((char *)v229[0].i128 + 8) = 0u;
  v30 = &v221;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v221, &v213, &v215);
  if ( v221.i64[0] == 0x8000000000000000LL )
  {
    v31 = v221.i64[1];
    v32 = 32 * v221.i64[3];
    v228 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 24);
    v227 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 16);
    v33 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3]);
    v226 = *(void **)(v221.i64[1] + 32 * v221.i64[3] + 8);
    v225 = v33;
    *(_OWORD *)(v221.i64[1] + v32 + 16) = v229[0].i128[1];
    v34 = (__m256i *)v229[0].i64[1];
    *(_OWORD *)(v31 + v32) = v229[0].i128[0];
    if ( (_BYTE)v225 != 6 )
    {
      v30 = (__m256i *)&v225;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v225);
    }
  }
  else
  {
    v219 = v224;
    v218 = v223;
    v217 = v222;
    v216 = v221;
    v220 = v229[0];
    v30 = (__m256i *)&v225;
    v34 = &v216;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v225,
      &v216,
      &v220);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v30, v34);
  v4 = 4;
  v35 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v35 )
LABEL_179:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v4);
  *v35 = 1954047348;
  v215.i64[0] = 4;
  v215.i64[1] = (__int64)v35;
  v215.i64[2] = 4;
  if ( v196 < 0 )
  {
    v36 = 0;
    goto LABEL_34;
  }
  v203 = v195;
  if ( v196 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
    v36 = 1;
    v37 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v196, 1);
    if ( !v37 )
LABEL_34:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v36, v196);
    v38 = v37;
  }
  else
  {
    v38 = 1;
  }
  memcpy((void *)v38, v203, v196);
  v229[0].i8[0] = 3;
  v229[0].i64[1] = v196;
  v229[0].i64[2] = v38;
  v229[0].i64[3] = v196;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v221, &v213, &v215);
  if ( v221.i64[0] == 0x8000000000000000LL )
  {
    v228 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 24);
    v227 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 16);
    v39 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3]);
    v226 = *(void **)(v221.i64[1] + 32 * v221.i64[3] + 8);
    v225 = v39;
    *(__m256i *)(v221.i64[1] + 32 * v221.i64[3]) = v229[0];
    if ( (_BYTE)v225 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v225);
  }
  else
  {
    v219 = v224;
    v218 = v223;
    v217 = v222;
    v216 = v221;
    v220 = v229[0];
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v225,
      &v216,
      &v220);
  }
  *(__int128 *)((char *)v221.i128 + 8) = v213;
  v221.i64[3] = v214;
  v221.i8[0] = 5;
  v220.i64[0] = (__int64)"response.output_text.doneresponse.content_part.doneoutput_text";
  v220.i64[1] = 25;
  v229[0].i64[0] = (__int64)&v221;
  v216.i64[0] = (__int64)&v220;
  v216.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  v216.i64[2] = (__int64)v229;
  v216.i64[3] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcb50c2f2fdedac0f;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v225, &unk_1017C9F28, &v216);
  v41 = v226;
  v42 = v227;
  v43 = v207;
  v44 = v207[2];
  v45 = *v207 - v44;
  v205 = v196;
  if ( v227 > v45 )
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v207, v44, v227, 1, 1, v40);
    v44 = v207[2];
    v43 = v207;
  }
  v206 = v43[1];
  v46 = v43;
  memcpy((void *)(v206 + v44), v41, v42);
  v204 = v42 + v44;
  v46[2] = v42 + v44;
  v47 = v225;
  if ( v225 )
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, v225, 1);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v221);
  *(_QWORD *)&v208 = 0;
  v209 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v221, v47);
  v49 = 4;
  v50 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  v51 = v205;
  if ( !v50 )
    goto LABEL_180;
  *v50 = 1701869940;
  v215.i64[0] = 4;
  v215.i64[1] = (__int64)v50;
  v215.i64[2] = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v52 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(26, 1);
  if ( !v52 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 26);
  qmemcpy(v52, "response.content_part.done", 26);
  v229[0].i8[0] = 3;
  v229[0].i64[1] = 26;
  v229[0].i64[2] = (__int64)v52;
  v229[0].i64[3] = 26;
  v53 = &v221;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v221, &v208, &v215);
  if ( v221.i64[0] == 0x8000000000000000LL )
  {
    v54 = v221.i64[1];
    v55 = 32 * v221.i64[3];
    v228 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 24);
    v227 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 16);
    v56 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3]);
    v226 = *(void **)(v221.i64[1] + 32 * v221.i64[3] + 8);
    v225 = v56;
    *(_OWORD *)(v221.i64[1] + v55 + 16) = v229[0].i128[1];
    v57 = (__m256i *)v229[0].i64[1];
    *(_OWORD *)(v54 + v55) = v229[0].i128[0];
    if ( (_BYTE)v225 != 6 )
    {
      v53 = (__m256i *)&v225;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v225);
    }
  }
  else
  {
    v219 = v224;
    v218 = v223;
    v217 = v222;
    v216 = v221;
    v220 = v229[0];
    v53 = (__m256i *)&v225;
    v57 = &v216;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v225,
      &v216,
      &v220);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v53, v57);
  v49 = 12;
  v58 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
  if ( !v58 )
    goto LABEL_180;
  qmemcpy(v58, "output_index", 12);
  v215.i64[0] = 12;
  v215.i64[1] = (__int64)v58;
  v215.i64[2] = 12;
  v229[0].i8[0] = 2;
  v229[0].i64[1] = 0;
  v229[0].i64[2] = v201;
  v59 = &v221;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v221, &v208, &v215);
  if ( v221.i64[0] == 0x8000000000000000LL )
  {
    v60 = v221.i64[1];
    v61 = 32 * v221.i64[3];
    v228 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 24);
    v227 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 16);
    v62 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3]);
    v226 = *(void **)(v221.i64[1] + 32 * v221.i64[3] + 8);
    v225 = v62;
    *(_OWORD *)(v221.i64[1] + v61 + 16) = v229[0].i128[1];
    v63 = (__m256i *)v229[0].i64[1];
    *(_OWORD *)(v60 + v61) = v229[0].i128[0];
    if ( (_BYTE)v225 != 6 )
    {
      v59 = (__m256i *)&v225;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v225);
    }
  }
  else
  {
    v219 = v224;
    v218 = v223;
    v217 = v222;
    v216 = v221;
    v220 = v229[0];
    v59 = (__m256i *)&v225;
    v63 = &v216;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v225,
      &v216,
      &v220);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v59, v63);
  v49 = 7;
  v64 = 1;
  v65 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v65 )
    goto LABEL_180;
  *(_DWORD *)((char *)v65 + 3) = 1684627309;
  *v65 = 1835365481;
  v215.i64[0] = 7;
  v215.i64[1] = (__int64)v65;
  v215.i64[2] = 7;
  v66 = __n;
  if ( __n )
  {
    v67 = __n;
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
    v68 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v67, 1);
    if ( !v68 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n);
    v64 = v68;
    v66 = __n;
  }
  v69 = v66;
  memcpy((void *)v64, v202, v66);
  v229[0].i8[0] = 3;
  v229[0].i64[1] = v69;
  v229[0].i64[2] = v64;
  v229[0].i64[3] = v69;
  v70 = &v221;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v221, &v208, &v215);
  if ( v221.i64[0] == 0x8000000000000000LL )
  {
    v71 = v221.i64[1];
    v72 = 32 * v221.i64[3];
    v228 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 24);
    v227 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 16);
    v73 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3]);
    v226 = *(void **)(v221.i64[1] + 32 * v221.i64[3] + 8);
    v225 = v73;
    *(_OWORD *)(v221.i64[1] + v72 + 16) = v229[0].i128[1];
    v74 = (__m256i *)v229[0].i64[1];
    *(_OWORD *)(v71 + v72) = v229[0].i128[0];
    if ( (_BYTE)v225 != 6 )
    {
      v70 = (__m256i *)&v225;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v225);
    }
  }
  else
  {
    v219 = v224;
    v218 = v223;
    v217 = v222;
    v216 = v221;
    v220 = v229[0];
    v70 = (__m256i *)&v225;
    v74 = &v216;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v225,
      &v216,
      &v220);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v70, v74);
  v49 = 13;
  v75 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
  if ( !v75 )
    goto LABEL_180;
  qmemcpy(v75, "content_index", 13);
  v215.i64[0] = 13;
  v215.i64[1] = (__int64)v75;
  v215.i64[2] = 13;
  v229[0].i8[0] = 2;
  *(__int128 *)((char *)v229[0].i128 + 8) = 0u;
  v76 = &v221;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v221, &v208, &v215);
  if ( v221.i64[0] == 0x8000000000000000LL )
  {
    v77 = v221.i64[1];
    v78 = 32 * v221.i64[3];
    v228 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 24);
    v227 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 16);
    v79 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3]);
    v226 = *(void **)(v221.i64[1] + 32 * v221.i64[3] + 8);
    v225 = v79;
    *(_OWORD *)(v221.i64[1] + v78 + 16) = v229[0].i128[1];
    v80 = (__m256i *)v229[0].i64[1];
    *(_OWORD *)(v77 + v78) = v229[0].i128[0];
    if ( (_BYTE)v225 != 6 )
    {
      v76 = (__m256i *)&v225;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v225);
    }
  }
  else
  {
    v219 = v224;
    v218 = v223;
    v217 = v222;
    v216 = v221;
    v220 = v229[0];
    v76 = (__m256i *)&v225;
    v80 = &v216;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v225,
      &v216,
      &v220);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v76, v80);
  v49 = 4;
  v81 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v81 )
LABEL_180:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v49);
  *v81 = 1953653104;
  v198 = 4;
  v199 = v81;
  v200 = 4;
  *(_QWORD *)&v210 = 0;
  v211 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v82 = 4;
  v83 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v83 )
    goto LABEL_183;
  *v83 = 1701869940;
  *(_QWORD *)&v213 = 4;
  *((_QWORD *)&v213 + 1) = v83;
  v214 = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v84 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
  if ( !v84 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 11);
  qmemcpy(v84, "output_text", 11);
  v229[0].i8[0] = 3;
  v229[0].i64[1] = 11;
  v229[0].i64[2] = (__int64)v84;
  v229[0].i64[3] = 11;
  v85 = &v221;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v221, &v210, &v213);
  if ( v221.i64[0] == 0x8000000000000000LL )
  {
    v86 = v221.i64[1];
    v87 = 32 * v221.i64[3];
    v228 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 24);
    v227 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 16);
    v88 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3]);
    v226 = *(void **)(v221.i64[1] + 32 * v221.i64[3] + 8);
    v225 = v88;
    *(_OWORD *)(v221.i64[1] + v87 + 16) = v229[0].i128[1];
    v89 = (__m256i *)v229[0].i64[1];
    *(_OWORD *)(v86 + v87) = v229[0].i128[0];
    if ( (_BYTE)v225 != 6 )
    {
      v85 = (__m256i *)&v225;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v225);
    }
  }
  else
  {
    v219 = v224;
    v218 = v223;
    v217 = v222;
    v216 = v221;
    v220 = v229[0];
    v85 = (__m256i *)&v225;
    v89 = &v216;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v225,
      &v216,
      &v220);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v85, v89);
  v90 = 1;
  v91 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v91 )
    goto LABEL_183;
  *v91 = 1954047348;
  *(_QWORD *)&v213 = 4;
  *((_QWORD *)&v213 + 1) = v91;
  v214 = 4;
  if ( v51 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
    v92 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v51, 1);
    if ( !v92 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v51);
    v90 = v92;
  }
  memcpy((void *)v90, v203, v51);
  v229[0].i8[0] = 3;
  v229[0].i64[1] = v51;
  v229[0].i64[2] = v90;
  v229[0].i64[3] = v51;
  v93 = &v221;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v221, &v210, &v213);
  if ( v221.i64[0] == 0x8000000000000000LL )
  {
    v94 = v221.i64[1];
    v95 = 32 * v221.i64[3];
    v228 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 24);
    v227 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 16);
    v96 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3]);
    v226 = *(void **)(v221.i64[1] + 32 * v221.i64[3] + 8);
    v225 = v96;
    *(_OWORD *)(v221.i64[1] + v95 + 16) = v229[0].i128[1];
    v97 = (__m256i *)v229[0].i64[1];
    *(_OWORD *)(v94 + v95) = v229[0].i128[0];
    if ( (_BYTE)v225 != 6 )
    {
      v93 = (__m256i *)&v225;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v225);
    }
  }
  else
  {
    v219 = v224;
    v218 = v223;
    v217 = v222;
    v216 = v221;
    v220 = v229[0];
    v93 = (__m256i *)&v225;
    v97 = &v216;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v225,
      &v216,
      &v220);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v93, v97);
  v82 = 11;
  v98 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
  if ( !v98 )
LABEL_183:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v82);
  qmemcpy(v98, "annotations", 11);
  *(_QWORD *)&v213 = 11;
  *((_QWORD *)&v213 + 1) = v98;
  v214 = 11;
  v229[0].i64[1] = 0;
  v229[0].i128[1] = 8u;
  v229[0].i8[0] = 4;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v221, &v210, &v213);
  if ( v221.i64[0] == 0x8000000000000000LL )
  {
    v228 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 24);
    v227 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 16);
    v99 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3]);
    v226 = *(void **)(v221.i64[1] + 32 * v221.i64[3] + 8);
    v225 = v99;
    *(__m256i *)(v221.i64[1] + 32 * v221.i64[3]) = v229[0];
    if ( (_BYTE)v225 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v225);
  }
  else
  {
    v219 = v224;
    v218 = v223;
    v217 = v222;
    v216 = v221;
    v220 = v229[0];
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v225,
      &v216,
      &v220);
  }
  *(__int128 *)((char *)v215.i128 + 8) = v210;
  v215.i64[3] = v211;
  v215.i8[0] = 5;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v221, &v208, &v198);
  if ( v221.i64[0] == 0x8000000000000000LL )
  {
    v228 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 24);
    v227 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 16);
    v100 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3]);
    v226 = *(void **)(v221.i64[1] + 32 * v221.i64[3] + 8);
    v225 = v100;
    *(__m256i *)(v221.i64[1] + 32 * v221.i64[3]) = v215;
    if ( (_BYTE)v225 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v225);
  }
  else
  {
    v219 = v224;
    v218 = v223;
    v217 = v222;
    v216 = v221;
    v220 = v215;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v225,
      &v216,
      &v220);
  }
  *(__int128 *)((char *)v221.i128 + 8) = v208;
  v221.i64[3] = v209;
  v221.i8[0] = 5;
  v220.i64[0] = (__int64)"response.content_part.doneoutput_text";
  v220.i64[1] = 26;
  v229[0].i64[0] = (__int64)&v221;
  v216.i64[0] = (__int64)&v220;
  v216.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  v216.i64[2] = (__int64)v229;
  v216.i64[3] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcb50c2f2fdedac0f;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v225, &unk_1017C9F28, &v216);
  v102 = v226;
  v103 = v227;
  v104 = v207;
  v105 = v204;
  if ( v227 > *v207 - v204 )
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
      v207,
      v204,
      v227,
      1,
      1,
      v101);
    v206 = v104[1];
    v105 = v104[2];
  }
  memcpy((void *)(v206 + v105), v102, v103);
  v204 = v103 + v105;
  v207[2] = v103 + v105;
  v106 = v225;
  if ( v225 )
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v102, v225, 1);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v221);
  *(_QWORD *)&v208 = 0;
  v209 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v221, v106);
  v107 = 4;
  v108 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v108 )
    goto LABEL_181;
  *v108 = 1701869940;
  v215.i64[0] = 4;
  v215.i64[1] = (__int64)v108;
  v215.i64[2] = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v109 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v109 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7);
  *(_DWORD *)((char *)v109 + 3) = 1701273971;
  *v109 = 1936942445;
  v229[0].i8[0] = 3;
  v229[0].i64[1] = 7;
  v229[0].i64[2] = (__int64)v109;
  v229[0].i64[3] = 7;
  v110 = &v221;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v221, &v208, &v215);
  if ( v221.i64[0] == 0x8000000000000000LL )
  {
    v111 = v221.i64[1];
    v112 = 32 * v221.i64[3];
    v228 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 24);
    v227 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 16);
    v113 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3]);
    v226 = *(void **)(v221.i64[1] + 32 * v221.i64[3] + 8);
    v225 = v113;
    *(_OWORD *)(v221.i64[1] + v112 + 16) = v229[0].i128[1];
    v114 = (__m256i *)v229[0].i64[1];
    *(_OWORD *)(v111 + v112) = v229[0].i128[0];
    if ( (_BYTE)v225 != 6 )
    {
      v110 = (__m256i *)&v225;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v225);
    }
  }
  else
  {
    v219 = v224;
    v218 = v223;
    v217 = v222;
    v216 = v221;
    v220 = v229[0];
    v110 = (__m256i *)&v225;
    v114 = &v216;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v225,
      &v216,
      &v220);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v110, v114);
  v107 = 2;
  v115 = 1;
  v116 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1);
  if ( !v116 )
    goto LABEL_181;
  *v116 = 25705;
  v215.i64[0] = 2;
  v215.i64[1] = (__int64)v116;
  v215.i64[2] = 2;
  v117 = __n;
  if ( __n )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1);
    v118 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v117, 1);
    if ( !v118 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n);
    v115 = v118;
    v117 = __n;
  }
  memcpy((void *)v115, v202, v117);
  v229[0].i8[0] = 3;
  v229[0].i64[1] = v117;
  v229[0].i64[2] = v115;
  v229[0].i64[3] = v117;
  v119 = &v221;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v221, &v208, &v215);
  if ( v221.i64[0] == 0x8000000000000000LL )
  {
    v120 = v221.i64[1];
    v121 = 32 * v221.i64[3];
    v228 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 24);
    v227 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 16);
    v122 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3]);
    v226 = *(void **)(v221.i64[1] + 32 * v221.i64[3] + 8);
    v225 = v122;
    *(_OWORD *)(v221.i64[1] + v121 + 16) = v229[0].i128[1];
    v123 = (__m256i *)v229[0].i64[1];
    *(_OWORD *)(v120 + v121) = v229[0].i128[0];
    if ( (_BYTE)v225 != 6 )
    {
      v119 = (__m256i *)&v225;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v225);
    }
  }
  else
  {
    v219 = v224;
    v218 = v223;
    v217 = v222;
    v216 = v221;
    v220 = v229[0];
    v119 = (__m256i *)&v225;
    v123 = &v216;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v225,
      &v216,
      &v220);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v119, v123);
  v107 = 6;
  v124 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
  if ( !v124 )
    goto LABEL_181;
  *(_WORD *)(v124 + 4) = 29557;
  *(_DWORD *)v124 = 1952543859;
  v215.i64[0] = 6;
  v215.i64[1] = v124;
  v215.i64[2] = 6;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1);
  v125 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
  if ( !v125 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
  *(_QWORD *)v125 = 0x6574656C706D6F63LL;
  *(_BYTE *)(v125 + 8) = 100;
  v229[0].i8[0] = 3;
  v229[0].i64[1] = 9;
  v229[0].i64[2] = v125;
  v229[0].i64[3] = 9;
  v126 = &v221;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v221, &v208, &v215);
  if ( v221.i64[0] == 0x8000000000000000LL )
  {
    v127 = v221.i64[1];
    v128 = 32 * v221.i64[3];
    v228 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 24);
    v227 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 16);
    v129 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3]);
    v226 = *(void **)(v221.i64[1] + 32 * v221.i64[3] + 8);
    v225 = v129;
    *(_OWORD *)(v221.i64[1] + v128 + 16) = v229[0].i128[1];
    v130 = (__m256i *)v229[0].i64[1];
    *(_OWORD *)(v127 + v128) = v229[0].i128[0];
    if ( (_BYTE)v225 != 6 )
    {
      v126 = (__m256i *)&v225;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v225);
    }
  }
  else
  {
    v219 = v224;
    v218 = v223;
    v217 = v222;
    v216 = v221;
    v220 = v229[0];
    v126 = (__m256i *)&v225;
    v130 = &v216;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v225,
      &v216,
      &v220);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v126, v130);
  v107 = 4;
  v131 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v131 )
    goto LABEL_181;
  *v131 = 1701605234;
  v215.i64[0] = 4;
  v215.i64[1] = (__int64)v131;
  v215.i64[2] = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v132 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
  if ( !v132 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
  *(_QWORD *)v132 = 0x6E61747369737361LL;
  *(_BYTE *)(v132 + 8) = 116;
  v229[0].i8[0] = 3;
  v229[0].i64[1] = 9;
  v229[0].i64[2] = v132;
  v229[0].i64[3] = 9;
  v133 = &v221;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v221, &v208, &v215);
  if ( v221.i64[0] == 0x8000000000000000LL )
  {
    v134 = v221.i64[1];
    v135 = 32 * v221.i64[3];
    v228 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 24);
    v227 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 16);
    v136 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3]);
    v226 = *(void **)(v221.i64[1] + 32 * v221.i64[3] + 8);
    v225 = v136;
    *(_OWORD *)(v221.i64[1] + v135 + 16) = v229[0].i128[1];
    v137 = (__m256i *)v229[0].i64[1];
    *(_OWORD *)(v134 + v135) = v229[0].i128[0];
    if ( (_BYTE)v225 != 6 )
    {
      v133 = (__m256i *)&v225;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v225);
    }
  }
  else
  {
    v219 = v224;
    v218 = v223;
    v217 = v222;
    v216 = v221;
    v220 = v229[0];
    v133 = (__m256i *)&v225;
    v137 = &v216;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v225,
      &v216,
      &v220);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v133, v137);
  v107 = 7;
  v138 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v138 )
LABEL_181:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v107);
  *(_DWORD *)((char *)v138 + 3) = 1953391988;
  *v138 = 1953394531;
  v198 = 7;
  __n = (size_t)v138;
  v199 = v138;
  v200 = 7;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
  v139 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8);
  if ( !v139 )
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32);
  v140 = v139;
  *(_QWORD *)&v210 = 0;
  v211 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 8);
  v141 = 4;
  v142 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v142 )
    goto LABEL_184;
  *v142 = 1701869940;
  *(_QWORD *)&v213 = 4;
  *((_QWORD *)&v213 + 1) = v142;
  v214 = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v143 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
  if ( !v143 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 11);
  qmemcpy(v143, "output_text", 11);
  v229[0].i8[0] = 3;
  v229[0].i64[1] = 11;
  v229[0].i64[2] = (__int64)v143;
  v229[0].i64[3] = 11;
  v144 = &v221;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v221, &v210, &v213);
  if ( v221.i64[0] == 0x8000000000000000LL )
  {
    v145 = v221.i64[1];
    v146 = 32 * v221.i64[3];
    v228 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 24);
    v227 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 16);
    v147 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3]);
    v226 = *(void **)(v221.i64[1] + 32 * v221.i64[3] + 8);
    v225 = v147;
    *(_OWORD *)(v221.i64[1] + v146 + 16) = v229[0].i128[1];
    v148 = (__m256i *)v229[0].i64[1];
    *(_OWORD *)(v145 + v146) = v229[0].i128[0];
    if ( (_BYTE)v225 != 6 )
    {
      v144 = (__m256i *)&v225;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v225);
    }
  }
  else
  {
    v219 = v224;
    v218 = v223;
    v217 = v222;
    v216 = v221;
    v220 = v229[0];
    v144 = (__m256i *)&v225;
    v148 = &v216;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v225,
      &v216,
      &v220);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v144, v148);
  v149 = 1;
  v150 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v150 )
    goto LABEL_184;
  *v150 = 1954047348;
  *(_QWORD *)&v213 = 4;
  *((_QWORD *)&v213 + 1) = v150;
  v214 = 4;
  v151 = v205;
  if ( v205 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
    v152 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v151, 1);
    if ( !v152 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v205);
    v149 = v152;
    v151 = v205;
  }
  memcpy((void *)v149, v203, v151);
  v229[0].i8[0] = 3;
  v229[0].i64[1] = v151;
  v229[0].i64[2] = v149;
  v229[0].i64[3] = v151;
  v153 = &v221;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v221, &v210, &v213);
  if ( v221.i64[0] == 0x8000000000000000LL )
  {
    v154 = v221.i64[1];
    v155 = 32 * v221.i64[3];
    v228 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 24);
    v227 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 16);
    v156 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3]);
    v226 = *(void **)(v221.i64[1] + 32 * v221.i64[3] + 8);
    v225 = v156;
    *(_OWORD *)(v221.i64[1] + v155 + 16) = v229[0].i128[1];
    v157 = (__m256i *)v229[0].i64[1];
    *(_OWORD *)(v154 + v155) = v229[0].i128[0];
    if ( (_BYTE)v225 != 6 )
    {
      v153 = (__m256i *)&v225;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v225);
    }
  }
  else
  {
    v219 = v224;
    v218 = v223;
    v217 = v222;
    v216 = v221;
    v220 = v229[0];
    v153 = (__m256i *)&v225;
    v157 = &v216;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v225,
      &v216,
      &v220);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v153, v157);
  v141 = 11;
  v158 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
  if ( !v158 )
LABEL_184:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v141);
  qmemcpy(v158, "annotations", 11);
  *(_QWORD *)&v213 = 11;
  *((_QWORD *)&v213 + 1) = v158;
  v214 = 11;
  v229[0].i64[1] = 0;
  v229[0].i128[1] = 8u;
  v229[0].i8[0] = 4;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v221, &v210, &v213);
  if ( v221.i64[0] == 0x8000000000000000LL )
  {
    v228 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 24);
    v227 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 16);
    v159 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3]);
    v226 = *(void **)(v221.i64[1] + 32 * v221.i64[3] + 8);
    v225 = v159;
    *(__m256i *)(v221.i64[1] + 32 * v221.i64[3]) = v229[0];
    if ( (_BYTE)v225 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v225);
  }
  else
  {
    v219 = v224;
    v218 = v223;
    v217 = v222;
    v216 = v221;
    v220 = v229[0];
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v225,
      &v216,
      &v220);
  }
  *(__int128 *)((char *)v216.i128 + 7) = v210;
  *(__int64 *)((char *)&v216.i64[2] + 7) = v211;
  *(_BYTE *)v140 = 5;
  *(_QWORD *)(v140 + 24) = *(__int64 *)((char *)&v216.i64[2] + 7);
  *(_QWORD *)(v140 + 17) = v216.i64[2];
  *(_OWORD *)(v140 + 1) = v216.i128[0];
  v215.i64[1] = 1;
  v215.i64[2] = v140;
  v215.i64[3] = 1;
  v215.i8[0] = 4;
  v160 = &v221;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v221, &v208, &v198);
  if ( v221.i64[0] == 0x8000000000000000LL )
  {
    v161 = v221.i64[1];
    v162 = 32 * v221.i64[3];
    v228 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 24);
    v227 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 16);
    v163 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3]);
    v226 = *(void **)(v221.i64[1] + 32 * v221.i64[3] + 8);
    v225 = v163;
    *(_OWORD *)(v221.i64[1] + v162 + 16) = v215.i128[1];
    v164 = (__m256i *)v215.i64[1];
    *(_OWORD *)(v161 + v162) = v215.i128[0];
    if ( (_BYTE)v225 != 6 )
    {
      v160 = (__m256i *)&v225;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v225);
    }
  }
  else
  {
    v219 = v224;
    v218 = v223;
    v217 = v222;
    v216 = v221;
    v220 = v215;
    v160 = (__m256i *)&v225;
    v164 = &v216;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v225,
      &v216,
      &v220);
  }
  *(__int128 *)((char *)v215.i128 + 8) = v208;
  v215.i64[3] = v209;
  v215.i8[0] = 5;
  *(_QWORD *)&v210 = 0;
  v211 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v160, v164);
  v165 = 4;
  v166 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v166 )
    goto LABEL_185;
  *v166 = 1701869940;
  *(_QWORD *)&v213 = 4;
  *((_QWORD *)&v213 + 1) = v166;
  v214 = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v167 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(25, 1);
  if ( !v167 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 25);
  qmemcpy(v167, "response.output_item.done", 25);
  v229[0].i8[0] = 3;
  v229[0].i64[1] = 25;
  v229[0].i64[2] = (__int64)v167;
  v229[0].i64[3] = 25;
  v168 = &v221;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v221, &v210, &v213);
  if ( v221.i64[0] == 0x8000000000000000LL )
  {
    v169 = v221.i64[1];
    v170 = 32 * v221.i64[3];
    v228 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 24);
    v227 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 16);
    v171 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3]);
    v226 = *(void **)(v221.i64[1] + 32 * v221.i64[3] + 8);
    v225 = v171;
    *(_OWORD *)(v221.i64[1] + v170 + 16) = v229[0].i128[1];
    v172 = (__m256i *)v229[0].i64[1];
    *(_OWORD *)(v169 + v170) = v229[0].i128[0];
    if ( (_BYTE)v225 != 6 )
    {
      v168 = (__m256i *)&v225;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v225);
    }
  }
  else
  {
    v219 = v224;
    v218 = v223;
    v217 = v222;
    v216 = v221;
    v220 = v229[0];
    v168 = (__m256i *)&v225;
    v172 = &v216;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v225,
      &v216,
      &v220);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v168, v172);
  v165 = 12;
  v173 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
  if ( !v173 )
    goto LABEL_185;
  qmemcpy(v173, "output_index", 12);
  *(_QWORD *)&v213 = 12;
  *((_QWORD *)&v213 + 1) = v173;
  v214 = 12;
  v229[0].i8[0] = 2;
  v229[0].i64[1] = 0;
  v229[0].i64[2] = v201;
  v174 = &v221;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v221, &v210, &v213);
  if ( v221.i64[0] == 0x8000000000000000LL )
  {
    v175 = v221.i64[1];
    v176 = 32 * v221.i64[3];
    v228 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 24);
    v227 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 16);
    v177 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3]);
    v226 = *(void **)(v221.i64[1] + 32 * v221.i64[3] + 8);
    v225 = v177;
    *(_OWORD *)(v221.i64[1] + v176 + 16) = v229[0].i128[1];
    v178 = (__m256i *)v229[0].i64[1];
    *(_OWORD *)(v175 + v176) = v229[0].i128[0];
    if ( (_BYTE)v225 != 6 )
    {
      v174 = (__m256i *)&v225;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v225);
    }
  }
  else
  {
    v219 = v224;
    v218 = v223;
    v217 = v222;
    v216 = v221;
    v220 = v229[0];
    v174 = (__m256i *)&v225;
    v178 = &v216;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v225,
      &v216,
      &v220);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v174, v178);
  v165 = 4;
  v179 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v179 )
LABEL_185:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v165);
  *v179 = 1835365481;
  *(_QWORD *)&v213 = 4;
  *((_QWORD *)&v213 + 1) = v179;
  v214 = 4;
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
    &v216,
    &v215);
  if ( v216.i8[0] == 6 )
  {
    v221.i64[0] = v216.i64[1];
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, &v221, &off_101974C58, &off_101974200);
  }
  v229[0] = v216;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v221, &v210, &v213);
  if ( v221.i64[0] == 0x8000000000000000LL )
  {
    v228 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 24);
    v227 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3] + 16);
    v180 = *(_QWORD *)(v221.i64[1] + 32 * v221.i64[3]);
    v226 = *(void **)(v221.i64[1] + 32 * v221.i64[3] + 8);
    v225 = v180;
    *(__m256i *)(v221.i64[1] + 32 * v221.i64[3]) = v229[0];
    if ( (_BYTE)v225 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v225);
  }
  else
  {
    v219 = v224;
    v218 = v223;
    v217 = v222;
    v216 = v221;
    v220 = v229[0];
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v225,
      &v216,
      &v220);
  }
  *(__int128 *)((char *)v221.i128 + 8) = v210;
  v221.i64[3] = v211;
  v221.i8[0] = 5;
  v220.i64[0] = (__int64)"response.output_item.doneresponse.function_call_arguments.done";
  v220.i64[1] = 25;
  v229[0].i64[0] = (__int64)&v221;
  v216.i64[0] = (__int64)&v220;
  v216.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  v216.i64[2] = (__int64)v229;
  v216.i64[3] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcb50c2f2fdedac0f;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v225, &unk_1017C9F28, &v216);
  v182 = v226;
  v183 = v227;
  v184 = v207;
  v185 = v204;
  if ( v227 > *v207 - v204 )
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
      v207,
      v204,
      v227,
      1,
      1,
      v181);
    v206 = v184[1];
    v185 = v184[2];
  }
  memcpy((void *)(v185 + v206), v182, v183);
  v207[2] = v183 + v185;
  if ( v225 )
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v182, v225, 1);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v221);
  v186 = a1[10];
  if ( v186 == a1[8] )
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(a1 + 8);
  v187 = a1[9];
  v188 = 32 * v186;
  v189 = v215.i64[0];
  v190 = *(__int128 *)((char *)v215.i128 + 8);
  *(_QWORD *)(v187 + v188 + 24) = v215.i64[3];
  *(_OWORD *)(v187 + v188 + 8) = v190;
  *(_QWORD *)(v187 + v188) = v189;
  a1[10] = v186 + 1;
  if ( v191 )
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v191, 1);
  if ( v194 )
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v195, v194, 1);
  return result;
}
