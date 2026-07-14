// mac 1.1.8 behavioral repair_missing_rollouts_for_convergence 0x10040f210 d=1
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::collect_provider_convergence_targets::hfa3d96a7284a9c10(
        __int64 a1,
        _QWORD *a2,
        double a3)
{
  __int64 result; // rax
  int v4; // eax
  __int64 v5; // r14
  __int64 v6; // rax
  __int128 v7; // [rsp+0h] [rbp-150h]
  __int64 v8; // [rsp+10h] [rbp-140h] BYREF
  __int128 v9; // [rsp+18h] [rbp-138h]
  __int64 v10; // [rsp+28h] [rbp-128h]
  __int64 v11; // [rsp+30h] [rbp-120h]
  __int64 v12; // [rsp+38h] [rbp-118h]
  __int64 v13; // [rsp+40h] [rbp-110h]
  __int64 v14; // [rsp+48h] [rbp-108h]
  sqlite3_stmt *v15; // [rsp+50h] [rbp-100h]
  __int128 v16; // [rsp+58h] [rbp-F8h] BYREF
  __int64 v17; // [rsp+68h] [rbp-E8h]
  _QWORD v18[2]; // [rsp+70h] [rbp-E0h] BYREF
  __int128 v19; // [rsp+80h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+90h] [rbp-C0h]
  __int64 v21; // [rsp+98h] [rbp-B8h]
  __int64 v22; // [rsp+A0h] [rbp-B0h]
  __int64 v23; // [rsp+A8h] [rbp-A8h]
  __int64 v24; // [rsp+B0h] [rbp-A0h]
  sqlite3_stmt *v25; // [rsp+B8h] [rbp-98h]
  __int128 v26; // [rsp+C0h] [rbp-90h] BYREF
  __int64 v27; // [rsp+D0h] [rbp-80h]
  __int64 v28; // [rsp+D8h] [rbp-78h]
  __int64 v29; // [rsp+E0h] [rbp-70h]
  __int64 v30; // [rsp+E8h] [rbp-68h]
  __int64 v31; // [rsp+F0h] [rbp-60h]
  sqlite3_stmt *v32; // [rsp+F8h] [rbp-58h]
  __int128 v33; // [rsp+100h] [rbp-50h] BYREF
  __int64 v34; // [rsp+110h] [rbp-40h]
  __int64 v35; // [rsp+118h] [rbp-38h]
  __int64 v36; // [rsp+120h] [rbp-30h]
  __int64 v37; // [rsp+128h] [rbp-28h]
  __int64 v38; // [rsp+130h] [rbp-20h]
  sqlite3_stmt *v39; // [rsp+138h] [rbp-18h]

  rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9( /*0x10040f237*/
    &v8,
    a2,
    (__int64)"SELECT id, rollout_path, model_provider, COALESCE(source, '') FROM threads WHERE COALESCE(archived, 0) = 0 ORDER BY idthread-rollout-repairs",
    0x76u,
    a3);
  if ( (_DWORD)v8 == 1 ) /*0x10040f243*/
  {
    v32 = v15; /*0x10040f24d*/
    v31 = v14; /*0x10040f255*/
    v30 = v13; /*0x10040f25d*/
    v29 = v12; /*0x10040f265*/
    v28 = v11; /*0x10040f26d*/
    v27 = v10; /*0x10040f275*/
    v26 = v9; /*0x10040f288*/
    v18[0] = &v26; /*0x10040f296*/
    v18[1] = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10040f2a4*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4((size_t *)&v16, byte_101228BA3, (unsigned __int64)v18); /*0x10040f2c0*/
    v19 = v16; /*0x10040f2d3*/
    v20 = v17; /*0x10040f2e8*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hc22c33be057bddad((__int64 *)&v26); /*0x10040f2f6*/
    v33 = v19; /*0x10040f309*/
    v34 = v20; /*0x10040f318*/
    v35 = v21; /*0x10040f323*/
    v36 = v22; /*0x10040f32e*/
    v37 = v23; /*0x10040f339*/
    v38 = v24; /*0x10040f344*/
    v39 = v25; /*0x10040f34f*/
    *(_QWORD *)(a1 + 64) = v25; /*0x10040f357*/
    *(_QWORD *)(a1 + 56) = v38; /*0x10040f35f*/
    *(_QWORD *)(a1 + 48) = v37; /*0x10040f367*/
    *(_QWORD *)(a1 + 40) = v36; /*0x10040f36f*/
    *(_QWORD *)(a1 + 32) = v35; /*0x10040f377*/
    *(_QWORD *)(a1 + 24) = v34; /*0x10040f37f*/
    result = v33; /*0x10040f387*/
    *(_OWORD *)(a1 + 8) = v33; /*0x10040f38f*/
    *(_QWORD *)a1 = 9; /*0x10040f393*/
  }
  else
  {
    v25 = v15; /*0x10040f3a3*/
    v24 = v14; /*0x10040f3ae*/
    v23 = v13; /*0x10040f3b9*/
    v22 = v12; /*0x10040f3c4*/
    v33 = v9; /*0x10040f3db*/
    v34 = v10; /*0x10040f3e3*/
    v35 = v11; /*0x10040f3e7*/
    v36 = v12; /*0x10040f3eb*/
    v37 = v13; /*0x10040f3ef*/
    v38 = v14; /*0x10040f3f3*/
    v39 = v15; /*0x10040f3f7*/
    v32 = v15; /*0x10040f3ff*/
    v31 = v14; /*0x10040f407*/
    v30 = v13; /*0x10040f40f*/
    v29 = v12; /*0x10040f417*/
    v28 = v11; /*0x10040f41f*/
    v27 = v10; /*0x10040f427*/
    v26 = v9; /*0x10040f43a*/
    v4 = sqlite3_bind_parameter_count(v15); /*0x10040f445*/
    if ( v4 ) /*0x10040f44f*/
    {
      v8 = 0x8000000000000013LL; /*0x10040f45f*/
      *(_QWORD *)&v9 = 0; /*0x10040f466*/
      *((_QWORD *)&v9 + 1) = v4; /*0x10040f471*/
      *(_QWORD *)&v33 = &v8; /*0x10040f478*/
      *((_QWORD *)&v33 + 1) = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10040f483*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4((size_t *)&v19, byte_101228BC8, (unsigned __int64)&v33); /*0x10040f499*/
      v7 = v19; /*0x10040f4a5*/
      v5 = v20; /*0x10040f4ac*/
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hc22c33be057bddad(&v8); /*0x10040f4ba*/
      *(_QWORD *)a1 = 9; /*0x10040f4bf*/
      *(_OWORD *)(a1 + 8) = v7; /*0x10040f4cd*/
      *(_QWORD *)(a1 + 24) = v5; /*0x10040f4d1*/
    }
    else
    {
      _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter_nested..SpecFromIterNested$LT$T$C$I$GT$$GT$::from_iter::hf829a0a88e621111( /*0x10040f4e5*/
        &v8,
        &v26,
        0);
      *(_QWORD *)(a1 + 24) = *((_QWORD *)&v9 + 1); /*0x10040f4f1*/
      v6 = v8; /*0x10040f4f5*/
      *(_QWORD *)(a1 + 16) = v9; /*0x10040f503*/
      *(_QWORD *)(a1 + 8) = v6; /*0x10040f507*/
      *(_QWORD *)a1 = 10; /*0x10040f50b*/
    }
    return core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::hd8e78dacb288599b((__int64)&v26); /*0x10040f519*/
  }
  return result; /*0x10040f51e*/
}