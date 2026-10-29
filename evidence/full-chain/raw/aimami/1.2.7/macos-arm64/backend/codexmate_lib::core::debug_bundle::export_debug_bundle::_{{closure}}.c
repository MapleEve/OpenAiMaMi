// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::debug_bundle::export_debug_bundle::_$u7b$$u7b$closure$u7d$$u7d$::h18ce5f60e9e13e14; addr: 0x100439650; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:54:18Z
__int64 __fastcall codexmate_lib::core::debug_bundle::export_debug_bundle::_$u7b$$u7b$closure$u7d$$u7d$::h18ce5f60e9e13e14(
        _QWORD *a1,
        _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD v4[3]; // [rsp+8h] [rbp-38h] BYREF
  _QWORD v5[4]; // [rsp+20h] [rbp-20h] BYREF

  v5[0] = a2; /*0x100439661*/
  v5[1] = _$LT$zip..result..ZipError$u20$as$u20$core..fmt..Display$GT$::fmt::h5ee28b71fd8f1b3c; /*0x10043966c*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v4, &unk_1018F6D9C, v5); /*0x10043967f*/
  a1[3] = v4[2]; /*0x100439688*/
  v2 = v4[0]; /*0x10043968c*/
  a1[2] = v4[1]; /*0x100439694*/
  a1[1] = v2; /*0x100439698*/
  *a1 = 10; /*0x10043969c*/
  return core::ptr::drop_in_place$LT$zip..result..ZipError$GT$::h4417b06c96c0e721(*a2, a2[1]); /*0x1004396af*/
}