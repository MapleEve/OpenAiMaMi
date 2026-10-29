// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::account_reset_credits::validate_cursor::hf8dec41ec24e5a91; addr: 0x1009fd240; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:17Z
__int64 __fastcall codexmate_lib::core::account_reset_credits::validate_cursor::hf8dec41ec24e5a91(
        unsigned __int64 a1,
        unsigned __int8 *a2,
        unsigned __int64 a3)
{
  __int64 result; // rax
  _QWORD *v4; // rbx
  int v5; // ecx
  int v6; // r8d
  int v7; // edi

  v4 = (_QWORD *)a1; /*0x1009fd246*/
  if ( !a2 ) /*0x1009fd24c*/
  {
LABEL_20:
    *v4 = 11; /*0x1009fd3a1*/
    return result; /*0x1009fd3ae*/
  }
  if ( a3 <= 0x800 ) /*0x1009fd259*/
  {
    a3 += (unsigned __int64)a2; /*0x1009fd2d8*/
    while ( a2 != (unsigned __int8 *)a3 ) /*0x1009fd2e3*/
    {
      LODWORD(result) = *a2; /*0x1009fd2e9*/
      if ( (result & 0x80u) != 0LL ) /*0x1009fd2ee*/
      {
        v5 = result & 0x1F; /*0x1009fd312*/
        v6 = a2[1] & 0x3F; /*0x1009fd31a*/
        if ( (unsigned __int8)result <= 0xDFu ) /*0x1009fd320*/
        {
          a2 += 2; /*0x1009fd35d*/
          LODWORD(result) = v6 | (v5 << 6); /*0x1009fd367*/
          if ( (unsigned int)result < 0x20 ) /*0x1009fd36c*/
            goto LABEL_3; /*0x1009fd36c*/
        }
        else
        {
          v7 = (v6 << 6) | a2[2] & 0x3F; /*0x1009fd32d*/
          if ( (unsigned __int8)result < 0xF0u ) /*0x1009fd332*/
          {
            a2 += 3; /*0x1009fd373*/
            a1 = (v5 << 12) | (unsigned int)v7; /*0x1009fd37a*/
            LODWORD(result) = a1; /*0x1009fd37c*/
            if ( (unsigned int)a1 < 0x20 ) /*0x1009fd381*/
              goto LABEL_3; /*0x1009fd381*/
          }
          else
          {
            a1 = (unsigned int)(v7 << 6); /*0x1009fd33e*/
            result = ((result & 7) << 18) | (unsigned int)a1 | a2[3] & 0x3F; /*0x1009fd346*/
            if ( (_DWORD)result == 1114112 ) /*0x1009fd34d*/
              goto LABEL_20; /*0x1009fd34d*/
            a2 += 4; /*0x1009fd34f*/
            if ( (unsigned int)result < 0x20 ) /*0x1009fd356*/
              goto LABEL_3; /*0x1009fd356*/
          }
        }
      }
      else
      {
        ++a2; /*0x1009fd2f0*/
        if ( (unsigned int)result < 0x20 ) /*0x1009fd2f6*/
          goto LABEL_3; /*0x1009fd2f6*/
      }
      result = (unsigned int)(result - 127); /*0x1009fd390*/
      if ( (unsigned int)result < 0x21 ) /*0x1009fd396*/
        goto LABEL_3; /*0x1009fd396*/
    }
    goto LABEL_20; /*0x1009fd2e3*/
  }
LABEL_3:
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a1, a2, a3); /*0x1009fd25b*/
  result = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(35, 1); /*0x1009fd26a*/
  if ( !result ) /*0x1009fd272*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 35); /*0x1009fd3b9*/
  qmemcpy((void *)result, "Invalid reset credit history cursor", 35); /*0x1009fd2ac*/
  *v4 = 9; /*0x1009fd2b6*/
  v4[1] = 35; /*0x1009fd2bd*/
  v4[2] = result; /*0x1009fd2c5*/
  v4[3] = 35; /*0x1009fd2c9*/
  return result; /*0x1009fd2d5*/
}