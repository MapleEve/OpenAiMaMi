// __ZN13codexmate_lib4core5relay8keychain12mac_keychain6delete @ 0x100af92b0 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::keychain::mac_keychain::delete::hfbcfbdce78a6723f(_QWORD *a1)
{
  int v1; // eax
  _QWORD v3[3]; // [rsp+0h] [rbp-40h] BYREF
  _QWORD v4[5]; // [rsp+18h] [rbp-28h] BYREF

  security_framework::passwords_options::PasswordOptions::new_generic_password::ha50777d1e6f07390(v4); /*0x100af92c5*/
  security_framework::passwords_options::PasswordOptions::use_protected_keychain::hcce026bd00cab15b(v4); /*0x100af92cd*/
  v3[2] = v4[2]; /*0x100af92d6*/
  v3[1] = v4[1]; /*0x100af92e2*/
  v3[0] = v4[0]; /*0x100af92e6*/
  v1 = ((__int64 (__fastcall *)(_QWORD *))security_framework::passwords::delete_generic_password_options::hfc33e7a789b5d926)(v3); /*0x100af92ee*/
  if ( v1 != -25300 && v1 ) /*0x100af92fc*/
  {
    LODWORD(v4[0]) = v1; /*0x100af9317*/
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h268230fb2b64ec1b(a1, v4); /*0x100af9321*/
  }
  else
  {
    *a1 = 0x8000000000000000LL; /*0x100af9308*/
  }
  return a1; /*0x100af930e*/
}