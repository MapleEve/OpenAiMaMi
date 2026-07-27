// __ZN13codexmate_lib8platform17voice_permissions13request_async @ 0x1005df300 | 基线 same-set
void __fastcall codexmate_lib::platform::voice_permissions::request_async::h541dca7a8712ea04(__int64 a1)
{
  id v1; // r14
  const char *v2; // rsi
  char v3; // of
  volatile signed __int64 *v4; // r15
  __int64 v5; // rt0
  volatile signed __int64 *v6; // r13
  __int64 v7; // rt0
  void *v8; // rax
  const void *v9; // r15
  const char *v10; // rsi
  id v11; // r14
  const char *v12; // rsi
  char v13; // of
  volatile signed __int64 *v14; // r15
  __int64 v15; // rt0
  volatile signed __int64 *v16; // rbx
  __int64 v17; // rt0
  void *v18; // rax
  const void *v19; // rbx
  const char *v20; // rsi
  const char *v21; // rax
  _BYTE __src[136]; // [rsp+8h] [rbp-168h] BYREF
  void **aBlock; // [rsp+90h] [rbp-E0h] BYREF
  __int64 v24; // [rsp+98h] [rbp-D8h]
  __int64 (__fastcall *v25)(); // [rsp+A0h] [rbp-D0h]
  void *v26; // [rsp+A8h] [rbp-C8h]
  _BYTE __dst[136]; // [rsp+B0h] [rbp-C0h] BYREF
  volatile signed __int64 *v28; // [rsp+138h] [rbp-38h]
  volatile signed __int64 *v29; // [rsp+140h] [rbp-30h]

  if ( !(unsigned __int8)codexmate_lib::platform::voice_permissions::has_valid_bundle::h19300fbcf8ad60bd() )
  {
    if ( !codexmate_lib::platform::debug_log::DEBUG_LOG_PATH::ha0795d2b6fb0e9de )
    {
      codexmate_lib::platform::debug_log::append_line::h0e566314ee9972cc(
        &unk_1019FF248,
        "[voice-permissions] skip mic request: no app bundle (dev mode)",
        62);
      if ( (unsigned __int8)codexmate_lib::platform::voice_permissions::has_valid_bundle::h19300fbcf8ad60bd() ) /*0x1005df55d*/
        goto LABEL_14; /*0x1005df564*/
LABEL_24:
      if ( !codexmate_lib::platform::debug_log::DEBUG_LOG_PATH::ha0795d2b6fb0e9de )
        codexmate_lib::platform::debug_log::append_line::h0e566314ee9972cc(
          &unk_1019FF248,
          "[voice-permissions] skip speech request: no app bundle (dev mode)",
          65);
      return; /*0x1005df589*/
    }
LABEL_13:
    if ( (unsigned __int8)codexmate_lib::platform::voice_permissions::has_valid_bundle::h19300fbcf8ad60bd() ) /*0x1005df447*/
      goto LABEL_14; /*0x1005df44e*/
    goto LABEL_24; /*0x1005df44e*/
  }
  v1 = codexmate_lib::platform::voice_permissions::request_microphone_async::CACHED_CLASS::hf0277eb6e9efd24a; /*0x1005df324*/
  if ( codexmate_lib::platform::voice_permissions::request_microphone_async::CACHED_CLASS::hf0277eb6e9efd24a ) /*0x1005df32e*/
  {
    v2 = codexmate_lib::platform::voice_permissions::request_microphone_async::CACHED_SEL::h1eaee28eb257d7d0; /*0x1005df334*/
    if ( codexmate_lib::platform::voice_permissions::request_microphone_async::CACHED_SEL::h1eaee28eb257d7d0 ) /*0x1005df33e*/
      goto LABEL_4; /*0x1005df33e*/
  }
  else
  {
    v1 = (id)objc2::__macro_helpers::cache::CachedClass::fetch::h605fe9527cb10dd5( /*0x1005df5ba*/
               &codexmate_lib::platform::voice_permissions::request_microphone_async::CACHED_CLASS::hf0277eb6e9efd24a,
               "AVCaptureDevice",
               &anon_338d2c24067067f307e22096ebff88a8_860);
    v2 = codexmate_lib::platform::voice_permissions::request_microphone_async::CACHED_SEL::h1eaee28eb257d7d0; /*0x1005df5bd*/
    if ( codexmate_lib::platform::voice_permissions::request_microphone_async::CACHED_SEL::h1eaee28eb257d7d0 ) /*0x1005df5c7*/
      goto LABEL_4; /*0x1005df5c7*/
  }
  v2 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1005df5e0*/
                       &codexmate_lib::platform::voice_permissions::request_microphone_async::CACHED_SEL::h1eaee28eb257d7d0,
                       "authorizationStatusForMediaType:");
LABEL_4:
  if ( objc_msgSend(v1, v2, AVMediaTypeAudio) ) /*0x1005df352*/
    goto LABEL_13; /*0x1005df35a*/
  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(__src, a1); /*0x1005df36a*/
  v4 = *(volatile signed __int64 **)(a1 + 136); /*0x1005df36f*/
  v5 = _InterlockedIncrement64(v4); /*0x1005df376*/
  if ( (v5 < 0) ^ v3 | (v5 == 0) /*0x1005df38c*/
    || (v6 = *(volatile signed __int64 **)(a1 + 144), v7 = _InterlockedIncrement64(v6), (v7 < 0) ^ v3 | (v7 == 0)) )
  {
LABEL_32:
    BUG(); /*0x1005df677*/
  }
  memcpy(__dst, __src, sizeof(__dst)); /*0x1005df3a5*/
  aBlock = _NSConcreteStackBlock; /*0x1005df3b1*/
  v24 = 0x2000000; /*0x1005df3b8*/
  v25 = _$LT$Closure$u20$as$u20$block2..traits..IntoBlock$LT$$LP$T0$C$$RP$$C$R$GT$$GT$::__get_invoke_stack_block::invoke::hfbe8ff1028819312; /*0x1005df3ca*/
  v26 = &anon_4fd0d0f33f5bcd90fdaba20400e954f2_470; /*0x1005df3d8*/
  v28 = v4; /*0x1005df3df*/
  v29 = v6; /*0x1005df3e3*/
  v8 = _Block_copy(&aBlock); /*0x1005df3ee*/
  if ( !v8 ) /*0x1005df3f6*/
    goto LABEL_33; /*0x1005df3f6*/
  v9 = v8; /*0x1005df3fc*/
  v10 = codexmate_lib::platform::voice_permissions::request_microphone_async::CACHED_SEL::h31c5bbd7a012f9da; /*0x1005df3ff*/
  if ( !codexmate_lib::platform::voice_permissions::request_microphone_async::CACHED_SEL::h31c5bbd7a012f9da ) /*0x1005df409*/
    v10 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1005df654*/
                          &codexmate_lib::platform::voice_permissions::request_microphone_async::CACHED_SEL::h31c5bbd7a012f9da,
                          "requestAccessForMediaType:completionHandler:");
  objc_msgSend(v1, v10, AVMediaTypeAudio, v9); /*0x1005df419*/
  _Block_release(v9); /*0x1005df421*/
  if ( !(unsigned __int8)codexmate_lib::platform::voice_permissions::has_valid_bundle::h19300fbcf8ad60bd() ) /*0x1005df426*/
    goto LABEL_24; /*0x1005df42d*/
LABEL_14:
  v11 = codexmate_lib::platform::voice_permissions::request_speech_async::CACHED_CLASS::he29cf9f55b1825bb; /*0x1005df454*/
  if ( codexmate_lib::platform::voice_permissions::request_speech_async::CACHED_CLASS::he29cf9f55b1825bb ) /*0x1005df45e*/
  {
    v12 = codexmate_lib::platform::voice_permissions::request_speech_async::CACHED_SEL::h30bbfb7078db0dee; /*0x1005df464*/
    if ( codexmate_lib::platform::voice_permissions::request_speech_async::CACHED_SEL::h30bbfb7078db0dee ) /*0x1005df46e*/
      goto LABEL_16; /*0x1005df46e*/
  }
  else
  {
    v11 = (id)objc2::__macro_helpers::cache::CachedClass::fetch::h605fe9527cb10dd5( /*0x1005df602*/
                &codexmate_lib::platform::voice_permissions::request_speech_async::CACHED_CLASS::he29cf9f55b1825bb,
                "SFSpeechRecognizer",
                &anon_338d2c24067067f307e22096ebff88a8_850);
    v12 = codexmate_lib::platform::voice_permissions::request_speech_async::CACHED_SEL::h30bbfb7078db0dee; /*0x1005df605*/
    if ( codexmate_lib::platform::voice_permissions::request_speech_async::CACHED_SEL::h30bbfb7078db0dee ) /*0x1005df60f*/
    {
LABEL_16:
      if ( objc_msgSend(v11, v12) ) /*0x1005df477*/
        return; /*0x1005df47f*/
      goto LABEL_17; /*0x1005df47f*/
    }
  }
  v21 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1005df623*/
                        &codexmate_lib::platform::voice_permissions::request_speech_async::CACHED_SEL::h30bbfb7078db0dee,
                        "authorizationStatus");
  if ( objc_msgSend(v11, v21) ) /*0x1005df62e*/
    return; /*0x1005df636*/
LABEL_17:
  _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(__src, a1); /*0x1005df485*/
  v14 = *(volatile signed __int64 **)(a1 + 136); /*0x1005df494*/
  v15 = _InterlockedIncrement64(v14); /*0x1005df49b*/
  if ( (v15 < 0) ^ v13 | (v15 == 0) ) /*0x1005df49f*/
    goto LABEL_32; /*0x1005df49f*/
  v16 = *(volatile signed __int64 **)(a1 + 144); /*0x1005df4a5*/
  v17 = _InterlockedIncrement64(v16); /*0x1005df4ac*/
  if ( (v17 < 0) ^ v13 | (v17 == 0) ) /*0x1005df4b0*/
    goto LABEL_32; /*0x1005df4b0*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x1005df4c9*/
  aBlock = _NSConcreteStackBlock; /*0x1005df4d5*/
  v24 = 0x2000000; /*0x1005df4dc*/
  v25 = _$LT$Closure$u20$as$u20$block2..traits..IntoBlock$LT$$LP$T0$C$$RP$$C$R$GT$$GT$::__get_invoke_stack_block::invoke::h0cb3dba1547feb2a; /*0x1005df4ee*/
  v26 = &anon_4fd0d0f33f5bcd90fdaba20400e954f2_468; /*0x1005df4fc*/
  v28 = v14; /*0x1005df503*/
  v29 = v16; /*0x1005df507*/
  v18 = _Block_copy(&aBlock); /*0x1005df512*/
  if ( !v18 ) /*0x1005df51a*/
LABEL_33:
    block2::rc_block::rc_new_fail::h2853e256ab727530(); /*0x1005df679*/
  v19 = v18; /*0x1005df520*/
  v20 = codexmate_lib::platform::voice_permissions::request_speech_async::CACHED_SEL::hc6b4fbb5fcff7154; /*0x1005df523*/
  if ( !codexmate_lib::platform::voice_permissions::request_speech_async::CACHED_SEL::hc6b4fbb5fcff7154 ) /*0x1005df52d*/
    v20 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1005df66f*/
                          &codexmate_lib::platform::voice_permissions::request_speech_async::CACHED_SEL::hc6b4fbb5fcff7154,
                          "requestAuthorization:");
  objc_msgSend(v11, v20, v19); /*0x1005df539*/
  _Block_release(v19); /*0x1005df541*/
}