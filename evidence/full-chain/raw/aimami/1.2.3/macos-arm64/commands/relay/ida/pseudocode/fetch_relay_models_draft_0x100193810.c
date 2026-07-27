char __fastcall tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized_inner::_$u7b$$u7b$closure$u7d$$u7d$::ha9461499adcb7382(
        char *__src,
        char *a2)
{
  char *v3; // r14
  char **v4; // r12
  __int64 v5; // r14
  char v6; // r15
  __int64 v7; // rax
  __int64 v8; // rdi
  char *v9; // r12
  char *v10; // r14
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rcx
  _QWORD *v14; // rax
  char *v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // r14
  __int64 v18; // rcx
  size_t v19; // r8
  bool v20; // zf
  _QWORD *v21; // rcx
  _QWORD *v22; // r12
  char *v23; // rsi
  char *v24; // rsi
  __int64 v25; // r14
  __int64 *v26; // rsi
  __int64 v27; // rax
  const void *v28; // r12
  signed __int64 v29; // r15
  __int64 v30; // rcx
  __int64 v31; // r13
  __int64 v32; // rax
  __int64 v33; // rcx
  __int64 v34; // rsi
  __int64 v35; // rdx
  __int64 v36; // r14
  __int64 v37; // r15
  char v38; // di
  char v39; // r12
  __int64 *v40; // rdi
  _QWORD *v41; // rsi
  __int64 v42; // rax
  __int64 v43; // rcx
  __int64 v44; // rcx
  char v45; // of
  __int64 v46; // rt0
  __int64 *v47; // rax
  __int64 v48; // r13
  __int64 v49; // rax
  __int64 v50; // r14
  __int64 v51; // rdi
  __int64 i; // r13
  char *v53; // rax
  char v54; // of
  __int64 v55; // rt0
  volatile signed __int64 **v56; // r14
  unsigned __int64 v57; // rsi
  size_t v58; // rdx
  __int64 v59; // rax
  __int64 v60; // rax
  __int64 v61; // rdi
  __int64 j; // r12
  __int64 v63; // rsi
  char *v64; // rax
  char v65; // cl
  char result; // al
  unsigned int v67; // eax
  __int64 v68; // r15
  __int64 v69; // r12
  volatile signed __int64 *v70; // r14
  bool v71; // of
  __int64 v72; // rax
  volatile signed __int64 *v73; // r14
  bool v74; // of
  __int64 v75; // rax
  __int64 v76; // rt0
  unsigned __int64 v77; // r15
  __int64 v78; // r13
  __int64 v79; // rt0
  unsigned __int64 v80; // r15
  __int64 v81; // r13
  void *v82; // rsi
  __int64 v83; // r12
  __int64 *v84; // r13
  __int64 v85; // rax
  __int64 v86; // rax
  __int64 v87; // rcx
  __int64 v88; // rdx
  __int64 v89; // r15
  char *v90; // r12
  char *v91; // r12
  __int64 v92; // r13
  char v93; // r15
  void *v94; // rsi
  __int64 v95; // r12
  __int64 *v96; // r13
  __int64 v97; // rax
  __int64 v98; // rax
  __int64 v99; // rcx
  char *v100; // r12
  __int64 v101; // rdx
  __int64 v102; // r15
  char *v103; // r12
  __int64 v104; // rcx
  int v105; // eax
  __int64 v106; // rdx
  _QWORD *v107; // r14
  __int64 v108; // rcx
  int v109; // eax
  __int64 v110; // rdx
  _QWORD *v111; // r14
  __int64 v112; // r14
  void *v113; // rax
  __int64 v114; // r15
  _QWORD *v115; // r14
  __int64 v116; // r15
  _QWORD *v117; // r14
  __int64 v118; // rsi
  __int64 v119; // r14
  __int64 v120; // rsi
  __int64 v121; // rsi
  char *v122; // rsi
  __int64 v123; // rsi
  char *v124; // rsi
  char v125; // al
  char v126; // al
  char v127; // al
  _BYTE v128[104]; // [rsp+8h] [rbp-A88h] BYREF
  _QWORD v129[11]; // [rsp+70h] [rbp-A20h] BYREF
  _QWORD v130[15]; // [rsp+C8h] [rbp-9C8h] BYREF
  _QWORD v131[16]; // [rsp+140h] [rbp-950h] BYREF
  __int16 v132; // [rsp+1C0h] [rbp-8D0h]
  _BYTE v133[102]; // [rsp+1C2h] [rbp-8CEh] BYREF
  __int64 v134; // [rsp+228h] [rbp-868h]
  __int64 v135; // [rsp+230h] [rbp-860h]
  __int64 v136; // [rsp+238h] [rbp-858h]
  char v137; // [rsp+240h] [rbp-850h]
  __int64 v138; // [rsp+248h] [rbp-848h] BYREF
  __int64 v139; // [rsp+250h] [rbp-840h]
  __int64 v140; // [rsp+258h] [rbp-838h]
  __int64 v141; // [rsp+270h] [rbp-820h]
  __int64 v142; // [rsp+288h] [rbp-808h]
  __int64 v143; // [rsp+290h] [rbp-800h]
  __int64 v144; // [rsp+298h] [rbp-7F8h]
  __int64 v145; // [rsp+2A0h] [rbp-7F0h]
  __int64 v146; // [rsp+2A8h] [rbp-7E8h]
  __int64 v147; // [rsp+2B0h] [rbp-7E0h]
  __int64 v148; // [rsp+2B8h] [rbp-7D8h]
  __int64 v149; // [rsp+2C0h] [rbp-7D0h]
  __int16 v150; // [rsp+2C8h] [rbp-7C8h]
  _BYTE v151[102]; // [rsp+2CAh] [rbp-7C6h] BYREF
  __int64 v152; // [rsp+330h] [rbp-760h]
  __int64 v153; // [rsp+338h] [rbp-758h]
  __int64 v154; // [rsp+340h] [rbp-750h]
  char v155; // [rsp+348h] [rbp-748h]
  char *v156; // [rsp+358h] [rbp-738h] BYREF
  __int64 v157; // [rsp+360h] [rbp-730h]
  signed __int64 v158; // [rsp+368h] [rbp-728h]
  _QWORD v159[13]; // [rsp+468h] [rbp-628h] BYREF
  _QWORD v160[6]; // [rsp+4D0h] [rbp-5C0h] BYREF
  _QWORD v161[12]; // [rsp+500h] [rbp-590h] BYREF
  __int64 v162[3]; // [rsp+560h] [rbp-530h] BYREF
  __int64 v163; // [rsp+578h] [rbp-518h] BYREF
  char v164; // [rsp+580h] [rbp-510h]
  _BYTE v165[7]; // [rsp+581h] [rbp-50Fh]
  char *v166; // [rsp+588h] [rbp-508h]
  __int64 v167; // [rsp+590h] [rbp-500h]
  __int64 v168; // [rsp+598h] [rbp-4F8h]
  __int64 v169; // [rsp+5A0h] [rbp-4F0h]
  __int64 v170; // [rsp+5A8h] [rbp-4E8h]
  __int64 v171; // [rsp+5B0h] [rbp-4E0h]
  __int64 v172; // [rsp+5B8h] [rbp-4D8h]
  __int64 v173; // [rsp+5C0h] [rbp-4D0h]
  __int64 v174; // [rsp+5C8h] [rbp-4C8h]
  __int64 v175; // [rsp+5D0h] [rbp-4C0h]
  __int64 v176; // [rsp+5D8h] [rbp-4B8h]
  __int64 v177; // [rsp+5E0h] [rbp-4B0h]
  __int64 v178; // [rsp+5E8h] [rbp-4A8h]
  __int64 v179; // [rsp+5F0h] [rbp-4A0h]
  __int64 v180; // [rsp+5F8h] [rbp-498h]
  __int64 v181; // [rsp+600h] [rbp-490h]
  __int64 v182; // [rsp+608h] [rbp-488h]
  __int64 v183; // [rsp+610h] [rbp-480h]
  __int64 v184; // [rsp+618h] [rbp-478h]
  __int64 v185; // [rsp+620h] [rbp-470h]
  __int64 v186; // [rsp+628h] [rbp-468h]
  __int64 v187; // [rsp+630h] [rbp-460h]
  __int64 v188; // [rsp+638h] [rbp-458h]
  __int64 v189; // [rsp+640h] [rbp-450h]
  __int64 v190; // [rsp+648h] [rbp-448h]
  __int64 v191; // [rsp+650h] [rbp-440h]
  __int64 v192; // [rsp+658h] [rbp-438h]
  __int64 v193; // [rsp+660h] [rbp-430h]
  __int64 v194; // [rsp+668h] [rbp-428h]
  char *v195; // [rsp+670h] [rbp-420h] BYREF
  __int64 v196; // [rsp+678h] [rbp-418h]
  __int64 v197; // [rsp+680h] [rbp-410h]
  __int64 v198; // [rsp+688h] [rbp-408h]
  char *v199; // [rsp+690h] [rbp-400h]
  char *v200; // [rsp+698h] [rbp-3F8h]
  __int64 v201; // [rsp+6A0h] [rbp-3F0h]
  __int64 v202; // [rsp+6A8h] [rbp-3E8h]
  __int64 v203; // [rsp+780h] [rbp-310h]
  __int64 v204; // [rsp+788h] [rbp-308h]
  __int64 v205; // [rsp+790h] [rbp-300h]
  __int64 v206; // [rsp+798h] [rbp-2F8h]
  __int64 v207; // [rsp+7A0h] [rbp-2F0h]
  __int64 v208; // [rsp+7A8h] [rbp-2E8h]
  __int64 v209; // [rsp+7B0h] [rbp-2E0h]
  __int64 v210; // [rsp+7B8h] [rbp-2D8h]
  __int64 v211; // [rsp+7C0h] [rbp-2D0h]
  __int64 v212; // [rsp+7C8h] [rbp-2C8h]
  __int64 v213; // [rsp+7D0h] [rbp-2C0h]
  __int64 v214; // [rsp+7D8h] [rbp-2B8h]
  __int64 v215; // [rsp+7E0h] [rbp-2B0h]
  __int64 v216; // [rsp+7E8h] [rbp-2A8h]
  __int64 v217; // [rsp+7F0h] [rbp-2A0h] BYREF
  char *v218; // [rsp+7F8h] [rbp-298h]
  __int64 v219; // [rsp+800h] [rbp-290h]
  __int64 v220; // [rsp+808h] [rbp-288h]
  __int64 v221; // [rsp+810h] [rbp-280h]
  _QWORD __dst[45]; // [rsp+818h] [rbp-278h] BYREF
  __int64 v223; // [rsp+980h] [rbp-110h]
  __int64 v224; // [rsp+988h] [rbp-108h]
  void *v225; // [rsp+990h] [rbp-100h]
  __int64 v226; // [rsp+998h] [rbp-F8h] BYREF
  __int64 v227; // [rsp+9A0h] [rbp-F0h]
  __int64 v228; // [rsp+9A8h] [rbp-E8h]
  __int64 v229; // [rsp+9B0h] [rbp-E0h]
  _BYTE v230[7]; // [rsp+9B8h] [rbp-D8h]
  _DWORD v231[2]; // [rsp+9C0h] [rbp-D0h]
  _BYTE v232[7]; // [rsp+9C8h] [rbp-C8h]
  _BYTE *v233; // [rsp+9D0h] [rbp-C0h]
  char *v234; // [rsp+9D8h] [rbp-B8h]
  char *v235; // [rsp+9E0h] [rbp-B0h]
  _BYTE *v236; // [rsp+9E8h] [rbp-A8h]
  _DWORD v237[2]; // [rsp+9F0h] [rbp-A0h]
  _DWORD v238[2]; // [rsp+9F8h] [rbp-98h]
  char *v239; // [rsp+A00h] [rbp-90h]
  char *v240; // [rsp+A08h] [rbp-88h]
  _BYTE v241[7]; // [rsp+A10h] [rbp-80h]
  _BYTE v242[7]; // [rsp+A18h] [rbp-78h]
  _DWORD v243[2]; // [rsp+A20h] [rbp-70h]
  char *v244; // [rsp+A28h] [rbp-68h]
  char *v245; // [rsp+A30h] [rbp-60h]
  char *v246; // [rsp+A38h] [rbp-58h]
  __int16 v247; // [rsp+A46h] [rbp-4Ah]
  char *v248; // [rsp+A48h] [rbp-48h]
  __int64 v249; // [rsp+A50h] [rbp-40h]
  char *v250; // [rsp+A58h] [rbp-38h]
  char *v251; // [rsp+A60h] [rbp-30h]

  v245 = a2;
  switch ( __src[9920] )
  {
    case 0:
      *(_WORD *)(__src + 9921) = 257;
      __src[9923] = 1;
      v3 = __src + 5152;
      memcpy(__src + 5152, __src + 392, 0x1298u);
      v250 = (char *)0x8000000000000000LL;
      switch ( __src[9904] )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_90;
        case 2:
          goto LABEL_89;
        case 3:
          goto LABEL_9;
      }
    case 1:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019530F0);
    case 2:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019530F0);
    case 3:
      v250 = (char *)0x8000000000000000LL;
      v3 = __src + 5152;
      switch ( __src[9904] )
      {
        case 0:
LABEL_4:
          v4 = (char **)(__src + 5672);
          __dst[6] = 0;
          __dst[0] = "fetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          __dst[1] = 24;
          __dst[2] = "managerimport_accounts_from_fileexpectedContentSha256overwriteExistingselectedKeysload_snapshotlocalOnlyforceMetadataupload_debug_reportinputtest_relay_provider_streamproviderIdmodelonEventmigrate_session_worktreemutationGatesessionIdload_sessionsrefresh_single_account_usageaccountKeyload_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          __dst[3] = 7;
          v244 = v3;
          __dst[4] = v3;
          __dst[5] = __src + 5672;
          v5 = tauri::state::StateManager::try_get::h5f9a3d34015fcee9(*((_QWORD *)__src + 708) + 16LL);
          if ( v5 )
            goto LABEL_7;
          _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe(
            &v195,
            __dst,
            &__dst[2]);
          v6 = (char)v195;
          if ( (_BYTE)v195 == 6 )
          {
            v5 = v196;
LABEL_7:
            v201 = 0;
            v195 = "fetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
            v196 = 24;
            v197 = (__int64)"inputtest_relay_provider_streamproviderIdmodelonEventmigrate_session_worktreemutationGatesessionIdload_sessionsrefresh_single_account_usageaccountKeyload_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
            v198 = 5;
            v199 = v244;
            v200 = __src + 5672;
            _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::he57ee3a0138af490(
              __dst,
              &v195);
            v7 = __dst[0];
            v6 = __dst[1];
            v238[0] = *(_DWORD *)((char *)&__dst[1] + 1);
            *(_DWORD *)((char *)v238 + 3) = HIDWORD(__dst[1]);
            v8 = __dst[2];
            v215 = __dst[3];
            v216 = __dst[4];
            if ( (char *)__dst[0] != v250 )
            {
              v192 = __dst[12];
              v191 = __dst[11];
              v190 = __dst[10];
              v189 = __dst[9];
              v188 = __dst[8];
              v187 = __dst[7];
              v186 = __dst[6];
              v185 = __dst[5];
              *((_QWORD *)__src + 725) = v5;
              *((_QWORD *)__src + 712) = v7;
              __src[5704] = v6;
              v11 = *(_DWORD *)((char *)v238 + 3);
              *(_DWORD *)(__src + 5705) = v238[0];
              *((_DWORD *)__src + 1427) = v11;
              *((_QWORD *)__src + 714) = v8;
              v12 = v216;
              *((_QWORD *)__src + 715) = v215;
              *((_QWORD *)__src + 716) = v12;
              v13 = v186;
              *((_QWORD *)__src + 717) = v185;
              *((_QWORD *)__src + 718) = v13;
              *((_QWORD *)__src + 719) = v187;
              *((_QWORD *)__src + 720) = v188;
              *((_QWORD *)__src + 721) = v189;
              *((_QWORD *)__src + 722) = v190;
              *((_QWORD *)__src + 723) = v191;
              *((_QWORD *)__src + 724) = v192;
              __src[7088] = 0;
              v9 = __src + 7096;
              memcpy(__src + 7096, __src + 5696, 0x578u);
              v233 = __src + 9896;
              __src[9896] = 0;
LABEL_12:
              v10 = __src + 8496;
              memcpy(__src + 8496, v9, 0x578u);
              switch ( __src[9888] )
              {
                case 0:
                  goto LABEL_13;
                case 1:
                  goto LABEL_92;
                case 2:
                  goto LABEL_91;
                case 3:
                  goto LABEL_14;
              }
            }
            v243[0] = v238[0];
            *(_DWORD *)((char *)v243 + 3) = *(_DWORD *)((char *)v238 + 3);
            v223 = v215;
            v224 = v216;
          }
          else
          {
            *(_DWORD *)((char *)v243 + 3) = HIDWORD(v195);
            v243[0] = *(_DWORD *)((char *)&v195 + 1);
            v8 = v196;
            v223 = v197;
            v224 = v198;
          }
          v251 = (char *)v8;
          core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(v244);
          LOBYTE(v31) = 1;
          if ( *v4 == v250 )
            goto LABEL_85;
          v250 = __src + 5680;
          v51 = *((_QWORD *)__src + 710);
          for ( i = *((_QWORD *)__src + 711) + 1LL; i != 1; --i )
          {
            core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v51);
            v51 += 96;
          }
          v53 = *v4;
          LOBYTE(v31) = 1;
          if ( !*v4 )
            goto LABEL_85;
          goto LABEL_84;
        case 1:
LABEL_90:
          v244 = v3;
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019522D0);
        case 2:
LABEL_89:
          v244 = v3;
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019522D0);
        case 3:
          goto LABEL_9;
      }
  }
LABEL_9:
  v244 = v3;
  v233 = __src + 9896;
  v9 = __src + 7096;
  switch ( __src[9896] )
  {
    case 0:
      goto LABEL_12;
    case 1:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101953108);
    case 2:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101953108);
    case 3:
      v10 = __src + 8496;
      switch ( __src[9888] )
      {
        case 0:
LABEL_13:
          v14 = *((_QWORD **)__src + 1075);
          *((_QWORD *)__src + 1076) = v14;
          qmemcpy(v128, v10, sizeof(v128));
          __src[9889] = 0;
          v15 = __src + 8616;
          v234 = v10;
          qmemcpy(__src + 8616, v10, 0x68u);
          *((_QWORD *)__src + 1090) = v14;
          v236 = __src + 9880;
          __src[9880] = 0;
          break;
        case 1:
LABEL_92:
          v234 = v10;
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101952828);
        case 2:
LABEL_91:
          v234 = v10;
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101952828);
        case 3:
LABEL_14:
          v234 = v10;
          v236 = __src + 9880;
          v16 = (unsigned __int8)__src[9880];
          v246 = __src + 8616;
          switch ( v16 )
          {
            case 0LL:
              v14 = *((_QWORD **)__src + 1090);
              v15 = v246;
              break;
            case 1LL:
              core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101952630);
            case 2LL:
              JUMPOUT(0x100194A66LL);
            case 3LL:
              v235 = __src + 9089;
              v42 = (unsigned __int8)__src[9089];
              v240 = __src + 8880;
              switch ( v42 )
              {
                case 0LL:
                  v251 = v9;
                  v33 = *((_QWORD *)__src + 1124);
                  v32 = *((_QWORD *)__src + 1125);
                  v34 = *((_QWORD *)__src + 1126);
                  v35 = *((_QWORD *)__src + 1127);
                  v38 = __src[9090];
                  v37 = *((_QWORD *)__src + 1128);
                  v36 = *((_QWORD *)__src + 1129);
                  v39 = __src[9091];
                  goto LABEL_41;
                case 1LL:
                  core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019523F0);
                case 2LL:
                  JUMPOUT(0x100194A88LL);
                case 3LL:
                  v239 = __src + 9168;
                  v248 = __src + 9096;
                  v251 = v9;
                  v56 = *((volatile signed __int64 ***)__src + 1137);
                  v57 = *((_QWORD *)__src + 1138);
                  v58 = *((_QWORD *)__src + 1139);
                  v59 = *((_QWORD *)__src + 1142);
                  goto LABEL_105;
                case 4LL:
                  v239 = __src + 9168;
                  v60 = (unsigned __int8)__src[9168];
                  v248 = __src + 9096;
                  switch ( v60 )
                  {
                    case 0LL:
                      v251 = v9;
                      v56 = *((volatile signed __int64 ***)__src + 1137);
                      v57 = *((_QWORD *)__src + 1138);
                      v58 = *((_QWORD *)__src + 1139);
                      v59 = *((_QWORD *)__src + 1142);
                      goto LABEL_107;
                    case 1LL:
                      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101952408);
                    case 2LL:
                      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101952408);
                    case 3LL:
                      goto LABEL_125;
                    case 4LL:
                      goto LABEL_143;
                  }
              }
          }
          return result;
      }
      v17 = __src + 8728;
      v246 = v15;
      qmemcpy(__src + 8728, v15, 0x68u);
      __dst[2] = *((_QWORD *)__src + 1082);
      v18 = *((_QWORD *)__src + 1080);
      __dst[1] = *((_QWORD *)__src + 1081);
      __dst[0] = v18;
      v19 = *((_QWORD *)__src + 1099);
      v20 = *((_QWORD *)__src + 1097) == (_QWORD)v250;
      v251 = v9;
      if ( v20 )
        v21 = nullptr;
      else
        v21 = *((_QWORD **)__src + 1098);
      v22 = __src + 8832;
      codexmate_lib::core::relay::manager::RelayManager::resolve_draft_api_key::h25394278458b5ae9(
        (unsigned __int64 *)__src + 1104,
        v14,
        __dst,
        v21,
        v19);
      codexmate_lib::core::relay::upstream_url::normalize_upstream_base_url::ha7493063c3bbb978(
        __dst,
        *((_QWORD *)__src + 1092),
        *((_QWORD *)__src + 1093));
      v206 = __dst[1];
      v207 = __dst[2];
      v208 = __dst[3];
      if ( LOBYTE(__dst[0]) )
      {
        if ( *v22 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 1105), *v22, 1);
        v23 = *((char **)__src + 1097);
        if ( v23 != v250 && v23 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 1098), v23, 1);
        if ( *v17 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 1092), *v17, 1);
        v24 = *((char **)__src + 1100);
        if ( v24 != v250 && v24 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 1101), v24, 1);
        v214 = v208;
        v213 = v207;
        v212 = v206;
        *v236 = 1;
        v25 = 9;
        goto LABEL_31;
      }
      v32 = v208;
      *((_QWORD *)__src + 1109) = v208;
      v33 = v207;
      *((_QWORD *)__src + 1107) = v206;
      *((_QWORD *)__src + 1108) = v33;
      v34 = *((_QWORD *)__src + 1105);
      v35 = *((_QWORD *)__src + 1106);
      v36 = 0;
      v37 = 1;
      if ( *((char **)__src + 1100) != v250 )
        v37 = *((_QWORD *)__src + 1101);
      v38 = __src[8825];
      if ( *((char **)__src + 1100) != v250 )
        v36 = *((_QWORD *)__src + 1102);
      v39 = __src[8824];
      *((_QWORD *)__src + 1124) = v33;
      *((_QWORD *)__src + 1125) = v32;
      *((_QWORD *)__src + 1126) = v34;
      *((_QWORD *)__src + 1127) = v35;
      *((_QWORD *)__src + 1128) = v37;
      *((_QWORD *)__src + 1129) = v36;
      v235 = __src + 9089;
      __src[9089] = 0;
      __src[9090] = v38;
      __src[9091] = v39;
      v240 = __src + 8880;
LABEL_41:
      *((_QWORD *)__src + 1122) = v33;
      *((_QWORD *)__src + 1123) = v32;
      __src[9088] = v38;
      codexmate_lib::core::relay::fetch_models::sanitize_api_key::h25b34fe9939fb9f6((size_t *)__src + 1130, v34, v35);
      v40 = __dst;
      v41 = (_QWORD *)v37;
      codexmate_lib::core::relay::fetch_models::parse_extra_headers::h8a0e495e96b65543((__int64)__dst, v37, v36);
      v203 = __dst[1];
      v204 = __dst[2];
      v205 = __dst[3];
      if ( __dst[0] == 3 )
      {
        v227 = v203;
        v228 = v204;
        v229 = v205;
        v226 = 1;
LABEL_192:
        v118 = *((_QWORD *)__src + 1130);
        if ( v118 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 1131), v118, 1);
        v119 = v226;
        v172 = v227;
        v173 = v228;
        v174 = v229;
        *v235 = 1;
        if ( v119 == 2 )
          goto LABEL_195;
        v171 = v174;
        v170 = v173;
        v169 = v172;
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..fetch_models..fetch_async..$u7b$$u7b$closure$u7d$$u7d$$GT$::h8fd2838499863f3d(v240);
        v120 = *((_QWORD *)__src + 1107);
        if ( v120 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 1108), v120, 1);
        v121 = *((_QWORD *)__src + 1104);
        if ( v121 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 1105), v121, 1);
        v122 = *((char **)__src + 1097);
        if ( v122 != v250 && v122 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 1098), v122, 1);
        v123 = *((_QWORD *)__src + 1091);
        if ( v123 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 1092), v123, 1);
        v124 = *((char **)__src + 1100);
        if ( v124 != v250 && v124 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 1101), v124, 1);
        v214 = v171;
        v213 = v170;
        v212 = v169;
        *v236 = 1;
        if ( v119 == 7 )
          goto LABEL_209;
        v25 = v119 ^ 0xB;
LABEL_31:
        v211 = v214;
        v210 = v213;
        v209 = v212;
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..manager..RelayManager..fetch_models_draft..$u7b$$u7b$closure$u7d$$u7d$$GT$::h662b4560c93264b1(v246);
        if ( v25 == 11 )
        {
          v162[2] = v211;
          v162[1] = v210;
          v162[0] = v209;
          v26 = v162;
          codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hbccf9fcf38e62029((__int64)__dst, v162);
          v27 = __dst[0];
          v245 = (char *)__dst[1];
          v28 = (const void *)__dst[2];
          v29 = __dst[3];
          v30 = __dst[4];
          v175 = __dst[5];
          v176 = __dst[6];
          v177 = __dst[7];
          v178 = __dst[8];
          v179 = __dst[9];
          v180 = __dst[10];
          v181 = __dst[11];
          v182 = __dst[12];
          __src[9889] = 0;
          __src[9888] = 1;
          if ( !__OFSUB__(-v27, 1) )
          {
            if ( v27 == 0x8000000000000001LL )
              goto LABEL_210;
            v159[12] = v182;
            v159[11] = v181;
            v159[10] = v180;
            v159[9] = v179;
            v159[8] = v178;
            v159[7] = v177;
            v159[6] = v176;
            v159[5] = v175;
            v159[0] = v27;
            v159[1] = v245;
            v159[2] = v28;
            v159[3] = v29;
            v159[4] = v30;
            _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::h2a065ceb16b4520c(__dst, v159);
            v195 = (char *)__dst[1];
            v196 = __dst[2];
            v197 = __dst[3];
            v198 = __dst[4];
            if ( (char *)__dst[0] == v250 + 37 )
            {
              v218 = v195;
              v219 = v196;
              v220 = v197;
              v221 = v198;
              v31 = 0;
            }
            else
            {
              v160[0] = __dst[0];
              v160[1] = v195;
              v160[2] = v196;
              v160[3] = v197;
              v160[4] = v198;
              v160[5] = __dst[5];
              _$LT$core..result..Result$LT$T$C$F$GT$$u20$as$u20$core..ops..try_trait..FromResidual$LT$core..result..Result$LT$core..convert..Infallible$C$E$GT$$GT$$GT$::from_residual::hb033d94ed20710ab(
                &v217,
                v160);
              v31 = v217;
            }
            goto LABEL_78;
          }
        }
        else
        {
          __dst[0] = v25;
          __dst[1] = v209;
          __dst[2] = v210;
          __dst[3] = v211;
          v156 = nullptr;
          v157 = 1;
          v158 = 0;
          v197 = 1610612768;
          v195 = (char *)&v156;
          v196 = (__int64)&off_101952F18;
          v26 = (__int64 *)&v195;
          if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                  __dst,
                                  &v195) )
            core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, &v138, &unk_101952FE0, &off_101952F48);
          v245 = v156;
          v28 = (const void *)v157;
          v29 = v158;
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__dst);
          __src[9889] = 0;
          __src[9888] = 1;
        }
        if ( v29 < 0 )
        {
          v48 = 0;
          goto LABEL_54;
        }
        if ( v29 )
        {
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__dst, v26);
          v48 = 1;
          v49 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v29, 1);
          if ( !v49 )
LABEL_54:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v48, v29);
          v50 = v49;
        }
        else
        {
          v50 = 1;
        }
        memcpy((void *)v50, v28, v29);
        if ( v245 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, v245, 1);
        LOBYTE(v218) = 3;
        v219 = v29;
        v220 = v50;
        v221 = v29;
        v31 = 1;
LABEL_78:
        v6 = (char)v218;
        v231[0] = *(_DWORD *)((char *)&v218 + 1);
        *(_DWORD *)((char *)v231 + 3) = HIDWORD(v218);
        v251 = (char *)v219;
        v183 = v220;
        v184 = v221;
        *v233 = 1;
        if ( v31 == 2 )
          goto LABEL_211;
        *(_DWORD *)((char *)v243 + 3) = *(_DWORD *)((char *)v231 + 3);
        v243[0] = v231[0];
        v223 = v183;
        v224 = v184;
        core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(v244);
        if ( *((char **)__src + 709) != v250 )
        {
          v250 = __src + 5680;
          v61 = *((_QWORD *)__src + 710);
          for ( j = *((_QWORD *)__src + 711) + 1LL; j != 1; --j )
          {
            core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v61);
            v61 += 96;
          }
          v53 = *((char **)__src + 709);
          if ( v53 )
LABEL_84:
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v250, 96LL * (_QWORD)v53, 8);
        }
LABEL_85:
        *(_DWORD *)&v232[3] = *(_DWORD *)((char *)v243 + 3);
        *(_DWORD *)v232 = v243[0];
        v193 = v223;
        v194 = v224;
        __src[9904] = 1;
        core::ptr::drop_in_place$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h38e27aafbfc73cdd(v244);
        *(_DWORD *)&v165[3] = *(_DWORD *)&v232[3];
        *(_DWORD *)v165 = *(_DWORD *)v232;
        v167 = v193;
        v168 = v194;
        v164 = v6;
        v166 = v251;
        v163 = v31 & 1;
        __src[9923] = 0;
        memcpy(__dst, __src, sizeof(__dst));
        __src[9922] = 0;
        v63 = *((_QWORD *)__src + 48);
        __src[9921] = 0;
        v197 = *((_QWORD *)__src + 47);
        v64 = *((char **)__src + 45);
        v196 = *((_QWORD *)__src + 46);
        v195 = v64;
        tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
          __dst,
          v63,
          &v163,
          &v195,
          *((unsigned int *)__src + 2478),
          *((unsigned int *)__src + 2479));
        v65 = 1;
        result = 0;
        goto LABEL_212;
      }
      v202 = __dst[11];
      v201 = __dst[10];
      v200 = (char *)__dst[9];
      v199 = (char *)__dst[8];
      v198 = __dst[7];
      v197 = __dst[6];
      v196 = __dst[5];
      v195 = (char *)__dst[4];
      *((_QWORD *)__src + 1110) = __dst[0];
      v43 = v204;
      *((_QWORD *)__src + 1111) = v203;
      *((_QWORD *)__src + 1112) = v43;
      *((_QWORD *)__src + 1113) = v205;
      v44 = v196;
      *((_QWORD *)__src + 1114) = v195;
      *((_QWORD *)__src + 1115) = v44;
      *((_QWORD *)__src + 1116) = v197;
      *((_QWORD *)__src + 1117) = v198;
      *((_QWORD *)__src + 1118) = v199;
      *((_QWORD *)__src + 1119) = v200;
      *((_QWORD *)__src + 1120) = v201;
      *((_QWORD *)__src + 1121) = v202;
      if ( !v39 )
      {
        v54 = 0;
        if ( codexmate_lib::core::relay::fetch_models::ASYNC_CLIENT::h4146b230a34fcce4 )
        {
          v40 = &codexmate_lib::core::relay::fetch_models::ASYNC_CLIENT::h4146b230a34fcce4;
          std::sync::once_lock::OnceLock$LT$T$GT$::initialize::h3802dcfced1994d7(&codexmate_lib::core::relay::fetch_models::ASYNC_CLIENT::h4146b230a34fcce4);
        }
        v55 = _InterlockedIncrement64((volatile signed __int64 *)qword_1019FEC08);
        if ( !((v55 < 0) ^ v54 | (v55 == 0)) )
        {
          v47 = &qword_1019FEC08;
          goto LABEL_69;
        }
LABEL_99:
        BUG();
      }
      v45 = 0;
      if ( codexmate_lib::core::relay::fetch_models::ASYNC_DIRECT_CLIENT::h99f0d80bd8713425 )
      {
        v40 = &codexmate_lib::core::relay::fetch_models::ASYNC_DIRECT_CLIENT::h99f0d80bd8713425;
        std::sync::once_lock::OnceLock$LT$T$GT$::initialize::h201fb1f3fd83dc40(&codexmate_lib::core::relay::fetch_models::ASYNC_DIRECT_CLIENT::h99f0d80bd8713425);
      }
      v46 = _InterlockedIncrement64((volatile signed __int64 *)qword_1019FEC18);
      if ( (v46 < 0) ^ v45 | (v46 == 0) )
        goto LABEL_99;
      v47 = &qword_1019FEC18;
LABEL_69:
      *((_QWORD *)__src + 1133) = *v47;
      *((_QWORD *)__src + 1134) = 0x200000000LL;
      __src[9080] = 0;
      while ( 1 )
      {
        v67 = *((_DWORD *)__src + 2268);
        if ( v67 > *((_DWORD *)__src + 2269) )
        {
LABEL_177:
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v40, v41);
          v113 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(21, 1);
          if ( !v113 )
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 21);
          qmemcpy(v113, "all retries exhausted", 21);
          v227 = 21;
          v228 = (__int64)v113;
          v229 = 21;
          v226 = 1;
          if ( !_InterlockedDecrement64(*((volatile signed __int64 **)__src + 1133)) )
            alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he53e89bcba3b87c6(__src + 9064, 1);
LABEL_191:
          core::ptr::drop_in_place$LT$http..header..map..HeaderMap$GT$::hb91855b753871e5f(v240);
          goto LABEL_192;
        }
        if ( v67 >= *((_DWORD *)__src + 2269) )
          __src[9080] = 1;
        else
          *((_DWORD *)__src + 2268) = v67 + 1;
        *((_DWORD *)__src + 2271) = v67;
        v56 = (volatile signed __int64 **)(__src + 9064);
        v248 = __src + 9096;
        v20 = __src[9088] == 2;
        v239 = __src + 9168;
        v57 = *((_QWORD *)__src + 1122);
        v58 = *((_QWORD *)__src + 1123);
        v68 = *((_QWORD *)__src + 1131);
        v69 = *((_QWORD *)__src + 1132);
        *((_QWORD *)__src + 1137) = __src + 9064;
        *((_QWORD *)__src + 1138) = v57;
        *((_QWORD *)__src + 1139) = v58;
        *((_QWORD *)__src + 1140) = v68;
        *((_QWORD *)__src + 1141) = v69;
        v59 = (__int64)v240;
        *((_QWORD *)__src + 1142) = v240;
        __src[9168] = 0;
        if ( !v20 )
        {
LABEL_107:
          v249 = v59;
          codexmate_lib::core::relay::upstream_url::join_upstream_url::h90512dea8a6c0852(
            (__int64 *)__src + 1143,
            v57,
            v58,
            "/v1/modelsx-api-keyanthropic-version2023-06-01",
            10);
          v73 = *v56;
          _$LT$$RF$alloc..string..String$u20$as$u20$reqwest..into_url..IntoUrlSealed$GT$::into_url::ha996b3d00a654bcd(
            v161,
            __src + 9144);
          v74 = __OFSUB__(v161[0], v250);
          if ( (char *)v161[0] == v250 )
          {
            v139 = v161[1];
            v75 = 2;
          }
          else
          {
            memset(&v151[95], 0, 7);
            v144 = 0;
            v145 = 0;
            memcpy((char *)v130 + 6, v161, 0x58u);
            v141 = 0;
            v142 = 0;
            v143 = 8;
            v146 = 8;
            v147 = 0;
            v148 = 2;
            v149 = 0;
            v150 = 0;
            memcpy(v151, v130, 0x5Eu);
            v151[94] = 1;
            v152 = 0;
            v153 = 0;
            v154 = 0;
            v155 = 2;
            v74 = 0;
            v75 = 0;
          }
          v138 = v75;
          v79 = _InterlockedIncrement64(v73);
          if ( (v79 < 0) ^ v74 | (v79 == 0) )
            goto LABEL_99;
          reqwest::async_impl::request::RequestBuilder::new::hbc757baa3697ddba(__dst);
          reqwest::async_impl::request::RequestBuilder::bearer_auth::h25b09f3e95024f5c(&v195, __dst);
          v80 = *(_QWORD *)(v249 + 80);
          if ( v80 > 0x3FFFFFFFFFFFFFFFLL || 4 * v80 > (unsigned __int64)(v250 - 2) )
          {
            v81 = 0;
LABEL_118:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v81, 4 * v80);
          }
          v247 = *(_WORD *)(v249 + 88);
          v82 = *(void **)(v249 + 72);
          v83 = 2;
          v84 = (__int64 *)v249;
          if ( 4 * v80 )
          {
            v225 = *(void **)(v249 + 72);
            _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v195, v82);
            v81 = 2;
            v85 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4 * v80, 2);
            if ( !v85 )
              goto LABEL_118;
            v83 = v85;
            v84 = (__int64 *)v249;
            v82 = v225;
          }
          memcpy((void *)v83, v82, 4 * v80);
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hfe8f8c941e9360dc(v130, v84 + 3);
          _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::he9843f4b519c7ea4(&v138, v84 + 6);
          v86 = *v84;
          if ( (unsigned __int64)*v84 >= 2 )
          {
            v87 = v84[1];
            v161[1] = v84[2];
            v161[0] = v87;
          }
          LOWORD(__dst[11]) = v247;
          __dst[9] = v83;
          __dst[10] = v80;
          __dst[3] = v130[0];
          __dst[4] = v130[1];
          __dst[5] = v130[2];
          __dst[6] = v138;
          __dst[7] = v139;
          __dst[8] = v140;
          __dst[0] = v86;
          __dst[1] = v161[0];
          __dst[2] = v161[1];
          reqwest::async_impl::request::RequestBuilder::headers::h1972088b89d046a8(&v156, &v195);
          v9 = v251;
          *((_QWORD *)__src + 1147) = reqwest::async_impl::request::RequestBuilder::send::hf06e5e30e408b2e9(&v156);
          *((_QWORD *)__src + 1148) = v88;
LABEL_125:
          v251 = v9;
          _$LT$reqwest..async_impl..client..Pending$u20$as$u20$core..future..future..Future$GT$::poll::h2155cf637fa01a3d(
            __dst,
            __src + 9176,
            v245);
          v89 = __dst[0];
          if ( __dst[0] == 4 )
          {
            v127 = 3;
            goto LABEL_219;
          }
          v90 = (char *)__dst[1];
          qmemcpy(v131, &__dst[2], 0x78u);
          core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2(
            *((_QWORD *)__src + 1147),
            *((_QWORD *)__src + 1148));
          if ( (_DWORD)v89 == 3 )
          {
            v156 = v90;
            v195 = (char *)&v156;
            v196 = (__int64)_$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(
              __dst,
              "\x10request failed: \xC0\x0Fdecode failed: \xC0src/core/relay/health_check.rs",
              &v195);
            core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::h7a23a1e4edc590cd(v156);
            v91 = (char *)__dst[0];
            v92 = __dst[1];
            v249 = __dst[2];
          }
          else
          {
            *((_QWORD *)__src + 1147) = v89;
            *((_QWORD *)__src + 1148) = v90;
            v104 = v131[1];
            *((_QWORD *)__src + 1149) = v131[0];
            *((_QWORD *)__src + 1150) = v104;
            qmemcpy(__src + 9208, &v131[2], 0x68u);
            v105 = *((_DWORD *)__src + 2320);
            v106 = *((_QWORD *)__src + 1145);
            v156 = *((char **)__src + 1144);
            v157 = v106;
            if ( (unsigned __int16)(v105 - 200) < 0x64u
              || (LOWORD(v138) = v105,
                  __dst[0] = &v138,
                  __dst[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0,
                  __dst[2] = &v156,
                  __dst[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554,
                  alloc::fmt::format::format_inner::h3c16c74008a310d4(
                    &v195,
                    &anon_39a6e93098609d65551b0fc4eadbbbd9_160,
                    __dst),
                  v91 = v195,
                  v195 == v250) )
            {
              memcpy(__src + 9312, __src + 9176, 0x88u);
              __src[9872] = 0;
              v9 = v251;
LABEL_143:
              v251 = v9;
              reqwest::async_impl::response::Response::json::_$u7b$$u7b$closure$u7d$$u7d$::h9733780444b61ab2(
                __dst,
                __src + 9312,
                v245);
              v93 = __dst[0];
              if ( LOBYTE(__dst[0]) == 7 )
              {
                v127 = 4;
LABEL_219:
                *v239 = v127;
                v126 = 4;
                goto LABEL_220;
              }
              *(_DWORD *)&v241[3] = HIDWORD(__dst[0]);
              *(_DWORD *)v241 = *(_DWORD *)((char *)__dst + 1);
              v91 = (char *)__dst[1];
              v92 = __dst[2];
              v249 = __dst[3];
              if ( __src[9872] == 3 )
              {
                core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::he09c21e64e830488(__src + 9448);
              }
              else if ( !__src[9872] )
              {
                core::ptr::drop_in_place$LT$http..response..Response$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$::h0bbfe0f28d08e7ec(__src + 9312);
                v107 = *((_QWORD **)__src + 1180);
                if ( *v107 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v107[1], *v107, 1);
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v107, 88, 8);
              }
              if ( v93 == 6 )
              {
                v156 = v91;
                v195 = (char *)&v156;
                v196 = (__int64)_$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11;
                alloc::fmt::format::format_inner::h3c16c74008a310d4(
                  __dst,
                  "\x0Fdecode failed: \xC0src/core/relay/health_check.rs",
                  &v195);
                core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::h7a23a1e4edc590cd(v156);
                v91 = (char *)__dst[0];
                v92 = __dst[1];
                v249 = __dst[2];
                v41 = *((_QWORD **)__src + 1143);
                if ( !v41 )
                  goto LABEL_163;
              }
              else
              {
                *(_DWORD *)((char *)v129 + 3) = *(_DWORD *)&v241[3];
                LODWORD(v129[0]) = *(_DWORD *)v241;
                v41 = *((_QWORD **)__src + 1143);
                if ( !v41 )
                {
LABEL_163:
                  *(_DWORD *)&v242[3] = *(_DWORD *)((char *)v129 + 3);
                  *(_DWORD *)v242 = v129[0];
                  *v239 = 1;
                  v237[0] = *(_DWORD *)v242;
                  *(_DWORD *)((char *)v237 + 3) = *(_DWORD *)&v242[3];
                  core::ptr::drop_in_place$LT$codexmate_lib..core..relay..fetch_models..fetch_openai_async..$u7b$$u7b$closure$u7d$$u7d$$GT$::h1c25f68cb8af1655(v248);
                  goto LABEL_171;
                }
              }
LABEL_162:
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 1144), v41, 1);
              goto LABEL_163;
            }
            v92 = v196;
            v114 = v197;
            core::ptr::drop_in_place$LT$http..response..Response$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$::h0bbfe0f28d08e7ec(__src + 9176);
            v115 = *((_QWORD **)__src + 1163);
            if ( *v115 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v115[1], *v115, 1);
            v249 = v114;
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v115, 88, 8);
          }
          v41 = *((_QWORD **)__src + 1143);
          v93 = 6;
          if ( !v41 )
            goto LABEL_163;
          goto LABEL_162;
        }
LABEL_105:
        v249 = v59;
        codexmate_lib::core::relay::upstream_url::join_upstream_url::h90512dea8a6c0852(
          (__int64 *)__src + 1143,
          v57,
          v58,
          "/v1/modelsx-api-keyanthropic-version2023-06-01",
          10);
        v70 = *v56;
        _$LT$$RF$alloc..string..String$u20$as$u20$reqwest..into_url..IntoUrlSealed$GT$::into_url::ha996b3d00a654bcd(
          v129,
          __src + 9144);
        v71 = __OFSUB__(v129[0], v250);
        if ( (char *)v129[0] == v250 )
        {
          v131[1] = v129[1];
          v72 = 2;
        }
        else
        {
          memset(&v133[95], 0, 7);
          v131[10] = 0;
          v131[11] = 0;
          memcpy((char *)v161 + 6, v129, 0x58u);
          v131[5] = 0;
          v131[8] = 0;
          v131[9] = 8;
          v131[12] = 8;
          v131[13] = 0;
          v131[14] = 2;
          v131[15] = 0;
          v132 = 0;
          memcpy(v133, v161, 0x5Eu);
          v133[94] = 1;
          v134 = 0;
          v135 = 0;
          v136 = 0;
          v137 = 2;
          v71 = 0;
          v72 = 0;
        }
        v131[0] = v72;
        v76 = _InterlockedIncrement64(v70);
        if ( (v76 < 0) ^ v71 | (v76 == 0) )
          goto LABEL_99;
        reqwest::async_impl::request::RequestBuilder::new::hbc757baa3697ddba(__dst);
        reqwest::async_impl::request::RequestBuilder::header::h036250330cf2947c(&v195, __dst);
        reqwest::async_impl::request::RequestBuilder::header::h036250330cf2947c(&v156, &v195);
        v77 = *(_QWORD *)(v249 + 80);
        if ( v77 > 0x3FFFFFFFFFFFFFFFLL || 4 * v77 > (unsigned __int64)(v250 - 2) )
        {
          v78 = 0;
LABEL_113:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v78, 4 * v77);
        }
        v247 = *(_WORD *)(v249 + 88);
        v94 = *(void **)(v249 + 72);
        v95 = 2;
        v96 = (__int64 *)v249;
        if ( 4 * v77 )
        {
          v225 = *(void **)(v249 + 72);
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v156, v94);
          v78 = 2;
          v97 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(4 * v77, 2);
          if ( !v97 )
            goto LABEL_113;
          v95 = v97;
          v96 = (__int64 *)v249;
          v94 = v225;
        }
        memcpy((void *)v95, v94, 4 * v77);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hfe8f8c941e9360dc(v131, v96 + 3);
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::he9843f4b519c7ea4(&v195, v96 + 6);
        v98 = *v96;
        if ( (unsigned __int64)*v96 >= 2 )
        {
          v99 = v96[1];
          v161[1] = v96[2];
          v161[0] = v99;
        }
        LOWORD(__dst[11]) = v247;
        __dst[9] = v95;
        __dst[10] = v77;
        __dst[3] = v131[0];
        __dst[4] = v131[1];
        __dst[5] = v131[2];
        __dst[6] = v195;
        __dst[7] = v196;
        __dst[8] = v197;
        __dst[0] = v98;
        __dst[1] = v161[0];
        __dst[2] = v161[1];
        reqwest::async_impl::request::RequestBuilder::headers::h1972088b89d046a8(&v138, &v156);
        v100 = v251;
        *((_QWORD *)__src + 1147) = reqwest::async_impl::request::RequestBuilder::send::hf06e5e30e408b2e9(&v138);
        *((_QWORD *)__src + 1148) = v101;
        v251 = v100;
        _$LT$reqwest..async_impl..client..Pending$u20$as$u20$core..future..future..Future$GT$::poll::h2155cf637fa01a3d(
          __dst,
          __src + 9176,
          v245);
        v102 = __dst[0];
        if ( __dst[0] == 4 )
          break;
        v103 = (char *)__dst[1];
        qmemcpy(v130, &__dst[2], sizeof(v130));
        core::ptr::drop_in_place$LT$reqwest..async_impl..client..Pending$GT$::h14bbaa446e9798e2(
          *((_QWORD *)__src + 1147),
          *((_QWORD *)__src + 1148));
        if ( (_DWORD)v102 == 3 )
        {
          v156 = v103;
          v195 = (char *)&v156;
          v196 = (__int64)_$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(
            __dst,
            "\x10request failed: \xC0\x0Fdecode failed: \xC0src/core/relay/health_check.rs",
            &v195);
          core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::h7a23a1e4edc590cd(v156);
          v91 = (char *)__dst[0];
          v92 = __dst[1];
          v249 = __dst[2];
          goto LABEL_138;
        }
        *((_QWORD *)__src + 1147) = v102;
        *((_QWORD *)__src + 1148) = v103;
        v108 = v130[1];
        *((_QWORD *)__src + 1149) = v130[0];
        *((_QWORD *)__src + 1150) = v108;
        qmemcpy(__src + 9208, &v130[2], 0x68u);
        v109 = *((_DWORD *)__src + 2320);
        v110 = *((_QWORD *)__src + 1145);
        v156 = *((char **)__src + 1144);
        v157 = v110;
        if ( (unsigned __int16)(v109 - 200) >= 0x64u )
        {
          LOWORD(v138) = v109;
          __dst[0] = &v138;
          __dst[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u16$GT$::fmt::hd07136c77530afc0;
          __dst[2] = &v156;
          __dst[3] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(&v195, &anon_39a6e93098609d65551b0fc4eadbbbd9_160, __dst);
          v91 = v195;
          if ( v195 != v250 )
          {
            v92 = v196;
            v116 = v197;
            core::ptr::drop_in_place$LT$http..response..Response$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$::h0bbfe0f28d08e7ec(__src + 9176);
            v117 = *((_QWORD **)__src + 1163);
            if ( *v117 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v117[1], *v117, 1);
            v249 = v116;
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v117, 88, 8);
LABEL_138:
            v41 = *((_QWORD **)__src + 1143);
            v93 = 6;
            if ( !v41 )
              goto LABEL_170;
            goto LABEL_169;
          }
        }
        memcpy(__src + 9312, __src + 9176, 0x88u);
        __src[9872] = 0;
        reqwest::async_impl::response::Response::json::_$u7b$$u7b$closure$u7d$$u7d$::h9733780444b61ab2(
          __dst,
          __src + 9312,
          v245);
        v93 = __dst[0];
        if ( LOBYTE(__dst[0]) == 7 )
        {
          v125 = 4;
          goto LABEL_216;
        }
        *(_DWORD *)&v242[3] = HIDWORD(__dst[0]);
        *(_DWORD *)v242 = *(_DWORD *)((char *)__dst + 1);
        v91 = (char *)__dst[1];
        v92 = __dst[2];
        v249 = __dst[3];
        if ( __src[9872] == 3 )
        {
          core::ptr::drop_in_place$LT$reqwest..async_impl..response..Response..bytes..$u7b$$u7b$closure$u7d$$u7d$$GT$::he09c21e64e830488(__src + 9448);
        }
        else if ( !__src[9872] )
        {
          core::ptr::drop_in_place$LT$http..response..Response$LT$http_body_util..combinators..box_body..BoxBody$LT$bytes..bytes..Bytes$C$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$$GT$$GT$::h0bbfe0f28d08e7ec(__src + 9312);
          v111 = *((_QWORD **)__src + 1180);
          if ( *v111 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v111[1], *v111, 1);
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v111, 88, 8);
        }
        if ( v93 == 6 )
        {
          v156 = v91;
          v195 = (char *)&v156;
          v196 = (__int64)_$LT$reqwest..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::he447935bc3c7de11;
          alloc::fmt::format::format_inner::h3c16c74008a310d4(
            __dst,
            "\x0Fdecode failed: \xC0src/core/relay/health_check.rs",
            &v195);
          core::ptr::drop_in_place$LT$reqwest..error..Error$GT$::h7a23a1e4edc590cd(v156);
          v91 = (char *)__dst[0];
          v92 = __dst[1];
          v249 = __dst[2];
          v41 = *((_QWORD **)__src + 1143);
          if ( !v41 )
            goto LABEL_170;
LABEL_169:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 1144), v41, 1);
          goto LABEL_170;
        }
        *(_DWORD *)&v241[3] = *(_DWORD *)&v242[3];
        *(_DWORD *)v241 = *(_DWORD *)v242;
        v41 = *((_QWORD **)__src + 1143);
        if ( v41 )
          goto LABEL_169;
LABEL_170:
        *(_DWORD *)&v230[3] = *(_DWORD *)&v241[3];
        *(_DWORD *)v230 = *(_DWORD *)v241;
        *v239 = 1;
        v237[0] = *(_DWORD *)v230;
        *(_DWORD *)((char *)v237 + 3) = *(_DWORD *)&v230[3];
        core::ptr::drop_in_place$LT$codexmate_lib..core..relay..fetch_models..fetch_openai_async..$u7b$$u7b$closure$u7d$$u7d$$GT$::h1c25f68cb8af1655(v248);
LABEL_171:
        if ( v93 != 6 )
        {
          LOBYTE(__dst[0]) = v93;
          *(_DWORD *)((char *)__dst + 1) = v237[0];
          HIDWORD(__dst[0]) = *(_DWORD *)((char *)v237 + 3);
          __dst[1] = v91;
          __dst[2] = v92;
          __dst[3] = v249;
          v41 = __dst;
          codexmate_lib::core::relay::fetch_models::parse_model_ids::hb592b5b3ff790236(&v226, (__int64)__dst);
          core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(__dst);
LABEL_189:
          if ( !_InterlockedDecrement64(*((volatile signed __int64 **)__src + 1133)) )
            alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::he53e89bcba3b87c6(__src + 9064, v41);
          goto LABEL_191;
        }
        v112 = v249;
        if ( *((_DWORD *)__src + 2271) >= 2u
          || (v40 = (__int64 *)v92,
              v41 = (_QWORD *)v249,
              !(unsigned __int8)codexmate_lib::core::relay::fetch_models::is_transient_error::ha48ea6d9ab86c66a(
                                  v92,
                                  v249)) )
        {
          v227 = (__int64)v91;
          v228 = v92;
          v229 = v112;
          v226 = 1;
          goto LABEL_189;
        }
        if ( v91 )
        {
          v40 = (__int64 *)v92;
          v41 = v91;
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, v91, 1);
        }
        if ( (__src[9080] & 1) != 0 )
          goto LABEL_177;
      }
      v125 = 3;
LABEL_216:
      *v239 = v125;
      v126 = 3;
LABEL_220:
      *v235 = v126;
LABEL_195:
      *v236 = 3;
LABEL_209:
      __src[9888] = 3;
LABEL_210:
      *v233 = 3;
LABEL_211:
      __src[9904] = 3;
      v65 = 3;
      result = 1;
LABEL_212:
      __src[9920] = v65;
      return result;
  }
}
