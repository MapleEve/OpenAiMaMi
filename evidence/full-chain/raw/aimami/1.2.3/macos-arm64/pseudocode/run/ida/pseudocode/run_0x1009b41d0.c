// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009b41d0 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hf4550b6d288201c2(
        char *__src,
        double a2,
        double a3)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // r12
  __int64 v7; // r13
  __int64 v8; // r14
  void *v9; // r15
  __int64 v10; // r12
  __int64 v11; // r13
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rbx
  __int64 v16; // rdi
  __int64 i; // r15
  _BYTE v19[360]; // [rsp+0h] [rbp-B60h] BYREF
  _BYTE v20[360]; // [rsp+168h] [rbp-9F8h] BYREF
  _BYTE v21[360]; // [rsp+2D0h] [rbp-890h] BYREF
  _BYTE __dst[520]; // [rsp+438h] [rbp-728h] BYREF
  _QWORD v23[50]; // [rsp+640h] [rbp-520h] BYREF
  _QWORD v24[50]; // [rsp+7D0h] [rbp-390h] BYREF
  _QWORD v25[19]; // [rsp+960h] [rbp-200h] BYREF
  _QWORD v26[3]; // [rsp+9F8h] [rbp-168h] BYREF
  _QWORD v27[3]; // [rsp+A10h] [rbp-150h] BYREF
  _QWORD v28[3]; // [rsp+A28h] [rbp-138h] BYREF
  _BYTE *v29; // [rsp+A40h] [rbp-120h]
  __int64 *v30; // [rsp+A48h] [rbp-118h]
  __int64 v31; // [rsp+A50h] [rbp-110h]
  __int64 v32; // [rsp+A58h] [rbp-108h]
  __int64 v33; // [rsp+A60h] [rbp-100h]
  __int64 v34; // [rsp+A68h] [rbp-F8h]
  void *v35; // [rsp+A70h] [rbp-F0h]
  __int64 v36; // [rsp+A78h] [rbp-E8h] BYREF
  void *v37; // [rsp+A80h] [rbp-E0h]
  size_t v38; // [rsp+A88h] [rbp-D8h]
  __int64 *v39; // [rsp+A90h] [rbp-D0h]
  __int64 v40; // [rsp+A98h] [rbp-C8h] BYREF
  void *v41; // [rsp+AA0h] [rbp-C0h]
  size_t v42; // [rsp+AA8h] [rbp-B8h]
  _BYTE *v43; // [rsp+AB0h] [rbp-B0h]
  int v44; // [rsp+ABCh] [rbp-A4h]
  __int64 v45; // [rsp+AC0h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+AC8h] [rbp-98h]
  __int64 v47; // [rsp+AD0h] [rbp-90h]
  void *__srca; // [rsp+AD8h] [rbp-88h]
  size_t v49; // [rsp+AE0h] [rbp-80h]
  __int64 v50; // [rsp+AE8h] [rbp-78h] BYREF
  __int64 v51; // [rsp+AF0h] [rbp-70h]
  void *v52; // [rsp+AF8h] [rbp-68h]
  size_t __n; // [rsp+B00h] [rbp-60h]
  _BYTE *v54; // [rsp+B08h] [rbp-58h]
  __int64 *v55; // [rsp+B10h] [rbp-50h]
  __int64 v56; // [rsp+B18h] [rbp-48h]
  __int64 v57; // [rsp+B20h] [rbp-40h]
  __int64 v58; // [rsp+B28h] [rbp-38h]
  __int64 v59; // [rsp+B30h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009b41f9*/
  __srca = __src + 520; /*0x1009b4211*/
  memcpy(v24, __src + 520, sizeof(v24)); /*0x1009b4218*/
  v47 = *((_QWORD *)__src + 117); /*0x1009b4224*/
  v3 = *((_QWORD *)__src + 115); /*0x1009b422b*/
  v46 = *((_QWORD *)__src + 116); /*0x1009b4239*/
  v45 = v3; /*0x1009b4240*/
  v56 = 0; /*0x1009b4247*/
  v50 = (__int64)"show_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009b4256*/
  v51 = 25; /*0x1009b425a*/
  v52 = "appkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b4269*/
  __n = 3; /*0x1009b426d*/
  v54 = __dst; /*0x1009b4275*/
  v55 = &v45; /*0x1009b4280*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(v23); /*0x1009b4292*/
  if ( LODWORD(v23[0]) == 3 ) /*0x1009b429e*/
  {
    v54 = (_BYTE *)v23[4]; /*0x1009b42ab*/
    __n = v23[3]; /*0x1009b42b6*/
    v52 = (void *)v23[2]; /*0x1009b42c8*/
    v51 = v23[1]; /*0x1009b42cc*/
    memcpy(v21, __srca, sizeof(v21)); /*0x1009b42e6*/
    v4 = *((_QWORD *)__src + 111); /*0x1009b42f9*/
    v28[0] = *((_QWORD *)__src + 110); /*0x1009b4300*/
    v28[1] = v4; /*0x1009b4307*/
    v28[2] = *((_QWORD *)__src + 112); /*0x1009b4315*/
    v50 = 1; /*0x1009b432a*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b4343*/
      v21,
      v24[48],
      &v50,
      v28,
      LODWORD(v24[49]),
      HIDWORD(v24[49]));
    goto LABEL_22; /*0x1009b4352*/
  }
  memcpy(v25, v23, sizeof(v25)); /*0x1009b436a*/
  v56 = 0; /*0x1009b436f*/
  v50 = (__int64)"show_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009b4377*/
  v51 = 25; /*0x1009b437b*/
  v52 = "queryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b438a*/
  __n = 5; /*0x1009b438e*/
  v54 = __dst; /*0x1009b4396*/
  v55 = &v45; /*0x1009b439a*/
  v5 = _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v40, &v50); /*0x1009b43a9*/
  LOBYTE(v5) = (_BYTE)v40 == 6; /*0x1009b43b5*/
  v44 = v5; /*0x1009b43b8*/
  if ( (_BYTE)v40 != 6 ) /*0x1009b43be*/
  {
    v54 = v43; /*0x1009b452a*/
    __n = v42; /*0x1009b4535*/
    v52 = v41; /*0x1009b4547*/
    v51 = v40; /*0x1009b454b*/
    memcpy(v20, __srca, sizeof(v20)); /*0x1009b4565*/
    v12 = *((_QWORD *)__src + 111); /*0x1009b4578*/
    v27[0] = *((_QWORD *)__src + 110); /*0x1009b457f*/
    v27[1] = v12; /*0x1009b4586*/
    v27[2] = *((_QWORD *)__src + 112); /*0x1009b4594*/
    v50 = 1; /*0x1009b45a9*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b45bf*/
      v20,
      v24[48],
      &v50,
      v27,
      LODWORD(v24[49]),
      HIDWORD(v24[49]));
    core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v25); /*0x1009b45ce*/
    goto LABEL_22; /*0x1009b45dd*/
  }
  v6 = (__int64)v41; /*0x1009b43c4*/
  v49 = v42; /*0x1009b43d2*/
  v35 = v43; /*0x1009b43dd*/
  v56 = 0; /*0x1009b43e4*/
  v50 = (__int64)"show_voice_search_overlayhide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009b43ec*/
  v51 = 25; /*0x1009b43f0*/
  v52 = "outputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b43ff*/
  __n = 6; /*0x1009b4403*/
  v54 = __dst; /*0x1009b440b*/
  v55 = &v45; /*0x1009b440f*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v36, &v50); /*0x1009b441e*/
  if ( (_BYTE)v36 == 6 ) /*0x1009b442a*/
  {
    v50 = v6; /*0x1009b4430*/
    v51 = v49; /*0x1009b4438*/
    v52 = v35; /*0x1009b4443*/
    __n = (size_t)v37; /*0x1009b4455*/
    v54 = (_BYTE *)v38; /*0x1009b4459*/
    v55 = v39; /*0x1009b4464*/
    a2 = codexmate_lib::core::voice::runtime::overlay::show_voice_search_overlay::hd6eaa132172eee52( /*0x1009b4473*/
           (__int64)v25,
           &v50,
           a2,
           a3);
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hf6edda7bcbeb3a54((__int64)&v50, (__int64)&v50); /*0x1009b447c*/
    v7 = v50; /*0x1009b4481*/
    v8 = v51; /*0x1009b4485*/
    v9 = v52; /*0x1009b4489*/
    v10 = __n; /*0x1009b448d*/
    v29 = v54; /*0x1009b4495*/
    v30 = v55; /*0x1009b44a0*/
    v31 = v56; /*0x1009b44ab*/
    v32 = v57; /*0x1009b44b6*/
    v33 = v58; /*0x1009b44c1*/
    v34 = v59; /*0x1009b44cc*/
    core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v25); /*0x1009b44da*/
    memcpy(v23, __srca, sizeof(v23)); /*0x1009b44f2*/
    if ( v7 == 0x8000000000000000LL ) /*0x1009b4504*/
    {
      if ( v10 < 0 ) /*0x1009b450d*/
      {
        v11 = 0; /*0x1009b4513*/
        goto LABEL_8; /*0x1009b4513*/
      }
      if ( v10 ) /*0x1009b4729*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v23, __srca); /*0x1009b472b*/
        v11 = 1; /*0x1009b4730*/
        v14 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v10, 1); /*0x1009b473e*/
        if ( !v14 ) /*0x1009b4746*/
LABEL_8:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v11, v10); /*0x1009b4516*/
        v15 = v14; /*0x1009b474c*/
      }
      else
      {
        v15 = 1; /*0x1009b4751*/
      }
      memcpy((void *)v15, v9, v10); /*0x1009b475f*/
      if ( v8 ) /*0x1009b4767*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v9, v8, 1); /*0x1009b4774*/
      LOBYTE(v25[1]) = 3; /*0x1009b4779*/
      v25[2] = v10; /*0x1009b4780*/
      v25[3] = v15; /*0x1009b4787*/
      v25[4] = v10; /*0x1009b478e*/
      v25[0] = 0x8000000000000000LL; /*0x1009b479f*/
    }
    else
    {
      v25[0] = v7; /*0x1009b46b7*/
      v25[1] = v8; /*0x1009b46be*/
      v25[2] = v9; /*0x1009b46c5*/
      v25[3] = v10; /*0x1009b46cc*/
      v25[4] = v29; /*0x1009b46e1*/
      v25[5] = v30; /*0x1009b46e8*/
      v25[6] = v31; /*0x1009b46f6*/
      v25[7] = v32; /*0x1009b4704*/
      v25[8] = v33; /*0x1009b4712*/
      v25[9] = v34; /*0x1009b4720*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::hd6e58039a39c24e0(v23); /*0x1009b47b4*/
    goto LABEL_22; /*0x1009b47b4*/
  }
  v54 = v39; /*0x1009b45e9*/
  __n = v38; /*0x1009b45f4*/
  v52 = v37; /*0x1009b4606*/
  v51 = v36; /*0x1009b460a*/
  memcpy(v19, __srca, sizeof(v19)); /*0x1009b4624*/
  v13 = *((_QWORD *)__src + 111); /*0x1009b4637*/
  v26[0] = *((_QWORD *)__src + 110); /*0x1009b463e*/
  v26[1] = v13; /*0x1009b4645*/
  v26[2] = *((_QWORD *)__src + 112); /*0x1009b4653*/
  v50 = 1; /*0x1009b4668*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b467e*/
    v19,
    v24[48],
    &v50,
    v26,
    LODWORD(v24[49]),
    HIDWORD(v24[49]));
  if ( v6 ) /*0x1009b4690*/
    a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, v6, 1); /*0x1009b469e*/
  core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v25); /*0x1009b46ad*/
LABEL_22:
  if ( v45 != 0x8000000000000000LL ) /*0x1009b47c0*/
  {
    v16 = v46; /*0x1009b47c2*/
    for ( i = v47 + 1; i != 1; --i ) /*0x1009b47d0*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v16); /*0x1009b47ed*/
      v16 += 96; /*0x1009b47f2*/
    }
    if ( v45 ) /*0x1009b4801*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, 96 * v45, 8); /*0x1009b4817*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009b4828*/
}