// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::reader::modified::hcf3dc09dbbb6ce65; addr: 0x1009c1580; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:21Z
__int64 __fastcall codexmate_lib::core::analytics::reader::modified::hcf3dc09dbbb6ce65(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r14
  __int64 v3; // r12
  __int64 v4; // rsi
  __int64 v6; // [rsp+8h] [rbp-48h] BYREF
  int v7; // [rsp+10h] [rbp-40h]
  __int64 v8; // [rsp+18h] [rbp-38h] BYREF
  __int64 v9; // [rsp+20h] [rbp-30h]
  unsigned int v10; // [rsp+28h] [rbp-28h]

  std::fs::Metadata::modified::h0e075817eaa8c909(&v8, a1); /*0x1009c1596*/
  if ( (_DWORD)v9 == 1000000000 ) /*0x1009c15a3*/
  {
    if ( (v8 & 3) == 1 ) /*0x1009c15b1*/
    {
      v1 = v8 - 1; /*0x1009c15b3*/
      v2 = *(_QWORD *)(v8 - 1); /*0x1009c15b7*/
      v3 = *(_QWORD *)(v8 + 7); /*0x1009c15bb*/
      if ( *(_QWORD *)v3 ) /*0x1009c15bf*/
        (*(void (__fastcall **)(__int64))v3)(v2); /*0x1009c15cb*/
      v4 = *(_QWORD *)(v3 + 8); /*0x1009c15cd*/
      if ( v4 ) /*0x1009c15d5*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v4, *(_QWORD *)(v3 + 16)); /*0x1009c15df*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, 24, 8); /*0x1009c15f1*/
    }
    return 0; /*0x1009c15f6*/
  }
  v6 = v8; /*0x1009c15fc*/
  v7 = v9; /*0x1009c1600*/
  std::time::SystemTime::duration_since::had059553cab94f96(&v8, &v6, 0, 0); /*0x1009c160f*/
  if ( (_DWORD)v8 == 1 ) /*0x1009c1618*/
    return 0; /*0x1009c161e*/
  return v10 + 1000000000 * v9; /*0x1009c1633*/
}