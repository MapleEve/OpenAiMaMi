// __ZN13codexmate_lib4core5relay10translator25split_leading_think_block @ 0x1008606e0 | 基线 same-set
void **__fastcall codexmate_lib::core::relay::translator::split_leading_think_block::h4ed0c1254350f15e(
        void **a1,
        __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r15
  char **v8; // r8
  __int64 v9; // rsi
  unsigned __int64 v10; // r12
  void *v11; // rdi
  void *v13; // rax
  void *v14; // rdx
  __int64 v15; // r15
  void *v16; // r12
  __int64 v17; // rax
  __int64 v18; // rdi
  unsigned __int64 v19; // r15
  unsigned __int8 *v20; // rsi
  unsigned __int8 *v21; // rax
  unsigned __int8 *v22; // r14
  unsigned __int8 *v23; // r10
  unsigned __int8 *v24; // rcx
  int v25; // edi
  int v26; // edx
  int v27; // edx
  int v28; // r9d
  int v29; // r8d
  unsigned __int8 *v30; // rsi
  signed __int64 v31; // r12
  __int64 v32; // r15
  __int64 v33; // r14
  __int64 v34; // rax
  void *v35; // rax
  _BYTE v36[104]; // [rsp+8h] [rbp-B8h] BYREF
  char v37[8]; // [rsp+70h] [rbp-50h] BYREF
  __int64 v38; // [rsp+78h] [rbp-48h]
  __int64 v39; // [rsp+88h] [rbp-38h]
  void *__src; // [rsp+90h] [rbp-30h]

  core::str::_$LT$impl$u20$str$GT$::trim_start_matches::ha4d1bf7ea9e5aa1f(a2, a3); /*0x100860703*/
  v7 = a3 - v6; /*0x10086070b*/
  if ( a3 == v6 ) /*0x10086070e*/
    goto LABEL_4; /*0x10086070e*/
  if ( v7 >= a3 ) /*0x100860713*/
  {
    if ( !v6 ) /*0x10086075f*/
      goto LABEL_20; /*0x10086075f*/
LABEL_11:
    v8 = &off_10196CA58; /*0x100860761*/
LABEL_12:
    core::str::slice_error_fail::h480e51fbd8b15eba(a2, a3, v7, a3, v8); /*0x100860768*/
  }
  if ( *(char *)(a2 + v7) < -64 ) /*0x10086071a*/
    goto LABEL_11; /*0x10086071a*/
LABEL_4:
  if ( v6 < 7 || *(_DWORD *)(a2 + v7) ^ 0x6968743C | *(_DWORD *)(a2 + v7 + 3) ^ 0x3E6B6E69 ) /*0x100860739*/
    goto LABEL_20; /*0x100860739*/
  v7 += 7LL; /*0x100860741*/
  if ( v7 ) /*0x100860745*/
  {
    if ( a3 <= v7 ) /*0x10086074a*/
    {
      if ( a3 != v7 ) /*0x100860779*/
        goto LABEL_9; /*0x100860779*/
    }
    else if ( *(char *)(a2 + v7) <= -65 ) /*0x100860751*/
    {
LABEL_9:
      v8 = &off_10196CA70; /*0x100860753*/
      goto LABEL_12; /*0x10086075a*/
    }
  }
  __src = (void *)(a2 + v7); /*0x10086079c*/
  core::str::pattern::StrSearcher::new::h63b1ff96ad2adbd2(v36, a2 + v7, a3 - v7, &unk_1016021B0, 8); /*0x1008607a0*/
  _$LT$core..str..pattern..StrSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::h14488f79cfb82bb5( /*0x1008607ac*/
    v37,
    v36);
  if ( !v37[0] ) /*0x1008607b5*/
  {
LABEL_20:
    *a1 = (void *)0x8000000000000000LL; /*0x1008607d8*/
    return a1; /*0x1008607e2*/
  }
  v9 = v38; /*0x1008607b7*/
  v10 = v7 + v38; /*0x1008607be*/
  v11 = __src; /*0x1008607c1*/
  if ( __CFADD__(v7, v38) ) /*0x1008607c5*/
    goto LABEL_26; /*0x1008607c5*/
  if ( v7 ) /*0x1008607ca*/
  {
    if ( a3 <= v7 ) /*0x1008607cf*/
    {
      if ( a3 != v7 ) /*0x1008607fa*/
        goto LABEL_26; /*0x1008607fa*/
    }
    else if ( *(char *)__src <= -65 ) /*0x1008607d4*/
    {
LABEL_26:
      core::str::slice_error_fail::h480e51fbd8b15eba(a2, a3, v7, v7 + v38, &off_10196CA88); /*0x10086080d*/
    }
  }
  if ( v10 ) /*0x1008607ff*/
  {
    if ( v10 >= a3 ) /*0x100860804*/
    {
      if ( v10 != a3 ) /*0x100860825*/
        goto LABEL_26; /*0x100860825*/
    }
    else if ( *(char *)(a2 + v10) <= -65 ) /*0x10086080b*/
    {
      goto LABEL_26; /*0x10086080b*/
    }
  }
  v13 = (void *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(__src, v38); /*0x100860827*/
  if ( (__int64)v14 < 0 ) /*0x10086082f*/
  {
    v15 = 0; /*0x100860831*/
    goto LABEL_30; /*0x100860831*/
  }
  if ( v14 ) /*0x10086083f*/
  {
    v39 = v10; /*0x100860841*/
    __src = v13; /*0x100860845*/
    v16 = v14; /*0x100860849*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v11, v9); /*0x10086084c*/
    v15 = 1; /*0x100860851*/
    v17 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v16, 1); /*0x10086085f*/
    v14 = v16; /*0x100860864*/
    if ( !v17 ) /*0x10086086a*/
LABEL_30:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v15, v14); /*0x100860834*/
    v18 = v17; /*0x10086086c*/
    v13 = __src; /*0x10086086f*/
    v10 = v39; /*0x100860873*/
  }
  else
  {
    v18 = 1; /*0x100860879*/
  }
  v19 = v10 + 8; /*0x10086087e*/
  v39 = v18; /*0x100860883*/
  __src = v14; /*0x10086088a*/
  memcpy((void *)v18, v13, (size_t)v14); /*0x10086088e*/
  if ( v10 != -8 ) /*0x100860896*/
  {
    if ( a3 <= v19 ) /*0x10086089b*/
    {
      if ( a3 != v19 ) /*0x1008608c1*/
LABEL_38:
        core::str::slice_error_fail::h480e51fbd8b15eba(a2, a3, v10 + 8, a3, &off_10196CAA0); /*0x1008608a4*/
    }
    else if ( *(char *)(a2 + v19) <= -65 ) /*0x1008608a2*/
    {
      goto LABEL_38; /*0x1008608a2*/
    }
  }
  v20 = (unsigned __int8 *)(a2 + v19); /*0x1008608c3*/
  v21 = (unsigned __int8 *)(a3 - v19); /*0x1008608cd*/
  if ( a3 == v19 ) /*0x1008608d0*/
    goto LABEL_57; /*0x1008608d0*/
  v22 = (unsigned __int8 *)(a3 + a2); /*0x1008608d6*/
  v21 = nullptr; /*0x1008608d9*/
  v23 = v20; /*0x1008608db*/
  do /*0x1008608e9*/
  {
    v24 = v23; /*0x1008608ef*/
    v25 = *v23; /*0x1008608f2*/
    if ( (v25 & 0x80u) != 0 ) /*0x1008608f9*/
    {
      v27 = v25 & 0x1F; /*0x100860915*/
      v28 = v23[1] & 0x3F; /*0x10086091d*/
      if ( (unsigned __int8)v25 <= 0xDFu ) /*0x100860925*/
      {
        v23 += 2; /*0x10086096a*/
        v26 = v28 | (v27 << 6); /*0x100860971*/
        v18 = v26 & 0x1FFFFB; /*0x100860976*/
        if ( (_DWORD)v18 == 9 ) /*0x10086097f*/
          goto LABEL_42; /*0x10086097f*/
      }
      else
      {
        v29 = (v28 << 6) | v23[2] & 0x3F; /*0x100860934*/
        if ( (unsigned __int8)v25 < 0xF0u ) /*0x10086093b*/
        {
          v23 += 3; /*0x100860987*/
          v26 = v29 | (v27 << 12); /*0x10086098e*/
          v18 = v26 & 0x1FFFFB; /*0x100860993*/
          if ( (_DWORD)v18 == 9 ) /*0x10086099c*/
            goto LABEL_42; /*0x10086099c*/
        }
        else
        {
          v23 += 4; /*0x10086093d*/
          v26 = (v29 << 6) | v24[3] & 0x3F | ((v25 & 7) << 18); /*0x100860955*/
          v18 = (v29 << 6) & 0x1FFFFB | v24[3] & 0x3B | ((v25 & 7) << 18) & 0x1FFFFBu; /*0x100860959*/
          if ( (_DWORD)v18 == 9 ) /*0x100860962*/
            goto LABEL_42; /*0x100860962*/
        }
      }
    }
    else
    {
      ++v23; /*0x1008608fb*/
      v26 = v25; /*0x1008608ff*/
      v18 = v25 & 0x1FFFFB; /*0x100860903*/
      if ( (_DWORD)v18 == 9 ) /*0x10086090c*/
        goto LABEL_42; /*0x10086090c*/
    }
    if ( v26 != 10 && v26 != 32 ) /*0x1008609bc*/
      goto LABEL_57; /*0x1008609bc*/
LABEL_42:
    v21 = &v23[v21 - v24]; /*0x1008608e0*/
  }
  while ( v23 != v22 ); /*0x1008608e9*/
  v21 = (unsigned __int8 *)(a3 - v19); /*0x1008609c4*/
LABEL_57:
  v30 = &v20[(_QWORD)v21]; /*0x1008609c7*/
  v31 = a3 - v19 - (_QWORD)v21; /*0x1008609ca*/
  if ( v31 < 0 ) /*0x1008609cd*/
  {
    v32 = 0; /*0x1008609cf*/
    goto LABEL_59; /*0x1008609cf*/
  }
  v33 = 1; /*0x1008609df*/
  if ( v31 ) /*0x1008609e5*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v18, v30); /*0x1008609ea*/
    v32 = 1; /*0x1008609ef*/
    v34 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v31, 1); /*0x1008609fd*/
    if ( !v34 ) /*0x100860a05*/
LABEL_59:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v32, v31); /*0x1008609d2*/
    v33 = v34; /*0x100860a07*/
  }
  memcpy((void *)v33, v30, v31); /*0x100860a13*/
  v35 = __src; /*0x100860a18*/
  *a1 = __src; /*0x100860a1c*/
  a1[1] = (void *)v39; /*0x100860a23*/
  a1[2] = v35; /*0x100860a27*/
  a1[3] = (void *)v31; /*0x100860a2b*/
  a1[4] = (void *)v33; /*0x100860a2f*/
  a1[5] = (void *)v31; /*0x100860a33*/
  return a1; /*0x1008607e8*/
}