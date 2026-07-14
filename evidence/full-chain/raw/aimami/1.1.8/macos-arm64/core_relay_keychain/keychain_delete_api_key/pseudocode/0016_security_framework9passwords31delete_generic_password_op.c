// mac 1.1.8 behavioral keychain_delete_api_key 0x100941850 d=2
__int64 __fastcall security_framework::passwords::delete_generic_password_options::hfc33e7a789b5d926(_QWORD *a1)
{
  __int64 v2; // r15
  __int64 v3; // r13
  const __CFDictionary *v4; // r12
  __int64 v6; // rdi
  unsigned int v8; // [rsp+14h] [rbp-2Ch]

  v2 = a1[1]; /*0x100941864*/
  v3 = a1[2]; /*0x100941868*/
  v4 = (const __CFDictionary *)core_foundation::dictionary::CFDictionary$LT$K$C$V$GT$::from_CFType_pairs::h24117edea942cf5d( /*0x100941877*/
                                 v2,
                                 v3);
  v8 = SecItemDelete(v4); /*0x100941882*/
  CFRelease(v4); /*0x100941888*/
  while ( v3-- != 0 ) /*0x1009418a3*/
  {
    _$LT$core_foundation..filedescriptor..CFFileDescriptor$u20$as$u20$core..ops..drop..Drop$GT$::drop::h598194315f1cedaf(v2); /*0x1009418af*/
    v6 = v2 + 8; /*0x1009418b4*/
    v2 += 16; /*0x1009418b9*/
    _$LT$core_foundation..attributed_string..CFAttributedString$u20$as$u20$core..ops..drop..Drop$GT$::drop::ha29860ee28b988c0(v6); /*0x1009418be*/
  }
  if ( *a1 ) /*0x1009418c5*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1009418da*/
  return v8; /*0x1009418e2*/
}