// mac 1.2.2 NEW codexmate_lib4core12debug_bundle26redact_json_valu 0x100405960 d=0
__int64 __fastcall codexmate_lib::core::debug_bundle::redact_json_value_with_key::h8a2fc8ecd52f0626(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int8 *a4,
        __int64 a5)
{
  __int64 v6; // r12
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  int v9; // edx
  bool v10; // cf
  unsigned __int32 v11; // eax
  unsigned int v12; // ecx
  int v13; // r15d
  _BOOL4 v14; // r15d
  unsigned int *v15; // r12
  __int64 v16; // r13
  void *v17; // rax
  int v18; // eax
  __int64 v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rsi
  _DWORD *v22; // rax
  void *v23; // rax
  size_t v24; // rax
  _BOOL4 v25; // r15d
  int v26; // eax
  __int64 v27; // rax
  __int64 v28; // rcx
  _BOOL8 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // rcx
  __int64 v33; // rax
  _QWORD v34[3]; // [rsp+8h] [rbp-D8h] BYREF
  _BOOL8 v35; // [rsp+20h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+28h] [rbp-B8h]
  __int64 v37; // [rsp+30h] [rbp-B0h]
  __int64 v38; // [rsp+38h] [rbp-A8h]
  _BOOL8 v39; // [rsp+40h] [rbp-A0h]
  __int64 v40; // [rsp+48h] [rbp-98h]
  __int64 v41; // [rsp+50h] [rbp-90h]
  __int64 v42; // [rsp+58h] [rbp-88h]
  __int64 v43; // [rsp+60h] [rbp-80h]
  __int64 v44; // [rsp+68h] [rbp-78h]
  __int64 v45; // [rsp+70h] [rbp-70h]
  __int64 v46; // [rsp+78h] [rbp-68h]
  size_t v47; // [rsp+80h] [rbp-60h] BYREF
  _DWORD *v48; // [rsp+88h] [rbp-58h]
  __int64 v49; // [rsp+90h] [rbp-50h]
  __int64 v50; // [rsp+98h] [rbp-48h]
  __int64 v51; // [rsp+A0h] [rbp-40h] BYREF
  void *__s2; // [rsp+A8h] [rbp-38h]
  __int64 v53; // [rsp+B0h] [rbp-30h]

  v50 = a5; /*0x100405974*/
  if ( !a2 ) /*0x100405981*/
    goto LABEL_57; /*0x100405981*/
  v6 = a2 + a3; /*0x10040598d*/
  v35 = 0; /*0x100405990*/
  v40 = 0; /*0x10040599b*/
  v45 = a2; /*0x1004059a6*/
  v46 = a2 + a3; /*0x1004059aa*/
  _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h134e9709f5ebf16b( /*0x1004059b9*/
    &v51,
    &v35);
  if ( v53 == 7 ) /*0x1004059ca*/
  {
    v11 = _byteswap_ulong(*(_DWORD *)__s2); /*0x100405a01*/
    v12 = 1751474532; /*0x100405a03*/
    if ( v11 != 1751474532 /*0x100405a1e*/
      || (v11 = _byteswap_ulong(*(_DWORD *)((char *)__s2 + 3)), v12 = 1684370035, v11 != 1684370035) )
    {
      v9 = 0; /*0x100405a43*/
      v10 = v11 < v12; /*0x100405a45*/
LABEL_15:
      LOBYTE(v9) = !v10; /*0x100405a47*/
      v13 = 2 * v9 - 1; /*0x100405a4a*/
      if ( !v51 ) /*0x100405a56*/
        goto LABEL_17; /*0x100405a56*/
      goto LABEL_16; /*0x100405a56*/
    }
    goto LABEL_10; /*0x100405a1e*/
  }
  if ( v53 == 12 ) /*0x1004059d0*/
  {
    v7 = 0x6578747261686561LL; /*0x1004059d2*/
    v8 = _byteswap_uint64(*(_QWORD *)__s2); /*0x1004059df*/
    if ( v8 != 0x6578747261686561LL ) /*0x1004059e5*/
    {
LABEL_7:
      v9 = 0; /*0x1004059f8*/
      v10 = v8 < v7; /*0x1004059fa*/
      goto LABEL_15; /*0x1004059fd*/
    }
    v8 = _byteswap_ulong(*((_DWORD *)__s2 + 2)); /*0x1004059ea*/
    if ( (_DWORD)v8 != 1684370035 ) /*0x1004059f1*/
    {
      v7 = 1684370035; /*0x1004059f3*/
      goto LABEL_7; /*0x1004059f3*/
    }
LABEL_10:
    v13 = 0; /*0x100405a20*/
    if ( !v51 ) /*0x100405a2a*/
    {
LABEL_17:
      if ( !v13 ) /*0x100405a65*/
      {
        v18 = *a4; /*0x100405c8a*/
        if ( *a4 ) /*0x100405c8a*/
        {
          if ( v18 == 3 ) /*0x100405c99*/
          {
            codexmate_lib::core::debug_bundle::extra_headers_summary::h72b32096117a339a( /*0x100405d35*/
              &v47,
              *((_QWORD *)a4 + 2),
              *((_QWORD *)a4 + 3));
          }
          else if ( v18 == 5 ) /*0x100405ca2*/
          {
            v19 = *((_QWORD *)a4 + 1); /*0x100405ca8*/
            v20 = *((_QWORD *)a4 + 2); /*0x100405cac*/
            v21 = v19; /*0x100405cb2*/
            if ( v19 ) /*0x100405cbb*/
              v21 = *((_QWORD *)a4 + 3); /*0x100405cbd*/
            v35 = v19 != 0; /*0x100405cc1*/
            v36 = 0; /*0x100405cc8*/
            v37 = v19; /*0x100405cd3*/
            v38 = v20; /*0x100405cda*/
            v39 = v35; /*0x100405ce1*/
            v40 = 0; /*0x100405ce8*/
            v41 = v19; /*0x100405cf3*/
            v42 = v20; /*0x100405cfa*/
            v43 = v21; /*0x100405d01*/
            _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::ha03c0a6f20cc1cef( /*0x100405d13*/
              &v51,
              &v35);
            codexmate_lib::core::debug_bundle::header_names_summary::h278e1053fcb29704(&v47, &v51); /*0x100405d1f*/
          }
          else
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100405d78*/
            v23 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x14u, 1u); /*0x100405d87*/
            if ( !v23 ) /*0x100405d8f*/
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x100405fab*/
            qmemcpy(v23, "invalid header shape", 20); /*0x100405dad*/
            v47 = 20; /*0x100405db7*/
            v48 = v23; /*0x100405dbf*/
            v49 = 20; /*0x100405dc3*/
          }
        }
        else
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100405d3f*/
          v22 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4u, 1u); /*0x100405d4e*/
          if ( !v22 ) /*0x100405d56*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x100405f9c*/
          *v22 = 1701736302; /*0x100405d5c*/
          v47 = 4; /*0x100405d62*/
          v48 = v22; /*0x100405d6a*/
          v49 = 4; /*0x100405d6e*/
        }
        *(_QWORD *)(a1 + 24) = v49; /*0x100405dcf*/
        v24 = v47; /*0x100405dd3*/
        *(_QWORD *)(a1 + 16) = v48; /*0x100405ddb*/
        *(_QWORD *)(a1 + 8) = v24; /*0x100405ddf*/
        goto LABEL_65; /*0x100405de3*/
      }
      goto LABEL_18; /*0x100405a65*/
    }
LABEL_16:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100405a58*/
    goto LABEL_17; /*0x100405a5d*/
  }
  if ( v51 ) /*0x100405a35*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100405a3c*/
LABEL_18:
  v35 = 0; /*0x100405a6b*/
  v40 = 0; /*0x100405a76*/
  v45 = a2; /*0x100405a81*/
  v46 = v6; /*0x100405a85*/
  _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h134e9709f5ebf16b( /*0x100405a94*/
    &v51,
    &v35);
  if ( v53 == 9 ) /*0x100405a9e*/
  {
    v14 = (*(_QWORD *)__s2 ^ 0x6F7272657473616CLL | *((unsigned __int8 *)__s2 + 8) ^ 0x72LL) != 0; /*0x100405ac3*/
    if ( v51 ) /*0x100405aca*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100405ad1*/
    if ( !v14 ) /*0x100405ad9*/
    {
      codexmate_lib::core::debug_bundle::summarize_last_error_value::h0f7ba293666eee16(a1, a4); /*0x100405ae1*/
      return a1; /*0x100405ae6*/
    }
  }
  else if ( v51 ) /*0x100405af2*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100405afd*/
  }
  v35 = 0; /*0x100405b02*/
  v40 = 0; /*0x100405b0d*/
  v45 = a2; /*0x100405b18*/
  v46 = v6; /*0x100405b1c*/
  _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$char$GT$$GT$::from_iter::h134e9709f5ebf16b( /*0x100405b2b*/
    &v51,
    &v35);
  v15 = (unsigned int *)__s2; /*0x100405b30*/
  v16 = v53; /*0x100405b34*/
  if ( v53 == 10 && !(*(_QWORD *)__s2 ^ 0x6B746E756F636361LL | *((unsigned __int16 *)__s2 + 4) ^ 0x7965LL) /*0x100405c1e*/
    || (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                          "authorizationapikeytokensecretcookiejwtbearer",
                          0xDu,
                          __s2)
    || (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                          "apikeytokensecretcookiejwtbearer",
                          6u,
                          v15)
    || (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                          "tokensecretcookiejwtbearer",
                          5u,
                          v15)
    || (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                          "secretcookiejwtbearer",
                          6u,
                          v15)
    || (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                          "cookiejwtbearer",
                          6u,
                          v15)
    || (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                          "jwtbearer",
                          3u,
                          v15)
    || (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                          "bearer",
                          6u,
                          v15) )
  {
    if ( v51 ) /*0x100405c32*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100405c3c*/
LABEL_36:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100405c41*/
    v17 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0xAu, 1u); /*0x100405c50*/
    if ( !v17 ) /*0x100405c58*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x100405f8d*/
    qmemcpy(v17, "[REDACTED]", 10); /*0x100405c68*/
    *(_QWORD *)(a1 + 8) = 10; /*0x100405c71*/
    *(_QWORD *)(a1 + 16) = v17; /*0x100405c79*/
    *(_QWORD *)(a1 + 24) = 10; /*0x100405c7d*/
    goto LABEL_65; /*0x100405c85*/
  }
  if ( v16 == 12 ) /*0x100405dec*/
  {
    v25 = (*(_QWORD *)v15 ^ 0x706169616E65706FLL | v15[2] ^ 0x79656B69LL) != 0; /*0x100405e0e*/
    if ( v51 ) /*0x100405e19*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100405e23*/
    if ( !v25 ) /*0x100405e2b*/
      goto LABEL_36; /*0x100405e2b*/
  }
  else if ( v51 ) /*0x100405e39*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100405e43*/
  }
LABEL_57:
  v26 = *a4; /*0x100405e48*/
  switch ( v26 ) /*0x100405e4f*/
  {
    case 3: /*0x100405e4f*/
      codexmate_lib::platform::debug_log::redact_text_inner::hab2d4f742d78f6c8( /*0x100405f3a*/
        a1 + 8,
        *((const void **)a4 + 2),
        *((_QWORD *)a4 + 3),
        *(_QWORD *)(v50 + 8),
        *(_QWORD *)(v50 + 16));
LABEL_65:
      *(_BYTE *)a1 = 3; /*0x100405f3f*/
      return a1; /*0x100405f3f*/
    case 4: /*0x100405e4f*/
      v31 = *((_QWORD *)a4 + 2) + 32LL * *((_QWORD *)a4 + 3); /*0x100405ef1*/
      v34[0] = *((_QWORD *)a4 + 2); /*0x100405ef4*/
      v34[1] = v31; /*0x100405efb*/
      v34[2] = v50; /*0x100405f06*/
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hfedfe0ca7a25b8e0( /*0x100405f18*/
        a1 + 8,
        v34);
      *(_BYTE *)a1 = 4; /*0x100405f1d*/
      break;
    case 5: /*0x100405e4f*/
      v27 = *((_QWORD *)a4 + 1); /*0x100405e67*/
      v28 = *((_QWORD *)a4 + 2); /*0x100405e6b*/
      v29 = 0; /*0x100405e6f*/
      v30 = v27; /*0x100405e71*/
      if ( v27 ) /*0x100405e7b*/
        v30 = *((_QWORD *)a4 + 3); /*0x100405e7d*/
      LOBYTE(v29) = v27 != 0; /*0x100405e81*/
      v35 = v29; /*0x100405e84*/
      v36 = 0; /*0x100405e8b*/
      v37 = v27; /*0x100405e96*/
      v38 = v28; /*0x100405e9d*/
      v39 = v29; /*0x100405ea4*/
      v40 = 0; /*0x100405eab*/
      v41 = v27; /*0x100405eb6*/
      v42 = v28; /*0x100405ebd*/
      v43 = v30; /*0x100405ec4*/
      v44 = v50; /*0x100405ecc*/
      _$LT$alloc..collections..btree..map..BTreeMap$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$LP$K$C$V$RP$$GT$$GT$::from_iter::hd002362a76b4575d( /*0x100405edb*/
        a1 + 8,
        &v35);
      *(_BYTE *)a1 = 5; /*0x100405ee0*/
      break;
    default:
      if ( *a4 ) /*0x100405e48*/
      {
        *(_QWORD *)(a1 + 24) = *((_QWORD *)a4 + 3); /*0x100405f62*/
        *(_QWORD *)(a1 + 16) = *((_QWORD *)a4 + 2); /*0x100405f6a*/
        v33 = *(_QWORD *)a4; /*0x100405f6e*/
        *(_QWORD *)(a1 + 8) = *((_QWORD *)a4 + 1); /*0x100405f75*/
        *(_QWORD *)a1 = v33; /*0x100405f79*/
      }
      else
      {
        *(_BYTE *)a1 = 0; /*0x100405f7e*/
      }
      break;
  }
  return a1; /*0x100405f45*/
}