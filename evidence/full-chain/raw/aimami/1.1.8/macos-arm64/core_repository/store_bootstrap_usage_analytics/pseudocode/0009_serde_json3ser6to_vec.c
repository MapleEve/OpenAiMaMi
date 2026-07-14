// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND store_bootstrap_usage_analytics node 0x100514760 depth=1
__int64 __fastcall serde_json::ser::to_vec::he041d2f67f554c3b(__int64 *a1, __int64 a2)
{
  _BYTE *v2; // rax
  __int64 v3; // rax
  __int64 result; // rax
  __int64 *v5; // [rsp+0h] [rbp-40h] BYREF
  __int64 v6; // [rsp+8h] [rbp-38h] BYREF
  _BYTE *v7; // [rsp+10h] [rbp-30h]
  __int64 v8; // [rsp+18h] [rbp-28h]
  __int16 v9; // [rsp+20h] [rbp-20h] BYREF
  unsigned __int64 **v10; // [rsp+28h] [rbp-18h]

  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x100514771*/
  v2 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(0x80u, 1u); /*0x100514780*/
  if ( !v2 ) /*0x100514788*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x100514917*/
  v6 = 128; /*0x10051478e*/
  v7 = v2; /*0x100514796*/
  v5 = &v6; /*0x10051479e*/
  *v2 = 123; /*0x1005147a2*/
  v8 = 1; /*0x1005147a5*/
  v9 = 256; /*0x1005147ad*/
  v10 = (unsigned __int64 **)&v5; /*0x1005147b7*/
  v3 = serde_core::ser::SerializeMap::serialize_entry::hc491f39c2358dace(&v9, &unk_1012C8816, 13, a2 + 920); /*0x1005147d2*/
  if ( v3 /*0x100514883*/
    || (v3 = serde_core::ser::SerializeMap::serialize_entry::h812a26d5ce3483a4(
               &v9,
               &anon_daf50d54a2d3ecbdf54de6a8568b21ab_251,
               9,
               a2)) != 0
    || (v3 = serde_core::ser::SerializeMap::serialize_entry::hb923553cfbc29b05(
               &v9,
               &anon_daf50d54a2d3ecbdf54de6a8568b21ab_252,
               19,
               a2 + 16)) != 0
    || (v3 = serde_core::ser::SerializeMap::serialize_entry::hf29ed775cb72c155(
               &v9,
               &anon_daf50d54a2d3ecbdf54de6a8568b21ab_253,
               14,
               a2 + 696)) != 0
    || (v3 = serde_core::ser::SerializeMap::serialize_entry::hdbdc60128f9c0b22(
               &v9,
               &anon_daf50d54a2d3ecbdf54de6a8568b21ab_254,
               10,
               a2 + 792)) != 0
    || (v3 = serde_core::ser::SerializeMap::serialize_entry::hb2d372daee6d5b00(
               &v9,
               &anon_daf50d54a2d3ecbdf54de6a8568b21ab_255,
               15,
               a2 + 856)) != 0 )
  {
    a1[1] = v3; /*0x100514885*/
    result = 0x8000000000000000LL; /*0x100514889*/
    *a1 = 0x8000000000000000LL; /*0x100514893*/
    if ( v6 ) /*0x10051489d*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1005148a8*/
  }
  else
  {
    if ( (v9 & 1) != 0 ) /*0x1005148ba*/
      core::panicking::panic::h286e2dd5eab048be((__int64)&unk_1012C879B, 40, (__int64)&off_101533498); /*0x100514906*/
    if ( HIBYTE(v9) ) /*0x1005148c0*/
      alloc::vec::Vec$LT$T$C$A$GT$::extend_from_slice::h2fa7c5e9e7ae59a0( /*0x1005148d5*/
        *v10,
        &anon_daf50d54a2d3ecbdf54de6a8568b21ab_12,
        1u);
    a1[2] = v8; /*0x1005148de*/
    result = v6; /*0x1005148e2*/
    a1[1] = (__int64)v7; /*0x1005148ea*/
    *a1 = result; /*0x1005148ee*/
  }
  return result; /*0x1005148ad*/
}