// __ZN13codexmate_lib4core5relay10translator6stream23OpenAiToAnthropicStream11emit_finish @ 0x100aa5de0 | 基线 same-set
void __fastcall codexmate_lib::core::relay::translator::stream::OpenAiToAnthropicStream::emit_finish::h75b5ad39ebee2be7(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v6; // r12
  __int64 v7; // rbx
  _DWORD *v8; // rax
  void *v9; // rax
  char **v10; // rdi
  char *v11; // rax
  __int64 v12; // rcx
  char *v13; // rdx
  char *v14; // rdx
  char ***v15; // rsi
  __int64 v16; // rax
  char *v17; // rax
  __int64 v18; // rcx
  char *v19; // rdx
  char *v20; // rdx
  __int64 v21; // r9
  void *v22; // r15
  size_t v23; // rbx
  __int64 v24; // rdi
  size_t v25; // r12
  const __m128i *v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __int64 v29; // rsi
  __int64 *v30; // rdi
  __int64 *v31; // r15
  unsigned __int64 v32; // r9
  __int64 v33; // r14
  __int64 v34; // rsi
  __int64 v35; // r12
  __int64 v36; // r13
  __int64 v37; // r15
  _DWORD *v38; // rax
  void *v39; // rax
  char **v40; // rdi
  char *v41; // rax
  __int64 v42; // rcx
  char *v43; // rdx
  char *v44; // rdx
  char ***v45; // rsi
  __int64 v46; // rax
  char *v47; // rax
  __int64 v48; // rcx
  char *v49; // rdx
  char *v50; // rdx
  __int64 v51; // r9
  void *v52; // r14
  size_t v53; // r15
  size_t v54; // r13
  size_t v55; // rbx
  bool v56; // zf
  char *v57; // rax
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rcx
  int v60; // edx
  char *v61; // r15
  __int64 v62; // r12
  _DWORD *v63; // rax
  void *v64; // rax
  char **v65; // rdi
  char *v66; // rax
  __int64 v67; // rcx
  char *v68; // rdx
  char *v69; // rdx
  char ***v70; // rsi
  __int64 v71; // rax
  __int64 v72; // r13
  void *v73; // rax
  void *v74; // rax
  __int64 v75; // r13
  char **v76; // rdi
  char *v77; // rax
  __int64 v78; // rcx
  char *v79; // rdx
  char *v80; // rdx
  char ***v81; // rsi
  void *v82; // rax
  char *v83; // rax
  __int64 v84; // rcx
  char *v85; // rdx
  char *v86; // rdx
  char **v87; // rdi
  char *v88; // rax
  __int64 v89; // rcx
  char *v90; // rdx
  __int64 v91; // rdx
  char ***v92; // rsi
  __int64 v93; // rax
  void *v94; // rax
  char *v95; // rax
  __int64 v96; // rcx
  char *v97; // rdx
  char *v98; // rdx
  char *v99; // rax
  __int64 v100; // rcx
  char *v101; // rdx
  __int64 v102; // rdx
  __int64 v103; // r9
  void *v104; // r15
  size_t v105; // r12
  size_t v106; // rbx
  __int64 v107; // r14
  size_t v108; // rbx
  char *v109; // rsi
  _DWORD *v110; // rax
  void *v111; // rax
  char *v112; // rax
  __int64 v113; // rcx
  char *v114; // rdx
  char *v115; // rdx
  __int64 v116; // r9
  void *v117; // r15
  size_t v118; // r12
  _QWORD *v119; // rdx
  __int64 v120; // rax
  unsigned int *v121; // rax
  unsigned int *v122; // rcx
  __int64 v123; // rdx
  unsigned int v124; // r8d
  unsigned int v125; // esi
  __int64 v126; // rdi
  unsigned __int64 v127; // rbx
  __int64 v128[3]; // [rsp+0h] [rbp-200h] BYREF
  __int16 v129; // [rsp+18h] [rbp-1E8h]
  __int64 v130; // [rsp+20h] [rbp-1E0h]
  __int64 v131; // [rsp+28h] [rbp-1D8h] BYREF
  __int64 v132; // [rsp+30h] [rbp-1D0h]
  unsigned __int64 v133; // [rsp+38h] [rbp-1C8h]
  __int64 v134; // [rsp+40h] [rbp-1C0h]
  _QWORD *v135; // [rsp+48h] [rbp-1B8h]
  __int64 v136; // [rsp+50h] [rbp-1B0h]
  __int64 v137; // [rsp+58h] [rbp-1A8h] BYREF
  __int64 v138; // [rsp+60h] [rbp-1A0h]
  __int64 v139; // [rsp+68h] [rbp-198h]
  _QWORD v140[2]; // [rsp+70h] [rbp-190h] BYREF
  __int64 v141; // [rsp+80h] [rbp-180h]
  __int64 v142; // [rsp+88h] [rbp-178h]
  __int64 v143; // [rsp+90h] [rbp-170h]
  __int64 *v144; // [rsp+98h] [rbp-168h]
  char ***v145; // [rsp+A0h] [rbp-160h] BYREF
  __int64 v146; // [rsp+A8h] [rbp-158h]
  __int64 v147; // [rsp+B0h] [rbp-150h]
  __int64 v148; // [rsp+B8h] [rbp-148h] BYREF
  __int64 v149; // [rsp+C0h] [rbp-140h]
  size_t v150; // [rsp+C8h] [rbp-138h]
  __int64 v151; // [rsp+D0h] [rbp-130h] BYREF
  size_t v152; // [rsp+D8h] [rbp-128h]
  __int64 v153; // [rsp+E0h] [rbp-120h]
  __int64 v154; // [rsp+E8h] [rbp-118h] BYREF
  char ***v155; // [rsp+F0h] [rbp-110h]
  __int64 v156; // [rsp+F8h] [rbp-108h]
  __int64 v157; // [rsp+100h] [rbp-100h]
  char **v158; // [rsp+108h] [rbp-F8h] BYREF
  __int64 (__fastcall *v159)(); // [rsp+110h] [rbp-F0h]
  char **v160; // [rsp+118h] [rbp-E8h]
  __int64 (__fastcall *v161)(); // [rsp+120h] [rbp-E0h]
  __int64 v162; // [rsp+128h] [rbp-D8h]
  __int64 v163; // [rsp+130h] [rbp-D0h]
  __int64 v164; // [rsp+138h] [rbp-C8h]
  char *v165; // [rsp+140h] [rbp-C0h] BYREF
  __int64 v166; // [rsp+148h] [rbp-B8h]
  __int64 v167; // [rsp+150h] [rbp-B0h]
  __int64 v168; // [rsp+158h] [rbp-A8h]
  char **v169; // [rsp+160h] [rbp-A0h] BYREF
  void *v170; // [rsp+168h] [rbp-98h]
  size_t v171; // [rsp+170h] [rbp-90h]
  __int64 v172; // [rsp+178h] [rbp-88h]
  __int64 v173; // [rsp+180h] [rbp-80h]
  __int64 v174; // [rsp+188h] [rbp-78h]
  __int64 v175; // [rsp+190h] [rbp-70h]
  char *v176; // [rsp+198h] [rbp-68h] BYREF
  void *__src; // [rsp+1A0h] [rbp-60h]
  size_t __n; // [rsp+1A8h] [rbp-58h]
  __int64 v179; // [rsp+1B0h] [rbp-50h]
  char *v180; // [rsp+1B8h] [rbp-48h] BYREF
  __int64 v181; // [rsp+1C0h] [rbp-40h]
  __int64 v182; // [rsp+1C8h] [rbp-38h]
  __int64 v183; // [rsp+1D0h] [rbp-30h]

  if ( *(_BYTE *)(a2 + 109) ) /*0x100aa5df4*/
  {
    *a1 = 0; /*0x100aa5dfa*/
    a1[1] = 1; /*0x100aa5e01*/
    a1[2] = 0; /*0x100aa5e09*/
    return; /*0x100aa5e11*/
  }
  v142 = a4; /*0x100aa5e1c*/
  v135 = a1; /*0x100aa5e23*/
  *(_BYTE *)(a2 + 109) = 1; /*0x100aa5e2a*/
  v148 = 0; /*0x100aa5e2e*/
  v149 = 1; /*0x100aa5e39*/
  v150 = 0; /*0x100aa5e44*/
  v56 = *(_BYTE *)(a2 + 48) == 0; /*0x100aa5e4f*/
  v6 = *(unsigned int *)(a2 + 52); /*0x100aa5e53*/
  *(_DWORD *)(a2 + 48) = 0; /*0x100aa5e57*/
  if ( !v56 ) /*0x100aa5e5e*/
  {
    v151 = 0; /*0x100aa5e64*/
    v153 = 0; /*0x100aa5e6f*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2); /*0x100aa5e7a*/
    v7 = 4; /*0x100aa5e7f*/
    v8 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100aa5e8e*/
    if ( !v8 ) /*0x100aa5e96*/
      goto LABEL_117; /*0x100aa5e96*/
    *v8 = 1701869940; /*0x100aa5e9f*/
    v154 = 4; /*0x100aa5ea5*/
    v155 = (char ***)v8; /*0x100aa5eb0*/
    v156 = 4; /*0x100aa5eb7*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x100aa5ec2*/
    v9 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1); /*0x100aa5ed1*/
    if ( !v9 ) /*0x100aa5ed9*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 18); /*0x100aa79aa*/
    qmemcpy(v9, "content_block_stop", 18); /*0x100aa5ef7*/
    LOBYTE(v180) = 3; /*0x100aa5f00*/
    v181 = 18; /*0x100aa5f04*/
    v182 = (__int64)v9; /*0x100aa5f0c*/
    v183 = 18; /*0x100aa5f10*/
    v10 = (char **)&v169; /*0x100aa5f18*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v169, &v151, &v154); /*0x100aa5f2d*/
    if ( v169 == (char **)0x8000000000000000LL ) /*0x100aa5f43*/
    {
      v11 = (char *)v170; /*0x100aa5f45*/
      v12 = 32 * v172; /*0x100aa5f53*/
      v179 = *((_QWORD *)v170 + 4 * v172 + 3); /*0x100aa5f5c*/
      __n = *((_QWORD *)v170 + 4 * v172 + 2); /*0x100aa5f65*/
      v13 = *((char **)v170 + 4 * v172); /*0x100aa5f69*/
      __src = *((void **)v170 + 4 * v172 + 1); /*0x100aa5f72*/
      v176 = v13; /*0x100aa5f76*/
      *(_QWORD *)((char *)v170 + v12 + 24) = v183; /*0x100aa5f7e*/
      *(_QWORD *)&v11[v12 + 16] = v182; /*0x100aa5f87*/
      v14 = v180; /*0x100aa5f8c*/
      v15 = (char ***)v181; /*0x100aa5f90*/
      *(_QWORD *)&v11[v12 + 8] = v181; /*0x100aa5f94*/
      *(_QWORD *)&v11[v12] = v14; /*0x100aa5f99*/
      if ( (_BYTE)v176 != 6 ) /*0x100aa5fa1*/
      {
        v10 = &v176; /*0x100aa5fa7*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v176); /*0x100aa5fab*/
      }
    }
    else
    {
      v164 = v175; /*0x100aa5fb9*/
      v163 = v174; /*0x100aa5fc4*/
      v162 = v173; /*0x100aa5fcf*/
      v161 = (__int64 (__fastcall *)())v172; /*0x100aa5fdd*/
      v160 = (char **)v171; /*0x100aa5feb*/
      v159 = (__int64 (__fastcall *)())v170; /*0x100aa6000*/
      v158 = v169; /*0x100aa6007*/
      v168 = v183; /*0x100aa6012*/
      v167 = v182; /*0x100aa601d*/
      v166 = v181; /*0x100aa602c*/
      v165 = v180; /*0x100aa6033*/
      v10 = &v176; /*0x100aa603a*/
      v15 = &v158; /*0x100aa603e*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aa604c*/
        &v176,
        &v158,
        &v165);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10, v15); /*0x100aa6051*/
    v7 = 5; /*0x100aa6056*/
    v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100aa6065*/
    if ( !v16 ) /*0x100aa606d*/
LABEL_117:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v7); /*0x100aa7946*/
    *(_BYTE *)(v16 + 4) = 120; /*0x100aa6073*/
    *(_DWORD *)v16 = 1701080681; /*0x100aa6077*/
    v154 = 5; /*0x100aa607d*/
    v155 = (char ***)v16; /*0x100aa6088*/
    v156 = 5; /*0x100aa608f*/
    LOBYTE(v180) = 2; /*0x100aa609a*/
    v181 = 0; /*0x100aa609e*/
    v182 = v6; /*0x100aa60a6*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v169, &v151, &v154); /*0x100aa60c2*/
    if ( v169 == (char **)0x8000000000000000LL ) /*0x100aa60d8*/
    {
      v17 = (char *)v170; /*0x100aa60da*/
      v18 = 32 * v172; /*0x100aa60e8*/
      v179 = *((_QWORD *)v170 + 4 * v172 + 3); /*0x100aa60f1*/
      __n = *((_QWORD *)v170 + 4 * v172 + 2); /*0x100aa60fa*/
      v19 = *((char **)v170 + 4 * v172); /*0x100aa60fe*/
      __src = *((void **)v170 + 4 * v172 + 1); /*0x100aa6107*/
      v176 = v19; /*0x100aa610b*/
      *(_QWORD *)((char *)v170 + v18 + 24) = v183; /*0x100aa6113*/
      *(_QWORD *)&v17[v18 + 16] = v182; /*0x100aa611c*/
      v20 = v180; /*0x100aa6121*/
      *(_QWORD *)&v17[v18 + 8] = v181; /*0x100aa6129*/
      *(_QWORD *)&v17[v18] = v20; /*0x100aa612e*/
      if ( (_BYTE)v176 != 6 ) /*0x100aa6136*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v176); /*0x100aa6140*/
    }
    else
    {
      v164 = v175; /*0x100aa614e*/
      v163 = v174; /*0x100aa6159*/
      v162 = v173; /*0x100aa6164*/
      v161 = (__int64 (__fastcall *)())v172; /*0x100aa6172*/
      v160 = (char **)v171; /*0x100aa6180*/
      v159 = (__int64 (__fastcall *)())v170; /*0x100aa6195*/
      v158 = v169; /*0x100aa619c*/
      v168 = v183; /*0x100aa61a7*/
      v167 = v182; /*0x100aa61b2*/
      v166 = v181; /*0x100aa61c1*/
      v165 = v180; /*0x100aa61c8*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aa61e1*/
        &v176,
        &v158,
        &v165);
    }
    v170 = (void *)v151; /*0x100aa61f4*/
    v171 = v152; /*0x100aa61fb*/
    v172 = v153; /*0x100aa6209*/
    LOBYTE(v169) = 5; /*0x100aa6210*/
    v165 = "content_block_stopmessage_deltamessage_stop"; /*0x100aa621e*/
    v166 = 18; /*0x100aa6225*/
    v180 = (char *)&v169; /*0x100aa6230*/
    v158 = &v165; /*0x100aa623b*/
    v159 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100aa6249*/
    v160 = &v180; /*0x100aa6254*/
    v161 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcb50c2f2fdedac0f; /*0x100aa6262*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v176, &unk_1017C9F28, &v158); /*0x100aa627b*/
    v22 = __src; /*0x100aa6280*/
    v23 = __n; /*0x100aa6284*/
    if ( __n ) /*0x100aa628b*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v148, 0, __n, 1, 1, v21); /*0x100aa78df*/
      v24 = v149; /*0x100aa78e4*/
      v25 = v150; /*0x100aa78eb*/
    }
    else
    {
      v24 = 1; /*0x100aa6291*/
      v25 = 0; /*0x100aa6296*/
    }
    memcpy((void *)(v25 + v24), v22, v23); /*0x100aa62a2*/
    v150 = v23 + v25; /*0x100aa62aa*/
    if ( v176 ) /*0x100aa62b8*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, v176, 1); /*0x100aa62c2*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v169); /*0x100aa62ce*/
  }
  v26 = *(const __m128i **)(a2 + 56); /*0x100aa62d3*/
  v27 = (__int64)v26->i64 + *(_QWORD *)(a2 + 64) + 1; /*0x100aa62db*/
  v28 = (unsigned int)~_mm_movemask_epi8(_mm_load_si128(v26)); /*0x100aa62e8*/
  v29 = *(_QWORD *)(a2 + 80); /*0x100aa62ea*/
  v128[0] = (__int64)v26; /*0x100aa62ee*/
  v128[1] = (__int64)v26[1].i64; /*0x100aa62f9*/
  v128[2] = v27; /*0x100aa6300*/
  v129 = v28; /*0x100aa6307*/
  v130 = v29; /*0x100aa630e*/
  v30 = &v131; /*0x100aa6315*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hf4bca89dc3ebccd0( /*0x100aa6323*/
    &v131,
    v128,
    v28,
    v27);
  v31 = (__int64 *)v132; /*0x100aa6328*/
  v32 = v133; /*0x100aa632f*/
  v33 = v142; /*0x100aa633a*/
  v144 = (__int64 *)v132; /*0x100aa6341*/
  if ( v133 < 2 ) /*0x100aa6348*/
  {
LABEL_21:
    v34 = v131; /*0x100aa634e*/
    if ( !v32 ) /*0x100aa6358*/
      goto LABEL_40; /*0x100aa6358*/
    goto LABEL_22; /*0x100aa6358*/
  }
  if ( v133 < 0x15 ) /*0x100aa7819*/
  {
    v121 = (unsigned int *)(v132 + 4 * v133); /*0x100aa781f*/
    v122 = (unsigned int *)(v132 + 4); /*0x100aa7823*/
    v123 = 4; /*0x100aa7827*/
    do /*0x100aa783e*/
    {
      v124 = *(v122 - 1); /*0x100aa7844*/
      v125 = *v122; /*0x100aa7848*/
      if ( *v122 < v124 ) /*0x100aa784d*/
      {
        v126 = v123; /*0x100aa784f*/
        do /*0x100aa7868*/
        {
          *(_DWORD *)((char *)v31 + v126) = v124; /*0x100aa7852*/
          if ( v126 == 4 ) /*0x100aa785a*/
          {
            v30 = v31; /*0x100aa782e*/
            goto LABEL_105; /*0x100aa782e*/
          }
          v124 = *(_DWORD *)((char *)v31 + v126 - 8); /*0x100aa785c*/
          v126 -= 4; /*0x100aa7861*/
        }
        while ( v125 < v124 ); /*0x100aa7868*/
        v30 = (__int64 *)((char *)v31 + v126); /*0x100aa786a*/
LABEL_105:
        *(_DWORD *)v30 = v125; /*0x100aa7831*/
      }
      ++v122; /*0x100aa7833*/
      v123 += 4; /*0x100aa7837*/
    }
    while ( v122 != v121 ); /*0x100aa783e*/
    goto LABEL_21; /*0x100aa783e*/
  }
  v30 = (__int64 *)v132; /*0x100aa79b8*/
  v127 = v133; /*0x100aa79bb*/
  core::slice::sort::stable::driftsort_main::hd057c5e6d2d218cd(v132, v133, &v158); /*0x100aa79c1*/
  v34 = v131; /*0x100aa79c6*/
  v31 = v144; /*0x100aa79cd*/
  v32 = v127; /*0x100aa79d4*/
LABEL_22:
  v143 = v34; /*0x100aa635e*/
  v136 = a3; /*0x100aa6365*/
  v134 = 4 * v32; /*0x100aa6370*/
  v35 = 0; /*0x100aa6377*/
  do /*0x100aa6830*/
  {
    v36 = *(unsigned int *)((char *)v31 + v35); /*0x100aa6390*/
    v145 = nullptr; /*0x100aa6394*/
    v147 = 0; /*0x100aa639f*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v30, v34); /*0x100aa63aa*/
    v37 = 4; /*0x100aa63af*/
    v38 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100aa63bf*/
    if ( !v38 ) /*0x100aa63c7*/
      goto LABEL_113; /*0x100aa63c7*/
    *v38 = 1701869940; /*0x100aa63d0*/
    v151 = 4; /*0x100aa63d6*/
    v152 = (size_t)v38; /*0x100aa63e1*/
    v153 = 4; /*0x100aa63e8*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x100aa63f3*/
    v39 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1); /*0x100aa6402*/
    if ( !v39 ) /*0x100aa640a*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 18); /*0x100aa7913*/
    qmemcpy(v39, "content_block_stop", 18); /*0x100aa6428*/
    LOBYTE(v180) = 3; /*0x100aa6431*/
    v181 = 18; /*0x100aa6435*/
    v182 = (__int64)v39; /*0x100aa643d*/
    v183 = 18; /*0x100aa6441*/
    v40 = (char **)&v169; /*0x100aa6449*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v169, &v145, &v151); /*0x100aa645a*/
    if ( v169 == (char **)0x8000000000000000LL ) /*0x100aa6470*/
    {
      v41 = (char *)v170; /*0x100aa6472*/
      v42 = 32 * v172; /*0x100aa6480*/
      v179 = *((_QWORD *)v170 + 4 * v172 + 3); /*0x100aa6489*/
      __n = *((_QWORD *)v170 + 4 * v172 + 2); /*0x100aa6492*/
      v43 = *((char **)v170 + 4 * v172); /*0x100aa6496*/
      __src = *((void **)v170 + 4 * v172 + 1); /*0x100aa649f*/
      v176 = v43; /*0x100aa64a3*/
      *(_QWORD *)((char *)v170 + v42 + 24) = v183; /*0x100aa64ab*/
      *(_QWORD *)&v41[v42 + 16] = v182; /*0x100aa64b4*/
      v44 = v180; /*0x100aa64b9*/
      v45 = (char ***)v181; /*0x100aa64bd*/
      *(_QWORD *)&v41[v42 + 8] = v181; /*0x100aa64c1*/
      *(_QWORD *)&v41[v42] = v44; /*0x100aa64c6*/
      if ( (_BYTE)v176 != 6 ) /*0x100aa64ce*/
      {
        v40 = &v176; /*0x100aa64d4*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v176); /*0x100aa64d8*/
      }
    }
    else
    {
      v164 = v175; /*0x100aa64f4*/
      v163 = v174; /*0x100aa64ff*/
      v162 = v173; /*0x100aa650a*/
      v161 = (__int64 (__fastcall *)())v172; /*0x100aa6518*/
      v160 = (char **)v171; /*0x100aa6526*/
      v159 = (__int64 (__fastcall *)())v170; /*0x100aa653b*/
      v158 = v169; /*0x100aa6542*/
      v168 = v183; /*0x100aa654d*/
      v167 = v182; /*0x100aa6558*/
      v166 = v181; /*0x100aa6567*/
      v165 = v180; /*0x100aa656e*/
      v40 = &v176; /*0x100aa6575*/
      v45 = &v158; /*0x100aa6579*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aa6587*/
        &v176,
        &v158,
        &v165);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v40, v45); /*0x100aa658c*/
    v37 = 5; /*0x100aa6591*/
    v46 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100aa65a1*/
    if ( !v46 ) /*0x100aa65a9*/
LABEL_113:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v37); /*0x100aa78ff*/
    *(_BYTE *)(v46 + 4) = 120; /*0x100aa65af*/
    *(_DWORD *)v46 = 1701080681; /*0x100aa65b3*/
    v151 = 5; /*0x100aa65b9*/
    v152 = v46; /*0x100aa65c4*/
    v153 = 5; /*0x100aa65cb*/
    LOBYTE(v180) = 2; /*0x100aa65d6*/
    v181 = 0; /*0x100aa65da*/
    v182 = v36; /*0x100aa65e2*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v169, &v145, &v151); /*0x100aa65f7*/
    if ( v169 == (char **)0x8000000000000000LL ) /*0x100aa660d*/
    {
      v47 = (char *)v170; /*0x100aa660f*/
      v48 = 32 * v172; /*0x100aa661d*/
      v179 = *((_QWORD *)v170 + 4 * v172 + 3); /*0x100aa6626*/
      __n = *((_QWORD *)v170 + 4 * v172 + 2); /*0x100aa662f*/
      v49 = *((char **)v170 + 4 * v172); /*0x100aa6633*/
      __src = *((void **)v170 + 4 * v172 + 1); /*0x100aa663c*/
      v176 = v49; /*0x100aa6640*/
      *(_QWORD *)((char *)v170 + v48 + 24) = v183; /*0x100aa6648*/
      *(_QWORD *)&v47[v48 + 16] = v182; /*0x100aa6651*/
      v50 = v180; /*0x100aa6656*/
      *(_QWORD *)&v47[v48 + 8] = v181; /*0x100aa665e*/
      *(_QWORD *)&v47[v48] = v50; /*0x100aa6663*/
      if ( (_BYTE)v176 != 6 ) /*0x100aa666b*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v176); /*0x100aa6675*/
    }
    else
    {
      v164 = v175; /*0x100aa6684*/
      v163 = v174; /*0x100aa668f*/
      v162 = v173; /*0x100aa669a*/
      v161 = (__int64 (__fastcall *)())v172; /*0x100aa66a8*/
      v160 = (char **)v171; /*0x100aa66b6*/
      v159 = (__int64 (__fastcall *)())v170; /*0x100aa66cb*/
      v158 = v169; /*0x100aa66d2*/
      v168 = v183; /*0x100aa66dd*/
      v167 = v182; /*0x100aa66e8*/
      v166 = v181; /*0x100aa66f7*/
      v165 = v180; /*0x100aa66fe*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aa6717*/
        &v176,
        &v158,
        &v165);
    }
    v157 = v147; /*0x100aa672a*/
    v156 = v146; /*0x100aa673c*/
    v155 = v145; /*0x100aa6740*/
    LOBYTE(v154) = 5; /*0x100aa6743*/
    v176 = "content_block_stopmessage_deltamessage_stop"; /*0x100aa6751*/
    __src = (void *)18; /*0x100aa6755*/
    v165 = (char *)&v154; /*0x100aa6764*/
    v158 = &v176; /*0x100aa676f*/
    v159 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100aa677d*/
    v160 = &v165; /*0x100aa678b*/
    v161 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcb50c2f2fdedac0f; /*0x100aa6799*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v169, &unk_1017C9F28, &v158); /*0x100aa67b1*/
    v52 = v170; /*0x100aa67b6*/
    v53 = v171; /*0x100aa67bd*/
    v54 = v150; /*0x100aa67cb*/
    if ( v171 > v148 - v150 ) /*0x100aa67d8*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100aa6850*/
        &v148,
        v150,
        v171,
        1,
        1,
        v51);
      v54 = v150; /*0x100aa6855*/
    }
    memcpy((void *)(v54 + v149), v52, v53); /*0x100aa67ea*/
    v150 = v53 + v54; /*0x100aa67f2*/
    v34 = (__int64)v169; /*0x100aa67f9*/
    if ( v169 ) /*0x100aa6803*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v169, 1); /*0x100aa680d*/
    v30 = &v154; /*0x100aa6812*/
    v31 = v144; /*0x100aa6819*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v154); /*0x100aa6820*/
    v35 += 4; /*0x100aa6825*/
  }
  while ( v134 != v35 ); /*0x100aa6830*/
  a3 = v136; /*0x100aa6861*/
  v33 = v142; /*0x100aa6868*/
  v34 = v143; /*0x100aa686f*/
LABEL_40:
  if ( v34 ) /*0x100aa6879*/
  {
    v34 *= 4; /*0x100aa687b*/
    v30 = v31; /*0x100aa6884*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, v34, 4); /*0x100aa6887*/
  }
  if ( v33 == 14 ) /*0x100aa6890*/
  {
    v58 = 0x636F6E74656E745FLL; /*0x100aa68f6*/
    v59 = _byteswap_uint64(*(_QWORD *)a3); /*0x100aa6904*/
    if ( v59 != 0x636F6E74656E745FLL /*0x100aa6922*/
      || (v58 = 0x745F66696C746572LL, v59 = _byteswap_uint64(*(_QWORD *)(a3 + 6)), v60 = 0, v59 != 0x745F66696C746572LL) )
    {
      v60 = 2 * (v59 >= v58) - 1; /*0x100aa692c*/
    }
    v56 = v60 == 0; /*0x100aa6932*/
    v55 = 5LL * (v60 == 0) + 8; /*0x100aa6937*/
    v57 = "stop_sequencemax_tokenscontent_filterlengthresponse.in_progress"; /*0x100aa693c*/
    goto LABEL_51; /*0x100aa693c*/
  }
  v55 = 8; /*0x100aa6892*/
  if ( v33 == 10 ) /*0x100aa689b*/
  {
    v56 = (*(_QWORD *)a3 ^ 0x6C61635F6C6F6F74LL | *(unsigned __int16 *)(a3 + 8) ^ 0x736CLL) == 0; /*0x100aa68ea*/
    v57 = (char *)&unk_101674AA8; /*0x100aa68ed*/
LABEL_51:
    v61 = (char *)&unk_101674AB0; /*0x100aa6943*/
    if ( v56 ) /*0x100aa694a*/
      v61 = v57; /*0x100aa694a*/
    goto LABEL_55; /*0x100aa694a*/
  }
  if ( v33 == 6 ) /*0x100aa68a1*/
  {
    v56 = (*(_DWORD *)a3 ^ 0x676E656C | *(unsigned __int16 *)(a3 + 4) ^ 0x6874) == 0; /*0x100aa68bd*/
    v55 = 2LL * v56 + 8; /*0x100aa68c2*/
    v57 = "max_tokenscontent_filterlengthresponse.in_progress"; /*0x100aa68c7*/
    goto LABEL_51; /*0x100aa68ce*/
  }
  v61 = (char *)&unk_101674AB0; /*0x100aa6950*/
LABEL_55:
  v140[0] = 0; /*0x100aa6957*/
  v141 = 0; /*0x100aa6962*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v30, v34); /*0x100aa696d*/
  v62 = 4; /*0x100aa6972*/
  v63 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100aa6982*/
  if ( !v63 ) /*0x100aa698a*/
    goto LABEL_115; /*0x100aa698a*/
  *v63 = 1701869940; /*0x100aa6993*/
  v154 = 4; /*0x100aa6999*/
  v155 = (char ***)v63; /*0x100aa69a4*/
  v156 = 4; /*0x100aa69ab*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x100aa69b6*/
  v64 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x100aa69c5*/
  if ( !v64 ) /*0x100aa69cd*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13); /*0x100aa7957*/
  qmemcpy(v64, "message_delta", 13); /*0x100aa69eb*/
  LOBYTE(v180) = 3; /*0x100aa69ee*/
  v181 = 13; /*0x100aa69f2*/
  v182 = (__int64)v64; /*0x100aa69fa*/
  v183 = 13; /*0x100aa69fe*/
  v65 = (char **)&v169; /*0x100aa6a06*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v169, v140, &v154); /*0x100aa6a1b*/
  if ( v169 == (char **)0x8000000000000000LL ) /*0x100aa6a31*/
  {
    v66 = (char *)v170; /*0x100aa6a33*/
    v67 = 32 * v172; /*0x100aa6a41*/
    v179 = *((_QWORD *)v170 + 4 * v172 + 3); /*0x100aa6a4a*/
    __n = *((_QWORD *)v170 + 4 * v172 + 2); /*0x100aa6a53*/
    v68 = *((char **)v170 + 4 * v172); /*0x100aa6a57*/
    __src = *((void **)v170 + 4 * v172 + 1); /*0x100aa6a60*/
    v176 = v68; /*0x100aa6a64*/
    *(_QWORD *)((char *)v170 + v67 + 24) = v183; /*0x100aa6a6c*/
    *(_QWORD *)&v66[v67 + 16] = v182; /*0x100aa6a75*/
    v69 = v180; /*0x100aa6a7a*/
    v70 = (char ***)v181; /*0x100aa6a7e*/
    *(_QWORD *)&v66[v67 + 8] = v181; /*0x100aa6a82*/
    *(_QWORD *)&v66[v67] = v69; /*0x100aa6a87*/
    if ( (_BYTE)v176 != 6 ) /*0x100aa6a8f*/
    {
      v65 = &v176; /*0x100aa6a95*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v176); /*0x100aa6a99*/
    }
  }
  else
  {
    v164 = v175; /*0x100aa6aa7*/
    v163 = v174; /*0x100aa6ab2*/
    v162 = v173; /*0x100aa6abd*/
    v161 = (__int64 (__fastcall *)())v172; /*0x100aa6acb*/
    v160 = (char **)v171; /*0x100aa6ad9*/
    v159 = (__int64 (__fastcall *)())v170; /*0x100aa6aee*/
    v158 = v169; /*0x100aa6af5*/
    v168 = v183; /*0x100aa6b00*/
    v167 = v182; /*0x100aa6b0b*/
    v166 = v181; /*0x100aa6b1a*/
    v165 = v180; /*0x100aa6b21*/
    v65 = &v176; /*0x100aa6b28*/
    v70 = &v158; /*0x100aa6b2c*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aa6b3a*/
      &v176,
      &v158,
      &v165);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v65, v70); /*0x100aa6b3f*/
  v62 = 5; /*0x100aa6b44*/
  v71 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100aa6b54*/
  if ( !v71 ) /*0x100aa6b5c*/
    goto LABEL_115; /*0x100aa6b5c*/
  *(_BYTE *)(v71 + 4) = 97; /*0x100aa6b65*/
  *(_DWORD *)v71 = 1953260900; /*0x100aa6b69*/
  v137 = 5; /*0x100aa6b6f*/
  v138 = v71; /*0x100aa6b7a*/
  v139 = 5; /*0x100aa6b81*/
  v145 = nullptr; /*0x100aa6b8c*/
  v147 = 0; /*0x100aa6b97*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x100aa6ba2*/
  v72 = 11; /*0x100aa6ba7*/
  v73 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1); /*0x100aa6bb7*/
  if ( !v73 ) /*0x100aa6bbf*/
    goto LABEL_116; /*0x100aa6bbf*/
  qmemcpy(v73, "stop_reason", 11); /*0x100aa6bd2*/
  v151 = 11; /*0x100aa6bdf*/
  v152 = (size_t)v73; /*0x100aa6bea*/
  v153 = 11; /*0x100aa6bf1*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(11, 1); /*0x100aa6bfc*/
  v74 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v55, 1); /*0x100aa6c09*/
  if ( !v74 ) /*0x100aa6c11*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v55); /*0x100aa7966*/
  v75 = (__int64)v74; /*0x100aa6c17*/
  memcpy(v74, v61, v55); /*0x100aa6c23*/
  LOBYTE(v180) = 3; /*0x100aa6c28*/
  v181 = v55; /*0x100aa6c2c*/
  v182 = v75; /*0x100aa6c30*/
  v183 = v55; /*0x100aa6c34*/
  v76 = (char **)&v169; /*0x100aa6c38*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v169, &v145, &v151); /*0x100aa6c4d*/
  if ( v169 == (char **)0x8000000000000000LL ) /*0x100aa6c63*/
  {
    v77 = (char *)v170; /*0x100aa6c65*/
    v78 = 32 * v172; /*0x100aa6c73*/
    v179 = *((_QWORD *)v170 + 4 * v172 + 3); /*0x100aa6c7c*/
    __n = *((_QWORD *)v170 + 4 * v172 + 2); /*0x100aa6c85*/
    v79 = *((char **)v170 + 4 * v172); /*0x100aa6c89*/
    __src = *((void **)v170 + 4 * v172 + 1); /*0x100aa6c92*/
    v176 = v79; /*0x100aa6c96*/
    *(_QWORD *)((char *)v170 + v78 + 24) = v183; /*0x100aa6c9e*/
    *(_QWORD *)&v77[v78 + 16] = v182; /*0x100aa6ca7*/
    v80 = v180; /*0x100aa6cac*/
    v81 = (char ***)v181; /*0x100aa6cb0*/
    *(_QWORD *)&v77[v78 + 8] = v181; /*0x100aa6cb4*/
    *(_QWORD *)&v77[v78] = v80; /*0x100aa6cb9*/
    if ( (_BYTE)v176 != 6 ) /*0x100aa6cc1*/
    {
      v76 = &v176; /*0x100aa6cc7*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v176); /*0x100aa6ccb*/
    }
  }
  else
  {
    v164 = v175; /*0x100aa6cd9*/
    v163 = v174; /*0x100aa6ce4*/
    v162 = v173; /*0x100aa6cef*/
    v161 = (__int64 (__fastcall *)())v172; /*0x100aa6cfd*/
    v160 = (char **)v171; /*0x100aa6d0b*/
    v159 = (__int64 (__fastcall *)())v170; /*0x100aa6d20*/
    v158 = v169; /*0x100aa6d27*/
    v168 = v183; /*0x100aa6d32*/
    v167 = v182; /*0x100aa6d3d*/
    v166 = v181; /*0x100aa6d4c*/
    v165 = v180; /*0x100aa6d53*/
    v76 = &v176; /*0x100aa6d5a*/
    v81 = &v158; /*0x100aa6d5e*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aa6d6c*/
      &v176,
      &v158,
      &v165);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v76, v81); /*0x100aa6d71*/
  v72 = 13; /*0x100aa6d76*/
  v82 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x100aa6d86*/
  if ( !v82 ) /*0x100aa6d8e*/
LABEL_116:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v72); /*0x100aa7937*/
  qmemcpy(v82, "stop_sequence", 13); /*0x100aa6dac*/
  v151 = 13; /*0x100aa6daf*/
  v152 = (size_t)v82; /*0x100aa6dba*/
  v153 = 13; /*0x100aa6dc1*/
  LOBYTE(v180) = 0; /*0x100aa6dcc*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v169, &v145, &v151); /*0x100aa6de5*/
  if ( v169 == (char **)0x8000000000000000LL ) /*0x100aa6dfb*/
  {
    v83 = (char *)v170; /*0x100aa6dfd*/
    v84 = 32 * v172; /*0x100aa6e0b*/
    v179 = *((_QWORD *)v170 + 4 * v172 + 3); /*0x100aa6e14*/
    __n = *((_QWORD *)v170 + 4 * v172 + 2); /*0x100aa6e1d*/
    v85 = *((char **)v170 + 4 * v172); /*0x100aa6e21*/
    __src = *((void **)v170 + 4 * v172 + 1); /*0x100aa6e2a*/
    v176 = v85; /*0x100aa6e2e*/
    *(_QWORD *)((char *)v170 + v84 + 24) = v183; /*0x100aa6e36*/
    *(_QWORD *)&v83[v84 + 16] = v182; /*0x100aa6e3f*/
    v86 = v180; /*0x100aa6e44*/
    *(_QWORD *)&v83[v84 + 8] = v181; /*0x100aa6e4c*/
    *(_QWORD *)&v83[v84] = v86; /*0x100aa6e51*/
    if ( (_BYTE)v176 != 6 ) /*0x100aa6e59*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v176); /*0x100aa6e63*/
  }
  else
  {
    v164 = v175; /*0x100aa6e71*/
    v163 = v174; /*0x100aa6e7c*/
    v162 = v173; /*0x100aa6e87*/
    v161 = (__int64 (__fastcall *)())v172; /*0x100aa6e95*/
    v160 = (char **)v171; /*0x100aa6ea3*/
    v159 = (__int64 (__fastcall *)())v170; /*0x100aa6eb8*/
    v158 = v169; /*0x100aa6ebf*/
    v168 = v183; /*0x100aa6eca*/
    v167 = v182; /*0x100aa6ed5*/
    v166 = v181; /*0x100aa6ee4*/
    v165 = v180; /*0x100aa6eeb*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aa6f04*/
      &v176,
      &v158,
      &v165);
  }
  v155 = v145; /*0x100aa6f17*/
  v156 = v146; /*0x100aa6f1e*/
  v157 = v147; /*0x100aa6f2c*/
  LOBYTE(v154) = 5; /*0x100aa6f33*/
  v87 = (char **)&v169; /*0x100aa6f3a*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v169, v140, &v137); /*0x100aa6f4f*/
  if ( v169 == (char **)0x8000000000000000LL ) /*0x100aa6f65*/
  {
    v88 = (char *)v170; /*0x100aa6f67*/
    v89 = 32 * v172; /*0x100aa6f75*/
    v179 = *((_QWORD *)v170 + 4 * v172 + 3); /*0x100aa6f7e*/
    __n = *((_QWORD *)v170 + 4 * v172 + 2); /*0x100aa6f87*/
    v90 = *((char **)v170 + 4 * v172); /*0x100aa6f8b*/
    __src = *((void **)v170 + 4 * v172 + 1); /*0x100aa6f94*/
    v176 = v90; /*0x100aa6f98*/
    *(_QWORD *)((char *)v170 + v89 + 24) = v157; /*0x100aa6fa3*/
    *(_QWORD *)&v88[v89 + 16] = v156; /*0x100aa6faf*/
    v91 = v154; /*0x100aa6fb4*/
    v92 = v155; /*0x100aa6fbb*/
    *(_QWORD *)&v88[v89 + 8] = v155; /*0x100aa6fc2*/
    *(_QWORD *)&v88[v89] = v91; /*0x100aa6fc7*/
    if ( (_BYTE)v176 != 6 ) /*0x100aa6fcf*/
    {
      v87 = &v176; /*0x100aa6fd5*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v176); /*0x100aa6fd9*/
    }
  }
  else
  {
    v164 = v175; /*0x100aa6fe7*/
    v163 = v174; /*0x100aa6ff2*/
    v162 = v173; /*0x100aa6ffd*/
    v161 = (__int64 (__fastcall *)())v172; /*0x100aa700b*/
    v160 = (char **)v171; /*0x100aa7019*/
    v159 = (__int64 (__fastcall *)())v170; /*0x100aa702e*/
    v158 = v169; /*0x100aa7035*/
    v168 = v157; /*0x100aa7043*/
    v167 = v156; /*0x100aa7051*/
    v166 = (__int64)v155; /*0x100aa7066*/
    v165 = (char *)v154; /*0x100aa706d*/
    v87 = &v176; /*0x100aa7074*/
    v92 = &v158; /*0x100aa7078*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aa7086*/
      &v176,
      &v158,
      &v165);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v87, v92); /*0x100aa708b*/
  v62 = 5; /*0x100aa7090*/
  v93 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(5, 1); /*0x100aa70a0*/
  if ( !v93 ) /*0x100aa70a8*/
LABEL_115:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v62); /*0x100aa7925*/
  *(_BYTE *)(v93 + 4) = 101; /*0x100aa70b1*/
  *(_DWORD *)v93 = 1734439797; /*0x100aa70b5*/
  v137 = 5; /*0x100aa70bb*/
  v138 = v93; /*0x100aa70c6*/
  v139 = 5; /*0x100aa70cd*/
  v145 = nullptr; /*0x100aa70d8*/
  v147 = 0; /*0x100aa70e3*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(5, 1); /*0x100aa70ee*/
  v94 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x100aa70fd*/
  if ( !v94 ) /*0x100aa7105*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13); /*0x100aa7977*/
  qmemcpy(v94, "output_tokens", 13); /*0x100aa7123*/
  v151 = 13; /*0x100aa7126*/
  v152 = (size_t)v94; /*0x100aa7131*/
  v153 = 13; /*0x100aa7138*/
  LOBYTE(v180) = 2; /*0x100aa7143*/
  v181 = 0; /*0x100aa7147*/
  v182 = 0; /*0x100aa714f*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v169, &v145, &v151); /*0x100aa716c*/
  if ( v169 == (char **)0x8000000000000000LL ) /*0x100aa7182*/
  {
    v95 = (char *)v170; /*0x100aa7184*/
    v96 = 32 * v172; /*0x100aa7192*/
    v179 = *((_QWORD *)v170 + 4 * v172 + 3); /*0x100aa719b*/
    __n = *((_QWORD *)v170 + 4 * v172 + 2); /*0x100aa71a4*/
    v97 = *((char **)v170 + 4 * v172); /*0x100aa71a8*/
    __src = *((void **)v170 + 4 * v172 + 1); /*0x100aa71b1*/
    v176 = v97; /*0x100aa71b5*/
    *(_QWORD *)((char *)v170 + v96 + 24) = v183; /*0x100aa71bd*/
    *(_QWORD *)&v95[v96 + 16] = v182; /*0x100aa71c6*/
    v98 = v180; /*0x100aa71cb*/
    *(_QWORD *)&v95[v96 + 8] = v181; /*0x100aa71d3*/
    *(_QWORD *)&v95[v96] = v98; /*0x100aa71d8*/
    if ( (_BYTE)v176 != 6 ) /*0x100aa71e0*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v176); /*0x100aa71ea*/
  }
  else
  {
    v164 = v175; /*0x100aa71f8*/
    v163 = v174; /*0x100aa7203*/
    v162 = v173; /*0x100aa720e*/
    v161 = (__int64 (__fastcall *)())v172; /*0x100aa721c*/
    v160 = (char **)v171; /*0x100aa722a*/
    v159 = (__int64 (__fastcall *)())v170; /*0x100aa723f*/
    v158 = v169; /*0x100aa7246*/
    v168 = v183; /*0x100aa7251*/
    v167 = v182; /*0x100aa725c*/
    v166 = v181; /*0x100aa726b*/
    v165 = v180; /*0x100aa7272*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aa728b*/
      &v176,
      &v158,
      &v165);
  }
  v155 = v145; /*0x100aa729e*/
  v156 = v146; /*0x100aa72a5*/
  v157 = v147; /*0x100aa72b3*/
  LOBYTE(v154) = 5; /*0x100aa72ba*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v169, v140, &v137); /*0x100aa72d9*/
  if ( v169 == (char **)0x8000000000000000LL ) /*0x100aa72ef*/
  {
    v99 = (char *)v170; /*0x100aa72f1*/
    v100 = 32 * v172; /*0x100aa72ff*/
    v179 = *((_QWORD *)v170 + 4 * v172 + 3); /*0x100aa7308*/
    __n = *((_QWORD *)v170 + 4 * v172 + 2); /*0x100aa7311*/
    v101 = *((char **)v170 + 4 * v172); /*0x100aa7315*/
    __src = *((void **)v170 + 4 * v172 + 1); /*0x100aa731e*/
    v176 = v101; /*0x100aa7322*/
    *(_QWORD *)((char *)v170 + v100 + 24) = v157; /*0x100aa732d*/
    *(_QWORD *)&v99[v100 + 16] = v156; /*0x100aa7339*/
    v102 = v154; /*0x100aa733e*/
    *(_QWORD *)&v99[v100 + 8] = v155; /*0x100aa734c*/
    *(_QWORD *)&v99[v100] = v102; /*0x100aa7351*/
    if ( (_BYTE)v176 != 6 ) /*0x100aa7359*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v176); /*0x100aa7363*/
  }
  else
  {
    v164 = v175; /*0x100aa7371*/
    v163 = v174; /*0x100aa737c*/
    v162 = v173; /*0x100aa7387*/
    v161 = (__int64 (__fastcall *)())v172; /*0x100aa7395*/
    v160 = (char **)v171; /*0x100aa73a3*/
    v159 = (__int64 (__fastcall *)())v170; /*0x100aa73b8*/
    v158 = v169; /*0x100aa73bf*/
    v168 = v157; /*0x100aa73cd*/
    v167 = v156; /*0x100aa73db*/
    v166 = (__int64)v155; /*0x100aa73f0*/
    v165 = (char *)v154; /*0x100aa73f7*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aa7410*/
      &v176,
      &v158,
      &v165);
  }
  v170 = (void *)v140[0]; /*0x100aa7423*/
  v171 = v140[1]; /*0x100aa742a*/
  v172 = v141; /*0x100aa7438*/
  LOBYTE(v169) = 5; /*0x100aa743f*/
  v165 = "message_deltamessage_stop"; /*0x100aa744d*/
  v166 = 13; /*0x100aa7454*/
  v180 = (char *)&v169; /*0x100aa745f*/
  v158 = &v165; /*0x100aa746a*/
  v159 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100aa7478*/
  v160 = &v180; /*0x100aa7483*/
  v161 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcb50c2f2fdedac0f; /*0x100aa7491*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v176, &unk_1017C9F28, &v158); /*0x100aa74aa*/
  v104 = __src; /*0x100aa74af*/
  v105 = __n; /*0x100aa74b3*/
  v106 = v150; /*0x100aa74be*/
  if ( __n > v148 - v150 ) /*0x100aa74cb*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100aa7887*/
      &v148,
      v150,
      __n,
      1,
      1,
      v103);
    v106 = v150; /*0x100aa788c*/
  }
  v107 = v149; /*0x100aa74d1*/
  memcpy((void *)(v149 + v106), v104, v105); /*0x100aa74e2*/
  v108 = v105 + v106; /*0x100aa74e7*/
  v150 = v108; /*0x100aa74ea*/
  v109 = v176; /*0x100aa74f1*/
  if ( v176 ) /*0x100aa74f8*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v104, v176, 1); /*0x100aa7502*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v169); /*0x100aa750e*/
  v151 = 0; /*0x100aa7513*/
  v153 = 0; /*0x100aa751e*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v169, v109); /*0x100aa7529*/
  v110 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100aa7538*/
  if ( !v110 ) /*0x100aa7540*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x100aa7988*/
  *v110 = 1701869940; /*0x100aa7549*/
  v154 = 4; /*0x100aa754f*/
  v155 = (char ***)v110; /*0x100aa755a*/
  v156 = 4; /*0x100aa7561*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x100aa756c*/
  v111 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x100aa757b*/
  if ( !v111 ) /*0x100aa7583*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 12); /*0x100aa7999*/
  qmemcpy(v111, "message_stop", 12); /*0x100aa7593*/
  LOBYTE(v180) = 3; /*0x100aa759d*/
  v181 = 12; /*0x100aa75a1*/
  v182 = (__int64)v111; /*0x100aa75a9*/
  v183 = 12; /*0x100aa75ad*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v169, &v151, &v154); /*0x100aa75cd*/
  if ( v169 == (char **)0x8000000000000000LL ) /*0x100aa75e3*/
  {
    v112 = (char *)v170; /*0x100aa75e5*/
    v113 = 32 * v172; /*0x100aa75f3*/
    v179 = *((_QWORD *)v170 + 4 * v172 + 3); /*0x100aa75fc*/
    __n = *((_QWORD *)v170 + 4 * v172 + 2); /*0x100aa7605*/
    v114 = *((char **)v170 + 4 * v172); /*0x100aa7609*/
    __src = *((void **)v170 + 4 * v172 + 1); /*0x100aa7612*/
    v176 = v114; /*0x100aa7616*/
    *(_QWORD *)((char *)v170 + v113 + 24) = v183; /*0x100aa761e*/
    *(_QWORD *)&v112[v113 + 16] = v182; /*0x100aa7627*/
    v115 = v180; /*0x100aa762c*/
    *(_QWORD *)&v112[v113 + 8] = v181; /*0x100aa7634*/
    *(_QWORD *)&v112[v113] = v115; /*0x100aa7639*/
    if ( (_BYTE)v176 != 6 ) /*0x100aa7641*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v176); /*0x100aa764b*/
  }
  else
  {
    v164 = v175; /*0x100aa7659*/
    v163 = v174; /*0x100aa7664*/
    v162 = v173; /*0x100aa766f*/
    v161 = (__int64 (__fastcall *)())v172; /*0x100aa767d*/
    v160 = (char **)v171; /*0x100aa768b*/
    v159 = (__int64 (__fastcall *)())v170; /*0x100aa76a0*/
    v158 = v169; /*0x100aa76a7*/
    v168 = v183; /*0x100aa76b2*/
    v167 = v182; /*0x100aa76bd*/
    v166 = v181; /*0x100aa76cc*/
    v165 = v180; /*0x100aa76d3*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x100aa76ec*/
      &v176,
      &v158,
      &v165);
  }
  v170 = (void *)v151; /*0x100aa76ff*/
  v171 = v152; /*0x100aa7706*/
  v172 = v153; /*0x100aa7714*/
  LOBYTE(v169) = 5; /*0x100aa771b*/
  v165 = "message_stop"; /*0x100aa7729*/
  v166 = 12; /*0x100aa7730*/
  v180 = (char *)&v169; /*0x100aa773b*/
  v158 = &v165; /*0x100aa773f*/
  v159 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100aa774d*/
  v160 = &v180; /*0x100aa7758*/
  v161 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcb50c2f2fdedac0f; /*0x100aa7766*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v176, &unk_1017C9F28, &v158); /*0x100aa777f*/
  v117 = __src; /*0x100aa7784*/
  v118 = __n; /*0x100aa7788*/
  if ( __n > v148 - v108 ) /*0x100aa7799*/
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb( /*0x100aa78b0*/
      &v148,
      v108,
      __n,
      1,
      1,
      v116);
    v107 = v149; /*0x100aa78b5*/
    v108 = v150; /*0x100aa78bc*/
  }
  memcpy((void *)(v108 + v107), v117, v118); /*0x100aa77ab*/
  v150 = v118 + v108; /*0x100aa77b3*/
  if ( v176 ) /*0x100aa77c1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v117, v176, 1); /*0x100aa77cb*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v169); /*0x100aa77d7*/
  v119 = v135; /*0x100aa77e3*/
  v135[2] = v150; /*0x100aa77ea*/
  v120 = v148; /*0x100aa77ee*/
  v119[1] = v149; /*0x100aa77fc*/
  *v119 = v120; /*0x100aa7800*/
}