// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::index::now::h1fd3715524c6da5d; addr: 0x10089b7d0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:17Z
__int64 codexmate_lib::core::analytics::index::now::h1fd3715524c6da5d()
{
  int v0; // edx
  int v1; // ecx
  unsigned int v2; // ecx
  _DWORD v4[3]; // [rsp+4h] [rbp-Ch] BYREF

  chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(v4); /*0x10089b7dc*/
  v0 = (v4[0] >> 13) - 1; /*0x10089b7e9*/
  v1 = 0; /*0x10089b7ec*/
  if ( v4[0] >> 13 <= 0 ) /*0x10089b7f0*/
  {
    v2 = (1 - (v4[0] >> 13)) / 0x190u + 1; /*0x10089b804*/
    v0 += 400 * v2; /*0x10089b80c*/
    v1 = -146097 * v2; /*0x10089b80e*/
  }
  return v4[1] + 86400LL * (((v0 / 100) >> 2) + ((1461 * v0) >> 2) + v1 + ((v4[0] >> 4) & 0x1FF) - v0 / 100 - 719163); /*0x10089b85b*/
}