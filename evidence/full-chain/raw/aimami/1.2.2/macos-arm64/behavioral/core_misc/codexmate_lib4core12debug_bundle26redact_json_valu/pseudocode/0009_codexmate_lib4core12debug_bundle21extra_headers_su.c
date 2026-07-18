// mac 1.2.2 NEW codexmate_lib4core12debug_bundle26redact_json_valu 0x1003fce70 d=1
_DWORD *__fastcall codexmate_lib::core::debug_bundle::extra_headers_summary::h72b32096117a339a(
        size_t *a1,
        unsigned __int8 *a2,
        __int64 a3)
{
  char *v3; // rax
  size_t v4; // rdx
  __int64 v5; // r15
  signed __int64 v6; // r14
  _DWORD *result; // rax
  __int64 v8; // r13
  __m128i v9; // xmm0
  __m128i v10; // xmm0
  void *v11; // rax
  __int64 *v12; // rdx
  void *v13; // rax
  __int64 v14; // rax
  __int64 v15; // r12
  __int64 v16[9]; // [rsp+0h] [rbp-C0h] BYREF
  __int64 v17[6]; // [rsp+48h] [rbp-78h] BYREF
  __int64 v18; // [rsp+78h] [rbp-48h] BYREF
  __int64 *v19; // [rsp+80h] [rbp-40h] BYREF
  __int64 v20; // [rsp+88h] [rbp-38h]
  __int64 *v21; // [rsp+90h] [rbp-30h]

  v3 = (char *)core::str::_$LT$impl$u20$str$GT$::trim_matches::h2df042dbfb4c6e14(a2, a3); /*0x1003fce8d*/
  v5 = (__int64)v3; /*0x1003fce92*/
  v6 = v4; /*0x1003fce95*/
  if ( v4 == 4 )
  {
    if ( *(_DWORD *)v3 == 1701736302 ) /*0x1003fcee5*/
      goto LABEL_28; /*0x1003fcee5*/
  }
  else
  {
    if ( !v4 ) /*0x1003fcea1*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003fcea3*/
      result = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4u, 1u); /*0x1003fceb2*/
      if ( !result ) /*0x1003fceba*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1003fd121*/
      *result = 1701736302; /*0x1003fcec0*/
      *a1 = 4; /*0x1003fcec6*/
      a1[1] = (size_t)result; /*0x1003fcecd*/
      a1[2] = 4; /*0x1003fced1*/
      return result; /*0x1003fced9*/
    }
    if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                            (unsigned __int8 *)" header(s): ",
                            0xCu,
                            v3,
                            v4) )
    {
      if ( v6 < 0 ) /*0x1003fcf0e*/
      {
        v8 = 0; /*0x1003fcf14*/
        goto LABEL_10; /*0x1003fcf14*/
      }
      if ( !v6 ) /*0x1003fd135*/
      {
        v15 = 1; /*0x1003fd186*/
        goto LABEL_30; /*0x1003fd18c*/
      }
LABEL_28:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003fd137*/
      v8 = 1; /*0x1003fd13c*/
      v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1u); /*0x1003fd14a*/
      if ( !v14 ) /*0x1003fd152*/
LABEL_10:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8); /*0x1003fcf17*/
      v15 = v14; /*0x1003fd158*/
LABEL_30:
      result = memcpy((void *)v15, (const void *)v5, v6); /*0x1003fd15b*/
      *a1 = v6; /*0x1003fd169*/
      a1[1] = v15; /*0x1003fd16c*/
      a1[2] = v6; /*0x1003fd170*/
      return result; /*0x1003fd185*/
    }
    if ( v6 == 19 ) /*0x1003fcf26*/
    {
      v10 = _mm_or_si128( /*0x1003fcf74*/
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)v5), (__m128i)xmmword_10151B1E0),
              _mm_xor_si128(_mm_loadu_si128((const __m128i *)(v5 + 3)), (__m128i)xmmword_10151B1D0));
      if ( _mm_testz_si128(v10, v10) ) /*0x1003fcf7d*/
        goto LABEL_28; /*0x1003fcf7d*/
    }
    else if ( v6 == 20 ) /*0x1003fcf2c*/
    {
      v9 = _mm_or_si128( /*0x1003fcf49*/
             _mm_xor_si128(_mm_loadu_si128((const __m128i *)v5), (__m128i)xmmword_10151B200),
             _mm_xor_si128(_mm_cvtsi32_si128(*(_DWORD *)(v5 + 16)), (__m128i)xmmword_10151B1F0));
      if ( _mm_testz_si128(v9, v9) ) /*0x1003fcf4d*/
        goto LABEL_28; /*0x1003fcf52*/
    }
  }
  v17[0] = v5; /*0x1003fcf83*/
  v17[1] = v6; /*0x1003fcf87*/
  v17[2] = 0; /*0x1003fcf8b*/
  v17[3] = 0; /*0x1003fcf93*/
  v17[4] = v5; /*0x1003fcf9b*/
  v17[5] = v6; /*0x1003fcf9f*/
  serde_json::de::from_trait::hd7f835a315d0fab8(&v18, v17); /*0x1003fcfab*/
  if ( (unsigned __int8)v18 != 5 ) /*0x1003fcfb9*/
  {
    if ( (unsigned __int8)v18 == 6 ) /*0x1003fcfbf*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003fcfc5*/
      v11 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x13u, 1u); /*0x1003fcfda*/
      if ( v11 ) /*0x1003fcfe2*/
      {
        qmemcpy(v11, "invalid header json", 19); /*0x1003fd000*/
        *a1 = 19; /*0x1003fd00a*/
        a1[1] = (size_t)v11; /*0x1003fd011*/
        a1[2] = 19; /*0x1003fd015*/
        return (_DWORD *)core::ptr::drop_in_place$LT$serde_json..error..Error$GT$::h9ceea406a49948b7(&v19); /*0x1003fd026*/
      }
    }
    else
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1003fd0b8*/
      v13 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x14u, 1u); /*0x1003fd0cd*/
      if ( v13 ) /*0x1003fd0d5*/
      {
        qmemcpy(v13, "invalid header shape", 20); /*0x1003fd0ef*/
        *a1 = 20; /*0x1003fd0f9*/
        a1[1] = (size_t)v13; /*0x1003fd100*/
        a1[2] = 20; /*0x1003fd104*/
        return (_DWORD *)core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h014dd4b9f9885ffc(&v18); /*0x1003fd115*/
      }
    }
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x1003fd12e*/
  }
  v12 = v19; /*0x1003fd033*/
  if ( v19 ) /*0x1003fd039*/
    v12 = v21; /*0x1003fd03b*/
  v16[0] = v19 != nullptr; /*0x1003fd04b*/
  v16[1] = 0; /*0x1003fd052*/
  v16[2] = (__int64)v19; /*0x1003fd05d*/
  v16[3] = v20; /*0x1003fd064*/
  v16[4] = v16[0]; /*0x1003fd06b*/
  v16[5] = 0; /*0x1003fd072*/
  v16[6] = (__int64)v19; /*0x1003fd07d*/
  v16[7] = v20; /*0x1003fd084*/
  v16[8] = (__int64)v12; /*0x1003fd08b*/
  _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::ha03c0a6f20cc1cef( /*0x1003fd09a*/
    (unsigned __int64 *)v17,
    v16);
  codexmate_lib::core::debug_bundle::header_names_summary::h278e1053fcb29704(a1, v17); /*0x1003fd0a6*/
  return (_DWORD *)_$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$C$A$GT$$u20$as$u20$core..ops..drop..Drop$GT$::drop::h91ff500dbdf8a806(&v19); /*0x1003fd174*/
}