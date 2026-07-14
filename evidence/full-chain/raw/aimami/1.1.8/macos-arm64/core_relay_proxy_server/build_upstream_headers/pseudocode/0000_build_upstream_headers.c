// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND build_upstream_headers node 0x1005a81e0 depth=0
void *__fastcall codexmate_lib::core::relay::proxy_server::build_upstream_headers::hba3e6b9a7ad317e7(
        void *a1,
        __int64 a2)
{
  void *v3; // r13
  __int64 v4; // rsi
  __int64 v5; // rdx
  __int64 i; // rax
  unsigned __int8 v7; // cl
  size_t v8; // r15
  __int64 j; // rax
  unsigned __int8 v10; // cl
  size_t v11; // rbx
  __int64 v12; // r14
  __int64 v13; // rdx
  __int64 v14; // rsi
  __int64 v15; // r14
  __int64 (__fastcall *v16)(); // r15
  __int64 (__fastcall *v17)(); // rdx
  __int64 (__fastcall *v18)(); // rsi
  _QWORD *v19; // rsi
  __int64 v20; // rdx
  __int64 (__fastcall *v21)(); // rdi
  __int64 (__fastcall *k)(); // rax
  unsigned __int8 v23; // cl
  _QWORD v25[5]; // [rsp+0h] [rbp-260h] BYREF
  _QWORD v26[5]; // [rsp+28h] [rbp-238h] BYREF
  _QWORD v27[12]; // [rsp+50h] [rbp-210h] BYREF
  char v28[8]; // [rsp+B0h] [rbp-1B0h] BYREF
  __int64 v29; // [rsp+B8h] [rbp-1A8h] BYREF
  __int64 v30; // [rsp+C0h] [rbp-1A0h]
  __int64 v31; // [rsp+C8h] [rbp-198h]
  _QWORD v32[4]; // [rsp+D0h] [rbp-190h] BYREF
  void *v33; // [rsp+F0h] [rbp-170h]
  _QWORD v34[2]; // [rsp+F8h] [rbp-168h] BYREF
  __int64 (__fastcall *v35)(); // [rsp+108h] [rbp-158h]
  __int64 (__fastcall *v36)(); // [rsp+110h] [rbp-150h]
  __int64 (__fastcall **v37)(); // [rsp+118h] [rbp-148h] BYREF
  __int64 v38; // [rsp+120h] [rbp-140h]
  __int64 v39; // [rsp+128h] [rbp-138h]
  __int64 v40; // [rsp+130h] [rbp-130h]
  size_t v41; // [rsp+138h] [rbp-128h]
  __int64 v42; // [rsp+140h] [rbp-120h]
  _QWORD *v43; // [rsp+148h] [rbp-118h]
  __int64 v44; // [rsp+150h] [rbp-110h]
  __int64 v45; // [rsp+158h] [rbp-108h] BYREF
  unsigned __int64 v46; // [rsp+160h] [rbp-100h] BYREF
  __int64 v47; // [rsp+168h] [rbp-F8h]
  __int64 v48; // [rsp+170h] [rbp-F0h]
  __int64 v49; // [rsp+178h] [rbp-E8h] BYREF
  size_t v50; // [rsp+180h] [rbp-E0h]
  _BOOL8 v51; // [rsp+188h] [rbp-D8h] BYREF
  __int64 v52; // [rsp+190h] [rbp-D0h]
  __int64 v53; // [rsp+198h] [rbp-C8h]
  __int64 v54; // [rsp+1A0h] [rbp-C0h]
  size_t v55; // [rsp+1A8h] [rbp-B8h]
  __int64 v56; // [rsp+1B0h] [rbp-B0h]
  __int64 v57; // [rsp+1B8h] [rbp-A8h]
  __int64 v58; // [rsp+1C0h] [rbp-A0h]
  __int64 v59; // [rsp+1C8h] [rbp-98h]
  __int64 (__fastcall **v60)(); // [rsp+1D0h] [rbp-90h] BYREF
  __int64 v61; // [rsp+1D8h] [rbp-88h]
  __int64 v62; // [rsp+1E0h] [rbp-80h]
  __int64 v63; // [rsp+1E8h] [rbp-78h] BYREF
  _QWORD v64[3]; // [rsp+1F0h] [rbp-70h] BYREF
  unsigned __int64 v65; // [rsp+208h] [rbp-58h] BYREF
  __int64 v66; // [rsp+210h] [rbp-50h]
  __int64 v67; // [rsp+218h] [rbp-48h]
  __int64 v68; // [rsp+220h] [rbp-40h] BYREF
  size_t v69; // [rsp+228h] [rbp-38h]
  _BYTE v70[41]; // [rsp+237h] [rbp-29h] BYREF

  v3 = a1; /*0x1005a81f7*/
  LOWORD(v27[11]) = 0; /*0x1005a81fa*/
  v27[9] = 2; /*0x1005a8203*/
  v27[10] = 0; /*0x1005a820e*/
  v27[3] = 0; /*0x1005a8219*/
  v27[4] = 8; /*0x1005a8224*/
  v27[5] = 0; /*0x1005a822f*/
  v27[6] = 0; /*0x1005a823a*/
  v27[7] = 8; /*0x1005a8245*/
  v27[8] = 0; /*0x1005a8250*/
  v27[0] = 0; /*0x1005a825b*/
  v49 = 0; /*0x1005a8266*/
  v48 = 0; /*0x1005a8271*/
  v47 = 29; /*0x1005a827c*/
  v46 = 0; /*0x1005a8287*/
  v60 = &anon_1f22c03b288e649fafb3d21192ed4cff_932; /*0x1005a8299*/
  v61 = (__int64)&unk_1012C0CB0; /*0x1005a82a7*/
  v62 = 16; /*0x1005a82ae*/
  v63 = 0; /*0x1005a82b6*/
  LOBYTE(v64[0]) = 0; /*0x1005a82be*/
  http::header::map::HeaderMap$LT$T$GT$::try_insert2::hbabe0e5ec6db380c(&v51, v27, &v46, &v60); /*0x1005a82de*/
  if ( (_BYTE)v55 == 3 ) /*0x1005a82ea*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005a8b8a*/
      (__int64)"size overflows MAX_SIZE",
      23,
      (__int64)v70,
      (__int64)&unk_101534790,
      (__int64)&off_101533CA8);
  v69 = v55; /*0x1005a82f7*/
  v68 = v54; /*0x1005a8302*/
  v67 = v53; /*0x1005a830d*/
  v66 = v52; /*0x1005a831f*/
  v65 = v51; /*0x1005a8323*/
  if ( (_BYTE)v55 != 2 ) /*0x1005a8329*/
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v65 + 32))(&v68, v66, v67); /*0x1005a833b*/
  if ( *(_BYTE *)(a2 + 230) == 2 ) /*0x1005a8346*/
  {
    v4 = *(_QWORD *)(a2 + 80); /*0x1005a8348*/
    v5 = *(_QWORD *)(a2 + 88); /*0x1005a834c*/
    if ( v5 ) /*0x1005a8353*/
    {
      for ( i = 0; v5 != i; ++i ) /*0x1005a8359*/
      {
        v7 = *(_BYTE *)(v4 + i); /*0x1005a8375*/
        if ( v7 > 0x1Fu ) /*0x1005a837c*/
        {
          if ( v7 == 127 ) /*0x1005a8363*/
            goto LABEL_22; /*0x1005a8363*/
        }
        else if ( v7 != 9 ) /*0x1005a8381*/
        {
          goto LABEL_22; /*0x1005a8381*/
        }
      }
    }
    bytes::bytes::Bytes::copy_from_slice::h6785181ff68f826e(&v37, v4); /*0x1005a8409*/
    LOBYTE(v41) = 0; /*0x1005a8415*/
    v50 = v41; /*0x1005a8423*/
    v49 = v40; /*0x1005a8431*/
    v48 = v39; /*0x1005a843f*/
    v47 = v38; /*0x1005a8454*/
    v46 = (unsigned __int64)v37; /*0x1005a845b*/
    http::header::name::HeaderName::from_static::h9e434d159ca12d45(v32, &unk_1012CA312, 9); /*0x1005a8475*/
    v64[0] = v41; /*0x1005a8481*/
    v63 = v40; /*0x1005a848c*/
    v62 = v39; /*0x1005a8497*/
    v61 = v38; /*0x1005a84a9*/
    v60 = v37; /*0x1005a84b0*/
    http::header::map::HeaderMap$LT$T$GT$::try_insert2::hbabe0e5ec6db380c(&v51, v27, v32, &v60); /*0x1005a84d3*/
    if ( (_BYTE)v55 == 3 ) /*0x1005a84df*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005a8bd4*/
        (__int64)"size overflows MAX_SIZE",
        23,
        (__int64)v70,
        (__int64)&unk_101534790,
        (__int64)&off_101533CA8);
    v69 = v55; /*0x1005a84ec*/
    v68 = v54; /*0x1005a84f7*/
    v67 = v53; /*0x1005a8502*/
    v66 = v52; /*0x1005a8514*/
    v65 = v51; /*0x1005a8518*/
    if ( (_BYTE)v55 != 2 ) /*0x1005a851e*/
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v65 + 32))(&v68, v66, v67); /*0x1005a8530*/
LABEL_22:
    http::header::name::HeaderName::from_static::h9e434d159ca12d45(&v46, &unk_1012CA31B, 17); /*0x1005a8533*/
    v60 = &anon_1f22c03b288e649fafb3d21192ed4cff_932; /*0x1005a854b*/
    v61 = (__int64)&unk_1012CA32C; /*0x1005a8559*/
    v62 = 10; /*0x1005a8560*/
    v63 = 0; /*0x1005a8568*/
    LOBYTE(v64[0]) = 0; /*0x1005a8570*/
    http::header::map::HeaderMap$LT$T$GT$::try_insert2::hbabe0e5ec6db380c(&v51, v27, &v46, &v60); /*0x1005a8590*/
    if ( (_BYTE)v55 == 3 ) /*0x1005a859c*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005a8baf*/
        (__int64)"size overflows MAX_SIZE",
        23,
        (__int64)v70,
        (__int64)&unk_101534790,
        (__int64)&off_101533CA8);
    v69 = v55; /*0x1005a85a9*/
    v68 = v54; /*0x1005a85b4*/
    v67 = v53; /*0x1005a85bf*/
    v66 = v52; /*0x1005a85d1*/
    v65 = v51; /*0x1005a85d5*/
    if ( (_BYTE)v55 != 2 ) /*0x1005a85db*/
      (*(void (__fastcall **)(__int64 *, __int64, __int64))(v65 + 32))(&v68, v66, v67); /*0x1005a85f1*/
  }
  else
  {
    v60 = (__int64 (__fastcall **)())(a2 + 72); /*0x1005a838c*/
    v61 = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1005a839a*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4((size_t *)&v51, byte_10122B20B, (unsigned __int64)&v60); /*0x1005a83b6*/
    v8 = v51; /*0x1005a83bb*/
    if ( v53 ) /*0x1005a83d3*/
    {
      for ( j = 0; v53 != j; ++j ) /*0x1005a83d9*/
      {
        v10 = *(_BYTE *)(v52 + j); /*0x1005a83f5*/
        if ( v10 > 0x1Fu ) /*0x1005a83fd*/
        {
          if ( v10 == 127 ) /*0x1005a83e3*/
            goto LABEL_28; /*0x1005a83e3*/
        }
        else if ( v10 != 9 ) /*0x1005a8402*/
        {
          goto LABEL_28; /*0x1005a8402*/
        }
      }
    }
    bytes::bytes::Bytes::copy_from_slice::h6785181ff68f826e(&v65, v52); /*0x1005a85f9*/
    LOBYTE(v69) = 0; /*0x1005a8605*/
    v26[0] = v65; /*0x1005a8611*/
    v26[1] = v66; /*0x1005a8618*/
    v26[2] = v67; /*0x1005a8623*/
    v26[3] = v68; /*0x1005a862e*/
    v26[4] = v69; /*0x1005a8639*/
    v63 = 0; /*0x1005a8640*/
    v62 = 0; /*0x1005a8648*/
    v61 = 16; /*0x1005a8650*/
    v60 = nullptr; /*0x1005a865b*/
    http::header::map::HeaderMap$LT$T$GT$::try_insert2::hbabe0e5ec6db380c(&v51, v27, &v60, v26); /*0x1005a8682*/
    if ( (_BYTE)v55 == 3 ) /*0x1005a868e*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005a8bf9*/
        (__int64)"size overflows MAX_SIZE",
        23,
        (__int64)v70,
        (__int64)&unk_101534790,
        (__int64)&off_101533CA8);
    v64[0] = v55; /*0x1005a869b*/
    v63 = v54; /*0x1005a86a6*/
    v62 = v53; /*0x1005a86b1*/
    v61 = v52; /*0x1005a86c3*/
    v60 = (__int64 (__fastcall **)())v51; /*0x1005a86ca*/
    if ( (_BYTE)v55 != 2 ) /*0x1005a86d3*/
      ((void (__fastcall *)(__int64 *, __int64, __int64))v60[4])(&v63, v61, v62); /*0x1005a86eb*/
LABEL_28:
    if ( v8 ) /*0x1005a86f1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005a86fe*/
  }
  v11 = *(_QWORD *)(a2 + 152); /*0x1005a8703*/
  v12 = *(_QWORD *)(a2 + 160); /*0x1005a870a*/
  core::str::_$LT$impl$u20$str$GT$::trim_matches::h0335c6e49c88655a(v11, v12); /*0x1005a8717*/
  if ( v13 ) /*0x1005a871f*/
  {
    v51 = v11; /*0x1005a8725*/
    v52 = v12; /*0x1005a872c*/
    v53 = 0; /*0x1005a8733*/
    v54 = 0; /*0x1005a873e*/
    v55 = v11; /*0x1005a8749*/
    v56 = v12; /*0x1005a8750*/
    serde_json::de::from_trait::h7934c86b07af1b67(v28, &v51); /*0x1005a8765*/
    if ( v28[0] ) /*0x1005a8771*/
    {
      core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::ha15d82f2b359895c(&v29); /*0x1005a877a*/
    }
    else
    {
      v33 = a1; /*0x1005a8784*/
      v14 = v29; /*0x1005a879b*/
      if ( v29 ) /*0x1005a87a4*/
        v14 = v31; /*0x1005a87a6*/
      v51 = v29 != 0; /*0x1005a87ad*/
      v52 = 0; /*0x1005a87b4*/
      v53 = v29; /*0x1005a87bf*/
      v54 = v30; /*0x1005a87c6*/
      v55 = v51; /*0x1005a87cd*/
      v56 = 0; /*0x1005a87d4*/
      v57 = v29; /*0x1005a87df*/
      v58 = v30; /*0x1005a87e6*/
      v59 = v14; /*0x1005a87ed*/
      while ( 1 ) /*0x1005a881a*/
      {
        alloc::collections::btree::map::IntoIter$LT$K$C$V$C$A$GT$::dying_next::hed56a2ca4e213cdb( /*0x1005a881a*/
          (unsigned __int64 *)&v60,
          (__int64)&v51);
        if ( !v60 ) /*0x1005a8829*/
          break; /*0x1005a8829*/
        v15 = (__int64)v60[3 * v62 + 45]; /*0x1005a8837*/
        if ( __OFSUB__(-v15, 1) ) /*0x1005a8845*/
          break; /*0x1005a8845*/
        v16 = v60[3 * v62 + 46]; /*0x1005a884b*/
        v17 = v60[3 * v62 + 47]; /*0x1005a8853*/
        v36 = v60[4 * v62 + 3]; /*0x1005a8864*/
        v35 = v60[4 * v62 + 2]; /*0x1005a8870*/
        v18 = v60[4 * v62]; /*0x1005a8877*/
        v34[1] = v60[4 * v62 + 1]; /*0x1005a8880*/
        v34[0] = v18; /*0x1005a8887*/
        http::header::name::HeaderName::from_bytes::ha95a3402a9b13e2b(&v65, v16, v17); /*0x1005a8894*/
        v19 = v35; /*0x1005a88a3*/
        v20 = (__int64)v36; /*0x1005a88aa*/
        v21 = v35; /*0x1005a88b1*/
        if ( LOBYTE(v34[0]) != 3 ) /*0x1005a88b9*/
          v21 = nullptr; /*0x1005a88b9*/
        v60 = (__int64 (__fastcall **)())v65; /*0x1005a88c5*/
        v61 = v66; /*0x1005a88cc*/
        v62 = v67; /*0x1005a88d7*/
        v63 = v68; /*0x1005a88df*/
        v64[0] = v69; /*0x1005a88e7*/
        v64[1] = v21; /*0x1005a88eb*/
        v64[2] = v36; /*0x1005a88ef*/
        if ( v65 & 1 | (LOBYTE(v34[0]) != 3) ) /*0x1005a88f5*/
        {
          if ( (v65 & 1) == 0 && v61 ) /*0x1005a890c*/
          {
            v19 = (_QWORD *)v62; /*0x1005a8912*/
            (*(void (__fastcall **)(_QWORD *, __int64, __int64))(v61 + 32))(v64, v62, v63); /*0x1005a891e*/
          }
          goto LABEL_55; /*0x1005a8921*/
        }
        v45 = v64[0]; /*0x1005a8935*/
        v44 = v63; /*0x1005a8941*/
        v43 = (_QWORD *)v62; /*0x1005a8951*/
        v42 = v61; /*0x1005a8958*/
        if ( v36 ) /*0x1005a8962*/
        {
          for ( k = nullptr; v36 != k; k = (__int64 (__fastcall *)())((char *)k + 1) ) /*0x1005a8964*/
          {
            v23 = *((_BYTE *)k + (_QWORD)v35); /*0x1005a897d*/
            if ( v23 > 0x1Fu ) /*0x1005a8984*/
            {
              if ( v23 == 127 ) /*0x1005a8973*/
                goto LABEL_50; /*0x1005a8973*/
            }
            else if ( v23 != 9 ) /*0x1005a8989*/
            {
LABEL_50:
              if ( v42 ) /*0x1005a8995*/
              {
                v19 = v43; /*0x1005a899b*/
                (*(void (__fastcall **)(__int64 *, _QWORD *, __int64))(v42 + 32))(&v45, v43, v44); /*0x1005a89b0*/
              }
              goto LABEL_55; /*0x1005a89b3*/
            }
          }
        }
        bytes::bytes::Bytes::copy_from_slice::h6785181ff68f826e(&v37, v35); /*0x1005a89c0*/
        LOBYTE(v41) = 0; /*0x1005a89cc*/
        v25[0] = v37; /*0x1005a89e1*/
        v25[1] = v38; /*0x1005a89e8*/
        v25[2] = v39; /*0x1005a89f6*/
        v25[3] = v40; /*0x1005a8a04*/
        v25[4] = v41; /*0x1005a8a12*/
        v32[3] = v45; /*0x1005a8a20*/
        v32[2] = v44; /*0x1005a8a2e*/
        v32[1] = v43; /*0x1005a8a43*/
        v32[0] = v42; /*0x1005a8a4a*/
        v19 = v27; /*0x1005a8a54*/
        http::header::map::HeaderMap$LT$T$GT$::try_insert2::hbabe0e5ec6db380c(&v65, v27, v32, v25); /*0x1005a8a69*/
        if ( (_BYTE)v69 == 3 ) /*0x1005a8a72*/
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005a8b62*/
            (__int64)"size overflows MAX_SIZE",
            23,
            (__int64)v70,
            (__int64)&unk_101534790,
            (__int64)&off_101533CA8);
        v50 = v69; /*0x1005a8a7c*/
        v49 = v68; /*0x1005a8a87*/
        v48 = v67; /*0x1005a8a92*/
        v20 = v66; /*0x1005a8a9d*/
        v47 = v66; /*0x1005a8aa1*/
        v46 = v65; /*0x1005a8aa8*/
        if ( (_BYTE)v69 != 2 ) /*0x1005a8ab1*/
        {
          v19 = (_QWORD *)v47; /*0x1005a8aba*/
          (*(void (__fastcall **)(__int64 *, __int64, __int64))(v46 + 32))(&v49, v47, v48); /*0x1005a8acf*/
        }
LABEL_55:
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(v34, v19, v20); /*0x1005a8ae0*/
        if ( v15 ) /*0x1005a8aef*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005a8b00*/
      }
      _$LT$alloc..collections..btree..map..IntoIter$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::hebbee9ea7572bb11(&v51); /*0x1005a8b11*/
      v3 = v33; /*0x1005a8b16*/
    }
  }
  qmemcpy(v3, v27, 0x60u); /*0x1005a8b2c*/
  return v3; /*0x1005a8b32*/
}