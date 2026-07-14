// mac 1.1.8 BEHAVIORAL-BACKEND check_legacy_migrated_threads node 0x1010a8b10 depth=2
// std4path4Path11to_path_buf
size_t *__fastcall std::path::Path::to_path_buf::h73855ce4b54f7174(size_t *a1, const void *a2, size_t a3)
{
  __int64 v4; // r15

  if ( a3 ) /*0x1010a8b23*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1010a8b28*/
    v4 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(a3, 1u); /*0x1010a8b3d*/
    if ( !v4 ) /*0x1010a8b43*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, a3); /*0x1010a8b4d*/
  }
  else
  {
    v4 = 1; /*0x1010a8b52*/
  }
  memcpy((void *)v4, a2, a3); /*0x1010a8b5e*/
  *a1 = a3; /*0x1010a8b63*/
  a1[1] = v4; /*0x1010a8b66*/
  a1[2] = a3; /*0x1010a8b6a*/
  return a1; /*0x1010a8b75*/
}