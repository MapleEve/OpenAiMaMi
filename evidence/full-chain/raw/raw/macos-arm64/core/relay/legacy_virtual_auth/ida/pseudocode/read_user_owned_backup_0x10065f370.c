// __ZN13codexmate_lib4core5relay19legacy_virtual_auth22read_user_owned_backup @ 0x10065f370 | 基线 same-set
double __fastcall codexmate_lib::core::relay::legacy_virtual_auth::read_user_owned_backup::h095b77a961713878(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // r14
  _QWORD **v4; // r15
  __int64 v5; // r12
  _QWORD *v6; // r13
  _QWORD **v7; // r14
  __int64 v8; // r15
  __int64 v9; // rsi
  __m128i v10; // xmm0
  __int64 (__fastcall *v11)(_QWORD, _QWORD); // r12
  _QWORD *v12; // r12
  __int64 v13; // rsi
  __int64 v14; // rsi
  void *v15; // rax
  _QWORD **v16; // rax
  __int64 (__fastcall *v17)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // rcx
  __int64 v19; // [rsp+8h] [rbp-208h] BYREF
  _QWORD *v20; // [rsp+10h] [rbp-200h]
  _QWORD **v21; // [rsp+18h] [rbp-1F8h]
  __int64 v22; // [rsp+20h] [rbp-1F0h]
  const __m128i *v23; // [rsp+28h] [rbp-1E8h]
  unsigned __int64 v24; // [rsp+30h] [rbp-1E0h]
  __int64 v25; // [rsp+38h] [rbp-1D8h]
  __int64 v26; // [rsp+40h] [rbp-1D0h]
  __int64 v27; // [rsp+48h] [rbp-1C8h]
  __int64 v28; // [rsp+50h] [rbp-1C0h]
  __int64 v29; // [rsp+58h] [rbp-1B8h]
  __int64 v30; // [rsp+60h] [rbp-1B0h]
  __int64 v31; // [rsp+68h] [rbp-1A8h]
  _BYTE v32[72]; // [rsp+70h] [rbp-1A0h] BYREF
  __int64 v33; // [rsp+B8h] [rbp-158h] BYREF
  _QWORD **v34; // [rsp+C0h] [rbp-150h]
  __int64 (__fastcall *v35)(_QWORD, _QWORD); // [rsp+C8h] [rbp-148h]
  __int64 v36; // [rsp+D0h] [rbp-140h]
  const __m128i *v37; // [rsp+D8h] [rbp-138h]
  unsigned __int64 v38; // [rsp+E0h] [rbp-130h]
  __int64 v39; // [rsp+E8h] [rbp-128h]
  __int64 v40; // [rsp+F0h] [rbp-120h]
  __int64 v41; // [rsp+F8h] [rbp-118h]
  __int64 v42; // [rsp+100h] [rbp-110h]
  __int64 v43; // [rsp+108h] [rbp-108h]
  __int64 v44; // [rsp+110h] [rbp-100h]
  __int64 v45; // [rsp+118h] [rbp-F8h]
  _BYTE v46[72]; // [rsp+120h] [rbp-F0h] BYREF
  _QWORD **v47; // [rsp+168h] [rbp-A8h]
  __int64 (__fastcall *v48)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+170h] [rbp-A0h]
  __int64 v49; // [rsp+178h] [rbp-98h]
  _QWORD **v50; // [rsp+180h] [rbp-90h]
  __int64 v51; // [rsp+188h] [rbp-88h]
  const __m128i *v52; // [rsp+190h] [rbp-80h]
  _QWORD ***v53; // [rsp+198h] [rbp-78h] BYREF
  __int64 (__fastcall *v54)(_QWORD, _QWORD); // [rsp+1A0h] [rbp-70h]
  __int64 v55; // [rsp+1A8h] [rbp-68h]
  __int64 v56; // [rsp+1B0h] [rbp-60h]
  char *v57; // [rsp+1B8h] [rbp-58h]
  _QWORD *v58; // [rsp+1C0h] [rbp-50h] BYREF
  __int64 v59; // [rsp+1C8h] [rbp-48h]
  _QWORD **v60; // [rsp+1D0h] [rbp-40h] BYREF
  __int64 (__fastcall *v61)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD); // [rsp+1D8h] [rbp-38h]
  __int64 v62; // [rsp+1E0h] [rbp-30h]

  std::fs::read::inner::h6a30c15c40add28b(&v33, a2, a3); /*0x10065f38e*/
  v3 = v33; /*0x10065f393*/
  v4 = v34; /*0x10065f39a*/
  if ( __OFSUB__(-v33, 1) ) /*0x10065f3a4*/
  {
    v60 = v34; /*0x10065f3ad*/
    v53 = &v60; /*0x10065f3b5*/
    v54 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10065f3c0*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v19, &unk_1017C2BEB, &v53); /*0x10065f3d6*/
    v5 = v19; /*0x10065f3db*/
    v6 = v20; /*0x10065f3e2*/
    v7 = v21; /*0x10065f3e9*/
    if ( ((unsigned __int8)v60 & 3) == 1 ) /*0x10065f3fc*/
    {
      v57 = (char *)v60 - 1; /*0x10065f402*/
      v59 = *(__int64 *)((char *)v60 - 1); /*0x10065f40a*/
      v8 = *(__int64 *)((char *)v60 + 7); /*0x10065f40e*/
      if ( *(_QWORD *)v8 ) /*0x10065f412*/
        (*(void (__fastcall **)(__int64))v8)(v59); /*0x10065f41e*/
      v9 = *(_QWORD *)(v8 + 8); /*0x10065f424*/
      if ( v9 ) /*0x10065f42b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, v9, *(_QWORD *)(v8 + 16)); /*0x10065f431*/
      *(double *)v10.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v57, 24, 8); /*0x10065f444*/
    }
    a1[1] = v5; /*0x10065f449*/
    a1[2] = v6; /*0x10065f44d*/
    a1[3] = v7; /*0x10065f451*/
    *a1 = 10; /*0x10065f455*/
    return *(double *)v10.i64; /*0x10065f45c*/
  }
  v11 = v35; /*0x10065f461*/
  v53 = (_QWORD ***)v34; /*0x10065f468*/
  v54 = v35; /*0x10065f46c*/
  v55 = 0; /*0x10065f470*/
  v56 = 0; /*0x10065f478*/
  serde_json::de::from_trait::hee93ab9047d5d7fd(&v19, &v53); /*0x10065f48b*/
  if ( v19 == 0x8000000000000001LL ) /*0x10065f4a8*/
  {
    v58 = v20; /*0x10065f4b5*/
    v60 = &v58; /*0x10065f4bd*/
    v61 = _$LT$serde_json..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::hc7b53c91fb83d10d; /*0x10065f4c8*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v53, &unk_1017C2BB3, &v60); /*0x10065f4db*/
    v62 = v55; /*0x10065f4e4*/
    v61 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD))v54; /*0x10065f4f0*/
    v60 = v53; /*0x10065f4f4*/
    v12 = v58; /*0x10065f4f8*/
    if ( *v58 == 1 ) /*0x10065f504*/
    {
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(v58 + 1); /*0x10065f786*/
    }
    else if ( !*v58 ) /*0x10065f4fc*/
    {
      v13 = v58[2]; /*0x10065f513*/
      if ( v13 ) /*0x10065f51b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58[1], v13, 1); /*0x10065f52b*/
    }
    *(double *)v10.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, 40, 8); /*0x10065f798*/
    v16 = v60; /*0x10065f79d*/
    v17 = v61; /*0x10065f7a1*/
    v50 = v60; /*0x10065f7a5*/
    v49 = v62; /*0x10065f7b0*/
    v48 = v61; /*0x10065f7b7*/
    v47 = v60; /*0x10065f7be*/
    a1[3] = v62; /*0x10065f7c5*/
    a1[2] = v17; /*0x10065f7c9*/
    a1[1] = v16; /*0x10065f7cd*/
    *a1 = 10; /*0x10065f7d1*/
    if ( v3 ) /*0x10065f7db*/
      goto LABEL_26; /*0x10065f7db*/
  }
  else
  {
    v50 = v21; /*0x10065f543*/
    v51 = v22; /*0x10065f551*/
    v52 = v23; /*0x10065f55f*/
    v38 = v24; /*0x10065f56a*/
    v39 = v25; /*0x10065f578*/
    v40 = v26; /*0x10065f586*/
    v41 = v27; /*0x10065f594*/
    v42 = v28; /*0x10065f5a2*/
    v43 = v29; /*0x10065f5b0*/
    v44 = v30; /*0x10065f5be*/
    v45 = v31; /*0x10065f5cc*/
    qmemcpy(v46, v32, sizeof(v46)); /*0x10065f5e6*/
    v14 = v22; /*0x10065f5f0*/
    v47 = v21; /*0x10065f5f7*/
    v35 = (__int64 (__fastcall *)(_QWORD, _QWORD))v21; /*0x10065f602*/
    v36 = v22; /*0x10065f609*/
    v37 = v23; /*0x10065f610*/
    v33 = v19; /*0x10065f617*/
    v34 = (_QWORD **)v20; /*0x10065f61e*/
    if ( !(unsigned __int8)codexmate_lib::core::auth::is_aimami_managed_virtual_auth::h4d4a884f31f32b45(&v33) ) /*0x10065f62c*/
    {
      if ( v36 == 0x8000000000000000LL /*0x10065f736*/
        || v38 < 0x17
        || (v10 = _mm_or_si128(
                    _mm_xor_si128(_mm_loadu_si128(v37), (__m128i)xmmword_1015DCAC0),
                    _mm_xor_si128(
                      _mm_loadu_si128((const __m128i *)((char *)&v37->u32[1] + 3)),
                      (__m128i)xmmword_1015DCAB0)),
            !_mm_testz_si128(v10, v10)) )
      {
        if ( (unsigned __int8)codexmate_lib::core::auth::is_switchable_oauth_auth::h344abcad54fe8a18(&v33) /*0x10065f753*/
          || (unsigned __int8)codexmate_lib::core::auth::is_api_key_auth::h123048d1ccd9695c(&v33) )
        {
          a1[1] = v3; /*0x10065f760*/
          a1[2] = v4; /*0x10065f764*/
          a1[3] = v11; /*0x10065f768*/
          *a1 = 11; /*0x10065f76c*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(&v33); /*0x10065f77a*/
          return *(double *)v10.i64; /*0x10065f77f*/
        }
      }
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v33, v14); /*0x10065f639*/
    v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(63, 1); /*0x10065f648*/
    if ( !v15 ) /*0x10065f650*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 63); /*0x10065f809*/
    qmemcpy(v15, "legacy auth backup is not user-owned auth; backup was preserved", 63); /*0x10065f6c2*/
    *a1 = 10; /*0x10065f6c5*/
    a1[1] = 63; /*0x10065f6cc*/
    a1[2] = v15; /*0x10065f6d4*/
    a1[3] = 63; /*0x10065f6d8*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..auth..AuthFile$GT$::he7920268f5ff4e67(&v33); /*0x10065f6e7*/
    if ( v3 ) /*0x10065f6ef*/
LABEL_26:
      *(double *)v10.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v3, 1); /*0x10065f7dd*/
  }
  return *(double *)v10.i64; /*0x10065f7ed*/
}