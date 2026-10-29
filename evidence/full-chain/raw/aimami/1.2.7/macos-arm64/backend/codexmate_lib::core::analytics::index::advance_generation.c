// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::index::advance_generation::h746173a1cdb96fa5; addr: 0x10089b590; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:17Z
__int64 __fastcall codexmate_lib::core::analytics::index::advance_generation::h746173a1cdb96fa5(_QWORD *a1, __int64 a2)
{
  __int64 result; // rax
  sqlite3_stmt *v3; // r14
  int v4; // eax
  __int64 v5; // r14
  _QWORD *v6; // rax
  __int64 v7; // [rsp+0h] [rbp-120h] BYREF
  _QWORD *v8; // [rsp+8h] [rbp-118h]
  __int64 (__fastcall *v9)(_QWORD, _QWORD); // [rsp+10h] [rbp-110h]
  __int64 v10; // [rsp+18h] [rbp-108h]
  __int64 v11; // [rsp+20h] [rbp-100h]
  __int64 v12; // [rsp+28h] [rbp-F8h]
  __int64 v13; // [rsp+30h] [rbp-F0h]
  __int64 v14; // [rsp+38h] [rbp-E8h]
  sqlite3_stmt *v15; // [rsp+40h] [rbp-E0h]
  _QWORD v16[8]; // [rsp+48h] [rbp-D8h] BYREF
  _QWORD *v17; // [rsp+88h] [rbp-98h] BYREF
  __int64 (__fastcall *v18)(_QWORD, _QWORD); // [rsp+90h] [rbp-90h]
  __int64 v19; // [rsp+98h] [rbp-88h]
  __int64 v20; // [rsp+A0h] [rbp-80h]
  __int64 v21; // [rsp+A8h] [rbp-78h]
  __int64 v22; // [rsp+B0h] [rbp-70h]
  __int64 v23; // [rsp+B8h] [rbp-68h]
  sqlite3_stmt *v24; // [rsp+C0h] [rbp-60h]
  unsigned __int64 v25; // [rsp+C8h] [rbp-58h] BYREF
  __int64 (__fastcall *v26)(_QWORD, _QWORD); // [rsp+D0h] [rbp-50h]
  __int64 v27; // [rsp+D8h] [rbp-48h]
  __int64 v28; // [rsp+E0h] [rbp-40h]
  __int64 v29; // [rsp+E8h] [rbp-38h]
  __int64 v30; // [rsp+F0h] [rbp-30h]
  __int64 v31; // [rsp+F8h] [rbp-28h]
  sqlite3_stmt *v32; // [rsp+100h] [rbp-20h]

  rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9( /*0x10089b5c3*/
    &v7,
    a2,
    "INSERT INTO meta(key,value) VALUES('generation',1) ON CONFLICT(key) DO UPDATE SET value=value+1analytics-v3.sqliteus"
    "er_versionforeign_keysONPRAGMA journal_mode=WAL;\n"
    "         CREATE TABLE IF NOT EXISTS files (\n"
    "           path TEXT PRIMARY KEY, fingerprint TEXT NOT NULL, state TEXT NOT NULL,\n"
    "           offset INTEGER NOT NULL, ordinal INTEGER NOT NULL, complete INTEGER NOT NULL,\n"
    "           thread_id TEXT NOT NULL, subagent INTEGER NOT NULL, incomplete INTEGER NOT NULL,\n"
    "           failed INTEGER NOT NULL DEFAULT 0, rollout_id TEXT NOT NULL);\n"
    "         CREATE TABLE IF NOT EXISTS facts (\n"
    "           source TEXT NOT NULL REFERENCES files(path) ON DELETE CASCADE,\n"
    "           key TEXT NOT NULL, thread_id TEXT NOT NULL, turn_id TEXT NOT NULL,\n"
    "           ts INTEGER NOT NULL, kind TEXT NOT NULL, priority INTEGER NOT NULL,\n"
    "           data TEXT NOT NULL,\n"
    "           PRIMARY KEY(source,key));\n"
    "         CREATE INDEX IF NOT EXISTS facts_identity ON facts(key,priority DESC,source);\n"
    "         CREATE TABLE IF NOT EXISTS meta (key TEXT PRIMARY KEY,value INTEGER NOT NULL);\n"
    "         PRAGMA user_version=3;",
    95);
  if ( (_DWORD)v7 == 1 ) /*0x10089b5cf*/
  {
    v32 = v15; /*0x10089b5d5*/
    v31 = v14; /*0x10089b5dd*/
    v30 = v13; /*0x10089b5e5*/
    v29 = v12; /*0x10089b5ed*/
    v28 = v11; /*0x10089b5f5*/
    v27 = v10; /*0x10089b5fd*/
    result = (__int64)v8; /*0x10089b601*/
    v26 = v9; /*0x10089b609*/
    v25 = (unsigned __int64)v8; /*0x10089b60d*/
    if ( v8 == (_QWORD *)0x8000000000000016LL ) /*0x10089b619*/
    {
LABEL_3:
      *a1 = 11; /*0x10089b61f*/
      return result; /*0x10089b626*/
    }
  }
  else
  {
    v23 = v14; /*0x10089b62f*/
    v22 = v13; /*0x10089b637*/
    v21 = v12; /*0x10089b63f*/
    v20 = v11; /*0x10089b647*/
    v19 = v10; /*0x10089b64f*/
    v18 = v9; /*0x10089b65e*/
    v17 = v8; /*0x10089b665*/
    v3 = v15; /*0x10089b66c*/
    v24 = v15; /*0x10089b670*/
    v4 = sqlite3_bind_parameter_count(v15); /*0x10089b677*/
    if ( v4 ) /*0x10089b67e*/
    {
      v25 = 0x8000000000000013LL; /*0x10089b682*/
      v26 = nullptr; /*0x10089b686*/
      v27 = v4; /*0x10089b68e*/
    }
    else
    {
      rusqlite::statement::Statement::execute_with_bound_parameters::h08f4c5ac813283a1(&v25, v17, v3); /*0x10089b6a2*/
    }
    result = core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h3a7579a15705c8bc(&v17); /*0x10089b6ae*/
    if ( v25 == 0x8000000000000016LL ) /*0x10089b6bb*/
      goto LABEL_3; /*0x10089b6bb*/
  }
  v16[7] = v32; /*0x10089b6c5*/
  v16[6] = v31; /*0x10089b6d0*/
  v16[5] = v30; /*0x10089b6db*/
  v16[4] = v29; /*0x10089b6e6*/
  v16[3] = v28; /*0x10089b6f1*/
  v16[2] = v27; /*0x10089b6fc*/
  v16[1] = v26; /*0x10089b70b*/
  v16[0] = v25; /*0x10089b712*/
  v17 = v16; /*0x10089b720*/
  v18 = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10089b72e*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v7, &unk_101902300, &v17); /*0x10089b74a*/
  v5 = v7; /*0x10089b74f*/
  v6 = v8; /*0x10089b756*/
  a1[3] = v9; /*0x10089b764*/
  a1[2] = v6; /*0x10089b768*/
  result = core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(v16); /*0x10089b773*/
  *a1 = 10; /*0x10089b778*/
  a1[1] = v5; /*0x10089b77f*/
  return result; /*0x10089b783*/
}