// __ZN13codexmate_lib4core5voice10aliyun_asr21endpoint_for_protocol @ 0x1003370f0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::voice::aliyun_asr::endpoint_for_protocol::h28bd4e5f51579c02(
        _QWORD *a1,
        _QWORD *a2,
        char a3)
{
  __int64 v4; // r15
  __int64 v5; // r13
  __int64 v6; // rdi
  __int64 v7; // rax
  __int64 v8; // rdx
  void *v9; // r13
  signed __int64 v10; // rdx
  signed __int64 v11; // r14
  __int64 v12; // rbx
  __int64 v13; // rax
  _QWORD *v14; // r14
  size_t v15; // rbx
  __int64 v16; // r12
  char v17; // bl
  void *v18; // rax
  __int64 v19; // r15
  const void *v20; // r15
  void *v21; // rax
  void *v22; // r14
  _QWORD *v23; // rax
  void *v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 (__fastcall **v27)(); // rdx
  __int64 v28; // rax
  unsigned __int64 v29; // rdx
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r12
  __int64 v33; // r13
  int v34; // eax
  __int64 (__fastcall **v35)(); // rax
  _QWORD v37[2]; // [rsp+10h] [rbp-130h] BYREF
  _QWORD v38[2]; // [rsp+20h] [rbp-120h] BYREF
  __int64 v39; // [rsp+30h] [rbp-110h]
  __int64 v40; // [rsp+38h] [rbp-108h] BYREF
  __int64 (__fastcall **v41)(); // [rsp+40h] [rbp-100h]
  __int64 v42; // [rsp+48h] [rbp-F8h]
  __int64 v43; // [rsp+50h] [rbp-F0h]
  unsigned __int64 v44; // [rsp+58h] [rbp-E8h]
  __int64 v45; // [rsp+60h] [rbp-E0h]
  __int64 v46; // [rsp+68h] [rbp-D8h]
  __int64 v47; // [rsp+70h] [rbp-D0h]
  __int64 v48; // [rsp+78h] [rbp-C8h]
  __int64 v49; // [rsp+80h] [rbp-C0h]
  __int64 v50; // [rsp+88h] [rbp-B8h]
  __int64 v51; // [rsp+90h] [rbp-B0h] BYREF
  __int64 (__fastcall **v52)(); // [rsp+98h] [rbp-A8h]
  __int64 v53; // [rsp+A0h] [rbp-A0h]
  __int64 v54; // [rsp+A8h] [rbp-98h]
  unsigned __int64 v55; // [rsp+B0h] [rbp-90h]
  __int64 v56; // [rsp+B8h] [rbp-88h]
  __int64 v57; // [rsp+C0h] [rbp-80h]
  __int64 v58; // [rsp+C8h] [rbp-78h]
  __int64 v59; // [rsp+D0h] [rbp-70h]
  __int64 v60; // [rsp+D8h] [rbp-68h]
  __int64 v61; // [rsp+E0h] [rbp-60h]
  __int64 (__fastcall **v62)(); // [rsp+E8h] [rbp-58h] BYREF
  __int64 v63; // [rsp+F0h] [rbp-50h]
  __int64 v64; // [rsp+F8h] [rbp-48h]
  _QWORD *v65; // [rsp+100h] [rbp-40h]
  size_t __n; // [rsp+108h] [rbp-38h]
  char v67; // [rsp+117h] [rbp-29h] BYREF

  v65 = a1; /*0x10033710a*/
  v4 = a2[1]; /*0x10033710e*/
  v5 = a2[2]; /*0x100337112*/
  v6 = v4; /*0x100337116*/
  v7 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v4, v5); /*0x10033711c*/
  if ( v8 ) /*0x100337124*/
  {
    if ( a3 != 1 ) /*0x10033712a*/
    {
      v15 = v8; /*0x1003371e9*/
      if ( v8 >= 0 ) /*0x1003371ef*/
      {
        v20 = (const void *)v7; /*0x1003372b1*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v6, v5); /*0x1003372b4*/
        v16 = 1; /*0x1003372b9*/
        v21 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v15, 1); /*0x1003372c7*/
        if ( v21 ) /*0x1003372cf*/
        {
          v22 = v21; /*0x1003372d5*/
          memcpy(v21, v20, v15); /*0x1003372e1*/
          v23 = v65; /*0x1003372e6*/
          v65[1] = v15; /*0x1003372ea*/
          v23[2] = v22; /*0x1003372ee*/
          v14 = v23; /*0x1003372f2*/
          v23[3] = v15; /*0x1003372f5*/
          *v23 = 0; /*0x1003372f9*/
          return v14; /*0x100337300*/
        }
      }
      else
      {
        v16 = 0; /*0x1003371f5*/
      }
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v16, v15); /*0x1003371fe*/
    }
    v9 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v4, v5); /*0x10033713b*/
    v11 = v10; /*0x10033713e*/
    if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100337153*/
                            "/realtime",
                            9u,
                            v9) )
    {
      __n = v11; /*0x100337163*/
      if ( v11 < 0 ) /*0x100337167*/
      {
        v12 = 0; /*0x10033716d*/
        goto LABEL_6; /*0x10033716d*/
      }
      if ( v11 ) /*0x100337382*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("/realtime", 9); /*0x100337384*/
        v12 = 1; /*0x100337389*/
        v25 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v11, 1); /*0x100337396*/
        if ( !v25 ) /*0x10033739e*/
LABEL_6:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v12, __n); /*0x10033716f*/
        v19 = v25; /*0x1003373a4*/
      }
      else
      {
        v19 = 1; /*0x1003373a9*/
      }
      v14 = v65; /*0x1003373af*/
      memcpy((void *)v19, v9, __n); /*0x1003373bd*/
    }
    else
    {
      v17 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x10033721a*/
              "dashscope-intl.aliyuncs.com",
              0x1Bu,
              v9);
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("dashscope-intl.aliyuncs.com", 27); /*0x10033721c*/
      if ( v17 ) /*0x100337223*/
      {
        __n = 52; /*0x10033722e*/
        v18 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(52, 1); /*0x10033723c*/
        v14 = v65; /*0x100337244*/
        if ( !v18 ) /*0x100337248*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 52); /*0x10033776f*/
        v19 = (__int64)v18; /*0x10033724e*/
        qmemcpy(v18, "wss://dashscope-intl.aliyuncs.com/api-ws/v1/realtime", 52); /*0x1003372a1*/
      }
      else
      {
        __n = 47; /*0x10033730a*/
        v24 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(47, 1); /*0x100337318*/
        v14 = v65; /*0x100337320*/
        if ( !v24 ) /*0x100337324*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 47); /*0x10033777e*/
        v19 = (__int64)v24; /*0x10033732a*/
        qmemcpy(v24, "wss://dashscope.aliyuncs.com/api-ws/v1/realtime", 47); /*0x10033737d*/
      }
    }
    v44 = 0; /*0x1003373c2*/
    v40 = 0; /*0x1003373cd*/
    v42 = 0; /*0x1003373d8*/
    url::ParseOptions::parse::h7da66aa6bebaf5b6(&v51, &v40, v19, __n); /*0x1003373f8*/
    if ( __OFSUB__(-v51, 1) ) /*0x100337407*/
    {
      v67 = (char)v52; /*0x100337413*/
      v37[0] = &v67; /*0x10033741a*/
      v37[1] = _$LT$url..parser..ParseError$u20$as$u20$core..fmt..Display$GT$::fmt::h9b83982323eaffdf; /*0x100337428*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v40, &unk_1017BC6CE, v37); /*0x100337444*/
      v26 = v40; /*0x100337450*/
      v27 = v41; /*0x100337457*/
      v38[0] = v40; /*0x10033745e*/
      v38[1] = v41; /*0x100337465*/
      v39 = v42; /*0x10033746c*/
      v14[3] = v42; /*0x100337473*/
      v14[2] = v27; /*0x100337477*/
      v14[1] = v26; /*0x10033747b*/
      *v14 = 1; /*0x10033747f*/
    }
    else
    {
      v64 = v54; /*0x100337496*/
      v63 = v53; /*0x1003374a1*/
      v62 = v52; /*0x1003374a5*/
      v44 = v55; /*0x1003374b7*/
      v45 = v56; /*0x1003374be*/
      v46 = v57; /*0x1003374c9*/
      v47 = v58; /*0x1003374d4*/
      v48 = v59; /*0x1003374df*/
      v49 = v60; /*0x1003374ea*/
      v50 = v61; /*0x1003374f5*/
      v39 = v54; /*0x100337500*/
      v43 = v54; /*0x10033750f*/
      v42 = v53; /*0x100337516*/
      v41 = v52; /*0x10033751d*/
      v40 = v51; /*0x100337524*/
      url::Url::query_pairs_mut::h509c3bdf2599cd13(&v51, &v40); /*0x100337539*/
      if ( v51 == 0x8000000000000001LL ) /*0x100337553*/
        goto LABEL_42; /*0x100337553*/
      v28 = _$LT$url..UrlQuery$u20$as$u20$form_urlencoded..Target$GT$::as_mut_string::h1582110568bc6c52(&v51); /*0x100337560*/
      v29 = *(_QWORD *)(v28 + 16); /*0x10033756c*/
      if ( v55 <= v29 ) /*0x100337573*/
      {
        if ( v55 != 0 && v55 < v29 && *(char *)(*(_QWORD *)(v28 + 8) + v55) <= -65 ) /*0x100337592*/
          core::panicking::panic::h286e2dd5eab048be( /*0x10033774f*/
            &anon_10420c9971c21f44d230d15b39fb3fec_1001,
            48,
            &anon_10420c9971c21f44d230d15b39fb3fec_940);
        *(_QWORD *)(v28 + 16) = v55; /*0x100337598*/
      }
      v30 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2[7], a2[8]); /*0x1003375a6*/
      if ( v51 == 0x8000000000000001LL ) /*0x1003375b2*/
LABEL_42:
        core::option::expect_failed::ha75f8bdcbd673567( /*0x10033770d*/
          &anon_10420c9971c21f44d230d15b39fb3fec_943,
          41,
          &anon_10420c9971c21f44d230d15b39fb3fec_944);
      v32 = v30; /*0x1003375b8*/
      v33 = v31; /*0x1003375bb*/
      v34 = _$LT$url..UrlQuery$u20$as$u20$form_urlencoded..Target$GT$::as_mut_string::h1582110568bc6c52(&v51); /*0x1003375c5*/
      form_urlencoded::append_pair::h6e478387beac77a4( /*0x1003375f5*/
        v34,
        v55,
        v56,
        v57,
        (unsigned int)&anon_b0ee9adff4519c22b647af231a5a39fa_414,
        5,
        v32,
        v33);
      v14 = v65; /*0x100337601*/
      if ( v51 != 0x8000000000000001LL ) /*0x100337605*/
      {
        _$LT$url..UrlQuery$u20$as$u20$core..ops..drop..Drop$GT$::drop::h95cb3aea21492abc(&v51); /*0x10033760e*/
        if ( v51 != 0x8000000000000000LL ) /*0x10033761d*/
        {
          if ( v51 ) /*0x100337622*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v51, 1); /*0x100337630*/
        }
      }
      v62 = nullptr; /*0x100337643*/
      v63 = 1; /*0x10033764b*/
      v64 = 0; /*0x100337653*/
      v53 = 1610612768; /*0x10033765b*/
      v51 = (__int64)&v62; /*0x10033766a*/
      v52 = &anon_b0ee9adff4519c22b647af231a5a39fa_1607; /*0x100337678*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(v41, v42, &v51) ) /*0x100337686*/
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100337735*/
          &anon_b0ee9adff4519c22b647af231a5a39fa_1608,
          55,
          v38,
          &anon_b0ee9adff4519c22b647af231a5a39fa_1618,
          &anon_b0ee9adff4519c22b647af231a5a39fa_1610);
      v14[3] = v64; /*0x100337697*/
      v35 = v62; /*0x10033769b*/
      v14[2] = v63; /*0x1003376a3*/
      v14[1] = v35; /*0x1003376a7*/
      *v14 = 0; /*0x1003376ab*/
      if ( v40 ) /*0x1003376bc*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, v40, 1); /*0x1003376ca*/
    }
    if ( __n ) /*0x1003376d6*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, __n, 1); /*0x1003376e0*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v4, v5); /*0x10033717b*/
    v13 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(25, 1); /*0x10033718a*/
    if ( !v13 ) /*0x100337192*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 25); /*0x100337760*/
    *(_QWORD *)(v13 + 16) = 0xA9E7BAB8E4BD83E8LL; /*0x1003371a2*/
    *(_QWORD *)(v13 + 8) = 0x8DB8E4204C525520LL; /*0x1003371b0*/
    *(_QWORD *)v13 = 0x6573614220525341LL; /*0x1003371be*/
    *(_BYTE *)(v13 + 24) = -70; /*0x1003371c1*/
    v14 = v65; /*0x1003371c5*/
    v65[1] = 25; /*0x1003371c9*/
    v14[2] = v13; /*0x1003371d1*/
    v14[3] = 25; /*0x1003371d5*/
    *v14 = 1; /*0x1003371dd*/
  }
  return v14; /*0x1003376e8*/
}