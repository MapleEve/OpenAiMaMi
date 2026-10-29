// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::index::scan_file::_$u7b$$u7b$closure$u7d$$u7d$::hde2dc9ae21926d3f; addr: 0x1008a3230; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:18Z
__int64 __fastcall codexmate_lib::core::analytics::index::scan_file::_$u7b$$u7b$closure$u7d$$u7d$::hde2dc9ae21926d3f(
        __int64 *a1)
{
  __int64 v1; // r14
  unsigned int v2; // ebx
  int v3; // ecx
  unsigned int v4; // edx
  _DWORD v6[7]; // [rsp+4h] [rbp-1Ch] BYREF

  v1 = *a1; /*0x1008a323b*/
  v2 = 0; /*0x1008a3243*/
  if ( *(_BYTE *)(*a1 + 88) ) /*0x1008a323e*/
  {
    chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(v6); /*0x1008a3251*/
    v3 = (v6[0] >> 13) - 1; /*0x1008a325e*/
    if ( v6[0] >> 13 <= 0 ) /*0x1008a3263*/
    {
      v4 = (1 - (v6[0] >> 13)) / 0x190u + 1; /*0x1008a3277*/
      v3 += 400 * v4; /*0x1008a327f*/
      v2 = -146097 * v4; /*0x1008a3281*/
    }
    LOBYTE(v2) = 86400LL /*0x1008a32d9*/
               * (int)(((v3 / 100) >> 2) + ((1461 * v3) >> 2) + v2 + ((v6[0] >> 4) & 0x1FF) - v3 / 100 - 719163)
               + v6[1]
               - *(_QWORD *)(v1 + 16) < 75;
  }
  return v2; /*0x1008a32de*/
}