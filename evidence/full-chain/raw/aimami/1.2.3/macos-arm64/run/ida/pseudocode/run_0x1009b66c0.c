// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009b66c0 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hfe0a9f798f4393c2(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 *v4; // r12
  __int64 v5; // r14
  void *v6; // r15
  size_t v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r12
  __int64 v13; // rdi
  __int64 i; // r15
  _BYTE v16[360]; // [rsp+8h] [rbp-B38h] BYREF
  _BYTE v17[360]; // [rsp+170h] [rbp-9D0h] BYREF
  _BYTE v18[360]; // [rsp+2D8h] [rbp-868h] BYREF
  _QWORD __dst[65]; // [rsp+440h] [rbp-700h] BYREF
  _QWORD __srca[50]; // [rsp+648h] [rbp-4F8h] BYREF
  _QWORD v21[50]; // [rsp+7D8h] [rbp-368h] BYREF
  _QWORD v22[19]; // [rsp+968h] [rbp-1D8h] BYREF
  _QWORD v23[3]; // [rsp+A00h] [rbp-140h] BYREF
  _QWORD v24[3]; // [rsp+A18h] [rbp-128h] BYREF
  _QWORD v25[3]; // [rsp+A30h] [rbp-110h] BYREF
  __int64 v26[3]; // [rsp+A48h] [rbp-F8h] BYREF
  int v27; // [rsp+A60h] [rbp-E0h] BYREF
  __int64 v28; // [rsp+A68h] [rbp-D8h]
  void *v29; // [rsp+A70h] [rbp-D0h]
  size_t __n; // [rsp+A78h] [rbp-C8h]
  __int64 v31; // [rsp+A80h] [rbp-C0h] BYREF
  char *v32; // [rsp+A88h] [rbp-B8h]
  __int64 v33; // [rsp+A90h] [rbp-B0h]
  _QWORD *v34; // [rsp+A98h] [rbp-A8h]
  __int64 v35; // [rsp+AA0h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+AA8h] [rbp-98h]
  __int64 v37; // [rsp+AB0h] [rbp-90h]
  __int64 v38; // [rsp+AB8h] [rbp-88h]
  __int64 v39; // [rsp+AC0h] [rbp-80h] BYREF
  __int64 v40; // [rsp+AC8h] [rbp-78h]
  __int64 v41; // [rsp+AD0h] [rbp-70h]
  __int64 v42; // [rsp+AD8h] [rbp-68h] BYREF
  __int64 v43; // [rsp+AE0h] [rbp-60h]
  char *v44; // [rsp+AE8h] [rbp-58h] BYREF
  __int64 v45; // [rsp+AF0h] [rbp-50h]
  _QWORD *v46; // [rsp+AF8h] [rbp-48h]
  __int64 *v47; // [rsp+B00h] [rbp-40h]
  __int64 v48; // [rsp+B08h] [rbp-38h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009b66e9*/
  memcpy(v21, __src + 520, sizeof(v21)); /*0x1009b6704*/
  v41 = *((_QWORD *)__src + 117); /*0x1009b6710*/
  v2 = *((_QWORD *)__src + 115); /*0x1009b6714*/
  v40 = *((_QWORD *)__src + 116); /*0x1009b6722*/
  v39 = v2; /*0x1009b6726*/
  v48 = 0; /*0x1009b672a*/
  v42 = (__int64)"set_usage_refresh_intervalrun_daemon_oncerestart_codexgraceful_restart_for_update"; /*0x1009b6739*/
  v43 = 26; /*0x1009b673d*/
  v44 = "appkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b674c*/
  v45 = 3; /*0x1009b6750*/
  v46 = __dst; /*0x1009b6758*/
  v47 = &v39; /*0x1009b6760*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(__srca); /*0x1009b6772*/
  if ( LODWORD(__srca[0]) != 3 ) /*0x1009b677e*/
  {
    memcpy(v22, __srca, sizeof(v22)); /*0x1009b683c*/
    v48 = 0; /*0x1009b6841*/
    v42 = (__int64)"set_usage_refresh_intervalrun_daemon_oncerestart_codexgraceful_restart_for_update"; /*0x1009b684c*/
    v43 = 26; /*0x1009b6850*/
    v44 = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x1009b685f*/
    v45 = 4; /*0x1009b6863*/
    v46 = __dst; /*0x1009b686b*/
    v47 = &v39; /*0x1009b6873*/
    v4 = (__int64 *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(__dst[64] + 16LL); /*0x1009b6887*/
    if ( !v4 ) /*0x1009b688d*/
    {
      _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009b689e*/
        &v31,
        &v42,
        &v44);
      if ( (_BYTE)v31 != 6 ) /*0x1009b68aa*/
      {
        v46 = v34; /*0x1009b6a8b*/
        v45 = v33; /*0x1009b6a96*/
        v44 = v32; /*0x1009b6aa8*/
        v43 = v31; /*0x1009b6aac*/
        memcpy(v17, __src + 520, sizeof(v17)); /*0x1009b6ac2*/
        v10 = *((_QWORD *)__src + 111); /*0x1009b6ad5*/
        v24[0] = *((_QWORD *)__src + 110); /*0x1009b6adc*/
        v24[1] = v10; /*0x1009b6ae3*/
        v24[2] = *((_QWORD *)__src + 112); /*0x1009b6af1*/
        v42 = 1; /*0x1009b6b06*/
        tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b6b1f*/
          v17,
          v21[48],
          &v42,
          v24,
          LODWORD(v21[49]),
          HIDWORD(v21[49]));
        core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v22); /*0x1009b6b2e*/
        goto LABEL_22; /*0x1009b6b33*/
      }
      v4 = (__int64 *)v32; /*0x1009b68b0*/
    }
    v48 = 0; /*0x1009b68b7*/
    v42 = (__int64)"set_usage_refresh_intervalrun_daemon_oncerestart_codexgraceful_restart_for_update"; /*0x1009b68bf*/
    v43 = 26; /*0x1009b68c3*/
    v44 = "intervalUrlParseapp_showapp_hideset_textchannelsbasenameresolverset_menu"; /*0x1009b68d2*/
    v45 = 8; /*0x1009b68d6*/
    v46 = __dst; /*0x1009b68de*/
    v47 = &v39; /*0x1009b68e6*/
    _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v35, &v42); /*0x1009b68f8*/
    if ( (_BYTE)v35 != 6 ) /*0x1009b6904*/
    {
      v46 = (_QWORD *)v38; /*0x1009b69a7*/
      v45 = v37; /*0x1009b69b2*/
      v44 = (char *)v36; /*0x1009b69c4*/
      v43 = v35; /*0x1009b69c8*/
      memcpy(v16, __src + 520, sizeof(v16)); /*0x1009b69de*/
      v9 = *((_QWORD *)__src + 111); /*0x1009b69f1*/
      v23[0] = *((_QWORD *)__src + 110); /*0x1009b69f8*/
      v23[1] = v9; /*0x1009b69ff*/
      v23[2] = *((_QWORD *)__src + 112); /*0x1009b6a0d*/
      v42 = 1; /*0x1009b6a22*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b6a38*/
        v16,
        v21[48],
        &v42,
        v23,
        LODWORD(v21[49]),
        HIDWORD(v21[49]));
      core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v22); /*0x1009b6a47*/
      goto LABEL_22; /*0x1009b6a4c*/
    }
    v26[2] = v38; /*0x1009b6911*/
    v26[1] = v37; /*0x1009b6926*/
    v26[0] = v36; /*0x1009b692d*/
    codexmate_lib::commands::system::set_usage_refresh_interval::h290a7d3781e0ba94((__int64)&v27, (__int64)v22, v4, v26); /*0x1009b694c*/
    memcpy(__srca, __src + 520, sizeof(__srca)); /*0x1009b6960*/
    if ( v27 == 1 ) /*0x1009b696c*/
    {
      v5 = v28; /*0x1009b6972*/
      v6 = v29; /*0x1009b6979*/
      v7 = __n; /*0x1009b6980*/
      if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1009b698a*/
      {
        v8 = 0; /*0x1009b6990*/
        goto LABEL_10; /*0x1009b6990*/
      }
      if ( __n ) /*0x1009b6b38*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__srca, __src + 520); /*0x1009b6b3a*/
        v8 = 1; /*0x1009b6b3f*/
        v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x1009b6b4d*/
        if ( !v11 ) /*0x1009b6b55*/
LABEL_10:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x1009b6993*/
        v12 = v11; /*0x1009b6b5b*/
      }
      else
      {
        v12 = 1; /*0x1009b6b60*/
      }
      memcpy((void *)v12, v6, v7); /*0x1009b6b6f*/
      if ( v5 ) /*0x1009b6b77*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x1009b6b84*/
      LOBYTE(v22[0]) = 3; /*0x1009b6b89*/
      v22[1] = v7; /*0x1009b6b90*/
      v22[2] = v12; /*0x1009b6b97*/
      v22[3] = v7; /*0x1009b6b9e*/
    }
    else
    {
      v22[3] = __n; /*0x1009b6a5c*/
      v22[2] = v29; /*0x1009b6a6a*/
      v22[1] = v28; /*0x1009b6a71*/
      LOBYTE(v22[0]) = 6; /*0x1009b6a78*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::h95a2ba7235076756(__srca); /*0x1009b6bb3*/
    goto LABEL_22; /*0x1009b6bb3*/
  }
  v46 = (_QWORD *)__srca[4]; /*0x1009b678b*/
  v45 = __srca[3]; /*0x1009b6796*/
  v44 = (char *)__srca[2]; /*0x1009b67a8*/
  v43 = __srca[1]; /*0x1009b67ac*/
  memcpy(v18, __src + 520, sizeof(v18)); /*0x1009b67c2*/
  v3 = *((_QWORD *)__src + 111); /*0x1009b67d5*/
  v25[0] = *((_QWORD *)__src + 110); /*0x1009b67dc*/
  v25[1] = v3; /*0x1009b67e3*/
  v25[2] = *((_QWORD *)__src + 112); /*0x1009b67f1*/
  v42 = 1; /*0x1009b6806*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b681f*/
    v18,
    v21[48],
    &v42,
    v25,
    LODWORD(v21[49]),
    HIDWORD(v21[49]));
LABEL_22:
  if ( !__OFSUB__(0, v39) ) /*0x1009b6bbe*/
  {
    v13 = v40; /*0x1009b6bc0*/
    for ( i = v41 + 1; i != 1; --i ) /*0x1009b6bc8*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v13); /*0x1009b6bdd*/
      v13 += 96; /*0x1009b6be2*/
    }
    if ( v39 ) /*0x1009b6bee*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v40, 96 * v39, 8); /*0x1009b6c01*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009b6c12*/
}