// codexmate_lib::core::relay::codex_catalog::remove_catalog::hcf6d074d01d400b7
addr: 0x100682470
role: joins <codex-config-dir>/codex_router_catalog.json, checks fs::metadata, deletes the file via std::fs::remove_file if present (idempotent no-op if absent)
terminated_reason: persistence_commit (all callees are std::fs/std::path terminal calls)
0-truncation full decompile
// --- refs ---
// ref: 0x1010a9480 __ZN3std4path4Path5_join17hb1a495d4f06b13b8E
// ref: 0x1012d1096 _anon.5d4536734f60d7d1ae09e451c2f7649c.757 codex_router_catalog.jsoncodexmate_lib::core::relay::codex_catalog
// ref: 0x1010a1400 __ZN3std3sys2fs8metadata17h32fa16d3052ea535E
// ref: 0x10069fd50 __ZN4core3ptr90drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$17h13fa4dfbca1c9605E_1
// ref: 0x10109ffd0 __ZN3std3sys2fs11remove_file17hd3c2fb9b7e0710acE
// ref: 0x100001440 __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
// --- decompiled pseudocode (反编译器 Hex-Rays, x86_64 slice) ---

__int64 __fastcall codexmate_lib::core::relay::codex_catalog::remove_catalog::hcf6d074d01d400b7(__int64 a1)
{
  void *v1; // rbx
  size_t v2; // r14
  __int64 v3; // r15
  __int64 v4; // r14
  __int64 v5; // rsi
  _QWORD v7[19]; // [rsp+8h] [rbp-C8h] BYREF
  __int64 v8; // [rsp+A0h] [rbp-30h] BYREF
  void *__src; // [rsp+A8h] [rbp-28h]
  size_t __n; // [rsp+B0h] [rbp-20h]

  std::path::Path::_join::hb1a495d4f06b13b8( /*0x10068249f*/
    &v8,
    *(_QWORD *)(a1 + 584),
    *(_QWORD *)(a1 + 592),
    "codex_router_catalog.jsoncodexmate_lib::core::relay::codex_catalog",
    25);
  v1 = __src; /*0x1006824a4*/
  v2 = __n; /*0x1006824a8*/
  std::sys::fs::metadata::h32fa16d3052ea535(v7, __src, __n); /*0x1006824b9*/
  v3 = v7[0]; /*0x1006824be*/
  core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h13fa4dfbca1c9605( /*0x1006824cf*/
    v7[0],
    v7[1]);
  if ( !v3 ) /*0x1006824d7*/
  {
    v4 = std::sys::fs::remove_file::hd3c2fb9b7e0710ac(v1, v2); /*0x10068250e*/
    v5 = v8; /*0x100682511*/
    if ( !v8 ) /*0x100682518*/
      return v4; /*0x100682518*/
    goto LABEL_3; /*0x100682518*/
  }
  v4 = 0; /*0x1006824d9*/
  v5 = v8; /*0x1006824dc*/
  if ( v8 ) /*0x1006824e3*/
LABEL_3:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v1, v5, 1); /*0x1006824e5*/
  return v4; /*0x1006824f5*/
}
