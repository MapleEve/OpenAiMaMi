// source: AiMaMi 1.2.7-pre macos-arm64 build (x86_64 slice); sha256 ac235ae0171a41d0a641431bb71e60a26093470eab78f2b8d6f91632f93916b9
// func: codexmate_lib::core::relay::translator::anthropic_search::tool::hc333f77ef425ba05; addr: 0x100ac9eb0; session: <审计会话>; pass: 3-pre-side; decompiled_at: 2026-10-26T05:51:20Z
_QWORD *__fastcall codexmate_lib::core::relay::translator::anthropic_search::tool::hc333f77ef425ba05(
        _QWORD *a1,
        __int64 a2)
{
  _QWORD *v2; // rbx
  _DWORD *v3; // rax
  void *v4; // rax
  _DWORD *v5; // rax
  void *v6; // rax
  _BYTE *v7; // rax
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  double *v10; // rax
  __int64 v11; // r13
  char *v12; // r15
  __int64 v13; // rax
  unsigned __int64 v14; // r9
  bool v15; // r10
  __int64 v16; // rcx
  double *v17; // r14
  __int64 v18; // rax
  double v19; // rax
  __m128 v20; // xmm0
  __int64 v21; // rcx
  unsigned __int64 v22; // rdi
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // r11
  __int64 v26; // r11
  unsigned __int64 v27; // r9
  __int64 v28; // r8
  __int64 v29; // r12
  unsigned __int64 v30; // r14
  __int64 v31; // r9
  _QWORD *v32; // r9
  bool v33; // zf
  __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // rdx
  _QWORD *v37; // r14
  __int64 v38; // r12
  __int64 v39; // r13
  __int64 v40; // r15
  size_t v41; // rdx
  size_t v42; // rbx
  __int64 v43; // rbx
  int v44; // eax
  char v45; // cl
  __int64 v46; // rsi
  __int64 v47; // rcx
  __int64 v48; // r15
  __int64 v49; // rax
  __int64 v51; // r14
  __int64 v52; // rax
  __int64 v54; // [rsp+10h] [rbp-E0h]
  __int64 v55; // [rsp+18h] [rbp-D8h] BYREF
  _DWORD *v56; // [rsp+20h] [rbp-D0h]
  __int64 v57; // [rsp+28h] [rbp-C8h]
  _QWORD v58[2]; // [rsp+30h] [rbp-C0h] BYREF
  __int64 v59; // [rsp+40h] [rbp-B0h]
  __int64 v60; // [rsp+48h] [rbp-A8h]
  __int64 v61; // [rsp+50h] [rbp-A0h] BYREF
  __int64 v62; // [rsp+58h] [rbp-98h] BYREF
  double v63; // [rsp+60h] [rbp-90h]
  double v64[4]; // [rsp+68h] [rbp-88h] BYREF
  __m128 v65; // [rsp+88h] [rbp-68h]
  __int64 v66; // [rsp+98h] [rbp-58h] BYREF
  __int64 v67; // [rsp+A0h] [rbp-50h]
  __int64 v68; // [rsp+A8h] [rbp-48h]
  __int64 v69; // [rsp+B0h] [rbp-40h]
  _QWORD *v70; // [rsp+B8h] [rbp-38h]
  __int64 v71; // [rsp+C0h] [rbp-30h]

  v2 = a1; /*0x100ac9ec7*/
  v58[0] = 0; /*0x100ac9eca*/
  v59 = 0; /*0x100ac9ed5*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1); /*0x100ac9ee0*/
  v3 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100ac9eef*/
  if ( !v3 ) /*0x100ac9ef7*/
    goto LABEL_89; /*0x100ac9ef7*/
  *v3 = 1701869940; /*0x100ac9f00*/
  v55 = 4; /*0x100ac9f06*/
  v56 = v3; /*0x100ac9f11*/
  v57 = 4; /*0x100ac9f18*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4); /*0x100ac9f23*/
  v4 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1); /*0x100ac9f32*/
  if ( !v4 ) /*0x100ac9f3a*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 19); /*0x100aca70d*/
  qmemcpy(v4, "web_search_20250305", 19); /*0x100ac9f58*/
  LOBYTE(v61) = 3; /*0x100ac9f62*/
  v62 = 19; /*0x100ac9f69*/
  v63 = *(double *)&v4; /*0x100ac9f74*/
  *(_QWORD *)&v64[0] = 19; /*0x100ac9f7b*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v66, v58, &v55, &v61); /*0x100ac9f9f*/
  if ( (_BYTE)v66 != 6 ) /*0x100ac9fa8*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v66); /*0x100ac9fae*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v66); /*0x100ac9fb3*/
  v5 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100ac9fc2*/
  if ( !v5 ) /*0x100ac9fca*/
LABEL_89:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x100aca6ee*/
  *v5 = 1701667182; /*0x100ac9fd3*/
  v55 = 4; /*0x100ac9fd9*/
  v56 = v5; /*0x100ac9fe4*/
  v57 = 4; /*0x100ac9feb*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4); /*0x100ac9ff6*/
  v6 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x100aca005*/
  if ( !v6 ) /*0x100aca00d*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 10); /*0x100aca71e*/
  qmemcpy(v6, "web_search", 10); /*0x100aca013*/
  LOBYTE(v61) = 3; /*0x100aca01c*/
  v62 = 10; /*0x100aca023*/
  v63 = *(double *)&v6; /*0x100aca02e*/
  *(_QWORD *)&v64[0] = 10; /*0x100aca035*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hde34f7de87a7ad28(&v66, v58, &v55, &v61); /*0x100aca059*/
  if ( (_BYTE)v66 != 6 ) /*0x100aca062*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v66); /*0x100aca068*/
  v67 = v58[0]; /*0x100aca07b*/
  v68 = v58[1]; /*0x100aca07f*/
  v69 = v59; /*0x100aca08a*/
  LOBYTE(v66) = 5; /*0x100aca08e*/
  v7 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100aca0a1*/
                  "external_web_accessAnthropic web search cannot honor external_web_access=falsefiltersallowed_domainsIn"
                  "valid search allowed_domainsUnsupported Anthropic search filterInvalid web search filtersuser_location",
                  19,
                  a2);
  if ( v7 && *v7 == 1 && v7[1] != 1 ) /*0x100aca0b4*/
  {
    v11 = 59; /*0x100aca174*/
    v12 = "Anthropic web search cannot honor external_web_access=falsefiltersallowed_domainsInvalid search allowed_domainsUnsupported Anthropic search filterInvalid web search filtersuser_location"; /*0x100aca17a*/
    goto LABEL_84; /*0x100aca181*/
  }
  v8 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100aca0c9*/
         "filtersallowed_domainsInvalid search allowed_domainsUnsupported Anthropic search filterInvalid web search filtersuser_location",
         7,
         a2);
  if ( !v8 ) /*0x100aca0d8*/
    goto LABEL_15; /*0x100aca0d8*/
  if ( *(_BYTE *)v8 != 5 ) /*0x100aca0e0*/
  {
    if ( !*(_BYTE *)v8 ) /*0x100aca0da*/
      goto LABEL_15; /*0x100aca0e4*/
    v11 = 26; /*0x100aca162*/
    v12 = "Invalid web search filtersuser_location"; /*0x100aca168*/
    goto LABEL_84; /*0x100aca16f*/
  }
  v14 = *(_QWORD *)(v8 + 8); /*0x100aca144*/
  v15 = v14 != 0; /*0x100aca14b*/
  if ( v14 ) /*0x100aca14f*/
  {
    v9 = *(_QWORD *)(v8 + 16); /*0x100aca155*/
    v16 = *(_QWORD *)(v8 + 24); /*0x100aca159*/
  }
  else
  {
    v16 = 0; /*0x100aca20a*/
  }
  v22 = 0; /*0x100aca20c*/
  v12 = "Unsupported Anthropic search filterInvalid web search filtersuser_location"; /*0x100aca20e*/
  v71 = *(_QWORD *)(v8 + 8); /*0x100aca229*/
  v70 = v2; /*0x100aca22d*/
  v11 = 35; /*0x100aca231*/
  while ( v16-- != 0 ) /*0x100aca240*/
  {
    if ( !v15 ) /*0x100aca24e*/
      core::option::unwrap_failed::h44626cade04bbf1e(&anon_202735cc4238ea6ae2931afe37a1ff22_4); /*0x100aca6fc*/
    if ( v22 ) /*0x100aca257*/
    {
      if ( v9 < *(unsigned __int16 *)(v22 + 626) ) /*0x100aca264*/
        goto LABEL_36; /*0x100aca264*/
      goto LABEL_47; /*0x100aca264*/
    }
    if ( !v9 ) /*0x100aca283*/
    {
      v22 = v14; /*0x100aca2bd*/
      goto LABEL_46; /*0x100aca2c0*/
    }
    v22 = v14; /*0x100aca288*/
    if ( (v9 & 7) == 0 ) /*0x100aca28f*/
    {
      v27 = v9; /*0x100aca2c2*/
      if ( v9 < 8 ) /*0x100aca2c9*/
        goto LABEL_46; /*0x100aca2c9*/
      do /*0x100aca30c*/
      {
LABEL_45:
        v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v22 + 632) /*0x100aca2d0*/
                                                                                                + 632LL)
                                                                                    + 632LL)
                                                                        + 632LL)
                                                            + 632LL)
                                                + 632LL)
                                    + 632LL)
                        + 632LL);
        v27 -= 8LL; /*0x100aca308*/
      }
      while ( v27 ); /*0x100aca30c*/
      goto LABEL_46; /*0x100aca30c*/
    }
    v26 = 0; /*0x100aca291*/
    do /*0x100aca2ad*/
    {
      v22 = *(_QWORD *)(v22 + 632); /*0x100aca2a0*/
      ++v26; /*0x100aca2a7*/
    }
    while ( (v9 & 7) != v26 ); /*0x100aca2ad*/
    v27 = v9 - v26; /*0x100aca2b2*/
    if ( v9 >= 8 ) /*0x100aca2b9*/
      goto LABEL_45; /*0x100aca2b9*/
LABEL_46:
    v9 = 0; /*0x100aca30e*/
    v14 = 0; /*0x100aca311*/
    if ( *(_WORD *)(v22 + 626) ) /*0x100aca314*/
    {
LABEL_36:
      v24 = v22; /*0x100aca26a*/
      v25 = v9; /*0x100aca26d*/
      goto LABEL_49; /*0x100aca270*/
    }
    do /*0x100aca356*/
    {
LABEL_47:
      v24 = *(_QWORD *)(v22 + 352); /*0x100aca330*/
      if ( !v24 ) /*0x100aca33a*/
        core::option::unwrap_failed::h44626cade04bbf1e(&anon_202735cc4238ea6ae2931afe37a1ff22_745); /*0x100aca6cf*/
      ++v14; /*0x100aca340*/
      v25 = *(unsigned __int16 *)(v22 + 624); /*0x100aca343*/
      v22 = *(_QWORD *)(v22 + 352); /*0x100aca34b*/
    }
    while ( (unsigned __int16)v25 >= *(_WORD *)(v24 + 626) ); /*0x100aca356*/
LABEL_49:
    if ( !v14 ) /*0x100aca35b*/
    {
      v9 = v25 + 1; /*0x100aca410*/
      v22 = v24; /*0x100aca414*/
      v31 = 3 * v25; /*0x100aca417*/
      if ( *(_QWORD *)(v24 + 24 * v25 + 376) != 15 ) /*0x100aca424*/
        goto LABEL_84; /*0x100aca424*/
      goto LABEL_58; /*0x100aca424*/
    }
    v28 = v24 + 8 * v25 + 640; /*0x100aca361*/
    if ( (v14 & 7) == 0 ) /*0x100aca370*/
    {
      v30 = v14; /*0x100aca460*/
      if ( v14 < 8 ) /*0x100aca467*/
        goto LABEL_55; /*0x100aca467*/
      do /*0x100aca3ef*/
      {
LABEL_54:
        v22 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v28 + 632LL) /*0x100aca3b0*/
                                                                                    + 632LL)
                                                                        + 632LL)
                                                            + 632LL)
                                                + 632LL)
                                    + 632LL)
                        + 632LL);
        v28 = v22 + 632; /*0x100aca3e4*/
        v30 -= 8LL; /*0x100aca3eb*/
      }
      while ( v30 ); /*0x100aca3ef*/
      goto LABEL_55; /*0x100aca3ef*/
    }
    v29 = 0; /*0x100aca376*/
    do /*0x100aca390*/
    {
      v22 = *(_QWORD *)v28; /*0x100aca380*/
      v28 = *(_QWORD *)v28 + 632LL; /*0x100aca383*/
      ++v29; /*0x100aca38a*/
    }
    while ( (v14 & 7) != v29 ); /*0x100aca390*/
    v30 = v14 - v29; /*0x100aca395*/
    v2 = v70; /*0x100aca398*/
    if ( v14 >= 8 ) /*0x100aca3a0*/
      goto LABEL_54; /*0x100aca3a0*/
LABEL_55:
    v9 = 0; /*0x100aca3f1*/
    v31 = 3 * v25; /*0x100aca3f4*/
    if ( *(_QWORD *)(v24 + 24 * v25 + 376) != 15 ) /*0x100aca401*/
      goto LABEL_84; /*0x100aca401*/
LABEL_58:
    v32 = *(_QWORD **)(v24 + 8 * v31 + 368); /*0x100aca42a*/
    v15 = 1; /*0x100aca443*/
    v33 = (*v32 ^ 0x5F6465776F6C6C61LL | *(_QWORD *)((char *)v32 + 7) ^ 0x736E69616D6F645FLL) == 0; /*0x100aca446*/
    v14 = 0; /*0x100aca449*/
    if ( !v33 ) /*0x100aca44f*/
      goto LABEL_84; /*0x100aca44f*/
  }
  if ( !v71 ) /*0x100aca473*/
    goto LABEL_15; /*0x100aca473*/
  v60 = *(_QWORD *)(v8 + 16); /*0x100aca47d*/
  v34 = v71; /*0x100aca484*/
LABEL_64:
  v35 = v34 + 360; /*0x100aca488*/
  v36 = *(unsigned __int16 *)(v34 + 626); /*0x100aca48f*/
  v71 = v34; /*0x100aca496*/
  v37 = (_QWORD *)(v34 - 8); /*0x100aca49a*/
  v54 = v36; /*0x100aca49e*/
  v38 = 3LL * (unsigned int)(8 * v36); /*0x100aca4ac*/
  v39 = -1; /*0x100aca4b0*/
  do /*0x100aca514*/
  {
    if ( !v38 ) /*0x100aca4c3*/
    {
      v39 = v54; /*0x100aca51f*/
LABEL_74:
      v2 = v70; /*0x100aca526*/
      if ( !v60 ) /*0x100aca535*/
        goto LABEL_15; /*0x100aca535*/
      --v60; /*0x100aca53b*/
      v34 = *(_QWORD *)(v71 + 8 * v39 + 632); /*0x100aca546*/
      goto LABEL_64; /*0x100aca54e*/
    }
    v40 = v35 + 24; /*0x100aca4c5*/
    v41 = *(_QWORD *)(v35 + 16); /*0x100aca4cd*/
    v42 = v41 - 15; /*0x100aca4d4*/
    if ( v41 >= 0xF ) /*0x100aca4dd*/
      v41 = 15; /*0x100aca4dd*/
    v43 = -(__int64)v42; /*0x100aca4e1*/
    v44 = memcmp( /*0x100aca4eb*/
            "allowed_domainsInvalid search allowed_domainsUnsupported Anthropic search filterInvalid web search filtersuser_location",
            *(const void **)(v35 + 8),
            v41);
    if ( v44 ) /*0x100aca4f4*/
      v43 = v44; /*0x100aca4f4*/
    v45 = (v43 > 0) - (v43 < 0); /*0x100aca501*/
    v37 += 4; /*0x100aca503*/
    ++v39; /*0x100aca507*/
    v38 -= 24; /*0x100aca50a*/
    v35 = v40; /*0x100aca50e*/
  }
  while ( v45 == 1 ); /*0x100aca514*/
  if ( v45 ) /*0x100aca51b*/
    goto LABEL_74; /*0x100aca51b*/
  v11 = 30; /*0x100aca553*/
  v12 = "Invalid search allowed_domainsUnsupported Anthropic search filterInvalid web search filtersuser_location"; /*0x100aca559*/
  v2 = v70; /*0x100aca565*/
  if ( *((_BYTE *)v37 - 24) != 4 ) /*0x100aca569*/
    goto LABEL_84; /*0x100aca569*/
  v46 = *(v37 - 1); /*0x100aca56f*/
  v47 = 0; /*0x100aca57d*/
  while ( 32LL * *v37 != v47 ) /*0x100aca583*/
  {
    v33 = *(_BYTE *)(v46 + v47) == 3; /*0x100aca585*/
    v47 += 32; /*0x100aca589*/
    if ( !v33 ) /*0x100aca58d*/
      goto LABEL_84; /*0x100aca58d*/
  }
  _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h7792aaf1fd665bd1( /*0x100aca59b*/
    &v62,
    v46,
    *v37);
  LOBYTE(v61) = 4; /*0x100aca5a0*/
  v48 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x100aca5bc*/
          "allowed_domainsInvalid search allowed_domainsUnsupported Anthropic search filterInvalid web search filtersuser_location",
          0xFu);
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v48); /*0x100aca5c2*/
  *(double *)(v48 + 24) = v64[0]; /*0x100aca5ce*/
  *(double *)(v48 + 16) = v63; /*0x100aca5d9*/
  v49 = v61; /*0x100aca5dd*/
  *(_QWORD *)(v48 + 8) = v62; /*0x100aca5eb*/
  *(_QWORD *)v48 = v49; /*0x100aca5ef*/
LABEL_15:
  v10 = (double *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100aca0e6*/
                    "user_location",
                    13,
                    a2);
  if ( !v10 ) /*0x100aca101*/
  {
LABEL_18:
    v2[3] = v69; /*0x100aca120*/
    v2[2] = v68; /*0x100aca12c*/
    v13 = v66; /*0x100aca130*/
    v2[1] = v67; /*0x100aca138*/
    *v2 = v13; /*0x100aca13c*/
    return v2; /*0x100aca13f*/
  }
  v11 = 27; /*0x100aca106*/
  v12 = "Unsupported search location"; /*0x100aca10c*/
  if ( *(_BYTE *)v10 == 5 ) /*0x100aca116*/
  {
    v17 = v10; /*0x100aca195*/
    v18 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100aca198*/
            "typereasoningcompleted",
            4,
            v10);
    if ( !v18 /*0x100aca1d9*/
      || *(_BYTE *)v18 != 3
      || *(_QWORD *)(v18 + 24) != 11
      || **(_QWORD **)(v18 + 16) ^ 0x6D69786F72707061LL
       | *(_QWORD *)(*(_QWORD *)(v18 + 16) + 3LL) ^ 0x6574616D69786F72LL )
    {
      goto LABEL_84; /*0x100aca1d9*/
    }
    if ( *(_BYTE *)v17 != 5 ) /*0x100aca1e9*/
      core::option::unwrap_failed::h44626cade04bbf1e(&off_101C08BB0); /*0x100aca6dd*/
    v19 = v17[1]; /*0x100aca1ef*/
    if ( v19 == 0.0 ) /*0x100aca1f6*/
    {
      v20 = 0; /*0x100aca5f7*/
      v21 = 0; /*0x100aca5fa*/
    }
    else
    {
      v20 = *(__m128 *)(v17 + 2); /*0x100aca1fc*/
      v21 = 1; /*0x100aca200*/
    }
    v61 = v21; /*0x100aca5fc*/
    v62 = 0; /*0x100aca603*/
    v63 = v19; /*0x100aca60e*/
    _mm_storel_ps(v64, v20); /*0x100aca615*/
    *(_QWORD *)&v64[1] = v21; /*0x100aca61c*/
    v64[2] = 0.0; /*0x100aca620*/
    v64[3] = v19; /*0x100aca628*/
    v65 = v20; /*0x100aca62c*/
    if ( (unsigned __int8)core::iter::traits::iterator::Iterator::try_fold::h6ef79997d2fc244a(&v61) ) /*0x100aca637*/
      goto LABEL_84; /*0x100aca63e*/
    _$LT$serde_json..value..Value$u20$as$u20$core..clone..Clone$GT$::clone::h8271c7755bc56075(&v61, v17); /*0x100aca673*/
    v51 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x100aca68d*/
            "user_location",
            0xDu);
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(v51); /*0x100aca693*/
    *(double *)(v51 + 24) = v64[0]; /*0x100aca69f*/
    *(double *)(v51 + 16) = v63; /*0x100aca6aa*/
    v52 = v61; /*0x100aca6ae*/
    *(_QWORD *)(v51 + 8) = v62; /*0x100aca6bc*/
    *(_QWORD *)v51 = v52; /*0x100aca6c0*/
    goto LABEL_18; /*0x100aca6c3*/
  }
  if ( !*(_BYTE *)v10 ) /*0x100aca103*/
    goto LABEL_18; /*0x100aca11a*/
LABEL_84:
  v2[1] = v12; /*0x100aca640*/
  v2[2] = v11; /*0x100aca644*/
  *(_BYTE *)v2 = 6; /*0x100aca648*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hb993af2e833a05ca(&v66); /*0x100aca64f*/
  return v2; /*0x100aca657*/
}