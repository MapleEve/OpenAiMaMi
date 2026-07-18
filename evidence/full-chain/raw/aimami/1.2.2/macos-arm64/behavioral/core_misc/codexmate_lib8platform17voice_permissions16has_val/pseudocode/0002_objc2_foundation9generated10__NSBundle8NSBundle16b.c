// mac 1.2.2 NEW codexmate_lib8platform17voice_permissions16has_val 0x10120f7a0 d=1
id __fastcall objc2_foundation::generated::__NSBundle::NSBundle::bundleIdentifier::h3e1edc2fcf4a9604(void *a1)
{
  const char *v1; // rsi
  id v2; // rax

  v1 = objc2_foundation::generated::__NSBundle::NSBundle::bundleIdentifier::CACHED_SEL::h979b563dc301248a; /*0x10120f7a6*/
  if ( !objc2_foundation::generated::__NSBundle::NSBundle::bundleIdentifier::CACHED_SEL::h979b563dc301248a ) /*0x10120f7b0*/
    v1 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x10120f7e3*/
                         &objc2_foundation::generated::__NSBundle::NSBundle::bundleIdentifier::CACHED_SEL::h979b563dc301248a,
                         "bundleIdentifier");
  v2 = objc_msgSend(a1, v1); /*0x10120f7b2*/
  return objc_retainAutoreleasedReturnValue(v2); /*0x10120f7c4*/
}