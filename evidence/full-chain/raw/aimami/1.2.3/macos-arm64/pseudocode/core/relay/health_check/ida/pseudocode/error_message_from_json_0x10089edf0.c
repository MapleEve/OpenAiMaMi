// __ZN13codexmate_lib4core5relay12health_check23error_message_from_json @ 0x10089edf0 | 基线 same-set
size_t *__fastcall codexmate_lib::core::relay::health_check::error_message_from_json::hb4424646a1d8d349(
        size_t *a1,
        __m256i *a2,
        __int64 (__fastcall **a3)())
{
  int v4; // eax
  int v6; // ecx
  int v7; // r8d
  int v8; // edi
  _BYTE *v9; // rax
  _BYTE *v10; // r13
  __int64 v11; // rax
  signed __int64 v12; // rcx
  __int64 v13; // r15
  char *v14; // rdi
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // r14
  __int64 v19; // r15
  signed __int64 v20; // rax
  __int64 v21; // r15
  const void *v22; // r14
  __int64 v23; // rax
  const void *v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rdx
  size_t v28; // r12
  __int64 v29; // r13
  void *v30; // rax
  size_t v31; // r14
  const void *v32; // r15
  void *v33; // rax
  __m256i v34; // [rsp+0h] [rbp-B0h] BYREF
  __m256i *v35; // [rsp+20h] [rbp-90h] BYREF
  __int64 (__fastcall **v36)(); // [rsp+28h] [rbp-88h]
  void *__dst; // [rsp+30h] [rbp-80h]
  __int64 v38; // [rsp+38h] [rbp-78h]
  __m256i *v39; // [rsp+40h] [rbp-70h]
  __int64 (__fastcall **v40)(); // [rsp+48h] [rbp-68h]
  __m256i v41; // [rsp+50h] [rbp-60h] BYREF
  void *__src; // [rsp+70h] [rbp-40h]
  char v43; // [rsp+7Fh] [rbp-31h] BYREF
  size_t __n; // [rsp+80h] [rbp-30h]

  if ( !a3 ) /*0x10089ee0a*/
    goto LABEL_6; /*0x10089ee0a*/
  v4 = a2->u8[0]; /*0x10089ee0c*/
  if ( (v4 & 0x80u) != 0 ) /*0x10089ee11*/
  {
    v6 = v4 & 0x1F; /*0x10089ee89*/
    v7 = a2->i8[1] & 0x3F; /*0x10089ee91*/
    if ( (unsigned __int8)v4 <= 0xDFu ) /*0x10089ee97*/
    {
      if ( (v7 | (v6 << 6) | 0x20) != 0x7B ) /*0x10089ef9d*/
        goto LABEL_6; /*0x10089ef9d*/
    }
    else
    {
      v8 = (v7 << 6) | a2->i8[2] & 0x3F; /*0x10089eea8*/
      if ( (unsigned __int8)v4 < 0xF0u ) /*0x10089eead*/
      {
        if ( ((v6 << 12) | v8 | 0x20) != 0x7B ) /*0x10089efb5*/
          goto LABEL_6; /*0x10089efb5*/
      }
      else if ( (((v4 & 7) << 18) | (v8 << 6) | a2->i8[3] & 0x3F | 0x20) != 0x7B ) /*0x10089eecd*/
      {
        goto LABEL_6; /*0x10089eecd*/
      }
    }
LABEL_4:
    v35 = a2; /*0x10089ee1b*/
    v36 = a3; /*0x10089ee22*/
    __dst = nullptr; /*0x10089ee29*/
    v38 = 0; /*0x10089ee31*/
    v39 = a2; /*0x10089ee39*/
    v40 = a3; /*0x10089ee3d*/
    serde_json::de::from_trait::h51e180b4bb6af5e0(&v41, &v35); /*0x10089ee4f*/
    if ( v41.i8[0] == 6 ) /*0x10089ee5a*/
    {
      core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h6e2339d6452312e0(&v41); /*0x10089ee60*/
      goto LABEL_6; /*0x10089ee60*/
    }
    v34 = v41; /*0x10089eed9*/
    v9 = (_BYTE *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10089ef1a*/
                    "error",
                    5,
                    &v34);
    v10 = v9; /*0x10089ef1f*/
    if ( !v9 || !*v9 ) /*0x10089ef27*/
    {
      *a1 = 0x8000000000000000LL; /*0x10089ef7b*/
LABEL_20:
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v34); /*0x10089ef7e*/
      return a1; /*0x10089ef8a*/
    }
    v11 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("message", 7, v9); /*0x10089ef3d*/
    if ( v11 && *(_BYTE *)v11 == 3 ) /*0x10089ef4a*/
    {
      v12 = *(_QWORD *)(v11 + 24); /*0x10089ef4c*/
      __n = v12; /*0x10089ef50*/
      if ( v12 < 0 ) /*0x10089ef57*/
      {
        v13 = 0; /*0x10089ef5d*/
        goto LABEL_18; /*0x10089ef5d*/
      }
      v22 = *(const void **)(v11 + 16); /*0x10089f0e1*/
      if ( v12 ) /*0x10089f0e5*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("message", 7); /*0x10089f0e7*/
        v13 = 1; /*0x10089f0ec*/
        v23 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x10089f0fb*/
        if ( !v23 ) /*0x10089f103*/
LABEL_18:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v13, __n); /*0x10089ef60*/
        goto LABEL_41; /*0x10089f103*/
      }
LABEL_42:
      v19 = 1; /*0x10089f137*/
      goto LABEL_43; /*0x10089f137*/
    }
    v14 = "error"; /*0x10089efc0*/
    v15 = 5; /*0x10089efc7*/
    v16 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("error", 5, v10); /*0x10089efcf*/
    if ( !v16 ) /*0x10089efd7*/
      goto LABEL_30; /*0x10089efd7*/
    v14 = "message"; /*0x10089efd9*/
    v15 = 7; /*0x10089efe0*/
    v17 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f("message", 7, v16); /*0x10089efe8*/
    if ( !v17 || *(_BYTE *)v17 != 3 ) /*0x10089eff5*/
      goto LABEL_30; /*0x10089eff5*/
    __src = *(void **)(v17 + 16); /*0x10089effb*/
    v18 = *(_QWORD *)(v17 + 24); /*0x10089efff*/
    alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v35, v18, 0, 1, 1); /*0x10089f01a*/
    __n = (size_t)v36; /*0x10089f026*/
    if ( (_DWORD)v35 == 1 ) /*0x10089f031*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(__n, __dst); /*0x10089f26c*/
    v19 = (__int64)__dst; /*0x10089f037*/
    v14 = (char *)__dst; /*0x10089f03b*/
    v15 = (__int64)__src; /*0x10089f03e*/
    memcpy(__dst, __src, v18); /*0x10089f045*/
    if ( __OFSUB__(-(__int64)__n, 1) ) /*0x10089f04e*/
    {
LABEL_30:
      if ( *v10 == 3 ) /*0x10089f05c*/
      {
        v20 = *((_QWORD *)v10 + 3); /*0x10089f05e*/
        __n = v20; /*0x10089f062*/
        if ( v20 >= 0 ) /*0x10089f069*/
        {
          v22 = *((const void **)v10 + 2); /*0x10089f10a*/
          if ( !v20 ) /*0x10089f10e*/
            goto LABEL_42; /*0x10089f10e*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v14, v15); /*0x10089f110*/
          v21 = 1; /*0x10089f115*/
          v23 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x10089f124*/
          if ( v23 ) /*0x10089f12c*/
          {
LABEL_41:
            v19 = v23; /*0x10089f132*/
LABEL_43:
            v24 = v22; /*0x10089f13d*/
            v18 = __n; /*0x10089f143*/
            memcpy((void *)v19, v24, __n); /*0x10089f14a*/
            goto LABEL_44; /*0x10089f14a*/
          }
        }
        else
        {
          v21 = 0; /*0x10089f06f*/
        }
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v21, __n); /*0x10089f079*/
      }
      v41.i64[0] = 0; /*0x10089f083*/
      *(__int128 *)((char *)v41.i128 + 8) = 1u; /*0x10089f08b*/
      __dst = (void *)1610612768; /*0x10089f09b*/
      v35 = &v41; /*0x10089f0a3*/
      v36 = &anon_10420c9971c21f44d230d15b39fb3fec_964; /*0x10089f0b1*/
      if ( (unsigned __int8)_$LT$serde_json..value..Value$u20$as$u20$core..fmt..Display$GT$::fmt::hb110daad55e1d5ce( /*0x10089f0c2*/
                              v10,
                              &v35) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10089f25d*/
          &anon_10420c9971c21f44d230d15b39fb3fec_965,
          55,
          &v43,
          &anon_10420c9971c21f44d230d15b39fb3fec_976,
          &anon_10420c9971c21f44d230d15b39fb3fec_967);
      __n = v41.i64[0]; /*0x10089f0d3*/
      v18 = v41.i64[2]; /*0x10089f0db*/
      v19 = v41.i64[1]; /*0x10089f0db*/
    }
LABEL_44:
    __src = (void *)v19; /*0x10089f14f*/
    v25 = v19; /*0x10089f153*/
    v26 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v19, v18); /*0x10089f159*/
    v28 = v27; /*0x10089f15e*/
    if ( v27 ) /*0x10089f164*/
    {
      if ( v27 < 0 ) /*0x10089f169*/
      {
        v29 = 0; /*0x10089f16b*/
        goto LABEL_47; /*0x10089f16b*/
      }
      v32 = (const void *)v26; /*0x10089f1df*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v25, v18); /*0x10089f1e2*/
      v29 = 1; /*0x10089f1e7*/
      v33 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v28, 1); /*0x10089f1f5*/
      if ( v33 ) /*0x10089f1fd*/
      {
        v31 = (size_t)v33; /*0x10089f203*/
        memcpy(v33, v32, v28); /*0x10089f20f*/
LABEL_52:
        *a1 = v28; /*0x10089f214*/
        a1[1] = v31; /*0x10089f217*/
        a1[2] = v28; /*0x10089f21b*/
        if ( __n ) /*0x10089f22a*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, __n, 1); /*0x10089f235*/
        goto LABEL_20; /*0x10089f23a*/
      }
    }
    else
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19, v18); /*0x10089f17e*/
      v28 = 31; /*0x10089f183*/
      v29 = 1; /*0x10089f189*/
      v30 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(31, 1); /*0x10089f199*/
      if ( v30 ) /*0x10089f1a1*/
      {
        v31 = (size_t)v30; /*0x10089f1a3*/
        qmemcpy(v30, "upstream returned error payload", 31); /*0x10089f1da*/
        goto LABEL_52; /*0x10089f1dd*/
      }
    }
LABEL_47:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v29, v28); /*0x10089f16e*/
  }
  if ( (v4 | 0x20) == 0x7B ) /*0x10089ee19*/
    goto LABEL_4; /*0x10089ee19*/
LABEL_6:
  *a1 = 0x8000000000000000LL; /*0x10089ee65*/
  return a1; /*0x10089ee75*/
}