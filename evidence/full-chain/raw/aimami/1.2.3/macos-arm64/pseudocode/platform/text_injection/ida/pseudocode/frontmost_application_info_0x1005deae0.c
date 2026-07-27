// __ZN13codexmate_lib8platform14text_injection26frontmost_application_info @ 0x1005deae0 | 基线 same-set
unsigned __int64 __fastcall codexmate_lib::platform::text_injection::frontmost_application_info::h2160df8b181acf9f(
        _QWORD *a1)
{
  id v2; // rdi
  const char *v3; // rsi
  id v4; // rax
  id v5; // rax
  void *v6; // r14
  id v7; // rax
  id v8; // r15
  const char *v9; // rsi
  id v10; // r12
  __int64 v11; // r15
  __int64 v12; // r13
  __int64 v13; // rdx
  unsigned __int64 result; // rax
  __int64 v15; // rcx
  const char *v16; // rax
  void *v17; // r14
  const char *v18; // rax
  const char *v19; // rax
  __int64 *v20; // [rsp+8h] [rbp-68h] BYREF
  __int64 (__fastcall **v21)(); // [rsp+10h] [rbp-60h]
  __int64 v22; // [rsp+18h] [rbp-58h]
  __int64 v23; // [rsp+20h] [rbp-50h]
  __int64 v24; // [rsp+28h] [rbp-48h] BYREF
  __int64 v25; // [rsp+30h] [rbp-40h]
  __int64 v26; // [rsp+38h] [rbp-38h]
  _BYTE v27[41]; // [rsp+47h] [rbp-29h] BYREF

  v2 = codexmate_lib::platform::text_injection::frontmost_application_info::CACHED_CLASS::h17b9cf3f7d6c87a8; /*0x1005deaf4*/
  if ( codexmate_lib::platform::text_injection::frontmost_application_info::CACHED_CLASS::h17b9cf3f7d6c87a8 ) /*0x1005deafe*/
  {
    v3 = codexmate_lib::platform::text_injection::frontmost_application_info::CACHED_SEL::hc1d2c241fb7033cd; /*0x1005deb04*/
    if ( codexmate_lib::platform::text_injection::frontmost_application_info::CACHED_SEL::hc1d2c241fb7033cd ) /*0x1005deb0e*/
      goto LABEL_3; /*0x1005deb0e*/
LABEL_17:
    v16 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1005dec84*/
                          &codexmate_lib::platform::text_injection::frontmost_application_info::CACHED_SEL::hc1d2c241fb7033cd,
                          "sharedWorkspace");
    v4 = objc_msgSend(v2, v16); /*0x1005deca3*/
    if ( !v4 ) /*0x1005decab*/
      goto LABEL_22; /*0x1005decab*/
    goto LABEL_4; /*0x1005decab*/
  }
  v2 = (id)objc2::__macro_helpers::cache::CachedClass::fetch::h605fe9527cb10dd5( /*0x1005dec71*/
             &codexmate_lib::platform::text_injection::frontmost_application_info::CACHED_CLASS::h17b9cf3f7d6c87a8,
             "NSWorkspace",
             &off_1019655D0);
  v3 = codexmate_lib::platform::text_injection::frontmost_application_info::CACHED_SEL::hc1d2c241fb7033cd; /*0x1005dec74*/
  if ( !codexmate_lib::platform::text_injection::frontmost_application_info::CACHED_SEL::hc1d2c241fb7033cd ) /*0x1005dec7e*/
    goto LABEL_17; /*0x1005dec7e*/
LABEL_3:
  v4 = objc_msgSend(v2, v3); /*0x1005deb14*/
  if ( !v4 ) /*0x1005deb1c*/
    goto LABEL_22; /*0x1005deb1c*/
LABEL_4:
  if ( codexmate_lib::platform::text_injection::frontmost_application_info::CACHED_SEL::habd93548fe0df2ef ) /*0x1005deb2c*/
  {
    v5 = objc_msgSend( /*0x1005deb35*/
           v4,
           codexmate_lib::platform::text_injection::frontmost_application_info::CACHED_SEL::habd93548fe0df2ef);
    if ( !v5 ) /*0x1005deb3d*/
      goto LABEL_22; /*0x1005deb3d*/
  }
  else
  {
    v17 = v4; /*0x1005decc1*/
    v18 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1005decc4*/
                          &codexmate_lib::platform::text_injection::frontmost_application_info::CACHED_SEL::habd93548fe0df2ef,
                          "frontmostApplication");
    v5 = objc_msgSend(v17, v18); /*0x1005decd2*/
    if ( !v5 ) /*0x1005decda*/
      goto LABEL_22; /*0x1005decda*/
  }
  v6 = v5; /*0x1005deb43*/
  if ( !codexmate_lib::platform::text_injection::frontmost_application_info::CACHED_SEL::h1e07e15833bf0e4d ) /*0x1005deb50*/
  {
    v19 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1005decf0*/
                          &codexmate_lib::platform::text_injection::frontmost_application_info::CACHED_SEL::h1e07e15833bf0e4d,
                          "bundleIdentifier");
    v7 = objc_msgSend(v6, v19); /*0x1005decfb*/
    if ( v7 ) /*0x1005ded03*/
      goto LABEL_8; /*0x1005ded03*/
LABEL_22:
    *a1 = 0x8000000000000000LL; /*0x1005ded09*/
    return 0x8000000000000000LL; /*0x1005ded24*/
  }
  v7 = objc_msgSend( /*0x1005deb59*/
         v5,
         codexmate_lib::platform::text_injection::frontmost_application_info::CACHED_SEL::h1e07e15833bf0e4d);
  if ( !v7 ) /*0x1005deb61*/
    goto LABEL_22; /*0x1005deb61*/
LABEL_8:
  v8 = v7; /*0x1005deb67*/
  v9 = codexmate_lib::platform::text_injection::frontmost_application_info::CACHED_SEL::h1cfc05047bf3d130; /*0x1005deb6a*/
  if ( !codexmate_lib::platform::text_injection::frontmost_application_info::CACHED_SEL::h1cfc05047bf3d130 ) /*0x1005deb74*/
    v9 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1005ded38*/
                         &codexmate_lib::platform::text_injection::frontmost_application_info::CACHED_SEL::h1cfc05047bf3d130,
                         "localizedName");
  v10 = objc_msgSend(v6, v9); /*0x1005deb82*/
  v24 = 0; /*0x1005deb85*/
  v25 = 1; /*0x1005deb8d*/
  v26 = 0; /*0x1005deb95*/
  v22 = 1610612768; /*0x1005deb9d*/
  v20 = &v24; /*0x1005deba9*/
  v21 = &anon_338d2c24067067f307e22096ebff88a8_1089; /*0x1005debb4*/
  if ( (unsigned __int8)objc2_foundation::string::_$LT$impl$u20$core..fmt..Display$u20$for$u20$objc2_foundation..generated..__NSString..NSString$GT$::fmt::h172ae122526909b4( /*0x1005debbf*/
                          v8,
                          &v20) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005ded5e*/
      &anon_338d2c24067067f307e22096ebff88a8_1090,
      55,
      v27,
      &anon_338d2c24067067f307e22096ebff88a8_1093,
      &anon_338d2c24067067f307e22096ebff88a8_1092);
  v23 = v24; /*0x1005debd3*/
  v11 = v25; /*0x1005debd7*/
  v12 = v26; /*0x1005debdb*/
  if ( v10 ) /*0x1005debe2*/
  {
    v24 = 0; /*0x1005debe4*/
    v25 = 1; /*0x1005debec*/
    v26 = 0; /*0x1005debf4*/
    v22 = 1610612768; /*0x1005debfc*/
    v20 = &v24; /*0x1005dec04*/
    v21 = &anon_338d2c24067067f307e22096ebff88a8_1089; /*0x1005dec08*/
    if ( (unsigned __int8)objc2_foundation::string::_$LT$impl$u20$core..fmt..Display$u20$for$u20$objc2_foundation..generated..__NSString..NSString$GT$::fmt::h172ae122526909b4( /*0x1005dec13*/
                            v10,
                            &v20) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005ded83*/
        &anon_338d2c24067067f307e22096ebff88a8_1090,
        55,
        v27,
        &anon_338d2c24067067f307e22096ebff88a8_1093,
        &anon_338d2c24067067f307e22096ebff88a8_1092);
    v13 = v24; /*0x1005dec20*/
    result = v25; /*0x1005dec24*/
    v15 = v26; /*0x1005dec28*/
  }
  else
  {
    result = 1; /*0x1005dec2e*/
    v15 = 0; /*0x1005dec33*/
    v13 = 0; /*0x1005dec35*/
  }
  *a1 = v23; /*0x1005dec3b*/
  a1[1] = v11; /*0x1005dec3e*/
  a1[2] = v12; /*0x1005dec42*/
  a1[3] = v13; /*0x1005dec46*/
  a1[4] = result; /*0x1005dec4a*/
  a1[5] = v15; /*0x1005dec4e*/
  return result; /*0x1005ded16*/
}