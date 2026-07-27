// __ZN13codexmate_lib4core5relay23codex_thread_visibility30rollout_file_belongs_to_thread @ 0x100ae29f0 | 基线 same-set
__int64 __fastcall codexmate_lib::core::relay::codex_thread_visibility::rollout_file_belongs_to_thread::h40fc6d4d854da212(
        __int64 a1,
        __int64 a2,
        const void *a3,
        size_t a4)
{
  __int64 v6; // rbx
  __int64 v7; // r14
  __int64 v9; // rax
  __int64 v10; // [rsp+0h] [rbp-A0h] BYREF
  __int64 v11; // [rsp+8h] [rbp-98h]
  __int64 v12; // [rsp+10h] [rbp-90h]
  __int64 v13; // [rsp+18h] [rbp-88h]
  __int64 v14; // [rsp+20h] [rbp-80h]
  __int64 v15; // [rsp+28h] [rbp-78h]
  _QWORD v16[8]; // [rsp+60h] [rbp-40h] BYREF

  codexmate_lib::core::relay::codex_thread_visibility::find_first_session_meta_line::hbef333d2a75f746a(&v10, a1, a2); /*0x100ae2a15*/
  if ( (_DWORD)v10 != 11 ) /*0x100ae2a21*/
  {
    core::ptr::drop_in_place$LT$codexmate_lib..core..models..CoreError$GT$::h389b3279db467fcb(&v10); /*0x100ae2aa9*/
    goto LABEL_7; /*0x100ae2aa9*/
  }
  v6 = v11; /*0x100ae2a23*/
  if ( __OFSUB__(-v11, 1) ) /*0x100ae2a30*/
  {
LABEL_7:
    LODWORD(a4) = 0; /*0x100ae2aae*/
    return (unsigned int)a4; /*0x100ae2aae*/
  }
  v7 = v12; /*0x100ae2a32*/
  v10 = v12; /*0x100ae2a40*/
  v11 = v13; /*0x100ae2a47*/
  v12 = 0; /*0x100ae2a4e*/
  v13 = 0; /*0x100ae2a59*/
  v14 = v10; /*0x100ae2a64*/
  v15 = v11; /*0x100ae2a68*/
  serde_json::de::from_trait::h51e180b4bb6af5e0(v16, &v10); /*0x100ae2a77*/
  if ( LOBYTE(v16[0]) == 6 ) /*0x100ae2a80*/
  {
    core::ptr::drop_in_place$LT$core..result..Result$LT$serde_json..value..Value$C$serde_json..error..Error$GT$$GT$::h6e2339d6452312e0(v16); /*0x100ae2a86*/
    if ( v6 ) /*0x100ae2a8e*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v6, 1); /*0x100ae2a9b*/
    goto LABEL_7; /*0x100ae2aa0*/
  }
  v13 = v16[3]; /*0x100ae2ac8*/
  v12 = v16[2]; /*0x100ae2ad3*/
  v11 = v16[1]; /*0x100ae2ae2*/
  v10 = v16[0]; /*0x100ae2ae9*/
  v9 = serde_json::value::Value::pointer::hda2ad138ba9a0c27(&v10, "/payload/idfirstrouter_model_restore.json", 11); /*0x100ae2b03*/
  if ( v9 && *(_BYTE *)v9 == 3 && *(_QWORD *)(v9 + 24) == a4 ) /*0x100ae2b16*/
    LOBYTE(a4) = memcmp(*(const void **)(v9 + 16), a3, a4) == 0; /*0x100ae2b29*/
  else
    LODWORD(a4) = 0; /*0x100ae2b2f*/
  core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::ha4e28df99e528884(&v10); /*0x100ae2b39*/
  if ( v6 ) /*0x100ae2b41*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v6, 1); /*0x100ae2b52*/
  return (unsigned int)a4; /*0x100ae2ab4*/
}