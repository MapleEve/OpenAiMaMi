// __ZN13codexmate_lib4core5relay6models22normalize_relay_models @ 0x1003308e0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::models::normalize_relay_models::hdc474f64afe66555(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        char a6)
{
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 v12; // r15
  __int64 v13; // r13
  unsigned __int8 *v14; // r13
  __int64 v15; // r14
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rax
  __int64 v19; // rdx
  size_t v20; // r15
  unsigned __int8 *v21; // r14
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // rax
  const void *v24; // r14
  __int64 v25; // rbx
  unsigned __int8 *v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rsi
  unsigned __int8 *v29; // r15
  unsigned __int8 *v30; // rcx
  unsigned int v31; // edx
  int v32; // edi
  int v33; // r9d
  int v34; // r8d
  unsigned int v35; // eax
  int v36; // ecx
  int v37; // edi
  int v38; // edx
  __int64 v39; // r15
  __int64 v40; // r14
  __int64 v41; // rbx
  char v42; // r13
  __int64 v43; // r12
  __int64 v44; // r13
  __int64 v45; // rax
  __int64 v46; // r13
  __int64 v47; // rcx
  __int64 v48; // r15
  __int64 v49; // rax
  __int64 v50; // rcx
  char v51; // dl
  __int64 v52; // rsi
  __int64 v53; // rdi
  __int64 v54; // r8
  __int64 *v55; // rbx
  __int64 v56; // rsi
  __int64 v57; // rax
  __int64 v59; // rsi
  const __m128i *v61; // rax
  const __m128i *v62; // rax
  __int64 v63; // rcx
  __int64 v64; // rax
  __int64 v65; // r14
  __int64 v66; // rbx
  const __m128i *v67; // r15
  const __m128i *v69; // r12
  int v70; // r13d
  __int64 v71; // rax
  __int64 v72; // rsi
  unsigned __int64 v73; // rax
  unsigned __int64 v74; // r14
  bool v75; // zf
  unsigned __int64 v76; // r14
  __int64 v77; // rbx
  _QWORD *v78; // r14
  __int64 v79; // rsi
  __int64 v80; // rsi
  __int64 v81; // rsi
  __int64 v83; // rdx
  _BYTE v84[24]; // [rsp+0h] [rbp-1B0h] BYREF
  _BYTE v85[24]; // [rsp+18h] [rbp-198h] BYREF
  _QWORD v86[3]; // [rsp+30h] [rbp-180h] BYREF
  _QWORD v87[3]; // [rsp+48h] [rbp-168h] BYREF
  _QWORD v88[3]; // [rsp+60h] [rbp-150h] BYREF
  __int64 v89; // [rsp+78h] [rbp-138h]
  __int64 v90; // [rsp+80h] [rbp-130h]
  const __m128i *v91; // [rsp+88h] [rbp-128h] BYREF
  __int64 v92; // [rsp+90h] [rbp-120h]
  __int64 v93; // [rsp+98h] [rbp-118h]
  __int64 v94; // [rsp+A0h] [rbp-110h]
  __int64 v95; // [rsp+A8h] [rbp-108h]
  __int64 v96; // [rsp+B0h] [rbp-100h]
  __int64 v97; // [rsp+B8h] [rbp-F8h]
  __int64 v98; // [rsp+C0h] [rbp-F0h]
  __int64 v99; // [rsp+C8h] [rbp-E8h]
  __int64 v100[12]; // [rsp+D0h] [rbp-E0h] BYREF
  __int64 v101; // [rsp+130h] [rbp-80h] BYREF
  __int64 v102; // [rsp+138h] [rbp-78h]
  __int64 v103; // [rsp+140h] [rbp-70h]
  __int64 v104; // [rsp+148h] [rbp-68h] BYREF
  __int64 v105; // [rsp+150h] [rbp-60h]
  __int64 v106; // [rsp+158h] [rbp-58h]
  __int64 v107; // [rsp+160h] [rbp-50h] BYREF
  __int64 v108; // [rsp+168h] [rbp-48h]
  __int64 v109; // [rsp+170h] [rbp-40h]
  __int64 v110; // [rsp+178h] [rbp-38h]
  __int64 v111; // [rsp+180h] [rbp-30h]

  v110 = a1; /*0x1003308f4*/
  if ( !a3 ) /*0x1003308fb*/
  {
    codexmate_lib::core::relay::models::normalize_model_id::h31ecf32369635efd(v100, a4, a5); /*0x100330f7a*/
    v91 = (const __m128i *)v100[1]; /*0x100330f8d*/
    v92 = v100[2]; /*0x100330f94*/
    v93 = v100[3]; /*0x100330fa2*/
    v48 = v110; /*0x100330fb9*/
    if ( LOBYTE(v100[0]) ) /*0x100330fb0*/
    {
      *(_QWORD *)(v110 + 24) = v93; /*0x100330fbd*/
      v61 = v91; /*0x100330fc1*/
      *(_QWORD *)(v48 + 16) = v92; /*0x100330fcf*/
      *(_QWORD *)(v48 + 8) = v61; /*0x100330fd3*/
      *(_QWORD *)v48 = 0x8000000000000000LL; /*0x100330fe1*/
    }
    else
    {
      *(_QWORD *)(v110 + 40) = v93; /*0x100330ff4*/
      v62 = v91; /*0x100330ff8*/
      *(_QWORD *)(v48 + 32) = v92; /*0x100331006*/
      *(_QWORD *)(v48 + 24) = v62; /*0x10033100a*/
      *(_QWORD *)v48 = 0; /*0x10033100e*/
      *(_QWORD *)(v48 + 8) = 8; /*0x100331015*/
      *(_QWORD *)(v48 + 16) = 0; /*0x10033101d*/
      *(_BYTE *)(v48 + 48) = a6; /*0x100331025*/
    }
    return v48; /*0x100330fe4*/
  }
  v7 = a2; /*0x100330904*/
  v8 = 96 * a3; /*0x10033090e*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100330912*/
  v97 = v8; /*0x10033091c*/
  v9 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 8); /*0x100330926*/
  if ( !v9 ) /*0x10033092e*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, v97); /*0x100331401*/
  v104 = a3; /*0x100330934*/
  v105 = v9; /*0x100330938*/
  v106 = 0; /*0x10033093c*/
  std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x10033094b*/
  v11 = v10; /*0x10033094d*/
  if ( *(_BYTE *)(v10 + 16) == 1 ) /*0x100330954*/
  {
    v12 = *(_QWORD *)v10; /*0x10033095a*/
    v13 = *(_QWORD *)(v10 + 8); /*0x10033095d*/
  }
  else
  {
    v12 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45(); /*0x1003313df*/
    v13 = v83; /*0x1003313e2*/
    *(_QWORD *)v11 = v12; /*0x1003313e5*/
    *(_QWORD *)(v11 + 8) = v83; /*0x1003313e8*/
    *(_BYTE *)(v11 + 16) = 1; /*0x1003313ec*/
  }
  *(_QWORD *)v11 = v12 + 1; /*0x100330965*/
  hashbrown::raw::RawTableInner::fallible_with_capacity::hdcfda39df8718338(v100, 24, a3, 1); /*0x10033097c*/
  v94 = v100[3]; /*0x100330992*/
  v93 = v100[2]; /*0x1003309a0*/
  v92 = v100[1]; /*0x1003309b5*/
  v91 = (const __m128i *)v100[0]; /*0x1003309bc*/
  v95 = v12; /*0x1003309c3*/
  v96 = v13; /*0x1003309ca*/
  v97 += a2; /*0x1003309d1*/
  do /*0x100330e45*/
  {
    codexmate_lib::core::relay::models::normalize_model_id::h31ecf32369635efd( /*0x1003309f3*/
      v100,
      *(_QWORD *)(v7 + 24),
      *(_QWORD *)(v7 + 32));
    v107 = v100[1]; /*0x100330a05*/
    v108 = v100[2]; /*0x100330a09*/
    v109 = v100[3]; /*0x100330a11*/
    v14 = (unsigned __int8 *)v98; /*0x100330a18*/
    if ( LODWORD(v100[0]) == 1 ) /*0x100330a1f*/
    {
      v48 = v110; /*0x100331044*/
      *(_QWORD *)(v110 + 24) = v109; /*0x100331048*/
      _RAX = v107; /*0x10033104c*/
      *(_QWORD *)(v48 + 16) = v108; /*0x100331054*/
      *(_QWORD *)(v48 + 8) = _RAX; /*0x100331058*/
      *(_QWORD *)v48 = 0x8000000000000000LL; /*0x10033105c*/
      goto LABEL_75; /*0x10033105f*/
    }
    v103 = v109; /*0x100330a29*/
    v102 = v108; /*0x100330a35*/
    v101 = v107; /*0x100330a39*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v100, &v101); /*0x100330a44*/
    if ( (unsigned __int8)hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h7cb69bbda67bf2b3(&v91, v100) ) /*0x100330a53*/
    {
      v100[0] = (__int64)&v101; /*0x100331068*/
      v100[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100331076*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v88, &unk_1017BC5AF, v100); /*0x100331092*/
      v48 = v110; /*0x100331097*/
      *(_QWORD *)(v110 + 24) = v88[2]; /*0x1003310a2*/
      _RAX = v88[0]; /*0x1003310a6*/
      v63 = v88[1]; /*0x1003310ad*/
      goto LABEL_70; /*0x1003310b4*/
    }
    v15 = *(_QWORD *)v7; /*0x100330a60*/
    if ( *(_QWORD *)v7 && (unsigned __int64)(*(_QWORD *)(v7 + 8) - 1LL) >= 0x989680 ) /*0x100330a77*/
    {
      v100[0] = (__int64)&v101; /*0x100331114*/
      v100[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100331122*/
      v100[2] = (__int64)&unk_1015E3AA0; /*0x100331130*/
      v100[3] = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$isize$GT$::fmt::h7ee2993d2036092b; /*0x10033113e*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v87, &unk_1017BC5CC, v100); /*0x10033115a*/
      v48 = v110; /*0x10033115f*/
      *(_QWORD *)(v110 + 24) = v87[2]; /*0x10033116a*/
      _RAX = v87[0]; /*0x10033116e*/
      v63 = v87[1]; /*0x100331175*/
LABEL_70:
      *(_QWORD *)(v48 + 16) = v63; /*0x10033117c*/
      *(_QWORD *)(v48 + 8) = _RAX; /*0x100331180*/
      *(_QWORD *)v48 = 0x8000000000000000LL; /*0x100331184*/
      v59 = v101; /*0x100331187*/
      if ( !v101 ) /*0x10033118e*/
        goto LABEL_75; /*0x10033118e*/
      goto LABEL_74; /*0x10033118e*/
    }
    if ( *(_QWORD *)(v7 + 64) == 0x8000000000000000LL /*0x100330a9f*/
      || (v16 = *(_QWORD *)(v7 + 72),
          v17 = *(_QWORD *)(v7 + 80),
          v18 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v16, v17),
          v20 = v19,
          v18 == 0 || v19 == 0) )
    {
      v99 = v15; /*0x100330aa6*/
      v111 = 0x8000000000000000LL; /*0x100330aad*/
      v21 = *(unsigned __int8 **)(v7 + 48); /*0x100330ab1*/
      v22 = *(_QWORD *)(v7 + 56); /*0x100330ab6*/
      if ( v22 < 0x20 ) /*0x100330abf*/
        goto LABEL_13; /*0x100330abf*/
      goto LABEL_21; /*0x100330abf*/
    }
    if ( v19 < 0 ) /*0x100330ae3*/
    {
      v25 = 0; /*0x10033102e*/
      goto LABEL_65; /*0x10033102e*/
    }
    v99 = v15; /*0x100330ae9*/
    v24 = (const void *)v18; /*0x100330af0*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v16, v17); /*0x100330af3*/
    v25 = 1; /*0x100330af8*/
    v26 = (unsigned __int8 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v20, 1); /*0x100330b05*/
    if ( !v26 ) /*0x100330b0d*/
    {
      v14 = (unsigned __int8 *)v20; /*0x100331406*/
LABEL_65:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v25, v14); /*0x100331030*/
    }
    v14 = v26; /*0x100330b13*/
    memcpy(v26, v24, v20); /*0x100330b1f*/
    v111 = v20; /*0x100330b28*/
    if ( v20 >= 0x20 ) /*0x100330b2c*/
      v27 = core::str::count::do_count_chars::h4875767a8f682eeb(v14, v20); /*0x100330b4b*/
    else
      v27 = core::str::count::char_count_general_case::h35f326d7c82e4f55(v14, v20); /*0x100330b34*/
    if ( v27 >= 0x81 ) /*0x100330b60*/
    {
      v100[0] = (__int64)&v101; /*0x10033119d*/
      v100[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1003311ab*/
      v100[2] = (__int64)&qword_1015DA238; /*0x1003311b9*/
      v100[3] = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1003311c7*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v86, &unk_1017BC655, v100); /*0x1003311e3*/
      v48 = v110; /*0x1003311ef*/
      *(_QWORD *)(v110 + 24) = v86[2]; /*0x1003311f3*/
      v64 = v86[0]; /*0x1003311f7*/
      *(_QWORD *)(v48 + 16) = v86[1]; /*0x100331205*/
      *(_QWORD *)(v48 + 8) = v64; /*0x100331209*/
      *(_QWORD *)v48 = 0x8000000000000000LL; /*0x100331217*/
      v56 = v111; /*0x10033121a*/
      goto LABEL_73; /*0x10033121a*/
    }
    v90 = v111; /*0x100330b6a*/
    v21 = *(unsigned __int8 **)(v7 + 48); /*0x100330b71*/
    v22 = *(_QWORD *)(v7 + 56); /*0x100330b76*/
    if ( v22 < 0x20 ) /*0x100330b7f*/
    {
LABEL_13:
      v23 = core::str::count::char_count_general_case::h35f326d7c82e4f55(v21, v22); /*0x100330ac5*/
      goto LABEL_22; /*0x100330ad0*/
    }
LABEL_21:
    v23 = core::str::count::do_count_chars::h4875767a8f682eeb(v21, v22); /*0x100330b90*/
LABEL_22:
    if ( v23 > 8 ) /*0x100330b9f*/
    {
      v100[0] = (__int64)&v101; /*0x1003310bd*/
      v100[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1003310cb*/
      v100[2] = (__int64)&qword_1015E3AA8; /*0x1003310d9*/
      v100[3] = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1003310e7*/
      v55 = (__int64 *)v85; /*0x1003310f5*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(v85, &unk_1017BC630, v100); /*0x100331106*/
LABEL_58:
      v48 = v110; /*0x100330f1b*/
      v56 = v111; /*0x100330f1f*/
      *(_QWORD *)(v110 + 24) = v55[2]; /*0x100330f27*/
      v57 = *v55; /*0x100330f2b*/
      *(_QWORD *)(v48 + 16) = v55[1]; /*0x100330f32*/
      *(_QWORD *)(v48 + 8) = v57; /*0x100330f36*/
      *(_QWORD *)v48 = 0x8000000000000000LL; /*0x100330f44*/
      _RAX = 2 * v56; /*0x100330f47*/
      if ( !(2 * v56) ) /*0x100330f47*/
      {
        v59 = v101; /*0x100330f58*/
        if ( !v101 ) /*0x100330f5f*/
          goto LABEL_75; /*0x100330f5f*/
        goto LABEL_74; /*0x100330f5f*/
      }
LABEL_73:
      HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v56, 1) >> 32; /*0x10033121e*/
      v59 = v101; /*0x10033122b*/
      if ( v101 ) /*0x100331232*/
LABEL_74:
        HIDWORD(_RAX) = (unsigned __int64)_RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v102, v59, 1) >> 32; /*0x100331234*/
LABEL_75:
      v65 = v92; /*0x100331242*/
      if ( v92 ) /*0x10033124c*/
      {
        v66 = v94; /*0x100331252*/
        if ( v94 ) /*0x10033125c*/
        {
          v67 = v91; /*0x100331262*/
          _R13D = ~_mm_movemask_epi8(_mm_load_si128(v91)); /*0x100331273*/
          v69 = v91 + 1; /*0x100331276*/
          do /*0x100331290*/
          {
            if ( !(_WORD)_R13D ) /*0x100331296*/
            {
              do /*0x1003312bd*/
              {
                v70 = _mm_movemask_epi8(_mm_load_si128(v69)); /*0x1003312a6*/
                v67 -= 24; /*0x1003312ab*/
                ++v69; /*0x1003312b2*/
              }
              while ( v70 == 0xFFFF ); /*0x1003312bd*/
              _R13D = ~v70; /*0x1003312bf*/
            }
            __asm { tzcnt eax, r13d } /*0x1003312c2*/
            v71 = -3 * _RAX; /*0x1003312ca*/
            v72 = *((_QWORD *)&v67[-1] + v71 - 1); /*0x1003312ce*/
            if ( v72 ) /*0x1003312d6*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67[-1].i64[v71], v72, 1); /*0x1003312e5*/
            --v66; /*0x100331280*/
            _RAX = _R13D & (unsigned int)(_R13D - 1); /*0x100331287*/
            _R13D &= _R13D - 1; /*0x10033128a*/
          }
          while ( v66 ); /*0x100331290*/
        }
        v73 = (24 * v65 + 39) & 0xFFFFFFFFFFFFFFF0LL; /*0x1003312f8*/
        v74 = v73 + v65; /*0x1003312fc*/
        v75 = v74 == -17; /*0x1003312ff*/
        v76 = v74 + 17; /*0x1003312ff*/
        v48 = v110; /*0x100331303*/
        if ( !v75 ) /*0x100331307*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc((char *)v91 - v73, v76, 16); /*0x10033131b*/
      }
      v77 = v106; /*0x100331320*/
      if ( !v106 ) /*0x100331327*/
      {
LABEL_96:
        if ( v104 ) /*0x1003313ad*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v105, 96 * v104, 8); /*0x1003313c0*/
        return v48; /*0x1003313c0*/
      }
      v78 = (_QWORD *)(v105 + 72); /*0x10033132d*/
      while ( 1 ) /*0x100331349*/
      {
        v79 = *(v78 - 7); /*0x100331349*/
        if ( v79 ) /*0x100331350*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v78 - 6), v79, 1); /*0x10033135b*/
        v80 = *(v78 - 1); /*0x100331360*/
        if ( !(2 * v80) ) /*0x100331364*/
          break; /*0x100331364*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v78, v80, 1); /*0x100331388*/
        v81 = *(v78 - 4); /*0x10033138d*/
        if ( v81 ) /*0x100331394*/
          goto LABEL_95; /*0x100331394*/
LABEL_88:
        v78 += 12; /*0x100331340*/
        if ( !--v77 ) /*0x100331347*/
          goto LABEL_96; /*0x100331347*/
      }
      v81 = *(v78 - 4); /*0x100331371*/
      if ( !v81 ) /*0x100331378*/
        goto LABEL_88; /*0x100331378*/
LABEL_95:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v78 - 3), v81, 1); /*0x100331396*/
      goto LABEL_88; /*0x1003313a4*/
    }
    v89 = v7 + 96; /*0x100330baa*/
    v28 = v7 + 40; /*0x100330bb1*/
    v29 = &v21[v22]; /*0x100330bb6*/
    if ( v111 == 0x8000000000000000LL ) /*0x100330bbd*/
      goto LABEL_40; /*0x100330bbd*/
    v30 = v14; /*0x100330bcd*/
    while ( 1 ) /*0x100330bf8*/
    {
      if ( v30 == &v14[v90] ) /*0x100330bfb*/
        goto LABEL_40; /*0x100330bfb*/
      v31 = *v30; /*0x100330c01*/
      if ( (v31 & 0x80u) == 0 ) /*0x100330c06*/
      {
        ++v30; /*0x100330be0*/
        if ( v31 < 0x20 ) /*0x100330be6*/
          goto LABEL_57; /*0x100330be6*/
        goto LABEL_26; /*0x100330be6*/
      }
      v32 = v31 & 0x1F; /*0x100330c0a*/
      v33 = v30[1] & 0x3F; /*0x100330c12*/
      if ( (unsigned __int8)v31 <= 0xDFu ) /*0x100330c19*/
      {
        v30 += 2; /*0x100330c5c*/
        v31 = v33 | (v32 << 6); /*0x100330c66*/
        if ( v31 < 0x20 ) /*0x100330c6b*/
          goto LABEL_57; /*0x100330c6b*/
        goto LABEL_26; /*0x100330c6b*/
      }
      v34 = (v33 << 6) | v30[2] & 0x3F; /*0x100330c28*/
      if ( (unsigned __int8)v31 >= 0xF0u ) /*0x100330c2e*/
        break; /*0x100330c2e*/
      v30 += 3; /*0x100330c76*/
      v31 = (v32 << 12) | v34; /*0x100330c80*/
      if ( v31 < 0x20 ) /*0x100330c86*/
      {
LABEL_57:
        v100[0] = (__int64)&v101; /*0x100330ee5*/
        v100[1] = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100330ef7*/
        v55 = (__int64 *)v84; /*0x100330f05*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v84, &unk_1017BC5FB, v100); /*0x100330f16*/
        goto LABEL_58; /*0x100330f16*/
      }
LABEL_26:
      if ( v31 - 127 < 0x21 ) /*0x100330bf2*/
        goto LABEL_57; /*0x100330bf2*/
    }
    v31 = ((v31 & 7) << 18) | (v34 << 6) | v30[3] & 0x3F; /*0x100330c44*/
    if ( v31 != 1114112 ) /*0x100330c4c*/
    {
      v30 += 4; /*0x100330c4e*/
      if ( v31 < 0x20 ) /*0x100330c55*/
        goto LABEL_57; /*0x100330c55*/
      goto LABEL_26; /*0x100330c55*/
    }
LABEL_40:
    while ( v21 != v29 ) /*0x100330cbb*/
    {
      v35 = *v21; /*0x100330cc1*/
      if ( (v35 & 0x80u) == 0 ) /*0x100330cc7*/
      {
        ++v21; /*0x100330ca0*/
        if ( v35 < 0x20 ) /*0x100330ca6*/
          goto LABEL_57; /*0x100330ca6*/
      }
      else
      {
        v36 = v35 & 0x1F; /*0x100330ccb*/
        v37 = v21[1] & 0x3F; /*0x100330cd3*/
        if ( (unsigned __int8)v35 <= 0xDFu ) /*0x100330cd8*/
        {
          v21 += 2; /*0x100330d15*/
          v35 = v37 | (v36 << 6); /*0x100330d1e*/
          if ( v35 < 0x20 ) /*0x100330d23*/
            goto LABEL_57; /*0x100330d23*/
        }
        else
        {
          v38 = (v37 << 6) | v21[2] & 0x3F; /*0x100330ce5*/
          if ( (unsigned __int8)v35 < 0xF0u ) /*0x100330ce9*/
          {
            v21 += 3; /*0x100330d2a*/
            v35 = (v36 << 12) | v38; /*0x100330d33*/
            if ( v35 < 0x20 ) /*0x100330d38*/
              goto LABEL_57; /*0x100330d38*/
          }
          else
          {
            v35 = ((v35 & 7) << 18) | (v38 << 6) | v21[3] & 0x3F; /*0x100330cfe*/
            if ( v35 == 1114112 ) /*0x100330d05*/
              break; /*0x100330d05*/
            v21 += 4; /*0x100330d07*/
            if ( v35 < 0x20 ) /*0x100330d0e*/
              goto LABEL_57; /*0x100330d0e*/
          }
        }
      }
      if ( v35 - 127 < 0x21 ) /*0x100330cb2*/
        goto LABEL_57; /*0x100330cb2*/
    }
    v98 = (__int64)v14; /*0x100330d50*/
    v39 = v101; /*0x100330d57*/
    v40 = v102; /*0x100330d5b*/
    v41 = v103; /*0x100330d5f*/
    v42 = *(_BYTE *)(v7 + 88); /*0x100330d63*/
    v43 = *(_QWORD *)(v7 + 8); /*0x100330d69*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v107, v28); /*0x100330d72*/
    v100[2] = v39; /*0x100330d77*/
    v100[3] = v40; /*0x100330d7e*/
    v100[4] = v41; /*0x100330d85*/
    LOBYTE(v100[11]) = v42; /*0x100330d8c*/
    v100[0] = v99; /*0x100330d9a*/
    v100[1] = v43; /*0x100330da1*/
    v100[8] = v111; /*0x100330dac*/
    v100[9] = v98; /*0x100330dba*/
    v100[10] = v90; /*0x100330dc8*/
    v100[7] = v109; /*0x100330dda*/
    v100[6] = v108; /*0x100330de6*/
    v100[5] = v107; /*0x100330dea*/
    v44 = v106; /*0x100330dee*/
    if ( v106 == v104 ) /*0x100330df6*/
      alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h8b5a3ecf3d9897d5(&v104); /*0x100330dfc*/
    v45 = v105; /*0x100330e01*/
    qmemcpy((void *)(v105 + 96 * v44), v100, 0x60u); /*0x100330e20*/
    v46 = v44 + 1; /*0x100330e23*/
    v106 = v46; /*0x100330e26*/
    v7 = v89; /*0x100330e31*/
  }
  while ( v89 != v97 ); /*0x100330e45*/
  if ( !v46 ) /*0x100330e4e*/
    core::panicking::panic_bounds_check::h56740b1198b22635(0, 0, &off_101960D10, v89); /*0x100331419*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v107, v45 + 16); /*0x100330e5f*/
  v48 = v110; /*0x100330e64*/
  if ( !v106 ) /*0x100330e6d*/
    core::panicking::panic_bounds_check::h56740b1198b22635(0, 0, &off_101960D28, v47); /*0x10033142b*/
  v49 = v104; /*0x100330e73*/
  v50 = v105; /*0x100330e77*/
  v51 = *(_BYTE *)(v105 + 88); /*0x100330e7b*/
  v52 = v106; /*0x100330e7f*/
  v100[2] = v106; /*0x100330e83*/
  v100[1] = v105; /*0x100330e8a*/
  v100[0] = v104; /*0x100330e91*/
  v53 = v107; /*0x100330e98*/
  v54 = v108; /*0x100330e9c*/
  v100[3] = v107; /*0x100330ea0*/
  v100[4] = v108; /*0x100330ea7*/
  v100[5] = v109; /*0x100330eb2*/
  *(_QWORD *)(v110 + 40) = v109; /*0x100330eb9*/
  *(_QWORD *)(v48 + 32) = v54; /*0x100330ebd*/
  *(_QWORD *)(v48 + 24) = v53; /*0x100330ec1*/
  *(_QWORD *)(v48 + 16) = v52; /*0x100330ec5*/
  *(_QWORD *)(v48 + 8) = v50; /*0x100330ec9*/
  *(_QWORD *)v48 = v49; /*0x100330ecd*/
  *(_BYTE *)(v48 + 48) = v51; /*0x100330ed0*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h1f9aaecb72bffb70(&v91); /*0x100330edb*/
  return v48; /*0x1003313c8*/
}