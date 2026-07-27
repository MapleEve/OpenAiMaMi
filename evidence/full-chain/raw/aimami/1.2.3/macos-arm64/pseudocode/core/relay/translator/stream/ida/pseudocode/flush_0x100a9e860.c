// __ZN13codexmate_lib4core5relay10translator6stream21ChatToResponsesStream5flush @ 0x100a9e860 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::flush::h38a984e37508801f(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // r12
  __int64 v5; // rsi
  __int64 v6; // rdi
  __int64 v7; // rax
  _DWORD *v8; // rax
  __int64 v9; // r14
  _WORD *v10; // rax
  signed __int64 v11; // r14
  __int64 v12; // r12
  const void *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // r15
  const char ***v16; // rdi
  __int64 (__fastcall *v17)(); // rax
  __int64 v18; // rcx
  __int64 v19; // rdx
  const char **v20; // rdx
  const char ***v21; // rsi
  __int64 v22; // rax
  _QWORD *v23; // rax
  const char ***v24; // rdi
  __int64 (__fastcall *v25)(); // rax
  __int64 v26; // rcx
  __int64 v27; // rdx
  const char **v28; // rdx
  const char ***v29; // rsi
  void *v30; // rax
  unsigned __int64 v31; // rax
  const char ***v32; // rdi
  __int64 (__fastcall *v33)(); // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  const char **v36; // rdx
  const char ***v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rax
  const char ***v40; // rdi
  __int64 (__fastcall *v41)(); // rax
  __int64 v42; // rcx
  __int64 v43; // rdx
  const char **v44; // rdx
  const char ***v45; // rsi
  __int64 v46; // rax
  signed __int64 v47; // r14
  __int64 v48; // r12
  const void *v49; // rbx
  __int64 v50; // rax
  __int64 v51; // r15
  const char ***v52; // rdi
  __int64 (__fastcall *v53)(); // rax
  __int64 v54; // rcx
  __int64 v55; // rdx
  const char **v56; // rdx
  const char ***v57; // rsi
  __int64 v58; // rax
  const char ***v59; // rdi
  __int64 (__fastcall *v60)(); // rax
  __int64 v61; // rcx
  __int64 v62; // rdx
  const char **v63; // rdx
  __int64 v64; // rsi
  __int64 v65; // r14
  void *v66; // rax
  unsigned __int64 v67; // rax
  const char ***v68; // rdi
  __int64 (__fastcall *v69)(); // rax
  __int64 v70; // rcx
  __int64 v71; // rdx
  const char **v72; // rdx
  const char ***v73; // rsi
  void *v74; // rax
  unsigned __int64 v75; // rax
  const char ***v76; // rdi
  __int64 (__fastcall *v77)(); // rax
  __int64 v78; // rcx
  __int64 v79; // rdx
  const char **v80; // rdx
  const char ***v81; // rsi
  void *v82; // rax
  unsigned __int64 v83; // rax
  __int64 (__fastcall *v84)(); // rax
  __int64 v85; // rcx
  __int64 v86; // rdx
  const char **v87; // rdx
  const char **v88; // rax
  __int64 v89; // rbx
  _DWORD *v90; // rax
  void *v91; // rax
  const char ***v92; // rdi
  __int64 (__fastcall *v93)(); // rax
  __int64 v94; // rcx
  __int64 v95; // rdx
  const char **v96; // rdx
  const char ***v97; // rsi
  _QWORD *v98; // rax
  __int64 (__fastcall *v99)(); // rax
  __int64 v100; // rcx
  __int64 v101; // rdx
  const char **v102; // rdx
  __int64 v103; // r9
  void *v104; // r13
  size_t v105; // r14
  size_t v106; // rbx
  __int64 v107; // rax
  __int64 v108; // [rsp+0h] [rbp-180h]
  _QWORD *v109; // [rsp+8h] [rbp-178h]
  __int64 v110; // [rsp+10h] [rbp-170h]
  _DWORD *v111; // [rsp+18h] [rbp-168h]
  __int64 (__fastcall *v112)(); // [rsp+20h] [rbp-160h] BYREF
  const char ***v113; // [rsp+28h] [rbp-158h]
  __int64 (__fastcall *v114)(); // [rsp+30h] [rbp-150h]
  __int64 v115; // [rsp+38h] [rbp-148h] BYREF
  __int64 v116; // [rsp+40h] [rbp-140h]
  size_t v117; // [rsp+48h] [rbp-138h]
  __int64 v118; // [rsp+50h] [rbp-130h] BYREF
  _WORD *v119; // [rsp+58h] [rbp-128h]
  __int64 v120; // [rsp+60h] [rbp-120h]
  __int64 v121; // [rsp+68h] [rbp-118h]
  __int64 v122; // [rsp+70h] [rbp-110h] BYREF
  _QWORD *v123; // [rsp+78h] [rbp-108h]
  __int64 v124; // [rsp+80h] [rbp-100h]
  const char *v125; // [rsp+88h] [rbp-F8h] BYREF
  __int64 v126; // [rsp+90h] [rbp-F0h]
  _QWORD *v127; // [rsp+98h] [rbp-E8h]
  __int64 v128; // [rsp+A0h] [rbp-E0h]
  const char **v129; // [rsp+A8h] [rbp-D8h] BYREF
  __int64 (__fastcall *v130)(); // [rsp+B0h] [rbp-D0h]
  const char ***v131; // [rsp+B8h] [rbp-C8h]
  __int64 (__fastcall *v132)(); // [rsp+C0h] [rbp-C0h]
  __int64 v133; // [rsp+C8h] [rbp-B8h]
  __int64 v134; // [rsp+D0h] [rbp-B0h]
  __int64 v135; // [rsp+D8h] [rbp-A8h]
  const char **v136; // [rsp+E0h] [rbp-A0h] BYREF
  __int64 (__fastcall *v137)(); // [rsp+E8h] [rbp-98h]
  const char ***v138; // [rsp+F0h] [rbp-90h]
  __int64 (__fastcall *v139)(); // [rsp+F8h] [rbp-88h]
  __int64 v140; // [rsp+100h] [rbp-80h]
  __int64 v141; // [rsp+108h] [rbp-78h]
  __int64 v142; // [rsp+110h] [rbp-70h]
  __int64 v143; // [rsp+118h] [rbp-68h] BYREF
  void *__src; // [rsp+120h] [rbp-60h]
  size_t __n; // [rsp+128h] [rbp-58h]
  __int64 v146; // [rsp+130h] [rbp-50h]
  const char **v147; // [rsp+138h] [rbp-48h] BYREF
  __int64 v148; // [rsp+140h] [rbp-40h]
  _QWORD *v149; // [rsp+148h] [rbp-38h]
  __int64 v150; // [rsp+150h] [rbp-30h]

  v2 = a1; /*0x100a9e874*/
  if ( *(_BYTE *)(a2 + 429) ) /*0x100a9e877*/
  {
    *a1 = 0; /*0x100a9e880*/
    a1[1] = 1; /*0x100a9e888*/
    a1[2] = 0; /*0x100a9e891*/
    return v2; /*0x100a9e891*/
  }
  v115 = 0; /*0x100a9e8b2*/
  v116 = 1; /*0x100a9e8bd*/
  v117 = 0; /*0x100a9e8c8*/
  codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::ensure_created::h50fd5f7945935c66(a2, &v115); /*0x100a9e8dd*/
  codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::flush_inline_think_at_boundary::ha5d2a72723807855( /*0x100a9e8ec*/
    a2,
    &v115);
  codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::close_reasoning_block::ha9f203dfc14ebf29( /*0x100a9e8fb*/
    (_QWORD *)a2,
    &v115);
  codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::close_text_block::h24b24176cdd772a0( /*0x100a9e90a*/
    (_QWORD *)a2,
    &v115);
  v5 = (__int64)&v115; /*0x100a9e90f*/
  v6 = a2; /*0x100a9e916*/
  codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::close_tool_blocks::h7cf5a4d679327df2( /*0x100a9e919*/
    (_QWORD *)a2,
    &v115);
  v7 = *(_QWORD *)(a2 + 232); /*0x100a9e928*/
  *(_QWORD *)(a2 + 232) = 0x8000000000000000LL; /*0x100a9e92f*/
  v110 = v7; /*0x100a9e936*/
  if ( __OFSUB__(-v7, 1) ) /*0x100a9e93d*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, &v115); /*0x100a9e942*/
    v110 = 4; /*0x100a9e94c*/
    v6 = 4; /*0x100a9e953*/
    v5 = 1; /*0x100a9e958*/
    v8 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100a9e95d*/
    if ( !v8 ) /*0x100a9e965*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x100aa0064*/
    v111 = v8; /*0x100a9e96b*/
    *v8 = 1886352499; /*0x100a9e972*/
  }
  else
  {
    v111 = *(_DWORD **)(a2 + 240); /*0x100a9e981*/
  }
  v122 = 0; /*0x100a9e988*/
  v124 = 0; /*0x100a9e993*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v6, v5); /*0x100a9e99e*/
  v9 = 2; /*0x100a9e9a3*/
  v10 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100a9e9b3*/
  if ( !v10 ) /*0x100a9e9bb*/
    goto LABEL_95; /*0x100a9e9bb*/
  *v10 = 25705; /*0x100a9e9c4*/
  v118 = 2; /*0x100a9e9c9*/
  v119 = v10; /*0x100a9e9d4*/
  v120 = 2; /*0x100a9e9db*/
  v11 = *(_QWORD *)(a2 + 56); /*0x100a9e9e6*/
  if ( v11 < 0 ) /*0x100a9e9ed*/
  {
    v12 = 0; /*0x100a9e9ef*/
    goto LABEL_11; /*0x100a9e9ef*/
  }
  v108 = a2; /*0x100a9ea02*/
  v13 = *(const void **)(a2 + 48); /*0x100a9ea09*/
  v109 = v2; /*0x100a9ea0d*/
  if ( v11 ) /*0x100a9ea14*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100a9ea16*/
    v12 = 1; /*0x100a9ea1b*/
    v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v11, 1); /*0x100a9ea29*/
    if ( !v14 ) /*0x100a9ea31*/
LABEL_11:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v12, v11); /*0x100a9e9f2*/
    v15 = v14; /*0x100a9ea33*/
    v2 = v109; /*0x100a9ea36*/
  }
  else
  {
    v15 = 1; /*0x100a9ea3f*/
  }
  memcpy((void *)v15, v13, v11); /*0x100a9ea4e*/
  LOBYTE(v147) = 3; /*0x100a9ea53*/
  v148 = v11; /*0x100a9ea57*/
  v149 = (_QWORD *)v15; /*0x100a9ea5b*/
  v150 = v11; /*0x100a9ea5f*/
  v16 = &v136; /*0x100a9ea63*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, &v122, &v118); /*0x100a9ea78*/
  if ( v136 == (const char **)0x8000000000000000LL ) /*0x100a9ea95*/
  {
    v17 = v137; /*0x100a9ea97*/
    v18 = 32LL * (_QWORD)v139; /*0x100a9eaa5*/
    v146 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 3); /*0x100a9eaae*/
    __n = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 2); /*0x100a9eab7*/
    v19 = *((_QWORD *)v137 + 4 * (_QWORD)v139); /*0x100a9eabb*/
    __src = *((void **)v137 + 4 * (_QWORD)v139 + 1); /*0x100a9eac4*/
    v143 = v19; /*0x100a9eac8*/
    *(_QWORD *)((char *)v137 + v18 + 24) = v150; /*0x100a9ead0*/
    *(_QWORD *)((char *)v17 + v18 + 16) = v149; /*0x100a9ead9*/
    v20 = v147; /*0x100a9eade*/
    v21 = (const char ***)v148; /*0x100a9eae2*/
    *(_QWORD *)((char *)v17 + v18 + 8) = v148; /*0x100a9eae6*/
    *(_QWORD *)((char *)v17 + v18) = v20; /*0x100a9eaeb*/
    if ( (_BYTE)v143 != 6 ) /*0x100a9eaf3*/
    {
      v16 = (const char ***)&v143; /*0x100a9eaf9*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v143); /*0x100a9eafd*/
    }
  }
  else
  {
    v135 = v142; /*0x100a9eb0b*/
    v134 = v141; /*0x100a9eb16*/
    v133 = v140; /*0x100a9eb21*/
    v132 = v139; /*0x100a9eb2f*/
    v131 = v138; /*0x100a9eb3d*/
    v130 = v137; /*0x100a9eb52*/
    v129 = v136; /*0x100a9eb59*/
    v128 = v150; /*0x100a9eb64*/
    v127 = v149; /*0x100a9eb6f*/
    v126 = v148; /*0x100a9eb7e*/
    v125 = (const char *)v147; /*0x100a9eb85*/
    v16 = (const char ***)&v143; /*0x100a9eb8c*/
    v21 = &v129; /*0x100a9eb90*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9eb9e*/
      &v143,
      &v129,
      &v125);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v16, v21); /*0x100a9eba3*/
  v9 = 6; /*0x100a9eba8*/
  v22 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100a9ebb8*/
  if ( !v22 ) /*0x100a9ebc0*/
    goto LABEL_95; /*0x100a9ebc0*/
  *(_WORD *)(v22 + 4) = 29795; /*0x100a9ebc9*/
  *(_DWORD *)v22 = 1701470831; /*0x100a9ebcf*/
  v118 = 6; /*0x100a9ebd5*/
  v119 = (_WORD *)v22; /*0x100a9ebe0*/
  v120 = 6; /*0x100a9ebe7*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1); /*0x100a9ebf2*/
  v23 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x100a9ec01*/
  if ( !v23 ) /*0x100a9ec09*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8); /*0x100aa0075*/
  *v23 = 0x65736E6F70736572LL; /*0x100a9ec19*/
  LOBYTE(v147) = 3; /*0x100a9ec1c*/
  v148 = 8; /*0x100a9ec20*/
  v149 = v23; /*0x100a9ec28*/
  v150 = 8; /*0x100a9ec2c*/
  v24 = &v136; /*0x100a9ec34*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, &v122, &v118); /*0x100a9ec49*/
  if ( v136 == (const char **)0x8000000000000000LL ) /*0x100a9ec5f*/
  {
    v25 = v137; /*0x100a9ec61*/
    v26 = 32LL * (_QWORD)v139; /*0x100a9ec6f*/
    v146 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 3); /*0x100a9ec78*/
    __n = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 2); /*0x100a9ec81*/
    v27 = *((_QWORD *)v137 + 4 * (_QWORD)v139); /*0x100a9ec85*/
    __src = *((void **)v137 + 4 * (_QWORD)v139 + 1); /*0x100a9ec8e*/
    v143 = v27; /*0x100a9ec92*/
    *(_QWORD *)((char *)v137 + v26 + 24) = v150; /*0x100a9ec9a*/
    *(_QWORD *)((char *)v25 + v26 + 16) = v149; /*0x100a9eca3*/
    v28 = v147; /*0x100a9eca8*/
    v29 = (const char ***)v148; /*0x100a9ecac*/
    *(_QWORD *)((char *)v25 + v26 + 8) = v148; /*0x100a9ecb0*/
    *(_QWORD *)((char *)v25 + v26) = v28; /*0x100a9ecb5*/
    if ( (_BYTE)v143 != 6 ) /*0x100a9ecbd*/
    {
      v24 = (const char ***)&v143; /*0x100a9ecc3*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v143); /*0x100a9ecc7*/
    }
  }
  else
  {
    v135 = v142; /*0x100a9ecd5*/
    v134 = v141; /*0x100a9ece0*/
    v133 = v140; /*0x100a9eceb*/
    v132 = v139; /*0x100a9ecf9*/
    v131 = v138; /*0x100a9ed07*/
    v130 = v137; /*0x100a9ed1c*/
    v129 = v136; /*0x100a9ed23*/
    v128 = v150; /*0x100a9ed2e*/
    v127 = v149; /*0x100a9ed39*/
    v126 = v148; /*0x100a9ed48*/
    v125 = (const char *)v147; /*0x100a9ed4f*/
    v24 = (const char ***)&v143; /*0x100a9ed56*/
    v29 = &v129; /*0x100a9ed5a*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9ed68*/
      &v143,
      &v129,
      &v125);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v24, v29); /*0x100a9ed6d*/
  v9 = 10; /*0x100a9ed72*/
  v30 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x100a9ed82*/
  if ( !v30 ) /*0x100a9ed8a*/
    goto LABEL_95; /*0x100a9ed8a*/
  qmemcpy(v30, "created_at", 10); /*0x100a9ed9a*/
  v118 = 10; /*0x100a9eda3*/
  v119 = v30; /*0x100a9edae*/
  v120 = 10; /*0x100a9edb5*/
  v31 = *(_QWORD *)(v108 + 400); /*0x100a9edc0*/
  LOBYTE(v147) = 2; /*0x100a9edce*/
  v148 = v31 >> 63; /*0x100a9edd2*/
  v149 = (_QWORD *)v31; /*0x100a9edd6*/
  v32 = &v136; /*0x100a9edda*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, &v122, &v118); /*0x100a9edef*/
  if ( v136 == (const char **)0x8000000000000000LL ) /*0x100a9ee05*/
  {
    v33 = v137; /*0x100a9ee07*/
    v34 = 32LL * (_QWORD)v139; /*0x100a9ee15*/
    v146 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 3); /*0x100a9ee1e*/
    __n = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 2); /*0x100a9ee27*/
    v35 = *((_QWORD *)v137 + 4 * (_QWORD)v139); /*0x100a9ee2b*/
    __src = *((void **)v137 + 4 * (_QWORD)v139 + 1); /*0x100a9ee34*/
    v143 = v35; /*0x100a9ee38*/
    *(_QWORD *)((char *)v137 + v34 + 24) = v150; /*0x100a9ee40*/
    *(_QWORD *)((char *)v33 + v34 + 16) = v149; /*0x100a9ee49*/
    v36 = v147; /*0x100a9ee4e*/
    v37 = (const char ***)v148; /*0x100a9ee52*/
    *(_QWORD *)((char *)v33 + v34 + 8) = v148; /*0x100a9ee56*/
    *(_QWORD *)((char *)v33 + v34) = v36; /*0x100a9ee5b*/
    if ( (_BYTE)v143 != 6 ) /*0x100a9ee63*/
    {
      v32 = (const char ***)&v143; /*0x100a9ee69*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v143); /*0x100a9ee6d*/
    }
  }
  else
  {
    v135 = v142; /*0x100a9ee7b*/
    v134 = v141; /*0x100a9ee86*/
    v133 = v140; /*0x100a9ee91*/
    v132 = v139; /*0x100a9ee9f*/
    v131 = v138; /*0x100a9eead*/
    v130 = v137; /*0x100a9eec2*/
    v129 = v136; /*0x100a9eec9*/
    v128 = v150; /*0x100a9eed4*/
    v127 = v149; /*0x100a9eedf*/
    v126 = v148; /*0x100a9eeee*/
    v125 = (const char *)v147; /*0x100a9eef5*/
    v32 = (const char ***)&v143; /*0x100a9eefc*/
    v37 = &v129; /*0x100a9ef00*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9ef0e*/
      &v143,
      &v129,
      &v125);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v32, v37); /*0x100a9ef13*/
  v9 = 6; /*0x100a9ef18*/
  v38 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100a9ef28*/
  if ( !v38 ) /*0x100a9ef30*/
    goto LABEL_95; /*0x100a9ef30*/
  *(_WORD *)(v38 + 4) = 29557; /*0x100a9ef39*/
  *(_DWORD *)v38 = 1952543859; /*0x100a9ef3f*/
  v118 = 6; /*0x100a9ef45*/
  v119 = (_WORD *)v38; /*0x100a9ef50*/
  v120 = 6; /*0x100a9ef57*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(6, 1); /*0x100a9ef62*/
  v39 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1); /*0x100a9ef71*/
  if ( !v39 ) /*0x100a9ef79*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9); /*0x100aa0086*/
  *(_QWORD *)v39 = 0x6574656C706D6F63LL; /*0x100a9ef89*/
  *(_BYTE *)(v39 + 8) = 100; /*0x100a9ef8c*/
  LOBYTE(v147) = 3; /*0x100a9ef90*/
  v148 = 9; /*0x100a9ef94*/
  v149 = (_QWORD *)v39; /*0x100a9ef9c*/
  v150 = 9; /*0x100a9efa0*/
  v40 = &v136; /*0x100a9efa8*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, &v122, &v118); /*0x100a9efbd*/
  if ( v136 == (const char **)0x8000000000000000LL ) /*0x100a9efd3*/
  {
    v41 = v137; /*0x100a9efd5*/
    v42 = 32LL * (_QWORD)v139; /*0x100a9efe3*/
    v146 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 3); /*0x100a9efec*/
    __n = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 2); /*0x100a9eff5*/
    v43 = *((_QWORD *)v137 + 4 * (_QWORD)v139); /*0x100a9eff9*/
    __src = *((void **)v137 + 4 * (_QWORD)v139 + 1); /*0x100a9f002*/
    v143 = v43; /*0x100a9f006*/
    *(_QWORD *)((char *)v137 + v42 + 24) = v150; /*0x100a9f00e*/
    *(_QWORD *)((char *)v41 + v42 + 16) = v149; /*0x100a9f017*/
    v44 = v147; /*0x100a9f01c*/
    v45 = (const char ***)v148; /*0x100a9f020*/
    *(_QWORD *)((char *)v41 + v42 + 8) = v148; /*0x100a9f024*/
    *(_QWORD *)((char *)v41 + v42) = v44; /*0x100a9f029*/
    if ( (_BYTE)v143 != 6 ) /*0x100a9f031*/
    {
      v40 = (const char ***)&v143; /*0x100a9f037*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v143); /*0x100a9f03b*/
    }
  }
  else
  {
    v135 = v142; /*0x100a9f049*/
    v134 = v141; /*0x100a9f054*/
    v133 = v140; /*0x100a9f05f*/
    v132 = v139; /*0x100a9f06d*/
    v131 = v138; /*0x100a9f07b*/
    v130 = v137; /*0x100a9f090*/
    v129 = v136; /*0x100a9f097*/
    v128 = v150; /*0x100a9f0a2*/
    v127 = v149; /*0x100a9f0ad*/
    v126 = v148; /*0x100a9f0bc*/
    v125 = (const char *)v147; /*0x100a9f0c3*/
    v40 = (const char ***)&v143; /*0x100a9f0ca*/
    v45 = &v129; /*0x100a9f0ce*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9f0dc*/
      &v143,
      &v129,
      &v125);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v40, v45); /*0x100a9f0e1*/
  v9 = 5; /*0x100a9f0e6*/
  v46 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100a9f0f6*/
  if ( !v46 ) /*0x100a9f0fe*/
    goto LABEL_95; /*0x100a9f0fe*/
  *(_BYTE *)(v46 + 4) = 108; /*0x100a9f107*/
  *(_DWORD *)v46 = 1701080941; /*0x100a9f10b*/
  v118 = 5; /*0x100a9f111*/
  v119 = (_WORD *)v46; /*0x100a9f11c*/
  v120 = 5; /*0x100a9f123*/
  v47 = *(_QWORD *)(v108 + 32); /*0x100a9f12e*/
  if ( v47 < 0 ) /*0x100a9f135*/
  {
    v48 = 0; /*0x100a9f137*/
    goto LABEL_40; /*0x100a9f137*/
  }
  v49 = *(const void **)(v108 + 24); /*0x100a9f14a*/
  if ( v47 ) /*0x100a9f14e*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x100a9f150*/
    v48 = 1; /*0x100a9f155*/
    v50 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v47, 1); /*0x100a9f163*/
    if ( !v50 ) /*0x100a9f16b*/
LABEL_40:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v48, v47); /*0x100a9f13a*/
    v51 = v50; /*0x100a9f16d*/
    v2 = v109; /*0x100a9f170*/
  }
  else
  {
    v51 = 1; /*0x100a9f179*/
  }
  memcpy((void *)v51, v49, v47); /*0x100a9f188*/
  LOBYTE(v147) = 3; /*0x100a9f18d*/
  v148 = v47; /*0x100a9f191*/
  v149 = (_QWORD *)v51; /*0x100a9f195*/
  v150 = v47; /*0x100a9f199*/
  v52 = &v136; /*0x100a9f19d*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, &v122, &v118); /*0x100a9f1b2*/
  if ( v136 == (const char **)0x8000000000000000LL ) /*0x100a9f1cf*/
  {
    v53 = v137; /*0x100a9f1d1*/
    v54 = 32LL * (_QWORD)v139; /*0x100a9f1df*/
    v146 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 3); /*0x100a9f1e8*/
    __n = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 2); /*0x100a9f1f1*/
    v55 = *((_QWORD *)v137 + 4 * (_QWORD)v139); /*0x100a9f1f5*/
    __src = *((void **)v137 + 4 * (_QWORD)v139 + 1); /*0x100a9f1fe*/
    v143 = v55; /*0x100a9f202*/
    *(_QWORD *)((char *)v137 + v54 + 24) = v150; /*0x100a9f20a*/
    *(_QWORD *)((char *)v53 + v54 + 16) = v149; /*0x100a9f213*/
    v56 = v147; /*0x100a9f218*/
    v57 = (const char ***)v148; /*0x100a9f21c*/
    *(_QWORD *)((char *)v53 + v54 + 8) = v148; /*0x100a9f220*/
    *(_QWORD *)((char *)v53 + v54) = v56; /*0x100a9f225*/
    if ( (_BYTE)v143 != 6 ) /*0x100a9f22d*/
    {
      v52 = (const char ***)&v143; /*0x100a9f233*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v143); /*0x100a9f237*/
    }
  }
  else
  {
    v135 = v142; /*0x100a9f245*/
    v134 = v141; /*0x100a9f250*/
    v133 = v140; /*0x100a9f25b*/
    v132 = v139; /*0x100a9f269*/
    v131 = v138; /*0x100a9f277*/
    v130 = v137; /*0x100a9f28c*/
    v129 = v136; /*0x100a9f293*/
    v128 = v150; /*0x100a9f29e*/
    v127 = v149; /*0x100a9f2a9*/
    v126 = v148; /*0x100a9f2b8*/
    v125 = (const char *)v147; /*0x100a9f2bf*/
    v52 = (const char ***)&v143; /*0x100a9f2c6*/
    v57 = &v129; /*0x100a9f2ca*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9f2d8*/
      &v143,
      &v129,
      &v125);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v52, v57); /*0x100a9f2dd*/
  v9 = 6; /*0x100a9f2e2*/
  v58 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100a9f2f2*/
  if ( !v58 ) /*0x100a9f2fa*/
LABEL_95:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v9); /*0x100aa0053*/
  *(_WORD *)(v58 + 4) = 29813; /*0x100a9f303*/
  *(_DWORD *)v58 = 1886680431; /*0x100a9f309*/
  v118 = 6; /*0x100a9f30f*/
  v119 = (_WORD *)v58; /*0x100a9f31a*/
  v120 = 6; /*0x100a9f321*/
  serde_core::ser::Serializer::collect_seq::h84c021fc6bf1d891(&v129, v108 + 64); /*0x100a9f337*/
  if ( (_BYTE)v129 == 6 ) /*0x100a9f343*/
  {
    v136 = (const char **)v130; /*0x100a9ffb7*/
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, &v136, &off_101974C58, &off_101974158); /*0x100a9ffdf*/
  }
  v150 = (__int64)v132; /*0x100a9f350*/
  v149 = v131; /*0x100a9f35b*/
  v148 = (__int64)v130; /*0x100a9f36d*/
  v147 = v129; /*0x100a9f371*/
  v59 = &v136; /*0x100a9f375*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, &v122, &v118); /*0x100a9f38a*/
  if ( v136 == (const char **)0x8000000000000000LL ) /*0x100a9f3a0*/
  {
    v60 = v137; /*0x100a9f3a2*/
    v61 = 32LL * (_QWORD)v139; /*0x100a9f3b0*/
    v146 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 3); /*0x100a9f3b9*/
    __n = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 2); /*0x100a9f3c2*/
    v62 = *((_QWORD *)v137 + 4 * (_QWORD)v139); /*0x100a9f3c6*/
    __src = *((void **)v137 + 4 * (_QWORD)v139 + 1); /*0x100a9f3cf*/
    v143 = v62; /*0x100a9f3d3*/
    *(_QWORD *)((char *)v137 + v61 + 24) = v150; /*0x100a9f3db*/
    *(_QWORD *)((char *)v60 + v61 + 16) = v149; /*0x100a9f3e4*/
    v63 = v147; /*0x100a9f3e9*/
    v64 = v148; /*0x100a9f3ed*/
    *(_QWORD *)((char *)v60 + v61 + 8) = v148; /*0x100a9f3f1*/
    *(_QWORD *)((char *)v60 + v61) = v63; /*0x100a9f3f6*/
    if ( (_BYTE)v143 != 6 ) /*0x100a9f3fe*/
    {
      v59 = (const char ***)&v143; /*0x100a9f404*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v143); /*0x100a9f408*/
    }
  }
  else
  {
    v135 = v142; /*0x100a9f416*/
    v134 = v141; /*0x100a9f421*/
    v133 = v140; /*0x100a9f42c*/
    v132 = v139; /*0x100a9f43a*/
    v131 = v138; /*0x100a9f448*/
    v130 = v137; /*0x100a9f45d*/
    v129 = v136; /*0x100a9f464*/
    v128 = v150; /*0x100a9f46f*/
    v127 = v149; /*0x100a9f47a*/
    v126 = v148; /*0x100a9f489*/
    v125 = (const char *)v147; /*0x100a9f490*/
    v59 = (const char ***)&v143; /*0x100a9f497*/
    v64 = (__int64)&v129; /*0x100a9f49b*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9f4a9*/
      &v143,
      &v129,
      &v125);
  }
  v119 = (_WORD *)v122; /*0x100a9f4bc*/
  v120 = (__int64)v123; /*0x100a9f4c3*/
  v121 = v124; /*0x100a9f4d1*/
  LOBYTE(v118) = 5; /*0x100a9f4d8*/
  if ( *(_BYTE *)(v108 + 430) ) /*0x100a9f4df*/
  {
    v112 = nullptr; /*0x100a9f4ed*/
    v114 = nullptr; /*0x100a9f4f8*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v59, v64); /*0x100a9f503*/
    v65 = 12; /*0x100a9f508*/
    v66 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x100a9f518*/
    if ( !v66 ) /*0x100a9f520*/
      goto LABEL_100; /*0x100a9f520*/
    qmemcpy(v66, "input_tokens", 12); /*0x100a9f530*/
    v122 = 12; /*0x100a9f53a*/
    v123 = v66; /*0x100a9f545*/
    v124 = 12; /*0x100a9f54c*/
    v67 = *(_QWORD *)(v108 + 408); /*0x100a9f557*/
    LOBYTE(v147) = 2; /*0x100a9f565*/
    v148 = v67 >> 63; /*0x100a9f569*/
    v149 = (_QWORD *)v67; /*0x100a9f56d*/
    v68 = &v136; /*0x100a9f571*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, &v112, &v122); /*0x100a9f586*/
    if ( v136 == (const char **)0x8000000000000000LL ) /*0x100a9f59c*/
    {
      v69 = v137; /*0x100a9f59e*/
      v70 = 32LL * (_QWORD)v139; /*0x100a9f5ac*/
      v146 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 3); /*0x100a9f5b5*/
      __n = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 2); /*0x100a9f5be*/
      v71 = *((_QWORD *)v137 + 4 * (_QWORD)v139); /*0x100a9f5c2*/
      __src = *((void **)v137 + 4 * (_QWORD)v139 + 1); /*0x100a9f5cb*/
      v143 = v71; /*0x100a9f5cf*/
      *(_QWORD *)((char *)v137 + v70 + 24) = v150; /*0x100a9f5d7*/
      *(_QWORD *)((char *)v69 + v70 + 16) = v149; /*0x100a9f5e0*/
      v72 = v147; /*0x100a9f5e5*/
      v73 = (const char ***)v148; /*0x100a9f5e9*/
      *(_QWORD *)((char *)v69 + v70 + 8) = v148; /*0x100a9f5ed*/
      *(_QWORD *)((char *)v69 + v70) = v72; /*0x100a9f5f2*/
      if ( (_BYTE)v143 != 6 ) /*0x100a9f5fa*/
      {
        v68 = (const char ***)&v143; /*0x100a9f600*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v143); /*0x100a9f604*/
      }
    }
    else
    {
      v135 = v142; /*0x100a9f612*/
      v134 = v141; /*0x100a9f61d*/
      v133 = v140; /*0x100a9f628*/
      v132 = v139; /*0x100a9f636*/
      v131 = v138; /*0x100a9f644*/
      v130 = v137; /*0x100a9f659*/
      v129 = v136; /*0x100a9f660*/
      v128 = v150; /*0x100a9f66b*/
      v127 = v149; /*0x100a9f676*/
      v126 = v148; /*0x100a9f685*/
      v125 = (const char *)v147; /*0x100a9f68c*/
      v68 = (const char ***)&v143; /*0x100a9f693*/
      v73 = &v129; /*0x100a9f697*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9f6a5*/
        &v143,
        &v129,
        &v125);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v68, v73); /*0x100a9f6aa*/
    v65 = 13; /*0x100a9f6af*/
    v74 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x100a9f6bf*/
    if ( !v74 ) /*0x100a9f6c7*/
      goto LABEL_100; /*0x100a9f6c7*/
    qmemcpy(v74, "output_tokens", 13); /*0x100a9f6e5*/
    v122 = 13; /*0x100a9f6e8*/
    v123 = v74; /*0x100a9f6f3*/
    v124 = 13; /*0x100a9f6fa*/
    v75 = *(_QWORD *)(v108 + 416); /*0x100a9f705*/
    LOBYTE(v147) = 2; /*0x100a9f713*/
    v148 = v75 >> 63; /*0x100a9f717*/
    v149 = (_QWORD *)v75; /*0x100a9f71b*/
    v76 = &v136; /*0x100a9f71f*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, &v112, &v122); /*0x100a9f734*/
    if ( v136 == (const char **)0x8000000000000000LL ) /*0x100a9f74a*/
    {
      v77 = v137; /*0x100a9f74c*/
      v78 = 32LL * (_QWORD)v139; /*0x100a9f75a*/
      v146 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 3); /*0x100a9f763*/
      __n = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 2); /*0x100a9f76c*/
      v79 = *((_QWORD *)v137 + 4 * (_QWORD)v139); /*0x100a9f770*/
      __src = *((void **)v137 + 4 * (_QWORD)v139 + 1); /*0x100a9f779*/
      v143 = v79; /*0x100a9f77d*/
      *(_QWORD *)((char *)v137 + v78 + 24) = v150; /*0x100a9f785*/
      *(_QWORD *)((char *)v77 + v78 + 16) = v149; /*0x100a9f78e*/
      v80 = v147; /*0x100a9f793*/
      v81 = (const char ***)v148; /*0x100a9f797*/
      *(_QWORD *)((char *)v77 + v78 + 8) = v148; /*0x100a9f79b*/
      *(_QWORD *)((char *)v77 + v78) = v80; /*0x100a9f7a0*/
      if ( (_BYTE)v143 != 6 ) /*0x100a9f7a8*/
      {
        v76 = (const char ***)&v143; /*0x100a9f7ae*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v143); /*0x100a9f7b2*/
      }
    }
    else
    {
      v135 = v142; /*0x100a9f7c0*/
      v134 = v141; /*0x100a9f7cb*/
      v133 = v140; /*0x100a9f7d6*/
      v132 = v139; /*0x100a9f7e4*/
      v131 = v138; /*0x100a9f7f2*/
      v130 = v137; /*0x100a9f807*/
      v129 = v136; /*0x100a9f80e*/
      v128 = v150; /*0x100a9f819*/
      v127 = v149; /*0x100a9f824*/
      v126 = v148; /*0x100a9f833*/
      v125 = (const char *)v147; /*0x100a9f83a*/
      v76 = (const char ***)&v143; /*0x100a9f841*/
      v81 = &v129; /*0x100a9f845*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9f853*/
        &v143,
        &v129,
        &v125);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v76, v81); /*0x100a9f858*/
    v65 = 12; /*0x100a9f85d*/
    v82 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x100a9f86d*/
    if ( !v82 ) /*0x100a9f875*/
LABEL_100:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v65); /*0x100aa00a4*/
    qmemcpy(v82, "total_tokens", 12); /*0x100a9f885*/
    v122 = 12; /*0x100a9f88f*/
    v123 = v82; /*0x100a9f89a*/
    v124 = 12; /*0x100a9f8a1*/
    if ( *(_BYTE *)v108 ) /*0x100a9f8ac*/
      v83 = *(_QWORD *)(v108 + 8); /*0x100a9f8b2*/
    else
      v83 = *(_QWORD *)(v108 + 408) + *(_QWORD *)(v108 + 416); /*0x100a9f8bf*/
    LOBYTE(v147) = 2; /*0x100a9f8cd*/
    v148 = v83 >> 63; /*0x100a9f8d1*/
    v149 = (_QWORD *)v83; /*0x100a9f8d5*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, &v112, &v122); /*0x100a9f8ee*/
    if ( v136 == (const char **)0x8000000000000000LL ) /*0x100a9f904*/
    {
      v84 = v137; /*0x100a9f906*/
      v85 = 32LL * (_QWORD)v139; /*0x100a9f914*/
      v146 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 3); /*0x100a9f91d*/
      __n = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 2); /*0x100a9f926*/
      v86 = *((_QWORD *)v137 + 4 * (_QWORD)v139); /*0x100a9f92a*/
      __src = *((void **)v137 + 4 * (_QWORD)v139 + 1); /*0x100a9f933*/
      v143 = v86; /*0x100a9f937*/
      *(_QWORD *)((char *)v137 + v85 + 24) = v150; /*0x100a9f93f*/
      *(_QWORD *)((char *)v84 + v85 + 16) = v149; /*0x100a9f948*/
      v87 = v147; /*0x100a9f94d*/
      *(_QWORD *)((char *)v84 + v85 + 8) = v148; /*0x100a9f955*/
      *(_QWORD *)((char *)v84 + v85) = v87; /*0x100a9f95a*/
      if ( (_BYTE)v143 != 6 ) /*0x100a9f962*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v143); /*0x100a9f96c*/
    }
    else
    {
      v135 = v142; /*0x100a9f97a*/
      v134 = v141; /*0x100a9f985*/
      v133 = v140; /*0x100a9f990*/
      v132 = v139; /*0x100a9f99e*/
      v131 = v138; /*0x100a9f9ac*/
      v130 = v137; /*0x100a9f9c1*/
      v129 = v136; /*0x100a9f9c8*/
      v128 = v150; /*0x100a9f9d3*/
      v127 = v149; /*0x100a9f9de*/
      v126 = v148; /*0x100a9f9ed*/
      v125 = (const char *)v147; /*0x100a9f9f4*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9fa0d*/
        &v143,
        &v129,
        &v125);
    }
    v130 = v112; /*0x100a9fa20*/
    v131 = v113; /*0x100a9fa27*/
    v132 = v114; /*0x100a9fa35*/
    LOBYTE(v129) = 5; /*0x100a9fa3c*/
    v64 = 5; /*0x100a9fa51*/
    v59 = (const char ***)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x100a9fa5e*/
                            "usagechoicesdeltatool_callsfinish_reasonprompt_tokenscompletion_tokensid",
                            5u);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v59); /*0x100a9fa61*/
    v59[3] = (const char **)v132; /*0x100a9fa6d*/
    v59[2] = (const char **)v131; /*0x100a9fa78*/
    v88 = v129; /*0x100a9fa7c*/
    v59[1] = (const char **)v130; /*0x100a9fa8a*/
    *v59 = v88; /*0x100a9fa8e*/
  }
  v112 = nullptr; /*0x100a9fa91*/
  v114 = nullptr; /*0x100a9fa9c*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v59, v64); /*0x100a9faa7*/
  v89 = 4; /*0x100a9faac*/
  v90 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100a9fabb*/
  if ( !v90 ) /*0x100a9fac3*/
    goto LABEL_99; /*0x100a9fac3*/
  *v90 = 1701869940; /*0x100a9facc*/
  v122 = 4; /*0x100a9fad2*/
  v123 = v90; /*0x100a9fadd*/
  v124 = 4; /*0x100a9fae4*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x100a9faef*/
  v91 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1); /*0x100a9fafe*/
  if ( !v91 ) /*0x100a9fb06*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 18); /*0x100aa00b5*/
  qmemcpy(v91, "response.completed", 18); /*0x100a9fb24*/
  LOBYTE(v147) = 3; /*0x100a9fb2d*/
  v148 = 18; /*0x100a9fb31*/
  v149 = v91; /*0x100a9fb39*/
  v150 = 18; /*0x100a9fb3d*/
  v92 = &v136; /*0x100a9fb45*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, &v112, &v122); /*0x100a9fb5a*/
  if ( v136 == (const char **)0x8000000000000000LL ) /*0x100a9fb70*/
  {
    v93 = v137; /*0x100a9fb72*/
    v94 = 32LL * (_QWORD)v139; /*0x100a9fb80*/
    v146 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 3); /*0x100a9fb89*/
    __n = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 2); /*0x100a9fb92*/
    v95 = *((_QWORD *)v137 + 4 * (_QWORD)v139); /*0x100a9fb96*/
    __src = *((void **)v137 + 4 * (_QWORD)v139 + 1); /*0x100a9fb9f*/
    v143 = v95; /*0x100a9fba3*/
    *(_QWORD *)((char *)v137 + v94 + 24) = v150; /*0x100a9fbab*/
    *(_QWORD *)((char *)v93 + v94 + 16) = v149; /*0x100a9fbb4*/
    v96 = v147; /*0x100a9fbb9*/
    v97 = (const char ***)v148; /*0x100a9fbbd*/
    *(_QWORD *)((char *)v93 + v94 + 8) = v148; /*0x100a9fbc1*/
    *(_QWORD *)((char *)v93 + v94) = v96; /*0x100a9fbc6*/
    if ( (_BYTE)v143 != 6 ) /*0x100a9fbce*/
    {
      v92 = (const char ***)&v143; /*0x100a9fbd4*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v143); /*0x100a9fbd8*/
    }
  }
  else
  {
    v135 = v142; /*0x100a9fbe6*/
    v134 = v141; /*0x100a9fbf1*/
    v133 = v140; /*0x100a9fbfc*/
    v132 = v139; /*0x100a9fc0a*/
    v131 = v138; /*0x100a9fc18*/
    v130 = v137; /*0x100a9fc2d*/
    v129 = v136; /*0x100a9fc34*/
    v128 = v150; /*0x100a9fc3f*/
    v127 = v149; /*0x100a9fc4a*/
    v126 = v148; /*0x100a9fc59*/
    v125 = (const char *)v147; /*0x100a9fc60*/
    v92 = (const char ***)&v143; /*0x100a9fc67*/
    v97 = &v129; /*0x100a9fc6b*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9fc79*/
      &v143,
      &v129,
      &v125);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v92, v97); /*0x100a9fc7e*/
  v89 = 8; /*0x100a9fc83*/
  v98 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x100a9fc92*/
  if ( !v98 ) /*0x100a9fc9a*/
LABEL_99:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v89); /*0x100aa0095*/
  *v98 = 0x65736E6F70736572LL; /*0x100a9fcad*/
  v122 = 8; /*0x100a9fcb1*/
  v123 = v98; /*0x100a9fcbc*/
  v124 = 8; /*0x100a9fcc3*/
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e( /*0x100a9fcdc*/
    &v129,
    &v118);
  if ( (_BYTE)v129 == 6 ) /*0x100a9fce8*/
  {
    v136 = (const char **)v130; /*0x100a9fff0*/
    core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_10167E63D, 43, &v136, &off_101974C58, &off_101974180); /*0x100aa0018*/
  }
  v150 = (__int64)v132; /*0x100a9fcf5*/
  v149 = v131; /*0x100a9fd00*/
  v148 = (__int64)v130; /*0x100a9fd12*/
  v147 = v129; /*0x100a9fd16*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v136, &v112, &v122); /*0x100a9fd32*/
  if ( v136 == (const char **)0x8000000000000000LL ) /*0x100a9fd48*/
  {
    v99 = v137; /*0x100a9fd4a*/
    v100 = 32LL * (_QWORD)v139; /*0x100a9fd58*/
    v146 = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 3); /*0x100a9fd61*/
    __n = *((_QWORD *)v137 + 4 * (_QWORD)v139 + 2); /*0x100a9fd6a*/
    v101 = *((_QWORD *)v137 + 4 * (_QWORD)v139); /*0x100a9fd6e*/
    __src = *((void **)v137 + 4 * (_QWORD)v139 + 1); /*0x100a9fd77*/
    v143 = v101; /*0x100a9fd7b*/
    *(_QWORD *)((char *)v137 + v100 + 24) = v150; /*0x100a9fd83*/
    *(_QWORD *)((char *)v99 + v100 + 16) = v149; /*0x100a9fd8c*/
    v102 = v147; /*0x100a9fd91*/
    *(_QWORD *)((char *)v99 + v100 + 8) = v148; /*0x100a9fd99*/
    *(_QWORD *)((char *)v99 + v100) = v102; /*0x100a9fd9e*/
    if ( (_BYTE)v143 != 6 ) /*0x100a9fda6*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v143); /*0x100a9fdb0*/
  }
  else
  {
    v135 = v142; /*0x100a9fdbe*/
    v134 = v141; /*0x100a9fdc9*/
    v133 = v140; /*0x100a9fdd4*/
    v132 = v139; /*0x100a9fde2*/
    v131 = v138; /*0x100a9fdf0*/
    v130 = v137; /*0x100a9fe05*/
    v129 = v136; /*0x100a9fe0c*/
    v128 = v150; /*0x100a9fe17*/
    v127 = v149; /*0x100a9fe22*/
    v126 = v148; /*0x100a9fe31*/
    v125 = (const char *)v147; /*0x100a9fe38*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9fe51*/
      &v143,
      &v129,
      &v125);
  }
  v137 = v112; /*0x100a9fe64*/
  v138 = v113; /*0x100a9fe6b*/
  v139 = v114; /*0x100a9fe79*/
  LOBYTE(v136) = 5; /*0x100a9fe80*/
  v125 = "response.completedin_progressresponse.output_text.doneresponse.content_part.doneoutput_text"; /*0x100a9fe8e*/
  v126 = 18; /*0x100a9fe95*/
  v147 = (const char **)&v136; /*0x100a9fea0*/
  v129 = &v125; /*0x100a9feab*/
  v130 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100a9feb9*/
  v131 = &v147; /*0x100a9fec4*/
  v132 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcb50c2f2fdedac0f; /*0x100a9fed2*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v143, &unk_1017C9F28, &v129); /*0x100a9feeb*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v118); /*0x100a9fef7*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v136); /*0x100a9ff03*/
  v104 = __src; /*0x100a9ff08*/
  v105 = __n; /*0x100a9ff0c*/
  v106 = v117; /*0x100a9ff17*/
  if ( __n > v115 - v117 ) /*0x100a9ff24*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100aa003a*/
      &v115,
      v117,
      __n,
      1,
      1,
      v103);
    v106 = v117; /*0x100aa003f*/
  }
  memcpy((void *)(v106 + v116), v104, v105); /*0x100a9ff3a*/
  v117 = v105 + v106; /*0x100a9ff42*/
  if ( v143 ) /*0x100a9ff50*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v104, v143, 1); /*0x100a9ff5a*/
  *(_BYTE *)(v108 + 429) = 1; /*0x100a9ff5f*/
  v2[2] = v117; /*0x100a9ff6e*/
  v107 = v115; /*0x100a9ff73*/
  v2[1] = v116; /*0x100a9ff81*/
  *v2 = v107; /*0x100a9ff86*/
  if ( v110 ) /*0x100a9ff94*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v111, v110, 1); /*0x100a9ffa6*/
  return v2; /*0x100a9e89d*/
}