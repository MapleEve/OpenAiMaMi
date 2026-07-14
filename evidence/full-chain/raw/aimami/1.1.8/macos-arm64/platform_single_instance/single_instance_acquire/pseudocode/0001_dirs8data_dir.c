// mac 1.1.8 BEHAVIORAL-BACKEND single_instance_acquire node 0x100ec32e0 depth=1
// dirs8data_dir
// Alternative name is '__ZN4dirs10config_dir17h6bd5eed093e437bbE'
// Alternative name is '__ZN4dirs14data_local_dir17ha430815dc5a6daecE'
// Alternative name is '__ZN4dirs16config_local_dir17hc390206dca4bd5b5E'
size_t *__fastcall dirs::data_dir::hb6650a44a938f2dc(size_t *a1)
{
  __int64 v1; // r14
  size_t v2; // rax
  size_t v4[3]; // [rsp+8h] [rbp-48h] BYREF
  _QWORD v5[6]; // [rsp+20h] [rbp-30h] BYREF

  dirs_sys::target_unix_not_redox::home_dir::h0e5525d647f816f0(v5); /*0x100ec32f4*/
  v1 = v5[0]; /*0x100ec32f9*/
  if ( __OFSUB__(-v5[0], 1) )
  {
    v2 = 0x8000000000000000LL; /*0x100ec3305*/
  }
  else
  {
    std::path::Path::_join::hb1a495d4f06b13b8(
      v4,
      (const void *)v5[1],
      v5[2],
      "Library/Application SupportLibrary/FontsMusicLibrary/CachesMoviesPicturesassertion failed: validate_scale_factor(scale_factor)",
      0x1Bu);
    if ( v1 ) /*0x100ec3335*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100ec3342*/
    a1[2] = v4[2]; /*0x100ec334b*/
    v2 = v4[0]; /*0x100ec334f*/
    a1[1] = v4[1]; /*0x100ec3357*/
  }
  *a1 = v2; /*0x100ec335b*/
  return a1; /*0x100ec3361*/
}