// __ZN13codexmate_lib4core5voice7runtime18write_runtime_file @ 0x100675b00 | 基线 same-set
double __fastcall codexmate_lib::core::voice::runtime::write_runtime_file::hbc4e21afe493dd65(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        double result)
{
  __int64 v5; // rax
  _BYTE *v6; // rax
  __int64 v7; // r12
  __int64 v8; // r15
  __int64 v9; // rax
  _QWORD v10[4]; // [rsp+0h] [rbp-80h] BYREF
  char v11; // [rsp+20h] [rbp-60h]
  _QWORD v12[2]; // [rsp+28h] [rbp-58h] BYREF
  __int64 v13; // [rsp+38h] [rbp-48h] BYREF
  _BYTE *v14; // [rsp+40h] [rbp-40h]
  __int64 v15; // [rsp+48h] [rbp-38h]
  __int64 v16; // [rsp+50h] [rbp-30h] BYREF
  _QWORD *v17; // [rsp+58h] [rbp-28h]

  v5 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h1799bcb22c1ee820((_QWORD *)a2); /*0x100675b1b*/
  if ( v5 ) /*0x100675b23*/
  {
    *a1 = 2; /*0x100675b25*/
    a1[1] = v5; /*0x100675b2c*/
    return result; /*0x100675b30*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a2); /*0x100675b35*/
  v6 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x100675b44*/
  if ( !v6 ) /*0x100675b4c*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x1006760e7*/
  v13 = 128; /*0x100675b52*/
  v14 = v6; /*0x100675b5a*/
  v10[0] = &v13; /*0x100675b62*/
  v10[1] = &unk_10160228E; /*0x100675b6d*/
  v10[2] = 2; /*0x100675b71*/
  v10[3] = 1; /*0x100675b79*/
  v11 = 0; /*0x100675b81*/
  *v6 = 123; /*0x100675b85*/
  v15 = 1; /*0x100675b88*/
  LOWORD(v16) = 256; /*0x100675b90*/
  v17 = v10; /*0x100675b9a*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::hfd98e100bba7a4bb(&v16, "schemaVersion", 13, a3 + 384); /*0x100675bba*/
  if ( v7 ) /*0x100675bc0*/
    goto LABEL_8; /*0x100675bc0*/
  if ( (_BYTE)v16 ) /*0x100675bc6*/
    goto LABEL_6; /*0x100675bc6*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::h95b301bfeb38a520( /*0x100675bee*/
         &v16,
         &anon_4776471024d1e9bb78f2861cb2b51e1e_482,
         7,
         a3 + 390);
  if ( v7 ) /*0x100675bf4*/
  {
LABEL_8:
    if ( v13 ) /*0x100675bfd*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v13, 1); /*0x100675c08*/
    goto LABEL_10; /*0x100675c08*/
  }
  if ( (_BYTE)v16 ) /*0x100675c29*/
    goto LABEL_6; /*0x100675c29*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100675c43*/
         &v16,
         &anon_4776471024d1e9bb78f2861cb2b51e1e_483,
         14,
         a3);
  if ( v7 ) /*0x100675c49*/
    goto LABEL_8; /*0x100675c49*/
  if ( (_BYTE)v16 ) /*0x100675c4f*/
    goto LABEL_6; /*0x100675c4f*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::hc1042280a43692a5( /*0x100675c71*/
         &v16,
         &anon_4776471024d1e9bb78f2861cb2b51e1e_484,
         14,
         a3 + 336);
  if ( v7 ) /*0x100675c77*/
    goto LABEL_8; /*0x100675c77*/
  if ( (_BYTE)v16 ) /*0x100675c81*/
    goto LABEL_6; /*0x100675c81*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100675ca0*/
         &v16,
         &anon_4776471024d1e9bb78f2861cb2b51e1e_485,
         15,
         a3 + 24);
  if ( v7 ) /*0x100675ca6*/
    goto LABEL_8; /*0x100675ca6*/
  if ( (_BYTE)v16 ) /*0x100675cb0*/
    goto LABEL_6; /*0x100675cb0*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100675ccf*/
         &v16,
         &anon_4776471024d1e9bb78f2861cb2b51e1e_486,
         14,
         a3 + 48);
  if ( v7 ) /*0x100675cd5*/
    goto LABEL_8; /*0x100675cd5*/
  if ( (_BYTE)v16 ) /*0x100675cdf*/
    goto LABEL_6; /*0x100675cdf*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::h030a06b2d94ffc74( /*0x100675d01*/
         &v16,
         &anon_4776471024d1e9bb78f2861cb2b51e1e_487,
         12,
         a3 + 391);
  if ( v7 ) /*0x100675d07*/
    goto LABEL_8; /*0x100675d07*/
  if ( (_BYTE)v16 ) /*0x100675d11*/
    goto LABEL_6; /*0x100675d11*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::h22d15134cc13a0b5( /*0x100675d33*/
         &v16,
         &anon_4776471024d1e9bb78f2861cb2b51e1e_488,
         19,
         a3 + 344);
  if ( v7 ) /*0x100675d39*/
    goto LABEL_8; /*0x100675d39*/
  if ( (_BYTE)v16 ) /*0x100675d43*/
    goto LABEL_6; /*0x100675d43*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::hc1042280a43692a5( /*0x100675d65*/
         &v16,
         &anon_4776471024d1e9bb78f2861cb2b51e1e_489,
         18,
         a3 + 352);
  if ( v7 ) /*0x100675d6b*/
    goto LABEL_8; /*0x100675d6b*/
  if ( (_BYTE)v16 ) /*0x100675d75*/
    goto LABEL_6; /*0x100675d75*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100675d94*/
         &v16,
         &anon_4776471024d1e9bb78f2861cb2b51e1e_490,
         19,
         a3 + 72);
  if ( v7 ) /*0x100675d9a*/
    goto LABEL_8; /*0x100675d9a*/
  if ( (_BYTE)v16 ) /*0x100675da4*/
    goto LABEL_6; /*0x100675da4*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100675dc3*/
         &v16,
         &anon_4776471024d1e9bb78f2861cb2b51e1e_491,
         18,
         a3 + 96);
  if ( v7 ) /*0x100675dc9*/
    goto LABEL_8; /*0x100675dc9*/
  if ( (_BYTE)v16 ) /*0x100675dd3*/
    goto LABEL_6; /*0x100675dd3*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::h22d15134cc13a0b5( /*0x100675df5*/
         &v16,
         &anon_4776471024d1e9bb78f2861cb2b51e1e_492,
         23,
         a3 + 360);
  if ( v7 ) /*0x100675dfb*/
    goto LABEL_8; /*0x100675dfb*/
  if ( (_BYTE)v16 ) /*0x100675e05*/
    goto LABEL_6; /*0x100675e05*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::hc1042280a43692a5( /*0x100675e27*/
         &v16,
         &anon_4776471024d1e9bb78f2861cb2b51e1e_493,
         20,
         a3 + 368);
  if ( v7 ) /*0x100675e2d*/
    goto LABEL_8; /*0x100675e2d*/
  if ( (_BYTE)v16 ) /*0x100675e37*/
    goto LABEL_6; /*0x100675e37*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100675e56*/
         &v16,
         &anon_4776471024d1e9bb78f2861cb2b51e1e_494,
         21,
         a3 + 120);
  if ( v7 ) /*0x100675e5c*/
    goto LABEL_8; /*0x100675e5c*/
  if ( (_BYTE)v16 ) /*0x100675e66*/
    goto LABEL_6; /*0x100675e66*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100675e88*/
         &v16,
         &anon_4776471024d1e9bb78f2861cb2b51e1e_495,
         20,
         a3 + 144);
  if ( v7 ) /*0x100675e8e*/
    goto LABEL_8; /*0x100675e8e*/
  if ( (_BYTE)v16 ) /*0x100675e98*/
    goto LABEL_6; /*0x100675e98*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::h22d15134cc13a0b5( /*0x100675eba*/
         &v16,
         &anon_4776471024d1e9bb78f2861cb2b51e1e_496,
         25,
         a3 + 376);
  if ( v7 ) /*0x100675ec0*/
    goto LABEL_8; /*0x100675ec0*/
  v7 = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h7572122a5e694a37( /*0x100675ed6*/
         &v16,
         a3 + 393);
  if ( v7 ) /*0x100675edc*/
    goto LABEL_8; /*0x100675edc*/
  if ( (_BYTE)v16 ) /*0x100675ee6*/
    goto LABEL_6; /*0x100675ee6*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100675f08*/
         &v16,
         &anon_4776471024d1e9bb78f2861cb2b51e1e_498,
         19,
         a3 + 168);
  if ( v7 ) /*0x100675f0e*/
    goto LABEL_8; /*0x100675f0e*/
  v7 = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hf9429a5a5a2fb116( /*0x100675f24*/
         &v16,
         a3 + 394);
  if ( v7 ) /*0x100675f2a*/
    goto LABEL_8; /*0x100675f2a*/
  if ( (_BYTE)v16 ) /*0x100675f34*/
    goto LABEL_6; /*0x100675f34*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100675f56*/
         &v16,
         &anon_4776471024d1e9bb78f2861cb2b51e1e_500,
         16,
         a3 + 192);
  if ( v7 ) /*0x100675f5c*/
    goto LABEL_8; /*0x100675f5c*/
  v7 = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::he8b9813f26a0efcb( /*0x100675f72*/
         &v16,
         a3 + 288);
  if ( v7 ) /*0x100675f78*/
    goto LABEL_8; /*0x100675f78*/
  if ( (_BYTE)v16 ) /*0x100675f82*/
    goto LABEL_6; /*0x100675f82*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100675fa4*/
         &v16,
         &anon_4776471024d1e9bb78f2861cb2b51e1e_502,
         18,
         a3 + 216);
  if ( v7 ) /*0x100675faa*/
    goto LABEL_8; /*0x100675faa*/
  v7 = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h89ba0dedfbfc7849( /*0x100675fc0*/
         &v16,
         a3 + 388);
  if ( v7 ) /*0x100675fc6*/
    goto LABEL_8; /*0x100675fc6*/
  if ( (_BYTE)v16 ) /*0x100675fd0*/
    goto LABEL_6; /*0x100675fd0*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::h95b301bfeb38a520( /*0x100675ff2*/
         &v16,
         &anon_4776471024d1e9bb78f2861cb2b51e1e_504,
         12,
         a3 + 392);
  if ( v7 ) /*0x100675ff8*/
    goto LABEL_8; /*0x100675ff8*/
  if ( (_BYTE)v16 ) /*0x100676002*/
    goto LABEL_6; /*0x100676002*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100676024*/
         &v16,
         &anon_4776471024d1e9bb78f2861cb2b51e1e_505,
         11,
         a3 + 240);
  if ( v7 ) /*0x10067602a*/
    goto LABEL_8; /*0x10067602a*/
  if ( (_BYTE)v16 ) /*0x100676034*/
  {
LABEL_6:
    v7 = serde_json::ser::invalid_raw_value::hd0c8797395d11416(result); /*0x100675bc8*/
    goto LABEL_8; /*0x100675bd0*/
  }
  v7 = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100676056*/
         &v16,
         &anon_4776471024d1e9bb78f2861cb2b51e1e_506,
         15,
         a3 + 264);
  if ( v7 ) /*0x10067605c*/
    goto LABEL_8; /*0x10067605c*/
  v7 = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h09ef640e86948a2a( /*0x100676075*/
         &v16,
         a3 + 395);
  if ( v7 ) /*0x10067607b*/
    goto LABEL_8; /*0x10067607b*/
  v12[1] = v17; /*0x100676089*/
  v12[0] = v16; /*0x10067608d*/
  _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h8cb6421129da0910(v12); /*0x100676095*/
  v8 = v13; /*0x10067609a*/
  v7 = (__int64)v14; /*0x10067609e*/
  if ( __OFSUB__(-v13, 1) ) /*0x1006760a8*/
  {
LABEL_10:
    *a1 = 3; /*0x100675c0d*/
    a1[1] = v7; /*0x100675c14*/
    return result; /*0x100675c14*/
  }
  v9 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9( /*0x1006760c6*/
         *(void **)(a2 + 560),
         *(_QWORD *)(a2 + 568),
         (__int64)v14,
         v15,
         0);
  if ( v9 ) /*0x1006760ce*/
  {
    *a1 = 2; /*0x1006760d0*/
    a1[1] = v9; /*0x1006760d7*/
  }
  else
  {
    *a1 = 11; /*0x1006760ec*/
  }
  if ( v8 ) /*0x1006760f6*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v8, 1); /*0x100676107*/
  return result; /*0x100675c18*/
}