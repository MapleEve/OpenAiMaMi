// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::index::Worker::keep_running::h389fb2a09eb7162f; addr: 0x10089e1d0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:17Z
__int64 __fastcall codexmate_lib::core::analytics::index::Worker::keep_running::h389fb2a09eb7162f(__int64 a1)
{
  unsigned int v1; // r14d
  int v2; // ecx
  unsigned int v3; // edx
  _DWORD v5[7]; // [rsp+4h] [rbp-1Ch] BYREF

  v1 = 0; /*0x10089e1df*/
  if ( *(_BYTE *)(a1 + 88) ) /*0x10089e1db*/
  {
    chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(v5); /*0x10089e1f1*/
    v2 = (v5[0] >> 13) - 1; /*0x10089e1fe*/
    if ( v5[0] >> 13 <= 0 ) /*0x10089e203*/
    {
      v3 = (1 - (v5[0] >> 13)) / 0x190u + 1; /*0x10089e217*/
      v2 += 400 * v3; /*0x10089e21f*/
      v1 = -146097 * v3; /*0x10089e221*/
    }
    LOBYTE(v1) = 86400LL /*0x10089e27b*/
               * (int)(((v2 / 100) >> 2) + ((1461 * v2) >> 2) + v1 + ((v5[0] >> 4) & 0x1FF) - v2 / 100 - 719163)
               + v5[1]
               - *(_QWORD *)(a1 + 16) < 75;
  }
  return v1; /*0x10089e282*/
}