// __ZN13codexmate_lib4core5relay8keychain12mac_keychain3get @ 0x100af9070 | 基线 same-set
_QWORD *__fastcall codexmate_lib::core::relay::keychain::mac_keychain::get::hfed926cbdea4b3f6(_QWORD *a1)
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

  security_framework::passwords_options::PasswordOptions::new_generic_password::ha50777d1e6f07390(&v17); /*0x100af908c*/
  security_framework::passwords_options::PasswordOptions::use_protected_keychain::hcce026bd00cab15b(&v17); /*0x100af9094*/
  v11 = v18; /*0x100af90a9*/
  v10 = v17; /*0x100af90b0*/
  security_framework::passwords::generic_password::h73c04bf00f8cca70(&v12, &v10); /*0x100af90c2*/
  v1 = v12; /*0x100af90c7*/
  if ( __OFSUB__(-(__int64)v12, 1) ) /*0x100af90ce*/
  {
    if ( (_DWORD)v13 != -25300 ) /*0x100af90db*/
    {
      LODWORD(v17) = v13; /*0x100af9214*/
      _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h268230fb2b64ec1b(a1 + 1, &v17); /*0x100af921f*/
      *a1 = 1; /*0x100af9224*/
      return a1; /*0x100af922b*/
    }
    a1[1] = 0x8000000000000000LL; /*0x100af90eb*/
    goto LABEL_10; /*0x100af90ef*/
  }
  v2 = *((_QWORD *)&v13 + 1); /*0x100af90f8*/
  core::str::converts::from_utf8::hb32deb9559450f6e(&v17, v13, *((_QWORD *)&v13 + 1)); /*0x100af9106*/
  if ( (_DWORD)v17 != 1 ) /*0x100af910f*/
  {
    v5 = v12; /*0x100af91e6*/
    a1[2] = v13; /*0x100af91ee*/
    a1[1] = v5; /*0x100af91f2*/
    a1[3] = v2; /*0x100af91f6*/
LABEL_10:
    *a1 = 0; /*0x100af91fa*/
    return a1; /*0x100af91fa*/
  }
  v3 = v18; /*0x100af9119*/
  v18 = v13; /*0x100af9128*/
  v17 = v1; /*0x100af912c*/
  v19 = v3; /*0x100af9130*/
  v14 = 0; /*0x100af9134*/
  v15 = 1; /*0x100af913c*/
  v16 = 0; /*0x100af9144*/
  *((_QWORD *)&v11 + 1) = 1610612768; /*0x100af914c*/
  v10 = &v14; /*0x100af9158*/
  *(_QWORD *)&v11 = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100af9166*/
  if ( (unsigned __int8)_$LT$alloc..string..FromUtf8Error$u20$as$u20$core..fmt..Display$GT$::fmt::hfb4dbcc8b8346099( /*0x100af9178*/
                          &v17,
                          &v10) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100af924e*/
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
      55,
      &v7,
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
  v7 = v14; /*0x100af918d*/
  v8 = v15; /*0x100af9194*/
  v9 = v16; /*0x100af919f*/
  if ( v1 ) /*0x100af91a9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v1, 1); /*0x100af91b7*/
  a1[3] = v9; /*0x100af91c3*/
  v4 = v7; /*0x100af91c7*/
  a1[2] = v8; /*0x100af91d5*/
  a1[1] = v4; /*0x100af91d9*/
  *a1 = 1; /*0x100af91dd*/
  return a1; /*0x100af9204*/
}