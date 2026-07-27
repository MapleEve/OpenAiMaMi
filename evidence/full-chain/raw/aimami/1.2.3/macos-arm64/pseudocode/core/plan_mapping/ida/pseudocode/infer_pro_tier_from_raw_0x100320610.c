// __ZN13codexmate_lib4core12plan_mapping23infer_pro_tier_from_raw @ 0x100320610 | 基线 same-set
__int64 __fastcall codexmate_lib::core::plan_mapping::infer_pro_tier_from_raw::h64a24cf0108a3263(
        __int64 a1,
        __int64 a2)
{
  unsigned int v2; // r12d
  __int64 v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rbx
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rsi
  _QWORD *v13; // r13
  __int64 v14; // rsi
  __int64 v16; // [rsp+8h] [rbp-58h] BYREF
  __int64 v17; // [rsp+10h] [rbp-50h]
  __int64 v18; // [rsp+18h] [rbp-48h]
  __int64 v19; // [rsp+20h] [rbp-40h] BYREF
  void *__s1; // [rsp+28h] [rbp-38h]
  __int64 v21; // [rsp+30h] [rbp-30h]

  v3 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a1, a2); /*0x100320627*/
  alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(&v19, v3, v4); /*0x100320633*/
  v5 = __s1; /*0x100320638*/
  v6 = v21; /*0x10032063c*/
  LOBYTE(v2) = 2; /*0x100320657*/
  if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x100320674*/
                          "prolitechatgptprolitepro",
                          7u,
                          __s1)
    || (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698(
                          "chatgptprolitepro",
                          0xEu,
                          v5) )
  {
    goto LABEL_28; /*0x10032067b*/
  }
  if ( v6 == 12 ) /*0x100320685*/
  {
    if ( *v5 ^ 0x69737365666F7270LL | *((unsigned int *)v5 + 2) ^ 0x6C616E6FLL ) /*0x10032078b*/
      goto LABEL_6; /*0x10032078e*/
LABEL_18:
    LOBYTE(v2) = 3; /*0x100320794*/
    v12 = v19; /*0x100320797*/
    if ( !v19 ) /*0x10032079e*/
      return v2; /*0x10032079e*/
    goto LABEL_29; /*0x10032079e*/
  }
  if ( v6 == 3 && !(*(_WORD *)v5 ^ 0x7270 | *((unsigned __int8 *)v5 + 2) ^ 0x6F) ) /*0x1003206a3*/
    goto LABEL_18; /*0x1003206a3*/
LABEL_6:
  LOBYTE(v2) = 3; /*0x1003206a9*/
  if ( (unsigned __int8)_$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h62e4a94c27d2c698( /*0x1003206bb*/
                          "chatgptpro",
                          0xAu,
                          v5) )
    goto LABEL_28; /*0x1003206c5*/
  codexmate_lib::core::plan_mapping::normalize_tokens::h379cb369d4bf0dc0(&v16, a1, a2); /*0x1003206d5*/
  v7 = v17; /*0x1003206da*/
  v8 = v18; /*0x1003206de*/
  if ( !v18 ) /*0x1003206e5*/
  {
    LOBYTE(v2) = 9; /*0x1003207d2*/
LABEL_26:
    if ( v16 ) /*0x1003207dc*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, 24 * v16, 8); /*0x1003207ee*/
LABEL_28:
    v12 = v19; /*0x1003207f3*/
    if ( !v19 ) /*0x1003207fa*/
      return v2; /*0x1003207fa*/
LABEL_29:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v12, 1); /*0x1003207fc*/
    return v2; /*0x100320804*/
  }
  v9 = 24 * v18; /*0x1003206f3*/
  v10 = 0; /*0x1003206f7*/
  while ( *(_QWORD *)(v17 + v10 + 16) != 3 /*0x10032072d*/
       || **(_WORD **)(v17 + v10 + 8) ^ 0x7270 | *(unsigned __int8 *)(*(_QWORD *)(v17 + v10 + 8) + 2LL) ^ 0x6F )
  {
    v10 += 24; /*0x100320700*/
    if ( v9 == v10 ) /*0x100320707*/
    {
      LOBYTE(v2) = 9; /*0x1003207a2*/
LABEL_21:
      v13 = (_QWORD *)(v7 + 8); /*0x1003207a5*/
      do /*0x1003207b7*/
      {
        v14 = *(v13 - 1); /*0x1003207b9*/
        if ( v14 ) /*0x1003207c0*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v13, v14, 1); /*0x1003207cb*/
        v13 += 3; /*0x1003207b0*/
        --v8; /*0x1003207b4*/
      }
      while ( v8 ); /*0x1003207b7*/
      goto LABEL_26; /*0x1003207b7*/
    }
  }
  v11 = 0; /*0x10032072f*/
  do /*0x100320747*/
  {
    if ( *(_QWORD *)(v17 + v11 + 16) == 3 /*0x10032076a*/
      && !(**(_WORD **)(v17 + v11 + 8) ^ 0x3032 | *(unsigned __int8 *)(*(_QWORD *)(v17 + v11 + 8) + 2LL) ^ 0x78) )
    {
      LOBYTE(v2) = 3; /*0x10032076f*/
      goto LABEL_21; /*0x100320772*/
    }
    v11 += 24; /*0x100320740*/
  }
  while ( v9 != v11 ); /*0x100320747*/
  LOBYTE(v2) = 2; /*0x100320832*/
  if ( (unsigned __int8)codexmate_lib::core::plan_mapping::tokens_contain::ha0eebb87f1f65e42( /*0x10032082d*/
                          v17,
                          v18,
                          &unk_1015E3C87,
                          2u) )
    goto LABEL_21; /*0x10032082d*/
  LOBYTE(v2) = 3; /*0x10032084f*/
  if ( codexmate_lib::core::plan_mapping::tokens_contain_number::h9ae30474bd3c20a4(v7, v8, byte_1015E3C89) ) /*0x10032084a*/
    goto LABEL_21; /*0x10032084a*/
  LOBYTE(v2) = 2; /*0x10032086c*/
  if ( codexmate_lib::core::plan_mapping::tokens_contain_number::h9ae30474bd3c20a4(v7, v8, byte_1015E3C8C) ) /*0x100320867*/
    goto LABEL_21; /*0x100320871*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayActiveByIde$GT$::h1b9199b71a2a5ac6(&v16); /*0x10032087b*/
  v12 = v19; /*0x100320880*/
  LOBYTE(v2) = 9; /*0x100320884*/
  if ( v19 ) /*0x10032088a*/
    goto LABEL_29; /*0x10032088a*/
  return v2; /*0x10032080c*/
}