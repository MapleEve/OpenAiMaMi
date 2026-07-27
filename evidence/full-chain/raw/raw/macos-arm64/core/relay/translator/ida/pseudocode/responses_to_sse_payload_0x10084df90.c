// __ZN13codexmate_lib4core5relay10translator24responses_to_sse_payload @ 0x10084df90 | 基线 same-set
// [FULL IDA decompiler]

void **__fastcall codexmate_lib::core::relay::translator::responses_to_sse_payload::heb299e141bee3947(
        void **p_src,
        unsigned __int8 *a2)
{
  void **v2; // rbx
  __int64 v3; // rax
  __int64 *v4; // rax
  unsigned __int8 *v5; // rax
  void *v6; // rax
  __int64 **v7; // rdi
  __int64 *v8; // rax
  __int64 v9; // rbx
  _DWORD *v10; // rax
  void *v11; // rax
  __int64 **v12; // rdi
  char *v13; // rax
  __int64 v14; // rcx
  __int64 **v15; // rdx
  __int64 *v16; // rdx
  _QWORD *v17; // rsi
  _QWORD *v18; // rax
  char *v19; // rax
  __int64 v20; // rcx
  __int64 **v21; // rdx
  __int64 *v22; // rdx
  __int64 v23; // r9
  __int64 *v24; // r14
  void *v25; // r15
  size_t v26; // r12
  __int64 v27; // rdi
  size_t v28; // rbx
  size_t v29; // rbx
  char *v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  __int64 v35; // r15
  __int64 v36; // rbx
  _DWORD *v37; // rax
  void *v38; // rax
  __int64 **v39; // rdi
  char *v40; // rax
  __int64 v41; // rcx
  __int64 **v42; // rdx
  __int64 *v43; // rdx
  _QWORD *v44; // rsi
  void *v45; // rax
  __int64 **v46; // rdi
  char *v47; // rax
  __int64 v48; // rcx
  __int64 **v49; // rdx
  __int64 *v50; // rdx
  _QWORD *v51; // rsi
  _DWORD *v52; // rax
  char *v53; // rax
  __int64 v54; // rcx
  __int64 **v55; // rdx
  __int64 *v56; // rdx
  __int64 v57; // r9
  __int64 v58; // r14
  void *v59; // r13
  size_t v60; // r12
  size_t v61; // rbx
  const char *v62; // rdi
  __int64 v63; // rsi
  size_t v64; // rbx
  __int64 v65; // rax
  __int64 v66; // rcx
  __int64 v67; // rax
  signed __int64 v68; // r15
  char *v69; // rcx
  _DWORD *v70; // rax
  void *v71; // rax
  __int64 v72; // r14
  _DWORD *v73; // rax
  void *v74; // rax
  __int64 **v75; // rdi
  char *v76; // rax
  __int64 v77; // rcx
  __int64 **v78; // rdx
  __int64 *v79; // rdx
  _QWORD *v80; // rsi
  void *v81; // rax
  __int64 **v82; // rdi
  char *v83; // rax
  __int64 v84; // rcx
  __int64 **v85; // rdx
  __int64 *v86; // rdx
  _QWORD *v87; // rsi
  __int64 v88; // rax
  __int64 v89; // r12
  __int64 v90; // rax
  __int64 v91; // r14
  char *v92; // rax
  __int64 v93; // rcx
  __int64 **v94; // rdx
  __int64 *v95; // rdx
  __int64 v96; // r9
  __int64 v97; // r14
  void *v98; // r13
  size_t v99; // r12
  __int64 v100; // r12
  _DWORD *v101; // rax
  void *v102; // rax
  __int64 **v103; // rdi
  char *v104; // rax
  __int64 v105; // rcx
  __int64 **v106; // rdx
  __int64 *v107; // rdx
  _QWORD *v108; // rsi
  void *v109; // rax
  __int64 **v110; // rdi
  char *v111; // rax
  __int64 v112; // rcx
  __int64 **v113; // rdx
  __int64 *v114; // rdx
  _QWORD *v115; // rsi
  _DWORD *v116; // rax
  char *v117; // rax
  __int64 v118; // rcx
  __int64 **v119; // rdx
  __int64 *v120; // rdx
  __int64 v121; // r9
  __int64 v122; // r14
  void *v123; // r13
  size_t v124; // r12
  __int64 v125; // r12
  _DWORD *v126; // rax
  void *v127; // rax
  __int64 **v128; // rdi
  char *v129; // rax
  __int64 v130; // rcx
  __int64 **v131; // rdx
  __int64 *v132; // rdx
  _QWORD *v133; // rsi
  _QWORD *v134; // rax
  char *v135; // rax
  __int64 v136; // rcx
  __int64 **v137; // rdx
  __int64 *v138; // rdx
  __int64 v139; // r9
  __int64 *v140; // r14
  void *v141; // r15
  size_t v142; // r12
  void **v143; // rbx
  void *v144; // rax
  _QWORD v146[4]; // [rsp+0h] [rbp-1D0h] BYREF
  void **v147; // [rsp+20h] [rbp-1B0h]
  __int64 v148; // [rsp+28h] [rbp-1A8h]
  __int64 v149; // [rsp+30h] [rbp-1A0h]
  unsigned __int8 *v150; // [rsp+40h] [rbp-190h]
  __int64 v151; // [rsp+48h] [rbp-188h]
  __int64 v152; // [rsp+50h] [rbp-180h]
  size_t v153; // [rsp+58h] [rbp-178h]
  __int64 v154; // [rsp+60h] [rbp-170h] BYREF
  _QWORD *v155; // [rsp+68h] [rbp-168h]
  __int64 v156; // [rsp+70h] [rbp-160h]
  __int64 v157; // [rsp+78h] [rbp-158h]
  __int64 v158; // [rsp+80h] [rbp-150h]
  void *v159; // [rsp+88h] [rbp-148h]
  char *v160; // [rsp+90h] [rbp-140h] BYREF
  __int64 v161; // [rsp+98h] [rbp-138h]
  size_t v162; // [rsp+A0h] [rbp-130h]
  _QWORD *v163; // [rsp+A8h] [rbp-128h] BYREF
  __int64 v164; // [rsp+B0h] [rbp-120h]
  __int64 v165; // [rsp+B8h] [rbp-118h]
  __int64 *v166; // [rsp+C0h] [rbp-110h] BYREF
  __int64 v167; // [rsp+C8h] [rbp-108h]
  size_t v168; // [rsp+D0h] [rbp-100h]
  __int64 v169; // [rsp+D8h] [rbp-F8h]
  __int64 v170; // [rsp+E0h] [rbp-F0h] BYREF
  size_t v171; // [rsp+E8h] [rbp-E8h]
  __int64 v172; // [rsp+F0h] [rbp-E0h]
  __int64 *v173; // [rsp+F8h] [rbp-D8h] BYREF
  void *v174; // [rsp+100h] [rbp-D0h]
  size_t v175; // [rsp+108h] [rbp-C8h]
  __int64 v176; // [rsp+110h] [rbp-C0h]
  __int64 v177; // [rsp+118h] [rbp-B8h]
  __int64 v178; // [rsp+120h] [rbp-B0h]
  __int64 v179; // [rsp+128h] [rbp-A8h]
  __int64 **v180; // [rsp+130h] [rbp-A0h] BYREF
  __int64 (__fastcall *v181)(_QWORD, _QWORD); // [rsp+138h] [rbp-98h]
  __int64 v182; // [rsp+140h] [rbp-90h]
  __int64 v183; // [rsp+148h] [rbp-88h]
  __int64 *v184; // [rsp+150h] [rbp-80h] BYREF
  void *__src; // [rsp+158h] [rbp-78h] BYREF
  size_t __n; // [rsp+160h] [rbp-70h]
  __int64 v187; // [rsp+168h] [rbp-68h]
  __int64 v188; // [rsp+170h] [rbp-60h]
  __int64 v189; // [rsp+178h] [rbp-58h]
  __int64 v190; // [rsp+180h] [rbp-50h]
  __int64 *v191; // [rsp+188h] [rbp-48h]
  __int64 v192; // [rsp+190h] [rbp-40h]
  size_t v193; // [rsp+198h] [rbp-38h]
  __int64 v194; // [rsp+1A0h] [rbp-30h]

  v2 = p_src;
  v160 = nullptr;
  v161 = 1;
  v162 = 0;
  v3 = *a2;
  v150 = a2;
  switch ( v3 )
  {
    case 0LL:
      LOBYTE(v184) = 0;
      break;
    case 1LL:
    case 2LL:
      v187 = *((_QWORD *)a2 + 3);
      __n = *((_QWORD *)a2 + 2);
      v4 = *(__int64 **)a2;
      __src = *((void **)a2 + 1);
      v184 = v4;
      break;
    case 3LL:
      a2 += 8;
      p_src = &__src;
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&__src, a2);
      LOBYTE(v184) = 3;
      break;
    case 4LL:
      a2 += 8;
      p_src = &__src;
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500(&__src, a2);
      LOBYTE(v184) = 4;
      break;
    case 5LL:
      if ( *((_QWORD *)a2 + 3) )
      {
        v5 = a2;
        a2 = *((unsigned __int8 **)a2 + 1);
        if ( !a2 )
          core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248);
        p_src = &__src;
        _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244(
          &__src,
          a2,
          *((_QWORD *)v5 + 2));
      }
      else
      {
        __src = nullptr;
        v187 = 0;
      }
      LOBYTE(v184) = 5;
      break;
    case 6LL:
      JUMPOUT(0x10109494FLL);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(p_src, a2);
  v6 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1);
  if ( !v6 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 11);
  qmemcpy(v6, "in_progress", 11);
  v174 = (void *)11;
  v175 = (size_t)v6;
  v176 = 11;
  LOBYTE(v173) = 3;
  v147 = v2;
  v7 = (__int64 **)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2(
                     "statusoutput",
                     6u);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v7);
  v7[3] = (__int64 *)11;
  v7[2] = (__int64 *)v175;
  v8 = v173;
  v7[1] = (__int64 *)v174;
  *v7 = v8;
  v146[0] = v184;
  v146[1] = __src;
  v146[2] = __n;
  v146[3] = v187;
  v170 = 0;
  v172 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, 6);
  v9 = 4;
  v10 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v10 )
    goto LABEL_147;
  *v10 = 1701869940;
  v154 = 4;
  v155 = v10;
  v156 = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v11 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(16, 1);
  if ( !v11 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 16);
  qmemcpy(v11, "response.created", 16);
  LOBYTE(v191) = 3;
  v192 = 16;
  v193 = (size_t)v11;
  v194 = 16;
  v12 = &v184;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v184, &v170, &v154);
  if ( __OFSUB__(0, v184) )
  {
    v13 = (char *)__src;
    v14 = 32 * v187;
    v183 = *((_QWORD *)__src + 4 * v187 + 3);
    v182 = *((_QWORD *)__src + 4 * v187 + 2);
    v15 = *((__int64 ***)__src + 4 * v187);
    v181 = *((__int64 (__fastcall **)(_QWORD, _QWORD))__src + 4 * v187 + 1);
    v180 = v15;
    *(_QWORD *)((char *)__src + v14 + 24) = v194;
    *(_QWORD *)&v13[v14 + 16] = v193;
    v16 = v191;
    v17 = (_QWORD *)v192;
    *(_QWORD *)&v13[v14 + 8] = v192;
    *(_QWORD *)&v13[v14] = v16;
    if ( (_BYTE)v180 != 6 )
    {
      v12 = (__int64 **)&v180;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v180);
    }
  }
  else
  {
    v179 = v190;
    v178 = v189;
    v177 = v188;
    v176 = v187;
    v175 = __n;
    v174 = __src;
    v173 = v184;
    v169 = v194;
    v168 = v193;
    v167 = v192;
    v166 = v191;
    v12 = (__int64 **)&v180;
    v17 = &v173;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v180,
      &v173,
      &v166);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v12, v17);
  v9 = 8;
  v18 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
  if ( !v18 )
LABEL_147:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v9);
  *v18 = 0x65736E6F70736572LL;
  v154 = 8;
  v155 = v18;
  v156 = 8;
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
    &v173,
    v146);
  if ( (_BYTE)v173 == 6 )
  {
    v184 = (__int64 *)v174;
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
      43,
      &v184,
      &off_10196D480,
      &off_10196C8B8);
  }
  v194 = v176;
  v193 = v175;
  v192 = (__int64)v174;
  v191 = v173;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v184, &v170, &v154);
  if ( v184 == (__int64 *)0x8000000000000000LL )
  {
    v19 = (char *)__src;
    v20 = 32 * v187;
    v183 = *((_QWORD *)__src + 4 * v187 + 3);
    v182 = *((_QWORD *)__src + 4 * v187 + 2);
    v21 = *((__int64 ***)__src + 4 * v187);
    v181 = *((__int64 (__fastcall **)(_QWORD, _QWORD))__src + 4 * v187 + 1);
    v180 = v21;
    *(_QWORD *)((char *)__src + v20 + 24) = v194;
    *(_QWORD *)&v19[v20 + 16] = v193;
    v22 = v191;
    *(_QWORD *)&v19[v20 + 8] = v192;
    *(_QWORD *)&v19[v20] = v22;
    if ( (_BYTE)v180 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v180);
  }
  else
  {
    v179 = v190;
    v178 = v189;
    v177 = v188;
    v176 = v187;
    v175 = __n;
    v174 = __src;
    v173 = v184;
    v169 = v194;
    v168 = v193;
    v167 = v192;
    v166 = v191;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v180,
      &v173,
      &v166);
  }
  v174 = (void *)v170;
  v175 = v171;
  v176 = v172;
  LOBYTE(v173) = 5;
  v180 = &v173;
  v181 = _$LT$serde_json..value..Value$u20$as$u20$core..fmt..Display$GT$::fmt::hb110daad55e1d5ce;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v184, &unk_1017C5B75, &v180);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v173);
  v24 = v184;
  v25 = __src;
  v26 = __n;
  if ( __n )
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v160, 0, __n, 1, 1, v23);
    v27 = v161;
    v28 = v162;
  }
  else
  {
    v27 = 1;
    v28 = 0;
  }
  memcpy((void *)(v28 + v27), v25, v26);
  v29 = v26 + v28;
  v162 = v29;
  if ( v24 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v24, 1);
  v30 = "output";
  v31 = 6;
  v32 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("output", 6, v150);
  if ( v32 && *(_BYTE *)v32 == 4 && *(_QWORD *)(v32 + 24) )
  {
    v33 = *(_QWORD *)(v32 + 16);
    v148 = v33 + 32LL * *(_QWORD *)(v32 + 24);
    v153 = 0;
    do
    {
      v151 = v33;
      v34 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
              &anon_10420c9971c21f44d230d15b39fb3fec_75,
              4,
              v33);
      if ( v34 && *(_BYTE *)v34 == 3 )
      {
        v159 = *(void **)(v34 + 16);
        v35 = *(_QWORD *)(v34 + 24);
      }
      else
      {
        v159 = (void *)1;
        v35 = 0;
      }
      v163 = nullptr;
      v165 = 0;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&anon_10420c9971c21f44d230d15b39fb3fec_75, 4);
      v36 = 4;
      v37 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
      if ( !v37 )
        goto LABEL_145;
      *v37 = 1701869940;
      v170 = 4;
      v171 = (size_t)v37;
      v172 = 4;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
      v38 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(26, 1);
      if ( !v38 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 26);
      qmemcpy(v38, "response.output_item.added", 26);
      LOBYTE(v191) = 3;
      v192 = 26;
      v193 = (size_t)v38;
      v194 = 26;
      v39 = &v184;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v184, &v163, &v170);
      if ( v184 == (__int64 *)0x8000000000000000LL )
      {
        v40 = (char *)__src;
        v41 = 32 * v187;
        v183 = *((_QWORD *)__src + 4 * v187 + 3);
        v182 = *((_QWORD *)__src + 4 * v187 + 2);
        v42 = *((__int64 ***)__src + 4 * v187);
        v181 = *((__int64 (__fastcall **)(_QWORD, _QWORD))__src + 4 * v187 + 1);
        v180 = v42;
        *(_QWORD *)((char *)__src + v41 + 24) = v194;
        *(_QWORD *)&v40[v41 + 16] = v193;
        v43 = v191;
        v44 = (_QWORD *)v192;
        *(_QWORD *)&v40[v41 + 8] = v192;
        *(_QWORD *)&v40[v41] = v43;
        if ( (_BYTE)v180 != 6 )
        {
          v39 = (__int64 **)&v180;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v180);
        }
      }
      else
      {
        v179 = v190;
        v178 = v189;
        v177 = v188;
        v176 = v187;
        v175 = __n;
        v174 = __src;
        v173 = v184;
        v169 = v194;
        v168 = v193;
        v167 = v192;
        v166 = v191;
        v39 = (__int64 **)&v180;
        v44 = &v173;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v180,
          &v173,
          &v166);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v39, v44);
      v36 = 12;
      v45 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
      if ( !v45 )
        goto LABEL_145;
      qmemcpy(v45, "output_index", 12);
      v170 = 12;
      v171 = (size_t)v45;
      v172 = 12;
      LOBYTE(v191) = 2;
      v192 = 0;
      v193 = v153;
      v46 = &v184;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v184, &v163, &v170);
      if ( v184 == (__int64 *)0x8000000000000000LL )
      {
        v47 = (char *)__src;
        v48 = 32 * v187;
        v183 = *((_QWORD *)__src + 4 * v187 + 3);
        v182 = *((_QWORD *)__src + 4 * v187 + 2);
        v49 = *((__int64 ***)__src + 4 * v187);
        v181 = *((__int64 (__fastcall **)(_QWORD, _QWORD))__src + 4 * v187 + 1);
        v180 = v49;
        *(_QWORD *)((char *)__src + v48 + 24) = v194;
        *(_QWORD *)&v47[v48 + 16] = v193;
        v50 = v191;
        v51 = (_QWORD *)v192;
        *(_QWORD *)&v47[v48 + 8] = v192;
        *(_QWORD *)&v47[v48] = v50;
        if ( (_BYTE)v180 != 6 )
        {
          v46 = (__int64 **)&v180;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v180);
        }
      }
      else
      {
        v179 = v190;
        v178 = v189;
        v177 = v188;
        v176 = v187;
        v175 = __n;
        v174 = __src;
        v173 = v184;
        v169 = v194;
        v168 = v193;
        v167 = v192;
        v166 = v191;
        v46 = (__int64 **)&v180;
        v51 = &v173;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v180,
          &v173,
          &v166);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v46, v51);
      v36 = 4;
      v52 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
      if ( !v52 )
LABEL_145:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v36);
      *v52 = 1835365481;
      v170 = 4;
      v171 = (size_t)v52;
      v172 = 4;
      serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
        &v173,
        v151);
      if ( (_BYTE)v173 == 6 )
      {
        v184 = (__int64 *)v174;
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
          43,
          &v184,
          &off_10196D480,
          &off_10196C8D0);
      }
      v194 = v176;
      v193 = v175;
      v192 = (__int64)v174;
      v191 = v173;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v184, &v163, &v170);
      if ( v184 == (__int64 *)0x8000000000000000LL )
      {
        v53 = (char *)__src;
        v54 = 32 * v187;
        v183 = *((_QWORD *)__src + 4 * v187 + 3);
        v182 = *((_QWORD *)__src + 4 * v187 + 2);
        v55 = *((__int64 ***)__src + 4 * v187);
        v181 = *((__int64 (__fastcall **)(_QWORD, _QWORD))__src + 4 * v187 + 1);
        v180 = v55;
        *(_QWORD *)((char *)__src + v54 + 24) = v194;
        *(_QWORD *)&v53[v54 + 16] = v193;
        v56 = v191;
        *(_QWORD *)&v53[v54 + 8] = v192;
        *(_QWORD *)&v53[v54] = v56;
        if ( (_BYTE)v180 != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v180);
      }
      else
      {
        v179 = v190;
        v178 = v189;
        v177 = v188;
        v176 = v187;
        v175 = __n;
        v174 = __src;
        v173 = v184;
        v169 = v194;
        v168 = v193;
        v167 = v192;
        v166 = v191;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v180,
          &v173,
          &v166);
      }
      v157 = v165;
      v156 = v164;
      v155 = v163;
      LOBYTE(v154) = 5;
      v184 = &v154;
      __src = _$LT$serde_json..value..Value$u20$as$u20$core..fmt..Display$GT$::fmt::hb110daad55e1d5ce;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v173, &unk_1017C5B99, &v184);
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v154);
      v58 = (__int64)v173;
      v59 = v174;
      v60 = v175;
      v61 = v162;
      if ( v175 > (unsigned __int64)&v160[-v162] )
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
          &v160,
          v162,
          v175,
          1,
          1,
          v57);
        v61 = v162;
      }
      v158 = v161;
      v62 = (const char *)(v161 + v61);
      v63 = (__int64)v59;
      memcpy((void *)(v161 + v61), v59, v60);
      v64 = v60 + v61;
      v162 = v64;
      if ( v58 )
      {
        v62 = (const char *)v59;
        v63 = v58;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, v58, 1);
      }
      if ( v35 == 13 )
      {
        if ( !(*(_QWORD *)v159 ^ 0x6E6F6974636E7566LL | *(_QWORD *)((char *)v159 + 5) ^ 0x6C6C61635F6E6F69LL) )
        {
          v67 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                  "arguments{}",
                  9,
                  v151);
          v68 = 2;
          if ( v67 )
          {
            v69 = "{}";
            if ( *(_BYTE *)v67 == 3 )
            {
              v69 = *(char **)(v67 + 16);
              v68 = *(_QWORD *)(v67 + 24);
            }
          }
          else
          {
            v69 = "{}";
          }
          v159 = v69;
          v163 = nullptr;
          v165 = 0;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("arguments{}", 9);
          v72 = 4;
          v73 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
          if ( !v73 )
            goto LABEL_155;
          *v73 = 1701869940;
          v170 = 4;
          v171 = (size_t)v73;
          v172 = 4;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
          v74 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(37, 1);
          if ( !v74 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 37);
          qmemcpy(v74, "response.function_call_arguments.done", 37);
          LOBYTE(v191) = 3;
          v192 = 37;
          v193 = (size_t)v74;
          v194 = 37;
          v75 = &v184;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v184, &v163, &v170);
          if ( v184 == (__int64 *)0x8000000000000000LL )
          {
            v76 = (char *)__src;
            v77 = 32 * v187;
            v183 = *((_QWORD *)__src + 4 * v187 + 3);
            v182 = *((_QWORD *)__src + 4 * v187 + 2);
            v78 = *((__int64 ***)__src + 4 * v187);
            v181 = *((__int64 (__fastcall **)(_QWORD, _QWORD))__src + 4 * v187 + 1);
            v180 = v78;
            *(_QWORD *)((char *)__src + v77 + 24) = v194;
            *(_QWORD *)&v76[v77 + 16] = v193;
            v79 = v191;
            v80 = (_QWORD *)v192;
            *(_QWORD *)&v76[v77 + 8] = v192;
            *(_QWORD *)&v76[v77] = v79;
            if ( (_BYTE)v180 != 6 )
            {
              v75 = (__int64 **)&v180;
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v180);
            }
          }
          else
          {
            v179 = v190;
            v178 = v189;
            v177 = v188;
            v176 = v187;
            v175 = __n;
            v174 = __src;
            v173 = v184;
            v169 = v194;
            v168 = v193;
            v167 = v192;
            v166 = v191;
            v75 = (__int64 **)&v180;
            v80 = &v173;
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
              &v180,
              &v173,
              &v166);
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v75, v80);
          v72 = 12;
          v81 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
          if ( !v81 )
            goto LABEL_155;
          qmemcpy(v81, "output_index", 12);
          v170 = 12;
          v171 = (size_t)v81;
          v172 = 12;
          LOBYTE(v191) = 2;
          v192 = 0;
          v193 = v153;
          v82 = &v184;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v184, &v163, &v170);
          if ( v184 == (__int64 *)0x8000000000000000LL )
          {
            v83 = (char *)__src;
            v84 = 32 * v187;
            v183 = *((_QWORD *)__src + 4 * v187 + 3);
            v182 = *((_QWORD *)__src + 4 * v187 + 2);
            v85 = *((__int64 ***)__src + 4 * v187);
            v181 = *((__int64 (__fastcall **)(_QWORD, _QWORD))__src + 4 * v187 + 1);
            v180 = v85;
            *(_QWORD *)((char *)__src + v84 + 24) = v194;
            *(_QWORD *)&v83[v84 + 16] = v193;
            v86 = v191;
            v87 = (_QWORD *)v192;
            *(_QWORD *)&v83[v84 + 8] = v192;
            *(_QWORD *)&v83[v84] = v86;
            if ( (_BYTE)v180 != 6 )
            {
              v82 = (__int64 **)&v180;
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v180);
            }
          }
          else
          {
            v179 = v190;
            v178 = v189;
            v177 = v188;
            v176 = v187;
            v175 = __n;
            v174 = __src;
            v173 = v184;
            v169 = v194;
            v168 = v193;
            v167 = v192;
            v166 = v191;
            v82 = (__int64 **)&v180;
            v87 = &v173;
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
              &v180,
              &v173,
              &v166);
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v82, v87);
          v72 = 9;
          v88 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
          if ( !v88 )
LABEL_155:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v72);
          *(_QWORD *)v88 = 0x746E656D75677261LL;
          *(_BYTE *)(v88 + 8) = 115;
          v170 = 9;
          v171 = v88;
          v172 = 9;
          if ( v68 < 0 )
          {
            v89 = 0;
LABEL_138:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v89, v68);
          }
          if ( v68 )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(9, 1);
            v89 = 1;
            v90 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v68, 1);
            if ( !v90 )
              goto LABEL_138;
            v91 = v90;
          }
          else
          {
            v91 = 1;
          }
          memcpy((void *)v91, v159, v68);
          LOBYTE(v191) = 3;
          v192 = v68;
          v193 = v91;
          v194 = v68;
          alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v184, &v163, &v170);
          if ( v184 == (__int64 *)0x8000000000000000LL )
          {
            v92 = (char *)__src;
            v93 = 32 * v187;
            v183 = *((_QWORD *)__src + 4 * v187 + 3);
            v182 = *((_QWORD *)__src + 4 * v187 + 2);
            v94 = *((__int64 ***)__src + 4 * v187);
            v181 = *((__int64 (__fastcall **)(_QWORD, _QWORD))__src + 4 * v187 + 1);
            v180 = v94;
            *(_QWORD *)((char *)__src + v93 + 24) = v194;
            *(_QWORD *)&v92[v93 + 16] = v193;
            v95 = v191;
            *(_QWORD *)&v92[v93 + 8] = v192;
            *(_QWORD *)&v92[v93] = v95;
            if ( (_BYTE)v180 != 6 )
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v180);
          }
          else
          {
            v179 = v190;
            v178 = v189;
            v177 = v188;
            v176 = v187;
            v175 = __n;
            v174 = __src;
            v173 = v184;
            v169 = v194;
            v168 = v193;
            v167 = v192;
            v166 = v191;
            alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
              &v180,
              &v173,
              &v166);
          }
          v157 = v165;
          v156 = v164;
          v155 = v163;
          LOBYTE(v154) = 5;
          v184 = &v154;
          __src = _$LT$serde_json..value..Value$u20$as$u20$core..fmt..Display$GT$::fmt::hb110daad55e1d5ce;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(&v173, &unk_1017C5BC7, &v184);
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v154);
          v97 = (__int64)v173;
          v98 = v174;
          v99 = v175;
          if ( v175 > (unsigned __int64)&v160[-v64] )
          {
            alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
              &v160,
              v64,
              v175,
              1,
              1,
              v96);
            v158 = v161;
            v64 = v162;
          }
          v62 = (const char *)(v158 + v64);
          v63 = (__int64)v98;
          memcpy((void *)(v158 + v64), v98, v99);
          v64 += v99;
          v162 = v64;
          if ( v97 )
          {
            v62 = (const char *)v98;
            v63 = v97;
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v98, v97, 1);
          }
        }
      }
      else if ( v35 == 7 && !(*(_DWORD *)v159 ^ 0x7373656D | *(_DWORD *)((char *)v159 + 3) ^ 0x65676173) )
      {
        v63 = 7;
        v62 = "contentpattern.output_modehead_limit";
        v65 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                "contentpattern.output_modehead_limit",
                7,
                v151);
        if ( v65 )
        {
          if ( *(_BYTE *)v65 == 4 )
          {
            v66 = *(_QWORD *)(v65 + 24);
            if ( v66 )
            {
              v159 = *(void **)(v65 + 16);
              v152 = 0;
              v149 = 32 * v66;
              v163 = nullptr;
              v165 = 0;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(
                "contentpattern.output_modehead_limit",
                7);
              v70 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
              if ( v70 )
              {
                *v70 = 1701869940;
                v170 = 4;
                v171 = (size_t)v70;
                v172 = 4;
                _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
                v71 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(27, 1);
                if ( v71 )
                {
                  qmemcpy(v71, "response.content_part.added", 27);
                  LOBYTE(v191) = 3;
                  v192 = 27;
                  JUMPOUT(0x10084EE9CLL);
                }
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 27);
              }
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4);
            }
          }
        }
      }
      v163 = nullptr;
      v165 = 0;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v62, v63);
      v100 = 4;
      v101 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
      if ( !v101 )
        goto LABEL_146;
      *v101 = 1701869940;
      v170 = 4;
      v171 = (size_t)v101;
      v172 = 4;
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
      v102 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(25, 1);
      if ( !v102 )
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 25);
      qmemcpy(v102, "response.output_item.done", 25);
      LOBYTE(v191) = 3;
      v192 = 25;
      v193 = (size_t)v102;
      v194 = 25;
      v103 = &v184;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v184, &v163, &v170);
      if ( v184 == (__int64 *)0x8000000000000000LL )
      {
        v104 = (char *)__src;
        v105 = 32 * v187;
        v183 = *((_QWORD *)__src + 4 * v187 + 3);
        v182 = *((_QWORD *)__src + 4 * v187 + 2);
        v106 = *((__int64 ***)__src + 4 * v187);
        v181 = *((__int64 (__fastcall **)(_QWORD, _QWORD))__src + 4 * v187 + 1);
        v180 = v106;
        *(_QWORD *)((char *)__src + v105 + 24) = v194;
        *(_QWORD *)&v104[v105 + 16] = v193;
        v107 = v191;
        v108 = (_QWORD *)v192;
        *(_QWORD *)&v104[v105 + 8] = v192;
        *(_QWORD *)&v104[v105] = v107;
        if ( (_BYTE)v180 != 6 )
        {
          v103 = (__int64 **)&v180;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v180);
        }
      }
      else
      {
        v179 = v190;
        v178 = v189;
        v177 = v188;
        v176 = v187;
        v175 = __n;
        v174 = __src;
        v173 = v184;
        v169 = v194;
        v168 = v193;
        v167 = v192;
        v166 = v191;
        v103 = (__int64 **)&v180;
        v108 = &v173;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v180,
          &v173,
          &v166);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v103, v108);
      v100 = 12;
      v109 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1);
      if ( !v109 )
        goto LABEL_146;
      qmemcpy(v109, "output_index", 12);
      v170 = 12;
      v171 = (size_t)v109;
      v172 = 12;
      LOBYTE(v191) = 2;
      v192 = 0;
      v193 = v153;
      v110 = &v184;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v184, &v163, &v170);
      if ( v184 == (__int64 *)0x8000000000000000LL )
      {
        v111 = (char *)__src;
        v112 = 32 * v187;
        v183 = *((_QWORD *)__src + 4 * v187 + 3);
        v182 = *((_QWORD *)__src + 4 * v187 + 2);
        v113 = *((__int64 ***)__src + 4 * v187);
        v181 = *((__int64 (__fastcall **)(_QWORD, _QWORD))__src + 4 * v187 + 1);
        v180 = v113;
        *(_QWORD *)((char *)__src + v112 + 24) = v194;
        *(_QWORD *)&v111[v112 + 16] = v193;
        v114 = v191;
        v115 = (_QWORD *)v192;
        *(_QWORD *)&v111[v112 + 8] = v192;
        *(_QWORD *)&v111[v112] = v114;
        if ( (_BYTE)v180 != 6 )
        {
          v110 = (__int64 **)&v180;
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v180);
        }
      }
      else
      {
        v179 = v190;
        v178 = v189;
        v177 = v188;
        v176 = v187;
        v175 = __n;
        v174 = __src;
        v173 = v184;
        v169 = v194;
        v168 = v193;
        v167 = v192;
        v166 = v191;
        v110 = (__int64 **)&v180;
        v115 = &v173;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v180,
          &v173,
          &v166);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v110, v115);
      v100 = 4;
      v116 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
      if ( !v116 )
LABEL_146:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v100);
      *v116 = 1835365481;
      v170 = 4;
      v171 = (size_t)v116;
      v172 = 4;
      serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
        &v173,
        v151);
      if ( (_BYTE)v173 == 6 )
      {
        v184 = (__int64 *)v174;
        core::result::unwrap_failed::h855bccc0ecc45c4f(
          "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
          43,
          &v184,
          &off_10196D480,
          &off_10196C918);
      }
      v194 = v176;
      v193 = v175;
      v192 = (__int64)v174;
      v191 = v173;
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v184, &v163, &v170);
      if ( v184 == (__int64 *)0x8000000000000000LL )
      {
        v117 = (char *)__src;
        v118 = 32 * v187;
        v183 = *((_QWORD *)__src + 4 * v187 + 3);
        v182 = *((_QWORD *)__src + 4 * v187 + 2);
        v119 = *((__int64 ***)__src + 4 * v187);
        v181 = *((__int64 (__fastcall **)(_QWORD, _QWORD))__src + 4 * v187 + 1);
        v180 = v119;
        *(_QWORD *)((char *)__src + v118 + 24) = v194;
        *(_QWORD *)&v117[v118 + 16] = v193;
        v120 = v191;
        *(_QWORD *)&v117[v118 + 8] = v192;
        *(_QWORD *)&v117[v118] = v120;
        if ( (_BYTE)v180 != 6 )
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v180);
      }
      else
      {
        v179 = v190;
        v178 = v189;
        v177 = v188;
        v176 = v187;
        v175 = __n;
        v174 = __src;
        v173 = v184;
        v169 = v194;
        v168 = v193;
        v167 = v192;
        v166 = v191;
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
          &v180,
          &v173,
          &v166);
      }
      v157 = v165;
      v156 = v164;
      v155 = v163;
      LOBYTE(v154) = 5;
      v184 = &v154;
      __src = _$LT$serde_json..value..Value$u20$as$u20$core..fmt..Display$GT$::fmt::hb110daad55e1d5ce;
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v173, &unk_1017C5CB8, &v184);
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v154);
      v122 = (__int64)v173;
      v123 = v174;
      v124 = v175;
      if ( v175 > (unsigned __int64)&v160[-v64] )
      {
        alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(
          &v160,
          v64,
          v175,
          1,
          1,
          v121);
        v158 = v161;
        v64 = v162;
      }
      v30 = (char *)(v64 + v158);
      v31 = (__int64)v123;
      memcpy((void *)(v64 + v158), v123, v124);
      v29 = v124 + v64;
      v162 = v29;
      if ( v122 )
      {
        v30 = (char *)v123;
        v31 = v122;
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v123, v122, 1);
      }
      v33 = v151 + 32;
      ++v153;
    }
    while ( v151 + 32 != v148 );
  }
  v170 = 0;
  v172 = 0;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v30, v31);
  v125 = 4;
  v126 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1);
  if ( !v126 )
    goto LABEL_149;
  *v126 = 1701869940;
  v154 = 4;
  v155 = v126;
  v156 = 4;
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1);
  v127 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(18, 1);
  if ( !v127 )
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 18);
  qmemcpy(v127, "response.completed", 18);
  LOBYTE(v191) = 3;
  v192 = 18;
  v193 = (size_t)v127;
  v194 = 18;
  v128 = &v184;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v184, &v170, &v154);
  if ( v184 == (__int64 *)0x8000000000000000LL )
  {
    v129 = (char *)__src;
    v130 = 32 * v187;
    v183 = *((_QWORD *)__src + 4 * v187 + 3);
    v182 = *((_QWORD *)__src + 4 * v187 + 2);
    v131 = *((__int64 ***)__src + 4 * v187);
    v181 = *((__int64 (__fastcall **)(_QWORD, _QWORD))__src + 4 * v187 + 1);
    v180 = v131;
    *(_QWORD *)((char *)__src + v130 + 24) = v194;
    *(_QWORD *)&v129[v130 + 16] = v193;
    v132 = v191;
    v133 = (_QWORD *)v192;
    *(_QWORD *)&v129[v130 + 8] = v192;
    *(_QWORD *)&v129[v130] = v132;
    if ( (_BYTE)v180 != 6 )
    {
      v128 = (__int64 **)&v180;
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v180);
    }
  }
  else
  {
    v179 = v190;
    v178 = v189;
    v177 = v188;
    v176 = v187;
    v175 = __n;
    v174 = __src;
    v173 = v184;
    v169 = v194;
    v168 = v193;
    v167 = v192;
    v166 = v191;
    v128 = (__int64 **)&v180;
    v133 = &v173;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v180,
      &v173,
      &v166);
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v128, v133);
  v125 = 8;
  v134 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(8, 1);
  if ( !v134 )
LABEL_149:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v125);
  *v134 = 0x65736E6F70736572LL;
  v154 = 8;
  v155 = v134;
  v156 = 8;
  serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::hc5df5a28bf71eb2e(
    &v173,
    v150);
  if ( (_BYTE)v173 == 6 )
  {
    v184 = (__int64 *)v174;
    core::result::unwrap_failed::h855bccc0ecc45c4f(
      "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
      43,
      &v184,
      &off_10196D480,
      &off_10196C930);
  }
  v194 = v176;
  v193 = v175;
  v192 = (__int64)v174;
  v191 = v173;
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v184, &v170, &v154);
  if ( v184 == (__int64 *)0x8000000000000000LL )
  {
    v135 = (char *)__src;
    v136 = 32 * v187;
    v183 = *((_QWORD *)__src + 4 * v187 + 3);
    v182 = *((_QWORD *)__src + 4 * v187 + 2);
    v137 = *((__int64 ***)__src + 4 * v187);
    v181 = *((__int64 (__fastcall **)(_QWORD, _QWORD))__src + 4 * v187 + 1);
    v180 = v137;
    *(_QWORD *)((char *)__src + v136 + 24) = v194;
    *(_QWORD *)&v135[v136 + 16] = v193;
    v138 = v191;
    *(_QWORD *)&v135[v136 + 8] = v192;
    *(_QWORD *)&v135[v136] = v138;
    if ( (_BYTE)v180 != 6 )
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v180);
  }
  else
  {
    v179 = v190;
    v178 = v189;
    v177 = v188;
    v176 = v187;
    v175 = __n;
    v174 = __src;
    v173 = v184;
    v169 = v194;
    v168 = v193;
    v167 = v192;
    v166 = v191;
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa(
      &v180,
      &v173,
      &v166);
  }
  v174 = (void *)v170;
  v175 = v171;
  v176 = v172;
  LOBYTE(v173) = 5;
  v180 = &v173;
  v181 = _$LT$serde_json..value..Value$u20$as$u20$core..fmt..Display$GT$::fmt::hb110daad55e1d5ce;
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v184, &unk_1017C5CE5, &v180);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v173);
  v140 = v184;
  v141 = __src;
  v142 = __n;
  if ( __n > (unsigned __int64)&v160[-v29] )
  {
    alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9724c97fda9adefb(&v160, v29, __n, 1, 1, v139);
    v29 = v162;
  }
  memcpy((void *)(v29 + v161), v141, v142);
  v162 = v142 + v29;
  if ( v140 )
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v141, v140, 1);
  v143 = v147;
  v147[2] = (void *)v162;
  v144 = v160;
  v143[1] = (void *)v161;
  *v143 = v144;
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v146);
  return v143;
}
