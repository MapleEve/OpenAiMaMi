// mac 1.2.2 NEW set_voice_overlay_style 0x1008b7230 d=2
unsigned __int64 __fastcall codexmate_lib::core::voice::workspace::to_payload::h317c26750f3a7742(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        __int64 a3,
        _QWORD *a4)
{
  unsigned __int64 v4; // r14
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rbx
  __int64 i; // r15
  unsigned __int64 v10; // rbx
  size_t v11; // r14
  __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // r12
  __int64 v15; // r14
  __int64 j; // r13
  unsigned __int64 v17; // r14
  __int64 v18; // rbx
  __int64 v19; // r15
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // rbx
  unsigned __int64 v23; // r14
  __int64 v24; // r13
  __int64 v25; // rax
  __int64 v26; // r12
  __int64 v27; // rbx
  __int64 k; // r13
  char v29; // al
  unsigned __int64 *v30; // rsi
  unsigned __int64 v31; // rax
  unsigned __int64 result; // rax
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rdx
  _QWORD __src[55]; // [rsp+8h] [rbp-2A8h] BYREF
  __int64 v38; // [rsp+1C0h] [rbp-F0h]
  unsigned __int64 v39; // [rsp+1C8h] [rbp-E8h]
  unsigned __int64 *v40; // [rsp+1D0h] [rbp-E0h]
  unsigned __int64 v41; // [rsp+1D8h] [rbp-D8h]
  __int64 v42; // [rsp+1E0h] [rbp-D0h]
  unsigned __int64 v43; // [rsp+1E8h] [rbp-C8h]
  unsigned __int64 v44; // [rsp+1F0h] [rbp-C0h]
  __int64 v45; // [rsp+1F8h] [rbp-B8h]
  unsigned __int64 v46; // [rsp+200h] [rbp-B0h]
  unsigned __int64 v47; // [rsp+208h] [rbp-A8h] BYREF
  __int64 v48; // [rsp+210h] [rbp-A0h]
  unsigned __int64 v49; // [rsp+220h] [rbp-90h] BYREF
  __int64 v50; // [rsp+228h] [rbp-88h]
  unsigned __int64 v51; // [rsp+230h] [rbp-80h]
  unsigned __int64 v52; // [rsp+238h] [rbp-78h] BYREF
  __int64 v53; // [rsp+240h] [rbp-70h]
  unsigned __int64 v54; // [rsp+248h] [rbp-68h]
  char v55; // [rsp+257h] [rbp-59h] BYREF
  __int64 v56; // [rsp+258h] [rbp-58h]
  __int64 v57; // [rsp+260h] [rbp-50h]
  _QWORD *v58; // [rsp+268h] [rbp-48h]
  unsigned __int64 v59; // [rsp+270h] [rbp-40h] BYREF
  __int64 v60; // [rsp+278h] [rbp-38h]
  unsigned __int64 v61; // [rsp+280h] [rbp-30h]

  v4 = a4[2]; /*0x1008b7244*/
  if ( v4 > 0x124924924924924LL ) /*0x1008b7259*/
  {
    v5 = 0; /*0x1008b725b*/
    goto LABEL_3; /*0x1008b725b*/
  }
  v39 = a2; /*0x1008b7269*/
  v38 = a3; /*0x1008b7270*/
  v58 = a4; /*0x1008b7277*/
  v40 = a1; /*0x1008b727b*/
  if ( 112 * v4 ) /*0x1008b7248*/
  {
    v57 = v58[1]; /*0x1008b728f*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1008b7293*/
    v5 = 8; /*0x1008b7298*/
    v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(112 * v4, 8u); /*0x1008b72a6*/
    if ( !v6 ) /*0x1008b72ae*/
LABEL_3:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v5); /*0x1008b725e*/
    v7 = v6; /*0x1008b72b0*/
    v56 = 112 * v4; /*0x1008b72b3*/
    v59 = v4; /*0x1008b72b7*/
    v60 = v6; /*0x1008b72bb*/
    if ( v4 ) /*0x1008b72c2*/
    {
      v8 = 0; /*0x1008b72c4*/
      for ( i = 0; i != v4; ++i ) /*0x1008b72cd*/
      {
        if ( v56 == v8 ) /*0x1008b72d4*/
          break; /*0x1008b72d4*/
        _$LT$codexmate_lib..core..models..VoicePromptTemplate$u20$as$u20$core..clone..Clone$GT$::clone::hab07bbd9da388b30( /*0x1008b72e1*/
          __src,
          v57 + v8);
        qmemcpy((void *)(v7 + v8), __src, 0x70u); /*0x1008b72f5*/
        v8 += 112; /*0x1008b72f8*/
      }
    }
  }
  else
  {
    v59 = 0; /*0x1008b7303*/
    v60 = 8; /*0x1008b730b*/
  }
  v44 = v59; /*0x1008b731b*/
  v45 = v60; /*0x1008b7322*/
  v46 = v4; /*0x1008b7329*/
  v10 = v58[5]; /*0x1008b7334*/
  v11 = 160 * v10; /*0x1008b733f*/
  if ( v10 > 0xCCCCCCCCCCCCCCLL ) /*0x1008b7350*/
  {
    v12 = 0; /*0x1008b7352*/
    goto LABEL_14; /*0x1008b7352*/
  }
  if ( v11 ) /*0x1008b7368*/
  {
    v57 = v58[4]; /*0x1008b7376*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1008b737a*/
    v12 = 8; /*0x1008b737f*/
    v13 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v11, 8u); /*0x1008b738d*/
    if ( !v13 ) /*0x1008b7395*/
LABEL_14:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v12); /*0x1008b7355*/
    v14 = v13; /*0x1008b7397*/
    v56 = 160 * v10; /*0x1008b739a*/
    v59 = v10; /*0x1008b739e*/
    v60 = v13; /*0x1008b73a2*/
    if ( v10 ) /*0x1008b73a9*/
    {
      v15 = 0; /*0x1008b73ab*/
      for ( j = 0; j != v10; ++j ) /*0x1008b73b5*/
      {
        if ( v56 == v15 ) /*0x1008b73c4*/
          break; /*0x1008b73c4*/
        _$LT$codexmate_lib..core..models..VoiceVocabularyEntry$u20$as$u20$core..clone..Clone$GT$::clone::hdc86f23d0f5101de( /*0x1008b73d1*/
          __src,
          v57 + v15);
        memcpy((void *)(v14 + v15), __src, 0xA0u); /*0x1008b73e5*/
        v15 += 160; /*0x1008b73ea*/
      }
    }
  }
  else
  {
    v59 = 0; /*0x1008b73f8*/
    v60 = 8; /*0x1008b7400*/
  }
  v41 = v59; /*0x1008b7410*/
  v42 = v60; /*0x1008b7417*/
  v43 = v10; /*0x1008b741e*/
  v17 = v58[8]; /*0x1008b7429*/
  if ( v17 > 0x1C71C71C71C71C7LL ) /*0x1008b7446*/
  {
    v18 = 0; /*0x1008b7448*/
    goto LABEL_25; /*0x1008b7448*/
  }
  if ( 72 * v17 ) /*0x1008b7435*/
  {
    v19 = v58[7]; /*0x1008b7467*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1008b746b*/
    v18 = 8; /*0x1008b7470*/
    v20 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(72 * v17, 8u); /*0x1008b747d*/
    if ( !v20 ) /*0x1008b7485*/
LABEL_25:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v18); /*0x1008b744a*/
    v56 = 72 * v17; /*0x1008b7487*/
    v47 = v17; /*0x1008b748b*/
    v57 = v20; /*0x1008b7492*/
    v48 = v20; /*0x1008b7496*/
    if ( v17 ) /*0x1008b74a0*/
    {
      v21 = 0; /*0x1008b74ad*/
      v22 = 0; /*0x1008b74b0*/
      do /*0x1008b7574*/
      {
        if ( v56 == v21 ) /*0x1008b74c4*/
          break; /*0x1008b74c4*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v52, v19); /*0x1008b74d1*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v49, v19 + 24); /*0x1008b74e1*/
        _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v59, v19 + 48); /*0x1008b74ee*/
        v19 += 72; /*0x1008b74f3*/
        ++v22; /*0x1008b74f7*/
        __src[2] = v54; /*0x1008b74fe*/
        __src[1] = v53; /*0x1008b750d*/
        __src[0] = v52; /*0x1008b7514*/
        __src[5] = v51; /*0x1008b751f*/
        __src[4] = v50; /*0x1008b7532*/
        __src[3] = v49; /*0x1008b7537*/
        __src[8] = v61; /*0x1008b753f*/
        __src[7] = v60; /*0x1008b754c*/
        __src[6] = v59; /*0x1008b7551*/
        qmemcpy((void *)(v57 + v21), __src, 0x48u); /*0x1008b756a*/
        v21 += 72; /*0x1008b756d*/
      }
      while ( v17 != v22 ); /*0x1008b7574*/
    }
  }
  else
  {
    v47 = 0; /*0x1008b757c*/
    v48 = 8; /*0x1008b7587*/
  }
  v52 = v47; /*0x1008b75a0*/
  v53 = v48; /*0x1008b75a4*/
  v54 = v17; /*0x1008b75a8*/
  v23 = v58[11]; /*0x1008b75b0*/
  if ( v23 > 0x4A7904A7904A79LL ) /*0x1008b75c8*/
  {
    v24 = 0; /*0x1008b75ca*/
    goto LABEL_36; /*0x1008b75ca*/
  }
  if ( 440 * v23 ) /*0x1008b75b4*/
  {
    v57 = v58[10]; /*0x1008b75ee*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1008b75f2*/
    v24 = 8; /*0x1008b75f7*/
    v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(440 * v23, 8u); /*0x1008b7605*/
    if ( !v25 ) /*0x1008b760d*/
LABEL_36:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v24); /*0x1008b75cd*/
    v26 = v25; /*0x1008b760f*/
    v56 = 440 * v23; /*0x1008b7612*/
    v59 = v23; /*0x1008b7616*/
    v60 = v25; /*0x1008b761a*/
    if ( v23 ) /*0x1008b7621*/
    {
      v27 = 0; /*0x1008b7623*/
      for ( k = 0; k != v23; ++k ) /*0x1008b762c*/
      {
        if ( v56 == v27 ) /*0x1008b7634*/
          break; /*0x1008b7634*/
        _$LT$codexmate_lib..core..models..VoiceHistoryEntry$u20$as$u20$core..clone..Clone$GT$::clone::h6418341048072331( /*0x1008b7641*/
          __src,
          v57 + v27);
        memcpy((void *)(v26 + v27), __src, 0x1B8u); /*0x1008b7655*/
        v27 += 440; /*0x1008b765a*/
      }
    }
  }
  else
  {
    v59 = 0; /*0x1008b7668*/
    v60 = 8; /*0x1008b7670*/
  }
  v49 = v59; /*0x1008b7680*/
  v50 = v60; /*0x1008b7687*/
  v51 = v23; /*0x1008b768e*/
  v47 = v39; /*0x1008b7699*/
  v48 = v38; /*0x1008b76a7*/
  v59 = 0; /*0x1008b76ae*/
  v60 = 1; /*0x1008b76b6*/
  v61 = 0; /*0x1008b76be*/
  __src[2] = 1610612768; /*0x1008b76c6*/
  __src[0] = &v59; /*0x1008b76d5*/
  __src[1] = &anon_fd792a2461ce7c8d75006ec63925405b_384; /*0x1008b76e3*/
  v29 = _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(&v47, __src); /*0x1008b76f8*/
  v30 = v40; /*0x1008b76ff*/
  if ( v29 ) /*0x1008b7706*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1008b77da*/
      (__int64)&anon_fd792a2461ce7c8d75006ec63925405b_385,
      55,
      (__int64)&v55,
      (__int64)&anon_fd792a2461ce7c8d75006ec63925405b_413,
      (__int64)&anon_fd792a2461ce7c8d75006ec63925405b_387);
  v40[14] = v61; /*0x1008b7710*/
  v31 = v59; /*0x1008b7714*/
  v30[13] = v60; /*0x1008b771c*/
  v30[12] = v31; /*0x1008b7720*/
  result = v58[16]; /*0x1008b7728*/
  v30[2] = v46; /*0x1008b7736*/
  v33 = v44; /*0x1008b773a*/
  v30[1] = v45; /*0x1008b7748*/
  *v30 = v33; /*0x1008b774c*/
  v30[5] = v43; /*0x1008b7756*/
  v34 = v41; /*0x1008b775a*/
  v30[4] = v42; /*0x1008b7768*/
  v30[3] = v34; /*0x1008b776c*/
  v35 = v53; /*0x1008b7774*/
  v30[6] = v52; /*0x1008b7778*/
  v30[7] = v35; /*0x1008b777c*/
  v30[8] = v54; /*0x1008b7784*/
  v36 = v50; /*0x1008b778f*/
  v30[9] = v49; /*0x1008b7796*/
  v30[10] = v36; /*0x1008b779a*/
  v30[11] = v51; /*0x1008b77a2*/
  v30[15] = result; /*0x1008b77a6*/
  return result; /*0x1008b77aa*/
}