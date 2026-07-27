// __ZN13codexmate_lib8commands9autostart40apply_default_autostart_on_router_enable @ 0x1006a8040
__int64 __fastcall codexmate_lib::commands::autostart::apply_default_autostart_on_router_enable::h64aeacf293b316b0(
        __int64 a1,
        _QWORD *a2)
{
  __int64 v2; // r15
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  _BYTE *v5; // rdi
  __int64 v6; // rdx
  __int64 v7; // rcx
  char v8; // r14
  __int64 result; // rax
  char v10; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  _QWORD **v14; // rsi
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  _QWORD *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // rcx
  char v20; // r14
  __int64 v21; // rsi
  __int64 v22; // rbx
  __int64 v23; // r14
  __int64 v24; // r12
  __int64 v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rdi
  _QWORD v28[12]; // [rsp+0h] [rbp-160h] BYREF
  _QWORD *v29; // [rsp+60h] [rbp-100h] BYREF
  __int64 (__fastcall *v30)(); // [rsp+68h] [rbp-F8h]
  _QWORD __dst[18]; // [rsp+70h] [rbp-F0h] BYREF
  char v32; // [rsp+101h] [rbp-5Fh]
  _QWORD *v33; // [rsp+108h] [rbp-58h] BYREF
  __int64 v34; // [rsp+110h] [rbp-50h]
  void *v35; // [rsp+118h] [rbp-48h]
  __int64 v36; // [rsp+120h] [rbp-40h]
  char **v37; // [rsp+128h] [rbp-38h]
  _BYTE v38[41]; // [rsp+137h] [rbp-29h] BYREF

  v2 = *(_QWORD *)(a1 + 136); /*0x1006a8054*/
  v3 = (_QWORD *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(v2 + 4872) + 16LL); /*0x1006a8066*/
  if ( !v3 ) /*0x1006a806e*/
  {
LABEL_42:
    v28[0] = &anon_0df76e0cec988e6dc281ac0519b88803_748; /*0x1006a85e1*/
    v28[1] = 76; /*0x1006a85ef*/
    goto LABEL_43; /*0x1006a85ef*/
  }
  v4 = v3; /*0x1006a8074*/
  v5 = (_BYTE *)*v3; /*0x1006a8077*/
  if ( !*v3 ) /*0x1006a8077*/
    v5 = (_BYTE *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v3); /*0x1006a81bf*/
  ((void (*)(void))std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0)(); /*0x1006a8083*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 ) /*0x1006a8093*/
  {
    v8 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, v7) ^ 1; /*0x1006a81cf*/
    if ( *((_BYTE *)v4 + 8) ) /*0x1006a81dd*/
      goto LABEL_6; /*0x1006a81e3*/
  }
  else
  {
    v8 = 0; /*0x1006a809f*/
    if ( *((_BYTE *)v4 + 8) ) /*0x1006a80ac*/
    {
LABEL_6:
      v33 = v4; /*0x1006a80b8*/
      LOBYTE(v34) = v8; /*0x1006a80bc*/
      if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1006a80ce*/
      {
        v28[0] = &v33; /*0x1006a80d8*/
        v28[1] = _$LT$std..sync..poison..PoisonError$LT$T$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h12b693ddd6822b12; /*0x1006a80e6*/
        __dst[6] = 2; /*0x1006a80ed*/
        __dst[7] = &unk_101604B4B; /*0x1006a80ff*/
        __dst[8] = 34; /*0x1006a8106*/
        __dst[10] = &unk_1017C38AC; /*0x1006a8118*/
        __dst[11] = v28; /*0x1006a8126*/
        __dst[0] = 0; /*0x1006a812d*/
        __dst[1] = &unk_101604B4B; /*0x1006a8138*/
        __dst[2] = 34; /*0x1006a813f*/
        __dst[3] = 0; /*0x1006a814a*/
        __dst[4] = "src/commands/autostart.rs"; /*0x1006a815c*/
        __dst[5] = 25; /*0x1006a8163*/
        __dst[9] = 0x2800000001LL; /*0x1006a8178*/
        v5 = v38; /*0x1006a817f*/
        a2 = __dst; /*0x1006a8183*/
        _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v38, __dst); /*0x1006a818a*/
        v4 = v33; /*0x1006a818f*/
        v8 = v34; /*0x1006a8193*/
      }
      if ( !v8 /*0x1006a8630*/
        && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
        && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v5, a2, v6, v7) )
      {
        *((_BYTE *)v4 + 8) = 1; /*0x1006a863d*/
      }
      return std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4); /*0x1006a81b2*/
    }
  }
  codexmate_lib::core::repository::Repository::load_settings::hfb581409936e6334(__dst); /*0x1006a81f7*/
  v10 = v32; /*0x1006a81fc*/
  core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h5b0c78a37d6585d2(__dst, v4 + 2); /*0x1006a8208*/
  if ( !v8 /*0x1006a8646*/
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(__dst, v4 + 2, v11, v12) )
  {
    *((_BYTE *)v4 + 8) = 1; /*0x1006a8653*/
  }
  result = std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v4); /*0x1006a8228*/
  if ( v10 == 2 ) /*0x1006a8231*/
  {
    v13 = tauri::state::StateManager::try_get::hc83b298ea759c550(*(_QWORD *)(v2 + 4872) + 16LL); /*0x1006a8242*/
    if ( !v13 ) /*0x1006a824a*/
    {
      v28[0] = &anon_0df76e0cec988e6dc281ac0519b88803_1035; /*0x1006a8663*/
      v28[1] = 41; /*0x1006a866a*/
LABEL_43:
      __dst[0] = v28; /*0x1006a85fa*/
      __dst[1] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1006a860f*/
      core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x1006a862b*/
        &anon_0df76e0cec988e6dc281ac0519b88803_1033,
        __dst,
        &anon_0df76e0cec988e6dc281ac0519b88803_1034);
    }
    v14 = (_QWORD **)v13; /*0x1006a8254*/
    tauri_plugin_autostart::AutoLaunchManager::enable::h7cfc24bdcadcb496(&v33, v13); /*0x1006a8257*/
    if ( v33 == (_QWORD *)0x8000000000000001LL ) /*0x1006a826c*/
    {
      v15 = (_QWORD *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(v2 + 4872) + 16LL); /*0x1006a827d*/
      if ( v15 ) /*0x1006a8285*/
      {
        v16 = v15; /*0x1006a828b*/
        v17 = (_QWORD *)*v15; /*0x1006a828e*/
        if ( *v15 ) /*0x1006a828e*/
        {
          std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v17); /*0x1006a829a*/
          if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x1006a82a6*/
            goto LABEL_20; /*0x1006a82a6*/
        }
        else
        {
          v17 = (_QWORD *)std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v15); /*0x1006a867f*/
          std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v17); /*0x1006a8682*/
          if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) == 0 ) /*0x1006a868e*/
          {
LABEL_20:
            v20 = 0; /*0x1006a82ac*/
            if ( !*((_BYTE *)v16 + 8) ) /*0x1006a82af*/
              goto LABEL_21; /*0x1006a82b5*/
            goto LABEL_25; /*0x1006a82b5*/
          }
        }
        v20 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v17, v14, v18, v19) ^ 1; /*0x1006a869c*/
        if ( !*((_BYTE *)v16 + 8) ) /*0x1006a86a0*/
        {
LABEL_21:
          codexmate_lib::core::repository::Repository::load_settings::hfb581409936e6334(__dst); /*0x1006a82bb*/
          v32 = 1; /*0x1006a82d1*/
          v14 = (_QWORD **)(v16 + 2); /*0x1006a82e3*/
          codexmate_lib::core::repository::Repository::save_settings::hf8edda251fe14f24(v28, v16 + 2, __dst); /*0x1006a82e6*/
          v17 = __dst; /*0x1006a82eb*/
          core::ptr::drop_in_place$LT$codexmate_lib..core..repository..CodexMateSettings$GT$::h5b0c78a37d6585d2( /*0x1006a82f2*/
            __dst,
            v16 + 2);
          if ( LODWORD(v28[0]) != 11 ) /*0x1006a82fe*/
          {
            qmemcpy(__dst, v28, 0x60u); /*0x1006a831a*/
            v14 = &v29; /*0x1006a831a*/
            if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1006a832b*/
            {
              v29 = __dst; /*0x1006a832d*/
              v30 = (__int64 (__fastcall *)())_$LT$codexmate_lib..core..models..CoreError$u20$as$u20$core..fmt..Display$GT$::fmt::hc0e7b2c6dc6b29f2; /*0x1006a833b*/
              v33 = &unk_101604B4B; /*0x1006a8349*/
              v34 = 34; /*0x1006a834d*/
              v35 = &unk_101604B4B; /*0x1006a8355*/
              v36 = 34; /*0x1006a8359*/
              v37 = &off_101967C38; /*0x1006a8368*/
              v14 = &v29; /*0x1006a8373*/
              log::__private_api::log::h719f4907c7336ae9(&unk_1017C3872, &v29, 2, &v33); /*0x1006a8383*/
            }
            v17 = __dst; /*0x1006a8388*/
            core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(__dst); /*0x1006a838f*/
          }
        }
LABEL_25:
        if ( !v20 /*0x1006a86b1*/
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v17, v14, v18, v19) )
        {
          *((_BYTE *)v16 + 8) = 1; /*0x1006a86be*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v16); /*0x1006a83a9*/
        result = log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8; /*0x1006a83b5*/
        if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 >= 3u ) /*0x1006a83bc*/
        {
          __dst[6] = 3; /*0x1006a83c2*/
          __dst[7] = &unk_101604B4B; /*0x1006a83d4*/
          __dst[8] = 34; /*0x1006a83db*/
          __dst[10] = &unk_101604B6D; /*0x1006a83ed*/
          __dst[11] = 123; /*0x1006a83f4*/
          __dst[0] = 0; /*0x1006a83ff*/
          __dst[1] = &unk_101604B4B; /*0x1006a840a*/
          __dst[2] = 34; /*0x1006a8411*/
          __dst[3] = 0; /*0x1006a841c*/
          __dst[4] = "src/commands/autostart.rs"; /*0x1006a842e*/
          __dst[5] = 25; /*0x1006a8435*/
          __dst[9] = 0x3800000001LL; /*0x1006a844a*/
          return _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v38, __dst); /*0x1006a845c*/
        }
        return result; /*0x1006a8461*/
      }
      goto LABEL_42; /*0x1006a8285*/
    }
    v28[2] = v35; /*0x1006a846a*/
    v28[1] = v34; /*0x1006a8479*/
    v28[0] = v33; /*0x1006a8480*/
    result = log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8; /*0x1006a848e*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x1006a8495*/
    {
      v29 = v28; /*0x1006a84a2*/
      v30 = _$LT$tauri_plugin_autostart..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h8e0129bcf871b870; /*0x1006a84b0*/
      __dst[6] = 2; /*0x1006a84b7*/
      __dst[7] = &unk_101604B4B; /*0x1006a84c9*/
      __dst[8] = 34; /*0x1006a84d0*/
      __dst[10] = &unk_1017C382A; /*0x1006a84e2*/
      __dst[11] = &v29; /*0x1006a84f0*/
      __dst[0] = 0; /*0x1006a84f7*/
      __dst[1] = &unk_101604B4B; /*0x1006a8502*/
      __dst[2] = 34; /*0x1006a8509*/
      __dst[3] = 0; /*0x1006a8514*/
      __dst[4] = "src/commands/autostart.rs"; /*0x1006a8526*/
      __dst[5] = 25; /*0x1006a852d*/
      __dst[9] = 0x3000000001LL; /*0x1006a8542*/
      result = _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(v38, __dst); /*0x1006a8554*/
    }
    v21 = v28[0]; /*0x1006a8559*/
    if ( v28[0] == 0x8000000000000000LL ) /*0x1006a8566*/
    {
      result = v28[1]; /*0x1006a8568*/
      if ( (v28[1] & 3) != 1 ) /*0x1006a8577*/
        return result; /*0x1006a8577*/
      v22 = v28[1] - 1LL; /*0x1006a8579*/
      v23 = *(_QWORD *)(v28[1] - 1LL); /*0x1006a857d*/
      v24 = *(_QWORD *)(v28[1] + 7LL); /*0x1006a8581*/
      if ( *(_QWORD *)v24 ) /*0x1006a8585*/
        (*(void (__fastcall **)(__int64))v24)(v23); /*0x1006a8591*/
      v25 = *(_QWORD *)(v24 + 8); /*0x1006a8593*/
      if ( v25 ) /*0x1006a859b*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v25, *(_QWORD *)(v24 + 16)); /*0x1006a85a5*/
      v21 = 24; /*0x1006a85aa*/
      v26 = 8; /*0x1006a85af*/
      v27 = v22; /*0x1006a85b4*/
    }
    else
    {
      if ( !v28[0] ) /*0x1006a85bc*/
        return result; /*0x1006a85bc*/
      v27 = v28[1]; /*0x1006a85be*/
      v26 = 1; /*0x1006a85c5*/
    }
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v27, v21, v26); /*0x1006a85ca*/
  }
  return result; /*0x1006a85cf*/
}