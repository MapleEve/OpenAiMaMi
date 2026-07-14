// mac 1.1.8 behavioral keychain_delete_api_key 0x100ef1510 d=3
CFTypeRef __fastcall _$LT$core_foundation..boolean..CFBoolean$u20$as$u20$core..convert..From$LT$bool$GT$$GT$::from::ha57c89fb36175f2d(
        int a1)
{
  CFTypeRef *v1; // rax
  CFTypeRef result; // rax

  if ( a1 ) /*0x100ef1516*/
    v1 = (CFTypeRef *)&kCFBooleanTrue; /*0x100ef1518*/
  else
    v1 = (CFTypeRef *)&kCFBooleanFalse; /*0x100ef1521*/
  if ( !*v1 || (result = CFRetain(*v1)) == nullptr ) /*0x100ef1538*/
    core::panicking::panic_fmt::h3a793735daf6e4ec((__int64)&unk_10135DE6E, 69, (__int64)&off_10156BEC0); /*0x100ef154f*/
  return result; /*0x100ef153a*/
}