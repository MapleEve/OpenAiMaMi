// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::repository::usage_refresh_interval_seconds::h687040f962c82b9d; addr: 0x100ae85e0; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:20:51Z
_BOOL8 __fastcall codexmate_lib::core::repository::usage_refresh_interval_seconds::h687040f962c82b9d(
        __int64 a1,
        __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rsi
  const char *v5; // rcx
  _BOOL8 result; // rax

  v2 = codexmate_lib::core::repository::normalize_usage_refresh_interval::ha67bf852400b1119(a1, a2); /*0x100ae85e4*/
  v4 = 2; /*0x100ae85ec*/
  if ( v2 ) /*0x100ae85f1*/
    v4 = v3; /*0x100ae85f1*/
  v5 = "1m"; /*0x100ae85f5*/
  if ( v2 ) /*0x100ae85fc*/
    v5 = (const char *)v2; /*0x100ae85fc*/
  result = 1; /*0x100ae8600*/
  if ( v4 == 6 ) /*0x100ae8609*/
    return (*(_DWORD *)v5 ^ 0x756E616D | *((unsigned __int16 *)v5 + 2) ^ 0x6C61) != 0; /*0x100ae8631*/
  return result; /*0x100ae8634*/
}