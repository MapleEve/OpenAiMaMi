// mac 1.2.2 NEW codexmate_lib4core19debug_report_upload15TempBundl 0x10123f480 d=1
unsigned __int64 *__fastcall uuid::v4::_$LT$impl$u20$uuid..Uuid$GT$::new_v4::h0d422edb31edb566(unsigned __int64 *a1)
{
  __int128 *p_buffer; // rdi
  unsigned __int64 v3; // r14
  size_t v4; // rsi
  int v5; // eax
  unsigned int v6; // eax
  int v7; // eax
  unsigned __int64 v8; // rax
  _QWORD v10[2]; // [rsp+0h] [rbp-40h] BYREF
  __int128 buffer; // [rsp+10h] [rbp-30h] BYREF
  int v12; // [rsp+24h] [rbp-1Ch] BYREF

  buffer = 0; /*0x10123f493*/
  p_buffer = &buffer; /*0x10123f497*/
  v3 = 16; /*0x10123f49b*/
  while ( v3 ) /*0x10123f4b3*/
  {
    v4 = 256; /*0x10123f4bc*/
    if ( v3 < 0x100 ) /*0x10123f4c1*/
      v4 = v3; /*0x10123f4c1*/
    v3 -= v4; /*0x10123f4c5*/
    v5 = getentropy(p_buffer, v4); /*0x10123f4cc*/
    p_buffer = (__int128 *)((char *)p_buffer + v4); /*0x10123f4d1*/
    if ( v5 ) /*0x10123f4d6*/
    {
      if ( v5 == -1 ) /*0x10123f4db*/
      {
        v6 = getrandom::backends::getentropy::utils::get_errno::h7e3f12c741bc1876(p_buffer); /*0x10123f4dd*/
        v7 = getrandom::error::Error::from_errno::h46d7b3a1b9b06e2a(v6); /*0x10123f4e4*/
      }
      else
      {
        v7 = 65538; /*0x10123f532*/
      }
      v12 = v7; /*0x10123f537*/
      v10[0] = &v12; /*0x10123f53e*/
      v10[1] = _$LT$getrandom..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h2400abe25787d646; /*0x10123f549*/
      core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x10123f55f*/
        (__int64)&anon_1ed837c2ac14fd1afaf795043b950f34_24,
        (__int64)v10,
        (__int64)&anon_1ed837c2ac14fd1afaf795043b950f34_28);
    }
  }
  v8 = _byteswap_uint64(*((_QWORD *)&buffer + 1) & 0xFFFFFFFFFFFF0FFFLL | 0x4000); /*0x10123f51a*/
  a1[1] = _byteswap_uint64(buffer & 0x3FFFFFFFFFFFFFFFLL | 0x8000000000000000LL); /*0x10123f51d*/
  *a1 = v8; /*0x10123f521*/
  return a1; /*0x10123f527*/
}