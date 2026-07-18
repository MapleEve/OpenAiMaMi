// mac 1.2.2 NEW codexmate_lib4core12debug_bundle20header_names_sum 0x10088d640 d=1
unsigned __int64 *__fastcall alloc::str::join_generic_copy::hfccd3ffc09b1fad9(
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

  v58 = a4; /*0x10088d651*/
  v5 = a1; /*0x10088d655*/
  if ( a3 ) /*0x10088d65b*/
  {
    v7 = 24 * a3; /*0x10088d66c*/
    v59 = 24 * a3 - 24; /*0x10088d674*/
    if ( !is_mul_ok(0xAAAAAAAAAAAAAAABLL * (v59 >> 3), a5) ) /*0x10088d690*/
LABEL_6:
      core::option::expect_failed::ha75f8bdcbd673567((__int64)&unk_10159AE07, 53, (__int64)&off_10189C710); /*0x10088d6b3*/
    v8 = 0xAAAAAAAAAAAAAAABLL * (v59 >> 3) * a5; /*0x10088d692*/
    v9 = a2; /*0x10088d695*/
    while ( v7 ) /*0x10088d6a3*/
    {
      v7 -= 24; /*0x10088d6a5*/
      v10 = __CFADD__(*(_QWORD *)(v9 + 16), v8); /*0x10088d6a9*/
      v8 += *(_QWORD *)(v9 + 16); /*0x10088d6a9*/
      v9 += 24; /*0x10088d6ad*/
      if ( v10 ) /*0x10088d6b1*/
        goto LABEL_6; /*0x10088d6b1*/
    }
    if ( v8 < 0 ) /*0x10088d6ce*/
    {
      v11 = 0; /*0x10088d6d0*/
      goto LABEL_9; /*0x10088d6d0*/
    }
    __n = a5; /*0x10088d6fa*/
    if ( v8 ) /*0x10088d6fe*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10088d703*/
      v11 = 1; /*0x10088d708*/
      v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1u); /*0x10088d716*/
      if ( !v12 ) /*0x10088d71e*/
LABEL_9:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v11); /*0x10088d6d3*/
    }
    else
    {
      v12 = 1; /*0x10088d725*/
    }
    v57 = a2; /*0x10088d72a*/
    v53 = v8; /*0x10088d72e*/
    v54 = v12; /*0x10088d732*/
    v55 = 0; /*0x10088d736*/
    __src = *(void **)(a2 + 8); /*0x10088d742*/
    v13 = *(_QWORD *)(a2 + 16); /*0x10088d746*/
    if ( v13 > v8 ) /*0x10088d751*/
    {
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h9d60c8e53c6eba4e(&v53, 0, v13, 1, 1u); /*0x10088da1b*/
      v12 = v54; /*0x10088da20*/
      v14 = v55; /*0x10088da24*/
    }
    else
    {
      v14 = 0; /*0x10088d757*/
    }
    v15 = v12; /*0x10088d75e*/
    memcpy((void *)(v12 + v14), __src, v13); /*0x10088d768*/
    v16 = v13 + v14; /*0x10088d770*/
    v17 = (_BYTE *)(v16 + v15); /*0x10088d773*/
    v18 = v8 - v16; /*0x10088d779*/
    v19 = __n; /*0x10088d78a*/
    v20 = v57; /*0x10088d798*/
    switch ( __n ) /*0x10088d79c*/
    {
      case 0uLL: /*0x10088d79c*/
        if ( a3 == 1 ) /*0x10088d7a2*/
          goto LABEL_52; /*0x10088d7a2*/
        v21 = 0; /*0x10088d7a8*/
        while ( 1 ) /*0x10088d7b0*/
        {
          v22 = *(_QWORD *)(v20 + v21 + 40); /*0x10088d7b0*/
          v10 = v18 < v22; /*0x10088d7b5*/
          v18 -= v22; /*0x10088d7b5*/
          if ( v10 ) /*0x10088d7b8*/
            goto LABEL_54; /*0x10088d7b8*/
          v23 = &v17[v22]; /*0x10088d7c3*/
          memcpy(v17, *(const void **)(v20 + v21 + 32), v22); /*0x10088d7c7*/
          v21 += 24; /*0x10088d7cc*/
          v17 = v23; /*0x10088d7d0*/
          if ( v59 == v21 ) /*0x10088d7d7*/
            goto LABEL_52; /*0x10088d7d7*/
        }
      case 1uLL: /*0x10088d79c*/
        if ( a3 == 1 ) /*0x10088d906*/
          goto LABEL_52; /*0x10088d906*/
        v40 = 0; /*0x10088d90c*/
        while ( v18 ) /*0x10088d913*/
        {
          v41 = *(const void **)(v20 + v40 + 32); /*0x10088d919*/
          v42 = *(_QWORD *)(v20 + v40 + 40); /*0x10088d91e*/
          v43 = v18 - 1; /*0x10088d923*/
          *v17 = *(_BYTE *)v58; /*0x10088d92d*/
          v10 = v43 < v42; /*0x10088d92f*/
          v18 = v43 - v42; /*0x10088d92f*/
          if ( v10 ) /*0x10088d932*/
            break; /*0x10088d932*/
          v44 = (__int64)&v17[v42 + 1]; /*0x10088d938*/
          memcpy(v17 + 1, v41, v42); /*0x10088d940*/
          v40 += 24; /*0x10088d945*/
          v17 = (_BYTE *)v44; /*0x10088d949*/
          if ( v59 == v40 ) /*0x10088d950*/
            goto LABEL_52; /*0x10088d950*/
        }
        goto LABEL_54; /*0x10088d932*/
      case 2uLL: /*0x10088d79c*/
        if ( a3 == 1 ) /*0x10088d83d*/
          goto LABEL_52; /*0x10088d83d*/
        v29 = 0; /*0x10088d843*/
        while ( v18 >= 2 ) /*0x10088d854*/
        {
          v30 = *(const void **)(v20 + v29 + 32); /*0x10088d85a*/
          v31 = *(_QWORD *)(v20 + v29 + 40); /*0x10088d85f*/
          v32 = v18 - 2; /*0x10088d864*/
          *(_WORD *)v17 = *(_WORD *)v58; /*0x10088d86f*/
          v10 = v32 < v31; /*0x10088d872*/
          v18 = v32 - v31; /*0x10088d872*/
          if ( v10 ) /*0x10088d875*/
            break; /*0x10088d875*/
          v33 = (__int64)&v17[v31 + 2]; /*0x10088d87b*/
          memcpy(v17 + 2, v30, v31); /*0x10088d884*/
          v29 += 24; /*0x10088d889*/
          v17 = (_BYTE *)v33; /*0x10088d88d*/
          if ( v59 == v29 ) /*0x10088d894*/
            goto LABEL_52; /*0x10088d894*/
        }
        goto LABEL_54; /*0x10088d875*/
      case 3uLL: /*0x10088d79c*/
        if ( a3 == 1 ) /*0x10088d89f*/
          goto LABEL_52; /*0x10088d89f*/
        v34 = 0; /*0x10088d8a5*/
        while ( v18 >= 3 ) /*0x10088d8b4*/
        {
          v35 = *(const void **)(v20 + v34 + 32); /*0x10088d8ba*/
          v36 = *(_QWORD *)(v20 + v34 + 40); /*0x10088d8bf*/
          v37 = v18 - 3; /*0x10088d8c4*/
          v38 = v58; /*0x10088d8c8*/
          v17[2] = *((_BYTE *)v58 + 2); /*0x10088d8d0*/
          *(_WORD *)v17 = *v38; /*0x10088d8d6*/
          v10 = v37 < v36; /*0x10088d8d9*/
          v18 = v37 - v36; /*0x10088d8d9*/
          if ( v10 ) /*0x10088d8dc*/
            break; /*0x10088d8dc*/
          v39 = (__int64)&v17[v36 + 3]; /*0x10088d8e2*/
          memcpy(v17 + 3, v35, v36); /*0x10088d8eb*/
          v34 += 24; /*0x10088d8f0*/
          v17 = (_BYTE *)v39; /*0x10088d8f4*/
          if ( v59 == v34 ) /*0x10088d8fb*/
            goto LABEL_52; /*0x10088d8fb*/
        }
        goto LABEL_54; /*0x10088d8dc*/
      case 4uLL: /*0x10088d79c*/
        if ( a3 == 1 ) /*0x10088d7e2*/
          goto LABEL_52; /*0x10088d7e2*/
        v24 = 0; /*0x10088d7e8*/
        while ( v18 >= 4 ) /*0x10088d7f4*/
        {
          v25 = *(const void **)(v20 + v24 + 32); /*0x10088d7fa*/
          v26 = *(_QWORD *)(v20 + v24 + 40); /*0x10088d7ff*/
          v27 = v18 - 4; /*0x10088d804*/
          *(_DWORD *)v17 = *(_DWORD *)v58; /*0x10088d80e*/
          v10 = v27 < v26; /*0x10088d810*/
          v18 = v27 - v26; /*0x10088d810*/
          if ( v10 ) /*0x10088d813*/
            break; /*0x10088d813*/
          v28 = (__int64)&v17[v26 + 4]; /*0x10088d819*/
          memcpy(v17 + 4, v25, v26); /*0x10088d822*/
          v24 += 24; /*0x10088d827*/
          v17 = (_BYTE *)v28; /*0x10088d82b*/
          if ( v59 == v24 ) /*0x10088d832*/
            goto LABEL_52; /*0x10088d832*/
        }
        goto LABEL_54; /*0x10088d813*/
      default:
        v45 = v57; /*0x10088d958*/
        if ( a3 == 1 ) /*0x10088d95c*/
          goto LABEL_52; /*0x10088d95c*/
        v46 = 0; /*0x10088d95e*/
        do /*0x10088d9bb*/
        {
          v10 = v18 < v19; /*0x10088d960*/
          v47 = v18 - v19; /*0x10088d960*/
          if ( v10 /*0x10088d992*/
            || (__src = *(void **)(v45 + v46 + 32),
                v48 = *(_QWORD *)(v45 + v46 + 40),
                __n = (size_t)v17,
                memcpy(v17, v58, v19),
                v10 = v47 < v48,
                v18 = v47 - v48,
                v10) )
          {
LABEL_54:
            core::panicking::panic_fmt::h3a793735daf6e4ec((__int64)&unk_10159AB6C, 19, (__int64)&off_10189C6F8); /*0x10088d9ed*/
          }
          v49 = (void *)(v19 + __n); /*0x10088d994*/
          __n += v19 + v48; /*0x10088d99b*/
          memcpy(v49, __src, v48); /*0x10088d9a6*/
          v46 += 24; /*0x10088d9ab*/
          v17 = (_BYTE *)__n; /*0x10088d9af*/
          v45 = v57; /*0x10088d9b3*/
        }
        while ( v59 != v46 ); /*0x10088d9bb*/
LABEL_52:
        v55 = v8 - v18; /*0x10088d9bd*/
        v5 = a1; /*0x10088d9c4*/
        a1[2] = v55; /*0x10088d9c8*/
        v50 = v53; /*0x10088d9cc*/
        a1[1] = v54; /*0x10088d9d4*/
        *a1 = v50; /*0x10088d9d8*/
        break; /*0x10088d9d8*/
    }
  }
  else
  {
    *a1 = 0; /*0x10088d6de*/
    a1[1] = 1; /*0x10088d6e5*/
    a1[2] = 0; /*0x10088d6ed*/
  }
  return v5; /*0x10088d9de*/
}