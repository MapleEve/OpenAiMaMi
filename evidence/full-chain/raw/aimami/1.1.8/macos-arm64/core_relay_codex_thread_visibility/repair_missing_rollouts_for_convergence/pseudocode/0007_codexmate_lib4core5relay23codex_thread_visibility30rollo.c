// mac 1.1.8 behavioral repair_missing_rollouts_for_convergence 0x1004086a0 d=1
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::rollout_file_belongs_to_thread::hbd9f93e25b28d29c(
        __int64 a1,
        __int64 a2,
        const void *a3,
        size_t a4)
{
  __int64 v6; // rbx
  __int64 v8; // rax
  __int64 v9; // [rsp+0h] [rbp-A0h] BYREF
  __int64 v10; // [rsp+8h] [rbp-98h]
  __int64 v11; // [rsp+10h] [rbp-90h]
  __int64 v12; // [rsp+18h] [rbp-88h]
  __int64 v13; // [rsp+20h] [rbp-80h]
  __int64 v14; // [rsp+28h] [rbp-78h]
  __int64 v15[8]; // [rsp+60h] [rbp-40h] BYREF

  codexmate_lib::core::relay::codex_thread_visibility::find_first_session_meta_line::h27aa0f5403f8bc76(&v9, a1, a2); /*0x1004086c5*/
  if ( (_DWORD)v9 != 10 ) /*0x1004086d1*/
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h754f3a2a741d9d03(&v9); /*0x100408759*/
    goto LABEL_7; /*0x100408759*/
  }
  v6 = v10; /*0x1004086d3*/
  if ( __OFSUB__(-v10, 1) ) /*0x1004086e0*/
  {
LABEL_7:
    LODWORD(a4) = 0; /*0x10040875e*/
    return (unsigned int)a4; /*0x10040875e*/
  }
  v9 = v11; /*0x1004086f0*/
  v10 = v12; /*0x1004086f7*/
  v11 = 0; /*0x1004086fe*/
  v12 = 0; /*0x100408709*/
  v13 = v9; /*0x100408714*/
  v14 = v10; /*0x100408718*/
  serde_json::de::from_trait::h13c6255c2aa0fc50(v15, &v9); /*0x100408727*/
  if ( LOBYTE(v15[0]) == 6 ) /*0x100408730*/
  {
    core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::ha21db7e75e29d7ea(v15); /*0x100408736*/
    if ( v6 ) /*0x10040873e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x10040874b*/
    goto LABEL_7; /*0x100408750*/
  }
  v12 = v15[3]; /*0x100408778*/
  v11 = v15[2]; /*0x100408783*/
  v10 = v15[1]; /*0x100408792*/
  v9 = v15[0]; /*0x100408799*/
  v8 = serde_json::value::Value::pointer::hda2ad138ba9a0c27( /*0x1004087b3*/
         &v9,
         "/payload/id[AiMaMi][patch-instructions] no donor thread found, using fallback instructionsFollow the user's instructions carefully. Respond helpfully and use tools when appropriate.",
         11);
  if ( v8 && *(_BYTE *)v8 == 3 && *(_QWORD *)(v8 + 24) == a4 ) /*0x1004087c6*/
    LOBYTE(a4) = memcmp(*(const void **)(v8 + 16), a3, a4) == 0; /*0x1004087d9*/
  else
    LODWORD(a4) = 0; /*0x1004087df*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::h4a8fc95b8a96a585(&v9); /*0x1004087e9*/
  if ( v6 ) /*0x1004087f1*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(); /*0x100408802*/
  return (unsigned int)a4; /*0x100408764*/
}