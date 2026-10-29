// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::repository::normalize_usage_refresh_interval::ha67bf852400b1119; addr: 0x100ae9060; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:20:51Z
const char *__fastcall codexmate_lib::core::repository::normalize_usage_refresh_interval::ha67bf852400b1119(
        __int64 a1,
        __int64 a2)
{
  const char *result; // rax
  unsigned __int32 v3; // eax
  unsigned int v4; // ecx
  int v5; // esi

  switch ( a2 ) /*0x100ae9068*/
  {
    case 2LL: /*0x100ae9068*/
      if ( *(_WORD *)a1 == 27953 ) /*0x100ae9100*/
      {
        return "1m"; /*0x100ae9132*/
      }
      else if ( *(_WORD *)a1 == 27955 ) /*0x100ae9107*/
      {
        return (const char *)&anon_0f4958e580c48b75b8f6e2e6da3e4224_331; /*0x100ae913b*/
      }
      else
      {
        result = nullptr; /*0x100ae910c*/
        if ( *(_WORD *)a1 == 27957 ) /*0x100ae9128*/
          return "5musage_401_retry"; /*0x100ae9128*/
      }
      break;
    case 6LL: /*0x100ae9068*/
      v3 = _byteswap_ulong(*(_DWORD *)a1); /*0x100ae90b2*/
      v4 = 1835101813; /*0x100ae90b4*/
      if ( v3 != 1835101813 /*0x100ae90d7*/
        || (v3 = (unsigned __int16)__ROL2__(*(_WORD *)(a1 + 4), 8), v4 = 24940, v5 = 0, (unsigned __int16)v3 != 24940) )
      {
        v5 = 2 * (v3 >= v4) - 1; /*0x100ae90e1*/
      }
      result = nullptr; /*0x100ae90e5*/
      if ( !v5 ) /*0x100ae90f0*/
        return (const char *)&anon_0f4958e580c48b75b8f6e2e6da3e4224_329; /*0x100ae90f0*/
      break;
    case 3LL: /*0x100ae9068*/
      result = nullptr; /*0x100ae9093*/
      if ( !(*(_WORD *)a1 ^ 0x3033 | *(unsigned __int8 *)(a1 + 2) ^ 0x73) ) /*0x100ae9097*/
        return (const char *)&anon_0f4958e580c48b75b8f6e2e6da3e4224_330; /*0x100ae90aa*/
      break;
    default:
      return nullptr; /*0x100ae912e*/
  }
  return result; /*0x100ae90ae*/
}