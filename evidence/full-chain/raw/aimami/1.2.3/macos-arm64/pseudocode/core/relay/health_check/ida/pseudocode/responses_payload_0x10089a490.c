// __ZN13codexmate_lib4core5relay12health_check17responses_payload @ 0x10089a490 | 基线 same-set
__int64 *__fastcall codexmate_lib::core::relay::health_check::responses_payload::hb04a1c5b9f225326(
        __int64 *a1,
        char *a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  char *v6; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdi
  __m256i *v13; // rsi
  __int64 v14; // r15
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  size_t v18; // r12
  __int64 v19; // rbx
  const void *v20; // r13
  __int64 v21; // rax
  __int64 v22; // rdi
  char *v23; // r15
  __m256i *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r13
  void *v27; // rax
  void *v28; // r15
  __int64 v29; // rdi
  void *v30; // rsi
  char *v31; // r15
  __int64 v32; // rbx
  char *v33; // rdi
  __int64 v34; // rax
  __int64 v35; // r15
  __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // rax
  __m256i *v39; // rdi
  __int64 v40; // rax
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rdx
  __m256i *v44; // rsi
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // r14
  __int64 v48; // r13
  _DWORD *v49; // rax
  _DWORD *v50; // rax
  __m256i *v51; // rdi
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rdx
  __int64 v55; // rdx
  __m256i *v56; // rsi
  _DWORD *v57; // rax
  _WORD *v58; // rax
  __int64 v59; // rax
  __int64 v60; // rcx
  __int64 v61; // rdx
  __int64 v62; // rdx
  __m256i *v63; // rdi
  __int64 v64; // rax
  __int64 v65; // rcx
  __int64 v66; // rdx
  __int64 v67; // rdx
  __m256i *v68; // rsi
  __int64 v69; // rax
  __m256i *v70; // rdi
  __int64 v71; // rax
  __int64 v72; // rcx
  __int64 v73; // rdx
  __int64 v74; // rdx
  __m256i *v75; // rsi
  char *v76; // r15
  __int64 v77; // rax
  size_t v78; // r12
  _WORD *v79; // rax
  _WORD *v80; // rbx
  __int64 v81; // rax
  __int64 v82; // rcx
  __int64 v83; // rdx
  __int64 v84; // rdx
  __m256i *v85; // r14
  __int64 *v86; // rdx
  __int64 v87; // rax
  _QWORD v89[3]; // [rsp+18h] [rbp-198h] BYREF
  _QWORD v90[2]; // [rsp+30h] [rbp-180h] BYREF
  __int64 v91; // [rsp+40h] [rbp-170h]
  __int64 *v92; // [rsp+48h] [rbp-168h]
  __int64 v93; // [rsp+50h] [rbp-160h] BYREF
  _DWORD *v94; // [rsp+58h] [rbp-158h]
  __int64 v95; // [rsp+60h] [rbp-150h]
  __int128 v96; // [rsp+68h] [rbp-148h] BYREF
  __int64 v97; // [rsp+78h] [rbp-138h]
  void *__src; // [rsp+80h] [rbp-130h]
  __int64 v99; // [rsp+88h] [rbp-128h] BYREF
  __int64 v100; // [rsp+90h] [rbp-120h]
  __int64 v101; // [rsp+98h] [rbp-118h]
  __int64 v102; // [rsp+A0h] [rbp-110h]
  __int64 v103; // [rsp+A8h] [rbp-108h] BYREF
  __int64 v104; // [rsp+B0h] [rbp-100h]
  __int64 v105; // [rsp+B8h] [rbp-F8h]
  __int64 v106; // [rsp+C0h] [rbp-F0h]
  void *v107; // [rsp+C8h] [rbp-E8h]
  size_t __n; // [rsp+D0h] [rbp-E0h]
  __m256i v109; // [rsp+D8h] [rbp-D8h] BYREF
  __int64 v110; // [rsp+F8h] [rbp-B8h]
  __int64 v111; // [rsp+100h] [rbp-B0h]
  __int64 v112; // [rsp+108h] [rbp-A8h]
  __int64 v113; // [rsp+110h] [rbp-A0h] BYREF
  __int64 v114; // [rsp+118h] [rbp-98h]
  __int64 v115; // [rsp+120h] [rbp-90h]
  __int64 v116; // [rsp+128h] [rbp-88h]
  __m256i v117; // [rsp+130h] [rbp-80h] BYREF
  __int64 v118; // [rsp+150h] [rbp-60h]
  __int64 v119; // [rsp+158h] [rbp-58h]
  __int64 v120; // [rsp+160h] [rbp-50h]
  __int64 v121; // [rsp+168h] [rbp-48h]
  __int64 v122; // [rsp+170h] [rbp-40h]
  _WORD *v123; // [rsp+178h] [rbp-38h]
  __int64 v124; // [rsp+180h] [rbp-30h]

  v6 = (char *)a3; /*0x10089a4a4*/
  v92 = a1; /*0x10089a4aa*/
  v117.i64[0] = (__int64)a2; /*0x10089a4b1*/
  *(__int128 *)((char *)v117.i128 + 8) = (unsigned __int64)a3; /*0x10089a4b5*/
  v117.i64[3] = a3; /*0x10089a4c1*/
  LOBYTE(v119) = 1; /*0x10089a4c5*/
  v118 = 0x4000000040LL; /*0x10089a4d3*/
  _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x10089a4e2*/
    &v109,
    &v117,
    a3,
    a4,
    a5,
    a6);
  if ( !v109.i8[0] ) /*0x10089a4ee*/
  {
    v117.i64[0] = (__int64)a2; /*0x10089a4f0*/
    *(__int128 *)((char *)v117.i128 + 8) = (unsigned __int64)v6; /*0x10089a4f4*/
    v117.i64[3] = (__int64)v6; /*0x10089a500*/
    LOBYTE(v119) = 1; /*0x10089a504*/
    v118 = 0x2300000023LL; /*0x10089a512*/
    v12 = (__int64)&v109; /*0x10089a516*/
    v13 = &v117; /*0x10089a51d*/
    _$LT$core..str..pattern..CharSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::hb964a2350606f792( /*0x10089a521*/
      &v109,
      &v117,
      v8,
      v9,
      v10,
      v11);
    if ( v109.i32[0] != 1 ) /*0x10089a52d*/
      goto LABEL_29; /*0x10089a52d*/
  }
  v14 = v109.i64[1]; /*0x10089a533*/
  if ( v109.i64[1] ) /*0x10089a53d*/
  {
    if ( v109.i64[1] >= (unsigned __int64)v6 ) /*0x10089a542*/
    {
      if ( (char *)v109.i64[1] != v6 ) /*0x10089a562*/
LABEL_6:
        core::str::slice_error_fail::h480e51fbd8b15eba(a2, v6, 0, v109.i64[1], &off_10196D148); /*0x10089a54b*/
    }
    else if ( a2[v109.i64[1]] <= -65 ) /*0x10089a549*/
    {
      goto LABEL_6; /*0x10089a549*/
    }
  }
  v15 = v109.i64[1]; /*0x10089a567*/
  v16 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, v109.i64[1]); /*0x10089a56a*/
  v18 = v17; /*0x10089a56f*/
  if ( v17 < 0 ) /*0x10089a575*/
  {
    v19 = 0; /*0x10089a577*/
    goto LABEL_10; /*0x10089a577*/
  }
  v20 = (const void *)v16; /*0x10089a584*/
  if ( v17 ) /*0x10089a587*/
  {
    v107 = v6; /*0x10089a589*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, v15); /*0x10089a590*/
    v19 = 1; /*0x10089a595*/
    v21 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v18, 1); /*0x10089a5a2*/
    if ( !v21 ) /*0x10089a5aa*/
LABEL_10:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v19, v18); /*0x10089a579*/
    v22 = v21; /*0x10089a5ac*/
    v6 = (char *)v107; /*0x10089a5af*/
  }
  else
  {
    v22 = 1; /*0x10089a5b8*/
  }
  v107 = (void *)v22; /*0x10089a5bd*/
  memcpy((void *)v22, v20, v18); /*0x10089a5ca*/
  v23 = (char *)(v14 + 1); /*0x10089a5cf*/
  if ( v23 ) /*0x10089a5d2*/
  {
    if ( v6 <= v23 ) /*0x10089a5d7*/
    {
      if ( v6 != v23 ) /*0x10089a5fd*/
LABEL_18:
        core::str::slice_error_fail::h480e51fbd8b15eba(a2, v6, v23, v6, &off_10196D160); /*0x10089a5e0*/
    }
    else if ( v23[(_QWORD)a2] <= -65 ) /*0x10089a5de*/
    {
      goto LABEL_18; /*0x10089a5de*/
    }
  }
  v24 = (__m256i *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(&v23[(_QWORD)a2], v6 - v23); /*0x10089a60b*/
  if ( v25 < 0 ) /*0x10089a613*/
  {
    v26 = 0; /*0x10089a615*/
    goto LABEL_22; /*0x10089a615*/
  }
  if ( !v25 ) /*0x10089a62b*/
  {
    v12 = 1; /*0x10089a690*/
    v13 = v24; /*0x10089a695*/
    if ( v18 ) /*0x10089a6a0*/
    {
      v12 = (__int64)v107; /*0x10089a6a7*/
      v13 = (__m256i *)v18; /*0x10089a6ae*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v107, v18, 1); /*0x10089a6b1*/
    }
LABEL_29:
    if ( (__int64)v6 < 0 ) /*0x10089a6b9*/
    {
      v31 = v6; /*0x10089a6bb*/
      v32 = 0; /*0x10089a6be*/
      goto LABEL_31; /*0x10089a6be*/
    }
    if ( v6 ) /*0x10089a6cb*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v12, v13); /*0x10089a6cd*/
      v33 = v6; /*0x10089a6d2*/
      v32 = 1; /*0x10089a6d5*/
      v31 = v33; /*0x10089a6df*/
      v34 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v33, 1); /*0x10089a6e2*/
      if ( !v34 ) /*0x10089a6ea*/
LABEL_31:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v32, v31); /*0x10089a6c0*/
      v29 = v34; /*0x10089a6ec*/
      v6 = v31; /*0x10089a6ef*/
    }
    else
    {
      v29 = 1; /*0x10089a6f4*/
    }
    __n = 0x8000000000000000LL; /*0x10089a703*/
    v107 = (void *)v29; /*0x10089a70a*/
    v30 = a2; /*0x10089a711*/
    memcpy((void *)v29, a2, (size_t)v6); /*0x10089a717*/
    goto LABEL_37; /*0x10089a717*/
  }
  __src = v24; /*0x10089a62d*/
  __n = v25; /*0x10089a634*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v23[(_QWORD)a2], v6 - v23); /*0x10089a63b*/
  v26 = 1; /*0x10089a640*/
  v27 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x10089a652*/
  v25 = __n; /*0x10089a657*/
  if ( !v27 ) /*0x10089a661*/
LABEL_22:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v26, v25); /*0x10089a618*/
  v28 = v27; /*0x10089a663*/
  v29 = (__int64)v27; /*0x10089a666*/
  v30 = __src; /*0x10089a669*/
  memcpy(v27, __src, __n); /*0x10089a673*/
  if ( !v18 ) /*0x10089a67b*/
  {
    v12 = (__int64)v28; /*0x10089b39c*/
    v13 = (__m256i *)__n; /*0x10089b39f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, __n, 1); /*0x10089b3a2*/
    goto LABEL_29; /*0x10089b3b0*/
  }
  __src = v28; /*0x10089a681*/
  v6 = (char *)v18; /*0x10089a688*/
LABEL_37:
  v90[0] = 0; /*0x10089a71c*/
  v91 = 0; /*0x10089a727*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v29, v30); /*0x10089a732*/
  v35 = 5; /*0x10089a737*/
  v36 = 1; /*0x10089a73d*/
  v37 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x10089a74d*/
  if ( !v37 ) /*0x10089a755*/
    goto LABEL_81; /*0x10089a755*/
  *(_BYTE *)(v37 + 4) = 108; /*0x10089a75b*/
  *(_DWORD *)v37 = 1701080941; /*0x10089a75f*/
  v103 = 5; /*0x10089a765*/
  v104 = v37; /*0x10089a770*/
  v105 = 5; /*0x10089a777*/
  if ( v6 ) /*0x10089a785*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x10089a78a*/
    v38 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x10089a797*/
    if ( !v38 ) /*0x10089a79f*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v6); /*0x10089b411*/
    v36 = v38; /*0x10089a7a5*/
  }
  memcpy((void *)v36, v107, (size_t)v6); /*0x10089a7b5*/
  LOBYTE(v121) = 3; /*0x10089a7ba*/
  v122 = (__int64)v6; /*0x10089a7be*/
  v123 = (_WORD *)v36; /*0x10089a7c2*/
  v124 = (__int64)v6; /*0x10089a7c6*/
  v39 = &v109; /*0x10089a7ca*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v109, v90, &v103); /*0x10089a7df*/
  if ( v109.i64[0] == 0x8000000000000000LL ) /*0x10089a7f5*/
  {
    v40 = v109.i64[1]; /*0x10089a7fb*/
    v41 = 32 * v109.i64[3]; /*0x10089a809*/
    v116 = *(_QWORD *)(v109.i64[1] + 32 * v109.i64[3] + 24); /*0x10089a812*/
    v115 = *(_QWORD *)(v109.i64[1] + 32 * v109.i64[3] + 16); /*0x10089a81e*/
    v42 = *(_QWORD *)(v109.i64[1] + 32 * v109.i64[3]); /*0x10089a825*/
    v114 = *(_QWORD *)(v109.i64[1] + 32 * v109.i64[3] + 8); /*0x10089a82e*/
    v113 = v42; /*0x10089a835*/
    *(_QWORD *)(v109.i64[1] + v41 + 24) = v124; /*0x10089a840*/
    *(_QWORD *)(v40 + v41 + 16) = v123; /*0x10089a849*/
    v43 = v121; /*0x10089a84e*/
    v44 = (__m256i *)v122; /*0x10089a852*/
    *(_QWORD *)(v40 + v41 + 8) = v122; /*0x10089a856*/
    *(_QWORD *)(v40 + v41) = v43; /*0x10089a85b*/
    if ( (_BYTE)v113 != 6 ) /*0x10089a866*/
    {
      v39 = (__m256i *)&v113; /*0x10089a86c*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v113); /*0x10089a873*/
    }
  }
  else
  {
    v120 = v112; /*0x10089a884*/
    v119 = v111; /*0x10089a88f*/
    v118 = v110; /*0x10089a89a*/
    v117 = v109; /*0x10089a8a5*/
    v102 = v124; /*0x10089a8ce*/
    v101 = (__int64)v123; /*0x10089a8d9*/
    v100 = v122; /*0x10089a8e8*/
    v99 = v121; /*0x10089a8ef*/
    v39 = (__m256i *)&v113; /*0x10089a8f6*/
    v44 = &v117; /*0x10089a8fd*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10089a908*/
      &v113,
      &v117,
      &v99);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v39, v44); /*0x10089a90d*/
  v35 = 5; /*0x10089a912*/
  v45 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x10089a922*/
  if ( !v45 ) /*0x10089a92a*/
    goto LABEL_81; /*0x10089a92a*/
  *(_BYTE *)(v45 + 4) = 116; /*0x10089a933*/
  *(_DWORD *)v45 = 1970302569; /*0x10089a937*/
  v89[0] = 5; /*0x10089a93d*/
  v89[1] = v45; /*0x10089a948*/
  v89[2] = 5; /*0x10089a94f*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x10089a95a*/
  v46 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8); /*0x10089a969*/
  if ( !v46 ) /*0x10089a971*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32); /*0x10089b3bf*/
  v47 = v46; /*0x10089a977*/
  *(_QWORD *)&v96 = 0; /*0x10089a97a*/
  v97 = 0; /*0x10089a985*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 8); /*0x10089a990*/
  v48 = 4; /*0x10089a995*/
  v49 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x10089a9a5*/
  if ( !v49 ) /*0x10089a9ad*/
    goto LABEL_82; /*0x10089a9ad*/
  *v49 = 1701605234; /*0x10089a9b6*/
  v93 = 4; /*0x10089a9bc*/
  v94 = v49; /*0x10089a9c7*/
  v95 = 4; /*0x10089a9ce*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x10089a9d9*/
  v50 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x10089a9e8*/
  if ( !v50 ) /*0x10089a9f0*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x10089b3ee*/
  *v50 = 1919251317; /*0x10089a9f6*/
  LOBYTE(v121) = 3; /*0x10089a9fc*/
  v122 = 4; /*0x10089aa00*/
  v123 = v50; /*0x10089aa08*/
  v124 = 4; /*0x10089aa0c*/
  v51 = &v109; /*0x10089aa14*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v109, &v96, &v93); /*0x10089aa29*/
  if ( v109.i64[0] == 0x8000000000000000LL ) /*0x10089aa3f*/
  {
    v52 = v109.i64[1]; /*0x10089aa45*/
    v53 = 32 * v109.i64[3]; /*0x10089aa53*/
    v116 = *(_QWORD *)(v109.i64[1] + 32 * v109.i64[3] + 24); /*0x10089aa5c*/
    v115 = *(_QWORD *)(v109.i64[1] + 32 * v109.i64[3] + 16); /*0x10089aa68*/
    v54 = *(_QWORD *)(v109.i64[1] + 32 * v109.i64[3]); /*0x10089aa6f*/
    v114 = *(_QWORD *)(v109.i64[1] + 32 * v109.i64[3] + 8); /*0x10089aa78*/
    v113 = v54; /*0x10089aa7f*/
    *(_QWORD *)(v109.i64[1] + v53 + 24) = v124; /*0x10089aa8a*/
    *(_QWORD *)(v52 + v53 + 16) = v123; /*0x10089aa93*/
    v55 = v121; /*0x10089aa98*/
    v56 = (__m256i *)v122; /*0x10089aa9c*/
    *(_QWORD *)(v52 + v53 + 8) = v122; /*0x10089aaa0*/
    *(_QWORD *)(v52 + v53) = v55; /*0x10089aaa5*/
    if ( (_BYTE)v113 != 6 ) /*0x10089aab0*/
    {
      v51 = (__m256i *)&v113; /*0x10089aab6*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v113); /*0x10089aabd*/
    }
  }
  else
  {
    v120 = v112; /*0x10089aace*/
    v119 = v111; /*0x10089aad9*/
    v118 = v110; /*0x10089aae4*/
    v117 = v109; /*0x10089aaef*/
    v102 = v124; /*0x10089ab18*/
    v101 = (__int64)v123; /*0x10089ab23*/
    v100 = v122; /*0x10089ab32*/
    v99 = v121; /*0x10089ab39*/
    v51 = (__m256i *)&v113; /*0x10089ab40*/
    v56 = &v117; /*0x10089ab47*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10089ab52*/
      &v113,
      &v117,
      &v99);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v51, v56); /*0x10089ab57*/
  v48 = 7; /*0x10089ab5c*/
  v57 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x10089ab6c*/
  if ( !v57 ) /*0x10089ab74*/
LABEL_82:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v48); /*0x10089b3dd*/
  *(_DWORD *)((char *)v57 + 3) = 1953391988; /*0x10089ab7d*/
  *v57 = 1953394531; /*0x10089ab84*/
  v93 = 7; /*0x10089ab8a*/
  v94 = v57; /*0x10089ab95*/
  v95 = 7; /*0x10089ab9c*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1); /*0x10089aba7*/
  v58 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x10089abb6*/
  if ( !v58 ) /*0x10089abbe*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x10089b3ff*/
  *v58 = 26984; /*0x10089abc4*/
  LOBYTE(v121) = 3; /*0x10089abc9*/
  v122 = 2; /*0x10089abcd*/
  v123 = v58; /*0x10089abd5*/
  v124 = 2; /*0x10089abd9*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v109, &v96, &v93); /*0x10089abf6*/
  if ( v109.i64[0] == 0x8000000000000000LL ) /*0x10089ac0c*/
  {
    v59 = v109.i64[1]; /*0x10089ac12*/
    v60 = 32 * v109.i64[3]; /*0x10089ac20*/
    v116 = *(_QWORD *)(v109.i64[1] + 32 * v109.i64[3] + 24); /*0x10089ac29*/
    v115 = *(_QWORD *)(v109.i64[1] + 32 * v109.i64[3] + 16); /*0x10089ac35*/
    v61 = *(_QWORD *)(v109.i64[1] + 32 * v109.i64[3]); /*0x10089ac3c*/
    v114 = *(_QWORD *)(v109.i64[1] + 32 * v109.i64[3] + 8); /*0x10089ac45*/
    v113 = v61; /*0x10089ac4c*/
    *(_QWORD *)(v109.i64[1] + v60 + 24) = v124; /*0x10089ac57*/
    *(_QWORD *)(v59 + v60 + 16) = v123; /*0x10089ac60*/
    v62 = v121; /*0x10089ac65*/
    *(_QWORD *)(v59 + v60 + 8) = v122; /*0x10089ac6d*/
    *(_QWORD *)(v59 + v60) = v62; /*0x10089ac72*/
    if ( (_BYTE)v113 != 6 ) /*0x10089ac7d*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v113); /*0x10089ac8a*/
  }
  else
  {
    v120 = v112; /*0x10089ac9b*/
    v119 = v111; /*0x10089aca6*/
    v118 = v110; /*0x10089acb1*/
    v117 = v109; /*0x10089acbc*/
    v102 = v124; /*0x10089ace5*/
    v101 = (__int64)v123; /*0x10089acf0*/
    v100 = v122; /*0x10089acff*/
    v99 = v121; /*0x10089ad06*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10089ad1f*/
      &v113,
      &v117,
      &v99);
  }
  *(__int128 *)((char *)v117.i128 + 7) = v96; /*0x10089ad39*/
  *(__int64 *)((char *)&v117.i64[2] + 7) = v97; /*0x10089ad41*/
  *(_BYTE *)v47 = 5; /*0x10089ad45*/
  *(_QWORD *)(v47 + 24) = *(__int64 *)((char *)&v117.i64[2] + 7); /*0x10089ad4d*/
  *(_QWORD *)(v47 + 17) = v117.i64[2]; /*0x10089ad55*/
  *(_OWORD *)(v47 + 1) = v117.i128[0]; /*0x10089ad65*/
  v104 = 1; /*0x10089ad69*/
  v105 = v47; /*0x10089ad74*/
  v106 = 1; /*0x10089ad7b*/
  LOBYTE(v103) = 4; /*0x10089ad86*/
  v63 = &v109; /*0x10089ad8d*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v109, v90, v89); /*0x10089ada2*/
  if ( v109.i64[0] == 0x8000000000000000LL ) /*0x10089adb8*/
  {
    v64 = v109.i64[1]; /*0x10089adbe*/
    v65 = 32 * v109.i64[3]; /*0x10089adcc*/
    v116 = *(_QWORD *)(v109.i64[1] + 32 * v109.i64[3] + 24); /*0x10089add5*/
    v115 = *(_QWORD *)(v109.i64[1] + 32 * v109.i64[3] + 16); /*0x10089ade1*/
    v66 = *(_QWORD *)(v109.i64[1] + 32 * v109.i64[3]); /*0x10089ade8*/
    v114 = *(_QWORD *)(v109.i64[1] + 32 * v109.i64[3] + 8); /*0x10089adf1*/
    v113 = v66; /*0x10089adf8*/
    *(_QWORD *)(v109.i64[1] + v65 + 24) = v106; /*0x10089ae06*/
    *(_QWORD *)(v64 + v65 + 16) = v105; /*0x10089ae12*/
    v67 = v103; /*0x10089ae17*/
    v68 = (__m256i *)v104; /*0x10089ae1e*/
    *(_QWORD *)(v64 + v65 + 8) = v104; /*0x10089ae25*/
    *(_QWORD *)(v64 + v65) = v67; /*0x10089ae2a*/
    if ( (_BYTE)v113 != 6 ) /*0x10089ae35*/
    {
      v63 = (__m256i *)&v113; /*0x10089ae3b*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v113); /*0x10089ae42*/
    }
  }
  else
  {
    v120 = v112; /*0x10089ae53*/
    v119 = v111; /*0x10089ae5e*/
    v118 = v110; /*0x10089ae69*/
    v117 = v109; /*0x10089ae74*/
    v102 = v106; /*0x10089aea0*/
    v101 = v105; /*0x10089aeae*/
    v100 = v104; /*0x10089aec3*/
    v99 = v103; /*0x10089aeca*/
    v63 = (__m256i *)&v113; /*0x10089aed1*/
    v68 = &v117; /*0x10089aed8*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10089aee3*/
      &v113,
      &v117,
      &v99);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v63, v68); /*0x10089aee8*/
  v35 = 6; /*0x10089aeed*/
  v69 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x10089aefd*/
  if ( !v69 ) /*0x10089af05*/
LABEL_81:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v35); /*0x10089b3ce*/
  *(_WORD *)(v69 + 4) = 28001; /*0x10089af0b*/
  *(_DWORD *)v69 = 1701999731; /*0x10089af11*/
  v103 = 6; /*0x10089af17*/
  v104 = v69; /*0x10089af22*/
  v105 = 6; /*0x10089af29*/
  LOWORD(v121) = 257; /*0x10089af34*/
  v70 = &v109; /*0x10089af3a*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v109, v90, &v103); /*0x10089af4f*/
  if ( v109.i64[0] == 0x8000000000000000LL ) /*0x10089af65*/
  {
    v71 = v109.i64[1]; /*0x10089af6b*/
    v72 = 32 * v109.i64[3]; /*0x10089af79*/
    v116 = *(_QWORD *)(v109.i64[1] + 32 * v109.i64[3] + 24); /*0x10089af82*/
    v115 = *(_QWORD *)(v109.i64[1] + 32 * v109.i64[3] + 16); /*0x10089af8e*/
    v73 = *(_QWORD *)(v109.i64[1] + 32 * v109.i64[3]); /*0x10089af95*/
    v114 = *(_QWORD *)(v109.i64[1] + 32 * v109.i64[3] + 8); /*0x10089af9e*/
    v113 = v73; /*0x10089afa5*/
    *(_QWORD *)(v109.i64[1] + v72 + 24) = v124; /*0x10089afb0*/
    *(_QWORD *)(v71 + v72 + 16) = v123; /*0x10089afb9*/
    v74 = v121; /*0x10089afbe*/
    v75 = (__m256i *)v122; /*0x10089afc2*/
    *(_QWORD *)(v71 + v72 + 8) = v122; /*0x10089afc6*/
    *(_QWORD *)(v71 + v72) = v74; /*0x10089afcb*/
    if ( (_BYTE)v113 != 6 ) /*0x10089afd6*/
    {
      v70 = (__m256i *)&v113; /*0x10089afdc*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v113); /*0x10089afe3*/
    }
  }
  else
  {
    v120 = v112; /*0x10089aff4*/
    v119 = v111; /*0x10089afff*/
    v118 = v110; /*0x10089b00a*/
    v117 = v109; /*0x10089b015*/
    v102 = v124; /*0x10089b03e*/
    v101 = (__int64)v123; /*0x10089b049*/
    v100 = v122; /*0x10089b058*/
    v99 = v121; /*0x10089b05f*/
    v70 = (__m256i *)&v113; /*0x10089b066*/
    v75 = &v117; /*0x10089b06d*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10089b078*/
      &v113,
      &v117,
      &v99);
  }
  v104 = v90[0]; /*0x10089b08b*/
  v105 = v90[1]; /*0x10089b092*/
  v106 = v91; /*0x10089b0a0*/
  LOBYTE(v103) = 5; /*0x10089b0a7*/
  if ( __n != 0x8000000000000000LL ) /*0x10089b0bf*/
  {
    v76 = v6; /*0x10089b0c5*/
    *(_QWORD *)&v96 = 0; /*0x10089b0c8*/
    v97 = 0; /*0x10089b0d3*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v70, v75); /*0x10089b0de*/
    v77 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x10089b0ed*/
    if ( !v77 ) /*0x10089b0f5*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x10089b422*/
    *(_WORD *)(v77 + 4) = 29810; /*0x10089b0fe*/
    *(_DWORD *)v77 = 1868981861; /*0x10089b104*/
    v93 = 6; /*0x10089b10a*/
    v94 = (_DWORD *)v77; /*0x10089b115*/
    v95 = 6; /*0x10089b11c*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1); /*0x10089b127*/
    v78 = __n; /*0x10089b131*/
    v79 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x10089b13b*/
    if ( !v79 ) /*0x10089b143*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v78); /*0x10089b431*/
    v80 = v79; /*0x10089b149*/
    memcpy(v79, __src, v78); /*0x10089b159*/
    LOBYTE(v121) = 3; /*0x10089b15e*/
    v122 = v78; /*0x10089b162*/
    v123 = v80; /*0x10089b166*/
    v124 = v78; /*0x10089b16a*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v109, &v96, &v93); /*0x10089b183*/
    v6 = v76; /*0x10089b199*/
    if ( v109.i64[0] == 0x8000000000000000LL ) /*0x10089b19c*/
    {
      v81 = v109.i64[1]; /*0x10089b1a2*/
      v82 = 32 * v109.i64[3]; /*0x10089b1b0*/
      v116 = *(_QWORD *)(v109.i64[1] + 32 * v109.i64[3] + 24); /*0x10089b1b9*/
      v115 = *(_QWORD *)(v109.i64[1] + 32 * v109.i64[3] + 16); /*0x10089b1c5*/
      v83 = *(_QWORD *)(v109.i64[1] + 32 * v109.i64[3]); /*0x10089b1cc*/
      v114 = *(_QWORD *)(v109.i64[1] + 32 * v109.i64[3] + 8); /*0x10089b1d5*/
      v113 = v83; /*0x10089b1dc*/
      *(_QWORD *)(v109.i64[1] + v82 + 24) = v124; /*0x10089b1e7*/
      *(_QWORD *)(v81 + v82 + 16) = v123; /*0x10089b1f0*/
      v84 = v121; /*0x10089b1f5*/
      *(_QWORD *)(v81 + v82 + 8) = v122; /*0x10089b1fd*/
      *(_QWORD *)(v81 + v82) = v84; /*0x10089b202*/
      if ( (_BYTE)v113 != 6 ) /*0x10089b20d*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v113); /*0x10089b21a*/
    }
    else
    {
      v120 = v112; /*0x10089b22b*/
      v119 = v111; /*0x10089b236*/
      v118 = v110; /*0x10089b241*/
      v117 = v109; /*0x10089b24c*/
      v102 = v124; /*0x10089b275*/
      v101 = (__int64)v123; /*0x10089b280*/
      v100 = v122; /*0x10089b28f*/
      v99 = v121; /*0x10089b296*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10089b2af*/
        &v113,
        &v117,
        &v99);
    }
    *(__int128 *)((char *)v117.i128 + 8) = v96; /*0x10089b2c2*/
    v117.i64[3] = v97; /*0x10089b2d1*/
    v117.i8[0] = 5; /*0x10089b2d5*/
    v85 = (__m256i *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x10089b2f1*/
                       "reasoningarguments{}",
                       9u);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v85); /*0x10089b2f7*/
    *v85 = v117; /*0x10089b308*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, __n, 1); /*0x10089b32e*/
  }
  v86 = v92; /*0x10089b33a*/
  v92[3] = v106; /*0x10089b341*/
  v86[2] = v105; /*0x10089b34c*/
  v87 = v103; /*0x10089b350*/
  v86[1] = v104; /*0x10089b35e*/
  *v86 = v87; /*0x10089b362*/
  if ( v6 ) /*0x10089b368*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v107, v6, 1); /*0x10089b379*/
  return v92; /*0x10089b385*/
}