// mac 1.2.2 NEW export_session_markdown 0x10135fe30 d=1
bool __fastcall std::path::Path::is_file::h8e542e1d1cac781b(void *__src, size_t __n)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rbx
  __int64 v4; // r14
  __int64 v5; // r12
  __int64 v6; // rsi
  _BYTE __dst[384]; // [rsp+8h] [rbp-2E8h] BYREF
  __int64 v9; // [rsp+188h] [rbp-168h] BYREF
  _QWORD v10[18]; // [rsp+190h] [rbp-160h] BYREF
  stat __srca; // [rsp+220h] [rbp-D0h] BYREF
  int v12; // [rsp+2B8h] [rbp-38h] BYREF
  char *v13; // [rsp+2C0h] [rbp-30h]

  if ( __n > 0x17F ) /*0x10135fe4f*/
  {
    std::sys::helpers::small_c_string::run_with_cstr_allocating::hd2f320157252095b( /*0x10135ff92*/
      &v9,
      __src,
      __n,
      &core::ops::function::Fn::call::h489c48b669531688);
    v2 = v10[0]; /*0x10135ff9e*/
    if ( v9 ) /*0x10135ffa8*/
      goto LABEL_8; /*0x10135ffa8*/
    return (v2 & 0xF00000000000LL) == 0x800000000000LL; /*0x10135ffa8*/
  }
  memcpy(__dst, __src, __n); /*0x10135fe62*/
  __dst[__n] = 0; /*0x10135fe67*/
  core::ffi::c_str::CStr::from_bytes_with_nul::h8f32931e7be27087(&v12, __dst, __n + 1); /*0x10135fe7c*/
  if ( v12 != 1 ) /*0x10135fe85*/
  {
    memset(&__srca, 0, sizeof(__srca)); /*0x10135fec6*/
    if ( stat_INODE64(v13, &__srca) == -1 ) /*0x10135fedc*/
    {
      v2 = ((unsigned __int64)(unsigned int)*__error() << 32) | 2; /*0x10135ff14*/
      goto LABEL_7; /*0x10135ff14*/
    }
    memcpy(v10, &__srca, sizeof(v10)); /*0x10135fef1*/
    v2 = v10[0]; /*0x10135fef8*/
    return (v2 & 0xF00000000000LL) == 0x800000000000LL; /*0x10135ffc4*/
  }
  v2 = (unsigned __int64)&off_101926308; /*0x10135fe87*/
LABEL_7:
  v10[0] = v2; /*0x10135ff18*/
LABEL_8:
  if ( (v2 & 3) == 1 ) /*0x10135ff38*/
  {
    v3 = v2 - 1; /*0x10135ff3a*/
    v4 = *(_QWORD *)(v2 - 1); /*0x10135ff3e*/
    v5 = *(_QWORD *)(v2 + 7); /*0x10135ff42*/
    if ( *(_QWORD *)v5 ) /*0x10135ff46*/
      (*(void (__fastcall **)(__int64))v5)(v4); /*0x10135ff52*/
    v6 = *(_QWORD *)(v5 + 8); /*0x10135ff54*/
    if ( v6 ) /*0x10135ff5c*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v6, *(_QWORD *)(v5 + 16)); /*0x10135ff66*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, 24, 8); /*0x10135ff78*/
  }
  return 0; /*0x10135ffc7*/
}