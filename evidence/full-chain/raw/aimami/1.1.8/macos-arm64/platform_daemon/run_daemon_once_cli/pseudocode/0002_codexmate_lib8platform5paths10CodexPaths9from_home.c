// mac 1.1.8 BEHAVIORAL-BACKEND run_daemon_once_cli node 0x1004d6720 depth=1
// codexmate_lib8platform5paths10CodexPaths9from_home
_QWORD *__fastcall codexmate_lib::platform::paths::CodexPaths::from_home::h1ecd6646f13db1b2(_QWORD *a1, _QWORD *a2)
{
  const void *v2; // rbx
  size_t v3; // r12
  const void *v4; // r14
  size_t v5; // rbx
  __int64 v6; // r14
  _BYTE *v7; // rax
  const void *v8; // r15
  size_t v9; // rdx
  size_t v10; // r14
  __int64 v11; // r15
  __int64 v12; // r15
  _UNKNOWN **v13; // rax
  const void *v14; // r14
  const void *v15; // r14
  size_t v16; // r15
  void *v17; // r14
  size_t v18; // rax
  size_t v19; // rax
  size_t v20; // rax
  const void *v21; // rcx
  size_t v22; // rax
  _QWORD *v23; // rdx
  __int64 v24; // rcx
  size_t v25; // rcx
  size_t v26; // rcx
  size_t v27; // rax
  __int64 v28; // rcx
  size_t v29; // rcx
  size_t v30; // rcx
  size_t v31; // rcx
  size_t v32; // rcx
  size_t v33; // rax
  size_t v34; // rcx
  size_t v35; // rcx
  size_t v36; // rcx
  size_t v37; // rcx
  size_t v38; // rcx
  size_t v39; // rax
  size_t v40; // rcx
  size_t v41; // rcx
  size_t v42; // rcx
  size_t v43; // rcx
  size_t v44; // rcx
  size_t v45; // rax
  size_t v46; // rcx
  size_t v47; // rcx
  const void *v48; // rcx
  __int64 v50; // r15
  __int64 v51; // [rsp+0h] [rbp-3A0h] BYREF
  const void *v52; // [rsp+8h] [rbp-398h]
  size_t v53; // [rsp+10h] [rbp-390h]
  size_t v54; // [rsp+98h] [rbp-308h] BYREF
  void *v55; // [rsp+A0h] [rbp-300h]
  size_t __n; // [rsp+A8h] [rbp-2F8h]
  size_t v57[3]; // [rsp+B0h] [rbp-2F0h] BYREF
  size_t v58[3]; // [rsp+C8h] [rbp-2D8h] BYREF
  size_t v59[3]; // [rsp+E0h] [rbp-2C0h] BYREF
  size_t v60[3]; // [rsp+F8h] [rbp-2A8h] BYREF
  size_t v61[3]; // [rsp+110h] [rbp-290h] BYREF
  size_t v62[3]; // [rsp+128h] [rbp-278h] BYREF
  size_t v63[3]; // [rsp+140h] [rbp-260h] BYREF
  size_t v64[3]; // [rsp+158h] [rbp-248h] BYREF
  size_t v65[3]; // [rsp+170h] [rbp-230h] BYREF
  size_t v66[3]; // [rsp+188h] [rbp-218h] BYREF
  size_t v67[3]; // [rsp+1A0h] [rbp-200h] BYREF
  size_t v68[3]; // [rsp+1B8h] [rbp-1E8h] BYREF
  size_t v69[3]; // [rsp+1D0h] [rbp-1D0h] BYREF
  size_t v70[3]; // [rsp+1E8h] [rbp-1B8h] BYREF
  size_t v71[3]; // [rsp+200h] [rbp-1A0h] BYREF
  size_t v72[3]; // [rsp+218h] [rbp-188h] BYREF
  size_t v73[3]; // [rsp+230h] [rbp-170h] BYREF
  size_t v74[3]; // [rsp+248h] [rbp-158h] BYREF
  size_t v75[3]; // [rsp+260h] [rbp-140h] BYREF
  _QWORD v76[3]; // [rsp+278h] [rbp-128h] BYREF
  size_t v77[3]; // [rsp+290h] [rbp-110h] BYREF
  size_t v78[3]; // [rsp+2A8h] [rbp-F8h] BYREF
  size_t v79[3]; // [rsp+2C0h] [rbp-E0h] BYREF
  size_t v80[3]; // [rsp+2D8h] [rbp-C8h] BYREF
  size_t v81; // [rsp+2F0h] [rbp-B0h] BYREF
  void *v82; // [rsp+2F8h] [rbp-A8h]
  size_t v83; // [rsp+300h] [rbp-A0h]
  size_t v84; // [rsp+308h] [rbp-98h] BYREF
  const void *v85; // [rsp+310h] [rbp-90h]
  size_t v86; // [rsp+318h] [rbp-88h]
  size_t v87; // [rsp+320h] [rbp-80h] BYREF
  const void *v88; // [rsp+328h] [rbp-78h]
  size_t v89; // [rsp+330h] [rbp-70h]
  size_t v90; // [rsp+338h] [rbp-68h] BYREF
  const void *v91; // [rsp+340h] [rbp-60h]
  size_t v92; // [rsp+348h] [rbp-58h]
  _QWORD *v93; // [rsp+350h] [rbp-50h]
  char *v94; // [rsp+358h] [rbp-48h]
  void *__src; // [rsp+360h] [rbp-40h]
  void *v96; // [rsp+368h] [rbp-38h]
  const void *v97; // [rsp+370h] [rbp-30h]

  v2 = (const void *)a2[1]; /*0x1004d6737*/
  v93 = a2; /*0x1004d673b*/
  v3 = a2[2]; /*0x1004d673f*/
  v97 = v2; /*0x1004d675a*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v90, v2, v3, &anon_3e4c14ac1826b92abbb84b981a88c995_425, 8u); /*0x1004d675e*/
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1004d677d*/
    &v81,
    v2,
    v3,
    "codexmatecustom-instructionsrelayauth.jsonconfig.tomlsession_index.jsonlarchived_sessionsskillsregistry.jsonsnapshotsbackupsauto-switch.logquota-history.jsonlsettings.jsonbootstrap-cache.jsonauto-switch-pending.jsonauto-switch-snooze.jsonvoice-workspace.jsonvoice-runtime.jsonstate.jsonAGENTS.mdhistorya tuple of size 2a sequencea tuple of size 3",
    9u);
  v4 = v82; /*0x1004d6782*/
  v5 = v83; /*0x1004d6789*/
  v96 = v82; /*0x1004d67a7*/
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1004d67ab*/
    &v87,
    v82,
    v83,
    "custom-instructionsrelayauth.jsonconfig.tomlsession_index.jsonlarchived_sessionsskillsregistry.jsonsnapshotsbackupsauto-switch.logquota-history.jsonlsettings.jsonbootstrap-cache.jsonauto-switch-pending.jsonauto-switch-snooze.jsonvoice-workspace.jsonvoice-runtime.jsonstate.jsonAGENTS.mdhistorya tuple of size 2a sequencea tuple of size 3",
    0x13u);
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1004d67ca*/
    &v84,
    v4,
    v5,
    "relayauth.jsonconfig.tomlsession_index.jsonlarchived_sessionsskillsregistry.jsonsnapshotsbackupsauto-switch.logquota-history.jsonlsettings.jsonbootstrap-cache.jsonauto-switch-pending.jsonauto-switch-snooze.jsonvoice-workspace.jsonvoice-runtime.jsonstate.jsonAGENTS.mdhistorya tuple of size 2a sequencea tuple of size 3",
    5u);
  dirs::home_dir::hc82e61f557956e66(&v51); /*0x1004d67d6*/
  v6 = v51; /*0x1004d67db*/
  if ( __OFSUB__(-v51, 1) ) /*0x1004d67e5*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1004d67ea*/
    v6 = 1; /*0x1004d67ef*/
    v7 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(1u, 1u); /*0x1004d67ff*/
    if ( !v7 ) /*0x1004d6807*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 1); /*0x1004d7124*/
    v8 = v7; /*0x1004d680d*/
    *v7 = 46; /*0x1004d6810*/
    v9 = 1; /*0x1004d6813*/
  }
  else
  {
    v8 = v52; /*0x1004d681a*/
    v9 = v53; /*0x1004d6821*/
  }
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1004d683f*/
    v80,
    v8,
    v9,
    "Library/LaunchAgents/dev.aimami.auto-switch.plistcodexmatecustom-instructionsrelayauth.jsonconfig.tomlsession_index.jsonlarchived_sessionsskillsregistry.jsonsnapshotsbackupsauto-switch.logquota-history.jsonlsettings.jsonbootstrap-cache.jsonauto-switch-pending.jsonauto-switch-snooze.jsonvoice-workspace.jsonvoice-runtime.jsonstate.jsonAGENTS.mdhistorya tuple of size 2a sequencea tuple of size 3",
    0x31u);
  if ( v6 ) /*0x1004d6847*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004d6854*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v54, v97, v3, byte_1012C5710, 8u); /*0x1004d6874*/
  v10 = __n; /*0x1004d6880*/
  __src = v55; /*0x1004d688e*/
  std::sys::fs::metadata::h32fa16d3052ea535(&v51, v55, __n); /*0x1004d6895*/
  v11 = v51; /*0x1004d689a*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h13fa4dfbca1c9605( /*0x1004d68ab*/
    v51,
    v52);
  if ( !v11 ) /*0x1004d68b3*/
  {
    std::sys::fs::metadata::h32fa16d3052ea535(&v51, v96, v5); /*0x1004d68c3*/
    v12 = v51; /*0x1004d68c8*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h13fa4dfbca1c9605( /*0x1004d68d9*/
      v51,
      v52);
    if ( v12 ) /*0x1004d68e1*/
    {
      v13 = std::sys::fs::rename::h7934e6142c921014(__src, v10, v96, v5); /*0x1004d68f1*/
      if ( ((unsigned __int8)v13 & 3) == 1 ) /*0x1004d68fe*/
      {
        v94 = (char *)v13 - 1; /*0x1004d70d4*/
        v50 = *(__int64 *)((char *)v13 + 7); /*0x1004d70dc*/
        if ( *(_QWORD *)v50 ) /*0x1004d70e0*/
          (*(void (__fastcall **)(_QWORD))v50)(*(_UNKNOWN **)((char *)v13 - 1)); /*0x1004d70eb*/
        if ( *(_QWORD *)(v50 + 8) ) /*0x1004d70ed*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004d70fd*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004d7110*/
      }
    }
  }
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1004d691f*/
    v79,
    v97,
    v3,
    "auth.jsonconfig.tomlsession_index.jsonlarchived_sessionsskillsregistry.jsonsnapshotsbackupsauto-switch.logquota-history.jsonlsettings.jsonbootstrap-cache.jsonauto-switch-pending.jsonauto-switch-snooze.jsonvoice-workspace.jsonvoice-runtime.jsonstate.jsonAGENTS.mdhistorya tuple of size 2a sequencea tuple of size 3",
    9u);
  v14 = v97; /*0x1004d6938*/
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1004d6942*/
    v78,
    v97,
    v3,
    "config.tomlsession_index.jsonlarchived_sessionsskillsregistry.jsonsnapshotsbackupsauto-switch.logquota-history.jsonlsettings.jsonbootstrap-cache.jsonauto-switch-pending.jsonauto-switch-snooze.jsonvoice-workspace.jsonvoice-runtime.jsonstate.jsonAGENTS.mdhistorya tuple of size 2a sequencea tuple of size 3",
    0xBu);
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1004d6961*/
    v77,
    v14,
    v3,
    "session_index.jsonlarchived_sessionsskillsregistry.jsonsnapshotsbackupsauto-switch.logquota-history.jsonlsettings.jsonbootstrap-cache.jsonauto-switch-pending.jsonauto-switch-snooze.jsonvoice-workspace.jsonvoice-runtime.jsonstate.jsonAGENTS.mdhistorya tuple of size 2a sequencea tuple of size 3",
    0x13u);
  codexmate_lib::platform::paths::CodexPaths::resolve_codex_state_db::h75b5e13ea96a0347(v76, v14, v3); /*0x1004d6973*/
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1004d6992*/
    v75,
    v14,
    v3,
    "sessionsprofilesbase_urlwire_apiUSERNAMEshortcutsegmentsoriginalROLLBACKnoneautohighUSER",
    8u);
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1004d69b1*/
    v74,
    v14,
    v3,
    "archived_sessionsskillsregistry.jsonsnapshotsbackupsauto-switch.logquota-history.jsonlsettings.jsonbootstrap-cache.jsonauto-switch-pending.jsonauto-switch-snooze.jsonvoice-workspace.jsonvoice-runtime.jsonstate.jsonAGENTS.mdhistorya tuple of size 2a sequencea tuple of size 3",
    0x11u);
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1004d69d0*/
    v73,
    v14,
    v3,
    "skillsregistry.jsonsnapshotsbackupsauto-switch.logquota-history.jsonlsettings.jsonbootstrap-cache.jsonauto-switch-pending.jsonauto-switch-snooze.jsonvoice-workspace.jsonvoice-runtime.jsonstate.jsonAGENTS.mdhistorya tuple of size 2a sequencea tuple of size 3",
    6u);
  v15 = v91; /*0x1004d69d5*/
  v16 = v92; /*0x1004d69d9*/
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1004d69f7*/
    v72,
    v91,
    v92,
    "registry.jsonsnapshotsbackupsauto-switch.logquota-history.jsonlsettings.jsonbootstrap-cache.jsonauto-switch-pending.jsonauto-switch-snooze.jsonvoice-workspace.jsonvoice-runtime.jsonstate.jsonAGENTS.mdhistorya tuple of size 2a sequencea tuple of size 3",
    0xDu);
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1004d6a16*/
    v71,
    v15,
    v16,
    "snapshotsbackupsauto-switch.logquota-history.jsonlsettings.jsonbootstrap-cache.jsonauto-switch-pending.jsonauto-switch-snooze.jsonvoice-workspace.jsonvoice-runtime.jsonstate.jsonAGENTS.mdhistorya tuple of size 2a sequencea tuple of size 3",
    9u);
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1004d6a35*/
    v70,
    v15,
    v16,
    "backupsauto-switch.logquota-history.jsonlsettings.jsonbootstrap-cache.jsonauto-switch-pending.jsonauto-switch-snooze.jsonvoice-workspace.jsonvoice-runtime.jsonstate.jsonAGENTS.mdhistorya tuple of size 2a sequencea tuple of size 3",
    7u);
  std::path::Path::_join::hb1a495d4f06b13b8(v69, v15, v16, byte_1012C56A0, 0x10u); /*0x1004d6a54*/
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1004d6a73*/
    v68,
    v15,
    v16,
    "auto-switch.logquota-history.jsonlsettings.jsonbootstrap-cache.jsonauto-switch-pending.jsonauto-switch-snooze.jsonvoice-workspace.jsonvoice-runtime.jsonstate.jsonAGENTS.mdhistorya tuple of size 2a sequencea tuple of size 3",
    0xFu);
  v17 = v96; /*0x1004d6a8c*/
  std::path::Path::_join::hb1a495d4f06b13b8(v67, v96, v5, "skill-backupsreplace", 0xDu); /*0x1004d6a96*/
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1004d6ab5*/
    v66,
    v17,
    v5,
    "quota-history.jsonlsettings.jsonbootstrap-cache.jsonauto-switch-pending.jsonauto-switch-snooze.jsonvoice-workspace.jsonvoice-runtime.jsonstate.jsonAGENTS.mdhistorya tuple of size 2a sequencea tuple of size 3",
    0x13u);
  std::path::Path::_join::hb1a495d4f06b13b8(v65, v17, v5, byte_1012C56B0, 0x10u); /*0x1004d6ad4*/
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1004d6af3*/
    v64,
    v17,
    v5,
    "settings.jsonbootstrap-cache.jsonauto-switch-pending.jsonauto-switch-snooze.jsonvoice-workspace.jsonvoice-runtime.jsonstate.jsonAGENTS.mdhistorya tuple of size 2a sequencea tuple of size 3",
    0xDu);
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1004d6b12*/
    v63,
    v17,
    v5,
    "bootstrap-cache.jsonauto-switch-pending.jsonauto-switch-snooze.jsonvoice-workspace.jsonvoice-runtime.jsonstate.jsonAGENTS.mdhistorya tuple of size 2a sequencea tuple of size 3",
    0x14u);
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1004d6b31*/
    v62,
    v17,
    v5,
    "auto-switch-pending.jsonauto-switch-snooze.jsonvoice-workspace.jsonvoice-runtime.jsonstate.jsonAGENTS.mdhistorya tuple of size 2a sequencea tuple of size 3",
    0x18u);
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1004d6b50*/
    v61,
    v17,
    v5,
    "auto-switch-snooze.jsonvoice-workspace.jsonvoice-runtime.jsonstate.jsonAGENTS.mdhistorya tuple of size 2a sequencea tuple of size 3",
    0x17u);
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1004d6b6f*/
    v60,
    v17,
    v5,
    "voice-workspace.jsonvoice-runtime.jsonstate.jsonAGENTS.mdhistorya tuple of size 2a sequencea tuple of size 3",
    0x14u);
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1004d6b8e*/
    v59,
    v17,
    v5,
    "voice-runtime.jsonstate.jsonAGENTS.mdhistorya tuple of size 2a sequencea tuple of size 3",
    0x12u);
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1004d6bb5*/
    v58,
    v85,
    v86,
    "state.jsonAGENTS.mdhistorya tuple of size 2a sequencea tuple of size 3",
    0xAu);
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1004d6bd5*/
    v57,
    v97,
    v3,
    "AGENTS.mdhistorya tuple of size 2a sequencea tuple of size 3",
    9u);
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x1004d6bf6*/
    (size_t *)&v51,
    v88,
    v89,
    "historya tuple of size 2a sequencea tuple of size 3",
    7u);
  a1[26] = v92; /*0x1004d6bff*/
  v18 = v90; /*0x1004d6c06*/
  a1[25] = v91; /*0x1004d6c0e*/
  a1[24] = v18; /*0x1004d6c15*/
  a1[44] = v83; /*0x1004d6c23*/
  v19 = v81; /*0x1004d6c2a*/
  a1[43] = v82; /*0x1004d6c38*/
  a1[42] = v19; /*0x1004d6c3f*/
  a1[86] = v89; /*0x1004d6c4a*/
  v20 = v87; /*0x1004d6c51*/
  a1[85] = v88; /*0x1004d6c59*/
  a1[84] = v20; /*0x1004d6c60*/
  v21 = v85; /*0x1004d6c6e*/
  a1[72] = v84; /*0x1004d6c75*/
  a1[73] = v21; /*0x1004d6c7c*/
  a1[74] = v86; /*0x1004d6c8a*/
  v22 = v80[0]; /*0x1004d6c91*/
  a1[79] = v80[1]; /*0x1004d6c9f*/
  a1[80] = v80[2]; /*0x1004d6cad*/
  a1[78] = v22; /*0x1004d6cb4*/
  v23 = v93; /*0x1004d6cbb*/
  v24 = v93[1]; /*0x1004d6cc2*/
  *a1 = *v93; /*0x1004d6cc6*/
  a1[1] = v24; /*0x1004d6cca*/
  a1[2] = v23[2]; /*0x1004d6cd2*/
  v25 = v79[1]; /*0x1004d6cdd*/
  a1[3] = v79[0]; /*0x1004d6ce4*/
  a1[4] = v25; /*0x1004d6ce8*/
  a1[5] = v79[2]; /*0x1004d6cf3*/
  v26 = v78[1]; /*0x1004d6cfe*/
  a1[6] = v78[0]; /*0x1004d6d05*/
  a1[8] = v78[2]; /*0x1004d6d10*/
  a1[7] = v26; /*0x1004d6d14*/
  a1[11] = v77[2]; /*0x1004d6d1f*/
  v27 = v77[0]; /*0x1004d6d23*/
  a1[10] = v77[1]; /*0x1004d6d31*/
  a1[9] = v27; /*0x1004d6d35*/
  v28 = v76[1]; /*0x1004d6d40*/
  a1[12] = v76[0]; /*0x1004d6d47*/
  a1[13] = v28; /*0x1004d6d4b*/
  a1[14] = v76[2]; /*0x1004d6d56*/
  v29 = v75[1]; /*0x1004d6d61*/
  a1[15] = v75[0]; /*0x1004d6d68*/
  a1[16] = v29; /*0x1004d6d6c*/
  a1[17] = v75[2]; /*0x1004d6d7a*/
  v30 = v74[1]; /*0x1004d6d88*/
  a1[18] = v74[0]; /*0x1004d6d8f*/
  a1[19] = v30; /*0x1004d6d96*/
  a1[20] = v74[2]; /*0x1004d6da4*/
  v31 = v73[1]; /*0x1004d6db2*/
  a1[21] = v73[0]; /*0x1004d6db9*/
  a1[22] = v31; /*0x1004d6dc0*/
  a1[23] = v73[2]; /*0x1004d6dce*/
  v32 = v72[1]; /*0x1004d6ddc*/
  a1[27] = v72[0]; /*0x1004d6de3*/
  a1[29] = v72[2]; /*0x1004d6df1*/
  a1[28] = v32; /*0x1004d6df8*/
  a1[32] = v71[2]; /*0x1004d6e06*/
  v33 = v71[0]; /*0x1004d6e0d*/
  a1[31] = v71[1]; /*0x1004d6e1b*/
  a1[30] = v33; /*0x1004d6e22*/
  v34 = v70[1]; /*0x1004d6e30*/
  a1[33] = v70[0]; /*0x1004d6e37*/
  a1[34] = v34; /*0x1004d6e3e*/
  a1[35] = v70[2]; /*0x1004d6e4c*/
  v35 = v69[1]; /*0x1004d6e5a*/
  a1[36] = v69[0]; /*0x1004d6e61*/
  a1[37] = v35; /*0x1004d6e68*/
  a1[38] = v69[2]; /*0x1004d6e76*/
  v36 = v68[1]; /*0x1004d6e84*/
  a1[39] = v68[0]; /*0x1004d6e8b*/
  a1[40] = v36; /*0x1004d6e92*/
  a1[41] = v68[2]; /*0x1004d6ea0*/
  v37 = v67[1]; /*0x1004d6eae*/
  a1[45] = v67[0]; /*0x1004d6eb5*/
  a1[46] = v37; /*0x1004d6ebc*/
  a1[47] = v67[2]; /*0x1004d6eca*/
  v38 = v66[1]; /*0x1004d6ed8*/
  a1[48] = v66[0]; /*0x1004d6edf*/
  a1[50] = v66[2]; /*0x1004d6eed*/
  a1[49] = v38; /*0x1004d6ef4*/
  a1[53] = v65[2]; /*0x1004d6f02*/
  v39 = v65[0]; /*0x1004d6f09*/
  a1[52] = v65[1]; /*0x1004d6f17*/
  a1[51] = v39; /*0x1004d6f1e*/
  v40 = v64[1]; /*0x1004d6f2c*/
  a1[54] = v64[0]; /*0x1004d6f33*/
  a1[55] = v40; /*0x1004d6f3a*/
  a1[56] = v64[2]; /*0x1004d6f48*/
  v41 = v63[1]; /*0x1004d6f56*/
  a1[57] = v63[0]; /*0x1004d6f5d*/
  a1[58] = v41; /*0x1004d6f64*/
  a1[59] = v63[2]; /*0x1004d6f72*/
  v42 = v62[1]; /*0x1004d6f80*/
  a1[60] = v62[0]; /*0x1004d6f87*/
  a1[61] = v42; /*0x1004d6f8e*/
  a1[62] = v62[2]; /*0x1004d6f9c*/
  v43 = v61[1]; /*0x1004d6faa*/
  a1[63] = v61[0]; /*0x1004d6fb1*/
  a1[64] = v43; /*0x1004d6fb8*/
  a1[65] = v61[2]; /*0x1004d6fc6*/
  v44 = v60[1]; /*0x1004d6fd4*/
  a1[66] = v60[0]; /*0x1004d6fdb*/
  a1[68] = v60[2]; /*0x1004d6fe9*/
  a1[67] = v44; /*0x1004d6ff0*/
  a1[71] = v59[2]; /*0x1004d6ffe*/
  v45 = v59[0]; /*0x1004d7005*/
  a1[70] = v59[1]; /*0x1004d7013*/
  a1[69] = v45; /*0x1004d701a*/
  v46 = v58[1]; /*0x1004d7028*/
  a1[75] = v58[0]; /*0x1004d702f*/
  a1[76] = v46; /*0x1004d7036*/
  a1[77] = v58[2]; /*0x1004d7044*/
  v47 = v57[1]; /*0x1004d7052*/
  a1[81] = v57[0]; /*0x1004d7059*/
  a1[82] = v47; /*0x1004d7060*/
  a1[83] = v57[2]; /*0x1004d706e*/
  v48 = v52; /*0x1004d707c*/
  a1[87] = v51; /*0x1004d7083*/
  a1[88] = v48; /*0x1004d708a*/
  a1[89] = v53; /*0x1004d7098*/
  if ( v54 ) /*0x1004d70a9*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x1004d70b4*/
  return a1; /*0x1004d70bc*/
}