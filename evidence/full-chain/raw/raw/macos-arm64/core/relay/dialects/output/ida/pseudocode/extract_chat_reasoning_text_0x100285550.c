// __ZN13codexmate_lib4core5relay8dialects6output27extract_chat_reasoning_text @ 0x100285550 | 基线 same-set
signed __int64 *__fastcall codexmate_lib::core::relay::dialects::output::extract_chat_reasoning_text::h1f87b696d3d533fc(
        signed __int64 *a1,
        __int64 a2)
{
  char *v4; // rdi
  __int64 v5; // rsi
  __int64 v6; // rax
  signed __int64 v7; // r15
  const void *v8; // r14
  __int64 v9; // rax
  __int64 v10; // r12
  __int64 v11; // rax
  const void **v12; // rax
  __int64 v13; // r12
  __int64 v14; // rax
  void *v15; // rax
  signed __int64 v16; // r13

  v4 = "reasoning_contentreasoningreasoning_details\n\nparts"; /*0x100285564*/
  v5 = 17; /*0x10028556b*/
  v6 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100285573*/
         "reasoning_contentreasoningreasoning_details\n\nparts",
         17,
         a2);
  if ( v6 && *(_BYTE *)v6 == 3 && (v7 = *(_QWORD *)(v6 + 24)) != 0 /*0x1002855b0*/
    || (v4 = "reasoningreasoning_details\n\nparts",
        v5 = 9,
        (v6 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(
                "reasoningreasoning_details\n\nparts",
                9,
                a2)) != 0)
    && *(_BYTE *)v6 == 3
    && (v7 = *(_QWORD *)(v6 + 24)) != 0 )
  {
    if ( v7 >= 0 ) /*0x1002855b5*/
    {
      v8 = *(const void **)(v6 + 16); /*0x1002855bb*/
      goto LABEL_26; /*0x1002855bf*/
    }
    goto LABEL_20; /*0x1002855b5*/
  }
  v9 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1002855d3*/
         "reasoningreasoning_details\n\nparts",
         9,
         a2);
  if ( v9 ) /*0x1002855db*/
  {
    v10 = v9; /*0x1002855e1*/
    v4 = "contentrelay translated stream failedtext/event-stream"; /*0x1002855e4*/
    v5 = 7; /*0x1002855eb*/
    v11 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1002855f3*/
            "contentrelay translated stream failedtext/event-stream",
            7,
            v9);
    if ( v11 ) /*0x1002855fb*/
    {
      if ( *(_BYTE *)v11 == 3 ) /*0x100285600*/
      {
        v7 = *(_QWORD *)(v11 + 24); /*0x100285602*/
        if ( v7 ) /*0x100285609*/
          goto LABEL_19; /*0x100285609*/
      }
    }
    v4 = "textdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x10028560b*/
    v5 = 4; /*0x100285612*/
    v11 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x10028561a*/
            "textdataunittypefullargsopenwithkindsavetrueuuidemitshowhide",
            4,
            v10);
    if ( v11 ) /*0x100285622*/
    {
      if ( *(_BYTE *)v11 == 3 ) /*0x100285627*/
      {
        v7 = *(_QWORD *)(v11 + 24); /*0x100285629*/
        if ( v7 ) /*0x100285630*/
          goto LABEL_19; /*0x100285630*/
      }
    }
    v4 = (char *)&unk_1015DD8E6; /*0x100285632*/
    v5 = 7; /*0x100285639*/
    v11 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f(&unk_1015DD8E6, 7, v10); /*0x100285641*/
    if ( v11 ) /*0x100285649*/
    {
      if ( *(_BYTE *)v11 == 3 ) /*0x10028564e*/
      {
        v7 = *(_QWORD *)(v11 + 24); /*0x100285650*/
        if ( v7 ) /*0x100285657*/
        {
LABEL_19:
          v12 = (const void **)(v11 + 16); /*0x100285659*/
          if ( v7 >= 0 ) /*0x100285660*/
          {
            v8 = *v12; /*0x1002856a8*/
LABEL_26:
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v4, v5); /*0x1002856ab*/
            v13 = 1; /*0x1002856b0*/
            v15 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x1002856be*/
            if ( v15 ) /*0x1002856c6*/
            {
              v16 = (signed __int64)v15; /*0x1002856c8*/
              memcpy(v15, v8, v7); /*0x1002856d4*/
              *a1 = v7; /*0x1002856d9*/
              a1[1] = v16; /*0x1002856dc*/
              a1[2] = v7; /*0x1002856e0*/
              return a1; /*0x1002856e0*/
            }
LABEL_21:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v13, v7); /*0x100285665*/
          }
LABEL_20:
          v13 = 0; /*0x100285662*/
          goto LABEL_21; /*0x100285662*/
        }
      }
    }
  }
  v14 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100285689*/
          "reasoning_details\n\nparts",
          17,
          a2);
  if ( !v14 /*0x1002856a1*/
    || (codexmate_lib::core::relay::dialects::output::extract_reasoning_details_text::h85ab030ce17d9ebd(a1, v14),
        *a1 == 0x8000000000000000LL) )
  {
    *a1 = 0x8000000000000000LL; /*0x1002856a3*/
  }
  return a1; /*0x1002856eb*/
}