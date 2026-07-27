// __ZN13codexmate_lib8platform14text_injection25pasteboard_current_string @ 0x1005de8f0 | 基线 same-set
void __fastcall codexmate_lib::platform::text_injection::pasteboard_current_string::hc44da7c7bd12897e(_QWORD *a1)
{
  id v2; // rdi
  const char *v3; // rsi
  id v4; // rax
  void *v5; // r15
  void *v6; // r14
  const char *v7; // rsi
  id v8; // rax
  __int64 v9; // rax
  const char *v10; // rax
  _QWORD v11[3]; // [rsp+0h] [rbp-50h] BYREF
  __int64 v12; // [rsp+18h] [rbp-38h] BYREF
  __int64 v13; // [rsp+20h] [rbp-30h]
  __int64 v14; // [rsp+28h] [rbp-28h]
  _BYTE v15[25]; // [rsp+37h] [rbp-19h] BYREF

  v2 = codexmate_lib::platform::text_injection::general_pasteboard::CACHED_CLASS::h651eaa1b1a30e429; /*0x1005de900*/
  if ( codexmate_lib::platform::text_injection::general_pasteboard::CACHED_CLASS::h651eaa1b1a30e429 ) /*0x1005de90a*/
  {
    v3 = codexmate_lib::platform::text_injection::general_pasteboard::CACHED_SEL::h1ef9134429170661; /*0x1005de910*/
    if ( codexmate_lib::platform::text_injection::general_pasteboard::CACHED_SEL::h1ef9134429170661 ) /*0x1005de91a*/
      goto LABEL_3; /*0x1005de91a*/
LABEL_11:
    v10 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1005dea1c*/
                          &codexmate_lib::platform::text_injection::general_pasteboard::CACHED_SEL::h1ef9134429170661,
                          "generalPasteboard");
    v4 = objc_msgSend(v2, v10); /*0x1005dea3b*/
    if ( v4 ) /*0x1005dea43*/
      goto LABEL_4; /*0x1005dea43*/
LABEL_12:
    *a1 = 0x8000000000000000LL; /*0x1005dea49*/
    return; /*0x1005dea60*/
  }
  v2 = (id)objc2::__macro_helpers::cache::CachedClass::fetch::h605fe9527cb10dd5( /*0x1005dea09*/
             &codexmate_lib::platform::text_injection::general_pasteboard::CACHED_CLASS::h651eaa1b1a30e429,
             "NSPasteboard",
             &off_1019655A0);
  v3 = codexmate_lib::platform::text_injection::general_pasteboard::CACHED_SEL::h1ef9134429170661; /*0x1005dea0c*/
  if ( !codexmate_lib::platform::text_injection::general_pasteboard::CACHED_SEL::h1ef9134429170661 ) /*0x1005dea16*/
    goto LABEL_11; /*0x1005dea16*/
LABEL_3:
  v4 = objc_msgSend(v2, v3); /*0x1005de920*/
  if ( !v4 ) /*0x1005de928*/
    goto LABEL_12; /*0x1005de928*/
LABEL_4:
  v5 = v4; /*0x1005de92e*/
  v6 = (void *)objc2_foundation::string::_$LT$impl$u20$objc2_foundation..generated..__NSString..NSString$GT$::from_str::h3ce5e44381052ae9( /*0x1005de942*/
                 "public.utf8-plain-text",
                 22);
  v7 = codexmate_lib::platform::text_injection::pasteboard_current_string::CACHED_SEL::hea0210702bf1a393; /*0x1005de945*/
  if ( !codexmate_lib::platform::text_injection::pasteboard_current_string::CACHED_SEL::hea0210702bf1a393 ) /*0x1005de94f*/
    v7 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1005dea74*/
                         &codexmate_lib::platform::text_injection::pasteboard_current_string::CACHED_SEL::hea0210702bf1a393,
                         "stringForType:");
  v8 = objc_msgSend(v5, v7, v6); /*0x1005de95b*/
  if ( v8 ) /*0x1005de963*/
  {
    v12 = 0; /*0x1005de965*/
    v13 = 1; /*0x1005de96d*/
    v14 = 0; /*0x1005de975*/
    v11[2] = 1610612768; /*0x1005de97d*/
    v11[0] = &v12; /*0x1005de989*/
    v11[1] = &anon_338d2c24067067f307e22096ebff88a8_1089; /*0x1005de994*/
    if ( (unsigned __int8)objc2_foundation::string::_$LT$impl$u20$core..fmt..Display$u20$for$u20$objc2_foundation..generated..__NSString..NSString$GT$::fmt::h172ae122526909b4( /*0x1005de99f*/
                            v8,
                            v11) )
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005dea9a*/
        &anon_338d2c24067067f307e22096ebff88a8_1090,
        55,
        v15,
        &anon_338d2c24067067f307e22096ebff88a8_1093,
        &anon_338d2c24067067f307e22096ebff88a8_1092);
    a1[2] = v14; /*0x1005de9b0*/
    v9 = v12; /*0x1005de9b4*/
    a1[1] = v13; /*0x1005de9bc*/
    *a1 = v9; /*0x1005de9c0*/
    objc_release(v6); /*0x1005de9c6*/
  }
  else
  {
    *a1 = 0x8000000000000000LL; /*0x1005de9da*/
    objc_release(v6); /*0x1005de9ea*/
  }
}