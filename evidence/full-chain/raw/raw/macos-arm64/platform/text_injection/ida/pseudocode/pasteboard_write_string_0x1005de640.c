// __ZN13codexmate_lib8platform14text_injection23pasteboard_write_string @ 0x1005de640 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::text_injection::pasteboard_write_string::hf48d08df45e15295(
        __int64 a1,
        __int64 a2)
{
  id v4; // rdi
  const char *v5; // rsi
  id v6; // rax
  void *v7; // r12
  const char *v8; // rsi
  void *v9; // r15
  void *v10; // rbx
  const char *v11; // rsi
  unsigned __int8 v12; // r14
  const char *v13; // rax

  v4 = codexmate_lib::platform::text_injection::general_pasteboard::CACHED_CLASS::h651eaa1b1a30e429; /*0x1005de651*/
  if ( codexmate_lib::platform::text_injection::general_pasteboard::CACHED_CLASS::h651eaa1b1a30e429 ) /*0x1005de65b*/
  {
    v5 = codexmate_lib::platform::text_injection::general_pasteboard::CACHED_SEL::h1ef9134429170661; /*0x1005de661*/
    if ( codexmate_lib::platform::text_injection::general_pasteboard::CACHED_SEL::h1ef9134429170661 ) /*0x1005de66b*/
      goto LABEL_3; /*0x1005de66b*/
LABEL_10:
    v13 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1005de722*/
                          &codexmate_lib::platform::text_injection::general_pasteboard::CACHED_SEL::h1ef9134429170661,
                          "generalPasteboard");
    v6 = objc_msgSend(v4, v13); /*0x1005de741*/
    if ( v6 ) /*0x1005de749*/
      goto LABEL_4; /*0x1005de749*/
LABEL_11:
    LODWORD(v10) = 0; /*0x1005de74f*/
    return (unsigned int)v10; /*0x1005de74f*/
  }
  v4 = (id)objc2::__macro_helpers::cache::CachedClass::fetch::h605fe9527cb10dd5( /*0x1005de70f*/
             &codexmate_lib::platform::text_injection::general_pasteboard::CACHED_CLASS::h651eaa1b1a30e429,
             "NSPasteboard",
             &off_1019655A0);
  v5 = codexmate_lib::platform::text_injection::general_pasteboard::CACHED_SEL::h1ef9134429170661; /*0x1005de712*/
  if ( !codexmate_lib::platform::text_injection::general_pasteboard::CACHED_SEL::h1ef9134429170661 ) /*0x1005de71c*/
    goto LABEL_10; /*0x1005de71c*/
LABEL_3:
  v6 = objc_msgSend(v4, v5); /*0x1005de671*/
  if ( !v6 ) /*0x1005de679*/
    goto LABEL_11; /*0x1005de679*/
LABEL_4:
  v7 = v6; /*0x1005de67f*/
  v8 = codexmate_lib::platform::text_injection::pasteboard_write_string::CACHED_SEL::h1081f8737cef239c; /*0x1005de682*/
  if ( !codexmate_lib::platform::text_injection::pasteboard_write_string::CACHED_SEL::h1081f8737cef239c ) /*0x1005de68c*/
    v8 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1005de76f*/
                         &codexmate_lib::platform::text_injection::pasteboard_write_string::CACHED_SEL::h1081f8737cef239c,
                         "clearContents");
  objc_msgSend(v7, v8); /*0x1005de695*/
  v9 = (void *)objc2_foundation::string::_$LT$impl$u20$objc2_foundation..generated..__NSString..NSString$GT$::from_str::h3ce5e44381052ae9( /*0x1005de6ab*/
                 "public.utf8-plain-text",
                 22);
  v10 = (void *)objc2_foundation::string::_$LT$impl$u20$objc2_foundation..generated..__NSString..NSString$GT$::from_str::h3ce5e44381052ae9( /*0x1005de6b9*/
                  a1,
                  a2);
  v11 = codexmate_lib::platform::text_injection::pasteboard_write_string::CACHED_SEL::hb4f001d982a0f1a3; /*0x1005de6bc*/
  if ( !codexmate_lib::platform::text_injection::pasteboard_write_string::CACHED_SEL::hb4f001d982a0f1a3 ) /*0x1005de6c6*/
    v11 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1005de78a*/
                          &codexmate_lib::platform::text_injection::pasteboard_write_string::CACHED_SEL::hb4f001d982a0f1a3,
                          "setString:forType:");
  v12 = (unsigned __int8)objc_msgSend(v7, v11, v10, v9); /*0x1005de6da*/
  objc_release(v10); /*0x1005de6e0*/
  LOBYTE(v10) = v12 != 0; /*0x1005de6e8*/
  objc_release(v9); /*0x1005de6ee*/
  return (unsigned int)v10; /*0x1005de753*/
}