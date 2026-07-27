// __ZN13codexmate_lib4core5relay18router_unlock_auth31validate_user_owned_auth_backup @ 0x100521ac0 | 基线 same-set
double __fastcall codexmate_lib::core::relay::router_unlock_auth::validate_user_owned_auth_backup::h8180e94bd907e42f(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int128 v9; // kr00_16
  __int64 i; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  _BYTE *v13; // rbx
  __int64 v14; // r15
  __int64 v15; // r12
  __int64 v16; // r13
  const void *v17; // rsi
  size_t v18; // rdx
  size_t v19; // r14
  __int64 v20; // r14
  int v21; // eax
  char v22; // cl
  __int64 v23; // r14
  void *v24; // rax
  void *v25; // rax
  _QWORD *v26; // rdx
  __int64 j; // rcx
  __int64 v28; // rax
  __int64 v29; // rdx
  _QWORD *v30; // r15
  __int64 v31; // r12
  __int64 v32; // rbx
  __int64 v33; // r13
  size_t v34; // rdx
  size_t v35; // r14
  __int64 v36; // r14
  int v37; // eax
  char v38; // cl
  __int64 v39; // rdi
  __int64 v40; // rax
  unsigned __int64 v41; // rdx
  __int64 v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // r14
  char v48; // al
  char v49; // al
  _QWORD *v50; // rbx
  __int64 v51; // r15
  void *v52; // rax
  __m128i v53; // xmm0
  void *v54; // rax
  void *v55; // rax
  _QWORD *v56; // rdx
  __m256i v58; // [rsp+8h] [rbp-258h] BYREF
  _BYTE __src[144]; // [rsp+28h] [rbp-238h] BYREF
  __m256i v60; // [rsp+B8h] [rbp-1A8h] BYREF
  _QWORD __dst[18]; // [rsp+D8h] [rbp-188h] BYREF
  __int64 v62; // [rsp+168h] [rbp-F8h]
  __int64 v63; // [rsp+170h] [rbp-F0h]
  __int128 v64; // [rsp+178h] [rbp-E8h] BYREF
  __int64 v65; // [rsp+188h] [rbp-D8h]
  __int64 v66; // [rsp+190h] [rbp-D0h]
  __int64 v67; // [rsp+198h] [rbp-C8h] BYREF
  __m256i v68; // [rsp+1A0h] [rbp-C0h] BYREF
  __int64 v69; // [rsp+1C0h] [rbp-A0h]
  _BYTE v70[31]; // [rsp+1C8h] [rbp-98h] BYREF
  __int64 v71; // [rsp+1E8h] [rbp-78h]
  __m256i v72; // [rsp+1F0h] [rbp-70h] BYREF
  _BYTE v73[24]; // [rsp+210h] [rbp-50h]
  _QWORD *v74; // [rsp+228h] [rbp-38h]
  _BYTE v75[41]; // [rsp+237h] [rbp-29h] BYREF

  v3 = a1; /*0x100521ad4*/
  v58.i64[0] = a2; /*0x100521ad7*/
  v58.i64[1] = a3; /*0x100521ade*/
  v58.i128[1] = 0u; /*0x100521ae5*/
  serde_json::de::from_trait::ha73f8db442141d1f(&v60, &v58); /*0x100521b09*/
  if ( v60.i8[0] == 6 ) /*0x100521b17*/
  {
    *(_QWORD *)&v64 = v60.i64[1]; /*0x100521b24*/
    v72.i64[0] = 0; /*0x100521b2b*/
    *(__int128 *)((char *)v72.i128 + 8) = 1u; /*0x100521b33*/
    v58.i64[2] = 1610612768; /*0x100521b43*/
    v58.i64[0] = (__int64)&v72; /*0x100521b52*/
    v58.i64[1] = (__int64)&anon_92869709a5e99ce1936aa4e326b6c562_1257; /*0x100521b60*/
    if ( (unsigned __int8)_$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d( /*0x100521b75*/
                            &v64,
                            &v58,
                            v4,
                            v5,
                            v6,
                            v7) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100522455*/
        &anon_92869709a5e99ce1936aa4e326b6c562_1258,
        55,
        v75,
        &anon_92869709a5e99ce1936aa4e326b6c562_1272,
        &anon_92869709a5e99ce1936aa4e326b6c562_1260);
    *(_OWORD *)v73 = v72.i128[0]; /*0x100521b8a*/
    *(_QWORD *)&v73[16] = v72.i64[2]; /*0x100521b96*/
    core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&v64); /*0x100521ba1*/
    v8 = *(_QWORD *)&v73[16]; /*0x100521ba6*/
    *(__int64 *)((char *)&v68.i64[2] + 7) = *(_QWORD *)&v73[16]; /*0x100521baa*/
    v9 = *(_OWORD *)v73; /*0x100521bb5*/
    *(__int128 *)((char *)v68.i128 + 7) = *(_OWORD *)v73; /*0x100521bc0*/
    *(_OWORD *)&v70[7] = *(_OWORD *)v73; /*0x100521bc7*/
    *(_QWORD *)&v70[23] = *(_QWORD *)&v73[16]; /*0x100521bd5*/
LABEL_4:
    v3[2] = v8; /*0x100521bdc*/
    *(_OWORD *)v3 = v9; /*0x100521be4*/
    return *(double *)v53.i64; /*0x100521be7*/
  }
  *(__int64 *)((char *)&v68.i64[2] + 7) = v60.i64[3]; /*0x100521bf3*/
  v68.i64[2] = *(__int64 *)((char *)&v60.i64[2] + 1); /*0x100521c01*/
  *(_OWORD *)v70 = *(__int128 *)((char *)v60.i128 + 1); /*0x100521c16*/
  *(_QWORD *)&v70[16] = *(__int64 *)((char *)&v60.i64[2] + 1); /*0x100521c32*/
  *(_QWORD *)&v70[23] = *(__int64 *)((char *)&v68.i64[2] + 7); /*0x100521c39*/
  *(__int128 *)((char *)v72.i128 + 1) = *(__int128 *)((char *)v60.i128 + 1); /*0x100521c40*/
  *(__int64 *)((char *)&v72.i64[2] + 1) = *(_QWORD *)&v70[16]; /*0x100521c56*/
  v72.i64[3] = *(__int64 *)((char *)&v68.i64[2] + 7); /*0x100521c5a*/
  v72.i8[0] = v60.i8[0]; /*0x100521c5e*/
  if ( v60.i8[0] != 5 ) /*0x100521c63*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2( /*0x100521d60*/
      *(__int64 *)((char *)&v68.i64[2] + 7),
      *(__int64 *)((char *)&v60.i64[2] + 1));
    v23 = 33; /*0x100521d65*/
    v24 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(33, 1); /*0x100521d75*/
    if ( v24 ) /*0x100521d7d*/
    {
      qmemcpy(v24, "auth backup root is not an object", 33); /*0x100521db7*/
      *a1 = 33; /*0x100521dbe*/
      a1[1] = v24; /*0x100521dc5*/
      a1[2] = 33; /*0x100521dc9*/
LABEL_22:
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v72); /*0x100521dd1*/
      return *(double *)v53.i64; /*0x100521dd5*/
    }
LABEL_81:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v23); /*0x100522481*/
  }
  v74 = a1; /*0x100521c69*/
  if ( v72.i64[1] ) /*0x100521c74*/
  {
    v66 = v72.i64[2]; /*0x100521c7e*/
    v71 = v72.i64[2]; /*0x100521c85*/
    v69 = v72.i64[1]; /*0x100521c89*/
    for ( i = v72.i64[1]; ; i = *(_QWORD *)(v62 + 8 * v15 + 632) ) /*0x100521c90*/
    {
      v11 = i + 360; /*0x100521c93*/
      v12 = *(unsigned __int16 *)(i + 626); /*0x100521c9a*/
      v62 = i; /*0x100521ca1*/
      v13 = (_BYTE *)(i - 31); /*0x100521ca8*/
      v63 = v12; /*0x100521cac*/
      v14 = 3LL * (unsigned int)(8 * v12); /*0x100521cba*/
      v15 = -1; /*0x100521cbe*/
      do /*0x100521d24*/
      {
        if ( !v14 ) /*0x100521cd3*/
        {
          v15 = v63; /*0x100521d33*/
          goto LABEL_18; /*0x100521d33*/
        }
        v16 = v11 + 24; /*0x100521cd5*/
        v17 = *(const void **)(v11 + 8); /*0x100521cd9*/
        v18 = *(_QWORD *)(v11 + 16); /*0x100521cdd*/
        v19 = v18 - 25; /*0x100521ce4*/
        if ( v18 >= 0x19 ) /*0x100521ced*/
          v18 = 25; /*0x100521ced*/
        v20 = -(__int64)v19; /*0x100521cf1*/
        v21 = memcmp("aimami_router_unlock_authlast_refresh", v17, v18); /*0x100521cfb*/
        if ( v21 ) /*0x100521d04*/
          v20 = v21; /*0x100521d04*/
        v22 = (v20 > 0) - (v20 < 0); /*0x100521d11*/
        v13 += 32; /*0x100521d13*/
        ++v15; /*0x100521d17*/
        v14 -= 24; /*0x100521d1a*/
        v11 = v16; /*0x100521d1e*/
      }
      while ( v22 == 1 ); /*0x100521d24*/
      if ( !v22 ) /*0x100521d2b*/
        break; /*0x100521d2b*/
LABEL_18:
      if ( !v71 ) /*0x100521d42*/
        goto LABEL_28; /*0x100521d42*/
      --v71; /*0x100521d48*/
    }
    if ( *(v13 - 1) == 1 && *v13 ) /*0x100521df6*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("aimami_router_unlock_authlast_refresh", v17); /*0x100521dff*/
      v23 = 41; /*0x100521e04*/
      v25 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(41, 1); /*0x100521e14*/
      v26 = v74; /*0x100521e1c*/
      if ( v25 ) /*0x100521e20*/
      {
        qmemcpy(v25, "backup contains AiMaMi router unlock auth", 41); /*0x100521e68*/
        *v26 = 41; /*0x100521e6f*/
        v26[1] = v25; /*0x100521e76*/
        v26[2] = 41; /*0x100521e7a*/
        goto LABEL_22; /*0x100521e82*/
      }
      goto LABEL_81; /*0x100521e20*/
    }
LABEL_28:
    for ( j = v69; ; j = *(_QWORD *)(v69 + 8 * v32 + 632) ) /*0x100521e87*/
    {
      v28 = j + 360; /*0x100521e8e*/
      v29 = *(unsigned __int16 *)(j + 626); /*0x100521e95*/
      v69 = j; /*0x100521e9c*/
      v30 = (_QWORD *)(j - 8); /*0x100521ea3*/
      v71 = v29; /*0x100521ea7*/
      v31 = 3LL * (unsigned int)(8 * v29); /*0x100521eb2*/
      v32 = -1; /*0x100521eb6*/
      do /*0x100521f14*/
      {
        if ( !v31 ) /*0x100521ec3*/
        {
          v32 = v71; /*0x100521f1f*/
          goto LABEL_39; /*0x100521f1f*/
        }
        v33 = v28 + 24; /*0x100521ec5*/
        v34 = *(_QWORD *)(v28 + 16); /*0x100521ecd*/
        v35 = v34 - 14; /*0x100521ed4*/
        if ( v34 >= 0xE ) /*0x100521edd*/
          v34 = 14; /*0x100521edd*/
        v36 = -(__int64)v35; /*0x100521ee1*/
        v37 = memcmp("OPENAI_API_KEY", *(const void **)(v28 + 8), v34); /*0x100521eeb*/
        if ( v37 ) /*0x100521ef4*/
          v36 = v37; /*0x100521ef4*/
        v38 = (v36 > 0) - (v36 < 0); /*0x100521f01*/
        v30 += 4; /*0x100521f03*/
        ++v32; /*0x100521f07*/
        v31 -= 24; /*0x100521f0a*/
        v28 = v33; /*0x100521f0e*/
      }
      while ( v38 == 1 ); /*0x100521f14*/
      if ( !v38 ) /*0x100521f1b*/
        break; /*0x100521f1b*/
LABEL_39:
      if ( !v66 ) /*0x100521f35*/
        goto LABEL_43; /*0x100521f35*/
      --v66; /*0x100521f37*/
    }
    if ( *((_BYTE *)v30 - 24) == 3 ) /*0x100521f50*/
    {
      v39 = *(v30 - 1); /*0x100521f52*/
      v42 = *v30; /*0x100521f56*/
      v40 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v39, *v30); /*0x100521f59*/
      LOBYTE(v42) = v40 == 0 || v41 == 0; /*0x100521f6b*/
      if ( (_BYTE)v42 != 1 ) /*0x100521f72*/
      {
        if ( v41 < 0x17 /*0x1005221fb*/
          || (v53 = _mm_or_si128(
                      _mm_xor_si128(_mm_loadu_si128((const __m128i *)v40), (__m128i)xmmword_1015DCAC0),
                      _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v40 + 7)), (__m128i)xmmword_1015DCAB0)),
              !_mm_testz_si128(v53, v53)) )
        {
          *v74 = 0x8000000000000000LL; /*0x10052220f*/
          goto LABEL_22; /*0x100522212*/
        }
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v39, v42); /*0x1005223b3*/
        v23 = 39; /*0x1005223b8*/
        v55 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(39, 1); /*0x1005223c8*/
        v56 = v74; /*0x1005223d0*/
        if ( v55 ) /*0x1005223d4*/
        {
          qmemcpy(v55, "backup contains AiMaMi virtual API auth", 39); /*0x10052241c*/
          *v56 = 39; /*0x10052241f*/
          v56[1] = v55; /*0x100522426*/
          v56[2] = 39; /*0x10052242a*/
          goto LABEL_22; /*0x100522432*/
        }
        goto LABEL_81; /*0x1005223d4*/
      }
    }
  }
LABEL_43:
  v68 = v72; /*0x100521f78*/
  serde_json::value::de::_$LT$impl$u20$serde_core..de..Deserializer$u20$for$u20$serde_json..value..Value$GT$::deserialize_struct::h5f0f946ee36a0d17(&v58); /*0x100521fd5*/
  v47 = v58.i64[0]; /*0x100521fda*/
  if ( v58.i64[0] == 0x8000000000000001LL ) /*0x100521fe9*/
  {
    v67 = v58.i64[1]; /*0x100521ff6*/
    *(_QWORD *)v70 = 0; /*0x100521ffd*/
    *(_OWORD *)&v70[8] = 1u; /*0x100522008*/
    v68.i64[2] = 1610612768; /*0x10052201e*/
    v68.i64[0] = (__int64)v70; /*0x100522030*/
    v68.i64[1] = (__int64)&anon_92869709a5e99ce1936aa4e326b6c562_1257; /*0x10052203e*/
    v48 = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d( /*0x100522053*/
            &v67,
            &v68,
            v43,
            v44,
            v45,
            v46);
    v3 = v74; /*0x100522058*/
    if ( v48 ) /*0x10052205e*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10052247a*/
        &anon_92869709a5e99ce1936aa4e326b6c562_1258,
        55,
        v75,
        &anon_92869709a5e99ce1936aa4e326b6c562_1272,
        &anon_92869709a5e99ce1936aa4e326b6c562_1260);
    *(_OWORD *)v73 = *(_OWORD *)v70; /*0x100522072*/
    *(_QWORD *)&v73[16] = *(_QWORD *)&v70[16]; /*0x100522081*/
    core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&v67); /*0x10052208c*/
    v8 = *(_QWORD *)&v73[16]; /*0x100522091*/
    v65 = *(_QWORD *)&v73[16]; /*0x100522095*/
    v64 = *(_OWORD *)v73; /*0x1005220ab*/
    v9 = *(_OWORD *)v73; /*0x1005220b2*/
    goto LABEL_4; /*0x1005220b2*/
  }
  *(_OWORD *)&v73[8] = v58.i128[1]; /*0x1005220cd*/
  *(_QWORD *)v73 = v58.i64[1]; /*0x1005220d1*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x1005220e8*/
  *(_QWORD *)&v64 = v58.i64[1]; /*0x1005220f5*/
  v60 = v58; /*0x100522107*/
  v49 = codexmate_lib::core::auth::is_aimami_managed_virtual_auth::h4d4a884f31f32b45(&v60); /*0x100522123*/
  v50 = v74; /*0x100522128*/
  if ( v49 ) /*0x10052212e*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v60, __src); /*0x100522134*/
    v51 = 43; /*0x100522139*/
    v52 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(43, 1); /*0x100522149*/
    if ( v52 ) /*0x100522151*/
    {
      qmemcpy(v52, "backup contains AiMaMi managed virtual auth", 43); /*0x100522199*/
      *v50 = 43; /*0x1005221a3*/
      v50[1] = v52; /*0x1005221aa*/
      v50[2] = 43; /*0x1005221ae*/
      goto LABEL_56; /*0x1005221b6*/
    }
LABEL_82:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v51); /*0x100522490*/
  }
  if ( (unsigned __int8)codexmate_lib::core::auth::is_switchable_oauth_auth::h344abcad54fe8a18(&v60) ) /*0x1005221c2*/
  {
    *v50 = 0x8000000000000000LL; /*0x1005221cb*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v60, __src); /*0x100522217*/
    v51 = 61; /*0x10052221c*/
    v54 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(61, 1); /*0x10052222c*/
    if ( !v54 ) /*0x100522234*/
      goto LABEL_82; /*0x100522234*/
    qmemcpy(v54, "backup contains neither user OAuth auth nor user API-key auth", 61); /*0x1005222a6*/
    *v50 = 61; /*0x1005222a9*/
    v50[1] = v54; /*0x1005222b0*/
    v50[2] = 61; /*0x1005222b4*/
  }
LABEL_56:
  if ( v47 != 0x8000000000000000LL && v47 ) /*0x1005222c4*/
    *(double *)v53.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v60.i64[1], v47, 1); /*0x1005222d5*/
  if ( v60.i64[3] != 0x8000000000000000LL && v60.i64[3] ) /*0x1005222e9*/
    *(double *)v53.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[0], v60.i64[3], 1); /*0x1005222f7*/
  if ( __dst[2] != 0x8000000000000000LL && __dst[2] ) /*0x10052230b*/
    *(double *)v53.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[3], __dst[2], 1); /*0x100522319*/
  if ( __dst[5] != 0x8000000000000000LL && __dst[5] ) /*0x10052232d*/
    *(double *)v53.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[6], __dst[5], 1); /*0x10052233b*/
  if ( __dst[8] != 0x8000000000000000LL && __dst[8] ) /*0x10052234f*/
    *(double *)v53.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[9], __dst[8], 1); /*0x10052235d*/
  if ( __dst[11] != 0x8000000000000000LL && __dst[11] ) /*0x100522371*/
    *(double *)v53.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[12], __dst[11], 1); /*0x10052237f*/
  if ( __dst[14] != 0x8000000000000000LL && __dst[14] ) /*0x100522397*/
    *(double *)v53.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[15], __dst[14], 1); /*0x1005223a9*/
  return *(double *)v53.i64; /*0x100521dda*/
}