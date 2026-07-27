/* addr=0x1001b2ec0 cleanname=ipc_dispatch group=tauri-ipc-dispatch
 * decompiled via IDA Python server-side IDA decompiler.decompile
 * n_lines=343 brace_balanced=True truncation_markers=[]
 */
char __fastcall tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized_inner::_$u7b$$u7b$closure$u7d$$u7d$::hc250598ec5f6d96c(
        char *__src,
        __int64 a2)
{
  char *v3; // r13
  _QWORD *v4; // r15
  __int64 v5; // r12
  __int64 v6; // rdi
  __int64 i; // r13
  __int64 v8; // rax
  char *v9; // r14
  __int64 v10; // rdx
  char *v11; // r15
  char *v12; // r12
  char v13; // cl
  char result; // al
  _QWORD *v15; // r13
  signed __int64 v16; // r14
  _BYTE *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r12
  _QWORD *v20; // rsi
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r15
  void *v24; // r12
  __int64 v25; // rdi
  __int64 j; // r15
  __int64 v27; // rax
  __int64 v28; // rsi
  char *v29; // rax
  _BYTE v30[112]; // [rsp+8h] [rbp-498h] BYREF
  _BYTE __dst[144]; // [rsp+78h] [rbp-428h] BYREF
  _QWORD v32[45]; // [rsp+108h] [rbp-398h] BYREF
  __int128 v33; // [rsp+270h] [rbp-230h]
  char *v34; // [rsp+280h] [rbp-220h] BYREF
  __int64 v35; // [rsp+288h] [rbp-218h]
  char *v36; // [rsp+290h] [rbp-210h]
  size_t __n[2]; // [rsp+298h] [rbp-208h]
  _QWORD v38[18]; // [rsp+2A8h] [rbp-1F8h] BYREF
  _QWORD v39[3]; // [rsp+338h] [rbp-168h] BYREF
  __int128 v40; // [rsp+350h] [rbp-150h]
  __int64 v41; // [rsp+360h] [rbp-140h]
  _QWORD v42[3]; // [rsp+368h] [rbp-138h] BYREF
  __int128 v43; // [rsp+380h] [rbp-120h]
  __int64 v44; // [rsp+390h] [rbp-110h]
  __int64 v45; // [rsp+398h] [rbp-108h]
  __int128 v46; // [rsp+3A0h] [rbp-100h]
  __int64 v47; // [rsp+3B0h] [rbp-F0h]
  char *v48; // [rsp+3B8h] [rbp-E8h]
  __int128 v49; // [rsp+3C0h] [rbp-E0h]
  __int64 v50; // [rsp+3D0h] [rbp-D0h]
  signed __int64 v51; // [rsp+3D8h] [rbp-C8h]
  __int128 v52; // [rsp+3E0h] [rbp-C0h]
  __int64 v53; // [rsp+3F0h] [rbp-B0h]
  signed __int64 v54; // [rsp+3F8h] [rbp-A8h]
  __int128 v55; // [rsp+400h] [rbp-A0h]
  __int64 v56; // [rsp+410h] [rbp-90h]
  __int64 v57; // [rsp+418h] [rbp-88h]
  __int128 v58; // [rsp+420h] [rbp-80h]
  __int64 v59; // [rsp+430h] [rbp-70h] BYREF
  __int64 v60; // [rsp+438h] [rbp-68h]
  signed __int64 v61; // [rsp+440h] [rbp-60h]
  __int128 v62; // [rsp+448h] [rbp-58h]
  void *v63; // [rsp+458h] [rbp-48h]
  _BYTE *v64; // [rsp+460h] [rbp-40h]
  char *v65; // [rsp+468h] [rbp-38h]
  void *__srca; // [rsp+470h] [rbp-30h]

  switch ( __src[10544] )
  {
    case 0:
      *(_WORD *)(__src + 10545) = 257;
      __src[10547] = 1;
      v3 = __src + 5464;
      memcpy(__src + 5464, __src + 392, 0x13D0u);
      switch ( __src[10528] )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_51;
        case 2:
          goto LABEL_50;
        case 3:
          goto LABEL_9;
      }
    case 1:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019530F0);
    case 2:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019530F0);
    case 3:
      v3 = __src + 5464;
      switch ( __src[10528] )
      {
        case 0:
LABEL_4:
          v4 = __src + 5984;
          v38[1] = 0;
          v34 = "begin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          v35 = 25;
          v36 = "appexport_accounts_to_filetargetPathaccountKeysload_usage_analyticsconfirm_pending_auto_switchexport_debug_bundlemanagerimport_accounts_from_fileexpectedContentSha256overwriteExistingselectedKeysload_snapshotlocalOnlyforceMetadataupload_debug_reportinputtest_relay_provider_streamproviderIdmodelonEventmigrate_session_worktreemutationGatesessionIdload_sessionsrefresh_single_account_usageaccountKeyload_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          __n[0] = 3;
          __n[1] = (size_t)v3;
          v38[0] = __src + 5984;
          _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(v32);
          v56 = v32[1];
          v57 = v32[2];
          v58 = *(_OWORD *)&v32[3];
          if ( v32[0] == 3 )
          {
            v50 = v56;
            v51 = v57;
            v52 = v58;
            core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb((__int64)v3);
            LOBYTE(v5) = 1;
            if ( !__OFSUB__(0, *v4) )
            {
              v65 = v3;
              v6 = *((_QWORD *)__src + 749);
              for ( i = *((_QWORD *)__src + 750) + 1LL; i != 1; --i )
              {
                core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v6);
                v6 += 96;
              }
              if ( *v4 )
                _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 749), 96LL * *v4, 8);
              v3 = v65;
            }
LABEL_46:
            v46 = v52;
            v45 = v51;
            v44 = v50;
            __src[10528] = 1;
            core::ptr::drop_in_place$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$::hd7c098c527da7895((__int64)v3);
            v43 = v46;
            v42[2] = v45;
            v42[1] = v44;
            v42[0] = v5 & 1;
            __src[10547] = 0;
            memcpy(v32, __src, sizeof(v32));
            __src[10546] = 0;
            v28 = *((_QWORD *)__src + 48);
            __src[10545] = 0;
            v36 = *((char **)__src + 47);
            v29 = *((char **)__src + 45);
            v35 = *((_QWORD *)__src + 46);
            v34 = v29;
            tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
              v32,
              v28,
              v42,
              &v34,
              *((unsigned int *)__src + 2634),
              *((unsigned int *)__src + 2635));
            v13 = 1;
            result = 0;
            goto LABEL_47;
          }
          qmemcpy(v30, &v32[5], sizeof(v30));
          *((_QWORD *)__src + 751) = v32[0];
          v10 = v57;
          *((_QWORD *)__src + 752) = v56;
          *((_QWORD *)__src + 753) = v10;
          *((_OWORD *)__src + 377) = v58;
          qmemcpy(__src + 6048, v30, 0x70u);
          __src[7504] = 0;
          v9 = __src + 7512;
          memcpy(__src + 7512, __src + 6008, 0x5E0u);
          v64 = __src + 10520;
          __src[10520] = 0;
LABEL_12:
          __srca = v9;
          memcpy(__src + 9016, v9, 0x5E0u);
LABEL_13:
          v11 = __src + 9016;
          codexmate_lib::commands::account_oauth::begin_chatgpt_oauth_login::_$u7b$$u7b$closure$u7d$$u7d$::he430be462b37ccff(
            (unsigned __int64 *)&v34,
            (__int64)(__src + 9016),
            a2);
          v12 = v34;
          if ( v34 != (char *)0x8000000000000001LL )
          {
            v65 = v3;
            v15 = (_QWORD *)v35;
            v63 = v36;
            v33 = *(_OWORD *)__n;
            v16 = __n[0];
            v17 = __dst;
            memcpy(__dst, v38, sizeof(__dst));
            if ( __src[10512] == 3 )
            {
              core::ptr::drop_in_place$LT$codexmate_lib..commands..account_oauth..run_oauth_login..$u7b$$u7b$closure$u7d$$u7d$$GT$::h03e38fcb632f4414(
                (__int64)(__src + 9328),
                (__int64)v38,
                v18);
              *(_WORD *)(__src + 10513) = 0;
              v11 = __src + 9168;
            }
            else if ( __src[10512] )
            {
LABEL_21:
              if ( v12 == (char *)0x8000000000000000LL )
              {
                if ( v16 < 0 )
                {
                  v19 = 0;
                  goto LABEL_24;
                }
                if ( v16 )
                {
                  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, v38);
                  v19 = 1;
                  v22 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v16, 1);
                  if ( !v22 )
LABEL_24:
                    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v19, v16);
                  v23 = v22;
                }
                else
                {
                  v23 = 1;
                }
                v24 = v63;
                v20 = v63;
                memcpy((void *)v23, v63, v16);
                if ( v15 )
                {
                  v20 = v15;
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v15, 1);
                }
                LOBYTE(v60) = 3;
                v61 = v16;
                *(_QWORD *)&v62 = v23;
                *((_QWORD *)&v62 + 1) = v16;
                LOBYTE(v5) = 1;
                v3 = v65;
              }
              else
              {
                memcpy(&v32[5], __dst, 0x90u);
                v32[0] = v12;
                v32[1] = v15;
                v32[2] = v63;
                *(_OWORD *)&v32[3] = v33;
                v20 = v32;
                _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::h9154c4a572781cde(&v34, v32);
                v21 = 0x8000000000000025LL;
                v47 = v35;
                v48 = v36;
                v49 = *(_OWORD *)__n;
                v3 = v65;
                if ( v34 != (char *)0x8000000000000025LL )
                {
                  v39[0] = v34;
                  v39[1] = v47;
                  v39[2] = v48;
                  v40 = v49;
                  v41 = v38[0];
                  v20 = v39;
                  _$LT$core..result..Result$LT$T$C$F$GT$$u20$as$u20$core..ops..try_trait..FromResidual$LT$core..result..Result$LT$core..convert..Infallible$C$E$GT$$GT$$GT$::from_residual::hb033d94ed20710ab(
                    &v59,
                    v39);
                  v5 = v59;
                  v53 = v60;
                  v54 = v61;
                  v55 = v62;
                  *v64 = 1;
                  if ( v5 == 2 )
                    goto LABEL_15;
LABEL_40:
                  v52 = v55;
                  v51 = v54;
                  v50 = v53;
                  core::ptr::drop_in_place$LT$tauri..ipc..command..private..ResultFutureTag..future$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..OauthLoginPayload$GT$$C$alloc..string..String$C$codexmate_lib..commands..account_oauth..begin_chatgpt_oauth_login..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h93dbe54b29afcbab(
                    (unsigned __int8 *)__srca,
                    (__int64)v20,
                    v21);
                  core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb((__int64)v3);
                  if ( *((_QWORD *)__src + 748) != 0x8000000000000000LL )
                  {
                    v25 = *((_QWORD *)__src + 749);
                    for ( j = *((_QWORD *)__src + 750) + 1LL; j != 1; --j )
                    {
                      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v25);
                      v25 += 96;
                    }
                    v27 = *((_QWORD *)__src + 748);
                    if ( v27 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 749), 96 * v27, 8);
                  }
                  goto LABEL_46;
                }
                v60 = v47;
                v61 = (signed __int64)v48;
                v62 = v49;
                LOBYTE(v5) = 0;
              }
              v55 = v62;
              v54 = v61;
              v53 = v60;
              *v64 = 1;
              goto LABEL_40;
            }
            v17 = v11;
            core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9((__int64)v11);
            goto LABEL_21;
          }
          *v64 = 3;
LABEL_15:
          __src[10528] = 3;
          v13 = 3;
          result = 1;
LABEL_47:
          __src[10544] = v13;
          return result;
        case 1:
LABEL_51:
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019522D0);
        case 2:
LABEL_50:
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019522D0);
        case 3:
LABEL_9:
          v64 = __src + 10520;
          v8 = (unsigned __int8)__src[10520];
          __srca = __src + 7512;
          switch ( v8 )
          {
            case 0LL:
              v9 = (char *)__srca;
              goto LABEL_12;
            case 1LL:
              core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101953108);
            case 2LL:
              core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101953108);
            case 3LL:
              goto LABEL_13;
          }
      }
  }
}
