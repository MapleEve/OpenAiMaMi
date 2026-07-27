// __ZN13codexmate_lib4core5voice7runtime12stop_capture @ 0x10066c1e0 | 基线 same-set
_DWORD *__fastcall codexmate_lib::core::voice::runtime::stop_capture::h955d7093ac8b0a2b(void *a1, __int64 a2)
{
  volatile signed __int64 *v2; // r15
  __int64 v4; // rax
  __int64 v5; // r13
  _QWORD *v6; // r12
  _BYTE *v7; // rdi
  __int64 v8; // rdx
  unsigned int v9; // r14d
  char v10; // al
  __int64 v11; // rdx
  __int64 v12; // rbx
  __int64 v13; // r15
  __int64 v14; // rcx
  char v15; // r14
  char *v16; // rax
  _DWORD *v17; // rbx
  int v18; // ecx
  char v20; // al
  int v21; // eax
  unsigned __int64 v22; // rcx
  char v23; // r12
  bool v24; // of
  signed __int64 v25; // rax
  __int64 v26; // rax
  unsigned int v27; // edx
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // kr00_8
  bool v30; // cf
  __int64 v31; // rt0
  __int64 v32; // rt0
  signed __int64 v33; // rax
  char v34; // of
  __int64 v35; // rax
  volatile signed __int64 *v36; // rbx
  __int64 v37; // rt0
  volatile signed __int64 *v38; // r12
  __int64 v39; // rt0
  __int64 v40; // r12
  __int64 v41; // rax
  __int64 v42; // r12
  _QWORD *v43; // r14
  __int64 v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rcx
  _BYTE *v47; // r13
  char v48; // of
  __int64 v49; // rax
  volatile signed __int64 *v50; // rbx
  __int64 v51; // rt0
  volatile signed __int64 *v52; // r12
  __int64 v53; // rt0
  int v54; // ecx
  __int64 v55; // rsi
  volatile signed __int64 *v56; // r13
  volatile signed __int64 *v57; // r15
  __int64 v58; // rdi
  __int64 v59; // rdx
  __int64 v60; // rcx
  unsigned __int8 v61; // r14
  char v62; // al
  char v63; // r15
  char v64; // r15
  volatile signed __int64 *v65; // r15
  volatile signed __int64 *v66; // r14
  __int64 v67; // rdi
  __int64 v68; // rdx
  __int64 v69; // rcx
  char v70; // r12
  __int64 v71; // rax
  __int64 v72; // rax
  char v73; // of
  volatile signed __int64 *v74; // rbx
  __int64 v75; // rt0
  volatile signed __int64 *v76; // r14
  __int64 v77; // rt0
  int v78; // ecx
  char v79; // al
  _QWORD *v80; // rdi
  __int64 v81; // rdx
  __int64 v82; // rcx
  __int64 v83; // rax
  int v84[2]; // [rsp+8h] [rbp-1F8h] BYREF
  _QWORD *v85; // [rsp+20h] [rbp-1E0h]
  _BYTE __dst[152]; // [rsp+28h] [rbp-1D8h] BYREF
  volatile signed __int64 *v87; // [rsp+C0h] [rbp-140h]
  volatile signed __int64 *v88; // [rsp+C8h] [rbp-138h]
  volatile signed __int64 *v89; // [rsp+D0h] [rbp-130h]
  _QWORD __src[17]; // [rsp+D8h] [rbp-128h] BYREF
  _DWORD v91[2]; // [rsp+160h] [rbp-A0h]
  unsigned __int64 v92; // [rsp+168h] [rbp-98h]
  __int64 v93; // [rsp+170h] [rbp-90h]
  volatile signed __int64 *v94; // [rsp+178h] [rbp-88h] BYREF
  volatile signed __int64 *v95[2]; // [rsp+180h] [rbp-80h] BYREF
  void *v96; // [rsp+190h] [rbp-70h]
  unsigned __int64 v97; // [rsp+198h] [rbp-68h]
  __int64 v98; // [rsp+1A0h] [rbp-60h]
  volatile signed __int64 *v99; // [rsp+1A8h] [rbp-58h] BYREF
  volatile signed __int64 *v100; // [rsp+1B0h] [rbp-50h] BYREF
  volatile signed __int64 *v101; // [rsp+1B8h] [rbp-48h]
  __int64 v102; // [rsp+1C0h] [rbp-40h]
  int v103; // [rsp+1CCh] [rbp-34h]
  __int64 v104; // [rsp+1D0h] [rbp-30h]

  v2 = (volatile signed __int64 *)a2; /*0x10066c1f4*/
  v4 = tauri::Manager::state::hb5ba04dc9da9798f(a2); /*0x10066c1fd*/
  v5 = v4; /*0x10066c202*/
  v6 = (_QWORD *)(v4 + 32); /*0x10066c205*/
  v7 = *(_BYTE **)(v4 + 32); /*0x10066c209*/
  if ( !v7 ) /*0x10066c210*/
    v7 = (_BYTE *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v4 + 32); /*0x10066c357*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v7); /*0x10066c220*/
  v102 = 0x7FFFFFFFFFFFFFFFLL; /*0x10066c233*/
  if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
  {
    v9 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v7, a2, v8, 0x7FFFFFFFFFFFFFFFLL); /*0x10066c364*/
    LOBYTE(v9) = v9 ^ 1; /*0x10066c367*/
    v20 = *(_BYTE *)(v5 + 40); /*0x10066c36b*/
    v96 = a1; /*0x10066c372*/
    if ( v20 ) /*0x10066c376*/
      goto LABEL_5; /*0x10066c376*/
  }
  else
  {
    v9 = 0; /*0x10066c240*/
    v10 = *(_BYTE *)(v5 + 40); /*0x10066c243*/
    v96 = a1; /*0x10066c24a*/
    if ( v10 )
    {
LABEL_5:
      __src[0] = 0; /*0x10066c254*/
      __src[1] = 1; /*0x10066c25f*/
      __src[2] = 0; /*0x10066c26a*/
      *(_QWORD *)&__dst[16] = 1610612768; /*0x10066c275*/
      *(_QWORD *)__dst = __src; /*0x10066c287*/
      *(_QWORD *)&__dst[8] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x10066c295*/
      if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                              "poisoned lock: another task failed inside",
                              41,
                              __dst) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10066cc63*/
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
          55,
          v84,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
          &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
      v12 = __src[0]; /*0x10066c2bc*/
      v13 = __src[1]; /*0x10066c2c3*/
      v14 = v9; /*0x10066c2ca*/
      v15 = __src[2]; /*0x10066c2cd*/
      v91[0] = *(_DWORD *)((char *)&__src[2] + 1); /*0x10066c2db*/
      *(_DWORD *)((char *)v91 + 3) = HIDWORD(__src[2]); /*0x10066c2e7*/
      if ( !(_BYTE)v14
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v102) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                               "poisoned lock: another task failed inside",
                               41,
                               v11,
                               v14) )
      {
        *(_BYTE *)(v5 + 40) = 1; /*0x10066cc7a*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v6); /*0x10066c309*/
      v16 = (char *)v96; /*0x10066c30e*/
      *((_QWORD *)v96 + 1) = v12; /*0x10066c312*/
      v17 = v16; /*0x10066c316*/
      *((_QWORD *)v16 + 2) = v13; /*0x10066c319*/
      v16[24] = v15; /*0x10066c31d*/
      v18 = *(_DWORD *)((char *)v91 + 3); /*0x10066c327*/
      *(_DWORD *)(v16 + 25) = v91[0]; /*0x10066c32d*/
      *((_DWORD *)v16 + 7) = v18; /*0x10066c330*/
      *(_QWORD *)v16 = 2; /*0x10066c333*/
      return v17; /*0x10066c333*/
    }
  }
  v21 = *(_DWORD *)(v5 + 720); /*0x10066c37c*/
  v104 = a2; /*0x10066c388*/
  v85 = v6; /*0x10066c38c*/
  if ( v21 == 1000000000 || (*(_QWORD *)__dst = *(_QWORD *)(v5 + 712), *(_DWORD *)&__dst[8] = v21, *(_BYTE *)(v5 + 899)) ) /*0x10066c3a9*/
  {
    v22 = 0; /*0x10066c3b7*/
    v23 = *(_BYTE *)(v5 + 744); /*0x10066c3b9*/
    v24 = __OFSUB__(v23, 2); /*0x10066c3c1*/
    if ( v23 == 2 ) /*0x10066c3c5*/
    {
LABEL_14:
      if ( *(_BYTE *)(v5 + 768) == 2 || (unsigned __int8)(*(_BYTE *)(v5 + 908) - 1) > 1u ) /*0x10066c3e5*/
      {
        v92 = 0; /*0x10066c47d*/
        v98 = 0; /*0x10066c488*/
        v97 = 0; /*0x10066c490*/
        v103 = 0; /*0x10066c498*/
        if ( (_BYTE)v9 ) /*0x10066c4a2*/
          goto LABEL_31; /*0x10066c4a2*/
      }
      else
      {
        v92 = v22; /*0x10066c3eb*/
        v25 = _InterlockedExchangeAdd64( /*0x10066c3f7*/
                &codexmate_lib::core::voice::runtime::CAPTURE_STATE_GENERATION::hefda15390cb25fc1,
                1u);
        v98 = 1; /*0x10066c405*/
        a2 = *(_QWORD *)(v5 + 664); /*0x10066c40c*/
        v22 = *(_QWORD *)(v5 + 880); /*0x10066c413*/
        v97 = v22; /*0x10066c41a*/
        v93 = v25 + 1; /*0x10066c41e*/
        *(_QWORD *)(v5 + 872) = v25 + 1; /*0x10066c425*/
        *(_BYTE *)(v5 + 908) = 3; /*0x10066c42c*/
        if ( a2 != 0x8000000000000000LL && a2 ) /*0x10066c446*/
        {
          v7 = *(_BYTE **)(v5 + 672); /*0x10066c448*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, a2, 1); /*0x10066c454*/
        }
        *(_QWORD *)(v5 + 664) = 0x8000000000000000LL; /*0x10066c463*/
        v103 = 1; /*0x10066c46c*/
        if ( (_BYTE)v9 ) /*0x10066c472*/
          goto LABEL_31; /*0x10066c472*/
      }
LABEL_30:
      if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v102) != 0 /*0x10066cc84*/
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v7, a2, v8, v22) )
      {
        *(_BYTE *)(v5 + 40) = 1; /*0x10066cc91*/
      }
      goto LABEL_31; /*0x10066cc96*/
    }
  }
  else
  {
    v7 = __dst; /*0x10066c4ad*/
    v26 = std::time::Instant::elapsed::h457f209775ed485c(__dst); /*0x10066c4b4*/
    v29 = 1000 * v26 + v27 / 0xF4240uLL; /*0x10066c4d0*/
    v28 = (0x3E8 * (unsigned __int128)(unsigned __int64)v26 + v27 / 0xF4240uLL) >> 64; /*0x10066c4d0*/
    v22 = v29; /*0x10066c4d0*/
    v30 = __PAIR128__(v28, v29) < 0xFA; /*0x10066c4de*/
    v8 = (__PAIR128__(v28, v29) - 0xFA) >> 64; /*0x10066c4de*/
    LOBYTE(v22) = v30; /*0x10066c4e2*/
    v23 = *(_BYTE *)(v5 + 744); /*0x10066c4e5*/
    v24 = __OFSUB__(v23, 2); /*0x10066c4ed*/
    if ( v23 == 2 ) /*0x10066c4f1*/
      goto LABEL_14; /*0x10066c4f1*/
  }
  a1 = *(void **)(v5 + 728); /*0x10066c4f7*/
  v31 = _InterlockedIncrement64((volatile signed __int64 *)a1); /*0x10066c4fe*/
  if ( (v31 < 0) ^ v24 | (v31 == 0) ) /*0x10066c502*/
    goto LABEL_132; /*0x10066c502*/
  v92 = v22; /*0x10066c508*/
  v2 = *(volatile signed __int64 **)(v5 + 736); /*0x10066c50f*/
  v32 = _InterlockedIncrement64(v2); /*0x10066c516*/
  if ( (v32 < 0) ^ v24 | (v32 == 0) ) /*0x10066c51a*/
    goto LABEL_132; /*0x10066c51a*/
  v33 = _InterlockedExchangeAdd64(&codexmate_lib::core::voice::runtime::CAPTURE_STATE_GENERATION::hefda15390cb25fc1, 1u); /*0x10066c525*/
  v98 = 1; /*0x10066c533*/
  a2 = *(_QWORD *)(v5 + 664); /*0x10066c53a*/
  v22 = *(_QWORD *)(v5 + 880); /*0x10066c541*/
  v97 = v22; /*0x10066c548*/
  v93 = v33 + 1; /*0x10066c54c*/
  *(_QWORD *)(v5 + 872) = v33 + 1; /*0x10066c553*/
  *(_BYTE *)(v5 + 908) = 3; /*0x10066c55a*/
  if ( a2 != 0x8000000000000000LL && a2 ) /*0x10066c574*/
  {
    v7 = *(_BYTE **)(v5 + 672); /*0x10066c576*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, a2, 1); /*0x10066c582*/
  }
  *(_QWORD *)(v5 + 664) = 0x8000000000000000LL; /*0x10066c591*/
  v103 = 0; /*0x10066c598*/
  if ( !(_BYTE)v9 ) /*0x10066c5a2*/
    goto LABEL_30; /*0x10066c5a2*/
LABEL_31:
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v85); /*0x10066c5b8*/
  v99 = (volatile signed __int64 *)a1; /*0x10066c5c7*/
  v100 = v2; /*0x10066c5cb*/
  LOBYTE(v101) = v23; /*0x10066c5cf*/
  v17 = v96; /*0x10066c5d8*/
  if ( v98 ) /*0x10066c5dc*/
  {
    _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(__src, v104); /*0x10066c5ec*/
    v35 = v104; /*0x10066c5f1*/
    v36 = *(volatile signed __int64 **)(v104 + 136); /*0x10066c5f5*/
    v37 = _InterlockedIncrement64(v36); /*0x10066c5fc*/
    if ( (v37 < 0) ^ v34 | (v37 == 0) ) /*0x10066c600*/
      goto LABEL_132; /*0x10066c600*/
    v38 = *(volatile signed __int64 **)(v35 + 144); /*0x10066c606*/
    v39 = _InterlockedIncrement64(v38); /*0x10066c60d*/
    if ( (v39 < 0) ^ v34 | (v39 == 0) ) /*0x10066c612*/
      goto LABEL_132; /*0x10066c612*/
    memcpy(__dst, __src, 0x88u); /*0x10066c62e*/
    *(_QWORD *)&__dst[136] = v36; /*0x10066c633*/
    *(_QWORD *)&__dst[144] = v38; /*0x10066c63a*/
    a2 = v93; /*0x10066c644*/
    codexmate_lib::core::voice::runtime::watchdog::spawn_stopping_watchdog::h29a30515bbaa26ce(__dst, v93); /*0x10066c64b*/
    v17 = v96; /*0x10066c650*/
  }
  v40 = v104; /*0x10066c65b*/
  if ( (_BYTE)v92 ) /*0x10066c65f*/
  {
    v41 = tauri::Manager::state::hb5ba04dc9da9798f(v104); /*0x10066c667*/
    v42 = v41; /*0x10066c66c*/
    v43 = (_QWORD *)(v41 + 32); /*0x10066c66f*/
    v44 = *(_QWORD *)(v41 + 32); /*0x10066c673*/
    if ( !v44 ) /*0x10066c67a*/
      v44 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v41 + 32); /*0x10066cca3*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v44); /*0x10066c680*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v102) != 0 ) /*0x10066c693*/
    {
      v79 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v44, a2, v45, v46); /*0x10066ccab*/
      v47 = (_BYTE *)(v42 + 40); /*0x10066ccb3*/
      v46 = *(unsigned __int8 *)(v42 + 40); /*0x10066ccb7*/
      if ( (_BYTE)v46 ) /*0x10066ccbf*/
      {
        if ( !v79 ) /*0x10066ccc3*/
          goto LABEL_66; /*0x10066ccc3*/
        goto LABEL_40; /*0x10066ccc3*/
      }
      v63 = v79 ^ 1; /*0x10066cce8*/
    }
    else
    {
      v47 = (_BYTE *)(v42 + 40); /*0x10066c69c*/
      if ( *(_BYTE *)(v42 + 40) ) /*0x10066c6a0*/
      {
LABEL_40:
        if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v102) != 0 /*0x10066ccce*/
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v44, a2, v45, v46) )
        {
          *v47 = 1; /*0x10066ccdb*/
        }
        goto LABEL_66; /*0x10066cce0*/
      }
      v63 = 0; /*0x10066c8ec*/
    }
    *(_QWORD *)(v42 + 872) = _InterlockedIncrement64(&codexmate_lib::core::voice::runtime::CAPTURE_STATE_GENERATION::hefda15390cb25fc1); /*0x10066c900*/
    *(_QWORD *)(v42 + 880) = 0; /*0x10066c908*/
    *(_BYTE *)(v42 + 908) = 0; /*0x10066c914*/
    *(_QWORD *)(v42 + 320) = 0; /*0x10066c91d*/
    *(_QWORD *)(v42 + 344) = 0; /*0x10066c929*/
    a2 = *(_QWORD *)(v42 + 664); /*0x10066c935*/
    if ( a2 != 0x8000000000000000LL && a2 ) /*0x10066c94f*/
    {
      v44 = *(_QWORD *)(v42 + 672); /*0x10066c951*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v44, a2, 1); /*0x10066c95e*/
    }
    *(_QWORD *)(v42 + 664) = 0x8000000000000000LL; /*0x10066c96d*/
    *(_DWORD *)(v42 + 720) = 1000000000; /*0x10066c975*/
    if ( !v63 /*0x10066ce91*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v102) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v44, a2, v45, v46) )
    {
      *v47 = 1; /*0x10066ce9e*/
    }
LABEL_66:
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v43); /*0x10066c99a*/
    if ( (_BYTE)v103 ) /*0x10066c9a6*/
    {
      v64 = 1; /*0x10066c9a8*/
      codexmate_lib::core::voice::runtime::send_standby_stop_command::hb0048eea4b815c42(v104, v97); /*0x10066c9b3*/
      goto LABEL_113; /*0x10066c9b8*/
    }
    v64 = 1; /*0x10066c9bd*/
    if ( (_BYTE)v101 == 2 ) /*0x10066c9c4*/
    {
LABEL_113:
      codexmate_lib::core::voice::runtime::overlay::hide_voice_overlay::he8e888d837f13236(v104); /*0x10066cda3*/
      codexmate_lib::core::voice::runtime::tray::update_tray_recording_state::he8064c52aac3ad4d(v104, 0); /*0x10066cdb2*/
      if ( qword_1019FF088 ) /*0x10066cdc1*/
        std::sync::once_lock::OnceLock$LT$T$GT$::initialize::hb43fbf08bf63748c(&codexmate_lib::platform::system_volume::VOLUME_WORKER::heff5c516746785ce); /*0x10066ce87*/
      std::sync::mpmc::Sender$LT$T$GT$::send::h22e3779823916dcc( /*0x10066cdd3*/
        &codexmate_lib::platform::system_volume::VOLUME_WORKER::heff5c516746785ce,
        1);
      codexmate_lib::core::voice::runtime::emit_status::hdcd8d7515879527f((__int64)__dst, v104); /*0x10066cde3*/
      if ( *(_QWORD *)__dst == 0x8000000000000000LL ) /*0x10066cdf9*/
      {
        codexmate_lib::core::voice::runtime::load_status::hafa3b44178c55299(v17, v104); /*0x10066ce02*/
        if ( ((unsigned __int8)v64 & ((_BYTE)v101 != 2)) == 0 ) /*0x10066ce11*/
          return v17; /*0x10066ce11*/
      }
      else
      {
        *((_QWORD *)v17 + 3) = *(_QWORD *)&__dst[16]; /*0x10066ce20*/
        v83 = *(_QWORD *)__dst; /*0x10066ce24*/
        *((_QWORD *)v17 + 2) = *(_QWORD *)&__dst[8]; /*0x10066ce32*/
        *((_QWORD *)v17 + 1) = v83; /*0x10066ce36*/
        *(_QWORD *)v17 = 2; /*0x10066ce3a*/
        if ( ((unsigned __int8)v64 & ((_BYTE)v101 != 2)) == 0 ) /*0x10066ce4b*/
          return v17; /*0x10066ce4b*/
      }
LABEL_119:
      if ( !_InterlockedDecrement64(v99) ) /*0x10066ce55*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::heff7261dabead4fc(&v99); /*0x10066ce5f*/
      if ( !_InterlockedDecrement64(v100) ) /*0x10066ce68*/
        alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h12f7101549bdd001(&v100); /*0x10066ce76*/
      return v17; /*0x10066ce7b*/
    }
    *(_QWORD *)&__dst[16] = v101; /*0x10066c9ce*/
    v65 = v100; /*0x10066c9d9*/
    *(_QWORD *)__dst = v99; /*0x10066c9dd*/
    *(_QWORD *)&__dst[8] = v100; /*0x10066c9e4*/
    v66 = v100 + 2; /*0x10066c9eb*/
    v67 = *((_QWORD *)v100 + 2); /*0x10066c9ef*/
    if ( !v67 ) /*0x10066c9f6*/
      v67 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v100 + 2); /*0x10066ccf9*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v67); /*0x10066c9fc*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v102) != 0 ) /*0x10066ca0f*/
    {
      v70 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v67, a2, v68, v69) ^ 1; /*0x10066cd09*/
      if ( *((_BYTE *)v65 + 24) ) /*0x10066cd0d*/
        goto LABEL_73; /*0x10066cd14*/
    }
    else
    {
      v70 = 0; /*0x10066ca15*/
      if ( *((_BYTE *)v65 + 24) ) /*0x10066ca18*/
      {
LABEL_73:
        if ( !v70 /*0x10066cec9*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v102) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v67, a2, v68, v69) )
        {
          *((_BYTE *)v65 + 24) = 1; /*0x10066ced6*/
        }
LABEL_108:
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v66); /*0x10066cd60*/
        if ( !_InterlockedDecrement64(*(volatile signed __int64 **)__dst) ) /*0x10066cd76*/
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::heff7261dabead4fc(__dst); /*0x10066cd83*/
        if ( !_InterlockedDecrement64(*(volatile signed __int64 **)&__dst[8]) ) /*0x10066cd8f*/
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h12f7101549bdd001(&__dst[8]); /*0x10066cd9b*/
        v64 = 0; /*0x10066cda0*/
        goto LABEL_113; /*0x10066cda0*/
      }
    }
    v80 = (_QWORD *)((char *)v65 + 28); /*0x10066cd1a*/
    __src[0] = std::io::Write::write_all::h3ce78d18b5b98128((char *)v65 + 28, "stop\nfailed to spawn thread", 5); /*0x10066cd2f*/
    if ( __src[0] ) /*0x10066cd39*/
    {
      v80 = __src; /*0x10066cd3b*/
      core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(__src); /*0x10066cd42*/
    }
    if ( !v70 /*0x10066cee0*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v102) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v80,
                             "stop\nfailed to spawn thread",
                             v81,
                             v82) )
    {
      *((_BYTE *)v65 + 24) = 1; /*0x10066ceed*/
    }
    goto LABEL_108; /*0x10066cef2*/
  }
  if ( (_BYTE)v103 ) /*0x10066c6d3*/
  {
    codexmate_lib::core::voice::runtime::emit_status::hdcd8d7515879527f((__int64)__dst, v104); /*0x10066c6e9*/
    if ( *(_QWORD *)__dst != 0x8000000000000000LL ) /*0x10066c6ff*/
    {
      *((_QWORD *)v17 + 3) = *(_QWORD *)&__dst[16]; /*0x10066ca52*/
      v71 = *(_QWORD *)__dst; /*0x10066ca56*/
      *((_QWORD *)v17 + 2) = *(_QWORD *)&__dst[8]; /*0x10066ca64*/
      *((_QWORD *)v17 + 1) = v71; /*0x10066ca68*/
      *(_QWORD *)v17 = 2; /*0x10066ca6c*/
      if ( (_BYTE)v101 == 2 ) /*0x10066ca77*/
        return v17; /*0x10066ca77*/
      goto LABEL_119; /*0x10066ca77*/
    }
    codexmate_lib::core::voice::runtime::send_standby_stop_command::hb0048eea4b815c42(v104, v97); /*0x10066c70d*/
    _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(__src, v104); /*0x10066c71d*/
    v49 = v104; /*0x10066c722*/
    v50 = *(volatile signed __int64 **)(v104 + 136); /*0x10066c726*/
    v51 = _InterlockedIncrement64(v50); /*0x10066c72d*/
    if ( !((v51 < 0) ^ v48 | (v51 == 0)) ) /*0x10066c731*/
    {
      v52 = *(volatile signed __int64 **)(v49 + 144); /*0x10066c737*/
      v53 = _InterlockedIncrement64(v52); /*0x10066c73e*/
      if ( !((v53 < 0) ^ v48 | (v53 == 0)) ) /*0x10066c743*/
      {
        memcpy(&__dst[16], __src, 0x88u); /*0x10066c75c*/
        v87 = v50; /*0x10066c761*/
        v88 = v52; /*0x10066c768*/
        *(_QWORD *)__dst = v98; /*0x10066c773*/
        *(_QWORD *)&__dst[8] = v93; /*0x10066c781*/
        *(_QWORD *)v84 = 0x8000000000000000LL; /*0x10066c792*/
        std::thread::lifecycle::spawn_unchecked::h00bbb72541322695((int)__src, (int)v84, 0, v54, 0, 0, __dst); /*0x10066c7b3*/
        v17 = v96; /*0x10066c7b8*/
        if ( !__src[0] ) /*0x10066c7cd*/
        {
          __src[0] = __src[1]; /*0x10066cef7*/
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10066cf1f*/
            "failed to spawn thread",
            22,
            __src,
            &off_101968498,
            &off_101967AA0);
        }
        core::ptr::drop_in_place$LT$std..thread..join_handle..JoinHandle$LT$$LP$$RP$$GT$$GT$::h9bda91b0eda32292(__src); /*0x10066c7f6*/
        v40 = v104; /*0x10066c7ff*/
        if ( (_BYTE)v101 != 2 ) /*0x10066c803*/
        {
          if ( !_InterlockedDecrement64(v99) ) /*0x10066c80d*/
            alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::heff7261dabead4fc(&v99); /*0x10066c817*/
          if ( !_InterlockedDecrement64(v100) ) /*0x10066c820*/
            alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h12f7101549bdd001(&v100); /*0x10066c82e*/
        }
        goto LABEL_91; /*0x10066c833*/
      }
    }
LABEL_132:
    BUG(); /*0x10066cf53*/
  }
  if ( (_BYTE)v101 == 2 ) /*0x10066c83c*/
  {
LABEL_91:
    codexmate_lib::core::voice::runtime::load_status::hafa3b44178c55299(v17, v40); /*0x10066cc32*/
    return v17; /*0x10066cc3d*/
  }
  v95[1] = v101; /*0x10066c846*/
  v95[0] = v100; /*0x10066c852*/
  v94 = v99; /*0x10066c856*/
  v55 = v104; /*0x10066c864*/
  codexmate_lib::core::voice::runtime::emit_status::hdcd8d7515879527f((__int64)__dst, v104); /*0x10066c867*/
  if ( *(_QWORD *)__dst == 0x8000000000000000LL ) /*0x10066c87d*/
  {
    v56 = v95[0]; /*0x10066c883*/
    v57 = v95[0] + 2; /*0x10066c887*/
    v58 = *((_QWORD *)v95[0] + 2); /*0x10066c88b*/
    if ( !v58 ) /*0x10066c892*/
      v58 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v95[0] + 2); /*0x10066ceb0*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v58); /*0x10066c898*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & v102) != 0 ) /*0x10066c8ab*/
      v61 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v58, v55, v59, v60) ^ 1; /*0x10066cec0*/
    else
      v61 = 0; /*0x10066c8b1*/
    v62 = *((_BYTE *)v56 + 24); /*0x10066c8b4*/
    *(_QWORD *)&__dst[8] = v57; /*0x10066c8c0*/
    __dst[16] = v61; /*0x10066c8c7*/
    *(_QWORD *)__dst = v62 != 0; /*0x10066c8ce*/
    if ( v62 ) /*0x10066c8d5*/
    {
      core::ptr::drop_in_place$LT$core..result..Result$LT$std..sync..poison..mutex..MutexGuard$LT$std..process..ChildStdin$GT$$C$std..sync..poison..PoisonError$LT$std..sync..poison..mutex..MutexGuard$LT$std..process..ChildStdin$GT$$GT$$GT$$GT$::h84ea48b3f2e297a0(__dst); /*0x10066c8e2*/
    }
    else
    {
      __src[0] = std::io::Write::write_all::h3ce78d18b5b98128((char *)v56 + 28, "stop\nfailed to spawn thread", 5); /*0x10066cafa*/
      if ( __src[0] ) /*0x10066cb04*/
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h035ee12b7c6572f3(__src); /*0x10066cb0d*/
      core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$codexmate_lib..core..repository..Repository$GT$$GT$::h6423f5cf108891b1( /*0x10066cb19*/
        v57,
        v61);
    }
    _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f(__src, v40); /*0x10066cb28*/
    v74 = *(volatile signed __int64 **)(v40 + 136); /*0x10066cb2d*/
    v75 = _InterlockedIncrement64(v74); /*0x10066cb35*/
    if ( !((v75 < 0) ^ v73 | (v75 == 0)) ) /*0x10066cb39*/
    {
      v76 = *(volatile signed __int64 **)(v40 + 144); /*0x10066cb3f*/
      v77 = _InterlockedIncrement64(v76); /*0x10066cb47*/
      if ( !((v77 < 0) ^ v73 | (v77 == 0)) ) /*0x10066cb4b*/
      {
        memcpy(&__dst[16], __src, 0x88u); /*0x10066cb64*/
        v87 = v74; /*0x10066cb69*/
        v88 = v76; /*0x10066cb70*/
        *(_QWORD *)__dst = v98; /*0x10066cb7b*/
        *(_QWORD *)&__dst[8] = v93; /*0x10066cb89*/
        v89 = v94; /*0x10066cb97*/
        *(_QWORD *)v84 = 0x8000000000000000LL; /*0x10066cba8*/
        std::thread::lifecycle::spawn_unchecked::ha9df973cfcd45c3b((int)__src, (int)v84, 0, v78, 0, 0, __dst); /*0x10066cbd0*/
        v17 = v96; /*0x10066cbd5*/
        if ( !__src[0] ) /*0x10066cbea*/
        {
          __src[0] = __src[1]; /*0x10066cf26*/
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10066cf4e*/
            "failed to spawn thread",
            22,
            __src,
            &off_101968498,
            &off_101967AA0);
        }
        core::ptr::drop_in_place$LT$std..thread..join_handle..JoinHandle$LT$$LP$$RP$$GT$$GT$::h9bda91b0eda32292(__src); /*0x10066cc13*/
        if ( !_InterlockedDecrement64(v95[0]) ) /*0x10066cc1c*/
          alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h12f7101549bdd001(v95); /*0x10066cc29*/
        v40 = v104; /*0x10066cc2e*/
        goto LABEL_91; /*0x10066cc2e*/
      }
    }
    goto LABEL_132; /*0x10066cb4b*/
  }
  *((_QWORD *)v17 + 3) = *(_QWORD *)&__dst[16]; /*0x10066ca89*/
  v72 = *(_QWORD *)__dst; /*0x10066ca8d*/
  *((_QWORD *)v17 + 2) = *(_QWORD *)&__dst[8]; /*0x10066ca9b*/
  *((_QWORD *)v17 + 1) = v72; /*0x10066ca9f*/
  *(_QWORD *)v17 = 2; /*0x10066caa3*/
  if ( !_InterlockedDecrement64(v94) ) /*0x10066cab1*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::heff7261dabead4fc(&v94); /*0x10066cabe*/
  if ( !_InterlockedDecrement64(v95[0]) ) /*0x10066cac7*/
    alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h12f7101549bdd001(v95); /*0x10066cad8*/
  return v17; /*0x10066c33d*/
}