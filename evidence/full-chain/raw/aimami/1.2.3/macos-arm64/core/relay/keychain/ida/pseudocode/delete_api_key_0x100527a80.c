// __ZN13codexmate_lib4core5relay8keychain14delete_api_key @ 0x100527a80 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::keychain::delete_api_key::h9464defffa032412(
        _QWORD *a1,
        __int64 a2,
        unsigned __int8 *a3,
        size_t a4)
{
  __int64 v6; // rax
  __int64 v7; // rcx
  _QWORD v9[3]; // [rsp+8h] [rbp-58h] BYREF
  __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  __int64 v11; // [rsp+28h] [rbp-38h]
  __int64 v12; // [rsp+30h] [rbp-30h]

  codexmate_lib::core::relay::models::validate_relay_provider_id::h5fc256bffc4a7997((unsigned __int8 *)&v10, a3, a4); /*0x100527aa7*/
  if ( __OFSUB__(0, v10) ) /*0x100527aae*/
  {
    codexmate_lib::core::relay::keychain::delete_key_file::h82b77f1e4410ef89( /*0x100527ad8*/
      v9,
      *(_QWORD *)(a2 + 584),
      *(_QWORD *)(a2 + 592),
      a3,
      a4);
    codexmate_lib::core::relay::keychain::mac_keychain::delete::hfbcfbdce78a6723f( /*0x100527af3*/
      &v10,
      &anon_92869709a5e99ce1936aa4e326b6c562_997,
      16,
      a3,
      a4);
    if ( v10 != 0x8000000000000000LL && v10 ) /*0x100527b04*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v10, 1); /*0x100527b0f*/
    a1[2] = v9[2]; /*0x100527b18*/
    v6 = v9[0]; /*0x100527b1c*/
    v7 = v9[1]; /*0x100527b20*/
  }
  else
  {
    a1[2] = v12; /*0x100527b2a*/
    v6 = v10; /*0x100527b2e*/
    v7 = v11; /*0x100527b32*/
  }
  a1[1] = v7; /*0x100527b36*/
  *a1 = v6; /*0x100527b3a*/
  return a1; /*0x100527b40*/
}