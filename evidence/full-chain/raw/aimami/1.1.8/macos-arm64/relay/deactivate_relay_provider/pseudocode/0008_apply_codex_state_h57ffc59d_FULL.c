// codexmate_lib::core::relay::codex_writer::apply_codex_state::h57ffc59d60ac1cd7
addr: 0x10067a290
role: THE Codex CLI config.toml writer. Reads current config.toml (std::fs::read_to_string), calls compose_from_original to build the new content (managed-block replace, preserving foreign/user sections), verifies read-compose-verify loop up to 3 attempts to detect concurrent external writers (memcmp against a second independent read before committing), commits via atomic_write::write_atomic (0x10039e600, ALREADY FULLY LEAFED shared callee). On 3 consecutive unstable reads returns CoreError with literal string 'write codex config.toml failed: file kept changing during sync (another writer active)'
0-truncation full decompile
// --- refs ---
// ref: 0x1004d5860 __ZN13codexmate_lib8platform5paths10CodexPaths18ensure_directories17h65b32115a90fc557E
// ref: 0x1010a1400 __ZN3std3sys2fs8metadata17h32fa16d3052ea535E
// ref: 0x10069fd50 __ZN4core3ptr90drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$17h13fa4dfbca1c9605E_1
// ref: 0x10109b0f0 __ZN3std2fs14read_to_string5inner17hcce2334f4117b5b3E
// ref: 0x10067a850 __ZN13codexmate_lib4core5relay12codex_writer21compose_from_original17he2fc9bc2ee1d2b5bE
// ref: 0x1011309fc _memcmp
// ref: 0x1010dd4c0 __ZN4core3fmt3num3imp52_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$3fmt17h0a1a131519661e4dE
// ref: 0x1012d0d9e aWriteCodexConf write codex config.toml failed: file kept changing during sync (another writer active)codexmate_lib::core::relay::codex_writer
// ref: 0x10122d576 unk_10122D576
// ref: 0x10122d5c3 aSrcCoreRelayCo_0 src/core/relay/codex_writer.rs
// ref: 0x100ef1800 __ZN61_$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$3log17h3cdc1ad4dece8a2dE
// ref: 0x1015b7600 __ZN3log20MAX_LOG_LEVEL_FILTER17hd46d17d60ca2fba8E
// ref: 0x100001440 __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
// ref: 0x100001470 __RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2
// ref: 0x100001430 __RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc
// ref: 0x10112fd51 __ZN5alloc7raw_vec12handle_error17h81a7e8c5d8a11b4fE
// ref: 0x101130a02 _memcpy
// ref: 0x10039e600 __ZN13codexmate_lib4core5relay12atomic_write12write_atomic17h7c1a4e98b44038afE
// ref: 0x1010caaa0 __ZN60_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$3fmt17h602465de5bc79da0E
// ref: 0x1010d9a50 __ZN5alloc3fmt6format12format_inner17h3c16c74008a310d4E
// ref: 0x10122d5e2 unk_10122D5E2
// --- decompiled pseudocode (反编译器 Hex-Rays, x86_64 slice) ---

_QWORD *__fastcall codexmate_lib::core::relay::codex_writer::apply_codex_state::h57ffc59d60ac1cd7(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        double a4)
{
  _QWORD *v5; // r15
  _UNKNOWN **v6; // rax
  int v8; // r14d
  _QWORD **v9; // rbx
  size_t v10; // r15
  __int64 v11; // r15
  _QWORD *v12; // rax
  size_t v13; // rbx
  __int64 v14; // r12
  __int64 v15; // r13
  _QWORD *v16; // r15
  __int64 v17; // rdi
  _QWORD *v18; // rbx
  void *v19; // rax
  void *v20; // rbx
  _QWORD *v21; // rax
  _QWORD *v22; // rax
  _QWORD *v23; // rbx
  __int64 v24; // rax
  __int64 v25; // rbx
  __int64 v26; // r12
  __int64 v27; // r13
  __int64 v28; // rsi
  _QWORD *v29; // rdx
  __int64 *v30; // rax
  _QWORD *v31; // rsi
  _QWORD *v32; // [rsp+0h] [rbp-130h] BYREF
  void *v33; // [rsp+8h] [rbp-128h]
  __int64 v34; // [rsp+10h] [rbp-120h]
  __int64 v35; // [rsp+18h] [rbp-118h]
  const char *v36; // [rsp+20h] [rbp-110h]
  __int64 v37; // [rsp+28h] [rbp-108h]
  __int64 v38; // [rsp+30h] [rbp-100h]
  char *v39; // [rsp+38h] [rbp-F8h]
  __int64 v40; // [rsp+40h] [rbp-F0h]
  __int64 v41; // [rsp+48h] [rbp-E8h]
  void *v42; // [rsp+50h] [rbp-E0h]
  __int64 **v43; // [rsp+58h] [rbp-D8h]
  __int64 v44; // [rsp+98h] [rbp-98h] BYREF
  void *__s1; // [rsp+A0h] [rbp-90h]
  __int64 v46; // [rsp+A8h] [rbp-88h]
  __int64 *v47; // [rsp+B0h] [rbp-80h] BYREF
  __int64 (__fastcall *v48)(); // [rsp+B8h] [rbp-78h]
  __int64 v49; // [rsp+C0h] [rbp-70h]
  _QWORD **v50; // [rsp+C8h] [rbp-68h]
  size_t v51; // [rsp+D0h] [rbp-60h]
  void *__s2; // [rsp+D8h] [rbp-58h]
  __int64 v53; // [rsp+E0h] [rbp-50h] BYREF
  _QWORD *v54; // [rsp+E8h] [rbp-48h]
  char v55; // [rsp+F7h] [rbp-39h] BYREF
  _QWORD *v56; // [rsp+F8h] [rbp-38h]
  _QWORD *v57; // [rsp+100h] [rbp-30h]

  v5 = a1; /*0x10067a2aa*/
  v6 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h65b32115a90fc557((_BYTE **)a2); /*0x10067a2b0*/
  if ( v6 ) /*0x10067a2b8*/
  {
    *a1 = 2; /*0x10067a2ba*/
    a1[1] = v6; /*0x10067a2c1*/
    return v5; /*0x10067a2c1*/
  }
  v50 = *(_QWORD ***)(a2 + 56); /*0x10067a2de*/
  v51 = *(_QWORD *)(a2 + 64); /*0x10067a2e6*/
  v8 = 1; /*0x10067a2ea*/
  v57 = a1; /*0x10067a2f7*/
  while ( 1 )
  {
    v9 = v50; /*0x10067a317*/
    v10 = v51; /*0x10067a31e*/
    std::sys::fs::metadata::h32fa16d3052ea535(&v32, v50, v51); /*0x10067a325*/
    if ( (_DWORD)v32 == 1 ) /*0x10067a338*/
    {
      v11 = 1; /*0x10067a33a*/
      core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h13fa4dfbca1c9605( /*0x10067a345*/
        1,
        v33);
      v12 = nullptr; /*0x10067a34a*/
      v13 = 0; /*0x10067a34c*/
    }
    else
    {
      core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h13fa4dfbca1c9605( /*0x10067a352*/
        0,
        v33);
      std::fs::read_to_string::inner::hcce2334f4117b5b3(&v32, v9, v10); /*0x10067a360*/
      v12 = v32; /*0x10067a365*/
      v11 = (__int64)v33; /*0x10067a36c*/
      if ( v32 == (_QWORD *)0x8000000000000000LL ) /*0x10067a380*/
      {
        v21 = v57; /*0x10067a5fd*/
        *v57 = 2; /*0x10067a601*/
        v21[1] = v11; /*0x10067a608*/
        return v21; /*0x10067a60f*/
      }
      v13 = v34; /*0x10067a386*/
    }
    v56 = v12; /*0x10067a38d*/
    v14 = a3; /*0x10067a39e*/
    __s2 = (void *)v11; /*0x10067a3a4*/
    codexmate_lib::core::relay::codex_writer::compose_from_original::he2fc9bc2ee1d2b5b(&v44, v11, v13, a3); /*0x10067a3a8*/
    v15 = v46; /*0x10067a3ad*/
    if ( v46 == v13 && !memcmp(__s1, (const void *)v11, v13) ) /*0x10067a3cd*/
    {
      *v57 = 10; /*0x10067a618*/
LABEL_31:
      v23 = v56; /*0x10067a630*/
      goto LABEL_41; /*0x10067a634*/
    }
    std::sys::fs::metadata::h32fa16d3052ea535(&v32, v50, v51); /*0x10067a3e2*/
    v16 = v32; /*0x10067a3e7*/
    core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h13fa4dfbca1c9605( /*0x10067a3f8*/
      v32,
      v33);
    if ( v16 ) /*0x10067a400*/
      break; /*0x10067a400*/
    std::fs::read_to_string::inner::hcce2334f4117b5b3(&v32, v50, v51); /*0x10067a42f*/
    v17 = (__int64)v33; /*0x10067a43b*/
    if ( v32 == (_QWORD *)0x8000000000000000LL ) /*0x10067a44f*/
    {
      v22 = v57; /*0x10067a621*/
      *v57 = 2; /*0x10067a625*/
      v22[1] = v17; /*0x10067a62c*/
      goto LABEL_31; /*0x10067a62c*/
    }
    v54 = v32; /*0x10067a455*/
    if ( v34 == v13 ) /*0x10067a463*/
      goto LABEL_17; /*0x10067a463*/
LABEL_18:
    v18 = v56; /*0x10067a47f*/
    a3 = v14; /*0x10067a491*/
    if ( log::MAX_LOG_LEVEL_FILTER::hd46d17d60ca2fba8 > 1u ) /*0x10067a494*/
    {
      LODWORD(v53) = v8; /*0x10067a49d*/
      v47 = &v53; /*0x10067a4a5*/
      v48 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$i32$GT$::fmt::h0a1a131519661e4d; /*0x10067a4b0*/
      v38 = 2; /*0x10067a4b4*/
      v39 = "codexmate_lib::core::relay::codex_writer"; /*0x10067a4c6*/
      v40 = 40; /*0x10067a4cd*/
      v42 = &unk_10122D576; /*0x10067a4df*/
      v43 = &v47; /*0x10067a4ea*/
      v32 = nullptr; /*0x10067a4f1*/
      v33 = "codexmate_lib::core::relay::codex_writer"; /*0x10067a4fc*/
      v34 = 40; /*0x10067a503*/
      v35 = 0; /*0x10067a50e*/
      v36 = "src/core/relay/codex_writer.rs"; /*0x10067a520*/
      v37 = 30; /*0x10067a527*/
      v41 = 0x9200000001LL; /*0x10067a53c*/
      _$LT$log..__private_api..GlobalLogger$u20$as$u20$log..Log$GT$::log::h3cdc1ad4dece8a2d(&v55, &v32); /*0x10067a54e*/
    }
    if ( v54 ) /*0x10067a55d*/
      a4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v54, 1); /*0x10067a564*/
    if ( v44 ) /*0x10067a573*/
      a4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v44, 1); /*0x10067a581*/
    v5 = v57; /*0x10067a58d*/
    if ( v18 ) /*0x10067a591*/
      a4 = _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v18, 1); /*0x10067a59f*/
    if ( ++v8 == 4 )
    {
      _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(&v32); /*0x10067a5a9*/
      v19 = (void *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(86, 1); /*0x10067a5b8*/
      if ( !v19 ) /*0x10067a5c0*/
        alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 86); /*0x10067a79a*/
      v20 = v19; /*0x10067a5c6*/
      memcpy(
        v19,
        "write codex config.toml failed: file kept changing during sync (another writer active)codexmate_lib::core::relay::codex_writer",
        0x56u);
      *v5 = 9; /*0x10067a5dd*/
      v5[1] = 86; /*0x10067a5e4*/
      v5[2] = v20; /*0x10067a5ec*/
      v5[3] = 86; /*0x10067a5f0*/
      return v5; /*0x10067a5f8*/
    }
  }
  v17 = 1; /*0x10067a402*/
  v54 = nullptr; /*0x10067a407*/
  if ( v13 ) /*0x10067a414*/
    goto LABEL_18; /*0x10067a414*/
LABEL_17:
  if ( memcmp((const void *)v17, __s2, v13) ) /*0x10067a46f*/
    goto LABEL_18; /*0x10067a479*/
  v24 = codexmate_lib::core::relay::atomic_write::write_atomic::h7c1a4e98b44038af(v50, v51, (__int64)__s1, v15, a4); /*0x10067a64b*/
  v23 = v56; /*0x10067a653*/
  if ( v24 ) /*0x10067a657*/
  {
    v53 = v24; /*0x10067a65d*/
    v47 = &v53; /*0x10067a665*/
    v48 = (__int64 (__fastcall *)())_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x10067a670*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v32, &unk_10122D5E2, &v47); /*0x10067a686*/
    v47 = v32; /*0x10067a699*/
    v48 = (__int64 (__fastcall *)())v33; /*0x10067a69d*/
    v49 = v34; /*0x10067a6a8*/
    if ( (v53 & 3) == 1 ) /*0x10067a6b8*/
    {
      v25 = v53 - 1; /*0x10067a6ba*/
      v26 = *(_QWORD *)(v53 - 1); /*0x10067a6be*/
      v27 = *(_QWORD *)(v53 + 7); /*0x10067a6c2*/
      if ( *(_QWORD *)v27 ) /*0x10067a6c6*/
        (*(void (__fastcall **)(__int64))v27)(v26); /*0x10067a6d2*/
      v28 = *(_QWORD *)(v27 + 8); /*0x10067a6d4*/
      if ( v28 ) /*0x10067a6db*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v26, v28, *(_QWORD *)(v27 + 16)); /*0x10067a6e4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v25, 24, 8); /*0x10067a6f6*/
      v23 = v56; /*0x10067a6fb*/
    }
    v29 = v57; /*0x10067a703*/
    v57[3] = v49; /*0x10067a707*/
    v30 = v47; /*0x10067a70b*/
    v29[2] = v48; /*0x10067a713*/
    v29[1] = v30; /*0x10067a717*/
    *v29 = 9; /*0x10067a720*/
    v31 = v54; /*0x10067a723*/
    if ( v54 ) /*0x10067a72a*/
LABEL_40:
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v17, v31, 1); /*0x10067a72c*/
  }
  else
  {
    *v57 = 10; /*0x10067a782*/
    v31 = v54; /*0x10067a785*/
    if ( v54 ) /*0x10067a78c*/
      goto LABEL_40; /*0x10067a78c*/
  }
LABEL_41:
  if ( v44 ) /*0x10067a743*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s1, v44, 1); /*0x10067a751*/
  v5 = v57; /*0x10067a75d*/
  if ( v23 ) /*0x10067a761*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(__s2, v23, 1); /*0x10067a76f*/
  return v5; /*0x10067a2c8*/
}
