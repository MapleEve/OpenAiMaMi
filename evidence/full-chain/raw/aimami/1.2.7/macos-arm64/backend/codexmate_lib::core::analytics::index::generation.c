// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::index::generation::h586562d605f60c67; addr: 0x10089a090; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:17Z
__int64 __fastcall codexmate_lib::core::analytics::index::generation::h586562d605f60c67(__int64 *a1, __int64 a2)
{
  _QWORD *v2; // rax
  __int64 v3; // rax
  int v4; // eax
  unsigned __int64 v5; // rax
  __int64 *v6; // rsi
  __int64 result; // rax
  unsigned __int64 v8; // rax
  _QWORD *v9; // [rsp+8h] [rbp-168h] BYREF
  unsigned __int128 v10; // [rsp+10h] [rbp-160h]
  unsigned __int128 v11; // [rsp+20h] [rbp-150h]
  unsigned __int128 v12; // [rsp+30h] [rbp-140h]
  sqlite3_stmt *v13; // [rsp+40h] [rbp-130h]
  _QWORD *v14; // [rsp+48h] [rbp-128h] BYREF
  unsigned __int128 v15; // [rsp+50h] [rbp-120h]
  unsigned __int128 v16; // [rsp+60h] [rbp-110h]
  unsigned __int128 v17; // [rsp+70h] [rbp-100h]
  sqlite3_stmt *v18; // [rsp+80h] [rbp-F0h]
  unsigned __int64 v19; // [rsp+88h] [rbp-E8h] BYREF
  _QWORD *v20; // [rsp+90h] [rbp-E0h]
  _QWORD *v21; // [rsp+98h] [rbp-D8h]
  _BYTE v22[40]; // [rsp+A0h] [rbp-D0h]
  sqlite3_stmt *v23; // [rsp+C8h] [rbp-A8h]
  _QWORD *v24; // [rsp+D0h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+D8h] [rbp-98h] BYREF
  unsigned __int64 v26; // [rsp+E0h] [rbp-90h] BYREF
  unsigned __int128 v27; // [rsp+E8h] [rbp-88h]
  unsigned __int128 v28; // [rsp+F8h] [rbp-78h]
  unsigned __int128 v29; // [rsp+108h] [rbp-68h]
  sqlite3_stmt *v30; // [rsp+118h] [rbp-58h]
  _QWORD *v31; // [rsp+120h] [rbp-50h] BYREF
  unsigned __int128 v32; // [rsp+128h] [rbp-48h]
  unsigned __int128 v33; // [rsp+138h] [rbp-38h]
  unsigned __int128 v34; // [rsp+148h] [rbp-28h]
  sqlite3_stmt *v35; // [rsp+158h] [rbp-18h]

  rusqlite::Connection::prepare_with_flags::h018440c5579b9eb9( /*0x10089a0be*/
    &v19,
    a2,
    "SELECT value FROM meta WHERE key='generation'.jsonlDELETE FROM files WHERE path=?1INSERT INTO files(path,fingerprint,state,offset,ordinal,complete,thread_id,subagent,incomplete,rollout_id)\n         VALUES(?1,?2,?3,?4,?5,?6,?7,?8,?9,?10) ON CONFLICT(path) DO UPDATE SET\n         fingerprint=excluded.fingerprint,state=excluded.state,offset=excluded.offset,ordinal=excluded.ordinal,\n         complete=excluded.complete,thread_id=excluded.thread_id,subagent=excluded.subagent,\n         incomplete=excluded.incomplete,failed=0,rollout_id=excluded.rollout_idINSERT INTO facts(source,key,thread_id,turn_id,ts,kind,priority,data)\n            VALUES(?1,?2,?3,?4,?5,?6,?7,?8) ON CONFLICT(source,key) DO UPDATE SET\n            ts=excluded.ts,priority=excluded.priority,data=excluded.data\n            WHERE excluded.priority>=facts.priorityINSERT INTO meta(key,value) VALUES('updated_at',?1) ON CONFLICT(key) DO UPDATE SET value=excluded.value",
    45);
  v31 = v20; /*0x10089a0d0*/
  v32 = __PAIR128__(*(unsigned __int64 *)v22, (unsigned __int64)v21); /*0x10089a0db*/
  v33 = *(_OWORD *)&v22[8]; /*0x10089a0f1*/
  v34 = *(_OWORD *)&v22[24]; /*0x10089a107*/
  v35 = v23; /*0x10089a11d*/
  if ( (_DWORD)v19 != 1 ) /*0x10089a124*/
  {
    v18 = v35; /*0x10089a190*/
    v17 = v34; /*0x10089a1a6*/
    v16 = v33; /*0x10089a1bc*/
    v15 = v32; /*0x10089a1d6*/
    v14 = v31; /*0x10089a1dd*/
    v4 = sqlite3_bind_parameter_count(v35); /*0x10089a1eb*/
    if ( v4 ) /*0x10089a1f2*/
    {
      v26 = 0x8000000000000013LL; /*0x10089a1fa*/
      *(_QWORD *)&v27 = 0; /*0x10089a201*/
      *((_QWORD *)&v27 + 1) = v4; /*0x10089a20c*/
      goto LABEL_13; /*0x10089a210*/
    }
    v24 = &v14; /*0x10089a21c*/
    v25 = 0; /*0x10089a223*/
    _$LT$rusqlite..row..Rows$u20$as$u20$fallible_streaming_iterator..FallibleStreamingIterator$GT$::advance::h42d1c33a2c952cfa( /*0x10089a23c*/
      &v19,
      &v24);
    v5 = v19; /*0x10089a241*/
    if ( v19 == 0x8000000000000016LL ) /*0x10089a24f*/
    {
      v6 = &v25; /*0x10089a251*/
      if ( v25 ) /*0x10089a260*/
      {
        rusqlite::row::Row::get::h36ab96ba55e8751f(&v26, &v25, 0, &off_101AB6B40); /*0x10089a272*/
LABEL_12:
        core::ptr::drop_in_place$LT$rusqlite..row..Rows$GT$::h2239e9987ac3b07a(&v24); /*0x10089a308*/
LABEL_13:
        core::ptr::drop_in_place$LT$rusqlite..statement..Statement$GT$::h3a7579a15705c8bc(&v14); /*0x10089a314*/
        v2 = (_QWORD *)v26; /*0x10089a320*/
        if ( v26 == 0x8000000000000016LL ) /*0x10089a32e*/
          goto LABEL_3; /*0x10089a32e*/
        goto LABEL_14; /*0x10089a32e*/
      }
      v5 = 0x8000000000000009LL; /*0x10089a2c7*/
    }
    else
    {
      v6 = v20; /*0x10089a27c*/
      v31 = v21; /*0x10089a28a*/
      v32 = *(_OWORD *)v22; /*0x10089a295*/
      v33 = *(_OWORD *)&v22[16]; /*0x10089a2ab*/
      *(_QWORD *)&v34 = *(_QWORD *)&v22[32]; /*0x10089a2c1*/
    }
    v26 = v5; /*0x10089a2ca*/
    *(_QWORD *)&v27 = v6; /*0x10089a2d1*/
    *((_QWORD *)&v27 + 1) = v31; /*0x10089a2e0*/
    v28 = v32; /*0x10089a2e4*/
    v29 = v33; /*0x10089a2f4*/
    v30 = (sqlite3_stmt *)v34; /*0x10089a304*/
    goto LABEL_12; /*0x10089a304*/
  }
  v30 = v35; /*0x10089a12a*/
  v29 = v34; /*0x10089a13a*/
  v28 = v33; /*0x10089a14a*/
  v27 = v32; /*0x10089a15e*/
  v26 = (unsigned __int64)v31; /*0x10089a165*/
  v2 = v31; /*0x10089a16c*/
  if ( v31 == (_QWORD *)0x8000000000000016LL ) /*0x10089a17a*/
  {
LABEL_3:
    v3 = v27; /*0x10089a180*/
    goto LABEL_16; /*0x10089a187*/
  }
LABEL_14:
  if ( v2 != (_QWORD *)0x8000000000000009LL ) /*0x10089a337*/
  {
    v13 = v30; /*0x10089a359*/
    v12 = v29; /*0x10089a36f*/
    v11 = v28; /*0x10089a385*/
    v9 = v2; /*0x10089a393*/
    v10 = v27; /*0x10089a39a*/
    v31 = &v9; /*0x10089a3a8*/
    *(_QWORD *)&v32 = _$LT$rusqlite..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h51e21f6f745e52d4; /*0x10089a3b3*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v19, &unk_101902300, &v31); /*0x10089a3c9*/
    a1[3] = (__int64)v21; /*0x10089a3d5*/
    v8 = v19; /*0x10089a3d9*/
    a1[2] = (__int64)v20; /*0x10089a3e7*/
    a1[1] = v8; /*0x10089a3eb*/
    core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(&v9); /*0x10089a3f6*/
    result = 10; /*0x10089a3fb*/
    goto LABEL_18; /*0x10089a3fb*/
  }
  core::ptr::drop_in_place$LT$rusqlite..error..Error$GT$::hca56533a38630992(&v26); /*0x10089a340*/
  v3 = 0; /*0x10089a345*/
LABEL_16:
  a1[1] = v3; /*0x10089a347*/
  result = 11; /*0x10089a34b*/
LABEL_18:
  *a1 = result; /*0x10089a400*/
  return result; /*0x10089a403*/
}