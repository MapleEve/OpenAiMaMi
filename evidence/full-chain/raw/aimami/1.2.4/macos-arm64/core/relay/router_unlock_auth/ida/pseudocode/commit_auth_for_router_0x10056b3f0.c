// __ZN13codexmate_lib4core5relay18router_unlock_auth22commit_auth_for_router @ 0x10056b3f0 | 1.2.4 NEW-delta
_QWORD *__fastcall codexmate_lib::core::relay::router_unlock_auth::commit_auth_for_router::hbd47de2b3edfcaef(
        _QWORD *a1,
        _QWORD *a2,
        int a3)
{
  __int64 v5; // rax
  __int64 v6; // rsi
  _BYTE *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  char v10; // r14
  void *v11; // rax
  void *v12; // r14
  __int64 v13; // r15
  __int64 v14; // r12
  char v15; // al
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r14
  void *v19; // rax
  void *v20; // r15
  void *v21; // rax
  void *v22; // r15
  __int64 v23; // rsi
  void *v24; // rdi
  void *v26; // r15
  __int64 v27; // r12
  __int64 v28; // r13
  __int64 v29; // r13
  __int64 v30; // r12
  __int64 v31; // r15
  int v32; // edx
  __int64 v33; // rax
  __int64 v34; // r12
  __int64 v35; // r15
  __int64 v36; // r14
  char v37; // r12
  __int64 v38; // rax
  __int64 v39; // rcx
  __int128 v40; // xmm0
  void *v41; // r13
  void *v42; // rsi
  __int64 v43; // rdx
  __int64 v44; // rcx
  void *v45; // r15
  size_t v46; // r12
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // rcx
  void *v50; // rax
  void *v51; // rsi
  void *v52; // r15
  _QWORD *v53; // rdi
  __int64 v54; // rdx
  __int64 v55; // rcx
  __int64 v56; // rax
  void *v57; // rax
  void *v58; // r14
  _OWORD __dst[11]; // [rsp+8h] [rbp-298h] BYREF
  void *v60; // [rsp+B8h] [rbp-1E8h]
  __int64 v61; // [rsp+C0h] [rbp-1E0h] BYREF
  __int64 v62; // [rsp+C8h] [rbp-1D8h]
  __int64 v63; // [rsp+D0h] [rbp-1D0h]
  _QWORD v64[2]; // [rsp+D8h] [rbp-1C8h] BYREF
  __int64 v65; // [rsp+E8h] [rbp-1B8h]
  __int64 v66; // [rsp+F0h] [rbp-1B0h] BYREF
  __int64 v67; // [rsp+F8h] [rbp-1A8h]
  __int64 v68; // [rsp+100h] [rbp-1A0h]
  __int64 v69; // [rsp+108h] [rbp-198h]
  _BYTE __src[176]; // [rsp+110h] [rbp-190h] BYREF
  __int64 v71; // [rsp+1C0h] [rbp-E0h] BYREF
  void *v72; // [rsp+1C8h] [rbp-D8h]
  size_t v73; // [rsp+1D0h] [rbp-D0h]
  __int128 v74; // [rsp+1D8h] [rbp-C8h] BYREF
  __int64 v75; // [rsp+1E8h] [rbp-B8h]
  unsigned __int64 v76; // [rsp+1F0h] [rbp-B0h]
  unsigned __int64 v77; // [rsp+208h] [rbp-98h]
  __int64 v78; // [rsp+220h] [rbp-80h]
  char v79; // [rsp+228h] [rbp-78h]
  __int128 v80; // [rsp+230h] [rbp-70h] BYREF
  __int64 v81; // [rsp+240h] [rbp-60h]
  __int64 v82; // [rsp+248h] [rbp-58h] BYREF
  __int64 v83; // [rsp+250h] [rbp-50h]
  __int64 v84; // [rsp+258h] [rbp-48h]
  size_t v85; // [rsp+260h] [rbp-40h]
  void *v86; // [rsp+268h] [rbp-38h]
  __int64 v87; // [rsp+270h] [rbp-30h]

  if ( !a3 ) /*0x10056b40c*/
  {
    v6 = a2[4]; /*0x10056b439*/
    codexmate_lib::core::auth::load_auth_file::h9deb6ed1cc224e90(__src, v6, a2[5]); /*0x10056b448*/
    if ( *(_QWORD *)__src == 0x8000000000000001LL ) /*0x10056b458*/
    {
      v7 = &__src[8]; /*0x10056b45a*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hd9449ef6f49a72b3(&__src[8]); /*0x10056b461*/
    }
    else
    {
      memcpy(__dst, __src, sizeof(__dst)); /*0x10056b481*/
      v7 = __dst; /*0x10056b486*/
      v10 = codexmate_lib::core::relay::router_unlock_auth::auth_is_usable_real_oauth::h6e7e553ec9b7fa62(__dst); /*0x10056b48e*/
      if ( *(_QWORD *)&__dst[0] != 0x8000000000000000LL && *(_QWORD *)&__dst[0] ) /*0x10056b4a0*/
      {
        v7 = *((_BYTE **)&__dst[0] + 1); /*0x10056b4a2*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__dst[0] + 1), *(_QWORD *)&__dst[0], 1); /*0x10056b4ae*/
      }
      if ( *((_QWORD *)&__dst[1] + 1) != 0x8000000000000000LL && *((_QWORD *)&__dst[1] + 1) ) /*0x10056b4c2*/
      {
        v7 = *(_BYTE **)&__dst[2]; /*0x10056b4c4*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__dst[2], *((_QWORD *)&__dst[1] + 1), 1); /*0x10056b4d0*/
      }
      if ( *(_QWORD *)&__dst[3] != 0x8000000000000000LL && *(_QWORD *)&__dst[3] ) /*0x10056b4e4*/
      {
        v7 = *((_BYTE **)&__dst[3] + 1); /*0x10056b4e6*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__dst[3] + 1), *(_QWORD *)&__dst[3], 1); /*0x10056b4f2*/
      }
      if ( *((_QWORD *)&__dst[4] + 1) != 0x8000000000000000LL && *((_QWORD *)&__dst[4] + 1) ) /*0x10056b506*/
      {
        v7 = *(_BYTE **)&__dst[5]; /*0x10056b508*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__dst[5], *((_QWORD *)&__dst[4] + 1), 1); /*0x10056b514*/
      }
      if ( *(_QWORD *)&__dst[6] != 0x8000000000000000LL && *(_QWORD *)&__dst[6] ) /*0x10056b528*/
      {
        v7 = *((_BYTE **)&__dst[6] + 1); /*0x10056b52a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__dst[6] + 1), *(_QWORD *)&__dst[6], 1); /*0x10056b536*/
      }
      if ( *((_QWORD *)&__dst[7] + 1) != 0x8000000000000000LL && *((_QWORD *)&__dst[7] + 1) ) /*0x10056b54a*/
      {
        v7 = *(_BYTE **)&__dst[8]; /*0x10056b54c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&__dst[8], *((_QWORD *)&__dst[7] + 1), 1); /*0x10056b558*/
      }
      v6 = *(_QWORD *)&__dst[9]; /*0x10056b55d*/
      if ( *(_QWORD *)&__dst[9] != 0x8000000000000000LL && *(_QWORD *)&__dst[9] ) /*0x10056b56c*/
      {
        v7 = *((_BYTE **)&__dst[9] + 1); /*0x10056b56e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&__dst[9] + 1), *(_QWORD *)&__dst[9], 1); /*0x10056b57a*/
      }
      if ( v10 ) /*0x10056b582*/
      {
        *a1 = 11; /*0x10056b584*/
        return a1; /*0x10056b58b*/
      }
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v7, v6, v8, v9); /*0x10056b590*/
    v11 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(84, 1); /*0x10056b59f*/
    if ( !v11 ) /*0x10056b5a7*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 84); /*0x10056bff9*/
    v12 = v11; /*0x10056b5ad*/
    memcpy(v11, &unk_10166F865, 0x54u); /*0x10056b5bf*/
    *a1 = 10; /*0x10056b5c4*/
    a1[1] = 84; /*0x10056b5cb*/
    a1[2] = v12; /*0x10056b5d3*/
    a1[3] = 84; /*0x10056b5d7*/
    return a1; /*0x10056b5df*/
  }
  v5 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h75c583493c9998b0(a2); /*0x10056b411*/
  if ( v5 ) /*0x10056b419*/
  {
    *a1 = 2; /*0x10056b41f*/
    a1[1] = v5; /*0x10056b426*/
    return a1; /*0x10056b42a*/
  }
  v13 = a2[73]; /*0x10056b5e4*/
  v14 = a2[74]; /*0x10056b5eb*/
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x10056b60c*/
    &v71,
    v13,
    v14,
    "router-unlock-auth-marker.jsoncodexmate_lib::core::relay::router_unlock_authaimami_router_unlock_auth",
    30);
  std::path::Path::_join::hb1a495d4f06b13b8(&v82, v13, v14, &anon_d163fe72d6e6e73a137b22815ab75905_153, 30); /*0x10056b628*/
  v15 = codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h8249590d803b3f6b(a2); /*0x10056b630*/
  if ( v15 == 2 ) /*0x10056b637*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, v13, v16, v17); /*0x10056b69c*/
    v18 = 77; /*0x10056b6a1*/
    v21 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(77, 1); /*0x10056b6b1*/
    if ( !v21 ) /*0x10056b6b9*/
      goto LABEL_92; /*0x10056b6b9*/
    v22 = v21; /*0x10056b6bf*/
    memcpy(v21, &unk_10166FA3F, 0x4Du); /*0x10056b6d1*/
    *a1 = 10; /*0x10056b6d6*/
    a1[1] = 77; /*0x10056b6dd*/
    a1[2] = v22; /*0x10056b6e5*/
    a1[3] = 77; /*0x10056b6e9*/
LABEL_37:
    if ( v82 ) /*0x10056b6f8*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v83, v82, 1); /*0x10056b703*/
    v23 = v71; /*0x10056b708*/
    if ( v71 ) /*0x10056b712*/
    {
      v24 = v72; /*0x10056b714*/
LABEL_41:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v23, 1); /*0x10056b720*/
      return a1; /*0x10056b720*/
    }
    return a1; /*0x10056b712*/
  }
  if ( v15 == 4 ) /*0x10056b63f*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, v13, v16, v17); /*0x10056b645*/
    v18 = 72; /*0x10056b64a*/
    v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(72, 1); /*0x10056b65a*/
    if ( v19 ) /*0x10056b662*/
    {
      v20 = v19; /*0x10056b668*/
      memcpy(v19, &unk_10166FA8C, 0x48u); /*0x10056b67a*/
      *a1 = 10; /*0x10056b67f*/
      a1[1] = 72; /*0x10056b686*/
      a1[2] = v20; /*0x10056b68e*/
      a1[3] = 72; /*0x10056b692*/
      goto LABEL_37; /*0x10056b69a*/
    }
LABEL_92:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v18); /*0x10056bffe*/
  }
  v26 = (void *)a2[4]; /*0x10056b73a*/
  v27 = a2[5]; /*0x10056b73e*/
  codexmate_lib::core::relay::router_unlock_auth::managed_api_key::h206b580a266c76f4((size_t *)&v66, (__int64)v26, v27); /*0x10056b74f*/
  v28 = v66; /*0x10056b754*/
  if ( !__OFSUB__(-v66, 1) ) /*0x10056b761*/
  {
    v34 = v67; /*0x10056b8a6*/
    v35 = v68; /*0x10056b8ad*/
    if ( (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::managed_api_key_marker_matches::h41b8ff8f11868916(a2) ) /*0x10056b8b7*/
    {
      *a1 = 11; /*0x10056b8c0*/
      if ( v28 ) /*0x10056b8ca*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v28, 1); /*0x10056b8db*/
    }
    else
    {
      v87 = v34; /*0x10056b8e5*/
      v86 = v72; /*0x10056b8f0*/
      v85 = v73; /*0x10056b8fb*/
      v36 = codexmate_lib::core::auth::current_timestamp::hf23dffb6d4f607a4(); /*0x10056b904*/
      std::sys::fs::metadata::h32fa16d3052ea535(__src, v83, v84); /*0x10056b916*/
      v37 = __src[0]; /*0x10056b91b*/
      core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h2adb4e876f561eac( /*0x10056b92c*/
        *(_QWORD *)__src,
        *(_QWORD *)&__src[8]);
      *(_QWORD *)&v74 = v28; /*0x10056b931*/
      *((_QWORD *)&v74 + 1) = v87; /*0x10056b93c*/
      v75 = v35; /*0x10056b943*/
      v76 = 0x8000000000000000LL; /*0x10056b954*/
      v77 = 0x8000000000000000LL; /*0x10056b95b*/
      v78 = v36; /*0x10056b962*/
      v79 = v37 ^ 1; /*0x10056b96a*/
      codexmate_lib::core::relay::router_unlock_auth::write_json::h582de803c49be74a(__dst, v86, v85, (__int64)&v74); /*0x10056b984*/
      if ( LODWORD(__dst[0]) == 11 ) /*0x10056b990*/
      {
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..router_unlock_auth..RouterUnlockAuthMarker$GT$::hfb73fe633803ad4e(&v74); /*0x10056b99d*/
        *a1 = 11; /*0x10056b9a2*/
      }
      else
      {
        qmemcpy(a1, __dst, 0x60u); /*0x10056be42*/
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..router_unlock_auth..RouterUnlockAuthMarker$GT$::hfb73fe633803ad4e(&v74); /*0x10056be4c*/
      }
    }
    goto LABEL_37; /*0x10056b8e0*/
  }
  std::sys::fs::metadata::h32fa16d3052ea535(__src, v26, v27); /*0x10056b774*/
  v29 = *(_QWORD *)__src; /*0x10056b779*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h2adb4e876f561eac( /*0x10056b78a*/
    *(_QWORD *)__src,
    *(_QWORD *)&__src[8]);
  if ( v29 ) /*0x10056b792*/
    goto LABEL_45; /*0x10056b792*/
  std::fs::read::inner::h6a30c15c40add28b(__dst, v26, v27); /*0x10056b9bb*/
  v87 = *(_QWORD *)&__dst[0]; /*0x10056b9d8*/
  if ( *(_QWORD *)&__dst[0] == 0x8000000000000000LL ) /*0x10056b9df*/
  {
    codexmate_lib::core::relay::router_unlock_auth::install_managed_api_key_auth::_$u7b$$u7b$closure$u7d$$u7d$::hca2393a73d1bd0f1( /*0x10056b9ec*/
      __src,
      *((_QWORD *)&__dst[0] + 1));
    v38 = *(_QWORD *)&__src[16]; /*0x10056b9f1*/
    v39 = *(_QWORD *)&__src[24]; /*0x10056b9f8*/
    a1[11] = *(_QWORD *)&__src[88]; /*0x10056ba06*/
    a1[10] = *(_QWORD *)&__src[80]; /*0x10056ba11*/
    a1[9] = *(_QWORD *)&__src[72]; /*0x10056ba1c*/
    a1[8] = *(_QWORD *)&__src[64]; /*0x10056ba27*/
    a1[7] = *(_QWORD *)&__src[56]; /*0x10056ba32*/
    a1[6] = *(_QWORD *)&__src[48]; /*0x10056ba3d*/
    a1[5] = *(_QWORD *)&__src[40]; /*0x10056ba48*/
    a1[4] = *(_QWORD *)&__src[32]; /*0x10056ba53*/
    v40 = *(_OWORD *)__src; /*0x10056ba57*/
    a1[2] = v38; /*0x10056ba5e*/
    a1[3] = v39; /*0x10056ba62*/
    *(_OWORD *)a1 = v40; /*0x10056ba66*/
    goto LABEL_37; /*0x10056ba69*/
  }
  v86 = *((void **)&__dst[0] + 1); /*0x10056bdea*/
  codexmate_lib::core::relay::router_unlock_auth::validate_user_owned_auth_backup::hd54e6c84131a166b( /*0x10056bdee*/
    &v74,
    *((_QWORD *)&__dst[0] + 1),
    *(_QWORD *)&__dst[1]);
  if ( (_QWORD)v74 != 0x8000000000000000LL ) /*0x10056be04*/
  {
    *(_QWORD *)&__dst[1] = v75; /*0x10056be74*/
    __dst[0] = v74; /*0x10056be90*/
    codexmate_lib::core::relay::router_unlock_auth::install_managed_api_key_auth::_$u7b$$u7b$closure$u7d$$u7d$::h44321e19555a2c60( /*0x10056bea5*/
      __src,
      __dst);
LABEL_80:
    qmemcpy(a1, __src, 0x60u); /*0x10056beb9*/
    if ( v87 ) /*0x10056bec3*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86, v87, 1); /*0x10056bed2*/
    goto LABEL_37; /*0x10056bed7*/
  }
  v56 = codexmate_lib::core::relay::atomic_write::copy_atomic_private::h67b68ceac491e52f(v26, v27, v83, v84); /*0x10056be14*/
  if ( v56 ) /*0x10056be1c*/
  {
    codexmate_lib::core::relay::router_unlock_auth::install_managed_api_key_auth::_$u7b$$u7b$closure$u7d$$u7d$::h33c05a98ae5f6b4a( /*0x10056be2c*/
      __src,
      v56);
    goto LABEL_80; /*0x10056be31*/
  }
  if ( v87 ) /*0x10056bf6a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86, v87, 1); /*0x10056bf79*/
LABEL_45:
  uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(__src); /*0x10056b798*/
  v74 = *(_OWORD *)__src; /*0x10056b7b9*/
  *(_QWORD *)__src = &off_101973CE8; /*0x10056b7c7*/
  *(_QWORD *)&__src[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h80995b1b08be7446; /*0x10056b7d5*/
  *(_QWORD *)&__src[16] = &v74; /*0x10056b7e3*/
  *(_QWORD *)&__src[24] = _$LT$uuid..fmt..Simple$u20$as$u20$core..fmt..Display$GT$::fmt::h106aa4fe61c71bc2; /*0x10056b7f1*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(__dst, &unk_1017C8531, __src); /*0x10056b80d*/
  v85 = v27; /*0x10056b812*/
  v86 = v26; /*0x10056b816*/
  v80 = __dst[0]; /*0x10056b828*/
  v81 = *(_QWORD *)&__dst[1]; /*0x10056b837*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(__src, &v80); /*0x10056b846*/
  v30 = *(_QWORD *)&__src[8]; /*0x10056b856*/
  v87 = *(_QWORD *)__src; /*0x10056b856*/
  v31 = *(_QWORD *)&__src[16]; /*0x10056b85d*/
  *(_QWORD *)&v74 = std::time::SystemTime::now::h1fe79e41f9d5677f(); /*0x10056b869*/
  DWORD2(v74) = v32; /*0x10056b870*/
  std::time::SystemTime::duration_since::had059553cab94f96(__src, &v74, 0, 0); /*0x10056b888*/
  if ( __src[0] ) /*0x10056b894*/
    v33 = 0; /*0x10056ba6e*/
  else
    v33 = *(_QWORD *)&__src[8]; /*0x10056b89a*/
  *(_QWORD *)&__dst[0] = v87; /*0x10056ba74*/
  *((_QWORD *)&__dst[0] + 1) = v30; /*0x10056ba7b*/
  *(_QWORD *)&__dst[1] = v31; /*0x10056ba82*/
  *((_QWORD *)&__dst[1] + 1) = 0x8000000000000000LL; /*0x10056ba93*/
  *(_QWORD *)&__dst[3] = 0x8000000000000000LL; /*0x10056ba9a*/
  *((_QWORD *)&__dst[4] + 1) = v33; /*0x10056baa1*/
  LOBYTE(__dst[5]) = v29 ^ 1; /*0x10056baac*/
  v41 = v72; /*0x10056bab3*/
  v42 = v72; /*0x10056bacf*/
  codexmate_lib::core::relay::router_unlock_auth::write_json::h582de803c49be74a(__src, v72, v73, (__int64)__dst); /*0x10056bad2*/
  v45 = v86; /*0x10056bade*/
  v46 = v85; /*0x10056bae2*/
  if ( *(_DWORD *)__src != 11 ) /*0x10056bae6*/
  {
    qmemcpy(a1, __src, 0x60u); /*0x10056bdd4*/
    goto LABEL_85; /*0x10056bdd4*/
  }
  v60 = v41; /*0x10056baec*/
  v64[0] = 0; /*0x10056baf3*/
  v65 = 0; /*0x10056bafe*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, v42, v43, v44); /*0x10056bb09*/
  v87 = 9; /*0x10056bb13*/
  v47 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1); /*0x10056bb21*/
  if ( !v47 ) /*0x10056bb29*/
    goto LABEL_93; /*0x10056bb29*/
  *(_QWORD *)v47 = 0x646F6D5F68747561LL; /*0x10056bb3c*/
  *(_BYTE *)(v47 + 8) = 101; /*0x10056bb40*/
  v61 = 9; /*0x10056bb45*/
  v62 = v47; /*0x10056bb50*/
  v63 = 9; /*0x10056bb57*/
  serde_json::value::to_value::hb3d255fe20bc7a30(__src, &off_101973CF8); /*0x10056bb70*/
  if ( __src[0] == 6 ) /*0x10056bb7c*/
  {
    *(_QWORD *)&v74 = *(_QWORD *)&__src[8]; /*0x10056bf8a*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10056bfb2*/
      &anon_d163fe72d6e6e73a137b22815ab75905_1158,
      43,
      &v74,
      &off_101975028,
      &off_101973D08);
  }
  v76 = *(_QWORD *)&__src[24]; /*0x10056bb89*/
  v75 = *(_QWORD *)&__src[16]; /*0x10056bb97*/
  v74 = *(_OWORD *)__src; /*0x10056bbb3*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(__src, v64, &v61, &v74); /*0x10056bbd6*/
  if ( __src[0] != 6 ) /*0x10056bbe2*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(__src); /*0x10056bbeb*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__src, v64, v48, v49); /*0x10056bbf0*/
  v87 = 14; /*0x10056bbfa*/
  v50 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(14, 1); /*0x10056bc08*/
  if ( !v50 ) /*0x10056bc10*/
LABEL_93:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v87); /*0x10056c016*/
  qmemcpy(v50, "OPENAI_API_KEY", 14); /*0x10056bc31*/
  v61 = 14; /*0x10056bc35*/
  v62 = (__int64)v50; /*0x10056bc40*/
  v63 = 14; /*0x10056bc47*/
  serde_json::value::to_value::ha9c3f96699c4d616(__src, &v80); /*0x10056bc5d*/
  if ( __src[0] == 6 ) /*0x10056bc69*/
  {
    *(_QWORD *)&v74 = *(_QWORD *)&__src[8]; /*0x10056bfc0*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10056bfe8*/
      &anon_d163fe72d6e6e73a137b22815ab75905_1158,
      43,
      &v74,
      &off_101975028,
      &off_101973D08);
  }
  v76 = *(_QWORD *)&__src[24]; /*0x10056bc76*/
  v75 = *(_QWORD *)&__src[16]; /*0x10056bc84*/
  v74 = *(_OWORD *)__src; /*0x10056bca0*/
  alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h1c167956d95b7a6a(__src, v64, &v61, &v74); /*0x10056bcc3*/
  if ( __src[0] != 6 ) /*0x10056bccf*/
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(__src); /*0x10056bcd8*/
  v67 = v64[0]; /*0x10056bceb*/
  v68 = v64[1]; /*0x10056bcf2*/
  v69 = v65; /*0x10056bd00*/
  LOBYTE(v66) = 5; /*0x10056bd07*/
  v51 = v45; /*0x10056bd1c*/
  codexmate_lib::core::relay::router_unlock_auth::write_json::h7be466d29606e26a( /*0x10056bd22*/
    (_Unwind_Exception *)__src,
    v45,
    v46,
    (unsigned __int8 *)&v66);
  v52 = v60; /*0x10056bd27*/
  if ( *(_DWORD *)__src != 11 ) /*0x10056bd35*/
  {
    qmemcpy(a1, __src, 0x60u); /*0x10056be65*/
LABEL_84:
    core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v66); /*0x10056bf2b*/
LABEL_85:
    core::ptr::drop_in_place$LT$codexmate_lib..core..relay..router_unlock_auth..RouterUnlockAuthMarker$GT$::hfb73fe633803ad4e(__dst); /*0x10056bf37*/
    if ( (_QWORD)v80 ) /*0x10056bf4a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v80 + 1), v80, 1); /*0x10056bf59*/
    goto LABEL_37; /*0x10056bf5e*/
  }
  v53 = a2; /*0x10056bd3b*/
  if ( (unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::live_auth_state::h8249590d803b3f6b(a2) != 1 /*0x10056bd4e*/
    || (v53 = a2,
        !(unsigned __int8)codexmate_lib::core::relay::router_unlock_auth::managed_api_key_marker_matches::h41b8ff8f11868916(a2)) )
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v53, v51, v54, v55); /*0x10056bedc*/
    v57 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(88, 1); /*0x10056beeb*/
    if ( !v57 ) /*0x10056bef3*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 88); /*0x10056c027*/
    v58 = v57; /*0x10056bef9*/
    memcpy(v57, &unk_10166F9E7, 0x58u); /*0x10056bf0b*/
    *a1 = 10; /*0x10056bf10*/
    a1[1] = 88; /*0x10056bf17*/
    a1[2] = v58; /*0x10056bf1f*/
    a1[3] = 88; /*0x10056bf23*/
    goto LABEL_84; /*0x10056bf23*/
  }
  *a1 = 11; /*0x10056bd5b*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h71d332a988da925b(&v66); /*0x10056bd69*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..router_unlock_auth..RouterUnlockAuthMarker$GT$::hfb73fe633803ad4e(__dst); /*0x10056bd75*/
  if ( (_QWORD)v80 ) /*0x10056bd81*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v80 + 1), v80, 1); /*0x10056bd8c*/
  if ( v82 ) /*0x10056bd98*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v83, v82, 1); /*0x10056bda3*/
  v23 = v71; /*0x10056bda8*/
  if ( v71 ) /*0x10056bdb2*/
  {
    v24 = v52; /*0x10056bdbd*/
    goto LABEL_41; /*0x10056bdc0*/
  }
  return a1; /*0x10056b728*/
}