// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009a5c50 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h6791d02d73f18a3c(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r14
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rdi
  __int64 i; // r15
  _BYTE v19[360]; // [rsp+20h] [rbp-1770h] BYREF
  _BYTE v20[360]; // [rsp+188h] [rbp-1608h] BYREF
  _BYTE v21[360]; // [rsp+2F0h] [rbp-14A0h] BYREF
  _BYTE v22[360]; // [rsp+458h] [rbp-1338h] BYREF
  _BYTE v23[360]; // [rsp+5C0h] [rbp-11D0h] BYREF
  _QWORD v24[45]; // [rsp+728h] [rbp-1068h] BYREF
  _BYTE v25[360]; // [rsp+890h] [rbp-F00h] BYREF
  _QWORD v26[99]; // [rsp+9F8h] [rbp-D98h] BYREF
  _BYTE __dst[520]; // [rsp+D10h] [rbp-A80h] BYREF
  _QWORD v28[99]; // [rsp+F18h] [rbp-878h] BYREF
  _BYTE v29[400]; // [rsp+1230h] [rbp-560h] BYREF
  _QWORD v30[50]; // [rsp+13C0h] [rbp-3D0h] BYREF
  _QWORD v31[3]; // [rsp+1550h] [rbp-240h] BYREF
  _QWORD v32[3]; // [rsp+1568h] [rbp-228h] BYREF
  _QWORD v33[3]; // [rsp+1580h] [rbp-210h] BYREF
  _QWORD v34[3]; // [rsp+1598h] [rbp-1F8h] BYREF
  _QWORD v35[3]; // [rsp+15B0h] [rbp-1E0h] BYREF
  _QWORD v36[3]; // [rsp+15C8h] [rbp-1C8h] BYREF
  _QWORD v37[3]; // [rsp+15E0h] [rbp-1B0h] BYREF
  _QWORD v38[4]; // [rsp+15F8h] [rbp-198h] BYREF
  __int64 v39; // [rsp+1618h] [rbp-178h] BYREF
  char *v40; // [rsp+1620h] [rbp-170h]
  __int64 v41; // [rsp+1628h] [rbp-168h]
  _BYTE *v42; // [rsp+1630h] [rbp-160h]
  __int64 v43; // [rsp+1638h] [rbp-158h] BYREF
  char v44[8]; // [rsp+1640h] [rbp-150h]
  __int64 v45; // [rsp+1648h] [rbp-148h]
  _BYTE *v46; // [rsp+1650h] [rbp-140h]
  __int64 v47; // [rsp+1658h] [rbp-138h] BYREF
  char *v48; // [rsp+1660h] [rbp-130h]
  __int64 v49; // [rsp+1668h] [rbp-128h]
  _BYTE *v50; // [rsp+1670h] [rbp-120h]
  __int64 v51; // [rsp+1678h] [rbp-118h] BYREF
  char *v52; // [rsp+1680h] [rbp-110h]
  __int64 v53; // [rsp+1688h] [rbp-108h]
  _BYTE *v54; // [rsp+1690h] [rbp-100h]
  __int64 v55; // [rsp+1698h] [rbp-F8h] BYREF
  char *v56; // [rsp+16A0h] [rbp-F0h]
  __int64 v57; // [rsp+16A8h] [rbp-E8h]
  _BYTE *v58; // [rsp+16B0h] [rbp-E0h]
  __int64 v59; // [rsp+16B8h] [rbp-D8h] BYREF
  __int64 v60; // [rsp+16C0h] [rbp-D0h]
  __int64 v61; // [rsp+16C8h] [rbp-C8h]
  char *v62; // [rsp+16D0h] [rbp-C0h] BYREF
  __int64 v63; // [rsp+16D8h] [rbp-B8h]
  _BYTE *v64; // [rsp+16E0h] [rbp-B0h]
  char *v65; // [rsp+16E8h] [rbp-A8h] BYREF
  __int64 v66; // [rsp+16F0h] [rbp-A0h]
  _BYTE *v67; // [rsp+16F8h] [rbp-98h]
  void *__srca; // [rsp+1700h] [rbp-90h]
  char *v69; // [rsp+1708h] [rbp-88h] BYREF
  __int64 v70; // [rsp+1710h] [rbp-80h]
  _BYTE *v71; // [rsp+1718h] [rbp-78h]
  __int64 v72; // [rsp+1720h] [rbp-70h] BYREF
  __int64 v73; // [rsp+1728h] [rbp-68h]
  char *v74; // [rsp+1730h] [rbp-60h]
  __int64 v75; // [rsp+1738h] [rbp-58h]
  _BYTE *v76; // [rsp+1740h] [rbp-50h]
  __int64 *v77; // [rsp+1748h] [rbp-48h]
  __int64 v78; // [rsp+1750h] [rbp-40h]
  char v79; // [rsp+1763h] [rbp-2Dh]
  int v80; // [rsp+1764h] [rbp-2Ch]

  v24[8] = 0; /*0x1009a5c64*/
  memcpy(__dst, __src, sizeof(__dst)); /*0x1009a5c88*/
  __srca = __src + 520; /*0x1009a5ca0*/
  memcpy(v30, __src + 520, sizeof(v30)); /*0x1009a5ca7*/
  v61 = *((_QWORD *)__src + 117); /*0x1009a5cb3*/
  v2 = *((_QWORD *)__src + 115); /*0x1009a5cba*/
  v60 = *((_QWORD *)__src + 116); /*0x1009a5cc8*/
  v59 = v2; /*0x1009a5ccf*/
  v78 = 0; /*0x1009a5cd6*/
  v72 = (__int64)"set_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009a5ce8*/
  v73 = 23; /*0x1009a5cec*/
  v74 = "appkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a5cfb*/
  v75 = 3; /*0x1009a5cff*/
  v76 = __dst; /*0x1009a5d0a*/
  v77 = &v59; /*0x1009a5d18*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(v28); /*0x1009a5d2a*/
  if ( LODWORD(v28[0]) == 3 ) /*0x1009a5d36*/
  {
    v76 = (_BYTE *)v28[4]; /*0x1009a5d43*/
    v75 = v28[3]; /*0x1009a5d4e*/
    v74 = (char *)v28[2]; /*0x1009a5d60*/
    v73 = v28[1]; /*0x1009a5d64*/
    memcpy(v25, __srca, sizeof(v25)); /*0x1009a5d7e*/
    v3 = *((_QWORD *)__src + 111); /*0x1009a5d91*/
    v37[0] = *((_QWORD *)__src + 110); /*0x1009a5d98*/
    v37[1] = v3; /*0x1009a5d9f*/
    v37[2] = *((_QWORD *)__src + 112); /*0x1009a5dad*/
    v72 = 1; /*0x1009a5dc2*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a5ddb*/
      v25,
      v30[48],
      &v72,
      v37,
      LODWORD(v30[49]),
      HIDWORD(v30[49]));
  }
  else
  {
    memcpy(v29, v28, 0x98u); /*0x1009a5df8*/
    v78 = 0; /*0x1009a5dfd*/
    v72 = (__int64)"set_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009a5e08*/
    v73 = 23; /*0x1009a5e0c*/
    v74 = "modeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a5e1b*/
    v75 = 6; /*0x1009a5e1f*/
    v76 = __dst; /*0x1009a5e2a*/
    v77 = &v59; /*0x1009a5e2e*/
    v4 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v55, &v72); /*0x1009a5e3d*/
    LOBYTE(v4) = (_BYTE)v55 == 6; /*0x1009a5e49*/
    v80 = v4; /*0x1009a5e4c*/
    if ( (_BYTE)v55 == 6 ) /*0x1009a5e4f*/
    {
      v71 = v58; /*0x1009a5e5c*/
      v70 = v57; /*0x1009a5e6e*/
      v69 = v56; /*0x1009a5e72*/
      v78 = 0; /*0x1009a5e79*/
      v72 = (__int64)"set_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009a5e81*/
      v73 = 23; /*0x1009a5e85*/
      v74 = "keyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a5e94*/
      v75 = 7; /*0x1009a5e98*/
      v76 = __dst; /*0x1009a5ea0*/
      v77 = &v59; /*0x1009a5ea4*/
      v5 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h3b76fe033ba37931(&v39, &v72); /*0x1009a5eb3*/
      LOBYTE(v5) = (_BYTE)v39 == 6; /*0x1009a5ebf*/
      v80 = v5; /*0x1009a5ec2*/
      if ( (_BYTE)v39 == 6 ) /*0x1009a5ec5*/
      {
        v6 = (__int64)v40; /*0x1009a5ecb*/
        v78 = 0; /*0x1009a5ed2*/
        v72 = (__int64)"set_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009a5eda*/
        v73 = 23; /*0x1009a5ede*/
        v74 = "keyLabelcallbackattemptsOverflow"; /*0x1009a5eed*/
        v75 = 8; /*0x1009a5ef1*/
        v76 = __dst; /*0x1009a5ef9*/
        v77 = &v59; /*0x1009a5efd*/
        v7 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v51, &v72); /*0x1009a5f0c*/
        LOBYTE(v7) = (_BYTE)v51 == 6; /*0x1009a5f18*/
        v80 = v7; /*0x1009a5f1b*/
        if ( (_BYTE)v51 == 6 ) /*0x1009a5f1e*/
        {
          v67 = v54; /*0x1009a5f2b*/
          v66 = v53; /*0x1009a5f40*/
          v65 = v52; /*0x1009a5f47*/
          v78 = 0; /*0x1009a5f4e*/
          v72 = (__int64)"set_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009a5f56*/
          v73 = 23; /*0x1009a5f5a*/
          v74 = "keyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a5f69*/
          v75 = 7; /*0x1009a5f6d*/
          v76 = __dst; /*0x1009a5f75*/
          v77 = &v59; /*0x1009a5f79*/
          v8 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d( /*0x1009a5f88*/
                 &v47,
                 &v72);
          LOBYTE(v8) = (_BYTE)v47 == 6; /*0x1009a5f94*/
          v80 = v8; /*0x1009a5f97*/
          if ( (_BYTE)v47 == 6 ) /*0x1009a5f9a*/
          {
            v64 = v50; /*0x1009a5fa7*/
            v63 = v49; /*0x1009a5fbc*/
            v62 = v48; /*0x1009a5fc3*/
            v78 = 0; /*0x1009a5fca*/
            v72 = (__int64)"set_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009a5fd2*/
            v73 = 23; /*0x1009a5fd6*/
            v74 = "stylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a5fe5*/
            v75 = 5; /*0x1009a5fe9*/
            v76 = __dst; /*0x1009a5ff1*/
            v77 = &v59; /*0x1009a5ff5*/
            v9 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h22bfbe93846569e9( /*0x1009a6004*/
                   v38,
                   &v72);
            LOBYTE(v9) = LOBYTE(v38[0]) == 6; /*0x1009a6010*/
            v80 = v9; /*0x1009a6013*/
            if ( LOBYTE(v38[0]) == 6 ) /*0x1009a6016*/
            {
              v79 = BYTE1(v38[0]); /*0x1009a6023*/
              v78 = 0; /*0x1009a6026*/
              v72 = (__int64)"set_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009a602e*/
              v73 = 23; /*0x1009a6032*/
              v74 = "modifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a6041*/
              v75 = 12; /*0x1009a6045*/
              v76 = __dst; /*0x1009a604d*/
              v77 = &v59; /*0x1009a6051*/
              _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h2055dc4899fbef3a( /*0x1009a6060*/
                &v43,
                &v72);
              if ( (_BYTE)v43 == 6 ) /*0x1009a606c*/
              {
                codexmate_lib::commands::voice_runtime::set_voice_mode_shortcut::hb2a8625638bf68ad( /*0x1009a60b7*/
                  v26,
                  (__int64)v29,
                  (__int64)&v69,
                  v6,
                  (__int64)&v65,
                  (__int64)&v62,
                  v79,
                  v44[0],
                  v45);
                memcpy(v29, v30, sizeof(v29)); /*0x1009a60cf*/
                if ( LODWORD(v26[0]) == 2 ) /*0x1009a60db*/
                {
                  _$LT$T$u20$as$u20$core..convert..Into$LT$U$GT$$GT$::into::ha6ffbede19b53d18(&v72, &v26[1]); /*0x1009a60ec*/
                  v28[4] = v75; /*0x1009a60f5*/
                  v28[3] = v74; /*0x1009a6100*/
                  v28[2] = v73; /*0x1009a610f*/
                  v28[1] = v72; /*0x1009a6116*/
                  v28[0] = 2; /*0x1009a611d*/
                }
                else
                {
                  memcpy(v28, v26, sizeof(v28)); /*0x1009a668e*/
                }
                tauri::ipc::InvokeResolver$LT$R$GT$::respond::hcf67b8a20cba17ef(v29, v28); /*0x1009a66a1*/
              }
              else
              {
                v76 = v46; /*0x1009a657c*/
                v75 = v45; /*0x1009a6587*/
                v74 = *(char **)v44; /*0x1009a6599*/
                v73 = v43; /*0x1009a659d*/
                memcpy(v19, __srca, sizeof(v19)); /*0x1009a65b7*/
                v15 = *((_QWORD *)__src + 111); /*0x1009a65ca*/
                v31[0] = *((_QWORD *)__src + 110); /*0x1009a65d1*/
                v31[1] = v15; /*0x1009a65d8*/
                v31[2] = *((_QWORD *)__src + 112); /*0x1009a65e6*/
                v72 = 1; /*0x1009a65fb*/
                tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a6611*/
                  v19,
                  v30[48],
                  &v72,
                  v31,
                  LODWORD(v30[49]),
                  HIDWORD(v30[49]));
                if ( v62 ) /*0x1009a6620*/
                  a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v63, v62, 1); /*0x1009a662e*/
                if ( v65 ) /*0x1009a663d*/
                  a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v66, v65, 1); /*0x1009a664b*/
                if ( v69 ) /*0x1009a665a*/
                  a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, v69, 1); /*0x1009a6665*/
                core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v29); /*0x1009a6674*/
              }
            }
            else
            {
              v76 = (_BYTE *)v38[3]; /*0x1009a6473*/
              v75 = v38[2]; /*0x1009a647e*/
              v74 = (char *)v38[1]; /*0x1009a6490*/
              v73 = v38[0]; /*0x1009a6494*/
              memcpy(v20, __srca, sizeof(v20)); /*0x1009a64ae*/
              v14 = *((_QWORD *)__src + 111); /*0x1009a64c1*/
              v32[0] = *((_QWORD *)__src + 110); /*0x1009a64c8*/
              v32[1] = v14; /*0x1009a64cf*/
              v32[2] = *((_QWORD *)__src + 112); /*0x1009a64dd*/
              v72 = 1; /*0x1009a64f2*/
              tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a6508*/
                v20,
                v30[48],
                &v72,
                v32,
                LODWORD(v30[49]),
                HIDWORD(v30[49]));
              if ( v62 ) /*0x1009a6517*/
                a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v63, v62, 1); /*0x1009a6525*/
              if ( v65 ) /*0x1009a6534*/
                a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v66, v65, 1); /*0x1009a6542*/
              if ( v69 ) /*0x1009a6551*/
                a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, v69, 1); /*0x1009a655c*/
              core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v29); /*0x1009a656b*/
            }
          }
          else
          {
            v76 = v50; /*0x1009a6387*/
            v75 = v49; /*0x1009a6392*/
            v74 = v48; /*0x1009a63a4*/
            v73 = v47; /*0x1009a63a8*/
            memcpy(v21, __srca, sizeof(v21)); /*0x1009a63c2*/
            v13 = *((_QWORD *)__src + 111); /*0x1009a63d5*/
            v33[0] = *((_QWORD *)__src + 110); /*0x1009a63dc*/
            v33[1] = v13; /*0x1009a63e3*/
            v33[2] = *((_QWORD *)__src + 112); /*0x1009a63f1*/
            v72 = 1; /*0x1009a6406*/
            tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a641c*/
              v21,
              v30[48],
              &v72,
              v33,
              LODWORD(v30[49]),
              HIDWORD(v30[49]));
            if ( v65 ) /*0x1009a642b*/
              a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v66, v65, 1); /*0x1009a6439*/
            if ( v69 ) /*0x1009a6448*/
              a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, v69, 1); /*0x1009a6453*/
            core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v29); /*0x1009a6462*/
          }
        }
        else
        {
          v76 = v54; /*0x1009a62b8*/
          v75 = v53; /*0x1009a62c3*/
          v74 = v52; /*0x1009a62d5*/
          v73 = v51; /*0x1009a62d9*/
          memcpy(v22, __srca, sizeof(v22)); /*0x1009a62f3*/
          v12 = *((_QWORD *)__src + 111); /*0x1009a6306*/
          v34[0] = *((_QWORD *)__src + 110); /*0x1009a630d*/
          v34[1] = v12; /*0x1009a6314*/
          v34[2] = *((_QWORD *)__src + 112); /*0x1009a6322*/
          v72 = 1; /*0x1009a6337*/
          tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a634d*/
            v22,
            v30[48],
            &v72,
            v34,
            LODWORD(v30[49]),
            HIDWORD(v30[49]));
          if ( v69 ) /*0x1009a635c*/
            a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, v69, 1); /*0x1009a6367*/
          core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v29); /*0x1009a6376*/
        }
      }
      else
      {
        v76 = v42; /*0x1009a61e9*/
        v75 = v41; /*0x1009a61f4*/
        v74 = v40; /*0x1009a6206*/
        v73 = v39; /*0x1009a620a*/
        memcpy(v23, __srca, sizeof(v23)); /*0x1009a6224*/
        v11 = *((_QWORD *)__src + 111); /*0x1009a6237*/
        v35[0] = *((_QWORD *)__src + 110); /*0x1009a623e*/
        v35[1] = v11; /*0x1009a6245*/
        v35[2] = *((_QWORD *)__src + 112); /*0x1009a6253*/
        v72 = 1; /*0x1009a6268*/
        tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a627e*/
          v23,
          v30[48],
          &v72,
          v35,
          LODWORD(v30[49]),
          HIDWORD(v30[49]));
        if ( v69 ) /*0x1009a628d*/
          a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v70, v69, 1); /*0x1009a6298*/
        core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v29); /*0x1009a62a7*/
      }
    }
    else
    {
      v76 = v58; /*0x1009a6134*/
      v75 = v57; /*0x1009a613f*/
      v74 = v56; /*0x1009a6151*/
      v73 = v55; /*0x1009a6155*/
      memcpy(v24, __srca, sizeof(v24)); /*0x1009a616f*/
      v10 = *((_QWORD *)__src + 111); /*0x1009a6182*/
      v36[0] = *((_QWORD *)__src + 110); /*0x1009a6189*/
      v36[1] = v10; /*0x1009a6190*/
      v36[2] = *((_QWORD *)__src + 112); /*0x1009a619e*/
      v72 = 1; /*0x1009a61b3*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a61c9*/
        v24,
        v30[48],
        &v72,
        v36,
        LODWORD(v30[49]),
        HIDWORD(v30[49]));
      core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v29); /*0x1009a61d8*/
    }
  }
  if ( !__OFSUB__(0, v59) ) /*0x1009a66af*/
  {
    v16 = v60; /*0x1009a66b1*/
    for ( i = v61 + 1; i != 1; --i ) /*0x1009a66bf*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v16); /*0x1009a66dd*/
      v16 += 96; /*0x1009a66e2*/
    }
    if ( v59 ) /*0x1009a66f1*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v60, 96 * v59, 8); /*0x1009a6707*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009a6718*/
}