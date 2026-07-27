// __ZN13codexmate_lib8platform15single_instance23activation_request_path @ 0x10035a7d0 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::single_instance::activation_request_path::hb58f9774144637eb(__int64 a1)
{
  __int64 v1; // rbx
  __int64 v2; // r15
  __int64 v4; // [rsp+8h] [rbp-48h] BYREF
  __int64 v5; // [rsp+10h] [rbp-40h]
  __int64 v6; // [rsp+18h] [rbp-38h]
  __int64 v7; // [rsp+20h] [rbp-30h] BYREF
  __int64 v8; // [rsp+28h] [rbp-28h]
  __int64 v9; // [rsp+30h] [rbp-20h]

  dirs::data_dir::hb6650a44a938f2dc(&v7); /*0x10035a7e4*/
  if ( __OFSUB__(0, v7) ) /*0x10035a7eb*/
  {
    std::env::temp_dir::h8078010294fc1613(&v4); /*0x10035a7f5*/
  }
  else
  {
    v6 = v9; /*0x10035a800*/
    v5 = v8; /*0x10035a80c*/
    v4 = v7; /*0x10035a810*/
  }
  v1 = v5; /*0x10035a814*/
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x10035a830*/
    &v7,
    v5,
    v6,
    "dev.aimami.desktopaimami-activate.requestfailed to spawn threadaimami-single-instance.lock",
    18);
  v2 = v8; /*0x10035a835*/
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x10035a850*/
    a1,
    v8,
    v9,
    "aimami-activate.requestfailed to spawn threadaimami-single-instance.lock",
    23);
  if ( v7 ) /*0x10035a85c*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v7, 1); /*0x10035a866*/
  if ( v4 ) /*0x10035a872*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, v4, 1); /*0x10035a87c*/
  return a1; /*0x10035a884*/
}