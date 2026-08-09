/* addr=0x10012f740 cleanname=ipc_dispatch group=tauri-ipc-dispatch
 * decompiled via py_exec_file server-side ida_hexrays.decompile
 * n_lines=567 brace_balanced=True truncation_markers=[]
 */
char __fastcall tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized_inner::_$u7b$$u7b$closure$u7d$$u7d$::h0ab3381e0b11a8f3(
        char *__src,
        __int64 a2)
{
  bool v2; // of
  __int64 v5; // r15
  _QWORD *v6; // r14
  __int64 v7; // rax
  char v8; // r13
  _QWORD *v9; // r13
  __int64 v10; // rcx
  char *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  volatile signed __int64 **v14; // rcx
  volatile signed __int64 *v15; // rax
  __int64 v16; // rt0
  volatile signed __int64 *v17; // rdx
  __int64 v18; // rt0
  volatile signed __int64 *v19; // rsi
  __int64 v20; // rt0
  volatile signed __int64 *v21; // rdi
  __int64 v22; // rt0
  volatile signed __int64 *v23; // r8
  __int64 v24; // rt0
  volatile signed __int64 *v25; // r9
  __int64 v26; // rt0
  volatile signed __int64 *v27; // r10
  volatile signed __int64 *v28; // rcx
  __int64 **v29; // r13
  char *v30; // rsi
  __int64 v31; // r14
  unsigned __int64 v32; // r12
  __int64 *v33; // r15
  __int64 *v34; // rdi
  __int64 v35; // r13
  __int64 v36; // r12
  __m128i si128; // xmm0
  __int64 v38; // r14
  __int64 v39; // rax
  __int64 v40; // r15
  __int64 v41; // rax
  __m128i v42; // xmm0
  void *v43; // r14
  _BYTE *v44; // r12
  char v45; // cl
  char result; // al
  __int64 v47; // rdi
  __int64 j; // r12
  __int64 v49; // rdi
  __int64 i; // r12
  __int64 v51; // rax
  __int64 v52; // rsi
  __int64 v53; // rax
  _BYTE v54[72]; // [rsp+8h] [rbp-438h] BYREF
  unsigned __int64 v55; // [rsp+50h] [rbp-3F0h] BYREF
  __m128i v56; // [rsp+58h] [rbp-3E8h]
  _QWORD *v57; // [rsp+68h] [rbp-3D8h]
  __int64 v58; // [rsp+70h] [rbp-3D0h] BYREF
  __int128 v59; // [rsp+78h] [rbp-3C8h]
  __int128 v60; // [rsp+88h] [rbp-3B8h]
  __int64 v61; // [rsp+98h] [rbp-3A8h]
  __int64 v62; // [rsp+A0h] [rbp-3A0h] BYREF
  __int64 v63; // [rsp+A8h] [rbp-398h]
  void *v64; // [rsp+B0h] [rbp-390h]
  __m128i v65; // [rsp+B8h] [rbp-388h]
  _BYTE v66[72]; // [rsp+C8h] [rbp-378h] BYREF
  _BYTE __dst[360]; // [rsp+110h] [rbp-330h] BYREF
  _BYTE v68[72]; // [rsp+278h] [rbp-1C8h] BYREF
  __int64 v69; // [rsp+2C0h] [rbp-180h] BYREF
  char v70; // [rsp+2C8h] [rbp-178h]
  _BYTE v71[7]; // [rsp+2C9h] [rbp-177h]
  _BYTE *v72; // [rsp+2D0h] [rbp-170h]
  unsigned __int128 v73; // [rsp+2D8h] [rbp-168h]
  unsigned __int128 v74; // [rsp+2E8h] [rbp-158h]
  unsigned __int128 v75; // [rsp+2F8h] [rbp-148h]
  __int64 v76; // [rsp+308h] [rbp-138h]
  __int64 (__fastcall **v77)(); // [rsp+310h] [rbp-130h]
  size_t v78; // [rsp+318h] [rbp-128h]
  __int64 v79; // [rsp+320h] [rbp-120h]
  __int64 v80; // [rsp+328h] [rbp-118h]
  __int64 v81; // [rsp+330h] [rbp-110h]
  __int64 v82; // [rsp+338h] [rbp-108h]
  unsigned __int128 v83; // [rsp+340h] [rbp-100h]
  _QWORD *v84; // [rsp+350h] [rbp-F0h] BYREF
  __int64 (__fastcall **v85)(); // [rsp+358h] [rbp-E8h]
  size_t __n; // [rsp+360h] [rbp-E0h]
  __int64 v87; // [rsp+368h] [rbp-D8h]
  __int64 v88; // [rsp+370h] [rbp-D0h]
  __int64 v89; // [rsp+378h] [rbp-C8h]
  __int64 v90; // [rsp+380h] [rbp-C0h]
  __int64 v91; // [rsp+388h] [rbp-B8h] BYREF
  __int128 v92; // [rsp+390h] [rbp-B0h]
  unsigned __int128 v93; // [rsp+3A0h] [rbp-A0h]
  _BYTE *v94; // [rsp+3B0h] [rbp-90h] BYREF
  __int64 v95; // [rsp+3B8h] [rbp-88h]
  __int64 v96; // [rsp+3C0h] [rbp-80h]
  _DWORD v97[2]; // [rsp+3C8h] [rbp-78h]
  _BYTE v98[7]; // [rsp+3D0h] [rbp-70h]
  _QWORD *v99; // [rsp+3D8h] [rbp-68h]
  void *__srca[2]; // [rsp+3E0h] [rbp-60h] BYREF
  _BYTE v101[7]; // [rsp+3F8h] [rbp-48h]
  char v102; // [rsp+3FFh] [rbp-41h] BYREF
  _QWORD *v103; // [rsp+400h] [rbp-40h]
  _BYTE *v104; // [rsp+408h] [rbp-38h]
  __int64 v105; // [rsp+410h] [rbp-30h]

  v2 = 0;
  switch ( __src[1712] )
  {
    case 0:
      *(_WORD *)(__src + 1713) = 257;
      __src[1715] = 1;
      v5 = (__int64)(__src + 1048);
      memcpy(__src + 1048, __src + 392, 0x290u);
      switch ( __src[1696] )
      {
        case 0:
          goto LABEL_4;
        case 1:
          goto LABEL_72;
        case 2:
          goto LABEL_71;
        case 3:
          goto LABEL_8;
      }
    case 1:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019530F0);
    case 2:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019530F0);
    case 3:
      v5 = (__int64)(__src + 1048);
      switch ( __src[1696] )
      {
        case 0:
LABEL_4:
          v6 = __src + 1568;
          *(_QWORD *)&__dst[48] = 0;
          *(_QWORD *)__dst = "run_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          *(_QWORD *)&__dst[8] = 28;
          *(_QWORD *)&__dst[16] = "managerimport_accounts_from_fileexpectedContentSha256overwriteExistingselectedKeysload_snapshotlocalOnlyforceMetadataupload_debug_reportinputtest_relay_provider_streamproviderIdmodelonEventmigrate_session_worktreemutationGatesessionIdload_sessionsrefresh_single_account_usageaccountKeyload_token_analyticsrangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          *(_QWORD *)&__dst[24] = 7;
          *(_QWORD *)&__dst[32] = v5;
          *(_QWORD *)&__dst[40] = __src + 1568;
          v7 = tauri::state::StateManager::try_get::h5f9a3d34015fcee9(*((_QWORD *)__src + 195) + 16LL);
          v2 = 0;
          if ( v7 )
            goto LABEL_7;
          _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe(
            &v62,
            __dst,
            &__dst[16]);
          v8 = v62;
          v2 = __OFSUB__((_BYTE)v62, 6);
          if ( (_BYTE)v62 == 6 )
          {
            v7 = v63;
LABEL_7:
            *((_QWORD *)__src + 199) = v7;
            __src[1616] = 0;
            v9 = __src + 1624;
            *((_QWORD *)__src + 203) = v7;
            v10 = *((_QWORD *)__src + 201);
            *((_QWORD *)__src + 204) = *((_QWORD *)__src + 200);
            *((_QWORD *)__src + 205) = v10;
            *((_QWORD *)__src + 206) = *((_QWORD *)__src + 202);
            v11 = __src + 1688;
            __src[1688] = 0;
            *((_QWORD *)__src + 210) = *((_QWORD *)__src + 206);
            *((_QWORD *)__src + 209) = *((_QWORD *)__src + 205);
            v12 = *((_QWORD *)__src + 203);
            *((_QWORD *)__src + 208) = *((_QWORD *)__src + 204);
            *((_QWORD *)__src + 207) = v12;
            switch ( __src[1680] )
            {
              case 0:
                goto LABEL_11;
              case 1:
                goto LABEL_74;
              case 2:
                goto LABEL_73;
              case 3:
                goto LABEL_21;
            }
          }
          *(_DWORD *)&v101[3] = HIDWORD(v62);
          *(_DWORD *)v101 = *(_DWORD *)((char *)&v62 + 1);
          v44 = (_BYTE *)v63;
          v83 = __PAIR128__(v65.u64[0], (unsigned __int64)v64);
          v105 = v5;
          core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(v5);
          LOBYTE(v5) = 1;
          if ( __OFSUB__(0, *v6) )
            goto LABEL_63;
          v104 = v44;
          v103 = __src + 1576;
          v49 = *((_QWORD *)__src + 197);
          for ( i = *((_QWORD *)__src + 198) + 1LL; i != 1; --i )
          {
            core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v49);
            v49 += 96;
          }
          v51 = *v6;
          LOBYTE(v5) = 1;
          v44 = v104;
          if ( !*v6 )
            goto LABEL_63;
          goto LABEL_62;
        case 1:
LABEL_72:
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019522D0);
        case 2:
LABEL_71:
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019522D0);
        case 3:
          goto LABEL_8;
      }
  }
LABEL_8:
  v11 = __src + 1688;
  v9 = __src + 1624;
  switch ( __src[1688] )
  {
    case 0:
      *((_QWORD *)__src + 210) = *((_QWORD *)__src + 206);
      *((_QWORD *)__src + 209) = *((_QWORD *)__src + 205);
      v13 = *v9;
      *((_QWORD *)__src + 208) = *((_QWORD *)__src + 204);
      *((_QWORD *)__src + 207) = v13;
      switch ( __src[1680] )
      {
        case 0:
          goto LABEL_11;
        case 1:
          goto LABEL_74;
        case 2:
          goto LABEL_73;
        case 3:
          goto LABEL_21;
      }
    case 1:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101953108);
    case 2:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101953108);
    case 3:
      switch ( __src[1680] )
      {
        case 0:
LABEL_11:
          v14 = *((volatile signed __int64 ***)__src + 207);
          *((_QWORD *)__src + 208) = v14;
          v15 = *v14;
          v16 = _InterlockedIncrement64(*v14);
          if ( (v16 < 0) ^ v2 | (v16 == 0) )
            goto LABEL_78;
          v17 = v14[1];
          v18 = _InterlockedIncrement64(v17);
          if ( (v18 < 0) ^ v2 | (v18 == 0) )
            goto LABEL_78;
          v19 = v14[2];
          v20 = _InterlockedIncrement64(v19);
          if ( (v20 < 0) ^ v2 | (v20 == 0) )
            goto LABEL_78;
          v21 = v14[3];
          v22 = _InterlockedIncrement64(v21);
          if ( (v22 < 0) ^ v2 | (v22 == 0) )
            goto LABEL_78;
          v23 = v14[4];
          v24 = _InterlockedIncrement64(v23);
          if ( (v24 < 0) ^ v2 | (v24 == 0) )
            goto LABEL_78;
          v25 = v14[5];
          v26 = _InterlockedIncrement64(v25);
          if ( (v26 < 0) ^ v2 | (v26 == 0) )
            goto LABEL_78;
          v27 = v14[7];
          if ( v27 )
          {
            if ( _InterlockedIncrement64(v27) <= 0 )
              goto LABEL_78;
          }
          v28 = v14[6];
          if ( _InterlockedIncrement64(v28) <= 0 )
LABEL_78:
            BUG();
          *(_QWORD *)__dst = v15;
          *(_QWORD *)&__dst[8] = v17;
          *(_QWORD *)&__dst[16] = v19;
          *(_QWORD *)&__dst[24] = v21;
          *(_QWORD *)&__dst[32] = v23;
          *(_QWORD *)&__dst[40] = v25;
          *(_QWORD *)&__dst[48] = v28;
          *(_QWORD *)&__dst[56] = v27;
          *((_QWORD *)__src + 209) = tauri::async_runtime::spawn_blocking::hc5d6513a02803799(__dst);
          break;
        case 1:
LABEL_74:
          v99 = v9;
          JUMPOUT(0x10013036ALL);
        case 2:
LABEL_73:
          v99 = v9;
          v104 = v11;
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019528D0);
        case 3:
          break;
      }
LABEL_21:
      v99 = v9;
      v104 = v11;
      v29 = (__int64 **)(__src + 1672);
      v30 = __src + 1672;
      _$LT$tokio..runtime..task..join..JoinHandle$LT$T$GT$$u20$as$u20$core..future..future..Future$GT$::poll::h9ba19a0a0f7e1a69(
        __dst,
        __src + 1672,
        a2);
      v31 = *(_QWORD *)__dst;
      if ( *(_QWORD *)__dst == 13 )
      {
        __src[1680] = 3;
        goto LABEL_25;
      }
      v105 = v5;
      if ( *(_DWORD *)__dst == 12 )
      {
        *(__m128i *)__srca = _mm_loadu_si128((const __m128i *)&__dst[8]);
        v103 = *(_QWORD **)&__dst[24];
        v32 = 0x800000000000000CLL;
      }
      else
      {
        v32 = *(_QWORD *)&__dst[8];
        *(__m128i *)__srca = _mm_loadu_si128((const __m128i *)&__dst[16]);
        v103 = *(_QWORD **)&__dst[32];
        v84 = *(_QWORD **)&__dst[40];
        v85 = *(__int64 (__fastcall ***)())&__dst[48];
        __n = *(_QWORD *)&__dst[56];
        v87 = *(_QWORD *)&__dst[64];
        v88 = *(_QWORD *)&__dst[72];
        v89 = *(_QWORD *)&__dst[80];
        v90 = *(_QWORD *)&__dst[88];
      }
      v76 = (__int64)v84;
      v77 = v85;
      v78 = __n;
      v79 = v87;
      v80 = v88;
      v81 = v89;
      v82 = v90;
      v33 = *v29;
      v34 = *v29;
      if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(*v29) )
      {
        v34 = v33;
        tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v33);
      }
      if ( (_DWORD)v31 != 11 )
      {
        if ( (_DWORD)v31 == 12 )
        {
          *(_QWORD *)__dst = v32;
          *(__m128i *)&__dst[8] = _mm_load_si128((const __m128i *)__srca);
          *(_QWORD *)&__dst[24] = v103;
          *(_QWORD *)&__dst[32] = v76;
          *(_QWORD *)&__dst[40] = v77;
          v94 = __dst;
          v95 = (__int64)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80;
          v30 = "\"router diagnostics worker failed: \xC0src/commands/voice.rs";
          alloc::fmt::format::format_inner::h3c16c74008a310d4(
            &v84,
            "\"router diagnostics worker failed: \xC0src/commands/voice.rs",
            &v94);
          v34 = (__int64 *)__dst;
          core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859((__int64 *)__dst);
          v35 = (__int64)v84;
          __srca[0] = v85;
          v36 = __n;
        }
        else
        {
          *(_QWORD *)__dst = v31;
          *(_QWORD *)&__dst[8] = v32;
          *(__m128i *)&__dst[16] = _mm_load_si128((const __m128i *)__srca);
          *(_QWORD *)&__dst[32] = v103;
          *(_QWORD *)&__dst[40] = v76;
          *(_QWORD *)&__dst[48] = v77;
          *(_QWORD *)&__dst[56] = v78;
          *(_QWORD *)&__dst[64] = v79;
          *(_QWORD *)&__dst[72] = v80;
          *(_QWORD *)&__dst[80] = v81;
          *(_QWORD *)&__dst[88] = v82;
          v94 = nullptr;
          v95 = 1;
          v96 = 0;
          __n = 1610612768;
          v84 = &v94;
          v85 = &off_101952F18;
          v30 = (char *)&v84;
          if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                  __dst,
                                  (__int64 *)&v84) )
            core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, &v102, &unk_101952FE0, &off_101952F48);
          v35 = (__int64)v94;
          __srca[0] = (void *)v95;
          v36 = v96;
          v34 = (__int64 *)__dst;
          core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__dst);
        }
        goto LABEL_36;
      }
      if ( __OFSUB__(-(__int64)v32, 1) )
      {
        si128 = _mm_load_si128((const __m128i *)__srca);
        v35 = si128.i64[0];
        __srca[0] = (void *)_mm_extract_epi64(si128, 1);
        v36 = (__int64)v103;
LABEL_36:
        __src[1680] = 1;
        goto LABEL_37;
      }
      v55 = v32;
      v56 = _mm_load_si128((const __m128i *)__srca);
      v57 = v103;
      codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h96dc74fc83abf1b0((__int64)__dst, (__int64 *)&v55);
      v41 = *(_QWORD *)__dst;
      __srca[0] = *(void **)&__dst[16];
      v35 = *(_QWORD *)&__dst[8];
      v42 = _mm_loadu_si128((const __m128i *)&__dst[24]);
      v36 = *(_QWORD *)&__dst[24];
      qmemcpy(v68, &__dst[40], sizeof(v68));
      __src[1680] = 1;
      if ( v41 == 0x8000000000000001LL )
      {
LABEL_25:
        *v104 = 3;
LABEL_52:
        __src[1696] = 3;
        v45 = 3;
        result = 1;
        goto LABEL_64;
      }
      qmemcpy(v54, v68, sizeof(v54));
      v30 = (char *)&v69;
      v34 = (__int64 *)&v55;
      if ( v41 != 0x8000000000000000LL )
      {
        qmemcpy(v66, v54, sizeof(v66));
        v62 = v41;
        v63 = v35;
        v64 = __srca[0];
        v65 = v42;
        _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::hca8f842baeb7b7ed(__dst, &v62);
        *(_OWORD *)v68 = *(_OWORD *)&__dst[8];
        *(_OWORD *)&v68[16] = *(_OWORD *)&__dst[24];
        if ( *(_QWORD *)__dst == 0x8000000000000025LL )
        {
          v92 = *(_OWORD *)v68;
          v93 = *(_OWORD *)&v68[16];
          v5 = 0;
        }
        else
        {
          v58 = *(_QWORD *)__dst;
          v59 = *(_OWORD *)v68;
          v60 = *(_OWORD *)&v68[16];
          v61 = *(_QWORD *)&__dst[40];
          _$LT$core..result..Result$LT$T$C$F$GT$$u20$as$u20$core..ops..try_trait..FromResidual$LT$core..result..Result$LT$core..convert..Infallible$C$E$GT$$GT$$GT$::from_residual::hb033d94ed20710ab(
            &v91,
            &v58);
          v5 = v91;
        }
        goto LABEL_51;
      }
LABEL_37:
      if ( v36 < 0 )
      {
        v38 = 0;
        goto LABEL_39;
      }
      if ( v36 )
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v34, v30);
        v38 = 1;
        v39 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v36, 1);
        if ( !v39 )
LABEL_39:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v38, v36);
        v40 = v39;
      }
      else
      {
        v40 = 1;
      }
      v43 = __srca[0];
      memcpy((void *)v40, __srca[0], v36);
      if ( v35 )
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v43, v35, 1);
      LOBYTE(v92) = 3;
      *((_QWORD *)&v92 + 1) = v36;
      *(_QWORD *)&v93 = v40;
      *((_QWORD *)&v93 + 1) = v36;
      v5 = 1;
LABEL_51:
      v8 = v92;
      v97[0] = *(_DWORD *)((char *)&v92 + 1);
      *(_DWORD *)((char *)v97 + 3) = DWORD1(v92);
      v44 = *((_BYTE **)&v92 + 1);
      v74 = v93;
      *v104 = 1;
      if ( v5 == 2 )
        goto LABEL_52;
      *(_DWORD *)&v101[3] = *(_DWORD *)((char *)v97 + 3);
      *(_DWORD *)v101 = v97[0];
      v83 = v74;
      core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(v105);
      if ( !__OFSUB__(0, *((_QWORD *)__src + 196)) )
      {
        v104 = v44;
        v103 = __src + 1576;
        v47 = *((_QWORD *)__src + 197);
        for ( j = *((_QWORD *)__src + 198) + 1LL; j != 1; --j )
        {
          core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v47);
          v47 += 96;
        }
        v51 = *((_QWORD *)__src + 196);
        v44 = v104;
        if ( v51 )
LABEL_62:
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v103, 96 * v51, 8);
      }
LABEL_63:
      *(_DWORD *)&v98[3] = *(_DWORD *)&v101[3];
      *(_DWORD *)v98 = *(_DWORD *)v101;
      v75 = v83;
      __src[1696] = 1;
      core::ptr::drop_in_place$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h9b34e1423e6d76a6(v105);
      *(_DWORD *)&v71[3] = *(_DWORD *)&v98[3];
      *(_DWORD *)v71 = *(_DWORD *)v98;
      v73 = v75;
      v70 = v8;
      v72 = v44;
      v69 = v5 & 1;
      __src[1715] = 0;
      memcpy(__dst, __src, sizeof(__dst));
      __src[1714] = 0;
      v52 = *((_QWORD *)__src + 48);
      __src[1713] = 0;
      v64 = *((void **)__src + 47);
      v53 = *((_QWORD *)__src + 45);
      v63 = *((_QWORD *)__src + 46);
      v62 = v53;
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
        __dst,
        v52,
        &v69,
        &v62,
        *((unsigned int *)__src + 426),
        *((unsigned int *)__src + 427));
      v45 = 1;
      result = 0;
LABEL_64:
      __src[1712] = v45;
      return result;
  }
}
