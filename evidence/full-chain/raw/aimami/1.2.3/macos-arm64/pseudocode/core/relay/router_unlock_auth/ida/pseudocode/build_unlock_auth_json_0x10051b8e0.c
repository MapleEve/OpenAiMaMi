// __ZN13codexmate_lib4core5relay18router_unlock_auth22build_unlock_auth_json @ 0x10051b8e0 | 基线 same-set
// [FULL decompile]

__int64 __fastcall codexmate_lib::core::relay::router_unlock_auth::build_unlock_auth_json::h2c2824a99fd1a741(
        __int64 a1,
        unsigned __int64 a2)
{
  __int64 v2; // r15
  void *v3; // rax
  void *v4; // rax
  __int64 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 *v10; // rsi
  void *v11; // rax
  void *v12; // rax
  __int64 *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 *v18; // rsi
  void *v19; // rax
  void *v20; // rax
  __int64 *v21; // rdi
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 *v26; // rsi
  _DWORD *v27; // rax
  void *v28; // rax
  __int64 *v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rcx
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 *v34; // rsi
  void *v35; // rax
  _DWORD *v36; // rax
  __int64 *v37; // rdi
  __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rdx
  __int64 *v42; // rsi
  __int64 v43; // r12
  __int64 v44; // rax
  void *v45; // rax
  __int64 *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 *v51; // rsi
  __int64 v52; // rax
  void *v53; // rax
  __int64 *v54; // rdi
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rdx
  __int64 *v59; // rsi
  __int64 v60; // rax
  void *v61; // rax
  __int64 *v62; // rdi
  __int64 v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 *v67; // rsi
  __int64 v68; // rax
  void *v69; // rax
  __int64 *v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rdx
  __int64 *v75; // rsi
  __int64 *v76; // rax
  void *v77; // rax
  __int64 *v78; // rdi
  __int64 v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rdx
  __int64 *v83; // rsi
  __int64 v84; // rax
  __int64 v85; // r14
  __int64 *v86; // rdi
  __int64 v87; // rax
  __int64 v88; // rcx
  __int64 v89; // rdx
  __int64 v90; // rdx
  __int64 *v91; // rsi
  __int64 v92; // rax
  __int64 *v93; // rdi
  __int64 v94; // rax
  __int64 v95; // rcx
  __int64 v96; // rdx
  __int64 v97; // rdx
  __int64 *v98; // rsi
  void *v99; // rax
  __int64 v100; // rax
  __int64 v101; // rcx
  __int64 v102; // rdx
  __int64 v103; // rdx
  __int64 *v104; // rsi
  __int64 v105; // r15
  __int64 v106; // rax
  void *v107; // rax
  __int64 *v108; // rdi
  __int64 v109; // rax
  __int64 v110; // rcx
  __int64 v111; // rdx
  __int64 v112; // rdx
  __int64 *v113; // rsi
  __int64 v114; // rax
  void *v115; // rax
  __int64 *v116; // rdi
  __int64 v117; // rax
  __int64 v118; // rcx
  __int64 v119; // rdx
  __int64 v120; // rdx
  __int64 *v121; // rsi
  __int64 v122; // rax
  void *v123; // rax
  __int64 *v124; // rdi
  __int64 v125; // rax
  __int64 v126; // rcx
  __int64 v127; // rdx
  __int64 v128; // rdx
  __int64 *v129; // rsi
  __int64 v130; // rax
  __int64 *v131; // rdi
  __int64 v132; // rax
  __int64 v133; // rcx
  __int64 v134; // rdx
  __int64 v135; // rdx
  __int64 *v136; // rsi
  __int64 v137; // rax
  __int64 *v138; // rdi
  __int64 v139; // rax
  __int64 v140; // rcx
  __int64 v141; // rdx
  __int64 v142; // rdx
  __int64 *v143; // rsi
  void *v144; // rax
  __int64 *v145; // rdi
  __int64 v146; // rax
  __int64 v147; // rcx
  __int64 v148; // rdx
  __int64 v149; // rdx
  __int64 *v150; // rsi
  void *v151; // rax
  __int64 v152; // r12
  _BYTE *v153; // rax
  void *v154; // rax
  __int64 *v155; // rdi
  __int64 v156; // rax
  __int64 v157; // rcx
  __int64 v158; // rdx
  __int64 v159; // rdx
  __int64 *v160; // rsi
  _DWORD *v161; // rax
  void *v162; // rax
  __int64 v163; // rax
  __int64 v164; // rcx
  __int64 v165; // rdx
  __int64 v166; // rdx
  __int64 *v167; // rdi
  __int64 v168; // rax
  __int64 v169; // rcx
  __int64 v170; // rdx
  __int64 v171; // rdx
  __int64 *v172; // rsi
  __int64 v173; // r15
  __int64 v174; // rax
  _DWORD *v175; // rax
  __int64 *v176; // rdi
  __int64 v177; // rax
  __int64 v178; // rcx
  __int64 v179; // rdx
  __int64 v180; // rdx
  __int64 *v181; // rsi
  void *v182; // rax
  __int64 *v183; // rdi
  __int64 v184; // rax
  __int64 v185; // rcx
  __int64 v186; // rdx
  __int64 v187; // rdx
  __int64 *v188; // rsi
  __int64 v189; // rax
  _QWORD *v190; // rax
  void *v191; // r15
  size_t v192; // r13
  __int64 v193; // r14
  __int64 v194; // rax
  __int64 v195; // rbx
  __int64 *v196; // rdi
  __int64 v197; // rax
  __int64 v198; // rcx
  __int64 v199; // rdx
  __int64 v200; // rdx
  __int64 v201; // rsi
  void *v202; // rax
  void *v203; // r15
  size_t v204; // r13
  __int64 v205; // r14
  __int64 v206; // rax
  __int64 v207; // rbx
  __int64 *v208; // rdi
  __int64 v209; // rax
  __int64 v210; // rcx
  __int64 v211; // rdx
  __int64 v212; // rdx
  __int64 v213; // rsi
  void *v214; // rax
  void *v215; // rax
  __int64 v216; // rax
  __int64 v217; // rcx
  __int64 v218; // rdx
  __int64 v219; // rdx
  __int64 *v220; // rdi
  __int64 v221; // rax
  __int64 v222; // rcx
  __int64 v223; // rdx
  __int64 v224; // rdx
  __int64 *v225; // rsi
  void *v226; // rax
  void *v227; // rax
  __int64 *v228; // rdi
  __int64 v229; // rax
  __int64 v230; // rcx
  __int64 v231; // rdx
  __int64 v232; // rdx
  __int64 *v233; // rsi
  void *v234; // rax
  void *v235; // rax
  __int64 v236; // rax
  __int64 v237; // rcx
  __int64 v238; // rdx
  __int64 v239; // rdx
  __int64 v240; // rdx
  __int64 v241; // rax
  char v243[8]; // [rsp+0h] [rbp-200h] BYREF
  __int64 v244; // [rsp+8h] [rbp-1F8h]
  __int64 v245; // [rsp+10h] [rbp-1F0h]
  __int64 v246; // [rsp+18h] [rbp-1E8h]
  char v247[8]; // [rsp+20h] [rbp-1E0h] BYREF
  __int64 v248; // [rsp+28h] [rbp-1D8h]
  _QWORD *v249; // [rsp+30h] [rbp-1D0h]
  __int64 v250; // [rsp+38h] [rbp-1C8h]
  __int64 v251; // [rsp+40h] [rbp-1C0h]
  _QWORD v252[2]; // [rsp+48h] [rbp-1B8h] BYREF
  __int64 v253; // [rsp+58h] [rbp-1A8h]
  __int64 v254; // [rsp+60h] [rbp-1A0h] BYREF
  __int64 v255; // [rsp+68h] [rbp-198h]
  __int64 v256; // [rsp+70h] [rbp-190h]
  __int64 v257; // [rsp+78h] [rbp-188h] BYREF
  __int64 v258; // [rsp+80h] [rbp-180h] BYREF
  void *v259; // [rsp+88h] [rbp-178h]
  size_t v260; // [rsp+90h] [rbp-170h]
  unsigned __int64 v261; // [rsp+98h] [rbp-168h]
  __int64 v262; // [rsp+A0h] [rbp-160h] BYREF
  __int64 v263; // [rsp+A8h] [rbp-158h]
  __int64 v264; // [rsp+B0h] [rbp-150h]
  __int64 v265; // [rsp+B8h] [rbp-148h] BYREF
  _QWORD *v266; // [rsp+C0h] [rbp-140h]
  __int64 v267; // [rsp+C8h] [rbp-138h]
  __int64 v268; // [rsp+D0h] [rbp-130h] BYREF
  void *__src; // [rsp+D8h] [rbp-128h]
  size_t __n; // [rsp+E0h] [rbp-120h]
  __int64 v271; // [rsp+E8h] [rbp-118h] BYREF
  __int64 *v272; // [rsp+F0h] [rbp-110h]
  __int64 v273; // [rsp+F8h] [rbp-108h]
  __int64 v274; // [rsp+100h] [rbp-100h]
  __int64 v275; // [rsp+108h] [rbp-F8h] BYREF
  __int64 v276; // [rsp+110h] [rbp-F0h]
  __int64 v277; // [rsp+118h] [rbp-E8h]
  __int64 v278; // [rsp+120h] [rbp-E0h]
  __int64 v279; // [rsp+128h] [rbp-D8h]
  __int64 v280; // [rsp+130h] [rbp-D0h]
  __int64 v281; // [rsp+138h] [rbp-C8h]
  __int64 v282; // [rsp+140h] [rbp-C0h] BYREF
  __int64 v283; // [rsp+148h] [rbp-B8h]
  __int64 v284; // [rsp+150h] [rbp-B0h]
  __int64 v285; // [rsp+158h] [rbp-A8h]
  __int64 v286; // [rsp+160h] [rbp-A0h] BYREF
  __int64 v287; // [rsp+168h] [rbp-98h]
  __int64 v288; // [rsp+170h] [rbp-90h]
  __int64 v289; // [rsp+178h] [rbp-88h]
  __int64 v290; // [rsp+180h] [rbp-80h]
  __int64 v291; // [rsp+188h] [rbp-78h]
  __int64 v292; // [rsp+190h] [rbp-70h]
  __int64 v293; // [rsp+198h] [rbp-68h] BYREF
  __int64 v294; // [rsp+1A0h] [rbp-60h]
  __int64 v295; // [rsp+1A8h] [rbp-58h]
  __int64 v296; // [rsp+1B0h] [rbp-50h]
  __int64 v297; // [rsp+1B8h] [rbp-48h] BYREF
  __int64 v298; // [rsp+1C0h] [rbp-40h] BYREF
  __int64 v299; // [rsp+1C8h] [rbp-38h]
  __int64 v300; // [rsp+1D0h] [rbp-30h]

  v261 = a2;
  v251 = a1;
  v268 = 0;
  __n = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2);
  v2 = 18;
  v3 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1);
  if ( !v3 )
    goto LABEL_206;
  qmemcpy(v3, "chatgpt_account_id", 18);
  v271 = 18;
  v272 = (__int64 *)v3;
  v273 = 18;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(18, 1);
  v4 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(36, 1);
  if ( !v4 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 36);
  qmemcpy(v4, "00000000-0000-4000-8000-000000000001", 36);
  LOBYTE(v297) = 3;
  v298 = 36;
  v299 = (__int64)v4;
  v300 = 36;
  v5 = &v286;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v286, &v268, &v271);
  if ( __OFSUB__(0, v286) )
  {
    v6 = v287;
    v7 = 32 * v289;
    v296 = *(_QWORD *)(v287 + 32 * v289 + 24);
    v295 = *(_QWORD *)(v287 + 32 * v289 + 16);
    v8 = *(_QWORD *)(v287 + 32 * v289);
    v294 = *(_QWORD *)(v287 + 32 * v289 + 8);
    v293 = v8;
    *(_QWORD *)(v287 + v7 + 24) = v300;
    *(_QWORD *)(v6 + v7 + 16) = v299;
    v9 = v297;
    v10 = (__int64 *)v298;
    *(_QWORD *)(v6 + v7 + 8) = v298;
    *(_QWORD *)(v6 + v7) = v9;
    if ( (_BYTE)v293 != 6 )
    {
      v5 = &v293;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v293);
    }
  }
  else
  {
    v281 = v292;
    v280 = v291;
    v279 = v290;
    v278 = v289;
    v277 = v288;
    v276 = v287;
    v275 = v286;
    v285 = v300;
    v284 = v299;
    v283 = v298;
    v282 = v297;
    v5 = &v293;
    v10 = &v275;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v293,
      &v275,
      &v282);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v5, v10);
  v2 = 23;
  v11 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(23, 1);
  if ( !v11 )
    goto LABEL_206;
  qmemcpy(v11, "chatgpt_account_user_id", 23);
  v271 = 23;
  v272 = (__int64 *)v11;
  v273 = 23;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(23, 1);
  v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(28, 1);
  if ( !v12 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 28);
  qmemcpy(v12, "user-niuniu-woyao-pro-unlock", 28);
  LOBYTE(v297) = 3;
  v298 = 28;
  v299 = (__int64)v12;
  v300 = 28;
  v13 = &v286;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v286, &v268, &v271);
  if ( v286 == 0x8000000000000000LL )
  {
    v14 = v287;
    v15 = 32 * v289;
    v296 = *(_QWORD *)(v287 + 32 * v289 + 24);
    v295 = *(_QWORD *)(v287 + 32 * v289 + 16);
    v16 = *(_QWORD *)(v287 + 32 * v289);
    v294 = *(_QWORD *)(v287 + 32 * v289 + 8);
    v293 = v16;
    *(_QWORD *)(v287 + v15 + 24) = v300;
    *(_QWORD *)(v14 + v15 + 16) = v299;
    v17 = v297;
    v18 = (__int64 *)v298;
    *(_QWORD *)(v14 + v15 + 8) = v298;
    *(_QWORD *)(v14 + v15) = v17;
    if ( (_BYTE)v293 != 6 )
    {
      v13 = &v293;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v293);
    }
  }
  else
  {
    v281 = v292;
    v280 = v291;
    v279 = v290;
    v278 = v289;
    v277 = v288;
    v276 = v287;
    v275 = v286;
    v285 = v300;
    v284 = v299;
    v283 = v298;
    v282 = v297;
    v13 = &v293;
    v18 = &v275;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v293,
      &v275,
      &v282);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v13, v18);
  v2 = 15;
  v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(15, 1);
  if ( !v19 )
    goto LABEL_206;
  qmemcpy(v19, "chatgpt_user_id", 15);
  v271 = 15;
  v272 = (__int64 *)v19;
  v273 = 15;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(15, 1);
  v20 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(28, 1);
  if ( !v20 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 28);
  qmemcpy(v20, "user-niuniu-woyao-pro-unlock", 28);
  LOBYTE(v297) = 3;
  v298 = 28;
  v299 = (__int64)v20;
  v300 = 28;
  v21 = &v286;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v286, &v268, &v271);
  if ( v286 == 0x8000000000000000LL )
  {
    v22 = v287;
    v23 = 32 * v289;
    v296 = *(_QWORD *)(v287 + 32 * v289 + 24);
    v295 = *(_QWORD *)(v287 + 32 * v289 + 16);
    v24 = *(_QWORD *)(v287 + 32 * v289);
    v294 = *(_QWORD *)(v287 + 32 * v289 + 8);
    v293 = v24;
    *(_QWORD *)(v287 + v23 + 24) = v300;
    *(_QWORD *)(v22 + v23 + 16) = v299;
    v25 = v297;
    v26 = (__int64 *)v298;
    *(_QWORD *)(v22 + v23 + 8) = v298;
    *(_QWORD *)(v22 + v23) = v25;
    if ( (_BYTE)v293 != 6 )
    {
      v21 = &v293;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v293);
    }
  }
  else
  {
    v281 = v292;
    v280 = v291;
    v279 = v290;
    v278 = v289;
    v277 = v288;
    v276 = v287;
    v275 = v286;
    v285 = v300;
    v284 = v299;
    v283 = v298;
    v282 = v297;
    v21 = &v293;
    v26 = &v275;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v293,
      &v275,
      &v282);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v21, v26);
  v2 = 7;
  v27 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v27 )
    goto LABEL_206;
  *(_DWORD *)((char *)v27 + 3) = 1684627314;
  *v27 = 1919251317;
  v271 = 7;
  v272 = (__int64 *)v27;
  v273 = 7;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1);
  v28 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(28, 1);
  if ( !v28 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 28);
  qmemcpy(v28, "user-niuniu-woyao-pro-unlock", 28);
  LOBYTE(v297) = 3;
  v298 = 28;
  v299 = (__int64)v28;
  v300 = 28;
  v29 = &v286;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v286, &v268, &v271);
  if ( v286 == 0x8000000000000000LL )
  {
    v30 = v287;
    v31 = 32 * v289;
    v296 = *(_QWORD *)(v287 + 32 * v289 + 24);
    v295 = *(_QWORD *)(v287 + 32 * v289 + 16);
    v32 = *(_QWORD *)(v287 + 32 * v289);
    v294 = *(_QWORD *)(v287 + 32 * v289 + 8);
    v293 = v32;
    *(_QWORD *)(v287 + v31 + 24) = v300;
    *(_QWORD *)(v30 + v31 + 16) = v299;
    v33 = v297;
    v34 = (__int64 *)v298;
    *(_QWORD *)(v30 + v31 + 8) = v298;
    *(_QWORD *)(v30 + v31) = v33;
    if ( (_BYTE)v293 != 6 )
    {
      v29 = &v293;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v293);
    }
  }
  else
  {
    v281 = v292;
    v280 = v291;
    v279 = v290;
    v278 = v289;
    v277 = v288;
    v276 = v287;
    v275 = v286;
    v285 = v300;
    v284 = v299;
    v283 = v298;
    v282 = v297;
    v29 = &v293;
    v34 = &v275;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v293,
      &v275,
      &v282);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, v34);
  v2 = 17;
  v35 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(17, 1);
  if ( !v35 )
LABEL_206:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v2);
  qmemcpy(v35, "chatgpt_plan_type", 17);
  v271 = 17;
  v272 = (__int64 *)v35;
  v273 = 17;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(17, 1);
  v36 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v36 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
  *v36 = 1701147238;
  LOBYTE(v297) = 3;
  v298 = 4;
  v299 = (__int64)v36;
  v300 = 4;
  v37 = &v286;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v286, &v268, &v271);
  if ( v286 == 0x8000000000000000LL )
  {
    v38 = v287;
    v39 = 32 * v289;
    v296 = *(_QWORD *)(v287 + 32 * v289 + 24);
    v295 = *(_QWORD *)(v287 + 32 * v289 + 16);
    v40 = *(_QWORD *)(v287 + 32 * v289);
    v294 = *(_QWORD *)(v287 + 32 * v289 + 8);
    v293 = v40;
    *(_QWORD *)(v287 + v39 + 24) = v300;
    *(_QWORD *)(v38 + v39 + 16) = v299;
    v41 = v297;
    v42 = (__int64 *)v298;
    *(_QWORD *)(v38 + v39 + 8) = v298;
    *(_QWORD *)(v38 + v39) = v41;
    if ( (_BYTE)v293 != 6 )
    {
      v37 = &v293;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v293);
    }
  }
  else
  {
    v281 = v292;
    v280 = v291;
    v279 = v290;
    v278 = v289;
    v277 = v288;
    v276 = v287;
    v275 = v286;
    v285 = v300;
    v284 = v299;
    v283 = v298;
    v282 = v297;
    v37 = &v293;
    v42 = &v275;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v293,
      &v275,
      &v282);
  }
  v258 = v268;
  v259 = __src;
  v260 = __n;
  LOBYTE(v257) = 5;
  v265 = 0;
  v267 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v37, v42);
  v43 = 3;
  v44 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(3, 1);
  if ( !v44 )
    goto LABEL_204;
  *(_BYTE *)(v44 + 2) = 115;
  *(_WORD *)v44 = 29545;
  v271 = 3;
  v272 = (__int64 *)v44;
  v273 = 3;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(3, 1);
  v45 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(23, 1);
  if ( !v45 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 23);
  qmemcpy(v45, "https://auth.openai.com", 23);
  LOBYTE(v297) = 3;
  v298 = 23;
  v299 = (__int64)v45;
  v300 = 23;
  v46 = &v286;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v286, &v265, &v271);
  if ( v286 == 0x8000000000000000LL )
  {
    v47 = v287;
    v48 = 32 * v289;
    v296 = *(_QWORD *)(v287 + 32 * v289 + 24);
    v295 = *(_QWORD *)(v287 + 32 * v289 + 16);
    v49 = *(_QWORD *)(v287 + 32 * v289);
    v294 = *(_QWORD *)(v287 + 32 * v289 + 8);
    v293 = v49;
    *(_QWORD *)(v287 + v48 + 24) = v300;
    *(_QWORD *)(v47 + v48 + 16) = v299;
    v50 = v297;
    v51 = (__int64 *)v298;
    *(_QWORD *)(v47 + v48 + 8) = v298;
    *(_QWORD *)(v47 + v48) = v50;
    if ( (_BYTE)v293 != 6 )
    {
      v46 = &v293;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v293);
    }
  }
  else
  {
    v281 = v292;
    v280 = v291;
    v279 = v290;
    v278 = v289;
    v277 = v288;
    v276 = v287;
    v275 = v286;
    v285 = v300;
    v284 = v299;
    v283 = v298;
    v282 = v297;
    v46 = &v293;
    v51 = &v275;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v293,
      &v275,
      &v282);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v46, v51);
  v52 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(3, 1);
  if ( !v52 )
    goto LABEL_204;
  *(_BYTE *)(v52 + 2) = 100;
  *(_WORD *)v52 = 30049;
  v271 = 3;
  v272 = (__int64 *)v52;
  v273 = 3;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(3, 1);
  v53 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(20, 1);
  if ( !v53 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 20);
  qmemcpy(v53, "aimami-router-unlock", 20);
  LOBYTE(v297) = 3;
  v298 = 20;
  v299 = (__int64)v53;
  v300 = 20;
  v54 = &v286;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v286, &v265, &v271);
  if ( v286 == 0x8000000000000000LL )
  {
    v55 = v287;
    v56 = 32 * v289;
    v296 = *(_QWORD *)(v287 + 32 * v289 + 24);
    v295 = *(_QWORD *)(v287 + 32 * v289 + 16);
    v57 = *(_QWORD *)(v287 + 32 * v289);
    v294 = *(_QWORD *)(v287 + 32 * v289 + 8);
    v293 = v57;
    *(_QWORD *)(v287 + v56 + 24) = v300;
    *(_QWORD *)(v55 + v56 + 16) = v299;
    v58 = v297;
    v59 = (__int64 *)v298;
    *(_QWORD *)(v55 + v56 + 8) = v298;
    *(_QWORD *)(v55 + v56) = v58;
    if ( (_BYTE)v293 != 6 )
    {
      v54 = &v293;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v293);
    }
  }
  else
  {
    v281 = v292;
    v280 = v291;
    v279 = v290;
    v278 = v289;
    v277 = v288;
    v276 = v287;
    v275 = v286;
    v285 = v300;
    v284 = v299;
    v283 = v298;
    v282 = v297;
    v54 = &v293;
    v59 = &v275;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v293,
      &v275,
      &v282);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v54, v59);
  v60 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(3, 1);
  if ( !v60 )
    goto LABEL_204;
  *(_BYTE *)(v60 + 2) = 98;
  *(_WORD *)v60 = 30067;
  v271 = 3;
  v272 = (__int64 *)v60;
  v273 = 3;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(3, 1);
  v61 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(28, 1);
  if ( !v61 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 28);
  qmemcpy(v61, "user-niuniu-woyao-pro-unlock", 28);
  LOBYTE(v297) = 3;
  v298 = 28;
  v299 = (__int64)v61;
  v300 = 28;
  v62 = &v286;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v286, &v265, &v271);
  if ( v286 == 0x8000000000000000LL )
  {
    v63 = v287;
    v64 = 32 * v289;
    v296 = *(_QWORD *)(v287 + 32 * v289 + 24);
    v295 = *(_QWORD *)(v287 + 32 * v289 + 16);
    v65 = *(_QWORD *)(v287 + 32 * v289);
    v294 = *(_QWORD *)(v287 + 32 * v289 + 8);
    v293 = v65;
    *(_QWORD *)(v287 + v64 + 24) = v300;
    *(_QWORD *)(v63 + v64 + 16) = v299;
    v66 = v297;
    v67 = (__int64 *)v298;
    *(_QWORD *)(v63 + v64 + 8) = v298;
    *(_QWORD *)(v63 + v64) = v66;
    if ( (_BYTE)v293 != 6 )
    {
      v62 = &v293;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v293);
    }
  }
  else
  {
    v281 = v292;
    v280 = v291;
    v279 = v290;
    v278 = v289;
    v277 = v288;
    v276 = v287;
    v275 = v286;
    v285 = v300;
    v284 = v299;
    v283 = v298;
    v282 = v297;
    v62 = &v293;
    v67 = &v275;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v293,
      &v275,
      &v282);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v62, v67);
  v43 = 5;
  v68 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
  if ( !v68 )
    goto LABEL_204;
  *(_BYTE *)(v68 + 4) = 108;
  *(_DWORD *)v68 = 1767992677;
  v271 = 5;
  v272 = (__int64 *)v68;
  v273 = 5;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1);
  v69 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1);
  if ( !v69 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 16);
  qmemcpy(v69, "niuniu@woyao.pro", 16);
  LOBYTE(v297) = 3;
  v298 = 16;
  v299 = (__int64)v69;
  v300 = 16;
  v70 = &v286;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v286, &v265, &v271);
  if ( v286 == 0x8000000000000000LL )
  {
    v71 = v287;
    v72 = 32 * v289;
    v296 = *(_QWORD *)(v287 + 32 * v289 + 24);
    v295 = *(_QWORD *)(v287 + 32 * v289 + 16);
    v73 = *(_QWORD *)(v287 + 32 * v289);
    v294 = *(_QWORD *)(v287 + 32 * v289 + 8);
    v293 = v73;
    *(_QWORD *)(v287 + v72 + 24) = v300;
    *(_QWORD *)(v71 + v72 + 16) = v299;
    v74 = v297;
    v75 = (__int64 *)v298;
    *(_QWORD *)(v71 + v72 + 8) = v298;
    *(_QWORD *)(v71 + v72) = v74;
    if ( (_BYTE)v293 != 6 )
    {
      v70 = &v293;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v293);
    }
  }
  else
  {
    v281 = v292;
    v280 = v291;
    v279 = v290;
    v278 = v289;
    v277 = v288;
    v276 = v287;
    v275 = v286;
    v285 = v300;
    v284 = v299;
    v283 = v298;
    v282 = v297;
    v70 = &v293;
    v75 = &v275;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v293,
      &v275,
      &v282);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v70, v75);
  v43 = 4;
  v76 = (__int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v76 )
    goto LABEL_204;
  *(_DWORD *)v76 = 1701667182;
  v271 = 4;
  v272 = v76;
  v273 = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v77 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
  if ( !v77 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 12);
  qmemcpy(v77, "NIUNIU WOYAO", 12);
  LOBYTE(v297) = 3;
  v298 = 12;
  v299 = (__int64)v77;
  v300 = 12;
  v78 = &v286;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v286, &v265, &v271);
  if ( v286 == 0x8000000000000000LL )
  {
    v79 = v287;
    v80 = 32 * v289;
    v296 = *(_QWORD *)(v287 + 32 * v289 + 24);
    v295 = *(_QWORD *)(v287 + 32 * v289 + 16);
    v81 = *(_QWORD *)(v287 + 32 * v289);
    v294 = *(_QWORD *)(v287 + 32 * v289 + 8);
    v293 = v81;
    *(_QWORD *)(v287 + v80 + 24) = v300;
    *(_QWORD *)(v79 + v80 + 16) = v299;
    v82 = v297;
    v83 = (__int64 *)v298;
    *(_QWORD *)(v79 + v80 + 8) = v298;
    *(_QWORD *)(v79 + v80) = v82;
    if ( (_BYTE)v293 != 6 )
    {
      v78 = &v293;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v293);
    }
  }
  else
  {
    v281 = v292;
    v280 = v291;
    v279 = v290;
    v278 = v289;
    v277 = v288;
    v276 = v287;
    v275 = v286;
    v285 = v300;
    v284 = v299;
    v283 = v298;
    v282 = v297;
    v78 = &v293;
    v83 = &v275;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v293,
      &v275,
      &v282);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v78, v83);
  v43 = 3;
  v84 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(3, 1);
  if ( !v84 )
    goto LABEL_204;
  *(_BYTE *)(v84 + 2) = 116;
  *(_WORD *)v84 = 24937;
  v271 = 3;
  v272 = (__int64 *)v84;
  v273 = 3;
  v85 = v261 >> 63;
  LOBYTE(v297) = 2;
  v298 = v261 >> 63;
  v299 = v261;
  v86 = &v286;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v286, &v265, &v271);
  if ( v286 == 0x8000000000000000LL )
  {
    v87 = v287;
    v88 = 32 * v289;
    v296 = *(_QWORD *)(v287 + 32 * v289 + 24);
    v295 = *(_QWORD *)(v287 + 32 * v289 + 16);
    v89 = *(_QWORD *)(v287 + 32 * v289);
    v294 = *(_QWORD *)(v287 + 32 * v289 + 8);
    v293 = v89;
    *(_QWORD *)(v287 + v88 + 24) = v300;
    *(_QWORD *)(v87 + v88 + 16) = v299;
    v90 = v297;
    v91 = (__int64 *)v298;
    *(_QWORD *)(v87 + v88 + 8) = v298;
    *(_QWORD *)(v87 + v88) = v90;
    if ( (_BYTE)v293 != 6 )
    {
      v86 = &v293;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v293);
    }
  }
  else
  {
    v281 = v292;
    v280 = v291;
    v279 = v290;
    v278 = v289;
    v277 = v288;
    v276 = v287;
    v275 = v286;
    v285 = v300;
    v284 = v299;
    v283 = v298;
    v282 = v297;
    v86 = &v293;
    v91 = &v275;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v293,
      &v275,
      &v282);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v86, v91);
  v92 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(3, 1);
  if ( !v92 )
    goto LABEL_204;
  *(_BYTE *)(v92 + 2) = 112;
  *(_WORD *)v92 = 30821;
  v271 = 3;
  v272 = (__int64 *)v92;
  v273 = 3;
  LOBYTE(v297) = 2;
  v298 = 0;
  v299 = 2524608000LL;
  v93 = &v286;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v286, &v265, &v271);
  if ( v286 == 0x8000000000000000LL )
  {
    v94 = v287;
    v95 = 32 * v289;
    v296 = *(_QWORD *)(v287 + 32 * v289 + 24);
    v295 = *(_QWORD *)(v287 + 32 * v289 + 16);
    v96 = *(_QWORD *)(v287 + 32 * v289);
    v294 = *(_QWORD *)(v287 + 32 * v289 + 8);
    v293 = v96;
    *(_QWORD *)(v287 + v95 + 24) = v300;
    *(_QWORD *)(v94 + v95 + 16) = v299;
    v97 = v297;
    v98 = (__int64 *)v298;
    *(_QWORD *)(v94 + v95 + 8) = v298;
    *(_QWORD *)(v94 + v95) = v97;
    if ( (_BYTE)v293 != 6 )
    {
      v93 = &v293;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v293);
    }
  }
  else
  {
    v281 = v292;
    v280 = v291;
    v279 = v290;
    v278 = v289;
    v277 = v288;
    v276 = v287;
    v275 = v286;
    v285 = v300;
    v284 = v299;
    v283 = v298;
    v282 = v297;
    v93 = &v293;
    v98 = &v275;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v293,
      &v275,
      &v282);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v93, v98);
  v43 = 27;
  v99 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(27, 1);
  if ( !v99 )
LABEL_204:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v43);
  qmemcpy(v99, "https://api.openai.com/auth", 27);
  v268 = 27;
  __src = v99;
  __n = 27;
  switch ( (char)v257 )
  {
    case 0:
      LOBYTE(v297) = 0;
      break;
    case 1:
    case 2:
      v300 = v260;
      v299 = (__int64)v259;
      v298 = v258;
      v297 = v257;
      break;
    case 3:
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v298, &v258);
      LOBYTE(v297) = 3;
      break;
    case 4:
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(&v298, &v258);
      LOBYTE(v297) = 4;
      break;
    case 5:
      if ( v260 )
      {
        if ( !v258 )
          core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248);
        _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
          &v298,
          v258,
          v259);
      }
      else
      {
        v298 = 0;
        v300 = 0;
      }
      LOBYTE(v297) = 5;
      break;
  }
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
    &v275,
    &v297);
  if ( (_BYTE)v275 == 6 )
  {
    v286 = v276;
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      "called `Result::unwrap()` on an `Err` valueErrorInvalidUncertainReadable",
      43,
      &v286,
      &off_101964900,
      &off_101964430);
  }
  v274 = v278;
  v273 = v277;
  v272 = (__int64 *)v276;
  v271 = v275;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v286, &v265, &v268);
  if ( v286 == 0x8000000000000000LL )
  {
    v100 = v287;
    v101 = 32 * v289;
    v296 = *(_QWORD *)(v287 + 32 * v289 + 24);
    v295 = *(_QWORD *)(v287 + 32 * v289 + 16);
    v102 = *(_QWORD *)(v287 + 32 * v289);
    v294 = *(_QWORD *)(v287 + 32 * v289 + 8);
    v293 = v102;
    *(_QWORD *)(v287 + v101 + 24) = v274;
    *(_QWORD *)(v100 + v101 + 16) = v273;
    v103 = v271;
    v104 = v272;
    *(_QWORD *)(v100 + v101 + 8) = v272;
    *(_QWORD *)(v100 + v101) = v103;
    if ( (_BYTE)v293 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v293);
  }
  else
  {
    v281 = v292;
    v280 = v291;
    v279 = v290;
    v278 = v289;
    v277 = v288;
    v276 = v287;
    v275 = v286;
    v285 = v274;
    v284 = v273;
    v283 = (__int64)v272;
    v282 = v271;
    v104 = &v275;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v293,
      &v275,
      &v282);
  }
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v297);
  v248 = v265;
  v249 = v266;
  v250 = v267;
  v247[0] = 5;
  v262 = 0;
  v264 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v297, v104);
  v105 = 3;
  v106 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(3, 1);
  if ( !v106 )
    goto LABEL_205;
  *(_BYTE *)(v106 + 2) = 115;
  *(_WORD *)v106 = 29545;
  v271 = 3;
  v272 = (__int64 *)v106;
  v273 = 3;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(3, 1);
  v107 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(23, 1);
  if ( !v107 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 23);
  qmemcpy(v107, "https://auth.openai.com", 23);
  LOBYTE(v297) = 3;
  v298 = 23;
  v299 = (__int64)v107;
  v300 = 23;
  v108 = &v286;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v286, &v262, &v271);
  if ( v286 == 0x8000000000000000LL )
  {
    v109 = v287;
    v110 = 32 * v289;
    v296 = *(_QWORD *)(v287 + 32 * v289 + 24);
    v295 = *(_QWORD *)(v287 + 32 * v289 + 16);
    v111 = *(_QWORD *)(v287 + 32 * v289);
    v294 = *(_QWORD *)(v287 + 32 * v289 + 8);
    v293 = v111;
    *(_QWORD *)(v287 + v110 + 24) = v300;
    *(_QWORD *)(v109 + v110 + 16) = v299;
    v112 = v297;
    v113 = (__int64 *)v298;
    *(_QWORD *)(v109 + v110 + 8) = v298;
    *(_QWORD *)(v109 + v110) = v112;
    if ( (_BYTE)v293 != 6 )
    {
      v108 = &v293;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v293);
    }
  }
  else
  {
    v281 = v292;
    v280 = v291;
    v279 = v290;
    v278 = v289;
    v277 = v288;
    v276 = v287;
    v275 = v286;
    v285 = v300;
    v284 = v299;
    v283 = v298;
    v282 = v297;
    v108 = &v293;
    v113 = &v275;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v293,
      &v275,
      &v282);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v108, v113);
  v114 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(3, 1);
  if ( !v114 )
    goto LABEL_205;
  *(_BYTE *)(v114 + 2) = 100;
  *(_WORD *)v114 = 30049;
  v271 = 3;
  v272 = (__int64 *)v114;
  v273 = 3;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(3, 1);
  v115 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(20, 1);
  if ( !v115 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 20);
  qmemcpy(v115, "aimami-router-unlock", 20);
  LOBYTE(v297) = 3;
  v298 = 20;
  v299 = (__int64)v115;
  v300 = 20;
  v116 = &v286;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v286, &v262, &v271);
  if ( v286 == 0x8000000000000000LL )
  {
    v117 = v287;
    v118 = 32 * v289;
    v296 = *(_QWORD *)(v287 + 32 * v289 + 24);
    v295 = *(_QWORD *)(v287 + 32 * v289 + 16);
    v119 = *(_QWORD *)(v287 + 32 * v289);
    v294 = *(_QWORD *)(v287 + 32 * v289 + 8);
    v293 = v119;
    *(_QWORD *)(v287 + v118 + 24) = v300;
    *(_QWORD *)(v117 + v118 + 16) = v299;
    v120 = v297;
    v121 = (__int64 *)v298;
    *(_QWORD *)(v117 + v118 + 8) = v298;
    *(_QWORD *)(v117 + v118) = v120;
    if ( (_BYTE)v293 != 6 )
    {
      v116 = &v293;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v293);
    }
  }
  else
  {
    v281 = v292;
    v280 = v291;
    v279 = v290;
    v278 = v289;
    v277 = v288;
    v276 = v287;
    v275 = v286;
    v285 = v300;
    v284 = v299;
    v283 = v298;
    v282 = v297;
    v116 = &v293;
    v121 = &v275;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v293,
      &v275,
      &v282);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v116, v121);
  v122 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(3, 1);
  if ( !v122 )
    goto LABEL_205;
  *(_BYTE *)(v122 + 2) = 98;
  *(_WORD *)v122 = 30067;
  v271 = 3;
  v272 = (__int64 *)v122;
  v273 = 3;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(3, 1);
  v123 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(28, 1);
  if ( !v123 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 28);
  qmemcpy(v123, "user-niuniu-woyao-pro-unlock", 28);
  LOBYTE(v297) = 3;
  v298 = 28;
  v299 = (__int64)v123;
  v300 = 28;
  v124 = &v286;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v286, &v262, &v271);
  if ( v286 == 0x8000000000000000LL )
  {
    v125 = v287;
    v126 = 32 * v289;
    v296 = *(_QWORD *)(v287 + 32 * v289 + 24);
    v295 = *(_QWORD *)(v287 + 32 * v289 + 16);
    v127 = *(_QWORD *)(v287 + 32 * v289);
    v294 = *(_QWORD *)(v287 + 32 * v289 + 8);
    v293 = v127;
    *(_QWORD *)(v287 + v126 + 24) = v300;
    *(_QWORD *)(v125 + v126 + 16) = v299;
    v128 = v297;
    v129 = (__int64 *)v298;
    *(_QWORD *)(v125 + v126 + 8) = v298;
    *(_QWORD *)(v125 + v126) = v128;
    if ( (_BYTE)v293 != 6 )
    {
      v124 = &v293;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v293);
    }
  }
  else
  {
    v281 = v292;
    v280 = v291;
    v279 = v290;
    v278 = v289;
    v277 = v288;
    v276 = v287;
    v275 = v286;
    v285 = v300;
    v284 = v299;
    v283 = v298;
    v282 = v297;
    v124 = &v293;
    v129 = &v275;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v293,
      &v275,
      &v282);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v124, v129);
  v130 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(3, 1);
  if ( !v130 )
    goto LABEL_205;
  *(_BYTE *)(v130 + 2) = 116;
  *(_WORD *)v130 = 24937;
  v271 = 3;
  v272 = (__int64 *)v130;
  v273 = 3;
  LOBYTE(v297) = 2;
  v298 = v85;
  v299 = v261;
  v131 = &v286;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v286, &v262, &v271);
  if ( v286 == 0x8000000000000000LL )
  {
    v132 = v287;
    v133 = 32 * v289;
    v296 = *(_QWORD *)(v287 + 32 * v289 + 24);
    v295 = *(_QWORD *)(v287 + 32 * v289 + 16);
    v134 = *(_QWORD *)(v287 + 32 * v289);
    v294 = *(_QWORD *)(v287 + 32 * v289 + 8);
    v293 = v134;
    *(_QWORD *)(v287 + v133 + 24) = v300;
    *(_QWORD *)(v132 + v133 + 16) = v299;
    v135 = v297;
    v136 = (__int64 *)v298;
    *(_QWORD *)(v132 + v133 + 8) = v298;
    *(_QWORD *)(v132 + v133) = v135;
    if ( (_BYTE)v293 != 6 )
    {
      v131 = &v293;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v293);
    }
  }
  else
  {
    v281 = v292;
    v280 = v291;
    v279 = v290;
    v278 = v289;
    v277 = v288;
    v276 = v287;
    v275 = v286;
    v285 = v300;
    v284 = v299;
    v283 = v298;
    v282 = v297;
    v131 = &v293;
    v136 = &v275;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v293,
      &v275,
      &v282);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v131, v136);
  v137 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(3, 1);
  if ( !v137 )
    goto LABEL_205;
  *(_BYTE *)(v137 + 2) = 112;
  *(_WORD *)v137 = 30821;
  v271 = 3;
  v272 = (__int64 *)v137;
  v273 = 3;
  LOBYTE(v297) = 2;
  v298 = 0;
  v299 = 2524608000LL;
  v138 = &v286;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v286, &v262, &v271);
  if ( v286 == 0x8000000000000000LL )
  {
    v139 = v287;
    v140 = 32 * v289;
    v296 = *(_QWORD *)(v287 + 32 * v289 + 24);
    v295 = *(_QWORD *)(v287 + 32 * v289 + 16);
    v141 = *(_QWORD *)(v287 + 32 * v289);
    v294 = *(_QWORD *)(v287 + 32 * v289 + 8);
    v293 = v141;
    *(_QWORD *)(v287 + v140 + 24) = v300;
    *(_QWORD *)(v139 + v140 + 16) = v299;
    v142 = v297;
    v143 = (__int64 *)v298;
    *(_QWORD *)(v139 + v140 + 8) = v298;
    *(_QWORD *)(v139 + v140) = v142;
    if ( (_BYTE)v293 != 6 )
    {
      v138 = &v293;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v293);
    }
  }
  else
  {
    v281 = v292;
    v280 = v291;
    v279 = v290;
    v278 = v289;
    v277 = v288;
    v276 = v287;
    v275 = v286;
    v285 = v300;
    v284 = v299;
    v283 = v298;
    v282 = v297;
    v138 = &v293;
    v143 = &v275;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v293,
      &v275,
      &v282);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v138, v143);
  v105 = 27;
  v144 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(27, 1);
  if ( !v144 )
    goto LABEL_205;
  qmemcpy(v144, "https://api.openai.com/auth", 27);
  v271 = 27;
  v272 = (__int64 *)v144;
  v273 = 27;
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
    &v275,
    &v257);
  if ( (_BYTE)v275 == 6 )
  {
    v286 = v276;
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      "called `Result::unwrap()` on an `Err` valueErrorInvalidUncertainReadable",
      43,
      &v286,
      &off_101964900,
      &off_101964448);
  }
  v300 = v278;
  v299 = v277;
  v298 = v276;
  v297 = v275;
  v145 = &v286;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v286, &v262, &v271);
  if ( v286 == 0x8000000000000000LL )
  {
    v146 = v287;
    v147 = 32 * v289;
    v296 = *(_QWORD *)(v287 + 32 * v289 + 24);
    v295 = *(_QWORD *)(v287 + 32 * v289 + 16);
    v148 = *(_QWORD *)(v287 + 32 * v289);
    v294 = *(_QWORD *)(v287 + 32 * v289 + 8);
    v293 = v148;
    *(_QWORD *)(v287 + v147 + 24) = v300;
    *(_QWORD *)(v146 + v147 + 16) = v299;
    v149 = v297;
    v150 = (__int64 *)v298;
    *(_QWORD *)(v146 + v147 + 8) = v298;
    *(_QWORD *)(v146 + v147) = v149;
    if ( (_BYTE)v293 != 6 )
    {
      v145 = &v293;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v293);
    }
  }
  else
  {
    v281 = v292;
    v280 = v291;
    v279 = v290;
    v278 = v289;
    v277 = v288;
    v276 = v287;
    v275 = v286;
    v285 = v300;
    v284 = v299;
    v283 = v298;
    v282 = v297;
    v145 = &v293;
    v150 = &v275;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v293,
      &v275,
      &v282);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v145, v150);
  v105 = 30;
  v151 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(30, 1);
  if ( !v151 )
LABEL_205:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v105);
  qmemcpy(v151, "https://api.openai.com/profile", 30);
  v254 = 30;
  v255 = (__int64)v151;
  v256 = 30;
  v265 = 0;
  v267 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(30, 1);
  v152 = 5;
  v153 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1);
  if ( !v153 )
    goto LABEL_208;
  v153[4] = 108;
  *(_DWORD *)v153 = 1767992677;
  v268 = 5;
  __src = v153;
  __n = 5;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1);
  v154 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1);
  if ( !v154 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 16);
  qmemcpy(v154, "niuniu@woyao.pro", 16);
  LOBYTE(v297) = 3;
  v298 = 16;
  v299 = (__int64)v154;
  v300 = 16;
  v155 = &v286;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v286, &v265, &v268);
  if ( v286 == 0x8000000000000000LL )
  {
    v156 = v287;
    v157 = 32 * v289;
    v296 = *(_QWORD *)(v287 + 32 * v289 + 24);
    v295 = *(_QWORD *)(v287 + 32 * v289 + 16);
    v158 = *(_QWORD *)(v287 + 32 * v289);
    v294 = *(_QWORD *)(v287 + 32 * v289 + 8);
    v293 = v158;
    *(_QWORD *)(v287 + v157 + 24) = v300;
    *(_QWORD *)(v156 + v157 + 16) = v299;
    v159 = v297;
    v160 = (__int64 *)v298;
    *(_QWORD *)(v156 + v157 + 8) = v298;
    *(_QWORD *)(v156 + v157) = v159;
    if ( (_BYTE)v293 != 6 )
    {
      v155 = &v293;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v293);
    }
  }
  else
  {
    v281 = v292;
    v280 = v291;
    v279 = v290;
    v278 = v289;
    v277 = v288;
    v276 = v287;
    v275 = v286;
    v285 = v300;
    v284 = v299;
    v283 = v298;
    v282 = v297;
    v155 = &v293;
    v160 = &v275;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v293,
      &v275,
      &v282);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v155, v160);
  v152 = 4;
  v161 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v161 )
LABEL_208:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v152);
  *v161 = 1701667182;
  v268 = 4;
  __src = v161;
  __n = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v162 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
  if ( !v162 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 12);
  qmemcpy(v162, "NIUNIU WOYAO", 12);
  LOBYTE(v297) = 3;
  v298 = 12;
  v299 = (__int64)v162;
  v300 = 12;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v286, &v265, &v268);
  if ( v286 == 0x8000000000000000LL )
  {
    v163 = v287;
    v164 = 32 * v289;
    v296 = *(_QWORD *)(v287 + 32 * v289 + 24);
    v295 = *(_QWORD *)(v287 + 32 * v289 + 16);
    v165 = *(_QWORD *)(v287 + 32 * v289);
    v294 = *(_QWORD *)(v287 + 32 * v289 + 8);
    v293 = v165;
    *(_QWORD *)(v287 + v164 + 24) = v300;
    *(_QWORD *)(v163 + v164 + 16) = v299;
    v166 = v297;
    *(_QWORD *)(v163 + v164 + 8) = v298;
    *(_QWORD *)(v163 + v164) = v166;
    if ( (_BYTE)v293 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v293);
  }
  else
  {
    v281 = v292;
    v280 = v291;
    v279 = v290;
    v278 = v289;
    v277 = v288;
    v276 = v287;
    v275 = v286;
    v285 = v300;
    v284 = v299;
    v283 = v298;
    v282 = v297;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v293,
      &v275,
      &v282);
  }
  v272 = (__int64 *)v265;
  v273 = (__int64)v266;
  v274 = v267;
  LOBYTE(v271) = 5;
  v167 = &v286;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v286, &v262, &v254);
  if ( v286 == 0x8000000000000000LL )
  {
    v168 = v287;
    v169 = 32 * v289;
    v296 = *(_QWORD *)(v287 + 32 * v289 + 24);
    v295 = *(_QWORD *)(v287 + 32 * v289 + 16);
    v170 = *(_QWORD *)(v287 + 32 * v289);
    v294 = *(_QWORD *)(v287 + 32 * v289 + 8);
    v293 = v170;
    *(_QWORD *)(v287 + v169 + 24) = v274;
    *(_QWORD *)(v168 + v169 + 16) = v273;
    v171 = v271;
    v172 = v272;
    *(_QWORD *)(v168 + v169 + 8) = v272;
    *(_QWORD *)(v168 + v169) = v171;
    if ( (_BYTE)v293 != 6 )
    {
      v167 = &v293;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v293);
    }
  }
  else
  {
    v281 = v292;
    v280 = v291;
    v279 = v290;
    v278 = v289;
    v277 = v288;
    v276 = v287;
    v275 = v286;
    v285 = v274;
    v284 = v273;
    v283 = (__int64)v272;
    v282 = v271;
    v167 = &v293;
    v172 = &v275;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v293,
      &v275,
      &v282);
  }
  v244 = v262;
  v245 = v263;
  v246 = v264;
  v243[0] = 5;
  v252[0] = 0;
  v253 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v167, v172);
  v173 = 9;
  v174 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
  if ( !v174 )
    goto LABEL_207;
  *(_QWORD *)v174 = 0x646F6D5F68747561LL;
  *(_BYTE *)(v174 + 8) = 101;
  v271 = 9;
  v272 = (__int64 *)v174;
  v273 = 9;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(9, 1);
  v175 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1);
  if ( !v175 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7);
  *(_DWORD *)((char *)v175 + 3) = 1953523572;
  *v175 = 1952540771;
  LOBYTE(v297) = 3;
  v298 = 7;
  v299 = (__int64)v175;
  v300 = 7;
  v176 = &v286;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v286, v252, &v271);
  if ( v286 == 0x8000000000000000LL )
  {
    v177 = v287;
    v178 = 32 * v289;
    v296 = *(_QWORD *)(v287 + 32 * v289 + 24);
    v295 = *(_QWORD *)(v287 + 32 * v289 + 16);
    v179 = *(_QWORD *)(v287 + 32 * v289);
    v294 = *(_QWORD *)(v287 + 32 * v289 + 8);
    v293 = v179;
    *(_QWORD *)(v287 + v178 + 24) = v300;
    *(_QWORD *)(v177 + v178 + 16) = v299;
    v180 = v297;
    v181 = (__int64 *)v298;
    *(_QWORD *)(v177 + v178 + 8) = v298;
    *(_QWORD *)(v177 + v178) = v180;
    if ( (_BYTE)v293 != 6 )
    {
      v176 = &v293;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v293);
    }
  }
  else
  {
    v281 = v292;
    v280 = v291;
    v279 = v290;
    v278 = v289;
    v277 = v288;
    v276 = v287;
    v275 = v286;
    v285 = v300;
    v284 = v299;
    v283 = v298;
    v282 = v297;
    v176 = &v293;
    v181 = &v275;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v293,
      &v275,
      &v282);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v176, v181);
  v173 = 25;
  v182 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(25, 1);
  if ( !v182 )
    goto LABEL_207;
  qmemcpy(v182, "aimami_router_unlock_auth", 25);
  v271 = 25;
  v272 = (__int64 *)v182;
  v273 = 25;
  LOWORD(v297) = 257;
  v183 = &v286;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v286, v252, &v271);
  if ( v286 == 0x8000000000000000LL )
  {
    v184 = v287;
    v185 = 32 * v289;
    v296 = *(_QWORD *)(v287 + 32 * v289 + 24);
    v295 = *(_QWORD *)(v287 + 32 * v289 + 16);
    v186 = *(_QWORD *)(v287 + 32 * v289);
    v294 = *(_QWORD *)(v287 + 32 * v289 + 8);
    v293 = v186;
    *(_QWORD *)(v287 + v185 + 24) = v300;
    *(_QWORD *)(v184 + v185 + 16) = v299;
    v187 = v297;
    v188 = (__int64 *)v298;
    *(_QWORD *)(v184 + v185 + 8) = v298;
    *(_QWORD *)(v184 + v185) = v187;
    if ( (_BYTE)v293 != 6 )
    {
      v183 = &v293;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v293);
    }
  }
  else
  {
    v281 = v292;
    v280 = v291;
    v279 = v290;
    v278 = v289;
    v277 = v288;
    v276 = v287;
    v275 = v286;
    v285 = v300;
    v284 = v299;
    v283 = v298;
    v282 = v297;
    v183 = &v293;
    v188 = &v275;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v293,
      &v275,
      &v282);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v183, v188);
  v173 = 6;
  v189 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1);
  if ( !v189 )
LABEL_207:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v173);
  *(_WORD *)(v189 + 4) = 29550;
  *(_DWORD *)v189 = 1701539700;
  v262 = 6;
  v261 = v189;
  v263 = v189;
  v264 = 6;
  v254 = 0;
  v256 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1);
  v190 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
  if ( !v190 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8);
  *v190 = 0x6E656B6F745F6469LL;
  v265 = 8;
  v266 = v190;
  v267 = 8;
  codexmate_lib::core::relay::router_unlock_auth::make_unsigned_jwt::h4269e44361b7112e((__int64)&v268, (__int64)v247);
  v191 = __src;
  v192 = __n;
  if ( (__n & 0x8000000000000000LL) != 0LL )
  {
    v193 = 0;
    goto LABEL_153;
  }
  if ( __n )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v268, v247);
    v193 = 1;
    v194 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v192, 1);
    if ( !v194 )
LABEL_153:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v193, v192);
    v195 = v194;
  }
  else
  {
    v195 = 1;
  }
  memcpy((void *)v195, v191, v192);
  LOBYTE(v297) = 3;
  v298 = v192;
  v299 = v195;
  v300 = v192;
  v196 = &v286;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v286, &v254, &v265);
  if ( v286 == 0x8000000000000000LL )
  {
    v197 = v287;
    v198 = 32 * v289;
    v296 = *(_QWORD *)(v287 + 32 * v289 + 24);
    v295 = *(_QWORD *)(v287 + 32 * v289 + 16);
    v199 = *(_QWORD *)(v287 + 32 * v289);
    v294 = *(_QWORD *)(v287 + 32 * v289 + 8);
    v293 = v199;
    *(_QWORD *)(v287 + v198 + 24) = v300;
    *(_QWORD *)(v197 + v198 + 16) = v299;
    v200 = v297;
    *(_QWORD *)(v197 + v198 + 8) = v298;
    *(_QWORD *)(v197 + v198) = v200;
    if ( (_BYTE)v293 != 6 )
    {
      v196 = &v293;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v293);
    }
  }
  else
  {
    v281 = v292;
    v280 = v291;
    v279 = v290;
    v278 = v289;
    v277 = v288;
    v276 = v287;
    v275 = v286;
    v285 = v300;
    v284 = v299;
    v283 = v298;
    v282 = v297;
    v196 = &v293;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v293,
      &v275,
      &v282);
  }
  v201 = v268;
  if ( v268 )
  {
    v196 = (__int64 *)v191;
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v191, v268, 1);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v196, v201);
  v202 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
  if ( !v202 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 12);
  qmemcpy(v202, "access_token", 12);
  v265 = 12;
  v266 = v202;
  v267 = 12;
  codexmate_lib::core::relay::router_unlock_auth::make_unsigned_jwt::h4269e44361b7112e((__int64)&v268, (__int64)v243);
  v203 = __src;
  v204 = __n;
  if ( (__n & 0x8000000000000000LL) != 0LL )
  {
    v205 = 0;
    goto LABEL_167;
  }
  if ( __n )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v268, v243);
    v205 = 1;
    v206 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v204, 1);
    if ( !v206 )
LABEL_167:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v205, v204);
    v207 = v206;
  }
  else
  {
    v207 = 1;
  }
  memcpy((void *)v207, v203, v204);
  LOBYTE(v297) = 3;
  v298 = v204;
  v299 = v207;
  v300 = v204;
  v208 = &v286;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v286, &v254, &v265);
  if ( v286 == 0x8000000000000000LL )
  {
    v209 = v287;
    v210 = 32 * v289;
    v296 = *(_QWORD *)(v287 + 32 * v289 + 24);
    v295 = *(_QWORD *)(v287 + 32 * v289 + 16);
    v211 = *(_QWORD *)(v287 + 32 * v289);
    v294 = *(_QWORD *)(v287 + 32 * v289 + 8);
    v293 = v211;
    *(_QWORD *)(v287 + v210 + 24) = v300;
    *(_QWORD *)(v209 + v210 + 16) = v299;
    v212 = v297;
    *(_QWORD *)(v209 + v210 + 8) = v298;
    *(_QWORD *)(v209 + v210) = v212;
    if ( (_BYTE)v293 != 6 )
    {
      v208 = &v293;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v293);
    }
  }
  else
  {
    v281 = v292;
    v280 = v291;
    v279 = v290;
    v278 = v289;
    v277 = v288;
    v276 = v287;
    v275 = v286;
    v285 = v300;
    v284 = v299;
    v283 = v298;
    v282 = v297;
    v208 = &v293;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v293,
      &v275,
      &v282);
  }
  v213 = v268;
  if ( v268 )
  {
    v208 = (__int64 *)v203;
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v203, v268, 1);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v208, v213);
  v214 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1);
  if ( !v214 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13);
  qmemcpy(v214, "refresh_token", 13);
  v268 = 13;
  __src = v214;
  __n = 13;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(13, 1);
  v215 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(34, 1);
  if ( !v215 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 34);
  qmemcpy(v215, "aimami-router-unlock-refresh-token", 34);
  LOBYTE(v297) = 3;
  v298 = 34;
  v299 = (__int64)v215;
  v300 = 34;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v286, &v254, &v268);
  if ( v286 == 0x8000000000000000LL )
  {
    v216 = v287;
    v217 = 32 * v289;
    v296 = *(_QWORD *)(v287 + 32 * v289 + 24);
    v295 = *(_QWORD *)(v287 + 32 * v289 + 16);
    v218 = *(_QWORD *)(v287 + 32 * v289);
    v294 = *(_QWORD *)(v287 + 32 * v289 + 8);
    v293 = v218;
    *(_QWORD *)(v287 + v217 + 24) = v300;
    *(_QWORD *)(v216 + v217 + 16) = v299;
    v219 = v297;
    *(_QWORD *)(v216 + v217 + 8) = v298;
    *(_QWORD *)(v216 + v217) = v219;
    if ( (_BYTE)v293 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v293);
  }
  else
  {
    v281 = v292;
    v280 = v291;
    v279 = v290;
    v278 = v289;
    v277 = v288;
    v276 = v287;
    v275 = v286;
    v285 = v300;
    v284 = v299;
    v283 = v298;
    v282 = v297;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v293,
      &v275,
      &v282);
  }
  v272 = (__int64 *)v254;
  v273 = v255;
  v274 = v256;
  LOBYTE(v271) = 5;
  v220 = &v286;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v286, v252, &v262);
  if ( v286 == 0x8000000000000000LL )
  {
    v221 = v287;
    v222 = 32 * v289;
    v296 = *(_QWORD *)(v287 + 32 * v289 + 24);
    v295 = *(_QWORD *)(v287 + 32 * v289 + 16);
    v223 = *(_QWORD *)(v287 + 32 * v289);
    v294 = *(_QWORD *)(v287 + 32 * v289 + 8);
    v293 = v223;
    *(_QWORD *)(v287 + v222 + 24) = v274;
    *(_QWORD *)(v221 + v222 + 16) = v273;
    v224 = v271;
    v225 = v272;
    *(_QWORD *)(v221 + v222 + 8) = v272;
    *(_QWORD *)(v221 + v222) = v224;
    if ( (_BYTE)v293 != 6 )
    {
      v220 = &v293;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v293);
    }
  }
  else
  {
    v281 = v292;
    v280 = v291;
    v279 = v290;
    v278 = v289;
    v277 = v288;
    v276 = v287;
    v275 = v286;
    v285 = v274;
    v284 = v273;
    v283 = (__int64)v272;
    v282 = v271;
    v220 = &v293;
    v225 = &v275;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v293,
      &v275,
      &v282);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v220, v225);
  v226 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
  if ( !v226 )
    goto LABEL_227;
  qmemcpy(v226, "last_refresh", 12);
  v271 = 12;
  v272 = (__int64 *)v226;
  v273 = 12;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(12, 1);
  v227 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(20, 1);
  if ( !v227 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 20);
  qmemcpy(v227, "2026-06-01T00:00:00Z", 20);
  LOBYTE(v297) = 3;
  v298 = 20;
  v299 = (__int64)v227;
  v300 = 20;
  v228 = &v286;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v286, v252, &v271);
  if ( v286 == 0x8000000000000000LL )
  {
    v229 = v287;
    v230 = 32 * v289;
    v296 = *(_QWORD *)(v287 + 32 * v289 + 24);
    v295 = *(_QWORD *)(v287 + 32 * v289 + 16);
    v231 = *(_QWORD *)(v287 + 32 * v289);
    v294 = *(_QWORD *)(v287 + 32 * v289 + 8);
    v293 = v231;
    *(_QWORD *)(v287 + v230 + 24) = v300;
    *(_QWORD *)(v229 + v230 + 16) = v299;
    v232 = v297;
    v233 = (__int64 *)v298;
    *(_QWORD *)(v229 + v230 + 8) = v298;
    *(_QWORD *)(v229 + v230) = v232;
    if ( (_BYTE)v293 != 6 )
    {
      v228 = &v293;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v293);
    }
  }
  else
  {
    v281 = v292;
    v280 = v291;
    v279 = v290;
    v278 = v289;
    v277 = v288;
    v276 = v287;
    v275 = v286;
    v285 = v300;
    v284 = v299;
    v283 = v298;
    v282 = v297;
    v228 = &v293;
    v233 = &v275;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v293,
      &v275,
      &v282);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v228, v233);
  v234 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
  if ( !v234 )
LABEL_227:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 12);
  qmemcpy(v234, "axonhub_note", 12);
  v271 = 12;
  v272 = (__int64 *)v234;
  v273 = 12;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(12, 1);
  v235 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(61, 1);
  if ( !v235 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 61);
  qmemcpy(v235, "AiMaMi router unlock auth. This is not a real OpenAI account.", 61);
  LOBYTE(v297) = 3;
  v298 = 61;
  v299 = (__int64)v235;
  v300 = 61;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v286, v252, &v271);
  if ( v286 == 0x8000000000000000LL )
  {
    v236 = v287;
    v237 = 32 * v289;
    v296 = *(_QWORD *)(v287 + 32 * v289 + 24);
    v295 = *(_QWORD *)(v287 + 32 * v289 + 16);
    v238 = *(_QWORD *)(v287 + 32 * v289);
    v294 = *(_QWORD *)(v287 + 32 * v289 + 8);
    v293 = v238;
    *(_QWORD *)(v287 + v237 + 24) = v300;
    *(_QWORD *)(v236 + v237 + 16) = v299;
    v239 = v297;
    *(_QWORD *)(v236 + v237 + 8) = v298;
    *(_QWORD *)(v236 + v237) = v239;
    if ( (_BYTE)v293 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v293);
  }
  else
  {
    v281 = v292;
    v280 = v291;
    v279 = v290;
    v278 = v289;
    v277 = v288;
    v276 = v287;
    v275 = v286;
    v285 = v300;
    v284 = v299;
    v283 = v298;
    v282 = v297;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v293,
      &v275,
      &v282);
  }
  v240 = v251;
  *(_QWORD *)(v251 + 24) = v253;
  v241 = v252[0];
  *(_QWORD *)(v240 + 16) = v252[1];
  *(_QWORD *)(v240 + 8) = v241;
  *(_BYTE *)v240 = 5;
  return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v257);
}
