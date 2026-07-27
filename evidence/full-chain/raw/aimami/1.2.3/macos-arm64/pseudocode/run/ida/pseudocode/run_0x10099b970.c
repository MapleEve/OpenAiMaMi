// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10099b970 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h0203691050a146a7(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  const char *v3; // rax
  _QWORD *v4; // r12
  __int64 v5; // r14
  const void *v6; // r15
  size_t v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rdi
  __int64 i; // r15
  _BYTE v16[360]; // [rsp+0h] [rbp-9C0h] BYREF
  _BYTE v17[360]; // [rsp+168h] [rbp-858h] BYREF
  _QWORD __dst[65]; // [rsp+2D0h] [rbp-6F0h] BYREF
  _QWORD v19[50]; // [rsp+4D8h] [rbp-4E8h] BYREF
  _QWORD v20[17]; // [rsp+668h] [rbp-358h] BYREF
  _QWORD v21[50]; // [rsp+6F0h] [rbp-2D0h] BYREF
  _QWORD v22[17]; // [rsp+880h] [rbp-140h] BYREF
  _QWORD v23[3]; // [rsp+908h] [rbp-B8h] BYREF
  _QWORD v24[3]; // [rsp+920h] [rbp-A0h] BYREF
  _QWORD v25[3]; // [rsp+938h] [rbp-88h] BYREF
  __int64 v26; // [rsp+950h] [rbp-70h] BYREF
  _QWORD *v27; // [rsp+958h] [rbp-68h]
  __int64 v28; // [rsp+960h] [rbp-60h]
  __int64 v29; // [rsp+968h] [rbp-58h]
  __int64 v30; // [rsp+970h] [rbp-50h] BYREF
  __int64 v31; // [rsp+978h] [rbp-48h]
  __int64 v32; // [rsp+980h] [rbp-40h]
  void *__srca; // [rsp+988h] [rbp-38h]
  int v34; // [rsp+994h] [rbp-2Ch]

  memcpy(__dst, __src, sizeof(__dst)); /*0x10099b999*/
  __srca = __src + 520; /*0x10099b9b1*/
  memcpy(v19, __src + 520, sizeof(v19)); /*0x10099b9b5*/
  v32 = *((_QWORD *)__src + 117); /*0x10099b9c1*/
  v2 = *((_QWORD *)__src + 115); /*0x10099b9c5*/
  v31 = *((_QWORD *)__src + 116); /*0x10099b9d3*/
  v30 = v2; /*0x10099b9d7*/
  v21[6] = 0; /*0x10099b9db*/
  v21[0] = "delete_sessionsexport_session_markdown"; /*0x10099b9ed*/
  v21[1] = 15; /*0x10099b9f4*/
  v3 = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x10099b9ff*/
  v21[2] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x10099ba06*/
  v21[3] = 4; /*0x10099ba0d*/
  v21[4] = __dst; /*0x10099ba18*/
  v21[5] = &v30; /*0x10099ba23*/
  LOBYTE(v3) = 1; /*0x10099ba35*/
  v34 = (int)v3; /*0x10099ba37*/
  v4 = (_QWORD *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(__dst[64] + 16LL); /*0x10099ba3f*/
  if ( !v4 ) /*0x10099ba45*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x10099ba59*/
      &v26,
      v21,
      &v21[2]);
    if ( (_BYTE)v26 != 6 ) /*0x10099ba62*/
    {
      v21[4] = v29; /*0x10099bc41*/
      v21[3] = v28; /*0x10099bc4c*/
      v21[2] = v27; /*0x10099bc5b*/
      v21[1] = v26; /*0x10099bc62*/
      memcpy(v17, __srca, sizeof(v17)); /*0x10099bc7c*/
      v10 = *((_QWORD *)__src + 111); /*0x10099bc8f*/
      v24[0] = *((_QWORD *)__src + 110); /*0x10099bc96*/
      v24[1] = v10; /*0x10099bc9d*/
      v24[2] = *((_QWORD *)__src + 112); /*0x10099bcab*/
      v21[0] = 1; /*0x10099bcc0*/
      v34 = 0; /*0x10099bccb*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x10099bce3*/
        v17,
        v19[48],
        v21,
        v24,
        LODWORD(v19[49]),
        HIDWORD(v19[49]));
      goto LABEL_21; /*0x10099bce3*/
    }
    v4 = v27; /*0x10099ba68*/
  }
  v21[6] = 0; /*0x10099ba6c*/
  v21[0] = "delete_sessionsexport_session_markdown"; /*0x10099ba77*/
  v21[1] = 15; /*0x10099ba7e*/
  v21[2] = "idsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x10099ba90*/
  v21[3] = 3; /*0x10099ba97*/
  v21[4] = __dst; /*0x10099baa2*/
  v21[5] = &v30; /*0x10099baa9*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h2acca326e8d04504(v22, v21); /*0x10099babe*/
  if ( LOBYTE(v22[0]) == 6 ) /*0x10099baca*/
  {
    v25[2] = v22[3]; /*0x10099bad7*/
    v25[1] = v22[2]; /*0x10099bae9*/
    v25[0] = v22[1]; /*0x10099baed*/
    codexmate_lib::commands::sessions::delete_sessions::hb1e57fbd78d3e61c((char *)v20, v4, v25); /*0x10099bb05*/
    memcpy(v21, __srca, sizeof(v21)); /*0x10099bb1a*/
    if ( v20[0] == 0x8000000000000000LL ) /*0x10099bb30*/
    {
      v5 = v20[1]; /*0x10099bb36*/
      v6 = (const void *)v20[2]; /*0x10099bb3d*/
      v7 = v20[3]; /*0x10099bb44*/
      if ( v20[3] < 0LL ) /*0x10099bb4e*/
      {
        v8 = 0; /*0x10099bb54*/
        goto LABEL_8; /*0x10099bb54*/
      }
      if ( v20[3] ) /*0x10099bcf7*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v21, __srca); /*0x10099bcf9*/
        v8 = 1; /*0x10099bcfe*/
        v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x10099bd0c*/
        if ( !v11 ) /*0x10099bd14*/
LABEL_8:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x10099bb57*/
        v12 = v11; /*0x10099bd1a*/
      }
      else
      {
        v12 = 1; /*0x10099bd1f*/
      }
      memcpy((void *)v12, v6, v7); /*0x10099bd2e*/
      if ( v5 ) /*0x10099bd36*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x10099bd43*/
      LOBYTE(v22[1]) = 3; /*0x10099bd48*/
      v22[2] = v7; /*0x10099bd4f*/
      v22[3] = v12; /*0x10099bd56*/
      v22[4] = v7; /*0x10099bd5d*/
      v22[0] = 0x8000000000000000LL; /*0x10099bd6e*/
    }
    else
    {
      memcpy(v22, v20, sizeof(v22)); /*0x10099bc33*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::hf6c75cb1d21edd09(v21, v22); /*0x10099bd83*/
  }
  else
  {
    v21[4] = v22[3]; /*0x10099bb6b*/
    v21[3] = v22[2]; /*0x10099bb79*/
    v21[2] = v22[1]; /*0x10099bb8e*/
    v21[1] = v22[0]; /*0x10099bb95*/
    memcpy(v16, __srca, sizeof(v16)); /*0x10099bbaf*/
    v9 = *((_QWORD *)__src + 111); /*0x10099bbc2*/
    v23[0] = *((_QWORD *)__src + 110); /*0x10099bbc9*/
    v23[1] = v9; /*0x10099bbd0*/
    v23[2] = *((_QWORD *)__src + 112); /*0x10099bbde*/
    v21[0] = 1; /*0x10099bbf3*/
    v34 = 0; /*0x10099bbfe*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x10099bc16*/
      v16,
      v19[48],
      v21,
      v23,
      LODWORD(v19[49]),
      HIDWORD(v19[49]));
  }
LABEL_21:
  if ( v30 != 0x8000000000000000LL ) /*0x10099bd8c*/
  {
    v13 = v31; /*0x10099bd8e*/
    for ( i = v32 + 1; i != 1; --i ) /*0x10099bd96*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v13); /*0x10099bdad*/
      v13 += 96; /*0x10099bdb2*/
    }
    if ( v30 ) /*0x10099bdbe*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v31, 96 * v30, 8); /*0x10099bdd1*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x10099bde2*/
}