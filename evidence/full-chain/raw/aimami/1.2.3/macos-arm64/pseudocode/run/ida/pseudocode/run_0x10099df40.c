// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x10099df40 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h1d4446d442326244(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 i; // r15
  _BYTE v7[360]; // [rsp+8h] [rbp-7B8h] BYREF
  _BYTE __dst[520]; // [rsp+170h] [rbp-650h] BYREF
  _QWORD v9[50]; // [rsp+378h] [rbp-448h] BYREF
  _BYTE v10[152]; // [rsp+508h] [rbp-2B8h] BYREF
  _QWORD __srca[50]; // [rsp+5A0h] [rbp-220h] BYREF
  _QWORD v12[3]; // [rsp+730h] [rbp-90h] BYREF
  __int64 v13; // [rsp+748h] [rbp-78h] BYREF
  __int64 v14; // [rsp+750h] [rbp-70h]
  char *v15; // [rsp+758h] [rbp-68h]
  __int64 v16; // [rsp+760h] [rbp-60h]
  _BYTE *v17; // [rsp+768h] [rbp-58h]
  __int64 *v18; // [rsp+770h] [rbp-50h]
  __int64 v19; // [rsp+778h] [rbp-48h]
  __int64 v20; // [rsp+788h] [rbp-38h] BYREF
  __int64 v21; // [rsp+790h] [rbp-30h]
  __int64 v22; // [rsp+798h] [rbp-28h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x10099df67*/
  memcpy(v9, __src + 520, sizeof(v9)); /*0x10099df82*/
  v22 = *((_QWORD *)__src + 117); /*0x10099df8e*/
  v2 = *((_QWORD *)__src + 115); /*0x10099df92*/
  v21 = *((_QWORD *)__src + 116); /*0x10099dfa0*/
  v20 = v2; /*0x10099dfa4*/
  v19 = 0; /*0x10099dfa8*/
  v13 = (__int64)"graceful_restart_for_update"; /*0x10099dfb7*/
  v14 = 27; /*0x10099dfbb*/
  v15 = "appkeyCodekeyKindstylemodifierMaskidsmutationGateenabledmodeIdurlllmProviderllmApiKeyllmBaseUrlprocessingModetransportcommandheadersenvironmentappBundleIdappNameentriessecretasrProviderasrApiKeyasrBaseUrlmanagergrantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x10099dfca*/
  v16 = 3; /*0x10099dfce*/
  v17 = __dst; /*0x10099dfd6*/
  v18 = &v20; /*0x10099dfde*/
  _$LT$tauri..app..AppHandle$LT$R$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h9c45ee9c5f4a8f62(__srca); /*0x10099dff0*/
  if ( LODWORD(__srca[0]) == 3 ) /*0x10099dffc*/
  {
    v17 = (_BYTE *)__srca[4]; /*0x10099e009*/
    v16 = __srca[3]; /*0x10099e014*/
    v15 = (char *)__srca[2]; /*0x10099e026*/
    v14 = __srca[1]; /*0x10099e02a*/
    memcpy(v7, __src + 520, sizeof(v7)); /*0x10099e040*/
    v3 = *((_QWORD *)__src + 111); /*0x10099e053*/
    v12[0] = *((_QWORD *)__src + 110); /*0x10099e05a*/
    v12[1] = v3; /*0x10099e061*/
    v12[2] = *((_QWORD *)__src + 112); /*0x10099e06f*/
    v13 = 1; /*0x10099e081*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x10099e09a*/
      v7,
      v9[48],
      &v13,
      v12,
      LODWORD(v9[49]),
      HIDWORD(v9[49]));
  }
  else
  {
    memcpy(v10, __srca, sizeof(v10)); /*0x10099e0b7*/
    tauri::app::AppHandle$LT$R$GT$::request_restart::hc6324b14ad39591a(v10); /*0x10099e0bf*/
    core::ptr::drop_in_place$LT$tauri..app..AppHandle$GT$::h1cfa7f2e7ebdb3d9(v10); /*0x10099e0cb*/
    memcpy(__srca, __src + 520, sizeof(__srca)); /*0x10099e0e2*/
    LOBYTE(v13) = 6; /*0x10099e0e7*/
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::h9f6c6c7c6be4e32b(__srca); /*0x10099e0f2*/
  }
  if ( !__OFSUB__(0, v20) ) /*0x10099e0fd*/
  {
    v4 = v21; /*0x10099e0ff*/
    for ( i = v22 + 1; i != 1; --i ) /*0x10099e107*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v4); /*0x10099e11d*/
      v4 += 96; /*0x10099e122*/
    }
    if ( v20 ) /*0x10099e12e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, 96 * v20, 8); /*0x10099e141*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x10099e152*/
}