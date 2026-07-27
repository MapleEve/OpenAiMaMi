// __ZN13codexmate_lib4core5voice7runtime11load_status @ 0x10066b980 | 基线 same-set
_DWORD *__fastcall codexmate_lib::core::voice::runtime::load_status::hafa3b44178c55299(_DWORD *__dst, __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // r15
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  unsigned int v9; // r12d
  __int64 v10; // r14
  __int64 v11; // r13
  __int64 v12; // rdx
  char v13; // r12
  int v14; // ecx
  _QWORD *v15; // rsi
  __int64 v16; // rdx
  __int64 v17; // r12
  __int64 v18; // rdi
  __int64 v19; // rdx
  unsigned int v20; // r15d
  __int64 v21; // r14
  __int64 v22; // rdx
  __int64 v23; // r15
  char v24; // r13
  int v25; // eax
  _QWORD *v26; // rdi
  __int64 v27; // rdx
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // r15
  __int64 v31; // rdi
  __int64 v32; // rdx
  char v33; // r14
  char v34; // al
  __int64 v35; // rdx
  char v36; // r9
  __int64 v37; // r13
  __int64 v38; // r14
  char v39; // r12
  int v40; // eax
  __int64 v41; // rax
  __int64 v42; // rdx
  _QWORD *v44; // [rsp+0h] [rbp-630h] BYREF
  __int64 (__fastcall **v45)(); // [rsp+8h] [rbp-628h]
  __int64 v46; // [rsp+10h] [rbp-620h]
  __int64 v47; // [rsp+230h] [rbp-400h]
  __int64 v48; // [rsp+238h] [rbp-3F8h]
  _QWORD __src[89]; // [rsp+2E8h] [rbp-348h] BYREF
  _QWORD v50[2]; // [rsp+5B0h] [rbp-80h] BYREF
  _DWORD v51[2]; // [rsp+5C4h] [rbp-6Ch]
  unsigned int v52; // [rsp+5CCh] [rbp-64h]
  __int64 v53; // [rsp+5D0h] [rbp-60h] BYREF
  __int64 v54; // [rsp+5D8h] [rbp-58h]
  __int64 v55; // [rsp+5E0h] [rbp-50h]
  __int64 v56; // [rsp+5E8h] [rbp-48h] BYREF
  __int64 v57; // [rsp+5F0h] [rbp-40h]
  __int64 v58; // [rsp+5F8h] [rbp-38h]
  _QWORD *v59; // [rsp+600h] [rbp-30h]

  v4 = (_QWORD *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(*(_QWORD *)(*(_QWORD *)(a2 + 136) + 4872LL) + 16LL); /*0x10066b9ac*/
  if ( !v4 ) /*0x10066b9b4*/
  {
    __src[0] = &anon_0df76e0cec988e6dc281ac0519b88803_748; /*0x10066bad8*/
    __src[1] = 76; /*0x10066badf*/
    v44 = __src; /*0x10066baf1*/
    v45 = (__int64 (__fastcall **)())_$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10066baff*/
    core::panicking::panic_fmt::h3a793735daf6e4ec( /*0x10066bb1b*/
      &anon_0df76e0cec988e6dc281ac0519b88803_1033,
      &v44,
      &anon_0df76e0cec988e6dc281ac0519b88803_1034);
  }
  v5 = v4; /*0x10066b9ba*/
  v6 = *v4; /*0x10066b9bd*/
  if ( !*v4 ) /*0x10066b9bd*/
    v6 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v4); /*0x10066bb28*/
  std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v6); /*0x10066b9c9*/
  if ( 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 )
  {
    v9 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v6, a2, v7, v8); /*0x10066bb35*/
    LOBYTE(v9) = v9 ^ 1; /*0x10066bb38*/
    if ( *((_BYTE *)v5 + 8) ) /*0x10066bb3c*/
      goto LABEL_6; /*0x10066bb43*/
LABEL_12:
    v15 = v5 + 2; /*0x10066bb49*/
    _$LT$codexmate_lib..platform..paths..CodexPaths$u20$as$u20$core..clone..Clone$GT$::clone::hf6c0d3e83be86178( /*0x10066bb57*/
      &v44,
      v5 + 2);
    if ( !(_BYTE)v9 /*0x10066bf82*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             &v44,
                             v15,
                             v16,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *((_BYTE *)v5 + 8) = 1; /*0x10066bf8f*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v5); /*0x10066bb7b*/
    v17 = tauri::Manager::state::hb5ba04dc9da9798f(a2); /*0x10066bb88*/
    v59 = (_QWORD *)(v17 + 32); /*0x10066bb8f*/
    v18 = *(_QWORD *)(v17 + 32); /*0x10066bb93*/
    if ( !v18 ) /*0x10066bb9b*/
      v18 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v59); /*0x10066bcc4*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v18); /*0x10066bba1*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
    {
      v20 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v18, v15, v19, 0x7FFFFFFFFFFFFFFFLL); /*0x10066bcd1*/
      LOBYTE(v20) = v20 ^ 1; /*0x10066bcd4*/
      if ( *(_BYTE *)(v17 + 40) ) /*0x10066bcd8*/
        goto LABEL_18; /*0x10066bce0*/
    }
    else
    {
      v20 = 0; /*0x10066bbbd*/
      if ( *(_BYTE *)(v17 + 40) )
      {
LABEL_18:
        v56 = 0; /*0x10066bbce*/
        v57 = 1; /*0x10066bbd6*/
        v58 = 0; /*0x10066bbde*/
        __src[2] = 1610612768; /*0x10066bbe6*/
        __src[0] = &v56; /*0x10066bbf5*/
        __src[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x10066bc03*/
        if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                                "poisoned lock: another task failed inside",
                                41,
                                __src) )
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10066bf78*/
            &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
            55,
            &v53,
            &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
            &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
        v21 = v56; /*0x10066bc2d*/
        v22 = v20; /*0x10066bc31*/
        v23 = v57; /*0x10066bc34*/
        v24 = v58; /*0x10066bc38*/
        LODWORD(v53) = *(_DWORD *)((char *)&v58 + 1); /*0x10066bc40*/
        *(_DWORD *)((char *)&v53 + 3) = HIDWORD(v58); /*0x10066bc46*/
        if ( !(_BYTE)v22
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                 "poisoned lock: another task failed inside",
                                 41,
                                 v22,
                                 0x7FFFFFFFFFFFFFFFLL) )
        {
          *(_BYTE *)(v17 + 40) = 1; /*0x10066bfce*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v59); /*0x10066bc6a*/
        v25 = v53; /*0x10066bc6f*/
        __dst[7] = *(_DWORD *)((char *)&v53 + 3); /*0x10066bc75*/
        *(_DWORD *)((char *)__dst + 25) = v25; /*0x10066bc78*/
        *((_QWORD *)__dst + 1) = v21; /*0x10066bc7b*/
        *((_QWORD *)__dst + 2) = v23; /*0x10066bc7f*/
        *((_BYTE *)__dst + 24) = v24; /*0x10066bc83*/
        *(_QWORD *)__dst = 2; /*0x10066bc87*/
        goto LABEL_53; /*0x10066bc8e*/
      }
    }
    v52 = v20; /*0x10066bce6*/
    v50[0] = v47; /*0x10066bcf8*/
    v50[1] = v48; /*0x10066bcfc*/
    v56 = 0; /*0x10066bd00*/
    v57 = 1; /*0x10066bd08*/
    v58 = 0; /*0x10066bd10*/
    __src[2] = 1610612768; /*0x10066bd18*/
    __src[0] = &v56; /*0x10066bd27*/
    __src[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x10066bd35*/
    v26 = v50; /*0x10066bd3c*/
    if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(v50, __src) ) /*0x10066bd47*/
      core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10066bfb7*/
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
        55,
        &v53,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
        &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
    v53 = v56; /*0x10066bd5f*/
    v54 = v57; /*0x10066bd63*/
    v55 = v58; /*0x10066bd6b*/
    v28 = *(_QWORD *)(v17 + 544); /*0x10066bd79*/
    if ( v28 ) /*0x10066bd84*/
    {
      v26 = *(_QWORD **)(v17 + 552); /*0x10066bd86*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v28, 1); /*0x10066bd93*/
    }
    *(_QWORD *)(v17 + 560) = v55; /*0x10066bd9c*/
    v29 = v53; /*0x10066bda0*/
    *(_QWORD *)(v17 + 552) = v54; /*0x10066bda8*/
    *(_QWORD *)(v17 + 544) = v29; /*0x10066bdac*/
    if ( !(_BYTE)v52 /*0x10066bfd9*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             v26,
                             v28,
                             v27,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *(_BYTE *)(v17 + 40) = 1; /*0x10066bfe6*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v59); /*0x10066bdd3*/
    codexmate_lib::core::voice::runtime::sync_permissions_internal::h1300a66e8cd539dc(__src, a2); /*0x10066bde5*/
    if ( __src[0] != 0x8000000000000000LL ) /*0x10066bdfe*/
    {
      *((_QWORD *)__dst + 3) = __src[2]; /*0x10066bf1d*/
      v41 = __src[0]; /*0x10066bf21*/
      *((_QWORD *)__dst + 2) = __src[1]; /*0x10066bf2f*/
      *((_QWORD *)__dst + 1) = v41; /*0x10066bf33*/
      *(_QWORD *)__dst = 2; /*0x10066bf37*/
LABEL_53:
      core::ptr::drop_in_place$LT$codexmate_lib..platform..paths..CodexPaths$GT$::hc0ff5575f779a5d8(&v44); /*0x10066c066*/
      return __dst; /*0x10066c06d*/
    }
    v30 = tauri::Manager::state::hb5ba04dc9da9798f(a2); /*0x10066be0c*/
    v59 = (_QWORD *)(v30 + 32); /*0x10066be13*/
    v31 = *(_QWORD *)(v30 + 32); /*0x10066be17*/
    if ( !v31 ) /*0x10066be1e*/
      v31 = std::sys::sync::once_box::OnceBox$LT$T$GT$::initialize::haf22e2d80a4c642a(v59); /*0x10066bffa*/
    std::sys::pal::unix::sync::mutex::Mutex::lock::h6b8bb4259dcc18d0(v31); /*0x10066be24*/
    if ( (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0 )
    {
      v33 = std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v31, a2, v32, 0x7FFFFFFFFFFFFFFFLL) ^ 1; /*0x10066c00a*/
      if ( *(_BYTE *)(v30 + 40) ) /*0x10066c00e*/
        goto LABEL_34; /*0x10066c015*/
    }
    else
    {
      v33 = 0; /*0x10066be40*/
      if ( *(_BYTE *)(v30 + 40) )
      {
LABEL_34:
        v56 = 0; /*0x10066be50*/
        v57 = 1; /*0x10066be58*/
        v58 = 0; /*0x10066be60*/
        __src[2] = 1610612768; /*0x10066be68*/
        __src[0] = &v56; /*0x10066be77*/
        __src[1] = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x10066be85*/
        v34 = _$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                "poisoned lock: another task failed inside",
                41,
                __src);
        v36 = v33; /*0x10066bea4*/
        if ( v34 ) /*0x10066bea9*/
          core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10066c0a8*/
            &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
            55,
            &v53,
            &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
            &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
        v37 = v56; /*0x10066beb2*/
        v38 = v57; /*0x10066beb6*/
        v39 = v58; /*0x10066beba*/
        LODWORD(v53) = *(_DWORD *)((char *)&v58 + 1); /*0x10066bec2*/
        *(_DWORD *)((char *)&v53 + 3) = HIDWORD(v58); /*0x10066bec8*/
        if ( !v36
          && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
          && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                                 "poisoned lock: another task failed inside",
                                 41,
                                 v35,
                                 0x7FFFFFFFFFFFFFFFLL) )
        {
          *(_BYTE *)(v30 + 40) = 1; /*0x10066c0bc*/
        }
        std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v59); /*0x10066beed*/
        v40 = v53; /*0x10066bef2*/
        __dst[7] = *(_DWORD *)((char *)&v53 + 3); /*0x10066bef8*/
        *(_DWORD *)((char *)__dst + 25) = v40; /*0x10066befb*/
        *((_QWORD *)__dst + 1) = v37; /*0x10066befe*/
        *((_QWORD *)__dst + 2) = v38; /*0x10066bf02*/
        *((_BYTE *)__dst + 24) = v39; /*0x10066bf06*/
        *(_QWORD *)__dst = 2; /*0x10066bf0a*/
        goto LABEL_53; /*0x10066bf11*/
      }
    }
    codexmate_lib::core::voice::runtime::VoiceRuntimeInner::to_payload::h8404c411b85a7667(__src, v30 + 48); /*0x10066c029*/
    memcpy(__dst, __src, 0x2C8u); /*0x10066c03d*/
    if ( !v33 /*0x10066c0c6*/
      && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
      && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                             __dst,
                             __src,
                             v42,
                             0x7FFFFFFFFFFFFFFFLL) )
    {
      *(_BYTE *)(v30 + 40) = 1; /*0x10066c0cf*/
    }
    std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v59); /*0x10066c061*/
    goto LABEL_53; /*0x10066c061*/
  }
  v9 = 0; /*0x10066b9e5*/
  if ( !*((_BYTE *)v5 + 8) ) /*0x10066b9ef*/
    goto LABEL_12; /*0x10066b9ef*/
LABEL_6:
  __src[0] = 0; /*0x10066b9f5*/
  __src[1] = 1; /*0x10066ba00*/
  __src[2] = 0; /*0x10066ba0b*/
  v46 = 1610612768; /*0x10066ba16*/
  v44 = __src; /*0x10066ba28*/
  v45 = &anon_4776471024d1e9bb78f2861cb2b51e1e_1048; /*0x10066ba36*/
  if ( (unsigned __int8)_$LT$str$u20$as$u20$core..fmt..Display$GT$::fmt::had12e4ac7ffbdcef(
                          "poisoned lock: another task failed inside",
                          41,
                          &v44) )
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x10066bcb1*/
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1049,
      55,
      &v53,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1061,
      &anon_4776471024d1e9bb78f2861cb2b51e1e_1051);
  v10 = __src[0]; /*0x10066ba60*/
  v11 = __src[1]; /*0x10066ba67*/
  v12 = v9; /*0x10066ba6e*/
  v13 = __src[2]; /*0x10066ba71*/
  v51[0] = *(_DWORD *)((char *)&__src[2] + 1); /*0x10066ba7f*/
  *(_DWORD *)((char *)v51 + 3) = HIDWORD(__src[2]); /*0x10066ba88*/
  if ( !(_BYTE)v12
    && (std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6 & 0x7FFFFFFFFFFFFFFFLL) != 0
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(
                           "poisoned lock: another task failed inside",
                           41,
                           v12,
                           0x7FFFFFFFFFFFFFFFLL) )
  {
    *((_BYTE *)v5 + 8) = 1; /*0x10066bf50*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*v5); /*0x10066baa8*/
  *((_QWORD *)__dst + 1) = v10; /*0x10066baad*/
  *((_QWORD *)__dst + 2) = v11; /*0x10066bab1*/
  *((_BYTE *)__dst + 24) = v13; /*0x10066bab5*/
  v14 = *(_DWORD *)((char *)v51 + 3); /*0x10066babc*/
  *(_DWORD *)((char *)__dst + 25) = v51[0]; /*0x10066babf*/
  __dst[7] = v14; /*0x10066bac2*/
  *(_QWORD *)__dst = 2; /*0x10066bac5*/
  return __dst; /*0x10066c075*/
}