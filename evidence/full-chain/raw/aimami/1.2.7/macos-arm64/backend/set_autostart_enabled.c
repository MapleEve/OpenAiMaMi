// source: AiMaMi 1.2.7 macos-arm64 release; sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::commands::autostart::set_autostart_enabled::h532aa956cd0a676f; addr: 0x10039fff0; session: <审计会话>; decompiled_at: 2026-10-26T03:34:28Z
__int64 __fastcall codexmate_lib::commands::autostart::set_autostart_enabled::h532aa956cd0a676f(
        __int64 a1,
        __int64 a2,
        __int64 *a3,
        char a4,
        double a5)
{
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // rcx
  int v12; // r12d
  __int64 *v13; // r15
  char v14; // cl
  __int64 v15; // r12
  __int64 v16; // r13
  char v17; // r15
  int v18; // eax
  __int64 v19; // r15
  __int64 v20; // r12
  __int64 v21; // rbx
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 *v28; // rcx
  __int64 v29; // rcx
  char v30; // al
  __int64 v31; // rax
  __int64 v32; // rdx
  char v33; // al
  _QWORD __dst[18]; // [rsp+8h] [rbp-198h] BYREF
  char v35; // [rsp+9Ah] [rbp-106h]
  _QWORD v36[12]; // [rsp+A0h] [rbp-100h] BYREF
  _QWORD v37[3]; // [rsp+100h] [rbp-A0h] BYREF
  __int64 v38; // [rsp+118h] [rbp-88h] BYREF
  __int64 v39; // [rsp+120h] [rbp-80h]
  __int64 v40; // [rsp+128h] [rbp-78h]
  __int64 v41; // [rsp+130h] [rbp-70h]
  __int64 v42; // [rsp+138h] [rbp-68h] BYREF
  __int64 v43; // [rsp+140h] [rbp-60h]
  __int64 v44; // [rsp+148h] [rbp-58h]
  __int64 *v45; // [rsp+150h] [rbp-50h] BYREF
  __int64 v46; // [rsp+158h] [rbp-48h]
  __int64 v47; // [rsp+160h] [rbp-40h]
  int v48; // [rsp+16Ch] [rbp-34h]
  __int64 *v49; // [rsp+170h] [rbp-30h]

  v49 = a3; /*0x1003a0007*/
  v41 = a2; /*0x1003a000e*/
  v7 = tauri::state::StateManager::try_get::hbf7082e2b678b07a(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 4872LL) + 16LL); /*0x1003a0024*/
  if ( !v7 ) /*0x1003a002c*/
  {
    v36[0] = &anon_1d5e2ba954832094e55fcdce7f3204cb_1781; /*0x1003a029e*/
    v36[1] = 41; /*0x1003a02a5*/
    __dst[0] = v36; /*0x1003a02b7*/
    __dst[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf9b2328d4da45b5a; /*0x1003a02c5*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1003a02e1*/
      &anon_1d5e2ba954832094e55fcdce7f3204cb_1782,
      __dst,
      &anon_1d5e2ba954832094e55fcdce7f3204cb_1783);
  }
  if ( a4 ) /*0x1003a0035*/
    tauri_plugin_autostart::AutoLaunchManager::enable::h7cfc24bdcadcb496(v37, v7); /*0x1003a0041*/
  else
    tauri_plugin_autostart::AutoLaunchManager::disable::hf6be777386cd8bbd(v37, v7); /*0x1003a0052*/
  if ( v37[0] == 0x8000000000000001LL ) /*0x1003a006c*/
  {
    v8 = *v49; /*0x1003a0076*/
    if ( !*v49 ) /*0x1003a0076*/
      v8 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::h7fa1672668f2fedb(v49); /*0x1003a02f4*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(a5); /*0x1003a0082*/
    v11 = 0x8000000000000000LL; /*0x1003a0091*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 ) /*0x1003a00a2*/
    {
      v12 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v8); /*0x1003a0301*/
      LOBYTE(v12) = v12 ^ 1; /*0x1003a0304*/
      v13 = v49; /*0x1003a0308*/
      if ( *((_BYTE *)v49 + 8) ) /*0x1003a030c*/
        goto LABEL_10; /*0x1003a0313*/
    }
    else
    {
      v12 = 0; /*0x1003a00a8*/
      v13 = v49; /*0x1003a00ab*/
      if ( *((_BYTE *)v49 + 8) ) /*0x1003a00af*/
      {
LABEL_10:
        v45 = nullptr; /*0x1003a00bc*/
        v46 = 1; /*0x1003a00c4*/
        v47 = 0; /*0x1003a00cc*/
        __dst[2] = 1610612768; /*0x1003a00d4*/
        __dst[0] = &v45; /*0x1003a00e3*/
        __dst[1] = &anon_7534e791983e23e0bbee4dd7c8383343_406; /*0x1003a00f1*/
        if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef( /*0x1003a010b*/
                                &anon_0868f19ff3e9f3569e732f60bdb020cc_1508,
                                41,
                                __dst,
                                v11,
                                v9,
                                v10) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003a050e*/
            &anon_7534e791983e23e0bbee4dd7c8383343_407,
            55,
            &v38,
            &anon_7534e791983e23e0bbee4dd7c8383343_413,
            &anon_7534e791983e23e0bbee4dd7c8383343_409);
        v14 = v12; /*0x1003a0118*/
        v15 = (__int64)v45; /*0x1003a011b*/
        v16 = v46; /*0x1003a011f*/
        v17 = v47; /*0x1003a0123*/
        LODWORD(v42) = *(_DWORD *)((char *)&v47 + 1); /*0x1003a012b*/
        *(_DWORD *)((char *)&v42 + 3) = HIDWORD(v47); /*0x1003a0131*/
        if ( !v14 /*0x1003a0515*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(&anon_0868f19ff3e9f3569e732f60bdb020cc_1508) )
        {
          *((_BYTE *)v49 + 8) = 1; /*0x1003a0526*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v49); /*0x1003a0152*/
        v18 = v42; /*0x1003a0157*/
        *(_DWORD *)(a1 + 28) = *(_DWORD *)((char *)&v42 + 3); /*0x1003a015d*/
        *(_DWORD *)(a1 + 25) = v18; /*0x1003a0161*/
        *(_QWORD *)(a1 + 8) = v15; /*0x1003a0165*/
        *(_QWORD *)(a1 + 16) = v16; /*0x1003a0169*/
        *(_BYTE *)(a1 + 24) = v17; /*0x1003a016d*/
        *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1003a017b*/
        goto LABEL_24; /*0x1003a017e*/
      }
    }
    v48 = v12; /*0x1003a0319*/
    codexmate_lib::core::repository::Repository::load_settings::hc9e6436998705338(__dst); /*0x1003a032b*/
    v35 = a4; /*0x1003a0330*/
    codexmate_lib::core::repository::Repository::save_settings::hd19ad6be621ccafd(v36, v13 + 2, __dst); /*0x1003a0348*/
    core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h939f6e3f6a2b103c(__dst); /*0x1003a0354*/
    if ( LODWORD(v36[0]) == 11 ) /*0x1003a0360*/
    {
      v28 = v49; /*0x1003a036a*/
      if ( !(_BYTE)v48 /*0x1003a037d*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
      {
        v33 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(__dst); /*0x1003a0557*/
        v28 = v49; /*0x1003a055e*/
        if ( !v33 ) /*0x1003a0562*/
          *((_BYTE *)v49 + 8) = 1; /*0x1003a0568*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v28); /*0x1003a0386*/
      codexmate_lib::commands::autostart::read_enabled::h6a5ab60549540c25(v36, *(_QWORD *)(v41 + 136)); /*0x1003a039d*/
      v29 = v36[0]; /*0x1003a03a2*/
      v30 = v36[1]; /*0x1003a03a9*/
      if ( v36[0] == 0x8000000000000000LL ) /*0x1003a03bd*/
      {
        codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hb95aa1fca76766bd(__dst, LOBYTE(v36[1]), 1); /*0x1003a03d2*/
        qmemcpy((void *)a1, __dst, 0x50u); /*0x1003a03e6*/
      }
      else
      {
        v32 = *(_QWORD *)((char *)&v36[1] + 1); /*0x1003a04c7*/
        *(_QWORD *)(a1 + 24) = v36[2]; /*0x1003a04d5*/
        *(_QWORD *)(a1 + 17) = v32; /*0x1003a04d9*/
        *(_QWORD *)(a1 + 8) = v29; /*0x1003a04dd*/
        *(_BYTE *)(a1 + 16) = v30; /*0x1003a04e1*/
        *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1003a04e5*/
      }
    }
    else
    {
      qmemcpy(__dst, v36, 0x60u); /*0x1003a0404*/
      v42 = 0; /*0x1003a0407*/
      v43 = 1; /*0x1003a040f*/
      v44 = 0; /*0x1003a0417*/
      v47 = 1610612768; /*0x1003a041f*/
      v45 = &v42; /*0x1003a042b*/
      v46 = (__int64)&anon_7534e791983e23e0bbee4dd7c8383343_406; /*0x1003a0436*/
      if ( (unsigned __int8)_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::h447c4d82396cf5a8( /*0x1003a0441*/
                              __dst,
                              (__int64 *)&v45,
                              v25,
                              (__int64)&anon_7534e791983e23e0bbee4dd7c8383343_406,
                              v26,
                              v27) )
        core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x1003a0550*/
          &anon_7534e791983e23e0bbee4dd7c8383343_407,
          55,
          &v38,
          &anon_7534e791983e23e0bbee4dd7c8383343_413,
          &anon_7534e791983e23e0bbee4dd7c8383343_409);
      v38 = v42; /*0x1003a0456*/
      v39 = v43; /*0x1003a045d*/
      v40 = v44; /*0x1003a0465*/
      core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h57a4b683b4933bf1(v36); /*0x1003a0470*/
      *(_QWORD *)(a1 + 24) = v40; /*0x1003a0479*/
      v31 = v38; /*0x1003a047d*/
      *(_QWORD *)(a1 + 16) = v39; /*0x1003a0488*/
      *(_QWORD *)(a1 + 8) = v31; /*0x1003a048c*/
      *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1003a049a*/
      if ( !(_BYTE)v48 /*0x1003a0571*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v36) )
      {
        *((_BYTE *)v49 + 8) = 1; /*0x1003a0582*/
      }
      std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v49); /*0x1003a04bd*/
    }
  }
  else
  {
    __dst[2] = v37[2]; /*0x1003a018a*/
    __dst[1] = v37[1]; /*0x1003a019f*/
    __dst[0] = v37[0]; /*0x1003a01a6*/
    v45 = __dst; /*0x1003a01b4*/
    v46 = (__int64)_$LT$tauri_plugin_autostart..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h8e0129bcf871b870; /*0x1003a01bf*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v36, &unk_1018F6575, &v45); /*0x1003a01d5*/
    if ( __dst[0] == 0x8000000000000000LL ) /*0x1003a01e4*/
    {
      if ( (__dst[1] & 3) == 1 ) /*0x1003a01f5*/
      {
        v19 = __dst[1] - 1LL; /*0x1003a01fa*/
        v20 = *(_QWORD *)(__dst[1] - 1LL); /*0x1003a01fe*/
        v21 = *(_QWORD *)(__dst[1] + 7LL); /*0x1003a0202*/
        if ( *(_QWORD *)v21 ) /*0x1003a0206*/
          (*(void (__fastcall **)(__int64))v21)(v20); /*0x1003a0211*/
        v22 = *(_QWORD *)(v21 + 8); /*0x1003a0213*/
        if ( v22 ) /*0x1003a021a*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v22, *(_QWORD *)(v21 + 16)); /*0x1003a0223*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v19, 24, 8); /*0x1003a0235*/
      }
    }
    else if ( __dst[0] ) /*0x1003a0242*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__dst[1], __dst[0], 1); /*0x1003a0250*/
    }
    *(_QWORD *)(a1 + 24) = v36[2]; /*0x1003a025c*/
    v23 = v36[0]; /*0x1003a0260*/
    *(_QWORD *)(a1 + 16) = v36[1]; /*0x1003a026e*/
    *(_QWORD *)(a1 + 8) = v23; /*0x1003a0272*/
    *(_QWORD *)a1 = 0x8000000000000000LL; /*0x1003a0276*/
  }
LABEL_24:
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h5f3e5fb0359970a7(v41); /*0x1003a0279*/
  return a1; /*0x1003a0285*/
}