// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND store_bootstrap_installed_skills node 0x1007a1830 depth=2
__int64 *__fastcall _$LT$serde..private..de..FlatMapDeserializer$LT$E$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_struct::h1c78158185cc2692(
        __int64 *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // r15
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v11; // r14
  __int8 v12; // al
  __int8 v13; // al
  __int64 v14; // rax
  signed __int64 v15; // r14
  __int8 v16; // al
  __int64 v17; // r8
  __int8 v18; // al
  __int8 v19; // al
  __int8 v20; // al
  __int64 v21; // rbx
  __int64 v22; // rax
  unsigned __int64 v23; // r14
  __int64 *v24; // r12
  unsigned __int64 v25; // r13
  unsigned __int64 v26; // r15
  __int64 v27; // rcx
  __int64 v28; // rax
  __int64 v30; // r13
  __int64 v31; // rax
  __int64 v32; // rbx
  __int64 v33; // r15
  __int64 v34; // rax
  __int64 v35; // [rsp+0h] [rbp-7A0h] BYREF
  _QWORD v36[84]; // [rsp+8h] [rbp-798h] BYREF
  _BYTE v37[680]; // [rsp+2A8h] [rbp-4F8h] BYREF
  unsigned __int64 v38; // [rsp+550h] [rbp-250h]
  _QWORD v39[11]; // [rsp+558h] [rbp-248h] BYREF
  unsigned __int64 v40; // [rsp+5B0h] [rbp-1F0h] BYREF
  __int64 v41; // [rsp+5B8h] [rbp-1E8h]
  __int64 v42; // [rsp+5C0h] [rbp-1E0h]
  __int64 v43; // [rsp+5C8h] [rbp-1D8h]
  __int64 v44; // [rsp+5D0h] [rbp-1D0h]
  __int64 v45; // [rsp+5D8h] [rbp-1C8h]
  __int64 v46; // [rsp+5E0h] [rbp-1C0h]
  __int64 v47; // [rsp+5E8h] [rbp-1B8h]
  unsigned __int64 v48; // [rsp+5F0h] [rbp-1B0h] BYREF
  __int64 v49; // [rsp+5F8h] [rbp-1A8h]
  __int64 v50; // [rsp+600h] [rbp-1A0h]
  __int64 v51; // [rsp+608h] [rbp-198h]
  __int64 v52; // [rsp+610h] [rbp-190h]
  __int64 v53; // [rsp+618h] [rbp-188h]
  __int64 v54; // [rsp+620h] [rbp-180h]
  __int64 v55; // [rsp+628h] [rbp-178h]
  __int64 v56; // [rsp+630h] [rbp-170h]
  __int64 v57; // [rsp+638h] [rbp-168h]
  __int64 v58; // [rsp+640h] [rbp-160h]
  __int64 v59; // [rsp+648h] [rbp-158h]
  __int64 v60; // [rsp+650h] [rbp-150h]
  __int64 v61; // [rsp+658h] [rbp-148h]
  __int64 v62; // [rsp+660h] [rbp-140h]
  __int64 v63; // [rsp+668h] [rbp-138h]
  __int64 v64; // [rsp+670h] [rbp-130h] BYREF
  __int64 v65; // [rsp+678h] [rbp-128h]
  __int64 v66; // [rsp+680h] [rbp-120h]
  __int64 v67; // [rsp+688h] [rbp-118h]
  __int64 v68; // [rsp+690h] [rbp-110h]
  __int64 v69; // [rsp+698h] [rbp-108h]
  __int64 v70; // [rsp+6A0h] [rbp-100h]
  __int64 v71; // [rsp+6A8h] [rbp-F8h]
  _QWORD v72[11]; // [rsp+6B0h] [rbp-F0h] BYREF
  __int64 v73; // [rsp+708h] [rbp-98h]
  __m256i v74; // [rsp+710h] [rbp-90h] BYREF
  __int64 v75; // [rsp+730h] [rbp-70h]
  __int64 v76; // [rsp+738h] [rbp-68h]
  __int64 v77; // [rsp+740h] [rbp-60h]
  __int64 v78; // [rsp+748h] [rbp-58h]
  unsigned __int64 v79; // [rsp+750h] [rbp-50h]
  unsigned __int64 v80; // [rsp+758h] [rbp-48h]
  __int64 *v81; // [rsp+760h] [rbp-40h]
  __int64 v82; // [rsp+768h] [rbp-38h]
  unsigned __int64 v83; // [rsp+770h] [rbp-30h]

  v81 = a1; /*0x1007a1844*/
  v6 = *(_QWORD *)(a2 + 8); /*0x1007a1852*/
  v7 = *(_QWORD *)(a2 + 16); /*0x1007a1856*/
  v8 = v6 + (v7 << 6); /*0x1007a1861*/
  v75 = v6; /*0x1007a1864*/
  v76 = v8; /*0x1007a1868*/
  v74.i8[0] = 22; /*0x1007a186c*/
  v77 = a5; /*0x1007a1873*/
  v78 = a6; /*0x1007a1877*/
  v35 = 4; /*0x1007a187b*/
  v38 = 0x8000000000000001LL; /*0x1007a1886*/
  v48 = 0x8000000000000001LL; /*0x1007a188d*/
  v40 = 0x8000000000000001LL; /*0x1007a1894*/
  if ( !v7 ) /*0x1007a189e*/
  {
    v21 = 0; /*0x1007a1e9d*/
    v22 = 3; /*0x1007a1e9f*/
    v26 = 0x8000000000000000LL; /*0x1007a1ea4*/
    v23 = 0x8000000000000000LL; /*0x1007a1ea7*/
    v25 = 0x8000000000000000LL; /*0x1007a1eaa*/
    v24 = v81; /*0x1007a1ead*/
    goto LABEL_46; /*0x1007a1eb1*/
  }
  v73 = 2; /*0x1007a18af*/
  v82 = 4; /*0x1007a18bb*/
  v79 = 0x8000000000000001LL; /*0x1007a18bf*/
  v80 = 0x8000000000000001LL; /*0x1007a18c3*/
  v83 = 0x8000000000000001LL; /*0x1007a18c7*/
  while ( 2 ) /*0x1007a18d0*/
  {
    while ( 1 ) /*0x1007a18d0*/
    {
      v11 = v6 + 64; /*0x1007a18d0*/
      v75 = v6 + 64; /*0x1007a18d4*/
      serde::private::de::flat_map_take_entry::hef17b2a007d1733c(v37, v6, a5, a6); /*0x1007a18e8*/
      if ( v37[0] != 22 ) /*0x1007a18f4*/
        break; /*0x1007a18f4*/
      v6 += 64; /*0x1007a18f6*/
      if ( v11 == v8 ) /*0x1007a18fc*/
        goto LABEL_33; /*0x1007a18fc*/
    }
    if ( v74.i8[0] != 22 ) /*0x1007a190a*/
      core::ptr::drop_in_place$LT$serde_core..private..content..Content$GT$::h72bab24ea874f13d(&v74); /*0x1007a1913*/
    v74 = *(__m256i *)&v37[32]; /*0x1007a192b*/
    v72[3] = *(_QWORD *)&v37[24]; /*0x1007a194b*/
    v72[2] = *(_QWORD *)&v37[16]; /*0x1007a1959*/
    v72[1] = *(_QWORD *)&v37[8]; /*0x1007a196e*/
    v72[0] = *(_QWORD *)v37; /*0x1007a1975*/
    _$LT$serde..private..de..content..ContentDeserializer$LT$E$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_identifier::h37859f96523a24f6( /*0x1007a198a*/
      &v64,
      v72);
    if ( (_BYTE)v64 ) /*0x1007a1996*/
    {
      v17 = v65; /*0x1007a20df*/
LABEL_51:
      v24 = v81; /*0x1007a20e6*/
      v30 = v82; /*0x1007a20f4*/
      v15 = v83; /*0x1007a20f8*/
      goto LABEL_67; /*0x1007a20fc*/
    }
    switch ( BYTE1(v64) ) /*0x1007a19b1*/
    {
      case 0: /*0x1007a19b1*/
        if ( v73 != 2 ) /*0x1007a19bb*/
        {
          v72[0] = &unk_1012D4D25; /*0x1007a250d*/
          v72[1] = 9; /*0x1007a2514*/
          *(_QWORD *)v37 = v72; /*0x1007a2526*/
          *(_QWORD *)&v37[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x1007a2534*/
          v30 = v82; /*0x1007a2553*/
          v15 = v83; /*0x1007a2557*/
          v31 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::hfa6b64d0ab6dd310( /*0x1007a255b*/
                  &anon_3e4c14ac1826b92abbb84b981a88c995_5,
                  (unsigned __int64)v37);
          goto LABEL_58; /*0x1007a2560*/
        }
        v12 = v74.i8[0]; /*0x1007a19c1*/
        v74.i8[0] = 22; /*0x1007a19c8*/
        if ( v12 == 22 ) /*0x1007a19d1*/
          goto LABEL_57; /*0x1007a19d1*/
        *(_QWORD *)&v37[24] = v74.i64[3]; /*0x1007a19e9*/
        *(_OWORD *)&v37[9] = *(__int128 *)((char *)v74.i128 + 9); /*0x1007a19fc*/
        *(_QWORD *)&v37[1] = *(__int64 *)((char *)v74.i64 + 1); /*0x1007a1a00*/
        v37[0] = v12; /*0x1007a1a04*/
        _$LT$serde..private..de..content..ContentDeserializer$LT$E$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_option::h51d7952c08d9bc39( /*0x1007a1a18*/
          v72,
          v37);
        if ( v72[0] != 2 ) /*0x1007a1a28*/
        {
          v73 = v72[0]; /*0x1007a1a2e*/
          v71 = v72[1]; /*0x1007a1a3c*/
          goto LABEL_32; /*0x1007a1a43*/
        }
        v17 = v72[1]; /*0x1007a224a*/
        goto LABEL_51; /*0x1007a2251*/
      case 1: /*0x1007a19b1*/
        if ( v82 == 4 ) /*0x1007a1d02*/
        {
          v19 = v74.i8[0]; /*0x1007a1d08*/
          v74.i8[0] = 22; /*0x1007a1d0f*/
          if ( v19 == 22 ) /*0x1007a1d18*/
          {
            v15 = v83; /*0x1007a21a6*/
            v17 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..ser..Error$GT$::custom::he02f0a2195c27cad( /*0x1007a21af*/
                    &unk_1012D3A80,
                    0x10u);
            v24 = v81; /*0x1007a21b2*/
          }
          else
          {
            v72[3] = v74.i64[3]; /*0x1007a1d30*/
            *(_QWORD *)((char *)&v72[2] + 1) = *(__int64 *)((char *)&v74.i64[2] + 1); /*0x1007a1d38*/
            *(_QWORD *)((char *)&v72[1] + 1) = *(__int64 *)((char *)&v74.i64[1] + 1); /*0x1007a1d43*/
            *(_QWORD *)((char *)v72 + 1) = *(__int64 *)((char *)v74.i64 + 1); /*0x1007a1d47*/
            LOBYTE(v72[0]) = v19; /*0x1007a1d4a*/
            v82 = 4; /*0x1007a1d55*/
            _$LT$serde..private..de..content..ContentDeserializer$LT$E$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_option::h006b0eaef85eaa12(v37); /*0x1007a1d67*/
            v17 = *(_QWORD *)&v37[8]; /*0x1007a1d73*/
            if ( *(_QWORD *)v37 != 4 ) /*0x1007a1d7e*/
            {
              v63 = *(_QWORD *)&v37[8]; /*0x1007a1d97*/
              memcpy(&v36[1], &v37[16], 0x298u); /*0x1007a1d9e*/
              v82 = *(_QWORD *)v37; /*0x1007a1da3*/
              v35 = *(_QWORD *)v37; /*0x1007a1da7*/
              v36[0] = *(_QWORD *)&v37[8]; /*0x1007a1db5*/
              goto LABEL_32; /*0x1007a1dbc*/
            }
            v24 = v81; /*0x1007a227b*/
            v15 = v83; /*0x1007a2289*/
          }
          v30 = 4; /*0x1007a228d*/
LABEL_67:
          v24[1] = v17; /*0x1007a2293*/
          *v24 = 2; /*0x1007a2298*/
          if ( v79 != 0x8000000000000001LL ) /*0x1007a22a4*/
LABEL_68:
            core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..models..SkillListPayload$GT$$GT$::hfbd59de1fb042319(&v40); /*0x1007a22a6*/
LABEL_69:
          if ( v80 != 0x8000000000000001LL ) /*0x1007a22b6*/
            core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..models..McpServerListPayload$GT$$GT$::ha92737fbdd27ed42(&v48); /*0x1007a22bf*/
          if ( v15 >= (__int64)0x8000000000000002LL ) /*0x1007a22c7*/
          {
            v83 = v15; /*0x1007a22d9*/
            if ( v39[2] != 0x8000000000000000LL && v39[2] ) /*0x1007a22ec*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1007a22fa*/
            v32 = v39[1]; /*0x1007a2306*/
            if ( v39[1] ) /*0x1007a2310*/
            {
              v33 = v39[0] + 8LL; /*0x1007a2312*/
              do /*0x1007a2327*/
              {
                if ( *(_QWORD *)(v33 - 8) ) /*0x1007a2329*/
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1007a233a*/
                v33 += 40; /*0x1007a2320*/
                --v32; /*0x1007a2324*/
              }
              while ( v32 ); /*0x1007a2327*/
            }
            if ( v83 ) /*0x1007a2348*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1007a235a*/
          }
          if ( (unsigned __int64)(v30 - 3) >= 2 ) /*0x1007a2367*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreSnapshotPayload$GT$::h08c00b7b9f2c01a9(&v35); /*0x1007a2374*/
          goto LABEL_47; /*0x1007a2379*/
        }
        v72[0] = &unk_1012D4D2E; /*0x1007a2385*/
        v72[1] = 19; /*0x1007a238c*/
        *(_QWORD *)v37 = v72; /*0x1007a239e*/
        *(_QWORD *)&v37[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x1007a23ac*/
        v30 = v82; /*0x1007a23cb*/
        v15 = v83; /*0x1007a23ce*/
        v31 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::hfa6b64d0ab6dd310( /*0x1007a23d2*/
                &anon_3e4c14ac1826b92abbb84b981a88c995_5,
                (unsigned __int64)v37);
        goto LABEL_58; /*0x1007a23d7*/
      case 2: /*0x1007a19b1*/
        v15 = v83; /*0x1007a1b44*/
        if ( v83 == 0x8000000000000001LL ) /*0x1007a1b4b*/
        {
          v16 = v74.i8[0]; /*0x1007a1b51*/
          v74.i8[0] = 22; /*0x1007a1b58*/
          if ( v16 == 22 ) /*0x1007a1b61*/
          {
            v30 = v82; /*0x1007a2142*/
            v17 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..ser..Error$GT$::custom::he02f0a2195c27cad( /*0x1007a214b*/
                    &unk_1012D3A80,
                    0x10u);
            v24 = v81; /*0x1007a214e*/
            v15 = 0x8000000000000001LL; /*0x1007a2152*/
          }
          else
          {
            v72[3] = v74.i64[3]; /*0x1007a1b79*/
            *(_QWORD *)((char *)&v72[2] + 1) = *(__int64 *)((char *)&v74.i64[2] + 1); /*0x1007a1b81*/
            *(_OWORD *)((char *)v72 + 1) = *(__int128 *)((char *)v74.i128 + 1); /*0x1007a1b90*/
            LOBYTE(v72[0]) = v16; /*0x1007a1b93*/
            v83 = 0x8000000000000001LL; /*0x1007a1ba3*/
            _$LT$serde..private..de..content..ContentDeserializer$LT$E$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_option::h07b1da17bf8ff0c4( /*0x1007a1bb5*/
              v37,
              v72);
            v17 = *(_QWORD *)&v37[8]; /*0x1007a1bc1*/
            if ( *(_QWORD *)v37 != 0x8000000000000001LL ) /*0x1007a1bd5*/
            {
              qmemcpy(&v39[1], &v37[16], 0x50u); /*0x1007a1bee*/
              v83 = *(_QWORD *)v37; /*0x1007a1bf1*/
              v38 = *(_QWORD *)v37; /*0x1007a1bf5*/
              v39[0] = *(_QWORD *)&v37[8]; /*0x1007a1bfc*/
              goto LABEL_32; /*0x1007a1c03*/
            }
            v24 = v81; /*0x1007a2217*/
            v30 = v82; /*0x1007a2225*/
            v15 = 0x8000000000000001LL; /*0x1007a2229*/
          }
          goto LABEL_67; /*0x1007a222c*/
        }
        v72[0] = &unk_1012D4D41; /*0x1007a2442*/
        v72[1] = 14; /*0x1007a2449*/
        *(_QWORD *)v37 = v72; /*0x1007a245b*/
        *(_QWORD *)&v37[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x1007a2469*/
        v30 = v82; /*0x1007a2488*/
        v31 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::hfa6b64d0ab6dd310( /*0x1007a248c*/
                &anon_3e4c14ac1826b92abbb84b981a88c995_5,
                (unsigned __int64)v37);
        goto LABEL_58; /*0x1007a2491*/
      case 3: /*0x1007a19b1*/
        if ( v80 == 0x8000000000000001LL ) /*0x1007a1c16*/
        {
          v18 = v74.i8[0]; /*0x1007a1c1c*/
          v74.i8[0] = 22; /*0x1007a1c23*/
          if ( v18 == 22 ) /*0x1007a1c2c*/
          {
            v80 = 0x8000000000000001LL; /*0x1007a21d1*/
            v30 = v82; /*0x1007a21d5*/
            v15 = v83; /*0x1007a21d9*/
            v17 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..ser..Error$GT$::custom::he02f0a2195c27cad( /*0x1007a21e2*/
                    &unk_1012D3A80,
                    0x10u);
            v24 = v81; /*0x1007a21e5*/
          }
          else
          {
            v72[3] = v74.i64[3]; /*0x1007a1c44*/
            *(_QWORD *)((char *)&v72[2] + 1) = *(__int64 *)((char *)&v74.i64[2] + 1); /*0x1007a1c4c*/
            *(_QWORD *)((char *)&v72[1] + 1) = *(__int64 *)((char *)&v74.i64[1] + 1); /*0x1007a1c57*/
            *(_QWORD *)((char *)v72 + 1) = *(__int64 *)((char *)v74.i64 + 1); /*0x1007a1c5b*/
            LOBYTE(v72[0]) = v18; /*0x1007a1c5e*/
            v80 = 0x8000000000000001LL; /*0x1007a1c6e*/
            _$LT$serde..private..de..content..ContentDeserializer$LT$E$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_option::h6a41f914ccc8e3ec( /*0x1007a1c80*/
              v37,
              v72);
            v17 = *(_QWORD *)&v37[8]; /*0x1007a1c8c*/
            if ( *(_QWORD *)v37 != 0x8000000000000001LL ) /*0x1007a1ca0*/
            {
              v55 = *(_QWORD *)&v37[56]; /*0x1007a1cb8*/
              v54 = *(_QWORD *)&v37[48]; /*0x1007a1cc0*/
              v53 = *(_QWORD *)&v37[40]; /*0x1007a1cc8*/
              v52 = *(_QWORD *)&v37[32]; /*0x1007a1ccf*/
              v51 = *(_QWORD *)&v37[24]; /*0x1007a1cdb*/
              v50 = *(_QWORD *)&v37[16]; /*0x1007a1cdf*/
              v80 = *(_QWORD *)v37; /*0x1007a1ce3*/
              v48 = *(_QWORD *)v37; /*0x1007a1ce7*/
              v49 = *(_QWORD *)&v37[8]; /*0x1007a1cee*/
              goto LABEL_32; /*0x1007a1cf5*/
            }
            v24 = v81; /*0x1007a222e*/
            v30 = v82; /*0x1007a223c*/
            v15 = v83; /*0x1007a2240*/
          }
          v80 = 0x8000000000000001LL; /*0x1007a2244*/
          goto LABEL_67; /*0x1007a2248*/
        }
        v72[0] = &unk_1012D4D4F; /*0x1007a23e3*/
        v72[1] = 10; /*0x1007a23ea*/
        *(_QWORD *)v37 = v72; /*0x1007a23fc*/
        *(_QWORD *)&v37[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x1007a240a*/
        v30 = v82; /*0x1007a2429*/
        v15 = v83; /*0x1007a242d*/
        v31 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::hfa6b64d0ab6dd310( /*0x1007a2431*/
                &anon_3e4c14ac1826b92abbb84b981a88c995_5,
                (unsigned __int64)v37);
        goto LABEL_58; /*0x1007a2436*/
      case 4: /*0x1007a19b1*/
        if ( v79 != 0x8000000000000001LL ) /*0x1007a1a56*/
        {
          v72[0] = &unk_1012D4D59; /*0x1007a249d*/
          v72[1] = 15; /*0x1007a24a4*/
          *(_QWORD *)v37 = v72; /*0x1007a24b6*/
          *(_QWORD *)&v37[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb08ef9ec26875653; /*0x1007a24c4*/
          v30 = v82; /*0x1007a24e3*/
          v15 = v83; /*0x1007a24e7*/
          v34 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::hfa6b64d0ab6dd310( /*0x1007a24eb*/
                  &anon_3e4c14ac1826b92abbb84b981a88c995_5,
                  (unsigned __int64)v37);
          v24 = v81; /*0x1007a24f0*/
          v81[1] = v34; /*0x1007a24f4*/
          *v24 = 2; /*0x1007a24f9*/
          goto LABEL_68; /*0x1007a2501*/
        }
        v13 = v74.i8[0]; /*0x1007a1a5c*/
        v74.i8[0] = 22; /*0x1007a1a63*/
        if ( v13 == 22 ) /*0x1007a1a6c*/
        {
          v79 = 0x8000000000000001LL; /*0x1007a2170*/
          v30 = v82; /*0x1007a2174*/
          v15 = v83; /*0x1007a2178*/
          v14 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..ser..Error$GT$::custom::he02f0a2195c27cad( /*0x1007a217c*/
                  &unk_1012D3A80,
                  0x10u);
          v24 = v81; /*0x1007a2181*/
        }
        else
        {
          v72[3] = v74.i64[3]; /*0x1007a1a84*/
          *(_OWORD *)((char *)&v72[1] + 1) = *(__int128 *)((char *)v74.i128 + 9); /*0x1007a1a97*/
          *(_QWORD *)((char *)v72 + 1) = *(__int64 *)((char *)v74.i64 + 1); /*0x1007a1a9b*/
          LOBYTE(v72[0]) = v13; /*0x1007a1a9e*/
          v79 = 0x8000000000000001LL; /*0x1007a1aae*/
          _$LT$serde..private..de..content..ContentDeserializer$LT$E$GT$$u20$as$u20$serde_core..de..Deserializer$GT$::deserialize_option::hd5ec6b13f249b607( /*0x1007a1ac0*/
            v37,
            v72);
          v14 = *(_QWORD *)&v37[8]; /*0x1007a1acc*/
          if ( *(_QWORD *)v37 != 0x8000000000000001LL ) /*0x1007a1ae0*/
          {
            v47 = *(_QWORD *)&v37[56]; /*0x1007a1af8*/
            v46 = *(_QWORD *)&v37[48]; /*0x1007a1b00*/
            v45 = *(_QWORD *)&v37[40]; /*0x1007a1b08*/
            v44 = *(_QWORD *)&v37[32]; /*0x1007a1b0f*/
            v43 = *(_QWORD *)&v37[24]; /*0x1007a1b1b*/
            v42 = *(_QWORD *)&v37[16]; /*0x1007a1b1f*/
            v79 = *(_QWORD *)v37; /*0x1007a1b23*/
            v40 = *(_QWORD *)v37; /*0x1007a1b27*/
            v41 = *(_QWORD *)&v37[8]; /*0x1007a1b2e*/
            goto LABEL_32; /*0x1007a1b35*/
          }
          v24 = v81; /*0x1007a2256*/
          v30 = v82; /*0x1007a2264*/
          v15 = v83; /*0x1007a2268*/
        }
        v24[1] = v14; /*0x1007a226c*/
        *v24 = 2; /*0x1007a2271*/
        goto LABEL_69; /*0x1007a2279*/
      case 5: /*0x1007a19b1*/
        v20 = v74.i8[0]; /*0x1007a1dbe*/
        v74.i8[0] = 22; /*0x1007a1dc5*/
        if ( v20 == 22 ) /*0x1007a1dce*/
        {
LABEL_57:
          v30 = v82; /*0x1007a21eb*/
          v15 = v83; /*0x1007a2205*/
          v31 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..ser..Error$GT$::custom::he02f0a2195c27cad( /*0x1007a2209*/
                  &unk_1012D3A80,
                  0x10u);
LABEL_58:
          v17 = v31; /*0x1007a220e*/
          v24 = v81; /*0x1007a2211*/
          goto LABEL_67; /*0x1007a2215*/
        }
        *(_QWORD *)&v37[24] = v74.i64[3]; /*0x1007a1de6*/
        *(_QWORD *)&v37[17] = *(__int64 *)((char *)&v74.i64[2] + 1); /*0x1007a1dee*/
        *(_OWORD *)&v37[1] = *(__int128 *)((char *)v74.i128 + 1); /*0x1007a1dfd*/
        v37[0] = v20; /*0x1007a1e01*/
        core::ptr::drop_in_place$LT$serde_core..private..content..Content$GT$::h72bab24ea874f13d(v37); /*0x1007a1e0e*/
LABEL_32:
        v6 += 64; /*0x1007a1e13*/
        if ( v6 != v8 ) /*0x1007a1e1a*/
          continue; /*0x1007a1e1a*/
LABEL_33:
        v21 = 0; /*0x1007a1e20*/
        if ( v73 != 2 ) /*0x1007a1e2d*/
          v21 = v73; /*0x1007a1e2d*/
        v22 = 3; /*0x1007a1e31*/
        if ( v82 != 4 ) /*0x1007a1e3e*/
        {
          memcpy(v37, v36, 0x2A0u); /*0x1007a1e53*/
          v22 = v82; /*0x1007a1e58*/
        }
        v23 = 0x8000000000000000LL; /*0x1007a1e69*/
        v24 = v81; /*0x1007a1e73*/
        v25 = v79; /*0x1007a1e7b*/
        if ( v83 == 0x8000000000000001LL ) /*0x1007a1e7f*/
        {
          v26 = 0x8000000000000000LL; /*0x1007a1e81*/
          if ( v80 == 0x8000000000000001LL ) /*0x1007a1e87*/
            goto LABEL_39; /*0x1007a1e87*/
LABEL_43:
          v62 = v55; /*0x1007a1ed7*/
          v61 = v54; /*0x1007a1eed*/
          v60 = v53; /*0x1007a1ef8*/
          v59 = v52; /*0x1007a1f03*/
          v58 = v51; /*0x1007a1f0e*/
          v57 = v50; /*0x1007a1f1c*/
          v56 = v49; /*0x1007a1f23*/
          v26 = v80; /*0x1007a1f2a*/
          if ( v79 != 0x8000000000000001LL ) /*0x1007a1f30*/
            goto LABEL_44; /*0x1007a1f30*/
LABEL_40:
          v25 = 0x8000000000000000LL; /*0x1007a1e92*/
        }
        else
        {
          qmemcpy(v72, v39, sizeof(v72)); /*0x1007a1ec9*/
          v23 = v83; /*0x1007a1ecc*/
          v26 = 0x8000000000000000LL; /*0x1007a1ecf*/
          if ( v80 != 0x8000000000000001LL ) /*0x1007a1ed5*/
            goto LABEL_43; /*0x1007a1ed5*/
LABEL_39:
          if ( v79 == 0x8000000000000001LL ) /*0x1007a1e8c*/
            goto LABEL_40; /*0x1007a1e8c*/
LABEL_44:
          v70 = v47; /*0x1007a1f36*/
          v69 = v46; /*0x1007a1f4c*/
          v68 = v45; /*0x1007a1f57*/
          v67 = v44; /*0x1007a1f62*/
          v66 = v43; /*0x1007a1f6d*/
          v65 = v42; /*0x1007a1f7b*/
          v64 = v41; /*0x1007a1f82*/
        }
        a3 = v71; /*0x1007a1f89*/
LABEL_46:
        *v24 = v21; /*0x1007a1f90*/
        v24[1] = a3; /*0x1007a1f94*/
        v24[2] = v22; /*0x1007a1f99*/
        memcpy(v24 + 3, v37, 0x2A0u); /*0x1007a1faf*/
        v24[87] = v23; /*0x1007a1fb4*/
        qmemcpy(v24 + 88, v72, 0x58u); /*0x1007a1fd0*/
        v24[99] = v26; /*0x1007a1fd3*/
        v27 = v57; /*0x1007a1fe2*/
        v24[100] = v56; /*0x1007a1fe9*/
        v24[101] = v27; /*0x1007a1ff1*/
        v24[102] = v58; /*0x1007a2000*/
        v24[103] = v59; /*0x1007a200f*/
        v24[104] = v60; /*0x1007a201e*/
        v24[105] = v61; /*0x1007a202d*/
        v24[106] = v62; /*0x1007a203c*/
        v24[107] = v25; /*0x1007a2044*/
        v24[114] = v70; /*0x1007a2053*/
        v24[113] = v69; /*0x1007a2062*/
        v24[112] = v68; /*0x1007a2071*/
        v24[111] = v67; /*0x1007a2080*/
        v24[110] = v66; /*0x1007a208f*/
        v28 = v64; /*0x1007a2097*/
        v24[109] = v65; /*0x1007a20a5*/
        v24[108] = v28; /*0x1007a20ad*/
LABEL_47:
        if ( v74.i8[0] != 22 ) /*0x1007a20bc*/
          core::ptr::drop_in_place$LT$serde_core..private..content..Content$GT$::h72bab24ea874f13d(&v74); /*0x1007a20c5*/
        return v24;
    }
  }
}