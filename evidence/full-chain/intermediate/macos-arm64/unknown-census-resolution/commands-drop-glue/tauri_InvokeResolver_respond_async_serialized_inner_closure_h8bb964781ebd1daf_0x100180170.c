// IDA Hex-Rays decompile evidence
// addr: 0x100180170
// symbol: tauri::ipc::InvokeResolver<R>::respond_async_serialized_inner::{{closure}}::h8bb964781ebd1daf
// NOTE: this is a REAL (non-drop_in_place) function found via xrefs_to on
//   core::ptr::drop_in_place<codexmate_lib::commands::analytics::load_quota_history::{{closure}}>
//   (0x1000ef2d0). It is NOT present anywhere in CENSUS-TRUE-DENOMINATOR.jsonl (neither as
//   unknown nor as real_body) -- confirms census symbol enumeration missed real, non-drop
//   Tauri-framework dispatcher functions. Content is Tauri's own ACL/command-name string-table
//   dispatch + tauri::state::StateManager::try_get + CommandArg::from_command + return_result --
//   i.e. Tauri FRAMEWORK plumbing, not codexmate_lib business logic. Business logic (actual DB
//   query for load_quota_history etc.) is not here either -- confirms full inlining deeper into
//   the run::{{closure}} chain (see run-closure-drop-glue evidence).
//
__int64 __fastcall tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized_inner::_$u7b$$u7b$closure$u7d$$u7d$::h8bb964781ebd1daf(
        unsigned __int8 *__src,
        _QWORD *a2)
{
  __int64 v3; // rax
  char *v4; // r14
  _QWORD *v5; // r15
  __int64 v6; // r14
  char v7; // r12
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r14
  __int64 v11; // rdi
  __int64 i; // r13
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v16; // [rsp+68h] [rbp-468h] BYREF
  char v17; // [rsp+70h] [rbp-460h]
  _BYTE v18[7]; // [rsp+71h] [rbp-45Fh]
  __int64 v19; // [rsp+78h] [rbp-458h]
  __int64 v20; // [rsp+80h] [rbp-450h]
  __int64 v21; // [rsp+88h] [rbp-448h]
  __int64 v22; // [rsp+E0h] [rbp-3F0h]
  __int64 v23; // [rsp+E8h] [rbp-3E8h]
  _QWORD __dst[45]; // [rsp+F0h] [rbp-3E0h] BYREF
  __int64 v25; // [rsp+270h] [rbp-260h] BYREF
  __int64 v26; // [rsp+278h] [rbp-258h]
  __int64 v27; // [rsp+280h] [rbp-250h]
  __int64 v28; // [rsp+288h] [rbp-248h]
  __int64 v29; // [rsp+318h] [rbp-1B8h]
  __int64 v30; // [rsp+320h] [rbp-1B0h]
  __int64 v31; // [rsp+3C8h] [rbp-108h]
  __int64 v32; // [rsp+3D0h] [rbp-100h]
  _BYTE v33[7]; // [rsp+430h] [rbp-A0h]
  _BYTE v34[7]; // [rsp+468h] [rbp-68h]
  char *v35; // [rsp+470h] [rbp-60h]
  _QWORD *v36; // [rsp+488h] [rbp-48h]
  __int64 v37; // [rsp+4A0h] [rbp-30h]

  v3 = __src[6656]; /*0x100180187*/
  v36 = a2; /*0x10018019c*/
  switch ( v3 ) /*0x1001801a0*/
  {
    case 0LL: /*0x1001801a0*/
      *(_WORD *)(__src + 6657) = 257; /*0x1001801a2*/
      __src[6659] = 1; /*0x1001801ab*/
      v4 = (char *)(__src + 3520); /*0x1001801b9*/
      memcpy(__src + 3520, __src + 392, 0xC38u); /*0x1001801c8*/
      switch ( __src[6640] ) /*0x1001801e2*/
      {
        case 0u: /*0x1001801e2*/
          goto LABEL_4;
        case 1u: /*0x1001801e2*/
          goto LABEL_24;
        case 2u: /*0x1001801e2*/
          goto LABEL_23;
        case 3u: /*0x1001801e2*/
          goto LABEL_10;
      }
    case 1LL: /*0x1001801a0*/
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019530F0); /*0x100181b13*/
    case 2LL: /*0x1001801a0*/
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019530F0); /*0x100181b07*/
    case 3LL: /*0x1001801a0*/
      v4 = (char *)(__src + 3520); /*0x1001801e4*/
      switch ( __src[6640] ) /*0x100180200*/
      {
        case 0u: /*0x100180200*/
LABEL_4:
          v5 = __src + 4040; /*0x100180202*/
          __dst[6] = 0; /*0x100180209*/
          __dst[0] = "load_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback"; /*0x10018021b*/
          __dst[1] = 18; /*0x100180222*/
          __dst[2] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x100180234*/
          __dst[3] = 4; /*0x10018023b*/
          v35 = v4; /*0x100180246*/
          __dst[4] = v4; /*0x10018024a*/
          __dst[5] = __src + 4040; /*0x100180251*/
          v6 = tauri::state::StateManager::try_get::h687ceb5065e3b70f(*((_QWORD *)__src + 504) + 16LL); /*0x100180268*/
          if ( v6 ) /*0x10018026e*/
            goto LABEL_7; /*0x10018026e*/
          _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x100180285*/
            &v25,
            __dst,
            &__dst[2]);
          v7 = v25; /*0x10018028a*/
          if ( (_BYTE)v25 == 6 ) /*0x100180296*/
          {
            v6 = v26; /*0x10018029c*/
LABEL_7:
            __dst[6] = 0; /*0x1001802a3*/
            __dst[0] = "load_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback"; /*0x1001802ae*/
            __dst[1] = 18; /*0x1001802b5*/
            __dst[2] = "accountKeyload_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback"; /*0x1001802c7*/
            __dst[3] = 10; /*0x1001802ce*/
            __dst[4] = v35; /*0x1001802dd*/
            __dst[5] = __src + 4040; /*0x1001802e4*/
            _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h7d4626b3ed85f091(&v25, __dst); /*0x1001802f9*/
            v7 = v25; /*0x1001802fe*/
            if ( (_BYTE)v25 == 6 ) /*0x10018030a*/
            {
              v8 = v26; /*0x100180310*/
              v29 = v27; /*0x10018031e*/
              v30 = v28; /*0x10018032c*/
              *((_QWORD *)__src + 511) = v6; /*0x10018033a*/
              *((_QWORD *)__src + 508) = v8; /*0x100180341*/
              v9 = v30; /*0x10018034f*/
              *((_QWORD *)__src + 509) = v29; /*0x100180356*/
              *((_QWORD *)__src + 510) = v9; /*0x10018035d*/
              __src[4912] = 0; /*0x100180364*/
              memcpy(__src + 4920, __src + 4064, 0x358u); /*0x10018037a*/
              JUMPOUT(0x10018037FLL); /*0x10018037f*/
            }
            *(_DWORD *)&v34[3] = HIDWORD(v25); /*0x1001806b4*/
            *(_DWORD *)v34 = *(_DWORD *)((char *)&v25 + 1); /*0x1001806b7*/
            v10 = v26; /*0x1001806ba*/
            v29 = v27; /*0x1001806c8*/
            v30 = v28; /*0x1001806d6*/
            v31 = v27; /*0x1001806dd*/
            v32 = v28; /*0x1001806e4*/
          }
          else
          {
            *(_DWORD *)&v34[3] = HIDWORD(v25); /*0x100181716*/
            *(_DWORD *)v34 = *(_DWORD *)((char *)&v25 + 1); /*0x100181719*/
            v10 = v26; /*0x10018171c*/
            v31 = v27; /*0x10018172a*/
            v32 = v28; /*0x100181738*/
          }
          core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(v35); /*0x100181743*/
          if ( !__OFSUB__(0, *v5) ) /*0x100181753*/
          {
            v37 = v10; /*0x100181759*/
            v36 = __src + 4048; /*0x100181764*/
            v11 = *((_QWORD *)__src + 506); /*0x100181768*/
            for ( i = *((_QWORD *)__src + 507) + 1LL; i != 1; --i ) /*0x100181776*/
            {
              core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v11); /*0x10018178d*/
              v11 += 96; /*0x100181792*/
            }
            v10 = v37; /*0x1001817a3*/
            if ( *v5 ) /*0x100181797*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v36, 96LL * *v5, 8); /*0x10018192b*/
          }
          *(_DWORD *)&v33[3] = *(_DWORD *)&v34[3]; /*0x100181936*/
          *(_DWORD *)v33 = *(_DWORD *)v34; /*0x10018193c*/
          v22 = v31; /*0x100181950*/
          v23 = v32; /*0x100181957*/
          __src[6640] = 1; /*0x10018195e*/
          core::ptr::drop_in_place$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h63f453b442a421ce((__int64)v35); /*0x100181969*/
          v17 = v7; /*0x10018196e*/
          *(_DWORD *)v18 = *(_DWORD *)v33; /*0x100181981*/
          *(_DWORD *)&v18[3] = *(_DWORD *)&v33[3]; /*0x100181987*/
          v19 = v10; /*0x10018198d*/
          v20 = v22; /*0x1001819a2*/
          v21 = v23; /*0x1001819a9*/
          v16 = 1; /*0x1001819b0*/
          __src[6659] = 0; /*0x1001819b7*/
          memcpy(__dst, __src, sizeof(__dst)); /*0x1001819d0*/
          __src[6658] = 0; /*0x1001819d5*/
          v13 = *((_QWORD *)__src + 48); /*0x1001819dc*/
          __src[6657] = 0; /*0x1001819e3*/
          v27 = *((_QWORD *)__src + 47); /*0x1001819f1*/
          v14 = *((_QWORD *)__src + 45); /*0x1001819f8*/
          v26 = *((_QWORD *)__src + 46); /*0x100181a06*/
          v25 = v14; /*0x100181a0d*/
          tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x100181a33*/
            __dst,
            v13,
            &v16,
            &v25,
            *((unsigned int *)__src + 1662),
            *((unsigned int *)__src + 1663));
          __src[6656] = 1; /*0x100181a3c*/
          return 0;
        case 1u: /*0x100180200*/
LABEL_24:
          v35 = v4; /*0x100181b2a*/
          JUMPOUT(0x100181B35LL); /*0x100181b35*/
        case 2u: /*0x100180200*/
LABEL_23:
          v35 = v4; /*0x100181b18*/
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019522D0); /*0x100181b23*/
        case 3u: /*0x100180200*/
LABEL_10:
          v35 = v4; /*0x100180393*/
          JUMPOUT(0x10018039ELL); /*0x10018039e*/
      }
  }
}

// --- refs ---
// 0x1014afbe0  _memcpy
// 0x1014af2d0  __ZN4core9panicking11panic_const28panic_const_async_fn_resumed17h8f02a5f78cdcc4bbE
// 0x1019530f0  off_1019530F0
// 0x1014af2f0  __ZN4core9panicking11panic_const34panic_const_async_fn_resumed_panic17h51796ee0ce4d776aE
// 0x1015da324  aLoadInstalledS
// 0x1015db994  aRepomodepathte
// 0x100a35910  __ZN5tauri5state12StateManager7try_get17h687ceb5065e3b70fE
// 0x10146cac0  __ZN89_$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$12from_command28_$u7b$$u7b$closure$u7d$$u7d$17hb968030100831cfeE
// 0x1009313a0  __ZN62_$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$12from_command17h7d4626b3ed85f091E
// 0x100122b30  __ZN4core3ptr46drop_in_place$LT$tauri..ipc..InvokeMessage$GT$17hb81016c6923bcafbE_0
// 0x1007e0f80  __ZN4core3ptr64drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$17h5ed8c42e5a0b657cE_0
// 0x100001800  __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
// 0x1000f6f00  __ZN4core3ptr126drop_in_place$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$17h63f453b442a421ceE_0
// 0x1006d3700  __ZN5tauri3ipc23InvokeResolver$LT$R$GT$13return_result17h5d5098040d48664bE
// 0x1019522d0  off_1019522D0
