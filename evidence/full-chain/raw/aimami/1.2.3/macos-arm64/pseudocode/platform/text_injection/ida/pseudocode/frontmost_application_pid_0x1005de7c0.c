// __ZN13codexmate_lib8platform14text_injection25frontmost_application_pid @ 0x1005de7c0 | 基线 same-set
__int64 codexmate_lib::platform::text_injection::frontmost_application_pid::h48aba5255c498888()
{
  id v0; // rdi
  const char *v1; // rsi
  id v2; // rax
  unsigned int v3; // ebx
  id v4; // rax
  const char *v5; // rax
  void *v6; // r14
  const char *v7; // rax
  void *v9; // rbx
  const char *v10; // rsi

  v0 = codexmate_lib::platform::text_injection::frontmost_application_pid::CACHED_CLASS::h1c74af20c14bdf44; /*0x1005de7c7*/
  if ( codexmate_lib::platform::text_injection::frontmost_application_pid::CACHED_CLASS::h1c74af20c14bdf44 ) /*0x1005de7d1*/
  {
    v1 = codexmate_lib::platform::text_injection::frontmost_application_pid::CACHED_SEL::h616e9f03340d7bc8; /*0x1005de7d3*/
    if ( codexmate_lib::platform::text_injection::frontmost_application_pid::CACHED_SEL::h616e9f03340d7bc8 ) /*0x1005de7dd*/
      goto LABEL_3; /*0x1005de7dd*/
  }
  else
  {
    v0 = (id)objc2::__macro_helpers::cache::CachedClass::fetch::h605fe9527cb10dd5( /*0x1005de84e*/
               &codexmate_lib::platform::text_injection::frontmost_application_pid::CACHED_CLASS::h1c74af20c14bdf44,
               "NSWorkspace",
               &off_1019655B8);
    v1 = codexmate_lib::platform::text_injection::frontmost_application_pid::CACHED_SEL::h616e9f03340d7bc8; /*0x1005de851*/
    if ( codexmate_lib::platform::text_injection::frontmost_application_pid::CACHED_SEL::h616e9f03340d7bc8 ) /*0x1005de85b*/
    {
LABEL_3:
      v2 = objc_msgSend(v0, v1); /*0x1005de7df*/
      v3 = 0; /*0x1005de7e4*/
      if ( !v2 ) /*0x1005de7e9*/
        return v3; /*0x1005de7e9*/
      goto LABEL_4; /*0x1005de7e9*/
    }
  }
  v5 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1005de871*/
                       &codexmate_lib::platform::text_injection::frontmost_application_pid::CACHED_SEL::h616e9f03340d7bc8,
                       "sharedWorkspace");
  v2 = objc_msgSend(v0, v5); /*0x1005de87c*/
  v3 = 0; /*0x1005de881*/
  if ( !v2 ) /*0x1005de886*/
    return v3; /*0x1005de886*/
LABEL_4:
  if ( codexmate_lib::platform::text_injection::frontmost_application_pid::CACHED_SEL::hf6aaff3ace350aff ) /*0x1005de7f9*/
  {
    v4 = objc_msgSend( /*0x1005de802*/
           v2,
           codexmate_lib::platform::text_injection::frontmost_application_pid::CACHED_SEL::hf6aaff3ace350aff);
    if ( !v4 ) /*0x1005de80a*/
      return v3; /*0x1005de80a*/
  }
  else
  {
    v6 = v2; /*0x1005de89c*/
    v7 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1005de89f*/
                         &codexmate_lib::platform::text_injection::frontmost_application_pid::CACHED_SEL::hf6aaff3ace350aff,
                         "frontmostApplication");
    v4 = objc_msgSend(v6, v7); /*0x1005de8ad*/
    if ( !v4 ) /*0x1005de8b5*/
      return v3; /*0x1005de8b5*/
  }
  if ( codexmate_lib::platform::text_injection::frontmost_application_pid::CACHED_SEL::h50381cd84d880aa8 ) /*0x1005de81a*/
  {
    objc_msgSend(v4, codexmate_lib::platform::text_injection::frontmost_application_pid::CACHED_SEL::h50381cd84d880aa8); /*0x1005de823*/
  }
  else
  {
    v9 = v4; /*0x1005de8d0*/
    v10 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1005de8d8*/
                          &codexmate_lib::platform::text_injection::frontmost_application_pid::CACHED_SEL::h50381cd84d880aa8,
                          "processIdentifier");
    objc_msgSend(v9, v10); /*0x1005de8de*/
  }
  return 1; /*0x1005de8bd*/
}