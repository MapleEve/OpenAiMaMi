// __ZN13codexmate_lib4core10repository10Repository15remove_accounts @ 0x100a58340 | 基线 same-set
void *__fastcall codexmate_lib::core::repository::Repository::remove_accounts::h8128f0f27aa6a603(
        void *a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v4; // rbx
  __int64 v5; // r14
  double v6; // xmm0_8
  __int64 v7; // rax
  __int64 v8; // r15
  __int64 v9; // r12
  const __m128i *v10; // rax
  __m128i v11; // xmm0
  const __m128i *v12; // r13
  __int64 v13; // rbx
  const __m128i *v15; // r12
  __int64 v17; // r14
  int v18; // r15d
  __m128i si128; // xmm0
  __int64 v20; // rax
  __int64 v21; // rbx
  __int64 v22; // r15
  unsigned int v23; // r14d
  _DWORD *v24; // rsi
  __int64 *v25; // rdi
  __int64 i; // rcx
  __m128i v27; // xmm0
  __int64 v28; // rax
  __int64 *v29; // r14
  __int64 v30; // r12
  void *v31; // rax
  _QWORD *v32; // rcx
  _QWORD *v33; // rdx
  _QWORD *v34; // rdx
  __int64 v35; // rax
  _QWORD *v36; // rax
  char *v37; // rsi
  __int64 v38; // rcx
  _QWORD *v39; // rdx
  _DWORD *v40; // rdi
  __int64 *v41; // rsi
  __int64 j; // rcx
  unsigned int *v43; // r12
  __int64 v44; // r15
  _QWORD *v45; // rdx
  __int64 v46; // r12
  const void *v47; // rbx
  const __m128i *v48; // r14
  __int64 v49; // rsi
  unsigned __int64 v50; // r13
  const __m128i *v51; // r9
  __int64 v52; // rcx
  __m128i v53; // xmm1
  const __m128i *v54; // r8
  __int64 k; // rdi
  unsigned __int64 v56; // r13
  __m128i v57; // xmm2
  size_t v59; // rbx
  __int64 v60; // r15
  const __m128i *v61; // r14
  int v62; // eax
  __int64 v63; // rdi
  __int64 v64; // rsi
  unsigned __int64 v65; // r15
  char v66; // al
  __int64 v67; // rbx
  __int64 v68; // rax
  __int64 v69; // r14
  __int64 v70; // r13
  __int64 v71; // rbx
  _QWORD *v72; // rsi
  __int64 v73; // rax
  void *v74; // rax
  __int64 v75; // rbx
  _BYTE *v76; // rdi
  __int64 *v77; // rsi
  void *v78; // rax
  __int64 v79; // rbx
  void *v80; // rax
  __int64 v81; // r14
  double v82; // xmm0_8
  _QWORD *v83; // r13
  _QWORD *v84; // rdx
  __int64 v85; // rax
  _QWORD *v86; // rdx
  __int64 v87; // rax
  unsigned int *v88; // rbx
  __int64 v89; // rbx
  __int64 v90; // rbx
  _QWORD *v91; // r14
  __int64 v92; // rsi
  char *v94; // rsi
  __int64 v95; // rcx
  __int64 v96; // rcx
  char *v97; // rsi
  __int64 v98; // rcx
  __int64 v99; // rcx
  __int64 v100; // rax
  char *v101; // rsi
  _QWORD *v102; // rdx
  _QWORD *v103; // rdx
  _QWORD v104[12]; // [rsp+8h] [rbp-6B8h] BYREF
  _QWORD v105[12]; // [rsp+68h] [rbp-658h] BYREF
  _DWORD v106[24]; // [rsp+C8h] [rbp-5F8h] BYREF
  _DWORD v107[24]; // [rsp+128h] [rbp-598h] BYREF
  _QWORD v108[11]; // [rsp+188h] [rbp-538h] BYREF
  __int64 v109; // [rsp+1E0h] [rbp-4E0h] BYREF
  __int64 (__fastcall *v110)(_QWORD, _QWORD); // [rsp+1E8h] [rbp-4D8h]
  __int64 v111; // [rsp+1F0h] [rbp-4D0h]
  _BYTE v112[48]; // [rsp+240h] [rbp-480h] BYREF
  _BYTE v113[48]; // [rsp+270h] [rbp-450h] BYREF
  __m128i v114; // [rsp+2A0h] [rbp-420h] BYREF
  __m128i v115; // [rsp+2B0h] [rbp-410h] BYREF
  _QWORD v116[3]; // [rsp+2C8h] [rbp-3F8h] BYREF
  _QWORD v117[3]; // [rsp+2E0h] [rbp-3E0h] BYREF
  _QWORD v118[3]; // [rsp+2F8h] [rbp-3C8h] BYREF
  _QWORD v119[3]; // [rsp+310h] [rbp-3B0h] BYREF
  _QWORD v120[3]; // [rsp+328h] [rbp-398h] BYREF
  _QWORD v121[3]; // [rsp+340h] [rbp-380h] BYREF
  __int128 v122; // [rsp+358h] [rbp-368h]
  __int64 v123; // [rsp+368h] [rbp-358h]
  _QWORD v124[11]; // [rsp+370h] [rbp-350h] BYREF
  _QWORD v125[3]; // [rsp+3C8h] [rbp-2F8h] BYREF
  __int128 v126; // [rsp+3E0h] [rbp-2E0h]
  __int64 v127; // [rsp+3F0h] [rbp-2D0h]
  __int64 v128; // [rsp+3F8h] [rbp-2C8h]
  _QWORD v129[2]; // [rsp+400h] [rbp-2C0h] BYREF
  __int64 v130; // [rsp+410h] [rbp-2B0h]
  __int64 v131; // [rsp+418h] [rbp-2A8h]
  char v132[8]; // [rsp+428h] [rbp-298h] BYREF
  __int64 v133; // [rsp+430h] [rbp-290h]
  void *v134; // [rsp+438h] [rbp-288h]
  __int64 v135; // [rsp+440h] [rbp-280h]
  __int64 v136; // [rsp+448h] [rbp-278h]
  __int64 v137; // [rsp+450h] [rbp-270h]
  __int64 v138; // [rsp+458h] [rbp-268h] BYREF
  __int64 v139; // [rsp+460h] [rbp-260h]
  char v140; // [rsp+470h] [rbp-250h]
  const __m128i *v141; // [rsp+478h] [rbp-248h] BYREF
  __int64 v142; // [rsp+480h] [rbp-240h]
  __int64 v143; // [rsp+488h] [rbp-238h]
  __int64 v144; // [rsp+490h] [rbp-230h]
  __int128 v145; // [rsp+498h] [rbp-228h] BYREF
  _QWORD v146[3]; // [rsp+4A8h] [rbp-218h] BYREF
  __int64 v147; // [rsp+4C0h] [rbp-200h] BYREF
  __int64 v148; // [rsp+4C8h] [rbp-1F8h]
  __int64 v149; // [rsp+4D0h] [rbp-1F0h]
  __int64 v150; // [rsp+4D8h] [rbp-1E8h]
  __int64 v151; // [rsp+4E0h] [rbp-1E0h]
  void *v152; // [rsp+4E8h] [rbp-1D8h]
  __int64 v153[12]; // [rsp+4F0h] [rbp-1D0h] BYREF
  __int64 v154; // [rsp+550h] [rbp-170h]
  __int64 v155; // [rsp+558h] [rbp-168h]
  __int64 v156; // [rsp+560h] [rbp-160h]
  const __m128i *v157; // [rsp+568h] [rbp-158h]
  const __m128i *v158; // [rsp+570h] [rbp-150h]
  const __m128i *v159; // [rsp+578h] [rbp-148h]
  _BYTE __src[136]; // [rsp+580h] [rbp-140h] BYREF
  __int64 v161[12]; // [rsp+608h] [rbp-B8h] BYREF
  __int64 v162; // [rsp+668h] [rbp-58h] BYREF
  _QWORD *v163; // [rsp+670h] [rbp-50h]
  unsigned int v164; // [rsp+67Ch] [rbp-44h] BYREF
  _QWORD *v165; // [rsp+680h] [rbp-40h]
  __int64 v166; // [rsp+688h] [rbp-38h]
  void *v167; // [rsp+690h] [rbp-30h]

  v167 = a1; /*0x100a58357*/
  v4 = a2[28]; /*0x100a5835b*/
  v163 = a2; /*0x100a58362*/
  v5 = a2[29]; /*0x100a58366*/
  v6 = codexmate_lib::core::repository::Repository::load_registry::h67f16c6afc4d64cc(__src, v4, v5); /*0x100a5837a*/
  v7 = *(_QWORD *)__src; /*0x100a5837f*/
  qmemcpy(v161, &__src[8], 0x58u); /*0x100a58399*/
  if ( *(_QWORD *)__src != 11 ) /*0x100a583a0*/
  {
    v33 = v167; /*0x100a588cf*/
    qmemcpy((char *)v167 + 16, v161, 0x58u); /*0x100a588e3*/
    v33[1] = v7; /*0x100a588e6*/
    *v33 = 0x8000000000000000LL; /*0x100a588f4*/
LABEL_100:
    v90 = a3[2]; /*0x100a59784*/
    if ( v90 ) /*0x100a5978b*/
    {
      v91 = (_QWORD *)(a3[1] + 8LL); /*0x100a59791*/
      do /*0x100a597a7*/
      {
        v92 = *(v91 - 1); /*0x100a597a9*/
        if ( v92 ) /*0x100a597b0*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v91, v92, 1); /*0x100a597ba*/
        v91 += 3; /*0x100a597a0*/
        --v90; /*0x100a597a4*/
      }
      while ( v90 ); /*0x100a597a7*/
    }
    if ( *a3 ) /*0x100a597c1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(a3[1], 24LL * *a3, 8); /*0x100a597db*/
    return v167; /*0x100a597db*/
  }
  qmemcpy(v108, v161, sizeof(v108)); /*0x100a583b9*/
  v8 = v108[1]; /*0x100a583bc*/
  v9 = v108[2]; /*0x100a583c3*/
  v10 = (const __m128i *)core::ops::function::FnOnce::call_once::hff48933a1c7cebcb(0, v6); /*0x100a583cc*/
  if ( !v10 ) /*0x100a583d4*/
    std::thread::local::panic_access_error::hf13793238d4ae422(&anon_155c4da9b5393270cfa7378e2b52c417_743); /*0x100a59bf5*/
  v156 = v5; /*0x100a583da*/
  v162 = v4; /*0x100a583e1*/
  v11 = _mm_loadu_si128(v10); /*0x100a583ef*/
  ++v10->i64[0]; /*0x100a583f3*/
  memset(&__src[8], 0, 24); /*0x100a58419*/
  *(_QWORD *)__src = anon_4776471024d1e9bb78f2861cb2b51e1e_263; /*0x100a58427*/
  *(__m128i *)&__src[32] = v11; /*0x100a5842e*/
  v161[0] = v8; /*0x100a58436*/
  v161[1] = v8 + 424 * v9; /*0x100a5843d*/
  v161[2] = (__int64)a3; /*0x100a58444*/
  _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::ha16e108be6e539d1( /*0x100a5845c*/
    v161,
    __src);
  v141 = *(const __m128i **)__src; /*0x100a58479*/
  v142 = *(_QWORD *)&__src[8]; /*0x100a58480*/
  v143 = *(_QWORD *)&__src[16]; /*0x100a5848e*/
  v144 = *(_QWORD *)&__src[24]; /*0x100a5849c*/
  v145 = *(_OWORD *)&__src[32]; /*0x100a584b1*/
  if ( !*(_QWORD *)&__src[24] ) /*0x100a584c2*/
  {
    alloc::str::join_generic_copy::heca7a5e86402c6b6( /*0x100a58918*/
      __src,
      a3[1],
      a3[2],
      ", codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.",
      2);
    v161[2] = *(_QWORD *)&__src[16]; /*0x100a58924*/
    v161[1] = *(_QWORD *)&__src[8]; /*0x100a58939*/
    v161[0] = *(_QWORD *)__src; /*0x100a58940*/
    *(_QWORD *)__src = v161; /*0x100a58947*/
    *(_QWORD *)&__src[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100a58955*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v120, &unk_1017C8D87, __src); /*0x100a58971*/
    if ( v161[0] ) /*0x100a58980*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v161[1], v161[0], 1); /*0x100a5898e*/
    v34 = v167; /*0x100a5899a*/
    *((_QWORD *)v167 + 4) = v120[2]; /*0x100a5899e*/
    v35 = v120[0]; /*0x100a589a2*/
    v34[3] = v120[1]; /*0x100a589b0*/
    v34[2] = v35; /*0x100a589b4*/
    v34[1] = 8; /*0x100a589b8*/
    *v34 = 0x8000000000000000LL; /*0x100a589c0*/
LABEL_92:
    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h08711f87a316c141(&v141); /*0x100a5970d*/
    if ( v108[3] != 0x8000000000000000LL && v108[3] ) /*0x100a59728*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v108[4], v108[3], 1); /*0x100a59736*/
    if ( v9 ) /*0x100a5973e*/
    {
      v89 = v8; /*0x100a59740*/
      do /*0x100a59762*/
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h0451328b981148cc(v89); /*0x100a59753*/
        v89 += 424; /*0x100a59758*/
        --v9; /*0x100a5975f*/
      }
      while ( v9 ); /*0x100a59762*/
    }
    if ( v108[0] ) /*0x100a5976e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, 424LL * v108[0], 8); /*0x100a5977f*/
    goto LABEL_100; /*0x100a5977f*/
  }
  v151 = v9; /*0x100a584c8*/
  v150 = v8; /*0x100a584cf*/
  v165 = a3; /*0x100a584d6*/
  v12 = v141; /*0x100a584da*/
  v13 = *(_QWORD *)&__src[24]; /*0x100a584e1*/
  v158 = (const __m128i *)&v141->i8[v142 + 1]; /*0x100a584f0*/
  _R15D = ~_mm_movemask_epi8(_mm_load_si128(v141)); /*0x100a58502*/
  v15 = v141 + 1; /*0x100a58505*/
  HIDWORD(_RAX) = HIDWORD(v163); /*0x100a58509*/
  v166 = v163[31]; /*0x100a58514*/
  v17 = v163[32]; /*0x100a58518*/
  v157 = v141; /*0x100a5851f*/
  v159 = v141 + 1; /*0x100a58526*/
  v154 = *(_QWORD *)&__src[24]; /*0x100a5852d*/
  do /*0x100a585b9*/
  {
    if ( !(_WORD)_R15D ) /*0x100a58544*/
    {
      do /*0x100a5856d*/
      {
        v18 = _mm_movemask_epi8(_mm_load_si128(v15)); /*0x100a58556*/
        v12 -= 48; /*0x100a5855b*/
        ++v15; /*0x100a58562*/
      }
      while ( v18 == 0xFFFF ); /*0x100a5856d*/
      _R15D = ~v18; /*0x100a5856f*/
    }
    __asm { tzcnt eax, r15d } /*0x100a58572*/
    codexmate_lib::core::auth::ensure_managed_account_snapshot_location::hac13c2585495a048( /*0x100a5859a*/
      __src,
      (void *)v12[-3 * _RAX - 1].i64[0],
      v12[-3 * _RAX - 1].u64[1],
      v166,
      v17);
    if ( *(_DWORD *)__src != 11 ) /*0x100a585a6*/
    {
      v36 = v167; /*0x100a589c8*/
      qmemcpy((char *)v167 + 8, __src, 0x60u); /*0x100a589dc*/
      *v36 = 0x8000000000000000LL; /*0x100a589e9*/
      a3 = v165; /*0x100a589ec*/
LABEL_91:
      v8 = v150; /*0x100a596ff*/
      v9 = v151; /*0x100a59706*/
      goto LABEL_92; /*0x100a59706*/
    }
    _RAX = _R15D & (unsigned int)(_R15D - 1); /*0x100a585b0*/
    _R15D &= _R15D - 1; /*0x100a585b3*/
    --v13; /*0x100a585b6*/
  }
  while ( v13 ); /*0x100a585b9*/
  si128 = _mm_load_si128(v157); /*0x100a585c2*/
  v161[0] = (__int64)v157; /*0x100a585cc*/
  v161[1] = (__int64)v159; /*0x100a585da*/
  v161[2] = (__int64)v158; /*0x100a585e8*/
  LOWORD(v161[3]) = ~(unsigned __int16)_mm_movemask_epi8(si128); /*0x100a585ef*/
  v161[4] = v154; /*0x100a585fd*/
  a3 = v165; /*0x100a58612*/
  codexmate_lib::core::account_coordination::acquire_snapshot_locks::h26cefb270ec26f6e((__int64)__src, v161); /*0x100a58616*/
  v20 = *(_QWORD *)__src; /*0x100a58625*/
  v153[0] = *(_QWORD *)&__src[8]; /*0x100a58633*/
  v153[1] = *(_QWORD *)&__src[16]; /*0x100a58641*/
  v153[2] = *(_QWORD *)&__src[24]; /*0x100a5864f*/
  if ( *(_QWORD *)__src != 11 ) /*0x100a5865a*/
  {
    v37 = (char *)v167; /*0x100a589fc*/
    *((_QWORD *)v167 + 12) = *(_QWORD *)&__src[88]; /*0x100a58a00*/
    *((_QWORD *)v37 + 11) = *(_QWORD *)&__src[80]; /*0x100a58a0b*/
    *((_QWORD *)v37 + 10) = *(_QWORD *)&__src[72]; /*0x100a58a16*/
    *((_QWORD *)v37 + 9) = *(_QWORD *)&__src[64]; /*0x100a58a21*/
    *((_QWORD *)v37 + 8) = *(_QWORD *)&__src[56]; /*0x100a58a2c*/
    *((_QWORD *)v37 + 7) = *(_QWORD *)&__src[48]; /*0x100a58a37*/
    *(_OWORD *)(v37 + 40) = *(_OWORD *)&__src[32]; /*0x100a58a4d*/
    *((_QWORD *)v37 + 4) = v153[2]; /*0x100a58a58*/
    v38 = v153[0]; /*0x100a58a5c*/
    *((_QWORD *)v37 + 3) = v153[1]; /*0x100a58a6a*/
    *((_QWORD *)v37 + 2) = v38; /*0x100a58a6e*/
    *((_QWORD *)v37 + 1) = v20; /*0x100a58a72*/
    *(_QWORD *)v37 = 0x8000000000000000LL; /*0x100a58a76*/
    goto LABEL_91; /*0x100a58a79*/
  }
  v147 = v153[0]; /*0x100a5866e*/
  v148 = v153[1]; /*0x100a58675*/
  v149 = v153[2]; /*0x100a58683*/
  std::path::Path::_join::hb1a495d4f06b13b8(v153, v163[25], v163[26], &anon_4fd0d0f33f5bcd90fdaba20400e954f2_51, 20); /*0x100a586b0*/
  v21 = v153[1]; /*0x100a586b5*/
  codexmate_lib::core::account_coordination::FileLock::acquire::h4a806b6d0fd74673( /*0x100a586da*/
    (__int64)__src,
    v153[1],
    v153[2],
    (__int64)"account state.oauth-refresh.lock",
    13);
  v22 = *(_QWORD *)__src; /*0x100a586df*/
  v23 = *(_DWORD *)&__src[8]; /*0x100a586e6*/
  if ( *(_QWORD *)__src != 11 ) /*0x100a586f1*/
  {
    v24 = &__src[12]; /*0x100a586f3*/
    v25 = v161; /*0x100a586fa*/
    for ( i = 21; i; --i ) /*0x100a58701*/
    {
      *(_DWORD *)v25 = *v24++; /*0x100a58706*/
      v25 = (__int64 *)((char *)v25 + 4); /*0x100a58706*/
    }
  }
  if ( v153[0] ) /*0x100a58712*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v153[0], 1); /*0x100a5871c*/
  if ( (_DWORD)v22 != 11 ) /*0x100a58725*/
  {
    v39 = v167; /*0x100a58a7e*/
    v40 = (char *)v167 + 20; /*0x100a58a82*/
    v41 = v161; /*0x100a58a86*/
    for ( j = 21; j; --j ) /*0x100a58a8d*/
    {
      *v40 = *(_DWORD *)v41; /*0x100a58a92*/
      v41 = (__int64 *)((char *)v41 + 4); /*0x100a58a92*/
      ++v40; /*0x100a58a92*/
    }
    v39[1] = v22; /*0x100a58a94*/
    *((_DWORD *)v39 + 4) = v23; /*0x100a58a98*/
    *v39 = 0x8000000000000000LL; /*0x100a58aa6*/
    v43 = (unsigned int *)v148; /*0x100a58aa9*/
    v44 = v149; /*0x100a58ab0*/
    if ( !v149 ) /*0x100a58aba*/
    {
LABEL_89:
      if ( v147 ) /*0x100a596ec*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43, 4 * v147, 4); /*0x100a596fa*/
      goto LABEL_91; /*0x100a596fa*/
    }
LABEL_87:
    v88 = v43; /*0x100a596ba*/
    do /*0x100a596d6*/
    {
      _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(v88); /*0x100a596c3*/
      close_NOCANCEL(*v88++); /*0x100a596ca*/
      --v44; /*0x100a596d3*/
    }
    while ( v44 ); /*0x100a596d6*/
    goto LABEL_89; /*0x100a596d6*/
  }
  v164 = v23; /*0x100a5872b*/
  *(double *)v27.i64 = codexmate_lib::core::repository::Repository::load_registry::h67f16c6afc4d64cc(__src, v162, v156); /*0x100a58741*/
  v28 = *(_QWORD *)__src; /*0x100a58746*/
  qmemcpy(v161, &__src[8], 0x58u); /*0x100a58760*/
  if ( *(_QWORD *)__src != 11 ) /*0x100a58771*/
  {
    v45 = v167; /*0x100a58ac5*/
    qmemcpy((char *)v167 + 16, v161, 0x58u); /*0x100a58ad9*/
    v45[1] = v28; /*0x100a58adc*/
    *v45 = 0x8000000000000000LL; /*0x100a58ae0*/
    goto LABEL_86; /*0x100a58ae3*/
  }
  qmemcpy(v124, v161, sizeof(v124)); /*0x100a5878d*/
  codexmate_lib::core::repository::Repository::recover_account_removal_quarantine::h6d417a44c4777f97( /*0x100a587a9*/
    v146,
    v163,
    v124[1],
    v124[2],
    *(double *)v27.i64);
  _$LT$std..collections..hash..set..HashSet$LT$T$C$S$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$T$GT$$GT$::from_iter::hfa3f12f235a86084( /*0x100a587cc*/
    v113,
    v165[1],
    v165[1] + 24LL * v165[2]);
  v29 = &v138; /*0x100a587dd*/
  codexmate_lib::core::repository::Repository::live_account_identity::h503e6c01c902a0b6(&v138, v163[4], v163[5]); /*0x100a587e7*/
  v30 = v138; /*0x100a587ec*/
  if ( v138 != 0x8000000000000000LL ) /*0x100a587f6*/
    goto LABEL_23; /*0x100a587f6*/
  if ( !v140 && v124[3] != 0x8000000000000000LL ) /*0x100a5880c*/
  {
    v29 = &v124[3]; /*0x100a58812*/
LABEL_23:
    if ( (unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::contains_key::h084dd07ddc777fc3(v113, v29) ) /*0x100a58823*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v113, v29); /*0x100a58830*/
      v31 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(52, 1); /*0x100a5883f*/
      if ( !v31 ) /*0x100a58847*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 52); /*0x100a59c06*/
      qmemcpy(v31, "Cannot remove the currently active account snapshot.", 52); /*0x100a5889d*/
      v32 = v167; /*0x100a588a7*/
      *((_QWORD *)v167 + 1) = 10; /*0x100a588ab*/
      v32[2] = 52; /*0x100a588b3*/
      v32[3] = v31; /*0x100a588bb*/
      v32[4] = 52; /*0x100a588bf*/
      *v32 = 0x8000000000000000LL; /*0x100a588c7*/
      goto LABEL_83; /*0x100a588ca*/
    }
  }
  v119[0] = v124[1]; /*0x100a58afd*/
  v119[1] = v124[1] + 424LL * v124[2]; /*0x100a58b04*/
  v119[2] = v113; /*0x100a58b0b*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h8c2084030c41e18f( /*0x100a58b20*/
    v132,
    v119);
  if ( !v134 ) /*0x100a58b2f*/
  {
    alloc::str::join_generic_copy::heca7a5e86402c6b6( /*0x100a5958f*/
      __src,
      v165[1],
      v165[2],
      ", codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup.",
      2);
    v161[2] = *(_QWORD *)&__src[16]; /*0x100a5959b*/
    v161[1] = *(_QWORD *)&__src[8]; /*0x100a595b0*/
    v161[0] = *(_QWORD *)__src; /*0x100a595b7*/
    *(_QWORD *)__src = v161; /*0x100a595be*/
    *(_QWORD *)&__src[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100a595cc*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v118, &unk_1017C8D87, __src); /*0x100a595e8*/
    if ( v161[0] ) /*0x100a595f7*/
      *(double *)v27.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v161[1], v161[0], 1); /*0x100a59605*/
    v86 = v167; /*0x100a59611*/
    *((_QWORD *)v167 + 4) = v118[2]; /*0x100a59615*/
    v87 = v118[0]; /*0x100a59619*/
    v86[3] = v118[1]; /*0x100a59627*/
    v86[2] = v87; /*0x100a5962b*/
    v86[1] = 8; /*0x100a5962f*/
    *v86 = 0x8000000000000000LL; /*0x100a59637*/
LABEL_82:
    *(double *)v27.i64 = core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..repository..RegistryItem$GT$$GT$::h6f153b5b0ef54d64( /*0x100a5963a*/
                           v132,
                           *(double *)v27.i64);
    v30 = v138; /*0x100a59646*/
LABEL_83:
    if ( 2 * v30 ) /*0x100a5964d*/
      *(double *)v27.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v139, v30, 1); /*0x100a59669*/
    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h1f9aaecb72bffb70(v113); /*0x100a59675*/
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..relay..codex_project_state..CwdBackfillCandidate$GT$$GT$::hd3a2aef879887b6b( /*0x100a59681*/
      v146,
      *(double *)v27.i64);
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::h9ddd84037bae2456(v124); /*0x100a5968d*/
    a3 = v165; /*0x100a59692*/
LABEL_86:
    _$LT$codexmate_lib..core..account_coordination..FileLock$u20$as$u20$core..ops..drop..Drop$GT$::drop::h825967ecebdeceed(&v164); /*0x100a59696*/
    close_NOCANCEL(v164); /*0x100a596a2*/
    v43 = (unsigned int *)v148; /*0x100a596a7*/
    v44 = v149; /*0x100a596ae*/
    if ( !v149 ) /*0x100a596b8*/
      goto LABEL_89; /*0x100a596b8*/
    goto LABEL_87; /*0x100a596b8*/
  }
  v46 = v133; /*0x100a58b35*/
  v152 = v134; /*0x100a58b3c*/
  v159 = (const __m128i *)(v133 + 424LL * (_QWORD)v134); /*0x100a58b4d*/
  v155 = v133; /*0x100a58b5b*/
  do /*0x100a58d85*/
  {
    v47 = *(const void **)(v46 + 224); /*0x100a58b62*/
    v48 = *(const __m128i **)(v46 + 232); /*0x100a58b6a*/
    alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(__src, v48, 0, 1, 1); /*0x100a58b82*/
    v162 = *(_QWORD *)&__src[8]; /*0x100a58b8e*/
    if ( __src[0] ) /*0x100a58b99*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v162, *(_QWORD *)&__src[16]); /*0x100a59b6d*/
    v166 = *(_QWORD *)&__src[16]; /*0x100a58ba6*/
    memcpy(*(void **)&__src[16], v47, (size_t)v48); /*0x100a58bb0*/
    v49 = v46 + 192; /*0x100a58bb5*/
    if ( !v144 ) /*0x100a58bc5*/
      goto LABEL_77; /*0x100a58bc5*/
    v156 = v46 + 192; /*0x100a58bd2*/
    v50 = core::hash::BuildHasher::hash_one::ha9a0e6460af5885a(&v145, v49); /*0x100a58bde*/
    v154 = v46 + 424; /*0x100a58be9*/
    v51 = v141; /*0x100a58bf7*/
    v52 = v142; /*0x100a58bfe*/
    v53 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v50 >> 57), (__m128i)0LL); /*0x100a58c0d*/
    v54 = v141 - 3; /*0x100a58c12*/
    for ( k = 0; ; k += 16 ) /*0x100a58c16*/
    {
      v56 = v52 & v50; /*0x100a58c18*/
      v57 = _mm_loadu_si128((const __m128i *)((char *)v51 + v56)); /*0x100a58c1b*/
      v27 = _mm_cmpeq_epi8(v57, v53); /*0x100a58c25*/
      _RAX = (unsigned int)_mm_movemask_epi8(v27); /*0x100a58c29*/
      if ( (_DWORD)_RAX ) /*0x100a58c2f*/
        break; /*0x100a58c2f*/
LABEL_48:
      v27.i64[0] = -1; /*0x100a58ce9*/
      v49 = v156; /*0x100a58d01*/
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v57, (__m128i)-1LL)) ) /*0x100a58cf1*/
        goto LABEL_77; /*0x100a58d08*/
      v50 = v56 + k + 16; /*0x100a58d0e*/
    }
    v59 = *(_QWORD *)(v46 + 208); /*0x100a58c35*/
    v136 = v52; /*0x100a58c3d*/
    v114 = v53; /*0x100a58c44*/
    v157 = v48; /*0x100a58c4c*/
    v137 = k; /*0x100a58c53*/
    v115 = v57; /*0x100a58c5a*/
    v158 = v51; /*0x100a58c62*/
    while ( 1 ) /*0x100a58c69*/
    {
      v135 = _RAX; /*0x100a58c69*/
      __asm { tzcnt eax, eax } /*0x100a58c70*/
      v60 = 0xFFFFFFFFFFFFFFDLL * (v52 & (v56 + _RAX)); /*0x100a58c81*/
      if ( v59 == v54[-3 * (v52 & (v56 + _RAX)) + 1].i64[0] ) /*0x100a58c8a*/
      {
        v61 = v54; /*0x100a58c9c*/
        v62 = memcmp(*(const void **)(v46 + 200), (const void *)v54[-3 * (v52 & (v56 + _RAX))].i64[1], v59); /*0x100a58ca2*/
        v54 = v61; /*0x100a58ca7*/
        if ( !v62 ) /*0x100a58cac*/
          break; /*0x100a58cac*/
      }
      _RAX = (unsigned int)(v135 - 1); /*0x100a58cb5*/
      LOWORD(_RAX) = v135 & (v135 - 1); /*0x100a58cb8*/
      v52 = v136; /*0x100a58cbb*/
      v53 = _mm_load_si128(&v114); /*0x100a58cc2*/
      v48 = v157; /*0x100a58cca*/
      k = v137; /*0x100a58cd1*/
      v57 = _mm_load_si128(&v115); /*0x100a58cd8*/
      v51 = v158; /*0x100a58ce0*/
      if ( !(_WORD)_RAX ) /*0x100a58ce7*/
        goto LABEL_48; /*0x100a58ce7*/
    }
    v63 = v158[v60 - 1].i64[0]; /*0x100a58d23*/
    v64 = v158[v60 - 1].i64[1]; /*0x100a58d28*/
    v65 = 0x8000000000000000LL; /*0x100a58d38*/
    v66 = _$LT$std..path..PathBuf$u20$as$u20$core..cmp..PartialEq$GT$::eq::h90626381551b81ff(v63, v64, v166, v157); /*0x100a58d42*/
    v49 = v156; /*0x100a58d49*/
    if ( !v66 ) /*0x100a58d50*/
    {
LABEL_77:
      *(_QWORD *)__src = v49; /*0x100a594f0*/
      *(_QWORD *)&__src[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100a594fe*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v117, &unk_1017C8DA6, __src); /*0x100a5951a*/
      v84 = v167; /*0x100a59526*/
      *((_QWORD *)v167 + 4) = v117[2]; /*0x100a5952a*/
      v85 = v117[0]; /*0x100a5952e*/
      v84[3] = v117[1]; /*0x100a5953c*/
      v84[2] = v85; /*0x100a59540*/
      v84[1] = 10; /*0x100a59544*/
      *v84 = 0x8000000000000000LL; /*0x100a5954c*/
      if ( v162 ) /*0x100a59556*/
        *(double *)v27.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v166, v162, 1); /*0x100a59565*/
      goto LABEL_82; /*0x100a5956a*/
    }
    if ( v162 ) /*0x100a58d5d*/
      *(double *)v27.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v166, v162, 1); /*0x100a58d68*/
    v46 = v154; /*0x100a58d74*/
  }
  while ( (const __m128i *)v154 != v159 ); /*0x100a58d85*/
  _$LT$std..collections..hash..set..HashSet$LT$T$C$S$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$T$GT$$GT$::from_iter::h2cf7500eb43c22e7( /*0x100a58da0*/
    v112,
    v155,
    v159,
    *(double *)v27.i64);
  alloc::vec::Vec$LT$T$C$A$GT$::retain::h228c26e1ac5eb7a3(v124, v112); /*0x100a58db3*/
  v67 = v124[3]; /*0x100a58dbf*/
  if ( v124[3] != 0x8000000000000000LL /*0x100a58dd2*/
    && (unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::contains_key::h084dd07ddc777fc3(v113, &v124[3]) )
  {
    if ( v67 ) /*0x100a58dde*/
      *(double *)v27.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v124[4], v67, 1); /*0x100a58def*/
    v124[3] = 0x8000000000000000LL; /*0x100a58df4*/
  }
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4ccd5ea377d1fd44(v153, v163 + 51); /*0x100a58e0d*/
  v111 = v153[2]; /*0x100a58e19*/
  v110 = (__int64 (__fastcall *)(_QWORD, _QWORD))v153[1]; /*0x100a58e2e*/
  v109 = v153[0]; /*0x100a58e35*/
  codexmate_lib::core::repository::ExactFileState::capture::haab4ba4b40674644(__src, &v109); /*0x100a58e4a*/
  v68 = *(_QWORD *)__src; /*0x100a58e4f*/
  v161[0] = *(_QWORD *)&__src[8]; /*0x100a58e5d*/
  v161[1] = *(_QWORD *)&__src[16]; /*0x100a58e6b*/
  v161[2] = *(_QWORD *)&__src[24]; /*0x100a58e79*/
  *(_OWORD *)&v161[3] = *(_OWORD *)&__src[32]; /*0x100a58e87*/
  v161[5] = *(_QWORD *)&__src[48]; /*0x100a58ea3*/
  if ( *(_QWORD *)__src != 11 ) /*0x100a58eae*/
  {
    v94 = (char *)v167; /*0x100a597fd*/
    *((_QWORD *)v167 + 12) = *(_QWORD *)&__src[88]; /*0x100a59801*/
    *((_QWORD *)v94 + 11) = *(_QWORD *)&__src[80]; /*0x100a5980c*/
    *((_QWORD *)v94 + 10) = *(_QWORD *)&__src[72]; /*0x100a59817*/
    v95 = *(_QWORD *)&__src[56]; /*0x100a5981b*/
    *((_QWORD *)v94 + 9) = *(_QWORD *)&__src[64]; /*0x100a59829*/
    *((_QWORD *)v94 + 8) = v95; /*0x100a5982d*/
    *((_QWORD *)v94 + 7) = v161[5]; /*0x100a59838*/
    *(_OWORD *)(v94 + 40) = *(_OWORD *)&v161[3]; /*0x100a5984e*/
    *((_QWORD *)v94 + 4) = v161[2]; /*0x100a59859*/
    v96 = v161[0]; /*0x100a5985d*/
    *((_QWORD *)v94 + 3) = v161[1]; /*0x100a5986b*/
    *((_QWORD *)v94 + 2) = v96; /*0x100a5986f*/
    *((_QWORD *)v94 + 1) = v68; /*0x100a59873*/
    *(_QWORD *)v94 = 0x8000000000000000LL; /*0x100a59877*/
    goto LABEL_125; /*0x100a5987a*/
  }
  v121[0] = v161[0]; /*0x100a58ec2*/
  v121[1] = v161[1]; /*0x100a58ec9*/
  v121[2] = v161[2]; /*0x100a58ed7*/
  v122 = *(_OWORD *)&v161[3]; /*0x100a58ee5*/
  v123 = v161[5]; /*0x100a58f01*/
  v69 = v163[52]; /*0x100a58f0c*/
  v70 = v163[53]; /*0x100a58f13*/
  codexmate_lib::core::quota_store::load_or_default::h211ac6fdb1941574(v129); /*0x100a58f27*/
  v71 = v130; /*0x100a58f2f*/
  alloc::vec::Vec$LT$T$C$A$GT$::retain::h11f060356647ffa4(v129, v112); /*0x100a58f44*/
  v124[9] = codexmate_lib::core::auth::current_timestamp::h91b9a68b914d25d6((__int64)v129, (__int64)v112); /*0x100a58f4e*/
  v72 = v163; /*0x100a58f5c*/
  codexmate_lib::core::repository::SnapshotQuarantine::stage::h35254a4b3594504b( /*0x100a58f6e*/
    (__int64 *)__src,
    (__int64)v163,
    v155,
    v152);
  v73 = *(_QWORD *)__src; /*0x100a58f73*/
  v161[0] = *(_QWORD *)&__src[8]; /*0x100a58f81*/
  v161[1] = *(_QWORD *)&__src[16]; /*0x100a58f8f*/
  v161[2] = *(_QWORD *)&__src[24]; /*0x100a58f9d*/
  *(_OWORD *)&v161[3] = *(_OWORD *)&__src[32]; /*0x100a58fab*/
  v161[5] = *(_QWORD *)&__src[48]; /*0x100a58fc7*/
  v161[6] = *(_QWORD *)&__src[56]; /*0x100a58fd5*/
  if ( *(_QWORD *)__src != 11 ) /*0x100a58fe0*/
  {
    v97 = (char *)v167; /*0x100a59886*/
    *((_QWORD *)v167 + 12) = *(_QWORD *)&__src[88]; /*0x100a5988a*/
    *((_QWORD *)v97 + 11) = *(_QWORD *)&__src[80]; /*0x100a59895*/
    v98 = *(_QWORD *)&__src[64]; /*0x100a59899*/
    *((_QWORD *)v97 + 10) = *(_QWORD *)&__src[72]; /*0x100a598a7*/
    *((_QWORD *)v97 + 9) = v98; /*0x100a598ab*/
    *((_QWORD *)v97 + 8) = v161[6]; /*0x100a598b6*/
    *((_QWORD *)v97 + 7) = v161[5]; /*0x100a598c1*/
    *(_OWORD *)(v97 + 40) = *(_OWORD *)&v161[3]; /*0x100a598d7*/
    *((_QWORD *)v97 + 4) = v161[2]; /*0x100a598e2*/
    v99 = v161[0]; /*0x100a598e6*/
    *((_QWORD *)v97 + 3) = v161[1]; /*0x100a598f4*/
    *((_QWORD *)v97 + 2) = v99; /*0x100a598f8*/
    *((_QWORD *)v97 + 1) = v73; /*0x100a598fc*/
    *(_QWORD *)v97 = 0x8000000000000000LL; /*0x100a59900*/
    goto LABEL_124; /*0x100a59903*/
  }
  v125[0] = v161[0]; /*0x100a58ff4*/
  v125[1] = v161[1]; /*0x100a58ffb*/
  v125[2] = v161[2]; /*0x100a59009*/
  v126 = *(_OWORD *)&v161[3]; /*0x100a59017*/
  v127 = v161[5]; /*0x100a59033*/
  v128 = v161[6]; /*0x100a59041*/
  if ( v130 == v71 ) /*0x100a5904f*/
    goto LABEL_62; /*0x100a5904f*/
  v131 = codexmate_lib::core::auth::current_timestamp::h91b9a68b914d25d6((__int64)__src, (__int64)v72); /*0x100a5990d*/
  codexmate_lib::core::quota_store::encode_for_save::h1b527b913713be61(__src, (__int64)v129); /*0x100a59922*/
  v100 = *(_QWORD *)__src; /*0x100a59927*/
  v65 = *(_QWORD *)&__src[8]; /*0x100a5992e*/
  v166 = *(_QWORD *)&__src[16]; /*0x100a5993c*/
  v71 = *(_QWORD *)&__src[24]; /*0x100a59940*/
  if ( *(_QWORD *)__src != 11 ) /*0x100a5994b*/
  {
    v101 = (char *)v167; /*0x100a599cd*/
    *((_QWORD *)v167 + 12) = *(_QWORD *)&__src[88]; /*0x100a599d1*/
    *((_QWORD *)v101 + 11) = *(_QWORD *)&__src[80]; /*0x100a599dc*/
    *((_QWORD *)v101 + 10) = *(_QWORD *)&__src[72]; /*0x100a599e7*/
    *((_QWORD *)v101 + 9) = *(_QWORD *)&__src[64]; /*0x100a599f2*/
    *((_QWORD *)v101 + 8) = *(_QWORD *)&__src[56]; /*0x100a599fd*/
    *((_QWORD *)v101 + 7) = *(_QWORD *)&__src[48]; /*0x100a59a08*/
    *(_OWORD *)(v101 + 40) = *(_OWORD *)&__src[32]; /*0x100a59a1e*/
    *((_QWORD *)v101 + 2) = v65; /*0x100a59a22*/
    *((_QWORD *)v101 + 3) = v166; /*0x100a59a2a*/
    *((_QWORD *)v101 + 4) = v71; /*0x100a59a2e*/
    *((_QWORD *)v101 + 1) = v100; /*0x100a59a32*/
    *(_QWORD *)v101 = 0x8000000000000000LL; /*0x100a59a40*/
    goto LABEL_123; /*0x100a59a43*/
  }
  codexmate_lib::core::repository::Repository::save_quota_store::hd848fe86f04414c9(v106, v69, v70, v129); /*0x100a59961*/
  if ( v106[0] != 11 ) /*0x100a5996d*/
  {
    codexmate_lib::core::repository::SnapshotQuarantine::rollback::hdc6c3f38e5ff4899(__src, v125); /*0x100a59981*/
    if ( *(_DWORD *)__src == 11 ) /*0x100a5998d*/
      v105[0] = 11; /*0x100a59993*/
    else
      qmemcpy(v105, __src, sizeof(v105)); /*0x100a59b8a*/
    qmemcpy(__src, v106, 0x60u); /*0x100a59ba3*/
    codexmate_lib::core::repository::combine_account_removal_errors::hb1d7607c64617798(v161, __src, v105); /*0x100a59bb7*/
    v103 = v167; /*0x100a59bbc*/
    qmemcpy((char *)v167 + 8, v161, 0x60u); /*0x100a59bd0*/
    *v103 = 0x8000000000000000LL; /*0x100a59bdd*/
    if ( !v65 ) /*0x100a59be3*/
    {
LABEL_123:
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..SnapshotQuarantine$GT$::h6e1d7d92363b2a89(v125); /*0x100a59b2d*/
LABEL_124:
      core::ptr::drop_in_place$LT$codexmate_lib..core..quota_store..QuotaStoreFile$GT$::h104b0de372c409ca(v129); /*0x100a59b39*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..ExactFileState$GT$::h739e9242b33bba52(v121); /*0x100a59b4c*/
LABEL_125:
      _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h72819ce2767b2ff4(v112); /*0x100a59b51*/
      goto LABEL_82; /*0x100a59b5d*/
    }
LABEL_122:
    *(double *)v27.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v166, v65, 1); /*0x100a59b1c*/
    goto LABEL_123; /*0x100a59b28*/
  }
LABEL_62:
  codexmate_lib::core::repository::Repository::persist_registry::he46753ae51d51c8f(v107, v163, v124, 1); /*0x100a59055*/
  if ( v107[0] != 11 ) /*0x100a5907b*/
  {
    if ( v65 == 0x8000000000000000LL ) /*0x100a599b0*/
      v109 = 11; /*0x100a599b6*/
    else
      codexmate_lib::core::repository::Repository::remove_accounts::_$u7b$$u7b$closure$u7d$$u7d$::h20e3a568bcdc413a( /*0x100a59a5d*/
        &v109,
        v121,
        v166,
        v71);
    codexmate_lib::core::repository::SnapshotQuarantine::rollback::hdc6c3f38e5ff4899(__src, v125); /*0x100a59a70*/
    if ( *(_DWORD *)__src == 11 ) /*0x100a59a7c*/
      v104[0] = 11; /*0x100a59a7e*/
    else
      qmemcpy(v104, __src, sizeof(v104)); /*0x100a59a9e*/
    qmemcpy(v161, v107, sizeof(v161)); /*0x100a59ab4*/
    codexmate_lib::core::repository::combine_optional_errors::h9623860b99f85dca(__src, &v109, v104); /*0x100a59acc*/
    codexmate_lib::core::repository::combine_account_removal_errors::hb1d7607c64617798(v153, v161, __src); /*0x100a59ae6*/
    v102 = v167; /*0x100a59aeb*/
    qmemcpy((char *)v167 + 8, v153, 0x60u); /*0x100a59aff*/
    *v102 = 0x8000000000000000LL; /*0x100a59b0c*/
    if ( !(2 * v65) ) /*0x100a59b1a*/
      goto LABEL_123; /*0x100a59b1a*/
    goto LABEL_122; /*0x100a59b1a*/
  }
  codexmate_lib::core::repository::Repository::clear_auto_switch_transient_state::h6b182342bc1d4f08(v161, v163); /*0x100a5908c*/
  if ( LODWORD(v161[0]) != 11 ) /*0x100a59098*/
  {
    qmemcpy(__src, v161, 0x60u); /*0x100a590b4*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&__src[96], &v162); /*0x100a590b7*/
    v74 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(36, 1); /*0x100a590c6*/
    if ( !v74 ) /*0x100a590ce*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 36); /*0x100a59c17*/
    v75 = (__int64)v74; /*0x100a590d4*/
    qmemcpy(v74, "AUTO_SWITCH_TRANSIENT_CLEANUP_FAILED", 36); /*0x100a5910b*/
    v153[0] = (__int64)__src; /*0x100a59115*/
    v153[1] = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100a59123*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v116, &unk_1017C8DDA, v153); /*0x100a5913f*/
    v153[0] = 36; /*0x100a59144*/
    v153[1] = v75; /*0x100a5914f*/
    v153[2] = 36; /*0x100a59156*/
    v153[3] = v116[0]; /*0x100a5916f*/
    v153[4] = v116[1]; /*0x100a59176*/
    v153[5] = v116[2]; /*0x100a59184*/
    alloc::vec::Vec$LT$T$C$A$GT$::push_mut::hbc0858bc68482e3a(v146, v153); /*0x100a59199*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__src); /*0x100a591a5*/
  }
  codexmate_lib::core::repository::SnapshotQuarantine::commit_and_purge::ha0cb44d66bed4665(v161, v125); /*0x100a591b8*/
  if ( LODWORD(v161[0]) != 11 ) /*0x100a591c4*/
  {
    qmemcpy(__src, v161, 0x60u); /*0x100a591e0*/
    v77 = &v162; /*0x100a591e0*/
    v76 = &__src[96]; /*0x100a591e0*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x100a591f1*/
    {
      v109 = (__int64)__src; /*0x100a591f3*/
      v110 = _$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100a59201*/
      v153[0] = (__int64)"codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup."; /*0x100a5920f*/
      v153[1] = 31; /*0x100a59216*/
      v153[2] = (__int64)"codexmate_lib::core::repositoryAccount removal completed; private cleanup will retry on next startup."; /*0x100a59221*/
      v153[3] = 31; /*0x100a59228*/
      v153[4] = (__int64)&off_101973DB8; /*0x100a5923a*/
      v76 = &unk_1017C8E26; /*0x100a59241*/
      v77 = &v109; /*0x100a59248*/
      log::__private_api::log::h719f4907c7336ae9(&unk_1017C8E26, &v109, 2, v153); /*0x100a5925b*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v76, v77); /*0x100a59260*/
    v78 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 1); /*0x100a5926f*/
    if ( !v78 ) /*0x100a59277*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 32); /*0x100a59c28*/
    v79 = (__int64)v78; /*0x100a5927d*/
    qmemcpy(v78, "ACCOUNT_REMOVAL_CLEANUP_DEFERRED", 32); /*0x100a592b4*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 1); /*0x100a592b7*/
    v80 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(70, 1); /*0x100a592c6*/
    if ( !v80 ) /*0x100a592ce*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 70); /*0x100a59c39*/
    v81 = (__int64)v80; /*0x100a592d4*/
    memcpy(v80, "Account removal completed; private cleanup will retry on next startup.", 0x46u); /*0x100a592e6*/
    v153[0] = 32; /*0x100a592eb*/
    v153[1] = v79; /*0x100a592f6*/
    v153[2] = 32; /*0x100a592fd*/
    v153[3] = 70; /*0x100a59308*/
    v153[4] = v81; /*0x100a59313*/
    v153[5] = 70; /*0x100a5931a*/
    alloc::vec::Vec$LT$T$C$A$GT$::push_mut::hbc0858bc68482e3a(v146, v153); /*0x100a59333*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__src); /*0x100a5933f*/
  }
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h0063837aba7cfb6e( /*0x100a59359*/
    __src,
    v155,
    v159);
  v161[5] = v124[5]; /*0x100a59369*/
  *(_OWORD *)&v161[3] = *(_OWORD *)&v124[3]; /*0x100a5937e*/
  v161[0] = *(_QWORD *)__src; /*0x100a59393*/
  v161[1] = *(_QWORD *)&__src[8]; /*0x100a5939a*/
  v161[2] = *(_QWORD *)&__src[16]; /*0x100a593a8*/
  LODWORD(v161[6]) = (_DWORD)v152; /*0x100a593b6*/
  v153[2] = v146[2]; /*0x100a593c3*/
  v153[1] = v146[1]; /*0x100a593d8*/
  v153[0] = v146[0]; /*0x100a593df*/
  codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok_with_warnings::h5aea1e1a5899531c((__int64)__src, v161, v153); /*0x100a593fe*/
  memcpy(v167, __src, 0x88u); /*0x100a59413*/
  if ( 2 * v65 ) /*0x100a59418*/
    *(double *)v27.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v166, v65, 1); /*0x100a59431*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..SnapshotQuarantine$GT$::h6e1d7d92363b2a89(v125); /*0x100a59440*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..quota_store..QuotaStoreFile$GT$::h104b0de372c409ca(v129); /*0x100a5944c*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..ExactFileState$GT$::h739e9242b33bba52(v121); /*0x100a59458*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h72819ce2767b2ff4(v112); /*0x100a59464*/
  core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..repository..RegistryItem$GT$$GT$::h6f153b5b0ef54d64( /*0x100a59470*/
    v132,
    *(double *)v27.i64);
  if ( 2 * v138 ) /*0x100a5947c*/
    *(double *)v27.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v139, v138, 1); /*0x100a59495*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h1f9aaecb72bffb70(v113); /*0x100a594a1*/
  v82 = core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..repository..RegistryItem$GT$$GT$::h6f153b5b0ef54d64( /*0x100a594ad*/
          v124,
          *(double *)v27.i64);
  v83 = v165; /*0x100a594b6*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..account_coordination..LiveAuthLock$GT$::h31c48f7e6d5138e7(&v164, v82); /*0x100a594ba*/
  core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..account_coordination..AccountSnapshotLock$GT$$GT$::hf56a78b2c10ddc81(&v147); /*0x100a594c6*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h08711f87a316c141(&v141); /*0x100a594d2*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::h9ddd84037bae2456(v108); /*0x100a594de*/
  core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h4f9ccf4de3b51eef(v83); /*0x100a594e6*/
  return v167; /*0x100a597e4*/
}