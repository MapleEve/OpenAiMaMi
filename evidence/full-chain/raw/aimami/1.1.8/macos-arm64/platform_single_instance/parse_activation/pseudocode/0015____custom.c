// mac 1.1.8 BEHAVIORAL-BACKEND parse_activation node 0x1010ff740 depth=3
// _::custom
__int64 __fastcall _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::hfa6b64d0ab6dd310(
        void *__src,
        unsigned __int64 a2)
{
  size_t v2; // r14
  size_t v3; // r15
  size_t v4; // r12
  __int64 v5; // rax
  size_t v7[7]; // [rsp+8h] [rbp-38h] BYREF

  if ( (a2 & 1) != 0 ) /*0x1010ff758*/
  {
    v2 = a2 >> 1; /*0x1010ff76b*/
    if ( a2 >= 2 ) /*0x1010ff772*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1010ff77f*/
      v5 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v2, 1u); /*0x1010ff78c*/
      if ( !v5 ) /*0x1010ff794*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v2); /*0x1010ff7d4*/
      v3 = v5; /*0x1010ff796*/
      v4 = a2 >> 1; /*0x1010ff799*/
    }
    else
    {
      v3 = 1; /*0x1010ff774*/
      v4 = 0; /*0x1010ff77a*/
    }
    memcpy((void *)v3, __src, v2); /*0x1010ff7a5*/
    v7[0] = v4; /*0x1010ff7aa*/
    v7[1] = v3; /*0x1010ff7ae*/
    v7[2] = a2 >> 1; /*0x1010ff7b2*/
  }
  else
  {
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v7, (unsigned __int8 *)__src, a2); /*0x1010ff761*/
  }
  return serde_json::error::make_error::h966d5205a393ba4c(v7); /*0x1010ff7bf*/
}