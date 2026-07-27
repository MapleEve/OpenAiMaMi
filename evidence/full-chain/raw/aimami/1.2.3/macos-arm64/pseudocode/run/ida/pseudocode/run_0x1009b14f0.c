// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009b14f0 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hbf710ea9d428fc1c(
        char *__src,
        double a2,
        double a3)
{
  char *v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned __int64 v6; // r15
  void *v7; // r14
  void *v8; // r12
  __int64 v9; // r13
  __int64 v10; // rax
  size_t v11; // rbx
  __int64 v12; // rdi
  __int64 i; // r15
  _BYTE v15[360]; // [rsp+8h] [rbp-808h] BYREF
  _BYTE __dst[520]; // [rsp+170h] [rbp-6A0h] BYREF
  _QWORD v17[50]; // [rsp+378h] [rbp-498h] BYREF
  _BYTE v18[152]; // [rsp+508h] [rbp-308h] BYREF
  _QWORD __srca[50]; // [rsp+5A0h] [rbp-270h] BYREF
  _QWORD v20[3]; // [rsp+730h] [rbp-E0h] BYREF
  _BYTE *v21; // [rsp+748h] [rbp-C8h]
  __int64 *v22; // [rsp+750h] [rbp-C0h]
  __int64 v23; // [rsp+758h] [rbp-B8h]
  __int64 v24; // [rsp+760h] [rbp-B0h]
  __int64 v25; // [rsp+768h] [rbp-A8h]
  __int64 v26; // [rsp+770h] [rbp-A0h]
  __int64 v27; // [rsp+778h] [rbp-98h] BYREF
  __int64 v28; // [rsp+780h] [rbp-90h]
  __int64 v29; // [rsp+788h] [rbp-88h]
  __int64 v30; // [rsp+790h] [rbp-80h]
  unsigned __int64 v31; // [rsp+798h] [rbp-78h] BYREF
  __int64 v32; // [rsp+7A0h] [rbp-70h]
  void *v33; // [rsp+7A8h] [rbp-68h]
  size_t __n; // [rsp+7B0h] [rbp-60h]
  _BYTE *v35; // [rsp+7B8h] [rbp-58h]
  __int64 *v36; // [rsp+7C0h] [rbp-50h]
  __int64 v37; // [rsp+7C8h] [rbp-48h]
  __int64 v38; // [rsp+7D0h] [rbp-40h]
  __int64 v39; // [rsp+7D8h] [rbp-38h]
  __int64 v40; // [rsp+7E0h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009b1519*/
  v3 = __src + 520; /*0x1009b151e*/
  memcpy(v17, __src + 520, sizeof(v17)); /*0x1009b1534*/
  v29 = *((_QWORD *)__src + 117); /*0x1009b1540*/
  v4 = *((_QWORD *)__src + 115); /*0x1009b1547*/
  v28 = *((_QWORD *)__src + 116); /*0x1009b1555*/
  v27 = v4; /*0x1009b155c*/
  v37 = 0; /*0x1009b1563*/
  v31 = (unsigned __int64)"hide_voice_search_overlayvoice_search_overlay_ready"; /*0x1009b1572*/
  v32 = 25; /*0x1009b1576*/
  v33 = "appkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b1585*/
  __n = 3; /*0x1009b1589*/
  v35 = __dst; /*0x1009b1591*/
  v36 = &v27; /*0x1009b159c*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(__srca); /*0x1009b15ae*/
  if ( LODWORD(__srca[0]) != 3 ) /*0x1009b15ba*/
  {
    memcpy(v18, __srca, sizeof(v18)); /*0x1009b1685*/
    codexmate_lib::core::voice::runtime::overlay::hide_voice_search_overlay::h2f59ad77e2c123c3((__int64)v18, a2, a3); /*0x1009b168d*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::hf6edda7bcbeb3a54((__int64)&v31, (__int64)__srca); /*0x1009b1696*/
    v6 = v31; /*0x1009b169b*/
    v30 = v32; /*0x1009b16a3*/
    v7 = v33; /*0x1009b16a7*/
    v8 = (void *)__n; /*0x1009b16ab*/
    v21 = v35; /*0x1009b16b3*/
    v22 = v36; /*0x1009b16be*/
    v23 = v37; /*0x1009b16c9*/
    v24 = v38; /*0x1009b16d4*/
    v25 = v39; /*0x1009b16df*/
    v26 = v40; /*0x1009b16ea*/
    core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v18); /*0x1009b16f8*/
    memcpy(__srca, v3, sizeof(__srca)); /*0x1009b170c*/
    if ( v6 == 0x8000000000000000LL ) /*0x1009b171e*/
    {
      if ( (__int64)v8 < 0 ) /*0x1009b1723*/
      {
        v9 = 0; /*0x1009b1725*/
        goto LABEL_6; /*0x1009b1725*/
      }
      if ( v8 ) /*0x1009b178d*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(__srca, v3); /*0x1009b178f*/
        v9 = 1; /*0x1009b1794*/
        v10 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v8, 1); /*0x1009b17a2*/
        if ( !v10 ) /*0x1009b17aa*/
LABEL_6:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v9, v8); /*0x1009b1728*/
        v11 = v10; /*0x1009b17b0*/
      }
      else
      {
        v11 = 1; /*0x1009b17bf*/
      }
      memcpy((void *)v11, v7, (size_t)v8); /*0x1009b17cd*/
      if ( v30 ) /*0x1009b17d9*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v30, 1); /*0x1009b17e3*/
      LOBYTE(v32) = 3; /*0x1009b17e8*/
      v33 = v8; /*0x1009b17ec*/
      __n = v11; /*0x1009b17f0*/
      v35 = v8; /*0x1009b17f4*/
      v31 = 0x8000000000000000LL; /*0x1009b17f8*/
    }
    else
    {
      v31 = v6; /*0x1009b1735*/
      v32 = v30; /*0x1009b173d*/
      v33 = v7; /*0x1009b1741*/
      __n = (size_t)v8; /*0x1009b1745*/
      v35 = v21; /*0x1009b1757*/
      v36 = v22; /*0x1009b175b*/
      v37 = v23; /*0x1009b1766*/
      v38 = v24; /*0x1009b1771*/
      v39 = v25; /*0x1009b177c*/
      v40 = v26; /*0x1009b1787*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::hd6e58039a39c24e0(__srca); /*0x1009b1807*/
    goto LABEL_16; /*0x1009b1807*/
  }
  v35 = (_BYTE *)__srca[4]; /*0x1009b15c7*/
  __n = __srca[3]; /*0x1009b15d2*/
  v33 = (void *)__srca[2]; /*0x1009b15e4*/
  v32 = __srca[1]; /*0x1009b15e8*/
  memcpy(v15, __src + 520, sizeof(v15)); /*0x1009b15fe*/
  v5 = *((_QWORD *)__src + 111); /*0x1009b1611*/
  v20[0] = *((_QWORD *)__src + 110); /*0x1009b1618*/
  v20[1] = v5; /*0x1009b161f*/
  v20[2] = *((_QWORD *)__src + 112); /*0x1009b162d*/
  v31 = 1; /*0x1009b1642*/
  tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b165b*/
    v15,
    v17[48],
    &v31,
    v20,
    LODWORD(v17[49]),
    HIDWORD(v17[49]));
LABEL_16:
  if ( v27 != 0x8000000000000000LL ) /*0x1009b1813*/
  {
    v12 = v28; /*0x1009b1815*/
    for ( i = v29 + 1; i != 1; --i ) /*0x1009b1823*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v12); /*0x1009b183d*/
      v12 += 96; /*0x1009b1842*/
    }
    if ( v27 ) /*0x1009b1851*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v28, 96 * v27, 8); /*0x1009b1867*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009b1878*/
}