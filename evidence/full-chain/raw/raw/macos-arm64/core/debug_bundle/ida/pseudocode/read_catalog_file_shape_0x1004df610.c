// __ZN13codexmate_lib4core12debug_bundle23read_catalog_file_shape @ 0x1004df610 | 基线 same-set
// [FULL IDA decompiler]

__int64 __fastcall codexmate_lib::core::debug_bundle::read_catalog_file_shape::heed63cb5977810c0(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r15
  __int8 v6; // r12
  __m256i *v7; // rdi
  __int64 v8; // r14
  __int64 v9; // rax
  __m256i *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __m256i *v14; // rsi
  __int64 v15; // rbx
  __int64 v16; // rbx
  __int64 v17; // r14
  __int64 v18; // rax
  __m256i *v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __m256i *v23; // rsi
  __int64 v24; // r14
  __int64 v25; // rax
  __m256i *v26; // rdi
  __int64 v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __m256i *v30; // rsi
  __int64 v31; // rax
  __m256i *v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __m256i *v36; // rsi
  _DWORD *v37; // rax
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 result; // rax
  __int64 v41; // rsi
  __int128 v42; // kr00_16
  __int64 v43; // rbx
  __int64 v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  __m256i *v47; // rdi
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rdx
  __m256i *v51; // rsi
  _DWORD *v52; // rax
  __m256i *v53; // rdi
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rdx
  __m256i *v57; // rsi
  __int64 v58; // rax
  __int64 v59; // r15
  size_t v60; // r14
  __int64 v61; // r12
  __int64 v62; // rbx
  __int64 v63; // r13
  __int64 v64; // rsi
  __int64 v65; // rax
  __int64 v66; // rbx
  __int64 v67; // rax
  __m256i *v68; // rdi
  __int64 v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rdx
  __m256i *v72; // rsi
  _DWORD *v73; // rax
  __m256i *v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rcx
  __int64 v77; // rdx
  __m256i *v78; // rsi
  void *v79; // rax
  __int64 v80; // rdx
  __int64 v81; // rcx
  __int64 v82; // r8
  __int64 v83; // r9
  __int64 v84; // r15
  size_t v85; // r14
  __int64 v86; // r12
  __int64 v87; // rax
  __int64 v88; // rbx
  __int64 v89; // rbx
  __int64 v90; // rdx
  __int64 v91; // rcx
  __int64 v92; // r15
  __int64 v93; // rbx
  __int64 v94; // r12
  __int64 v95; // rsi
  __int64 v96; // rsi
  __int64 v97; // rdx
  __int64 v98; // rdi
  __int64 i; // rax
  __int64 v100; // rsi
  __int64 v101; // rax
  __int64 v102; // rcx
  __int64 v103; // rbx
  __int64 v104; // rdx
  __int64 v105; // rcx
  __int64 v106; // rbx
  char *v107; // rdi
  __int64 v108; // rsi
  __int64 v109; // rax
  _BYTE *v110; // rcx
  _BYTE *v111; // r14
  _BYTE *j; // rax
  _BYTE *v113; // rcx
  bool v114; // zf
  unsigned __int64 v115; // r15
  __int64 v116; // r12
  __int64 v117; // r14
  unsigned __int64 v118; // r13
  unsigned __int64 v119; // rbx
  unsigned __int64 v120; // rax
  unsigned __int64 v121; // rcx
  __int64 v122; // rcx
  unsigned __int64 v123; // rax
  __int64 v124; // rdx
  __int64 v125; // rdi
  unsigned __int64 v126; // rsi
  unsigned __int64 v127; // rax
  unsigned __int64 v128; // r12
  __int64 v129; // rbx
  __int64 v130; // r13
  size_t v131; // rdx
  size_t v132; // r14
  __int64 v133; // r14
  int v134; // eax
  char v135; // cl
  char v136; // al
  unsigned __int64 v137; // rax
  unsigned __int64 v138; // r15
  unsigned __int64 v139; // rbx
  __int64 v140; // rdx
  unsigned __int64 v141; // rax
  unsigned __int64 v142; // rcx
  unsigned __int64 v143; // rdx
  __int64 v144; // rsi
  __int64 v145; // r8
  unsigned __int64 v146; // rdi
  __int64 v147; // r12
  __int64 v148; // rax
  __m256i *v149; // rdi
  __int64 v150; // rax
  __int64 v151; // rcx
  __int64 v152; // rdx
  __m256i *v153; // rsi
  __int64 v154; // rax
  __m256i *v155; // rdi
  __int64 v156; // rax
  __int64 v157; // rcx
  __int64 v158; // rdx
  __m256i *v159; // rsi
  _DWORD *v160; // rax
  __m256i *v161; // rdi
  __int64 v162; // rax
  __int64 v163; // rcx
  __int64 v164; // rdx
  __m256i *v165; // rsi
  void *v166; // rax
  __m256i *v167; // rdi
  __int64 v168; // rax
  __int64 v169; // rcx
  __int64 v170; // rdx
  __m256i *v171; // rsi
  void *v172; // rax
  __m256i *v173; // rdi
  __int64 v174; // rax
  __int64 v175; // rcx
  __int64 v176; // rdx
  __m256i *v177; // rsi
  void *v178; // rax
  __m256i *v179; // rdi
  __int64 v180; // rax
  __int64 v181; // rcx
  __int64 v182; // rdx
  __m256i *v183; // rsi
  void *v184; // rax
  __m256i *v185; // rdi
  __int64 v186; // rax
  __int64 v187; // rcx
  __int64 v188; // rdx
  __m256i *v189; // rsi
  void *v190; // rax
  __int64 v191; // rax
  __m256i *v192; // rdi
  __int64 v193; // rax
  __int64 v194; // rcx
  __int64 v195; // rdx
  __m256i *v196; // rsi
  void *v197; // rax
  __int64 v198; // rsi
  __m256i *v199; // rdi
  __int64 v200; // rax
  __int64 v201; // rcx
  __int64 v202; // rdx
  __int64 v203; // rsi
  __int64 v204; // rbx
  __m256i **v205; // r14
  void *v206; // rax
  __m256i *v207; // rdi
  __int64 v208; // rax
  __int64 v209; // rcx
  __int64 v210; // rdx
  __m256i *v211; // rsi
  void *v212; // rax
  __int64 v213; // rsi
  __int64 v214; // rdx
  __int64 v215; // rbx
  _QWORD *v216; // r14
  __int64 v217; // rsi
  __int64 v218; // rcx
  __int64 v219; // rbx
  _QWORD *v220; // r14
  __int64 v221; // rsi
  __int64 v222; // [rsp+60h] [rbp-2D0h]
  __int64 v223; // [rsp+68h] [rbp-2C8h]
  __int64 v224; // [rsp+70h] [rbp-2C0h] BYREF
  void *v225; // [rsp+78h] [rbp-2B8h]
  __int64 v226; // [rsp+80h] [rbp-2B0h]
  __int128 v227; // [rsp+88h] [rbp-2A8h] BYREF
  __int64 v228; // [rsp+98h] [rbp-298h]
  __m256i v229; // [rsp+A0h] [rbp-290h] BYREF
  __int64 v230; // [rsp+C0h] [rbp-270h]
  unsigned __int64 v231; // [rsp+C8h] [rbp-268h]
  __int64 v232; // [rsp+D0h] [rbp-260h]
  unsigned __int64 v233; // [rsp+D8h] [rbp-258h]
  _BYTE *v234; // [rsp+E0h] [rbp-250h]
  __m256i v235; // [rsp+E8h] [rbp-248h]
  __m256i v236; // [rsp+108h] [rbp-228h]
  __int128 v237; // [rsp+128h] [rbp-208h] BYREF
  __int64 v238; // [rsp+138h] [rbp-1F8h]
  _BYTE *v239; // [rsp+140h] [rbp-1F0h]
  __int64 v240; // [rsp+148h] [rbp-1E8h]
  __int64 v241; // [rsp+150h] [rbp-1E0h]
  __int64 v242; // [rsp+158h] [rbp-1D8h]
  __m256i v243; // [rsp+160h] [rbp-1D0h] BYREF
  void *__src; // [rsp+180h] [rbp-1B0h]
  __m256i v245; // [rsp+188h] [rbp-1A8h] BYREF
  __int128 v246; // [rsp+1A8h] [rbp-188h]
  __int128 v247; // [rsp+1B8h] [rbp-178h]
  __int64 v248; // [rsp+1C8h] [rbp-168h]
  __int64 v249; // [rsp+1F0h] [rbp-140h]
  __int128 v250; // [rsp+220h] [rbp-110h] BYREF
  _BYTE v251[24]; // [rsp+230h] [rbp-100h] BYREF
  __int64 v252; // [rsp+248h] [rbp-E8h]
  __int128 v253; // [rsp+250h] [rbp-E0h] BYREF
  __int64 v254; // [rsp+260h] [rbp-D0h]
  __m256i v255; // [rsp+268h] [rbp-C8h] BYREF
  __m256i v256; // [rsp+288h] [rbp-A8h] BYREF
  __m256i v257; // [rsp+2A8h] [rbp-88h] BYREF
  __int128 v258; // [rsp+2C8h] [rbp-68h]
  __int64 v259; // [rsp+2D8h] [rbp-58h]
  __int64 v260; // [rsp+2E0h] [rbp-50h]
  __m256i v261[2]; // [rsp+2E8h] [rbp-48h] BYREF

  v4 = a2;
  std::sys::fs::metadata::h32fa16d3052ea535(&v245, a2, a3);
  v6 = v245.i8[0];
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0(
    v245.i64[0],
    v245.i64[1]);
  v7 = &v245;
  std::sys::fs::metadata::h32fa16d3052ea535(&v245, a2, a3);
  LOBYTE(__src) = v245.i8[0];
  if ( v245.i8[0] )
  {
    if ( (v245.i8[8] & 3) == 1 )
    {
      v241 = a1;
      v240 = v245.i64[1] - 1;
      v62 = *(_QWORD *)(v245.i64[1] - 1);
      v63 = *(_QWORD *)(v245.i64[1] + 7);
      if ( *(_QWORD *)v63 )
        (*(void (__fastcall **)(__int64))v63)(v62);
      v64 = *(_QWORD *)(v63 + 8);
      if ( v64 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v62, v64, *(_QWORD *)(v63 + 16));
      a2 = 24;
      v7 = (__m256i *)v240;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v240, 24, 8);
      a1 = v241;
      if ( v6 )
        goto LABEL_4;
    }
    else if ( v6 )
    {
LABEL_4:
      v243.i64[0] = 0;
      v243.i64[2] = 0;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, a2);
      v8 = 6;
      v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
      if ( !v9 )
        goto LABEL_300;
      *(_WORD *)(v9 + 4) = 29556;
      *(_DWORD *)v9 = 1936291941;
      v256.i64[0] = 6;
      v256.i64[1] = v9;
      v256.i64[2] = 6;
      v236.i16[0] = 1;
      v261[0] = v236;
      v10 = &v257;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v257, &v243, &v256);
      if ( __OFSUB__(0, v257.i64[0]) )
      {
        v11 = v257.i64[1];
        v12 = 32 * v257.i64[3];
        *(_OWORD *)v251 = *(_OWORD *)(v257.i64[1] + 32 * v257.i64[3] + 16);
        v13 = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3]);
        *((_QWORD *)&v250 + 1) = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3] + 8);
        *(_QWORD *)&v250 = v13;
        *(_OWORD *)(v257.i64[1] + v12 + 16) = v236.i128[1];
        v14 = (__m256i *)v236.i64[1];
        *(_OWORD *)(v11 + v12) = v236.i128[0];
        if ( (_BYTE)v250 != 6 )
        {
          v10 = (__m256i *)&v250;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v250);
        }
      }
      else
      {
        *(_QWORD *)&v247 = v259;
        v246 = v258;
        v245 = v257;
        v255 = v236;
        v10 = (__m256i *)&v250;
        v14 = &v245;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v250,
          &v245,
          &v255);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10, v14);
      v8 = 5;
      v31 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
      if ( !v31 )
        goto LABEL_300;
      *(_BYTE *)(v31 + 4) = 115;
      *(_DWORD *)v31 = 1702132066;
      v256.i64[0] = 5;
      v256.i64[1] = v31;
      v256.i64[2] = 5;
      v261[0].i8[0] = 2 * ((unsigned __int8)__src ^ 1);
      v261[0].i64[1] = 0;
      v261[0].i64[2] = v240;
      v32 = &v257;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v257, &v243, &v256);
      if ( v257.i64[0] == 0x8000000000000000LL )
      {
        v33 = v257.i64[1];
        v34 = 32 * v257.i64[3];
        *(_OWORD *)v251 = *(_OWORD *)(v257.i64[1] + 32 * v257.i64[3] + 16);
        v35 = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3]);
        *((_QWORD *)&v250 + 1) = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3] + 8);
        *(_QWORD *)&v250 = v35;
        *(_OWORD *)(v257.i64[1] + v34 + 16) = v261[0].i128[1];
        v36 = (__m256i *)v261[0].i64[1];
        *(_OWORD *)(v33 + v34) = v261[0].i128[0];
        if ( (_BYTE)v250 != 6 )
        {
          v32 = (__m256i *)&v250;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v250);
        }
      }
      else
      {
        *(_QWORD *)&v247 = v259;
        v246 = v258;
        v245 = v257;
        v255 = v261[0];
        v32 = (__m256i *)&v250;
        v36 = &v245;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v250,
          &v245,
          &v255);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v32, v36);
      v8 = 7;
      v37 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
      if ( !v37 )
LABEL_300:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v8);
      *(_DWORD *)((char *)v37 + 3) = 1800365427;
      *v37 = 1936875888;
      v261[0].i64[0] = 7;
      v261[0].i64[1] = (__int64)v37;
      v261[0].i64[2] = 7;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v257, &v243, v261);
      if ( v257.i64[0] == 0x8000000000000000LL )
      {
        *(_OWORD *)v251 = *(_OWORD *)(v257.i64[1] + 32 * v257.i64[3] + 16);
        v38 = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3]);
        *((_QWORD *)&v250 + 1) = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3] + 8);
        *(_QWORD *)&v250 = v38;
        *(__m256i *)(v257.i64[1] + 32 * v257.i64[3]) = v236;
        if ( (_BYTE)v250 != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v250);
      }
      else
      {
        *(_QWORD *)&v247 = v259;
        v246 = v258;
        v245 = v257;
        v255 = v236;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v250,
          &v245,
          &v255);
      }
      *(__int128 *)((char *)v245.i128 + 7) = v243.i128[0];
      *(__int64 *)((char *)&v245.i64[2] + 7) = v243.i64[2];
      *(_BYTE *)a1 = 5;
      v39 = v245.i64[1];
      *(_QWORD *)(a1 + 1) = v245.i64[0];
      *(_OWORD *)(a1 + 9) = __PAIR128__(v245.u64[2], v39);
      result = *(__int64 *)((char *)&v245.i64[2] + 7);
      *(_QWORD *)(a1 + 24) = *(__int64 *)((char *)&v245.i64[2] + 7);
      *(_QWORD *)(a1 + 32) = 0;
      *(_QWORD *)(a1 + 72) = 0;
      *(_QWORD *)(a1 + 48) = 0;
      *(_QWORD *)(a1 + 56) = 0;
      return result;
    }
  }
  else
  {
    v240 = v249;
  }
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v229, v4, a3);
  v15 = v229.i64[0];
  if ( !__OFSUB__(-v229.i64[0], 1) )
  {
    v245.i128[0] = *(__int128 *)((char *)v229.i128 + 8);
    v245.i128[1] = 0u;
    v230 = v229.i64[1];
    v246 = *(__int128 *)((char *)v229.i128 + 8);
    serde_json::de::from_trait::h51e180b4bb6af5e0(&v256, &v245);
    v260 = v15;
    if ( v256.i8[0] == 6 )
    {
      v241 = a1;
      v224 = v256.i64[1];
      *(_QWORD *)&v253 = 0;
      v254 = 0;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v256, &v245);
      v24 = 6;
      v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
      if ( !v25 )
        goto LABEL_304;
      *(_WORD *)(v25 + 4) = 29556;
      *(_DWORD *)v25 = 1936291941;
      v243.i64[0] = 6;
      v243.i64[1] = v25;
      v243.i64[2] = 6;
      v261[0].i16[0] = 257;
      v26 = &v257;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v257, &v253, &v243);
      if ( v257.i64[0] == 0x8000000000000000LL )
      {
        v27 = v257.i64[1];
        v28 = 32 * v257.i64[3];
        *(_OWORD *)v251 = *(_OWORD *)(v257.i64[1] + 32 * v257.i64[3] + 16);
        v29 = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3]);
        *((_QWORD *)&v250 + 1) = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3] + 8);
        *(_QWORD *)&v250 = v29;
        *(_OWORD *)(v257.i64[1] + v28 + 16) = v261[0].i128[1];
        v30 = (__m256i *)v261[0].i64[1];
        *(_OWORD *)(v27 + v28) = v261[0].i128[0];
        if ( (_BYTE)v250 != 6 )
        {
          v26 = (__m256i *)&v250;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v250);
        }
      }
      else
      {
        *(_QWORD *)&v247 = v259;
        v246 = v258;
        v245 = v257;
        v255 = v261[0];
        v26 = (__m256i *)&v250;
        v30 = &v245;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v250,
          &v245,
          &v255);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v26, v30);
      v24 = 5;
      v67 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
      if ( !v67 )
        goto LABEL_304;
      *(_BYTE *)(v67 + 4) = 115;
      *(_DWORD *)v67 = 1702132066;
      v243.i64[0] = 5;
      v243.i64[1] = v67;
      v243.i64[2] = 5;
      v261[0].i8[0] = 2 * ((unsigned __int8)__src ^ 1);
      v261[0].i64[1] = 0;
      v261[0].i64[2] = v240;
      v68 = &v257;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v257, &v253, &v243);
      if ( v257.i64[0] == 0x8000000000000000LL )
      {
        v69 = v257.i64[1];
        v70 = 32 * v257.i64[3];
        *(_OWORD *)v251 = *(_OWORD *)(v257.i64[1] + 32 * v257.i64[3] + 16);
        v71 = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3]);
        *((_QWORD *)&v250 + 1) = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3] + 8);
        *(_QWORD *)&v250 = v71;
        *(_OWORD *)(v257.i64[1] + v70 + 16) = v261[0].i128[1];
        v72 = (__m256i *)v261[0].i64[1];
        *(_OWORD *)(v69 + v70) = v261[0].i128[0];
        if ( (_BYTE)v250 != 6 )
        {
          v68 = (__m256i *)&v250;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v250);
        }
      }
      else
      {
        *(_QWORD *)&v247 = v259;
        v246 = v258;
        v245 = v257;
        v255 = v261[0];
        v68 = (__m256i *)&v250;
        v72 = &v245;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v250,
          &v245,
          &v255);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v68, v72);
      v24 = 7;
      v73 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
      if ( !v73 )
        goto LABEL_304;
      *(_DWORD *)((char *)v73 + 3) = 1800365427;
      *v73 = 1936875888;
      v243.i64[0] = 7;
      v243.i64[1] = (__int64)v73;
      v243.i64[2] = 7;
      v261[0].i16[0] = 1;
      v74 = &v257;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v257, &v253, &v243);
      if ( v257.i64[0] == 0x8000000000000000LL )
      {
        v75 = v257.i64[1];
        v76 = 32 * v257.i64[3];
        *(_OWORD *)v251 = *(_OWORD *)(v257.i64[1] + 32 * v257.i64[3] + 16);
        v77 = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3]);
        *((_QWORD *)&v250 + 1) = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3] + 8);
        *(_QWORD *)&v250 = v77;
        *(_OWORD *)(v257.i64[1] + v76 + 16) = v261[0].i128[1];
        v78 = (__m256i *)v261[0].i64[1];
        *(_OWORD *)(v75 + v76) = v261[0].i128[0];
        if ( (_BYTE)v250 != 6 )
        {
          v74 = (__m256i *)&v250;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v250);
        }
      }
      else
      {
        *(_QWORD *)&v247 = v259;
        v246 = v258;
        v245 = v257;
        v255 = v261[0];
        v74 = (__m256i *)&v250;
        v78 = &v245;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v250,
          &v245,
          &v255);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v74, v78);
      v24 = 10;
      v79 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1);
      if ( !v79 )
LABEL_304:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v24);
      qmemcpy(v79, "parseError", 10);
      v243.i64[0] = 10;
      v243.i64[1] = (__int64)v79;
      v243.i64[2] = 10;
      v257.i64[0] = 0;
      *(__int128 *)((char *)v257.i128 + 8) = 1u;
      v245.i64[2] = 1610612768;
      v245.i64[0] = (__int64)&v257;
      v245.i64[1] = (__int64)&anon_92869709a5e99ce1936aa4e326b6c562_1257;
      if ( (unsigned __int8)_$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d(
                              &v224,
                              &v245,
                              v80,
                              v81,
                              v82,
                              v83) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_92869709a5e99ce1936aa4e326b6c562_1258,
          55,
          &v250,
          &anon_92869709a5e99ce1936aa4e326b6c562_1272,
          &anon_92869709a5e99ce1936aa4e326b6c562_1260);
      __src = (void *)v257.i64[1];
      v84 = v257.i64[0];
      v85 = v257.u64[2];
      if ( v257.i64[2] < 0 )
      {
        v86 = 0;
        goto LABEL_79;
      }
      if ( v257.i64[2] )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v224, &v245);
        v86 = 1;
        v87 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v85, 1);
        if ( !v87 )
LABEL_79:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v86, v85);
        v88 = v87;
      }
      else
      {
        v88 = 1;
      }
      memcpy((void *)v88, __src, v85);
      v261[0].i8[0] = 3;
      v261[0].i64[1] = v85;
      v261[0].i64[2] = v88;
      v261[0].i64[3] = v85;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v257, &v253, &v243);
      v103 = v241;
      if ( v257.i64[0] == 0x8000000000000000LL )
      {
        *(_OWORD *)v251 = *(_OWORD *)(v257.i64[1] + 32 * v257.i64[3] + 16);
        v104 = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3]);
        *((_QWORD *)&v250 + 1) = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3] + 8);
        *(_QWORD *)&v250 = v104;
        *(__m256i *)(v257.i64[1] + 32 * v257.i64[3]) = v261[0];
        if ( (_BYTE)v250 != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v250);
      }
      else
      {
        *(_QWORD *)&v247 = v259;
        v246 = v258;
        v245 = v257;
        v255 = v261[0];
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v250,
          &v245,
          &v255);
      }
      if ( v84 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v84, 1);
      *(__int128 *)((char *)v245.i128 + 7) = v253;
      *(__int64 *)((char *)&v245.i64[2] + 7) = v254;
      *(_BYTE *)v103 = 5;
      v105 = v245.i64[1];
      *(_QWORD *)(v103 + 1) = v245.i64[0];
      *(_OWORD *)(v103 + 9) = __PAIR128__(v245.u64[2], v105);
      *(_QWORD *)(v103 + 24) = *(__int64 *)((char *)&v245.i64[2] + 7);
      *(_QWORD *)(v103 + 32) = 0;
      *(_QWORD *)(v103 + 72) = 0;
      *(_QWORD *)(v103 + 48) = 0;
      *(_QWORD *)(v103 + 56) = 0;
      v106 = v260;
      result = core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&v224);
LABEL_289:
      if ( !v106 )
        return result;
      v97 = 1;
      v98 = v230;
      v96 = v106;
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v98, v96, v97);
    }
    v229 = v256;
    if ( v256.i8[0] == 5 )
    {
      v41 = v229.i64[1];
      if ( v229.i64[1] )
        v41 = v229.i64[3];
      v245.i128[0] = v229.i64[1] != 0;
      v245.i128[1] = *(__int128 *)((char *)v229.i128 + 8);
      v246 = v245.i128[0];
      v247 = *(__int128 *)((char *)v229.i128 + 8);
      v248 = v41;
      _$LT$alloc..collections..btree..set..BTreeSet$LT$T$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$T$GT$$GT$::from_iter::hcbfc85ac0a514b83(
        &v255,
        &v245);
      v42 = v255.i128[0];
      v43 = v255.i64[2];
      v44 = v255.i64[2];
      if ( !v255.i64[0] )
        v44 = 0;
      v245.i128[0] = v255.i64[0] != 0;
      v245.i128[1] = v255.i128[0];
      v246 = v245.i128[0];
      v247 = v255.i128[0];
      v248 = v44;
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h299d4457de76118e(
        &v250,
        &v245);
      if ( (_QWORD)v42 )
      {
        v245.i64[1] = 0;
        v245.i128[1] = v42;
        *((_QWORD *)&v246 + 1) = 0;
        v247 = v42;
        v45 = 1;
      }
      else
      {
        v45 = 0;
        v43 = 0;
      }
      v245.i64[0] = v45;
      *(_QWORD *)&v246 = v45;
      v248 = v43;
      alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h519b3df7b495235f(&v257, &v245);
      for ( i = v257.i64[0]; v257.i64[0]; i = v257.i64[0] )
      {
        v100 = *(_QWORD *)(i + 24 * v257.i64[2] + 8);
        if ( v100 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(i + 24 * v257.i64[2] + 16), v100, 1);
        alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h519b3df7b495235f(&v257, &v245);
      }
      v227 = v250;
      v228 = *(_QWORD *)v251;
    }
    else
    {
      *(_QWORD *)&v227 = 0;
      *((_QWORD *)&v227 + 1) = 8;
      v228 = 0;
    }
    v101 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
             &unk_1015FC659,
             14,
             &v229);
    if ( v101 )
    {
      switch ( *(_BYTE *)v101 )
      {
        case 0:
          v245.i8[0] = 0;
          break;
        case 1:
        case 2:
          v245.i128[1] = *(_OWORD *)(v101 + 16);
          v102 = *(_QWORD *)v101;
          v245.i64[1] = *(_QWORD *)(v101 + 8);
          v245.i64[0] = v102;
          break;
        case 3:
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v245.u32[2], v101 + 8);
          v245.i8[0] = 3;
          break;
        case 4:
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(
            &v245.u32[2],
            v101 + 8);
          v245.i8[0] = 4;
          break;
        case 5:
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4a2a5e30071939d1(
            &v245.u32[2],
            v101 + 8);
          v245.i8[0] = 5;
          break;
      }
      v243 = v245;
      v245.i8[0] = 0;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v245);
    }
    else
    {
      v245.i8[0] = 0;
      v243 = v245;
    }
    v107 = "models::";
    v108 = 6;
    v109 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("models::", 6, &v229);
    if ( !v109 || *(_BYTE *)v109 != 4 )
    {
      *(_QWORD *)&v250 = 0;
      v252 = 0;
      *(_QWORD *)v251 = 0;
      *(_QWORD *)&v251[8] = 0;
      v231 = 0;
      v232 = 0;
      v233 = 0;
LABEL_202:
      *(_QWORD *)&v237 = 0;
      v238 = 0;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v107, v108);
      v147 = 6;
      v148 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
      if ( !v148 )
        goto LABEL_301;
      *(_WORD *)(v148 + 4) = 29556;
      *(_DWORD *)v148 = 1936291941;
      *(_QWORD *)&v253 = 6;
      *((_QWORD *)&v253 + 1) = v148;
      v254 = 6;
      v235.i16[0] = 257;
      v256 = v235;
      v149 = &v257;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v257, &v237, &v253);
      if ( v257.i64[0] == 0x8000000000000000LL )
      {
        v150 = v257.i64[1];
        v151 = 32 * v257.i64[3];
        v255.i128[1] = *(_OWORD *)(v257.i64[1] + 32 * v257.i64[3] + 16);
        v152 = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3]);
        v255.i64[1] = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3] + 8);
        v255.i64[0] = v152;
        *(_OWORD *)(v257.i64[1] + v151 + 16) = v235.i128[1];
        v153 = (__m256i *)v235.i64[1];
        *(_OWORD *)(v150 + v151) = v235.i128[0];
        if ( v255.i8[0] != 6 )
        {
          v149 = &v255;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v255);
        }
      }
      else
      {
        *(_QWORD *)&v247 = v259;
        v246 = v258;
        v245 = v257;
        v261[0] = v235;
        v149 = &v255;
        v153 = &v245;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v255,
          &v245,
          v261);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v149, v153);
      v147 = 5;
      v154 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
      if ( !v154 )
        goto LABEL_301;
      *(_BYTE *)(v154 + 4) = 115;
      *(_DWORD *)v154 = 1702132066;
      *(_QWORD *)&v253 = 5;
      *((_QWORD *)&v253 + 1) = v154;
      v254 = 5;
      v256.i8[0] = 2 * ((unsigned __int8)__src ^ 1);
      v256.i64[1] = 0;
      v256.i64[2] = v240;
      v155 = &v257;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v257, &v237, &v253);
      if ( v257.i64[0] == 0x8000000000000000LL )
      {
        v156 = v257.i64[1];
        v157 = 32 * v257.i64[3];
        v255.i128[1] = *(_OWORD *)(v257.i64[1] + 32 * v257.i64[3] + 16);
        v158 = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3]);
        v255.i64[1] = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3] + 8);
        v255.i64[0] = v158;
        *(_OWORD *)(v257.i64[1] + v157 + 16) = v256.i128[1];
        v159 = (__m256i *)v256.i64[1];
        *(_OWORD *)(v156 + v157) = v256.i128[0];
        if ( v255.i8[0] != 6 )
        {
          v155 = &v255;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v255);
        }
      }
      else
      {
        *(_QWORD *)&v247 = v259;
        v246 = v258;
        v245 = v257;
        v261[0] = v256;
        v155 = &v255;
        v159 = &v245;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v255,
          &v245,
          v261);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v155, v159);
      v147 = 7;
      v160 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
      if ( !v160 )
        goto LABEL_301;
      *(_DWORD *)((char *)v160 + 3) = 1800365427;
      *v160 = 1936875888;
      v256.i64[0] = 7;
      v256.i64[1] = (__int64)v160;
      v256.i64[2] = 7;
      v161 = &v257;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v257, &v237, &v256);
      if ( v257.i64[0] == 0x8000000000000000LL )
      {
        v162 = v257.i64[1];
        v163 = 32 * v257.i64[3];
        v255.i128[1] = *(_OWORD *)(v257.i64[1] + 32 * v257.i64[3] + 16);
        v164 = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3]);
        v255.i64[1] = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3] + 8);
        v255.i64[0] = v164;
        *(_OWORD *)(v257.i64[1] + v163 + 16) = v235.i128[1];
        v165 = (__m256i *)v235.i64[1];
        *(_OWORD *)(v162 + v163) = v235.i128[0];
        if ( v255.i8[0] != 6 )
        {
          v161 = &v255;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v255);
        }
      }
      else
      {
        *(_QWORD *)&v247 = v259;
        v246 = v258;
        v245 = v257;
        v261[0] = v235;
        v161 = &v255;
        v165 = &v245;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v255,
          &v245,
          v261);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v161, v165);
      v147 = 10;
      v166 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1);
      if ( !v166 )
        goto LABEL_301;
      qmemcpy(v166, "rootFields", 10);
      *(_QWORD *)&v253 = 10;
      *((_QWORD *)&v253 + 1) = v166;
      v254 = 10;
      serde_core::ser::Serializer::collect_seq::h55f190a951fe3828(&v245, &v227);
      if ( v245.i8[0] == 6 )
      {
        v257.i64[0] = v245.i64[1];
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          "called `Result::unwrap()` on an `Err` valueErrorInvalidUncertainReadable",
          43,
          &v257,
          &off_101964900,
          &off_1019641A8);
      }
      v256 = v245;
      v167 = &v257;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v257, &v237, &v253);
      if ( v257.i64[0] == 0x8000000000000000LL )
      {
        v168 = v257.i64[1];
        v169 = 32 * v257.i64[3];
        v255.i128[1] = *(_OWORD *)(v257.i64[1] + 32 * v257.i64[3] + 16);
        v170 = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3]);
        v255.i64[1] = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3] + 8);
        v255.i64[0] = v170;
        *(_OWORD *)(v257.i64[1] + v169 + 16) = v256.i128[1];
        v171 = (__m256i *)v256.i64[1];
        *(_OWORD *)(v168 + v169) = v256.i128[0];
        if ( v255.i8[0] != 6 )
        {
          v167 = &v255;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v255);
        }
      }
      else
      {
        *(_QWORD *)&v247 = v259;
        v246 = v258;
        v245 = v257;
        v261[0] = v256;
        v167 = &v255;
        v171 = &v245;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v255,
          &v245,
          v261);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v167, v171);
      v147 = 13;
      v172 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
      if ( !v172 )
        goto LABEL_301;
      qmemcpy(v172, "clientVersion", 13);
      *(_QWORD *)&v253 = 13;
      *((_QWORD *)&v253 + 1) = v172;
      v254 = 13;
      serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
        &v245,
        &v243);
      if ( v245.i8[0] == 6 )
      {
        v257.i64[0] = v245.i64[1];
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          "called `Result::unwrap()` on an `Err` valueErrorInvalidUncertainReadable",
          43,
          &v257,
          &off_101964900,
          &off_1019641A8);
      }
      v256 = v245;
      v173 = &v257;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v257, &v237, &v253);
      if ( v257.i64[0] == 0x8000000000000000LL )
      {
        v174 = v257.i64[1];
        v175 = 32 * v257.i64[3];
        v255.i128[1] = *(_OWORD *)(v257.i64[1] + 32 * v257.i64[3] + 16);
        v176 = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3]);
        v255.i64[1] = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3] + 8);
        v255.i64[0] = v176;
        *(_OWORD *)(v257.i64[1] + v175 + 16) = v256.i128[1];
        v177 = (__m256i *)v256.i64[1];
        *(_OWORD *)(v174 + v175) = v256.i128[0];
        if ( v255.i8[0] != 6 )
        {
          v173 = &v255;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v255);
        }
      }
      else
      {
        *(_QWORD *)&v247 = v259;
        v246 = v258;
        v245 = v257;
        v261[0] = v256;
        v173 = &v255;
        v177 = &v245;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v255,
          &v245,
          v261);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v173, v177);
      v147 = 11;
      v178 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
      if ( !v178 )
        goto LABEL_301;
      qmemcpy(v178, "modelsCount", 11);
      *(_QWORD *)&v253 = 11;
      *((_QWORD *)&v253 + 1) = v178;
      v254 = 11;
      v256.i8[0] = 2;
      v256.i64[1] = 0;
      v256.i64[2] = v231;
      v179 = &v257;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v257, &v237, &v253);
      if ( v257.i64[0] == 0x8000000000000000LL )
      {
        v180 = v257.i64[1];
        v181 = 32 * v257.i64[3];
        v255.i128[1] = *(_OWORD *)(v257.i64[1] + 32 * v257.i64[3] + 16);
        v182 = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3]);
        v255.i64[1] = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3] + 8);
        v255.i64[0] = v182;
        *(_OWORD *)(v257.i64[1] + v181 + 16) = v256.i128[1];
        v183 = (__m256i *)v256.i64[1];
        *(_OWORD *)(v180 + v181) = v256.i128[0];
        if ( v255.i8[0] != 6 )
        {
          v179 = &v255;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v255);
        }
      }
      else
      {
        *(_QWORD *)&v247 = v259;
        v246 = v258;
        v245 = v257;
        v261[0] = v256;
        v179 = &v255;
        v183 = &v245;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v255,
          &v245,
          v261);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v179, v183);
      v147 = 16;
      v184 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1);
      if ( !v184 )
        goto LABEL_301;
      qmemcpy(v184, "modelObjectCount", 16);
      *(_QWORD *)&v253 = 16;
      *((_QWORD *)&v253 + 1) = v184;
      v254 = 16;
      v256.i8[0] = 2;
      v256.i64[1] = 0;
      v256.i64[2] = v233;
      v185 = &v257;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v257, &v237, &v253);
      if ( v257.i64[0] == 0x8000000000000000LL )
      {
        v186 = v257.i64[1];
        v187 = 32 * v257.i64[3];
        v255.i128[1] = *(_OWORD *)(v257.i64[1] + 32 * v257.i64[3] + 16);
        v188 = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3]);
        v255.i64[1] = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3] + 8);
        v255.i64[0] = v188;
        *(_OWORD *)(v257.i64[1] + v187 + 16) = v256.i128[1];
        v189 = (__m256i *)v256.i64[1];
        *(_OWORD *)(v186 + v187) = v256.i128[0];
        if ( v255.i8[0] != 6 )
        {
          v185 = &v255;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v255);
        }
      }
      else
      {
        *(_QWORD *)&v247 = v259;
        v246 = v258;
        v245 = v257;
        v261[0] = v256;
        v185 = &v255;
        v189 = &v245;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v255,
          &v245,
          v261);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v185, v189);
      v147 = 19;
      v190 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1);
      if ( !v190 )
        goto LABEL_301;
      qmemcpy(v190, "nonObjectModelCount", 19);
      *(_QWORD *)&v253 = 19;
      *((_QWORD *)&v253 + 1) = v190;
      v191 = 0;
      if ( v231 >= v233 )
        v191 = v231 - v233;
      v254 = 19;
      v256.i8[0] = 2;
      v256.i64[1] = 0;
      v256.i64[2] = v191;
      v192 = &v257;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v257, &v237, &v253);
      if ( v257.i64[0] == 0x8000000000000000LL )
      {
        v193 = v257.i64[1];
        v194 = 32 * v257.i64[3];
        v255.i128[1] = *(_OWORD *)(v257.i64[1] + 32 * v257.i64[3] + 16);
        v195 = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3]);
        v255.i64[1] = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3] + 8);
        v255.i64[0] = v195;
        *(_OWORD *)(v257.i64[1] + v194 + 16) = v256.i128[1];
        v196 = (__m256i *)v256.i64[1];
        *(_OWORD *)(v193 + v194) = v256.i128[0];
        if ( v255.i8[0] != 6 )
        {
          v192 = &v255;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v255);
        }
      }
      else
      {
        *(_QWORD *)&v247 = v259;
        v246 = v258;
        v245 = v257;
        v261[0] = v256;
        v192 = &v255;
        v196 = &v245;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v255,
          &v245,
          v261);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v192, v196);
      v147 = 11;
      v197 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
      if ( !v197 )
        goto LABEL_301;
      qmemcpy(v197, "modelFields", 11);
      v224 = 11;
      v225 = v197;
      v226 = 11;
      v198 = v250;
      if ( (_QWORD)v250 )
        v198 = *(_QWORD *)v251;
      v245.i128[0] = (_QWORD)v250 != 0;
      v245.i128[1] = v250;
      v246 = v245.i128[0];
      v247 = v250;
      v248 = v198;
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h299d4457de76118e(
        &v253,
        &v245);
      serde_core::ser::Serializer::collect_seq::h55f190a951fe3828(&v245, &v253);
      if ( v245.i8[0] == 6 )
      {
        v257.i64[0] = v245.i64[1];
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          "called `Result::unwrap()` on an `Err` valueErrorInvalidUncertainReadable",
          43,
          &v257,
          &off_101964900,
          &off_1019641A8);
      }
      v256 = v245;
      v199 = &v257;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v257, &v237, &v224);
      if ( v257.i64[0] == 0x8000000000000000LL )
      {
        v200 = v257.i64[1];
        v201 = 32 * v257.i64[3];
        v255.i128[1] = *(_OWORD *)(v257.i64[1] + 32 * v257.i64[3] + 16);
        v202 = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3]);
        v255.i64[1] = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3] + 8);
        v255.i64[0] = v202;
        *(_OWORD *)(v257.i64[1] + v201 + 16) = v256.i128[1];
        v203 = v256.i64[1];
        *(_OWORD *)(v200 + v201) = v256.i128[0];
        if ( v255.i8[0] != 6 )
        {
          v199 = &v255;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v255);
        }
      }
      else
      {
        *(_QWORD *)&v247 = v259;
        v246 = v258;
        v245 = v257;
        v261[0] = v256;
        v199 = &v255;
        v203 = (__int64)&v245;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v255,
          &v245,
          v261);
      }
      v204 = v254;
      if ( v254 )
      {
        v205 = (__m256i **)(*((_QWORD *)&v253 + 1) + 8LL);
        do
        {
          v203 = (__int64)*(v205 - 1);
          if ( v203 )
          {
            v199 = *v205;
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v205, v203, 1);
          }
          v205 += 3;
          --v204;
        }
        while ( v204 );
      }
      if ( (_QWORD)v253 )
      {
        v199 = *((__m256i **)&v253 + 1);
        v203 = 24 * v253;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v253 + 1), 24 * v253, 8);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v199, v203);
      v147 = 15;
      v206 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1);
      if ( !v206 )
        goto LABEL_301;
      qmemcpy(v206, "relayModelCount", 15);
      *(_QWORD *)&v253 = 15;
      *((_QWORD *)&v253 + 1) = v206;
      v254 = 15;
      v256.i8[0] = 2;
      v256.i64[1] = 0;
      v256.i64[2] = v232;
      v207 = &v257;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v257, &v237, &v253);
      if ( v257.i64[0] == 0x8000000000000000LL )
      {
        v208 = v257.i64[1];
        v209 = 32 * v257.i64[3];
        v255.i128[1] = *(_OWORD *)(v257.i64[1] + 32 * v257.i64[3] + 16);
        v210 = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3]);
        v255.i64[1] = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3] + 8);
        v255.i64[0] = v210;
        *(_OWORD *)(v257.i64[1] + v209 + 16) = v256.i128[1];
        v211 = (__m256i *)v256.i64[1];
        *(_OWORD *)(v208 + v209) = v256.i128[0];
        if ( v255.i8[0] != 6 )
        {
          v207 = &v255;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v255);
        }
      }
      else
      {
        *(_QWORD *)&v247 = v259;
        v246 = v258;
        v245 = v257;
        v261[0] = v256;
        v207 = &v255;
        v211 = &v245;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v255,
          &v245,
          v261);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v207, v211);
      v147 = 16;
      v212 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1);
      if ( !v212 )
LABEL_301:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v147);
      qmemcpy(v212, "relayModelFields", 16);
      v224 = 16;
      v225 = v212;
      v226 = 16;
      v213 = *(_QWORD *)&v251[8];
      if ( *(_QWORD *)&v251[8] )
        v213 = v252;
      v245.i128[0] = *(_QWORD *)&v251[8] != 0;
      v245.i128[1] = *(_OWORD *)&v251[8];
      v246 = v245.i128[0];
      v247 = *(_OWORD *)&v251[8];
      v248 = v213;
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h299d4457de76118e(
        &v253,
        &v245);
      serde_core::ser::Serializer::collect_seq::h55f190a951fe3828(&v245, &v253);
      if ( v245.i8[0] == 6 )
      {
        v257.i64[0] = v245.i64[1];
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          "called `Result::unwrap()` on an `Err` valueErrorInvalidUncertainReadable",
          43,
          &v257,
          &off_101964900,
          &off_1019641A8);
      }
      v256 = v245;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v257, &v237, &v224);
      if ( v257.i64[0] == 0x8000000000000000LL )
      {
        v255.i128[1] = *(_OWORD *)(v257.i64[1] + 32 * v257.i64[3] + 16);
        v214 = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3]);
        v255.i64[1] = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3] + 8);
        v255.i64[0] = v214;
        *(__m256i *)(v257.i64[1] + 32 * v257.i64[3]) = v256;
        if ( v255.i8[0] != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v255);
      }
      else
      {
        *(_QWORD *)&v247 = v259;
        v246 = v258;
        v245 = v257;
        v261[0] = v256;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v255,
          &v245,
          v261);
      }
      v215 = v254;
      if ( v254 )
      {
        v216 = (_QWORD *)(*((_QWORD *)&v253 + 1) + 8LL);
        do
        {
          v217 = *(v216 - 1);
          if ( v217 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v216, v217, 1);
          v216 += 3;
          --v215;
        }
        while ( v215 );
      }
      if ( (_QWORD)v253 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v253 + 1), 24 * v253, 8);
      *(__int128 *)((char *)v245.i128 + 7) = v237;
      *(__int64 *)((char *)&v245.i64[2] + 7) = v238;
      *(_QWORD *)(a1 + 72) = v252;
      *(_OWORD *)(a1 + 56) = *(_OWORD *)&v251[8];
      *(_QWORD *)(a1 + 48) = *(_QWORD *)v251;
      *(_OWORD *)(a1 + 32) = v250;
      *(_BYTE *)a1 = 5;
      v218 = v245.i64[1];
      *(_QWORD *)(a1 + 1) = v245.i64[0];
      *(_OWORD *)(a1 + 9) = __PAIR128__(v245.u64[2], v218);
      *(_QWORD *)(a1 + 24) = *(__int64 *)((char *)&v245.i64[2] + 7);
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v243);
      v219 = v228;
      if ( v228 )
      {
        v220 = (_QWORD *)(*((_QWORD *)&v227 + 1) + 8LL);
        do
        {
          v221 = *(v220 - 1);
          if ( v221 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v220, v221, 1);
          v220 += 3;
          --v219;
        }
        while ( v219 );
      }
      if ( (_QWORD)v227 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v227 + 1), 24 * v227, 8);
      v106 = v260;
      result = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v229);
      goto LABEL_289;
    }
    v231 = *(_QWORD *)(v109 + 24);
    *(_QWORD *)&v250 = 0;
    v252 = 0;
    *(_QWORD *)v251 = 0;
    *(_QWORD *)&v251[8] = 0;
    v110 = *(_BYTE **)(v109 + 16);
    v111 = &v110[32 * *(_QWORD *)(v109 + 24)];
    v232 = 0;
    v233 = 0;
    v234 = v111;
    for ( j = v110; ; j = v239 )
    {
      do
      {
LABEL_122:
        if ( j == v111 )
          goto LABEL_202;
        v113 = j + 32;
        v114 = *j == 5;
        j += 32;
      }
      while ( !v114 );
      ++v233;
      v115 = *((_QWORD *)v113 - 3);
      if ( !v115 )
        goto LABEL_199;
      v116 = *((_QWORD *)v113 - 1);
      v239 = v113;
      if ( v116 )
        break;
LABEL_154:
      v241 = a1;
      v223 = *((_QWORD *)v113 - 2);
LABEL_155:
      v127 = v115 + 360;
      v128 = v115 - 8;
      v222 = *(unsigned __int16 *)(v115 + 626);
      v129 = 3LL * (unsigned int)(8 * v222);
      v130 = -1;
      do
      {
        if ( !v129 )
        {
          v130 = v222;
LABEL_165:
          v111 = v234;
          if ( v223 )
          {
            --v223;
            v115 = *(_QWORD *)(v115 + 8 * v130 + 632);
            goto LABEL_155;
          }
          a1 = v241;
          j = v239;
          goto LABEL_122;
        }
        v242 = v127 + 24;
        v108 = *(_QWORD *)(v127 + 8);
        v131 = *(_QWORD *)(v127 + 16);
        v132 = v131 - 4;
        if ( v131 >= 4 )
          v131 = 4;
        v133 = -(__int64)v132;
        v107 = (char *)&unk_1015E3B3C;
        v134 = memcmp(&unk_1015E3B3C, (const void *)v108, v131);
        if ( v134 )
          v133 = v134;
        v135 = (v133 > 0) - (v133 < 0);
        v128 += 32LL;
        ++v130;
        v129 -= 24;
        v127 = v242;
      }
      while ( v135 == 1 );
      if ( v135 )
        goto LABEL_165;
      a1 = v241;
      v111 = v234;
      v113 = v239;
      if ( *(_BYTE *)(v128 - 24) != 3 )
        goto LABEL_199;
      v108 = 2;
      v107 = "::";
      v136 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
               "::",
               2u,
               *(void **)(v128 - 8));
      v113 = v239;
      if ( !v136 )
        goto LABEL_199;
      ++v232;
      v137 = *((_QWORD *)v239 - 3);
      if ( !v137 || !*((_QWORD *)v239 - 1) )
        goto LABEL_199;
      v242 = *((_QWORD *)v239 - 1);
      v138 = *((_QWORD *)v239 - 2);
      v139 = 0;
      do
      {
        if ( !v139 )
        {
          if ( v138 )
          {
            v139 = v137;
            if ( (v138 & 7) != 0 )
            {
              v140 = 0;
              do
              {
                v139 = *(_QWORD *)(v139 + 632);
                ++v140;
              }
              while ( (v138 & 7) != v140 );
              v141 = v138 - v140;
            }
            else
            {
              v141 = v138;
            }
            if ( v138 >= 8 )
            {
              do
              {
                v139 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v139 + 632) + 632LL)
                                                                                             + 632LL)
                                                                                 + 632LL)
                                                                     + 632LL)
                                                         + 632LL)
                                             + 632LL)
                                 + 632LL);
                v141 -= 8LL;
              }
              while ( v141 );
            }
          }
          else
          {
            v139 = v137;
          }
          v137 = 0;
          v138 = 0;
        }
        if ( v138 >= *(unsigned __int16 *)(v139 + 626) )
        {
          do
          {
            v142 = *(_QWORD *)(v139 + 352);
            if ( !v142 )
              core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_837);
            ++v137;
            v143 = *(unsigned __int16 *)(v139 + 624);
            v139 = *(_QWORD *)(v139 + 352);
          }
          while ( (unsigned __int16)v143 >= *(_WORD *)(v142 + 626) );
        }
        else
        {
          v142 = v139;
          v143 = v138;
        }
        if ( v137 )
        {
          v144 = v142 + 8 * v143 + 640;
          if ( (v137 & 7) != 0 )
          {
            v145 = 0;
            do
            {
              v139 = *(_QWORD *)v144;
              v144 = *(_QWORD *)v144 + 632LL;
              ++v145;
            }
            while ( (v137 & 7) != v145 );
            v146 = v137 - v145;
          }
          else
          {
            v146 = v137;
          }
          if ( v137 >= 8 )
          {
            do
            {
              v139 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v144 + 632LL)
                                                                                           + 632LL)
                                                                               + 632LL)
                                                                   + 632LL)
                                                       + 632LL)
                                           + 632LL)
                               + 632LL);
              v144 = v139 + 632;
              v146 -= 8LL;
            }
            while ( v146 );
          }
          v138 = 0;
        }
        else
        {
          v138 = v143 + 1;
          v139 = v142;
        }
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
          &v245,
          v142 + 24 * v143 + 360);
        v107 = &v251[8];
        v108 = (__int64)&v245;
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h5131593e901fe385(&v251[8], &v245);
        v137 = 0;
        --v242;
      }
      while ( v242 );
    }
    v117 = a1;
    v118 = *((_QWORD *)v113 - 2);
    v119 = 0;
    while ( 1 )
    {
      if ( v119 )
      {
        if ( v118 < *(unsigned __int16 *)(v119 + 626) )
          goto LABEL_129;
        goto LABEL_140;
      }
      if ( !v118 )
      {
        v119 = v115;
        goto LABEL_139;
      }
      v119 = v115;
      if ( (v118 & 7) == 0 )
        break;
      v122 = 0;
      do
      {
        v119 = *(_QWORD *)(v119 + 632);
        ++v122;
      }
      while ( (v118 & 7) != v122 );
      v123 = v118 - v122;
      if ( v118 >= 8 )
        goto LABEL_138;
LABEL_139:
      v115 = 0;
      v118 = 0;
      if ( *(_WORD *)(v119 + 626) )
      {
LABEL_129:
        v120 = v119;
        v121 = v118;
        goto LABEL_142;
      }
      do
      {
LABEL_140:
        v120 = *(_QWORD *)(v119 + 352);
        if ( !v120 )
          core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_837);
        ++v115;
        v121 = *(unsigned __int16 *)(v119 + 624);
        v119 = *(_QWORD *)(v119 + 352);
      }
      while ( (unsigned __int16)v121 >= *(_WORD *)(v120 + 626) );
LABEL_142:
      if ( v115 )
      {
        v124 = v120 + 8 * v121 + 640;
        if ( (v115 & 7) != 0 )
        {
          v125 = 0;
          do
          {
            v119 = *(_QWORD *)v124;
            v124 = *(_QWORD *)v124 + 632LL;
            ++v125;
          }
          while ( (v115 & 7) != v125 );
          v126 = v115 - v125;
          if ( v115 >= 8 )
          {
            do
            {
LABEL_150:
              v119 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v124 + 632LL)
                                                                                           + 632LL)
                                                                               + 632LL)
                                                                   + 632LL)
                                                       + 632LL)
                                           + 632LL)
                               + 632LL);
              v124 = v119 + 632;
              v126 -= 8LL;
            }
            while ( v126 );
            v118 = 0;
            goto LABEL_152;
          }
        }
        else
        {
          v126 = v115;
          if ( v115 >= 8 )
            goto LABEL_150;
        }
        v118 = 0;
      }
      else
      {
        v118 = v121 + 1;
        v119 = v120;
      }
LABEL_152:
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
        &v245,
        v120 + 24 * v121 + 360);
      v107 = (char *)&v250;
      v108 = (__int64)&v245;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h5131593e901fe385(&v250, &v245);
      v115 = 0;
      if ( !--v116 )
      {
        v113 = v239;
        v115 = *((_QWORD *)v239 - 3);
        a1 = v117;
        v111 = v234;
        if ( v115 )
          goto LABEL_154;
LABEL_199:
        j = v113;
        goto LABEL_122;
      }
    }
    v123 = v118;
    if ( v118 < 8 )
      goto LABEL_139;
    do
    {
LABEL_138:
      v119 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v119 + 632)
                                                                                               + 632LL)
                                                                                   + 632LL)
                                                                       + 632LL)
                                                           + 632LL)
                                               + 632LL)
                                   + 632LL)
                       + 632LL);
      v123 -= 8LL;
    }
    while ( v123 );
    goto LABEL_139;
  }
  v241 = a1;
  v16 = v229.i64[1];
  *(_QWORD *)&v253 = v229.i64[1];
  v243.i64[0] = 0;
  v243.i64[2] = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v229, v4);
  v17 = 6;
  v18 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
  if ( !v18 )
    goto LABEL_302;
  *(_WORD *)(v18 + 4) = 29556;
  *(_DWORD *)v18 = 1936291941;
  v256.i64[0] = 6;
  v256.i64[1] = v18;
  v256.i64[2] = 6;
  v261[0].i16[0] = 257;
  v19 = &v257;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v257, &v243, &v256);
  if ( v257.i64[0] == 0x8000000000000000LL )
  {
    v20 = v257.i64[1];
    v21 = 32 * v257.i64[3];
    *(_OWORD *)v251 = *(_OWORD *)(v257.i64[1] + 32 * v257.i64[3] + 16);
    v22 = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3]);
    *((_QWORD *)&v250 + 1) = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3] + 8);
    *(_QWORD *)&v250 = v22;
    *(_OWORD *)(v257.i64[1] + v21 + 16) = v261[0].i128[1];
    v23 = (__m256i *)v261[0].i64[1];
    *(_OWORD *)(v20 + v21) = v261[0].i128[0];
    if ( (_BYTE)v250 != 6 )
    {
      v19 = (__m256i *)&v250;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v250);
    }
  }
  else
  {
    *(_QWORD *)&v247 = v259;
    v246 = v258;
    v245 = v257;
    v255 = v261[0];
    v19 = (__m256i *)&v250;
    v23 = &v245;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v250,
      &v245,
      &v255);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19, v23);
  v17 = 5;
  v46 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
  if ( !v46 )
    goto LABEL_302;
  *(_BYTE *)(v46 + 4) = 115;
  *(_DWORD *)v46 = 1702132066;
  v256.i64[0] = 5;
  v256.i64[1] = v46;
  v256.i64[2] = 5;
  v261[0].i8[0] = 2 * ((unsigned __int8)__src ^ 1);
  v261[0].i64[1] = 0;
  v261[0].i64[2] = v240;
  v47 = &v257;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v257, &v243, &v256);
  if ( v257.i64[0] == 0x8000000000000000LL )
  {
    v48 = v257.i64[1];
    v49 = 32 * v257.i64[3];
    *(_OWORD *)v251 = *(_OWORD *)(v257.i64[1] + 32 * v257.i64[3] + 16);
    v50 = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3]);
    *((_QWORD *)&v250 + 1) = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3] + 8);
    *(_QWORD *)&v250 = v50;
    *(_OWORD *)(v257.i64[1] + v49 + 16) = v261[0].i128[1];
    v51 = (__m256i *)v261[0].i64[1];
    *(_OWORD *)(v48 + v49) = v261[0].i128[0];
    if ( (_BYTE)v250 != 6 )
    {
      v47 = (__m256i *)&v250;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v250);
    }
  }
  else
  {
    *(_QWORD *)&v247 = v259;
    v246 = v258;
    v245 = v257;
    v255 = v261[0];
    v47 = (__m256i *)&v250;
    v51 = &v245;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v250,
      &v245,
      &v255);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v47, v51);
  v17 = 7;
  v52 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v52 )
    goto LABEL_302;
  *(_DWORD *)((char *)v52 + 3) = 1800365427;
  *v52 = 1936875888;
  v256.i64[0] = 7;
  v256.i64[1] = (__int64)v52;
  v256.i64[2] = 7;
  v261[0].i16[0] = 1;
  v53 = &v257;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v257, &v243, &v256);
  if ( v257.i64[0] == 0x8000000000000000LL )
  {
    v54 = v257.i64[1];
    v55 = 32 * v257.i64[3];
    *(_OWORD *)v251 = *(_OWORD *)(v257.i64[1] + 32 * v257.i64[3] + 16);
    v56 = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3]);
    *((_QWORD *)&v250 + 1) = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3] + 8);
    *(_QWORD *)&v250 = v56;
    *(_OWORD *)(v257.i64[1] + v55 + 16) = v261[0].i128[1];
    v57 = (__m256i *)v261[0].i64[1];
    *(_OWORD *)(v54 + v55) = v261[0].i128[0];
    if ( (_BYTE)v250 != 6 )
    {
      v53 = (__m256i *)&v250;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v250);
    }
  }
  else
  {
    *(_QWORD *)&v247 = v259;
    v246 = v258;
    v245 = v257;
    v255 = v261[0];
    v53 = (__m256i *)&v250;
    v57 = &v245;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v250,
      &v245,
      &v255);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v53, v57);
  v17 = 9;
  v58 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
  if ( !v58 )
LABEL_302:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v17);
  *(_QWORD *)v58 = 0x6F72724564616572LL;
  *(_BYTE *)(v58 + 8) = 114;
  v256.i64[0] = 9;
  v256.i64[1] = v58;
  v256.i64[2] = 9;
  v257.i64[0] = 0;
  *(__int128 *)((char *)v257.i128 + 8) = 1u;
  v245.i64[2] = 1610612768;
  v245.i64[0] = (__int64)&v257;
  v245.i64[1] = (__int64)&anon_92869709a5e99ce1936aa4e326b6c562_1257;
  if ( (unsigned __int8)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0(
                          &v253,
                          &v245) )
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      &anon_92869709a5e99ce1936aa4e326b6c562_1258,
      55,
      &v250,
      &anon_92869709a5e99ce1936aa4e326b6c562_1272,
      &anon_92869709a5e99ce1936aa4e326b6c562_1260);
  __src = (void *)v257.i64[1];
  v59 = v257.i64[0];
  v60 = v257.u64[2];
  v242 = v16;
  if ( v257.i64[2] < 0 )
  {
    v61 = 0;
    goto LABEL_53;
  }
  if ( v257.i64[2] )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v253, &v245);
    v61 = 1;
    v65 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v60, 1);
    if ( !v65 )
LABEL_53:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v61, v60);
    v66 = v65;
  }
  else
  {
    v66 = 1;
  }
  memcpy((void *)v66, __src, v60);
  v261[0].i8[0] = 3;
  v261[0].i64[1] = v60;
  v261[0].i64[2] = v66;
  v261[0].i64[3] = v60;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v257, &v243, &v256);
  v89 = v241;
  if ( v257.i64[0] == 0x8000000000000000LL )
  {
    *(_OWORD *)v251 = *(_OWORD *)(v257.i64[1] + 32 * v257.i64[3] + 16);
    v90 = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3]);
    *((_QWORD *)&v250 + 1) = *(_QWORD *)(v257.i64[1] + 32 * v257.i64[3] + 8);
    *(_QWORD *)&v250 = v90;
    *(__m256i *)(v257.i64[1] + 32 * v257.i64[3]) = v261[0];
    if ( (_BYTE)v250 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v250);
  }
  else
  {
    *(_QWORD *)&v247 = v259;
    v246 = v258;
    v245 = v257;
    v255 = v261[0];
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v250,
      &v245,
      &v255);
  }
  if ( v59 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v59, 1);
  *(__int128 *)((char *)v245.i128 + 7) = v243.i128[0];
  *(__int64 *)((char *)&v245.i64[2] + 7) = v243.i64[2];
  *(_BYTE *)v89 = 5;
  v91 = v245.i64[1];
  *(_QWORD *)(v89 + 1) = v245.i64[0];
  *(_OWORD *)(v89 + 9) = __PAIR128__(v245.u64[2], v91);
  *(_QWORD *)(v89 + 24) = *(__int64 *)((char *)&v245.i64[2] + 7);
  *(_QWORD *)(v89 + 32) = 0;
  *(_QWORD *)(v89 + 72) = 0;
  *(_QWORD *)(v89 + 48) = 0;
  *(_QWORD *)(v89 + 56) = 0;
  result = v242 & 3;
  if ( (_DWORD)result == 1 )
  {
    v92 = v242 - 1;
    v93 = *(_QWORD *)(v242 - 1);
    v94 = *(_QWORD *)(v242 + 7);
    if ( *(_QWORD *)v94 )
      (*(void (__fastcall **)(_QWORD))v94)(*(_QWORD *)(v242 - 1));
    v95 = *(_QWORD *)(v94 + 8);
    if ( v95 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v93, v95, *(_QWORD *)(v94 + 16));
    v96 = 24;
    v97 = 8;
    v98 = v92;
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v98, v96, v97);
  }
  return result;
}
