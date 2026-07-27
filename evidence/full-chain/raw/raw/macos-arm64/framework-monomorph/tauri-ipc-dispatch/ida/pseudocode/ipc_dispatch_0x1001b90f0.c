/* addr=0x1001b90f0 cleanname=ipc_dispatch group=tauri-ipc-dispatch
 * decompiled via IDA Python server-side IDA decompiler.decompile
 * n_lines=767 brace_balanced=True truncation_markers=[]
 */
char __fastcall tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized_inner::_$u7b$$u7b$closure$u7d$$u7d$::hcf77d8bd048b4b7f(
        unsigned __int8 *__src,
        __int64 a2,
        __m128i a3)
{
  __int64 v3; // r15
  __int64 v5; // rax
  char *v6; // r12
  _QWORD *v7; // r14
  __int64 v8; // r15
  char v9; // r12
  char *v10; // r14
  char *v11; // r13
  __int64 v12; // r14
  _QWORD *v13; // r14
  unsigned __int8 *v14; // r15
  __int64 v15; // rax
  unsigned __int8 *v16; // r14
  __int64 v17; // rax
  size_t v18; // r8
  _QWORD *v19; // rcx
  char *v20; // rsi
  _QWORD *v21; // r13
  signed __int64 v22; // r15
  _QWORD *v23; // rsi
  __int64 v24; // r13
  __int64 v25; // rsi
  __int64 v26; // rsi
  _QWORD *v27; // rsi
  __int64 v28; // r14
  unsigned int v29; // r14d
  int v30; // r12d
  unsigned int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // r13
  __int64 v34; // rax
  __int64 v35; // r15
  void *v36; // r14
  __int64 v37; // rdi
  __int64 i; // r13
  _QWORD *v39; // rax
  unsigned __int64 v40; // rdx
  _QWORD *v41; // rdi
  __int64 v42; // rsi
  _QWORD *v43; // r9
  bool v44; // zf
  __int64 v45; // r8
  _QWORD *v46; // r10
  __int64 v47; // rcx
  unsigned __int64 v48; // rax
  __int64 v49; // rax
  _QWORD *v50; // rsi
  __int64 v51; // rsi
  __int64 v52; // r14
  __int64 v53; // r13
  void *v54; // r14
  __int64 v55; // rax
  __int64 v56; // r12
  char v57; // cl
  char result; // al
  __int64 v59; // rdi
  __int64 j; // r13
  __int64 v61; // rsi
  __int64 v62; // rax
  _BYTE v63[104]; // [rsp+8h] [rbp-5E8h] BYREF
  _DWORD v64[26]; // [rsp+70h] [rbp-580h] BYREF
  _QWORD v65[13]; // [rsp+D8h] [rbp-518h] BYREF
  _QWORD __dst[45]; // [rsp+140h] [rbp-4B0h] BYREF
  __int64 v67[8]; // [rsp+2A8h] [rbp-348h] BYREF
  _QWORD v68[6]; // [rsp+2E8h] [rbp-308h] BYREF
  char *v69; // [rsp+318h] [rbp-2D8h] BYREF
  __int64 v70; // [rsp+320h] [rbp-2D0h]
  char *v71; // [rsp+328h] [rbp-2C8h]
  __int64 v72; // [rsp+330h] [rbp-2C0h]
  char *v73; // [rsp+338h] [rbp-2B8h]
  _QWORD v74[13]; // [rsp+340h] [rbp-2B0h] BYREF
  __int64 v75; // [rsp+3A8h] [rbp-248h] BYREF
  char v76; // [rsp+3B0h] [rbp-240h]
  _BYTE v77[7]; // [rsp+3B1h] [rbp-23Fh]
  void *v78; // [rsp+3B8h] [rbp-238h]
  __int64 v79; // [rsp+3C0h] [rbp-230h]
  __int64 v80; // [rsp+3C8h] [rbp-228h]
  __int64 v81; // [rsp+3D0h] [rbp-220h]
  __int64 v82; // [rsp+3D8h] [rbp-218h]
  __int64 v83; // [rsp+3E0h] [rbp-210h]
  __int64 v84; // [rsp+3E8h] [rbp-208h]
  __int64 v85; // [rsp+3F0h] [rbp-200h]
  __int64 v86; // [rsp+3F8h] [rbp-1F8h]
  __int64 *v87; // [rsp+400h] [rbp-1F0h] BYREF
  __int64 (__fastcall **v88)(); // [rsp+408h] [rbp-1E8h]
  __int64 v89; // [rsp+410h] [rbp-1E0h]
  __int64 v90; // [rsp+418h] [rbp-1D8h]
  unsigned __int64 v91; // [rsp+420h] [rbp-1D0h] BYREF
  __int64 v92; // [rsp+428h] [rbp-1C8h]
  __int64 v93; // [rsp+430h] [rbp-1C0h]
  __int64 v94; // [rsp+438h] [rbp-1B8h]
  __int64 v95; // [rsp+440h] [rbp-1B0h]
  __int64 v96; // [rsp+448h] [rbp-1A8h]
  __int64 v97; // [rsp+450h] [rbp-1A0h]
  _BYTE *v98; // [rsp+458h] [rbp-198h]
  _QWORD *v99; // [rsp+460h] [rbp-190h]
  char *v100; // [rsp+468h] [rbp-188h]
  __int64 (__fastcall **v101)(); // [rsp+470h] [rbp-180h]
  __int64 v102; // [rsp+478h] [rbp-178h] BYREF
  __int64 v103; // [rsp+480h] [rbp-170h]
  __int64 v104; // [rsp+488h] [rbp-168h]
  __int64 v105; // [rsp+490h] [rbp-160h]
  __int64 v106; // [rsp+498h] [rbp-158h]
  __int64 __srca[19]; // [rsp+4A0h] [rbp-150h] BYREF
  __int64 v108; // [rsp+538h] [rbp-B8h] BYREF
  __int64 v109; // [rsp+540h] [rbp-B0h]
  __int64 v110; // [rsp+548h] [rbp-A8h]
  __int64 v111; // [rsp+550h] [rbp-A0h]
  _DWORD v112[2]; // [rsp+558h] [rbp-98h]
  _BYTE v113[7]; // [rsp+560h] [rbp-90h]
  __int64 v114; // [rsp+568h] [rbp-88h]
  __int64 v115; // [rsp+570h] [rbp-80h]
  int v116; // [rsp+57Ch] [rbp-74h]
  _BYTE *v117; // [rsp+580h] [rbp-70h]
  __int64 v118; // [rsp+588h] [rbp-68h]
  unsigned __int8 *v119; // [rsp+590h] [rbp-60h]
  _DWORD v120[2]; // [rsp+598h] [rbp-58h]
  __int64 v121; // [rsp+5A0h] [rbp-50h]
  char *v122; // [rsp+5A8h] [rbp-48h]
  void *v123; // [rsp+5B0h] [rbp-40h]
  _QWORD *v124; // [rsp+5B8h] [rbp-38h]
  char *v125; // [rsp+5C0h] [rbp-30h]

  v3 = a2;
  v5 = __src[12848];
  v121 = a2;
  switch ( v5 )
  {
    case 0LL:
      *(_WORD *)(__src + 12849) = 257;
      __src[12851] = 1;
      v6 = (char *)(__src + 6616);
      memcpy(__src + 6616, __src + 392, 0x1850u);
      v124 = (_QWORD *)0x8000000000000000LL;
      switch ( __src[12832] )
      {
        case 0u:
          goto LABEL_4;
        case 1u:
          goto LABEL_106;
        case 2u:
          goto LABEL_105;
        case 3u:
          goto LABEL_9;
      }
    case 1LL:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019530F0);
    case 2LL:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019530F0);
    case 3LL:
      v124 = (_QWORD *)0x8000000000000000LL;
      v6 = (char *)(__src + 6616);
      switch ( __src[12832] )
      {
        case 0u:
LABEL_4:
          v7 = __src + 7136;
          __dst[6] = 0;
          __dst[0] = "test_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          __dst[1] = 23;
          __dst[2] = "managerimport_accounts_from_fileexpectedContentSha256overwriteExistingselectedKeysload_snapshotlocalOnlyforceMetadataupload_debug_reportinputtest_relay_provider_streamproviderIdmodelonEventmigrate_session_worktreemutationGatesessionIdload_sessionsrefresh_single_account_usageaccountKeyload_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          __dst[3] = 7;
          __dst[4] = v6;
          __dst[5] = __src + 7136;
          v8 = tauri::state::StateManager::try_get::h5f9a3d34015fcee9(*((_QWORD *)__src + 891) + 16LL);
          v125 = v6;
          if ( v8 )
            goto LABEL_7;
          _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe(
            __srca,
            __dst,
            &__dst[2]);
          v9 = __srca[0];
          if ( LOBYTE(__srca[0]) == 6 )
          {
            v8 = __srca[1];
            v6 = v125;
LABEL_7:
            v74[1] = 0;
            v69 = "test_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
            v70 = 23;
            v71 = "inputtest_relay_provider_streamproviderIdmodelonEventmigrate_session_worktreemutationGatesessionIdload_sessionsrefresh_single_account_usageaccountKeyload_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
            v72 = 5;
            v73 = v6;
            v74[0] = __src + 7136;
            _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8a103d1fdcd2b4a7(__dst);
            v9 = __dst[1];
            v64[0] = *(_DWORD *)((char *)&__dst[1] + 1);
            *(_DWORD *)((char *)v64 + 3) = HIDWORD(__dst[1]);
            v65[0] = __dst[3];
            v65[1] = __dst[4];
            if ( (_QWORD *)__dst[0] == v124 )
            {
              v123 = (void *)__dst[2];
              v120[0] = v64[0];
              *(_DWORD *)((char *)v120 + 3) = *(_DWORD *)((char *)v64 + 3);
              v114 = v65[0];
              v115 = v65[1];
            }
            else
            {
              qmemcpy(&__srca[5], &__dst[5], 0x70u);
              *(_DWORD *)((char *)&__srca[1] + 1) = v64[0];
              HIDWORD(__srca[1]) = *(_DWORD *)((char *)v64 + 3);
              __srca[3] = v65[0];
              __srca[4] = v65[1];
              __srca[0] = __dst[0];
              LOBYTE(__srca[1]) = __dst[1];
              __srca[2] = __dst[2];
              __dst[6] = 0;
              __dst[0] = "test_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
              __dst[1] = 23;
              __dst[2] = "onEventmigrate_session_worktreemutationGatesessionIdload_sessionsrefresh_single_account_usageaccountKeyload_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
              __dst[3] = 7;
              __dst[4] = v125;
              __dst[5] = __src + 7136;
              _$LT$tauri..ipc..channel..Channel$LT$TSend$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h41c462a75714164f(
                &v69,
                __dst);
              v9 = (char)v69;
              if ( (_BYTE)v69 == 6 )
              {
                v12 = v70;
                *((_QWORD *)__src + 914) = v8;
                memcpy(__src + 7160, __srca, 0x98u);
                *((_QWORD *)__src + 915) = v12;
                __src[9040] = 0;
                v10 = (char *)(__src + 9048);
                memcpy(__src + 9048, __src + 7160, 0x760u);
                v117 = __src + 12824;
                __src[12824] = 0;
                v6 = v125;
                v3 = v121;
LABEL_13:
                v11 = (char *)(__src + 10936);
                memcpy(__src + 10936, v10, 0x760u);
                switch ( __src[12816] )
                {
                  case 0u:
                    goto LABEL_14;
                  case 1u:
                    goto LABEL_108;
                  case 2u:
                    goto LABEL_107;
                  case 3u:
                    goto LABEL_15;
                }
              }
              *(_DWORD *)((char *)v120 + 3) = HIDWORD(v69);
              v120[0] = *(_DWORD *)((char *)&v69 + 1);
              v123 = (void *)v70;
              v114 = (__int64)v71;
              v115 = v72;
              core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayDraftTestInput$GT$::h3d122ad3ebecd731(__srca);
            }
          }
          else
          {
            *(_DWORD *)((char *)v120 + 3) = HIDWORD(__srca[0]);
            v120[0] = *(_DWORD *)((char *)__srca + 1);
            v123 = (void *)__srca[1];
            v114 = __srca[2];
            v115 = __srca[3];
          }
          core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb((__int64)v125);
          LOBYTE(v35) = 1;
          if ( (_QWORD *)*v7 == v124 )
          {
            v36 = v123;
            goto LABEL_100;
          }
          v124 = __src + 7144;
          v37 = *((_QWORD *)__src + 893);
          for ( i = *((_QWORD *)__src + 894) + 1LL; i != 1; --i )
          {
            core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v37);
            v37 += 96;
          }
          v39 = (_QWORD *)*v7;
          LOBYTE(v35) = 1;
          v44 = *v7 == 0;
          v36 = v123;
          if ( v44 )
            goto LABEL_100;
          goto LABEL_99;
        case 1u:
LABEL_106:
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019522D0);
        case 2u:
LABEL_105:
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019522D0);
        case 3u:
          goto LABEL_9;
      }
  }
LABEL_9:
  v117 = __src + 12824;
  v10 = (char *)(__src + 9048);
  switch ( __src[12824] )
  {
    case 0u:
      goto LABEL_13;
    case 1u:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101953108);
    case 2u:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101953108);
    case 3u:
      v11 = (char *)(__src + 10936);
      switch ( __src[12816] )
      {
        case 0u:
LABEL_14:
          v125 = v6;
          memcpy(__dst, v11, 0x98u);
          a3 = _mm_loadu_si128((const __m128i *)__src + 693);
          v13 = *((_QWORD **)__src + 1386);
          *((__m128i *)__src + 694) = a3;
          __src[12817] = 0;
          v14 = __src + 11120;
          memcpy(__src + 11120, v11, 0x98u);
          *((_QWORD *)__src + 1409) = v13;
          v100 = (char *)(__src + 11112);
          *((_QWORD *)__src + 1410) = __src + 11112;
          v101 = &off_1019527E0;
          *((_QWORD *)__src + 1411) = &off_1019527E0;
          v98 = __src + 12808;
          __src[12808] = 0;
LABEL_17:
          *(_WORD *)(__src + 12809) = 257;
          __src[12811] = 1;
          v99 = __src + 11296;
          v119 = v14;
          memcpy(__src + 11296, v14, 0x98u);
          __srca[2] = *((_QWORD *)__src + 1398);
          v17 = *((_QWORD *)__src + 1396);
          __srca[1] = *((_QWORD *)__src + 1397);
          __srca[0] = v17;
          v18 = *((_QWORD *)__src + 1426);
          if ( *((_QWORD **)__src + 1424) == v124 )
            v19 = nullptr;
          else
            v19 = *((_QWORD **)__src + 1425);
          v122 = v11;
          codexmate_lib::core::relay::manager::RelayManager::resolve_draft_api_key::h25394278458b5ae9(
            &v91,
            v13,
            __srca,
            v19,
            v18);
          v20 = *((char **)__src + 1416);
          codexmate_lib::core::relay::upstream_url::normalize_upstream_base_url::ha7493063c3bbb978(
            __srca,
            (__int64)v20,
            *((_QWORD *)__src + 1417));
          v21 = __src + 11392;
          v118 = __srca[1];
          v22 = __srca[2];
          v123 = (void *)__srca[3];
          if ( LOBYTE(__srca[0]) )
          {
            if ( v91 )
              *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v92, v91, 1);
            v23 = (_QWORD *)*v21;
            if ( (_QWORD *)*v21 != v124 && v23 )
              *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 1425), v23, 1);
            v24 = (__int64)v122;
            if ( *v99 )
              *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 1413), *v99, 1);
            v25 = *((_QWORD *)__src + 1415);
            if ( v25 )
              *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 1416), v25, 1);
            v26 = *((_QWORD *)__src + 1421);
            if ( v26 )
              *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 1422), v26, 1);
            v121 = v22;
            v27 = *((_QWORD **)__src + 1427);
            if ( v27 != v124 && v27 )
              *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 1428), v27, 1);
            *(_WORD *)(__src + 12809) = 0;
            __src[12811] = 0;
            v28 = 9;
            v6 = nullptr;
          }
          else
          {
            chrono::offset::utc::Utc::now::h937b24ab9cbcadf3(__srca);
            v29 = __srca[0];
            v30 = (SLODWORD(__srca[0]) >> 13) - 1;
            v116 = 0;
            if ( SLODWORD(__srca[0]) >> 13 <= 0 )
            {
              v31 = (1 - (SLODWORD(__srca[0]) >> 13)) / 0x190u + 1;
              v30 += 400 * v31;
              v116 = -146097 * v31;
            }
            v86 = HIDWORD(__srca[0]);
            v85 = LODWORD(__srca[1]);
            if ( (_QWORD *)*v21 == v124
              || (v20 = (char *)(__src + 11392),
                  _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h1ed93fb7d98ec2c1(
                    __srca,
                    __src + 11392),
                  v32 = __srca[0],
                  (_QWORD *)__srca[0] == v124) )
            {
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__srca, v20);
              v33 = 9;
              v34 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1);
              if ( !v34 )
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9);
              *(_QWORD *)v34 = 0x5F74666172645F5FLL;
              *(_BYTE *)(v34 + 8) = 95;
              v32 = 9;
            }
            else
            {
              v34 = __srca[1];
              v33 = __srca[2];
            }
            v40 = 1000
                * (v86
                 + 86400LL
                 * (int)(((v30 / 100) >> 2) + ((1461 * v30) >> 2) + v116 + ((v29 >> 4) & 0x1FF) - v30 / 100 - 719163))
                + ((unsigned __int64)(1125899907 * v85) >> 50);
            __src[12811] = 0;
            *(_WORD *)(__src + 12809) = 0;
            v41 = *((_QWORD **)__src + 1427);
            v42 = 0;
            v43 = v124;
            v44 = v41 == v124;
            v45 = 1;
            if ( v41 == v124 )
              v41 = nullptr;
            else
              v45 = *((_QWORD *)__src + 1428);
            if ( !v44 )
              v42 = *((_QWORD *)__src + 1429);
            *((_QWORD *)__src + 1431) = v32;
            *((_QWORD *)__src + 1432) = v34;
            *((_QWORD *)__src + 1433) = v33;
            v46 = v99;
            v47 = v99[1];
            *((_QWORD *)__src + 1434) = *v99;
            *((_QWORD *)__src + 1435) = v47;
            *((_QWORD *)__src + 1436) = v46[2];
            *((_QWORD *)__src + 1437) = v118;
            *((_QWORD *)__src + 1438) = v22;
            *((_QWORD *)__src + 1439) = v123;
            *((_QWORD *)__src + 1442) = v93;
            v48 = v91;
            *((_QWORD *)__src + 1441) = v92;
            *((_QWORD *)__src + 1440) = v48;
            *((_QWORD *)__src + 1445) = *((_QWORD *)__src + 1423);
            v49 = *((_QWORD *)__src + 1421);
            *((_QWORD *)__src + 1444) = *((_QWORD *)__src + 1422);
            *((_QWORD *)__src + 1443) = v49;
            *((_QWORD *)__src + 1446) = 0;
            *((_QWORD *)__src + 1447) = 8;
            *((_QWORD *)__src + 1448) = 0;
            *((_QWORD *)__src + 1449) = v41;
            *((_QWORD *)__src + 1450) = v45;
            *((_QWORD *)__src + 1451) = v42;
            *((_DWORD *)__src + 2918) = 0;
            *((_QWORD *)__src + 1455) = -1;
            *((_QWORD *)__src + 1456) = 0;
            *((_QWORD *)__src + 1457) = v40;
            *((_QWORD *)__src + 1458) = v40;
            *((_QWORD *)__src + 1452) = v43;
            a3 = _mm_shuffle_epi8(_mm_loadl_epi64((const __m128i *)__src + 715), (__m128i)xmmword_1015DA110);
            *((_DWORD *)__src + 2919) = _mm_cvtsi128_si32(a3);
            *((_QWORD *)__src + 1584) = v100;
            *((_QWORD *)__src + 1585) = v101;
            *((_QWORD *)__src + 1599) = __src + 11448;
            __src[12802] = 0;
            v6 = v125;
            v16 = v119;
            v3 = v121;
LABEL_59:
            codexmate_lib::core::relay::health_check::test_provider_staged::_$u7b$$u7b$closure$u7d$$u7d$::h0f20dbaa671682eb(
              __srca,
              (__int64)(__src + 11680),
              v3);
            v118 = __srca[0];
            if ( (_QWORD *)__srca[0] == v124 )
            {
              __src[12808] = 3;
              __src[12816] = 3;
LABEL_72:
              *v117 = 3;
LABEL_93:
              __src[12832] = 3;
              v57 = 3;
              result = 1;
              goto LABEL_101;
            }
            v121 = __srca[1];
            v123 = (void *)__srca[2];
            v22 = __srca[3];
            v108 = __srca[4];
            v109 = __srca[5];
            v110 = __srca[6];
            v111 = __srca[7];
            v125 = v6;
            v119 = v16;
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..health_check..test_provider_staged..$u7b$$u7b$closure$u7d$$u7d$$GT$::hfac50bcad3c68674((__int64)(__src + 11680));
            v90 = v111;
            v89 = v110;
            v88 = (__int64 (__fastcall **)())v109;
            v87 = (__int64 *)v108;
            core::ptr::drop_in_place$LT$codexmate_lib..core..relay..models..RelayProvider$GT$::hff9b9095308c72b3(__src + 11448);
            v50 = *((_QWORD **)__src + 1424);
            v24 = (__int64)v122;
            if ( v50 != v124 && v50 )
              *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 1425), v50, 1);
            v51 = *((_QWORD *)__src + 1415);
            if ( v51 )
              *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 1416), v51, 1);
            *(_WORD *)(__src + 12809) = 0;
            __src[12811] = 0;
            v28 = 11;
            LOBYTE(v6) = 1;
          }
          v97 = v90;
          v96 = v89;
          v95 = (__int64)v88;
          v94 = (__int64)v87;
          *v98 = 1;
          core::ptr::drop_in_place$LT$codexmate_lib..core..relay..manager..RelayManager..test_draft_stream..$u7b$$u7b$closure$u7d$$u7d$$GT$::h755fc54632405706((__int64)v119);
          if ( !(_BYTE)v6 )
          {
            __srca[0] = v28;
            __srca[1] = v118;
            __srca[2] = v121;
            __srca[3] = (__int64)v123;
            __srca[4] = v22;
            __srca[5] = v94;
            __srca[6] = v95;
            __srca[7] = v96;
            __srca[8] = v97;
            v108 = 0;
            v109 = 1;
            v110 = 0;
            v89 = 1610612768;
            v87 = &v108;
            v88 = &off_101952F18;
            if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                    __srca,
                                    (__int64 *)&v87) )
              core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, &v91, &unk_101952FE0, &off_101952F48);
            v121 = v108;
            v123 = (void *)v109;
            v22 = v110;
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__srca);
            goto LABEL_75;
          }
          if ( (_QWORD *)v118 == v124 )
          {
LABEL_75:
            if ( !_InterlockedDecrement64(*((volatile signed __int64 **)__src + 1389)) )
              alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h60d7891c8895c6ed(__src + 11112);
            __src[12817] = 0;
            qmemcpy(v63, v65, sizeof(v63));
            __src[12816] = 1;
            v52 = (__int64)v124;
            goto LABEL_78;
          }
          v67[7] = v97;
          v67[6] = v96;
          v67[5] = v95;
          v67[4] = v94;
          v67[0] = v118;
          v67[1] = v121;
          v67[2] = (__int64)v123;
          v67[3] = v22;
          codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h4aff26dd8bdfc5b9((__int64)__srca, v67);
          v52 = __srca[0];
          v121 = __srca[1];
          v123 = (void *)__srca[2];
          v22 = __srca[3];
          v6 = (char *)__srca[4];
          qmemcpy(v65, &__srca[5], sizeof(v65));
          if ( !_InterlockedDecrement64(*((volatile signed __int64 **)__src + 1389)) )
            alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h60d7891c8895c6ed(__src + 11112);
          __src[12817] = 0;
          qmemcpy(v63, v65, sizeof(v63));
          __src[12816] = 1;
          if ( (_QWORD *)v52 == (_QWORD *)((char *)v124 + 1) )
            goto LABEL_72;
LABEL_78:
          qmemcpy(v64, v63, sizeof(v64));
          core::ptr::drop_in_place$LT$codexmate_lib..commands..relay..test_relay_draft_stream..$u7b$$u7b$closure$u7d$$u7d$$GT$::hcaac7448c746c8e4(v24);
          if ( (_QWORD *)v52 == v124 )
          {
            if ( v22 < 0 )
            {
              v53 = 0;
              goto LABEL_81;
            }
            v54 = v123;
            if ( v22 )
            {
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v24, v64);
              v53 = 1;
              v55 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v22, 1);
              if ( !v55 )
LABEL_81:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v53, v22);
              v56 = v55;
            }
            else
            {
              v56 = 1;
            }
            memcpy((void *)v56, v54, v22);
            if ( v121 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v54, v121, 1);
            LOBYTE(v103) = 3;
            v104 = v22;
            v105 = v56;
            v106 = v22;
            v35 = 1;
          }
          else
          {
            qmemcpy(v74, v64, sizeof(v74));
            v69 = (char *)v52;
            v70 = v121;
            v71 = (char *)v123;
            v72 = v22;
            v73 = v6;
            _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::h56796157830aeea3(__dst, &v69, *(double *)a3.i64);
            __srca[0] = __dst[1];
            __srca[1] = __dst[2];
            __srca[2] = __dst[3];
            __srca[3] = __dst[4];
            if ( (_QWORD *)__dst[0] == (_QWORD *)((char *)v124 + 37) )
            {
              v103 = __srca[0];
              v104 = __srca[1];
              v105 = __srca[2];
              v106 = __srca[3];
              v35 = 0;
            }
            else
            {
              v68[0] = __dst[0];
              v68[1] = __srca[0];
              v68[2] = __srca[1];
              v68[3] = __srca[2];
              v68[4] = __srca[3];
              v68[5] = __dst[5];
              _$LT$core..result..Result$LT$T$C$F$GT$$u20$as$u20$core..ops..try_trait..FromResidual$LT$core..result..Result$LT$core..convert..Infallible$C$E$GT$$GT$$GT$::from_residual::hb033d94ed20710ab(
                &v102,
                v68);
              v35 = v102;
            }
          }
          v9 = v103;
          v112[0] = *(_DWORD *)((char *)&v103 + 1);
          *(_DWORD *)((char *)v112 + 3) = HIDWORD(v103);
          v36 = (void *)v104;
          v81 = v105;
          v82 = v106;
          *v117 = 1;
          if ( v35 == 2 )
            goto LABEL_93;
          *(_DWORD *)((char *)v120 + 3) = *(_DWORD *)((char *)v112 + 3);
          v120[0] = v112[0];
          v114 = v81;
          v115 = v82;
          core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb((__int64)v125);
          if ( *((_QWORD **)__src + 892) != v124 )
          {
            v123 = v36;
            v124 = __src + 7144;
            v59 = *((_QWORD *)__src + 893);
            for ( j = *((_QWORD *)__src + 894) + 1LL; j != 1; --j )
            {
              core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v59);
              v59 += 96;
            }
            v39 = *((_QWORD **)__src + 892);
            v36 = v123;
            if ( v39 )
LABEL_99:
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v124, 96LL * (_QWORD)v39, 8);
          }
LABEL_100:
          *(_DWORD *)&v113[3] = *(_DWORD *)((char *)v120 + 3);
          *(_DWORD *)v113 = v120[0];
          v83 = v114;
          v84 = v115;
          __src[12832] = 1;
          core::ptr::drop_in_place$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h9e16dd326fdce235((__int64)v125);
          *(_DWORD *)&v77[3] = *(_DWORD *)&v113[3];
          *(_DWORD *)v77 = *(_DWORD *)v113;
          v79 = v83;
          v80 = v84;
          v76 = v9;
          v78 = v36;
          v75 = v35 & 1;
          __src[12851] = 0;
          memcpy(__dst, __src, sizeof(__dst));
          __src[12850] = 0;
          v61 = *((_QWORD *)__src + 48);
          __src[12849] = 0;
          __srca[2] = *((_QWORD *)__src + 47);
          v62 = *((_QWORD *)__src + 45);
          __srca[1] = *((_QWORD *)__src + 46);
          __srca[0] = v62;
          tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
            __dst,
            v61,
            &v75,
            __srca,
            *((unsigned int *)__src + 3210),
            *((unsigned int *)__src + 3211));
          v57 = 1;
          result = 0;
LABEL_101:
          __src[12848] = v57;
          return result;
        case 1u:
LABEL_108:
          v122 = v11;
          JUMPOUT(0x1001BA3F4LL);
        case 2u:
LABEL_107:
          v122 = v11;
          v125 = v6;
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101952810);
        case 3u:
LABEL_15:
          v15 = __src[12808];
          v16 = __src + 11120;
          v98 = __src + 12808;
          switch ( v15 )
          {
            case 0LL:
              v125 = v6;
              v14 = __src + 11120;
              v13 = *((_QWORD **)__src + 1409);
              v100 = *((char **)__src + 1410);
              v101 = *((__int64 (__fastcall ***)())__src + 1411);
              goto LABEL_17;
            case 1LL:
              v119 = __src + 11120;
              v122 = v11;
              v125 = v6;
              core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101952618);
            case 2LL:
              v119 = __src + 11120;
              v122 = v11;
              JUMPOUT(0x1001BA43BLL);
            case 3LL:
              v122 = v11;
              goto LABEL_59;
          }
      }
  }
}
