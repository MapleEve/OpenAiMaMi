// mac 1.1.8 BEHAVIORAL-BACKEND request_existing_instance_activation_with_url node 0x100417800 depth=1
// codexmate_lib8platform15single_instance23activation_request_path
size_t *__fastcall codexmate_lib::platform::single_instance::activation_request_path::h25d20e85da257612(size_t *a1)
{
  size_t v2; // [rsp+8h] [rbp-48h] BYREF
  const void *v3; // [rsp+10h] [rbp-40h]
  size_t v4; // [rsp+18h] [rbp-38h]
  size_t v5; // [rsp+20h] [rbp-30h] BYREF
  const void *v6; // [rsp+28h] [rbp-28h]
  size_t v7; // [rsp+30h] [rbp-20h]

  dirs::data_dir::hb6650a44a938f2dc(&v5); /*0x100417814*/
  if ( __OFSUB__(0, v5) ) /*0x10041781b*/
  {
    std::env::temp_dir::h8078010294fc1613(&v2); /*0x100417825*/
  }
  else
  {
    v4 = v7; /*0x100417830*/
    v3 = v6; /*0x10041783c*/
    v2 = v5; /*0x100417840*/
  }
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x100417860*/
    &v5,
    v3,
    v4,
    "dev.aimami.desktopaimami-activate.requestfailed to spawn thread",
    0x12u);
  std::path::Path::_join::hb1a495d4f06b13b8(a1, v6, v7, "aimami-activate.requestfailed to spawn thread", 0x17u); /*0x100417880*/
  if ( v5 ) /*0x10041788c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100417896*/
  if ( v2 ) /*0x1004178a2*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004178ac*/
  return a1; /*0x1004178b4*/
}