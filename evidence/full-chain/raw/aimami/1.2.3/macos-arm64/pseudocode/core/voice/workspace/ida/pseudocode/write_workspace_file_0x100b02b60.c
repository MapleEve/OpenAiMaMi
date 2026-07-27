// __ZN13codexmate_lib4core5voice9workspace20write_workspace_file @ 0x100b02b60 | 基线 same-set
double __fastcall codexmate_lib::core::voice::workspace::write_workspace_file::hda812925c979e5b7(
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

  v5 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h1799bcb22c1ee820((_QWORD *)a2); /*0x100b02b7b*/
  if ( v5 ) /*0x100b02b83*/
  {
    *a1 = 2; /*0x100b02b85*/
    a1[1] = v5; /*0x100b02b8c*/
    return result; /*0x100b02b90*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a2); /*0x100b02b95*/
  v6 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x100b02ba4*/
  if ( !v6 ) /*0x100b02bac*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x100b02daf*/
  v13 = 128; /*0x100b02bb2*/
  v14 = v6; /*0x100b02bba*/
  v10[0] = &v13; /*0x100b02bc2*/
  v10[1] = &unk_10167BCD0; /*0x100b02bcd*/
  v10[2] = 2; /*0x100b02bd1*/
  v10[3] = 1; /*0x100b02bd9*/
  v11 = 0; /*0x100b02be1*/
  *v6 = 123; /*0x100b02be5*/
  v15 = 1; /*0x100b02be8*/
  LOWORD(v16) = 256; /*0x100b02bf0*/
  v17 = v10; /*0x100b02bfa*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::hfd98e100bba7a4bb( /*0x100b02c1a*/
         &v16,
         &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_218,
         13,
         a3 + 136);
  if ( v7 ) /*0x100b02c20*/
    goto LABEL_8; /*0x100b02c20*/
  if ( (_BYTE)v16 ) /*0x100b02c26*/
    goto LABEL_6; /*0x100b02c26*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::hc1042280a43692a5( /*0x100b02c4e*/
         &v16,
         &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1054,
         13,
         a3 + 128);
  if ( v7 ) /*0x100b02c54*/
  {
LABEL_8:
    if ( v13 ) /*0x100b02c5d*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v13, 1); /*0x100b02c68*/
    goto LABEL_10; /*0x100b02c68*/
  }
  if ( (_BYTE)v16 ) /*0x100b02c89*/
    goto LABEL_6; /*0x100b02c89*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::h887a71854eced24b( /*0x100b02ca3*/
         &v16,
         &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1055,
         9,
         a3);
  if ( v7 ) /*0x100b02ca9*/
    goto LABEL_8; /*0x100b02ca9*/
  if ( (_BYTE)v16 ) /*0x100b02caf*/
  {
LABEL_6:
    v7 = serde_json::ser::invalid_raw_value::hd0c8797395d11416(result); /*0x100b02c28*/
    goto LABEL_8; /*0x100b02c30*/
  }
  v7 = serde_core::ser::SerializeMap::serialize_entry::hcfa5429492f081a7( /*0x100b02cce*/
         &v16,
         &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1056,
         10,
         a3 + 24);
  if ( v7 ) /*0x100b02cd4*/
    goto LABEL_8; /*0x100b02cd4*/
  v7 = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h5b2f190f54b84961( /*0x100b02ce3*/
         &v16,
         a3 + 48);
  if ( v7 ) /*0x100b02ce9*/
    goto LABEL_8; /*0x100b02ce9*/
  v7 = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h4662d51a1486a6ef( /*0x100b02cfc*/
         &v16,
         a3 + 72);
  if ( v7 ) /*0x100b02d02*/
    goto LABEL_8; /*0x100b02d02*/
  v7 = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::hfc7366ae4a8739ac( /*0x100b02d18*/
         &v16,
         a3 + 96);
  if ( v7 ) /*0x100b02d1e*/
    goto LABEL_8; /*0x100b02d1e*/
  v12[1] = v17; /*0x100b02d2c*/
  v12[0] = v16; /*0x100b02d30*/
  _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h8cb6421129da0910(v12); /*0x100b02d38*/
  v8 = v13; /*0x100b02d3d*/
  v7 = (__int64)v14; /*0x100b02d41*/
  if ( __OFSUB__(-v13, 1) ) /*0x100b02d4b*/
  {
LABEL_10:
    *a1 = 3; /*0x100b02c6d*/
    a1[1] = v7; /*0x100b02c74*/
    return result; /*0x100b02c74*/
  }
  v9 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9( /*0x100b02d69*/
         *(void **)(a2 + 536),
         *(_QWORD *)(a2 + 544),
         (__int64)v14,
         v15,
         0);
  if ( v9 ) /*0x100b02d71*/
  {
    *a1 = 2; /*0x100b02d73*/
    a1[1] = v9; /*0x100b02d7a*/
  }
  else
  {
    *a1 = 11; /*0x100b02d80*/
  }
  if ( v8 ) /*0x100b02d8a*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v8, 1); /*0x100b02d9b*/
  return result; /*0x100b02c78*/
}