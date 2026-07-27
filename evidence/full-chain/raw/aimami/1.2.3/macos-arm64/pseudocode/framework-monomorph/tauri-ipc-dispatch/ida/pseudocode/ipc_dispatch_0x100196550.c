/* addr=0x100196550 cleanname=ipc_dispatch group=tauri-ipc-dispatch
 * n_lines=691 brace_balanced=True truncation_markers=[]
 */
char __fastcall tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized_inner::_$u7b$$u7b$closure$u7d$$u7d$::ha9caf0eda69d75f5(
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
  size_t v10; // rcx
  __int64 *v11; // r14
  __int64 v12; // rax
  __int64 *v13; // r12
  __int64 v14; // rdi
  __int64 v15; // rdx
  char v16; // r15
  __int64 v17; // rdx
  __int64 v18; // rcx
  char v19; // al
  unsigned __int64 v20; // r15
  unsigned int v21; // r14d
  __int64 v22; // r13
  __int64 v23; // rdx
  __int64 v24; // rdx
  __int64 v25; // rcx
  char *v26; // r13
  unsigned __int64 v27; // r13
  __int64 v28; // r12
  unsigned __int64 v29; // r14
  __int64 v30; // r13
  __int64 v31; // r15
  _QWORD *v32; // r14
  __int64 v33; // rsi
  __int64 v34; // r14
  unsigned __int64 v35; // r13
  unsigned __int64 v36; // r8
  _BYTE *v37; // r9
  void *v38; // r10
  unsigned __int64 v39; // rax
  __int64 v40; // r15
  __int64 v41; // rdi
  __int64 i; // r13
  __int64 v43; // rax
  __int64 v44; // r13
  size_t v45; // r15
  __int64 v46; // r14
  __int64 v47; // rax
  _BYTE *v48; // r13
  __int64 v49; // r12
  void *v50; // r14
  char v51; // cl
  char result; // al
  __int64 v53; // rdi
  __int64 j; // r13
  __int64 v55; // rsi
  unsigned __int64 v56; // rax
  size_t __srca[93]; // [rsp+8h] [rbp-9C8h] BYREF
  _BYTE v58[80]; // [rsp+2F0h] [rbp-6E0h] BYREF
  _BYTE v59[80]; // [rsp+340h] [rbp-690h] BYREF
  _BYTE v60[80]; // [rsp+390h] [rbp-640h] BYREF
  _OWORD __dst[48]; // [rsp+3E0h] [rbp-5F0h] BYREF
  __int64 v62; // [rsp+6E0h] [rbp-2F0h] BYREF
  __m128i v63; // [rsp+6E8h] [rbp-2E8h]
  unsigned __int64 v64; // [rsp+6F8h] [rbp-2D8h]
  __int64 v65; // [rsp+700h] [rbp-2D0h]
  _QWORD v66[2]; // [rsp+708h] [rbp-2C8h] BYREF
  __int128 v67; // [rsp+718h] [rbp-2B8h]
  __int64 v68; // [rsp+728h] [rbp-2A8h]
  __int64 v69; // [rsp+730h] [rbp-2A0h]
  __int64 v70; // [rsp+738h] [rbp-298h] BYREF
  char v71; // [rsp+740h] [rbp-290h]
  _BYTE v72[7]; // [rsp+741h] [rbp-28Fh]
  unsigned __int64 v73; // [rsp+748h] [rbp-288h]
  void *v74; // [rsp+750h] [rbp-280h]
  size_t v75; // [rsp+758h] [rbp-278h]
  unsigned __int64 v76; // [rsp+760h] [rbp-270h] BYREF
  _BYTE *v77; // [rsp+768h] [rbp-268h]
  void *v78; // [rsp+770h] [rbp-260h]
  size_t v79; // [rsp+778h] [rbp-258h]
  __int64 v80; // [rsp+780h] [rbp-250h]
  _BYTE v81[80]; // [rsp+788h] [rbp-248h] BYREF
  __m128i v82; // [rsp+7D8h] [rbp-1F8h]
  __int64 v83; // [rsp+7E8h] [rbp-1E8h]
  __int64 v84; // [rsp+7F0h] [rbp-1E0h]
  __int64 v85; // [rsp+7F8h] [rbp-1D8h]
  void *v86; // [rsp+800h] [rbp-1D0h]
  size_t v87; // [rsp+808h] [rbp-1C8h]
  void *v88; // [rsp+810h] [rbp-1C0h]
  size_t v89; // [rsp+818h] [rbp-1B8h]
  void *v90; // [rsp+820h] [rbp-1B0h]
  size_t v91; // [rsp+828h] [rbp-1A8h]
  char *v92; // [rsp+830h] [rbp-1A0h]
  __int64 v93; // [rsp+838h] [rbp-198h]
  __m128i v94; // [rsp+840h] [rbp-190h] BYREF
  __int64 v95; // [rsp+850h] [rbp-180h]
  __int64 v96; // [rsp+858h] [rbp-178h]
  __int64 v97; // [rsp+860h] [rbp-170h]
  __int64 v98; // [rsp+868h] [rbp-168h] BYREF
  __int64 v99; // [rsp+870h] [rbp-160h]
  __int128 v100; // [rsp+878h] [rbp-158h]
  size_t v101; // [rsp+888h] [rbp-148h]
  __m128i v102; // [rsp+890h] [rbp-140h] BYREF
  unsigned __int64 v103; // [rsp+8A0h] [rbp-130h]
  void *v104; // [rsp+8B0h] [rbp-120h]
  size_t v105; // [rsp+8B8h] [rbp-118h]
  __int64 v106; // [rsp+8C0h] [rbp-110h]
  _DWORD v107[2]; // [rsp+8C8h] [rbp-108h]
  _BYTE v108[7]; // [rsp+8D0h] [rbp-100h]
  _BYTE *v109; // [rsp+8D8h] [rbp-F8h] BYREF
  _BYTE v110[24]; // [rsp+8E0h] [rbp-F0h] BYREF
  __int64 v111; // [rsp+8F8h] [rbp-D8h]
  __int64 v112; // [rsp+900h] [rbp-D0h]
  unsigned __int64 v113; // [rsp+908h] [rbp-C8h]
  __m128i v114; // [rsp+910h] [rbp-C0h]
  __int64 v115; // [rsp+920h] [rbp-B0h]
  __int64 v116; // [rsp+928h] [rbp-A8h]
  __int64 v117; // [rsp+930h] [rbp-A0h]
  __int64 *v118; // [rsp+938h] [rbp-98h]
  _BYTE *v119; // [rsp+940h] [rbp-90h]
  __int64 v120; // [rsp+948h] [rbp-88h]
  __int64 v121; // [rsp+950h] [rbp-80h]
  unsigned __int64 v122; // [rsp+958h] [rbp-78h]
  __m128i v123; // [rsp+960h] [rbp-70h] BYREF
  _BYTE v124[7]; // [rsp+978h] [rbp-58h]
  char *v125; // [rsp+980h] [rbp-50h]
  _BYTE *v126; // [rsp+988h] [rbp-48h]
  char v127; // [rsp+997h] [rbp-39h] BYREF
  void *epi64; // [rsp+998h] [rbp-38h]
  unsigned __int64 v129; // [rsp+9A0h] [rbp-30h]

  v4 = __src[6512];
  v123.i64[0] = (__int64)a2;
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
          *(_QWORD *)&__dst[3] = 0;
          *(_QWORD *)&__dst[0] = "load_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          *((_QWORD *)&__dst[0] + 1) = 21;
          *(_QWORD *)&__dst[1] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide";
          *((_QWORD *)&__dst[1] + 1) = 4;
          v125 = v5;
          *(_QWORD *)&__dst[2] = v5;
          *((_QWORD *)&__dst[2] + 1) = __src + 3968;
          v7 = tauri::state::StateManager::try_get::h687ceb5065e3b70f(*((_QWORD *)__src + 495) + 16LL);
          if ( v7 )
            goto LABEL_7;
          _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe(
            &v76,
            __dst,
            &__dst[1]);
          v8 = v76;
          if ( (_BYTE)v76 == 6 )
          {
            v7 = (__int64)v77;
LABEL_7:
            *(_QWORD *)&__dst[3] = 0;
            *(_QWORD *)&__dst[0] = "load_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
            *((_QWORD *)&__dst[0] + 1) = 21;
            *(_QWORD *)&__dst[1] = "rangegenerate_voice_prompttemplateIdrawTextselectedTextclipboardTexttargetBundleIdtargetAppNamepromptOverridetemplateTitletemplateKindllmProviderllmApiKeyllmBaseUrlasrProviderasrLanguageasrEmotionasrDurationMsasrErrorCodebegin_chatgpt_oauth_loginconfigure_auto_switchthreshold5hPercentthresholdWeeklyPercentenableddelete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
            *((_QWORD *)&__dst[1] + 1) = 5;
            *(_QWORD *)&__dst[2] = v125;
            *((_QWORD *)&__dst[2] + 1) = __src + 3968;
            _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v76, __dst);
            v8 = v76;
            if ( (_BYTE)v76 == 6 )
            {
              v9 = v77;
              v90 = v78;
              v91 = v79;
              *((_QWORD *)__src + 502) = v7;
              *((_QWORD *)__src + 499) = v9;
              v10 = v91;
              *((_QWORD *)__src + 500) = v90;
              *((_QWORD *)__src + 501) = v10;
              __src[4816] = 0;
              v11 = (__int64 *)(__src + 4824);
              memcpy(__src + 4824, __src + 3992, 0x340u);
              v119 = __src + 6488;
              __src[6488] = 0;
LABEL_11:
              v92 = (char *)(__src + 5656);
              v118 = v11;
              a2 = v11;
              memcpy(__src + 5656, v11, 0x340u);
              v129 = 0x8000000000000000LL;
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
            *(_DWORD *)&v124[3] = HIDWORD(v76);
            *(_DWORD *)v124 = *(_DWORD *)((char *)&v76 + 1);
            v27 = (unsigned __int64)v77;
            v90 = v78;
            v91 = v79;
            v104 = v78;
            v105 = v79;
          }
          else
          {
            *(_DWORD *)&v124[3] = HIDWORD(v76);
            *(_DWORD *)v124 = *(_DWORD *)((char *)&v76 + 1);
            v27 = (unsigned __int64)v77;
            v104 = v78;
            v105 = v79;
          }
          core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb((__int64)v125);
          LOBYTE(v40) = 1;
          if ( __OFSUB__(0, *v6) )
            goto LABEL_88;
          v129 = v27;
          v123.i64[0] = (__int64)(__src + 3976);
          v41 = *((_QWORD *)__src + 497);
          for ( i = *((_QWORD *)__src + 498) + 1LL; i != 1; --i )
          {
            core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v41);
            v41 += 96;
          }
          v43 = *v6;
          LOBYTE(v40) = 1;
          v27 = v129;
          if ( !*v6 )
            goto LABEL_88;
          goto LABEL_87;
        case 1u:
LABEL_101:
          v125 = v5;
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019522D0);
        case 2u:
LABEL_100:
          v125 = v5;
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019522D0);
        case 3u:
          goto LABEL_9;
      }
  }
LABEL_9:
  v125 = v5;
  v119 = __src + 6488;
  v12 = __src[6488];
  v118 = (__int64 *)(__src + 4824);
  switch ( v12 )
  {
    case 0LL:
      v11 = v118;
      goto LABEL_11;
    case 1LL:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101953108);
    case 2LL:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101953108);
    case 3LL:
      v129 = 0x8000000000000000LL;
      v92 = (char *)(__src + 5656);
      switch ( __src[6480] )
      {
        case 0u:
LABEL_13:
          v13 = *((__int64 **)__src + 710);
          *((_QWORD *)__src + 711) = v13;
          __src[6481] = 1;
          v120 = *((_QWORD *)__src + 707);
          v106 = *((_QWORD *)__src + 708);
          v121 = *((_QWORD *)__src + 709);
          v14 = *v13;
          if ( !*v13 )
            v14 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v13);
          std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v14);
          v122 = v129 - 1;
          if ( ((v129 - 1) & std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) != 0 )
          {
            v16 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v14, a2, v15, v129 - 1) ^ 1;
            if ( !*((_BYTE *)v13 + 8) )
              goto LABEL_22;
          }
          else
          {
            v16 = 0;
            if ( !*((_BYTE *)v13 + 8) )
              goto LABEL_22;
          }
          v109 = nullptr;
          *(_OWORD *)v110 = 1u;
          *(_QWORD *)&__dst[1] = 1610612768;
          *(_QWORD *)&__dst[0] = &v109;
          *((_QWORD *)&__dst[0] + 1) = &off_101952F18;
          if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                                  "poisoned lock: another task failed inside",
                                  41,
                                  __dst) )
            core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, &v127, &unk_101952FE0, &off_101952F48);
          v126 = v109;
          epi64 = *(void **)v110;
          v93 = v110[8];
          v19 = v16;
          LODWORD(v20) = v110[15];
          v21 = *(unsigned __int16 *)&v110[13];
          v22 = *(unsigned int *)&v110[9];
          if ( !v19
            && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v122) != 0
            && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                   "poisoned lock: another task failed inside",
                                   41,
                                   v17,
                                   v18) )
          {
            *((_BYTE *)v13 + 8) = 1;
          }
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v13);
          if ( v126 != (_BYTE *)v129 )
          {
            v35 = ((unsigned __int64)(((_DWORD)v20 << 16) | v21) << 32) | v22;
            LOBYTE(v20) = v93;
            if ( __src[6481] != 1 )
            {
LABEL_57:
              __src[6481] = 0;
              qmemcpy(v60, v58, sizeof(v60));
              __src[6480] = 1;
              v39 = v129;
              v36 = v129;
              goto LABEL_66;
            }
LABEL_55:
            if ( v120 )
              *(double *)a3.i64 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v106, v120, 1);
            goto LABEL_57;
          }
          v13 = (__int64 *)epi64;
          v16 = v93;
LABEL_22:
          _$LT$codexmate_lib..platform..paths..CodexPaths$u20$as$u20$core..clone..Clone$GT$::clone::hf6c0d3e83be86178(
            __srca,
            v13 + 2);
          if ( (v16 & 1) == 0
            && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v122) != 0
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
          *((_QWORD *)__src + 805) = v120;
          *((_QWORD *)__src + 806) = v106;
          *((_QWORD *)__src + 807) = v121;
          v126 = __src + 6472;
          __src[6472] = 0;
LABEL_26:
          memcpy(__dst, v26, sizeof(__dst));
          *((_QWORD *)__src + 808) = tauri::async_runtime::spawn_blocking::h516cb225e646f7b4(__dst);
          _$LT$tokio..runtime..task..join..JoinHandle$LT$T$GT$$u20$as$u20$core..future..future..Future$GT$::poll::he2fbd9611a88da6b(
            &v109,
            __src + 6464,
            v123.i64[0]);
          v28 = (__int64)v109;
          if ( v109 == (_BYTE *)13 )
          {
            *v126 = 3;
            goto LABEL_39;
          }
          epi64 = v26;
          if ( (_DWORD)v109 == 12 )
          {
            v123 = _mm_loadu_si128((const __m128i *)v110);
            v29 = *(_QWORD *)&v110[16];
            v30 = v129 + 12;
          }
          else
          {
            v30 = *(_QWORD *)v110;
            v123 = _mm_loadu_si128((const __m128i *)&v110[8]);
            v29 = v111;
            v121 = v112;
            v122 = v113;
            v94 = v114;
            v95 = v115;
            v96 = v116;
            v97 = v117;
          }
          v82 = v94;
          v83 = v95;
          v84 = v96;
          v85 = v97;
          v31 = *((_QWORD *)__src + 808);
          if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v31) )
            tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v31);
          if ( (_DWORD)v28 == 11 )
          {
            *v126 = 1;
            v20 = v29;
            v28 = v121;
            if ( v30 != v129 + 1 )
              goto LABEL_43;
LABEL_39:
            __src[6480] = 3;
            goto LABEL_53;
          }
          if ( (_DWORD)v28 == 12 )
          {
            v109 = (_BYTE *)v30;
            *(__m128i *)v110 = _mm_load_si128(&v123);
            *(_QWORD *)&v110[16] = v29;
            v111 = v121;
            v112 = v122;
            v102.i64[0] = (__int64)&v109;
            v102.i64[1] = (__int64)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80;
            alloc::fmt::format::format_inner::h3c16c74008a310d4(
              &v94,
              "\x19analytics worker failed: \xC0/Users/borawong/.cargo/registry/src/rsproxy.cn-e3de039b2554c837/tauri-plu"
              "gin-shell-2.3.5/src/lib.rs",
              &v102);
            core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859((__int64 *)&v109);
            v123 = _mm_load_si128(&v94);
            v20 = v95;
          }
          else
          {
            v109 = (_BYTE *)v28;
            *(_QWORD *)v110 = v30;
            *(__m128i *)&v110[8] = _mm_load_si128(&v123);
            v111 = v29;
            v112 = v121;
            v113 = v122;
            v114 = v82;
            v115 = v83;
            v116 = v84;
            v117 = v85;
            v102.i64[0] = 0;
            v102.i64[1] = 1;
            v103 = 0;
            v95 = 1610612768;
            v94.i64[0] = (__int64)&v102;
            v94.i64[1] = (__int64)&off_101952F18;
            if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                    &v109,
                                    v94.i64) )
              core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, &v127, &unk_101952FE0, &off_101952F48);
            v123 = _mm_load_si128(&v102);
            v20 = v103;
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v109);
          }
          *v126 = 1;
          v30 = v129;
LABEL_43:
          if ( *((_BYTE *)epi64 + 776) == 3 )
          {
            v34 = *((_QWORD *)epi64 + 96);
            if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v34) )
              tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v34);
          }
          else if ( !*((_BYTE *)epi64 + 776) )
          {
            v32 = epi64;
            core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(epi64);
            v33 = v32[93];
            if ( v33 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)epi64 + 94), v33, 1);
          }
          if ( v30 == v129 )
          {
            v35 = v20 >> 8;
            a3 = _mm_load_si128(&v123);
            v126 = (_BYTE *)a3.i64[0];
            epi64 = (void *)_mm_extract_epi64(a3, 1);
            if ( __src[6481] != 1 )
              goto LABEL_57;
            goto LABEL_55;
          }
          v62 = v30;
          a3 = _mm_load_si128(&v123);
          v63 = a3;
          v64 = v20;
          v65 = v28;
          codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h216067d347a201ac((__int64)__dst, &v62);
          v37 = *((_BYTE **)&__dst[0] + 1);
          v36 = *(_QWORD *)&__dst[0];
          v20 = *((_QWORD *)&__dst[1] + 1);
          v38 = *(void **)&__dst[1];
          v23 = *(_QWORD *)&__dst[2];
          qmemcpy(v58, (char *)&__dst[2] + 8, sizeof(v58));
          __src[6481] = 0;
          qmemcpy(v60, v58, sizeof(v60));
          __src[6480] = 1;
          if ( v36 == v129 + 1 )
          {
LABEL_53:
            *v119 = 3;
LABEL_81:
            __src[6496] = 3;
            v51 = 3;
            result = 1;
            goto LABEL_89;
          }
          epi64 = v38;
          v126 = v37;
          v35 = v20 >> 8;
          v39 = v129;
LABEL_66:
          v44 = v35 << 8;
          v45 = v44 | (unsigned __int8)v20;
          qmemcpy(v59, v60, sizeof(v59));
          v129 = v39;
          if ( v36 == v39 )
          {
            if ( v44 < 0 )
            {
              v46 = 0;
              goto LABEL_69;
            }
            if ( v45 )
            {
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v60, __dst);
              v46 = 1;
              v47 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v45, 1);
              v48 = v126;
              if ( !v47 )
LABEL_69:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v46, v45);
              v49 = v47;
            }
            else
            {
              v49 = 1;
              v48 = v126;
            }
            v50 = epi64;
            memcpy((void *)v49, epi64, v45);
            if ( v48 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v50, v48, 1);
            LOBYTE(v99) = 3;
            *(_QWORD *)&v100 = v45;
            *((_QWORD *)&v100 + 1) = v49;
            v101 = v45;
            v98 = 1;
            v40 = 1;
          }
          else
          {
            qmemcpy(v81, v59, sizeof(v81));
            v76 = v36;
            v77 = v126;
            v78 = epi64;
            v79 = v45;
            v80 = v23;
            _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::hf0887399eb09b5f7(__dst, &v76, *(double *)a3.i64);
            v109 = *((_BYTE **)&__dst[0] + 1);
            *(_OWORD *)v110 = __dst[1];
            *(_QWORD *)&v110[16] = *(_QWORD *)&__dst[2];
            if ( *(_QWORD *)&__dst[0] == v129 + 37 )
            {
              v99 = (__int64)v109;
              v100 = *(_OWORD *)v110;
              v101 = *(_QWORD *)&v110[16];
              v98 = 0;
              v40 = 0;
            }
            else
            {
              v66[0] = *(_QWORD *)&__dst[0];
              v66[1] = v109;
              v67 = *(_OWORD *)v110;
              v68 = *(_QWORD *)&v110[16];
              v69 = *((_QWORD *)&__dst[2] + 1);
              _$LT$core..result..Result$LT$T$C$F$GT$$u20$as$u20$core..ops..try_trait..FromResidual$LT$core..result..Result$LT$core..convert..Infallible$C$E$GT$$GT$$GT$::from_residual::hb033d94ed20710ab(
                &v98,
                v66);
              v40 = v98;
            }
          }
          v8 = v99;
          v107[0] = *(_DWORD *)((char *)&v99 + 1);
          *(_DWORD *)((char *)v107 + 3) = HIDWORD(v99);
          v86 = *((void **)&v100 + 1);
          v27 = v100;
          v87 = v101;
          *v119 = 1;
          if ( v40 == 2 )
            goto LABEL_81;
          *(_DWORD *)&v124[3] = *(_DWORD *)((char *)v107 + 3);
          *(_DWORD *)v124 = v107[0];
          v104 = v86;
          v105 = v87;
          core::ptr::drop_in_place$LT$tauri..ipc..command..private..ResultFutureTag..future$LT$codexmate_lib..core..models..CoreEnvelope$LT$codexmate_lib..core..models..ToolAnalyticsPayload$GT$$C$alloc..string..String$C$codexmate_lib..commands..analytics..load_tool_analytics..$u7b$$u7b$closure$u7d$$u7d$$GT$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h69f18c12479240d3(v118);
          core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb((__int64)v125);
          if ( *((_QWORD *)__src + 496) != v129 )
          {
            v129 = v27;
            v123.i64[0] = (__int64)(__src + 3976);
            v53 = *((_QWORD *)__src + 497);
            for ( j = *((_QWORD *)__src + 498) + 1LL; j != 1; --j )
            {
              core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v53);
              v53 += 96;
            }
            v43 = *((_QWORD *)__src + 496);
            v27 = v129;
            if ( v43 )
LABEL_87:
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v123.i64[0], 96 * v43, 8);
          }
LABEL_88:
          *(_DWORD *)&v108[3] = *(_DWORD *)&v124[3];
          *(_DWORD *)v108 = *(_DWORD *)v124;
          v88 = v104;
          v89 = v105;
          __src[6496] = 1;
          core::ptr::drop_in_place$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h48b42c13ca40e8d6((__int64)v125);
          *(_DWORD *)&v72[3] = *(_DWORD *)&v108[3];
          *(_DWORD *)v72 = *(_DWORD *)v108;
          v74 = v88;
          v75 = v89;
          v71 = v8;
          v73 = v27;
          v70 = v40 & 1;
          __src[6515] = 0;
          memcpy(__dst, __src, 0x168u);
          __src[6514] = 0;
          v55 = *((_QWORD *)__src + 48);
          __src[6513] = 0;
          v78 = *((void **)__src + 47);
          v56 = *((_QWORD *)__src + 45);
          v77 = *((_BYTE **)__src + 46);
          v76 = v56;
          tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
            __dst,
            v55,
            &v70,
            &v76,
            *((unsigned int *)__src + 1626),
            *((unsigned int *)__src + 1627));
          v51 = 1;
          result = 0;
LABEL_89:
          __src[6512] = v51;
          return result;
        case 1u:
LABEL_103:
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101952C60);
        case 2u:
LABEL_102:
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101952C60);
        case 3u:
LABEL_25:
          v126 = __src + 6472;
          v26 = (char *)(__src + 5696);
          goto LABEL_26;
      }
  }
}
