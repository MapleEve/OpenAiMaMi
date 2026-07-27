/* addr=0x100133cd0 cleanname=ipc_dispatch group=tauri-ipc-dispatch
 * decompiled via IDA Python server-side IDA decompiler.decompile
 * n_lines=477 brace_balanced=True truncation_markers=[]
 */
char __fastcall tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized_inner::_$u7b$$u7b$closure$u7d$$u7d$::h0c4a7e7e80e706b2(
        char *__src,
        __int64 a2,
        double a3)
{
  char *v5; // r13
  _QWORD *v6; // r14
  __int8 v7; // r13
  __int64 v8; // rax
  char v9; // r15
  _QWORD *v10; // r13
  char *v11; // rsi
  __int64 v12; // r15
  void *v13; // r14
  _BYTE *v14; // r12
  _BYTE *v15; // rdi
  void *v16; // r8
  unsigned __int64 v17; // r14
  __int64 v18; // r9
  const void *v19; // r15
  __int64 v20; // r12
  __int64 v21; // r13
  __int64 v22; // rax
  __int64 v23; // r13
  __int64 v24; // rax
  unsigned __int64 v25; // rdx
  char v26; // cl
  char result; // al
  __int64 v28; // r15
  __int64 v29; // rdi
  __int64 i; // r12
  __int64 v31; // rax
  __int64 v32; // r12
  __int64 v33; // rdi
  __int64 j; // r12
  __int64 v35; // rsi
  __int64 v36; // rax
  _QWORD v37[3]; // [rsp+8h] [rbp-4B8h] BYREF
  __int128 v38; // [rsp+20h] [rbp-4A0h]
  unsigned __int64 v39; // [rsp+30h] [rbp-490h]
  void *v40; // [rsp+38h] [rbp-488h]
  size_t v41; // [rsp+40h] [rbp-480h]
  __int64 v42; // [rsp+48h] [rbp-478h]
  _QWORD __srca[19]; // [rsp+50h] [rbp-470h] BYREF
  _QWORD v44[2]; // [rsp+E8h] [rbp-3D8h] BYREF
  __int128 v45; // [rsp+F8h] [rbp-3C8h]
  __int64 v46; // [rsp+108h] [rbp-3B8h]
  __int64 v47; // [rsp+110h] [rbp-3B0h]
  _QWORD v48[14]; // [rsp+118h] [rbp-3A8h] BYREF
  _BYTE __dst[360]; // [rsp+188h] [rbp-338h] BYREF
  _BYTE *v50; // [rsp+2F0h] [rbp-1D0h]
  __int64 (__fastcall *v51)(_QWORD, _QWORD); // [rsp+2F8h] [rbp-1C8h]
  __int64 v52; // [rsp+300h] [rbp-1C0h] BYREF
  __int8 v53; // [rsp+308h] [rbp-1B8h]
  char v54; // [rsp+309h] [rbp-1B7h]
  __int64 v55; // [rsp+30Ah] [rbp-1B6h]
  __int64 v56; // [rsp+312h] [rbp-1AEh]
  _BYTE v57[14]; // [rsp+31Ah] [rbp-1A6h]
  _BYTE v58[112]; // [rsp+328h] [rbp-198h] BYREF
  __int64 v59; // [rsp+398h] [rbp-128h] BYREF
  _BYTE v60[22]; // [rsp+3A0h] [rbp-120h]
  unsigned __int64 v61; // [rsp+3B8h] [rbp-108h]
  void *v62; // [rsp+3C0h] [rbp-100h]
  size_t v63; // [rsp+3C8h] [rbp-F8h]
  __int64 v64; // [rsp+3D0h] [rbp-F0h]
  unsigned __int64 v65; // [rsp+3D8h] [rbp-E8h] BYREF
  void *v66; // [rsp+3E0h] [rbp-E0h]
  size_t __n; // [rsp+3E8h] [rbp-D8h]
  __int64 v68; // [rsp+3F0h] [rbp-D0h]
  _BYTE v69[30]; // [rsp+3F8h] [rbp-C8h]
  void *v70; // [rsp+418h] [rbp-A8h]
  unsigned __int64 v71; // [rsp+420h] [rbp-A0h]
  __int128 v72; // [rsp+428h] [rbp-98h]
  __int64 v73; // [rsp+438h] [rbp-88h] BYREF
  __m256i v74; // [rsp+440h] [rbp-80h]
  __int64 v75; // [rsp+460h] [rbp-60h]
  _BYTE v76[22]; // [rsp+468h] [rbp-58h]
  char *v77; // [rsp+480h] [rbp-40h]
  void *v78; // [rsp+488h] [rbp-38h]
  char *v79; // [rsp+490h] [rbp-30h]

  switch ( __src[2528] )
  {
    case 0:
      *(_WORD *)(__src + 2529) = 257;
      __src[2531] = 1;
      v5 = __src + 1456;
      memcpy(__src + 1456, __src + 392, 0x428u);
      switch ( __src[2512] )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_61;
        case 2:
          goto LABEL_60;
        case 3:
          goto LABEL_6;
      }
    case 1:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019530F0);
    case 2:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019530F0);
    case 3:
      v5 = __src + 1456;
      switch ( __src[2512] )
      {
        case 0:
LABEL_4:
          v6 = __src + 1976;
          v48[6] = 0;
          v48[0] = "capture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          v48[1] = 25;
          v48[2] = "appexport_accounts_to_filetargetPathaccountKeysload_usage_analyticsconfirm_pending_auto_switchexport_debug_bundlemanagerimport_accounts_from_fileexpectedContentSha256overwriteExistingselectedKeysload_snapshotlocalOnlyforceMetadataupload_debug_reportinputtest_relay_provider_streamproviderIdmodelonEventmigrate_session_worktreemutationGatesessionIdload_sessionsrefresh_single_account_usageaccountKeyload_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          v48[3] = 3;
          v79 = v5;
          v48[4] = v5;
          v48[5] = __src + 1976;
          _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(__dst);
          v7 = __dst[8];
          *(_QWORD *)v58 = *(_QWORD *)&__dst[10];
          *(_OWORD *)&v58[8] = *(_OWORD *)&__dst[18];
          *(_QWORD *)&v58[22] = *(_QWORD *)&__dst[32];
          if ( *(_QWORD *)__dst == 3 )
          {
            LOBYTE(v78) = __dst[9];
            v75 = *(_QWORD *)v58;
            *(_OWORD *)v76 = *(_OWORD *)&v58[8];
            *(_QWORD *)&v76[14] = *(_QWORD *)&v58[22];
          }
          else
          {
            qmemcpy(&__srca[5], &__dst[40], 0x70u);
            *(_QWORD *)((char *)&__srca[1] + 2) = *(_QWORD *)v58;
            *(_OWORD *)((char *)&__srca[2] + 2) = *(_OWORD *)&v58[8];
            __srca[4] = *(_QWORD *)&v58[22];
            __srca[0] = *(_QWORD *)__dst;
            LOWORD(__srca[1]) = *(_WORD *)&__dst[8];
            *(_QWORD *)&__dst[48] = 0;
            *(_QWORD *)__dst = "capture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
            *(_QWORD *)&__dst[8] = 25;
            *(_QWORD *)&__dst[16] = "styleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
            *(_QWORD *)&__dst[24] = 5;
            *(_QWORD *)&__dst[32] = v79;
            *(_QWORD *)&__dst[40] = __src + 1976;
            _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h22bfbe93846569e9(v48, __dst);
            v7 = v48[0];
            v9 = BYTE1(v48[0]);
            if ( LOBYTE(v48[0]) == 6 )
            {
              memcpy(__src + 2000, __srca, 0x98u);
              __src[2160] = v9;
              __src[2161] = 0;
              v78 = __src + 2168;
              memcpy(__src + 2168, __src + 2000, 0xA8u);
              v77 = __src + 2504;
              __src[2504] = 0;
              v5 = v79;
LABEL_10:
              v70 = __src + 2336;
              memcpy(__src + 2336, v78, 0xA8u);
              switch ( __src[2497] )
              {
                case 0:
                  goto LABEL_11;
                case 1:
                  goto LABEL_65;
                case 2:
                  goto LABEL_62;
                case 3:
                  goto LABEL_12;
                case 4:
                  goto LABEL_67;
                case 5:
                  goto jpt_100133EA8;
              }
            }
            LOBYTE(v78) = BYTE1(v48[0]);
            *(_QWORD *)&v76[14] = v48[3];
            *(_OWORD *)v76 = *(_OWORD *)((char *)&v48[1] + 2);
            v75 = *(_QWORD *)((char *)v48 + 2);
            core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9((__int64)__srca);
          }
          core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb((__int64)v79);
          LOBYTE(v28) = 1;
          if ( __OFSUB__(0, *v6) )
            goto LABEL_54;
          v77 = __src + 1984;
          v29 = *((_QWORD *)__src + 248);
          for ( i = *((_QWORD *)__src + 249) + 1LL; i != 1; --i )
          {
            core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v29);
            v29 += 96;
          }
          v31 = *v6;
          LOBYTE(v28) = 1;
          if ( !*v6 )
            goto LABEL_54;
          goto LABEL_53;
        case 1:
LABEL_61:
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019522D0);
        case 2:
LABEL_60:
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019522D0);
        case 3:
          goto LABEL_6;
      }
  }
LABEL_6:
  v77 = __src + 2504;
  v8 = (unsigned __int8)__src[2504];
  v78 = __src + 2168;
  switch ( v8 )
  {
    case 0LL:
      goto LABEL_10;
    case 1LL:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101953108);
    case 2LL:
      JUMPOUT(0x100134886LL);
    case 3LL:
      v70 = __src + 2336;
      switch ( __src[2497] )
      {
        case 0:
LABEL_11:
          memcpy(__dst, v70, 0x98u);
          __dst[152] = __src[2496];
          *((_QWORD *)__src + 311) = tauri::async_runtime::spawn_blocking::h6be8ba2efc5d4e28(__dst);
          break;
        case 1:
LABEL_65:
          JUMPOUT(0x100134874LL);
        case 2:
LABEL_62:
          v79 = v5;
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019527B0);
        case 3:
          break;
        case 4:
LABEL_67:
          JUMPOUT(0x100976A07LL);
        case 5:
jpt_100133EA8:
          JUMPOUT(0x100134AF8LL);
      }
LABEL_12:
      v79 = v5;
      v10 = __src + 2488;
      v11 = __src + 2488;
      _$LT$tokio..runtime..task..join..JoinHandle$LT$T$GT$$u20$as$u20$core..future..future..Future$GT$::poll::hf25f93b4f1807321(
        __dst,
        __src + 2488,
        a2);
      v12 = *(_QWORD *)__dst;
      if ( *(_QWORD *)__dst == 0x8000000000000002LL )
      {
        __src[2497] = 3;
LABEL_31:
        *v77 = 3;
        goto LABEL_32;
      }
      if ( *(_QWORD *)__dst == 0x8000000000000001LL )
      {
        v13 = *(void **)&__dst[8];
        v72 = *(_OWORD *)&__dst[16];
        v71 = 0x800000000000000CLL;
      }
      else
      {
        v71 = *(_QWORD *)&__dst[8];
        v13 = *(void **)&__dst[16];
        v72 = *(_OWORD *)&__dst[24];
        v65 = *(_QWORD *)&__dst[40];
        v66 = *(void **)&__dst[48];
        __n = *(_QWORD *)&__dst[56];
        v68 = *(_QWORD *)&__dst[64];
      }
      v61 = v65;
      v62 = v66;
      v63 = __n;
      v64 = v68;
      v14 = (_BYTE *)*v10;
      v15 = (_BYTE *)*v10;
      if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(*v10) )
      {
        v15 = v14;
        tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v14);
      }
      v16 = v13;
      if ( __OFSUB__(-v12, 1) )
      {
        v17 = v71;
        v18 = v72;
        goto LABEL_23;
      }
      if ( v12 == 0x8000000000000001LL )
      {
        *(_QWORD *)__dst = v71;
        *(_QWORD *)&__dst[8] = v13;
        *(_OWORD *)&__dst[16] = v72;
        *(_QWORD *)&__dst[32] = v61;
        *(_QWORD *)&__dst[40] = v62;
        v50 = __dst;
        v51 = _$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80;
        v11 = "%failed to join trigger capture task: \xC0src/commands/relay.rs";
        alloc::fmt::format::format_inner::h3c16c74008a310d4(
          &v65,
          "%failed to join trigger capture task: \xC0src/commands/relay.rs",
          a3);
        v15 = __dst;
        core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859((__int64 *)__dst);
        v17 = v65;
        v16 = v66;
        v18 = __n;
LABEL_23:
        __src[2497] = 1;
LABEL_24:
        v19 = v16;
        if ( v18 < 0 )
        {
          v20 = 0;
          goto LABEL_26;
        }
        if ( v18 )
        {
          v21 = v18;
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v15, v11);
          v20 = 1;
          v22 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v21, 1);
          v18 = v21;
          if ( !v22 )
LABEL_26:
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v20, v18);
          v23 = v22;
        }
        else
        {
          v23 = 1;
        }
        v32 = v18;
        memcpy((void *)v23, v19, v18);
        if ( v17 )
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v17, 1);
        v74.i8[0] = 3;
        v74.i64[1] = v32;
        v74.i64[2] = v23;
        v74.i64[3] = v32;
        LOBYTE(v28) = 1;
        v7 = 3;
        goto LABEL_47;
      }
      v39 = v61;
      v40 = v62;
      v41 = v63;
      v42 = v64;
      v37[0] = v12;
      v37[1] = v71;
      v37[2] = v13;
      v38 = v72;
      codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hd65ecbd130151bb9((__int64)__dst, v37);
      v24 = *(_QWORD *)__dst;
      v17 = *(_QWORD *)&__dst[8];
      v16 = *(void **)&__dst[16];
      v25 = *(_QWORD *)&__dst[32];
      v18 = *(_QWORD *)&__dst[24];
      qmemcpy(v58, &__dst[40], sizeof(v58));
      __src[2497] = 1;
      if ( v24 == 0x8000000000000001LL )
        goto LABEL_31;
      qmemcpy(v48, v58, sizeof(v48));
      v11 = (char *)&v59;
      v15 = __dst;
      if ( v24 == 0x8000000000000000LL )
        goto LABEL_24;
      qmemcpy(&__srca[5], v48, 0x70u);
      __srca[0] = v24;
      __srca[1] = v17;
      __srca[2] = v16;
      *(_OWORD *)&__srca[3] = __PAIR128__(v25, v18);
      _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::h4983d4200e65beda(__dst, __srca);
      *(_QWORD *)v58 = *(_QWORD *)&__dst[8];
      *(_OWORD *)&v58[8] = *(_OWORD *)&__dst[16];
      *(_QWORD *)&v58[24] = *(_QWORD *)&__dst[32];
      if ( *(_QWORD *)__dst == 0x8000000000000025LL )
      {
        v7 = v58[0];
        v74 = *(__m256i *)v58;
        LOBYTE(v28) = 0;
        LOBYTE(v78) = v58[1];
LABEL_47:
        *(_QWORD *)&v69[22] = v74.i64[3];
        *(_OWORD *)&v69[8] = *(__int128 *)((char *)v74.i128 + 10);
        *(_QWORD *)v69 = *(__int64 *)((char *)v74.i64 + 2);
        *v77 = 1;
        goto LABEL_48;
      }
      v44[0] = *(_QWORD *)__dst;
      v44[1] = *(_QWORD *)v58;
      v45 = *(_OWORD *)&v58[8];
      v46 = *(_QWORD *)&v58[24];
      v47 = *(_QWORD *)&__dst[40];
      _$LT$core..result..Result$LT$T$C$F$GT$$u20$as$u20$core..ops..try_trait..FromResidual$LT$core..result..Result$LT$core..convert..Infallible$C$E$GT$$GT$$GT$::from_residual::hb033d94ed20710ab(
        &v73,
        v44);
      v28 = v73;
      v7 = v74.i8[0];
      LOBYTE(v78) = v74.i8[1];
      *(_OWORD *)v69 = *(__int128 *)((char *)v74.i128 + 2);
      *(_QWORD *)&v69[16] = *(__int64 *)((char *)&v74.i64[2] + 2);
      *(_QWORD *)&v69[22] = v74.i64[3];
      *v77 = 1;
      if ( v28 == 2 )
      {
LABEL_32:
        __src[2512] = 3;
        v26 = 3;
        result = 1;
        goto LABEL_55;
      }
LABEL_48:
      *(_QWORD *)&v76[14] = *(_QWORD *)&v69[22];
      *(_OWORD *)v76 = *(_OWORD *)&v69[8];
      v75 = *(_QWORD *)v69;
      core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb((__int64)v79);
      if ( !__OFSUB__(0, *((_QWORD *)__src + 247)) )
      {
        v77 = __src + 1984;
        v33 = *((_QWORD *)__src + 248);
        for ( j = *((_QWORD *)__src + 249) + 1LL; j != 1; --j )
        {
          core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v33);
          v33 += 96;
        }
        v31 = *((_QWORD *)__src + 247);
        if ( v31 )
LABEL_53:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v77, 96 * v31, 8);
      }
LABEL_54:
      *(_QWORD *)&v60[14] = *(_QWORD *)&v76[14];
      *(_OWORD *)v60 = *(_OWORD *)v76;
      v59 = v75;
      __src[2512] = 1;
      core::ptr::drop_in_place$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$::hb48896a609535bf1((__int64)v79);
      *(_QWORD *)&v57[6] = *(_QWORD *)&v60[14];
      *(_QWORD *)v57 = *(_QWORD *)&v60[8];
      v56 = *(_QWORD *)v60;
      v55 = v59;
      v53 = v7;
      v54 = (char)v78;
      v52 = v28 & 1;
      __src[2531] = 0;
      memcpy(__dst, __src, sizeof(__dst));
      __src[2530] = 0;
      v35 = *((_QWORD *)__src + 48);
      __src[2529] = 0;
      __srca[2] = *((_QWORD *)__src + 47);
      v36 = *((_QWORD *)__src + 45);
      __srca[1] = *((_QWORD *)__src + 46);
      __srca[0] = v36;
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
        __dst,
        v35,
        &v52,
        __srca,
        *((unsigned int *)__src + 630),
        *((unsigned int *)__src + 631));
      v26 = 1;
      result = 0;
LABEL_55:
      __src[2528] = v26;
      return result;
  }
}
