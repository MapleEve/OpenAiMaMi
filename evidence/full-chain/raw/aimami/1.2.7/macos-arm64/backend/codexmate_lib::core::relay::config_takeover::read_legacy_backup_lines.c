// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::config_takeover::read_legacy_backup_lines::he46e193260940cf8; addr: 0x100224a70; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
double __fastcall codexmate_lib::core::relay::config_takeover::read_legacy_backup_lines::he46e193260940cf8(
        _QWORD *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // r14
  __int64 v6; // r15
  __int64 v7; // rdx
  __int64 v8; // rcx
  double result; // xmm0_8
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD v15[2]; // [rsp+8h] [rbp-D8h] BYREF
  _QWORD v16[2]; // [rsp+18h] [rbp-C8h] BYREF
  _QWORD v17[12]; // [rsp+28h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+88h] [rbp-58h]
  __int64 v19; // [rsp+90h] [rbp-50h]
  __int64 v20; // [rsp+98h] [rbp-48h]
  __int64 v21; // [rsp+A0h] [rbp-40h] BYREF
  __int64 v22; // [rsp+A8h] [rbp-38h]
  __int64 v23; // [rsp+B0h] [rbp-30h]

  std::path::Path::_join::hb1a495d4f06b13b8(&v21, a2, a3, "codex_router_top_level_backup.json", 34); /*0x100224a9b*/
  v3 = v22; /*0x100224aa0*/
  codexmate_lib::core::relay::config_takeover::read_backup_bytes::hcc31af03538a90c5( /*0x100224abb*/
    v17,
    v22,
    v23,
    (__int64)"codex_router_top_level_backup.json",
    34);
  v4 = v17[0]; /*0x100224ac0*/
  v5 = v17[1]; /*0x100224ac7*/
  v6 = v17[2]; /*0x100224ace*/
  v7 = v17[3]; /*0x100224ad5*/
  if ( v17[0] != 11 ) /*0x100224ae0*/
  {
    a1[11] = v17[11]; /*0x100224b17*/
    a1[10] = v17[10]; /*0x100224b20*/
    a1[9] = v17[9]; /*0x100224b29*/
    a1[8] = v17[8]; /*0x100224b32*/
    a1[7] = v17[7]; /*0x100224b3b*/
    a1[6] = v17[6]; /*0x100224b47*/
    v8 = v17[4]; /*0x100224b4c*/
    a1[5] = v17[5]; /*0x100224b5a*/
    a1[4] = v8; /*0x100224b5f*/
    a1[2] = v6; /*0x100224b64*/
    a1[3] = v7; /*0x100224b69*/
    *a1 = v4; /*0x100224b6e*/
    a1[1] = v5; /*0x100224b72*/
LABEL_5:
    if ( v21 ) /*0x100224b7e*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v21, 1); /*0x100224b9d*/
    return result; /*0x100224b9d*/
  }
  if ( __OFSUB__(-v17[1], 1) ) /*0x100224ae5*/
  {
    a1[1] = 0; /*0x100224aee*/
    a1[2] = 8; /*0x100224af7*/
    a1[3] = 0; /*0x100224b00*/
    *a1 = 11; /*0x100224b09*/
    goto LABEL_5; /*0x100224b11*/
  }
  codexmate_lib::core::relay::config_takeover::decode_backup::h6c968de0bc1845a9(v17, v17[2], v17[3]); /*0x100224bac*/
  v10 = v17[0]; /*0x100224bb1*/
  v11 = v17[1]; /*0x100224bb8*/
  v18 = v17[2]; /*0x100224bc6*/
  v19 = v17[3]; /*0x100224bd1*/
  v20 = v17[4]; /*0x100224bdc*/
  if ( v17[0] != 11 ) /*0x100224be4*/
  {
    a1[11] = v17[11]; /*0x100224c74*/
    a1[10] = v17[10]; /*0x100224c7d*/
    a1[9] = v17[9]; /*0x100224c86*/
    a1[8] = v17[8]; /*0x100224c8f*/
    a1[7] = v17[7]; /*0x100224c98*/
    v12 = v17[5]; /*0x100224c9d*/
    a1[6] = v17[6]; /*0x100224cab*/
    a1[5] = v12; /*0x100224cb0*/
    a1[4] = v20; /*0x100224cb9*/
    v13 = v18; /*0x100224cbe*/
    a1[3] = v19; /*0x100224cc6*/
    a1[2] = v13; /*0x100224ccb*/
    *a1 = v10; /*0x100224cd0*/
    a1[1] = v11; /*0x100224cd4*/
    if ( v5 ) /*0x100224cdc*/
      result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x100224ced*/
    goto LABEL_5; /*0x100224cf2*/
  }
  if ( v17[1] != 0x8000000000000000LL ) /*0x100224bf7*/
  {
    v14 = v18; /*0x100224cf7*/
    a1[3] = v19; /*0x100224cff*/
    a1[2] = v14; /*0x100224d04*/
    a1[1] = v11; /*0x100224d09*/
    *a1 = 11; /*0x100224d0e*/
    if ( !v5 ) /*0x100224d19*/
      goto LABEL_15; /*0x100224d19*/
    goto LABEL_14; /*0x100224d19*/
  }
  v16[0] = "codex_router_top_level_backup.json"; /*0x100224bfd*/
  v16[1] = 34; /*0x100224c04*/
  v15[0] = v16; /*0x100224c16*/
  v15[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x100224c24*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4( /*0x100224c40*/
    &v17[1],
    "\xC0\x2A is damaged and was preserved for recovery",
    v15);
  v17[0] = 9; /*0x100224c45*/
  qmemcpy(a1, v17, 0x60u); /*0x100224c5f*/
  if ( v5 ) /*0x100224c65*/
LABEL_14:
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x100224d1b*/
LABEL_15:
  if ( v21 ) /*0x100224d32*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v21, 1); /*0x100224d3c*/
  return result; /*0x100224b8c*/
}
