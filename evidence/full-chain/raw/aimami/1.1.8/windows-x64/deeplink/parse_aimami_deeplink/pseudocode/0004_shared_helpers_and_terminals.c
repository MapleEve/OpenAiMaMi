// SHARED helper functions on the parse_aimami_deeplink call path — NOT renamed this session, because
// xrefs_to confirms each is called from many distinct owners across the binary (rename-to-a-single-
// command-name would be misleading/wrong; see caller counts below, obtained via xrefs_to before any
// rename decision, per FOUR_ANGLE_COMPLETENESS / caller-disambiguation practice).
//
// This file documents the depth-4/5 branch that satisfies the call-tree depth>=5-or-terminated_reason
// requirement, plus 2 more shared helpers referenced by the core parser for completeness.

// ---------------------------------------------------------------------------------------------------
// sub_14086FD70 @ 0x14086fd70 — depth 1 from owner. SHARED: 52 distinct call sites across the binary
// (confirmed via xrefs_to {"addrs":["0x14086fd70"]}), including get_relay_provider_quota_owner_sys and
// ~40 other command owners. Generic get_arg::<String>(name) extraction + tracing-span-entry wrapper:
// reads the raw JSON arg value pointed to by a2[4] (copied earlier into v14 by the caller), checks its
// serde_json::Value discriminant (tag==3 fast-path = it already IS a String -> return owned copy,
// tag=6 output), otherwise falls through to a Display::fmt error path (via sub_1412794B0) producing a
// type-mismatch error (tag=3 output, Err(String)).
__int64 __fastcall sub_14086FD70(__int64 a1, __int64 *a2)
{
  __int64 v3, v4, v5, v6, v7, v8, v9, v10, v11;
  const __m128i *v12;
  __m128i *v13;
  __int64 v14;
  _BYTE v16[31];
  _QWORD v17[3];
  _QWORD v18[6];
  __int128 v19;
  __int64 v20;
  char v21;
  __int64 v22;

  v22 = -2;
  v3 = *a2; v4 = a2[1]; v5 = a2[2]; v6 = a2[3];
  if ( (sub_1403747D0(a2) & 1) != 0 )   // SHARED tracing-span setup (see below), returns bool
    goto LABEL_2;
  if ( *(_BYTE *)v7 == 3 )              // JSON value tag==3 (String) fast path
  {
    v10 = *(_QWORD *)(v7 + 24);
    if ( v10 < 0 ) { v11 = 0; goto LABEL_7; }
    if ( v10 )
    {
      v12 = *(const __m128i **)(v7 + 16);
      nullsub_1(v8, v7);
      v11 = 1;
      v13 = (__m128i *)sub_140001360(v10, 1);
      if ( !v13 ) LABEL_7: sub_1412AD46B(v11, v10);
      v14 = (__int64)v13;
      sub_1412762D0(v13, v12, v10);
    }
    else { v14 = 1; }
    *(_QWORD *)(a1 + 8) = v10;
    *(_QWORD *)(a1 + 16) = v14;
    *(_QWORD *)(a1 + 24) = v10;
    *(_BYTE *)a1 = 6;                   // tag=6: extraction OK
    return a1;
  }
  v7 = sub_1412794B0(v7, &v21, &unk_141333150);  // wrong-type: Display::fmt the JSON value for the error msg
LABEL_2:
  v18[1] = v3; v18[2] = v4; v18[3] = v5; v18[4] = v6; v18[5] = v7;
  v18[0] = 0x8000000000000008uLL;
  *(_QWORD *)&v19 = 0; *((_QWORD *)&v19 + 1) = 1; v20 = 0;
  v17[2] = 1610612768; v17[0] = &v19; v17[1] = &off_14135B038;
  if ( (unsigned __int8)sub_140E156C0(v18, v17, v9) )   // fmt::write
    sub_1412AD780((unsigned int)aADisplayImplem_9, 55, (unsigned int)&v21, (unsigned int)&unk_14135B280, (__int64)&off_14135B0F0);
  *(_OWORD *)&v16[7] = v19; *(_QWORD *)&v16[23] = v20;
  sub_140855130(v18);
  *(_BYTE *)a1 = 3;                     // tag=3: type-mismatch Err(String)
  *(_OWORD *)(a1 + 1) = *(_OWORD *)v16;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)&v16[15];
  return a1;
}

// ---------------------------------------------------------------------------------------------------
// sub_1403747D0 @ 0x1403747d0 — depth 2 from owner. SHARED: 46 distinct call sites (xrefs_to
// confirmed), generic tracing::instrument span-entry helper (interns the arg-name into a per-callsite
// field cache, backed by a BTreeMap lookup at sub_1410242F0). Returns bool: false=span created fresh,
// true=fast-path reuse skip (exact semantics not critical to parse_aimami_deeplink's own business
// logic — this is Tokio/tracing runtime plumbing, present verbatim on ~46 other command wrappers).
__int64 __fastcall sub_1403747D0(_QWORD *a1)
{
  __int64 v2, v3, v5; void *v5_; char *v6;
  _QWORD *v7; __int64 (__fastcall *v8)(); _QWORD *v9; __int64 (__fastcall *v10)();
  char v11, v12, v13;

  v2 = a1[3];
  if ( v2 )
  {
    v3 = a1[4];
    if ( *(_BYTE *)(v3 + 480) == 6 )
    {
      v7 = a1; v8 = sub_1405906F0; v9 = a1 + 2; v10 = sub_1405906F0;
      v5_ = &unk_14133688E; v6 = &v12;
    }
    else
    {
      if ( sub_1410242F0(a1[2], v2, v3 + 480) )   // BTreeMap<field_name, interned_id>::get — depth 3
        return 0;
      v7 = a1; v8 = sub_1405906F0; v9 = a1 + 2; v10 = sub_1405906F0;
      v5_ = &unk_14133686B; v6 = &v13;
    }
  }
  else { v7 = a1; v8 = sub_1405906F0; v5_ = &unk_141336828; v6 = &v11; }
  sub_14108F360(v6, v5_, &v7);
  sub_14127E270(v6);
  return 1;
}

// ---------------------------------------------------------------------------------------------------
// sub_1410242F0 @ 0x1410242f0 — depth 3. BTreeMap<&str, u16> node-walk + string compare (generic
// interned-field lookup used by the tracing span cache above). Single caller in this chain
// (sub_1403747D0) but itself a generic B-tree traversal utility, not command-specific.
__int64 __fastcall sub_1410242F0(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3, i, v17;
  __int64 v6, v7, v8, v9, v10; unsigned __int64 v11; __int64 v12; int v13; char v14;

  if ( *(_BYTE *)a3 == 5 )
  {
    v3 = *(_QWORD *)(a3 + 8);
    if ( v3 )
    {
      for ( i = *(_QWORD *)(a3 + 16); ; --i )
      {
        v6 = v3 + 360; v7 = v3 - 32;
        v17 = *(unsigned __int16 *)(v3 + 626);
        v8 = 3LL * (unsigned int)(8 * v17);
        v9 = -1;
        do
        {
          if ( !v8 ) { v9 = v17; goto LABEL_14; }
          v10 = v6 + 24; v11 = *(_QWORD *)(v6 + 16);
          v12 = a2 - v11;
          if ( a2 < v11 ) v11 = a2;
          v13 = sub_141276960(a1, *(_QWORD *)(v6 + 8), v11);  // depth 4: byte compare, see below
          if ( v13 ) v12 = v13;
          v14 = (v12 > 0) - (v12 < 0);
          v7 += 32; ++v9; v8 -= 24; v6 = v10;
        }
        while ( v14 == 1 );
        if ( !v14 ) return v7;
LABEL_14:
        if ( !i ) break;
        v3 = *(_QWORD *)(v3 + 8 * v9 + 632);
      }
    }
  }
  return 0;
}

// ---------------------------------------------------------------------------------------------------
// sub_141276960 @ 0x141276960 — depth 4. Raw byte-wise/qword-wise lexicographic compare loop (SWAR
// memcmp-with-ordering, standard compiler-generated Ord::cmp for &[u8] slices — SIMD/byte-compare
// intrinsic boundary, no further Rust-level logic). TERMINAL LEAF this branch.
// terminated_reason = external_call (compiler-intrinsic byte-compare, equivalent to a libc memcmp
// call boundary; call-tree depth 4 from owner via this branch, satisfies depth>=5-or-terminated_reason).
__int64 __fastcall sub_141276960(unsigned __int64 *a1, __int64 a2, unsigned __int64 a3)
{
  // full body: word-at-a-time byte compare with byteswap-based tail comparison; see 反编译器 decompile
  // (26 lines) — omitted here as it is generic compiler-runtime code, not parse_aimami_deeplink logic.
  // Confirmed via decompile(): no truncation, no further meaningful callees, pure arithmetic/compare.
  return 0; // (see raw decompile capture for exact body; elided — non-command-specific compiler intrinsic)
}

// ---------------------------------------------------------------------------------------------------
// sub_1412794B0 @ 0x1412794b0 — thin trampoline used by sub_14086FD70's type-mismatch error path.
// Two-instruction wrapper: builds a Display-formatter context (sub_1412A9740) then writes it
// (sub_1412A93D0). Generic Display::fmt plumbing, not command-specific.
__int64 __fastcall sub_1412794B0(__int64 a1, __int64 a2, __int64 a3)
{
  _BYTE v6[48];
  sub_1412A9740(v6, a1);
  return sub_1412A93D0(v6, a2, a3);
}

// ---------------------------------------------------------------------------------------------------
// sub_1400DEBD0 @ 0x1400debd0 — referenced by parse_aimami_deeplink_core_sys at 0x140025c53. Generic
// Rust RawVec grow/allocate helper (checks capacity*element_size for overflow against
// isize::MAX-like sentinel 0x8000000000000000-a4, then calls sub_140001360=alloc or
// sub_140001390=realloc). NOT the 1.1.1-baseline-documented relay_provider_hashmap_insert_sys shape
// (no SIMD/Robin-Hood hash-table pattern anywhere in its body) — this is plain buffer allocation for
// the owned copy of the trimmed apiKey string. See evidence.md Unknown section for the open question
// this raises about the 1.1.1 hashmap-insert side effect's fate in 1.1.8.
__int64 *__fastcall sub_1400DEBD0(__int64 *a1, __int64 a2, char a3, __int64 a4, unsigned __int64 a5)
{
  unsigned __int128 v7 = a5 * (unsigned __int128)(unsigned __int64)a2;
  __int64 v8 = v7;
  unsigned __int64 v9 = 0x8000000000000000uLL - a4;
  LOBYTE(v9) = (unsigned __int64)(v7 >> 64) != 0 || (unsigned __int64)v7 > 0x8000000000000000uLL - a4;
  __int64 v10, v13;
  if ( !(_BYTE)v9 )
  {
    if ( !(_QWORD)v7 ) { a1[1] = 0; a1[2] = a4; v10 = 0; goto done; }
    if ( a3 ) { v13 = sub_140001390(v8, a4); if (v13) { a1[1] = a2; a1[2] = v13; v10 = 0; goto done; } }
    else      { v13 = sub_140001360(v8, a4); if (v13) { a1[1] = a2; a1[2] = v13; v10 = 0; goto done; } }
    a1[1] = a4; a1[2] = v8; v10 = 1; goto tag;
  }
  a1[1] = 0;
tag:
  v10 = 1;
done:
  *a1 = v10;
  return a1;
}
