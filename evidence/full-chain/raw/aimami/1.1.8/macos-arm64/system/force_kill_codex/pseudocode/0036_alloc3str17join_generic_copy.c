// mac 1.1.8 force_kill_codex node va=0x1006acf20 depth=3
// alloc3str17join_generic_copy
unsigned __int64 *__fastcall alloc::str::join_generic_copy::hd50f750ef8c6057e(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        unsigned __int64 a5)
{
  unsigned __int64 *v5; // r15
  __int64 v7; // rcx
  signed __int64 v8; // r14
  __int64 v9; // rax
  bool v10; // cf
  __int64 v11; // r12
  __int64 v12; // rax
  size_t v13; // r12
  unsigned __int64 v14; // r13
  __int64 v15; // r15
  size_t v16; // r13
  _BYTE *v17; // rdi
  unsigned __int64 v18; // r15
  size_t v19; // kr08_8
  __int64 v20; // r13
  __int64 v21; // rbx
  size_t v22; // rdx
  _BYTE *v23; // r12
  __int64 v24; // rbx
  const void *v25; // rsi
  size_t v26; // rdx
  size_t v27; // r15
  __int64 v28; // r12
  __int64 v29; // rbx
  const void *v30; // rsi
  size_t v31; // rdx
  size_t v32; // r15
  __int64 v33; // r12
  __int64 v34; // rbx
  const void *v35; // rsi
  size_t v36; // rdx
  size_t v37; // r15
  _WORD *v38; // rcx
  __int64 v39; // r12
  __int64 v40; // rbx
  const void *v41; // rsi
  size_t v42; // rdx
  size_t v43; // r15
  __int64 v44; // r12
  __int64 v45; // rax
  __int64 v46; // rbx
  size_t v47; // r15
  size_t v48; // r12
  void *v49; // rdi
  unsigned __int64 v50; // rax
  unsigned __int64 v53; // [rsp+8h] [rbp-68h] BYREF
  __int64 v54; // [rsp+10h] [rbp-60h]
  unsigned __int64 v55; // [rsp+18h] [rbp-58h]
  void *__src; // [rsp+20h] [rbp-50h]
  __int64 v57; // [rsp+28h] [rbp-48h]
  void *v58; // [rsp+30h] [rbp-40h]
  unsigned __int64 v59; // [rsp+38h] [rbp-38h]
  size_t __n; // [rsp+40h] [rbp-30h]

  v58 = a4; /*0x1006acf31*/
  v5 = a1; /*0x1006acf35*/
  if ( a3 ) /*0x1006acf3b*/
  {
    v7 = 24 * a3; /*0x1006acf4c*/
    v59 = 24 * a3 - 24; /*0x1006acf54*/
    if ( !is_mul_ok(0xAAAAAAAAAAAAAAABLL * (v59 >> 3), a5) ) /*0x1006acf70*/
LABEL_6:
      core::option::expect_failed::ha75f8bdcbd673567( /*0x1006acf93*/
        "attempt to join into collection with len > usize::MAX_root_EventTargetinternally tagged enum EventTargetdata did not match any variant of untagged enum JsImage",
        53,
        &off_101537340);
    v8 = 0xAAAAAAAAAAAAAAABLL * (v59 >> 3) * a5; /*0x1006acf72*/
    v9 = a2; /*0x1006acf75*/
    while ( v7 ) /*0x1006acf83*/
    {
      v7 -= 24; /*0x1006acf85*/
      v10 = __CFADD__(*(_QWORD *)(v9 + 16), v8); /*0x1006acf89*/
      v8 += *(_QWORD *)(v9 + 16); /*0x1006acf89*/
      v9 += 24; /*0x1006acf8d*/
      if ( v10 ) /*0x1006acf91*/
        goto LABEL_6; /*0x1006acf91*/
    }
    if ( v8 < 0 ) /*0x1006acfae*/
    {
      v11 = 0; /*0x1006acfb0*/
      goto LABEL_9; /*0x1006acfb0*/
    }
    __n = a5; /*0x1006acfda*/
    if ( v8 ) /*0x1006acfde*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006acfe3*/
      v11 = 1; /*0x1006acfe8*/
      v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1u); /*0x1006acff6*/
      if ( !v12 ) /*0x1006acffe*/
LABEL_9:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v11, v8); /*0x1006acfb3*/
    }
    else
    {
      v12 = 1; /*0x1006ad005*/
    }
    v57 = a2; /*0x1006ad00a*/
    v53 = v8; /*0x1006ad00e*/
    v54 = v12; /*0x1006ad012*/
    v55 = 0; /*0x1006ad016*/
    __src = *(void **)(a2 + 8); /*0x1006ad022*/
    v13 = *(_QWORD *)(a2 + 16); /*0x1006ad026*/
    if ( v13 > v8 ) /*0x1006ad031*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(&v53, 0, v13, 1, 1u); /*0x1006ad2fb*/
      v12 = v54; /*0x1006ad300*/
      v14 = v55; /*0x1006ad304*/
    }
    else
    {
      v14 = 0; /*0x1006ad037*/
    }
    v15 = v12; /*0x1006ad03e*/
    memcpy((void *)(v12 + v14), __src, v13); /*0x1006ad048*/
    v16 = v13 + v14; /*0x1006ad050*/
    v17 = (_BYTE *)(v16 + v15); /*0x1006ad053*/
    v18 = v8 - v16; /*0x1006ad059*/
    v19 = __n; /*0x1006ad06a*/
    v20 = v57; /*0x1006ad078*/
    switch ( __n ) /*0x1006ad07c*/
    {
      case 0uLL: /*0x1006ad07c*/
        if ( a3 == 1 ) /*0x1006ad082*/
          goto LABEL_52; /*0x1006ad082*/
        v21 = 0; /*0x1006ad088*/
        while ( 1 ) /*0x1006ad090*/
        {
          v22 = *(_QWORD *)(v20 + v21 + 40); /*0x1006ad090*/
          v10 = v18 < v22; /*0x1006ad095*/
          v18 -= v22; /*0x1006ad095*/
          if ( v10 ) /*0x1006ad098*/
            goto LABEL_54; /*0x1006ad098*/
          v23 = &v17[v22]; /*0x1006ad0a3*/
          memcpy(v17, *(const void **)(v20 + v21 + 32), v22); /*0x1006ad0a7*/
          v21 += 24; /*0x1006ad0ac*/
          v17 = v23; /*0x1006ad0b0*/
          if ( v59 == v21 ) /*0x1006ad0b7*/
            goto LABEL_52; /*0x1006ad0b7*/
        }
      case 1uLL: /*0x1006ad07c*/
        if ( a3 == 1 ) /*0x1006ad1e6*/
          goto LABEL_52; /*0x1006ad1e6*/
        v40 = 0; /*0x1006ad1ec*/
        while ( v18 ) /*0x1006ad1f3*/
        {
          v41 = *(const void **)(v20 + v40 + 32); /*0x1006ad1f9*/
          v42 = *(_QWORD *)(v20 + v40 + 40); /*0x1006ad1fe*/
          v43 = v18 - 1; /*0x1006ad203*/
          *v17 = *(_BYTE *)v58; /*0x1006ad20d*/
          v10 = v43 < v42; /*0x1006ad20f*/
          v18 = v43 - v42; /*0x1006ad20f*/
          if ( v10 ) /*0x1006ad212*/
            break; /*0x1006ad212*/
          v44 = (__int64)&v17[v42 + 1]; /*0x1006ad218*/
          memcpy(v17 + 1, v41, v42); /*0x1006ad220*/
          v40 += 24; /*0x1006ad225*/
          v17 = (_BYTE *)v44; /*0x1006ad229*/
          if ( v59 == v40 ) /*0x1006ad230*/
            goto LABEL_52; /*0x1006ad230*/
        }
        goto LABEL_54; /*0x1006ad212*/
      case 2uLL: /*0x1006ad07c*/
        if ( a3 == 1 ) /*0x1006ad11d*/
          goto LABEL_52; /*0x1006ad11d*/
        v29 = 0; /*0x1006ad123*/
        while ( v18 >= 2 ) /*0x1006ad134*/
        {
          v30 = *(const void **)(v20 + v29 + 32); /*0x1006ad13a*/
          v31 = *(_QWORD *)(v20 + v29 + 40); /*0x1006ad13f*/
          v32 = v18 - 2; /*0x1006ad144*/
          *(_WORD *)v17 = *(_WORD *)v58; /*0x1006ad14f*/
          v10 = v32 < v31; /*0x1006ad152*/
          v18 = v32 - v31; /*0x1006ad152*/
          if ( v10 ) /*0x1006ad155*/
            break; /*0x1006ad155*/
          v33 = (__int64)&v17[v31 + 2]; /*0x1006ad15b*/
          memcpy(v17 + 2, v30, v31); /*0x1006ad164*/
          v29 += 24; /*0x1006ad169*/
          v17 = (_BYTE *)v33; /*0x1006ad16d*/
          if ( v59 == v29 ) /*0x1006ad174*/
            goto LABEL_52; /*0x1006ad174*/
        }
        goto LABEL_54; /*0x1006ad155*/
      case 3uLL: /*0x1006ad07c*/
        if ( a3 == 1 ) /*0x1006ad17f*/
          goto LABEL_52; /*0x1006ad17f*/
        v34 = 0; /*0x1006ad185*/
        while ( v18 >= 3 ) /*0x1006ad194*/
        {
          v35 = *(const void **)(v20 + v34 + 32); /*0x1006ad19a*/
          v36 = *(_QWORD *)(v20 + v34 + 40); /*0x1006ad19f*/
          v37 = v18 - 3; /*0x1006ad1a4*/
          v38 = v58; /*0x1006ad1a8*/
          v17[2] = *((_BYTE *)v58 + 2); /*0x1006ad1b0*/
          *(_WORD *)v17 = *v38; /*0x1006ad1b6*/
          v10 = v37 < v36; /*0x1006ad1b9*/
          v18 = v37 - v36; /*0x1006ad1b9*/
          if ( v10 ) /*0x1006ad1bc*/
            break; /*0x1006ad1bc*/
          v39 = (__int64)&v17[v36 + 3]; /*0x1006ad1c2*/
          memcpy(v17 + 3, v35, v36); /*0x1006ad1cb*/
          v34 += 24; /*0x1006ad1d0*/
          v17 = (_BYTE *)v39; /*0x1006ad1d4*/
          if ( v59 == v34 ) /*0x1006ad1db*/
            goto LABEL_52; /*0x1006ad1db*/
        }
        goto LABEL_54; /*0x1006ad1bc*/
      case 4uLL: /*0x1006ad07c*/
        if ( a3 == 1 ) /*0x1006ad0c2*/
          goto LABEL_52; /*0x1006ad0c2*/
        v24 = 0; /*0x1006ad0c8*/
        while ( v18 >= 4 ) /*0x1006ad0d4*/
        {
          v25 = *(const void **)(v20 + v24 + 32); /*0x1006ad0da*/
          v26 = *(_QWORD *)(v20 + v24 + 40); /*0x1006ad0df*/
          v27 = v18 - 4; /*0x1006ad0e4*/
          *(_DWORD *)v17 = *(_DWORD *)v58; /*0x1006ad0ee*/
          v10 = v27 < v26; /*0x1006ad0f0*/
          v18 = v27 - v26; /*0x1006ad0f0*/
          if ( v10 ) /*0x1006ad0f3*/
            break; /*0x1006ad0f3*/
          v28 = (__int64)&v17[v26 + 4]; /*0x1006ad0f9*/
          memcpy(v17 + 4, v25, v26); /*0x1006ad102*/
          v24 += 24; /*0x1006ad107*/
          v17 = (_BYTE *)v28; /*0x1006ad10b*/
          if ( v59 == v24 ) /*0x1006ad112*/
            goto LABEL_52; /*0x1006ad112*/
        }
        goto LABEL_54; /*0x1006ad0f3*/
      default:
        v45 = v57; /*0x1006ad238*/
        if ( a3 == 1 ) /*0x1006ad23c*/
          goto LABEL_52; /*0x1006ad23c*/
        v46 = 0; /*0x1006ad23e*/
        do /*0x1006ad29b*/
        {
          v10 = v18 < v19; /*0x1006ad240*/
          v47 = v18 - v19; /*0x1006ad240*/
          if ( v10 /*0x1006ad272*/
            || (__src = *(void **)(v45 + v46 + 32),
                v48 = *(_QWORD *)(v45 + v46 + 40),
                __n = (size_t)v17,
                memcpy(v17, v58, v19),
                v10 = v47 < v48,
                v18 = v47 - v48,
                v10) )
          {
LABEL_54:
            core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1006ad2cd*/
              (__int64)"mid > lencalled `Result::unwrap()` on an `Err` valueErrorOneTwoFourEightSixteenattempt to join into collection with len > usize::MAX_root_EventTargetinternally tagged enum EventTargetdata did not match any variant of untagged enum JsImage",
              19,
              (__int64)&off_101537328);
          }
          v49 = (void *)(v19 + __n); /*0x1006ad274*/
          __n += v19 + v48; /*0x1006ad27b*/
          memcpy(v49, __src, v48); /*0x1006ad286*/
          v46 += 24; /*0x1006ad28b*/
          v17 = (_BYTE *)__n; /*0x1006ad28f*/
          v45 = v57; /*0x1006ad293*/
        }
        while ( v59 != v46 ); /*0x1006ad29b*/
LABEL_52:
        v55 = v8 - v18; /*0x1006ad29d*/
        v5 = a1; /*0x1006ad2a4*/
        a1[2] = v55; /*0x1006ad2a8*/
        v50 = v53; /*0x1006ad2ac*/
        a1[1] = v54; /*0x1006ad2b4*/
        *a1 = v50; /*0x1006ad2b8*/
        break; /*0x1006ad2b8*/
    }
  }
  else
  {
    *a1 = 0; /*0x1006acfbe*/
    a1[1] = 1; /*0x1006acfc5*/
    a1[2] = 0; /*0x1006acfcd*/
  }
  return v5; /*0x1006ad2be*/
}