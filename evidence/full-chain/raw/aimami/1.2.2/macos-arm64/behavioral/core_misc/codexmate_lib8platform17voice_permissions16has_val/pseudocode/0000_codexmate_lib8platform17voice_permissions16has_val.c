// mac 1.2.2 NEW codexmate_lib8platform17voice_permissions16has_val 0x10026f130 d=0
bool __fastcall codexmate_lib::platform::voice_permissions::has_valid_bundle::h70fdf0cbd856482d(__int64 a1)
{
  void *v1; // r15
  void *v2; // rbx

  v1 = (void *)objc2_foundation::generated::__NSBundle::NSBundle::mainBundle::h8f70f79ef50df5f2(a1); /*0x10026f13f*/
  v2 = (void *)objc2_foundation::generated::__NSBundle::NSBundle::bundleIdentifier::h3e1edc2fcf4a9604(v1); /*0x10026f14a*/
  objc_release(v1); /*0x10026f150*/
  if ( v2 ) /*0x10026f158*/
    objc_release(v2); /*0x10026f15d*/
  return v2 != nullptr; /*0x10026f16c*/
}