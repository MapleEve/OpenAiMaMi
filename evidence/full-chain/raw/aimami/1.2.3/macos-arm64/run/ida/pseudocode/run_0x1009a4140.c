// __ZN13codexmate_lib3run28_$u7b$$u7b$closure$u7d$$u7d$28_$u7b$$u7b$closure$u7d$$u7d$ @ 0x1009a4140 | 基线 same-set
__int64 __fastcall codexmate_lib::run::_$u7b$$u7b$closure$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::h4c04873e1f4d554b(
        char *__src,
        double a2)
{
  __int64 v2; // rax
  const char *v3; // rax
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
  _BYTE v16[360]; // [rsp+0h] [rbp-8F0h] BYREF
  _BYTE v17[360]; // [rsp+168h] [rbp-788h] BYREF
  _QWORD __dst[65]; // [rsp+2D0h] [rbp-620h] BYREF
  _QWORD v19[50]; // [rsp+4D8h] [rbp-418h] BYREF
  _QWORD v20[50]; // [rsp+668h] [rbp-288h] BYREF
  _QWORD v21[3]; // [rsp+7F8h] [rbp-F8h] BYREF
  _QWORD v22[3]; // [rsp+810h] [rbp-E0h] BYREF
  __int64 v23[3]; // [rsp+828h] [rbp-C8h] BYREF
  int v24; // [rsp+840h] [rbp-B0h] BYREF
  __int64 v25; // [rsp+848h] [rbp-A8h]
  void *v26; // [rsp+850h] [rbp-A0h]
  size_t __n; // [rsp+858h] [rbp-98h]
  __int64 v28; // [rsp+860h] [rbp-90h] BYREF
  __int64 *v29; // [rsp+868h] [rbp-88h]
  __int64 v30; // [rsp+870h] [rbp-80h]
  __int64 v31; // [rsp+878h] [rbp-78h]
  __int64 v32; // [rsp+880h] [rbp-70h] BYREF
  __int64 v33; // [rsp+888h] [rbp-68h]
  __int64 v34; // [rsp+890h] [rbp-60h]
  void *__srca; // [rsp+898h] [rbp-58h]
  __int64 v36; // [rsp+8A0h] [rbp-50h] BYREF
  __int64 v37; // [rsp+8A8h] [rbp-48h]
  __int64 v38; // [rsp+8B0h] [rbp-40h]
  size_t v39; // [rsp+8B8h] [rbp-38h]
  int v40; // [rsp+8C4h] [rbp-2Ch]

  memcpy(__dst, __src, sizeof(__dst)); /*0x1009a4169*/
  __srca = __src + 520; /*0x1009a4181*/
  memcpy(v19, __src + 520, sizeof(v19)); /*0x1009a4185*/
  v34 = *((_QWORD *)__src + 117); /*0x1009a4191*/
  v2 = *((_QWORD *)__src + 115); /*0x1009a4195*/
  v33 = *((_QWORD *)__src + 116); /*0x1009a41a3*/
  v32 = v2; /*0x1009a41a7*/
  v20[6] = 0; /*0x1009a41ab*/
  v20[0] = "merge_mystery_unlock_grantsget_notification_client_stateget_system_info"; /*0x1009a41bd*/
  v20[1] = 27; /*0x1009a41c4*/
  v3 = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x1009a41cf*/
  v20[2] = "repomodepathtextdataunittypefullargsopenwithkindsavetrueuuidemitshowhide"; /*0x1009a41d6*/
  v20[3] = 4; /*0x1009a41dd*/
  v20[4] = __dst; /*0x1009a41e8*/
  v20[5] = &v32; /*0x1009a41f3*/
  LOBYTE(v3) = 1; /*0x1009a4205*/
  v40 = (int)v3; /*0x1009a4207*/
  v4 = (__int64 *)tauri::state::StateManager::try_get::h687ceb5065e3b70f(__dst[64] + 16LL); /*0x1009a420f*/
  if ( !v4 ) /*0x1009a4215*/
  {
    _$LT$tauri..state..State$LT$T$GT$$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::_$u7b$$u7b$closure$u7d$$u7d$::hb968030100831cfe( /*0x1009a422c*/
      &v28,
      v20,
      &v20[2]);
    if ( (_BYTE)v28 != 6 ) /*0x1009a4238*/
    {
      v20[4] = v31; /*0x1009a4405*/
      v20[3] = v30; /*0x1009a4410*/
      v20[2] = v29; /*0x1009a4425*/
      v20[1] = v28; /*0x1009a442c*/
      memcpy(v17, __srca, sizeof(v17)); /*0x1009a4446*/
      v10 = *((_QWORD *)__src + 111); /*0x1009a4459*/
      v22[0] = *((_QWORD *)__src + 110); /*0x1009a4460*/
      v22[1] = v10; /*0x1009a4467*/
      v22[2] = *((_QWORD *)__src + 112); /*0x1009a4475*/
      v20[0] = 1; /*0x1009a448a*/
      v40 = 0; /*0x1009a4495*/
      tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a44ad*/
        v17,
        v19[48],
        v20,
        v22,
        LODWORD(v19[49]),
        HIDWORD(v19[49]));
      goto LABEL_20; /*0x1009a44b2*/
    }
    v4 = v29; /*0x1009a423e*/
  }
  v20[6] = 0; /*0x1009a4245*/
  v20[0] = "merge_mystery_unlock_grantsget_notification_client_stateget_system_info"; /*0x1009a4250*/
  v20[1] = 27; /*0x1009a4257*/
  v20[2] = "grantsidsessionGenerationsuppressedincludeApiKeysproviderIdidenetworkmodessourcereplacementnotesinputorderedIdseventspeechModelactiveStyleholdKeyCodeholdKeyLabelholdKeyKindtoggleKeyCodetoggleKeyLabeltoggleKeyKindtoggleModifierMaskqueryoutputtitledescriptioncontentvoice-overlayvoice-search-overlayvoice-search-resulthotspotfailed to spawn thread"; /*0x1009a4269*/
  v20[3] = 6; /*0x1009a4270*/
  v20[4] = __dst; /*0x1009a427b*/
  v20[5] = &v32; /*0x1009a4282*/
  _$LT$D$u20$as$u20$tauri..ipc..command..CommandArg$LT$R$GT$$GT$::from_command::h8fbe0d8e97f149b3(&v36, v20); /*0x1009a4294*/
  if ( (_BYTE)v36 == 6 ) /*0x1009a429d*/
  {
    v23[2] = v39; /*0x1009a42a7*/
    v23[1] = v38; /*0x1009a42b6*/
    v23[0] = v37; /*0x1009a42bd*/
    codexmate_lib::commands::system::merge_mystery_unlock_grants::he22875c95b694a59((__int64)&v24, v4, v23); /*0x1009a42d5*/
    memcpy(v20, __srca, sizeof(v20)); /*0x1009a42ea*/
    if ( v24 == 1 ) /*0x1009a42f6*/
    {
      v5 = v25; /*0x1009a42fc*/
      v6 = v26; /*0x1009a4303*/
      v7 = __n; /*0x1009a430a*/
      if ( (__n & 0x8000000000000000LL) != 0LL ) /*0x1009a4314*/
      {
        v8 = 0; /*0x1009a431a*/
        goto LABEL_8; /*0x1009a431a*/
      }
      if ( __n ) /*0x1009a44b4*/
      {
        _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v20, __srca); /*0x1009a44b6*/
        v8 = 1; /*0x1009a44bb*/
        v11 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v7, 1); /*0x1009a44c9*/
        if ( !v11 ) /*0x1009a44d1*/
LABEL_8:
          alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v8, v7); /*0x1009a431d*/
        v12 = v11; /*0x1009a44d7*/
      }
      else
      {
        v12 = 1; /*0x1009a44dc*/
      }
      memcpy((void *)v12, v6, v7); /*0x1009a44eb*/
      if ( v5 ) /*0x1009a44f3*/
        a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v6, v5, 1); /*0x1009a4500*/
      LOBYTE(v36) = 3; /*0x1009a4505*/
      v37 = v7; /*0x1009a4509*/
      v38 = v12; /*0x1009a450d*/
      v39 = v7; /*0x1009a4511*/
    }
    else
    {
      v39 = __n; /*0x1009a43e5*/
      v38 = (__int64)v26; /*0x1009a43f0*/
      v37 = v25; /*0x1009a43f4*/
      LOBYTE(v36) = 6; /*0x1009a43f8*/
    }
    tauri::ipc::InvokeResolver$LT$R$GT$::respond::h815d37b7da50db54(v20); /*0x1009a4520*/
  }
  else
  {
    v20[4] = v39; /*0x1009a432e*/
    v20[3] = v38; /*0x1009a4339*/
    v20[2] = v37; /*0x1009a4348*/
    v20[1] = v36; /*0x1009a434f*/
    memcpy(v16, __srca, sizeof(v16)); /*0x1009a4369*/
    v9 = *((_QWORD *)__src + 111); /*0x1009a437c*/
    v21[0] = *((_QWORD *)__src + 110); /*0x1009a4383*/
    v21[1] = v9; /*0x1009a438a*/
    v21[2] = *((_QWORD *)__src + 112); /*0x1009a4398*/
    v20[0] = 1; /*0x1009a43ad*/
    v40 = 0; /*0x1009a43b8*/
    tauri::ipc::InvokeResolver$LT$R$GT$::return_result::h5d5098040d48664b( /*0x1009a43d0*/
      v16,
      v19[48],
      v20,
      v21,
      LODWORD(v19[49]),
      HIDWORD(v19[49]));
  }
LABEL_20:
  if ( !__OFSUB__(0, v32) ) /*0x1009a452b*/
  {
    v13 = v33; /*0x1009a452d*/
    for ( i = v34 + 1; i != 1; --i ) /*0x1009a4535*/
    {
      core::ptr::drop_in_place$LT$tauri_utils..acl..resolved..ResolvedCommand$GT$::h5ed8c42e5a0b657c(v13); /*0x1009a454d*/
      v13 += 96; /*0x1009a4552*/
    }
    if ( v32 ) /*0x1009a455e*/
      a2 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v33, 96 * v32, 8); /*0x1009a4571*/
  }
  return core::ptr::drop_in_place$LT$tauri..ipc..InvokeMessage$GT$::hb81016c6923bcafb(__dst, a2); /*0x1009a4582*/
}