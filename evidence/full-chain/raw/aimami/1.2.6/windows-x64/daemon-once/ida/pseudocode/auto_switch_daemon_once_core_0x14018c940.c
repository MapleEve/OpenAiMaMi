// sub_14018C940 @ 0x14018c940 | size=0x10aa | windows-x64 1.2.6 | THE REAL run_daemon_once business core.
// identification: called from exactly 1 site (sub_140001110 = main() CLI dispatcher matching argv[1]==
// "daemon-run-once" + "--codex-home <path>"); logs structured events with literal strings "auto_switch"(11),
// "daemon_started"(14), "mode=scheduled"(14), "daemon_succeeded"(16)/"result=ok"(9), "daemon_failed"(13) -- these
// exact literals also appear (identical wording) in the macOS 1.2.3 SYMBOL-NAMED equivalent
// codexmate_lib::run_daemon_once_cli (raw/aimami/1.2.3/macos-arm64/run_daemon_once_cli/ida/pseudocode/
// run_daemon_once_cli_0x1006f3190.c), which calls Repository::auto_switch_config / sync_local_runtime_state /
// sync_auto_switch_request / reconcile_auto_switch_request / build_daemon_payload / persist_progressive_state /
// enrich_accounts_via_api_with_subscription_policy -- confirming this Windows function is the strip-binary
// equivalent of codexmate_lib::run_daemon_once_cli, and that its module home is core::repository (NOT a "run" or
// "daemon" top-level module), which resolves the P0 open question in deep-targets.json (windows census found
// run=0/daemon=0; the real logic lives in core::repository + a crate-root run_daemon_once_cli/_inner pair, same
// pattern as macOS commands::system::run_daemon_once_blocking + run_daemon_once_cli both delegating to
// core::repository::Repository::*).
// backend questions answered this pass:
//   - scheduler/owner: core::repository cluster (via sub_140AD26D0, confirmed panic-location "src\core\repository.rs"
//     + tracing target "codexmate_lib::core::repository"); NOT under commands:: on the CLI path (CLI calls this
//     function directly from main(), no tauri command wrapper involved for the CLI invocation)
//   - persistence/default when absent: sub_140AD49F0 attempts automatic repair of the auto-switch daemon config on
//     read failure; if repair also fails, emits "AUTO_SWITCH_DAEMON_REPAIR_FAILED" structured event and continues
//     with a degraded/default path (no panic)
//   - side effects/error propagation: structured app_event-style logging with started/succeeded/failed states;
//     builds and returns a CoreEnvelope<DaemonRunPayload>-shaped result (v54[16]=discriminant, matches macOS
//     Result<DaemonRunPayload, CoreError> ABI)
//   - single-flight: NOT found in this function directly. Confirmed via macOS cross-reference that the Tauri/
//     blocking variant (commands::system::run_daemon_once_blocking) wraps the equivalent repository access in a
//     std::sync::Mutex<Repository> guard with poisoned-lock recovery ("poisoned lock: another task failed inside").
//     The CLI path (this function, sub_14018C940) is NOT shown taking an equivalent Windows mutex lock/unlock in the
//     decompiled body below -- CLI invocation is a separate process instance (via daemon-run-once --codex-home
//     subprocess spawn) so process-level mutual exclusion, not an in-process mutex, would be the applicable
//     mechanism for the CLI path; this was not independently verified in this pass (see manifest.json open items).
// verbatim Hex-Rays decompile() output, IDA MCP win, 2026-08-06
__int64 __fastcall sub_14018C940(__int64 a1, __int64 a2)
{
  __m128i v3; // xmm0
  __int64 v4; // rbx
  __m128i v5; // xmm0
  __m128i v6; // xmm0
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // r14
  __int64 v10; // rbx
  __int64 v11; // r15
  _QWORD *v12; // r12
  __int64 v13; // rdx
  __int64 v14; // rdx
  __m128i v15; // xmm0
  __m128i v16; // kr10_16
  __int64 v17; // r14
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // r12
  __int64 v21; // rbx
  __m128i v22; // xmm0
  __int64 v24; // rdi
  __int64 v25; // rbx
  __int64 v26; // r14
  const __m128i *v27; // r15
  __m128i si128; // xmm0
  __int64 v30; // rax
  __int64 v31; // rdx
  unsigned __int64 v32; // rax
  __int64 v33; // rdi
  char v35; // r15
  __m128i v36; // xmm0
  __m128i v37; // xmm0
  __m128i v38; // xmm0
  __m128i v39; // kr20_16
  __int64 v40; // r14
  __m128i v41; // xmm0
  __int64 v42; // rbx
  __int64 v43; // rbx
  __m128i v44; // xmm0
  _BYTE v45[520]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v46; // [rsp+238h] [rbp+1B8h]
  __int64 v47; // [rsp+240h] [rbp+1C0h]
  __m256i v48; // [rsp+410h] [rbp+390h] BYREF
  __int128 v49; // [rsp+430h] [rbp+3B0h] BYREF
  __int128 v50; // [rsp+440h] [rbp+3C0h]
  __int128 v51; // [rsp+450h] [rbp+3D0h]
  __int128 v52; // [rsp+460h] [rbp+3E0h]
  _BYTE v53[24]; // [rsp+848h] [rbp+7C8h] BYREF
  _BYTE v54[1040]; // [rsp+860h] [rbp+7E0h] BYREF
  _QWORD v55[2]; // [rsp+C98h] [rbp+C18h] BYREF
  char v56; // [rsp+CA8h] [rbp+C28h]
  __m128i v57; // [rsp+CB0h] [rbp+C30h] BYREF
  __int64 v58; // [rsp+CC0h] [rbp+C40h]
  _QWORD v59[2]; // [rsp+CC8h] [rbp+C48h] BYREF
  char v60; // [rsp+CD8h] [rbp+C58h]
  __m128i v61; // [rsp+CE0h] [rbp+C60h]
  __int64 v62; // [rsp+CF0h] [rbp+C70h]
  __m256i v63; // [rsp+D00h] [rbp+C80h] BYREF
  __int128 v64; // [rsp+D20h] [rbp+CA0h] BYREF
  __int128 v65; // [rsp+D30h] [rbp+CB0h]
  __int128 v66; // [rsp+D40h] [rbp+CC0h]
  __int128 v67; // [rsp+D50h] [rbp+CD0h]
  __m128i v68; // [rsp+DB0h] [rbp+D30h] BYREF
  __int64 v69; // [rsp+DC0h] [rbp+D40h]
  __int64 v70; // [rsp+DC8h] [rbp+D48h]
  __int64 v71; // [rsp+DE0h] [rbp+D60h]
  __int64 v72; // [rsp+DE8h] [rbp+D68h]
  __m128i v73; // [rsp+DF0h] [rbp+D70h] BYREF
  __int64 v74; // [rsp+E00h] [rbp+D80h]
  unsigned __int128 v75; // [rsp+E10h] [rbp+D90h] BYREF
  __int128 v76; // [rsp+E20h] [rbp+DA0h]
  __int128 v77; // [rsp+E30h] [rbp+DB0h]
  __int128 v78; // [rsp+E40h] [rbp+DC0h]
  __int128 v79; // [rsp+E50h] [rbp+DD0h]
  __int128 v80; // [rsp+E60h] [rbp+DE0h]
  __m128i v81; // [rsp+E70h] [rbp+DF0h] BYREF
  __int64 v82; // [rsp+E80h] [rbp+E00h]
  char v83; // [rsp+E97h] [rbp+E17h] BYREF
  __int64 v84; // [rsp+E98h] [rbp+E18h]

  v84 = -2; /*0x14018c959*/
  if ( *(_QWORD *)a2 == -1 ) /*0x14018c96b*/
  {
    sub_140539E30(v54); /*0x14018c9b8*/
    sub_14053E630(v45, v54); /*0x14018c9c4*/
  }
  else
  {
    v3 = _mm_loadu_si128((const __m128i *)a2); /*0x14018c96d*/
    *(_OWORD *)&v48.m256i_u64[2] = *(_OWORD *)(a2 + 16); /*0x14018c975*/
    *(__m128i *)v48.m256i_i8 = v3; /*0x14018c97c*/
    sub_14053E630(v54, &v48); /*0x14018c995*/
    sub_14172B820(v45, v54, 992); /*0x14018c9a7*/
  }
  sub_140B45AB0(v45); /*0x14018c9ce*/
  sub_140AA6020((unsigned int)aAutoSwitch, 11, (unsigned int)aDaemonStarted, 14, (__int64)aModeScheduled, 14); /*0x14018ca02*/
  sub_140AD26D0(v55, v45); /*0x14018ca16*/
  if ( v56 ) /*0x14018ca23*/
  {
    sub_140AD49F0(v54, v45); /*0x14018ca34*/
    v4 = *(_QWORD *)v54; /*0x14018ca3a*/
    if ( *(_QWORD *)v54 == 2 ) /*0x14018ca4c*/
    {
      v67 = *(_OWORD *)&v54[88]; /*0x14018ca56*/
      v66 = *(_OWORD *)&v54[72]; /*0x14018ca61*/
      v5 = _mm_loadu_si128((const __m128i *)&v54[8]); /*0x14018ca68*/
      v65 = *(_OWORD *)&v54[56]; /*0x14018ca78*/
      v64 = *(_OWORD *)&v54[40]; /*0x14018ca7f*/
      *(_OWORD *)&v63.m256i_u64[2] = *(_OWORD *)&v54[24]; /*0x14018ca86*/
      *(__m128i *)v63.m256i_i8 = v5; /*0x14018ca8d*/
      v68.m128i_i64[0] = 0; /*0x14018ca95*/
      v68.m128i_i64[1] = 1; /*0x14018caa0*/
      v69 = 0; /*0x14018caab*/
      *(_QWORD *)&v76 = 1610612768; /*0x14018cab6*/
      *(_QWORD *)&v75 = &v68; /*0x14018cac8*/
      *((_QWORD *)&v75 + 1) = &off_1417EA258; /*0x14018cad6*/
      if ( (unsigned __int8)sub_1405060F0(&v63, &v75) ) /*0x14018caeb*/
        sub_14176E860( /*0x14018d924*/
          (unsigned int)aADisplayImplem,
          55,
          (unsigned int)&v83,
          (unsigned int)&unk_1417E9310,
          (__int64)&off_1417EA310);
LABEL_7:
      v82 = v69; /*0x14018caf9*/
      v81 = _mm_loadu_si128(&v68); /*0x14018cb0f*/
      sub_1400464F0(&v54[8]); /*0x14018cb1a*/
      *(__m128i *)v54 = _mm_load_si128(&v81); /*0x14018cb2f*/
      *(_QWORD *)&v54[16] = v82; /*0x14018cb37*/
      goto LABEL_52; /*0x14018cb3e*/
    }
    v82 = *(_QWORD *)&v54[24]; /*0x14018cc46*/
    v81 = *(__m128i *)&v54[8]; /*0x14018cc50*/
    sub_14172B820(&v49, &v54[32], 1040); /*0x14018cc6b*/
    v74 = v82; /*0x14018cc77*/
    *(__m128i *)&v48.m256i_u64[1] = _mm_load_si128(&v81); /*0x14018cc86*/
    v48.m256i_i64[3] = v82; /*0x14018cc8e*/
    v48.m256i_i64[0] = v4; /*0x14018cc95*/
    v7 = v47; /*0x14018cc9c*/
    if ( v47 < 0 ) /*0x14018cca6*/
    {
      v8 = 0; /*0x14018ccac*/
      goto LABEL_13; /*0x14018ccac*/
    }
    if ( v47 ) /*0x14018ce63*/
    {
      v18 = v46; /*0x14018ce69*/
      nullsub_1(); /*0x14018ce70*/
      v8 = 1; /*0x14018ce75*/
      v19 = sub_140001650(v7, 1); /*0x14018ce83*/
      if ( !v19 ) /*0x14018ce8b*/
LABEL_13:
        sub_14176E54B(v8, v7); /*0x14018ccaf*/
      v20 = v19; /*0x14018ce91*/
      sub_14172B820(v19, v18, v7); /*0x14018ce9d*/
    }
    else
    {
      v20 = 1; /*0x14018cfb9*/
    }
    v71 = v20; /*0x14018cfd5*/
    v72 = v7; /*0x14018cfdf*/
    sub_140B1C6A0((unsigned int)&v68, (unsigned int)&v48, v20, v7, 0); /*0x14018cfe9*/
    sub_140AD9880(&v63, v45, &v48); /*0x14018d001*/
    if ( v63.m256i_i32[0] != -1 ) /*0x14018d00e*/
    {
      *(_OWORD *)&v54[80] = v67; /*0x14018d01b*/
      *(_OWORD *)&v54[64] = v66; /*0x14018d029*/
      v22 = _mm_loadu_si128((const __m128i *)&v63); /*0x14018d030*/
      *(_OWORD *)&v54[48] = v65; /*0x14018d04d*/
      *(_OWORD *)&v54[32] = v64; /*0x14018d054*/
      *(_OWORD *)&v54[16] = *(_OWORD *)&v63.m256i_u64[2]; /*0x14018d05b*/
      *(__m128i *)v54 = v22; /*0x14018d062*/
      v81.m128i_i64[0] = 0; /*0x14018d06a*/
      v81.m128i_i64[1] = 1; /*0x14018d075*/
      v82 = 0; /*0x14018d080*/
      *(_QWORD *)&v76 = 1610612768; /*0x14018d08b*/
      *(_QWORD *)&v75 = &v81; /*0x14018d09d*/
      *((_QWORD *)&v75 + 1) = &off_1417EA258; /*0x14018d0ab*/
      if ( (unsigned __int8)sub_1405060F0(v54, &v75) ) /*0x14018d0c0*/
        sub_14176E860( /*0x14018d986*/
          (unsigned int)aADisplayImplem,
          55,
          (unsigned int)&v83,
          (unsigned int)&unk_1417E9310,
          (__int64)&off_1417EA310);
      v74 = v82; /*0x14018d0d5*/
      v73 = _mm_loadu_si128(&v81); /*0x14018d0e4*/
      sub_1400464F0(&v63); /*0x14018d0f3*/
      *(__m128i *)v54 = _mm_load_si128(&v73); /*0x14018d101*/
      _RAX = v74; /*0x14018d109*/
      goto LABEL_38; /*0x14018d109*/
    }
    sub_140AD26D0(v59, v45); /*0x14018d316*/
    v35 = v60; /*0x14018d31c*/
    if ( v60 && v59[0] == v55[0] ) /*0x14018d33b*/
    {
      sub_140AE8F20((unsigned int)&v63, (unsigned int)v45, (unsigned int)&v48, (unsigned int)v59, (__int64)&v68); /*0x14018d35f*/
      if ( v63.m256i_i32[0] != -1 ) /*0x14018d36c*/
      {
        *(_OWORD *)&v54[80] = v67; /*0x14018d379*/
        *(_OWORD *)&v54[64] = v66; /*0x14018d387*/
        v36 = _mm_loadu_si128((const __m128i *)&v63); /*0x14018d38e*/
        *(_OWORD *)&v54[48] = v65; /*0x14018d3ab*/
        *(_OWORD *)&v54[32] = v64; /*0x14018d3b2*/
        *(_OWORD *)&v54[16] = *(_OWORD *)&v63.m256i_u64[2]; /*0x14018d3b9*/
        *(__m128i *)v54 = v36; /*0x14018d3c0*/
        sub_140174030(&v75, v54); /*0x14018d3d6*/
        _RAX = v76; /*0x14018d3dc*/
        v37 = _mm_loadu_si128((const __m128i *)&v75); /*0x14018d3e3*/
LABEL_75:
        *(__m128i *)v54 = v37; /*0x14018d8c0*/
LABEL_38:
        *(_QWORD *)&v54[16] = _RAX; /*0x14018d110*/
LABEL_39:
        v24 = v68.m128i_i64[1]; /*0x14018d117*/
        if ( v68.m128i_i64[1] ) /*0x14018d121*/
        {
          v25 = v70; /*0x14018d127*/
          if ( v70 ) /*0x14018d131*/
          {
            v26 = v68.m128i_i64[0]; /*0x14018d137*/
            v27 = (const __m128i *)(v68.m128i_i64[0] + 16); /*0x14018d143*/
            _R12D = ~_mm_movemask_epi8(_mm_load_si128((const __m128i *)v68.m128i_i64[0])); /*0x14018d14c*/
            do /*0x14018d171*/
            {
              if ( !(_WORD)_R12D ) /*0x14018d177*/
              {
                do /*0x14018d19c*/
                {
                  si128 = _mm_load_si128(v27); /*0x14018d180*/
                  v26 -= 384; /*0x14018d185*/
                  ++v27; /*0x14018d18c*/
                  _R12D = _mm_movemask_epi8(si128) ^ 0xFFFF; /*0x14018d195*/
                }
                while ( !_R12D ); /*0x14018d19c*/
              }
              __asm { tzcnt eax, r12d } /*0x14018d19e*/
              v30 = -3 * _RAX; /*0x14018d1a6*/
              v31 = *(_QWORD *)(v26 + 8 * v30 - 24); /*0x14018d1aa*/
              if ( v31 ) /*0x14018d1b2*/
                sub_140001660(*(_QWORD *)(v26 + 8 * v30 - 16), v31, 1); /*0x14018d1c2*/
              --v25; /*0x14018d160*/
              _RAX = _R12D & (unsigned int)(_R12D - 1); /*0x14018d168*/
              _R12D &= _R12D - 1; /*0x14018d16b*/
            }
            while ( v25 ); /*0x14018d171*/
          }
          v32 = (24 * v24 + 39) & 0xFFFFFFFFFFFFFFF0uLL; /*0x14018d1d5*/
          v33 = v32 + v24 + 17; /*0x14018d1dc*/
          if ( v33 ) /*0x14018d1e0*/
            sub_140001660(v68.m128i_i64[0] - v32, v33, 16); /*0x14018d1f5*/
        }
        if ( v72 ) /*0x14018d204*/
          sub_140001660(v71, v72, 1); /*0x14018d213*/
LABEL_51:
        sub_140045330(&v48); /*0x14018d219*/
LABEL_52:
        if ( *(_QWORD *)v54 != -1 ) /*0x14018d231*/
          goto LABEL_53; /*0x14018d231*/
LABEL_54:
        sub_140AA6020((unsigned int)aAutoSwitch, 11, (unsigned int)aDaemonSucceede, 16, (__int64)aResultOk, 9); /*0x14018d2a1*/
        goto LABEL_55; /*0x14018d2cf*/
      }
      v57 = _mm_loadu_si128((const __m128i *)&v63.m256i_u64[1]); /*0x14018d754*/
      v58 = v63.m256i_i64[3]; /*0x14018d75c*/
      *(_QWORD *)&v75 = -1; /*0x14018d763*/
      sub_140AD2F50((unsigned int)v54, (unsigned int)v45, (unsigned int)&v75, (unsigned int)&v57, 1); /*0x14018d78c*/
      v43 = *(_QWORD *)v54; /*0x14018d792*/
      if ( *(_QWORD *)v54 != -1 ) /*0x14018d79d*/
      {
        v74 = *(_QWORD *)&v54[24]; /*0x14018d7a7*/
        v73 = *(__m128i *)&v54[8]; /*0x14018d7b1*/
        sub_14172B820(&v64, &v54[32], 136); /*0x14018d7cc*/
        v62 = v74; /*0x14018d7d8*/
        v61 = _mm_load_si128(&v73); /*0x14018d7e7*/
        *(__m128i *)&v63.m256i_u64[1] = v61; /*0x14018d7ef*/
        v63.m256i_i64[3] = v74; /*0x14018d7f7*/
        v63.m256i_i64[0] = v43; /*0x14018d7fe*/
        sub_140038BB0(&v63); /*0x14018d80c*/
        *(_QWORD *)v54 = -1; /*0x14018d811*/
        sub_1405F1100(&v68); /*0x14018d823*/
        if ( v72 ) /*0x14018d833*/
          sub_140001660(v71, v72, 1); /*0x14018d842*/
        goto LABEL_51; /*0x14018d842*/
      }
    }
    else
    {
      sub_140AD5690((unsigned int)&v63, (unsigned int)v45, 0, 0, (__int64)v59); /*0x14018d406*/
      if ( v63.m256i_i32[0] != -1 ) /*0x14018d413*/
      {
        *(_OWORD *)&v54[80] = v67; /*0x14018d420*/
        *(_OWORD *)&v54[64] = v66; /*0x14018d42e*/
        v38 = _mm_loadu_si128((const __m128i *)&v63); /*0x14018d435*/
        *(_OWORD *)&v54[48] = v65; /*0x14018d452*/
        *(_OWORD *)&v54[32] = v64; /*0x14018d459*/
        *(_OWORD *)&v54[16] = *(_OWORD *)&v63.m256i_u64[2]; /*0x14018d460*/
        *(__m128i *)v54 = v38; /*0x14018d467*/
        v81.m128i_i64[0] = 0; /*0x14018d46f*/
        v81.m128i_i64[1] = 1; /*0x14018d47a*/
        v82 = 0; /*0x14018d485*/
        *(_QWORD *)&v76 = 1610612768; /*0x14018d490*/
        *(_QWORD *)&v75 = &v81; /*0x14018d4a2*/
        *((_QWORD *)&v75 + 1) = &off_1417EA258; /*0x14018d4b0*/
        if ( (unsigned __int8)sub_1405060F0(v54, &v75) ) /*0x14018d4c5*/
          sub_14176E860( /*0x14018d9e2*/
            (unsigned int)aADisplayImplem,
            55,
            (unsigned int)&v83,
            (unsigned int)&unk_1417E9310,
            (__int64)&off_1417EA310);
        v39 = v81; /*0x14018d4da*/
        v40 = v82; /*0x14018d4e1*/
        HIDWORD(_RAX) = (unsigned __int64)sub_1400464F0(&v63) >> 32; /*0x14018d4ef*/
        *(__m128i *)v54 = v39; /*0x14018d4f5*/
        *(_QWORD *)&v54[16] = v40; /*0x14018d503*/
        goto LABEL_39; /*0x14018d50a*/
      }
      if ( (unsigned __int64)(v63.m256i_i64[1] - 1) <= 0xFFFFFFFFFFFFFFFDuLL ) /*0x14018d5f1*/
        sub_140001660(v63.m256i_i64[2], v63.m256i_i64[1], 1); /*0x14018d600*/
      v81.m128i_i64[0] = -1; /*0x14018d605*/
      *(_QWORD *)&v76 = v82; /*0x14018d617*/
      v75 = __PAIR128__(v81.m128i_u64[1], -1); /*0x14018d625*/
      sub_140AD2F50((unsigned int)v54, (unsigned int)v45, (unsigned int)&v75, (unsigned int)&v81, v35); /*0x14018d658*/
      v42 = *(_QWORD *)v54; /*0x14018d65e*/
      if ( *(_QWORD *)v54 != -1 ) /*0x14018d669*/
      {
        v74 = *(_QWORD *)&v54[24]; /*0x14018d66f*/
        v73 = *(__m128i *)&v54[8]; /*0x14018d679*/
        sub_14172B820(&v64, &v54[32], 136); /*0x14018d694*/
        v62 = v74; /*0x14018d6a0*/
        v61 = _mm_load_si128(&v73); /*0x14018d6af*/
        *(__m128i *)&v63.m256i_u64[1] = v61; /*0x14018d6b7*/
        v63.m256i_i64[3] = v74; /*0x14018d6bf*/
        v63.m256i_i64[0] = v42; /*0x14018d6c6*/
        HIDWORD(_RAX) = (unsigned __int64)sub_140038BB0(&v63) >> 32; /*0x14018d6d4*/
        *(_QWORD *)v54 = -1; /*0x14018d6d9*/
        goto LABEL_39; /*0x14018d6e4*/
      }
    }
    v80 = *(_OWORD *)&v54[88]; /*0x14018d85e*/
    v79 = *(_OWORD *)&v54[72]; /*0x14018d869*/
    v44 = _mm_loadu_si128((const __m128i *)&v54[8]); /*0x14018d870*/
    v78 = *(_OWORD *)&v54[56]; /*0x14018d880*/
    v77 = *(_OWORD *)&v54[40]; /*0x14018d887*/
    v76 = *(_OWORD *)&v54[24]; /*0x14018d88e*/
    v75 = (unsigned __int128)v44; /*0x14018d895*/
    sub_140174030(&v81, &v75); /*0x14018d8ab*/
    _RAX = v82; /*0x14018d8b1*/
    v37 = _mm_loadu_si128(&v81); /*0x14018d8b8*/
    goto LABEL_75; /*0x14018d8b8*/
  }
  sub_140AD62B0(&v48, v45); /*0x14018cb4e*/
  if ( v48.m256i_i32[0] == -1 ) /*0x14018cb5b*/
  {
    v9 = v48.m256i_i64[1]; /*0x14018ccc0*/
    v11 = v48.m256i_i64[3]; /*0x14018ccce*/
    v10 = v48.m256i_i64[2]; /*0x14018ccce*/
    if ( v48.m256i_i64[3] ) /*0x14018ccd8*/
    {
      v12 = (_QWORD *)(v48.m256i_i64[2] + 32); /*0x14018ccda*/
      do /*0x14018cce7*/
      {
        v13 = *(v12 - 4); /*0x14018cce9*/
        if ( v13 ) /*0x14018ccf1*/
          sub_140001660(*(v12 - 3), v13, 1); /*0x14018ccfe*/
        v14 = *(v12 - 1); /*0x14018cd03*/
        if ( v14 ) /*0x14018cd0b*/
          sub_140001660(*v12, v14, 1); /*0x14018cd17*/
        v12 += 6; /*0x14018cce0*/
        --v11; /*0x14018cce4*/
      }
      while ( v11 ); /*0x14018cce7*/
    }
    if ( v9 ) /*0x14018cd21*/
      sub_140001660(v10, 48 * v9, 8); /*0x14018cd34*/
    sub_140AD5690((unsigned int)&v48, (unsigned int)v45, 0, 0, (__int64)v55); /*0x14018cd50*/
    if ( v48.m256i_i32[0] == -1 ) /*0x14018cd5d*/
    {
      if ( (unsigned __int64)(v48.m256i_i64[1] - 1) <= 0xFFFFFFFFFFFFFFFDuLL ) /*0x14018ceb6*/
        sub_140001660(v48.m256i_i64[2], v48.m256i_i64[1], 1); /*0x14018cec5*/
      *(_QWORD *)&v75 = -1; /*0x14018ceca*/
      v63.m256i_i64[2] = v76; /*0x14018cedc*/
      *(_OWORD *)v63.m256i_i8 = __PAIR128__(*((unsigned __int64 *)&v75 + 1), -1); /*0x14018ceea*/
      sub_140AD2F50((unsigned int)v54, (unsigned int)v45, (unsigned int)&v63, (unsigned int)&v75, 0); /*0x14018cf1d*/
      v21 = *(_QWORD *)v54; /*0x14018cf23*/
      if ( *(_QWORD *)v54 != -1 ) /*0x14018cf35*/
      {
        v82 = *(_QWORD *)&v54[24]; /*0x14018cf3f*/
        v81 = *(__m128i *)&v54[8]; /*0x14018cf49*/
        sub_14172B820(&v49, &v54[32], 136); /*0x14018cf64*/
        v74 = v82; /*0x14018cf70*/
        v73 = _mm_load_si128(&v81); /*0x14018cf7f*/
        *(__m128i *)&v48.m256i_u64[1] = v73; /*0x14018cf87*/
        v48.m256i_i64[3] = v82; /*0x14018cf8f*/
        v48.m256i_i64[0] = v21; /*0x14018cf96*/
        sub_140038BB0(&v48); /*0x14018cfa4*/
        *(_QWORD *)v54 = -1; /*0x14018cfa9*/
        goto LABEL_54; /*0x14018cfb4*/
      }
      v67 = *(_OWORD *)&v54[88]; /*0x14018d513*/
      v66 = *(_OWORD *)&v54[72]; /*0x14018d51e*/
      v41 = _mm_loadu_si128((const __m128i *)&v54[8]); /*0x14018d525*/
      v65 = *(_OWORD *)&v54[56]; /*0x14018d535*/
      v64 = *(_OWORD *)&v54[40]; /*0x14018d53c*/
      *(_OWORD *)&v63.m256i_u64[2] = *(_OWORD *)&v54[24]; /*0x14018d543*/
      *(__m128i *)v63.m256i_i8 = v41; /*0x14018d54a*/
      v68.m128i_i64[0] = 0; /*0x14018d552*/
      v68.m128i_i64[1] = 1; /*0x14018d55d*/
      v69 = 0; /*0x14018d568*/
      *(_QWORD *)&v76 = 1610612768; /*0x14018d573*/
      *(_QWORD *)&v75 = &v68; /*0x14018d585*/
      *((_QWORD *)&v75 + 1) = &off_1417EA258; /*0x14018d593*/
      if ( (unsigned __int8)sub_1405060F0(&v63, &v75) ) /*0x14018d5a8*/
        sub_14176E860( /*0x14018d9b4*/
          (unsigned int)aADisplayImplem,
          55,
          (unsigned int)&v83,
          (unsigned int)&unk_1417E9310,
          (__int64)&off_1417EA310);
      goto LABEL_7; /*0x14018d5b0*/
    }
    *(_OWORD *)&v54[80] = v52; /*0x14018cd6a*/
    *(_OWORD *)&v54[64] = v51; /*0x14018cd78*/
    v15 = _mm_loadu_si128((const __m128i *)&v48); /*0x14018cd7f*/
    *(_OWORD *)&v54[48] = v50; /*0x14018cd9c*/
    *(_OWORD *)&v54[32] = v49; /*0x14018cda3*/
    *(_OWORD *)&v54[16] = *(_OWORD *)&v48.m256i_u64[2]; /*0x14018cdaa*/
    *(__m128i *)v54 = v15; /*0x14018cdb1*/
    *(_QWORD *)&v75 = 0; /*0x14018cdb9*/
    *((_QWORD *)&v75 + 1) = 1; /*0x14018cdc4*/
    *(_QWORD *)&v76 = 0; /*0x14018cdcf*/
    v63.m256i_i64[2] = 1610612768; /*0x14018cdda*/
    v63.m256i_i64[0] = (__int64)&v75; /*0x14018cdec*/
    v63.m256i_i64[1] = (__int64)&off_1417EA258; /*0x14018cdfa*/
    if ( (unsigned __int8)sub_1405060F0(v54, &v63) ) /*0x14018ce0f*/
      sub_14176E860( /*0x14018d955*/
        (unsigned int)aADisplayImplem,
        55,
        (unsigned int)&v83,
        (unsigned int)&unk_1417E9310,
        (__int64)&off_1417EA310);
  }
  else
  {
    *(_OWORD *)&v54[80] = v52; /*0x14018cb68*/
    *(_OWORD *)&v54[64] = v51; /*0x14018cb76*/
    v6 = _mm_loadu_si128((const __m128i *)&v48); /*0x14018cb7d*/
    *(_OWORD *)&v54[48] = v50; /*0x14018cb9a*/
    *(_OWORD *)&v54[32] = v49; /*0x14018cba1*/
    *(_OWORD *)&v54[16] = *(_OWORD *)&v48.m256i_u64[2]; /*0x14018cba8*/
    *(__m128i *)v54 = v6; /*0x14018cbaf*/
    *(_QWORD *)&v75 = 0; /*0x14018cbb7*/
    *((_QWORD *)&v75 + 1) = 1; /*0x14018cbc2*/
    *(_QWORD *)&v76 = 0; /*0x14018cbcd*/
    v63.m256i_i64[2] = 1610612768; /*0x14018cbd8*/
    v63.m256i_i64[0] = (__int64)&v75; /*0x14018cbea*/
    v63.m256i_i64[1] = (__int64)&off_1417EA258; /*0x14018cbf8*/
    if ( (unsigned __int8)sub_1405060F0(v54, &v63) ) /*0x14018cc0d*/
      sub_14176E860( /*0x14018d8f3*/
        (unsigned int)aADisplayImplem,
        55,
        (unsigned int)&v83,
        (unsigned int)&unk_1417E9310,
        (__int64)&off_1417EA310);
  }
  v16 = (__m128i)v75; /*0x14018ce24*/
  v17 = v76; /*0x14018ce2b*/
  sub_1400464F0(&v48); /*0x14018ce39*/
  *(__m128i *)v54 = v16; /*0x14018ce3f*/
  *(_QWORD *)&v54[16] = v17; /*0x14018ce4d*/
  if ( v16.m128i_i64[0] == -1 ) /*0x14018ce58*/
    goto LABEL_54; /*0x14018ce58*/
LABEL_53:
  v63.m256i_i64[0] = (__int64)v54; /*0x14018d233*/
  v48.m256i_i64[0] = (__int64)&v63; /*0x14018d248*/
  v48.m256i_i64[1] = (__int64)sub_1407B7F60; /*0x14018d256*/
  sub_141543AF0(v53, &unk_14177CF38, &v48); /*0x14018d275*/
  sub_140AA6250((unsigned int)aAutoSwitch, 11, (unsigned int)aDaemonFailed, 13, (__int64)v53); /*0x14018d299*/
LABEL_55:
  *(_QWORD *)(a1 + 16) = *(_QWORD *)&v54[16]; /*0x14018d2d5*/
  *(_OWORD *)a1 = *(_OWORD *)v54; /*0x14018d2e7*/
  sub_140046920(v45); /*0x14018d2ee*/
  return a1; /*0x14018d2f6*/
}

// refs: sub_140539E30, sub_14053E630, sub_14172B820, sub_140B45AB0, sub_140AA6020,
// aAutoSwitch="auto_switch"@0x14177cef8, aDaemonStarted="daemon_started"@0x14177cf03,
// aModeScheduled="mode=scheduled"@0x14177cf11, sub_140AD26D0(core::repository gating), sub_140AD49F0(config repair),
// off_1417EA258, sub_14176E860, aADisplayImplem="a Display implementation returned an error unexpectedly"@0x1417ea288,
// unk_1417E9310, off_1417EA310, sub_1405060F0, sub_1400464F0, nullsub_1, sub_140001650, sub_14176E54B,
// sub_140B1C6A0, sub_140AD9880, sub_140AE8F20, sub_140174030, sub_140001660, sub_140045330,
// aDaemonSucceede="daemon_succeeded"@0x14177cf1f, aResultOk="result=ok"@0x14177cf2f, sub_140AD2F50, sub_140038BB0,
// sub_1405F1100, sub_140AD5690, sub_140AD62B0, sub_1407B7F60, sub_141543AF0, unk_14177CF38, sub_140AA6250,
// aDaemonFailed="daemon_failed"@0x14177cf41, sub_140046920
