// mac 1.2.2 NEW codexmate_lib8platform17macos_main_bundle23resolve 0x10135f0f0 d=1
size_t *__fastcall std::path::Path::to_path_buf::h73855ce4b54f7174(size_t *a1, const void *a2, size_t a3)
{
  __int64 v4; // r15

  if ( a3 ) /*0x10135f103*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x10135f108*/
    v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1u); /*0x10135f11d*/
    if ( !v4 ) /*0x10135f123*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1); /*0x10135f12d*/
  }
  else
  {
    v4 = 1; /*0x10135f132*/
  }
  memcpy((void *)v4, a2, a3); /*0x10135f13e*/
  *a1 = a3; /*0x10135f143*/
  a1[1] = v4; /*0x10135f146*/
  a1[2] = a3; /*0x10135f14a*/
  return a1; /*0x10135f155*/
}