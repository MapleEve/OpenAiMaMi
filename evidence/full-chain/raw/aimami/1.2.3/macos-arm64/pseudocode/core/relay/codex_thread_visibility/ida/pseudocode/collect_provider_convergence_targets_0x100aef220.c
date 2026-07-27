// __ZN13codexmate_lib4core5relay23codex_thread_visibility36collect_provider_convergence_targets @ 0x100aef220 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::collect_provider_convergence_targets::h29551f1dfa54e579(
        _QWORD *a1,
        __int64 a2)
{
  __int64 result; // rax
  int v3; // eax
  unsigned __int64 *v4; // r12
  __int64 (__fastcall *v5)(_QWORD, _QWORD); // r14
  char *v6; // r15
  unsigned __int64 v7; // rax
  _QWORD v8[4]; // [rsp+0h] [rbp-170h] BYREF
  _QWORD v9[2]; // [rsp+20h] [rbp-150h] BYREF
  unsigned __int64 *v10; // [rsp+30h] [rbp-140h] BYREF
  __int64 (__fastcall *v11)(_QWORD, _QWORD); // [rsp+38h] [rbp-138h]
  char *v12; // [rsp+40h] [rbp-130h]
  unsigned __int64 v13; // [rsp+48h] [rbp-128h] BYREF
  unsigned __int64 *v14; // [rsp+50h] [rbp-120h]
  __int64 (__fastcall *v15)(_QWORD, _QWORD); // [rsp+58h] [rbp-118h]
  char *v16; // [rsp+60h] [rbp-110h]
  char *v17; // [rsp+68h] [rbp-108h]
  sqlite3_stmt *v18; // [rsp+70h] [rbp-100h]
  sqlite3_stmt *v19; // [rsp+78h] [rbp-F8h]
  sqlite3_stmt *v20; // [rsp+80h] [rbp-F0h]
  sqlite3_stmt *v21; // [rsp+88h] [rbp-E8h]
  unsigned __int64 v22; // [rsp+90h] [rbp-E0h] BYREF
  __int64 (__fastcall *v23)(_QWORD, _QWORD); // [rsp+98h] [rbp-D8h]
  char *v24; // [rsp+A0h] [rbp-D0h]
  char *v25; // [rsp+A8h] [rbp-C8h]
  sqlite3_stmt *v26; // [rsp+B0h] [rbp-C0h]
  sqlite3_stmt *v27; // [rsp+B8h] [rbp-B8h]
  sqlite3_stmt *v28; // [rsp+C0h] [rbp-B0h]
  sqlite3_stmt *v29; // [rsp+C8h] [rbp-A8h]
  unsigned __int64 *v30; // [rsp+D0h] [rbp-A0h] BYREF
  __int64 (__fastcall *v31)(_QWORD, _QWORD); // [rsp+D8h] [rbp-98h]
  char *v32; // [rsp+E0h] [rbp-90h]
  char *v33; // [rsp+E8h] [rbp-88h]
  sqlite3_stmt *v34; // [rsp+F0h] [rbp-80h]
  sqlite3_stmt *v35; // [rsp+F8h] [rbp-78h]
  sqlite3_stmt *v36; // [rsp+100h] [rbp-70h]
  sqlite3_stmt *v37; // [rsp+108h] [rbp-68h]
  unsigned __int64 *v38; // [rsp+110h] [rbp-60h] BYREF
  __int64 (__fastcall *v39)(_QWORD, _QWORD); // [rsp+118h] [rbp-58h]
  char *v40; // [rsp+120h] [rbp-50h]
  char *v41; // [rsp+128h] [rbp-48h]
  sqlite3_stmt *v42; // [rsp+130h] [rbp-40h]
  sqlite3_stmt *v43; // [rsp+138h] [rbp-38h]
  sqlite3_stmt *v44; // [rsp+140h] [rbp-30h]
  sqlite3_stmt *v45; // [rsp+148h] [rbp-28h]

  rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9( /*0x100aef24b*/
    &v13,
    a2,
    "SELECT id, rollout_path, model_provider, COALESCE(source, '') FROM threads WHERE COALESCE(archived, 0) = 0 ORDER BY idthread-rollout-repairs",
    118);
  if ( (_DWORD)v13 == 1 ) /*0x100aef257*/
  {
    v29 = v21; /*0x100aef261*/
    v28 = v20; /*0x100aef26c*/
    v27 = v19; /*0x100aef277*/
    v26 = v18; /*0x100aef282*/
    v25 = v17; /*0x100aef28d*/
    v24 = v16; /*0x100aef298*/
    v23 = v15; /*0x100aef2a7*/
    v22 = (unsigned __int64)v14; /*0x100aef2ae*/
    v9[0] = &v22; /*0x100aef2bc*/
    v9[1] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100aef2ca*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v10, &unk_1017CB8B0, v9); /*0x100aef2e6*/
    v30 = v10; /*0x100aef2f9*/
    v31 = v11; /*0x100aef300*/
    v32 = v12; /*0x100aef30e*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v22); /*0x100aef31c*/
    v38 = v30; /*0x100aef32f*/
    v39 = v31; /*0x100aef333*/
    v40 = v32; /*0x100aef33e*/
    v41 = v33; /*0x100aef349*/
    v42 = v34; /*0x100aef351*/
    v43 = v35; /*0x100aef359*/
    v44 = v36; /*0x100aef361*/
    v45 = v37; /*0x100aef369*/
    a1[8] = v37; /*0x100aef371*/
    a1[7] = v44; /*0x100aef379*/
    a1[6] = v43; /*0x100aef381*/
    a1[5] = v42; /*0x100aef389*/
    a1[4] = v41; /*0x100aef391*/
    a1[3] = v40; /*0x100aef399*/
    result = (__int64)v38; /*0x100aef39d*/
    a1[2] = v39; /*0x100aef3a5*/
    a1[1] = result; /*0x100aef3a9*/
    *a1 = 10; /*0x100aef3ad*/
    return result; /*0x100aef3b4*/
  }
  v37 = v21; /*0x100aef3bd*/
  v36 = v20; /*0x100aef3c5*/
  v38 = v14; /*0x100aef3e9*/
  v39 = v15; /*0x100aef3ed*/
  v40 = v16; /*0x100aef3f1*/
  v41 = v17; /*0x100aef3f5*/
  v42 = v18; /*0x100aef3f9*/
  v43 = v19; /*0x100aef3fd*/
  v44 = v20; /*0x100aef401*/
  v45 = v21; /*0x100aef405*/
  v35 = v19; /*0x100aef41d*/
  v34 = v18; /*0x100aef425*/
  v33 = v17; /*0x100aef42d*/
  v32 = v16; /*0x100aef438*/
  v31 = v15; /*0x100aef447*/
  v30 = v14; /*0x100aef44e*/
  v3 = sqlite3_bind_parameter_count(v21); /*0x100aef459*/
  if ( v3 ) /*0x100aef463*/
  {
    v13 = 0x8000000000000013LL; /*0x100aef46f*/
    v14 = nullptr; /*0x100aef476*/
    v15 = (__int64 (__fastcall *)(_QWORD, _QWORD))v3; /*0x100aef481*/
    v38 = &v13; /*0x100aef488*/
    v39 = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100aef493*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v22, &unk_1017CB8F5, &v38); /*0x100aef4a9*/
    v4 = (unsigned __int64 *)v22; /*0x100aef4ae*/
    v5 = v23; /*0x100aef4b5*/
    v6 = v24; /*0x100aef4bc*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v13); /*0x100aef4ca*/
LABEL_8:
    *a1 = 10; /*0x100aef62e*/
    a1[1] = v4; /*0x100aef635*/
    a1[2] = v5; /*0x100aef639*/
    a1[3] = v6; /*0x100aef63d*/
    return core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(&v30); /*0x100aef63d*/
  }
  core::iter::adapters::try_process::h85112ce653624c0d(&v22, &v30, 0); /*0x100aef4e2*/
  if ( v22 != 0x8000000000000016LL ) /*0x100aef4fc*/
  {
    v20 = v29; /*0x100aef581*/
    v19 = v28; /*0x100aef58f*/
    v18 = v27; /*0x100aef59d*/
    v17 = (char *)v26; /*0x100aef5ab*/
    v16 = v25; /*0x100aef5b9*/
    v15 = (__int64 (__fastcall *)(_QWORD, _QWORD))v24; /*0x100aef5c7*/
    v14 = (unsigned __int64 *)v23; /*0x100aef5dc*/
    v13 = v22; /*0x100aef5e3*/
    v10 = &v13; /*0x100aef5ea*/
    v11 = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100aef5f8*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v38, &unk_1017CB8D5, &v10); /*0x100aef611*/
    v4 = v38; /*0x100aef616*/
    v5 = v39; /*0x100aef61a*/
    v6 = v40; /*0x100aef61e*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v13); /*0x100aef629*/
    goto LABEL_8; /*0x100aef629*/
  }
  v8[0] = v24; /*0x100aef51e*/
  v8[1] = v24; /*0x100aef525*/
  v8[2] = v23; /*0x100aef52c*/
  v8[3] = &v24[96 * (_QWORD)v25]; /*0x100aef533*/
  ((void (__fastcall *)(unsigned __int64 *, _QWORD *))alloc::vec::in_place_collect::from_iter_in_place::h67a2a3fa85d15737)( /*0x100aef548*/
    &v13,
    v8);
  a1[3] = v15; /*0x100aef554*/
  v7 = v13; /*0x100aef558*/
  a1[2] = v14; /*0x100aef566*/
  a1[1] = v7; /*0x100aef56a*/
  *a1 = 11; /*0x100aef56e*/
  return core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(&v30); /*0x100aef64d*/
}