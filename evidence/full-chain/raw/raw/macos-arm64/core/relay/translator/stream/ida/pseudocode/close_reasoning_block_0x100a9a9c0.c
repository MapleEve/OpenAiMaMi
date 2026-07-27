// __ZN13codexmate_lib4core5relay10translator6stream21ChatToResponsesStream21close_reasoning_block @ 0x100a9a9c0 | 基线 same-set
double __fastcall codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::close_reasoning_block::ha9f203dfc14ebf29(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rcx
  _QWORD *v3; // r13
  size_t v4; // rcx
  __int64 v5; // r15
  _DWORD *v6; // rax
  void *v7; // rax
  __m256i *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  __m256i *v12; // rsi
  void *v13; // rax
  __m256i *v14; // rdi
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdx
  __m256i *v18; // rsi
  void *v19; // rax
  __m256i *v20; // rdi
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rdx
  __m256i *v24; // rsi
  _DWORD *v25; // rax
  __int64 v26; // r14
  __int64 v27; // r13
  __int64 v28; // rax
  __int64 v29; // r15
  __int64 v30; // rdx
  __int64 v31; // r9
  void *v32; // rbx
  size_t v33; // r15
  __int64 v34; // rsi
  __int64 v35; // rsi
  double result; // xmm0_8
  __int64 v37; // r15
  _DWORD *v38; // rax
  __int64 v39; // rax
  __m256i *v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  __m256i *v44; // rsi
  _WORD *v45; // rax
  __int64 v46; // r12
  __int64 v47; // rax
  __int64 v48; // r13
  __m256i *v49; // rdi
  __int64 v50; // rax
  __int64 v51; // rcx
  __int64 v52; // rdx
  __m256i *v53; // rsi
  __int64 v54; // rax
  __int64 v55; // rax
  __m256i *v56; // rdi
  __int64 v57; // rax
  __int64 v58; // rcx
  __int64 v59; // rdx
  __m256i *v60; // rsi
  _DWORD *v61; // rax
  __int64 v62; // rax
  __int64 v63; // rbx
  _DWORD *v64; // rax
  void *v65; // rax
  __m256i *v66; // rdi
  __int64 v67; // rax
  __int64 v68; // rcx
  __int64 v69; // rdx
  __m256i *v70; // rsi
  __int64 v71; // r13
  _DWORD *v72; // rax
  __int64 v73; // rax
  __int64 v74; // rdx
  __m256i *v75; // rdi
  _QWORD *v76; // r13
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rdx
  __m256i *v80; // rsi
  __int64 v81; // r15
  _DWORD *v82; // rax
  void *v83; // rax
  __m256i *v84; // rdi
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rdx
  __m256i *v88; // rsi
  void *v89; // rax
  __m256i *v90; // rdi
  __int64 v91; // rax
  __int64 v92; // rcx
  __int64 v93; // rdx
  __m256i *v94; // rsi
  _DWORD *v95; // rax
  __int64 v96; // rdx
  __int64 v97; // r9
  void *v98; // rbx
  size_t v99; // r15
  size_t v100; // rsi
  __int64 v101; // rdi
  __int64 v102; // rbx
  _QWORD *v103; // r9
  __int64 v104; // rax
  __int64 v105; // rcx
  __int64 v106; // rdx
  __int128 v107; // krA0_16
  _QWORD v108[4]; // [rsp+18h] [rbp-1F8h] BYREF
  void *v109; // [rsp+38h] [rbp-1D8h]
  size_t v110; // [rsp+40h] [rbp-1D0h]
  __int64 v111; // [rsp+48h] [rbp-1C8h]
  void *v112; // [rsp+50h] [rbp-1C0h]
  size_t __n; // [rsp+58h] [rbp-1B8h]
  __int64 v114; // [rsp+60h] [rbp-1B0h]
  __int64 v115; // [rsp+68h] [rbp-1A8h]
  size_t v116; // [rsp+70h] [rbp-1A0h]
  __int64 v117; // [rsp+78h] [rbp-198h]
  _DWORD *v118; // [rsp+80h] [rbp-190h]
  _QWORD *v119; // [rsp+88h] [rbp-188h]
  void *v120; // [rsp+90h] [rbp-180h]
  __int128 v121; // [rsp+98h] [rbp-178h] BYREF
  __int64 v122; // [rsp+A8h] [rbp-168h]
  __int64 v123; // [rsp+B0h] [rbp-160h]
  void *__src; // [rsp+B8h] [rbp-158h]
  _QWORD *v125; // [rsp+C0h] [rbp-150h]
  __int128 v126; // [rsp+C8h] [rbp-148h] BYREF
  __int64 v127; // [rsp+D8h] [rbp-138h]
  __int128 v128; // [rsp+E0h] [rbp-130h] BYREF
  __int64 v129; // [rsp+F0h] [rbp-120h]
  __m256i v130; // [rsp+F8h] [rbp-118h] BYREF
  __m256i v131; // [rsp+118h] [rbp-F8h] BYREF
  __m256i v132; // [rsp+138h] [rbp-D8h] BYREF
  __int64 v133; // [rsp+158h] [rbp-B8h]
  __int64 v134; // [rsp+160h] [rbp-B0h]
  __int64 v135; // [rsp+168h] [rbp-A8h]
  __m256i v136; // [rsp+170h] [rbp-A0h] BYREF
  __int64 v137; // [rsp+190h] [rbp-80h]
  __int64 v138; // [rsp+198h] [rbp-78h]
  __int64 v139; // [rsp+1A0h] [rbp-70h]
  __int64 v140; // [rsp+1A8h] [rbp-68h] BYREF
  void *v141; // [rsp+1B0h] [rbp-60h]
  size_t v142; // [rsp+1B8h] [rbp-58h]
  __int64 v143; // [rsp+1C0h] [rbp-50h]
  __m256i v144[2]; // [rsp+1C8h] [rbp-48h] BYREF

  v2 = a1[15]; /*0x100a9a9de*/
  v125 = a1; /*0x100a9a9e2*/
  a1[15] = 0x8000000000000000LL; /*0x100a9a9e9*/
  v123 = v2; /*0x100a9a9ed*/
  if ( __OFSUB__(-v2, 1) ) /*0x100a9a9f7*/
    return result; /*0x100a9a9fa*/
  v3 = a2; /*0x100a9aa0e*/
  v108[3] = v123; /*0x100a9aa18*/
  v4 = v125[17]; /*0x100a9aa2d*/
  v109 = (void *)v125[16]; /*0x100a9aa34*/
  v110 = v4; /*0x100a9aa3b*/
  v111 = v125[18]; /*0x100a9aa49*/
  v112 = (void *)v125[19]; /*0x100a9aa57*/
  __n = v125[20]; /*0x100a9aa65*/
  v114 = v125[21]; /*0x100a9aa73*/
  *(_QWORD *)&v128 = 0; /*0x100a9aa7a*/
  v129 = 0; /*0x100a9aa85*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100a9aa90*/
  v5 = 4; /*0x100a9aa95*/
  v6 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100a9aaa5*/
  if ( !v6 ) /*0x100a9aaad*/
    goto LABEL_109; /*0x100a9aaad*/
  *v6 = 1701869940; /*0x100a9aab6*/
  v130.i64[0] = 4; /*0x100a9aabc*/
  v130.i64[1] = (__int64)v6; /*0x100a9aac7*/
  v130.i64[2] = 4; /*0x100a9aace*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x100a9aad9*/
  v7 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(36, 1); /*0x100a9aae8*/
  if ( !v7 ) /*0x100a9aaf0*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 36); /*0x100a9c67f*/
  qmemcpy(v7, "response.reasoning_summary_text.done", 36); /*0x100a9ab2a*/
  v144[0].i8[0] = 3; /*0x100a9ab34*/
  v144[0].i64[1] = 36; /*0x100a9ab38*/
  v144[0].i64[2] = (__int64)v7; /*0x100a9ab40*/
  v144[0].i64[3] = 36; /*0x100a9ab44*/
  v8 = &v136; /*0x100a9ab4c*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, &v128, &v130); /*0x100a9ab61*/
  if ( v136.i64[0] == 0x8000000000000000LL ) /*0x100a9ab77*/
  {
    v9 = v136.i64[1]; /*0x100a9ab79*/
    v10 = 32 * v136.i64[3]; /*0x100a9ab87*/
    v143 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3] + 24); /*0x100a9ab90*/
    v142 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3] + 16); /*0x100a9ab99*/
    v11 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3]); /*0x100a9ab9d*/
    v141 = *(void **)(v136.i64[1] + 32 * v136.i64[3] + 8); /*0x100a9aba6*/
    v140 = v11; /*0x100a9abaa*/
    *(_OWORD *)(v136.i64[1] + v10 + 16) = v144[0].i128[1]; /*0x100a9abbb*/
    v12 = (__m256i *)v144[0].i64[1]; /*0x100a9abc4*/
    *(_OWORD *)(v9 + v10) = v144[0].i128[0]; /*0x100a9abcd*/
    if ( (_BYTE)v140 != 6 ) /*0x100a9abd5*/
    {
      v8 = (__m256i *)&v140; /*0x100a9abdb*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v140); /*0x100a9abdf*/
    }
  }
  else
  {
    v135 = v139; /*0x100a9abed*/
    v134 = v138; /*0x100a9abf8*/
    v133 = v137; /*0x100a9ac03*/
    v132 = v136; /*0x100a9ac11*/
    v131 = v144[0]; /*0x100a9ac46*/
    v8 = (__m256i *)&v140; /*0x100a9ac6e*/
    v12 = &v132; /*0x100a9ac72*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9ac80*/
      &v140,
      &v132,
      &v131);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v8, v12); /*0x100a9ac85*/
  v5 = 12; /*0x100a9ac8a*/
  v13 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x100a9ac9a*/
  if ( !v13 ) /*0x100a9aca2*/
    goto LABEL_109; /*0x100a9aca2*/
  qmemcpy(v13, "output_index", 12); /*0x100a9acb2*/
  v130.i64[0] = 12; /*0x100a9acbc*/
  v130.i64[1] = (__int64)v13; /*0x100a9acc7*/
  v130.i64[2] = 12; /*0x100a9acce*/
  v144[0].i8[0] = 2; /*0x100a9acdf*/
  v144[0].i64[1] = 0; /*0x100a9ace3*/
  v115 = (unsigned int)v114; /*0x100a9aceb*/
  v144[0].i64[2] = (unsigned int)v114; /*0x100a9acf2*/
  v14 = &v136; /*0x100a9acf6*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, &v128, &v130); /*0x100a9ad0b*/
  if ( v136.i64[0] == 0x8000000000000000LL ) /*0x100a9ad21*/
  {
    v15 = v136.i64[1]; /*0x100a9ad23*/
    v16 = 32 * v136.i64[3]; /*0x100a9ad31*/
    v143 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3] + 24); /*0x100a9ad3a*/
    v142 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3] + 16); /*0x100a9ad43*/
    v17 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3]); /*0x100a9ad47*/
    v141 = *(void **)(v136.i64[1] + 32 * v136.i64[3] + 8); /*0x100a9ad50*/
    v140 = v17; /*0x100a9ad54*/
    *(_OWORD *)(v136.i64[1] + v16 + 16) = v144[0].i128[1]; /*0x100a9ad65*/
    v18 = (__m256i *)v144[0].i64[1]; /*0x100a9ad6e*/
    *(_OWORD *)(v15 + v16) = v144[0].i128[0]; /*0x100a9ad77*/
    if ( (_BYTE)v140 != 6 ) /*0x100a9ad7f*/
    {
      v14 = (__m256i *)&v140; /*0x100a9ad85*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v140); /*0x100a9ad89*/
    }
  }
  else
  {
    v135 = v139; /*0x100a9ad97*/
    v134 = v138; /*0x100a9ada2*/
    v133 = v137; /*0x100a9adad*/
    v132 = v136; /*0x100a9adbb*/
    v131 = v144[0]; /*0x100a9adf0*/
    v14 = (__m256i *)&v140; /*0x100a9ae18*/
    v18 = &v132; /*0x100a9ae1c*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9ae2a*/
      &v140,
      &v132,
      &v131);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v14, v18); /*0x100a9ae2f*/
  v5 = 13; /*0x100a9ae34*/
  v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x100a9ae44*/
  if ( !v19 ) /*0x100a9ae4c*/
    goto LABEL_109; /*0x100a9ae4c*/
  qmemcpy(v19, "summary_index", 13); /*0x100a9ae6a*/
  v130.i64[0] = 13; /*0x100a9ae6d*/
  v130.i64[1] = (__int64)v19; /*0x100a9ae78*/
  v130.i64[2] = 13; /*0x100a9ae7f*/
  v144[0].i8[0] = 2; /*0x100a9ae8a*/
  *(__int128 *)((char *)v144[0].i128 + 8) = 0u; /*0x100a9ae8e*/
  v20 = &v136; /*0x100a9ae9e*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, &v128, &v130); /*0x100a9aeb3*/
  if ( v136.i64[0] == 0x8000000000000000LL ) /*0x100a9aec9*/
  {
    v21 = v136.i64[1]; /*0x100a9aecb*/
    v22 = 32 * v136.i64[3]; /*0x100a9aed9*/
    v143 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3] + 24); /*0x100a9aee2*/
    v142 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3] + 16); /*0x100a9aeeb*/
    v23 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3]); /*0x100a9aeef*/
    v141 = *(void **)(v136.i64[1] + 32 * v136.i64[3] + 8); /*0x100a9aef8*/
    v140 = v23; /*0x100a9aefc*/
    *(_OWORD *)(v136.i64[1] + v22 + 16) = v144[0].i128[1]; /*0x100a9af0d*/
    v24 = (__m256i *)v144[0].i64[1]; /*0x100a9af16*/
    *(_OWORD *)(v21 + v22) = v144[0].i128[0]; /*0x100a9af1f*/
    if ( (_BYTE)v140 != 6 ) /*0x100a9af27*/
    {
      v20 = (__m256i *)&v140; /*0x100a9af2d*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v140); /*0x100a9af31*/
    }
  }
  else
  {
    v135 = v139; /*0x100a9af3f*/
    v134 = v138; /*0x100a9af4a*/
    v133 = v137; /*0x100a9af55*/
    v132 = v136; /*0x100a9af63*/
    v131 = v144[0]; /*0x100a9af98*/
    v20 = (__m256i *)&v140; /*0x100a9afc0*/
    v24 = &v132; /*0x100a9afc4*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9afd2*/
      &v140,
      &v132,
      &v131);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v20, v24); /*0x100a9afd7*/
  v5 = 4; /*0x100a9afdc*/
  v25 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100a9afec*/
  if ( !v25 ) /*0x100a9aff4*/
LABEL_109:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v5); /*0x100a9c659*/
  *v25 = 1954047348; /*0x100a9affd*/
  v130.i64[0] = 4; /*0x100a9b003*/
  v130.i64[1] = (__int64)v25; /*0x100a9b00e*/
  v130.i64[2] = 4; /*0x100a9b015*/
  v26 = __n; /*0x100a9b020*/
  if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x100a9b02a*/
  {
    v27 = 0; /*0x100a9b02c*/
    goto LABEL_22; /*0x100a9b02c*/
  }
  __src = v112; /*0x100a9b046*/
  v119 = v3; /*0x100a9b04d*/
  if ( __n ) /*0x100a9b054*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x100a9b056*/
    v27 = 1; /*0x100a9b05b*/
    v28 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x100a9b069*/
    if ( !v28 ) /*0x100a9b071*/
LABEL_22:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v27, __n); /*0x100a9b02f*/
    v29 = v28; /*0x100a9b073*/
    v3 = v119; /*0x100a9b076*/
  }
  else
  {
    v29 = 1; /*0x100a9b07f*/
  }
  memcpy((void *)v29, __src, __n); /*0x100a9b092*/
  v144[0].i8[0] = 3; /*0x100a9b097*/
  v144[0].i64[1] = __n; /*0x100a9b09b*/
  v144[0].i64[2] = v29; /*0x100a9b09f*/
  v144[0].i64[3] = __n; /*0x100a9b0a3*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, &v128, &v130); /*0x100a9b0bf*/
  if ( v136.i64[0] == 0x8000000000000000LL ) /*0x100a9b0d5*/
  {
    v143 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3] + 24); /*0x100a9b0ee*/
    v142 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3] + 16); /*0x100a9b0f7*/
    v30 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3]); /*0x100a9b0fb*/
    v141 = *(void **)(v136.i64[1] + 32 * v136.i64[3] + 8); /*0x100a9b104*/
    v140 = v30; /*0x100a9b108*/
    *(__m256i *)(v136.i64[1] + 32 * v136.i64[3]) = v144[0]; /*0x100a9b119*/
    if ( (_BYTE)v140 != 6 ) /*0x100a9b133*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v140); /*0x100a9b13d*/
  }
  else
  {
    v135 = v139; /*0x100a9b14b*/
    v134 = v138; /*0x100a9b156*/
    v133 = v137; /*0x100a9b161*/
    v132 = v136; /*0x100a9b16f*/
    v131 = v144[0]; /*0x100a9b1a4*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9b1de*/
      &v140,
      &v132,
      &v131);
  }
  *(__int128 *)((char *)v136.i128 + 8) = v128; /*0x100a9b1f1*/
  v136.i64[3] = v129; /*0x100a9b206*/
  v136.i8[0] = 5; /*0x100a9b20d*/
  v131.i64[0] = (__int64)"response.reasoning_summary_text.done"; /*0x100a9b21b*/
  v131.i64[1] = 36; /*0x100a9b222*/
  v144[0].i64[0] = (__int64)&v136; /*0x100a9b22d*/
  v132.i64[0] = (__int64)&v131; /*0x100a9b238*/
  v132.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100a9b246*/
  v132.i64[2] = (__int64)v144; /*0x100a9b251*/
  v132.i64[3] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcb50c2f2fdedac0f; /*0x100a9b25f*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v140, &unk_1017C9F28, &v132); /*0x100a9b278*/
  v32 = v141; /*0x100a9b27d*/
  v33 = v142; /*0x100a9b281*/
  v34 = v3[2]; /*0x100a9b289*/
  if ( v142 > *v3 - v34 ) /*0x100a9b293*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v3, v34, v142, 1, 1, v31); /*0x100a9c5d3*/
    v34 = v3[2]; /*0x100a9c5d8*/
  }
  v117 = v3[1]; /*0x100a9b29d*/
  memcpy((void *)(v117 + v34), v32, v33); /*0x100a9b2b1*/
  v116 = v33 + v34; /*0x100a9b2b9*/
  v3[2] = v33 + v34; /*0x100a9b2c0*/
  v35 = v140; /*0x100a9b2c4*/
  if ( v140 ) /*0x100a9b2cb*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v32, v140, 1); /*0x100a9b2d5*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v136); /*0x100a9b2e1*/
  *(_QWORD *)&v121 = 0; /*0x100a9b2e6*/
  v122 = 0; /*0x100a9b2f1*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v136, v35); /*0x100a9b2fc*/
  v37 = 4; /*0x100a9b301*/
  v38 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100a9b311*/
  if ( !v38 ) /*0x100a9b319*/
    goto LABEL_110; /*0x100a9b319*/
  *v38 = 1701869940; /*0x100a9b322*/
  v130.i64[0] = 4; /*0x100a9b328*/
  v130.i64[1] = (__int64)v38; /*0x100a9b333*/
  v130.i64[2] = 4; /*0x100a9b33a*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x100a9b345*/
  v39 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1); /*0x100a9b354*/
  if ( !v39 ) /*0x100a9b35c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9); /*0x100a9c69f*/
  *(_QWORD *)v39 = 0x6E696E6F73616572LL; /*0x100a9b36c*/
  *(_BYTE *)(v39 + 8) = 103; /*0x100a9b36f*/
  v144[0].i8[0] = 3; /*0x100a9b373*/
  v144[0].i64[1] = 9; /*0x100a9b377*/
  v144[0].i64[2] = v39; /*0x100a9b37f*/
  v144[0].i64[3] = 9; /*0x100a9b383*/
  v40 = &v136; /*0x100a9b38b*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, &v121, &v130); /*0x100a9b3a0*/
  if ( v136.i64[0] == 0x8000000000000000LL ) /*0x100a9b3b6*/
  {
    v41 = v136.i64[1]; /*0x100a9b3b8*/
    v42 = 32 * v136.i64[3]; /*0x100a9b3c6*/
    v143 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3] + 24); /*0x100a9b3cf*/
    v142 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3] + 16); /*0x100a9b3d8*/
    v43 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3]); /*0x100a9b3dc*/
    v141 = *(void **)(v136.i64[1] + 32 * v136.i64[3] + 8); /*0x100a9b3e5*/
    v140 = v43; /*0x100a9b3e9*/
    *(_OWORD *)(v136.i64[1] + v42 + 16) = v144[0].i128[1]; /*0x100a9b3fa*/
    v44 = (__m256i *)v144[0].i64[1]; /*0x100a9b403*/
    *(_OWORD *)(v41 + v42) = v144[0].i128[0]; /*0x100a9b40c*/
    if ( (_BYTE)v140 != 6 ) /*0x100a9b414*/
    {
      v40 = (__m256i *)&v140; /*0x100a9b41a*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v140); /*0x100a9b41e*/
    }
  }
  else
  {
    v135 = v139; /*0x100a9b42c*/
    v134 = v138; /*0x100a9b437*/
    v133 = v137; /*0x100a9b442*/
    v132 = v136; /*0x100a9b450*/
    v131 = v144[0]; /*0x100a9b485*/
    v40 = (__m256i *)&v140; /*0x100a9b4ad*/
    v44 = &v132; /*0x100a9b4b1*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9b4bf*/
      &v140,
      &v132,
      &v131);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v40, v44); /*0x100a9b4c4*/
  v37 = 2; /*0x100a9b4c9*/
  v45 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100a9b4d9*/
  if ( !v45 ) /*0x100a9b4e1*/
    goto LABEL_110; /*0x100a9b4e1*/
  *v45 = 25705; /*0x100a9b4ea*/
  v130.i64[0] = 2; /*0x100a9b4ef*/
  v130.i64[1] = (__int64)v45; /*0x100a9b4fa*/
  v130.i64[2] = 2; /*0x100a9b501*/
  if ( (v110 & 0x8000000000000000LL) != 0LL ) /*0x100a9b516*/
  {
    v46 = 0; /*0x100a9b518*/
    goto LABEL_44; /*0x100a9b518*/
  }
  v120 = v109; /*0x100a9b532*/
  if ( v110 ) /*0x100a9b539*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100a9b53b*/
    v46 = 1; /*0x100a9b540*/
    v47 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v110, 1); /*0x100a9b54e*/
    if ( !v47 ) /*0x100a9b556*/
LABEL_44:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v46, v110); /*0x100a9b51b*/
    v48 = v47; /*0x100a9b558*/
  }
  else
  {
    v48 = 1; /*0x100a9b55d*/
  }
  memcpy((void *)v48, v120, v110); /*0x100a9b570*/
  v144[0].i8[0] = 3; /*0x100a9b575*/
  v144[0].i64[1] = v110; /*0x100a9b579*/
  v144[0].i64[2] = v48; /*0x100a9b57d*/
  v144[0].i64[3] = v110; /*0x100a9b581*/
  v49 = &v136; /*0x100a9b585*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, &v121, &v130); /*0x100a9b59a*/
  if ( v136.i64[0] == 0x8000000000000000LL ) /*0x100a9b5b0*/
  {
    v50 = v136.i64[1]; /*0x100a9b5b2*/
    v51 = 32 * v136.i64[3]; /*0x100a9b5c0*/
    v143 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3] + 24); /*0x100a9b5c9*/
    v142 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3] + 16); /*0x100a9b5d2*/
    v52 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3]); /*0x100a9b5d6*/
    v141 = *(void **)(v136.i64[1] + 32 * v136.i64[3] + 8); /*0x100a9b5df*/
    v140 = v52; /*0x100a9b5e3*/
    *(_OWORD *)(v136.i64[1] + v51 + 16) = v144[0].i128[1]; /*0x100a9b5f4*/
    v53 = (__m256i *)v144[0].i64[1]; /*0x100a9b5fd*/
    *(_OWORD *)(v50 + v51) = v144[0].i128[0]; /*0x100a9b606*/
    if ( (_BYTE)v140 != 6 ) /*0x100a9b60e*/
    {
      v49 = (__m256i *)&v140; /*0x100a9b614*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v140); /*0x100a9b618*/
    }
  }
  else
  {
    v135 = v139; /*0x100a9b626*/
    v134 = v138; /*0x100a9b631*/
    v133 = v137; /*0x100a9b63c*/
    v132 = v136; /*0x100a9b64a*/
    v131 = v144[0]; /*0x100a9b67f*/
    v49 = (__m256i *)&v140; /*0x100a9b6a7*/
    v53 = &v132; /*0x100a9b6ab*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9b6b9*/
      &v140,
      &v132,
      &v131);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v49, v53); /*0x100a9b6be*/
  v37 = 6; /*0x100a9b6c3*/
  v54 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100a9b6d3*/
  if ( !v54 ) /*0x100a9b6db*/
    goto LABEL_110; /*0x100a9b6db*/
  *(_WORD *)(v54 + 4) = 29557; /*0x100a9b6e4*/
  *(_DWORD *)v54 = 1952543859; /*0x100a9b6ea*/
  v130.i64[0] = 6; /*0x100a9b6f0*/
  v130.i64[1] = v54; /*0x100a9b6fb*/
  v130.i64[2] = 6; /*0x100a9b702*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1); /*0x100a9b70d*/
  v55 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1); /*0x100a9b71c*/
  if ( !v55 ) /*0x100a9b724*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9); /*0x100a9c6c1*/
  *(_QWORD *)v55 = 0x6574656C706D6F63LL; /*0x100a9b734*/
  *(_BYTE *)(v55 + 8) = 100; /*0x100a9b737*/
  v144[0].i8[0] = 3; /*0x100a9b73b*/
  v144[0].i64[1] = 9; /*0x100a9b73f*/
  v144[0].i64[2] = v55; /*0x100a9b747*/
  v144[0].i64[3] = 9; /*0x100a9b74b*/
  v56 = &v136; /*0x100a9b753*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, &v121, &v130); /*0x100a9b768*/
  if ( v136.i64[0] == 0x8000000000000000LL ) /*0x100a9b77e*/
  {
    v57 = v136.i64[1]; /*0x100a9b780*/
    v58 = 32 * v136.i64[3]; /*0x100a9b78e*/
    v143 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3] + 24); /*0x100a9b797*/
    v142 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3] + 16); /*0x100a9b7a0*/
    v59 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3]); /*0x100a9b7a4*/
    v141 = *(void **)(v136.i64[1] + 32 * v136.i64[3] + 8); /*0x100a9b7ad*/
    v140 = v59; /*0x100a9b7b1*/
    *(_OWORD *)(v136.i64[1] + v58 + 16) = v144[0].i128[1]; /*0x100a9b7c2*/
    v60 = (__m256i *)v144[0].i64[1]; /*0x100a9b7cb*/
    *(_OWORD *)(v57 + v58) = v144[0].i128[0]; /*0x100a9b7d4*/
    if ( (_BYTE)v140 != 6 ) /*0x100a9b7dc*/
    {
      v56 = (__m256i *)&v140; /*0x100a9b7e2*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v140); /*0x100a9b7e6*/
    }
  }
  else
  {
    v135 = v139; /*0x100a9b7f4*/
    v134 = v138; /*0x100a9b7ff*/
    v133 = v137; /*0x100a9b80a*/
    v132 = v136; /*0x100a9b818*/
    v131 = v144[0]; /*0x100a9b84d*/
    v56 = (__m256i *)&v140; /*0x100a9b875*/
    v60 = &v132; /*0x100a9b879*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9b887*/
      &v140,
      &v132,
      &v131);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v56, v60); /*0x100a9b88c*/
  v37 = 7; /*0x100a9b891*/
  v61 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100a9b8a1*/
  if ( !v61 ) /*0x100a9b8a9*/
LABEL_110:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v37); /*0x100a9c66b*/
  *(_DWORD *)((char *)v61 + 3) = 2037539181; /*0x100a9b8af*/
  *v61 = 1835890035; /*0x100a9b8b6*/
  v108[0] = 7; /*0x100a9b8bc*/
  v118 = v61; /*0x100a9b8c7*/
  v108[1] = v61; /*0x100a9b8ce*/
  v108[2] = 7; /*0x100a9b8d5*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1); /*0x100a9b8e0*/
  v62 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8); /*0x100a9b8ef*/
  if ( !v62 ) /*0x100a9b8f7*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32); /*0x100a9c5eb*/
  v63 = v62; /*0x100a9b8fd*/
  *(_QWORD *)&v126 = 0; /*0x100a9b900*/
  v127 = 0; /*0x100a9b90b*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(32, 8); /*0x100a9b916*/
  v64 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100a9b925*/
  if ( !v64 ) /*0x100a9b92d*/
    goto LABEL_114; /*0x100a9b92d*/
  *v64 = 1701869940; /*0x100a9b936*/
  *(_QWORD *)&v128 = 4; /*0x100a9b93c*/
  *((_QWORD *)&v128 + 1) = v64; /*0x100a9b947*/
  v129 = 4; /*0x100a9b94e*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x100a9b959*/
  v65 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x100a9b968*/
  if ( !v65 ) /*0x100a9b970*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 12); /*0x100a9c6d2*/
  qmemcpy(v65, "summary_text", 12); /*0x100a9b980*/
  v144[0].i8[0] = 3; /*0x100a9b98a*/
  v144[0].i64[1] = 12; /*0x100a9b98e*/
  v144[0].i64[2] = (__int64)v65; /*0x100a9b996*/
  v144[0].i64[3] = 12; /*0x100a9b99a*/
  v66 = &v136; /*0x100a9b9a2*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, &v126, &v128); /*0x100a9b9b7*/
  if ( v136.i64[0] == 0x8000000000000000LL ) /*0x100a9b9cd*/
  {
    v67 = v136.i64[1]; /*0x100a9b9cf*/
    v68 = 32 * v136.i64[3]; /*0x100a9b9dd*/
    v143 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3] + 24); /*0x100a9b9e6*/
    v142 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3] + 16); /*0x100a9b9ef*/
    v69 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3]); /*0x100a9b9f3*/
    v141 = *(void **)(v136.i64[1] + 32 * v136.i64[3] + 8); /*0x100a9b9fc*/
    v140 = v69; /*0x100a9ba00*/
    *(_OWORD *)(v136.i64[1] + v68 + 16) = v144[0].i128[1]; /*0x100a9ba11*/
    v70 = (__m256i *)v144[0].i64[1]; /*0x100a9ba1a*/
    *(_OWORD *)(v67 + v68) = v144[0].i128[0]; /*0x100a9ba23*/
    if ( (_BYTE)v140 != 6 ) /*0x100a9ba2b*/
    {
      v66 = (__m256i *)&v140; /*0x100a9ba31*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v140); /*0x100a9ba35*/
    }
  }
  else
  {
    v135 = v139; /*0x100a9ba43*/
    v134 = v138; /*0x100a9ba4e*/
    v133 = v137; /*0x100a9ba59*/
    v132 = v136; /*0x100a9ba67*/
    v131 = v144[0]; /*0x100a9ba9c*/
    v66 = (__m256i *)&v140; /*0x100a9bac4*/
    v70 = &v132; /*0x100a9bac8*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9bad6*/
      &v140,
      &v132,
      &v131);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v66, v70); /*0x100a9badb*/
  v71 = 1; /*0x100a9bae0*/
  v72 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100a9baf0*/
  if ( !v72 ) /*0x100a9baf8*/
LABEL_114:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x100a9c6b0*/
  *v72 = 1954047348; /*0x100a9bb01*/
  *(_QWORD *)&v128 = 4; /*0x100a9bb07*/
  *((_QWORD *)&v128 + 1) = v72; /*0x100a9bb12*/
  v129 = 4; /*0x100a9bb19*/
  if ( v26 ) /*0x100a9bb27*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x100a9bb29*/
    v73 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v26, 1); /*0x100a9bb36*/
    if ( !v73 ) /*0x100a9bb3e*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v26); /*0x100a9c6f2*/
    v71 = v73; /*0x100a9bb44*/
  }
  memcpy((void *)v71, __src, v26); /*0x100a9bb54*/
  v144[0].i8[0] = 3; /*0x100a9bb59*/
  v144[0].i64[1] = v26; /*0x100a9bb5d*/
  v144[0].i64[2] = v71; /*0x100a9bb61*/
  v144[0].i64[3] = v26; /*0x100a9bb65*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, &v126, &v128); /*0x100a9bb7e*/
  if ( v136.i64[0] == 0x8000000000000000LL ) /*0x100a9bb94*/
  {
    v143 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3] + 24); /*0x100a9bbad*/
    v142 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3] + 16); /*0x100a9bbb6*/
    v74 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3]); /*0x100a9bbba*/
    v141 = *(void **)(v136.i64[1] + 32 * v136.i64[3] + 8); /*0x100a9bbc3*/
    v140 = v74; /*0x100a9bbc7*/
    *(__m256i *)(v136.i64[1] + 32 * v136.i64[3]) = v144[0]; /*0x100a9bbd8*/
    if ( (_BYTE)v140 != 6 ) /*0x100a9bbf2*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v140); /*0x100a9bbfc*/
  }
  else
  {
    v135 = v139; /*0x100a9bc0a*/
    v134 = v138; /*0x100a9bc15*/
    v133 = v137; /*0x100a9bc20*/
    v132 = v136; /*0x100a9bc2e*/
    v131 = v144[0]; /*0x100a9bc63*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9bc9d*/
      &v140,
      &v132,
      &v131);
  }
  *(__int128 *)((char *)v132.i128 + 7) = v126; /*0x100a9bcb7*/
  *(__int64 *)((char *)&v132.i64[2] + 7) = v127; /*0x100a9bcc5*/
  *(_BYTE *)v63 = 5; /*0x100a9bccc*/
  *(_QWORD *)(v63 + 24) = *(__int64 *)((char *)&v132.i64[2] + 7); /*0x100a9bcd6*/
  *(_QWORD *)(v63 + 17) = v132.i64[2]; /*0x100a9bce1*/
  *(_OWORD *)(v63 + 1) = v132.i128[0]; /*0x100a9bcf7*/
  v130.i64[1] = 1; /*0x100a9bcfb*/
  v130.i64[2] = v63; /*0x100a9bd06*/
  v130.i64[3] = 1; /*0x100a9bd0d*/
  v130.i8[0] = 4; /*0x100a9bd18*/
  v75 = &v136; /*0x100a9bd1f*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, &v121, v108); /*0x100a9bd34*/
  v76 = v119; /*0x100a9bd4a*/
  if ( v136.i64[0] == 0x8000000000000000LL ) /*0x100a9bd51*/
  {
    v77 = v136.i64[1]; /*0x100a9bd53*/
    v78 = 32 * v136.i64[3]; /*0x100a9bd61*/
    v143 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3] + 24); /*0x100a9bd6a*/
    v142 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3] + 16); /*0x100a9bd73*/
    v79 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3]); /*0x100a9bd77*/
    v141 = *(void **)(v136.i64[1] + 32 * v136.i64[3] + 8); /*0x100a9bd80*/
    v140 = v79; /*0x100a9bd84*/
    *(_OWORD *)(v136.i64[1] + v78 + 16) = v130.i128[1]; /*0x100a9bd9b*/
    v80 = (__m256i *)v130.i64[1]; /*0x100a9bda7*/
    *(_OWORD *)(v77 + v78) = v130.i128[0]; /*0x100a9bdb3*/
    if ( (_BYTE)v140 != 6 ) /*0x100a9bdbb*/
    {
      v75 = (__m256i *)&v140; /*0x100a9bdc1*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v140); /*0x100a9bdc5*/
    }
  }
  else
  {
    v135 = v139; /*0x100a9bdd3*/
    v134 = v138; /*0x100a9bdde*/
    v133 = v137; /*0x100a9bde9*/
    v132 = v136; /*0x100a9bdf7*/
    v131 = v130; /*0x100a9be2f*/
    v75 = (__m256i *)&v140; /*0x100a9be60*/
    v80 = &v132; /*0x100a9be64*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9be72*/
      &v140,
      &v132,
      &v131);
  }
  *(__int128 *)((char *)v130.i128 + 8) = v121; /*0x100a9be85*/
  v130.i64[3] = v122; /*0x100a9be9a*/
  v130.i8[0] = 5; /*0x100a9bea1*/
  *(_QWORD *)&v126 = 0; /*0x100a9bea8*/
  v127 = 0; /*0x100a9beb3*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v75, v80); /*0x100a9bebe*/
  v81 = 4; /*0x100a9bec3*/
  v82 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100a9bed3*/
  if ( !v82 ) /*0x100a9bedb*/
    goto LABEL_112; /*0x100a9bedb*/
  *v82 = 1701869940; /*0x100a9bee4*/
  *(_QWORD *)&v128 = 4; /*0x100a9beea*/
  *((_QWORD *)&v128 + 1) = v82; /*0x100a9bef5*/
  v129 = 4; /*0x100a9befc*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x100a9bf07*/
  v83 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(25, 1); /*0x100a9bf16*/
  if ( !v83 ) /*0x100a9bf1e*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 25); /*0x100a9c6e3*/
  qmemcpy(v83, "response.output_item.done", 25); /*0x100a9bf4a*/
  v144[0].i8[0] = 3; /*0x100a9bf51*/
  v144[0].i64[1] = 25; /*0x100a9bf55*/
  v144[0].i64[2] = (__int64)v83; /*0x100a9bf5d*/
  v144[0].i64[3] = 25; /*0x100a9bf61*/
  v84 = &v136; /*0x100a9bf69*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, &v126, &v128); /*0x100a9bf7e*/
  if ( v136.i64[0] == 0x8000000000000000LL ) /*0x100a9bf94*/
  {
    v85 = v136.i64[1]; /*0x100a9bf96*/
    v86 = 32 * v136.i64[3]; /*0x100a9bfa4*/
    v143 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3] + 24); /*0x100a9bfad*/
    v142 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3] + 16); /*0x100a9bfb6*/
    v87 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3]); /*0x100a9bfba*/
    v141 = *(void **)(v136.i64[1] + 32 * v136.i64[3] + 8); /*0x100a9bfc3*/
    v140 = v87; /*0x100a9bfc7*/
    *(_OWORD *)(v136.i64[1] + v86 + 16) = v144[0].i128[1]; /*0x100a9bfd8*/
    v88 = (__m256i *)v144[0].i64[1]; /*0x100a9bfe1*/
    *(_OWORD *)(v85 + v86) = v144[0].i128[0]; /*0x100a9bfea*/
    if ( (_BYTE)v140 != 6 ) /*0x100a9bff2*/
    {
      v84 = (__m256i *)&v140; /*0x100a9bff8*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v140); /*0x100a9bffc*/
    }
  }
  else
  {
    v135 = v139; /*0x100a9c00a*/
    v134 = v138; /*0x100a9c015*/
    v133 = v137; /*0x100a9c020*/
    v132 = v136; /*0x100a9c02e*/
    v131 = v144[0]; /*0x100a9c063*/
    v84 = (__m256i *)&v140; /*0x100a9c08b*/
    v88 = &v132; /*0x100a9c08f*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9c09d*/
      &v140,
      &v132,
      &v131);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v84, v88); /*0x100a9c0a2*/
  v81 = 12; /*0x100a9c0a7*/
  v89 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x100a9c0b7*/
  if ( !v89 ) /*0x100a9c0bf*/
    goto LABEL_112; /*0x100a9c0bf*/
  qmemcpy(v89, "output_index", 12); /*0x100a9c0cf*/
  *(_QWORD *)&v128 = 12; /*0x100a9c0d9*/
  *((_QWORD *)&v128 + 1) = v89; /*0x100a9c0e4*/
  v129 = 12; /*0x100a9c0eb*/
  v144[0].i8[0] = 2; /*0x100a9c0f6*/
  v144[0].i64[1] = 0; /*0x100a9c0fa*/
  v144[0].i64[2] = v115; /*0x100a9c109*/
  v90 = &v136; /*0x100a9c10d*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, &v126, &v128); /*0x100a9c122*/
  if ( v136.i64[0] == 0x8000000000000000LL ) /*0x100a9c138*/
  {
    v91 = v136.i64[1]; /*0x100a9c13a*/
    v92 = 32 * v136.i64[3]; /*0x100a9c148*/
    v143 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3] + 24); /*0x100a9c151*/
    v142 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3] + 16); /*0x100a9c15a*/
    v93 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3]); /*0x100a9c15e*/
    v141 = *(void **)(v136.i64[1] + 32 * v136.i64[3] + 8); /*0x100a9c167*/
    v140 = v93; /*0x100a9c16b*/
    *(_OWORD *)(v136.i64[1] + v92 + 16) = v144[0].i128[1]; /*0x100a9c17c*/
    v94 = (__m256i *)v144[0].i64[1]; /*0x100a9c185*/
    *(_OWORD *)(v91 + v92) = v144[0].i128[0]; /*0x100a9c18e*/
    if ( (_BYTE)v140 != 6 ) /*0x100a9c196*/
    {
      v90 = (__m256i *)&v140; /*0x100a9c19c*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v140); /*0x100a9c1a0*/
    }
  }
  else
  {
    v135 = v139; /*0x100a9c1ae*/
    v134 = v138; /*0x100a9c1b9*/
    v133 = v137; /*0x100a9c1c4*/
    v132 = v136; /*0x100a9c1d2*/
    v131 = v144[0]; /*0x100a9c207*/
    v90 = (__m256i *)&v140; /*0x100a9c22f*/
    v94 = &v132; /*0x100a9c233*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9c241*/
      &v140,
      &v132,
      &v131);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v90, v94); /*0x100a9c246*/
  v81 = 4; /*0x100a9c24b*/
  v95 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100a9c25b*/
  if ( !v95 ) /*0x100a9c263*/
LABEL_112:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v81); /*0x100a9c68e*/
  *v95 = 1835365481; /*0x100a9c26c*/
  *(_QWORD *)&v128 = 4; /*0x100a9c272*/
  *((_QWORD *)&v128 + 1) = v95; /*0x100a9c27d*/
  v129 = 4; /*0x100a9c284*/
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e( /*0x100a9c29d*/
    &v132,
    &v130);
  if ( v132.i8[0] == 6 ) /*0x100a9c2a9*/
  {
    v136.i64[0] = v132.i64[1]; /*0x100a9c5fc*/
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, &v136, &off_101974C58, &off_1019742E8); /*0x100a9c624*/
  }
  v144[0] = v132; /*0x100a9c2b6*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, &v126, &v128); /*0x100a9c2f3*/
  if ( v136.i64[0] == 0x8000000000000000LL ) /*0x100a9c309*/
  {
    v143 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3] + 24); /*0x100a9c322*/
    v142 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3] + 16); /*0x100a9c32b*/
    v96 = *(_QWORD *)(v136.i64[1] + 32 * v136.i64[3]); /*0x100a9c32f*/
    v141 = *(void **)(v136.i64[1] + 32 * v136.i64[3] + 8); /*0x100a9c338*/
    v140 = v96; /*0x100a9c33c*/
    *(__m256i *)(v136.i64[1] + 32 * v136.i64[3]) = v144[0]; /*0x100a9c34d*/
    if ( (_BYTE)v140 != 6 ) /*0x100a9c367*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v140); /*0x100a9c371*/
  }
  else
  {
    v135 = v139; /*0x100a9c37f*/
    v134 = v138; /*0x100a9c38a*/
    v133 = v137; /*0x100a9c395*/
    v132 = v136; /*0x100a9c3a3*/
    v131 = v144[0]; /*0x100a9c3d8*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9c412*/
      &v140,
      &v132,
      &v131);
  }
  *(__int128 *)((char *)v136.i128 + 8) = v126; /*0x100a9c425*/
  v136.i64[3] = v127; /*0x100a9c43a*/
  v136.i8[0] = 5; /*0x100a9c441*/
  v131.i64[0] = (__int64)"response.output_item.doneresponse.function_call_arguments.done"; /*0x100a9c44f*/
  v131.i64[1] = 25; /*0x100a9c456*/
  v144[0].i64[0] = (__int64)&v136; /*0x100a9c461*/
  v132.i64[0] = (__int64)&v131; /*0x100a9c46c*/
  v132.i64[1] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100a9c47a*/
  v132.i64[2] = (__int64)v144; /*0x100a9c485*/
  v132.i64[3] = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcb50c2f2fdedac0f; /*0x100a9c493*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v140, &unk_1017C9F28, &v132); /*0x100a9c4ac*/
  v98 = v141; /*0x100a9c4b1*/
  v99 = v142; /*0x100a9c4b5*/
  v100 = v116; /*0x100a9c4bd*/
  if ( v142 > *v76 - v116 ) /*0x100a9c4ca*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(v76, v116, v142, 1, 1, v97); /*0x100a9c63f*/
    v101 = v76[1]; /*0x100a9c644*/
    v100 = v76[2]; /*0x100a9c648*/
  }
  else
  {
    v101 = v117; /*0x100a9c4d0*/
  }
  memcpy((void *)(v100 + v101), v98, v99); /*0x100a9c4e3*/
  v76[2] = v99 + v100; /*0x100a9c4eb*/
  if ( v140 ) /*0x100a9c4f6*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v98, v140, 1); /*0x100a9c500*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v136); /*0x100a9c50c*/
  v102 = v125[10]; /*0x100a9c518*/
  if ( v102 == v125[8] ) /*0x100a9c520*/
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(v125 + 8); /*0x100a9c52d*/
  v103 = v125; /*0x100a9c532*/
  v104 = v125[9]; /*0x100a9c539*/
  v105 = 32 * v102; /*0x100a9c540*/
  v106 = v130.i64[0]; /*0x100a9c544*/
  v107 = *(__int128 *)((char *)v130.i128 + 8); /*0x100a9c552*/
  *(_QWORD *)(v104 + v105 + 24) = v130.i64[3]; /*0x100a9c560*/
  *(_OWORD *)(v104 + v105 + 8) = v107; /*0x100a9c56a*/
  *(_QWORD *)(v104 + v105) = v106; /*0x100a9c56f*/
  v103[10] = v102 + 1; /*0x100a9c576*/
  if ( v123 ) /*0x100a9c582*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v120, v123, 1); /*0x100a9c597*/
  if ( v111 ) /*0x100a9c5a6*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v111, 1); /*0x100a9c5b8*/
  return result; /*0x100a9a9fc*/
}