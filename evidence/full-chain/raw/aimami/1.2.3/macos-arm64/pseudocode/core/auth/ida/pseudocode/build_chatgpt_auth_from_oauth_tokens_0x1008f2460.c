// __ZN13codexmate_lib4core4auth36build_chatgpt_auth_from_oauth_tokens @ 0x1008f2460 | 基线 same-set
__int64 __fastcall codexmate_lib::core::auth::build_chatgpt_auth_from_oauth_tokens::hbd4d54c82ae8ddd2(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3,
        _QWORD *a4,
        __m128i a5,
        __m128d a6)
{
  __int64 v8; // r14
  __int64 v9; // rdx
  __int64 v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdx
  __int64 *v13; // r12
  __int64 v14; // rbx
  __int64 v15; // r14
  char *v16; // rax
  char v17; // bl
  __int64 v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // rdx
  unsigned __int64 **v21; // rsi
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rdx
  unsigned __int64 v29; // rax
  unsigned __int64 *v31; // rsi
  __int64 v32; // rdi
  unsigned __int64 v33; // rax
  __m128i v34; // xmm2
  __int64 v36; // r9
  unsigned __int64 *v37; // rcx
  unsigned __int64 v38; // rax
  __int64 v39; // rcx
  __int64 v40; // rdx
  __int64 v41; // rdi
  __int64 v42; // rbx
  unsigned int v43; // eax
  unsigned __int64 v44; // rax
  __int64 v45; // rsi
  __int64 v46; // r14
  __int64 v47; // rbx
  int v48; // r12d
  __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rbx
  unsigned __int64 v52; // r14
  _DWORD *v53; // rax
  _QWORD *v54; // rcx
  unsigned __int64 *v56[6]; // [rsp+0h] [rbp-180h] BYREF
  unsigned __int64 v57; // [rsp+30h] [rbp-150h] BYREF
  __int64 v58; // [rsp+38h] [rbp-148h]
  __int64 v59; // [rsp+40h] [rbp-140h]
  unsigned __int64 *v60; // [rsp+48h] [rbp-138h] BYREF
  __int64 v61; // [rsp+50h] [rbp-130h]
  __int64 v62; // [rsp+60h] [rbp-120h]
  char v63[16]; // [rsp+68h] [rbp-118h] BYREF
  __int64 v64; // [rsp+78h] [rbp-108h]
  _QWORD v65[3]; // [rsp+80h] [rbp-100h] BYREF
  int v66; // [rsp+98h] [rbp-E8h] BYREF
  __int64 v67; // [rsp+9Ch] [rbp-E4h]
  __int64 v68; // [rsp+A8h] [rbp-D8h]
  __int64 v69; // [rsp+B0h] [rbp-D0h]
  __int64 v70; // [rsp+B8h] [rbp-C8h]
  __int128 v71; // [rsp+C0h] [rbp-C0h] BYREF
  __int64 v72; // [rsp+D0h] [rbp-B0h]
  __int64 v73; // [rsp+D8h] [rbp-A8h]
  __int64 v74; // [rsp+E0h] [rbp-A0h]
  __int64 v75; // [rsp+E8h] [rbp-98h]
  __int64 v76; // [rsp+F0h] [rbp-90h]
  __int64 v77; // [rsp+F8h] [rbp-88h]
  unsigned __int64 v78; // [rsp+100h] [rbp-80h]
  __int128 v79; // [rsp+108h] [rbp-78h] BYREF
  __int64 v80; // [rsp+118h] [rbp-68h]
  __int64 v81; // [rsp+120h] [rbp-60h]
  __int64 v82; // [rsp+128h] [rbp-58h]
  __int64 v83; // [rsp+130h] [rbp-50h]
  _QWORD *v84; // [rsp+138h] [rbp-48h]
  __int64 *v85; // [rsp+140h] [rbp-40h]
  __int64 v86; // [rsp+148h] [rbp-38h]
  unsigned __int64 v87; // [rsp+150h] [rbp-30h]

  v84 = a4; /*0x1008f2474*/
  v85 = a2; /*0x1008f247b*/
  v8 = a3[2]; /*0x1008f2486*/
  v76 = a3[1]; /*0x1008f248d*/
  core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v76, v8); /*0x1008f2497*/
  if ( !v9 ) /*0x1008f249f*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v76, v8); /*0x1008f2549*/
    v18 = 41; /*0x1008f254e*/
    v16 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(41, 1); /*0x1008f255d*/
    if ( v16 ) /*0x1008f2565*/
    {
      qmemcpy(v16, "OAuth token response missing access_token", 41); /*0x1008f25ad*/
      v17 = 1; /*0x1008f25b4*/
      v15 = 41; /*0x1008f25b6*/
LABEL_10:
      v13 = v85; /*0x1008f2633*/
LABEL_11:
      *(_QWORD *)(a1 + 8) = 9; /*0x1008f2637*/
      *(_QWORD *)(a1 + 16) = v15; /*0x1008f263f*/
      *(_QWORD *)(a1 + 24) = v16; /*0x1008f2643*/
      *(_QWORD *)(a1 + 32) = v15; /*0x1008f2647*/
      *(_QWORD *)a1 = 0x8000000000000001LL; /*0x1008f2658*/
      if ( *v84 ) /*0x1008f2660*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v84[1], *v84, 1); /*0x1008f2671*/
      if ( *a3 ) /*0x1008f2676*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, *a3, 1); /*0x1008f268a*/
      v19 = *v13; /*0x1008f268f*/
      if ( ((*v13 != 0x8000000000000000LL) & (unsigned __int8)v17) != 0 && v19 ) /*0x1008f26ae*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13[1], v19, 1); /*0x1008f26be*/
      return a1; /*0x1008f26c3*/
    }
LABEL_74:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v18); /*0x1008f2d3b*/
  }
  v10 = v84[1]; /*0x1008f24a9*/
  v11 = v84[2]; /*0x1008f24ad*/
  core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v10, v11); /*0x1008f24b1*/
  if ( !v12 ) /*0x1008f24b9*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10, v11); /*0x1008f25be*/
    v18 = 42; /*0x1008f25c3*/
    v16 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(42, 1); /*0x1008f25d2*/
    if ( v16 ) /*0x1008f25da*/
    {
      qmemcpy(v16, "OAuth token response missing refresh_token", 42); /*0x1008f2622*/
      v17 = 1; /*0x1008f262b*/
      v15 = 42; /*0x1008f262d*/
      goto LABEL_10; /*0x1008f262d*/
    }
    goto LABEL_74; /*0x1008f25da*/
  }
  v13 = v85; /*0x1008f24bf*/
  v14 = *v85; /*0x1008f24c3*/
  if ( *v85 == 0x8000000000000000LL ) /*0x1008f24d4*/
  {
LABEL_4:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v10, v11); /*0x1008f24da*/
    v15 = 37; /*0x1008f24df*/
    v16 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(37, 1); /*0x1008f24ef*/
    if ( !v16 ) /*0x1008f24f7*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 37); /*0x1008f2d57*/
    qmemcpy(v16, "OAuth token response missing id_token", 37); /*0x1008f253f*/
    v17 = 0; /*0x1008f2542*/
    goto LABEL_11; /*0x1008f2544*/
  }
  v11 = v85[2]; /*0x1008f26cd*/
  v86 = v85[1]; /*0x1008f26d2*/
  v10 = v86; /*0x1008f26c8*/
  v68 = v11; /*0x1008f26d6*/
  core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v86, v11); /*0x1008f26dd*/
  if ( !v20 ) /*0x1008f26e5*/
  {
    if ( v14 ) /*0x1008f279d*/
    {
      v10 = v86; /*0x1008f27a8*/
      v11 = v14; /*0x1008f27ac*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86, v14, 1); /*0x1008f27af*/
    }
    goto LABEL_4; /*0x1008f27b4*/
  }
  v77 = v14; /*0x1008f26eb*/
  codexmate_lib::core::auth::decode_jwt_claims::hb792be1e7518c525(&v60, v76, v8, *(double *)a5.i64); /*0x1008f2703*/
  codexmate_lib::core::auth::decode_jwt_claims::hb792be1e7518c525(v56, v86, v68, *(double *)a5.i64); /*0x1008f2726*/
  v21 = v56; /*0x1008f273b*/
  codexmate_lib::core::auth::nested_dict::hee321afd40c91aed( /*0x1008f2747*/
    &v71,
    (__int64 *)v56,
    "https://api.openai.com/authhttps://api.openai.com/profilechatgpt_user_idchatgpt_plan_typechatgpt_subscription_active"
    "_untilauth.json contains AiMaMi managed virtual auth; not a real account",
    0x1Bu);
  if ( (_QWORD)v71 ) /*0x1008f2754*/
  {
    v83 = v75; /*0x1008f275d*/
    v82 = v74; /*0x1008f2768*/
    v81 = v73; /*0x1008f2773*/
    v80 = v72; /*0x1008f277e*/
    v79 = v71; /*0x1008f2794*/
  }
  else
  {
    v21 = &v60; /*0x1008f27c4*/
    codexmate_lib::core::auth::nested_dict::hee321afd40c91aed( /*0x1008f27d0*/
      &v79,
      (__int64 *)&v60,
      "https://api.openai.com/authhttps://api.openai.com/profilechatgpt_user_idchatgpt_plan_typechatgpt_subscription_acti"
      "ve_untilauth.json contains AiMaMi managed virtual auth; not a real account",
      0x1Bu);
  }
  if ( (_QWORD)v79 ) /*0x1008f27da*/
  {
    v75 = v83; /*0x1008f27e0*/
    v74 = v82; /*0x1008f27eb*/
    v73 = v81; /*0x1008f27f6*/
    v72 = v80; /*0x1008f2801*/
    v71 = v79; /*0x1008f2817*/
  }
  else
  {
    std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x1008f2827*/
    v25 = v22; /*0x1008f2829*/
    if ( *(_BYTE *)(v22 + 16) == 1 ) /*0x1008f2830*/
    {
      v26 = *(_QWORD *)v22; /*0x1008f2836*/
      v27 = *(_QWORD *)(v25 + 8); /*0x1008f2839*/
    }
    else
    {
      v26 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x1008f2d25*/
              &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
              v21,
              v23,
              v24);
      *(_QWORD *)v25 = v26; /*0x1008f2d2a*/
      *(_QWORD *)(v25 + 8) = v27; /*0x1008f2d2d*/
      *(_BYTE *)(v25 + 16) = 1; /*0x1008f2d31*/
    }
    *(_QWORD *)v25 = v26 + 1; /*0x1008f2841*/
    v73 = 0; /*0x1008f284b*/
    v72 = 0; /*0x1008f2859*/
    v71 = (unsigned __int64)anon_155c4da9b5393270cfa7378e2b52c417_32; /*0x1008f2875*/
    v74 = v26; /*0x1008f287c*/
    v75 = v27; /*0x1008f2883*/
  }
  codexmate_lib::core::auth::string_val::h06aa957814d20bfc( /*0x1008f28a1*/
    (signed __int64 *)&v79,
    (__int64 *)&v71,
    &unk_101677482,
    0x12u);
  if ( (_QWORD)v79 == 0x8000000000000000LL ) /*0x1008f28ad*/
  {
LABEL_30:
    v87 = 0x8000000000000000LL; /*0x1008f28af*/
    if ( !v62 ) /*0x1008f28bb*/
      goto LABEL_60; /*0x1008f28bb*/
    goto LABEL_34; /*0x1008f28bb*/
  }
  if ( !v80 ) /*0x1008f28cd*/
  {
    if ( (_QWORD)v79 ) /*0x1008f29dd*/
      *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)&v79 + 1), v79, 1); /*0x1008f29e8*/
    goto LABEL_30; /*0x1008f29ed*/
  }
  v64 = v80; /*0x1008f28d3*/
  v69 = *((_QWORD *)&v79 + 1); /*0x1008f28da*/
  v87 = v79; /*0x1008f28e1*/
  if ( !v62 ) /*0x1008f28ed*/
    goto LABEL_60; /*0x1008f28ed*/
LABEL_34:
  v29 = core::hash::BuildHasher::hash_one::h9b088d3a50c49345(v63, "exp", 3); /*0x1008f28f3*/
  v28 = v61; /*0x1008f2919*/
  a5 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v29 >> 57), (__m128i)0LL); /*0x1008f2928*/
  v31 = v60 - 7; /*0x1008f292d*/
  v32 = 0; /*0x1008f2931*/
  a6.f64[0] = NAN; /*0x1008f2933*/
  while ( 1 ) /*0x1008f2937*/
  {
    v33 = v61 & v29; /*0x1008f2937*/
    v34 = _mm_loadu_si128((const __m128i *)((char *)v60 + v33)); /*0x1008f293a*/
    _R8D = _mm_movemask_epi8(_mm_cmpeq_epi8(v34, a5)); /*0x1008f2947*/
    if ( _R8D ) /*0x1008f294f*/
      break; /*0x1008f294f*/
LABEL_39:
    if ( _mm_movemask_epi8(_mm_cmpeq_epi8(v34, (__m128i)-1LL)) ) /*0x1008f299e*/
      goto LABEL_60; /*0x1008f29a6*/
    v29 = v33 + v32 + 16; /*0x1008f29ac*/
    v32 += 16; /*0x1008f29b1*/
  }
  while ( 1 ) /*0x1008f2951*/
  {
    __asm { tzcnt r9d, r8d } /*0x1008f2951*/
    v36 = 0x1FFFFFFFFFFFFFF9LL * (v61 & (v33 + _R9)); /*0x1008f295f*/
    if ( v31[v36 + 2] == 3 && !(*(_WORD *)v31[v36 + 1] ^ 0x7865 | *(unsigned __int8 *)(v31[v36 + 1] + 2) ^ 0x70) ) /*0x1008f2987*/
      break; /*0x1008f2987*/
    _R9 = (unsigned int)(_R8D - 1); /*0x1008f298d*/
    LOWORD(_R9) = _R8D & (_R8D - 1); /*0x1008f2991*/
    _R8D = _R9; /*0x1008f2995*/
    if ( !(_WORD)_R9 ) /*0x1008f2998*/
      goto LABEL_39; /*0x1008f2998*/
  }
  if ( LOBYTE(v60[v36 - 4]) != 2 ) /*0x1008f29bd*/
    goto LABEL_60; /*0x1008f29bd*/
  v37 = &v60[v36]; /*0x1008f29c3*/
  v38 = v60[v36 - 3]; /*0x1008f29c6*/
  if ( v38 ) /*0x1008f29cd*/
  {
    if ( (_DWORD)v38 == 1 ) /*0x1008f29d2*/
    {
      v39 = *(v37 - 2); /*0x1008f29d4*/
      goto LABEL_53; /*0x1008f29d8*/
    }
    a5.i64[0] = *(v37 - 2); /*0x1008f2a1e*/
  }
  else
  {
    v39 = *(v37 - 2); /*0x1008f29f2*/
    if ( v39 >= 0 ) /*0x1008f29f9*/
      goto LABEL_53; /*0x1008f29f9*/
    a6 = _mm_sub_pd( /*0x1008f2a08*/
           (__m128d)_mm_unpacklo_epi32((__m128i)(unsigned __int64)v39, (__m128i)xmmword_1015DBA50),
           (__m128d)xmmword_1015DBA60);
    *(double *)a5.i64 = _mm_unpackhi_pd(a6, a6).f64[0] + a6.f64[0]; /*0x1008f2a18*/
  }
  v40 = 0x7FFFFFFFFFFFFFFFLL; /*0x1008f2a30*/
  if ( *(double *)a5.i64 <= 9.223372036854775e18 ) /*0x1008f2a3a*/
    v40 = (unsigned int)(int)*(double *)a5.i64; /*0x1008f2a3a*/
  v39 = v40; /*0x1008f2a44*/
LABEL_53:
  v28 = v39 / 86400; /*0x1008f2a48*/
  v41 = (v39 % 86400) >> 63; /*0x1008f2a76*/
  v42 = v39 % 86400 + 86400; /*0x1008f2a80*/
  if ( v39 % 86400 >= 0 ) /*0x1008f2a88*/
    v42 = v39 % 86400; /*0x1008f2a88*/
  if ( (unsigned __int64)(v41 + v28 - 2146764485) >= 0xFFFFFFFF00000000LL ) /*0x1008f2aa1*/
  {
    v43 = chrono::naive::date::NaiveDate::from_num_days_from_ce_opt::he35209b570b1cf86((unsigned int)(v28 + v41 + 719163)); /*0x1008f2aac*/
    if ( v43 ) /*0x1008f2ab3*/
    {
      *(_QWORD *)&v79 = __PAIR64__(v42, v43); /*0x1008f2ab5*/
      DWORD2(v79) = 0; /*0x1008f2abb*/
      chrono::datetime::DateTime$LT$Tz$GT$::to_rfc3339::h4e0440ad218358de(&v57, &v79); /*0x1008f2acd*/
      v44 = v57; /*0x1008f2ad2*/
      v45 = 0; /*0x1008f2ae0*/
      v28 = v59; /*0x1008f2ae5*/
      v70 = v58; /*0x1008f2aec*/
      if ( v57 != 0x8000000000000000LL ) /*0x1008f2af3*/
        v45 = v58; /*0x1008f2af3*/
      goto LABEL_61; /*0x1008f2af3*/
    }
  }
LABEL_60:
  v45 = 0; /*0x1008f2af9*/
  v44 = 0x8000000000000000LL; /*0x1008f2afb*/
LABEL_61:
  v78 = v44; /*0x1008f2afe*/
  codexmate_lib::core::auth::normalize_timestamp::hab7b7252ca810a23((__int64)&v79, v45, v28); /*0x1008f2b06*/
  v46 = v79; /*0x1008f2b0b*/
  if ( (_QWORD)v79 == 0x8000000000000000LL ) /*0x1008f2b12*/
    goto LABEL_67; /*0x1008f2b12*/
  v47 = *((_QWORD *)&v79 + 1); /*0x1008f2b18*/
  chrono::datetime::DateTime$LT$chrono..offset..fixed..FixedOffset$GT$::parse_from_rfc3339::hc448c6d5f9569cb5( /*0x1008f2b2a*/
    &v66,
    *((_QWORD *)&v79 + 1),
    v80);
  v48 = v66; /*0x1008f2b2f*/
  v49 = v67; /*0x1008f2b36*/
  if ( v46 ) /*0x1008f2b40*/
  {
    v50 = v47; /*0x1008f2b47*/
    v51 = v67; /*0x1008f2b4d*/
    *(double *)a5.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, v46, 1); /*0x1008f2b50*/
    v49 = v51; /*0x1008f2b55*/
  }
  if ( !v48 ) /*0x1008f2b5b*/
  {
LABEL_67:
    v52 = v78; /*0x1008f2bc6*/
    chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(&v79); /*0x1008f2bca*/
    chrono::datetime::DateTime$LT$Tz$GT$::to_rfc3339::h4e0440ad218358de(v65, &v79); /*0x1008f2bda*/
  }
  else
  {
    LODWORD(v79) = v48; /*0x1008f2b5d*/
    *(_QWORD *)((char *)&v79 + 4) = v49; /*0x1008f2b61*/
    v52 = v78; /*0x1008f2b81*/
    chrono::naive::datetime::NaiveDateTime::checked_sub_signed::h49bd2beb34628577( /*0x1008f2b85*/
      &v66,
      &v79,
      3600,
      0,
      *(double *)a5.i64,
      a6.f64[0]);
    if ( !v66 ) /*0x1008f2b92*/
      core::option::expect_failed::ha75f8bdcbd673567( /*0x1008f2d82*/
        "`DateTime - TimeDelta` overflowedchatgpt_account_user_idlast_refresh is outside the supported timestamp rangelast_refresh must be a timestamp string or numberexp",
        33,
        &off_10196DA10);
    LODWORD(v79) = v66; /*0x1008f2b9f*/
    *(_QWORD *)((char *)&v79 + 4) = v67; /*0x1008f2ba2*/
    chrono::datetime::DateTime$LT$Tz$GT$::to_rfc3339::h4e0440ad218358de(v65, &v79); /*0x1008f2bb1*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v65, &v79); /*0x1008f2bdf*/
  v53 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(7, 1); /*0x1008f2bee*/
  if ( !v53 ) /*0x1008f2bf6*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 7); /*0x1008f2d68*/
  *(_QWORD *)(a1 + 160) = v65[2]; /*0x1008f2c03*/
  *(_QWORD *)(a1 + 152) = v65[1]; /*0x1008f2c11*/
  *(_QWORD *)(a1 + 144) = v65[0]; /*0x1008f2c1f*/
  *(_DWORD *)((char *)v53 + 3) = 1953523572; /*0x1008f2c26*/
  *v53 = 1952540771; /*0x1008f2c2d*/
  *(_QWORD *)a1 = 7; /*0x1008f2c33*/
  *(_QWORD *)(a1 + 8) = v53; /*0x1008f2c3b*/
  *(_QWORD *)(a1 + 16) = 7; /*0x1008f2c3f*/
  *(_QWORD *)(a1 + 24) = 0x8000000000000000LL; /*0x1008f2c47*/
  *(_QWORD *)(a1 + 48) = v77; /*0x1008f2c52*/
  *(_QWORD *)(a1 + 56) = v86; /*0x1008f2c5a*/
  *(_QWORD *)(a1 + 64) = v68; /*0x1008f2c65*/
  *(_QWORD *)(a1 + 72) = *a3; /*0x1008f2c6c*/
  *(_QWORD *)(a1 + 80) = a3[1]; /*0x1008f2c74*/
  *(_QWORD *)(a1 + 88) = a3[2]; /*0x1008f2c7c*/
  v54 = v84; /*0x1008f2c80*/
  *(_QWORD *)(a1 + 96) = *v84; /*0x1008f2c87*/
  *(_QWORD *)(a1 + 104) = v54[1]; /*0x1008f2c8f*/
  *(_QWORD *)(a1 + 112) = v54[2]; /*0x1008f2c97*/
  *(_QWORD *)(a1 + 120) = v87; /*0x1008f2c9f*/
  *(_QWORD *)(a1 + 128) = v69; /*0x1008f2caa*/
  *(_QWORD *)(a1 + 136) = v64; /*0x1008f2cb8*/
  *(_BYTE *)(a1 + 168) = 0; /*0x1008f2cbf*/
  if ( 2 * v52 ) /*0x1008f2cc7*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, v52, 1); /*0x1008f2ce3*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3eb307b42c3329d7(&v71); /*0x1008f2cf1*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3eb307b42c3329d7(v56); /*0x1008f2cff*/
  _$LT$hashbrown..raw..RawTable$LT$T$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h3eb307b42c3329d7(&v60); /*0x1008f2d0b*/
  return a1; /*0x1008f2d13*/
}