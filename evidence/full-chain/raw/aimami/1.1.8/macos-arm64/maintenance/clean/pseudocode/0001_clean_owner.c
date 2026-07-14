_QWORD *__fastcall codexmate_lib::core::repository::Repository::clean::h2c36c5eabc800af5(_QWORD *a1, __int64 a2)
{
  __int64 v2; // r13
  __int64 v3; // r14
  __int64 v4; // r15
  __int64 v5; // rbx
  int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // r14
  __int64 v16; // r15
  __int64 v17; // rbx
  __int64 v18; // rsi
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // rax
  void *v22; // rbx
  __int64 v23; // r14
  __int64 v24; // r12
  __int64 v25; // rbx
  __int64 v26; // r14
  __int64 v27; // rsi
  __int64 v28; // rbx
  __int64 v29; // r15
  __int64 v30; // rbx
  __int64 v31; // r14
  __int64 v32; // rax
  int v33; // r12d
  void *v34; // rbx
  __int64 v35; // r14
  __int64 v36; // r12
  __int64 v37; // rbx
  __int64 v38; // r14
  __int64 v39; // rsi
  __int64 v40; // r14
  __int64 v41; // rbx
  __int64 v42; // r15
  __int64 v43; // rsi
  __int64 v44; // r12
  __int64 v45; // r13
  const void *v46; // r14
  size_t v47; // r15
  __int64 v48; // rbx
  volatile signed __int64 *v49; // rax
  __int64 v50; // r14
  int v51; // edx
  __int64 v52; // rax
  __int64 v53; // rbx
  __int64 v54; // r14
  volatile signed __int64 *v55; // r15
  int v57; // edx
  volatile signed __int64 *v58; // rax
  _QWORD *v59; // rax
  volatile signed __int64 *v60; // rbx
  volatile signed __int64 *v61; // r14
  __int64 v62; // rsi
  __int64 v63; // rsi
  _QWORD *v64; // rax
  volatile signed __int64 *v65; // rbx
  volatile signed __int64 *v66; // r14
  __int64 v67; // rsi
  __int64 v68; // rsi
  __int64 v69; // rbx
  __int64 v70; // r14
  const __m128i *v71; // r15
  const __m128i *v73; // r12
  int v74; // r13d
  __int64 v75; // rax
  __int64 v76; // rsi
  unsigned __int64 v77; // rax
  __int64 v78; // rbx
  __int64 v80; // r14
  __int64 v81; // rbx
  __int64 v82; // r15
  __int64 v83; // rsi
  unsigned __int64 v84; // r12
  char *v85; // rbx
  __int64 v86; // rbx
  _QWORD __src[132]; // [rsp+8h] [rbp-1258h] BYREF
  _QWORD v88[133]; // [rsp+428h] [rbp-E38h] BYREF
  __int64 v89; // [rsp+850h] [rbp-A10h]
  __int64 v90; // [rsp+C78h] [rbp-5E8h]
  char v91; // [rsp+C80h] [rbp-5E0h]
  volatile signed __int64 *__dst[132]; // [rsp+C88h] [rbp-5D8h] BYREF
  int v93; // [rsp+10A8h] [rbp-1B8h] BYREF
  _BYTE v94[80]; // [rsp+10B0h] [rbp-1B0h] BYREF
  int v95; // [rsp+1108h] [rbp-158h] BYREF
  volatile signed __int64 *v96; // [rsp+1110h] [rbp-150h]
  volatile signed __int64 *v97; // [rsp+1118h] [rbp-148h]
  volatile signed __int64 *v98; // [rsp+1120h] [rbp-140h]
  volatile signed __int64 *v99; // [rsp+1128h] [rbp-138h]
  volatile signed __int64 *v100; // [rsp+1130h] [rbp-130h]
  const __m128i *v101; // [rsp+1168h] [rbp-F8h] BYREF
  __int64 v102; // [rsp+1170h] [rbp-F0h]
  __int64 v103; // [rsp+1178h] [rbp-E8h]
  __int64 v104; // [rsp+1180h] [rbp-E0h]
  __int64 v105; // [rsp+1188h] [rbp-D8h]
  __int64 v106; // [rsp+1190h] [rbp-D0h]
  _QWORD v107[10]; // [rsp+1198h] [rbp-C8h] BYREF
  __int64 v108; // [rsp+11E8h] [rbp-78h]
  __int64 v109; // [rsp+11F0h] [rbp-70h]
  __int64 v110; // [rsp+11F8h] [rbp-68h] BYREF
  void *v111; // [rsp+1200h] [rbp-60h]
  size_t v112; // [rsp+1208h] [rbp-58h]
  _QWORD *v113; // [rsp+1210h] [rbp-50h]
  __int64 v114; // [rsp+1218h] [rbp-48h]
  char v115; // [rsp+1220h] [rbp-40h]
  unsigned __int64 v116; // [rsp+1228h] [rbp-38h]
  __int64 v117; // [rsp+1230h] [rbp-30h]

  __src[70] = 0; /*0x100536314*/
  v2 = a2; /*0x100536323*/
  v113 = a1; /*0x100536326*/
  codexmate_lib::core::repository::Repository::load_registry::h7984350630216c09(&v93); /*0x10053633b*/
  if ( v93 == 10 ) /*0x100536347*/
  {
    qmemcpy(v107, v94, sizeof(v107)); /*0x10053635c*/
    v116 = v107[2]; /*0x100536366*/
    if ( v107[2] ) /*0x10053636d*/
    {
      v3 = v107[1]; /*0x100536373*/
      v4 = 0; /*0x10053637a*/
      v5 = v107[1]; /*0x10053637d*/
      while ( (unsigned __int8)alloc::vec::Vec$LT$T$C$A$GT$::retain::_$u7b$$u7b$closure$u7d$$u7d$::h87f75c5d58b66ef7(v5) ) /*0x10053638a*/
      {
        ++v4; /*0x100536390*/
        v5 += 360; /*0x100536393*/
        if ( v116 == v4 ) /*0x10053639e*/
          goto LABEL_11; /*0x10053639e*/
      }
      v84 = v4 + 1; /*0x100536eba*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h3ff0f72072d7b435(v5); /*0x100536ec1*/
      if ( v4 + 1 < v116 ) /*0x100536eca*/
      {
        v85 = (char *)(v5 + 360); /*0x100536ecc*/
        do /*0x100536efd*/
        {
          if ( (unsigned __int8)alloc::vec::Vec$LT$T$C$A$GT$::retain::_$u7b$$u7b$closure$u7d$$u7d$::h87f75c5d58b66ef7(v85) ) /*0x100536f02*/
            memcpy((void *)(v3 + 360 * v4++), v85, 0x168u); /*0x100536ee7*/
          else
            core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryItem$GT$::h3ff0f72072d7b435(v85); /*0x100536f0e*/
          ++v84; /*0x100536eef*/
          v85 += 360; /*0x100536ef2*/
        }
        while ( v84 < v116 ); /*0x100536efd*/
      }
      v107[2] = v4; /*0x100536f15*/
      goto LABEL_12; /*0x100536f1c*/
    }
    v116 = 0; /*0x100536448*/
  }
  else
  {
    __dst[0] = (volatile signed __int64 *)std::time::SystemTime::now::h1fe79e41f9d5677f(); /*0x1005363aa*/
    LODWORD(__dst[1]) = v6; /*0x1005363b1*/
    std::time::SystemTime::duration_since::had059553cab94f96(v88, __dst, 0, 0); /*0x1005363c9*/
    v116 = 0; /*0x1005363ce*/
    v7 = 0; /*0x1005363dd*/
    if ( !LOBYTE(v88[0]) ) /*0x1005363e2*/
      v7 = v88[1]; /*0x1005363e4*/
    HIDWORD(v107[8]) = 2; /*0x1005363eb*/
    v107[6] = v7; /*0x1005363f5*/
    v107[3] = 0x8000000000000000LL; /*0x1005363fc*/
    v107[0] = 0; /*0x100536403*/
    v107[1] = 8; /*0x10053640e*/
    v107[2] = 0; /*0x100536419*/
    v107[7] = 0; /*0x100536424*/
    LOBYTE(v107[8]) = 0; /*0x10053642f*/
    LOBYTE(v107[9]) = 1; /*0x100536436*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(&v93); /*0x100536441*/
  }
LABEL_11:
  v4 = v107[2]; /*0x100536450*/
LABEL_12:
  v8 = v107[1]; /*0x100536457*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100536465*/
  v10 = v9; /*0x100536467*/
  if ( *(_BYTE *)(v9 + 16) == 1 ) /*0x10053646e*/
  {
    v11 = *(_QWORD *)v9; /*0x100536474*/
    v12 = *(_QWORD *)(v10 + 8); /*0x100536477*/
  }
  else
  {
    v11 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x100536f21*/
    *(_QWORD *)v10 = v11; /*0x100536f26*/
    *(_QWORD *)(v10 + 8) = v12; /*0x100536f29*/
    *(_BYTE *)(v10 + 16) = 1; /*0x100536f2d*/
  }
  *(_QWORD *)v10 = v11 + 1; /*0x10053647f*/
  memset(&v88[1], 0, 24); /*0x1005364a5*/
  v88[0] = anon_daf50d54a2d3ecbdf54de6a8568b21ab_88; /*0x1005364b3*/
  v88[4] = v11; /*0x1005364ba*/
  v88[5] = v12; /*0x1005364c1*/
  if ( v4 ) /*0x1005364cb*/
  {
    hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::h6cca294c8f1b4c57(v88, v4, &v88[4], 1); /*0x100536f4d*/
    v86 = v8 + 128; /*0x100536f52*/
    do /*0x100536f84*/
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__dst, v86); /*0x100536f6a*/
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h1d31b66c0e1d63b4(v88, __dst); /*0x100536f75*/
      v86 += 360; /*0x100536f7a*/
      --v4; /*0x100536f81*/
    }
    while ( v4 ); /*0x100536f84*/
  }
  v106 = v88[5]; /*0x1005364d8*/
  v105 = v88[4]; /*0x1005364e6*/
  v104 = v88[3]; /*0x1005364f4*/
  v103 = v88[2]; /*0x100536502*/
  v102 = v88[1]; /*0x100536517*/
  v101 = (const __m128i *)v88[0]; /*0x10053651e*/
  v13 = *(_QWORD *)(a2 + 272); /*0x100536525*/
  v14 = *(_QWORD *)(a2 + 280); /*0x10053652c*/
  std::sys::fs::metadata::h32fa16d3052ea535(v88, v13, v14); /*0x100536540*/
  v108 = a2; /*0x10053654c*/
  if ( LOBYTE(v88[0]) ) /*0x100536550*/
  {
    LODWORD(v117) = 0; /*0x10053655e*/
    if ( (v88[1] & 3) == 1 ) /*0x100536568*/
    {
      v15 = v88[1] - 1LL; /*0x10053656e*/
      v16 = *(_QWORD *)(v88[1] - 1LL); /*0x100536572*/
      v17 = *(_QWORD *)(v88[1] + 7LL); /*0x100536576*/
      if ( *(_QWORD *)v17 ) /*0x10053657a*/
        (*(void (__fastcall **)(__int64))v17)(v16); /*0x100536585*/
      v18 = *(_QWORD *)(v17 + 8); /*0x100536587*/
      if ( v18 ) /*0x10053658e*/
      {
        v19 = *(_QWORD *)(v17 + 16); /*0x100536594*/
        v20 = v16; /*0x100536598*/
        goto LABEL_43; /*0x10053659b*/
      }
      goto LABEL_44; /*0x10053658e*/
    }
    goto LABEL_45; /*0x100536568*/
  }
  std::sys::fs::read_dir::h768dda1fe4336014(v88, v13, v14); /*0x1005365ad*/
  v21 = v88[0]; /*0x1005365b9*/
  v114 = v88[0]; /*0x1005365c0*/
  v115 = v88[1]; /*0x1005365c4*/
  LODWORD(v117) = 0; /*0x1005365c7*/
  if ( LOBYTE(v88[1]) == 2 ) /*0x1005365d1*/
    goto LABEL_38; /*0x1005365d1*/
  v88[0] = 0; /*0x1005365d7*/
  v89 = 0; /*0x1005365e2*/
  v90 = v21; /*0x1005365ed*/
  v91 = v88[1]; /*0x1005365f4*/
  for ( LODWORD(v117) = 0; ; LODWORD(v117) = v117 + 1 ) /*0x1005365fa*/
  {
    _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he040380398a2fb7a( /*0x100536629*/
      __src,
      v88);
    if ( !__src[0] ) /*0x100536636*/
      break; /*0x100536636*/
    memcpy(__dst, __src, sizeof(__dst)); /*0x100536647*/
    std::fs::DirEntry::path::h1f82b6d8ef0530d7(&v110, __dst); /*0x100536653*/
    v22 = v111; /*0x100536658*/
    v23 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v111, v112); /*0x100536668*/
    if ( v110 ) /*0x100536672*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v110, 1); /*0x10053667c*/
    if ( (v23 & 3) != 1 ) /*0x10053668a*/
    {
      if ( _InterlockedDecrement64(__dst[0]) ) /*0x100536693*/
        continue; /*0x100536697*/
LABEL_29:
      alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(__dst); /*0x100536699*/
      continue; /*0x1005366a1*/
    }
    v24 = v23 - 1; /*0x1005366a9*/
    v25 = *(_QWORD *)(v23 - 1); /*0x1005366ac*/
    v26 = *(_QWORD *)(v23 + 7); /*0x1005366b0*/
    if ( *(_QWORD *)v26 ) /*0x1005366b4*/
      (*(void (__fastcall **)(__int64))v26)(v25); /*0x1005366bf*/
    v27 = *(_QWORD *)(v26 + 8); /*0x1005366c1*/
    if ( v27 ) /*0x1005366c8*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v27, *(_QWORD *)(v26 + 16)); /*0x1005366d1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, 24, 8); /*0x1005366e3*/
    if ( !_InterlockedDecrement64(__dst[0]) ) /*0x1005366f6*/
      goto LABEL_29; /*0x1005366fa*/
  }
  core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$std..fs..ReadDir$GT$$GT$::he15cef2cd682728c(v88); /*0x100536709*/
  v2 = v108; /*0x100536712*/
  if ( v115 == 2 ) /*0x100536716*/
  {
    v21 = v114; /*0x100536718*/
LABEL_38:
    if ( (v21 & 3) == 1 ) /*0x100536724*/
    {
      v15 = v21 - 1; /*0x100536726*/
      v28 = *(_QWORD *)(v21 - 1); /*0x10053672a*/
      v29 = *(_QWORD *)(v21 + 7); /*0x10053672e*/
      if ( *(_QWORD *)v29 ) /*0x100536732*/
        (*(void (__fastcall **)(__int64))v29)(v28); /*0x10053673d*/
      v18 = *(_QWORD *)(v29 + 8); /*0x10053673f*/
      if ( v18 ) /*0x100536746*/
      {
        v19 = *(_QWORD *)(v29 + 16); /*0x100536748*/
        v20 = v28; /*0x10053674c*/
LABEL_43:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v18, v19); /*0x10053674f*/
      }
LABEL_44:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, 24, 8); /*0x100536754*/
    }
  }
LABEL_45:
  v30 = *(_QWORD *)(v2 + 296); /*0x100536766*/
  v31 = *(_QWORD *)(v2 + 304); /*0x10053676d*/
  std::sys::fs::metadata::h32fa16d3052ea535(v88, v30, v31); /*0x100536781*/
  if ( LOBYTE(v88[0]) ) /*0x10053678d*/
  {
    if ( (v88[1] & 3) == 1 ) /*0x10053679e*/
    {
      v80 = v88[1] - 1LL; /*0x100536e6e*/
      v81 = *(_QWORD *)(v88[1] - 1LL); /*0x100536e72*/
      v82 = *(_QWORD *)(v88[1] + 7LL); /*0x100536e76*/
      if ( *(_QWORD *)v82 ) /*0x100536e7a*/
        (*(void (__fastcall **)(__int64))v82)(v81); /*0x100536e85*/
      v83 = *(_QWORD *)(v82 + 8); /*0x100536e87*/
      if ( v83 ) /*0x100536e8e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v81, v83, *(_QWORD *)(v82 + 16)); /*0x100536e97*/
      HIDWORD(v117) = 0; /*0x100536e9c*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, 24, 8); /*0x100536eb0*/
    }
    else
    {
      HIDWORD(v117) = 0; /*0x1005367a4*/
    }
    goto LABEL_72; /*0x1005367ab*/
  }
  std::sys::fs::read_dir::h768dda1fe4336014(v88, v30, v31); /*0x1005367bd*/
  v32 = v88[0]; /*0x1005367c9*/
  v114 = v88[0]; /*0x1005367d0*/
  v115 = v88[1]; /*0x1005367d4*/
  v33 = 0; /*0x1005367d7*/
  if ( LOBYTE(v88[1]) == 2 ) /*0x1005367dd*/
  {
LABEL_65:
    if ( (v32 & 3) == 1 ) /*0x100536925*/
    {
      v40 = v32 - 1; /*0x100536927*/
      v41 = *(_QWORD *)(v32 - 1); /*0x10053692b*/
      v42 = *(_QWORD *)(v32 + 7); /*0x10053692f*/
      if ( *(_QWORD *)v42 ) /*0x100536933*/
        (*(void (__fastcall **)(__int64))v42)(v41); /*0x10053693e*/
      v43 = *(_QWORD *)(v42 + 8); /*0x100536940*/
      if ( v43 ) /*0x100536947*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, v43, *(_QWORD *)(v42 + 16)); /*0x100536950*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, 24, 8); /*0x100536962*/
    }
    goto LABEL_71; /*0x100536962*/
  }
  v88[0] = 0; /*0x1005367e3*/
  v89 = 0; /*0x1005367ee*/
  v90 = v32; /*0x1005367f9*/
  v91 = v88[1]; /*0x100536800*/
  v33 = 0; /*0x100536806*/
  while ( 2 ) /*0x100536823*/
  {
    _$LT$core..iter..adapters..flatten..FlattenCompat$LT$I$C$U$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he040380398a2fb7a( /*0x100536823*/
      __src,
      v88);
    if ( __src[0] ) /*0x10053683a*/
    {
      memcpy(__dst, __src, sizeof(__dst)); /*0x10053684b*/
      std::fs::DirEntry::path::h1f82b6d8ef0530d7(&v110, __dst); /*0x100536857*/
      v34 = v111; /*0x10053685c*/
      v35 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v111, v112); /*0x10053686c*/
      if ( v110 ) /*0x100536876*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v110, 1); /*0x100536880*/
      if ( (v35 & 3) == 1 ) /*0x10053688e*/
      {
        HIDWORD(v117) = v33; /*0x1005368aa*/
        v36 = v35 - 1; /*0x1005368b1*/
        v37 = *(_QWORD *)(v35 - 1); /*0x1005368b4*/
        v38 = *(_QWORD *)(v35 + 7); /*0x1005368b8*/
        if ( *(_QWORD *)v38 ) /*0x1005368bc*/
          (*(void (__fastcall **)(__int64))v38)(v37); /*0x1005368c7*/
        v39 = *(_QWORD *)(v38 + 8); /*0x1005368c9*/
        if ( v39 ) /*0x1005368d0*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v39, *(_QWORD *)(v38 + 16)); /*0x1005368d9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, 24, 8); /*0x1005368eb*/
        v33 = HIDWORD(v117); /*0x1005368f0*/
        if ( !_InterlockedDecrement64(__dst[0]) ) /*0x1005368fb*/
LABEL_56:
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h249d13c4a2ea6196(__dst); /*0x10053689d*/
      }
      else if ( !_InterlockedDecrement64(__dst[0]) ) /*0x100536897*/
      {
        goto LABEL_56; /*0x10053689b*/
      }
      ++v33; /*0x100536820*/
      continue; /*0x100536820*/
    }
    break;
  }
  core::ptr::drop_in_place$LT$core..iter..adapters..flatten..Flatten$LT$std..fs..ReadDir$GT$$GT$::he15cef2cd682728c(v88); /*0x10053690e*/
  if ( v115 == 2 ) /*0x100536917*/
  {
    v32 = v114; /*0x100536919*/
    goto LABEL_65; /*0x100536919*/
  }
LABEL_71:
  HIDWORD(v117) = v33; /*0x100536967*/
LABEL_72:
  v109 = v107[3]; /*0x10053696b*/
  if ( !v107[2] ) /*0x100536980*/
  {
LABEL_79:
    if ( v109 != 0x8000000000000000LL && v109 ) /*0x100536a05*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v107[4], v109, 1); /*0x100536a13*/
    goto LABEL_82; /*0x100536a13*/
  }
  if ( v109 == 0x8000000000000000LL ) /*0x100536990*/
  {
LABEL_82:
    v107[3] = 0x8000000000000000LL; /*0x100536a18*/
    goto LABEL_83; /*0x100536a18*/
  }
  v44 = v107[1]; /*0x100536996*/
  v45 = 360LL * v107[2]; /*0x10053699d*/
  v46 = (const void *)v107[4]; /*0x1005369a4*/
  v47 = v107[5]; /*0x1005369ab*/
  v48 = 0; /*0x1005369b2*/
  while ( *(_QWORD *)(v44 + v48 + 144) != v47 || memcmp(*(const void **)(v44 + v48 + 136), v46, v47) ) /*0x1005369eb*/
  {
    v48 += 360; /*0x1005369c0*/
    if ( v45 == v48 ) /*0x1005369ca*/
      goto LABEL_79; /*0x1005369ca*/
  }
LABEL_83:
  v49 = (volatile signed __int64 *)std::time::SystemTime::now::h1fe79e41f9d5677f(); /*0x100536a1f*/
  v50 = v108; /*0x100536a24*/
  __dst[0] = v49; /*0x100536a28*/
  LODWORD(__dst[1]) = v51; /*0x100536a2f*/
  std::time::SystemTime::duration_since::had059553cab94f96(v88, __dst, 0, 0); /*0x100536a47*/
  v52 = 0; /*0x100536a4c*/
  if ( !LOBYTE(v88[0]) ) /*0x100536a55*/
    v52 = v88[1]; /*0x100536a57*/
  v107[6] = v52; /*0x100536a5e*/
  codexmate_lib::core::repository::Repository::persist_registry::haf3cfbaf5a89afb4(v88, v50, v107, 0); /*0x100536a78*/
  if ( LODWORD(v88[0]) == 10 )
  {
    v53 = *(_QWORD *)(v50 + 416); /*0x100536a86*/
    v54 = *(_QWORD *)(v50 + 424); /*0x100536a8d*/
    codexmate_lib::core::quota_store::load::he744ac4ef03d474a(&v95, v53, v54); /*0x100536aa1*/
    if ( v95 == 10 ) /*0x100536aad*/
    {
      __dst[4] = v100; /*0x100536ab6*/
      __dst[3] = v99; /*0x100536ac4*/
      v55 = v98; /*0x100536acb*/
      __dst[2] = v98; /*0x100536ad2*/
      __dst[1] = v97; /*0x100536ae7*/
      __dst[0] = v96; /*0x100536aee*/
    }
    else
    {
      LODWORD(__dst[4]) = 1; /*0x100536b1a*/
      __dst[3] = nullptr; /*0x100536b24*/
      __dst[0] = nullptr; /*0x100536b2f*/
      __dst[1] = (volatile signed __int64 *)8; /*0x100536b3a*/
      __dst[2] = nullptr; /*0x100536b45*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(&v95); /*0x100536b57*/
      v55 = nullptr; /*0x100536b5c*/
    }
    alloc::vec::Vec$LT$T$C$A$GT$::retain::h40cdd47c79f2fe38(__dst, &v101); /*0x100536b6d*/
    if ( __dst[2] == v55
      || ((__src[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(),
           LODWORD(__src[1]) = v57,
           std::time::SystemTime::duration_since::had059553cab94f96(v88, __src, 0, 0),
           LOBYTE(v88[0]))
        ? (v58 = nullptr)
        : (v58 = (volatile signed __int64 *)v88[1]),
          __dst[3] = v58,
          codexmate_lib::core::quota_store::save::hf1c84fcccf34deb2(v88, v53, v54, __dst),
          LODWORD(v88[0]) == 10) )
    {
      __src[0] = v117; /*0x100536bfc*/
      LODWORD(__src[1]) = v116 - LODWORD(v107[2]); /*0x100536c0b*/
      codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h220e764405a9ae33(v88, __src); /*0x100536c1f*/
      v59 = v113; /*0x100536c24*/
      qmemcpy(v113 + 1, v88, 0x60u); /*0x100536c38*/
      *v59 = 0; /*0x100536c3b*/
      v60 = __dst[2]; /*0x100536c42*/
      if ( __dst[2] ) /*0x100536c4c*/
      {
        v61 = __dst[1] + 17; /*0x100536c59*/
        do /*0x100536c7a*/
        {
          v62 = *((_QWORD *)v61 - 1); /*0x100536c80*/
          if ( v62 ) /*0x100536c87*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v61, v62, 1); /*0x100536c91*/
          if ( *((_DWORD *)v61 - 14) != 2 ) /*0x100536c9b*/
          {
            v63 = *((_QWORD *)v61 - 5); /*0x100536c9d*/
            if ( v63 != 0x8000000000000000LL ) /*0x100536ca4*/
            {
              if ( v63 ) /*0x100536ca9*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v61 - 4), v63, 1); /*0x100536cb4*/
            }
          }
          v61 += 21; /*0x100536c70*/
          v60 = (volatile signed __int64 *)((char *)v60 - 1); /*0x100536c77*/
        }
        while ( v60 ); /*0x100536c7a*/
      }
    }
    else
    {
      v64 = v113; /*0x100536cbb*/
      qmemcpy(v113 + 1, v88, 0x60u); /*0x100536ccf*/
      *v64 = 1; /*0x100536cd2*/
      v65 = __dst[2]; /*0x100536cd9*/
      if ( __dst[2] ) /*0x100536ce3*/
      {
        v66 = __dst[1] + 17; /*0x100536cec*/
        do /*0x100536d0a*/
        {
          v67 = *((_QWORD *)v66 - 1); /*0x100536d0c*/
          if ( v67 ) /*0x100536d13*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v66, v67, 1); /*0x100536d1d*/
          if ( *((_DWORD *)v66 - 14) != 2 ) /*0x100536d27*/
          {
            v68 = *((_QWORD *)v66 - 5); /*0x100536d29*/
            if ( v68 != 0x8000000000000000LL ) /*0x100536d30*/
            {
              if ( v68 ) /*0x100536d35*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v66 - 4), v68, 1); /*0x100536d40*/
            }
          }
          v66 += 21; /*0x100536d00*/
          v65 = (volatile signed __int64 *)((char *)v65 - 1); /*0x100536d07*/
        }
        while ( v65 ); /*0x100536d0a*/
      }
    }
    HIDWORD(_RAX) = HIDWORD(__dst[0]); /*0x100536d47*/
    if ( __dst[0] ) /*0x100536d51*/
      HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc( /*0x100536d66*/
                                          __dst[1],
                                          168 * (__int64)__dst[0],
                                          8) >> 32;
  }
  else
  {
    _RAX = (unsigned __int64)v113; /*0x100536af7*/
    qmemcpy(v113 + 1, v88, 0x60u); /*0x100536b0b*/
    *(_QWORD *)_RAX = 1; /*0x100536b0e*/
  }
  v69 = v102; /*0x100536d6b*/
  if ( v102 ) /*0x100536d75*/
  {
    v70 = v104; /*0x100536d7b*/
    if ( v104 ) /*0x100536d85*/
    {
      v71 = v101; /*0x100536d8b*/
      _R13D = ~_mm_movemask_epi8(_mm_load_si128(v101)); /*0x100536d9c*/
      v73 = v101 + 1; /*0x100536d9f*/
      do /*0x100536dc0*/
      {
        if ( !(_WORD)_R13D ) /*0x100536dc6*/
        {
          do /*0x100536ded*/
          {
            v74 = _mm_movemask_epi8(_mm_load_si128(v73)); /*0x100536dd6*/
            v71 -= 24; /*0x100536ddb*/
            ++v73; /*0x100536de2*/
          }
          while ( v74 == 0xFFFF ); /*0x100536ded*/
          _R13D = ~v74; /*0x100536def*/
        }
        __asm { tzcnt eax, r13d } /*0x100536df2*/
        v75 = -3LL * _RAX; /*0x100536dfa*/
        v76 = *((_QWORD *)&v71[-1] + v75 - 1); /*0x100536dfe*/
        if ( v76 ) /*0x100536e06*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v71[-1].i64[v75], v76, 1); /*0x100536e15*/
        --v70; /*0x100536db0*/
        _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100536db7*/
        _R13D &= _R13D - 1; /*0x100536dba*/
      }
      while ( v70 ); /*0x100536dc0*/
    }
    v77 = (24 * v69 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x100536e28*/
    v78 = v77 + v69 + 17; /*0x100536e2f*/
    if ( v78 ) /*0x100536e33*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v101 - v77, v78, 16); /*0x100536e47*/
  }
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..RegistryFile$GT$::he97ebad6e911fbd0(v107); /*0x100536e53*/
  return v113; /*0x100536e5c*/
}