// mac 1.1.8 BEHAVIORAL-BACKEND resolve_daemon_binary node 0x10109e500 depth=1
// std3env11current_exe
size_t *__fastcall std::env::current_exe::h29d0ba355065eb9c(size_t *a1)
{
  size_t v1; // r14
  char *v2; // rax
  char *v3; // r15
  __int64 v4; // rax
  uint32_t bufsize[7]; // [rsp+0h] [rbp-1Ch] BYREF

  bufsize[0] = 0; /*0x10109e50d*/
  _NSGetExecutablePath(nullptr, bufsize); /*0x10109e51a*/
  v1 = bufsize[0]; /*0x10109e51f*/
  if ( bufsize[0] ) /*0x10109e526*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10109e528*/
    v2 = (char *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v1, 1u); /*0x10109e535*/
    if ( !v2 ) /*0x10109e53d*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v1); /*0x10109e5d1*/
    v3 = v2; /*0x10109e543*/
    if ( _NSGetExecutablePath(v2, bufsize) ) /*0x10109e54d*/
    {
      a1[1] = ((unsigned __int64)(unsigned int)*__error() << 32) | 2; /*0x10109e565*/
      *a1 = 0x8000000000000000LL; /*0x10109e573*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10109e581*/
    }
    else
    {
      v4 = bufsize[0] - 1LL; /*0x10109e5ad*/
      *a1 = v1; /*0x10109e5b0*/
      a1[1] = (size_t)v3; /*0x10109e5b3*/
      a1[2] = v4; /*0x10109e5b7*/
    }
  }
  else
  {
    a1[1] = ((unsigned __int64)(unsigned int)*__error() << 32) | 2; /*0x10109e597*/
    *a1 = 0x8000000000000000LL; /*0x10109e5a5*/
  }
  return a1; /*0x10109e5c2*/
}