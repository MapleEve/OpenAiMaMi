// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10099ae90 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h004265166b40e3df(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // r13
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 i; // r14
  _BYTE v17[360]; // [rsp+10h] [rbp-15A0h] BYREF
  _BYTE v18[360]; // [rsp+178h] [rbp-1438h] BYREF
  _BYTE v19[360]; // [rsp+2E0h] [rbp-12D0h] BYREF
  _QWORD v20[45]; // [rsp+448h] [rbp-1168h] BYREF
  _BYTE v21[360]; // [rsp+5B0h] [rbp-1000h] BYREF
  _BYTE v22[360]; // [rsp+718h] [rbp-E98h] BYREF
  _QWORD v23[99]; // [rsp+880h] [rbp-D30h] BYREF
  _BYTE __dst[520]; // [rsp+B98h] [rbp-A18h] BYREF
  _QWORD __srca[99]; // [rsp+DA0h] [rbp-810h] BYREF
  _BYTE v26[400]; // [rsp+10B8h] [rbp-4F8h] BYREF
  _QWORD v27[50]; // [rsp+1248h] [rbp-368h] BYREF
  _QWORD v28[3]; // [rsp+13D8h] [rbp-1D8h] BYREF
  _QWORD v29[3]; // [rsp+13F0h] [rbp-1C0h] BYREF
  _QWORD v30[3]; // [rsp+1408h] [rbp-1A8h] BYREF
  _QWORD v31[3]; // [rsp+1420h] [rbp-190h] BYREF
  _QWORD v32[3]; // [rsp+1438h] [rbp-178h] BYREF
  _QWORD v33[3]; // [rsp+1450h] [rbp-160h] BYREF
  _QWORD v34[4]; // [rsp+1468h] [rbp-148h] BYREF
  __int64 v35; // [rsp+1488h] [rbp-128h] BYREF
  char *v36; // [rsp+1490h] [rbp-120h]
  __int64 v37; // [rsp+1498h] [rbp-118h]
  _BYTE *v38; // [rsp+14A0h] [rbp-110h]
  __int64 v39; // [rsp+14A8h] [rbp-108h] BYREF
  char v40[8]; // [rsp+14B0h] [rbp-100h]
  __int64 v41; // [rsp+14B8h] [rbp-F8h]
  _BYTE *v42; // [rsp+14C0h] [rbp-F0h]
  __int64 v43; // [rsp+14C8h] [rbp-E8h] BYREF
  char *v44; // [rsp+14D0h] [rbp-E0h] BYREF
  __int64 v45; // [rsp+14D8h] [rbp-D8h]
  _BYTE *v46; // [rsp+14E0h] [rbp-D0h]
  __int64 v47; // [rsp+14E8h] [rbp-C8h] BYREF
  char *v48; // [rsp+14F0h] [rbp-C0h] BYREF
  __int64 v49; // [rsp+14F8h] [rbp-B8h]
  _BYTE *v50; // [rsp+1500h] [rbp-B0h]
  __int64 v51; // [rsp+1508h] [rbp-A8h] BYREF
  __int64 v52; // [rsp+1510h] [rbp-A0h]
  __int64 v53; // [rsp+1518h] [rbp-98h]
  __int64 v54; // [rsp+1520h] [rbp-90h]
  __int64 v55; // [rsp+1528h] [rbp-88h]
  char *v56; // [rsp+1530h] [rbp-80h]
  __int64 v57; // [rsp+1538h] [rbp-78h] BYREF
  __int64 v58; // [rsp+1540h] [rbp-70h]
  char *v59; // [rsp+1548h] [rbp-68h]
  __int64 v60; // [rsp+1550h] [rbp-60h]
  _BYTE *v61; // [rsp+1558h] [rbp-58h]
  __int64 *v62; // [rsp+1560h] [rbp-50h]
  __int64 v63; // [rsp+1568h] [rbp-48h]
  char *v64; // [rsp+1578h] [rbp-38h]
  char v65; // [rsp+1583h] [rbp-2Dh]
  int v66; // [rsp+1584h] [rbp-2Ch]

  v20[40] = 0; /*0x10099aea4*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x10099aec8*/
  memcpy(v27, __src + 520, sizeof(v27)); /*0x10099aee3*/
  v53 = *((_QWORD *)__src + 117); /*0x10099aeef*/
  v2 = *((_QWORD *)__src + 115); /*0x10099aef6*/
  v52 = *((_QWORD *)__src + 116); /*0x10099af04*/
  v51 = v2; /*0x10099af0b*/
  v63 = 0; /*0x10099af12*/
  v57 = (__int64)"set_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x10099af21*/
  v58 = 21; /*0x10099af25*/
  v59 = "appkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x10099af34*/
  v60 = 3; /*0x10099af38*/
  v61 = __dst; /*0x10099af40*/
  v62 = &v51; /*0x10099af4b*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(__srca); /*0x10099af5d*/
  if ( LODWORD(__srca[0]) == 3 ) /*0x10099af69*/
  {
    v61 = (_BYTE *)__srca[4]; /*0x10099af76*/
    v60 = __srca[3]; /*0x10099af81*/
    v59 = (char *)__srca[2]; /*0x10099af93*/
    v58 = __srca[1]; /*0x10099af97*/
    memcpy(v22, __src + 520, sizeof(v22)); /*0x10099afad*/
    v3 = *((_QWORD *)__src + 111); /*0x10099afc0*/
    v33[0] = *((_QWORD *)__src + 110); /*0x10099afc7*/
    v33[1] = v3; /*0x10099afce*/
    v33[2] = *((_QWORD *)__src + 112); /*0x10099afdc*/
    v57 = 1; /*0x10099aff1*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x10099b00a*/
      v22,
      v27[48],
      &v57,
      v33,
      LODWORD(v27[49]),
      HIDWORD(v27[49]));
  }
  else
  {
    memcpy(v26, __srca, 0x98u); /*0x10099b027*/
    v63 = 0; /*0x10099b02c*/
    v57 = (__int64)"set_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x10099b03b*/
    v58 = 21; /*0x10099b03f*/
    v59 = "keyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x10099b04e*/
    v60 = 7; /*0x10099b052*/
    v61 = __dst; /*0x10099b05a*/
    v62 = &v51; /*0x10099b05e*/
    v4 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h3b76fe033ba37931(&v35, &v57); /*0x10099b06d*/
    LOBYTE(v4) = (_BYTE)v35 == 6; /*0x10099b079*/
    v66 = v4; /*0x10099b07c*/
    if ( (_BYTE)v35 == 6 ) /*0x10099b07f*/
    {
      v5 = (__int64)v36; /*0x10099b085*/
      v63 = 0; /*0x10099b08c*/
      v57 = (__int64)"set_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x10099b09b*/
      v58 = 21; /*0x10099b09f*/
      v59 = "keyLabelcallbackattemptsOverflow"; /*0x10099b0ae*/
      v60 = 8; /*0x10099b0b2*/
      v61 = __dst; /*0x10099b0ba*/
      v62 = &v51; /*0x10099b0be*/
      v6 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v47, &v57); /*0x10099b0cd*/
      LOBYTE(v6) = (_BYTE)v47 == 6; /*0x10099b0d9*/
      v66 = v6; /*0x10099b0dc*/
      if ( (_BYTE)v47 == 6 ) /*0x10099b0df*/
      {
        v64 = v48; /*0x10099b0ec*/
        v55 = v49; /*0x10099b0f7*/
        v63 = 0; /*0x10099b0fe*/
        v57 = (__int64)"set_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x10099b10d*/
        v58 = 21; /*0x10099b111*/
        v59 = "keyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x10099b120*/
        v60 = 7; /*0x10099b124*/
        v61 = __dst; /*0x10099b12c*/
        v62 = &v51; /*0x10099b130*/
        v7 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v43, &v57); /*0x10099b13f*/
        LOBYTE(v7) = (_BYTE)v43 == 6; /*0x10099b14b*/
        v66 = v7; /*0x10099b14e*/
        if ( (_BYTE)v43 == 6 ) /*0x10099b151*/
        {
          v56 = v44; /*0x10099b15e*/
          v54 = v45; /*0x10099b169*/
          v63 = 0; /*0x10099b170*/
          v57 = (__int64)"set_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x10099b17f*/
          v58 = 21; /*0x10099b183*/
          v59 = "stylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x10099b192*/
          v60 = 5; /*0x10099b196*/
          v61 = __dst; /*0x10099b19e*/
          v62 = &v51; /*0x10099b1a2*/
          v8 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h22bfbe93846569e9( /*0x10099b1b1*/
                 v34,
                 &v57);
          LOBYTE(v8) = LOBYTE(v34[0]) == 6; /*0x10099b1bd*/
          v66 = v8; /*0x10099b1c0*/
          if ( LOBYTE(v34[0]) == 6 ) /*0x10099b1c3*/
          {
            v65 = BYTE1(v34[0]); /*0x10099b1d0*/
            v63 = 0; /*0x10099b1d3*/
            v57 = (__int64)"set_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x10099b1e2*/
            v58 = 21; /*0x10099b1e6*/
            v59 = "modifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x10099b1f5*/
            v60 = 12; /*0x10099b1f9*/
            v61 = __dst; /*0x10099b201*/
            v62 = &v51; /*0x10099b205*/
            _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h2055dc4899fbef3a(&v39, &v57); /*0x10099b214*/
            if ( (_BYTE)v39 == 6 ) /*0x10099b220*/
            {
              codexmate_lib::commands::voice_runtime::set_voice_trigger_key::hb57805f2dff96a38( /*0x10099b261*/
                v23,
                (__int64)v26,
                v5,
                &v48,
                &v44,
                v65,
                v40[0],
                v41);
              memcpy(v26, __src + 520, sizeof(v26)); /*0x10099b275*/
              if ( LODWORD(v23[0]) == 2 ) /*0x10099b281*/
              {
                _$LT$T$u20$as$u20$core..convert..Into$LT$U$GT$$GT$::into::ha6ffbede19b53d18(&v57, &v23[1]); /*0x10099b292*/
                __srca[4] = v60; /*0x10099b29b*/
                __srca[3] = v59; /*0x10099b2a6*/
                __srca[2] = v58; /*0x10099b2b5*/
                __srca[1] = v57; /*0x10099b2bc*/
                __srca[0] = 2; /*0x10099b2c3*/
              }
              else
              {
                memcpy(__srca, v23, sizeof(__srca)); /*0x10099b6da*/
              }
              tauri::ipc::InvokeResolver$LT$R$GT$::respond::hcf67b8a20cba17ef(v26, __srca); /*0x10099b6ed*/
            }
            else
            {
              v61 = v42; /*0x10099b5ec*/
              v60 = v41; /*0x10099b5f7*/
              v59 = *(char **)v40; /*0x10099b609*/
              v58 = v39; /*0x10099b60d*/
              memcpy(v17, __src + 520, sizeof(v17)); /*0x10099b623*/
              v13 = *((_QWORD *)__src + 111); /*0x10099b636*/
              v28[0] = *((_QWORD *)__src + 110); /*0x10099b63d*/
              v28[1] = v13; /*0x10099b644*/
              v28[2] = *((_QWORD *)__src + 112); /*0x10099b652*/
              v57 = 1; /*0x10099b667*/
              tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x10099b67d*/
                v17,
                v27[48],
                &v57,
                v28,
                LODWORD(v27[49]),
                HIDWORD(v27[49]));
              if ( v56 ) /*0x10099b689*/
                a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54, v56, 1); /*0x10099b697*/
              if ( v64 ) /*0x10099b6a3*/
                a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, v64, 1); /*0x10099b6b1*/
              core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v26); /*0x10099b6c0*/
            }
          }
          else
          {
            v61 = (_BYTE *)v34[3]; /*0x10099b507*/
            v60 = v34[2]; /*0x10099b512*/
            v59 = (char *)v34[1]; /*0x10099b524*/
            v58 = v34[0]; /*0x10099b528*/
            memcpy(v18, __src + 520, sizeof(v18)); /*0x10099b53e*/
            v12 = *((_QWORD *)__src + 111); /*0x10099b551*/
            v29[0] = *((_QWORD *)__src + 110); /*0x10099b558*/
            v29[1] = v12; /*0x10099b55f*/
            v29[2] = *((_QWORD *)__src + 112); /*0x10099b56d*/
            v57 = 1; /*0x10099b582*/
            tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x10099b598*/
              v18,
              v27[48],
              &v57,
              v29,
              LODWORD(v27[49]),
              HIDWORD(v27[49]));
            if ( v56 ) /*0x10099b5a4*/
              a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54, v56, 1); /*0x10099b5b2*/
            if ( v64 ) /*0x10099b5be*/
              a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, v64, 1); /*0x10099b5cc*/
            core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v26); /*0x10099b5db*/
          }
        }
        else
        {
          v61 = v46; /*0x10099b43c*/
          v60 = v45; /*0x10099b447*/
          v59 = v44; /*0x10099b459*/
          v58 = v43; /*0x10099b45d*/
          memcpy(v19, __src + 520, sizeof(v19)); /*0x10099b473*/
          v11 = *((_QWORD *)__src + 111); /*0x10099b486*/
          v30[0] = *((_QWORD *)__src + 110); /*0x10099b48d*/
          v30[1] = v11; /*0x10099b494*/
          v30[2] = *((_QWORD *)__src + 112); /*0x10099b4a2*/
          v57 = 1; /*0x10099b4b7*/
          tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x10099b4cd*/
            v19,
            v27[48],
            &v57,
            v30,
            LODWORD(v27[49]),
            HIDWORD(v27[49]));
          if ( v64 ) /*0x10099b4d9*/
            a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, v64, 1); /*0x10099b4e7*/
          core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v26); /*0x10099b4f6*/
        }
      }
      else
      {
        v61 = v50; /*0x10099b38b*/
        v60 = v49; /*0x10099b396*/
        v59 = v48; /*0x10099b3a8*/
        v58 = v47; /*0x10099b3ac*/
        memcpy(v20, __src + 520, sizeof(v20)); /*0x10099b3c2*/
        v10 = *((_QWORD *)__src + 111); /*0x10099b3d5*/
        v31[0] = *((_QWORD *)__src + 110); /*0x10099b3dc*/
        v31[1] = v10; /*0x10099b3e3*/
        v31[2] = *((_QWORD *)__src + 112); /*0x10099b3f1*/
        v57 = 1; /*0x10099b406*/
        tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x10099b41c*/
          v20,
          v27[48],
          &v57,
          v31,
          LODWORD(v27[49]),
          HIDWORD(v27[49]));
        core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v26); /*0x10099b42b*/
      }
    }
    else
    {
      v61 = v38; /*0x10099b2da*/
      v60 = v37; /*0x10099b2e5*/
      v59 = v36; /*0x10099b2f7*/
      v58 = v35; /*0x10099b2fb*/
      memcpy(v21, __src + 520, sizeof(v21)); /*0x10099b311*/
      v9 = *((_QWORD *)__src + 111); /*0x10099b324*/
      v32[0] = *((_QWORD *)__src + 110); /*0x10099b32b*/
      v32[1] = v9; /*0x10099b332*/
      v32[2] = *((_QWORD *)__src + 112); /*0x10099b340*/
      v57 = 1; /*0x10099b355*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x10099b36b*/
        v21,
        v27[48],
        &v57,
        v32,
        LODWORD(v27[49]),
        HIDWORD(v27[49]));
      core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v26); /*0x10099b37a*/
    }
  }
  if ( !__OFSUB__(0, v51) ) /*0x10099b6fb*/
  {
    v14 = v52; /*0x10099b6fd*/
    for ( i = v53 + 1; i != 1; --i ) /*0x10099b70b*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v14); /*0x10099b71d*/
      v14 += 96; /*0x10099b722*/
    }
    if ( v51 ) /*0x10099b731*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, 96 * v51, 8); /*0x10099b747*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x10099b758*/
}