// __ZN13codexmate_lib8platform6screen16has_notch_screen @ 0x1007026c0 | 基线 same-set
__int64 __fastcall codexmate_lib::platform::screen::has_notch_screen::hf0aef5f287217e7e()
{
  unsigned int v0; // r15d
  void *v1; // rsi
  __int64 v2; // rbx
  void *v3; // rdi
  char *v4; // rax
  char *v5; // r14
  char *i; // r12
  const char *v7; // rbx
  id v8; // rax
  id v9; // r13
  const char *v11; // rsi
  double v12[2]; // [rsp+0h] [rbp-70h] BYREF
  double v13; // [rsp+10h] [rbp-60h]
  double v14[4]; // [rsp+20h] [rbp-50h] BYREF
  id v15; // [rsp+40h] [rbp-30h]

  v1 = (void *)objc2_foundation::generated::__NSProcessInfo::NSProcessInfo::processInfo::h721a11560ccd5837(); /*0x1007026dd*/
  objc2_foundation::generated::__NSProcessInfo::NSProcessInfo::operatingSystemVersion::h3e891ac55381ed2b(v14); /*0x1007026e0*/
  v2 = *(_QWORD *)&v14[0]; /*0x1007026e5*/
  objc_release(v1); /*0x1007026ec*/
  if ( v2 >= 12 && pthread_main_np() == 1 ) /*0x100702703*/
  {
    v3 = (void *)objc2_app_kit::generated::__NSScreen::NSScreen::screens::hf6640a3bf31de043(v1, v1); /*0x10070270e*/
    v15 = v3; /*0x10070271e*/
    if ( objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::count::CACHED_SEL::h52f2781c84f0f6a0 ) /*0x100702722*/
    {
      v4 = (char *)objc_msgSend( /*0x100702728*/
                     v3,
                     (SEL)objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::count::CACHED_SEL::h52f2781c84f0f6a0);
    }
    else
    {
      v11 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x100702846*/
                            &objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::count::CACHED_SEL::h52f2781c84f0f6a0,
                            "count");
      v4 = (char *)objc_msgSend(v15, v11); /*0x10070284d*/
    }
    v5 = v4; /*0x10070272d*/
    for ( i = nullptr; ; ++i ) /*0x100702730*/
    {
      LOBYTE(v0) = v5 != i; /*0x10070274e*/
      if ( v5 == i ) /*0x100702752*/
        break; /*0x100702752*/
      v7 = (const char *)objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::objectAtIndex::CACHED_SEL::h39b285c530bc1666; /*0x10070275f*/
      if ( !objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::objectAtIndex::CACHED_SEL::h39b285c530bc1666 ) /*0x100702765*/
        v7 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1007027ee*/
                             &objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::objectAtIndex::CACHED_SEL::h39b285c530bc1666,
                             "objectAtIndex:");
      v8 = objc_msgSend(v15, v7, i); /*0x100702771*/
      v9 = objc_retainAutoreleasedReturnValue(v8); /*0x10070277e*/
      if ( !v9 ) /*0x100702785*/
        objc2::__macro_helpers::retain_semantics::none_fail::hda1150934f8bd705( /*0x10070282c*/
          v15,
          v7,
          &anon_b756970ae374bf3e9e8d782d8f9d3f8c_189);
      objc2_app_kit::generated::__NSScreen::NSScreen::auxiliaryTopLeftArea::he83a645a63e41031(v12); /*0x100702792*/
      objc2_app_kit::generated::__NSScreen::NSScreen::auxiliaryTopRightArea::ha5ad75ba0e94c5a6(v14); /*0x10070279e*/
      if ( v13 > 0.0 && v14[2] > 0.0 && v14[0] > v13 + v12[0] ) /*0x1007027d3*/
      {
        objc_release(v9); /*0x1007027fe*/
        break; /*0x1007027d9*/
      }
      objc_release(v9); /*0x100702746*/
    }
    objc_release(v15); /*0x100702803*/
  }
  else
  {
    return 0; /*0x1007027f6*/
  }
  return v0; /*0x10070280f*/
}