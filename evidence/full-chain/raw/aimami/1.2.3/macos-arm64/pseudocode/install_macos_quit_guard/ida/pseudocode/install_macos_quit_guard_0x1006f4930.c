// __ZN13codexmate_lib24install_macos_quit_guard @ 0x1006f4930
void __fastcall codexmate_lib::install_macos_quit_guard::hb728083db0ce9407(__int64 a1)
{
  char v1; // of
  volatile signed __int64 *v2; // r15
  __int64 v3; // rt0
  volatile signed __int64 *v4; // rbx
  __int64 v5; // rt0
  void *v6; // rbx
  const char *v7; // rsi
  id v8; // rax
  id v9; // r12
  Class Class; // rax
  objc_class *v11; // r15
  const char *v12; // rsi
  _BYTE __src[152]; // [rsp+0h] [rbp-150h] BYREF
  _QWORD __dst[23]; // [rsp+98h] [rbp-B8h] BYREF

  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(__src, a1); /*0x1006f494f*/
  v2 = *(volatile signed __int64 **)(a1 + 136); /*0x1006f4954*/
  v3 = _InterlockedIncrement64(v2); /*0x1006f495b*/
  if ( (v3 < 0) ^ v1 | (v3 == 0) /*0x1006f4970*/
    || (v4 = *(volatile signed __int64 **)(a1 + 144), v5 = _InterlockedIncrement64(v4), (v5 < 0) ^ v1 | (v5 == 0)) )
  {
    BUG(); /*0x1006f4d7f*/
  }
  memcpy(__dst, __src, 0x88u); /*0x1006f498c*/
  __dst[17] = v2; /*0x1006f4991*/
  __dst[18] = v4; /*0x1006f4995*/
  if ( codexmate_lib::QUIT_GUARD_APP::h4f333942b3e666f9 ) /*0x1006f49a3*/
    std::sync::once_lock::OnceLock$LT$T$GT$::initialize::h152f9090339fae0d( /*0x1006f4d24*/
      &codexmate_lib::QUIT_GUARD_APP::h4f333942b3e666f9,
      __dst);
  if ( __dst[0] != 3 ) /*0x1006f49b4*/
  {
    memcpy(&__src[8], &__dst[1], 0x90u); /*0x1006f49c9*/
    *(_QWORD *)__src = __dst[0]; /*0x1006f49ce*/
    core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(__src); /*0x1006f49dc*/
  }
  if ( pthread_main_np() == 1 ) /*0x1006f49e9*/
  {
    v6 = (void *)objc2_app_kit::generated::__NSApplication::NSApplication::sharedApplication::hd928ea64bfa1419e(); /*0x1006f49f4*/
    v7 = codexmate_lib::install_macos_quit_guard::CACHED_SEL::h1faea61d1a8bf5a9; /*0x1006f49f7*/
    if ( !codexmate_lib::install_macos_quit_guard::CACHED_SEL::h1faea61d1a8bf5a9 ) /*0x1006f4a01*/
      v7 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1006f4d41*/
                           &codexmate_lib::install_macos_quit_guard::CACHED_SEL::h1faea61d1a8bf5a9,
                           "delegate");
    v8 = objc_msgSend(v6, v7); /*0x1006f4a0a*/
    if ( v8 ) /*0x1006f4a12*/
    {
      v9 = v8; /*0x1006f4a18*/
      Class = object_getClass(v8); /*0x1006f4a1e*/
      if ( !Class ) /*0x1006f4a26*/
      {
        *(_QWORD *)__src = v9; /*0x1006f4d49*/
        __dst[0] = __src; /*0x1006f4d50*/
        __dst[1] = _$LT$$BP$const$u20$T$u20$as$u20$core..fmt..Debug$GT$::fmt::hf4b27ba3d57fed95; /*0x1006f4d5e*/
        core::panicking::panic_fmt::h3a793735daf6e4ec(&unk_1017C4A0E, __dst, &off_10196A8F0); /*0x1006f4d7a*/
      }
      v11 = Class; /*0x1006f4a2c*/
      v12 = codexmate_lib::install_macos_quit_guard::CACHED_SEL::h43e3ebd2451d93ed; /*0x1006f4a2f*/
      if ( !codexmate_lib::install_macos_quit_guard::CACHED_SEL::h43e3ebd2451d93ed ) /*0x1006f4a39*/
        v12 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1006f4d94*/
                              &codexmate_lib::install_macos_quit_guard::CACHED_SEL::h43e3ebd2451d93ed,
                              "applicationShouldTerminate:");
      if ( class_addMethod( /*0x1006f4a50*/
             v11,
             v12,
             codexmate_lib::install_macos_quit_guard::application_should_terminate::ha894118da6b1850d,
             "L@:@") )
      {
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u ) /*0x1006f4a6b*/
        {
          __dst[6] = 3; /*0x1006f4a71*/
          __dst[7] = &unk_10160615A; /*0x1006f4a83*/
          __dst[8] = 13; /*0x1006f4a87*/
          __dst[10] = &unk_10160746C; /*0x1006f4a96*/
          __dst[11] = 137; /*0x1006f4a9a*/
          __dst[0] = 0; /*0x1006f4aa2*/
          __dst[1] = &unk_10160615A; /*0x1006f4aad*/
          __dst[2] = 13; /*0x1006f4ab4*/
          __dst[3] = 0; /*0x1006f4abf*/
          __dst[4] = "src/lib.rs"; /*0x1006f4ad1*/
          __dst[5] = 10; /*0x1006f4ad8*/
          __dst[9] = 0xB400000001LL; /*0x1006f4aed*/
          _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(__src, __dst); /*0x1006f4aff*/
        }
      }
      else if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u ) /*0x1006f4c65*/
      {
        __dst[6] = 2; /*0x1006f4c6b*/
        __dst[7] = &unk_10160615A; /*0x1006f4c7d*/
        __dst[8] = 13; /*0x1006f4c81*/
        __dst[10] = &unk_101607403; /*0x1006f4c90*/
        __dst[11] = 211; /*0x1006f4c94*/
        __dst[0] = 0; /*0x1006f4c9c*/
        __dst[1] = &unk_10160615A; /*0x1006f4ca7*/
        __dst[2] = 13; /*0x1006f4cae*/
        __dst[3] = 0; /*0x1006f4cb9*/
        __dst[4] = "src/lib.rs"; /*0x1006f4ccb*/
        __dst[5] = 10; /*0x1006f4cd2*/
        __dst[9] = 0xB800000001LL; /*0x1006f4ce7*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(__src, __dst); /*0x1006f4cf9*/
      }
    }
    else if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1006f4bc3*/
    {
      __dst[6] = 2; /*0x1006f4bc9*/
      __dst[7] = &unk_10160615A; /*0x1006f4bdb*/
      __dst[8] = 13; /*0x1006f4bdf*/
      __dst[10] = &unk_1016073BC; /*0x1006f4bee*/
      __dst[11] = 143; /*0x1006f4bf2*/
      __dst[0] = 0; /*0x1006f4bfa*/
      __dst[1] = &unk_10160615A; /*0x1006f4c05*/
      __dst[2] = 13; /*0x1006f4c0c*/
      __dst[3] = 0; /*0x1006f4c17*/
      __dst[4] = "src/lib.rs"; /*0x1006f4c29*/
      __dst[5] = 10; /*0x1006f4c30*/
      __dst[9] = 0xA400000001LL; /*0x1006f4c45*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(__src, __dst); /*0x1006f4c57*/
    }
    objc_release(v6); /*0x1006f4d01*/
  }
  else if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1006f4b17*/
  {
    __dst[6] = 2; /*0x1006f4b1d*/
    __dst[7] = &unk_10160615A; /*0x1006f4b2f*/
    __dst[8] = 13; /*0x1006f4b33*/
    __dst[10] = &unk_1016074B0; /*0x1006f4b42*/
    __dst[11] = 135; /*0x1006f4b46*/
    __dst[0] = 0; /*0x1006f4b4e*/
    __dst[1] = &unk_10160615A; /*0x1006f4b59*/
    __dst[2] = 13; /*0x1006f4b60*/
    __dst[3] = 0; /*0x1006f4b6b*/
    __dst[4] = "src/lib.rs"; /*0x1006f4b7d*/
    __dst[5] = 10; /*0x1006f4b84*/
    __dst[9] = 0x9E00000001LL; /*0x1006f4b99*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(__src, __dst); /*0x1006f4bab*/
  }
}