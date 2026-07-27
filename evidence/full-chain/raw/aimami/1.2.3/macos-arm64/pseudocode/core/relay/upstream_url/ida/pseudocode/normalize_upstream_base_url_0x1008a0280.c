// __ZN13codexmate_lib4core5relay12upstream_url27normalize_upstream_base_url @ 0x1008a0280 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::upstream_url::normalize_upstream_base_url::ha7493063c3bbb978(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  void *v6; // rax
  size_t v7; // rdx
  size_t v8; // r12
  __int64 *v9; // rdi
  char *v10; // rsi
  __int64 v11; // r14
  void *v12; // rcx
  void *v13; // rdx
  void *v14; // rax
  char *v15; // r13
  char *v16; // r15
  char **v17; // r8
  char *v18; // rdx
  __int64 v19; // r12
  __int64 v20; // r15
  char *v21; // rax
  __int64 v22; // rcx
  void *v23; // rdi
  char *v25; // r15
  __int64 v26; // rdx
  void *v27; // r13
  _QWORD v28[5]; // [rsp+20h] [rbp-130h] BYREF
  __int64 v29; // [rsp+48h] [rbp-108h] BYREF
  void *v30; // [rsp+50h] [rbp-100h]
  void *__dst; // [rsp+58h] [rbp-F8h]
  __int64 v32; // [rsp+60h] [rbp-F0h]
  __int64 v33; // [rsp+68h] [rbp-E8h]
  size_t v34; // [rsp+70h] [rbp-E0h]
  __int64 v35; // [rsp+78h] [rbp-D8h]
  __int64 v36; // [rsp+80h] [rbp-D0h]
  __int64 v37; // [rsp+88h] [rbp-C8h]
  __int64 v38; // [rsp+90h] [rbp-C0h]
  __int64 v39; // [rsp+98h] [rbp-B8h]
  __int64 v40; // [rsp+A0h] [rbp-B0h] BYREF
  void *v41; // [rsp+A8h] [rbp-A8h]
  void *v42; // [rsp+B0h] [rbp-A0h]
  __int64 v43; // [rsp+B8h] [rbp-98h]
  __int64 v44; // [rsp+C0h] [rbp-90h]
  size_t __n; // [rsp+C8h] [rbp-88h]
  __int64 v46; // [rsp+D0h] [rbp-80h]
  __int64 v47; // [rsp+D8h] [rbp-78h]
  __int64 v48; // [rsp+E0h] [rbp-70h]
  __int64 v49; // [rsp+E8h] [rbp-68h]
  __int64 v50; // [rsp+F0h] [rbp-60h]
  void *__src; // [rsp+F8h] [rbp-58h]
  void *v52; // [rsp+100h] [rbp-50h] BYREF
  void *v53; // [rsp+108h] [rbp-48h]
  __int64 v54; // [rsp+110h] [rbp-40h]
  void *__s1; // [rsp+118h] [rbp-38h]
  char v56; // [rsp+127h] [rbp-29h] BYREF

  v6 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, a3); /*0x1008a029d*/
  if ( !v7 ) /*0x1008a02a5*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a3); /*0x1008a0368*/
    v14 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 1); /*0x1008a0377*/
    if ( !v14 ) /*0x1008a037f*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 32); /*0x1008a0814*/
    qmemcpy(v14, "relay Base URL must not be empty", 32); /*0x1008a03b9*/
    a1[1] = 32; /*0x1008a03bc*/
    a1[2] = v14; /*0x1008a03c4*/
    a1[3] = 32; /*0x1008a03c8*/
    goto LABEL_6; /*0x1008a03c8*/
  }
  v8 = v7; /*0x1008a02ab*/
  v28[4] = 0; /*0x1008a02ae*/
  v28[0] = 0; /*0x1008a02b9*/
  v28[2] = 0; /*0x1008a02c4*/
  v9 = &v29; /*0x1008a02cf*/
  v10 = (char *)v28; /*0x1008a02d6*/
  __src = v6; /*0x1008a02dd*/
  url::ParseOptions::parse::h7da66aa6bebaf5b6(&v29, v28, v6, v7); /*0x1008a02e7*/
  v11 = v29; /*0x1008a02ec*/
  if ( !__OFSUB__(-v29, 1) ) /*0x1008a02f9*/
  {
    v54 = v32; /*0x1008a03e7*/
    v53 = __dst; /*0x1008a03f2*/
    v52 = v30; /*0x1008a03f6*/
    v44 = v33; /*0x1008a0408*/
    __n = v34; /*0x1008a040f*/
    v46 = v35; /*0x1008a041d*/
    v47 = v36; /*0x1008a0428*/
    v48 = v37; /*0x1008a0433*/
    v49 = v38; /*0x1008a043e*/
    v50 = v39; /*0x1008a0449*/
    v15 = (char *)__dst; /*0x1008a0455*/
    __s1 = v30; /*0x1008a0459*/
    v41 = v30; /*0x1008a045d*/
    v42 = __dst; /*0x1008a0464*/
    v43 = v32; /*0x1008a046b*/
    v40 = v29; /*0x1008a0472*/
    v16 = (char *)HIDWORD(v34); /*0x1008a0479*/
    if ( !HIDWORD(v34) ) /*0x1008a0483*/
      goto LABEL_18; /*0x1008a0483*/
    v17 = &off_10196D5E0; /*0x1008a0485*/
    if ( (unsigned __int64)__dst <= HIDWORD(v34) ) /*0x1008a048f*/
    {
      if ( __dst != (void *)HIDWORD(v34) ) /*0x1008a04b2*/
        goto LABEL_10; /*0x1008a04b2*/
    }
    else if ( *((char *)__s1 + HIDWORD(v34)) <= -65 ) /*0x1008a049a*/
    {
LABEL_10:
      v18 = nullptr; /*0x1008a049c*/
      goto LABEL_11; /*0x1008a049c*/
    }
    if ( HIDWORD(v34) == 5 ) /*0x1008a04b8*/
    {
      v10 = "https"; /*0x1008a04c9*/
    }
    else
    {
      if ( HIDWORD(v34) != 4 ) /*0x1008a04be*/
        goto LABEL_18; /*0x1008a04be*/
      v10 = "httpportPOSTdateetagfromlinkvaryJsonMenuTrayInitBodyPathDenycrls"; /*0x1008a04c0*/
    }
    v9 = (__int64 *)__s1; /*0x1008a04d0*/
    if ( memcmp(__s1, v10, HIDWORD(v34)) ) /*0x1008a04d7*/
    {
LABEL_18:
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v9, v10); /*0x1008a04e4*/
      v19 = 37; /*0x1008a04e9*/
      v20 = 1; /*0x1008a04ef*/
      v21 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(37, 1); /*0x1008a04ff*/
      if ( v21 ) /*0x1008a0507*/
      {
        qmemcpy(v21, "relay Base URL must use http or https", 37); /*0x1008a054f*/
        v22 = 37; /*0x1008a0552*/
LABEL_20:
        a1[1] = v22; /*0x1008a0557*/
        a1[2] = v21; /*0x1008a055b*/
        a1[3] = v22; /*0x1008a055f*/
        *a1 = 1; /*0x1008a0563*/
        if ( !v11 ) /*0x1008a056d*/
          return a1; /*0x1008a056d*/
        v23 = __s1; /*0x1008a0574*/
LABEL_22:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v11, 1); /*0x1008a0578*/
        return a1; /*0x1008a057b*/
      }
      goto LABEL_45; /*0x1008a0507*/
    }
    if ( url::Url::host_str::h951633b861c322f2(&v40) ) /*0x1008a059c*/
    {
      v25 = v16 + 1; /*0x1008a05aa*/
      if ( v15 <= v25 ) /*0x1008a05b0*/
      {
        if ( v15 != v25 ) /*0x1008a05cf*/
          goto LABEL_27; /*0x1008a05cf*/
      }
      else if ( v25[(_QWORD)__s1] <= -65 ) /*0x1008a05bb*/
      {
LABEL_27:
        v17 = &off_10196D5F8; /*0x1008a05bd*/
        v18 = v25; /*0x1008a05c4*/
        v16 = v15; /*0x1008a05c7*/
LABEL_11:
        core::str::slice_error_fail::h480e51fbd8b15eba(__s1, v15, v18, v16, v17); /*0x1008a049e*/
      }
      if ( v15 != v25 && v25[(_QWORD)__s1] == 47 ) /*0x1008a05e3*/
      {
        url::Url::username::hd711546128392e77(&v40); /*0x1008a05f0*/
        if ( v26 || url::Url::password::hd737168add2f42dd(&v40) ) /*0x1008a0601*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v40, v10); /*0x1008a060f*/
          v19 = 52; /*0x1008a0614*/
          v20 = 1; /*0x1008a061a*/
          v21 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(52, 1); /*0x1008a062a*/
          if ( v21 ) /*0x1008a0632*/
          {
            qmemcpy(v21, "relay Base URL must not contain embedded credentials", 52); /*0x1008a0688*/
            v22 = 52; /*0x1008a0692*/
            goto LABEL_20; /*0x1008a0697*/
          }
        }
        else if ( url::Url::fragment::h2d6f863d83ace37d(&v40) ) /*0x1008a0713*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v40, v10); /*0x1008a071d*/
          v19 = 42; /*0x1008a0722*/
          v20 = 1; /*0x1008a0728*/
          v21 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(42, 1); /*0x1008a0738*/
          if ( v21 ) /*0x1008a0740*/
          {
            qmemcpy(v21, "relay Base URL must not contain a fragment", 42); /*0x1008a0788*/
            v22 = 42; /*0x1008a0791*/
            goto LABEL_20; /*0x1008a0796*/
          }
        }
        else
        {
          alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v29, v8, 0, 1, 1); /*0x1008a07b2*/
          v20 = (__int64)v30; /*0x1008a07b7*/
          if ( !(_BYTE)v29 ) /*0x1008a07c5*/
          {
            v27 = __dst; /*0x1008a07c7*/
            memcpy(__dst, __src, v8); /*0x1008a07d8*/
            a1[1] = v20; /*0x1008a07dd*/
            a1[2] = v27; /*0x1008a07e1*/
            a1[3] = v8; /*0x1008a07e5*/
            *a1 = 0; /*0x1008a07e9*/
            if ( !v11 ) /*0x1008a07f3*/
              return a1; /*0x1008a07f3*/
            v23 = v41; /*0x1008a07f9*/
            goto LABEL_22; /*0x1008a0805*/
          }
          v19 = (__int64)__dst; /*0x1008a0819*/
        }
LABEL_45:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v20, v19); /*0x1008a0820*/
      }
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v40, v10); /*0x1008a069c*/
    v19 = 34; /*0x1008a06a1*/
    v20 = 1; /*0x1008a06a7*/
    v21 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(34, 1); /*0x1008a06b7*/
    if ( v21 ) /*0x1008a06bf*/
    {
      qmemcpy(v21, "relay Base URL must include a host", 34); /*0x1008a06f9*/
      v22 = 34; /*0x1008a0702*/
      goto LABEL_20; /*0x1008a0707*/
    }
    goto LABEL_45; /*0x1008a06bf*/
  }
  v56 = (char)v30; /*0x1008a0306*/
  v28[0] = &v56; /*0x1008a030d*/
  v28[1] = _$LT$url..parser..ParseError$u20$as$u20$core..fmt..Display$GT$::fmt::h9b83982323eaffdf; /*0x1008a031b*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v52, &unk_1017C5E64, v28); /*0x1008a0334*/
  v12 = v52; /*0x1008a0344*/
  v13 = v53; /*0x1008a0348*/
  a1[3] = v54; /*0x1008a035a*/
  a1[2] = v13; /*0x1008a035e*/
  a1[1] = v12; /*0x1008a0362*/
LABEL_6:
  *a1 = 1; /*0x1008a03d0*/
  return a1; /*0x1008a0583*/
}