// __ZN13codexmate_lib8platform6daemon14install_daemon @ 0x10035ba10 | 基线 same-set
_QWORD *__fastcall codexmate_lib::platform::daemon::install_daemon::h8900ce8616dff972(
        _QWORD *a1,
        void *a2,
        size_t a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  __int64 (__fastcall *v11)(_QWORD, _QWORD); // r15
  __int64 *v12; // rsi
  __int64 *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rax
  _QWORD *v17; // rcx
  __int64 v19; // r12
  __int64 v20; // r15
  __int64 v21; // r13
  __int64 v22; // rsi
  _QWORD *v23; // rdx
  __int64 *v24; // rax
  __int64 *v25; // rsi
  _QWORD *v26; // rdx
  __int64 v27; // rax
  __int64 v28; // r14
  __int64 **v29; // [rsp+0h] [rbp-250h] BYREF
  __int64 (__fastcall *v30)(); // [rsp+8h] [rbp-248h]
  __int64 **v31; // [rsp+10h] [rbp-240h]
  __int64 (__fastcall *v32)(); // [rsp+18h] [rbp-238h]
  __int64 **v33; // [rsp+20h] [rbp-230h]
  __int64 (__fastcall *v34)(); // [rsp+28h] [rbp-228h]
  _QWORD v35[3]; // [rsp+C8h] [rbp-188h] BYREF
  _QWORD v36[3]; // [rsp+E0h] [rbp-170h] BYREF
  __int64 *v37; // [rsp+F8h] [rbp-158h] BYREF
  __int64 (__fastcall *v38)(_QWORD, _QWORD); // [rsp+100h] [rbp-150h]
  __int64 v39; // [rsp+108h] [rbp-148h]
  __int64 v40; // [rsp+110h] [rbp-140h]
  __int64 v41; // [rsp+118h] [rbp-138h]
  __int64 v42; // [rsp+120h] [rbp-130h]
  __int64 v43; // [rsp+128h] [rbp-128h]
  __int64 *v44; // [rsp+130h] [rbp-120h] BYREF
  __int64 (__fastcall *v45)(_QWORD, _QWORD); // [rsp+138h] [rbp-118h]
  __int64 v46; // [rsp+140h] [rbp-110h]
  __int64 v47; // [rsp+148h] [rbp-108h]
  __int64 v48; // [rsp+150h] [rbp-100h]
  __int64 v49; // [rsp+158h] [rbp-F8h]
  __int64 v50; // [rsp+160h] [rbp-F0h]
  __int64 *v51; // [rsp+168h] [rbp-E8h] BYREF
  __int64 (__fastcall *v52)(_QWORD, _QWORD); // [rsp+170h] [rbp-E0h]
  __int64 v53; // [rsp+178h] [rbp-D8h]
  __int64 v54; // [rsp+180h] [rbp-D0h]
  __int64 v55; // [rsp+188h] [rbp-C8h]
  __int64 v56; // [rsp+190h] [rbp-C0h]
  __int64 v57; // [rsp+198h] [rbp-B8h]
  __int64 *v58; // [rsp+1A0h] [rbp-B0h] BYREF
  __int64 (__fastcall *v59)(_QWORD, _QWORD); // [rsp+1A8h] [rbp-A8h]
  __int64 v60; // [rsp+1B0h] [rbp-A0h]
  __int64 v61; // [rsp+1B8h] [rbp-98h]
  __int64 v62; // [rsp+1C0h] [rbp-90h]
  __int64 v63; // [rsp+1C8h] [rbp-88h]
  __int64 v64; // [rsp+1D0h] [rbp-80h]
  __int64 v65; // [rsp+1D8h] [rbp-78h] BYREF
  __int64 *v66; // [rsp+1E0h] [rbp-70h] BYREF
  __int64 (__fastcall *v67)(_QWORD, _QWORD); // [rsp+1E8h] [rbp-68h]
  __int64 v68; // [rsp+1F0h] [rbp-60h]
  __int64 v69; // [rsp+1F8h] [rbp-58h]
  __int64 v70; // [rsp+200h] [rbp-50h]
  __int64 v71; // [rsp+208h] [rbp-48h]
  __int64 v72; // [rsp+210h] [rbp-40h]
  _QWORD *v73; // [rsp+218h] [rbp-38h]
  __int64 (__fastcall *v74)(_QWORD, _QWORD); // [rsp+220h] [rbp-30h]

  v73 = a1; /*0x10035ba30*/
  if ( codexmate_lib::platform::daemon::LEGACY_DAEMON_CLEANUP::hb5dd0337acd6abee ) /*0x10035ba3e*/
  {
    LOBYTE(v58) = 1; /*0x10035c005*/
    v29 = &v58; /*0x10035c013*/
    v28 = a4; /*0x10035c038*/
    std::sys::sync::once::queue::Once::call::hc4dcd8d1b4abed3c( /*0x10035c03e*/
      &codexmate_lib::platform::daemon::LEGACY_DAEMON_CLEANUP::hb5dd0337acd6abee,
      0,
      &v29,
      &anon_b0ee9adff4519c22b647af231a5a39fa_1595,
      &anon_b0ee9adff4519c22b647af231a5a39fa_1175);
    a4 = v28; /*0x10035c043*/
  }
  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v44, a4, a5); /*0x10035ba51*/
  v74 = v45; /*0x10035ba6b*/
  codexmate_lib::platform::daemon::escape_xml_text::h1c8676b8f15d692e(&v66, v45, v46); /*0x10035ba6f*/
  alloc::string::String::from_utf8_lossy::he2f4710de0078f8b(&v58, a6, a7); /*0x10035ba82*/
  v11 = v59; /*0x10035ba87*/
  codexmate_lib::platform::daemon::escape_xml_text::h1c8676b8f15d692e(&v37, v59, v60); /*0x10035baa2*/
  v29 = (__int64 **)&off_1019617C0; /*0x10035baae*/
  v30 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10035babc*/
  v31 = &v66; /*0x10035bac3*/
  v32 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10035bad1*/
  v33 = &v37; /*0x10035bad8*/
  v34 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10035badf*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v51, &unk_1015F7876, &v29); /*0x10035bafb*/
  if ( v37 ) /*0x10035bb0a*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, v37, 1); /*0x10035bb18*/
  if ( !(2LL * (_QWORD)v58) ) /*0x10035bb24*/
  {
    v12 = v66; /*0x10035bb35*/
    if ( !v66 ) /*0x10035bb3c*/
      goto LABEL_8; /*0x10035bb3c*/
    goto LABEL_7; /*0x10035bb3c*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v58, 1); /*0x10035bc1b*/
  v12 = v66; /*0x10035bc20*/
  if ( v66 ) /*0x10035bc27*/
LABEL_7:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67, v12, 1); /*0x10035bb3e*/
LABEL_8:
  if ( 2LL * (_QWORD)v44 ) /*0x10035bb53*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74, v44, 1); /*0x10035bb69*/
  v13 = v51; /*0x10035bb6e*/
  v74 = v52; /*0x10035bb7c*/
  v14 = std::path::Path::parent::h4c3ac26770731fbb(a2, a3); /*0x10035bb8d*/
  if ( v14 /*0x10035bbd6*/
    && (LOWORD(v29) = 511, BYTE2(v29) = 1, (v16 = std::fs::DirBuilder::_create::h099c6e2853c95452(&v29, v14, v15)) != 0)
    || (v16 = codexmate_lib::core::relay::atomic_write::write_atomic_with_mode::h823bd25003ef3ca9(a2, a3)) != 0 )
  {
    v17 = v73; /*0x10035bbd8*/
    *v73 = 2; /*0x10035bbdc*/
    v17[1] = v16; /*0x10035bbe3*/
    goto LABEL_14; /*0x10035bbe3*/
  }
  std::sys::process::unix::common::Command::new::h3bc62b213fd56379( /*0x10035bc45*/
    &v29,
    "launchctl-w&amp;&quot;&apos;unloadLibraryLaunchAgentsdev.aionsale.auto-switch.plistdev.aionsale.auto-switchxattr-pco"
    "m.apple.quarantine",
    9);
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v29, &unk_1015E3B50, 4); /*0x10035bc5d*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0( /*0x10035bc75*/
    &v29,
    "-w&amp;&quot;&apos;unloadLibraryLaunchAgentsdev.aionsale.auto-switch.plistdev.aionsale.auto-switchxattr-pcom.apple.quarantine",
    2);
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v29, a2, a3); /*0x10035bc87*/
  std::process::Command::output::h737eedd4de2ee22e(&v37, &v29); /*0x10035bc9a*/
  if ( __OFSUB__(0, v37) ) /*0x10035bca1*/
  {
    v65 = (__int64)v38; /*0x10035bcb5*/
    v58 = &v65; /*0x10035bcbd*/
    v59 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10035bccb*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v35, &unk_1017BCC6C, &v58); /*0x10035bce7*/
    v58 = (__int64 *)v35[0]; /*0x10035bcfa*/
    v59 = (__int64 (__fastcall *)(_QWORD, _QWORD))v35[1]; /*0x10035bd01*/
    v60 = v35[2]; /*0x10035bd0f*/
    if ( (v65 & 3) == 1 ) /*0x10035bd22*/
    {
      v19 = v65 - 1; /*0x10035bd24*/
      v20 = *(_QWORD *)(v65 - 1); /*0x10035bd28*/
      v21 = *(_QWORD *)(v65 + 7); /*0x10035bd2c*/
      if ( *(_QWORD *)v21 ) /*0x10035bd30*/
        (*(void (__fastcall **)(__int64))v21)(v20); /*0x10035bd3c*/
      v22 = *(_QWORD *)(v21 + 8); /*0x10035bd3e*/
      if ( v22 ) /*0x10035bd45*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v22, *(_QWORD *)(v21 + 16)); /*0x10035bd4e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, 24, 8); /*0x10035bd60*/
    }
    v44 = v58; /*0x10035bd73*/
    v45 = v59; /*0x10035bd7a*/
    v46 = v60; /*0x10035bd88*/
    v47 = v61; /*0x10035bd96*/
    v48 = v62; /*0x10035bda4*/
    v49 = v63; /*0x10035bdb2*/
    v50 = v64; /*0x10035bdbd*/
    v72 = v64; /*0x10035bdc4*/
    v71 = v63; /*0x10035bdc8*/
    v70 = v62; /*0x10035bdcc*/
    v69 = v61; /*0x10035bdd0*/
    v68 = v60; /*0x10035bdd4*/
    v67 = v59; /*0x10035bdd8*/
    v66 = v58; /*0x10035bddc*/
    v23 = v73; /*0x10035bde4*/
    v73[7] = v64; /*0x10035bde8*/
    v23[6] = v71; /*0x10035bdf0*/
    v23[5] = v70; /*0x10035bdf8*/
    v23[4] = v69; /*0x10035be00*/
    v23[3] = v68; /*0x10035be08*/
    v24 = v66; /*0x10035be0c*/
    v23[2] = v67; /*0x10035be14*/
    v23[1] = v24; /*0x10035be18*/
    *v23 = 10; /*0x10035be1c*/
    core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(&v29); /*0x10035be2a*/
    goto LABEL_14; /*0x10035be2f*/
  }
  v50 = v43; /*0x10035be3b*/
  v49 = v42; /*0x10035be49*/
  v48 = v41; /*0x10035be57*/
  v47 = v40; /*0x10035be65*/
  v66 = v37; /*0x10035be81*/
  v67 = v38; /*0x10035be85*/
  v68 = v39; /*0x10035be89*/
  v69 = v40; /*0x10035be8d*/
  v70 = v41; /*0x10035be91*/
  v71 = v42; /*0x10035be95*/
  v72 = v43; /*0x10035be99*/
  v57 = v43; /*0x10035bea1*/
  v56 = v42; /*0x10035beac*/
  v55 = v41; /*0x10035beb7*/
  v54 = v40; /*0x10035bec2*/
  v53 = v39; /*0x10035becd*/
  v52 = v38; /*0x10035bedc*/
  v51 = v37; /*0x10035bee3*/
  core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(&v29); /*0x10035bef1*/
  if ( (unsigned __int8)codexmate_lib::platform::daemon::launchctl_label_exists::hb0f32bbc46c066ee() ) /*0x10035bef6*/
  {
    *v73 = 11; /*0x10035bf03*/
    v25 = v51; /*0x10035bf0a*/
    if ( !v51 ) /*0x10035bf14*/
      goto LABEL_30; /*0x10035bf14*/
  }
  else
  {
    codexmate_lib::platform::daemon::command_error_text::h9089ab49c3bd0de3(&v58, &v51); /*0x10035bf5e*/
    v29 = (__int64 **)&off_1019617C0; /*0x10035bf6a*/
    v30 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10035bf78*/
    v31 = &v58; /*0x10035bf7f*/
    v32 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10035bf86*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v36, &unk_1017BCC46, &v29); /*0x10035bfa2*/
    if ( v58 ) /*0x10035bfb1*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v59, v58, 1); /*0x10035bfbf*/
    v26 = v73; /*0x10035bfcb*/
    v73[3] = v36[2]; /*0x10035bfcf*/
    v27 = v36[0]; /*0x10035bfd3*/
    v26[2] = v36[1]; /*0x10035bfe1*/
    v26[1] = v27; /*0x10035bfe5*/
    *v26 = 10; /*0x10035bfe9*/
    v25 = v51; /*0x10035bff0*/
    if ( !v51 ) /*0x10035bffa*/
      goto LABEL_30; /*0x10035bffa*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v25, 1); /*0x10035bf22*/
LABEL_30:
  if ( v54 ) /*0x10035bf31*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v55, v54, 1); /*0x10035bf43*/
LABEL_14:
  if ( v13 ) /*0x10035bbea*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v74, v13, 1); /*0x10035bbf8*/
  return v73; /*0x10035bc01*/
}