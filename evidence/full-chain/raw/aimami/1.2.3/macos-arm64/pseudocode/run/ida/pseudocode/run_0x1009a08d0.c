// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009a08d0 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h2eb5fbcba01eff0f(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  const char *v3; // rax
  __int64 *v4; // r12
  __int64 v5; // r14
  __int64 v6; // rcx
  const void *v7; // r15
  size_t v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rdi
  __int64 i; // r15
  _BYTE v16[360]; // [rsp+8h] [rbp-8E8h] BYREF
  _BYTE v17[360]; // [rsp+170h] [rbp-780h] BYREF
  _QWORD __dst[65]; // [rsp+2D8h] [rbp-618h] BYREF
  _QWORD v19[50]; // [rsp+4E0h] [rbp-410h] BYREF
  _QWORD v20[50]; // [rsp+670h] [rbp-280h] BYREF
  _QWORD v21[3]; // [rsp+800h] [rbp-F0h] BYREF
  _QWORD v22[3]; // [rsp+818h] [rbp-D8h] BYREF
  _QWORD v23[3]; // [rsp+830h] [rbp-C0h] BYREF
  _QWORD v24[2]; // [rsp+848h] [rbp-A8h] BYREF
  size_t __n; // [rsp+858h] [rbp-98h]
  __int64 v26; // [rsp+860h] [rbp-90h] BYREF
  __int64 *v27; // [rsp+868h] [rbp-88h]
  __int64 v28; // [rsp+870h] [rbp-80h]
  __int64 v29; // [rsp+878h] [rbp-78h]
  __int64 v30; // [rsp+880h] [rbp-70h] BYREF
  size_t v31; // [rsp+888h] [rbp-68h]
  __int64 v32; // [rsp+890h] [rbp-60h]
  size_t v33; // [rsp+898h] [rbp-58h]
  __int64 v34; // [rsp+8A0h] [rbp-50h] BYREF
  __int64 v35; // [rsp+8A8h] [rbp-48h]
  __int64 v36; // [rsp+8B0h] [rbp-40h]
  void *__srca; // [rsp+8B8h] [rbp-38h]
  int v38; // [rsp+8C4h] [rbp-2Ch]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009a08f9*/
  __srca = __src + 520; /*0x1009a0911*/
  memcpy(v19, __src + 520, sizeof(v19)); /*0x1009a0915*/
  v36 = *((_QWORD *)__src + 117); /*0x1009a0921*/
  v2 = *((_QWORD *)__src + 115); /*0x1009a0925*/
  v35 = *((_QWORD *)__src + 116); /*0x1009a0933*/
  v34 = v2; /*0x1009a0937*/
  v20[6] = 0; /*0x1009a093b*/
  v20[0] = "import_remote_device_secret_if_emptyget_mystery_unlock_grantsmerge_mystery_unlock_grantsget_notification_client_stateget_system_info"; /*0x1009a094d*/
  v20[1] = 36; /*0x1009a0954*/
  v3 = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x1009a095f*/
  v20[2] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x1009a0966*/
  v20[3] = 4; /*0x1009a096d*/
  v20[4] = __dst; /*0x1009a0978*/
  v20[5] = &v34; /*0x1009a0983*/
  LOBYTE(v3) = 1; /*0x1009a0995*/
  v38 = (int)v3; /*0x1009a0997*/
  v4 = (__int64 *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(__dst[64] + 16LL); /*0x1009a099f*/
  if ( !v4 ) /*0x1009a09a5*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009a09bc*/
      &v26,
      v20,
      &v20[2]);
    if ( (_BYTE)v26 != 6 ) /*0x1009a09c8*/
    {
      v20[4] = v29; /*0x1009a0b79*/
      v20[3] = v28; /*0x1009a0b84*/
      v20[2] = v27; /*0x1009a0b99*/
      v20[1] = v26; /*0x1009a0ba0*/
      memcpy(v17, __srca, sizeof(v17)); /*0x1009a0bba*/
      v10 = *((_QWORD *)__src + 111); /*0x1009a0bcd*/
      v22[0] = *((_QWORD *)__src + 110); /*0x1009a0bd4*/
      v22[1] = v10; /*0x1009a0bdb*/
      v22[2] = *((_QWORD *)__src + 112); /*0x1009a0be9*/
      v20[0] = 1; /*0x1009a0bfe*/
      v38 = 0; /*0x1009a0c09*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a0c21*/
        v17,
        v19[48],
        v20,
        v22,
        LODWORD(v19[49]),
        HIDWORD(v19[49]));
      goto LABEL_21; /*0x1009a0c21*/
    }
    v4 = v27; /*0x1009a09ce*/
  }
  v20[6] = 0; /*0x1009a09d5*/
  v20[0] = "import_remote_device_secret_if_emptyget_mystery_unlock_grantsmerge_mystery_unlock_grantsget_notification_client_stateget_system_info"; /*0x1009a09e0*/
  v20[1] = 36; /*0x1009a09e7*/
  v20[2] = "secretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a09f9*/
  v20[3] = 6; /*0x1009a0a00*/
  v20[4] = __dst; /*0x1009a0a0b*/
  v20[5] = &v34; /*0x1009a0a12*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v30, v20); /*0x1009a0a24*/
  if ( (_BYTE)v30 == 6 ) /*0x1009a0a2d*/
  {
    v23[2] = v33; /*0x1009a0a33*/
    v23[1] = v32; /*0x1009a0a42*/
    v23[0] = v31; /*0x1009a0a49*/
    codexmate_lib::commands::system::import_remote_device_secret_if_empty::h15d2e96febc08e0d((__int64)v24, v4, v23); /*0x1009a0a61*/
    memcpy(v20, __srca, sizeof(v20)); /*0x1009a0a76*/
    v5 = v24[0]; /*0x1009a0a7b*/
    if ( v24[0] == 0x8000000000000000LL ) /*0x1009a0a8f*/
    {
      LOBYTE(v30) = 6; /*0x1009a0a95*/
LABEL_20:
      tauri::ipc::InvokeResolver$LT$R$GT$::respond::h9f6c6c7c6be4e32b(v20); /*0x1009a0c9d*/
      goto LABEL_21; /*0x1009a0ca8*/
    }
    v7 = (const void *)v24[1]; /*0x1009a0b4e*/
    v8 = __n; /*0x1009a0b55*/
    if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1009a0b5f*/
    {
      v9 = 0; /*0x1009a0b65*/
      goto LABEL_10; /*0x1009a0b65*/
    }
    if ( __n ) /*0x1009a0c32*/
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v20, __srca); /*0x1009a0c34*/
      v9 = 1; /*0x1009a0c39*/
      v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x1009a0c47*/
      if ( !v11 ) /*0x1009a0c4f*/
LABEL_10:
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v8); /*0x1009a0b68*/
      v12 = v11; /*0x1009a0c55*/
    }
    else
    {
      v12 = 1; /*0x1009a0c5a*/
    }
    memcpy((void *)v12, v7, v8); /*0x1009a0c69*/
    if ( v5 ) /*0x1009a0c71*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v5, 1); /*0x1009a0c7e*/
    LOBYTE(v30) = 3; /*0x1009a0c83*/
    v31 = v8; /*0x1009a0c87*/
    v32 = v12; /*0x1009a0c8b*/
    v33 = v8; /*0x1009a0c8f*/
    goto LABEL_20; /*0x1009a0c8f*/
  }
  v20[4] = v33; /*0x1009a0aa2*/
  v20[3] = v32; /*0x1009a0aad*/
  v20[2] = v31; /*0x1009a0abc*/
  v20[1] = v30; /*0x1009a0ac3*/
  memcpy(v16, __srca, sizeof(v16)); /*0x1009a0add*/
  v6 = *((_QWORD *)__src + 111); /*0x1009a0af0*/
  v21[0] = *((_QWORD *)__src + 110); /*0x1009a0af7*/
  v21[1] = v6; /*0x1009a0afe*/
  v21[2] = *((_QWORD *)__src + 112); /*0x1009a0b0c*/
  v20[0] = 1; /*0x1009a0b21*/
  v38 = 0; /*0x1009a0b2c*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a0b44*/
    v16,
    v19[48],
    v20,
    v21,
    LODWORD(v19[49]),
    HIDWORD(v19[49]));
LABEL_21:
  if ( v34 != 0x8000000000000000LL ) /*0x1009a0cb1*/
  {
    v13 = v35; /*0x1009a0cb3*/
    for ( i = v36 + 1; i != 1; --i ) /*0x1009a0cbb*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v13); /*0x1009a0ccd*/
      v13 += 96; /*0x1009a0cd2*/
    }
    if ( v34 ) /*0x1009a0cde*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35, 96 * v34, 8); /*0x1009a0cf1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009a0d02*/
}