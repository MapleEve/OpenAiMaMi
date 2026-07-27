// __ZN13codexmate_lib8platform14text_injection32capture_focused_element_snapshot @ 0x1005dede0 | 基线 same-set
double __fastcall codexmate_lib::platform::text_injection::capture_focused_element_snapshot::h49d065366b8ad286(
        __int64 a1)
{
  const __AXUIElement *SystemWide; // rax
  const __AXUIElement *v2; // r14
  double result; // xmm0_8
  __CFString *v4; // r15
  AXError v5; // r13d
  const __AXUIElement *v6; // r12
  bool v7; // r13
  pid_t v8; // edx
  const __AXUIElement *Application; // rax
  __CFString *v10; // r15
  AXError v11; // r12d
  __CFString *v12; // r15
  __CFString *v13; // r15
  CFTypeRef v14; // r14
  CFTypeRef v15; // rax
  __int64 v16; // rcx
  pid_t v17; // edx
  const __AXUIElement *v18; // rax
  const __AXUIElement *v19; // r12
  __CFString *v20; // r15
  AXError v21; // r13d
  char v22; // r15
  const __AXUIElement *v23; // rdx
  const __AXUIElement *v24; // r13
  CFTypeRef v25; // rax
  __int64 v26; // r15
  CFTypeRef v27; // rax
  __int64 v28; // rcx
  __int64 v29; // [rsp+0h] [rbp-F0h] BYREF
  _BYTE v30[72]; // [rsp+8h] [rbp-E8h] BYREF
  AXUIElementRef v31; // [rsp+50h] [rbp-A0h]
  __int64 v32; // [rsp+58h] [rbp-98h] BYREF
  __int64 v33; // [rsp+60h] [rbp-90h]
  __int64 v34; // [rsp+68h] [rbp-88h]
  CFTypeRef v35; // [rsp+70h] [rbp-80h] BYREF
  __int64 v36; // [rsp+78h] [rbp-78h]
  __int64 v37; // [rsp+80h] [rbp-70h]
  CFTypeRef value; // [rsp+88h] [rbp-68h] BYREF
  __int64 v39; // [rsp+90h] [rbp-60h]
  __int64 v40; // [rsp+98h] [rbp-58h]
  __int64 v41; // [rsp+A0h] [rbp-50h]
  __int64 v42; // [rsp+A8h] [rbp-48h]
  int v43; // [rsp+BCh] [rbp-34h]
  AXUIElementRef element; // [rsp+C0h] [rbp-30h]

  codexmate_lib::platform::text_injection::frontmost_application_info::h2160df8b181acf9f(&value); /*0x1005dee05*/
  if ( __OFSUB__(0, value) ) /*0x1005dee0c*/
  {
    v35 = (CFTypeRef)0x8000000000000000LL; /*0x1005dee16*/
    SystemWide = AXUIElementCreateSystemWide(); /*0x1005dee1a*/
    if ( SystemWide ) /*0x1005dee22*/
      goto LABEL_3; /*0x1005dee22*/
LABEL_14:
    v14 = v35; /*0x1005df03c*/
    v15 = (CFTypeRef)0x8000000000000000LL; /*0x1005df04a*/
    if ( v35 != (CFTypeRef)0x8000000000000000LL ) /*0x1005df050*/
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&value, &v35); /*0x1005df05a*/
      v15 = value; /*0x1005df05f*/
      v32 = v39; /*0x1005df067*/
      v33 = v40; /*0x1005df072*/
    }
    *(_QWORD *)a1 = v15; /*0x1005df079*/
    v16 = v33; /*0x1005df083*/
    *(_QWORD *)(a1 + 8) = v32; /*0x1005df08a*/
    *(_QWORD *)(a1 + 16) = v16; /*0x1005df08e*/
    *(_QWORD *)(a1 + 24) = 0x8000000000000000LL; /*0x1005df09c*/
    *(_QWORD *)(a1 + 48) = 0x8000000000000000LL; /*0x1005df0a0*/
    *(_WORD *)(a1 + 72) = 0; /*0x1005df0a4*/
    *(_BYTE *)(a1 + 74) = 0; /*0x1005df0aa*/
    goto LABEL_30; /*0x1005df0ae*/
  }
  if ( v41 ) /*0x1005df006*/
    result = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v42, v41, 1); /*0x1005df011*/
  v37 = v40; /*0x1005df01a*/
  v36 = v39; /*0x1005df026*/
  v35 = value; /*0x1005df02a*/
  SystemWide = AXUIElementCreateSystemWide(); /*0x1005df02e*/
  if ( !SystemWide ) /*0x1005df036*/
    goto LABEL_14; /*0x1005df036*/
LABEL_3:
  v2 = SystemWide; /*0x1005dee28*/
  *(_QWORD *)&result = 1056964608; /*0x1005dee2b*/
  AXUIElementSetMessagingTimeout(SystemWide, 0.5); /*0x1005dee36*/
  v4 = (__CFString *)objc2_foundation::string::_$LT$impl$u20$objc2_foundation..generated..__NSString..NSString$GT$::from_str::h3ce5e44381052ae9( /*0x1005dee4c*/
                       &unk_10160102F,
                       18);
  value = nullptr; /*0x1005dee4f*/
  v5 = AXUIElementCopyAttributeValue(v2, v4, &value); /*0x1005dee66*/
  v6 = (const __AXUIElement *)value; /*0x1005dee69*/
  objc_release(v4); /*0x1005dee70*/
  v7 = v5 != kAXErrorSuccess || v6 == nullptr; /*0x1005dee82*/
  if ( !v7 ) /*0x1005dee85*/
    goto LABEL_10; /*0x1005dee85*/
  v43 = codexmate_lib::platform::text_injection::frontmost_application_pid::h48aba5255c498888(); /*0x1005dee90*/
  if ( (v43 & 1) != 0 ) /*0x1005dee97*/
  {
    Application = AXUIElementCreateApplication(v8); /*0x1005dee9f*/
    if ( Application ) /*0x1005deea7*/
    {
      *(_QWORD *)&result = 1050253722; /*0x1005deead*/
      element = Application; /*0x1005deeb5*/
      AXUIElementSetMessagingTimeout(Application, 0.30000001); /*0x1005deebc*/
      v10 = (__CFString *)objc2_foundation::string::_$LT$impl$u20$objc2_foundation..generated..__NSString..NSString$GT$::from_str::h3ce5e44381052ae9( /*0x1005deed2*/
                            "AXFocusedWindowAXEnhancedUserInterfaceAXRole",
                            15);
      value = nullptr; /*0x1005deed5*/
      v11 = AXUIElementCopyAttributeValue(element, v10, &value); /*0x1005deeed*/
      v31 = (AXUIElementRef)value; /*0x1005deef4*/
      objc_release(v10); /*0x1005deefe*/
      if ( v11 == kAXErrorSuccess && v31 != nullptr ) /*0x1005def11*/
      {
        v12 = (__CFString *)objc2_foundation::string::_$LT$impl$u20$objc2_foundation..generated..__NSString..NSString$GT$::from_str::h3ce5e44381052ae9( /*0x1005def2c*/
                              "AXEnhancedUserInterfaceAXRole",
                              23);
        AXUIElementSetAttributeValue(v31, v12, kCFBooleanTrue); /*0x1005def46*/
        CFRelease(v31); /*0x1005def4e*/
        objc_release(v12); /*0x1005def56*/
      }
      CFRelease(element); /*0x1005def5f*/
    }
    std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 30000000); /*0x1005def6b*/
    v13 = (__CFString *)objc2_foundation::string::_$LT$impl$u20$objc2_foundation..generated..__NSString..NSString$GT$::from_str::h3ce5e44381052ae9( /*0x1005def81*/
                          &unk_10160102F,
                          18);
    value = nullptr; /*0x1005def84*/
    LODWORD(element) = AXUIElementCopyAttributeValue(v2, v13, &value); /*0x1005def9b*/
    v6 = (const __AXUIElement *)value; /*0x1005def9e*/
    objc_release(v13); /*0x1005defa5*/
    if ( v6 != nullptr && (_DWORD)element == 0 ) /*0x1005defae*/
    {
LABEL_10:
      v40 = v37; /*0x1005defc3*/
      v39 = v36; /*0x1005defcf*/
      value = v35; /*0x1005defd3*/
      codexmate_lib::platform::text_injection::snapshot_from_element::hb2c4886a0b1b0dc6(a1, v6, (__int64 *)&value, v7); /*0x1005defe5*/
      CFRelease(v6); /*0x1005defed*/
      CFRelease(v2); /*0x1005deff5*/
      return result; /*0x1005deffa*/
    }
  }
  if ( (codexmate_lib::platform::text_injection::frontmost_application_pid::h48aba5255c498888() & 1) == 0 ) /*0x1005df0ba*/
    goto LABEL_26; /*0x1005df0ba*/
  v18 = AXUIElementCreateApplication(v17); /*0x1005df0c2*/
  if ( !v18 ) /*0x1005df0ca*/
    goto LABEL_26; /*0x1005df0ca*/
  v19 = v18; /*0x1005df0d0*/
  *(_QWORD *)&result = 1056964608; /*0x1005df0d3*/
  AXUIElementSetMessagingTimeout(v18, 0.5); /*0x1005df0de*/
  v20 = (__CFString *)objc2_foundation::string::_$LT$impl$u20$objc2_foundation..generated..__NSString..NSString$GT$::from_str::h3ce5e44381052ae9( /*0x1005df0f4*/
                        "AXFocusedWindowAXEnhancedUserInterfaceAXRole",
                        15);
  value = nullptr; /*0x1005df0f7*/
  v21 = AXUIElementCopyAttributeValue(v19, v20, &value); /*0x1005df10e*/
  element = (AXUIElementRef)value; /*0x1005df115*/
  objc_release(v20); /*0x1005df11c*/
  if ( element == nullptr || v21 != kAXErrorSuccess ) /*0x1005df124*/
  {
    CFRelease(v19); /*0x1005df214*/
    goto LABEL_26; /*0x1005df214*/
  }
  v22 = codexmate_lib::platform::text_injection::find_editable_child::hedcbf745ceb994dc(element, 0); /*0x1005df142*/
  v24 = v23; /*0x1005df145*/
  CFRelease(element); /*0x1005df14c*/
  CFRelease(v19); /*0x1005df154*/
  if ( (v22 & 1) == 0 ) /*0x1005df15d*/
  {
LABEL_26:
    CFRelease(v2); /*0x1005df219*/
LABEL_27:
    v14 = v35; /*0x1005df221*/
    v27 = (CFTypeRef)0x8000000000000000LL; /*0x1005df22f*/
    if ( v35 != (CFTypeRef)0x8000000000000000LL ) /*0x1005df235*/
    {
      _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&value, &v35); /*0x1005df23f*/
      v27 = value; /*0x1005df244*/
      v32 = v39; /*0x1005df24c*/
      v33 = v40; /*0x1005df257*/
    }
    *(_QWORD *)a1 = v27; /*0x1005df25e*/
    v28 = v33; /*0x1005df268*/
    *(_QWORD *)(a1 + 8) = v32; /*0x1005df26f*/
    *(_QWORD *)(a1 + 16) = v28; /*0x1005df273*/
    *(_QWORD *)(a1 + 24) = 0x8000000000000000LL; /*0x1005df281*/
    *(_QWORD *)(a1 + 48) = 0x8000000000000000LL; /*0x1005df285*/
    *(_WORD *)(a1 + 72) = 0; /*0x1005df289*/
    *(_BYTE *)(a1 + 74) = v43; /*0x1005df292*/
    goto LABEL_30; /*0x1005df292*/
  }
  v25 = (CFTypeRef)0x8000000000000000LL; /*0x1005df163*/
  if ( v35 != (CFTypeRef)0x8000000000000000LL ) /*0x1005df171*/
  {
    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(&value, &v35); /*0x1005df17b*/
    v34 = v40; /*0x1005df184*/
    v25 = value; /*0x1005df18b*/
    v33 = v39; /*0x1005df193*/
  }
  v32 = (__int64)v25; /*0x1005df19a*/
  codexmate_lib::platform::text_injection::snapshot_from_element::hb2c4886a0b1b0dc6((__int64)&v29, v24, &v32, 1); /*0x1005df1b7*/
  CFRelease(v24); /*0x1005df1bf*/
  v26 = v29; /*0x1005df1c4*/
  CFRelease(v2); /*0x1005df1ce*/
  if ( v26 == 0x8000000000000001LL ) /*0x1005df1e3*/
    goto LABEL_27; /*0x1005df1e3*/
  *(_QWORD *)a1 = v26; /*0x1005df1ec*/
  qmemcpy((void *)(a1 + 8), v30, 0x48u); /*0x1005df1fb*/
  v14 = v35; /*0x1005df1fe*/
LABEL_30:
  if ( v14 != (CFTypeRef)0x8000000000000000LL ) /*0x1005df298*/
  {
    if ( v14 ) /*0x1005df29d*/
      return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v14, 1); /*0x1005df2ab*/
  }
  return result; /*0x1005df2b0*/
}