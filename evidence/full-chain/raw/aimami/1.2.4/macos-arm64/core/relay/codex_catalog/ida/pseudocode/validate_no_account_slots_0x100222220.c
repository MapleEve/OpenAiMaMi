// __ZN13codexmate_lib4core5relay13codex_catalog25validate_no_account_slots @ 0x100222220 | 1.2.4 NEW-delta
_QWORD *__fastcall codexmate_lib::core::relay::codex_catalog::validate_no_account_slots::he4facdd0ca5ca838(
        _QWORD *a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 *a6,
        unsigned __int64 a7)
{
  _QWORD *v7; // r14
  _QWORD *v8; // rax
  __int64 v11; // rax
  __int64 v12; // r8
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 *v18; // r13
  __int64 *v19; // r14
  size_t v20; // r12
  void *v21; // rax
  size_t v22; // rcx
  __int64 *v23; // rax
  __int64 v24; // r13
  __int64 *v25; // r15
  __int64 v26; // rsi
  __int64 v27; // rax
  __int64 v28; // rdx
  char v29; // al
  const void *v30; // rbx
  unsigned __int64 v31; // r14
  __m128i v32; // xmm1
  __int64 *v33; // r13
  __int64 i; // rdx
  __int64 (__fastcall *v35)(); // rax
  unsigned __int64 v36; // r14
  __m128i v37; // xmm2
  char *v39; // rax
  unsigned int v40; // eax
  __int64 (__fastcall *v41)(); // r12
  _QWORD *v42; // rbx
  __int64 v43; // r14
  __int64 v44; // r13
  size_t v45; // rcx
  int v46; // eax
  _QWORD *v47; // r14
  __int64 v48; // rsi
  __int64 v49; // rsi
  __int64 v50; // rsi
  char *v51; // rdi
  __int64 (__fastcall *v52)(); // rsi
  __int64 v53; // rax
  __int64 v54; // rsi
  __int64 v55; // rax
  __int64 v56; // rsi
  char *v57; // rdi
  __int64 (__fastcall *v58)(); // rcx
  _QWORD *v59; // rdx
  __int64 (__fastcall *v60)(); // rsi
  __int64 v61; // rsi
  __int64 v62; // rax
  __int64 v63; // rdx
  _BYTE *v64; // rbx
  __int64 *v65; // rbx
  size_t v66; // r12
  _QWORD *v67; // rax
  __int64 (__fastcall *v68)(); // rcx
  __int64 v69; // rax
  __int64 v71; // rsi
  __int64 v72; // rax
  __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // r15
  bool v76; // zf
  _QWORD *v77; // r14
  __int64 v78; // rsi
  __int64 v79; // rsi
  __int64 v80; // rsi
  _QWORD *v81; // rbx
  __int64 v82; // r14
  __int64 v83; // rax
  __int64 v84; // rsi
  _BYTE v85[24]; // [rsp+0h] [rbp-220h] BYREF
  _BYTE v86[24]; // [rsp+18h] [rbp-208h] BYREF
  _BYTE v87[24]; // [rsp+30h] [rbp-1F0h] BYREF
  _BYTE v88[24]; // [rsp+48h] [rbp-1D8h] BYREF
  _BYTE v89[24]; // [rsp+60h] [rbp-1C0h] BYREF
  _BYTE v90[24]; // [rsp+78h] [rbp-1A8h] BYREF
  __m128i v91; // [rsp+90h] [rbp-190h] BYREF
  __m128i v92; // [rsp+A0h] [rbp-180h] BYREF
  void *__s2; // [rsp+B8h] [rbp-168h]
  char *v94; // [rsp+C0h] [rbp-160h]
  __int64 *v95; // [rsp+C8h] [rbp-158h]
  __int64 *v96; // [rsp+D0h] [rbp-150h]
  __int64 v97; // [rsp+D8h] [rbp-148h]
  __int64 v98; // [rsp+E0h] [rbp-140h]
  char *v99; // [rsp+E8h] [rbp-138h]
  __int64 (__fastcall *v100)(); // [rsp+F0h] [rbp-130h]
  __int64 v101; // [rsp+F8h] [rbp-128h]
  __int64 v102; // [rsp+100h] [rbp-120h]
  _QWORD v103[2]; // [rsp+108h] [rbp-118h] BYREF
  char *v104; // [rsp+118h] [rbp-108h] BYREF
  __int64 v105; // [rsp+120h] [rbp-100h]
  __int64 v106; // [rsp+128h] [rbp-F8h]
  __int64 v107; // [rsp+130h] [rbp-F0h]
  __int64 v108; // [rsp+138h] [rbp-E8h]
  __int64 v109; // [rsp+140h] [rbp-E0h]
  char *v110; // [rsp+148h] [rbp-D8h]
  __int64 v111; // [rsp+150h] [rbp-D0h] BYREF
  __int64 v112; // [rsp+158h] [rbp-C8h]
  __int64 v113; // [rsp+160h] [rbp-C0h] BYREF
  __int64 v114; // [rsp+168h] [rbp-B8h]
  __int64 (__fastcall *v115)(); // [rsp+170h] [rbp-B0h]
  __int64 *v116; // [rsp+178h] [rbp-A8h]
  char *v117; // [rsp+180h] [rbp-A0h] BYREF
  __int64 (__fastcall *v118)(); // [rsp+188h] [rbp-98h]
  __int64 v119; // [rsp+190h] [rbp-90h]
  __int64 v120; // [rsp+198h] [rbp-88h]
  __int64 v121; // [rsp+1A0h] [rbp-80h] BYREF
  __int64 v122; // [rsp+1A8h] [rbp-78h]
  size_t __n; // [rsp+1B0h] [rbp-70h]
  __int64 *v124; // [rsp+1B8h] [rbp-68h]
  _QWORD *v125; // [rsp+1C0h] [rbp-60h]
  __int64 v126; // [rsp+1C8h] [rbp-58h]
  __int64 v127; // [rsp+1D0h] [rbp-50h]
  __int64 *v128; // [rsp+1D8h] [rbp-48h] BYREF
  __int64 (__fastcall *v129)(); // [rsp+1E0h] [rbp-40h]
  _QWORD *v130; // [rsp+1E8h] [rbp-38h]
  __int64 (__fastcall *v131)(); // [rsp+1F0h] [rbp-30h]

  v7 = a1; /*0x100222234*/
  if ( !a7 ) /*0x10022223e*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100222289*/
    v8 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(54, 1); /*0x100222298*/
    if ( !v8 ) /*0x1002222a0*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 54); /*0x100222d59*/
    *(_QWORD *)((char *)v8 + 46) = 0x8280E38B9EE5A1A8LL; /*0x1002222b0*/
    v8[5] = 0xA1A8E6ACBDE8ADB8LL; /*0x1002222be*/
    v8[4] = 0xE4AAB8E4203120A9LL; /*0x1002222cc*/
    v8[3] = 0x8BE68980E981A6E8LL; /*0x1002222da*/
    v8[2] = 0x809CE991B0E5B387LL; /*0x1002222e8*/
    v8[1] = 0xE88FBCE5A1A8E6B7LL; /*0x1002222f6*/
    *v8 = 0x8FE5A6B4E8A097E6LL; /*0x100222304*/
    *a1 = 9; /*0x100222307*/
    a1[1] = 54; /*0x10022230e*/
    a1[2] = v8; /*0x100222316*/
    a1[3] = 54; /*0x10022231a*/
    return v7; /*0x100222322*/
  }
  if ( a7 > 5 ) /*0x100222244*/
  {
    v117 = (char *)&unk_1015E4C50; /*0x100222251*/
    v118 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x10022225f*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(a1 + 1, &unk_1017C1C57, &v117); /*0x100222278*/
    *a1 = 9; /*0x10022227d*/
    return v7; /*0x100222284*/
  }
  v116 = a2; /*0x10022232d*/
  v124 = a6; /*0x100222334*/
  v125 = a1; /*0x100222338*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100222343*/
  v13 = v11; /*0x100222345*/
  if ( *(_BYTE *)(v11 + 16) == 1 ) /*0x10022234c*/
  {
    v14 = *(_QWORD *)v11; /*0x100222352*/
    v15 = *(_QWORD *)(v13 + 8); /*0x100222356*/
  }
  else
  {
    v82 = v12; /*0x100222cb5*/
    v14 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x100222cb8*/
    v12 = v82; /*0x100222cbd*/
    *(_QWORD *)v13 = v14; /*0x100222cc0*/
    *(_QWORD *)(v13 + 8) = v15; /*0x100222cc4*/
    *(_BYTE *)(v13 + 16) = 1; /*0x100222cc8*/
  }
  *(_QWORD *)v13 = v14 + 1; /*0x10022235e*/
  v120 = 0; /*0x100222369*/
  v119 = 0; /*0x100222377*/
  v118 = nullptr; /*0x100222385*/
  v117 = (char *)anon_7245a3145add9b93f83b0a9aa358a664_13; /*0x100222393*/
  v121 = v14; /*0x10022239a*/
  v122 = v15; /*0x10022239e*/
  if ( v12 ) /*0x1002223a5*/
  {
    v126 = v12; /*0x100222cdd*/
    hashbrown::raw::RawTable$LT$T$C$A$GT$::reserve_rehash::hc6e7b6d5d2733f2a(&v117, v12, &v121, 1); /*0x100222ce9*/
    __n = 24 * v126; /*0x100222cfa*/
    v83 = 0; /*0x100222cfe*/
    v127 = (__int64)&v117; /*0x100222d07*/
    do /*0x100222d31*/
    {
      v84 = *(_QWORD *)(a4 + v83 + 8); /*0x100222d0b*/
      v126 = v83; /*0x100222d10*/
      hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h85b41af0a3639d0c(&v117, v84, *(_QWORD *)(a4 + v83 + 16)); /*0x100222d19*/
      v83 = v126 + 24; /*0x100222d22*/
    }
    while ( __n != v126 + 24 ); /*0x100222d31*/
  }
  v103[1] = v122; /*0x1002223af*/
  v103[0] = v121; /*0x1002223ba*/
  v102 = v120; /*0x1002223c8*/
  v101 = v119; /*0x1002223d6*/
  v100 = v118; /*0x1002223eb*/
  v99 = v117; /*0x1002223f2*/
  if ( *(_BYTE *)(v13 + 16) == 1 ) /*0x1002223fe*/
  {
    v16 = *(_QWORD *)v13; /*0x100222404*/
    v17 = *(_QWORD *)(v13 + 8); /*0x100222408*/
  }
  else
  {
    v16 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x100222d38*/
    *(_QWORD *)v13 = v16; /*0x100222d3d*/
    *(_QWORD *)(v13 + 8) = v17; /*0x100222d41*/
    *(_BYTE *)(v13 + 16) = 1; /*0x100222d45*/
  }
  v126 = 0x7FFFFFFFFFFFFFF1LL; /*0x100222416*/
  v107 = 0; /*0x100222425*/
  v106 = 0; /*0x100222433*/
  v105 = 0; /*0x100222441*/
  v104 = (char *)anon_7245a3145add9b93f83b0a9aa358a664_13; /*0x100222448*/
  v108 = v16; /*0x10022244f*/
  v109 = v17; /*0x100222456*/
  *(_QWORD *)v13 = v16 + 2; /*0x100222461*/
  v120 = 0; /*0x100222465*/
  v119 = 0; /*0x10022246c*/
  v118 = nullptr; /*0x100222473*/
  v117 = (char *)anon_7245a3145add9b93f83b0a9aa358a664_13; /*0x10022247a*/
  v121 = v16 + 1; /*0x100222481*/
  v122 = v17; /*0x100222485*/
  if ( !a3 ) /*0x10022248c*/
  {
    v18 = v124; /*0x100222898*/
    v58 = (__int64 (__fastcall *)())v124[2]; /*0x1002228a0*/
    v59 = (_QWORD *)v124[4]; /*0x1002228a4*/
    v60 = (__int64 (__fastcall *)())v124[5]; /*0x1002228a8*/
    v128 = (__int64 *)v124[1]; /*0x1002228ac*/
    v129 = v58; /*0x1002228b0*/
    v130 = v59; /*0x1002228b4*/
    v131 = v60; /*0x1002228b8*/
    if ( (unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hb1c63e5a0894fdd3(&v104, &v128) ) /*0x1002228c7*/
    {
LABEL_62:
      v128 = v18; /*0x10022299c*/
      v129 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1002229ab*/
      v130 = v18 + 3; /*0x1002229af*/
      v131 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1002229b3*/
      v64 = v90; /*0x1002229be*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v90, &unk_1017C1B6C, &v128); /*0x1002229cc*/
      v7 = v125; /*0x1002229d1*/
      goto LABEL_63; /*0x1002229d1*/
    }
    if ( v18[6] == 0x8000000000000000LL ) /*0x1002228e6*/
      goto LABEL_60; /*0x1002228e6*/
    v61 = v18[8]; /*0x1002228ec*/
    v113 = v18[7]; /*0x1002228f0*/
    v114 = v61; /*0x1002228f7*/
    v62 = codexmate_lib::core::relay::codex_catalog::canonical_no_account_slot_slug::hc71227110b17b428(); /*0x1002228fe*/
    if ( !v62 ) /*0x100222906*/
      goto LABEL_83; /*0x100222906*/
    v111 = v62; /*0x10022290c*/
    v112 = v63; /*0x100222913*/
    if ( !(unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h85b41af0a3639d0c(&v117, v62, v63) ) /*0x100222924*/
    {
LABEL_60:
      v128 = v124; /*0x100222931*/
      v129 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100222940*/
      v64 = v87; /*0x10022294b*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v87, &unk_1017C1C06, &v128); /*0x100222959*/
      v7 = v125; /*0x10022295e*/
      goto LABEL_63; /*0x100222962*/
    }
LABEL_77:
    v128 = &v111; /*0x100222b05*/
    v129 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h80995b1b08be7446; /*0x100222b17*/
    v64 = v88; /*0x100222b22*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v88, &unk_1017C1B89, &v128); /*0x100222b30*/
    v7 = v125; /*0x100222b35*/
    goto LABEL_63; /*0x100222b39*/
  }
  v127 = 232 * a3; /*0x100222499*/
  v18 = v124; /*0x1002224a5*/
  if ( !v102 ) /*0x1002224a9*/
  {
    v65 = (__int64 *)v124[1]; /*0x100222964*/
    v66 = v124[2]; /*0x100222968*/
    v67 = (_QWORD *)v124[4]; /*0x10022296c*/
    v68 = (__int64 (__fastcall *)())v124[5]; /*0x100222970*/
    v128 = v65; /*0x100222974*/
    v129 = (__int64 (__fastcall *)())v66; /*0x100222978*/
    v130 = v67; /*0x10022297c*/
    v131 = v68; /*0x100222980*/
    if ( (unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hb1c63e5a0894fdd3(&v104, &v128) ) /*0x10022298f*/
      goto LABEL_62; /*0x100222996*/
    if ( v18[6] == 0x8000000000000000LL ) /*0x100222ab6*/
      goto LABEL_78; /*0x100222ab6*/
    v71 = v124[8]; /*0x100222ac4*/
    v113 = v124[7]; /*0x100222ac8*/
    v114 = v71; /*0x100222acf*/
    v72 = codexmate_lib::core::relay::codex_catalog::canonical_no_account_slot_slug::hc71227110b17b428(); /*0x100222ad6*/
    if ( !v72 ) /*0x100222ade*/
      goto LABEL_83; /*0x100222ade*/
    v111 = v72; /*0x100222ae4*/
    v112 = v73; /*0x100222aeb*/
    if ( !(unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h85b41af0a3639d0c(&v117, v72, v73) ) /*0x100222afc*/
    {
LABEL_78:
      v33 = v116; /*0x100222b3e*/
      v74 = v127; /*0x100222b45*/
      while ( 1 ) /*0x100222b63*/
      {
        if ( v33[2] == v66 ) /*0x100222b67*/
        {
          v75 = v74; /*0x100222b73*/
          v76 = memcmp((const void *)v33[1], v65, v66) == 0; /*0x100222b7b*/
          v74 = v75; /*0x100222b7d*/
          if ( v76 ) /*0x100222b80*/
            break; /*0x100222b80*/
        }
        v33 += 29; /*0x100222b50*/
        v74 -= 232; /*0x100222b57*/
        if ( !v74 ) /*0x100222b5d*/
          goto LABEL_60; /*0x100222b5d*/
      }
LABEL_82:
      v128 = v33 + 3; /*0x100222b82*/
      v129 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100222b91*/
      v64 = v86; /*0x100222b9c*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v86, &unk_1017C1BB0, &v128); /*0x100222baa*/
      v7 = v125; /*0x100222baf*/
      goto LABEL_63; /*0x100222bb3*/
    }
    goto LABEL_77; /*0x100222b03*/
  }
  v96 = &v124[9 * a7]; /*0x1002224b8*/
  v115 = v100; /*0x1002224cd*/
  v110 = v99; /*0x1002224d4*/
  v94 = v99 - 16; /*0x1002224df*/
  v116 += 3; /*0x1002224e6*/
  v126 += 15; /*0x1002224f9*/
  while ( 2 ) /*0x1002224fe*/
  {
    v19 = (__int64 *)v18[1]; /*0x1002224fe*/
    v20 = v18[2]; /*0x100222502*/
    v21 = (void *)v18[4]; /*0x100222506*/
    v22 = v18[5]; /*0x10022250a*/
    v128 = v19; /*0x10022250e*/
    v129 = (__int64 (__fastcall *)())v20; /*0x100222512*/
    __s2 = v21; /*0x100222516*/
    v130 = v21; /*0x10022251d*/
    __n = v22; /*0x100222521*/
    v131 = (__int64 (__fastcall *)())v22; /*0x100222525*/
    if ( (unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hb1c63e5a0894fdd3(&v104, &v128) ) /*0x100222529*/
      goto LABEL_62; /*0x100222530*/
    v95 = v18 + 9; /*0x10022253a*/
    v23 = v18; /*0x100222541*/
    v24 = v127; /*0x100222544*/
    v25 = v116; /*0x100222548*/
    v124 = v23; /*0x10022254f*/
    if ( v23[6] != v126 ) /*0x10022255b*/
    {
      v26 = v124[8]; /*0x100222565*/
      v113 = v124[7]; /*0x100222569*/
      v114 = v26; /*0x100222570*/
      v27 = codexmate_lib::core::relay::codex_catalog::canonical_no_account_slot_slug::hc71227110b17b428(); /*0x100222577*/
      if ( v27 ) /*0x10022257f*/
      {
        v111 = v27; /*0x100222585*/
        v112 = v28; /*0x10022258c*/
        v29 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h85b41af0a3639d0c(&v117, v27, v28); /*0x10022259d*/
        v24 = v127; /*0x1002225a2*/
        v25 = v116; /*0x1002225a6*/
        if ( !v29 ) /*0x1002225af*/
          goto LABEL_20; /*0x1002225af*/
        goto LABEL_77; /*0x1002225af*/
      }
LABEL_83:
      v128 = &v113; /*0x100222bb8*/
      v129 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h80995b1b08be7446; /*0x100222bca*/
      v64 = v89; /*0x100222bd5*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v89, &unk_1017C1C30, &v128); /*0x100222be3*/
      v7 = v125; /*0x100222be8*/
      goto LABEL_63; /*0x100222bec*/
    }
LABEL_20:
    while ( 1 ) /*0x1002225d4*/
    {
      if ( *(v25 - 1) == v20 ) /*0x1002225d8*/
      {
        v30 = (const void *)*(v25 - 2); /*0x1002225da*/
        if ( !memcmp(v30, v19, v20) ) /*0x1002225e7*/
          break; /*0x1002225e7*/
      }
      v25 += 29; /*0x1002225c0*/
      v24 -= 232; /*0x1002225c7*/
      if ( !v24 ) /*0x1002225ce*/
        goto LABEL_60; /*0x1002225ce*/
    }
    v31 = core::hash::BuildHasher::hash_one::h374e6b9f2f19d75f(v103); /*0x100222602*/
    v32 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v31 >> 57), (__m128i)0LL); /*0x100222611*/
    v33 = v25 - 3; /*0x100222616*/
    for ( i = 0; ; i += 16 ) /*0x10022261a*/
    {
      v35 = v115; /*0x10022261c*/
      v36 = (unsigned __int64)v115 & v31; /*0x100222623*/
      v37 = _mm_loadu_si128((const __m128i *)&v110[v36]); /*0x10022262d*/
      _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v37, v32)); /*0x10022263b*/
      if ( (_DWORD)_RCX ) /*0x100222641*/
        break; /*0x100222641*/
LABEL_28:
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v37, (__m128i)-1LL)) ) /*0x1002226c8*/
        goto LABEL_82; /*0x1002226ce*/
      v31 = v36 + i + 16; /*0x1002226d4*/
    }
    v91 = v32; /*0x100222643*/
    v98 = i; /*0x10022264b*/
    v92 = v37; /*0x100222652*/
    while ( 1 ) /*0x10022265a*/
    {
      v97 = _RCX; /*0x10022265a*/
      __asm { tzcnt ecx, ecx } /*0x100222661*/
      v39 = &v94[-16 * ((unsigned __int64)v35 & (v36 + _RCX))]; /*0x100222676*/
      if ( v20 == *((_QWORD *)v39 + 1) && !memcmp(v30, *(const void **)v39, v20) ) /*0x100222688*/
        break; /*0x100222688*/
      v40 = v97 - 1; /*0x100222698*/
      LOWORD(v40) = v97 & (v97 - 1); /*0x10022269b*/
      _RCX = v40; /*0x10022269e*/
      v35 = v115; /*0x1002226a0*/
      v32 = _mm_load_si128(&v91); /*0x1002226a7*/
      i = v98; /*0x1002226af*/
      v37 = _mm_load_si128(&v92); /*0x1002226b6*/
      if ( ((unsigned __int16)v97 & (unsigned __int16)(v97 - 1)) == 0 ) /*0x1002226be*/
        goto LABEL_28; /*0x1002226be*/
    }
    codexmate_lib::core::relay::models::RelayProvider::exposed_models::h2ff218b9bb419776(&v128, v25 - 3); /*0x1002226e9*/
    v41 = v129; /*0x1002226ee*/
    v42 = v130; /*0x1002226f2*/
    if ( !v130 ) /*0x1002226f9*/
    {
LABEL_93:
      v81 = v124 + 3; /*0x100222c55*/
      if ( v128 ) /*0x100222c64*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, 96LL * (_QWORD)v128, 8); /*0x100222c76*/
      v128 = v25; /*0x100222c7b*/
      v129 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100222c86*/
      v130 = v81; /*0x100222c8a*/
      v131 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100222c8e*/
      v64 = v85; /*0x100222c99*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v85, &unk_1017C1BDA, &v128); /*0x100222ca7*/
      v7 = v125; /*0x100222cac*/
LABEL_63:
      v7[3] = *((_QWORD *)v64 + 2); /*0x1002229d5*/
      v69 = *(_QWORD *)v64; /*0x1002229dd*/
      v7[2] = *((_QWORD *)v64 + 1); /*0x1002229e4*/
      v7[1] = v69; /*0x1002229e8*/
      *v7 = 9; /*0x1002229ec*/
      if ( v118 && 17LL * (_QWORD)v118 != -33 ) /*0x100222a0d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(&v117[-16 * (_QWORD)v118 - 16], 17LL * (_QWORD)v118 + 33, 16); /*0x100222a22*/
      if ( v105 && 33 * v105 != -49 ) /*0x100222a41*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(&v104[-32 * v105 - 32], 33 * v105 + 49, 16); /*0x100222a56*/
      if ( v100 ) /*0x100222a65*/
      {
        v55 = 16LL * (_QWORD)v100; /*0x100222a6a*/
        v56 = 17LL * (_QWORD)v100 + 33; /*0x100222a71*/
        if ( 17LL * (_QWORD)v100 != -33 ) /*0x100222a75*/
        {
          v57 = v99; /*0x100222a77*/
LABEL_72:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(&v57[-v55 - 16], v56, 16); /*0x100222a7e*/
        }
      }
      return v7; /*0x100222a8a*/
    }
    v43 = 96LL * (_QWORD)v130; /*0x100222706*/
    v44 = 0; /*0x10022270a*/
    v45 = __n; /*0x10022270d*/
    while ( 1 ) /*0x10022272d*/
    {
      if ( *(_QWORD *)((char *)v41 + v44 + 32) == v45 ) /*0x100222732*/
      {
        v46 = memcmp(*(const void **)((char *)v41 + v44 + 24), __s2, __n); /*0x100222744*/
        v45 = __n; /*0x100222749*/
        if ( !v46 ) /*0x10022274f*/
          break; /*0x10022274f*/
      }
      v44 += 96; /*0x100222720*/
      if ( v43 == v44 ) /*0x100222727*/
      {
        v77 = (_QWORD *)((char *)v41 + 72); /*0x100222bf1*/
        do /*0x100222c07*/
        {
          v78 = *(v77 - 7); /*0x100222c09*/
          if ( v78 ) /*0x100222c10*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v77 - 6), v78, 1); /*0x100222c1b*/
          v79 = *(v77 - 1); /*0x100222c20*/
          if ( v79 != v126 && v79 ) /*0x100222c2d*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v77, v79, 1); /*0x100222c37*/
          v80 = *(v77 - 4); /*0x100222c3c*/
          if ( v80 ) /*0x100222c43*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v77 - 3), v80, 1); /*0x100222c4e*/
          v77 += 12; /*0x100222c00*/
          v42 = (_QWORD *)((char *)v42 - 1); /*0x100222c04*/
        }
        while ( v42 ); /*0x100222c07*/
        goto LABEL_93; /*0x100222c07*/
      }
    }
    v47 = (_QWORD *)((char *)v41 + 72); /*0x100222751*/
    do /*0x100222767*/
    {
      v48 = *(v47 - 7); /*0x100222769*/
      if ( v48 ) /*0x100222770*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v47 - 6), v48, 1); /*0x10022277b*/
      v49 = *(v47 - 1); /*0x100222780*/
      if ( v49 != v126 && v49 ) /*0x10022278d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v47, v49, 1); /*0x100222797*/
      v50 = *(v47 - 4); /*0x10022279c*/
      if ( v50 ) /*0x1002227a3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v47 - 3), v50, 1); /*0x1002227ae*/
      v47 += 12; /*0x100222760*/
      v42 = (_QWORD *)((char *)v42 - 1); /*0x100222764*/
    }
    while ( v42 ); /*0x100222767*/
    if ( v128 ) /*0x1002227bc*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, 96LL * (_QWORD)v128, 8); /*0x1002227ce*/
    v18 = v95; /*0x1002227da*/
    if ( v95 != v96 ) /*0x1002227ef*/
      continue; /*0x1002227ef*/
    break;
  }
  v51 = v117; /*0x1002227f5*/
  v52 = v118; /*0x1002227fc*/
  v7 = v125; /*0x100222803*/
  *v125 = 11; /*0x100222807*/
  if ( v52 ) /*0x100222811*/
  {
    v53 = 16LL * (_QWORD)v52; /*0x100222816*/
    v54 = 17LL * (_QWORD)v52 + 33; /*0x10022281d*/
    if ( v54 ) /*0x100222821*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(&v51[-v53 - 16], v54, 16); /*0x10022282f*/
  }
  if ( v105 && 33 * v105 != -49 ) /*0x10022284e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(&v104[-32 * v105 - 32], 33 * v105 + 49, 16); /*0x100222863*/
  if ( v115 ) /*0x100222872*/
  {
    v55 = 16LL * (_QWORD)v115; /*0x10022287b*/
    v56 = 17LL * (_QWORD)v115 + 33; /*0x100222882*/
    if ( 17LL * (_QWORD)v115 != -33 ) /*0x100222886*/
    {
      v57 = v110; /*0x10022288c*/
      goto LABEL_72; /*0x100222893*/
    }
  }
  return v7; /*0x100222a92*/
}