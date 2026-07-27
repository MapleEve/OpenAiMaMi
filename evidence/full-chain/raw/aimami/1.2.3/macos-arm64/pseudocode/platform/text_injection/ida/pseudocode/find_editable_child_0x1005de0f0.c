// __ZN13codexmate_lib8platform14text_injection19find_editable_child @ 0x1005de0f0 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::text_injection::find_editable_child::hedcbf745ceb994dc(
        const __AXUIElement *a1,
        unsigned int a2)
{
  __int64 result; // rax
  __CFString *v3; // r12
  AXError v4; // r13d
  Boolean v5; // bl
  __CFString *v6; // r12
  AXError v7; // r13d
  Boolean v8; // bl
  __int64 v9; // rsi
  __int64 v10; // r14
  __CFString *v11; // r12
  AXError v12; // r13d
  const __CFArray *v13; // r15
  CFIndex Count; // rax
  CFIndex v15; // r12
  CFIndex v16; // r13
  const void *ValueAtIndex; // rax
  __int64 v18; // [rsp+0h] [rbp-50h] BYREF
  __int64 v19; // [rsp+8h] [rbp-48h]
  __int64 v20; // [rsp+10h] [rbp-40h]
  __int64 v21; // [rsp+18h] [rbp-38h]
  Boolean settable[8]; // [rsp+20h] [rbp-30h] BYREF

  if ( a2 > 8 ) /*0x1005de104*/
    return 0; /*0x1005de108*/
  codexmate_lib::platform::text_injection::ax_copy_string_attr::hdaf4fa1a486192b5( /*0x1005de126*/
    (unsigned __int64 *)&v18,
    a1,
    (__int64)"AXRole",
    6);
  v21 = v18; /*0x1005de12f*/
  if ( !__OFSUB__(-v18, 1) ) /*0x1005de136*/
  {
    if ( v20 == 10 ) /*0x1005de148*/
    {
      if ( !(*(_QWORD *)v19 ^ 0x7241747865545841LL | *(unsigned __int16 *)(v19 + 8) ^ 0x6165LL) /*0x1005de1e3*/
        || !(*(_QWORD *)v19 ^ 0x426F626D6F435841LL | *(unsigned __int16 *)(v19 + 8) ^ 0x786FLL) )
      {
        goto LABEL_17; /*0x1005de1e6*/
      }
    }
    else if ( v20 == 11 ) /*0x1005de14e*/
    {
      if ( !(*(_QWORD *)v19 ^ 0x6946747865545841LL | *(_QWORD *)(v19 + 3) ^ 0x646C656946747865LL) ) /*0x1005de1a1*/
      {
LABEL_17:
        CFRetain(a1); /*0x1005de266*/
LABEL_18:
        result = 1; /*0x1005de271*/
        goto LABEL_19; /*0x1005de271*/
      }
    }
    else if ( v20 == 13 && !(*(_QWORD *)v19 ^ 0x6863726165535841LL | *(_QWORD *)(v19 + 5) ^ 0x646C656946686372LL) ) /*0x1005de175*/
    {
      goto LABEL_17; /*0x1005de178*/
    }
  }
  v3 = (__CFString *)objc2_foundation::string::_$LT$impl$u20$objc2_foundation..generated..__NSString..NSString$GT$::from_str::h3ce5e44381052ae9( /*0x1005de1f9*/
                       "AXSelectedTextRangeAXValueAXChildrenpublic.utf8-plain-text",
                       19);
  settable[0] = 0; /*0x1005de1fc*/
  v4 = AXUIElementIsAttributeSettable(a1, v3, settable); /*0x1005de20f*/
  v5 = settable[0]; /*0x1005de212*/
  objc_release(v3); /*0x1005de219*/
  if ( v4 == kAXErrorSuccess && v5 ) /*0x1005de225*/
    goto LABEL_17; /*0x1005de225*/
  v6 = (__CFString *)objc2_foundation::string::_$LT$impl$u20$objc2_foundation..generated..__NSString..NSString$GT$::from_str::h3ce5e44381052ae9( /*0x1005de238*/
                       "AXValueAXChildrenpublic.utf8-plain-text",
                       7);
  settable[0] = 0; /*0x1005de23b*/
  v7 = AXUIElementIsAttributeSettable(a1, v6, settable); /*0x1005de24e*/
  v8 = settable[0]; /*0x1005de251*/
  objc_release(v6); /*0x1005de258*/
  if ( v7 == kAXErrorSuccess ) /*0x1005de260*/
  {
    if ( v8 ) /*0x1005de264*/
      goto LABEL_17; /*0x1005de264*/
  }
  v11 = (__CFString *)objc2_foundation::string::_$LT$impl$u20$objc2_foundation..generated..__NSString..NSString$GT$::from_str::h3ce5e44381052ae9( /*0x1005de2c1*/
                        "AXChildrenpublic.utf8-plain-text",
                        10);
  *(_QWORD *)settable = 0; /*0x1005de2c4*/
  v12 = AXUIElementCopyAttributeValue(a1, v11, (CFTypeRef *)settable); /*0x1005de2db*/
  v13 = *(const __CFArray **)settable; /*0x1005de2de*/
  objc_release(v11); /*0x1005de2e5*/
  if ( v12 != kAXErrorSuccess || v13 == nullptr ) /*0x1005de2f3*/
  {
    result = 0; /*0x1005de35a*/
LABEL_19:
    v9 = v21; /*0x1005de276*/
    if ( __OFSUB__(-v21, 1) ) /*0x1005de280*/
      return result; /*0x1005de280*/
    goto LABEL_20; /*0x1005de280*/
  }
  Count = CFArrayGetCount(v13); /*0x1005de300*/
  if ( Count > 0 ) /*0x1005de308*/
  {
    v15 = Count; /*0x1005de30a*/
    v16 = 0; /*0x1005de310*/
    while ( 1 ) /*0x1005de32e*/
    {
      ValueAtIndex = CFArrayGetValueAtIndex(v13, v16); /*0x1005de32e*/
      if ( ValueAtIndex ) /*0x1005de336*/
      {
        if ( (codexmate_lib::platform::text_injection::find_editable_child::hedcbf745ceb994dc(ValueAtIndex, a2 + 1) & 1) != 0 ) /*0x1005de345*/
          break; /*0x1005de345*/
      }
      if ( v15 == ++v16 ) /*0x1005de326*/
        goto LABEL_31; /*0x1005de326*/
    }
    CFRelease(v13); /*0x1005de34d*/
    goto LABEL_18; /*0x1005de355*/
  }
LABEL_31:
  CFRelease(v13); /*0x1005de361*/
  result = 0; /*0x1005de369*/
  v9 = v21; /*0x1005de36b*/
  if ( __OFSUB__(-v21, 1) ) /*0x1005de372*/
    return result; /*0x1005de375*/
LABEL_20:
  if ( v9 ) /*0x1005de285*/
  {
    v10 = result; /*0x1005de293*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v9, 1); /*0x1005de296*/
    return v10; /*0x1005de29b*/
  }
  return result; /*0x1005de2a1*/
}