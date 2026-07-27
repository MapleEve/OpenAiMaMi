// __ZN13codexmate_lib8platform6daemon16uninstall_daemon @ 0x10035c340 | 基线 same-set
_QWORD *__fastcall codexmate_lib::platform::daemon::uninstall_daemon::h418875776827d0e2(
        _QWORD *a1,
        void *a2,
        size_t a3)
{
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // r12
  void (__fastcall *v9)(__int64); // rax
  __int64 v10; // rsi
  __int64 (__fastcall **v11)(); // rax
  __int64 v12; // r14
  __int64 v13; // r15
  __int64 v14; // r12
  __int64 v15; // rsi
  __int64 (__fastcall **v16)(); // rax
  __int64 (__fastcall **v17)(); // rsi
  __int64 v18; // rsi
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // r12
  __int64 v23; // rsi
  __int64 v24; // rsi
  __int64 v25; // rdi
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // r15
  __int64 v29; // r12
  __int64 v30; // r14
  __int64 v31; // r15
  __int64 v32; // rsi
  _QWORD v34[3]; // [rsp+8h] [rbp-298h] BYREF
  _QWORD v35[3]; // [rsp+20h] [rbp-280h] BYREF
  __int64 (__fastcall ***v36)(); // [rsp+38h] [rbp-268h] BYREF
  __int64 (__fastcall *v37)(); // [rsp+40h] [rbp-260h]
  __int64 (__fastcall ***v38)(); // [rsp+48h] [rbp-258h]
  __int64 (__fastcall *v39)(); // [rsp+50h] [rbp-250h]
  __int64 (__fastcall **v40)(); // [rsp+100h] [rbp-1A0h] BYREF
  __int64 (__fastcall *v41)(); // [rsp+108h] [rbp-198h]
  __int64 v42; // [rsp+110h] [rbp-190h]
  __int64 v43; // [rsp+118h] [rbp-188h]
  __int64 v44; // [rsp+120h] [rbp-180h]
  __int64 v45; // [rsp+128h] [rbp-178h]
  __int64 v46; // [rsp+130h] [rbp-170h]
  _QWORD v47[3]; // [rsp+138h] [rbp-168h] BYREF
  __int64 (__fastcall *v48)(); // [rsp+150h] [rbp-150h] BYREF
  char *v49; // [rsp+158h] [rbp-148h]
  __int64 (__fastcall **v50)(); // [rsp+160h] [rbp-140h]
  __int64 (__fastcall *v51)(); // [rsp+168h] [rbp-138h]
  __int64 v52; // [rsp+170h] [rbp-130h]
  __int64 v53; // [rsp+178h] [rbp-128h]
  __int64 v54; // [rsp+180h] [rbp-120h]
  __int64 v55; // [rsp+188h] [rbp-118h]
  __int64 v56; // [rsp+190h] [rbp-110h]
  __int64 (__fastcall **v57)(); // [rsp+198h] [rbp-108h] BYREF
  __int64 (__fastcall *v58)(); // [rsp+1A0h] [rbp-100h]
  __int64 v59; // [rsp+1A8h] [rbp-F8h]
  __int64 v60; // [rsp+1B0h] [rbp-F0h]
  __int64 v61; // [rsp+1B8h] [rbp-E8h]
  __int64 v62; // [rsp+1C0h] [rbp-E0h]
  __int64 v63; // [rsp+1C8h] [rbp-D8h]
  __int64 (__fastcall **v64)(); // [rsp+1D0h] [rbp-D0h] BYREF
  __int64 (__fastcall *v65)(); // [rsp+1D8h] [rbp-C8h]
  __int64 v66; // [rsp+1E0h] [rbp-C0h]
  __int64 v67; // [rsp+1E8h] [rbp-B8h]
  __int64 v68; // [rsp+1F0h] [rbp-B0h]
  __int64 v69; // [rsp+1F8h] [rbp-A8h]
  __int64 v70; // [rsp+200h] [rbp-A0h]
  __int64 (__fastcall **v71)(); // [rsp+208h] [rbp-98h] BYREF
  __int64 (__fastcall *v72)(); // [rsp+210h] [rbp-90h]
  __int64 v73; // [rsp+218h] [rbp-88h]
  __int64 v74; // [rsp+220h] [rbp-80h]
  __int64 v75; // [rsp+228h] [rbp-78h]
  __int64 v76; // [rsp+230h] [rbp-70h]
  __int64 v77; // [rsp+238h] [rbp-68h]
  __int64 (__fastcall **v78)(); // [rsp+240h] [rbp-60h]
  __int64 (__fastcall *v79)(); // [rsp+248h] [rbp-58h]
  __int64 v80; // [rsp+250h] [rbp-50h]
  __int64 v81; // [rsp+258h] [rbp-48h]
  __int64 v82; // [rsp+260h] [rbp-40h]
  __int64 v83; // [rsp+268h] [rbp-38h]
  __int64 v84; // [rsp+270h] [rbp-30h]

  if ( codexmate_lib::platform::daemon::LEGACY_DAEMON_CLEANUP::hb5dd0337acd6abee ) /*0x10035c367*/
  {
    LOBYTE(v71) = 1; /*0x10035cf10*/
    v36 = &v71; /*0x10035cf1e*/
    std::sys::sync::once::queue::Once::call::hc4dcd8d1b4abed3c( /*0x10035cf43*/
      &codexmate_lib::platform::daemon::LEGACY_DAEMON_CLEANUP::hb5dd0337acd6abee,
      0,
      &v36,
      &anon_b0ee9adff4519c22b647af231a5a39fa_1595,
      &anon_b0ee9adff4519c22b647af231a5a39fa_1175);
  }
  std::sys::fs::metadata::h32fa16d3052ea535(&v36, a2, a3); /*0x10035c37a*/
  if ( (_DWORD)v36 != 1 ) /*0x10035c386*/
  {
    std::sys::process::unix::common::Command::new::h3bc62b213fd56379( /*0x10035c4d3*/
      &v36,
      "launchctl-w&amp;&quot;&apos;unloadLibraryLaunchAgentsdev.aionsale.auto-switch.plistdev.aionsale.auto-switchxattr-p"
      "com.apple.quarantine",
      9);
    std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0( /*0x10035c4e7*/
      &v36,
      "unloadLibraryLaunchAgentsdev.aionsale.auto-switch.plistdev.aionsale.auto-switchxattr-pcom.apple.quarantine",
      6);
    std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0( /*0x10035c4ff*/
      &v36,
      "-w&amp;&quot;&apos;unloadLibraryLaunchAgentsdev.aionsale.auto-switch.plistdev.aionsale.auto-switchxattr-pcom.apple.quarantine",
      2);
    std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v36, a2, a3); /*0x10035c511*/
    std::process::Command::output::h737eedd4de2ee22e(&v57, &v36); /*0x10035c524*/
    if ( __OFSUB__(0, v57) ) /*0x10035c52b*/
    {
      v47[0] = v58; /*0x10035c53f*/
      v71 = (__int64 (__fastcall **)())v47; /*0x10035c54d*/
      v72 = (__int64 (__fastcall *)())_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10035c55b*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v64, &unk_1017BCD07, &v71); /*0x10035c577*/
      v71 = v64; /*0x10035c58a*/
      v72 = v65; /*0x10035c591*/
      v73 = v66; /*0x10035c59f*/
      if ( (v47[0] & 3) == 1 ) /*0x10035c5b5*/
      {
        v6 = v47[0] - 1LL; /*0x10035c5b7*/
        v7 = *(_QWORD *)(v47[0] - 1LL); /*0x10035c5bb*/
        v8 = *(_QWORD *)(v47[0] + 7LL); /*0x10035c5bf*/
        v9 = *(void (__fastcall **)(_QWORD))v8; /*0x10035c5c3*/
        if ( *(_QWORD *)v8 ) /*0x10035c5c3*/
LABEL_13:
          v9(v7); /*0x10035c5cc*/
LABEL_14:
        v10 = *(_QWORD *)(v8 + 8); /*0x10035c5d1*/
        if ( v10 ) /*0x10035c5d9*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v10, *(_QWORD *)(v8 + 16)); /*0x10035c5e3*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, 24, 8); /*0x10035c5f5*/
      }
LABEL_17:
      v50 = v71; /*0x10035c5fa*/
      v51 = v72; /*0x10035c60f*/
      v52 = v73; /*0x10035c61d*/
      v53 = v74; /*0x10035c628*/
      v54 = v75; /*0x10035c633*/
      v55 = v76; /*0x10035c63e*/
      v56 = v77; /*0x10035c649*/
      v84 = v77; /*0x10035c650*/
      v83 = v76; /*0x10035c654*/
      v82 = v75; /*0x10035c658*/
      v81 = v74; /*0x10035c65c*/
      v80 = v73; /*0x10035c660*/
      v79 = v72; /*0x10035c664*/
      v78 = v71; /*0x10035c668*/
      a1[7] = v77; /*0x10035c670*/
      a1[6] = v83; /*0x10035c678*/
      a1[5] = v82; /*0x10035c680*/
      a1[4] = v81; /*0x10035c688*/
      a1[3] = v80; /*0x10035c690*/
      v11 = v78; /*0x10035c694*/
      a1[2] = v79; /*0x10035c69c*/
      a1[1] = v11; /*0x10035c6a0*/
      *a1 = 10; /*0x10035c6a4*/
      core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(&v36); /*0x10035c6b2*/
      return a1; /*0x10035c6b7*/
    }
    v56 = v63; /*0x10035c6c3*/
    v55 = v62; /*0x10035c6d1*/
    v54 = v61; /*0x10035c6df*/
    v53 = v60; /*0x10035c6ed*/
    v78 = v57; /*0x10035c709*/
    v79 = v58; /*0x10035c70d*/
    v80 = v59; /*0x10035c711*/
    v81 = v60; /*0x10035c715*/
    v82 = v61; /*0x10035c719*/
    v83 = v62; /*0x10035c71d*/
    v84 = v63; /*0x10035c721*/
    v46 = v63; /*0x10035c729*/
    v45 = v62; /*0x10035c734*/
    v44 = v61; /*0x10035c73f*/
    v43 = v60; /*0x10035c74a*/
    v42 = v59; /*0x10035c755*/
    v41 = v58; /*0x10035c764*/
    v40 = v57; /*0x10035c76b*/
    core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(&v36); /*0x10035c779*/
    if ( (unsigned __int8)codexmate_lib::platform::daemon::launchctl_label_exists::hb0f32bbc46c066ee() ) /*0x10035c77e*/
    {
      std::sys::process::unix::common::Command::new::h3bc62b213fd56379( /*0x10035c79e*/
        &v36,
        "launchctl-w&amp;&quot;&apos;unloadLibraryLaunchAgentsdev.aionsale.auto-switch.plistdev.aionsale.auto-switchxattr"
        "-pcom.apple.quarantine",
        9);
      std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v36, "removemetadata.json", 6); /*0x10035c7b6*/
      std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v36, &unk_1015F7860, 22); /*0x10035c7ce*/
      std::process::Command::output::h737eedd4de2ee22e(&v57, &v36); /*0x10035c7e1*/
      if ( v57 == (__int64 (__fastcall **)())0x8000000000000000LL ) /*0x10035c7f7*/
      {
        v48 = v58; /*0x10035c804*/
        v71 = &v48; /*0x10035c812*/
        v72 = (__int64 (__fastcall *)())_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10035c820*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v47, &unk_1017BCC86, &v71); /*0x10035c83c*/
        v71 = (__int64 (__fastcall **)())v47[0]; /*0x10035c84f*/
        v72 = (__int64 (__fastcall *)())v47[1]; /*0x10035c856*/
        v73 = v47[2]; /*0x10035c864*/
        if ( ((unsigned __int8)v48 & 3) == 1 ) /*0x10035c87a*/
        {
          v12 = (__int64)v48 - 1; /*0x10035c87c*/
          v13 = *(_QWORD *)((char *)v48 - 1); /*0x10035c880*/
          v14 = *(_QWORD *)((char *)v48 + 7); /*0x10035c884*/
          if ( *(_QWORD *)v14 ) /*0x10035c888*/
            (*(void (__fastcall **)(__int64))v14)(v13); /*0x10035c894*/
          v15 = *(_QWORD *)(v14 + 8); /*0x10035c896*/
          if ( v15 ) /*0x10035c89e*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v13, v15, *(_QWORD *)(v14 + 16)); /*0x10035c8a8*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, 24, 8); /*0x10035c8ba*/
        }
        v50 = v71; /*0x10035c8cd*/
        v51 = v72; /*0x10035c8d4*/
        v52 = v73; /*0x10035c8e2*/
        v53 = v74; /*0x10035c8ed*/
        v54 = v75; /*0x10035c8f8*/
        v55 = v76; /*0x10035c903*/
        v56 = v77; /*0x10035c90e*/
        v84 = v77; /*0x10035c915*/
        v83 = v76; /*0x10035c919*/
        v82 = v75; /*0x10035c91d*/
        v81 = v74; /*0x10035c921*/
        v80 = v73; /*0x10035c925*/
        v79 = v72; /*0x10035c929*/
        v78 = v71; /*0x10035c92d*/
        a1[7] = v77; /*0x10035c935*/
        a1[6] = v83; /*0x10035c93d*/
        a1[5] = v82; /*0x10035c945*/
        a1[4] = v81; /*0x10035c94d*/
        a1[3] = v80; /*0x10035c955*/
        v16 = v78; /*0x10035c959*/
        a1[2] = v79; /*0x10035c961*/
        a1[1] = v16; /*0x10035c965*/
        *a1 = 10; /*0x10035c969*/
        core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(&v36); /*0x10035c977*/
        v17 = v40; /*0x10035c97c*/
        if ( !v40 ) /*0x10035c986*/
          goto LABEL_28; /*0x10035c986*/
        goto LABEL_27; /*0x10035c986*/
      }
      v56 = v63; /*0x10035cbfe*/
      v55 = v62; /*0x10035cc0c*/
      v54 = v61; /*0x10035cc1a*/
      v53 = v60; /*0x10035cc28*/
      v78 = v57; /*0x10035cc44*/
      v79 = v58; /*0x10035cc48*/
      v80 = v59; /*0x10035cc4c*/
      v81 = v60; /*0x10035cc50*/
      v82 = v61; /*0x10035cc54*/
      v83 = v62; /*0x10035cc58*/
      v84 = v63; /*0x10035cc5c*/
      v70 = v63; /*0x10035cc64*/
      v69 = v62; /*0x10035cc6f*/
      v68 = v61; /*0x10035cc7a*/
      v67 = v60; /*0x10035cc85*/
      v66 = v59; /*0x10035cc90*/
      v65 = v58; /*0x10035cc9f*/
      v64 = v57; /*0x10035cca6*/
      core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(&v36); /*0x10035ccb4*/
      if ( (_DWORD)v70 && (unsigned __int8)codexmate_lib::platform::daemon::launchctl_label_exists::hb0f32bbc46c066ee() ) /*0x10035ccc6*/
      {
        codexmate_lib::platform::daemon::command_error_text::h9089ab49c3bd0de3(&v57, &v40); /*0x10035cce4*/
        codexmate_lib::platform::daemon::command_error_text::h9089ab49c3bd0de3(&v71, &v64); /*0x10035ccfa*/
        v36 = &v57; /*0x10035ccff*/
        v37 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10035cd0d*/
        v38 = &v71; /*0x10035cd14*/
        v39 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10035cd1b*/
        alloc::fmt::format::format_inner::h3c16c74008a310d4(v35, &unk_1017BCCCE, &v36); /*0x10035cd37*/
        if ( v71 ) /*0x10035cd46*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v72, v71, 1); /*0x10035cd54*/
        if ( v57 ) /*0x10035cd63*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v58, v57, 1); /*0x10035cd71*/
        a1[3] = v35[2]; /*0x10035cd7d*/
        v26 = v35[0]; /*0x10035cd81*/
        a1[2] = v35[1]; /*0x10035cd8f*/
        a1[1] = v26; /*0x10035cd93*/
        *a1 = 10; /*0x10035cd97*/
        core::ptr::drop_in_place$LT$std..process..Output$GT$::hfd0096d3b70b62ff(&v64); /*0x10035cda5*/
        v17 = v40; /*0x10035cdaa*/
        if ( !v40 ) /*0x10035cdb4*/
          goto LABEL_28; /*0x10035cdb4*/
LABEL_27:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, v17, 1); /*0x10035c988*/
LABEL_28:
        v18 = v43; /*0x10035c999*/
        if ( !v43 ) /*0x10035c9a3*/
          return a1; /*0x10035c9a3*/
        v19 = v44; /*0x10035c9a9*/
LABEL_38:
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v18, 1); /*0x10035cb4f*/
        return a1; /*0x10035cb59*/
      }
      if ( v64 ) /*0x10035cdc9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v65, v64, 1); /*0x10035cdd7*/
      if ( v67 ) /*0x10035cde6*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v68, v67, 1); /*0x10035cdf4*/
    }
    if ( v40 ) /*0x10035ce03*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, v40, 1); /*0x10035ce11*/
    v24 = v43; /*0x10035ce16*/
    if ( !v43 ) /*0x10035ce20*/
      goto LABEL_66; /*0x10035ce20*/
    v25 = v44; /*0x10035ce22*/
LABEL_65:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, v24, 1); /*0x10035ce29*/
    goto LABEL_66; /*0x10035ce2e*/
  }
  if ( ((unsigned __int8)v37 & 3) == 1 ) /*0x10035c39b*/
  {
    v49 = (char *)v37 - 1; /*0x10035cb62*/
    v21 = *(_QWORD *)((char *)v37 - 1); /*0x10035cb69*/
    v22 = *(_QWORD *)((char *)v37 + 7); /*0x10035cb6d*/
    if ( *(_QWORD *)v22 ) /*0x10035cb71*/
      (*(void (__fastcall **)(__int64))v22)(v21); /*0x10035cb7d*/
    v23 = *(_QWORD *)(v22 + 8); /*0x10035cb7f*/
    if ( v23 ) /*0x10035cb87*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v23, *(_QWORD *)(v22 + 16)); /*0x10035cb91*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, 24, 8); /*0x10035cba7*/
    if ( !(unsigned __int8)codexmate_lib::platform::daemon::launchctl_label_exists::hb0f32bbc46c066ee() ) /*0x10035cbac*/
      goto LABEL_66; /*0x10035cbb3*/
  }
  else if ( !(unsigned __int8)codexmate_lib::platform::daemon::launchctl_label_exists::hb0f32bbc46c066ee() ) /*0x10035c3a8*/
  {
LABEL_66:
    if ( !(unsigned __int8)codexmate_lib::platform::daemon::launchctl_label_exists::hb0f32bbc46c066ee() ) /*0x10035ce3a*/
    {
      v27 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(a2, a3); /*0x10035ce81*/
      if ( v27 ) /*0x10035ce89*/
      {
        v28 = v27; /*0x10035ce8b*/
        if ( (unsigned __int8)std::io::error::Error::kind::hbe3dd139aa56fd1b(v27) ) /*0x10035ce91*/
        {
          *a1 = 2; /*0x10035ce9a*/
          a1[1] = v28; /*0x10035cea1*/
          return a1; /*0x10035cea5*/
        }
        if ( (v28 & 3) == 1 ) /*0x10035ceb0*/
        {
          v29 = v28 - 1; /*0x10035ceb5*/
          v30 = *(_QWORD *)(v28 - 1); /*0x10035ceb8*/
          v31 = *(_QWORD *)(v28 + 7); /*0x10035cebc*/
          if ( *(_QWORD *)v31 ) /*0x10035cec0*/
            (*(void (__fastcall **)(__int64))v31)(v30); /*0x10035cecb*/
          v32 = *(_QWORD *)(v31 + 8); /*0x10035cecd*/
          if ( v32 ) /*0x10035ced4*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v32, *(_QWORD *)(v31 + 16)); /*0x10035cedd*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v29, 24, 8); /*0x10035ceef*/
        }
      }
      *a1 = 11; /*0x10035cef4*/
      return a1; /*0x10035cef4*/
    }
    v36 = (__int64 (__fastcall ***)())&off_1019617C0; /*0x10035ce43*/
    v37 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10035ce51*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(a1 + 1, &unk_1017BCCA2, &v36); /*0x10035ce6a*/
    *a1 = 10; /*0x10035ce6f*/
    return a1; /*0x10035ce76*/
  }
  std::sys::process::unix::common::Command::new::h3bc62b213fd56379( /*0x10035c3c4*/
    &v36,
    "launchctl-w&amp;&quot;&apos;unloadLibraryLaunchAgentsdev.aionsale.auto-switch.plistdev.aionsale.auto-switchxattr-pco"
    "m.apple.quarantine",
    9);
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v36, "removemetadata.json", 6); /*0x10035c3d8*/
  std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v36, &unk_1015F7860, 22); /*0x10035c3f0*/
  std::process::Command::output::h737eedd4de2ee22e(&v57, &v36); /*0x10035c403*/
  if ( __OFSUB__(0, v57) ) /*0x10035c40a*/
  {
    v47[0] = v58; /*0x10035c41e*/
    v71 = (__int64 (__fastcall **)())v47; /*0x10035c42c*/
    v72 = (__int64 (__fastcall *)())_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10035c43a*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v40, &unk_1017BCC86, &v71); /*0x10035c456*/
    v71 = v40; /*0x10035c469*/
    v72 = v41; /*0x10035c470*/
    v73 = v42; /*0x10035c47e*/
    if ( (v47[0] & 3) == 1 ) /*0x10035c494*/
    {
      v6 = v47[0] - 1LL; /*0x10035c49a*/
      v7 = *(_QWORD *)(v47[0] - 1LL); /*0x10035c49e*/
      v8 = *(_QWORD *)(v47[0] + 7LL); /*0x10035c4a2*/
      v9 = *(void (__fastcall **)(_QWORD))v8; /*0x10035c4a6*/
      if ( *(_QWORD *)v8 ) /*0x10035c4a6*/
        goto LABEL_13; /*0x10035c4ad*/
      goto LABEL_14; /*0x10035c4ad*/
    }
    goto LABEL_17; /*0x10035c494*/
  }
  v56 = v63; /*0x10035c9bc*/
  v55 = v62; /*0x10035c9ca*/
  v54 = v61; /*0x10035c9d8*/
  v53 = v60; /*0x10035c9e6*/
  v78 = v57; /*0x10035ca02*/
  v79 = v58; /*0x10035ca06*/
  v80 = v59; /*0x10035ca0a*/
  v81 = v60; /*0x10035ca0e*/
  v82 = v61; /*0x10035ca12*/
  v83 = v62; /*0x10035ca16*/
  v84 = v63; /*0x10035ca1a*/
  v70 = v63; /*0x10035ca22*/
  v69 = v62; /*0x10035ca2d*/
  v68 = v61; /*0x10035ca38*/
  v67 = v60; /*0x10035ca43*/
  v66 = v59; /*0x10035ca4e*/
  v65 = v58; /*0x10035ca5d*/
  v64 = v57; /*0x10035ca64*/
  core::ptr::drop_in_place$LT$std..process..Command$GT$::hde101a505a66932d(&v36); /*0x10035ca72*/
  if ( !(_DWORD)v70 || !(unsigned __int8)codexmate_lib::platform::daemon::launchctl_label_exists::hb0f32bbc46c066ee() ) /*0x10035ca84*/
  {
    if ( v64 ) /*0x10035cbc8*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v65, v64, 1); /*0x10035cbd6*/
    v24 = v67; /*0x10035cbdb*/
    if ( !v67 ) /*0x10035cbe5*/
      goto LABEL_66; /*0x10035cbe5*/
    v25 = v68; /*0x10035cbeb*/
    goto LABEL_65; /*0x10035cbf2*/
  }
  codexmate_lib::platform::daemon::command_error_text::h9089ab49c3bd0de3(&v36, &v64); /*0x10035caa2*/
  v71 = (__int64 (__fastcall **)())&v36; /*0x10035caa7*/
  v72 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x10035cab5*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v34, &unk_1017BCC86, &v71); /*0x10035cad1*/
  if ( v36 ) /*0x10035cae0*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, v36, 1); /*0x10035caee*/
  a1[3] = v34[2]; /*0x10035cafa*/
  v20 = v34[0]; /*0x10035cafe*/
  a1[2] = v34[1]; /*0x10035cb0c*/
  a1[1] = v20; /*0x10035cb10*/
  *a1 = 10; /*0x10035cb14*/
  if ( v64 ) /*0x10035cb25*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v65, v64, 1); /*0x10035cb33*/
  v18 = v67; /*0x10035cb38*/
  if ( v67 ) /*0x10035cb42*/
  {
    v19 = v68; /*0x10035cb48*/
    goto LABEL_38; /*0x10035cb48*/
  }
  return a1; /*0x10035cefe*/
}