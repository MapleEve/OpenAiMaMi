// mac 1.2.2 NEW codexmate_lib8platform17macos_main_bundle23resolve 0x101354ab0 d=1
size_t *__fastcall std::env::current_exe::h29d0ba355065eb9c(size_t *a1)
{
  size_t v1; // r14
  char *v2; // rax
  char *v3; // r15
  __int64 v4; // rax
  uint32_t bufsize[7]; // [rsp+0h] [rbp-1Ch] BYREF

  bufsize[0] = 0; /*0x101354abd*/
  _NSGetExecutablePath(nullptr, bufsize); /*0x101354aca*/
  v1 = bufsize[0]; /*0x101354acf*/
  if ( bufsize[0] ) /*0x101354ad6*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x101354ad8*/
    v2 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v1, 1u); /*0x101354ae5*/
    if ( !v2 ) /*0x101354aed*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x101354b81*/
    v3 = v2; /*0x101354af3*/
    if ( _NSGetExecutablePath(v2, bufsize) ) /*0x101354afd*/
    {
      a1[1] = ((unsigned __int64)(unsigned int)*__error() << 32) | 2; /*0x101354b15*/
      *a1 = 0x8000000000000000LL; /*0x101354b23*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x101354b31*/
    }
    else
    {
      v4 = bufsize[0] - 1LL; /*0x101354b5d*/
      *a1 = v1; /*0x101354b60*/
      a1[1] = (size_t)v3; /*0x101354b63*/
      a1[2] = v4; /*0x101354b67*/
    }
  }
  else
  {
    a1[1] = ((unsigned __int64)(unsigned int)*__error() << 32) | 2; /*0x101354b47*/
    *a1 = 0x8000000000000000LL; /*0x101354b55*/
  }
  return a1; /*0x101354b72*/
}