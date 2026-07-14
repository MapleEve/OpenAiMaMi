// mac 1.1.8 BEHAVIORAL-BACKEND prepare_activation_dir node 0x1010dbb60 depth=3
// _::b::d::spec_new_impl
size_t *__fastcall _$LT$$RF$$u5b$u8$u5d$$u20$as$u20$alloc..ffi..c_str..CString..new..SpecNewImpl$GT$::spec_new_impl::h1af9ab0212d16fd8(
        size_t *a1,
        const void *a2,
        size_t a3)
{
  size_t v3; // r14
  __int64 v4; // r12
  void *v6; // rax
  size_t v7; // r12
  size_t v8; // rdx
  char v9; // al
  size_t v10; // rdx
  _QWORD v12[8]; // [rsp+0h] [rbp-40h] BYREF

  v3 = a3 + 1; /*0x1010dbb74*/
  if ( (__int64)(a3 + 1) < 0 ) /*0x1010dbb77*/
  {
    v4 = 0; /*0x1010dbb79*/
    goto LABEL_3; /*0x1010dbb79*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1010dbb90*/
  v4 = 1; /*0x1010dbb95*/
  v6 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v3, 1u); /*0x1010dbba3*/
  if ( !v6 ) /*0x1010dbbab*/
LABEL_3:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4, v3); /*0x1010dbb7c*/
  v7 = (size_t)v6; /*0x1010dbbad*/
  memcpy(v6, a2, a3); /*0x1010dbbb9*/
  if ( a3 > 0xF ) /*0x1010dbbc2*/
  {
    v9 = core::slice::memchr::memchr_aligned::hda948616f04379f9(0, a2, a3); /*0x1010dbbf1*/
  }
  else
  {
    if ( a3 ) /*0x1010dbbc7*/
    {
      v8 = 0; /*0x1010dbbcb*/
      while ( *((_BYTE *)a2 + v8) ) /*0x1010dbbd6*/
      {
        if ( a3 == ++v8 ) /*0x1010dbbde*/
        {
          v8 = a3; /*0x1010dbbe0*/
          goto LABEL_16; /*0x1010dbbe7*/
        }
      }
      goto LABEL_14; /*0x1010dbbd6*/
    }
    v8 = 0; /*0x1010dbbf8*/
    v9 = 0; /*0x1010dbbfa*/
  }
  if ( (v9 & 1) == 0 ) /*0x1010dbbfe*/
  {
LABEL_16:
    v12[0] = v3; /*0x1010dbc1a*/
    v12[1] = v7; /*0x1010dbc1e*/
    v12[2] = a3; /*0x1010dbc22*/
    a1[1] = ((__int64 (__fastcall *)(_QWORD *, const void *, size_t))alloc::ffi::c_str::CString::_from_vec_unchecked::hf813a0aca6310dca)( /*0x1010dbc2f*/
              v12,
              a2,
              v8);
    a1[2] = v10; /*0x1010dbc33*/
    *a1 = 0x8000000000000000LL; /*0x1010dbc41*/
    return a1; /*0x1010dbc41*/
  }
LABEL_14:
  *a1 = v3; /*0x1010dbc00*/
  a1[1] = v7; /*0x1010dbc03*/
  a1[2] = a3; /*0x1010dbc07*/
  a1[3] = v8; /*0x1010dbc0b*/
  return a1; /*0x1010dbc47*/
}