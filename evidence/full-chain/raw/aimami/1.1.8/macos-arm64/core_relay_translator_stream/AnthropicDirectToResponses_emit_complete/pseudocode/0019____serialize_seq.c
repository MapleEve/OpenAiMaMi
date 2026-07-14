// mac 1.1.8 behavioral AnthropicDirectToResponses_emit_complete 0x10105ca40 d=2
unsigned __int64 *__fastcall _$LT$serde_json..value..ser..Serializer$u20$as$u20$serde_core..ser..Serializer$GT$::serialize_seq::hd54869b8f141de3d(
        unsigned __int64 *a1,
        char a2,
        unsigned __int64 a3)
{
  __int64 v3; // r14
  __int64 v4; // rbx
  unsigned __int64 v5; // r12
  __int64 v6; // rax
  unsigned __int64 v7; // rcx

  v3 = 0; /*0x10105ca4b*/
  if ( (a2 & 1) == 0 ) /*0x10105ca52*/
    a3 = 0; /*0x10105ca52*/
  v4 = 32 * a3; /*0x10105ca59*/
  if ( a3 >> 59 != 0 || 32 * a3 > 0x7FFFFFFFFFFFFFF8LL ) /*0x10105ca74*/
LABEL_4:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v3, v4); /*0x10105ca7b*/
  if ( v4 ) /*0x10105ca89*/
  {
    v5 = a3; /*0x10105ca8e*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10105ca91*/
    v3 = 8; /*0x10105ca96*/
    v6 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v4, 8u); /*0x10105caa4*/
    if ( !v6 ) /*0x10105caac*/
      goto LABEL_4; /*0x10105caac*/
    v7 = v5; /*0x10105caae*/
  }
  else
  {
    v6 = 8; /*0x10105cab6*/
    v7 = 0; /*0x10105cabb*/
  }
  *a1 = v7; /*0x10105cabd*/
  a1[1] = v6; /*0x10105cac0*/
  a1[2] = 0; /*0x10105cac4*/
  return a1; /*0x10105cacf*/
}