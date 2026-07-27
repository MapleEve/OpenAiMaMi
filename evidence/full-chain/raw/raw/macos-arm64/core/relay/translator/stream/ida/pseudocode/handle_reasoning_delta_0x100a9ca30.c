// __ZN13codexmate_lib4core5relay10translator6stream21ChatToResponsesStream22handle_reasoning_delta @ 0x100a9ca30 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::translator::stream::ChatToResponsesStream::handle_reasoning_delta::h2d795741751d5865(
        __int64 a1,
        void *a2,
        size_t a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6)
{
  size_t v6; // rbx
  bool v7; // of
  char **v8; // r15
  char ****v9; // r12
  __int64 v10; // r15
  __int64 v11; // r12
  void *v12; // rdi
  size_t v13; // r13
  __int64 v14; // r15
  _DWORD *v15; // rax
  void *v16; // rax
  char ***v17; // rdi
  __int64 v18; // rax
  __int64 v19; // rcx
  char ***v20; // rdx
  char *v21; // rdx
  char ****v22; // rsi
  void *v23; // rax
  __int64 v24; // rax
  char ***v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rcx
  char ***v28; // rdx
  char *v29; // rdx
  char ****v30; // rsi
  void *v31; // rax
  char ***v32; // rdi
  __int64 v33; // rax
  __int64 v34; // rcx
  char ***v35; // rdx
  char *v36; // rdx
  char ****v37; // rsi
  __int64 v38; // rax
  void *v39; // rax
  __int64 v40; // rbx
  __int64 v41; // rax
  __int64 v42; // rcx
  char ***v43; // rdx
  char *v44; // rdx
  __int64 v45; // r9
  void *v46; // r14
  size_t v47; // r15
  _QWORD *v48; // rdx
  __int64 v49; // rbx
  _QWORD *v50; // r12
  char **v52; // rsi
  char ****v53; // rdi
  __int64 v54; // r12
  _DWORD *v55; // rax
  void *v56; // rax
  char ***v57; // rdi
  __int64 v58; // rax
  __int64 v59; // rcx
  char ***v60; // rdx
  char *v61; // rdx
  char ****v62; // rsi
  void *v63; // rax
  char ***v64; // rdi
  __int64 v65; // rax
  __int64 v66; // rcx
  char ***v67; // rdx
  char *v68; // rdx
  char ****v69; // rsi
  _DWORD *v70; // rax
  __int64 v71; // rbx
  _DWORD *v72; // rax
  __int64 v73; // rax
  char ***v74; // rdi
  __int64 v75; // rax
  __int64 v76; // rcx
  char ***v77; // rdx
  char *v78; // rdx
  char ****v79; // rsi
  _WORD *v80; // rax
  __int64 v81; // r15
  __int64 v82; // rax
  __int64 v83; // rbx
  size_t v84; // r15
  char ***v85; // rdi
  __int64 v86; // rax
  __int64 v87; // rcx
  char ***v88; // rdx
  char *v89; // rdx
  char ****v90; // rsi
  _DWORD *v91; // rax
  __int64 v92; // rax
  __int64 v93; // rcx
  char ***v94; // rdx
  char *v95; // rdx
  __int64 v96; // rax
  __int64 v97; // rcx
  char ***v98; // rdx
  __int64 v99; // rdx
  __int64 v100; // r9
  void *v101; // r15
  size_t v102; // r12
  _QWORD *v103; // rdx
  __int64 v104; // rbx
  _QWORD *v105; // r14
  char ***v106; // rax
  _QWORD *v107; // r12
  _QWORD v108[3]; // [rsp+8h] [rbp-1B8h] BYREF
  size_t v109; // [rsp+20h] [rbp-1A0h]
  _QWORD v110[2]; // [rsp+28h] [rbp-198h] BYREF
  __int64 v111; // [rsp+38h] [rbp-188h]
  _QWORD v112[2]; // [rsp+40h] [rbp-180h] BYREF
  __int64 v113; // [rsp+50h] [rbp-170h]
  void *v114; // [rsp+58h] [rbp-168h]
  __int64 v115; // [rsp+60h] [rbp-160h]
  __int64 v116; // [rsp+68h] [rbp-158h]
  _QWORD *v117; // [rsp+70h] [rbp-150h]
  void *v118; // [rsp+78h] [rbp-148h]
  size_t v119; // [rsp+80h] [rbp-140h]
  __int64 v120; // [rsp+88h] [rbp-138h] BYREF
  void *v121; // [rsp+90h] [rbp-130h]
  __int64 v122; // [rsp+98h] [rbp-128h]
  __int64 v123; // [rsp+A0h] [rbp-120h] BYREF
  _DWORD *v124; // [rsp+A8h] [rbp-118h]
  __int64 v125; // [rsp+B0h] [rbp-110h]
  __int64 v126; // [rsp+B8h] [rbp-108h]
  char ***v127; // [rsp+C0h] [rbp-100h] BYREF
  __int64 (__fastcall **v128)(); // [rsp+C8h] [rbp-F8h]
  size_t v129; // [rsp+D0h] [rbp-F0h]
  __int64 (__fastcall *v130)(); // [rsp+D8h] [rbp-E8h]
  __int64 v131; // [rsp+E0h] [rbp-E0h]
  __int64 v132; // [rsp+E8h] [rbp-D8h]
  __int64 v133; // [rsp+F0h] [rbp-D0h]
  char *v134; // [rsp+F8h] [rbp-C8h] BYREF
  __int64 v135; // [rsp+100h] [rbp-C0h]
  __int64 v136; // [rsp+108h] [rbp-B8h]
  __int64 v137; // [rsp+110h] [rbp-B0h]
  char **v138; // [rsp+118h] [rbp-A8h] BYREF
  __int64 v139; // [rsp+120h] [rbp-A0h]
  void *__src; // [rsp+128h] [rbp-98h]
  __int64 v141; // [rsp+130h] [rbp-90h]
  __int64 v142; // [rsp+138h] [rbp-88h]
  __int64 v143; // [rsp+140h] [rbp-80h]
  __int64 v144; // [rsp+148h] [rbp-78h]
  char ***v145; // [rsp+150h] [rbp-70h]
  char ***v146; // [rsp+158h] [rbp-68h] BYREF
  void *v147; // [rsp+160h] [rbp-60h]
  size_t __n; // [rsp+168h] [rbp-58h]
  __int64 v149; // [rsp+170h] [rbp-50h]
  char *v150; // [rsp+178h] [rbp-48h] BYREF
  __int64 v151; // [rsp+180h] [rbp-40h]
  __int64 v152; // [rsp+188h] [rbp-38h]
  __int64 v153; // [rsp+190h] [rbp-30h]

  v117 = a4; /*0x100a9ca44*/
  v6 = a3; /*0x100a9ca4b*/
  v7 = __OFSUB__(0, *(_QWORD *)(a1 + 120)); /*0x100a9ca5a*/
  v116 = a1; /*0x100a9ca5e*/
  v114 = a2; /*0x100a9ca65*/
  if ( v7 ) /*0x100a9ca6c*/
  {
    v115 = *(unsigned int *)(a1 + 424); /*0x100a9ca78*/
    *(_DWORD *)(a1 + 424) = v115 + 1; /*0x100a9ca81*/
    uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(&v127); /*0x100a9ca8e*/
    v147 = v128; /*0x100a9caa1*/
    v146 = v127; /*0x100a9caa5*/
    v138 = nullptr; /*0x100a9caa9*/
    v139 = 1; /*0x100a9cab4*/
    __src = nullptr; /*0x100a9cabf*/
    v129 = 1610612768; /*0x100a9caca*/
    v127 = &v138; /*0x100a9cadc*/
    v128 = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100a9caea*/
    if ( (unsigned __int8)_$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..LowerHex$GT$::fmt::h49e9bba066e422cd( /*0x100a9cafc*/
                            &v146,
                            &v127) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100a9e0fb*/
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
        55,
        &v134,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
        &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
    v109 = v6; /*0x100a9cb09*/
    v8 = v138; /*0x100a9cb10*/
    v9 = (char ****)v139; /*0x100a9cb17*/
    if ( (unsigned __int64)__src <= 0xC ) /*0x100a9cb29*/
    {
      if ( __src != (void *)12 ) /*0x100a9d3b7*/
LABEL_5:
        core::str::slice_error_fail::h480e51fbd8b15eba(v139, __src, 0, 12, &off_101974300); /*0x100a9cb3b*/
    }
    else if ( *(char *)(v139 + 12) < -64 ) /*0x100a9cb35*/
    {
      goto LABEL_5; /*0x100a9cb35*/
    }
    v134 = (char *)v139; /*0x100a9d3bd*/
    v135 = 12; /*0x100a9d3c4*/
    v138 = &v134; /*0x100a9d3d6*/
    v139 = (__int64)_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100a9d3e4*/
    v52 = (char **)&unk_1017C5D13; /*0x100a9d3eb*/
    v53 = &v127; /*0x100a9d3f2*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v127, &unk_1017C5D13, &v138); /*0x100a9d400*/
    if ( v8 ) /*0x100a9d408*/
    {
      v53 = v9; /*0x100a9d40f*/
      v52 = v8; /*0x100a9d412*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v8, 1); /*0x100a9d415*/
    }
    v145 = v127; /*0x100a9d421*/
    v118 = v128; /*0x100a9d42c*/
    v119 = v129; /*0x100a9d43a*/
    v112[0] = 0; /*0x100a9d441*/
    v113 = 0; /*0x100a9d44c*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v53, v52); /*0x100a9d457*/
    v54 = 4; /*0x100a9d45c*/
    v55 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100a9d46c*/
    if ( !v55 ) /*0x100a9d474*/
      goto LABEL_86; /*0x100a9d474*/
    *v55 = 1701869940; /*0x100a9d47d*/
    v123 = 4; /*0x100a9d483*/
    v124 = v55; /*0x100a9d48e*/
    v125 = 4; /*0x100a9d495*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x100a9d4a0*/
    v56 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(26, 1); /*0x100a9d4af*/
    if ( !v56 ) /*0x100a9d4b7*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 26); /*0x100a9e1a0*/
    qmemcpy(v56, "response.output_item.added", 26); /*0x100a9d4e3*/
    LOBYTE(v150) = 3; /*0x100a9d4ec*/
    v151 = 26; /*0x100a9d4f0*/
    v152 = (__int64)v56; /*0x100a9d4f8*/
    v153 = 26; /*0x100a9d4fc*/
    v57 = &v138; /*0x100a9d504*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v138, v112, &v123); /*0x100a9d519*/
    if ( v138 == (char **)0x8000000000000000LL ) /*0x100a9d525*/
    {
      v58 = v139; /*0x100a9d527*/
      v59 = 32 * v141; /*0x100a9d535*/
      v149 = *(_QWORD *)(v139 + 32 * v141 + 24); /*0x100a9d53e*/
      __n = *(_QWORD *)(v139 + 32 * v141 + 16); /*0x100a9d547*/
      v60 = *(char ****)(v139 + 32 * v141); /*0x100a9d54b*/
      v147 = *(void **)(v139 + 32 * v141 + 8); /*0x100a9d554*/
      v146 = v60; /*0x100a9d558*/
      *(_QWORD *)(v139 + v59 + 24) = v153; /*0x100a9d560*/
      *(_QWORD *)(v58 + v59 + 16) = v152; /*0x100a9d569*/
      v61 = v150; /*0x100a9d56e*/
      v62 = (char ****)v151; /*0x100a9d572*/
      *(_QWORD *)(v58 + v59 + 8) = v151; /*0x100a9d576*/
      *(_QWORD *)(v58 + v59) = v61; /*0x100a9d57b*/
      if ( (_BYTE)v146 != 6 ) /*0x100a9d583*/
      {
        v57 = (char ***)&v146; /*0x100a9d589*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v146); /*0x100a9d58d*/
      }
    }
    else
    {
      v133 = v144; /*0x100a9d59b*/
      v132 = v143; /*0x100a9d5a6*/
      v131 = v142; /*0x100a9d5b4*/
      v130 = (__int64 (__fastcall *)())v141; /*0x100a9d5c2*/
      v129 = (size_t)__src; /*0x100a9d5d0*/
      v128 = (__int64 (__fastcall **)())v139; /*0x100a9d5e5*/
      v127 = (char ***)v138; /*0x100a9d5ec*/
      v137 = v153; /*0x100a9d5f7*/
      v136 = v152; /*0x100a9d602*/
      v135 = v151; /*0x100a9d611*/
      v134 = v150; /*0x100a9d618*/
      v57 = (char ***)&v146; /*0x100a9d61f*/
      v62 = &v127; /*0x100a9d623*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9d631*/
        &v146,
        &v127,
        &v134);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v57, v62); /*0x100a9d636*/
    v54 = 12; /*0x100a9d63b*/
    v63 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x100a9d64b*/
    if ( !v63 ) /*0x100a9d653*/
      goto LABEL_86; /*0x100a9d653*/
    qmemcpy(v63, "output_index", 12); /*0x100a9d663*/
    v123 = 12; /*0x100a9d66d*/
    v124 = v63; /*0x100a9d678*/
    v125 = 12; /*0x100a9d67f*/
    LOBYTE(v150) = 2; /*0x100a9d68a*/
    v151 = 0; /*0x100a9d68e*/
    v152 = v115; /*0x100a9d69d*/
    v64 = &v138; /*0x100a9d6a1*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v138, v112, &v123); /*0x100a9d6b6*/
    if ( v138 == (char **)0x8000000000000000LL ) /*0x100a9d6c2*/
    {
      v65 = v139; /*0x100a9d6c4*/
      v66 = 32 * v141; /*0x100a9d6d2*/
      v149 = *(_QWORD *)(v139 + 32 * v141 + 24); /*0x100a9d6db*/
      __n = *(_QWORD *)(v139 + 32 * v141 + 16); /*0x100a9d6e4*/
      v67 = *(char ****)(v139 + 32 * v141); /*0x100a9d6e8*/
      v147 = *(void **)(v139 + 32 * v141 + 8); /*0x100a9d6f1*/
      v146 = v67; /*0x100a9d6f5*/
      *(_QWORD *)(v139 + v66 + 24) = v153; /*0x100a9d6fd*/
      *(_QWORD *)(v65 + v66 + 16) = v152; /*0x100a9d706*/
      v68 = v150; /*0x100a9d70b*/
      v69 = (char ****)v151; /*0x100a9d70f*/
      *(_QWORD *)(v65 + v66 + 8) = v151; /*0x100a9d713*/
      *(_QWORD *)(v65 + v66) = v68; /*0x100a9d718*/
      if ( (_BYTE)v146 != 6 ) /*0x100a9d720*/
      {
        v64 = (char ***)&v146; /*0x100a9d726*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v146); /*0x100a9d72a*/
      }
    }
    else
    {
      v133 = v144; /*0x100a9d738*/
      v132 = v143; /*0x100a9d743*/
      v131 = v142; /*0x100a9d751*/
      v130 = (__int64 (__fastcall *)())v141; /*0x100a9d75f*/
      v129 = (size_t)__src; /*0x100a9d76d*/
      v128 = (__int64 (__fastcall **)())v139; /*0x100a9d782*/
      v127 = (char ***)v138; /*0x100a9d789*/
      v137 = v153; /*0x100a9d794*/
      v136 = v152; /*0x100a9d79f*/
      v135 = v151; /*0x100a9d7ae*/
      v134 = v150; /*0x100a9d7b5*/
      v64 = (char ***)&v146; /*0x100a9d7bc*/
      v69 = &v127; /*0x100a9d7c0*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9d7ce*/
        &v146,
        &v127,
        &v134);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v64, v69); /*0x100a9d7d3*/
    v54 = 4; /*0x100a9d7d8*/
    v70 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100a9d7e8*/
    if ( !v70 ) /*0x100a9d7f0*/
LABEL_86:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v54); /*0x100a9e160*/
    *v70 = 1835365481; /*0x100a9d7f6*/
    v108[0] = 4; /*0x100a9d7fc*/
    v108[1] = v70; /*0x100a9d80a*/
    v108[2] = 4; /*0x100a9d811*/
    v110[0] = 0; /*0x100a9d81c*/
    v111 = 0; /*0x100a9d827*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x100a9d832*/
    v71 = 4; /*0x100a9d837*/
    v72 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100a9d846*/
    if ( !v72 ) /*0x100a9d84e*/
      goto LABEL_87; /*0x100a9d84e*/
    *v72 = 1701869940; /*0x100a9d857*/
    v120 = 4; /*0x100a9d85d*/
    v121 = v72; /*0x100a9d868*/
    v122 = 4; /*0x100a9d86f*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x100a9d87a*/
    v73 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1); /*0x100a9d889*/
    if ( !v73 ) /*0x100a9d891*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9); /*0x100a9e1b1*/
    *(_QWORD *)v73 = 0x6E696E6F73616572LL; /*0x100a9d8a1*/
    *(_BYTE *)(v73 + 8) = 103; /*0x100a9d8a4*/
    LOBYTE(v150) = 3; /*0x100a9d8a8*/
    v151 = 9; /*0x100a9d8ac*/
    v152 = v73; /*0x100a9d8b4*/
    v153 = 9; /*0x100a9d8b8*/
    v74 = &v138; /*0x100a9d8c0*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v138, v110, &v120); /*0x100a9d8d5*/
    if ( v138 == (char **)0x8000000000000000LL ) /*0x100a9d8e1*/
    {
      v75 = v139; /*0x100a9d8e3*/
      v76 = 32 * v141; /*0x100a9d8f1*/
      v149 = *(_QWORD *)(v139 + 32 * v141 + 24); /*0x100a9d8fa*/
      __n = *(_QWORD *)(v139 + 32 * v141 + 16); /*0x100a9d903*/
      v77 = *(char ****)(v139 + 32 * v141); /*0x100a9d907*/
      v147 = *(void **)(v139 + 32 * v141 + 8); /*0x100a9d910*/
      v146 = v77; /*0x100a9d914*/
      *(_QWORD *)(v139 + v76 + 24) = v153; /*0x100a9d91c*/
      *(_QWORD *)(v75 + v76 + 16) = v152; /*0x100a9d925*/
      v78 = v150; /*0x100a9d92a*/
      v79 = (char ****)v151; /*0x100a9d92e*/
      *(_QWORD *)(v75 + v76 + 8) = v151; /*0x100a9d932*/
      *(_QWORD *)(v75 + v76) = v78; /*0x100a9d937*/
      if ( (_BYTE)v146 != 6 ) /*0x100a9d93f*/
      {
        v74 = (char ***)&v146; /*0x100a9d945*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v146); /*0x100a9d949*/
      }
    }
    else
    {
      v133 = v144; /*0x100a9d957*/
      v132 = v143; /*0x100a9d962*/
      v131 = v142; /*0x100a9d970*/
      v130 = (__int64 (__fastcall *)())v141; /*0x100a9d97e*/
      v129 = (size_t)__src; /*0x100a9d98c*/
      v128 = (__int64 (__fastcall **)())v139; /*0x100a9d9a1*/
      v127 = (char ***)v138; /*0x100a9d9a8*/
      v137 = v153; /*0x100a9d9b3*/
      v136 = v152; /*0x100a9d9be*/
      v135 = v151; /*0x100a9d9cd*/
      v134 = v150; /*0x100a9d9d4*/
      v74 = (char ***)&v146; /*0x100a9d9db*/
      v79 = &v127; /*0x100a9d9df*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9d9ed*/
        &v146,
        &v127,
        &v134);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v74, v79); /*0x100a9d9f2*/
    v71 = 2; /*0x100a9d9f7*/
    v80 = (_WORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(2, 1); /*0x100a9da06*/
    if ( !v80 ) /*0x100a9da0e*/
      goto LABEL_87; /*0x100a9da0e*/
    *v80 = 25705; /*0x100a9da17*/
    v120 = 2; /*0x100a9da1c*/
    v121 = v80; /*0x100a9da27*/
    v122 = 2; /*0x100a9da2e*/
    if ( (v119 & 0x8000000000000000LL) != 0LL ) /*0x100a9da41*/
    {
      v81 = 0; /*0x100a9da43*/
      goto LABEL_58; /*0x100a9da43*/
    }
    if ( v119 ) /*0x100a9da5a*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(2, 1); /*0x100a9da5c*/
      v81 = 1; /*0x100a9da61*/
      v82 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v119, 1); /*0x100a9da73*/
      if ( !v82 ) /*0x100a9da7b*/
LABEL_58:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v81, v119); /*0x100a9da46*/
      v83 = v82; /*0x100a9da7d*/
    }
    else
    {
      v83 = 1; /*0x100a9da82*/
    }
    v84 = v119; /*0x100a9da91*/
    memcpy((void *)v83, v118, v119); /*0x100a9da9b*/
    LOBYTE(v150) = 3; /*0x100a9daa0*/
    v151 = v84; /*0x100a9daa4*/
    v152 = v83; /*0x100a9daa8*/
    v153 = v84; /*0x100a9daac*/
    v85 = &v138; /*0x100a9dab0*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v138, v110, &v120); /*0x100a9dac5*/
    if ( v138 == (char **)0x8000000000000000LL ) /*0x100a9dad1*/
    {
      v86 = v139; /*0x100a9dad3*/
      v87 = 32 * v141; /*0x100a9dae1*/
      v149 = *(_QWORD *)(v139 + 32 * v141 + 24); /*0x100a9daea*/
      __n = *(_QWORD *)(v139 + 32 * v141 + 16); /*0x100a9daf3*/
      v88 = *(char ****)(v139 + 32 * v141); /*0x100a9daf7*/
      v147 = *(void **)(v139 + 32 * v141 + 8); /*0x100a9db00*/
      v146 = v88; /*0x100a9db04*/
      *(_QWORD *)(v139 + v87 + 24) = v153; /*0x100a9db0c*/
      *(_QWORD *)(v86 + v87 + 16) = v152; /*0x100a9db15*/
      v89 = v150; /*0x100a9db1a*/
      v90 = (char ****)v151; /*0x100a9db1e*/
      *(_QWORD *)(v86 + v87 + 8) = v151; /*0x100a9db22*/
      *(_QWORD *)(v86 + v87) = v89; /*0x100a9db27*/
      if ( (_BYTE)v146 != 6 ) /*0x100a9db2f*/
      {
        v85 = (char ***)&v146; /*0x100a9db35*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v146); /*0x100a9db39*/
      }
    }
    else
    {
      v133 = v144; /*0x100a9db47*/
      v132 = v143; /*0x100a9db52*/
      v131 = v142; /*0x100a9db60*/
      v130 = (__int64 (__fastcall *)())v141; /*0x100a9db6e*/
      v129 = (size_t)__src; /*0x100a9db7c*/
      v128 = (__int64 (__fastcall **)())v139; /*0x100a9db91*/
      v127 = (char ***)v138; /*0x100a9db98*/
      v137 = v153; /*0x100a9dba3*/
      v136 = v152; /*0x100a9dbae*/
      v135 = v151; /*0x100a9dbbd*/
      v134 = v150; /*0x100a9dbc4*/
      v85 = (char ***)&v146; /*0x100a9dbcb*/
      v90 = &v127; /*0x100a9dbcf*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9dbdd*/
        &v146,
        &v127,
        &v134);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v85, v90); /*0x100a9dbe2*/
    v71 = 7; /*0x100a9dbe7*/
    v91 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x100a9dbf6*/
    if ( !v91 ) /*0x100a9dbfe*/
LABEL_87:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v71); /*0x100a9e16f*/
    *(_DWORD *)((char *)v91 + 3) = 2037539181; /*0x100a9dc04*/
    *v91 = 1835890035; /*0x100a9dc0b*/
    v120 = 7; /*0x100a9dc11*/
    v121 = v91; /*0x100a9dc1c*/
    v122 = 7; /*0x100a9dc23*/
    v151 = 0; /*0x100a9dc2e*/
    v152 = 8; /*0x100a9dc36*/
    v153 = 0; /*0x100a9dc3e*/
    LOBYTE(v150) = 4; /*0x100a9dc46*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v138, v110, &v120); /*0x100a9dc5f*/
    if ( v138 == (char **)0x8000000000000000LL ) /*0x100a9dc6b*/
    {
      v92 = v139; /*0x100a9dc6d*/
      v93 = 32 * v141; /*0x100a9dc7b*/
      v149 = *(_QWORD *)(v139 + 32 * v141 + 24); /*0x100a9dc84*/
      __n = *(_QWORD *)(v139 + 32 * v141 + 16); /*0x100a9dc8d*/
      v94 = *(char ****)(v139 + 32 * v141); /*0x100a9dc91*/
      v147 = *(void **)(v139 + 32 * v141 + 8); /*0x100a9dc9a*/
      v146 = v94; /*0x100a9dc9e*/
      *(_QWORD *)(v139 + v93 + 24) = v153; /*0x100a9dca6*/
      *(_QWORD *)(v92 + v93 + 16) = v152; /*0x100a9dcaf*/
      v95 = v150; /*0x100a9dcb4*/
      *(_QWORD *)(v92 + v93 + 8) = v151; /*0x100a9dcbc*/
      *(_QWORD *)(v92 + v93) = v95; /*0x100a9dcc1*/
      if ( (_BYTE)v146 != 6 ) /*0x100a9dcc9*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v146); /*0x100a9dcd3*/
    }
    else
    {
      v133 = v144; /*0x100a9dce1*/
      v132 = v143; /*0x100a9dcec*/
      v131 = v142; /*0x100a9dcfa*/
      v130 = (__int64 (__fastcall *)())v141; /*0x100a9dd08*/
      v129 = (size_t)__src; /*0x100a9dd16*/
      v128 = (__int64 (__fastcall **)())v139; /*0x100a9dd2b*/
      v127 = (char ***)v138; /*0x100a9dd32*/
      v137 = v153; /*0x100a9dd3d*/
      v136 = v152; /*0x100a9dd48*/
      v135 = v151; /*0x100a9dd57*/
      v134 = v150; /*0x100a9dd5e*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9dd77*/
        &v146,
        &v127,
        &v134);
    }
    v124 = (_DWORD *)v110[0]; /*0x100a9dd8a*/
    v125 = v110[1]; /*0x100a9dd91*/
    v126 = v111; /*0x100a9dd9f*/
    LOBYTE(v123) = 5; /*0x100a9dda6*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v138, v112, v108); /*0x100a9ddc5*/
    if ( v138 == (char **)0x8000000000000000LL ) /*0x100a9ddd1*/
    {
      v96 = v139; /*0x100a9ddd3*/
      v97 = 32 * v141; /*0x100a9dde1*/
      v149 = *(_QWORD *)(v139 + 32 * v141 + 24); /*0x100a9ddea*/
      __n = *(_QWORD *)(v139 + 32 * v141 + 16); /*0x100a9ddf3*/
      v98 = *(char ****)(v139 + 32 * v141); /*0x100a9ddf7*/
      v147 = *(void **)(v139 + 32 * v141 + 8); /*0x100a9de00*/
      v146 = v98; /*0x100a9de04*/
      *(_QWORD *)(v139 + v97 + 24) = v126; /*0x100a9de0f*/
      *(_QWORD *)(v96 + v97 + 16) = v125; /*0x100a9de1b*/
      v99 = v123; /*0x100a9de20*/
      *(_QWORD *)(v96 + v97 + 8) = v124; /*0x100a9de2e*/
      *(_QWORD *)(v96 + v97) = v99; /*0x100a9de33*/
      if ( (_BYTE)v146 != 6 ) /*0x100a9de3b*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v146); /*0x100a9de45*/
    }
    else
    {
      v133 = v144; /*0x100a9de53*/
      v132 = v143; /*0x100a9de5e*/
      v131 = v142; /*0x100a9de6c*/
      v130 = (__int64 (__fastcall *)())v141; /*0x100a9de7a*/
      v129 = (size_t)__src; /*0x100a9de88*/
      v128 = (__int64 (__fastcall **)())v139; /*0x100a9de9d*/
      v127 = (char ***)v138; /*0x100a9dea4*/
      v137 = v126; /*0x100a9deb2*/
      v136 = v125; /*0x100a9dec0*/
      v135 = (__int64)v124; /*0x100a9ded5*/
      v134 = (char *)v123; /*0x100a9dedc*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9def5*/
        &v146,
        &v127,
        &v134);
    }
    v139 = v112[0]; /*0x100a9df08*/
    __src = (void *)v112[1]; /*0x100a9df0f*/
    v141 = v113; /*0x100a9df1d*/
    LOBYTE(v138) = 5; /*0x100a9df24*/
    v134 = "response.output_item.addedresponse.content_part.addedresponse.output_text.deltaresponse.reasoning_summary_text.done"; /*0x100a9df32*/
    v135 = 26; /*0x100a9df39*/
    v150 = (char *)&v138; /*0x100a9df44*/
    v127 = (char ***)&v134; /*0x100a9df4f*/
    v128 = (__int64 (__fastcall **)())_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100a9df5d*/
    v129 = (size_t)&v150; /*0x100a9df68*/
    v130 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcb50c2f2fdedac0f; /*0x100a9df76*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v146, &unk_1017C9F28, &v127); /*0x100a9df8f*/
    v101 = v147; /*0x100a9df94*/
    v102 = __n; /*0x100a9df98*/
    v103 = v117; /*0x100a9df9c*/
    v104 = v117[2]; /*0x100a9dfa6*/
    if ( __n > *v117 - v104 ) /*0x100a9dfb0*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100a9e119*/
        v117,
        v117[2],
        __n,
        1,
        1,
        v100);
      v103 = v117; /*0x100a9e121*/
      v104 = v117[2]; /*0x100a9e128*/
    }
    v105 = v103; /*0x100a9dfc0*/
    memcpy((void *)(v104 + v103[1]), v101, v102); /*0x100a9dfc9*/
    v105[2] = v102 + v104; /*0x100a9dfd1*/
    if ( v146 ) /*0x100a9dfdc*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v101, v146, 1); /*0x100a9dfe6*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v138); /*0x100a9dff2*/
    v6 = v109; /*0x100a9dff7*/
    a2 = v114; /*0x100a9dffe*/
    a1 = v116; /*0x100a9e005*/
    v106 = v145; /*0x100a9e00f*/
    *(_QWORD *)(v116 + 120) = v145; /*0x100a9e013*/
    *(_QWORD *)(a1 + 128) = v118; /*0x100a9e01e*/
    *(_QWORD *)(a1 + 136) = v119; /*0x100a9e02c*/
    *(_QWORD *)(a1 + 144) = 0; /*0x100a9e033*/
    *(_QWORD *)(a1 + 152) = 1; /*0x100a9e03e*/
    *(_QWORD *)(a1 + 160) = 0; /*0x100a9e049*/
    *(_DWORD *)(a1 + 168) = v115; /*0x100a9e05b*/
    if ( v106 == (char ***)0x8000000000000000LL ) /*0x100a9e064*/
      core::option::expect_failed::ha75f8bdcbd673567(&unk_10167BBD8, 8, &off_101974318); /*0x100a9e144*/
    v10 = 0; /*0x100a9e06c*/
    if ( v6 ) /*0x100a9e075*/
      goto LABEL_82; /*0x100a9e075*/
  }
  else
  {
    v10 = *(_QWORD *)(a1 + 160); /*0x100a9cb5d*/
    if ( a3 > *(_QWORD *)(a1 + 144) - v10 ) /*0x100a9cb6a*/
    {
LABEL_82:
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100a9e07b*/
        a1 + 144,
        v10,
        v6,
        1,
        1,
        a6);
      a1 = v116; /*0x100a9e09e*/
      v10 = *(_QWORD *)(v116 + 160); /*0x100a9e0a5*/
    }
  }
  v11 = a1; /*0x100a9cb70*/
  v12 = (void *)(v10 + *(_QWORD *)(a1 + 152)); /*0x100a9cb7a*/
  memcpy(v12, a2, v6); /*0x100a9cb80*/
  v13 = v6; /*0x100a9cb85*/
  *(_QWORD *)(v11 + 160) = v6 + v10; /*0x100a9cb8b*/
  v120 = 0; /*0x100a9cb93*/
  v122 = 0; /*0x100a9cb9e*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v12, a2); /*0x100a9cba9*/
  v14 = 4; /*0x100a9cbae*/
  v15 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100a9cbbe*/
  if ( !v15 ) /*0x100a9cbc6*/
    goto LABEL_85; /*0x100a9cbc6*/
  *v15 = 1701869940; /*0x100a9cbcf*/
  v123 = 4; /*0x100a9cbd5*/
  v124 = v15; /*0x100a9cbe0*/
  v125 = 4; /*0x100a9cbe7*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x100a9cbf2*/
  v16 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(37, 1); /*0x100a9cc01*/
  if ( !v16 ) /*0x100a9cc09*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 37); /*0x100a9e180*/
  qmemcpy(v16, "response.reasoning_summary_text.delta", 37); /*0x100a9cc51*/
  LOBYTE(v150) = 3; /*0x100a9cc54*/
  v151 = 37; /*0x100a9cc58*/
  v152 = (__int64)v16; /*0x100a9cc60*/
  v153 = 37; /*0x100a9cc64*/
  v17 = &v138; /*0x100a9cc6c*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v138, &v120, &v123); /*0x100a9cc81*/
  if ( v138 == (char **)0x8000000000000000LL ) /*0x100a9cc8d*/
  {
    v18 = v139; /*0x100a9cc8f*/
    v19 = 32 * v141; /*0x100a9cc9d*/
    v149 = *(_QWORD *)(v139 + 32 * v141 + 24); /*0x100a9cca6*/
    __n = *(_QWORD *)(v139 + 32 * v141 + 16); /*0x100a9ccaf*/
    v20 = *(char ****)(v139 + 32 * v141); /*0x100a9ccb3*/
    v147 = *(void **)(v139 + 32 * v141 + 8); /*0x100a9ccbc*/
    v146 = v20; /*0x100a9ccc0*/
    *(_QWORD *)(v139 + v19 + 24) = v153; /*0x100a9ccc8*/
    *(_QWORD *)(v18 + v19 + 16) = v152; /*0x100a9ccd1*/
    v21 = v150; /*0x100a9ccd6*/
    v22 = (char ****)v151; /*0x100a9ccda*/
    *(_QWORD *)(v18 + v19 + 8) = v151; /*0x100a9ccde*/
    *(_QWORD *)(v18 + v19) = v21; /*0x100a9cce3*/
    if ( (_BYTE)v146 != 6 ) /*0x100a9cceb*/
    {
      v17 = (char ***)&v146; /*0x100a9ccf1*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v146); /*0x100a9ccf5*/
    }
  }
  else
  {
    v133 = v144; /*0x100a9cd03*/
    v132 = v143; /*0x100a9cd0e*/
    v131 = v142; /*0x100a9cd1c*/
    v130 = (__int64 (__fastcall *)())v141; /*0x100a9cd2a*/
    v129 = (size_t)__src; /*0x100a9cd38*/
    v128 = (__int64 (__fastcall **)())v139; /*0x100a9cd4d*/
    v127 = (char ***)v138; /*0x100a9cd54*/
    v137 = v153; /*0x100a9cd5f*/
    v136 = v152; /*0x100a9cd6a*/
    v135 = v151; /*0x100a9cd79*/
    v134 = v150; /*0x100a9cd80*/
    v17 = (char ***)&v146; /*0x100a9cd87*/
    v22 = &v127; /*0x100a9cd8b*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9cd99*/
      &v146,
      &v127,
      &v134);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, v22); /*0x100a9cd9e*/
  v14 = 12; /*0x100a9cda3*/
  v23 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x100a9cdb3*/
  if ( !v23 ) /*0x100a9cdbb*/
    goto LABEL_85; /*0x100a9cdbb*/
  qmemcpy(v23, "output_index", 12); /*0x100a9cdcb*/
  v123 = 12; /*0x100a9cdd5*/
  v124 = v23; /*0x100a9cde0*/
  v125 = 12; /*0x100a9cde7*/
  v24 = *(unsigned int *)(v116 + 168); /*0x100a9cdf9*/
  LOBYTE(v150) = 2; /*0x100a9cdff*/
  v151 = 0; /*0x100a9ce03*/
  v152 = v24; /*0x100a9ce0b*/
  v25 = &v138; /*0x100a9ce0f*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v138, &v120, &v123); /*0x100a9ce24*/
  if ( v138 == (char **)0x8000000000000000LL ) /*0x100a9ce30*/
  {
    v26 = v139; /*0x100a9ce32*/
    v27 = 32 * v141; /*0x100a9ce40*/
    v149 = *(_QWORD *)(v139 + 32 * v141 + 24); /*0x100a9ce49*/
    __n = *(_QWORD *)(v139 + 32 * v141 + 16); /*0x100a9ce52*/
    v28 = *(char ****)(v139 + 32 * v141); /*0x100a9ce56*/
    v147 = *(void **)(v139 + 32 * v141 + 8); /*0x100a9ce5f*/
    v146 = v28; /*0x100a9ce63*/
    *(_QWORD *)(v139 + v27 + 24) = v153; /*0x100a9ce6b*/
    *(_QWORD *)(v26 + v27 + 16) = v152; /*0x100a9ce74*/
    v29 = v150; /*0x100a9ce79*/
    v30 = (char ****)v151; /*0x100a9ce7d*/
    *(_QWORD *)(v26 + v27 + 8) = v151; /*0x100a9ce81*/
    *(_QWORD *)(v26 + v27) = v29; /*0x100a9ce86*/
    if ( (_BYTE)v146 != 6 ) /*0x100a9ce8e*/
    {
      v25 = (char ***)&v146; /*0x100a9ce94*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v146); /*0x100a9ce98*/
    }
  }
  else
  {
    v133 = v144; /*0x100a9cea6*/
    v132 = v143; /*0x100a9ceb1*/
    v131 = v142; /*0x100a9cebf*/
    v130 = (__int64 (__fastcall *)())v141; /*0x100a9cecd*/
    v129 = (size_t)__src; /*0x100a9cedb*/
    v128 = (__int64 (__fastcall **)())v139; /*0x100a9cef0*/
    v127 = (char ***)v138; /*0x100a9cef7*/
    v137 = v153; /*0x100a9cf02*/
    v136 = v152; /*0x100a9cf0d*/
    v135 = v151; /*0x100a9cf1c*/
    v134 = v150; /*0x100a9cf23*/
    v25 = (char ***)&v146; /*0x100a9cf2a*/
    v30 = &v127; /*0x100a9cf2e*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9cf3c*/
      &v146,
      &v127,
      &v134);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v25, v30); /*0x100a9cf41*/
  v14 = 13; /*0x100a9cf46*/
  v31 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x100a9cf56*/
  if ( !v31 ) /*0x100a9cf5e*/
    goto LABEL_85; /*0x100a9cf5e*/
  qmemcpy(v31, "summary_index", 13); /*0x100a9cf7c*/
  v123 = 13; /*0x100a9cf7f*/
  v124 = v31; /*0x100a9cf8a*/
  v125 = 13; /*0x100a9cf91*/
  LOBYTE(v150) = 2; /*0x100a9cf9c*/
  v151 = 0; /*0x100a9cfa0*/
  v152 = 0; /*0x100a9cfa8*/
  v32 = &v138; /*0x100a9cfb0*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v138, &v120, &v123); /*0x100a9cfc5*/
  if ( v138 == (char **)0x8000000000000000LL ) /*0x100a9cfd1*/
  {
    v33 = v139; /*0x100a9cfd3*/
    v34 = 32 * v141; /*0x100a9cfe1*/
    v149 = *(_QWORD *)(v139 + 32 * v141 + 24); /*0x100a9cfea*/
    __n = *(_QWORD *)(v139 + 32 * v141 + 16); /*0x100a9cff3*/
    v35 = *(char ****)(v139 + 32 * v141); /*0x100a9cff7*/
    v147 = *(void **)(v139 + 32 * v141 + 8); /*0x100a9d000*/
    v146 = v35; /*0x100a9d004*/
    *(_QWORD *)(v139 + v34 + 24) = v153; /*0x100a9d00c*/
    *(_QWORD *)(v33 + v34 + 16) = v152; /*0x100a9d015*/
    v36 = v150; /*0x100a9d01a*/
    v37 = (char ****)v151; /*0x100a9d01e*/
    *(_QWORD *)(v33 + v34 + 8) = v151; /*0x100a9d022*/
    *(_QWORD *)(v33 + v34) = v36; /*0x100a9d027*/
    if ( (_BYTE)v146 != 6 ) /*0x100a9d02f*/
    {
      v32 = (char ***)&v146; /*0x100a9d035*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v146); /*0x100a9d039*/
    }
  }
  else
  {
    v133 = v144; /*0x100a9d047*/
    v132 = v143; /*0x100a9d052*/
    v131 = v142; /*0x100a9d060*/
    v130 = (__int64 (__fastcall *)())v141; /*0x100a9d06e*/
    v129 = (size_t)__src; /*0x100a9d07c*/
    v128 = (__int64 (__fastcall **)())v139; /*0x100a9d091*/
    v127 = (char ***)v138; /*0x100a9d098*/
    v137 = v153; /*0x100a9d0a3*/
    v136 = v152; /*0x100a9d0ae*/
    v135 = v151; /*0x100a9d0bd*/
    v134 = v150; /*0x100a9d0c4*/
    v32 = (char ***)&v146; /*0x100a9d0cb*/
    v37 = &v127; /*0x100a9d0cf*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9d0dd*/
      &v146,
      &v127,
      &v134);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v32, v37); /*0x100a9d0e2*/
  v14 = 5; /*0x100a9d0e7*/
  v38 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100a9d0f7*/
  if ( !v38 ) /*0x100a9d0ff*/
LABEL_85:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v14); /*0x100a9e151*/
  *(_BYTE *)(v38 + 4) = 97; /*0x100a9d10b*/
  *(_DWORD *)v38 = 1953260900; /*0x100a9d10f*/
  v123 = 5; /*0x100a9d115*/
  v124 = (_DWORD *)v38; /*0x100a9d120*/
  v125 = 5; /*0x100a9d127*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x100a9d132*/
  v39 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x100a9d142*/
  if ( !v39 ) /*0x100a9d14a*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v6); /*0x100a9e18f*/
  v40 = (__int64)v39; /*0x100a9d150*/
  memcpy(v39, v114, v13); /*0x100a9d160*/
  LOBYTE(v150) = 3; /*0x100a9d165*/
  v151 = v13; /*0x100a9d169*/
  v152 = v40; /*0x100a9d16d*/
  v153 = v13; /*0x100a9d171*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v138, &v120, &v123); /*0x100a9d18d*/
  if ( v138 == (char **)0x8000000000000000LL ) /*0x100a9d199*/
  {
    v41 = v139; /*0x100a9d19b*/
    v42 = 32 * v141; /*0x100a9d1a9*/
    v149 = *(_QWORD *)(v139 + 32 * v141 + 24); /*0x100a9d1b2*/
    __n = *(_QWORD *)(v139 + 32 * v141 + 16); /*0x100a9d1bb*/
    v43 = *(char ****)(v139 + 32 * v141); /*0x100a9d1bf*/
    v147 = *(void **)(v139 + 32 * v141 + 8); /*0x100a9d1c8*/
    v146 = v43; /*0x100a9d1cc*/
    *(_QWORD *)(v139 + v42 + 24) = v153; /*0x100a9d1d4*/
    *(_QWORD *)(v41 + v42 + 16) = v152; /*0x100a9d1dd*/
    v44 = v150; /*0x100a9d1e2*/
    *(_QWORD *)(v41 + v42 + 8) = v151; /*0x100a9d1ea*/
    *(_QWORD *)(v41 + v42) = v44; /*0x100a9d1ef*/
    if ( (_BYTE)v146 != 6 ) /*0x100a9d1f7*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v146); /*0x100a9d201*/
  }
  else
  {
    v133 = v144; /*0x100a9d20f*/
    v132 = v143; /*0x100a9d21a*/
    v131 = v142; /*0x100a9d228*/
    v130 = (__int64 (__fastcall *)())v141; /*0x100a9d236*/
    v129 = (size_t)__src; /*0x100a9d244*/
    v128 = (__int64 (__fastcall **)())v139; /*0x100a9d259*/
    v127 = (char ***)v138; /*0x100a9d260*/
    v137 = v153; /*0x100a9d26b*/
    v136 = v152; /*0x100a9d276*/
    v135 = v151; /*0x100a9d285*/
    v134 = v150; /*0x100a9d28c*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100a9d2a5*/
      &v146,
      &v127,
      &v134);
  }
  v139 = v120; /*0x100a9d2b8*/
  __src = v121; /*0x100a9d2bf*/
  v141 = v122; /*0x100a9d2cd*/
  LOBYTE(v138) = 5; /*0x100a9d2d4*/
  v134 = (char *)&unk_10167CD01; /*0x100a9d2e2*/
  v135 = 37; /*0x100a9d2e9*/
  v150 = (char *)&v138; /*0x100a9d2f4*/
  v127 = (char ***)&v134; /*0x100a9d2ff*/
  v128 = (__int64 (__fastcall **)())_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100a9d30d*/
  v129 = (size_t)&v150; /*0x100a9d318*/
  v130 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcb50c2f2fdedac0f; /*0x100a9d326*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v146, &unk_1017C9F28, &v127); /*0x100a9d33f*/
  v46 = v147; /*0x100a9d344*/
  v47 = __n; /*0x100a9d348*/
  v48 = v117; /*0x100a9d34c*/
  v49 = v117[2]; /*0x100a9d356*/
  if ( __n > *v117 - v49 ) /*0x100a9d360*/
  {
    v107 = v117; /*0x100a9e0bf*/
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100a9e0c8*/
      v117,
      v117[2],
      __n,
      1,
      1,
      v45);
    v49 = v107[2]; /*0x100a9e0cd*/
    v48 = v107; /*0x100a9e0d2*/
  }
  v50 = v48; /*0x100a9d36d*/
  memcpy((void *)(v49 + v48[1]), v46, v47); /*0x100a9d376*/
  v50[2] = v47 + v49; /*0x100a9d37e*/
  if ( v146 ) /*0x100a9d38a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, v146, 1); /*0x100a9d394*/
  return core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v138); /*0x100a9d3a5*/
}