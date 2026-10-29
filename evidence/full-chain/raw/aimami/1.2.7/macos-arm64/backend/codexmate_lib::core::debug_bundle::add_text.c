// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::debug_bundle::add_text::hfad0363e81e601cc; addr: 0x100445af0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:18Z
__int64 __fastcall codexmate_lib::core::debug_bundle::add_text::hfad0363e81e601cc(
        _QWORD *a1,
        unsigned __int64 a2,
        __int64 *a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6,
        unsigned __int64 a7)
{
  unsigned __int64 v8; // r12
  unsigned __int64 v10; // rbx
  __int64 v11; // rcx
  __int64 v12; // r8
  int v13; // eax
  unsigned __int64 v14; // r13
  unsigned __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // rdi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r15
  _BOOL8 v20; // rax
  __int16 v21; // cx
  __int64 v22; // rdx
  _QWORD *v23; // rbx
  __int64 v24; // rax
  __int64 result; // rax
  __int64 v26; // rax
  size_t v27; // rdx
  void *v28; // r14
  size_t v29; // r15
  const void *v30; // rsi
  size_t v31; // r14
  __int64 v32; // rdi
  __int64 v33; // rax
  __int16 v34; // bx
  size_t v35; // rcx
  size_t v36; // rdx
  unsigned __int64 v37; // rax
  _WORD *v38; // rax
  unsigned __int64 v39; // r12
  unsigned __int8 v40; // bl
  unsigned __int8 v41; // al
  unsigned __int64 v42; // rbx
  unsigned __int64 v43; // rdx
  __int64 v44; // r15
  __int64 v45; // rdx
  __int64 v46; // r13
  unsigned __int64 v47; // rdx
  unsigned int v48; // ebx
  __int64 v49; // r15
  unsigned __int64 v50; // rax
  unsigned __int64 v51; // rdx
  __int64 v52; // rsi
  unsigned __int64 v53; // rdx
  unsigned __int64 v54; // r15
  unsigned __int64 v55; // rdi
  __int64 v56; // rbx
  int v57; // eax
  unsigned __int64 v58; // rcx
  unsigned __int64 v59; // rax
  __int64 v60; // rax
  unsigned __int64 v61; // rbx
  unsigned __int64 *v62; // r12
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // rcx
  _QWORD *v66; // rax
  _QWORD *v67; // r12
  volatile signed __int64 *v68; // rax
  _QWORD *v69; // r15
  __int64 v70; // rax
  __int64 v71; // rax
  __int64 v72; // rdi
  __int64 v73; // rsi
  unsigned __int64 v74; // rdx
  unsigned __int64 v75; // rcx
  __int64 v76; // r8
  void *v78; // rax
  __int64 v79; // rdx
  void *v80; // r15
  _QWORD *v81; // rax
  char v82; // cl
  __int64 v83; // r15
  __int64 v84; // r12
  __int64 v85; // rbx
  __int64 v86; // rsi
  unsigned __int64 v87; // rbx
  unsigned __int64 v88; // r15
  unsigned __int64 v89; // r12
  __int64 v90; // rax
  unsigned __int64 v91; // rsi
  __int64 v92; // rdx
  __int64 v93; // rdi
  void *v94; // rax
  __int64 v95; // rdx
  void *v96; // r15
  _QWORD *v97; // rax
  _QWORD *v98; // rcx
  char **v99; // rdx
  __int64 v100; // rsi
  void *v101; // rdi
  _QWORD v102[26]; // [rsp+40h] [rbp-630h] BYREF
  _DWORD __dst[52]; // [rsp+110h] [rbp-560h] BYREF
  _QWORD v104[26]; // [rsp+1E0h] [rbp-490h] BYREF
  _QWORD v105[26]; // [rsp+2B0h] [rbp-3C0h] BYREF
  __int128 v106; // [rsp+380h] [rbp-2F0h] BYREF
  int v107; // [rsp+390h] [rbp-2E0h]
  _QWORD v108[6]; // [rsp+3A0h] [rbp-2D0h] BYREF
  __int16 v109; // [rsp+3D0h] [rbp-2A0h]
  __int16 v110; // [rsp+3D2h] [rbp-29Eh]
  _QWORD v111[3]; // [rsp+3D8h] [rbp-298h] BYREF
  _QWORD v112[3]; // [rsp+3F0h] [rbp-280h] BYREF
  _QWORD v113[2]; // [rsp+408h] [rbp-268h] BYREF
  _QWORD v114[9]; // [rsp+418h] [rbp-258h] BYREF
  _QWORD v115[2]; // [rsp+460h] [rbp-210h] BYREF
  size_t v116; // [rsp+470h] [rbp-200h]
  unsigned __int64 v117; // [rsp+478h] [rbp-1F8h]
  __int64 v118; // [rsp+480h] [rbp-1F0h]
  __int64 v119; // [rsp+488h] [rbp-1E8h]
  _QWORD v120[3]; // [rsp+490h] [rbp-1E0h] BYREF
  __int128 v121; // [rsp+4A8h] [rbp-1C8h]
  __int64 v122; // [rsp+4B8h] [rbp-1B8h]
  __int64 v123; // [rsp+4C0h] [rbp-1B0h]
  _BYTE v124[216]; // [rsp+4C8h] [rbp-1A8h] BYREF
  char **v125; // [rsp+5A0h] [rbp-D0h]
  void *v126; // [rsp+5A8h] [rbp-C8h]
  __int64 v127; // [rsp+5B0h] [rbp-C0h]
  int v128; // [rsp+5BCh] [rbp-B4h]
  size_t v129; // [rsp+5C0h] [rbp-B0h] BYREF
  void *v130; // [rsp+5C8h] [rbp-A8h]
  size_t v131; // [rsp+5D0h] [rbp-A0h]
  _QWORD *v132; // [rsp+5D8h] [rbp-98h]
  __int64 v133; // [rsp+5E0h] [rbp-90h]
  unsigned __int64 v134; // [rsp+5E8h] [rbp-88h]
  _QWORD *v135; // [rsp+5F0h] [rbp-80h]
  _QWORD *v136; // [rsp+5F8h] [rbp-78h]
  unsigned __int64 v137; // [rsp+600h] [rbp-70h]
  unsigned __int64 *v138; // [rsp+608h] [rbp-68h]
  unsigned __int64 v139; // [rsp+610h] [rbp-60h] BYREF
  void *__src; // [rsp+618h] [rbp-58h]
  size_t __n; // [rsp+620h] [rbp-50h]
  size_t v142; // [rsp+628h] [rbp-48h]
  __int64 v143; // [rsp+630h] [rbp-40h]
  unsigned __int64 v144; // [rsp+638h] [rbp-38h]
  unsigned __int64 v145; // [rsp+640h] [rbp-30h]

  v133 = a6; /*0x100445b04*/
  v8 = a4; /*0x100445b0e*/
  v10 = a2; /*0x100445b14*/
  v132 = a1; /*0x100445b17*/
  v113[0] = a4; /*0x100445b1e*/
  v113[1] = a5; /*0x100445b25*/
  if ( !(unsigned __int8)zip::types::DateTime::is_valid::hccb39b3b4e5314ae((char *)a3 + 44) ) /*0x100445b30*/
    *((_DWORD *)a3 + 11) = 33; /*0x100445b39*/
  if ( *((_DWORD *)a3 + 4) == 1 ) /*0x100445b46*/
  {
    v13 = *((_DWORD *)a3 + 5) | 0x8000; /*0x100445b4d*/
  }
  else
  {
    *((_DWORD *)a3 + 4) = 1; /*0x100445b53*/
    v13 = 33188; /*0x100445b5b*/
  }
  *((_DWORD *)a3 + 5) = v13; /*0x100445b6a*/
  v137 = 0x8000000000000001LL; /*0x100445b72*/
  if ( *(_QWORD *)(a2 + 72) == 0x8000000000000001LL ) /*0x100445b7a*/
  {
    v14 = std::io::error::Error::new::h2838dbd593bc6ec9(11, &anon_d9d2f5b2094eba1d5a276dc1a2756762_1119, 28, v11, v12); /*0x100445b92*/
    v15 = 0x8000000000000001LL; /*0x100445b99*/
LABEL_21:
    v105[0] = v15; /*0x100445d1b*/
    v105[1] = v14; /*0x100445d22*/
    v105[2] = v8; /*0x100445d29*/
    *(_QWORD *)v124 = v113; /*0x100445d37*/
    *(_QWORD *)&v124[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100445d45*/
    *(_QWORD *)&v124[16] = v105; /*0x100445d53*/
    *(_QWORD *)&v124[24] = _$LT$zip..result..ZipError$u20$as$u20$core..fmt..Display$GT$::fmt::h5ee28b71fd8f1b3c; /*0x100445d61*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v102, &unk_1018F701A, v124); /*0x100445d7d*/
    v23 = v132; /*0x100445d89*/
    v132[3] = v102[2]; /*0x100445d90*/
    v24 = v102[0]; /*0x100445d94*/
    v23[2] = v102[1]; /*0x100445da2*/
    v23[1] = v24; /*0x100445da6*/
    result = core::ptr::drop_in_place$LT$zip..result..ZipError$GT$::h4417b06c96c0e721(v105[0], v105[1]); /*0x100445db8*/
    *v23 = 10; /*0x100445dbd*/
    return result; /*0x100445dd5*/
  }
  if ( *((_WORD *)a3 + 20) ) /*0x100445ba1*/
  {
    v8 = 23; /*0x100445bb4*/
    if ( *((_WORD *)a3 + 21) == 99 ) /*0x100445bba*/
      v8 = 66; /*0x100445bba*/
    v14 = (unsigned __int64)&anon_d9d2f5b2094eba1d5a276dc1a2756762_1123; /*0x100445bc5*/
    if ( *((_WORD *)a3 + 21) == 99 ) /*0x100445bcc*/
      v14 = (unsigned __int64)&anon_d9d2f5b2094eba1d5a276dc1a2756762_1122; /*0x100445bcc*/
    v15 = 0x8000000000000003LL; /*0x100445bd4*/
    goto LABEL_21; /*0x100445bd7*/
  }
  if ( *a3 ) /*0x100445bdc*/
  {
    v14 = (unsigned __int64)&anon_d9d2f5b2094eba1d5a276dc1a2756762_1120; /*0x100445be6*/
    v8 = 29; /*0x100445bed*/
    v15 = 0x8000000000000003LL; /*0x100445bf3*/
    goto LABEL_21; /*0x100445bf6*/
  }
  v123 = a3[6]; /*0x100445bff*/
  v122 = a3[5]; /*0x100445c0a*/
  v121 = *(_OWORD *)(a3 + 3); /*0x100445c20*/
  v120[2] = a3[2]; /*0x100445c2b*/
  v16 = *a3; /*0x100445c32*/
  v120[1] = a3[1]; /*0x100445c39*/
  v120[0] = v16; /*0x100445c40*/
  v17 = (__int64)v124; /*0x100445c47*/
  zip::write::_$LT$impl$u20$zip..write..zip_writer..ZipWriter$LT$W$GT$$GT$::finish_file::h3dcf615b8f4491b4(v124, a2); /*0x100445c51*/
  v15 = *(_QWORD *)v124; /*0x100445c56*/
  if ( *(_QWORD *)v124 != 0x8000000000000006LL ) /*0x100445c60*/
  {
    v14 = *(_QWORD *)&v124[8]; /*0x100445d0d*/
    v8 = *(_QWORD *)&v124[16]; /*0x100445d14*/
    goto LABEL_21; /*0x100445d14*/
  }
  v18 = 0x8000000000000000LL; /*0x100445c6a*/
  v125 = &anon_d9d2f5b2094eba1d5a276dc1a2756762_1126; /*0x100445c75*/
  v127 = 115; /*0x100445c81*/
  v126 = &anon_d9d2f5b2094eba1d5a276dc1a2756762_1124; /*0x100445c8f*/
  v138 = (unsigned __int64 *)(a2 + 72); /*0x100445c96*/
  v134 = 0x8000000000000000LL; /*0x100445c9a*/
  if ( *(_QWORD *)(a2 + 72) != 0x8000000000000000LL ) /*0x100445ca4*/
LABEL_145:
    core::panicking::panic_fmt::h3a793735daf6e4ec(v126, v127, v125); /*0x100446b8d*/
  v19 = *(_QWORD *)(a2 + 104); /*0x100445caa*/
  v106 = 0; /*0x100445cb1*/
  v107 = 0; /*0x100445cb8*/
  v139 = 0; /*0x100445cc2*/
  __src = (void *)1; /*0x100445cca*/
  __n = 0; /*0x100445cd2*/
  v145 = a2; /*0x100445ce1*/
  v144 = v19; /*0x100445ce5*/
  if ( BYTE2(v123) ) /*0x100445ce9*/
  {
    v20 = v19 > 0xFFFFFFFE; /*0x100445cf9*/
    v21 = 8 * v20 + 16; /*0x100445cfc*/
    v22 = 1; /*0x100445d03*/
  }
  else
  {
    if ( v19 <= 0xFFFFFFFE ) /*0x100445dde*/
      goto LABEL_29; /*0x100445dde*/
    v20 = 1; /*0x100445de4*/
    v21 = 8; /*0x100445de9*/
    v22 = 0; /*0x100445ded*/
  }
  v108[0] = v22; /*0x100445def*/
  v108[1] = 0; /*0x100445df6*/
  v108[2] = v22; /*0x100445e01*/
  v108[3] = 0; /*0x100445e08*/
  v108[4] = v20; /*0x100445e13*/
  v108[5] = v19; /*0x100445e1a*/
  v109 = 1; /*0x100445e21*/
  v110 = v21; /*0x100445e2a*/
  v26 = zip::types::Zip64ExtraFieldBlock::serialize::h5b9409fd55f40db3(v108); /*0x100445e38*/
  v129 = v27; /*0x100445e3d*/
  v130 = (void *)v26; /*0x100445e44*/
  v131 = v27; /*0x100445e4b*/
  v28 = __src; /*0x100445e52*/
  v29 = __n; /*0x100445e56*/
  if ( __n ) /*0x100445e5d*/
  {
    v143 = __n; /*0x100446ab2*/
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f(&v129, v27, __n, 1, 1); /*0x100446ab9*/
    v26 = (__int64)v130; /*0x100446abe*/
    v27 = v131; /*0x100446ac5*/
    v10 = v145; /*0x100446acc*/
    v29 = v143; /*0x100446ad0*/
  }
  v17 = v27 + v26; /*0x100445e66*/
  v30 = v28; /*0x100445e69*/
  v31 = v27; /*0x100445e6c*/
  memcpy((void *)(v27 + v26), v30, v29); /*0x100445e72*/
  v131 = v29 + v31; /*0x100445e7a*/
  __n = 0; /*0x100445e81*/
  a2 = v139; /*0x100445e89*/
  if ( v139 ) /*0x100445e90*/
  {
    v17 = (__int64)__src; /*0x100445e92*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v139, 1); /*0x100445e9b*/
  }
  __n = v131; /*0x100445ea7*/
  __src = v130; /*0x100445eb9*/
  v139 = v129; /*0x100445ebd*/
  v19 = v144; /*0x100445ec1*/
LABEL_29:
  if ( a5 < 0 ) /*0x100445ed6*/
  {
LABEL_30:
    v32 = 0; /*0x100445ed8*/
    goto LABEL_31; /*0x100445ed8*/
  }
  LODWORD(v143) = (unsigned __int16)v122; /*0x100445eee*/
  LODWORD(v142) = WORD1(v122); /*0x100445ef8*/
  v136 = (_QWORD *)(v10 + 80); /*0x100445efb*/
  if ( a5 ) /*0x100445eff*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, a2, v18); /*0x100445f01*/
    v33 = a5 + v19 + 30; /*0x100445f06*/
  }
  else
  {
    v17 = 1; /*0x100445f0d*/
    a2 = v8; /*0x100445f12*/
    v33 = v19 + 30; /*0x100445f1d*/
  }
  v34 = v123; /*0x100445f21*/
  v35 = __n; /*0x100445f28*/
  v135 = (_QWORD *)v33; /*0x100445f30*/
  if ( (unsigned __int16)v123 >= 2uLL ) /*0x100445f34*/
  {
    v36 = (__n + v33) % (unsigned __int16)v123; /*0x100445f3f*/
    if ( v36 ) /*0x100445f45*/
    {
      v37 = (unsigned __int16)v123 - v36; /*0x100445f4a*/
      do /*0x100445f5a*/
      {
        v19 = v37; /*0x100445f50*/
        v37 += (unsigned __int16)v123; /*0x100445f53*/
      }
      while ( v19 < 6 ); /*0x100445f5a*/
      if ( (__int64)v19 < 4 ) /*0x100445f60*/
        goto LABEL_30; /*0x100445f60*/
      v19 -= 4LL; /*0x100445f66*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, a2, v36); /*0x100445f6a*/
      v38 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc19___rust_alloc_zeroed(v19, 1); /*0x100445f77*/
      if ( !v38 ) /*0x100445f7f*/
      {
        v32 = 1; /*0x100446c6c*/
LABEL_31:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v32, v19); /*0x100445eda*/
      }
      *v38 = v34; /*0x100445f85*/
      zip::write::ExtendedFileOptions::add_extra_data_unchecked::hb49c514a39dcdb0a(v124, &v139, 41246, v38, v19); /*0x100445f9e*/
      v15 = *(_QWORD *)v124; /*0x100445fa3*/
      if ( *(_QWORD *)v124 != 0x8000000000000006LL ) /*0x100445fad*/
      {
        v14 = *(_QWORD *)&v124[8]; /*0x100446356*/
        v8 = *(_QWORD *)&v124[16]; /*0x10044635d*/
        goto LABEL_67; /*0x10044635d*/
      }
      v35 = __n; /*0x100445fb3*/
      v19 = v144; /*0x100445fb7*/
    }
  }
  v116 = v35; /*0x100445fbf*/
  zip::types::ZipFileData::initialize_local_block::h891e9fe65c935fd4(v104, v8, a5, v120, &v106, v19, 0); /*0x100446016*/
  v39 = v145; /*0x10044601b*/
  BYTE4(v104[25]) = *(_BYTE *)(v145 + 211) ^ 1; /*0x10044602a*/
  v40 = HIBYTE(v104[25]); /*0x100446030*/
  v41 = zip::types::ZipFileData::version_needed::hb480bec6696782f1(v104); /*0x10044603e*/
  if ( v41 <= v40 ) /*0x100446048*/
    v41 = v40; /*0x100446048*/
  HIBYTE(v104[25]) = v41; /*0x10044604b*/
  v104[2] = 1; /*0x100446051*/
  v104[3] = v135; /*0x100446060*/
  memcpy(__dst, v104, sizeof(__dst)); /*0x10044607a*/
  v42 = v39; /*0x100446091*/
  if ( indexmap::map::IndexMap$LT$K$C$V$C$S$GT$::get_index_of::h7c1dfc943a6ee4da(v39, &__dst[16]) == 1 ) /*0x100446098*/
  {
    *(_QWORD *)v124 = &__dst[16]; /*0x10044609a*/
    *(_QWORD *)&v124[8] = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hb0e5ccfe34f0e0eb; /*0x1004460a8*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v111, &unk_1018F9694, v124); /*0x1004460c4*/
    v15 = v111[0]; /*0x1004460c9*/
    v14 = v111[1]; /*0x1004460d0*/
    v8 = v111[2]; /*0x1004460d7*/
    core::ptr::drop_in_place$LT$zip..types..ZipFileData$GT$::h84cfd24e855096f6(__dst); /*0x1004460e5*/
    if ( v15 != 0x8000000000000006LL ) /*0x1004460ed*/
    {
LABEL_67:
      if ( v139 ) /*0x10044636b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v139, 1); /*0x10044637a*/
      goto LABEL_21; /*0x10044637f*/
    }
  }
  else
  {
    v143 = _$LT$alloc..boxed..Box$LT$str$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h94944c7a6b6c3a4f(&__dst[16]); /*0x100446100*/
    v115[0] = v143; /*0x100446104*/
    v144 = v43; /*0x10044610b*/
    v115[1] = v43; /*0x10044610f*/
    v44 = _$LT$alloc..boxed..Box$LT$str$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h94944c7a6b6c3a4f(v115); /*0x100446125*/
    v46 = v45; /*0x100446128*/
    memcpy(v102, __dst, sizeof(v102)); /*0x100446141*/
    indexmap::map::IndexMap$LT$K$C$V$C$S$GT$::insert_full::hd768b3b4319453ec(v124, v39, v44, v46, v102); /*0x10044615c*/
    memcpy(v105, &v124[8], sizeof(v105)); /*0x100446174*/
    if ( LODWORD(v105[0]) != 2 ) /*0x100446180*/
      core::ptr::drop_in_place$LT$zip..types..ZipFileData$GT$::h84cfd24e855096f6(v105); /*0x10044618c*/
    if ( (indexmap::map::IndexMap$LT$K$C$V$C$S$GT$::get_index_of::h7c1dfc943a6ee4da(v39, v115) & 1) == 0 ) /*0x1004461a5*/
      core::option::unwrap_failed::h44626cade04bbf1e(&off_101AA8C90); /*0x100446af7*/
    v14 = v47; /*0x1004461ab*/
    if ( v144 ) /*0x1004461b5*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v143, v144, 1); /*0x1004461c0*/
  }
  *(_BYTE *)(v42 + 208) = 1; /*0x1004461c5*/
  v144 = v139; /*0x1004461d0*/
  v143 = (__int64)__src; /*0x1004461e3*/
  v142 = __n; /*0x1004461e7*/
  zip::write::ExtendedFileOptions::validate_extra_data::habad94c123f13d48(v124, __src, __n, 0); /*0x1004461ed*/
  v15 = *(_QWORD *)v124; /*0x1004461f2*/
  if ( *(_QWORD *)v124 != 0x8000000000000006LL ) /*0x1004461fc*/
  {
    v142 = *(_QWORD *)&v124[8]; /*0x100446267*/
    v8 = *(_QWORD *)&v124[16]; /*0x10044626b*/
    goto LABEL_73; /*0x100446272*/
  }
  v105[0] = v14; /*0x1004461fe*/
  v102[0] = *(_QWORD *)(v145 + 48); /*0x10044620d*/
  if ( v14 >= *(_QWORD *)(v145 + 16) ) /*0x100446218*/
  {
    *(_QWORD *)v124 = v102; /*0x100446bcc*/
    *(_QWORD *)&v124[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100446bda*/
    *(_QWORD *)&v124[16] = v105; /*0x100446be8*/
    *(_QWORD *)&v124[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100446bef*/
    v99 = &off_101AA8C78; /*0x100446bf6*/
    v100 = (__int64)v124; /*0x100446bfd*/
    v101 = &anon_442098b8dbdde10fede7d79fc85e0df3_1; /*0x100446c04*/
    goto LABEL_148; /*0x100446c0b*/
  }
  v135 = (_QWORD *)(*(_QWORD *)(v145 + 8) + 232 * v14); /*0x100446230*/
  zip::types::ZipFileData::local_block::h43426c00572aba8d(v124); /*0x100446234*/
  if ( v124[0] == 1 ) /*0x100446240*/
  {
    v15 = *(_QWORD *)&v124[8]; /*0x100446242*/
    v142 = *(_QWORD *)&v124[16]; /*0x100446250*/
    v8 = *(_QWORD *)&v124[24]; /*0x100446254*/
    goto LABEL_73; /*0x10044625b*/
  }
  *(_DWORD *)((char *)__dst + 3) = *(_DWORD *)&v124[4]; /*0x100446283*/
  __dst[0] = *(_DWORD *)&v124[1]; /*0x100446289*/
  if ( *v138 != v134 ) /*0x10044629d*/
  {
    v99 = &anon_d9d2f5b2094eba1d5a276dc1a2756762_1126; /*0x100446c0d*/
    v100 = 115; /*0x100446c14*/
    v101 = &anon_d9d2f5b2094eba1d5a276dc1a2756762_1124; /*0x100446c19*/
LABEL_148:
    core::panicking::panic_fmt::h3a793735daf6e4ec(v101, v100, v99); /*0x100446c20*/
  }
  v118 = *(_QWORD *)&v124[8]; /*0x1004462aa*/
  v119 = *(_QWORD *)&v124[16]; /*0x1004462b8*/
  v128 = v124[30]; /*0x1004462c6*/
  v48 = *(unsigned __int16 *)&v124[28]; /*0x1004462cc*/
  v49 = *(unsigned int *)&v124[24]; /*0x1004462d3*/
  v50 = *(_QWORD *)(v145 + 80); /*0x1004462de*/
  v8 = *(_QWORD *)(v145 + 104); /*0x1004462e2*/
  v51 = -1; /*0x1004462ed*/
  v117 = v8 + 30; /*0x1004462f4*/
  if ( v8 < 0xFFFFFFFFFFFFFFE2LL ) /*0x1004462fb*/
    v51 = v8 + 30; /*0x1004462fb*/
  if ( v51 > v50 ) /*0x100446302*/
  {
    v52 = *(_QWORD *)(v145 + 96); /*0x100446308*/
    v53 = v51 - v52; /*0x10044630c*/
    if ( v53 > v50 - v52 ) /*0x100446315*/
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f(v136, v52, v53, 1, 1); /*0x100446c53*/
  }
  v54 = ((unsigned __int64)((v128 << 16) | v48) << 32) | v49; /*0x10044632a*/
  v55 = *(_QWORD *)(v145 + 96); /*0x100446331*/
  v56 = *(_QWORD *)(v145 + 88); /*0x10044633d*/
  if ( v8 > v55 ) /*0x10044633b*/
  {
    __bzero(v56 + v55, v8 - v55); /*0x100446344*/
    *(_QWORD *)(v145 + 96) = v8; /*0x10044634d*/
    v55 = v8; /*0x100446351*/
  }
  v57 = __dst[0]; /*0x100446388*/
  *(_DWORD *)(v56 + v8 + 3) = *(_DWORD *)((char *)__dst + 3); /*0x100446394*/
  *(_DWORD *)(v56 + v8) = v57; /*0x100446399*/
  *(_QWORD *)(v56 + v8 + 7) = v118; /*0x1004463a4*/
  *(_QWORD *)(v56 + v8 + 15) = v119; /*0x1004463b0*/
  *(_DWORD *)(v56 + v8 + 23) = v54; /*0x1004463b5*/
  *(_BYTE *)(v56 + v8 + 29) = BYTE6(v54); /*0x1004463c1*/
  *(_WORD *)(v56 + v8 + 27) = WORD2(v54); /*0x1004463ca*/
  v58 = v117; /*0x1004463d0*/
  v59 = v145; /*0x1004463da*/
  if ( v117 > v55 ) /*0x1004463de*/
    *(_QWORD *)(v145 + 96) = v117; /*0x1004463e0*/
  *(_QWORD *)(v59 + 104) = v58; /*0x1004463e4*/
  v60 = _$LT$std..io..cursor..Cursor$LT$alloc..vec..Vec$LT$u8$C$A$GT$$GT$$u20$as$u20$std..io..Write$GT$::write_all::hc69fa62496bf2645( /*0x1004463f8*/
          v136,
          v135[10],
          v135[11]);
  if ( !v60 ) /*0x100446400*/
  {
    if ( !v116 ) /*0x1004465c1*/
    {
      v61 = v145; /*0x100446a62*/
      if ( v144 ) /*0x100446a66*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v143, v144, 1); /*0x100446a75*/
      goto LABEL_76; /*0x100446a7a*/
    }
    v60 = _$LT$std..io..cursor..Cursor$LT$alloc..vec..Vec$LT$u8$C$A$GT$$GT$$u20$as$u20$std..io..Write$GT$::write_all::hc69fa62496bf2645( /*0x1004465d3*/
            v136,
            v143,
            v142);
    if ( !v60 ) /*0x1004465db*/
    {
      v66 = (_QWORD *)alloc::alloc::exchange_malloc::h35ae2f61eae31883(); /*0x1004465e1*/
      v61 = v145; /*0x1004465e6*/
      v67 = v66; /*0x1004465ea*/
      *v66 = 1; /*0x1004465ed*/
      v66[1] = 1; /*0x1004465f4*/
      v66[2] = v144; /*0x100446600*/
      v66[3] = v143; /*0x100446609*/
      v66[4] = v142; /*0x100446612*/
      v68 = (volatile signed __int64 *)v135[16]; /*0x10044661b*/
      v69 = v135 + 16; /*0x100446622*/
      if ( v68 && !_InterlockedDecrement64(v68) ) /*0x10044662b*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h8c736ebb6cbf4274(v69); /*0x100446634*/
      *v69 = v67; /*0x100446639*/
      goto LABEL_76; /*0x10044663c*/
    }
  }
  v142 = v60; /*0x100446406*/
  v15 = v137; /*0x10044640a*/
LABEL_73:
  v61 = v145; /*0x10044640e*/
  if ( v144 ) /*0x100446419*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v143, v144, 1); /*0x100446424*/
  if ( v15 != 0x8000000000000006LL ) /*0x10044642c*/
  {
    zip::write::_$LT$impl$u20$zip..write..zip_writer..ZipWriter$LT$W$GT$$GT$::abort_file::h75a99ee2371c1d4c(v124, v61); /*0x100446593*/
    if ( *(_QWORD *)v124 != 0x8000000000000006LL ) /*0x1004465a2*/
      core::ptr::drop_in_place$LT$zip..result..ZipError$GT$::h4417b06c96c0e721(*(_QWORD *)v124, *(_QWORD *)&v124[8]); /*0x1004465ab*/
    v14 = v142; /*0x1004465b0*/
    goto LABEL_21; /*0x1004465b4*/
  }
LABEL_76:
  v62 = v138; /*0x100446432*/
  if ( *v138 != v134 ) /*0x100446441*/
    goto LABEL_145; /*0x100446441*/
  *(_QWORD *)(v61 + 160) = *(_QWORD *)(v61 + 104); /*0x10044644b*/
  if ( (_DWORD)v121 == 1 ) /*0x100446459*/
  {
    qmemcpy(v124, v62, 0x48u); /*0x10044646e*/
    *v62 = v137; /*0x100446475*/
    if ( *(_QWORD *)v124 != v134 ) /*0x100446487*/
      core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x100446b28*/
        &anon_d9d2f5b2094eba1d5a276dc1a2756762_1124,
        115,
        &anon_d9d2f5b2094eba1d5a276dc1a2756762_1125);
    v61 = v145; /*0x10044648d*/
    v114[3] = *(_QWORD *)(v145 + 104); /*0x100446495*/
    v114[2] = *(_QWORD *)(v145 + 96); /*0x1004464a0*/
    v63 = *(_QWORD *)(v145 + 80); /*0x1004464a7*/
    v114[1] = *(_QWORD *)(v145 + 88); /*0x1004464af*/
    v114[0] = v63; /*0x1004464b6*/
    v114[4] = 0; /*0x1004464c4*/
    v114[5] = 1; /*0x1004464cf*/
    v114[6] = 0; /*0x1004464da*/
    v114[7] = *(_QWORD *)((char *)&v121 + 4); /*0x1004464ec*/
    LODWORD(v114[8]) = HIDWORD(v121); /*0x1004464f9*/
    *(_QWORD *)(v145 + 160) = v114[3]; /*0x1004464ff*/
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h5ae91e87bab9901f(&v114[4], 0, 12, 1, 1); /*0x100446518*/
    v64 = v114[5]; /*0x10044651d*/
    v65 = v114[6]; /*0x100446524*/
    *(_DWORD *)(v114[5] + v114[6] + 8LL) = 0; /*0x10044652b*/
    *(_QWORD *)(v64 + v65) = 0; /*0x100446533*/
    v114[6] = v65 + 12; /*0x10044653f*/
    if ( *v62 != 0x8000000000000001LL ) /*0x100446557*/
    {
      if ( __OFSUB__(-(__int64)*v62, 1) ) /*0x10044655d*/
      {
        if ( *v136 ) /*0x10044656a*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v61 + 88), *v136, 1); /*0x10044657f*/
      }
      else
      {
        core::ptr::drop_in_place$LT$zip..zipcrypto..ZipCryptoWriter$LT$std..io..cursor..Cursor$LT$alloc..vec..Vec$LT$u8$GT$$GT$$GT$$GT$::h82011efee5681d95(v62); /*0x100446644*/
      }
    }
    qmemcpy(v62, v114, 0x48u); /*0x100446658*/
  }
  v105[0] = v14; /*0x10044665b*/
  v102[0] = *(_QWORD *)(v61 + 48); /*0x100446666*/
  if ( v14 >= *(_QWORD *)(v61 + 16) ) /*0x100446671*/
  {
    *(_QWORD *)v124 = v102; /*0x100446b39*/
    *(_QWORD *)&v124[8] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100446b47*/
    *(_QWORD *)&v124[16] = v105; /*0x100446b55*/
    *(_QWORD *)&v124[24] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x100446b5c*/
    v125 = &off_101AA8C60; /*0x100446b6a*/
    v126 = &anon_442098b8dbdde10fede7d79fc85e0df3_1; /*0x100446b78*/
    v127 = (__int64)v124; /*0x100446b86*/
    goto LABEL_145; /*0x100446b86*/
  }
  v70 = *(_QWORD *)(v61 + 8); /*0x100446677*/
  if ( *(_QWORD *)(v70 + 232 * v14 + 160) ) /*0x100446682*/
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::h9497f7a9e5e602e5(v70 + 232 * v14 + 160, v61 + 160); /*0x100446bbb*/
  *(_QWORD *)(v61 + 168) = 0; /*0x100446693*/
  crc32fast::Hasher::new::h6539b5f2faaf6475(v124); /*0x1004466a5*/
  v71 = *(_QWORD *)v124; /*0x1004466b1*/
  *(_QWORD *)(v61 + 152) = *(_QWORD *)&v124[8]; /*0x1004466bf*/
  v144 = v61 + 144; /*0x1004466c3*/
  *(_QWORD *)(v61 + 144) = v71; /*0x1004466c7*/
  v72 = (__int64)v112; /*0x1004466d1*/
  v73 = (__int64)v62; /*0x1004466dd*/
  zip::write::GenericZipWriter$LT$W$GT$::switch_to::h4e54424779e29ee0( /*0x1004466e0*/
    v112,
    v62,
    1,
    &anon_d9d2f5b2094eba1d5a276dc1a2756762_1121);
  v15 = v112[0]; /*0x1004466e5*/
  if ( v112[0] != 0x8000000000000006LL ) /*0x1004466ef*/
  {
    v14 = v112[1]; /*0x100446a09*/
    zip::write::_$LT$impl$u20$zip..write..zip_writer..ZipWriter$LT$W$GT$$GT$::abort_file::h75a99ee2371c1d4c(v124, v61); /*0x100446a1a*/
    if ( *(_QWORD *)v124 != 0x8000000000000006LL ) /*0x100446a29*/
      core::ptr::drop_in_place$LT$zip..result..ZipError$GT$::h4417b06c96c0e721(*(_QWORD *)v124, *(_QWORD *)&v124[8]); /*0x100446a32*/
    v8 = v112[2]; /*0x100446a37*/
    goto LABEL_21; /*0x100446a3e*/
  }
  *(_BYTE *)(v61 + 209) = 0; /*0x1004466f9*/
  while ( 1 )
  {
    if ( !a7 ) /*0x10044670f*/
    {
LABEL_135:
      result = (__int64)v132; /*0x100446a48*/
      *v132 = 11; /*0x100446a4f*/
      return result; /*0x100446a56*/
    }
    if ( !*(_BYTE *)(v61 + 208) ) /*0x10044671c*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v72, v73, v74); /*0x100446757*/
      v78 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 1); /*0x100446766*/
      if ( v78 ) /*0x10044676e*/
      {
        v80 = v78; /*0x100446774*/
        qmemcpy(v78, "No file has been started", 24); /*0x10044679d*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(24, 1, v79); /*0x1004467a0*/
        v81 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004467af*/
        if ( v81 ) /*0x1004467b7*/
        {
          *v81 = 24; /*0x1004467bd*/
          v81[1] = v80; /*0x1004467c4*/
          v81[2] = 24; /*0x1004467c8*/
          v72 = 40; /*0x1004467d0*/
          v73 = (__int64)v81; /*0x1004467d5*/
          result = std::io::error::Error::_new::h73f9b193369f24ba(40, v81, &off_101AA8CE0); /*0x1004467df*/
          v75 = result & 3; /*0x1004467e6*/
          switch ( result & 3 ) /*0x1004467f7*/
          {
            case 0LL: /*0x1004467f7*/
LABEL_99:
              if ( *(_BYTE *)(result + 16) == 35 ) /*0x100446706*/
                continue; /*0x100446706*/
              goto LABEL_139; /*0x100446706*/
            case 1LL: /*0x1004467f7*/
LABEL_109:
              if ( *(_BYTE *)(result + 15) != 35 ) /*0x100446833*/
                goto LABEL_139; /*0x100446833*/
              v83 = result - 1; /*0x100446839*/
              v84 = *(_QWORD *)(result - 1); /*0x10044683d*/
              v85 = *(_QWORD *)(result + 7); /*0x100446841*/
              if ( *(_QWORD *)v85 ) /*0x100446845*/
                (*(void (__fastcall **)(__int64))v85)(v84); /*0x100446850*/
              v86 = *(_QWORD *)(v85 + 8); /*0x100446852*/
              if ( v86 ) /*0x100446859*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v84, v86, *(_QWORD *)(v85 + 16)); /*0x100446862*/
              v73 = 24; /*0x100446867*/
              v72 = v83; /*0x100446871*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v83, 24, 8); /*0x100446874*/
              goto LABEL_125; /*0x100446879*/
            case 2LL: /*0x1004467f7*/
LABEL_115:
              v75 = result & 0xFFFFFFFF00000000LL; /*0x10044687e*/
              v74 = 0x400000000LL; /*0x10044688e*/
              goto LABEL_117; /*0x100446898*/
            case 3LL: /*0x1004467f7*/
LABEL_116:
              v75 = result & 0xFFFFFFFF00000000LL; /*0x10044689a*/
              v74 = 0x2300000000LL; /*0x1004468aa*/
LABEL_117:
              if ( v75 == v74 ) /*0x1004468b7*/
                continue; /*0x1004468b7*/
              if ( !result ) /*0x100446a46*/
                goto LABEL_135; /*0x100446a46*/
              goto LABEL_139; /*0x100446a46*/
          }
        }
        alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100446ae3*/
      }
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 24); /*0x100446c67*/
    }
    if ( *v62 == v137 )
    {
      v72 = 11; /*0x100446731*/
      v73 = (__int64)"write(): ZipWriter was already closed";
      result = std::io::error::Error::new::h2838dbd593bc6ec9(11, "write(): ZipWriter was already closed", 37, v75, v76);
      v75 = result & 3; /*0x100446744*/
      switch ( result & 3 ) /*0x100446755*/
      {
        case 0LL: /*0x100446755*/
          goto LABEL_99;
        case 1LL: /*0x100446755*/
          goto LABEL_109;
        case 2LL: /*0x100446755*/
          goto LABEL_115;
        case 3LL: /*0x100446755*/
          goto LABEL_116;
      }
    }
    v72 = (__int64)v62; /*0x1004467f9*/
    v73 = v133; /*0x1004467fc*/
    v82 = _$LT$zip..write..MaybeEncrypted$LT$W$GT$$u20$as$u20$std..io..Write$GT$::write::hd56b73f48fba8361( /*0x10044680b*/
            v62,
            v133,
            a7);
    result = v74; /*0x10044680e*/
    if ( (v82 & 1) != 0 ) /*0x100446814*/
      goto LABEL_108; /*0x100446814*/
    v87 = a7 - v74; /*0x1004468c5*/
    if ( a7 < v74 ) /*0x1004468c8*/
      core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(0, v74, a7, &off_101AA8D50); /*0x100446b10*/
    v72 = v144; /*0x1004468ce*/
    v73 = v133; /*0x1004468d2*/
    v88 = v74; /*0x1004468d9*/
    zip::write::ZipWriterStats::update::h64f754ebe9ceaed6(v144, v133, v74); /*0x1004468df*/
    v89 = v145; /*0x1004468e4*/
    if ( *(_DWORD *)(v145 + 172) ) /*0x1004468e8*/
    {
      v90 = *(_QWORD *)(v145 + 16); /*0x1004468f3*/
      if ( !v90 ) /*0x1004468fb*/
        core::option::unwrap_failed::h44626cade04bbf1e(&off_101AA8D38); /*0x100446c2e*/
      v75 = *(_QWORD *)(v145 + 8); /*0x100446901*/
      if ( !*(_BYTE *)(v75 + 232 * v90 - 27) ) /*0x100446912*/
      {
        v91 = v145; /*0x10044693b*/
        zip::write::_$LT$impl$u20$zip..write..zip_writer..ZipWriter$LT$W$GT$$GT$::abort_file::h75a99ee2371c1d4c( /*0x10044693e*/
          v124,
          v145);
        v93 = *(_QWORD *)v124; /*0x100446943*/
        v61 = v89; /*0x10044694d*/
        if ( *(_QWORD *)v124 != 0x8000000000000006LL ) /*0x100446950*/
        {
          v91 = *(_QWORD *)&v124[8]; /*0x100446952*/
          core::ptr::drop_in_place$LT$zip..result..ZipError$GT$::h4417b06c96c0e721(*(_QWORD *)v124, *(_QWORD *)&v124[8]); /*0x100446959*/
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v93, v91, v92); /*0x10044695e*/
        v94 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(34, 1); /*0x10044696d*/
        v62 = v138; /*0x100446975*/
        if ( !v94 ) /*0x100446979*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 34); /*0x100446c80*/
        v96 = v94; /*0x10044697f*/
        qmemcpy(v94, "Large file option has not been set", 34); /*0x1004469b6*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(34, 1, v95); /*0x1004469c0*/
        v97 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(24, 8); /*0x1004469cf*/
        if ( !v97 ) /*0x1004469d7*/
          alloc::alloc::handle_alloc_error::h450e44845847d219(8, 24); /*0x100446c3d*/
        *v97 = 34; /*0x1004469dd*/
        v97[1] = v96; /*0x1004469e4*/
        v97[2] = 34; /*0x1004469e8*/
        v72 = 40; /*0x1004469f0*/
        v73 = (__int64)v97; /*0x1004469f5*/
        result = std::io::error::Error::_new::h73f9b193369f24ba(40, v97, &off_101AA8CE0); /*0x1004469ff*/
LABEL_108:
        v75 = result & 3; /*0x10044681c*/
        switch ( result & 3 ) /*0x10044682d*/
        {
          case 0LL: /*0x10044682d*/
            goto LABEL_99;
          case 1LL: /*0x10044682d*/
            goto LABEL_109;
          case 2LL: /*0x10044682d*/
            goto LABEL_115;
          case 3LL: /*0x10044682d*/
            goto LABEL_116;
        }
      }
    }
    if ( !v88 ) /*0x100446917*/
      break; /*0x100446917*/
    v133 += v88; /*0x10044691d*/
    a7 = v87; /*0x100446924*/
LABEL_125:
    v61 = v145; /*0x100446927*/
    v62 = v138; /*0x10044692b*/
  }
  result = (__int64)&off_101AA8C30; /*0x100446a7f*/
LABEL_139:
  v98 = v132; /*0x100446a86*/
  *v132 = 2; /*0x100446a8d*/
  v98[1] = result; /*0x100446a94*/
  return result; /*0x100445dc4*/
}