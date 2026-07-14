// mac 1.1.8 behavioral keychain_delete_api_key 0x1009426c0 d=2
__int64 __fastcall security_framework::passwords_options::PasswordOptions::use_protected_keychain::hcce026bd00cab15b(
        __int64 a1)
{
  __int64 v1; // rax

  v1 = _$LT$core_foundation..boolean..CFBoolean$u20$as$u20$core..convert..From$LT$bool$GT$$GT$::from::ha57c89fb36175f2d(1); /*0x1009426d9*/
  return security_framework::passwords_options::PasswordOptions::push_query::hf5dc07b06b2453c5( /*0x1009426e7*/
           a1,
           kSecUseDataProtectionKeychain,
           v1);
}