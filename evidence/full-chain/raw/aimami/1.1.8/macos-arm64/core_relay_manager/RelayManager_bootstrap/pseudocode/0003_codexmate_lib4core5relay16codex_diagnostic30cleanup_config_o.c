// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND RelayManager_bootstrap node 0x1003eed70 depth=1
char __fastcall codexmate_lib::core::relay::codex_diagnostic::cleanup_config_orphan_provider::hf766672bb126a551(
        __int64 a1,
        __m128i a2)
{
  const void *v2; // r14
  size_t v3; // r12
  char *v4; // r15
  __int64 v6; // r12
  __m128i *v7; // rax
  __m128i *v8; // rbx
  bool v9; // zf
  __m128i v10; // rax
  __int64 v11; // rax
  const void *v12; // rsi
  __int64 v13; // r13
  __int64 *v14; // rbx
  char *v15; // rax
  __int64 v16; // rsi
  unsigned __int8 *v17; // rbx
  unsigned __int8 *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rax
  __int64 v21; // rdx
  size_t v22; // rbx
  const void *v23; // r13
  __int64 v24; // r12
  bool v25; // cl
  bool v26; // r13
  __int64 v27; // rbx
  __int64 v28; // rax
  __int64 v29; // rsi
  unsigned __int8 *v30; // rbx
  unsigned __int64 v31; // rdx
  __int64 v32; // rcx
  unsigned __int64 v33; // rbx
  __int64 v34; // r12
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 *v37; // rbx
  __int64 v38; // rsi
  unsigned __int8 *v39; // rbx
  unsigned __int8 *v40; // rax
  __int64 v41; // rdx
  size_t v42; // rdx
  size_t v43; // rbx
  _BYTE *v44; // r12
  unsigned __int64 v45; // rax
  const __m128i *v46; // rdx
  __int64 v47; // rsi
  __m128i v48; // xmm1
  __int8 *v49; // rdi
  __int64 i; // r8
  unsigned __int64 v51; // rax
  __m128i v52; // xmm2
  __int64 v54; // rcx
  const void *v55; // rsi
  unsigned int v56; // eax
  __int64 v57; // r14
  __int64 v58; // rbx
  const __m128i *v59; // r15
  const __m128i *v61; // r12
  int v62; // r13d
  size_t v63; // rbx
  char v64; // bl
  __int64 *v65; // r15
  char *v66; // rax
  size_t v67; // r14
  unsigned __int8 *v68; // rdi
  unsigned __int8 *v69; // r13
  unsigned __int64 v70; // rdx
  __int64 v71; // rcx
  __int64 v72; // r8
  __int64 v73; // r9
  unsigned __int8 *v74; // r15
  unsigned __int64 v75; // r12
  __m128i v76; // xmm2
  size_t v77; // rdx
  unsigned __int8 *v78; // rdi
  const void *v79; // rsi
  size_t v80; // rdx
  unsigned __int8 *v81; // rdi
  const char *v82; // rsi
  __int64 v83; // rbx
  __int64 v84; // r14
  __int64 v85; // rbx
  __int64 v86; // rbx
  void *v87; // rax
  int v88; // eax
  __int64 v89; // rbx
  char v90; // al
  __int64 v91; // rbx
  __m128i v92; // xmm1
  __m128i v93; // xmm1
  __int64 v94; // r14
  char *v95; // r15
  void *v96; // rbx
  __int64 v97; // rax
  __m128i v99; // [rsp+0h] [rbp-180h] BYREF
  __m128i v100; // [rsp+10h] [rbp-170h] BYREF
  _QWORD **v101; // [rsp+20h] [rbp-160h]
  size_t v102; // [rsp+28h] [rbp-158h]
  const __m128i *v103; // [rsp+30h] [rbp-150h]
  __int64 v104; // [rsp+38h] [rbp-148h]
  __int64 v105; // [rsp+40h] [rbp-140h]
  const __m128i *v106; // [rsp+48h] [rbp-138h] BYREF
  __int64 v107; // [rsp+50h] [rbp-130h]
  __int64 v108; // [rsp+58h] [rbp-128h]
  __int64 v109; // [rsp+60h] [rbp-120h]
  __m128i v110; // [rsp+68h] [rbp-118h] BYREF
  __int64 *v111; // [rsp+78h] [rbp-108h] BYREF
  __int64 *v112; // [rsp+80h] [rbp-100h]
  _QWORD v113[5]; // [rsp+88h] [rbp-F8h] BYREF
  char v114; // [rsp+B0h] [rbp-D0h]
  __int16 v115; // [rsp+B8h] [rbp-C8h]
  __int64 v116; // [rsp+C0h] [rbp-C0h] BYREF
  size_t __n; // [rsp+C8h] [rbp-B8h]
  void *__s2; // [rsp+D0h] [rbp-B0h]
  char *v119; // [rsp+D8h] [rbp-A8h]
  char *v120; // [rsp+E0h] [rbp-A0h] BYREF
  size_t v121; // [rsp+E8h] [rbp-98h]
  __int64 *v122; // [rsp+F0h] [rbp-90h] BYREF
  size_t v123; // [rsp+F8h] [rbp-88h]
  char **v124; // [rsp+100h] [rbp-80h]
  size_t v125; // [rsp+108h] [rbp-78h]
  __int64 v126; // [rsp+110h] [rbp-70h]
  char v127; // [rsp+118h] [rbp-68h]
  __int16 v128; // [rsp+120h] [rbp-60h]
  unsigned __int64 v129; // [rsp+128h] [rbp-58h]
  __int64 *v130; // [rsp+130h] [rbp-50h]
  void *__s1; // [rsp+138h] [rbp-48h]
  size_t v132; // [rsp+140h] [rbp-40h] BYREF
  __int64 *v133; // [rsp+148h] [rbp-38h]
  char *v134; // [rsp+150h] [rbp-30h]

  v2 = *(const void **)(a1 + 56); /*0x1003eed84*/
  v3 = *(_QWORD *)(a1 + 64); /*0x1003eed88*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v120, v2, v3); /*0x1003eed99*/
  v4 = v120; /*0x1003eed9e*/
  if ( v120 == (char *)0x8000000000000000LL ) /*0x1003eedb6*/
  {
    LOBYTE(_RAX) = v121; /*0x1003eedb8*/
    if ( (v121 & 3) == 1 ) /*0x1003eedc7*/
    {
      v6 = *(_QWORD *)(v121 + 7); /*0x1003eedd5*/
      if ( *(_QWORD *)v6 ) /*0x1003eedd9*/
        (*(void (__fastcall **)(_QWORD))v6)(*(_QWORD *)(v121 - 1)); /*0x1003eede5*/
      if ( *(_QWORD *)(v6 + 8) ) /*0x1003eede7*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003eedf9*/
      goto LABEL_104; /*0x1003eedf9*/
    }
    return _RAX; /*0x1003eedc7*/
  }
  __s2 = (void *)v121; /*0x1003eee17*/
  __n = (size_t)v122; /*0x1003eee25*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1003eee33*/
  v8 = v7; /*0x1003eee35*/
  v9 = v7[1].i8[0] == 1; /*0x1003eee38*/
  v119 = v4; /*0x1003eee3c*/
  v101 = (_QWORD **)v2; /*0x1003eee43*/
  v102 = v3; /*0x1003eee4a*/
  if ( v9 ) /*0x1003eee51*/
  {
    v10.i64[0] = v7->i64[0]; /*0x1003eee57*/
    v10.i64[1] = v8->i64[1]; /*0x1003eee5a*/
  }
  else
  {
    v10.i64[0] = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x1003efef7*/
    *v8 = v10; /*0x1003efefc*/
    v8[1].i8[0] = 1; /*0x1003eff03*/
  }
  v8->i64[0] = v10.i64[0] + 1; /*0x1003eee62*/
  v109 = 0; /*0x1003eee6c*/
  v108 = 0; /*0x1003eee7a*/
  v107 = 0; /*0x1003eee88*/
  v106 = (const __m128i *)&xmmword_10125CF30; /*0x1003eee96*/
  v110 = v10; /*0x1003eee9d*/
  v120 = nullptr; /*0x1003eeeab*/
  v121 = __n; /*0x1003eeebd*/
  v122 = (__int64 *)__s2; /*0x1003eeed2*/
  v123 = __n; /*0x1003eeed9*/
  v124 = nullptr; /*0x1003eeee0*/
  v125 = __n; /*0x1003eeee8*/
  v126 = 0xA0000000ALL; /*0x1003eeef6*/
  v127 = 1; /*0x1003eeefa*/
  v128 = 0; /*0x1003eeefe*/
  do /*0x1003eef5a*/
  {
    v14 = v122; /*0x1003eef5a*/
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1003eef67*/
      &v111,
      &v122);
    if ( (_DWORD)v111 == 1 ) /*0x1003eef73*/
    {
      v15 = v120; /*0x1003eef7c*/
      v120 = (char *)v113[0]; /*0x1003eef83*/
      v16 = v113[0] - (_QWORD)v15; /*0x1003eef8a*/
      v17 = (unsigned __int8 *)v14 + (_QWORD)v15; /*0x1003eef8d*/
      if ( (char *)v113[0] == v15 ) /*0x1003eef93*/
        goto LABEL_26; /*0x1003eef93*/
      goto LABEL_20; /*0x1003eef93*/
    }
    if ( HIBYTE(v128) ) /*0x1003eefa4*/
      break; /*0x1003eefa4*/
    HIBYTE(v128) = 1; /*0x1003eefaa*/
    v16 = v121 - (_QWORD)v120; /*0x1003eefbc*/
    if ( ((unsigned __int8)v128 | (v121 != (_QWORD)v120)) != 1 ) /*0x1003eefc7*/
      break; /*0x1003eefc7*/
    v17 = (unsigned __int8 *)&v120[(_QWORD)v122]; /*0x1003eefcd*/
    if ( !v16 ) /*0x1003eefd7*/
      goto LABEL_26; /*0x1003eefd7*/
LABEL_20:
    if ( v17[v16 - 1] == 10 ) /*0x1003eefde*/
    {
      if ( v16 == 1 ) /*0x1003eefe6*/
      {
        v16 = 0; /*0x1003eeff5*/
      }
      else if ( v17[v16 - 2] == 13 ) /*0x1003eefed*/
      {
        v16 -= 2; /*0x1003eefef*/
      }
      else
      {
        --v16; /*0x1003eeff9*/
      }
    }
LABEL_26:
    v18 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h0335c6e49c88655a(v17, v16); /*0x1003ef000*/
    if ( !v19 || *v18 != 91 || v18[v19 - 1] != 93 ) /*0x1003ef022*/
      continue; /*0x1003ef022*/
    if ( v19 == 1 || (char)v18[1] <= -65 ) /*0x1003ef036*/
      core::str::slice_error_fail::h480e51fbd8b15eba(); /*0x1003eff2f*/
    if ( (unsigned __int64)(v19 - 2) < 0x10 ) /*0x1003ef044*/
      continue; /*0x1003ef044*/
    a2 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v18 + 1)), (__m128i)xmmword_1012C1A50); /*0x1003ef04f*/
    if ( !_mm_testz_si128(a2, a2) ) /*0x1003ef057*/
      continue; /*0x1003ef05c*/
    v20 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h581f0c6e132a4fcb(v18 + 17, v19 - 18, 34); /*0x1003ef06f*/
    v22 = v21; /*0x1003ef074*/
    if ( v21 < 0 ) /*0x1003ef07a*/
    {
      v24 = 0; /*0x1003ef6cb*/
      goto LABEL_107; /*0x1003ef6cb*/
    }
    v23 = (const void *)v20; /*0x1003ef080*/
    if ( v21 ) /*0x1003ef086*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003ef08c*/
      v24 = 1; /*0x1003ef091*/
      v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v22, 1u); /*0x1003ef09f*/
      if ( v11 ) /*0x1003ef0a7*/
        goto LABEL_12; /*0x1003ef0a7*/
      v130 = (__int64 *)v22; /*0x1003eff36*/
LABEL_107:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v24, (__int64)v130); /*0x1003ef6ce*/
    }
    v11 = 1; /*0x1003eef14*/
LABEL_12:
    v12 = v23; /*0x1003eef19*/
    v13 = v11; /*0x1003eef22*/
    memcpy((void *)v11, v12, v22); /*0x1003eef25*/
    v111 = (__int64 *)v22; /*0x1003eef2a*/
    v130 = (__int64 *)v13; /*0x1003eef31*/
    v112 = (__int64 *)v13; /*0x1003eef35*/
    v113[0] = v22; /*0x1003eef3c*/
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h1d31b66c0e1d63b4((__int64)&v106, (__int64 *)&v111); /*0x1003eef49*/
  }
  while ( !HIBYTE(v128) ); /*0x1003eef5a*/
  v111 = nullptr; /*0x1003ef0b9*/
  v112 = (__int64 *)__n; /*0x1003ef0cb*/
  v113[0] = __s2; /*0x1003ef0e0*/
  v113[1] = __n; /*0x1003ef0e7*/
  v113[2] = 0; /*0x1003ef0ee*/
  v113[3] = __n; /*0x1003ef0f9*/
  v113[4] = 0xA0000000ALL; /*0x1003ef10a*/
  v114 = 1; /*0x1003ef111*/
  v115 = 0; /*0x1003ef118*/
  v25 = 0; /*0x1003ef121*/
  while ( 2 ) /*0x1003ef12a*/
  {
    v26 = v25; /*0x1003ef12a*/
LABEL_41:
    v27 = v113[0]; /*0x1003ef147*/
    _RAX = _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1003ef154*/
             &v120,
             v113);
    if ( (_DWORD)v120 == 1 ) /*0x1003ef160*/
    {
      v28 = (__int64)v111; /*0x1003ef169*/
      v111 = v122; /*0x1003ef170*/
      v29 = (__int64)v122 - v28; /*0x1003ef177*/
      v30 = (unsigned __int8 *)(v28 + v27); /*0x1003ef17a*/
      if ( v122 == (__int64 *)v28 ) /*0x1003ef180*/
        goto LABEL_53; /*0x1003ef180*/
LABEL_47:
      if ( v30[v29 - 1] == 10 ) /*0x1003ef1d7*/
      {
        if ( v29 == 1 ) /*0x1003ef1df*/
        {
          v29 = 0; /*0x1003ef1ee*/
        }
        else if ( v30[v29 - 2] == 13 ) /*0x1003ef1e6*/
        {
          v29 -= 2; /*0x1003ef1e8*/
        }
        else
        {
          --v29; /*0x1003ef1f2*/
        }
      }
    }
    else
    {
      if ( HIBYTE(v115) ) /*0x1003ef197*/
        goto LABEL_92; /*0x1003ef197*/
      HIBYTE(v115) = 1; /*0x1003ef19d*/
      v29 = (char *)v112 - (char *)v111; /*0x1003ef1b2*/
      LOBYTE(_RAX) = v115 | (v112 != v111); /*0x1003ef1b8*/
      if ( (_BYTE)_RAX != 1 ) /*0x1003ef1c0*/
        goto LABEL_92; /*0x1003ef1c0*/
      v30 = (unsigned __int8 *)v111 + v113[0]; /*0x1003ef1c6*/
      if ( v29 ) /*0x1003ef1d0*/
        goto LABEL_47; /*0x1003ef1d0*/
    }
LABEL_53:
    _RAX = (__int64)core::str::_$LT$impl$u20$str$GT$::trim_matches::h0335c6e49c88655a(v30, v29); /*0x1003ef200*/
    v25 = v31 != 0; /*0x1003ef20b*/
    if ( !v31 ) /*0x1003ef20e*/
    {
      if ( v26 ) /*0x1003ef130*/
        goto LABEL_91; /*0x1003ef134*/
      goto LABEL_40; /*0x1003ef134*/
    }
    if ( v26 || *(_BYTE *)_RAX == 91 ) /*0x1003ef21e*/
    {
LABEL_91:
      if ( HIBYTE(v115) ) /*0x1003ef5ba*/
      {
LABEL_92:
        v57 = v107; /*0x1003ef5c0*/
        if ( v107 ) /*0x1003ef5ca*/
        {
          v58 = v109; /*0x1003ef5d0*/
          if ( v109 ) /*0x1003ef5da*/
          {
            v59 = v106; /*0x1003ef5e0*/
            _R13D = ~_mm_movemask_epi8(_mm_load_si128(v106)); /*0x1003ef5f1*/
            v61 = v106 + 1; /*0x1003ef5f4*/
            do /*0x1003ef610*/
            {
              if ( !(_WORD)_R13D ) /*0x1003ef616*/
              {
                do /*0x1003ef63d*/
                {
                  v62 = _mm_movemask_epi8(_mm_load_si128(v61)); /*0x1003ef626*/
                  v59 -= 24; /*0x1003ef62b*/
                  ++v61; /*0x1003ef632*/
                }
                while ( v62 == 0xFFFF ); /*0x1003ef63d*/
                _R13D = ~v62; /*0x1003ef63f*/
              }
              __asm { tzcnt eax, r13d } /*0x1003ef642*/
              if ( *((_QWORD *)&v59[-1] - 3 * _RAX - 1) ) /*0x1003ef64e*/
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ef665*/
              --v58; /*0x1003ef600*/
              _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x1003ef607*/
              _R13D &= _R13D - 1; /*0x1003ef60a*/
            }
            while ( v58 ); /*0x1003ef610*/
          }
          _RAX = (24 * v57 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x1003ef678*/
          if ( _RAX + v57 != -17 ) /*0x1003ef683*/
            LOBYTE(_RAX) = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ef697*/
        }
        if ( v119 ) /*0x1003ef6a6*/
          goto LABEL_104; /*0x1003ef6a6*/
        return _RAX; /*0x1003ef6a6*/
      }
      continue; /*0x1003ef5ba*/
    }
    break;
  }
  if ( v31 < 0xE || *(_QWORD *)_RAX ^ 0x72705F6C65646F6DLL | *(_QWORD *)(_RAX + 6) ^ 0x72656469766F7270LL ) /*0x1003ef253*/
    goto LABEL_40; /*0x1003ef256*/
  if ( v31 > 0xF ) /*0x1003ef260*/
  {
    v33 = v31; /*0x1003ef28b*/
    v34 = _RAX; /*0x1003ef28e*/
    v35 = core::slice::memchr::memchr_aligned::hda948616f04379f9(0x3Du, _RAX, v31); /*0x1003ef291*/
    v31 = v33; /*0x1003ef296*/
    v36 = v35; /*0x1003ef299*/
    _RAX = v34; /*0x1003ef29c*/
    if ( v36 == 1 ) /*0x1003ef2a3*/
      goto LABEL_63; /*0x1003ef2a3*/
    goto LABEL_40; /*0x1003ef2a3*/
  }
  v32 = 0; /*0x1003ef262*/
  while ( *(_BYTE *)(_RAX + v32) != 61 ) /*0x1003ef274*/
  {
    if ( v31 == ++v32 ) /*0x1003ef27c*/
      goto LABEL_40; /*0x1003ef27c*/
  }
LABEL_63:
  v120 = nullptr; /*0x1003ef2a9*/
  v121 = v31; /*0x1003ef2b4*/
  v122 = (__int64 *)_RAX; /*0x1003ef2bb*/
  v123 = v31; /*0x1003ef2c2*/
  v124 = nullptr; /*0x1003ef2c9*/
  v125 = v31; /*0x1003ef2d1*/
  v126 = 0x3D0000003DLL; /*0x1003ef2df*/
  v127 = 1; /*0x1003ef2e3*/
  v128 = 1; /*0x1003ef2e7*/
  _RAX = _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1003ef2f8*/
           &v132,
           &v122);
  if ( !(_BYTE)v132 ) /*0x1003ef301*/
  {
    if ( !HIBYTE(v128) ) /*0x1003ef49b*/
    {
      HIBYTE(v128) = 1; /*0x1003ef4a1*/
      if ( !(_BYTE)v128 ) /*0x1003ef4a9*/
        _RAX = (__int64)v120; /*0x1003ef4af*/
    }
    goto LABEL_40; /*0x1003ef4bd*/
  }
  _RAX = (__int64)v134; /*0x1003ef307*/
  v120 = v134; /*0x1003ef30b*/
  if ( HIBYTE(v128) ) /*0x1003ef316*/
    goto LABEL_40; /*0x1003ef316*/
  v37 = v122; /*0x1003ef31c*/
  _RAX = _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1003ef32e*/
           &v132,
           &v122);
  if ( (_DWORD)v132 == 1 ) /*0x1003ef337*/
  {
    v38 = (char *)v133 - v120; /*0x1003ef348*/
    v39 = (unsigned __int8 *)v37 + (_QWORD)v120; /*0x1003ef34b*/
    goto LABEL_67; /*0x1003ef34b*/
  }
  if ( HIBYTE(v128) ) /*0x1003ef4c6*/
    goto LABEL_40; /*0x1003ef4c6*/
  v38 = v121 - (_QWORD)v120; /*0x1003ef4da*/
  LOBYTE(_RAX) = v128 | (v121 != (_QWORD)v120); /*0x1003ef4e0*/
  if ( (_BYTE)_RAX != 1 ) /*0x1003ef4e5*/
    goto LABEL_40; /*0x1003ef4e5*/
  v39 = (unsigned __int8 *)&v120[(_QWORD)v122]; /*0x1003ef4eb*/
LABEL_67:
  v40 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h0335c6e49c88655a(v39, v38); /*0x1003ef351*/
  _RAX = core::str::_$LT$impl$u20$str$GT$::trim_matches::h581f0c6e132a4fcb(v40, v41, 34); /*0x1003ef361*/
  v43 = v42; /*0x1003ef366*/
  if ( !v42 ) /*0x1003ef36c*/
  {
LABEL_40:
    if ( HIBYTE(v115) ) /*0x1003ef141*/
      goto LABEL_92; /*0x1003ef141*/
    goto LABEL_41; /*0x1003ef141*/
  }
  v44 = (_BYTE *)_RAX; /*0x1003ef372*/
  if ( v109 ) /*0x1003ef37d*/
  {
    v45 = core::hash::BuildHasher::hash_one::h245728ff9d912134(&v110); /*0x1003ef390*/
    v46 = v106; /*0x1003ef39c*/
    v47 = v107; /*0x1003ef3a3*/
    v48 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v45 >> 57), (__m128i)0LL); /*0x1003ef3b2*/
    v49 = &v106[-2].i8[8]; /*0x1003ef3b7*/
    for ( i = 0; ; i += 16 ) /*0x1003ef3bb*/
    {
      v51 = v47 & v45; /*0x1003ef3be*/
      v52 = _mm_loadu_si128((const __m128i *)((char *)v46 + v51)); /*0x1003ef3c1*/
      a2 = _mm_cmpeq_epi8(v52, v48); /*0x1003ef3ca*/
      _RCX = (unsigned int)_mm_movemask_epi8(a2); /*0x1003ef3ce*/
      if ( (_DWORD)_RCX ) /*0x1003ef3d4*/
        break; /*0x1003ef3d4*/
LABEL_75:
      a2.i64[0] = -1; /*0x1003ef479*/
      if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v52, (__m128i)-1LL)) ) /*0x1003ef481*/
        goto LABEL_83; /*0x1003ef487*/
      v45 = v51 + i + 16; /*0x1003ef489*/
    }
    v129 = v51; /*0x1003ef3da*/
    v103 = v46; /*0x1003ef3de*/
    v104 = v47; /*0x1003ef3e5*/
    v99 = v48; /*0x1003ef3ec*/
    v105 = i; /*0x1003ef3f4*/
    v100 = v52; /*0x1003ef3fb*/
    while ( 1 ) /*0x1003ef403*/
    {
      __s1 = (void *)_RCX; /*0x1003ef403*/
      __asm { tzcnt ecx, ecx } /*0x1003ef407*/
      v54 = -(__int64)(v47 & (v51 + _RCX)); /*0x1003ef411*/
      if ( v43 == *(_QWORD *)&v49[24 * v54 + 16] ) /*0x1003ef41d*/
      {
        v55 = *(const void **)&v49[24 * v54 + 8]; /*0x1003ef423*/
        v130 = (__int64 *)v49; /*0x1003ef427*/
        LODWORD(_RAX) = memcmp(v44, v55, v43); /*0x1003ef431*/
        v49 = (__int8 *)v130; /*0x1003ef436*/
        if ( !(_DWORD)_RAX ) /*0x1003ef43c*/
          goto LABEL_40; /*0x1003ef43c*/
      }
      v56 = (_DWORD)__s1 - 1; /*0x1003ef446*/
      LOWORD(v56) = (unsigned __int16)__s1 & ((_WORD)__s1 - 1); /*0x1003ef449*/
      _RCX = v56; /*0x1003ef44c*/
      v51 = v129; /*0x1003ef44e*/
      v46 = v103; /*0x1003ef452*/
      v47 = v104; /*0x1003ef459*/
      v48 = _mm_load_si128(&v99); /*0x1003ef460*/
      i = v105; /*0x1003ef468*/
      v52 = _mm_load_si128(&v100); /*0x1003ef46f*/
      if ( ((unsigned __int16)__s1 & (unsigned __int16)((_WORD)__s1 - 1)) == 0 ) /*0x1003ef477*/
        goto LABEL_75; /*0x1003ef477*/
    }
  }
LABEL_83:
  if ( v43 == 6 /*0x1003ef58b*/
    && (*v44 | (unsigned __int8)(32 * ((unsigned __int8)(*v44 - 65) < 0x1Au))) == 111
    && (v44[1] | (unsigned __int8)(32 * ((unsigned __int8)(v44[1] - 65) < 0x1Au))) == 112
    && (v44[2] | (unsigned __int8)(32 * ((unsigned __int8)(v44[2] - 65) < 0x1Au))) == 101
    && (v44[3] | (unsigned __int8)(32 * ((unsigned __int8)(v44[3] - 65) < 0x1Au))) == 110
    && (v44[4] | (unsigned __int8)(32 * ((unsigned __int8)(v44[4] - 65) < 0x1Au))) == 97 )
  {
    _RAX = (unsigned __int8)v44[5]; /*0x1003ef591*/
    if ( ((unsigned __int8)_RAX | (unsigned __int8)(32 * ((unsigned __int8)(_RAX - 65) < 0x1Au))) == 105 ) /*0x1003ef5a8*/
      goto LABEL_40; /*0x1003ef5a8*/
  }
  v63 = __n; /*0x1003ef6f8*/
  alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h384b07dd33e8b3b5((__int64 *)&v120, __n, 0, 1u, 1); /*0x1003ef704*/
  v24 = v121; /*0x1003ef709*/
  if ( (_DWORD)v120 == 1 ) /*0x1003ef717*/
  {
    v130 = v122; /*0x1003eff13*/
    goto LABEL_107; /*0x1003eff17*/
  }
  v132 = v121; /*0x1003ef724*/
  __s1 = v122; /*0x1003ef728*/
  v133 = v122; /*0x1003ef72c*/
  v134 = nullptr; /*0x1003ef730*/
  v120 = nullptr; /*0x1003ef738*/
  v121 = v63; /*0x1003ef743*/
  v122 = (__int64 *)__s2; /*0x1003ef751*/
  v123 = v63; /*0x1003ef758*/
  v124 = nullptr; /*0x1003ef75f*/
  v125 = v63; /*0x1003ef767*/
  v126 = 0xA0000000ALL; /*0x1003ef775*/
  v127 = 1; /*0x1003ef779*/
  v128 = 0; /*0x1003ef77d*/
  v130 = nullptr; /*0x1003ef783*/
  LODWORD(v129) = 0; /*0x1003ef78b*/
  v64 = 0; /*0x1003ef792*/
  while ( 2 ) /*0x1003ef7bd*/
  {
    v65 = v122; /*0x1003ef7bd*/
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x1003ef7d2*/
      &v111,
      &v122);
    if ( (_DWORD)v111 == 1 ) /*0x1003ef7de*/
    {
      v66 = v120; /*0x1003ef7e7*/
      v120 = (char *)v113[0]; /*0x1003ef7ee*/
      v67 = v113[0] - (_QWORD)v66; /*0x1003ef7f5*/
      v68 = (unsigned __int8 *)v65 + (_QWORD)v66; /*0x1003ef7fb*/
      goto LABEL_117; /*0x1003ef7fe*/
    }
    if ( !HIBYTE(v128) ) /*0x1003ef804*/
    {
      HIBYTE(v128) = 1; /*0x1003ef80a*/
      v67 = v121 - (_QWORD)v120; /*0x1003ef81c*/
      if ( ((unsigned __int8)v128 | (v121 != (_QWORD)v120)) == 1 ) /*0x1003ef827*/
      {
        v68 = (unsigned __int8 *)&v120[(_QWORD)v122]; /*0x1003ef82d*/
LABEL_117:
        if ( v67 && v68[v67 - 1] == 10 ) /*0x1003ef83f*/
        {
          if ( v67 == 1 ) /*0x1003ef847*/
          {
            v67 = 0; /*0x1003ef857*/
          }
          else if ( v68[v67 - 2] == 13 ) /*0x1003ef84f*/
          {
            v67 -= 2LL; /*0x1003ef851*/
          }
          else
          {
            --v67; /*0x1003ef85c*/
          }
        }
        v69 = v68; /*0x1003ef85f*/
        v74 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h0335c6e49c88655a(v68, v67); /*0x1003ef86a*/
        v75 = v70; /*0x1003ef86d*/
        switch ( v70 ) /*0x1003ef88c*/
        {
          case 0x1EuLL: /*0x1003ef88c*/
            a2 = _mm_loadu_si128((const __m128i *)(v74 + 14)); /*0x1003ef89f*/
            v76 = _mm_or_si128( /*0x1003ef8b1*/
                    _mm_xor_si128(
                      _mm_loadu_si128((const __m128i *)((char *)&anon_0bcfb5f5de49270c5675714f036928d0_303 + 14)),
                      a2),
                    _mm_xor_si128(
                      _mm_loadu_si128((const __m128i *)v74),
                      _mm_loadu_si128((const __m128i *)&anon_0bcfb5f5de49270c5675714f036928d0_303)));
            if ( !_mm_testz_si128(v76, v76) ) /*0x1003ef8ba*/
              goto LABEL_138; /*0x1003ef8ba*/
            goto LABEL_131; /*0x1003ef8ba*/
          case 0x24uLL: /*0x1003ef88c*/
            v77 = 36; /*0x1003ef8e7*/
            v78 = v74; /*0x1003ef8ec*/
            v79 = &anon_0bcfb5f5de49270c5675714f036928d0_304; /*0x1003ef8ef*/
            goto LABEL_130; /*0x1003ef8ef*/
          case 0x27uLL: /*0x1003ef88c*/
            v77 = 39; /*0x1003ef8c2*/
            v78 = v74; /*0x1003ef8c7*/
            v79 = &anon_0bcfb5f5de49270c5675714f036928d0_305; /*0x1003ef8ca*/
LABEL_130:
            if ( memcmp(v78, v79, v77) ) /*0x1003ef8f6*/
              goto LABEL_138; /*0x1003ef8fd*/
LABEL_131:
            v83 = (__int64)v130; /*0x1003ef903*/
            if ( v67 > v132 - (unsigned __int64)v130 ) /*0x1003ef911*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c( /*0x1003efc88*/
                &v132,
                (__int64)v130,
                v67,
                1,
                1u);
              __s1 = v133; /*0x1003efc91*/
              v83 = (__int64)v134; /*0x1003efc95*/
            }
            memcpy((char *)__s1 + v83, v69, v67); /*0x1003ef924*/
            v84 = v83 + v67; /*0x1003ef929*/
            v134 = (char *)v84; /*0x1003ef92c*/
            if ( v132 == v84 ) /*0x1003ef934*/
              goto LABEL_153; /*0x1003ef934*/
            goto LABEL_110; /*0x1003ef934*/
          case 0x37uLL: /*0x1003ef88c*/
            v80 = 55; /*0x1003ef95b*/
            v81 = v74; /*0x1003ef960*/
            v82 = "# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)"; /*0x1003ef963*/
            goto LABEL_137; /*0x1003ef96a*/
          case 0x3CuLL: /*0x1003ef88c*/
            v80 = 60; /*0x1003ef96c*/
            v81 = v74; /*0x1003ef971*/
            v82 = (const char *)&anon_0bcfb5f5de49270c5675714f036928d0_54; /*0x1003ef974*/
            goto LABEL_137; /*0x1003ef974*/
          case 0x40uLL: /*0x1003ef88c*/
            v80 = 64; /*0x1003ef8d3*/
            v81 = v74; /*0x1003ef8d8*/
            v82 = (const char *)&anon_0bcfb5f5de49270c5675714f036928d0_55; /*0x1003ef8db*/
LABEL_137:
            if ( memcmp(v81, v82, v80) ) /*0x1003ef97b*/
              goto LABEL_138; /*0x1003ef982*/
            v89 = (__int64)v130; /*0x1003efaba*/
            if ( v67 > v132 - (unsigned __int64)v130 ) /*0x1003efac4*/
            {
              alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c( /*0x1003efcb3*/
                &v132,
                (__int64)v130,
                v67,
                1,
                1u);
              __s1 = v133; /*0x1003efcbc*/
              v89 = (__int64)v134; /*0x1003efcc0*/
            }
            memcpy((char *)__s1 + v89, v69, v67); /*0x1003efad7*/
            v84 = v89 + v67; /*0x1003efadc*/
            v134 = (char *)v84; /*0x1003efadf*/
            v64 = 1; /*0x1003efae3*/
            if ( v132 == v84 ) /*0x1003efae9*/
              goto LABEL_142; /*0x1003efae9*/
            goto LABEL_111; /*0x1003efae9*/
          default:
LABEL_138:
            if ( (v64 & 1) != 0 ) /*0x1003ef98b*/
            {
              v85 = (__int64)v130; /*0x1003ef991*/
              if ( v67 > v132 - (unsigned __int64)v130 ) /*0x1003ef99b*/
              {
                alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c( /*0x1003efc5d*/
                  &v132,
                  (__int64)v130,
                  v67,
                  1,
                  1u);
                __s1 = v133; /*0x1003efc66*/
                v85 = (__int64)v134; /*0x1003efc6a*/
              }
              memcpy((char *)__s1 + v85, v69, v67); /*0x1003ef9ae*/
              v84 = v85 + v67; /*0x1003ef9b3*/
              v134 = (char *)v84; /*0x1003ef9b6*/
              v64 = 1; /*0x1003ef9ba*/
              if ( v132 == v84 ) /*0x1003ef9c0*/
LABEL_142:
                alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c( /*0x1003ef9c6*/
                  &v132,
                  v84,
                  1,
                  1,
                  1u);
LABEL_111:
              __s1 = v133; /*0x1003ef798*/
              v134[(_QWORD)v133] = 10; /*0x1003ef7a4*/
              v134 = (char *)(v84 + 1); /*0x1003ef7ab*/
              v130 = (__int64 *)(v84 + 1); /*0x1003ef7af*/
              if ( HIBYTE(v128) ) /*0x1003ef7b7*/
                goto LABEL_175; /*0x1003ef7b7*/
              continue; /*0x1003ef7b7*/
            }
            v86 = (__int64)v130; /*0x1003ef9ea*/
            if ( v75 && *v74 == 91 ) /*0x1003ef9f4*/
            {
              if ( v67 > v132 - (unsigned __int64)v130 ) /*0x1003efa00*/
              {
                alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c( /*0x1003efd09*/
                  &v132,
                  (__int64)v130,
                  v67,
                  1,
                  1u);
                __s1 = v133; /*0x1003efd12*/
                v86 = (__int64)v134; /*0x1003efd16*/
              }
              v87 = memcpy((char *)__s1 + v86, v69, v67); /*0x1003efa13*/
              v84 = v86 + v67; /*0x1003efa18*/
              v134 = (char *)v84; /*0x1003efa1b*/
              LOBYTE(v87) = 1; /*0x1003efa1f*/
              LODWORD(v129) = (_DWORD)v87; /*0x1003efa21*/
              if ( v132 == v84 ) /*0x1003efa28*/
                goto LABEL_153; /*0x1003efa28*/
              goto LABEL_110; /*0x1003efa28*/
            }
            if ( (v129 & 1) != 0 ) /*0x1003efa53*/
            {
              v88 = v132 - (_DWORD)v130; /*0x1003efa5d*/
              if ( v67 > v132 - (unsigned __int64)v130 ) /*0x1003efa63*/
              {
                alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c( /*0x1003efcde*/
                  &v132,
                  (__int64)v130,
                  v67,
                  1,
                  1u);
                v88 = (int)v133; /*0x1003efce3*/
                __s1 = v133; /*0x1003efce7*/
                v86 = (__int64)v134; /*0x1003efceb*/
              }
              LOBYTE(v88) = v75 != 0; /*0x1003efa6c*/
              LODWORD(v129) = v88; /*0x1003efa6f*/
              memcpy((char *)__s1 + v86, v69, v67); /*0x1003efa7f*/
              v84 = v86 + v67; /*0x1003efa84*/
              v134 = (char *)v84; /*0x1003efa87*/
              if ( v132 == v84 ) /*0x1003efa8f*/
LABEL_153:
                alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c( /*0x1003efa95*/
                  &v132,
                  v84,
                  1,
                  1,
                  1u);
LABEL_110:
              v64 = 0; /*0x1003ef796*/
              goto LABEL_111; /*0x1003ef796*/
            }
            v90 = _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h63236a2c8bddd212( /*0x1003efb16*/
                    v74,
                    v75,
                    v70,
                    v71,
                    v72,
                    v73,
                    v99.i64[0],
                    v99.i64[1],
                    v100.i64[0],
                    v100.i64[1],
                    v101,
                    v102);
            v91 = (__int64)v130; /*0x1003efb1d*/
            if ( !v90 ) /*0x1003efb21*/
              goto LABEL_169; /*0x1003efb21*/
            if ( v75 >= 0xE ) /*0x1003efb2b*/
            {
              if ( !(*(_QWORD *)v74 ^ 0x72705F6C65646F6DLL | *(_QWORD *)(v74 + 6) ^ 0x72656469766F7270LL) ) /*0x1003efb59*/
                goto LABEL_174; /*0x1003efb59*/
              if ( v75 >= 0x16 ) /*0x1003efb66*/
              {
                a2 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v74), (__m128i)xmmword_1012C1AB0); /*0x1003efb6d*/
                v92 = _mm_or_si128( /*0x1003efb83*/
                        _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v74 + 6)), (__m128i)xmmword_1012C1AA0),
                        a2);
                if ( _mm_testz_si128(v92, v92) ) /*0x1003efb8c*/
                  goto LABEL_174; /*0x1003efb8c*/
              }
            }
            else if ( v75 < 6 ) /*0x1003efb31*/
            {
              goto LABEL_169; /*0x1003efb31*/
            }
            if ( *(_DWORD *)v74 ^ 0x65646F6D | *((unsigned __int16 *)v74 + 2) ^ 0x206C ) /*0x1003efba7*/
            {
              if ( *(_DWORD *)v74 ^ 0x65646F6D | *((unsigned __int16 *)v74 + 2) ^ 0x3D6C ) /*0x1003efbbf*/
              {
                if ( v75 < 0x18 /*0x1003efbed*/
                  || (a2 = _mm_xor_si128(_mm_loadu_si128((const __m128i *)v74), (__m128i)xmmword_1012C1AD0),
                      v93 = _mm_or_si128(
                              _mm_xor_si128(_mm_loadl_epi64((const __m128i *)v74 + 1), (__m128i)xmmword_1012C1AC0),
                              a2),
                      !_mm_testz_si128(v93, v93)) )
                {
LABEL_169:
                  if ( v67 > v132 - (unsigned __int64)v130 ) /*0x1003efbf9*/
                  {
                    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c( /*0x1003efd34*/
                      &v132,
                      (__int64)v130,
                      v67,
                      1,
                      1u);
                    __s1 = v133; /*0x1003efd3d*/
                    v91 = (__int64)v134; /*0x1003efd41*/
                  }
                  memcpy((char *)__s1 + v91, v69, v67); /*0x1003efc0c*/
                  v84 = v91 + v67; /*0x1003efc11*/
                  v134 = (char *)v84; /*0x1003efc14*/
                  if ( v132 == v84 ) /*0x1003efc1c*/
                    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c( /*0x1003efd61*/
                      &v132,
                      v84,
                      1,
                      1,
                      1u);
                  v64 = 0; /*0x1003efc22*/
                  LODWORD(v129) = 0; /*0x1003efc24*/
                  goto LABEL_111; /*0x1003efc2b*/
                }
              }
            }
LABEL_174:
            v64 = 0; /*0x1003efc30*/
            LODWORD(v129) = 0; /*0x1003efc32*/
            if ( HIBYTE(v128) ) /*0x1003efc3d*/
              goto LABEL_175; /*0x1003efc3d*/
            break; /*0x1003efc3d*/
        }
        continue; /*0x1003efc3d*/
      }
    }
    break;
  }
LABEL_175:
  v94 = (__int64)v130; /*0x1003efd6b*/
  v95 = v119; /*0x1003efd79*/
  v96 = __s1; /*0x1003efd80*/
  if ( v130 != (__int64 *)__n || memcmp(__s1, __s2, __n) ) /*0x1003efd90*/
  {
    v97 = codexmate_lib::core::relay::atomic_write::write_atomic::h7c1a4e98b44038af( /*0x1003efdb1*/
            v101,
            v102,
            (__int64)v96,
            v94,
            *(double *)a2.i64);
    if ( v97 ) /*0x1003efdb9*/
    {
      v116 = v97; /*0x1003efdbf*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1003efdd4*/
      {
        v111 = &v116; /*0x1003efddd*/
        v112 = (__int64 *)_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1003efdeb*/
        v120 = (char *)&anon_0eedd02070250de7472aa97ee6b1a8ea_244; /*0x1003efdf9*/
        v121 = 44; /*0x1003efe00*/
        v122 = (__int64 *)&anon_0eedd02070250de7472aa97ee6b1a8ea_244; /*0x1003efe0b*/
        v123 = 44; /*0x1003efe12*/
        v124 = &off_10152EF70; /*0x1003efe24*/
        log::__private_api::log::h08ccde1c7672bffb(); /*0x1003efe42*/
      }
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf04cb2eb174fad4f(&v116); /*0x1003efe4e*/
    }
    else if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u ) /*0x1003efe63*/
    {
      v120 = (char *)&anon_0eedd02070250de7472aa97ee6b1a8ea_244; /*0x1003efe6c*/
      v121 = 44; /*0x1003efe73*/
      v122 = (__int64 *)&anon_0eedd02070250de7472aa97ee6b1a8ea_244; /*0x1003efe7e*/
      v123 = 44; /*0x1003efe85*/
      v124 = &off_10152EF88; /*0x1003efe97*/
      log::__private_api::log::h08ccde1c7672bffb(); /*0x1003efeb3*/
    }
  }
  if ( v132 ) /*0x1003efebf*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003efec9*/
  LOBYTE(_RAX) = _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h96d53e17d4e72df3(&v106); /*0x1003efed5*/
  if ( v95 ) /*0x1003efedd*/
LABEL_104:
    LOBYTE(_RAX) = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1003ef6b4*/
  return _RAX; /*0x1003ef6b9*/
}