// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009af590 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hbc8f0e3f99630224(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  char *v3; // rax
  _QWORD *v4; // r12
  __int64 v5; // r14
  _QWORD *v6; // r15
  unsigned __int64 v7; // rbx
  const void *v8; // r13
  _QWORD *v9; // r12
  __int64 v10; // r15
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rax
  size_t v14; // rbx
  __int64 v15; // rdi
  __int64 i; // r15
  _BYTE v18[360]; // [rsp+0h] [rbp-960h] BYREF
  _BYTE v19[360]; // [rsp+168h] [rbp-7F8h] BYREF
  _QWORD __dst[65]; // [rsp+2D0h] [rbp-690h] BYREF
  _QWORD v21[50]; // [rsp+4D8h] [rbp-488h] BYREF
  _BYTE v22[72]; // [rsp+668h] [rbp-2F8h] BYREF
  __int64 v23[3]; // [rsp+6B0h] [rbp-2B0h] BYREF
  _QWORD v24[50]; // [rsp+6C8h] [rbp-298h] BYREF
  _QWORD v25[3]; // [rsp+858h] [rbp-108h] BYREF
  _QWORD v26[3]; // [rsp+870h] [rbp-F0h] BYREF
  unsigned __int64 v27; // [rsp+888h] [rbp-D8h] BYREF
  __int64 v28; // [rsp+890h] [rbp-D0h]
  _QWORD *v29; // [rsp+898h] [rbp-C8h]
  _QWORD *v30; // [rsp+8A0h] [rbp-C0h]
  _QWORD v31[9]; // [rsp+8A8h] [rbp-B8h] BYREF
  __int64 v32; // [rsp+8F0h] [rbp-70h] BYREF
  _QWORD *v33; // [rsp+8F8h] [rbp-68h]
  __int64 v34; // [rsp+900h] [rbp-60h]
  __int64 v35; // [rsp+908h] [rbp-58h]
  __int64 v36; // [rsp+910h] [rbp-50h] BYREF
  __int64 v37; // [rsp+918h] [rbp-48h]
  __int64 v38; // [rsp+920h] [rbp-40h]
  void *__srca; // [rsp+928h] [rbp-38h]
  __int64 v40; // [rsp+930h] [rbp-30h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009af5b9*/
  __srca = __src + 520; /*0x1009af5d1*/
  memcpy(v21, __src + 520, sizeof(v21)); /*0x1009af5d5*/
  v38 = *((_QWORD *)__src + 117); /*0x1009af5e1*/
  v2 = *((_QWORD *)__src + 115); /*0x1009af5e5*/
  v37 = *((_QWORD *)__src + 116); /*0x1009af5f3*/
  v36 = v2; /*0x1009af5f7*/
  v24[6] = 0; /*0x1009af5fb*/
  v24[0] = "reveal_relay_api_key"; /*0x1009af60d*/
  v24[1] = 20; /*0x1009af614*/
  v3 = "managergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009af61f*/
  v24[2] = "managergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009af626*/
  v24[3] = 7; /*0x1009af62d*/
  v24[4] = __dst; /*0x1009af638*/
  v24[5] = &v36; /*0x1009af643*/
  LOBYTE(v3) = 1; /*0x1009af655*/
  LODWORD(v40) = (_DWORD)v3; /*0x1009af657*/
  v4 = (_QWORD *)tauri::state::StateManager::try_get::h5f9a3d34015fcee9(__dst[64] + 16LL); /*0x1009af65f*/
  if ( !v4 ) /*0x1009af665*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009af679*/
      &v32,
      v24,
      &v24[2]);
    if ( (_BYTE)v32 != 6 ) /*0x1009af682*/
    {
      v24[4] = v35; /*0x1009af8b1*/
      v24[3] = v34; /*0x1009af8bc*/
      v24[2] = v33; /*0x1009af8cb*/
      v24[1] = v32; /*0x1009af8d2*/
      memcpy(v19, __srca, sizeof(v19)); /*0x1009af8ec*/
      v12 = *((_QWORD *)__src + 111); /*0x1009af8ff*/
      v26[0] = *((_QWORD *)__src + 110); /*0x1009af906*/
      v26[1] = v12; /*0x1009af90d*/
      v26[2] = *((_QWORD *)__src + 112); /*0x1009af91b*/
      v24[0] = 1; /*0x1009af930*/
      LODWORD(v40) = 0; /*0x1009af93b*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009af953*/
        v19,
        v21[48],
        v24,
        v26,
        LODWORD(v21[49]),
        HIDWORD(v21[49]));
      goto LABEL_22; /*0x1009af958*/
    }
    v4 = v33; /*0x1009af688*/
  }
  v24[6] = 0; /*0x1009af68c*/
  v24[0] = "reveal_relay_api_key"; /*0x1009af697*/
  v24[1] = 20; /*0x1009af69e*/
  v24[2] = "providerIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009af6b0*/
  v24[3] = 10; /*0x1009af6b7*/
  v24[4] = __dst; /*0x1009af6c2*/
  v24[5] = &v36; /*0x1009af6c9*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8ef43ece7a700d6d(&v27, v24); /*0x1009af6de*/
  if ( (_BYTE)v27 == 6 ) /*0x1009af6ea*/
  {
    v5 = v28; /*0x1009af6f0*/
    v6 = v29; /*0x1009af6f7*/
    codexmate_lib::core::relay::manager::RelayManager::reveal_api_key::hcbba2998261408cc(v23, v4, v29, (size_t)v30); /*0x1009af712*/
    codexmate_lib::core::models::CoreEnvelope$LT$T$GT$::ok::h0c15de36b7bcca72((__int64)v24, v23); /*0x1009af725*/
    v7 = v24[0]; /*0x1009af72a*/
    v40 = v24[1]; /*0x1009af738*/
    v8 = (const void *)v24[2]; /*0x1009af73c*/
    v9 = (_QWORD *)v24[3]; /*0x1009af743*/
    qmemcpy(v22, &v24[4], sizeof(v22)); /*0x1009af75d*/
    if ( v5 ) /*0x1009af763*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x1009af770*/
    memcpy(v24, __srca, sizeof(v24)); /*0x1009af785*/
    if ( v7 == 0x8000000000000000LL ) /*0x1009af797*/
    {
      if ( (__int64)v9 < 0 ) /*0x1009af7a0*/
      {
        v10 = 0; /*0x1009af7a6*/
        goto LABEL_10; /*0x1009af7a6*/
      }
      if ( v9 ) /*0x1009af95d*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v24, __srca); /*0x1009af95f*/
        v10 = 1; /*0x1009af964*/
        v13 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v9, 1); /*0x1009af972*/
        if ( !v13 ) /*0x1009af97a*/
LABEL_10:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v10, v9); /*0x1009af7a9*/
        v14 = v13; /*0x1009af980*/
      }
      else
      {
        v14 = 1; /*0x1009af985*/
      }
      memcpy((void *)v14, v8, (size_t)v9); /*0x1009af993*/
      if ( v40 ) /*0x1009af99f*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v40, 1); /*0x1009af9a9*/
      LOBYTE(v28) = 3; /*0x1009af9ae*/
      v29 = v9; /*0x1009af9b5*/
      v30 = (_QWORD *)v14; /*0x1009af9bc*/
      v31[0] = v9; /*0x1009af9c3*/
      v27 = 0x8000000000000000LL; /*0x1009af9d4*/
    }
    else
    {
      v27 = v7; /*0x1009af872*/
      v28 = v40; /*0x1009af87d*/
      v29 = v8; /*0x1009af884*/
      v30 = v9; /*0x1009af88b*/
      qmemcpy(v31, v22, sizeof(v31)); /*0x1009af8a5*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::he6e9b581a8cbdc24(v24); /*0x1009af9e9*/
  }
  else
  {
    v24[4] = v30; /*0x1009af7bd*/
    v24[3] = v29; /*0x1009af7cb*/
    v24[2] = v28; /*0x1009af7e0*/
    v24[1] = v27; /*0x1009af7e7*/
    memcpy(v18, __srca, sizeof(v18)); /*0x1009af801*/
    v11 = *((_QWORD *)__src + 111); /*0x1009af814*/
    v25[0] = *((_QWORD *)__src + 110); /*0x1009af81b*/
    v25[1] = v11; /*0x1009af822*/
    v25[2] = *((_QWORD *)__src + 112); /*0x1009af830*/
    v24[0] = 1; /*0x1009af845*/
    LODWORD(v40) = 0; /*0x1009af850*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009af868*/
      v18,
      v21[48],
      v24,
      v25,
      LODWORD(v21[49]),
      HIDWORD(v21[49]));
  }
LABEL_22:
  if ( v36 != 0x8000000000000000LL ) /*0x1009af9fc*/
  {
    v15 = v37; /*0x1009af9fe*/
    for ( i = v38 + 1; i != 1; --i ) /*0x1009afa06*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v15); /*0x1009afa1d*/
      v15 += 96; /*0x1009afa22*/
    }
    if ( v36 ) /*0x1009afa2e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v37, 96 * v36, 8); /*0x1009afa41*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009afa52*/
}