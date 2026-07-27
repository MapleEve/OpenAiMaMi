// __ZN13codexmate_lib4core5relay5quota18fetch_kimi_balance28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1000df690 | 基线 same-set
char __fastcall codexmate_lib::core::relay::quota::fetch_kimi_balance::_$u7b$$u7b$closure$u7d$$u7d$::h6d427f854e8290b8(
        unsigned __int64 *a1,
        __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rsi
  __int64 v7; // rdi
  char v8; // r8
  void *v9; // r10
  char v10; // r12
  char result; // al
  char v12; // dl
  __int64 v13; // r15
  void *v14; // r13
  int v15; // eax
  __int64 v16; // rdi
  __int64 v17; // rsi
  unsigned __int64 *v18; // r13
  __int64 v19; // r14
  char v20; // r15
  __int64 *v21; // rdi
  __int64 v22; // rsi
  unsigned __int64 *v23; // r13
  __int64 v24; // r14
  char v25; // r15
  char v26; // al
  __int64 v27; // r12
  __int64 v28; // rax
  __int64 v29; // rsi
  unsigned __int64 v30; // r13
  void *v31; // rax
  unsigned __int64 v32; // rax
  void *v33; // rax
  void *v34; // rcx
  char v35; // [rsp+0h] [rbp-C0h] BYREF
  _BYTE v36[7]; // [rsp+1h] [rbp-BFh]
  unsigned __int64 v37; // [rsp+8h] [rbp-B8h]
  __int64 v38; // [rsp+10h] [rbp-B0h]
  void *v39; // [rsp+18h] [rbp-A8h]
  __int64 *v40; // [rsp+20h] [rbp-A0h]
  __int64 v41; // [rsp+28h] [rbp-98h] BYREF
  __int64 v42; // [rsp+30h] [rbp-90h]
  void *v43; // [rsp+38h] [rbp-88h]
  __int64 **v44; // [rsp+40h] [rbp-80h] BYREF
  __int64 (__fastcall *v45)(); // [rsp+48h] [rbp-78h]
  unsigned __int64 v46; // [rsp+50h] [rbp-70h]
  __int64 *v47; // [rsp+58h] [rbp-68h] BYREF
  unsigned __int64 v48; // [rsp+60h] [rbp-60h] BYREF
  __int64 v49; // [rsp+68h] [rbp-58h] BYREF
  __int64 v50; // [rsp+70h] [rbp-50h]
  __int64 v51; // [rsp+78h] [rbp-48h]
  void *v52; // [rsp+80h] [rbp-40h]
  _DWORD v53[2]; // [rsp+88h] [rbp-38h]
  void *v54; // [rsp+90h] [rbp-30h]

  switch ( *(_BYTE *)(a2 + 801) ) /*0x1000df6bf*/
  {
    case 0: /*0x1000df6bf*/
      v4 = *(_QWORD *)(a2 + 784); /*0x1000df6c1*/
      v5 = *(_QWORD *)(a2 + 768); /*0x1000df6c8*/
      v6 = *(_QWORD *)(a2 + 776); /*0x1000df6cf*/
      v7 = *(_QWORD *)(a2 + 792); /*0x1000df6d6*/
      v8 = *(_BYTE *)(a2 + 802); /*0x1000df6dd*/
      v9 = &unk_1015DAC9A; /*0x1000df6ec*/
      if ( v8 ) /*0x1000df6f6*/
        v9 = &unk_1015DACC5; /*0x1000df6f6*/
      *(_BYTE *)(a2 + 800) = v8; /*0x1000df6fa*/
      *(_QWORD *)a2 = v4; /*0x1000df701*/
      *(_QWORD *)(a2 + 8) = v9; /*0x1000df704*/
      *(_QWORD *)(a2 + 16) = 43; /*0x1000df708*/
      *(_QWORD *)(a2 + 24) = v5; /*0x1000df710*/
      *(_QWORD *)(a2 + 32) = v6; /*0x1000df714*/
      *(_QWORD *)(a2 + 40) = v7; /*0x1000df718*/
      *(_BYTE *)(a2 + 48) = 0; /*0x1000df71c*/
      break; /*0x1000df71c*/
    case 1: /*0x1000df6bf*/
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101952570); /*0x1000dfc0e*/
    case 2: /*0x1000df6bf*/
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101952570); /*0x1000dfc02*/
    case 3: /*0x1000df6bf*/
      break;
  }
  codexmate_lib::core::relay::quota::get_json::_$u7b$$u7b$closure$u7d$$u7d$::h39c67e16790a7b5a(&v48, a2); /*0x1000df720*/
  v10 = v48; /*0x1000df72c*/
  if ( v48 != 2 ) /*0x1000df734*/
  {
    v12 = v49; /*0x1000df74d*/
    v53[0] = *(_DWORD *)((char *)&v49 + 1); /*0x1000df754*/
    *(_DWORD *)((char *)v53 + 3) = HIDWORD(v49); /*0x1000df75a*/
    v46 = v50; /*0x1000df761*/
    v13 = v51; /*0x1000df765*/
    v14 = v52; /*0x1000df769*/
    v15 = *(unsigned __int8 *)(a2 + 48); /*0x1000df76d*/
    if ( v15 == 4 ) /*0x1000df774*/
    {
      if ( *(_BYTE *)(a2 + 760) == 3 ) /*0x1000df7b5*/
      {
        v54 = v52; /*0x1000df818*/
        v23 = a1; /*0x1000df81c*/
        v24 = v51; /*0x1000df81f*/
        v25 = v49; /*0x1000df822*/
        core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::he09c21e64e830488(a2 + 336); /*0x1000df825*/
        v12 = v25; /*0x1000df82a*/
        v13 = v24; /*0x1000df82d*/
        a1 = v23; /*0x1000df830*/
        v14 = v54; /*0x1000df833*/
      }
      else if ( !*(_BYTE *)(a2 + 760) ) /*0x1000df7ab*/
      {
        LOBYTE(v54) = v49; /*0x1000df7bb*/
        core::ptr::drop_in_place$LT$http..response..Response$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$::h0bbfe0f28d08e7ec(a2 + 200); /*0x1000df7c5*/
        v21 = *(__int64 **)(a2 + 328); /*0x1000df7ca*/
        if ( *v21 ) /*0x1000df7d1*/
        {
          v22 = *v21; /*0x1000df7d1*/
          v40 = *(__int64 **)(a2 + 328); /*0x1000df7d9*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21[1], v22, 1); /*0x1000df7f0*/
          v21 = v40; /*0x1000df7f5*/
        }
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, 88, 8); /*0x1000df806*/
        v12 = (char)v54; /*0x1000df80b*/
      }
    }
    else if ( v15 == 3 ) /*0x1000df779*/
    {
      v16 = *(_QWORD *)(a2 + 56); /*0x1000df77f*/
      v17 = *(_QWORD *)(a2 + 64); /*0x1000df783*/
      v54 = v52; /*0x1000df787*/
      v18 = a1; /*0x1000df78b*/
      v19 = v51; /*0x1000df78e*/
      v20 = v49; /*0x1000df791*/
      core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2(v16, v17); /*0x1000df794*/
      v12 = v20; /*0x1000df799*/
      v13 = v19; /*0x1000df79c*/
      a1 = v18; /*0x1000df79f*/
      v14 = v54; /*0x1000df7a2*/
    }
    if ( (v10 & 1) != 0 ) /*0x1000df83b*/
    {
      LOBYTE(v48) = v12; /*0x1000df841*/
      *(_DWORD *)((char *)&v48 + 1) = v53[0]; /*0x1000df84a*/
      HIDWORD(v48) = *(_DWORD *)((char *)v53 + 3); /*0x1000df84d*/
      v49 = v46; /*0x1000df858*/
      v50 = v13; /*0x1000df85c*/
      v51 = (__int64)v14; /*0x1000df860*/
      v41 = 0; /*0x1000df864*/
      v42 = 1; /*0x1000df86f*/
      v43 = nullptr; /*0x1000df87a*/
      if ( (unsigned __int16)v48 == 2 ) /*0x1000df88c*/
      {
        v47 = &v49; /*0x1000df9e5*/
        v44 = &v47; /*0x1000df9ed*/
        v45 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b; /*0x1000df9f8*/
        v26 = core::fmt::write::h2e5a8157a38fb62d( /*0x1000dfa15*/
                &v41,
                &off_101952F18,
                &anon_10420c9971c21f44d230d15b39fb3fec_1036,
                &v44);
      }
      else if ( (unsigned __int16)v48 == 1 ) /*0x1000df895*/
      {
        v47 = &v49; /*0x1000df89b*/
        v44 = &v47; /*0x1000df8a3*/
        v45 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b; /*0x1000df8ae*/
        v26 = core::fmt::write::h2e5a8157a38fb62d( /*0x1000df8cb*/
                &v41,
                &off_101952F18,
                &anon_10420c9971c21f44d230d15b39fb3fec_1035,
                &v44);
      }
      else
      {
        v47 = (__int64 *)((char *)&v48 + 2); /*0x1000dfa20*/
        v44 = &v47; /*0x1000dfa28*/
        v45 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd492899dc40ca8b8; /*0x1000dfa33*/
        v26 = core::fmt::write::h2e5a8157a38fb62d( /*0x1000dfa50*/
                &v41,
                &off_101952F18,
                &anon_10420c9971c21f44d230d15b39fb3fec_652,
                &v44);
      }
      if ( v26 ) /*0x1000dfa57*/
        core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, &v44, &unk_101952FE0, &off_101952F48); /*0x1000dfbf4*/
      v27 = v41; /*0x1000dfa5d*/
      v13 = v42; /*0x1000dfa64*/
      v14 = v43; /*0x1000dfa6b*/
      if ( (_WORD)v48 && v49 ) /*0x1000dfa80*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, v49, 1); /*0x1000dfa8b*/
    }
    else
    {
      v27 = v46; /*0x1000df8d8*/
      if ( v12 != 6 ) /*0x1000df8dc*/
      {
        *(_DWORD *)&v36[3] = *(_DWORD *)((char *)v53 + 3); /*0x1000df8e8*/
        *(_DWORD *)v36 = v53[0]; /*0x1000df8ee*/
        v35 = v12; /*0x1000df8f4*/
        v37 = v46; /*0x1000df8fa*/
        v38 = v13; /*0x1000df901*/
        v39 = v14; /*0x1000df908*/
        v28 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1000df922*/
                "dataunittypefullargsopenwithkindsavetrueuuidemitshowhide",
                4,
                &v35);
        if ( v28 ) /*0x1000df934*/
        {
          v29 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1000df952*/
                  &unk_1015DACF0,
                  17,
                  v28);
          codexmate_lib::core::relay::quota::value_to_string::h0db883ebfad51c2a(&v48, v29); /*0x1000df955*/
          v30 = v48; /*0x1000df95a*/
          if ( v48 != 0x8000000000000000LL ) /*0x1000df961*/
          {
            v34 = &unk_1015DAAFA; /*0x1000dfb6f*/
            if ( *(_BYTE *)(a2 + 800) ) /*0x1000dfb76*/
              v34 = &unk_1015DAB4C; /*0x1000dfb7d*/
            v54 = (void *)v49; /*0x1000dfb8b*/
            codexmate_lib::core::relay::quota::format_currency::h2c6930e244df1375(&v48, v49, v50, v34, 3); /*0x1000dfb8f*/
            v46 = v48; /*0x1000dfb98*/
            v27 = v49; /*0x1000dfb9c*/
            v13 = v50; /*0x1000dfba0*/
            if ( v30 ) /*0x1000dfba7*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54, v30, 1); /*0x1000dfbb5*/
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v35); /*0x1000dfbc1*/
            v14 = &unk_1015DAD01; /*0x1000dfbc6*/
            v32 = v46; /*0x1000dfbcd*/
            goto LABEL_32; /*0x1000dfbd1*/
          }
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v48, v29); /*0x1000df967*/
          v27 = 47; /*0x1000df96c*/
          v31 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(47, 1); /*0x1000df97c*/
          if ( !v31 ) /*0x1000df984*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 47); /*0x1000dfc2e*/
          v13 = (__int64)v31; /*0x1000df98a*/
          qmemcpy(v31, "Kimi balance response missing available_balance", 47); /*0x1000df9dd*/
        }
        else
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2( /*0x1000dfade*/
            "dataunittypefullargsopenwithkindsavetrueuuidemitshowhide",
            4);
          v27 = 34; /*0x1000dfae3*/
          v33 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(34, 1); /*0x1000dfaf3*/
          if ( !v33 ) /*0x1000dfafb*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 34); /*0x1000dfc1d*/
          v13 = (__int64)v33; /*0x1000dfb01*/
          qmemcpy(v33, "Kimi balance response missing data", 34); /*0x1000dfb38*/
        }
        core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v35); /*0x1000dfb49*/
        v14 = (void *)v27; /*0x1000dfb4e*/
        v32 = 0x8000000000000000LL; /*0x1000dfb51*/
LABEL_32:
        *a1 = v32; /*0x1000dfa9a*/
        a1[1] = v27; /*0x1000dfa9d*/
        a1[2] = v13; /*0x1000dfaa1*/
        a1[3] = (unsigned __int64)v14; /*0x1000dfaa5*/
        a1[4] = 13; /*0x1000dfaa9*/
        a1[5] = (unsigned __int64)&unk_1015DAD0E; /*0x1000dfab8*/
        a1[6] = 17; /*0x1000dfabc*/
        result = 1; /*0x1000dfac4*/
        goto LABEL_33; /*0x1000dfac4*/
      }
    }
    v32 = 0x8000000000000000LL; /*0x1000dfa90*/
    goto LABEL_32; /*0x1000dfa90*/
  }
  result = 3; /*0x1000df740*/
  *a1 = 0x8000000000000001LL; /*0x1000df743*/
LABEL_33:
  *(_BYTE *)(a2 + 801) = result; /*0x1000dfac6*/
  return result; /*0x1000dfacc*/
}