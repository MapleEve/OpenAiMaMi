// mac 1.1.8 PROXY/BOOTSTRAP-BACKEND store_bootstrap_usage_analytics node 0x10105ab10 depth=3
__int64 __fastcall _$LT$serde_json..read..StrRead$u20$as$u20$serde_json..read..Read$GT$::peek_position::h7b2b3529a5a283fb(
        __int64 *a1,
        double a2,
        double a3,
        double a4)
{
  unsigned __int64 v4; // r15
  __int64 v5; // r14
  __int64 v6; // rdx
  unsigned __int64 v7; // rdx

  v4 = a1[1]; /*0x10105ab1b*/
  v5 = *a1; /*0x10105ab2d*/
  if ( (memchr::arch::x86_64::memchr::memrchr_raw::FN::h7edc06033e10b4f5() & 1) != 0 ) /*0x10105ab4a*/
  {
    v7 = v6 - v5; /*0x10105ab4c*/
    if ( v7 >= v4 ) /*0x10105ab56*/
      core::slice::index::slice_index_fail::ha8cca78aa5d38c2d( /*0x10105ab67*/
        0,
        v7 + 1,
        v4,
        &anon_abe04cc3e28f8d11082d563363c2ff71_6,
        a2,
        a3,
        a4);
  }
  return memchr::arch::x86_64::memchr::count_raw::FN::hd63946b3172d0983() + 1; /*0x10105ab90*/
}