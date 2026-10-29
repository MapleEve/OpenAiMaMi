// source: AiMaMi 1.2.7 macos-arm64 release (x86_64 slice); sha256 f019dbc8e267891d05d35030c38aafe750b846b872a39940c16b67bc203874d0
// func: codexmate_lib::core::relay::codex_thread_visibility::rollout_path_identity::he1f7154c6962ee2f; addr: 0x10047ff00; session: <审计会话>; pass: 2-by-name; decompiled_at: 2026-10-26T05:08:28Z
unsigned __int64 *__fastcall codexmate_lib::core::relay::codex_thread_visibility::rollout_path_identity::he1f7154c6962ee2f(
        unsigned __int64 *a1,
        unsigned __int64 a2,
        unsigned __int64 a3)
{
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // r12
  __int64 v12; // r13
  __int64 v13; // rbx
  __int64 v14; // rsi
  unsigned __int64 v15; // [rsp+8h] [rbp-D8h] BYREF
  unsigned __int64 v16; // [rsp+10h] [rbp-D0h]
  unsigned __int64 v17; // [rsp+18h] [rbp-C8h]
  unsigned __int64 v18; // [rsp+B0h] [rbp-30h]

  codexmate_lib::core::relay::codex_thread_visibility::rollout_history::resolve::h705afcdb05904caf(&v15); /*0x10047ff2e*/
  v6 = v15; /*0x10047ff33*/
  if ( v15 == 0x8000000000000001LL ) /*0x10047ff48*/
  {
    core::ptr::drop_in_place$LT$core..result..Result$LT$core..option..Option$LT$$LP$std..path..PathBuf$C$std..fs..Metadata$RP$$GT$$C$std..io..error..Error$GT$$GT$::h1eb76f2bd660dbd2( /*0x10047ff4a*/
      0x8000000000000001LL,
      v16);
LABEL_4:
    v6 = 0x8000000000000000LL; /*0x10047ff5a*/
    goto LABEL_6; /*0x10047ff5d*/
  }
  v18 = v16; /*0x10047ff51*/
  if ( v15 == 0x8000000000000000LL ) /*0x10047ff58*/
    goto LABEL_4; /*0x10047ff58*/
  a3 = v17; /*0x10047ff5f*/
  a2 = v18; /*0x10047ff66*/
LABEL_6:
  std::sys::fs::canonicalize::h06efd38dcb2724a4(&v15, a2, a3); /*0x10047ff6a*/
  if ( v15 != 0x8000000000000000LL ) /*0x10047ff83*/
  {
    a1[2] = v17; /*0x10047ffd1*/
    v10 = v15; /*0x10047ffd5*/
    a1[1] = v16; /*0x10047ffe3*/
    *a1 = v10; /*0x10047ffe7*/
    goto LABEL_11; /*0x10047ffe7*/
  }
  v7 = v16; /*0x10047ff85*/
  std::path::Path::to_path_buf::h73855ce4b54f7174(a1, a2); /*0x10047ff95*/
  v8 = v18; /*0x10047ffa2*/
  if ( (v7 & 3) == 1 ) /*0x10047ffa6*/
  {
    v11 = v7 - 1; /*0x10048000a*/
    v12 = *(_QWORD *)(v7 - 1); /*0x10048000e*/
    v13 = *(_QWORD *)(v7 + 7); /*0x100480012*/
    if ( *(_QWORD *)v13 ) /*0x100480016*/
      (*(void (__fastcall **)(__int64))v13)(v12); /*0x100480021*/
    v14 = *(_QWORD *)(v13 + 8); /*0x100480023*/
    if ( v14 ) /*0x10048002a*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v12, v14, *(_QWORD *)(v13 + 16)); /*0x100480033*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, 24, 8); /*0x100480045*/
LABEL_11:
    v8 = v18; /*0x10047ffea*/
    if ( !(2 * v6) ) /*0x10047fff9*/
      return a1; /*0x10047fff9*/
LABEL_12:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v8, v6, 1); /*0x10047fffb*/
    return a1; /*0x100480008*/
  }
  if ( 2 * v6 ) /*0x10047ffa8*/
    goto LABEL_12; /*0x10047ffb3*/
  return a1; /*0x10047ffb8*/
}
