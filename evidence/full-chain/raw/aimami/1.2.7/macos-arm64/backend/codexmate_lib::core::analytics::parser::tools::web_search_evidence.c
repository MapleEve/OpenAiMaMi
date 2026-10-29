// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::parser::tools::web_search_evidence::h8639673e27ccb0d0; addr: 0x1008a77f0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:21Z
// [release-semantic-writeback <审计会话> 0x1008a77f0]
// source binary SHA256=f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0；仅macOS release当前语义，非Windows证明、非gate提升。
// [protocol-content / content-based scope separation, not symbol-only glue exclusion] 模块级结论（本地址作为调用/转换链证据，不外推为单函数完整语义）：search分区中的web_search_evidence/WebSearchCoverage::serialize属于ana
// lytics解析与输出统计，CodexPaths::state_db_search_dirs属于数据库候选目录枚举，不是请求转发/hosted工具开关。已按当前函数体、字段和调用内容区分；不因search同词把它们算成新搜索产品能力。
// 副作用边界：{"db_mutations": 0, "db_saves": 0, "pre_instance_calls": 0, "shared_sot_writes": 0, "source_rule_config_writes": 0, "runtime_user_data_operations": 0, "observed_target_effe
// cts": ["HTTP request/response and live SSE streaming", "diagnostic debug_log::app_event", "compat setter configuration persist_with_commit (referenced shared dependency; not execut
// ed)"], "destructive_target_operations_executed": 0, "history_reject_guards_do_not_write_rollout": true}
// 限制：pre未完整逐体对照则delta unverified；非全模块闭合。
// 输入清单=<内部存储>/intermediate/aimami/1.2.7/macos-arm64/version-delta/release-f019dbc8e267-module-semantic-writeback-input.json sha256=38adf8f79ecb9e027
// 4206dd853ade3eef7cc9003b68d1e289ab88947f776436e
__int64 __fastcall codexmate_lib::core::analytics::parser::tools::web_search_evidence::h8639673e27ccb0d0(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        size_t a4,
        size_t a5,
        __int64 a6,
        __int64 a7)
{
  _QWORD *v8; // rbx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r13
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rax
  __int64 v16; // rdi
  unsigned __int64 v17; // rdi
  void *v18; // r14
  size_t v19; // r12
  char *v20; // rbx
  size_t v21; // rsi
  int v22; // eax
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // r9
  __int64 v25; // rcx
  __int64 v26; // r15
  __int64 v27; // r14
  __int64 v28; // rbx
  int v29; // eax
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  __int64 v32; // rcx
  _QWORD *v33; // r14
  __int64 v34; // rbx
  __int64 v35; // r10
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // rdx
  __int64 v38; // rsi
  unsigned __int64 v39; // rcx
  size_t v40; // r14
  unsigned __int64 v41; // rax
  __int64 v42; // rbx
  __int64 v43; // r13
  unsigned __int64 v44; // r15
  size_t v45; // rdx
  __int64 v46; // r12
  int v47; // eax
  char v48; // cl
  unsigned __int64 v49; // rcx
  unsigned __int64 v50; // r10
  unsigned __int64 v51; // rdx
  unsigned __int64 v52; // r8
  unsigned __int64 v53; // r11
  _QWORD *v54; // r9
  unsigned __int64 v55; // rbx
  unsigned __int64 v56; // rsi
  unsigned __int64 v57; // rdi
  unsigned __int64 v58; // rax
  __int64 v59; // rsi
  unsigned __int64 v60; // rax
  unsigned __int64 v61; // r8
  unsigned __int128 v62; // rax
  __int64 v63; // r8
  const __m128i *v64; // rbx
  __int64 v65; // r8
  __m128i v66; // xmm0
  __m128i v67; // xmm1
  __m128i v68; // xmm1
  __int64 v69; // rbx
  __int64 v70; // rax
  _QWORD *v71; // rdx
  unsigned __int128 v72; // rax
  __int64 v73; // rdi
  __m128i v74; // xmm1
  const __m128i *v75; // rdi
  __m128i v76; // xmm0
  __int64 v77; // r8
  __m128i v78; // xmm0
  unsigned __int64 v79; // r14
  __int64 v80; // rcx
  __int64 v81; // rdx
  __int64 v82; // rax
  __int64 v83; // rsi
  __int64 v84; // rdx
  void *v85; // r13
  _QWORD *v86; // rax
  void *v87; // rcx
  size_t v88; // rbx
  __int64 v89; // rax
  size_t v90; // rcx
  __int64 v91; // rsi
  unsigned __int64 v92; // rax
  unsigned __int64 v93; // rcx
  unsigned __int64 v94; // rdx
  __int64 result; // rax
  __int64 v96; // rcx
  __int64 v97; // rdx
  unsigned __int64 v98; // rcx
  _QWORD v99[2]; // [rsp+8h] [rbp-148h] BYREF
  __int64 v100; // [rsp+18h] [rbp-138h]
  __int64 v101; // [rsp+20h] [rbp-130h]
  __int64 v102; // [rsp+28h] [rbp-128h] BYREF
  void *__s2; // [rsp+30h] [rbp-120h]
  size_t __n; // [rsp+38h] [rbp-118h]
  __int64 v105; // [rsp+40h] [rbp-110h]
  __int64 v106; // [rsp+48h] [rbp-108h]
  size_t v107; // [rsp+50h] [rbp-100h]
  size_t v108; // [rsp+58h] [rbp-F8h]
  __int64 v109; // [rsp+60h] [rbp-F0h] BYREF
  size_t v110; // [rsp+68h] [rbp-E8h]
  size_t v111; // [rsp+70h] [rbp-E0h]
  unsigned __int64 v112; // [rsp+78h] [rbp-D8h]
  __int64 v113; // [rsp+80h] [rbp-D0h] BYREF
  void *v114; // [rsp+88h] [rbp-C8h]
  size_t v115; // [rsp+90h] [rbp-C0h]
  size_t v116; // [rsp+98h] [rbp-B8h]
  size_t v117; // [rsp+A0h] [rbp-B0h]
  size_t v118; // [rsp+A8h] [rbp-A8h]
  size_t v119; // [rsp+B0h] [rbp-A0h]
  unsigned __int64 v120; // [rsp+B8h] [rbp-98h]
  __int64 v121; // [rsp+C0h] [rbp-90h] BYREF
  __int64 v122; // [rsp+C8h] [rbp-88h]
  size_t v123; // [rsp+D0h] [rbp-80h]
  size_t v124; // [rsp+D8h] [rbp-78h]
  __int64 v125; // [rsp+E0h] [rbp-70h]
  size_t v126; // [rsp+E8h] [rbp-68h]
  size_t v127; // [rsp+F0h] [rbp-60h]
  size_t v128; // [rsp+F8h] [rbp-58h]
  size_t v129; // [rsp+100h] [rbp-50h]
  void *__s1; // [rsp+108h] [rbp-48h]
  size_t v131; // [rsp+110h] [rbp-40h]
  void *v132; // [rsp+118h] [rbp-38h]
  _QWORD *v133; // [rsp+120h] [rbp-30h]

  v8 = a1; /*0x1008a7807*/
  v121 = a2; /*0x1008a780a*/
  v122 = a3; /*0x1008a7811*/
  v123 = a4; /*0x1008a7818*/
  v124 = a5; /*0x1008a781c*/
  codexmate_lib::core::analytics::parser::stable_key::h1e969e86462691db(&v102, &v121, 2); /*0x1008a7833*/
  v9 = a1[39]; /*0x1008a7838*/
  v133 = a1; /*0x1008a7842*/
  if ( !v9 ) /*0x1008a7846*/
    goto LABEL_16; /*0x1008a7846*/
  v101 = a6; /*0x1008a784c*/
  v10 = a1[36]; /*0x1008a7853*/
  v120 = v10; /*0x1008a785a*/
  v11 = a1[38]; /*0x1008a7861*/
  v12 = 0; /*0x1008a7868*/
  v13 = v10; /*0x1008a786e*/
  if ( v11 < v10 ) /*0x1008a7871*/
    v13 = 0; /*0x1008a7871*/
  v14 = v11 - v13; /*0x1008a7878*/
  v15 = v10 - (v11 - v13); /*0x1008a787e*/
  v16 = 56 * (v9 - v15); /*0x1008a7887*/
  if ( v9 <= v15 ) /*0x1008a788e*/
    v16 = 0; /*0x1008a788e*/
  __s1 = (void *)v16; /*0x1008a7892*/
  v131 = v8[37]; /*0x1008a789d*/
  v17 = v14 + v9; /*0x1008a78a1*/
  v112 = v9; /*0x1008a78a5*/
  if ( v9 > v15 ) /*0x1008a78af*/
    v17 = v10; /*0x1008a78af*/
  if ( v14 == v17 ) /*0x1008a78b6*/
  {
LABEL_9:
    v8 = v133; /*0x1008a78bc*/
    a6 = v101; /*0x1008a78c5*/
    if ( __s1 ) /*0x1008a78cc*/
    {
      v18 = __s2; /*0x1008a78ce*/
      v19 = __n; /*0x1008a78d5*/
      v20 = nullptr; /*0x1008a78dc*/
      v21 = v131; /*0x1008a78de*/
      while ( 1 ) /*0x1008a7901*/
      {
        if ( *(_QWORD *)&v20[v21 + 16] == v19 ) /*0x1008a7906*/
        {
          v22 = memcmp(*(const void **)&v20[v21 + 8], v18, v19); /*0x1008a7913*/
          v23 = v120; /*0x1008a7918*/
          v21 = v131; /*0x1008a7921*/
          if ( !v22 ) /*0x1008a7925*/
            break; /*0x1008a7925*/
        }
        ++v12; /*0x1008a78f0*/
        v20 += 56; /*0x1008a78f3*/
        if ( __s1 == v20 ) /*0x1008a78fb*/
        {
          v8 = v133; /*0x1008a7a83*/
          goto LABEL_31; /*0x1008a7a83*/
        }
      }
      v24 = v112; /*0x1008a7927*/
      v8 = v133; /*0x1008a7931*/
      if ( v112 > v12 ) /*0x1008a7935*/
        goto LABEL_24; /*0x1008a7935*/
      goto LABEL_31; /*0x1008a7935*/
    }
LABEL_16:
    v18 = __s2; /*0x1008a7940*/
    v19 = __n; /*0x1008a7947*/
LABEL_31:
    v38 = v102; /*0x1008a7a87*/
LABEL_32:
    v105 = v38; /*0x1008a7a8e*/
    v106 = (__int64)v18; /*0x1008a7a95*/
    v107 = v19; /*0x1008a7a9c*/
    v111 = 0; /*0x1008a7aa3*/
    v108 = 0; /*0x1008a7aae*/
    v109 = 0; /*0x1008a7ab9*/
    goto LABEL_33; /*0x1008a7ab9*/
  }
  v132 = __s2; /*0x1008a795a*/
  v19 = __n; /*0x1008a795e*/
  v25 = 56 * v11 - 56 * v13; /*0x1008a796d*/
  if ( v112 < v15 ) /*0x1008a797a*/
    v15 = v112; /*0x1008a797a*/
  v26 = v25 + v131 + 16; /*0x1008a7982*/
  v27 = 56 * v15; /*0x1008a7987*/
  v28 = 0; /*0x1008a798b*/
  v12 = 0; /*0x1008a798d*/
  while ( 1 ) /*0x1008a79b0*/
  {
    if ( *(_QWORD *)(v26 + v28) == v19 ) /*0x1008a79b4*/
    {
      v29 = memcmp(*(const void **)(v26 + v28 - 8), v132, v19); /*0x1008a79c2*/
      v23 = v120; /*0x1008a79c7*/
      if ( !v29 ) /*0x1008a79d0*/
        break; /*0x1008a79d0*/
    }
    ++v12; /*0x1008a79a0*/
    v28 += 56; /*0x1008a79a3*/
    if ( v27 == v28 ) /*0x1008a79aa*/
      goto LABEL_9; /*0x1008a79aa*/
  }
  a6 = v101; /*0x1008a79d2*/
  v18 = v132; /*0x1008a79d9*/
  v21 = v131; /*0x1008a79dd*/
  v24 = v112; /*0x1008a79e1*/
  v8 = v133; /*0x1008a79eb*/
  if ( v112 <= v12 ) /*0x1008a79ef*/
    goto LABEL_31; /*0x1008a79ef*/
LABEL_24:
  v132 = v18; /*0x1008a79f5*/
  v30 = v8[38]; /*0x1008a79f9*/
  v31 = 0; /*0x1008a7a04*/
  if ( v30 + v12 >= v23 ) /*0x1008a7a09*/
    v31 = v23; /*0x1008a7a09*/
  v32 = v30 + v12 - v31; /*0x1008a7a0d*/
  v33 = v8; /*0x1008a7a14*/
  v34 = *(_QWORD *)(v21 + 56 * v32); /*0x1008a7a17*/
  v35 = *(_QWORD *)(v21 + 56 * v32 + 8); /*0x1008a7a1b*/
  v126 = *(_QWORD *)(v21 + 56 * v32 + 48); /*0x1008a7a25*/
  v125 = *(_QWORD *)(v21 + 56 * v32 + 40); /*0x1008a7a2e*/
  v124 = *(_QWORD *)(v21 + 56 * v32 + 32); /*0x1008a7a37*/
  v123 = *(_QWORD *)(v21 + 56 * v32 + 24); /*0x1008a7a40*/
  v122 = *(_QWORD *)(v21 + 56 * v32 + 16); /*0x1008a7a49*/
  v121 = v35; /*0x1008a7a50*/
  v36 = v24 + ~v12; /*0x1008a7a5d*/
  if ( v36 >= v12 ) /*0x1008a7a63*/
  {
    v98 = 0; /*0x1008a8198*/
    if ( v30 + 1 >= v23 ) /*0x1008a819d*/
      v98 = v23; /*0x1008a819d*/
    v32 = v30 - v98 + 1; /*0x1008a81a4*/
    v33[38] = v32; /*0x1008a81a9*/
    v36 = v12; /*0x1008a81b0*/
  }
  else
  {
    v37 = 0; /*0x1008a7a6d*/
    if ( v32 + 1 >= v23 ) /*0x1008a7a72*/
      v37 = v23; /*0x1008a7a72*/
    v30 = v32 - v37 + 1; /*0x1008a7a79*/
  }
  alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::wrap_copy::h1bec62f6d8496a95(v23, v21, v30, v32, v36); /*0x1008a81b3*/
  v33[39] = v112 - 1; /*0x1008a81c2*/
  v118 = v126; /*0x1008a81cd*/
  v117 = v125; /*0x1008a81d8*/
  v116 = v124; /*0x1008a81e3*/
  v115 = v123; /*0x1008a81ee*/
  v114 = (void *)v122; /*0x1008a8203*/
  v113 = v121; /*0x1008a820a*/
  v38 = v102; /*0x1008a8211*/
  if ( __OFSUB__(-v34, 1) ) /*0x1008a821b*/
  {
    v8 = v133; /*0x1008a8220*/
    v18 = v132; /*0x1008a8224*/
    goto LABEL_32; /*0x1008a8228*/
  }
  v105 = v34; /*0x1008a822d*/
  v106 = v113; /*0x1008a8242*/
  v107 = (size_t)v114; /*0x1008a8249*/
  v108 = v115; /*0x1008a8257*/
  v109 = v116; /*0x1008a8265*/
  v110 = v117; /*0x1008a8273*/
  v111 = v118; /*0x1008a8281*/
  v8 = v133; /*0x1008a828b*/
  if ( v102 ) /*0x1008a8293*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v132, v102, 1); /*0x1008a829e*/
LABEL_33:
  if ( a6 ) /*0x1008a7ac7*/
  {
    v121 = a6; /*0x1008a7ad1*/
    v122 = a7; /*0x1008a7ad8*/
    codexmate_lib::core::analytics::parser::stable_key::h1e969e86462691db(&v113, &v121, 1); /*0x1008a7af2*/
    v39 = v109; /*0x1008a7af7*/
    if ( v109 ) /*0x1008a7b01*/
    {
      v131 = v110; /*0x1008a7b0e*/
      __s1 = v114; /*0x1008a7b19*/
      v40 = v115; /*0x1008a7b1d*/
      while ( 1 ) /*0x1008a7b24*/
      {
        v41 = v39 + 8; /*0x1008a7b24*/
        v120 = v39; /*0x1008a7b28*/
        v132 = (void *)*(unsigned __int16 *)(v39 + 274); /*0x1008a7b36*/
        v42 = 3LL * (unsigned int)(8 * (_DWORD)v132); /*0x1008a7b41*/
        v43 = -1; /*0x1008a7b45*/
        do /*0x1008a7b94*/
        {
          if ( !v42 ) /*0x1008a7b53*/
          {
            v43 = (__int64)v132; /*0x1008a7bb0*/
            v8 = v133; /*0x1008a7bb4*/
            goto LABEL_46; /*0x1008a7bb4*/
          }
          v44 = v41 + 24; /*0x1008a7b55*/
          v45 = *(_QWORD *)(v41 + 16); /*0x1008a7b5d*/
          v46 = v40 - v45; /*0x1008a7b64*/
          if ( v40 < v45 ) /*0x1008a7b67*/
            v45 = v40; /*0x1008a7b67*/
          v47 = memcmp(__s1, *(const void **)(v41 + 8), v45); /*0x1008a7b6f*/
          if ( v47 ) /*0x1008a7b78*/
            v46 = v47; /*0x1008a7b78*/
          v48 = (v46 > 0) - (v46 < 0); /*0x1008a7b85*/
          ++v43; /*0x1008a7b87*/
          v42 -= 24; /*0x1008a7b8a*/
          v41 = v44; /*0x1008a7b8e*/
        }
        while ( v48 == 1 ); /*0x1008a7b94*/
        v8 = v133; /*0x1008a7b9b*/
        if ( !v48 ) /*0x1008a7b9f*/
          goto LABEL_52; /*0x1008a7b9f*/
LABEL_46:
        if ( !v131 ) /*0x1008a7bc7*/
          break; /*0x1008a7bc7*/
        --v131; /*0x1008a7bc9*/
        v39 = *(_QWORD *)(v120 + 8 * v43 + 280); /*0x1008a7bcd*/
      }
    }
    if ( v111 - 2047 >= 0xFFFFFFFFFFFFF800LL ) /*0x1008a7c0e*/
    {
      v123 = v115; /*0x1008a7c55*/
      v122 = (__int64)v114; /*0x1008a7c67*/
      v121 = v113; /*0x1008a7c6e*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc3dd6fdf5f911cfc(&v109, &v121); /*0x1008a7c7c*/
    }
    else
    {
      *((_BYTE *)v8 + 505) = 1; /*0x1008a7c10*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h8be58c31c860506b(v8 + 50, 7); /*0x1008a7c23*/
LABEL_52:
      if ( v113 ) /*0x1008a7c32*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v114, v113, 1); /*0x1008a7c40*/
    }
  }
  else if ( v108 == -1 ) /*0x1008a7be5*/
  {
    *((_BYTE *)v8 + 505) = 1; /*0x1008a82a8*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h8be58c31c860506b(v8 + 50, 7); /*0x1008a82bb*/
  }
  else
  {
    ++v108; /*0x1008a7bee*/
  }
  v49 = v8[39]; /*0x1008a7c8b*/
  if ( v49 ) /*0x1008a7c95*/
  {
    v50 = v8[38]; /*0x1008a7c9b*/
    v51 = v8[36]; /*0x1008a7ca2*/
    v52 = 0; /*0x1008a7ca9*/
    v53 = v51; /*0x1008a7caf*/
    if ( v50 < v51 ) /*0x1008a7cb2*/
      v53 = 0; /*0x1008a7cb2*/
    v54 = v8; /*0x1008a7cb6*/
    v55 = v50 - v53; /*0x1008a7cbc*/
    v56 = v51 - (v50 - v53); /*0x1008a7cc2*/
    v57 = 56 * (v49 - v56); /*0x1008a7ccb*/
    if ( v49 <= v56 ) /*0x1008a7cd2*/
      v57 = 0; /*0x1008a7cd2*/
    v58 = v55 + v49; /*0x1008a7cd6*/
    if ( v49 > v56 ) /*0x1008a7cdd*/
      v58 = v51; /*0x1008a7cdd*/
    v59 = v54[37]; /*0x1008a7ce1*/
    v60 = v58 - v55; /*0x1008a7cf2*/
    if ( v60 ) /*0x1008a7cf5*/
    {
      v61 = 56 * v60; /*0x1008a7cfb*/
      v62 = 0x2492492492492493LL * (unsigned __int128)((7 * v60) & 0x1FFFFFFFFFFFFFFFLL); /*0x1008a7d06*/
      if ( v61 >= 0x118 ) /*0x1008a7d10*/
      {
        v63 = 4; /*0x1008a7d29*/
        if ( (BYTE8(v62) & 3) != 0 ) /*0x1008a7d2f*/
          v63 = BYTE8(v62) & 3; /*0x1008a7d2f*/
        *(_QWORD *)&v62 = *((_QWORD *)&v62 + 1) - v63; /*0x1008a7d36*/
        v64 = (const __m128i *)(56 * v50 - 56 * v53 + v59 + 216); /*0x1008a7d44*/
        v65 = v63 - *((_QWORD *)&v62 + 1); /*0x1008a7d4c*/
        v66 = 0; /*0x1008a7d4f*/
        v67 = 0; /*0x1008a7d57*/
        do /*0x1008a7d99*/
        {
          v66 = _mm_sub_epi64( /*0x1008a7d86*/
                  _mm_add_epi64(
                    v66,
                    _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)((char *)v64 - 168)), _mm_loadl_epi64(v64 - 7))),
                  (__m128i)-1LL);
          v67 = _mm_sub_epi64( /*0x1008a7d8a*/
                  _mm_add_epi64(
                    v67,
                    _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)((char *)v64 - 56)), _mm_loadl_epi64(v64))),
                  (__m128i)-1LL);
          v64 += 14; /*0x1008a7d8e*/
          v65 += 4; /*0x1008a7d95*/
        }
        while ( v65 ); /*0x1008a7d99*/
        v68 = _mm_add_epi64(v67, v66); /*0x1008a7d9b*/
        v52 = _mm_add_epi64(_mm_shuffle_epi32(v68, 238), v68).u64[0]; /*0x1008a7da8*/
      }
      else
      {
        *(_QWORD *)&v62 = 0; /*0x1008a7d12*/
        v52 = 0; /*0x1008a7d14*/
      }
      v69 = 56 * v62; /*0x1008a7dad*/
      v70 = v62 - *((_QWORD *)&v62 + 1); /*0x1008a7db1*/
      v71 = (_QWORD *)(v69 + 56 * v50 - 56 * v53 + v59 + 48); /*0x1008a7dc2*/
      do /*0x1008a7ddf*/
      {
        v52 += *v71 + 1LL; /*0x1008a7dd3*/
        v71 += 7; /*0x1008a7dd8*/
        ++v70; /*0x1008a7ddc*/
      }
      while ( v70 ); /*0x1008a7ddf*/
    }
    if ( v57 ) /*0x1008a7de4*/
    {
      v72 = 0x2492492492492493LL * (unsigned __int128)(v57 >> 3); /*0x1008a7ded*/
      v8 = v133; /*0x1008a7df7*/
      if ( v57 >= 0x118 ) /*0x1008a7dfb*/
      {
        v73 = 4; /*0x1008a7e12*/
        if ( (BYTE8(v72) & 3) != 0 ) /*0x1008a7e17*/
          v73 = BYTE8(v72) & 3; /*0x1008a7e17*/
        *(_QWORD *)&v72 = *((_QWORD *)&v72 + 1) - v73; /*0x1008a7e1e*/
        v74 = (__m128i)v52; /*0x1008a7e21*/
        v75 = (const __m128i *)(v59 + 216); /*0x1008a7e26*/
        v76 = 0; /*0x1008a7e2d*/
        v77 = v72; /*0x1008a7e35*/
        do /*0x1008a7e79*/
        {
          v74 = _mm_sub_epi64( /*0x1008a7e66*/
                  _mm_add_epi64(
                    v74,
                    _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)((char *)v75 - 168)), _mm_loadl_epi64(v75 - 7))),
                  (__m128i)-1LL);
          v76 = _mm_sub_epi64( /*0x1008a7e6a*/
                  _mm_add_epi64(
                    v76,
                    _mm_unpacklo_epi64(_mm_loadl_epi64((const __m128i *)((char *)v75 - 56)), _mm_loadl_epi64(v75))),
                  (__m128i)-1LL);
          v75 += 14; /*0x1008a7e6e*/
          v77 -= 4; /*0x1008a7e75*/
        }
        while ( v77 ); /*0x1008a7e79*/
        v78 = _mm_add_epi64(v76, v74); /*0x1008a7e7b*/
        v52 = _mm_add_epi64(_mm_shuffle_epi32(v78, 238), v78).u64[0]; /*0x1008a7e88*/
      }
      else
      {
        *(_QWORD *)&v72 = 0; /*0x1008a7dfd*/
      }
      *((_QWORD *)&v72 + 1) -= v72; /*0x1008a7e8d*/
      *(_QWORD *)&v72 = 56 * v72 + v59 + 48; /*0x1008a7e94*/
      do /*0x1008a7eaf*/
      {
        v52 += *(_QWORD *)v72 + 1LL; /*0x1008a7ea3*/
        *(_QWORD *)&v72 = v72 + 56; /*0x1008a7ea8*/
        --*((_QWORD *)&v72 + 1); /*0x1008a7eac*/
      }
      while ( *((_QWORD *)&v72 + 1) ); /*0x1008a7eaf*/
    }
    else
    {
      v8 = v133; /*0x1008a7e04*/
    }
  }
  else
  {
    v52 = 0; /*0x1008a7d1c*/
  }
  v79 = v52 + v111 + 1; /*0x1008a7eb1*/
  if ( v79 >= 0x801 ) /*0x1008a7ebb*/
  {
    __s1 = v8 + 50; /*0x1008a7ec8*/
    do /*0x1008a7ef1*/
    {
      v80 = v8[39]; /*0x1008a7ef7*/
      if ( !v80 ) /*0x1008a7f01*/
      {
        v49 = 0; /*0x1008a8095*/
        goto LABEL_105; /*0x1008a8097*/
      }
      v81 = v8[38]; /*0x1008a7f07*/
      v82 = v8[37]; /*0x1008a7f19*/
      v83 = 0; /*0x1008a7f23*/
      if ( (unsigned __int64)(v81 + 1) >= v8[36] ) /*0x1008a7f28*/
        v83 = v8[36]; /*0x1008a7f28*/
      v8[38] = v81 - v83 + 1; /*0x1008a7f34*/
      v49 = v80 - 1; /*0x1008a7f3b*/
      v8[39] = v49; /*0x1008a7f3e*/
      v84 = 56 * v81; /*0x1008a7f45*/
      v85 = *(void **)(v82 + v84); /*0x1008a7f49*/
      if ( v85 == (void *)0x8000000000000000LL ) /*0x1008a7f5a*/
        goto LABEL_105; /*0x1008a7f5a*/
      v86 = (_QWORD *)(v84 + v82); /*0x1008a7f60*/
      v113 = (__int64)v85; /*0x1008a7f63*/
      v119 = v86[6]; /*0x1008a7f75*/
      v118 = v86[5]; /*0x1008a7f7d*/
      v117 = v86[4]; /*0x1008a7f85*/
      v116 = v86[3]; /*0x1008a7f8d*/
      v87 = (void *)v86[1]; /*0x1008a7f91*/
      v115 = v86[2]; /*0x1008a7f99*/
      v114 = v87; /*0x1008a7f9d*/
      v88 = v119; /*0x1008a7fa0*/
      if ( v116 > v119 ) /*0x1008a7fae*/
      {
        *((_BYTE *)v133 + 505) = 1; /*0x1008a7fb4*/
        alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h8be58c31c860506b(__s1, 7); /*0x1008a7fc4*/
      }
      if ( v85 ) /*0x1008a7fcc*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v114, v85, 1); /*0x1008a7fdd*/
      if ( v117 ) /*0x1008a7fec*/
      {
        v122 = 0; /*0x1008a7ff5*/
        v123 = v117; /*0x1008a8000*/
        v124 = v118; /*0x1008a8004*/
        v126 = 0; /*0x1008a8008*/
        v127 = v117; /*0x1008a8010*/
        v128 = v118; /*0x1008a8014*/
        v89 = 1; /*0x1008a8018*/
        v90 = v88; /*0x1008a801d*/
      }
      else
      {
        v89 = 0; /*0x1008a8030*/
        v90 = 0; /*0x1008a8032*/
      }
      v121 = v89; /*0x1008a8034*/
      v125 = v89; /*0x1008a803b*/
      v129 = v90; /*0x1008a803f*/
      alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::ha3dc05b6a71e04b2(v99, &v121); /*0x1008a8049*/
      while ( v99[0] ) /*0x1008a8065*/
      {
        v91 = *(_QWORD *)(v99[0] + 24 * v100 + 8); /*0x1008a8076*/
        if ( v91 ) /*0x1008a807e*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(v99[0] + 24 * v100 + 16), v91, 1); /*0x1008a808e*/
        alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::ha3dc05b6a71e04b2(v99, &v121); /*0x1008a8056*/
      }
      v79 += ~v88; /*0x1008a7ee3*/
      v8 = v133; /*0x1008a7eed*/
    }
    while ( v79 > 0x800 ); /*0x1008a7ef1*/
    v49 = v133[39]; /*0x1008a8099*/
  }
LABEL_105:
  v127 = v111; /*0x1008a80a0*/
  v126 = v110; /*0x1008a80b9*/
  v125 = v109; /*0x1008a80c4*/
  v124 = v108; /*0x1008a80cf*/
  v123 = v107; /*0x1008a80da*/
  v122 = v106; /*0x1008a80ec*/
  v121 = v105; /*0x1008a80f3*/
  v92 = v8[36]; /*0x1008a80fa*/
  if ( v49 == v92 ) /*0x1008a8100*/
  {
    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::grow::had42b3390ccb84cd(); /*0x1008a8102*/
    v92 = v8[36]; /*0x1008a8107*/
    v49 = v8[39]; /*0x1008a810e*/
  }
  v8[39] = v49 + 1; /*0x1008a8119*/
  v93 = v8[38] + v49; /*0x1008a8120*/
  v94 = 0; /*0x1008a8127*/
  if ( v93 >= v92 ) /*0x1008a812c*/
    v94 = v92; /*0x1008a812c*/
  result = v8[37]; /*0x1008a8133*/
  v96 = 56 * (v93 - v94); /*0x1008a813a*/
  *(_QWORD *)(result + v96 + 48) = v127; /*0x1008a8142*/
  *(_QWORD *)(result + v96 + 40) = v126; /*0x1008a814b*/
  *(_QWORD *)(result + v96 + 32) = v125; /*0x1008a8154*/
  *(_QWORD *)(result + v96 + 24) = v124; /*0x1008a815d*/
  *(_QWORD *)(result + v96 + 16) = v123; /*0x1008a8166*/
  v97 = v121; /*0x1008a816b*/
  *(_QWORD *)(result + v96 + 8) = v122; /*0x1008a8179*/
  *(_QWORD *)(result + v96) = v97; /*0x1008a817e*/
  return result; /*0x1008a8182*/
}