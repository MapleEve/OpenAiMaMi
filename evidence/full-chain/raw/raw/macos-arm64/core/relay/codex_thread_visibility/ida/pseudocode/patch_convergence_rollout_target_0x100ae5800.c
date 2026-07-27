// __ZN13codexmate_lib4core5relay23codex_thread_visibility32patch_convergence_rollout_target @ 0x100ae5800 | 基线 same-set
void *__fastcall codexmate_lib::core::relay::codex_thread_visibility::patch_convergence_rollout_target::h126d5ccf125eac50(
        char *__dst,
        _QWORD *a2,
        const void *a3,
        size_t a4)
{
  void *result; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  void *v10; // r13
  __int64 v11; // rdx
  void *v12; // rcx
  void *v13; // r12
  void *v14; // r14
  __m128i inserted; // xmm0
  __int64 v16; // r15
  void *v17; // rdi
  unsigned __int64 v18; // rsi
  __int64 v19; // rax
  __int64 v20; // r15
  unsigned __int64 v21; // r13
  __int64 v22; // rsi
  __m128i si128; // xmm0
  char v24; // r14
  void *v25; // rax
  void *v26; // r15
  bool v27; // zf
  unsigned __int64 v28; // r14
  unsigned __int128 v29; // kr00_16
  __int64 v30; // rcx
  _OWORD __src[12]; // [rsp+10h] [rbp-3E0h] BYREF
  _QWORD v32[2]; // [rsp+D0h] [rbp-320h] BYREF
  __int128 v33; // [rsp+E0h] [rbp-310h]
  __int128 v34; // [rsp+F0h] [rbp-300h]
  __int128 v35; // [rsp+100h] [rbp-2F0h]
  _QWORD *v36; // [rsp+110h] [rbp-2E0h]
  _QWORD v37[2]; // [rsp+118h] [rbp-2D8h] BYREF
  __int64 v38; // [rsp+128h] [rbp-2C8h] BYREF
  __int64 v39; // [rsp+130h] [rbp-2C0h]
  __int64 v40; // [rsp+138h] [rbp-2B8h]
  __int128 v41; // [rsp+140h] [rbp-2B0h] BYREF
  __m256i v42; // [rsp+150h] [rbp-2A0h]
  unsigned __int64 v43; // [rsp+170h] [rbp-280h] BYREF
  _BYTE v44[88]; // [rsp+178h] [rbp-278h] BYREF
  __int128 v45; // [rsp+1D0h] [rbp-220h] BYREF
  __int128 v46; // [rsp+1E0h] [rbp-210h]
  __int128 v47; // [rsp+1F0h] [rbp-200h]
  __int64 v48; // [rsp+200h] [rbp-1F0h] BYREF
  __int64 v49; // [rsp+208h] [rbp-1E8h]
  __int64 v50; // [rsp+210h] [rbp-1E0h]
  unsigned __int64 v51; // [rsp+218h] [rbp-1D8h] BYREF
  void *v52; // [rsp+220h] [rbp-1D0h]
  void *v53; // [rsp+228h] [rbp-1C8h]
  void *v54; // [rsp+230h] [rbp-1C0h] BYREF
  unsigned __int128 v55; // [rsp+238h] [rbp-1B8h]
  _BYTE v56[112]; // [rsp+248h] [rbp-1A8h] BYREF
  unsigned __int64 v57; // [rsp+2B8h] [rbp-138h]
  void *v58; // [rsp+2C0h] [rbp-130h]
  __int64 v59; // [rsp+2C8h] [rbp-128h] BYREF
  __int128 v60; // [rsp+2D0h] [rbp-120h]
  void *__s1; // [rsp+2E0h] [rbp-110h]
  _BYTE v62[120]; // [rsp+2E8h] [rbp-108h] BYREF
  __int64 v63; // [rsp+360h] [rbp-90h]
  unsigned __int64 v64; // [rsp+368h] [rbp-88h]
  __m128i v65; // [rsp+370h] [rbp-80h] BYREF
  __int128 v66; // [rsp+380h] [rbp-70h] BYREF
  __m256i v67; // [rsp+390h] [rbp-60h]
  void *v68; // [rsp+3B0h] [rbp-40h]
  void *v69; // [rsp+3B8h] [rbp-38h]
  void *v70; // [rsp+3C0h] [rbp-30h]

  v32[0] = a3; /*0x100ae5821*/
  v32[1] = a4; /*0x100ae5828*/
  if ( __OFSUB__(0, a2[6]) ) /*0x100ae5831*/
  {
    *(_QWORD *)v62 = a2; /*0x100ae5837*/
    *(_QWORD *)&v62[8] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100ae5845*/
    *(_QWORD *)&v62[16] = v32; /*0x100ae5853*/
    *(_QWORD *)&v62[24] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100ae5861*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4((char *)__src + 8, &unk_1017CB201, v62); /*0x100ae587d*/
    result = *((void **)&__src[0] + 1); /*0x100ae5882*/
    qmemcpy(__dst + 24, &__src[1], 0x50u); /*0x100ae5899*/
    *((_QWORD *)__dst + 1) = 10; /*0x100ae589c*/
    *((_QWORD *)__dst + 2) = result; /*0x100ae58a4*/
    *(_QWORD *)__dst = 0x8000000000000000LL; /*0x100ae58a8*/
    return result; /*0x100ae58ab*/
  }
  v8 = a2[1]; /*0x100ae58b6*/
  v9 = a2[2]; /*0x100ae58ba*/
  v10 = (void *)a2[7]; /*0x100ae58be*/
  v36 = a2; /*0x100ae58c2*/
  v11 = a2[8]; /*0x100ae58c9*/
  v37[0] = v8; /*0x100ae58cd*/
  v37[1] = v9; /*0x100ae58d4*/
  v65.i64[0] = v11; /*0x100ae58e5*/
  codexmate_lib::core::relay::codex_thread_visibility::find_session_meta_anchors::hea544617b47f60bc(__src, v10, v11); /*0x100ae58e9*/
  if ( LODWORD(__src[0]) == 1 ) /*0x100ae58f5*/
  {
    qmemcpy(v62, (char *)__src + 8, 0x60u); /*0x100ae5911*/
    *(_QWORD *)&v66 = v37; /*0x100ae591b*/
    *((_QWORD *)&v66 + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100ae5926*/
    v67.i64[0] = (__int64)v62; /*0x100ae592a*/
    v67.i64[1] = (__int64)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x100ae5935*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v45, &unk_1017CAA34, &v66); /*0x100ae594b*/
    __src[1] = v45; /*0x100ae595e*/
    *(_QWORD *)&__src[2] = v46; /*0x100ae5973*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v62); /*0x100ae5981*/
    v13 = *((void **)&__src[1] + 1); /*0x100ae598d*/
    v12 = *(void **)&__src[1]; /*0x100ae598d*/
    v14 = *(void **)&__src[2]; /*0x100ae5994*/
    inserted = _mm_loadu_si128((const __m128i *)((char *)&__src[2] + 8)); /*0x100ae599b*/
    *(_OWORD *)v56 = *(_OWORD *)((char *)&__src[3] + 8); /*0x100ae59aa*/
    *(_OWORD *)&v56[16] = *(_OWORD *)((char *)&__src[4] + 8); /*0x100ae59c6*/
    *(_OWORD *)&v56[32] = *(_OWORD *)((char *)&__src[5] + 8); /*0x100ae59e2*/
    v16 = 10; /*0x100ae59f7*/
LABEL_47:
    *((_QWORD *)__dst + 2) = v12; /*0x100ae6650*/
    *((_QWORD *)__dst + 3) = v13; /*0x100ae6654*/
    *((_QWORD *)__dst + 4) = v14; /*0x100ae6658*/
    v30 = *(_QWORD *)&v56[8]; /*0x100ae6663*/
    *((_QWORD *)__dst + 7) = *(_QWORD *)v56; /*0x100ae666a*/
    *((_QWORD *)__dst + 8) = v30; /*0x100ae666e*/
    *(_OWORD *)(__dst + 72) = *(_OWORD *)&v56[16]; /*0x100ae6679*/
    *(_OWORD *)(__dst + 88) = *(_OWORD *)&v56[32]; /*0x100ae668f*/
    *((_QWORD *)__dst + 1) = v16; /*0x100ae669e*/
    *(__m128i *)(__dst + 40) = inserted; /*0x100ae66a2*/
    *(_QWORD *)__dst = 0x8000000000000000LL; /*0x100ae66b1*/
    return (void *)0x8000000000000000LL; /*0x100ae66c5*/
  }
  if ( *((_QWORD *)&__src[0] + 1) == 0x8000000000000000LL ) /*0x100ae5a0c*/
  {
    *(_QWORD *)&v66 = v37; /*0x100ae5a19*/
    *((_QWORD *)&v66 + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100ae5a24*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v62[8], &unk_1017CAA11, &v66); /*0x100ae5a3a*/
    v12 = *(void **)&v62[8]; /*0x100ae5a3f*/
    v14 = *(void **)&v62[24]; /*0x100ae5a4d*/
    v13 = *(void **)&v62[16]; /*0x100ae5a4d*/
    inserted = _mm_loadu_si128((const __m128i *)&v62[32]); /*0x100ae5a54*/
    *(_OWORD *)v56 = *(_OWORD *)&v62[48]; /*0x100ae5a63*/
    *(_OWORD *)&v56[16] = *(_OWORD *)&v62[64]; /*0x100ae5a7f*/
    *(_OWORD *)&v56[32] = *(_OWORD *)&v62[80]; /*0x100ae5a9b*/
    v16 = 9; /*0x100ae5ab0*/
    goto LABEL_47; /*0x100ae5ab6*/
  }
  qmemcpy(v44, &__src[1], sizeof(v44)); /*0x100ae5ace*/
  v63 = *((_QWORD *)&__src[0] + 1); /*0x100ae5ad1*/
  v43 = *((_QWORD *)&__src[0] + 1); /*0x100ae5ad8*/
  codexmate_lib::core::relay::codex_thread_visibility::session_meta_provider::h724d536cc6b46b8c( /*0x100ae5b0a*/
    v62,
    *(_QWORD **)v44,
    *(__int64 (__fastcall **)())&v44[8],
    (__int64)v10,
    v65.i64[0],
    (__int64)"firstrouter_model_restore.json",
    5);
  v16 = *(_QWORD *)v62; /*0x100ae5b0f*/
  v70 = *(void **)&v62[24]; /*0x100ae5b32*/
  __s1 = *(void **)&v62[16]; /*0x100ae5b32*/
  if ( *(_QWORD *)v62 != 11 ) /*0x100ae5b3a*/
  {
    inserted = _mm_loadu_si128((const __m128i *)&v62[32]); /*0x100ae5e56*/
    *(_OWORD *)v56 = *(_OWORD *)&v62[48]; /*0x100ae5e65*/
    *(_OWORD *)&v56[16] = *(_OWORD *)&v62[64]; /*0x100ae5e81*/
    *(_OWORD *)&v56[32] = *(_OWORD *)&v62[80]; /*0x100ae5e9d*/
    v68 = *(void **)&v62[8]; /*0x100ae5eb2*/
    v21 = 0x8000000000000000LL; /*0x100ae5eb6*/
    v22 = v63; /*0x100ae5ec0*/
    v13 = __s1; /*0x100ae5ec7*/
LABEL_17:
    v14 = v70; /*0x100ae5ece*/
    goto LABEL_41; /*0x100ae5ed2*/
  }
  v64 = *(_QWORD *)&v62[8]; /*0x100ae5b40*/
  codexmate_lib::core::relay::codex_thread_visibility::session_meta_provider::h724d536cc6b46b8c( /*0x100ae5b72*/
    v62,
    *(_QWORD **)&v44[48],
    *(__int64 (__fastcall **)())&v44[56],
    (__int64)v10,
    v65.i64[0],
    (__int64)&unk_10167BC38,
    4);
  v16 = *(_QWORD *)v62; /*0x100ae5b77*/
  v68 = *(void **)&v62[8]; /*0x100ae5b97*/
  if ( *(_QWORD *)v62 == 11 ) /*0x100ae5b9b*/
  {
    v54 = *(void **)&v62[8]; /*0x100ae5ba1*/
    __SET_PAIR__(v57, (unsigned __int64)v58, *(_OWORD *)&v62[16]); /*0x100ae5bb6*/
    v55 = *(_OWORD *)&v62[16]; /*0x100ae5bb6*/
    v51 = v64; /*0x100ae5bcb*/
    v52 = __s1; /*0x100ae5bd9*/
    v53 = v70; /*0x100ae5be4*/
    if ( !codexmate_lib::core::relay::codex_thread_visibility::is_router_or_openai_provider::hc08336a603e89a33( /*0x100ae5c06*/
            (__int64)__s1,
            (unsigned __int64)v70)
      || (v17 = v58,
          v18 = v57,
          !codexmate_lib::core::relay::codex_thread_visibility::is_router_or_openai_provider::hc08336a603e89a33(
             (__int64)v58,
             v57)) )
    {
      si128 = _mm_load_si128((const __m128i *)""); /*0x100ae5f73*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 < 3u ) /*0x100ae5f7f*/
      {
        inserted = _mm_insert_epi64(si128, v57, 0); /*0x100ae607a*/
        v16 = (__int64)__s1; /*0x100ae6085*/
        v13 = v68; /*0x100ae608c*/
        v68 = v70; /*0x100ae6094*/
        v14 = v58; /*0x100ae6098*/
        v22 = v63; /*0x100ae609f*/
        v21 = v64; /*0x100ae60a6*/
      }
      else
      {
        *(_QWORD *)v62 = v37; /*0x100ae5f93*/
        *(_QWORD *)&v62[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100ae5fa1*/
        *(_QWORD *)&v62[16] = &v51; /*0x100ae5faf*/
        *(_QWORD *)&v62[24] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100ae5fbd*/
        *(_QWORD *)&v62[32] = &v54; /*0x100ae5fc4*/
        *(_QWORD *)&v62[40] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100ae5fcb*/
        *(_QWORD *)&v66 = &unk_10167D5D6; /*0x100ae5fd9*/
        *((_QWORD *)&v66 + 1) = 51; /*0x100ae5fdd*/
        v67.i64[0] = (__int64)&unk_10167D5D6; /*0x100ae5fe5*/
        v67.i64[1] = 51; /*0x100ae5fe9*/
        v67.i64[2] = (__int64)&off_1019748A0; /*0x100ae5ff8*/
        log::__private_api::log::h719f4907c7336ae9(&unk_1017CA9AD, v62, 3, &v66); /*0x100ae6013*/
        v21 = v51; /*0x100ae6018*/
        v16 = (__int64)v52; /*0x100ae601f*/
        v68 = v53; /*0x100ae602d*/
        v13 = v54; /*0x100ae6031*/
        v14 = (void *)v55; /*0x100ae6038*/
        inserted = _mm_insert_epi64(_mm_load_si128((const __m128i *)""), *((signed __int64 *)&v55 + 1), 0); /*0x100ae6047*/
        v22 = v63; /*0x100ae6052*/
      }
      goto LABEL_41; /*0x100ae6059*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, v18); /*0x100ae5c13*/
    v19 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(144, 8); /*0x100ae5c22*/
    if ( !v19 ) /*0x100ae5c34*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(8, 144); /*0x100ae67db*/
    v48 = 2; /*0x100ae5c3a*/
    v49 = v19; /*0x100ae5c45*/
    v50 = 0; /*0x100ae5c4c*/
    *(_QWORD *)&v41 = 0x8000000000000000LL; /*0x100ae5c57*/
    *(_QWORD *)&v45 = 0x8000000000000000LL; /*0x100ae5c5e*/
    if ( v70 == (void *)a4 && !memcmp(__s1, a3, a4) ) /*0x100ae5c7f*/
    {
      v20 = *(_QWORD *)&v44[16]; /*0x100ae612c*/
    }
    else
    {
      codexmate_lib::core::relay::codex_thread_visibility::patch_session_meta_provider_line::hd36493268159f620( /*0x100ae5ca0*/
        v62,
        *(_QWORD *)v44,
        *(_QWORD *)&v44[8],
        a3,
        a4);
      v16 = *(_QWORD *)v62; /*0x100ae5ca5*/
      v69 = *(void **)&v62[8]; /*0x100ae5cc5*/
      if ( *(_QWORD *)v62 != 11 ) /*0x100ae5cc9*/
      {
        v70 = *(void **)&v62[24]; /*0x100ae60b2*/
        v65 = _mm_loadu_si128((const __m128i *)&v62[32]); /*0x100ae60be*/
        *(_OWORD *)v56 = *(_OWORD *)&v62[48]; /*0x100ae60ca*/
        *(_OWORD *)&v56[16] = *(_OWORD *)&v62[64]; /*0x100ae60e6*/
        *(_OWORD *)&v56[32] = *(_OWORD *)&v62[80]; /*0x100ae6102*/
        v24 = 1; /*0x100ae6117*/
        v21 = 0x8000000000000000LL; /*0x100ae611a*/
        v13 = *(void **)&v62[16]; /*0x100ae6124*/
        goto LABEL_38; /*0x100ae6127*/
      }
      v59 = *(_QWORD *)&v62[8]; /*0x100ae5ccf*/
      v60 = *(_OWORD *)&v62[16]; /*0x100ae5cd6*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v66, &v43); /*0x100ae5cef*/
      v20 = *(_QWORD *)&v44[16]; /*0x100ae5d03*/
      *(__m128i *)&v67.u32[2] = _mm_loadu_si128((const __m128i *)&v44[16]); /*0x100ae5d0a*/
      v67.i16[12] = *(_WORD *)&v44[32]; /*0x100ae5d0f*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v38, &v59); /*0x100ae5d21*/
      *(__m256i *)&v62[16] = v67; /*0x100ae5d35*/
      *(_OWORD *)v62 = v66; /*0x100ae5d61*/
      *(_QWORD *)&v62[48] = v38; /*0x100ae5d76*/
      *(_QWORD *)&v62[56] = v39; /*0x100ae5d7d*/
      *(_QWORD *)&v62[64] = v40; /*0x100ae5d8b*/
      alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h60ae2a1681de84e9(&v48, v62); /*0x100ae5da0*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v66, &v43); /*0x100ae5db0*/
      *(_OWORD *)&v62[32] = v60; /*0x100ae5dd1*/
      *(_QWORD *)&v62[24] = v59; /*0x100ae5dd8*/
      v67.i64[1] = v59; /*0x100ae5df7*/
      v67.i128[1] = v60; /*0x100ae5dfb*/
      core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..relay..codex_thread_visibility..AppliedSessionMetaAnchorPatch$GT$$GT$::he6f315affe594b3f(&v41); /*0x100ae5e0a*/
      v42 = v67; /*0x100ae5e1e*/
      v41 = v66; /*0x100ae5e4a*/
    }
    v25 = *(void **)&v44[64]; /*0x100ae6133*/
    if ( *(_QWORD *)&v44[64] != v20 ) /*0x100ae613d*/
    {
      if ( v57 != a4 || (v26 = *(void **)&v44[64], v27 = memcmp(v58, a3, a4) == 0, v25 = v26, !v27) ) /*0x100ae6166*/
      {
        v69 = v25; /*0x100ae616c*/
        codexmate_lib::core::relay::codex_thread_visibility::patch_session_meta_provider_line::hd36493268159f620( /*0x100ae618b*/
          v62,
          *(_QWORD *)&v44[48],
          *(_QWORD *)&v44[56],
          a3,
          a4);
        v16 = *(_QWORD *)v62; /*0x100ae6190*/
        v13 = *(void **)&v62[16]; /*0x100ae61a5*/
        if ( *(_QWORD *)v62 != 11 ) /*0x100ae61b0*/
        {
          v70 = *(void **)&v62[24]; /*0x100ae6538*/
          v69 = *(void **)&v62[8]; /*0x100ae653c*/
LABEL_37:
          v65 = _mm_loadu_si128((const __m128i *)&v62[32]); /*0x100ae6540*/
          *(_OWORD *)v56 = *(_OWORD *)&v62[48]; /*0x100ae6554*/
          *(_OWORD *)&v56[16] = *(_OWORD *)&v62[64]; /*0x100ae6570*/
          *(_OWORD *)&v56[32] = *(_OWORD *)&v62[80]; /*0x100ae658c*/
          v24 = 1; /*0x100ae65a1*/
          v21 = 0x8000000000000000LL; /*0x100ae65a4*/
          goto LABEL_38; /*0x100ae65a4*/
        }
        v59 = *(_QWORD *)&v62[8]; /*0x100ae61c0*/
        v60 = *(_OWORD *)&v62[16]; /*0x100ae61c7*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v66, &v44[40]); /*0x100ae61dc*/
        v67.i64[1] = (__int64)v69; /*0x100ae61f3*/
        v67.i64[2] = *(_QWORD *)&v44[72]; /*0x100ae61f7*/
        v67.i16[12] = *(_WORD *)&v44[80]; /*0x100ae61fb*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v38, &v59); /*0x100ae620d*/
        *(__m256i *)&v62[16] = v67; /*0x100ae6221*/
        *(_OWORD *)v62 = v66; /*0x100ae624d*/
        *(_QWORD *)&v62[48] = v38; /*0x100ae6262*/
        *(_QWORD *)&v62[56] = v39; /*0x100ae6269*/
        *(_QWORD *)&v62[64] = v40; /*0x100ae6277*/
        alloc::vec::Vec$LT$T$C$A$GT$::push_mut::h60ae2a1681de84e9(&v48, v62); /*0x100ae628c*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v62, &v44[40]); /*0x100ae629b*/
        v35 = v60; /*0x100ae62bc*/
        *((_QWORD *)&v34 + 1) = v59; /*0x100ae62c3*/
        v33 = *(_OWORD *)v62; /*0x100ae62d8*/
        *(_QWORD *)&v34 = *(_QWORD *)&v62[16]; /*0x100ae62ed*/
        core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..relay..codex_thread_visibility..AppliedSessionMetaAnchorPatch$GT$$GT$::he6f315affe594b3f(&v45); /*0x100ae62fb*/
        v47 = v35; /*0x100ae6315*/
        v46 = v34; /*0x100ae6331*/
        v45 = v33; /*0x100ae634d*/
      }
    }
    if ( v50 ) /*0x100ae635e*/
    {
      codexmate_lib::core::relay::codex_thread_visibility::replace_session_meta_lines::haca5d114b57dfff7( /*0x100ae6379*/
        v62,
        (__int64)v10,
        v65.i64[0],
        v49,
        v50);
      v16 = *(_QWORD *)v62; /*0x100ae637e*/
      if ( *(_QWORD *)v62 == 11 ) /*0x100ae6389*/
      {
        v64 = v51; /*0x100ae6396*/
        v16 = (__int64)v52; /*0x100ae639d*/
        v68 = v53; /*0x100ae63ab*/
        v13 = v54; /*0x100ae63af*/
        v29 = v55; /*0x100ae63c1*/
        v28 = v29 >> 64; /*0x100ae63c1*/
        v70 = (void *)v29; /*0x100ae63c1*/
        std::path::Path::to_path_buf::h73855ce4b54f7174(v62, v10, v65.i64[0]); /*0x100ae63d6*/
        *(__m256i *)&v56[32] = v42; /*0x100ae63f0*/
        *(_OWORD *)&v56[16] = v41; /*0x100ae6428*/
        *(_OWORD *)&v56[64] = v45; /*0x100ae643d*/
        *(_OWORD *)&v56[80] = v46; /*0x100ae6452*/
        *(_OWORD *)&v56[96] = v47; /*0x100ae646e*/
        *(_OWORD *)v56 = *(_OWORD *)&v62[8]; /*0x100ae6498*/
        v65 = (__m128i)*(unsigned __int64 *)v62; /*0x100ae64a7*/
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$codexmate_lib..core..relay..codex_thread_visibility..SessionMetaLine$C$alloc..string..String$RP$$GT$$GT$::hf4442198a098bf28(&v48); /*0x100ae64b2*/
        inserted = _mm_unpacklo_epi64((__m128i)v28, v65); /*0x100ae64bc*/
        v22 = v63; /*0x100ae64c1*/
        v21 = v64; /*0x100ae64c8*/
        goto LABEL_17; /*0x100ae64cf*/
      }
      v69 = *(void **)&v62[8]; /*0x100ae6520*/
      v70 = *(void **)&v62[24]; /*0x100ae6532*/
      v13 = *(void **)&v62[16]; /*0x100ae6532*/
      goto LABEL_37; /*0x100ae6536*/
    }
    v24 = 0; /*0x100ae64d4*/
    v65 = _mm_insert_epi64(_mm_load_si128((const __m128i *)""), v57, 0); /*0x100ae64ea*/
    v13 = v68; /*0x100ae64ef*/
    v69 = v70; /*0x100ae64f7*/
    v70 = v58; /*0x100ae6502*/
    v16 = (__int64)__s1; /*0x100ae6506*/
    v21 = v64; /*0x100ae650d*/
LABEL_38:
    core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..relay..codex_thread_visibility..AppliedSessionMetaAnchorPatch$GT$$GT$::he6f315affe594b3f(&v45); /*0x100ae65ae*/
    core::ptr::drop_in_place$LT$core..option..Option$LT$codexmate_lib..core..relay..codex_thread_visibility..AppliedSessionMetaAnchorPatch$GT$$GT$::he6f315affe594b3f(&v41); /*0x100ae65c1*/
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$LP$codexmate_lib..core..relay..codex_thread_visibility..SessionMetaLine$C$alloc..string..String$RP$$GT$$GT$::hf4442198a098bf28(&v48); /*0x100ae65cd*/
    if ( v24 ) /*0x100ae65d5*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreWarning$GT$::h62f2d75346d7894b(&v51); /*0x100ae65de*/
    v68 = v69; /*0x100ae65e7*/
    v14 = v70; /*0x100ae65eb*/
    v22 = v63; /*0x100ae65ef*/
    inserted = _mm_load_si128(&v65); /*0x100ae65f6*/
    goto LABEL_41; /*0x100ae65f6*/
  }
  inserted = _mm_loadu_si128((const __m128i *)&v62[32]); /*0x100ae5ed7*/
  *(_OWORD *)v56 = *(_OWORD *)&v62[48]; /*0x100ae5ee6*/
  *(_OWORD *)&v56[16] = *(_OWORD *)&v62[64]; /*0x100ae5f02*/
  *(_OWORD *)&v56[32] = *(_OWORD *)&v62[80]; /*0x100ae5f1e*/
  v14 = *(void **)&v62[24]; /*0x100ae5f52*/
  v13 = *(void **)&v62[16]; /*0x100ae5f52*/
  if ( v64 ) /*0x100ae5f3d*/
  {
    v65 = inserted; /*0x100ae5f55*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v64, 1); /*0x100ae5f5a*/
    inserted = _mm_load_si128(&v65); /*0x100ae5f5f*/
  }
  v21 = 0x8000000000000000LL; /*0x100ae6064*/
  v22 = v63; /*0x100ae606e*/
LABEL_41:
  v65 = inserted; /*0x100ae65fb*/
  if ( v22 ) /*0x100ae6603*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v44, v22, 1); /*0x100ae6611*/
    inserted = _mm_load_si128(&v65); /*0x100ae6616*/
  }
  if ( *(_QWORD *)&v44[40] ) /*0x100ae6625*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)&v44[48], *(_QWORD *)&v44[40], 1); /*0x100ae6633*/
    inserted = _mm_load_si128(&v65); /*0x100ae6638*/
  }
  if ( v21 == 0x8000000000000000LL ) /*0x100ae664a*/
  {
    v12 = v68; /*0x100ae664c*/
    goto LABEL_47; /*0x100ae664c*/
  }
  *(_QWORD *)&v44[8] = v68; /*0x100ae66ca*/
  *(_QWORD *)&v44[16] = v13; /*0x100ae66d1*/
  *(_QWORD *)&v44[24] = v14; /*0x100ae66d8*/
  qmemcpy(&v62[8], v56, 0x70u); /*0x100ae66f2*/
  v43 = v21; /*0x100ae66f5*/
  *(_QWORD *)v44 = v16; /*0x100ae66fc*/
  *(_QWORD *)&v44[32] = inserted.i64[0]; /*0x100ae6703*/
  *(_QWORD *)v62 = _mm_extract_epi64(inserted, 1); /*0x100ae6712*/
  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v66, v36); /*0x100ae6728*/
  *(_QWORD *)&__src[4] = *(_QWORD *)&v44[32]; /*0x100ae6734*/
  __src[3] = *(_OWORD *)&v44[16]; /*0x100ae6750*/
  __src[2] = *(_OWORD *)v44; /*0x100ae6773*/
  *((_QWORD *)&__src[1] + 1) = v43; /*0x100ae677a*/
  qmemcpy((char *)&__src[4] + 8, v62, 0x78u); /*0x100ae6794*/
  *(_QWORD *)&__src[1] = v67.i64[0]; /*0x100ae679b*/
  __src[0] = v66; /*0x100ae67b1*/
  return memcpy(__dst, __src, 0xC0u); /*0x100ae66b4*/
}