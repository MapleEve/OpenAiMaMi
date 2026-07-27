// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009b0330 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hbe99a1f07924f81e(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  unsigned __int8 v5; // r14
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdi
  __int64 i; // r15
  _BYTE v17[360]; // [rsp+8h] [rbp-15B8h] BYREF
  _BYTE v18[360]; // [rsp+170h] [rbp-1450h] BYREF
  _BYTE v19[360]; // [rsp+2D8h] [rbp-12E8h] BYREF
  _QWORD v20[45]; // [rsp+440h] [rbp-1180h] BYREF
  _BYTE v21[360]; // [rsp+5A8h] [rbp-1018h] BYREF
  _BYTE v22[360]; // [rsp+710h] [rbp-EB0h] BYREF
  _QWORD v23[99]; // [rsp+878h] [rbp-D48h] BYREF
  _BYTE __dst[520]; // [rsp+B90h] [rbp-A30h] BYREF
  _QWORD v25[99]; // [rsp+D98h] [rbp-828h] BYREF
  _BYTE v26[400]; // [rsp+10B0h] [rbp-510h] BYREF
  _QWORD v27[50]; // [rsp+1240h] [rbp-380h] BYREF
  _QWORD v28[3]; // [rsp+13D0h] [rbp-1F0h] BYREF
  _QWORD v29[3]; // [rsp+13E8h] [rbp-1D8h] BYREF
  _QWORD v30[3]; // [rsp+1400h] [rbp-1C0h] BYREF
  _QWORD v31[3]; // [rsp+1418h] [rbp-1A8h] BYREF
  _QWORD v32[3]; // [rsp+1430h] [rbp-190h] BYREF
  _QWORD v33[3]; // [rsp+1448h] [rbp-178h] BYREF
  __int64 v34[3]; // [rsp+1460h] [rbp-160h] BYREF
  _QWORD v35[4]; // [rsp+1478h] [rbp-148h] BYREF
  _QWORD v36[4]; // [rsp+1498h] [rbp-128h] BYREF
  _QWORD v37[4]; // [rsp+14B8h] [rbp-108h] BYREF
  __int64 v38; // [rsp+14D8h] [rbp-E8h] BYREF
  __int64 v39; // [rsp+14E0h] [rbp-E0h]
  __int64 v40; // [rsp+14E8h] [rbp-D8h]
  __int64 v41; // [rsp+14F0h] [rbp-D0h]
  __int64 v42; // [rsp+14F8h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+1500h] [rbp-C0h]
  __int64 v44; // [rsp+1508h] [rbp-B8h]
  _BYTE *v45; // [rsp+1510h] [rbp-B0h]
  __int64 v46; // [rsp+1518h] [rbp-A8h] BYREF
  __int64 v47; // [rsp+1520h] [rbp-A0h]
  __int64 v48; // [rsp+1528h] [rbp-98h]
  __int64 v49; // [rsp+1530h] [rbp-90h] BYREF
  __int64 v50; // [rsp+1538h] [rbp-88h]
  _BYTE *v51; // [rsp+1540h] [rbp-80h]
  void *__srca; // [rsp+1548h] [rbp-78h]
  __int64 v53; // [rsp+1550h] [rbp-70h] BYREF
  __int64 v54; // [rsp+1558h] [rbp-68h]
  char *v55; // [rsp+1560h] [rbp-60h]
  __int64 v56; // [rsp+1568h] [rbp-58h]
  _BYTE *v57; // [rsp+1570h] [rbp-50h]
  __int64 *v58; // [rsp+1578h] [rbp-48h]
  __int64 v59; // [rsp+1580h] [rbp-40h]
  unsigned __int8 v60; // [rsp+1592h] [rbp-2Eh]
  unsigned __int8 v61; // [rsp+1593h] [rbp-2Dh]
  int v62; // [rsp+1594h] [rbp-2Ch]

  v20[43] = 0; /*0x1009b0344*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x1009b0368*/
  __srca = __src + 520; /*0x1009b0380*/
  memcpy(v27, __src + 520, sizeof(v27)); /*0x1009b0384*/
  v48 = *((_QWORD *)__src + 117); /*0x1009b0390*/
  v2 = *((_QWORD *)__src + 115); /*0x1009b0397*/
  v47 = *((_QWORD *)__src + 116); /*0x1009b03a5*/
  v46 = v2; /*0x1009b03ac*/
  v59 = 0; /*0x1009b03b3*/
  v53 = (__int64)"update_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009b03c5*/
  v54 = 29; /*0x1009b03c9*/
  v55 = "appkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b03d8*/
  v56 = 3; /*0x1009b03dc*/
  v57 = __dst; /*0x1009b03e4*/
  v58 = &v46; /*0x1009b03f2*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(v25); /*0x1009b0404*/
  if ( LODWORD(v25[0]) == 3 ) /*0x1009b0410*/
  {
    v57 = (_BYTE *)v25[4]; /*0x1009b041d*/
    v56 = v25[3]; /*0x1009b0428*/
    v55 = (char *)v25[2]; /*0x1009b043a*/
    v54 = v25[1]; /*0x1009b043e*/
    memcpy(v22, __srca, sizeof(v22)); /*0x1009b0455*/
    v3 = *((_QWORD *)__src + 111); /*0x1009b0468*/
    v33[0] = *((_QWORD *)__src + 110); /*0x1009b046f*/
    v33[1] = v3; /*0x1009b0476*/
    v33[2] = *((_QWORD *)__src + 112); /*0x1009b0484*/
    v53 = 1; /*0x1009b0499*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b04b2*/
      v22,
      v27[48],
      &v53,
      v33,
      LODWORD(v27[49]),
      HIDWORD(v27[49]));
  }
  else
  {
    memcpy(v26, v25, 0x98u); /*0x1009b04d9*/
    v59 = 0; /*0x1009b04de*/
    v53 = (__int64)"update_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009b04e9*/
    v54 = 29; /*0x1009b04ed*/
    v55 = "enabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b04fc*/
    v56 = 7; /*0x1009b0500*/
    v57 = __dst; /*0x1009b0508*/
    v58 = &v46; /*0x1009b050c*/
    v4 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::hd3dee5410a5f5aeb(v37, &v53); /*0x1009b051b*/
    LOBYTE(v4) = LOBYTE(v37[0]) == 6; /*0x1009b0527*/
    v62 = v4; /*0x1009b052a*/
    if ( LOBYTE(v37[0]) == 6 ) /*0x1009b052d*/
    {
      v5 = BYTE1(v37[0]); /*0x1009b0533*/
      v59 = 0; /*0x1009b053b*/
      v53 = (__int64)"update_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009b0543*/
      v54 = 29; /*0x1009b0547*/
      v55 = (char *)&unk_101602210; /*0x1009b0556*/
      v56 = 8; /*0x1009b055a*/
      v57 = __dst; /*0x1009b0562*/
      v58 = &v46; /*0x1009b0566*/
      v6 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h7d4626b3ed85f091(&v42, &v53); /*0x1009b0575*/
      LOBYTE(v6) = (_BYTE)v42 == 6; /*0x1009b0581*/
      v62 = v6; /*0x1009b0584*/
      if ( (_BYTE)v42 == 6 ) /*0x1009b0587*/
      {
        v51 = v45; /*0x1009b0594*/
        v50 = v44; /*0x1009b05a6*/
        v49 = v43; /*0x1009b05ad*/
        v59 = 0; /*0x1009b05b4*/
        v53 = (__int64)"update_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009b05bc*/
        v54 = 29; /*0x1009b05c0*/
        v55 = "speechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b05cf*/
        v56 = 11; /*0x1009b05d3*/
        v57 = __dst; /*0x1009b05db*/
        v58 = &v46; /*0x1009b05df*/
        v7 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h21323b46fe54e272(v36, &v53); /*0x1009b05ee*/
        LOBYTE(v7) = LOBYTE(v36[0]) == 6; /*0x1009b05fa*/
        v62 = v7; /*0x1009b05fd*/
        if ( LOBYTE(v36[0]) == 6 ) /*0x1009b0600*/
        {
          v60 = BYTE1(v36[0]); /*0x1009b060d*/
          v59 = 0; /*0x1009b0610*/
          v53 = (__int64)"update_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009b0618*/
          v54 = 29; /*0x1009b061c*/
          v55 = "processingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b062b*/
          v56 = 14; /*0x1009b062f*/
          v57 = __dst; /*0x1009b0637*/
          v58 = &v46; /*0x1009b063b*/
          v8 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::hf74cca5299bda9c5( /*0x1009b064a*/
                 v35,
                 &v53);
          LOBYTE(v8) = LOBYTE(v35[0]) == 6; /*0x1009b0656*/
          v62 = v8; /*0x1009b0659*/
          if ( LOBYTE(v35[0]) == 6 ) /*0x1009b065c*/
          {
            v61 = BYTE1(v35[0]); /*0x1009b0669*/
            v59 = 0; /*0x1009b066c*/
            v53 = (__int64)"update_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009b0674*/
            v54 = 29; /*0x1009b0678*/
            v55 = "processingModeIdperModeShortcutslastAsrErrorCoderestore-rollbacklaunch_requested/helpers/codex (crashpad_handlerfield identifierTauri-Channel-Id"; /*0x1009b0687*/
            v56 = 16; /*0x1009b068b*/
            v57 = __dst; /*0x1009b0693*/
            v58 = &v46; /*0x1009b0697*/
            _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h7d4626b3ed85f091(&v38, &v53); /*0x1009b06a6*/
            if ( (_BYTE)v38 == 6 ) /*0x1009b06b2*/
            {
              v34[2] = v41; /*0x1009b06bf*/
              v34[1] = v40; /*0x1009b06d4*/
              v34[0] = v39; /*0x1009b06db*/
              codexmate_lib::commands::voice_runtime::update_voice_runtime_settings::hdabfe1c4c8d038f3( /*0x1009b0710*/
                v23,
                (__int64)v26,
                v5,
                &v49,
                v60,
                v61,
                (__int64)v34);
              memcpy(v26, __srca, sizeof(v26)); /*0x1009b0725*/
              if ( LODWORD(v23[0]) == 2 ) /*0x1009b0731*/
              {
                _$LT$T$u20$as$u20$core..convert..Into$LT$U$GT$$GT$::into::ha6ffbede19b53d18(&v53, &v23[1]); /*0x1009b0742*/
                v25[4] = v56; /*0x1009b0755*/
                v25[3] = v55; /*0x1009b0760*/
                v25[2] = v54; /*0x1009b076f*/
                v25[1] = v53; /*0x1009b0776*/
                v25[0] = 2; /*0x1009b077d*/
              }
              else
              {
                memcpy(v25, v23, sizeof(v25)); /*0x1009b0baf*/
              }
              tauri::ipc::InvokeResolver$LT$R$GT$::respond::hcf67b8a20cba17ef(v26, v25); /*0x1009b0bcc*/
            }
            else
            {
              v57 = (_BYTE *)v41; /*0x1009b0ac8*/
              v56 = v40; /*0x1009b0ad3*/
              v55 = (char *)v39; /*0x1009b0ae5*/
              v54 = v38; /*0x1009b0ae9*/
              memcpy(v17, __srca, sizeof(v17)); /*0x1009b0b00*/
              v13 = *((_QWORD *)__src + 111); /*0x1009b0b13*/
              v28[0] = *((_QWORD *)__src + 110); /*0x1009b0b1a*/
              v28[1] = v13; /*0x1009b0b21*/
              v28[2] = *((_QWORD *)__src + 112); /*0x1009b0b2f*/
              v53 = 1; /*0x1009b0b44*/
              tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b0b5a*/
                v17,
                v27[48],
                &v53,
                v28,
                LODWORD(v27[49]),
                HIDWORD(v27[49]));
              if ( v49 != 0x8000000000000000LL && v49 ) /*0x1009b0b78*/
                a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, v49, 1); /*0x1009b0b86*/
              core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v26); /*0x1009b0b95*/
            }
          }
          else
          {
            v57 = (_BYTE *)v35[3]; /*0x1009b09ea*/
            v56 = v35[2]; /*0x1009b09f5*/
            v55 = (char *)v35[1]; /*0x1009b0a07*/
            v54 = v35[0]; /*0x1009b0a0b*/
            memcpy(v18, __srca, sizeof(v18)); /*0x1009b0a22*/
            v12 = *((_QWORD *)__src + 111); /*0x1009b0a35*/
            v29[0] = *((_QWORD *)__src + 110); /*0x1009b0a3c*/
            v29[1] = v12; /*0x1009b0a43*/
            v29[2] = *((_QWORD *)__src + 112); /*0x1009b0a51*/
            v53 = 1; /*0x1009b0a66*/
            tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b0a7c*/
              v18,
              v27[48],
              &v53,
              v29,
              LODWORD(v27[49]),
              HIDWORD(v27[49]));
            if ( v49 != 0x8000000000000000LL && v49 ) /*0x1009b0a9a*/
              a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, v49, 1); /*0x1009b0aa8*/
            core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v26); /*0x1009b0ab7*/
          }
        }
        else
        {
          v57 = (_BYTE *)v36[3]; /*0x1009b090c*/
          v56 = v36[2]; /*0x1009b0917*/
          v55 = (char *)v36[1]; /*0x1009b0929*/
          v54 = v36[0]; /*0x1009b092d*/
          memcpy(v19, __srca, sizeof(v19)); /*0x1009b0944*/
          v11 = *((_QWORD *)__src + 111); /*0x1009b0957*/
          v30[0] = *((_QWORD *)__src + 110); /*0x1009b095e*/
          v30[1] = v11; /*0x1009b0965*/
          v30[2] = *((_QWORD *)__src + 112); /*0x1009b0973*/
          v53 = 1; /*0x1009b0988*/
          tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b099e*/
            v19,
            v27[48],
            &v53,
            v30,
            LODWORD(v27[49]),
            HIDWORD(v27[49]));
          if ( v49 != 0x8000000000000000LL && v49 ) /*0x1009b09bc*/
            a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, v49, 1); /*0x1009b09ca*/
          core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v26); /*0x1009b09d9*/
        }
      }
      else
      {
        v57 = v45; /*0x1009b0850*/
        v56 = v44; /*0x1009b085b*/
        v55 = (char *)v43; /*0x1009b086d*/
        v54 = v42; /*0x1009b0871*/
        memcpy(v20, __srca, sizeof(v20)); /*0x1009b0888*/
        v10 = *((_QWORD *)__src + 111); /*0x1009b089b*/
        v31[0] = *((_QWORD *)__src + 110); /*0x1009b08a2*/
        v31[1] = v10; /*0x1009b08a9*/
        v31[2] = *((_QWORD *)__src + 112); /*0x1009b08b7*/
        v53 = 1; /*0x1009b08cc*/
        tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b08e2*/
          v20,
          v27[48],
          &v53,
          v31,
          LODWORD(v27[49]),
          HIDWORD(v27[49]));
        core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v26); /*0x1009b08f1*/
      }
    }
    else
    {
      v57 = (_BYTE *)v37[3]; /*0x1009b0794*/
      v56 = v37[2]; /*0x1009b079f*/
      v55 = (char *)v37[1]; /*0x1009b07b1*/
      v54 = v37[0]; /*0x1009b07b5*/
      memcpy(v21, __srca, sizeof(v21)); /*0x1009b07cc*/
      v9 = *((_QWORD *)__src + 111); /*0x1009b07df*/
      v32[0] = *((_QWORD *)__src + 110); /*0x1009b07e6*/
      v32[1] = v9; /*0x1009b07ed*/
      v32[2] = *((_QWORD *)__src + 112); /*0x1009b07fb*/
      v53 = 1; /*0x1009b0810*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b0826*/
        v21,
        v27[48],
        &v53,
        v32,
        LODWORD(v27[49]),
        HIDWORD(v27[49]));
      core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v26); /*0x1009b0835*/
    }
  }
  if ( v46 != 0x8000000000000000LL ) /*0x1009b0bd8*/
  {
    v14 = v47; /*0x1009b0bda*/
    for ( i = v48 + 1; i != 1; --i ) /*0x1009b0be8*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v14); /*0x1009b0bfd*/
      v14 += 96; /*0x1009b0c02*/
    }
    if ( v46 ) /*0x1009b0c11*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, 96 * v46, 8); /*0x1009b0c27*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009b0c38*/
}