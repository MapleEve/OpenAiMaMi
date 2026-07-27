// __ZN13codexmate_lib4core5voice7runtime7overlay31apply_native_overlay_properties @ 0x1006f8be0
// 1.2.3 NEW-delta | codexmate_lib::core::voice::runtime::overlay | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
void __fastcall codexmate_lib::core::voice::runtime::overlay::apply_native_overlay_properties::haabe71a1a642514e(
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
  __m128d v18; // xmm1
  id v19; // rbx
  _OWORD v20[2]; // [rsp+0h] [rbp-110h] BYREF
  __m128d v21; // [rsp+20h] [rbp-F0h] BYREF
  unsigned __int64 v22; // [rsp+30h] [rbp-E0h]
  double v23; // [rsp+58h] [rbp-B8h] BYREF
  double v24; // [rsp+60h] [rbp-B0h]
  double v25; // [rsp+68h] [rbp-A8h]
  double v26; // [rsp+70h] [rbp-A0h]
  int v27; // [rsp+78h] [rbp-98h] BYREF
  char v28; // [rsp+7Ch] [rbp-94h]
  __int64 v29; // [rsp+80h] [rbp-90h]
  __int128 v30; // [rsp+90h] [rbp-80h]
  __m128d v31; // [rsp+A0h] [rbp-70h]
  id v32; // [rsp+B8h] [rbp-58h]
  __m128d v33; // [rsp+C0h] [rbp-50h]
  id v34; // [rsp+D8h] [rbp-38h]
  id v35; // [rsp+E0h] [rbp-30h]

  _$LT$tauri_runtime_wry..WryWindowDispatcher$LT$T$GT$$u20$as$u20$tauri_runtime..WindowDispatch$LT$T$GT$$GT$::window_handle::h7be38ff28fcf4992( /*0x1006f8bfe*/
    &v27,
    a1);
  if ( v27 == 16 ) /*0x1006f8c0c*/
  {
    *(_QWORD *)&v21.f64[0] = 0x8000000000000020LL; /*0x1006f8c23*/
    LOBYTE(v21.f64[1]) = v28; /*0x1006f8c2a*/
LABEL_21:
    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(&v21); /*0x1006f8df8*/
    return; /*0x1006f8dff*/
  }
  if ( v27 != 1 ) /*0x1006f8c38*/
  {
    *(_QWORD *)&v21.f64[0] = 0x800000000000000FLL; /*0x1006f8df1*/
    goto LABEL_21; /*0x1006f8df1*/
  }
  v3 = (void *)objc2_app_kit::generated::__NSView::NSView::window::h1496bb5f280328b6(v29); /*0x1006f8c45*/
  if ( !v3 ) /*0x1006f8c4d*/
    core::option::expect_failed::ha75f8bdcbd673567( /*0x1006f8f72*/
      &anon_3ce6d1417794db0febde534c64082f90_560,
      30,
      &anon_3ce6d1417794db0febde534c64082f90_561);
  v4 = objc_autorelease(v3); /*0x1006f8c56*/
  v5 = objc_retain(v4); /*0x1006f8c5e*/
  if ( v5 ) /*0x1006f8c66*/
  {
    v6 = v5; /*0x1006f8c6c*/
    v34 = v5; /*0x1006f8c77*/
    objc2_app_kit::generated::__NSWindow::NSWindow::setLevel::h4d0136e8fbb8e50d(v5); /*0x1006f8c7b*/
    objc2_app_kit::generated::__NSWindow::NSWindow::setCollectionBehavior::hb07551fa78179ef1(v6); /*0x1006f8c88*/
    objc2_app_kit::generated::__NSWindow::NSWindow::setHidesOnDeactivate::hf23a881ad511c7ca(v6); /*0x1006f8c92*/
    objc2_app_kit::generated::__NSWindow::NSWindow::setHasShadow::h928dcf02e4b34a27(v6); /*0x1006f8c9c*/
    objc2_app_kit::generated::__NSWindow::NSWindow::setOpaque::h9d2849f481ac4493(v6); /*0x1006f8ca6*/
    v32 = (id)objc2_app_kit::generated::__NSColor::NSColor::clearColor::h054d59e583e3e510(v6, 0); /*0x1006f8cb3*/
    v7 = v32; /*0x1006f8cb7*/
    objc2_app_kit::generated::__NSWindow::NSWindow::setBackgroundColor::hd2127465cdcf52e8(v6); /*0x1006f8cba*/
    v33.f64[0] = objc2_app_kit::generated::__NSEvent::NSEvent::mouseLocation::hb3c91219e7862ec5(v6, v7); /*0x1006f8cc4*/
    v31.f64[0] = a3; /*0x1006f8cc9*/
    if ( pthread_main_np() == 1 ) /*0x1006f8cd6*/
    {
      v35 = (id)objc2_app_kit::generated::__NSScreen::NSScreen::screens::hf6640a3bf31de043(); /*0x1006f8ce1*/
      v8 = (const char *)objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::count::CACHED_SEL::h52f2781c84f0f6a0; /*0x1006f8cec*/
      if ( !objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::count::CACHED_SEL::h52f2781c84f0f6a0 ) /*0x1006f8cf2*/
        v8 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1006f8f8a*/
                             &objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::count::CACHED_SEL::h52f2781c84f0f6a0,
                             "count");
      v9 = (char *)objc_msgSend(v35, v8); /*0x1006f8d01*/
      for ( i = nullptr; v9 != i; ++i ) /*0x1006f8d04*/
      {
        v11 = (const char *)objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::objectAtIndex::CACHED_SEL::h39b285c530bc1666; /*0x1006f8d2b*/
        if ( !objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::objectAtIndex::CACHED_SEL::h39b285c530bc1666 ) /*0x1006f8d31*/
          v11 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1006f8ddf*/
                                &objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::objectAtIndex::CACHED_SEL::h39b285c530bc1666,
                                "objectAtIndex:");
        v12 = objc_msgSend(v35, v11, i); /*0x1006f8d41*/
        v13 = objc_retainAutoreleasedReturnValue(v12); /*0x1006f8d4e*/
        if ( !v13 ) /*0x1006f8d55*/
          goto LABEL_34; /*0x1006f8d55*/
        objc2_app_kit::generated::__NSScreen::NSScreen::frame::h38dc04fd305741f8(&v23); /*0x1006f8d61*/
        if ( v33.f64[0] >= v23 ) /*0x1006f8d77*/
        {
          v30 = *(unsigned __int64 *)&v25; /*0x1006f8d85*/
          if ( v23 + v25 > v33.f64[0] && v31.f64[0] >= v24 && v26 + v24 > v31.f64[0] ) /*0x1006f8dc1*/
          {
            v31 = (__m128d)*(unsigned __int64 *)&v24; /*0x1006f8ea4*/
            v33 = (__m128d)*(unsigned __int64 *)&v23; /*0x1006f8ea9*/
            objc_release(v13); /*0x1006f8eb1*/
            v33 = _mm_unpacklo_pd(v33, v31); /*0x1006f8ebf*/
            v17 = 1; /*0x1006f8ec3*/
            goto LABEL_31; /*0x1006f8dc7*/
          }
        }
        objc_release(v13); /*0x1006f8d16*/
      }
      v14 = (const char *)objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::count::CACHED_SEL::h52f2781c84f0f6a0; /*0x1006f8e1d*/
      if ( !objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::count::CACHED_SEL::h52f2781c84f0f6a0 ) /*0x1006f8e23*/
        v14 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1006f8fa5*/
                              &objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::count::CACHED_SEL::h52f2781c84f0f6a0,
                              "count");
      if ( objc_msgSend(v35, v14) ) /*0x1006f8e2d*/
      {
        v11 = (const char *)objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::objectAtIndex::CACHED_SEL::h39b285c530bc1666; /*0x1006f8e3e*/
        if ( !objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::objectAtIndex::CACHED_SEL::h39b285c530bc1666 ) /*0x1006f8e44*/
          v11 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1006f8fc0*/
                                &objc2_foundation::generated::__NSArray::NSArray$LT$ObjectType$GT$::objectAtIndex::CACHED_SEL::h39b285c530bc1666,
                                "objectAtIndex:");
        v15 = objc_msgSend(v35, v11, 0); /*0x1006f8e53*/
        v16 = objc_retainAutoreleasedReturnValue(v15); /*0x1006f8e60*/
        if ( !v16 ) /*0x1006f8e67*/
LABEL_34:
          objc2::__macro_helpers::retain_semantics::none_fail::hda1150934f8bd705( /*0x1006f8f4a*/
            v35,
            v11,
            &anon_b756970ae374bf3e9e8d782d8f9d3f8c_189);
        objc2_app_kit::generated::__NSScreen::NSScreen::frame::h38dc04fd305741f8(&v21); /*0x1006f8e77*/
        v33 = v21; /*0x1006f8e83*/
        v30 = v22; /*0x1006f8e8f*/
        v17 = 1; /*0x1006f8e94*/
        objc_release(v16); /*0x1006f8e99*/
      }
      else
      {
        v17 = 0; /*0x1006f8ea0*/
      }
LABEL_31:
      objc_release(v35); /*0x1006f8ec5*/
      if ( v17 ) /*0x1006f8ed0*/
      {
        v18.f64[1] = *((double *)&v30 + 1); /*0x1006f8ed2*/
        v18.f64[0] = (*(double *)&v30 + -432.0) * 0.5; /*0x1006f8edf*/
        v20[0] = _mm_add_pd(v33, _mm_blend_pd(v18, (__m128d)xmmword_101605EF0, 2)); /*0x1006f8efa*/
        v20[1] = xmmword_1015FFB80; /*0x1006f8f0a*/
        ((void (__fastcall *)(id, _OWORD *, __int64))objc2_app_kit::generated::__NSWindow::NSWindow::setFrame_display::hd0a0e4df3f89a0cf)( /*0x1006f8f22*/
          v34,
          v20,
          1);
      }
    }
    objc2_app_kit::generated::__NSWindow::NSWindow::orderFrontRegardless::h0ed05c2da29dee74(v34); /*0x1006f8f2b*/
    v19 = v34; /*0x1006f8f34*/
    objc_release(v32); /*0x1006f8f38*/
    objc_release(v19); /*0x1006f8f40*/
  }
}