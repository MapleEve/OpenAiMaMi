// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009b2120 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hc253ad0169848f41(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  char *v7; // r15
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // r12
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // rdi
  __int64 i; // r15
  _BYTE v24[360]; // [rsp+40h] [rbp-1C50h] BYREF
  _BYTE v25[360]; // [rsp+1A8h] [rbp-1AE8h] BYREF
  _BYTE v26[360]; // [rsp+310h] [rbp-1980h] BYREF
  _BYTE v27[360]; // [rsp+478h] [rbp-1818h] BYREF
  _BYTE v28[360]; // [rsp+5E0h] [rbp-16B0h] BYREF
  _BYTE v29[360]; // [rsp+748h] [rbp-1548h] BYREF
  _BYTE v30[360]; // [rsp+8B0h] [rbp-13E0h] BYREF
  _BYTE v31[360]; // [rsp+A18h] [rbp-1278h] BYREF
  _QWORD v32[45]; // [rsp+B80h] [rbp-1110h] BYREF
  _BYTE v33[360]; // [rsp+CE8h] [rbp-FA8h] BYREF
  _QWORD v34[99]; // [rsp+E50h] [rbp-E40h] BYREF
  _BYTE __dst[520]; // [rsp+1168h] [rbp-B28h] BYREF
  _QWORD __srca[99]; // [rsp+1370h] [rbp-920h] BYREF
  _BYTE v37[400]; // [rsp+1688h] [rbp-608h] BYREF
  _QWORD v38[50]; // [rsp+1818h] [rbp-478h] BYREF
  _QWORD v39[3]; // [rsp+19A8h] [rbp-2E8h] BYREF
  _QWORD v40[3]; // [rsp+19C0h] [rbp-2D0h] BYREF
  _QWORD v41[3]; // [rsp+19D8h] [rbp-2B8h] BYREF
  _QWORD v42[3]; // [rsp+19F0h] [rbp-2A0h] BYREF
  _QWORD v43[3]; // [rsp+1A08h] [rbp-288h] BYREF
  _QWORD v44[3]; // [rsp+1A20h] [rbp-270h] BYREF
  _QWORD v45[3]; // [rsp+1A38h] [rbp-258h] BYREF
  _QWORD v46[3]; // [rsp+1A50h] [rbp-240h] BYREF
  _QWORD v47[3]; // [rsp+1A68h] [rbp-228h] BYREF
  _QWORD v48[3]; // [rsp+1A80h] [rbp-210h] BYREF
  __int64 v49; // [rsp+1A98h] [rbp-1F8h] BYREF
  __int64 v50; // [rsp+1AA0h] [rbp-1F0h]
  __int64 v51; // [rsp+1AA8h] [rbp-1E8h]
  _BYTE *v52; // [rsp+1AB0h] [rbp-1E0h]
  __int64 v53; // [rsp+1AB8h] [rbp-1D8h] BYREF
  __int64 v54; // [rsp+1AC0h] [rbp-1D0h]
  __int64 v55; // [rsp+1AC8h] [rbp-1C8h]
  _BYTE *v56; // [rsp+1AD0h] [rbp-1C0h]
  _QWORD v57[4]; // [rsp+1AD8h] [rbp-1B8h] BYREF
  __int64 v58; // [rsp+1AF8h] [rbp-198h] BYREF
  char v59[8]; // [rsp+1B00h] [rbp-190h]
  __int64 v60; // [rsp+1B08h] [rbp-188h]
  _BYTE *v61; // [rsp+1B10h] [rbp-180h]
  __int64 v62; // [rsp+1B18h] [rbp-178h] BYREF
  char *v63; // [rsp+1B20h] [rbp-170h]
  __int64 v64; // [rsp+1B28h] [rbp-168h]
  _BYTE *v65; // [rsp+1B30h] [rbp-160h]
  __int64 v66; // [rsp+1B38h] [rbp-158h]
  char v67[8]; // [rsp+1B40h] [rbp-150h]
  __int64 v68; // [rsp+1B48h] [rbp-148h]
  __int64 v69; // [rsp+1B50h] [rbp-140h] BYREF
  __int64 v70; // [rsp+1B58h] [rbp-138h] BYREF
  __int64 v71; // [rsp+1B60h] [rbp-130h]
  _BYTE *v72; // [rsp+1B68h] [rbp-128h]
  __int64 v73; // [rsp+1B70h] [rbp-120h] BYREF
  __int64 v74; // [rsp+1B78h] [rbp-118h] BYREF
  __int64 v75; // [rsp+1B80h] [rbp-110h]
  _BYTE *v76; // [rsp+1B88h] [rbp-108h]
  __int64 v77; // [rsp+1B90h] [rbp-100h] BYREF
  char *v78; // [rsp+1B98h] [rbp-F8h] BYREF
  __int64 v79; // [rsp+1BA0h] [rbp-F0h]
  _BYTE *v80; // [rsp+1BA8h] [rbp-E8h]
  __int64 v81; // [rsp+1BB0h] [rbp-E0h] BYREF
  char *v82; // [rsp+1BB8h] [rbp-D8h] BYREF
  __int64 v83; // [rsp+1BC0h] [rbp-D0h]
  _BYTE *v84; // [rsp+1BC8h] [rbp-C8h]
  __int64 v85; // [rsp+1BD0h] [rbp-C0h] BYREF
  __int64 v86; // [rsp+1BD8h] [rbp-B8h]
  __int64 v87; // [rsp+1BE0h] [rbp-B0h]
  __int64 v88; // [rsp+1BE8h] [rbp-A8h]
  __int64 v89; // [rsp+1BF0h] [rbp-A0h]
  __int64 v90; // [rsp+1BF8h] [rbp-98h]
  __int64 v91; // [rsp+1C00h] [rbp-90h]
  __int64 v92; // [rsp+1C08h] [rbp-88h]
  unsigned __int8 v93; // [rsp+1C17h] [rbp-79h]
  char *v94; // [rsp+1C18h] [rbp-78h]
  __int64 v95; // [rsp+1C20h] [rbp-70h] BYREF
  __int64 v96; // [rsp+1C28h] [rbp-68h]
  char *v97; // [rsp+1C30h] [rbp-60h]
  __int64 v98; // [rsp+1C38h] [rbp-58h]
  _BYTE *v99; // [rsp+1C40h] [rbp-50h]
  __int64 *v100; // [rsp+1C48h] [rbp-48h]
  __int64 v101; // [rsp+1C50h] [rbp-40h]
  int v102; // [rsp+1C64h] [rbp-2Ch]

  v32[29] = 0; /*0x1009b2134*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x1009b2158*/
  memcpy(v38, __src + 520, sizeof(v38)); /*0x1009b2173*/
  v87 = *((_QWORD *)__src + 117); /*0x1009b217f*/
  v2 = *((_QWORD *)__src + 115); /*0x1009b2186*/
  v86 = *((_QWORD *)__src + 116); /*0x1009b2194*/
  v85 = v2; /*0x1009b219b*/
  v101 = 0; /*0x1009b21a2*/
  v95 = (__int64)"set_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009b21b1*/
  v96 = 26; /*0x1009b21b5*/
  v97 = "appkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b21c4*/
  v98 = 3; /*0x1009b21c8*/
  v99 = __dst; /*0x1009b21d0*/
  v100 = &v85; /*0x1009b21db*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(__srca); /*0x1009b21ed*/
  if ( LODWORD(__srca[0]) == 3 ) /*0x1009b21f9*/
  {
    v99 = (_BYTE *)__srca[4]; /*0x1009b2206*/
    v98 = __srca[3]; /*0x1009b2211*/
    v97 = (char *)__srca[2]; /*0x1009b2223*/
    v96 = __srca[1]; /*0x1009b2227*/
    memcpy(v33, __src + 520, sizeof(v33)); /*0x1009b223d*/
    v3 = *((_QWORD *)__src + 111); /*0x1009b2250*/
    v48[0] = *((_QWORD *)__src + 110); /*0x1009b2257*/
    v48[1] = v3; /*0x1009b225e*/
    v48[2] = *((_QWORD *)__src + 112); /*0x1009b226c*/
    v95 = 1; /*0x1009b2281*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b229a*/
      v33,
      v38[48],
      &v95,
      v48,
      LODWORD(v38[49]),
      HIDWORD(v38[49]));
  }
  else
  {
    memcpy(v37, __srca, 0x98u); /*0x1009b22b7*/
    v101 = 0; /*0x1009b22bc*/
    v95 = (__int64)"set_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009b22cb*/
    v96 = 26; /*0x1009b22cf*/
    v97 = "activeStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b22de*/
    v98 = 11; /*0x1009b22e2*/
    v99 = __dst; /*0x1009b22ea*/
    v100 = &v85; /*0x1009b22ee*/
    v4 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h22bfbe93846569e9(v57, &v95); /*0x1009b22fd*/
    LOBYTE(v4) = LOBYTE(v57[0]) == 6; /*0x1009b2309*/
    v102 = v4; /*0x1009b230c*/
    if ( LOBYTE(v57[0]) == 6 ) /*0x1009b230f*/
    {
      v93 = BYTE1(v57[0]); /*0x1009b231c*/
      v101 = 0; /*0x1009b231f*/
      v95 = (__int64)"set_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009b2327*/
      v96 = 26; /*0x1009b232b*/
      v97 = "holdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b233a*/
      v98 = 11; /*0x1009b233e*/
      v99 = __dst; /*0x1009b2346*/
      v100 = &v85; /*0x1009b234a*/
      v5 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h3b76fe033ba37931(&v53, &v95); /*0x1009b2359*/
      LOBYTE(v5) = (_BYTE)v53 == 6; /*0x1009b2365*/
      v102 = v5; /*0x1009b2368*/
      if ( (_BYTE)v53 == 6 ) /*0x1009b236b*/
      {
        v66 = v54; /*0x1009b2378*/
        v101 = 0; /*0x1009b237f*/
        v95 = (__int64)"set_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009b2387*/
        v96 = 26; /*0x1009b238b*/
        v97 = "holdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b239a*/
        v98 = 12; /*0x1009b239e*/
        v99 = __dst; /*0x1009b23a6*/
        v100 = &v85; /*0x1009b23aa*/
        v6 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v81, &v95); /*0x1009b23b9*/
        LOBYTE(v6) = (_BYTE)v81 == 6; /*0x1009b23c5*/
        v102 = v6; /*0x1009b23c8*/
        if ( (_BYTE)v81 == 6 ) /*0x1009b23cb*/
        {
          v7 = v82; /*0x1009b23d4*/
          v92 = v83; /*0x1009b23e2*/
          v101 = 0; /*0x1009b23e9*/
          v95 = (__int64)"set_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009b23f1*/
          v96 = 26; /*0x1009b23f5*/
          v97 = "holdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b2404*/
          v98 = 11; /*0x1009b2408*/
          v99 = __dst; /*0x1009b2410*/
          v100 = &v85; /*0x1009b2414*/
          v8 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d( /*0x1009b2423*/
                 &v77,
                 &v95);
          LOBYTE(v8) = (_BYTE)v77 == 6; /*0x1009b242f*/
          v102 = v8; /*0x1009b2432*/
          if ( (_BYTE)v77 == 6 ) /*0x1009b2435*/
          {
            v94 = v78; /*0x1009b2442*/
            v91 = v79; /*0x1009b244d*/
            v101 = 0; /*0x1009b2454*/
            v95 = (__int64)"set_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009b2463*/
            v96 = 26; /*0x1009b2467*/
            v97 = "holdModifierMaskPngEncodingErrorHotKeyParseErrorEmptyHotKeyTokenFailedToRegister"; /*0x1009b2476*/
            v98 = 16; /*0x1009b247a*/
            v99 = __dst; /*0x1009b2482*/
            v100 = &v85; /*0x1009b2486*/
            v9 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h2055dc4899fbef3a( /*0x1009b2495*/
                   &v62,
                   &v95);
            LOBYTE(v9) = (_BYTE)v62 == 6; /*0x1009b24a1*/
            v102 = v9; /*0x1009b24a4*/
            if ( (_BYTE)v62 == 6 ) /*0x1009b24a7*/
            {
              *(_QWORD *)v67 = v63; /*0x1009b24b4*/
              v68 = v64; /*0x1009b24c2*/
              v101 = 0; /*0x1009b24c9*/
              v95 = (__int64)"set_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009b24d8*/
              v96 = 26; /*0x1009b24dc*/
              v97 = "toggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b24eb*/
              v98 = 13; /*0x1009b24ef*/
              v99 = __dst; /*0x1009b24f7*/
              v100 = &v85; /*0x1009b24fb*/
              v10 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h3b76fe033ba37931( /*0x1009b250a*/
                      &v49,
                      &v95);
              LOBYTE(v10) = (_BYTE)v49 == 6; /*0x1009b2516*/
              v102 = v10; /*0x1009b2519*/
              if ( (_BYTE)v49 == 6 ) /*0x1009b251c*/
              {
                v11 = v50; /*0x1009b2522*/
                v101 = 0; /*0x1009b2529*/
                v95 = (__int64)"set_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009b2538*/
                v96 = 26; /*0x1009b253c*/
                v97 = "toggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b254b*/
                v98 = 14; /*0x1009b254f*/
                v99 = __dst; /*0x1009b2557*/
                v100 = &v85; /*0x1009b255b*/
                v12 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d( /*0x1009b256a*/
                        &v73,
                        &v95);
                LOBYTE(v12) = (_BYTE)v73 == 6; /*0x1009b2576*/
                v102 = v12; /*0x1009b2579*/
                if ( (_BYTE)v73 == 6 ) /*0x1009b257c*/
                {
                  v13 = v74; /*0x1009b2582*/
                  v89 = v75; /*0x1009b2590*/
                  v101 = 0; /*0x1009b2597*/
                  v95 = (__int64)"set_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009b25a6*/
                  v96 = 26; /*0x1009b25aa*/
                  v97 = "toggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b25b9*/
                  v98 = 13; /*0x1009b25bd*/
                  v99 = __dst; /*0x1009b25c5*/
                  v100 = &v85; /*0x1009b25c9*/
                  v14 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d( /*0x1009b25d8*/
                          &v69,
                          &v95);
                  LOBYTE(v14) = (_BYTE)v69 == 6; /*0x1009b25e4*/
                  v102 = v14; /*0x1009b25e7*/
                  if ( (_BYTE)v69 == 6 ) /*0x1009b25ea*/
                  {
                    v90 = v70; /*0x1009b25f7*/
                    v88 = v71; /*0x1009b2605*/
                    v101 = 0; /*0x1009b260c*/
                    v95 = (__int64)"set_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009b261b*/
                    v96 = 26; /*0x1009b261f*/
                    v97 = "toggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b262e*/
                    v98 = 18; /*0x1009b2632*/
                    v99 = __dst; /*0x1009b263a*/
                    v100 = &v85; /*0x1009b263e*/
                    _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h2055dc4899fbef3a( /*0x1009b264d*/
                      &v58,
                      &v95);
                    if ( (_BYTE)v58 == 6 ) /*0x1009b2659*/
                    {
                      codexmate_lib::commands::voice_runtime::set_voice_trigger_bindings::h3a28d48cb268ea57( /*0x1009b26d2*/
                        v34,
                        (__int64)v37,
                        v93,
                        v66,
                        &v82,
                        &v78,
                        v67[0],
                        v68,
                        v11,
                        &v74,
                        &v70,
                        v59[0],
                        v60);
                      memcpy(v37, v38, sizeof(v37)); /*0x1009b26ea*/
                      if ( LODWORD(v34[0]) == 2 ) /*0x1009b26f6*/
                      {
                        _$LT$T$u20$as$u20$core..convert..Into$LT$U$GT$$GT$::into::ha6ffbede19b53d18(&v95, &v34[1]); /*0x1009b2707*/
                        __srca[4] = v98; /*0x1009b2710*/
                        __srca[3] = v97; /*0x1009b271b*/
                        __srca[2] = v96; /*0x1009b272a*/
                        __srca[1] = v95; /*0x1009b2731*/
                        __srca[0] = 2; /*0x1009b2738*/
                      }
                      else
                      {
                        memcpy(__srca, v34, sizeof(__srca)); /*0x1009b2f00*/
                      }
                      tauri::ipc::InvokeResolver$LT$R$GT$::respond::hcf67b8a20cba17ef(v37, __srca); /*0x1009b2f13*/
                    }
                    else
                    {
                      v99 = v61; /*0x1009b2dd9*/
                      v98 = v60; /*0x1009b2de4*/
                      v97 = *(char **)v59; /*0x1009b2df6*/
                      v96 = v58; /*0x1009b2dfa*/
                      memcpy(v24, v38, sizeof(v24)); /*0x1009b2e14*/
                      v39[0] = v38[45]; /*0x1009b2e2e*/
                      v39[1] = v38[46]; /*0x1009b2e35*/
                      v39[2] = v38[47]; /*0x1009b2e43*/
                      v95 = 1; /*0x1009b2e58*/
                      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b2e6e*/
                        v24,
                        v38[48],
                        &v95,
                        v39,
                        LODWORD(v38[49]),
                        HIDWORD(v38[49]));
                      if ( v90 ) /*0x1009b2e7d*/
                        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v88, v90, 1); /*0x1009b2e8b*/
                      if ( v13 ) /*0x1009b2e93*/
                        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v89, v13, 1); /*0x1009b2ea4*/
                      if ( v94 ) /*0x1009b2eb0*/
                        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v91, v94, 1); /*0x1009b2ebe*/
                      if ( v7 ) /*0x1009b2ec6*/
                        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, v7, 1); /*0x1009b2ed7*/
                      core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v37); /*0x1009b2ee6*/
                    }
                  }
                  else
                  {
                    v99 = v72; /*0x1009b2cd8*/
                    v98 = v71; /*0x1009b2ce3*/
                    v97 = (char *)v70; /*0x1009b2cf5*/
                    v96 = v69; /*0x1009b2cf9*/
                    memcpy(v25, v38, sizeof(v25)); /*0x1009b2d13*/
                    v40[0] = v38[45]; /*0x1009b2d2d*/
                    v40[1] = v38[46]; /*0x1009b2d34*/
                    v40[2] = v38[47]; /*0x1009b2d42*/
                    v95 = 1; /*0x1009b2d57*/
                    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b2d6d*/
                      v25,
                      v38[48],
                      &v95,
                      v40,
                      LODWORD(v38[49]),
                      HIDWORD(v38[49]));
                    if ( v13 ) /*0x1009b2d75*/
                      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v89, v13, 1); /*0x1009b2d86*/
                    if ( v94 ) /*0x1009b2d92*/
                      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v91, v94, 1); /*0x1009b2da0*/
                    if ( v7 ) /*0x1009b2da8*/
                      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, v7, 1); /*0x1009b2db9*/
                    core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v37); /*0x1009b2dc8*/
                  }
                }
                else
                {
                  v99 = v76; /*0x1009b2bf4*/
                  v98 = v75; /*0x1009b2bff*/
                  v97 = (char *)v74; /*0x1009b2c11*/
                  v96 = v73; /*0x1009b2c15*/
                  memcpy(v26, __src + 520, sizeof(v26)); /*0x1009b2c2b*/
                  v41[0] = v38[45]; /*0x1009b2c45*/
                  v41[1] = v38[46]; /*0x1009b2c4c*/
                  v41[2] = v38[47]; /*0x1009b2c5a*/
                  v95 = 1; /*0x1009b2c6f*/
                  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b2c85*/
                    v26,
                    v38[48],
                    &v95,
                    v41,
                    LODWORD(v38[49]),
                    HIDWORD(v38[49]));
                  if ( v94 ) /*0x1009b2c91*/
                    a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v91, v94, 1); /*0x1009b2c9f*/
                  if ( v7 ) /*0x1009b2ca7*/
                    a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, v7, 1); /*0x1009b2cb8*/
                  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v37); /*0x1009b2cc7*/
                }
              }
              else
              {
                v99 = v52; /*0x1009b2b10*/
                v98 = v51; /*0x1009b2b1b*/
                v97 = (char *)v50; /*0x1009b2b2d*/
                v96 = v49; /*0x1009b2b31*/
                memcpy(v27, __src + 520, sizeof(v27)); /*0x1009b2b47*/
                v20 = *((_QWORD *)__src + 111); /*0x1009b2b5a*/
                v42[0] = *((_QWORD *)__src + 110); /*0x1009b2b61*/
                v42[1] = v20; /*0x1009b2b68*/
                v42[2] = *((_QWORD *)__src + 112); /*0x1009b2b76*/
                v95 = 1; /*0x1009b2b8b*/
                tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b2ba1*/
                  v27,
                  v38[48],
                  &v95,
                  v42,
                  LODWORD(v38[49]),
                  HIDWORD(v38[49]));
                if ( v94 ) /*0x1009b2bad*/
                  a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v91, v94, 1); /*0x1009b2bbb*/
                if ( v7 ) /*0x1009b2bc3*/
                  a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, v7, 1); /*0x1009b2bd4*/
                core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v37); /*0x1009b2be3*/
              }
            }
            else
            {
              v99 = v65; /*0x1009b2a2c*/
              v98 = v64; /*0x1009b2a37*/
              v97 = v63; /*0x1009b2a49*/
              v96 = v62; /*0x1009b2a4d*/
              memcpy(v28, __src + 520, sizeof(v28)); /*0x1009b2a63*/
              v19 = *((_QWORD *)__src + 111); /*0x1009b2a76*/
              v43[0] = *((_QWORD *)__src + 110); /*0x1009b2a7d*/
              v43[1] = v19; /*0x1009b2a84*/
              v43[2] = *((_QWORD *)__src + 112); /*0x1009b2a92*/
              v95 = 1; /*0x1009b2aa7*/
              tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b2abd*/
                v28,
                v38[48],
                &v95,
                v43,
                LODWORD(v38[49]),
                HIDWORD(v38[49]));
              if ( v94 ) /*0x1009b2ac9*/
                a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v91, v94, 1); /*0x1009b2ad7*/
              if ( v7 ) /*0x1009b2adf*/
                a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, v7, 1); /*0x1009b2af0*/
              core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v37); /*0x1009b2aff*/
            }
          }
          else
          {
            v99 = v80; /*0x1009b2962*/
            v98 = v79; /*0x1009b296d*/
            v97 = v78; /*0x1009b297f*/
            v96 = v77; /*0x1009b2983*/
            memcpy(v29, __src + 520, sizeof(v29)); /*0x1009b2999*/
            v18 = *((_QWORD *)__src + 111); /*0x1009b29ac*/
            v44[0] = *((_QWORD *)__src + 110); /*0x1009b29b3*/
            v44[1] = v18; /*0x1009b29ba*/
            v44[2] = *((_QWORD *)__src + 112); /*0x1009b29c8*/
            v95 = 1; /*0x1009b29dd*/
            tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b29f3*/
              v29,
              v38[48],
              &v95,
              v44,
              LODWORD(v38[49]),
              HIDWORD(v38[49]));
            if ( v7 ) /*0x1009b29fb*/
              a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, v7, 1); /*0x1009b2a0c*/
            core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v37); /*0x1009b2a1b*/
          }
        }
        else
        {
          v99 = v84; /*0x1009b28b1*/
          v98 = v83; /*0x1009b28bc*/
          v97 = v82; /*0x1009b28ce*/
          v96 = v81; /*0x1009b28d2*/
          memcpy(v30, __src + 520, sizeof(v30)); /*0x1009b28e8*/
          v17 = *((_QWORD *)__src + 111); /*0x1009b28fb*/
          v45[0] = *((_QWORD *)__src + 110); /*0x1009b2902*/
          v45[1] = v17; /*0x1009b2909*/
          v45[2] = *((_QWORD *)__src + 112); /*0x1009b2917*/
          v95 = 1; /*0x1009b292c*/
          tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b2942*/
            v30,
            v38[48],
            &v95,
            v45,
            LODWORD(v38[49]),
            HIDWORD(v38[49]));
          core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v37); /*0x1009b2951*/
        }
      }
      else
      {
        v99 = v56; /*0x1009b2800*/
        v98 = v55; /*0x1009b280b*/
        v97 = (char *)v54; /*0x1009b281d*/
        v96 = v53; /*0x1009b2821*/
        memcpy(v31, __src + 520, sizeof(v31)); /*0x1009b2837*/
        v16 = *((_QWORD *)__src + 111); /*0x1009b284a*/
        v46[0] = *((_QWORD *)__src + 110); /*0x1009b2851*/
        v46[1] = v16; /*0x1009b2858*/
        v46[2] = *((_QWORD *)__src + 112); /*0x1009b2866*/
        v95 = 1; /*0x1009b287b*/
        tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b2891*/
          v31,
          v38[48],
          &v95,
          v46,
          LODWORD(v38[49]),
          HIDWORD(v38[49]));
        core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v37); /*0x1009b28a0*/
      }
    }
    else
    {
      v99 = (_BYTE *)v57[3]; /*0x1009b274f*/
      v98 = v57[2]; /*0x1009b275a*/
      v97 = (char *)v57[1]; /*0x1009b276c*/
      v96 = v57[0]; /*0x1009b2770*/
      memcpy(v32, __src + 520, sizeof(v32)); /*0x1009b2786*/
      v15 = *((_QWORD *)__src + 111); /*0x1009b2799*/
      v47[0] = *((_QWORD *)__src + 110); /*0x1009b27a0*/
      v47[1] = v15; /*0x1009b27a7*/
      v47[2] = *((_QWORD *)__src + 112); /*0x1009b27b5*/
      v95 = 1; /*0x1009b27ca*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b27e0*/
        v32,
        v38[48],
        &v95,
        v47,
        LODWORD(v38[49]),
        HIDWORD(v38[49]));
      core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v37); /*0x1009b27ef*/
    }
  }
  if ( !__OFSUB__(0, v85) ) /*0x1009b2f21*/
  {
    v21 = v86; /*0x1009b2f23*/
    for ( i = v87 + 1; i != 1; --i ) /*0x1009b2f31*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v21); /*0x1009b2f4d*/
      v21 += 96; /*0x1009b2f52*/
    }
    if ( v85 ) /*0x1009b2f61*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v86, 96 * v85, 8); /*0x1009b2f77*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009b2f88*/
}