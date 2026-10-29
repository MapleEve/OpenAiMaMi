// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::parser::tools::patch_apply_end::h708a428dac9a5ec8; addr: 0x1008a6db0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:21Z
double __fastcall codexmate_lib::core::analytics::parser::tools::patch_apply_end::h708a428dac9a5ec8(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double result)
{
  __int64 v11; // r13
  __int64 v12; // rdi
  __int64 v13; // r15
  size_t v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rax
  unsigned __int64 *v17; // rcx
  __int64 v18; // rbx
  unsigned __int64 *v19; // r14
  _BYTE *v20; // rax
  char v21; // r12
  unsigned __int64 v22; // rax
  bool v23; // zf
  __int64 v24; // rax
  __int64 v25; // r15
  __int64 v26; // rbx
  __int64 v27; // r14
  __int64 v28; // rcx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rbx
  __int64 v32; // r12
  __int64 v33; // r14
  __int64 v34; // r13
  size_t v35; // rdx
  __int64 v36; // r15
  int v37; // eax
  char v38; // cl
  unsigned __int64 v39; // rax
  char v40; // r14
  _QWORD *v41; // rax
  unsigned __int64 *v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  unsigned __int64 v45; // rsi
  __int64 v46; // rdi
  unsigned __int64 v47; // rax
  __int64 v48; // rdi
  __int64 v49; // rbx
  _QWORD *v50; // r14
  __int64 v51; // rsi
  _QWORD *v52; // r14
  __int64 v53; // rsi
  __int64 v54; // [rsp+58h] [rbp-228h] BYREF
  int v55[2]; // [rsp+60h] [rbp-220h]
  size_t v56; // [rsp+68h] [rbp-218h]
  size_t v57; // [rsp+70h] [rbp-210h]
  __int64 v58; // [rsp+78h] [rbp-208h]
  size_t v59; // [rsp+80h] [rbp-200h]
  __int64 v60[3]; // [rsp+D0h] [rbp-1B0h] BYREF
  char v61; // [rsp+E8h] [rbp-198h]
  __int64 v62; // [rsp+F0h] [rbp-190h]
  unsigned __int64 v63; // [rsp+F8h] [rbp-188h] BYREF
  __int64 v64; // [rsp+100h] [rbp-180h]
  __int64 v65; // [rsp+108h] [rbp-178h]
  __int64 v66; // [rsp+110h] [rbp-170h]
  unsigned __int64 v67; // [rsp+118h] [rbp-168h]
  __int64 v68; // [rsp+120h] [rbp-160h]
  __int64 v69; // [rsp+128h] [rbp-158h]
  __int64 v70; // [rsp+130h] [rbp-150h]
  __int64 v71; // [rsp+138h] [rbp-148h]
  __int64 v72; // [rsp+140h] [rbp-140h]
  unsigned __int64 **v73; // [rsp+148h] [rbp-138h]
  __int64 v74; // [rsp+150h] [rbp-130h]
  __int64 v75; // [rsp+158h] [rbp-128h]
  void *v76; // [rsp+160h] [rbp-120h]
  size_t v77; // [rsp+168h] [rbp-118h]
  unsigned __int64 *v78; // [rsp+170h] [rbp-110h] BYREF
  __int64 v79; // [rsp+178h] [rbp-108h]
  __int64 v80; // [rsp+180h] [rbp-100h]
  _QWORD v81[3]; // [rsp+188h] [rbp-F8h] BYREF
  __int64 v82; // [rsp+1A0h] [rbp-E0h]
  int v83[2]; // [rsp+1A8h] [rbp-D8h]
  __int64 v84; // [rsp+1B0h] [rbp-D0h]
  __int64 v85; // [rsp+1B8h] [rbp-C8h]
  __int64 v86; // [rsp+1C0h] [rbp-C0h] BYREF
  void *v87; // [rsp+1C8h] [rbp-B8h]
  size_t v88; // [rsp+1D0h] [rbp-B0h]
  unsigned __int64 v89; // [rsp+1D8h] [rbp-A8h] BYREF
  __int64 v90; // [rsp+1E0h] [rbp-A0h]
  __int64 v91; // [rsp+1E8h] [rbp-98h]
  char v92; // [rsp+1F0h] [rbp-90h]
  int v93[2]; // [rsp+1F8h] [rbp-88h]
  __int64 v94; // [rsp+200h] [rbp-80h]
  __int64 v95; // [rsp+208h] [rbp-78h]
  __int64 v96; // [rsp+210h] [rbp-70h] BYREF
  __int64 v97; // [rsp+218h] [rbp-68h]
  __int64 v98; // [rsp+220h] [rbp-60h]
  __int64 v99; // [rsp+228h] [rbp-58h]
  size_t __n; // [rsp+230h] [rbp-50h]
  void *__s1; // [rsp+238h] [rbp-48h]
  int v102[2]; // [rsp+240h] [rbp-40h]
  __int64 v103; // [rsp+248h] [rbp-38h]
  __int64 v104; // [rsp+250h] [rbp-30h]

  v99 = a2; /*0x1008a6de6*/
  codexmate_lib::core::analytics::parser::id::hbed61d8204e0f15b(&v54, a2, "turn_id", 7); /*0x1008a6dea*/
  if ( __OFSUB__(0, v54) ) /*0x1008a6df1*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v86, a1 + 208); /*0x1008a6e08*/
  }
  else
  {
    v88 = v56; /*0x1008a6e16*/
    v87 = *(void **)v55; /*0x1008a6e2b*/
    v86 = v54; /*0x1008a6e32*/
  }
  v104 = a1; /*0x1008a6e39*/
  codexmate_lib::core::analytics::parser::id::hbed61d8204e0f15b(&v54, v99, &unk_10178B9C1, 7); /*0x1008a6e54*/
  v11 = v54; /*0x1008a6e63*/
  if ( v54 == 0x8000000000000000LL ) /*0x1008a6e6d*/
  {
LABEL_5:
    v12 = v104; /*0x1008a6e6f*/
    *(_BYTE *)(v104 + 505) = 1; /*0x1008a6e73*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h8be58c31c860506b(v12 + 400, 8); /*0x1008a6e86*/
    goto LABEL_83; /*0x1008a6e8b*/
  }
  v82 = a5; /*0x1008a6e90*/
  v13 = *(_QWORD *)v55; /*0x1008a6e9e*/
  if ( !v88 ) /*0x1008a6ea8*/
  {
    if ( v54 ) /*0x1008a701e*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v55, v54, 1); /*0x1008a702f*/
    goto LABEL_5; /*0x1008a7034*/
  }
  v14 = v56; /*0x1008a6eae*/
  v54 = a3; /*0x1008a6ebc*/
  *(_QWORD *)v55 = a4; /*0x1008a6ec3*/
  __s1 = v87; /*0x1008a6eca*/
  v56 = (size_t)v87; /*0x1008a6ece*/
  __n = v88; /*0x1008a6ed5*/
  v57 = v88; /*0x1008a6ed9*/
  v58 = v13; /*0x1008a6ee0*/
  *(_QWORD *)v83 = v14; /*0x1008a6ee7*/
  v59 = v14; /*0x1008a6eee*/
  v94 = v13; /*0x1008a6f08*/
  codexmate_lib::core::analytics::parser::stable_key::h1e969e86462691db((__int64)v81, (__int64)&v54, 3); /*0x1008a6f0c*/
  v84 = a6; /*0x1008a6f11*/
  *(_QWORD *)v93 = a3; /*0x1008a6f18*/
  *(_QWORD *)v102 = a4; /*0x1008a6f1f*/
  v15 = v104; /*0x1008a6f23*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::hf978e924c77e5a4e(&v54, v104 + 424, v81, result); /*0x1008a6f3c*/
  v65 = v81[2]; /*0x1008a6f48*/
  v64 = v81[1]; /*0x1008a6f5d*/
  v63 = v81[0]; /*0x1008a6f64*/
  codexmate_lib::core::analytics::parser::tools::remember_completion::hcd4c85c9e51e1361(v15, &v63); /*0x1008a6f75*/
  v16 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008a6f8a*/
          &anon_0868f19ff3e9f3569e732f60bdb020cc_274,
          6,
          v99);
  if ( v16 && *(_BYTE *)v16 == 3 ) /*0x1008a6f97*/
  {
    v17 = *(unsigned __int64 **)(v16 + 16); /*0x1008a6f99*/
    v16 = *(_QWORD *)(v16 + 24); /*0x1008a6f9d*/
  }
  else
  {
    v17 = nullptr; /*0x1008a6fa3*/
  }
  v18 = 7; /*0x1008a6fa8*/
  if ( v17 ) /*0x1008a6fad*/
    v18 = v16; /*0x1008a6fad*/
  v19 = (unsigned __int64 *)&unk_10178B9C8; /*0x1008a6fb1*/
  if ( v17 ) /*0x1008a6fb8*/
    v19 = v17; /*0x1008a6fb8*/
  v20 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008a6fcc*/
                   "successexit_codestarted_at_msunified_diffcontentoutput/metadata/exit_codeisError",
                   7,
                   v99);
  if ( v20 && *v20 == 1 ) /*0x1008a6fd9*/
  {
    v21 = v20[1]; /*0x1008a6fdb*/
    goto LABEL_27; /*0x1008a6fe0*/
  }
  if ( v18 == 6 ) /*0x1008a6fe9*/
  {
    v23 = (*(_DWORD *)v19 ^ 0x6C696166 | *((unsigned __int16 *)v19 + 2) ^ 0x6465) == 0; /*0x1008a706b*/
    goto LABEL_26; /*0x1008a706b*/
  }
  if ( v18 == 8 ) /*0x1008a6fef*/
  {
    v22 = _byteswap_uint64(*v19); /*0x1008a703c*/
    v23 = (char)((v22 > 0x6465636C696E6564LL) - (v22 < 0x6465636C696E6564LL)) == 0; /*0x1008a7054*/
LABEL_26:
    v21 = 2 * !v23; /*0x1008a706d*/
    goto LABEL_27; /*0x1008a7071*/
  }
  v21 = 2; /*0x1008a6ff1*/
  if ( v18 == 9 ) /*0x1008a6ff8*/
    v21 = 2 - ((*v19 ^ 0x6574656C706D6F63LL | *((unsigned __int8 *)v19 + 8) ^ 0x64LL) == 0); /*0x1008a7016*/
LABEL_27:
  v24 = v82; /*0x1008a7074*/
  v103 = v54; /*0x1008a708c*/
  if ( v54 != 0x8000000000000000LL ) /*0x1008a7093*/
    v24 = v62; /*0x1008a7095*/
  codexmate_lib::core::analytics::parser::tools::tool_fact::hd4f5ab2826a4f3a1( /*0x1008a710d*/
    v93[0],
    v102[0],
    (int)__s1,
    __n,
    v13,
    v83[0],
    v24,
    &unk_10178B9D5,
    0xBu,
    "editturnlsof",
    4u,
    v19,
    v18,
    v21,
    70,
    v84);
  if ( (v21 & 1) != 0 ) /*0x1008a7116*/
  {
    if ( v103 == 0x8000000000000000LL ) /*0x1008a7159*/
    {
      v28 = *(_QWORD *)(v104 + 472); /*0x1008a7163*/
      if ( v28 ) /*0x1008a716d*/
      {
        v95 = v11; /*0x1008a7173*/
        v85 = *(_QWORD *)(v104 + 480); /*0x1008a7182*/
LABEL_34:
        v29 = v28 + 360; /*0x1008a7189*/
        v30 = *(unsigned __int16 *)(v28 + 626); /*0x1008a7190*/
        v79 = v28; /*0x1008a7197*/
        v31 = v28 - 32; /*0x1008a719e*/
        v80 = v30; /*0x1008a71a2*/
        v32 = 3LL * (unsigned int)(8 * v30); /*0x1008a71b0*/
        v33 = -1; /*0x1008a71b4*/
        do /*0x1008a720c*/
        {
          if ( !v32 ) /*0x1008a71c3*/
          {
            v33 = v80; /*0x1008a721b*/
LABEL_44:
            v11 = v95; /*0x1008a7222*/
            if ( !v85 ) /*0x1008a7242*/
              goto LABEL_51; /*0x1008a7242*/
            --v85; /*0x1008a7248*/
            v28 = *(_QWORD *)(v79 + 8 * v33 + 632); /*0x1008a724f*/
            goto LABEL_34; /*0x1008a7257*/
          }
          v34 = v29 + 24; /*0x1008a71c5*/
          v35 = *(_QWORD *)(v29 + 16); /*0x1008a71cd*/
          v36 = __n - v35; /*0x1008a71d8*/
          if ( __n < v35 ) /*0x1008a71db*/
            v35 = __n; /*0x1008a71db*/
          v37 = memcmp(__s1, *(const void **)(v29 + 8), v35); /*0x1008a71e3*/
          if ( v37 ) /*0x1008a71ec*/
            v36 = v37; /*0x1008a71ec*/
          v38 = (v36 > 0) - (v36 < 0); /*0x1008a71f9*/
          v31 += 32; /*0x1008a71fb*/
          ++v33; /*0x1008a71ff*/
          v32 -= 24; /*0x1008a7202*/
          v29 = v34; /*0x1008a7206*/
        }
        while ( v38 == 1 ); /*0x1008a720c*/
        if ( v38 ) /*0x1008a7213*/
          goto LABEL_44; /*0x1008a7213*/
        v11 = v95; /*0x1008a72c4*/
        if ( *(_QWORD *)v31 == 0x8000000000000000LL ) /*0x1008a72d5*/
          goto LABEL_50; /*0x1008a72d5*/
      }
      else
      {
LABEL_51:
        v31 = v104 + 368; /*0x1008a72e0*/
        if ( *(_QWORD *)(v104 + 368) == 0x8000000000000000LL ) /*0x1008a72ee*/
        {
LABEL_50:
          v89 = 0x8000000000000000LL; /*0x1008a72d7*/
          goto LABEL_53; /*0x1008a72de*/
        }
      }
      v40 = *(_BYTE *)(v31 + 24); /*0x1008a72f0*/
      _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hed1423a2d8278088(&v89, v31); /*0x1008a72ff*/
      v92 = v40; /*0x1008a7304*/
    }
    else
    {
      v39 = 0x8000000000000000LL; /*0x1008a725c*/
      if ( v60[0] != 0x8000000000000000LL ) /*0x1008a7266*/
      {
        LOBYTE(v18) = v61; /*0x1008a726f*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hed1423a2d8278088(&v63, v60); /*0x1008a727d*/
        v39 = v63; /*0x1008a7282*/
        v96 = v64; /*0x1008a7290*/
        v97 = v65; /*0x1008a729b*/
      }
      v91 = v97; /*0x1008a72a7*/
      v90 = v96; /*0x1008a72ae*/
      v89 = v39; /*0x1008a72b5*/
      v92 = v18; /*0x1008a72bc*/
    }
LABEL_53:
    v41 = (_QWORD *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1008a730b*/
                      "changessource_or_index_ioindex_decodeindex_stateSELECT value FROM meta WHERE key='generation'.json"
                      "lDELETE FROM files WHERE path=?1INSERT INTO files(path,fingerprint,state,offset,ordinal,complete,t"
                      "hread_id,subagent,incomplete,rollout_id)\n"
                      "         VALUES(?1,?2,?3,?4,?5,?6,?7,?8,?9,?10) ON CONFLICT(path) DO UPDATE SET\n"
                      "         fingerprint=excluded.fingerprint,state=excluded.state,offset=excluded.offset,ordinal=excl"
                      "uded.ordinal,\n"
                      "         complete=excluded.complete,thread_id=excluded.thread_id,subagent=excluded.subagent,\n"
                      "         incomplete=excluded.incomplete,failed=0,rollout_id=excluded.rollout_idINSERT INTO facts(s"
                      "ource,key,thread_id,turn_id,ts,kind,priority,data)\n"
                      "            VALUES(?1,?2,?3,?4,?5,?6,?7,?8) ON CONFLICT(source,key) DO UPDATE SET\n"
                      "            ts=excluded.ts,priority=excluded.priority,data=excluded.data\n"
                      "            WHERE excluded.priority>=facts.priorityINSERT INTO meta(key,value) VALUES('updated_at'"
                      ",?1) ON CONFLICT(key) DO UPDATE SET value=excluded.value",
                      7,
                      v99);
    v27 = *(_QWORD *)v102; /*0x1008a7320*/
    if ( !v41 ) /*0x1008a7327*/
      v41 = &serde_json::value::index::_$LT$impl$u20$core..ops..index..Index$LT$I$GT$$u20$for$u20$serde_json..value..Value$GT$::index::NULL::h35e0e4ea67797e73; /*0x1008a7329*/
    v42 = &v89; /*0x1008a7339*/
    if ( v89 == 0x8000000000000000LL ) /*0x1008a7340*/
      v42 = nullptr; /*0x1008a7340*/
    v78 = v42; /*0x1008a7344*/
    if ( *(_BYTE *)v41 == 5 ) /*0x1008a734e*/
    {
      v43 = v41[1]; /*0x1008a7354*/
      v44 = v41[2]; /*0x1008a7358*/
      v45 = 0; /*0x1008a735c*/
      v46 = v43; /*0x1008a735e*/
      if ( v43 ) /*0x1008a7368*/
        v46 = v41[3]; /*0x1008a736a*/
      LOBYTE(v45) = v43 != 0; /*0x1008a736e*/
      v63 = v45; /*0x1008a7371*/
      v64 = 0; /*0x1008a7378*/
      v65 = v43; /*0x1008a7383*/
      v66 = v44; /*0x1008a738a*/
      v67 = v45; /*0x1008a7391*/
      v68 = 0; /*0x1008a7398*/
      v69 = v43; /*0x1008a73a3*/
      v70 = v44; /*0x1008a73aa*/
      v71 = v46; /*0x1008a73b1*/
      v72 = v104; /*0x1008a73bc*/
      v73 = &v78; /*0x1008a73ca*/
      v74 = *(_QWORD *)v93; /*0x1008a73d8*/
      v75 = *(_QWORD *)v102; /*0x1008a73df*/
      v76 = __s1; /*0x1008a73ea*/
      v77 = __n; /*0x1008a73f5*/
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h8f5684ebbc4fd2b1( /*0x1008a7407*/
        &v96,
        &v63);
      v47 = v89; /*0x1008a740c*/
      if ( v89 == 0x8000000000000000LL ) /*0x1008a7416*/
        goto LABEL_71; /*0x1008a7416*/
    }
    else
    {
      v48 = v104; /*0x1008a741d*/
      *(_BYTE *)(v104 + 505) = 1; /*0x1008a7421*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h8be58c31c860506b(v48 + 400, 8); /*0x1008a7434*/
      v96 = 0; /*0x1008a7439*/
      v97 = 8; /*0x1008a7441*/
      v98 = 0; /*0x1008a7449*/
      v47 = v89; /*0x1008a7451*/
      if ( v89 == 0x8000000000000000LL ) /*0x1008a745b*/
      {
LABEL_71:
        v25 = v97; /*0x1008a74ca*/
        v26 = v98; /*0x1008a74ce*/
        goto LABEL_72; /*0x1008a74ce*/
      }
    }
    v49 = v91; /*0x1008a745d*/
    if ( v91 ) /*0x1008a7467*/
    {
      v50 = (_QWORD *)(v90 + 8); /*0x1008a7470*/
      do /*0x1008a7487*/
      {
        v51 = *(v50 - 1); /*0x1008a7489*/
        if ( v51 ) /*0x1008a7490*/
          result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v50, v51, 1); /*0x1008a749a*/
        v50 += 3; /*0x1008a7480*/
        --v49; /*0x1008a7484*/
      }
      while ( v49 ); /*0x1008a7487*/
      v47 = v89; /*0x1008a74a1*/
      v27 = *(_QWORD *)v102; /*0x1008a74a8*/
    }
    if ( v47 ) /*0x1008a74af*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v90, 24 * v47, 8); /*0x1008a74c5*/
    goto LABEL_71; /*0x1008a74c5*/
  }
  v96 = 0; /*0x1008a7118*/
  v97 = 8; /*0x1008a7120*/
  v98 = 0; /*0x1008a7128*/
  v25 = 8; /*0x1008a7130*/
  v26 = 0; /*0x1008a7136*/
  v27 = *(_QWORD *)v102; /*0x1008a7142*/
LABEL_72:
  codexmate_lib::core::analytics::parser::tools::change_facts::ha218b024c7f82f59( /*0x1008a74d2*/
    *(_QWORD **)v93,
    v27,
    (__int64)__s1,
    __n,
    v94,
    *(__int64 *)v83,
    v82,
    v25,
    v26,
    70,
    (_QWORD *)v84);
  if ( v26 ) /*0x1008a7520*/
  {
    v52 = (_QWORD *)(v25 + 40); /*0x1008a7522*/
    do /*0x1008a7537*/
    {
      v53 = *(v52 - 1); /*0x1008a7539*/
      if ( v53 ) /*0x1008a7540*/
        result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v52, v53, 1); /*0x1008a754a*/
      v52 += 7; /*0x1008a7530*/
      --v26; /*0x1008a7534*/
    }
    while ( v26 ); /*0x1008a7537*/
  }
  if ( v96 ) /*0x1008a7558*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, 56 * v96, 8); /*0x1008a7566*/
  if ( v103 != 0x8000000000000000LL ) /*0x1008a756f*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..analytics..parser..tools..PendingCall$GT$::hc68bf139b01b8fe2( /*0x1008a7578*/
      &v54,
      result);
  if ( v11 ) /*0x1008a7584*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v94, v11, 1); /*0x1008a758e*/
LABEL_83:
  if ( v86 ) /*0x1008a759d*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v87, v86, 1); /*0x1008a75ab*/
  return result; /*0x1008a75b0*/
}