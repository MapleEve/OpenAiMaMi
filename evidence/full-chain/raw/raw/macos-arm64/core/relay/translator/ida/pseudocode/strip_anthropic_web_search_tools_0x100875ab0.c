// __ZN13codexmate_lib4core5relay10translator32strip_anthropic_web_search_tools @ 0x100875ab0 | 基线 same-set
char __fastcall codexmate_lib::core::relay::translator::strip_anthropic_web_search_tools::hf53f6439255c07b9(_BYTE *a1)
{
  __int64 v1; // rax
  unsigned __int64 v2; // r14
  __int64 v3; // r15
  unsigned __int64 v4; // r15
  unsigned __int8 *v5; // rax
  unsigned __int8 *v6; // r14
  int v7; // eax
  __int64 v8; // rsi
  signed __int64 v9; // rax
  __int64 v11; // r15
  __int64 v12; // r12
  __int64 v13; // r15
  __int64 v14; // rax
  signed __int64 v15; // r13
  __int64 v16; // rsi
  void *v17; // rax
  void *v18; // rsi
  size_t v19; // r13
  size_t v20; // r13
  signed __int64 *v21; // r13
  signed __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // r15
  __int64 v25; // r13
  void *v26; // rax
  _DWORD *v27; // rax
  _QWORD v28[3]; // [rsp+8h] [rbp-108h] BYREF
  _QWORD v29[3]; // [rsp+20h] [rbp-F0h] BYREF
  _QWORD v30[2]; // [rsp+38h] [rbp-D8h] BYREF
  signed __int64 v31; // [rsp+48h] [rbp-C8h]
  signed __int64 v32; // [rsp+50h] [rbp-C0h] BYREF
  signed __int64 v33; // [rsp+58h] [rbp-B8h]
  signed __int64 v34; // [rsp+60h] [rbp-B0h]
  signed __int64 v35; // [rsp+68h] [rbp-A8h]
  signed __int64 v36; // [rsp+B8h] [rbp-58h] BYREF
  signed __int64 v37; // [rsp+C0h] [rbp-50h]
  signed __int64 v38; // [rsp+C8h] [rbp-48h]
  signed __int64 v39; // [rsp+D0h] [rbp-40h]
  size_t __n; // [rsp+D8h] [rbp-38h]
  void *__src; // [rsp+E0h] [rbp-30h]

  v1 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522(&unk_101674ECD, 5, a1); /*0x100875ad6*/
  if ( v1 && *(_BYTE *)v1 == 4 ) /*0x100875ae7*/
  {
    v2 = *(_QWORD *)(v1 + 24); /*0x100875af4*/
    v3 = v1; /*0x100875af8*/
    alloc::vec::Vec$LT$T$C$A$GT$::retain::h6d116a56d14cd35c(v1 + 8); /*0x100875afb*/
    v4 = *(_QWORD *)(v3 + 24); /*0x100875b00*/
    if ( !v4 && *a1 == 5 ) /*0x100875b0c*/
    {
      alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::remove::h603259a5723bfd5d( /*0x100875b25*/
        &v32,
        a1 + 8,
        &unk_101674ECD,
        5);
      if ( (_BYTE)v32 != 6 ) /*0x100875b31*/
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v32); /*0x100875b3a*/
    }
    if ( v4 < v2 ) /*0x100875b42*/
    {
      v5 = (unsigned __int8 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522( /*0x100875b57*/
                                "systeminstructions",
                                6,
                                a1);
      if ( !v5 ) /*0x100875b5f*/
      {
LABEL_14:
        codexmate_lib::core::relay::translator::normalize_anthropic_tool_choice_for_tools::hc02ad13318440a11(a1); /*0x100875bc3*/
        return 1; /*0x100875bcd*/
      }
      v6 = v5; /*0x100875b61*/
      v7 = *v5; /*0x100875b64*/
      if ( v7 != 4 ) /*0x100875b6a*/
      {
        if ( v7 == 3 ) /*0x100875b6f*/
        {
          codexmate_lib::core::relay::translator::remove_web_search_hint::h746cda0ae492b867( /*0x100875b87*/
            &v32,
            *((char **)v6 + 2),
            *((_QWORD *)v6 + 3));
          v8 = *((_QWORD *)v6 + 1); /*0x100875b8c*/
          if ( v8 ) /*0x100875b93*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)v6 + 2), v8, 1); /*0x100875b9e*/
          *((_QWORD *)v6 + 3) = v34; /*0x100875baa*/
          v9 = v32; /*0x100875bae*/
          *((_QWORD *)v6 + 2) = v33; /*0x100875bbc*/
          *((_QWORD *)v6 + 1) = v9; /*0x100875bc0*/
        }
        goto LABEL_14; /*0x100875bc0*/
      }
      v11 = *((_QWORD *)v6 + 3); /*0x100875be3*/
      if ( !v11 ) /*0x100875bea*/
      {
LABEL_33:
        alloc::vec::Vec$LT$T$C$A$GT$::retain::h66b3811c8218e784(v6 + 8); /*0x100875db2*/
        v23 = *((_QWORD *)v6 + 3); /*0x100875dbe*/
        if ( v23 ) /*0x100875dc5*/
        {
          v24 = *((_QWORD *)v6 + 2); /*0x100875dcb*/
          v25 = 32 * v23; /*0x100875dcf*/
          if ( !_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x100875df9*/
                  "cache_control",
                  13,
                  v24 + v25 - 32)
            && *(_BYTE *)(v24 + v25 - 32) == 5 )
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2("cache_control", 13); /*0x100875dff*/
            v26 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(13, 1); /*0x100875e0e*/
            if ( !v26 ) /*0x100875e16*/
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 13); /*0x100875fe7*/
            qmemcpy(v26, "cache_control", 13); /*0x100875e37*/
            v29[0] = 13; /*0x100875e3a*/
            v29[1] = v26; /*0x100875e45*/
            v29[2] = 13; /*0x100875e4c*/
            v30[0] = 0; /*0x100875e57*/
            v31 = 0; /*0x100875e62*/
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(13, 1); /*0x100875e6d*/
            v27 = (_DWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4, 1); /*0x100875e7c*/
            if ( !v27 ) /*0x100875e84*/
              alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 4); /*0x100875ff6*/
            *v27 = 1701869940; /*0x100875e8d*/
            v28[0] = 4; /*0x100875e93*/
            v28[1] = v27; /*0x100875e9e*/
            v28[2] = 4; /*0x100875ea5*/
            serde_json::value::to_value::h29e3c39dc75a9151(&v32, &off_10196CDA0); /*0x100875ebe*/
            if ( (_BYTE)v32 == 6 ) /*0x100875eca*/
            {
              v36 = v33; /*0x100875fa0*/
              core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100875fc2*/
                "called `Result::unwrap()` on an `Err` valueoffset_secondoffset_hourError",
                43,
                &v36,
                &off_10196D480,
                &off_10196CEC0);
            }
            v39 = v35; /*0x100875ed7*/
            v38 = v34; /*0x100875ee2*/
            v37 = v33; /*0x100875ef4*/
            v36 = v32; /*0x100875ef8*/
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de(&v32, v30, v28, &v36); /*0x100875f15*/
            if ( (_BYTE)v32 != 6 ) /*0x100875f21*/
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v32); /*0x100875f2a*/
            v33 = v30[0]; /*0x100875f44*/
            v34 = v30[1]; /*0x100875f4b*/
            v35 = v31; /*0x100875f59*/
            LOBYTE(v32) = 5; /*0x100875f60*/
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hc785ca22071d48de( /*0x100875f7c*/
              &v36,
              v25 + v24 - 24,
              v29,
              &v32);
            if ( (_BYTE)v36 != 6 ) /*0x100875f85*/
              core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v36); /*0x100875f8f*/
          }
        }
        goto LABEL_14; /*0x100875f94*/
      }
      v12 = *((_QWORD *)v6 + 2); /*0x100875bf0*/
      v13 = 32 * v11; /*0x100875bf4*/
      while ( 1 ) /*0x100875c28*/
      {
        v14 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into_mut::hc34f074e052da522( /*0x100875c28*/
                &anon_10420c9971c21f44d230d15b39fb3fec_110,
                4,
                v12);
        if ( !v14 || *(_BYTE *)v14 != 3 ) /*0x100875c35*/
          goto LABEL_19; /*0x100875c35*/
        v15 = *(_QWORD *)(v14 + 24); /*0x100875c37*/
        if ( v15 < 0 ) /*0x100875c3e*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(0, __src); /*0x100875dad*/
        v16 = *(_QWORD *)(v14 + 16); /*0x100875c44*/
        if ( !v15 ) /*0x100875c48*/
        {
          __src = (void *)1; /*0x100875cd9*/
          goto LABEL_19; /*0x100875cea*/
        }
        __src = *(void **)(v14 + 16); /*0x100875c4e*/
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2( /*0x100875c52*/
          &anon_10420c9971c21f44d230d15b39fb3fec_110,
          v16);
        __n = v15; /*0x100875c65*/
        v17 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v15, 1); /*0x100875c69*/
        if ( !v17 ) /*0x100875c71*/
        {
          __src = (void *)__n; /*0x100875fcd*/
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, __n); /*0x100875fd8*/
        }
        v18 = __src; /*0x100875c7a*/
        v19 = __n; /*0x100875c7e*/
        __src = v17; /*0x100875c85*/
        memcpy(v17, v18, __n); /*0x100875c89*/
        if ( v19 < 0x26 ) /*0x100875c92*/
          break; /*0x100875c92*/
        v20 = __n; /*0x100875ca5*/
        core::str::pattern::StrSearcher::new::h63b1ff96ad2adbd2(&v32, __src, __n, &unk_101674D0D, 37); /*0x100875cb3*/
        _$LT$core..str..pattern..StrSearcher$u20$as$u20$core..str..pattern..Searcher$GT$::next_match::h14488f79cfb82bb5( /*0x100875cc3*/
          &v36,
          &v32);
        if ( (_BYTE)v36 ) /*0x100875ccc*/
          goto LABEL_31; /*0x100875ccc*/
LABEL_18:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src, v20, 1); /*0x100875bfa*/
LABEL_19:
        v12 += 32; /*0x100875c0b*/
        v13 -= 32; /*0x100875c0f*/
        if ( !v13 ) /*0x100875c13*/
          goto LABEL_33; /*0x100875c13*/
      }
      v20 = __n; /*0x100875cef*/
      if ( __n != 37 || memcmp(&unk_101674D0D, __src, 0x25u) ) /*0x100875d0d*/
        goto LABEL_18; /*0x100875d14*/
LABEL_31:
      codexmate_lib::core::relay::translator::remove_web_search_hint::h746cda0ae492b867(&v36, (char *)__src, v20); /*0x100875d1a*/
      v35 = v38; /*0x100875d35*/
      v34 = v37; /*0x100875d41*/
      v33 = v36; /*0x100875d45*/
      LOBYTE(v32) = 3; /*0x100875d48*/
      v21 = (signed __int64 *)_$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_or_insert::h356a3af8dbe772a2( /*0x100875d63*/
                                &anon_10420c9971c21f44d230d15b39fb3fec_110,
                                4u);
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(v21); /*0x100875d69*/
      v21[3] = v35; /*0x100875d75*/
      v21[2] = v34; /*0x100875d80*/
      v22 = v32; /*0x100875d84*/
      v21[1] = v33; /*0x100875d92*/
      *v21 = v22; /*0x100875d96*/
      v20 = __n; /*0x100875d9a*/
      goto LABEL_18; /*0x100875d9e*/
    }
  }
  return 0; /*0x100875bd1*/
}