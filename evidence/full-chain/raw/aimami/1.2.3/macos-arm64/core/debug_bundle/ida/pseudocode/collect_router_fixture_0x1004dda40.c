// __ZN13codexmate_lib4core12debug_bundle22collect_router_fixture @ 0x1004dda40 | 基线 same-set
__int64 __fastcall codexmate_lib::core::debug_bundle::collect_router_fixture::h8d7071e8c772ee38(
        __int64 a1,
        _QWORD *a2,
        __int64 a3)
{
  __int64 v4; // r12
  void *v5; // rax
  __int64 (__fastcall **v6)(); // rdi
  __int64 (__fastcall *v7)(); // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 (__fastcall *v10)(); // rdx
  __int64 (__fastcall *v11)(); // rsi
  void *v12; // rax
  __int64 v13; // r12
  size_t v14; // r15
  __int64 v15; // r13
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 *v18; // rdi
  __int64 v19; // rbx
  __int64 (__fastcall *v20)(); // rax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 (__fastcall *v23)(); // rdx
  __int64 (__fastcall *v24)(); // rsi
  __int64 (__fastcall *v25)(); // r15
  void *v26; // rax
  __int64 (__fastcall *v27)(); // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 (__fastcall *v31)(); // rsi
  __int64 v32; // rax
  __int64 (__fastcall *v33)(); // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rdx
  __int64 (__fastcall *v37)(); // rsi
  void *v38; // rax
  __int64 (__fastcall *v39)(); // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rdx
  __int64 (__fastcall *v43)(); // rsi
  void *v44; // rax
  __int64 (__fastcall *v45)(); // rax
  __int64 v46; // rcx
  __int64 v47; // rdx
  __int64 v48; // rdx
  __int64 (__fastcall *v49)(); // rsi
  void *v50; // rax
  __int64 (__fastcall *v51)(); // rax
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int64 v54; // rdx
  __int64 (__fastcall *v55)(); // rsi
  void *v56; // rax
  __int64 (__fastcall *v57)(); // rax
  __int64 v58; // rcx
  __int64 v59; // rdx
  __int64 v60; // rdx
  __int64 (__fastcall *v61)(); // rsi
  void *v62; // rax
  __int64 (__fastcall *v63)(); // rax
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rdx
  __int64 (__fastcall *v67)(); // rsi
  void *v68; // rax
  void *v69; // rax
  __int64 (__fastcall *v70)(); // rax
  __int64 v71; // rcx
  __int64 v72; // rdx
  __int64 (__fastcall *v73)(); // rdx
  __int64 (__fastcall *v74)(); // rax
  __int64 v75; // rcx
  __int64 v76; // rdx
  __int64 v77; // rdx
  __int64 v78; // rdx
  __int64 result; // rax
  _QWORD v80[3]; // [rsp+8h] [rbp-198h] BYREF
  __int64 v81; // [rsp+20h] [rbp-180h]
  _QWORD v82[2]; // [rsp+28h] [rbp-178h] BYREF
  size_t v83; // [rsp+38h] [rbp-168h]
  void *__src; // [rsp+40h] [rbp-160h]
  __int64 (__fastcall *v85)(); // [rsp+48h] [rbp-158h]
  _QWORD v86[2]; // [rsp+50h] [rbp-150h] BYREF
  __int64 v87; // [rsp+60h] [rbp-140h]
  _QWORD *v88; // [rsp+68h] [rbp-138h]
  __int64 v89; // [rsp+70h] [rbp-130h] BYREF
  __int64 v90; // [rsp+78h] [rbp-128h]
  __int64 v91; // [rsp+80h] [rbp-120h]
  __int64 v92; // [rsp+88h] [rbp-118h] BYREF
  __int64 (__fastcall *v93)(); // [rsp+90h] [rbp-110h]
  size_t v94; // [rsp+98h] [rbp-108h]
  size_t v95; // [rsp+A0h] [rbp-100h]
  __int64 (__fastcall *v96)(); // [rsp+A8h] [rbp-F8h] BYREF
  __int64 (__fastcall *v97)(); // [rsp+B0h] [rbp-F0h]
  size_t v98; // [rsp+B8h] [rbp-E8h]
  size_t v99; // [rsp+C0h] [rbp-E0h]
  __int64 v100; // [rsp+C8h] [rbp-D8h] BYREF
  __int64 v101; // [rsp+D0h] [rbp-D0h]
  __int64 v102; // [rsp+D8h] [rbp-C8h]
  __int64 v103; // [rsp+E0h] [rbp-C0h]
  __int64 (__fastcall *v104)(); // [rsp+E8h] [rbp-B8h] BYREF
  __int64 (__fastcall *v105)(); // [rsp+F0h] [rbp-B0h]
  size_t __n; // [rsp+F8h] [rbp-A8h]
  size_t v107; // [rsp+100h] [rbp-A0h]
  __int64 v108; // [rsp+108h] [rbp-98h]
  __int64 v109; // [rsp+110h] [rbp-90h]
  __int64 v110; // [rsp+118h] [rbp-88h]
  __int64 (__fastcall *v111)(); // [rsp+120h] [rbp-80h] BYREF
  __int64 (__fastcall *v112)(); // [rsp+128h] [rbp-78h]
  size_t v113; // [rsp+130h] [rbp-70h]
  size_t v114; // [rsp+138h] [rbp-68h]
  __int64 v115; // [rsp+140h] [rbp-60h]
  __int64 v116; // [rsp+148h] [rbp-58h]
  __int64 v117; // [rsp+150h] [rbp-50h]
  __int64 v118; // [rsp+158h] [rbp-48h] BYREF
  __int64 (__fastcall *v119)(); // [rsp+160h] [rbp-40h]
  size_t v120; // [rsp+168h] [rbp-38h]
  size_t v121; // [rsp+170h] [rbp-30h]

  v88 = a2; /*0x1004dda57*/
  v81 = a1; /*0x1004dda5e*/
  v86[0] = 0; /*0x1004dda65*/
  v87 = 0; /*0x1004dda70*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x1004dda7b*/
  v4 = 13; /*0x1004dda80*/
  v5 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x1004dda90*/
  if ( !v5 ) /*0x1004dda98*/
    goto LABEL_82; /*0x1004dda98*/
  qmemcpy(v5, "schemaVersion", 13); /*0x1004ddab6*/
  v118 = 13; /*0x1004ddab9*/
  v119 = (__int64 (__fastcall *)())v5; /*0x1004ddac1*/
  v120 = 13; /*0x1004ddac5*/
  LOBYTE(v96) = 2; /*0x1004ddacd*/
  v97 = nullptr; /*0x1004ddad4*/
  v98 = 1; /*0x1004ddadf*/
  v6 = &v111; /*0x1004ddaea*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v111, v86, &v118); /*0x1004ddaf9*/
  if ( __OFSUB__(0, v111) ) /*0x1004ddb00*/
  {
    v7 = v112; /*0x1004ddb0a*/
    v8 = 32 * v114; /*0x1004ddb12*/
    v103 = *((_QWORD *)v112 + 4 * v114 + 3); /*0x1004ddb1b*/
    v102 = *((_QWORD *)v112 + 4 * v114 + 2); /*0x1004ddb27*/
    v9 = *((_QWORD *)v112 + 4 * v114); /*0x1004ddb2e*/
    v101 = *((_QWORD *)v112 + 4 * v114 + 1); /*0x1004ddb37*/
    v100 = v9; /*0x1004ddb3e*/
    *(_QWORD *)((char *)v112 + v8 + 24) = v99; /*0x1004ddb4c*/
    *(_QWORD *)((char *)v7 + v8 + 16) = v98; /*0x1004ddb58*/
    v10 = v96; /*0x1004ddb5d*/
    v11 = v97; /*0x1004ddb64*/
    *(_QWORD *)((char *)v7 + v8 + 8) = v97; /*0x1004ddb6b*/
    *(_QWORD *)((char *)v7 + v8) = v10; /*0x1004ddb70*/
    if ( (_BYTE)v100 != 6 ) /*0x1004ddb7b*/
    {
      v6 = (__int64 (__fastcall **)())&v100; /*0x1004ddb81*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v100); /*0x1004ddb88*/
    }
  }
  else
  {
    v110 = v117; /*0x1004ddb96*/
    v109 = v116; /*0x1004ddba1*/
    v108 = v115; /*0x1004ddbac*/
    v107 = v114; /*0x1004ddbb7*/
    __n = v113; /*0x1004ddbc2*/
    v105 = v112; /*0x1004ddbd1*/
    v104 = v111; /*0x1004ddbd8*/
    v95 = v99; /*0x1004ddbe6*/
    v94 = v98; /*0x1004ddbf4*/
    v93 = v97; /*0x1004ddc09*/
    v92 = (__int64)v96; /*0x1004ddc10*/
    v6 = (__int64 (__fastcall **)())&v100; /*0x1004ddc17*/
    v11 = (__int64 (__fastcall *)())&v104; /*0x1004ddc1e*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1004ddc2c*/
      &v100,
      &v104,
      &v92);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v6, v11); /*0x1004ddc31*/
  v4 = 10; /*0x1004ddc36*/
  v12 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x1004ddc46*/
  if ( !v12 ) /*0x1004ddc4e*/
    goto LABEL_82; /*0x1004ddc4e*/
  v13 = a3; /*0x1004ddc57*/
  qmemcpy(v12, "targetMode", 10); /*0x1004ddc64*/
  v118 = 10; /*0x1004ddc6d*/
  v119 = (__int64 (__fastcall *)())v12; /*0x1004ddc75*/
  v120 = 10; /*0x1004ddc79*/
  v111 = (__int64 (__fastcall *)())(v88 + 166); /*0x1004ddc8e*/
  v112 = _$LT$codexmate_lib..core..relay..transition_journal..TransitionTarget$u20$as$u20$core..fmt..Debug$GT$::fmt::h446cf35e0ed7bc2e; /*0x1004ddc99*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v104, &unk_1017B9036, &v111); /*0x1004ddcaf*/
  v85 = v104; /*0x1004ddcbb*/
  __src = v105; /*0x1004ddcc9*/
  v14 = __n; /*0x1004ddcd0*/
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1004ddcda*/
  {
    v15 = 0; /*0x1004ddcdc*/
    goto LABEL_9; /*0x1004ddcdc*/
  }
  if ( __n ) /*0x1004ddcef*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v104, &unk_1017B9036); /*0x1004ddcf1*/
    v15 = 1; /*0x1004ddcf6*/
    v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v14, 1); /*0x1004ddd04*/
    if ( !v16 ) /*0x1004ddd0c*/
LABEL_9:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v15, v14); /*0x1004ddcdf*/
    v17 = v16; /*0x1004ddd0e*/
  }
  else
  {
    v17 = 1; /*0x1004ddd13*/
  }
  memcpy((void *)v17, __src, v14); /*0x1004ddd26*/
  LOBYTE(v96) = 3; /*0x1004ddd2b*/
  v97 = (__int64 (__fastcall *)())v14; /*0x1004ddd32*/
  v98 = v17; /*0x1004ddd39*/
  v99 = v14; /*0x1004ddd40*/
  v18 = (__int64 *)&v111; /*0x1004ddd47*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v111, v86, &v118); /*0x1004ddd56*/
  v19 = v13; /*0x1004ddd69*/
  if ( v111 == (__int64 (__fastcall *)())0x8000000000000000LL ) /*0x1004ddd6c*/
  {
    v20 = v112; /*0x1004ddd72*/
    v21 = 32 * v114; /*0x1004ddd7a*/
    v103 = *((_QWORD *)v112 + 4 * v114 + 3); /*0x1004ddd83*/
    v102 = *((_QWORD *)v112 + 4 * v114 + 2); /*0x1004ddd8f*/
    v22 = *((_QWORD *)v112 + 4 * v114); /*0x1004ddd96*/
    v101 = *((_QWORD *)v112 + 4 * v114 + 1); /*0x1004ddd9f*/
    v100 = v22; /*0x1004ddda6*/
    *(_QWORD *)((char *)v112 + v21 + 24) = v99; /*0x1004dddb4*/
    *(_QWORD *)((char *)v20 + v21 + 16) = v98; /*0x1004dddc0*/
    v23 = v96; /*0x1004dddc5*/
    v24 = v97; /*0x1004dddcc*/
    *(_QWORD *)((char *)v20 + v21 + 8) = v97; /*0x1004dddd3*/
    *(_QWORD *)((char *)v20 + v21) = v23; /*0x1004dddd8*/
    v25 = v85; /*0x1004ddde3*/
    if ( (_BYTE)v100 != 6 ) /*0x1004dddea*/
    {
      v18 = &v100; /*0x1004dddf0*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v100); /*0x1004dddf7*/
    }
  }
  else
  {
    v110 = v117; /*0x1004dde05*/
    v109 = v116; /*0x1004dde10*/
    v108 = v115; /*0x1004dde1b*/
    v107 = v114; /*0x1004dde26*/
    __n = v113; /*0x1004dde31*/
    v105 = v112; /*0x1004dde40*/
    v104 = v111; /*0x1004dde47*/
    v95 = v99; /*0x1004dde55*/
    v94 = v98; /*0x1004dde63*/
    v93 = v97; /*0x1004dde78*/
    v92 = (__int64)v96; /*0x1004dde7f*/
    v18 = &v100; /*0x1004dde86*/
    v24 = (__int64 (__fastcall *)())&v104; /*0x1004dde8d*/
    v25 = v85; /*0x1004dde9b*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1004ddea2*/
      &v100,
      &v104,
      &v92);
  }
  if ( v25 ) /*0x1004ddeaa*/
  {
    v18 = (__int64 *)__src; /*0x1004ddeb1*/
    v24 = v25; /*0x1004ddeb8*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v25, 1); /*0x1004ddebb*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v18, v24); /*0x1004ddec0*/
  v4 = 11; /*0x1004ddec5*/
  v26 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1); /*0x1004dded5*/
  if ( !v26 ) /*0x1004ddedd*/
    goto LABEL_82; /*0x1004ddedd*/
  qmemcpy(v26, "configShape", 11); /*0x1004ddef0*/
  v89 = 11; /*0x1004ddefc*/
  v90 = (__int64)v26; /*0x1004ddf07*/
  v91 = 11; /*0x1004ddf0e*/
  codexmate_lib::core::debug_bundle::config_shape::h4127f8fd343d42c3( /*0x1004ddf2f*/
    (__int64)&v96,
    (__int64)v88,
    *(_QWORD *)(v19 + 8),
    *(_QWORD *)(v19 + 16));
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e( /*0x1004ddf42*/
    &v104,
    &v96);
  if ( (_BYTE)v104 == 6 ) /*0x1004ddf4e*/
  {
    v111 = v105; /*0x1004df066*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004df088*/
      "called `Result::unwrap()` on an `Err` valueErrorInvalidUncertainReadable",
      43,
      &v111,
      &off_101964900,
      &off_1019640E8);
  }
  v121 = v107; /*0x1004ddf5b*/
  v120 = __n; /*0x1004ddf66*/
  v119 = v105; /*0x1004ddf78*/
  v118 = (__int64)v104; /*0x1004ddf7c*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v111, v86, &v89); /*0x1004ddf92*/
  if ( v111 == (__int64 (__fastcall *)())0x8000000000000000LL ) /*0x1004ddf9b*/
  {
    v27 = v112; /*0x1004ddf9d*/
    v28 = 32 * v114; /*0x1004ddfa5*/
    v103 = *((_QWORD *)v112 + 4 * v114 + 3); /*0x1004ddfae*/
    v102 = *((_QWORD *)v112 + 4 * v114 + 2); /*0x1004ddfba*/
    v29 = *((_QWORD *)v112 + 4 * v114); /*0x1004ddfc1*/
    v101 = *((_QWORD *)v112 + 4 * v114 + 1); /*0x1004ddfca*/
    v100 = v29; /*0x1004ddfd1*/
    *(_QWORD *)((char *)v112 + v28 + 24) = v121; /*0x1004ddfdc*/
    *(_QWORD *)((char *)v27 + v28 + 16) = v120; /*0x1004ddfe5*/
    v30 = v118; /*0x1004ddfea*/
    v31 = v119; /*0x1004ddfee*/
    *(_QWORD *)((char *)v27 + v28 + 8) = v119; /*0x1004ddff2*/
    *(_QWORD *)((char *)v27 + v28) = v30; /*0x1004ddff7*/
    if ( (_BYTE)v100 != 6 ) /*0x1004de002*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v100); /*0x1004de00f*/
  }
  else
  {
    v110 = v117; /*0x1004de01d*/
    v109 = v116; /*0x1004de028*/
    v108 = v115; /*0x1004de033*/
    v107 = v114; /*0x1004de03e*/
    __n = v113; /*0x1004de049*/
    v105 = v112; /*0x1004de058*/
    v104 = v111; /*0x1004de05f*/
    v95 = v121; /*0x1004de06a*/
    v94 = v120; /*0x1004de075*/
    v93 = v119; /*0x1004de084*/
    v92 = v118; /*0x1004de08b*/
    v31 = (__int64 (__fastcall *)())&v104; /*0x1004de099*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1004de0a7*/
      &v100,
      &v104,
      &v92);
  }
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v96); /*0x1004de0b3*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v96, v31); /*0x1004de0b8*/
  v4 = 9; /*0x1004de0bd*/
  v32 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1); /*0x1004de0cd*/
  if ( !v32 ) /*0x1004de0d5*/
    goto LABEL_82; /*0x1004de0d5*/
  *(_QWORD *)v32 = 0x7061685368747561LL; /*0x1004de0e8*/
  *(_BYTE *)(v32 + 8) = 101; /*0x1004de0ec*/
  v89 = 9; /*0x1004de0f1*/
  v90 = v32; /*0x1004de0fc*/
  v91 = 9; /*0x1004de103*/
  codexmate_lib::core::debug_bundle::auth_shape::h2c97417e240a0b81((__int64)&v96, (__int64)v88); /*0x1004de11c*/
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e( /*0x1004de12f*/
    &v104,
    &v96);
  if ( (_BYTE)v104 == 6 ) /*0x1004de13b*/
  {
    v111 = v105; /*0x1004df099*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004df0bb*/
      "called `Result::unwrap()` on an `Err` valueErrorInvalidUncertainReadable",
      43,
      &v111,
      &off_101964900,
      &off_1019640E8);
  }
  v121 = v107; /*0x1004de148*/
  v120 = __n; /*0x1004de153*/
  v119 = v105; /*0x1004de165*/
  v118 = (__int64)v104; /*0x1004de169*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v111, v86, &v89); /*0x1004de17f*/
  if ( v111 == (__int64 (__fastcall *)())0x8000000000000000LL ) /*0x1004de188*/
  {
    v33 = v112; /*0x1004de18a*/
    v34 = 32 * v114; /*0x1004de192*/
    v103 = *((_QWORD *)v112 + 4 * v114 + 3); /*0x1004de19b*/
    v102 = *((_QWORD *)v112 + 4 * v114 + 2); /*0x1004de1a7*/
    v35 = *((_QWORD *)v112 + 4 * v114); /*0x1004de1ae*/
    v101 = *((_QWORD *)v112 + 4 * v114 + 1); /*0x1004de1b7*/
    v100 = v35; /*0x1004de1be*/
    *(_QWORD *)((char *)v112 + v34 + 24) = v121; /*0x1004de1c9*/
    *(_QWORD *)((char *)v33 + v34 + 16) = v120; /*0x1004de1d2*/
    v36 = v118; /*0x1004de1d7*/
    v37 = v119; /*0x1004de1db*/
    *(_QWORD *)((char *)v33 + v34 + 8) = v119; /*0x1004de1df*/
    *(_QWORD *)((char *)v33 + v34) = v36; /*0x1004de1e4*/
    if ( (_BYTE)v100 != 6 ) /*0x1004de1ef*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v100); /*0x1004de1fc*/
  }
  else
  {
    v110 = v117; /*0x1004de20a*/
    v109 = v116; /*0x1004de215*/
    v108 = v115; /*0x1004de220*/
    v107 = v114; /*0x1004de22b*/
    __n = v113; /*0x1004de236*/
    v105 = v112; /*0x1004de245*/
    v104 = v111; /*0x1004de24c*/
    v95 = v121; /*0x1004de257*/
    v94 = v120; /*0x1004de262*/
    v93 = v119; /*0x1004de271*/
    v92 = v118; /*0x1004de278*/
    v37 = (__int64 (__fastcall *)())&v104; /*0x1004de286*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1004de294*/
      &v100,
      &v104,
      &v92);
  }
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v96); /*0x1004de2a0*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v96, v37); /*0x1004de2a5*/
  v4 = 12; /*0x1004de2aa*/
  v38 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x1004de2ba*/
  if ( !v38 ) /*0x1004de2c2*/
    goto LABEL_82; /*0x1004de2c2*/
  qmemcpy(v38, "catalogShape", 12); /*0x1004de2d5*/
  v89 = 12; /*0x1004de2e1*/
  v90 = (__int64)v38; /*0x1004de2ec*/
  v91 = 12; /*0x1004de2f3*/
  codexmate_lib::core::debug_bundle::catalog_shape::hc93d5544441282d4((__int64)&v96, v88); /*0x1004de30c*/
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e( /*0x1004de31f*/
    &v104,
    &v96);
  if ( (_BYTE)v104 == 6 ) /*0x1004de32b*/
  {
    v111 = v105; /*0x1004df0cc*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004df0ee*/
      "called `Result::unwrap()` on an `Err` valueErrorInvalidUncertainReadable",
      43,
      &v111,
      &off_101964900,
      &off_1019640E8);
  }
  v121 = v107; /*0x1004de338*/
  v120 = __n; /*0x1004de343*/
  v119 = v105; /*0x1004de355*/
  v118 = (__int64)v104; /*0x1004de359*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v111, v86, &v89); /*0x1004de36f*/
  if ( v111 == (__int64 (__fastcall *)())0x8000000000000000LL ) /*0x1004de378*/
  {
    v39 = v112; /*0x1004de37a*/
    v40 = 32 * v114; /*0x1004de382*/
    v103 = *((_QWORD *)v112 + 4 * v114 + 3); /*0x1004de38b*/
    v102 = *((_QWORD *)v112 + 4 * v114 + 2); /*0x1004de397*/
    v41 = *((_QWORD *)v112 + 4 * v114); /*0x1004de39e*/
    v101 = *((_QWORD *)v112 + 4 * v114 + 1); /*0x1004de3a7*/
    v100 = v41; /*0x1004de3ae*/
    *(_QWORD *)((char *)v112 + v40 + 24) = v121; /*0x1004de3b9*/
    *(_QWORD *)((char *)v39 + v40 + 16) = v120; /*0x1004de3c2*/
    v42 = v118; /*0x1004de3c7*/
    v43 = v119; /*0x1004de3cb*/
    *(_QWORD *)((char *)v39 + v40 + 8) = v119; /*0x1004de3cf*/
    *(_QWORD *)((char *)v39 + v40) = v42; /*0x1004de3d4*/
    if ( (_BYTE)v100 != 6 ) /*0x1004de3df*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v100); /*0x1004de3ec*/
  }
  else
  {
    v110 = v117; /*0x1004de3fa*/
    v109 = v116; /*0x1004de405*/
    v108 = v115; /*0x1004de410*/
    v107 = v114; /*0x1004de41b*/
    __n = v113; /*0x1004de426*/
    v105 = v112; /*0x1004de435*/
    v104 = v111; /*0x1004de43c*/
    v95 = v121; /*0x1004de447*/
    v94 = v120; /*0x1004de452*/
    v93 = v119; /*0x1004de461*/
    v92 = v118; /*0x1004de468*/
    v43 = (__int64 (__fastcall *)())&v104; /*0x1004de476*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1004de484*/
      &v100,
      &v104,
      &v92);
  }
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v96); /*0x1004de490*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v96, v43); /*0x1004de495*/
  v4 = 11; /*0x1004de49a*/
  v44 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1); /*0x1004de4aa*/
  if ( !v44 ) /*0x1004de4b2*/
    goto LABEL_82; /*0x1004de4b2*/
  qmemcpy(v44, "threadShape", 11); /*0x1004de4c5*/
  v89 = 11; /*0x1004de4d1*/
  v90 = (__int64)v44; /*0x1004de4dc*/
  v91 = 11; /*0x1004de4e3*/
  codexmate_lib::core::debug_bundle::thread_shape::h10a55c72bc332555((__int64)&v96, (__int64)v88, v19); /*0x1004de4ff*/
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e( /*0x1004de512*/
    &v104,
    &v96);
  if ( (_BYTE)v104 == 6 ) /*0x1004de51e*/
  {
    v111 = v105; /*0x1004df0ff*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004df121*/
      "called `Result::unwrap()` on an `Err` valueErrorInvalidUncertainReadable",
      43,
      &v111,
      &off_101964900,
      &off_1019640E8);
  }
  v121 = v107; /*0x1004de52b*/
  v120 = __n; /*0x1004de536*/
  v119 = v105; /*0x1004de548*/
  v118 = (__int64)v104; /*0x1004de54c*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v111, v86, &v89); /*0x1004de562*/
  if ( v111 == (__int64 (__fastcall *)())0x8000000000000000LL ) /*0x1004de56b*/
  {
    v45 = v112; /*0x1004de56d*/
    v46 = 32 * v114; /*0x1004de575*/
    v103 = *((_QWORD *)v112 + 4 * v114 + 3); /*0x1004de57e*/
    v102 = *((_QWORD *)v112 + 4 * v114 + 2); /*0x1004de58a*/
    v47 = *((_QWORD *)v112 + 4 * v114); /*0x1004de591*/
    v101 = *((_QWORD *)v112 + 4 * v114 + 1); /*0x1004de59a*/
    v100 = v47; /*0x1004de5a1*/
    *(_QWORD *)((char *)v112 + v46 + 24) = v121; /*0x1004de5ac*/
    *(_QWORD *)((char *)v45 + v46 + 16) = v120; /*0x1004de5b5*/
    v48 = v118; /*0x1004de5ba*/
    v49 = v119; /*0x1004de5be*/
    *(_QWORD *)((char *)v45 + v46 + 8) = v119; /*0x1004de5c2*/
    *(_QWORD *)((char *)v45 + v46) = v48; /*0x1004de5c7*/
    if ( (_BYTE)v100 != 6 ) /*0x1004de5d2*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v100); /*0x1004de5df*/
  }
  else
  {
    v110 = v117; /*0x1004de5ed*/
    v109 = v116; /*0x1004de5f8*/
    v108 = v115; /*0x1004de603*/
    v107 = v114; /*0x1004de60e*/
    __n = v113; /*0x1004de619*/
    v105 = v112; /*0x1004de628*/
    v104 = v111; /*0x1004de62f*/
    v95 = v121; /*0x1004de63a*/
    v94 = v120; /*0x1004de645*/
    v93 = v119; /*0x1004de654*/
    v92 = v118; /*0x1004de65b*/
    v49 = (__int64 (__fastcall *)())&v104; /*0x1004de669*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1004de677*/
      &v100,
      &v104,
      &v92);
  }
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v96); /*0x1004de683*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v96, v49); /*0x1004de688*/
  v4 = 19; /*0x1004de68d*/
  v50 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1); /*0x1004de69d*/
  if ( !v50 ) /*0x1004de6a5*/
    goto LABEL_82; /*0x1004de6a5*/
  qmemcpy(v50, "threadCatalogHealth", 19); /*0x1004de6c6*/
  v89 = 19; /*0x1004de6d2*/
  v90 = (__int64)v50; /*0x1004de6dd*/
  v91 = 19; /*0x1004de6e4*/
  codexmate_lib::core::debug_bundle::thread_catalog_health::ha2cff36600023db8((__int64)&v96, (__int64)v88, v19); /*0x1004de700*/
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e( /*0x1004de713*/
    &v104,
    &v96);
  if ( (_BYTE)v104 == 6 ) /*0x1004de71f*/
  {
    v111 = v105; /*0x1004df132*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004df154*/
      "called `Result::unwrap()` on an `Err` valueErrorInvalidUncertainReadable",
      43,
      &v111,
      &off_101964900,
      &off_1019640E8);
  }
  v121 = v107; /*0x1004de72c*/
  v120 = __n; /*0x1004de737*/
  v119 = v105; /*0x1004de749*/
  v118 = (__int64)v104; /*0x1004de74d*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v111, v86, &v89); /*0x1004de763*/
  if ( v111 == (__int64 (__fastcall *)())0x8000000000000000LL ) /*0x1004de76c*/
  {
    v51 = v112; /*0x1004de76e*/
    v52 = 32 * v114; /*0x1004de776*/
    v103 = *((_QWORD *)v112 + 4 * v114 + 3); /*0x1004de77f*/
    v102 = *((_QWORD *)v112 + 4 * v114 + 2); /*0x1004de78b*/
    v53 = *((_QWORD *)v112 + 4 * v114); /*0x1004de792*/
    v101 = *((_QWORD *)v112 + 4 * v114 + 1); /*0x1004de79b*/
    v100 = v53; /*0x1004de7a2*/
    *(_QWORD *)((char *)v112 + v52 + 24) = v121; /*0x1004de7ad*/
    *(_QWORD *)((char *)v51 + v52 + 16) = v120; /*0x1004de7b6*/
    v54 = v118; /*0x1004de7bb*/
    v55 = v119; /*0x1004de7bf*/
    *(_QWORD *)((char *)v51 + v52 + 8) = v119; /*0x1004de7c3*/
    *(_QWORD *)((char *)v51 + v52) = v54; /*0x1004de7c8*/
    if ( (_BYTE)v100 != 6 ) /*0x1004de7d3*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v100); /*0x1004de7e0*/
  }
  else
  {
    v110 = v117; /*0x1004de7ee*/
    v109 = v116; /*0x1004de7f9*/
    v108 = v115; /*0x1004de804*/
    v107 = v114; /*0x1004de80f*/
    __n = v113; /*0x1004de81a*/
    v105 = v112; /*0x1004de829*/
    v104 = v111; /*0x1004de830*/
    v95 = v121; /*0x1004de83b*/
    v94 = v120; /*0x1004de846*/
    v93 = v119; /*0x1004de855*/
    v92 = v118; /*0x1004de85c*/
    v55 = (__int64 (__fastcall *)())&v104; /*0x1004de86a*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1004de878*/
      &v100,
      &v104,
      &v92);
  }
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v96); /*0x1004de884*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v96, v55); /*0x1004de889*/
  v4 = 16; /*0x1004de88e*/
  v56 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1); /*0x1004de89e*/
  if ( !v56 ) /*0x1004de8a6*/
    goto LABEL_82; /*0x1004de8a6*/
  qmemcpy(v56, "globalStateShape", 16); /*0x1004de8c7*/
  v89 = 16; /*0x1004de8ca*/
  v90 = (__int64)v56; /*0x1004de8d5*/
  v91 = 16; /*0x1004de8dc*/
  codexmate_lib::core::debug_bundle::global_state_shape::h37ed77449b4d4089((__int64)&v96, (__int64)v88); /*0x1004de8f5*/
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e( /*0x1004de908*/
    &v104,
    &v96);
  if ( (_BYTE)v104 == 6 ) /*0x1004de914*/
  {
    v111 = v105; /*0x1004df165*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004df187*/
      "called `Result::unwrap()` on an `Err` valueErrorInvalidUncertainReadable",
      43,
      &v111,
      &off_101964900,
      &off_1019640E8);
  }
  v121 = v107; /*0x1004de921*/
  v120 = __n; /*0x1004de92c*/
  v119 = v105; /*0x1004de93e*/
  v118 = (__int64)v104; /*0x1004de942*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v111, v86, &v89); /*0x1004de958*/
  if ( v111 == (__int64 (__fastcall *)())0x8000000000000000LL ) /*0x1004de961*/
  {
    v57 = v112; /*0x1004de963*/
    v58 = 32 * v114; /*0x1004de96b*/
    v103 = *((_QWORD *)v112 + 4 * v114 + 3); /*0x1004de974*/
    v102 = *((_QWORD *)v112 + 4 * v114 + 2); /*0x1004de980*/
    v59 = *((_QWORD *)v112 + 4 * v114); /*0x1004de987*/
    v101 = *((_QWORD *)v112 + 4 * v114 + 1); /*0x1004de990*/
    v100 = v59; /*0x1004de997*/
    *(_QWORD *)((char *)v112 + v58 + 24) = v121; /*0x1004de9a2*/
    *(_QWORD *)((char *)v57 + v58 + 16) = v120; /*0x1004de9ab*/
    v60 = v118; /*0x1004de9b0*/
    v61 = v119; /*0x1004de9b4*/
    *(_QWORD *)((char *)v57 + v58 + 8) = v119; /*0x1004de9b8*/
    *(_QWORD *)((char *)v57 + v58) = v60; /*0x1004de9bd*/
    if ( (_BYTE)v100 != 6 ) /*0x1004de9c8*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v100); /*0x1004de9d5*/
  }
  else
  {
    v110 = v117; /*0x1004de9e3*/
    v109 = v116; /*0x1004de9ee*/
    v108 = v115; /*0x1004de9f9*/
    v107 = v114; /*0x1004dea04*/
    __n = v113; /*0x1004dea0f*/
    v105 = v112; /*0x1004dea1e*/
    v104 = v111; /*0x1004dea25*/
    v95 = v121; /*0x1004dea30*/
    v94 = v120; /*0x1004dea3b*/
    v93 = v119; /*0x1004dea4a*/
    v92 = v118; /*0x1004dea51*/
    v61 = (__int64 (__fastcall *)())&v104; /*0x1004dea5f*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1004dea6d*/
      &v100,
      &v104,
      &v92);
  }
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v96); /*0x1004dea79*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v96, v61); /*0x1004dea7e*/
  v4 = 12; /*0x1004dea83*/
  v62 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x1004dea93*/
  if ( !v62 ) /*0x1004dea9b*/
    goto LABEL_82; /*0x1004dea9b*/
  qmemcpy(v62, "processShape", 12); /*0x1004deaae*/
  v89 = 12; /*0x1004deab9*/
  v90 = (__int64)v62; /*0x1004deac4*/
  v91 = 12; /*0x1004deacb*/
  codexmate_lib::core::debug_bundle::process_shape::h772ce2601531871c((__int64)&v96, (__int64)v88); /*0x1004deae4*/
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e( /*0x1004deaf7*/
    &v104,
    &v96);
  if ( (_BYTE)v104 == 6 ) /*0x1004deb03*/
  {
    v111 = v105; /*0x1004df195*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004df1b7*/
      "called `Result::unwrap()` on an `Err` valueErrorInvalidUncertainReadable",
      43,
      &v111,
      &off_101964900,
      &off_1019640E8);
  }
  v121 = v107; /*0x1004deb10*/
  v120 = __n; /*0x1004deb1b*/
  v119 = v105; /*0x1004deb2d*/
  v118 = (__int64)v104; /*0x1004deb31*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v111, v86, &v89); /*0x1004deb47*/
  if ( v111 == (__int64 (__fastcall *)())0x8000000000000000LL ) /*0x1004deb50*/
  {
    v63 = v112; /*0x1004deb52*/
    v64 = 32 * v114; /*0x1004deb5a*/
    v103 = *((_QWORD *)v112 + 4 * v114 + 3); /*0x1004deb63*/
    v102 = *((_QWORD *)v112 + 4 * v114 + 2); /*0x1004deb6f*/
    v65 = *((_QWORD *)v112 + 4 * v114); /*0x1004deb76*/
    v101 = *((_QWORD *)v112 + 4 * v114 + 1); /*0x1004deb7f*/
    v100 = v65; /*0x1004deb86*/
    *(_QWORD *)((char *)v112 + v64 + 24) = v121; /*0x1004deb91*/
    *(_QWORD *)((char *)v63 + v64 + 16) = v120; /*0x1004deb9a*/
    v66 = v118; /*0x1004deb9f*/
    v67 = v119; /*0x1004deba3*/
    *(_QWORD *)((char *)v63 + v64 + 8) = v119; /*0x1004deba7*/
    *(_QWORD *)((char *)v63 + v64) = v66; /*0x1004debac*/
    if ( (_BYTE)v100 != 6 ) /*0x1004debb7*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v100); /*0x1004debc4*/
  }
  else
  {
    v110 = v117; /*0x1004debd2*/
    v109 = v116; /*0x1004debdd*/
    v108 = v115; /*0x1004debe8*/
    v107 = v114; /*0x1004debf3*/
    __n = v113; /*0x1004debfe*/
    v105 = v112; /*0x1004dec0d*/
    v104 = v111; /*0x1004dec14*/
    v95 = v121; /*0x1004dec1f*/
    v94 = v120; /*0x1004dec2a*/
    v93 = v119; /*0x1004dec39*/
    v92 = v118; /*0x1004dec40*/
    v67 = (__int64 (__fastcall *)())&v104; /*0x1004dec4e*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1004dec5c*/
      &v100,
      &v104,
      &v92);
  }
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v96); /*0x1004dec68*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v96, v67); /*0x1004dec6d*/
  v4 = 10; /*0x1004dec72*/
  v68 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x1004dec82*/
  if ( !v68 ) /*0x1004dec8a*/
LABEL_82:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v4); /*0x1004df1f6*/
  qmemcpy(v68, "invariants", 10); /*0x1004dec9d*/
  v80[0] = 10; /*0x1004deca7*/
  v80[1] = v68; /*0x1004decb2*/
  v80[2] = 10; /*0x1004decb9*/
  v82[0] = 0; /*0x1004decc4*/
  v83 = 0; /*0x1004deccf*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(10, 1); /*0x1004decda*/
  v69 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x1004dece9*/
  if ( !v69 ) /*0x1004decf1*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 10); /*0x1004df207*/
  qmemcpy(v69, "violations", 10); /*0x1004ded04*/
  v89 = 10; /*0x1004ded0d*/
  v90 = (__int64)v69; /*0x1004ded18*/
  v91 = 10; /*0x1004ded1f*/
  serde_core::ser::Serializer::collect_seq::hb589f9abf1e05307(&v104, v88 + 137); /*0x1004ded3f*/
  if ( (_BYTE)v104 == 6 ) /*0x1004ded4b*/
  {
    v111 = v105; /*0x1004df1c5*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1004df1e7*/
      "called `Result::unwrap()` on an `Err` valueErrorInvalidUncertainReadable",
      43,
      &v111,
      &off_101964900,
      &off_1019640E8);
  }
  v99 = v107; /*0x1004ded58*/
  v98 = __n; /*0x1004ded66*/
  v97 = v105; /*0x1004ded7b*/
  v96 = v104; /*0x1004ded82*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v111, v82, &v89); /*0x1004ded9b*/
  if ( v111 == (__int64 (__fastcall *)())0x8000000000000000LL ) /*0x1004deda4*/
  {
    v70 = v112; /*0x1004dedaa*/
    v71 = 32 * v114; /*0x1004dedb2*/
    v103 = *((_QWORD *)v112 + 4 * v114 + 3); /*0x1004dedbb*/
    v102 = *((_QWORD *)v112 + 4 * v114 + 2); /*0x1004dedc7*/
    v72 = *((_QWORD *)v112 + 4 * v114); /*0x1004dedce*/
    v101 = *((_QWORD *)v112 + 4 * v114 + 1); /*0x1004dedd7*/
    v100 = v72; /*0x1004dedde*/
    *(_QWORD *)((char *)v112 + v71 + 24) = v99; /*0x1004dedec*/
    *(_QWORD *)((char *)v70 + v71 + 16) = v98; /*0x1004dedf8*/
    v73 = v96; /*0x1004dedfd*/
    *(_QWORD *)((char *)v70 + v71 + 8) = v97; /*0x1004dee0b*/
    *(_QWORD *)((char *)v70 + v71) = v73; /*0x1004dee10*/
    if ( (_BYTE)v100 != 6 ) /*0x1004dee1b*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v100); /*0x1004dee28*/
  }
  else
  {
    v110 = v117; /*0x1004dee36*/
    v109 = v116; /*0x1004dee41*/
    v108 = v115; /*0x1004dee4c*/
    v107 = v114; /*0x1004dee57*/
    __n = v113; /*0x1004dee62*/
    v105 = v112; /*0x1004dee71*/
    v104 = v111; /*0x1004dee78*/
    v95 = v99; /*0x1004dee86*/
    v94 = v98; /*0x1004dee94*/
    v93 = v97; /*0x1004deea9*/
    v92 = (__int64)v96; /*0x1004deeb0*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1004deecc*/
      &v100,
      &v104,
      &v92);
  }
  v119 = (__int64 (__fastcall *)())v82[0]; /*0x1004deedf*/
  v120 = v82[1]; /*0x1004deee3*/
  v121 = v83; /*0x1004deeee*/
  LOBYTE(v118) = 5; /*0x1004deef2*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v111, v86, v80); /*0x1004def08*/
  if ( v111 == (__int64 (__fastcall *)())0x8000000000000000LL ) /*0x1004def11*/
  {
    v74 = v112; /*0x1004def13*/
    v75 = 32 * v114; /*0x1004def1b*/
    v103 = *((_QWORD *)v112 + 4 * v114 + 3); /*0x1004def24*/
    v102 = *((_QWORD *)v112 + 4 * v114 + 2); /*0x1004def30*/
    v76 = *((_QWORD *)v112 + 4 * v114); /*0x1004def37*/
    v101 = *((_QWORD *)v112 + 4 * v114 + 1); /*0x1004def40*/
    v100 = v76; /*0x1004def47*/
    *(_QWORD *)((char *)v112 + v75 + 24) = v121; /*0x1004def52*/
    *(_QWORD *)((char *)v74 + v75 + 16) = v120; /*0x1004def5b*/
    v77 = v118; /*0x1004def60*/
    *(_QWORD *)((char *)v74 + v75 + 8) = v119; /*0x1004def68*/
    *(_QWORD *)((char *)v74 + v75) = v77; /*0x1004def6d*/
    if ( (_BYTE)v100 != 6 ) /*0x1004def78*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v100); /*0x1004def85*/
  }
  else
  {
    v110 = v117; /*0x1004def93*/
    v109 = v116; /*0x1004def9e*/
    v108 = v115; /*0x1004defa9*/
    v107 = v114; /*0x1004defb4*/
    __n = v113; /*0x1004defbf*/
    v105 = v112; /*0x1004defce*/
    v104 = v111; /*0x1004defd5*/
    v95 = v121; /*0x1004defe0*/
    v94 = v120; /*0x1004defeb*/
    v93 = v119; /*0x1004deffa*/
    v92 = v118; /*0x1004df001*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1004df01d*/
      &v100,
      &v104,
      &v92);
  }
  v78 = v81; /*0x1004df029*/
  *(_QWORD *)(v81 + 24) = v87; /*0x1004df030*/
  result = v86[0]; /*0x1004df034*/
  *(_QWORD *)(v78 + 16) = v86[1]; /*0x1004df042*/
  *(_QWORD *)(v78 + 8) = result; /*0x1004df046*/
  *(_BYTE *)v78 = 5; /*0x1004df04a*/
  return result; /*0x1004df04d*/
}