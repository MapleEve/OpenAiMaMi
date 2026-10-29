// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::sessions::health::clean_missing_rollout_rows::hda48e6110925a338; addr: 0x100b1aa50; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:20:51Z
const __m128i **__fastcall codexmate_lib::core::sessions::health::clean_missing_rollout_rows::hda48e6110925a338(
        const __m128i **a1,
        _QWORD *a2,
        __m128i a3)
{
  const __m128i **v3; // r13
  const __m128i *v4; // rax
  const __m128i *v5; // r15
  __int64 v6; // r12
  __m128i si128; // xmm0
  size_t v8; // rax
  size_t v9; // rbx
  __int64 v11; // rdx
  __m128i v12; // xmm0
  const __m128i *v14; // rbx
  int v15; // r14d
  const __m128i *v16; // rcx
  const __m128i *v17; // rcx
  _QWORD *v18; // rbx
  _QWORD *v20; // rsi
  const __m128i *v21; // rax
  __int64 v22; // r14
  __int64 v23; // r12
  _QWORD *v24; // rbx
  __int64 v25; // r15
  __int64 v26; // rsi
  const __m128i *v27; // rcx
  const __m128i *v28; // rcx
  const __m128i *v29; // rcx
  const __m128i *v30; // rcx
  const __m128i **v31; // rsi
  const __m128i *v32; // rax
  __int64 v33; // r14
  __int64 v34; // r15
  const __m128i *v35; // r12
  const __m128i *v37; // rbx
  int v38; // r13d
  __int64 v39; // rax
  __int64 v40; // rsi
  unsigned __int64 v41; // rax
  __int64 v42; // r14
  bool v43; // zf
  __int64 v44; // r14
  __int8 *v46; // rsi
  const __m128i *v47; // rax
  const __m128i *v48; // rdx
  const __m128i **v49; // rcx
  const __m128i *v50; // r15
  __int64 v51; // rax
  __int64 v52; // r14
  unsigned __int64 v53; // rax
  __int64 v54; // rdx
  const __m128i *v55; // r12
  int v59; // r13d
  __int64 v60; // rcx
  __int64 v61; // rsi
  __int8 *v62; // rax
  unsigned __int64 v63; // rax
  const __m128i *v64; // rdx
  __m128i v65; // xmm1
  unsigned __int64 i; // rsi
  __m128i v67; // xmm2
  const __m128i *v69; // r14
  int v70; // eax
  unsigned __int64 v71; // rax
  __int64 v72; // rdx
  __int64 v73; // rsi
  __m128i v74; // xmm1
  __int64 v75; // rbx
  __int64 j; // r8
  unsigned __int64 v77; // rax
  __m128i v78; // xmm2
  __int64 v80; // rcx
  unsigned __int32 v81; // eax
  size_t v82; // rdx
  __int64 v83; // rcx
  unsigned __int64 v84; // rax
  __int64 v85; // rsi
  __int64 v86; // rdi
  __m128i v87; // xmm1
  __int64 v88; // rbx
  __int64 k; // r9
  unsigned __int64 v90; // rax
  __m128i v91; // xmm2
  __int64 v93; // rcx
  unsigned __int32 v94; // eax
  const __m128i *v95; // rbx
  int v96; // r13d
  __int64 v97; // rax
  __int64 v98; // rsi
  _QWORD *v99; // rbx
  __int64 v100; // r14
  const __m128i *v101; // rax
  double v102; // xmm0_8
  const __m128i *v103; // rax
  const __m128i *v104; // r14
  const __m128i *v105; // rcx
  const __m128i *v106; // r15
  const __m128i *v107; // r12
  const __m128i *v109; // rbx
  int v110; // r13d
  __int64 v111; // rax
  unsigned __int64 v112; // rax
  __int8 *v113; // r14
  const __m128i **v114; // r14
  char v115; // r14
  _QWORD v116[9]; // [rsp+8h] [rbp-458h] BYREF
  _QWORD v117[3]; // [rsp+50h] [rbp-410h] BYREF
  const __m128i *v118[6]; // [rsp+68h] [rbp-3F8h] BYREF
  const __m128i *v119[12]; // [rsp+98h] [rbp-3C8h] BYREF
  _QWORD v120[6]; // [rsp+F8h] [rbp-368h] BYREF
  const __m128i *v121; // [rsp+128h] [rbp-338h] BYREF
  __int64 v122; // [rsp+130h] [rbp-330h] BYREF
  unsigned __int64 v123; // [rsp+138h] [rbp-328h]
  __int64 v124; // [rsp+140h] [rbp-320h]
  const __m128i **v125; // [rsp+148h] [rbp-318h]
  __int64 v126; // [rsp+150h] [rbp-310h]
  __int8 *v127; // [rsp+158h] [rbp-308h]
  __m128i v128; // [rsp+160h] [rbp-300h] BYREF
  __m128i v129; // [rsp+170h] [rbp-2F0h] BYREF
  const __m128i *v130; // [rsp+188h] [rbp-2D8h]
  __int64 v131; // [rsp+190h] [rbp-2D0h]
  __int64 v132; // [rsp+198h] [rbp-2C8h]
  __int64 v133; // [rsp+1A0h] [rbp-2C0h]
  __int64 v134; // [rsp+1A8h] [rbp-2B8h]
  __int64 v135; // [rsp+1B0h] [rbp-2B0h]
  const __m128i *v136; // [rsp+1B8h] [rbp-2A8h] BYREF
  __int64 v137; // [rsp+1C0h] [rbp-2A0h]
  __int64 v138; // [rsp+1C8h] [rbp-298h]
  __int64 v139; // [rsp+1D0h] [rbp-290h]
  _QWORD v140[2]; // [rsp+1D8h] [rbp-288h] BYREF
  _QWORD *v141; // [rsp+1E8h] [rbp-278h]
  __int64 v142; // [rsp+1F0h] [rbp-270h]
  __int64 v143; // [rsp+1F8h] [rbp-268h]
  __m128i v144; // [rsp+200h] [rbp-260h] BYREF
  __m128i v145; // [rsp+210h] [rbp-250h] BYREF
  const __m128i *v146; // [rsp+220h] [rbp-240h] BYREF
  _QWORD v147[12]; // [rsp+228h] [rbp-238h] BYREF
  __int64 v148; // [rsp+288h] [rbp-1D8h]
  __int64 v149; // [rsp+290h] [rbp-1D0h]
  __int64 v150; // [rsp+298h] [rbp-1C8h]
  _QWORD v151[2]; // [rsp+2A0h] [rbp-1C0h] BYREF
  __m128i v152; // [rsp+2B0h] [rbp-1B0h] BYREF
  const __m128i *v153; // [rsp+2C8h] [rbp-198h]
  __int64 v154; // [rsp+2D0h] [rbp-190h]
  __int64 v155; // [rsp+2D8h] [rbp-188h]
  __int64 v156; // [rsp+2E0h] [rbp-180h]
  _QWORD v157[9]; // [rsp+2E8h] [rbp-178h] BYREF
  _QWORD v158[3]; // [rsp+330h] [rbp-130h] BYREF
  __int64 v159; // [rsp+348h] [rbp-118h]
  __int64 v160; // [rsp+350h] [rbp-110h]
  unsigned __int64 v161; // [rsp+358h] [rbp-108h] BYREF
  _QWORD __src[17]; // [rsp+360h] [rbp-100h] BYREF
  const __m128i **v163; // [rsp+3E8h] [rbp-78h]
  void *__s1; // [rsp+3F0h] [rbp-70h]
  unsigned __int64 v165; // [rsp+3F8h] [rbp-68h]
  const __m128i *v166; // [rsp+400h] [rbp-60h] BYREF
  __m128i *v167; // [rsp+408h] [rbp-58h]
  const __m128i *v168; // [rsp+410h] [rbp-50h]
  const __m128i *v169; // [rsp+418h] [rbp-48h]
  const __m128i *v170; // [rsp+420h] [rbp-40h]
  const __m128i *v171; // [rsp+428h] [rbp-38h]
  size_t __n; // [rsp+430h] [rbp-30h]

  v3 = a1; /*0x100b1aa67*/
  codexmate_lib::core::sessions::reconcile_official_thread_rows::ha8b5f08e4b547d3b(&v161, (size_t)a2, a3); /*0x100b1aa71*/
  v4 = (const __m128i *)v161; /*0x100b1aa76*/
  v146 = (const __m128i *)__src[0]; /*0x100b1aa84*/
  v147[0] = __src[1]; /*0x100b1aa92*/
  v147[1] = __src[2]; /*0x100b1aaa0*/
  v147[2] = __src[3]; /*0x100b1aaae*/
  v147[3] = __src[4]; /*0x100b1aabc*/
  v147[4] = __src[5]; /*0x100b1aaca*/
  if ( v161 != 11 ) /*0x100b1aad5*/
  {
    a1[11] = (const __m128i *)__src[10]; /*0x100b1ac5a*/
    a1[10] = (const __m128i *)__src[9]; /*0x100b1ac65*/
    a1[9] = (const __m128i *)__src[8]; /*0x100b1ac70*/
    v16 = (const __m128i *)__src[6]; /*0x100b1ac74*/
    a1[8] = (const __m128i *)__src[7]; /*0x100b1ac82*/
    a1[7] = v16; /*0x100b1ac86*/
    a1[6] = (const __m128i *)v147[4]; /*0x100b1ac91*/
    a1[5] = (const __m128i *)v147[3]; /*0x100b1ac9c*/
    a1[4] = (const __m128i *)v147[2]; /*0x100b1aca7*/
    a1[3] = (const __m128i *)v147[1]; /*0x100b1acb2*/
    v17 = v146; /*0x100b1acb6*/
    a1[2] = (const __m128i *)v147[0]; /*0x100b1acc4*/
    a1[1] = v17; /*0x100b1acc8*/
    *a1 = v4; /*0x100b1accc*/
    return v3; /*0x100b1acd0*/
  }
  v141 = a2; /*0x100b1aadb*/
  v5 = v146; /*0x100b1aae2*/
  v118[0] = v146; /*0x100b1aaf0*/
  v118[1] = (const __m128i *)v147[0]; /*0x100b1aaf7*/
  v118[2] = (const __m128i *)v147[1]; /*0x100b1ab05*/
  v6 = v147[2]; /*0x100b1ab0c*/
  v118[3] = (const __m128i *)v147[2]; /*0x100b1ab13*/
  v118[4] = (const __m128i *)v147[3]; /*0x100b1ab21*/
  v118[5] = (const __m128i *)v147[4]; /*0x100b1ab2f*/
  si128 = _mm_load_si128(v146); /*0x100b1ab36*/
  v152 = si128; /*0x100b1ab3b*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100b1ab4a*/
  v9 = v8; /*0x100b1ab4c*/
  if ( *(_BYTE *)(v8 + 16) == 1 ) /*0x100b1ab53*/
  {
    _RAX = *(_QWORD *)v8; /*0x100b1ab59*/
    v11 = *(_QWORD *)(v9 + 8); /*0x100b1ab5c*/
  }
  else
  {
    _RAX = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(*(double *)si128.i64); /*0x100b1be06*/
    *(_QWORD *)v9 = _RAX; /*0x100b1be0b*/
    *(_QWORD *)(v9 + 8) = v11; /*0x100b1be0e*/
    *(_BYTE *)(v9 + 16) = 1; /*0x100b1be12*/
  }
  v163 = a1; /*0x100b1ab60*/
  __n = v9; /*0x100b1ab68*/
  *(_QWORD *)v9 = _RAX + 1; /*0x100b1ab6c*/
  memset(__src, 0, 24); /*0x100b1ab92*/
  v161 = (unsigned __int64)anon_0f4958e580c48b75b8f6e2e6da3e4224_10; /*0x100b1aba0*/
  __src[3] = _RAX; /*0x100b1aba7*/
  __src[4] = v11; /*0x100b1abae*/
  if ( v6 ) /*0x100b1abb8*/
    HIDWORD(_RAX) = (unsigned __int64)hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h23730d0495255e0a( /*0x100b1be31*/
                                        &v161,
                                        v6,
                                        &__src[3],
                                        1) >> 32;
  v12 = _mm_load_si128(&v152); /*0x100b1abbe*/
  _R14D = ~_mm_movemask_epi8(v12); /*0x100b1abcb*/
  v14 = v5 + 1; /*0x100b1abce*/
  if ( (_WORD)_R14D ) /*0x100b1abdd*/
    goto LABEL_10; /*0x100b1abdd*/
  while ( v6 ) /*0x100b1abe3*/
  {
    do /*0x100b1ac0b*/
    {
      v12 = _mm_load_si128(v14); /*0x100b1abf0*/
      v15 = _mm_movemask_epi8(v12); /*0x100b1abf4*/
      v5 -= 416; /*0x100b1abf9*/
      ++v14; /*0x100b1ac00*/
    }
    while ( v15 == 0xFFFF ); /*0x100b1ac0b*/
    _R14D = ~v15; /*0x100b1ac0d*/
    do /*0x100b1ac4f*/
    {
LABEL_10:
      __asm { tzcnt eax, r14d } /*0x100b1ac10*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x100b1ac2a*/
        &v146,
        &v5[-26 * _RAX - 26]);
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::he08410f8bb39a3b4(&v161, &v146); /*0x100b1ac39*/
      _RAX = _R14D & (unsigned int)(_R14D - 1); /*0x100b1ac42*/
      --v6; /*0x100b1ac45*/
      _R14D &= _R14D - 1; /*0x100b1ac48*/
    }
    while ( (_WORD)_R14D ); /*0x100b1ac4f*/
  }
  v135 = __src[4]; /*0x100b1acdc*/
  v134 = __src[3]; /*0x100b1acea*/
  v133 = __src[2]; /*0x100b1acf8*/
  v132 = __src[1]; /*0x100b1ad06*/
  v131 = __src[0]; /*0x100b1ad1b*/
  v130 = (const __m128i *)v161; /*0x100b1ad22*/
  v18 = v141; /*0x100b1ad37*/
  *(double *)v12.i64 = codexmate_lib::core::sessions::health::load_complete_health_thread_rows::h96c8f87d8aecdda3( /*0x100b1ad41*/
                         &v161,
                         v141,
                         v118,
                         v12);
  _RAX = v161; /*0x100b1ad46*/
  v146 = (const __m128i *)__src[0]; /*0x100b1ad54*/
  v147[0] = __src[1]; /*0x100b1ad62*/
  v147[1] = __src[2]; /*0x100b1ad70*/
  v147[2] = __src[3]; /*0x100b1ad7e*/
  v147[3] = __src[4]; /*0x100b1ad8c*/
  v147[4] = __src[5]; /*0x100b1ad9a*/
  v3 = v163; /*0x100b1ada5*/
  if ( v161 != 11 ) /*0x100b1ada9*/
  {
    v163[11] = (const __m128i *)__src[10]; /*0x100b1afcc*/
    v3[10] = (const __m128i *)__src[9]; /*0x100b1afd7*/
    v3[9] = (const __m128i *)__src[8]; /*0x100b1afe2*/
    v27 = (const __m128i *)__src[6]; /*0x100b1afe6*/
    v3[8] = (const __m128i *)__src[7]; /*0x100b1aff4*/
    v3[7] = v27; /*0x100b1aff8*/
    v3[6] = (const __m128i *)v147[4]; /*0x100b1b003*/
    v3[5] = (const __m128i *)v147[3]; /*0x100b1b00e*/
    v3[4] = (const __m128i *)v147[2]; /*0x100b1b019*/
    v3[3] = (const __m128i *)v147[1]; /*0x100b1b024*/
    v28 = v146; /*0x100b1b028*/
    v3[2] = (const __m128i *)v147[0]; /*0x100b1b036*/
    v3[1] = v28; /*0x100b1b03a*/
    *v3 = (const __m128i *)_RAX; /*0x100b1b03e*/
    goto LABEL_31; /*0x100b1b042*/
  }
  v136 = v146; /*0x100b1adbd*/
  v137 = v147[0]; /*0x100b1adc4*/
  v138 = v147[1]; /*0x100b1add2*/
  v139 = v147[2]; /*0x100b1ade0*/
  v140[0] = v147[3]; /*0x100b1adee*/
  v140[1] = v147[4]; /*0x100b1adfc*/
  v20 = v18; /*0x100b1ae0a*/
  codexmate_lib::core::sessions::history::HistoryInventory::load::h6e6b5da7cbfd2061(v157, v18); /*0x100b1ae0d*/
  v21 = (const __m128i *)v157[0]; /*0x100b1ae12*/
  v166 = (const __m128i *)v157[1]; /*0x100b1ae20*/
  v167 = (__m128i *)v157[2]; /*0x100b1ae2b*/
  v168 = (const __m128i *)v157[3]; /*0x100b1ae36*/
  v169 = (const __m128i *)v157[4]; /*0x100b1ae41*/
  v170 = (const __m128i *)v157[5]; /*0x100b1ae4c*/
  v171 = (const __m128i *)v157[6]; /*0x100b1ae57*/
  if ( v157[0] != 11 ) /*0x100b1ae5f*/
  {
    v3[11] = (const __m128i *)v158[2]; /*0x100b1b04e*/
    v3[10] = (const __m128i *)v158[1]; /*0x100b1b059*/
    v3[9] = (const __m128i *)v158[0]; /*0x100b1b064*/
    v29 = (const __m128i *)v157[7]; /*0x100b1b068*/
    v3[8] = (const __m128i *)v157[8]; /*0x100b1b076*/
    v3[7] = v29; /*0x100b1b07a*/
    v3[6] = v171; /*0x100b1b082*/
    v3[5] = v170; /*0x100b1b08a*/
    v3[4] = v169; /*0x100b1b092*/
    v3[3] = v168; /*0x100b1b09a*/
    v30 = v166; /*0x100b1b09e*/
    v3[2] = v167; /*0x100b1b0a6*/
    v3[1] = v30; /*0x100b1b0aa*/
    *v3 = v21; /*0x100b1b0ae*/
LABEL_30:
    HIDWORD(_RAX) = (unsigned __int64)core::ptr::drop_in_place$LT$hashbrown..raw..RawTable$LT$$LP$alloc..string..String$C$codexmate_lib..core..sessions..CodexThreadRow$RP$$GT$$GT$::h8dfa37bcfe2b7af5( /*0x100b1b17d*/
                                        &v136,
                                        v20) >> 32;
    goto LABEL_31; /*0x100b1b184*/
  }
  v120[0] = v166; /*0x100b1ae6d*/
  v120[1] = v167; /*0x100b1ae74*/
  v120[2] = v168; /*0x100b1ae7f*/
  v120[3] = v169; /*0x100b1ae8a*/
  v120[4] = v170; /*0x100b1ae95*/
  v120[5] = v171; /*0x100b1aea0*/
  codexmate_lib::core::sessions::history::HistoryInventory::health::h918049cd3d7086c0( /*0x100b1aeb8*/
    &v161,
    v120,
    v18,
    *(double *)v12.i64);
  qmemcpy(v119, __src, sizeof(v119)); /*0x100b1aed7*/
  if ( !v161 ) /*0x100b1aedd*/
  {
    qmemcpy(v3, v119, 0x60u); /*0x100b1b171*/
    v20 = v120; /*0x100b1b171*/
    _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf4e00578ec214d6d(&v166); /*0x100b1b178*/
    goto LABEL_30; /*0x100b1b178*/
  }
  v151[1] = __src[16]; /*0x100b1aee7*/
  v151[0] = __src[15]; /*0x100b1aef5*/
  v150 = __src[14]; /*0x100b1af03*/
  v149 = __src[13]; /*0x100b1af18*/
  v148 = __src[12]; /*0x100b1af1f*/
  qmemcpy(v147, v119, sizeof(v147)); /*0x100b1af39*/
  v146 = (const __m128i *)v161; /*0x100b1af3c*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf4e00578ec214d6d(&v166); /*0x100b1af47*/
  codexmate_lib::core::sessions::health::cleanable_orphan_rollout_ids::h6939ee55e25da247(&v161, &v136, &v146, &v147[5]); /*0x100b1af68*/
  v22 = __src[0]; /*0x100b1af6d*/
  v23 = __src[1]; /*0x100b1af74*/
  v122 = __src[1]; /*0x100b1af7b*/
  if ( __src[1] ) /*0x100b1af85*/
  {
    v24 = (_QWORD *)(__src[0] + 8LL); /*0x100b1af8b*/
    v25 = __src[1]; /*0x100b1af8f*/
    do /*0x100b1afa7*/
    {
      v26 = *(v24 - 1); /*0x100b1afad*/
      if ( v26 ) /*0x100b1afb4*/
        *(double *)v12.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v24, v26, 1); /*0x100b1afbe*/
      v24 += 3; /*0x100b1afa0*/
      --v25; /*0x100b1afa4*/
    }
    while ( v25 ); /*0x100b1afa7*/
  }
  if ( v161 ) /*0x100b1b0c1*/
    *(double *)v12.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, 24 * v161, 8); /*0x100b1b0d3*/
  if ( v23 ) /*0x100b1b0db*/
  {
    v161 = (unsigned __int64)&v122; /*0x100b1b0e8*/
    __src[0] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100b1b0f6*/
    v31 = (const __m128i **)&unk_10190814D; /*0x100b1b0fd*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v117, &unk_10190814D, &v161); /*0x100b1b112*/
    v3[3] = (const __m128i *)v117[2]; /*0x100b1b11e*/
    v32 = (const __m128i *)v117[0]; /*0x100b1b122*/
    v3[2] = (const __m128i *)v117[1]; /*0x100b1b130*/
    v3[1] = v32; /*0x100b1b134*/
    *v3 = (const __m128i *)10; /*0x100b1b138*/
    goto LABEL_27; /*0x100b1b138*/
  }
  v46 = (__int8 *)__n; /*0x100b1b283*/
  if ( *(_BYTE *)(__n + 16) == 1 ) /*0x100b1b28b*/
  {
    v47 = *(const __m128i **)__n; /*0x100b1b291*/
    v48 = *(const __m128i **)(__n + 8); /*0x100b1b294*/
  }
  else
  {
    v47 = (const __m128i *)std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(*(double *)v12.i64); /*0x100b1be3b*/
    v46 = (__int8 *)__n; /*0x100b1be40*/
    *(_QWORD *)__n = v47; /*0x100b1be44*/
    *((_QWORD *)v46 + 1) = v48; /*0x100b1be47*/
    v46[16] = 1; /*0x100b1be4b*/
  }
  *(_QWORD *)v46 = (char *)v47->i64 + 1; /*0x100b1b29c*/
  memset(&v119[1], 0, 24); /*0x100b1b2c2*/
  v49 = (const __m128i **)anon_0f4958e580c48b75b8f6e2e6da3e4224_10; /*0x100b1b2c9*/
  v119[0] = (const __m128i *)anon_0f4958e580c48b75b8f6e2e6da3e4224_10; /*0x100b1b2d0*/
  v119[4] = v47; /*0x100b1b2d7*/
  v119[5] = v48; /*0x100b1b2de*/
  v50 = v130; /*0x100b1b2e5*/
  v51 = v131; /*0x100b1b2ec*/
  v52 = v133; /*0x100b1b2f3*/
  v12 = _mm_load_si128(v130); /*0x100b1b2fa*/
  v154 = 0; /*0x100b1b302*/
  v160 = v131; /*0x100b1b309*/
  if ( v131 ) /*0x100b1b310*/
  {
    v53 = (24 * v160 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100b1b325*/
    v49 = (const __m128i **)(v160 + v53 + 17); /*0x100b1b330*/
    v46 = &v130->i8[-v53]; /*0x100b1b338*/
    v51 = v160; /*0x100b1b33b*/
    v54 = 16; /*0x100b1b342*/
  }
  else
  {
    v54 = 0; /*0x100b1b349*/
  }
  v55 = v130 + 1; /*0x100b1b34b*/
  _R13D = ~_mm_movemask_epi8(v12); /*0x100b1b354*/
  _RAX = (__int64)v130->i64 + v51 + 1; /*0x100b1b357*/
  v126 = v54; /*0x100b1b35c*/
  v157[0] = v54; /*0x100b1b363*/
  v125 = v49; /*0x100b1b36a*/
  v157[1] = v49; /*0x100b1b371*/
  v127 = v46; /*0x100b1b378*/
  v157[2] = v46; /*0x100b1b37f*/
  v157[3] = v130; /*0x100b1b386*/
  v157[4] = v130 + 1; /*0x100b1b38d*/
  v157[5] = _RAX; /*0x100b1b394*/
  LOWORD(v157[6]) = _R13D; /*0x100b1b39b*/
  v157[7] = v133; /*0x100b1b3a3*/
  if ( !v133 ) /*0x100b1b3ad*/
  {
LABEL_96:
    v31 = v125; /*0x100b1b944*/
    if ( v160 && v125 ) /*0x100b1b966*/
      *(double *)v12.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v127, v125, v126); /*0x100b1b968*/
    v3 = v163; /*0x100b1b975*/
    v99 = v141; /*0x100b1b979*/
    v23 = v154; /*0x100b1b980*/
    if ( v119[3] ) /*0x100b1b987*/
    {
      v31 = &v136; /*0x100b1b991*/
      codexmate_lib::core::sessions::health::safe_missing_thread_roots::h295ad9b5915a2602( /*0x100b1b99f*/
        &v166,
        &v136,
        v119,
        *(double *)v12.i64);
      v100 = (__int64)v168; /*0x100b1b9a4*/
      if ( v168 < v119[3] && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u ) /*0x100b1b9c6*/
      {
        v121 = v168; /*0x100b1b9cc*/
        v120[0] = v119[3]; /*0x100b1b9d3*/
        v157[0] = &v121; /*0x100b1b9e1*/
        v157[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100b1b9ef*/
        v157[2] = v120; /*0x100b1b9fd*/
        v157[3] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100b1ba04*/
        v161 = (unsigned __int64)"codexmate_lib::core::sessions::health"; /*0x100b1ba12*/
        __src[0] = 37; /*0x100b1ba19*/
        __src[1] = "codexmate_lib::core::sessions::health"; /*0x100b1ba24*/
        __src[2] = 37; /*0x100b1ba2b*/
        __src[3] = &off_101ABC708; /*0x100b1ba3d*/
        v31 = (const __m128i **)v157; /*0x100b1ba4b*/
        log::__private_api::log::hf5bade4875454669(&unk_1019080B7, v157, 2, &v161); /*0x100b1ba5e*/
      }
      if ( v100 ) /*0x100b1ba66*/
      {
        codexmate_lib::core::sessions::delete_sessions::he7070df48c076736( /*0x100b1ba7d*/
          (__int64 *)&v161,
          (__int64)v99,
          *(double *)v12.i64,
          (__int64)v167,
          v100);
        v101 = (const __m128i *)v161; /*0x100b1ba82*/
        qmemcpy(v157, __src, sizeof(v157)); /*0x100b1ba9c*/
        if ( v161 == 11 ) /*0x100b1baa3*/
        {
          qmemcpy(v116, v157, sizeof(v116)); /*0x100b1babc*/
          if ( v116[5] && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u ) /*0x100b1badd*/
          {
            v120[0] = v116[5]; /*0x100b1badf*/
            v157[0] = v120; /*0x100b1baed*/
            v157[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100b1bafb*/
            v161 = (unsigned __int64)"codexmate_lib::core::sessions::health"; /*0x100b1bb09*/
            __src[0] = 37; /*0x100b1bb10*/
            __src[1] = "codexmate_lib::core::sessions::health"; /*0x100b1bb1b*/
            __src[2] = 37; /*0x100b1bb22*/
            __src[3] = &off_101ABC720; /*0x100b1bb34*/
            log::__private_api::log::hf5bade4875454669(&unk_10190810D, v157, 2, &v161); /*0x100b1bb55*/
          }
          v102 = codexmate_lib::core::sessions::health::deletion_cleanup_result::h72b9679ae18c215e(&v161, v116, 0); /*0x100b1bb6a*/
          v3[5] = (const __m128i *)__src[3]; /*0x100b1bb76*/
          v3[4] = (const __m128i *)__src[2]; /*0x100b1bb81*/
          v3[3] = (const __m128i *)__src[1]; /*0x100b1bb8c*/
          v103 = (const __m128i *)v161; /*0x100b1bb90*/
          v3[2] = (const __m128i *)__src[0]; /*0x100b1bb9e*/
          v3[1] = v103; /*0x100b1bba2*/
          *v3 = (const __m128i *)11; /*0x100b1bba6*/
          core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h666ab969be7c6a67(&v166); /*0x100b1bbb2*/
          _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h87dcd97a83e749a4(v119); /*0x100b1bbbe*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..sessions..history..HealthHistory$GT$::hf935970819596bfb( /*0x100b1bbca*/
            &v146,
            v102);
          core::ptr::drop_in_place$LT$hashbrown..raw..RawTable$LT$$LP$alloc..string..String$C$codexmate_lib..core..sessions..CodexThreadRow$RP$$GT$$GT$::h8dfa37bcfe2b7af5( /*0x100b1bbd6*/
            &v136,
            v116);
          return v3; /*0x100b1bbdb*/
        }
        v105 = (const __m128i *)__src[9]; /*0x100b1bc53*/
        v3[11] = (const __m128i *)__src[10]; /*0x100b1bc61*/
        v3[10] = v105; /*0x100b1bc65*/
        qmemcpy(v3 + 1, v157, 0x48u); /*0x100b1bc79*/
        v31 = (const __m128i **)v158; /*0x100b1bc79*/
        *v3 = v101; /*0x100b1bc7c*/
      }
      else
      {
        v3[1] = nullptr; /*0x100b1bc21*/
        v3[2] = (const __m128i *)8; /*0x100b1bc29*/
        v3[3] = nullptr; /*0x100b1bc31*/
        v3[4] = nullptr; /*0x100b1bc39*/
        v3[5] = nullptr; /*0x100b1bc41*/
        *v3 = (const __m128i *)11; /*0x100b1bc49*/
      }
      HIDWORD(_RAX) = (unsigned __int64)core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h666ab969be7c6a67(&v166) >> 32; /*0x100b1bc84*/
      v104 = v119[1]; /*0x100b1bc89*/
      if ( !v119[1] ) /*0x100b1bc93*/
        goto LABEL_27; /*0x100b1bc93*/
    }
    else
    {
      v163[1] = nullptr; /*0x100b1bbe0*/
      v3[2] = (const __m128i *)8; /*0x100b1bbe8*/
      v3[3] = nullptr; /*0x100b1bbf0*/
      v3[4] = nullptr; /*0x100b1bbf8*/
      v3[5] = nullptr; /*0x100b1bc00*/
      *v3 = (const __m128i *)11; /*0x100b1bc08*/
      v104 = v119[1]; /*0x100b1bc10*/
      if ( !v119[1] ) /*0x100b1bc1a*/
        goto LABEL_27; /*0x100b1bc1a*/
    }
LABEL_114:
    v106 = v119[3]; /*0x100b1bc99*/
    if ( v119[3] ) /*0x100b1bca3*/
    {
      v107 = v119[0]; /*0x100b1bca9*/
      v12 = _mm_load_si128(v119[0]); /*0x100b1bcb0*/
      _R13D = ~_mm_movemask_epi8(v12); /*0x100b1bcbb*/
      v109 = v119[0] + 1; /*0x100b1bcbe*/
      do /*0x100b1bce0*/
      {
        if ( !(_WORD)_R13D ) /*0x100b1bce6*/
        {
          do /*0x100b1bd0b*/
          {
            v12 = _mm_load_si128(v109); /*0x100b1bcf0*/
            v110 = _mm_movemask_epi8(v12); /*0x100b1bcf4*/
            v107 -= 24; /*0x100b1bcf9*/
            ++v109; /*0x100b1bd00*/
          }
          while ( v110 == 0xFFFF ); /*0x100b1bd0b*/
          _R13D = ~v110; /*0x100b1bd0d*/
        }
        __asm { tzcnt eax, r13d } /*0x100b1bd10*/
        v111 = -3 * _RAX; /*0x100b1bd18*/
        v31 = *((const __m128i ***)&v107[-1] + v111 - 1); /*0x100b1bd1c*/
        if ( v31 ) /*0x100b1bd24*/
          *(double *)v12.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v107[-1].i64[v111], v31, 1); /*0x100b1bd33*/
        v106 = (const __m128i *)((char *)v106 - 1); /*0x100b1bcd0*/
        _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100b1bcd7*/
        _R13D &= _R13D - 1; /*0x100b1bcda*/
      }
      while ( v106 ); /*0x100b1bce0*/
    }
    v112 = (24LL * (_QWORD)v104 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100b1bd46*/
    v113 = &v104->i8[v112]; /*0x100b1bd4a*/
    v43 = v113 + 17 == nullptr; /*0x100b1bd4d*/
    v114 = (const __m128i **)(v113 + 17); /*0x100b1bd4d*/
    v3 = v163; /*0x100b1bd51*/
    v23 = v154; /*0x100b1bd55*/
    if ( !v43 ) /*0x100b1bd5c*/
    {
      v31 = v114; /*0x100b1bd71*/
      *(double *)v12.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v119[0] - v112, v114, 16); /*0x100b1bd74*/
    }
    goto LABEL_27; /*0x100b1bd79*/
  }
  v124 = v139; /*0x100b1b3c4*/
  HIDWORD(_RCX) = HIDWORD(v137); /*0x100b1b3d2*/
  v142 = v137; /*0x100b1b3d9*/
  v123 = 0x8000000000000000LL; /*0x100b1b3e4*/
  v153 = v136; /*0x100b1b3eb*/
  while ( 1 ) /*0x100b1b439*/
  {
    if ( !(_WORD)_R13D ) /*0x100b1b43d*/
    {
      do /*0x100b1b45d*/
      {
        v12 = _mm_load_si128(v55); /*0x100b1b440*/
        v59 = _mm_movemask_epi8(v12); /*0x100b1b446*/
        v50 -= 24; /*0x100b1b44b*/
        ++v55; /*0x100b1b452*/
      }
      while ( v59 == 0xFFFF ); /*0x100b1b45d*/
      _R13D = ~v59; /*0x100b1b45f*/
    }
    __asm { tzcnt ecx, r13d } /*0x100b1b466*/
    _R13D &= _R13D - 1; /*0x100b1b46e*/
    v60 = -_RCX; /*0x100b1b471*/
    _RAX = 3 * v60; /*0x100b1b474*/
    --v52; /*0x100b1b478*/
    v61 = *((_QWORD *)&v50[-1] + 3 * v60 - 1); /*0x100b1b47b*/
    if ( v61 == v123 ) /*0x100b1b487*/
    {
      LOWORD(v157[6]) = _R13D; /*0x100b1b8b3*/
      v157[3] = v50; /*0x100b1b8bb*/
      v157[4] = v55; /*0x100b1b8c2*/
      for ( v157[7] = v52; v52; --v52 ) /*0x100b1b8d3*/
      {
        if ( !(_WORD)_R13D ) /*0x100b1b8ea*/
        {
          do /*0x100b1b90d*/
          {
            v12 = _mm_load_si128(v55); /*0x100b1b8f0*/
            v96 = _mm_movemask_epi8(v12); /*0x100b1b8f6*/
            v50 -= 24; /*0x100b1b8fb*/
            ++v55; /*0x100b1b902*/
          }
          while ( v96 == 0xFFFF ); /*0x100b1b90d*/
          _R13D = ~v96; /*0x100b1b90f*/
        }
        __asm { tzcnt eax, r13d } /*0x100b1b912*/
        v97 = -3 * _RAX; /*0x100b1b91a*/
        v98 = *((_QWORD *)&v50[-1] + v97 - 1); /*0x100b1b91e*/
        if ( v98 ) /*0x100b1b926*/
          *(double *)v12.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50[-1].i64[v97], v98, 1); /*0x100b1b935*/
        _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100b1b8db*/
        _R13D &= _R13D - 1; /*0x100b1b8de*/
      }
      goto LABEL_96; /*0x100b1b8e4*/
    }
    v62 = &v50->i8[24 * v60]; /*0x100b1b48d*/
    _RCX = *((_QWORD *)v62 - 2); /*0x100b1b491*/
    _RAX = *((_QWORD *)v62 - 1); /*0x100b1b495*/
    __src[0] = _RAX; /*0x100b1b499*/
    v161 = _RCX; /*0x100b1b4a0*/
    v168 = (const __m128i *)_RAX; /*0x100b1b4ab*/
    v167 = (__m128i *)_RCX; /*0x100b1b4af*/
    v152.i64[0] = v61; /*0x100b1b4b2*/
    v166 = (const __m128i *)v61; /*0x100b1b4b9*/
    if ( !v124 ) /*0x100b1b4c5*/
      goto LABEL_85; /*0x100b1b4c5*/
    v63 = core::hash::BuildHasher::hash_one::hf33ca4e30edf6c31(v140, &v166); /*0x100b1b4d6*/
    v64 = v153; /*0x100b1b4db*/
    v65 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v63 >> 57), (__m128i)0LL); /*0x100b1b4f1*/
    __s1 = v167; /*0x100b1b4fa*/
    HIDWORD(_RCX) = HIDWORD(v168); /*0x100b1b4fe*/
    __n = (size_t)v168; /*0x100b1b502*/
    for ( i = 0; ; i += 16LL ) /*0x100b1b506*/
    {
      _RAX = v142 & v63; /*0x100b1b508*/
      v67 = _mm_loadu_si128((const __m128i *)((char *)v64 + _RAX)); /*0x100b1b50f*/
      v12 = _mm_cmpeq_epi8(v67, v65); /*0x100b1b518*/
      _EBX = _mm_movemask_epi8(v12); /*0x100b1b51c*/
      if ( _EBX ) /*0x100b1b522*/
        break; /*0x100b1b522*/
LABEL_63:
      v12.i64[0] = -1; /*0x100b1b5ba*/
      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v67, (__m128i)-1LL)); /*0x100b1b5c2*/
      if ( (_DWORD)_RCX ) /*0x100b1b5c8*/
        goto LABEL_85; /*0x100b1b5c8*/
      v63 = _RAX + i + 16; /*0x100b1b5ce*/
      v64 = v153; /*0x100b1b5d7*/
    }
    v159 = _RAX; /*0x100b1b528*/
    v143 = v52; /*0x100b1b52f*/
    v144 = v65; /*0x100b1b536*/
    v165 = i; /*0x100b1b53e*/
    v145 = v67; /*0x100b1b542*/
    while ( 1 ) /*0x100b1b54a*/
    {
      __asm { tzcnt ecx, ebx } /*0x100b1b54a*/
      _RCX = -(v142 & (_RAX + _RCX)); /*0x100b1b558*/
      if ( __n == v153[26 * _RCX - 25].i64[0] ) /*0x100b1b575*/
      {
        v69 = &v153[26 * _RCX]; /*0x100b1b577*/
        if ( !memcmp(__s1, (const void *)v69[-26].i64[1], __n) ) /*0x100b1b585*/
          break; /*0x100b1b585*/
      }
      v70 = _EBX - 1; /*0x100b1b58e*/
      LOWORD(v70) = _EBX & (_EBX - 1); /*0x100b1b591*/
      v43 = (_WORD)v70 == 0; /*0x100b1b591*/
      _EBX = v70; /*0x100b1b594*/
      _RAX = v159; /*0x100b1b596*/
      v52 = v143; /*0x100b1b59d*/
      v65 = _mm_load_si128(&v144); /*0x100b1b5a4*/
      i = v165; /*0x100b1b5ac*/
      v67 = _mm_load_si128(&v145); /*0x100b1b5b0*/
      if ( v43 ) /*0x100b1b5b8*/
        goto LABEL_63; /*0x100b1b5b8*/
    }
    v159 = (__int64)v69; /*0x100b1b5e3*/
    v52 = v143; /*0x100b1b5f2*/
    if ( v150 ) /*0x100b1b5f9*/
    {
      v71 = core::hash::BuildHasher::hash_one::hf33ca4e30edf6c31(v151, &v166); /*0x100b1b60a*/
      v72 = v147[11]; /*0x100b1b616*/
      v73 = v148; /*0x100b1b61d*/
      v74 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v71 >> 57), (__m128i)0LL); /*0x100b1b62c*/
      v75 = v147[11] - 24LL; /*0x100b1b631*/
      for ( j = 0; ; j += 16 ) /*0x100b1b635*/
      {
        v77 = v73 & v71; /*0x100b1b638*/
        v78 = _mm_loadu_si128((const __m128i *)(v72 + v77)); /*0x100b1b63b*/
        v12 = _mm_cmpeq_epi8(v78, v74); /*0x100b1b644*/
        _RCX = (unsigned int)_mm_movemask_epi8(v12); /*0x100b1b648*/
        if ( (_DWORD)_RCX ) /*0x100b1b64e*/
          break; /*0x100b1b64e*/
LABEL_72:
        v12.i64[0] = -1; /*0x100b1b6f3*/
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v78, (__m128i)-1LL)) ) /*0x100b1b6fb*/
          goto LABEL_74; /*0x100b1b701*/
        v71 = v77 + j + 16; /*0x100b1b703*/
      }
      v165 = v77; /*0x100b1b654*/
      v145.i64[0] = v72; /*0x100b1b658*/
      v155 = v73; /*0x100b1b65f*/
      v128 = v74; /*0x100b1b666*/
      v156 = j; /*0x100b1b66e*/
      v129 = v78; /*0x100b1b675*/
      while ( 1 ) /*0x100b1b67d*/
      {
        v144.i64[0] = _RCX; /*0x100b1b67d*/
        __asm { tzcnt ecx, ecx } /*0x100b1b684*/
        v80 = -(__int64)(v73 & (v77 + _RCX)); /*0x100b1b68e*/
        if ( __n == *(_QWORD *)(v75 + 24 * v80 + 16) && !memcmp(__s1, *(const void **)(v75 + 24 * v80 + 8), __n) ) /*0x100b1b6ac*/
          goto LABEL_85; /*0x100b1b6b3*/
        v81 = v144.i32[0] - 1; /*0x100b1b6c0*/
        LOWORD(v81) = v144.i16[0] & (v144.i16[0] - 1); /*0x100b1b6c3*/
        _RCX = v81; /*0x100b1b6c6*/
        v77 = v165; /*0x100b1b6c8*/
        v72 = v145.i64[0]; /*0x100b1b6cc*/
        v73 = v155; /*0x100b1b6d3*/
        v74 = _mm_load_si128(&v128); /*0x100b1b6da*/
        j = v156; /*0x100b1b6e2*/
        v78 = _mm_load_si128(&v129); /*0x100b1b6e9*/
        if ( (v144.i16[0] & (unsigned __int16)(v144.i16[0] - 1)) == 0 ) /*0x100b1b6f1*/
          goto LABEL_72; /*0x100b1b6f1*/
      }
    }
LABEL_74:
    v82 = __n; /*0x100b1b711*/
    v83 = v159; /*0x100b1b71d*/
    if ( v147[8] ) /*0x100b1b724*/
    {
      v84 = core::hash::BuildHasher::hash_one::hf33ca4e30edf6c31(&v147[9], &v166); /*0x100b1b735*/
      v85 = v147[5]; /*0x100b1b741*/
      v86 = v147[6]; /*0x100b1b748*/
      v87 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v84 >> 57), (__m128i)0LL); /*0x100b1b757*/
      v88 = v147[5] - 24LL; /*0x100b1b75c*/
      for ( k = 0; ; k += 16 ) /*0x100b1b760*/
      {
        v90 = v86 & v84; /*0x100b1b763*/
        v91 = _mm_loadu_si128((const __m128i *)(v85 + v90)); /*0x100b1b766*/
        v12 = _mm_cmpeq_epi8(v91, v87); /*0x100b1b76f*/
        _RCX = (unsigned int)_mm_movemask_epi8(v12); /*0x100b1b773*/
        if ( (_DWORD)_RCX ) /*0x100b1b779*/
          break; /*0x100b1b779*/
LABEL_81:
        v12.i64[0] = -1; /*0x100b1b81e*/
        v82 = __n; /*0x100b1b82c*/
        v83 = v159; /*0x100b1b830*/
        if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v91, (__m128i)-1LL)) ) /*0x100b1b826*/
          goto LABEL_83; /*0x100b1b837*/
        v84 = v90 + k + 16; /*0x100b1b839*/
      }
      v165 = v90; /*0x100b1b77f*/
      v145.i64[0] = v85; /*0x100b1b783*/
      v155 = v86; /*0x100b1b78a*/
      v128 = v87; /*0x100b1b791*/
      v156 = k; /*0x100b1b799*/
      v129 = v91; /*0x100b1b7a0*/
      while ( 1 ) /*0x100b1b7a8*/
      {
        v144.i64[0] = _RCX; /*0x100b1b7a8*/
        __asm { tzcnt ecx, ecx } /*0x100b1b7af*/
        v93 = -(__int64)(v86 & (v90 + _RCX)); /*0x100b1b7b9*/
        if ( __n == *(_QWORD *)(v88 + 24 * v93 + 16) && !memcmp(__s1, *(const void **)(v88 + 24 * v93 + 8), __n) ) /*0x100b1b7d7*/
          break; /*0x100b1b7d7*/
        v94 = v144.i32[0] - 1; /*0x100b1b7eb*/
        LOWORD(v94) = v144.i16[0] & (v144.i16[0] - 1); /*0x100b1b7ee*/
        _RCX = v94; /*0x100b1b7f1*/
        v90 = v165; /*0x100b1b7f3*/
        v85 = v145.i64[0]; /*0x100b1b7f7*/
        v86 = v155; /*0x100b1b7fe*/
        v87 = _mm_load_si128(&v128); /*0x100b1b805*/
        k = v156; /*0x100b1b80d*/
        v91 = _mm_load_si128(&v129); /*0x100b1b814*/
        if ( (v144.i16[0] & (unsigned __int16)(v144.i16[0] - 1)) == 0 ) /*0x100b1b81c*/
          goto LABEL_81; /*0x100b1b81c*/
      }
LABEL_85:
      if ( v152.i64[0] ) /*0x100b1b89a*/
        *(double *)v12.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v167, v152.i64[0], 1); /*0x100b1b8a9*/
      goto LABEL_51; /*0x100b1b8ae*/
    }
LABEL_83:
    HIDWORD(_RAX) = (unsigned __int64)codexmate_lib::core::sessions::thread_rollout_exists::hbdbf4c34c562068a( /*0x100b1b860*/
                                        &v161,
                                        __s1,
                                        v82,
                                        v83 - 392,
                                        &v146) >> 32;
    v95 = (const __m128i *)v161; /*0x100b1b865*/
    if ( v161 != 11 ) /*0x100b1b870*/
      break; /*0x100b1b870*/
    if ( LOBYTE(__src[0]) ) /*0x100b1b87d*/
      goto LABEL_85; /*0x100b1b87d*/
    __src[1] = v168; /*0x100b1b3f8*/
    __src[0] = v167; /*0x100b1b407*/
    v161 = (unsigned __int64)v166; /*0x100b1b40e*/
    HIDWORD(_RAX) = (unsigned __int64)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::he08410f8bb39a3b4( /*0x100b1b423*/
                                        v119,
                                        &v161) >> 32;
LABEL_51:
    if ( !v52 ) /*0x100b1b433*/
    {
      LOWORD(v157[6]) = _R13D; /*0x100b1b93c*/
      goto LABEL_96; /*0x100b1b93c*/
    }
  }
  LOWORD(v157[6]) = _R13D; /*0x100b1bd7e*/
  v157[3] = v50; /*0x100b1bd86*/
  v157[4] = v55; /*0x100b1bd8d*/
  v157[7] = v52; /*0x100b1bd94*/
  v115 = __src[0]; /*0x100b1bd9b*/
  v3 = v163; /*0x100b1bdaa*/
  memcpy((char *)v163 + 9, (char *)__src + 1, 0x57u); /*0x100b1bdb7*/
  *v3 = v95; /*0x100b1bdbc*/
  *((_BYTE *)v3 + 8) = v115; /*0x100b1bdc0*/
  v31 = (const __m128i **)v152.i64[0]; /*0x100b1bdc4*/
  if ( v152.i64[0] ) /*0x100b1bdce*/
    *(double *)v12.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v152.i64[0], 1); /*0x100b1bdd9*/
  HIDWORD(_RAX) = (unsigned __int64)_$LT$hashbrown..raw..RawIntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hf1bc801d939d335d(v157) >> 32; /*0x100b1bde5*/
  v23 = v154; /*0x100b1bdea*/
  v104 = v119[1]; /*0x100b1bdf1*/
  if ( v119[1] ) /*0x100b1bdfb*/
    goto LABEL_114; /*0x100b1bdfb*/
LABEL_27:
  core::ptr::drop_in_place$LT$codexmate_lib..core..sessions..history..HealthHistory$GT$::hf935970819596bfb( /*0x100b1b140*/
    &v146,
    *(double *)v12.i64);
  HIDWORD(_RAX) = (unsigned __int64)core::ptr::drop_in_place$LT$hashbrown..raw..RawTable$LT$$LP$alloc..string..String$C$codexmate_lib..core..sessions..CodexThreadRow$RP$$GT$$GT$::h8dfa37bcfe2b7af5( /*0x100b1b153*/
                                      &v136,
                                      v31) >> 32;
  if ( v23 ) /*0x100b1b15b*/
  {
LABEL_31:
    v33 = v131; /*0x100b1b189*/
    if ( v131 ) /*0x100b1b193*/
    {
      v34 = v133; /*0x100b1b199*/
      if ( v133 ) /*0x100b1b1a3*/
      {
        v35 = v130; /*0x100b1b1a9*/
        _R13D = ~_mm_movemask_epi8(_mm_load_si128(v130)); /*0x100b1b1bb*/
        v37 = v130 + 1; /*0x100b1b1be*/
        do /*0x100b1b1e0*/
        {
          if ( !(_WORD)_R13D ) /*0x100b1b1e6*/
          {
            do /*0x100b1b20b*/
            {
              v38 = _mm_movemask_epi8(_mm_load_si128(v37)); /*0x100b1b1f4*/
              v35 -= 24; /*0x100b1b1f9*/
              ++v37; /*0x100b1b200*/
            }
            while ( v38 == 0xFFFF ); /*0x100b1b20b*/
            _R13D = ~v38; /*0x100b1b20d*/
          }
          __asm { tzcnt eax, r13d } /*0x100b1b210*/
          v39 = -3LL * _RAX; /*0x100b1b218*/
          v40 = *((_QWORD *)&v35[-1] + v39 - 1); /*0x100b1b21c*/
          if ( v40 ) /*0x100b1b224*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35[-1].i64[v39], v40, 1); /*0x100b1b233*/
          --v34; /*0x100b1b1d0*/
          _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100b1b1d7*/
          _R13D &= _R13D - 1; /*0x100b1b1da*/
        }
        while ( v34 ); /*0x100b1b1e0*/
      }
      v41 = (24 * v33 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100b1b246*/
      v42 = v41 + v33; /*0x100b1b24a*/
      v43 = v42 == -17; /*0x100b1b24d*/
      v44 = v42 + 17; /*0x100b1b24d*/
      v3 = v163; /*0x100b1b251*/
      if ( !v43 ) /*0x100b1b255*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v130 - v41, v44, 16); /*0x100b1b269*/
    }
  }
  return v3; /*0x100b1b271*/
}