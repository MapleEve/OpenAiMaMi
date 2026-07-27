// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009b0080 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::hbe847f60890f2bb4(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // rdi
  __int64 i; // r15
  _BYTE v7[360]; // [rsp+0h] [rbp-7B0h] BYREF
  _BYTE __dst[520]; // [rsp+168h] [rbp-648h] BYREF
  __int64 v9[18]; // [rsp+370h] [rbp-440h] BYREF
  _QWORD v10[50]; // [rsp+400h] [rbp-3B0h] BYREF
  _QWORD __srca[50]; // [rsp+590h] [rbp-220h] BYREF
  _QWORD v12[3]; // [rsp+720h] [rbp-90h] BYREF
  __int64 v13; // [rsp+738h] [rbp-78h] BYREF
  __int64 v14; // [rsp+740h] [rbp-70h]
  char *v15; // [rsp+748h] [rbp-68h]
  __int64 v16; // [rsp+750h] [rbp-60h]
  _BYTE *v17; // [rsp+758h] [rbp-58h]
  __int64 *v18; // [rsp+760h] [rbp-50h]
  __int64 v19; // [rsp+768h] [rbp-48h]
  __int64 v20; // [rsp+778h] [rbp-38h] BYREF
  __int64 v21; // [rsp+780h] [rbp-30h]
  __int64 v22; // [rsp+788h] [rbp-28h]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009b00a7*/
  memcpy(v10, __src + 520, sizeof(v10)); /*0x1009b00c2*/
  v22 = *((_QWORD *)__src + 117); /*0x1009b00ce*/
  v2 = *((_QWORD *)__src + 115); /*0x1009b00d2*/
  v21 = *((_QWORD *)__src + 116); /*0x1009b00e0*/
  v20 = v2; /*0x1009b00e4*/
  v19 = 0; /*0x1009b00e8*/
  v13 = (__int64)"write_client_debug_log"; /*0x1009b00f7*/
  v14 = 22; /*0x1009b00fb*/
  v15 = "eventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009b010a*/
  v16 = 5; /*0x1009b010e*/
  v17 = __dst; /*0x1009b0116*/
  v18 = &v20; /*0x1009b011e*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h4720a3734e0ee7cd(__srca); /*0x1009b0130*/
  if ( __OFSUB__(0, __srca[0]) ) /*0x1009b0137*/
  {
    v17 = (_BYTE *)__srca[4]; /*0x1009b014b*/
    v16 = __srca[3]; /*0x1009b0156*/
    v15 = (char *)__srca[2]; /*0x1009b0168*/
    v14 = __srca[1]; /*0x1009b016c*/
    memcpy(v7, __src + 520, sizeof(v7)); /*0x1009b0182*/
    v3 = *((_QWORD *)__src + 111); /*0x1009b0195*/
    v12[0] = *((_QWORD *)__src + 110); /*0x1009b019c*/
    v12[1] = v3; /*0x1009b01a3*/
    v12[2] = *((_QWORD *)__src + 112); /*0x1009b01b1*/
    v13 = 1; /*0x1009b01c3*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009b01dc*/
      v7,
      v10[48],
      &v13,
      v12,
      LODWORD(v10[49]),
      HIDWORD(v10[49]));
  }
  else
  {
    memcpy(v9, __srca, sizeof(v9)); /*0x1009b01f9*/
    a2 = codexmate_lib::commands::debug_bundle::write_client_debug_log::h404eabbe19560404(v9); /*0x1009b0201*/
    memcpy(__srca, __src + 520, sizeof(__srca)); /*0x1009b0218*/
    LOBYTE(v13) = 6; /*0x1009b021d*/
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::h9f6c6c7c6be4e32b(__srca); /*0x1009b022b*/
  }
  if ( v20 != 0x8000000000000000LL ) /*0x1009b023e*/
  {
    v4 = v21; /*0x1009b0240*/
    for ( i = v22 + 1; i != 1; --i ) /*0x1009b0248*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v4); /*0x1009b025d*/
      v4 += 96; /*0x1009b0262*/
    }
    if ( v20 ) /*0x1009b026e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, 96 * v20, 8); /*0x1009b0281*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009b0292*/
}