// __ZN13codexmate_lib4core5relay5quota17fetch_siliconflow28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1000dee90 | 基线 same-set
char __fastcall codexmate_lib::core::relay::quota::fetch_siliconflow::_$u7b$$u7b$closure$u7d$$u7d$::h253acf2712682007(
        unsigned __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rax
  void *v9; // rdx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rcx
  char v13; // r15
  char result; // al
  char v15; // r12
  void *v16; // rdx
  int v17; // eax
  void *v18; // r13
  _QWORD *v19; // r14
  void *v20; // r13
  unsigned __int64 v21; // r12
  char v22; // al
  __int64 v23; // r15
  __int64 v24; // r13
  __int64 v25; // rsi
  __int64 v26; // rax
  __int64 v27; // r15
  __int64 v28; // rax
  __int64 v29; // rsi
  unsigned __int64 v30; // r14
  void *v31; // rax
  __int64 (__fastcall *v32)(); // r12
  void *v33; // rax
  __int64 v34; // r14
  __int64 v35; // r13
  unsigned __int64 v36; // r15
  void *v37; // r12
  void *v38; // rcx
  void *v39; // [rsp+8h] [rbp-C8h]
  __int64 (__fastcall *v40)(); // [rsp+18h] [rbp-B8h]
  __int64 v41; // [rsp+20h] [rbp-B0h] BYREF
  __int64 (__fastcall *v42)(); // [rsp+28h] [rbp-A8h]
  __int64 v43; // [rsp+30h] [rbp-A0h]
  void *v44; // [rsp+38h] [rbp-98h]
  __int64 **v45; // [rsp+40h] [rbp-90h] BYREF
  __int64 (__fastcall *v46)(); // [rsp+48h] [rbp-88h]
  __int64 *v47; // [rsp+50h] [rbp-80h] BYREF
  __int64 v48; // [rsp+58h] [rbp-78h] BYREF
  __int64 v49; // [rsp+60h] [rbp-70h]
  __int64 (__fastcall *v50)(); // [rsp+68h] [rbp-68h]
  _DWORD v51[2]; // [rsp+70h] [rbp-60h]
  unsigned __int64 v52; // [rsp+78h] [rbp-58h] BYREF
  __int64 v53; // [rsp+80h] [rbp-50h] BYREF
  __int64 (__fastcall *v54)(); // [rsp+88h] [rbp-48h]
  __int64 v55; // [rsp+90h] [rbp-40h]
  void *v56; // [rsp+98h] [rbp-38h]
  __int64 v57; // [rsp+A0h] [rbp-30h]

  switch ( *(_BYTE *)(a2 + 841) ) /*0x1000deec3*/
  {
    case 0: /*0x1000deec3*/
      v57 = a3; /*0x1000deec5*/
      v4 = *(_QWORD *)(a2 + 824); /*0x1000deec9*/
      v5 = *(_QWORD *)(a2 + 784); /*0x1000deed0*/
      v6 = *(_QWORD *)(a2 + 792); /*0x1000deed7*/
      v7 = *(_QWORD *)(a2 + 832); /*0x1000deede*/
      v8 = *(unsigned __int8 *)(a2 + 842); /*0x1000deee5*/
      v9 = &unk_1015DAC3C; /*0x1000deef3*/
      if ( *(_BYTE *)(a2 + 842) ) /*0x1000deee5*/
        v9 = &unk_1015DAC4F; /*0x1000deefd*/
      *(_BYTE *)(a2 + 840) = v8; /*0x1000def01*/
      *(_QWORD *)(a2 + 768) = v9; /*0x1000def12*/
      *(_QWORD *)(a2 + 776) = v8 ^ 0x13; /*0x1000def19*/
      v41 = a2 + 768; /*0x1000def20*/
      v42 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1000def2e*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v52, "\bhttps://\xC0\x0D/v1/user/info", &v41); /*0x1000def47*/
      *(_QWORD *)(a2 + 816) = v54; /*0x1000def50*/
      v10 = v52; /*0x1000def57*/
      *(_QWORD *)(a2 + 808) = v53; /*0x1000def5f*/
      *(_QWORD *)(a2 + 800) = v10; /*0x1000def66*/
      v11 = *(_QWORD *)(a2 + 808); /*0x1000def6d*/
      v12 = *(_QWORD *)(a2 + 816); /*0x1000def74*/
      *(_QWORD *)a2 = v4; /*0x1000def7b*/
      *(_QWORD *)(a2 + 8) = v11; /*0x1000def7e*/
      *(_QWORD *)(a2 + 16) = v12; /*0x1000def82*/
      *(_QWORD *)(a2 + 24) = v5; /*0x1000def86*/
      *(_QWORD *)(a2 + 32) = v6; /*0x1000def8a*/
      *(_QWORD *)(a2 + 40) = v7; /*0x1000def8e*/
      *(_BYTE *)(a2 + 48) = 0; /*0x1000def92*/
      break; /*0x1000def92*/
    case 1: /*0x1000deec3*/
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101952558); /*0x1000df563*/
    case 2: /*0x1000deec3*/
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101952558); /*0x1000df557*/
    case 3: /*0x1000deec3*/
      break;
  }
  codexmate_lib::core::relay::quota::get_json::_$u7b$$u7b$closure$u7d$$u7d$::h39c67e16790a7b5a(&v52, a2); /*0x1000def9a*/
  v13 = v52; /*0x1000defa6*/
  if ( v52 != 2 ) /*0x1000defae*/
  {
    v15 = v53; /*0x1000defce*/
    v51[0] = *(_DWORD *)((char *)&v53 + 1); /*0x1000defd6*/
    *(_DWORD *)((char *)v51 + 3) = HIDWORD(v53); /*0x1000defdc*/
    v40 = v54; /*0x1000defe3*/
    v57 = v55; /*0x1000defee*/
    v16 = v56; /*0x1000deff2*/
    v17 = *(unsigned __int8 *)(a2 + 48); /*0x1000deff6*/
    if ( v17 == 4 ) /*0x1000deffd*/
    {
      if ( *(_BYTE *)(a2 + 760) == 3 ) /*0x1000df027*/
      {
        v20 = v56; /*0x1000df07f*/
        core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::he09c21e64e830488(a2 + 336); /*0x1000df082*/
        v16 = v20; /*0x1000df087*/
      }
      else if ( !*(_BYTE *)(a2 + 760) ) /*0x1000df01d*/
      {
        v39 = v56; /*0x1000df02d*/
        core::ptr::drop_in_place$LT$http..response..Response$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$::h0bbfe0f28d08e7ec(a2 + 200); /*0x1000df03b*/
        v19 = *(_QWORD **)(a2 + 328); /*0x1000df040*/
        if ( *v19 ) /*0x1000df047*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19[1], *v19, 1); /*0x1000df058*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, 88, 8); /*0x1000df06a*/
        v16 = v39; /*0x1000df06f*/
      }
    }
    else if ( v17 == 3 ) /*0x1000df002*/
    {
      v18 = v56; /*0x1000df010*/
      core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2( /*0x1000df013*/
        *(_QWORD *)(a2 + 56),
        *(_QWORD *)(a2 + 64));
      v16 = v18; /*0x1000df018*/
    }
    if ( (v13 & 1) != 0 ) /*0x1000df08e*/
    {
      LOBYTE(v52) = v15; /*0x1000df094*/
      *(_DWORD *)((char *)&v52 + 1) = v51[0]; /*0x1000df09e*/
      HIDWORD(v52) = *(_DWORD *)((char *)v51 + 3); /*0x1000df0a1*/
      v53 = (__int64)v40; /*0x1000df0af*/
      v54 = (__int64 (__fastcall *)())v57; /*0x1000df0b7*/
      v55 = (__int64)v16; /*0x1000df0bb*/
      v48 = 0; /*0x1000df0bf*/
      v49 = 1; /*0x1000df0c7*/
      v50 = nullptr; /*0x1000df0cf*/
      if ( (unsigned __int16)v52 == 2 ) /*0x1000df0de*/
      {
        v47 = &v53; /*0x1000df29d*/
        v45 = &v47; /*0x1000df2a5*/
        v46 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b; /*0x1000df2b3*/
        v22 = core::fmt::write::h2e5a8157a38fb62d( /*0x1000df2d3*/
                &v48,
                &off_101952F18,
                &anon_10420c9971c21f44d230d15b39fb3fec_1036,
                &v45);
        v21 = 0x8000000000000000LL; /*0x1000df2d8*/
      }
      else
      {
        v21 = 0x8000000000000000LL; /*0x1000df0e7*/
        if ( (unsigned __int16)v52 == 1 ) /*0x1000df0f1*/
        {
          v47 = &v53; /*0x1000df0f7*/
          v45 = &v47; /*0x1000df0ff*/
          v46 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h9d330bb351c0110b; /*0x1000df10d*/
          v22 = core::fmt::write::h2e5a8157a38fb62d( /*0x1000df12d*/
                  &v48,
                  &off_101952F18,
                  &anon_10420c9971c21f44d230d15b39fb3fec_1035,
                  &v45);
        }
        else
        {
          v47 = (__int64 *)((char *)&v52 + 2); /*0x1000df2e8*/
          v45 = &v47; /*0x1000df2f0*/
          v46 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hd492899dc40ca8b8; /*0x1000df2fe*/
          v22 = core::fmt::write::h2e5a8157a38fb62d( /*0x1000df31e*/
                  &v48,
                  &off_101952F18,
                  &anon_10420c9971c21f44d230d15b39fb3fec_652,
                  &v45);
        }
      }
      if ( v22 ) /*0x1000df325*/
        core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, &v45, &unk_101952FE0, &off_101952F48); /*0x1000df549*/
      v23 = v48; /*0x1000df32b*/
      v24 = v49; /*0x1000df32f*/
      v16 = v50; /*0x1000df333*/
      if ( (_WORD)v52 && v53 ) /*0x1000df349*/
      {
        v32 = v50; /*0x1000df353*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54, v53, 1); /*0x1000df35b*/
        v16 = v32; /*0x1000df360*/
        v21 = 0x8000000000000000LL; /*0x1000df363*/
        v25 = *(_QWORD *)(a2 + 800); /*0x1000df36d*/
        if ( !v25 ) /*0x1000df377*/
          goto LABEL_40; /*0x1000df377*/
        goto LABEL_39; /*0x1000df377*/
      }
      goto LABEL_38; /*0x1000df349*/
    }
    v23 = (__int64)v40; /*0x1000df13b*/
    if ( v15 == 6 ) /*0x1000df142*/
    {
      v21 = 0x8000000000000000LL; /*0x1000df144*/
      v24 = v57; /*0x1000df14e*/
      v25 = *(_QWORD *)(a2 + 800); /*0x1000df152*/
      if ( !v25 ) /*0x1000df15c*/
        goto LABEL_40; /*0x1000df15c*/
      goto LABEL_39; /*0x1000df15c*/
    }
    HIDWORD(v41) = *(_DWORD *)((char *)v51 + 3); /*0x1000df16d*/
    *(_DWORD *)((char *)&v41 + 1) = v51[0]; /*0x1000df173*/
    LOBYTE(v41) = v15; /*0x1000df179*/
    v42 = v40; /*0x1000df180*/
    v43 = v57; /*0x1000df18b*/
    v44 = v16; /*0x1000df192*/
    v26 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1000df1ac*/
            "dataunittypefullargsopenwithkindsavetrueuuidemitshowhide",
            4,
            &v41);
    v27 = v26; /*0x1000df1b1*/
    v21 = 0x8000000000000000LL; /*0x1000df1b7*/
    if ( v26 ) /*0x1000df1c1*/
    {
      v28 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1000df1d6*/
              &unk_1015DAC61,
              12,
              v26);
      codexmate_lib::core::relay::quota::value_to_string::h0db883ebfad51c2a(&v52, v28); /*0x1000df1e2*/
      if ( v52 == 0x8000000000000000LL ) /*0x1000df1eb*/
      {
        v29 = _$LT$str$u20$as$u20$serde_json..value..index..Index$GT$::index_into::h51f9dd05d381230f( /*0x1000df209*/
                &unk_1015DAB45,
                7,
                v27);
        codexmate_lib::core::relay::quota::value_to_string::h0db883ebfad51c2a(&v48, v29); /*0x1000df20c*/
        v30 = v48; /*0x1000df211*/
        if ( v48 == 0x8000000000000000LL ) /*0x1000df218*/
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v48, v29); /*0x1000df21e*/
          v23 = 46; /*0x1000df223*/
          v31 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(46, 1); /*0x1000df233*/
          if ( !v31 ) /*0x1000df23b*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 46); /*0x1000df583*/
          v24 = (__int64)v31; /*0x1000df241*/
          qmemcpy(v31, "SiliconFlow user info response missing balance", 46); /*0x1000df294*/
LABEL_37:
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v41); /*0x1000df3f6*/
          v16 = (void *)v23; /*0x1000df402*/
LABEL_38:
          v25 = *(_QWORD *)(a2 + 800); /*0x1000df405*/
          if ( !v25 ) /*0x1000df40f*/
          {
LABEL_40:
            *a1 = v21; /*0x1000df43a*/
            a1[1] = v23; /*0x1000df444*/
            a1[2] = v24; /*0x1000df448*/
            a1[3] = (unsigned __int64)v16; /*0x1000df44c*/
            a1[4] = 20; /*0x1000df450*/
            a1[5] = (unsigned __int64)&unk_1015DAC81; /*0x1000df45f*/
            a1[6] = 24; /*0x1000df463*/
            result = 1; /*0x1000df46b*/
            goto LABEL_41; /*0x1000df46b*/
          }
LABEL_39:
          v34 = v24; /*0x1000df411*/
          v35 = v23; /*0x1000df41b*/
          v36 = v21; /*0x1000df41e*/
          v37 = v16; /*0x1000df421*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)(a2 + 808), v25, 1); /*0x1000df429*/
          v16 = v37; /*0x1000df42e*/
          v21 = v36; /*0x1000df431*/
          v23 = v35; /*0x1000df434*/
          v24 = v34; /*0x1000df437*/
          goto LABEL_40; /*0x1000df437*/
        }
      }
      else
      {
        v50 = v54; /*0x1000df489*/
        v49 = v53; /*0x1000df495*/
        v48 = v52; /*0x1000df499*/
        v30 = v52; /*0x1000df49d*/
      }
      v38 = &unk_1015DAAFA; /*0x1000df4b9*/
      if ( *(_BYTE *)(a2 + 840) ) /*0x1000df4c0*/
        v38 = &unk_1015DAB4C; /*0x1000df4c7*/
      v57 = v49; /*0x1000df4d5*/
      codexmate_lib::core::relay::quota::format_currency::h2c6930e244df1375(&v52, v49, v50, v38, 3); /*0x1000df4d9*/
      v21 = v52; /*0x1000df4de*/
      v23 = v53; /*0x1000df4e2*/
      v24 = (__int64)v54; /*0x1000df4e6*/
      if ( v30 ) /*0x1000df4ed*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v57, v30, 1); /*0x1000df4fb*/
      core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v41); /*0x1000df507*/
      v25 = *(_QWORD *)(a2 + 800); /*0x1000df50c*/
      v16 = &unk_1015DAC6D; /*0x1000df513*/
      if ( !v25 ) /*0x1000df51d*/
        goto LABEL_40; /*0x1000df51d*/
      goto LABEL_39; /*0x1000df51d*/
    }
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2( /*0x1000df382*/
      "dataunittypefullargsopenwithkindsavetrueuuidemitshowhide",
      4);
    v23 = 43; /*0x1000df387*/
    v33 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(43, 1); /*0x1000df397*/
    if ( !v33 ) /*0x1000df39f*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 43); /*0x1000df572*/
    v24 = (__int64)v33; /*0x1000df3a5*/
    qmemcpy(v33, "SiliconFlow user info response missing data", 43); /*0x1000df3ea*/
    goto LABEL_37; /*0x1000df3ea*/
  }
  result = 3; /*0x1000defba*/
  *a1 = 0x8000000000000001LL; /*0x1000defc4*/
LABEL_41:
  *(_BYTE *)(a2 + 841) = result; /*0x1000df46d*/
  return result; /*0x1000df473*/
}