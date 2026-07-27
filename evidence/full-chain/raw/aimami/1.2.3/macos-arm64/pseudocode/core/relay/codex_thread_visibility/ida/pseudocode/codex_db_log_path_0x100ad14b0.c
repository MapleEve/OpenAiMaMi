// __ZN13codexmate_lib4core5relay23codex_thread_visibility17codex_db_log_path @ 0x100ad14b0
// 1.2.3 NEW-delta | codexmate_lib::core::relay::codex_thread_visibility::codex_db_log_path | vs 1.2.2 新增(IDA函数枚举diff, 名↔地址一致)
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::codex_db_log_path::h2ac8f7973a414859(
        __int64 *a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 result; // rax
  __int64 v8; // rsi
  _QWORD v9[2]; // [rsp+0h] [rbp-80h] BYREF
  __int64 v10; // [rsp+10h] [rbp-70h] BYREF
  __int64 v11; // [rsp+18h] [rbp-68h]
  __int64 v12; // [rsp+20h] [rbp-60h]
  __int64 *v13; // [rsp+28h] [rbp-58h] BYREF
  __int64 (__fastcall **v14)(); // [rsp+30h] [rbp-50h]
  __int64 v15; // [rsp+38h] [rbp-48h]
  __int64 v16; // [rsp+40h] [rbp-40h] BYREF
  __int64 v17; // [rsp+48h] [rbp-38h]
  __int64 v18; // [rsp+50h] [rbp-30h]
  char v19[33]; // [rsp+5Fh] [rbp-21h] BYREF

  codexmate_lib::platform::paths::CodexPaths::resolve_codex_home::h642c67132ee06a4b(&v10); /*0x100ad14cc*/
  v4 = v11; /*0x100ad14d1*/
  v5 = std::path::Path::_strip_prefix::h737731a9318ab115(a2, a3, v11, v12); /*0x100ad14e2*/
  if ( v5 ) /*0x100ad14ea*/
  {
    v16 = v5; /*0x100ad14ec*/
    v17 = v6; /*0x100ad14f0*/
    v13 = &v16; /*0x100ad14f8*/
    v14 = (__int64 (__fastcall **)())_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f; /*0x100ad1503*/
    result = alloc::fmt::format::format_inner::h3c16c74008a310d4(a1, &unk_1017CA555, &v13); /*0x100ad1515*/
    v8 = v10; /*0x100ad151a*/
    if ( !v10 ) /*0x100ad1521*/
      return result; /*0x100ad1521*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v8, 1); /*0x100ad1521*/
  }
  v9[0] = a2; /*0x100ad153d*/
  v9[1] = a3; /*0x100ad1541*/
  v16 = 0; /*0x100ad1545*/
  v17 = 1; /*0x100ad154d*/
  v18 = 0; /*0x100ad1555*/
  v15 = 1610612768; /*0x100ad155d*/
  v13 = &v16; /*0x100ad1569*/
  v14 = &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1107; /*0x100ad1574*/
  if ( (unsigned __int8)_$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::h93090e66e872583f(v9, &v13) ) /*0x100ad1580*/
    core::result::unwrap_failed::h855bccc0ecc45c4f( /*0x100ad15cd*/
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1108,
      55,
      v19,
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1122,
      &anon_8eb05e0246fafd9ecdc13ef1a946b2b3_1110);
  a1[2] = v18; /*0x100ad158d*/
  result = v16; /*0x100ad1591*/
  a1[1] = v17; /*0x100ad1599*/
  *a1 = result; /*0x100ad159d*/
  v8 = v10; /*0x100ad15a0*/
  if ( v10 ) /*0x100ad15a7*/
    return _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v4, v8, 1); /*0x100ad1523*/
  return result; /*0x100ad1530*/
}