/* addr=0x1001a9190 cleanname=ipc_dispatch group=tauri-ipc-dispatch
 * decompiled via IDA Python server-side IDA decompiler.decompile
 * n_lines=956 brace_balanced=True truncation_markers=[]
 */
char __fastcall tauri::ipc::InvokeResolver$LT$R$GT$::respond_async_serialized_inner::_$u7b$$u7b$closure$u7d$$u7d$::hba5f8a7b51877193(
        unsigned __int8 *__src,
        char *a2)
{
  __int64 v3; // rax
  char *v4; // r15
  _QWORD *v5; // r14
  __int64 v6; // r15
  char v7; // r13
  __int64 v8; // rax
  __int64 v9; // rcx
  char *v10; // r14
  unsigned __int64 v11; // r14
  __int64 *v12; // r13
  __int64 v13; // rdi
  __int64 v14; // rdx
  char v15; // r15
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r12d
  int v19; // r14d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  __int64 v23; // r13
  unsigned __int64 v24; // r12
  __int64 v25; // r14
  unsigned __int64 v26; // r12
  __int64 v27; // r15
  __int64 v28; // r12
  int v29; // r15d
  unsigned int v30; // r14d
  __int64 v31; // r13
  unsigned __int64 v32; // r13
  unsigned __int64 v33; // r14
  __int64 v34; // rsi
  unsigned __int8 v35; // r13
  int v36; // r15d
  unsigned int v37; // r14d
  __int64 v38; // r12
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
  __int64 v64; // rsi
  __int64 v65; // rsi
  __int64 v66; // rsi
  __int64 v67; // rsi
  __int64 v68; // r15
  __int64 v69; // rdi
  double v70; // xmm0_8
  __int64 v71; // r13
  size_t v72; // r15
  __int64 v73; // r13
  __int64 v74; // r15
  __int64 v75; // rax
  __int64 v76; // r12
  __int64 v77; // rdi
  __int64 i; // r12
  __int64 v79; // rax
  __int64 v80; // r13
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
  __int64 v96; // rsi
  __int64 v97; // rsi
  __int64 v98; // rsi
  __int64 v99; // rsi
  __int64 v100; // rsi
  __int64 v101; // rsi
  __int64 v102; // rsi
  __int64 v103; // rsi
  __int64 v104; // rsi
  __int64 v105; // rsi
  __int64 v106; // rsi
  __int64 v107; // rsi
  __int64 v108; // rsi
  __int64 v109; // rsi
  __int64 v110; // rsi
  void *v111; // r13
  char v112; // cl
  char result; // al
  __int64 v114; // rdi
  __int64 j; // r12
  __int64 v116; // rsi
  __int64 v117; // rax
  _BYTE v118[72]; // [rsp+8h] [rbp-4C8h] BYREF
  _BYTE v119[72]; // [rsp+50h] [rbp-480h] BYREF
  _QWORD v120[6]; // [rsp+98h] [rbp-438h] BYREF
  __int64 v121; // [rsp+C8h] [rbp-408h] BYREF
  char v122; // [rsp+D0h] [rbp-400h]
  _BYTE v123[7]; // [rsp+D1h] [rbp-3FFh]
  unsigned __int64 v124; // [rsp+D8h] [rbp-3F8h]
  void *v125; // [rsp+E0h] [rbp-3F0h]
  __int64 v126; // [rsp+E8h] [rbp-3E8h]
  _QWORD v127[9]; // [rsp+F0h] [rbp-3E0h] BYREF
  __int64 v128[2]; // [rsp+138h] [rbp-398h] BYREF
  char v129; // [rsp+148h] [rbp-388h]
  int v130; // [rsp+149h] [rbp-387h]
  __int16 v131; // [rsp+14Dh] [rbp-383h]
  char v132; // [rsp+14Fh] [rbp-381h]
  unsigned __int64 v133; // [rsp+150h] [rbp-380h]
  void *v134; // [rsp+158h] [rbp-378h]
  size_t v135; // [rsp+160h] [rbp-370h]
  void *v136; // [rsp+168h] [rbp-368h]
  __int64 v137; // [rsp+170h] [rbp-360h]
  __int64 v138; // [rsp+178h] [rbp-358h]
  __int64 v139; // [rsp+180h] [rbp-350h]
  __int64 v140; // [rsp+188h] [rbp-348h] BYREF
  __int64 v141; // [rsp+190h] [rbp-340h]
  void *v142; // [rsp+198h] [rbp-338h]
  __int64 v143; // [rsp+1A0h] [rbp-330h]
  __int64 v144; // [rsp+1A8h] [rbp-328h]
  _BYTE v145[72]; // [rsp+1B0h] [rbp-320h] BYREF
  __int64 __dst[45]; // [rsp+1F8h] [rbp-2D8h] BYREF
  __int64 v147; // [rsp+360h] [rbp-170h]
  __int64 v148; // [rsp+368h] [rbp-168h]
  __int64 v149; // [rsp+370h] [rbp-160h]
  __int64 v150; // [rsp+378h] [rbp-158h]
  __int64 v151; // [rsp+380h] [rbp-150h]
  __int64 v152; // [rsp+388h] [rbp-148h]
  __int64 v153; // [rsp+390h] [rbp-140h]
  void *v154; // [rsp+398h] [rbp-138h]
  __int64 v155; // [rsp+3A0h] [rbp-130h]
  unsigned __int64 v156; // [rsp+3A8h] [rbp-128h]
  __int64 v157; // [rsp+3B0h] [rbp-120h] BYREF
  __int64 v158; // [rsp+3B8h] [rbp-118h]
  size_t v159; // [rsp+3C0h] [rbp-110h]
  __int64 v160; // [rsp+3C8h] [rbp-108h]
  size_t v161; // [rsp+3D0h] [rbp-100h]
  void *v162; // [rsp+3D8h] [rbp-F8h]
  __int64 v163; // [rsp+3E0h] [rbp-F0h]
  __int64 v164; // [rsp+3E8h] [rbp-E8h]
  _DWORD v165[2]; // [rsp+3F0h] [rbp-E0h]
  _BYTE v166[7]; // [rsp+3F8h] [rbp-D8h]
  __int64 *v167; // [rsp+400h] [rbp-D0h] BYREF
  __int64 v168; // [rsp+408h] [rbp-C8h]
  __int64 v169; // [rsp+410h] [rbp-C0h]
  __int64 v170; // [rsp+418h] [rbp-B8h]
  __int64 v171; // [rsp+420h] [rbp-B0h]
  __int64 v172; // [rsp+428h] [rbp-A8h]
  __int64 v173; // [rsp+430h] [rbp-A0h]
  unsigned __int8 *v174; // [rsp+438h] [rbp-98h]
  _BYTE *v175; // [rsp+440h] [rbp-90h]
  __int64 v176; // [rsp+448h] [rbp-88h]
  __int64 v177; // [rsp+450h] [rbp-80h] BYREF
  __int64 v178; // [rsp+458h] [rbp-78h]
  unsigned __int64 v179; // [rsp+460h] [rbp-70h]
  void *__srca; // [rsp+468h] [rbp-68h]
  _BYTE v181[7]; // [rsp+470h] [rbp-60h]
  char *v182; // [rsp+478h] [rbp-58h]
  char *v183; // [rsp+480h] [rbp-50h]
  __int64 v184; // [rsp+488h] [rbp-48h]
  unsigned __int64 v185; // [rsp+490h] [rbp-40h]
  unsigned __int64 v186; // [rsp+498h] [rbp-38h]
  _BYTE v187[41]; // [rsp+4A7h] [rbp-29h] BYREF

  v3 = __src[6320];
  v183 = a2;
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
          goto LABEL_213;
        case 2u:
          goto LABEL_212;
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
          __dst[6] = 0;
          __dst[0] = (__int64)"delete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
          __dst[1] = 19;
          __dst[2] = (__int64)"repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide";
          __dst[3] = 4;
          v182 = v4;
          __dst[4] = (__int64)v4;
          __dst[5] = (__int64)(__src + 3872);
          v6 = tauri::state::StateManager::try_get::h687ceb5065e3b70f(*((_QWORD *)__src + 483) + 16LL);
          if ( v6 )
            goto LABEL_7;
          _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe(
            &v140,
            __dst,
            &__dst[2]);
          v7 = v140;
          if ( (_BYTE)v140 == 6 )
          {
            v6 = v141;
LABEL_7:
            __dst[6] = 0;
            __dst[0] = (__int64)"delete_skill_backupidload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
            __dst[1] = 19;
            __dst[2] = (__int64)"idload_tool_analyticslogoutrun_codex_router_diagnosticsrefresh_usage_snapshotload_quota_historytest_api_proxy_configurlexport_session_markdownfix_codex_router_issueitemIdset_codex_router_enabledremove_accountsload_session_analyticsimport_skillpreview_account_importset_auto_switchrestore_skill_backupinject_voice_textcapture_voice_trigger_keystyleget_relay_provider_quotadetect_api_proxy_configquit_after_closing_routerload_change_analyticsset_codex_router_no_account_moderun_daemon_onceswitch_accounttest_relay_draft_streamfetch_relay_models_draftswitch_account_and_restart_codexconfirm_pending_auto_switch_and_restart_codexremove_skillload_skill_backups127.0.0.1:1455/auth/callback";
            __dst[3] = 2;
            __dst[4] = (__int64)v182;
            __dst[5] = (__int64)(__src + 3872);
            _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(
              &v140,
              __dst);
            v7 = v140;
            if ( (_BYTE)v140 == 6 )
            {
              v8 = v141;
              v154 = v142;
              v155 = v143;
              *((_QWORD *)__src + 490) = v6;
              *((_QWORD *)__src + 487) = v8;
              v9 = v155;
              *((_QWORD *)__src + 488) = v154;
              *((_QWORD *)__src + 489) = v9;
              __src[4688] = 0;
              v10 = (char *)(__src + 4696);
              memcpy(__src + 4696, __src + 3896, 0x320u);
              v175 = __src + 6296;
              __src[6296] = 0;
LABEL_10:
              v174 = __src + 5496;
              a2 = v10;
              memcpy(__src + 5496, v10, 0x320u);
              v11 = 0x8000000000000000LL;
              switch ( __src[6288] )
              {
                case 0u:
                  goto LABEL_12;
                case 1u:
                  goto LABEL_215;
                case 2u:
                  goto LABEL_214;
                case 3u:
                  goto LABEL_24;
              }
            }
            *(_DWORD *)&v181[3] = HIDWORD(v140);
            *(_DWORD *)v181 = *(_DWORD *)((char *)&v140 + 1);
            v26 = v141;
            v154 = v142;
            v155 = v143;
            v162 = v142;
            v163 = v143;
          }
          else
          {
            *(_DWORD *)&v181[3] = HIDWORD(v140);
            *(_DWORD *)v181 = *(_DWORD *)((char *)&v140 + 1);
            v26 = v141;
            v162 = v142;
            v163 = v143;
          }
          core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb((__int64)v182);
          v74 = 1;
          if ( __OFSUB__(0, *v5) )
            goto LABEL_199;
          v185 = v26;
          v186 = (unsigned __int64)(__src + 3880);
          v77 = *((_QWORD *)__src + 485);
          for ( i = *((_QWORD *)__src + 486) + 1LL; i != 1; --i )
          {
            core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v77);
            v77 += 96;
          }
          v79 = *v5;
          v74 = 1;
          v26 = v185;
          if ( !*v5 )
            goto LABEL_199;
          goto LABEL_198;
        case 1u:
LABEL_213:
          v182 = v4;
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_1019522D0);
        case 2u:
LABEL_212:
          v182 = v4;
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_1019522D0);
        case 3u:
          goto LABEL_9;
      }
  }
LABEL_9:
  v182 = v4;
  v175 = __src + 6296;
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
      v11 = 0x8000000000000000LL;
      v174 = __src + 5496;
      switch ( __src[6288] )
      {
        case 0u:
LABEL_12:
          v185 = 0x8000000000000000LL;
          v12 = *((__int64 **)__src + 690);
          *((_QWORD *)__src + 691) = v12;
          __src[6289] = 1;
          v176 = *((_QWORD *)__src + 687);
          v164 = *((_QWORD *)__src + 688);
          v138 = *((_QWORD *)__src + 689);
          v13 = *v12;
          if ( !*v12 )
            v13 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v12);
          std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v13);
          v11 = v185;
          v156 = v185 - 1;
          if ( ((v185 - 1) & std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6) != 0 )
          {
            v15 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v13, a2, v14, v185 - 1) ^ 1;
            v11 = v185;
            if ( !*((_BYTE *)v12 + 8) )
            {
LABEL_21:
              _$LT$codexmate_lib..platform..paths..CodexPaths$u20$as$u20$core..clone..Clone$GT$::clone::hf6c0d3e83be86178(
                (size_t *)__src + 692,
                v12 + 2);
              if ( (v15 & 1) == 0
                && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v156) != 0
                && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                       __src + 5536,
                                       v12 + 2,
                                       v20,
                                       v21) )
              {
                *((_BYTE *)v12 + 8) = 1;
              }
              std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v12);
              __src[6289] = 0;
              __dst[2] = *((_QWORD *)__src + 736);
              v22 = *((_QWORD *)__src + 734);
              __dst[1] = *((_QWORD *)__src + 735);
              __dst[0] = v22;
              __dst[3] = v176;
              __dst[4] = v164;
              __dst[5] = v138;
              *((_QWORD *)__src + 785) = tauri::async_runtime::spawn_blocking::he6ac194b4a7db922(__dst);
LABEL_24:
              _$LT$tokio..runtime..task..join..JoinHandle$LT$T$GT$$u20$as$u20$core..future..future..Future$GT$::poll::hfdf77a1312ffaf82(
                __dst,
                __src + 6280,
                v183);
              v23 = __dst[0];
              if ( __dst[0] == 13 )
              {
                __src[6288] = 3;
              }
              else
              {
                v185 = v11;
                if ( LODWORD(__dst[0]) == 12 )
                {
                  v184 = __dst[1];
                  LOBYTE(v183) = __dst[2];
                  v24 = ((unsigned __int64)((HIBYTE(__dst[2]) << 16)
                                          | (unsigned int)*(unsigned __int16 *)((char *)&__dst[2] + 5)) << 32)
                      | *(unsigned int *)((char *)&__dst[2] + 1);
                  v186 = __dst[3];
                  v25 = v11 + 12;
                }
                else
                {
                  v25 = __dst[1];
                  v184 = __dst[2];
                  LOBYTE(v183) = __dst[3];
                  v24 = ((unsigned __int64)((HIBYTE(__dst[3]) << 16)
                                          | (unsigned int)*(unsigned __int16 *)((char *)&__dst[3] + 5)) << 32)
                      | *(unsigned int *)((char *)&__dst[3] + 1);
                  v186 = __dst[4];
                  v167 = (__int64 *)__dst[5];
                  v168 = __dst[6];
                  v169 = __dst[7];
                  v170 = __dst[8];
                  v171 = __dst[9];
                  v172 = __dst[10];
                  v173 = __dst[11];
                }
                v147 = (__int64)v167;
                v148 = v168;
                v149 = v169;
                v150 = v170;
                v151 = v171;
                v152 = v172;
                v153 = v173;
                v27 = *((_QWORD *)__src + 785);
                if ( (unsigned __int8)tokio::runtime::task::state::State::drop_join_handle_fast::h261ebd480c6ca3c1(v27) )
                  tokio::runtime::task::raw::RawTask::drop_join_handle_slow::h992aae8c362d2517(v27);
                if ( (_DWORD)v23 != 11 )
                {
                  if ( (_DWORD)v23 == 12 )
                  {
                    __dst[0] = v25;
                    __dst[1] = v184;
                    LOBYTE(__dst[2]) = (_BYTE)v183;
                    *(_DWORD *)((char *)&__dst[2] + 1) = v24;
                    HIBYTE(__dst[2]) = BYTE6(v24);
                    v28 = HIDWORD(v24);
                    *(_WORD *)((char *)&__dst[2] + 5) = v28;
                    __dst[3] = v186;
                    __dst[4] = v147;
                    __dst[5] = v148;
                    v177 = 0;
                    v178 = 1;
                    v179 = 0;
                    v169 = 1610612768;
                    v167 = &v177;
                    v168 = (__int64)&off_101952F18;
                    if ( (unsigned __int8)_$LT$tauri..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h31de19ecd7d23d80(
                                            __dst,
                                            &v167) )
                      core::result::unwrap_failed::h855bccc0ecc45c4f(
                        &unk_1015DB394,
                        55,
                        v187,
                        &unk_101952FE0,
                        &off_101952F48);
                    v184 = v177;
                    __srca = (void *)v178;
                    v186 = (unsigned __int8)v179;
                    v29 = HIBYTE(v179);
                    v30 = *(unsigned __int16 *)((char *)&v179 + 5);
                    v31 = *(unsigned int *)((char *)&v179 + 1);
                    core::ptr::drop_in_place$LT$tauri..error..Error$GT$::hbb2283fa0888d859(__dst);
                    v32 = ((unsigned __int64)((v29 << 16) | v30) << 32) | v31;
                    v33 = v185;
                    v34 = *((_QWORD *)__src + 692);
                    if ( !v34 )
                      goto LABEL_44;
                    goto LABEL_43;
                  }
                  __dst[0] = v23;
                  __dst[1] = v25;
                  __dst[2] = v184;
                  LOBYTE(__dst[3]) = (_BYTE)v183;
                  *(_DWORD *)((char *)&__dst[3] + 1) = v24;
                  HIBYTE(__dst[3]) = BYTE6(v24);
                  *(_WORD *)((char *)&__dst[3] + 5) = WORD2(v24);
                  __dst[4] = v186;
                  __dst[5] = v147;
                  __dst[6] = v148;
                  __dst[7] = v149;
                  __dst[8] = v150;
                  __dst[9] = v151;
                  __dst[10] = v152;
                  __dst[11] = v153;
                  v177 = 0;
                  v178 = 1;
                  v179 = 0;
                  v169 = 1610612768;
                  v167 = &v177;
                  v168 = (__int64)&off_101952F18;
                  if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2(
                                          __dst,
                                          (__int64 *)&v167) )
                    core::result::unwrap_failed::h855bccc0ecc45c4f(
                      &unk_1015DB394,
                      55,
                      v187,
                      &unk_101952FE0,
                      &off_101952F48);
                  v184 = v177;
                  v35 = v178;
                  v36 = HIBYTE(v178);
                  v37 = *(unsigned __int16 *)((char *)&v178 + 5);
                  v38 = *(unsigned int *)((char *)&v178 + 1);
                  v186 = v179;
                  core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__dst);
                  v24 = ((unsigned __int64)((v36 << 16) | v37) << 32) | v38;
LABEL_42:
                  v28 = v35 | (v24 << 8);
                  __srca = (void *)v28;
                  v32 = v186 >> 8;
                  v33 = v185;
                  v34 = *((_QWORD *)__src + 692);
                  if ( !v34 )
                  {
LABEL_44:
                    v39 = *((_QWORD *)__src + 695);
                    if ( v39 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 696), v39, 1);
                    v40 = *((_QWORD *)__src + 698);
                    if ( v40 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 699), v40, 1);
                    v41 = *((_QWORD *)__src + 701);
                    if ( v41 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 702), v41, 1);
                    v42 = *((_QWORD *)__src + 704);
                    if ( v42 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 705), v42, 1);
                    v43 = *((_QWORD *)__src + 782);
                    if ( v43 != v33 && v43 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 783), v43, 1);
                    v44 = *((_QWORD *)__src + 707);
                    if ( v44 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 708), v44, 1);
                    v45 = *((_QWORD *)__src + 710);
                    if ( v45 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 711), v45, 1);
                    v46 = *((_QWORD *)__src + 713);
                    if ( v46 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 714), v46, 1);
                    v47 = *((_QWORD *)__src + 716);
                    if ( v47 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 717), v47, 1);
                    v48 = *((_QWORD *)__src + 719);
                    if ( v48 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 720), v48, 1);
                    v49 = *((_QWORD *)__src + 722);
                    if ( v49 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 723), v49, 1);
                    v50 = *((_QWORD *)__src + 725);
                    if ( v50 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 726), v50, 1);
                    v51 = *((_QWORD *)__src + 728);
                    if ( v51 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 729), v51, 1);
                    v52 = *((_QWORD *)__src + 731);
                    if ( v52 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 732), v52, 1);
                    v53 = *((_QWORD *)__src + 737);
                    if ( v53 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 738), v53, 1);
                    v54 = *((_QWORD *)__src + 740);
                    if ( v54 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 741), v54, 1);
                    v55 = *((_QWORD *)__src + 743);
                    if ( v55 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 744), v55, 1);
                    v56 = *((_QWORD *)__src + 746);
                    if ( v56 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 747), v56, 1);
                    v57 = *((_QWORD *)__src + 749);
                    if ( v57 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 750), v57, 1);
                    v58 = *((_QWORD *)__src + 752);
                    if ( v58 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 753), v58, 1);
                    v59 = *((_QWORD *)__src + 755);
                    if ( v59 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 756), v59, 1);
                    v60 = *((_QWORD *)__src + 758);
                    if ( v60 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 759), v60, 1);
                    v61 = *((_QWORD *)__src + 761);
                    if ( v61 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 762), v61, 1);
                    v62 = *((_QWORD *)__src + 764);
                    if ( v62 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 765), v62, 1);
                    v63 = *((_QWORD *)__src + 767);
                    if ( v63 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 768), v63, 1);
                    v64 = *((_QWORD *)__src + 770);
                    if ( v64 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 771), v64, 1);
                    v65 = *((_QWORD *)__src + 773);
                    if ( v65 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 774), v65, 1);
                    v66 = *((_QWORD *)__src + 776);
                    if ( v66 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 777), v66, 1);
                    v67 = *((_QWORD *)__src + 779);
                    if ( v67 )
                      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 780), v67, 1);
                    goto LABEL_104;
                  }
LABEL_43:
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 693), v34, 1);
                  goto LABEL_44;
                }
                if ( v25 == v185 )
                {
                  v35 = (unsigned __int8)v183;
                  goto LABEL_42;
                }
                v128[0] = v25;
                v128[1] = v184;
                v129 = (char)v183;
                v130 = v24;
                v132 = BYTE6(v24);
                v131 = WORD2(v24);
                v133 = v186;
                codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hfcccfab8d11ab999((__int64)__dst, v128);
                v68 = __dst[0];
                v184 = __dst[1];
                __srca = (void *)__dst[2];
                v186 = LOBYTE(__dst[3]);
                LODWORD(v176) = HIBYTE(__dst[3]);
                v183 = (char *)*(unsigned __int16 *)((char *)&__dst[3] + 5);
                v80 = *(unsigned int *)((char *)&__dst[3] + 1);
                v28 = __dst[4];
                qmemcpy(v127, &__dst[5], sizeof(v127));
                v81 = *((_QWORD *)__src + 692);
                v33 = v185;
                if ( v81 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 693), v81, 1);
                v82 = *((_QWORD *)__src + 695);
                if ( v82 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 696), v82, 1);
                v83 = *((_QWORD *)__src + 698);
                if ( v83 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 699), v83, 1);
                v84 = *((_QWORD *)__src + 701);
                if ( v84 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 702), v84, 1);
                v85 = *((_QWORD *)__src + 704);
                if ( v85 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 705), v85, 1);
                v86 = *((_QWORD *)__src + 782);
                if ( v86 != v33 && v86 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 783), v86, 1);
                v87 = *((_QWORD *)__src + 707);
                if ( v87 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 708), v87, 1);
                v88 = *((_QWORD *)__src + 710);
                if ( v88 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 711), v88, 1);
                v89 = *((_QWORD *)__src + 713);
                if ( v89 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 714), v89, 1);
                v90 = *((_QWORD *)__src + 716);
                if ( v90 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 717), v90, 1);
                v91 = *((_QWORD *)__src + 719);
                if ( v91 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 720), v91, 1);
                v92 = *((_QWORD *)__src + 722);
                if ( v92 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 723), v92, 1);
                v93 = *((_QWORD *)__src + 725);
                if ( v93 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 726), v93, 1);
                v94 = *((_QWORD *)__src + 728);
                if ( v94 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 729), v94, 1);
                v95 = *((_QWORD *)__src + 731);
                if ( v95 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 732), v95, 1);
                v96 = *((_QWORD *)__src + 737);
                if ( v96 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 738), v96, 1);
                v97 = *((_QWORD *)__src + 740);
                if ( v97 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 741), v97, 1);
                v98 = *((_QWORD *)__src + 743);
                if ( v98 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 744), v98, 1);
                v99 = *((_QWORD *)__src + 746);
                if ( v99 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 747), v99, 1);
                v100 = *((_QWORD *)__src + 749);
                if ( v100 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 750), v100, 1);
                v101 = *((_QWORD *)__src + 752);
                if ( v101 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 753), v101, 1);
                v102 = *((_QWORD *)__src + 755);
                if ( v102 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 756), v102, 1);
                v103 = *((_QWORD *)__src + 758);
                if ( v103 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 759), v103, 1);
                v104 = *((_QWORD *)__src + 761);
                if ( v104 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 762), v104, 1);
                v105 = *((_QWORD *)__src + 764);
                if ( v105 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 765), v105, 1);
                v106 = *((_QWORD *)__src + 767);
                if ( v106 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 768), v106, 1);
                v107 = *((_QWORD *)__src + 770);
                if ( v107 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 771), v107, 1);
                v108 = *((_QWORD *)__src + 773);
                if ( v108 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 774), v108, 1);
                v109 = *((_QWORD *)__src + 776);
                if ( v109 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 777), v109, 1);
                v110 = *((_QWORD *)__src + 779);
                if ( v110 )
                  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*((_QWORD *)__src + 780), v110, 1);
                __src[6289] = 0;
                qmemcpy(v119, v127, sizeof(v119));
                __src[6288] = 1;
                if ( v68 != v33 + 1 )
                {
                  v32 = ((unsigned __int64)(((_DWORD)v176 << 16) | (unsigned int)v183) << 32) | v80;
                  goto LABEL_107;
                }
              }
              *v175 = 3;
LABEL_192:
              __src[6304] = 3;
              v112 = 3;
              result = 1;
              goto LABEL_200;
            }
          }
          else
          {
            v15 = 0;
            if ( !*((_BYTE *)v12 + 8) )
              goto LABEL_21;
          }
          v167 = nullptr;
          v168 = 1;
          v169 = 0;
          __dst[2] = 1610612768;
          __dst[0] = (__int64)&v167;
          __dst[1] = (__int64)&off_101952F18;
          if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                                  "poisoned lock: another task failed inside",
                                  41,
                                  __dst) )
            core::result::unwrap_failed::h855bccc0ecc45c4f(&unk_1015DB394, 55, v187, &unk_101952FE0, &off_101952F48);
          v184 = (__int64)v167;
          __srca = (void *)v168;
          v186 = (unsigned __int8)v169;
          v18 = HIBYTE(v169);
          v19 = *(unsigned __int16 *)((char *)&v169 + 5);
          v139 = *(unsigned int *)((char *)&v169 + 1);
          if ( !v15
            && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v156) != 0
            && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                   "poisoned lock: another task failed inside",
                                   41,
                                   v16,
                                   v17) )
          {
            *((_BYTE *)v12 + 8) = 1;
          }
          std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v12);
          if ( v184 == v185 )
          {
            v12 = (__int64 *)__srca;
            v15 = v186;
            v11 = v185;
            goto LABEL_21;
          }
          v28 = (unsigned int)(v18 << 16);
          v32 = ((unsigned __int64)((unsigned int)v28 | v19) << 32) | v139;
          v33 = v185;
LABEL_104:
          if ( ((v176 != 0) & __src[6289]) != 0 )
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v164, v176, 1);
          __src[6289] = 0;
          qmemcpy(v119, v127, sizeof(v119));
          __src[6288] = 1;
          v68 = v33;
LABEL_107:
          qmemcpy(v118, v119, sizeof(v118));
          v69 = (__int64)v174;
          v70 = core::ptr::drop_in_place$LT$codexmate_lib..commands..skills..delete_skill_backup..$u7b$$u7b$closure$u7d$$u7d$$GT$::h0ef7b694118a9ebd((__int64)v174);
          v71 = v32 << 8;
          if ( v68 == v33 )
          {
            v72 = v71 | (unsigned __int8)v186;
            if ( v71 < 0 )
            {
              v73 = 0;
              goto LABEL_110;
            }
            if ( v72 )
            {
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v69, v120);
              v73 = 1;
              v75 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v72, 1);
              if ( !v75 )
LABEL_110:
                alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v73, v72);
              v76 = v75;
            }
            else
            {
              v76 = 1;
            }
            v111 = __srca;
            memcpy((void *)v76, __srca, v72);
            if ( v184 )
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v111, v184, 1);
            LOBYTE(v158) = 3;
            v159 = v72;
            v160 = v76;
            v161 = v72;
            v74 = 1;
          }
          else
          {
            qmemcpy(v145, v118, sizeof(v145));
            v140 = v68;
            v141 = v184;
            v142 = __srca;
            v143 = v71 | (unsigned __int8)v186;
            v144 = v28;
            _$LT$T$u20$as$u20$tauri..ipc..IpcResponse$GT$::body::h273b30f299023d7f(__dst, &v140, v70);
            v127[0] = __dst[1];
            v127[1] = __dst[2];
            v127[2] = __dst[3];
            v127[3] = __dst[4];
            if ( __dst[0] == v33 + 37 )
            {
              v158 = v127[0];
              v159 = v127[1];
              v160 = v127[2];
              v161 = v127[3];
              v74 = 0;
            }
            else
            {
              v120[0] = __dst[0];
              v120[1] = v127[0];
              v120[2] = v127[1];
              v120[3] = v127[2];
              v120[4] = v127[3];
              v120[5] = __dst[5];
              _$LT$core..result..Result$LT$T$C$F$GT$$u20$as$u20$core..ops..try_trait..FromResidual$LT$core..result..Result$LT$core..convert..Infallible$C$E$GT$$GT$$GT$::from_residual::hb033d94ed20710ab(
                &v157,
                v120);
              v74 = v157;
            }
          }
          v7 = v158;
          v165[0] = *(_DWORD *)((char *)&v158 + 1);
          *(_DWORD *)((char *)v165 + 3) = HIDWORD(v158);
          v26 = v159;
          v134 = (void *)v160;
          v135 = v161;
          *v175 = 1;
          if ( v74 == 2 )
            goto LABEL_192;
          *(_DWORD *)&v181[3] = *(_DWORD *)((char *)v165 + 3);
          *(_DWORD *)v181 = v165[0];
          v162 = v134;
          v163 = v135;
          core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb((__int64)v182);
          if ( *((_QWORD *)__src + 484) != v33 )
          {
            v185 = v26;
            v186 = (unsigned __int64)(__src + 3880);
            v114 = *((_QWORD *)__src + 485);
            for ( j = *((_QWORD *)__src + 486) + 1LL; j != 1; --j )
            {
              core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v114);
              v114 += 96;
            }
            v79 = *((_QWORD *)__src + 484);
            v26 = v185;
            if ( v79 )
LABEL_198:
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(_QWORD *)v186, 96 * v79, 8);
          }
LABEL_199:
          *(_DWORD *)&v166[3] = *(_DWORD *)&v181[3];
          *(_DWORD *)v166 = *(_DWORD *)v181;
          v136 = v162;
          v137 = v163;
          __src[6304] = 1;
          core::ptr::drop_in_place$LT$codexmate_lib..run..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$..$u7b$$u7b$closure$u7d$$u7d$$GT$::had47cca1b87fcd6b((__int64)v182);
          v122 = v7;
          *(_DWORD *)v123 = *(_DWORD *)v166;
          *(_DWORD *)&v123[3] = *(_DWORD *)&v166[3];
          v124 = v26;
          v125 = v136;
          v126 = v137;
          v121 = v74;
          __src[6323] = 0;
          memcpy(__dst, __src, sizeof(__dst));
          __src[6322] = 0;
          v116 = *((_QWORD *)__src + 48);
          __src[6321] = 0;
          v142 = *((void **)__src + 47);
          v117 = *((_QWORD *)__src + 45);
          v141 = *((_QWORD *)__src + 46);
          v140 = v117;
          tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b(
            __dst,
            v116,
            &v121,
            &v140,
            *((unsigned int *)__src + 1578),
            *((unsigned int *)__src + 1579));
          v112 = 1;
          result = 0;
LABEL_200:
          __src[6320] = v112;
          return result;
        case 1u:
LABEL_215:
          core::panicking::panic_const::panic_const_async_fn_resumed::h8f02a5f78cdcc4bb(&off_101952960);
        case 2u:
LABEL_214:
          core::panicking::panic_const::panic_const_async_fn_resumed_panic::h51796ee0ce4d776a(&off_101952960);
        case 3u:
          goto LABEL_24;
      }
  }
}
