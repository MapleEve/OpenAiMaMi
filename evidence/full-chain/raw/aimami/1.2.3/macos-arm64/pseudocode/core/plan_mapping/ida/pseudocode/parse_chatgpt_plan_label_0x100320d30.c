// __ZN13codexmate_lib4core12plan_mapping24parse_chatgpt_plan_label @ 0x100320d30 | 基线 same-set
__int64 __fastcall codexmate_lib::core::plan_mapping::parse_chatgpt_plan_label::hdd40bb79247a1c69(
        __int64 a1,
        __int64 a2)
{
  unsigned int v2; // r15d
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v12; // [rsp+0h] [rbp-50h] BYREF
  __int64 v13; // [rsp+8h] [rbp-48h]
  __int64 v14; // [rsp+10h] [rbp-40h]
  __int64 v15; // [rsp+18h] [rbp-38h] BYREF
  __int64 v16; // [rsp+20h] [rbp-30h]
  unsigned __int64 v17; // [rsp+28h] [rbp-28h]

  v3 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a1, a2); /*0x100320d3f*/
  alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h21da2998c4baf545(&v15, v3, v4); /*0x100320d4b*/
  v5 = v17; /*0x100320d50*/
  if ( v17 ) /*0x100320d57*/
  {
    v6 = v16; /*0x100320d59*/
    switch ( v17 ) /*0x100320d79*/
    {
      case 3uLL: /*0x100320d79*/
        if ( !(*(_WORD *)v16 ^ 0x7270 | *(unsigned __int8 *)(v16 + 2) ^ 0x6F) ) /*0x100320d8d*/
          goto LABEL_61; /*0x100320d8d*/
        if ( *(_WORD *)v16 ^ 0x6465 | *(unsigned __int8 *)(v16 + 2) ^ 0x75 ) /*0x100320da2*/
          goto LABEL_51; /*0x100320da5*/
        LOBYTE(v2) = 7; /*0x100320dab*/
        break; /*0x100320dae*/
      case 4uLL: /*0x100320d79*/
        switch ( *(_DWORD *)v16 ) /*0x100320e77*/
        {
          case 0x65657266: /*0x100320e77*/
            v2 = 0; /*0x10032127e*/
            break;
          case 0x73756C70: /*0x100320e77*/
            LOBYTE(v2) = 1; /*0x100321283*/
            break;
          case 0x6D616574: /*0x100320e77*/
LABEL_63:
            LOBYTE(v2) = 4; /*0x100321279*/
            break;
          default:
            goto LABEL_50; /*0x100320e8f*/
        }
        break; /*0x10032127c*/
      case 6uLL: /*0x100320d79*/
        LOBYTE(v2) = 2; /*0x100320dcc*/
        if ( !(*(_DWORD *)v16 ^ 0x705F7835 | *(unsigned __int16 *)(v16 + 4) ^ 0x6F72) /*0x100320e1a*/
          || !(*(_DWORD *)v16 ^ 0x5F6F7270 | *(unsigned __int16 *)(v16 + 4) ^ 0x7835)
          || !(*(_DWORD *)v16 ^ 0x70207835 | *(unsigned __int16 *)(v16 + 4) ^ 0x6F72)
          || !(*(_DWORD *)v16 ^ 0x206F7270 | *(unsigned __int16 *)(v16 + 4) ^ 0x7835) )
        {
          break; /*0x100320e1c*/
        }
        goto LABEL_50; /*0x100320e1c*/
      case 7uLL: /*0x100320d79*/
        LOBYTE(v2) = 2; /*0x100320f37*/
        if ( !(*(_DWORD *)v16 ^ 0x6C6F7270 | *(_DWORD *)(v16 + 3) ^ 0x6574696C) ) /*0x100320f3c*/
          break; /*0x100320f3c*/
        if ( !(*(_DWORD *)v16 ^ 0x5F783032 | *(_DWORD *)(v16 + 3) ^ 0x6F72705F) /*0x100320f96*/
          || !(*(_DWORD *)v16 ^ 0x5F6F7270 | *(_DWORD *)(v16 + 3) ^ 0x7830325F)
          || !(*(_DWORD *)v16 ^ 0x20783032 | *(_DWORD *)(v16 + 3) ^ 0x6F727020)
          || !(*(_DWORD *)v16 ^ 0x206F7270 | *(_DWORD *)(v16 + 3) ^ 0x78303220) )
        {
          goto LABEL_61; /*0x100320f98*/
        }
        if ( !(*(_DWORD *)v16 ^ 0x5F303031 | *(_DWORD *)(v16 + 3) ^ 0x6F72705F) /*0x100320fc4*/
          || !(*(_DWORD *)v16 ^ 0x5F6F7270 | *(_DWORD *)(v16 + 3) ^ 0x3030315F) )
        {
          break; /*0x100320fc6*/
        }
        if ( !(*(_DWORD *)v16 ^ 0x5F303032 | *(_DWORD *)(v16 + 3) ^ 0x6F72705F) ) /*0x100320fdd*/
          goto LABEL_61; /*0x100320fdd*/
        LOBYTE(v2) = 3; /*0x100320ff4*/
        if ( !(*(_DWORD *)v16 ^ 0x5F6F7270 | *(_DWORD *)(v16 + 3) ^ 0x3030325F) ) /*0x100320ff2*/
          break; /*0x100320ff7*/
LABEL_48:
        if ( *(_DWORD *)v16 ^ 0x5F6F7270 | *(_DWORD *)(v16 + 3) ^ 0x3030315F ) /*0x100321137*/
        {
          if ( *(_DWORD *)v16 ^ 0x5F6F7270 | *(_DWORD *)(v16 + 3) ^ 0x3030325F ) /*0x100321149*/
          {
LABEL_50:
            if ( *(_DWORD *)v16 != 1601139312 ) /*0x100321157*/
            {
LABEL_51:
              v2 = codexmate_lib::core::plan_mapping::infer_pro_tier_from_raw::h64a24cf0108a3263(v16, v17); /*0x10032115d*/
              if ( (_BYTE)v2 != 9 ) /*0x10032116d*/
                break; /*0x10032116d*/
              codexmate_lib::core::plan_mapping::normalize_tokens::h379cb369d4bf0dc0(&v12, v6, v5); /*0x10032117d*/
              v7 = v13; /*0x100321182*/
              v8 = v14; /*0x100321186*/
              LOBYTE(v2) = 6; /*0x1003211a1*/
              if ( (unsigned __int8)codexmate_lib::core::plan_mapping::tokens_contain::ha0eebb87f1f65e42( /*0x10032119c*/
                                      v13,
                                      v14,
                                      &anon_b0ee9adff4519c22b647af231a5a39fa_83,
                                      0xAu) )
                goto LABEL_60; /*0x10032119c*/
              LOBYTE(v2) = 5; /*0x1003211c3*/
              if ( (unsigned __int8)codexmate_lib::core::plan_mapping::tokens_contain::ha0eebb87f1f65e42( /*0x1003211be*/
                                      v7,
                                      v8,
                                      &anon_b0ee9adff4519c22b647af231a5a39fa_82,
                                      8u) )
                goto LABEL_60; /*0x1003211be*/
              LOBYTE(v2) = 7; /*0x1003211e5*/
              if ( (unsigned __int8)codexmate_lib::core::plan_mapping::tokens_contain::ha0eebb87f1f65e42( /*0x1003211e0*/
                                      v7,
                                      v8,
                                      &anon_b0ee9adff4519c22b647af231a5a39fa_84,
                                      3u) )
                goto LABEL_60; /*0x1003211e0*/
              LOBYTE(v2) = 4; /*0x100321203*/
              if ( (unsigned __int8)codexmate_lib::core::plan_mapping::tokens_contain::ha0eebb87f1f65e42( /*0x1003211fe*/
                                      v7,
                                      v8,
                                      "team",
                                      4u) )
                goto LABEL_60; /*0x1003211fe*/
              LOBYTE(v2) = 3; /*0x100321221*/
              if ( (unsigned __int8)codexmate_lib::core::plan_mapping::tokens_contain::ha0eebb87f1f65e42( /*0x10032121c*/
                                      v7,
                                      v8,
                                      "pro",
                                      3u) )
                goto LABEL_60; /*0x10032121c*/
              LOBYTE(v2) = 1; /*0x10032123f*/
              if ( (unsigned __int8)codexmate_lib::core::plan_mapping::tokens_contain::ha0eebb87f1f65e42( /*0x10032123a*/
                                      v7,
                                      v8,
                                      &anon_b0ee9adff4519c22b647af231a5a39fa_58,
                                      4u) )
                goto LABEL_60; /*0x100321244*/
              if ( (unsigned __int8)codexmate_lib::core::plan_mapping::tokens_contain::ha0eebb87f1f65e42( /*0x100321258*/
                                      v7,
                                      v8,
                                      &anon_b0ee9adff4519c22b647af231a5a39fa_57,
                                      4u) )
              {
                v2 = 0; /*0x100321261*/
LABEL_60:
                core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayActiveByIde$GT$::h1b9199b71a2a5ac6(&v12); /*0x100321264*/
                break; /*0x10032126d*/
              }
              core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayActiveByIde$GT$::h1b9199b71a2a5ac6(&v12); /*0x1003212b1*/
              v9 = v15; /*0x1003212b6*/
              LOBYTE(v2) = 8; /*0x1003212ba*/
              if ( v15 ) /*0x1003212c0*/
              {
                v10 = v6; /*0x1003212c7*/
                goto LABEL_68; /*0x1003212ca*/
              }
              return v2; /*0x1003212c0*/
            }
          }
LABEL_61:
          LOBYTE(v2) = 3; /*0x10032126f*/
          break; /*0x100321272*/
        }
LABEL_62:
        LOBYTE(v2) = 2; /*0x100321274*/
        break; /*0x100321277*/
      case 8uLL: /*0x100320d79*/
        if ( *(_QWORD *)v16 != 0x7373656E69737562LL ) /*0x10032100f*/
          goto LABEL_48; /*0x10032100f*/
        LOBYTE(v2) = 5; /*0x100321015*/
        break; /*0x100321018*/
      case 0xAuLL: /*0x100320d79*/
        if ( !(*(_QWORD *)v16 ^ 0x6E776F5F6D616574LL | *(unsigned __int16 *)(v16 + 8) ^ 0x7265LL) ) /*0x100320e42*/
          goto LABEL_63; /*0x100320e42*/
        if ( *(_QWORD *)v16 ^ 0x6972707265746E65LL | *(unsigned __int16 *)(v16 + 8) ^ 0x6573LL ) /*0x100320e60*/
          goto LABEL_48; /*0x100320e63*/
        LOBYTE(v2) = 6; /*0x100320e69*/
        break; /*0x100320e6c*/
      case 0xBuLL: /*0x100320d79*/
        LOBYTE(v2) = 3; /*0x100320eb5*/
        if ( !(*(_QWORD *)v16 ^ 0x5F74706774616863LL | *(_QWORD *)(v16 + 3) ^ 0x6F72705F74706774LL) /*0x100320edc*/
          || !(*(_QWORD *)v16 ^ 0x2D74706774616863LL | *(_QWORD *)(v16 + 3) ^ 0x6F72702D74706774LL) )
        {
          break; /*0x100320edf*/
        }
        goto LABEL_48; /*0x100320edf*/
      case 0xCuLL: /*0x100320d79*/
        if ( !(*(_QWORD *)v16 ^ 0x69737365666F7270LL | *(unsigned int *)(v16 + 8) ^ 0x6C616E6FLL) ) /*0x100320f01*/
          goto LABEL_61; /*0x100320f04*/
        goto LABEL_48; /*0x100320f04*/
      case 0xEuLL: /*0x100320d79*/
        if ( !(*(_QWORD *)v16 ^ 0x7074706774616863LL | *(_QWORD *)(v16 + 6) ^ 0x6574696C6F727074LL) ) /*0x1003210fc*/
          goto LABEL_62; /*0x1003210fc*/
        if ( *(_QWORD *)v16 ^ 0x746F6E5F6D616574LL | *(_QWORD *)(v16 + 6) ^ 0x72656E776F5F746FLL ) /*0x10032111d*/
          goto LABEL_48; /*0x100321120*/
        goto LABEL_63; /*0x100321120*/
      case 0xFuLL: /*0x100320d79*/
        LOBYTE(v2) = 2; /*0x10032103f*/
        if ( !(*(_QWORD *)v16 ^ 0x5F74706774616863LL | *(_QWORD *)(v16 + 7) ^ 0x6574696C6F72705FLL) ) /*0x100321042*/
          break; /*0x100321042*/
        if ( !(*(_QWORD *)v16 ^ 0x2D74706774616863LL | *(_QWORD *)(v16 + 7) ^ 0x6574696C6F72702DLL) ) /*0x10032105f*/
          break; /*0x10032105f*/
        if ( !(*(_QWORD *)v16 ^ 0x5F74706774616863LL | *(_QWORD *)(v16 + 7) ^ 0x3030315F6F72705FLL) ) /*0x10032107c*/
          break; /*0x10032107c*/
        if ( !(*(_QWORD *)v16 ^ 0x2D74706774616863LL | *(_QWORD *)(v16 + 7) ^ 0x3030312D6F72702DLL) ) /*0x100321099*/
          break; /*0x100321099*/
        LOBYTE(v2) = 3; /*0x1003210b3*/
        if ( !(*(_QWORD *)v16 ^ 0x5F74706774616863LL | *(_QWORD *)(v16 + 7) ^ 0x3030325F6F72705FLL) /*0x1003210d0*/
          || !(*(_QWORD *)v16 ^ 0x2D74706774616863LL | *(_QWORD *)(v16 + 7) ^ 0x3030322D6F72702DLL) )
        {
          break; /*0x1003210d3*/
        }
        goto LABEL_48; /*0x1003210d3*/
      default:
        if ( v17 >= 7 ) /*0x100320f13*/
          goto LABEL_48; /*0x100320f13*/
        if ( v17 < 4 ) /*0x100320f1d*/
          goto LABEL_51; /*0x100320f1d*/
        goto LABEL_50; /*0x100320f1d*/
    }
  }
  else
  {
    LOBYTE(v2) = 8; /*0x100320db3*/
  }
  v9 = v15; /*0x100321286*/
  if ( v15 ) /*0x10032128d*/
  {
    v10 = v16; /*0x10032128f*/
LABEL_68:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v9, 1); /*0x100321298*/
  }
  return v2; /*0x1003212a0*/
}