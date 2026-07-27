// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1000cf8f0 | 基线 same-set
// [FULL decompile]

char __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h440340148908fd07(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // rax
  __int64 *v4; // rbx
  __int8 v5; // r13
  char v6; // r15
  __m128i v7; // xmm0
  const void *v8; // r14
  __int64 v9; // rbx
  __int64 *v10; // r13
  __int64 v11; // rdi
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r15
  char v15; // r14
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned __int8 v18; // r12
  int v19; // ebx
  unsigned int v20; // r15d
  char v21; // al
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  _QWORD *v26; // rax
  __int64 v27; // r14
  __int64 v28; // r15
  __int64 v29; // r15
  __int64 v30; // r13
  __int64 v31; // r12
  __int64 v32; // rbx
  _QWORD *v33; // r12
  __int64 v34; // r13
  unsigned __int8 v35; // bl
  unsigned __int64 v36; // r14
  __int64 v37; // rax
  __int64 v38; // r15
  char v39; // al
  int v40; // r15d
  unsigned int v41; // ebx
  __int64 v42; // r14
  _QWORD *v43; // rsi
  __int64 v44; // rax
  __int64 v45; // r15
  _QWORD *v46; // rbx
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rax
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rax
  __int64 v54; // rax
  __int64 v55; // rax
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 v58; // rax
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rcx
  __int64 v62; // rcx
  __int64 v63; // rax
  void *v64; // rdi
  __int64 v65; // r14
  size_t v66; // r12
  __int64 v67; // r15
  __int64 v68; // r13
  __int64 v69; // rbx
  __int64 v70; // rax
  __int64 v71; // r13
  char v72; // r14
  char v73; // r12
  __int64 v74; // rbx
  __int64 v75; // r14
  void *v76; // rbx
  __int8 v77; // r12
  size_t v78; // r14
  char result; // al
  _QWORD *v80; // rbx
  __int64 v81; // rbx
  __int64 v82; // rdi
  __int64 v83; // r15
  __int64 v84; // rax
  _QWORD *v85; // r12
  char v86; // r14
  _QWORD *v87; // r12
  _QWORD *v88; // r12
  __int64 v89; // rsi
  _QWORD *v90; // r12
  __int64 v91; // rsi
  __int64 v92; // rsi
  _QWORD *v93; // r12
  __int64 v94; // rsi
  __int64 v95; // rsi
  __int64 v96; // rsi
  _QWORD *v97; // r14
  __int64 v98; // rsi
  __int64 v99; // rsi
  __int64 v100; // rsi
  __int64 v101; // rsi
  _QWORD *v102; // r12
  __int64 v103; // rsi
  __int64 v104; // rsi
  __int64 v105; // rsi
  __int64 v106; // rsi
  _QWORD *v107; // r12
  __int64 v108; // rsi
  __int64 v109; // rsi
  __int64 v110; // rsi
  __int64 v111; // rsi
  __int64 v112; // rsi
  __int8 v113; // r12
  char v114; // r14
  __int64 v115; // rdi
  __int64 i; // r13
  bool v117; // zf
  __int64 *v118; // rcx
  _QWORD v119[85]; // [rsp+8h] [rbp-1708h] BYREF
  _DWORD v120[170]; // [rsp+2B0h] [rbp-1460h] BYREF
  _BYTE __dst[152]; // [rsp+558h] [rbp-11B8h] BYREF
  _QWORD v122[85]; // [rsp+5F0h] [rbp-1120h] BYREF
  _BYTE __src[744]; // [rsp+898h] [rbp-E78h] BYREF
  __int128 v124; // [rsp+B80h] [rbp-B90h]
  __int128 v125; // [rsp+B90h] [rbp-B80h]
  __m128i v126; // [rsp+BA0h] [rbp-B70h] BYREF
  __int128 v127; // [rsp+BB0h] [rbp-B60h]
  __int128 v128; // [rsp+BC0h] [rbp-B50h]
  _QWORD v129[3]; // [rsp+BD0h] [rbp-B40h] BYREF
  __int128 v130; // [rsp+BE8h] [rbp-B28h]
  __int64 v131; // [rsp+BF8h] [rbp-B18h]
  __int128 v132; // [rsp+C00h] [rbp-B10h] BYREF
  _BYTE v133[896]; // [rsp+C10h] [rbp-B00h] BYREF
  __int64 v134; // [rsp+F90h] [rbp-780h]
  __int64 v135; // [rsp+F98h] [rbp-778h]
  __m128i v136; // [rsp+FA0h] [rbp-770h]
  __int64 v137; // [rsp+FB0h] [rbp-760h]
  __int64 v138; // [rsp+FB8h] [rbp-758h]
  __int64 v139; // [rsp+FC0h] [rbp-750h]
  __int64 v140; // [rsp+FC8h] [rbp-748h]
  __int128 v141; // [rsp+FD0h] [rbp-740h]
  __int64 v142; // [rsp+FE0h] [rbp-730h]
  __int64 v143; // [rsp+FE8h] [rbp-728h]
  __int64 v144; // [rsp+FF0h] [rbp-720h]
  __int64 v145; // [rsp+FF8h] [rbp-718h]
  __int128 v146; // [rsp+1000h] [rbp-710h]
  __int64 v147; // [rsp+1010h] [rbp-700h]
  __int64 v148; // [rsp+1018h] [rbp-6F8h]
  __int64 v149; // [rsp+1020h] [rbp-6F0h]
  __int64 v150; // [rsp+1028h] [rbp-6E8h]
  __int128 v151; // [rsp+1030h] [rbp-6E0h]
  __int64 v152; // [rsp+1040h] [rbp-6D0h]
  __m128i v153; // [rsp+1048h] [rbp-6C8h]
  __int64 v154; // [rsp+1058h] [rbp-6B8h]
  __int128 v155; // [rsp+1060h] [rbp-6B0h]
  __int64 v156; // [rsp+1070h] [rbp-6A0h]
  __m128i v157; // [rsp+1078h] [rbp-698h]
  __int64 v158; // [rsp+1088h] [rbp-688h]
  __int128 v159; // [rsp+1090h] [rbp-680h]
  __int64 v160; // [rsp+10A0h] [rbp-670h]
  __int64 v161; // [rsp+10A8h] [rbp-668h]
  __int64 v162; // [rsp+10B0h] [rbp-660h]
  __int64 v163; // [rsp+10B8h] [rbp-658h]
  __int128 v164; // [rsp+10C0h] [rbp-650h]
  __int64 v165; // [rsp+10D0h] [rbp-640h]
  __m128i v166; // [rsp+10D8h] [rbp-638h]
  __int64 v167; // [rsp+10E8h] [rbp-628h]
  __int128 v168; // [rsp+10F0h] [rbp-620h]
  __int64 v169; // [rsp+1100h] [rbp-610h]
  __m128i v170; // [rsp+1108h] [rbp-608h]
  __int64 v171; // [rsp+1118h] [rbp-5F8h]
  __int64 v172; // [rsp+1120h] [rbp-5F0h]
  char v173; // [rsp+1128h] [rbp-5E8h]
  __int64 v174; // [rsp+1130h] [rbp-5E0h]
  __int64 v175; // [rsp+1138h] [rbp-5D8h]
  __int64 v176; // [rsp+1140h] [rbp-5D0h]
  __int64 v177; // [rsp+1148h] [rbp-5C8h]
  __m128i v178; // [rsp+1150h] [rbp-5C0h]
  __m128i v179; // [rsp+1160h] [rbp-5B0h]
  __m128i v180; // [rsp+1170h] [rbp-5A0h]
  __m128i v181; // [rsp+1180h] [rbp-590h]
  char *v182; // [rsp+1190h] [rbp-580h] BYREF
  __m128i v183; // [rsp+1198h] [rbp-578h] BYREF
  __int64 v184; // [rsp+11A8h] [rbp-568h]
  __int64 v185; // [rsp+11B0h] [rbp-560h]
  _QWORD v186[85]; // [rsp+11B8h] [rbp-558h] BYREF
  __m128i v187; // [rsp+1460h] [rbp-2B0h]
  __m128i v188; // [rsp+1470h] [rbp-2A0h]
  __m128i v189; // [rsp+1480h] [rbp-290h]
  __m128i v190; // [rsp+1490h] [rbp-280h]
  __m128i v191; // [rsp+14A0h] [rbp-270h]
  __m128i v192; // [rsp+14B0h] [rbp-260h]
  __int64 v193; // [rsp+14C8h] [rbp-248h] BYREF
  __int64 v194; // [rsp+14D0h] [rbp-240h]
  __m128i v195; // [rsp+14D8h] [rbp-238h] BYREF
  size_t v196; // [rsp+14E8h] [rbp-228h]
  __m128i v197; // [rsp+14F0h] [rbp-220h]
  __m128i v198; // [rsp+1500h] [rbp-210h]
  __m128i v199; // [rsp+1510h] [rbp-200h]
  __m128i v200; // [rsp+1520h] [rbp-1F0h]
  __int128 v201; // [rsp+1530h] [rbp-1E0h]
  _QWORD *v202; // [rsp+1548h] [rbp-1C8h] BYREF
  __int64 v203; // [rsp+1550h] [rbp-1C0h]
  __int64 v204; // [rsp+1558h] [rbp-1B8h]
  __m128i v205; // [rsp+1560h] [rbp-1B0h]
  __int128 v206; // [rsp+1570h] [rbp-1A0h]
  __int64 *v207; // [rsp+1580h] [rbp-190h]
  int v208; // [rsp+1588h] [rbp-188h]
  __int16 v209; // [rsp+158Ch] [rbp-184h]
  __int128 v210; // [rsp+1590h] [rbp-180h]
  __int128 v211; // [rsp+15A0h] [rbp-170h]
  __int64 v212; // [rsp+15B0h] [rbp-160h]
  void *v213; // [rsp+15B8h] [rbp-158h]
  __m128i v214; // [rsp+15C0h] [rbp-150h] BYREF
  char v215; // [rsp+15DEh] [rbp-132h] BYREF
  char v216; // [rsp+15DFh] [rbp-131h]
  __int64 v217; // [rsp+15E0h] [rbp-130h]
  __int64 v218; // [rsp+15E8h] [rbp-128h]
  __m128i v219; // [rsp+15F0h] [rbp-120h]
  __m128i v220; // [rsp+1600h] [rbp-110h]
  __int64 v221; // [rsp+1618h] [rbp-F8h]
  __m128i v222; // [rsp+1620h] [rbp-F0h] BYREF
  __int64 v223; // [rsp+1630h] [rbp-E0h]
  __int64 v224; // [rsp+1638h] [rbp-D8h]
  __int64 v225; // [rsp+1640h] [rbp-D0h]
  __int64 v226; // [rsp+1648h] [rbp-C8h]
  __int64 v227; // [rsp+1650h] [rbp-C0h]
  __int64 v228; // [rsp+1658h] [rbp-B8h]
  __int64 v229; // [rsp+1660h] [rbp-B0h]
  __int64 v230; // [rsp+1668h] [rbp-A8h]
  __int64 v231; // [rsp+1670h] [rbp-A0h]
  __int64 v232; // [rsp+1678h] [rbp-98h]
  __int64 v233; // [rsp+1680h] [rbp-90h]
  __int64 v234; // [rsp+1688h] [rbp-88h]
  __int64 v235; // [rsp+1690h] [rbp-80h]
  void *v236; // [rsp+1698h] [rbp-78h]
  __int64 v237; // [rsp+16A0h] [rbp-70h]
  __int64 v238; // [rsp+16A8h] [rbp-68h]
  __int64 v239; // [rsp+16B0h] [rbp-60h]
  __int64 v240; // [rsp+16B8h] [rbp-58h]
  __int64 v241; // [rsp+16C0h] [rbp-50h]
  int v242; // [rsp+16C8h] [rbp-48h]
  __int16 v243; // [rsp+16CCh] [rbp-44h]
  __int64 v244; // [rsp+16D0h] [rbp-40h]
  _QWORD *v245; // [rsp+16D8h] [rbp-38h]
  __int64 v246; // [rsp+16E0h] [rbp-30h]

  v122[31] = 0;
  v207 = a1;
  v3 = *(unsigned __int8 *)(a2 + 2424);
  v246 = a2;
  v214.i64[0] = a3;
  switch ( v3 )
  {
    case 0LL:
      v186[1] = 0;
      v182 = "generate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      v183.i64[0] = 21;
      v183.i64[1] = (__int64)"appexport_accounts_to_filetargetPathaccountKeysload_usage_analyticsconfirm_pending_auto_switchexport_debug_bundlemanagerimport_accounts_from_fileexpectedContentSha256overwriteExistingselectedKeysload_snapshotlocalOnlyforceMetadataupload_debug_reportinputtest_relay_provider_streamproviderIdmodelonEventmigrate_session_worktreemutationGatesessionIdload_sessionsrefresh_single_account_usageaccountKeyload_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      v184 = 3;
      v185 = a2;
      v4 = (__int64 *)(a2 + 520);
      v186[0] = a2 + 520;
      _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(&v132);
      v5 = BYTE8(v132);
      v6 = BYTE9(v132);
      v120[0] = *(_DWORD *)((char *)&v132 + 10);
      LOWORD(v120[1]) = HIWORD(v132);
      v7 = _mm_loadu_si128((const __m128i *)v133);
      if ( (_QWORD)v132 == 3 )
      {
        v220.i64[0] = *(_QWORD *)&v133[16];
        v214 = v7;
        v242 = v120[0];
        v243 = v120[1];
LABEL_463:
        v77 = v5;
        core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(v246);
        v68 = 1;
        if ( *v4 == 0x8000000000000000LL )
        {
          v81 = v220.i64[0];
          goto LABEL_470;
        }
        v245 = (_QWORD *)(v246 + 528);
        v115 = *(_QWORD *)(v246 + 528);
        for ( i = *(_QWORD *)(v246 + 536) + 1LL; i != 1; --i )
        {
          core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v115);
          v115 += 96;
        }
        v84 = *v4;
        v68 = 1;
        v117 = *v4 == 0;
        v81 = v220.i64[0];
        if ( v117 )
          goto LABEL_470;
        goto LABEL_469;
      }
      qmemcpy(&__src[40], &v133[24], 0x70u);
      *(_DWORD *)&__src[10] = v120[0];
      *(_WORD *)&__src[14] = v120[1];
      *(_QWORD *)__src = v132;
      *(_WORD *)&__src[8] = WORD4(v132);
      *(__m128i *)&__src[16] = v7;
      *(_QWORD *)&__src[32] = *(_QWORD *)&v133[16];
      *(_QWORD *)&v133[32] = 0;
      *(_QWORD *)&v132 = "generate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *((_QWORD *)&v132 + 1) = 21;
      *(_QWORD *)v133 = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide";
      *(_QWORD *)&v133[8] = 4;
      *(_QWORD *)&v133[16] = v246;
      *(_QWORD *)&v133[24] = a2 + 520;
      v27 = tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(v246 + 512) + 16LL);
      if ( !v27 )
      {
        _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe(
          &v182,
          &v132,
          v133);
        v5 = (char)v182;
        if ( (_BYTE)v182 != 6 )
        {
          v73 = BYTE1(v182);
          v242 = *(_DWORD *)((char *)&v182 + 2);
          v243 = HIWORD(v182);
          v75 = v183.i64[1];
          v74 = v183.i64[0];
          v220.i64[0] = v184;
          core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(__src);
          v214 = _mm_unpacklo_epi64((__m128i)(unsigned __int64)v74, (__m128i)(unsigned __int64)v75);
          v4 = (__int64 *)(a2 + 520);
          v6 = v73;
          goto LABEL_463;
        }
        v27 = v183.i64[0];
      }
      *(_QWORD *)&v133[32] = 0;
      *(_QWORD *)&v132 = "generate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *((_QWORD *)&v132 + 1) = 21;
      *(_QWORD *)v133 = "templateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *(_QWORD *)&v133[8] = 10;
      *(_QWORD *)&v133[16] = v246;
      *(_QWORD *)&v133[24] = a2 + 520;
      _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v182, &v132);
      v5 = (char)v182;
      if ( (_BYTE)v182 != 6 )
      {
        v6 = BYTE1(v182);
        v242 = *(_DWORD *)((char *)&v182 + 2);
        v243 = HIWORD(v182);
        v214 = _mm_loadu_si128(&v183);
        v220.i64[0] = v184;
        core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(__src);
        goto LABEL_463;
      }
      v28 = v183.i64[1];
      v245 = (_QWORD *)v183.i64[0];
      v220 = _mm_loadu_si128((const __m128i *)&v183.u64[1]);
      *(_QWORD *)&v133[32] = 0;
      *(_QWORD *)&v132 = "generate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *((_QWORD *)&v132 + 1) = 21;
      *(_QWORD *)v133 = "rawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *(_QWORD *)&v133[8] = 7;
      *(_QWORD *)&v133[16] = v246;
      *(_QWORD *)&v133[24] = a2 + 520;
      _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v182, &v132);
      if ( (_BYTE)v182 != 6 )
      {
        v5 = (char)v182;
        v72 = BYTE1(v182);
        v242 = *(_DWORD *)((char *)&v182 + 2);
        v243 = HIWORD(v182);
        v214 = _mm_loadu_si128(&v183);
        v220.i64[0] = v184;
        if ( v245 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v245, 1);
        goto LABEL_145;
      }
      v222.i64[0] = v28;
      v236 = (void *)v183.i64[1];
      v29 = v183.i64[0];
      v205 = _mm_loadu_si128((const __m128i *)&v183.u64[1]);
      *(_QWORD *)&v133[32] = 0;
      *(_QWORD *)&v132 = "generate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *((_QWORD *)&v132 + 1) = 21;
      *(_QWORD *)v133 = "selectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *(_QWORD *)&v133[8] = 12;
      *(_QWORD *)&v133[16] = v246;
      *(_QWORD *)&v133[24] = a2 + 520;
      _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h7d4626b3ed85f091(&v182, &v132);
      if ( (_BYTE)v182 != 6 )
      {
        v5 = (char)v182;
        v72 = BYTE1(v182);
        v242 = *(_DWORD *)((char *)&v182 + 2);
        v243 = HIWORD(v182);
        v214 = _mm_loadu_si128(&v183);
        v220.i64[0] = v184;
        if ( v29 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v236, v29, 1);
        if ( v245 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v222.i64[0], v245, 1);
        goto LABEL_145;
      }
      v235 = v183.i64[1];
      v244 = v183.i64[0];
      v187 = _mm_loadu_si128((const __m128i *)&v183.u64[1]);
      *(_QWORD *)&v133[32] = 0;
      *(_QWORD *)&v132 = "generate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *((_QWORD *)&v132 + 1) = 21;
      *(_QWORD *)v133 = "clipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *(_QWORD *)&v133[8] = 13;
      *(_QWORD *)&v133[16] = v246;
      *(_QWORD *)&v133[24] = a2 + 520;
      _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h7d4626b3ed85f091(&v182, &v132);
      if ( (_BYTE)v182 != 6 )
      {
        v5 = (char)v182;
        v72 = BYTE1(v182);
        v242 = *(_DWORD *)((char *)&v182 + 2);
        v243 = HIWORD(v182);
        v214 = _mm_loadu_si128(&v183);
        v220.i64[0] = v184;
        if ( 2 * v244 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v235, v244, 1);
        v85 = v245;
        if ( v29 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v236, v29, 1);
        if ( v85 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v222.i64[0], v85, 1);
LABEL_145:
        core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(__src);
        v6 = v72;
        goto LABEL_463;
      }
      v232 = v183.i64[1];
      v241 = v183.i64[0];
      v188 = _mm_loadu_si128((const __m128i *)&v183.u64[1]);
      *(_QWORD *)&v133[32] = 0;
      *(_QWORD *)&v132 = "generate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *((_QWORD *)&v132 + 1) = 21;
      *(_QWORD *)v133 = "targetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *(_QWORD *)&v133[8] = 14;
      *(_QWORD *)&v133[16] = v246;
      *(_QWORD *)&v133[24] = a2 + 520;
      _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h7d4626b3ed85f091(&v182, &v132);
      v219.i8[0] = (char)v182;
      if ( (_BYTE)v182 != 6 )
      {
        v86 = BYTE1(v182);
        v242 = *(_DWORD *)((char *)&v182 + 2);
        v243 = HIWORD(v182);
        v214 = _mm_loadu_si128(&v183);
        v220.i64[0] = v184;
        if ( 2 * v241 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v232, v241, 1);
        v87 = v245;
        if ( 2 * v244 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v235, v244, 1);
        if ( v29 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v236, v29, 1);
        if ( v87 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v222.i64[0], v87, 1);
        goto LABEL_427;
      }
      v231 = v183.i64[1];
      v240 = v183.i64[0];
      v189 = _mm_loadu_si128((const __m128i *)&v183.u64[1]);
      *(_QWORD *)&v133[32] = 0;
      *(_QWORD *)&v132 = "generate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *((_QWORD *)&v132 + 1) = 21;
      *(_QWORD *)v133 = "targetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *(_QWORD *)&v133[8] = 13;
      *(_QWORD *)&v133[16] = v246;
      *(_QWORD *)&v133[24] = a2 + 520;
      _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h7d4626b3ed85f091(&v182, &v132);
      v219.i8[0] = (char)v182;
      if ( (_BYTE)v182 != 6 )
      {
        v86 = BYTE1(v182);
        v242 = *(_DWORD *)((char *)&v182 + 2);
        v243 = HIWORD(v182);
        v214 = _mm_loadu_si128(&v183);
        v220.i64[0] = v184;
        if ( 2 * v240 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v231, v240, 1);
        v88 = v245;
        if ( 2 * v241 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v232, v241, 1);
          v89 = v244;
          if ( !(2 * v244) )
          {
LABEL_159:
            if ( !v29 )
              goto LABEL_161;
            goto LABEL_160;
          }
        }
        else
        {
          v89 = v244;
          if ( !(2 * v244) )
            goto LABEL_159;
        }
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v235, v89, 1);
        if ( !v29 )
        {
LABEL_161:
          if ( v88 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v222.i64[0], v88, 1);
          goto LABEL_427;
        }
LABEL_160:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v236, v29, 1);
        goto LABEL_161;
      }
      v229 = v183.i64[1];
      v239 = v183.i64[0];
      v190 = _mm_loadu_si128((const __m128i *)&v183.u64[1]);
      *(_QWORD *)&v133[32] = 0;
      *(_QWORD *)&v132 = "generate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *((_QWORD *)&v132 + 1) = 21;
      *(_QWORD *)v133 = "promptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *(_QWORD *)&v133[8] = 14;
      *(_QWORD *)&v133[16] = v246;
      *(_QWORD *)&v133[24] = a2 + 520;
      _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h7d4626b3ed85f091(&v182, &v132);
      v219.i8[0] = (char)v182;
      if ( (_BYTE)v182 != 6 )
      {
        v86 = BYTE1(v182);
        v242 = *(_DWORD *)((char *)&v182 + 2);
        v243 = HIWORD(v182);
        v214 = _mm_loadu_si128(&v183);
        v220.i64[0] = v184;
        if ( 2 * v239 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v229, v239, 1);
        v90 = v245;
        if ( 2 * v240 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v231, v240, 1);
          v91 = v241;
          if ( !(2 * v241) )
          {
LABEL_168:
            v92 = v244;
            if ( !(2 * v244) )
              goto LABEL_169;
            goto LABEL_190;
          }
        }
        else
        {
          v91 = v241;
          if ( !(2 * v241) )
            goto LABEL_168;
        }
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v232, v91, 1);
        v92 = v244;
        if ( !(2 * v244) )
        {
LABEL_169:
          if ( !v29 )
            goto LABEL_171;
          goto LABEL_170;
        }
LABEL_190:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v235, v92, 1);
        if ( !v29 )
        {
LABEL_171:
          if ( v90 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v222.i64[0], v90, 1);
          goto LABEL_427;
        }
LABEL_170:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v236, v29, 1);
        goto LABEL_171;
      }
      v228 = v183.i64[1];
      v30 = v183.i64[0];
      v191 = _mm_loadu_si128((const __m128i *)&v183.u64[1]);
      *(_QWORD *)&v133[32] = 0;
      *(_QWORD *)&v132 = "generate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *((_QWORD *)&v132 + 1) = 21;
      *(_QWORD *)v133 = "templateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *(_QWORD *)&v133[8] = 13;
      *(_QWORD *)&v133[16] = v246;
      *(_QWORD *)&v133[24] = a2 + 520;
      _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h7d4626b3ed85f091(&v182, &v132);
      v219.i8[0] = (char)v182;
      if ( (_BYTE)v182 != 6 )
      {
        v86 = BYTE1(v182);
        v242 = *(_DWORD *)((char *)&v182 + 2);
        v243 = HIWORD(v182);
        v214 = _mm_loadu_si128(&v183);
        v220.i64[0] = v184;
        if ( 2 * v30 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v228, v30, 1);
        v93 = v245;
        if ( 2 * v239 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v229, v239, 1);
          v94 = v240;
          if ( !(2 * v240) )
          {
LABEL_181:
            v95 = v241;
            if ( !(2 * v241) )
              goto LABEL_182;
            goto LABEL_205;
          }
        }
        else
        {
          v94 = v240;
          if ( !(2 * v240) )
            goto LABEL_181;
        }
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v231, v94, 1);
        v95 = v241;
        if ( !(2 * v241) )
        {
LABEL_182:
          v96 = v244;
          if ( !(2 * v244) )
            goto LABEL_183;
          goto LABEL_206;
        }
LABEL_205:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v232, v95, 1);
        v96 = v244;
        if ( !(2 * v244) )
        {
LABEL_183:
          if ( !v29 )
            goto LABEL_185;
          goto LABEL_184;
        }
LABEL_206:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v235, v96, 1);
        if ( !v29 )
        {
LABEL_185:
          if ( v93 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v222.i64[0], v93, 1);
          goto LABEL_427;
        }
LABEL_184:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v236, v29, 1);
        goto LABEL_185;
      }
      v226 = v183.i64[1];
      v238 = v183.i64[0];
      v192 = _mm_loadu_si128((const __m128i *)&v183.u64[1]);
      *(_QWORD *)&v133[32] = 0;
      *(_QWORD *)&v132 = "generate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *((_QWORD *)&v132 + 1) = 21;
      *(_QWORD *)v133 = "templateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *(_QWORD *)&v133[8] = 12;
      *(_QWORD *)&v133[16] = v246;
      *(_QWORD *)&v133[24] = a2 + 520;
      _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h340f0ea4369709eb(&v182, &v132);
      LOBYTE(v213) = BYTE1(v182);
      v219.i8[0] = (char)v182;
      if ( (_BYTE)v182 != 6 )
      {
        v243 = HIWORD(v182);
        v242 = *(_DWORD *)((char *)&v182 + 2);
        v214 = _mm_loadu_si128(&v183);
        v220.i64[0] = v184;
        if ( 2 * v238 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v226, v238, 1);
          v97 = v245;
          if ( !(2 * v30) )
          {
LABEL_194:
            v98 = v239;
            if ( !(2 * v239) )
              goto LABEL_195;
            goto LABEL_221;
          }
        }
        else
        {
          v97 = v245;
          if ( !(2 * v30) )
            goto LABEL_194;
        }
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v228, v30, 1);
        v98 = v239;
        if ( !(2 * v239) )
        {
LABEL_195:
          v99 = v240;
          if ( !(2 * v240) )
            goto LABEL_196;
          goto LABEL_222;
        }
LABEL_221:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v229, v98, 1);
        v99 = v240;
        if ( !(2 * v240) )
        {
LABEL_196:
          v100 = v241;
          if ( !(2 * v241) )
            goto LABEL_197;
          goto LABEL_223;
        }
LABEL_222:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v231, v99, 1);
        v100 = v241;
        if ( !(2 * v241) )
        {
LABEL_197:
          v101 = v244;
          if ( !(2 * v244) )
            goto LABEL_198;
          goto LABEL_224;
        }
LABEL_223:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v232, v100, 1);
        v101 = v244;
        if ( !(2 * v244) )
        {
LABEL_198:
          if ( !v29 )
          {
LABEL_200:
            if ( v97 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v222.i64[0], v97, 1);
            core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(__src);
            v6 = (char)v213;
            v5 = v219.i8[0];
            goto LABEL_463;
          }
LABEL_199:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v236, v29, 1);
          goto LABEL_200;
        }
LABEL_224:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v235, v101, 1);
        if ( !v29 )
          goto LABEL_200;
        goto LABEL_199;
      }
      *(_QWORD *)&v133[32] = 0;
      *(_QWORD *)&v132 = "generate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *((_QWORD *)&v132 + 1) = 21;
      *(_QWORD *)v133 = "llmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *(_QWORD *)&v133[8] = 11;
      *(_QWORD *)&v133[16] = v246;
      *(_QWORD *)&v133[24] = a2 + 520;
      _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h7d4626b3ed85f091(&v182, &v132);
      v219.i8[0] = (char)v182;
      if ( (_BYTE)v182 != 6 )
      {
        v86 = BYTE1(v182);
        v242 = *(_DWORD *)((char *)&v182 + 2);
        v243 = HIWORD(v182);
        v214 = _mm_loadu_si128(&v183);
        v220.i64[0] = v184;
        if ( 2 * v238 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v226, v238, 1);
          v102 = v245;
          if ( !(2 * v30) )
          {
LABEL_210:
            v103 = v239;
            if ( !(2 * v239) )
              goto LABEL_211;
            goto LABEL_244;
          }
        }
        else
        {
          v102 = v245;
          if ( !(2 * v30) )
            goto LABEL_210;
        }
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v228, v30, 1);
        v103 = v239;
        if ( !(2 * v239) )
        {
LABEL_211:
          v104 = v240;
          if ( !(2 * v240) )
            goto LABEL_212;
          goto LABEL_245;
        }
LABEL_244:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v229, v103, 1);
        v104 = v240;
        if ( !(2 * v240) )
        {
LABEL_212:
          v105 = v241;
          if ( !(2 * v241) )
            goto LABEL_213;
          goto LABEL_246;
        }
LABEL_245:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v231, v104, 1);
        v105 = v241;
        if ( !(2 * v241) )
        {
LABEL_213:
          v106 = v244;
          if ( !(2 * v244) )
            goto LABEL_214;
          goto LABEL_247;
        }
LABEL_246:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v232, v105, 1);
        v106 = v244;
        if ( !(2 * v244) )
        {
LABEL_214:
          if ( !v29 )
            goto LABEL_216;
          goto LABEL_215;
        }
LABEL_247:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v235, v106, 1);
        if ( !v29 )
        {
LABEL_216:
          if ( v102 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v222.i64[0], v102, 1);
          goto LABEL_427;
        }
LABEL_215:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v236, v29, 1);
        goto LABEL_216;
      }
      v225 = v183.i64[1];
      v237 = v183.i64[0];
      v197 = _mm_loadu_si128((const __m128i *)&v183.u64[1]);
      *(_QWORD *)&v133[32] = 0;
      *(_QWORD *)&v132 = "generate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *((_QWORD *)&v132 + 1) = 21;
      *(_QWORD *)v133 = "llmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *(_QWORD *)&v133[8] = 9;
      *(_QWORD *)&v133[16] = v246;
      *(_QWORD *)&v133[24] = a2 + 520;
      _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h7d4626b3ed85f091(&v182, &v132);
      v219.i8[0] = (char)v182;
      if ( (_BYTE)v182 != 6 )
      {
        v107 = v245;
        v86 = BYTE1(v182);
        v242 = *(_DWORD *)((char *)&v182 + 2);
        v243 = HIWORD(v182);
        v214 = _mm_loadu_si128(&v183);
        v220.i64[0] = v184;
        if ( 2 * v237 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v225, v237, 1);
          v108 = v238;
          if ( !(2 * v238) )
          {
LABEL_230:
            if ( !(2 * v30) )
              goto LABEL_231;
            goto LABEL_268;
          }
        }
        else
        {
          v108 = v238;
          if ( !(2 * v238) )
            goto LABEL_230;
        }
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v226, v108, 1);
        if ( !(2 * v30) )
        {
LABEL_231:
          v109 = v239;
          if ( !(2 * v239) )
            goto LABEL_232;
          goto LABEL_269;
        }
LABEL_268:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v228, v30, 1);
        v109 = v239;
        if ( !(2 * v239) )
        {
LABEL_232:
          v110 = v240;
          if ( !(2 * v240) )
            goto LABEL_233;
          goto LABEL_270;
        }
LABEL_269:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v229, v109, 1);
        v110 = v240;
        if ( !(2 * v240) )
        {
LABEL_233:
          v111 = v241;
          if ( !(2 * v241) )
            goto LABEL_234;
          goto LABEL_271;
        }
LABEL_270:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v231, v110, 1);
        v111 = v241;
        if ( !(2 * v241) )
        {
LABEL_234:
          v112 = v244;
          if ( !(2 * v244) )
            goto LABEL_235;
          goto LABEL_272;
        }
LABEL_271:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v232, v111, 1);
        v112 = v244;
        if ( !(2 * v244) )
        {
LABEL_235:
          if ( !v29 )
            goto LABEL_237;
          goto LABEL_236;
        }
LABEL_272:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v235, v112, 1);
        if ( !v29 )
        {
LABEL_237:
          if ( v107 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v222.i64[0], v107, 1);
          goto LABEL_427;
        }
LABEL_236:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v236, v29, 1);
        goto LABEL_237;
      }
      v223 = v183.i64[1];
      v234 = v183.i64[0];
      v198 = _mm_loadu_si128((const __m128i *)&v183.u64[1]);
      *(_QWORD *)&v133[32] = 0;
      *(_QWORD *)&v132 = "generate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *((_QWORD *)&v132 + 1) = 21;
      *(_QWORD *)v133 = "llmModelasrModeldiagnoserelaunchcategoryuserNotecurrencysentencemutationbytesRiddownloadregisterdeepLinkprotocolunlistenmaximizeminimizeset_iconset_sizereparentall branches are disabled and there is no else branch";
      *(_QWORD *)&v133[8] = 8;
      *(_QWORD *)&v133[16] = v246;
      *(_QWORD *)&v133[24] = a2 + 520;
      _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h7d4626b3ed85f091(&v182, &v132);
      v219.i8[0] = (char)v182;
      if ( (_BYTE)v182 != 6 )
      {
        v86 = BYTE1(v182);
        v242 = *(_DWORD *)((char *)&v182 + 2);
        v243 = HIWORD(v182);
        v214 = _mm_loadu_si128(&v183);
        v220.i64[0] = v184;
        if ( 2 * v234 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v223, v234, 1);
          if ( !(2 * v237) )
          {
LABEL_251:
            if ( !(2 * v238) )
              goto LABEL_252;
            goto LABEL_290;
          }
        }
        else if ( !(2 * v237) )
        {
          goto LABEL_251;
        }
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v225, v237, 1);
        if ( !(2 * v238) )
        {
LABEL_252:
          if ( !(2 * v30) )
            goto LABEL_253;
          goto LABEL_291;
        }
LABEL_290:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v226, v238, 1);
        if ( !(2 * v30) )
        {
LABEL_253:
          if ( !(2 * v239) )
            goto LABEL_254;
          goto LABEL_292;
        }
LABEL_291:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v228, v30, 1);
        if ( !(2 * v239) )
        {
LABEL_254:
          if ( !(2 * v240) )
            goto LABEL_255;
          goto LABEL_293;
        }
LABEL_292:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v229, v239, 1);
        if ( !(2 * v240) )
        {
LABEL_255:
          if ( !(2 * v241) )
            goto LABEL_256;
          goto LABEL_294;
        }
LABEL_293:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v231, v240, 1);
        if ( !(2 * v241) )
        {
LABEL_256:
          if ( !(2 * v244) )
            goto LABEL_257;
          goto LABEL_295;
        }
LABEL_294:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v232, v241, 1);
        if ( !(2 * v244) )
        {
LABEL_257:
          if ( !v29 )
            goto LABEL_259;
          goto LABEL_258;
        }
LABEL_295:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v235, v244, 1);
        if ( !v29 )
        {
LABEL_259:
          if ( v245 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v222.i64[0], v245, 1);
          goto LABEL_427;
        }
LABEL_258:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v236, v29, 1);
        goto LABEL_259;
      }
      v221 = v183.i64[1];
      v233 = v183.i64[0];
      v199 = _mm_loadu_si128((const __m128i *)&v183.u64[1]);
      *(_QWORD *)&v133[32] = 0;
      *(_QWORD *)&v132 = "generate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *((_QWORD *)&v132 + 1) = 21;
      *(_QWORD *)v133 = "llmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *(_QWORD *)&v133[8] = 10;
      *(_QWORD *)&v133[16] = v246;
      *(_QWORD *)&v133[24] = a2 + 520;
      _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h7d4626b3ed85f091(&v182, &v132);
      v219.i8[0] = (char)v182;
      if ( (_BYTE)v182 != 6 )
      {
        v86 = BYTE1(v182);
        v242 = *(_DWORD *)((char *)&v182 + 2);
        v243 = HIWORD(v182);
        v214 = _mm_loadu_si128(&v183);
        v220.i64[0] = v184;
        if ( 2 * v233 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v221, v233, 1);
          if ( !(2 * v234) )
          {
LABEL_276:
            if ( !(2 * v237) )
              goto LABEL_277;
            goto LABEL_314;
          }
        }
        else if ( !(2 * v234) )
        {
          goto LABEL_276;
        }
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v223, v234, 1);
        if ( !(2 * v237) )
        {
LABEL_277:
          if ( !(2 * v238) )
            goto LABEL_278;
          goto LABEL_315;
        }
LABEL_314:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v225, v237, 1);
        if ( !(2 * v238) )
        {
LABEL_278:
          if ( !(2 * v30) )
            goto LABEL_279;
          goto LABEL_316;
        }
LABEL_315:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v226, v238, 1);
        if ( !(2 * v30) )
        {
LABEL_279:
          if ( !(2 * v239) )
            goto LABEL_280;
          goto LABEL_317;
        }
LABEL_316:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v228, v30, 1);
        if ( !(2 * v239) )
        {
LABEL_280:
          if ( !(2 * v240) )
            goto LABEL_281;
          goto LABEL_318;
        }
LABEL_317:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v229, v239, 1);
        if ( !(2 * v240) )
        {
LABEL_281:
          if ( !(2 * v241) )
            goto LABEL_282;
          goto LABEL_319;
        }
LABEL_318:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v231, v240, 1);
        if ( !(2 * v241) )
        {
LABEL_282:
          if ( !(2 * v244) )
            goto LABEL_283;
          goto LABEL_320;
        }
LABEL_319:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v232, v241, 1);
        if ( !(2 * v244) )
        {
LABEL_283:
          if ( !v29 )
            goto LABEL_285;
          goto LABEL_284;
        }
LABEL_320:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v235, v244, 1);
        if ( !v29 )
        {
LABEL_285:
          if ( v245 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v222.i64[0], v245, 1);
          goto LABEL_427;
        }
LABEL_284:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v236, v29, 1);
        goto LABEL_285;
      }
      v218 = v183.i64[1];
      v230 = v183.i64[0];
      v200 = _mm_loadu_si128((const __m128i *)&v183.u64[1]);
      *(_QWORD *)&v133[32] = 0;
      *(_QWORD *)&v132 = "generate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *((_QWORD *)&v132 + 1) = 21;
      *(_QWORD *)v133 = "asrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *(_QWORD *)&v133[8] = 11;
      *(_QWORD *)&v133[16] = v246;
      *(_QWORD *)&v133[24] = a2 + 520;
      _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h7d4626b3ed85f091(&v182, &v132);
      v219.i8[0] = (char)v182;
      if ( (_BYTE)v182 != 6 )
      {
        v86 = BYTE1(v182);
        v242 = *(_DWORD *)((char *)&v182 + 2);
        v243 = HIWORD(v182);
        v214 = _mm_loadu_si128(&v183);
        v220.i64[0] = v184;
        if ( 2 * v230 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v218, v230, 1);
          if ( !(2 * v233) )
          {
LABEL_299:
            if ( !(2 * v234) )
              goto LABEL_300;
            goto LABEL_340;
          }
        }
        else if ( !(2 * v233) )
        {
          goto LABEL_299;
        }
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v221, v233, 1);
        if ( !(2 * v234) )
        {
LABEL_300:
          if ( !(2 * v237) )
            goto LABEL_301;
          goto LABEL_341;
        }
LABEL_340:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v223, v234, 1);
        if ( !(2 * v237) )
        {
LABEL_301:
          if ( !(2 * v238) )
            goto LABEL_302;
          goto LABEL_342;
        }
LABEL_341:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v225, v237, 1);
        if ( !(2 * v238) )
        {
LABEL_302:
          if ( !(2 * v30) )
            goto LABEL_303;
          goto LABEL_343;
        }
LABEL_342:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v226, v238, 1);
        if ( !(2 * v30) )
        {
LABEL_303:
          if ( !(2 * v239) )
            goto LABEL_304;
          goto LABEL_344;
        }
LABEL_343:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v228, v30, 1);
        if ( !(2 * v239) )
        {
LABEL_304:
          if ( !(2 * v240) )
            goto LABEL_305;
          goto LABEL_345;
        }
LABEL_344:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v229, v239, 1);
        if ( !(2 * v240) )
        {
LABEL_305:
          if ( !(2 * v241) )
            goto LABEL_306;
          goto LABEL_346;
        }
LABEL_345:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v231, v240, 1);
        if ( !(2 * v241) )
        {
LABEL_306:
          if ( !(2 * v244) )
            goto LABEL_307;
          goto LABEL_347;
        }
LABEL_346:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v232, v241, 1);
        if ( !(2 * v244) )
        {
LABEL_307:
          if ( !v29 )
            goto LABEL_309;
          goto LABEL_308;
        }
LABEL_347:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v235, v244, 1);
        if ( !v29 )
        {
LABEL_309:
          if ( v245 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v222.i64[0], v245, 1);
          goto LABEL_427;
        }
LABEL_308:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v236, v29, 1);
        goto LABEL_309;
      }
      v217 = v183.i64[1];
      v227 = v183.i64[0];
      v178 = _mm_loadu_si128((const __m128i *)&v183.u64[1]);
      *(_QWORD *)&v133[32] = 0;
      *(_QWORD *)&v132 = "generate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *((_QWORD *)&v132 + 1) = 21;
      *(_QWORD *)v133 = "asrModeldiagnoserelaunchcategoryuserNotecurrencysentencemutationbytesRiddownloadregisterdeepLinkprotocolunlistenmaximizeminimizeset_iconset_sizereparentall branches are disabled and there is no else branch";
      *(_QWORD *)&v133[8] = 8;
      *(_QWORD *)&v133[16] = v246;
      *(_QWORD *)&v133[24] = a2 + 520;
      _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h7d4626b3ed85f091(&v182, &v132);
      v219.i8[0] = (char)v182;
      if ( (_BYTE)v182 != 6 )
      {
        v86 = BYTE1(v182);
        v242 = *(_DWORD *)((char *)&v182 + 2);
        v243 = HIWORD(v182);
        v214 = _mm_loadu_si128(&v183);
        v220.i64[0] = v184;
        if ( 2 * v227 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v217, v227, 1);
          if ( !(2 * v230) )
          {
LABEL_324:
            if ( !(2 * v233) )
              goto LABEL_325;
            goto LABEL_368;
          }
        }
        else if ( !(2 * v230) )
        {
          goto LABEL_324;
        }
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v218, v230, 1);
        if ( !(2 * v233) )
        {
LABEL_325:
          if ( !(2 * v234) )
            goto LABEL_326;
          goto LABEL_369;
        }
LABEL_368:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v221, v233, 1);
        if ( !(2 * v234) )
        {
LABEL_326:
          if ( !(2 * v237) )
            goto LABEL_327;
          goto LABEL_370;
        }
LABEL_369:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v223, v234, 1);
        if ( !(2 * v237) )
        {
LABEL_327:
          if ( !(2 * v238) )
            goto LABEL_328;
          goto LABEL_371;
        }
LABEL_370:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v225, v237, 1);
        if ( !(2 * v238) )
        {
LABEL_328:
          if ( !(2 * v30) )
            goto LABEL_329;
          goto LABEL_372;
        }
LABEL_371:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v226, v238, 1);
        if ( !(2 * v30) )
        {
LABEL_329:
          if ( !(2 * v239) )
            goto LABEL_330;
          goto LABEL_373;
        }
LABEL_372:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v228, v30, 1);
        if ( !(2 * v239) )
        {
LABEL_330:
          if ( !(2 * v240) )
            goto LABEL_331;
          goto LABEL_374;
        }
LABEL_373:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v229, v239, 1);
        if ( !(2 * v240) )
        {
LABEL_331:
          if ( !(2 * v241) )
            goto LABEL_332;
          goto LABEL_375;
        }
LABEL_374:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v231, v240, 1);
        if ( !(2 * v241) )
        {
LABEL_332:
          if ( !(2 * v244) )
            goto LABEL_333;
          goto LABEL_376;
        }
LABEL_375:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v232, v241, 1);
        if ( !(2 * v244) )
        {
LABEL_333:
          if ( !v29 )
            goto LABEL_335;
          goto LABEL_334;
        }
LABEL_376:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v235, v244, 1);
        if ( !v29 )
        {
LABEL_335:
          if ( v245 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v222.i64[0], v245, 1);
          goto LABEL_427;
        }
LABEL_334:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v236, v29, 1);
        goto LABEL_335;
      }
      v212 = v183.i64[1];
      v224 = v183.i64[0];
      v179 = _mm_loadu_si128((const __m128i *)&v183.u64[1]);
      *(_QWORD *)&v133[32] = 0;
      *(_QWORD *)&v132 = "generate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *((_QWORD *)&v132 + 1) = 21;
      *(_QWORD *)v133 = "asrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *(_QWORD *)&v133[8] = 11;
      *(_QWORD *)&v133[16] = v246;
      *(_QWORD *)&v133[24] = a2 + 520;
      _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h7d4626b3ed85f091(&v182, &v132);
      v219.i8[0] = (char)v182;
      if ( (_BYTE)v182 != 6 )
      {
        v86 = BYTE1(v182);
        v242 = *(_DWORD *)((char *)&v182 + 2);
        v243 = HIWORD(v182);
        v214 = _mm_loadu_si128(&v183);
        v220.i64[0] = v184;
        if ( 2 * v224 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v212, v224, 1);
          if ( !(2 * v227) )
          {
LABEL_351:
            if ( !(2 * v230) )
              goto LABEL_352;
            goto LABEL_398;
          }
        }
        else if ( !(2 * v227) )
        {
          goto LABEL_351;
        }
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v217, v227, 1);
        if ( !(2 * v230) )
        {
LABEL_352:
          if ( !(2 * v233) )
            goto LABEL_353;
          goto LABEL_399;
        }
LABEL_398:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v218, v230, 1);
        if ( !(2 * v233) )
        {
LABEL_353:
          if ( !(2 * v234) )
            goto LABEL_354;
          goto LABEL_400;
        }
LABEL_399:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v221, v233, 1);
        if ( !(2 * v234) )
        {
LABEL_354:
          if ( !(2 * v237) )
            goto LABEL_355;
          goto LABEL_401;
        }
LABEL_400:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v223, v234, 1);
        if ( !(2 * v237) )
        {
LABEL_355:
          if ( !(2 * v238) )
            goto LABEL_356;
          goto LABEL_402;
        }
LABEL_401:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v225, v237, 1);
        if ( !(2 * v238) )
        {
LABEL_356:
          if ( !(2 * v30) )
            goto LABEL_357;
          goto LABEL_403;
        }
LABEL_402:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v226, v238, 1);
        if ( !(2 * v30) )
        {
LABEL_357:
          if ( !(2 * v239) )
            goto LABEL_358;
          goto LABEL_404;
        }
LABEL_403:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v228, v30, 1);
        if ( !(2 * v239) )
        {
LABEL_358:
          if ( !(2 * v240) )
            goto LABEL_359;
          goto LABEL_405;
        }
LABEL_404:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v229, v239, 1);
        if ( !(2 * v240) )
        {
LABEL_359:
          if ( !(2 * v241) )
            goto LABEL_360;
          goto LABEL_406;
        }
LABEL_405:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v231, v240, 1);
        if ( !(2 * v241) )
        {
LABEL_360:
          if ( !(2 * v244) )
            goto LABEL_361;
          goto LABEL_407;
        }
LABEL_406:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v232, v241, 1);
        if ( !(2 * v244) )
        {
LABEL_361:
          if ( !v29 )
            goto LABEL_363;
          goto LABEL_362;
        }
LABEL_407:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v235, v244, 1);
        if ( !v29 )
        {
LABEL_363:
          if ( v245 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v222.i64[0], v245, 1);
          goto LABEL_427;
        }
LABEL_362:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v236, v29, 1);
        goto LABEL_363;
      }
      *(_QWORD *)&v206 = v183.i64[1];
      *(_QWORD *)&v211 = v183.i64[0];
      v180 = _mm_loadu_si128((const __m128i *)&v183.u64[1]);
      *(_QWORD *)&v133[32] = 0;
      *(_QWORD *)&v132 = "generate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *((_QWORD *)&v132 + 1) = 21;
      *(_QWORD *)v133 = "asrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *(_QWORD *)&v133[8] = 10;
      *(_QWORD *)&v133[16] = v246;
      *(_QWORD *)&v133[24] = a2 + 520;
      _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h7d4626b3ed85f091(&v182, &v132);
      v219.i8[0] = (char)v182;
      if ( (_BYTE)v182 != 6 )
      {
        v86 = BYTE1(v182);
        v242 = *(_DWORD *)((char *)&v182 + 2);
        v243 = HIWORD(v182);
        v214 = _mm_loadu_si128(&v183);
        v220.i64[0] = v184;
        if ( 2LL * (_QWORD)v211 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v206, v211, 1);
          if ( !(2 * v224) )
          {
LABEL_380:
            if ( !(2 * v227) )
              goto LABEL_381;
            goto LABEL_430;
          }
        }
        else if ( !(2 * v224) )
        {
          goto LABEL_380;
        }
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v212, v224, 1);
        if ( !(2 * v227) )
        {
LABEL_381:
          if ( !(2 * v230) )
            goto LABEL_382;
          goto LABEL_431;
        }
LABEL_430:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v217, v227, 1);
        if ( !(2 * v230) )
        {
LABEL_382:
          if ( !(2 * v233) )
            goto LABEL_383;
          goto LABEL_432;
        }
LABEL_431:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v218, v230, 1);
        if ( !(2 * v233) )
        {
LABEL_383:
          if ( !(2 * v234) )
            goto LABEL_384;
          goto LABEL_433;
        }
LABEL_432:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v221, v233, 1);
        if ( !(2 * v234) )
        {
LABEL_384:
          if ( !(2 * v237) )
            goto LABEL_385;
          goto LABEL_434;
        }
LABEL_433:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v223, v234, 1);
        if ( !(2 * v237) )
        {
LABEL_385:
          if ( !(2 * v238) )
            goto LABEL_386;
          goto LABEL_435;
        }
LABEL_434:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v225, v237, 1);
        if ( !(2 * v238) )
        {
LABEL_386:
          if ( !(2 * v30) )
            goto LABEL_387;
          goto LABEL_436;
        }
LABEL_435:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v226, v238, 1);
        if ( !(2 * v30) )
        {
LABEL_387:
          if ( !(2 * v239) )
            goto LABEL_388;
          goto LABEL_437;
        }
LABEL_436:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v228, v30, 1);
        if ( !(2 * v239) )
        {
LABEL_388:
          if ( !(2 * v240) )
            goto LABEL_389;
          goto LABEL_438;
        }
LABEL_437:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v229, v239, 1);
        if ( !(2 * v240) )
        {
LABEL_389:
          if ( !(2 * v241) )
            goto LABEL_390;
          goto LABEL_439;
        }
LABEL_438:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v231, v240, 1);
        if ( !(2 * v241) )
        {
LABEL_390:
          if ( !(2 * v244) )
            goto LABEL_391;
          goto LABEL_440;
        }
LABEL_439:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v232, v241, 1);
        if ( !(2 * v244) )
        {
LABEL_391:
          if ( !v29 )
            goto LABEL_393;
          goto LABEL_392;
        }
LABEL_440:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v235, v244, 1);
        if ( !v29 )
        {
LABEL_393:
          if ( v245 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v222.i64[0], v245, 1);
          goto LABEL_427;
        }
LABEL_392:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v236, v29, 1);
        goto LABEL_393;
      }
      *(_QWORD *)&v201 = v183.i64[1];
      *(_QWORD *)&v210 = v183.i64[0];
      v181 = _mm_loadu_si128((const __m128i *)&v183.u64[1]);
      *(_QWORD *)&v133[32] = 0;
      *(_QWORD *)&v132 = "generate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *((_QWORD *)&v132 + 1) = 21;
      *(_QWORD *)v133 = "asrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *(_QWORD *)&v133[8] = 13;
      *(_QWORD *)&v133[16] = v246;
      *(_QWORD *)&v133[24] = a2 + 520;
      _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h2055dc4899fbef3a(&v182, &v132);
      v219.i8[0] = (char)v182;
      if ( (_BYTE)v182 != 6 )
      {
        v86 = BYTE1(v182);
        v242 = *(_DWORD *)((char *)&v182 + 2);
        v243 = HIWORD(v182);
        v214 = _mm_loadu_si128(&v183);
        v220.i64[0] = v184;
        if ( 2LL * (_QWORD)v210 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v201, v210, 1);
          if ( !(2LL * (_QWORD)v211) )
          {
LABEL_411:
            if ( !(2 * v224) )
              goto LABEL_412;
            goto LABEL_474;
          }
        }
        else if ( !(2LL * (_QWORD)v211) )
        {
          goto LABEL_411;
        }
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v206, v211, 1);
        if ( !(2 * v224) )
        {
LABEL_412:
          if ( !(2 * v227) )
            goto LABEL_413;
          goto LABEL_475;
        }
LABEL_474:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v212, v224, 1);
        if ( !(2 * v227) )
        {
LABEL_413:
          if ( !(2 * v230) )
            goto LABEL_414;
          goto LABEL_476;
        }
LABEL_475:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v217, v227, 1);
        if ( !(2 * v230) )
        {
LABEL_414:
          if ( !(2 * v233) )
            goto LABEL_415;
          goto LABEL_477;
        }
LABEL_476:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v218, v230, 1);
        if ( !(2 * v233) )
        {
LABEL_415:
          if ( !(2 * v234) )
            goto LABEL_416;
          goto LABEL_478;
        }
LABEL_477:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v221, v233, 1);
        if ( !(2 * v234) )
        {
LABEL_416:
          if ( !(2 * v237) )
            goto LABEL_417;
          goto LABEL_479;
        }
LABEL_478:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v223, v234, 1);
        if ( !(2 * v237) )
        {
LABEL_417:
          if ( !(2 * v238) )
            goto LABEL_418;
          goto LABEL_480;
        }
LABEL_479:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v225, v237, 1);
        if ( !(2 * v238) )
        {
LABEL_418:
          if ( !(2 * v30) )
            goto LABEL_419;
          goto LABEL_481;
        }
LABEL_480:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v226, v238, 1);
        if ( !(2 * v30) )
        {
LABEL_419:
          if ( !(2 * v239) )
            goto LABEL_420;
          goto LABEL_482;
        }
LABEL_481:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v228, v30, 1);
        if ( !(2 * v239) )
        {
LABEL_420:
          if ( !(2 * v240) )
            goto LABEL_421;
          goto LABEL_483;
        }
LABEL_482:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v229, v239, 1);
        if ( !(2 * v240) )
        {
LABEL_421:
          if ( !(2 * v241) )
            goto LABEL_422;
          goto LABEL_484;
        }
LABEL_483:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v231, v240, 1);
        if ( !(2 * v241) )
        {
LABEL_422:
          if ( !(2 * v244) )
            goto LABEL_423;
          goto LABEL_485;
        }
LABEL_484:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v232, v241, 1);
        if ( !(2 * v244) )
        {
LABEL_423:
          if ( !v29 )
            goto LABEL_425;
          goto LABEL_424;
        }
LABEL_485:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v235, v244, 1);
        if ( !v29 )
        {
LABEL_425:
          if ( v245 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v222.i64[0], v245, 1);
LABEL_427:
          core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(__src);
          v6 = v86;
          v5 = v219.i8[0];
          goto LABEL_463;
        }
LABEL_424:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v236, v29, 1);
        goto LABEL_425;
      }
      v219 = _mm_loadu_si128(&v183);
      *(_QWORD *)&v133[32] = 0;
      *(_QWORD *)&v132 = "generate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *((_QWORD *)&v132 + 1) = 21;
      *(_QWORD *)v133 = "asrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
      *(_QWORD *)&v133[8] = 12;
      *(_QWORD *)&v133[16] = v246;
      *(_QWORD *)&v133[24] = a2 + 520;
      _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h7d4626b3ed85f091(&v182, &v132);
      if ( (_BYTE)v182 != 6 )
      {
        v113 = (char)v182;
        v114 = BYTE1(v182);
        v242 = *(_DWORD *)((char *)&v182 + 2);
        v243 = HIWORD(v182);
        v214 = _mm_loadu_si128(&v183);
        v220.i64[0] = v184;
        if ( 2LL * (_QWORD)v210 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v201, v210, 1);
          if ( !(2LL * (_QWORD)v211) )
          {
LABEL_446:
            if ( !(2 * v224) )
              goto LABEL_447;
            goto LABEL_492;
          }
        }
        else if ( !(2LL * (_QWORD)v211) )
        {
          goto LABEL_446;
        }
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v206, v211, 1);
        if ( !(2 * v224) )
        {
LABEL_447:
          if ( !(2 * v227) )
            goto LABEL_448;
          goto LABEL_493;
        }
LABEL_492:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v212, v224, 1);
        if ( !(2 * v227) )
        {
LABEL_448:
          if ( !(2 * v230) )
            goto LABEL_449;
          goto LABEL_494;
        }
LABEL_493:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v217, v227, 1);
        if ( !(2 * v230) )
        {
LABEL_449:
          if ( !(2 * v233) )
            goto LABEL_450;
          goto LABEL_495;
        }
LABEL_494:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v218, v230, 1);
        if ( !(2 * v233) )
        {
LABEL_450:
          if ( !(2 * v234) )
            goto LABEL_451;
          goto LABEL_496;
        }
LABEL_495:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v221, v233, 1);
        if ( !(2 * v234) )
        {
LABEL_451:
          if ( !(2 * v237) )
            goto LABEL_452;
          goto LABEL_497;
        }
LABEL_496:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v223, v234, 1);
        if ( !(2 * v237) )
        {
LABEL_452:
          if ( !(2 * v238) )
            goto LABEL_453;
          goto LABEL_498;
        }
LABEL_497:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v225, v237, 1);
        if ( !(2 * v238) )
        {
LABEL_453:
          if ( !(2 * v30) )
            goto LABEL_454;
          goto LABEL_499;
        }
LABEL_498:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v226, v238, 1);
        if ( !(2 * v30) )
        {
LABEL_454:
          if ( !(2 * v239) )
            goto LABEL_455;
          goto LABEL_500;
        }
LABEL_499:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v228, v30, 1);
        if ( !(2 * v239) )
        {
LABEL_455:
          if ( !(2 * v240) )
            goto LABEL_456;
          goto LABEL_501;
        }
LABEL_500:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v229, v239, 1);
        if ( !(2 * v240) )
        {
LABEL_456:
          if ( !(2 * v241) )
            goto LABEL_457;
          goto LABEL_502;
        }
LABEL_501:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v231, v240, 1);
        if ( !(2 * v241) )
        {
LABEL_457:
          if ( !(2 * v244) )
            goto LABEL_458;
          goto LABEL_503;
        }
LABEL_502:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v232, v241, 1);
        if ( !(2 * v244) )
        {
LABEL_458:
          if ( !v29 )
          {
LABEL_460:
            if ( v245 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v222.i64[0], v245, 1);
            core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(__src);
            v6 = v114;
            v5 = v113;
            goto LABEL_463;
          }
LABEL_459:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v236, v29, 1);
          goto LABEL_460;
        }
LABEL_503:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v235, v244, 1);
        if ( !v29 )
          goto LABEL_460;
        goto LABEL_459;
      }
      v31 = v184;
      v32 = v246;
      v236 = (void *)(v246 + 544);
      v222 = v183;
      memcpy((void *)(v246 + 560), __src, 0x98u);
      *(_QWORD *)(v32 + 1120) = v27;
      *(_QWORD *)(v32 + 712) = v245;
      *(__m128i *)(v32 + 720) = v220;
      *(_QWORD *)(v32 + 736) = v29;
      *(__m128i *)(v32 + 744) = v205;
      *(_QWORD *)(v32 + 760) = v244;
      *(__m128i *)(v32 + 768) = v187;
      *(_QWORD *)(v32 + 784) = v241;
      *(__m128i *)(v32 + 792) = v188;
      *(_QWORD *)(v32 + 808) = v240;
      *(__m128i *)(v32 + 816) = v189;
      *(_QWORD *)(v32 + 832) = v239;
      *(__m128i *)(v32 + 840) = v190;
      *(_QWORD *)(v32 + 856) = v30;
      *(__m128i *)(v32 + 864) = v191;
      *(_QWORD *)(v32 + 880) = v238;
      *(__m128i *)(v32 + 888) = v192;
      *(_BYTE *)(v32 + 1145) = (_BYTE)v213;
      *(_QWORD *)(v32 + 904) = v237;
      *(__m128i *)(v32 + 912) = v197;
      *(_QWORD *)(v32 + 928) = v234;
      *(__m128i *)(v32 + 936) = v198;
      *(_QWORD *)(v32 + 952) = v233;
      *(__m128i *)(v32 + 960) = v199;
      *(_QWORD *)(v32 + 976) = v230;
      *(__m128i *)(v32 + 984) = v200;
      *(_QWORD *)(v32 + 1000) = v227;
      *(__m128i *)(v32 + 1008) = v178;
      *(_QWORD *)(v32 + 1024) = v224;
      *(__m128i *)(v32 + 1032) = v179;
      *(_QWORD *)(v32 + 1048) = v211;
      *(__m128i *)(v32 + 1056) = v180;
      *(_QWORD *)(v32 + 1072) = v210;
      *(__m128i *)(v32 + 1080) = v181;
      *(__m128i *)(v32 + 544) = v219;
      *(__m128i *)(v32 + 1096) = _mm_load_si128(&v222);
      *(_QWORD *)(v32 + 1112) = v31;
      *(_BYTE *)(v32 + 1144) = 0;
      v8 = (const void *)(v32 + 1168);
      memcpy((void *)(v32 + 1168), v236, 0x270u);
      v222.i64[0] = v32 + 2416;
      *(_BYTE *)(v32 + 2416) = 0;
LABEL_5:
      v9 = v246;
      v236 = (void *)(v246 + 1792);
      memcpy((void *)(v246 + 1792), v8, 0x270u);
      switch ( *(_BYTE *)(v9 + 2392) )
      {
        case 0:
          v220.i64[0] = 0x7FFFFFFFFFFFFFFFLL;
          *(_BYTE *)(v9 + 2411) = 1;
          memcpy(__dst, (const void *)(v9 + 1808), sizeof(__dst));
          v10 = *(__int64 **)(v9 + 2368);
          *(_QWORD *)(v9 + 2376) = v10;
          *(_BYTE *)(v9 + 2410) = 1;
          v241 = *(_QWORD *)(v9 + 1960);
          v187.i64[0] = *(_QWORD *)(v9 + 1968);
          v224 = *(_QWORD *)(v9 + 1984);
          v178 = *(__m128i *)(v9 + 1976);
          v232 = *(_QWORD *)(v9 + 1992);
          v212 = *(_QWORD *)(v9 + 2000);
          v244 = *(_QWORD *)(v9 + 2008);
          v240 = *(_QWORD *)(v9 + 2016);
          v197.i64[0] = *(_QWORD *)(v9 + 2032);
          v211 = *(_OWORD *)(v9 + 2024);
          v188.i64[0] = *(_QWORD *)(v9 + 2040);
          v223 = *(_QWORD *)(v9 + 2056);
          v179 = *(__m128i *)(v9 + 2048);
          v231 = *(_QWORD *)(v9 + 2064);
          v233 = *(_QWORD *)(v9 + 2080);
          v206 = *(_OWORD *)(v9 + 2072);
          v180 = *(__m128i *)(v9 + 2096);
          v210 = *(_OWORD *)(v9 + 2120);
          v127 = *(_OWORD *)(v9 + 2168);
          v128 = *(_OWORD *)(v9 + 2216);
          v201 = *(_OWORD *)(v9 + 2264);
          v181 = *(__m128i *)(v9 + 2288);
          v124 = *(_OWORD *)(v9 + 2312);
          v125 = *(_OWORD *)(v9 + 1792);
          v216 = *(_BYTE *)(v9 + 2393);
          v239 = *(_QWORD *)(v9 + 2088);
          v198.i64[0] = *(_QWORD *)(v9 + 2104);
          v189.i64[0] = *(_QWORD *)(v9 + 2112);
          v221 = *(_QWORD *)(v9 + 2128);
          v229 = *(_QWORD *)(v9 + 2136);
          v174 = *(_QWORD *)(v9 + 2144);
          v205.i64[0] = *(_QWORD *)(v9 + 2152);
          v190.i64[0] = *(_QWORD *)(v9 + 2160);
          v230 = *(_QWORD *)(v9 + 2176);
          v228 = *(_QWORD *)(v9 + 2184);
          v176 = *(_QWORD *)(v9 + 2192);
          v219.i64[0] = *(_QWORD *)(v9 + 2200);
          v238 = *(_QWORD *)(v9 + 2208);
          v199.i64[0] = *(_QWORD *)(v9 + 2224);
          v191.i64[0] = *(_QWORD *)(v9 + 2232);
          v177 = *(_QWORD *)(v9 + 2240);
          v235 = *(_QWORD *)(v9 + 2248);
          v226 = *(_QWORD *)(v9 + 2256);
          v218 = *(_QWORD *)(v9 + 2272);
          v192.i64[0] = *(_QWORD *)(v9 + 2280);
          v227 = *(_QWORD *)(v9 + 2296);
          v237 = *(_QWORD *)(v9 + 2304);
          v200.i64[0] = *(_QWORD *)(v9 + 2320);
          v225 = *(_QWORD *)(v9 + 2328);
          *(_OWORD *)(v9 + 2394) = xmmword_1015DA050;
          v126 = _mm_loadu_si128((const __m128i *)(v9 + 2336));
          v217 = *(_QWORD *)(v9 + 2344);
          v234 = *(_QWORD *)(v9 + 2352);
          v175 = *(_QWORD *)(v9 + 2360);
          v11 = *v10;
          if ( !*v10 )
            v11 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v10);
          std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v11);
          v14 = v220.i64[0];
          if ( (v220.i64[0] & std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) != 0 )
          {
            v15 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v11, v9 + 1808, v12, v13) ^ 1;
            v14 = v220.i64[0];
            if ( !*((_BYTE *)v10 + 8) )
              goto LABEL_16;
          }
          else
          {
            v15 = 0;
            if ( !*((_BYTE *)v10 + 8) )
              goto LABEL_16;
          }
          v122[0] = 0;
          v122[1] = 1;
          v122[2] = 0;
          *(_QWORD *)v133 = 1610612768;
          *(_QWORD *)&v132 = v122;
          *((_QWORD *)&v132 + 1) = &off_101952F18;
          if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                                  "poisoned lock: another task failed inside",
                                  41,
                                  &v132) )
            core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, &v215, &unk_101952FE0, &off_101952F48);
          v245 = (_QWORD *)v122[0];
          v213 = (void *)v122[1];
          v18 = v122[2];
          v19 = HIBYTE(v122[2]);
          v20 = *(unsigned __int16 *)((char *)&v122[2] + 5);
          v21 = v15;
          v22 = *(unsigned int *)((char *)&v122[2] + 1);
          if ( !v21
            && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v220.i64[0]) != 0
            && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                   "poisoned lock: another task failed inside",
                                   41,
                                   v16,
                                   v17) )
          {
            *((_BYTE *)v10 + 8) = 1;
          }
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v10);
          if ( v245 != (_QWORD *)(v220.i64[0] + 1) )
          {
            v36 = ((unsigned __int64)((v19 << 16) | v20) << 32) | v22;
            goto LABEL_55;
          }
          v10 = (__int64 *)v213;
          v15 = v18;
          v14 = v220.i64[0];
LABEL_16:
          _$LT$codexmate_lib..platform..paths..CodexPaths$u20$as$u20$core..clone..Clone$GT$::clone::hf6c0d3e83be86178(
            __src,
            v10 + 2);
          if ( (v15 & 1) == 0
            && (v14 & std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) != 0
            && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                   __src,
                                   v10 + 2,
                                   v23,
                                   v24) )
          {
            *((_BYTE *)v10 + 8) = 1;
          }
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v10);
          v25 = v246;
          v26 = (_QWORD *)(v246 + 2394);
          *(_WORD *)(v246 + 2410) = 0;
          v26[1] = 0;
          *v26 = 0;
          v139 = v219.i64[0];
          v140 = v238;
          v141 = v128;
          v142 = v191.i64[0];
          v143 = v177;
          v144 = v205.i64[0];
          v145 = v190.i64[0];
          v146 = v127;
          v147 = v228;
          v148 = v176;
          memcpy(v133, __dst, 0x98u);
          memcpy(&v133[152], __src, 0x2E8u);
          v134 = v241;
          v135 = v187.i64[0];
          v136 = v178;
          v137 = v232;
          v138 = v212;
          v149 = v244;
          v150 = v240;
          v151 = v211;
          v152 = v188.i64[0];
          v153 = v179;
          v154 = v231;
          v155 = v206;
          v156 = v239;
          v157 = v180;
          v158 = v189.i64[0];
          v159 = v210;
          v160 = v229;
          v161 = v174;
          v173 = v216;
          v162 = v235;
          v163 = v226;
          v164 = v201;
          v165 = v192.i64[0];
          v166 = v181;
          v167 = v237;
          v168 = v124;
          v169 = v225;
          v132 = v125;
          v170 = _mm_load_si128(&v126);
          v171 = v234;
          v172 = v175;
          *(_QWORD *)(v25 + 2384) = tauri::async_runtime::spawn_blocking::h729f53ad27a69d06(&v132);
          v33 = (_QWORD *)(v25 + 2384);
          _$LT$tokio..runtime..task..join..JoinHandle$LT$T$GT$$u20$as$u20$core..future..future..Future$GT$::poll::h27ac60658becd5a2(&v132);
          v34 = v132;
          if ( (_QWORD)v132 == 4 )
          {
            v37 = v246;
            *(_BYTE *)(v246 + 2392) = 3;
            *(_BYTE *)(v37 + 2416) = 3;
            goto LABEL_126;
          }
          v220.i64[0] = v14;
          if ( (_DWORD)v132 == 3 )
          {
            v213 = *((void **)&v132 + 1);
            v35 = v133[0];
            v36 = ((unsigned __int64)((v133[7] << 16) | (unsigned int)*(unsigned __int16 *)&v133[5]) << 32)
                | *(unsigned int *)&v133[1];
            v214.i64[0] = *(_QWORD *)&v133[8];
            v245 = (_QWORD *)(v14 + 13);
          }
          else
          {
            v245 = *((_QWORD **)&v132 + 1);
            v213 = *(void **)v133;
            v35 = v133[8];
            v36 = ((unsigned __int64)((v133[15] << 16) | (unsigned int)*(unsigned __int16 *)&v133[13]) << 32)
                | *(unsigned int *)&v133[9];
            v214.i64[0] = *(_QWORD *)&v133[16];
            memcpy(v122, &v133[24], sizeof(v122));
          }
          memcpy(v119, v122, sizeof(v119));
          v38 = *v33;
          v39 = tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(*v33);
          v18 = v35;
          if ( v39 )
            tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v38);
          if ( (_DWORD)v34 != 3 )
          {
            v43 = v119;
            memcpy(v120, v119, sizeof(v120));
            v44 = v246;
            *(_WORD *)(v246 + 2410) = 0;
            *(_QWORD *)(v44 + 2402) = 0;
            *(_QWORD *)(v44 + 2394) = 0;
            v45 = v220.i64[0];
            goto LABEL_107;
          }
          *(_QWORD *)&v132 = v245;
          *((_QWORD *)&v132 + 1) = v213;
          v133[0] = v35;
          *(_DWORD *)&v133[1] = v36;
          v133[7] = BYTE6(v36);
          *(_WORD *)&v133[5] = WORD2(v36);
          *(_QWORD *)&v133[8] = v214.i64[0];
          *(_QWORD *)&v133[16] = v119[0];
          *(_QWORD *)&v133[24] = v119[1];
          v202 = nullptr;
          v203 = 1;
          v204 = 0;
          v122[2] = 1610612768;
          v122[0] = &v202;
          v122[1] = &off_101952F18;
          if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80(
                                  &v132,
                                  v122) )
            core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, &v215, &unk_101952FE0, &off_101952F48);
          v245 = v202;
          v213 = (void *)v203;
          v18 = v204;
          v40 = HIBYTE(v204);
          v41 = *(unsigned __int16 *)((char *)&v204 + 5);
          v42 = *(unsigned int *)((char *)&v204 + 1);
          core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(&v132);
          v36 = ((unsigned __int64)((v40 << 16) | v41) << 32) | v42;
LABEL_55:
          v46 = (_QWORD *)v241;
          v45 = v220.i64[0];
          if ( *(_BYTE *)(v246 + 2394) == 1 && (v220.i64[0] & v217) != 0 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v234, v217, 1);
          v47 = v246;
          *(_BYTE *)(v246 + 2394) = 0;
          if ( *(_BYTE *)(v47 + 2395) == 1 && (v45 & v200.i64[0]) != 0 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v225, v200.i64[0], 1);
          v48 = v246;
          *(_BYTE *)(v246 + 2395) = 0;
          if ( *(_BYTE *)(v48 + 2396) == 1 && (v45 & v227) != 0 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v237, v227, 1);
          v49 = v246;
          *(_BYTE *)(v246 + 2396) = 0;
          if ( *(_BYTE *)(v49 + 2397) == 1 && (v45 & v218) != 0 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v192.i64[0], v218, 1);
          v50 = v246;
          *(_BYTE *)(v246 + 2397) = 0;
          if ( *(_BYTE *)(v50 + 2398) == 1 && (v45 & v235) != 0 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v226, v235, 1);
          v51 = v246;
          *(_BYTE *)(v246 + 2398) = 0;
          if ( *(_BYTE *)(v51 + 2399) == 1 && (v45 & v199.i64[0]) != 0 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v191.i64[0], v199.i64[0], 1);
          v52 = v246;
          *(_BYTE *)(v246 + 2399) = 0;
          if ( *(_BYTE *)(v52 + 2400) == 1 && (v45 & v219.i64[0]) != 0 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v238, v219.i64[0], 1);
          v53 = v246;
          *(_BYTE *)(v246 + 2400) = 0;
          if ( *(_BYTE *)(v53 + 2401) == 1 && (v45 & v230) != 0 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v228, v230, 1);
          v54 = v246;
          *(_BYTE *)(v246 + 2401) = 0;
          if ( *(_BYTE *)(v54 + 2402) == 1 && (v45 & v205.i64[0]) != 0 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v190.i64[0], v205.i64[0], 1);
          v55 = v246;
          *(_BYTE *)(v246 + 2402) = 0;
          if ( *(_BYTE *)(v55 + 2403) == 1 && (v45 & v221) != 0 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v229, v221, 1);
          v56 = v246;
          *(_BYTE *)(v246 + 2403) = 0;
          if ( *(_BYTE *)(v56 + 2404) == 1 && (v45 & v198.i64[0]) != 0 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v189.i64[0], v198.i64[0], 1);
          v57 = v246;
          *(_BYTE *)(v246 + 2404) = 0;
          if ( *(_BYTE *)(v57 + 2405) == 1 && (v45 & v233) != 0 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v239, v233, 1);
          v58 = v246;
          *(_BYTE *)(v246 + 2405) = 0;
          if ( *(_BYTE *)(v58 + 2406) == 1 && (v45 & v223) != 0 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v231, v223, 1);
          v59 = v246;
          *(_BYTE *)(v246 + 2406) = 0;
          if ( *(_BYTE *)(v59 + 2407) == 1 && (v45 & v197.i64[0]) != 0 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v188.i64[0], v197.i64[0], 1);
          v60 = v246;
          *(_BYTE *)(v246 + 2407) = 0;
          if ( *(_BYTE *)(v60 + 2408) == 1 && (v45 & v244) != 0 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v240, v244, 1);
          v61 = v246;
          *(_BYTE *)(v246 + 2408) = 0;
          v43 = (_QWORD *)v224;
          if ( ((v224 != 0) & *(_BYTE *)(v61 + 2409)) != 0 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v232, v224, 1);
          v62 = v246;
          *(_BYTE *)(v246 + 2409) = 0;
          if ( ((v46 != nullptr) & *(_BYTE *)(v62 + 2410)) != 0 )
          {
            v43 = v46;
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v187.i64[0], v46, 1);
          }
          v63 = v246;
          *(_BYTE *)(v246 + 2410) = 0;
          if ( *(_BYTE *)(v63 + 2411) )
            core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(__dst);
          v44 = v246;
          *(_BYTE *)(v246 + 2411) = 0;
          v34 = 2;
LABEL_107:
          *(_BYTE *)(v44 + 2392) = 1;
          v64 = v236;
          core::ptr::drop_in_place$LT$codexmate_lib..commands..voice..generate_voice_prompt..$u7b$$u7b$closure$u7d$$u7d$$GT$::hd689a2c4c30eac29(v236);
          v65 = v36 << 8;
          if ( (_DWORD)v34 == 2 )
          {
            v66 = v65 | v18;
            if ( v65 < 0 )
            {
              v67 = 0;
              goto LABEL_110;
            }
            if ( v66 )
            {
              v69 = v45;
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v64, v43);
              v67 = 1;
              v70 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v66, 1);
              if ( !v70 )
LABEL_110:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v67, v66);
              v71 = v70;
              v45 = v69;
            }
            else
            {
              v71 = 1;
            }
            v76 = v213;
            memcpy((void *)v71, v213, v66);
            if ( v245 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v76, v245, 1);
            v220.i64[0] = v45;
            LOBYTE(v194) = 3;
            v195.i64[0] = v66;
            v195.i64[1] = v71;
            v196 = v66;
            v68 = 1;
          }
          else
          {
            memcpy(v186, v120, sizeof(v186));
            v182 = (char *)v34;
            v183.i64[0] = (__int64)v245;
            v183.i64[1] = (__int64)v213;
            v184 = v65 | v18;
            v185 = v214.i64[0];
            _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::h0aff96cd73011265(&v132, &v182);
            *(_QWORD *)__src = *((_QWORD *)&v132 + 1);
            *(_OWORD *)&__src[8] = *(_OWORD *)v133;
            *(_QWORD *)&__src[24] = *(_QWORD *)&v133[16];
            v220.i64[0] = v45;
            if ( (_QWORD)v132 == v45 + 38 )
            {
              v194 = *(_QWORD *)__src;
              v195 = *(__m128i *)&__src[8];
              v196 = *(_QWORD *)&__src[24];
              v68 = 0;
            }
            else
            {
              v129[0] = v132;
              v129[1] = *(_QWORD *)__src;
              v129[2] = *(_QWORD *)&__src[8];
              v130 = *(_OWORD *)&__src[16];
              v131 = *(_QWORD *)&v133[24];
              _$LT$core..result..Result$LT$T$C$F$GT$$u20$as$u20$core..ops..try_trait..FromResidual$LT$core..result..Result$LT$core..convert..Infallible$C$E$GT$$GT$$GT$::from_residual::hb033d94ed20710ab(
                &v193,
                v129);
              v68 = v193;
            }
          }
          v77 = v194;
          v6 = BYTE1(v194);
          v208 = *(_DWORD *)((char *)&v194 + 2);
          v209 = HIWORD(v194);
          v214 = _mm_loadu_si128(&v195);
          v78 = v196;
          *(_BYTE *)v222.i64[0] = 1;
          if ( v68 != 2 )
          {
            v243 = v209;
            v242 = v208;
            v80 = (_QWORD *)v246;
            core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(v246);
            if ( v80[65] == v220.i64[0] + 1 )
            {
              v81 = v78;
LABEL_470:
              v118 = v207;
              *v207 = v68;
              *((_BYTE *)v118 + 8) = v77;
              *((_BYTE *)v118 + 9) = v6;
              *(_DWORD *)((char *)v118 + 10) = v242;
              *((_WORD *)v118 + 7) = v243;
              *((__m128i *)v118 + 1) = _mm_load_si128(&v214);
              v118[4] = v81;
              result = 1;
              goto LABEL_471;
            }
            LOBYTE(v213) = v6;
            v245 = v80 + 66;
            v82 = v80[66];
            v83 = v80[67] + 1LL;
            v81 = v78;
            while ( v83 != 1 )
            {
              --v83;
              core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v82);
              v82 += 96;
            }
            v84 = *(_QWORD *)(v246 + 520);
            v6 = (char)v213;
            if ( !v84 )
              goto LABEL_470;
LABEL_469:
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v245, 96 * v84, 8);
            goto LABEL_470;
          }
LABEL_126:
          *v207 = 2;
          result = 3;
LABEL_471:
          *(_BYTE *)(v246 + 2424) = result;
          return result;
        case 1:
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101952900);
      }
    case 1LL:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019522D0);
    case 2LL:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019522D0);
    case 3LL:
      v222.i64[0] = a2 + 2416;
      v8 = (const void *)(a2 + 1168);
      switch ( *(_BYTE *)(a2 + 2416) )
      {
        case 0:
          goto LABEL_5;
        case 1:
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101953108);
        case 2:
          JUMPOUT(0x1000D40CFLL);
        case 3:
          JUMPOUT(0x1000CFA8CLL);
      }
      goto LABEL_5;
  }
}
