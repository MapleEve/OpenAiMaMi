// __ZN13codexmate_lib8commands8accounts21finish_switch_failure @ 0x100696160 | 基线 same-set
// [FULL IDA decompiler]

double __fastcall codexmate_lib::commands::accounts::finish_switch_failure::h6eeb88217806168c(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3,
        __int64 *a4,
        __int64 *a5)
{
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // edx
  bool v11; // of
  __int64 v12; // rcx
  __int128 v13; // kr10_16
  __int64 v14; // rbx
  __int64 v15; // r13
  __int64 v16; // r14
  const void *v17; // rdi
  signed __int64 v18; // rax
  __int64 v19; // r12
  size_t v20; // rbx
  __int64 v21; // r15
  __int64 v22; // r12
  int v23; // eax
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // r14
  unsigned int v27; // ebx
  _DWORD *v28; // rsi
  _DWORD *v29; // rdi
  __int64 k; // rcx
  __int64 v31; // r15
  __int64 v32; // r14
  unsigned int v33; // ebx
  _DWORD *v34; // rsi
  _DWORD *v35; // rdi
  __int64 n; // rcx
  __int64 v37; // rsi
  size_t v38; // rdx
  unsigned __int64 *v39; // rdi
  size_t v40; // r14
  __int64 v41; // rax
  _QWORD *v42; // rbx
  _DWORD *v43; // rdi
  _DWORD *v44; // rsi
  __int64 m; // rcx
  __int64 v46; // rbx
  __int64 v47; // r14
  size_t v48; // r12
  char v49; // r15
  size_t v50; // rsi
  _DWORD *v51; // rdi
  _DWORD *v52; // rsi
  __int64 ii; // rcx
  size_t v54; // r15
  size_t v55; // rdx
  __int64 v56; // r15
  __int64 v57; // rbx
  __int64 v58; // rsi
  unsigned __int64 v59; // r15
  const void *v60; // r15
  size_t v61; // rbx
  __int64 v62; // rdi
  unsigned __int64 v63; // rbx
  void *v64; // r12
  size_t v65; // r13
  char v66; // r13
  unsigned __int64 v67; // r14
  __int64 v68; // r13
  __int64 v69; // rbx
  __int64 v70; // r12
  bool v71; // cl
  char v72; // r12
  __int64 v73; // r12
  void *v74; // r13
  __int64 v75; // rax
  __int64 v76; // r12
  __int64 v77; // rbx
  size_t v78; // r14
  __int64 v79; // r13
  __int64 v80; // r15
  __int64 v81; // r12
  __int64 v82; // rsi
  __int64 v83; // rax
  __int64 v84; // r15
  __int64 v85; // r12
  __int64 v86; // rbx
  __int64 v87; // rsi
  unsigned __int64 v88; // rsi
  __int64 v89; // r15
  __int64 v90; // r12
  __int64 v91; // r14
  __int64 v92; // rsi
  int v93; // eax
  _QWORD *v94; // r12
  char v95; // r13
  int v96; // eax
  __int64 v97; // rax
  void *v98; // rsi
  int v99; // eax
  _BYTE *v100; // rsi
  __int64 v101; // rdx
  __int64 *v102; // rdi
  int v103; // eax
  void *v104; // r13
  size_t v105; // rdx
  __int64 v106; // r15
  __int64 v107; // r15
  __int64 v108; // r13
  __int64 v109; // rbx
  __int64 v110; // rsi
  __int64 v111; // rbx
  __int64 v112; // rbx
  size_t v113; // r14
  __int64 v114; // r12
  __int64 v115; // r15
  __int64 v116; // r13
  __int64 v117; // rax
  _QWORD *v118; // r12
  __int64 v119; // r13
  unsigned int v120; // edx
  char v121; // r15
  __int64 v122; // rdx
  __int64 v123; // rbx
  _QWORD *v124; // rax
  __int64 v125; // rcx
  __int64 v126; // rdx
  __int64 v127; // rax
  __int64 v128; // rcx
  __int64 v129; // r14
  _QWORD *v130; // rax
  __int64 v131; // rcx
  __int64 v132; // rdx
  __int64 v133; // r14
  _QWORD *v134; // rax
  __int64 v135; // rcx
  __int64 v136; // rdx
  __int64 v137; // rdx
  double result; // xmm0_8
  __int64 v139; // rax
  __int64 v140; // rbx
  _QWORD *v141; // r14
  __int64 v142; // rsi
  char *v143; // r15
  size_t v144; // rdx
  char *v145; // rsi
  __int64 *v146; // r12
  __int64 *v147; // rdi
  __int64 v148; // rdx
  __int64 v149; // r8
  const void *v150; // r15
  __int64 v151; // rax
  __int64 v152; // rdi
  _BYTE *v153; // rdi
  void *v154; // rsi
  void *v155; // r15
  __int64 v156; // r12
  _BYTE *v157; // r14
  __int64 v158; // r15
  void *v159; // rax
  _BYTE *v160; // rbx
  void *v161; // rax
  int v162; // eax
  __int64 v163; // rdx
  _DWORD *v164; // rsi
  _DWORD *v165; // rdi
  __int64 i; // rcx
  _DWORD *v167; // rdi
  _DWORD *v168; // rsi
  __int64 j; // rcx
  __int64 v170; // rbx
  __int64 v171; // r12
  void *v172; // rbx
  __int64 v173; // rbx
  void *v174; // rax
  __int64 v175; // rax
  void *v176; // rdi
  __int64 v177; // r15
  __int64 v178; // rbx
  __int64 v179; // r14
  _QWORD v180[3]; // [rsp+0h] [rbp-470h] BYREF
  _QWORD v181[3]; // [rsp+18h] [rbp-458h] BYREF
  _QWORD v182[3]; // [rsp+30h] [rbp-440h] BYREF
  _QWORD v183[3]; // [rsp+48h] [rbp-428h] BYREF
  _QWORD v184[3]; // [rsp+60h] [rbp-410h] BYREF
  __int64 v185; // [rsp+78h] [rbp-3F8h]
  __int64 v186; // [rsp+80h] [rbp-3F0h]
  __int64 v187; // [rsp+88h] [rbp-3E8h]
  __int64 v188; // [rsp+90h] [rbp-3E0h]
  __int64 *v189; // [rsp+98h] [rbp-3D8h]
  _QWORD *v190; // [rsp+A0h] [rbp-3D0h]
  __int64 v191; // [rsp+A8h] [rbp-3C8h]
  size_t v192; // [rsp+B0h] [rbp-3C0h]
  unsigned __int64 v193; // [rsp+B8h] [rbp-3B8h]
  _OWORD v194[6]; // [rsp+C0h] [rbp-3B0h] BYREF
  unsigned __int64 v195; // [rsp+120h] [rbp-350h] BYREF
  void *v196; // [rsp+128h] [rbp-348h]
  __int64 v197; // [rsp+130h] [rbp-340h]
  __int64 v198[22]; // [rsp+138h] [rbp-338h] BYREF
  size_t v199; // [rsp+1E8h] [rbp-288h]
  _QWORD __src[22]; // [rsp+1F0h] [rbp-280h] BYREF
  unsigned __int64 v201; // [rsp+2A0h] [rbp-1D0h] BYREF
  void *v202; // [rsp+2A8h] [rbp-1C8h]
  __int64 v203; // [rsp+2B0h] [rbp-1C0h]
  __int64 v204; // [rsp+2B8h] [rbp-1B8h]
  void *__s1; // [rsp+2C0h] [rbp-1B0h]
  void *v206; // [rsp+2C8h] [rbp-1A8h]
  int v207; // [rsp+2D4h] [rbp-19Ch]
  size_t v208; // [rsp+2D8h] [rbp-198h]
  void *v209; // [rsp+2E0h] [rbp-190h]
  _BYTE v210[200]; // [rsp+2E8h] [rbp-188h] BYREF
  void *v211; // [rsp+3B0h] [rbp-C0h]
  __int64 v212; // [rsp+3B8h] [rbp-B8h] BYREF
  _QWORD *v213; // [rsp+3C0h] [rbp-B0h]
  __int64 v214; // [rsp+3C8h] [rbp-A8h]
  unsigned __int64 v215; // [rsp+3D0h] [rbp-A0h]
  unsigned int v216; // [rsp+3D8h] [rbp-98h] BYREF
  unsigned int v217; // [rsp+3DCh] [rbp-94h] BYREF
  size_t v218; // [rsp+3E0h] [rbp-90h]
  void *v219; // [rsp+3E8h] [rbp-88h]
  size_t v220; // [rsp+3F0h] [rbp-80h]
  unsigned int v221; // [rsp+3FCh] [rbp-74h] BYREF
  __int64 v222; // [rsp+400h] [rbp-70h] BYREF
  void *v223; // [rsp+408h] [rbp-68h]
  size_t v224; // [rsp+410h] [rbp-60h]
  void *v225; // [rsp+418h] [rbp-58h]
  void *v226; // [rsp+420h] [rbp-50h]
  unsigned __int64 v227; // [rsp+428h] [rbp-48h]
  size_t v228; // [rsp+430h] [rbp-40h]
  _QWORD *v229; // [rsp+438h] [rbp-38h]
  _BYTE v230[41]; // [rsp+447h] [rbp-29h] BYREF

  v189 = a4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2);
  v7 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8);
  if ( !v7 )
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24);
  v7[2] = a5[2];
  v8 = *a5;
  v7[1] = a5[1];
  *v7 = v8;
  v212 = 1;
  v213 = v7;
  v214 = 1;
  v9 = std::time::Instant::elapsed::h457f209775ed485c(a2 + 16);
  v194[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v9 + v10 / 0xF4240uLL;
  v198[0] = (__int64)"reason=transaction_failurerollback_completedstatus=verifiedrollback_failedfailed | ";
  v198[1] = 26;
  *(_QWORD *)v210 = a2;
  *(_QWORD *)&v210[8] = uuid::fmt::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$uuid..Uuid$GT$::fmt::h318954c16e5fd96c;
  *(_QWORD *)&v210[16] = v194;
  *(_QWORD *)&v210[24] = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
  *(_QWORD *)&v210[32] = v198;
  *(_QWORD *)&v210[40] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, (char *)&loc_1017C33A0 + 4, v210);
  codexmate_lib::platform::debug_log::app_event::hca94542905aced18(&unk_10160470B, 14, &unk_101602170, 16, __src);
  v11 = __OFSUB__(0, a3[12]);
  v229 = a3;
  v190 = a1;
  v191 = a2;
  v185 = a2 + 16;
  if ( v11 )
  {
    *(_QWORD *)&v194[0] = 0x8000000000000000LL;
LABEL_16:
    v21 = v229[1];
    v22 = v229[2];
    v23 = -1;
    v228 = 0x8000000000000000LL;
    goto LABEL_17;
  }
  v12 = a3[14];
  __src[0] = a3[13];
  __src[1] = v12;
  __src[2] = 0;
  __src[3] = 0;
  serde_json::de::from_trait::he2657665c660c290(v210, __src);
  if ( *(_QWORD *)v210 == 0x8000000000000000LL )
  {
    *(_QWORD *)&v194[0] = 0x8000000000000000LL;
    core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..repository..RegistryFile$C$serde_json..error..Error$GT$$GT$::h53e91be4d6d18114(v210);
    goto LABEL_16;
  }
  qmemcpy(v194, v210, 0x58u);
  if ( *(_QWORD *)&v194[0] == 0x8000000000000000LL
    || *((_QWORD *)&v194[1] + 1) == 0x8000000000000000LL
    || !*(_QWORD *)&v194[1] )
  {
    goto LABEL_16;
  }
  v13 = v194[2];
  v14 = *((_QWORD *)&v194[0] + 1);
  v15 = 424LL * *(_QWORD *)&v194[1];
  v16 = 0;
  while ( 1 )
  {
    if ( *(_QWORD *)(v14 + v16 + 208) == *((_QWORD *)&v13 + 1) )
    {
      v17 = *(const void **)(v14 + v16 + 200);
      if ( !memcmp(v17, (const void *)v13, *((size_t *)&v13 + 1)) )
        break;
    }
    v16 += 424;
    if ( v15 == v16 )
      goto LABEL_16;
  }
  v18 = *(_QWORD *)(v14 + v16 + 232);
  v228 = v18;
  if ( v18 < 0 )
  {
    v19 = 0;
    v20 = v228;
    goto LABEL_15;
  }
  v150 = *(const void **)(v14 + v16 + 224);
  if ( v18 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, v13);
    v19 = 1;
    v20 = v228;
    v151 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v228, 1);
    if ( !v151 )
LABEL_15:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v19, v20);
    v152 = v151;
  }
  else
  {
    v152 = 1;
    v20 = v228;
  }
  v226 = (void *)v152;
  memcpy((void *)v152, v150, v20);
  v162 = (int)v229;
  v21 = v229[1];
  v22 = v229[2];
  LOBYTE(v162) = 1;
  LODWORD(v225) = v162;
  std::path::Path::_join::hb1a495d4f06b13b8(&v201, v21, v22, "snapshots", 9);
  v218 = (size_t)v202;
  codexmate_lib::core::auth::ensure_managed_account_snapshot_location::hac13c2585495a048(
    __src,
    v226,
    v228,
    (__int64)v202,
    v203);
  if ( LODWORD(__src[0]) != 11 )
  {
    qmemcpy(v210, __src, 0x60u);
    v222 = 0;
    v223 = (void *)1;
    v224 = 0;
    v198[2] = 1610612768;
    v198[0] = (__int64)&v222;
    v198[1] = (__int64)&anon_4776471024d1e9bb78f2861cb2b51e1e_1048;
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                            v210,
                            v198) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
        55,
        v230,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
    v46 = v222;
    v47 = (__int64)v223;
    v48 = v224;
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__src);
    if ( v201 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v218, v201, 1);
    goto LABEL_310;
  }
  if ( v201 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v218, v201, 1);
  codexmate_lib::core::account_coordination::AccountSnapshotLock::acquire::h470b55c48e4ac62c(
    (__int64)v210,
    (__int64)v226,
    v228);
  v163 = *(_QWORD *)v210;
  v23 = *(_DWORD *)&v210[8];
  v164 = &v210[12];
  v165 = __src;
  for ( i = 21; i; --i )
    *v165++ = *v164++;
  if ( v163 != 11 )
  {
    v167 = &v210[12];
    v168 = __src;
    for ( j = 21; j; --j )
      *v167++ = *v168++;
    *(_QWORD *)v210 = v163;
    *(_DWORD *)&v210[8] = v23;
    v198[0] = 0;
    v198[1] = 1;
    v198[2] = 0;
    __src[2] = 1610612768;
    __src[0] = v198;
    __src[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048;
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                            v210,
                            __src) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
        55,
        v230,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
    v46 = v198[0];
    v47 = v198[1];
    v48 = v198[2];
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v210);
LABEL_310:
    if ( v228 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v226, v228, 1);
    goto LABEL_209;
  }
LABEL_17:
  v221 = v23;
  LOBYTE(v23) = 1;
  LODWORD(v225) = v23;
  std::path::Path::_join::hb1a495d4f06b13b8(v198, v21, v22, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_49, 15);
  v24 = v198[1];
  v25 = codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673(
          (__int64)v210,
          v198[1],
          v198[2],
          (__int64)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_50,
          9);
  v26 = *(_QWORD *)v210;
  v27 = *(_DWORD *)&v210[8];
  if ( *(_QWORD *)v210 != 11 )
  {
    v28 = &v210[12];
    v29 = __src;
    for ( k = 21; k; --k )
      *v29++ = *v28++;
  }
  if ( v198[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v198[0], 1);
  if ( (_DWORD)v26 != 11 )
  {
    *(_QWORD *)v210 = v26;
    *(_DWORD *)&v210[8] = v27;
    v43 = &v210[12];
    v44 = __src;
    for ( m = 21; m; --m )
      *v43++ = *v44++;
    v222 = 0;
    v223 = (void *)1;
    v224 = 0;
    v198[2] = 1610612768;
    v198[0] = (__int64)&v222;
    v198[1] = (__int64)&anon_4776471024d1e9bb78f2861cb2b51e1e_1048;
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                            v210,
                            v198) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
        55,
        v230,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
    v46 = v222;
    v47 = (__int64)v223;
    v48 = v224;
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v210);
    v49 = 1;
    if ( v221 == -1 )
    {
LABEL_207:
      v50 = v228;
      if ( !(2 * v228) )
      {
LABEL_208:
        if ( !v49 )
          goto LABEL_219;
LABEL_209:
        if ( *(_QWORD *)&v194[0] == 0x8000000000000000LL )
          goto LABEL_219;
        goto LABEL_210;
      }
LABEL_42:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v226, v50, 1);
      if ( !v49 )
        goto LABEL_219;
      goto LABEL_209;
    }
LABEL_41:
    _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v221);
    close_NOCANCEL(v221);
    v50 = v228;
    if ( !(2 * v228) )
      goto LABEL_208;
    goto LABEL_42;
  }
  v217 = v27;
  LOBYTE(v25) = 1;
  LODWORD(v225) = v25;
  std::path::Path::_join::hb1a495d4f06b13b8(v198, v21, v22, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_51, 20);
  v31 = v198[1];
  codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673(
    (__int64)v210,
    v198[1],
    v198[2],
    (__int64)"account state.oauth-refresh.lock",
    13);
  v32 = *(_QWORD *)v210;
  v33 = *(_DWORD *)&v210[8];
  if ( *(_QWORD *)v210 != 11 )
  {
    v34 = &v210[12];
    v35 = __src;
    for ( n = 21; n; --n )
      *v35++ = *v34++;
  }
  if ( v198[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, v198[0], 1);
  if ( (_DWORD)v32 != 11 )
  {
    *(_QWORD *)v210 = v32;
    *(_DWORD *)&v210[8] = v33;
    v51 = &v210[12];
    v52 = __src;
    for ( ii = 21; ii; --ii )
      *v51++ = *v52++;
    v222 = 0;
    v223 = (void *)1;
    v224 = 0;
    v198[2] = 1610612768;
    v198[0] = (__int64)&v222;
    v198[1] = (__int64)&anon_4776471024d1e9bb78f2861cb2b51e1e_1048;
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                            v210,
                            v198) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
        55,
        v230,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
    v46 = v222;
    v47 = (__int64)v223;
    v48 = v224;
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v210);
    v49 = 1;
LABEL_206:
    _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v217);
    close_NOCANCEL(v217);
    if ( v221 == -1 )
      goto LABEL_207;
    goto LABEL_41;
  }
  v216 = v33;
  v38 = v229[5];
  v39 = (unsigned __int64 *)v210;
  v211 = (void *)v229[4];
  v37 = (__int64)v211;
  v218 = v38;
  std::fs::read::inner::h6a30c15c40add28b(v210, v211, v38);
  v204 = *(_QWORD *)v210;
  v40 = v228;
  if ( *(_QWORD *)v210 != 0x8000000000000000LL )
  {
    v37 = *(_QWORD *)&v210[8];
    v54 = *(_QWORD *)&v210[16];
    v39 = &v195;
    __s1 = *(void **)&v210[8];
    v41 = codexmate_lib::commands::accounts::account_key_from_auth_bytes::ha7a8465052840e66(
            &v195,
            *(__int64 *)&v210[8],
            *(__int64 *)&v210[16],
            (__int64)v211,
            v218);
    v42 = v229;
    if ( v229[27] == 0x8000000000000000LL )
    {
      LODWORD(v22) = 0;
      v39 = (unsigned __int64 *)__s1;
      LOBYTE(v41) = 1;
      if ( v229[6] == 0x8000000000000000LL )
      {
        LODWORD(v220) = v41;
        if ( v229[6] == 0x8000000000000000LL )
          goto LABEL_68;
        goto LABEL_72;
      }
      LODWORD(v220) = v41;
      if ( v54 != v229[8] )
      {
LABEL_67:
        if ( v42[6] == 0x8000000000000000LL )
          goto LABEL_68;
        goto LABEL_72;
      }
      v37 = v229[7];
      LODWORD(v41) = memcmp(__s1, (const void *)v37, v54);
      LOBYTE(v22) = (_DWORD)v41 == 0;
      if ( v42[6] != 0x8000000000000000LL )
        goto LABEL_72;
    }
    else if ( v195 == 0x8000000000000000LL )
    {
      LODWORD(v220) = 0;
      LODWORD(v22) = 0;
      v42 = v229;
      if ( v229[6] != 0x8000000000000000LL )
        goto LABEL_72;
    }
    else
    {
      v42 = v229;
      v55 = v229[29];
      if ( v197 != v55 )
      {
        LODWORD(v220) = 0;
        goto LABEL_66;
      }
      v39 = (unsigned __int64 *)v196;
      v37 = v229[28];
      LODWORD(v41) = memcmp(v196, (const void *)v37, v55);
      LOBYTE(v22) = (_DWORD)v41 == 0;
      LODWORD(v220) = 0;
      if ( v42[6] != 0x8000000000000000LL )
        goto LABEL_72;
    }
LABEL_68:
    v59 = 0x8000000000000000LL;
    v207 = v22;
    if ( v40 == 0x8000000000000000LL )
      goto LABEL_69;
    goto LABEL_77;
  }
  LODWORD(v41) = *(_DWORD *)&v210[8];
  if ( (v210[8] & 3) != 1 )
  {
    v195 = 0x8000000000000000LL;
    v42 = v229;
    if ( v229[27] == 0x8000000000000000LL )
      goto LABEL_34;
    goto LABEL_65;
  }
  v56 = *(_QWORD *)&v210[8] - 1LL;
  v22 = *(_QWORD *)(*(_QWORD *)&v210[8] - 1LL);
  v57 = *(_QWORD *)(*(_QWORD *)&v210[8] + 7LL);
  if ( *(_QWORD *)v57 )
    (*(void (__fastcall **)(__int64))v57)(v22);
  v58 = *(_QWORD *)(v57 + 8);
  if ( v58 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v58, *(_QWORD *)(v57 + 16));
  v37 = 24;
  v39 = (unsigned __int64 *)v56;
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, 24, 8);
  v195 = 0x8000000000000000LL;
  v42 = v229;
  if ( v229[27] != 0x8000000000000000LL )
  {
LABEL_65:
    LODWORD(v220) = 0;
LABEL_66:
    LODWORD(v22) = 0;
    goto LABEL_67;
  }
LABEL_34:
  LOBYTE(v22) = v42[6] == 0x8000000000000000LL;
  LOBYTE(v41) = 1;
  LODWORD(v220) = v41;
  if ( v42[6] == 0x8000000000000000LL )
    goto LABEL_68;
LABEL_72:
  v60 = (const void *)v42[7];
  v61 = v42[8];
  if ( v61 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v39, v37);
    v62 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v61, 1);
    if ( !v62 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v61);
  }
  else
  {
    v62 = 1;
  }
  v219 = (void *)v62;
  v41 = (__int64)memcpy((void *)v62, v60, v61);
  v208 = v61;
  v59 = v61;
  v207 = v22;
  if ( v40 == 0x8000000000000000LL )
  {
LABEL_69:
    v47 = v59;
    if ( !(_BYTE)v22 )
      goto LABEL_163;
    goto LABEL_137;
  }
LABEL_77:
  LOBYTE(v41) = 1;
  LODWORD(v225) = v41;
  std::fs::read::inner::h6a30c15c40add28b(v198, v226, v40);
  codexmate_lib::core::auth::load_auth_file::h495f6935c70eecba(__src, v226, v40);
  *(_QWORD *)&v210[16] = v198[2];
  *(_QWORD *)&v210[8] = v198[1];
  *(_QWORD *)v210 = v198[0];
  v41 = (__int64)memcpy(&v210[24], __src, 0xB0u);
  v63 = 0x8000000000000001LL;
  if ( v198[0] != 0x8000000000000000LL && *(_QWORD *)&v210[24] != 0x8000000000000001LL )
  {
    v215 = *(_QWORD *)v210;
    v209 = *(void **)&v210[8];
    v192 = *(_QWORD *)&v210[16];
    memcpy(v198, &v210[24], sizeof(v198));
    codexmate_lib::core::auth::make_auth_snapshot::h0711ba2f125fb190(__src, v198, v226, v228);
    if ( LODWORD(__src[0]) == 2 )
    {
      core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..auth..AuthSnapshot$C$codexmate_lib..core..models..CoreError$GT$$GT$::h1372f277403f3892(__src);
      v227 = 0x8000000000000000LL;
      if ( v59 != 0x8000000000000000LL )
        goto LABEL_81;
    }
    else
    {
      v193 = 0x8000000000000001LL;
      v67 = __src[2];
      v206 = (void *)__src[3];
      v199 = __src[4];
      v68 = __src[8];
      v69 = __src[9];
      v70 = __src[11];
      v188 = __src[12];
      v186 = __src[14];
      v187 = __src[15];
      if ( __src[5] )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[6], __src[5], 1);
      if ( 2 * v68 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v69, v68, 1);
      v227 = v67;
      if ( 2 * v70 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v188, v70, 1);
      if ( 2 * v186 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v187, v186, 1);
      v63 = v193;
      if ( v59 != 0x8000000000000000LL )
      {
LABEL_81:
        v64 = v219;
        v65 = v208;
        codexmate_lib::commands::accounts::account_key_from_auth_bytes::ha7a8465052840e66(
          &v201,
          (__int64)v219,
          v208,
          (__int64)v211,
          v218);
        codexmate_lib::commands::accounts::restore_switch_rollback_state::_$u7b$$u7b$closure$u7d$$u7d$::h79291a8de8e3680a(
          __src,
          (__int64)v64,
          v65);
        if ( *(_QWORD *)&v194[0] == 0x8000000000000000LL )
        {
LABEL_101:
          if ( v227 != 0x8000000000000000LL )
            goto LABEL_123;
          goto LABEL_102;
        }
LABEL_100:
        if ( *((_QWORD *)&v194[1] + 1) == 0x8000000000000000LL )
          goto LABEL_101;
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
          &v222,
          (char *)&v194[1] + 8);
        v73 = v222;
        if ( v227 == 0x8000000000000000LL )
        {
          if ( v222 != 0x8000000000000000LL )
          {
LABEL_121:
            if ( v73 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v223, v73, 1);
            goto LABEL_123;
          }
        }
        else
        {
          if ( v222 == 0x8000000000000000LL )
            goto LABEL_123;
          if ( v199 != v224 )
            goto LABEL_121;
          v74 = v223;
          if ( memcmp(v206, v223, v199) )
            goto LABEL_121;
          if ( v73 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74, v73, 1);
        }
LABEL_102:
        v71 = v227 == 0x8000000000000000LL;
        if ( v201 != 0x8000000000000000LL )
        {
          if ( v227 == 0x8000000000000000LL )
            goto LABEL_123;
          if ( v203 != v199 )
          {
            v72 = 0;
            if ( __src[0] == v63 )
              goto LABEL_125;
            goto LABEL_124;
          }
          v71 = memcmp(v202, v206, v199) == 0;
        }
        if ( __src[0] == v63 || !v71 )
        {
          v72 = 0;
          if ( __src[0] == v63 )
            goto LABEL_125;
          goto LABEL_124;
        }
        if ( codexmate_lib::core::oauth_refresh::auth_is_newer::h8388ebc832e4acfe(v198, __src) )
        {
          v72 = 1;
          if ( 2 * v59 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v219, v59, 1);
          v208 = v192;
          v219 = v209;
          v59 = v215;
          if ( __src[0] == v63 )
          {
LABEL_125:
            if ( v201 != 0x8000000000000000LL && v201 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v202, v201, 1);
            v47 = v59;
            if ( 2 * v227 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v206, v227, 1);
            core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(v198);
            if ( (((unsigned __int8)v72 ^ 1) & (v215 != 0)) != 0 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v209, v215, 1);
            v66 = 0;
            LODWORD(v41) = 0;
            if ( *(_QWORD *)v210 != 0x8000000000000000LL )
              goto LABEL_134;
            goto LABEL_133;
          }
LABEL_124:
          core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(__src);
          goto LABEL_125;
        }
LABEL_123:
        v72 = 0;
        if ( __src[0] == v63 )
          goto LABEL_125;
        goto LABEL_124;
      }
    }
    v201 = 0x8000000000000000LL;
    __src[0] = v63;
    if ( *(_QWORD *)&v194[0] == 0x8000000000000000LL )
      goto LABEL_101;
    goto LABEL_100;
  }
  v66 = 1;
  if ( *(_QWORD *)v210 != 0x8000000000000000LL )
  {
    v66 = 1;
    if ( *(_QWORD *)v210 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v210[8], v198[0], 1);
    v47 = v59;
    if ( *(_QWORD *)&v210[24] == 0x8000000000000001LL )
      goto LABEL_135;
    goto LABEL_88;
  }
  v47 = v59;
LABEL_133:
  LODWORD(v41) = *(_DWORD *)&v210[8];
  if ( (v210[8] & 3) == 1 )
  {
    v227 = v47;
    v89 = *(_QWORD *)&v210[8] - 1LL;
    v90 = *(_QWORD *)(*(_QWORD *)&v210[8] - 1LL);
    v91 = *(_QWORD *)(*(_QWORD *)&v210[8] + 7LL);
    if ( *(_QWORD *)v91 )
      (*(void (__fastcall **)(__int64))v91)(v90);
    v92 = *(_QWORD *)(v91 + 8);
    if ( v92 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v90, v92, *(_QWORD *)(v91 + 16));
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v89, 24, 8);
    v47 = v227;
    if ( *(_QWORD *)&v210[24] == v63 )
      goto LABEL_135;
    goto LABEL_88;
  }
LABEL_134:
  if ( *(_QWORD *)&v210[24] == v63 )
  {
LABEL_135:
    v41 = core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v210[32]);
    goto LABEL_136;
  }
LABEL_88:
  if ( v66 )
    v41 = core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(&v210[24]);
LABEL_136:
  if ( !(_BYTE)v207 )
    goto LABEL_163;
LABEL_137:
  LOBYTE(v41) = 1;
  if ( v47 == 0x8000000000000000LL )
  {
    LODWORD(v225) = v41;
    v75 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v211, v218);
    v76 = v75;
    if ( v75 )
    {
      if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v75) )
      {
        v198[0] = v76;
        __src[0] = 0;
        __src[1] = 1;
        __src[2] = 0;
        *(_QWORD *)&v210[16] = 1610612768;
        *(_QWORD *)v210 = __src;
        *(_QWORD *)&v210[8] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048;
        if ( (unsigned __int8)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0(
                                v198,
                                v210) )
          core::result::unwrap_failed::h855bccc0ecc45c4f(
            &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
            55,
            v230,
            &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
            &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
        v229 = (_QWORD *)__src[0];
        v77 = __src[1];
        v78 = __src[2];
        if ( (v76 & 3) == 1 )
        {
          v79 = v76 - 1;
          v80 = *(_QWORD *)(v76 - 1);
          v81 = *(_QWORD *)(v76 + 7);
          if ( *(_QWORD *)v81 )
            (*(void (__fastcall **)(__int64))v81)(v80);
          v82 = *(_QWORD *)(v81 + 8);
          if ( v82 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, v82, *(_QWORD *)(v81 + 16));
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v79, 24, 8);
        }
        v49 = 1;
        v48 = v78;
        v47 = v77;
        v46 = (__int64)v229;
        goto LABEL_200;
      }
      *(_QWORD *)v210 = v76;
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v210);
    }
  }
  else
  {
    LODWORD(v225) = v41;
    v83 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(
            v211,
            v218,
            (__int64)v219,
            v208,
            1);
    if ( v83 )
    {
      v222 = v83;
      v198[0] = (__int64)v211;
      v198[1] = v218;
      *(_QWORD *)v210 = v198;
      *(_QWORD *)&v210[8] = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f;
      *(_QWORD *)&v210[16] = &v222;
      *(_QWORD *)&v210[24] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &unk_1017C32C0, v210);
      if ( (v222 & 3) == 1 )
      {
        v84 = v222 - 1;
        v85 = *(_QWORD *)(v222 - 1);
        v86 = *(_QWORD *)(v222 + 7);
        if ( *(_QWORD *)v86 )
          (*(void (__fastcall **)(__int64))v86)(v85);
        v87 = *(_QWORD *)(v86 + 8);
        if ( v87 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v85, v87, *(_QWORD *)(v86 + 16));
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v84, 24, 8);
      }
      v46 = __src[0];
      v88 = v47;
      v47 = __src[1];
      v48 = __src[2];
      v49 = 1;
      goto LABEL_198;
    }
  }
LABEL_163:
  v93 = (int)v229;
  v94 = v229 + 9;
  v227 = v47;
  if ( !(_BYTE)v220 )
  {
    if ( *(_QWORD *)&v194[0] == 0x8000000000000000LL )
    {
      LOBYTE(v93) = 1;
      LODWORD(v225) = v93;
      codexmate_lib::commands::accounts::FileRestoreState::restore::h8a418c7e0ccbc0f6(
        (unsigned __int64 *)v210,
        v229 + 9);
      v46 = *(_QWORD *)v210;
      if ( *(_QWORD *)v210 == 0x8000000000000000LL )
      {
LABEL_168:
        v95 = 1;
        goto LABEL_169;
      }
      goto LABEL_195;
    }
    v103 = (int)v229;
    v104 = (void *)v229[10];
    v105 = v229[11];
    LOBYTE(v103) = 1;
    LODWORD(v225) = v103;
    v220 = v105;
    std::fs::read::inner::h6a30c15c40add28b(v210, v104, v105);
    v106 = *(_QWORD *)v210;
    if ( *(_QWORD *)v210 == 0x8000000000000000LL )
    {
      v47 = v227;
      if ( (v210[8] & 3) == 1 )
      {
        v107 = *(_QWORD *)&v210[8] - 1LL;
        v108 = *(_QWORD *)(*(_QWORD *)&v210[8] - 1LL);
        v109 = *(_QWORD *)(*(_QWORD *)&v210[8] + 7LL);
        if ( *(_QWORD *)v109 )
          (*(void (__fastcall **)(__int64))v109)(v108);
        v110 = *(_QWORD *)(v109 + 8);
        if ( v110 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v108, v110, *(_QWORD *)(v109 + 16));
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v107, 24, 8);
      }
      goto LABEL_194;
    }
    v215 = *(_QWORD *)&v210[8];
    v198[0] = *(_QWORD *)&v210[8];
    v198[1] = *(_QWORD *)&v210[16];
    v198[2] = 0;
    v198[3] = 0;
    serde_json::de::from_trait::he2657665c660c290(v210, v198);
    v111 = *(_QWORD *)v210;
    if ( *(_QWORD *)v210 == 0x8000000000000000LL )
      core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..repository..RegistryFile$C$serde_json..error..Error$GT$$GT$::h53e91be4d6d18114(v210);
    else
      qmemcpy(__src, &v210[8], 0x50u);
    if ( v106 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v215, v106, 1);
    v47 = v227;
    if ( v111 == 0x8000000000000000LL )
    {
LABEL_194:
      codexmate_lib::commands::accounts::FileRestoreState::restore::h8a418c7e0ccbc0f6((unsigned __int64 *)v210, v94);
      v46 = *(_QWORD *)v210;
      if ( *(_QWORD *)v210 == 0x8000000000000000LL )
        goto LABEL_168;
LABEL_195:
      v47 = *(_QWORD *)&v210[8];
      v48 = *(_QWORD *)&v210[16];
LABEL_196:
      v49 = 1;
      goto LABEL_197;
    }
    v225 = v104;
    *(_QWORD *)v210 = v111;
    qmemcpy(&v210[8], __src, 0x50u);
    v143 = *(char **)&v210[24];
    v95 = 0;
    if ( *(_QWORD *)&v210[24] != 0x8000000000000000LL )
    {
      v144 = v229[29];
      if ( *(_QWORD *)&v210[40] == v144 )
      {
        v145 = (char *)v229[28];
        v146 = *(__int64 **)&v210[32];
        v147 = *(__int64 **)&v210[32];
        if ( !memcmp(*(const void **)&v210[32], v145, v144) )
        {
          v170 = 0x8000000000000000LL;
          if ( *((_QWORD *)&v194[1] + 1) != 0x8000000000000000LL )
          {
            v145 = (char *)&v194[1] + 8;
            v147 = v198;
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
              v198,
              (char *)&v194[1] + 8);
            v170 = v198[0];
            v222 = v198[1];
            v223 = (void *)v198[2];
          }
          if ( v143 )
          {
            v147 = v146;
            v145 = v143;
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v146, v143, 1);
          }
          *(_QWORD *)&v210[24] = v170;
          *(_QWORD *)&v210[40] = v223;
          *(_QWORD *)&v210[32] = v222;
          v47 = v227;
          *(_QWORD *)&v210[72] = codexmate_lib::core::auth::current_timestamp::h91b9a68b914d25d6(
                                   v147,
                                   v145,
                                   v148,
                                   v223,
                                   v149);
          serde_json::ser::to_vec_pretty::h387099881c522a38(&v222, v210);
          v171 = v222;
          v172 = v223;
          if ( v222 == 0x8000000000000000LL )
          {
            codexmate_lib::commands::accounts::restore_switch_rollback_state::_$u7b$$u7b$closure$u7d$$u7d$::h3e153c9f1ac31ef0(
              v198,
              v223);
            v46 = v198[0];
            v47 = v198[1];
            v48 = v198[2];
          }
          else
          {
            v175 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(
                     v225,
                     v220,
                     (__int64)v223,
                     v224,
                     1);
            if ( !v175 )
            {
              v95 = 1;
              if ( v171 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v172, v171, 1);
              goto LABEL_248;
            }
            codexmate_lib::commands::accounts::restore_switch_rollback_state::_$u7b$$u7b$closure$u7d$$u7d$::h385386956799dd3f(
              (__int64)v198,
              (__int64)v225,
              v220,
              v175);
            v176 = v172;
            v177 = v198[0];
            v178 = v198[1];
            v179 = v198[2];
            if ( v171 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v176, v171, 1);
            v48 = v179;
            v47 = v178;
            v46 = v177;
          }
          core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::h9ddd84037bae2456(v210);
          goto LABEL_196;
        }
        v95 = 0;
      }
    }
LABEL_248:
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::h9ddd84037bae2456(v210);
    goto LABEL_169;
  }
  LOBYTE(v93) = 1;
  LODWORD(v225) = v93;
  codexmate_lib::commands::accounts::FileRestoreState::restore_if_not_replaced::h4b736aee0bc883a6(
    (__int64)v210,
    (__int64)(v229 + 9));
  v46 = *(_QWORD *)v210;
  v95 = v210[8];
  if ( *(_QWORD *)v210 != 0x8000000000000000LL )
  {
    v47 = v210[8]
        | ((unsigned __int64)((v210[15] << 16) | (unsigned int)*(unsigned __int16 *)&v210[13]) << 40)
        | ((unsigned __int64)*(unsigned int *)&v210[9] << 8);
    v48 = *(_QWORD *)&v210[16];
LABEL_187:
    v49 = 1;
    goto LABEL_197;
  }
LABEL_169:
  v96 = (int)v229;
  LOBYTE(v96) = 1;
  LODWORD(v225) = v96;
  v220 = (size_t)(v229 + 15);
  codexmate_lib::commands::accounts::FileRestoreState::restore_if_not_replaced::h4b736aee0bc883a6(
    (__int64)v210,
    (__int64)(v229 + 15));
  v46 = *(_QWORD *)v210;
  v48 = v210[8];
  if ( *(_QWORD *)v210 != 0x8000000000000000LL )
  {
    v47 = v210[8]
        | ((unsigned __int64)((v210[15] << 16) | (unsigned int)*(unsigned __int16 *)&v210[13]) << 40)
        | ((unsigned __int64)*(unsigned int *)&v210[9] << 8);
    v48 = *(_QWORD *)&v210[16];
    goto LABEL_187;
  }
  v215 = (unsigned __int64)(v229 + 21);
  codexmate_lib::commands::accounts::FileRestoreState::restore_if_not_replaced::h4b736aee0bc883a6(
    (__int64)v210,
    (__int64)(v229 + 21));
  v46 = *(_QWORD *)v210;
  LODWORD(v97) = 0;
  if ( *(_QWORD *)v210 != 0x8000000000000000LL )
  {
    v48 = *(_QWORD *)&v210[16];
    v47 = v210[8]
        | ((unsigned __int64)((v210[15] << 16) | (unsigned int)*(unsigned __int16 *)&v210[13]) << 40)
        | ((unsigned __int64)*(unsigned int *)&v210[9] << 8);
    goto LABEL_187;
  }
  v209 = (void *)v210[8];
  if ( (_BYTE)v207 )
  {
    if ( v47 != 0x8000000000000000LL )
    {
      v153 = v210;
      v154 = v211;
      std::fs::read::inner::h6a30c15c40add28b(v210, v211, v218);
      v155 = *(void **)v210;
      if ( *(_QWORD *)v210 == 0x8000000000000000LL )
      {
        v153 = v210;
        core::ptr::drop_in_place$LT$tauri_plugin_autostart..Error$GT$::h966dbe71f460f5fb(v210);
        v156 = v47;
      }
      else
      {
        v160 = *(_BYTE **)&v210[8];
        if ( *(_QWORD *)&v210[16] == v208 )
        {
          v153 = *(_BYTE **)&v210[8];
          v154 = v219;
          LODWORD(v97) = memcmp(*(const void **)&v210[8], v219, v208);
          if ( !(_DWORD)v97 )
          {
            if ( v155 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v160, v155, 1);
            goto LABEL_175;
          }
        }
        v156 = v47;
        if ( v155 )
        {
          v153 = v160;
          v154 = v155;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v160, v155, 1);
        }
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v153, v154);
      v161 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(68, 1);
      if ( !v161 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 68);
      v47 = (__int64)v161;
      memcpy(
        v161,
        "Restored auth.json does not match the selected credential generationruntime_refresh_warningruntime_refresh_failedmanual",
        0x44u);
      v49 = 1;
      if ( v156 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v219, v156, 1);
      v46 = 68;
      v48 = 68;
      goto LABEL_200;
    }
    v98 = v211;
    std::sys::fs::metadata::h32fa16d3052ea535(v210, v211, v218);
    if ( *(_DWORD *)v210 != 1 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v210, v98);
      v48 = 37;
      v159 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(37, 1);
      if ( !v159 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 37);
      v47 = (__int64)v159;
      qmemcpy(v159, "auth.json still exists after rollback", 37);
      v49 = 1;
      v46 = 37;
      goto LABEL_200;
    }
    __src[1] = *(_QWORD *)&v210[8];
    __src[0] = 1;
    v97 = core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(&__src[1]);
  }
LABEL_175:
  LOBYTE(v97) = 1;
  LODWORD(v225) = v97;
  if ( (v95 & 1) == 0 )
    goto LABEL_265;
  v99 = (int)v229;
  v100 = (_BYTE *)v229[10];
  v101 = v229[11];
  LOBYTE(v99) = 1;
  LODWORD(v225) = v99;
  std::fs::read::inner::h6a30c15c40add28b(v198, v100, v101);
  if ( v198[0] == 0x8000000000000000LL )
  {
    v102 = v198;
    core::ptr::drop_in_place$LT$tauri_plugin_autostart..Error$GT$::h966dbe71f460f5fb(v198);
    __src[0] = 0x8000000000000000LL;
LABEL_256:
    v222 = 0x8000000000000000LL;
    goto LABEL_257;
  }
  *(_QWORD *)&v210[16] = v198[2];
  *(_QWORD *)&v210[8] = v198[1];
  *(_QWORD *)v210 = v198[0];
  v102 = __src;
  v100 = v210;
  codexmate_lib::commands::accounts::restore_switch_rollback_state::_$u7b$$u7b$closure$u7d$$u7d$::h96eb2137a4fe34ac(
    __src,
    (__int64 *)v210);
  if ( __src[0] == 0x8000000000000000LL || __src[3] == 0x8000000000000000LL )
    goto LABEL_256;
  v100 = &__src[3];
  v102 = &v222;
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v222, &__src[3]);
LABEL_257:
  if ( *(_QWORD *)&v194[0] == 0x8000000000000000LL )
  {
    v157 = (_BYTE *)v222;
    if ( v222 != 0x8000000000000000LL )
    {
LABEL_324:
      if ( v157 )
      {
        v102 = (__int64 *)v223;
        v100 = v157;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v223, v157, 1);
      }
LABEL_326:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v102, v100);
      v174 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(58, 1);
      if ( !v174 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 58);
      v47 = (__int64)v174;
      qmemcpy(v174, "Registry active account does not match the rollback target", 58);
      if ( __src[0] != 0x8000000000000000LL )
        core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::h9ddd84037bae2456(__src);
      v48 = 58;
      v49 = 0;
      v46 = 58;
LABEL_197:
      v88 = v227;
      if ( v227 == 0x8000000000000000LL )
      {
LABEL_200:
        if ( v195 != 0x8000000000000000LL && v195 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v196, v195, 1);
        if ( 2 * v204 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v204, 1);
        _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v216);
        close_NOCANCEL(v216);
        goto LABEL_206;
      }
LABEL_198:
      if ( v88 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v219, v88, 1);
      goto LABEL_200;
    }
    goto LABEL_262;
  }
  qmemcpy(&v210[8], (char *)v194 + 8, 0x50u);
  *(_QWORD *)v210 = *(_QWORD *)&v194[0];
  v102 = v198;
  v100 = v210;
  codexmate_lib::commands::accounts::restore_switch_rollback_state::_$u7b$$u7b$closure$u7d$$u7d$::h9d66e0578c126999(
    v198,
    (__int64 *)v210);
  v158 = v198[0];
  v157 = (_BYTE *)v222;
  if ( v222 != 0x8000000000000000LL )
  {
    if ( v198[0] == 0x8000000000000000LL )
      goto LABEL_324;
    if ( v224 == v198[2] )
    {
      v173 = v198[1];
      v102 = (__int64 *)v223;
      v100 = (_BYTE *)v198[1];
      if ( !memcmp(v223, (const void *)v198[1], v224) )
      {
        if ( v158 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v173, v158, 1);
        if ( v157 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v223, v157, 1);
        goto LABEL_262;
      }
    }
LABEL_321:
    if ( v158 )
    {
      v102 = (__int64 *)v198[1];
      v100 = (_BYTE *)v158;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v198[1], v158, 1);
    }
    if ( v157 == (_BYTE *)0x8000000000000000LL )
      goto LABEL_326;
    goto LABEL_324;
  }
  if ( v198[0] != 0x8000000000000000LL )
    goto LABEL_321;
LABEL_262:
  if ( __src[0] != 0x8000000000000000LL )
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::h9ddd84037bae2456(__src);
  LODWORD(v225) = 0;
  v47 = v227;
LABEL_265:
  if ( (v48 & 1) != 0
    && (codexmate_lib::commands::accounts::FileRestoreState::verify::h0f46586125ea4e38(v210, v220),
        v46 = *(_QWORD *)v210,
        *(_QWORD *)v210 != 0x8000000000000000LL)
    || ((unsigned __int8)v209 & 1) != 0
    && (codexmate_lib::commands::accounts::FileRestoreState::verify::h0f46586125ea4e38(v210, v215),
        v46 = *(_QWORD *)v210,
        *(_QWORD *)v210 != 0x8000000000000000LL) )
  {
    v47 = *(_QWORD *)&v210[8];
    v48 = *(_QWORD *)&v210[16];
    v49 = (char)v225;
    goto LABEL_197;
  }
  if ( 2 * v47 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v219, v47, 1);
  if ( v195 != 0x8000000000000000LL && v195 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v196, v195, 1);
  if ( 2 * v204 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v204, 1);
  core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h31c48f7e6d5138e7(&v216);
  core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h31c48f7e6d5138e7(&v217);
  core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..account_coordination..AccountSnapshotLock$GT$$GT$::h1ee61957938cab1b(&v221);
  if ( 2 * v228 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v226, v228, 1);
  if ( !(_BYTE)v225 || *(_QWORD *)&v194[0] == 0x8000000000000000LL )
    goto LABEL_220;
  v46 = 0x8000000000000000LL;
LABEL_210:
  v229 = (_QWORD *)v46;
  v112 = v47;
  v113 = v48;
  if ( *((_QWORD *)&v194[1] + 1) != 0x8000000000000000LL && *((_QWORD *)&v194[1] + 1) )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v194[2], *((_QWORD *)&v194[1] + 1), 1);
  v114 = *((_QWORD *)&v194[0] + 1);
  v115 = *(_QWORD *)&v194[1];
  if ( *(_QWORD *)&v194[1] )
  {
    v116 = *((_QWORD *)&v194[0] + 1);
    do
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v116);
      v116 += 424;
      --v115;
    }
    while ( v115 );
  }
  if ( *(_QWORD *)&v194[0] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v114, 424LL * *(_QWORD *)&v194[0], 8);
  v48 = v113;
  v47 = v112;
  v46 = (__int64)v229;
LABEL_219:
  if ( v46 == 0x8000000000000000LL )
  {
LABEL_220:
    v117 = std::time::Instant::elapsed::h457f209775ed485c(v185);
    v118 = v190;
    v119 = v191;
    v194[0] = 0x3E8 * (unsigned __int128)(unsigned __int64)v117 + v120 / 0xF4240uLL;
    v198[0] = (__int64)"status=verifiedrollback_failedfailed | ";
    v198[1] = 15;
    *(_QWORD *)v210 = v191;
    *(_QWORD *)&v210[8] = uuid::fmt::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$uuid..Uuid$GT$::fmt::h318954c16e5fd96c;
    *(_QWORD *)&v210[16] = v194;
    *(_QWORD *)&v210[24] = core::fmt::num::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u128$GT$::fmt::h61d56f1b6c643750;
    *(_QWORD *)&v210[32] = v198;
    *(_QWORD *)&v210[40] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, (char *)&loc_1017C33A0 + 4, v210);
    codexmate_lib::platform::debug_log::app_event::hca94542905aced18(
      &unk_10160470B,
      14,
      "rollback_completedstatus=verifiedrollback_failedfailed | ",
      18,
      __src);
    v121 = 1;
    goto LABEL_226;
  }
  *(_QWORD *)v210 = v46;
  *(_QWORD *)&v210[8] = v47;
  *(_QWORD *)&v210[16] = v48;
  v198[0] = (__int64)codexmate_lib::commands::accounts::switch_error_code::h067c73bb59b91569(
                       (unsigned __int8 *)v47,
                       (unsigned __int8 *)v48);
  v198[1] = v122;
  __src[0] = v198;
  __src[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v181, (char *)&loc_1017C33C3 + 2, __src);
  v118 = v190;
  v119 = v191;
  codexmate_lib::commands::accounts::AccountSwitchTrace::event::h45db447b3c672556(
    v191,
    (__int64)"rollback_failedfailed | ",
    15,
    v181);
  __src[0] = v210;
  __src[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v184, (char *)&loc_1017C33C9 + 4, __src);
  v123 = v214;
  if ( v214 == v212 )
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v212);
  v124 = v213;
  v125 = 3 * v123;
  v213[v125 + 2] = v184[2];
  v126 = v184[0];
  v124[v125 + 1] = v184[1];
  v124[v125] = v126;
  v214 = v123 + 1;
  if ( *(_QWORD *)v210 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v210[8], *(_QWORD *)v210, 1);
  v121 = 0;
LABEL_226:
  *(_QWORD *)&v210[48] = v189[6];
  *(_QWORD *)&v210[40] = v189[5];
  *(_QWORD *)&v210[32] = v189[4];
  *(_QWORD *)&v210[24] = v189[3];
  *(_QWORD *)&v210[16] = v189[2];
  v127 = *v189;
  *(_QWORD *)&v210[8] = v189[1];
  *(_QWORD *)v210 = v127;
  codexmate_lib::platform::process::CodexTransitionFence::finish::h45158145f6465b18(__src, (__int64)v210);
  if ( LODWORD(__src[0]) == 11 )
  {
    if ( v121 )
    {
      codexmate_lib::platform::process::CodexProcessLifecycle::launch::ha2d4ffcf3d332a03(__src, (__int64)v210);
      if ( LODWORD(__src[0]) != 11 )
      {
        qmemcpy(v210, __src, 0x60u);
        v198[0] = (__int64)v210;
        v198[1] = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v182, (char *)&loc_1017C33E6 + 2, v198);
        v129 = v214;
        if ( v214 == v212 )
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v212);
        v130 = v213;
        v131 = 3 * v129;
        v213[v131 + 2] = v182[2];
        v132 = v182[0];
        v130[v131 + 1] = v182[1];
        v130[v131] = v132;
        v214 = v129 + 1;
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v210);
      }
    }
  }
  else
  {
    qmemcpy(v210, __src, 0x60u);
    v198[0] = (__int64)v210;
    v198[1] = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v183, (char *)&loc_1017C3408 + 2, v198);
    v133 = v214;
    if ( v214 == v212 )
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v212);
    v134 = v213;
    v135 = 3 * v133;
    v213[v135 + 2] = v183[2];
    v136 = v183[0];
    v134[v135 + 1] = v183[1];
    v134[v135] = v136;
    v214 = v133 + 1;
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v210);
  }
  if ( !v214 )
    core::panicking::panic_bounds_check::h56740b1198b22635(0, 0, &off_101967C20, v128);
  __src[0] = codexmate_lib::commands::accounts::switch_error_code::h067c73bb59b91569(
               (unsigned __int8 *)v213[1],
               (unsigned __int8 *)v213[2]);
  __src[1] = v137;
  *(_QWORD *)v210 = __src;
  *(_QWORD *)&v210[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v180, (char *)&loc_1017C33C3 + 2, v210);
  result = codexmate_lib::commands::accounts::AccountSwitchTrace::event::h45db447b3c672556(
             v119,
             (__int64)"failed | ",
             6,
             v180);
  alloc::str::join_generic_copy::heca7a5e86402c6b6(v210, v213, v214, " | ", 3);
  v118[2] = *(_QWORD *)&v210[16];
  v139 = *(_QWORD *)v210;
  v118[1] = *(_QWORD *)&v210[8];
  *v118 = v139;
  v140 = v214;
  if ( v214 )
  {
    v141 = v213 + 1;
    do
    {
      v142 = *(v141 - 1);
      if ( v142 )
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v141, v142, 1);
      v141 += 3;
      --v140;
    }
    while ( v140 );
  }
  if ( v212 )
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v213, 24 * v212, 8);
  return result;
}
