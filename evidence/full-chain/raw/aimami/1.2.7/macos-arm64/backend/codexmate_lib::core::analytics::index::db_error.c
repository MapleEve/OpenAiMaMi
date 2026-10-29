// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::index::db_error::hf0ea913c862a7833; addr: 0x10089f510; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:17Z
__int64 __fastcall codexmate_lib::core::analytics::index::db_error::hf0ea913c862a7833(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rax
  _QWORD v4[3]; // [rsp+8h] [rbp-38h] BYREF
  _QWORD v5[4]; // [rsp+20h] [rbp-20h] BYREF

  v5[0] = a2; /*0x10089f521*/
  v5[1] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10089f52c*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v4, &unk_101902300, v5); /*0x10089f53f*/
  a1[3] = v4[2]; /*0x10089f548*/
  v2 = v4[0]; /*0x10089f54c*/
  a1[2] = v4[1]; /*0x10089f554*/
  a1[1] = v2; /*0x10089f558*/
  *a1 = 10; /*0x10089f55c*/
  return core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(a2); /*0x10089f56b*/
}