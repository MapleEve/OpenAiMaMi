// mac 1.1.8 refresh_usage_snapshot node va=0x10053e810 depth=2
// codexmate_lib4core10repository35enrich_active_account_usage_via_api
__int64 __fastcall codexmate_lib::core::repository::enrich_active_account_usage_via_api::h986ffd6a154a76ae(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r15
  size_t v4; // r12
  char v5; // bl
  __int64 v6; // r13
  const void *v7; // r14
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rax
  size_t *v11; // r13
  size_t *v12; // rax
  size_t v13; // rbx
  int v14; // edx
  __int64 v15; // r12
  size_t v16; // rbx
  __int64 v17; // rdx
  signed __int64 v18; // rbx
  unsigned __int64 v19; // rax
  char v20; // r14
  __int64 v21; // rax
  __int64 v22; // rbx
  __int64 v23; // rsi
  char v24; // r14
  size_t v25; // rsi
  __int64 v26; // rax
  __int64 v27; // rsi
  __int64 v28; // r14
  __int64 v29; // rsi
  int v30; // edx
  __int64 *v31; // rdx
  __int64 v32; // rax
  size_t *v33; // rdx
  size_t v34; // rax
  unsigned __int64 v35; // rbx
  size_t v36; // rsi
  __int64 v37; // rdx
  __int64 v38; // rdi
  __int64 v39; // rbx
  __int64 v40; // rsi
  __int64 v41; // rax
  _QWORD *v42; // r14
  __int64 v43; // rbx
  __int64 v44; // r14
  __int64 v45; // rbx
  size_t v46; // rax
  size_t v47; // rcx
  size_t v48; // rdi
  size_t v49; // r8
  size_t *v50; // rbx
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rsi
  bool v55; // zf
  size_t v56; // rbx
  __int64 v57; // r15
  __int64 result; // rax
  int v59; // edx
  _BYTE v60[88]; // [rsp+10h] [rbp-670h] BYREF
  _QWORD __dst[41]; // [rsp+68h] [rbp-618h] BYREF
  size_t v62; // [rsp+1B0h] [rbp-4D0h] BYREF
  _QWORD __src[41]; // [rsp+1B8h] [rbp-4C8h] BYREF
  size_t v64[12]; // [rsp+300h] [rbp-380h] BYREF
  _QWORD v65[4]; // [rsp+360h] [rbp-320h] BYREF
  __m128i v66; // [rsp+380h] [rbp-300h] BYREF
  __int64 v67; // [rsp+398h] [rbp-2E8h]
  __int64 v68; // [rsp+3B0h] [rbp-2D0h]
  __int64 v69; // [rsp+3C8h] [rbp-2B8h]
  __int64 v70; // [rsp+3D0h] [rbp-2B0h]
  __int64 v71; // [rsp+3D8h] [rbp-2A8h]
  __int64 v72; // [rsp+3E0h] [rbp-2A0h]
  __int64 v73; // [rsp+3F8h] [rbp-288h]
  __int64 v74; // [rsp+410h] [rbp-270h]
  __int64 v75; // [rsp+430h] [rbp-250h] BYREF
  size_t *v76; // [rsp+438h] [rbp-248h]
  __int64 v77; // [rsp+440h] [rbp-240h]
  size_t v78; // [rsp+448h] [rbp-238h]
  size_t v79; // [rsp+450h] [rbp-230h]
  __int64 v80; // [rsp+458h] [rbp-228h]
  __int64 v81; // [rsp+460h] [rbp-220h]
  __int64 v82; // [rsp+468h] [rbp-218h]
  __int64 v83; // [rsp+470h] [rbp-210h]
  size_t v84; // [rsp+478h] [rbp-208h]
  size_t v85; // [rsp+480h] [rbp-200h]
  _QWORD v86[3]; // [rsp+488h] [rbp-1F8h] BYREF
  char v87; // [rsp+4A0h] [rbp-1E0h]
  size_t v88[15]; // [rsp+4A8h] [rbp-1D8h] BYREF
  char v89; // [rsp+520h] [rbp-160h]
  size_t v90; // [rsp+528h] [rbp-158h]
  __int64 v91; // [rsp+530h] [rbp-150h]
  __int64 v92; // [rsp+538h] [rbp-148h]
  __int64 v93; // [rsp+540h] [rbp-140h]
  char v94; // [rsp+548h] [rbp-138h]
  size_t *v95; // [rsp+550h] [rbp-130h]
  size_t v96; // [rsp+558h] [rbp-128h]
  __int64 *v97; // [rsp+560h] [rbp-120h]
  size_t *v98; // [rsp+568h] [rbp-118h]
  __int64 v99; // [rsp+570h] [rbp-110h]
  size_t v100; // [rsp+578h] [rbp-108h] BYREF
  size_t v101; // [rsp+580h] [rbp-100h]
  size_t v102; // [rsp+588h] [rbp-F8h]
  size_t v103; // [rsp+590h] [rbp-F0h]
  size_t v104; // [rsp+598h] [rbp-E8h]
  size_t v105; // [rsp+5A0h] [rbp-E0h]
  __int64 v106; // [rsp+5A8h] [rbp-D8h] BYREF
  __int64 (__fastcall **v107)(); // [rsp+5B0h] [rbp-D0h]
  __int64 v108; // [rsp+5B8h] [rbp-C8h]
  __m128i v109; // [rsp+5C0h] [rbp-C0h] BYREF
  unsigned __int64 v110; // [rsp+5D8h] [rbp-A8h]
  void *v111; // [rsp+5E0h] [rbp-A0h]
  size_t v112; // [rsp+5E8h] [rbp-98h]
  unsigned __int64 v113; // [rsp+5F0h] [rbp-90h]
  __int64 v114; // [rsp+5F8h] [rbp-88h]
  size_t v115; // [rsp+600h] [rbp-80h]
  size_t *v116; // [rsp+608h] [rbp-78h]
  __int64 *v117; // [rsp+610h] [rbp-70h] BYREF
  __int64 (__fastcall **v118)(); // [rsp+618h] [rbp-68h]
  __int64 v119; // [rsp+620h] [rbp-60h]
  __int64 v120; // [rsp+628h] [rbp-58h] BYREF
  __int64 v121; // [rsp+630h] [rbp-50h]
  __int64 v122; // [rsp+638h] [rbp-48h]
  size_t v123; // [rsp+640h] [rbp-40h]
  char v124; // [rsp+64Fh] [rbp-31h]
  __int64 v125; // [rsp+650h] [rbp-30h]

  v80 = a3; /*0x10053e824*/
  v81 = a2; /*0x10053e82b*/
  v4 = 0x8000000000000000LL; /*0x10053e835*/
  v5 = *(_BYTE *)(a1 + 136); /*0x10053e83f*/
  if ( !__OFSUB__(0, *(_QWORD *)(a1 + 112)) ) /*0x10053e84c*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v62, a1 + 112); /*0x10053e859*/
    v4 = v62; /*0x10053e85e*/
    __dst[0] = __src[0]; /*0x10053e86c*/
    __dst[1] = __src[1]; /*0x10053e87a*/
  }
  v87 = v5; /*0x10053e881*/
  v86[0] = v4; /*0x10053e887*/
  v86[1] = __dst[0]; /*0x10053e89c*/
  v86[2] = __dst[1]; /*0x10053e8a3*/
  v6 = *(_QWORD *)(a1 + 552); /*0x10053e8aa*/
  if ( v6 < 0 ) /*0x10053e8b4*/
  {
    v3 = 0; /*0x10053e8b6*/
    goto LABEL_5; /*0x10053e8b6*/
  }
  v125 = a1; /*0x10053e8c9*/
  v7 = *(const void **)(a1 + 544); /*0x10053e8cd*/
  if ( v6 ) /*0x10053e8d4*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10053e8d6*/
    v3 = 1; /*0x10053e8db*/
    v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1u); /*0x10053e8e9*/
    if ( !v8 ) /*0x10053e8f1*/
LABEL_5:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v3, v6); /*0x10053e8b9*/
    v9 = v8; /*0x10053e8f3*/
  }
  else
  {
    v9 = 1; /*0x10053e8f8*/
  }
  v111 = (void *)v9; /*0x10053e8fd*/
  memcpy((void *)v9, v7, v6); /*0x10053e90a*/
  LOBYTE(__dst[0]) = 1; /*0x10053e90f*/
  v10 = 336LL * *(_QWORD *)(v125 + 800); /*0x10053e91a*/
  v62 = *(_QWORD *)(v125 + 792); /*0x10053e92f*/
  __src[0] = v62 + v10; /*0x10053e936*/
  __src[1] = 0; /*0x10053e93d*/
  __src[2] = __dst; /*0x10053e94f*/
  __src[3] = v125; /*0x10053e956*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::h209062eec2eeab7c( /*0x10053e96b*/
    &v75,
    &v62);
  if ( !v77 ) /*0x10053e98b*/
  {
    result = v75; /*0x10053f96a*/
    if ( v75 ) /*0x10053f974*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053f986*/
    goto LABEL_182; /*0x10053f98b*/
  }
  v114 = v6; /*0x10053e991*/
  v112 = v4; /*0x10053e998*/
  v11 = v76; /*0x10053e9b0*/
  v65[0] = v76; /*0x10053e9b3*/
  v65[2] = v75; /*0x10053e9ba*/
  v95 = &v76[38 * v77]; /*0x10053e9c1*/
  v65[3] = v95; /*0x10053e9c8*/
  v97 = (__int64 *)(v125 + 832); /*0x10053e9da*/
  v98 = (size_t *)(v125 + 856); /*0x10053e9e8*/
  v82 = v125 + 744; /*0x10053e9f6*/
  while ( 1 ) /*0x10053ea30*/
  {
    v12 = v11; /*0x10053ea30*/
    v11 += 38; /*0x10053ea33*/
    v65[1] = v11; /*0x10053ea3a*/
    v13 = *v12; /*0x10053ea41*/
    v116 = v12; /*0x10053ea44*/
    memcpy(__dst, v12 + 1, 0x128u); /*0x10053ea51*/
    if ( v13 == 0x8000000000000000LL ) /*0x10053ea60*/
      break; /*0x10053ea60*/
    v62 = v13; /*0x10053ea66*/
    memcpy(__src, __dst, 0x128u); /*0x10053ea79*/
    _$LT$codexmate_lib..core..auth..AuthFile$u20$as$u20$core..clone..Clone$GT$::clone::h64f111d853db74ba( /*0x10053ea8f*/
      &v66,
      &__src[14]);
    codexmate_lib::core::oauth_refresh::ensure_fresh_token::hfa129aada8ffa5c2( /*0x10053ead0*/
      &v109,
      (void *)__src[12],
      __src[13],
      &v66,
      (__int64)v86,
      1,
      v111,
      v114);
    v64[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(); /*0x10053eada*/
    LODWORD(v64[1]) = v14; /*0x10053eae1*/
    std::time::SystemTime::duration_since::had059553cab94f96((__int64)v88, (__int64)v64, 0, 0); /*0x10053eaf9*/
    v15 = 0; /*0x10053eb05*/
    v16 = 0; /*0x10053eb0b*/
    if ( !LOBYTE(v88[0]) ) /*0x10053eb10*/
      v16 = v88[1]; /*0x10053eb12*/
    if ( v69 != 0x8000000000000000LL ) /*0x10053eb20*/
    {
      if ( (codexmate_lib::core::oauth_refresh::token_remaining_seconds::h71cc02e45cdce62c(v70, v71) & 1) != 0 ) /*0x10053eb37*/
      {
        v3 = v16 + v17; /*0x10053eb3c*/
        v15 = 1; /*0x10053eb3f*/
      }
      else
      {
        v15 = 0; /*0x10053eb50*/
      }
    }
    v18 = v109.i64[0]; /*0x10053eb53*/
    v19 = v109.i64[0] ^ 0x8000000000000000LL; /*0x10053eb5d*/
    if ( v109.i64[0] >= 0 ) /*0x10053eb68*/
      v19 = 4; /*0x10053eb68*/
    switch ( v19 ) /*0x10053eb7a*/
    {
      case 0uLL: /*0x10053eb7a*/
        v20 = 0; /*0x10053eb7f*/
        goto LABEL_28; /*0x10053eb82*/
      case 1uLL: /*0x10053eb7a*/
        v20 = 1; /*0x10053ebd3*/
        goto LABEL_28; /*0x10053ebd3*/
      case 2uLL: /*0x10053eb7a*/
        v20 = 2; /*0x10053ebc3*/
        goto LABEL_28; /*0x10053ebc6*/
      case 3uLL: /*0x10053eb7a*/
        v20 = 3; /*0x10053ebcb*/
LABEL_28:
        v123 = 0x8000000000000000LL; /*0x10053ebd6*/
        break; /*0x10053ebd6*/
      case 4uLL: /*0x10053eb7a*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v88, (__int64)&v109); /*0x10053eb92*/
        v123 = v88[0]; /*0x10053eb9e*/
        v115 = v88[1]; /*0x10053eba9*/
        v79 = v88[2]; /*0x10053ebb4*/
        v20 = 4; /*0x10053ebbb*/
        break; /*0x10053ebbe*/
    }
    v110 = *(_QWORD *)(v125 + 800); /*0x10053ebec*/
    v113 = __src[36]; /*0x10053ebf3*/
    if ( __src[36] < v110 ) /*0x10053ebfd*/
    {
      v21 = *(_QWORD *)(v125 + 792); /*0x10053ec03*/
      v22 = v21 + 336 * v113 + 128; /*0x10053ec15*/
      if ( *(_DWORD *)v22 != 2 ) /*0x10053ec25*/
      {
        v23 = *(_QWORD *)(v21 + 336 * v113 + 144); /*0x10053ec27*/
        if ( v23 != 0x8000000000000000LL ) /*0x10053ec38*/
        {
          if ( v23 ) /*0x10053ec3d*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053ec48*/
        }
      }
      *(_QWORD *)v22 = v15; /*0x10053ec50*/
      *(_QWORD *)(v22 + 8) = v3; /*0x10053ec53*/
      *(_QWORD *)(v22 + 16) = v123; /*0x10053ec5b*/
      *(_QWORD *)(v22 + 24) = v115; /*0x10053ec63*/
      *(_QWORD *)(v22 + 32) = v79; /*0x10053ec6e*/
      *(_BYTE *)(v22 + 40) = v20; /*0x10053ec72*/
      v18 = v109.i64[0]; /*0x10053ec76*/
    }
    if ( v18 < (__int64)0x8000000000000002LL ) /*0x10053ec8e*/
    {
      if ( v18 == 0x8000000000000001LL ) /*0x10053ef92*/
      {
        codexmate_lib::core::auth::make_api_request_context::h0599c1ed30bad26e(v88, &v66); /*0x10053efa6*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x10053efb6*/
          (size_t *)&v117,
          (__int64)&__src[5]);
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v64, (__int64)&__src[8]); /*0x10053efc9*/
        v3 = v64[0]; /*0x10053efd6*/
        if ( v88[0] == 0x8000000000000000LL ) /*0x10053efeb*/
        {
          v100 = (size_t)v117; /*0x10053effc*/
          v101 = (size_t)v118; /*0x10053f003*/
          v102 = v119; /*0x10053f00a*/
          v103 = v64[0]; /*0x10053f011*/
          v104 = v64[1]; /*0x10053f018*/
          v105 = v64[2]; /*0x10053f01f*/
        }
        else
        {
          v105 = v88[5]; /*0x10053f0ab*/
          v104 = v88[4]; /*0x10053f0b9*/
          v103 = v88[3]; /*0x10053f0c7*/
          v102 = v88[2]; /*0x10053f0d5*/
          v101 = v88[1]; /*0x10053f0ea*/
          v100 = v88[0]; /*0x10053f0f1*/
          if ( v117 ) /*0x10053f0fb*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053f102*/
          if ( v3 ) /*0x10053f10a*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053f117*/
        }
      }
      else
      {
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v64, (__int64)&__src[5]); /*0x10053f039*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v88, (__int64)&__src[8]); /*0x10053f04c*/
        v102 = v64[2]; /*0x10053f058*/
        v101 = v64[1]; /*0x10053f06d*/
        v100 = v64[0]; /*0x10053f074*/
        v105 = v88[2]; /*0x10053f089*/
        v104 = v88[1]; /*0x10053f09b*/
        v103 = v88[0]; /*0x10053f09f*/
      }
      ++*(_DWORD *)(v125 + 880); /*0x10053f120*/
      codexmate_lib::core::api_client::fetch_usage_snapshot::h0e56556c7faaa43c(v64, &v100, v86); /*0x10053f13b*/
      if ( LODWORD(v64[0]) == 10 ) /*0x10053f147*/
      {
        if ( LODWORD(v64[1]) == 3 ) /*0x10053f154*/
        {
          v28 = v125; /*0x10053f15a*/
          ++*(_DWORD *)(v125 + 884); /*0x10053f15e*/
          if ( __src[36] < *(_QWORD *)(v28 + 800) && *(_BYTE *)(*(_QWORD *)(v28 + 792) + 336LL * __src[36] + 329) == 1 ) /*0x10053f18b*/
          {
            *(_BYTE *)(v28 + 920) = 1; /*0x10053f18d*/
            v29 = *(_QWORD *)(v28 + 888); /*0x10053f195*/
            if ( v29 != 0x8000000000000000LL && v29 ) /*0x10053f1ae*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053f1bc*/
            *(_QWORD *)(v28 + 888) = 0x8000000000000000LL; /*0x10053f1c1*/
          }
          v117 = (__int64 *)std::time::SystemTime::now::h1fe79e41f9d5677f(); /*0x10053f1cd*/
          LODWORD(v118) = v30; /*0x10053f1d1*/
          std::time::SystemTime::duration_since::had059553cab94f96((__int64)v88, (__int64)&v117, 0, 0); /*0x10053f1e3*/
          if ( LOBYTE(v88[0]) ) /*0x10053f1ef*/
            v3 = 0; /*0x10053f57b*/
          else
            v3 = v88[1]; /*0x10053f1f5*/
          if ( __src[36] < *(_QWORD *)(v125 + 800) ) /*0x10053f590*/
          {
            v43 = *(_QWORD *)(v125 + 792); /*0x10053f596*/
            v44 = 336LL * __src[36]; /*0x10053f59d*/
            *(_QWORD *)(v43 + v44 + 48) = 2; /*0x10053f5a4*/
            *(_QWORD *)(v43 + v44 + 88) = 2; /*0x10053f5ad*/
            *(_BYTE *)(v43 + v44 + 330) = 1; /*0x10053f5b6*/
            *(_QWORD *)(v43 + v44 + 32) = 1; /*0x10053f5bf*/
            *(_QWORD *)(v43 + v44 + 40) = v3; /*0x10053f5c8*/
            _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x10053f5d8*/
              (size_t *)&v120,
              (__int64)&v62);
            v45 = v44 + v43; /*0x10053f5dd*/
            v46 = *(_QWORD *)(v45 + 128); /*0x10053f5e0*/
            v47 = 2; /*0x10053f5e7*/
            v48 = v84; /*0x10053f5f0*/
            v49 = v85; /*0x10053f5f7*/
            if ( v46 != 2 ) /*0x10053f5fe*/
            {
              v124 = *(_BYTE *)(v45 + 168); /*0x10053f607*/
              v48 = 0x8000000000000000LL; /*0x10053f614*/
              if ( *(_QWORD *)(v45 + 144) != 0x8000000000000000LL ) /*0x10053f61e*/
              {
                _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x10053f62b*/
                  (size_t *)&v117,
                  v45 + 144);
                v48 = (size_t)v117; /*0x10053f630*/
                v106 = (__int64)v118; /*0x10053f63f*/
                v107 = (__int64 (__fastcall **)())v119; /*0x10053f646*/
                v46 = *(_QWORD *)(v45 + 128); /*0x10053f64d*/
              }
              v49 = *(_QWORD *)(v45 + 136); /*0x10053f654*/
              v118 = v107; /*0x10053f669*/
              v117 = (__int64 *)v106; /*0x10053f66d*/
              v47 = v46; /*0x10053f671*/
            }
            v92 = v122; /*0x10053f67f*/
            v91 = v121; /*0x10053f68b*/
            v90 = v120; /*0x10053f68f*/
            v93 = v3; /*0x10053f692*/
            v94 = 1; /*0x10053f699*/
            v88[0] = 2; /*0x10053f6a0*/
            v88[5] = 2; /*0x10053f6ab*/
            v88[10] = v47; /*0x10053f6b6*/
            v85 = v49; /*0x10053f6bd*/
            v88[11] = v49; /*0x10053f6c4*/
            v84 = v48; /*0x10053f6cb*/
            v88[12] = v48; /*0x10053f6d2*/
            v88[14] = (size_t)v118; /*0x10053f6e1*/
            v88[13] = (size_t)v117; /*0x10053f6e5*/
            v89 = v124; /*0x10053f6ed*/
            codexmate_lib::core::quota_store::upsert_item::h5807e96fc6a8e28c(v82, v88, v3); /*0x10053f704*/
          }
        }
        else
        {
          qmemcpy(v60, &v64[1], sizeof(v60)); /*0x10053f430*/
          v38 = v125; /*0x10053f433*/
          ++*(_DWORD *)(v125 + 884); /*0x10053f437*/
          codexmate_lib::core::repository::apply_usage_result::hf58a0dbccd8685ae(v38, v81, v80, &v62, v60); /*0x10053f452*/
          v39 = v125; /*0x10053f45e*/
          if ( __src[36] < *(_QWORD *)(v125 + 800) && *(_BYTE *)(*(_QWORD *)(v125 + 792) + 336LL * __src[36] + 329) == 1 ) /*0x10053f485*/
          {
            *(_BYTE *)(v125 + 920) = 1; /*0x10053f48b*/
            v40 = *(_QWORD *)(v39 + 888); /*0x10053f492*/
            if ( v40 != 0x8000000000000000LL && v40 ) /*0x10053f4a1*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053f4af*/
            *(_QWORD *)(v39 + 888) = 0x8000000000000000LL; /*0x10053f4b4*/
          }
        }
        goto LABEL_137; /*0x10053f704*/
      }
      qmemcpy(v88, v64, 0x60u); /*0x10053f217*/
      v120 = 0; /*0x10053f21a*/
      v121 = 1; /*0x10053f222*/
      v122 = 0; /*0x10053f22a*/
      v119 = 1610612768; /*0x10053f232*/
      v117 = &v120; /*0x10053f23e*/
      v118 = &anon_daf50d54a2d3ecbdf54de6a8568b21ab_429; /*0x10053f249*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb( /*0x10053f254*/
                              v88,
                              (__int64 *)&v117) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10053fa80*/
          (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_430,
          55,
          (__int64)&v106,
          (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_451,
          (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_432);
      v106 = v120; /*0x10053f269*/
      v107 = (__int64 (__fastcall **)())v121; /*0x10053f270*/
      v108 = v122; /*0x10053f27b*/
      if ( *v97 != 0x8000000000000000LL && *v97 ) /*0x10053f289*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053f2a6*/
      v31 = v97; /*0x10053f2b2*/
      v97[2] = v108; /*0x10053f2b9*/
      v32 = v106; /*0x10053f2bd*/
      v31[1] = (__int64)v107; /*0x10053f2cb*/
      *v31 = v32; /*0x10053f2cf*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1( /*0x10053f2dd*/
        (size_t *)&v117,
        (__int64)&v62);
      v122 = v119; /*0x10053f2e6*/
      v121 = (__int64)v118; /*0x10053f2f2*/
      v120 = (__int64)v117; /*0x10053f2f6*/
      if ( *v98 != 0x8000000000000000LL && *v98 ) /*0x10053f301*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053f31e*/
      v33 = v98; /*0x10053f327*/
      v98[2] = v122; /*0x10053f32e*/
      v34 = v120; /*0x10053f332*/
      v33[1] = v121; /*0x10053f33a*/
      *v33 = v34; /*0x10053f33e*/
      if ( LODWORD(v88[0]) != 6 ) /*0x10053f348*/
      {
        LOBYTE(v3) = 1; /*0x10053f4c0*/
        v35 = __src[36]; /*0x10053f4c3*/
LABEL_121:
        v36 = 0x8000000000000000LL; /*0x10053f4ca*/
        v37 = v125; /*0x10053f4cd*/
        if ( v35 >= *(_QWORD *)(v125 + 800) ) /*0x10053f4d8*/
          goto LABEL_127; /*0x10053f4d8*/
        goto LABEL_122; /*0x10053f4d8*/
      }
      if ( (unsigned __int8)reqwest::error::Error::is_connect::hdcbb4b4ff986a3e0(&v88[1]) /*0x10053f365*/
        || (LOBYTE(v3) = 1, (unsigned __int8)reqwest::error::Error::is_timeout::h9887939454f48b2e(&v88[1])) )
      {
        LOBYTE(v3) = 2; /*0x10053f371*/
      }
      v35 = __src[36]; /*0x10053f374*/
      if ( !(unsigned __int8)reqwest::error::Error::is_connect::hdcbb4b4ff986a3e0(&v88[1]) /*0x10053f399*/
        && !(unsigned __int8)reqwest::error::Error::is_timeout::h9887939454f48b2e(&v88[1]) )
      {
        goto LABEL_121; /*0x10053f399*/
      }
      v120 = 0; /*0x10053f39f*/
      v121 = 1; /*0x10053f3a7*/
      v122 = 0; /*0x10053f3af*/
      v119 = 1610612768; /*0x10053f3b7*/
      v117 = &v120; /*0x10053f3c3*/
      v118 = &anon_daf50d54a2d3ecbdf54de6a8568b21ab_429; /*0x10053f3ce*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::habc7ed17d00203bb( /*0x10053f3dd*/
                              v88,
                              (__int64 *)&v117) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10053faa8*/
          (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_430,
          55,
          (__int64)&v106,
          (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_451,
          (__int64)&anon_daf50d54a2d3ecbdf54de6a8568b21ab_432);
      v36 = v120; /*0x10053f3ea*/
      v99 = v121; /*0x10053f3f2*/
      v83 = v122; /*0x10053f3fd*/
      v37 = v125; /*0x10053f404*/
      if ( v35 >= *(_QWORD *)(v125 + 800) ) /*0x10053f40f*/
        goto LABEL_127; /*0x10053f40f*/
LABEL_122:
      if ( *(_BYTE *)(*(_QWORD *)(v37 + 792) + 336 * v35 + 329) ) /*0x10053f4e8*/
      {
        *(_BYTE *)(v37 + 920) = v3; /*0x10053f4f2*/
        v41 = *(_QWORD *)(v37 + 888); /*0x10053f4f9*/
        v42 = (_QWORD *)v37; /*0x10053f503*/
        if ( v41 != 0x8000000000000000LL && v41 ) /*0x10053f50b*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053f51f*/
        v42[111] = v36; /*0x10053f527*/
        v42[112] = v99; /*0x10053f535*/
        v42[113] = v83; /*0x10053f543*/
        goto LABEL_129; /*0x10053f54a*/
      }
LABEL_127:
      if ( 2 * v36 ) /*0x10053f54c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053f565*/
LABEL_129:
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(v88); /*0x10053f56a*/
LABEL_137:
      v50 = v116; /*0x10053f713*/
      if ( v100 ) /*0x10053f721*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053f72f*/
      if ( v103 ) /*0x10053f73e*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053f74c*/
      if ( v113 >= v110 && 2 * v123 ) /*0x10053f765*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053f77f*/
      if ( v109.i64[0] >= (__int64)0x8000000000000004LL && v109.i64[0] ) /*0x10053f797*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053f7a5*/
      if ( v66.i64[0] != 0x8000000000000000LL && v66.i64[0] ) /*0x10053f7b9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053f7c7*/
      if ( v67 != 0x8000000000000000LL && v67 ) /*0x10053f7db*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053f7e9*/
      if ( v68 != 0x8000000000000000LL && v68 ) /*0x10053f7fd*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053f80b*/
      if ( v69 != 0x8000000000000000LL && v69 ) /*0x10053f81f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053f82d*/
      if ( v72 != 0x8000000000000000LL && v72 ) /*0x10053f841*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053f84f*/
      if ( v73 != 0x8000000000000000LL && v73 ) /*0x10053f863*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053f871*/
      if ( v74 != 0x8000000000000000LL && v74 ) /*0x10053f885*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053f893*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..AccountApiContext$GT$::h05a05f590001fa35(&v62); /*0x10053f8a6*/
      v11 = v50 + 38; /*0x10053f8ab*/
      if ( v50 + 38 == v95 ) /*0x10053f8bc*/
        break; /*0x10053f8bc*/
    }
    else
    {
      codexmate_lib::core::api_client::test_api_connectivity::h742d0d25de405306((__int64)v88, (__int64)v86, 0); /*0x10053eca4*/
      v24 = v88[7]; /*0x10053eca9*/
      v25 = 0x8000000000000000LL; /*0x10053ecb1*/
      if ( !LOBYTE(v88[7]) ) /*0x10053ecbe*/
      {
        v25 = v88[3]; /*0x10053ecc0*/
        v96 = v88[4]; /*0x10053ecce*/
        v78 = v88[5]; /*0x10053ecdc*/
      }
      v3 = v125; /*0x10053ecea*/
      if ( __src[36] < *(_QWORD *)(v125 + 800) && *(_BYTE *)(*(_QWORD *)(v125 + 792) + 336LL * __src[36] + 329) ) /*0x10053ed09*/
      {
        *(_BYTE *)(v125 + 920) = 2 - LOBYTE(v88[7]); /*0x10053ed18*/
        v26 = *(_QWORD *)(v3 + 888); /*0x10053ed1f*/
        if ( v26 != 0x8000000000000000LL && v26 ) /*0x10053ed38*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053ed4c*/
        *(_QWORD *)(v3 + 888) = v25; /*0x10053ed54*/
        *(_QWORD *)(v3 + 896) = v96; /*0x10053ed62*/
        *(_QWORD *)(v3 + 904) = v78; /*0x10053ed70*/
        if ( v88[0] ) /*0x10053ed81*/
          goto LABEL_47; /*0x10053ed81*/
      }
      else
      {
        if ( 2 * v25 ) /*0x10053ed90*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053ee4c*/
          if ( !v88[0] ) /*0x10053ee5b*/
            goto LABEL_48; /*0x10053ee5b*/
LABEL_47:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053edad*/
          goto LABEL_48; /*0x10053edb9*/
        }
        if ( v88[0] ) /*0x10053edab*/
          goto LABEL_47; /*0x10053edab*/
      }
LABEL_48:
      if ( v24 && v88[3] ) /*0x10053edcd*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053eddb*/
      if ( v113 >= v110 && 2 * v123 ) /*0x10053edfe*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053ee73*/
        v27 = v109.i64[0]; /*0x10053ee78*/
        if ( v109.i64[0] >= (__int64)0x8000000000000004LL ) /*0x10053ee86*/
        {
LABEL_54:
          if ( v27 ) /*0x10053ee1e*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053ee2c*/
        }
      }
      else
      {
        v27 = v109.i64[0]; /*0x10053ee0b*/
        if ( v109.i64[0] >= (__int64)0x8000000000000004LL ) /*0x10053ee19*/
          goto LABEL_54; /*0x10053ee19*/
      }
      if ( v66.i64[0] != 0x8000000000000000LL && v66.i64[0] ) /*0x10053ee9f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053eead*/
      if ( v67 != 0x8000000000000000LL && v67 ) /*0x10053eec1*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053eecf*/
      if ( v68 != 0x8000000000000000LL && v68 ) /*0x10053eee3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053eef1*/
      if ( v69 != 0x8000000000000000LL && v69 ) /*0x10053ef05*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053ef13*/
      if ( v72 != 0x8000000000000000LL && v72 ) /*0x10053ef27*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053ef35*/
      if ( v73 != 0x8000000000000000LL && v73 ) /*0x10053ef49*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053ef57*/
      if ( v74 != 0x8000000000000000LL && v74 ) /*0x10053ef6f*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053ef81*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..repository..AccountApiContext$GT$::h05a05f590001fa35(&v62); /*0x10053ea17*/
      if ( v11 == v95 ) /*0x10053ea2a*/
        break; /*0x10053ea2a*/
    }
  }
  v4 = v112; /*0x10053f8c2*/
  v6 = v114; /*0x10053f8d0*/
  _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h983a09ebbe079b9d(v65); /*0x10053f8d7*/
  codexmate_lib::core::repository::sync_token_status_to_quota_store::hf9d0eee83beb0332(v125); /*0x10053f8e0*/
  v52 = *(_QWORD *)(v125 + 792) - 336LL; /*0x10053f8f0*/
  v53 = 336LL * *(_QWORD *)(v125 + 800); /*0x10053f8f7*/
  while ( v53 ) /*0x10053f913*/
  {
    v54 = v52 + 336; /*0x10053f915*/
    v53 -= 336; /*0x10053f91c*/
    v55 = *(_BYTE *)(v52 + 665) == 1; /*0x10053f923*/
    v52 += 336; /*0x10053f92a*/
    if ( v55 ) /*0x10053f92d*/
    {
      _$LT$codexmate_lib..core..models..AccountSummary$u20$as$u20$core..clone..Clone$GT$::clone::hf7194f57f3e2a274( /*0x10053f936*/
        &v62,
        v54,
        v51,
        v53);
      v56 = v62; /*0x10053f93b*/
      memcpy(__dst, __src, sizeof(__dst)); /*0x10053f955*/
      v57 = v125; /*0x10053f95a*/
      if ( *(_DWORD *)(v125 + 152) == 2 ) /*0x10053f966*/
        goto LABEL_178; /*0x10053f966*/
      goto LABEL_177; /*0x10053f966*/
    }
  }
  v56 = 2; /*0x10053f990*/
  v57 = v125; /*0x10053f995*/
  if ( *(_DWORD *)(v125 + 152) == 2 ) /*0x10053f9a1*/
    goto LABEL_178; /*0x10053f9a1*/
LABEL_177:
  core::ptr::drop_in_place$LT$codexmate_lib..core..models..AccountSummary$GT$::h0411cf73490bf424(v57 + 152); /*0x10053f9a3*/
LABEL_178:
  *(_QWORD *)(v57 + 152) = v56; /*0x10053f9af*/
  memcpy((void *)(v57 + 160), __dst, 0x148u); /*0x10053f9c9*/
  __dst[0] = std::time::SystemTime::now::h1fe79e41f9d5677f(); /*0x10053f9d3*/
  LODWORD(__dst[1]) = v59; /*0x10053f9da*/
  std::time::SystemTime::duration_since::had059553cab94f96((__int64)&v62, (__int64)__dst, 0, 0); /*0x10053f9f2*/
  if ( (_BYTE)v62 ) /*0x10053f9fe*/
    result = 0; /*0x10053fa09*/
  else
    result = __src[0]; /*0x10053fa00*/
  *(_QWORD *)(v125 + 912) = result; /*0x10053fa0f*/
LABEL_182:
  if ( v6 ) /*0x10053fa19*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053fa2a*/
  if ( v4 != 0x8000000000000000LL ) /*0x10053fa32*/
  {
    if ( v4 ) /*0x10053fa37*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10053fa48*/
  }
  return result; /*0x10053fa4d*/
}