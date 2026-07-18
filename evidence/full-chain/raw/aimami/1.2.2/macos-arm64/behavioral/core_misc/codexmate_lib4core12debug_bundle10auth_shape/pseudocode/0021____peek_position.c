// mac 1.2.2 NEW codexmate_lib4core12debug_bundle10auth_shape 0x101310dc0 d=3
__int64 __fastcall _$LT$serde_json..read..StrRead$u20$as$u20$serde_json..read..Read$GT$::peek_position::h7b2b3529a5a283fb(
        __int64 *a1)
{
  unsigned __int64 v1; // r15
  __int64 v2; // r14
  __int64 v3; // rdx
  unsigned __int64 v4; // rdx

  v1 = a1[1]; /*0x101310dcb*/
  v2 = *a1; /*0x101310ddd*/
  if ( (memchr::arch::x86_64::memchr::memrchr_raw::FN::h7edc06033e10b4f5() & 1) != 0 ) /*0x101310dfa*/
  {
    v4 = v3 - v2; /*0x101310dfc*/
    if ( v4 >= v1 ) /*0x101310e06*/
      core::slice::index::slice_index_fail::ha8cca78aa5d38c2d(0, v4 + 1, v1, &anon_abe04cc3e28f8d11082d563363c2ff71_6); /*0x101310e17*/
  }
  return memchr::arch::x86_64::memchr::count_raw::FN::hd63946b3172d0983() + 1; /*0x101310e40*/
}