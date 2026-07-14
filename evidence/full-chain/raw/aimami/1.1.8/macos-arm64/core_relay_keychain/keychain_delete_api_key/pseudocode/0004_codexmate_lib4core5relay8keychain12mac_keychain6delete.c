// mac 1.1.8 behavioral keychain_delete_api_key 0x1001e9860 d=1
_QWORD *__fastcall codexmate_lib::core::relay::keychain::mac_keychain::delete::hb572897fa9a2898b(_QWORD *a1)
{
  int v1; // eax
  _QWORD v3[3]; // [rsp+0h] [rbp-40h] BYREF
  _QWORD v4[5]; // [rsp+18h] [rbp-28h] BYREF

  security_framework::passwords_options::PasswordOptions::new_generic_password::ha50777d1e6f07390(v4); /*0x1001e9875*/
  security_framework::passwords_options::PasswordOptions::use_protected_keychain::hcce026bd00cab15b(v4); /*0x1001e987d*/
  v3[2] = v4[2]; /*0x1001e9886*/
  v3[1] = v4[1]; /*0x1001e9892*/
  v3[0] = v4[0]; /*0x1001e9896*/
  v1 = ((__int64 (__fastcall *)(_QWORD *))security_framework::passwords::delete_generic_password_options::hfc33e7a789b5d926)(v3); /*0x1001e989e*/
  if ( v1 != -25300 && v1 ) /*0x1001e98ac*/
  {
    LODWORD(v4[0]) = v1; /*0x1001e98c7*/
    _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hc057c681e800330e(a1, v4); /*0x1001e98d1*/
  }
  else
  {
    *a1 = 0x8000000000000000LL; /*0x1001e98b8*/
  }
  return a1; /*0x1001e98be*/
}