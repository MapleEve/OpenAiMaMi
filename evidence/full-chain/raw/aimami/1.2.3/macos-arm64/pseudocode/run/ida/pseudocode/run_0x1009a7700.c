// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009a7700 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h7095fd0f5f9ae728(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // r14
  const void *v4; // r15
  size_t v5; // rbx
  __int64 v6; // r13
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rdi
  __int64 i; // r15
  _BYTE v13[360]; // [rsp+0h] [rbp-870h] BYREF
  _BYTE __dst[520]; // [rsp+168h] [rbp-708h] BYREF
  _QWORD v15[50]; // [rsp+370h] [rbp-500h] BYREF
  _QWORD __srca[23]; // [rsp+500h] [rbp-370h] BYREF
  _QWORD v17[50]; // [rsp+5B8h] [rbp-2B8h] BYREF
  _QWORD v18[23]; // [rsp+748h] [rbp-128h] BYREF
  _QWORD v19[3]; // [rsp+800h] [rbp-70h] BYREF
  __int64 v20[3]; // [rsp+818h] [rbp-58h] BYREF
  __int64 v21; // [rsp+830h] [rbp-40h] BYREF
  __int64 v22; // [rsp+838h] [rbp-38h]
  __int64 v23; // [rsp+840h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009a7729*/
  memcpy(v15, __src + 520, sizeof(v15)); /*0x1009a7744*/
  v23 = *((_QWORD *)__src + 117); /*0x1009a7750*/
  v2 = *((_QWORD *)__src + 115); /*0x1009a7754*/
  v22 = *((_QWORD *)__src + 116); /*0x1009a7762*/
  v21 = v2; /*0x1009a7766*/
  v17[6] = 0; /*0x1009a776a*/
  v17[0] = "load_voice_asr_configsave_voice_asr_configtest_voice_asr_configremove_voice_history_entryload_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009a777c*/
  v17[1] = 21; /*0x1009a7783*/
  v17[2] = &unk_1016021B8; /*0x1009a7795*/
  v17[3] = 8; /*0x1009a779c*/
  v17[4] = __dst; /*0x1009a77a7*/
  v17[5] = &v21; /*0x1009a77b2*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(v18, v17); /*0x1009a77ca*/
  if ( LOBYTE(v18[0]) == 6 ) /*0x1009a77e0*/
  {
    v20[2] = v18[3]; /*0x1009a77ed*/
    v20[1] = v18[2]; /*0x1009a77ff*/
    v20[0] = v18[1]; /*0x1009a7803*/
    codexmate_lib::commands::voice::load_voice_asr_config::h1be4190ce4dc31bf(__srca, v20); /*0x1009a7812*/
    memcpy(v17, __src + 520, sizeof(v17)); /*0x1009a7826*/
    if ( __srca[0] == 0x8000000000000000LL ) /*0x1009a7832*/
    {
      v3 = __srca[1]; /*0x1009a7838*/
      v4 = (const void *)__srca[2]; /*0x1009a783f*/
      v5 = __srca[3]; /*0x1009a7846*/
      if ( __srca[3] < 0LL ) /*0x1009a7850*/
      {
        v6 = 0; /*0x1009a7856*/
        goto LABEL_5; /*0x1009a7856*/
      }
      if ( __srca[3] ) /*0x1009a792b*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, __src + 520); /*0x1009a792d*/
        v6 = 1; /*0x1009a7932*/
        v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v5, 1); /*0x1009a7940*/
        if ( !v8 ) /*0x1009a7948*/
LABEL_5:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v6, v5); /*0x1009a7859*/
        v9 = v8; /*0x1009a794e*/
      }
      else
      {
        v9 = 1; /*0x1009a795d*/
      }
      memcpy((void *)v9, v4, v5); /*0x1009a796c*/
      if ( v3 ) /*0x1009a7974*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v3, 1); /*0x1009a7981*/
      LOBYTE(v18[1]) = 3; /*0x1009a7986*/
      v18[2] = v5; /*0x1009a798d*/
      v18[3] = v9; /*0x1009a7994*/
      v18[4] = v5; /*0x1009a799b*/
      v18[0] = 0x8000000000000000LL; /*0x1009a79a2*/
    }
    else
    {
      memcpy(v18, __srca, sizeof(v18)); /*0x1009a7924*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::h814e343e6b44d57d(v17, v18); /*0x1009a79b7*/
  }
  else
  {
    v17[4] = v18[3]; /*0x1009a786d*/
    v17[3] = v18[2]; /*0x1009a787b*/
    v17[2] = v18[1]; /*0x1009a7890*/
    v17[1] = v18[0]; /*0x1009a7897*/
    memcpy(v13, __src + 520, sizeof(v13)); /*0x1009a78b0*/
    v7 = *((_QWORD *)__src + 111); /*0x1009a78c3*/
    v19[0] = *((_QWORD *)__src + 110); /*0x1009a78ca*/
    v19[1] = v7; /*0x1009a78ce*/
    v19[2] = *((_QWORD *)__src + 112); /*0x1009a78d9*/
    v17[0] = 1; /*0x1009a78eb*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a7907*/
      v13,
      v15[48],
      v17,
      v19,
      LODWORD(v15[49]),
      HIDWORD(v15[49]));
  }
  if ( v21 != 0x8000000000000000LL ) /*0x1009a79c0*/
  {
    v10 = v22; /*0x1009a79c2*/
    for ( i = v23 + 1; i != 1; --i ) /*0x1009a79ca*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v10); /*0x1009a79dd*/
      v10 += 96; /*0x1009a79e2*/
    }
    if ( v21 ) /*0x1009a79ee*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, 96 * v21, 8); /*0x1009a7a01*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009a7a12*/
}