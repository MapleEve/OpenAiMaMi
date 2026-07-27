// __ZN13codexmate_lib8platform17voice_permissions16has_valid_bundle @ 0x1005df6b0 | 基线 same-set
bool __fastcall codexmate_lib::platform::voice_permissions::has_valid_bundle::h19300fbcf8ad60bd(__int64 a1)
{
  void *v1; // r15
  void *v2; // rbx

  v1 = (void *)objc2_foundation::generated::__NSBundle::NSBundle::mainBundle::h8f70f79ef50df5f2(a1); /*0x1005df6bf*/
  v2 = (void *)objc2_foundation::generated::__NSBundle::NSBundle::bundleIdentifier::h3e1edc2fcf4a9604(v1); /*0x1005df6ca*/
  objc_release(v1); /*0x1005df6d0*/
  if ( v2 ) /*0x1005df6d8*/
    objc_release(v2); /*0x1005df6dd*/
  return v2 != nullptr; /*0x1005df6ec*/
}