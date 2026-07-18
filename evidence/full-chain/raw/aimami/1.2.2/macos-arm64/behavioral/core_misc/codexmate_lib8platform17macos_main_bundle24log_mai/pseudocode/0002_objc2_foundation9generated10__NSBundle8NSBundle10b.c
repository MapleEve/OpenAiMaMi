// mac 1.2.2 NEW codexmate_lib8platform17macos_main_bundle24log_mai 0x10120f660 d=1
id __fastcall objc2_foundation::generated::__NSBundle::NSBundle::bundlePath::ha4a7b6892415744a(id a1)
{
  const char *v1; // r14
  id v2; // rax
  id result; // rax

  v1 = objc2_foundation::generated::__NSBundle::NSBundle::bundlePath::CACHED_SEL::h84ee647c75123aee; /*0x10120f66a*/
  if ( !objc2_foundation::generated::__NSBundle::NSBundle::bundlePath::CACHED_SEL::h84ee647c75123aee ) /*0x10120f674*/
    v1 = objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x10120f6a7*/
           &objc2_foundation::generated::__NSBundle::NSBundle::bundlePath::CACHED_SEL::h84ee647c75123aee,
           "bundlePath");
  v2 = objc_msgSend(a1, v1); /*0x10120f67c*/
  result = objc_retainAutoreleasedReturnValue(v2); /*0x10120f684*/
  if ( !result ) /*0x10120f68d*/
    objc2::__macro_helpers::retain_semantics::none_fail::hda1150934f8bd705(a1, (__int64)v1, (__int64)&off_1018E8F80); /*0x10120f6b9*/
  return result; /*0x10120f68f*/
}