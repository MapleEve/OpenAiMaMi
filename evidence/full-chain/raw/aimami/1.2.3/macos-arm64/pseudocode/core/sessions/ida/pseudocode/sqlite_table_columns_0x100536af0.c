// __ZN13codexmate_lib4core8sessions20sqlite_table_columns @ 0x100536af0 | 基线 same-set
void __fastcall codexmate_lib::core::sessions::sqlite_table_columns::hffa44fdbd9ac0916(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int128 v4; // kr00_16
  __int128 *v5; // rdx
  __int64 (__fastcall *v6)(_QWORD, _QWORD); // rsi
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // r14
  __int128 *v13; // r14
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r15
  __int64 v18; // rax
  __int64 v19; // rdx
  __int128 *v20; // rax
  __int128 v21; // [rsp+0h] [rbp-1D0h]
  __int128 v22; // [rsp+18h] [rbp-1B8h] BYREF
  __int128 *v23; // [rsp+28h] [rbp-1A8h]
  _QWORD v24[2]; // [rsp+30h] [rbp-1A0h] BYREF
  __int64 v25; // [rsp+40h] [rbp-190h] BYREF
  __int64 v26; // [rsp+48h] [rbp-188h]
  __int64 v27; // [rsp+50h] [rbp-180h]
  __int128 *v28; // [rsp+58h] [rbp-178h] BYREF
  __int128 v29; // [rsp+60h] [rbp-170h]
  _OWORD *v30; // [rsp+70h] [rbp-160h]
  __int64 v31; // [rsp+78h] [rbp-158h]
  __int64 v32; // [rsp+80h] [rbp-150h]
  __int64 v33; // [rsp+88h] [rbp-148h]
  __int64 v34; // [rsp+90h] [rbp-140h]
  sqlite3_stmt *v35; // [rsp+98h] [rbp-138h]
  __int128 v36; // [rsp+A0h] [rbp-130h] BYREF
  __int128 *v37; // [rsp+B0h] [rbp-120h]
  __int64 (__fastcall *v38)(_QWORD, _QWORD); // [rsp+B8h] [rbp-118h]
  __int64 v39; // [rsp+C0h] [rbp-110h]
  __int64 v40; // [rsp+C8h] [rbp-108h]
  __int64 v41; // [rsp+D0h] [rbp-100h]
  sqlite3_stmt *v42; // [rsp+D8h] [rbp-F8h]
  __int128 v43; // [rsp+E8h] [rbp-E8h] BYREF
  __int128 *v44; // [rsp+F8h] [rbp-D8h]
  __int64 (__fastcall *v45)(_QWORD, _QWORD); // [rsp+100h] [rbp-D0h]
  __int64 v46; // [rsp+108h] [rbp-C8h]
  __int64 v47; // [rsp+110h] [rbp-C0h]
  __int64 v48; // [rsp+118h] [rbp-B8h]
  sqlite3_stmt *v49; // [rsp+120h] [rbp-B0h]
  __int128 v50; // [rsp+128h] [rbp-A8h]
  __int128 *v51; // [rsp+138h] [rbp-98h]
  __int64 (__fastcall *v52)(_QWORD, _QWORD); // [rsp+140h] [rbp-90h]
  __int64 v53; // [rsp+148h] [rbp-88h]
  __int64 v54; // [rsp+150h] [rbp-80h]
  __int64 v55; // [rsp+158h] [rbp-78h]
  sqlite3_stmt *v56; // [rsp+160h] [rbp-70h]
  __int128 v57; // [rsp+168h] [rbp-68h] BYREF
  _OWORD *v58; // [rsp+178h] [rbp-58h]
  __int64 v59; // [rsp+180h] [rbp-50h]
  __int64 v60; // [rsp+188h] [rbp-48h]
  __int64 v61; // [rsp+190h] [rbp-40h]
  __int64 v62; // [rsp+198h] [rbp-38h]
  sqlite3_stmt *v63; // [rsp+1A0h] [rbp-30h]

  v24[0] = "threadsCOALESCE(model, '')''COALESCE(source, '')WHERE COALESCE(archived, 0) = 0\"subagent\""; /*0x100536b11*/
  v24[1] = 7; /*0x100536b18*/
  *(_QWORD *)&v57 = v24; /*0x100536b2a*/
  *((_QWORD *)&v57 + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100536b35*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v25, &unk_1017BF627, &v57); /*0x100536b4b*/
  v3 = v26; /*0x100536b50*/
  rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(&v28, a2, v26, v27); /*0x100536b6b*/
  if ( (_DWORD)v28 == 1 ) /*0x100536b7e*/
  {
    v63 = v35; /*0x100536b88*/
    v62 = v34; /*0x100536b90*/
    v61 = v33; /*0x100536b98*/
    v60 = v32; /*0x100536ba0*/
    v59 = v31; /*0x100536ba8*/
    v58 = v30; /*0x100536bb0*/
    v57 = v29; /*0x100536bbf*/
    *(_QWORD *)&v36 = v24; /*0x100536bc3*/
    *((_QWORD *)&v36 + 1) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100536bca*/
    v37 = &v57; /*0x100536bd5*/
    v38 = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100536be3*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v22, &unk_1017C1AF2, &v36); /*0x100536bff*/
    v36 = v22; /*0x100536c12*/
    v37 = v23; /*0x100536c27*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v57); /*0x100536c32*/
    v43 = v36; /*0x100536c45*/
    v44 = v37; /*0x100536c5a*/
    v45 = v38; /*0x100536c68*/
    v46 = v39; /*0x100536c76*/
    v47 = v40; /*0x100536c84*/
    v48 = v41; /*0x100536c92*/
    v49 = v42; /*0x100536ca0*/
    v4 = v36; /*0x100536cae*/
    v50 = v36; /*0x100536cb5*/
    v5 = v37; /*0x100536cc3*/
    v51 = v37; /*0x100536cca*/
    v6 = v38; /*0x100536cd1*/
    v52 = v38; /*0x100536cd8*/
    v7 = v39; /*0x100536cdf*/
    v53 = v39; /*0x100536ce6*/
    v8 = v40; /*0x100536ced*/
    v54 = v40; /*0x100536cf4*/
    v9 = v41; /*0x100536cf8*/
    v55 = v41; /*0x100536cff*/
    v56 = v42; /*0x100536d0a*/
    *(_QWORD *)(a1 + 64) = v42; /*0x100536d12*/
    *(_QWORD *)(a1 + 56) = v9; /*0x100536d16*/
    *(_QWORD *)(a1 + 48) = v8; /*0x100536d1a*/
    *(_QWORD *)(a1 + 40) = v7; /*0x100536d1e*/
    *(_QWORD *)(a1 + 32) = v6; /*0x100536d22*/
    *(_QWORD *)(a1 + 24) = v5; /*0x100536d26*/
    *(_OWORD *)(a1 + 8) = v4; /*0x100536d2e*/
    *(_QWORD *)a1 = 10; /*0x100536d32*/
    if ( v25 ) /*0x100536d43*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v25, 1); /*0x100536d51*/
  }
  else
  {
    v49 = v35; /*0x100536d5f*/
    v48 = v34; /*0x100536d6a*/
    v47 = v33; /*0x100536d75*/
    v46 = v32; /*0x100536d80*/
    v50 = v29; /*0x100536d96*/
    v51 = v30; /*0x100536da4*/
    v52 = (__int64 (__fastcall *)(_QWORD, _QWORD))v31; /*0x100536dab*/
    v53 = v32; /*0x100536db2*/
    v54 = v33; /*0x100536db9*/
    v55 = v34; /*0x100536dbd*/
    v56 = v35; /*0x100536dc1*/
    v63 = v35; /*0x100536dc9*/
    v62 = v34; /*0x100536dd1*/
    v61 = v33; /*0x100536dd9*/
    v60 = v32; /*0x100536de4*/
    v59 = v31; /*0x100536def*/
    v58 = v30; /*0x100536dfa*/
    v57 = v29; /*0x100536e10*/
    v10 = v25; /*0x100536e14*/
    if ( v25 ) /*0x100536e1e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v3, v25, 1); /*0x100536e28*/
    v11 = sqlite3_bind_parameter_count(v63); /*0x100536e31*/
    v12 = v11; /*0x100536e36*/
    if ( v11 ) /*0x100536e3b*/
    {
      v28 = (__int128 *)0x8000000000000013LL; /*0x100536e4b*/
      *(_QWORD *)&v29 = 0; /*0x100536e52*/
      *((_QWORD *)&v29 + 1) = v11; /*0x100536e5d*/
      *(_QWORD *)&v43 = &v28; /*0x100536e6b*/
      *((_QWORD *)&v43 + 1) = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x100536e79*/
      alloc::fmt::format::format_inner::h3c16c74008a310d4(&v36, &unk_1017C1ADA, &v43); /*0x100536e95*/
      v21 = v36; /*0x100536ea1*/
      v13 = v37; /*0x100536ea8*/
      core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::h61af83dc321f5f7f(&v28); /*0x100536eb6*/
      *(_QWORD *)a1 = 10; /*0x100536ebb*/
      *(_OWORD *)(a1 + 8) = v21; /*0x100536ec9*/
      *(_QWORD *)(a1 + 24) = v13; /*0x100536ecd*/
    }
    else
    {
      *(_QWORD *)&v36 = &v57; /*0x100536eda*/
      *((_QWORD *)&v36 + 1) = 0; /*0x100536ee1*/
      std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384(); /*0x100536eef*/
      v17 = v14; /*0x100536ef1*/
      if ( *(_BYTE *)(v14 + 16) == 1 ) /*0x100536ef8*/
      {
        v18 = *(_QWORD *)v14; /*0x100536efe*/
        v19 = *(_QWORD *)(v17 + 8); /*0x100536f01*/
      }
      else
      {
        v18 = std::sys::random::hashmap_random_keys::h0ea0c5485cd34a45( /*0x100536fc9*/
                &std::hash::random::RandomState::new::KEYS::_$u7b$$u7b$constant$u7d$$u7d$::_$u7b$$u7b$closure$u7d$$u7d$::__RUST_STD_INTERNAL_VAL::h546f1d4ea362e384,
                v10,
                v15,
                v16);
        *(_QWORD *)v17 = v18; /*0x100536fce*/
        *(_QWORD *)(v17 + 8) = v19; /*0x100536fd1*/
        *(_BYTE *)(v17 + 16) = 1; /*0x100536fd5*/
      }
      *(_QWORD *)v17 = v18 + 1; /*0x100536f09*/
      v30 = nullptr; /*0x100536f13*/
      v29 = 0u; /*0x100536f2f*/
      v28 = &xmmword_1015FBEC0; /*0x100536f3d*/
      v31 = v18; /*0x100536f44*/
      v32 = v19; /*0x100536f4b*/
      _$LT$core..iter..adapters..map..Map$LT$I$C$F$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::ha599c7768512f13f( /*0x100536f60*/
        &v57,
        v12,
        &v28);
      *(_QWORD *)(a1 + 48) = v32; /*0x100536f6c*/
      *(_QWORD *)(a1 + 40) = v31; /*0x100536f77*/
      *(_QWORD *)(a1 + 32) = v30; /*0x100536f82*/
      *(_QWORD *)(a1 + 24) = *((_QWORD *)&v29 + 1); /*0x100536f8d*/
      v20 = v28; /*0x100536f91*/
      *(_QWORD *)(a1 + 16) = v29; /*0x100536f9f*/
      *(_QWORD *)(a1 + 8) = v20; /*0x100536fa3*/
      *(_QWORD *)a1 = 11; /*0x100536fa7*/
    }
    core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(&v57); /*0x100536fb2*/
  }
}