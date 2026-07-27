// __ZN13codexmate_lib8platform14text_injection11inject_text @ 0x1005dcf00 | 基线 same-set
__int64 *__fastcall codexmate_lib::platform::text_injection::inject_text::hb67dfd7c8451aecf(
        __int64 *a1,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        __int64 (__fastcall *a5)())
{
  __int64 v12; // rdx
  __int64 (__fastcall *v13)(); // rsi
  __int64 v14; // rax
  size_t v15; // rdx
  size_t v16; // r12
  const void *v17; // r13
  const char ***v18; // rdi
  _QWORD *v19; // rax
  void *v20; // rax
  __int64 v21; // r14
  __int64 v22; // rax
  __int64 v23; // r14
  __int64 v24; // rax
  const char **v25; // rsi
  void *v26; // rdi
  const __m128i *v27; // rax
  __int64 v28; // rdx
  __m128i v29; // xmm1
  id v30; // r12
  const char *v31; // rsi
  id v32; // rax
  void *v33; // r12
  const char *v34; // rsi
  __int64 v35; // r14
  __int64 v36; // rax
  __int64 v37; // rcx
  __CGEventSource *v38; // rax
  __CGEventSource *v39; // r13
  CGEventRef KeyboardEvent; // rax
  __CGEvent *v41; // r12
  __CGEvent *v42; // rax
  const char *v43; // r13
  char v44; // r12
  __int64 v45; // rax
  const char *v46; // rcx
  __int64 v47; // rsi
  __int64 v48; // rdi
  char *v50; // rax
  char *v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // rsi
  char v54; // cl
  __int64 v55; // rax
  __int64 v56; // r14
  _QWORD *v57; // rax
  const char *v58; // rsi
  _BYTE v59[24]; // [rsp+0h] [rbp-220h] BYREF
  _BYTE v60[24]; // [rsp+18h] [rbp-208h] BYREF
  _QWORD v61[3]; // [rsp+30h] [rbp-1F0h] BYREF
  _QWORD v62[2]; // [rsp+48h] [rbp-1D8h] BYREF
  __int64 v63; // [rsp+58h] [rbp-1C8h] BYREF
  __int64 v64; // [rsp+60h] [rbp-1C0h] BYREF
  __int64 v65; // [rsp+68h] [rbp-1B8h]
  __int64 v66; // [rsp+70h] [rbp-1B0h]
  __int64 v67; // [rsp+78h] [rbp-1A8h]
  const char **v68; // [rsp+80h] [rbp-1A0h] BYREF
  void *__s1; // [rsp+88h] [rbp-198h]
  _QWORD *v70; // [rsp+90h] [rbp-190h]
  __int64 v71; // [rsp+B0h] [rbp-170h]
  void *__s2; // [rsp+B8h] [rbp-168h]
  __int64 v73; // [rsp+C0h] [rbp-160h]
  char v74; // [rsp+C8h] [rbp-158h]
  _BYTE v75[7]; // [rsp+C9h] [rbp-157h] BYREF
  const char **v76; // [rsp+D0h] [rbp-150h] BYREF
  __int64 (__fastcall *v77)(); // [rsp+D8h] [rbp-148h]
  _QWORD *v78; // [rsp+E0h] [rbp-140h]
  __int64 (__fastcall *v79)(); // [rsp+E8h] [rbp-138h]
  __int64 *v80; // [rsp+F0h] [rbp-130h]
  __int64 (__fastcall *v81)(); // [rsp+F8h] [rbp-128h]
  char *v82; // [rsp+100h] [rbp-120h]
  __int64 (__fastcall *v83)(); // [rsp+108h] [rbp-118h]
  _BYTE *v84; // [rsp+110h] [rbp-110h]
  __int64 (__fastcall *v85)(); // [rsp+118h] [rbp-108h]
  _BYTE *v86; // [rsp+120h] [rbp-100h]
  __int64 (__fastcall *v87)(); // [rsp+128h] [rbp-F8h]
  char *v88; // [rsp+130h] [rbp-F0h]
  __int64 (__fastcall *v89)(); // [rsp+138h] [rbp-E8h]
  __int64 *v90; // [rsp+140h] [rbp-E0h]
  __int64 (__fastcall *v91)(); // [rsp+148h] [rbp-D8h]
  char *v92; // [rsp+150h] [rbp-D0h] BYREF
  const char **v93; // [rsp+158h] [rbp-C8h]
  _QWORD *v94; // [rsp+160h] [rbp-C0h]
  __int64 v95; // [rsp+168h] [rbp-B8h] BYREF
  size_t v96; // [rsp+170h] [rbp-B0h]
  __int64 v97; // [rsp+178h] [rbp-A8h]
  const char *v98; // [rsp+180h] [rbp-A0h] BYREF
  __int64 v99; // [rsp+188h] [rbp-98h]
  __int64 v100; // [rsp+190h] [rbp-90h]
  __int64 v101; // [rsp+198h] [rbp-88h]
  char *v102; // [rsp+1A0h] [rbp-80h]
  __int64 v103; // [rsp+1A8h] [rbp-78h]
  const char **v104; // [rsp+1B0h] [rbp-70h]
  void *v105; // [rsp+1B8h] [rbp-68h]
  size_t __n; // [rsp+1C0h] [rbp-60h]
  char v107; // [rsp+1C8h] [rbp-58h] BYREF
  _BYTE v108[7]; // [rsp+1C9h] [rbp-57h] BYREF
  __int64 v109; // [rsp+1D0h] [rbp-50h] BYREF
  __int64 v110; // [rsp+1D8h] [rbp-48h]
  __int64 v111; // [rsp+1E0h] [rbp-40h]
  CGEventRef event; // [rsp+1E8h] [rbp-38h]
  char v113; // [rsp+1F7h] [rbp-29h] BYREF

  core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a2, a3); /*0x1005dcf29*/
  if ( !v12 ) /*0x1005dcf31*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a3); /*0x1005dcfbe*/
    v19 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(30, 1); /*0x1005dcfcd*/
    if ( !v19 ) /*0x1005dcfd5*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 30); /*0x1005ddb3a*/
    *(_QWORD *)((char *)v19 + 22) = 0xA585E5A8B3E687BFLL; /*0x1005dcfe5*/
    v19[2] = 0x87BFE8B3B7E8B2B7LL; /*0x1005dcff3*/
    v19[1] = 0xE58CBCEFBAA9E7BALL; /*0x1005dd001*/
    *v19 = 0xB8E4AC9CE68796E6LL; /*0x1005dd00f*/
    *a1 = 30; /*0x1005dd012*/
    a1[1] = (__int64)v19; /*0x1005dd019*/
    a1[2] = 30; /*0x1005dd01d*/
    return a1; /*0x1005dd025*/
  }
  if ( !AXIsProcessTrusted() ) /*0x1005dcf3e*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a3); /*0x1005dd02a*/
    v20 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(140, 1); /*0x1005dd039*/
    if ( !v20 ) /*0x1005dd041*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 140); /*0x1005ddb49*/
    v21 = (__int64)v20; /*0x1005dd047*/
    memcpy(v20, &unk_101600EFC, 0x8Cu); /*0x1005dd059*/
    *a1 = 140; /*0x1005dd05e*/
    a1[1] = v21; /*0x1005dd065*/
    a1[2] = 140; /*0x1005dd069*/
    return a1; /*0x1005dd071*/
  }
  if ( a4 ) /*0x1005dcf47*/
  {
    v13 = a5; /*0x1005dcf50*/
    v14 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(a4, a5); /*0x1005dcf53*/
    v95 = v14; /*0x1005dcf58*/
    v96 = v15; /*0x1005dcf5f*/
    if ( v15 ) /*0x1005dcf69*/
    {
      v16 = v15; /*0x1005dcf6f*/
      v17 = (const void *)v14; /*0x1005dcf72*/
      v18 = &v76; /*0x1005dcf75*/
      codexmate_lib::platform::text_injection::frontmost_application_info::h2160df8b181acf9f(&v76); /*0x1005dcf7c*/
      if ( v76 == (const char **)0x8000000000000000LL ) /*0x1005dcf92*/
      {
        v68 = nullptr; /*0x1005dcf98*/
        __s1 = (void *)1; /*0x1005dcfa3*/
        v70 = nullptr; /*0x1005dcfae*/
        goto LABEL_17; /*0x1005dcfb9*/
      }
      v13 = v79; /*0x1005dd076*/
      if ( v79 ) /*0x1005dd080*/
      {
        v18 = (const char ***)v80; /*0x1005dd082*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v80, v79, 1); /*0x1005dd08e*/
      }
      v70 = v78; /*0x1005dd09a*/
      __s1 = v77; /*0x1005dd0af*/
      v68 = v76; /*0x1005dd0b6*/
      if ( !v78 ) /*0x1005dd0c0*/
      {
LABEL_17:
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v18, v13); /*0x1005dd15f*/
        v23 = 60; /*0x1005dd164*/
        v24 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(60, 1); /*0x1005dd174*/
        if ( v24 ) /*0x1005dd17c*/
        {
          *(_QWORD *)(v24 + 48) = 0x85E5A8B3E6AFAFE8LL; /*0x1005dd18c*/
          *(_QWORD *)(v24 + 40) = 0x8D85E5BF81E9B4B4LL; /*0x1005dd19a*/
          *(_QWORD *)(v24 + 32) = 0xE898B2E788B6E696LL; /*0x1005dd1a8*/
          *(_QWORD *)(v24 + 24) = 0x8FE5B2B7E58CBCEFLL; /*0x1005dd1b6*/
          *(_QWORD *)(v24 + 16) = 0xA894E794BAE5B08FLL; /*0x1005dd1c4*/
          *(_QWORD *)(v24 + 8) = 0xE58D89E5968FE5BBLL; /*0x1005dd1d2*/
          *(_QWORD *)v24 = 0xAFE895B3E6A097E6LL; /*0x1005dd1e0*/
          *(_DWORD *)(v24 + 56) = -2105482331; /*0x1005dd1e3*/
          *a1 = 60; /*0x1005dd1ea*/
          a1[1] = v24; /*0x1005dd1f1*/
          a1[2] = 60; /*0x1005dd1f5*/
          goto LABEL_19; /*0x1005dd1f5*/
        }
LABEL_99:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v23); /*0x1005ddb5d*/
      }
      if ( v78 != (_QWORD *)v16 || memcmp(__s1, v17, v16) ) /*0x1005dd0db*/
      {
        v76 = (const char **)&v95; /*0x1005dd0ef*/
        v77 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1005dd0fd*/
        v78 = &v68; /*0x1005dd10b*/
        v79 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1005dd119*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v61, &unk_1017C2375, &v76); /*0x1005dd135*/
        a1[2] = v61[2]; /*0x1005dd141*/
        v22 = v61[0]; /*0x1005dd145*/
        a1[1] = v61[1]; /*0x1005dd153*/
        *a1 = v22; /*0x1005dd157*/
        goto LABEL_19; /*0x1005dd15a*/
      }
      v27 = (const __m128i *)core::str::_$LT$impl$u20$str$GT$::trim_matches::hc9badfa933b1ea85(v95, v96); /*0x1005dd227*/
      if ( v28 == 18 ) /*0x1005dd23a*/
      {
        v29 = _mm_or_si128( /*0x1005dd258*/
                _mm_xor_si128(_mm_cvtsi32_si128(v27[1].u16[0]), (__m128i)xmmword_1015FFBA0),
                _mm_xor_si128(_mm_loadu_si128(v27), (__m128i)xmmword_1015FFB90));
        if ( _mm_testz_si128(v29, v29) ) /*0x1005dd261*/
        {
          if ( (unsigned __int8)codexmate_lib::platform::text_injection::pasteboard_write_string::hf48d08df45e15295( /*0x1005dd961*/
                                  a2,
                                  a3) )
          {
            v98 = "copiedToClipboardvoiceinject_outcome-failed to spawn threadAXFocusedWindowAXEnhancedUserInterfaceAXRole"; /*0x1005dd975*/
            v99 = 17; /*0x1005dd97c*/
            v64 = _$LT$core..str..iter..Chars$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::count::h26da71cd7b0b1b83( /*0x1005dd995*/
                    a2,
                    a2 + a3);
            v76 = &v98; /*0x1005dd9a3*/
            v77 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1005dd9b1*/
            v78 = &v95; /*0x1005dd9bf*/
            v79 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1005dd9c6*/
            v80 = &v64; /*0x1005dd9d4*/
            v81 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1005dd9e2*/
            alloc::fmt::format::format_inner::h3c16c74008a310d4(v60, &unk_1017C22DD, &v76); /*0x1005dd9fe*/
            codexmate_lib::platform::debug_log::app_event::hca94542905aced18( /*0x1005dda22*/
              "voiceinject_outcome-failed to spawn threadAXFocusedWindowAXEnhancedUserInterfaceAXRole",
              5,
              "inject_outcome-failed to spawn threadAXFocusedWindowAXEnhancedUserInterfaceAXRole",
              14,
              v60);
            *((_BYTE *)a1 + 8) = 1; /*0x1005dda27*/
            *a1 = 0x8000000000000000LL; /*0x1005dda2b*/
          }
          else
          {
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a3); /*0x1005dda33*/
            v23 = 21; /*0x1005dda38*/
            v57 = (_QWORD *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(21, 1); /*0x1005dda48*/
            if ( !v57 ) /*0x1005dda50*/
              goto LABEL_99; /*0x1005dda50*/
            *(_QWORD *)((char *)v57 + 13) = 0xA5B4E8B1A4E5BF9DLL; /*0x1005dda60*/
            v57[1] = 0xE5BF9DE6B4B4E8AALL; /*0x1005dda6e*/
            *v57 = 0x89E5A585E59986E5LL; /*0x1005dda7c*/
            *a1 = 21; /*0x1005dda7f*/
            a1[1] = (__int64)v57; /*0x1005dda86*/
            a1[2] = 21; /*0x1005dda8a*/
          }
LABEL_19:
          v25 = v68; /*0x1005dd1fd*/
          if ( v68 ) /*0x1005dd207*/
          {
            v26 = __s1; /*0x1005dd20d*/
LABEL_61:
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v25, 1); /*0x1005dd629*/
            return a1; /*0x1005dd62e*/
          }
          return a1; /*0x1005dd207*/
        }
      }
      if ( v68 ) /*0x1005dd271*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v68, 1); /*0x1005dd27b*/
    }
  }
  codexmate_lib::platform::text_injection::capture_focused_element_snapshot::h49d065366b8ad286(&v98); /*0x1005dd287*/
  codexmate_lib::platform::text_injection::pasteboard_current_string::hc44da7c7bd12897e(&v109); /*0x1005dd290*/
  if ( !(unsigned __int8)codexmate_lib::platform::text_injection::pasteboard_write_string::hf48d08df45e15295(a2, a3) ) /*0x1005dd2a2*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2, a3); /*0x1005dd2f9*/
    v35 = 21; /*0x1005dd2fe*/
    v36 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(21, 1); /*0x1005dd30e*/
    if ( !v36 ) /*0x1005dd320*/
      goto LABEL_98; /*0x1005dd320*/
    *(_QWORD *)(v36 + 13) = 0xA5B4E8B1A4E5BF9DLL; /*0x1005dd330*/
    *(_QWORD *)(v36 + 8) = 0xE5BF9DE6B4B4E8AALL; /*0x1005dd33e*/
    *(_QWORD *)v36 = 0x89E5A585E59986E5LL; /*0x1005dd34c*/
    v37 = 21; /*0x1005dd34f*/
    goto LABEL_48; /*0x1005dd354*/
  }
  v30 = codexmate_lib::platform::text_injection::general_pasteboard::CACHED_CLASS::h651eaa1b1a30e429; /*0x1005dd2a4*/
  if ( codexmate_lib::platform::text_injection::general_pasteboard::CACHED_CLASS::h651eaa1b1a30e429 ) /*0x1005dd2ae*/
  {
    v31 = codexmate_lib::platform::text_injection::general_pasteboard::CACHED_SEL::h1ef9134429170661; /*0x1005dd2b4*/
    if ( codexmate_lib::platform::text_injection::general_pasteboard::CACHED_SEL::h1ef9134429170661 ) /*0x1005dd2be*/
    {
LABEL_28:
      v32 = objc_msgSend(v30, v31); /*0x1005dd2c4*/
      goto LABEL_29; /*0x1005dd2c7*/
    }
  }
  else
  {
    v30 = (id)objc2::__macro_helpers::cache::CachedClass::fetch::h605fe9527cb10dd5( /*0x1005ddab1*/
                &codexmate_lib::platform::text_injection::general_pasteboard::CACHED_CLASS::h651eaa1b1a30e429,
                "NSPasteboard",
                &off_1019655A0);
    v31 = codexmate_lib::platform::text_injection::general_pasteboard::CACHED_SEL::h1ef9134429170661; /*0x1005ddab4*/
    if ( codexmate_lib::platform::text_injection::general_pasteboard::CACHED_SEL::h1ef9134429170661 ) /*0x1005ddabe*/
      goto LABEL_28; /*0x1005ddabe*/
  }
  v58 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1005ddad7*/
                        &codexmate_lib::platform::text_injection::general_pasteboard::CACHED_SEL::h1ef9134429170661,
                        "generalPasteboard");
  v32 = objc_msgSend(v30, v58); /*0x1005ddada*/
LABEL_29:
  v33 = v32; /*0x1005dd2cc*/
  if ( v32 ) /*0x1005dd2d2*/
  {
    v34 = codexmate_lib::platform::text_injection::pasteboard_change_count::CACHED_SEL::h5ccc49e727f3f5b0; /*0x1005dd2d8*/
    if ( !codexmate_lib::platform::text_injection::pasteboard_change_count::CACHED_SEL::h5ccc49e727f3f5b0 ) /*0x1005dd2e2*/
      v34 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1005ddaf2*/
                            &codexmate_lib::platform::text_injection::pasteboard_change_count::CACHED_SEL::h5ccc49e727f3f5b0,
                            "changeCount");
    v97 = (__int64)objc_msgSend(v33, v34); /*0x1005dd2f0*/
  }
  else
  {
    v97 = -1; /*0x1005dd359*/
  }
  std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 50000000); /*0x1005dd36b*/
  v38 = CGEventSourceCreate(kCGEventSourceStateHIDSystemState); /*0x1005dd375*/
  if ( v38 ) /*0x1005dd37d*/
  {
    v39 = v38; /*0x1005dd383*/
    KeyboardEvent = CGEventCreateKeyboardEvent(v38, 9u, 1); /*0x1005dd393*/
    if ( KeyboardEvent ) /*0x1005dd39b*/
    {
      v41 = KeyboardEvent; /*0x1005dd3a1*/
      v42 = CGEventCreateKeyboardEvent(v39, 9u, 0); /*0x1005dd3ae*/
      if ( v42 ) /*0x1005dd3b6*/
      {
        event = v42; /*0x1005dd3c1*/
        CGEventSetFlags(v41, 0x100000u); /*0x1005dd3c8*/
        CGEventSetFlags(event, 0x100000u); /*0x1005dd3d6*/
        CGEventPost(kCGHIDEventTap, v41); /*0x1005dd3e0*/
        CGEventPost(kCGHIDEventTap, event); /*0x1005dd3eb*/
        CFRelease(v41); /*0x1005dd3f3*/
        CFRelease(event); /*0x1005dd3fc*/
        CFRelease(v39); /*0x1005dd404*/
        std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 100000000); /*0x1005dd410*/
        codexmate_lib::platform::text_injection::capture_focused_element_snapshot::h49d065366b8ad286(&v68); /*0x1005dd41c*/
        v43 = v98; /*0x1005dd421*/
        if ( v98 == (const char *)0x8000000000000000LL && v68 == (const char **)0x8000000000000000LL /*0x1005dd694*/
          || v108[0] == 1
          && v75[0]
          && (v104 == (const char **)0x8000000000000000LL
           || v71 == 0x8000000000000000LL
           || __n == v73 && !memcmp(v105, __s2, __n))
          && !v107
          && !v74 )
        {
          v44 = 1; /*0x1005dd448*/
          v45 = 17; /*0x1005dd44b*/
          v46 = "copiedToClipboardvoiceinject_outcome-failed to spawn threadAXFocusedWindowAXEnhancedUserInterfaceAXRole"; /*0x1005dd450*/
        }
        else
        {
          v45 = 8; /*0x1005dd69a*/
          v46 = (const char *)&unk_1015DC8F0; /*0x1005dd69f*/
          v44 = 0; /*0x1005dd6a6*/
        }
        v62[0] = v46; /*0x1005dd6b6*/
        v62[1] = v45; /*0x1005dd6bd*/
        v50 = "-failed to spawn threadAXFocusedWindowAXEnhancedUserInterfaceAXRole"; /*0x1005dd6c4*/
        v51 = (char *)v99; /*0x1005dd6cb*/
        if ( v43 == (const char *)0x8000000000000000LL ) /*0x1005dd6d2*/
          v51 = "-failed to spawn threadAXFocusedWindowAXEnhancedUserInterfaceAXRole"; /*0x1005dd6d2*/
        v52 = 1; /*0x1005dd6d6*/
        v53 = v100; /*0x1005dd6db*/
        if ( v43 == (const char *)0x8000000000000000LL ) /*0x1005dd6e2*/
          v53 = 1; /*0x1005dd6e2*/
        v92 = v51; /*0x1005dd6e6*/
        v93 = (const char **)v53; /*0x1005dd6ed*/
        if ( v101 != 0x8000000000000000LL ) /*0x1005dd6fb*/
        {
          v50 = v102; /*0x1005dd6fd*/
          v52 = v103; /*0x1005dd701*/
        }
        v64 = (__int64)v50; /*0x1005dd705*/
        v65 = v52; /*0x1005dd70c*/
        v54 = 1; /*0x1005dd71e*/
        if ( !v108[1] ) /*0x1005dd723*/
          v54 = v75[1]; /*0x1005dd723*/
        v113 = v54; /*0x1005dd726*/
        if ( a3 >= 0x20 ) /*0x1005dd730*/
          v55 = core::str::count::do_count_chars::h4875767a8f682eeb(a2, a3); /*0x1005dd745*/
        else
          v55 = core::str::count::char_count_general_case::h35f326d7c82e4f55(a2, a3); /*0x1005dd738*/
        v63 = v55; /*0x1005dd759*/
        v76 = (const char **)v62; /*0x1005dd767*/
        v77 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1005dd775*/
        v78 = &v92; /*0x1005dd783*/
        v79 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1005dd78a*/
        v80 = &v64; /*0x1005dd798*/
        v81 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1005dd79f*/
        v82 = &v107; /*0x1005dd7a6*/
        v83 = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x1005dd7b4*/
        v84 = v108; /*0x1005dd7bb*/
        v85 = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x1005dd7c2*/
        v86 = v75; /*0x1005dd7c9*/
        v87 = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x1005dd7d0*/
        v88 = &v113; /*0x1005dd7db*/
        v89 = _$LT$bool$u20$as$u20$core..fmt..Display$GT$::fmt::hfa84701fb0a9c855; /*0x1005dd7e2*/
        v90 = &v63; /*0x1005dd7f0*/
        v91 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$usize$GT$::fmt::h2b6609ac037ea0d6; /*0x1005dd7fe*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v59, &unk_1017C23CF, &v76); /*0x1005dd81d*/
        codexmate_lib::platform::debug_log::app_event::hca94542905aced18( /*0x1005dd841*/
          "voiceinject_outcome-failed to spawn threadAXFocusedWindowAXEnhancedUserInterfaceAXRole",
          5,
          "inject_outcome-failed to spawn threadAXFocusedWindowAXEnhancedUserInterfaceAXRole",
          14,
          v59);
        v56 = v109; /*0x1005dd846*/
        if ( ((unsigned __int8)v44 | (v109 == 0x8000000000000000LL)) == 1 ) /*0x1005dd85f*/
        {
          *((_BYTE *)a1 + 8) = v44; /*0x1005dd861*/
          *a1 = 0x8000000000000000LL; /*0x1005dd865*/
          core::ptr::drop_in_place$LT$codexmate_lib..platform..text_injection..FocusedElementSnapshot$GT$::h8944a478321ac6b3(&v68); /*0x1005dd86f*/
          if ( v56 != 0x8000000000000000LL && v56 ) /*0x1005dd880*/
          {
            v48 = v110; /*0x1005dd886*/
            v47 = v56; /*0x1005dd88f*/
            goto LABEL_51; /*0x1005dd892*/
          }
        }
        else
        {
          v66 = v111; /*0x1005dd89b*/
          v65 = v110; /*0x1005dd8aa*/
          v64 = v109; /*0x1005dd8b1*/
          v67 = v97; /*0x1005dd8bf*/
          v78 = (_QWORD *)0x8000000000000000LL; /*0x1005dd8c6*/
          v76 = nullptr; /*0x1005dd8cd*/
          LOBYTE(v81) = 0; /*0x1005dd8d8*/
          std::thread::builder::Builder::spawn_unchecked::hffec0e877050cb3c(&v92, &v76, &v64); /*0x1005dd8f7*/
          if ( !v92 ) /*0x1005dd904*/
          {
            v76 = v93; /*0x1005ddb01*/
            core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1005ddb29*/
              "failed to spawn threadAXFocusedWindowAXEnhancedUserInterfaceAXRole",
              22,
              &v76,
              &off_101965F28,
              &off_101965588);
          }
          v78 = v94; /*0x1005dd911*/
          v77 = (__int64 (__fastcall *)())v93; /*0x1005dd926*/
          v76 = (const char **)v92; /*0x1005dd92d*/
          core::ptr::drop_in_place$LT$std..thread..join_handle..JoinHandle$LT$$LP$$RP$$GT$$GT$::h9bda91b0eda32292(&v76); /*0x1005dd93e*/
          *((_BYTE *)a1 + 8) = 0; /*0x1005dd943*/
          *a1 = 0x8000000000000000LL; /*0x1005dd947*/
          core::ptr::drop_in_place$LT$codexmate_lib..platform..text_injection..FocusedElementSnapshot$GT$::h8944a478321ac6b3(&v68); /*0x1005dd951*/
        }
        goto LABEL_52; /*0x1005dd880*/
      }
      CFRelease(v41); /*0x1005dd539*/
      CFRelease(v39); /*0x1005dd541*/
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v39, 9); /*0x1005dd546*/
      v35 = 30; /*0x1005dd54b*/
      v36 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(30, 1); /*0x1005dd55b*/
      if ( v36 ) /*0x1005dd56d*/
      {
        *(_QWORD *)(v36 + 22) = 0xA5B4E8B1A4E5B6BBLL; /*0x1005dd57d*/
        *(_QWORD *)(v36 + 16) = 0xB6BBE48BBAE42029LL; /*0x1005dd58b*/
        *(_QWORD *)(v36 + 8) = 0x70752820562B646DLL; /*0x1005dd599*/
        *(_QWORD *)v36 = 0x4320BABBE59B88E5LL; /*0x1005dd5a7*/
        v37 = 30; /*0x1005dd5aa*/
        goto LABEL_48; /*0x1005dd5aa*/
      }
LABEL_98:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, v35); /*0x1005ddb4e*/
    }
    CFRelease(v39); /*0x1005dd4c6*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v39, 9); /*0x1005dd4cb*/
    v35 = 32; /*0x1005dd4d0*/
    v36 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 1); /*0x1005dd4e0*/
    if ( !v36 ) /*0x1005dd4f2*/
      goto LABEL_98; /*0x1005dd4f2*/
    *(_QWORD *)(v36 + 24) = 0xA5B4E8B1A4E5B6BBLL; /*0x1005dd502*/
    *(_QWORD *)(v36 + 16) = 0xE48BBAE420296E77LL; /*0x1005dd510*/
    *(_QWORD *)(v36 + 8) = 0x6F642820562B646DLL; /*0x1005dd51e*/
    *(_QWORD *)v36 = 0x4320BABBE59B88E5LL; /*0x1005dd52c*/
    v37 = 32; /*0x1005dd52f*/
  }
  else
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(1, 50000000); /*0x1005dd45c*/
    v35 = 27; /*0x1005dd461*/
    v36 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(27, 1); /*0x1005dd471*/
    if ( !v36 ) /*0x1005dd483*/
      goto LABEL_98; /*0x1005dd483*/
    *(_QWORD *)(v36 + 16) = 0xB1A4E52065637275LL; /*0x1005dd493*/
    *(_QWORD *)(v36 + 8) = 0x6F53746E65764547LL; /*0x1005dd4a1*/
    *(_QWORD *)v36 = 0x4320BABBE59B88E5LL; /*0x1005dd4af*/
    *(_DWORD *)(v36 + 23) = -1514870607; /*0x1005dd4b2*/
    v37 = 27; /*0x1005dd4b9*/
  }
LABEL_48:
  *a1 = v37; /*0x1005dd5af*/
  a1[1] = v36; /*0x1005dd5b2*/
  a1[2] = v37; /*0x1005dd5b6*/
  v47 = v109; /*0x1005dd5ba*/
  if ( v109 != 0x8000000000000000LL && v109 ) /*0x1005dd5c6*/
  {
    v48 = v110; /*0x1005dd5c8*/
LABEL_51:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, v47, 1); /*0x1005dd5d1*/
  }
LABEL_52:
  if ( v98 != (const char *)0x8000000000000000LL && v98 ) /*0x1005dd5e5*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v99, v98, 1); /*0x1005dd5f3*/
  if ( v101 != 0x8000000000000000LL && v101 ) /*0x1005dd607*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v102, v101, 1); /*0x1005dd612*/
  v25 = v104; /*0x1005dd617*/
  if ( v104 != (const char **)0x8000000000000000LL && v104 ) /*0x1005dd623*/
  {
    v26 = v105; /*0x1005dd625*/
    goto LABEL_61; /*0x1005dd625*/
  }
  return a1; /*0x1005dd636*/
}