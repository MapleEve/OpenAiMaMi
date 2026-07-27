// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10099beb0 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h03e927ab7940de7a(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 *v3; // rax
  __int64 v4; // r14
  const void *v5; // r15
  size_t v6; // rbx
  __int64 v7; // r13
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 i; // r15
  _BYTE v14[360]; // [rsp+8h] [rbp-7C8h] BYREF
  _QWORD __dst[65]; // [rsp+170h] [rbp-660h] BYREF
  _QWORD v16[50]; // [rsp+378h] [rbp-458h] BYREF
  _QWORD v17[50]; // [rsp+508h] [rbp-2C8h] BYREF
  _QWORD v18[14]; // [rsp+698h] [rbp-138h] BYREF
  _QWORD v19[14]; // [rsp+708h] [rbp-C8h] BYREF
  _QWORD v20[3]; // [rsp+778h] [rbp-58h] BYREF
  __int64 v21; // [rsp+790h] [rbp-40h] BYREF
  __int64 v22; // [rsp+798h] [rbp-38h]
  __int64 v23; // [rsp+7A0h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x10099bed9*/
  memcpy(v16, __src + 520, sizeof(v16)); /*0x10099bef4*/
  v23 = *((_QWORD *)__src + 117); /*0x10099bf00*/
  v2 = *((_QWORD *)__src + 115); /*0x10099bf04*/
  v22 = *((_QWORD *)__src + 116); /*0x10099bf12*/
  v21 = v2; /*0x10099bf16*/
  v17[6] = 0; /*0x10099bf1a*/
  v17[0] = "load_voice_processing_modessave_voice_processing_modesload_voice_runtime_statusrequest_voice_permissionsset_voice_global_shortcutcapture_voice_trigger_keycancel_voice_trigger_captureset_voice_trigger_listener_suppressedset_voice_trigger_keyset_voice_trigger_bindingsupdate_voice_runtime_settingsset_voice_processing_mode_idset_voice_overlay_stylevoice_overlay_readyvoice_processing_donestart_voice_capturestop_voice_capturerequest_accessibility_permissioninject_voice_textset_voice_mode_shortcutremove_voice_mode_shortcutopen_macos_privacy_paneshow_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x10099bf2c*/
  v17[1] = 27; /*0x10099bf33*/
  v17[2] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x10099bf45*/
  v17[3] = 4; /*0x10099bf4c*/
  v17[4] = __dst; /*0x10099bf57*/
  v17[5] = &v21; /*0x10099bf62*/
  v3 = (__int64 *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(__dst[64] + 16LL); /*0x10099bf77*/
  if ( !v3 ) /*0x10099bf89*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x10099bfa0*/
      v19,
      v17,
      &v17[2]);
    if ( LOBYTE(v19[0]) != 6 ) /*0x10099bfac*/
    {
      v17[4] = v19[3]; /*0x10099c066*/
      v17[3] = v19[2]; /*0x10099c074*/
      v17[2] = v19[1]; /*0x10099c089*/
      v17[1] = v19[0]; /*0x10099c090*/
      memcpy(v14, __src + 520, sizeof(v14)); /*0x10099c0a9*/
      v10 = *((_QWORD *)__src + 111); /*0x10099c0bc*/
      v20[0] = *((_QWORD *)__src + 110); /*0x10099c0c3*/
      v20[1] = v10; /*0x10099c0c7*/
      v20[2] = *((_QWORD *)__src + 112); /*0x10099c0d2*/
      v17[0] = 1; /*0x10099c0e4*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x10099c100*/
        v14,
        v16[48],
        v17,
        v20,
        LODWORD(v16[49]),
        HIDWORD(v16[49]));
      goto LABEL_18; /*0x10099c105*/
    }
    v3 = (__int64 *)v19[1]; /*0x10099bfb2*/
  }
  codexmate_lib::commands::voice::load_voice_processing_modes::hd71bd1b389167d4e(v18, v3); /*0x10099bfc3*/
  memcpy(v17, __src + 520, sizeof(v17)); /*0x10099bfd7*/
  if ( v18[0] == 0x8000000000000000LL ) /*0x10099bfe3*/
  {
    v4 = v18[1]; /*0x10099bfe5*/
    v5 = (const void *)v18[2]; /*0x10099bfec*/
    v6 = v18[3]; /*0x10099bff3*/
    if ( v18[3] < 0LL ) /*0x10099bffd*/
    {
      v7 = 0; /*0x10099bfff*/
      goto LABEL_7; /*0x10099bfff*/
    }
    if ( v18[3] ) /*0x10099c02a*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v17, __src + 520); /*0x10099c030*/
      v7 = 1; /*0x10099c035*/
      v8 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v6, 1); /*0x10099c043*/
      if ( !v8 ) /*0x10099c04b*/
LABEL_7:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v7, v6); /*0x10099c002*/
      v9 = v8; /*0x10099c04d*/
    }
    else
    {
      v9 = 1; /*0x10099c107*/
    }
    memcpy((void *)v9, v5, v6); /*0x10099c116*/
    if ( v4 ) /*0x10099c11e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v5, v4, 1); /*0x10099c12b*/
    LOBYTE(v19[1]) = 3; /*0x10099c130*/
    v19[2] = v6; /*0x10099c137*/
    v19[3] = v9; /*0x10099c13e*/
    v19[4] = v6; /*0x10099c145*/
    v19[0] = 0x8000000000000000LL; /*0x10099c14c*/
  }
  else
  {
    qmemcpy(v19, v18, sizeof(v19)); /*0x10099c022*/
  }
  tauri::ipc::InvokeResolver$LT$R$GT$::respond::h65f611964a82d5ca(v17); /*0x10099c161*/
LABEL_18:
  if ( v21 != 0x8000000000000000LL ) /*0x10099c16a*/
  {
    v11 = v22; /*0x10099c16c*/
    for ( i = v23 + 1; i != 1; --i ) /*0x10099c174*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v11); /*0x10099c18d*/
      v11 += 96; /*0x10099c192*/
    }
    if ( v21 ) /*0x10099c19e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v22, 96 * v21, 8); /*0x10099c1b1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x10099c1c2*/
}