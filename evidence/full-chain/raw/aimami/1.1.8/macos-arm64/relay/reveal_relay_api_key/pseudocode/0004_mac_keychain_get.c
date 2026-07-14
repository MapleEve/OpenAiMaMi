// owner_va=0x1001e9620
// owner_symbol=codexmate_lib::core::relay::keychain::mac_keychain::get::h1e7ca26ef9472e74
// depth=3 from command owner (sole callee of get_api_key's keychain-fallback branch)
// size=0x1e5(485B) instructions=108 basic_blocks=14 caller_count=1 (dedicated, only called from keychain::get_api_key) callee_count=9
// terminated_reason=external_call -- calls the `security_framework` crate's PasswordOptions::new_generic_password/use_protected_keychain + passwords::generic_password, i.e. genuine Apple Security.framework Keychain Services FFI boundary (SecItemCopyMatching-class API wrapped by the crate), not further decompilable app logic beyond this point
// keychain service label = "dev.aimami.relay" (16B literal @0x1012c46a0, confirmed via get_bytes); account = providerId (caller-supplied)
// error handling: macOS errSecItemNotFound (-25300) mapped to a benign \"not found\" None-result (not an error); any other Keychain error code propagated as an Err(message) string via spec_to_string

_QWORD *__fastcall codexmate_lib::core::relay::keychain::mac_keychain::get::h1e7ca26ef9472e74(_QWORD *a1)
{
  __int64 *v1; // r14
  __int64 v2; // r12
  __int128 v3; // xmm0
  __int64 v4; // rax
  __int64 *v5; // rax
  __int64 v7; // [rsp+8h] [rbp-A8h] BYREF
  __int64 v8; // [rsp+10h] [rbp-A0h]
  __int64 v9; // [rsp+18h] [rbp-98h]
  __int64 *v10; // [rsp+20h] [rbp-90h] BYREF
  __int128 v11; // [rsp+28h] [rbp-88h]
  __int64 *v12; // [rsp+38h] [rbp-78h] BYREF
  __int128 v13; // [rsp+40h] [rbp-70h]
  __int64 v14; // [rsp+50h] [rbp-60h] BYREF
  __int64 v15; // [rsp+58h] [rbp-58h]
  __int64 v16; // [rsp+60h] [rbp-50h]
  __int64 *v17; // [rsp+68h] [rbp-48h] BYREF
  __int128 v18; // [rsp+70h] [rbp-40h]
  __int128 v19; // [rsp+80h] [rbp-30h]

  security_framework::passwords_options::PasswordOptions::new_generic_password::ha50777d1e6f07390(&v17); /*0x1001e963c*/
  security_framework::passwords_options::PasswordOptions::use_protected_keychain::hcce026bd00cab15b(&v17); /*0x1001e9644*/
  v11 = v18; /*0x1001e9659*/
  v10 = v17; /*0x1001e9660*/
  security_framework::passwords::generic_password::h73c04bf00f8cca70(&v12, &v10); /*0x1001e9672*/
  v1 = v12; /*0x1001e9677*/
  if ( __OFSUB__(-(__int64)v12, 1) ) /*0x1001e967e*/
  {
    if ( (_DWORD)v13 != -25300 ) /*0x1001e968b*/
    {
      LODWORD(v17) = v13; /*0x1001e97c4*/
      _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hc057c681e800330e(a1 + 1, &v17); /*0x1001e97cf*/
      *a1 = 1; /*0x1001e97d4*/
      return a1; /*0x1001e97db*/
    }
    a1[1] = 0x8000000000000000LL; /*0x1001e969b*/
    goto LABEL_10; /*0x1001e969f*/
  }
  v2 = *((_QWORD *)&v13 + 1); /*0x1001e96a8*/
  core::str::converts::from_utf8::hb32deb9559450f6e(&v17, v13, *((_QWORD *)&v13 + 1)); /*0x1001e96b6*/
  if ( (_DWORD)v17 != 1 ) /*0x1001e96bf*/
  {
    v5 = v12; /*0x1001e9796*/
    a1[2] = v13; /*0x1001e979e*/
    a1[1] = v5; /*0x1001e97a2*/
    a1[3] = v2; /*0x1001e97a6*/
LABEL_10:
    *a1 = 0; /*0x1001e97aa*/
    return a1; /*0x1001e97aa*/
  }
  v3 = v18; /*0x1001e96c9*/
  v18 = v13; /*0x1001e96d8*/
  v17 = v1; /*0x1001e96dc*/
  v19 = v3; /*0x1001e96e0*/
  v14 = 0; /*0x1001e96e4*/
  v15 = 1; /*0x1001e96ec*/
  v16 = 0; /*0x1001e96f4*/
  *((_QWORD *)&v11 + 1) = 1610612768; /*0x1001e96fc*/
  v10 = &v14; /*0x1001e9708*/
  *(_QWORD *)&v11 = &anon_fdfbeb4f975d8e02b9c40da81dc33589_434; /*0x1001e9716*/
  if ( (unsigned __int8)_$LT$alloc..string..FromUtf8Error$u20$as$u20$core..fmt..Display$GT$::fmt::hfb4dbcc8b8346099( /*0x1001e9728*/
                          &v17,
                          &v10) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1001e97fe*/
      &anon_fdfbeb4f975d8e02b9c40da81dc33589_435,
      55,
      &v7,
      &anon_fdfbeb4f975d8e02b9c40da81dc33589_449,
      &anon_fdfbeb4f975d8e02b9c40da81dc33589_437);
  v7 = v14; /*0x1001e973d*/
  v8 = v15; /*0x1001e9744*/
  v9 = v16; /*0x1001e974f*/
  if ( v1 ) /*0x1001e9759*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v1, 1); /*0x1001e9767*/
  a1[3] = v9; /*0x1001e9773*/
  v4 = v7; /*0x1001e9777*/
  a1[2] = v8; /*0x1001e9785*/
  a1[1] = v4; /*0x1001e9789*/
  *a1 = 1; /*0x1001e978d*/
  return a1; /*0x1001e97b4*/
}
