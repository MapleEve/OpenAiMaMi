// mac 1.2.2 NEW codexmate_lib8platform17voice_permissions16has_val 0x10120f6c0 d=1
id objc2_foundation::generated::__NSBundle::NSBundle::mainBundle::h8f70f79ef50df5f2()
{
  id v0; // rbx
  const char *v1; // r14
  id v2; // rax
  id result; // rax

  v0 = _$LT$objc2_foundation..generated..__NSBundle..NSBundle$u20$as$u20$objc2..top_level_traits..ClassType$GT$::class::CACHED_CLASS::h82b3073a600bca14; /*0x10120f6c7*/
  if ( _$LT$objc2_foundation..generated..__NSBundle..NSBundle$u20$as$u20$objc2..top_level_traits..ClassType$GT$::class::CACHED_CLASS::h82b3073a600bca14 ) /*0x10120f6d1*/
  {
    v1 = objc2_foundation::generated::__NSBundle::NSBundle::mainBundle::CACHED_SEL::h2be4e69d7e72a75e; /*0x10120f6d3*/
    if ( objc2_foundation::generated::__NSBundle::NSBundle::mainBundle::CACHED_SEL::h2be4e69d7e72a75e ) /*0x10120f6dd*/
    {
LABEL_3:
      v2 = objc_msgSend(v0, v1); /*0x10120f6df*/
      goto LABEL_4; /*0x10120f6e5*/
    }
  }
  else
  {
    v0 = (id)objc2::__macro_helpers::cache::CachedClass::fetch::h605fe9527cb10dd5( /*0x10120f717*/
               &_$LT$objc2_foundation..generated..__NSBundle..NSBundle$u20$as$u20$objc2..top_level_traits..ClassType$GT$::class::CACHED_CLASS::h82b3073a600bca14,
               "NSBundle",
               &off_1018E8F68);
    v1 = objc2_foundation::generated::__NSBundle::NSBundle::mainBundle::CACHED_SEL::h2be4e69d7e72a75e; /*0x10120f71a*/
    if ( objc2_foundation::generated::__NSBundle::NSBundle::mainBundle::CACHED_SEL::h2be4e69d7e72a75e ) /*0x10120f724*/
      goto LABEL_3; /*0x10120f724*/
  }
  v1 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x10120f739*/
                       &objc2_foundation::generated::__NSBundle::NSBundle::mainBundle::CACHED_SEL::h2be4e69d7e72a75e,
                       "mainBundle");
  v2 = objc_msgSend(v0, v1); /*0x10120f73c*/
LABEL_4:
  result = objc_retainAutoreleasedReturnValue(v2); /*0x10120f6ea*/
  if ( !result ) /*0x10120f6f6*/
    objc2::__macro_helpers::retain_semantics::none_fail::hda1150934f8bd705(v0, v1, &off_1018E8F80); /*0x10120f74b*/
  return result; /*0x10120f6f8*/
}