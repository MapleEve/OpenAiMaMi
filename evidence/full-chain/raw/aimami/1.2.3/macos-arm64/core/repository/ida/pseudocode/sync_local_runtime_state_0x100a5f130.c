// __ZN13codexmate_lib4core10repository10Repository24sync_local_runtime_state @ 0x100a5f130 | 基线 same-set
// [FULL hexrays]

_QWORD *__fastcall codexmate_lib::core::repository::Repository::sync_local_runtime_state::h9a275b158e989503(
        _QWORD *a1,
        _QWORD *a2,
        __m128i a3)
{
  __int64 v3; // r13
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // r14
  __int64 v7; // r9
  __int64 v8; // rsi
  __int64 v9; // rbx
  size_t v10; // r14
  __int64 v11; // r12
  __int64 v12; // rbx
  __int64 v13; // r15
  __int64 v14; // r14
  size_t v15; // rdi
  void *v16; // r14
  unsigned __int64 v17; // r15
  __int64 v18; // r14
  int v19; // eax
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // r14
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // r12
  unsigned __int64 v24; // r15
  __int64 v25; // rsi
  unsigned __int64 v26; // rbx
  __int64 v27; // r15
  __int64 v28; // r12
  __int64 v29; // rsi
  __int64 v30; // rsi
  bool v31; // cf
  unsigned __int64 v32; // r13
  size_t *v33; // r14
  __int64 v34; // rsi
  unsigned int *v35; // r14
  unsigned __int64 v36; // r13
  unsigned int *v37; // rbx
  size_t v38; // rbx
  void *v39; // rax
  void *v40; // rbx
  __int64 v41; // rbx
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  void *v45; // r15
  size_t v46; // r13
  void *v47; // rbx
  const void *v48; // r12
  size_t v49; // r14
  __int64 v50; // r9
  size_t v51; // rbx
  __int64 v52; // r15
  __int64 v53; // r13
  _DWORD *v54; // rsi
  _DWORD *v55; // rdi
  __int64 i; // rcx
  __int64 v57; // r15
  _DWORD *v58; // rsi
  _DWORD *v59; // rdi
  __int64 j; // rcx
  void *v61; // r15
  __int64 v62; // rax
  size_t v63; // r12
  __int64 v64; // r9
  __int64 v65; // r15
  _DWORD *v66; // rsi
  _DWORD *v67; // rdi
  __int64 k; // rcx
  __int64 v69; // rax
  size_t v70; // r12
  __int64 v71; // r9
  __int64 v72; // rsi
  void *v73; // rax
  char *v74; // rsi
  _QWORD *v75; // rdi
  unsigned __int64 v76; // rax
  __int64 v77; // r9
  void *v78; // r14
  __int64 v79; // r12
  __int64 v80; // rbx
  __int64 v81; // r15
  __int64 v82; // r14
  void *v83; // rax
  void *v84; // rbx
  __int64 v85; // rbx
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // rbx
  unsigned __int64 v90; // r15
  size_t v91; // r12
  _DWORD *v92; // rsi
  _DWORD *v93; // rdi
  __int64 m; // rcx
  _DWORD *v95; // rsi
  _DWORD *v96; // rdi
  __int64 ii; // rcx
  _DWORD *v98; // rdi
  _DWORD *v99; // rsi
  __int64 mm; // rcx
  unsigned __int64 *v101; // rbx
  __int64 v102; // r14
  unsigned __int64 *v103; // rdi
  unsigned __int64 *v104; // rsi
  __int64 *v105; // rdi
  _DWORD *v106; // rsi
  __int64 n; // rcx
  __int64 *v108; // rdi
  _DWORD *v109; // rsi
  __int64 jj; // rcx
  _QWORD *v111; // rax
  _QWORD *v112; // rdx
  __int64 v113; // r14
  _QWORD *v114; // rbx
  __int64 v115; // r15
  __int64 v116; // r13
  __int64 v117; // rax
  __int64 v118; // r14
  bool v119; // zf
  __int64 v120; // rcx
  unsigned __int64 v121; // r14
  unsigned __int64 v122; // rax
  unsigned int v123; // r13d
  unsigned __int64 v124; // rcx
  int v125; // edx
  __int64 v126; // rdx
  char v127; // al
  __int64 v128; // rax
  __int64 v129; // rcx
  int v130; // edx
  unsigned __int64 v131; // rax
  __int64 v132; // rbx
  _DWORD *v133; // rsi
  __int64 *v134; // rdi
  __int64 nn; // rcx
  _QWORD *v136; // r14
  __int64 v137; // rsi
  __int64 v138; // rbx
  __int64 v139; // r13
  __int64 v140; // r14
  _DWORD *v141; // rdi
  __int64 *v142; // rsi
  __int64 kk; // rcx
  void *v144; // rax
  void *v145; // rbx
  __int64 v146; // rbx
  __int64 v147; // rax
  __int64 v148; // rcx
  __int64 v149; // rdx
  _QWORD *result; // rax
  __int64 v151; // rdx
  __int64 v152; // rbx
  __int64 v153; // rax
  unsigned __int64 v154; // rbx
  __int64 v155; // r14
  __int64 v156; // r15
  __int64 v157; // rsi
  int v158; // r15d
  unsigned __int64 v159; // rbx
  unsigned __int64 v160; // r14
  unsigned int v161; // r12d
  int v162; // r15d
  int v163; // r13d
  unsigned int v164; // ecx
  unsigned __int64 v165; // rbx
  unsigned __int64 v166; // r14
  size_t v167; // r12
  unsigned __int64 v168; // r15
  __int64 *v169; // r14
  char *v170; // r12
  __int64 v171; // r15
  const void *v172; // rbx
  size_t v173; // r13
  size_t v174; // rdx
  __int64 v175; // rsi
  unsigned __int64 v176; // rax
  size_t v177; // rdx
  __int64 v178; // rsi
  unsigned __int64 v179; // rax
  __int64 v180; // rsi
  unsigned __int64 v181; // r14
  unsigned __int64 v182; // r14
  unsigned __int64 v183; // r13
  unsigned __int64 v184; // r12
  unsigned __int64 v185; // r13
  unsigned __int64 v186; // rbx
  unsigned __int64 v187; // rax
  unsigned __int64 v188; // rbx
  char v189; // r13
  char v190; // r12
  __int64 v191; // rax
  size_t v192; // r12
  unsigned __int64 v193; // rbx
  unsigned __int64 v194; // r15
  unsigned __int64 v195; // rbx
  size_t v196; // rdx
  int v197; // eax
  __int64 v198; // rcx
  unsigned __int64 v199; // rbx
  __int64 v200; // rsi
  int v201; // eax
  __int64 v202; // rcx
  __int64 v203; // rsi
  unsigned __int64 v204; // rbx
  size_t v205; // rdx
  int v206; // eax
  __int64 v207; // rcx
  unsigned int v208; // eax
  size_t v209; // rdx
  __int64 v210; // rsi
  unsigned __int64 v211; // rax
  __int64 v212; // rax
  _QWORD v213[18]; // [rsp+8h] [rbp-7F8h] BYREF
  _QWORD v214[18]; // [rsp+98h] [rbp-768h] BYREF
  _QWORD v215[3]; // [rsp+128h] [rbp-6D8h] BYREF
  _QWORD v216[3]; // [rsp+140h] [rbp-6C0h] BYREF
  _QWORD v217[3]; // [rsp+158h] [rbp-6A8h] BYREF
  _QWORD __dst[19]; // [rsp+170h] [rbp-690h] BYREF
  __int64 v219[2]; // [rsp+208h] [rbp-5F8h] BYREF
  __int64 v220; // [rsp+218h] [rbp-5E8h]
  _QWORD *v221; // [rsp+220h] [rbp-5E0h]
  unsigned __int64 v222; // [rsp+228h] [rbp-5D8h]
  unsigned __int64 *v223; // [rsp+230h] [rbp-5D0h]
  size_t v224; // [rsp+238h] [rbp-5C8h]
  __int64 v225; // [rsp+240h] [rbp-5C0h] BYREF
  void *v226; // [rsp+248h] [rbp-5B8h]
  __int64 v227; // [rsp+250h] [rbp-5B0h]
  unsigned __int64 v228; // [rsp+258h] [rbp-5A8h] BYREF
  void *v229; // [rsp+260h] [rbp-5A0h]
  unsigned __int64 v230; // [rsp+268h] [rbp-598h]
  __int64 v231; // [rsp+270h] [rbp-590h] BYREF
  void *v232; // [rsp+278h] [rbp-588h]
  size_t v233; // [rsp+280h] [rbp-580h]
  __int64 v234; // [rsp+288h] [rbp-578h]
  __int64 v235; // [rsp+290h] [rbp-570h]
  __int64 v236; // [rsp+298h] [rbp-568h]
  size_t v237; // [rsp+2A0h] [rbp-560h]
  __int64 v238; // [rsp+2A8h] [rbp-558h]
  unsigned __int64 v239; // [rsp+2B0h] [rbp-550h] BYREF
  unsigned __int64 v240; // [rsp+2B8h] [rbp-548h]
  unsigned __int64 v241; // [rsp+2C0h] [rbp-540h] BYREF
  unsigned __int64 v242; // [rsp+2C8h] [rbp-538h]
  unsigned __int64 v243; // [rsp+2D0h] [rbp-530h]
  unsigned int v244; // [rsp+2DCh] [rbp-524h]
  int v245; // [rsp+2E0h] [rbp-520h]
  unsigned int v246; // [rsp+2E4h] [rbp-51Ch]
  _QWORD v247[19]; // [rsp+2E8h] [rbp-518h] BYREF
  _BYTE v248[176]; // [rsp+380h] [rbp-480h] BYREF
  size_t v249; // [rsp+430h] [rbp-3D0h] BYREF
  void *v250; // [rsp+438h] [rbp-3C8h]
  unsigned __int64 v251; // [rsp+440h] [rbp-3C0h]
  __int64 v252; // [rsp+448h] [rbp-3B8h] BYREF
  __int64 v253[18]; // [rsp+450h] [rbp-3B0h] BYREF
  char *v254; // [rsp+4E0h] [rbp-320h] BYREF
  size_t v255; // [rsp+4E8h] [rbp-318h]
  __int64 v256; // [rsp+4F0h] [rbp-310h]
  unsigned __int64 v257; // [rsp+4F8h] [rbp-308h]
  unsigned __int64 __src[53]; // [rsp+500h] [rbp-300h] BYREF
  __int64 v259; // [rsp+6A8h] [rbp-158h]
  __int64 v260; // [rsp+6B0h] [rbp-150h] BYREF
  __int64 v261; // [rsp+6B8h] [rbp-148h]
  __int64 v262; // [rsp+6C0h] [rbp-140h]
  unsigned int v263; // [rsp+6CCh] [rbp-134h] BYREF
  size_t v264; // [rsp+6D0h] [rbp-130h]
  void *v265; // [rsp+6D8h] [rbp-128h]
  _QWORD v266[22]; // [rsp+6E0h] [rbp-120h] BYREF
  _QWORD *v267; // [rsp+790h] [rbp-70h]
  __int64 v268; // [rsp+798h] [rbp-68h]
  __int64 v269; // [rsp+7A0h] [rbp-60h]
  size_t v270; // [rsp+7A8h] [rbp-58h]
  void *v271; // [rsp+7B0h] [rbp-50h]
  void *v272; // [rsp+7B8h] [rbp-48h]
  unsigned int v273; // [rsp+7C0h] [rbp-40h] BYREF
  unsigned int v274; // [rsp+7C4h] [rbp-3Ch] BYREF
  void *v275; // [rsp+7C8h] [rbp-38h]
  __int64 v276; // [rsp+7D0h] [rbp-30h]

  v221 = a1;
  v260 = 0;
  v261 = 8;
  v262 = 0;
  v4 = a2[25];
  v267 = a2;
  v5 = a2[26];
  v268 = v4;
  v259 = v5;
  std::path::Path::_join::hb1a495d4f06b13b8(v266, v4, v5, "account-removal-quarantine", 26);
  v6 = v266[1];
  std::sys::fs::metadata::h32fa16d3052ea535(__src, v266[1], v266[2]);
  if ( !LOBYTE(__src[0]) )
  {
    if ( v266[0] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v266[0], 1);
    v9 = v267[28];
    v10 = v267[29];
    *(double *)a3.i64 = codexmate_lib::core::repository::Repository::load_registry::h67f16c6afc4d64cc(__src, v9, v10);
    if ( LODWORD(__src[0]) != 11 )
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__src);
      goto LABEL_16;
    }
    v264 = v10;
    v269 = v9;
    qmemcpy(v248, &__src[1], 0x58u);
    v11 = *(_QWORD *)&v248[16];
    v270 = *(_QWORD *)&v248[8];
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::he617331f25b8d6e6(
      v219,
      *(_QWORD *)&v248[8],
      *(_QWORD *)&v248[8] + 424LL * *(_QWORD *)&v248[16],
      *(double *)a3.i64);
    v12 = v220;
    if ( v220 )
    {
      v271 = (void *)v219[1];
      v276 = 24 * v220;
      v3 = v267[31];
      v13 = v267[32];
      v14 = 0;
      while ( 1 )
      {
        v15 = (size_t)__src;
        codexmate_lib::core::auth::ensure_managed_account_snapshot_location::hac13c2585495a048(
          __src,
          *(void **)((char *)v271 + v14 + 8),
          *(_QWORD *)((char *)v271 + v14 + 16),
          v3,
          v13);
        if ( __src[0] != 11 )
          break;
        v14 += 24;
        if ( v276 == v14 )
          goto LABEL_12;
      }
      v276 = __src[0];
      v32 = __src[1];
      v275 = (void *)__src[2];
      v17 = __src[3];
      v247[0] = __src[4];
      v247[1] = __src[5];
      v247[2] = __src[6];
      v247[3] = __src[7];
      v247[4] = __src[8];
      v247[5] = __src[9];
      v247[6] = __src[10];
      v247[7] = __src[11];
      v33 = (size_t *)((char *)v271 + 8);
      do
      {
        v34 = *(v33 - 1);
        if ( v34 )
        {
          v15 = *v33;
          *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v33, v34, 1);
        }
        v33 += 3;
        --v12;
      }
      while ( v12 );
      v272 = (void *)v32;
      v3 = HIDWORD(v32);
      if ( v219[0] )
      {
        v15 = (size_t)v271;
        *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v271, 24 * v219[0], 8);
      }
      v16 = v275;
      v30 = *(_QWORD *)&v248[24];
      v31 = *(_QWORD *)&v248[24] != 0;
      if ( __OFSUB__(-*(_QWORD *)&v248[24], 1) )
        goto LABEL_53;
      goto LABEL_51;
    }
LABEL_12:
    v15 = (size_t)__src;
    codexmate_lib::core::account_coordination::acquire_snapshot_locks::hbe1ca0ff4bf12d73((__int64)__src, v219);
    v16 = (void *)__src[2];
    v17 = __src[3];
    if ( __src[0] != 11 )
    {
      v276 = __src[0];
      v247[7] = __src[11];
      v247[6] = __src[10];
      v247[5] = __src[9];
      v247[4] = __src[8];
      v247[3] = __src[7];
      v247[2] = __src[6];
      v247[1] = __src[5];
      v247[0] = __src[4];
      v3 = HIDWORD(__src[1]);
      v272 = (void *)__src[1];
      v30 = *(_QWORD *)&v248[24];
      v31 = *(_QWORD *)&v248[24] != 0;
      if ( __OFSUB__(-*(_QWORD *)&v248[24], 1) )
      {
LABEL_53:
        if ( v11 )
        {
          v38 = v270;
          do
          {
            v15 = v38;
            core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v38);
            v38 += 424LL;
            --v11;
          }
          while ( v11 );
        }
        if ( *(_QWORD *)v248 )
        {
          v30 = 424LL * *(_QWORD *)v248;
          v15 = v270;
          *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v270, 424LL * *(_QWORD *)v248, 8);
        }
        __src[0] = v276;
        __src[1] = (v3 << 32) | (unsigned int)v272;
        __src[2] = (unsigned __int64)v16;
        __src[3] = v17;
        __src[4] = v247[0];
        __src[5] = v247[1];
        __src[6] = v247[2];
        __src[7] = v247[3];
        __src[8] = v247[4];
        __src[9] = v247[5];
        __src[10] = v247[6];
        __src[11] = v247[7];
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v15, v30);
        v39 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(33, 1);
        if ( !v39 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 33);
        v40 = v39;
        qmemcpy(v39, "ACCOUNT_REMOVAL_RECOVERY_DEFERRED", 33);
        v266[0] = __src;
        v266[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v217, &unk_1017C9372, v266);
        v266[0] = 33;
        v266[1] = v40;
        v266[2] = 33;
        v266[3] = v217[0];
        v266[4] = v217[1];
        v266[5] = v217[2];
        v41 = v262;
        if ( v262 == v260 )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf847a1797025d094(&v260);
        v42 = v261;
        v43 = 48 * v41;
        *(_QWORD *)(v261 + v43 + 40) = v266[5];
        *(_QWORD *)(v42 + v43 + 32) = v266[4];
        *(_QWORD *)(v42 + v43 + 24) = v266[3];
        *(_QWORD *)(v42 + v43 + 16) = v266[2];
        v44 = v266[0];
        *(_QWORD *)(v42 + v43 + 8) = v266[1];
        *(_QWORD *)(v42 + v43) = v44;
        v262 = v41 + 1;
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__src);
        goto LABEL_62;
      }
LABEL_51:
      if ( v31 )
      {
        v15 = *(_QWORD *)&v248[32];
        *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v248[32], v30, 1);
      }
      goto LABEL_53;
    }
    v271 = (void *)__src[1];
    __dst[0] = __src[1];
    __dst[1] = __src[2];
    __dst[2] = __src[3];
    std::path::Path::_join::hb1a495d4f06b13b8(&v252, v268, v259, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_51, 20);
    v275 = v16;
    v18 = v253[0];
    v15 = (size_t)__src;
    codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673(
      (__int64)__src,
      v253[0],
      v253[1],
      (__int64)"account state.oauth-refresh.lock",
      13);
    v19 = __src[0];
    v276 = __src[0];
    if ( __src[0] != 11 )
    {
      v3 = HIDWORD(__src[1]);
      v265 = (void *)__src[2];
      v257 = __src[3];
      v266[0] = __src[4];
      v266[1] = __src[5];
      v266[2] = __src[6];
      v266[3] = __src[7];
      v266[4] = __src[8];
      v266[5] = __src[9];
      v266[6] = __src[10];
      v266[7] = __src[11];
      v19 = v276;
    }
    v272 = (void *)LODWORD(__src[1]);
    if ( v252 )
    {
      v15 = v18;
      *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v252, 1);
      v19 = v276;
    }
    if ( v19 == 11 )
    {
      LODWORD(v213[0]) = (_DWORD)v272;
      *(double *)a3.i64 = codexmate_lib::core::repository::Repository::load_registry::h67f16c6afc4d64cc(
                            __src,
                            v269,
                            v264);
      v35 = (unsigned int *)v275;
      v36 = __src[1];
      v252 = __src[4];
      v253[0] = __src[5];
      v253[1] = __src[6];
      v253[2] = __src[7];
      v253[3] = __src[8];
      v253[4] = __src[9];
      v253[5] = __src[10];
      v253[6] = __src[11];
      if ( __src[0] == 11 )
      {
        v266[0] = __src[1];
        v266[1] = __src[2];
        v266[2] = __src[3];
        v266[3] = v252;
        v266[4] = v253[0];
        v266[5] = v253[1];
        v266[6] = v253[2];
        v266[7] = v253[3];
        v266[8] = v253[4];
        v266[9] = v253[5];
        v266[10] = v253[6];
        codexmate_lib::core::repository::Repository::recover_account_removal_quarantine::h6d417a44c4777f97(
          __src,
          v267,
          __src[2],
          __src[3],
          *(double *)a3.i64);
        v22 = __src[0];
        v20 = __src[1];
        v21 = __src[2];
        core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::h9ddd84037bae2456(v266);
        core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h31c48f7e6d5138e7(
          v213,
          *(double *)a3.i64);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..account_coordination..AccountSnapshotLock$GT$$GT$::hf56a78b2c10ddc81(__dst);
        v23 = v22 & 0xFFFFFFFF00000000LL;
        core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::h9ddd84037bae2456(v248);
        v22 = (unsigned int)v22;
        goto LABEL_17;
      }
      v257 = __src[3];
      v265 = (void *)__src[2];
      v276 = __src[0];
      v247[7] = v253[6];
      v247[6] = v253[5];
      v247[5] = v253[4];
      v247[4] = v253[3];
      v247[3] = v253[2];
      v247[2] = v253[1];
      v247[1] = v253[0];
      v247[0] = v252;
      v15 = (size_t)v213;
      core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h31c48f7e6d5138e7(
        v213,
        *(double *)a3.i64);
      v272 = (void *)v36;
      v3 = HIDWORD(v36);
      if ( !v17 )
      {
LABEL_48:
        if ( v271 )
        {
          v15 = (size_t)v35;
          *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35, 4LL * (_QWORD)v271, 4);
        }
        v17 = v257;
        v16 = v265;
        v30 = *(_QWORD *)&v248[24];
        v31 = *(_QWORD *)&v248[24] != 0;
        if ( __OFSUB__(-*(_QWORD *)&v248[24], 1) )
          goto LABEL_53;
        goto LABEL_51;
      }
    }
    else
    {
      v247[7] = v266[7];
      v247[6] = v266[6];
      v247[5] = v266[5];
      v247[4] = v266[4];
      v247[3] = v266[3];
      v247[2] = v266[2];
      v247[1] = v266[1];
      v247[0] = v266[0];
      v35 = (unsigned int *)v275;
      if ( !v17 )
        goto LABEL_48;
    }
    v37 = v35;
    do
    {
      _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(v37);
      v15 = *v37;
      close_NOCANCEL(v15);
      ++v37;
      --v17;
    }
    while ( v17 );
    goto LABEL_48;
  }
  if ( (__src[1] & 3) == 1 )
  {
    v26 = __src[1] - 1;
    v27 = *(_QWORD *)(__src[1] - 1);
    v28 = *(_QWORD *)(__src[1] + 7);
    if ( *(_QWORD *)v28 )
      (*(void (__fastcall **)(__int64))v28)(v27);
    v29 = *(_QWORD *)(v28 + 8);
    if ( v29 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v29, *(_QWORD *)(v28 + 16));
    *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, 24, 8);
    v8 = v266[0];
    if ( !v266[0] )
      goto LABEL_16;
    goto LABEL_4;
  }
  v8 = v266[0];
  if ( v266[0] )
LABEL_4:
    *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v8, 1);
LABEL_16:
  v20 = 8;
  v21 = 0;
  v22 = 0;
  v23 = 0;
LABEL_17:
  v24 = v23 | v22;
  __src[0] = v24;
  __src[1] = v20;
  __src[2] = v21;
  v25 = v262;
  if ( v21 > v260 - v262 )
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v260, v262, v21, 8, 48, v7);
    v25 = v262;
  }
  memcpy((void *)(v261 + 48 * v25), (const void *)v20, 48 * v21);
  v262 += v21;
  if ( v24 )
    *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, 48 * v24, 8);
LABEL_62:
  v45 = (void *)v267[4];
  v46 = v267[5];
  v47 = (void *)v267[31];
  v271 = (void *)v267[32];
  codexmate_lib::core::repository::Repository::load_current_auth_snapshot::h8bef7fb94ca7d6d7(__src);
  if ( LODWORD(__src[0]) == 2 )
    goto LABEL_132;
  memcpy(__dst, __src, sizeof(__dst));
  v48 = (const void *)__dst[3];
  v49 = __dst[4];
  v275 = v47;
  codexmate_lib::core::auth::account_snapshot_path::hba769e00197999ad(
    (__int64 *)&v254,
    (__int64)v47,
    (__int64)v271,
    (unsigned __int8 *)__dst[3],
    __dst[4],
    v50);
  v51 = v255;
  codexmate_lib::core::account_coordination::snapshot_lock_path::h6366cdd791a9fbed((__int64)v248, v255, v256);
  v270 = v46;
  v272 = v45;
  v52 = *(_QWORD *)&v248[8];
  codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673(
    (__int64)__src,
    *(__int64 *)&v248[8],
    *(__int64 *)&v248[16],
    (__int64)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_56,
    18);
  v53 = __src[0];
  v276 = LODWORD(__src[1]);
  if ( __src[0] != 11 )
  {
    v54 = (_DWORD *)&__src[1] + 1;
    v55 = (_DWORD *)&v266[1] + 1;
    for ( i = 21; i; --i )
      *v55++ = *v54++;
  }
  if ( *(_QWORD *)v248 )
    *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, *(_QWORD *)v248, 1);
  if ( (_DWORD)v53 != 11 )
    goto LABEL_125;
  v274 = v276;
  std::path::Path::_join::hb1a495d4f06b13b8(v248, v268, v259, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_49, 15);
  v57 = *(_QWORD *)&v248[8];
  codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673(
    (__int64)__src,
    *(__int64 *)&v248[8],
    *(__int64 *)&v248[16],
    (__int64)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_50,
    9);
  v53 = __src[0];
  v276 = LODWORD(__src[1]);
  if ( __src[0] != 11 )
  {
    v58 = (_DWORD *)&__src[1] + 1;
    v59 = (_DWORD *)&v266[1] + 1;
    for ( j = 21; j; --j )
      *v59++ = *v58++;
  }
  if ( *(_QWORD *)v248 )
    *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v57, *(_QWORD *)v248, 1);
  if ( (_DWORD)v53 != 11 )
    goto LABEL_114;
  v273 = v276;
  v61 = v272;
  v62 = codexmate_lib::core::repository::Repository::load_current_auth_snapshot::h8bef7fb94ca7d6d7(__src);
  if ( LODWORD(__src[0]) == 2 )
  {
LABEL_78:
    v53 = 11;
    v276 = v62;
LABEL_79:
    _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v273);
    close_NOCANCEL(v273);
    goto LABEL_115;
  }
  memcpy(v247, __src, sizeof(v247));
  if ( v247[4] == v49 && !memcmp((const void *)v247[3], v48, v49) )
    goto LABEL_108;
  core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(v247);
  _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v273);
  close_NOCANCEL(v273);
  _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v274);
  close_NOCANCEL(v274);
  if ( v254 )
    *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v254, 1);
  core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(__dst);
  codexmate_lib::core::repository::Repository::load_current_auth_snapshot::h8bef7fb94ca7d6d7(__src);
  if ( LODWORD(__src[0]) == 2 )
    goto LABEL_132;
  memcpy(__dst, __src, sizeof(__dst));
  v49 = __dst[3];
  v63 = __dst[4];
  codexmate_lib::core::auth::account_snapshot_path::hba769e00197999ad(
    (__int64 *)&v254,
    (__int64)v275,
    (__int64)v271,
    (unsigned __int8 *)__dst[3],
    __dst[4],
    v64);
  v51 = v255;
  codexmate_lib::core::account_coordination::snapshot_lock_path::h6366cdd791a9fbed((__int64)v248, v255, v256);
  v65 = *(_QWORD *)&v248[8];
  codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673(
    (__int64)__src,
    *(__int64 *)&v248[8],
    *(__int64 *)&v248[16],
    (__int64)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_56,
    18);
  v53 = __src[0];
  v276 = LODWORD(__src[1]);
  if ( __src[0] != 11 )
  {
    v66 = (_DWORD *)&__src[1] + 1;
    v67 = (_DWORD *)&v266[1] + 1;
    for ( k = 21; k; --k )
      *v67++ = *v66++;
  }
  if ( *(_QWORD *)v248 )
    *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v65, *(_QWORD *)v248, 1);
  if ( (_DWORD)v53 != 11 )
    goto LABEL_125;
  v274 = v276;
  codexmate_lib::core::account_coordination::LiveAuthLock::acquire::h76d9b27c8b3ac4f8((__int64)v266, v268, v259);
  v53 = v266[0];
  v69 = LODWORD(v266[1]);
  if ( v266[0] != 11 )
  {
LABEL_113:
    v276 = v69;
LABEL_114:
    v49 = HIDWORD(v266[1]);
    v61 = (void *)v266[2];
    v51 = v266[3];
    *(_QWORD *)v248 = v266[4];
    *(_QWORD *)&v248[8] = v266[5];
    *(_QWORD *)&v248[16] = v266[6];
    *(_QWORD *)&v248[24] = v266[7];
    *(_QWORD *)&v248[32] = v266[8];
    *(_QWORD *)&v248[40] = v266[9];
    *(_QWORD *)&v248[48] = v266[10];
    *(_QWORD *)&v248[56] = v266[11];
LABEL_115:
    _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v274);
    close_NOCANCEL(v274);
    v74 = v254;
    if ( !v254 )
    {
LABEL_127:
      v75 = __dst;
      core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(__dst);
      if ( (_DWORD)v53 == 11 )
        goto LABEL_132;
      goto LABEL_128;
    }
LABEL_126:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v255, v74, 1);
    goto LABEL_127;
  }
  v273 = v266[1];
  v61 = v272;
  v62 = codexmate_lib::core::repository::Repository::load_current_auth_snapshot::h8bef7fb94ca7d6d7(__src);
  if ( LODWORD(__src[0]) == 2 )
    goto LABEL_78;
  memcpy(v247, __src, sizeof(v247));
  if ( v247[4] == v63 && !memcmp((const void *)v247[3], (const void *)v49, v63) )
  {
LABEL_108:
    codexmate_lib::core::account_coordination::AccountDomainLock::acquire::h3ce1b7e61ad69c28((__int64)__src, v268, v259);
    v53 = __src[0];
    if ( __src[0] != 11 )
    {
      v276 = LODWORD(__src[1]);
      v49 = HIDWORD(__src[1]);
      v61 = (void *)__src[2];
      v51 = __src[3];
      *(_QWORD *)v248 = __src[4];
      *(_QWORD *)&v248[8] = __src[5];
      *(_QWORD *)&v248[16] = __src[6];
      *(_QWORD *)&v248[24] = __src[7];
      *(_QWORD *)&v248[32] = __src[8];
      *(_QWORD *)&v248[40] = __src[9];
      *(_QWORD *)&v248[48] = __src[10];
      *(_QWORD *)&v248[56] = __src[11];
LABEL_120:
      core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(v247);
      goto LABEL_79;
    }
    v263 = __src[1];
    codexmate_lib::core::repository::Repository::load_registry_for_mutation::h2b0f27ffcaeb4a0b(
      (__int64)__src,
      v267[28],
      v267[29]);
    v53 = __src[0];
    v61 = (void *)__src[2];
    v51 = __src[3];
    v266[0] = __src[4];
    v266[1] = __src[5];
    v266[2] = __src[6];
    v266[3] = __src[7];
    v266[4] = __src[8];
    v266[5] = __src[9];
    v266[6] = __src[10];
    v266[7] = __src[11];
    if ( __src[0] != 11 )
    {
      v276 = __src[1];
      v49 = HIDWORD(__src[1]);
      *(_QWORD *)&v248[56] = v266[7];
      *(_QWORD *)&v248[48] = v266[6];
      *(_QWORD *)&v248[40] = v266[5];
      *(_QWORD *)&v248[32] = v266[4];
      *(_QWORD *)&v248[24] = v266[3];
      *(_QWORD *)&v248[16] = v266[2];
      *(_QWORD *)&v248[8] = v266[1];
      *(_QWORD *)v248 = v266[0];
      goto LABEL_119;
    }
    v228 = __src[1];
    v229 = (void *)__src[2];
    v230 = __src[3];
    v231 = v266[0];
    v232 = (void *)v266[1];
    v233 = v266[2];
    v234 = v266[3];
    v235 = v266[4];
    v236 = v266[5];
    v237 = v266[6];
    v238 = v266[7];
    v76 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h1799bcb22c1ee820(v267);
    if ( v76 )
    {
      v276 = v76;
      v49 = HIDWORD(v76);
      v53 = 2;
LABEL_112:
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::h9ddd84037bae2456(&v228);
LABEL_119:
      _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v263);
      close_NOCANCEL(v263);
      goto LABEL_120;
    }
    v78 = (void *)v247[3];
    v264 = v247[4];
    codexmate_lib::core::auth::account_snapshot_path::hba769e00197999ad(
      &v225,
      (__int64)v275,
      (__int64)v271,
      (unsigned __int8 *)v247[3],
      v247[4],
      v77);
    v79 = v227;
    v271 = v226;
    *(_QWORD *)v248 = v226;
    *(_QWORD *)&v248[8] = v227;
    v266[0] = 0;
    v266[1] = 1;
    v266[2] = 0;
    __src[2] = 1610612768;
    __src[0] = (unsigned __int64)v266;
    __src[1] = (unsigned __int64)&anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107;
    if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(v248, __src) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
        55,
        &v239,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
    v249 = v266[0];
    v250 = (void *)v266[1];
    v251 = v266[2];
    v80 = codexmate_lib::core::auth::current_timestamp::h91b9a68b914d25d6((__int64)v248, (__int64)__src);
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v248, &v247[2]);
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v266, &v247[5]);
    v81 = 0x8000000000000000LL;
    v276 = v80;
    v265 = v78;
    if ( __OFSUB__(0, v247[8]) )
    {
      v82 = 0x8000000000000000LL;
    }
    else
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, &v247[8]);
      v82 = __src[0];
      v275 = (void *)__src[1];
      v53 = __src[2];
    }
    v269 = v79;
    if ( v247[11] == 0x8000000000000000LL )
    {
      v152 = 0x8000000000000000LL;
    }
    else
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, &v247[11]);
      v152 = __src[0];
      v79 = __src[1];
      v81 = __src[2];
    }
    v153 = 0x8000000000000000LL;
    if ( v247[14] != 0x8000000000000000LL )
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, &v247[14]);
      v153 = __src[0];
      v213[0] = __src[1];
      v213[1] = __src[2];
    }
    v253[1] = *(_QWORD *)v248;
    v253[2] = *(_QWORD *)&v248[8];
    v253[3] = *(_QWORD *)&v248[16];
    v253[4] = v266[0];
    v253[5] = v266[1];
    v253[6] = v266[2];
    v253[7] = v82;
    v253[8] = (__int64)v275;
    v253[9] = v53;
    v253[10] = v152;
    v253[11] = v79;
    v253[12] = v81;
    v253[13] = v153;
    v253[14] = v213[0];
    v253[15] = v213[1];
    LOBYTE(v253[17]) = v247[18];
    v253[16] = v247[17];
    v252 = v247[0];
    v253[0] = v247[1];
    *(_WORD *)((char *)&v253[17] + 1) = *(_WORD *)((char *)&v247[18] + 1);
    v51 = v270;
    std::sys::fs::metadata::h32fa16d3052ea535(__src, v272, v270);
    v61 = (void *)0x8000000000000000LL;
    if ( LOBYTE(__src[0]) )
    {
      if ( (__src[1] & 3) == 1 )
      {
        v154 = __src[1] - 1;
        v155 = *(_QWORD *)(__src[1] - 1);
        v156 = *(_QWORD *)(__src[1] + 7);
        if ( *(_QWORD *)v156 )
          (*(void (__fastcall **)(__int64))v156)(v155);
        v157 = *(_QWORD *)(v156 + 8);
        if ( v157 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v155, v157, *(_QWORD *)(v156 + 16));
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v154, 24, 8);
      }
      v158 = 0;
      goto LABEL_229;
    }
    std::fs::read::inner::h6a30c15c40add28b(__src, v272, v51);
    v181 = __src[0];
    if ( __src[0] == 0x8000000000000000LL )
    {
      v53 = 2;
      v182 = __src[1];
LABEL_354:
      core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(&v252);
      v276 = v182;
      v49 = HIDWORD(v182);
      goto LABEL_355;
    }
    v272 = (void *)__src[1];
    v266[0] = __src[1];
    v270 = __src[2];
    v266[1] = __src[2];
    v266[2] = 0;
    v266[3] = 0;
    serde_json::de::from_trait::hee93ab9047d5d7fd(__src, v266);
    v51 = __src[0];
    v184 = __src[1];
    v185 = 0x8000000000000001LL;
    if ( __src[0] == 0x8000000000000001LL )
    {
      v53 = 3;
LABEL_351:
      if ( v181 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v272, v181, 1);
      v182 = v184;
      goto LABEL_354;
    }
    memcpy(&v248[16], &__src[2], 0xA0u);
    *(_QWORD *)v248 = __src[0];
    *(_QWORD *)&v248[8] = __src[1];
    v192 = v269;
    codexmate_lib::core::auth::load_auth_file::h495f6935c70eecba(__src, (__int64)v271, v269);
    if ( __src[0] == 0x8000000000000001LL )
    {
      v185 = 0x8000000000000001LL;
      v266[0] = 0x8000000000000001LL;
      core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..auth..AuthFile$C$codexmate_lib..core..models..CoreError$GT$$GT$::hd3aa434a4c2414eb(__src);
      goto LABEL_341;
    }
    memcpy(v266, __src, sizeof(v266));
    v193 = v266[0];
    if ( v266[0] != 0x8000000000000001LL )
    {
      if ( codexmate_lib::core::oauth_refresh::auth_is_newer::h8388ebc832e4acfe(v266, v248) )
      {
        codexmate_lib::core::auth::make_auth_snapshot::h0711ba2f125fb190(
          (__int64 *)__src,
          v266,
          (__int64)v271,
          v269,
          a3);
        v194 = __src[0];
        if ( __src[0] == 2 )
        {
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&__src[1]);
          v192 = v269;
          v185 = v193;
          goto LABEL_341;
        }
        memcpy(v214, &__src[1], sizeof(v214));
        memcpy(&__src[1], v214, 0x90u);
        if ( __src[4] == v264 && !memcmp((const void *)__src[3], v265, v264) )
        {
          memcpy(v213, v214, sizeof(v213));
          core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(&v252);
          v252 = v194;
          memcpy(v253, v213, sizeof(v253));
          LODWORD(v51) = 0;
          goto LABEL_361;
        }
        core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(__src);
        v185 = v193;
      }
      else
      {
        v185 = v193;
      }
      v192 = v269;
    }
LABEL_341:
    std::fs::read::inner::h6a30c15c40add28b(__src, v271, v192);
    v51 = __src[0];
    if ( __src[0] == 0x8000000000000000LL )
    {
      core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..vec..Vec$LT$u8$GT$$C$std..io..error..Error$GT$$GT$::haf2cc967f6a0bdad(__src);
    }
    else
    {
      v275 = (void *)__src[1];
      if ( __src[2] == v270 && !memcmp(v275, v272, v270) )
      {
        if ( v51 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v275, v51, 1);
          LODWORD(v51) = 0;
          v185 = v266[0];
        }
        else
        {
          LODWORD(v51) = 0;
        }
        goto LABEL_360;
      }
      if ( v51 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v275, v51, 1);
    }
    v212 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(
             v271,
             v192,
             (__int64)v272,
             v270,
             1);
    v185 = v266[0];
    if ( v212 )
    {
      v184 = v212;
      v61 = (void *)0x8000000000000001LL;
      if ( v266[0] != 0x8000000000000001LL )
        core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(v266);
      core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(v248);
      v53 = 2;
      goto LABEL_351;
    }
    LOBYTE(v51) = 1;
LABEL_360:
    if ( v185 == 0x8000000000000001LL )
    {
LABEL_362:
      core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(v248);
      if ( v181 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v272, v181, 1);
      v158 = v51;
LABEL_229:
      v266[0] = (char *)&v253[17] + 2;
      v266[1] = _$LT$codexmate_lib..core..models..PlanType$u20$as$u20$core..fmt..Debug$GT$::fmt::h71fbfa2e86e65c01;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &unk_1017B9036, v266);
      v159 = __src[0];
      v160 = __src[1];
      alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(&v241, __src[1], __src[2]);
      LODWORD(v275) = v158;
      if ( v159 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v160, v159, 1);
      chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(__src);
      v161 = __src[0];
      v162 = (SLODWORD(__src[0]) >> 13) - 1;
      v163 = 0;
      if ( SLODWORD(__src[0]) >> 13 <= 0 )
      {
        v164 = (1 - (SLODWORD(__src[0]) >> 13)) / 0x190u + 1;
        v162 += 400 * v164;
        v163 = -146097 * v164;
      }
      v270 = HIDWORD(__src[0]);
      v272 = (void *)LODWORD(__src[1]);
      v266[0] = &v253[17];
      v266[1] = _$LT$codexmate_lib..core..models..AuthMode$u20$as$u20$core..fmt..Debug$GT$::fmt::h4432a944c532829d;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &unk_1017B9036, v266);
      v165 = __src[0];
      v166 = __src[1];
      alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(v214, __src[1], __src[2]);
      v167 = 1000
           * (v270
            + 86400LL
            * (int)(((v162 / 100) >> 2) + ((1461 * v162) >> 2) + v163 + ((v161 >> 4) & 0x1FF) - v162 / 100 - 719163));
      v168 = (unsigned __int64)(1125899907LL * (_QWORD)v272) >> 50;
      if ( v165 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v166, v165, 1);
      v169 = &v253[4];
      v170 = (char *)(v168 + v167);
      v272 = v170;
      if ( !v230 )
      {
LABEL_255:
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v248, &v253[1]);
        v61 = (void *)0x8000000000000000LL;
        v270 = v249;
        v183 = v251;
        v275 = v250;
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v266, &v253[4]);
        if ( v253[7] == 0x8000000000000000LL )
        {
          v269 = 0x8000000000000000LL;
        }
        else
        {
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, &v253[7]);
          v269 = __src[0];
          v264 = __src[1];
          v265 = (void *)__src[2];
        }
        if ( v253[10] == 0x8000000000000000LL )
        {
          v186 = 0x8000000000000000LL;
        }
        else
        {
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, &v253[10]);
          v186 = __src[0];
          v170 = (char *)__src[1];
          v169 = (__int64 *)__src[2];
        }
        v187 = 0x8000000000000000LL;
        if ( v253[13] != 0x8000000000000000LL )
        {
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, &v253[13]);
          v187 = __src[0];
          v239 = __src[1];
          v240 = __src[2];
        }
        __src[38] = v243;
        __src[37] = v242;
        __src[36] = v241;
        __src[39] = v214[0];
        __src[40] = v214[1];
        __src[41] = v214[2];
        __src[24] = *(_QWORD *)v248;
        __src[25] = *(_QWORD *)&v248[8];
        __src[26] = *(_QWORD *)&v248[16];
        __src[27] = v270;
        __src[28] = (unsigned __int64)v275;
        __src[29] = v183;
        __src[30] = v266[0];
        __src[31] = v266[1];
        __src[32] = v266[2];
        __src[33] = 0;
        __src[34] = 1;
        __src[35] = 0;
        __src[42] = v269;
        __src[43] = v264;
        __src[44] = (unsigned __int64)v265;
        __src[45] = v186;
        __src[46] = (unsigned __int64)v170;
        __src[47] = (unsigned __int64)v169;
        __src[48] = v187;
        __src[50] = v240;
        __src[49] = v239;
        __src[0] = 1;
        __src[1] = (unsigned __int64)v272;
        __src[2] = 0;
        LODWORD(__src[52]) = 50332162;
        __src[4] = 0;
        __src[6] = 0;
        __src[8] = 0;
        __src[51] = v253[16];
        __src[10] = 1;
        v49 = v276;
        __src[11] = v276;
        __src[12] = 0;
        __src[14] = 2;
        __src[19] = 2;
        v188 = v230;
        if ( v230 == v228 )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hc88e865975d55355(&v228);
        memcpy((char *)v229 + 424 * v188, __src, 0x1A8u);
        v230 = v188 + 1;
        v189 = 1;
        v51 = 0;
        goto LABEL_268;
      }
      v170 = (char *)v229;
      v171 = 424 * v230;
      v172 = (const void *)v253[2];
      v173 = v253[3];
      while ( *((_QWORD *)v170 + 26) != v173 || memcmp(*((const void **)v170 + 25), v172, v173) )
      {
        v170 += 424;
        v171 -= 424;
        if ( !v171 )
          goto LABEL_255;
      }
      v174 = *((_QWORD *)v170 + 29);
      v61 = (void *)0x8000000000000000LL;
      if ( v174 != v251 || memcmp(*((const void **)v170 + 28), v250, v174) )
      {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, &v249);
        v175 = *((_QWORD *)v170 + 27);
        if ( v175 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v170 + 28), v175, 1);
        *((_QWORD *)v170 + 29) = __src[2];
        v176 = __src[0];
        *((_QWORD *)v170 + 28) = __src[1];
        *((_QWORD *)v170 + 27) = v176;
        LOBYTE(v176) = 1;
        LODWORD(v275) = v176;
      }
      v177 = *((_QWORD *)v170 + 32);
      if ( v177 != v253[6] || memcmp(*((const void **)v170 + 31), (const void *)v253[5], v177) )
      {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, &v253[4]);
        v178 = *((_QWORD *)v170 + 30);
        if ( v178 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v170 + 31), v178, 1);
        *((_QWORD *)v170 + 32) = __src[2];
        v179 = __src[0];
        *((_QWORD *)v170 + 31) = __src[1];
        *((_QWORD *)v170 + 30) = v179;
        LOBYTE(v179) = 1;
        LODWORD(v275) = v179;
      }
      v180 = *((_QWORD *)v170 + 42);
      if ( v180 == 0x8000000000000000LL )
      {
        if ( v253[7] == 0x8000000000000000LL )
          goto LABEL_311;
      }
      else
      {
        if ( v253[7] == 0x8000000000000000LL )
        {
          v195 = 0x8000000000000000LL;
          goto LABEL_308;
        }
        v196 = *((_QWORD *)v170 + 44);
        if ( v196 == v253[9] && !memcmp(*((const void **)v170 + 43), (const void *)v253[8], v196) )
        {
LABEL_311:
          if ( *((_QWORD *)v170 + 45) == 0x8000000000000000LL && v253[10] != 0x8000000000000000LL )
          {
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, &v253[10]);
            v199 = __src[0];
            v266[0] = __src[1];
            v266[1] = __src[2];
            v200 = *((_QWORD *)v170 + 45);
            if ( v200 != 0x8000000000000000LL && v200 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v170 + 46), v200, 1);
            *((_QWORD *)v170 + 45) = v199;
            v201 = v266[0];
            v202 = v266[1];
            *((_QWORD *)v170 + 46) = v266[0];
            *((_QWORD *)v170 + 47) = v202;
            LOBYTE(v201) = 1;
            LODWORD(v275) = v201;
          }
          v203 = *((_QWORD *)v170 + 48);
          if ( v203 == 0x8000000000000000LL )
          {
            if ( v253[13] == 0x8000000000000000LL )
              goto LABEL_328;
          }
          else
          {
            if ( v253[13] == 0x8000000000000000LL )
            {
              v204 = 0x8000000000000000LL;
              goto LABEL_325;
            }
            v205 = *((_QWORD *)v170 + 50);
            if ( v205 == v253[15] && !memcmp(*((const void **)v170 + 49), (const void *)v253[14], v205) )
            {
LABEL_328:
              v208 = codexmate_lib::core::repository::apply_plan_state::h33911d6dab757bc8(
                       (unsigned __int8 *)v170,
                       SBYTE2(v253[17]),
                       0,
                       (__int64)v272);
              v209 = *((_QWORD *)v170 + 41);
              if ( v209 == v214[2] && (v51 = v208, !memcmp(*((const void **)v170 + 40), (const void *)v214[1], v209)) )
              {
                v189 = v51 | (unsigned __int8)v275;
                v49 = v276;
                LOBYTE(v51) = 1;
                if ( *((_QWORD *)v170 + 10) )
                {
LABEL_268:
                  if ( v231 != 0x8000000000000000LL && v233 == v253[3] && !memcmp(v232, (const void *)v253[2], v233) )
                  {
                    v190 = v51;
                    if ( !v189 )
                    {
LABEL_277:
                      if ( v190 )
                      {
                        if ( v214[0] )
                          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v214[1], v214[0], 1);
                        if ( v241 )
                          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v242, v241, 1);
                        v191 = core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(&v252);
                        if ( v249 )
                          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v250, v249, 1);
                      }
                      else
                      {
                        v191 = core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(&v252);
                      }
                      if ( v225 )
                        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v271, v225, 1);
                      v53 = 11;
                      v276 = v191;
                      goto LABEL_112;
                    }
                  }
                  else
                  {
                    v190 = v51;
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                      __src,
                      &v253[1]);
                    v51 = (size_t)&v231;
                    v266[2] = __src[2];
                    v266[1] = __src[1];
                    v266[0] = __src[0];
                    if ( v231 != 0x8000000000000000LL && v231 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v232, v231, 1);
                    v233 = v266[2];
                    v232 = (void *)v266[1];
                    v231 = v266[0];
                  }
                  __src[0] = (unsigned __int64)&v239;
                  if ( v230 >= 2 )
                  {
                    if ( v230 >= 0x15 )
                      core::slice::sort::stable::driftsort_main::h0abeafe00a04d969(v229, v230, __src);
                    else
                      core::slice::sort::shared::smallsort::insertion_sort_shift_left::hb67b9aea802eba65(v229);
                  }
                  v237 = v49;
                  codexmate_lib::core::repository::Repository::persist_registry::he46753ae51d51c8f(
                    __src,
                    (__int64)v267,
                    (__int64)&v228,
                    0);
                  v53 = __src[0];
                  if ( __src[0] == 11 )
                    goto LABEL_277;
                  v61 = (void *)__src[2];
                  v276 = __src[1];
                  v49 = HIDWORD(__src[1]);
                  v51 = __src[3];
                  *(_QWORD *)v248 = __src[4];
                  *(_QWORD *)&v248[8] = __src[5];
                  *(_QWORD *)&v248[16] = __src[6];
                  *(_QWORD *)&v248[24] = __src[7];
                  *(_QWORD *)&v248[32] = __src[8];
                  *(_QWORD *)&v248[40] = __src[9];
                  *(_QWORD *)&v248[48] = __src[10];
                  *(_QWORD *)&v248[56] = __src[11];
                  if ( !v190 )
                  {
                    core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(&v252);
LABEL_357:
                    if ( v225 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v271, v225, 1);
                    goto LABEL_112;
                  }
                  if ( v214[0] )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v214[1], v214[0], 1);
                  if ( v241 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v242, v241, 1);
                  core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(&v252);
LABEL_355:
                  if ( v249 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v250, v249, 1);
                  goto LABEL_357;
                }
              }
              else
              {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, v214);
                v51 = (size_t)(v170 + 312);
                v210 = *((_QWORD *)v170 + 39);
                if ( v210 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v170 + 40), v210, 1);
                *((_QWORD *)v170 + 41) = __src[2];
                v211 = __src[0];
                *((_QWORD *)v170 + 40) = __src[1];
                *(_QWORD *)v51 = v211;
                v189 = 1;
                v49 = v276;
                LOBYTE(v51) = 1;
                if ( *((_QWORD *)v170 + 10) )
                  goto LABEL_268;
              }
              *((_QWORD *)v170 + 10) = 1;
              *((_QWORD *)v170 + 11) = v49;
              LOBYTE(v51) = 1;
              v189 = 1;
              goto LABEL_268;
            }
          }
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, &v253[13]);
          v204 = __src[0];
          v266[0] = __src[1];
          v266[1] = __src[2];
          v203 = *((_QWORD *)v170 + 48);
          if ( v203 == 0x8000000000000000LL )
          {
LABEL_327:
            *((_QWORD *)v170 + 48) = v204;
            v206 = v266[0];
            v207 = v266[1];
            *((_QWORD *)v170 + 49) = v266[0];
            *((_QWORD *)v170 + 50) = v207;
            LOBYTE(v206) = 1;
            LODWORD(v275) = v206;
            goto LABEL_328;
          }
LABEL_325:
          if ( v203 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v170 + 49), v203, 1);
          goto LABEL_327;
        }
      }
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, &v253[7]);
      v195 = __src[0];
      v266[0] = __src[1];
      v266[1] = __src[2];
      v180 = *((_QWORD *)v170 + 42);
      if ( v180 == 0x8000000000000000LL )
      {
LABEL_310:
        *((_QWORD *)v170 + 42) = v195;
        v197 = v266[0];
        v198 = v266[1];
        *((_QWORD *)v170 + 43) = v266[0];
        *((_QWORD *)v170 + 44) = v198;
        LOBYTE(v197) = 1;
        LODWORD(v275) = v197;
        goto LABEL_311;
      }
LABEL_308:
      if ( v180 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v170 + 43), v180, 1);
      goto LABEL_310;
    }
LABEL_361:
    core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(v266);
    goto LABEL_362;
  }
  core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(v247);
  _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v273);
  close_NOCANCEL(v273);
  _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v274);
  close_NOCANCEL(v274);
  if ( v254 )
    *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v254, 1);
  core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(__dst);
  codexmate_lib::core::repository::Repository::load_current_auth_snapshot::h8bef7fb94ca7d6d7(__src);
  if ( LODWORD(__src[0]) != 2 )
  {
    memcpy(__dst, __src, sizeof(__dst));
    v49 = __dst[3];
    v70 = __dst[4];
    codexmate_lib::core::auth::account_snapshot_path::hba769e00197999ad(
      (__int64 *)&v254,
      (__int64)v275,
      (__int64)v271,
      (unsigned __int8 *)__dst[3],
      __dst[4],
      v71);
    v51 = v255;
    codexmate_lib::core::account_coordination::AccountSnapshotLock::acquire::h470b55c48e4ac62c(
      (__int64)v266,
      v255,
      v256);
    v53 = v266[0];
    if ( v266[0] == 11 )
    {
      v274 = v266[1];
      codexmate_lib::core::account_coordination::LiveAuthLock::acquire::h76d9b27c8b3ac4f8((__int64)v266, v268, v259);
      v53 = v266[0];
      v69 = LODWORD(v266[1]);
      if ( v266[0] == 11 )
      {
        v273 = v266[1];
        v62 = codexmate_lib::core::repository::Repository::load_current_auth_snapshot::h8bef7fb94ca7d6d7(__src);
        if ( LODWORD(__src[0]) == 2 )
          goto LABEL_78;
        memcpy(v247, __src, sizeof(v247));
        if ( v247[4] != v70 || memcmp((const void *)v247[3], (const void *)v49, v70) )
        {
          core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(v247);
          _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v273);
          close_NOCANCEL(v273);
          _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v274);
          close_NOCANCEL(v274);
          v72 = (__int64)v254;
          if ( v254 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v51, v254, 1);
          core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthSnapshot$GT$::h753d6798caf2d93d(__dst);
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, v72);
          v51 = 67;
          v73 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(67, 1);
          if ( !v73 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 67);
          v61 = v73;
          v74 = "auth.json ownership kept changing while synchronizing account stateunknownaccount-removal-quarantine";
          v75 = v73;
          memcpy(
            v73,
            "auth.json ownership kept changing while synchronizing account stateunknownaccount-removal-quarantine",
            0x43u);
          v49 = 0;
          v276 = 67;
          v53 = 10;
LABEL_128:
          __src[0] = v53;
          __src[1] = (v49 << 32) | (unsigned int)v276;
          __src[2] = (unsigned __int64)v61;
          __src[3] = v51;
          __src[4] = *(_QWORD *)v248;
          __src[5] = *(_QWORD *)&v248[8];
          __src[6] = *(_QWORD *)&v248[16];
          __src[7] = *(_QWORD *)&v248[24];
          __src[8] = *(_QWORD *)&v248[32];
          __src[9] = *(_QWORD *)&v248[40];
          __src[10] = *(_QWORD *)&v248[48];
          __src[11] = *(_QWORD *)&v248[56];
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v75, v74);
          v83 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1);
          if ( !v83 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24);
          v84 = v83;
          qmemcpy(v83, "CURRENT_AUTH_SYNC_FAILED", 24);
          v266[0] = __src;
          v266[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(v216, &unk_1017C939F, v266);
          v266[0] = 24;
          v266[1] = v84;
          v266[2] = 24;
          v266[3] = v216[0];
          v266[4] = v216[1];
          v266[5] = v216[2];
          v85 = v262;
          if ( v262 == v260 )
            alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf847a1797025d094(&v260);
          v86 = v261;
          v87 = 48 * v85;
          *(_QWORD *)(v261 + v87 + 40) = v266[5];
          *(_QWORD *)(v86 + v87 + 32) = v266[4];
          *(_QWORD *)(v86 + v87 + 24) = v266[3];
          *(_QWORD *)(v86 + v87 + 16) = v266[2];
          v88 = v266[0];
          *(_QWORD *)(v86 + v87 + 8) = v266[1];
          *(_QWORD *)(v86 + v87) = v88;
          v262 = v85 + 1;
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__src);
          goto LABEL_132;
        }
        goto LABEL_108;
      }
      goto LABEL_113;
    }
    v276 = LODWORD(v266[1]);
LABEL_125:
    v49 = HIDWORD(v266[1]);
    v61 = (void *)v266[2];
    v51 = v266[3];
    *(_QWORD *)v248 = v266[4];
    *(_QWORD *)&v248[8] = v266[5];
    *(_QWORD *)&v248[16] = v266[6];
    *(_QWORD *)&v248[24] = v266[7];
    *(_QWORD *)&v248[32] = v266[8];
    *(_QWORD *)&v248[40] = v266[9];
    *(_QWORD *)&v248[48] = v266[10];
    *(_QWORD *)&v248[56] = v266[11];
    v74 = v254;
    if ( !v254 )
      goto LABEL_127;
    goto LABEL_126;
  }
LABEL_132:
  std::path::Path::_join::hb1a495d4f06b13b8(v248, v268, v259, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_51, 20);
  v89 = *(_QWORD *)&v248[8];
  codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673(
    (__int64)__src,
    *(__int64 *)&v248[8],
    *(__int64 *)&v248[16],
    (__int64)"account state.oauth-refresh.lock",
    13);
  v90 = __src[0];
  LODWORD(v91) = __src[1];
  if ( __src[0] != 11 )
  {
    v92 = (_DWORD *)&__src[1] + 1;
    v93 = v266;
    for ( m = 21; m; --m )
      *v93++ = *v92++;
  }
  if ( *(_QWORD *)v248 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v89, *(_QWORD *)v248, 1);
  if ( (_DWORD)v90 != 11 )
  {
    v105 = &v252;
    v106 = v266;
    for ( n = 21; n; --n )
    {
      *(_DWORD *)v105 = *v106++;
      v105 = (__int64 *)((char *)v105 + 4);
    }
    goto LABEL_207;
  }
  LODWORD(__dst[0]) = v91;
  codexmate_lib::core::repository::Repository::load_registry_for_mutation::h2b0f27ffcaeb4a0b(
    (__int64)__src,
    v267[28],
    v267[29]);
  v90 = __src[0];
  LODWORD(v91) = __src[1];
  v95 = (_DWORD *)&__src[1] + 1;
  v96 = v266;
  for ( ii = 21; ii; --ii )
    *v96++ = *v95++;
  if ( v90 != 11 )
  {
    v108 = &v252;
    v109 = v266;
    for ( jj = 21; jj; --jj )
    {
      *(_DWORD *)v108 = *v109++;
      v108 = (__int64 *)((char *)v108 + 4);
    }
    _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(__dst);
    close_NOCANCEL(LODWORD(__dst[0]));
LABEL_207:
    __src[0] = v90;
    LODWORD(__src[1]) = v91;
    v141 = (_DWORD *)&__src[1] + 1;
    v142 = &v252;
    for ( kk = 21; kk; --kk )
    {
      *v141 = *(_DWORD *)v142;
      v142 = (__int64 *)((char *)v142 + 4);
      ++v141;
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v141, v142);
    v144 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(29, 1);
    if ( !v144 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 29);
    v145 = v144;
    qmemcpy(v144, "LEGACY_QUOTA_MIGRATION_FAILED", 29);
    v266[0] = __src;
    v266[1] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v215, &unk_1017C93DD, v266);
    v266[0] = 29;
    v266[1] = v145;
    v266[2] = 29;
    v266[3] = v215[0];
    v266[4] = v215[1];
    v266[5] = v215[2];
    v146 = v262;
    if ( v262 == v260 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hf847a1797025d094(&v260);
    v147 = v261;
    v148 = 48 * v146;
    *(_QWORD *)(v261 + v148 + 40) = v266[5];
    *(_QWORD *)(v147 + v148 + 32) = v266[4];
    *(_QWORD *)(v147 + v148 + 24) = v266[3];
    *(_QWORD *)(v147 + v148 + 16) = v266[2];
    v149 = v266[0];
    *(_QWORD *)(v147 + v148 + 8) = v266[1];
    *(_QWORD *)(v147 + v148) = v149;
    v262 = v146 + 1;
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__src);
    goto LABEL_214;
  }
  *(_DWORD *)v248 = v91;
  v98 = &v248[4];
  v99 = v266;
  for ( mm = 21; mm; --mm )
    *v98++ = *v99++;
  v101 = (unsigned __int64 *)v267[52];
  v102 = v267[53];
  v103 = v266;
  v104 = v101;
  codexmate_lib::core::quota_store::load::h655f425e55903b24(v266, (__int64)v101, v102);
  v223 = v101;
  v224 = v102;
  if ( LODWORD(v266[0]) == 11 )
  {
    v247[4] = v266[5];
    v247[3] = v266[4];
    v247[2] = v266[3];
    v247[1] = v266[2];
    v247[0] = v266[1];
  }
  else
  {
    qmemcpy(__src, v266, 0x60u);
    v104 = &v266[12];
    LODWORD(v247[4]) = 3;
    v247[3] = 0;
    v247[0] = 0;
    v247[1] = 8;
    v247[2] = 0;
    v103 = __src;
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__src);
  }
  v111 = *(_QWORD **)&v248[8];
  v112 = (_QWORD *)(*(_QWORD *)&v248[8] + 424LL * *(_QWORD *)&v248[16]);
  v113 = 0;
  v268 = 0;
  v275 = v112;
  while ( v111 != v112 )
  {
    v114 = v111;
    v115 = v111[14];
    if ( v115 == 2 )
    {
      v111 += 53;
      if ( *((_DWORD *)v114 + 38) == 2 )
        continue;
    }
    v259 = v113;
    if ( v247[2] )
    {
      v271 = (void *)v114[25];
      v91 = v114[26];
      v116 = v247[1];
      v117 = 160LL * v247[2];
      v118 = 0;
      v276 = 160LL * v247[2];
      while ( 1 )
      {
        if ( *(_QWORD *)(v116 + v118 + 136) == v91 )
        {
          v103 = *(unsigned __int64 **)(v116 + v118 + 128);
          v104 = (unsigned __int64 *)v271;
          v119 = memcmp(v103, v271, v91) == 0;
          v117 = v276;
          if ( v119 )
            break;
        }
        v118 += 160;
        if ( v117 == v118 )
          goto LABEL_167;
      }
    }
    else
    {
LABEL_167:
      v120 = 16LL * v114[12] + 88;
      if ( !(v114[10] | v114[12]) )
        v120 = 408;
      v121 = *(_QWORD *)((char *)v114 + v120);
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v266, v114 + 24);
      v122 = v114[14];
      LODWORD(v91) = (_DWORD)v272;
      v123 = v270;
      if ( v122 != 2 )
      {
        v269 = v114[17];
        LODWORD(v264) = *((_DWORD *)v114 + 36);
        v123 = *((_DWORD *)v114 + 32);
        LODWORD(v91) = *((_DWORD *)v114 + 33);
        v265 = (void *)v114[15];
      }
      v124 = v114[19];
      if ( v124 != 2 )
      {
        v257 = v114[22];
        v245 = *((_DWORD *)v114 + 46);
        v244 = *((_DWORD *)v114 + 42);
        v246 = *((_DWORD *)v114 + 43);
        v222 = v114[20];
      }
      __src[17] = v266[2];
      __src[16] = v266[1];
      __src[15] = v266[0];
      __src[0] = 0;
      __src[2] = v122;
      __src[3] = (unsigned __int64)v265;
      __src[4] = __PAIR64__(v91, v123);
      __src[5] = v269;
      LODWORD(__src[6]) = v264;
      __src[7] = v124;
      __src[8] = v222;
      __src[9] = __PAIR64__(v246, v244);
      __src[10] = v257;
      LODWORD(__src[11]) = v245;
      __src[12] = 2;
      __src[18] = v121;
      LOBYTE(__src[19]) = 1;
      v252 = std::time::SystemTime::now::h1fe79e41f9d5677f(v266, &__src[15]);
      LODWORD(v253[0]) = v125;
      std::time::SystemTime::duration_since::had059553cab94f96(v266, &v252, 0, 0);
      if ( LOBYTE(v266[0]) )
        v126 = 0;
      else
        v126 = v266[1];
      LODWORD(v270) = v123;
      LODWORD(v272) = v91;
      v103 = v247;
      v104 = __src;
      v127 = codexmate_lib::core::quota_store::upsert_item::h053aeb5691e92848(v247, __src, v126);
      LOBYTE(v128) = (v268 | v127) & 1;
      v115 = v114[14];
      v268 = v128;
    }
    v112 = v275;
    v111 = v114 + 53;
    v114[14] = 2;
    v129 = v114[19];
    v114[19] = 2;
    v113 = v259;
    LOBYTE(v113) = ((v115 ^ 2 | v129 ^ 2) != 0) | v259;
  }
  if ( (v268 & 1) != 0 )
  {
    v103 = __src;
    v104 = v223;
    codexmate_lib::core::repository::Repository::save_quota_store::hd848fe86f04414c9(__src, v223, v224, (__int64)v247);
    v90 = __src[0];
    if ( __src[0] != 11 )
      goto LABEL_186;
  }
  v90 = 11;
  if ( (v113 & 1) != 0 )
  {
    v266[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(v103, v104);
    LODWORD(v266[1]) = v130;
    std::time::SystemTime::duration_since::had059553cab94f96(__src, v266, 0, 0);
    v131 = 0;
    if ( !LOBYTE(__src[0]) )
      v131 = __src[1];
    *(_QWORD *)&v248[72] = v131;
    codexmate_lib::core::repository::Repository::persist_registry::he46753ae51d51c8f(
      __src,
      (__int64)v267,
      (__int64)v248,
      0);
    v90 = __src[0];
    if ( __src[0] == 11 )
    {
      v90 = 11;
      v132 = v247[2];
      if ( !v247[2] )
        goto LABEL_196;
      goto LABEL_192;
    }
LABEL_186:
    LODWORD(v91) = __src[1];
    v133 = (_DWORD *)&__src[1] + 1;
    v134 = &v252;
    for ( nn = 21; nn; --nn )
    {
      *(_DWORD *)v134 = *v133++;
      v134 = (__int64 *)((char *)v134 + 4);
    }
    v132 = v247[2];
    if ( !v247[2] )
      goto LABEL_196;
    goto LABEL_192;
  }
  v132 = v247[2];
  if ( !v247[2] )
    goto LABEL_196;
LABEL_192:
  v136 = (_QWORD *)(v247[1] + 128LL);
  do
  {
    v137 = *(v136 - 1);
    if ( v137 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v136, v137, 1);
    v136 += 20;
    --v132;
  }
  while ( v132 );
LABEL_196:
  if ( v247[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v247[1], 160LL * v247[0], 8);
  if ( !__OFSUB__(-*(_QWORD *)&v248[24], 1) && *(_QWORD *)&v248[24] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v248[32], *(_QWORD *)&v248[24], 1);
  v138 = *(_QWORD *)&v248[8];
  v139 = *(_QWORD *)&v248[16];
  if ( *(_QWORD *)&v248[16] )
  {
    v140 = *(_QWORD *)&v248[8];
    do
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v140);
      v140 += 424;
      --v139;
    }
    while ( v139 );
  }
  if ( *(_QWORD *)v248 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v138, 424LL * *(_QWORD *)v248, 8);
  _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(__dst);
  close_NOCANCEL(LODWORD(__dst[0]));
  if ( (_DWORD)v90 != 11 )
    goto LABEL_207;
LABEL_214:
  result = v221;
  v221[3] = v262;
  v151 = v260;
  result[2] = v261;
  result[1] = v151;
  *result = 11;
  return result;
}
