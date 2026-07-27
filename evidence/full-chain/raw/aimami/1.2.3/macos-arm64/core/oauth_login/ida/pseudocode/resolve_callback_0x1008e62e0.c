// __ZN13codexmate_lib4core11oauth_login16resolve_callback @ 0x1008e62e0
// 1.2.3 NEW-delta | codexmate_lib::core::oauth_login::resolve_callback | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
unsigned __int64 *__fastcall codexmate_lib::core::oauth_login::resolve_callback::hae5d803d688d4700(
        unsigned __int64 *a1,
        __int64 a2,
        void *a3,
        size_t a4)
{
  unsigned __int64 *v5; // r15
  __int64 v6; // rdx
  size_t v7; // rdx
  __int64 v8; // rdi
  size_t v9; // rax
  bool v10; // zf
  bool v11; // cc
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // r15
  __int64 v16; // r14
  size_t v17; // rsi
  __int64 v18; // r12
  size_t *v19; // rdi
  void **p_s1; // r8
  size_t *v21; // r13
  int v22; // eax
  void *v23; // rax
  const void *v24; // rsi
  __int64 v25; // rdi
  unsigned __int64 v26; // r14
  char v27; // r12
  void *v28; // rbx
  unsigned __int64 v29; // rsi
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // rsi
  unsigned __int64 *v33; // rax
  unsigned __int64 *v34; // rdi
  bool v35; // al
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rcx
  int v39; // edx
  unsigned __int64 *v40; // rcx
  unsigned __int64 v41; // [rsp+8h] [rbp-F8h] BYREF
  __int64 v42; // [rsp+10h] [rbp-F0h]
  __int64 v43; // [rsp+18h] [rbp-E8h]
  size_t v44; // [rsp+20h] [rbp-E0h]
  void *__src; // [rsp+28h] [rbp-D8h]
  size_t v46; // [rsp+30h] [rbp-D0h]
  __int64 v47; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v49; // [rsp+48h] [rbp-B8h] BYREF
  void *__s2; // [rsp+50h] [rbp-B0h]
  size_t v51; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v52; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v53; // [rsp+68h] [rbp-98h]
  unsigned __int64 v54; // [rsp+70h] [rbp-90h]
  size_t v55; // [rsp+78h] [rbp-88h]
  unsigned __int64 *v56; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v57; // [rsp+88h] [rbp-78h] BYREF
  void *__s1; // [rsp+90h] [rbp-70h] BYREF
  __int64 v59; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v60; // [rsp+A0h] [rbp-60h] BYREF
  unsigned __int64 v61; // [rsp+A8h] [rbp-58h] BYREF
  void **v62; // [rsp+B0h] [rbp-50h]
  size_t *v63; // [rsp+B8h] [rbp-48h]
  unsigned __int64 *v64; // [rsp+C0h] [rbp-40h]
  size_t __n; // [rsp+C8h] [rbp-38h]
  size_t v66; // [rsp+D0h] [rbp-30h]

  v55 = a4; /*0x1008e62f4*/
  v5 = a1; /*0x1008e62fe*/
  v6 = *(unsigned __int16 *)(a2 + 80); /*0x1008e6301*/
  if ( v6 == 0xFFFF ) /*0x1008e630c*/
  {
    *a1 = 0x8000000000000001LL; /*0x1008e634a*/
    return v5; /*0x1008e634d*/
  }
  __s2 = a3; /*0x1008e630e*/
  v7 = v6 + 1; /*0x1008e6315*/
  v8 = *(_QWORD *)(a2 + 56); /*0x1008e6318*/
  v9 = *(_QWORD *)(a2 + 64); /*0x1008e6320*/
  v10 = v9 == v7; /*0x1008e6323*/
  v11 = v9 <= v7; /*0x1008e6323*/
  v12 = v9 - v7; /*0x1008e6323*/
  if ( v11 ) /*0x1008e6326*/
  {
    if ( !v10 ) /*0x1008e6352*/
LABEL_4:
      core::str::slice_error_fail::h480e51fbd8b15eba(v8, *(_QWORD *)(a2 + 64), v7, *(_QWORD *)(a2 + 64), &off_10196E470); /*0x1008e632e*/
  }
  else if ( *(char *)(v8 + v7) <= -65 ) /*0x1008e632c*/
  {
    goto LABEL_4; /*0x1008e632c*/
  }
  v13 = 0x8000000000000000LL; /*0x1008e6354*/
  if ( v12 > 0x4000 ) /*0x1008e6364*/
  {
    *v5 = 0x8000000000000001LL; /*0x1008e6369*/
    return v5; /*0x1008e636c*/
  }
  v64 = v5; /*0x1008e6371*/
  v61 = 0x8000000000000000LL; /*0x1008e6378*/
  v57 = 0x8000000000000000LL; /*0x1008e637c*/
  v60 = 0x8000000000000000LL; /*0x1008e6380*/
  v51 = v7 + v8; /*0x1008e6384*/
  v52 = v12; /*0x1008e638b*/
  v54 = 0x8000000000000001LL; /*0x1008e6396*/
  v14 = 0; /*0x1008e639d*/
  while ( 1 ) /*0x1008e63ae*/
  {
    _$LT$form_urlencoded..Parse$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5f4a03a90f1739ce( /*0x1008e63ae*/
      &v41,
      &v51,
      v7,
      v13);
    v15 = v41; /*0x1008e63b3*/
    if ( v41 == v54 ) /*0x1008e63c1*/
      break; /*0x1008e63c1*/
    v16 = v42; /*0x1008e63c7*/
    v17 = v44; /*0x1008e63d5*/
    v18 = (__int64)__src; /*0x1008e63dc*/
    v7 = v46; /*0x1008e63e3*/
    if ( v43 == 4 ) /*0x1008e63ee*/
    {
      v19 = (size_t *)&v49; /*0x1008e64f7*/
      p_s1 = (void **)&v59; /*0x1008e64fe*/
      v21 = &v61; /*0x1008e6502*/
      if ( *(_DWORD *)v42 != 1701080931 ) /*0x1008e6506*/
        goto LABEL_23; /*0x1008e6506*/
    }
    else
    {
      if ( v43 != 5 ) /*0x1008e63f8*/
        goto LABEL_23; /*0x1008e63f8*/
      v19 = (size_t *)&v48; /*0x1008e6412*/
      p_s1 = &__s1; /*0x1008e6419*/
      v21 = &v57; /*0x1008e641d*/
      if ( *(_DWORD *)v42 ^ 0x74617473 | *(unsigned __int8 *)(v42 + 4) ^ 0x65 ) /*0x1008e6410*/
      {
        v22 = *(_DWORD *)v42 ^ 0x6F727265; /*0x1008e642b*/
        v13 = v22 | *(unsigned __int8 *)(v42 + 4) ^ 0x72u; /*0x1008e6435*/
        v19 = (size_t *)&v47; /*0x1008e6437*/
        p_s1 = (void **)&v56; /*0x1008e643e*/
        v21 = &v60; /*0x1008e6442*/
        if ( v22 | *(unsigned __int8 *)(v42 + 4) ^ 0x72 ) /*0x1008e6435*/
          goto LABEL_23; /*0x1008e6446*/
      }
    }
    v13 = v14; /*0x1008e644c*/
    LOBYTE(v14) = 1; /*0x1008e644f*/
    if ( *v21 == 0x8000000000000000LL ) /*0x1008e645f*/
    {
      if ( v44 == 0x8000000000000000LL ) /*0x1008e6468*/
      {
        if ( (v46 & 0x8000000000000000LL) != 0LL ) /*0x1008e6471*/
        {
          v25 = 0; /*0x1008e65c8*/
          goto LABEL_36; /*0x1008e65c8*/
        }
        v14 = v13; /*0x1008e6477*/
        v62 = p_s1; /*0x1008e647a*/
        v63 = v19; /*0x1008e647e*/
        if ( v46 ) /*0x1008e6482*/
        {
          __n = v46; /*0x1008e6488*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v19, 0x8000000000000000LL); /*0x1008e648c*/
          v23 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(__n, 1); /*0x1008e649a*/
          if ( !v23 ) /*0x1008e64a2*/
          {
            v66 = __n; /*0x1008e682d*/
            v25 = 1; /*0x1008e6831*/
LABEL_36:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v25, v66); /*0x1008e65ca*/
          }
          v66 = *v21; /*0x1008e64ac*/
          v24 = (const void *)v18; /*0x1008e64b3*/
          v18 = (__int64)v23; /*0x1008e64ba*/
          memcpy(v23, v24, __n); /*0x1008e64bd*/
          if ( v66 != 0x8000000000000000LL ) /*0x1008e64d3*/
          {
            p_s1 = v62; /*0x1008e6582*/
            if ( v66 ) /*0x1008e6586*/
            {
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v62, v66, 1); /*0x1008e6590*/
              p_s1 = v62; /*0x1008e6595*/
            }
            v66 = v18; /*0x1008e6599*/
            v7 = __n; /*0x1008e659d*/
            v17 = __n; /*0x1008e65a1*/
            v19 = v63; /*0x1008e65a4*/
            goto LABEL_33; /*0x1008e65a4*/
          }
          v66 = v18; /*0x1008e64d9*/
          v7 = __n; /*0x1008e64dd*/
          v17 = __n; /*0x1008e64e1*/
        }
        else
        {
          v66 = 1; /*0x1008e6556*/
          v7 = 0; /*0x1008e656a*/
          v17 = 0; /*0x1008e656d*/
          v18 = 1; /*0x1008e656f*/
        }
        v19 = v63; /*0x1008e6575*/
        p_s1 = v62; /*0x1008e6579*/
      }
      else
      {
        v14 = v13; /*0x1008e654c*/
      }
LABEL_33:
      *v21 = v17; /*0x1008e65a8*/
      *p_s1 = (void *)v18; /*0x1008e65ac*/
      *v19 = v7; /*0x1008e65af*/
      if ( 2 * v15 ) /*0x1008e65b2*/
        goto LABEL_26; /*0x1008e65bd*/
    }
    else
    {
LABEL_23:
      if ( 2 * v44 ) /*0x1008e650c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v44, 1); /*0x1008e6521*/
      if ( 2 * v15 ) /*0x1008e6526*/
LABEL_26:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v15, 1); /*0x1008e6537*/
    }
  }
  v26 = v57; /*0x1008e65d5*/
  if ( v57 != 0x8000000000000000LL && v48 == v55 ) /*0x1008e65f6*/
  {
    v27 = v14; /*0x1008e65f8*/
    v28 = __s1; /*0x1008e65fb*/
    if ( !memcmp(__s1, __s2, v55) ) /*0x1008e6617*/
    {
      if ( (v27 & 1) != 0 || (v31 = v61, v32 = v60, v61 != 0x8000000000000000LL && v60 != 0x8000000000000000LL) ) /*0x1008e66b8*/
      {
        v33 = v64; /*0x1008e672c*/
        *v64 = 0x8000000000000000LL; /*0x1008e6730*/
        *((_BYTE *)v33 + 8) = 2; /*0x1008e6733*/
        v29 = v60; /*0x1008e6737*/
        if ( v60 != 0x8000000000000000LL ) /*0x1008e673e*/
          goto LABEL_41; /*0x1008e673e*/
        goto LABEL_43; /*0x1008e673e*/
      }
      if ( v60 == 0x8000000000000000LL ) /*0x1008e66cc*/
        goto LABEL_54; /*0x1008e66cc*/
      v34 = v56; /*0x1008e6749*/
      if ( v47 == 13 ) /*0x1008e6758*/
      {
        v37 = 0x6163636573735F64LL; /*0x1008e67bf*/
        v38 = _byteswap_uint64(*v56); /*0x1008e67cc*/
        if ( v38 != 0x6163636573735F64LL /*0x1008e67ea*/
          || (v37 = 0x735F64656E696564LL,
              v38 = _byteswap_uint64(*(unsigned __int64 *)((char *)v56 + 5)),
              v39 = 0,
              v38 != 0x735F64656E696564LL) )
        {
          v39 = 2 * (v38 >= v37) - 1; /*0x1008e67f4*/
        }
        v35 = v39 != 0; /*0x1008e67fa*/
      }
      else
      {
        v35 = 1; /*0x1008e675a*/
        if ( !v47 ) /*0x1008e675f*/
        {
          if ( v60 ) /*0x1008e6768*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, v60, 1); /*0x1008e6773*/
LABEL_54:
          v41 = v31; /*0x1008e66ce*/
          v42 = v59; /*0x1008e66d9*/
          v43 = v49; /*0x1008e66e7*/
          core::option::Option$LT$T$GT$::filter::hdf01afa744991bbf(&v51, &v41); /*0x1008e66fc*/
          v5 = v64; /*0x1008e6714*/
          if ( v51 == 0x8000000000000000LL ) /*0x1008e6712*/
          {
            *v64 = 0x8000000000000000LL; /*0x1008e6718*/
            *((_BYTE *)v5 + 8) = 2; /*0x1008e671b*/
          }
          else
          {
            v64[2] = v53; /*0x1008e6788*/
            v36 = v51; /*0x1008e678c*/
            v5[1] = v52; /*0x1008e679a*/
            *v5 = v36; /*0x1008e679e*/
          }
          if ( v26 ) /*0x1008e67a4*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v26, 1); /*0x1008e67b5*/
          return v5; /*0x1008e67ba*/
        }
      }
      v40 = v64; /*0x1008e6807*/
      *v64 = 0x8000000000000000LL; /*0x1008e680b*/
      *((_BYTE *)v40 + 8) = v35; /*0x1008e680e*/
      if ( v32 ) /*0x1008e6814*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v34, v32, 1); /*0x1008e681f*/
      goto LABEL_44; /*0x1008e6824*/
    }
  }
  *v64 = v54; /*0x1008e6624*/
  v29 = v60; /*0x1008e6627*/
  if ( v60 != 0x8000000000000000LL ) /*0x1008e662e*/
  {
LABEL_41:
    if ( v29 ) /*0x1008e6633*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v56, v29, 1); /*0x1008e663e*/
  }
LABEL_43:
  if ( v26 != 0x8000000000000000LL ) /*0x1008e6646*/
  {
LABEL_44:
    if ( v26 ) /*0x1008e664b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v26, 1); /*0x1008e6659*/
  }
  if ( v61 != 0x8000000000000000LL && v61 ) /*0x1008e666a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, v61, 1); /*0x1008e6675*/
  return v64; /*0x1008e6681*/
}