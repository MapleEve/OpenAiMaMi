// mac 1.2.2 NEW codexmate_lib4core12debug_bundle15inspection_json 0x101312cf0 d=2
unsigned __int64 *__fastcall _$LT$serde_json..value..ser..Serializer$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_seq::hd54869b8f141de3d(
        unsigned __int64 *a1,
        char a2,
        unsigned __int64 a3)
{
  __int64 v3; // r14
  size_t v4; // rbx
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // rcx

  v3 = 0; /*0x101312cfb*/
  if ( (a2 & 1) == 0 ) /*0x101312d02*/
    a3 = 0; /*0x101312d02*/
  v4 = 32 * a3; /*0x101312d09*/
  if ( a3 >> 59 != 0 || 32 * a3 > 0x7FFFFFFFFFFFFFF8LL ) /*0x101312d24*/
LABEL_4:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v3); /*0x101312d2b*/
  if ( v4 ) /*0x101312d39*/
  {
    v5 = a3; /*0x101312d3e*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x101312d41*/
    v3 = 8; /*0x101312d46*/
    v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v4, 8u); /*0x101312d54*/
    if ( !v6 ) /*0x101312d5c*/
      goto LABEL_4; /*0x101312d5c*/
    v7 = v5; /*0x101312d5e*/
  }
  else
  {
    v6 = 8; /*0x101312d66*/
    v7 = 0; /*0x101312d6b*/
  }
  *a1 = v7; /*0x101312d6d*/
  a1[1] = v6; /*0x101312d70*/
  a1[2] = 0; /*0x101312d74*/
  return a1; /*0x101312d7f*/
}