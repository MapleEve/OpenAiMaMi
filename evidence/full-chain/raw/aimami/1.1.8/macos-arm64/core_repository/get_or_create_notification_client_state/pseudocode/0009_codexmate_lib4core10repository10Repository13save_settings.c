// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND get_or_create_notification_client_state node 0x100523730 depth=1
__int64 __fastcall codexmate_lib::core::repository::Repository::save_settings::h760b790d1e1aa2e7(
        _QWORD *a1,
        _BYTE **a2,
        __int64 a3)
{
  __int64 result; // rax
  _BYTE *v5; // rax
  __int64 v6; // r12
  _QWORD v7[4]; // [rsp+8h] [rbp-98h] BYREF
  char v8; // [rsp+28h] [rbp-78h]
  _QWORD v9[3]; // [rsp+30h] [rbp-70h] BYREF
  _QWORD v10[2]; // [rsp+48h] [rbp-58h] BYREF
  __int64 v11; // [rsp+58h] [rbp-48h] BYREF
  _BYTE *v12; // [rsp+60h] [rbp-40h]
  __int64 v13; // [rsp+68h] [rbp-38h]
  __int64 v14; // [rsp+70h] [rbp-30h] BYREF
  _QWORD *v15; // [rsp+78h] [rbp-28h]

  result = (__int64)codexmate_lib::platform::paths::CodexPaths::ensure_directories::h65b32115a90fc557(a2); /*0x10052374e*/
  if ( result ) /*0x100523756*/
    goto LABEL_2; /*0x100523756*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100523768*/
  v5 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x80u, 1u); /*0x100523777*/
  if ( !v5 ) /*0x10052377f*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x10052398c*/
  v11 = 128; /*0x100523785*/
  v12 = v5; /*0x10052378d*/
  v7[0] = &v11; /*0x100523795*/
  v7[1] = &unk_1012C87C3; /*0x1005237a3*/
  v7[2] = 2; /*0x1005237aa*/
  v7[3] = 1; /*0x1005237b5*/
  v8 = 0; /*0x1005237bd*/
  *v5 = 123; /*0x1005237c1*/
  v13 = 1; /*0x1005237c4*/
  LOWORD(v14) = 256; /*0x1005237cc*/
  v15 = v7; /*0x1005237d9*/
  result = serde_core::ser::SerializeMap::serialize_entry::hde5b3ac94e8f8ff9( /*0x1005237f4*/
             &v14,
             &anon_daf50d54a2d3ecbdf54de6a8568b21ab_220,
             7,
             a3 + 144);
  v6 = result; /*0x1005237f9*/
  if ( result ) /*0x1005237ff*/
    goto LABEL_8; /*0x1005237ff*/
  if ( (_BYTE)v14 ) /*0x100523805*/
    goto LABEL_6; /*0x100523805*/
  result = serde_core::ser::SerializeMap::serialize_entry::he4543b245da1c5f6( /*0x100523825*/
             &v14,
             &anon_daf50d54a2d3ecbdf54de6a8568b21ab_221,
             20,
             a3 + 16);
  v6 = result; /*0x10052382a*/
  if ( result ) /*0x100523830*/
  {
LABEL_8:
    if ( v11 ) /*0x100523839*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100523844*/
    goto LABEL_10; /*0x100523844*/
  }
  if ( (_BYTE)v14 ) /*0x100523868*/
    goto LABEL_6; /*0x100523868*/
  result = serde_core::ser::SerializeMap::serialize_entry::h6bbf1a7b791aa27c( /*0x10052387e*/
             &v14,
             &anon_daf50d54a2d3ecbdf54de6a8568b21ab_222,
             8,
             a3 + 64);
  v6 = result; /*0x100523883*/
  if ( result ) /*0x100523889*/
    goto LABEL_8; /*0x100523889*/
  if ( (_BYTE)v14 ) /*0x10052388f*/
    goto LABEL_6; /*0x10052388f*/
  result = serde_core::ser::SerializeMap::serialize_entry::h6bbf1a7b791aa27c( /*0x1005238a9*/
             &v14,
             &anon_daf50d54a2d3ecbdf54de6a8568b21ab_223,
             18,
             a3 + 88);
  v6 = result; /*0x1005238ae*/
  if ( result ) /*0x1005238b4*/
    goto LABEL_8; /*0x1005238b4*/
  if ( (_BYTE)v14 ) /*0x1005238be*/
  {
LABEL_6:
    result = serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x100523807*/
    v6 = result; /*0x10052380c*/
    goto LABEL_8; /*0x10052380f*/
  }
  result = serde_core::ser::SerializeMap::serialize_entry::had68fa539eec3620( /*0x1005238d7*/
             &v14,
             &anon_daf50d54a2d3ecbdf54de6a8568b21ab_224,
             18,
             a3);
  v6 = result; /*0x1005238dc*/
  if ( result ) /*0x1005238e2*/
    goto LABEL_8; /*0x1005238e2*/
  result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h9916d12df3d5dc95( /*0x1005238f0*/
             &v14,
             a3 + 112);
  v6 = result; /*0x1005238f5*/
  if ( result ) /*0x1005238fb*/
    goto LABEL_8; /*0x1005238fb*/
  result = _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::serialize_field::h1f59517dfe2a5904( /*0x10052390c*/
             &v14,
             a3 + 40);
  v6 = result; /*0x100523911*/
  if ( result ) /*0x100523917*/
    goto LABEL_8; /*0x100523917*/
  v10[1] = v15; /*0x100523925*/
  v10[0] = v14; /*0x100523929*/
  _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h012513cddb363fda(v10); /*0x100523931*/
  result = v11; /*0x100523936*/
  v6 = (__int64)v12; /*0x10052393a*/
  if ( __OFSUB__(-v11, 1) ) /*0x100523944*/
  {
LABEL_10:
    *a1 = 3; /*0x100523849*/
    a1[1] = v6; /*0x100523850*/
    return result; /*0x100523863*/
  }
  v9[0] = v11; /*0x10052394e*/
  v9[1] = v12; /*0x100523952*/
  v9[2] = v13; /*0x100523956*/
  result = std::fs::write::he202b9221f99a334(a2 + 54, v9); /*0x100523968*/
  if ( result ) /*0x100523970*/
  {
LABEL_2:
    *a1 = 2; /*0x100523758*/
    a1[1] = result; /*0x10052375f*/
    return result; /*0x100523763*/
  }
  *a1 = 10; /*0x100523976*/
  return result; /*0x100523854*/
}