// __ZN13codexmate_lib4core5relay10invariants19RouterConfigSurface5parse @ 0x10024fc80
__int64 __fastcall codexmate_lib::core::relay::invariants::RouterConfigSurface::parse::hdc7c7739ede0b191(
        __int64 a1,
        __int64 a2,
        void *a3,
        unsigned __int64 a4)
{
  void *v5; // r14
  void *v6; // r14
  unsigned __int64 v7; // r8
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rcx
  int v10; // edx
  char v11; // r9
  char v12; // r10
  unsigned __int64 v13; // r8
  int v14; // r10d
  int v15; // r9d
  char *v16; // rbx
  char *v17; // r12
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // r14
  __int64 v21; // rax
  __int64 v22; // rsi
  __int64 v23; // r14
  __int64 v24; // rax
  __int64 v25; // rcx
  _BYTE *v26; // rax
  __int64 v27; // rdx
  unsigned __int64 *v28; // rdi
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  int v32; // esi
  unsigned __int64 v33; // rcx
  __int64 v34; // rsi
  __int64 v35; // rcx
  char *v36; // rdi
  unsigned __int64 v37; // rsi
  __int64 v38; // rax
  unsigned __int64 v39; // rdx
  const void *v40; // r13
  size_t v41; // r14
  __m128i v42; // xmm2
  void *v43; // rax
  void *v44; // rbx
  void *v45; // r12
  __int64 v46; // rax
  __int64 v47; // rbx
  __int64 v48; // rax
  __int64 v49; // rdx
  unsigned __int64 v50; // r13
  _QWORD *v51; // rbx
  char *v52; // r12
  __int64 v53; // r14
  void *v54; // rax
  __int64 v55; // r9
  unsigned __int64 v56; // r14
  __int64 v57; // rsi
  _QWORD *v58; // r15
  char *v59; // r14
  unsigned __int64 v60; // r13
  int v61; // ebx
  int v62; // ecx
  int v63; // esi
  int v64; // edx
  char v65; // bl
  unsigned __int64 v66; // rcx
  __int64 v67; // r12
  __int64 v68; // r14
  _BYTE *v69; // rax
  __int64 v70; // rsi
  _BYTE *v71; // r14
  __int64 v72; // rax
  _BYTE *v73; // rcx
  _BYTE *v74; // rax
  __int64 v75; // rdx
  unsigned __int64 *v76; // rdi
  unsigned __int64 v77; // rax
  unsigned __int64 v78; // rcx
  unsigned __int64 v79; // rdx
  int v80; // esi
  unsigned __int64 v81; // rcx
  __int64 v82; // rsi
  __int64 v83; // rcx
  __int64 v84; // rax
  unsigned __int64 v85; // rdx
  char v86; // dl
  __int64 result; // rax
  __int16 v88; // si
  __m128i v89; // xmm0
  _QWORD v90[13]; // [rsp+0h] [rbp-250h] BYREF
  _QWORD v91[3]; // [rsp+68h] [rbp-1E8h] BYREF
  _QWORD v92[3]; // [rsp+80h] [rbp-1D0h] BYREF
  __int64 v93; // [rsp+98h] [rbp-1B8h]
  __int64 v94; // [rsp+A0h] [rbp-1B0h]
  __int64 v95; // [rsp+A8h] [rbp-1A8h]
  __int64 v96; // [rsp+B0h] [rbp-1A0h]
  void *v97; // [rsp+B8h] [rbp-198h]
  __int64 v98; // [rsp+C0h] [rbp-190h]
  void *v99; // [rsp+C8h] [rbp-188h]
  _QWORD v100[3]; // [rsp+D0h] [rbp-180h] BYREF
  __int64 v101; // [rsp+E8h] [rbp-168h] BYREF
  __int64 v102; // [rsp+F0h] [rbp-160h]
  __int64 v103; // [rsp+F8h] [rbp-158h]
  __int64 v104; // [rsp+100h] [rbp-150h]
  __int64 v105; // [rsp+108h] [rbp-148h]
  __int64 v106; // [rsp+110h] [rbp-140h]
  __int64 v107; // [rsp+118h] [rbp-138h]
  void *v108; // [rsp+120h] [rbp-130h]
  __int64 v109; // [rsp+128h] [rbp-128h] BYREF
  void *__s1; // [rsp+130h] [rbp-120h]
  __int64 v111; // [rsp+138h] [rbp-118h]
  int v112; // [rsp+144h] [rbp-10Ch]
  __int64 v113; // [rsp+148h] [rbp-108h]
  _QWORD v114[13]; // [rsp+150h] [rbp-100h] BYREF
  _BYTE *v115; // [rsp+1B8h] [rbp-98h] BYREF
  __int64 v116; // [rsp+1C0h] [rbp-90h]
  _BYTE *v117; // [rsp+1C8h] [rbp-88h]
  __int64 v118; // [rsp+1D0h] [rbp-80h]
  __int64 v119; // [rsp+1D8h] [rbp-78h]
  __int64 v120; // [rsp+1E0h] [rbp-70h]
  __int64 v121; // [rsp+1E8h] [rbp-68h] BYREF
  void *v122; // [rsp+1F0h] [rbp-60h]
  __int64 v123; // [rsp+1F8h] [rbp-58h]
  unsigned __int64 v124; // [rsp+200h] [rbp-50h]
  int v125; // [rsp+20Ch] [rbp-44h]
  int v126; // [rsp+210h] [rbp-40h]
  int v127; // [rsp+214h] [rbp-3Ch]
  void *v128; // [rsp+218h] [rbp-38h]
  char v129; // [rsp+224h] [rbp-2Ch]
  char v130; // [rsp+225h] [rbp-2Bh]
  char v131; // [rsp+226h] [rbp-2Ah]
  char v132; // [rsp+227h] [rbp-29h]

  v93 = a1; /*0x10024fc9a*/
  v128 = a3; /*0x10024fcbf*/
  codexmate_lib::core::relay::codex_writer::read_top_level_string_value::h30de29ad5c0062ca( /*0x10024fcc9*/
    v100,
    a3,
    a4,
    &unk_1015DD1EB,
    5);
  if ( __OFSUB__(0, v100[0]) /*0x10024fcf6*/
    || (_$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v114, v100),
        v114[0] == 0x8000000000000000LL) )
  {
    v5 = v128; /*0x10024fcff*/
    codexmate_lib::core::relay::codex_writer::read_top_level_model_line::h03982b0ec3d2b300(&v101, v128, a4); /*0x10024fd09*/
  }
  else
  {
    v101 = v114[0]; /*0x10024fd1e*/
    v102 = v114[1]; /*0x10024fd25*/
    v103 = v114[2]; /*0x10024fd2c*/
    v5 = v128; /*0x10024fd33*/
  }
  codexmate_lib::core::relay::codex_writer::read_top_level_string_value::h30de29ad5c0062ca( /*0x10024fd51*/
    &v109,
    v5,
    a4,
    &unk_1015DD1F0,
    18);
  v113 = v109; /*0x10024fd6b*/
  if ( v109 == 0x8000000000000000LL || a2 == 0 ) /*0x10024fd66*/
  {
    if ( v109 == 0x8000000000000000LL ) /*0x10024fd77*/
    {
      v126 = 0; /*0x10024fd79*/
      v125 = 0; /*0x10024fd80*/
      goto LABEL_11; /*0x10024fd87*/
    }
    v6 = __s1; /*0x10024fdaa*/
    v126 = 0; /*0x10024fdb8*/
  }
  else
  {
    v6 = __s1; /*0x10024fd89*/
    v126 = codexmate_lib::core::relay::config_takeover::is_aimami_catalog_path::h7d9acdde71b76a74(a2, __s1, v111); /*0x10024fda5*/
  }
  v125 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10024fdd6*/
           &unk_1015DD202,
           0x19u,
           v6);
LABEL_11:
  codexmate_lib::core::relay::codex_writer::read_top_level_string_value::h30de29ad5c0062ca( /*0x10024fdd9*/
    v114,
    v128,
    a4,
    &unk_1015DD21B,
    15);
  if ( v114[0] != 0x8000000000000000LL ) /*0x10024fe03*/
  {
    v7 = v114[2]; /*0x10024fe18*/
    do /*0x10024fead*/
    {
      while ( 1 ) /*0x10024fe3c*/
      {
        if ( !v7 ) /*0x10024fe3f*/
          goto LABEL_25; /*0x10024fe3f*/
        v8 = v7; /*0x10024fe41*/
        v9 = v114[1] + v7; /*0x10024fe44*/
        v10 = *(char *)(v114[1] + v7 - 1); /*0x10024fe48*/
        if ( v10 < 0 ) /*0x10024fe4e*/
          break; /*0x10024fe4e*/
        --v7; /*0x10024fe34*/
        if ( v10 != 47 ) /*0x10024fe3a*/
          goto LABEL_24; /*0x10024fe3a*/
      }
      v11 = *(_BYTE *)(v9 - 2); /*0x10024fe50*/
      if ( v11 >= -64 ) /*0x10024fe59*/
      {
        v13 = v9 - 2; /*0x10024fe80*/
        v15 = v11 & 0x1F; /*0x10024fe84*/
      }
      else
      {
        v12 = *(_BYTE *)(v9 - 3); /*0x10024fe5b*/
        if ( v12 >= -64 ) /*0x10024fe64*/
        {
          v13 = v9 - 3; /*0x10024fe8a*/
          v14 = v12 & 0xF; /*0x10024fe8e*/
        }
        else
        {
          v13 = v9 - 4; /*0x10024fe66*/
          v14 = ((*(_BYTE *)(v9 - 4) & 7) << 6) | v12 & 0x3F; /*0x10024fe7b*/
        }
        v15 = (v14 << 6) | v11 & 0x3F; /*0x10024fe9a*/
      }
      v7 = v13 - v114[1]; /*0x10024fea7*/
    }
    while ( ((v15 << 6) | v10 & 0x3F) == 0x2F ); /*0x10024fead*/
LABEL_24:
    if ( v8 > 0xF ) /*0x10024feb3*/
    {
      v89 = _mm_xor_si128( /*0x100250b21*/
              _mm_loadu_si128((const __m128i *)(v9 - 16)),
              *(__m128i *)"/codex/router/v1xy-authorizationproxy-authorizatproxy-authenticate");
      LOBYTE(v8) = _mm_testz_si128(v89, v89); /*0x100250b2e*/
      v127 = v8; /*0x100250b31*/
      if ( !v114[0] ) /*0x100250b37*/
        goto LABEL_27; /*0x100250b37*/
    }
    else
    {
LABEL_25:
      v127 = 0; /*0x10024feb9*/
      if ( !v114[0] ) /*0x10024fec3*/
        goto LABEL_27; /*0x10024fec3*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v114[1], v114[0], 1); /*0x10024feca*/
    goto LABEL_27; /*0x10024feca*/
  }
  v127 = 0; /*0x10024fe05*/
LABEL_27:
  codexmate_lib::core::relay::codex_writer::read_top_level_string_value::h30de29ad5c0062ca( /*0x10024fecf*/
    v92,
    v128,
    a4,
    &unk_1015DD22A,
    14);
  v16 = (char *)v128; /*0x10024ff03*/
  codexmate_lib::core::relay::codex_writer::read_top_level_string_value::h30de29ad5c0062ca( /*0x10024ff0d*/
    v91,
    v128,
    a4,
    &unk_1015DD238,
    7);
  v104 = v100[0]; /*0x10024ff19*/
  v106 = v100[1]; /*0x10024ff27*/
  v95 = v100[2]; /*0x10024ff35*/
  v105 = v101; /*0x10024ff43*/
  v107 = v102; /*0x10024ff51*/
  v96 = v103; /*0x10024ff5f*/
  v108 = __s1; /*0x10024ff6d*/
  v94 = v111; /*0x10024ff7b*/
  v129 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10024ff99*/
           &unk_1015DD23F,
           0x13u,
           v16);
  v17 = v16; /*0x10024ff9c*/
  v130 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10024ffb6*/
           &unk_1015DD252,
           0x1Du,
           v16);
  v131 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10024ffd0*/
           &unk_1015DD202,
           0x19u,
           v16);
  v132 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10024ffea*/
           "/codex/router/v1xy-authorizationproxy-authorizatproxy-authenticate",
           0x10u,
           v16);
  v112 = codexmate_lib::core::relay::codex_writer::router_entry_presence::hd5aebe89c04db819(v16) & 0xFFFFFF; /*0x10024fffd*/
  v115 = nullptr; /*0x100250003*/
  v116 = 8; /*0x10025000e*/
  v117 = nullptr; /*0x100250019*/
  v114[0] = 0; /*0x100250024*/
  v114[1] = a4; /*0x10025002f*/
  v114[2] = v16; /*0x10025003d*/
  v114[3] = a4; /*0x100250044*/
  v114[4] = 0; /*0x10025004b*/
  v124 = a4; /*0x100250056*/
  v114[5] = a4; /*0x10025005a*/
  v114[6] = 0xA0000000ALL; /*0x10025006b*/
  LOBYTE(v114[7]) = 1; /*0x100250072*/
  LOWORD(v114[8]) = 0; /*0x100250079*/
  while ( 1 ) /*0x1002500cd*/
  {
    v20 = v114[2]; /*0x1002500cd*/
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1002500da*/
      v90,
      &v114[2]);
    if ( LODWORD(v90[0]) != 1 ) /*0x1002500e6*/
      break; /*0x1002500e6*/
    v21 = v114[0]; /*0x1002500ef*/
    v114[0] = v90[2]; /*0x1002500f6*/
    v22 = v90[2] - v21; /*0x1002500fd*/
    v23 = v21 + v20; /*0x100250100*/
    if ( v90[2] == v21 ) /*0x100250106*/
      goto LABEL_45; /*0x100250106*/
LABEL_36:
    if ( *(_BYTE *)(v23 + v22 - 1) == 10 ) /*0x100250158*/
    {
      v24 = v22 - 1; /*0x10025015d*/
      if ( v22 == 1 ) /*0x100250160*/
      {
        v22 = -1; /*0x100250175*/
        v25 = 0; /*0x10025017c*/
      }
      else
      {
        v25 = v23; /*0x100250168*/
        if ( *(_BYTE *)(v23 + v22 - 2) != 13 ) /*0x10025016b*/
          v25 = 0; /*0x10025016d*/
        v22 -= 2; /*0x10025016f*/
      }
      if ( v25 ) /*0x100250181*/
        v23 = v25; /*0x100250185*/
      else
        v22 = v24; /*0x100250181*/
    }
LABEL_45:
    v26 = (_BYTE *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v23, v22); /*0x100250189*/
    if ( !v27 || *v26 != 91 || v26[v27 - 1] != 93 ) /*0x1002501ab*/
      goto LABEL_29; /*0x1002501ab*/
    if ( v27 == 1 || (char)v26[1] <= -65 ) /*0x1002501bf*/
      core::str::slice_error_fail::h480e51fbd8b15eba(v26, v27, 1, v27 - 1, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_97); /*0x100250b9a*/
    v28 = (unsigned __int64 *)(v26 + 1); /*0x1002501c5*/
    v29 = v27 - 2; /*0x1002501c9*/
    if ( (unsigned __int64)(v27 - 2) < 0x10 ) /*0x1002501d1*/
    {
      if ( v29 < 9 ) /*0x1002501d7*/
        goto LABEL_29; /*0x1002501d7*/
LABEL_57:
      v33 = _byteswap_uint64(*v28); /*0x100250223*/
      if ( v33 == 0x70726F66696C6573LL ) /*0x100250236*/
      {
        if ( *((_BYTE *)v28 + 8) != 46 ) /*0x100250245*/
          goto LABEL_29; /*0x100250245*/
      }
      else if ( 2 * (v33 <= 0x70726F66696C6573LL) != 1 ) /*0x100250259*/
      {
        goto LABEL_29; /*0x100250259*/
      }
      v34 = -9; /*0x10025025f*/
      v35 = 9; /*0x100250266*/
      goto LABEL_63; /*0x10025026b*/
    }
    v30 = _byteswap_uint64(*v28); /*0x1002501e2*/
    v31 = 0x6D6F64656C5F7072LL; /*0x1002501ef*/
    if ( v30 != 0x6D6F64656C5F7072LL /*0x100250210*/
      || (v30 = _byteswap_uint64(v28[1]), v32 = 0, v31 = 0x6F7669646572732ELL, v30 != 0x6F7669646572732ELL) )
    {
      v32 = 2 * (v31 >= v30) - 1; /*0x10025021b*/
    }
    if ( v32 ) /*0x100250221*/
      goto LABEL_57; /*0x100250221*/
    v34 = -16; /*0x10025026d*/
    v35 = 16; /*0x100250274*/
LABEL_63:
    v36 = (char *)v28 + v35; /*0x100250279*/
    v37 = v29 + v34; /*0x10025027c*/
    v38 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hf5841e2f4d170130(v36, v37, 34); /*0x100250284*/
    v40 = (const void *)v38; /*0x100250289*/
    v41 = v39; /*0x10025028c*/
    if ( v39 == 12 ) /*0x100250293*/
    {
      if ( !(anon_3ce6d1417794db0febde534c64082f90_184 ^ *(_QWORD *)v38 | *(_DWORD *)(v38 + 8) ^ 0x79616C65u) ) /*0x1002502aa*/
        goto LABEL_73; /*0x1002502ad*/
    }
    else
    {
      if ( v39 >= 0xD /*0x1002502d7*/
        && !(*(_QWORD *)v38 ^ anon_3ce6d1417794db0febde534c64082f90_194
           | *(_QWORD *)(v38 + 5) ^ *(__int64 *)((char *)&anon_3ce6d1417794db0febde534c64082f90_194 + 5)) )
      {
LABEL_73:
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v36, v37); /*0x10025033f*/
        v43 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v41, 1); /*0x10025034c*/
        if ( !v43 ) /*0x100250354*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v41); /*0x100250bc3*/
        v44 = v43; /*0x10025035a*/
        memcpy(v43, v40, v41); /*0x100250366*/
        v45 = v117; /*0x10025036b*/
        if ( v117 == v115 ) /*0x100250379*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hbfe65ab6de98a449(&v115); /*0x100250386*/
        v18 = v116; /*0x10025008b*/
        v19 = 3LL * (_QWORD)v45; /*0x100250092*/
        *(_QWORD *)(v116 + 8 * v19) = v41; /*0x100250096*/
        *(_QWORD *)(v18 + 8 * v19 + 8) = v44; /*0x10025009a*/
        *(_QWORD *)(v18 + 8 * v19 + 16) = v41; /*0x10025009f*/
        v117 = (char *)v45 + 1; /*0x1002500a7*/
        v17 = (char *)v128; /*0x1002500ae*/
        goto LABEL_29; /*0x1002500ae*/
      }
      if ( v39 == 6 ) /*0x1002502dd*/
      {
        if ( !(anon_3ce6d1417794db0febde534c64082f90_165 ^ *(_DWORD *)v38 | *(_WORD *)(v38 + 4) ^ 0x3169) ) /*0x100250337*/
          goto LABEL_73; /*0x100250339*/
      }
      else if ( v39 == 19 ) /*0x1002502e3*/
      {
        v42 = _mm_or_si128( /*0x10025030d*/
                _mm_xor_si128(
                  _mm_loadu_si128((const __m128i *)((char *)&anon_3ce6d1417794db0febde534c64082f90_217 + 3)),
                  _mm_loadu_si128((const __m128i *)(v38 + 3))),
                _mm_xor_si128(
                  _mm_loadu_si128((const __m128i *)v38),
                  _mm_loadu_si128((const __m128i *)&anon_3ce6d1417794db0febde534c64082f90_217)));
        if ( _mm_testz_si128(v42, v42) ) /*0x100250311*/
          goto LABEL_73; /*0x100250316*/
      }
    }
LABEL_29:
    if ( BYTE1(v114[8]) ) /*0x1002500c7*/
      goto LABEL_76; /*0x1002500c7*/
  }
  if ( !BYTE1(v114[8]) ) /*0x100250117*/
  {
    BYTE1(v114[8]) = 1; /*0x10025011d*/
    v22 = v114[1] - v114[0]; /*0x100250132*/
    if ( (LOBYTE(v114[8]) | (v114[1] != v114[0])) == 1 ) /*0x100250140*/
    {
      v23 = v114[2] + v114[0]; /*0x100250146*/
      if ( !v22 ) /*0x100250150*/
        goto LABEL_45; /*0x100250150*/
      goto LABEL_36; /*0x100250150*/
    }
  }
LABEL_76:
  v97 = v115; /*0x100250390*/
  v98 = v116; /*0x1002503a5*/
  v99 = v117; /*0x1002503b3*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1002503c1*/
  v47 = v46; /*0x1002503c3*/
  if ( *(_BYTE *)(v46 + 16) == 1 ) /*0x1002503ca*/
  {
    v48 = *(_QWORD *)v46; /*0x1002503d0*/
    v49 = *(_QWORD *)(v47 + 8); /*0x1002503d3*/
    v50 = v124; /*0x1002503d7*/
  }
  else
  {
    v48 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x100250b42*/
    v50 = v124; /*0x100250b47*/
    *(_QWORD *)v47 = v48; /*0x100250b4b*/
    *(_QWORD *)(v47 + 8) = v49; /*0x100250b4e*/
    *(_BYTE *)(v47 + 16) = 1; /*0x100250b52*/
  }
  *(_QWORD *)v47 = v48 + 1; /*0x1002503df*/
  v118 = 0; /*0x1002503e9*/
  v117 = nullptr; /*0x1002503f4*/
  v116 = 0; /*0x100250402*/
  v115 = anon_39a6e93098609d65551b0fc4eadbbbd9_24; /*0x100250410*/
  v119 = v48; /*0x100250417*/
  v120 = v49; /*0x10025041b*/
  core::str::pattern::StrSearcher::new::h63b1ff96ad2adbd2(v114, v17, v50, &unk_1015DD26F, 13); /*0x100250439*/
  v51 = v90; /*0x10025043e*/
  qmemcpy(v90, v114, sizeof(v90)); /*0x100250454*/
  v52 = &v17[v50]; /*0x100250457*/
LABEL_80:
  while ( 2 ) /*0x10025047e*/
  {
    _$LT$core..str..pattern..StrSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::h14488f79cfb82bb5( /*0x10025047e*/
      v114,
      v51);
    if ( LODWORD(v114[0]) == 1 ) /*0x100250494*/
    {
      v53 = v114[1]; /*0x10025049a*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v114, v51); /*0x1002504a1*/
      v54 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x1002504b0*/
      if ( !v54 ) /*0x1002504b8*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13); /*0x100250b65*/
      qmemcpy(v54, "aimami_relay_", 13); /*0x1002504cc*/
      v121 = 13; /*0x1002504cf*/
      v122 = v54; /*0x1002504d7*/
      v123 = 13; /*0x1002504db*/
      v56 = v53 + 13; /*0x1002504e3*/
      if ( v56 ) /*0x1002504e7*/
      {
        if ( v56 >= v50 ) /*0x1002504ec*/
        {
          if ( v56 != v50 ) /*0x100250500*/
LABEL_156:
            core::str::slice_error_fail::h480e51fbd8b15eba(v128, v50, v56, v50, &off_10195D4B8); /*0x100250b6c*/
        }
        else if ( *((char *)v128 + v56) <= -65 ) /*0x1002504f7*/
        {
          goto LABEL_156; /*0x1002504f7*/
        }
      }
      v57 = 13; /*0x100250506*/
      if ( v56 == v50 ) /*0x10025050e*/
      {
LABEL_79:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v122, v57, 1); /*0x100250470*/
        continue; /*0x100250479*/
      }
      v58 = v51; /*0x100250514*/
      v59 = (char *)v128 + v56; /*0x100250517*/
      v60 = 13; /*0x10025051b*/
      while ( 1 ) /*0x100250530*/
      {
        v61 = (unsigned __int8)*v59; /*0x100250530*/
        if ( (v61 & 0x80u) != 0 ) /*0x100250536*/
        {
          v62 = v61 & 0x1F; /*0x100250552*/
          v63 = v59[1] & 0x3F; /*0x10025055a*/
          if ( (unsigned __int8)v61 <= 0xDFu ) /*0x100250560*/
          {
            v59 += 2; /*0x100250594*/
            v61 = v63 | (v62 << 6); /*0x10025059d*/
            if ( v61 != 45 ) /*0x1002505a2*/
              goto LABEL_99; /*0x1002505a2*/
          }
          else
          {
            v64 = (v63 << 6) | v59[2] & 0x3F; /*0x10025056d*/
            if ( (unsigned __int8)v61 < 0xF0u ) /*0x100250572*/
            {
              v59 += 3; /*0x1002505a6*/
              v61 = (v62 << 12) | v64; /*0x1002505af*/
              if ( v61 != 45 ) /*0x1002505b4*/
              {
LABEL_99:
                if ( v61 != 95 && (unsigned int)(v61 - 48) >= 0xA && (v61 & 0xFFFFFFDF) - 65 >= 0x1A ) /*0x1002505d8*/
                  goto LABEL_105; /*0x1002505d8*/
              }
            }
            else
            {
              v65 = v59[3]; /*0x100250574*/
              v59 += 4; /*0x100250579*/
              v61 = ((v62 & 7) << 18) | (v64 << 6) | v65 & 0x3F; /*0x10025058b*/
              if ( v61 != 45 ) /*0x100250590*/
                goto LABEL_99; /*0x100250590*/
            }
          }
        }
        else
        {
          ++v59; /*0x100250538*/
          if ( v61 != 45 ) /*0x10025053e*/
            goto LABEL_99; /*0x10025053e*/
        }
        v66 = v60; /*0x1002505e0*/
        if ( v60 == v121 ) /*0x1002505e7*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100250615*/
            &v121,
            v60,
            1,
            1,
            1,
            v55);
          v54 = v122; /*0x10025061a*/
          v66 = v123; /*0x10025061e*/
        }
        *((_BYTE *)v54 + v66) = v61; /*0x1002505e9*/
        v123 = ++v60; /*0x1002505ef*/
        if ( v59 == v52 ) /*0x1002505f6*/
        {
LABEL_105:
          if ( v60 > 0xD ) /*0x100250634*/
          {
            v114[2] = v123; /*0x100250664*/
            v114[1] = v122; /*0x100250673*/
            v114[0] = v121; /*0x10025067a*/
            hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(&v115, v114); /*0x10025068f*/
            v50 = v124; /*0x100250694*/
            v51 = v58; /*0x100250698*/
            goto LABEL_80; /*0x10025069b*/
          }
          v57 = v121; /*0x100250636*/
          v50 = v124; /*0x10025063d*/
          v51 = v58; /*0x100250641*/
          if ( v121 ) /*0x10025064e*/
            goto LABEL_79; /*0x10025064e*/
          goto LABEL_80; /*0x10025064e*/
        }
      }
    }
    break;
  }
  v90[0] = v115; /*0x1002506ae*/
  v90[1] = v116; /*0x1002506b5*/
  v90[2] = v117; /*0x1002506c3*/
  v90[3] = v118; /*0x1002506ce*/
  v90[4] = v119; /*0x1002506d9*/
  v90[5] = v120; /*0x1002506e4*/
  v114[0] = 0; /*0x1002506eb*/
  v114[1] = v50; /*0x1002506f6*/
  v114[2] = v128; /*0x100250708*/
  v114[3] = v50; /*0x10025070f*/
  v114[4] = 0; /*0x100250716*/
  v114[5] = v50; /*0x100250721*/
  v114[6] = 0xA0000000ALL; /*0x100250732*/
  LOBYTE(v114[7]) = 1; /*0x100250739*/
  LOWORD(v114[8]) = 0; /*0x100250740*/
  v67 = v113; /*0x100250750*/
  do /*0x10025078d*/
  {
    v68 = v114[2]; /*0x10025078d*/
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x10025079a*/
      &v115,
      &v114[2]);
    if ( (_DWORD)v115 == 1 ) /*0x1002507a6*/
    {
      v69 = (_BYTE *)v114[0]; /*0x1002507af*/
      v114[0] = v117; /*0x1002507b6*/
      v70 = v117 - v69; /*0x1002507bd*/
      v71 = &v69[v68]; /*0x1002507c0*/
      if ( v117 == v69 ) /*0x1002507c6*/
        goto LABEL_127; /*0x1002507c6*/
      goto LABEL_118; /*0x1002507c6*/
    }
    if ( BYTE1(v114[8]) ) /*0x1002507d7*/
      break; /*0x1002507d7*/
    BYTE1(v114[8]) = 1; /*0x1002507dd*/
    v70 = v114[1] - v114[0]; /*0x1002507f2*/
    if ( (LOBYTE(v114[8]) | (v114[1] != v114[0])) != 1 ) /*0x100250800*/
      break; /*0x100250800*/
    v71 = (_BYTE *)(v114[2] + v114[0]); /*0x100250806*/
    if ( !v70 ) /*0x100250810*/
      goto LABEL_127; /*0x100250810*/
LABEL_118:
    if ( v71[v70 - 1] == 10 ) /*0x100250818*/
    {
      v72 = v70 - 1; /*0x10025081d*/
      if ( v70 == 1 ) /*0x100250820*/
      {
        v70 = -1; /*0x100250835*/
        v73 = nullptr; /*0x10025083c*/
      }
      else
      {
        v73 = v71; /*0x100250828*/
        if ( v71[v70 - 2] != 13 ) /*0x10025082b*/
          v73 = nullptr; /*0x10025082d*/
        v70 -= 2; /*0x10025082f*/
      }
      if ( v73 ) /*0x100250841*/
        v71 = v73; /*0x100250845*/
      else
        v70 = v72; /*0x100250841*/
    }
LABEL_127:
    if ( !v71 ) /*0x10025084c*/
      break; /*0x10025084c*/
    v74 = (_BYTE *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v71, v70); /*0x100250855*/
    if ( v75 && *v74 == 91 && v74[v75 - 1] == 93 ) /*0x100250874*/
    {
      if ( v75 == 1 || (char)v74[1] <= -65 ) /*0x100250888*/
        core::str::slice_error_fail::h480e51fbd8b15eba(v74, v75, 1, v75 - 1, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_97); /*0x100250bb4*/
      v76 = (unsigned __int64 *)(v74 + 1); /*0x10025088e*/
      v77 = v75 - 2; /*0x100250892*/
      if ( (unsigned __int64)(v75 - 2) >= 0x10 ) /*0x10025089a*/
      {
        v78 = _byteswap_uint64(*v76); /*0x1002508ab*/
        v79 = 0x6D6F64656C5F7072LL; /*0x1002508b8*/
        if ( v78 != 0x6D6F64656C5F7072LL /*0x1002508d9*/
          || (v78 = _byteswap_uint64(v76[1]), v80 = 0, v79 = 0x6F7669646572732ELL, v78 != 0x6F7669646572732ELL) )
        {
          v80 = 2 * (v79 >= v78) - 1; /*0x1002508e4*/
        }
        if ( !v80 ) /*0x1002508ea*/
        {
          v82 = -16; /*0x100250936*/
          v83 = 16; /*0x10025093d*/
LABEL_146:
          v84 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hf5841e2f4d170130((char *)v76 + v83, v77 + v82, 34); /*0x100250942*/
          if ( v85 == 12 ) /*0x100250956*/
          {
            if ( !(anon_3ce6d1417794db0febde534c64082f90_184 ^ *(_QWORD *)v84 | *(_DWORD *)(v84 + 8) ^ 0x79616C65u) ) /*0x10025076f*/
              goto LABEL_149; /*0x10025076f*/
          }
          else if ( v85 >= 0xD /*0x10025097b*/
                 && !(*(_QWORD *)v84 ^ anon_3ce6d1417794db0febde534c64082f90_194
                    | *(_QWORD *)(v84 + 5) ^ *(__int64 *)((char *)&anon_3ce6d1417794db0febde534c64082f90_194 + 5)) )
          {
LABEL_149:
            v86 = 1; /*0x100250984*/
            goto LABEL_151; /*0x100250986*/
          }
          continue; /*0x10025097e*/
        }
      }
      else if ( v77 < 9 ) /*0x1002508a0*/
      {
        continue; /*0x1002508a0*/
      }
      v81 = _byteswap_uint64(*v76); /*0x1002508ef*/
      if ( v81 == 0x70726F66696C6573LL ) /*0x1002508ff*/
      {
        if ( *((_BYTE *)v76 + 8) == 46 ) /*0x10025090e*/
          goto LABEL_144; /*0x10025090e*/
      }
      else if ( 2 * (v81 <= 0x70726F66696C6573LL) == 1 ) /*0x100250922*/
      {
LABEL_144:
        v82 = -9; /*0x100250928*/
        v83 = 9; /*0x10025092f*/
        goto LABEL_146; /*0x100250934*/
      }
    }
  }
  while ( !BYTE1(v114[8]) ); /*0x10025078d*/
  v86 = 0; /*0x100250988*/
LABEL_151:
  result = v93; /*0x10025098a*/
  *(_QWORD *)(v93 + 40) = v92[2]; /*0x100250998*/
  *(_QWORD *)(result + 32) = v92[1]; /*0x1002509a3*/
  *(_QWORD *)(result + 24) = v92[0]; /*0x1002509ae*/
  *(_QWORD *)(result + 64) = v91[2]; /*0x1002509b9*/
  *(_QWORD *)(result + 56) = v91[1]; /*0x1002509c4*/
  *(_QWORD *)(result + 48) = v91[0]; /*0x1002509cf*/
  *(_QWORD *)(result + 72) = v104; /*0x1002509da*/
  *(_QWORD *)(result + 80) = v106; /*0x1002509e5*/
  *(_QWORD *)(result + 88) = v95; /*0x1002509f0*/
  *(_QWORD *)(result + 96) = v105; /*0x1002509fb*/
  *(_QWORD *)(result + 104) = v107; /*0x100250a06*/
  *(_QWORD *)(result + 112) = v96; /*0x100250a11*/
  *(_QWORD *)(result + 120) = v67; /*0x100250a15*/
  *(_QWORD *)(result + 128) = v108; /*0x100250a20*/
  *(_QWORD *)(result + 136) = v94; /*0x100250a2e*/
  *(_BYTE *)(result + 192) = v126; /*0x100250a38*/
  *(_BYTE *)(result + 193) = v125; /*0x100250a41*/
  *(_BYTE *)(result + 194) = v129; /*0x100250a4b*/
  *(_BYTE *)(result + 195) = v127; /*0x100250a54*/
  *(_BYTE *)(result + 196) = v130; /*0x100250a5e*/
  *(_BYTE *)(result + 197) = v131; /*0x100250a68*/
  *(_BYTE *)(result + 198) = v132; /*0x100250a72*/
  v88 = v112; /*0x100250a78*/
  *(_BYTE *)(result + 201) = BYTE2(v112); /*0x100250a83*/
  *(_WORD *)(result + 199) = v88; /*0x100250a89*/
  *(_QWORD *)(result + 16) = v99; /*0x100250a97*/
  *(_QWORD *)(result + 8) = v98; /*0x100250aa2*/
  *(_QWORD *)result = v97; /*0x100250aad*/
  *(_QWORD *)(result + 144) = v90[0]; /*0x100250ab7*/
  *(_QWORD *)(result + 152) = v90[1]; /*0x100250ac5*/
  *(_QWORD *)(result + 160) = v90[2]; /*0x100250ad3*/
  *(_QWORD *)(result + 168) = v90[3]; /*0x100250ae1*/
  *(_QWORD *)(result + 176) = v90[4]; /*0x100250aef*/
  *(_QWORD *)(result + 184) = v90[5]; /*0x100250afd*/
  *(_BYTE *)(result + 202) = v86; /*0x100250b04*/
  return result; /*0x100250b0a*/
}