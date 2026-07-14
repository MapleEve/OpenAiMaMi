// owner: codexmate_lib::platform::process::launch_codex_app::h91cbb8eff855c58e
// VA: 0x1001bfa90 | AiMaMi 1.1.8 macos universal.app x86_64 slice (arch-noise-filtered)
// session: <审计会话>

_QWORD *__fastcall codexmate_lib::platform::process::launch_codex_app::h91cbb8eff855c58e(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  int v4; // eax
  __int64 v5; // rcx
  char *v6; // rbx
  __int64 v7; // r12
  __int64 v8; // r13
  __int64 v9; // rsi
  __int64 v10; // rsi
  __int64 v11; // rdx
  char *v12; // rdi
  char *v13; // rbx
  __int64 v14; // r12
  __int64 v15; // r13
  __int64 v16; // rsi
  __int64 v17; // rsi
  __int64 v18; // rdx
  char *v19; // rdi
  __int64 *v20; // rbx
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rbx
  __int64 v24; // r14
  __int64 v25; // rcx
  __int64 v26; // r13
  __int64 v27; // r12
  __int64 v28; // rsi
  __int64 v29; // rcx
  __int64 v30; // r13
  __int64 v31; // r12
  __int64 v32; // rsi
  __int64 v33; // rdi
  bool v34; // zf
  __int64 v35; // r12
  char *v36; // r13
  __int64 v37; // rax
  unsigned int v38; // edx
  __int64 v39; // rsi
  __int64 v40; // rdi
  __int64 v41; // r13
  unsigned int v42; // edx
  unsigned int v43; // r12d
  __int64 v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r14
  char *v48; // r12
  __int64 v49; // rax
  unsigned int v50; // edx
  __int64 v51; // rsi
  __int64 v52; // rdi
  __int64 v53; // r14
  unsigned int v54; // edx
  unsigned int v55; // r13d
  __int64 v56; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rax
  unsigned int v60; // edx
  __int64 v61; // rsi
  __int64 v62; // rdi
  __int64 v63; // rbx
  unsigned int v64; // edx
  unsigned int v65; // r14d
  __int64 v66; // rax
  __int64 v67; // rdx
  __int64 v68; // rax
  unsigned int v69; // edx
  __int64 v70; // rsi
  __int64 v71; // rdi
  __int64 v72; // rbx
  unsigned int v73; // edx
  unsigned int v74; // r14d
  __int64 v75; // rax
  __int64 v76; // rdx
  __int64 v77; // rcx
  __int64 v78; // rsi
  char *v79; // rdi
  __int64 v81; // r14
  __int64 v82; // r13
  __int64 v83; // r15
  __int64 v84; // r12
  __int64 v85; // rsi
  _QWORD *v86; // rax
  void *v87; // rax
  _QWORD *v88; // rcx
  _QWORD v89[2]; // [rsp+8h] [rbp-178h] BYREF
  __int64 *v90; // [rsp+18h] [rbp-168h] BYREF
  __int64 v91; // [rsp+20h] [rbp-160h]
  __int64 v92; // [rsp+28h] [rbp-158h]
  __int64 v93; // [rsp+30h] [rbp-150h]
  char *v94; // [rsp+38h] [rbp-148h]
  __int64 v95; // [rsp+40h] [rbp-140h]
  __int64 v96; // [rsp+48h] [rbp-138h]
  __int64 v97; // [rsp+E0h] [rbp-A0h] BYREF
  __int64 v98; // [rsp+E8h] [rbp-98h]
  __int64 v99; // [rsp+F0h] [rbp-90h]
  char *v100; // [rsp+F8h] [rbp-88h] BYREF
  __int64 *v101; // [rsp+100h] [rbp-80h]
  __int64 *v102; // [rsp+108h] [rbp-78h] BYREF
  char *v103; // [rsp+110h] [rbp-70h]
  __int64 v104; // [rsp+118h] [rbp-68h]
  __int64 v105; // [rsp+120h] [rbp-60h]
  char *v106; // [rsp+128h] [rbp-58h]
  __int64 v107; // [rsp+130h] [rbp-50h]
  __int64 v108; // [rsp+138h] [rbp-48h]
  _QWORD *v109; // [rsp+140h] [rbp-40h]
  __int64 v110; // [rsp+148h] [rbp-38h]
  char *v111; // [rsp+150h] [rbp-30h]

  v109 = a1; /*0x1001bfaa4*/
  LOBYTE(v4) = 1; /*0x1001bfaa8*/
  LODWORD(v110) = v4; /*0x1001bfaaa*/
  while ( 1 )
  {
    std::sys::process::unix::common::Command::new::h3bc62b213fd56379( /*0x1001bfaca*/
      &v90,
      "openpathwithkindsaveuuidemithideshow",
      4,
      a4);
    std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0( /*0x1001bfada*/
      &v90,
      "-b/Applications/Codex.apppgrep-xps-p-oosascript-etell application \"Codex\" to quitCodex.app/Codex Helper",
      2);
    std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v90, "com.openai.codexcom.openai.Codex", 16); /*0x1001bfaee*/
    std::process::Command::output::h737eedd4de2ee22e(&v102, &v90); /*0x1001bfafa*/
    core::ptr::drop_in_place$LT$std..process..Command$GT$::hdbc0adc56aac1bdd(&v90); /*0x1001bfb02*/
    if ( v102 == (__int64 *)0x8000000000000000LL ) /*0x1001bfb15*/
    {
      v5 = (unsigned __int8)v103 & 3; /*0x1001bfb1d*/
      if ( (_DWORD)v5 != 1 ) /*0x1001bfb23*/
        goto LABEL_15; /*0x1001bfb23*/
      v6 = v103 - 1; /*0x1001bfb29*/
      v7 = *(_QWORD *)(v103 - 1); /*0x1001bfb2d*/
      v8 = *(_QWORD *)(v103 + 7); /*0x1001bfb31*/
      if ( *(_QWORD *)v8 ) /*0x1001bfb35*/
        (*(void (__fastcall **)(__int64))v8)(v7); /*0x1001bfb41*/
      v9 = *(_QWORD *)(v8 + 8); /*0x1001bfb43*/
      if ( v9 ) /*0x1001bfb4a*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v9, *(_QWORD *)(v8 + 16)); /*0x1001bfb53*/
      v10 = 24; /*0x1001bfb58*/
      v11 = 8; /*0x1001bfb5d*/
      v12 = v6; /*0x1001bfb62*/
      goto LABEL_14; /*0x1001bfb65*/
    }
    v96 = v108; /*0x1001bfb74*/
    v95 = v107; /*0x1001bfb7f*/
    v94 = v106; /*0x1001bfb8a*/
    v93 = v105; /*0x1001bfb95*/
    v92 = v104; /*0x1001bfba0*/
    v5 = (__int64)v102; /*0x1001bfba7*/
    v91 = (__int64)v103; /*0x1001bfbaf*/
    v90 = v102; /*0x1001bfbb6*/
    if ( !(_DWORD)v108 ) /*0x1001bfbbf*/
      break; /*0x1001bfbbf*/
LABEL_10:
    if ( v90 ) /*0x1001bfbcf*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v91, v90, 1); /*0x1001bfbdd*/
    v10 = v93; /*0x1001bfbe2*/
    if ( v93 ) /*0x1001bfbec*/
    {
      v12 = v94; /*0x1001bfbee*/
      v11 = 1; /*0x1001bfbf5*/
LABEL_14:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v10, v11); /*0x1001bfbfa*/
    }
LABEL_15:
    std::sys::process::unix::common::Command::new::h3bc62b213fd56379( /*0x1001bfbff*/
      &v90,
      "openpathwithkindsaveuuidemithideshow",
      4,
      v5);
    std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0( /*0x1001bfc22*/
      &v90,
      "-b/Applications/Codex.apppgrep-xps-p-oosascript-etell application \"Codex\" to quitCodex.app/Codex Helper",
      2);
    std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v90, "com.openai.Codex", 16); /*0x1001bfc36*/
    std::process::Command::output::h737eedd4de2ee22e(&v102, &v90); /*0x1001bfc42*/
    core::ptr::drop_in_place$LT$std..process..Command$GT$::hdbc0adc56aac1bdd(&v90); /*0x1001bfc4a*/
    if ( v102 == (__int64 *)0x8000000000000000LL ) /*0x1001bfc5d*/
    {
      if ( ((unsigned __int8)v103 & 3) != 1 ) /*0x1001bfc6b*/
        goto LABEL_28; /*0x1001bfc6b*/
      v13 = v103 - 1; /*0x1001bfc71*/
      v14 = *(_QWORD *)(v103 - 1); /*0x1001bfc75*/
      v15 = *(_QWORD *)(v103 + 7); /*0x1001bfc79*/
      if ( *(_QWORD *)v15 ) /*0x1001bfc7d*/
        (*(void (__fastcall **)(__int64))v15)(v14); /*0x1001bfc89*/
      v16 = *(_QWORD *)(v15 + 8); /*0x1001bfc8b*/
      if ( v16 ) /*0x1001bfc92*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v16, *(_QWORD *)(v15 + 16)); /*0x1001bfc9b*/
      v17 = 24; /*0x1001bfca0*/
      v18 = 8; /*0x1001bfca5*/
      v19 = v13; /*0x1001bfcaa*/
      goto LABEL_27; /*0x1001bfcad*/
    }
    v96 = v108; /*0x1001bfcc4*/
    v95 = v107; /*0x1001bfccf*/
    v94 = v106; /*0x1001bfcda*/
    v93 = v105; /*0x1001bfce5*/
    v92 = v104; /*0x1001bfcf0*/
    v91 = (__int64)v103; /*0x1001bfcff*/
    v90 = v102; /*0x1001bfd06*/
    if ( !(_DWORD)v108 ) /*0x1001bfd0f*/
    {
      v68 = std::time::Instant::now::hda76af2c3a449055(); /*0x1001c0174*/
      v70 = v69; /*0x1001c0179*/
      v71 = v68; /*0x1001c0180*/
      v72 = _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::h15fde51d8fe7d610( /*0x1001c018a*/
              v68,
              v69,
              3,
              0);
      v74 = v73; /*0x1001c018d*/
      while ( 1 ) /*0x1001c0190*/
      {
        v75 = std::time::Instant::now::hda76af2c3a449055(); /*0x1001c0190*/
        if ( v75 == v72 ) /*0x1001c0198*/
        {
          if ( (unsigned int)v76 >= v74 ) /*0x1001c019d*/
            break; /*0x1001c019d*/
        }
        else if ( v75 >= v72 ) /*0x1001c01b3*/
        {
          break; /*0x1001c01b3*/
        }
        if ( (unsigned __int8)codexmate_lib::platform::process::is_process_running::h2043172b9767bad6( /*0x1001c01b9*/
                                v71,
                                v70,
                                v76,
                                v77) )
          goto LABEL_93; /*0x1001c01c0*/
        v71 = 0; /*0x1001c01c2*/
        v70 = 80000000; /*0x1001c01c4*/
        std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 80000000); /*0x1001c01c9*/
      }
    }
    if ( v90 ) /*0x1001bfd1f*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v91, v90, 1); /*0x1001bfd2d*/
    v17 = v93; /*0x1001bfd32*/
    if ( v93 ) /*0x1001bfd3c*/
    {
      v19 = v94; /*0x1001bfd3e*/
      v18 = 1; /*0x1001bfd45*/
LABEL_27:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, v17, v18); /*0x1001bfd4a*/
    }
LABEL_28:
    dirs::home_dir::hc82e61f557956e66(&v90); /*0x1001bfd4f*/
    v20 = v90; /*0x1001bfd57*/
    v21 = v91; /*0x1001bfd6b*/
    if ( v90 == (__int64 *)0x8000000000000000LL ) /*0x1001bfd77*/
    {
      v21 = 1; /*0x1001bfd77*/
      v20 = nullptr; /*0x1001bfd80*/
    }
    v22 = v92; /*0x1001bfd84*/
    if ( v90 == (__int64 *)0x8000000000000000LL ) /*0x1001bfd8b*/
      v22 = 0; /*0x1001bfd8b*/
    v97 = v21; /*0x1001bfd8f*/
    v98 = v22; /*0x1001bfd96*/
    v102 = &v97; /*0x1001bfda4*/
    v103 = (char *)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x1001bfdaf*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v90, "\xC0\x17/Applications/Codex.app", &v102); /*0x1001bfdc1*/
    if ( v20 ) /*0x1001bfdc9*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, v20, 1); /*0x1001bfdd6*/
    v101 = v90; /*0x1001bfde2*/
    v23 = v91; /*0x1001bfde6*/
    v24 = v92; /*0x1001bfded*/
    std::sys::fs::metadata::h32fa16d3052ea535( /*0x1001bfe03*/
      &v90,
      "/Applications/Codex.apppgrep-xps-p-oosascript-etell application \"Codex\" to quitCodex.app/Codex Helper",
      23);
    if ( !(_BYTE)v90 ) /*0x1001bfe0f*/
    {
      std::sys::process::unix::common::Command::new::h3bc62b213fd56379( /*0x1001bff4f*/
        &v90,
        "openpathwithkindsaveuuidemithideshow",
        4,
        v25);
      std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0( /*0x1001bff63*/
        &v90,
        "/Applications/Codex.apppgrep-xps-p-oosascript-etell application \"Codex\" to quitCodex.app/Codex Helper",
        23);
      std::process::Command::output::h737eedd4de2ee22e(&v102, &v90); /*0x1001bff6f*/
      if ( v102 == (__int64 *)0x8000000000000000LL ) /*0x1001bff85*/
        goto LABEL_99; /*0x1001bff85*/
      v35 = v105; /*0x1001bff8b*/
      v36 = v106; /*0x1001bff8f*/
      if ( v102 ) /*0x1001bff96*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v103, v102, 1); /*0x1001bffa1*/
      if ( v35 ) /*0x1001bffa9*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v36, v35, 1); /*0x1001bffb6*/
      core::ptr::drop_in_place$LT$std..process..Command$GT$::hdbc0adc56aac1bdd(&v90); /*0x1001bffbe*/
      v37 = std::time::Instant::now::hda76af2c3a449055(); /*0x1001bffc3*/
      v39 = v38; /*0x1001bffc8*/
      v40 = v37; /*0x1001bffcf*/
      v41 = _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::h15fde51d8fe7d610( /*0x1001bffd9*/
              v37,
              v38,
              3,
              0);
      v43 = v42; /*0x1001bffdc*/
      while ( 1 ) /*0x1001bffe0*/
      {
        v44 = std::time::Instant::now::hda76af2c3a449055(); /*0x1001bffe0*/
        if ( v44 == v41 ) /*0x1001bffe8*/
        {
          if ( (unsigned int)v45 >= v43 ) /*0x1001bffed*/
            goto LABEL_41; /*0x1001bffed*/
        }
        else if ( v44 >= v41 ) /*0x1001c0003*/
        {
          goto LABEL_41; /*0x1001c0003*/
        }
        if ( (unsigned __int8)codexmate_lib::platform::process::is_process_running::h2043172b9767bad6( /*0x1001c0009*/
                                v40,
                                v39,
                                v45,
                                v46) )
          break; /*0x1001c0009*/
        v40 = 0; /*0x1001c0016*/
        v39 = 80000000; /*0x1001c0018*/
        std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 80000000); /*0x1001c001d*/
      }
LABEL_90:
      *v109 = 10; /*0x1001c01d0*/
LABEL_91:
      v78 = (__int64)v101; /*0x1001c01db*/
      if ( !v101 ) /*0x1001c01e2*/
        return v109; /*0x1001c01e2*/
      v79 = (char *)v23; /*0x1001c01e9*/
LABEL_97:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v79, v78, 1); /*0x1001c022e*/
      return v109; /*0x1001c022e*/
    }
    if ( (v91 & 3) == 1 ) /*0x1001bfe24*/
    {
      v111 = (char *)(v91 - 1); /*0x1001bfe2a*/
      v26 = *(_QWORD *)(v91 - 1); /*0x1001bfe2e*/
      v27 = *(_QWORD *)(v91 + 7); /*0x1001bfe32*/
      if ( *(_QWORD *)v27 ) /*0x1001bfe36*/
        (*(void (__fastcall **)(__int64))v27)(v26); /*0x1001bfe42*/
      v28 = *(_QWORD *)(v27 + 8); /*0x1001bfe44*/
      if ( v28 ) /*0x1001bfe4c*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v28, *(_QWORD *)(v27 + 16)); /*0x1001bfe56*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v111, 24, 8); /*0x1001bfe69*/
    }
LABEL_41:
    std::sys::fs::metadata::h32fa16d3052ea535(&v90, v23, v24); /*0x1001bfe70*/
    if ( (_DWORD)v90 != 1 )
    {
      std::sys::process::unix::common::Command::new::h3bc62b213fd56379( /*0x1001c003f*/
        &v90,
        "openpathwithkindsaveuuidemithideshow",
        4,
        v29);
      std::sys::process::unix::common::Command::arg::he7ec6c16a2dd7ab0(&v90, v23, v24); /*0x1001c004d*/
      std::process::Command::output::h737eedd4de2ee22e(&v102, &v90); /*0x1001c0059*/
      if ( v102 != (__int64 *)0x8000000000000000LL ) /*0x1001c006f*/
      {
        v47 = v105; /*0x1001c0075*/
        v48 = v106; /*0x1001c0079*/
        if ( v102 ) /*0x1001c0080*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v103, v102, 1); /*0x1001c008b*/
        if ( v47 ) /*0x1001c0093*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v48, v47, 1); /*0x1001c00a0*/
        core::ptr::drop_in_place$LT$std..process..Command$GT$::hdbc0adc56aac1bdd(&v90); /*0x1001c00a8*/
        v49 = std::time::Instant::now::hda76af2c3a449055(); /*0x1001c00ad*/
        v51 = v50; /*0x1001c00b2*/
        v52 = v49; /*0x1001c00b9*/
        v53 = _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::h15fde51d8fe7d610( /*0x1001c00c3*/
                v49,
                v50,
                3,
                0);
        v55 = v54; /*0x1001c00c6*/
        while ( 1 ) /*0x1001c00d0*/
        {
          v56 = std::time::Instant::now::hda76af2c3a449055(); /*0x1001c00d0*/
          if ( v56 == v53 ) /*0x1001c00d8*/
          {
            if ( (unsigned int)v57 >= v55 ) /*0x1001c00dd*/
              goto LABEL_48; /*0x1001c00dd*/
          }
          else if ( v56 >= v53 ) /*0x1001c00f3*/
          {
            goto LABEL_48; /*0x1001c00f3*/
          }
          if ( (unsigned __int8)codexmate_lib::platform::process::is_process_running::h2043172b9767bad6( /*0x1001c00f9*/
                                  v52,
                                  v51,
                                  v57,
                                  v58) )
            goto LABEL_90; /*0x1001c0100*/
          v52 = 0; /*0x1001c0106*/
          v51 = 80000000; /*0x1001c0108*/
          std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 80000000); /*0x1001c010d*/
        }
      }
LABEL_99:
      v100 = v103; /*0x1001c0249*/
      v89[0] = &v100; /*0x1001c025b*/
      v89[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1001c0269*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(
        &v97,
        "\x11open app failed: \xC0\x1Dosascript quit Codex failed: \xC0\vps failed: \xC0\xC0\xC0",
        v89);
      v81 = v97; /*0x1001c028a*/
      v82 = v98; /*0x1001c0291*/
      v83 = v99; /*0x1001c0298*/
      if ( ((unsigned __int8)v100 & 3) == 1 ) /*0x1001c02ae*/
      {
        v111 = v100 - 1; /*0x1001c02b4*/
        v110 = *(_QWORD *)(v100 - 1); /*0x1001c02bc*/
        v84 = *(_QWORD *)(v100 + 7); /*0x1001c02c0*/
        if ( *(_QWORD *)v84 ) /*0x1001c02c4*/
          (*(void (__fastcall **)(__int64))v84)(v110); /*0x1001c02d1*/
        v85 = *(_QWORD *)(v84 + 8); /*0x1001c02d7*/
        if ( v85 ) /*0x1001c02df*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v110, v85, *(_QWORD *)(v84 + 16)); /*0x1001c02e6*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v111, 24, 8); /*0x1001c02f9*/
      }
      v86 = v109; /*0x1001c02fe*/
      v109[1] = v81; /*0x1001c0302*/
      v86[2] = v82; /*0x1001c0306*/
      v86[3] = v83; /*0x1001c030a*/
      *v86 = 9; /*0x1001c030e*/
      core::ptr::drop_in_place$LT$std..process..Command$GT$::hdbc0adc56aac1bdd(&v90); /*0x1001c031c*/
      goto LABEL_91; /*0x1001c0321*/
    }
    if ( (v91 & 3) == 1 ) /*0x1001bfe9a*/
    {
      v111 = (char *)(v91 - 1); /*0x1001bfea0*/
      v30 = *(_QWORD *)(v91 - 1); /*0x1001bfea4*/
      v31 = *(_QWORD *)(v91 + 7); /*0x1001bfea8*/
      if ( *(_QWORD *)v31 ) /*0x1001bfeac*/
        (*(void (__fastcall **)(__int64))v31)(v30); /*0x1001bfeb8*/
      v32 = *(_QWORD *)(v31 + 8); /*0x1001bfeba*/
      if ( v32 ) /*0x1001bfec2*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v32, *(_QWORD *)(v31 + 16)); /*0x1001bfecc*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v111, 24, 8); /*0x1001bfedf*/
    }
LABEL_48:
    v33 = 0; /*0x1001bfef0*/
    std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 250000000); /*0x1001bfef7*/
    if ( v101 ) /*0x1001bff03*/
    {
      v33 = v23; /*0x1001bff0a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v101, 1); /*0x1001bff0d*/
    }
    v34 = (v110 & 1) == 0; /*0x1001bff12*/
    LODWORD(v110) = 0; /*0x1001bff16*/
    if ( v34 ) /*0x1001bff2b*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v33); /*0x1001c0326*/
      v87 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(22, 1); /*0x1001c0335*/
      if ( !v87 ) /*0x1001c033d*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 22); /*0x1001c0396*/
      qmemcpy(v87, "Codex launch timed out", 22); /*0x1001c0365*/
      v88 = v109; /*0x1001c0368*/
      *v109 = 9; /*0x1001c036c*/
      v88[1] = 22; /*0x1001c0373*/
      v88[2] = v87; /*0x1001c037b*/
      v88[3] = 22; /*0x1001c037f*/
      return v109; /*0x1001c0387*/
    }
  }
  v59 = std::time::Instant::now::hda76af2c3a449055(); /*0x1001c0114*/
  v61 = v60; /*0x1001c0119*/
  v62 = v59; /*0x1001c0120*/
  v63 = _$LT$std..time..Instant$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::h15fde51d8fe7d610( /*0x1001c012a*/
          v59,
          v60,
          3,
          0);
  v65 = v64; /*0x1001c012d*/
  while ( 1 ) /*0x1001c0130*/
  {
    v66 = std::time::Instant::now::hda76af2c3a449055(); /*0x1001c0130*/
    if ( v66 == v63 ) /*0x1001c0138*/
    {
      if ( (unsigned int)v67 >= v65 ) /*0x1001c013d*/
        goto LABEL_10; /*0x1001c013d*/
    }
    else if ( v66 >= v63 ) /*0x1001c0153*/
    {
      goto LABEL_10; /*0x1001c0153*/
    }
    if ( (unsigned __int8)codexmate_lib::platform::process::is_process_running::h2043172b9767bad6(v62, v61, v67, v5) ) /*0x1001c0159*/
      break; /*0x1001c0159*/
    v62 = 0; /*0x1001c0166*/
    v61 = 80000000; /*0x1001c0168*/
    std::thread::functions::sleep::h8fc88f8bc00bad5c(0, 80000000); /*0x1001c016d*/
  }
LABEL_93:
  *v109 = 10; /*0x1001c01ee*/
  if ( v90 ) /*0x1001c0203*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v91, v90, 1); /*0x1001c0211*/
  v78 = v93; /*0x1001c0216*/
  if ( v93 ) /*0x1001c0220*/
  {
    v79 = v94; /*0x1001c0222*/
    goto LABEL_97; /*0x1001c0222*/
  }
  return v109; /*0x1001c0237*/
}