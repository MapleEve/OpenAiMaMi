// mac 1.2.2 NEW codexmate_lib4core12debug_bundle19threads_table_sh 0x1003fa4f0 d=0
__int64 __fastcall codexmate_lib::core::debug_bundle::threads_table_shape::hd2633384721872a0(
        __int64 a1,
        const void *a2,
        size_t a3)
{
  __int64 v4; // r12
  __int64 v5; // rax
  _DWORD *v6; // rax
  void *v7; // rax
  unsigned __int64 v8; // rax
  __int64 v9; // r12
  _BYTE *v10; // r14
  __int64 v11; // r15
  unsigned __int64 v12; // r13
  __int64 v13; // rdx
  __m128i si128; // xmm1
  char v15; // si
  __int64 v16; // rbx
  unsigned __int64 v17; // r15
  __int64 v18; // r13
  __int64 v19; // rax
  _DWORD *v20; // rax
  void *v21; // rax
  __int64 v22; // rax
  __int64 v23; // r14
  size_t v24; // r13
  __int64 v25; // rbx
  __int64 v26; // rax
  _DWORD *v27; // rax
  void *v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // r14
  __int64 v31; // r13
  __int64 v32; // r15
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rax
  int v36; // eax
  __int64 v37; // rax
  _DWORD *v38; // rax
  void *v39; // rax
  __int64 v40; // rax
  __int64 v41; // r14
  size_t v42; // r13
  __int64 v43; // rbx
  __int64 v44; // rax
  __int64 v45; // r15
  __int64 v46; // rax
  _DWORD *v47; // rax
  void *v48; // rax
  __int64 v49; // rax
  __int64 v50; // rbx
  _DWORD *v51; // r14
  sqlite3_stmt *v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  __int64 v55; // r15
  unsigned __int64 i; // rax
  __int64 v57; // rbx
  __int64 v58; // r14
  __int64 v59; // rax
  _QWORD v61[9]; // [rsp+8h] [rbp-288h] BYREF
  __int64 v62; // [rsp+50h] [rbp-240h] BYREF
  __int64 v63; // [rsp+58h] [rbp-238h]
  __m128i v64; // [rsp+60h] [rbp-230h]
  __int64 v65; // [rsp+70h] [rbp-220h]
  __int64 v66; // [rsp+78h] [rbp-218h]
  __int128 v67; // [rsp+80h] [rbp-210h]
  size_t v68; // [rsp+90h] [rbp-200h]
  __int64 v69; // [rsp+98h] [rbp-1F8h]
  __int128 v70; // [rsp+A0h] [rbp-1F0h]
  __int64 v71; // [rsp+B0h] [rbp-1E0h]
  char v72; // [rsp+B8h] [rbp-1D8h]
  __int64 v73; // [rsp+E8h] [rbp-1A8h]
  __int64 v74; // [rsp+F0h] [rbp-1A0h] BYREF
  __int64 v75; // [rsp+F8h] [rbp-198h]
  __int64 v76; // [rsp+100h] [rbp-190h]
  __int64 v77; // [rsp+108h] [rbp-188h]
  unsigned __int64 v78; // [rsp+110h] [rbp-180h] BYREF
  __int64 v79; // [rsp+118h] [rbp-178h]
  size_t __n; // [rsp+120h] [rbp-170h]
  __int64 v81; // [rsp+128h] [rbp-168h]
  __int64 v82; // [rsp+130h] [rbp-160h]
  __int128 v83; // [rsp+138h] [rbp-158h]
  sqlite3_stmt *v84; // [rsp+148h] [rbp-148h]
  __int128 v85; // [rsp+150h] [rbp-140h] BYREF
  sqlite3_stmt *v86; // [rsp+160h] [rbp-130h]
  void *__src[2]; // [rsp+170h] [rbp-120h] BYREF
  unsigned __int64 v88; // [rsp+180h] [rbp-110h] BYREF
  unsigned __int64 v89; // [rsp+188h] [rbp-108h]
  _BYTE v90[24]; // [rsp+190h] [rbp-100h] BYREF
  __int64 v91; // [rsp+1A8h] [rbp-E8h]
  __int128 v92; // [rsp+1B0h] [rbp-E0h]
  sqlite3_stmt *v93; // [rsp+1C0h] [rbp-D0h]
  unsigned __int64 v94; // [rsp+1C8h] [rbp-C8h] BYREF
  __int64 (__fastcall **v95)(); // [rsp+1D0h] [rbp-C0h]
  __m128i v96; // [rsp+1D8h] [rbp-B8h] BYREF
  __int64 v97; // [rsp+1E8h] [rbp-A8h]
  __int128 v98; // [rsp+1F0h] [rbp-A0h]
  sqlite3_stmt *v99; // [rsp+200h] [rbp-90h]
  __int64 v100; // [rsp+208h] [rbp-88h] BYREF
  _DWORD *v101; // [rsp+210h] [rbp-80h]
  __int64 v102; // [rsp+218h] [rbp-78h]
  __int64 v103; // [rsp+220h] [rbp-70h] BYREF
  __int64 v104; // [rsp+228h] [rbp-68h]
  size_t v105; // [rsp+230h] [rbp-60h]
  __int64 v106; // [rsp+240h] [rbp-50h] BYREF
  __int128 v107; // [rsp+248h] [rbp-48h]
  size_t v108; // [rsp+258h] [rbp-38h]
  _BYTE v109[41]; // [rsp+267h] [rbp-29h] BYREF

  v4 = a1; /*0x1003fa50a*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v62, a2, a3); /*0x1003fa514*/
  if ( (_DWORD)v62 == 1 ) /*0x1003fa527*/
  {
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h991c0be9976d35ac( /*0x1003fa532*/
      1,
      v63);
    v78 = 0; /*0x1003fa537*/
    __n = 0; /*0x1003fa542*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003fa54d*/
    v5 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6u, 1u); /*0x1003fa562*/
    if ( !v5 ) /*0x1003fa56a*/
      goto LABEL_136; /*0x1003fa56a*/
    *(_WORD *)(v5 + 4) = 29556; /*0x1003fa570*/
    *(_DWORD *)v5 = 1936291941; /*0x1003fa576*/
    v94 = 6; /*0x1003fa57c*/
    v95 = (__int64 (__fastcall **)())v5; /*0x1003fa587*/
    v96.i64[0] = 6; /*0x1003fa58e*/
    LOWORD(v62) = 1; /*0x1003fa599*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003fa5be*/
      (__int64)&v88,
      &v78,
      (__int64)&v94,
      &v62);
    if ( (_BYTE)v88 != 6 ) /*0x1003fa5ca*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v88); /*0x1003fa5d3*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003fa5d8*/
    v6 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7u, 1u); /*0x1003fa5ed*/
    if ( !v6 ) /*0x1003fa5f5*/
      goto LABEL_136; /*0x1003fa5f5*/
    *(_DWORD *)((char *)v6 + 3) = 1936616821; /*0x1003fa5fb*/
    *v6 = 1970040675; /*0x1003fa602*/
    v94 = 7; /*0x1003fa608*/
    v95 = (__int64 (__fastcall **)())v6; /*0x1003fa613*/
    v96.i64[0] = 7; /*0x1003fa61a*/
    v63 = 0; /*0x1003fa625*/
    v64 = (__m128i)8uLL; /*0x1003fa630*/
    LOBYTE(v62) = 4; /*0x1003fa646*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003fa669*/
      (__int64)&v88,
      &v78,
      (__int64)&v94,
      &v62);
    if ( (_BYTE)v88 != 6 ) /*0x1003fa675*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v88); /*0x1003fa67e*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003fa683*/
    v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x12u, 1u); /*0x1003fa698*/
    if ( !v7 ) /*0x1003fa6a0*/
LABEL_136:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1003fbbf7*/
    qmemcpy(v7, "missingCoreColumns", 18); /*0x1003fa6be*/
    v94 = 18; /*0x1003fa6c7*/
    v95 = (__int64 (__fastcall **)())v7; /*0x1003fa6d2*/
    v96.i64[0] = 18; /*0x1003fa6d9*/
    v63 = 0; /*0x1003fa6e4*/
    v64 = (__m128i)8uLL; /*0x1003fa6ef*/
    LOBYTE(v62) = 4; /*0x1003fa705*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003fa728*/
      (__int64)&v88,
      &v78,
      (__int64)&v94,
      &v62);
    if ( (_BYTE)v88 != 6 ) /*0x1003fa734*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v88); /*0x1003fa73d*/
    *(_QWORD *)(a1 + 24) = __n; /*0x1003fa749*/
    v8 = v78; /*0x1003fa74e*/
    *(_QWORD *)(a1 + 16) = v79; /*0x1003fa75c*/
    *(_QWORD *)(a1 + 8) = v8; /*0x1003fa761*/
    *(_BYTE *)a1 = 5; /*0x1003fa766*/
    return v4; /*0x1003fa76b*/
  }
  v77 = a1; /*0x1003fa770*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h991c0be9976d35ac( /*0x1003fa783*/
    0,
    v63);
  rusqlite::path_to_cstring::h3a6b3c588767bae1(&v88, a2, a3); /*0x1003fa795*/
  v9 = v88; /*0x1003fa79a*/
  v10 = (_BYTE *)v89; /*0x1003fa7a1*/
  v11 = *(_QWORD *)v90; /*0x1003fa7a8*/
  if ( v88 != 0x8000000000000016LL ) /*0x1003fa7b2*/
  {
    v16 = *(_QWORD *)&v90[16]; /*0x1003fa897*/
    v106 = v91; /*0x1003fa8a5*/
    v107 = v92; /*0x1003fa8b0*/
    si128 = _mm_unpacklo_epi64((__m128i)*(unsigned __int64 *)v90, _mm_loadl_epi64((const __m128i *)&v90[8])); /*0x1003fa8cc*/
    goto LABEL_40; /*0x1003fa8d0*/
  }
  rusqlite::inner_connection::InnerConnection::open_with_flags::h3a2e27052a583d8e(&v88, v89, *(_QWORD *)v90, 32769, 0); /*0x1003fa7cd*/
  v12 = v88; /*0x1003fa7d2*/
  if ( v88 == 0x8000000000000016LL ) /*0x1003fa7e3*/
  {
    v96 = *(__m128i *)v90; /*0x1003fa7fb*/
    v95 = (__int64 (__fastcall **)())v89; /*0x1003fa802*/
    v94 = 0; /*0x1003fa809*/
    v73 = foldhash::seed::gen_per_hasher_seed::h01eea3e643df83bd(); /*0x1003fa819*/
    if ( byte_101931010 != 2 ) /*0x1003fa82d*/
      foldhash::seed::global::GlobalSeed::init_slow::h7823214f07caac7d(); /*0x1003fbb29*/
    v9 = v94; /*0x1003fa833*/
    v13 = (__int64)v95; /*0x1003fa83a*/
    si128 = _mm_loadu_si128(&v96); /*0x1003fa841*/
    v85 = 0; /*0x1003fa84d*/
    v106 = (__int64)&xmmword_101513850; /*0x1003fa85c*/
    v107 = 0u; /*0x1003fa867*/
    v108 = 0; /*0x1003fa87d*/
    v15 = 0; /*0x1003fa881*/
    v16 = 0; /*0x1003fa883*/
    *v10 = 0; /*0x1003fa885*/
    if ( !v11 ) /*0x1003fa88c*/
      goto LABEL_21; /*0x1003fa88c*/
    goto LABEL_20; /*0x1003fa88c*/
  }
  v13 = v89; /*0x1003fa8d5*/
  si128 = _mm_loadu_si128((const __m128i *)v90); /*0x1003fa8dc*/
  v16 = *(_QWORD *)&v90[16]; /*0x1003fa8e4*/
  v106 = v91; /*0x1003fa8f2*/
  v107 = v92; /*0x1003fa8fd*/
  v15 = 3; /*0x1003fa90c*/
  v9 = v88; /*0x1003fa90f*/
  *v10 = 0; /*0x1003fa912*/
  if ( v11 ) /*0x1003fa919*/
  {
LABEL_20:
    v17 = v12; /*0x1003fa91b*/
    v18 = v13; /*0x1003fa927*/
    *(__m128i *)__src = si128; /*0x1003fa92f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003fa937*/
    v13 = v18; /*0x1003fa93f*/
    v12 = v17; /*0x1003fa942*/
    si128 = _mm_load_si128((const __m128i *)__src); /*0x1003fa945*/
  }
LABEL_21:
  if ( v12 == 0x8000000000000016LL ) /*0x1003fa95a*/
  {
    v68 = v108; /*0x1003fa964*/
    v67 = v107; /*0x1003fa97e*/
    v66 = v106; /*0x1003fa985*/
    v70 = v85; /*0x1003fa99a*/
    v62 = v9; /*0x1003fa9a8*/
    v63 = v13; /*0x1003fa9af*/
    v64 = si128; /*0x1003fa9b6*/
    v65 = v16; /*0x1003fa9be*/
    v69 = v73; /*0x1003fa9cc*/
    v71 = 16; /*0x1003fa9d3*/
    v72 = v15; /*0x1003fa9de*/
    rusqlite::busy::_$LT$impl$u20$rusqlite..Connection$GT$::busy_timeout::h18e2a2db6b41fc10(&v88, &v62, 0, 500000000); /*0x1003fa9fa*/
    v4 = v77; /*0x1003fa9ff*/
    if ( v88 != 0x8000000000000016LL ) /*0x1003faa17*/
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::haafdd8632a3d43d2(&v88); /*0x1003faa20*/
    rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(&v88, &v62, &unk_10151C28A, 26); /*0x1003faa3f*/
    if ( (_DWORD)v88 == 1 ) /*0x1003faa4b*/
    {
      v99 = v93; /*0x1003faa5c*/
      v98 = v92; /*0x1003faa72*/
      v97 = v91; /*0x1003faa7d*/
      v96 = *(__m128i *)&v90[8]; /*0x1003faa93*/
      v95 = *(__int64 (__fastcall ***)())v90; /*0x1003faaa1*/
      v94 = v89; /*0x1003faaa8*/
      *(_QWORD *)&v85 = 0; /*0x1003faaaf*/
      v86 = nullptr; /*0x1003faaba*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003faac5*/
      v19 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6u, 1u); /*0x1003faada*/
      if ( !v19 ) /*0x1003faae2*/
        goto LABEL_138; /*0x1003faae2*/
      *(_WORD *)(v19 + 4) = 29556; /*0x1003faae8*/
      *(_DWORD *)v19 = 1936291941; /*0x1003faaee*/
      v100 = 6; /*0x1003faaf4*/
      v101 = (_DWORD *)v19; /*0x1003faaff*/
      v102 = 6; /*0x1003fab03*/
      LOWORD(v106) = 1; /*0x1003fab0b*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003fab27*/
        (__int64)&v103,
        &v85,
        (__int64)&v100,
        &v106);
      if ( (_BYTE)v103 != 6 ) /*0x1003fab30*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v103); /*0x1003fab36*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003fab3b*/
      v20 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7u, 1u); /*0x1003fab50*/
      if ( !v20 ) /*0x1003fab58*/
        goto LABEL_138; /*0x1003fab58*/
      *(_DWORD *)((char *)v20 + 3) = 1936616821; /*0x1003fab5e*/
      *v20 = 1970040675; /*0x1003fab65*/
      v100 = 7; /*0x1003fab6b*/
      v101 = v20; /*0x1003fab76*/
      v102 = 7; /*0x1003fab7a*/
      *(_QWORD *)&v107 = 0; /*0x1003fab82*/
      *((_QWORD *)&v107 + 1) = 8; /*0x1003fab8a*/
      v108 = 0; /*0x1003fab92*/
      LOBYTE(v106) = 4; /*0x1003fab9a*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003fabb4*/
        (__int64)&v103,
        &v85,
        (__int64)&v100,
        &v106);
      if ( (_BYTE)v103 != 6 ) /*0x1003fabbd*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v103); /*0x1003fabc3*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003fabc8*/
      v21 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x12u, 1u); /*0x1003fabdd*/
      if ( !v21 ) /*0x1003fabe5*/
        goto LABEL_138; /*0x1003fabe5*/
      qmemcpy(v21, "missingCoreColumns", 18); /*0x1003fac03*/
      v100 = 18; /*0x1003fac0c*/
      v101 = v21; /*0x1003fac17*/
      v102 = 18; /*0x1003fac1b*/
      *(_QWORD *)&v107 = 0; /*0x1003fac23*/
      *((_QWORD *)&v107 + 1) = 8; /*0x1003fac2b*/
      v108 = 0; /*0x1003fac33*/
      LOBYTE(v106) = 4; /*0x1003fac3b*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003fac58*/
        (__int64)&v103,
        &v85,
        (__int64)&v100,
        &v106);
      if ( (_BYTE)v103 != 6 ) /*0x1003fac61*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v103); /*0x1003fac67*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003fac6c*/
      v22 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9u, 1u); /*0x1003fac81*/
      if ( !v22 ) /*0x1003fac89*/
LABEL_138:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1003fbc15*/
      *(_QWORD *)v22 = 0x6F72724564616572LL; /*0x1003fac9c*/
      *(_BYTE *)(v22 + 8) = 114; /*0x1003faca0*/
      v100 = 9; /*0x1003faca6*/
      v101 = (_DWORD *)v22; /*0x1003facb1*/
      v102 = 9; /*0x1003facb5*/
      v103 = 0; /*0x1003facbd*/
      v104 = 1; /*0x1003facc5*/
      v105 = 0; /*0x1003faccd*/
      *((_QWORD *)&v107 + 1) = 1610612768; /*0x1003facd5*/
      v106 = (__int64)&v103; /*0x1003facdd*/
      *(_QWORD *)&v107 = &anon_68347d2bbd113ff8f7653f9946f1b8f6_986; /*0x1003face8*/
      if ( (unsigned __int8)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4( /*0x1003facf7*/
                              &v94,
                              &v106) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003fbb51*/
          (__int64)"a Display implementation returned an error unexpectedlydescription() is deprecated; use Displaycalled"
                   " `Result::unwrap_err()` on an `Ok` valuecalled `Result::unwrap()` on an `Err` valueacceptaccept-chars"
                   "etaccept-languageaccept-rangesaccess-control-allow-credentialsaccess-control-allow-headersaccess-cont"
                   "rol-allow-methodsaccess-control-allow-originaccess-control-expose-headersaccess-control-max-ageaccess"
                   "-control-request-headersaccess-control-request-methodageallowalt-svccache-controlcache-statuscdn-cach"
                   "e-controlcontent-dispositioncontent-rangecontent-security-policycontent-security-policy-report-onlydn"
                   "texpiresif-modified-sinceif-none-matchif-unmodified-sincelast-modifiedmax-forwardspragmapublic-key-pi"
                   "nspublic-key-pins-report-onlyrangereferrer-policyrefreshretry-aftersec-websocket-acceptsec-websocket-"
                   "extensionssec-websocket-keysec-websocket-protocolsec-websocket-versionserverstrict-transport-security"
                   "traileruser-agentupgrade-insecure-requestsx-content-type-optionsx-dns-prefetch-controlx-frame-options",
          55,
          (__int64)v109,
          (__int64)&anon_68347d2bbd113ff8f7653f9946f1b8f6_1005,
          (__int64)&anon_68347d2bbd113ff8f7653f9946f1b8f6_989);
      v23 = v103; /*0x1003fad04*/
      __src[0] = (void *)v104; /*0x1003fad0c*/
      v24 = v105; /*0x1003fad13*/
      if ( (v105 & 0x8000000000000000LL) != 0LL ) /*0x1003fad1a*/
      {
        v25 = 0; /*0x1003fad20*/
        goto LABEL_38; /*0x1003fad20*/
      }
      if ( v105 ) /*0x1003fb443*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003fb449*/
        v25 = 1; /*0x1003fb44e*/
        v44 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v24, 1u); /*0x1003fb45b*/
        if ( !v44 ) /*0x1003fb463*/
LABEL_38:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v25); /*0x1003fad22*/
        v45 = v44; /*0x1003fb469*/
      }
      else
      {
        v45 = 1; /*0x1003fb87b*/
      }
      memcpy((void *)v45, __src[0], v24); /*0x1003fb88e*/
      LOBYTE(v106) = 3; /*0x1003fb893*/
      *(_QWORD *)&v107 = v24; /*0x1003fb897*/
      *((_QWORD *)&v107 + 1) = v45; /*0x1003fb89b*/
      v108 = v24; /*0x1003fb89f*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003fb8b9*/
        (__int64)&v103,
        &v85,
        (__int64)&v100,
        &v106);
      v4 = v77; /*0x1003fb8be*/
      if ( (_BYTE)v103 != 6 ) /*0x1003fb8c9*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v103); /*0x1003fb8cf*/
      if ( v23 ) /*0x1003fb8d7*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003fb8e8*/
      *(_QWORD *)(v4 + 24) = v86; /*0x1003fb8f4*/
      *(_OWORD *)(v4 + 8) = v85; /*0x1003fb90c*/
      *(_BYTE *)v4 = 5; /*0x1003fb911*/
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::haafdd8632a3d43d2(&v94); /*0x1003fb91d*/
LABEL_129:
      core::ptr::drop_in_place$LT$rusqlite..Connection$GT$::h5930db1003a7f251(&v62); /*0x1003fbae0*/
      return v4; /*0x1003fbae7*/
    }
    v84 = v93; /*0x1003fb121*/
    v83 = v92; /*0x1003fb137*/
    v82 = v91; /*0x1003fb142*/
    v81 = *(_QWORD *)&v90[16]; /*0x1003fb14d*/
    __n = *(_QWORD *)&v90[8]; /*0x1003fb158*/
    v79 = *(_QWORD *)v90; /*0x1003fb166*/
    v78 = v89; /*0x1003fb16d*/
    v36 = sqlite3_bind_parameter_count(v93); /*0x1003fb17b*/
    if ( !v36 ) /*0x1003fb185*/
    {
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h3b81d1d895a04af6( /*0x1003fb47f*/
        &v74,
        &v78,
        0);
      _$LT$alloc..collections..btree..set..BTreeSet$LT$T$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$T$GT$$GT$::from_iter::h2cd49421cb31bc40( /*0x1003fb4a4*/
        &v85,
        v75,
        v75 + 24 * v76);
      v61[0] = &v85; /*0x1003fb4a9*/
      v61[1] = 0; /*0x1003fb4b0*/
      v61[2] = 3; /*0x1003fb4bb*/
      v61[3] = &anon_68347d2bbd113ff8f7653f9946f1b8f6_264; /*0x1003fb4cd*/
      v61[4] = 2; /*0x1003fb4d4*/
      v61[5] = "model_provider"; /*0x1003fb4e6*/
      v61[6] = 14; /*0x1003fb4ed*/
      v61[7] = &unk_10151C2A6; /*0x1003fb4ff*/
      v61[8] = 12; /*0x1003fb506*/
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h1c0b8f94bd13496c( /*0x1003fb51f*/
        &v100,
        v61);
      v103 = 0; /*0x1003fb524*/
      v105 = 0; /*0x1003fb52c*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003fb534*/
      v46 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6u, 1u); /*0x1003fb549*/
      if ( !v46 ) /*0x1003fb551*/
        goto LABEL_140; /*0x1003fb551*/
      *(_WORD *)(v46 + 4) = 29556; /*0x1003fb557*/
      *(_DWORD *)v46 = 1936291941; /*0x1003fb55d*/
      v106 = 6; /*0x1003fb563*/
      *(_QWORD *)&v107 = v46; /*0x1003fb56b*/
      *((_QWORD *)&v107 + 1) = 6; /*0x1003fb56f*/
      LOBYTE(v88) = 1; /*0x1003fb57f*/
      BYTE1(v88) = v76 != 0; /*0x1003fb586*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003fb5a3*/
        (__int64)&v94,
        &v103,
        (__int64)&v106,
        &v88);
      if ( (_BYTE)v94 != 6 ) /*0x1003fb5af*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v94); /*0x1003fb5b8*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003fb5bd*/
      v47 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7u, 1u); /*0x1003fb5d2*/
      if ( !v47 ) /*0x1003fb5da*/
        goto LABEL_140; /*0x1003fb5da*/
      *(_DWORD *)((char *)v47 + 3) = 1936616821; /*0x1003fb5e3*/
      *v47 = 1970040675; /*0x1003fb5ea*/
      v106 = 7; /*0x1003fb5f0*/
      *(_QWORD *)&v107 = v47; /*0x1003fb5f8*/
      *((_QWORD *)&v107 + 1) = 7; /*0x1003fb5fc*/
      serde_core::ser::Serializer::collect_seq::he7c4ae19ebabfd99((__int64)&v88, (__int64)&v74); /*0x1003fb612*/
      if ( (_BYTE)v88 == 6 ) /*0x1003fb61e*/
      {
        v94 = v89; /*0x1003fbb8a*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003fbbb2*/
          (__int64)"called `Result::unwrap()` on an `Err` valueacceptaccept-charsetaccept-languageaccept-rangesaccess-control-allow-credentialsaccess-control-allow-headersaccess-control-allow-methodsaccess-control-allow-originaccess-control-expose-headersaccess-control-max-ageaccess-control-request-headersaccess-control-request-methodageallowalt-svccache-controlcache-statuscdn-cache-controlcontent-dispositioncontent-rangecontent-security-policycontent-security-policy-report-onlydntexpiresif-modified-sinceif-none-matchif-unmodified-sincelast-modifiedmax-forwardspragmapublic-key-pinspublic-key-pins-report-onlyrangereferrer-policyrefreshretry-aftersec-websocket-acceptsec-websocket-extensionssec-websocket-keysec-websocket-protocolsec-websocket-versionserverstrict-transport-securitytraileruser-agentupgrade-insecure-requestsx-content-type-optionsx-dns-prefetch-controlx-frame-options",
          43,
          (__int64)&v94,
          (__int64)&off_10188DA08,
          (__int64)&off_10188CCF8);
      }
      v96 = *(__m128i *)v90; /*0x1003fb639*/
      v95 = (__int64 (__fastcall **)())v89; /*0x1003fb64e*/
      v94 = v88; /*0x1003fb655*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003fb672*/
        (__int64)&v88,
        &v103,
        (__int64)&v106,
        &v94);
      if ( (_BYTE)v88 != 6 ) /*0x1003fb67e*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v88); /*0x1003fb687*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003fb68c*/
      v48 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x12u, 1u); /*0x1003fb6a1*/
      if ( !v48 ) /*0x1003fb6a9*/
LABEL_140:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1003fbc33*/
      qmemcpy(v48, "missingCoreColumns", 18); /*0x1003fb6ca*/
      v106 = 18; /*0x1003fb6d4*/
      *(_QWORD *)&v107 = v48; /*0x1003fb6dc*/
      *((_QWORD *)&v107 + 1) = 18; /*0x1003fb6e0*/
      serde_core::ser::Serializer::collect_seq::he7c4ae19ebabfd99((__int64)&v88, (__int64)&v100); /*0x1003fb6f6*/
      if ( (_BYTE)v88 == 6 ) /*0x1003fb702*/
      {
        v94 = v89; /*0x1003fbbc0*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003fbbe8*/
          (__int64)"called `Result::unwrap()` on an `Err` valueacceptaccept-charsetaccept-languageaccept-rangesaccess-control-allow-credentialsaccess-control-allow-headersaccess-control-allow-methodsaccess-control-allow-originaccess-control-expose-headersaccess-control-max-ageaccess-control-request-headersaccess-control-request-methodageallowalt-svccache-controlcache-statuscdn-cache-controlcontent-dispositioncontent-rangecontent-security-policycontent-security-policy-report-onlydntexpiresif-modified-sinceif-none-matchif-unmodified-sincelast-modifiedmax-forwardspragmapublic-key-pinspublic-key-pins-report-onlyrangereferrer-policyrefreshretry-aftersec-websocket-acceptsec-websocket-extensionssec-websocket-keysec-websocket-protocolsec-websocket-versionserverstrict-transport-securitytraileruser-agentupgrade-insecure-requestsx-content-type-optionsx-dns-prefetch-controlx-frame-options",
          43,
          (__int64)&v94,
          (__int64)&off_10188DA08,
          (__int64)&off_10188CCF8);
      }
      v96 = *(__m128i *)v90; /*0x1003fb71d*/
      v95 = (__int64 (__fastcall **)())v89; /*0x1003fb732*/
      v94 = v88; /*0x1003fb739*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003fb756*/
        (__int64)&v88,
        &v103,
        (__int64)&v106,
        &v94);
      if ( (_BYTE)v88 != 6 ) /*0x1003fb762*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v88); /*0x1003fb76b*/
      *(_QWORD *)(v4 + 24) = v105; /*0x1003fb774*/
      v49 = v103; /*0x1003fb779*/
      *(_QWORD *)(v4 + 16) = v104; /*0x1003fb781*/
      *(_QWORD *)(v4 + 8) = v49; /*0x1003fb786*/
      *(_BYTE *)v4 = 5; /*0x1003fb78b*/
      v50 = v102; /*0x1003fb790*/
      if ( v102 ) /*0x1003fb797*/
      {
        v51 = v101 + 2; /*0x1003fb79d*/
        do /*0x1003fb7b7*/
        {
          if ( *((_QWORD *)v51 - 1) ) /*0x1003fb7b9*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003fb7ca*/
          v51 += 6; /*0x1003fb7b0*/
          --v50; /*0x1003fb7b4*/
        }
        while ( v50 ); /*0x1003fb7b7*/
      }
      if ( v100 ) /*0x1003fb7db*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003fb7ee*/
      if ( (_QWORD)v85 ) /*0x1003fb7fd*/
      {
        v52 = v86; /*0x1003fb80a*/
        v89 = 0; /*0x1003fb811*/
        *(_OWORD *)v90 = v85; /*0x1003fb81c*/
        v91 = 0; /*0x1003fb82a*/
        v92 = v85; /*0x1003fb835*/
        v53 = 1; /*0x1003fb843*/
      }
      else
      {
        v53 = 0; /*0x1003fb927*/
        v52 = nullptr; /*0x1003fb929*/
      }
      v88 = v53; /*0x1003fb92b*/
      *(_QWORD *)&v90[16] = v53; /*0x1003fb932*/
      v93 = v52; /*0x1003fb939*/
      alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h6588e1386e58cf7a(&v94, (__int64)&v88); /*0x1003fb94e*/
      for ( i = v94; v94; i = v94 ) /*0x1003fb95d*/
      {
        if ( *(_QWORD *)(i + 24 * v96.i64[0] + 8) ) /*0x1003fb97b*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003fb993*/
        alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h6588e1386e58cf7a(&v94, (__int64)&v88); /*0x1003fb99e*/
      }
      v57 = v76; /*0x1003fb9af*/
      if ( v76 ) /*0x1003fb9b9*/
      {
        v58 = v75 + 8; /*0x1003fb9c2*/
        do /*0x1003fb9d7*/
        {
          if ( *(_QWORD *)(v58 - 8) ) /*0x1003fb9d9*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003fb9ea*/
          v58 += 24; /*0x1003fb9d0*/
          --v57; /*0x1003fb9d4*/
        }
        while ( v57 ); /*0x1003fb9d7*/
      }
      if ( v74 ) /*0x1003fb9fb*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003fba11*/
      core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h43ec02918eaa5d70(&v78); /*0x1003fba1d*/
      goto LABEL_129; /*0x1003fba22*/
    }
    v88 = 0x8000000000000013LL; /*0x1003fb18f*/
    v89 = 0; /*0x1003fb196*/
    *(_QWORD *)v90 = v36; /*0x1003fb1a1*/
    v100 = 0; /*0x1003fb1a8*/
    v102 = 0; /*0x1003fb1b3*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003fb1bb*/
    v37 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6u, 1u); /*0x1003fb1d0*/
    if ( !v37 ) /*0x1003fb1d8*/
      goto LABEL_139; /*0x1003fb1d8*/
    *(_WORD *)(v37 + 4) = 29556; /*0x1003fb1de*/
    *(_DWORD *)v37 = 1936291941; /*0x1003fb1e4*/
    v103 = 6; /*0x1003fb1ea*/
    v104 = v37; /*0x1003fb1f2*/
    v105 = 6; /*0x1003fb1f6*/
    LOWORD(v94) = 1; /*0x1003fb1fe*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003fb21d*/
      (__int64)&v106,
      &v100,
      (__int64)&v103,
      &v94);
    if ( (_BYTE)v106 != 6 ) /*0x1003fb226*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v106); /*0x1003fb22c*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003fb231*/
    v38 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7u, 1u); /*0x1003fb246*/
    if ( !v38 ) /*0x1003fb24e*/
      goto LABEL_139; /*0x1003fb24e*/
    *(_DWORD *)((char *)v38 + 3) = 1936616821; /*0x1003fb254*/
    *v38 = 1970040675; /*0x1003fb25b*/
    v103 = 7; /*0x1003fb261*/
    v104 = (__int64)v38; /*0x1003fb269*/
    v105 = 7; /*0x1003fb26d*/
    v95 = nullptr; /*0x1003fb275*/
    v96 = (__m128i)8uLL; /*0x1003fb280*/
    LOBYTE(v94) = 4; /*0x1003fb296*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003fb2b3*/
      (__int64)&v106,
      &v100,
      (__int64)&v103,
      &v94);
    if ( (_BYTE)v106 != 6 ) /*0x1003fb2bc*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v106); /*0x1003fb2c2*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003fb2c7*/
    v39 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x12u, 1u); /*0x1003fb2dc*/
    if ( !v39 ) /*0x1003fb2e4*/
      goto LABEL_139; /*0x1003fb2e4*/
    qmemcpy(v39, "missingCoreColumns", 18); /*0x1003fb302*/
    v103 = 18; /*0x1003fb30b*/
    v104 = (__int64)v39; /*0x1003fb313*/
    v105 = 18; /*0x1003fb317*/
    v95 = nullptr; /*0x1003fb31f*/
    v96 = (__m128i)8uLL; /*0x1003fb32a*/
    LOBYTE(v94) = 4; /*0x1003fb340*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003fb360*/
      (__int64)&v106,
      &v100,
      (__int64)&v103,
      &v94);
    if ( (_BYTE)v106 != 6 ) /*0x1003fb369*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v106); /*0x1003fb36f*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003fb374*/
    v40 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9u, 1u); /*0x1003fb389*/
    if ( !v40 ) /*0x1003fb391*/
LABEL_139:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1003fbc24*/
    *(_QWORD *)v40 = 0x6F72724564616572LL; /*0x1003fb3a4*/
    *(_BYTE *)(v40 + 8) = 114; /*0x1003fb3a8*/
    v103 = 9; /*0x1003fb3ae*/
    v104 = v40; /*0x1003fb3b6*/
    v105 = 9; /*0x1003fb3ba*/
    v106 = 0; /*0x1003fb3c2*/
    v107 = 1u; /*0x1003fb3ca*/
    v96.i64[0] = 1610612768; /*0x1003fb3da*/
    v94 = (unsigned __int64)&v106; /*0x1003fb3e5*/
    v95 = &anon_68347d2bbd113ff8f7653f9946f1b8f6_986; /*0x1003fb3f3*/
    if ( (unsigned __int8)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4( /*0x1003fb408*/
                            &v88,
                            &v94) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003fbb79*/
        (__int64)"a Display implementation returned an error unexpectedlydescription() is deprecated; use Displaycalled `"
                 "Result::unwrap_err()` on an `Ok` valuecalled `Result::unwrap()` on an `Err` valueacceptaccept-charsetac"
                 "cept-languageaccept-rangesaccess-control-allow-credentialsaccess-control-allow-headersaccess-control-al"
                 "low-methodsaccess-control-allow-originaccess-control-expose-headersaccess-control-max-ageaccess-control"
                 "-request-headersaccess-control-request-methodageallowalt-svccache-controlcache-statuscdn-cache-controlc"
                 "ontent-dispositioncontent-rangecontent-security-policycontent-security-policy-report-onlydntexpiresif-m"
                 "odified-sinceif-none-matchif-unmodified-sincelast-modifiedmax-forwardspragmapublic-key-pinspublic-key-p"
                 "ins-report-onlyrangereferrer-policyrefreshretry-aftersec-websocket-acceptsec-websocket-extensionssec-we"
                 "bsocket-keysec-websocket-protocolsec-websocket-versionserverstrict-transport-securitytraileruser-agentu"
                 "pgrade-insecure-requestsx-content-type-optionsx-dns-prefetch-controlx-frame-options",
        55,
        (__int64)v109,
        (__int64)&anon_68347d2bbd113ff8f7653f9946f1b8f6_1005,
        (__int64)&anon_68347d2bbd113ff8f7653f9946f1b8f6_989);
    v41 = v106; /*0x1003fb415*/
    v42 = *((_QWORD *)&v107 + 1); /*0x1003fb424*/
    __src[0] = (void *)v107; /*0x1003fb424*/
    if ( v107 < 0 ) /*0x1003fb42b*/
    {
      v43 = 0; /*0x1003fb431*/
      goto LABEL_77; /*0x1003fb431*/
    }
    if ( *((_QWORD *)&v107 + 1) ) /*0x1003fb84d*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003fb853*/
      v43 = 1; /*0x1003fb858*/
      v54 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v42, 1u); /*0x1003fb865*/
      if ( !v54 ) /*0x1003fb86d*/
LABEL_77:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v43); /*0x1003fb433*/
      v55 = v54; /*0x1003fb873*/
    }
    else
    {
      v55 = 1; /*0x1003fba27*/
    }
    memcpy((void *)v55, __src[0], v42); /*0x1003fba3a*/
    LOBYTE(v94) = 3; /*0x1003fba3f*/
    v95 = (__int64 (__fastcall **)())v42; /*0x1003fba46*/
    v96.i64[0] = v55; /*0x1003fba4d*/
    v96.i64[1] = v42; /*0x1003fba54*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003fba71*/
      (__int64)&v106,
      &v100,
      (__int64)&v103,
      &v94);
    v4 = v77; /*0x1003fba76*/
    if ( (_BYTE)v106 != 6 ) /*0x1003fba81*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v106); /*0x1003fba87*/
    if ( v41 ) /*0x1003fba8f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003fbaa0*/
    *(_QWORD *)(v4 + 24) = v102; /*0x1003fbaa9*/
    v59 = v100; /*0x1003fbaae*/
    *(_QWORD *)(v4 + 16) = v101; /*0x1003fbab9*/
    *(_QWORD *)(v4 + 8) = v59; /*0x1003fbabe*/
    *(_BYTE *)v4 = 5; /*0x1003fbac3*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::haafdd8632a3d43d2(&v88); /*0x1003fbacf*/
    core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h43ec02918eaa5d70(&v78); /*0x1003fbadb*/
    goto LABEL_129; /*0x1003fbadb*/
  }
  v10 = (_BYTE *)v13; /*0x1003fad32*/
LABEL_40:
  v88 = v9; /*0x1003fad35*/
  v89 = (unsigned __int64)v10; /*0x1003fad3c*/
  *(__m128i *)v90 = si128; /*0x1003fad43*/
  *(_QWORD *)&v90[16] = v16; /*0x1003fad4b*/
  v91 = v106; /*0x1003fad5a*/
  v92 = v107; /*0x1003fad61*/
  v100 = 0; /*0x1003fad73*/
  v102 = 0; /*0x1003fad7e*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003fad86*/
  v26 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6u, 1u); /*0x1003fad9b*/
  if ( !v26 ) /*0x1003fada3*/
    goto LABEL_137; /*0x1003fada3*/
  *(_WORD *)(v26 + 4) = 29556; /*0x1003fada9*/
  *(_DWORD *)v26 = 1936291941; /*0x1003fadaf*/
  v103 = 6; /*0x1003fadb5*/
  v104 = v26; /*0x1003fadbd*/
  v105 = 6; /*0x1003fadc1*/
  LOWORD(v94) = 1; /*0x1003fadc9*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003fadeb*/
    (__int64)&v78,
    &v100,
    (__int64)&v103,
    &v94);
  if ( (_BYTE)v78 != 6 ) /*0x1003fadf7*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v78); /*0x1003fae00*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003fae05*/
  v27 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7u, 1u); /*0x1003fae1a*/
  if ( !v27 ) /*0x1003fae22*/
    goto LABEL_137; /*0x1003fae22*/
  *(_DWORD *)((char *)v27 + 3) = 1936616821; /*0x1003fae28*/
  *v27 = 1970040675; /*0x1003fae2f*/
  v103 = 7; /*0x1003fae35*/
  v104 = (__int64)v27; /*0x1003fae3d*/
  v105 = 7; /*0x1003fae41*/
  v95 = nullptr; /*0x1003fae49*/
  v96 = (__m128i)8uLL; /*0x1003fae54*/
  LOBYTE(v94) = 4; /*0x1003fae6a*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003fae8a*/
    (__int64)&v78,
    &v100,
    (__int64)&v103,
    &v94);
  if ( (_BYTE)v78 != 6 ) /*0x1003fae96*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v78); /*0x1003fae9f*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003faea4*/
  v28 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x12u, 1u); /*0x1003faeb9*/
  if ( !v28 ) /*0x1003faec1*/
    goto LABEL_137; /*0x1003faec1*/
  qmemcpy(v28, "missingCoreColumns", 18); /*0x1003faedf*/
  v103 = 18; /*0x1003faee8*/
  v104 = (__int64)v28; /*0x1003faef0*/
  v105 = 18; /*0x1003faef4*/
  v95 = nullptr; /*0x1003faefc*/
  v96 = (__m128i)8uLL; /*0x1003faf07*/
  LOBYTE(v94) = 4; /*0x1003faf1d*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003faf40*/
    (__int64)&v78,
    &v100,
    (__int64)&v103,
    &v94);
  if ( (_BYTE)v78 != 6 ) /*0x1003faf4c*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v78); /*0x1003faf55*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003faf5a*/
  v29 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9u, 1u); /*0x1003faf6f*/
  if ( !v29 ) /*0x1003faf77*/
LABEL_137:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1003fbc06*/
  *(_QWORD *)v29 = 0x6F72724564616572LL; /*0x1003faf8a*/
  *(_BYTE *)(v29 + 8) = 114; /*0x1003faf8e*/
  v103 = 9; /*0x1003faf94*/
  v104 = v29; /*0x1003faf9c*/
  v105 = 9; /*0x1003fafa0*/
  v78 = 0; /*0x1003fafa8*/
  v79 = 1; /*0x1003fafb3*/
  __n = 0; /*0x1003fafbe*/
  v96.i64[0] = 1610612768; /*0x1003fafc9*/
  v94 = (unsigned __int64)&v78; /*0x1003fafd4*/
  v95 = &anon_68347d2bbd113ff8f7653f9946f1b8f6_986; /*0x1003fafe2*/
  if ( (unsigned __int8)_$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4( /*0x1003faff7*/
                          &v88,
                          &v94) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003fbb1f*/
      (__int64)"a Display implementation returned an error unexpectedlydescription() is deprecated; use Displaycalled `Re"
               "sult::unwrap_err()` on an `Ok` valuecalled `Result::unwrap()` on an `Err` valueacceptaccept-charsetaccept"
               "-languageaccept-rangesaccess-control-allow-credentialsaccess-control-allow-headersaccess-control-allow-me"
               "thodsaccess-control-allow-originaccess-control-expose-headersaccess-control-max-ageaccess-control-request"
               "-headersaccess-control-request-methodageallowalt-svccache-controlcache-statuscdn-cache-controlcontent-dis"
               "positioncontent-rangecontent-security-policycontent-security-policy-report-onlydntexpiresif-modified-sinc"
               "eif-none-matchif-unmodified-sincelast-modifiedmax-forwardspragmapublic-key-pinspublic-key-pins-report-onl"
               "yrangereferrer-policyrefreshretry-aftersec-websocket-acceptsec-websocket-extensionssec-websocket-keysec-w"
               "ebsocket-protocolsec-websocket-versionserverstrict-transport-securitytraileruser-agentupgrade-insecure-re"
               "questsx-content-type-optionsx-dns-prefetch-controlx-frame-options",
      55,
      (__int64)v109,
      (__int64)&anon_68347d2bbd113ff8f7653f9946f1b8f6_1005,
      (__int64)&anon_68347d2bbd113ff8f7653f9946f1b8f6_989);
  v30 = v78; /*0x1003fb004*/
  __src[0] = (void *)v79; /*0x1003fb012*/
  v31 = __n; /*0x1003fb019*/
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1003fb023*/
  {
    v32 = 0; /*0x1003fb025*/
    goto LABEL_53; /*0x1003fb025*/
  }
  if ( __n ) /*0x1003fb038*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003fb03a*/
    v32 = 1; /*0x1003fb03f*/
    v33 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v31, 1u); /*0x1003fb04d*/
    if ( !v33 ) /*0x1003fb055*/
LABEL_53:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v32); /*0x1003fb028*/
    v34 = v33; /*0x1003fb057*/
  }
  else
  {
    v34 = 1; /*0x1003fb05c*/
  }
  memcpy((void *)v34, __src[0], v31); /*0x1003fb06e*/
  LOBYTE(v94) = 3; /*0x1003fb073*/
  v95 = (__int64 (__fastcall **)())v31; /*0x1003fb07a*/
  v96.i64[0] = v34; /*0x1003fb081*/
  v96.i64[1] = v31; /*0x1003fb088*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hbbc3992440c63c66( /*0x1003fb0a8*/
    (__int64)&v78,
    &v100,
    (__int64)&v103,
    &v94);
  v4 = v77; /*0x1003fb0ad*/
  if ( (_BYTE)v78 != 6 ) /*0x1003fb0bb*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v78); /*0x1003fb0c4*/
  if ( v30 ) /*0x1003fb0cc*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003fb0dd*/
  *(_QWORD *)(v4 + 24) = v102; /*0x1003fb0e6*/
  v35 = v100; /*0x1003fb0eb*/
  *(_QWORD *)(v4 + 16) = v101; /*0x1003fb0f6*/
  *(_QWORD *)(v4 + 8) = v35; /*0x1003fb0fb*/
  *(_BYTE *)v4 = 5; /*0x1003fb100*/
  core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::haafdd8632a3d43d2(&v88); /*0x1003fb10c*/
  return v4; /*0x1003fbaef*/
}