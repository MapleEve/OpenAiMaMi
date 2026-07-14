// codexmate_lib::core::relay::codex_catalog::write_catalog::hd6fdf4aec3d5e977
addr: 0x100682170
role: builds JSON bytes via build_catalog_bytes and atomically writes <codex-config-dir>/codex_router_catalog.json via atomic_write::write_atomic (0x10039e600, ALREADY FULLY LEAFED shared callee, see load_relay_state pseudocode/0005)
0-truncation full decompile
// --- refs ---
// ref: 0x1004d5860 __ZN13codexmate_lib8platform5paths10CodexPaths18ensure_directories17h65b32115a90fc557E
// ref: 0x100682890 __ZN13codexmate_lib4core5relay13codex_catalog19build_catalog_bytes17he559a9246ce3d4f3E
// ref: 0x1010a9480 __ZN3std4path4Path5_join17hb1a495d4f06b13b8E
// ref: 0x1012d1096 _anon.5d4536734f60d7d1ae09e451c2f7649c.757 codex_router_catalog.jsoncodexmate_lib::core::relay::codex_catalog
// ref: 0x10039e600 __ZN13codexmate_lib4core5relay12atomic_write12write_atomic17h7c1a4e98b44038afE
// ref: 0x100001440 __RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc
// ref: 0x1010caaa0 __ZN60_$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$3fmt17h602465de5bc79da0E
// ref: 0x1010d9a50 __ZN5alloc3fmt6format12format_inner17h3c16c74008a310d4E
// ref: 0x10122d84e unk_10122D84E
// --- decompiled pseudocode (反编译器 Hex-Rays, x86_64 slice) ---

_QWORD *__fastcall codexmate_lib::core::relay::codex_catalog::write_catalog::hd6fdf4aec3d5e977(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        __int64 a6,
        double a7,
        __int64 a8,
        char a9)
{
  _QWORD *v12; // r15
  _UNKNOWN **v13; // rax
  _QWORD *v14; // rax
  __int64 (__fastcall *v15)(_QWORD, _QWORD); // rbx
  __int64 v16; // r14
  __int64 v17; // r13
  _QWORD **v18; // r12
  __int64 v19; // rax
  __int64 v20; // r13
  __int64 v21; // r15
  __int64 v22; // rsi
  __int64 *v23; // rax
  __int64 v24; // rcx
  __int64 v25; // rax
  _QWORD *v27; // [rsp+10h] [rbp-D0h] BYREF
  __int64 (__fastcall *v28)(_QWORD, _QWORD); // [rsp+18h] [rbp-C8h]
  __int64 v29; // [rsp+20h] [rbp-C0h]
  __int64 v30; // [rsp+28h] [rbp-B8h]
  __int64 v31; // [rsp+30h] [rbp-B0h]
  __int64 v32; // [rsp+38h] [rbp-A8h]
  __int64 v33; // [rsp+40h] [rbp-A0h]
  __int64 v34; // [rsp+48h] [rbp-98h]
  __int64 v35; // [rsp+50h] [rbp-90h]
  __int64 v36; // [rsp+58h] [rbp-88h]
  __int64 v37; // [rsp+60h] [rbp-80h]
  __int64 v38; // [rsp+68h] [rbp-78h]
  __int64 v39; // [rsp+70h] [rbp-70h] BYREF
  _QWORD **v40; // [rsp+78h] [rbp-68h]
  size_t v41; // [rsp+80h] [rbp-60h]
  __int64 *v42; // [rsp+88h] [rbp-58h] BYREF
  __int64 (__fastcall *v43)(_QWORD, _QWORD); // [rsp+90h] [rbp-50h]
  __int64 v44; // [rsp+98h] [rbp-48h]
  __int64 v45; // [rsp+A0h] [rbp-40h] BYREF
  __int64 v46; // [rsp+A8h] [rbp-38h]
  _QWORD *v47; // [rsp+B0h] [rbp-30h]

  v46 = a6; /*0x100682184*/
  v12 = a1; /*0x100682194*/
  v13 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h65b32115a90fc557((_BYTE **)a2); /*0x10068219a*/
  if ( v13 ) /*0x1006821a2*/
  {
    *a1 = 2; /*0x1006821a4*/
    a1[1] = v13; /*0x1006821ab*/
    return v12; /*0x1006821af*/
  }
  v47 = a1; /*0x1006821b4*/
  codexmate_lib::core::relay::codex_catalog::build_catalog_bytes::he559a9246ce3d4f3( /*0x1006821df*/
    (unsigned int)&v27,
    a2,
    a3,
    a4,
    a5,
    v46,
    a8,
    a9);
  v14 = v27; /*0x1006821e4*/
  v15 = v28; /*0x1006821eb*/
  v16 = v29; /*0x1006821f2*/
  v17 = v30; /*0x1006821f9*/
  if ( v27 != (_QWORD *)10 ) /*0x100682204*/
  {
    v12 = v47; /*0x100682340*/
    v47[11] = v38; /*0x100682344*/
    v12[10] = v37; /*0x10068234c*/
    v12[9] = v36; /*0x100682357*/
    v12[8] = v35; /*0x100682362*/
    v12[7] = v34; /*0x10068236d*/
    v12[6] = v33; /*0x100682378*/
    v24 = v31; /*0x10068237c*/
    v12[5] = v32; /*0x10068238a*/
    v12[4] = v24; /*0x10068238e*/
    v12[1] = v15; /*0x100682392*/
    v12[2] = v16; /*0x100682396*/
    v12[3] = v17; /*0x10068239a*/
    *v12 = v14; /*0x10068239e*/
    return v12; /*0x1006823a1*/
  }
  std::path::Path::_join::hb1a495d4f06b13b8( /*0x10068222b*/
    &v39,
    *(_QWORD *)(a2 + 584),
    *(_QWORD *)(a2 + 592),
    "codex_router_catalog.jsoncodexmate_lib::core::relay::codex_catalog",
    25);
  v12 = v47; /*0x100682230*/
  v18 = v40; /*0x100682234*/
  v19 = codexmate_lib::core::relay::atomic_write::write_atomic::h7c1a4e98b44038af(v40, v41, v16, v17, a7); /*0x100682245*/
  if ( !v19 ) /*0x10068224d*/
  {
    v12[3] = v41; /*0x1006823a7*/
    v25 = v39; /*0x1006823ab*/
    v12[2] = v40; /*0x1006823b3*/
    v12[1] = v25; /*0x1006823b7*/
    *v12 = 10; /*0x1006823bb*/
    if ( !v15 ) /*0x1006823c5*/
      return v12; /*0x1006823c5*/
LABEL_17:
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v16, v15, 1); /*0x1006823c7*/
    return v12; /*0x1006823d2*/
  }
  v45 = v19; /*0x100682253*/
  v42 = &v45; /*0x10068225b*/
  v43 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x100682266*/
  alloc::fmt::format::format_inner::h3c16c74008a310d4(&v27, &unk_10122D84E, &v42); /*0x10068227c*/
  v42 = v27; /*0x10068228f*/
  v43 = v28; /*0x100682293*/
  v44 = v29; /*0x10068229e*/
  if ( (v45 & 3) == 1 ) /*0x1006822ae*/
  {
    v46 = v45 - 1; /*0x1006822b4*/
    v20 = *(_QWORD *)(v45 - 1); /*0x1006822b8*/
    v21 = *(_QWORD *)(v45 + 7); /*0x1006822bc*/
    if ( *(_QWORD *)v21 ) /*0x1006822c0*/
      (*(void (__fastcall **)(__int64))v21)(v20); /*0x1006822cb*/
    v22 = *(_QWORD *)(v21 + 8); /*0x1006822cd*/
    if ( v22 ) /*0x1006822d4*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v20, v22, *(_QWORD *)(v21 + 16)); /*0x1006822dd*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v46, 24, 8); /*0x1006822f0*/
    v12 = v47; /*0x1006822f5*/
  }
  v12[3] = v44; /*0x1006822fd*/
  v23 = v42; /*0x100682301*/
  v12[2] = v43; /*0x100682309*/
  v12[1] = v23; /*0x10068230d*/
  *v12 = 9; /*0x100682311*/
  if ( v39 ) /*0x10068231f*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v18, v39, 1); /*0x100682329*/
  if ( v15 ) /*0x100682331*/
    goto LABEL_17; /*0x100682331*/
  return v12; /*0x1006823da*/
}
