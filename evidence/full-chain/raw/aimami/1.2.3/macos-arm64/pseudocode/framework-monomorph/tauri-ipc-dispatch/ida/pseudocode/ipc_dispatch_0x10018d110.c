/* addr=0x10018d110 cleanname=ipc_dispatch group=tauri-ipc-dispatch
 * n_lines=898 brace_balanced=True truncation_markers=[]
 */
char __fastcall tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized_inner::_$u7b$$u7b$closure$u7d$$u7d$::ha2e66504b583cd5c(
        unsigned __int8 *__src,
        char *a2)
{
  __int64 v3; // rax
  char *v4; // r14
  _QWORD *v5; // r12
  __int64 v6; // r14
  char v7; // r13
  __int64 v8; // rax
  __int64 v9; // rcx
  char *v10; // r14
  __int64 *v11; // r12
  __int64 v12; // rdi
  __int64 v13; // rdx
  char v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r13d
  unsigned int v18; // r15d
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // r15
  __int64 v24; // r13
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // r14
  __int64 v27; // r14
  __int64 v28; // r12
  int v29; // r15d
  unsigned int v30; // r14d
  __int64 v31; // r13
  unsigned __int64 v32; // r15
  __int64 v33; // rsi
  __int64 v34; // r13
  __int64 v35; // rsi
  unsigned __int8 v36; // r12
  __int64 v37; // rsi
  __int64 v38; // rsi
  __int64 v39; // rsi
  __int64 v40; // rsi
  __int64 v41; // rsi
  __int64 v42; // rsi
  __int64 v43; // rsi
  __int64 v44; // rsi
  __int64 v45; // rsi
  __int64 v46; // rsi
  __int64 v47; // rsi
  __int64 v48; // rsi
  __int64 v49; // rsi
  __int64 v50; // rsi
  __int64 v51; // rsi
  __int64 v52; // rsi
  __int64 v53; // rsi
  __int64 v54; // rsi
  __int64 v55; // rsi
  __int64 v56; // rsi
  __int64 v57; // rsi
  __int64 v58; // rsi
  __int64 v59; // rsi
  __int64 v60; // rsi
  __int64 v61; // rsi
  __int64 v62; // rsi
  __int64 v63; // rsi
  __int64 v64; // r14
  int v65; // r15d
  unsigned int v66; // r12d
  __int64 v67; // rsi
  __int64 v68; // rsi
  __int64 v69; // rsi
  __int64 v70; // rsi
  __int64 v71; // rsi
  __int64 v72; // rsi
  __int64 v73; // rsi
  __int64 v74; // rsi
  __int64 v75; // rsi
  __int64 v76; // rsi
  __int64 v77; // rsi
  __int64 v78; // rsi
  __int64 v79; // rsi
  __int64 v80; // rsi
  __int64 v81; // rsi
  __int64 v82; // rsi
  __int64 v83; // rsi
  __int64 v84; // rsi
  __int64 v85; // rsi
  __int64 v86; // rsi
  __int64 v87; // rsi
  __int64 v88; // rsi
  __int64 v89; // rsi
  __int64 v90; // rsi
  __int64 v91; // rsi
  __int64 v92; // rsi
  __int64 v93; // rsi
  __int64 v94; // rsi
  __int64 v95; // rsi
  __int64 v96; // rdi
  double v97; // xmm0_8
  __int64 v98; // r15
  size_t v99; // r14
  __int64 v100; // r12
  __int64 v101; // r15
  __int64 v102; // rax
  __int64 v103; // r15
  __int64 v104; // rdi
  __int64 i; // r15
  __int64 v106; // rax
  void *v107; // r12
  char v108; // cl
  char result; // al
  __int64 v110; // rdi
  __int64 j; // r12
  __int64 v112; // rsi
  __int64 v113; // rax
  _QWORD v114[66]; // [rsp+8h] [rbp-1198h] BYREF
  _BYTE v115[528]; // [rsp+218h] [rbp-F88h] BYREF
  _QWORD v116[3]; // [rsp+428h] [rbp-D78h] BYREF
  char v117; // [rsp+440h] [rbp-D60h]
  _BYTE v118[7]; // [rsp+441h] [rbp-D5Fh]
  __int64 v119; // [rsp+448h] [rbp-D58h]
  _BYTE v120[448]; // [rsp+450h] [rbp-D50h] BYREF
  _QWORD v121[56]; // [rsp+610h] [rbp-B90h] BYREF
  _QWORD v122[66]; // [rsp+7D0h] [rbp-9D0h] BYREF
  __int64 __dst[56]; // [rsp+9E0h] [rbp-7C0h] BYREF
  __int64 v124; // [rsp+BA0h] [rbp-600h] BYREF
  __int64 v125; // [rsp+BA8h] [rbp-5F8h]
  void *v126; // [rsp+BB0h] [rbp-5F0h]
  __int64 v127; // [rsp+BB8h] [rbp-5E8h]
  _QWORD *v128; // [rsp+BC0h] [rbp-5E0h]
  _BYTE v129[528]; // [rsp+BC8h] [rbp-5D8h] BYREF
  _QWORD v130[6]; // [rsp+DD8h] [rbp-3C8h] BYREF
  _BYTE v131[568]; // [rsp+E08h] [rbp-398h] BYREF
  __int64 v132; // [rsp+1040h] [rbp-160h] BYREF
  char v133; // [rsp+1048h] [rbp-158h]
  _BYTE v134[7]; // [rsp+1049h] [rbp-157h]
  unsigned __int64 v135; // [rsp+1050h] [rbp-150h]
  void *v136; // [rsp+1058h] [rbp-148h]
  __int64 v137; // [rsp+1060h] [rbp-140h]
  void *v138; // [rsp+1068h] [rbp-138h]
  size_t v139; // [rsp+1070h] [rbp-130h]
  void *v140; // [rsp+1078h] [rbp-128h]
  __int64 v141; // [rsp+1080h] [rbp-120h]
  __int64 v142; // [rsp+1088h] [rbp-118h]
  void *v143; // [rsp+1090h] [rbp-110h]
  __int64 v144; // [rsp+1098h] [rbp-108h]
  unsigned __int64 v145; // [rsp+10A0h] [rbp-100h]
  __int64 v146; // [rsp+10A8h] [rbp-F8h]
  __int64 v147; // [rsp+10B0h] [rbp-F0h] BYREF
  __int64 v148; // [rsp+10B8h] [rbp-E8h]
  size_t v149; // [rsp+10C0h] [rbp-E0h]
  __int64 v150; // [rsp+10C8h] [rbp-D8h]
  size_t v151; // [rsp+10D0h] [rbp-D0h]
  void *v152; // [rsp+10D8h] [rbp-C8h]
  __int64 v153; // [rsp+10E0h] [rbp-C0h]
  __int64 v154; // [rsp+10E8h] [rbp-B8h]
  __int64 v155; // [rsp+10F0h] [rbp-B0h]
  __int64 v156; // [rsp+10F8h] [rbp-A8h]
  _DWORD v157[2]; // [rsp+1100h] [rbp-A0h]
  _BYTE v158[7]; // [rsp+1108h] [rbp-98h]
  _BYTE *v159; // [rsp+1110h] [rbp-90h]
  void *v160; // [rsp+1118h] [rbp-88h]
  _DWORD v161[2]; // [rsp+1120h] [rbp-80h]
  _BYTE v162[7]; // [rsp+1128h] [rbp-78h]
  __int64 v163; // [rsp+1130h] [rbp-70h] BYREF
  __int64 v164; // [rsp+1138h] [rbp-68h]
  __int64 v165; // [rsp+1140h] [rbp-60h]
  char *v166; // [rsp+1148h] [rbp-58h]
  unsigned __int8 *v167; // [rsp+1150h] [rbp-50h]
  _QWORD *v168; // [rsp+1158h] [rbp-48h]
  __int64 v169; // [rsp+1160h] [rbp-40h]
  unsigned __int64 v170; // [rsp+1168h] [rbp-38h]
  _BYTE v171[41]; // [rsp+1177h] [rbp-29h] BYREF

  v114[46] = 0;
  v3 = __src[6320];
  v168 = a2;
  switch ( v3 )
  {
    case 0LL:
      *(_WORD *)(__src + 6321) = 257;
      __src[6323] = 1;
      a2 = (char *)(__src + 392);
      v4 = (char *)(__src + 3352);
      memcpy(__src + 3352, __src + 392, 0xB90u);
      switch ( __src[6304] )
      {
        case 0u:
          goto LABEL_4;
        case 1u:
          goto LABEL_206;
        case 2u:
          goto LABEL_205;
        case 3u:
          goto LABEL_9;
      }
    case 1LL:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019530F0);
    case 2LL:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019530F0);
    case 3LL:
      v4 = (char *)(__src + 3352);
      switch ( __src[6304] )
      {
        case 0u:
LABEL_4:
          v5 = __src + 3872;
          *(_QWORD *)&v131[48] = 0;
          *(_QWORD *)v131 = "restore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          *(_QWORD *)&v131[8] = 20;
          *(_QWORD *)&v131[16] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide";
          *(_QWORD *)&v131[24] = 4;
          v166 = v4;
          *(_QWORD *)&v131[32] = v4;
          *(_QWORD *)&v131[40] = __src + 3872;
          v6 = tauri::state::StateManager::try_get::h687ceb5065e3b70f(*((_QWORD *)__src + 483) + 16LL);
          if ( v6 )
            goto LABEL_7;
          _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe(
            &v124,
            v131,
            &v131[16]);
          v7 = v124;
          if ( (_BYTE)v124 == 6 )
          {
            v6 = v125;
LABEL_7:
            *(_QWORD *)&v131[48] = 0;
            *(_QWORD *)v131 = "restore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
            *(_QWORD *)&v131[8] = 20;
            *(_QWORD *)&v131[16] = "idload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
            *(_QWORD *)&v131[24] = 2;
            *(_QWORD *)&v131[32] = v166;
            *(_QWORD *)&v131[40] = __src + 3872;
            _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v124, v131);
            v7 = v124;
            if ( (_BYTE)v124 == 6 )
            {
              v8 = v125;
              v143 = v126;
              v144 = v127;
              *((_QWORD *)__src + 490) = v6;
              *((_QWORD *)__src + 487) = v8;
              v9 = v144;
              *((_QWORD *)__src + 488) = v143;
              *((_QWORD *)__src + 489) = v9;
              __src[4688] = 0;
              v10 = (char *)(__src + 4696);
              memcpy(__src + 4696, __src + 3896, 0x320u);
              v159 = __src + 6296;
              __src[6296] = 0;
LABEL_10:
              v167 = __src + 5496;
              a2 = v10;
              memcpy(__src + 5496, v10, 0x320u);
              v170 = 0x8000000000000000LL;
              switch ( __src[6288] )
              {
                case 0u:
                  goto LABEL_12;
                case 1u:
                  goto LABEL_208;
                case 2u:
                  goto LABEL_207;
                case 3u:
                  goto LABEL_24;
              }
            }
            *(_DWORD *)&v162[3] = HIDWORD(v124);
            *(_DWORD *)v162 = *(_DWORD *)((char *)&v124 + 1);
            v26 = v125;
            v143 = v126;
            v144 = v127;
            v152 = v126;
            v153 = v127;
          }
          else
          {
            *(_DWORD *)&v162[3] = HIDWORD(v124);
            *(_DWORD *)v162 = *(_DWORD *)((char *)&v124 + 1);
            v26 = v125;
            v152 = v126;
            v153 = v127;
          }
          core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb((__int64)v166);
          v101 = 1;
          if ( __OFSUB__(0, *v5) )
            goto LABEL_192;
          v170 = v26;
          v168 = __src + 3880;
          v104 = *((_QWORD *)__src + 485);
          for ( i = *((_QWORD *)__src + 486) + 1LL; i != 1; --i )
          {
            core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v104);
            v104 += 96;
          }
          v106 = *v5;
          v101 = 1;
          v26 = v170;
          if ( !*v5 )
            goto LABEL_192;
          goto LABEL_191;
        case 1u:
LABEL_206:
          v166 = v4;
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019522D0);
        case 2u:
LABEL_205:
          v166 = v4;
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019522D0);
        case 3u:
          goto LABEL_9;
      }
  }
LABEL_9:
  v166 = v4;
  v159 = __src + 6296;
  v10 = (char *)(__src + 4696);
  switch ( __src[6296] )
  {
    case 0u:
      goto LABEL_10;
    case 1u:
      core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101953108);
    case 2u:
      core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101953108);
    case 3u:
      v170 = 0x8000000000000000LL;
      v167 = __src + 5496;
      switch ( __src[6288] )
      {
        case 0u:
LABEL_12:
          v11 = *((__int64 **)__src + 690);
          *((_QWORD *)__src + 691) = v11;
          __src[6289] = 1;
          v154 = *((_QWORD *)__src + 687);
          v155 = *((_QWORD *)__src + 688);
          v142 = *((_QWORD *)__src + 689);
          v12 = *v11;
          if ( !*v11 )
            v12 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v11);
          std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v12);
          v145 = v170 - 1;
          if ( ((v170 - 1) & std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) != 0 )
          {
            v14 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v12, a2, v13, v170 - 1) ^ 1;
            if ( !*((_BYTE *)v11 + 8) )
            {
LABEL_21:
              _$LT$codexmate_lib..platform..paths..CodexPaths$u20$as$u20$core..clone..Clone$GT$::clone::hf6c0d3e83be86178(
                (size_t *)__src + 692,
                v11 + 2);
              if ( (v14 & 1) == 0
                && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v145) != 0
                && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                       __src + 5536,
                                       v11 + 2,
                                       v19,
                                       v20) )
              {
                *((_BYTE *)v11 + 8) = 1;
              }
              std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v11);
              __src[6289] = 0;
              *(_QWORD *)&v131[16] = *((_QWORD *)__src + 715);
              v21 = *((_QWORD *)__src + 713);
              *(_QWORD *)&v131[8] = *((_QWORD *)__src + 714);
              *(_QWORD *)v131 = v21;
              v22 = *((_QWORD *)__src + 734);
              *(_QWORD *)&v131[32] = *((_QWORD *)__src + 735);
              *(_QWORD *)&v131[40] = *((_QWORD *)__src + 736);
              *(_QWORD *)&v131[24] = v22;
              *(_QWORD *)&v131[48] = v154;
              *(_QWORD *)&v131[56] = v155;
              *(_QWORD *)&v131[64] = v142;
              *((_QWORD *)__src + 785) = tauri::async_runtime::spawn_blocking::h3c1655083ae084c6(v131);
LABEL_24:
              _$LT$tokio..runtime..task..join..JoinHandle$LT$T$GT$$u20$as$u20$core..future..future..Future$GT$::poll::hed49d7a4ceaf8f8a(v131);
              v23 = *(_QWORD *)v131;
              if ( *(_QWORD *)v131 == 4 )
              {
                __src[6288] = 3;
              }
              else
              {
                if ( *(_DWORD *)v131 == 3 )
                {
                  v169 = *(_QWORD *)&v131[8];
                  LOBYTE(v168) = v131[16];
                  LODWORD(v163) = *(_DWORD *)&v131[17];
                  *(_DWORD *)((char *)&v163 + 3) = *(_DWORD *)&v131[20];
                  v24 = *(_QWORD *)&v131[24];
                  v25 = v170 + 12;
                }
                else
                {
                  v25 = *(_QWORD *)&v131[8];
                  v169 = *(_QWORD *)&v131[16];
                  LOBYTE(v168) = v131[24];
                  LODWORD(v163) = *(_DWORD *)&v131[25];
                  *(_DWORD *)((char *)&v163 + 3) = *(_DWORD *)&v131[28];
                  v24 = *(_QWORD *)&v131[32];
                  memcpy(__dst, &v131[40], sizeof(__dst));
                }
                v161[0] = v163;
                *(_DWORD *)((char *)v161 + 3) = *(_DWORD *)((char *)&v163 + 3);
                memcpy(v121, __dst, sizeof(v121));
                v27 = *((_QWORD *)__src + 785);
                if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v27) )
                  tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v27);
                if ( (_DWORD)v23 == 2 )
                {
                  *(_QWORD *)v131 = v25;
                  *(_QWORD *)&v131[8] = v169;
                  v131[16] = (_BYTE)v168;
                  *(_DWORD *)&v131[17] = v161[0];
                  *(_DWORD *)&v131[20] = *(_DWORD *)((char *)v161 + 3);
                  *(_QWORD *)&v131[24] = v24;
                  *(_QWORD *)&v131[32] = v121[0];
                  *(_QWORD *)&v131[40] = v121[1];
                  *(_QWORD *)&v131[48] = v121[2];
                  *(_QWORD *)&v131[56] = v121[3];
                  *(_QWORD *)&v131[64] = v121[4];
                  *(_QWORD *)&v131[72] = v121[5];
                  *(_QWORD *)&v131[80] = v121[6];
                  *(_QWORD *)&v131[88] = v121[7];
                  v163 = 0;
                  v164 = 1;
                  v165 = 0;
                  __dst[2] = 1610612768;
                  __dst[0] = (__int64)&v163;
                  __dst[1] = (__int64)&off_101952F18;
                  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                          v131,
                                          __dst) )
                    core::result::unwrap_failed::h855bccc0ecc45c4f(
                      &unk_1015DB394,
                      55,
                      v171,
                      &unk_101952FE0,
                      &off_101952F48);
                  v28 = v163;
                  v160 = (void *)v164;
                  LOBYTE(v169) = v165;
                  v29 = HIBYTE(v165);
                  v30 = *(unsigned __int16 *)((char *)&v165 + 5);
                  v31 = *(unsigned int *)((char *)&v165 + 1);
                  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(v131);
                  goto LABEL_38;
                }
                if ( (_DWORD)v23 == 3 )
                {
                  *(_QWORD *)v131 = v25;
                  *(_QWORD *)&v131[8] = v169;
                  v131[16] = (_BYTE)v168;
                  *(_DWORD *)&v131[17] = v161[0];
                  *(_DWORD *)&v131[20] = *(_DWORD *)((char *)v161 + 3);
                  *(_QWORD *)&v131[24] = v24;
                  *(_QWORD *)&v131[32] = v121[0];
                  *(_QWORD *)&v131[40] = v121[1];
                  v163 = 0;
                  v164 = 1;
                  v165 = 0;
                  __dst[2] = 1610612768;
                  __dst[0] = (__int64)&v163;
                  __dst[1] = (__int64)&off_101952F18;
                  if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80(
                                          v131,
                                          __dst) )
                    core::result::unwrap_failed::h855bccc0ecc45c4f(
                      &unk_1015DB394,
                      55,
                      v171,
                      &unk_101952FE0,
                      &off_101952F48);
                  v28 = v163;
                  v160 = (void *)v164;
                  LOBYTE(v169) = v165;
                  v29 = HIBYTE(v165);
                  v30 = *(unsigned __int16 *)((char *)&v165 + 5);
                  v31 = *(unsigned int *)((char *)&v165 + 1);
                  core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859((__int64 *)v131);
LABEL_38:
                  v32 = ((unsigned __int64)((v29 << 16) | v30) << 32) | v31;
                  v33 = *((_QWORD *)__src + 692);
                  v34 = v28;
                  if ( v33 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 693), v33, 1);
                  v35 = *((_QWORD *)__src + 695);
                  v36 = v169;
                  if ( v35 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 696), v35, 1);
                  v37 = *((_QWORD *)__src + 698);
                  if ( v37 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 699), v37, 1);
                  v38 = *((_QWORD *)__src + 701);
                  if ( v38 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 702), v38, 1);
                  v39 = *((_QWORD *)__src + 704);
                  if ( v39 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 705), v39, 1);
                  v40 = *((_QWORD *)__src + 782);
                  if ( v40 != v170 && v40 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 783), v40, 1);
                  v41 = *((_QWORD *)__src + 707);
                  if ( v41 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 708), v41, 1);
                  v42 = *((_QWORD *)__src + 710);
                  if ( v42 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 711), v42, 1);
                  v43 = *((_QWORD *)__src + 716);
                  if ( v43 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 717), v43, 1);
                  v44 = *((_QWORD *)__src + 719);
                  if ( v44 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 720), v44, 1);
                  v45 = *((_QWORD *)__src + 722);
                  if ( v45 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 723), v45, 1);
                  v46 = *((_QWORD *)__src + 725);
                  if ( v46 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 726), v46, 1);
                  v47 = *((_QWORD *)__src + 728);
                  if ( v47 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 729), v47, 1);
                  v48 = *((_QWORD *)__src + 731);
                  if ( v48 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 732), v48, 1);
                  v49 = *((_QWORD *)__src + 737);
                  if ( v49 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 738), v49, 1);
                  v50 = *((_QWORD *)__src + 740);
                  if ( v50 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 741), v50, 1);
                  v51 = *((_QWORD *)__src + 743);
                  if ( v51 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 744), v51, 1);
                  v52 = *((_QWORD *)__src + 746);
                  if ( v52 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 747), v52, 1);
                  v53 = *((_QWORD *)__src + 749);
                  if ( v53 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 750), v53, 1);
                  v54 = *((_QWORD *)__src + 752);
                  if ( v54 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 753), v54, 1);
                  v55 = *((_QWORD *)__src + 755);
                  if ( v55 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 756), v55, 1);
                  v56 = *((_QWORD *)__src + 758);
                  if ( v56 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 759), v56, 1);
                  v57 = *((_QWORD *)__src + 761);
                  if ( v57 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 762), v57, 1);
                  v58 = *((_QWORD *)__src + 764);
                  if ( v58 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 765), v58, 1);
                  v59 = *((_QWORD *)__src + 767);
                  if ( v59 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 768), v59, 1);
                  v60 = *((_QWORD *)__src + 770);
                  if ( v60 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 771), v60, 1);
                  v61 = *((_QWORD *)__src + 773);
                  if ( v61 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 774), v61, 1);
                  v62 = *((_QWORD *)__src + 776);
                  if ( v62 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 777), v62, 1);
                  v63 = *((_QWORD *)__src + 779);
                  if ( v63 )
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 780), v63, 1);
                  goto LABEL_159;
                }
                v119 = v24;
                memcpy(v120, v121, sizeof(v120));
                v116[0] = v23;
                v116[1] = v25;
                v116[2] = v169;
                v117 = (char)v168;
                *(_DWORD *)v118 = v161[0];
                *(_DWORD *)&v118[3] = *(_DWORD *)((char *)v161 + 3);
                codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h381a5be78e361a59(v131, v116);
                v64 = *(_QWORD *)v131;
                v34 = *(_QWORD *)&v131[8];
                v160 = *(void **)&v131[16];
                LOBYTE(v169) = v131[24];
                v65 = v131[31];
                v66 = *(unsigned __int16 *)&v131[29];
                v156 = *(unsigned int *)&v131[25];
                v168 = *(_QWORD **)&v131[32];
                memcpy(v122, &v131[40], sizeof(v122));
                v67 = *((_QWORD *)__src + 692);
                if ( v67 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 693), v67, 1);
                v68 = *((_QWORD *)__src + 695);
                if ( v68 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 696), v68, 1);
                v69 = *((_QWORD *)__src + 698);
                if ( v69 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 699), v69, 1);
                v70 = *((_QWORD *)__src + 701);
                if ( v70 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 702), v70, 1);
                v71 = *((_QWORD *)__src + 704);
                if ( v71 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 705), v71, 1);
                v72 = *((_QWORD *)__src + 782);
                if ( v72 != v170 && v72 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 783), v72, 1);
                v73 = *((_QWORD *)__src + 707);
                if ( v73 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 708), v73, 1);
                v74 = *((_QWORD *)__src + 710);
                if ( v74 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 711), v74, 1);
                v75 = *((_QWORD *)__src + 716);
                if ( v75 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 717), v75, 1);
                v76 = *((_QWORD *)__src + 719);
                if ( v76 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 720), v76, 1);
                v77 = *((_QWORD *)__src + 722);
                if ( v77 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 723), v77, 1);
                v78 = *((_QWORD *)__src + 725);
                if ( v78 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 726), v78, 1);
                v79 = *((_QWORD *)__src + 728);
                if ( v79 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 729), v79, 1);
                v80 = *((_QWORD *)__src + 731);
                if ( v80 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 732), v80, 1);
                v81 = *((_QWORD *)__src + 737);
                if ( v81 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 738), v81, 1);
                v82 = *((_QWORD *)__src + 740);
                if ( v82 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 741), v82, 1);
                v83 = *((_QWORD *)__src + 743);
                if ( v83 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 744), v83, 1);
                v84 = *((_QWORD *)__src + 746);
                if ( v84 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 747), v84, 1);
                v85 = *((_QWORD *)__src + 749);
                if ( v85 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 750), v85, 1);
                v86 = *((_QWORD *)__src + 752);
                if ( v86 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 753), v86, 1);
                v87 = *((_QWORD *)__src + 755);
                if ( v87 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 756), v87, 1);
                v88 = *((_QWORD *)__src + 758);
                if ( v88 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 759), v88, 1);
                v89 = *((_QWORD *)__src + 761);
                if ( v89 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 762), v89, 1);
                v90 = *((_QWORD *)__src + 764);
                if ( v90 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 765), v90, 1);
                v91 = *((_QWORD *)__src + 767);
                if ( v91 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 768), v91, 1);
                v92 = *((_QWORD *)__src + 770);
                if ( v92 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 771), v92, 1);
                v93 = *((_QWORD *)__src + 773);
                if ( v93 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 774), v93, 1);
                v94 = *((_QWORD *)__src + 776);
                if ( v94 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 777), v94, 1);
                v95 = *((_QWORD *)__src + 779);
                if ( v95 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 780), v95, 1);
                __src[6289] = 0;
                memcpy(v115, v122, sizeof(v115));
                __src[6288] = 1;
                if ( v64 != 3 )
                {
                  v32 = ((unsigned __int64)((v65 << 16) | v66) << 32) | v156;
                  v36 = v169;
                  goto LABEL_162;
                }
              }
              *v159 = 3;
LABEL_185:
              __src[6304] = 3;
              v108 = 3;
              result = 1;
              goto LABEL_193;
            }
          }
          else
          {
            v14 = 0;
            if ( !*((_BYTE *)v11 + 8) )
              goto LABEL_21;
          }
          __dst[0] = 0;
          __dst[1] = 1;
          __dst[2] = 0;
          *(_QWORD *)&v131[16] = 1610612768;
          *(_QWORD *)v131 = __dst;
          *(_QWORD *)&v131[8] = &off_101952F18;
          if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                                  "poisoned lock: another task failed inside",
                                  41,
                                  v131) )
            core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, v171, &unk_101952FE0, &off_101952F48);
          v146 = __dst[0];
          v160 = (void *)__dst[1];
          LOBYTE(v169) = __dst[2];
          v17 = HIBYTE(__dst[2]);
          v18 = *(unsigned __int16 *)((char *)&__dst[2] + 5);
          v156 = *(unsigned int *)((char *)&__dst[2] + 1);
          if ( !v14
            && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v145) != 0
            && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                   "poisoned lock: another task failed inside",
                                   41,
                                   v15,
                                   v16) )
          {
            *((_BYTE *)v11 + 8) = 1;
          }
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v11);
          if ( v146 == v170 )
          {
            v11 = (__int64 *)v160;
            v14 = v169;
            goto LABEL_21;
          }
          v32 = ((unsigned __int64)((v17 << 16) | v18) << 32) | v156;
          v34 = v146;
          v36 = v169;
LABEL_159:
          if ( ((v154 != 0) & __src[6289]) != 0 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v155, v154, 1);
          __src[6289] = 0;
          memcpy(v115, v122, sizeof(v115));
          __src[6288] = 1;
          v64 = 2;
LABEL_162:
          memcpy(v114, v115, sizeof(v114));
          v96 = (__int64)v167;
          v97 = core::ptr::drop_in_place$LT$codexmate_lib..commands..skills..restore_skill_backup..$u7b$$u7b$closure$u7d$$u7d$$GT$::h5829fa9116547eb5((__int64)v167);
          v98 = v32 << 8;
          if ( v64 == 2 )
          {
            v99 = v98 | v36;
            if ( v98 < 0 )
            {
              v100 = 0;
              goto LABEL_165;
            }
            if ( v99 )
            {
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v96, v115);
              v100 = 1;
              v102 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v99, 1);
              if ( !v102 )
LABEL_165:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v100, v99);
              v103 = v102;
            }
            else
            {
              v103 = 1;
            }
            v107 = v160;
            memcpy((void *)v103, v160, v99);
            if ( v34 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v107, v34, 1);
            LOBYTE(v148) = 3;
            v149 = v99;
            v150 = v103;
            v151 = v99;
            v101 = 1;
          }
          else
          {
            memcpy(v129, v114, sizeof(v129));
            v124 = v64;
            v125 = v34;
            v126 = v160;
            v127 = v98 | v36;
            v128 = v168;
            _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::h7128d2a97595d8b2(v131, &v124, v97);
            v122[0] = *(_QWORD *)&v131[8];
            v122[1] = *(_QWORD *)&v131[16];
            v122[2] = *(_QWORD *)&v131[24];
            v122[3] = *(_QWORD *)&v131[32];
            if ( *(_QWORD *)v131 == v170 + 37 )
            {
              v148 = v122[0];
              v149 = v122[1];
              v150 = v122[2];
              v151 = v122[3];
              v101 = 0;
            }
            else
            {
              v130[0] = *(_QWORD *)v131;
              v130[1] = v122[0];
              v130[2] = v122[1];
              v130[3] = v122[2];
              v130[4] = v122[3];
              v130[5] = *(_QWORD *)&v131[40];
              _$LT$core..result..Result$LT$T$C$F$GT$$u20$as$u20$core..ops..try_trait..FromResidual$LT$core..result..Result$LT$core..convert..Infallible$C$E$GT$$GT$$GT$::from_residual::hb033d94ed20710ab(
                &v147,
                v130);
              v101 = v147;
            }
          }
          v7 = v148;
          v157[0] = *(_DWORD *)((char *)&v148 + 1);
          *(_DWORD *)((char *)v157 + 3) = HIDWORD(v148);
          v26 = v149;
          v138 = (void *)v150;
          v139 = v151;
          *v159 = 1;
          if ( v101 == 2 )
            goto LABEL_185;
          *(_DWORD *)&v162[3] = *(_DWORD *)((char *)v157 + 3);
          *(_DWORD *)v162 = v157[0];
          v152 = v138;
          v153 = v139;
          core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb((__int64)v166);
          if ( *((_QWORD *)__src + 484) != v170 )
          {
            v170 = v26;
            v168 = __src + 3880;
            v110 = *((_QWORD *)__src + 485);
            for ( j = *((_QWORD *)__src + 486) + 1LL; j != 1; --j )
            {
              core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v110);
              v110 += 96;
            }
            v106 = *((_QWORD *)__src + 484);
            v26 = v170;
            if ( v106 )
LABEL_191:
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v168, 96 * v106, 8);
          }
LABEL_192:
          *(_DWORD *)&v158[3] = *(_DWORD *)&v162[3];
          *(_DWORD *)v158 = *(_DWORD *)v162;
          v140 = v152;
          v141 = v153;
          __src[6304] = 1;
          core::ptr::drop_in_place$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$::h6c5d40be1c442ec6((__int64)v166);
          v133 = v7;
          *(_DWORD *)v134 = *(_DWORD *)v158;
          *(_DWORD *)&v134[3] = *(_DWORD *)&v158[3];
          v135 = v26;
          v136 = v140;
          v137 = v141;
          v132 = v101;
          __src[6323] = 0;
          memcpy(v131, __src, 0x168u);
          __src[6322] = 0;
          v112 = *((_QWORD *)__src + 48);
          __src[6321] = 0;
          v126 = *((void **)__src + 47);
          v113 = *((_QWORD *)__src + 45);
          v125 = *((_QWORD *)__src + 46);
          v124 = v113;
          tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
            v131,
            v112,
            &v132,
            &v124,
            *((unsigned int *)__src + 1578),
            *((unsigned int *)__src + 1579));
          v108 = 1;
          result = 0;
LABEL_193:
          __src[6320] = v108;
          return result;
        case 1u:
LABEL_208:
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101952978);
        case 2u:
LABEL_207:
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101952978);
        case 3u:
          goto LABEL_24;
      }
  }
}
