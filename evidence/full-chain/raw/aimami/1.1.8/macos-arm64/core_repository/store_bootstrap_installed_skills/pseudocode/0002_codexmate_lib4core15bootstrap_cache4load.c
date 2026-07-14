// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND store_bootstrap_installed_skills node 0x100541930 depth=1
__int64 *__fastcall codexmate_lib::core::bootstrap_cache::load::h642b53faa3521cbf(
        __int64 *a1,
        const void *a2,
        size_t a3)
{
  __int64 *v3; // r14
  __int64 v4; // rdx
  __int64 v5; // r15
  __int64 v6; // rcx
  void *v7; // r13
  unsigned __int64 v8; // rdx
  __int64 v9; // rax
  int i; // ebx
  _QWORD *v11; // r12
  __int64 *v12; // r14
  __int64 v13; // rdx
  const void *v14; // rbx
  size_t v15; // r13
  __int64 v16; // rax
  const void *v17; // rsi
  __int64 v18; // rbx
  char v19; // al
  __int64 v20; // rcx
  unsigned __int64 v21; // rcx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rcx
  unsigned __int64 v25; // rsi
  __int64 v26; // rsi
  __int64 v27; // rsi
  unsigned __int64 v28; // rcx
  unsigned __int64 v29; // rax
  unsigned __int64 v30; // rax
  __int64 v31; // rcx
  unsigned __int64 v32; // rsi
  __int64 v33; // rsi
  __int64 v34; // rbx
  __int64 v35; // rax
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rax
  __int64 v39; // r14
  __int64 v40; // rax
  __int64 v41; // rdi
  __int64 v42; // rax
  _QWORD *v43; // r14
  __int64 v44; // rbx
  __int64 v45; // rbx
  unsigned __int64 v46; // rcx
  unsigned __int64 v47; // rsi
  __int64 v48; // rsi
  char v49; // r14
  _BYTE v51[920]; // [rsp+8h] [rbp-F78h] BYREF
  _QWORD __dst[113]; // [rsp+3A0h] [rbp-BE0h] BYREF
  _QWORD v53[116]; // [rsp+728h] [rbp-858h] BYREF
  _QWORD v54[117]; // [rsp+AC8h] [rbp-4B8h] BYREF
  _QWORD v55[3]; // [rsp+E70h] [rbp-110h] BYREF
  _QWORD *v56; // [rsp+E88h] [rbp-F8h] BYREF
  char v57; // [rsp+E90h] [rbp-F0h]
  __int64 *v58; // [rsp+E98h] [rbp-E8h]
  __int64 v59; // [rsp+EA0h] [rbp-E0h]
  __int64 v60; // [rsp+EA8h] [rbp-D8h] BYREF
  const void *v61; // [rsp+EB0h] [rbp-D0h]
  __int64 v62; // [rsp+EB8h] [rbp-C8h]
  size_t v63; // [rsp+EC0h] [rbp-C0h]
  _QWORD v64[3]; // [rsp+EC8h] [rbp-B8h] BYREF
  __int64 v65; // [rsp+EE0h] [rbp-A0h]
  unsigned __int64 v66; // [rsp+EE8h] [rbp-98h]
  unsigned __int64 v67; // [rsp+EF0h] [rbp-90h]
  __int64 v68; // [rsp+EF8h] [rbp-88h]
  __int64 v69; // [rsp+F00h] [rbp-80h]
  __int64 v70; // [rsp+F08h] [rbp-78h]
  char v71; // [rsp+F10h] [rbp-70h]
  int v72; // [rsp+F1Ch] [rbp-64h]
  __int64 v73; // [rsp+F20h] [rbp-60h]
  int v74; // [rsp+F2Ch] [rbp-54h]
  __int64 v75; // [rsp+F30h] [rbp-50h] BYREF
  __int64 v76; // [rsp+F38h] [rbp-48h]
  __int64 v77; // [rsp+F40h] [rbp-40h]
  char v78; // [rsp+F4Fh] [rbp-31h] BYREF
  __int64 v79; // [rsp+F50h] [rbp-30h]

  v3 = a1; /*0x100541944*/
  std::fs::read_to_string::inner::hcce2334f4117b5b3(v54, a2, a3); /*0x10054194e*/
  if ( __OFSUB__(-v54[0], 1) ) /*0x10054195d*/
  {
    if ( (v54[1] & 3) == 1 ) /*0x100541971*/
    {
      v5 = *(_QWORD *)(v54[1] + 7LL); /*0x100541982*/
      if ( *(_QWORD *)v5 ) /*0x100541986*/
        (*(void (__fastcall **)(_QWORD))v5)(*(_QWORD *)(v54[1] - 1LL)); /*0x100541991*/
      if ( *(_QWORD *)(v5 + 8) ) /*0x100541993*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005419a3*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005419b5*/
      v3 = a1; /*0x1005419ba*/
    }
    goto LABEL_95; /*0x1005419bd*/
  }
  v58 = a1; /*0x1005419c2*/
  v73 = v54[0]; /*0x1005419c9*/
  v65 = v54[1]; /*0x1005419db*/
  v66 = v54[2]; /*0x1005419e2*/
  v67 = 0; /*0x1005419e9*/
  v68 = 0; /*0x1005419f4*/
  v69 = v54[1]; /*0x1005419ff*/
  v70 = v54[2]; /*0x100541a03*/
  v64[0] = 0; /*0x100541a07*/
  v64[1] = 1; /*0x100541a12*/
  v64[2] = 0; /*0x100541a1d*/
  v71 = 0x80; /*0x100541a28*/
  if ( !v54[2] ) /*0x100541a2f*/
  {
LABEL_13:
    v54[0] = 5; /*0x100541a6a*/
    v9 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8(v64, v54, v4); /*0x100541a83*/
    goto LABEL_88; /*0x100541a88*/
  }
  v6 = 1; /*0x100541a34*/
  v7 = &loc_100002600; /*0x100541a39*/
  while ( 1 ) /*0x100541a43*/
  {
    v8 = *(unsigned __int8 *)(v54[1] + v6 - 1); /*0x100541a43*/
    if ( v8 > 0x20 || !_bittest64((const __int64 *)&v7, v8) ) /*0x100541a4f*/
      break; /*0x100541a4f*/
    v67 = v6; /*0x100541a55*/
    v4 = v6 - v54[2] + 1; /*0x100541a5c*/
    ++v6; /*0x100541a61*/
    if ( v4 == 1 ) /*0x100541a68*/
      goto LABEL_13; /*0x100541a68*/
  }
  if ( (_DWORD)v8 != 123 ) /*0x100541a90*/
  {
    v45 = serde_json::de::Deserializer$LT$R$GT$::peek_invalid_type::h3c574fc43dc8363f(v64, &v78, &unk_1015334B0); /*0x100542359*/
    goto LABEL_87; /*0x10054235c*/
  }
  v79 = v54[1]; /*0x100541a96*/
  v71 = 127; /*0x100541a9a*/
  v67 = v6; /*0x100541a9e*/
  v56 = v64; /*0x100541aac*/
  v57 = 1; /*0x100541ab3*/
  v75 = 0; /*0x100541aba*/
  v76 = 8; /*0x100541ac2*/
  v77 = 0; /*0x100541aca*/
  for ( i = 0; ; i = 1 ) /*0x100541ad9*/
  {
    while ( 1 ) /*0x100541ae5*/
    {
      _$LT$serde_json..de..MapAccess$LT$R$GT$$u20$as$u20$serde_core..de..MapAccess$GT$::next_key_seed::has_next_key::h2382fe6e42f05cc2( /*0x100541ae5*/
        v54,
        &v56);
      if ( LOBYTE(v54[0]) == 1 ) /*0x100541af1*/
      {
        v14 = (const void *)v54[1]; /*0x100541e9d*/
        goto LABEL_67; /*0x100541ea8*/
      }
      if ( BYTE1(v54[0]) != 1 ) /*0x100541afe*/
      {
        if ( (i & 1) != 0 ) /*0x100541eb0*/
        {
          _$LT$serde..private..de..FlatMapDeserializer$LT$E$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_struct::h1c78158185cc2692( /*0x100541eda*/
            v54,
            &v75,
            &unk_1012C8B48,
            21,
            &off_1015327E8,
            5);
          v39 = v54[0]; /*0x100541edf*/
          v14 = (const void *)v54[1]; /*0x100541ee6*/
          if ( v54[0] == 2 ) /*0x100541ef1*/
            goto LABEL_67; /*0x100541ef1*/
          memcpy(__dst, &v54[2], sizeof(__dst)); /*0x100541f0a*/
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h828c95178eb6635b(&v75); /*0x100541f13*/
          goto LABEL_68; /*0x100541f18*/
        }
        v53[0] = &unk_1012C8816; /*0x100541f34*/
        v53[1] = 13; /*0x100541f3b*/
        v54[0] = v53; /*0x100541f4d*/
        v54[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x100541f5b*/
        v40 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::hfa6b64d0ab6dd310(&anon_3e4c14ac1826b92abbb84b981a88c995_1); /*0x100541f74*/
LABEL_61:
        v14 = (const void *)v40; /*0x100541f79*/
        goto LABEL_67; /*0x100541f7c*/
      }
      v11 = v56; /*0x100541b04*/
      v12 = v56 + 3; /*0x100541b0b*/
      ++v56[5]; /*0x100541b10*/
      v11[2] = 0; /*0x100541b15*/
      _$LT$serde_json..read..StrRead$u20$as$u20$serde_json..read..Read$GT$::parse_str::hc59e2fa0c0b56d18(v54, v12, v11); /*0x100541b27*/
      v74 = i; /*0x100541b2c*/
      v14 = (const void *)v54[1]; /*0x100541b36*/
      if ( v54[0] == 2 ) /*0x100541b41*/
        goto LABEL_67; /*0x100541b41*/
      v15 = v54[2]; /*0x100541b47*/
      if ( (v54[0] & 1) != 0 ) /*0x100541b50*/
        break; /*0x100541b50*/
      v19 = 13; /*0x100541bd0*/
      if ( v54[2] == 13 ) /*0x100541bd6*/
      {
        v13 = *(_QWORD *)v54[1] ^ 0x6556616D65686373LL | *(_QWORD *)(v54[1] + 5LL) ^ 0x6E6F697372655661LL; /*0x100541bfd*/
        if ( !v13 ) /*0x100541c00*/
          goto LABEL_26; /*0x100541c00*/
        v20 = 13; /*0x100541cd3*/
      }
      else
      {
        v20 = v54[2]; /*0x100541cce*/
      }
LABEL_41:
      LOBYTE(v60) = v19; /*0x100541cd8*/
      v61 = v14; /*0x100541cde*/
      v62 = v20; /*0x100541ce5*/
      v63 = v15; /*0x100541cec*/
      v28 = v11[4]; /*0x100541cf3*/
      v29 = v11[5]; /*0x100541cf8*/
      v7 = &loc_100002600; /*0x100541d00*/
      if ( v29 >= v28 ) /*0x100541d0a*/
      {
LABEL_64:
        v55[0] = 3; /*0x100541f8b*/
        v42 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8(v11, v55, v13); /*0x100541fa0*/
LABEL_65:
        v14 = (const void *)v42; /*0x100541fa5*/
LABEL_66:
        core::ptr::drop_in_place$LT$serde_core..private..content..Content$GT$::h72bab24ea874f13d(&v60); /*0x100541fac*/
        goto LABEL_67; /*0x100541fb3*/
      }
      v13 = *v12; /*0x100541d10*/
      v30 = v29 + 1; /*0x100541d13*/
      v31 = -(__int64)v28; /*0x100541d16*/
      while ( 1 ) /*0x100541d19*/
      {
        v32 = *(unsigned __int8 *)(v13 + v30 - 1); /*0x100541d19*/
        if ( v32 > 0x3A ) /*0x100541d22*/
          goto LABEL_105; /*0x100541d22*/
        if ( !_bittest64((const __int64 *)&v7, v32) ) /*0x100541d28*/
          break; /*0x100541d28*/
        v11[5] = v30; /*0x100541d2e*/
        v33 = v31 + v30++ + 1; /*0x100541d33*/
        if ( v33 == 1 ) /*0x100541d3f*/
          goto LABEL_64; /*0x100541d3f*/
      }
      if ( v32 != 58 ) /*0x100541d4a*/
      {
LABEL_105:
        v55[0] = 6; /*0x100542361*/
        v42 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8(v11, v55, v13); /*0x100542376*/
        goto LABEL_65; /*0x10054237b*/
      }
      v11[5] = v30; /*0x100541d50*/
      serde_core::de::Deserializer::__deserialize_content_v1::ha85b1cd4f395f5a2(v53, v11, v13, v31); /*0x100541d5f*/
      if ( LOBYTE(v53[0]) == 22 ) /*0x100541d71*/
      {
        v14 = (const void *)v53[1]; /*0x1005422bc*/
        goto LABEL_66; /*0x1005422c3*/
      }
      v54[4] = v53[0]; /*0x100541d8a*/
      v54[7] = v53[3]; /*0x100541d9e*/
      v54[6] = v53[2]; /*0x100541da2*/
      v54[2] = v62; /*0x100541dad*/
      v54[1] = v61; /*0x100541dc2*/
      v54[0] = v60; /*0x100541dc9*/
      v54[3] = v63; /*0x100541dd7*/
      v54[5] = v53[1]; /*0x100541de4*/
      v34 = v77; /*0x100541deb*/
      if ( v77 == v75 ) /*0x100541df3*/
        alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::h7dcd16e4969e8b44(&v75); /*0x100541df9*/
      v35 = v76; /*0x100541dfe*/
      v36 = v34 << 6; /*0x100541e05*/
      *(_QWORD *)(v76 + v36 + 56) = v54[7]; /*0x100541e10*/
      *(_QWORD *)(v35 + v36 + 48) = v54[6]; /*0x100541e1c*/
      *(_QWORD *)(v35 + v36 + 40) = v54[5]; /*0x100541e28*/
      *(_QWORD *)(v35 + v36 + 32) = v54[4]; /*0x100541e34*/
      *(_QWORD *)(v35 + v36 + 24) = v54[3]; /*0x100541e40*/
      *(_QWORD *)(v35 + v36 + 16) = v54[2]; /*0x100541e4c*/
      v37 = v54[0]; /*0x100541e51*/
      *(_QWORD *)(v35 + v36 + 8) = v54[1]; /*0x100541e5f*/
      *(_QWORD *)(v35 + v36) = v37; /*0x100541e64*/
      v77 = v34 + 1; /*0x100541e6b*/
      i = v74; /*0x100541e6f*/
    }
    if ( v54[2] != 13 ) /*0x100541b56*/
    {
      v27 = v59; /*0x100541cb1*/
      if ( v54[2] < 0LL ) /*0x100541cb8*/
      {
        v41 = 0; /*0x100541f7e*/
      }
      else
      {
        if ( !v54[2] ) /*0x100541cbe*/
        {
          v16 = 1; /*0x100541cc4*/
          goto LABEL_23; /*0x100541cc9*/
        }
LABEL_22:
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100541b86*/
        v16 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v15, 1u); /*0x100541b93*/
        if ( v16 ) /*0x100541b9b*/
        {
LABEL_23:
          v17 = v14; /*0x100541ba1*/
          v18 = v16; /*0x100541ba7*/
          memcpy((void *)v16, v17, v15); /*0x100541bad*/
          v19 = 12; /*0x100541bb2*/
          v59 = v18; /*0x100541bb4*/
          v20 = v18; /*0x100541bbb*/
          v14 = (const void *)v15; /*0x100541bbe*/
          goto LABEL_41; /*0x100541bc1*/
        }
        v27 = v15; /*0x100542380*/
        v41 = 1; /*0x100542383*/
      }
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v41, v27); /*0x100541f84*/
    }
    v13 = 0x6E6F697372655661LL; /*0x100541b70*/
    if ( *(_QWORD *)v54[1] ^ 0x6556616D65686373LL | *(_QWORD *)(v54[1] + 5LL) ^ 0x6E6F697372655661LL ) /*0x100541b7d*/
      goto LABEL_22; /*0x100541b80*/
LABEL_26:
    if ( v74 ) /*0x100541c0a*/
    {
      v53[0] = &unk_1012C8816; /*0x1005422cf*/
      v53[1] = 13; /*0x1005422d6*/
      v54[0] = v53; /*0x1005422e8*/
      v54[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x1005422f6*/
      v40 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::hfa6b64d0ab6dd310(&anon_3e4c14ac1826b92abbb84b981a88c995_5); /*0x10054230f*/
      v7 = &loc_100002600; /*0x100542314*/
      goto LABEL_61; /*0x10054231e*/
    }
    v21 = v11[4]; /*0x100541c10*/
    v22 = v11[5]; /*0x100541c15*/
    v7 = &loc_100002600; /*0x100541c1d*/
    if ( v22 >= v21 ) /*0x100541c27*/
    {
LABEL_52:
      v54[0] = 3; /*0x100541e77*/
      v38 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8(v11, v54, v13); /*0x100541e8c*/
      goto LABEL_53; /*0x100541e8c*/
    }
    v13 = *v12; /*0x100541c2d*/
    v23 = v22 + 1; /*0x100541c30*/
    v24 = -(__int64)v21; /*0x100541c33*/
    while ( 1 ) /*0x100541c36*/
    {
      v25 = *(unsigned __int8 *)(v13 + v23 - 1); /*0x100541c36*/
      if ( v25 > 0x3A ) /*0x100541c3f*/
        goto LABEL_103; /*0x100541c3f*/
      if ( !_bittest64((const __int64 *)&v7, v25) ) /*0x100541c45*/
        break; /*0x100541c45*/
      v11[5] = v23; /*0x100541c4b*/
      v26 = v24 + v23++ + 1; /*0x100541c50*/
      if ( v26 == 1 ) /*0x100541c5c*/
        goto LABEL_52; /*0x100541c5c*/
    }
    if ( v25 != 58 ) /*0x100541c74*/
      break; /*0x100541c74*/
    v11[5] = v23; /*0x100541c7a*/
    _$LT$$RF$mut$u20$serde_json..de..Deserializer$LT$R$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_i32::hb5f8d7095dc734cd( /*0x100541c89*/
      v53,
      v11);
    if ( LODWORD(v53[0]) == 1 ) /*0x100541c95*/
    {
      v14 = (const void *)v53[1]; /*0x100541f1d*/
      goto LABEL_67; /*0x100541f1d*/
    }
    v72 = HIDWORD(v53[0]); /*0x100541ca1*/
  }
LABEL_103:
  v54[0] = 6; /*0x100542323*/
  v38 = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8(v11, v54, v13); /*0x100542338*/
LABEL_53:
  v14 = (const void *)v38; /*0x100541e91*/
LABEL_67:
  v39 = 2; /*0x100541fb8*/
  _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h828c95178eb6635b(&v75); /*0x100541fc2*/
LABEL_68:
  if ( v75 ) /*0x100541fce*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100541fdd*/
  ++v71; /*0x100541fe2*/
  v53[0] = v39; /*0x100541fe5*/
  v53[1] = v14; /*0x100541fec*/
  memcpy(&v53[2], __dst, 0x388u); /*0x100542006*/
  LODWORD(v53[115]) = v72; /*0x10054200e*/
  v43 = (_QWORD *)serde_json::de::Deserializer$LT$R$GT$::end_map::hbe0dd76bfbe93b26(v64); /*0x100542020*/
  memcpy(v54, v53, 0x3A0u); /*0x100542036*/
  v54[116] = v43; /*0x10054203b*/
  v44 = v54[0]; /*0x100542042*/
  if ( v54[0] == 2 ) /*0x10054204d*/
  {
    v45 = v54[1]; /*0x10054204f*/
    if ( v43 ) /*0x100542059*/
    {
      if ( *v43 == 1 ) /*0x100542066*/
      {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf04cb2eb174fad4f(v43 + 1); /*0x100542166*/
      }
      else if ( !*v43 && v43[2] ) /*0x100542075*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10054208b*/
      }
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100542178*/
    }
LABEL_87:
    v9 = serde_json::error::Error::fix_position::hcddea6c8e528a7ec(v45, v64); /*0x10054217d*/
LABEL_88:
    v53[1] = v9; /*0x10054218c*/
    v53[0] = 2; /*0x100542193*/
LABEL_89:
    v49 = 1; /*0x10054219e*/
    v44 = 2; /*0x1005421a1*/
    if ( v64[0] ) /*0x1005421b0*/
      goto LABEL_90; /*0x1005421b0*/
  }
  else
  {
    if ( v43 ) /*0x100542098*/
    {
      core::ptr::drop_in_place$LT$codexmate_lib..core..bootstrap_cache..BootstrapStatePayload$GT$::h7507b3419dbdcb88(v54); /*0x1005420a1*/
      v45 = (__int64)v43; /*0x1005420a6*/
      goto LABEL_87; /*0x1005420a9*/
    }
    memcpy(&v53[2], &v54[2], 0x390u); /*0x1005420c8*/
    v53[0] = v54[0]; /*0x1005420cd*/
    v53[1] = v54[1]; /*0x1005420d4*/
    memcpy(v54, v53, 0x3A0u); /*0x1005420ee*/
    if ( v67 < v66 ) /*0x100542104*/
    {
      v46 = v67 + 1; /*0x100542110*/
      while ( 1 ) /*0x100542120*/
      {
        v47 = *(unsigned __int8 *)(v65 + v46 - 1); /*0x100542120*/
        if ( v47 > 0x20 || !_bittest64((const __int64 *)&v7, v47) ) /*0x10054212f*/
          break; /*0x10054212f*/
        v67 = v46; /*0x100542139*/
        v48 = v46 - v66 + 1; /*0x100542140*/
        ++v46; /*0x100542145*/
        if ( v48 == 1 ) /*0x10054214c*/
          goto LABEL_83; /*0x10054214c*/
      }
      __dst[0] = 22; /*0x10054227b*/
      v53[1] = serde_json::de::Deserializer$LT$R$GT$::peek_error::hbe9fa5f754bebae8(v64, __dst, v65); /*0x100542299*/
      v53[0] = 2; /*0x1005422a0*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..bootstrap_cache..BootstrapStatePayload$GT$::h7507b3419dbdcb88(v54); /*0x1005422b2*/
      goto LABEL_89; /*0x1005422b7*/
    }
LABEL_83:
    v49 = 0; /*0x10054214e*/
    if ( v64[0] ) /*0x10054215b*/
LABEL_90:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005421b2*/
  }
  if ( v49 ) /*0x1005421c6*/
  {
    v44 = 2; /*0x1005421c8*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$codexmate_lib..core..bootstrap_cache..BootstrapCacheFile$C$serde_json..error..Error$GT$$GT$::h2f239a85726f8824(v53); /*0x1005421d4*/
    if ( v73 ) /*0x1005421e0*/
      goto LABEL_93; /*0x1005421e0*/
  }
  else
  {
    memcpy(v51, &v53[1], sizeof(v51)); /*0x10054223e*/
    if ( v73 ) /*0x10054224a*/
LABEL_93:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005421e2*/
  }
  v3 = v58; /*0x1005421f2*/
  if ( (_DWORD)v44 == 2 ) /*0x1005421f9*/
  {
LABEL_95:
    *v3 = 0; /*0x1005421fb*/
    v3[2] = 3; /*0x10054220c*/
    v3[87] = 0x8000000000000000LL; /*0x100542214*/
    v3[99] = 0x8000000000000000LL; /*0x10054221b*/
    v3[107] = 0x8000000000000000LL; /*0x100542222*/
  }
  else
  {
    memcpy(v58 + 1, v51, 0x390u); /*0x10054225e*/
    *v3 = v44; /*0x100542263*/
  }
  return v3; /*0x100542269*/
}