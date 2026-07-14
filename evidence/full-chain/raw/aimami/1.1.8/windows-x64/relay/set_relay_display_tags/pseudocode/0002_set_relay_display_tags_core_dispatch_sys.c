// set_relay_display_tags_core_dispatch_sys @ 0x140023c50 (AiMaMi 1.1.8, windows-x64)
// session: <审计会话> | machine: <本地机器> | model: claude-sonnet-5
// size=475 bytes (analyze_function) | basic_blocks=9 | cyclomatic_complexity=1
// 1 caller: set_relay_display_tags_owner_sys@0x1403ea210 (confirmed via xrefs_to) — DEDICATED,
// renamed this session.
// vs 1.1.1 baseline core dispatch (raw/aimami/1.1.1/windows-x64/set_relay_display_tags/owner.md:
// set_relay_display_tags_core_dispatch_sys@0x14021B780, ~408B): THIS build's core-dispatch layer
// is 475B (+~67B growth) — the extra bytes correspond to an explicit Display-trait
// error-formatting safety net (the generic rustc panic string "a Display implementation returned
// an error unexpectedly", same universal safety-net string documented elsewhere this session for
// get_relay_provider_quota / reveal_relay_api_key) that is not called out in the 1.1.1 doc's
// core-dispatch description — flagged as a genuine size/behavior delta candidate (Inferred, not
// independently re-diffed against a fresh 1.1.1 decompile this round).

__int64 __fastcall set_relay_display_tags_core_dispatch_sys(__int64 a1)
{
  __int64 v2; // rbx
  __int128 v3; // xmm0
  __int64 v5; // [rsp+30h] [rbp-50h] BYREF
  __int128 v6; // [rsp+38h] [rbp-48h] BYREF
  _OWORD v7[20]; // [rsp+48h] [rbp-38h] BYREF
  __int64 v8; // [rsp+188h] [rbp+108h] BYREF
  __int128 v9; // [rsp+190h] [rbp+110h]
  __int64 v10; // [rsp+1A0h] [rbp+120h]
  __m128i v11[19]; // [rsp+1A8h] [rbp+128h] BYREF
  _OWORD v12[6]; // [rsp+2E0h] [rbp+260h] BYREF
  __int128 v13; // [rsp+340h] [rbp+2C0h]
  __int64 v14; // [rsp+350h] [rbp+2D0h]
  _QWORD v15[3]; // [rsp+360h] [rbp+2E0h] BYREF
  __int128 v16; // [rsp+378h] [rbp+2F8h] BYREF
  __int64 v17; // [rsp+388h] [rbp+308h]
  __int128 v18; // [rsp+390h] [rbp+310h]
  __int64 v19; // [rsp+3A0h] [rbp+320h]
  char v20; // [rsp+3AFh] [rbp+32Fh] BYREF
  __int64 v21; // [rsp+3B0h] [rbp+330h]

  v21 = -2; /*0x140023c63*/
  sub_14026B0A0(&v5); /*0x140023c75 — set_relay_display_tags_write_and_sync_sys, see 0003.
                          NOTE: 反编译器's decompiler only resolved 1 explicit param (a1) on this
                          function's own signature; the actual call site (in owner, 0002 caller)
                          passes 4 registers (out-ptr, manager, &global-tuple, &woyao-tuple) —
                          i.e. write_and_sync_sys's real prototype is under-declared by Hex-Rays;
                          not re-typed via declare_type this round (Unknown, non-blocking — the
                          call-site arguments are independently confirmed from the OWNER's own
                          call: `sub_140023C50(&v19, v3, &v42, &v37)`). */
  v2 = v5; /*0x140023c7a*/
  if ( __OFSUB__(-v5, 1) ) /*0x140023c81 — dispatch tag check*/
  {
    v12[5] = v7[4]; /*0x140023c92*/
    v12[4] = v7[3]; /*0x140023c9d*/
    v12[3] = v7[2]; /*0x140023cb3*/
    v12[2] = v7[1]; /*0x140023cba*/
    v12[1] = v7[0]; /*0x140023cc1*/
    v12[0] = v6; /*0x140023cc8*/
    *(_QWORD *)&v16 = 0; /*0x140023ccf*/
    *((_QWORD *)&v16 + 1) = 1; /*0x140023cda*/
    v17 = 0; /*0x140023ce5*/
    v15[2] = 1610612768; /*0x140023cf0*/
    v15[0] = &v16; /*0x140023d02*/
    v15[1] = &off_141314DA0; /*0x140023d10*/
    if ( (unsigned __int8)sub_1400603E0(v12, v15) ) /*0x140023d25 — Display::fmt trait-object call*/
      sub_1412AD780( /*0x140023e23 — panic on Display-format failure*/
        (unsigned int)aADisplayImplem, /* "a Display implementation returned an error unexpectedly" */
        55,
        (unsigned int)&v20,
        (unsigned int)&unk_141314FC8,
        (__int64)&off_141314E58);
    v19 = v17; /*0x140023d3a*/
    v18 = v16; /*0x140023d48*/
    sub_140048640(&v6); /*0x140023d52 — cleanup*/
    v14 = v19; /*0x140023d5e*/
    v3 = v18; /*0x140023d65*/
    v13 = v18; /*0x140023d6c*/
    *(_QWORD *)(a1 + 24) = v19; /*0x140023d73*/
    *(_OWORD *)(a1 + 8) = v3; /*0x140023d77*/
    *(_QWORD *)a1 = 0x8000000000000000uLL; /*0x140023d85 — Err tag written to out-struct*/
  }
  else
  {
    v19 = *(_QWORD *)&v7[0]; /*0x140023d8e*/
    v18 = v6; /*0x140023d98*/
    sub_1412762D0(v11, (const __m128i *)((char *)v7 + 8), 0x138u); /*0x140023db0*/
    v13 = v18; /*0x140023dbc*/
    v8 = v2; /*0x140023dca*/
    v9 = v18; /*0x140023dd1*/
    v10 = v19; /*0x140023dd8*/
    sub_14001B730(a1, (__int64)&v8); /*0x140023de9 — Ok path: build success out-struct*/
  }
  return a1; /*0x140023df1*/
}

/* refs (反编译器 xrefs, this decompile call):
   0x14026b0a0 sub_14026B0A0 = set_relay_display_tags_write_and_sync_sys (renamed this session, see 0003)
   0x141314da0 off_141314DA0
   0x1412ad780 sub_1412AD780 (generic Rust panic_fmt-style formatter, 100+ callers binary-wide)
   0x141314dd0 aADisplayImplem "a Display implementation returned an error unexpectedly"
   0x141314fc8 unk_141314FC8
   0x141314e58 off_141314E58
   0x1400603e0 sub_1400603E0 (Display trait-object invoke)
   0x140048640 sub_140048640 (cleanup/drop)
   0x1412762d0 sub_1412762D0 (generic memcpy helper)
   0x14001b730 sub_14001B730 (Ok-path out-struct builder, shared across relay commands per
                              naming convention seen elsewhere this session e.g.
                              set_codex_api_slots_ok_response_build_sys@0x140216BA0 in 1.1.1 doc —
                              not independently re-confirmed as the SAME function this round,
                              recorded as Unknown/non-blocking)
*/
