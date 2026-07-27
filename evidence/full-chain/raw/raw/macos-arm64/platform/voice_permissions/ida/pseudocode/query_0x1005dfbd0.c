// __ZN13codexmate_lib8platform17voice_permissions5query @ 0x1005dfbd0 | 基线 same-set
__int64 codexmate_lib::platform::voice_permissions::query::h4128ce0e089239d5()
{
  id v0; // rdi
  const char *v1; // rsi
  id v2; // rax
  unsigned __int64 v3; // rbx
  id v4; // rdi
  const char *v5; // rsi
  id v6; // rax
  unsigned __int64 v7; // r14
  unsigned int v8; // r12d
  bool v9; // zf
  int v10; // eax
  int v11; // edx
  int v12; // edx
  int v13; // eax
  const char *v15; // rsi
  const char *v16; // rsi

  v0 = codexmate_lib::platform::voice_permissions::query::CACHED_CLASS::hcf34b00a856303c2; /*0x1005dfbdb*/
  if ( codexmate_lib::platform::voice_permissions::query::CACHED_CLASS::hcf34b00a856303c2 ) /*0x1005dfbe5*/
  {
    v1 = codexmate_lib::platform::voice_permissions::query::CACHED_SEL::hf65fb0bb28f534dc; /*0x1005dfbeb*/
    if ( codexmate_lib::platform::voice_permissions::query::CACHED_SEL::hf65fb0bb28f534dc ) /*0x1005dfbf5*/
    {
LABEL_3:
      v2 = objc_msgSend(v0, v1, AVMediaTypeAudio); /*0x1005dfbfb*/
      goto LABEL_4; /*0x1005dfc05*/
    }
  }
  else
  {
    v0 = (id)objc2::__macro_helpers::cache::CachedClass::fetch::h605fe9527cb10dd5( /*0x1005dfca7*/
               &codexmate_lib::platform::voice_permissions::query::CACHED_CLASS::hcf34b00a856303c2,
               "AVCaptureDevice",
               &anon_338d2c24067067f307e22096ebff88a8_862);
    v1 = codexmate_lib::platform::voice_permissions::query::CACHED_SEL::hf65fb0bb28f534dc; /*0x1005dfcaa*/
    if ( codexmate_lib::platform::voice_permissions::query::CACHED_SEL::hf65fb0bb28f534dc ) /*0x1005dfcb4*/
      goto LABEL_3; /*0x1005dfcb4*/
  }
  v15 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1005dfcd6*/
                        &codexmate_lib::platform::voice_permissions::query::CACHED_SEL::hf65fb0bb28f534dc,
                        "authorizationStatusForMediaType:");
  v2 = objc_msgSend(v0, v15, AVMediaTypeAudio); /*0x1005dfcd9*/
LABEL_4:
  v3 = (unsigned __int64)v2; /*0x1005dfc0a*/
  v4 = codexmate_lib::platform::voice_permissions::query::CACHED_CLASS::h4c44a2d11f4abc19; /*0x1005dfc0d*/
  if ( codexmate_lib::platform::voice_permissions::query::CACHED_CLASS::h4c44a2d11f4abc19 ) /*0x1005dfc17*/
  {
    v5 = codexmate_lib::platform::voice_permissions::query::CACHED_SEL::h302593d48e2255d8; /*0x1005dfc1d*/
    if ( codexmate_lib::platform::voice_permissions::query::CACHED_SEL::h302593d48e2255d8 ) /*0x1005dfc27*/
    {
LABEL_6:
      v6 = objc_msgSend(v4, v5); /*0x1005dfc2d*/
      goto LABEL_7; /*0x1005dfc2d*/
    }
  }
  else
  {
    v4 = (id)objc2::__macro_helpers::cache::CachedClass::fetch::h605fe9527cb10dd5( /*0x1005dfcf8*/
               &codexmate_lib::platform::voice_permissions::query::CACHED_CLASS::h4c44a2d11f4abc19,
               "SFSpeechRecognizer",
               &anon_338d2c24067067f307e22096ebff88a8_863);
    v5 = codexmate_lib::platform::voice_permissions::query::CACHED_SEL::h302593d48e2255d8; /*0x1005dfcfb*/
    if ( codexmate_lib::platform::voice_permissions::query::CACHED_SEL::h302593d48e2255d8 ) /*0x1005dfd05*/
      goto LABEL_6; /*0x1005dfd05*/
  }
  v16 = (const char *)objc2::__macro_helpers::cache::CachedSel::fetch::h0aa5c19a4b320fe0( /*0x1005dfd27*/
                        &codexmate_lib::platform::voice_permissions::query::CACHED_SEL::h302593d48e2255d8,
                        "authorizationStatus");
  v6 = objc_msgSend(v4, v16); /*0x1005dfd2a*/
LABEL_7:
  v7 = (unsigned __int64)v6; /*0x1005dfc32*/
  v8 = 0x20103u >> (8 * (_BYTE)v6); /*0x1005dfc48*/
  v9 = AXIsProcessTrusted() == 0; /*0x1005dfc52*/
  v10 = 196608; /*0x1005dfc54*/
  if ( !v9 ) /*0x1005dfc59*/
    v10 = 0; /*0x1005dfc59*/
  v11 = 768; /*0x1005dfc68*/
  if ( v7 < 4 ) /*0x1005dfc6d*/
    v11 = (unsigned __int16)((_WORD)v8 << 8); /*0x1005dfc6d*/
  v12 = v10 | v11; /*0x1005dfc70*/
  v13 = 3; /*0x1005dfc7a*/
  if ( v3 < 4 ) /*0x1005dfc7f*/
    v13 = (unsigned __int8)(3 - v3); /*0x1005dfc7f*/
  return v12 | (unsigned int)v13; /*0x1005dfc84*/
}