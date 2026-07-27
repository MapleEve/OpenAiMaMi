// __ZN13codexmate_lib4core12debug_bundle21extra_headers_summary @ 0x1004d6840 | 基线 same-set
_DWORD *__fastcall codexmate_lib::core::debug_bundle::extra_headers_summary::h2d075dd13e550ac7(
        signed __int64 *a1,
        char *a2,
        __int64 a3)
{
  __int64 v5; // rsi
  _DWORD *v6; // rax
  signed __int64 v7; // rdx
  __int64 v8; // r15
  signed __int64 v9; // r14
  _DWORD *result; // rax
  __int64 v11; // r13
  __m128i v12; // xmm0
  __m128i v13; // xmm0
  __int64 v14; // r14
  void *v15; // rax
  __int64 v16; // r12
  __int64 v17; // r13
  __int64 v18; // r15
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  void *v23; // rax
  __int64 v24; // rax
  __int64 v25; // r12
  _QWORD v26[9]; // [rsp+8h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+50h] [rbp-90h] BYREF
  signed __int64 v28; // [rsp+58h] [rbp-88h]
  __int64 v29; // [rsp+60h] [rbp-80h]
  __int64 v30; // [rsp+68h] [rbp-78h]
  __int64 v31; // [rsp+70h] [rbp-70h]
  signed __int64 v32; // [rsp+78h] [rbp-68h]
  __int64 v33; // [rsp+80h] [rbp-60h]
  __int64 v34; // [rsp+88h] [rbp-58h]
  __int64 v35; // [rsp+90h] [rbp-50h]
  _BYTE v36[8]; // [rsp+98h] [rbp-48h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-40h] BYREF
  __int64 v38; // [rsp+A8h] [rbp-38h]
  __int64 v39; // [rsp+B0h] [rbp-30h]

  v5 = a3; /*0x1004d685a*/
  v6 = (_DWORD *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, a3); /*0x1004d685d*/
  v8 = (__int64)v6; /*0x1004d6862*/
  v9 = v7; /*0x1004d6865*/
  if ( v7 == 4 )
  {
    if ( *v6 == 1701736302 ) /*0x1004d68b5*/
      goto LABEL_31; /*0x1004d68b5*/
  }
  else
  {
    if ( !v7 ) /*0x1004d6871*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, v5); /*0x1004d6873*/
      result = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x1004d6882*/
      if ( !result ) /*0x1004d688a*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x1004d6b4a*/
      *result = 1701736302; /*0x1004d6890*/
      *a1 = 4; /*0x1004d6896*/
      a1[1] = (signed __int64)result; /*0x1004d689d*/
      a1[2] = 4; /*0x1004d68a1*/
      return result; /*0x1004d68a9*/
    }
    a2 = " header(s): ";
    v5 = 12; /*0x1004d68c7*/
    if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                            " header(s): ",
                            0xCu,
                            v6) )
    {
      if ( v9 < 0 ) /*0x1004d68de*/
      {
        v11 = 0; /*0x1004d68e4*/
        goto LABEL_10; /*0x1004d68e4*/
      }
      if ( !v9 ) /*0x1004d6b5e*/
      {
        v25 = 1; /*0x1004d6baf*/
        goto LABEL_33; /*0x1004d6bb5*/
      }
LABEL_31:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, v5); /*0x1004d6b60*/
      v11 = 1; /*0x1004d6b65*/
      v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x1004d6b73*/
      if ( !v24 ) /*0x1004d6b7b*/
LABEL_10:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v11, v9); /*0x1004d68e7*/
      v25 = v24; /*0x1004d6b81*/
LABEL_33:
      result = memcpy((void *)v25, (const void *)v8, v9); /*0x1004d6b84*/
      *a1 = v9; /*0x1004d6b92*/
      a1[1] = v25; /*0x1004d6b95*/
      a1[2] = v9; /*0x1004d6b99*/
      return result; /*0x1004d6bae*/
    }
    if ( v9 == 19 ) /*0x1004d68f6*/
    {
      v13 = _mm_or_si128( /*0x1004d6944*/
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)v8), (__m128i)xmmword_1015FBA10),
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v8 + 3)), (__m128i)xmmword_1015FBA00));
      if ( _mm_testz_si128(v13, v13) ) /*0x1004d694d*/
        goto LABEL_31; /*0x1004d694d*/
    }
    else if ( v9 == 20 ) /*0x1004d68fc*/
    {
      v12 = _mm_or_si128( /*0x1004d6919*/
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)v8), (__m128i)xmmword_1015FBA30),
              _mm_xor_si128(_mm_cvtsi32_si128(*(_DWORD *)(v8 + 16)), (__m128i)xmmword_1015FBA20));
      if ( _mm_testz_si128(v12, v12) ) /*0x1004d691d*/
        goto LABEL_31; /*0x1004d6922*/
    }
  }
  v27 = v8; /*0x1004d6953*/
  v28 = v9; /*0x1004d695a*/
  v29 = 0; /*0x1004d6961*/
  v30 = 0; /*0x1004d6969*/
  v31 = v8; /*0x1004d6971*/
  v32 = v9; /*0x1004d6975*/
  serde_json::de::from_trait::h51e180b4bb6af5e0(v36, &v27); /*0x1004d6984*/
  if ( v36[0] != 5 ) /*0x1004d6992*/
  {
    if ( v36[0] == 6 ) /*0x1004d6998*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v36, &v27); /*0x1004d699e*/
      v14 = 19; /*0x1004d69a3*/
      v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(19, 1); /*0x1004d69b3*/
      if ( v15 ) /*0x1004d69bb*/
      {
        qmemcpy(v15, "invalid header json", 19); /*0x1004d69d9*/
        *a1 = 19; /*0x1004d69e3*/
        a1[1] = (signed __int64)v15; /*0x1004d69ea*/
        a1[2] = 19; /*0x1004d69ee*/
        return (_DWORD *)core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h96ca76a5facc34fb(&v37); /*0x1004d69ff*/
      }
    }
    else
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v36, &v27); /*0x1004d6abf*/
      v14 = 20; /*0x1004d6ac4*/
      v23 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(20, 1); /*0x1004d6ad4*/
      if ( v23 ) /*0x1004d6adc*/
      {
        qmemcpy(v23, "invalid header shape", 20); /*0x1004d6af6*/
        *a1 = 20; /*0x1004d6b00*/
        a1[1] = (signed __int64)v23; /*0x1004d6b07*/
        a1[2] = 20; /*0x1004d6b0b*/
        return (_DWORD *)core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v36); /*0x1004d6b1c*/
      }
    }
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v14); /*0x1004d6b57*/
  }
  v16 = v37; /*0x1004d6a08*/
  v17 = v38; /*0x1004d6a0c*/
  v18 = v39; /*0x1004d6a10*/
  v19 = v39; /*0x1004d6a1c*/
  if ( !v37 ) /*0x1004d6a1f*/
    v19 = 0; /*0x1004d6a1f*/
  v26[0] = v37 != 0; /*0x1004d6a23*/
  v26[1] = 0; /*0x1004d6a2a*/
  v26[2] = v37; /*0x1004d6a35*/
  v26[3] = v38; /*0x1004d6a3c*/
  v26[4] = v26[0]; /*0x1004d6a43*/
  v26[5] = 0; /*0x1004d6a4a*/
  v26[6] = v37; /*0x1004d6a55*/
  v26[7] = v38; /*0x1004d6a5c*/
  v26[8] = v19; /*0x1004d6a63*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hfe16504aedc8558f( /*0x1004d6a78*/
    &v27,
    v26);
  codexmate_lib::core::debug_bundle::header_names_summary::h4ba000d06d225391(a1, &v27, v20, v21); /*0x1004d6a87*/
  if ( v16 ) /*0x1004d6a8f*/
  {
    v28 = 0; /*0x1004d6a95*/
    v29 = v16; /*0x1004d6aa0*/
    v30 = v17; /*0x1004d6aa4*/
    v32 = 0; /*0x1004d6aa8*/
    v33 = v16; /*0x1004d6ab0*/
    v34 = v17; /*0x1004d6ab4*/
    v22 = 1; /*0x1004d6ab8*/
  }
  else
  {
    v22 = 0; /*0x1004d6b1e*/
    v18 = 0; /*0x1004d6b20*/
  }
  v27 = v22; /*0x1004d6b23*/
  v31 = v22; /*0x1004d6b2a*/
  v35 = v18; /*0x1004d6b2e*/
  return (_DWORD *)core::ptr::drop_in_place$LT$alloc..collections..btree..map..IntoIter$LT$alloc..string..String$C$serde_json..value..Value$GT$$GT$::haaf504ab9dab7670(&v27); /*0x1004d6b9d*/
}