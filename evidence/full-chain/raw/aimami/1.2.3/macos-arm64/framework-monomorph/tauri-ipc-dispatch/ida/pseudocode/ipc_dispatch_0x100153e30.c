/* addr=0x100153e30 cleanname=ipc_dispatch group=tauri-ipc-dispatch
 * decompiled via py_exec_file server-side ida_hexrays.decompile
 * n_lines=484 brace_balanced=True truncation_markers=[]
 */
char __fastcall tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized_inner::_$u7b$$u7b$closure$u7d$$u7d$::h40b3cc932c2a9774(
        unsigned __int8 *__src,
        unsigned __int64 a2)
{
  __int64 v3; // rax
  char *v4; // r12
  _QWORD *v5; // r14
  __int8 v6; // r13
  char *v7; // r14
  _QWORD *v8; // r15
  unsigned __int64 v9; // rcx
  __int64 v10; // r12
  char v11; // of
  volatile signed __int64 *v12; // r15
  __int64 v13; // rt0
  __int64 v14; // r14
  volatile signed __int64 *v15; // r12
  __int64 v16; // rt0
  char *v17; // r13
  __int64 *v18; // r13
  __int64 v19; // r14
  char v20; // cl
  char result; // al
  __int64 v22; // r12
  __int64 v23; // rdi
  __int64 v24; // r13
  __m256i *v25; // rsi
  signed __int64 v26; // r15
  unsigned __int64 v27; // r13
  _QWORD *v28; // rdi
  __int64 v29; // r12
  __int64 v30; // rdi
  __int64 i; // r12
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // r13
  void *v35; // r14
  __int64 v36; // rdi
  __int64 j; // r12
  __int64 v38; // rsi
  __int64 v39; // rax
  _BYTE v40[176]; // [rsp+8h] [rbp-BB8h] BYREF
  _BYTE __dst[136]; // [rsp+B8h] [rbp-B08h] BYREF
  _QWORD v42[56]; // [rsp+140h] [rbp-A80h] BYREF
  _BYTE __srca[488]; // [rsp+300h] [rbp-8C0h] BYREF
  _OWORD v44[28]; // [rsp+4E8h] [rbp-6D8h] BYREF
  __m256i v45[14]; // [rsp+6A8h] [rbp-518h] BYREF
  _BYTE v46[488]; // [rsp+868h] [rbp-358h] BYREF
  __int64 v47; // [rsp+A50h] [rbp-170h] BYREF
  __m256i v48; // [rsp+A58h] [rbp-168h]
  __int64 v49; // [rsp+A78h] [rbp-148h]
  signed __int64 v50; // [rsp+A80h] [rbp-140h] BYREF
  __int8 v51; // [rsp+A88h] [rbp-138h]
  __int64 v52; // [rsp+A89h] [rbp-137h]
  __int64 v53; // [rsp+A91h] [rbp-12Fh]
  _BYTE v54[15]; // [rsp+A99h] [rbp-127h]
  _QWORD v55[2]; // [rsp+AA8h] [rbp-118h] BYREF
  __int64 v56; // [rsp+AB8h] [rbp-108h]
  _BYTE v57[23]; // [rsp+AC0h] [rbp-100h]
  __int64 v58; // [rsp+AD8h] [rbp-E8h]
  __m128i v59; // [rsp+AE0h] [rbp-E0h] BYREF
  _OWORD v60[2]; // [rsp+AF0h] [rbp-D0h]
  signed __int64 v61; // [rsp+B10h] [rbp-B0h] BYREF
  __m256i v62; // [rsp+B18h] [rbp-A8h]
  _BYTE *v63; // [rsp+B38h] [rbp-88h]
  __int64 v64; // [rsp+B40h] [rbp-80h]
  _BYTE v65[31]; // [rsp+B48h] [rbp-78h]
  char *v66; // [rsp+B68h] [rbp-58h]
  _BYTE *v67; // [rsp+B70h] [rbp-50h]
  void *v68; // [rsp+B78h] [rbp-48h]
  unsigned __int64 v69; // [rsp+B80h] [rbp-40h]
  _QWORD *v70; // [rsp+B88h] [rbp-38h]
  char *v71; // [rsp+B90h] [rbp-30h]

  v3 = __src[4688];
  v69 = a2;
  switch ( v3 )
  {
    case 0LL:
      *(_WORD *)(__src + 4689) = 257;
      __src[4691] = 1;
      v4 = (char *)(__src + 2536);
      memcpy(__src + 2536, __src + 392, 0x860u);
      switch ( __src[4672] )
      {
        case 0u:
          goto LABEL_4;
        case 1u:
          goto LABEL_62;
        case 2u:
          goto LABEL_61;
        case 3u:
          goto LABEL_6;
      }
    case 1LL:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019530F0);
    case 2LL:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019530F0);
    case 3LL:
      v4 = (char *)(__src + 2536);
      switch ( __src[4672] )
      {
        case 0u:
LABEL_4:
          v5 = __src + 3056;
          *(_QWORD *)&v44[3] = 0;
          *(_QWORD *)&v44[0] = "switch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          *((_QWORD *)&v44[0] + 1) = 32;
          *(_QWORD *)&v44[1] = "appexport_accounts_to_filetargetPathaccountKeysload_usage_analyticsconfirm_pending_auto_switchexport_debug_bundlemanagerimport_accounts_from_fileexpectedContentSha256overwriteExistingselectedKeysload_snapshotlocalOnlyforceMetadataupload_debug_reportinputtest_relay_provider_streamproviderIdmodelonEventmigrate_session_worktreemutationGatesessionIdload_sessionsrefresh_single_account_usageaccountKeyload_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          *((_QWORD *)&v44[1] + 1) = 3;
          v71 = v4;
          *(_QWORD *)&v44[2] = v4;
          *((_QWORD *)&v44[2] + 1) = __src + 3056;
          _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(v46);
          v6 = v46[8];
          v42[0] = *(_QWORD *)&v46[9];
          *(_OWORD *)&v42[1] = *(_OWORD *)&v46[17];
          *(_QWORD *)((char *)&v42[2] + 7) = *(_QWORD *)&v46[32];
          if ( *(_QWORD *)v46 == 3 )
          {
            *(_QWORD *)v65 = v42[0];
            *(_OWORD *)&v65[8] = *(_OWORD *)&v42[1];
            *(_QWORD *)&v65[23] = *(_QWORD *)((char *)&v42[2] + 7);
          }
          else
          {
            qmemcpy(&__srca[40], &v46[40], 0x70u);
            *(_QWORD *)&__srca[9] = v42[0];
            *(_OWORD *)&__srca[17] = *(_OWORD *)&v42[1];
            *(_QWORD *)&__srca[32] = *(_QWORD *)((char *)&v42[2] + 7);
            *(_QWORD *)__srca = *(_QWORD *)v46;
            __srca[8] = v46[8];
            *(_QWORD *)&v46[48] = 0;
            *(_QWORD *)v46 = "switch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
            *(_QWORD *)&v46[8] = 32;
            *(_QWORD *)&v46[16] = "accountKeyload_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
            *(_QWORD *)&v46[24] = 10;
            *(_QWORD *)&v46[32] = v71;
            *(_QWORD *)&v46[40] = __src + 3056;
            _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(v44, v46);
            v6 = v44[0];
            if ( LOBYTE(v44[0]) == 6 )
            {
              *(__int128 *)((char *)v45[0].i128 + 15) = v44[1];
              *(__int64 *)((char *)v45[0].i64 + 7) = *((_QWORD *)&v44[0] + 1);
              memcpy(__src + 3080, __srca, 0x98u);
              v9 = *(unsigned __int64 *)((char *)&v45[0].u64[1] + 7);
              *((_QWORD *)__src + 404) = *(__int64 *)((char *)v45[0].i64 + 7);
              *(_OWORD *)(__src + 3240) = __PAIR128__(*(unsigned __int64 *)((char *)&v45[0].u64[2] + 7), v9);
              __src[3600] = 0;
              v7 = (char *)(__src + 3608);
              memcpy(__src + 3608, __src + 3080, 0x210u);
              v67 = __src + 4664;
              __src[4664] = 0;
              v4 = v71;
LABEL_10:
              v8 = __src + 4136;
              memcpy(__src + 4136, v7, 0x210u);
              switch ( __src[4656] )
              {
                case 0u:
                  goto LABEL_11;
                case 1u:
                  goto LABEL_64;
                case 2u:
                  goto LABEL_63;
                case 3u:
                  goto LABEL_14;
              }
            }
            *(__int64 *)((char *)&v45[0].i64[2] + 7) = *((_QWORD *)&v44[1] + 1);
            *(__int128 *)((char *)v45[0].i128 + 8) = *(_OWORD *)((char *)v44 + 9);
            v45[0].i64[0] = *(_QWORD *)((char *)v44 + 1);
            *(_OWORD *)v65 = *(_OWORD *)((char *)v44 + 1);
            *(_QWORD *)&v65[16] = *(_QWORD *)((char *)&v44[1] + 1);
            *(_QWORD *)&v65[23] = *(__int64 *)((char *)&v45[0].i64[2] + 7);
            core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9((__int64)__srca);
          }
          core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb((__int64)v71);
          LOBYTE(v26) = 1;
          if ( __OFSUB__(0, *v5) )
            goto LABEL_57;
          v70 = __src + 3064;
          v30 = *((_QWORD *)__src + 383);
          for ( i = *((_QWORD *)__src + 384) + 1LL; i != 1; --i )
          {
            core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v30);
            v30 += 96;
          }
          v32 = *v5;
          LOBYTE(v26) = 1;
          if ( !*v5 )
            goto LABEL_57;
          goto LABEL_56;
        case 1u:
LABEL_62:
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019522D0);
        case 2u:
LABEL_61:
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019522D0);
        case 3u:
          goto LABEL_6;
      }
  }
LABEL_6:
  v67 = __src + 4664;
  v7 = (char *)(__src + 3608);
  switch ( __src[4664] )
  {
    case 0u:
      goto LABEL_10;
    case 1u:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101953108);
    case 2u:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101953108);
    case 3u:
      v8 = __src + 4136;
      switch ( __src[4656] )
      {
        case 0u:
LABEL_11:
          v71 = v4;
          v70 = v8;
          memcpy(__src + 4312, v8, 0x98u);
          __src[4657] = 1;
          v64 = *((_QWORD *)__src + 536);
          v58 = *((_QWORD *)__src + 537);
          v10 = *((_QWORD *)__src + 538);
          _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(
            v46,
            __src + 4312);
          v12 = *((volatile signed __int64 **)__src + 556);
          v13 = _InterlockedIncrement64(v12);
          if ( (v13 < 0) ^ v11 | (v13 == 0)
            || (v14 = v10,
                v15 = *((volatile signed __int64 **)__src + 557),
                v16 = _InterlockedIncrement64(v15),
                (v16 < 0) ^ v11 | (v16 == 0)) )
          {
            BUG();
          }
          memcpy(__dst, v46, sizeof(__dst));
          __src[4657] = 0;
          v17 = (char *)(__src + 4464);
          memcpy(__src + 4464, __dst, 0x88u);
          *((_QWORD *)__src + 575) = v12;
          *((_QWORD *)__src + 576) = v15;
          *((_QWORD *)__src + 577) = v64;
          *((_QWORD *)__src + 578) = v58;
          *((_QWORD *)__src + 579) = v14;
          v63 = __src + 4648;
          __src[4648] = 0;
          v4 = v71;
          v8 = v70;
LABEL_15:
          memcpy(v40, v17, sizeof(v40));
          v71 = v4;
          v70 = v8;
          v66 = v17;
          *((_QWORD *)__src + 580) = tauri::async_runtime::spawn_blocking::h16e4ec3f1101b6f7(v40);
LABEL_17:
          v18 = (__int64 *)(__src + 4640);
          _$LT$tokio..runtime..task..join..JoinHandle$LT$T$GT$$u20$as$u20$core..future..future..Future$GT$::poll::hc15b857fd7c934ae(v46);
          v19 = *(_QWORD *)v46;
          if ( *(_QWORD *)v46 == 4 )
          {
            __src[4648] = 3;
            __src[4656] = 3;
            __src[4664] = 3;
            goto LABEL_21;
          }
          if ( *(_DWORD *)v46 == 3 )
          {
            v68 = *(void **)&v46[8];
            v59 = _mm_loadu_si128((const __m128i *)&v46[16]);
            v69 = 0x800000000000000CLL;
          }
          else
          {
            v69 = *(_QWORD *)&v46[8];
            v68 = *(void **)&v46[16];
            v59 = _mm_loadu_si128((const __m128i *)&v46[24]);
            memcpy(v42, &v46[40], sizeof(v42));
          }
          memcpy(v45, v42, sizeof(v45));
          v22 = *v18;
          v23 = *v18;
          v24 = (__int64)v66;
          if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v23) )
            tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v22);
          if ( (_DWORD)v19 == 3 )
          {
            *(_QWORD *)v46 = v69;
            *(_QWORD *)&v46[8] = v68;
            *(__m128i *)&v46[16] = _mm_load_si128(&v59);
            *(_OWORD *)&v46[32] = v45[0].i128[0];
            v55[0] = v46;
            v55[1] = _$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80;
            v25 = (__m256i *)"\x1EBlocking command task failed: \xC0src/commands/debug_bundle.rs";
            alloc::fmt::format::format_inner::h3c16c74008a310d4(
              v42,
              "\x1EBlocking command task failed: \xC0src/commands/debug_bundle.rs",
              v55);
            core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859((__int64 *)v46);
            v69 = v42[0];
            v26 = v42[2];
            v68 = (void *)v42[1];
            v59 = (__m128i)v42[2];
            v19 = 2;
          }
          else
          {
            v26 = _mm_load_si128(&v59).u64[0];
            v25 = v45;
            memcpy(v44, v45, sizeof(v44));
          }
          *v63 = 1;
          core::ptr::drop_in_place$LT$codexmate_lib..commands..accounts..run_blocking_command$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..SwitchPayload$GT$$C$codexmate_lib..commands..accounts..switch_account..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h9a38fa165790d9a2(v24);
          __src[4657] = 0;
          core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9((__int64)(__src + 4312));
          v27 = v69;
          __src[4656] = 1;
          v28 = v70;
          core::ptr::drop_in_place$LT$codexmate_lib..commands..accounts..switch_account_and_restart_codex..$u7b$$u7b$closure$u7d$$u7d$$GT$::h885d23335f2c4e91((__int64)v70);
          if ( (_DWORD)v19 == 2 )
          {
            if ( v26 < 0 )
            {
              v29 = 0;
              goto LABEL_31;
            }
            if ( v26 )
            {
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v28, v25);
              v29 = 1;
              v33 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v26, 1);
              if ( !v33 )
LABEL_31:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v29, v26);
              v34 = v33;
            }
            else
            {
              v34 = 1;
            }
            v35 = v68;
            memcpy((void *)v34, v68, v26);
            if ( v69 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35, v69, 1);
            v62.i8[0] = 3;
            v62.i64[1] = v26;
            v62.i64[2] = v34;
            v62.i64[3] = v26;
            LOBYTE(v26) = 1;
            v6 = 3;
            goto LABEL_50;
          }
          memcpy(&__srca[40], v44, 0x1C0u);
          *(_QWORD *)__srca = v19;
          *(_QWORD *)&__srca[8] = v27;
          *(_QWORD *)&__srca[16] = v68;
          *(__m128i *)&__srca[24] = _mm_load_si128(&v59);
          _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::h04c2ca7e00c09ca6(v46, __srca);
          v45[0] = *(__m256i *)&v46[8];
          if ( *(_QWORD *)v46 == 0x8000000000000025LL )
          {
            v6 = v45[0].i8[0];
            v62 = v45[0];
            LOBYTE(v26) = 0;
LABEL_50:
            *(_QWORD *)((char *)&v60[1] + 7) = v62.i64[3];
            *(_OWORD *)((char *)v60 + 8) = *(__int128 *)((char *)v62.i128 + 9);
            *(_QWORD *)&v60[0] = *(__int64 *)((char *)v62.i64 + 1);
            *v67 = 1;
            goto LABEL_51;
          }
          v47 = *(_QWORD *)v46;
          v48 = v45[0];
          v49 = *(_QWORD *)&v46[40];
          _$LT$core..result..Result$LT$T$C$F$GT$$u20$as$u20$core..ops..try_trait..FromResidual$LT$core..result..Result$LT$core..convert..Infallible$C$E$GT$$GT$$GT$::from_residual::hb033d94ed20710ab(
            &v61,
            &v47);
          v26 = v61;
          v6 = v62.i8[0];
          v60[0] = *(__int128 *)((char *)v62.i128 + 1);
          *(_QWORD *)&v60[1] = *(__int64 *)((char *)&v62.i64[2] + 1);
          *(_QWORD *)((char *)&v60[1] + 7) = v62.i64[3];
          *v67 = 1;
          if ( v26 == 2 )
          {
LABEL_21:
            __src[4672] = 3;
            v20 = 3;
            result = 1;
            goto LABEL_58;
          }
LABEL_51:
          *(_QWORD *)&v65[23] = *(_QWORD *)((char *)&v60[1] + 7);
          *(_OWORD *)&v65[8] = *(_OWORD *)((char *)v60 + 8);
          *(_QWORD *)v65 = *(_QWORD *)&v60[0];
          core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb((__int64)v71);
          if ( *((_QWORD *)__src + 382) != 0x8000000000000000LL )
          {
            v70 = __src + 3064;
            v36 = *((_QWORD *)__src + 383);
            for ( j = *((_QWORD *)__src + 384) + 1LL; j != 1; --j )
            {
              core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v36);
              v36 += 96;
            }
            v32 = *((_QWORD *)__src + 382);
            if ( v32 )
LABEL_56:
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v70, 96 * v32, 8);
          }
LABEL_57:
          *(_QWORD *)&v57[15] = *(_QWORD *)&v65[23];
          *(_OWORD *)v57 = *(_OWORD *)&v65[8];
          v56 = *(_QWORD *)v65;
          __src[4672] = 1;
          core::ptr::drop_in_place$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h7395d78e91709c9b((__int64)v71);
          *(_QWORD *)&v54[7] = *(_QWORD *)&v57[15];
          *(_QWORD *)v54 = *(_QWORD *)&v57[8];
          v53 = *(_QWORD *)v57;
          v52 = v56;
          v51 = v6;
          v50 = v26 & 1;
          __src[4691] = 0;
          memcpy(v46, __src, 0x168u);
          __src[4690] = 0;
          v38 = *((_QWORD *)__src + 48);
          __src[4689] = 0;
          *(_QWORD *)&__srca[16] = *((_QWORD *)__src + 47);
          v39 = *((_QWORD *)__src + 45);
          *(_QWORD *)&__srca[8] = *((_QWORD *)__src + 46);
          *(_QWORD *)__srca = v39;
          tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
            v46,
            v38,
            &v50,
            __srca,
            *((unsigned int *)__src + 1170),
            *((unsigned int *)__src + 1171));
          v20 = 1;
          result = 0;
LABEL_58:
          __src[4688] = v20;
          return result;
        case 1u:
LABEL_64:
          v70 = v8;
          JUMPOUT(0x100154A70LL);
        case 2u:
LABEL_63:
          v70 = v8;
          v71 = v4;
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101952B28);
        case 3u:
LABEL_14:
          v63 = __src + 4648;
          v17 = (char *)(__src + 4464);
          switch ( __src[4648] )
          {
            case 0u:
              goto LABEL_15;
            case 1u:
              v66 = (char *)(__src + 4464);
              v70 = v8;
              v71 = v4;
              core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101952AE0);
            case 2u:
              v66 = (char *)(__src + 4464);
              v70 = v8;
              JUMPOUT(0x100154AA6LL);
            case 3u:
              v66 = (char *)(__src + 4464);
              v70 = v8;
              v71 = v4;
              goto LABEL_17;
          }
      }
  }
}
