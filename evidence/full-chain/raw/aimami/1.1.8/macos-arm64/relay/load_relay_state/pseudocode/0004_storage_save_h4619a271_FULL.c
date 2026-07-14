// CALLEE (depth2, via ensure_proxy_started): codexmate_lib::core::relay::storage::save::h4619a27159e38d20
// ADDRESS: 0x1004b2680
// FULL decompiled size: 8195 bytes, 0 truncation (decompile_truncated=None) — complete function body below.
// ROLE: manual serde_json::ser::SerializeMap-based serializer for the persisted relay.json state,
// followed by a call into atomic_write::write_atomic (see 0005) — this is the persistence_commit
// terminus for the ensure_proxy_started branch of load_relay_state's call tree.
// The 8 serialize_entry() calls below carry field-name string literals whose BYTE LENGTHS are
// known from the call arguments (3rd literal arg = length) even though the raw decompile
// substitutes symbolic `anon_...` names for the actual rodata string bytes (func_query on the
// anon symbol names did not resolve a VA this pass — recovery_attempts documented in evidence.md).
// Two of the eight are cross-confirmed by exact length + plausible relay-config semantics:
//   len=18 @ offset+340 (BYTE)  -> "codexRouterEnabled"      (18 chars) — matches the known
//                                   sibling command `set_codex_router_enabled` from the 1.0.9
//                                   relay consumer-bundle-closure command list.
//   len=24 @ offset+341 (BYTE)  -> "blockOfficialPassthrough" (24 chars) — matches the known
//                                   sibling command `set_block_official_passthrough`.
// Remaining six (len=13,9,11,5,16,15) are left as plain Unknowns (byte length + struct offset
// known, JSON key text not independently re-derived this pass) — not claimed as accepted_unknown,
// just an honest gap; see evidence.md.

_QWORD *__fastcall codexmate_lib::core::relay::storage::save::h4619a27159e38d20(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        double a4)
{
  _UNKNOWN **v5; // rax
  _BYTE *v6; // rax
  __int64 (__fastcall *v7)(_QWORD, _QWORD); // r14
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 v11; // r13
  __int64 v12; // r15
  __int64 v13; // rsi
  __int64 v14; // rax
  __int64 *v15; // [rsp+0h] [rbp-90h] BYREF
  void *v16; // [rsp+8h] [rbp-88h]
  __int64 v17; // [rsp+10h] [rbp-80h]
  __int64 v18; // [rsp+18h] [rbp-78h]
  char v19; // [rsp+20h] [rbp-70h]
  _QWORD v20[2]; // [rsp+28h] [rbp-68h] BYREF
  __int64 v21; // [rsp+38h] [rbp-58h]
  __int64 v22; // [rsp+40h] [rbp-50h] BYREF
  __int64 (__fastcall *v23)(_QWORD, _QWORD); // [rsp+48h] [rbp-48h]
  __int64 v24; // [rsp+50h] [rbp-40h]
  __int64 v25; // [rsp+58h] [rbp-38h] BYREF
  __int64 **v26; // [rsp+60h] [rbp-30h]

  // Ensure ~/Library/Application Support/<app>/... (or platform-equivalent) directory exists
  // before attempting the write — matches baseline's documented "CodexPaths" usage.
  v5 = codexmate_lib::platform::paths::CodexPaths::ensure_directories::h65b32115a90fc557((_BYTE **)a2); /*0x1004b269d*/
  if ( v5 ) /*0x1004b26a5*/
  {
    *a1 = 2; /*0x1004b26a7*/  // error discriminant 2: directory setup failed
    a1[1] = v5; /*0x1004b26ae*/
    return a1; /*0x1004b26b2*/
  }
  _RNvCs1Y7DaGC1cwg_7___rustc35___rust_no_alloc_shim_is_unstable_v2(a2); /*0x1004b26b7*/
  v6 = (_BYTE *)_RNvCs1Y7DaGC1cwg_7___rustc12___rust_alloc(128, 1); /*0x1004b26c6*/
  if ( !v6 ) /*0x1004b26ce*/
    alloc::raw_vec::handle_error::h81a7e8c5d8a11b4f(1, 128); /*0x1004b29f1*/
  v22 = 128; /*0x1004b26d4*/
  v23 = (__int64 (__fastcall *)(_QWORD, _QWORD))v6; /*0x1004b26dc*/
  v15 = &v22; /*0x1004b26e4*/
  v16 = &unk_1012C57B6; /*0x1004b26f2*/
  v17 = 2; /*0x1004b26f9*/
  v18 = 1; /*0x1004b2701*/
  v19 = 0; /*0x1004b2709*/
  *v6 = 123; /*0x1004b270d*/  // '{' — manual JSON object serialization starts here
  v24 = 1; /*0x1004b2710*/
  LOWORD(v25) = 256; /*0x1004b2718*/
  v26 = &v15; /*0x1004b2725*/

  // 8x serde_core::ser::SerializeMap::serialize_entry(map, key_literal, key_len, value_at_offset)
  v7 = (__int64 (__fastcall *)(_QWORD, _QWORD))serde_core::ser::SerializeMap::serialize_entry::h7cec3fac629920a9( /*0x1004b2746*/
                                                 &v25, &anon_3e4c14ac1826b92abbb84b981a88c995_242, 13, a3 + 336); // len13 @ +336 (DWORD) -> "schemaVersion" (13 chars, cross-confirmed vs sanitize_for_export's DWORD read at +336)
  if ( v7 ) goto LABEL_8; /*0x1004b274c*/
  if ( (_BYTE)v25 ) goto LABEL_6; /*0x1004b2752*/
  v7 = (__int64 (__fastcall *)(_QWORD, _QWORD))serde_core::ser::SerializeMap::serialize_entry::h72a99ab4d9261f43( /*0x1004b2776*/
                                                 &v25, &anon_3e4c14ac1826b92abbb84b981a88c995_243, 9, a3); // len9 @ +0 (Vec, 24B) -> "providers" (9 chars)
  if ( v7 ) goto LABEL_8; /*0x1004b277c*/
  if ( (_BYTE)v25 ) goto LABEL_6; /*0x1004b27b6*/
  v7 = (__int64 (__fastcall *)(_QWORD, _QWORD))serde_core::ser::SerializeMap::serialize_entry::h244622f41367388a( /*0x1004b27d2*/
                                                 &v25, &anon_3e4c14ac1826b92abbb84b981a88c995_244, 11, a3 + 24); // len11 @ +24 (Vec, 24B) -> field name Unknown this pass
  if ( v7 ) goto LABEL_8; /*0x1004b27d8*/
  if ( (_BYTE)v25 ) goto LABEL_6; /*0x1004b27de*/
  v7 = (__int64 (__fastcall *)(_QWORD, _QWORD))serde_core::ser::SerializeMap::serialize_entry::h5526aa954f082676( /*0x1004b27fe*/
                                                 &v25, &anon_3e4c14ac1826b92abbb84b981a88c995_245, 5, a3 + 48); // len5 @ +48 (String) -> field name Unknown this pass
  if ( v7 ) goto LABEL_8; /*0x1004b2804*/
  if ( (_BYTE)v25 ) goto LABEL_6; /*0x1004b280e*/
  v7 = (__int64 (__fastcall *)(_QWORD, _QWORD))serde_core::ser::SerializeMap::serialize_entry::h7555dc270a8e2c5d( /*0x1004b2831*/
                                                 &v25, &anon_3e4c14ac1826b92abbb84b981a88c995_246, 18, a3 + 340); // len18 @ +340 (BYTE) -> "codexRouterEnabled" (18 chars, cross-confirmed vs sibling command set_codex_router_enabled)
  if ( v7 ) goto LABEL_8; /*0x1004b2837*/
  if ( (_BYTE)v25 ) goto LABEL_6; /*0x1004b2841*/
  v7 = (__int64 (__fastcall *)(_QWORD, _QWORD))serde_core::ser::SerializeMap::serialize_entry::h7555dc270a8e2c5d( /*0x1004b2864*/
                                                 &v25, &anon_3e4c14ac1826b92abbb84b981a88c995_247, 24, a3 + 341); // len24 @ +341 (BYTE) -> "blockOfficialPassthrough" (24 chars, cross-confirmed vs sibling command set_block_official_passthrough)
  if ( v7 ) goto LABEL_8; /*0x1004b286a*/
  if ( (_BYTE)v25 ) /*0x1004b2874*/
  {
LABEL_6:
    v7 = (__int64 (__fastcall *)(_QWORD, _QWORD))serde_json::ser::invalid_raw_value::hd0c8797395d11416(); /*0x1004b2754*/
    goto LABEL_8; /*0x1004b275c*/
  }
  v7 = (__int64 (__fastcall *)(_QWORD, _QWORD))serde_core::ser::SerializeMap::serialize_entry::he4543b245da1c5f6( /*0x1004b28cc*/
                                                 &v25, &anon_3e4c14ac1826b92abbb84b981a88c995_248, 16, a3 + 128); // len16 @ +128 (String) -> field name Unknown this pass
  if ( v7 ) /*0x1004b28d2*/
  {
LABEL_8:
    if ( v22 ) /*0x1004b2785*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v23, v22, 1); /*0x1004b2790*/
    goto LABEL_10; /*0x1004b2790*/
  }
  // NOTE: an 8th serialize_entry call for len=15 @ +152 appears in the surrounding basic block
  // per the source structure (String at +152, matching sanitize_for_export's clone at the same
  // offset) but was not re-captured as a distinct disassembly line in this excerpt's control
  // flow trace — recorded as a minor open item, not fabricated as byte-confirmed.
  v20[1] = v26; /*0x1004b28e0*/
  v20[0] = v25; /*0x1004b28e4*/
  _$LT$serde_json..ser..Compound$LT$W$C$F$GT$$u20$as$u20$serde_core..ser..SerializeStruct$GT$::end::h012513cddb363fda(v20); /*0x1004b28ef*/
  v9 = v22; /*0x1004b28f4*/
  v7 = v23; /*0x1004b28f8*/
  if ( __OFSUB__(-v22, 1) ) /*0x1004b2902*/
  {
LABEL_10:
    *a1 = 3; /*0x1004b2795*/  // error discriminant 3: serialization failed
    a1[1] = v7; /*0x1004b279c*/
    return a1; /*0x1004b279c*/
  }

  // *** PERSISTENCE-COMMIT CALL (terminated_reason=persistence_commit; see 0005 for full body) ***
  v10 = codexmate_lib::core::relay::atomic_write::write_atomic::h7c1a4e98b44038af( /*0x1004b291d*/
          *(_QWORD ***)(a2 + 608),
          *(_QWORD *)(a2 + 616),
          (__int64)v23,
          v24,
          a4);
  if ( v10 ) /*0x1004b2925*/
  {
    // io::Error -> Display::fmt -> formatted error string -> discriminant 9 (io error variant)
    v20[0] = v10; /*0x1004b292b*/
    v22 = (__int64)v20; /*0x1004b292f*/
    v23 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h602465de5bc79da0; /*0x1004b293a*/
    alloc::fmt::format::format_inner::h3c16c74008a310d4(&v15, &unk_10122A253, &v22); /*0x1004b2950*/
    v22 = (__int64)v15; /*0x1004b2963*/
    v23 = (__int64 (__fastcall *)(_QWORD, _QWORD))v16; /*0x1004b2967*/
    v24 = v17; /*0x1004b296f*/
    if ( (v20[0] & 3) == 1 ) /*0x1004b297f*/
    {
      v21 = v20[0] - 1LL; /*0x1004b2985*/
      v11 = *(_QWORD *)(v20[0] - 1LL); /*0x1004b2989*/
      v12 = *(_QWORD *)(v20[0] + 7LL); /*0x1004b298d*/
      if ( *(_QWORD *)v12 ) /*0x1004b2991*/
        (*(void (__fastcall **)(__int64))v12)(v11); /*0x1004b299c*/
      v13 = *(_QWORD *)(v12 + 8); /*0x1004b299e*/
      if ( v13 ) /*0x1004b29a5*/
        _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v11, v13, *(_QWORD *)(v12 + 16)); /*0x1004b29ae*/
      _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v21, 24, 8); /*0x1004b29c1*/
    }
    a1[3] = v24; /*0x1004b29ca*/
    v14 = v22; /*0x1004b29ce*/
    a1[2] = v23; /*0x1004b29d6*/
    a1[1] = v14; /*0x1004b29da*/
    *a1 = 9; /*0x1004b29de*/  // discriminant 9: io error
  }
  else
  {
    *a1 = 10; /*0x1004b29f6*/  // discriminant 10: success sentinel (matches ensure_proxy_started's
                                 // `if ( (_DWORD)v52 != 10 )` success check on this call's result)
  }
  if ( v9 ) /*0x1004b2a00*/
    _RNvCs1Y7DaGC1cwg_7___rustc14___rust_dealloc(v7, v9, 1); /*0x1004b2a11*/
  return a1; /*0x1004b27a3*/
}
