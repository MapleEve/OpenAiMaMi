// __ZN13codexmate_lib4core5relay16codex_diagnostic32fix_config_profile_conflict_text @ 0x10050f090 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::fix_config_profile_conflict_text::h3fbaf0f7415d3b27(
        _QWORD *a1,
        _QWORD *a2)
{
  void *v3; // r14
  size_t v4; // r12
  size_t v5; // rcx
  __int64 result; // rax
  size_t v7; // rsi
  __int64 v8; // rbx
  size_t v9; // r14
  __int64 v10; // rax
  __int64 v11; // r13
  char *v12; // r15
  __int64 v13; // rax
  size_t v14; // r12
  char *v15; // r15
  __int64 v16; // rbx
  __int64 v17; // r9
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r14
  __m128i v20; // xmm2
  size_t v21; // rbx
  __int64 v22; // r14
  __int64 v23; // r9
  __int64 v24; // r12
  __int64 v25; // r14
  void *v26; // rax
  __int64 v27; // r9
  bool v28; // al
  __int64 v29; // r14
  void *v30; // rax
  int v31; // edx
  __int64 v32; // r14
  size_t v33; // rbx
  void *v34; // rsi
  __int64 v35; // r15
  size_t v36; // rsi
  char *v37; // rdi
  void *v38; // rdi
  size_t v39; // rsi
  _QWORD *v40; // rcx
  size_t v41; // rcx
  __int64 v42; // rdx
  __int64 *v43; // r9
  __int64 v44; // r14
  _QWORD *v45; // rcx
  _QWORD *v46; // rcx
  int v47[4]; // [rsp+8h] [rbp-108h] BYREF
  __int64 v48; // [rsp+18h] [rbp-F8h]
  size_t __n; // [rsp+20h] [rbp-F0h]
  _QWORD *v50; // [rsp+28h] [rbp-E8h]
  void *v51; // [rsp+30h] [rbp-E0h]
  size_t v52; // [rsp+38h] [rbp-D8h]
  __int64 v53; // [rsp+40h] [rbp-D0h] BYREF
  size_t v54; // [rsp+48h] [rbp-C8h]
  char *v55; // [rsp+50h] [rbp-C0h] BYREF
  size_t v56; // [rsp+58h] [rbp-B8h]
  __int64 v57; // [rsp+60h] [rbp-B0h]
  size_t v58; // [rsp+68h] [rbp-A8h]
  __int64 v59; // [rsp+70h] [rbp-A0h]
  __int64 v60; // [rsp+78h] [rbp-98h]
  __int64 v61; // [rsp+80h] [rbp-90h]
  __int64 v62; // [rsp+88h] [rbp-88h]
  __int64 v63; // [rsp+90h] [rbp-80h]
  __int64 v64; // [rsp+98h] [rbp-78h]
  __int64 v65; // [rsp+A0h] [rbp-70h]
  _QWORD *v66; // [rsp+A8h] [rbp-68h]
  int v67; // [rsp+B4h] [rbp-5Ch]
  void *__s2; // [rsp+B8h] [rbp-58h]
  size_t v69; // [rsp+C0h] [rbp-50h] BYREF
  __int64 v70; // [rsp+C8h] [rbp-48h]
  __int64 v71; // [rsp+D0h] [rbp-40h]
  int v72; // [rsp+DCh] [rbp-34h]
  size_t v73; // [rsp+E0h] [rbp-30h]

  v3 = (void *)a2[7]; /*0x10050f0aa*/
  v4 = a2[8]; /*0x10050f0ae*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v53, v3, v4); /*0x10050f0bf*/
  v5 = v54; /*0x10050f0cb*/
  result = -v53; /*0x10050f0d5*/
  if ( __OFSUB__(-v53, 1) ) /*0x10050f0d5*/
  {
    *a1 = 2; /*0x10050f0da*/
    a1[1] = v5; /*0x10050f0e1*/
    return result; /*0x10050f0e1*/
  }
  v7 = (size_t)v55; /*0x10050f0f7*/
  __s2 = (void *)v54; /*0x10050f101*/
  if ( (__int64)v55 < 0 ) /*0x10050f105*/
  {
    v8 = 0; /*0x10050f107*/
    goto LABEL_6; /*0x10050f107*/
  }
  v50 = a2; /*0x10050f116*/
  v52 = v4; /*0x10050f11d*/
  v51 = v3; /*0x10050f124*/
  v66 = a1; /*0x10050f12b*/
  v65 = v53; /*0x10050f12f*/
  if ( v55 ) /*0x10050f133*/
  {
    v9 = (size_t)v55; /*0x10050f135*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v53, v55); /*0x10050f138*/
    v8 = 1; /*0x10050f13d*/
    v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x10050f14a*/
    v7 = v9; /*0x10050f14f*/
    if ( !v10 ) /*0x10050f155*/
LABEL_6:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x10050f109*/
    v11 = v10; /*0x10050f157*/
  }
  else
  {
    v11 = 1; /*0x10050f15c*/
  }
  v69 = v7; /*0x10050f162*/
  v70 = v11; /*0x10050f166*/
  v71 = 0; /*0x10050f16a*/
  v53 = 0; /*0x10050f172*/
  v54 = v7; /*0x10050f17d*/
  v55 = (char *)__s2; /*0x10050f188*/
  v56 = v7; /*0x10050f18f*/
  v57 = 0; /*0x10050f196*/
  __n = v7; /*0x10050f1a1*/
  v58 = v7; /*0x10050f1a8*/
  v59 = 0xA0000000ALL; /*0x10050f1b9*/
  LOBYTE(v60) = 1; /*0x10050f1c0*/
  LOWORD(v61) = 0; /*0x10050f1c7*/
  v73 = 0; /*0x10050f1d0*/
  v72 = 0; /*0x10050f1d8*/
  v67 = 0; /*0x10050f1df*/
  while ( 1 ) /*0x10050f210*/
  {
    v12 = v55; /*0x10050f210*/
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x10050f225*/
      v47,
      &v55);
    if ( v47[0] == 1 ) /*0x10050f231*/
    {
      v13 = v53; /*0x10050f23a*/
      v53 = v48; /*0x10050f241*/
      v14 = v48 - v13; /*0x10050f248*/
      v15 = &v12[v13]; /*0x10050f24b*/
      if ( v48 != v13 ) /*0x10050f251*/
        goto LABEL_19; /*0x10050f251*/
      goto LABEL_25; /*0x10050f251*/
    }
    if ( BYTE1(v61) ) /*0x10050f267*/
      break; /*0x10050f267*/
    BYTE1(v61) = 1; /*0x10050f26d*/
    v14 = v54 - v53; /*0x10050f282*/
    if ( ((unsigned __int8)v61 | (v54 != v53)) != 1 ) /*0x10050f290*/
      break; /*0x10050f290*/
    v15 = &v55[v53]; /*0x10050f296*/
    if ( v14 ) /*0x10050f2a0*/
    {
LABEL_19:
      if ( v15[v14 - 1] == 10 ) /*0x10050f2a8*/
      {
        if ( v14 == 1 ) /*0x10050f2b0*/
        {
          v14 = 0; /*0x10050f2c0*/
        }
        else if ( v15[v14 - 2] == 13 ) /*0x10050f2b8*/
        {
          v14 -= 2LL; /*0x10050f2ba*/
        }
        else
        {
          --v14; /*0x10050f2c5*/
        }
      }
    }
LABEL_25:
    v16 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v15, v14); /*0x10050f2db*/
    v19 = v18; /*0x10050f2de*/
    switch ( v18 ) /*0x10050f2fd*/
    {
      case 0x1EuLL: /*0x10050f2fd*/
        v20 = _mm_or_si128( /*0x10050f320*/
                _mm_xor_si128(
                  _mm_loadu_si128((const __m128i *)((char *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_98 + 14)),
                  _mm_loadu_si128((const __m128i *)(v16 + 14))),
                _mm_xor_si128(
                  _mm_loadu_si128((const __m128i *)v16),
                  _mm_loadu_si128((const __m128i *)&anon_4fd0d0f33f5bcd90fdaba20400e954f2_98)));
        if ( !_mm_testz_si128(v20, v20) ) /*0x10050f329*/
          goto LABEL_38; /*0x10050f329*/
        goto LABEL_33; /*0x10050f329*/
      case 0x24uLL: /*0x10050f2fd*/
        if ( !memcmp((const void *)v16, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_99, 0x24u) ) /*0x10050f37f*/
          goto LABEL_33; /*0x10050f386*/
        goto LABEL_38; /*0x10050f386*/
      case 0x27uLL: /*0x10050f2fd*/
        if ( memcmp((const void *)v16, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_100, 0x27u) ) /*0x10050f340*/
          goto LABEL_38; /*0x10050f347*/
LABEL_33:
        v21 = v69; /*0x10050f388*/
        if ( v14 > v69 - v73 ) /*0x10050f396*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10050f65f*/
            &v69,
            v73,
            v14,
            1,
            1,
            v17);
          v73 = v71; /*0x10050f668*/
          v21 = v69; /*0x10050f66c*/
          v11 = v70; /*0x10050f670*/
        }
        v22 = v73; /*0x10050f39c*/
        memcpy((void *)(v73 + v11), v15, v14); /*0x10050f3ac*/
        v24 = v22 + v14; /*0x10050f3b1*/
        v71 = v24; /*0x10050f3b4*/
        if ( v21 == v24 ) /*0x10050f3bb*/
          goto LABEL_60; /*0x10050f3bb*/
        goto LABEL_56; /*0x10050f3bb*/
      case 0x37uLL: /*0x10050f2fd*/
        if ( memcmp((const void *)v16, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_101, 0x37u) ) /*0x10050f3f1*/
          goto LABEL_38; /*0x10050f3f8*/
        goto LABEL_46; /*0x10050f3f8*/
      case 0x3CuLL: /*0x10050f2fd*/
        if ( !memcmp((const void *)v16, &anon_4fd0d0f33f5bcd90fdaba20400e954f2_102, 0x3Cu) ) /*0x10050f490*/
          goto LABEL_46; /*0x10050f497*/
        goto LABEL_38; /*0x10050f497*/
      case 0x40uLL: /*0x10050f2fd*/
        if ( memcmp((const void *)v16, "# >>> aimami-relay codex-router top start (DO NOT EDIT MANUALLY)", 0x40u) ) /*0x10050f35e*/
          goto LABEL_38; /*0x10050f365*/
LABEL_46:
        v21 = v69; /*0x10050f49d*/
        if ( v14 > v69 - v73 ) /*0x10050f4ab*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10050f62f*/
            &v69,
            v73,
            v14,
            1,
            1,
            v17);
          v73 = v71; /*0x10050f638*/
          v21 = v69; /*0x10050f63c*/
          v11 = v70; /*0x10050f640*/
        }
        v29 = v73; /*0x10050f4b1*/
        v30 = memcpy((void *)(v73 + v11), v15, v14); /*0x10050f4c1*/
        v24 = v29 + v14; /*0x10050f4c6*/
        v71 = v24; /*0x10050f4c9*/
        LOBYTE(v30) = 1; /*0x10050f4cd*/
        v72 = (int)v30; /*0x10050f4cf*/
        if ( v21 == v24 ) /*0x10050f4d5*/
          goto LABEL_42; /*0x10050f4d5*/
        goto LABEL_57; /*0x10050f4d5*/
      default:
LABEL_38:
        if ( (v72 & 1) != 0 ) /*0x10050f404*/
        {
          v21 = v69; /*0x10050f406*/
          if ( v14 > v69 - v73 ) /*0x10050f414*/
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10050f5a7*/
              &v69,
              v73,
              v14,
              1,
              1,
              v17);
            v73 = v71; /*0x10050f5b0*/
            v21 = v69; /*0x10050f5b4*/
            v11 = v70; /*0x10050f5b8*/
          }
          v25 = v73; /*0x10050f41a*/
          v26 = memcpy((void *)(v73 + v11), v15, v14); /*0x10050f42a*/
          v24 = v25 + v14; /*0x10050f42f*/
          v71 = v24; /*0x10050f432*/
          LOBYTE(v26) = 1; /*0x10050f436*/
          v72 = (int)v26; /*0x10050f438*/
          if ( v21 == v24 ) /*0x10050f43e*/
          {
LABEL_42:
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10050f444*/
              &v69,
              v21,
              1,
              1,
              1,
              v27);
            goto LABEL_58; /*0x10050f460*/
          }
          goto LABEL_57; /*0x10050f43e*/
        }
        if ( v19 ) /*0x10050f473*/
          v28 = *(_BYTE *)v16 == 91; /*0x10050f47c*/
        else
          v28 = 0; /*0x10050f4f9*/
        v31 = v67; /*0x10050f501*/
        LOBYTE(v31) = v28 | (v19 != 0) & v67; /*0x10050f506*/
        v67 = v31; /*0x10050f508*/
        if ( (_BYTE)v31 != 1 /*0x10050f516*/
          && codexmate_lib::core::relay::codex_diagnostic::is_profile_assignment::hb6d548fc73d167bb(v16, v19) )
        {
          v67 = 0; /*0x10050f1e8*/
          v72 = 0; /*0x10050f1ef*/
          if ( BYTE1(v61) ) /*0x10050f1fd*/
            goto LABEL_61; /*0x10050f1fd*/
          continue; /*0x10050f1fd*/
        }
        v21 = v69; /*0x10050f523*/
        if ( v14 > v69 - v73 ) /*0x10050f531*/
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x10050f5d7*/
            &v69,
            v73,
            v14,
            1,
            1,
            v17);
          v73 = v71; /*0x10050f5e0*/
          v21 = v69; /*0x10050f5e4*/
          v11 = v70; /*0x10050f5e8*/
        }
        v32 = v73; /*0x10050f537*/
        memcpy((void *)(v73 + v11), v15, v14); /*0x10050f547*/
        v24 = v32 + v14; /*0x10050f54c*/
        v71 = v24; /*0x10050f54f*/
        if ( v21 != v24 ) /*0x10050f556*/
        {
LABEL_56:
          v72 = 0; /*0x10050f55c*/
LABEL_57:
          v21 = v24; /*0x10050f563*/
          goto LABEL_58; /*0x10050f563*/
        }
LABEL_60:
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v69, v21, 1, 1, 1, v23); /*0x10050f5f1*/
        v72 = 0; /*0x10050f60d*/
LABEL_58:
        v11 = v70; /*0x10050f566*/
        *(_BYTE *)(v70 + v71) = 10; /*0x10050f56e*/
        v71 = v21 + 1; /*0x10050f577*/
        v73 = v21 + 1; /*0x10050f57b*/
        if ( BYTE1(v61) ) /*0x10050f586*/
          goto LABEL_61; /*0x10050f586*/
        break; /*0x10050f586*/
    }
  }
LABEL_61:
  v33 = v69; /*0x10050f679*/
  if ( v73 == __n ) /*0x10050f688*/
  {
    v34 = __s2; /*0x10050f68d*/
    if ( !memcmp((const void *)v11, __s2, __n) ) /*0x10050f698*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, v34); /*0x10050f7d5*/
      v44 = 39; /*0x10050f7da*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(39, 1); /*0x10050f7ea*/
      v35 = v65; /*0x10050f7f2*/
      if ( result ) /*0x10050f7f6*/
      {
        *(_QWORD *)(result + 31) = 0x8690E785B8E681A6LL; /*0x10050f806*/
        *(_QWORD *)(result + 24) = 0xA6E8809CE920656CLL; /*0x10050f814*/
        *(_QWORD *)(result + 16) = 0x69666F72702082B1LL; /*0x10050f822*/
        *(_QWORD *)(result + 8) = 0xE5B6A1E9849AE781LL; /*0x10050f830*/
        *(_QWORD *)result = 0xAAE7B286E5A097E6LL; /*0x10050f83e*/
        v45 = v66; /*0x10050f841*/
        v66[1] = 39; /*0x10050f845*/
        v45[2] = result; /*0x10050f84d*/
        v45[3] = 39; /*0x10050f851*/
        *v45 = 11; /*0x10050f859*/
        if ( !v33 ) /*0x10050f863*/
          goto LABEL_71; /*0x10050f863*/
        goto LABEL_70; /*0x10050f863*/
      }
LABEL_79:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v44); /*0x10050f911*/
    }
  }
  v35 = v65; /*0x10050f6ac*/
  codexmate_lib::core::relay::codex_diagnostic::backup_config_before_fix::hbfd176d416815de7(&v53, v50); /*0x10050f6b0*/
  result = v53; /*0x10050f6b5*/
  v36 = v54; /*0x10050f6bc*/
  v37 = v55; /*0x10050f6c3*/
  if ( v53 != 11 ) /*0x10050f6ce*/
  {
    v41 = v56; /*0x10050f729*/
    v42 = v57; /*0x10050f730*/
    v43 = v66; /*0x10050f73b*/
    v66[11] = v64; /*0x10050f73f*/
    v43[10] = v63; /*0x10050f747*/
    v43[9] = v62; /*0x10050f752*/
    v43[8] = v61; /*0x10050f75d*/
    v43[7] = v60; /*0x10050f768*/
    v43[6] = v59; /*0x10050f773*/
    v43[5] = v58; /*0x10050f77e*/
    v43[4] = v42; /*0x10050f782*/
    v43[1] = v36; /*0x10050f786*/
    v43[2] = (__int64)v37; /*0x10050f78a*/
    v43[3] = v41; /*0x10050f78e*/
    *v43 = result; /*0x10050f792*/
    if ( v33 ) /*0x10050f798*/
      goto LABEL_70; /*0x10050f798*/
    goto LABEL_71; /*0x10050f798*/
  }
  if ( 2 * v54 ) /*0x10050f6d0*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, v54, 1); /*0x10050f6e2*/
  v38 = v51; /*0x10050f6e7*/
  v39 = v52; /*0x10050f6ee*/
  result = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(v51, v52, v11, v73, 1); /*0x10050f702*/
  if ( !result ) /*0x10050f70a*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v38, v39); /*0x10050f86e*/
    v44 = 47; /*0x10050f873*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(47, 1); /*0x10050f883*/
    if ( result ) /*0x10050f88b*/
    {
      *(_QWORD *)(result + 39) = 0x656C69666F727020LL; /*0x10050f89b*/
      *(_QWORD *)(result + 32) = 0x2082B1E5B6A1E984LL; /*0x10050f8a9*/
      *(_QWORD *)(result + 24) = 0x9AE781AAE7B286E5LL; /*0x10050f8b7*/
      *(_QWORD *)(result + 16) = 0xA499E9BBA7E7B6B9LL; /*0x10050f8c5*/
      *(_QWORD *)(result + 8) = 0xE5AEBDE78D85E9BDLL; /*0x10050f8d3*/
      *(_QWORD *)result = 0xBBE487A4E5B2B7E5LL; /*0x10050f8e1*/
      v46 = v66; /*0x10050f8e4*/
      v66[1] = 47; /*0x10050f8e8*/
      v46[2] = result; /*0x10050f8f0*/
      v46[3] = 47; /*0x10050f8f4*/
      *v46 = 11; /*0x10050f8fc*/
      if ( !v33 ) /*0x10050f906*/
        goto LABEL_71; /*0x10050f906*/
      goto LABEL_70; /*0x10050f906*/
    }
    goto LABEL_79; /*0x10050f88b*/
  }
  v40 = v66; /*0x10050f710*/
  *v66 = 2; /*0x10050f714*/
  v40[1] = result; /*0x10050f71b*/
  if ( !v33 ) /*0x10050f722*/
    goto LABEL_71; /*0x10050f722*/
LABEL_70:
  result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v33, 1); /*0x10050f79a*/
LABEL_71:
  if ( v35 ) /*0x10050f7ad*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v35, 1); /*0x10050f7d0*/
  return result; /*0x10050f0e5*/
}