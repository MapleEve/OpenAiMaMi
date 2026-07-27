// __ZN13codexmate_lib4core5voice7runtime7overlay38apply_native_search_overlay_properties @ 0x1006f9020
// 1.2.3 NEW-delta | codexmate_lib::core::voice::runtime::overlay | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
void __fastcall codexmate_lib::core::voice::runtime::overlay::apply_native_search_overlay_properties::hb1c3d4af6b25cdaa(
        __int64 a1,
        double a2,
        double a3)
{
  void *v3; // rax
  id v4; // rax
  id v5; // rax
  void *v6; // rbx
  id v7; // rsi
  const char *v8; // rsi
  char *v9; // r13
  char *i; // r14
  const char *v11; // r15
  id v12; // rax
  id v13; // r12
  const char *v14; // rsi
  id v15; // rax
  id v16; // r14
  char v17; // bl
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __m128d v21; // xmm0
  __m128d v22; // xmm4
  __m128d v23; // xmm2
  __m128d v24; // xmm1
  __m128d v25; // xmm1
  id v26; // rbx
  double v27[2]; // [rsp+8h] [rbp-F8h] BYREF
  __int128 v28; // [rsp+18h] [rbp-E8h]
  double v29; // [rsp+28h] [rbp-D8h] BYREF
  double v30; // [rsp+30h] [rbp-D0h]
  double v31; // [rsp+38h] [rbp-C8h]
  double v32; // [rsp+40h] [rbp-C0h]
  int v33; // [rsp+48h] [rbp-B8h] BYREF
  char v34; // [rsp+4Ch] [rbp-B4h]
  __int64 v35; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v36; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v37; // [rsp+68h] [rbp-98h]
  double v38; // [rsp+70h] [rbp-90h]
  unsigned __int64 v39; // [rsp+78h] [rbp-88h]
  __int128 v40; // [rsp+90h] [rbp-70h]
  double v41; // [rsp+A0h] [rbp-60h]
  id v42; // [rsp+A8h] [rbp-58h]
  __int128 v43; // [rsp+B0h] [rbp-50h]
  id v44; // [rsp+C0h] [rbp-40h]
  double v45; // [rsp+C8h] [rbp-38h]
  id v46; // [rsp+D0h] [rbp-30h]

  _$LT$tauri_runtime_wry..WryWindowDispatcher$LT$T$GT$$u20$as$u20$tauri_runtime..WindowDispatch$LT$T$GT$$GT$::window_handle::h7be38ff28fcf4992( /*0x1006f903e*/
    &v33,
    a1);
  if ( v33 == 16 ) /*0x1006f904c*/
  {
    v36 = 0x8000000000000020LL; /*0x1006f9063*/
    LOBYTE(v37) = v34; /*0x1006f906a*/
LABEL_21:
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(&v36); /*0x1006f923c*/
    return; /*0x1006f9243*/
  }
  if ( v33 != 1 ) /*0x1006f9078*/
  {
    v36 = 0x800000000000000FLL; /*0x1006f9235*/
    goto LABEL_21; /*0x1006f9235*/
  }
  v3 = (void *)objc2_app_kit::generated::__NSView::NSView::window::h1496bb5f280328b6(v35); /*0x1006f9085*/
  if ( !v3 ) /*0x1006f908d*/
    core::option::expect_failed::ha75f8bdcbd673567( /*0x1006f9441*/
      &anon_3ce6d1417794db0febde534c64082f90_560,
      30,
      &anon_3ce6d1417794db0febde534c64082f90_561);
  v4 = objc_autorelease(v3); /*0x1006f9096*/
  v5 = objc_retain(v4); /*0x1006f909e*/
  if ( v5 ) /*0x1006f90a6*/
  {
    v6 = v5; /*0x1006f90ac*/
    v44 = v5; /*0x1006f90b7*/
    objc2_app_kit::generated::__NSWindow::NSWindow::setLevel::h4d0136e8fbb8e50d(v5); /*0x1006f90bb*/
    objc2_app_kit::generated::__NSWindow::NSWindow::setCollectionBehavior::hb07551fa78179ef1(v6); /*0x1006f90c8*/
    objc2_app_kit::generated::__NSWindow::NSWindow::setHidesOnDeactivate::hf23a881ad511c7ca(v6); /*0x1006f90d2*/
    objc2_app_kit::generated::__NSWindow::NSWindow::setHasShadow::h928dcf02e4b34a27(v6); /*0x1006f90dc*/
    objc2_app_kit::generated::__NSWindow::NSWindow::setOpaque::h9d2849f481ac4493(v6); /*0x1006f90e6*/
    v42 = (id)objc2_app_kit::generated::__NSColor::NSColor::clearColor::h054d59e583e3e510(v6, 0); /*0x1006f90f3*/
    v7 = v42; /*0x1006f90f7*/
    objc2_app_kit::generated::__NSWindow::NSWindow::setBackgroundColor::hd2127465cdcf52e8(v6); /*0x1006f90fa*/
    v45 = objc2_app_kit::generated::__NSEvent::NSEvent::mouseLocation::hb3c91219e7862ec5(v6, v7); /*0x1006f9104*/
    *(double *)&v43 = a3; /*0x1006f9109*/
    if ( pthread_main_np() == 1 ) /*0x1006f9116*/
    {
      v46 = (id)objc2_app_kit::generated::__NSScreen::NSScreen::screens::hf6640a3bf31de043(); /*0x1006f9121*/
      v8 = (const char *)objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::count::CACHED_SEL::h52f2781c84f0f6a0; /*0x1006f912c*/
      if ( !objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::count::CACHED_SEL::h52f2781c84f0f6a0 ) /*0x1006f9132*/
        v8 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1006f9459*/
                             &objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::count::CACHED_SEL::h52f2781c84f0f6a0,
                             "count");
      v9 = (char *)objc_msgSend(v46, v8); /*0x1006f9141*/
      for ( i = nullptr; v9 != i; ++i ) /*0x1006f9144*/
      {
        v11 = (const char *)objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::objectAtIndex::CACHED_SEL::h39b285c530bc1666; /*0x1006f916b*/
        if ( !objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::objectAtIndex::CACHED_SEL::h39b285c530bc1666 ) /*0x1006f9171*/
          v11 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1006f9223*/
                                &objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::objectAtIndex::CACHED_SEL::h39b285c530bc1666,
                                "objectAtIndex:");
        v12 = objc_msgSend(v46, v11, i); /*0x1006f9181*/
        v13 = objc_retainAutoreleasedReturnValue(v12); /*0x1006f918e*/
        if ( !v13 ) /*0x1006f9195*/
          goto LABEL_34; /*0x1006f9195*/
        objc2_app_kit::generated::__NSScreen::NSScreen::frame::h38dc04fd305741f8(&v29); /*0x1006f91a1*/
        if ( v45 >= v29 ) /*0x1006f91b7*/
        {
          v41 = v31; /*0x1006f91c5*/
          if ( v29 + v31 > v45 && *(double *)&v43 >= v30 && v30 + v32 > *(double *)&v43 ) /*0x1006f9205*/
          {
            v40 = *(unsigned __int64 *)&v32; /*0x1006f9307*/
            v43 = *(unsigned __int64 *)&v30; /*0x1006f930c*/
            v45 = v29; /*0x1006f9311*/
            v17 = 1; /*0x1006f9316*/
            objc_release(v13); /*0x1006f931b*/
            goto LABEL_31; /*0x1006f920b*/
          }
        }
        objc_release(v13); /*0x1006f9156*/
      }
      v14 = (const char *)objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::count::CACHED_SEL::h52f2781c84f0f6a0; /*0x1006f9261*/
      if ( !objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::count::CACHED_SEL::h52f2781c84f0f6a0 ) /*0x1006f9267*/
        v14 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1006f9474*/
                              &objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::count::CACHED_SEL::h52f2781c84f0f6a0,
                              "count");
      if ( objc_msgSend(v46, v14) ) /*0x1006f9271*/
      {
        v11 = (const char *)objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::objectAtIndex::CACHED_SEL::h39b285c530bc1666; /*0x1006f9286*/
        if ( !objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::objectAtIndex::CACHED_SEL::h39b285c530bc1666 ) /*0x1006f928c*/
          v11 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1006f948f*/
                                &objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::objectAtIndex::CACHED_SEL::h39b285c530bc1666,
                                "objectAtIndex:");
        v15 = objc_msgSend(v46, v11, 0); /*0x1006f929b*/
        v16 = objc_retainAutoreleasedReturnValue(v15); /*0x1006f92a8*/
        if ( !v16 ) /*0x1006f92af*/
LABEL_34:
          objc2::__macro_helpers::retain_semantics::none_fail::hda1150934f8bd705( /*0x1006f9419*/
            v46,
            v11,
            &anon_b756970ae374bf3e9e8d782d8f9d3f8c_189);
        objc2_app_kit::generated::__NSScreen::NSScreen::frame::h38dc04fd305741f8(&v36); /*0x1006f92bf*/
        v45 = *(double *)&v36; /*0x1006f92cc*/
        v43 = v37; /*0x1006f92d9*/
        v41 = v38; /*0x1006f92e5*/
        v40 = v39; /*0x1006f92f2*/
        v17 = 1; /*0x1006f92f7*/
        objc_release(v16); /*0x1006f92fc*/
      }
      else
      {
        v17 = 0; /*0x1006f9303*/
      }
LABEL_31:
      objc_release(v46); /*0x1006f9320*/
      if ( v17 ) /*0x1006f932b*/
      {
        v21 = (__m128d)0x4040000000000000uLL; /*0x1006f934f*/
        v22.f64[1] = *((double *)&v43 + 1); /*0x1006f9357*/
        v23.f64[1] = *((double *)&v40 + 1); /*0x1006f9378*/
        v21.f64[0] = *(double *)&v43 + 32.0 + 16.0 + 52.0 + 20.0; /*0x1006f9389*/
        v23.f64[0] = *(double *)&v40 + *(double *)&v43 + -520.0 + -20.0; /*0x1006f938d*/
        v22.f64[0] = *(double *)&v43 + 20.0; /*0x1006f9395*/
        v24.f64[1] = *((double *)&v40 + 1); /*0x1006f9399*/
        v24.f64[0] = fmin(v23.f64[0], v21.f64[0]); /*0x1006f939d*/
        v25 = _mm_blendv_pd(v24, v23, _mm_cmpunord_sd(v21, v21)); /*0x1006f93a6*/
        v23.f64[1] = *((double *)&v43 + 1); /*0x1006f93ab*/
        v23.f64[0] = fmax(*(double *)&v43 + 20.0, v25.f64[0]); /*0x1006f93af*/
        v27[0] = v45 + (v41 + -640.0) * 0.5; /*0x1006f93c1*/
        *(_QWORD *)&v27[1] = (unsigned __int64)_mm_blendv_pd(v23, v22, _mm_cmpunord_sd(v25, v25)); /*0x1006f93c9*/
        v28 = xmmword_101605F00; /*0x1006f93d9*/
        objc2_app_kit::generated::__NSWindow::NSWindow::setFrame_display::hd0a0e4df3f89a0cf(v44, v27, 1, v18, v19, v20); /*0x1006f93f1*/
      }
    }
    objc2_app_kit::generated::__NSWindow::NSWindow::orderFrontRegardless::h0ed05c2da29dee74(v44); /*0x1006f93fa*/
    v26 = v44; /*0x1006f9403*/
    objc_release(v42); /*0x1006f9407*/
    objc_release(v26); /*0x1006f940f*/
  }
}