// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::analytics::index::rollout_id::h1ab3cb916a9929ac; addr: 0x10089a460; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T04:44:17Z
void *__fastcall codexmate_lib::core::analytics::index::rollout_id::h1ab3cb916a9929ac(
        signed __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rsi
  char *v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r13
  signed __int64 v14; // r14
  char *v15; // r13
  bool v16; // zf
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // r15
  void *result; // rax
  char v21[8]; // [rsp+8h] [rbp-48h] BYREF
  __int64 v22; // [rsp+10h] [rbp-40h]
  __int64 v23; // [rsp+18h] [rbp-38h]
  char *v24; // [rsp+20h] [rbp-30h]

  v4 = std::path::Path::file_name::hf6c2daad91e50ebf(a2, a3); /*0x10089a47a*/
  if ( v4 ) /*0x10089a482*/
  {
    core::str::converts::from_utf8::hb32deb9559450f6e(v21, v4, v5); /*0x10089a48b*/
    v6 = 0; /*0x10089a490*/
    if ( !v21[0] ) /*0x10089a496*/
      v6 = v23; /*0x10089a496*/
    v7 = 1; /*0x10089a49b*/
    if ( !v21[0] ) /*0x10089a4a0*/
      v7 = v22; /*0x10089a4a0*/
  }
  else
  {
    v7 = 1; /*0x10089a4a7*/
    v6 = 0; /*0x10089a4ac*/
  }
  v8 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hf1c04274b76af3ea(v7, v6, ".zstwaitreadeditturnlsof", 4); /*0x10089a4cb*/
  v10 = v9; /*0x10089a4ce*/
  v11 = (char *)core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hf1c04274b76af3ea( /*0x10089a4d4*/
                  v8,
                  v9,
                  ".jsonlDELETE FROM files WHERE path=?1INSERT INTO files(path,fingerprint,state,offset,ordinal,complete,thread_id,subagent,incomplete,rollout_id)\n         VALUES(?1,?2,?3,?4,?5,?6,?7,?8,?9,?10) ON CONFLICT(path) DO UPDATE SET\n         fingerprint=excluded.fingerprint,state=excluded.state,offset=excluded.offset,ordinal=excluded.ordinal,\n         complete=excluded.complete,thread_id=excluded.thread_id,subagent=excluded.subagent,\n         incomplete=excluded.incomplete,failed=0,rollout_id=excluded.rollout_idINSERT INTO facts(source,key,thread_id,turn_id,ts,kind,priority,data)\n            VALUES(?1,?2,?3,?4,?5,?6,?7,?8) ON CONFLICT(source,key) DO UPDATE SET\n            ts=excluded.ts,priority=excluded.priority,data=excluded.data\n            WHERE excluded.priority>=facts.priorityINSERT INTO meta(key,value) VALUES('updated_at',?1) ON CONFLICT(key) DO UPDATE SET value=excluded.value",
                  6);
  v13 = 0; /*0x10089a4d9*/
  if ( v12 >= 0x24 ) /*0x10089a4e3*/
    v13 = v12 - 36; /*0x10089a4e3*/
  v14 = v12 - v13; /*0x10089a4ed*/
  LOBYTE(v10) = v12 <= 0x24 || v12 <= v13; /*0x10089a4f4*/
  if ( (_BYTE)v10 || v11[v13] >= -64 ) /*0x10089a4fe*/
  {
    v15 = &v11[v13]; /*0x10089a500*/
    if ( !v15 ) /*0x10089a506*/
      v14 = v12; /*0x10089a506*/
    v16 = v14 == 0; /*0x10089a50a*/
    if ( v14 < 0 ) /*0x10089a50d*/
      goto LABEL_15; /*0x10089a50d*/
  }
  else
  {
    v15 = nullptr; /*0x10089a51d*/
    v14 = v12; /*0x10089a523*/
    v16 = v12 == 0; /*0x10089a527*/
    if ( (v12 & 0x8000000000000000LL) != 0LL ) /*0x10089a52a*/
    {
LABEL_15:
      v17 = 0; /*0x10089a50f*/
      goto LABEL_16; /*0x10089a50f*/
    }
  }
  if ( v16 ) /*0x10089a52c*/
  {
    v19 = 1; /*0x10089a558*/
  }
  else
  {
    v24 = v11; /*0x10089a52e*/
    _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(v8, v10, v12); /*0x10089a532*/
    v17 = 1; /*0x10089a537*/
    v18 = _RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(v14, 1); /*0x10089a545*/
    if ( !v18 ) /*0x10089a54d*/
LABEL_16:
      alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(v17, v14); /*0x10089a512*/
    v19 = v18; /*0x10089a54f*/
    v11 = v24; /*0x10089a552*/
  }
  if ( v15 ) /*0x10089a561*/
    v11 = v15; /*0x10089a561*/
  result = memcpy((void *)v19, v11, v14); /*0x10089a56e*/
  *a1 = v14; /*0x10089a573*/
  a1[1] = v19; /*0x10089a576*/
  a1[2] = v14; /*0x10089a57a*/
  return result; /*0x10089a57e*/
}