// __ZN13codexmate_lib8platform14text_injection19ax_copy_string_attr @ 0x1005ddfa0 | 基线 same-set
void __fastcall codexmate_lib::platform::text_injection::ax_copy_string_attr::hdaf4fa1a486192b5(
        unsigned __int64 *a1,
        const __AXUIElement *a2,
        __int64 a3,
        __int64 a4)
{
  __CFString *v4; // r15
  AXError v5; // eax
  CFTypeRef v6; // r14
  bool v7; // r12
  CFTypeID v8; // r15
  unsigned __int64 v9; // rax
  CFTypeRef value[3]; // [rsp+8h] [rbp-58h] BYREF
  unsigned __int64 v11; // [rsp+20h] [rbp-40h] BYREF
  __int64 v12; // [rsp+28h] [rbp-38h]
  unsigned __int64 v13; // [rsp+30h] [rbp-30h]
  char v14[33]; // [rsp+3Fh] [rbp-21h] BYREF

  v4 = (__CFString *)objc2_foundation::string::_$LT$impl$u20$objc2_foundation..generated..__NSString..NSString$GT$::from_str::h3ce5e44381052ae9( /*0x1005ddfc0*/
                       a3,
                       a4);
  value[0] = nullptr; /*0x1005ddfc3*/
  v5 = AXUIElementCopyAttributeValue(a2, v4, value); /*0x1005ddfd5*/
  v6 = value[0]; /*0x1005ddfdf*/
  v7 = v5 == kAXErrorSuccess && value[0] != nullptr; /*0x1005ddfea*/
  objc_release(v4); /*0x1005ddff0*/
  if ( v7 ) /*0x1005ddff9*/
  {
    v8 = CFGetTypeID(v6); /*0x1005de003*/
    if ( v8 == CFStringGetTypeID() ) /*0x1005de00e*/
    {
      v11 = 0; /*0x1005de010*/
      v12 = 1; /*0x1005de018*/
      v13 = 0; /*0x1005de020*/
      value[2] = (CFTypeRef)1610612768; /*0x1005de028*/
      value[0] = &v11; /*0x1005de034*/
      value[1] = &anon_338d2c24067067f307e22096ebff88a8_1089; /*0x1005de03f*/
      if ( (unsigned __int8)objc2_foundation::string::_$LT$impl$u20$core..fmt..Display$u20$for$u20$objc2_foundation..generated..__NSString..NSString$GT$::fmt::h172ae122526909b4( /*0x1005de04a*/
                              v6,
                              value) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005de0b8*/
          &anon_338d2c24067067f307e22096ebff88a8_1090,
          55,
          v14,
          &anon_338d2c24067067f307e22096ebff88a8_1093,
          &anon_338d2c24067067f307e22096ebff88a8_1092);
      a1[2] = v13; /*0x1005de057*/
      v9 = v11; /*0x1005de05b*/
      a1[1] = v12; /*0x1005de063*/
    }
    else
    {
      v9 = 0x8000000000000000LL; /*0x1005de078*/
    }
    *a1 = v9; /*0x1005de082*/
    CFRelease(v6); /*0x1005de088*/
  }
  else
  {
    *a1 = 0x8000000000000000LL; /*0x1005de073*/
  }
}