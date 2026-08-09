/* addr=0x1001be660 cleanname=ipc_dispatch group=tauri-ipc-dispatch
 * decompiled via py_exec_file server-side ida_hexrays.decompile
 * n_lines=728 brace_balanced=True truncation_markers=[]
 */
char __fastcall tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized_inner::_$u7b$$u7b$closure$u7d$$u7d$::hd676366b6cd3fc31(
        unsigned __int8 *__src,
        __int64 *a2,
        __m128i a3)
{
  __int64 v4; // rax
  char *v5; // r15
  _QWORD *v6; // r14
  __int64 v7; // r15
  char v8; // r12
  _BYTE *v9; // rax
  __int64 v10; // rcx
  __int64 *v11; // r14
  __int64 v12; // rax
  __int64 *v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rdx
  char v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  char v19; // al
  int v20; // r15d
  unsigned __int64 v21; // r14
  __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  char *v26; // r12
  unsigned __int64 v27; // r13
  __int64 v28; // r13
  __int64 v29; // r12
  __int64 v30; // r15
  _QWORD *v31; // r14
  __int64 v32; // rsi
  __int64 v33; // r14
  unsigned __int64 v34; // r13
  unsigned __int64 v35; // r8
  _BYTE *v36; // r9
  void *v37; // r10
  unsigned __int64 v38; // rax
  __int64 v39; // r15
  __int64 v40; // rdi
  __int64 i; // r13
  __int64 v42; // rax
  __int64 v43; // r13
  size_t v44; // r15
  __int64 v45; // r14
  __int64 v46; // rax
  _BYTE *v47; // r13
  __int64 v48; // r12
  void *v49; // r14
  char v50; // cl
  char result; // al
  __int64 v52; // rdi
  __int64 j; // r13
  __int64 v54; // rsi
  unsigned __int64 v55; // rax
  size_t __srca[93]; // [rsp+8h] [rbp-B48h] BYREF
  _BYTE v57[128]; // [rsp+2F0h] [rbp-860h] BYREF
  _BYTE v58[128]; // [rsp+370h] [rbp-7E0h] BYREF
  _QWORD __dst[96]; // [rsp+3F0h] [rbp-760h] BYREF
  _QWORD v60[16]; // [rsp+6F0h] [rbp-460h] BYREF
  __int64 v61; // [rsp+770h] [rbp-3E0h] BYREF
  __m128i v62; // [rsp+778h] [rbp-3D8h]
  unsigned __int64 v63; // [rsp+788h] [rbp-3C8h]
  __m128i v64; // [rsp+790h] [rbp-3C0h]
  __int64 v65; // [rsp+7A0h] [rbp-3B0h]
  __int64 v66; // [rsp+7A8h] [rbp-3A8h]
  __int64 v67; // [rsp+7B0h] [rbp-3A0h]
  __int64 v68; // [rsp+7B8h] [rbp-398h]
  __int64 v69; // [rsp+7C0h] [rbp-390h]
  _QWORD v70[6]; // [rsp+7C8h] [rbp-388h] BYREF
  unsigned __int64 v71; // [rsp+7F8h] [rbp-358h] BYREF
  _BYTE *v72; // [rsp+800h] [rbp-350h]
  void *v73; // [rsp+808h] [rbp-348h]
  __int64 v74; // [rsp+810h] [rbp-340h]
  __int64 v75; // [rsp+818h] [rbp-338h]
  _BYTE v76[128]; // [rsp+820h] [rbp-330h] BYREF
  __int64 v77; // [rsp+8A0h] [rbp-2B0h] BYREF
  char v78; // [rsp+8A8h] [rbp-2A8h]
  _BYTE v79[7]; // [rsp+8A9h] [rbp-2A7h]
  unsigned __int64 v80; // [rsp+8B0h] [rbp-2A0h]
  void *v81; // [rsp+8B8h] [rbp-298h]
  __int64 v82; // [rsp+8C0h] [rbp-290h]
  __m128i v83; // [rsp+8C8h] [rbp-288h]
  __int64 v84; // [rsp+8D8h] [rbp-278h]
  __int64 v85; // [rsp+8E0h] [rbp-270h]
  __int64 v86; // [rsp+8E8h] [rbp-268h]
  __int64 v87; // [rsp+8F0h] [rbp-260h]
  __int64 v88; // [rsp+8F8h] [rbp-258h]
  __m128i v89; // [rsp+900h] [rbp-250h]
  __int64 v90; // [rsp+910h] [rbp-240h]
  __int64 v91; // [rsp+918h] [rbp-238h]
  __int64 v92; // [rsp+920h] [rbp-230h]
  __int64 v93; // [rsp+928h] [rbp-228h]
  __int64 v94; // [rsp+930h] [rbp-220h]
  void *v95; // [rsp+938h] [rbp-218h]
  size_t v96; // [rsp+940h] [rbp-210h]
  void *v97; // [rsp+948h] [rbp-208h]
  __int64 v98; // [rsp+950h] [rbp-200h]
  __int64 v99; // [rsp+958h] [rbp-1F8h]
  void *v100; // [rsp+960h] [rbp-1F0h]
  __int64 v101; // [rsp+968h] [rbp-1E8h]
  char *v102; // [rsp+970h] [rbp-1E0h]
  unsigned __int64 v103; // [rsp+978h] [rbp-1D8h]
  __m128i v104; // [rsp+980h] [rbp-1D0h] BYREF
  __int64 v105; // [rsp+990h] [rbp-1C0h]
  __int64 v106; // [rsp+998h] [rbp-1B8h]
  __int64 v107; // [rsp+9A0h] [rbp-1B0h]
  __int64 v108; // [rsp+9A8h] [rbp-1A8h]
  __int64 v109; // [rsp+9B0h] [rbp-1A0h]
  __m128i v110; // [rsp+9C0h] [rbp-190h]
  __int64 v111; // [rsp+9D0h] [rbp-180h]
  __int64 v112; // [rsp+9D8h] [rbp-178h]
  __int64 v113; // [rsp+9E0h] [rbp-170h]
  __int64 v114; // [rsp+9E8h] [rbp-168h]
  __int64 v115; // [rsp+9F0h] [rbp-160h]
  __int64 v116; // [rsp+9F8h] [rbp-158h] BYREF
  __int64 v117; // [rsp+A00h] [rbp-150h]
  size_t v118; // [rsp+A08h] [rbp-148h]
  __int64 v119; // [rsp+A10h] [rbp-140h]
  size_t v120; // [rsp+A18h] [rbp-138h]
  __m128i v121; // [rsp+A20h] [rbp-130h] BYREF
  _QWORD *v122; // [rsp+A30h] [rbp-120h]
  _BYTE *v123; // [rsp+A38h] [rbp-118h] BYREF
  _BYTE v124[24]; // [rsp+A40h] [rbp-110h] BYREF
  _BYTE v125[24]; // [rsp+A58h] [rbp-F8h]
  __int64 v126; // [rsp+A70h] [rbp-E0h]
  __int64 v127; // [rsp+A78h] [rbp-D8h]
  __int64 v128; // [rsp+A80h] [rbp-D0h]
  __int64 v129; // [rsp+A88h] [rbp-C8h]
  __int64 v130; // [rsp+A90h] [rbp-C0h]
  void *v131; // [rsp+A98h] [rbp-B8h]
  __int64 v132; // [rsp+AA0h] [rbp-B0h]
  __int64 v133; // [rsp+AA8h] [rbp-A8h]
  _DWORD v134[2]; // [rsp+AB0h] [rbp-A0h]
  _BYTE v135[7]; // [rsp+AB8h] [rbp-98h]
  __int64 *v136; // [rsp+AC0h] [rbp-90h]
  _BYTE *v137; // [rsp+AC8h] [rbp-88h]
  __m128i v138; // [rsp+AD0h] [rbp-80h] BYREF
  __int64 v139; // [rsp+AE8h] [rbp-68h]
  _BYTE v140[7]; // [rsp+AF0h] [rbp-60h]
  char *v141; // [rsp+AF8h] [rbp-58h]
  unsigned __int64 v142; // [rsp+B00h] [rbp-50h]
  _BYTE *v143; // [rsp+B08h] [rbp-48h]
  char v144; // [rsp+B17h] [rbp-39h] BYREF
  void *epi64; // [rsp+B18h] [rbp-38h]
  unsigned __int64 v146; // [rsp+B20h] [rbp-30h]

  v4 = __src[6512];
  v138.i64[0] = (__int64)a2;
  switch ( v4 )
  {
    case 0LL:
      *(_WORD *)(__src + 6513) = 257;
      __src[6515] = 1;
      a2 = (__int64 *)(__src + 392);
      v5 = (char *)(__src + 3448);
      memcpy(__src + 3448, __src + 392, 0xBF0u);
      switch ( __src[6496] )
      {
        case 0u:
          goto LABEL_4;
        case 1u:
          goto LABEL_101;
        case 2u:
          goto LABEL_100;
        case 3u:
          goto LABEL_9;
      }
    case 1LL:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019530F0);
    case 2LL:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019530F0);
    case 3LL:
      v5 = (char *)(__src + 3448);
      switch ( __src[6496] )
      {
        case 0u:
LABEL_4:
          v6 = __src + 3968;
          __dst[6] = 0;
          __dst[0] = "load_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          __dst[1] = 20;
          __dst[2] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide";
          __dst[3] = 4;
          v141 = v5;
          __dst[4] = v5;
          __dst[5] = __src + 3968;
          v7 = tauri::state::StateManager::try_get::h687ceb5065e3b70f(*((_QWORD *)__src + 495) + 16LL);
          if ( v7 )
            goto LABEL_7;
          _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe(
            &v71,
            __dst,
            &__dst[2]);
          v8 = v71;
          if ( (_BYTE)v71 == 6 )
          {
            v7 = (__int64)v72;
LABEL_7:
            __dst[6] = 0;
            __dst[0] = "load_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
            __dst[1] = 20;
            __dst[2] = "rangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
            __dst[3] = 5;
            __dst[4] = v141;
            __dst[5] = __src + 3968;
            _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v71, __dst);
            v8 = v71;
            if ( (_BYTE)v71 == 6 )
            {
              v9 = v72;
              v100 = v73;
              v101 = v74;
              *((_QWORD *)__src + 502) = v7;
              *((_QWORD *)__src + 499) = v9;
              v10 = v101;
              *((_QWORD *)__src + 500) = v100;
              *((_QWORD *)__src + 501) = v10;
              __src[4816] = 0;
              v11 = (__int64 *)(__src + 4824);
              memcpy(__src + 4824, __src + 3992, 0x340u);
              v137 = __src + 6488;
              __src[6488] = 0;
LABEL_11:
              v102 = (char *)(__src + 5656);
              v136 = v11;
              a2 = v11;
              memcpy(__src + 5656, v11, 0x340u);
              v146 = 0x8000000000000000LL;
              switch ( __src[6480] )
              {
                case 0u:
                  goto LABEL_13;
                case 1u:
                  goto LABEL_103;
                case 2u:
                  goto LABEL_102;
                case 3u:
                  goto LABEL_25;
              }
            }
            *(_DWORD *)&v140[3] = HIDWORD(v71);
            *(_DWORD *)v140 = *(_DWORD *)((char *)&v71 + 1);
            v27 = (unsigned __int64)v72;
            v100 = v73;
            v101 = v74;
            v131 = v73;
            v132 = v74;
          }
          else
          {
            *(_DWORD *)&v140[3] = HIDWORD(v71);
            *(_DWORD *)v140 = *(_DWORD *)((char *)&v71 + 1);
            v27 = (unsigned __int64)v72;
            v131 = v73;
            v132 = v74;
          }
          core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb((__int64)v141);
          LOBYTE(v39) = 1;
          if ( __OFSUB__(0, *v6) )
            goto LABEL_88;
          v146 = v27;
          v142 = (unsigned __int64)(__src + 3976);
          v40 = *((_QWORD *)__src + 497);
          for ( i = *((_QWORD *)__src + 498) + 1LL; i != 1; --i )
          {
            core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v40);
            v40 += 96;
          }
          v42 = *v6;
          LOBYTE(v39) = 1;
          v27 = v146;
          if ( !*v6 )
            goto LABEL_88;
          goto LABEL_87;
        case 1u:
LABEL_101:
          v141 = v5;
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019522D0);
        case 2u:
LABEL_100:
          v141 = v5;
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019522D0);
        case 3u:
          goto LABEL_9;
      }
  }
LABEL_9:
  v141 = v5;
  v137 = __src + 6488;
  v12 = __src[6488];
  v136 = (__int64 *)(__src + 4824);
  switch ( v12 )
  {
    case 0LL:
      v11 = v136;
      goto LABEL_11;
    case 1LL:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101953108);
    case 2LL:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101953108);
    case 3LL:
      v146 = 0x8000000000000000LL;
      v102 = (char *)(__src + 5656);
      switch ( __src[6480] )
      {
        case 0u:
LABEL_13:
          v13 = *((__int64 **)__src + 710);
          *((_QWORD *)__src + 711) = v13;
          __src[6481] = 1;
          v139 = *((_QWORD *)__src + 707);
          v133 = *((_QWORD *)__src + 708);
          v99 = *((_QWORD *)__src + 709);
          v14 = *v13;
          if ( !*v13 )
            v14 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v13);
          std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v14);
          v103 = v146 - 1;
          if ( ((v146 - 1) & std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) != 0 )
          {
            v16 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v14, a2, v15, v146 - 1) ^ 1;
            if ( !*((_BYTE *)v13 + 8) )
              goto LABEL_22;
          }
          else
          {
            v16 = 0;
            if ( !*((_BYTE *)v13 + 8) )
              goto LABEL_22;
          }
          v123 = nullptr;
          *(_OWORD *)v124 = 1u;
          __dst[2] = 1610612768;
          __dst[0] = &v123;
          __dst[1] = &off_101952F18;
          if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                                  "poisoned lock: another task failed inside",
                                  41,
                                  __dst) )
            core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, &v144, &unk_101952FE0, &off_101952F48);
          v143 = v123;
          epi64 = *(void **)v124;
          v142 = v124[8];
          v19 = v16;
          v20 = v124[15];
          LODWORD(v21) = *(unsigned __int16 *)&v124[13];
          v22 = *(unsigned int *)&v124[9];
          if ( !v19
            && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v103) != 0
            && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                   "poisoned lock: another task failed inside",
                                   41,
                                   v17,
                                   v18) )
          {
            *((_BYTE *)v13 + 8) = 1;
          }
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v13);
          if ( v143 != (_BYTE *)v146 )
          {
            v34 = ((unsigned __int64)((v20 << 16) | (unsigned int)v21) << 32) | v22;
            LOBYTE(v21) = v142;
            if ( __src[6481] != 1 )
            {
LABEL_57:
              __src[6481] = 0;
              qmemcpy(v58, v60, sizeof(v58));
              __src[6480] = 1;
              v38 = v146;
              v35 = v146;
              goto LABEL_66;
            }
LABEL_55:
            if ( v139 )
              *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v133, v139, 1);
            goto LABEL_57;
          }
          v13 = (__int64 *)epi64;
          v16 = v142;
LABEL_22:
          _$LT$codexmate_lib..platform..paths..CodexPaths$u20$as$u20$core..clone..Clone$GT$::clone::hf6c0d3e83be86178(
            __srca,
            v13 + 2);
          if ( (v16 & 1) == 0
            && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v103) != 0
            && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                   __srca,
                                   v13 + 2,
                                   v24,
                                   v25) )
          {
            *((_BYTE *)v13 + 8) = 1;
          }
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v13);
          __src[6481] = 0;
          v26 = (char *)(__src + 5696);
          memcpy(__src + 5696, __srca, 0x2E8u);
          *((_QWORD *)__src + 805) = v139;
          *((_QWORD *)__src + 806) = v133;
          *((_QWORD *)__src + 807) = v99;
          v143 = __src + 6472;
          __src[6472] = 0;
LABEL_26:
          memcpy(__dst, v26, sizeof(__dst));
          *((_QWORD *)__src + 808) = tauri::async_runtime::spawn_blocking::h23c7b20e4e4edd05(__dst);
          _$LT$tokio..runtime..task..join..JoinHandle$LT$T$GT$$u20$as$u20$core..future..future..Future$GT$::poll::hcddad7a355b95e4c(
            &v123,
            __src + 6464,
            v138.i64[0]);
          v28 = (__int64)v123;
          if ( v123 == (_BYTE *)13 )
          {
            *v143 = 3;
            goto LABEL_39;
          }
          epi64 = v26;
          if ( (_DWORD)v123 == 12 )
          {
            v138 = _mm_loadu_si128((const __m128i *)v124);
            v142 = *(_QWORD *)&v124[16];
            v29 = v146 + 12;
          }
          else
          {
            v29 = *(_QWORD *)v124;
            v138 = _mm_loadu_si128((const __m128i *)&v124[8]);
            v142 = *(_QWORD *)v125;
            v104 = *(__m128i *)&v125[8];
            v105 = v126;
            v106 = v127;
            v107 = v128;
            v108 = v129;
            v109 = v130;
          }
          v110 = v104;
          v111 = v105;
          v112 = v106;
          v113 = v107;
          v114 = v108;
          v115 = v109;
          v30 = *((_QWORD *)__src + 808);
          if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v30) )
            tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v30);
          if ( (_DWORD)v28 == 11 )
          {
            v94 = v115;
            v93 = v114;
            v92 = v113;
            v91 = v112;
            v90 = v111;
            v89 = v110;
            *v143 = 1;
            if ( v29 != v146 + 1 )
              goto LABEL_43;
LABEL_39:
            __src[6480] = 3;
            goto LABEL_53;
          }
          if ( (_DWORD)v28 == 12 )
          {
            v123 = (_BYTE *)v29;
            *(__m128i *)v124 = _mm_load_si128(&v138);
            *(_QWORD *)&v124[16] = v142;
            *(__m128i *)v125 = v110;
            v121.i64[0] = (__int64)&v123;
            v121.i64[1] = (__int64)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(
              &v104,
              "\x19analytics worker failed: \xC0/Users/borawong/.cargo/registry/src/rsproxy.cn-e3de039b2554c837/tauri-plu"
              "gin-shell-2.3.5/src/lib.rs",
              &v121);
            core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859((__int64 *)&v123);
            v138 = _mm_load_si128(&v104);
            v142 = v105;
          }
          else
          {
            v123 = (_BYTE *)v28;
            *(_QWORD *)v124 = v29;
            *(__m128i *)&v124[8] = _mm_load_si128(&v138);
            *(_QWORD *)v125 = v142;
            *(__m128i *)&v125[8] = v110;
            v126 = v111;
            v127 = v112;
            v128 = v113;
            v129 = v114;
            v130 = v115;
            v121.i64[0] = 0;
            v121.i64[1] = 1;
            v122 = nullptr;
            v105 = 1610612768;
            v104.i64[0] = (__int64)&v121;
            v104.i64[1] = (__int64)&off_101952F18;
            if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                    &v123,
                                    v104.i64) )
              core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, &v144, &unk_101952FE0, &off_101952F48);
            v138 = _mm_load_si128(&v121);
            v142 = (unsigned __int64)v122;
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v123);
          }
          *v143 = 1;
          v29 = v146;
LABEL_43:
          v88 = v94;
          v87 = v93;
          v86 = v92;
          v85 = v91;
          v84 = v90;
          v83 = v89;
          if ( *((_BYTE *)epi64 + 776) == 3 )
          {
            v33 = *((_QWORD *)epi64 + 96);
            if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v33) )
              tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v33);
          }
          else if ( !*((_BYTE *)epi64 + 776) )
          {
            v31 = epi64;
            core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(epi64);
            v32 = v31[93];
            if ( v32 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)epi64 + 94), v32, 1);
          }
          if ( v29 == v146 )
          {
            LOBYTE(v21) = v142;
            v34 = v142 >> 8;
            a3 = _mm_load_si128(&v138);
            v143 = (_BYTE *)a3.i64[0];
            epi64 = (void *)_mm_extract_epi64(a3, 1);
            if ( __src[6481] != 1 )
              goto LABEL_57;
            goto LABEL_55;
          }
          v69 = v88;
          v68 = v87;
          v67 = v86;
          v66 = v85;
          v65 = v84;
          v64 = v83;
          v61 = v29;
          a3 = _mm_load_si128(&v138);
          v62 = a3;
          v63 = v142;
          codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h5bb586e6e17224d7((__int64)__dst, &v61);
          v35 = __dst[0];
          v36 = (_BYTE *)__dst[1];
          v37 = (void *)__dst[2];
          v21 = __dst[3];
          v23 = __dst[4];
          qmemcpy(v60, &__dst[5], sizeof(v60));
          __src[6481] = 0;
          qmemcpy(v58, v60, sizeof(v58));
          __src[6480] = 1;
          if ( v35 == v146 + 1 )
          {
LABEL_53:
            *v137 = 3;
LABEL_81:
            __src[6496] = 3;
            v50 = 3;
            result = 1;
            goto LABEL_89;
          }
          epi64 = v37;
          v143 = v36;
          v34 = v21 >> 8;
          v38 = v146;
LABEL_66:
          v43 = v34 << 8;
          v44 = v43 | (unsigned __int8)v21;
          qmemcpy(v57, v58, sizeof(v57));
          v146 = v38;
          if ( v35 == v38 )
          {
            if ( v43 < 0 )
            {
              v45 = 0;
              goto LABEL_69;
            }
            if ( v44 )
            {
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v58, __dst);
              v45 = 1;
              v46 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v44, 1);
              v47 = v143;
              if ( !v46 )
LABEL_69:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v45, v44);
              v48 = v46;
            }
            else
            {
              v48 = 1;
              v47 = v143;
            }
            v49 = epi64;
            memcpy((void *)v48, epi64, v44);
            if ( v47 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, v47, 1);
            LOBYTE(v117) = 3;
            v118 = v44;
            v119 = v48;
            v120 = v44;
            v116 = 1;
            v39 = 1;
          }
          else
          {
            qmemcpy(v76, v57, sizeof(v76));
            v71 = v35;
            v72 = v143;
            v73 = epi64;
            v74 = v43 | (unsigned __int8)v21;
            v75 = v23;
            _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::h3129dc8cb8ebde0b(__dst, &v71, *(double *)a3.i64);
            v60[0] = __dst[1];
            v60[1] = __dst[2];
            v60[2] = __dst[3];
            v60[3] = __dst[4];
            if ( __dst[0] == v146 + 37 )
            {
              v117 = v60[0];
              v118 = v60[1];
              v119 = v60[2];
              v120 = v60[3];
              v116 = 0;
              v39 = 0;
            }
            else
            {
              v70[0] = __dst[0];
              v70[1] = v60[0];
              v70[2] = v60[1];
              v70[3] = v60[2];
              v70[4] = v60[3];
              v70[5] = __dst[5];
              _$LT$core..result..Result$LT$T$C$F$GT$$u20$as$u20$core..ops..try_trait..FromResidual$LT$core..result..Result$LT$core..convert..Infallible$C$E$GT$$GT$$GT$::from_residual::hb033d94ed20710ab(
                &v116,
                v70);
              v39 = v116;
            }
          }
          v8 = v117;
          v134[0] = *(_DWORD *)((char *)&v117 + 1);
          *(_DWORD *)((char *)v134 + 3) = HIDWORD(v117);
          v27 = v118;
          v95 = (void *)v119;
          v96 = v120;
          *v137 = 1;
          if ( v39 == 2 )
            goto LABEL_81;
          *(_DWORD *)&v140[3] = *(_DWORD *)((char *)v134 + 3);
          *(_DWORD *)v140 = v134[0];
          v131 = v95;
          v132 = v96;
          core::ptr::drop_in_place$LT$tauri..ipc..command..private..ResultFutureTag..future$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..ToolAnalyticsPayload$GT$$C$alloc..string..String$C$codexmate_lib..commands..analytics..load_tool_analytics..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h69f18c12479240d3(v136);
          core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb((__int64)v141);
          if ( *((_QWORD *)__src + 496) != v146 )
          {
            v146 = v27;
            v142 = (unsigned __int64)(__src + 3976);
            v52 = *((_QWORD *)__src + 497);
            for ( j = *((_QWORD *)__src + 498) + 1LL; j != 1; --j )
            {
              core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v52);
              v52 += 96;
            }
            v42 = *((_QWORD *)__src + 496);
            v27 = v146;
            if ( v42 )
LABEL_87:
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v142, 96 * v42, 8);
          }
LABEL_88:
          *(_DWORD *)&v135[3] = *(_DWORD *)&v140[3];
          *(_DWORD *)v135 = *(_DWORD *)v140;
          v97 = v131;
          v98 = v132;
          __src[6496] = 1;
          core::ptr::drop_in_place$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h48b42c13ca40e8d6((__int64)v141);
          *(_DWORD *)&v79[3] = *(_DWORD *)&v135[3];
          *(_DWORD *)v79 = *(_DWORD *)v135;
          v81 = v97;
          v82 = v98;
          v78 = v8;
          v80 = v27;
          v77 = v39 & 1;
          __src[6515] = 0;
          memcpy(__dst, __src, 0x168u);
          __src[6514] = 0;
          v54 = *((_QWORD *)__src + 48);
          __src[6513] = 0;
          v73 = *((void **)__src + 47);
          v55 = *((_QWORD *)__src + 45);
          v72 = *((_BYTE **)__src + 46);
          v71 = v55;
          tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
            __dst,
            v54,
            &v77,
            &v71,
            *((unsigned int *)__src + 1626),
            *((unsigned int *)__src + 1627));
          v50 = 1;
          result = 0;
LABEL_89:
          __src[6512] = v50;
          return result;
        case 1u:
LABEL_103:
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101952C30);
        case 2u:
LABEL_102:
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101952C30);
        case 3u:
LABEL_25:
          v143 = __src + 6472;
          v26 = (char *)(__src + 5696);
          goto LABEL_26;
      }
  }
}
