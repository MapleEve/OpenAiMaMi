// __ZN13codexmate_lib4core5relay15config_takeover22is_aimami_catalog_path @ 0x1008f6ff0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::config_takeover::is_aimami_catalog_path::h7d9acdde71b76a74(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r15
  __int64 v3; // rsi
  __int64 v4; // rsi
  __int64 v6; // [rsp+8h] [rbp-78h] BYREF
  __int64 v7; // [rsp+10h] [rbp-70h]
  __int64 v8; // [rsp+18h] [rbp-68h]
  _QWORD v9[2]; // [rsp+20h] [rbp-60h] BYREF
  __int64 v10; // [rsp+38h] [rbp-48h] BYREF
  void *__s2; // [rsp+40h] [rbp-40h]
  __int64 v12; // [rsp+48h] [rbp-38h]
  __int64 v13; // [rsp+50h] [rbp-30h] BYREF
  void *__s1; // [rsp+58h] [rbp-28h]
  size_t __n; // [rsp+60h] [rbp-20h]

  codexmate_lib::core::relay::config_takeover::normalize_catalog_path::hb03c0ac6c1aee1ca(&v13); /*0x1008f7004*/
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1008f7028*/
    &v6,
    *(_QWORD *)(a1 + 584),
    *(_QWORD *)(a1 + 592),
    "codex_router_catalog.json",
    25);
  v1 = v7; /*0x1008f702d*/
  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(v9, v7, v8); /*0x1008f703c*/
  v2 = v9[1]; /*0x1008f7041*/
  codexmate_lib::core::relay::config_takeover::normalize_catalog_path::hb03c0ac6c1aee1ca(&v10); /*0x1008f7050*/
  if ( !(2LL * v9[0]) ) /*0x1008f7059*/
  {
    v3 = v6; /*0x1008f7066*/
    if ( !v6 ) /*0x1008f706d*/
      goto LABEL_4; /*0x1008f706d*/
    goto LABEL_3; /*0x1008f706d*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v9[0], 1); /*0x1008f70e8*/
  v3 = v6; /*0x1008f70ed*/
  if ( v6 ) /*0x1008f70f4*/
LABEL_3:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, v3, 1); /*0x1008f706f*/
LABEL_4:
  if ( __n != v12 ) /*0x1008f7084*/
  {
    LODWORD(v1) = 0; /*0x1008f70a3*/
    v4 = v10; /*0x1008f70a5*/
    if ( !v10 ) /*0x1008f70ac*/
      goto LABEL_9; /*0x1008f70ac*/
    goto LABEL_8; /*0x1008f70ac*/
  }
  LOBYTE(v1) = memcmp(__s1, __s2, __n) == 0; /*0x1008f7095*/
  v4 = v10; /*0x1008f7098*/
  if ( v10 ) /*0x1008f709f*/
LABEL_8:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v4, 1); /*0x1008f70ae*/
LABEL_9:
  if ( v13 ) /*0x1008f70c3*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v13, 1); /*0x1008f70ce*/
  return (unsigned int)v1; /*0x1008f70d5*/
}