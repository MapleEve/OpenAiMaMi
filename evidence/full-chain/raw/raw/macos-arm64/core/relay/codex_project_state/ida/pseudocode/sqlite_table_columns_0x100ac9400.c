// __ZN13codexmate_lib4core5relay19codex_project_state20sqlite_table_columns @ 0x100ac9400 | 基线 same-set
void __fastcall codexmate_lib::core::relay::codex_project_state::sqlite_table_columns::h5a472303a71d7212(
        __int64 (__fastcall **a1)(),
        __int64 a2)
{
  __int64 v2; // r14
  __int64 (__fastcall *v3)(); // rax
  int v4; // eax
  __int64 (__fastcall *v5)(); // rax
  _QWORD v6[2]; // [rsp+8h] [rbp-C8h] BYREF
  __int64 v7; // [rsp+18h] [rbp-B8h] BYREF
  __int64 v8; // [rsp+20h] [rbp-B0h]
  __int64 v9; // [rsp+28h] [rbp-A8h]
  __int64 (__fastcall *v10)(); // [rsp+30h] [rbp-A0h] BYREF
  __int64 (__fastcall *v11)(); // [rsp+38h] [rbp-98h]
  __int64 (__fastcall *v12)(); // [rsp+40h] [rbp-90h]
  __int64 (__fastcall *v13)(); // [rsp+48h] [rbp-88h]
  sqlite3_stmt *v14; // [rsp+50h] [rbp-80h]
  sqlite3_stmt *v15; // [rsp+58h] [rbp-78h]
  sqlite3_stmt *v16; // [rsp+60h] [rbp-70h]
  sqlite3_stmt *v17; // [rsp+68h] [rbp-68h]
  sqlite3_stmt *v18; // [rsp+70h] [rbp-60h]
  __int64 (__fastcall *v19)(); // [rsp+78h] [rbp-58h] BYREF
  __int64 (__fastcall *v20)(); // [rsp+80h] [rbp-50h]
  __int64 (__fastcall *v21)(); // [rsp+88h] [rbp-48h]
  __int64 (__fastcall *v22)(); // [rsp+90h] [rbp-40h]
  __int64 (__fastcall *v23)(); // [rsp+98h] [rbp-38h]
  sqlite3_stmt *v24; // [rsp+A0h] [rbp-30h]
  sqlite3_stmt *v25; // [rsp+A8h] [rbp-28h]
  sqlite3_stmt *v26; // [rsp+B0h] [rbp-20h]

  v6[0] = "threadsupdated_at_msCOALESCE(updated_at_ms, 0)updated_atCOALESCE(updated_at, 0)0codexmate_lib::core::relay::codex_project_stateprojectless-thread-idsBEGIN DEFERREDBEGIN IMMEDIATEBEGIN EXCLUSIVEPRAGMA wal_checkpoint(FULL);UPDATE threads SET cwd = ?1 WHERE id = ?2 AND COALESCE(cwd, '') = ''"; /*0x100ac941d*/
  v6[1] = 7; /*0x100ac9424*/
  v10 = (__int64 (__fastcall *)())v6; /*0x100ac9436*/
  v11 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc155efd4ae9c9554; /*0x100ac9444*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v7, &unk_1017BF627, &v10); /*0x100ac9460*/
  v2 = v8; /*0x100ac9465*/
  rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9(&v10, a2, v8, v9); /*0x100ac9480*/
  v19 = v11; /*0x100ac9492*/
  v20 = v12; /*0x100ac949d*/
  v21 = v13; /*0x100ac94a8*/
  v22 = (__int64 (__fastcall *)())v14; /*0x100ac94b0*/
  v23 = (__int64 (__fastcall *)())v15; /*0x100ac94b8*/
  v24 = v16; /*0x100ac94c0*/
  v25 = v17; /*0x100ac94c8*/
  v26 = v18; /*0x100ac94d0*/
  if ( (_DWORD)v10 == 1 ) /*0x100ac94d7*/
  {
    a1[7] = (__int64 (__fastcall *)())v26; /*0x100ac94dd*/
    a1[6] = (__int64 (__fastcall *)())v25; /*0x100ac94e5*/
    a1[5] = (__int64 (__fastcall *)())v24; /*0x100ac94ed*/
    a1[4] = v23; /*0x100ac94f5*/
    a1[3] = v22; /*0x100ac94fd*/
    a1[2] = v21; /*0x100ac9505*/
    v3 = v19; /*0x100ac9509*/
    a1[1] = v20; /*0x100ac9511*/
    *a1 = v3; /*0x100ac9515*/
    if ( v7 ) /*0x100ac9522*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v7, 1); /*0x100ac9530*/
  }
  else
  {
    v17 = v26; /*0x100ac953e*/
    v16 = v25; /*0x100ac9546*/
    v15 = v24; /*0x100ac954e*/
    v14 = (sqlite3_stmt *)v23; /*0x100ac9556*/
    v13 = v22; /*0x100ac955e*/
    v12 = v21; /*0x100ac9569*/
    v11 = v20; /*0x100ac9578*/
    v10 = v19; /*0x100ac957f*/
    if ( v7 ) /*0x100ac9590*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v2, v7, 1); /*0x100ac959a*/
    v4 = sqlite3_bind_parameter_count(v17); /*0x100ac95a3*/
    if ( v4 ) /*0x100ac95ad*/
    {
      *a1 = (__int64 (__fastcall *)())0x8000000000000013LL; /*0x100ac95b9*/
      a1[1] = nullptr; /*0x100ac95bc*/
      a1[2] = (__int64 (__fastcall *)())v4; /*0x100ac95c4*/
    }
    else
    {
      _$LT$alloc..collections..btree..set..BTreeSet$LT$T$GT$$u20$as$u20$core..iter..traits..collect..FromIterator$LT$T$GT$$GT$::from_iter::he55313a0d34cf1e9( /*0x100ac95d5*/
        &v19,
        &v10,
        0);
      a1[3] = v21; /*0x100ac95de*/
      v5 = v19; /*0x100ac95e2*/
      a1[2] = v20; /*0x100ac95ea*/
      a1[1] = v5; /*0x100ac95ee*/
      *a1 = (__int64 (__fastcall *)())0x8000000000000016LL; /*0x100ac9600*/
    }
    core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h4f713d4b60ebad1f(&v10); /*0x100ac960a*/
  }
}