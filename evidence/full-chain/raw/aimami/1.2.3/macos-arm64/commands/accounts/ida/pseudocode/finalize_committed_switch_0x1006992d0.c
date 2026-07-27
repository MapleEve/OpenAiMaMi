// __ZN13codexmate_lib8commands8accounts25finalize_committed_switch @ 0x1006992d0
void *__fastcall codexmate_lib::commands::accounts::finalize_committed_switch::hba002f83f1c42ff8(
        void *__dst,
        __int64 a2,
        __int64 a3,
        _QWORD *a4,
        __int64 a5,
        __int64 a6)
{
  void *v8; // r14
  __int64 v9; // rsi
  __int64 (__fastcall **v10)(); // rdi
  __int64 v11; // rdx
  __int64 v12; // rsi
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 (__fastcall *v15)(); // r12
  __int64 v16; // r15
  __int64 (__fastcall *v17)(); // r14
  __int64 v18; // r15
  __int64 v19; // r13
  const void *v20; // rbx
  signed __int64 v21; // rdx
  __int64 (__fastcall *v22)(); // rax
  unsigned __int128 v23; // rax
  bool v24; // zf
  __int64 v25; // r13
  _QWORD *v26; // r12
  __int64 v27; // rsi
  __int64 v28; // rsi
  char **__dsta; // [rsp+0h] [rbp-440h] BYREF
  __int64 (__fastcall *v31)(); // [rsp+8h] [rbp-438h]
  __int64 (__fastcall **v32)(); // [rsp+10h] [rbp-430h]
  __int64 (__fastcall *v33)(); // [rsp+18h] [rbp-428h]
  __int64 v34; // [rsp+330h] [rbp-110h]
  __int64 v35; // [rsp+338h] [rbp-108h]
  __int64 v36; // [rsp+348h] [rbp-F8h]
  __int64 v37; // [rsp+350h] [rbp-F0h]
  __int64 (__fastcall **v38)(); // [rsp+360h] [rbp-E0h]
  __int64 (__fastcall *v39)(); // [rsp+368h] [rbp-D8h]
  __int64 v40; // [rsp+370h] [rbp-D0h]
  _QWORD v41[3]; // [rsp+380h] [rbp-C0h] BYREF
  _BYTE v42[24]; // [rsp+398h] [rbp-A8h] BYREF
  _QWORD v43[2]; // [rsp+3B0h] [rbp-90h] BYREF
  _QWORD *v44; // [rsp+3C0h] [rbp-80h]
  void *v45; // [rsp+3C8h] [rbp-78h]
  __int64 v46; // [rsp+3D0h] [rbp-70h]
  char *v47; // [rsp+3D8h] [rbp-68h] BYREF
  __int64 v48; // [rsp+3E0h] [rbp-60h]
  __int64 (__fastcall **v49)(); // [rsp+3E8h] [rbp-58h]
  __int64 (__fastcall *v50)(); // [rsp+3F0h] [rbp-50h]
  __int64 (__fastcall *v51)(); // [rsp+3F8h] [rbp-48h] BYREF
  __int64 (__fastcall **v52)(); // [rsp+400h] [rbp-40h]
  __int64 (__fastcall *v53)(); // [rsp+408h] [rbp-38h]
  _QWORD *v54; // [rsp+410h] [rbp-30h]

  v8 = __dst; /*0x1006992ea*/
  v43[0] = a5; /*0x1006992ed*/
  v43[1] = a6; /*0x1006992f4*/
  codexmate_lib::commands::accounts::refresh_local_runtime_snapshot_after_mutation::hcf84ef475d51a3e9(&__dsta); /*0x100699302*/
  if ( (_DWORD)__dsta == 3 ) /*0x10069930e*/
  {
    v47 = "Account switch committedcompletedsnapshots"; /*0x100699330*/
    v48 = 24; /*0x100699334*/
    v51 = v31; /*0x10069933c*/
    v52 = v32; /*0x100699340*/
    v53 = v33; /*0x100699344*/
    __dsta = &v47; /*0x10069934c*/
    v31 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10069935a*/
    v32 = &v51; /*0x100699365*/
    v33 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h31d6615ee8f7bc50; /*0x100699373*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(v41, &unk_1017C34AC, &__dsta); /*0x10069938f*/
    codexmate_lib::commands::accounts::push_core_warning::h569103304c785c5c( /*0x1006993ae*/
      a4 + 57,
      "RUNTIME_REFRESH_FAILED_AFTER_SWITCHAccount switch committedcompletedsnapshots",
      35,
      v41);
    v9 = (__int64)v51; /*0x1006993b3*/
    if ( v51 ) /*0x1006993ba*/
    {
      v10 = v52; /*0x1006993c0*/
      v11 = 1; /*0x1006993c4*/
LABEL_25:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v10, v9, v11); /*0x1006995b6*/
    }
  }
  else
  {
    v46 = a3; /*0x1006993ce*/
    v45 = __dst; /*0x1006993d2*/
    v54 = a4; /*0x1006993d6*/
    v12 = v34; /*0x1006993da*/
    v13 = v36; /*0x1006993e1*/
    v14 = v37; /*0x1006993e8*/
    v49 = v38; /*0x1006993f6*/
    v15 = v39; /*0x1006993fa*/
    v16 = v40; /*0x100699401*/
    if ( v34 ) /*0x10069940b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v35, v34, 1); /*0x100699419*/
    if ( v13 ) /*0x100699421*/
    {
      v12 = v13; /*0x10069942b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v14, v13, 1); /*0x10069942e*/
    }
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreSnapshotPayload$GT$::hc4d91e4a52804043(&__dsta, v12); /*0x10069943a*/
    v47 = "Account switch committedcompletedsnapshots"; /*0x100699446*/
    v48 = 24; /*0x10069944a*/
    v17 = (__int64 (__fastcall *)())((char *)v15 + 48 * v16); /*0x10069945a*/
    __dsta = (char **)v15; /*0x10069945d*/
    v31 = v15; /*0x100699464*/
    v32 = v49; /*0x10069946f*/
    v33 = v17; /*0x100699476*/
    v50 = v15; /*0x10069947d*/
    a4 = v54; /*0x100699484*/
    if ( v16 ) /*0x100699488*/
    {
      v44 = v54 + 57; /*0x100699495*/
      v15 = (__int64 (__fastcall *)())((char *)v50 + 48); /*0x10069949d*/
      while ( 1 ) /*0x1006994bd*/
      {
        v18 = *((_QWORD *)v15 - 6); /*0x1006994bd*/
        if ( __OFSUB__(-v18, 1) ) /*0x1006994c8*/
          break; /*0x1006994c8*/
        v19 = (__int64)v15 - 48; /*0x1006994ca*/
        v20 = *((const void **)v15 - 5); /*0x1006994cf*/
        v21 = *((_QWORD *)v15 - 4); /*0x1006994d4*/
        v53 = *((__int64 (__fastcall **)())v15 - 1); /*0x1006994dc*/
        v22 = *((__int64 (__fastcall **)())v15 - 3); /*0x1006994e0*/
        v52 = *((__int64 (__fastcall ***)())v15 - 2); /*0x1006994e8*/
        v51 = v22; /*0x1006994ec*/
        codexmate_lib::commands::accounts::push_core_warning::h569103304c785c5c(v44, v20, v21, &v51); /*0x1006994fb*/
        if ( v18 ) /*0x100699503*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v18, 1); /*0x100699510*/
        v15 = (__int64 (__fastcall *)())((char *)v15 + 48); /*0x1006994b0*/
        if ( (__int64 (__fastcall *)())(v19 + 48) == v17 ) /*0x1006994bb*/
        {
          v15 = v17; /*0x100699517*/
          break; /*0x100699517*/
        }
      }
      v31 = v15; /*0x10069951a*/
      a4 = v54; /*0x100699521*/
    }
    v23 = 0xAAAAAAAAAAAAAAABLL * (unsigned __int128)(unsigned __int64)((char *)v17 - (char *)v15); /*0x100699535*/
    v24 = v17 == v15; /*0x100699538*/
    v8 = v45; /*0x10069953b*/
    a3 = v46; /*0x10069953f*/
    if ( !v24 ) /*0x100699543*/
    {
      v25 = *((_QWORD *)&v23 + 1) >> 5; /*0x100699548*/
      v26 = (_QWORD *)((char *)v15 + 32); /*0x10069954c*/
      do /*0x100699567*/
      {
        v27 = *(v26 - 4); /*0x100699569*/
        if ( v27 ) /*0x100699571*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*(v26 - 3), v27, 1); /*0x10069957d*/
        v28 = *(v26 - 1); /*0x100699582*/
        if ( v28 ) /*0x10069958a*/
          _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(*v26, v28, 1); /*0x100699595*/
        v26 += 6; /*0x100699560*/
        --v25; /*0x100699564*/
      }
      while ( v25 ); /*0x100699567*/
    }
    if ( v49 ) /*0x1006995a3*/
    {
      v9 = 48LL * (_QWORD)v49; /*0x1006995a9*/
      v11 = 8; /*0x1006995ad*/
      v10 = (__int64 (__fastcall **)())v50; /*0x1006995b2*/
      goto LABEL_25; /*0x1006995b2*/
    }
  }
  __dsta = (char **)v43; /*0x1006995bb*/
  v31 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x1006995d0*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(v42, &unk_1017C3445, &__dsta); /*0x1006995ec*/
  codexmate_lib::commands::accounts::AccountSwitchTrace::event::h45db447b3c672556(a3, "completedsnapshots", 9, v42); /*0x100699607*/
  return memcpy(v8, a4, 0x1E8u); /*0x10069961c*/
}