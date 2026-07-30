// __ZN13codexmate_lib4core5relay16codex_diagnostic30DiagnosticRolloutProviderCache4read @ 0x10024c700 | 1.2.4 NEW-delta
unsigned __int64 __fastcall codexmate_lib::core::relay::codex_diagnostic::DiagnosticRolloutProviderCache::read::hf6e727bfaebe7832(
        unsigned __int64 *a1,
        _QWORD *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // r14
  _QWORD *v5; // r12
  unsigned __int64 v7; // rax
  __int64 v9; // rbx
  __int64 v10; // rsi
  __m128i v11; // xmm1
  __int64 v12; // rdi
  __int64 v13; // r8
  __m128i v14; // xmm2
  unsigned __int64 v15; // rax
  __m128i v16; // xmm3
  __m128i v17; // xmm0
  __int64 v19; // rcx
  __int64 v20; // r12
  int v21; // eax
  bool v22; // zf
  __int64 v23; // rbx
  __int64 v24; // r14
  __int64 v25; // rax
  unsigned __int64 result; // rax
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rdi
  __int64 v30; // r8
  __int64 v31; // rax
  __int64 (__fastcall **v32)(); // rsi
  __int64 *v33; // rax
  __int64 v34; // rcx
  __int64 (__fastcall **v35)(); // rdx
  __int64 v36; // rsi
  __int64 v37; // rdi
  __int64 *v38; // r9
  unsigned __int64 *v39; // rbx
  __m128i v40; // [rsp+30h] [rbp-1D0h] BYREF
  __m128i v41; // [rsp+40h] [rbp-1C0h] BYREF
  _QWORD v42[12]; // [rsp+58h] [rbp-1A8h] BYREF
  _BYTE v43[24]; // [rsp+B8h] [rbp-148h] BYREF
  _QWORD *v44; // [rsp+D0h] [rbp-130h]
  unsigned __int64 v45; // [rsp+D8h] [rbp-128h]
  __int64 v46; // [rsp+E0h] [rbp-120h]
  _QWORD v47[12]; // [rsp+E8h] [rbp-118h] BYREF
  __int64 v48; // [rsp+148h] [rbp-B8h] BYREF
  __int64 (__fastcall **v49)(); // [rsp+150h] [rbp-B0h]
  __int64 v50; // [rsp+158h] [rbp-A8h] BYREF
  __int64 (__fastcall **v51)(); // [rsp+160h] [rbp-A0h]
  char v52; // [rsp+168h] [rbp-98h] BYREF
  __int64 v53; // [rsp+178h] [rbp-88h]
  __int64 v54; // [rsp+180h] [rbp-80h]
  __int64 v55; // [rsp+188h] [rbp-78h] BYREF
  unsigned __int64 v56; // [rsp+190h] [rbp-70h] BYREF
  __int64 v57; // [rsp+198h] [rbp-68h]
  unsigned __int64 v58; // [rsp+1A0h] [rbp-60h] BYREF
  unsigned __int64 v59; // [rsp+1A8h] [rbp-58h]
  unsigned __int64 v60; // [rsp+1B0h] [rbp-50h]
  unsigned __int64 v61; // [rsp+1B8h] [rbp-48h] BYREF
  __int64 v62; // [rsp+1C0h] [rbp-40h]
  unsigned __int64 v63; // [rsp+1C8h] [rbp-38h]
  unsigned __int64 *v64; // [rsp+1D0h] [rbp-30h]

  v4 = a4; /*0x10024c714*/
  v5 = a2; /*0x10024c717*/
  if ( !a2[3] ) /*0x10024c72c*/
  {
LABEL_9:
    v23 = a3; /*0x10024c875*/
    codexmate_lib::core::relay::codex_thread_visibility::read_session_meta_provider_anchors::he4755eb8d1c49d14( /*0x10024c885*/
      v47,
      a3,
      v4);
    if ( LODWORD(v47[0]) == 11 ) /*0x10024c891*/
    {
      if ( v47[1] == 0x8000000000000000LL ) /*0x10024c89e*/
      {
        v55 = 0x8000000000000000LL; /*0x10024c8a4*/
      }
      else
      {
        v55 = v47[1]; /*0x10024c9b0*/
        v56 = v47[2]; /*0x10024c9b4*/
        v57 = v47[3]; /*0x10024c9b8*/
        v58 = v47[4]; /*0x10024c9bc*/
        v59 = v47[5]; /*0x10024c9c0*/
        v60 = v47[6]; /*0x10024c9c4*/
      }
    }
    else
    {
      qmemcpy(v42, v47, sizeof(v42)); /*0x10024c909*/
      v61 = 0; /*0x10024c90c*/
      v62 = 1; /*0x10024c914*/
      v63 = 0; /*0x10024c91c*/
      v50 = 1610612768; /*0x10024c924*/
      v48 = (__int64)&v61; /*0x10024c933*/
      v49 = &anon_7245a3145add9b93f83b0a9aa358a664_1177; /*0x10024c941*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hf7852f5125e7a70b( /*0x10024c952*/
                              v42,
                              &v48) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10024cc7f*/
          "a Display implementation returned an error unexpectedlydescription() is deprecated; use Displaycalled `Result:"
          ":unwrap_err()` on an `Ok` valuecalled `Result::unwrap()` on an `Err` valueError2.10.3",
          55,
          &v55,
          &anon_7245a3145add9b93f83b0a9aa358a664_1194,
          &anon_7245a3145add9b93f83b0a9aa358a664_1180);
      v56 = v61; /*0x10024c967*/
      v57 = v62; /*0x10024c96b*/
      v58 = v63; /*0x10024c973*/
      v55 = 0x8000000000000001LL; /*0x10024c977*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::hd9449ef6f49a72b3(v47); /*0x10024c982*/
    }
    std::path::Path::to_path_buf::h73855ce4b54f7174(v43, v23, v4); /*0x10024c9d5*/
    v27 = (v55 - 0x7FFFFFFFFFFFFFFFLL) & (v55 >> 63); /*0x10024c9e6*/
    if ( v27 == 2 ) /*0x10024c9ed*/
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v42, &v56); /*0x10024ca10*/
      v47[3] = v42[2]; /*0x10024ca1c*/
      v47[2] = v42[1]; /*0x10024ca31*/
      v47[1] = v42[0]; /*0x10024ca38*/
      v47[0] = 0x8000000000000001LL; /*0x10024ca3f*/
    }
    else if ( v27 == 1 ) /*0x10024c9f3*/
    {
      v47[0] = 0x8000000000000000LL; /*0x10024c9f9*/
    }
    else
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v61, &v55); /*0x10024ca50*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v47, &v58); /*0x10024ca60*/
      v42[2] = v63; /*0x10024ca69*/
      v42[1] = v62; /*0x10024ca78*/
      v42[0] = v61; /*0x10024ca7f*/
      v28 = v47[2]; /*0x10024ca86*/
      v29 = v47[0]; /*0x10024ca8d*/
      v30 = v47[1]; /*0x10024ca94*/
      v47[0] = v61; /*0x10024ca9b*/
      v47[1] = v62; /*0x10024caa2*/
      v47[2] = v63; /*0x10024caa9*/
      v47[3] = v29; /*0x10024cab0*/
      v47[4] = v30; /*0x10024cab7*/
      v47[5] = v28; /*0x10024cabe*/
    }
    hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h779107bf0cab49df(&v48, v5, v43, v47); /*0x10024cadd*/
    if ( v48 == 0x8000000000000002LL ) /*0x10024caf0*/
      goto LABEL_35; /*0x10024caf0*/
    v31 = (v48 - 0x7FFFFFFFFFFFFFFFLL) & (v48 >> 63); /*0x10024cb00*/
    if ( v31 ) /*0x10024cb03*/
    {
      if ( v31 == 1 ) /*0x10024cb0d*/
        goto LABEL_35; /*0x10024cb0d*/
      v32 = v49; /*0x10024cb13*/
      if ( !v49 ) /*0x10024cb1d*/
        goto LABEL_35; /*0x10024cb1d*/
      v33 = &v50; /*0x10024cb23*/
    }
    else
    {
      if ( v48 ) /*0x10024cbed*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, v48, 1); /*0x10024cbfb*/
      v32 = v51; /*0x10024cc00*/
      if ( !v51 ) /*0x10024cc0a*/
        goto LABEL_35; /*0x10024cc0a*/
      v33 = (__int64 *)&v52; /*0x10024cc0c*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v33, v32, 1); /*0x10024cc1b*/
LABEL_35:
    a1[5] = v60; /*0x10024cc20*/
    a1[4] = v59; /*0x10024cc2c*/
    a1[3] = v58; /*0x10024cc34*/
    a1[2] = v57; /*0x10024cc3c*/
    result = v55; /*0x10024cc40*/
    a1[1] = v56; /*0x10024cc48*/
    *a1 = result; /*0x10024cc4c*/
    return result; /*0x10024cc60*/
  }
  v54 = a3; /*0x10024c737*/
  v53 = a4; /*0x10024c73e*/
  v7 = core::hash::BuildHasher::hash_one::h1e92e25d90002bcf(a2 + 4, a3, a4); /*0x10024c748*/
  _RCX = v7 >> 57; /*0x10024c750*/
  v9 = *a2; /*0x10024c754*/
  v10 = a2[1]; /*0x10024c758*/
  v11 = _mm_shuffle_epi8(_mm_cvtsi32_si128(v7 >> 57), (__m128i)0LL); /*0x10024c765*/
  v12 = *v5 - 72LL; /*0x10024c76a*/
  v13 = 0; /*0x10024c76e*/
  v14 = (__m128i)-1LL; /*0x10024c771*/
  while ( 1 ) /*0x10024c775*/
  {
    v15 = v10 & v7; /*0x10024c775*/
    v16 = _mm_loadu_si128((const __m128i *)(v9 + v15)); /*0x10024c778*/
    v17 = _mm_cmpeq_epi8(v16, v11); /*0x10024c781*/
    _R14D = _mm_movemask_epi8(v17); /*0x10024c785*/
    if ( _R14D ) /*0x10024c78d*/
      break; /*0x10024c78d*/
LABEL_7:
    _RCX = (unsigned int)_mm_movemask_epi8(_mm_cmpeq_epi8(v16, v14)); /*0x10024c850*/
    v4 = v53; /*0x10024c85a*/
    a3 = v54; /*0x10024c861*/
    if ( (_DWORD)_RCX ) /*0x10024c865*/
      goto LABEL_9; /*0x10024c865*/
    v7 = v15 + v13 + 16; /*0x10024c867*/
    v13 += 16; /*0x10024c86c*/
  }
  v64 = a1; /*0x10024c793*/
  v44 = v5; /*0x10024c797*/
  v45 = v15; /*0x10024c79e*/
  v40 = v11; /*0x10024c7a5*/
  v46 = v13; /*0x10024c7ad*/
  v41 = v16; /*0x10024c7b4*/
  while ( 1 ) /*0x10024c7bc*/
  {
    __asm { tzcnt ecx, r14d } /*0x10024c7bc*/
    v19 = -(__int64)(v10 & (v15 + _RCX)); /*0x10024c7c7*/
    v20 = 9 * v19; /*0x10024c7ca*/
    if ( (unsigned __int8)_$LT$Q$u20$as$u20$hashbrown..Equivalent$LT$K$GT$$GT$::equivalent::ha3571dd94d778100( /*0x10024c7e3*/
                            v54,
                            v53,
                            v12 + 72 * v19,
                            *(double *)v17.i64,
                            *(double *)v11.i64,
                            *(double *)v14.i64) )
      break; /*0x10024c7e3*/
    v21 = _R14D - 1; /*0x10024c7f0*/
    LOWORD(v21) = _R14D & (_R14D - 1); /*0x10024c7f4*/
    v22 = (_WORD)v21 == 0; /*0x10024c7f4*/
    _R14D = v21; /*0x10024c7f8*/
    v15 = v45; /*0x10024c7fb*/
    HIDWORD(_RCX) = HIDWORD(v64); /*0x10024c802*/
    v5 = v44; /*0x10024c810*/
    a1 = v64; /*0x10024c81a*/
    v11 = _mm_load_si128(&v40); /*0x10024c81d*/
    v13 = v46; /*0x10024c82b*/
    v14 = (__m128i)-1LL; /*0x10024c832*/
    v16 = _mm_load_si128(&v41); /*0x10024c836*/
    if ( v22 ) /*0x10024c83e*/
      goto LABEL_7; /*0x10024c83e*/
  }
  v24 = v9 + 8 * v20; /*0x10024c8ad*/
  v25 = (*(_QWORD *)(v24 - 48) - 0x7FFFFFFFFFFFFFFFLL) & (*(__int64 *)(v24 - 48) >> 63); /*0x10024c8c7*/
  if ( v25 ) /*0x10024c8ca*/
  {
    if ( v25 == 1 ) /*0x10024c8d4*/
    {
      result = (unsigned __int64)v64; /*0x10024c8e7*/
      *v64 = 0x8000000000000000LL; /*0x10024c8eb*/
    }
    else
    {
      v39 = v64; /*0x10024cbcb*/
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v64 + 1, v24 - 40); /*0x10024cbd6*/
      *v39 = 0x8000000000000001LL; /*0x10024cbe5*/
      return 0x8000000000000001LL; /*0x10024cbdb*/
    }
  }
  else
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&v48, v9 + 8 * v20 - 48); /*0x10024cb3b*/
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(v47, v24 - 24); /*0x10024cb4e*/
    result = v50; /*0x10024cb53*/
    v42[2] = v50; /*0x10024cb5a*/
    v34 = v48; /*0x10024cb61*/
    v35 = v49; /*0x10024cb68*/
    v42[1] = v49; /*0x10024cb6f*/
    v42[0] = v48; /*0x10024cb76*/
    v36 = v47[0]; /*0x10024cb7d*/
    v37 = v47[1]; /*0x10024cb84*/
    v42[3] = v47[0]; /*0x10024cb8b*/
    v42[4] = v47[1]; /*0x10024cb92*/
    v42[5] = v47[2]; /*0x10024cba0*/
    v38 = (__int64 *)v64; /*0x10024cba7*/
    v64[5] = v47[2]; /*0x10024cbab*/
    v38[4] = v37; /*0x10024cbaf*/
    v38[3] = v36; /*0x10024cbb3*/
    v38[2] = result; /*0x10024cbb7*/
    v38[1] = (__int64)v35; /*0x10024cbbb*/
    *v38 = v34; /*0x10024cbbf*/
  }
  return result; /*0x10024cc4f*/
}