// __ZN13codexmate_lib4core6skills19delete_skill_backup @ 0x10034dec0 | 基线 same-set
__int64 *__fastcall codexmate_lib::core::skills::delete_skill_backup::ha2eee833bad4f4bc(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        void *a4,
        size_t a5)
{
  _QWORD *v5; // r15
  __int64 v6; // r12
  char v7; // r14
  __int64 v8; // r12
  __int64 v9; // r15
  _QWORD *v10; // rax
  _QWORD *v11; // r14
  _QWORD *v12; // rsi
  size_t v13; // r13
  _QWORD *v14; // rbx
  char v15; // r15
  __int64 *v16; // rdi
  __int64 v17; // rax
  __int64 *v18; // rdx
  __int64 *v19; // rcx
  _QWORD *v21; // r13
  __int64 *v22; // r14
  __int64 v23; // rax
  __int64 v24; // rsi
  _QWORD *v25; // rax
  int v26; // r12d
  size_t v27; // rbx
  __int64 v28; // r13
  __int64 *v29; // rax
  __int64 *v30; // rsi
  __int64 v31; // rcx
  __int64 v32; // [rsp+0h] [rbp-120h] BYREF
  __int64 *v33; // [rsp+8h] [rbp-118h]
  __int64 v34; // [rsp+10h] [rbp-110h]
  _QWORD v35[2]; // [rsp+18h] [rbp-108h] BYREF
  __int64 v36; // [rsp+28h] [rbp-F8h] BYREF
  __int64 v37; // [rsp+30h] [rbp-F0h]
  __int64 v38; // [rsp+38h] [rbp-E8h]
  __int64 *v39; // [rsp+40h] [rbp-E0h] BYREF
  __int64 *v40; // [rsp+48h] [rbp-D8h]
  __int64 v41; // [rsp+50h] [rbp-D0h]
  size_t __n; // [rsp+58h] [rbp-C8h]
  void *v43; // [rsp+60h] [rbp-C0h]
  __int64 v44; // [rsp+68h] [rbp-B8h]
  _QWORD *v45; // [rsp+70h] [rbp-B0h] BYREF
  _BYTE v46[88]; // [rsp+78h] [rbp-A8h] BYREF
  void *v47; // [rsp+D0h] [rbp-50h]
  __int64 v48; // [rsp+D8h] [rbp-48h]
  __int64 *v49; // [rsp+E0h] [rbp-40h]
  __int64 *v50; // [rsp+E8h] [rbp-38h]
  unsigned __int8 v51; // [rsp+F7h] [rbp-29h]

  v49 = (__int64 *)a3; /*0x10034ded4*/
  v43 = a4; /*0x10034dede*/
  v35[0] = a4; /*0x10034dee5*/
  __n = a5; /*0x10034deec*/
  v35[1] = a5; /*0x10034def3*/
  codexmate_lib::core::skills::lock_skill_mutations::h04196551a2ddac87(&v45); /*0x10034df01*/
  v5 = v45; /*0x10034df06*/
  v6 = *(_QWORD *)v46; /*0x10034df0d*/
  v7 = v46[8]; /*0x10034df14*/
  if ( v45 != (_QWORD *)11 ) /*0x10034df20*/
  {
    memcpy((void *)(a1 + 17), &v46[9], 0x4Fu); /*0x10034e027*/
    *(_QWORD *)a1 = v5; /*0x10034e02c*/
    *(_QWORD *)(a1 + 8) = v6; /*0x10034e02f*/
    *(_BYTE *)(a1 + 16) = v7; /*0x10034e033*/
    return (__int64 *)a1; /*0x10034e03a*/
  }
  v50 = (__int64 *)a1; /*0x10034df26*/
  v51 = v46[8]; /*0x10034df2a*/
  v48 = *(_QWORD *)v46; /*0x10034df2e*/
  std::path::Path::_join::hb1a495d4f06b13b8(&v36, a2, v49, "skill-backupsreplace", 13); /*0x10034df4d*/
  v8 = v38; /*0x10034df59*/
  v49 = (__int64 *)v37; /*0x10034df67*/
  v9 = v48; /*0x10034df7c*/
  codexmate_lib::core::skills::resolve_backup_path::hf083208b26f1082c(&v45, v37, v38, v43, __n); /*0x10034df80*/
  v10 = v45; /*0x10034df85*/
  v11 = *(_QWORD **)v46; /*0x10034df8c*/
  v12 = *(_QWORD **)&v46[8]; /*0x10034df93*/
  v13 = *(_QWORD *)&v46[16]; /*0x10034df9a*/
  if ( v45 != (_QWORD *)11 ) /*0x10034dfa5*/
  {
    v16 = v50; /*0x10034e043*/
    v50[11] = *(_QWORD *)&v46[80]; /*0x10034e047*/
    v16[10] = *(_QWORD *)&v46[72]; /*0x10034e04f*/
    v16[9] = *(_QWORD *)&v46[64]; /*0x10034e057*/
    v16[8] = *(_QWORD *)&v46[56]; /*0x10034e05f*/
    v16[7] = *(_QWORD *)&v46[48]; /*0x10034e067*/
    v16[6] = *(_QWORD *)&v46[40]; /*0x10034e06f*/
    v19 = *(__int64 **)&v46[24]; /*0x10034e073*/
    v18 = *(__int64 **)&v46[32]; /*0x10034e07a*/
    v16[5] = *(_QWORD *)&v46[32]; /*0x10034e081*/
    v16[4] = (__int64)v19; /*0x10034e085*/
    v16[1] = (__int64)v11; /*0x10034e089*/
    v16[2] = (__int64)v12; /*0x10034e08d*/
    v16[3] = v13; /*0x10034e091*/
    *v16 = (__int64)v10; /*0x10034e095*/
    goto LABEL_14; /*0x10034e098*/
  }
  v47 = *(void **)&v46[8]; /*0x10034dfb2*/
  codexmate_lib::core::skills::is_regular_directory::hdbc469608c3f2638(&v45, *(_QWORD *)&v46[8], *(_QWORD *)&v46[16]); /*0x10034dfb9*/
  v14 = v45; /*0x10034dfbe*/
  v15 = v46[0]; /*0x10034dfc5*/
  if ( v45 != (_QWORD *)11 ) /*0x10034dfd1*/
  {
    v21 = v11; /*0x10034e0a4*/
    v22 = v50; /*0x10034e0a7*/
    v16 = (__int64 *)((char *)v50 + 9); /*0x10034e0ab*/
    memcpy((char *)v50 + 9, &v46[1], 0x57u); /*0x10034e0b4*/
    *v22 = (__int64)v14; /*0x10034e0b9*/
    *((_BYTE *)v22 + 8) = v15; /*0x10034e0bc*/
    v11 = v21; /*0x10034e0c0*/
    v9 = v48; /*0x10034e0c3*/
    if ( !v21 ) /*0x10034e0ca*/
      goto LABEL_14; /*0x10034e0ca*/
    goto LABEL_13; /*0x10034e0ca*/
  }
  if ( (v46[0] & 1) == 0 ) /*0x10034dfdb*/
  {
    v45 = v35; /*0x10034e0d5*/
    *(_QWORD *)v46 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x10034e0e3*/
    v16 = &v32; /*0x10034e0f1*/
    v9 = v48; /*0x10034e0ff*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v32, &unk_1017BC7D1, &v45); /*0x10034e103*/
    v18 = v50; /*0x10034e10f*/
    v50[3] = v34; /*0x10034e113*/
    v23 = v32; /*0x10034e117*/
    v19 = v33; /*0x10034e11e*/
    v18[2] = (__int64)v33; /*0x10034e125*/
    v18[1] = v23; /*0x10034e129*/
    *v18 = 8; /*0x10034e12d*/
    if ( !v11 ) /*0x10034e137*/
      goto LABEL_14; /*0x10034e137*/
LABEL_13:
    v16 = (__int64 *)v47; /*0x10034e139*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v11, 1); /*0x10034e145*/
    goto LABEL_14; /*0x10034e145*/
  }
  v16 = (__int64 *)v47; /*0x10034dfe1*/
  v9 = v48; /*0x10034dfe8*/
  v17 = std::sys::fs::remove_dir_all::h50b3bc76069a86c9(v47, v13); /*0x10034dfec*/
  if ( v17 ) /*0x10034dff4*/
  {
    v19 = v50; /*0x10034dffa*/
    *v50 = 2; /*0x10034dffe*/
    v19[1] = v17; /*0x10034e005*/
    if ( !v11 ) /*0x10034e00c*/
      goto LABEL_14; /*0x10034e00c*/
    goto LABEL_13; /*0x10034e00c*/
  }
  v16 = (__int64 *)&v45; /*0x10034e19e*/
  codexmate_lib::core::skills::load_skill_backups::he1d89bed831be6a2(&v45, (__int64)v49, v8); /*0x10034e1ac*/
  v25 = v45; /*0x10034e1b1*/
  v39 = *(__int64 **)v46; /*0x10034e1bf*/
  v40 = *(__int64 **)&v46[8]; /*0x10034e1cd*/
  v41 = *(_QWORD *)&v46[16]; /*0x10034e1db*/
  if ( v45 == (_QWORD *)11 ) /*0x10034e1e6*/
  {
    v26 = v41; /*0x10034e1ec*/
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$codexmate_lib..core..models..SkillBackupSummary$GT$$GT$::h914270f669806b0d(&v39); /*0x10034e1fa*/
    v27 = __n; /*0x10034e211*/
    alloc::raw_vec::RawVecInner$LT$A$GT$::try_allocate_in::h2a56735fd2ce8e59(&v45, __n, 0, 1, 1); /*0x10034e21d*/
    v44 = *(_QWORD *)v46; /*0x10034e229*/
    if ( (_DWORD)v45 == 1 ) /*0x10034e237*/
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v44, *(_QWORD *)&v46[8]); /*0x10034e35a*/
    v28 = *(_QWORD *)&v46[8]; /*0x10034e23d*/
    memcpy(*(void **)&v46[8], v43, v27); /*0x10034e251*/
    v29 = v50; /*0x10034e256*/
    v50[1] = v44; /*0x10034e261*/
    v29[2] = v28; /*0x10034e265*/
    v29[3] = v27; /*0x10034e269*/
    *((_DWORD *)v29 + 8) = v26; /*0x10034e26d*/
    *v29 = 11; /*0x10034e271*/
    if ( v11 ) /*0x10034e27b*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v47, v11, 1); /*0x10034e289*/
    if ( v36 ) /*0x10034e298*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, v36, 1); /*0x10034e2a3*/
    core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$std..collections..hash..map..HashMap$LT$muda..menu_id..MenuId$C$tauri..menu..Menu$LT$tauri_runtime_wry..Wry$LT$tauri..EventLoopMessage$GT$$GT$$GT$$GT$$GT$::h96804b47983bc03a( /*0x10034e2af*/
      v9,
      v51);
    return v50; /*0x10034e2b4*/
  }
  v30 = v50; /*0x10034e2bd*/
  v50[11] = *(_QWORD *)&v46[80]; /*0x10034e2c1*/
  v30[10] = *(_QWORD *)&v46[72]; /*0x10034e2c9*/
  v30[9] = *(_QWORD *)&v46[64]; /*0x10034e2d1*/
  v30[8] = *(_QWORD *)&v46[56]; /*0x10034e2d9*/
  v30[7] = *(_QWORD *)&v46[48]; /*0x10034e2e1*/
  v30[6] = *(_QWORD *)&v46[40]; /*0x10034e2e9*/
  v31 = *(_QWORD *)&v46[24]; /*0x10034e2ed*/
  v30[5] = *(_QWORD *)&v46[32]; /*0x10034e2fb*/
  v30[4] = v31; /*0x10034e2ff*/
  v30[3] = v41; /*0x10034e30a*/
  v19 = v39; /*0x10034e30e*/
  v18 = v40; /*0x10034e315*/
  v30[2] = (__int64)v40; /*0x10034e31c*/
  v30[1] = (__int64)v19; /*0x10034e320*/
  *v30 = (__int64)v25; /*0x10034e324*/
  if ( v11 ) /*0x10034e32a*/
    goto LABEL_13; /*0x10034e32a*/
LABEL_14:
  v24 = v36; /*0x10034e14a*/
  if ( v36 ) /*0x10034e154*/
  {
    v16 = v49; /*0x10034e15b*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v49, v36, 1); /*0x10034e15f*/
  }
  if ( (v51 & 1) == 0 /*0x10034e335*/
    && 2 * std::panicking::panic_count::GLOBAL_PANIC_COUNT::h0191519d82e04aa6
    && !(unsigned __int8)std::panicking::panic_count::is_zero_slow_path::h509d4bac4686b0cd(v16, v24, v18, v19) )
  {
    *(_BYTE *)(v9 + 8) = 1; /*0x10034e342*/
  }
  std::sys::pal::unix::sync::mutex::Mutex::unlock::hb9acd26a137dd78d(*(_QWORD *)v9); /*0x10034e183*/
  return v50; /*0x10034e18c*/
}