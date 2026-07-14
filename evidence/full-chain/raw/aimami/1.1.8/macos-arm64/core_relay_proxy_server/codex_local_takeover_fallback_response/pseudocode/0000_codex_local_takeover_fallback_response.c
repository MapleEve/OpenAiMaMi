// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND codex_local_takeover_fallback_response node 0x1005b8fd0 depth=0
__int64 __fastcall codexmate_lib::core::relay::proxy_server::codex_local_takeover_fallback_response::hb6c0c92364865bd4(
        __int64 a1,
        __int64 a2,
        unsigned __int8 *a3,
        size_t a4)
{
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // r12
  _WORD *v9; // rax
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // r14d
  __int64 v14; // r14
  __int64 v15; // r12
  __int64 v16; // r15
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // r14
  int v20; // r14d
  __int64 v21; // rax
  __int64 v22; // rcx
  unsigned __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned __int64 v29; // rdx
  __int64 v30; // rdx
  void *v31; // rax
  int v32; // ecx
  int v33; // edx
  unsigned int v34; // eax
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rcx
  unsigned __int64 v43; // rdx
  __int64 v44; // rdx
  __int64 v45; // rax
  __int64 v46; // r15
  __int64 v47; // rax
  __int64 v48; // r14
  __int64 v49; // rax
  __int64 v50; // rcx
  unsigned __int64 v51; // rdx
  __int64 v52; // rdx
  __int64 v53; // rax
  void *v54; // r14
  __int64 v55; // rax
  __int64 v56; // rbx
  __int64 v57; // r14
  _DWORD *v58; // rax
  _DWORD *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  unsigned __int64 v62; // rdx
  __int64 v63; // rdx
  _DWORD *v64; // rax
  __int64 v65; // rax
  __int64 v66; // rax
  __int64 v67; // rcx
  unsigned __int64 v68; // rdx
  __int64 v69; // rdx
  _DWORD *v70; // rax
  __int64 v71; // rax
  __int64 v72; // r13
  _DWORD *v73; // rax
  void *v74; // rax
  __int64 v75; // rax
  __int64 v76; // rcx
  unsigned __int64 v77; // rdx
  __int64 v78; // rdx
  _DWORD *v79; // rax
  _QWORD *v80; // rax
  _QWORD *v81; // r15
  __int64 v82; // rax
  __int64 v83; // rcx
  unsigned __int64 v84; // rdx
  __int64 v85; // rdx
  __int64 v86; // r15
  __int64 v87; // rax
  __int64 v88; // rcx
  unsigned __int64 v89; // rdx
  __int64 v90; // rdx
  __int64 v91; // rax
  __int64 v92; // rcx
  unsigned __int64 v93; // rdx
  __int64 v94; // rdx
  __int64 v95; // rax
  __int64 v96; // rbx
  void *v97; // rax
  __int64 v98; // rax
  __int64 v99; // rcx
  unsigned __int64 v100; // rdx
  __int64 v101; // rdx
  void *v102; // rax
  __int64 v103; // rax
  __int64 v104; // rcx
  unsigned __int64 v105; // rdx
  __int64 v106; // rdx
  void *v107; // rax
  __int64 v108; // rax
  __int64 v109; // rcx
  unsigned __int64 v110; // rdx
  __int64 v111; // rdx
  __int64 v112; // rax
  __int64 v113; // rcx
  unsigned __int64 v114; // rdx
  __int64 v115; // rdx
  __int64 v116; // rax
  __int64 v118[3]; // [rsp+38h] [rbp-218h] BYREF
  __int64 v119[3]; // [rsp+50h] [rbp-200h] BYREF
  __int64 v120; // [rsp+68h] [rbp-1E8h]
  size_t v121; // [rsp+70h] [rbp-1E0h]
  void *v122; // [rsp+78h] [rbp-1D8h]
  __int64 v123; // [rsp+80h] [rbp-1D0h]
  __int64 v124; // [rsp+88h] [rbp-1C8h]
  int v125; // [rsp+94h] [rbp-1BCh] BYREF
  unsigned int v126; // [rsp+98h] [rbp-1B8h]
  unsigned int v127; // [rsp+9Ch] [rbp-1B4h]
  __int64 v128; // [rsp+A0h] [rbp-1B0h] BYREF
  __int128 v129; // [rsp+A8h] [rbp-1A8h]
  __int64 v130; // [rsp+B8h] [rbp-198h]
  __int128 v131; // [rsp+C0h] [rbp-190h] BYREF
  __int64 v132; // [rsp+D0h] [rbp-180h]
  __int64 v133[2]; // [rsp+D8h] [rbp-178h] BYREF
  __int64 v134; // [rsp+E8h] [rbp-168h]
  __int64 v135; // [rsp+F0h] [rbp-160h] BYREF
  _DWORD *v136; // [rsp+F8h] [rbp-158h]
  __int64 v137; // [rsp+100h] [rbp-150h]
  int v138; // [rsp+10Ch] [rbp-144h]
  __int64 v139; // [rsp+110h] [rbp-140h] BYREF
  __int64 v140; // [rsp+118h] [rbp-138h]
  __int64 v141; // [rsp+120h] [rbp-130h]
  __int64 v142; // [rsp+128h] [rbp-128h]
  __int64 v143; // [rsp+130h] [rbp-120h] BYREF
  __int64 v144; // [rsp+138h] [rbp-118h]
  __int64 v145; // [rsp+140h] [rbp-110h]
  __int64 v146; // [rsp+148h] [rbp-108h]
  void *__src; // [rsp+150h] [rbp-100h]
  __int64 v148; // [rsp+158h] [rbp-F8h] BYREF
  unsigned __int64 v149; // [rsp+160h] [rbp-F0h]
  __int64 v150; // [rsp+168h] [rbp-E8h]
  size_t v151; // [rsp+170h] [rbp-E0h]
  __m256i v152; // [rsp+178h] [rbp-D8h] BYREF
  __int64 v153; // [rsp+198h] [rbp-B8h]
  __int64 v154; // [rsp+1A0h] [rbp-B0h]
  __int64 v155; // [rsp+1A8h] [rbp-A8h]
  __m256i v156; // [rsp+1B0h] [rbp-A0h] BYREF
  __int64 v157; // [rsp+1D0h] [rbp-80h]
  __int64 v158; // [rsp+1D8h] [rbp-78h]
  __int64 v159; // [rsp+1E0h] [rbp-70h]
  unsigned __int64 v160; // [rsp+1E8h] [rbp-68h] BYREF
  __int64 v161; // [rsp+1F0h] [rbp-60h]
  __int64 v162; // [rsp+1F8h] [rbp-58h]
  __int64 v163; // [rsp+200h] [rbp-50h]
  __int64 v164; // [rsp+208h] [rbp-48h]
  unsigned __int64 v165; // [rsp+210h] [rbp-40h]
  _QWORD *v166; // [rsp+218h] [rbp-38h]
  size_t v167; // [rsp+220h] [rbp-30h]

  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v125); /*0x1005b8ff7*/
  if ( !a3 || (core::str::_$LT$impl$u20$str$GT$::trim_matches::h0335c6e49c88655a(a3, a4), !v6) ) /*0x1005b900f*/
  {
    v7 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1005b9020*/
           "modelcontentstream",
           5u,
           a2);
    a4 = 13; /*0x1005b9025*/
    a3 = (unsigned __int8 *)"aimami-router"; /*0x1005b902b*/
    if ( v7 ) /*0x1005b9035*/
    {
      if ( *(_BYTE *)v7 == 3 ) /*0x1005b903a*/
      {
        a3 = *(unsigned __int8 **)(v7 + 16); /*0x1005b903c*/
        a4 = *(_QWORD *)(v7 + 24); /*0x1005b9040*/
      }
    }
  }
  v122 = a3; /*0x1005b9044*/
  v121 = a4; /*0x1005b904b*/
  v133[0] = 0; /*0x1005b9052*/
  v134 = 0; /*0x1005b905d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005b9068*/
  v8 = 2; /*0x1005b906d*/
  v9 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2u, 1u); /*0x1005b907d*/
  if ( !v9 ) /*0x1005b9085*/
    goto LABEL_113; /*0x1005b9085*/
  *v9 = 25705; /*0x1005b908e*/
  v143 = 2; /*0x1005b9093*/
  v144 = (__int64)v9; /*0x1005b909e*/
  v145 = 2; /*0x1005b90a5*/
  v10 = 0; /*0x1005b90c0*/
  v11 = (v125 >> 13) - 1; /*0x1005b90c2*/
  if ( v125 >> 13 <= 0 ) /*0x1005b90c6*/
  {
    v12 = (1 - (v125 >> 13)) / 0x190u + 1; /*0x1005b90da*/
    v11 = (v125 >> 13) - 1 + 400 * v12; /*0x1005b90e2*/
    v10 = -146097 * v12; /*0x1005b90e4*/
  }
  v120 = (unsigned int)(v125 >> 13); /*0x1005b90ea*/
  v138 = (v125 >> 13) - 1; /*0x1005b90f1*/
  v13 = ((unsigned int)v125 >> 4) & 0x1FF; /*0x1005b911b*/
  v130 = v126; /*0x1005b9148*/
  v160 = 1000 * (v126 + 86400LL * (((v11 / 100) >> 2) + ((1461 * v11) >> 2) + v10 + v13 - 719163 - v11 / 100)) /*0x1005b9167*/
       + v127 / 0xF4240uLL;
  v156.i64[0] = (__int64)&v160; /*0x1005b916f*/
  v156.i64[1] = (__int64)core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$isize$GT$::fmt::h7ee2993d2036092b; /*0x1005b917d*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4((size_t *)&v152, byte_10122B959, (unsigned __int64)&v156); /*0x1005b9199*/
  v14 = (unsigned int)(v13 - 719163); /*0x1005b919e*/
  __src = (void *)v152.i64[1]; /*0x1005b91b3*/
  v15 = v152.i64[0]; /*0x1005b91b3*/
  v16 = v152.i64[2]; /*0x1005b91ba*/
  if ( v152.i64[2] < 0 ) /*0x1005b91c4*/
  {
    v17 = 0; /*0x1005b91c6*/
    goto LABEL_11; /*0x1005b91c6*/
  }
  v123 = v14; /*0x1005b91d9*/
  v124 = a1; /*0x1005b91e0*/
  if ( v152.i64[2] ) /*0x1005b91e7*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005b91e9*/
    v17 = 1; /*0x1005b91ee*/
    v18 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v16, 1u); /*0x1005b91fc*/
    if ( !v18 ) /*0x1005b9204*/
LABEL_11:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v17, v16); /*0x1005b91c9*/
    v19 = v18; /*0x1005b9206*/
  }
  else
  {
    v19 = 1; /*0x1005b920b*/
  }
  memcpy((void *)v19, __src, v16); /*0x1005b921e*/
  LOBYTE(v164) = 3; /*0x1005b9223*/
  v165 = v16; /*0x1005b9227*/
  v166 = (_QWORD *)v19; /*0x1005b922b*/
  v167 = v16; /*0x1005b922f*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::he48578e7025422e1(&v156, v133, &v143); /*0x1005b9248*/
  v20 = v123; /*0x1005b9256*/
  if ( __OFSUB__(0, v156.i64[0]) ) /*0x1005b924f*/
  {
    v21 = v156.i64[1]; /*0x1005b925f*/
    v22 = 32 * v156.i64[3]; /*0x1005b926d*/
    v163 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 24); /*0x1005b9276*/
    v162 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 16); /*0x1005b927f*/
    v23 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3]); /*0x1005b9283*/
    v161 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 8); /*0x1005b928c*/
    v160 = v23; /*0x1005b9290*/
    *(_QWORD *)(v156.i64[1] + v22 + 24) = v167; /*0x1005b9298*/
    *(_QWORD *)(v21 + v22 + 16) = v166; /*0x1005b92a1*/
    v24 = v164; /*0x1005b92a6*/
    *(_QWORD *)(v21 + v22 + 8) = v165; /*0x1005b92ae*/
    *(_QWORD *)(v21 + v22) = v24; /*0x1005b92b3*/
    if ( (_BYTE)v160 != 6 ) /*0x1005b92bb*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v160); /*0x1005b92c5*/
  }
  else
  {
    v155 = v159; /*0x1005b92d3*/
    v154 = v158; /*0x1005b92de*/
    v153 = v157; /*0x1005b92e9*/
    v152 = v156; /*0x1005b9305*/
    v151 = v167; /*0x1005b932c*/
    v150 = (__int64)v166; /*0x1005b9337*/
    v149 = v165; /*0x1005b9346*/
    v148 = v164; /*0x1005b934d*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h84e55971b5f294a8( /*0x1005b9366*/
      (__int64)&v160,
      v152.i64,
      &v148);
  }
  if ( v15 ) /*0x1005b936e*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005b937f*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005b9384*/
  v8 = 6; /*0x1005b9389*/
  v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6u, 1u); /*0x1005b9399*/
  if ( !v25 ) /*0x1005b93a1*/
    goto LABEL_113; /*0x1005b93a1*/
  *(_WORD *)(v25 + 4) = 29795; /*0x1005b93aa*/
  *(_DWORD *)v25 = 1701470831; /*0x1005b93b0*/
  v143 = 6; /*0x1005b93b6*/
  v144 = v25; /*0x1005b93c1*/
  v145 = 6; /*0x1005b93c8*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005b93d3*/
  v26 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8u, 1u); /*0x1005b93e2*/
  if ( !v26 ) /*0x1005b93ea*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 8); /*0x1005bae65*/
  *v26 = 0x65736E6F70736572LL; /*0x1005b93fa*/
  LOBYTE(v164) = 3; /*0x1005b93fd*/
  v165 = 8; /*0x1005b9401*/
  v166 = v26; /*0x1005b9409*/
  v167 = 8; /*0x1005b940d*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::he48578e7025422e1(&v156, v133, &v143); /*0x1005b942a*/
  if ( v156.i64[0] == 0x8000000000000000LL ) /*0x1005b9440*/
  {
    v27 = v156.i64[1]; /*0x1005b9442*/
    v28 = 32 * v156.i64[3]; /*0x1005b9450*/
    v163 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 24); /*0x1005b9459*/
    v162 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 16); /*0x1005b9462*/
    v29 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3]); /*0x1005b9466*/
    v161 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 8); /*0x1005b946f*/
    v160 = v29; /*0x1005b9473*/
    *(_QWORD *)(v156.i64[1] + v28 + 24) = v167; /*0x1005b947b*/
    *(_QWORD *)(v27 + v28 + 16) = v166; /*0x1005b9484*/
    v30 = v164; /*0x1005b9489*/
    *(_QWORD *)(v27 + v28 + 8) = v165; /*0x1005b9491*/
    *(_QWORD *)(v27 + v28) = v30; /*0x1005b9496*/
    if ( (_BYTE)v160 != 6 ) /*0x1005b949e*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v160); /*0x1005b94a8*/
  }
  else
  {
    v155 = v159; /*0x1005b94b6*/
    v154 = v158; /*0x1005b94c1*/
    v153 = v157; /*0x1005b94cc*/
    v152 = v156; /*0x1005b94e8*/
    v151 = v167; /*0x1005b950f*/
    v150 = (__int64)v166; /*0x1005b951a*/
    v149 = v165; /*0x1005b9529*/
    v148 = v164; /*0x1005b9530*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h84e55971b5f294a8( /*0x1005b9549*/
      (__int64)&v160,
      v152.i64,
      &v148);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005b954e*/
  v8 = 10; /*0x1005b9553*/
  v31 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xAu, 1u); /*0x1005b9563*/
  if ( !v31 ) /*0x1005b956b*/
    goto LABEL_113; /*0x1005b956b*/
  v32 = 0; /*0x1005b9571*/
  qmemcpy(v31, "created_at", 10); /*0x1005b957d*/
  v143 = 10; /*0x1005b9586*/
  v144 = (__int64)v31; /*0x1005b9591*/
  v145 = 10; /*0x1005b9598*/
  if ( (int)v120 <= 0 ) /*0x1005b95ac*/
  {
    v34 = (1 - (int)v120) / 0x190u + 1; /*0x1005b95c8*/
    v33 = 400 * v34 + v138; /*0x1005b95d6*/
    v32 = -146097 * v34; /*0x1005b95d8*/
  }
  else
  {
    v33 = v138; /*0x1005b95ae*/
  }
  LOBYTE(v164) = 2; /*0x1005b9625*/
  v165 = (unsigned __int64)(v130 + 86400LL * (((v33 / 100) >> 2) + ((1461 * v33) >> 2) + v20 + v32 - v33 / 100)) >> 63; /*0x1005b9629*/
  v166 = (_QWORD *)(v130 + 86400LL * (((v33 / 100) >> 2) + ((1461 * v33) >> 2) + v20 + v32 - v33 / 100)); /*0x1005b962d*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::he48578e7025422e1(&v156, v133, &v143); /*0x1005b9646*/
  if ( v156.i64[0] == 0x8000000000000000LL ) /*0x1005b965c*/
  {
    v35 = v156.i64[1]; /*0x1005b965e*/
    v36 = 32 * v156.i64[3]; /*0x1005b966c*/
    v163 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 24); /*0x1005b9675*/
    v162 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 16); /*0x1005b967e*/
    v37 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3]); /*0x1005b9682*/
    v161 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 8); /*0x1005b968b*/
    v160 = v37; /*0x1005b968f*/
    *(_QWORD *)(v156.i64[1] + v36 + 24) = v167; /*0x1005b9697*/
    *(_QWORD *)(v35 + v36 + 16) = v166; /*0x1005b96a0*/
    v38 = v164; /*0x1005b96a5*/
    *(_QWORD *)(v35 + v36 + 8) = v165; /*0x1005b96ad*/
    *(_QWORD *)(v35 + v36) = v38; /*0x1005b96b2*/
    if ( (_BYTE)v160 != 6 ) /*0x1005b96ba*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v160); /*0x1005b96c4*/
  }
  else
  {
    v155 = v159; /*0x1005b96d2*/
    v154 = v158; /*0x1005b96dd*/
    v153 = v157; /*0x1005b96e8*/
    v152 = v156; /*0x1005b9704*/
    v151 = v167; /*0x1005b972b*/
    v150 = (__int64)v166; /*0x1005b9736*/
    v149 = v165; /*0x1005b9745*/
    v148 = v164; /*0x1005b974c*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h84e55971b5f294a8( /*0x1005b9765*/
      (__int64)&v160,
      v152.i64,
      &v148);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005b976a*/
  v8 = 6; /*0x1005b976f*/
  v39 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6u, 1u); /*0x1005b977f*/
  if ( !v39 ) /*0x1005b9787*/
    goto LABEL_113; /*0x1005b9787*/
  *(_WORD *)(v39 + 4) = 29557; /*0x1005b9790*/
  *(_DWORD *)v39 = 1952543859; /*0x1005b9796*/
  v143 = 6; /*0x1005b979c*/
  v144 = v39; /*0x1005b97a7*/
  v145 = 6; /*0x1005b97ae*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005b97b9*/
  v40 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9u, 1u); /*0x1005b97c8*/
  if ( !v40 ) /*0x1005b97d0*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9); /*0x1005bae76*/
  *(_QWORD *)v40 = 0x6574656C706D6F63LL; /*0x1005b97e0*/
  *(_BYTE *)(v40 + 8) = 100; /*0x1005b97e3*/
  LOBYTE(v164) = 3; /*0x1005b97e7*/
  v165 = 9; /*0x1005b97eb*/
  v166 = (_QWORD *)v40; /*0x1005b97f3*/
  v167 = 9; /*0x1005b97f7*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::he48578e7025422e1(&v156, v133, &v143); /*0x1005b9814*/
  if ( v156.i64[0] == 0x8000000000000000LL ) /*0x1005b982a*/
  {
    v41 = v156.i64[1]; /*0x1005b982c*/
    v42 = 32 * v156.i64[3]; /*0x1005b983a*/
    v163 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 24); /*0x1005b9843*/
    v162 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 16); /*0x1005b984c*/
    v43 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3]); /*0x1005b9850*/
    v161 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 8); /*0x1005b9859*/
    v160 = v43; /*0x1005b985d*/
    *(_QWORD *)(v156.i64[1] + v42 + 24) = v167; /*0x1005b9865*/
    *(_QWORD *)(v41 + v42 + 16) = v166; /*0x1005b986e*/
    v44 = v164; /*0x1005b9873*/
    *(_QWORD *)(v41 + v42 + 8) = v165; /*0x1005b987b*/
    *(_QWORD *)(v41 + v42) = v44; /*0x1005b9880*/
    if ( (_BYTE)v160 != 6 ) /*0x1005b9888*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v160); /*0x1005b9892*/
  }
  else
  {
    v155 = v159; /*0x1005b98a0*/
    v154 = v158; /*0x1005b98ab*/
    v153 = v157; /*0x1005b98b6*/
    v152 = v156; /*0x1005b98d2*/
    v151 = v167; /*0x1005b98f9*/
    v150 = (__int64)v166; /*0x1005b9904*/
    v149 = v165; /*0x1005b9913*/
    v148 = v164; /*0x1005b991a*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h84e55971b5f294a8( /*0x1005b9933*/
      (__int64)&v160,
      v152.i64,
      &v148);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005b9938*/
  v8 = 5; /*0x1005b993d*/
  v45 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5u, 1u); /*0x1005b994d*/
  if ( !v45 ) /*0x1005b9955*/
    goto LABEL_113; /*0x1005b9955*/
  *(_BYTE *)(v45 + 4) = 108; /*0x1005b995e*/
  *(_DWORD *)v45 = 1701080941; /*0x1005b9962*/
  v143 = 5; /*0x1005b9968*/
  v144 = v45; /*0x1005b9973*/
  v145 = 5; /*0x1005b997a*/
  if ( (v121 & 0x8000000000000000LL) != 0LL ) /*0x1005b998f*/
  {
    v46 = 0; /*0x1005b9991*/
    goto LABEL_45; /*0x1005b9991*/
  }
  if ( v121 ) /*0x1005b99a4*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005b99a6*/
    v46 = 1; /*0x1005b99ab*/
    v47 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v121, 1u); /*0x1005b99b9*/
    if ( !v47 ) /*0x1005b99c1*/
LABEL_45:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v46, v121); /*0x1005b9994*/
    v48 = v47; /*0x1005b99c3*/
  }
  else
  {
    v48 = 1; /*0x1005b99c8*/
  }
  memcpy((void *)v48, v122, v121); /*0x1005b99db*/
  LOBYTE(v164) = 3; /*0x1005b99e0*/
  v165 = v121; /*0x1005b99e4*/
  v166 = (_QWORD *)v48; /*0x1005b99e8*/
  v167 = v121; /*0x1005b99ec*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::he48578e7025422e1(&v156, v133, &v143); /*0x1005b9a05*/
  if ( v156.i64[0] == 0x8000000000000000LL ) /*0x1005b9a1b*/
  {
    v49 = v156.i64[1]; /*0x1005b9a1d*/
    v50 = 32 * v156.i64[3]; /*0x1005b9a2b*/
    v163 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 24); /*0x1005b9a34*/
    v162 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 16); /*0x1005b9a3d*/
    v51 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3]); /*0x1005b9a41*/
    v161 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 8); /*0x1005b9a4a*/
    v160 = v51; /*0x1005b9a4e*/
    *(_QWORD *)(v156.i64[1] + v50 + 24) = v167; /*0x1005b9a56*/
    *(_QWORD *)(v49 + v50 + 16) = v166; /*0x1005b9a5f*/
    v52 = v164; /*0x1005b9a64*/
    *(_QWORD *)(v49 + v50 + 8) = v165; /*0x1005b9a6c*/
    *(_QWORD *)(v49 + v50) = v52; /*0x1005b9a71*/
    if ( (_BYTE)v160 != 6 ) /*0x1005b9a79*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v160); /*0x1005b9a83*/
  }
  else
  {
    v155 = v159; /*0x1005b9a91*/
    v154 = v158; /*0x1005b9a9c*/
    v153 = v157; /*0x1005b9aa7*/
    v152 = v156; /*0x1005b9ac3*/
    v151 = v167; /*0x1005b9aea*/
    v150 = (__int64)v166; /*0x1005b9af5*/
    v149 = v165; /*0x1005b9b04*/
    v148 = v164; /*0x1005b9b0b*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h84e55971b5f294a8( /*0x1005b9b24*/
      (__int64)&v160,
      v152.i64,
      &v148);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005b9b29*/
  v8 = 6; /*0x1005b9b2e*/
  v53 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6u, 1u); /*0x1005b9b3e*/
  if ( !v53 ) /*0x1005b9b46*/
    goto LABEL_113; /*0x1005b9b46*/
  v54 = (void *)v53; /*0x1005b9b4c*/
  *(_WORD *)(v53 + 4) = 29813; /*0x1005b9b4f*/
  *(_DWORD *)v53 = 1886680431; /*0x1005b9b55*/
  v119[0] = 6; /*0x1005b9b5b*/
  v119[1] = v53; /*0x1005b9b66*/
  v119[2] = 6; /*0x1005b9b6d*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005b9b78*/
  v55 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x20u, 8u); /*0x1005b9b87*/
  if ( !v55 ) /*0x1005b9b8f*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32); /*0x1005bae03*/
  v56 = v55; /*0x1005b9b95*/
  __src = v54; /*0x1005b9b98*/
  v128 = 0; /*0x1005b9b9f*/
  *((_QWORD *)&v129 + 1) = 0; /*0x1005b9baa*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005b9bb5*/
  v57 = 4; /*0x1005b9bba*/
  v58 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4u, 1u); /*0x1005b9bca*/
  if ( !v58 ) /*0x1005b9bd2*/
    goto LABEL_114; /*0x1005b9bd2*/
  *v58 = 1701869940; /*0x1005b9bdb*/
  v143 = 4; /*0x1005b9be1*/
  v144 = (__int64)v58; /*0x1005b9bec*/
  v145 = 4; /*0x1005b9bf3*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005b9bfe*/
  v59 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7u, 1u); /*0x1005b9c0d*/
  if ( !v59 ) /*0x1005b9c15*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1005bae98*/
  *(_DWORD *)((char *)v59 + 3) = 1701273971; /*0x1005b9c1b*/
  *v59 = 1936942445; /*0x1005b9c22*/
  LOBYTE(v164) = 3; /*0x1005b9c28*/
  v165 = 7; /*0x1005b9c2c*/
  v166 = v59; /*0x1005b9c34*/
  v167 = 7; /*0x1005b9c38*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::he48578e7025422e1(&v156, &v128, &v143); /*0x1005b9c55*/
  if ( v156.i64[0] == 0x8000000000000000LL ) /*0x1005b9c6b*/
  {
    v60 = v156.i64[1]; /*0x1005b9c6d*/
    v61 = 32 * v156.i64[3]; /*0x1005b9c7b*/
    v163 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 24); /*0x1005b9c84*/
    v162 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 16); /*0x1005b9c8d*/
    v62 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3]); /*0x1005b9c91*/
    v161 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 8); /*0x1005b9c9a*/
    v160 = v62; /*0x1005b9c9e*/
    *(_QWORD *)(v156.i64[1] + v61 + 24) = v167; /*0x1005b9ca6*/
    *(_QWORD *)(v60 + v61 + 16) = v166; /*0x1005b9caf*/
    v63 = v164; /*0x1005b9cb4*/
    *(_QWORD *)(v60 + v61 + 8) = v165; /*0x1005b9cbc*/
    *(_QWORD *)(v60 + v61) = v63; /*0x1005b9cc1*/
    if ( (_BYTE)v160 != 6 ) /*0x1005b9cc9*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v160); /*0x1005b9cd3*/
  }
  else
  {
    v155 = v159; /*0x1005b9ce1*/
    v154 = v158; /*0x1005b9cec*/
    v153 = v157; /*0x1005b9cf7*/
    v152 = v156; /*0x1005b9d13*/
    v151 = v167; /*0x1005b9d3a*/
    v150 = (__int64)v166; /*0x1005b9d45*/
    v149 = v165; /*0x1005b9d54*/
    v148 = v164; /*0x1005b9d5b*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h84e55971b5f294a8( /*0x1005b9d74*/
      (__int64)&v160,
      v152.i64,
      &v148);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005b9d79*/
  v64 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4u, 1u); /*0x1005b9d88*/
  if ( !v64 ) /*0x1005b9d90*/
    goto LABEL_114; /*0x1005b9d90*/
  *v64 = 1701605234; /*0x1005b9d99*/
  v143 = 4; /*0x1005b9d9f*/
  v144 = (__int64)v64; /*0x1005b9daa*/
  v145 = 4; /*0x1005b9db1*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005b9dbc*/
  v65 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9u, 1u); /*0x1005b9dcb*/
  if ( !v65 ) /*0x1005b9dd3*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9); /*0x1005baea9*/
  *(_QWORD *)v65 = 0x6E61747369737361LL; /*0x1005b9de3*/
  *(_BYTE *)(v65 + 8) = 116; /*0x1005b9de6*/
  LOBYTE(v164) = 3; /*0x1005b9dea*/
  v165 = 9; /*0x1005b9dee*/
  v166 = (_QWORD *)v65; /*0x1005b9df6*/
  v167 = 9; /*0x1005b9dfa*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::he48578e7025422e1(&v156, &v128, &v143); /*0x1005b9e17*/
  if ( v156.i64[0] == 0x8000000000000000LL ) /*0x1005b9e2d*/
  {
    v66 = v156.i64[1]; /*0x1005b9e2f*/
    v67 = 32 * v156.i64[3]; /*0x1005b9e3d*/
    v163 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 24); /*0x1005b9e46*/
    v162 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 16); /*0x1005b9e4f*/
    v68 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3]); /*0x1005b9e53*/
    v161 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 8); /*0x1005b9e5c*/
    v160 = v68; /*0x1005b9e60*/
    *(_QWORD *)(v156.i64[1] + v67 + 24) = v167; /*0x1005b9e68*/
    *(_QWORD *)(v66 + v67 + 16) = v166; /*0x1005b9e71*/
    v69 = v164; /*0x1005b9e76*/
    *(_QWORD *)(v66 + v67 + 8) = v165; /*0x1005b9e7e*/
    *(_QWORD *)(v66 + v67) = v69; /*0x1005b9e83*/
    if ( (_BYTE)v160 != 6 ) /*0x1005b9e8b*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v160); /*0x1005b9e95*/
  }
  else
  {
    v155 = v159; /*0x1005b9ea3*/
    v154 = v158; /*0x1005b9eae*/
    v153 = v157; /*0x1005b9eb9*/
    v152 = v156; /*0x1005b9ed5*/
    v151 = v167; /*0x1005b9efc*/
    v150 = (__int64)v166; /*0x1005b9f07*/
    v149 = v165; /*0x1005b9f16*/
    v148 = v164; /*0x1005b9f1d*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h84e55971b5f294a8( /*0x1005b9f36*/
      (__int64)&v160,
      v152.i64,
      &v148);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005b9f3b*/
  v57 = 7; /*0x1005b9f40*/
  v70 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7u, 1u); /*0x1005b9f50*/
  if ( !v70 ) /*0x1005b9f58*/
LABEL_114:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v57); /*0x1005bae42*/
  *(_DWORD *)((char *)v70 + 3) = 1953391988; /*0x1005b9f61*/
  *v70 = 1953394531; /*0x1005b9f68*/
  v118[0] = 7; /*0x1005b9f6e*/
  v118[1] = (__int64)v70; /*0x1005b9f79*/
  v118[2] = 7; /*0x1005b9f80*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005b9f8b*/
  v71 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x20u, 8u); /*0x1005b9f9a*/
  if ( !v71 ) /*0x1005b9fa2*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32); /*0x1005bae1e*/
  v72 = v71; /*0x1005b9fa8*/
  *(_QWORD *)&v131 = 0; /*0x1005b9fab*/
  v132 = 0; /*0x1005b9fb6*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005b9fc1*/
  v73 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4u, 1u); /*0x1005b9fd0*/
  if ( !v73 ) /*0x1005b9fd8*/
    goto LABEL_118; /*0x1005b9fd8*/
  *v73 = 1701869940; /*0x1005b9fe1*/
  v135 = 4; /*0x1005b9fe7*/
  v136 = v73; /*0x1005b9ff2*/
  v137 = 4; /*0x1005b9ff9*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005ba004*/
  v74 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xBu, 1u); /*0x1005ba013*/
  if ( !v74 ) /*0x1005ba01b*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 11); /*0x1005baeba*/
  qmemcpy(v74, "output_text", 11); /*0x1005ba02b*/
  LOBYTE(v164) = 3; /*0x1005ba035*/
  v165 = 11; /*0x1005ba039*/
  v166 = v74; /*0x1005ba041*/
  v167 = 11; /*0x1005ba045*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::he48578e7025422e1(&v156, (__int64 *)&v131, &v135); /*0x1005ba062*/
  if ( v156.i64[0] == 0x8000000000000000LL ) /*0x1005ba078*/
  {
    v75 = v156.i64[1]; /*0x1005ba07a*/
    v76 = 32 * v156.i64[3]; /*0x1005ba088*/
    v163 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 24); /*0x1005ba091*/
    v162 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 16); /*0x1005ba09a*/
    v77 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3]); /*0x1005ba09e*/
    v161 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 8); /*0x1005ba0a7*/
    v160 = v77; /*0x1005ba0ab*/
    *(_QWORD *)(v156.i64[1] + v76 + 24) = v167; /*0x1005ba0b3*/
    *(_QWORD *)(v75 + v76 + 16) = v166; /*0x1005ba0bc*/
    v78 = v164; /*0x1005ba0c1*/
    *(_QWORD *)(v75 + v76 + 8) = v165; /*0x1005ba0c9*/
    *(_QWORD *)(v75 + v76) = v78; /*0x1005ba0ce*/
    if ( (_BYTE)v160 != 6 ) /*0x1005ba0d6*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v160); /*0x1005ba0e0*/
  }
  else
  {
    v155 = v159; /*0x1005ba0ee*/
    v154 = v158; /*0x1005ba0f9*/
    v153 = v157; /*0x1005ba104*/
    v152 = v156; /*0x1005ba120*/
    v151 = v167; /*0x1005ba147*/
    v150 = (__int64)v166; /*0x1005ba152*/
    v149 = v165; /*0x1005ba161*/
    v148 = v164; /*0x1005ba168*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h84e55971b5f294a8( /*0x1005ba181*/
      (__int64)&v160,
      v152.i64,
      &v148);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005ba186*/
  v79 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4u, 1u); /*0x1005ba195*/
  if ( !v79 ) /*0x1005ba19d*/
LABEL_118:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x1005bae87*/
  *v79 = 1954047348; /*0x1005ba1a6*/
  v135 = 4; /*0x1005ba1ac*/
  v136 = v79; /*0x1005ba1b7*/
  v137 = 4; /*0x1005ba1be*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005ba1c9*/
  v80 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xDBu, 1u); /*0x1005ba1d8*/
  if ( !v80 ) /*0x1005ba1e0*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 219); /*0x1005baecb*/
  v81 = v80; /*0x1005ba1e6*/
  memcpy(v80, &unk_1012CADF2, 0xDBu); /*0x1005ba1f8*/
  LOBYTE(v164) = 3; /*0x1005ba1fd*/
  v165 = 219; /*0x1005ba201*/
  v166 = v81; /*0x1005ba209*/
  v167 = 219; /*0x1005ba20d*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::he48578e7025422e1(&v156, (__int64 *)&v131, &v135); /*0x1005ba22a*/
  if ( v156.i64[0] == 0x8000000000000000LL ) /*0x1005ba240*/
  {
    v82 = v156.i64[1]; /*0x1005ba242*/
    v83 = 32 * v156.i64[3]; /*0x1005ba250*/
    v163 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 24); /*0x1005ba259*/
    v162 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 16); /*0x1005ba262*/
    v84 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3]); /*0x1005ba266*/
    v161 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 8); /*0x1005ba26f*/
    v160 = v84; /*0x1005ba273*/
    *(_QWORD *)(v156.i64[1] + v83 + 24) = v167; /*0x1005ba27b*/
    *(_QWORD *)(v82 + v83 + 16) = v166; /*0x1005ba284*/
    v85 = v164; /*0x1005ba289*/
    *(_QWORD *)(v82 + v83 + 8) = v165; /*0x1005ba291*/
    *(_QWORD *)(v82 + v83) = v85; /*0x1005ba296*/
    if ( (_BYTE)v160 != 6 ) /*0x1005ba29e*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v160); /*0x1005ba2a8*/
  }
  else
  {
    v155 = v159; /*0x1005ba2b6*/
    v154 = v158; /*0x1005ba2c1*/
    v153 = v157; /*0x1005ba2cc*/
    v152 = v156; /*0x1005ba2e8*/
    v151 = v167; /*0x1005ba30f*/
    v150 = (__int64)v166; /*0x1005ba31a*/
    v149 = v165; /*0x1005ba329*/
    v148 = v164; /*0x1005ba330*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h84e55971b5f294a8( /*0x1005ba349*/
      (__int64)&v160,
      v152.i64,
      &v148);
  }
  *(__int128 *)((char *)v152.i128 + 7) = v131; /*0x1005ba363*/
  *(__int64 *)((char *)&v152.i64[2] + 7) = v132; /*0x1005ba371*/
  *(_BYTE *)v72 = 5; /*0x1005ba378*/
  *(_QWORD *)(v72 + 24) = *(__int64 *)((char *)&v152.i64[2] + 7); /*0x1005ba384*/
  *(_QWORD *)(v72 + 17) = v152.i64[2]; /*0x1005ba38f*/
  *(_OWORD *)(v72 + 1) = v152.i128[0]; /*0x1005ba3a5*/
  v144 = 1; /*0x1005ba3a9*/
  v145 = v72; /*0x1005ba3b4*/
  v146 = 1; /*0x1005ba3bb*/
  LOBYTE(v143) = 4; /*0x1005ba3c6*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::he48578e7025422e1(&v156, &v128, v118); /*0x1005ba3e2*/
  v86 = v124; /*0x1005ba3f8*/
  if ( v156.i64[0] == 0x8000000000000000LL ) /*0x1005ba3ff*/
  {
    v87 = v156.i64[1]; /*0x1005ba401*/
    v88 = 32 * v156.i64[3]; /*0x1005ba40f*/
    v163 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 24); /*0x1005ba418*/
    v162 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 16); /*0x1005ba421*/
    v89 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3]); /*0x1005ba425*/
    v161 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 8); /*0x1005ba42e*/
    v160 = v89; /*0x1005ba432*/
    *(_QWORD *)(v156.i64[1] + v88 + 24) = v146; /*0x1005ba43d*/
    *(_QWORD *)(v87 + v88 + 16) = v145; /*0x1005ba449*/
    v90 = v143; /*0x1005ba44e*/
    *(_QWORD *)(v87 + v88 + 8) = v144; /*0x1005ba45c*/
    *(_QWORD *)(v87 + v88) = v90; /*0x1005ba461*/
    if ( (_BYTE)v160 != 6 ) /*0x1005ba469*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v160); /*0x1005ba473*/
  }
  else
  {
    v155 = v159; /*0x1005ba481*/
    v154 = v158; /*0x1005ba48c*/
    v153 = v157; /*0x1005ba497*/
    v152 = v156; /*0x1005ba4b3*/
    v151 = v146; /*0x1005ba4dd*/
    v150 = v145; /*0x1005ba4eb*/
    v149 = v144; /*0x1005ba500*/
    v148 = v143; /*0x1005ba507*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h84e55971b5f294a8( /*0x1005ba520*/
      (__int64)&v160,
      v152.i64,
      &v148);
  }
  *(__int64 *)((char *)v152.i64 + 7) = v128; /*0x1005ba53a*/
  *(__int128 *)((char *)v152.i128 + 15) = v129; /*0x1005ba541*/
  *(_BYTE *)v56 = 5; /*0x1005ba54f*/
  *(_QWORD *)(v56 + 24) = *(__int64 *)((char *)&v152.i64[2] + 7); /*0x1005ba559*/
  *(_QWORD *)(v56 + 17) = v152.i64[2]; /*0x1005ba564*/
  *(_OWORD *)(v56 + 1) = v152.i128[0]; /*0x1005ba57a*/
  v140 = 1; /*0x1005ba57e*/
  v141 = v56; /*0x1005ba589*/
  v142 = 1; /*0x1005ba590*/
  LOBYTE(v139) = 4; /*0x1005ba59b*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::he48578e7025422e1(&v156, v133, v119); /*0x1005ba5b7*/
  if ( v156.i64[0] == 0x8000000000000000LL ) /*0x1005ba5cd*/
  {
    v91 = v156.i64[1]; /*0x1005ba5cf*/
    v92 = 32 * v156.i64[3]; /*0x1005ba5dd*/
    v163 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 24); /*0x1005ba5e6*/
    v162 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 16); /*0x1005ba5ef*/
    v93 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3]); /*0x1005ba5f3*/
    v161 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 8); /*0x1005ba5fc*/
    v160 = v93; /*0x1005ba600*/
    *(_QWORD *)(v156.i64[1] + v92 + 24) = v142; /*0x1005ba60b*/
    *(_QWORD *)(v91 + v92 + 16) = v141; /*0x1005ba617*/
    v94 = v139; /*0x1005ba61c*/
    *(_QWORD *)(v91 + v92 + 8) = v140; /*0x1005ba62a*/
    *(_QWORD *)(v91 + v92) = v94; /*0x1005ba62f*/
    if ( (_BYTE)v160 != 6 ) /*0x1005ba637*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v160); /*0x1005ba641*/
  }
  else
  {
    v155 = v159; /*0x1005ba64f*/
    v154 = v158; /*0x1005ba65a*/
    v153 = v157; /*0x1005ba665*/
    v152 = v156; /*0x1005ba681*/
    v151 = v142; /*0x1005ba6ab*/
    v150 = v141; /*0x1005ba6b9*/
    v149 = v140; /*0x1005ba6ce*/
    v148 = v139; /*0x1005ba6d5*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h84e55971b5f294a8( /*0x1005ba6ee*/
      (__int64)&v160,
      v152.i64,
      &v148);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005ba6f3*/
  v8 = 5; /*0x1005ba6f8*/
  v95 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5u, 1u); /*0x1005ba708*/
  if ( !v95 ) /*0x1005ba710*/
LABEL_113:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v8); /*0x1005bae30*/
  *(_BYTE *)(v95 + 4) = 101; /*0x1005ba719*/
  *(_DWORD *)v95 = 1734439797; /*0x1005ba71d*/
  *(_QWORD *)&v131 = 5; /*0x1005ba723*/
  *((_QWORD *)&v131 + 1) = v95; /*0x1005ba72e*/
  v132 = 5; /*0x1005ba735*/
  v135 = 0; /*0x1005ba740*/
  v137 = 0; /*0x1005ba74b*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005ba756*/
  v96 = 12; /*0x1005ba75b*/
  v97 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xCu, 1u); /*0x1005ba76a*/
  if ( !v97 ) /*0x1005ba772*/
    goto LABEL_115; /*0x1005ba772*/
  qmemcpy(v97, "input_tokens", 12); /*0x1005ba782*/
  v139 = 12; /*0x1005ba78c*/
  v140 = (__int64)v97; /*0x1005ba797*/
  v141 = 12; /*0x1005ba79e*/
  LOBYTE(v164) = 2; /*0x1005ba7a9*/
  v165 = 0; /*0x1005ba7ad*/
  v166 = nullptr; /*0x1005ba7b5*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::he48578e7025422e1(&v156, &v135, &v139); /*0x1005ba7d2*/
  if ( v156.i64[0] == 0x8000000000000000LL ) /*0x1005ba7e8*/
  {
    v98 = v156.i64[1]; /*0x1005ba7ea*/
    v99 = 32 * v156.i64[3]; /*0x1005ba7f8*/
    v163 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 24); /*0x1005ba801*/
    v162 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 16); /*0x1005ba80a*/
    v100 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3]); /*0x1005ba80e*/
    v161 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 8); /*0x1005ba817*/
    v160 = v100; /*0x1005ba81b*/
    *(_QWORD *)(v156.i64[1] + v99 + 24) = v167; /*0x1005ba823*/
    *(_QWORD *)(v98 + v99 + 16) = v166; /*0x1005ba82c*/
    v101 = v164; /*0x1005ba831*/
    *(_QWORD *)(v98 + v99 + 8) = v165; /*0x1005ba839*/
    *(_QWORD *)(v98 + v99) = v101; /*0x1005ba83e*/
    if ( (_BYTE)v160 != 6 ) /*0x1005ba846*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v160); /*0x1005ba850*/
  }
  else
  {
    v155 = v159; /*0x1005ba85e*/
    v154 = v158; /*0x1005ba869*/
    v153 = v157; /*0x1005ba874*/
    v152 = v156; /*0x1005ba890*/
    v151 = v167; /*0x1005ba8b7*/
    v150 = (__int64)v166; /*0x1005ba8c2*/
    v149 = v165; /*0x1005ba8d1*/
    v148 = v164; /*0x1005ba8d8*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h84e55971b5f294a8( /*0x1005ba8f1*/
      (__int64)&v160,
      v152.i64,
      &v148);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005ba8f6*/
  v96 = 13; /*0x1005ba8fb*/
  v102 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xDu, 1u); /*0x1005ba90a*/
  if ( !v102 ) /*0x1005ba912*/
    goto LABEL_115; /*0x1005ba912*/
  qmemcpy(v102, "output_tokens", 13); /*0x1005ba930*/
  v139 = 13; /*0x1005ba933*/
  v140 = (__int64)v102; /*0x1005ba93e*/
  v141 = 13; /*0x1005ba945*/
  LOBYTE(v164) = 2; /*0x1005ba950*/
  v165 = 0; /*0x1005ba954*/
  v166 = nullptr; /*0x1005ba95c*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::he48578e7025422e1(&v156, &v135, &v139); /*0x1005ba979*/
  if ( v156.i64[0] == 0x8000000000000000LL ) /*0x1005ba98f*/
  {
    v103 = v156.i64[1]; /*0x1005ba991*/
    v104 = 32 * v156.i64[3]; /*0x1005ba99f*/
    v163 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 24); /*0x1005ba9a8*/
    v162 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 16); /*0x1005ba9b1*/
    v105 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3]); /*0x1005ba9b5*/
    v161 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 8); /*0x1005ba9be*/
    v160 = v105; /*0x1005ba9c2*/
    *(_QWORD *)(v156.i64[1] + v104 + 24) = v167; /*0x1005ba9ca*/
    *(_QWORD *)(v103 + v104 + 16) = v166; /*0x1005ba9d3*/
    v106 = v164; /*0x1005ba9d8*/
    *(_QWORD *)(v103 + v104 + 8) = v165; /*0x1005ba9e0*/
    *(_QWORD *)(v103 + v104) = v106; /*0x1005ba9e5*/
    if ( (_BYTE)v160 != 6 ) /*0x1005ba9ed*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v160); /*0x1005ba9f7*/
  }
  else
  {
    v155 = v159; /*0x1005baa05*/
    v154 = v158; /*0x1005baa10*/
    v153 = v157; /*0x1005baa1b*/
    v152 = v156; /*0x1005baa37*/
    v151 = v167; /*0x1005baa5e*/
    v150 = (__int64)v166; /*0x1005baa69*/
    v149 = v165; /*0x1005baa78*/
    v148 = v164; /*0x1005baa7f*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h84e55971b5f294a8( /*0x1005baa98*/
      (__int64)&v160,
      v152.i64,
      &v148);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1005baa9d*/
  v96 = 12; /*0x1005baaa2*/
  v107 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xCu, 1u); /*0x1005baab1*/
  if ( !v107 ) /*0x1005baab9*/
LABEL_115:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v96); /*0x1005bae54*/
  qmemcpy(v107, "total_tokens", 12); /*0x1005baac9*/
  v139 = 12; /*0x1005baad3*/
  v140 = (__int64)v107; /*0x1005baade*/
  v141 = 12; /*0x1005baae5*/
  LOBYTE(v164) = 2; /*0x1005baaf0*/
  v165 = 0; /*0x1005baaf4*/
  v166 = nullptr; /*0x1005baafc*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::he48578e7025422e1(&v156, &v135, &v139); /*0x1005bab19*/
  if ( v156.i64[0] == 0x8000000000000000LL ) /*0x1005bab2f*/
  {
    v108 = v156.i64[1]; /*0x1005bab31*/
    v109 = 32 * v156.i64[3]; /*0x1005bab3f*/
    v163 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 24); /*0x1005bab48*/
    v162 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 16); /*0x1005bab51*/
    v110 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3]); /*0x1005bab55*/
    v161 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 8); /*0x1005bab5e*/
    v160 = v110; /*0x1005bab62*/
    *(_QWORD *)(v156.i64[1] + v109 + 24) = v167; /*0x1005bab6a*/
    *(_QWORD *)(v108 + v109 + 16) = v166; /*0x1005bab73*/
    v111 = v164; /*0x1005bab78*/
    *(_QWORD *)(v108 + v109 + 8) = v165; /*0x1005bab80*/
    *(_QWORD *)(v108 + v109) = v111; /*0x1005bab85*/
    if ( (_BYTE)v160 != 6 ) /*0x1005bab8d*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v160); /*0x1005bab97*/
  }
  else
  {
    v155 = v159; /*0x1005baba5*/
    v154 = v158; /*0x1005babb0*/
    v153 = v157; /*0x1005babbb*/
    v152 = v156; /*0x1005babd7*/
    v151 = v167; /*0x1005babfe*/
    v150 = (__int64)v166; /*0x1005bac09*/
    v149 = v165; /*0x1005bac18*/
    v148 = v164; /*0x1005bac1f*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h84e55971b5f294a8( /*0x1005bac38*/
      (__int64)&v160,
      v152.i64,
      &v148);
  }
  v144 = v135; /*0x1005bac4b*/
  v145 = (__int64)v136; /*0x1005bac52*/
  v146 = v137; /*0x1005bac60*/
  LOBYTE(v143) = 5; /*0x1005bac67*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::he48578e7025422e1(&v156, v133, (__int64 *)&v131); /*0x1005bac83*/
  if ( v156.i64[0] == 0x8000000000000000LL ) /*0x1005bac99*/
  {
    v112 = v156.i64[1]; /*0x1005bac9b*/
    v113 = 32 * v156.i64[3]; /*0x1005baca9*/
    v163 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 24); /*0x1005bacb2*/
    v162 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 16); /*0x1005bacbb*/
    v114 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3]); /*0x1005bacbf*/
    v161 = *(_QWORD *)(v156.i64[1] + 32 * v156.i64[3] + 8); /*0x1005bacc8*/
    v160 = v114; /*0x1005baccc*/
    *(_QWORD *)(v156.i64[1] + v113 + 24) = v146; /*0x1005bacd7*/
    *(_QWORD *)(v112 + v113 + 16) = v145; /*0x1005bace3*/
    v115 = v143; /*0x1005bace8*/
    *(_QWORD *)(v112 + v113 + 8) = v144; /*0x1005bacf6*/
    *(_QWORD *)(v112 + v113) = v115; /*0x1005bacfb*/
    if ( (_BYTE)v160 != 6 ) /*0x1005bad03*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v160); /*0x1005bad0d*/
  }
  else
  {
    v155 = v159; /*0x1005bad1b*/
    v154 = v158; /*0x1005bad26*/
    v153 = v157; /*0x1005bad31*/
    v152 = v156; /*0x1005bad4d*/
    v151 = v146; /*0x1005bad77*/
    v150 = v145; /*0x1005bad85*/
    v149 = v144; /*0x1005bad9a*/
    v148 = v143; /*0x1005bada1*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h84e55971b5f294a8( /*0x1005badba*/
      (__int64)&v160,
      v152.i64,
      &v148);
  }
  *(_QWORD *)(v86 + 24) = v134; /*0x1005badc6*/
  v116 = v133[0]; /*0x1005badca*/
  *(_QWORD *)(v86 + 16) = v133[1]; /*0x1005badd8*/
  *(_QWORD *)(v86 + 8) = v116; /*0x1005baddc*/
  *(_BYTE *)v86 = 5; /*0x1005bade0*/
  return v86; /*0x1005bade7*/
}