// mac 1.1.8 upsert_relay_provider node va=0x1005cafa0 depth=1
// codexmate_lib4core5relay7manager12RelayManager6upsert
void *__fastcall codexmate_lib::core::relay::manager::RelayManager::upsert::h032d95ab4c0adfd5(
        void *a1,
        _QWORD *a2,
        __int64 *a3,
        double a4,
        double a5)
{
  unsigned int v5; // r12d
  int v6; // edx
  unsigned int v7; // eax
  __int64 *v8; // r15
  const void *v9; // r14
  signed __int64 v10; // rbx
  char v11; // cl
  __int64 v12; // rbx
  signed __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdi
  __int64 v18; // r15
  __int64 v19; // rdi
  __int64 v20; // rdx
  char v21; // r14
  __int64 v22; // rsi
  __int64 v23; // rdx
  __int64 v24; // rdi
  void *v25; // rax
  void *v26; // rbx
  _QWORD *v27; // rcx
  char v28; // r13
  unsigned __int64 v29; // r14
  __int64 v30; // r13
  __int64 v31; // r12
  __int64 i; // rbx
  __int64 v33; // r14
  size_t v34; // r15
  const void *v35; // r13
  size_t v36; // r15
  __int64 v37; // rbx
  __int64 v38; // r12
  char v39; // r12
  size_t v40; // r14
  char *v41; // r12
  __int64 v42; // rbx
  __int64 v43; // r13
  __int64 v44; // r15
  __int64 v45; // r12
  __int64 *v46; // r14
  char v47; // bl
  __int64 v48; // rax
  bool v49; // zf
  __int64 v50; // rcx
  double v51; // xmm0_8
  __int64 v52; // rdx
  char v53; // al
  unsigned __int64 v54; // rbx
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rbx
  _QWORD *v58; // r15
  __int64 v59; // rsi
  char v60; // r13
  __int64 v61; // r15
  __int64 v62; // r12
  __int64 v63; // rbx
  char v64; // r15
  char v65; // r13
  void *v66; // rbx
  unsigned __int64 v67; // rbx
  __int64 v68; // r15
  __int64 v69; // r13
  const void *v70; // rbx
  size_t v71; // r14
  __int64 v72; // r12
  __int64 v73; // rsi
  __int64 v74; // rax
  __int64 v75; // rax
  __int64 v76; // rbx
  __int64 v77; // r14
  _QWORD *v78; // r15
  __int64 v79; // rsi
  _QWORD *v80; // rdx
  _QWORD *v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rbx
  __int64 v84; // r14
  _QWORD *v85; // r15
  __int64 v86; // rsi
  __int64 v87; // rsi
  __int64 *v88; // rbx
  __int64 v89; // rsi
  __int64 *v90; // rbx
  __int64 v91; // rsi
  __int64 v92; // rsi
  __int64 v93; // rbx
  _QWORD *v94; // r14
  __int64 v95; // rsi
  __int64 v96; // rsi
  __int64 v97; // rdi
  __int64 v98; // rdx
  __int64 v99; // rsi
  __int64 *v100; // rbx
  __int64 v101; // rsi
  __int64 v102; // rsi
  __int64 v103; // rbx
  _QWORD *v104; // r14
  __int64 v105; // rsi
  _QWORD v107[29]; // [rsp+10h] [rbp-820h] BYREF
  _QWORD __src[29]; // [rsp+F8h] [rbp-738h] BYREF
  _BYTE v109[232]; // [rsp+1E0h] [rbp-650h] BYREF
  __int64 v110; // [rsp+2C8h] [rbp-568h] BYREF
  __int64 v111; // [rsp+2D0h] [rbp-560h]
  unsigned __int64 v112; // [rsp+2D8h] [rbp-558h]
  char v113; // [rsp+41Ch] [rbp-414h]
  _QWORD v114[3]; // [rsp+420h] [rbp-410h] BYREF
  _QWORD v115[3]; // [rsp+438h] [rbp-3F8h] BYREF
  _QWORD v116[3]; // [rsp+450h] [rbp-3E0h] BYREF
  _QWORD *v117; // [rsp+468h] [rbp-3C8h] BYREF
  __int64 v118; // [rsp+470h] [rbp-3C0h]
  __int64 v119; // [rsp+478h] [rbp-3B8h]
  __int64 v120; // [rsp+480h] [rbp-3B0h]
  _QWORD v121[12]; // [rsp+488h] [rbp-3A8h] BYREF
  _QWORD v122[43]; // [rsp+4E8h] [rbp-348h] BYREF
  __int64 v123; // [rsp+640h] [rbp-1F0h] BYREF
  __int64 v124; // [rsp+648h] [rbp-1E8h]
  __int64 v125; // [rsp+650h] [rbp-1E0h]
  _QWORD *v126; // [rsp+658h] [rbp-1D8h]
  __int64 v127; // [rsp+660h] [rbp-1D0h]
  __int64 v128; // [rsp+668h] [rbp-1C8h] BYREF
  __int64 v129; // [rsp+670h] [rbp-1C0h]
  __int64 v130; // [rsp+678h] [rbp-1B8h]
  __int64 v131; // [rsp+680h] [rbp-1B0h] BYREF
  __int64 v132; // [rsp+688h] [rbp-1A8h]
  __int64 v133; // [rsp+690h] [rbp-1A0h]
  signed __int64 v134; // [rsp+698h] [rbp-198h]
  __int64 v135; // [rsp+6A0h] [rbp-190h]
  _QWORD *v136; // [rsp+6A8h] [rbp-188h]
  unsigned __int64 v137; // [rsp+6B0h] [rbp-180h]
  __int64 *v138; // [rsp+6B8h] [rbp-178h]
  __int128 v139; // [rsp+6C0h] [rbp-170h]
  _QWORD __dst[29]; // [rsp+6D0h] [rbp-160h] BYREF
  __int64 v141; // [rsp+7B8h] [rbp-78h] BYREF
  __int64 v142; // [rsp+7C0h] [rbp-70h]
  __int64 v143; // [rsp+7C8h] [rbp-68h]
  __int64 *v144; // [rsp+7D0h] [rbp-60h]
  void *v145; // [rsp+7D8h] [rbp-58h]
  _QWORD *v146; // [rsp+7E0h] [rbp-50h]
  __int64 v147; // [rsp+7E8h] [rbp-48h]
  char v148; // [rsp+7F7h] [rbp-39h] BYREF
  __int64 *v149; // [rsp+7F8h] [rbp-38h]
  char v150; // [rsp+807h] [rbp-29h]

  v149 = a3; /*0x1005cafb4*/
  v136 = a2; /*0x1005cafb8*/
  v145 = a1; /*0x1005cafbf*/
  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(v122); /*0x1005cafca*/
  v5 = v122[0]; /*0x1005cafcf*/
  v6 = (SLODWORD(v122[0]) >> 13) - 1; /*0x1005cafdc*/
  if ( SLODWORD(v122[0]) >> 13 <= 0 ) /*0x1005cafe1*/
  {
    v7 = (1 - (SLODWORD(v122[0]) >> 13)) / 0x190u + 1; /*0x1005cb001*/
    v6 += 400 * v7; /*0x1005cb009*/
    LODWORD(v138) = -146097 * v7; /*0x1005cb011*/
  }
  else
  {
    LODWORD(v138) = 0; /*0x1005cafe3*/
  }
  LODWORD(v139) = v6; /*0x1005cb017*/
  v137 = HIDWORD(v122[0]); /*0x1005cb023*/
  v147 = LODWORD(v122[1]); /*0x1005cb030*/
  v8 = v149; /*0x1005cb034*/
  v126 = v149 + 6; /*0x1005cb043*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v131, v149 + 6); /*0x1005cb04a*/
  v144 = v8 + 15; /*0x1005cb053*/
  v9 = (const void *)v8[10]; /*0x1005cb057*/
  v10 = v8[11]; /*0x1005cb05b*/
  v11 = *((_BYTE *)v8 + 169); /*0x1005cb05f*/
  if ( v8[15] != 0x8000000000000000LL && v8[17] ) /*0x1005cb07b*/
  {
    v12 = v8[16]; /*0x1005cb085*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v122, v12); /*0x1005cb096*/
    v150 = *(_BYTE *)(v12 + 24); /*0x1005cb09f*/
    LOBYTE(v122[3]) = v150; /*0x1005cb0a2*/
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h68c58a439707a4f3(&v110, v144); /*0x1005cb0b3*/
    v13 = v122[0]; /*0x1005cb0b8*/
    v14 = v122[1]; /*0x1005cb0bf*/
    v10 = v122[2]; /*0x1005cb0c6*/
    __dst[0] = v110; /*0x1005cb0db*/
    __dst[1] = v111; /*0x1005cb0e2*/
    __dst[2] = v112; /*0x1005cb0f0*/
    goto LABEL_15; /*0x1005cb0f7*/
  }
  v122[0] = 0; /*0x1005cb0fc*/
  v122[1] = 8; /*0x1005cb107*/
  v122[2] = 0; /*0x1005cb112*/
  if ( v10 < 0 ) /*0x1005cb120*/
  {
    v15 = 0; /*0x1005cb122*/
    goto LABEL_9; /*0x1005cb122*/
  }
  v150 = v11; /*0x1005cb135*/
  if ( v10 ) /*0x1005cb138*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v131); /*0x1005cb13a*/
    v15 = 1; /*0x1005cb13f*/
    v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v10, 1); /*0x1005cb14d*/
    if ( !v16 ) /*0x1005cb155*/
LABEL_9:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v15, v10); /*0x1005cb125*/
    v17 = v16; /*0x1005cb157*/
  }
  else
  {
    v17 = 1; /*0x1005cb15c*/
  }
  memcpy((void *)v17, v9, v10); /*0x1005cb16a*/
  v14 = v17; /*0x1005cb16f*/
  __dst[0] = v122[0]; /*0x1005cb180*/
  __dst[1] = v122[1]; /*0x1005cb187*/
  __dst[2] = v122[2]; /*0x1005cb195*/
  v13 = v10; /*0x1005cb19c*/
LABEL_15:
  v130 = __dst[2]; /*0x1005cb19f*/
  v129 = __dst[1]; /*0x1005cb1bb*/
  v128 = __dst[0]; /*0x1005cb1c2*/
  v134 = v13; /*0x1005cb1c9*/
  v116[0] = v13; /*0x1005cb1d0*/
  v135 = v14; /*0x1005cb1d7*/
  v116[1] = v14; /*0x1005cb1de*/
  v116[2] = v10; /*0x1005cb1e5*/
  v18 = v136[1]; /*0x1005cb1f3*/
  v146 = (_QWORD *)(v18 + 16); /*0x1005cb1fb*/
  v19 = *(_QWORD *)(v18 + 16); /*0x1005cb1ff*/
  if ( !v19 ) /*0x1005cb206*/
    v19 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::hf1a0da68c4a8085f(v146); /*0x1005cc698*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(); /*0x1005cb20f*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1005cb22f*/
  {
    v21 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v19, v13, v20, a4, a5) ^ 1; /*0x1005cc6a8*/
    if ( !*(_BYTE *)(v18 + 24) ) /*0x1005cc6b3*/
      goto LABEL_19; /*0x1005cc6b3*/
LABEL_180:
    v122[0] = v146; /*0x1005cc6b9*/
    LOBYTE(v122[1]) = v21; /*0x1005cc6c4*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005cc6ec*/
      &anon_1f22c03b288e649fafb3d21192ed4cff_595,
      20,
      v122,
      &anon_1f22c03b288e649fafb3d21192ed4cff_853,
      &off_1015344F8);
  }
  v21 = 0; /*0x1005cb235*/
  if ( *(_BYTE *)(v18 + 24) ) /*0x1005cb238*/
    goto LABEL_180; /*0x1005cb23f*/
LABEL_19:
  v22 = v18 + 32; /*0x1005cb245*/
  _$LT$codexmate_lib..core..relay..models..RelayState$u20$as$u20$core..clone..Clone$GT$::clone::hdc194ad118c67832( /*0x1005cb250*/
    &v110,
    v18 + 32);
  if ( !v21 /*0x1005cc6f6*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&v110, v22, v23, a4, a5) )
  {
    *(_BYTE *)(v18 + 24) = 1; /*0x1005cc703*/
  }
  v24 = *v146; /*0x1005cb271*/
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v146, v22, v23, a4, a5); /*0x1005cb274*/
  if ( v113 ) /*0x1005cb280*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v24); /*0x1005cb282*/
    v25 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(107, 1); /*0x1005cb291*/
    if ( !v25 ) /*0x1005cb299*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 107); /*0x1005cc76c*/
    v26 = v25; /*0x1005cb29f*/
    memcpy(v25, &unk_1012CBCD4, 0x6Bu); /*0x1005cb2b1*/
    v27 = v145; /*0x1005cb2b6*/
    *((_QWORD *)v145 + 1) = 9; /*0x1005cb2ba*/
    v27[2] = 107; /*0x1005cb2c2*/
    v27[3] = v26; /*0x1005cb2ca*/
    v27[4] = 107; /*0x1005cb2ce*/
    *v27 = 0x8000000000000000LL; /*0x1005cb2e0*/
    v28 = 1; /*0x1005cb2e3*/
LABEL_121:
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::ha31523a10c4e8151(&v110); /*0x1005cc337*/
    if ( v134 ) /*0x1005cc34d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v135, v134, 1); /*0x1005cc35b*/
    v83 = v129; /*0x1005cc360*/
    v84 = v130; /*0x1005cc367*/
    if ( v130 ) /*0x1005cc371*/
    {
      v85 = (_QWORD *)(v129 + 8); /*0x1005cc373*/
      do /*0x1005cc387*/
      {
        v86 = *(v85 - 1); /*0x1005cc389*/
        if ( v86 ) /*0x1005cc390*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v85, v86, 1); /*0x1005cc39a*/
        v85 += 4; /*0x1005cc380*/
        --v84; /*0x1005cc384*/
      }
      while ( v84 ); /*0x1005cc387*/
    }
    if ( v128 ) /*0x1005cc3ab*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v83, 32 * v128, 8); /*0x1005cc3b9*/
    if ( v131 ) /*0x1005cc3c8*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v132, v131, 1); /*0x1005cc3d6*/
    v87 = v149[12]; /*0x1005cc3df*/
    if ( v87 != 0x8000000000000000LL && v87 ) /*0x1005cc3f5*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v149[13], v87, 1); /*0x1005cc404*/
    if ( v28 ) /*0x1005cc40c*/
    {
      v88 = v149; /*0x1005cc40e*/
      if ( *v149 ) /*0x1005cc412*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v149[1], *v149, 1); /*0x1005cc423*/
      v89 = v88[3]; /*0x1005cc428*/
      if ( v89 ) /*0x1005cc42f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v149[4], v89, 1); /*0x1005cc43e*/
    }
    v90 = v149; /*0x1005cc450*/
    if ( *v126 ) /*0x1005cc44a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v149[7], *v126, 1); /*0x1005cc45f*/
    v91 = v90[9]; /*0x1005cc464*/
    if ( v91 ) /*0x1005cc46b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v90[10], v91, 1); /*0x1005cc476*/
    v92 = *v144; /*0x1005cc47f*/
    if ( *v144 != 0x8000000000000000LL ) /*0x1005cc48f*/
    {
      v93 = v149[17]; /*0x1005cc495*/
      if ( v93 ) /*0x1005cc49f*/
      {
        v94 = (_QWORD *)(v149[16] + 8); /*0x1005cc4ac*/
        do /*0x1005cc4c7*/
        {
          v95 = *(v94 - 1); /*0x1005cc4c9*/
          if ( v95 ) /*0x1005cc4d0*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v94, v95, 1); /*0x1005cc4da*/
          v94 += 4; /*0x1005cc4c0*/
          --v93; /*0x1005cc4c4*/
        }
        while ( v93 ); /*0x1005cc4c7*/
        v92 = *v144; /*0x1005cc4e5*/
      }
      if ( v92 ) /*0x1005cc4eb*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v149[16], 32 * v92, 8); /*0x1005cc501*/
    }
    if ( v28 ) /*0x1005cc509*/
    {
      v96 = v149[18]; /*0x1005cc513*/
      if ( v96 != 0x8000000000000000LL ) /*0x1005cc527*/
      {
        if ( v96 ) /*0x1005cc530*/
        {
          v97 = v149[19]; /*0x1005cc53a*/
          v98 = 1; /*0x1005cc541*/
LABEL_157:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v97, v96, v98); /*0x1005cc546*/
          return v145; /*0x1005cc54b*/
        }
      }
    }
    return v145; /*0x1005cc530*/
  }
  v29 = 1000 /*0x1005cb355*/
      * (v137
       + 86400LL
       * (int)((((int)v139 / 100) >> 2)
             + ((1461 * (int)v139) >> 2)
             + (_DWORD)v138
             + ((v5 >> 4) & 0x1FF)
             - (int)v139 / 100
             - 719163))
      + ((unsigned __int64)(1125899907 * v147) >> 50);
  v49 = v149[12] == 0x8000000000000000LL; /*0x1005cb36a*/
  v138 = v149 + 12; /*0x1005cb36e*/
  v137 = v29; /*0x1005cb375*/
  if ( v49 ) /*0x1005cb37c*/
  {
    uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v141); /*0x1005cb386*/
    __dst[0] = 0; /*0x1005cb38b*/
    __dst[1] = 1; /*0x1005cb396*/
    __dst[2] = 0; /*0x1005cb3a1*/
    v122[2] = 1610612768; /*0x1005cb3ac*/
    v122[0] = __dst; /*0x1005cb3be*/
    v122[1] = &anon_1f22c03b288e649fafb3d21192ed4cff_828; /*0x1005cb3cc*/
    if ( (unsigned __int8)uuid::fmt::_$LT$impl$u20$core..fmt..LowerHex$u20$for$u20$uuid..Uuid$GT$::fmt::h318954c16e5fd96c( /*0x1005cb3de*/
                            &v141,
                            v122) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005cc72b*/
        "a Display implementation returned an error unexpectedly",
        55,
        &v148,
        &anon_1f22c03b288e649fafb3d21192ed4cff_849,
        &anon_1f22c03b288e649fafb3d21192ed4cff_831);
    *(_QWORD *)&v139 = __dst[0]; /*0x1005cb3f2*/
    v121[0] = 0; /*0x1005cb407*/
    v121[1] = 1; /*0x1005cb412*/
    v121[2] = 0; /*0x1005cb41d*/
    v147 = __dst[1]; /*0x1005cb428*/
    v122[0] = __dst[1]; /*0x1005cb42c*/
    v122[1] = __dst[2]; /*0x1005cb433*/
    v122[2] = 0; /*0x1005cb43a*/
    v146 = (_QWORD *)__dst[2]; /*0x1005cb445*/
    v122[3] = __dst[2]; /*0x1005cb449*/
    v122[4] = 0x2D0000002DLL; /*0x1005cb45a*/
    LOBYTE(v122[5]) = 1; /*0x1005cb461*/
    v30 = 1; /*0x1005cb468*/
    v31 = 0; /*0x1005cb46e*/
    for ( i = 0; ; i = v33 ) /*0x1005cb471*/
    {
      _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1005cb48e*/
        __dst,
        v122);
      if ( !LOBYTE(__dst[0]) ) /*0x1005cb49a*/
        break; /*0x1005cb49a*/
      v33 = __dst[2]; /*0x1005cb4a7*/
      v34 = __dst[1] - i; /*0x1005cb4ae*/
      if ( __dst[1] - i > (unsigned __int64)(v121[0] - v31) ) /*0x1005cb4be*/
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c( /*0x1005cb4fb*/
          v121,
          v31,
          __dst[1] - i,
          1,
          1);
        v30 = v121[1]; /*0x1005cb500*/
        v31 = v121[2]; /*0x1005cb507*/
      }
      memcpy((void *)(v30 + v31), (const void *)(v147 + i), v34); /*0x1005cb4cf*/
      v31 += v34; /*0x1005cb4d4*/
      v121[2] = v31; /*0x1005cb4d7*/
    }
    v40 = (size_t)v146 - i; /*0x1005cb5fa*/
    if ( (unsigned __int64)v146 - i > v121[0] - v31 ) /*0x1005cb600*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c( /*0x1005cc74a*/
        v121,
        v31,
        (char *)v146 - i,
        1,
        1);
      v30 = v121[1]; /*0x1005cc74f*/
      v31 = v121[2]; /*0x1005cc756*/
    }
    v41 = (char *)(v30 + v31); /*0x1005cb60a*/
    memcpy(v41, (const void *)(v147 + i), v40); /*0x1005cb616*/
    v42 = v121[0]; /*0x1005cb61b*/
    v122[0] = v30; /*0x1005cb625*/
    v122[1] = &v41[v40]; /*0x1005cb62c*/
    v122[2] = 10; /*0x1005cb633*/
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h0fe35e1dc24b9a0e( /*0x1005cb64f*/
      __dst,
      v122);
    if ( v42 ) /*0x1005cb657*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v42, 1); /*0x1005cb664*/
    if ( (_QWORD)v139 ) /*0x1005cb673*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v147, v139, 1); /*0x1005cb67e*/
    v122[0] = __dst; /*0x1005cb683*/
    v122[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1005cb691*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v117, &unk_10122CA1D, v122); /*0x1005cb6ad*/
    if ( __dst[0] ) /*0x1005cb6bc*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], __dst[0], 1); /*0x1005cb6ca*/
    v146 = v117; /*0x1005cb6d6*/
    v147 = *v149; /*0x1005cb6e8*/
    v43 = v149[1]; /*0x1005cb6ec*/
    v127 = v149[3]; /*0x1005cb6f4*/
    v139 = *((_OWORD *)v149 + 1); /*0x1005cb6ff*/
    v44 = v149[4]; /*0x1005cb706*/
    v45 = v149[5]; /*0x1005cb70a*/
    v120 = v118; /*0x1005cb719*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v141, &v131); /*0x1005cb720*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v121, v116); /*0x1005cb733*/
    v46 = v149; /*0x1005cb738*/
    v47 = *((_BYTE *)v149 + 170); /*0x1005cb73c*/
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h68c58a439707a4f3(v122, &v128); /*0x1005cb752*/
    v48 = v46[18]; /*0x1005cb757*/
    v49 = v48 == 0x8000000000000000LL; /*0x1005cb76a*/
    v50 = v46[20]; /*0x1005cb76d*/
    if ( v48 == 0x8000000000000000LL ) /*0x1005cb774*/
    {
      v50 = 0; /*0x1005cb774*/
      v48 = 0; /*0x1005cb778*/
    }
    __dst[2] = v119; /*0x1005cb783*/
    __dst[1] = v118; /*0x1005cb791*/
    __dst[0] = v117; /*0x1005cb79f*/
    __dst[3] = v147; /*0x1005cb7aa*/
    __dst[4] = v43; /*0x1005cb7b1*/
    v51 = *(double *)&v139; /*0x1005cb7b8*/
    *(_OWORD *)&__dst[5] = v139; /*0x1005cb7bf*/
    __dst[7] = v44; /*0x1005cb7c6*/
    v52 = 1; /*0x1005cb7cd*/
    if ( !v49 ) /*0x1005cb7d2*/
      v52 = v46[19]; /*0x1005cb7d2*/
    __dst[8] = v45; /*0x1005cb7da*/
    __dst[9] = v141; /*0x1005cb7e5*/
    __dst[10] = v142; /*0x1005cb7f0*/
    __dst[11] = v143; /*0x1005cb7fb*/
    BYTE4(__dst[28]) = 0; /*0x1005cb802*/
    __dst[12] = v121[0]; /*0x1005cb80d*/
    __dst[13] = v121[1]; /*0x1005cb81b*/
    __dst[14] = v121[2]; /*0x1005cb829*/
    BYTE6(__dst[28]) = v150; /*0x1005cb834*/
    HIBYTE(__dst[28]) = v47; /*0x1005cb838*/
    __dst[15] = v122[0]; /*0x1005cb842*/
    __dst[16] = v122[1]; /*0x1005cb850*/
    __dst[17] = v122[2]; /*0x1005cb85e*/
    __dst[18] = v48; /*0x1005cb865*/
    __dst[19] = v52; /*0x1005cb86c*/
    __dst[20] = v50; /*0x1005cb873*/
    LODWORD(__dst[28]) = 0; /*0x1005cb87a*/
    __dst[24] = -1; /*0x1005cb881*/
    __dst[25] = 0; /*0x1005cb88c*/
    __dst[26] = v137; /*0x1005cb89e*/
    __dst[27] = v137; /*0x1005cb8a5*/
    v53 = *((_BYTE *)v46 + 168); /*0x1005cb8ac*/
    __dst[21] = 0x8000000000000000LL; /*0x1005cb8b4*/
    BYTE5(__dst[28]) = v53; /*0x1005cb8bb*/
    _$LT$codexmate_lib..core..relay..models..RelayProvider$u20$as$u20$core..clone..Clone$GT$::clone::h4cf37ba944ee5db7( /*0x1005cb8cc*/
      v122,
      __dst);
    v54 = v112; /*0x1005cb8d1*/
    if ( v112 == v110 ) /*0x1005cb8df*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h268242bfb87af67e(&v110, v51); /*0x1005cb8e8*/
    memcpy((void *)(v111 + 232 * v54), v122, 0xE8u); /*0x1005cb907*/
    v112 = v54 + 1; /*0x1005cb90f*/
    memcpy(v109, __dst, sizeof(v109)); /*0x1005cb929*/
    goto LABEL_93; /*0x1005cb92e*/
  }
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v122, v149 + 12); /*0x1005cb51a*/
  v147 = v122[0]; /*0x1005cb526*/
  v35 = (const void *)v122[1]; /*0x1005cb52a*/
  v36 = v122[2]; /*0x1005cb531*/
  *(_QWORD *)&v139 = v122[1]; /*0x1005cb542*/
  if ( v112 ) /*0x1005cb549*/
  {
    v37 = v111; /*0x1005cb54f*/
    v38 = 232 * v112; /*0x1005cb556*/
    v29 = 0; /*0x1005cb55d*/
    while ( *(_QWORD *)(v37 + 16) != v36 || memcmp(*(const void **)(v37 + 8), v35, v36) ) /*0x1005cb59e*/
    {
      v37 += 232; /*0x1005cb570*/
      ++v29; /*0x1005cb577*/
      v38 -= 232; /*0x1005cb57a*/
      if ( !v38 ) /*0x1005cb581*/
        goto LABEL_53; /*0x1005cb581*/
    }
    _$LT$codexmate_lib..core..relay..models..RelayProvider$u20$as$u20$core..clone..Clone$GT$::clone::h4cf37ba944ee5db7( /*0x1005cb5aa*/
      __src,
      v37);
    v39 = 1; /*0x1005cb5af*/
    if ( __src[0] != 0x8000000000000000LL ) /*0x1005cb5c3*/
    {
      memcpy(__dst, __src, sizeof(__dst)); /*0x1005cb5dc*/
      v39 = 1; /*0x1005cb5e1*/
      goto LABEL_55; /*0x1005cb5e4*/
    }
  }
  else
  {
LABEL_53:
    __src[0] = 0x8000000000000000LL; /*0x1005cb933*/
    v39 = 0; /*0x1005cb944*/
  }
  __dst[0] = 0; /*0x1005cb947*/
  __dst[1] = 1; /*0x1005cb952*/
  __dst[2] = 0; /*0x1005cb95d*/
  __dst[3] = 0; /*0x1005cb968*/
  __dst[4] = 1; /*0x1005cb973*/
  *(_OWORD *)&__dst[5] = 0u; /*0x1005cb97e*/
  __dst[7] = 1; /*0x1005cb994*/
  __dst[8] = 0; /*0x1005cb99f*/
  __dst[9] = 0; /*0x1005cb9aa*/
  __dst[10] = 1; /*0x1005cb9b5*/
  __dst[11] = 0; /*0x1005cb9c0*/
  __dst[12] = 0; /*0x1005cb9cb*/
  __dst[13] = 1; /*0x1005cb9d6*/
  __dst[14] = 0; /*0x1005cb9e1*/
  __dst[15] = 0; /*0x1005cb9ec*/
  __dst[16] = 8; /*0x1005cb9f7*/
  __dst[18] = 0; /*0x1005cba02*/
  __dst[17] = 0; /*0x1005cba0d*/
  __dst[19] = 1; /*0x1005cba18*/
  __dst[20] = 0; /*0x1005cba23*/
  __dst[24] = -1; /*0x1005cba36*/
  memset(&__dst[25], 0, 32); /*0x1005cba41*/
  __dst[21] = 0x8000000000000000LL; /*0x1005cba62*/
LABEL_55:
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v123, &__dst[9]); /*0x1005cba69*/
  if ( __dst[0] ) /*0x1005cba86*/
    a4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], __dst[0], 1); /*0x1005cba94*/
  __dst[0] = v147; /*0x1005cba9d*/
  __dst[1] = v35; /*0x1005cbaa4*/
  __dst[2] = v36; /*0x1005cbaab*/
  v122[2] = v149[2]; /*0x1005cbaba*/
  v55 = *v149; /*0x1005cbac1*/
  v122[1] = v149[1]; /*0x1005cbac8*/
  v122[0] = v55; /*0x1005cbacf*/
  if ( __dst[3] ) /*0x1005cbae7*/
    a4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[4], __dst[3], 1); /*0x1005cbaf5*/
  __dst[5] = v122[2]; /*0x1005cbb01*/
  __dst[4] = v122[1]; /*0x1005cbb13*/
  __dst[3] = v122[0]; /*0x1005cbb17*/
  v122[2] = v149[5]; /*0x1005cbb22*/
  v56 = v149[3]; /*0x1005cbb29*/
  v122[1] = v149[4]; /*0x1005cbb31*/
  v122[0] = v56; /*0x1005cbb38*/
  if ( __dst[6] ) /*0x1005cbb50*/
    a4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[7], __dst[6], 1); /*0x1005cbb5e*/
  __dst[8] = v122[2]; /*0x1005cbb6a*/
  __dst[7] = v122[1]; /*0x1005cbb7c*/
  __dst[6] = v122[0]; /*0x1005cbb80*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v122, v116); /*0x1005cbb96*/
  if ( __dst[12] ) /*0x1005cbbac*/
    a4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[13], __dst[12], 1); /*0x1005cbbba*/
  __dst[14] = v122[2]; /*0x1005cbbc6*/
  __dst[13] = v122[1]; /*0x1005cbbd8*/
  __dst[12] = v122[0]; /*0x1005cbbdc*/
  BYTE6(__dst[28]) = v150; /*0x1005cbbe3*/
  HIBYTE(__dst[28]) = *((_BYTE *)v149 + 170); /*0x1005cbbf1*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h68c58a439707a4f3(v122, &v128); /*0x1005cbc04*/
  v57 = __dst[17]; /*0x1005cbc09*/
  if ( __dst[17] ) /*0x1005cbc13*/
  {
    v58 = (_QWORD *)(__dst[16] + 8LL); /*0x1005cbc1c*/
    do /*0x1005cbc37*/
    {
      v59 = *(v58 - 1); /*0x1005cbc39*/
      if ( v59 ) /*0x1005cbc40*/
        a4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v58, v59, 1); /*0x1005cbc4a*/
      v58 += 4; /*0x1005cbc30*/
      --v57; /*0x1005cbc34*/
    }
    while ( v57 ); /*0x1005cbc37*/
  }
  v60 = v39; /*0x1005cbc51*/
  if ( __dst[15] ) /*0x1005cbc65*/
    a4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[16], 32LL * __dst[15], 8); /*0x1005cbc77*/
  __dst[17] = v122[2]; /*0x1005cbc83*/
  __dst[16] = v122[1]; /*0x1005cbc95*/
  v61 = v149[18]; /*0x1005cbc9d*/
  v62 = 1; /*0x1005cbcb3*/
  if ( v61 != 0x8000000000000000LL ) /*0x1005cbcb9*/
    v62 = v149[19]; /*0x1005cbcb9*/
  __dst[15] = v122[0]; /*0x1005cbcc1*/
  v63 = v149[20]; /*0x1005cbcc4*/
  if ( v61 == 0x8000000000000000LL ) /*0x1005cbccb*/
  {
    v63 = 0; /*0x1005cbccb*/
    v61 = 0; /*0x1005cbccf*/
  }
  if ( __dst[18] ) /*0x1005cbcdd*/
    a4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[19], __dst[18], 1); /*0x1005cbceb*/
  __dst[18] = v61; /*0x1005cbcf0*/
  __dst[19] = v62; /*0x1005cbcf7*/
  __dst[20] = v63; /*0x1005cbcfe*/
  BYTE5(__dst[28]) = *((_BYTE *)v149 + 168); /*0x1005cbd10*/
  __dst[27] = v137; /*0x1005cbd1a*/
  if ( __dst[26] ) /*0x1005cbd29*/
  {
    v64 = v60; /*0x1005cbd37*/
    if ( v133 ) /*0x1005cbd3a*/
      goto LABEL_78; /*0x1005cbd3a*/
LABEL_84:
    if ( __dst[9] ) /*0x1005cbe1e*/
      a4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[10], __dst[9], 1); /*0x1005cbe2c*/
    __dst[11] = v125; /*0x1005cbe3f*/
    __dst[10] = v124; /*0x1005cbe51*/
    __dst[9] = v123; /*0x1005cbe55*/
    v65 = 0; /*0x1005cbe58*/
    if ( v64 ) /*0x1005cbe60*/
      goto LABEL_81; /*0x1005cbe60*/
LABEL_87:
    _$LT$codexmate_lib..core..relay..models..RelayProvider$u20$as$u20$core..clone..Clone$GT$::clone::h4cf37ba944ee5db7( /*0x1005cbe66*/
      v122,
      __dst);
    v67 = v112; /*0x1005cbe79*/
    if ( v112 == v110 ) /*0x1005cbe87*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h268242bfb87af67e(&v110, a4); /*0x1005cbe90*/
    memcpy((void *)(v111 + 232 * v67), v122, 0xE8u); /*0x1005cbeaf*/
    v112 = v67 + 1; /*0x1005cbeb7*/
    goto LABEL_90; /*0x1005cbeb7*/
  }
  __dst[26] = v137; /*0x1005cbdfc*/
  v64 = v60; /*0x1005cbe0b*/
  if ( !v133 ) /*0x1005cbe0e*/
    goto LABEL_84; /*0x1005cbe0e*/
LABEL_78:
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v122, &v131); /*0x1005cbd40*/
  if ( __dst[9] ) /*0x1005cbd62*/
    a4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[10], __dst[9], 1); /*0x1005cbd70*/
  __dst[11] = v122[2]; /*0x1005cbd83*/
  __dst[10] = v122[1]; /*0x1005cbd95*/
  __dst[9] = v122[0]; /*0x1005cbd99*/
  v65 = 1; /*0x1005cbd9c*/
  if ( !v64 ) /*0x1005cbda4*/
    goto LABEL_87; /*0x1005cbda4*/
LABEL_81:
  _$LT$codexmate_lib..core..relay..models..RelayProvider$u20$as$u20$core..clone..Clone$GT$::clone::h4cf37ba944ee5db7( /*0x1005cbdaa*/
    v122,
    __dst);
  if ( v29 >= v112 ) /*0x1005cbdc7*/
    core::panicking::panic_bounds_check::h56740b1198b22635(v29, v112, &off_101534510); /*0x1005cc77d*/
  v66 = (void *)(v111 + 232 * v29); /*0x1005cbdd4*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::h355c754b2c7bc68c(v66); /*0x1005cbdde*/
  memcpy(v66, v122, 0xE8u); /*0x1005cbdf2*/
LABEL_90:
  memcpy(v109, __dst, sizeof(v109)); /*0x1005cbebe*/
  if ( v65 && v123 ) /*0x1005cbee5*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v124, v123, 1); /*0x1005cbef3*/
LABEL_93:
  _$LT$codexmate_lib..core..relay..models..RelayProvider$u20$as$u20$core..clone..Clone$GT$::clone::h4cf37ba944ee5db7( /*0x1005cbef8*/
    __dst,
    v109);
  if ( v133 ) /*0x1005cbf18*/
  {
    codexmate_lib::core::relay::keychain::write_key_file::h5b927cde006c7475( /*0x1005cbf52*/
      v115,
      *(_QWORD *)(*v136 + 600LL),
      *(_QWORD *)(*v136 + 608LL),
      __dst[1],
      __dst[2],
      v132,
      v133);
    if ( v115[0] != 0x8000000000000000LL ) /*0x1005cbf68*/
    {
      v143 = v115[2]; /*0x1005cc178*/
      v142 = v115[1]; /*0x1005cc18a*/
      v141 = v115[0]; /*0x1005cc18e*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 ) /*0x1005cc19f*/
      {
        v121[0] = __dst; /*0x1005cc1a5*/
        v121[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1005cc1b3*/
        v121[2] = &v141; /*0x1005cc1be*/
        v121[3] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1005cc1c5*/
        v122[6] = 1; /*0x1005cc1cc*/
        v122[7] = "codexmate_lib::core::relay::manager"; /*0x1005cc1de*/
        v122[8] = 35; /*0x1005cc1e5*/
        v122[10] = &unk_10122CA2D; /*0x1005cc1f7*/
        v122[11] = v121; /*0x1005cc205*/
        v122[0] = 0; /*0x1005cc20c*/
        v122[1] = "codexmate_lib::core::relay::manager"; /*0x1005cc217*/
        v122[2] = 35; /*0x1005cc21e*/
        v122[3] = 0; /*0x1005cc229*/
        v122[4] = "src/core/relay/manager.rs"; /*0x1005cc23b*/
        v122[5] = 25; /*0x1005cc242*/
        v122[9] = 0x15300000001LL; /*0x1005cc257*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v148, v122); /*0x1005cc269*/
      }
      v122[0] = &v141; /*0x1005cc272*/
      v122[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1005cc280*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v114, &unk_10122CA76, v122); /*0x1005cc29c*/
      v81 = v145; /*0x1005cc2a8*/
      *((_QWORD *)v145 + 4) = v114[2]; /*0x1005cc2ac*/
      v82 = v114[0]; /*0x1005cc2b0*/
      v81[3] = v114[1]; /*0x1005cc2be*/
      v81[2] = v82; /*0x1005cc2c2*/
      v81[1] = 9; /*0x1005cc2c6*/
      *v81 = 0x8000000000000000LL; /*0x1005cc2d8*/
      if ( v141 ) /*0x1005cc2e2*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v142, v141, 1); /*0x1005cc2ed*/
      goto LABEL_120; /*0x1005cc2f2*/
    }
    BYTE4(__dst[28]) = 1; /*0x1005cbf6e*/
  }
  if ( v112 ) /*0x1005cbf7c*/
  {
    v68 = v111; /*0x1005cbf82*/
    v69 = 232 * v112; /*0x1005cbf89*/
    v70 = (const void *)__dst[1]; /*0x1005cbf90*/
    v71 = __dst[2]; /*0x1005cbf97*/
    v72 = 0; /*0x1005cbf9e*/
    while ( *(_QWORD *)(v68 + v72 + 16) != v71 || memcmp(*(const void **)(v68 + v72 + 8), v70, v71) ) /*0x1005cbfd5*/
    {
      v72 += 232; /*0x1005cbfb0*/
      if ( v69 == v72 ) /*0x1005cbfba*/
        goto LABEL_104; /*0x1005cbfba*/
    }
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v122, &__dst[9]); /*0x1005cbfe5*/
    v73 = *(_QWORD *)(v68 + v72 + 72); /*0x1005cbfef*/
    if ( v73 ) /*0x1005cbff7*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v68 + v72 + 80), v73, 1); /*0x1005cc003*/
    *(_QWORD *)(v68 + v72 + 88) = v122[2]; /*0x1005cc00f*/
    v74 = v122[0]; /*0x1005cc013*/
    *(_QWORD *)(v68 + v72 + 80) = v122[1]; /*0x1005cc021*/
    *(_QWORD *)(v68 + v72 + 72) = v74; /*0x1005cc025*/
    *(_BYTE *)(v68 + v72 + 228) = BYTE4(__dst[28]); /*0x1005cc02c*/
  }
LABEL_104:
  _$LT$codexmate_lib..core..relay..models..RelayState$u20$as$u20$core..clone..Clone$GT$::clone::hdc194ad118c67832( /*0x1005cc034*/
    v122,
    &v110);
  codexmate_lib::core::relay::manager::RelayManager::persist::he97af7bc6e4923b9(v121, v136, v122); /*0x1005cc05c*/
  if ( LODWORD(v121[0]) != 10 ) /*0x1005cc068*/
  {
    v80 = v145; /*0x1005cc155*/
    qmemcpy((char *)v145 + 8, v121, 0x60u); /*0x1005cc169*/
LABEL_119:
    *v80 = 0x8000000000000000LL; /*0x1005cc30f*/
LABEL_120:
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::h355c754b2c7bc68c(__dst); /*0x1005cc31c*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::h355c754b2c7bc68c(v109); /*0x1005cc32f*/
    v28 = 0; /*0x1005cc334*/
    goto LABEL_121; /*0x1005cc334*/
  }
  codexmate_lib::core::relay::manager::RelayManager::sync_codex_config_with_outcome::h7744b56677bf50f9(v122, v136); /*0x1005cc07c*/
  v75 = v122[0]; /*0x1005cc081*/
  if ( v122[0] != 10 ) /*0x1005cc08c*/
  {
    v80 = v145; /*0x1005cc2fb*/
    qmemcpy((char *)v145 + 16, &v122[1], 0x58u); /*0x1005cc308*/
    v80[1] = v75; /*0x1005cc30b*/
    goto LABEL_119; /*0x1005cc30b*/
  }
  _$LT$codexmate_lib..core..relay..models..RelayProvider$u20$as$u20$core..clone..Clone$GT$::clone::h4cf37ba944ee5db7( /*0x1005cc0a0*/
    v107,
    __dst);
  v107[11] = 0; /*0x1005cc0a5*/
  memcpy(v145, v107, 0xE8u); /*0x1005cc0c0*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::h355c754b2c7bc68c(__dst); /*0x1005cc0cc*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::h355c754b2c7bc68c(v109); /*0x1005cc0d8*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayState$GT$::ha31523a10c4e8151(&v110); /*0x1005cc0e7*/
  if ( v134 ) /*0x1005cc0f6*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v135, v134, 1); /*0x1005cc104*/
  v76 = v129; /*0x1005cc109*/
  v77 = v130; /*0x1005cc110*/
  if ( v130 ) /*0x1005cc11a*/
  {
    v78 = (_QWORD *)(v129 + 8); /*0x1005cc120*/
    do /*0x1005cc137*/
    {
      v79 = *(v78 - 1); /*0x1005cc13d*/
      if ( v79 ) /*0x1005cc144*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v78, v79, 1); /*0x1005cc14e*/
      v78 += 4; /*0x1005cc130*/
      --v77; /*0x1005cc134*/
    }
    while ( v77 ); /*0x1005cc137*/
  }
  if ( v128 ) /*0x1005cc55a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, 32 * v128, 8); /*0x1005cc568*/
  if ( v131 ) /*0x1005cc577*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v132, v131, 1); /*0x1005cc585*/
  v99 = *v138; /*0x1005cc591*/
  if ( *v138 != 0x8000000000000000LL && v99 ) /*0x1005cc5a6*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v149[13], v99, 1); /*0x1005cc5b5*/
  v100 = v149; /*0x1005cc5c7*/
  if ( *v126 ) /*0x1005cc5c1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v149[7], *v126, 1); /*0x1005cc5d6*/
  v101 = v100[9]; /*0x1005cc5db*/
  if ( v101 ) /*0x1005cc5e2*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v100[10], v101, 1); /*0x1005cc5ed*/
  v102 = *v144; /*0x1005cc5f6*/
  if ( *v144 != 0x8000000000000000LL ) /*0x1005cc606*/
  {
    v103 = v149[17]; /*0x1005cc60c*/
    if ( v103 ) /*0x1005cc616*/
    {
      v104 = (_QWORD *)(v149[16] + 8); /*0x1005cc623*/
      do /*0x1005cc637*/
      {
        v105 = *(v104 - 1); /*0x1005cc639*/
        if ( v105 ) /*0x1005cc640*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v104, v105, 1); /*0x1005cc64a*/
        v104 += 4; /*0x1005cc630*/
        --v103; /*0x1005cc634*/
      }
      while ( v103 ); /*0x1005cc637*/
      v102 = *v144; /*0x1005cc655*/
    }
    if ( v102 ) /*0x1005cc65b*/
    {
      v97 = v149[16]; /*0x1005cc661*/
      v96 = 32 * v102; /*0x1005cc668*/
      v98 = 8; /*0x1005cc66c*/
      goto LABEL_157; /*0x1005cc671*/
    }
  }
  return v145; /*0x1005cc67a*/
}