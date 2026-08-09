// __ZN13codexmate_lib4core13oauth_refresh25refresh_token_with_policy @ 0x1007bade0
// [FULL — hexrays 全解 56260B, 超大体分页取回]
// 1.2.3 NEW-delta | codexmate_lib::core::oauth_refresh::refresh_token_with_policy | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::oauth_refresh::refresh_token_with_policy::h554e0eb1f76208d0(
        _QWORD *a1,
        void *a2,
        size_t a3,
        void *a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        void *a8,
        size_t a9,
        char a10)
{
  __int64 v12; // rbx
  __int64 v13; // r12
  __int32 v14; // r15d
  __int32 *v15; // rsi
  __int32 *v16; // rdi
  __int64 i; // rcx
  unsigned __int64 v18; // r12
  __m128i *v19; // rbx
  _QWORD *v20; // rdx
  __int64 v21; // rax
  _OWORD *v22; // rdx
  __int64 v24; // rsi
  void *v25; // r15
  __int64 v26; // rsi
  __int64 v27; // r13
  __int64 v28; // rsi
  __m128i *v29; // rdi
  __int64 v30; // rbx
  __m128i *v31; // r12
  __int64 v33; // r15
  __int64 v34; // rsi
  char v35; // r15
  __int64 v36; // rsi
  __int64 v37; // rsi
  __int64 v38; // rsi
  __int64 v39; // rsi
  __int64 v40; // rsi
  __int64 v41; // rbx
  __int64 v42; // r15
  __int64 v43; // r12
  void (__fastcall *v44)(__int64); // rax
  __int64 v45; // rsi
  __int64 v46; // rsi
  __int64 v48; // rbx
  __int64 v49; // r14
  __int32 v50; // r15d
  __int32 *v51; // rsi
  __int32 *v52; // rdi
  __int64 j; // rcx
  void *v54; // rbx
  _QWORD *v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rbx
  __int64 v58; // r15
  __int64 v59; // r12
  __int64 v60; // rsi
  unsigned __int8 v61; // bl
  __int64 v62; // r14
  unsigned __int8 v63; // al
  __int64 v64; // rdx
  __int64 v65; // rbx
  __int64 v66; // r14
  __int64 v67; // rax
  __int64 v68; // rbx
  size_t v69; // r15
  _OWORD *v70; // rdx
  _QWORD *v71; // rdx
  __int64 v72; // rax
  unsigned __int64 v73; // rsi
  const void *v74; // r14
  void *v75; // rax
  size_t v76; // rbx
  __int64 v77; // rax
  _QWORD *v78; // rdx
  __int64 v79; // rax
  unsigned __int8 v80; // al
  __int64 v81; // rdx
  void *v82; // rax
  _QWORD *v83; // rcx
  __int16 v84; // r14
  unsigned __int8 v85; // al
  unsigned __int64 v86; // rdx
  void *v87; // rax
  void *v88; // rax
  _QWORD *v89; // rcx
  __int64 v90; // rdx
  __m128i si128; // xmm0
  __int64 v92; // r14
  __int64 v93; // r15
  __int64 v94; // r12
  __int64 v95; // rsi
  void *v96; // r14
  size_t v97; // rdx
  void *v98; // r13
  __int64 v99; // r15
  void *v100; // rax
  __m128i *v101; // rdx
  void *v102; // rdi
  __int64 v103; // r13
  __int64 v104; // r14
  __int64 v105; // r15
  void *v106; // rbx
  _QWORD *v107; // rdx
  __int64 v108; // rax
  __int128 v109; // kr20_16
  __int64 v110; // r12
  __int64 v111; // r14
  void *v112; // rsi
  void *v113; // rbx
  __int64 v114; // rdi
  __int64 v115; // rax
  size_t v116; // rdx
  const void *v117; // r14
  size_t v118; // r13
  __int64 v119; // rbx
  __int64 v120; // r15
  __m128i *v121; // rdi
  _OWORD *v122; // rdx
  __int64 v123; // r14
  void *v124; // rax
  _QWORD *v125; // rcx
  __int64 v126; // r14
  __int64 v127; // rsi
  __int64 v128; // rsi
  __int64 v129; // rsi
  __int64 v130; // rsi
  __int64 v131; // rsi
  __int64 v132; // rsi
  void *v133; // rdi
  __int64 v134; // r13
  __int64 v135; // rsi
  __m128i v136; // kr60_16
  __int64 v137; // r12
  __int64 v138; // rbx
  size_t v139; // rdx
  __int64 v140; // rbx
  _QWORD *v141; // rdx
  __int64 v142; // rax
  void *v143; // rax
  _QWORD *v144; // rcx
  unsigned __int64 v145; // r12
  signed __int64 v146; // rt0
  __int64 v147; // r12
  size_t v148; // r13
  void *v149; // r14
  __int64 v150; // r15
  int v151; // eax
  _QWORD *v152; // rdx
  __int64 v153; // rax
  void *v154; // r15
  __int64 v155; // rax
  _QWORD *v156; // rdx
  __int64 v157; // rax
  __m128i v158; // xmm0
  void *v159; // rdi
  size_t v160; // rsi
  __int64 v161; // rax
  _QWORD *v162; // rdx
  __int64 v163; // rax
  __int64 v164; // r14
  void *v165; // rax
  _QWORD *v166; // rcx
  _QWORD *v167; // rdx
  __int64 v168; // rax
  __int64 v169; // rax
  _QWORD *v170; // rdx
  __int64 v171; // rax
  _BYTE __dst[176]; // [rsp+8h] [rbp-838h] BYREF
  _OWORD v177[4]; // [rsp+B8h] [rbp-788h] BYREF
  __int64 v178; // [rsp+F8h] [rbp-748h]
  __m128i v179; // [rsp+100h] [rbp-740h] BYREF
  __int64 v180; // [rsp+110h] [rbp-730h]
  _QWORD v181[3]; // [rsp+118h] [rbp-728h] BYREF
  _QWORD v182[3]; // [rsp+130h] [rbp-710h] BYREF
  _QWORD v183[3]; // [rsp+148h] [rbp-6F8h] BYREF
  _QWORD v184[3]; // [rsp+160h] [rbp-6E0h] BYREF
  _QWORD v185[3]; // [rsp+178h] [rbp-6C8h] BYREF
  _QWORD v186[3]; // [rsp+190h] [rbp-6B0h] BYREF
  _QWORD v187[3]; // [rsp+1A8h] [rbp-698h] BYREF
  _QWORD v188[3]; // [rsp+1C0h] [rbp-680h] BYREF
  _QWORD v189[3]; // [rsp+1D8h] [rbp-668h] BYREF
  _QWORD v190[3]; // [rsp+1F0h] [rbp-650h] BYREF
  _QWORD v191[2]; // [rsp+208h] [rbp-638h] BYREF
  __int128 v192; // [rsp+218h] [rbp-628h] BYREF
  __int64 v193; // [rsp+228h] [rbp-618h]
  __int128 v194; // [rsp+230h] [rbp-610h] BYREF
  __int64 v195; // [rsp+240h] [rbp-600h]
  size_t v196; // [rsp+248h] [rbp-5F8h]
  __int64 v197; // [rsp+250h] [rbp-5F0h]
  __m128i v198; // [rsp+258h] [rbp-5E8h] BYREF
  const char *v199; // [rsp+268h] [rbp-5D8h]
  __int64 v200; // [rsp+270h] [rbp-5D0h]
  const char *v201; // [rsp+278h] [rbp-5C8h]
  __int64 v202; // [rsp+280h] [rbp-5C0h]
  void *v203; // [rsp+288h] [rbp-5B8h]
  size_t v204; // [rsp+290h] [rbp-5B0h]
  char *v205; // [rsp+298h] [rbp-5A8h]
  __int64 v206; // [rsp+2A0h] [rbp-5A0h]
  char *v207; // [rsp+2A8h] [rbp-598h]
  __int64 v208; // [rsp+2B0h] [rbp-590h]
  _OWORD v209[11]; // [rsp+2B8h] [rbp-588h] BYREF
  volatile signed __int64 *v210; // [rsp+368h] [rbp-4D8h] BYREF
  __m128i v211; // [rsp+370h] [rbp-4D0h]
  __int64 v212; // [rsp+380h] [rbp-4C0h]
  __int64 v213; // [rsp+388h] [rbp-4B8h]
  size_t v214; // [rsp+390h] [rbp-4B0h]
  __int64 v215; // [rsp+398h] [rbp-4A8h]
  __m128i v216[20]; // [rsp+3A0h] [rbp-4A0h] BYREF
  _BYTE v217[176]; // [rsp+4E8h] [rbp-358h] BYREF
  unsigned __int64 v218; // [rsp+598h] [rbp-2A8h] BYREF
  __m128i v219; // [rsp+5A0h] [rbp-2A0h]
  __int64 v220; // [rsp+5B0h] [rbp-290h]
  __int64 v221; // [rsp+5B8h] [rbp-288h]
  __int64 v222; // [rsp+5C0h] [rbp-280h]
  __int64 v223; // [rsp+5C8h] [rbp-278h]
  __int64 v224; // [rsp+5D0h] [rbp-270h]
  void *v225; // [rsp+5D8h] [rbp-268h]
  _OWORD __src[11]; // [rsp+5E0h] [rbp-260h] BYREF
  __int64 v227; // [rsp+690h] [rbp-1B0h]
  __int64 v228; // [rsp+698h] [rbp-1A8h]
  _BYTE v229[24]; // [rsp+728h] [rbp-118h] BYREF
  __int64 v230; // [rsp+740h] [rbp-100h]
  void *v231; // [rsp+748h] [rbp-F8h]
  __m128i v232; // [rsp+750h] [rbp-F0h] BYREF
  _QWORD v233[2]; // [rsp+760h] [rbp-E0h] BYREF
  void *v234; // [rsp+770h] [rbp-D0h]
  unsigned __int64 v235; // [rsp+778h] [rbp-C8h]
  void *v236; // [rsp+780h] [rbp-C0h]
  __m128i v237; // [rsp+788h] [rbp-B8h] BYREF
  __int64 v238; // [rsp+798h] [rbp-A8h]
  __int64 v239; // [rsp+7A0h] [rbp-A0h]
  __int64 v240; // [rsp+7A8h] [rbp-98h]
  __int64 v241; // [rsp+7B0h] [rbp-90h]
  void *__s2; // [rsp+7B8h] [rbp-88h]
  void *v243; // [rsp+7C0h] [rbp-80h]
  __int64 v244; // [rsp+7C8h] [rbp-78h]
  unsigned __int32 v245; // [rsp+7D4h] [rbp-6Ch] BYREF
  size_t v246; // [rsp+7D8h] [rbp-68h]
  int v247; // [rsp+7E4h] [rbp-5Ch]
  size_t __n; // [rsp+7E8h] [rbp-58h]
  __int64 v249; // [rsp+7F0h] [rbp-50h]
  unsigned __int32 v250; // [rsp+7FCh] [rbp-44h] BYREF
  void *v251; // [rsp+800h] [rbp-40h]
  _QWORD *v252; // [rsp+808h] [rbp-38h]
  unsigned __int64 v253; // [rsp+810h] [rbp-30h]

  v251 = a4;
  v252 = a1;
  v243 = a2;
  v246 = a3;
  codexmate_lib::core::account_coordination::snapshot_lock_path::h6366cdd791a9fbed(v217, a2, a3);
  v12 = *(_QWORD *)&v217[8];
  codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673(
    __src,
    *(_QWORD *)&v217[8],
    *(_QWORD *)&v217[16],
    &anon_4fd0d0f33f5bcd90fdaba20400e954f2_56,
    18);
  v13 = *(_QWORD *)&__src[0];
  v14 = DWORD2(__src[0]);
  if ( *(_QWORD *)&__src[0] != 11 )
  {
    v15 = (__int32 *)__src + 3;
    v16 = &v216[0].i32[3];
    for ( i = 21; i; --i )
      *v16++ = *v15++;
  }
  v216[0].i32[2] = v14;
  v216[0].i64[0] = v13;
  if ( *(_QWORD *)v217 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, *(_QWORD *)v217, 1);
  if ( (_DWORD)v13 != 11 )
  {
    qmemcpy(__src, v216, 0x60u);
    *(_QWORD *)&v209[0] = 0;
    *((_QWORD *)&v209[0] + 1) = 1;
    *(_QWORD *)&v209[1] = 0;
    *(_QWORD *)&v217[16] = 1610612768;
    *(_QWORD *)v217 = v209;
    *(_QWORD *)&v217[8] = &anon_3ce6d1417794db0febde534c64082f90_389;
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                            __src,
                            v217) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_3ce6d1417794db0febde534c64082f90_390,
        55,
        v233,
        &anon_3ce6d1417794db0febde534c64082f90_429,
        &anon_3ce6d1417794db0febde534c64082f90_392);
    v22 = v252;
    v252[2] = *(_QWORD *)&v209[1];
    *v22 = v209[0];
    return core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v216);
  }
  v245 = v14;
  codexmate_lib::core::auth::load_auth_file::h495f6935c70eecba(__src, v243, v246);
  v18 = 0x8000000000000000LL;
  v239 = 0x8000000000000001LL;
  v19 = (__m128i *)v251;
  if ( *(_QWORD *)&__src[0] == 0x8000000000000001LL )
  {
    qmemcpy(v216, (char *)__src + 8, 0x60u);
    *(_QWORD *)v217 = v216;
    *(_QWORD *)&v217[8] = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v190, &unk_1017C50D0, v217);
    v20 = v252;
    v252[2] = v190[2];
    v21 = v190[0];
    v20[1] = v190[1];
    *v20 = v21;
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v216);
LABEL_181:
    _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v245);
    return close_NOCANCEL(v245);
  }
  memcpy(__dst, __src, sizeof(__dst));
  if ( 2LL * *(_QWORD *)v251 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v251 + 1), *(_QWORD *)v251, 1);
    v24 = v19[1].i64[1];
    if ( !(2 * v24) )
      goto LABEL_14;
  }
  else
  {
    v24 = *((_QWORD *)v251 + 3);
    if ( !(2 * v24) )
      goto LABEL_14;
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19[2].i64[0], v24, 1);
LABEL_14:
  v244 = a5;
  v25 = a8;
  core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthTokens$GT$::h201262d26def3154(&v19[3]);
  v26 = v19[9].i64[0];
  if ( 2 * v26 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19[9].i64[1], v26, 1);
  v27 = a9;
  v28 = (__int64)__dst;
  v29 = v19;
  memcpy(v19, __dst, 0xB0u);
  v250 = -1;
  if ( !a8 )
    goto LABEL_80;
  v29 = (__m128i *)v217;
  v253 = 0x8000000000000000LL;
  v28 = (__int64)a8;
  std::fs::read::inner::h6a30c15c40add28b(v217, a8, a9);
  v30 = *(_QWORD *)v217;
  v31 = *(__m128i **)&v217[8];
  if ( *(_QWORD *)v217 != 0x8000000000000000LL )
  {
    __src[0] = *(_OWORD *)&v217[8];
    __src[1] = 0u;
    serde_json::de::from_trait::hee93ab9047d5d7fd(v216, __src);
    v27 = v216[0].i64[0];
    if ( v216[0].i64[0] == v239 )
    {
      v33 = v216[0].i64[1];
      if ( *(_QWORD *)v216[0].i64[1] == 1 )
      {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v216[0].i64[1] + 8);
      }
      else if ( !*(_QWORD *)v216[0].i64[1] )
      {
        v34 = *(_QWORD *)(v216[0].i64[1] + 16);
        if ( v34 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v216[0].i64[1] + 8), v34, 1);
      }
      v28 = 40;
      v29 = (__m128i *)v33;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, 40, 8);
      v35 = 2;
      if ( !v30 )
        goto LABEL_65;
LABEL_58:
      v29 = v31;
      v28 = v30;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, v30, 1);
      goto LABEL_65;
    }
    memcpy((char *)__src + 8, &v216[0].u64[1], 0xA8u);
    *(_QWORD *)&__src[0] = v216[0].i64[0];
    v29 = (__m128i *)__src;
    v35 = codexmate_lib::core::auth::same_real_account_identity::hb69b2d35d81d0769(__src, v251, a8, a9);
    if ( 2 * v27 )
    {
      v29 = *((__m128i **)&__src[0] + 1);
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__src[0] + 1), v27, 1);
      v36 = *((_QWORD *)&__src[1] + 1);
      if ( !(2LL * *((_QWORD *)&__src[1] + 1)) )
      {
LABEL_30:
        v37 = *(_QWORD *)&__src[3];
        if ( !(2LL * *(_QWORD *)&__src[3]) )
          goto LABEL_31;
        goto LABEL_53;
      }
    }
    else
    {
      v36 = *((_QWORD *)&__src[1] + 1);
      if ( !(2LL * *((_QWORD *)&__src[1] + 1)) )
        goto LABEL_30;
    }
    v29 = *(__m128i **)&__src[2];
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__src[2], v36, 1);
    v37 = *(_QWORD *)&__src[3];
    if ( !(2LL * *(_QWORD *)&__src[3]) )
    {
LABEL_31:
      v38 = *((_QWORD *)&__src[4] + 1);
      if ( !(2LL * *((_QWORD *)&__src[4] + 1)) )
        goto LABEL_32;
      goto LABEL_54;
    }
LABEL_53:
    v29 = *((__m128i **)&__src[3] + 1);
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__src[3] + 1), v37, 1);
    v38 = *((_QWORD *)&__src[4] + 1);
    if ( !(2LL * *((_QWORD *)&__src[4] + 1)) )
    {
LABEL_32:
      v39 = *(_QWORD *)&__src[6];
      if ( !(2LL * *(_QWORD *)&__src[6]) )
        goto LABEL_33;
      goto LABEL_55;
    }
LABEL_54:
    v29 = *(__m128i **)&__src[5];
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__src[5], v38, 1);
    v39 = *(_QWORD *)&__src[6];
    if ( !(2LL * *(_QWORD *)&__src[6]) )
    {
LABEL_33:
      v40 = *((_QWORD *)&__src[7] + 1);
      if ( !(2LL * *((_QWORD *)&__src[7] + 1)) )
        goto LABEL_34;
      goto LABEL_56;
    }
LABEL_55:
    v29 = *((__m128i **)&__src[6] + 1);
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__src[6] + 1), v39, 1);
    v40 = *((_QWORD *)&__src[7] + 1);
    if ( !(2LL * *((_QWORD *)&__src[7] + 1)) )
    {
LABEL_34:
      v28 = *(_QWORD *)&__src[9];
      if ( !(2LL * *(_QWORD *)&__src[9]) )
        goto LABEL_35;
      goto LABEL_57;
    }
LABEL_56:
    v29 = *(__m128i **)&__src[8];
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__src[8], v40, 1);
    v28 = *(_QWORD *)&__src[9];
    if ( !(2LL * *(_QWORD *)&__src[9]) )
    {
LABEL_35:
      if ( !v30 )
        goto LABEL_65;
      goto LABEL_58;
    }
LABEL_57:
    v29 = *((__m128i **)&__src[9] + 1);
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__src[9] + 1), v28, 1);
    if ( !v30 )
      goto LABEL_65;
    goto LABEL_58;
  }
  _RAX = v217[8] & 3;
  switch ( v217[8] & 3 )
  {
    case 0:
      if ( !*(_BYTE *)(*(_QWORD *)&v217[8] + 16LL) )
        goto LABEL_64;
      goto LABEL_47;
    case 1:
      v41 = *(_QWORD *)&v217[8] - 1LL;
      v42 = *(_QWORD *)(*(_QWORD *)&v217[8] - 1LL);
      v43 = *(_QWORD *)(*(_QWORD *)&v217[8] + 7LL);
      v44 = *(void (__fastcall **)(__int64))v43;
      if ( *(_BYTE *)(*(_QWORD *)&v217[8] + 15LL) )
      {
        if ( v44 )
          v44(v42);
        v45 = *(_QWORD *)(v43 + 8);
        if ( v45 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, v45, *(_QWORD *)(v43 + 16));
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, 24, 8);
        v25 = a8;
LABEL_47:
        v18 = 0x8000000000000000LL;
        goto LABEL_66;
      }
      if ( v44 )
        v44(v42);
      v46 = *(_QWORD *)(v43 + 8);
      if ( v46 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, v46, *(_QWORD *)(v43 + 16));
      v28 = 24;
      v29 = (__m128i *)v41;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, 24, 8);
LABEL_64:
      v35 = 0;
      break;
    case 2:
      if ( *(_DWORD *)&v217[12] == 2 )
        goto LABEL_64;
      goto LABEL_47;
    case 3:
      if ( !HIDWORD(*(_QWORD *)&v217[8]) )
        goto LABEL_64;
      goto LABEL_47;
    case 4:
      __asm { rep add [rax], al; jumptable 00000001007BB0E2 case 4 }
      JUMPOUT(0x100BC053ELL);
  }
LABEL_65:
  v18 = 0x8000000000000000LL;
  _ZF = (v35 & 1 | (v35 == 2)) == 0;
  v25 = a8;
  if ( _ZF )
  {
LABEL_80:
    v61 = 0;
    v253 = 0x8000000000000000LL;
    v247 = 0;
    goto LABEL_81;
  }
LABEL_66:
  v253 = 0x8000000000000000LL;
  std::path::Path::_join::hb1a495d4f06b13b8(v217, a6, a7, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_49, 15);
  v27 = (__int64)v25;
  v48 = *(_QWORD *)&v217[8];
  codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673(
    __src,
    *(_QWORD *)&v217[8],
    *(_QWORD *)&v217[16],
    &anon_4fd0d0f33f5bcd90fdaba20400e954f2_50,
    9);
  v49 = *(_QWORD *)&__src[0];
  v50 = DWORD2(__src[0]);
  if ( *(_QWORD *)&__src[0] != 11 )
  {
    v51 = (__int32 *)__src + 3;
    v52 = &v216[0].i32[3];
    for ( j = 21; j; --j )
      *v52++ = *v51++;
  }
  v216[0].i32[2] = v50;
  v216[0].i64[0] = v49;
  if ( *(_QWORD *)v217 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, *(_QWORD *)v217, 1);
  if ( (_DWORD)v49 != 11 )
  {
    qmemcpy(__src, v216, 0x60u);
    *(_QWORD *)&v209[0] = 0;
    *((_QWORD *)&v209[0] + 1) = 1;
    *(_QWORD *)&v209[1] = 0;
    *(_QWORD *)&v217[16] = 1610612768;
    *(_QWORD *)v217 = v209;
    *(_QWORD *)&v217[8] = &anon_3ce6d1417794db0febde534c64082f90_389;
    if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                            __src,
                            v217) )
      core::result::unwrap_failed::h855bccc0ecc45c4f(
        &anon_3ce6d1417794db0febde534c64082f90_390,
        55,
        v233,
        &anon_3ce6d1417794db0febde534c64082f90_429,
        &anon_3ce6d1417794db0febde534c64082f90_392);
    v70 = v252;
    v252[2] = *(_QWORD *)&v209[1];
    *v70 = v209[0];
    v253 = 0x8000000000000000LL;
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v216);
    goto LABEL_115;
  }
  v198.i32[0] = v50;
  std::fs::read::inner::h6a30c15c40add28b(v217, v27, a9);
  v253 = *(_QWORD *)v217;
  v54 = v251;
  if ( *(_QWORD *)v217 == 0x8000000000000000LL )
  {
    v216[0].i64[0] = *(_QWORD *)&v217[8];
    *(_QWORD *)&__src[0] = v216;
    *((_QWORD *)&__src[0] + 1) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v187, &unk_1017C4F5F, __src);
    v55 = v252;
    v252[2] = v187[2];
    v56 = v187[0];
    v55[1] = v187[1];
    *v55 = v56;
    if ( (v216[0].i8[0] & 3) == 1 )
    {
      v57 = v216[0].i64[0] - 1;
      v58 = *(_QWORD *)(v216[0].i64[0] - 1);
      v59 = *(_QWORD *)(v216[0].i64[0] + 7);
      if ( *(_QWORD *)v59 )
        (*(void (__fastcall **)(__int64))v59)(v58);
      v60 = *(_QWORD *)(v59 + 8);
      if ( v60 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58, v60, *(_QWORD *)(v59 + 16));
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v57, 24, 8);
    }
    goto LABEL_114;
  }
  __s2 = *(void **)&v217[8];
  v216[0] = *(__m128i *)&v217[8];
  v232.i64[0] = *(_QWORD *)&v217[16];
  v216[1] = 0u;
  serde_json::de::from_trait::hee93ab9047d5d7fd(__src, v216);
  if ( *(_QWORD *)&__src[0] == v239 )
  {
    *(_QWORD *)&v209[0] = *((_QWORD *)&__src[0] + 1);
    v216[0].i64[0] = (__int64)v209;
    v216[0].i64[1] = (__int64)_$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v188, &unk_1017C4F2C, v216);
    v71 = v252;
    v252[2] = v188[2];
    v72 = v188[0];
    v71[1] = v188[1];
    *v71 = v72;
    core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(v209);
    v73 = v253;
    if ( !v253 )
    {
LABEL_114:
      _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v198);
      close_NOCANCEL(v198.u32[0]);
LABEL_115:
      v253 = 0x8000000000000000LL;
      goto LABEL_177;
    }
LABEL_113:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v73, 1);
    goto LABEL_114;
  }
  v247 = codexmate_lib::core::auth::same_real_account_identity::hb69b2d35d81d0769(__src, v54, v27, a9);
  if ( (_BYTE)v247 )
  {
    v28 = (__int64)__src;
    v61 = codexmate_lib::core::oauth_refresh::auth_is_newer::h8388ebc832e4acfe(v54, __src);
    if ( !v61 )
    {
      v77 = codexmate_lib::core::oauth_refresh::write_auth_if_changed::hfa24da92d1836bdd(v243, v246, __s2, v232.i64[0]);
      if ( v77 )
      {
        *(_QWORD *)&v209[0] = v77;
        v216[0].i64[0] = (__int64)v209;
        v216[0].i64[1] = (__int64)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v189, &unk_1017C4EF2, v216);
        v78 = v252;
        v252[2] = v189[2];
        v79 = v189[0];
        v78[1] = v189[1];
        *v78 = v79;
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v209);
        core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(__src);
        v73 = v253;
        if ( !v253 )
          goto LABEL_114;
        goto LABEL_113;
      }
      v96 = v251;
      core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(v251);
      v28 = (__int64)__src;
      memcpy(v96, __src, 0xB0u);
    }
    v29 = (__m128i *)&v250;
    core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$$GT$::h1bc456d1b3207dd2(&v250);
    v250 = v50;
    if ( v61 )
    {
      v29 = (__m128i *)__src;
      core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(__src);
    }
    v25 = (void *)v27;
    v27 = v232.i64[0];
  }
  else
  {
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 <= 2u
      || (v216[0].i64[0] = (__int64)"codexmate_lib::core::oauth_refresh",
          v216[0].i64[1] = 34,
          v216[1].i64[0] = (__int64)"codexmate_lib::core::oauth_refresh",
          v216[1].i64[1] = 34,
          v216[2].i64[0] = (__int64)&off_10196B2D0,
          log::__private_api::log::h719f4907c7336ae9(
            "[AiMaMi][oauth-refresh] active auth ownership changed before refreshcodexmate_lib::core::oauth_refresh",
            137,
            3,
            v216),
          *(_QWORD *)&__src[0] != v239) )
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(__src);
    }
    v28 = v253;
    v25 = (void *)v27;
    if ( v253 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v253, 1);
    v29 = &v198;
    v253 = 0x8000000000000000LL;
    core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..AccountSnapshotLock$GT$::h226b884ef2b4cd9a(&v198);
    v61 = 0;
    v253 = 0x8000000000000000LL;
  }
LABEL_81:
  if ( !a10 )
  {
    v62 = *((_QWORD *)v251 + 9);
    if ( v62 != 0x8000000000000000LL
      && (v28 = *((_QWORD *)v251 + 11)) != 0
      && (v29 = *((__m128i **)v251 + 10),
          v63 = codexmate_lib::core::oauth_refresh::token_remaining_seconds::h718707a516734df6(v29),
          (v63 & (v64 >= 301)) == 1) )
    {
      if ( (v61 & (unsigned __int8)v247) != 0 )
      {
        if ( !v25 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, v28);
          v69 = 46;
          v68 = 1;
          v88 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(46, 1);
          if ( v88 )
          {
            qmemcpy(v88, "active account refresh lost the live auth path", 46);
            v89 = v252;
            *v252 = 46;
            v89[1] = v88;
            v89[2] = 46;
            goto LABEL_177;
          }
          goto LABEL_106;
        }
        if ( v253 == 0x8000000000000000LL )
          v27 = 0;
        v65 = 1;
        if ( v253 != 0x8000000000000000LL )
          v65 = (__int64)__s2;
        if ( !(unsigned __int8)codexmate_lib::core::oauth_refresh::external_codex_writer_is_present::h567ad782b47e3644() )
        {
          std::fs::read::inner::h6a30c15c40add28b(__src, v25, a9);
          v66 = *(_QWORD *)&__src[0];
          if ( *(_QWORD *)&__src[0] == 0x8000000000000000LL )
          {
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..vec..Vec$LT$u8$GT$$C$std..io..error..Error$GT$$GT$::haf2cc967f6a0bdad(__src);
          }
          else
          {
            v97 = v27;
            v98 = v25;
            v99 = *((_QWORD *)&__src[0] + 1);
            if ( *(_QWORD *)&__src[1] == v97 && !memcmp(*((const void **)&__src[0] + 1), (const void *)v65, v97) )
            {
              if ( v66 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v99, v66, 1);
              serde_json::ser::to_vec_pretty::h7e50eac573342525(__src, v251);
              v76 = *(_QWORD *)&__src[0];
              if ( *(_QWORD *)&__src[0] == 0x8000000000000000LL )
              {
                *(_QWORD *)v217 = *((_QWORD *)&__src[0] + 1);
                v216[0].i64[0] = (__int64)v217;
                v216[0].i64[1] = (__int64)_$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d;
                alloc::fmt::format::format_inner::h3c16c74008a310d4(v186, &unk_1017C4FCD, v216);
                v141 = v252;
                v252[2] = v186[2];
                v142 = v186[0];
                v141[1] = v186[1];
                *v141 = v142;
                core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(v217);
                goto LABEL_177;
              }
              v154 = *((void **)&__src[0] + 1);
              v155 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(v98, a9);
              if ( v155 )
              {
                v216[0].i64[0] = v155;
                *(_QWORD *)&__src[0] = v216;
                *((_QWORD *)&__src[0] + 1) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
                alloc::fmt::format::format_inner::h3c16c74008a310d4(v185, &unk_1017C4F91, __src);
                v156 = v252;
                v252[2] = v185[2];
                v157 = v185[0];
                v156[1] = v185[1];
                *v156 = v157;
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v216);
                if ( !v76 )
                  goto LABEL_177;
                v102 = v154;
                goto LABEL_176;
              }
              if ( v76 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v154, v76, 1);
            }
            else if ( v66 )
            {
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v99, v66, 1);
            }
          }
        }
      }
    }
    else
    {
      if ( !(_BYTE)v247 )
        goto LABEL_102;
      if ( !(unsigned __int8)codexmate_lib::platform::process::is_codex_app_running::ha65c033875f26151() )
      {
        v29 = (__m128i *)__src;
        codexmate_lib::platform::process::assert_no_external_codex_writers::hee72a366f7c4ee9d(__src);
        if ( LODWORD(__src[0]) == 11 )
          goto LABEL_102;
        v29 = (__m128i *)__src;
        core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__src);
      }
      v28 = *((_QWORD *)v251 + 11);
      if ( v62 == 0x8000000000000000LL
        || v28 == 0
        || (v29 = *((__m128i **)v251 + 10),
            v80 = codexmate_lib::core::oauth_refresh::token_remaining_seconds::h718707a516734df6(v29),
            ((v81 <= 0) & v80) != 0) )
      {
LABEL_130:
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, v28);
        v69 = 64;
        v68 = 1;
        v82 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(64, 1);
        if ( v82 )
        {
          qmemcpy(v82, "active account token refresh deferred while Codex owns auth.json", 64);
          v83 = v252;
          *v252 = 64;
          v83[1] = v82;
          v83[2] = 64;
          goto LABEL_177;
        }
        goto LABEL_106;
      }
    }
LABEL_108:
    *v252 = v18;
LABEL_177:
    if ( v250 != -1 )
    {
      _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v250);
      close_NOCANCEL(v250);
    }
    if ( 2 * v253 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v253, 1);
    goto LABEL_181;
  }
  if ( (_BYTE)v247 )
  {
    if ( (unsigned __int8)codexmate_lib::platform::process::is_codex_app_running::ha65c033875f26151() )
      goto LABEL_130;
    codexmate_lib::platform::process::collect_external_codex_writers::h013c99e264542e67(__src);
    v28 = *(_QWORD *)&__src[0];
    if ( *(_QWORD *)&__src[0] != 11 )
    {
      v216[5] = (__m128i)__src[5];
      v216[4] = (__m128i)__src[4];
      v216[3] = (__m128i)__src[3];
      v216[2] = (__m128i)__src[2];
      v216[0] = (__m128i)__src[0];
      v216[1] = (__m128i)__src[1];
LABEL_126:
      v29 = v216;
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v216);
      goto LABEL_130;
    }
    *(_QWORD *)v217 = *(_QWORD *)&__src[1];
    *(_QWORD *)&v217[8] = *(_QWORD *)&__src[1];
    *(_QWORD *)&v217[16] = *((_QWORD *)&__src[0] + 1);
    *(_QWORD *)&v217[24] = *(_QWORD *)&__src[1] + 32LL * *((_QWORD *)&__src[1] + 1);
    alloc::vec::in_place_collect::from_iter_in_place::h7c38924dca936911(v209, v217);
    v29 = v216;
    v28 = (__int64)v209;
    codexmate_lib::platform::process::reject_external_codex_writers::h04ed4542d20e0d8e(v216, v209);
    if ( v216[0].i32[0] != 11 )
      goto LABEL_126;
  }
LABEL_102:
  if ( *((_QWORD *)v251 + 12) == 0x8000000000000000LL || (v67 = *((_QWORD *)v251 + 14)) == 0 )
  {
    v18 = 0x8000000000000002LL;
    goto LABEL_108;
  }
  __n = *((_QWORD *)v251 + 14);
  if ( v67 < 0 )
  {
    v68 = 0;
    v69 = __n;
    goto LABEL_106;
  }
  v74 = *((const void **)v251 + 13);
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, v28);
  v68 = 1;
  v69 = __n;
  v75 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1);
  if ( !v75 )
LABEL_106:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v68, v69);
  v234 = v75;
  memcpy(v75, v74, v69);
  v76 = v69;
  codexmate_lib::core::api_client::http_client::hd6199412cc486f7f(v216, v244);
  if ( v216[0].i64[0] != 11 )
  {
    if ( v216[0].i32[0] == 6 )
    {
      *(_QWORD *)&v209[0] = v216[0].i64[1];
      *(_QWORD *)v217 = v209;
      *(_QWORD *)&v217[8] = _$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &unk_1017C4EB4, v217);
      v198 = (__m128i)__src[0];
      v199 = *(const char **)&__src[1];
      core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38(*(_QWORD *)&v209[0]);
    }
    else
    {
      qmemcpy(__src, v216, 0x60u);
      *(_QWORD *)&v209[0] = 0;
      *((_QWORD *)&v209[0] + 1) = 1;
      *(_QWORD *)&v209[1] = 0;
      *(_QWORD *)&v217[16] = 1610612768;
      *(_QWORD *)v217 = v209;
      *(_QWORD *)&v217[8] = &anon_3ce6d1417794db0febde534c64082f90_389;
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                              __src,
                              v217) )
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          &anon_3ce6d1417794db0febde534c64082f90_390,
          55,
          v233,
          &anon_3ce6d1417794db0febde534c64082f90_429,
          &anon_3ce6d1417794db0febde534c64082f90_392);
      v198 = (__m128i)v209[0];
      v199 = *(const char **)&v209[1];
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v216);
    }
    v219 = v198;
    v220 = (__int64)v199;
    goto LABEL_174;
  }
  v210 = (volatile signed __int64 *)v216[0].i64[1];
  v211 = v216[1];
  v198.i64[0] = (__int64)&unk_101673836;
  v198.i64[1] = 10;
  v199 = "refresh_tokenclient_idapp_EMoamEEZ73f0CkXaXp7hrannhttps://auth.openai.com/oauth/token";
  v200 = 13;
  v201 = "refresh_tokenclient_idapp_EMoamEEZ73f0CkXaXp7hrannhttps://auth.openai.com/oauth/token";
  v202 = 13;
  v203 = v234;
  v204 = v69;
  v205 = "client_idapp_EMoamEEZ73f0CkXaXp7hrannhttps://auth.openai.com/oauth/token";
  v206 = 9;
  v207 = "app_EMoamEEZ73f0CkXaXp7hrannhttps://auth.openai.com/oauth/token";
  v208 = 28;
  v216[1].i64[0] = 0x202020202020202LL;
  v216[0] = _mm_load_si128((const __m128i *)&xmmword_101601D20);
  reqwest::blocking::client::Client::request::h7c2f6eecf4bb7488(__src);
  reqwest::blocking::request::RequestBuilder::header_sensitive::h88aff67beb7138a9(v216, __src, 0);
  reqwest::blocking::request::RequestBuilder::header_sensitive::h88aff67beb7138a9(__src, v216, 0);
  reqwest::blocking::request::RequestBuilder::timeout::hb8eadb3e43e5e543(v216, __src);
  reqwest::blocking::request::RequestBuilder::form::h006b7dfe5e8a81e4(__src, v216);
  reqwest::blocking::request::RequestBuilder::send::hcef8dd63d8ba20b3(v217, __src);
  if ( *(_QWORD *)v217 == 3 )
  {
    v233[0] = *(_QWORD *)&v217[8];
    v216[0].i64[0] = (__int64)v233;
    v216[0].i64[1] = (__int64)_$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &unk_1017C4E7C, v216);
    v216[0] = (__m128i)__src[0];
    v216[1].i64[0] = *(_QWORD *)&__src[1];
    v76 = __n;
    core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::hfd5825193a86df38(v233[0]);
    *(__m128i *)v229 = v216[0];
    v220 = v216[1].i64[0];
    v219 = v216[0];
    v218 = 0x8000000000000000LL;
    goto LABEL_171;
  }
  v238 = *(_QWORD *)&v217[24];
  v237 = *(__m128i *)&v217[8];
  memcpy(&v209[2], &v217[32], 0x90u);
  *(_QWORD *)v229 = *(_QWORD *)&v217[8];
  *(_OWORD *)((char *)v209 + 8) = *(_OWORD *)&v217[8];
  *((_QWORD *)&v209[1] + 1) = *(_QWORD *)&v217[24];
  *(_QWORD *)&v209[0] = *(_QWORD *)v217;
  v84 = WORD4(v209[6]);
  v85 = reqwest::blocking::response::Response::content_length::hf7ed9fda65e5734e(v209);
  if ( ((v86 >= 0x40001) & v85) != 0 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v209, &v217[32]);
    v87 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(47, 1);
    if ( !v87 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 47);
    qmemcpy(v87, "token endpoint response exceeded the size limit", 47);
    v219.i64[0] = 47;
    v219.i64[1] = (__int64)v87;
    v220 = 47;
    v218 = 0x8000000000000000LL;
    v76 = __n;
    core::ptr::drop_in_place$LT$reqwest..blocking..response..Response$GT$::h5421d9ae43e533e2(v209);
    goto LABEL_171;
  }
  *(_QWORD *)v229 = 0;
  *(_QWORD *)&v229[8] = 1;
  *(_QWORD *)&v229[16] = 0;
  memcpy(__src, v209, sizeof(__src));
  v227 = 262145;
  v228 = 262145;
  if ( (std::io::default_read_to_end::hea609f3c6996a6a8(__src, v229, 0) & 1) != 0 )
  {
    v237.i64[0] = v90;
    *(_QWORD *)v217 = &v237;
    *(_QWORD *)&v217[8] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v216, &unk_1017C4EC4, v217);
    si128 = _mm_load_si128(v216);
    v92 = v216[1].i64[0];
    if ( (v237.i8[0] & 3) == 1 )
    {
      v232 = si128;
      v244 = v237.i64[0] - 1;
      v93 = *(_QWORD *)(v237.i64[0] - 1);
      v94 = *(_QWORD *)(v237.i64[0] + 7);
      if ( *(_QWORD *)v94 )
        (*(void (__fastcall **)(__int64))v94)(v93);
      v95 = *(_QWORD *)(v94 + 8);
      if ( v95 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v93, v95, *(_QWORD *)(v94 + 16));
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v244, 24, 8);
      si128 = _mm_load_si128(&v232);
    }
    v219 = si128;
    v220 = v92;
    v218 = 0x8000000000000000LL;
    core::ptr::drop_in_place$LT$reqwest..blocking..response..Response$GT$::h5421d9ae43e533e2(__src);
    goto LABEL_168;
  }
  core::ptr::drop_in_place$LT$reqwest..blocking..response..Response$GT$::h5421d9ae43e533e2(__src);
  if ( *(_QWORD *)&v229[16] >= 0x40001u )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, v229);
    v100 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(47, 1);
    if ( !v100 )
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 47);
    qmemcpy(v100, "token endpoint response exceeded the size limit", 47);
    v219.i64[0] = 47;
    v219.i64[1] = (__int64)v100;
    v220 = 47;
    goto LABEL_167;
  }
  if ( (unsigned __int16)(v84 - 200) < 0x64u )
  {
    v216[0] = *(__m128i *)&v229[8];
    v216[1] = 0u;
    serde_json::de::from_trait::h7f728e969648fd54(__src, v216);
    if ( *(_QWORD *)&__src[0] != 0x8000000000000000LL )
    {
      *(_OWORD *)&v217[8] = __src[1];
      v177[2] = __src[2];
      v177[3] = __src[3];
      v178 = *(_QWORD *)&__src[4];
      v237 = *(__m128i *)((char *)__src + 8);
      v238 = *((_QWORD *)&__src[1] + 1);
      v177[0] = __src[0];
      v177[1] = __src[1];
      codexmate_lib::core::oauth_refresh::validate_token_endpoint_success::heebea4e5df3cd844(&v218, v177);
      goto LABEL_168;
    }
    codexmate_lib::core::oauth_refresh::call_token_endpoint::_$u7b$$u7b$closure$u7d$$u7d$::h8825686168a86d7e(
      v216,
      *((_QWORD *)&__src[0] + 1));
    v237 = v216[0];
    v219 = v216[0];
    v220 = v216[1].i64[0];
LABEL_167:
    v218 = 0x8000000000000000LL;
LABEL_168:
    if ( *(_QWORD *)v229 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v229[8], *(_QWORD *)v229, 1);
    v76 = __n;
LABEL_171:
    if ( _InterlockedDecrement64(v210) )
      goto LABEL_173;
    goto LABEL_172;
  }
  v140 = *(_QWORD *)&v229[8];
  v216[0] = *(__m128i *)&v229[8];
  v216[1] = 0u;
  serde_json::de::from_trait::habe0ec36366d8edd(__src, v216);
  if ( *(_QWORD *)&__src[0] == v239 )
  {
    v216[0].i64[0] = v239;
    core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..oauth_refresh..TokenEndpointError$C$serde_json..error..Error$GT$$GT$::hddb7d8d2e4a752fe(__src);
LABEL_263:
    v237.i64[0] = 0x8000000000000000LL;
LABEL_264:
    *(_QWORD *)v217 = 0;
    *(_OWORD *)&v217[8] = 1u;
    v145 = 0x8000000000000000LL;
    goto LABEL_265;
  }
  qmemcpy(v216, __src, 0x48u);
  if ( v216[0].i64[0] == v239 )
    goto LABEL_263;
  v232.i64[0] = v27;
  codexmate_lib::core::oauth_refresh::token_endpoint_error_code::h68362271bd0989f4(&v237, v216);
  v145 = v237.i64[0];
  v27 = v232.i64[0];
  if ( v237.i64[0] == 0x8000000000000000LL )
    goto LABEL_264;
  if ( v238 == 13 )
  {
    if ( !(*(_QWORD *)v237.i64[1] ^ 0x5F64696C61766E69LL | *(_QWORD *)(v237.i64[1] + 5) ^ 0x746E6172675F6469LL)
      || !(*(_QWORD *)v237.i64[1] ^ 0x5F64696C61766E69LL | *(_QWORD *)(v237.i64[1] + 5) ^ 0x6E656B6F745F6469LL) )
    {
LABEL_304:
      v219.i64[0] = 0x8000000000000003LL;
      v218 = 0x8000000000000000LL;
      v27 = v232.i64[0];
      if ( !(2 * v237.i64[0]) )
        goto LABEL_268;
      goto LABEL_305;
    }
  }
  else if ( v238 == 20 )
  {
    v158 = _mm_or_si128(
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)v237.i64[1]), (__m128i)xmmword_1016731D0),
             _mm_xor_si128(_mm_cvtsi32_si128(*(_DWORD *)(v237.i64[1] + 16)), (__m128i)xmmword_1016731C0));
    if ( _mm_testz_si128(v158, v158) )
      goto LABEL_304;
  }
  v191[0] = v237.i64[1];
  v191[1] = v238;
  v233[0] = v191;
  v233[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(__src, &unk_1017C4E75, v233);
  *(_OWORD *)v217 = __src[0];
  *(_QWORD *)&v217[16] = *(_QWORD *)&__src[1];
  v27 = v232.i64[0];
LABEL_265:
  LOWORD(v233[0]) = v84;
  *(_QWORD *)&__src[0] = v233;
  *((_QWORD *)&__src[0] + 1) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0;
  *(_QWORD *)&__src[1] = v217;
  *((_QWORD *)&__src[1] + 1) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v179, &unk_1017C4E5D, __src);
  v219 = v179;
  v220 = v180;
  v218 = 0x8000000000000000LL;
  if ( *(_QWORD *)v217 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v217[8], *(_QWORD *)v217, 1);
  if ( 2 * v145 )
LABEL_305:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v237.i64[1], v145, 1);
LABEL_268:
  core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..oauth_refresh..TokenEndpointError$GT$$GT$::h73637f74d857b460(v216);
  if ( *(_QWORD *)v229 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v140, *(_QWORD *)v229, 1);
  v146 = _InterlockedDecrement64(v210);
  v76 = __n;
  if ( !v146 )
LABEL_172:
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h47ee1b0b32217f4e(&v210);
LABEL_173:
  if ( v218 == 0x8000000000000000LL )
  {
LABEL_174:
    v101 = (__m128i *)v252;
    v252[2] = v220;
    *v101 = v219;
LABEL_175:
    v102 = v234;
LABEL_176:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v102, v76, 1);
    goto LABEL_177;
  }
  v232.i64[0] = v27;
  v235 = v218;
  v103 = v219.i64[1];
  v244 = v219.i64[0];
  v230 = v220;
  v213 = v221;
  v104 = v222;
  v105 = v223;
  v212 = v224;
  v106 = v225;
  codexmate_lib::core::auth::make_auth_snapshot::h0711ba2f125fb190(__src, v251, v243, v246);
  if ( LODWORD(__src[0]) == 2 )
  {
    qmemcpy(v216, (char *)__src + 8, 0x60u);
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::he3b02506b1ba193d(v217, v216);
    v107 = v252;
    v252[2] = *(_QWORD *)&v217[16];
    v108 = *(_QWORD *)v217;
    v107[1] = *(_QWORD *)&v217[8];
    *v107 = v108;
    v76 = __n;
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb((char *)__src + 8);
    if ( v235 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v244, v235, 1);
LABEL_233:
    if ( 2 * v230 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v213, v230, 1);
    if ( 2 * v105 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v212, v105, 1);
    goto LABEL_175;
  }
  v249 = v104;
  v236 = v106;
  v240 = v105;
  v231 = *((void **)&__src[1] + 1);
  v241 = *(_QWORD *)&__src[1];
  v196 = *(_QWORD *)&__src[2];
  v109 = __src[4];
  v110 = *((_QWORD *)&__src[5] + 1);
  v215 = *(_QWORD *)&__src[6];
  v214 = *((_QWORD *)&__src[7] + 1);
  v111 = *(_QWORD *)&__src[7];
  if ( *((_QWORD *)&__src[2] + 1) )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__src[3], *((_QWORD *)&__src[2] + 1), 1);
  if ( 2LL * (_QWORD)v109 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v109 + 1), v109, 1);
  if ( 2 * v110 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v215, v110, 1);
  v112 = v251;
  v105 = v240;
  if ( 2 * v111 )
  {
    v113 = v251;
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v214, v111, 1);
    v112 = v113;
  }
  _$LT$codexmate_lib..core..auth..AuthFile$u20$as$u20$core..clone..Clone$GT$::clone::h7f753630bb677f25(__src, v112);
  v114 = v244;
  v115 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v244, v103);
  v214 = v116;
  if ( !v116 )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v114, v103);
    v123 = 45;
    v119 = 1;
    v124 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(45, 1);
    if ( v124 )
    {
      qmemcpy(v124, "token endpoint returned an empty access_token", 45);
      v125 = v252;
      *v252 = 45;
      v125[1] = v124;
      v125[2] = 45;
      goto LABEL_211;
    }
LABEL_318:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v119, v123);
  }
  v117 = (const void *)v115;
  v118 = v116;
  alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(v216, v116, 0, 1, 1);
  v119 = v216[0].i64[1];
  if ( v216[0].i8[0] )
  {
    v123 = v216[1].i64[0];
    goto LABEL_318;
  }
  v120 = v216[1].i64[0];
  memcpy((void *)v216[1].i64[0], v117, v118);
  if ( 2LL * *((_QWORD *)&__src[4] + 1) )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__src[5], *((_QWORD *)&__src[4] + 1), 1);
  *((_QWORD *)&__src[4] + 1) = v119;
  *(_QWORD *)&__src[5] = v120;
  *((_QWORD *)&__src[5] + 1) = v118;
  v216[0].i64[0] = v230;
  v216[0].i64[1] = v213;
  v216[1].i64[0] = v249;
  core::option::Option$LT$T$GT$::filter::hdd00dde8f59e370f(&v194, v216);
  v105 = v240;
  if ( (_QWORD)v194 != 0x8000000000000000LL )
  {
    if ( 2LL * *(_QWORD *)&__src[6] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__src[6] + 1), *(_QWORD *)&__src[6], 1);
    *(_QWORD *)&__src[7] = v195;
    __src[6] = v194;
  }
  v216[0].i64[0] = v105;
  v216[0].i64[1] = v212;
  v216[1].i64[0] = (__int64)v236;
  core::option::Option$LT$T$GT$::filter::hdd00dde8f59e370f(&v192, v216);
  if ( (_QWORD)v192 != 0x8000000000000000LL )
  {
    if ( 2LL * *(_QWORD *)&__src[3] )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__src[3] + 1), *(_QWORD *)&__src[3], 1);
    *(_QWORD *)&__src[4] = v193;
    __src[3] = v192;
  }
  codexmate_lib::core::oauth_refresh::current_iso_timestamp::h8e09bc80fe0d0574(v216);
  *(__m128i *)&v217[8] = *(__m128i *)((char *)v216 + 8);
  *(_QWORD *)v217 = v216[0].i64[0];
  if ( 2LL * *(_QWORD *)&__src[9] )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__src[9] + 1), *(_QWORD *)&__src[9], 1);
  *(_OWORD *)((char *)&__src[9] + 8) = *(_OWORD *)&v217[8];
  *(_QWORD *)&__src[9] = *(_QWORD *)v217;
  v121 = v216;
  codexmate_lib::core::auth::make_auth_snapshot::h0711ba2f125fb190(v216, __src, v243, v246);
  if ( v216[0].i32[0] == 2 )
  {
    qmemcpy(v217, &v216[0].u64[1], 0x60u);
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::he3b02506b1ba193d(v209, v217);
    v122 = v252;
    v252[2] = *(_QWORD *)&v209[1];
    *v122 = v209[0];
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v216[0].u64[1]);
LABEL_211:
    v76 = __n;
    v126 = v241;
    goto LABEL_212;
  }
  v236 = (void *)v216[1].i64[1];
  v134 = v216[1].i64[0];
  v135 = v216[2].i64[1];
  v249 = v216[2].i64[0];
  v136 = v216[4];
  v137 = v216[5].i64[1];
  v197 = v216[6].i64[0];
  v215 = v216[7].i64[1];
  v138 = v216[7].i64[0];
  if ( v216[2].i64[1] )
  {
    v121 = (__m128i *)v216[3].i64[0];
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v216[3].i64[0], v216[2].i64[1], 1);
  }
  if ( 2 * v136.i64[0] )
  {
    v121 = (__m128i *)v136.i64[1];
    v135 = v136.i64[0];
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v136.i64[1], v136.i64[0], 1);
    if ( !(2 * v137) )
    {
LABEL_241:
      v105 = v240;
      if ( !(2 * v138) )
        goto LABEL_242;
LABEL_256:
      v121 = (__m128i *)v215;
      v135 = v138;
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v215, v138, 1);
      v139 = v196;
      if ( v249 != v196 )
      {
LABEL_258:
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v121, v135);
        v143 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(59, 1);
        if ( !v143 )
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 59);
        qmemcpy(v143, "token endpoint returned credentials for a different account", 59);
        v144 = v252;
        *v252 = 59;
        v144[1] = v143;
        v144[2] = 59;
        v76 = __n;
        v126 = v241;
        if ( v134 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v236, v134, 1);
LABEL_212:
        if ( 2LL * *(_QWORD *)&__src[0] )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__src[0] + 1), *(_QWORD *)&__src[0], 1);
          v127 = *((_QWORD *)&__src[1] + 1);
          if ( !(2LL * *((_QWORD *)&__src[1] + 1)) )
          {
LABEL_214:
            v128 = *(_QWORD *)&__src[3];
            if ( !(2LL * *(_QWORD *)&__src[3]) )
              goto LABEL_215;
            goto LABEL_222;
          }
        }
        else
        {
          v127 = *((_QWORD *)&__src[1] + 1);
          if ( !(2LL * *((_QWORD *)&__src[1] + 1)) )
            goto LABEL_214;
        }
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__src[2], v127, 1);
        v128 = *(_QWORD *)&__src[3];
        if ( !(2LL * *(_QWORD *)&__src[3]) )
        {
LABEL_215:
          v129 = *((_QWORD *)&__src[4] + 1);
          if ( !(2LL * *((_QWORD *)&__src[4] + 1)) )
            goto LABEL_216;
          goto LABEL_223;
        }
LABEL_222:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__src[3] + 1), v128, 1);
        v129 = *((_QWORD *)&__src[4] + 1);
        if ( !(2LL * *((_QWORD *)&__src[4] + 1)) )
        {
LABEL_216:
          v130 = *(_QWORD *)&__src[6];
          if ( !(2LL * *(_QWORD *)&__src[6]) )
            goto LABEL_217;
          goto LABEL_224;
        }
LABEL_223:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__src[5], v129, 1);
        v130 = *(_QWORD *)&__src[6];
        if ( !(2LL * *(_QWORD *)&__src[6]) )
        {
LABEL_217:
          v131 = *((_QWORD *)&__src[7] + 1);
          if ( !(2LL * *((_QWORD *)&__src[7] + 1)) )
            goto LABEL_218;
          goto LABEL_225;
        }
LABEL_224:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__src[6] + 1), v130, 1);
        v131 = *((_QWORD *)&__src[7] + 1);
        if ( !(2LL * *((_QWORD *)&__src[7] + 1)) )
        {
LABEL_218:
          v132 = *(_QWORD *)&__src[9];
          if ( !(2LL * *(_QWORD *)&__src[9]) )
            goto LABEL_228;
LABEL_226:
          v133 = *((void **)&__src[9] + 1);
          goto LABEL_227;
        }
LABEL_225:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__src[8], v131, 1);
        v132 = *(_QWORD *)&__src[9];
        if ( !(2LL * *(_QWORD *)&__src[9]) )
          goto LABEL_228;
        goto LABEL_226;
      }
      goto LABEL_257;
    }
  }
  else if ( !(2 * v137) )
  {
    goto LABEL_241;
  }
  v121 = (__m128i *)v197;
  v135 = v137;
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v197, v137, 1);
  v105 = v240;
  if ( 2 * v138 )
    goto LABEL_256;
LABEL_242:
  v139 = v196;
  if ( v249 != v196 )
    goto LABEL_258;
LABEL_257:
  v121 = (__m128i *)v236;
  v135 = (__int64)v231;
  if ( memcmp(v236, v231, v139) )
    goto LABEL_258;
  v147 = v134;
  v148 = v232.i64[0];
  v149 = v251;
  core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(v251);
  memcpy(v149, __src, 0xB0u);
  serde_json::ser::to_vec_pretty::h3e25bb892076df8b(v216, v149);
  v150 = v216[0].i64[0];
  v151 = 0;
  if ( v216[0].i64[0] == 0x8000000000000000LL )
  {
    *(_QWORD *)&v209[0] = v216[0].i64[1];
    *(_QWORD *)v217 = v209;
    *(_QWORD *)&v217[8] = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v184, &unk_1017C50A9, v217);
    v152 = v252;
    v252[2] = v184[2];
    v153 = v184[0];
    v152[1] = v184[1];
    *v152 = v153;
    core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(v209);
LABEL_286:
    v76 = __n;
    v105 = v240;
    v126 = v241;
    if ( !v147 )
    {
LABEL_228:
      if ( v126 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v231, v126, 1);
      if ( v235 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v244, v235, 1);
      if ( v214 )
        goto LABEL_175;
      goto LABEL_233;
    }
    v133 = v236;
    v132 = v147;
LABEL_227:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v133, v132, 1);
    goto LABEL_228;
  }
  LOBYTE(v151) = 1;
  LODWORD(v249) = v151;
  v159 = v243;
  v160 = v246;
  v251 = (void *)v216[0].i64[1];
  v161 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(v243, v246);
  if ( v161 )
  {
    *(_QWORD *)v217 = v161;
    v216[0].i64[0] = (__int64)v217;
    v216[0].i64[1] = (__int64)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v183, &unk_1017C4FFC, v216);
    v162 = v252;
    v252[2] = v183[2];
    v163 = v183[0];
    v162[1] = v183[1];
    *v162 = v163;
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v217);
    goto LABEL_284;
  }
  if ( (_BYTE)v247 )
  {
    if ( !a8 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v159, v160);
      v165 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(46, 1);
      if ( !v165 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 46);
      qmemcpy(v165, "active account refresh lost the live auth path", 46);
      v166 = v252;
      *v252 = 46;
      v166[1] = v165;
      v166[2] = 46;
      goto LABEL_284;
    }
    if ( v253 == 0x8000000000000000LL )
      v148 = 0;
    v164 = 1;
    if ( v253 != 0x8000000000000000LL )
      v164 = (__int64)__s2;
    if ( (unsigned __int8)codexmate_lib::core::oauth_refresh::external_codex_writer_is_present::h567ad782b47e3644() )
    {
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 2u )
      {
        v216[0].i64[0] = (__int64)"codexmate_lib::core::oauth_refresh";
        v216[0].i64[1] = 34;
        v216[1].i64[0] = (__int64)"codexmate_lib::core::oauth_refresh";
        v216[1].i64[1] = 34;
        v216[2].i64[0] = (__int64)&off_10196B300;
        log::__private_api::log::h719f4907c7336ae9(
          "[AiMaMi][oauth-refresh] skipped auth.json sync because Codex became active",
          149,
          3,
          v216);
      }
      *v252 = v239;
      goto LABEL_284;
    }
    std::fs::read::inner::h6a30c15c40add28b(v217, a8, a9);
    v246 = *(_QWORD *)v217;
    if ( *(_QWORD *)v217 == 0x8000000000000000LL )
    {
      *(_QWORD *)&v209[0] = *(_QWORD *)&v217[8];
      v216[0].i64[0] = (__int64)v209;
      v216[0].i64[1] = (__int64)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v182, &unk_1017C5069, v216);
      v167 = v252;
      v252[2] = v182[2];
      v168 = v182[0];
      v167[1] = v182[1];
      *v167 = v168;
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v209);
      goto LABEL_284;
    }
    v243 = *(void **)&v217[8];
    if ( *(_QWORD *)&v217[16] != v148 || memcmp(v243, (const void *)v164, v148) )
    {
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u )
      {
        v216[0].i64[0] = (__int64)"codexmate_lib::core::oauth_refresh";
        v216[0].i64[1] = 34;
        v216[1].i64[0] = (__int64)"codexmate_lib::core::oauth_refresh";
        v216[1].i64[1] = 34;
        v216[2].i64[0] = (__int64)&off_10196B2E8;
        log::__private_api::log::h719f4907c7336ae9(
          "[AiMaMi][oauth-refresh] skipped auth.json sync because live auth changed[AiMaMi][oauth-refresh] skipped auth.j"
          "son sync because Codex became active",
          145,
          3,
          v216);
      }
      *v252 = v239;
      if ( v246 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v243, v246, 1);
      goto LABEL_284;
    }
    if ( v246 )
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v243, v246, 1);
    v169 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(a8, a9);
    if ( v169 )
    {
      *(_QWORD *)v217 = v169;
      v216[0].i64[0] = (__int64)v217;
      v216[0].i64[1] = (__int64)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v181, &unk_1017C502D, v216);
      v170 = v252;
      v252[2] = v181[2];
      v171 = v181[0];
      v170[1] = v181[1];
      *v170 = v171;
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v217);
LABEL_284:
      if ( v150 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v251, v150, 1);
      goto LABEL_286;
    }
  }
  v216[0].i32[0] = v250;
  LODWORD(v249) = 0;
  core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$$GT$::h1bc456d1b3207dd2(v216);
  *v252 = v239;
  if ( v150 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v251, v150, 1);
  if ( v147 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v236, v147, 1);
  if ( v241 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v231, v241, 1);
  if ( v235 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v244, v235, 1);
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v234, __n, 1);
  if ( 2 * v253 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v253, 1);
  return core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..AccountSnapshotLock$GT$::h226b884ef2b4cd9a(&v245);
}
