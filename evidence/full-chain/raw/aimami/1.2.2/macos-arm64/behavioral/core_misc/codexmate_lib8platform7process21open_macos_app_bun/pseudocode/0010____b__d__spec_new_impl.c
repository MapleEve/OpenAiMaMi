// mac 1.2.2 NEW codexmate_lib8platform7process21open_macos_app_bun 0x101392720 d=2
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

  v3 = a3 + 1; /*0x101392734*/
  if ( (__int64)(a3 + 1) < 0 ) /*0x101392737*/
  {
    v4 = 0; /*0x101392739*/
    goto LABEL_3; /*0x101392739*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x101392750*/
  v4 = 1; /*0x101392755*/
  v6 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v3, 1u); /*0x101392763*/
  if ( !v6 ) /*0x10139276b*/
LABEL_3:
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v4); /*0x10139273c*/
  v7 = (size_t)v6; /*0x10139276d*/
  memcpy(v6, a2, a3); /*0x101392779*/
  if ( a3 > 0xF ) /*0x101392782*/
  {
    v9 = core::slice::memchr::memchr_aligned::hda948616f04379f9(0, (__int64)a2, a3); /*0x1013927b1*/
  }
  else
  {
    if ( a3 ) /*0x101392787*/
    {
      v8 = 0; /*0x10139278b*/
      while ( *((_BYTE *)a2 + v8) ) /*0x101392796*/
      {
        if ( a3 == ++v8 ) /*0x10139279e*/
        {
          v8 = a3; /*0x1013927a0*/
          goto LABEL_16; /*0x1013927a7*/
        }
      }
      goto LABEL_14; /*0x101392796*/
    }
    v8 = 0; /*0x1013927b8*/
    v9 = 0; /*0x1013927ba*/
  }
  if ( (v9 & 1) == 0 ) /*0x1013927be*/
  {
LABEL_16:
    v12[0] = v3; /*0x1013927da*/
    v12[1] = v7; /*0x1013927de*/
    v12[2] = a3; /*0x1013927e2*/
    a1[1] = ((__int64 (__fastcall *)(_QWORD *, const void *, size_t))alloc::ffi::c_str::CString::_from_vec_unchecked::hf813a0aca6310dca)( /*0x1013927ef*/
              v12,
              a2,
              v8);
    a1[2] = v10; /*0x1013927f3*/
    *a1 = 0x8000000000000000LL; /*0x101392801*/
    return a1; /*0x101392801*/
  }
LABEL_14:
  *a1 = v3; /*0x1013927c0*/
  a1[1] = v7; /*0x1013927c3*/
  a1[2] = a3; /*0x1013927c7*/
  a1[3] = v8; /*0x1013927cb*/
  return a1; /*0x101392807*/
}