// __ZN13codexmate_lib4core10repository10Repository13save_settings @ 0x100a567f0 | 基线 same-set
void __fastcall codexmate_lib::core::repository::Repository::save_settings::hf8edda251fe14f24(
        _QWORD *a1,
        _QWORD *a2,
        __int64 a3,
        double a4)
{
  __int64 v5; // rax
  _BYTE *v6; // rax
  __int64 v7; // r12
  _QWORD v8[4]; // [rsp+8h] [rbp-98h] BYREF
  char v9; // [rsp+28h] [rbp-78h]
  _QWORD v10[3]; // [rsp+30h] [rbp-70h] BYREF
  _QWORD v11[2]; // [rsp+48h] [rbp-58h] BYREF
  __int64 v12; // [rsp+58h] [rbp-48h] BYREF
  _BYTE *v13; // [rsp+60h] [rbp-40h]
  __int64 v14; // [rsp+68h] [rbp-38h]
  __int64 v15; // [rsp+70h] [rbp-30h] BYREF
  _QWORD *v16; // [rsp+78h] [rbp-28h]

  v5 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h1799bcb22c1ee820(a2); /*0x100a5680e*/
  if ( v5 ) /*0x100a56816*/
    goto LABEL_2; /*0x100a56816*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a2); /*0x100a56828*/
  v6 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x100a56837*/
  if ( !v6 ) /*0x100a5683f*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x100a56a7e*/
  v12 = 128; /*0x100a56845*/
  v13 = v6; /*0x100a5684d*/
  v8[0] = &v12; /*0x100a56855*/
  v8[1] = &unk_10167BCD0; /*0x100a56863*/
  v8[2] = 2; /*0x100a5686a*/
  v8[3] = 1; /*0x100a56875*/
  v9 = 0; /*0x100a5687d*/
  *v6 = 123; /*0x100a56881*/
  v14 = 1; /*0x100a56884*/
  LOWORD(v15) = 256; /*0x100a5688c*/
  v16 = v8; /*0x100a56899*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::h9d05ceedab3ac732( /*0x100a568b9*/
         &v15,
         &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_259,
         7,
         a3 + 144);
  if ( v7 ) /*0x100a568bf*/
    goto LABEL_8; /*0x100a568bf*/
  if ( (_BYTE)v15 ) /*0x100a568c5*/
    goto LABEL_6; /*0x100a568c5*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::h8fc6c222f2a7bcea( /*0x100a568ea*/
         &v15,
         &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_260,
         20,
         a3 + 16);
  if ( v7 ) /*0x100a568f0*/
    goto LABEL_8; /*0x100a568f0*/
  if ( (_BYTE)v15 ) /*0x100a56928*/
    goto LABEL_6; /*0x100a56928*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::hbfdf4be0c934feaa( /*0x100a56943*/
         &v15,
         &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_261,
         8,
         a3 + 64);
  if ( v7 ) /*0x100a56949*/
    goto LABEL_8; /*0x100a56949*/
  if ( (_BYTE)v15 ) /*0x100a5694f*/
  {
LABEL_6:
    v7 = serde_json::ser::invalid_raw_value::hd0c8797395d11416(a4); /*0x100a568c7*/
    goto LABEL_8; /*0x100a568cf*/
  }
  v7 = serde_core::ser::SerializeMap::serialize_entry::hbfdf4be0c934feaa( /*0x100a5696e*/
         &v15,
         &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_262,
         18,
         a3 + 88);
  if ( v7 ) /*0x100a56974*/
    goto LABEL_8; /*0x100a56974*/
  if ( (_BYTE)v15 ) /*0x100a5697e*/
    goto LABEL_6; /*0x100a5697e*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::hafaffd1551762989( /*0x100a5699c*/
         &v15,
         &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_263,
         18,
         a3);
  if ( v7 ) /*0x100a569a2*/
    goto LABEL_8; /*0x100a569a2*/
  v7 = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h47486f4b8c8ecfa5( /*0x100a569b5*/
         &v15,
         a3 + 112);
  if ( v7 ) /*0x100a569bb*/
    goto LABEL_8; /*0x100a569bb*/
  v7 = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h4a7a3692a31c1bc4( /*0x100a569ce*/
         &v15,
         a3 + 40);
  if ( v7 ) /*0x100a569d4*/
    goto LABEL_8; /*0x100a569d4*/
  if ( (_BYTE)v15 ) /*0x100a569de*/
    goto LABEL_6; /*0x100a569de*/
  v7 = serde_core::ser::SerializeMap::serialize_entry::h23a74540ff12e1b1( /*0x100a56a03*/
         &v15,
         &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_265,
         21,
         a3 + 145);
  if ( v7 ) /*0x100a56a09*/
  {
LABEL_8:
    if ( v12 ) /*0x100a568f9*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v12, 1); /*0x100a56904*/
    goto LABEL_10; /*0x100a56904*/
  }
  v11[1] = v16; /*0x100a56a17*/
  v11[0] = v15; /*0x100a56a1b*/
  _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h8cb6421129da0910(v11); /*0x100a56a23*/
  v7 = (__int64)v13; /*0x100a56a2c*/
  if ( __OFSUB__(-v12, 1) ) /*0x100a56a36*/
  {
LABEL_10:
    *a1 = 3; /*0x100a56909*/
    a1[1] = v7; /*0x100a56910*/
    return; /*0x100a56923*/
  }
  v10[0] = v12; /*0x100a56a40*/
  v10[1] = v13; /*0x100a56a44*/
  v10[2] = v14; /*0x100a56a48*/
  v5 = std::fs::write::hc31bc44b24b8f4f0(a2 + 54, v10); /*0x100a56a5a*/
  if ( v5 ) /*0x100a56a62*/
  {
LABEL_2:
    *a1 = 2; /*0x100a56818*/
    a1[1] = v5; /*0x100a5681f*/
    return; /*0x100a56823*/
  }
  *a1 = 11; /*0x100a56a68*/
}