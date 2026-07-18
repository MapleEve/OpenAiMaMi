// mac 1.2.2 NEW codexmate_lib4core12debug_bundle18global_state_sha 0x10085ec10 d=1
__int64 __fastcall codexmate_lib::core::relay::codex_project_state::inspect::h6d022d84eb37f21e(__int64 a1, __int64 a2)
{
  __m256i *v2; // r12
  const void *v4; // rsi
  size_t v5; // r15
  __m256i *v6; // r14
  __m256i *v7; // r14
  __int64 v8; // rax
  __int64 v9; // r15
  __int64 v10; // r14
  __m256i *v11; // rdx
  __int64 v12; // r15
  __int64 v13; // r12
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // r12
  __int64 v17; // r13
  __int64 v18; // rax
  __int64 v19; // r13
  __int64 v20; // r12
  __int64 v21; // r15
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // r15
  __int64 v25; // r13
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 *v29; // rax
  char v30; // r13
  __int64 v31; // r12
  __int64 *v32; // r14
  __int64 v33; // rsi
  __int64 v34; // r15
  __int64 (__fastcall **v35)(); // r12
  char v36; // r12
  __int64 (__fastcall **v37)(); // rax
  __int64 v38; // rcx
  __int64 i; // rax
  __int8 v41; // r15
  __m256i *v42; // r14
  __int64 v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // r14
  _QWORD *v46; // rax
  __int64 v47; // rax
  int v48; // eax
  __m256i *v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rax
  __m256i *v52; // [rsp+0h] [rbp-1D0h]
  __int64 v53; // [rsp+8h] [rbp-1C8h]
  __int64 v54; // [rsp+18h] [rbp-1B8h]
  __int64 v55; // [rsp+20h] [rbp-1B0h]
  __int64 v56; // [rsp+28h] [rbp-1A8h] BYREF
  __int64 (__fastcall **v57)(); // [rsp+30h] [rbp-1A0h]
  __int64 v58; // [rsp+38h] [rbp-198h]
  __m256i *v59; // [rsp+40h] [rbp-190h]
  __m256i *v60; // [rsp+48h] [rbp-188h]
  __int64 (__fastcall **v61)(); // [rsp+50h] [rbp-180h]
  __m256i *v62; // [rsp+58h] [rbp-178h]
  _QWORD v63[2]; // [rsp+60h] [rbp-170h] BYREF
  __int128 v64; // [rsp+70h] [rbp-160h]
  size_t v65; // [rsp+C0h] [rbp-110h] BYREF
  const void *v66; // [rsp+C8h] [rbp-108h]
  size_t v67; // [rsp+D0h] [rbp-100h]
  __int64 v68; // [rsp+D8h] [rbp-F8h]
  unsigned __int64 v69; // [rsp+E0h] [rbp-F0h]
  const void *v70; // [rsp+E8h] [rbp-E8h]
  __int64 v71; // [rsp+F0h] [rbp-E0h]
  __int64 v72; // [rsp+F8h] [rbp-D8h]
  __int64 v73; // [rsp+100h] [rbp-D0h]
  __m256i *v74; // [rsp+108h] [rbp-C8h]
  int v75; // [rsp+114h] [rbp-BCh]
  __int64 v76; // [rsp+118h] [rbp-B8h]
  __m256i *v77; // [rsp+120h] [rbp-B0h] BYREF
  __int64 v78; // [rsp+128h] [rbp-A8h]
  __int64 (__fastcall **v79)(); // [rsp+130h] [rbp-A0h]
  __int64 *v80; // [rsp+138h] [rbp-98h] BYREF
  __m256i v81; // [rsp+140h] [rbp-90h] BYREF
  __int64 v82; // [rsp+160h] [rbp-70h] BYREF
  _BYTE v83[23]; // [rsp+168h] [rbp-68h]
  int v84; // [rsp+184h] [rbp-4Ch]
  unsigned __int64 v85; // [rsp+188h] [rbp-48h]
  _QWORD *v86; // [rsp+190h] [rbp-40h]
  __int64 v87; // [rsp+198h] [rbp-38h]
  char v88; // [rsp+1A3h] [rbp-2Dh] BYREF
  int v89; // [rsp+1A4h] [rbp-2Ch]

  v4 = *(const void **)(a2 + 8); /*0x10085ec2a*/
  v68 = a2; /*0x10085ec2e*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v65, v4, *(_QWORD *)(a2 + 16), ".codex-global-state.json", 0x18u); /*0x10085ec4d*/
  v5 = v67; /*0x10085ec59*/
  v70 = v66; /*0x10085ec67*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v56, v66, v67); /*0x10085ec71*/
  v6 = (__m256i *)v56; /*0x10085ec76*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h991c0be9976d35ac( /*0x10085ec87*/
    v56,
    v57);
  v69 = 0x8000000000000000LL; /*0x10085ec99*/
  if ( v6 ) /*0x10085eca0*/
  {
    v89 = 0; /*0x10085eca2*/
    v87 = 0x8000000000000000LL; /*0x10085eca9*/
LABEL_12:
    v81.i8[0] = 6; /*0x10085edbd*/
    v85 = 0x8000000000000000LL; /*0x10085edc4*/
LABEL_13:
    LOBYTE(v2) = 1; /*0x10085edc8*/
    LODWORD(v86) = 0; /*0x10085edcb*/
    v84 = 0; /*0x10085edd2*/
LABEL_14:
    v77 = nullptr; /*0x10085edd9*/
    v79 = nullptr; /*0x10085ede4*/
    v11 = nullptr; /*0x10085edef*/
    goto LABEL_15; /*0x10085edef*/
  }
  std::fs::read_to_string::inner::hcce2334f4117b5b3(&v77, v70, v5); /*0x10085ecc6*/
  v2 = v77; /*0x10085eccb*/
  if ( v77 == (__m256i *)0x8000000000000000LL ) /*0x10085ecd5*/
  {
    v7 = (__m256i *)v78; /*0x10085ecdb*/
    v80 = (__int64 *)v78; /*0x10085ece2*/
    v81.i64[0] = 0; /*0x10085ece9*/
    *(__int128 *)((char *)v81.i128 + 8) = 1u; /*0x10085ecf4*/
    v58 = 1610612768; /*0x10085ed07*/
    v56 = (__int64)&v81; /*0x10085ed19*/
    v57 = &anon_2bd54b5feae36596fad298fd65f30afc_1301; /*0x10085ed27*/
    if ( _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0(&v80, &v56) ) /*0x10085ed3c*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10085f9e2*/
        (__int64)&anon_2bd54b5feae36596fad298fd65f30afc_1302,
        55,
        (__int64)&v88,
        (__int64)&anon_2bd54b5feae36596fad298fd65f30afc_1320,
        (__int64)&anon_2bd54b5feae36596fad298fd65f30afc_1304);
    v73 = v81.i64[1]; /*0x10085ed5b*/
    v87 = v81.i64[0]; /*0x10085ed5b*/
    v55 = v81.i64[2]; /*0x10085ed66*/
    LODWORD(v8) = (unsigned __int8)v7 & 3; /*0x10085ed70*/
    if ( (_DWORD)v8 == 1 ) /*0x10085ed76*/
    {
      LODWORD(v2) = (_DWORD)v7 - 1; /*0x10085ed78*/
      v9 = *(__int64 *)((char *)&v7[-1].i64[3] + 7); /*0x10085ed7c*/
      v10 = *(__int64 *)((char *)v7->i64 + 7); /*0x10085ed80*/
      if ( *(_QWORD *)v10 ) /*0x10085ed84*/
        (*(void (__fastcall **)(__int64))v10)(v9); /*0x10085ed8f*/
      if ( *(_QWORD *)(v10 + 8) ) /*0x10085ed91*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10085eda1*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10085edb3*/
    }
    LOBYTE(v8) = 1; /*0x10085edb8*/
    v89 = v8; /*0x10085edba*/
    goto LABEL_12; /*0x10085edba*/
  }
  v56 = v78; /*0x10085f3cd*/
  v57 = v79; /*0x10085f3d4*/
  v58 = 0; /*0x10085f3db*/
  v59 = nullptr; /*0x10085f3e6*/
  v60 = (__m256i *)v78; /*0x10085f3f1*/
  v61 = v79; /*0x10085f3f8*/
  serde_json::de::from_trait::hd7f835a315d0fab8(v81.i64, &v56); /*0x10085f40d*/
  v41 = v81.i8[0]; /*0x10085f412*/
  if ( v81.u8[0] != 5 ) /*0x10085f41e*/
  {
    if ( v81.u8[0] == 6 ) /*0x10085f428*/
    {
      v80 = (__int64 *)v81.i64[1]; /*0x10085f435*/
      v77 = nullptr; /*0x10085f43c*/
      v78 = 1; /*0x10085f447*/
      v79 = nullptr; /*0x10085f452*/
      v58 = 1610612768; /*0x10085f45d*/
      v56 = (__int64)&v77; /*0x10085f468*/
      v57 = &anon_2bd54b5feae36596fad298fd65f30afc_1301; /*0x10085f476*/
      if ( (unsigned __int8)_$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d( /*0x10085f48b*/
                              &v80,
                              &v56) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10085fa07*/
          (__int64)&anon_2bd54b5feae36596fad298fd65f30afc_1302,
          55,
          (__int64)&v88,
          (__int64)&anon_2bd54b5feae36596fad298fd65f30afc_1320,
          (__int64)&anon_2bd54b5feae36596fad298fd65f30afc_1304);
      v85 = (unsigned __int64)v77; /*0x10085f49f*/
      v42 = (__m256i *)v78; /*0x10085f4a3*/
      v71 = (__int64)v79; /*0x10085f4b1*/
      v43 = core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h9ceea406a49948b7(&v80); /*0x10085f4bf*/
      if ( !v2 ) /*0x10085f4c7*/
        goto LABEL_77; /*0x10085f4c7*/
    }
    else
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10085f780*/
      v71 = 34; /*0x10085f78a*/
      v49 = (__m256i *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x22u, 1u); /*0x10085f79b*/
      if ( !v49 ) /*0x10085f7a3*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x10085fa2b*/
      v42 = v49; /*0x10085f7a9*/
      qmemcpy(v49, "global-state root is not an object", 34); /*0x10085f7e0*/
      LODWORD(v43) = 34; /*0x10085f7ea*/
      v85 = 34; /*0x10085f7ef*/
      if ( !v2 ) /*0x10085f7f6*/
        goto LABEL_77; /*0x10085f7f6*/
    }
    v43 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10085f4d4*/
LABEL_77:
    v74 = v42; /*0x10085f4d9*/
    if ( v41 != 6 ) /*0x10085f4ee*/
      v43 = core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v81); /*0x10085f4f7*/
    v81.i8[0] = 6; /*0x10085f4fc*/
    LOBYTE(v43) = 1; /*0x10085f503*/
    v89 = v43; /*0x10085f505*/
    v87 = 0x8000000000000000LL; /*0x10085f508*/
    goto LABEL_13; /*0x10085f50c*/
  }
  *(_QWORD *)&v83[15] = v81.i64[3]; /*0x10085f684*/
  *(_OWORD *)v83 = *(__int128 *)((char *)v81.i128 + 9); /*0x10085f69e*/
  v82 = *(__int64 *)((char *)v81.i64 + 1); /*0x10085f6a2*/
  if ( v2 ) /*0x10085f6a9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10085f6b6*/
  v81.i8[0] = 5; /*0x10085f6bb*/
  *(__int64 *)((char *)v81.i64 + 1) = v82; /*0x10085f6ca*/
  *(__int128 *)((char *)v81.i128 + 9) = *(_OWORD *)v83; /*0x10085f6d1*/
  v81.i64[3] = *(_QWORD *)&v83[15]; /*0x10085f6e4*/
  v47 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10085f6fb*/
          &unk_101599C15,
          0x16u,
          (__int64)&v81);
  if ( !v47 || *(_BYTE *)v47 != 4 ) /*0x10085f716*/
  {
    LOBYTE(v47) = 1; /*0x10085f848*/
    LODWORD(v86) = v47; /*0x10085f84a*/
    LODWORD(v2) = 0; /*0x10085f84d*/
    LOBYTE(v47) = 1; /*0x10085f850*/
    v89 = v47; /*0x10085f852*/
    v85 = 0x8000000000000000LL; /*0x10085f855*/
    LOBYTE(v47) = 1; /*0x10085f859*/
    v84 = v47; /*0x10085f85b*/
    v87 = 0x8000000000000000LL; /*0x10085f85e*/
    goto LABEL_14; /*0x10085f862*/
  }
  _$LT$alloc..collections..btree..set..BTreeSet$LT$T$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$T$GT$$GT$::from_iter::h339830d6de6beb82( /*0x10085f732*/
    &v56,
    *(_QWORD *)(v47 + 16),
    *(_QWORD *)(v47 + 16) + 32LL * *(_QWORD *)(v47 + 24));
  v48 = v58; /*0x10085f737*/
  v79 = (__int64 (__fastcall **)())v58; /*0x10085f73e*/
  v11 = (__m256i *)v56; /*0x10085f745*/
  v78 = (__int64)v57; /*0x10085f753*/
  v77 = (__m256i *)v56; /*0x10085f75a*/
  LOBYTE(v48) = 1; /*0x10085f761*/
  LODWORD(v86) = v48; /*0x10085f763*/
  LODWORD(v2) = 0; /*0x10085f766*/
  LOBYTE(v48) = 1; /*0x10085f769*/
  v89 = v48; /*0x10085f76b*/
  v85 = 0x8000000000000000LL; /*0x10085f76e*/
  LOBYTE(v48) = 1; /*0x10085f772*/
  v84 = v48; /*0x10085f774*/
  v87 = 0x8000000000000000LL; /*0x10085f777*/
LABEL_15:
  v52 = v11; /*0x10085edf1*/
  v75 = (int)v2; /*0x10085ee09*/
  codexmate_lib::core::relay::codex_project_state::collect_project_state_from_active_db::h4755e45a6a30ea90(&v56, v68); /*0x10085ee10*/
  if ( (_BYTE)v2 ) /*0x10085ee18*/
  {
    v12 = 0; /*0x10085ee1a*/
    v13 = 0; /*0x10085ee1d*/
    v76 = 0; /*0x10085ee20*/
    v14 = 0; /*0x10085ee2b*/
LABEL_51:
    v28 = 0; /*0x10085f0bc*/
    goto LABEL_52; /*0x10085f0bc*/
  }
  v15 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10085ee46*/
          &unk_101599CE6,
          0x1Eu,
          (__int64)&v81);
  if ( !v15 || *(_BYTE *)v15 != 4 ) /*0x10085ee53*/
  {
    v82 = 0; /*0x10085eeb7*/
    v76 = 0; /*0x10085eec5*/
    goto LABEL_26; /*0x10085eed7*/
  }
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h36f96aca274b7fbb( /*0x10085ee68*/
    &v82,
    *(_QWORD *)(v15 + 16),
    *(_QWORD *)(v15 + 16) + 32LL * *(_QWORD *)(v15 + 24));
  if ( !*(_QWORD *)&v83[8] ) /*0x10085ee78*/
  {
    v76 = 0; /*0x10085f801*/
    if ( !v82 ) /*0x10085f813*/
      goto LABEL_26; /*0x10085f813*/
    goto LABEL_25; /*0x10085f813*/
  }
  v16 = *(_QWORD *)v83 + 8LL; /*0x10085ee7e*/
  v76 = *(_QWORD *)&v83[8]; /*0x10085ee82*/
  v17 = *(_QWORD *)&v83[8]; /*0x10085ee89*/
  do /*0x10085ee97*/
  {
    if ( *(_QWORD *)(v16 - 8) ) /*0x10085ee9d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10085eeb0*/
    v16 += 24; /*0x10085ee90*/
    --v17; /*0x10085ee94*/
  }
  while ( v17 ); /*0x10085ee97*/
  if ( v82 ) /*0x10085f5ad*/
LABEL_25:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10085eed9*/
LABEL_26:
  v18 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10085eeee*/
          &unk_101599D5D,
          0xDu,
          (__int64)&v81);
  if ( !v18 || *(_BYTE *)v18 != 4 ) /*0x10085ef0e*/
  {
    v82 = 0; /*0x10085ef77*/
    v13 = 0; /*0x10085ef85*/
    goto LABEL_35; /*0x10085ef8f*/
  }
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h36f96aca274b7fbb( /*0x10085ef23*/
    &v82,
    *(_QWORD *)(v18 + 16),
    *(_QWORD *)(v18 + 16) + 32LL * *(_QWORD *)(v18 + 24));
  if ( !*(_QWORD *)&v83[8] ) /*0x10085ef33*/
  {
    v13 = 0; /*0x10085f81e*/
    if ( !v82 ) /*0x10085f828*/
      goto LABEL_35; /*0x10085f828*/
    goto LABEL_34; /*0x10085f828*/
  }
  v19 = *(_QWORD *)&v83[8]; /*0x10085ef39*/
  v20 = *(_QWORD *)v83 + 8LL; /*0x10085ef3c*/
  v21 = *(_QWORD *)&v83[8]; /*0x10085ef40*/
  do /*0x10085ef57*/
  {
    if ( *(_QWORD *)(v20 - 8) ) /*0x10085ef5d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10085ef70*/
    v20 += 24; /*0x10085ef50*/
    --v19; /*0x10085ef54*/
  }
  while ( v19 ); /*0x10085ef57*/
  v13 = v21; /*0x10085f5c2*/
  if ( v82 ) /*0x10085f5cc*/
LABEL_34:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10085ef91*/
LABEL_35:
  v22 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10085efa6*/
          &unk_101599D6A,
          0x16u,
          (__int64)&v81);
  if ( !v22 || *(_BYTE *)v22 != 4 ) /*0x10085efc6*/
  {
    v82 = 0; /*0x10085f037*/
    v24 = 0; /*0x10085f045*/
    goto LABEL_44; /*0x10085f04f*/
  }
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h36f96aca274b7fbb( /*0x10085efdb*/
    &v82,
    *(_QWORD *)(v22 + 16),
    *(_QWORD *)(v22 + 16) + 32LL * *(_QWORD *)(v22 + 24));
  if ( !*(_QWORD *)&v83[8] ) /*0x10085efeb*/
  {
    v24 = 0; /*0x10085f833*/
    if ( !v82 ) /*0x10085f83d*/
      goto LABEL_44; /*0x10085f83d*/
    goto LABEL_43; /*0x10085f83d*/
  }
  v72 = v13; /*0x10085eff1*/
  v23 = *(_QWORD *)v83 + 8LL; /*0x10085eff8*/
  v24 = *(_QWORD *)&v83[8]; /*0x10085effc*/
  v25 = *(_QWORD *)&v83[8]; /*0x10085efff*/
  do /*0x10085f017*/
  {
    if ( *(_QWORD *)(v23 - 8) ) /*0x10085f01d*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10085f030*/
    v23 += 24; /*0x10085f010*/
    --v25; /*0x10085f014*/
  }
  while ( v25 ); /*0x10085f017*/
  v13 = v72; /*0x10085f5e1*/
  if ( v82 ) /*0x10085f5ef*/
LABEL_43:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10085f051*/
LABEL_44:
  v26 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10085f066*/
          &unk_101599C15,
          0x16u,
          (__int64)&v81);
  v14 = v24; /*0x10085f07e*/
  if ( v26 && *(_BYTE *)v26 == 4 ) /*0x10085f089*/
    v12 = *(_QWORD *)(v26 + 24); /*0x10085f08b*/
  else
    v12 = 0; /*0x10085f091*/
  v27 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10085f0a7*/
          &unk_101599D80,
          0x1Bu,
          (__int64)&v81);
  if ( !v27 || *(_BYTE *)v27 != 5 ) /*0x10085f0b4*/
    goto LABEL_51; /*0x10085f0b4*/
  v28 = *(_QWORD *)(v27 + 24); /*0x10085f0b6*/
LABEL_52:
  v29 = &v82; /*0x10085f0be*/
  v72 = v13; /*0x10085f0c6*/
  v53 = v14; /*0x10085f0cd*/
  v54 = v28; /*0x10085f0db*/
  if ( v87 != 0x8000000000000000LL || v61 ) /*0x10085f0ec*/
    goto LABEL_54; /*0x10085f0ec*/
  if ( (_BYTE)v89 ) /*0x10085f515*/
  {
    if ( !(_BYTE)v86 ) /*0x10085f51f*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10085f525*/
      v44 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x25u, 1u); /*0x10085f53a*/
      if ( v44 ) /*0x10085f542*/
      {
        *(_QWORD *)((char *)v44 + 29) = 0x909EE6A3A7E895B3LL; /*0x10085f552*/
        v44[3] = 0xE895B3E6A097E620LL; /*0x10085f560*/
        v86 = v44; /*0x10085f58a*/
        qmemcpy(v44, ".codex-global-state.json", 24); /*0x10085f58e*/
        v45 = 37; /*0x10085f591*/
LABEL_120:
        v69 = v45; /*0x10085f9aa*/
        v82 = v45; /*0x10085f9b1*/
        v29 = (__int64 *)&v80; /*0x10085f9b5*/
        v30 = 1; /*0x10085f9bc*/
        goto LABEL_55; /*0x10085f9bf*/
      }
      goto LABEL_123; /*0x10085f542*/
    }
  }
  else if ( !v58 && v64 == 0 ) /*0x10085f60c*/
  {
    goto LABEL_54; /*0x10085f60c*/
  }
  if ( !v76 && v58 ) /*0x10085f86f*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10085f875*/
    v50 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x37u, 1u); /*0x10085f88a*/
    if ( v50 ) /*0x10085f892*/
    {
      *(_QWORD *)((char *)v50 + 47) = 0x64776320AE9BE7B9LL; /*0x10085f8a2*/
      v50[5] = 0xB9A1E9A89CE598ADLL; /*0x10085f8b0*/
      v50[4] = 0xE593BAE58BA8E7BFLL; /*0x10085f8be*/
      v50[3] = 0xBAE786BDE48CBCEFLL; /*0x10085f8cc*/
      v50[2] = 0xBAA9E7BAB8E4A38FLL; /*0x10085f8da*/
      v50[1] = 0xE5A585E5AE9BE7B9LL; /*0x10085f8e8*/
      v86 = v50; /*0x10085f8f6*/
      *v50 = 0xA1E9207865646F43LL; /*0x10085f8fa*/
      v45 = 55; /*0x10085f8fd*/
      goto LABEL_120; /*0x10085f903*/
    }
    goto LABEL_123; /*0x10085f892*/
  }
  if ( *((_QWORD *)&v64 + 1) ) /*0x10085f634*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10085f63a*/
    v46 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x43u, 1u); /*0x10085f64f*/
    if ( v46 ) /*0x10085f657*/
    {
      v45 = 67; /*0x10085f664*/
      v86 = v46; /*0x10085f66f*/
      memcpy(v46, &unk_101599B38, 0x43u); /*0x10085f676*/
      goto LABEL_120; /*0x10085f67b*/
    }
LABEL_123:
    v87 = 0x8000000000000000LL; /*0x10085fa0e*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x10085fa1a*/
  }
  v30 = 0; /*0x10085f908*/
  if ( !v28 && (_QWORD)v64 ) /*0x10085f91c*/
  {
    if ( v76 || v58 ) /*0x10085f92f*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10085f935*/
      v51 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x24u, 1u); /*0x10085f94a*/
      if ( v51 ) /*0x10085f95c*/
      {
        *(_QWORD *)(v51 + 24) = 0xB8E484B0E5A098E6LL; /*0x10085f96c*/
        *(_QWORD *)(v51 + 16) = 0x849AE7AE9BE7B9A1LL; /*0x10085f97a*/
        *(_QWORD *)(v51 + 8) = 0xE9B088E58BA8E7BFLL; /*0x10085f988*/
        *(_QWORD *)v51 = 0xBAE7207865646F43LL; /*0x10085f996*/
        v86 = (_QWORD *)v51; /*0x10085f999*/
        *(_DWORD *)(v51 + 32) = -1163270214; /*0x10085f99d*/
        v45 = 36; /*0x10085f9a4*/
        goto LABEL_120; /*0x10085f9a4*/
      }
      goto LABEL_123; /*0x10085f95c*/
    }
LABEL_54:
    v30 = 0; /*0x10085f0f2*/
  }
LABEL_55:
  *v29 = v69; /*0x10085f0f5*/
  v31 = v82; /*0x10085f0ff*/
  v32 = v80; /*0x10085f103*/
  v33 = v68; /*0x10085f115*/
  codexmate_lib::core::relay::codex_project_state::active_db_path::he8748f26520f8c0b(&v82, v68); /*0x10085f11c*/
  *(_QWORD *)(a1 + 40) = v61; /*0x10085f128*/
  *(_QWORD *)(a1 + 32) = v60; /*0x10085f133*/
  *(_QWORD *)(a1 + 24) = v59; /*0x10085f13e*/
  *(_QWORD *)(a1 + 120) = v31; /*0x10085f142*/
  *(_QWORD *)(a1 + 128) = v86; /*0x10085f14a*/
  *(_QWORD *)(a1 + 136) = v32; /*0x10085f151*/
  *(_QWORD *)(a1 + 16) = v67; /*0x10085f15f*/
  *(_QWORD *)(a1 + 8) = v66; /*0x10085f16a*/
  *(_QWORD *)a1 = v65; /*0x10085f175*/
  *(_BYTE *)(a1 + 216) = v89; /*0x10085f17b*/
  *(_BYTE *)(a1 + 217) = v84; /*0x10085f184*/
  *(_QWORD *)(a1 + 48) = v85; /*0x10085f18e*/
  *(_QWORD *)(a1 + 56) = v74; /*0x10085f199*/
  *(_QWORD *)(a1 + 64) = v71; /*0x10085f1a4*/
  *(_QWORD *)(a1 + 72) = v87; /*0x10085f1ac*/
  *(_QWORD *)(a1 + 80) = v73; /*0x10085f1b7*/
  *(_QWORD *)(a1 + 88) = v55; /*0x10085f1c2*/
  *(_QWORD *)(a1 + 144) = v76; /*0x10085f1cd*/
  *(_QWORD *)(a1 + 152) = v72; /*0x10085f1db*/
  *(_QWORD *)(a1 + 160) = v53; /*0x10085f1e9*/
  *(_QWORD *)(a1 + 168) = v12; /*0x10085f1f7*/
  *(_QWORD *)(a1 + 176) = v54; /*0x10085f205*/
  *(_QWORD *)(a1 + 96) = v82; /*0x10085f210*/
  *(_OWORD *)(a1 + 104) = *(_OWORD *)v83; /*0x10085f218*/
  *(_QWORD *)(a1 + 184) = v62; /*0x10085f22b*/
  v34 = v58; /*0x10085f232*/
  *(_QWORD *)(a1 + 192) = v58; /*0x10085f239*/
  *(_OWORD *)(a1 + 200) = v64; /*0x10085f247*/
  *(_BYTE *)(a1 + 218) = v30; /*0x10085f24e*/
  if ( v34 ) /*0x10085f25f*/
  {
    v35 = v57 + 1; /*0x10085f261*/
    do /*0x10085f277*/
    {
      v33 = (__int64)*(v35 - 1); /*0x10085f279*/
      if ( v33 ) /*0x10085f281*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10085f28c*/
      v35 += 3; /*0x10085f270*/
      --v34; /*0x10085f274*/
    }
    while ( v34 ); /*0x10085f277*/
  }
  if ( v56 ) /*0x10085f2a4*/
  {
    v33 = 24 * v56; /*0x10085f2aa*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10085f2b6*/
  }
  v36 = v75; /*0x10085f2c1*/
  _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::he718097c6c64b5f3( /*0x10085f2c8*/
    v63,
    v33);
  if ( v52 ) /*0x10085f2d7*/
  {
    v37 = v79; /*0x10085f2e0*/
    v57 = nullptr; /*0x10085f2e7*/
    v58 = (__int64)v52; /*0x10085f2f2*/
    v59 = (__m256i *)v78; /*0x10085f2f9*/
    v61 = nullptr; /*0x10085f300*/
    v62 = v52; /*0x10085f30b*/
    v63[0] = v78; /*0x10085f312*/
    v38 = 1; /*0x10085f319*/
  }
  else
  {
    v38 = 0; /*0x10085f320*/
    v37 = nullptr; /*0x10085f322*/
  }
  v56 = v38; /*0x10085f324*/
  v60 = (__m256i *)v38; /*0x10085f32b*/
  v63[1] = v37; /*0x10085f332*/
  alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h6588e1386e58cf7a( /*0x10085f344*/
    (unsigned __int64 *)&v82,
    (__int64)&v56);
  for ( i = v82; v82; i = v82 ) /*0x10085f350*/
  {
    if ( *(_QWORD *)(i + 24LL * *(_QWORD *)&v83[8] + 8) ) /*0x10085f368*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10085f380*/
    alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::h6588e1386e58cf7a( /*0x10085f38b*/
      (unsigned __int64 *)&v82,
      (__int64)&v56);
  }
  if ( !v36 ) /*0x10085f39c*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v81); /*0x10085f3a5*/
  return a1; /*0x10085f3ad*/
}