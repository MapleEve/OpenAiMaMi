// mac 1.1.8 BEHAVIORAL-BACKEND install_daemon node 0x1010a9600 depth=2
// std4path4Path6is_dir
bool __fastcall std::path::Path::is_dir::h7ca012509d3e379e(void *__src, size_t __n)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r12
  _BYTE __dst[384]; // [rsp+8h] [rbp-2E8h] BYREF
  __int64 v6; // [rsp+188h] [rbp-168h] BYREF
  _QWORD v7[18]; // [rsp+190h] [rbp-160h] BYREF
  stat __srca; // [rsp+220h] [rbp-D0h] BYREF
  char *v9[7]; // [rsp+2B8h] [rbp-38h] BYREF

  if ( __n > 0x17F ) /*0x1010a961f*/
  {
    std::sys::helpers::small_c_string::run_with_cstr_allocating::hd2f320157252095b( /*0x1010a9762*/
      &v6,
      __src,
      __n,
      &core::ops::function::Fn::call::h489c48b669531688);
    v2 = v7[0]; /*0x1010a976e*/
    if ( v6 ) /*0x1010a9778*/
      goto LABEL_8; /*0x1010a9778*/
    return (v2 & 0xF00000000000LL) == 0x400000000000LL; /*0x1010a9778*/
  }
  memcpy(__dst, __src, __n); /*0x1010a9632*/
  __dst[__n] = 0; /*0x1010a9637*/
  core::ffi::c_str::CStr::from_bytes_with_nul::h8f32931e7be27087(v9, (__int64)__dst, __n + 1); /*0x1010a964c*/
  if ( LODWORD(v9[0]) != 1 ) /*0x1010a9655*/
  {
    memset(&__srca, 0, sizeof(__srca)); /*0x1010a9696*/
    if ( stat_INODE64(v9[1], &__srca) == -1 ) /*0x1010a96ac*/
    {
      v2 = ((unsigned __int64)(unsigned int)*__error() << 32) | 2; /*0x1010a96e4*/
      goto LABEL_7; /*0x1010a96e4*/
    }
    memcpy(v7, &__srca, sizeof(v7)); /*0x1010a96c1*/
    v2 = v7[0]; /*0x1010a96c8*/
    return (v2 & 0xF00000000000LL) == 0x400000000000LL; /*0x1010a9794*/
  }
  v2 = (unsigned __int64)&off_1015AE3E8; /*0x1010a9657*/
LABEL_7:
  v7[0] = v2; /*0x1010a96e8*/
LABEL_8:
  if ( (v2 & 3) == 1 ) /*0x1010a9708*/
  {
    v3 = *(_QWORD *)(v2 + 7); /*0x1010a9712*/
    if ( *(_QWORD *)v3 ) /*0x1010a9716*/
      (*(void (__fastcall **)(_QWORD))v3)(*(_QWORD *)(v2 - 1)); /*0x1010a9722*/
    if ( *(_QWORD *)(v3 + 8) ) /*0x1010a9724*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1010a9736*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1010a9748*/
  }
  return 0; /*0x1010a9797*/
}