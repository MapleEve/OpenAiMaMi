// __ZN13codexmate_lib4core5relay12health_check18build_test_request @ 0x10089b650 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::health_check::build_test_request::hc5f748c2549eb945(
        _QWORD *a1,
        __int64 a2,
        const void *a3,
        signed __int64 a4,
        int a5)
{
  void *v7; // rax
  __int64 v8; // rax
  __int64 v9; // r14
  void *v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // r14
  __int64 v14; // rax
  __m256i *v15; // rdi
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rdx
  __m256i *v20; // rsi
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // r15
  _DWORD *v25; // rax
  _DWORD *v26; // rax
  __m256i *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rcx
  __int64 v30; // rdx
  __int64 v31; // rdx
  __m256i *v32; // rsi
  __int64 v33; // rax
  __int64 v34; // rbx
  _DWORD *v35; // rax
  _WORD *v36; // rax
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rdx
  __m256i *v41; // rdi
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rdx
  __int64 v45; // rdx
  __m256i *v46; // rsi
  __int64 v47; // rax
  __m256i *v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rdx
  __m256i *v53; // rsi
  void *v54; // rax
  void *v55; // rax
  __int64 v56; // rax
  __int64 v57; // rcx
  __int64 v58; // rdx
  __int64 v59; // rdx
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rdx
  __int64 v63; // rdx
  void *v64; // r15
  void *v65; // rax
  void *v66; // rax
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rdx
  __int64 v70; // rdx
  _QWORD *v71; // rbx
  void *v72; // rax
  __m256i *v73; // rdi
  __int64 v74; // rax
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rdx
  __m256i *v78; // rsi
  __int64 v79; // rax
  __int64 v80; // rax
  __int64 v81; // r12
  void *v82; // rax
  __int64 v83; // rax
  __int64 v84; // rcx
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 v87; // rcx
  void *v89; // rax
  __int64 v90; // [rsp+38h] [rbp-1A8h] BYREF
  void *__s1; // [rsp+40h] [rbp-1A0h]
  unsigned __int64 v92; // [rsp+48h] [rbp-198h]
  __int64 v93; // [rsp+50h] [rbp-190h] BYREF
  _QWORD *v94; // [rsp+58h] [rbp-188h]
  __int64 v95; // [rsp+60h] [rbp-180h]
  _QWORD *v96; // [rsp+68h] [rbp-178h]
  void *v97; // [rsp+70h] [rbp-170h]
  __int64 v98; // [rsp+78h] [rbp-168h] BYREF
  __int128 v99; // [rsp+80h] [rbp-160h]
  __int128 v100; // [rsp+90h] [rbp-150h] BYREF
  __int64 v101; // [rsp+A0h] [rbp-140h]
  void *v102; // [rsp+A8h] [rbp-138h]
  __int64 v103; // [rsp+B0h] [rbp-130h] BYREF
  __int64 v104; // [rsp+B8h] [rbp-128h]
  __int64 v105; // [rsp+C0h] [rbp-120h]
  __int64 v106; // [rsp+C8h] [rbp-118h] BYREF
  __int128 v107; // [rsp+D0h] [rbp-110h]
  __int64 v108; // [rsp+E0h] [rbp-100h]
  __int64 v109; // [rsp+E8h] [rbp-F8h] BYREF
  __int128 v110; // [rsp+F0h] [rbp-F0h]
  __int64 v111; // [rsp+100h] [rbp-E0h]
  __m256i v112; // [rsp+108h] [rbp-D8h] BYREF
  __int64 v113; // [rsp+128h] [rbp-B8h]
  __int64 v114; // [rsp+130h] [rbp-B0h]
  __int64 v115; // [rsp+138h] [rbp-A8h]
  __m256i v116; // [rsp+140h] [rbp-A0h] BYREF
  __int64 v117; // [rsp+160h] [rbp-80h]
  __int64 v118; // [rsp+168h] [rbp-78h]
  __int64 v119; // [rsp+170h] [rbp-70h]
  __int64 v120; // [rsp+178h] [rbp-68h] BYREF
  void *v121; // [rsp+180h] [rbp-60h]
  __int64 v122; // [rsp+188h] [rbp-58h]
  __int64 v123; // [rsp+190h] [rbp-50h]
  __int64 v124; // [rsp+198h] [rbp-48h] BYREF
  __int128 v125; // [rsp+1A0h] [rbp-40h]
  __int64 v126; // [rsp+1B0h] [rbp-30h]

  LODWORD(v102) = a5; /*0x10089b664*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x10089b676*/
  v96 = a1; /*0x10089b67d*/
  if ( !(_DWORD)a2 ) /*0x10089b684*/
  {
    v10 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(20, 1); /*0x10089b747*/
    if ( !v10 ) /*0x10089b74f*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 20); /*0x10089cd78*/
    qmemcpy(v10, "/v1/chat/completions", 20); /*0x10089b76d*/
    v97 = v10; /*0x10089b770*/
    v11 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a3, a4); /*0x10089b790*/
    alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(&v90, v11, v12); /*0x10089b793*/
    v98 = 0; /*0x10089b798*/
    *((_QWORD *)&v99 + 1) = 0; /*0x10089b7a3*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v90, v11); /*0x10089b7ae*/
    v13 = 5; /*0x10089b7b3*/
    v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x10089b7c3*/
    if ( !v14 ) /*0x10089b7cb*/
      goto LABEL_95; /*0x10089b7cb*/
    *(_BYTE *)(v14 + 4) = 108; /*0x10089b7d4*/
    *(_DWORD *)v14 = 1701080941; /*0x10089b7d8*/
    v106 = 5; /*0x10089b7de*/
    *(_QWORD *)&v107 = v14; /*0x10089b7e9*/
    *((_QWORD *)&v107 + 1) = 5; /*0x10089b7f0*/
    serde_json::value::from::_$LT$impl$u20$core..convert..From$LT$$RF$str$GT$$u20$for$u20$serde_json..value..Value$GT$::from::h0afcaef35e12fd7e( /*0x10089b805*/
      &v124,
      a3,
      a4);
    v15 = &v116; /*0x10089b80a*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v116, &v98, &v106); /*0x10089b81f*/
    if ( __OFSUB__(0, v116.i64[0]) ) /*0x10089b826*/
    {
      v16 = v116.i64[1]; /*0x10089b82f*/
      v17 = 32 * v116.i64[3]; /*0x10089b83d*/
      v123 = *(_QWORD *)(v116.i64[1] + 32 * v116.i64[3] + 24); /*0x10089b846*/
      v122 = *(_QWORD *)(v116.i64[1] + 32 * v116.i64[3] + 16); /*0x10089b84f*/
      v18 = *(_QWORD *)(v116.i64[1] + 32 * v116.i64[3]); /*0x10089b853*/
      v121 = *(void **)(v116.i64[1] + 32 * v116.i64[3] + 8); /*0x10089b85c*/
      v120 = v18; /*0x10089b860*/
      *(_QWORD *)(v116.i64[1] + v17 + 24) = v126; /*0x10089b868*/
      *(_QWORD *)(v16 + v17 + 16) = *((_QWORD *)&v125 + 1); /*0x10089b871*/
      v19 = v124; /*0x10089b876*/
      v20 = (__m256i *)v125; /*0x10089b87a*/
      *(_QWORD *)(v16 + v17 + 8) = v125; /*0x10089b87e*/
      *(_QWORD *)(v16 + v17) = v19; /*0x10089b883*/
      if ( (_BYTE)v120 != 6 ) /*0x10089b88b*/
      {
        v15 = (__m256i *)&v120; /*0x10089b891*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v120); /*0x10089b895*/
      }
    }
    else
    {
      v115 = v119; /*0x10089b8a3*/
      v114 = v118; /*0x10089b8ae*/
      v113 = v117; /*0x10089b8b9*/
      v112 = v116; /*0x10089b8d5*/
      v111 = v126; /*0x10089b8fc*/
      v110 = v125; /*0x10089b916*/
      v109 = v124; /*0x10089b91d*/
      v15 = (__m256i *)&v120; /*0x10089b924*/
      v20 = &v112; /*0x10089b928*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10089b936*/
        &v120,
        &v112,
        &v109);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v15, v20); /*0x10089b93b*/
    v13 = 8; /*0x10089b940*/
    v21 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x10089b950*/
    if ( !v21 ) /*0x10089b958*/
      goto LABEL_95; /*0x10089b958*/
    *v21 = 0x736567617373656DLL; /*0x10089b96b*/
    v93 = 8; /*0x10089b96f*/
    v94 = v21; /*0x10089b97a*/
    v95 = 8; /*0x10089b981*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(8, 1); /*0x10089b98c*/
    v22 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8); /*0x10089b99b*/
    if ( !v22 ) /*0x10089b9a3*/
      alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32); /*0x10089cd0f*/
    v23 = v22; /*0x10089b9a9*/
    *(_QWORD *)&v100 = 0; /*0x10089b9ac*/
    v101 = 0; /*0x10089b9b7*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 8); /*0x10089b9c2*/
    v24 = 4; /*0x10089b9c7*/
    v25 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x10089b9d7*/
    if ( !v25 ) /*0x10089b9df*/
      goto LABEL_96; /*0x10089b9df*/
    *v25 = 1701605234; /*0x10089b9e8*/
    v103 = 4; /*0x10089b9ee*/
    v104 = (__int64)v25; /*0x10089b9f9*/
    v105 = 4; /*0x10089ba00*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x10089ba0b*/
    v26 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x10089ba1a*/
    if ( !v26 ) /*0x10089ba22*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x10089cd87*/
    *v26 = 1919251317; /*0x10089ba28*/
    LOBYTE(v124) = 3; /*0x10089ba2e*/
    *(_QWORD *)&v125 = 4; /*0x10089ba32*/
    *((_QWORD *)&v125 + 1) = v26; /*0x10089ba3a*/
    v126 = 4; /*0x10089ba3e*/
    v27 = &v116; /*0x10089ba46*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v116, &v100, &v103); /*0x10089ba5b*/
    if ( v116.i64[0] == 0x8000000000000000LL ) /*0x10089ba71*/
    {
      v28 = v116.i64[1]; /*0x10089ba77*/
      v29 = 32 * v116.i64[3]; /*0x10089ba85*/
      v123 = *(_QWORD *)(v116.i64[1] + 32 * v116.i64[3] + 24); /*0x10089ba8e*/
      v122 = *(_QWORD *)(v116.i64[1] + 32 * v116.i64[3] + 16); /*0x10089ba97*/
      v30 = *(_QWORD *)(v116.i64[1] + 32 * v116.i64[3]); /*0x10089ba9b*/
      v121 = *(void **)(v116.i64[1] + 32 * v116.i64[3] + 8); /*0x10089baa4*/
      v120 = v30; /*0x10089baa8*/
      *(_QWORD *)(v116.i64[1] + v29 + 24) = v126; /*0x10089bab0*/
      *(_QWORD *)(v28 + v29 + 16) = *((_QWORD *)&v125 + 1); /*0x10089bab9*/
      v31 = v124; /*0x10089babe*/
      v32 = (__m256i *)v125; /*0x10089bac2*/
      *(_QWORD *)(v28 + v29 + 8) = v125; /*0x10089bac6*/
      *(_QWORD *)(v28 + v29) = v31; /*0x10089bacb*/
      if ( (_BYTE)v120 != 6 ) /*0x10089bad3*/
      {
        v27 = (__m256i *)&v120; /*0x10089bad9*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v120); /*0x10089badd*/
      }
    }
    else
    {
      v115 = v119; /*0x10089bb1a*/
      v114 = v118; /*0x10089bb25*/
      v113 = v117; /*0x10089bb30*/
      v112 = v116; /*0x10089bb4c*/
      v111 = v126; /*0x10089bb73*/
      v110 = v125; /*0x10089bb8d*/
      v109 = v124; /*0x10089bb94*/
      v27 = (__m256i *)&v120; /*0x10089bb9b*/
      v32 = &v112; /*0x10089bb9f*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10089bbad*/
        &v120,
        &v112,
        &v109);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v27, v32); /*0x10089bbb2*/
    v24 = 7; /*0x10089bbb7*/
    v35 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x10089bbc7*/
    if ( !v35 ) /*0x10089bbcf*/
LABEL_96:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v24); /*0x10089cd47*/
    *(_DWORD *)((char *)v35 + 3) = 1953391988; /*0x10089bbd8*/
    *v35 = 1953394531; /*0x10089bbdf*/
    v103 = 7; /*0x10089bbe5*/
    v104 = (__int64)v35; /*0x10089bbf0*/
    v105 = 7; /*0x10089bbf7*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1); /*0x10089bc02*/
    v36 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x10089bc11*/
    if ( !v36 ) /*0x10089bc19*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 2); /*0x10089cd98*/
    *v36 = 26984; /*0x10089bc1f*/
    LOBYTE(v124) = 3; /*0x10089bc24*/
    *(_QWORD *)&v125 = 2; /*0x10089bc28*/
    *((_QWORD *)&v125 + 1) = v36; /*0x10089bc30*/
    v126 = 2; /*0x10089bc34*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v116, &v100, &v103); /*0x10089bc51*/
    if ( v116.i64[0] == 0x8000000000000000LL ) /*0x10089bc5d*/
    {
      v37 = v116.i64[1]; /*0x10089bc5f*/
      v38 = 32 * v116.i64[3]; /*0x10089bc6d*/
      v123 = *(_QWORD *)(v116.i64[1] + 32 * v116.i64[3] + 24); /*0x10089bc76*/
      v122 = *(_QWORD *)(v116.i64[1] + 32 * v116.i64[3] + 16); /*0x10089bc7f*/
      v39 = *(_QWORD *)(v116.i64[1] + 32 * v116.i64[3]); /*0x10089bc83*/
      v121 = *(void **)(v116.i64[1] + 32 * v116.i64[3] + 8); /*0x10089bc8c*/
      v120 = v39; /*0x10089bc90*/
      *(_QWORD *)(v116.i64[1] + v38 + 24) = v126; /*0x10089bc98*/
      *(_QWORD *)(v37 + v38 + 16) = *((_QWORD *)&v125 + 1); /*0x10089bca1*/
      v40 = v124; /*0x10089bca6*/
      *(_QWORD *)(v37 + v38 + 8) = v125; /*0x10089bcae*/
      *(_QWORD *)(v37 + v38) = v40; /*0x10089bcb3*/
      if ( (_BYTE)v120 != 6 ) /*0x10089bcbb*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v120); /*0x10089bcc5*/
    }
    else
    {
      v115 = v119; /*0x10089bcd3*/
      v114 = v118; /*0x10089bcde*/
      v113 = v117; /*0x10089bce9*/
      v112 = v116; /*0x10089bd05*/
      v111 = v126; /*0x10089bd2c*/
      v110 = v125; /*0x10089bd46*/
      v109 = v124; /*0x10089bd4d*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10089bd66*/
        &v120,
        &v112,
        &v109);
    }
    *(__int128 *)((char *)v112.i128 + 7) = v100; /*0x10089bd80*/
    *(__int64 *)((char *)&v112.i64[2] + 7) = v101; /*0x10089bd8e*/
    *(_BYTE *)v23 = 5; /*0x10089bd95*/
    *(_QWORD *)(v23 + 24) = *(__int64 *)((char *)&v112.i64[2] + 7); /*0x10089bda1*/
    *(_QWORD *)(v23 + 17) = v112.i64[2]; /*0x10089bdac*/
    *(_OWORD *)(v23 + 1) = v112.i128[0]; /*0x10089bdc2*/
    *(_QWORD *)&v107 = 1; /*0x10089bdc6*/
    *((_QWORD *)&v107 + 1) = v23; /*0x10089bdd1*/
    v108 = 1; /*0x10089bdd8*/
    LOBYTE(v106) = 4; /*0x10089bde3*/
    v41 = &v116; /*0x10089bdea*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v116, &v98, &v93); /*0x10089bdff*/
    if ( v116.i64[0] == 0x8000000000000000LL ) /*0x10089be0b*/
    {
      v42 = v116.i64[1]; /*0x10089be0d*/
      v43 = 32 * v116.i64[3]; /*0x10089be1b*/
      v123 = *(_QWORD *)(v116.i64[1] + 32 * v116.i64[3] + 24); /*0x10089be24*/
      v122 = *(_QWORD *)(v116.i64[1] + 32 * v116.i64[3] + 16); /*0x10089be2d*/
      v44 = *(_QWORD *)(v116.i64[1] + 32 * v116.i64[3]); /*0x10089be31*/
      v121 = *(void **)(v116.i64[1] + 32 * v116.i64[3] + 8); /*0x10089be3a*/
      v120 = v44; /*0x10089be3e*/
      *(_QWORD *)(v116.i64[1] + v43 + 24) = v108; /*0x10089be49*/
      *(_QWORD *)(v42 + v43 + 16) = *((_QWORD *)&v107 + 1); /*0x10089be55*/
      v45 = v106; /*0x10089be5a*/
      v46 = (__m256i *)v107; /*0x10089be61*/
      *(_QWORD *)(v42 + v43 + 8) = v107; /*0x10089be68*/
      *(_QWORD *)(v42 + v43) = v45; /*0x10089be6d*/
      if ( (_BYTE)v120 != 6 ) /*0x10089be75*/
      {
        v41 = (__m256i *)&v120; /*0x10089be7b*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v120); /*0x10089be7f*/
      }
    }
    else
    {
      v115 = v119; /*0x10089be8d*/
      v114 = v118; /*0x10089be98*/
      v113 = v117; /*0x10089bea3*/
      v112 = v116; /*0x10089bebf*/
      v111 = v108; /*0x10089bee9*/
      v110 = v107; /*0x10089bf0c*/
      v109 = v106; /*0x10089bf13*/
      v41 = (__m256i *)&v120; /*0x10089bf1a*/
      v46 = &v112; /*0x10089bf1e*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10089bf2c*/
        &v120,
        &v112,
        &v109);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v41, v46); /*0x10089bf31*/
    v13 = 6; /*0x10089bf36*/
    v47 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x10089bf46*/
    if ( !v47 ) /*0x10089bf4e*/
      goto LABEL_95; /*0x10089bf4e*/
    *(_WORD *)(v47 + 4) = 28001; /*0x10089bf54*/
    *(_DWORD *)v47 = 1701999731; /*0x10089bf5a*/
    v106 = 6; /*0x10089bf60*/
    *(_QWORD *)&v107 = v47; /*0x10089bf6b*/
    *((_QWORD *)&v107 + 1) = 6; /*0x10089bf72*/
    BYTE1(v124) = (_BYTE)v102; /*0x10089bf83*/
    LOBYTE(v124) = 1; /*0x10089bf86*/
    v48 = &v116; /*0x10089bf8a*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v116, &v98, &v106); /*0x10089bf9f*/
    if ( v116.i64[0] == 0x8000000000000000LL ) /*0x10089bfab*/
    {
      v49 = v116.i64[1]; /*0x10089bfad*/
      v50 = 32 * v116.i64[3]; /*0x10089bfbb*/
      v123 = *(_QWORD *)(v116.i64[1] + 32 * v116.i64[3] + 24); /*0x10089bfc4*/
      v122 = *(_QWORD *)(v116.i64[1] + 32 * v116.i64[3] + 16); /*0x10089bfcd*/
      v51 = *(_QWORD *)(v116.i64[1] + 32 * v116.i64[3]); /*0x10089bfd1*/
      v121 = *(void **)(v116.i64[1] + 32 * v116.i64[3] + 8); /*0x10089bfda*/
      v120 = v51; /*0x10089bfde*/
      *(_QWORD *)(v116.i64[1] + v50 + 24) = v126; /*0x10089bfe6*/
      *(_QWORD *)(v49 + v50 + 16) = *((_QWORD *)&v125 + 1); /*0x10089bfef*/
      v52 = v124; /*0x10089bff4*/
      v53 = (__m256i *)v125; /*0x10089bff8*/
      *(_QWORD *)(v49 + v50 + 8) = v125; /*0x10089bffc*/
      *(_QWORD *)(v49 + v50) = v52; /*0x10089c001*/
      if ( (_BYTE)v120 != 6 ) /*0x10089c009*/
      {
        v48 = (__m256i *)&v120; /*0x10089c00f*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v120); /*0x10089c013*/
      }
    }
    else
    {
      v115 = v119; /*0x10089c021*/
      v114 = v118; /*0x10089c02c*/
      v113 = v117; /*0x10089c037*/
      v112 = v116; /*0x10089c053*/
      v111 = v126; /*0x10089c07a*/
      v110 = v125; /*0x10089c094*/
      v109 = v124; /*0x10089c09b*/
      v48 = (__m256i *)&v120; /*0x10089c0a2*/
      v53 = &v112; /*0x10089c0a6*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10089c0b4*/
        &v120,
        &v112,
        &v109);
    }
    if ( (_BYTE)v102 ) /*0x10089c0c0*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v48, v53); /*0x10089c0c6*/
      v13 = 14; /*0x10089c0cb*/
      v54 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1); /*0x10089c0db*/
      if ( !v54 ) /*0x10089c0e3*/
        goto LABEL_95; /*0x10089c0e3*/
      qmemcpy(v54, "stream_options", 14); /*0x10089c104*/
      v93 = 14; /*0x10089c107*/
      v94 = v54; /*0x10089c112*/
      v95 = 14; /*0x10089c119*/
      *(_QWORD *)&v100 = 0; /*0x10089c124*/
      v101 = 0; /*0x10089c12f*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(14, 1); /*0x10089c13a*/
      v55 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x10089c149*/
      if ( !v55 ) /*0x10089c151*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13); /*0x10089cda9*/
      qmemcpy(v55, "include_usage", 13); /*0x10089c16f*/
      v103 = 13; /*0x10089c172*/
      v104 = (__int64)v55; /*0x10089c17d*/
      v105 = 13; /*0x10089c184*/
      LOWORD(v124) = 257; /*0x10089c18f*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v116, &v100, &v103); /*0x10089c1aa*/
      if ( v116.i64[0] == 0x8000000000000000LL ) /*0x10089c1b6*/
      {
        v56 = v116.i64[1]; /*0x10089c1b8*/
        v57 = 32 * v116.i64[3]; /*0x10089c1c6*/
        v123 = *(_QWORD *)(v116.i64[1] + 32 * v116.i64[3] + 24); /*0x10089c1cf*/
        v122 = *(_QWORD *)(v116.i64[1] + 32 * v116.i64[3] + 16); /*0x10089c1d8*/
        v58 = *(_QWORD *)(v116.i64[1] + 32 * v116.i64[3]); /*0x10089c1dc*/
        v121 = *(void **)(v116.i64[1] + 32 * v116.i64[3] + 8); /*0x10089c1e5*/
        v120 = v58; /*0x10089c1e9*/
        *(_QWORD *)(v116.i64[1] + v57 + 24) = v126; /*0x10089c1f1*/
        *(_QWORD *)(v56 + v57 + 16) = *((_QWORD *)&v125 + 1); /*0x10089c1fa*/
        v59 = v124; /*0x10089c1ff*/
        *(_QWORD *)(v56 + v57 + 8) = v125; /*0x10089c207*/
        *(_QWORD *)(v56 + v57) = v59; /*0x10089c20c*/
        if ( (_BYTE)v120 != 6 ) /*0x10089c214*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v120); /*0x10089c21e*/
      }
      else
      {
        v115 = v119; /*0x10089c22c*/
        v114 = v118; /*0x10089c237*/
        v113 = v117; /*0x10089c242*/
        v112 = v116; /*0x10089c25e*/
        v111 = v126; /*0x10089c285*/
        v110 = v125; /*0x10089c29f*/
        v109 = v124; /*0x10089c2a6*/
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10089c2bf*/
          &v120,
          &v112,
          &v109);
      }
      v107 = v100; /*0x10089c2d2*/
      v108 = v101; /*0x10089c2e7*/
      LOBYTE(v106) = 5; /*0x10089c2ee*/
      v48 = &v116; /*0x10089c2f5*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v116, &v98, &v93); /*0x10089c30a*/
      if ( v116.i64[0] == 0x8000000000000000LL ) /*0x10089c316*/
      {
        v60 = v116.i64[1]; /*0x10089c318*/
        v61 = 32 * v116.i64[3]; /*0x10089c326*/
        v123 = *(_QWORD *)(v116.i64[1] + 32 * v116.i64[3] + 24); /*0x10089c32f*/
        v122 = *(_QWORD *)(v116.i64[1] + 32 * v116.i64[3] + 16); /*0x10089c338*/
        v62 = *(_QWORD *)(v116.i64[1] + 32 * v116.i64[3]); /*0x10089c33c*/
        v121 = *(void **)(v116.i64[1] + 32 * v116.i64[3] + 8); /*0x10089c345*/
        v120 = v62; /*0x10089c349*/
        *(_QWORD *)(v116.i64[1] + v61 + 24) = v108; /*0x10089c354*/
        *(_QWORD *)(v60 + v61 + 16) = *((_QWORD *)&v107 + 1); /*0x10089c360*/
        v63 = v106; /*0x10089c365*/
        v53 = (__m256i *)v107; /*0x10089c36c*/
        *(_QWORD *)(v60 + v61 + 8) = v107; /*0x10089c373*/
        *(_QWORD *)(v60 + v61) = v63; /*0x10089c378*/
        if ( (_BYTE)v120 != 6 ) /*0x10089c380*/
        {
          v48 = (__m256i *)&v120; /*0x10089c386*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v120); /*0x10089c38a*/
        }
      }
      else
      {
        v115 = v119; /*0x10089c398*/
        v114 = v118; /*0x10089c3a3*/
        v113 = v117; /*0x10089c3ae*/
        v112 = v116; /*0x10089c3ca*/
        v111 = v108; /*0x10089c3f4*/
        v110 = v107; /*0x10089c417*/
        v109 = v106; /*0x10089c41e*/
        v48 = (__m256i *)&v120; /*0x10089c425*/
        v53 = &v112; /*0x10089c429*/
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10089c437*/
          &v120,
          &v112,
          &v109);
      }
    }
    v64 = __s1; /*0x10089c43c*/
    if ( v92 == 2 ) /*0x10089c44e*/
    {
      if ( *(_WORD *)__s1 == 12655 || *(_WORD *)__s1 == 13167 || *(_WORD *)__s1 == 13423 ) /*0x10089c46e*/
        goto LABEL_64; /*0x10089c46e*/
    }
    else if ( v92 > 2 /*0x10089c599*/
           && (!(*(_WORD *)__s1 ^ 0x316F | *((unsigned __int8 *)__s1 + 2) ^ 0x2D)
            || !(*(_WORD *)__s1 ^ 0x336F | *((unsigned __int8 *)__s1 + 2) ^ 0x2D)
            || !(*(_WORD *)__s1 ^ 0x346F | *((unsigned __int8 *)__s1 + 2) ^ 0x2D)) )
    {
LABEL_64:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v48, v53); /*0x10089c5a2*/
      v13 = 21; /*0x10089c5a7*/
      v66 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(21, 1); /*0x10089c5b7*/
      if ( v66 ) /*0x10089c5bf*/
      {
        qmemcpy(v66, "max_completion_tokens", 21); /*0x10089c5eb*/
        v106 = 21; /*0x10089c5ee*/
        *(_QWORD *)&v107 = v66; /*0x10089c5f9*/
        *((_QWORD *)&v107 + 1) = 21; /*0x10089c600*/
        *(_QWORD *)&v125 = 0; /*0x10089c60b*/
        *((_QWORD *)&v125 + 1) = 16; /*0x10089c613*/
        LOBYTE(v124) = 2; /*0x10089c61b*/
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v116, &v98, &v106); /*0x10089c634*/
        if ( v116.i64[0] == 0x8000000000000000LL ) /*0x10089c640*/
        {
          v67 = v116.i64[1]; /*0x10089c642*/
          v68 = 32 * v116.i64[3]; /*0x10089c650*/
          v123 = *(_QWORD *)(v116.i64[1] + 32 * v116.i64[3] + 24); /*0x10089c659*/
          v122 = *(_QWORD *)(v116.i64[1] + 32 * v116.i64[3] + 16); /*0x10089c662*/
          v69 = *(_QWORD *)(v116.i64[1] + 32 * v116.i64[3]); /*0x10089c666*/
          v121 = *(void **)(v116.i64[1] + 32 * v116.i64[3] + 8); /*0x10089c66f*/
          v120 = v69; /*0x10089c673*/
          *(_QWORD *)(v116.i64[1] + v68 + 24) = v126; /*0x10089c67b*/
          *(_QWORD *)(v67 + v68 + 16) = *((_QWORD *)&v125 + 1); /*0x10089c684*/
          v70 = v124; /*0x10089c689*/
          *(_QWORD *)(v67 + v68 + 8) = v125; /*0x10089c691*/
          *(_QWORD *)(v67 + v68) = v70; /*0x10089c696*/
          if ( (_BYTE)v120 != 6 ) /*0x10089c69e*/
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v120); /*0x10089c6a8*/
        }
        else
        {
          v115 = v119; /*0x10089c6b6*/
          v114 = v118; /*0x10089c6c1*/
          v113 = v117; /*0x10089c6cc*/
          v112 = v116; /*0x10089c6e8*/
          v111 = v126; /*0x10089c70f*/
          v110 = v125; /*0x10089c729*/
          v109 = v124; /*0x10089c730*/
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10089c749*/
            &v120,
            &v112,
            &v109);
        }
        goto LABEL_69; /*0x10089c6ad*/
      }
LABEL_95:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v13); /*0x10089cd2d*/
    }
    if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10089c48d*/
                            &unk_101674AA0,
                            8u,
                            __s1) )
    {
      if ( !(unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10089c4ac*/
                               "claude",
                               6u,
                               v64) )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("claude", 6); /*0x10089c4b9*/
        v13 = 10; /*0x10089c4be*/
        v65 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x10089c4ce*/
        if ( !v65 ) /*0x10089c4d6*/
          goto LABEL_95; /*0x10089c4d6*/
        qmemcpy(v65, "max_tokens", 10); /*0x10089c4e6*/
        v120 = 10; /*0x10089c4ef*/
        v121 = v65; /*0x10089c4f7*/
        v122 = 10; /*0x10089c4fb*/
        v112.i64[1] = 0; /*0x10089c503*/
        v112.i64[2] = 50; /*0x10089c50e*/
        v112.i8[0] = 2; /*0x10089c519*/
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v116, &v98, &v120, &v112); /*0x10089c539*/
        if ( v116.i8[0] != 6 ) /*0x10089c545*/
LABEL_92:
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v116); /*0x10089ccf4*/
      }
    }
    else if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10089c7c9*/
                                 "geminiclaude",
                                 6u,
                                 v64) )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("geminiclaude", 6); /*0x10089c7d6*/
      v13 = 10; /*0x10089c7db*/
      v72 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x10089c7eb*/
      if ( !v72 ) /*0x10089c7f3*/
        goto LABEL_95; /*0x10089c7f3*/
      qmemcpy(v72, "max_tokens", 10); /*0x10089c803*/
      v120 = 10; /*0x10089c80c*/
      v121 = v72; /*0x10089c814*/
      v122 = 10; /*0x10089c818*/
      v112.i64[1] = 0; /*0x10089c820*/
      v112.i64[2] = 3000; /*0x10089c82b*/
      v112.i8[0] = 2; /*0x10089c836*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v116, &v98, &v120, &v112); /*0x10089c856*/
      if ( v116.i8[0] != 6 ) /*0x10089c862*/
        goto LABEL_92; /*0x10089c862*/
    }
    else
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("geminiclaude", 6); /*0x10089cc62*/
      v13 = 10; /*0x10089cc67*/
      v89 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x10089cc77*/
      if ( !v89 ) /*0x10089cc7f*/
        goto LABEL_95; /*0x10089cc7f*/
      qmemcpy(v89, "max_tokens", 10); /*0x10089cc8f*/
      v120 = 10; /*0x10089cc98*/
      v121 = v89; /*0x10089cca0*/
      v122 = 10; /*0x10089cca4*/
      v112.i64[1] = 0; /*0x10089ccac*/
      v112.i64[2] = 16; /*0x10089ccb7*/
      v112.i8[0] = 2; /*0x10089ccc2*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v116, &v98, &v120, &v112); /*0x10089cce2*/
      if ( v116.i8[0] != 6 ) /*0x10089ccee*/
        goto LABEL_92; /*0x10089ccee*/
    }
LABEL_69:
    *(__int128 *)((char *)v112.i128 + 15) = v99; /*0x10089c74e*/
    *(__int64 *)((char *)v112.i64 + 7) = v98; /*0x10089c771*/
    if ( v90 ) /*0x10089c782*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v64, v90, 1); /*0x10089c78c*/
    v71 = v96; /*0x10089c791*/
    *v96 = 20; /*0x10089c798*/
    v71[1] = v97; /*0x10089c7a6*/
    v71[2] = 20; /*0x10089c7aa*/
    goto LABEL_89; /*0x10089c7b2*/
  }
  v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1); /*0x10089b694*/
  if ( !v7 ) /*0x10089b69c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 14); /*0x10089cd69*/
  v102 = v7; /*0x10089b6ba*/
  qmemcpy(v7, "/v1/embeddings", 14); /*0x10089b6c1*/
  v103 = 0; /*0x10089b6c4*/
  v105 = 0; /*0x10089b6cf*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(14, 1); /*0x10089b6da*/
  v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x10089b6e9*/
  if ( !v8 ) /*0x10089b6f1*/
    goto LABEL_97; /*0x10089b6f1*/
  *(_BYTE *)(v8 + 4) = 108; /*0x10089b6fa*/
  *(_DWORD *)v8 = 1701080941; /*0x10089b6fe*/
  v106 = 5; /*0x10089b704*/
  *(_QWORD *)&v107 = v8; /*0x10089b70f*/
  *((_QWORD *)&v107 + 1) = 5; /*0x10089b716*/
  if ( a4 < 0 ) /*0x10089b724*/
  {
    v9 = 0; /*0x10089b72a*/
    goto LABEL_6; /*0x10089b72a*/
  }
  if ( a4 ) /*0x10089bae7*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x10089baed*/
    v9 = 1; /*0x10089baf2*/
    v33 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a4, 1); /*0x10089bb00*/
    if ( !v33 ) /*0x10089bb08*/
LABEL_6:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, a4); /*0x10089b72d*/
    v34 = v33; /*0x10089bb0e*/
  }
  else
  {
    v34 = 1; /*0x10089c879*/
  }
  memcpy((void *)v34, a3, a4); /*0x10089c887*/
  LOBYTE(v124) = 3; /*0x10089c88c*/
  *(_QWORD *)&v125 = a4; /*0x10089c890*/
  *((_QWORD *)&v125 + 1) = v34; /*0x10089c894*/
  v126 = a4; /*0x10089c898*/
  v73 = &v116; /*0x10089c89c*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v116, &v103, &v106); /*0x10089c8b1*/
  if ( __OFSUB__(0, v116.i64[0]) ) /*0x10089c8b8*/
  {
    v74 = v116.i64[1]; /*0x10089c8c1*/
    v75 = 32 * v116.i64[3]; /*0x10089c8cf*/
    v123 = *(_QWORD *)(v116.i64[1] + 32 * v116.i64[3] + 24); /*0x10089c8d8*/
    v122 = *(_QWORD *)(v116.i64[1] + 32 * v116.i64[3] + 16); /*0x10089c8e1*/
    v76 = *(_QWORD *)(v116.i64[1] + 32 * v116.i64[3]); /*0x10089c8e5*/
    v121 = *(void **)(v116.i64[1] + 32 * v116.i64[3] + 8); /*0x10089c8ee*/
    v120 = v76; /*0x10089c8f2*/
    *(_QWORD *)(v116.i64[1] + v75 + 24) = v126; /*0x10089c8fa*/
    *(_QWORD *)(v74 + v75 + 16) = *((_QWORD *)&v125 + 1); /*0x10089c903*/
    v77 = v124; /*0x10089c908*/
    v78 = (__m256i *)v125; /*0x10089c90c*/
    *(_QWORD *)(v74 + v75 + 8) = v125; /*0x10089c910*/
    *(_QWORD *)(v74 + v75) = v77; /*0x10089c915*/
    if ( (_BYTE)v120 != 6 ) /*0x10089c91d*/
    {
      v73 = (__m256i *)&v120; /*0x10089c923*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v120); /*0x10089c927*/
    }
  }
  else
  {
    v115 = v119; /*0x10089c935*/
    v114 = v118; /*0x10089c940*/
    v113 = v117; /*0x10089c94b*/
    v112 = v116; /*0x10089c967*/
    v111 = v126; /*0x10089c98e*/
    v110 = v125; /*0x10089c9a8*/
    v109 = v124; /*0x10089c9af*/
    v73 = (__m256i *)&v120; /*0x10089c9b6*/
    v78 = &v112; /*0x10089c9ba*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10089c9c8*/
      &v120,
      &v112,
      &v109);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v73, v78); /*0x10089c9cd*/
  v79 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x10089c9dc*/
  if ( !v79 ) /*0x10089c9e4*/
LABEL_97:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 5); /*0x10089cd58*/
  *(_BYTE *)(v79 + 4) = 116; /*0x10089c9ed*/
  *(_DWORD *)v79 = 1970302569; /*0x10089c9f1*/
  v106 = 5; /*0x10089c9f7*/
  *(_QWORD *)&v107 = v79; /*0x10089ca02*/
  *((_QWORD *)&v107 + 1) = 5; /*0x10089ca09*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x10089ca14*/
  v80 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8); /*0x10089ca23*/
  if ( !v80 ) /*0x10089ca2b*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32); /*0x10089cd23*/
  v81 = v80; /*0x10089ca31*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 8); /*0x10089ca34*/
  v82 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1); /*0x10089ca43*/
  if ( !v82 ) /*0x10089ca4b*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 11); /*0x10089cdba*/
  qmemcpy(v82, "hello world", 11); /*0x10089ca5b*/
  *(_BYTE *)v81 = 3; /*0x10089ca65*/
  *(_QWORD *)(v81 + 8) = 11; /*0x10089ca6a*/
  *(_QWORD *)(v81 + 16) = v82; /*0x10089ca73*/
  *(_QWORD *)(v81 + 24) = 11; /*0x10089ca78*/
  *(_QWORD *)&v125 = 1; /*0x10089ca81*/
  *((_QWORD *)&v125 + 1) = v81; /*0x10089ca89*/
  v126 = 1; /*0x10089ca8d*/
  LOBYTE(v124) = 4; /*0x10089ca95*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v116, &v103, &v106); /*0x10089caae*/
  v71 = v96; /*0x10089cac4*/
  if ( v116.i64[0] == 0x8000000000000000LL ) /*0x10089cacb*/
  {
    v83 = v116.i64[1]; /*0x10089cacd*/
    v84 = 32 * v116.i64[3]; /*0x10089cadb*/
    v123 = *(_QWORD *)(v116.i64[1] + 32 * v116.i64[3] + 24); /*0x10089cae4*/
    v122 = *(_QWORD *)(v116.i64[1] + 32 * v116.i64[3] + 16); /*0x10089caed*/
    v85 = *(_QWORD *)(v116.i64[1] + 32 * v116.i64[3]); /*0x10089caf1*/
    v121 = *(void **)(v116.i64[1] + 32 * v116.i64[3] + 8); /*0x10089cafa*/
    v120 = v85; /*0x10089cafe*/
    *(_QWORD *)(v116.i64[1] + v84 + 24) = v126; /*0x10089cb06*/
    *(_QWORD *)(v83 + v84 + 16) = *((_QWORD *)&v125 + 1); /*0x10089cb0f*/
    v86 = v124; /*0x10089cb14*/
    *(_QWORD *)(v83 + v84 + 8) = v125; /*0x10089cb1c*/
    *(_QWORD *)(v83 + v84) = v86; /*0x10089cb21*/
    if ( (_BYTE)v120 != 6 ) /*0x10089cb29*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v120); /*0x10089cb33*/
  }
  else
  {
    v115 = v119; /*0x10089cb41*/
    v114 = v118; /*0x10089cb4c*/
    v113 = v117; /*0x10089cb57*/
    v112 = v116; /*0x10089cb73*/
    v111 = v126; /*0x10089cb9a*/
    v110 = v125; /*0x10089cbb4*/
    v109 = v124; /*0x10089cbbb*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10089cbd4*/
      &v120,
      &v112,
      &v109);
  }
  *(__int64 *)((char *)v112.i64 + 7) = v103; /*0x10089cbee*/
  *(__int64 *)((char *)&v112.i64[1] + 7) = v104; /*0x10089cbf5*/
  *(__int64 *)((char *)&v112.i64[2] + 7) = v105; /*0x10089cbfc*/
  *v71 = 14; /*0x10089cc03*/
  v71[1] = v102; /*0x10089cc11*/
  v71[2] = 14; /*0x10089cc15*/
LABEL_89:
  *((_BYTE *)v71 + 24) = 5; /*0x10089cc1d*/
  v87 = v112.i64[1]; /*0x10089cc28*/
  *(_QWORD *)((char *)v71 + 25) = v112.i64[0]; /*0x10089cc2f*/
  *(_OWORD *)((char *)v71 + 33) = __PAIR128__(v112.u64[2], v87); /*0x10089cc33*/
  v71[6] = *(__int64 *)((char *)&v112.i64[2] + 7); /*0x10089cc49*/
  return v71; /*0x10089cc50*/
}