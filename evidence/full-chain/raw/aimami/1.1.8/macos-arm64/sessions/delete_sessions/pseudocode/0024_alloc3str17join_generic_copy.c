// mac 1.1.8 delete_sessions node va=0x1006ad350 depth=1
// alloc3str17join_generic_copy
signed __int64 *__fastcall alloc::str::join_generic_copy::hf183b70a1ae88120(
        signed __int64 *a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        size_t a5)
{
  signed __int64 *v5; // rbx
  __int64 v6; // rcx
  signed __int64 v7; // r14
  __int64 v8; // r12
  __int64 v9; // rax
  bool v10; // cf
  __int64 v11; // r15
  __int64 v12; // rax
  size_t v13; // rdx
  unsigned __int64 v14; // r15
  size_t v15; // rbx
  size_t v16; // r15
  _BYTE *v17; // rdi
  unsigned __int64 v18; // rbx
  size_t v19; // rdx
  char *v20; // r15
  size_t v21; // rdx
  _BYTE *v22; // r12
  __int64 v23; // r13
  const void *v24; // rsi
  size_t v25; // rdx
  size_t v26; // rbx
  __int64 v27; // r15
  __int64 v28; // r13
  const void *v29; // rsi
  size_t v30; // rdx
  size_t v31; // rbx
  __int64 v32; // r15
  __int64 v33; // r13
  const void *v34; // rsi
  size_t v35; // rdx
  size_t v36; // rbx
  _WORD *v37; // rcx
  __int64 v38; // r15
  __int64 v39; // r13
  const void *v40; // rsi
  size_t v41; // rdx
  size_t v42; // rbx
  __int64 v43; // r15
  size_t v44; // rbx
  size_t v45; // r15
  _BYTE *v46; // r13
  signed __int64 v47; // rax
  void *__src; // [rsp+0h] [rbp-80h]
  signed __int64 v51; // [rsp+10h] [rbp-70h] BYREF
  __int64 v52; // [rsp+18h] [rbp-68h]
  unsigned __int64 v53; // [rsp+20h] [rbp-60h]
  size_t __n; // [rsp+28h] [rbp-58h]
  void *v55; // [rsp+30h] [rbp-50h]
  size_t v56; // [rsp+38h] [rbp-48h]
  void *v57; // [rsp+40h] [rbp-40h]
  __int64 v58; // [rsp+48h] [rbp-38h]
  __int64 v59; // [rsp+50h] [rbp-30h]

  v57 = a4; /*0x1006ad361*/
  v5 = a1; /*0x1006ad365*/
  if ( a3 ) /*0x1006ad36b*/
  {
    v59 = a3; /*0x1006ad371*/
    v6 = 16 * a3; /*0x1006ad378*/
    v55 = (void *)(16 * a3 - 16); /*0x1006ad380*/
    __n = a5; /*0x1006ad388*/
    if ( !is_mul_ok((unsigned __int64)v55 >> 4, a5) ) /*0x1006ad392*/
LABEL_6:
      core::option::expect_failed::ha75f8bdcbd673567( /*0x1006ad3c3*/
        "attempt to join into collection with len > usize::MAX_root_EventTargetinternally tagged enum EventTargetdata did not match any variant of untagged enum JsImage",
        53,
        &off_101537340);
    v7 = ((unsigned __int64)v55 >> 4) * a5; /*0x1006ad397*/
    v58 = a2 + v6; /*0x1006ad39e*/
    v8 = a2 + 16; /*0x1006ad3a2*/
    v9 = a2; /*0x1006ad3a6*/
    while ( v6 ) /*0x1006ad3b3*/
    {
      v6 -= 16; /*0x1006ad3b5*/
      v10 = __CFADD__(*(_QWORD *)(v9 + 8), v7); /*0x1006ad3b9*/
      v7 += *(_QWORD *)(v9 + 8); /*0x1006ad3b9*/
      v9 += 16; /*0x1006ad3bd*/
      if ( v10 ) /*0x1006ad3c1*/
        goto LABEL_6; /*0x1006ad3c1*/
    }
    if ( v7 < 0 ) /*0x1006ad3de*/
    {
      v11 = 0; /*0x1006ad3e0*/
      goto LABEL_9; /*0x1006ad3e0*/
    }
    if ( v7 ) /*0x1006ad40a*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006ad40c*/
      v11 = 1; /*0x1006ad411*/
      v12 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1u); /*0x1006ad41f*/
      if ( !v12 ) /*0x1006ad427*/
LABEL_9:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v11, v7); /*0x1006ad3e3*/
    }
    else
    {
      v12 = 1; /*0x1006ad42b*/
    }
    v51 = v7; /*0x1006ad430*/
    v52 = v12; /*0x1006ad434*/
    v53 = 0; /*0x1006ad438*/
    __src = *(void **)a2; /*0x1006ad444*/
    v13 = *(_QWORD *)(a2 + 8); /*0x1006ad448*/
    if ( v13 > v7 ) /*0x1006ad453*/
    {
      v56 = *(_QWORD *)(a2 + 8); /*0x1006ad709*/
      alloc::raw_vec::RawVecInner$LT$A$GT$::reserve::do_reserve_and_handle::h892390e391f1ba4c(&v51, 0, v13, 1, 1); /*0x1006ad70d*/
      v12 = v52; /*0x1006ad712*/
      v14 = v53; /*0x1006ad716*/
      v13 = v56; /*0x1006ad71a*/
    }
    else
    {
      v14 = 0; /*0x1006ad459*/
    }
    v56 = v12; /*0x1006ad45c*/
    v15 = v13; /*0x1006ad468*/
    memcpy((void *)(v12 + v14), __src, v13); /*0x1006ad46b*/
    v16 = v15 + v14; /*0x1006ad474*/
    v17 = (_BYTE *)(v16 + v56); /*0x1006ad477*/
    v18 = v7 - v16; /*0x1006ad47d*/
    v19 = __n; /*0x1006ad480*/
    switch ( __n ) /*0x1006ad49c*/
    {
      case 0uLL: /*0x1006ad49c*/
        if ( v59 == 1 ) /*0x1006ad4a3*/
          goto LABEL_51; /*0x1006ad4a3*/
        v20 = nullptr; /*0x1006ad4a9*/
        while ( 1 ) /*0x1006ad4b0*/
        {
          v21 = *(_QWORD *)&v20[a2 + 24]; /*0x1006ad4b0*/
          v10 = v18 < v21; /*0x1006ad4b5*/
          v18 -= v21; /*0x1006ad4b5*/
          if ( v10 ) /*0x1006ad4b8*/
            goto LABEL_53; /*0x1006ad4b8*/
          v22 = &v17[v21]; /*0x1006ad4c3*/
          memcpy(v17, *(const void **)&v20[a2 + 16], v21); /*0x1006ad4c7*/
          v20 += 16; /*0x1006ad4cc*/
          v17 = v22; /*0x1006ad4d0*/
          if ( v55 == v20 ) /*0x1006ad4d7*/
            goto LABEL_51; /*0x1006ad4d7*/
        }
      case 1uLL: /*0x1006ad49c*/
        if ( v59 == 1 ) /*0x1006ad605*/
          goto LABEL_51; /*0x1006ad605*/
        v39 = v58; /*0x1006ad60b*/
        while ( v18 ) /*0x1006ad613*/
        {
          v40 = *(const void **)v8; /*0x1006ad619*/
          v41 = *(_QWORD *)(v8 + 8); /*0x1006ad61d*/
          v42 = v18 - 1; /*0x1006ad622*/
          *v17 = *(_BYTE *)v57; /*0x1006ad62c*/
          v10 = v42 < v41; /*0x1006ad62e*/
          v18 = v42 - v41; /*0x1006ad62e*/
          if ( v10 ) /*0x1006ad631*/
            break; /*0x1006ad631*/
          v43 = (__int64)&v17[v41 + 1]; /*0x1006ad637*/
          memcpy(v17 + 1, v40, v41); /*0x1006ad63f*/
          v8 += 16; /*0x1006ad644*/
          v17 = (_BYTE *)v43; /*0x1006ad648*/
          if ( v8 == v39 ) /*0x1006ad64e*/
            goto LABEL_51; /*0x1006ad64e*/
        }
        goto LABEL_53; /*0x1006ad631*/
      case 2uLL: /*0x1006ad49c*/
        if ( v59 == 1 ) /*0x1006ad53c*/
          goto LABEL_51; /*0x1006ad53c*/
        v28 = v58; /*0x1006ad542*/
        while ( v18 >= 2 ) /*0x1006ad554*/
        {
          v29 = *(const void **)v8; /*0x1006ad55a*/
          v30 = *(_QWORD *)(v8 + 8); /*0x1006ad55e*/
          v31 = v18 - 2; /*0x1006ad563*/
          *(_WORD *)v17 = *(_WORD *)v57; /*0x1006ad56e*/
          v10 = v31 < v30; /*0x1006ad571*/
          v18 = v31 - v30; /*0x1006ad571*/
          if ( v10 ) /*0x1006ad574*/
            break; /*0x1006ad574*/
          v32 = (__int64)&v17[v30 + 2]; /*0x1006ad57a*/
          memcpy(v17 + 2, v29, v30); /*0x1006ad583*/
          v8 += 16; /*0x1006ad588*/
          v17 = (_BYTE *)v32; /*0x1006ad58c*/
          if ( v8 == v28 ) /*0x1006ad592*/
            goto LABEL_51; /*0x1006ad592*/
        }
        goto LABEL_53; /*0x1006ad574*/
      case 3uLL: /*0x1006ad49c*/
        if ( v59 == 1 ) /*0x1006ad59e*/
          goto LABEL_51; /*0x1006ad59e*/
        v33 = v58; /*0x1006ad5a4*/
        while ( v18 >= 3 ) /*0x1006ad5b4*/
        {
          v34 = *(const void **)v8; /*0x1006ad5ba*/
          v35 = *(_QWORD *)(v8 + 8); /*0x1006ad5be*/
          v36 = v18 - 3; /*0x1006ad5c3*/
          v37 = v57; /*0x1006ad5c7*/
          v17[2] = *((_BYTE *)v57 + 2); /*0x1006ad5cf*/
          *(_WORD *)v17 = *v37; /*0x1006ad5d5*/
          v10 = v36 < v35; /*0x1006ad5d8*/
          v18 = v36 - v35; /*0x1006ad5d8*/
          if ( v10 ) /*0x1006ad5db*/
            break; /*0x1006ad5db*/
          v38 = (__int64)&v17[v35 + 3]; /*0x1006ad5e1*/
          memcpy(v17 + 3, v34, v35); /*0x1006ad5ea*/
          v8 += 16; /*0x1006ad5ef*/
          v17 = (_BYTE *)v38; /*0x1006ad5f3*/
          if ( v8 == v33 ) /*0x1006ad5f9*/
            goto LABEL_51; /*0x1006ad5f9*/
        }
        goto LABEL_53; /*0x1006ad5db*/
      case 4uLL: /*0x1006ad49c*/
        if ( v59 == 1 ) /*0x1006ad4e3*/
          goto LABEL_51; /*0x1006ad4e3*/
        v23 = v58; /*0x1006ad4e9*/
        while ( v18 >= 4 ) /*0x1006ad4f4*/
        {
          v24 = *(const void **)v8; /*0x1006ad4fa*/
          v25 = *(_QWORD *)(v8 + 8); /*0x1006ad4fe*/
          v26 = v18 - 4; /*0x1006ad503*/
          *(_DWORD *)v17 = *(_DWORD *)v57; /*0x1006ad50d*/
          v10 = v26 < v25; /*0x1006ad50f*/
          v18 = v26 - v25; /*0x1006ad50f*/
          if ( v10 ) /*0x1006ad512*/
            break; /*0x1006ad512*/
          v27 = (__int64)&v17[v25 + 4]; /*0x1006ad518*/
          memcpy(v17 + 4, v24, v25); /*0x1006ad521*/
          v8 += 16; /*0x1006ad526*/
          v17 = (_BYTE *)v27; /*0x1006ad52a*/
          if ( v8 == v23 ) /*0x1006ad530*/
            goto LABEL_51; /*0x1006ad530*/
        }
        goto LABEL_53; /*0x1006ad512*/
      default:
        if ( v59 == 1 ) /*0x1006ad657*/
          goto LABEL_51; /*0x1006ad657*/
        do /*0x1006ad6ac*/
        {
          v10 = v18 < v19; /*0x1006ad660*/
          v44 = v18 - v19; /*0x1006ad660*/
          if ( v10 /*0x1006ad685*/
            || (v55 = *(void **)v8,
                v45 = *(_QWORD *)(v8 + 8),
                memcpy(v17, v57, v19),
                v10 = v44 < v45,
                v18 = v44 - v45,
                v10) )
          {
LABEL_53:
            core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1006ad6de*/
              (__int64)"mid > lencalled `Result::unwrap()` on an `Err` valueErrorOneTwoFourEightSixteenattempt to join into collection with len > usize::MAX_root_EventTargetinternally tagged enum EventTargetdata did not match any variant of untagged enum JsImage",
              19,
              (__int64)&off_101537328);
          }
          v46 = &v17[__n + v45]; /*0x1006ad68d*/
          memcpy(&v17[__n], v55, v45); /*0x1006ad698*/
          v19 = __n; /*0x1006ad69d*/
          v8 += 16; /*0x1006ad6a1*/
          v17 = v46; /*0x1006ad6a5*/
        }
        while ( v8 != v58 ); /*0x1006ad6ac*/
LABEL_51:
        v53 = v7 - v18; /*0x1006ad6ae*/
        v5 = a1; /*0x1006ad6b5*/
        a1[2] = v53; /*0x1006ad6b9*/
        v47 = v51; /*0x1006ad6bd*/
        a1[1] = v52; /*0x1006ad6c5*/
        *a1 = v47; /*0x1006ad6c9*/
        break; /*0x1006ad6c9*/
    }
  }
  else
  {
    *a1 = 0; /*0x1006ad3ee*/
    a1[1] = 1; /*0x1006ad3f5*/
    a1[2] = 0; /*0x1006ad3fd*/
  }
  return v5; /*0x1006ad6cf*/
}