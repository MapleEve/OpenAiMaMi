// __ZN13codexmate_lib4core5relay15config_takeover13backup_exists @ 0x1008f50d0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::config_takeover::backup_exists::h42f18c99a961aa37(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r14
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v7; // [rsp+0h] [rbp-D0h] BYREF
  __int64 v8; // [rsp+8h] [rbp-C8h]
  __int64 v9; // [rsp+98h] [rbp-38h] BYREF
  __int64 v10; // [rsp+A0h] [rbp-30h]
  __int64 v11; // [rsp+A8h] [rbp-28h]

  v1 = *(_QWORD *)(a1 + 584); /*0x1008f50e2*/
  v2 = *(_QWORD *)(a1 + 592); /*0x1008f50e9*/
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1008f5107*/
    &v9,
    v1,
    v2,
    "router-takeover-backup.json# >>> aimami-relay managed start (DO NOT EDIT MANUALLY)",
    27);
  v3 = v10; /*0x1008f510c*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v7, v10, v11); /*0x1008f511e*/
  v4 = v7; /*0x1008f5123*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x1008f5134*/
    v7,
    v8);
  if ( v4 ) /*0x1008f513c*/
  {
    if ( v9 ) /*0x1008f5145*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v9, 1); /*0x1008f514f*/
    std::path::Path::_join::hb1a495d4f06b13b8(&v9, v1, v2, &anon_155c4da9b5393270cfa7378e2b52c417_290, 34); /*0x1008f516b*/
    v5 = v10; /*0x1008f5170*/
    std::sys::fs::metadata::h32fa16d3052ea535(&v7, v10, v11); /*0x1008f5182*/
    LODWORD(v2) = v7; /*0x1008f5187*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h9fa48c8194813fa0( /*0x1008f5198*/
      v7,
      v8);
    if ( v9 ) /*0x1008f51a4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v9, 1); /*0x1008f51ae*/
    LOBYTE(v2) = v2 ^ 1; /*0x1008f51b3*/
  }
  else
  {
    if ( v9 ) /*0x1008f51c0*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v9, 1); /*0x1008f51ca*/
    LOBYTE(v2) = 1; /*0x1008f51cf*/
  }
  return (unsigned int)v2; /*0x1008f51d5*/
}