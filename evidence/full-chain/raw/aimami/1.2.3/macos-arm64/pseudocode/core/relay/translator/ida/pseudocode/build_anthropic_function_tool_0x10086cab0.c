// __ZN13codexmate_lib4core5relay10translator29build_anthropic_function_tool @ 0x10086cab0 | 基线 same-set
void __fastcall codexmate_lib::core::relay::translator::build_anthropic_function_tool::h3dd52af57e76e160(
        _BYTE *a1,
        __int64 a2,
        const void *a3,
        __int64 a4)
{
  __int64 v6; // rax
  signed __int64 v7; // rcx
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rax
  char v11; // cl
  __int64 v12; // rcx
  const void *v13; // rbx
  __int64 v14; // rax
  __int64 v15; // rdi
  char *v16; // rdi
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // rax
  __int64 v20; // rbx
  unsigned __int64 v21; // rdx
  __int64 v22; // r14
  _DWORD *v23; // rax
  __int64 v24; // rax
  __m256i *v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rdx
  __m256i *v29; // rsi
  void *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rcx
  __int64 v33; // rdx
  __m256i *v34; // rdi
  __int64 i; // rcx
  __int64 v36; // rax
  __int64 v37; // rbx
  __int64 v38; // r12
  __int64 v39; // r15
  size_t v40; // rdx
  size_t v41; // r13
  __int64 v42; // r13
  int v43; // eax
  char v44; // cl
  __int64 v45; // r14
  _DWORD *v46; // rax
  __int64 v47; // rax
  __m256i *v48; // rdi
  __int64 v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rdx
  __m256i *v52; // rsi
  __int64 v53; // rcx
  void *v54; // rax
  __int64 v55; // rax
  __int64 v56; // rcx
  __int64 v57; // rdx
  __int64 v58; // rbx
  _DWORD *v59; // rax
  __int64 v60; // rax
  __int64 v61; // rax
  __int64 v62; // rcx
  __int64 v63; // rdx
  __int64 v64; // rax
  _QWORD *v65; // rbx
  __int64 v66; // r13
  __int64 v67; // r12
  __int64 v68; // r15
  size_t v69; // rdx
  size_t v70; // r14
  __int64 v71; // r14
  int v72; // eax
  char v73; // cl
  void *v74; // rax
  _DWORD *v75; // rax
  __int64 v76; // r14
  void *v77; // rax
  __int64 v78; // r13
  __m256i *v79; // rdi
  __int64 v80; // rax
  __int64 v81; // rcx
  __int64 v82; // rdx
  __m256i *v83; // rsi
  void *v84; // rax
  __int64 v85; // rax
  __int64 v86; // rcx
  __int64 v87; // rdx
  void *v88; // rax
  __int64 v89; // rdx
  __int64 v90; // rcx
  __int64 v91; // [rsp+18h] [rbp-198h]
  __int64 v93; // [rsp+28h] [rbp-188h]
  __int64 v94; // [rsp+30h] [rbp-180h]
  __int64 v95; // [rsp+30h] [rbp-180h]
  _BYTE *v96; // [rsp+38h] [rbp-178h]
  __int64 v97; // [rsp+40h] [rbp-170h]
  __int64 v98; // [rsp+40h] [rbp-170h]
  __int64 v99; // [rsp+48h] [rbp-168h]
  __int64 v100; // [rsp+50h] [rbp-160h]
  __int64 v101; // [rsp+50h] [rbp-160h]
  __int128 v102; // [rsp+58h] [rbp-158h] BYREF
  __int64 v103; // [rsp+68h] [rbp-148h]
  __int64 v104; // [rsp+70h] [rbp-140h] BYREF
  unsigned __int64 v105[3]; // [rsp+78h] [rbp-138h]
  __m256i v106; // [rsp+90h] [rbp-120h] BYREF
  size_t __n; // [rsp+B0h] [rbp-100h]
  __m256i v108; // [rsp+B8h] [rbp-F8h] BYREF
  __int64 v109; // [rsp+D8h] [rbp-D8h]
  __int64 v110; // [rsp+E0h] [rbp-D0h]
  __int64 v111; // [rsp+E8h] [rbp-C8h]
  __m256i v112; // [rsp+F0h] [rbp-C0h] BYREF
  __int64 v113; // [rsp+110h] [rbp-A0h]
  __int64 v114; // [rsp+118h] [rbp-98h]
  __int64 v115; // [rsp+120h] [rbp-90h]
  __m256i v116; // [rsp+128h] [rbp-88h] BYREF
  __int64 v117; // [rsp+148h] [rbp-68h] BYREF
  void *v118; // [rsp+150h] [rbp-60h]
  __int64 v119; // [rsp+158h] [rbp-58h]
  __int64 v120; // [rsp+160h] [rbp-50h]
  __m256i v121; // [rsp+168h] [rbp-48h]

  if ( !a4 ) /*0x10086caca*/
  {
    *a1 = 6; /*0x10086cc04*/
    return; /*0x10086cc07*/
  }
  v6 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10086caf6*/
         "descriptionparametersstrict",
         11,
         a2);
  if ( v6 && *(_BYTE *)v6 == 3 ) /*0x10086cb03*/
  {
    v7 = *(_QWORD *)(v6 + 24); /*0x10086cb05*/
    __n = v7; /*0x10086cb09*/
    if ( v7 < 0 ) /*0x10086cb13*/
    {
      v8 = 0; /*0x10086cb19*/
      goto LABEL_6; /*0x10086cb19*/
    }
    v96 = a1; /*0x10086cc0c*/
    v13 = *(const void **)(v6 + 16); /*0x10086cc13*/
    if ( v7 ) /*0x10086cc17*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("descriptionparametersstrict", 11); /*0x10086cc1d*/
      v8 = 1; /*0x10086cc22*/
      v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x10086cc34*/
      if ( !v14 ) /*0x10086cc3c*/
LABEL_6:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, __n); /*0x10086cb1c*/
      v15 = v14; /*0x10086cc42*/
    }
    else
    {
      v15 = 1; /*0x10086cef9*/
    }
    v99 = v15; /*0x10086cefe*/
    memcpy((void *)v15, v13, __n); /*0x10086cf0f*/
  }
  else
  {
    v96 = a1; /*0x10086cb2b*/
    __n = 0x8000000000000000LL; /*0x10086cb32*/
  }
  v9 = 10; /*0x10086cb40*/
  v10 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10086cb48*/
          "parametersstrict",
          10,
          a2);
  v91 = a4; /*0x10086cb50*/
  if ( v10 ) /*0x10086cb57*/
  {
    v11 = *(_BYTE *)v10; /*0x10086cb59*/
    if ( *(_BYTE *)v10 ) /*0x10086cb59*/
      goto LABEL_16; /*0x10086cb59*/
  }
  v9 = 20; /*0x10086cb67*/
  v10 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_101674F29, 20, a2); /*0x10086cb6f*/
  if ( v10 ) /*0x10086cb77*/
  {
    v11 = *(_BYTE *)v10; /*0x10086cb79*/
    if ( *(_BYTE *)v10 ) /*0x10086cb79*/
      goto LABEL_16; /*0x10086cb79*/
  }
  if ( (v9 = 12, /*0x10086cbbd*/
        (v10 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                 &unk_101674F3D,
                 12,
                 a2)) != 0)
    && (v11 = *(_BYTE *)v10) != 0
    || (v9 = 11,
        (v10 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                 &unk_101674F49,
                 11,
                 a2)) != 0)
    && (v11 = *(_BYTE *)v10) != 0 )
  {
LABEL_16:
    switch ( v11 ) /*0x10086cbdb*/
    {
      case 1: /*0x10086cbdb*/
      case 2: /*0x10086cbdb*/
        v116.i128[1] = *(_OWORD *)(v10 + 16); /*0x10086cbe9*/
        v12 = *(_QWORD *)v10; /*0x10086cbed*/
        v116.i64[1] = *(_QWORD *)(v10 + 8); /*0x10086cbf4*/
        v116.i64[0] = v12; /*0x10086cbf8*/
        break; /*0x10086cbff*/
      case 3: /*0x10086cbdb*/
        v9 = v10 + 8; /*0x10086cc83*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v116.u32[2], v10 + 8); /*0x10086cc86*/
        v116.i8[0] = 3; /*0x10086cc8b*/
        break; /*0x10086cc92*/
      case 4: /*0x10086cbdb*/
        v9 = v10 + 8; /*0x10086cc9f*/
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500( /*0x10086cca2*/
          &v116.u32[2],
          v10 + 8);
        v116.i8[0] = 4; /*0x10086cca7*/
        break; /*0x10086ccae*/
      case 5: /*0x10086cbdb*/
        if ( *(_QWORD *)(v10 + 24) ) /*0x10086cc4a*/
        {
          v9 = *(_QWORD *)(v10 + 8); /*0x10086cc55*/
          if ( !v9 ) /*0x10086cc5c*/
            core::option::unwrap_failed::h44626cade04bbf1e(&anon_a8580c566d8025b0f516de1c9be9088f_1248); /*0x10086e0c3*/
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::clone_subtree::h9339e7b508ff2244( /*0x10086cc6a*/
            &v116.u32[2],
            v9,
            *(_QWORD *)(v10 + 16));
          v116.i8[0] = 5; /*0x10086cc6f*/
        }
        else
        {
          v116.i64[1] = 0; /*0x10086cf19*/
          v116.i64[3] = 0; /*0x10086cf21*/
          v116.i8[0] = 5; /*0x10086cf29*/
        }
        break; /*0x10086cc76*/
    }
  }
  else
  {
    v16 = (char *)&unk_101674A90; /*0x10086ccb3*/
    v9 = 8; /*0x10086ccba*/
    v17 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_101674A90, 8, a2); /*0x10086ccc2*/
    v18 = v17; /*0x10086ccc7*/
    if ( !v17 ) /*0x10086cccd*/
      goto LABEL_38; /*0x10086cccd*/
    v16 = "parametersstrict"; /*0x10086ccd3*/
    v9 = 10; /*0x10086ccda*/
    v19 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10086cce2*/
            "parametersstrict",
            10,
            v17);
    if ( v19 ) /*0x10086ccea*/
    {
      LOBYTE(v20) = *(_BYTE *)v19; /*0x10086ccec*/
      if ( *(_BYTE *)v19 ) /*0x10086ccec*/
        goto LABEL_36; /*0x10086ccec*/
    }
    v16 = (char *)&unk_101674F29; /*0x10086ccf3*/
    v9 = 20; /*0x10086ccfa*/
    v19 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10086cd02*/
            &unk_101674F29,
            20,
            v18);
    if ( v19 ) /*0x10086cd0a*/
    {
      LOBYTE(v20) = *(_BYTE *)v19; /*0x10086cd0c*/
      if ( *(_BYTE *)v19 ) /*0x10086cd0c*/
        goto LABEL_36; /*0x10086cd0c*/
    }
    v16 = (char *)&unk_101674F3D; /*0x10086cd13*/
    v9 = 12; /*0x10086cd1a*/
    v19 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10086cd22*/
            &unk_101674F3D,
            12,
            v18);
    if ( v19 ) /*0x10086cd2a*/
    {
      LOBYTE(v20) = *(_BYTE *)v19; /*0x10086cd2c*/
      if ( *(_BYTE *)v19 ) /*0x10086cd2c*/
        goto LABEL_36; /*0x10086cd2c*/
    }
    v16 = (char *)&unk_101674F49; /*0x10086cd33*/
    v9 = 11; /*0x10086cd3a*/
    v19 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10086cd42*/
            &unk_101674F49,
            11,
            v18);
    if ( v19 && (LOBYTE(v20) = *(_BYTE *)v19) != 0 ) /*0x10086cd4c*/
    {
LABEL_36:
      switch ( (char)v20 ) /*0x10086cd66*/
      {
        case 1: /*0x10086cd66*/
        case 2: /*0x10086cd66*/
          v112.i128[1] = *(_OWORD *)(v19 + 16); /*0x10086cd77*/
          v20 = *(_QWORD *)v19; /*0x10086cd7e*/
          v112.i64[1] = *(_QWORD *)(v19 + 8); /*0x10086cd85*/
          v112.i64[0] = v20; /*0x10086cd8c*/
          v21 = *(_QWORD *)(v19 + 9); /*0x10086cd97*/
          v104 = *(_QWORD *)(v19 + 1); /*0x10086cd9b*/
          v105[0] = v21; /*0x10086cda2*/
          v105[1] = *(_QWORD *)(v19 + 17); /*0x10086cdad*/
          *(unsigned __int64 *)((char *)&v105[1] + 7) = *(_QWORD *)(v19 + 24); /*0x10086cdb8*/
          if ( (_BYTE)v20 == 6 ) /*0x10086cdc2*/
            goto LABEL_38; /*0x10086cdc2*/
          goto LABEL_57; /*0x10086cdc2*/
        case 3: /*0x10086cd66*/
          v9 = v19 + 8; /*0x10086d1c0*/
          _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v112.u32[2], v19 + 8); /*0x10086d1c3*/
          goto LABEL_56; /*0x10086d1c8*/
        case 4: /*0x10086cd66*/
          v9 = v19 + 8; /*0x10086d1d5*/
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::ha5e89ff124ed3500( /*0x10086d1d8*/
            &v112.u32[2],
            v19 + 8);
          goto LABEL_56; /*0x10086d1d8*/
        case 5: /*0x10086cd66*/
          v9 = v19 + 8; /*0x10086d1ab*/
          _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h4a2a5e30071939d1( /*0x10086d1ae*/
            &v112.u32[2],
            v19 + 8);
LABEL_56:
          *(unsigned __int64 *)((char *)&v105[1] + 7) = v112.u64[3]; /*0x10086d1dd*/
          *(_OWORD *)v105 = *(__int128 *)((char *)v112.i128 + 9); /*0x10086d207*/
          v104 = *(__int64 *)((char *)v112.i64 + 1); /*0x10086d20e*/
LABEL_57:
          v116.i8[0] = v20; /*0x10086d215*/
          *(__int128 *)((char *)v116.i128 + 1) = __PAIR128__(v105[0], v104); /*0x10086d229*/
          *(__int64 *)((char *)&v116.i64[2] + 1) = v105[1]; /*0x10086d23b*/
          v116.i64[3] = *(unsigned __int64 *)((char *)&v105[1] + 7); /*0x10086d246*/
          break; /*0x10086d246*/
      }
    }
    else
    {
LABEL_38:
      *(_QWORD *)&v102 = 0; /*0x10086cdc8*/
      v103 = 0; /*0x10086cdd3*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v16, v9); /*0x10086cdde*/
      v22 = 4; /*0x10086cde3*/
      v23 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x10086cdf3*/
      if ( !v23 ) /*0x10086cdfb*/
        goto LABEL_141; /*0x10086cdfb*/
      *v23 = 1701869940; /*0x10086ce04*/
      v116.i64[0] = 4; /*0x10086ce0a*/
      v116.i64[1] = (__int64)v23; /*0x10086ce15*/
      v116.i64[2] = 4; /*0x10086ce19*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x10086ce21*/
      v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x10086ce30*/
      if ( !v24 ) /*0x10086ce38*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x10086e164*/
      *(_WORD *)(v24 + 4) = 29795; /*0x10086ce3e*/
      *(_DWORD *)v24 = 1701470831; /*0x10086ce44*/
      v121.i8[0] = 3; /*0x10086ce4a*/
      v121.i64[1] = 6; /*0x10086ce4e*/
      v121.i64[2] = v24; /*0x10086ce56*/
      v121.i64[3] = 6; /*0x10086ce5a*/
      v25 = &v108; /*0x10086ce62*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v108, &v102, &v116); /*0x10086ce77*/
      if ( v108.i64[0] == 0x8000000000000000LL ) /*0x10086ce83*/
      {
        v26 = v108.i64[1]; /*0x10086ce89*/
        v27 = 32 * v108.i64[3]; /*0x10086ce97*/
        v120 = *(_QWORD *)(v108.i64[1] + 32 * v108.i64[3] + 24); /*0x10086cea0*/
        v119 = *(_QWORD *)(v108.i64[1] + 32 * v108.i64[3] + 16); /*0x10086cea9*/
        v28 = *(_QWORD *)(v108.i64[1] + 32 * v108.i64[3]); /*0x10086cead*/
        v118 = *(void **)(v108.i64[1] + 32 * v108.i64[3] + 8); /*0x10086ceb6*/
        v117 = v28; /*0x10086ceba*/
        *(_OWORD *)(v108.i64[1] + v27 + 16) = v121.i128[1]; /*0x10086cecb*/
        v29 = (__m256i *)v121.i64[1]; /*0x10086ced4*/
        *(_OWORD *)(v26 + v27) = v121.i128[0]; /*0x10086cedd*/
        if ( (_BYTE)v117 != 6 ) /*0x10086cee5*/
        {
          v25 = (__m256i *)&v117; /*0x10086ceeb*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v117); /*0x10086ceef*/
        }
      }
      else
      {
        v115 = v111; /*0x10086cf3c*/
        v114 = v110; /*0x10086cf4a*/
        v113 = v109; /*0x10086cf58*/
        v112 = v108; /*0x10086cf74*/
        v106 = v121; /*0x10086cfa6*/
        v25 = (__m256i *)&v117; /*0x10086cfc3*/
        v29 = &v112; /*0x10086cfc7*/
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10086cfd5*/
          &v117,
          &v112,
          &v106);
      }
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v25, v29); /*0x10086cfda*/
      v22 = 10; /*0x10086cfdf*/
      v30 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x10086cfef*/
      if ( !v30 ) /*0x10086cff7*/
LABEL_141:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v22); /*0x10086e153*/
      qmemcpy(v30, "properties", 10); /*0x10086d007*/
      v116.i64[0] = 10; /*0x10086d010*/
      v116.i64[1] = (__int64)v30; /*0x10086d01b*/
      v116.i64[2] = 10; /*0x10086d01f*/
      v121.i64[1] = 0; /*0x10086d027*/
      v121.i64[3] = 0; /*0x10086d02f*/
      v121.i8[0] = 5; /*0x10086d037*/
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v108, &v102, &v116); /*0x10086d050*/
      if ( v108.i64[0] == 0x8000000000000000LL ) /*0x10086d05c*/
      {
        v31 = v108.i64[1]; /*0x10086d05e*/
        v32 = 32 * v108.i64[3]; /*0x10086d06c*/
        v120 = *(_QWORD *)(v108.i64[1] + 32 * v108.i64[3] + 24); /*0x10086d075*/
        v119 = *(_QWORD *)(v108.i64[1] + 32 * v108.i64[3] + 16); /*0x10086d07e*/
        v33 = *(_QWORD *)(v108.i64[1] + 32 * v108.i64[3]); /*0x10086d082*/
        v118 = *(void **)(v108.i64[1] + 32 * v108.i64[3] + 8); /*0x10086d08b*/
        v117 = v33; /*0x10086d08f*/
        *(_OWORD *)(v108.i64[1] + v32 + 16) = v121.i128[1]; /*0x10086d0a0*/
        v9 = v121.i64[1]; /*0x10086d0a9*/
        *(_OWORD *)(v31 + v32) = v121.i128[0]; /*0x10086d0b2*/
        if ( (_BYTE)v117 != 6 ) /*0x10086d0ba*/
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v117); /*0x10086d0c4*/
      }
      else
      {
        v115 = v111; /*0x10086d0d5*/
        v114 = v110; /*0x10086d0e3*/
        v113 = v109; /*0x10086d0f1*/
        v112 = v108; /*0x10086d10d*/
        v106 = v121; /*0x10086d13f*/
        v9 = (__int64)&v112; /*0x10086d160*/
        alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10086d16e*/
          &v117,
          &v112,
          &v106);
      }
      *(__int128 *)((char *)v116.i128 + 8) = v102; /*0x10086d181*/
      v116.i64[3] = v103; /*0x10086d190*/
      v116.i8[0] = 5; /*0x10086d194*/
    }
  }
  v34 = &v116; /*0x10086d24a*/
  codexmate_lib::core::relay::translator::clean_tool_schema::hcd696520e11343af(&v116); /*0x10086d251*/
  if ( v116.i8[0] != 5 ) /*0x10086d25d*/
  {
    *(_QWORD *)&v102 = 0; /*0x10086d357*/
    v103 = 0; /*0x10086d362*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v116, v9); /*0x10086d36d*/
    v45 = 4; /*0x10086d372*/
    v46 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x10086d382*/
    if ( !v46 ) /*0x10086d38a*/
      goto LABEL_134; /*0x10086d38a*/
    *v46 = 1701869940; /*0x10086d393*/
    v104 = 4; /*0x10086d399*/
    v105[0] = (unsigned __int64)v46; /*0x10086d3a4*/
    v105[1] = 4; /*0x10086d3ab*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x10086d3b6*/
    v47 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x10086d3c5*/
    if ( !v47 ) /*0x10086d3cd*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x10086e0ff*/
    *(_WORD *)(v47 + 4) = 29795; /*0x10086d3d3*/
    *(_DWORD *)v47 = 1701470831; /*0x10086d3d9*/
    v121.i8[0] = 3; /*0x10086d3df*/
    v121.i64[1] = 6; /*0x10086d3e3*/
    v121.i64[2] = v47; /*0x10086d3eb*/
    v121.i64[3] = 6; /*0x10086d3ef*/
    v48 = &v108; /*0x10086d3f7*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v108, &v102, &v104); /*0x10086d40c*/
    if ( v108.i64[0] == 0x8000000000000000LL ) /*0x10086d418*/
    {
      v49 = v108.i64[1]; /*0x10086d41e*/
      v50 = 32 * v108.i64[3]; /*0x10086d42c*/
      v120 = *(_QWORD *)(v108.i64[1] + 32 * v108.i64[3] + 24); /*0x10086d435*/
      v119 = *(_QWORD *)(v108.i64[1] + 32 * v108.i64[3] + 16); /*0x10086d43e*/
      v51 = *(_QWORD *)(v108.i64[1] + 32 * v108.i64[3]); /*0x10086d442*/
      v118 = *(void **)(v108.i64[1] + 32 * v108.i64[3] + 8); /*0x10086d44b*/
      v117 = v51; /*0x10086d44f*/
      *(_OWORD *)(v108.i64[1] + v50 + 16) = v121.i128[1]; /*0x10086d460*/
      v52 = (__m256i *)v121.i64[1]; /*0x10086d469*/
      *(_OWORD *)(v49 + v50) = v121.i128[0]; /*0x10086d472*/
      if ( (_BYTE)v117 != 6 ) /*0x10086d47a*/
      {
        v48 = (__m256i *)&v117; /*0x10086d480*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v117); /*0x10086d484*/
      }
    }
    else
    {
      v115 = v111; /*0x10086d4b4*/
      v114 = v110; /*0x10086d4c2*/
      v113 = v109; /*0x10086d4d0*/
      v112 = v108; /*0x10086d4ec*/
      v106 = v121; /*0x10086d51e*/
      v48 = (__m256i *)&v117; /*0x10086d53b*/
      v52 = &v112; /*0x10086d53f*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10086d54d*/
        &v117,
        &v112,
        &v106);
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v48, v52); /*0x10086d552*/
    v45 = 10; /*0x10086d557*/
    v54 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x10086d567*/
    if ( !v54 ) /*0x10086d56f*/
LABEL_134:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v45); /*0x10086e0d5*/
    qmemcpy(v54, "properties", 10); /*0x10086d57f*/
    v104 = 10; /*0x10086d588*/
    v105[0] = (unsigned __int64)v54; /*0x10086d593*/
    v105[1] = 10; /*0x10086d59a*/
    v121.i64[1] = 0; /*0x10086d5a5*/
    v121.i64[3] = 0; /*0x10086d5ad*/
    v121.i8[0] = 5; /*0x10086d5b5*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v108, &v102, &v104); /*0x10086d5ce*/
    if ( v108.i64[0] == 0x8000000000000000LL ) /*0x10086d5da*/
    {
      v55 = v108.i64[1]; /*0x10086d5dc*/
      v56 = 32 * v108.i64[3]; /*0x10086d5ea*/
      v120 = *(_QWORD *)(v108.i64[1] + 32 * v108.i64[3] + 24); /*0x10086d5f3*/
      v119 = *(_QWORD *)(v108.i64[1] + 32 * v108.i64[3] + 16); /*0x10086d5fc*/
      v57 = *(_QWORD *)(v108.i64[1] + 32 * v108.i64[3]); /*0x10086d600*/
      v118 = *(void **)(v108.i64[1] + 32 * v108.i64[3] + 8); /*0x10086d609*/
      v117 = v57; /*0x10086d60d*/
      *(_OWORD *)(v108.i64[1] + v56 + 16) = v121.i128[1]; /*0x10086d61e*/
      v9 = v121.i64[1]; /*0x10086d627*/
      *(_OWORD *)(v55 + v56) = v121.i128[0]; /*0x10086d630*/
      if ( (_BYTE)v117 != 6 ) /*0x10086d638*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v117); /*0x10086d642*/
    }
    else
    {
      v115 = v111; /*0x10086d653*/
      v114 = v110; /*0x10086d661*/
      v113 = v109; /*0x10086d66f*/
      v112 = v108; /*0x10086d68b*/
      v106 = v121; /*0x10086d6bd*/
      v9 = (__int64)&v112; /*0x10086d6de*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10086d6ec*/
        &v117,
        &v112,
        &v106);
    }
    *(__int128 *)((char *)v112.i128 + 7) = v102; /*0x10086d706*/
    *(__int64 *)((char *)&v112.i64[2] + 7) = v103; /*0x10086d714*/
    v34 = &v116; /*0x10086d71b*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v116); /*0x10086d722*/
    v116.i8[0] = 5; /*0x10086d727*/
    *(__int64 *)((char *)v116.i64 + 1) = v112.i64[0]; /*0x10086d73c*/
    *(__int128 *)((char *)v116.i128 + 9) = *(__int128 *)((char *)v112.i128 + 8); /*0x10086d743*/
    v116.i64[3] = *(__int64 *)((char *)&v112.i64[2] + 7); /*0x10086d759*/
    goto LABEL_112; /*0x10086d75d*/
  }
  if ( v116.i64[1] ) /*0x10086d26a*/
  {
    v100 = v116.i64[2]; /*0x10086d274*/
    v94 = v116.i64[1]; /*0x10086d282*/
    for ( i = v116.i64[1]; ; i = *(_QWORD *)(v97 + 8 * v38 + 632) ) /*0x10086d289*/
    {
      v36 = i + 360; /*0x10086d28c*/
      v97 = i; /*0x10086d293*/
      v93 = *(unsigned __int16 *)(i + 626); /*0x10086d2a1*/
      v37 = 3LL * (unsigned int)(8 * v93); /*0x10086d2af*/
      v38 = -1; /*0x10086d2b3*/
      do /*0x10086d30c*/
      {
        if ( !v37 ) /*0x10086d2c3*/
        {
          v38 = v93; /*0x10086d31a*/
          goto LABEL_71; /*0x10086d31a*/
        }
        v39 = v36 + 24; /*0x10086d2c5*/
        v9 = *(_QWORD *)(v36 + 8); /*0x10086d2c9*/
        v40 = *(_QWORD *)(v36 + 16); /*0x10086d2cd*/
        v41 = v40 - 4; /*0x10086d2d4*/
        if ( v40 >= 4 ) /*0x10086d2dd*/
          v40 = 4; /*0x10086d2dd*/
        v42 = -(__int64)v41; /*0x10086d2e1*/
        v34 = (__m256i *)&anon_10420c9971c21f44d230d15b39fb3fec_75; /*0x10086d2e4*/
        v43 = memcmp(&anon_10420c9971c21f44d230d15b39fb3fec_75, (const void *)v9, v40); /*0x10086d2e7*/
        if ( v43 ) /*0x10086d2f0*/
          v42 = v43; /*0x10086d2f0*/
        v44 = (v42 > 0) - (v42 < 0); /*0x10086d2fd*/
        ++v38; /*0x10086d2ff*/
        v37 -= 24; /*0x10086d302*/
        v36 = v39; /*0x10086d306*/
      }
      while ( v44 == 1 ); /*0x10086d30c*/
      if ( !v44 ) /*0x10086d313*/
      {
        v53 = v94; /*0x10086d498*/
        goto LABEL_92; /*0x10086d4a2*/
      }
LABEL_71:
      if ( !v100 ) /*0x10086d336*/
        break; /*0x10086d336*/
      --v100; /*0x10086d33c*/
    }
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v34, v9); /*0x10086d762*/
  v58 = 4; /*0x10086d767*/
  v59 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x10086d776*/
  if ( !v59 ) /*0x10086d77e*/
    goto LABEL_139; /*0x10086d77e*/
  *v59 = 1701869940; /*0x10086d787*/
  v104 = 4; /*0x10086d78d*/
  v105[0] = (unsigned __int64)v59; /*0x10086d798*/
  v105[1] = 4; /*0x10086d79f*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x10086d7aa*/
  v60 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(6, 1); /*0x10086d7b9*/
  if ( !v60 ) /*0x10086d7c1*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 6); /*0x10086e144*/
  *(_WORD *)(v60 + 4) = 29795; /*0x10086d7c7*/
  *(_DWORD *)v60 = 1701470831; /*0x10086d7cd*/
  v121.i64[1] = 6; /*0x10086d7d3*/
  v121.i64[2] = v60; /*0x10086d7db*/
  v121.i64[3] = 6; /*0x10086d7df*/
  v121.i8[0] = 3; /*0x10086d7e7*/
  v34 = &v108; /*0x10086d7eb*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v108, &v116.u32[2], &v104); /*0x10086d7fd*/
  if ( v108.i64[0] == 0x8000000000000000LL ) /*0x10086d809*/
  {
    v61 = v108.i64[1]; /*0x10086d80b*/
    v62 = 32 * v108.i64[3]; /*0x10086d819*/
    v120 = *(_QWORD *)(v108.i64[1] + 32 * v108.i64[3] + 24); /*0x10086d822*/
    v119 = *(_QWORD *)(v108.i64[1] + 32 * v108.i64[3] + 16); /*0x10086d82b*/
    v63 = *(_QWORD *)(v108.i64[1] + 32 * v108.i64[3]); /*0x10086d82f*/
    v118 = *(void **)(v108.i64[1] + 32 * v108.i64[3] + 8); /*0x10086d838*/
    v117 = v63; /*0x10086d83c*/
    *(_OWORD *)(v108.i64[1] + v62 + 16) = v121.i128[1]; /*0x10086d84d*/
    v9 = v121.i64[1]; /*0x10086d856*/
    *(_OWORD *)(v61 + v62) = v121.i128[0]; /*0x10086d85f*/
    if ( (_BYTE)v117 != 6 ) /*0x10086d867*/
    {
      v34 = (__m256i *)&v117; /*0x10086d86d*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v117); /*0x10086d871*/
    }
  }
  else
  {
    v115 = v111; /*0x10086d882*/
    v114 = v110; /*0x10086d890*/
    v113 = v109; /*0x10086d89e*/
    v112 = v108; /*0x10086d8ba*/
    v106 = v121; /*0x10086d8ec*/
    v34 = (__m256i *)&v117; /*0x10086d909*/
    v9 = (__int64)&v112; /*0x10086d90d*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10086d91b*/
      &v117,
      &v112,
      &v106);
  }
  v53 = v116.i64[1]; /*0x10086d920*/
  if ( !v116.i64[1] ) /*0x10086d927*/
    goto LABEL_112; /*0x10086d927*/
LABEL_92:
  v101 = v116.i64[2]; /*0x10086d92d*/
LABEL_93:
  v64 = v53 + 360; /*0x10086d938*/
  v95 = v53; /*0x10086d946*/
  v65 = (_QWORD *)(v53 - 8); /*0x10086d94d*/
  v98 = *(unsigned __int16 *)(v53 + 626); /*0x10086d951*/
  v66 = 3LL * (unsigned int)(8 * v98); /*0x10086d95f*/
  v67 = -1; /*0x10086d963*/
  do /*0x10086d9ce*/
  {
    if ( !v66 ) /*0x10086d973*/
    {
      v67 = v98; /*0x10086d9d9*/
LABEL_103:
      if ( !v101 ) /*0x10086d9f2*/
        goto LABEL_112; /*0x10086d9f2*/
      --v101; /*0x10086d9f8*/
      v53 = *(_QWORD *)(v95 + 8 * v67 + 632); /*0x10086d9ff*/
      goto LABEL_93; /*0x10086da07*/
    }
    v68 = v64 + 24; /*0x10086d975*/
    v9 = *(_QWORD *)(v64 + 8); /*0x10086d979*/
    v69 = *(_QWORD *)(v64 + 16); /*0x10086d97d*/
    v70 = v69 - 4; /*0x10086d984*/
    if ( v69 >= 4 ) /*0x10086d98d*/
      v69 = 4; /*0x10086d98d*/
    v71 = -(__int64)v70; /*0x10086d991*/
    v34 = (__m256i *)&anon_10420c9971c21f44d230d15b39fb3fec_75; /*0x10086d994*/
    v72 = memcmp(&anon_10420c9971c21f44d230d15b39fb3fec_75, (const void *)v9, v69); /*0x10086d99b*/
    if ( v72 ) /*0x10086d9a4*/
      v71 = v72; /*0x10086d9a4*/
    v73 = (v71 > 0) - (v71 < 0); /*0x10086d9b1*/
    v65 += 4; /*0x10086d9b3*/
    ++v67; /*0x10086d9b7*/
    v66 -= 24; /*0x10086d9ba*/
    v64 = v68; /*0x10086d9be*/
  }
  while ( v73 == 1 ); /*0x10086d9ce*/
  if ( v73 ) /*0x10086d9d5*/
    goto LABEL_103; /*0x10086d9d5*/
  if ( *((_BYTE *)v65 - 24) != 3 ) /*0x10086da10*/
    goto LABEL_112; /*0x10086da10*/
  if ( *v65 != 6 ) /*0x10086da1a*/
    goto LABEL_112; /*0x10086da1a*/
  if ( *(_DWORD *)*(v65 - 1) ^ 0x656A626F | *(unsigned __int16 *)(*(v65 - 1) + 4LL) ^ 0x7463 ) /*0x10086da34*/
    goto LABEL_112; /*0x10086da34*/
  v9 = (__int64)"propertiesdescriptionparametersstrict"; /*0x10086da3c*/
  v58 = 10; /*0x10086da43*/
  v34 = (__m256i *)&v116.u32[2]; /*0x10086da4d*/
  if ( alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::get::hef3b4c39336e21bf( /*0x10086da51*/
         &v116.u32[2],
         "propertiesdescriptionparametersstrict",
         10) )
  {
    goto LABEL_112; /*0x10086da59*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2( /*0x10086da5f*/
    &v116.u32[2],
    "propertiesdescriptionparametersstrict");
  v74 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(10, 1); /*0x10086da6e*/
  if ( !v74 ) /*0x10086da76*/
LABEL_139:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v58); /*0x10086e133*/
  qmemcpy(v74, "properties", 10); /*0x10086da86*/
  v117 = 10; /*0x10086da8f*/
  v118 = v74; /*0x10086da97*/
  v119 = 10; /*0x10086da9b*/
  v112.i64[1] = 0; /*0x10086daa3*/
  v112.i64[3] = 0; /*0x10086daae*/
  v112.i8[0] = 5; /*0x10086dab9*/
  v34 = &v108; /*0x10086dac0*/
  v9 = (__int64)&v116.i64[1]; /*0x10086dad2*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de( /*0x10086dad6*/
    &v108,
    &v116.u32[2],
    &v117,
    &v112);
  if ( v108.i8[0] != 6 ) /*0x10086dae2*/
  {
    v34 = &v108; /*0x10086dae4*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v108); /*0x10086daeb*/
  }
LABEL_112:
  *(_QWORD *)&v102 = 0; /*0x10086daf0*/
  v103 = 0; /*0x10086dafb*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v34, v9); /*0x10086db06*/
  v75 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x10086db15*/
  if ( !v75 ) /*0x10086db1d*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x10086e0ee*/
  *v75 = 1701667182; /*0x10086db26*/
  v104 = 4; /*0x10086db2c*/
  v105[0] = (unsigned __int64)v75; /*0x10086db37*/
  v105[1] = 4; /*0x10086db3e*/
  if ( v91 < 0 ) /*0x10086db53*/
  {
    v76 = 0; /*0x10086db55*/
    goto LABEL_115; /*0x10086db55*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(4, 1); /*0x10086db68*/
  v76 = 1; /*0x10086db6d*/
  v77 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v91, 1); /*0x10086db7b*/
  if ( !v77 ) /*0x10086db83*/
LABEL_115:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v76, v91); /*0x10086db58*/
  v78 = (__int64)v77; /*0x10086db85*/
  memcpy(v77, a3, v91); /*0x10086db95*/
  v121.i64[1] = v91; /*0x10086db9a*/
  v121.i64[2] = v78; /*0x10086db9e*/
  v121.i64[3] = v91; /*0x10086dba2*/
  v121.i8[0] = 3; /*0x10086dba6*/
  v79 = &v108; /*0x10086dbaa*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v108, &v102, &v104); /*0x10086dbbf*/
  if ( v108.i64[0] == 0x8000000000000000LL ) /*0x10086dbcb*/
  {
    v80 = v108.i64[1]; /*0x10086dbcd*/
    v81 = 32 * v108.i64[3]; /*0x10086dbdb*/
    v120 = *(_QWORD *)(v108.i64[1] + 32 * v108.i64[3] + 24); /*0x10086dbe4*/
    v119 = *(_QWORD *)(v108.i64[1] + 32 * v108.i64[3] + 16); /*0x10086dbed*/
    v82 = *(_QWORD *)(v108.i64[1] + 32 * v108.i64[3]); /*0x10086dbf1*/
    v118 = *(void **)(v108.i64[1] + 32 * v108.i64[3] + 8); /*0x10086dbfa*/
    v117 = v82; /*0x10086dbfe*/
    *(_OWORD *)(v108.i64[1] + v81 + 16) = v121.i128[1]; /*0x10086dc0f*/
    v83 = (__m256i *)v121.i64[1]; /*0x10086dc18*/
    *(_OWORD *)(v80 + v81) = v121.i128[0]; /*0x10086dc21*/
    if ( (_BYTE)v117 != 6 ) /*0x10086dc29*/
    {
      v79 = (__m256i *)&v117; /*0x10086dc32*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v117); /*0x10086dc38*/
    }
  }
  else
  {
    v115 = v111; /*0x10086dc49*/
    v114 = v110; /*0x10086dc57*/
    v113 = v109; /*0x10086dc65*/
    v112 = v108; /*0x10086dc81*/
    v106 = v121; /*0x10086dcb3*/
    v79 = (__m256i *)&v117; /*0x10086dcd0*/
    v83 = &v112; /*0x10086dcd4*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10086dce2*/
      &v117,
      &v112,
      &v106);
  }
  if ( __n != 0x8000000000000000LL ) /*0x10086dcf1*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v79, v83); /*0x10086dcf7*/
    v84 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(11, 1); /*0x10086dd06*/
    if ( !v84 ) /*0x10086dd0e*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 11); /*0x10086e124*/
    qmemcpy(v84, "description", 11); /*0x10086dd1e*/
    v104 = 11; /*0x10086dd28*/
    v105[0] = (unsigned __int64)v84; /*0x10086dd33*/
    v105[1] = 11; /*0x10086dd3a*/
    v121.i64[1] = __n; /*0x10086dd4c*/
    v121.i64[2] = v99; /*0x10086dd57*/
    v121.i64[3] = __n; /*0x10086dd5b*/
    v121.i8[0] = 3; /*0x10086dd5f*/
    v79 = &v108; /*0x10086dd63*/
    alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v108, &v102, &v104); /*0x10086dd78*/
    if ( v108.i64[0] == 0x8000000000000000LL ) /*0x10086dd84*/
    {
      v85 = v108.i64[1]; /*0x10086dd86*/
      v86 = 32 * v108.i64[3]; /*0x10086dd94*/
      v120 = *(_QWORD *)(v108.i64[1] + 32 * v108.i64[3] + 24); /*0x10086dd9d*/
      v119 = *(_QWORD *)(v108.i64[1] + 32 * v108.i64[3] + 16); /*0x10086dda6*/
      v87 = *(_QWORD *)(v108.i64[1] + 32 * v108.i64[3]); /*0x10086ddaa*/
      v118 = *(void **)(v108.i64[1] + 32 * v108.i64[3] + 8); /*0x10086ddb3*/
      v117 = v87; /*0x10086ddb7*/
      *(_OWORD *)(v108.i64[1] + v86 + 16) = v121.i128[1]; /*0x10086ddc8*/
      v83 = (__m256i *)v121.i64[1]; /*0x10086ddd1*/
      *(_OWORD *)(v85 + v86) = v121.i128[0]; /*0x10086ddda*/
      if ( (_BYTE)v117 != 6 ) /*0x10086dde2*/
      {
        v79 = (__m256i *)&v117; /*0x10086dde8*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v117); /*0x10086ddec*/
      }
    }
    else
    {
      v115 = v111; /*0x10086ddfd*/
      v114 = v110; /*0x10086de0b*/
      v113 = v109; /*0x10086de19*/
      v112 = v108; /*0x10086de35*/
      v106 = v121; /*0x10086de67*/
      v79 = (__m256i *)&v117; /*0x10086de84*/
      v83 = &v112; /*0x10086de88*/
      alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10086de96*/
        &v117,
        &v112,
        &v106);
    }
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v79, v83); /*0x10086de9b*/
  v88 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(12, 1); /*0x10086deaa*/
  if ( !v88 ) /*0x10086deb2*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 12); /*0x10086e113*/
  qmemcpy(v88, "input_schema", 12); /*0x10086dec2*/
  v104 = 12; /*0x10086decc*/
  v105[0] = (unsigned __int64)v88; /*0x10086ded7*/
  v105[1] = 12; /*0x10086dede*/
  v121 = v116; /*0x10086def5*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::entry::h44bdabb8dbb90160(&v108, &v102, &v104); /*0x10086df21*/
  if ( v108.i64[0] == 0x8000000000000000LL ) /*0x10086df2d*/
  {
    v120 = *(_QWORD *)(v108.i64[1] + 32 * v108.i64[3] + 24); /*0x10086df46*/
    v119 = *(_QWORD *)(v108.i64[1] + 32 * v108.i64[3] + 16); /*0x10086df4f*/
    v89 = *(_QWORD *)(v108.i64[1] + 32 * v108.i64[3]); /*0x10086df53*/
    v118 = *(void **)(v108.i64[1] + 32 * v108.i64[3] + 8); /*0x10086df5c*/
    v117 = v89; /*0x10086df60*/
    *(__m256i *)(v108.i64[1] + 32 * v108.i64[3]) = v121; /*0x10086df71*/
    if ( (_BYTE)v117 != 6 ) /*0x10086df8b*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v117); /*0x10086df98*/
  }
  else
  {
    v115 = v111; /*0x10086dfa9*/
    v114 = v110; /*0x10086dfb7*/
    v113 = v109; /*0x10086dfc5*/
    v112 = v108; /*0x10086dfe1*/
    v106 = v121; /*0x10086e013*/
    alloc::collections::btree::map::entry::VacantEntry$LT$K$C$V$C$A$GT$::insert_entry::h592f00f571a6b5fa( /*0x10086e045*/
      &v117,
      &v112,
      &v106);
  }
  *(__int64 *)((char *)&v112.i64[2] + 7) = v103; /*0x10086e051*/
  *(__int128 *)((char *)v112.i128 + 7) = v102; /*0x10086e06d*/
  *v96 = 5; /*0x10086e07b*/
  v90 = v112.i64[1]; /*0x10086e085*/
  *(_QWORD *)(v96 + 1) = v112.i64[0]; /*0x10086e08c*/
  *(_OWORD *)(v96 + 9) = __PAIR128__(v112.u64[2], v90); /*0x10086e090*/
  *((_QWORD *)v96 + 3) = *(__int64 *)((char *)&v112.i64[2] + 7); /*0x10086e0a6*/
}