// __ZN13codexmate_lib4core5relay10translator32anthropic_to_openai_chat_request @ 0x1008700d0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::translator::anthropic_to_openai_chat_request::h14ee8ffc9106fc93(
        _QWORD *a1,
        __int64 a2,
        size_t a3,
        signed __int64 a4)
{
  __int64 v5; // r12
  unsigned __int8 *v6; // rax
  __int64 v7; // rbx
  const void *v8; // rsi
  size_t v9; // r15
  __int64 v10; // r14
  _DWORD *v11; // rax
  __int64 v12; // rax
  __int64 *v13; // rdi
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 *v18; // rsi
  _DWORD *v19; // rax
  signed __int64 v20; // r12
  void *v21; // r14
  void *v22; // rax
  __int64 v23; // r13
  __int64 v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rdx
  __int64 v27; // rdx
  __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // r15
  __int64 v34; // rbx
  __int64 v35; // r15
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // rax
  __int64 v39; // r14
  const void *v40; // rsi
  __int64 v41; // r15
  __int64 v42; // rbx
  __int64 v43; // rax
  size_t v44; // r15
  __int64 v45; // rax
  __int64 *v46; // rdi
  __int64 v47; // rax
  __int64 v48; // rcx
  __int64 v49; // rdx
  __int64 v50; // rdx
  __int64 *v51; // rsi
  _QWORD *v52; // rax
  size_t v53; // r13
  __int64 v54; // rax
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rdx
  __int64 *v58; // rax
  __int64 v59; // rcx
  __int64 v60; // rsi
  __int64 *v61; // rbx
  __int64 v62; // rax
  __int64 *v63; // rax
  __int64 v64; // rcx
  __int64 v65; // rsi
  __int64 *v66; // rbx
  __int64 v67; // rax
  __int64 *v68; // rax
  __int64 v69; // rcx
  __int64 v70; // rsi
  __int64 *v71; // rbx
  __int64 v72; // rax
  __int64 *v73; // rax
  __int64 v74; // rcx
  __int64 v75; // rsi
  __int64 *v76; // rbx
  __int64 v77; // rax
  __int64 *v78; // rax
  __int64 v79; // rcx
  __int64 v80; // rsi
  __int64 *v81; // rbx
  __int64 v82; // rax
  __int64 v83; // rax
  __int64 *v84; // rbx
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // r15
  const char *v88; // rdi
  __int64 v89; // rax
  __int64 v90; // rcx
  __int64 v91; // rax
  __int64 v92; // rax
  __int64 v93; // rcx
  void *v94; // rax
  __int64 v95; // rbx
  _DWORD *v96; // rax
  _QWORD *v97; // rax
  _DWORD *v98; // rax
  __int64 v99; // r15
  _DWORD *v100; // rax
  __int64 *v101; // rbx
  __int64 v102; // rax
  _QWORD *v103; // rdx
  __int64 v104; // rax
  __int64 v105; // rdi
  __int64 i; // r14
  _QWORD *v108; // rax
  __int64 v109; // [rsp+8h] [rbp-198h] BYREF
  const void *v110; // [rsp+10h] [rbp-190h]
  __int64 v111; // [rsp+18h] [rbp-188h]
  _QWORD *v112; // [rsp+20h] [rbp-180h]
  const void *v113; // [rsp+28h] [rbp-178h]
  __int64 v114; // [rsp+30h] [rbp-170h]
  __int64 v115; // [rsp+38h] [rbp-168h] BYREF
  void *__src; // [rsp+40h] [rbp-160h]
  size_t __n; // [rsp+48h] [rbp-158h]
  __int64 v118; // [rsp+50h] [rbp-150h]
  __int64 v119; // [rsp+58h] [rbp-148h] BYREF
  __int64 v120; // [rsp+60h] [rbp-140h]
  __int64 v121; // [rsp+68h] [rbp-138h]
  __int64 v122; // [rsp+70h] [rbp-130h] BYREF
  _QWORD *v123; // [rsp+78h] [rbp-128h]
  __int64 v124; // [rsp+80h] [rbp-120h]
  __int64 v125; // [rsp+88h] [rbp-118h] BYREF
  _DWORD *v126; // [rsp+90h] [rbp-110h]
  __int64 v127; // [rsp+98h] [rbp-108h]
  __int64 v128; // [rsp+A0h] [rbp-100h]
  __int64 v129; // [rsp+A8h] [rbp-F8h] BYREF
  _QWORD *v130; // [rsp+B0h] [rbp-F0h]
  __int64 v131; // [rsp+B8h] [rbp-E8h]
  __int64 v132; // [rsp+C0h] [rbp-E0h] BYREF
  __int64 v133; // [rsp+C8h] [rbp-D8h]
  __int64 v134; // [rsp+D0h] [rbp-D0h]
  __int64 v135; // [rsp+D8h] [rbp-C8h]
  __int64 v136; // [rsp+E0h] [rbp-C0h]
  __int64 v137; // [rsp+E8h] [rbp-B8h]
  __int64 v138; // [rsp+F0h] [rbp-B0h]
  __int64 v139; // [rsp+F8h] [rbp-A8h] BYREF
  __int64 v140; // [rsp+100h] [rbp-A0h]
  _QWORD *v141; // [rsp+108h] [rbp-98h]
  __int64 v142; // [rsp+110h] [rbp-90h]
  size_t v143; // [rsp+118h] [rbp-88h]
  __int64 v144; // [rsp+120h] [rbp-80h] BYREF
  __int64 v145; // [rsp+128h] [rbp-78h]
  __int64 v146; // [rsp+130h] [rbp-70h]
  __int64 v147; // [rsp+138h] [rbp-68h]
  __int64 v148; // [rsp+140h] [rbp-60h] BYREF
  __int64 v149; // [rsp+148h] [rbp-58h] BYREF
  _QWORD *v150; // [rsp+150h] [rbp-50h]
  __int64 v151; // [rsp+158h] [rbp-48h]
  __int64 v152; // [rsp+160h] [rbp-40h]
  __int64 v153; // [rsp+168h] [rbp-38h]
  __int64 v154; // [rsp+170h] [rbp-30h]

  v143 = a3; /*0x1008700e7*/
  v5 = a2; /*0x1008700ee*/
  v112 = a1; /*0x1008700f1*/
  v119 = 0; /*0x1008700f8*/
  v120 = 8; /*0x100870103*/
  v121 = 0; /*0x10087010e*/
  v6 = (unsigned __int8 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100870128*/
                            "systeminstructions",
                            6,
                            a2);
  if ( v6 ) /*0x100870130*/
  {
    codexmate_lib::core::relay::translator::flatten_anthropic_text::h4a769f7578ec855b(&v109, v6); /*0x100870140*/
    v7 = v109; /*0x100870145*/
    if ( v109 != 0x8000000000000000LL ) /*0x100870159*/
    {
      v8 = v110; /*0x10087015f*/
      v113 = v110; /*0x100870174*/
      codexmate_lib::core::relay::translator::strip_billing_header::h742dc2e7fc7a94c2(&v115, v110, v111); /*0x10087017b*/
      v9 = __n; /*0x100870180*/
      if ( __n ) /*0x10087018a*/
      {
        v118 = v7; /*0x100870190*/
        v129 = 0; /*0x100870197*/
        v131 = 0; /*0x1008701a2*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v115, v8); /*0x1008701ad*/
        v10 = 4; /*0x1008701b2*/
        v11 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x1008701c2*/
        if ( !v11 ) /*0x1008701ca*/
          goto LABEL_158; /*0x1008701ca*/
        *v11 = 1701605234; /*0x1008701d3*/
        v122 = 4; /*0x1008701d9*/
        v123 = v11; /*0x1008701e4*/
        v124 = 4; /*0x1008701eb*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x1008701f6*/
        v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x100870205*/
        if ( !v12 ) /*0x10087020d*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x100871664*/
        *(_WORD *)(v12 + 4) = 28005; /*0x100870213*/
        *(_DWORD *)v12 = 1953724787; /*0x100870219*/
        LOBYTE(v144) = 3; /*0x10087021f*/
        v145 = 6; /*0x100870223*/
        v146 = v12; /*0x10087022b*/
        v147 = 6; /*0x10087022f*/
        v13 = &v132; /*0x100870237*/
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v132, &v129, &v122); /*0x10087024c*/
        if ( v132 == 0x8000000000000000LL ) /*0x100870262*/
        {
          v14 = v133; /*0x100870268*/
          v15 = 32 * v135; /*0x100870276*/
          v142 = *(_QWORD *)(v133 + 32 * v135 + 24); /*0x10087027f*/
          v141 = *(_QWORD **)(v133 + 32 * v135 + 16); /*0x10087028b*/
          v16 = *(_QWORD *)(v133 + 32 * v135); /*0x100870292*/
          v140 = *(_QWORD *)(v133 + 32 * v135 + 8); /*0x10087029b*/
          v139 = v16; /*0x1008702a2*/
          *(_QWORD *)(v133 + v15 + 24) = v147; /*0x1008702ad*/
          *(_QWORD *)(v14 + v15 + 16) = v146; /*0x1008702b6*/
          v17 = v144; /*0x1008702bb*/
          v18 = (__int64 *)v145; /*0x1008702bf*/
          *(_QWORD *)(v14 + v15 + 8) = v145; /*0x1008702c3*/
          *(_QWORD *)(v14 + v15) = v17; /*0x1008702c8*/
          if ( (_BYTE)v139 != 6 ) /*0x1008702d3*/
          {
            v13 = &v139; /*0x1008702d9*/
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v139); /*0x1008702e0*/
          }
        }
        else
        {
          v154 = v138; /*0x1008702f1*/
          v153 = v137; /*0x1008702fc*/
          v152 = v136; /*0x100870307*/
          v151 = v135; /*0x100870312*/
          v150 = (_QWORD *)v134; /*0x10087031d*/
          v149 = v133; /*0x10087032f*/
          v148 = v132; /*0x100870333*/
          v128 = v147; /*0x10087033b*/
          v127 = v146; /*0x100870346*/
          v126 = (_DWORD *)v145; /*0x100870355*/
          v125 = v144; /*0x10087035c*/
          v13 = &v139; /*0x100870363*/
          v18 = &v148; /*0x10087036a*/
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100870375*/
            &v139,
            &v148,
            &v125);
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v13, v18); /*0x10087037a*/
        v10 = 7; /*0x10087037f*/
        v19 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x10087038f*/
        if ( !v19 ) /*0x100870397*/
LABEL_158:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v10); /*0x100871631*/
        v114 = v5; /*0x1008703a0*/
        v20 = a4; /*0x1008703a7*/
        *(_DWORD *)((char *)v19 + 3) = 1953391988; /*0x1008703aa*/
        *v19 = 1953394531; /*0x1008703b1*/
        v122 = 7; /*0x1008703b7*/
        v123 = v19; /*0x1008703c2*/
        v124 = 7; /*0x1008703c9*/
        v21 = __src; /*0x1008703d4*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(7, 1); /*0x1008703db*/
        v22 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x1008703e8*/
        if ( !v22 ) /*0x1008703f0*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v9); /*0x100871673*/
        v23 = (__int64)v22; /*0x1008703f6*/
        memcpy(v22, v21, v9); /*0x100870402*/
        LOBYTE(v144) = 3; /*0x100870407*/
        v145 = v9; /*0x10087040b*/
        v146 = v23; /*0x10087040f*/
        v147 = v9; /*0x100870413*/
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v132, &v129, &v122); /*0x10087042c*/
        a4 = v20; /*0x100870442*/
        if ( v132 == 0x8000000000000000LL ) /*0x100870445*/
        {
          v24 = v133; /*0x10087044b*/
          v25 = 32 * v135; /*0x100870459*/
          v142 = *(_QWORD *)(v133 + 32 * v135 + 24); /*0x100870462*/
          v141 = *(_QWORD **)(v133 + 32 * v135 + 16); /*0x10087046e*/
          v26 = *(_QWORD *)(v133 + 32 * v135); /*0x100870475*/
          v140 = *(_QWORD *)(v133 + 32 * v135 + 8); /*0x10087047e*/
          v139 = v26; /*0x100870485*/
          *(_QWORD *)(v133 + v25 + 24) = v147; /*0x100870490*/
          *(_QWORD *)(v24 + v25 + 16) = v146; /*0x100870499*/
          v27 = v144; /*0x10087049e*/
          *(_QWORD *)(v24 + v25 + 8) = v145; /*0x1008704a6*/
          *(_QWORD *)(v24 + v25) = v27; /*0x1008704ab*/
          v5 = v114; /*0x1008704b6*/
          if ( (_BYTE)v139 != 6 ) /*0x1008704bd*/
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v139); /*0x1008704ca*/
        }
        else
        {
          v154 = v138; /*0x1008704db*/
          v153 = v137; /*0x1008704e6*/
          v152 = v136; /*0x1008704f1*/
          v151 = v135; /*0x1008704fc*/
          v150 = (_QWORD *)v134; /*0x100870507*/
          v149 = v133; /*0x100870519*/
          v148 = v132; /*0x10087051d*/
          v128 = v147; /*0x100870525*/
          v127 = v146; /*0x100870530*/
          v126 = (_DWORD *)v145; /*0x10087053f*/
          v125 = v144; /*0x100870546*/
          alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10087055f*/
            &v139,
            &v148,
            &v125);
          v5 = v114; /*0x100870564*/
        }
        v149 = v129; /*0x100870579*/
        v150 = v130; /*0x10087057d*/
        v151 = v131; /*0x100870588*/
        LOBYTE(v148) = 5; /*0x10087058c*/
        v28 = v121; /*0x100870590*/
        if ( v121 == v119 ) /*0x10087059e*/
          alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hea5bccf5eff581ab(&v119); /*0x1008705a7*/
        v29 = v120; /*0x1008705ac*/
        v30 = 32 * v28; /*0x1008705b6*/
        *(_QWORD *)(v120 + v30 + 24) = v151; /*0x1008705be*/
        *(_QWORD *)(v29 + v30 + 16) = v150; /*0x1008705c7*/
        v31 = v148; /*0x1008705cc*/
        *(_QWORD *)(v29 + v30 + 8) = v149; /*0x1008705d4*/
        *(_QWORD *)(v29 + v30) = v31; /*0x1008705d9*/
        v121 = v28 + 1; /*0x1008705e0*/
        v7 = v118; /*0x1008705e7*/
      }
      if ( v115 ) /*0x1008705f8*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v115, 1); /*0x100870606*/
      if ( v7 ) /*0x10087060e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v113, v7, 1); /*0x10087061f*/
    }
  }
  v32 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100870633*/
          "messagesobjectpropertiesdescriptionparametersstrict",
          8,
          v5);
  if ( v32 ) /*0x10087063b*/
  {
    if ( *(_BYTE *)v32 == 4 ) /*0x100870640*/
    {
      v33 = *(_QWORD *)(v32 + 24); /*0x100870642*/
      if ( v33 ) /*0x100870649*/
      {
        v34 = *(_QWORD *)(v32 + 16); /*0x10087064b*/
        v35 = 32 * v33; /*0x10087064f*/
        do /*0x100870673*/
        {
          codexmate_lib::core::relay::translator::translate_anthropic_message_to_openai::hf77050f34a40c814(v34, &v119); /*0x100870666*/
          v34 += 32; /*0x10087066b*/
          v35 -= 32; /*0x10087066f*/
        }
        while ( v35 ); /*0x100870673*/
      }
    }
  }
  v36 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("model", 5, v5); /*0x100870684*/
  if ( v36 && *(_BYTE *)v36 == 3 ) /*0x100870691*/
  {
    v143 = *(_QWORD *)(v36 + 16); /*0x100870697*/
    a4 = *(_QWORD *)(v36 + 24); /*0x10087069e*/
  }
  if ( a4 < 0 ) /*0x1008706a5*/
  {
    v37 = 0; /*0x1008706a7*/
    goto LABEL_33; /*0x1008706a7*/
  }
  if ( a4 ) /*0x1008706b9*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("model", 5); /*0x1008706bb*/
    v37 = 1; /*0x1008706c0*/
    v38 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a4, 1); /*0x1008706cd*/
    if ( !v38 ) /*0x1008706d5*/
LABEL_33:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v37, a4); /*0x1008706a9*/
    v39 = v38; /*0x1008706d7*/
  }
  else
  {
    v39 = 1; /*0x1008706dc*/
  }
  v40 = (const void *)v143; /*0x1008706e2*/
  v143 = a4; /*0x1008706ec*/
  memcpy((void *)v39, v40, a4); /*0x1008706f6*/
  v129 = 0; /*0x1008706fb*/
  v131 = 0; /*0x100870706*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v39, v40); /*0x100870711*/
  v41 = 5; /*0x100870716*/
  v42 = 1; /*0x10087071c*/
  v43 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x10087072b*/
  if ( !v43 ) /*0x100870733*/
    goto LABEL_157; /*0x100870733*/
  *(_BYTE *)(v43 + 4) = 108; /*0x100870739*/
  *(_DWORD *)v43 = 1701080941; /*0x10087073d*/
  v122 = 5; /*0x100870743*/
  v123 = (_QWORD *)v43; /*0x10087074e*/
  v124 = 5; /*0x100870755*/
  v44 = v143; /*0x100870760*/
  if ( v143 ) /*0x10087076a*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x10087076f*/
    v45 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v44, 1); /*0x10087077c*/
    if ( !v45 ) /*0x100870784*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v143); /*0x100871644*/
    v42 = v45; /*0x10087078a*/
    v44 = v143; /*0x10087078d*/
  }
  memcpy((void *)v42, (const void *)v39, v44); /*0x10087079d*/
  LOBYTE(v144) = 3; /*0x1008707a2*/
  v145 = v44; /*0x1008707a6*/
  v146 = v42; /*0x1008707aa*/
  v147 = v44; /*0x1008707ae*/
  v46 = &v132; /*0x1008707b2*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v132, &v129, &v122); /*0x1008707c7*/
  if ( v132 == 0x8000000000000000LL ) /*0x1008707dd*/
  {
    v47 = v133; /*0x1008707e3*/
    v48 = 32 * v135; /*0x1008707f1*/
    v142 = *(_QWORD *)(v133 + 32 * v135 + 24); /*0x1008707fa*/
    v141 = *(_QWORD **)(v133 + 32 * v135 + 16); /*0x100870806*/
    v49 = *(_QWORD *)(v133 + 32 * v135); /*0x10087080d*/
    v140 = *(_QWORD *)(v133 + 32 * v135 + 8); /*0x100870816*/
    v139 = v49; /*0x10087081d*/
    *(_QWORD *)(v133 + v48 + 24) = v147; /*0x100870828*/
    *(_QWORD *)(v47 + v48 + 16) = v146; /*0x100870831*/
    v50 = v144; /*0x100870836*/
    v51 = (__int64 *)v145; /*0x10087083a*/
    *(_QWORD *)(v47 + v48 + 8) = v145; /*0x10087083e*/
    *(_QWORD *)(v47 + v48) = v50; /*0x100870843*/
    if ( (_BYTE)v139 != 6 ) /*0x10087084e*/
    {
      v46 = &v139; /*0x100870854*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v139); /*0x10087085b*/
    }
  }
  else
  {
    v154 = v138; /*0x10087086c*/
    v153 = v137; /*0x100870877*/
    v152 = v136; /*0x100870882*/
    v151 = v135; /*0x10087088d*/
    v150 = (_QWORD *)v134; /*0x100870898*/
    v149 = v133; /*0x1008708aa*/
    v148 = v132; /*0x1008708ae*/
    v128 = v147; /*0x1008708b6*/
    v127 = v146; /*0x1008708c1*/
    v126 = (_DWORD *)v145; /*0x1008708d0*/
    v125 = v144; /*0x1008708d7*/
    v46 = &v139; /*0x1008708de*/
    v51 = &v148; /*0x1008708e5*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x1008708f0*/
      &v139,
      &v148,
      &v125);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v46, v51); /*0x1008708f5*/
  v41 = 8; /*0x1008708fa*/
  v52 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x10087090a*/
  if ( !v52 ) /*0x100870912*/
LABEL_157:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v41); /*0x100871622*/
  *v52 = 0x736567617373656DLL; /*0x100870925*/
  v122 = 8; /*0x100870929*/
  v123 = v52; /*0x100870934*/
  v124 = 8; /*0x10087093b*/
  serde_core::ser::Serializer::collect_seq::h84c021fc6bf1d891(&v148, &v119); /*0x100870951*/
  if ( (_BYTE)v148 == 6 ) /*0x10087095a*/
  {
    v132 = v149; /*0x10087156e*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100871596*/
      "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
      43,
      &v132,
      &off_10196D480,
      &off_10196CE08);
  }
  v147 = v151; /*0x100870964*/
  v146 = (__int64)v150; /*0x10087096c*/
  v145 = v149; /*0x100870978*/
  v144 = v148; /*0x10087097c*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v132, &v129, &v122); /*0x100870995*/
  v53 = v143; /*0x1008709ab*/
  if ( v132 == 0x8000000000000000LL ) /*0x1008709b2*/
  {
    v54 = v133; /*0x1008709b8*/
    v55 = 32 * v135; /*0x1008709c6*/
    v142 = *(_QWORD *)(v133 + 32 * v135 + 24); /*0x1008709cf*/
    v141 = *(_QWORD **)(v133 + 32 * v135 + 16); /*0x1008709db*/
    v56 = *(_QWORD *)(v133 + 32 * v135); /*0x1008709e2*/
    v140 = *(_QWORD *)(v133 + 32 * v135 + 8); /*0x1008709eb*/
    v139 = v56; /*0x1008709f2*/
    *(_QWORD *)(v133 + v55 + 24) = v147; /*0x1008709fd*/
    *(_QWORD *)(v54 + v55 + 16) = v146; /*0x100870a06*/
    v57 = v144; /*0x100870a0b*/
    *(_QWORD *)(v54 + v55 + 8) = v145; /*0x100870a13*/
    *(_QWORD *)(v54 + v55) = v57; /*0x100870a18*/
    if ( (_BYTE)v139 != 6 ) /*0x100870a23*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v139); /*0x100870a30*/
  }
  else
  {
    v154 = v138; /*0x100870a41*/
    v153 = v137; /*0x100870a4c*/
    v152 = v136; /*0x100870a57*/
    v151 = v135; /*0x100870a62*/
    v150 = (_QWORD *)v134; /*0x100870a6d*/
    v149 = v133; /*0x100870a7f*/
    v148 = v132; /*0x100870a83*/
    v128 = v147; /*0x100870a8b*/
    v127 = v146; /*0x100870a96*/
    v126 = (_DWORD *)v145; /*0x100870aa5*/
    v125 = v144; /*0x100870aac*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100870ac5*/
      &v139,
      &v148,
      &v125);
  }
  v140 = v129; /*0x100870ad8*/
  v141 = v130; /*0x100870adf*/
  v142 = v131; /*0x100870aed*/
  LOBYTE(v139) = 5; /*0x100870af4*/
  v58 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100870b0a*/
                     &unk_101674E74,
                     6,
                     v5);
  if ( v58 ) /*0x100870b12*/
  {
    switch ( *(_BYTE *)v58 ) /*0x100870b29*/
    {
      case 0: /*0x100870b29*/
        LOBYTE(v148) = 0; /*0x100870b62*/
        goto LABEL_63; /*0x100870b66*/
      case 1: /*0x100870b29*/
      case 2: /*0x100870b29*/
        v151 = v58[3]; /*0x100870b2f*/
        v150 = (_QWORD *)v58[2]; /*0x100870b37*/
        v59 = *v58; /*0x100870b3b*/
        v149 = v58[1]; /*0x100870b42*/
        v148 = v59; /*0x100870b46*/
        goto LABEL_63; /*0x100870b4a*/
      case 3: /*0x100870b29*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v149, v58 + 1); /*0x100870b73*/
        LOBYTE(v148) = 3; /*0x100870b78*/
        goto LABEL_63; /*0x100870b7c*/
      case 4: /*0x100870b29*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(&v149, v58 + 1); /*0x100870b57*/
        LOBYTE(v148) = 4; /*0x100870b5c*/
        goto LABEL_63; /*0x100870b60*/
      case 5: /*0x100870b29*/
        if ( v58[3] ) /*0x100870b7e*/
        {
          v60 = v58[1]; /*0x100870b85*/
          if ( !v60 ) /*0x100870b8c*/
            goto LABEL_154; /*0x100870b8c*/
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244( /*0x100870b9a*/
            &v149,
            v60,
            v58[2]);
        }
        else
        {
          v149 = 0; /*0x100870ba1*/
          v151 = 0; /*0x100870ba9*/
        }
        LOBYTE(v148) = 5; /*0x100870bb1*/
LABEL_63:
        v61 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x100870bb5*/
                           &unk_101674E74,
                           6u);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v61); /*0x100870bd3*/
        v61[3] = v151; /*0x100870bdc*/
        v61[2] = (__int64)v150; /*0x100870be4*/
        v62 = v148; /*0x100870be8*/
        v61[1] = v149; /*0x100870bf0*/
        *v61 = v62; /*0x100870bf4*/
        break; /*0x100870bf4*/
    }
  }
  v63 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100870c06*/
                     &unk_101674EAE,
                     10,
                     v5);
  if ( v63 ) /*0x100870c0e*/
  {
    switch ( *(_BYTE *)v63 ) /*0x100870c25*/
    {
      case 0: /*0x100870c25*/
        LOBYTE(v148) = 0; /*0x100870c5e*/
        goto LABEL_75; /*0x100870c62*/
      case 1: /*0x100870c25*/
      case 2: /*0x100870c25*/
        v151 = v63[3]; /*0x100870c2b*/
        v150 = (_QWORD *)v63[2]; /*0x100870c33*/
        v64 = *v63; /*0x100870c37*/
        v149 = v63[1]; /*0x100870c3e*/
        v148 = v64; /*0x100870c42*/
        goto LABEL_75; /*0x100870c46*/
      case 3: /*0x100870c25*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v149, v63 + 1); /*0x100870c6f*/
        LOBYTE(v148) = 3; /*0x100870c74*/
        goto LABEL_75; /*0x100870c78*/
      case 4: /*0x100870c25*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(&v149, v63 + 1); /*0x100870c53*/
        LOBYTE(v148) = 4; /*0x100870c58*/
        goto LABEL_75; /*0x100870c5c*/
      case 5: /*0x100870c25*/
        if ( v63[3] ) /*0x100870c7a*/
        {
          v65 = v63[1]; /*0x100870c81*/
          if ( !v65 ) /*0x100870c88*/
            goto LABEL_154; /*0x100870c88*/
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244( /*0x100870c96*/
            &v149,
            v65,
            v63[2]);
        }
        else
        {
          v149 = 0; /*0x100870c9d*/
          v151 = 0; /*0x100870ca5*/
        }
        LOBYTE(v148) = 5; /*0x100870cad*/
LABEL_75:
        v66 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x100870cb1*/
                           &unk_101674EAE,
                           0xAu);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v66); /*0x100870ccf*/
        v66[3] = v151; /*0x100870cd8*/
        v66[2] = (__int64)v150; /*0x100870ce0*/
        v67 = v148; /*0x100870ce4*/
        v66[1] = v149; /*0x100870cec*/
        *v66 = v67; /*0x100870cf0*/
        break; /*0x100870cf0*/
    }
  }
  v68 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100870d02*/
                     &unk_101674E8D,
                     11,
                     v5);
  if ( v68 ) /*0x100870d0a*/
  {
    switch ( *(_BYTE *)v68 ) /*0x100870d21*/
    {
      case 0: /*0x100870d21*/
        LOBYTE(v148) = 0; /*0x100870d5a*/
        goto LABEL_87; /*0x100870d5e*/
      case 1: /*0x100870d21*/
      case 2: /*0x100870d21*/
        v151 = v68[3]; /*0x100870d27*/
        v150 = (_QWORD *)v68[2]; /*0x100870d2f*/
        v69 = *v68; /*0x100870d33*/
        v149 = v68[1]; /*0x100870d3a*/
        v148 = v69; /*0x100870d3e*/
        goto LABEL_87; /*0x100870d42*/
      case 3: /*0x100870d21*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v149, v68 + 1); /*0x100870d6b*/
        LOBYTE(v148) = 3; /*0x100870d70*/
        goto LABEL_87; /*0x100870d74*/
      case 4: /*0x100870d21*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(&v149, v68 + 1); /*0x100870d4f*/
        LOBYTE(v148) = 4; /*0x100870d54*/
        goto LABEL_87; /*0x100870d58*/
      case 5: /*0x100870d21*/
        if ( v68[3] ) /*0x100870d76*/
        {
          v70 = v68[1]; /*0x100870d7d*/
          if ( !v70 ) /*0x100870d84*/
            goto LABEL_154; /*0x100870d84*/
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244( /*0x100870d92*/
            &v149,
            v70,
            v68[2]);
        }
        else
        {
          v149 = 0; /*0x100870d99*/
          v151 = 0; /*0x100870da1*/
        }
        LOBYTE(v148) = 5; /*0x100870da9*/
LABEL_87:
        v71 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x100870dad*/
                           &unk_101674E8D,
                           0xBu);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v71); /*0x100870dcb*/
        v71[3] = v151; /*0x100870dd4*/
        v71[2] = (__int64)v150; /*0x100870ddc*/
        v72 = v148; /*0x100870de0*/
        v71[1] = v149; /*0x100870de8*/
        *v71 = v72; /*0x100870dec*/
        break; /*0x100870dec*/
    }
  }
  v73 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100870dfe*/
                     &unk_101674E98,
                     5,
                     v5);
  if ( v73 ) /*0x100870e06*/
  {
    switch ( *(_BYTE *)v73 ) /*0x100870e1d*/
    {
      case 0: /*0x100870e1d*/
        LOBYTE(v148) = 0; /*0x100870e56*/
        goto LABEL_99; /*0x100870e5a*/
      case 1: /*0x100870e1d*/
      case 2: /*0x100870e1d*/
        v151 = v73[3]; /*0x100870e23*/
        v150 = (_QWORD *)v73[2]; /*0x100870e2b*/
        v74 = *v73; /*0x100870e2f*/
        v149 = v73[1]; /*0x100870e36*/
        v148 = v74; /*0x100870e3a*/
        goto LABEL_99; /*0x100870e3e*/
      case 3: /*0x100870e1d*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v149, v73 + 1); /*0x100870e67*/
        LOBYTE(v148) = 3; /*0x100870e6c*/
        goto LABEL_99; /*0x100870e70*/
      case 4: /*0x100870e1d*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(&v149, v73 + 1); /*0x100870e4b*/
        LOBYTE(v148) = 4; /*0x100870e50*/
        goto LABEL_99; /*0x100870e54*/
      case 5: /*0x100870e1d*/
        if ( v73[3] ) /*0x100870e72*/
        {
          v75 = v73[1]; /*0x100870e79*/
          if ( !v75 ) /*0x100870e80*/
            goto LABEL_154; /*0x100870e80*/
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244( /*0x100870e8e*/
            &v149,
            v75,
            v73[2]);
        }
        else
        {
          v149 = 0; /*0x100870e95*/
          v151 = 0; /*0x100870e9d*/
        }
        LOBYTE(v148) = 5; /*0x100870ea5*/
LABEL_99:
        v76 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x100870ea9*/
                           &unk_101674E98,
                           5u);
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v76); /*0x100870ec7*/
        v76[3] = v151; /*0x100870ed0*/
        v76[2] = (__int64)v150; /*0x100870ed8*/
        v77 = v148; /*0x100870edc*/
        v76[1] = v149; /*0x100870ee4*/
        *v76 = v77; /*0x100870ee8*/
        break; /*0x100870ee8*/
    }
  }
  v78 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100870efa*/
                     "stop_sequences",
                     14,
                     v5);
  if ( !v78 ) /*0x100870f02*/
    goto LABEL_112; /*0x100870f02*/
  switch ( *(_BYTE *)v78 ) /*0x100870f19*/
  {
    case 0: /*0x100870f19*/
      LOBYTE(v148) = 0; /*0x100870f52*/
      goto LABEL_111; /*0x100870f56*/
    case 1: /*0x100870f19*/
    case 2: /*0x100870f19*/
      v151 = v78[3]; /*0x100870f1f*/
      v150 = (_QWORD *)v78[2]; /*0x100870f27*/
      v79 = *v78; /*0x100870f2b*/
      v149 = v78[1]; /*0x100870f32*/
      v148 = v79; /*0x100870f36*/
      goto LABEL_111; /*0x100870f3a*/
    case 3: /*0x100870f19*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v149, v78 + 1); /*0x100870f63*/
      LOBYTE(v148) = 3; /*0x100870f68*/
      goto LABEL_111; /*0x100870f6c*/
    case 4: /*0x100870f19*/
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(&v149, v78 + 1); /*0x100870f47*/
      LOBYTE(v148) = 4; /*0x100870f4c*/
      goto LABEL_111; /*0x100870f50*/
    case 5: /*0x100870f19*/
      if ( v78[3] ) /*0x100870f6e*/
      {
        v80 = v78[1]; /*0x100870f75*/
        if ( v80 ) /*0x100870f7c*/
        {
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244( /*0x100870f8a*/
            &v149,
            v80,
            v78[2]);
          goto LABEL_110; /*0x100870f8f*/
        }
LABEL_154:
        core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248); /*0x1008715a0*/
      }
      v149 = 0; /*0x100870f91*/
      v151 = 0; /*0x100870f99*/
LABEL_110:
      LOBYTE(v148) = 5; /*0x100870fa1*/
LABEL_111:
      v81 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x100870fa5*/
                         "stopLeftDownmovecell",
                         4u);
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v81); /*0x100870fc3*/
      v81[3] = v151; /*0x100870fcc*/
      v81[2] = (__int64)v150; /*0x100870fd4*/
      v82 = v148; /*0x100870fd8*/
      v81[1] = v149; /*0x100870fe0*/
      *v81 = v82; /*0x100870fe4*/
LABEL_112:
      v83 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100870fe7*/
              &unk_101674ECD,
              5,
              v5);
      if ( v83 && *(_BYTE *)v83 == 4 ) /*0x100871007*/
      {
        _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h68a2de9a50506d37( /*0x100871023*/
          &v132,
          *(_QWORD *)(v83 + 16),
          *(_QWORD *)(v83 + 16) + 32LL * *(_QWORD *)(v83 + 24));
        if ( v134 ) /*0x100871030*/
        {
          v151 = v134; /*0x100871039*/
          v150 = (_QWORD *)v133; /*0x10087104b*/
          v149 = v132; /*0x10087104f*/
          LOBYTE(v148) = 4; /*0x100871053*/
          v84 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x10087106f*/
                             &unk_101674ECD,
                             5u);
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v84); /*0x100871075*/
          v84[3] = v151; /*0x10087107e*/
          v84[2] = (__int64)v150; /*0x100871086*/
          v85 = v148; /*0x10087108a*/
          v84[1] = v149; /*0x100871092*/
          *v84 = v85; /*0x100871096*/
        }
        else if ( v132 ) /*0x1008710a5*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v133, 32 * v132, 8); /*0x1008710b7*/
        }
      }
      v86 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008710cb*/
              "tool_choicestop_sequences",
              11,
              v5);
      v87 = v86; /*0x1008710d0*/
      if ( v86 ) /*0x1008710d6*/
      {
        v88 = (const char *)&anon_10420c9971c21f44d230d15b39fb3fec_75; /*0x1008710dc*/
        v89 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008710eb*/
                &anon_10420c9971c21f44d230d15b39fb3fec_75,
                4,
                v86);
        if ( v89 && *(_BYTE *)v89 == 3 ) /*0x1008710fc*/
        {
          v90 = *(_QWORD *)(v89 + 16); /*0x100871102*/
          v91 = *(_QWORD *)(v89 + 24); /*0x100871106*/
          if ( v91 == 3 ) /*0x10087110e*/
          {
            if ( !(*(_WORD *)v90 ^ 0x6E61 | *(unsigned __int8 *)(v90 + 2) ^ 0x79) ) /*0x1008713e5*/
            {
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2( /*0x100871521*/
                &anon_10420c9971c21f44d230d15b39fb3fec_75,
                4);
              v99 = 8; /*0x100871526*/
              v108 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x100871536*/
              if ( v108 ) /*0x10087153e*/
              {
                *v108 = 0x6465726975716572LL; /*0x10087154e*/
                v149 = 8; /*0x100871551*/
                v150 = v108; /*0x100871559*/
                v151 = 8; /*0x10087155d*/
                goto LABEL_141; /*0x100871565*/
              }
LABEL_160:
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v99); /*0x10087164b*/
            }
          }
          else if ( v91 == 4 && *(_DWORD *)v90 == 1819242356 ) /*0x100871124*/
          {
            v88 = "name"; /*0x100871136*/
            v92 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("name", 4, v87); /*0x100871145*/
            if ( v92 ) /*0x10087114d*/
            {
              if ( *(_BYTE *)v92 == 3 ) /*0x100871156*/
              {
                v93 = *(_QWORD *)(v92 + 16); /*0x10087115c*/
                v94 = *(void **)(v92 + 24); /*0x100871160*/
                v115 = v93; /*0x100871164*/
                __src = v94; /*0x10087116b*/
                v129 = 0; /*0x100871172*/
                v131 = 0; /*0x10087117d*/
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("name", 4); /*0x100871188*/
                v95 = 4; /*0x10087118d*/
                v96 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x10087119c*/
                if ( !v96 ) /*0x1008711a4*/
                  goto LABEL_163; /*0x1008711a4*/
                *v96 = 1701869940; /*0x1008711ad*/
                v125 = 4; /*0x1008711b3*/
                v126 = v96; /*0x1008711be*/
                v127 = 4; /*0x1008711c5*/
                serde_json::value::to_value::h29e3c39dc75a9151(&v148, &off_10196C878); /*0x1008711db*/
                if ( (_BYTE)v148 == 6 ) /*0x1008711e4*/
                {
                  v132 = v149; /*0x1008715b5*/
                  core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1008715dd*/
                    "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                    43,
                    &v132,
                    &off_10196D480,
                    &off_10196CDC8);
                }
                v135 = v151; /*0x1008711ee*/
                v134 = (__int64)v150; /*0x1008711f9*/
                v133 = v149; /*0x100871208*/
                v132 = v148; /*0x10087120f*/
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de( /*0x10087122f*/
                  &v148,
                  &v129,
                  &v125,
                  &v132);
                if ( (_BYTE)v148 != 6 ) /*0x100871238*/
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v148); /*0x10087123e*/
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v148, &v129); /*0x100871243*/
                v95 = 8; /*0x100871248*/
                v97 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1); /*0x100871257*/
                if ( !v97 ) /*0x10087125f*/
LABEL_163:
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v95); /*0x100871682*/
                *v97 = 0x6E6F6974636E7566LL; /*0x100871272*/
                v122 = 8; /*0x100871276*/
                v123 = v97; /*0x100871281*/
                v124 = 8; /*0x100871288*/
                v144 = 0; /*0x100871293*/
                v146 = 0; /*0x10087129b*/
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(8, 1); /*0x1008712a3*/
                v98 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x1008712b2*/
                if ( !v98 ) /*0x1008712ba*/
                  alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x100871693*/
                *v98 = 1701667182; /*0x1008712c3*/
                v125 = 4; /*0x1008712c9*/
                v126 = v98; /*0x1008712d4*/
                v127 = 4; /*0x1008712db*/
                serde_json::value::to_value::h29e3c39dc75a9151(&v148, &v115); /*0x1008712f1*/
                if ( (_BYTE)v148 == 6 ) /*0x1008712fa*/
                {
                  v132 = v149; /*0x1008715eb*/
                  core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100871613*/
                    "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                    43,
                    &v132,
                    &off_10196D480,
                    &off_10196CDC8);
                }
                v135 = v151; /*0x100871304*/
                v134 = (__int64)v150; /*0x10087130f*/
                v133 = v149; /*0x10087131e*/
                v132 = v148; /*0x100871325*/
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de( /*0x100871342*/
                  &v148,
                  &v144,
                  &v125,
                  &v132);
                v53 = v143; /*0x10087134b*/
                if ( (_BYTE)v148 != 6 ) /*0x100871352*/
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v148); /*0x100871358*/
                v149 = v144; /*0x100871365*/
                v150 = (_QWORD *)v145; /*0x100871369*/
                v151 = v146; /*0x100871371*/
                LOBYTE(v148) = 5; /*0x100871375*/
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de( /*0x100871392*/
                  &v132,
                  &v129,
                  &v122,
                  &v148);
                if ( (_BYTE)v132 != 6 ) /*0x10087139e*/
                  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v132); /*0x1008713a7*/
                v149 = v129; /*0x1008713ba*/
                v150 = v130; /*0x1008713be*/
                v151 = v131; /*0x1008713c9*/
                LOBYTE(v148) = 5; /*0x1008713cd*/
                goto LABEL_142; /*0x1008713d1*/
              }
            }
          }
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v88, 4); /*0x1008713eb*/
        v99 = 4; /*0x1008713f0*/
        v100 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100871400*/
        if ( v100 ) /*0x100871408*/
        {
          *v100 = 1869903201; /*0x10087140e*/
          v149 = 4; /*0x100871414*/
          v150 = v100; /*0x10087141c*/
          v151 = 4; /*0x100871420*/
LABEL_141:
          LOBYTE(v148) = 3; /*0x100871428*/
LABEL_142:
          v101 = (__int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x10087142c*/
                              "tool_choicestop_sequences",
                              0xBu);
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v101); /*0x10087144a*/
          v101[3] = v151; /*0x100871453*/
          v101[2] = (__int64)v150; /*0x10087145b*/
          v102 = v148; /*0x10087145f*/
          v101[1] = v149; /*0x100871467*/
          *v101 = v102; /*0x10087146b*/
          goto LABEL_143; /*0x10087146b*/
        }
        goto LABEL_160; /*0x100871408*/
      }
LABEL_143:
      v103 = v112; /*0x10087146e*/
      v112[3] = v142; /*0x10087147c*/
      v103[2] = v141; /*0x100871487*/
      v104 = v139; /*0x10087148b*/
      v103[1] = v140; /*0x100871499*/
      *v103 = v104; /*0x10087149d*/
      if ( v53 ) /*0x1008714a3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v39, v53, 1); /*0x1008714b0*/
      v105 = v120; /*0x1008714b5*/
      for ( i = v121 + 1; i != 1; --i ) /*0x1008714c3*/
      {
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v105); /*0x1008714dd*/
        v105 += 32; /*0x1008714e2*/
      }
      if ( v119 ) /*0x1008714f1*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v120, 32 * v119, 8); /*0x100871503*/
      return v112;
  }
}