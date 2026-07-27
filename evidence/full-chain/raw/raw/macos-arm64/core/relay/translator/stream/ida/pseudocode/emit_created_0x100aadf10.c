// __ZN13codexmate_lib4core5relay10translator6stream32AnthropicDirectToResponsesStream12emit_created @ 0x100aadf10 | 基线 same-set
double __fastcall codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::emit_created::hc26f89a9f2216241(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // r14
  __int64 v3; // r15
  _WORD *v4; // rax
  signed __int64 v5; // r15
  __int64 v6; // r14
  const void *v7; // r13
  __int64 v8; // rax
  __int64 v9; // rbx
  void **v10; // rdi
  char *v11; // rax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rdx
  void **v15; // rsi
  __int64 v16; // rax
  _QWORD *v17; // rax
  void **v18; // rdi
  char *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rdx
  __int64 v22; // rdx
  void **v23; // rsi
  void *v24; // rax
  unsigned __int64 v25; // rax
  void **v26; // rdi
  char *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rdx
  __int64 v30; // rdx
  void **v31; // rsi
  __int64 v32; // rax
  void *v33; // rax
  void **v34; // rdi
  char *v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rdx
  void **v39; // rsi
  __int64 v40; // rax
  signed __int64 v41; // r15
  __int64 v42; // r14
  const void *v43; // r13
  __int64 v44; // rax
  __int64 v45; // rbx
  void **v46; // rdi
  char *v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rdx
  void **v51; // rsi
  __int64 v52; // rax
  void **v53; // rdi
  char *v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rdx
  void **v58; // rsi
  __int64 v59; // r12
  _DWORD *v60; // rax
  void *v61; // rax
  void **v62; // rdi
  char *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rdx
  __int64 v66; // rdx
  void **v67; // rsi
  _QWORD *v68; // rax
  char *v69; // rax
  __int64 v70; // rcx
  __int64 v71; // rdx
  __int64 v72; // rdx
  _QWORD *v73; // r14
  __int64 v74; // r12
  _DWORD *v75; // rax
  void *v76; // rax
  void **v77; // rdi
  char *v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rdx
  void **v82; // rsi
  _QWORD *v83; // rax
  char *v84; // rax
  __int64 v85; // rcx
  __int64 v86; // rdx
  __int64 v87; // rdx
  __int64 v88; // r9
  void *v89; // r14
  size_t v90; // r15
  size_t v91; // r12
  __int64 v92; // rax
  __int64 v96; // [rsp+10h] [rbp-160h] BYREF
  __int64 v97; // [rsp+18h] [rbp-158h]
  size_t v98; // [rsp+20h] [rbp-150h]
  void *v99; // [rsp+28h] [rbp-148h] BYREF
  size_t v100; // [rsp+30h] [rbp-140h]
  __int64 v101; // [rsp+38h] [rbp-138h]
  __int64 v102; // [rsp+40h] [rbp-130h] BYREF
  _WORD *v103; // [rsp+48h] [rbp-128h]
  __int64 v104; // [rsp+50h] [rbp-120h]
  __int64 v105; // [rsp+58h] [rbp-118h]
  __int64 v106; // [rsp+60h] [rbp-110h] BYREF
  _QWORD *v107; // [rsp+68h] [rbp-108h]
  __int64 v108; // [rsp+70h] [rbp-100h]
  __int64 v109; // [rsp+78h] [rbp-F8h] BYREF
  __int64 v110; // [rsp+80h] [rbp-F0h]
  __int64 v111; // [rsp+88h] [rbp-E8h]
  __int64 v112; // [rsp+90h] [rbp-E0h]
  __int64 v113; // [rsp+98h] [rbp-D8h] BYREF
  void *v114; // [rsp+A0h] [rbp-D0h]
  size_t v115; // [rsp+A8h] [rbp-C8h]
  __int64 v116; // [rsp+B0h] [rbp-C0h]
  __int64 v117; // [rsp+B8h] [rbp-B8h]
  __int64 v118; // [rsp+C0h] [rbp-B0h]
  __int64 v119; // [rsp+C8h] [rbp-A8h]
  void *v120; // [rsp+D0h] [rbp-A0h] BYREF
  void *__src; // [rsp+D8h] [rbp-98h]
  size_t __n; // [rsp+E0h] [rbp-90h]
  __int64 v123; // [rsp+E8h] [rbp-88h]
  __int64 v124; // [rsp+F0h] [rbp-80h]
  __int64 v125; // [rsp+F8h] [rbp-78h]
  __int64 v126; // [rsp+100h] [rbp-70h]
  __int64 v127; // [rsp+108h] [rbp-68h] BYREF
  __int64 v128; // [rsp+110h] [rbp-60h]
  __int64 v129; // [rsp+118h] [rbp-58h]
  __int64 v130; // [rsp+120h] [rbp-50h]
  __int64 v131; // [rsp+128h] [rbp-48h]
  __int64 v132; // [rsp+130h] [rbp-40h]
  __int64 v133; // [rsp+138h] [rbp-38h]
  __int64 v134; // [rsp+140h] [rbp-30h]

  v2 = (_QWORD *)a2; /*0x100aadf24*/
  *(_BYTE *)(a2 + 364) = 1; /*0x100aadf2e*/
  v106 = 0; /*0x100aadf35*/
  v108 = 0; /*0x100aadf40*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100aadf4b*/
  v3 = 2; /*0x100aadf50*/
  v4 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100aadf60*/
  if ( !v4 ) /*0x100aadf68*/
    goto LABEL_78; /*0x100aadf68*/
  *v4 = 25705; /*0x100aadf71*/
  v102 = 2; /*0x100aadf76*/
  v103 = v4; /*0x100aadf81*/
  v104 = 2; /*0x100aadf88*/
  v5 = *(_QWORD *)(a2 + 40); /*0x100aadf93*/
  if ( v5 < 0 ) /*0x100aadf9a*/
  {
    v6 = 0; /*0x100aadf9c*/
    goto LABEL_4; /*0x100aadf9c*/
  }
  v7 = *(const void **)(a2 + 32); /*0x100aadfaf*/
  if ( v5 ) /*0x100aadfba*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100aadfbc*/
    v6 = 1; /*0x100aadfc1*/
    v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1); /*0x100aadfcf*/
    if ( !v8 ) /*0x100aadfd7*/
LABEL_4:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6, v5); /*0x100aadf9f*/
    v9 = v8; /*0x100aadfd9*/
    v2 = (_QWORD *)a2; /*0x100aadfdc*/
  }
  else
  {
    v9 = 1; /*0x100aadfe5*/
  }
  memcpy((void *)v9, v7, v5); /*0x100aadff3*/
  LOBYTE(v131) = 3; /*0x100aadff8*/
  v132 = v5; /*0x100aadffc*/
  v133 = v9; /*0x100aae000*/
  v134 = v5; /*0x100aae004*/
  v10 = &v120; /*0x100aae008*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v120, &v106, &v102); /*0x100aae01d*/
  if ( __OFSUB__(0, v120) ) /*0x100aae024*/
  {
    v11 = (char *)__src; /*0x100aae02d*/
    v12 = 32 * v123; /*0x100aae03b*/
    v130 = *((_QWORD *)__src + 4 * v123 + 3); /*0x100aae044*/
    v129 = *((_QWORD *)__src + 4 * v123 + 2); /*0x100aae04d*/
    v13 = *((_QWORD *)__src + 4 * v123); /*0x100aae051*/
    v128 = *((_QWORD *)__src + 4 * v123 + 1); /*0x100aae05a*/
    v127 = v13; /*0x100aae05e*/
    *(_QWORD *)((char *)__src + v12 + 24) = v134; /*0x100aae066*/
    *(_QWORD *)&v11[v12 + 16] = v133; /*0x100aae06f*/
    v14 = v131; /*0x100aae074*/
    v15 = (void **)v132; /*0x100aae078*/
    *(_QWORD *)&v11[v12 + 8] = v132; /*0x100aae07c*/
    *(_QWORD *)&v11[v12] = v14; /*0x100aae081*/
    if ( (_BYTE)v127 != 6 ) /*0x100aae089*/
    {
      v10 = (void **)&v127; /*0x100aae08f*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v127); /*0x100aae093*/
    }
  }
  else
  {
    v119 = v126; /*0x100aae0a1*/
    v118 = v125; /*0x100aae0ac*/
    v117 = v124; /*0x100aae0b7*/
    v116 = v123; /*0x100aae0c5*/
    v115 = __n; /*0x100aae0d3*/
    v114 = __src; /*0x100aae0e8*/
    v113 = (__int64)v120; /*0x100aae0ef*/
    v112 = v134; /*0x100aae0fa*/
    v111 = v133; /*0x100aae105*/
    v110 = v132; /*0x100aae114*/
    v109 = v131; /*0x100aae11b*/
    v10 = (void **)&v127; /*0x100aae122*/
    v15 = (void **)&v113; /*0x100aae126*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aae134*/
      &v127,
      &v113,
      &v109);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10, v15); /*0x100aae139*/
  v3 = 6; /*0x100aae13e*/
  v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100aae14e*/
  if ( !v16 ) /*0x100aae156*/
    goto LABEL_78; /*0x100aae156*/
  *(_WORD *)(v16 + 4) = 29795; /*0x100aae15f*/
  *(_DWORD *)v16 = 1701470831; /*0x100aae165*/
  v102 = 6; /*0x100aae16b*/
  v103 = (_WORD *)v16; /*0x100aae176*/
  v104 = 6; /*0x100aae17d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1); /*0x100aae188*/
  v17 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x100aae197*/
  if ( !v17 ) /*0x100aae19f*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8); /*0x100aaf37b*/
  *v17 = 0x65736E6F70736572LL; /*0x100aae1af*/
  LOBYTE(v131) = 3; /*0x100aae1b2*/
  v132 = 8; /*0x100aae1b6*/
  v133 = (__int64)v17; /*0x100aae1be*/
  v134 = 8; /*0x100aae1c2*/
  v18 = &v120; /*0x100aae1ca*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v120, &v106, &v102); /*0x100aae1df*/
  if ( v120 == (void *)0x8000000000000000LL ) /*0x100aae1f5*/
  {
    v19 = (char *)__src; /*0x100aae1f7*/
    v20 = 32 * v123; /*0x100aae205*/
    v130 = *((_QWORD *)__src + 4 * v123 + 3); /*0x100aae20e*/
    v129 = *((_QWORD *)__src + 4 * v123 + 2); /*0x100aae217*/
    v21 = *((_QWORD *)__src + 4 * v123); /*0x100aae21b*/
    v128 = *((_QWORD *)__src + 4 * v123 + 1); /*0x100aae224*/
    v127 = v21; /*0x100aae228*/
    *(_QWORD *)((char *)__src + v20 + 24) = v134; /*0x100aae230*/
    *(_QWORD *)&v19[v20 + 16] = v133; /*0x100aae239*/
    v22 = v131; /*0x100aae23e*/
    v23 = (void **)v132; /*0x100aae242*/
    *(_QWORD *)&v19[v20 + 8] = v132; /*0x100aae246*/
    *(_QWORD *)&v19[v20] = v22; /*0x100aae24b*/
    if ( (_BYTE)v127 != 6 ) /*0x100aae253*/
    {
      v18 = (void **)&v127; /*0x100aae259*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v127); /*0x100aae25d*/
    }
  }
  else
  {
    v119 = v126; /*0x100aae26b*/
    v118 = v125; /*0x100aae276*/
    v117 = v124; /*0x100aae281*/
    v116 = v123; /*0x100aae28f*/
    v115 = __n; /*0x100aae29d*/
    v114 = __src; /*0x100aae2b2*/
    v113 = (__int64)v120; /*0x100aae2b9*/
    v112 = v134; /*0x100aae2c4*/
    v111 = v133; /*0x100aae2cf*/
    v110 = v132; /*0x100aae2de*/
    v109 = v131; /*0x100aae2e5*/
    v18 = (void **)&v127; /*0x100aae2ec*/
    v23 = (void **)&v113; /*0x100aae2f0*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aae2fe*/
      &v127,
      &v113,
      &v109);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v18, v23); /*0x100aae303*/
  v3 = 10; /*0x100aae308*/
  v24 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x100aae318*/
  if ( !v24 ) /*0x100aae320*/
    goto LABEL_78; /*0x100aae320*/
  qmemcpy(v24, "created_at", 10); /*0x100aae330*/
  v102 = 10; /*0x100aae339*/
  v103 = v24; /*0x100aae344*/
  v104 = 10; /*0x100aae34b*/
  v25 = v2[41]; /*0x100aae356*/
  LOBYTE(v131) = 2; /*0x100aae364*/
  v132 = v25 >> 63; /*0x100aae368*/
  v133 = v25; /*0x100aae36c*/
  v26 = &v120; /*0x100aae370*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v120, &v106, &v102); /*0x100aae385*/
  if ( v120 == (void *)0x8000000000000000LL ) /*0x100aae391*/
  {
    v27 = (char *)__src; /*0x100aae393*/
    v28 = 32 * v123; /*0x100aae3a1*/
    v130 = *((_QWORD *)__src + 4 * v123 + 3); /*0x100aae3aa*/
    v129 = *((_QWORD *)__src + 4 * v123 + 2); /*0x100aae3b3*/
    v29 = *((_QWORD *)__src + 4 * v123); /*0x100aae3b7*/
    v128 = *((_QWORD *)__src + 4 * v123 + 1); /*0x100aae3c0*/
    v127 = v29; /*0x100aae3c4*/
    *(_QWORD *)((char *)__src + v28 + 24) = v134; /*0x100aae3cc*/
    *(_QWORD *)&v27[v28 + 16] = v133; /*0x100aae3d5*/
    v30 = v131; /*0x100aae3da*/
    v31 = (void **)v132; /*0x100aae3de*/
    *(_QWORD *)&v27[v28 + 8] = v132; /*0x100aae3e2*/
    *(_QWORD *)&v27[v28] = v30; /*0x100aae3e7*/
    if ( (_BYTE)v127 != 6 ) /*0x100aae3ef*/
    {
      v26 = (void **)&v127; /*0x100aae3f5*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v127); /*0x100aae3f9*/
    }
  }
  else
  {
    v119 = v126; /*0x100aae407*/
    v118 = v125; /*0x100aae412*/
    v117 = v124; /*0x100aae41d*/
    v116 = v123; /*0x100aae42b*/
    v115 = __n; /*0x100aae439*/
    v114 = __src; /*0x100aae44e*/
    v113 = (__int64)v120; /*0x100aae455*/
    v112 = v134; /*0x100aae460*/
    v111 = v133; /*0x100aae46b*/
    v110 = v132; /*0x100aae47a*/
    v109 = v131; /*0x100aae481*/
    v26 = (void **)&v127; /*0x100aae488*/
    v31 = (void **)&v113; /*0x100aae48c*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aae49a*/
      &v127,
      &v113,
      &v109);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v26, v31); /*0x100aae49f*/
  v3 = 6; /*0x100aae4a4*/
  v32 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100aae4b4*/
  if ( !v32 ) /*0x100aae4bc*/
    goto LABEL_78; /*0x100aae4bc*/
  *(_WORD *)(v32 + 4) = 29557; /*0x100aae4c5*/
  *(_DWORD *)v32 = 1952543859; /*0x100aae4cb*/
  v102 = 6; /*0x100aae4d1*/
  v103 = (_WORD *)v32; /*0x100aae4dc*/
  v104 = 6; /*0x100aae4e3*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1); /*0x100aae4ee*/
  v33 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1); /*0x100aae4fd*/
  if ( !v33 ) /*0x100aae505*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 11); /*0x100aaf38c*/
  qmemcpy(v33, "in_progress", 11); /*0x100aae515*/
  LOBYTE(v131) = 3; /*0x100aae51f*/
  v132 = 11; /*0x100aae523*/
  v133 = (__int64)v33; /*0x100aae52b*/
  v134 = 11; /*0x100aae52f*/
  v34 = &v120; /*0x100aae537*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v120, &v106, &v102); /*0x100aae54c*/
  if ( v120 == (void *)0x8000000000000000LL ) /*0x100aae558*/
  {
    v35 = (char *)__src; /*0x100aae55a*/
    v36 = 32 * v123; /*0x100aae568*/
    v130 = *((_QWORD *)__src + 4 * v123 + 3); /*0x100aae571*/
    v129 = *((_QWORD *)__src + 4 * v123 + 2); /*0x100aae57a*/
    v37 = *((_QWORD *)__src + 4 * v123); /*0x100aae57e*/
    v128 = *((_QWORD *)__src + 4 * v123 + 1); /*0x100aae587*/
    v127 = v37; /*0x100aae58b*/
    *(_QWORD *)((char *)__src + v36 + 24) = v134; /*0x100aae593*/
    *(_QWORD *)&v35[v36 + 16] = v133; /*0x100aae59c*/
    v38 = v131; /*0x100aae5a1*/
    v39 = (void **)v132; /*0x100aae5a5*/
    *(_QWORD *)&v35[v36 + 8] = v132; /*0x100aae5a9*/
    *(_QWORD *)&v35[v36] = v38; /*0x100aae5ae*/
    if ( (_BYTE)v127 != 6 ) /*0x100aae5b6*/
    {
      v34 = (void **)&v127; /*0x100aae5bc*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v127); /*0x100aae5c0*/
    }
  }
  else
  {
    v119 = v126; /*0x100aae5ce*/
    v118 = v125; /*0x100aae5d9*/
    v117 = v124; /*0x100aae5e4*/
    v116 = v123; /*0x100aae5f2*/
    v115 = __n; /*0x100aae600*/
    v114 = __src; /*0x100aae615*/
    v113 = (__int64)v120; /*0x100aae61c*/
    v112 = v134; /*0x100aae627*/
    v111 = v133; /*0x100aae632*/
    v110 = v132; /*0x100aae641*/
    v109 = v131; /*0x100aae648*/
    v34 = (void **)&v127; /*0x100aae64f*/
    v39 = (void **)&v113; /*0x100aae653*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aae661*/
      &v127,
      &v113,
      &v109);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v34, v39); /*0x100aae666*/
  v3 = 5; /*0x100aae66b*/
  v40 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100aae67b*/
  if ( !v40 ) /*0x100aae683*/
    goto LABEL_78; /*0x100aae683*/
  *(_BYTE *)(v40 + 4) = 108; /*0x100aae68c*/
  *(_DWORD *)v40 = 1701080941; /*0x100aae690*/
  v102 = 5; /*0x100aae696*/
  v103 = (_WORD *)v40; /*0x100aae6a1*/
  v104 = 5; /*0x100aae6a8*/
  v41 = v2[2]; /*0x100aae6b3*/
  if ( v41 < 0 ) /*0x100aae6ba*/
  {
    v42 = 0; /*0x100aae6bc*/
    goto LABEL_33; /*0x100aae6bc*/
  }
  v43 = (const void *)v2[1]; /*0x100aae6cf*/
  if ( v41 ) /*0x100aae6d3*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x100aae6d5*/
    v42 = 1; /*0x100aae6da*/
    v44 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v41, 1); /*0x100aae6e8*/
    if ( !v44 ) /*0x100aae6f0*/
LABEL_33:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v42, v41); /*0x100aae6bf*/
    v45 = v44; /*0x100aae6f2*/
    v2 = (_QWORD *)a2; /*0x100aae6f5*/
  }
  else
  {
    v45 = 1; /*0x100aae6fe*/
  }
  memcpy((void *)v45, v43, v41); /*0x100aae70c*/
  LOBYTE(v131) = 3; /*0x100aae711*/
  v132 = v41; /*0x100aae715*/
  v133 = v45; /*0x100aae719*/
  v134 = v41; /*0x100aae71d*/
  v46 = &v120; /*0x100aae721*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v120, &v106, &v102); /*0x100aae736*/
  if ( v120 == (void *)0x8000000000000000LL ) /*0x100aae756*/
  {
    v47 = (char *)__src; /*0x100aae758*/
    v48 = 32 * v123; /*0x100aae766*/
    v130 = *((_QWORD *)__src + 4 * v123 + 3); /*0x100aae76f*/
    v129 = *((_QWORD *)__src + 4 * v123 + 2); /*0x100aae778*/
    v49 = *((_QWORD *)__src + 4 * v123); /*0x100aae77c*/
    v128 = *((_QWORD *)__src + 4 * v123 + 1); /*0x100aae785*/
    v127 = v49; /*0x100aae789*/
    *(_QWORD *)((char *)__src + v48 + 24) = v134; /*0x100aae791*/
    *(_QWORD *)&v47[v48 + 16] = v133; /*0x100aae79a*/
    v50 = v131; /*0x100aae79f*/
    v51 = (void **)v132; /*0x100aae7a3*/
    *(_QWORD *)&v47[v48 + 8] = v132; /*0x100aae7a7*/
    *(_QWORD *)&v47[v48] = v50; /*0x100aae7ac*/
    if ( (_BYTE)v127 != 6 ) /*0x100aae7b4*/
    {
      v46 = (void **)&v127; /*0x100aae7ba*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v127); /*0x100aae7be*/
    }
  }
  else
  {
    v119 = v126; /*0x100aae7cc*/
    v118 = v125; /*0x100aae7d7*/
    v117 = v124; /*0x100aae7e2*/
    v116 = v123; /*0x100aae7f0*/
    v115 = __n; /*0x100aae7fe*/
    v114 = __src; /*0x100aae813*/
    v113 = (__int64)v120; /*0x100aae81a*/
    v112 = v134; /*0x100aae825*/
    v111 = v133; /*0x100aae830*/
    v110 = v132; /*0x100aae83f*/
    v109 = v131; /*0x100aae846*/
    v46 = (void **)&v127; /*0x100aae84d*/
    v51 = (void **)&v113; /*0x100aae851*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aae85f*/
      &v127,
      &v113,
      &v109);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v46, v51); /*0x100aae864*/
  v3 = 6; /*0x100aae869*/
  v52 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100aae879*/
  if ( !v52 ) /*0x100aae881*/
LABEL_78:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v3); /*0x100aaf36a*/
  *(_WORD *)(v52 + 4) = 29813; /*0x100aae887*/
  *(_DWORD *)v52 = 1886680431; /*0x100aae88d*/
  v102 = 6; /*0x100aae893*/
  v103 = (_WORD *)v52; /*0x100aae89e*/
  v104 = 6; /*0x100aae8a5*/
  v132 = 0; /*0x100aae8b0*/
  v133 = 8; /*0x100aae8b8*/
  v134 = 0; /*0x100aae8c0*/
  LOBYTE(v131) = 4; /*0x100aae8c8*/
  v53 = &v120; /*0x100aae8cc*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v120, &v106, &v102); /*0x100aae8e1*/
  if ( v120 == (void *)0x8000000000000000LL ) /*0x100aae8ed*/
  {
    v54 = (char *)__src; /*0x100aae8ef*/
    v55 = 32 * v123; /*0x100aae8fd*/
    v130 = *((_QWORD *)__src + 4 * v123 + 3); /*0x100aae906*/
    v129 = *((_QWORD *)__src + 4 * v123 + 2); /*0x100aae90f*/
    v56 = *((_QWORD *)__src + 4 * v123); /*0x100aae913*/
    v128 = *((_QWORD *)__src + 4 * v123 + 1); /*0x100aae91c*/
    v127 = v56; /*0x100aae920*/
    *(_QWORD *)((char *)__src + v55 + 24) = v134; /*0x100aae928*/
    *(_QWORD *)&v54[v55 + 16] = v133; /*0x100aae931*/
    v57 = v131; /*0x100aae936*/
    v58 = (void **)v132; /*0x100aae93a*/
    *(_QWORD *)&v54[v55 + 8] = v132; /*0x100aae93e*/
    *(_QWORD *)&v54[v55] = v57; /*0x100aae943*/
    if ( (_BYTE)v127 != 6 ) /*0x100aae94b*/
    {
      v53 = (void **)&v127; /*0x100aae951*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v127); /*0x100aae955*/
    }
  }
  else
  {
    v119 = v126; /*0x100aae963*/
    v118 = v125; /*0x100aae96e*/
    v117 = v124; /*0x100aae979*/
    v116 = v123; /*0x100aae987*/
    v115 = __n; /*0x100aae995*/
    v114 = __src; /*0x100aae9aa*/
    v113 = (__int64)v120; /*0x100aae9b1*/
    v112 = v134; /*0x100aae9bc*/
    v111 = v133; /*0x100aae9c7*/
    v110 = v132; /*0x100aae9d6*/
    v109 = v131; /*0x100aae9dd*/
    v53 = (void **)&v127; /*0x100aae9e4*/
    v58 = (void **)&v113; /*0x100aae9e8*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aae9f6*/
      &v127,
      &v113,
      &v109);
  }
  v103 = (_WORD *)v106; /*0x100aaea09*/
  v104 = (__int64)v107; /*0x100aaea10*/
  v105 = v108; /*0x100aaea1e*/
  LOBYTE(v102) = 5; /*0x100aaea25*/
  v99 = nullptr; /*0x100aaea2c*/
  v101 = 0; /*0x100aaea37*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v53, v58); /*0x100aaea42*/
  v59 = 4; /*0x100aaea47*/
  v60 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100aaea57*/
  if ( !v60 ) /*0x100aaea5f*/
    goto LABEL_81; /*0x100aaea5f*/
  *v60 = 1701869940; /*0x100aaea68*/
  v106 = 4; /*0x100aaea6e*/
  v107 = v60; /*0x100aaea79*/
  v108 = 4; /*0x100aaea80*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x100aaea8b*/
  v61 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1); /*0x100aaea9a*/
  if ( !v61 ) /*0x100aaeaa2*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 16); /*0x100aaf3bb*/
  qmemcpy(v61, "response.created", 16); /*0x100aaeab6*/
  LOBYTE(v131) = 3; /*0x100aaeab9*/
  v132 = 16; /*0x100aaeabd*/
  v133 = (__int64)v61; /*0x100aaeac5*/
  v134 = 16; /*0x100aaeac9*/
  v62 = &v120; /*0x100aaead1*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v120, &v99, &v106); /*0x100aaeae6*/
  if ( v120 == (void *)0x8000000000000000LL ) /*0x100aaeaf2*/
  {
    v63 = (char *)__src; /*0x100aaeaf4*/
    v64 = 32 * v123; /*0x100aaeb02*/
    v130 = *((_QWORD *)__src + 4 * v123 + 3); /*0x100aaeb0b*/
    v129 = *((_QWORD *)__src + 4 * v123 + 2); /*0x100aaeb14*/
    v65 = *((_QWORD *)__src + 4 * v123); /*0x100aaeb18*/
    v128 = *((_QWORD *)__src + 4 * v123 + 1); /*0x100aaeb21*/
    v127 = v65; /*0x100aaeb25*/
    *(_QWORD *)((char *)__src + v64 + 24) = v134; /*0x100aaeb2d*/
    *(_QWORD *)&v63[v64 + 16] = v133; /*0x100aaeb36*/
    v66 = v131; /*0x100aaeb3b*/
    v67 = (void **)v132; /*0x100aaeb3f*/
    *(_QWORD *)&v63[v64 + 8] = v132; /*0x100aaeb43*/
    *(_QWORD *)&v63[v64] = v66; /*0x100aaeb48*/
    if ( (_BYTE)v127 != 6 ) /*0x100aaeb50*/
    {
      v62 = (void **)&v127; /*0x100aaeb56*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v127); /*0x100aaeb5a*/
    }
  }
  else
  {
    v119 = v126; /*0x100aaeb68*/
    v118 = v125; /*0x100aaeb73*/
    v117 = v124; /*0x100aaeb7e*/
    v116 = v123; /*0x100aaeb8c*/
    v115 = __n; /*0x100aaeb9a*/
    v114 = __src; /*0x100aaebaf*/
    v113 = (__int64)v120; /*0x100aaebb6*/
    v112 = v134; /*0x100aaebc1*/
    v111 = v133; /*0x100aaebcc*/
    v110 = v132; /*0x100aaebdb*/
    v109 = v131; /*0x100aaebe2*/
    v62 = (void **)&v127; /*0x100aaebe9*/
    v67 = (void **)&v113; /*0x100aaebed*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aaebfb*/
      &v127,
      &v113,
      &v109);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v62, v67); /*0x100aaec00*/
  v59 = 8; /*0x100aaec05*/
  v68 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x100aaec15*/
  if ( !v68 ) /*0x100aaec1d*/
LABEL_81:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v59); /*0x100aaf39b*/
  *v68 = 0x65736E6F70736572LL; /*0x100aaec26*/
  v106 = 8; /*0x100aaec29*/
  v107 = v68; /*0x100aaec34*/
  v108 = 8; /*0x100aaec3b*/
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e( /*0x100aaec54*/
    &v113,
    &v102);
  if ( (_BYTE)v113 == 6 ) /*0x100aaec60*/
  {
    v120 = v114; /*0x100aaf2ce*/
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, &v120, &off_101974C58, &off_101974498); /*0x100aaf2f6*/
  }
  v134 = v116; /*0x100aaec6d*/
  v133 = v115; /*0x100aaec78*/
  v132 = (__int64)v114; /*0x100aaec8a*/
  v131 = v113; /*0x100aaec8e*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v120, &v99, &v106); /*0x100aaeca7*/
  if ( v120 == (void *)0x8000000000000000LL ) /*0x100aaecb3*/
  {
    v69 = (char *)__src; /*0x100aaecb5*/
    v70 = 32 * v123; /*0x100aaecc3*/
    v130 = *((_QWORD *)__src + 4 * v123 + 3); /*0x100aaeccc*/
    v129 = *((_QWORD *)__src + 4 * v123 + 2); /*0x100aaecd5*/
    v71 = *((_QWORD *)__src + 4 * v123); /*0x100aaecd9*/
    v128 = *((_QWORD *)__src + 4 * v123 + 1); /*0x100aaece2*/
    v127 = v71; /*0x100aaece6*/
    *(_QWORD *)((char *)__src + v70 + 24) = v134; /*0x100aaecee*/
    *(_QWORD *)&v69[v70 + 16] = v133; /*0x100aaecf7*/
    v72 = v131; /*0x100aaecfc*/
    *(_QWORD *)&v69[v70 + 8] = v132; /*0x100aaed04*/
    *(_QWORD *)&v69[v70] = v72; /*0x100aaed09*/
    if ( (_BYTE)v127 != 6 ) /*0x100aaed11*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v127); /*0x100aaed1b*/
  }
  else
  {
    v119 = v126; /*0x100aaed29*/
    v118 = v125; /*0x100aaed34*/
    v117 = v124; /*0x100aaed3f*/
    v116 = v123; /*0x100aaed4d*/
    v115 = __n; /*0x100aaed5b*/
    v114 = __src; /*0x100aaed70*/
    v113 = (__int64)v120; /*0x100aaed77*/
    v112 = v134; /*0x100aaed82*/
    v111 = v133; /*0x100aaed8d*/
    v110 = v132; /*0x100aaed9c*/
    v109 = v131; /*0x100aaeda3*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aaedbc*/
      &v127,
      &v113,
      &v109);
  }
  v73 = v2 + 44; /*0x100aaedc1*/
  v114 = v99; /*0x100aaedd6*/
  v115 = v100; /*0x100aaeddd*/
  v116 = v101; /*0x100aaedeb*/
  LOBYTE(v113) = 5; /*0x100aaedf2*/
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h58d84150b89f409c( /*0x100aaee16*/
    &v96,
    v73,
    &unk_101674A40,
    16,
    &v113);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v113); /*0x100aaee22*/
  v99 = nullptr; /*0x100aaee27*/
  v101 = 0; /*0x100aaee32*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v113, v73); /*0x100aaee3d*/
  v74 = 4; /*0x100aaee42*/
  v75 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100aaee52*/
  if ( !v75 ) /*0x100aaee5a*/
    goto LABEL_82; /*0x100aaee5a*/
  *v75 = 1701869940; /*0x100aaee63*/
  v106 = 4; /*0x100aaee69*/
  v107 = v75; /*0x100aaee74*/
  v108 = 4; /*0x100aaee7b*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x100aaee86*/
  v76 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(20, 1); /*0x100aaee95*/
  if ( !v76 ) /*0x100aaee9d*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 20); /*0x100aaf3cc*/
  qmemcpy(v76, "response.in_progress", 20); /*0x100aaeeb1*/
  LOBYTE(v131) = 3; /*0x100aaeebb*/
  v132 = 20; /*0x100aaeebf*/
  v133 = (__int64)v76; /*0x100aaeec7*/
  v134 = 20; /*0x100aaeecb*/
  v77 = &v120; /*0x100aaeed3*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v120, &v99, &v106); /*0x100aaeee8*/
  if ( v120 == (void *)0x8000000000000000LL ) /*0x100aaeef4*/
  {
    v78 = (char *)__src; /*0x100aaeef6*/
    v79 = 32 * v123; /*0x100aaef04*/
    v130 = *((_QWORD *)__src + 4 * v123 + 3); /*0x100aaef0d*/
    v129 = *((_QWORD *)__src + 4 * v123 + 2); /*0x100aaef16*/
    v80 = *((_QWORD *)__src + 4 * v123); /*0x100aaef1a*/
    v128 = *((_QWORD *)__src + 4 * v123 + 1); /*0x100aaef23*/
    v127 = v80; /*0x100aaef27*/
    *(_QWORD *)((char *)__src + v79 + 24) = v134; /*0x100aaef2f*/
    *(_QWORD *)&v78[v79 + 16] = v133; /*0x100aaef38*/
    v81 = v131; /*0x100aaef3d*/
    v82 = (void **)v132; /*0x100aaef41*/
    *(_QWORD *)&v78[v79 + 8] = v132; /*0x100aaef45*/
    *(_QWORD *)&v78[v79] = v81; /*0x100aaef4a*/
    if ( (_BYTE)v127 != 6 ) /*0x100aaef52*/
    {
      v77 = (void **)&v127; /*0x100aaef58*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v127); /*0x100aaef5c*/
    }
  }
  else
  {
    v119 = v126; /*0x100aaef6a*/
    v118 = v125; /*0x100aaef75*/
    v117 = v124; /*0x100aaef80*/
    v116 = v123; /*0x100aaef8e*/
    v115 = __n; /*0x100aaef9c*/
    v114 = __src; /*0x100aaefb1*/
    v113 = (__int64)v120; /*0x100aaefb8*/
    v112 = v134; /*0x100aaefc3*/
    v111 = v133; /*0x100aaefce*/
    v110 = v132; /*0x100aaefdd*/
    v109 = v131; /*0x100aaefe4*/
    v77 = (void **)&v127; /*0x100aaefeb*/
    v82 = (void **)&v113; /*0x100aaefef*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aaeffd*/
      &v127,
      &v113,
      &v109);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v77, v82); /*0x100aaf002*/
  v74 = 8; /*0x100aaf007*/
  v83 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x100aaf017*/
  if ( !v83 ) /*0x100aaf01f*/
LABEL_82:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v74); /*0x100aaf3aa*/
  *v83 = 0x65736E6F70736572LL; /*0x100aaf028*/
  v106 = 8; /*0x100aaf02b*/
  v107 = v83; /*0x100aaf036*/
  v108 = 8; /*0x100aaf03d*/
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e( /*0x100aaf056*/
    &v113,
    &v102);
  if ( (_BYTE)v113 == 6 ) /*0x100aaf062*/
  {
    v120 = v114; /*0x100aaf307*/
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, &v120, &off_101974C58, &off_1019744B0); /*0x100aaf32f*/
  }
  v134 = v116; /*0x100aaf06f*/
  v133 = v115; /*0x100aaf07a*/
  v132 = (__int64)v114; /*0x100aaf08c*/
  v131 = v113; /*0x100aaf090*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v120, &v99, &v106); /*0x100aaf0a9*/
  if ( v120 == (void *)0x8000000000000000LL ) /*0x100aaf0b5*/
  {
    v84 = (char *)__src; /*0x100aaf0b7*/
    v85 = 32 * v123; /*0x100aaf0c5*/
    v130 = *((_QWORD *)__src + 4 * v123 + 3); /*0x100aaf0ce*/
    v129 = *((_QWORD *)__src + 4 * v123 + 2); /*0x100aaf0d7*/
    v86 = *((_QWORD *)__src + 4 * v123); /*0x100aaf0db*/
    v128 = *((_QWORD *)__src + 4 * v123 + 1); /*0x100aaf0e4*/
    v127 = v86; /*0x100aaf0e8*/
    *(_QWORD *)((char *)__src + v85 + 24) = v134; /*0x100aaf0f0*/
    *(_QWORD *)&v84[v85 + 16] = v133; /*0x100aaf0f9*/
    v87 = v131; /*0x100aaf0fe*/
    *(_QWORD *)&v84[v85 + 8] = v132; /*0x100aaf106*/
    *(_QWORD *)&v84[v85] = v87; /*0x100aaf10b*/
    if ( (_BYTE)v127 != 6 ) /*0x100aaf113*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v127); /*0x100aaf11d*/
  }
  else
  {
    v119 = v126; /*0x100aaf12b*/
    v118 = v125; /*0x100aaf136*/
    v117 = v124; /*0x100aaf141*/
    v116 = v123; /*0x100aaf14f*/
    v115 = __n; /*0x100aaf15d*/
    v114 = __src; /*0x100aaf172*/
    v113 = (__int64)v120; /*0x100aaf179*/
    v112 = v134; /*0x100aaf184*/
    v111 = v133; /*0x100aaf18f*/
    v110 = v132; /*0x100aaf19e*/
    v109 = v131; /*0x100aaf1a5*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aaf1be*/
      &v127,
      &v113,
      &v109);
  }
  v114 = v99; /*0x100aaf1d1*/
  v115 = v100; /*0x100aaf1d8*/
  v116 = v101; /*0x100aaf1e6*/
  LOBYTE(v113) = 5; /*0x100aaf1ed*/
  codexmate_lib::core::relay::translator::stream::AnthropicDirectToResponsesStream::responses_event::h58d84150b89f409c( /*0x100aaf211*/
    &v120,
    v73,
    "response.in_progress",
    20,
    &v113);
  v89 = __src; /*0x100aaf216*/
  v90 = __n; /*0x100aaf21d*/
  v91 = v98; /*0x100aaf22b*/
  if ( __n > v96 - v98 ) /*0x100aaf238*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v96, v98, __n, 1, 1, v88); /*0x100aaf351*/
    v91 = v98; /*0x100aaf356*/
  }
  memcpy((void *)(v91 + v97), v89, v90); /*0x100aaf24e*/
  v98 = v90 + v91; /*0x100aaf256*/
  if ( v120 ) /*0x100aaf267*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v89, v120, 1); /*0x100aaf271*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v113); /*0x100aaf27d*/
  a1[2] = v98; /*0x100aaf290*/
  v92 = v96; /*0x100aaf294*/
  a1[1] = v97; /*0x100aaf2a2*/
  *a1 = v92; /*0x100aaf2a6*/
  return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v102); /*0x100aaf2b5*/
}