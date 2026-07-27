// __ZN13codexmate_lib3run @ 0x1006f50c0 | 基线 same-set
volatile signed __int64 *__fastcall codexmate_lib::run::h629ec01040356f4c()
{
  __int64 v0; // r14
  volatile signed __int64 *v1; // rax
  volatile signed __int64 *v2; // r15
  volatile signed __int64 *v3; // r15
  __int64 v4; // r12
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // rsi
  __int64 v9; // r13
  size_t v10; // rbx
  __int64 v11; // rax
  __int64 (__fastcall *v12)(); // rbx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r14
  __int64 v16; // r13
  __int64 v17; // rsi
  int v18; // ebx
  __int64 v19; // rax
  volatile signed __int64 *v20; // rbx
  __int64 v21; // rt0
  void *v22; // rax
  void *v23; // rbx
  __int64 v24; // rbx
  __int64 v25; // r14
  __int64 v26; // rsi
  __int64 v27; // rbx
  __int64 v28; // r14
  __int64 v29; // rsi
  __int64 v30; // rbx
  __int64 v31; // r14
  __int64 v32; // rsi
  __int64 v33; // r14
  __int64 v34; // rbx
  __int64 v35; // rbx
  __int64 v36; // r14
  __int64 v37; // rsi
  __int64 v38; // rbx
  __int64 v39; // r14
  __int64 v40; // rsi
  __int64 v41; // rbx
  __int64 v42; // r14
  __int64 v43; // rsi
  void *v44; // rax
  char v45; // of
  __int64 v46; // r12
  __int64 v47; // rt0
  __int64 v48; // r13
  __int64 v49; // rt0
  __int64 v50; // rbx
  __int64 v51; // r14
  void *v52; // r12
  unsigned __int64 v53; // r15
  _QWORD *v54; // r13
  __int64 v55; // rsi
  __int64 v56; // rsi
  __int64 v57; // rdi
  __int64 v58; // rax
  _QWORD *v59; // r14
  __int64 v60; // rax
  bool v61; // zf
  volatile signed __int64 *result; // rax
  volatile signed __int64 *v63; // rsi
  __int64 v64; // rax
  _QWORD __dst[561]; // [rsp+10h] [rbp-2930h] BYREF
  _QWORD __src[561]; // [rsp+1198h] [rbp-17A8h] BYREF
  _QWORD v67[47]; // [rsp+2320h] [rbp-620h] BYREF
  __int64 v68; // [rsp+2498h] [rbp-4A8h] BYREF
  __int64 v69; // [rsp+24A0h] [rbp-4A0h]
  __int64 v70; // [rsp+24A8h] [rbp-498h]
  __int64 v71; // [rsp+24B0h] [rbp-490h]
  __int64 v72; // [rsp+24B8h] [rbp-488h]
  unsigned __int8 v73; // [rsp+24C0h] [rbp-480h]
  _BYTE v74[96]; // [rsp+25F8h] [rbp-348h] BYREF
  __int64 v75; // [rsp+2658h] [rbp-2E8h]
  __int64 v76; // [rsp+2660h] [rbp-2E0h]
  __int64 v77; // [rsp+2668h] [rbp-2D8h]
  __int64 v78; // [rsp+2670h] [rbp-2D0h]
  __int64 v79; // [rsp+2678h] [rbp-2C8h]
  __int64 v80; // [rsp+2680h] [rbp-2C0h]
  __int64 v81; // [rsp+2688h] [rbp-2B8h]
  __int64 v82; // [rsp+2690h] [rbp-2B0h]
  __int64 v83; // [rsp+2698h] [rbp-2A8h]
  __int64 v84; // [rsp+26A0h] [rbp-2A0h]
  __int64 v85; // [rsp+26A8h] [rbp-298h]
  _BYTE v86[24]; // [rsp+26B0h] [rbp-290h] BYREF
  _QWORD v87[6]; // [rsp+26C8h] [rbp-278h] BYREF
  char v88; // [rsp+26F8h] [rbp-248h]
  _QWORD v89[5]; // [rsp+2700h] [rbp-240h] BYREF
  volatile signed __int64 *v90; // [rsp+2728h] [rbp-218h]
  __int64 v91; // [rsp+2730h] [rbp-210h]
  __int64 v92; // [rsp+2738h] [rbp-208h]
  _QWORD v93[44]; // [rsp+2740h] [rbp-200h] BYREF
  __int64 v94; // [rsp+28A0h] [rbp-A0h] BYREF
  __int64 v95; // [rsp+28A8h] [rbp-98h]
  __int64 v96; // [rsp+28B0h] [rbp-90h]
  volatile signed __int64 *v97; // [rsp+28B8h] [rbp-88h]
  __int64 v98; // [rsp+28C0h] [rbp-80h]
  volatile signed __int64 *v99; // [rsp+28D8h] [rbp-68h] BYREF
  __int64 v100; // [rsp+28E8h] [rbp-58h] BYREF
  __int64 v101; // [rsp+28F0h] [rbp-50h]
  __int64 v102; // [rsp+28F8h] [rbp-48h]
  _QWORD *v103; // [rsp+2900h] [rbp-40h]
  volatile signed __int64 *v104; // [rsp+2908h] [rbp-38h]
  volatile signed __int64 *v105; // [rsp+2910h] [rbp-30h]

  __src[240] = 0; /*0x1006f50d4*/
  __dst[289] = 0; /*0x1006f50e3*/
  codexmate_lib::platform::paths::CodexPaths::resolve_codex_home::h642c67132ee06a4b(__dst); /*0x1006f50fc*/
  codexmate_lib::platform::paths::CodexPaths::from_home::he8326caa95d55437(&__src[2], __dst); /*0x1006f510e*/
  __src[0] = 1; /*0x1006f5113*/
  __src[1] = 1; /*0x1006f511e*/
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006f5129*/
  v1 = (volatile signed __int64 *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(760, 8); /*0x1006f5138*/
  if ( !v1 ) /*0x1006f5140*/
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 760); /*0x1006f65b3*/
  v2 = v1; /*0x1006f5146*/
  memcpy((void *)v1, __src, 0x2F8u); /*0x1006f5158*/
  v99 = v2; /*0x1006f515d*/
  v104 = v2; /*0x1006f5161*/
  v3 = v2 + 2; /*0x1006f5165*/
  codexmate_lib::platform::debug_log::init::h8ca1bd936d4a4f92(v3); /*0x1006f516c*/
  LODWORD(v67[0]) = std::process::id::ha72f58ec62264e78(); /*0x1006f5176*/
  std::env::current_exe::h29d0ba355065eb9c(__src); /*0x1006f5183*/
  v4 = __src[0]; /*0x1006f5188*/
  if ( __OFSUB__(-__src[0], 1) ) /*0x1006f5192*/
  {
    if ( (__src[1] & 3) == 1 ) /*0x1006f51a6*/
    {
      v5 = __src[1] - 1LL; /*0x1006f51ac*/
      v6 = *(_QWORD *)(__src[1] - 1LL); /*0x1006f51b0*/
      v7 = *(_QWORD *)(__src[1] + 7LL); /*0x1006f51b4*/
      if ( *(_QWORD *)v7 ) /*0x1006f51b8*/
        (*(void (__fastcall **)(__int64))v7)(v6); /*0x1006f51c4*/
      v8 = *(_QWORD *)(v7 + 8); /*0x1006f51c6*/
      if ( v8 ) /*0x1006f51ce*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v8, *(_QWORD *)(v7 + 16)); /*0x1006f51d8*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, 24, 8); /*0x1006f51ea*/
    }
    goto LABEL_13; /*0x1006f51ef*/
  }
  v9 = __src[1]; /*0x1006f51f1*/
  core::str::converts::from_utf8::hb32deb9559450f6e(__src, __src[1], __src[2]); /*0x1006f5209*/
  if ( LODWORD(__src[0]) == 1 ) /*0x1006f5215*/
  {
    v10 = 0x8000000000000000LL; /*0x1006f521b*/
    if ( !v4 ) /*0x1006f5228*/
      goto LABEL_12; /*0x1006f5228*/
    goto LABEL_11; /*0x1006f5228*/
  }
  v10 = __src[2]; /*0x1006f62f3*/
  if ( __src[2] < 0LL ) /*0x1006f62fd*/
  {
    v57 = 0; /*0x1006f6303*/
    goto LABEL_97; /*0x1006f6303*/
  }
  v63 = (volatile signed __int64 *)__src[1]; /*0x1006f6554*/
  if ( __src[2] ) /*0x1006f655b*/
  {
    v105 = (volatile signed __int64 *)__src[1]; /*0x1006f655d*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006f6561*/
    v64 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v10, 1); /*0x1006f656e*/
    v57 = 1; /*0x1006f6573*/
    if ( !v64 ) /*0x1006f657b*/
LABEL_97:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v57, v10); /*0x1006f6305*/
    v0 = v64; /*0x1006f6581*/
    v63 = v105; /*0x1006f6584*/
  }
  else
  {
    v0 = 1; /*0x1006f658a*/
  }
  memcpy((void *)v0, (const void *)v63, v10); /*0x1006f6596*/
  if ( v4 ) /*0x1006f659e*/
LABEL_11:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v4, 1); /*0x1006f522a*/
LABEL_12:
  if ( v10 == 0x8000000000000000LL ) /*0x1006f524e*/
  {
LABEL_13:
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006f5250*/
    v10 = 9; /*0x1006f5255*/
    v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(9, 1); /*0x1006f5264*/
    if ( !v11 ) /*0x1006f526c*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 9); /*0x1006f671c*/
    v0 = v11; /*0x1006f5272*/
    *(_QWORD *)v11 = 0x6E776F6E6B6E753CLL; /*0x1006f527f*/
    *(_BYTE *)(v11 + 8) = 62; /*0x1006f5282*/
  }
  __dst[0] = v10; /*0x1006f5287*/
  __dst[1] = v0; /*0x1006f528e*/
  __dst[2] = v10; /*0x1006f5295*/
  __src[0] = v67; /*0x1006f52a3*/
  __src[1] = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u32$GT$::fmt::h898801e8f5fd63ed; /*0x1006f52b1*/
  __src[2] = __dst; /*0x1006f52b8*/
  v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1006f52bf*/
  __src[3] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1006f52c6*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v86, &unk_1017C4008, __src); /*0x1006f52e2*/
  if ( __dst[0] ) /*0x1006f52f1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], __dst[0], 1); /*0x1006f52ff*/
  codexmate_lib::platform::debug_log::app_event::hca94542905aced18("appstarted", 3, "started", 7, v86); /*0x1006f5323*/
  v13 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h1799bcb22c1ee820(v3); /*0x1006f532b*/
  if ( v13 /*0x1006f5397*/
    || (v13 = codexmate_lib::platform::paths::harden_private_file::h423ff868481465b0(
                *((void **)v104 + 6),
                *((_QWORD *)v104 + 7))) != 0
    || (v13 = codexmate_lib::platform::paths::harden_private_file::h423ff868481465b0(
                *((void **)v104 + 9),
                *((_QWORD *)v104 + 10))) != 0
    || (v13 = codexmate_lib::platform::paths::harden_private_tree::h9fe6ae7b2bdd290e(
                *((_QWORD *)v104 + 27),
                *((_QWORD *)v104 + 28))) != 0
    || (v13 = codexmate_lib::platform::paths::harden_private_tree::h9fe6ae7b2bdd290e(
                *((_QWORD *)v104 + 75),
                *((_QWORD *)v104 + 76))) != 0 )
  {
    v67[0] = v13; /*0x1006f539d*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1006f53b2*/
    {
      __dst[0] = v67; /*0x1006f53b8*/
      __dst[1] = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1006f53c6*/
      __src[6] = 2; /*0x1006f53cd*/
      __src[7] = &unk_10160615A; /*0x1006f53df*/
      __src[8] = 13; /*0x1006f53e6*/
      __src[10] = &unk_1017C4017; /*0x1006f53f8*/
      __src[11] = __dst; /*0x1006f53ff*/
      __src[0] = 0; /*0x1006f5406*/
      __src[1] = &unk_10160615A; /*0x1006f5411*/
      __src[2] = 13; /*0x1006f5418*/
      __src[3] = 0; /*0x1006f5423*/
      __src[4] = "src/lib.rs"; /*0x1006f5435*/
      __src[5] = 10; /*0x1006f543c*/
      __src[9] = 0x10500000001LL; /*0x1006f5451*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v100, __src); /*0x1006f5463*/
      v13 = v67[0]; /*0x1006f5468*/
    }
    if ( (v13 & 3) == 1 ) /*0x1006f5477*/
    {
      v14 = v13 - 1; /*0x1006f547c*/
      v15 = *(_QWORD *)(v13 - 1); /*0x1006f5480*/
      v16 = *(_QWORD *)(v13 + 7); /*0x1006f5484*/
      if ( *(_QWORD *)v16 ) /*0x1006f5488*/
        (*(void (__fastcall **)(__int64))v16)(v15); /*0x1006f5494*/
      v17 = *(_QWORD *)(v16 + 8); /*0x1006f5496*/
      if ( v17 ) /*0x1006f549d*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v15, v17, *(_QWORD *)(v16 + 16)); /*0x1006f54a6*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, 24, 8); /*0x1006f54b8*/
      v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1006f54bd*/
    }
  }
  codexmate_lib::platform::single_instance::acquire::h8eb3ff90bed1750e(v93, v3); /*0x1006f54d8*/
  if ( v93[0] == 0x8000000000000000LL ) /*0x1006f54ee*/
  {
    v18 = v93[1]; /*0x1006f54f4*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006f54fa*/
    v19 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8); /*0x1006f5509*/
    if ( v19 ) /*0x1006f5511*/
    {
      *(_QWORD *)v19 = 1; /*0x1006f5517*/
      *(_QWORD *)(v19 + 8) = 1; /*0x1006f551e*/
      *(_QWORD *)(v19 + 16) = 0; /*0x1006f5526*/
      *(_DWORD *)(v19 + 24) = v18; /*0x1006f552e*/
      v103 = (_QWORD *)v19; /*0x1006f5531*/
      if ( _InterlockedIncrement64(v104) > 0 ) /*0x1006f553d*/
      {
        codexmate_lib::core::relay::manager::RelayManager::new::h83030f45c801f289(v89); /*0x1006f554a*/
        v20 = v90; /*0x1006f554f*/
        v21 = _InterlockedIncrement64(v90); /*0x1006f5556*/
        if ( !((v21 < 0) ^ v45 | (v21 == 0)) ) /*0x1006f555a*/
        {
          v97 = v20; /*0x1006f5560*/
          tauri_plugin_updater::Builder::new::h7e3c6a3daecb3f2d(v74); /*0x1006f556e*/
          v87[0] = 0; /*0x1006f5573*/
          v87[1] = 8; /*0x1006f557e*/
          v87[2] = 0; /*0x1006f5589*/
          v87[3] = 0x8000000000000000LL; /*0x1006f559e*/
          v88 = 0; /*0x1006f55a5*/
          tauri_plugin_autostart::Builder::arg::h99e6cef234419116( /*0x1006f55c6*/
            __src,
            v87,
            &anon_b756970ae374bf3e9e8d782d8f9d3f8c_18,
            8);
          tauri_plugin_autostart::Builder::build::ha7e7b25266cd9a9f(v67); /*0x1006f55d9*/
          _$LT$tauri..app..Builder$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$GT$$u20$as$u20$core..default..Default$GT$::default::hfd18df50359f65ff( /*0x1006f55e5*/
            __dst,
            __src);
          tauri_plugin_deep_link::init::hc830f4f754316669(__src); /*0x1006f55f1*/
          tauri::app::Builder$LT$R$GT$::plugin::h5b87b96e5aea7b28(v93); /*0x1006f560b*/
          tauri_plugin_dialog::init::hee61ee21e7579bd7(__src); /*0x1006f5617*/
          tauri::app::Builder$LT$R$GT$::plugin::h64f773a539085bcb(__dst); /*0x1006f5631*/
          v93[0] = 0; /*0x1006f5636*/
          v93[1] = 4; /*0x1006f5641*/
          v93[2] = 0; /*0x1006f564c*/
          v93[3] = 0; /*0x1006f5657*/
          tauri_plugin_global_shortcut::Builder$LT$R$GT$::build::h6f8c41b1b382cc30(__src); /*0x1006f5670*/
          tauri::app::Builder$LT$R$GT$::plugin::h64f773a539085bcb(v93); /*0x1006f568a*/
          v105 = v20; /*0x1006f568f*/
          tauri_plugin_process::init::h92c16ef9541b8d3b(__src); /*0x1006f569a*/
          tauri::app::Builder$LT$R$GT$::plugin::h64f773a539085bcb(&v68); /*0x1006f56b4*/
          tauri::plugin::Builder$LT$R$C$C$GT$::new::hbb0afccf66433dac(__src, &unk_1016724C2, 5); /*0x1006f56cc*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006f56d1*/
          v22 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(608, 1); /*0x1006f56e0*/
          if ( !v22 ) /*0x1006f56e8*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 608); /*0x1006f672d*/
          v23 = v22; /*0x1006f56ee*/
          memcpy(v22, &unk_1016724C7, 0x260u); /*0x1006f5700*/
          if ( __src[0] != 0x8000000000000000LL && __src[0] ) /*0x1006f571e*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[1], __src[0], 1); /*0x1006f572c*/
          __src[0] = 608; /*0x1006f5731*/
          __src[1] = v23; /*0x1006f573c*/
          __src[2] = 608; /*0x1006f5743*/
          LOBYTE(__src[3]) = 1; /*0x1006f574e*/
          memcpy(__dst, __src, 0xE0u); /*0x1006f5768*/
          v24 = __dst[6]; /*0x1006f576d*/
          v25 = __dst[7]; /*0x1006f5774*/
          if ( *(_QWORD *)__dst[7] ) /*0x1006f577b*/
            (*(void (__fastcall **)(_QWORD))__dst[7])(__dst[6]); /*0x1006f5786*/
          v26 = *(_QWORD *)(v25 + 8); /*0x1006f5788*/
          if ( v26 ) /*0x1006f578f*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v24, v26, *(_QWORD *)(v25 + 16)); /*0x1006f5798*/
          __dst[6] = 1; /*0x1006f579d*/
          __dst[7] = &anon_0df76e0cec988e6dc281ac0519b88803_906; /*0x1006f57af*/
          memcpy(__src, __dst, 0xE0u); /*0x1006f57c9*/
          v27 = __src[24]; /*0x1006f57ce*/
          v28 = __src[25]; /*0x1006f57d5*/
          __src[24] = 1; /*0x1006f57dc*/
          __src[25] = &anon_0df76e0cec988e6dc281ac0519b88803_946; /*0x1006f57ee*/
          if ( v27 ) /*0x1006f57f8*/
          {
            if ( *(_QWORD *)v28 ) /*0x1006f57fa*/
              (*(void (__fastcall **)(__int64))v28)(v27); /*0x1006f5805*/
            v29 = *(_QWORD *)(v28 + 8); /*0x1006f5807*/
            if ( v29 ) /*0x1006f580e*/
              _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v29, *(_QWORD *)(v28 + 16)); /*0x1006f5817*/
          }
          memcpy(__dst, __src, 0xE0u); /*0x1006f582f*/
          v30 = __dst[16]; /*0x1006f5834*/
          v31 = __dst[17]; /*0x1006f583b*/
          if ( *(_QWORD *)__dst[17] ) /*0x1006f5842*/
            (*(void (__fastcall **)(_QWORD))__dst[17])(__dst[16]); /*0x1006f584d*/
          v32 = *(_QWORD *)(v31 + 8); /*0x1006f584f*/
          if ( v32 ) /*0x1006f5856*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v30, v32, *(_QWORD *)(v31 + 16)); /*0x1006f585f*/
          __dst[16] = 1; /*0x1006f5864*/
          __dst[17] = &anon_0df76e0cec988e6dc281ac0519b88803_953; /*0x1006f5876*/
          memcpy(v93, __dst, 0xE0u); /*0x1006f5893*/
          tauri::plugin::Builder$LT$R$C$C$GT$::try_build::hbfd07151f69084d8(__src, v93); /*0x1006f58a2*/
          if ( LODWORD(__src[0]) == 4 ) /*0x1006f58ae*/
          {
            __dst[2] = __src[3]; /*0x1006f65f3*/
            __dst[1] = __src[2]; /*0x1006f6608*/
            __dst[0] = __src[1]; /*0x1006f660f*/
            core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006f6637*/
              "valid pluginupdater",
              12,
              __dst,
              &anon_b756970ae374bf3e9e8d782d8f9d3f8c_404,
              &anon_b756970ae374bf3e9e8d782d8f9d3f8c_316);
          }
          memcpy(__dst, __src, 0x178u); /*0x1006f58ca*/
          tauri::app::Builder$LT$R$GT$::plugin::he414fa2730c69e7a(v93); /*0x1006f58e0*/
          memcpy(__src, v67, 0x178u); /*0x1006f58fb*/
          tauri::app::Builder$LT$R$GT$::plugin::h64f773a539085bcb(&v68); /*0x1006f5911*/
          v33 = v84; /*0x1006f5916*/
          v34 = v85; /*0x1006f591d*/
          v98 = v81; /*0x1006f592b*/
          v100 = v84; /*0x1006f5944*/
          v101 = v85; /*0x1006f5948*/
          tauri::plugin::Builder$LT$R$C$C$GT$::new::h09ed0cf5013d11f5(__src, "updater", 7); /*0x1006f595f*/
          v93[17] = v83; /*0x1006f596f*/
          v93[16] = v82; /*0x1006f597d*/
          v93[15] = v81; /*0x1006f5984*/
          v93[12] = v75; /*0x1006f5993*/
          v93[13] = v76; /*0x1006f599a*/
          v93[14] = v77; /*0x1006f59a5*/
          v93[19] = v79; /*0x1006f59b4*/
          v93[18] = v78; /*0x1006f59bb*/
          v93[20] = v80; /*0x1006f59c6*/
          v93[21] = v33; /*0x1006f59cd*/
          v93[22] = v34; /*0x1006f59d4*/
          qmemcpy(v93, v74, 0x60u); /*0x1006f59f1*/
          tauri::plugin::Builder$LT$R$C$C$GT$::setup::h7b294483ceaf9024(__dst, __src, v93); /*0x1006f5a02*/
          v35 = __dst[6]; /*0x1006f5a07*/
          v36 = __dst[7]; /*0x1006f5a0e*/
          if ( *(_QWORD *)__dst[7] ) /*0x1006f5a15*/
            (*(void (__fastcall **)(_QWORD))__dst[7])(__dst[6]); /*0x1006f5a20*/
          v37 = *(_QWORD *)(v36 + 8); /*0x1006f5a22*/
          if ( v37 ) /*0x1006f5a29*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35, v37, *(_QWORD *)(v36 + 16)); /*0x1006f5a32*/
          __dst[6] = 1; /*0x1006f5a37*/
          __dst[7] = &anon_0df76e0cec988e6dc281ac0519b88803_918; /*0x1006f5a49*/
          memcpy(v93, __dst, 0xE0u); /*0x1006f5a66*/
          tauri::plugin::Builder$LT$R$C$C$GT$::try_build::hbfd07151f69084d8(__src, v93); /*0x1006f5a75*/
          if ( LODWORD(__src[0]) == 4 ) /*0x1006f5a81*/
          {
            __dst[2] = __src[3]; /*0x1006f6648*/
            __dst[1] = __src[2]; /*0x1006f665d*/
            __dst[0] = __src[1]; /*0x1006f6664*/
            core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006f668c*/
              "valid pluginupdater",
              12,
              __dst,
              &anon_b756970ae374bf3e9e8d782d8f9d3f8c_404,
              &anon_b756970ae374bf3e9e8d782d8f9d3f8c_316);
          }
          memcpy(__dst, __src, 0x178u); /*0x1006f5a9d*/
          tauri::app::Builder$LT$R$GT$::plugin::h4230139c82e28f2a(v93); /*0x1006f5ab3*/
          codexmate_lib::platform::paths::CodexPaths::resolve_codex_home::h642c67132ee06a4b(__src); /*0x1006f5ac3*/
          codexmate_lib::platform::paths::CodexPaths::from_home::he8326caa95d55437(__dst, __src); /*0x1006f5ad6*/
          memcpy(&__src[2], __dst, 0x2E8u); /*0x1006f5aee*/
          __src[0] = 0; /*0x1006f5af3*/
          LOBYTE(__src[1]) = 0; /*0x1006f5afe*/
          tauri::app::Builder$LT$R$GT$::manage::h97d14f3a98688897(&v68, v93, __src); /*0x1006f5b1a*/
          codexmate_lib::core::voice::runtime::VoiceRuntimeInner::new::h7f3f6820472582f0(&__dst[2]); /*0x1006f5b26*/
          __dst[0] = 0; /*0x1006f5b2b*/
          LOBYTE(__dst[1]) = 0; /*0x1006f5b36*/
          memcpy(&__src[4], __dst, 0x370u); /*0x1006f5b50*/
          __src[0] = 1; /*0x1006f5b55*/
          __src[1] = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_991; /*0x1006f5b67*/
          __src[2] = 1; /*0x1006f5b6e*/
          __src[3] = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_992; /*0x1006f5b80*/
          tauri::app::Builder$LT$R$GT$::manage::h7a8a7e52fde76f4b(__dst, &v68, __src); /*0x1006f5b9c*/
          v93[0] = 0; /*0x1006f5ba1*/
          LOBYTE(v93[1]) = 0; /*0x1006f5bac*/
          v93[2] = 0x8000000000000000LL; /*0x1006f5bbd*/
          tauri::app::Builder$LT$R$GT$::manage::h901cd972d8c32e60(__src, __dst, v93); /*0x1006f5bd9*/
          tauri::app::Builder$LT$R$GT$::manage::h28696b38923860f1(__dst, __src); /*0x1006f5bef*/
          v93[7] = v92; /*0x1006f5bfb*/
          v93[6] = v91; /*0x1006f5c09*/
          v93[5] = v90; /*0x1006f5c17*/
          v93[4] = v89[4]; /*0x1006f5c25*/
          v93[3] = v89[3]; /*0x1006f5c33*/
          v93[2] = v89[2]; /*0x1006f5c41*/
          v93[1] = v89[1]; /*0x1006f5c56*/
          v93[0] = v89[0]; /*0x1006f5c5d*/
          tauri::app::Builder$LT$R$GT$::manage::ha21d0fed26199e53(__src, __dst, v93); /*0x1006f5c79*/
          v38 = __src[23]; /*0x1006f5c7e*/
          v39 = __src[24]; /*0x1006f5c85*/
          if ( *(_QWORD *)__src[24] ) /*0x1006f5c8c*/
            (*(void (__fastcall **)(_QWORD))__src[24])(__src[23]); /*0x1006f5c97*/
          v40 = *(_QWORD *)(v39 + 8); /*0x1006f5c99*/
          if ( v40 ) /*0x1006f5ca0*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v38, v40, *(_QWORD *)(v39 + 16)); /*0x1006f5ca9*/
          __src[23] = 1; /*0x1006f5cae*/
          __src[24] = &anon_0df76e0cec988e6dc281ac0519b88803_742; /*0x1006f5cc0*/
          memcpy(__dst, __src, 0x160u); /*0x1006f5cda*/
          v41 = __dst[21]; /*0x1006f5cdf*/
          v42 = __dst[22]; /*0x1006f5ce6*/
          if ( *(_QWORD *)__dst[22] ) /*0x1006f5ced*/
            (*(void (__fastcall **)(_QWORD))__dst[22])(__dst[21]); /*0x1006f5cf8*/
          v43 = *(_QWORD *)(v42 + 8); /*0x1006f5cfa*/
          if ( v43 ) /*0x1006f5d01*/
            _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v41, v43, *(_QWORD *)(v42 + 16)); /*0x1006f5d0a*/
          __dst[21] = 1; /*0x1006f5d0f*/
          __dst[22] = &anon_0df76e0cec988e6dc281ac0519b88803_740; /*0x1006f5d21*/
          memcpy(v93, __dst, sizeof(v93)); /*0x1006f5d3b*/
          __src[2] = 0x8000000000000000LL; /*0x1006f5d4a*/
          __src[0] = 0; /*0x1006f5d51*/
          LOBYTE(__src[5]) = 0; /*0x1006f5d5c*/
          _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006f5d63*/
          v44 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 1); /*0x1006f5d72*/
          if ( !v44 ) /*0x1006f5d7a*/
            alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 32); /*0x1006f673e*/
          qmemcpy(v44, "generated tauri context creation", 32); /*0x1006f5db4*/
          __dst[0] = 32; /*0x1006f5db7*/
          __dst[1] = v44; /*0x1006f5dc2*/
          __dst[2] = 32; /*0x1006f5dc9*/
          std::thread::builder::Builder::name::h877bc8a9f9cdb5c8(&v68, __src, __dst); /*0x1006f5def*/
          v68 = 1; /*0x1006f5df4*/
          v69 = 0x800000; /*0x1006f5dff*/
          __src[0] = &unk_101607514; /*0x1006f5e11*/
          __src[1] = 7; /*0x1006f5e18*/
          __src[2] = &off_101968A80; /*0x1006f5e2a*/
          __src[3] = 34; /*0x1006f5e31*/
          __src[4] = 0xB33780D1DB3DCB27LL; /*0x1006f5e46*/
          __src[5] = &unk_101968EC0; /*0x1006f5e54*/
          __src[6] = 31; /*0x1006f5e5b*/
          __src[7] = 4; /*0x1006f5e66*/
          __src[8] = 0; /*0x1006f5e71*/
          __src[9] = 8; /*0x1006f5e7c*/
          __src[10] = 0; /*0x1006f5e87*/
          __src[11] = 0xB33780D1DB3DCB27LL; /*0x1006f5e92*/
          v102 = v72; /*0x1006f5ea0*/
          v101 = v71; /*0x1006f5eb2*/
          v100 = v70; /*0x1006f5eb6*/
          std::thread::lifecycle::spawn_unchecked::hd3646ad5bd9d5b61(__dst, &v100, 1, 0x800000, v73, 0, __src); /*0x1006f5ede*/
          if ( !__dst[0] ) /*0x1006f5ef4*/
          {
            __src[0] = __dst[1]; /*0x1006f6745*/
            core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006f676d*/
              "unable to create thread with 8MiB stackthe generated Tauri `Context` panicked during creation\n",
              39,
              __src,
              &anon_b756970ae374bf3e9e8d782d8f9d3f8c_402,
              &off_1019691F0);
          }
          v100 = __dst[0]; /*0x1006f5f01*/
          v101 = __dst[1]; /*0x1006f5f05*/
          v102 = __dst[2]; /*0x1006f5f09*/
          std::thread::lifecycle::JoinInner$LT$T$GT$::join::hdaa8514e08a27cf3(__src, &v100); /*0x1006f5f18*/
          if ( LODWORD(__src[0]) == 2 ) /*0x1006f5f24*/
          {
            std::io::stdio::_eprint::hbd0be87d5097bd2e("the generated Tauri `Context` panicked during creation\n", 111); /*0x1006f6780*/
            std::process::exit::h9829c42cb90cc1e1(101); /*0x1006f678a*/
          }
          memcpy(__dst, __src, sizeof(__dst)); /*0x1006f5f40*/
          tauri::app::Builder$LT$R$GT$::build::h08a6223a3a10e6b3(__src, v93, __dst); /*0x1006f5f56*/
          if ( LODWORD(__src[0]) == 3 ) /*0x1006f5f62*/
          {
            __dst[5] = __src[6]; /*0x1006f669d*/
            __dst[4] = __src[5]; /*0x1006f66ab*/
            __dst[3] = __src[4]; /*0x1006f66b9*/
            __dst[2] = __src[3]; /*0x1006f66c7*/
            __dst[1] = __src[2]; /*0x1006f66dc*/
            __dst[0] = __src[1]; /*0x1006f66e3*/
            core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1006f670b*/
              "error while building AiMaMi[AiMaMi] failed to activate the running instance",
              27,
              __dst,
              &off_101969E78,
              &off_1019691A8);
          }
          memcpy(__dst, __src, 0x168u); /*0x1006f5f77*/
          _$LT$tauri_runtime_wry..Context$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h91d1d99cc09ce24f( /*0x1006f5f86*/
            v93,
            __dst);
          v46 = __dst[17]; /*0x1006f5f8b*/
          v47 = _InterlockedIncrement64((volatile signed __int64 *)__dst[17]); /*0x1006f5f92*/
          if ( !((v47 < 0) ^ v45 | (v47 == 0)) ) /*0x1006f5f97*/
          {
            v48 = __dst[18]; /*0x1006f5f9d*/
            v49 = _InterlockedIncrement64((volatile signed __int64 *)__dst[18]); /*0x1006f5fa4*/
            if ( !((v49 < 0) ^ v45 | (v49 == 0)) ) /*0x1006f5fa9*/
            {
              memcpy(__src, v93, 0x88u); /*0x1006f5fc8*/
              __src[17] = v46; /*0x1006f5fcd*/
              __src[18] = v48; /*0x1006f5fd4*/
              codexmate_lib::platform::single_instance::start_activation_watcher::h6d311a45054e369b(&v94, __src); /*0x1006f5fe5*/
              if ( v94 == 0x8000000000000000LL ) /*0x1006f5ffb*/
              {
                v50 = v95; /*0x1006f6001*/
              }
              else
              {
                v93[2] = v96; /*0x1006f6319*/
                v93[1] = v95; /*0x1006f632e*/
                v93[0] = v94; /*0x1006f6335*/
                if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1006f634a*/
                {
                  v68 = (__int64)v93; /*0x1006f6350*/
                  v69 = (__int64)_$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1006f635e*/
                  __src[6] = 2; /*0x1006f6365*/
                  __src[7] = &unk_10160615A; /*0x1006f6377*/
                  __src[8] = 13; /*0x1006f637e*/
                  __src[10] = &unk_1017C4090; /*0x1006f6390*/
                  __src[11] = &v68; /*0x1006f6397*/
                  __src[0] = 0; /*0x1006f639e*/
                  __src[1] = &unk_10160615A; /*0x1006f63a9*/
                  __src[2] = 13; /*0x1006f63b0*/
                  __src[3] = 0; /*0x1006f63bb*/
                  __src[4] = "src/lib.rs"; /*0x1006f63cd*/
                  __src[5] = 10; /*0x1006f63d4*/
                  __src[9] = 0x25700000001LL; /*0x1006f63e9*/
                  _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v100, __src); /*0x1006f63fb*/
                }
                v50 = v93[1]; /*0x1006f6407*/
                if ( !__OFSUB__(-v93[0], 1) ) /*0x1006f6414*/
                {
                  if ( v93[0] ) /*0x1006f6416*/
                    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v93[1], v93[0], 1); /*0x1006f6420*/
                  v50 = 0; /*0x1006f6425*/
                }
              }
              __src[0] = 1; /*0x1006f6427*/
              __src[1] = 1; /*0x1006f6432*/
              __src[2] = 0; /*0x1006f643d*/
              __src[3] = v50; /*0x1006f6448*/
              _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(); /*0x1006f644f*/
              v58 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(32, 8); /*0x1006f645e*/
              if ( !v58 ) /*0x1006f6466*/
                alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32); /*0x1006f65e2*/
              v59 = (_QWORD *)v58; /*0x1006f646c*/
              *(_QWORD *)(v58 + 24) = __src[3]; /*0x1006f6476*/
              *(_QWORD *)(v58 + 16) = __src[2]; /*0x1006f6481*/
              v60 = __src[0]; /*0x1006f6485*/
              v59[1] = __src[1]; /*0x1006f6493*/
              *v59 = v60; /*0x1006f6497*/
              v93[0] = v59; /*0x1006f649a*/
              v61 = (*v103)++ == -1; /*0x1006f64a5*/
              if ( !v61 ) /*0x1006f64a8*/
              {
                v61 = (*v59)++ == -1; /*0x1006f64b2*/
                if ( !v61 ) /*0x1006f64b5*/
                {
                  memcpy(__src, __dst, 0x168u); /*0x1006f64ca*/
                  tauri::app::App$LT$R$GT$::run::h7066b1135643a0d3(__src); /*0x1006f64d8*/
                }
              }
            }
          }
        }
      }
      BUG(); /*0x1006f678f*/
    }
    alloc::alloc::handle_alloc_error::h450e44845847d219(8, 32); /*0x1006f65c7*/
  }
  v67[2] = v93[2]; /*0x1006f6014*/
  v67[1] = v93[1]; /*0x1006f6029*/
  v67[0] = v93[0]; /*0x1006f6030*/
  if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1006f6045*/
  {
    __dst[0] = v67; /*0x1006f604b*/
    __dst[1] = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x1006f6052*/
    __src[6] = 2; /*0x1006f6059*/
    __src[7] = &unk_10160615A; /*0x1006f606b*/
    __src[8] = 13; /*0x1006f6072*/
    __src[10] = &unk_1017C4056; /*0x1006f6084*/
    __src[11] = __dst; /*0x1006f608b*/
    __src[0] = 0; /*0x1006f6092*/
    __src[1] = &unk_10160615A; /*0x1006f609d*/
    __src[2] = 13; /*0x1006f60a4*/
    __src[3] = 0; /*0x1006f60af*/
    __src[4] = "src/lib.rs"; /*0x1006f60c1*/
    __src[5] = 10; /*0x1006f60c8*/
    __src[9] = 0x10F00000001LL; /*0x1006f60dd*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v100, __src); /*0x1006f60ef*/
  }
  std::env::args::he28e7e7a8b8590aa(__src); /*0x1006f60fb*/
  while ( 1 ) /*0x1006f6116*/
  {
    _$LT$std..env..Args$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb6ffda47e6f9e9ab(__dst, __src); /*0x1006f6116*/
    v51 = __dst[0]; /*0x1006f611b*/
    if ( __dst[0] == 0x8000000000000000LL ) /*0x1006f612f*/
      break; /*0x1006f612f*/
    v52 = (void *)__dst[1]; /*0x1006f6131*/
    v12 = (__int64 (__fastcall *)())__dst[2]; /*0x1006f6138*/
    if ( __dst[2] >= 9u && !(*(_QWORD *)__dst[1] ^ 0x2F3A696D616D6961LL | *(unsigned __int8 *)(__dst[1] + 8LL) ^ 0x2FLL) ) /*0x1006f6163*/
      goto LABEL_82; /*0x1006f6163*/
    if ( __dst[0] ) /*0x1006f6168*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], __dst[0], 1); /*0x1006f6175*/
  }
  v52 = nullptr; /*0x1006f617c*/
LABEL_82:
  if ( __src[3] != __src[1] ) /*0x1006f61a3*/
  {
    v53 = (__src[3] - __src[1]) / 0x18uLL; /*0x1006f61a8*/
    v54 = (_QWORD *)(__src[1] + 8LL); /*0x1006f61ac*/
    do /*0x1006f61c7*/
    {
      v55 = *(v54 - 1); /*0x1006f61c9*/
      if ( v55 ) /*0x1006f61d0*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v54, v55, 1); /*0x1006f61db*/
      v54 += 3; /*0x1006f61c0*/
      --v53; /*0x1006f61c4*/
    }
    while ( v53 ); /*0x1006f61c7*/
  }
  if ( __src[2] ) /*0x1006f61ec*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__src[0], 24LL * __src[2], 8); /*0x1006f6202*/
  if ( !(unsigned __int8)codexmate_lib::platform::single_instance::request_existing_instance_activation_with_url::h28b76a3b410e291e( /*0x1006f6228*/
                           v52,
                           (size_t)v12)
    && log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 2u )
  {
    __src[6] = 2; /*0x1006f622e*/
    __src[7] = &unk_10160615A; /*0x1006f6240*/
    __src[8] = 13; /*0x1006f6247*/
    __src[10] = "[AiMaMi] failed to activate the running instance"; /*0x1006f6259*/
    __src[11] = 97; /*0x1006f6260*/
    __src[0] = 0; /*0x1006f626b*/
    __src[1] = &unk_10160615A; /*0x1006f6276*/
    __src[2] = 13; /*0x1006f627d*/
    __src[3] = 0; /*0x1006f6288*/
    __src[4] = "src/lib.rs"; /*0x1006f629a*/
    __src[5] = 10; /*0x1006f62a1*/
    __src[9] = 0x11900000001LL; /*0x1006f62b6*/
    _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v100, __src); /*0x1006f62c8*/
  }
  if ( 2 * v51 ) /*0x1006f62cd*/
  {
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v52, v51, 1); /*0x1006f650d*/
    v56 = v67[0]; /*0x1006f6512*/
    if ( !v67[0] ) /*0x1006f651c*/
      goto LABEL_110; /*0x1006f651c*/
    goto LABEL_109; /*0x1006f651c*/
  }
  v56 = v67[0]; /*0x1006f62de*/
  if ( v67[0] ) /*0x1006f62e8*/
LABEL_109:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v67[1], v56, 1); /*0x1006f651e*/
LABEL_110:
  result = v104; /*0x1006f652f*/
  if ( !_InterlockedDecrement64(v104) ) /*0x1006f6533*/
    return (volatile signed __int64 *)alloc::sync::Arc$LT$T$C$A$GT$::drop_slow::h6be3d0f96c4a6214(&v99); /*0x1006f653d*/
  return result; /*0x1006f6542*/
}