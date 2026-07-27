// __ZN13codexmate_lib4core5relay12proxy_server22build_upstream_headers @ 0x10025bf70 | 基线 same-set
void *__fastcall codexmate_lib::core::relay::proxy_server::build_upstream_headers::hfb8c5da4446947b4(
        void *a1,
        __int64 a2)
{
  void *v3; // r13
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 i; // rax
  unsigned __int8 v7; // cl
  _BOOL8 v8; // r15
  __int64 v9; // r12
  __int64 j; // rax
  unsigned __int8 v11; // cl
  __int64 v12; // rbx
  __int64 v13; // r14
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r14
  __int64 (__fastcall *v19)(); // r15
  __int64 (__fastcall *v20)(); // rdx
  __int64 (__fastcall *v21)(); // rsi
  __int64 (__fastcall *v22)(); // rdi
  __int64 (__fastcall *k)(); // rax
  unsigned __int8 v24; // cl
  _QWORD v26[5]; // [rsp+0h] [rbp-260h] BYREF
  _QWORD v27[5]; // [rsp+28h] [rbp-238h] BYREF
  _QWORD v28[12]; // [rsp+50h] [rbp-210h] BYREF
  char v29[8]; // [rsp+B0h] [rbp-1B0h] BYREF
  __int64 v30; // [rsp+B8h] [rbp-1A8h] BYREF
  __int64 v31; // [rsp+C0h] [rbp-1A0h]
  __int64 v32; // [rsp+C8h] [rbp-198h]
  _QWORD v33[4]; // [rsp+D0h] [rbp-190h] BYREF
  void *v34; // [rsp+F0h] [rbp-170h]
  _QWORD v35[2]; // [rsp+F8h] [rbp-168h] BYREF
  __int64 (__fastcall *v36)(); // [rsp+108h] [rbp-158h]
  __int64 (__fastcall *v37)(); // [rsp+110h] [rbp-150h]
  __int64 (__fastcall **v38)(); // [rsp+118h] [rbp-148h] BYREF
  __int64 v39; // [rsp+120h] [rbp-140h]
  __int64 v40; // [rsp+128h] [rbp-138h]
  __int64 v41; // [rsp+130h] [rbp-130h]
  __int64 v42; // [rsp+138h] [rbp-128h]
  __int64 v43; // [rsp+140h] [rbp-120h]
  __int64 v44; // [rsp+148h] [rbp-118h]
  __int64 v45; // [rsp+150h] [rbp-110h]
  __int64 v46; // [rsp+158h] [rbp-108h] BYREF
  __int64 (__fastcall **v47)(); // [rsp+160h] [rbp-100h] BYREF
  __int64 v48; // [rsp+168h] [rbp-F8h]
  __int64 v49; // [rsp+170h] [rbp-F0h]
  __int64 v50; // [rsp+178h] [rbp-E8h] BYREF
  __int64 v51; // [rsp+180h] [rbp-E0h]
  _BOOL8 v52; // [rsp+188h] [rbp-D8h] BYREF
  __int64 v53; // [rsp+190h] [rbp-D0h]
  __int64 v54; // [rsp+198h] [rbp-C8h]
  __int64 v55; // [rsp+1A0h] [rbp-C0h]
  _BOOL8 v56; // [rsp+1A8h] [rbp-B8h]
  __int64 v57; // [rsp+1B0h] [rbp-B0h]
  __int64 v58; // [rsp+1B8h] [rbp-A8h]
  __int64 v59; // [rsp+1C0h] [rbp-A0h]
  __int64 v60; // [rsp+1C8h] [rbp-98h]
  __int64 (__fastcall **v61)(); // [rsp+1D0h] [rbp-90h] BYREF
  __int64 v62; // [rsp+1D8h] [rbp-88h]
  __int64 v63; // [rsp+1E0h] [rbp-80h]
  __int64 v64; // [rsp+1E8h] [rbp-78h] BYREF
  _QWORD v65[3]; // [rsp+1F0h] [rbp-70h] BYREF
  __int64 v66; // [rsp+208h] [rbp-58h] BYREF
  __int64 v67; // [rsp+210h] [rbp-50h]
  __int64 v68; // [rsp+218h] [rbp-48h]
  __int64 v69; // [rsp+220h] [rbp-40h] BYREF
  _BOOL8 v70; // [rsp+228h] [rbp-38h]
  _BYTE v71[41]; // [rsp+237h] [rbp-29h] BYREF

  v3 = a1; /*0x10025bf87*/
  LOWORD(v28[11]) = 0; /*0x10025bf8a*/
  v28[9] = 2; /*0x10025bf93*/
  v28[10] = 0; /*0x10025bf9e*/
  v28[3] = 0; /*0x10025bfa9*/
  v28[4] = 8; /*0x10025bfb4*/
  v28[5] = 0; /*0x10025bfbf*/
  v28[6] = 0; /*0x10025bfca*/
  v28[7] = 8; /*0x10025bfd5*/
  v28[8] = 0; /*0x10025bfe0*/
  v28[0] = 0; /*0x10025bfeb*/
  v50 = 0; /*0x10025bff6*/
  v49 = 0; /*0x10025c001*/
  v48 = 29; /*0x10025c00c*/
  v47 = nullptr; /*0x10025c017*/
  v61 = &anon_39a6e93098609d65551b0fc4eadbbbd9_846; /*0x10025c029*/
  v62 = (__int64)&unk_1015DBAA0; /*0x10025c037*/
  v63 = 16; /*0x10025c03e*/
  v64 = 0; /*0x10025c046*/
  LOBYTE(v65[0]) = 0; /*0x10025c04e*/
  http::header::map::HeaderMap$LT$T$GT$::try_insert2::ha91bdef66449288e(&v52, v28, &v47, &v61); /*0x10025c06e*/
  if ( v56 == 3 ) /*0x10025c07a*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10025c91a*/
      "size overflows MAX_SIZE",
      23,
      v71,
      &anon_39a6e93098609d65551b0fc4eadbbbd9_868,
      &anon_39a6e93098609d65551b0fc4eadbbbd9_20);
  v70 = v56; /*0x10025c087*/
  v69 = v55; /*0x10025c092*/
  v68 = v54; /*0x10025c09d*/
  v67 = v53; /*0x10025c0af*/
  v66 = v52; /*0x10025c0b3*/
  if ( v56 != 2 ) /*0x10025c0b9*/
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v66 + 32))(&v69, v67, v68); /*0x10025c0cb*/
  if ( *(_BYTE *)(a2 + 230) == 2 ) /*0x10025c0d6*/
  {
    v4 = *(_QWORD *)(a2 + 80); /*0x10025c0d8*/
    v5 = *(_QWORD *)(a2 + 88); /*0x10025c0dc*/
    if ( v5 ) /*0x10025c0e3*/
    {
      for ( i = 0; v5 != i; ++i ) /*0x10025c0e9*/
      {
        v7 = *(_BYTE *)(v4 + i); /*0x10025c105*/
        if ( v7 > 0x1Fu ) /*0x10025c10c*/
        {
          if ( v7 == 127 ) /*0x10025c0f3*/
            goto LABEL_22; /*0x10025c0f3*/
        }
        else if ( v7 != 9 ) /*0x10025c111*/
        {
          goto LABEL_22; /*0x10025c111*/
        }
      }
    }
    bytes::bytes::Bytes::copy_from_slice::h6785181ff68f826e(&v38, v4, v5); /*0x10025c199*/
    LOBYTE(v42) = 0; /*0x10025c1a5*/
    v51 = v42; /*0x10025c1b3*/
    v50 = v41; /*0x10025c1c1*/
    v49 = v40; /*0x10025c1cf*/
    v48 = v39; /*0x10025c1e4*/
    v47 = v38; /*0x10025c1eb*/
    http::header::name::HeaderName::from_static::h9e434d159ca12d45(v33, &unk_1015DD326, 9); /*0x10025c205*/
    v65[0] = v42; /*0x10025c211*/
    v64 = v41; /*0x10025c21c*/
    v63 = v40; /*0x10025c227*/
    v62 = v39; /*0x10025c239*/
    v61 = v38; /*0x10025c240*/
    http::header::map::HeaderMap$LT$T$GT$::try_insert2::ha91bdef66449288e(&v52, v28, v33, &v61); /*0x10025c263*/
    if ( v56 == 3 ) /*0x10025c26f*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10025c964*/
        "size overflows MAX_SIZE",
        23,
        v71,
        &anon_39a6e93098609d65551b0fc4eadbbbd9_868,
        &anon_39a6e93098609d65551b0fc4eadbbbd9_20);
    v70 = v56; /*0x10025c27c*/
    v69 = v55; /*0x10025c287*/
    v68 = v54; /*0x10025c292*/
    v67 = v53; /*0x10025c2a4*/
    v66 = v52; /*0x10025c2a8*/
    if ( v56 != 2 ) /*0x10025c2ae*/
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v66 + 32))(&v69, v67, v68); /*0x10025c2c0*/
LABEL_22:
    http::header::name::HeaderName::from_static::h9e434d159ca12d45(&v47, &unk_1015DD32F, 17); /*0x10025c2c3*/
    v61 = &anon_39a6e93098609d65551b0fc4eadbbbd9_846; /*0x10025c2db*/
    v62 = (__int64)&unk_1015DD340; /*0x10025c2e9*/
    v63 = 10; /*0x10025c2f0*/
    v64 = 0; /*0x10025c2f8*/
    LOBYTE(v65[0]) = 0; /*0x10025c300*/
    http::header::map::HeaderMap$LT$T$GT$::try_insert2::ha91bdef66449288e(&v52, v28, &v47, &v61); /*0x10025c320*/
    if ( v56 == 3 ) /*0x10025c32c*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10025c93f*/
        "size overflows MAX_SIZE",
        23,
        v71,
        &anon_39a6e93098609d65551b0fc4eadbbbd9_868,
        &anon_39a6e93098609d65551b0fc4eadbbbd9_20);
    v70 = v56; /*0x10025c339*/
    v69 = v55; /*0x10025c344*/
    v68 = v54; /*0x10025c34f*/
    v67 = v53; /*0x10025c361*/
    v66 = v52; /*0x10025c365*/
    if ( v56 != 2 ) /*0x10025c36b*/
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v66 + 32))(&v69, v67, v68); /*0x10025c381*/
  }
  else
  {
    v61 = (__int64 (__fastcall **)())(a2 + 72); /*0x10025c11c*/
    v62 = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10025c12a*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v52, &unk_1017B931C, &v61); /*0x10025c146*/
    v8 = v52; /*0x10025c14b*/
    v9 = v53; /*0x10025c152*/
    if ( v54 ) /*0x10025c163*/
    {
      for ( j = 0; v54 != j; ++j ) /*0x10025c169*/
      {
        v11 = *(_BYTE *)(v53 + j); /*0x10025c185*/
        if ( v11 > 0x1Fu ) /*0x10025c18d*/
        {
          if ( v11 == 127 ) /*0x10025c173*/
            goto LABEL_28; /*0x10025c173*/
        }
        else if ( v11 != 9 ) /*0x10025c192*/
        {
          goto LABEL_28; /*0x10025c192*/
        }
      }
    }
    bytes::bytes::Bytes::copy_from_slice::h6785181ff68f826e(&v66, v53, v54); /*0x10025c389*/
    LOBYTE(v70) = 0; /*0x10025c395*/
    v27[0] = v66; /*0x10025c3a1*/
    v27[1] = v67; /*0x10025c3a8*/
    v27[2] = v68; /*0x10025c3b3*/
    v27[3] = v69; /*0x10025c3be*/
    v27[4] = v70; /*0x10025c3c9*/
    v64 = 0; /*0x10025c3d0*/
    v63 = 0; /*0x10025c3d8*/
    v62 = 16; /*0x10025c3e0*/
    v61 = nullptr; /*0x10025c3eb*/
    http::header::map::HeaderMap$LT$T$GT$::try_insert2::ha91bdef66449288e(&v52, v28, &v61, v27); /*0x10025c412*/
    if ( v56 == 3 ) /*0x10025c41e*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10025c989*/
        "size overflows MAX_SIZE",
        23,
        v71,
        &anon_39a6e93098609d65551b0fc4eadbbbd9_868,
        &anon_39a6e93098609d65551b0fc4eadbbbd9_20);
    v65[0] = v56; /*0x10025c42b*/
    v64 = v55; /*0x10025c436*/
    v63 = v54; /*0x10025c441*/
    v62 = v53; /*0x10025c453*/
    v61 = (__int64 (__fastcall **)())v52; /*0x10025c45a*/
    if ( v56 != 2 ) /*0x10025c463*/
      ((void (__fastcall *)(__int64 *, __int64, __int64))v61[4])(&v64, v62, v63); /*0x10025c47b*/
LABEL_28:
    if ( v8 ) /*0x10025c481*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v8, 1); /*0x10025c48e*/
  }
  v12 = *(_QWORD *)(a2 + 152); /*0x10025c493*/
  v13 = *(_QWORD *)(a2 + 160); /*0x10025c49a*/
  core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v12, v13); /*0x10025c4a7*/
  if ( v14 ) /*0x10025c4af*/
  {
    v52 = v12; /*0x10025c4b5*/
    v53 = v13; /*0x10025c4bc*/
    v54 = 0; /*0x10025c4c3*/
    v55 = 0; /*0x10025c4ce*/
    v56 = v12; /*0x10025c4d9*/
    v57 = v13; /*0x10025c4e0*/
    serde_json::de::from_trait::ha212a85cbf1d7df5(v29, &v52); /*0x10025c4f5*/
    if ( v29[0] ) /*0x10025c501*/
    {
      core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&v30); /*0x10025c50a*/
    }
    else
    {
      v34 = a1; /*0x10025c514*/
      v15 = v30; /*0x10025c52b*/
      if ( v30 ) /*0x10025c534*/
        v15 = v32; /*0x10025c536*/
      v52 = v30 != 0; /*0x10025c53d*/
      v53 = 0; /*0x10025c544*/
      v54 = v30; /*0x10025c54f*/
      v55 = v31; /*0x10025c556*/
      v56 = v52; /*0x10025c55d*/
      v57 = 0; /*0x10025c564*/
      v58 = v30; /*0x10025c56f*/
      v59 = v31; /*0x10025c576*/
      v60 = v15; /*0x10025c57d*/
      while ( 1 ) /*0x10025c5aa*/
      {
        alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::hdcfb92fc12379793(&v61, &v52); /*0x10025c5aa*/
        if ( !v61 ) /*0x10025c5b9*/
          break; /*0x10025c5b9*/
        v18 = (__int64)v61[3 * v63 + 45]; /*0x10025c5c7*/
        if ( __OFSUB__(-v18, 1) ) /*0x10025c5d5*/
          break; /*0x10025c5d5*/
        v19 = v61[3 * v63 + 46]; /*0x10025c5db*/
        v20 = v61[3 * v63 + 47]; /*0x10025c5e3*/
        v37 = v61[4 * v63 + 3]; /*0x10025c5f4*/
        v36 = v61[4 * v63 + 2]; /*0x10025c600*/
        v21 = v61[4 * v63]; /*0x10025c607*/
        v35[1] = v61[4 * v63 + 1]; /*0x10025c610*/
        v35[0] = v21; /*0x10025c617*/
        http::header::name::HeaderName::from_bytes::ha95a3402a9b13e2b(&v66, v19, v20, 32 * v63, v16, v17); /*0x10025c624*/
        v22 = v36; /*0x10025c641*/
        if ( LOBYTE(v35[0]) != 3 ) /*0x10025c649*/
          v22 = nullptr; /*0x10025c649*/
        v61 = (__int64 (__fastcall **)())v66; /*0x10025c655*/
        v62 = v67; /*0x10025c65c*/
        v63 = v68; /*0x10025c667*/
        v64 = v69; /*0x10025c66f*/
        v65[0] = v70; /*0x10025c677*/
        v65[1] = v22; /*0x10025c67b*/
        v65[2] = v37; /*0x10025c67f*/
        if ( v66 & 1 | (LOBYTE(v35[0]) != 3) ) /*0x10025c685*/
        {
          if ( (v66 & 1) == 0 && v62 ) /*0x10025c69c*/
            (*(void (__fastcall **)(_QWORD *, __int64, __int64))(v62 + 32))(v65, v63, v64); /*0x10025c6ae*/
          goto LABEL_55; /*0x10025c6b1*/
        }
        v46 = v65[0]; /*0x10025c6c5*/
        v45 = v64; /*0x10025c6d1*/
        v44 = v63; /*0x10025c6e1*/
        v43 = v62; /*0x10025c6e8*/
        if ( v37 ) /*0x10025c6f2*/
        {
          for ( k = nullptr; v37 != k; k = (__int64 (__fastcall *)())((char *)k + 1) ) /*0x10025c6f4*/
          {
            v24 = *((_BYTE *)k + (_QWORD)v36); /*0x10025c70d*/
            if ( v24 > 0x1Fu ) /*0x10025c714*/
            {
              if ( v24 == 127 ) /*0x10025c703*/
                goto LABEL_50; /*0x10025c703*/
            }
            else if ( v24 != 9 ) /*0x10025c719*/
            {
LABEL_50:
              if ( v43 ) /*0x10025c725*/
                (*(void (__fastcall **)(__int64 *, __int64, __int64))(v43 + 32))(&v46, v44, v45); /*0x10025c740*/
              goto LABEL_55; /*0x10025c743*/
            }
          }
        }
        bytes::bytes::Bytes::copy_from_slice::h6785181ff68f826e(&v38, v36, v37); /*0x10025c750*/
        LOBYTE(v42) = 0; /*0x10025c75c*/
        v26[0] = v38; /*0x10025c771*/
        v26[1] = v39; /*0x10025c778*/
        v26[2] = v40; /*0x10025c786*/
        v26[3] = v41; /*0x10025c794*/
        v26[4] = v42; /*0x10025c7a2*/
        v33[3] = v46; /*0x10025c7b0*/
        v33[2] = v45; /*0x10025c7be*/
        v33[1] = v44; /*0x10025c7d3*/
        v33[0] = v43; /*0x10025c7da*/
        http::header::map::HeaderMap$LT$T$GT$::try_insert2::ha91bdef66449288e(&v66, v28, v33, v26); /*0x10025c7f9*/
        if ( v70 == 3 ) /*0x10025c802*/
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10025c8f2*/
            "size overflows MAX_SIZE",
            23,
            v71,
            &anon_39a6e93098609d65551b0fc4eadbbbd9_868,
            &anon_39a6e93098609d65551b0fc4eadbbbd9_20);
        v51 = v70; /*0x10025c80c*/
        v50 = v69; /*0x10025c817*/
        v49 = v68; /*0x10025c822*/
        v48 = v67; /*0x10025c831*/
        v47 = (__int64 (__fastcall **)())v66; /*0x10025c838*/
        if ( v70 != 2 ) /*0x10025c841*/
          ((void (__fastcall *)(__int64 *, __int64, __int64))v47[4])(&v50, v48, v49); /*0x10025c85f*/
LABEL_55:
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v35); /*0x10025c870*/
        if ( v18 ) /*0x10025c87f*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v18, 1); /*0x10025c890*/
      }
      _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h92199a5704cddc1e(&v52); /*0x10025c8a1*/
      v3 = v34; /*0x10025c8a6*/
    }
  }
  qmemcpy(v3, v28, 0x60u); /*0x10025c8bc*/
  return v3; /*0x10025c8c2*/
}