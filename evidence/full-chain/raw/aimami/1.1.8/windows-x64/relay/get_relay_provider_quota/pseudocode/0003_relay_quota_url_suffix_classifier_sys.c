// aimami 1.1.8 windows-x64 — relay_quota_url_suffix_classifier_sys (candidate name; PE stripped)
// va: 0x1402679C0 (sub_1402679C0) — one of a family of near-identical per-provider-bucket handler
// functions called from the core dispatcher (0x140976010); size=409B, basic_blocks=21,
// cyclomatic_complexity=11, callees=3 (all resolved: sub_1402A1980[leaf], sub_1412AD680,
// sub_14108F360). decompile: FULL, no truncation.
//
// Role: scans the trailing path segments of a provider base-URL, walking backward over UTF-8
// char boundaries (the `< -64` / `>= -64` branching is classic Rust `str::char_indices` /
// `is_char_boundary` continuation-byte detection), then compares the last 3+1 bytes against the
// literal byte pattern 0x2F 0x76 0x31 ('/','v','1') — i.e. detects whether the URL already ends in
// an API-version suffix "/v1" before the classifier decides whether to append one. This matches the
// role of 1.1.1's confirmed relay_quota_provider_url_classifier_sys (11-provider URL → discriminant
// + quota-endpoint mapping) at the URL-normalization sub-step.

__int64 __fastcall sub_1402679C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v7;             // rax
  unsigned __int64 v8, v9, v10; // rdx/rcx
  unsigned __int64 v11;   // r8
  int v12;                // r9d
  char v13, v14;          // r10/r11
  unsigned __int64 v15;   // rcx
  int v16, v17;           // r11d/r10d
  unsigned __int64 v18;   // r9
  __int64 *v19;           // rax
  __int64 v21;            // stack BYREF
  unsigned __int64 v22;   // stack
  _QWORD v23[4];          // stack BYREF
  _QWORD v24[2];          // stack BYREF
  _QWORD v25[6];          // stack BYREF

  v24[0] = a4;
  v24[1] = a5;
  v7 = sub_1402A1980(a2);   // leaf: fetch (ptr,len) slice header for the base-URL string
  v9 = v8;
  do
  {
    while ( 1 )
    {
      if ( !v9 )
      {
        v21 = v7; v22 = 0;
LABEL_19:
        v19 = &v21;
        goto LABEL_20;
      }
      v10 = v9;
      v11 = v7 + v9;
      v12 = *(char *)(v7 + v9 - 1);
      if ( v12 < 0 )
        break;                 // stop at a UTF-8 continuation-byte boundary
      --v9;
      if ( v12 != 47 )         // ASCII '/'
        goto LABEL_12;
    }
    // multi-byte UTF-8 continuation decode (not expected in URL paths but handled generically —
    // this is the standard Rust std str char-boundary walk-back, not app-specific logic)
    v13 = *(_BYTE *)(v11 - 2);
    if ( v13 >= -64 )
    {
      v15 = v11 - 2; v17 = v13 & 0x1F;
    }
    else
    {
      v14 = *(_BYTE *)(v11 - 3);
      if ( v14 >= -64 )
      {
        v15 = v11 - 3; v16 = v14 & 0xF;
      }
      else
      {
        v15 = v11 - 4;
        v16 = ((*(_BYTE *)(v11 - 4) & 7) << 6) | v14 & 0x3F;
      }
      v17 = (v16 << 6) | v13 & 0x3F;
    }
    v9 = v15 - v7;
  }
  while ( ((v17 << 6) | v12 & 0x3F) == 0x2F );
LABEL_12:
  v21 = v7; v22 = v10;
  // literal byte-pattern compare: last-segment == "v1" (0x762F=='v''/' little-endian short + 0x31=='1')
  if ( v10 < 3
    || (*(_WORD *)(v11 - 3) ^ 0x762F | *(unsigned __int8 *)(v11 - 1) ^ 0x31) != 0
    || a5 < 3
    || *(_WORD *)a4 ^ 0x762F | *(unsigned __int8 *)(a4 + 2) ^ 0x31 )
  {
    goto LABEL_19;             // no "/v1" suffix on either side — pass slice through unchanged
  }
  v18 = v10 - 3;
  if ( v10 != 3 && *(char *)(v7 + v18) <= -65 )
    sub_1412AD680(v7, v10, 0, v18, (__int64)&off_141329C10);  // UTF-8 boundary re-validate after trim
  v25[0] = v7; v25[1] = v10 - 3;   // trimmed slice (URL with "/v1" suffix stripped)
  v19 = v25;
LABEL_20:
  v23[0] = v19;
  v23[1] = sub_1405906F0;   // vtable-style trait-object fn pointer (fmt::Debug/Display shim, shared)
  v23[2] = v24;
  v23[3] = sub_1405906F0;
  sub_14108F360(a1, &unk_1413275A0, v23);   // writes formatted/classified result into a1 (out param)
  return a1;
}
