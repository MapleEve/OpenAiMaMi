# parse_aimami_deeplink — Evidence (Windows x64, AiMaMi 1.1.8, delta vs 1.0.9/1.1.1)

- session: <审计会话>
- machine: <本地机器>
- model: <模型>
- date: 2026-07-13
- target: command 12/20 of this round's windows-x64 deep gold-leaf batch
- binary: AiMaMi 1.1.8 win64.exe, sha256=f25d8129528b25ac7f69524fa07c78f961da189a7a8f2c758c288ec96bc68f10
- idb: <证据库> 1.1.8 win64.exe.i64

## 分析工具就绪门
`健康检查` on win 反编译器 confirmed `status=ok`, `uptime_sec=214550.963`, `反编译就绪=true`,
`module="AiMaMi 1.1.8 win64.exe"`, `idb_path=<证据库> 1.1.8 win64.exe.i64` — before any
decompile/callees/xrefs_to/rename/set_comments call this round.

## Owner-gate re-check before write
`grep -c` for key `aimami/1.1.8/windows-x64/deeplink/parse_aimami_deeplink` on INDEX.jsonl prior to
this write = 0; `find raw/aimami/1.1.8/windows-x64/deeplink/parse_aimami_deeplink/` prior to this write
returned "no such directory" → gate=ALLOW/first, no collision, no takeover token needed.
`intermediate/aimami/1.1.8/windows-x64/version-delta/owner-map-118.jsonl` line 71 already recorded
`owner_va=0x1403d6000, present=true` (angle-A discovery pass only, no full leaf bundle) — this
sub-entry supplies the first full raw pseudocode/call-tree/interface/evidence/gate-report package.

## Confirmed
1. Owner resolution: command-string literal `"parse_aimami_deeplink"` (21B, `aParseAimamiDee` @
   0x14133b788) and argKey literal `"url"` (3B, `aUrl_3` @ 0x14133a635) both appear as direct refs
   inside the decompiled owner body at 0x1403d6000 (not a string-pool-only guess); single dedicated
   wrapper function per `owner-map-118.jsonl` line 71 method=`find_regex_string_pool_hit+xrefs_to_owner=
   dedicated_per_command_wrapper_fn`.
2. Core business logic located and fully decompiled: `parse_aimami_deeplink_core_sys` @ 0x140025220,
   17035-char non-truncated `decompile()` body (well under the 30000-75000 HexRays truncation window),
   3 call sites all from the owner (`xrefs_to` confirmed single distinct caller) — command-specific,
   safe A-level rename.
3. Validation rule set confirmed byte-identical to the AiMaMi 1.1.1 windows-x64 baseline
   (`raw/aimami/1.1.1/windows-x64/parse_aimami_deeplink/interface.md`): scheme=="aimami" (6B DWORD+WORD
   compare), path requires 2 segments / len 7 / "/import"-shaped, resource=="provider" (8B QWORD
   compare), app=="codex" (5B DWORD+BYTE compare), name/endpoint/apiKey required, apiKey must be
   http(s) URL (byte-identical DWORD/QWORD literal comparison), model optional with a default.
4. Success response shape confirmed byte-identical to the 1.1.1 baseline: tag=2 discriminant, "ok"
   (2B, 0x6B6F LE) + "success" (7B) literals allocated fresh each call, int field @+192=1, bool
   field @+196=true.
5. Response envelope builder identified and renamed: `parse_aimami_deeplink_response_build_sys` @
   0x1407ad6d0 (xrefs_to confirmed 3 call sites, single distinct caller = owner), terminates in the
   shared `invoke_resolver_respond_sys` (already named/cross-confirmed by multiple other sub-entries
   this session, e.g. `has_notch`, `get_relay_provider_quota`).
6. Shared-vs-command-specific disambiguation done via `xrefs_to` BEFORE any rename decision:
   `sub_14086FD70` (arg-extract wrapper) = 52 distinct callers; `sub_1403747D0` (tracing span setup) =
   46 distinct callers — both confirmed generic/shared, NOT renamed to a parse_aimami_deeplink-specific
   name (would be misleading).
7. Call-tree depth-4 terminal branch fully traced and decompiled with no truncation:
   owner(0) → `sub_14086FD70`(1) → `sub_1403747D0`(2) → `sub_1410242F0`(3, BTreeMap interned-field
   lookup) → `sub_141276960`(4, SWAR lexicographic byte-compare, compiler-generated `Ord::cmp` for
   `&[u8]`) — terminated_reason=`external_call` (compiler-intrinsic compare boundary, no further
   Rust-level logic in this leaf).
8. Renames written to IDB this round (3 total): `parse_aimami_deeplink_owner_sys`@0x1403d6000 (A),
   `parse_aimami_deeplink_core_sys`@0x140025220 (A), `parse_aimami_deeplink_response_build_sys`@
   0x1407ad6d0 (B). `set_comments` ok x1 at the owner (evidence-line annotation, explicitly marked
   "not gate promotion").

## Inferred
1. `sub_14086FD70`'s tag==6 return value most likely encodes "String extraction succeeded" (a
   serde_json::Value::String discriminant match), inferred from the owner's subsequent branch
   (tag==6 → proceeds to call the real core parser; any other tag → responds with the raw extraction
   error) — not independently `type_query`-verified against the JSON `Value` enum's actual repr.
2. The `unk_141313E4F`/`unk_141313E77`/`unk_141313E9E`/`unk_141313E14`/`unk_141313EC2` unresolved
   blob addresses referenced by `sub_14108F360` calls are inferred to be `fmt::Arguments`-shaped
   format-string templates for each specific validation-failure message (scheme/path/resource/apiKey/
   URL-parse), by structural analogy with the identically-shaped calls in the 1.1.1 baseline's
   documented error table — exact literal text not decoded this round.
3. `sub_1400DEBD0` is inferred to be a generic `RawVec::grow_amortized`/allocate-or-reallocate helper
   (not a hashmap insert) based on its capacity-overflow-check + alloc/realloc dispatch shape, cross-
   checked against 0 additional callers sharing the SIMD/Robin-Hood pattern documented for the 1.1.1
   baseline's `relay_provider_hashmap_insert_sys`.
4. The path-check literal at 0x140025639 (`*(_WORD*)v18 != 12662`) is inferred to encode a "v1"-style
   URL scheme-authority marker consumed ahead of the "/import" path segment, by analogy with the byte
   arithmetic shape (12662 = 0x3176) rather than an independently decoded ASCII confirmation this
   round.
5. The exact byte offsets of the name/endpoint/apiKey/model fields within the 72..196 response-struct
   range are inferred from the 1.1.1 baseline's documented layout (same tag/status/result/int/bool
   fields at the same relative offsets), not independently re-derived field-by-field this round.

## Unknown
1. Whereabouts of the 1.1.1-documented `relay_provider_hashmap_insert_sys`-equivalent side effect in
   1.1.8: not located in the complete 46-ref callee enumeration of `parse_aimami_deeplink_core_sys`.
   `recovery_attempts`: (a) full ref-list cross-check against the SIMD/Robin-Hood shape — no match;
   (b) full decompile of the one allocation call in the success path (`sub_1400DEBD0`) — confirmed
   generic RawVec grow, not a hashmap insert. NOT `accepted_unknown`/`genuine_ceiling` (no decompile
   wall hit; this is a reachability/scope gap — the insert may happen in a caller outside this owner's
   direct tree, or may have moved to a separate command in 1.1.8).
2. Exact literal text of the 5 format-string template blobs (`unk_141313E4F` etc.) driving each
   validation-error message — bytes not individually decoded this round (Inferred section above).
3. Exact field-level struct layout of the 200B success payload beyond the tag/status/result/int/bool
   fields already confirmed (name/endpoint/apiKey/model sub-offsets not independently `type_query`-
   verified this round, only cross-referenced against the 1.1.1 baseline's documented layout).
4. `sub_141276960`'s SIMD/SWAR compare instruction sequence is fully decompiled but not reduced to a
   canonical named Rust source form (e.g. exact `memcmp`/`bcmp`/`Ord::cmp` intrinsic identity) —
   cosmetic, non-blocking for this leaf's gate tier.
5. Whether the frontend TypeScript bundle for AiMaMi 1.1.8 still calls `parse_aimami_deeplink` with the
   same single `{url}` argKey shape was not independently re-verified this round (cited by inference
   from the 1.1.1 baseline's confirmed `argKeys=[url]` finding and this round's own frontend-delta
   comparison sub-step, not re-run standalone for this specific leaf).

## Fake-wall check
`accepted_unknown=false` for all 5 Unknown items above; `genuine_ceiling=false` — no async/vtable/ICF
ceiling encountered; all decompiled functions (owner, core, response-builder, and the depth-4 shared
chain) returned real, non-bail Hex-Rays bodies with no truncation and no `basic_blocks` chunking
required. The one open finding (item 1, hashmap-insert whereabouts) is a scope/reachability gap with
documented `recovery_attempts`, not a fake wall.

## 保存分析库
Pending at end of this sub-step (see 保存分析库 call this session, run once for the whole win IDB after
all renames/comments for this batch are written).

## Gate tier
`strictImplementationUse_candidate` — full validation rule set + response shape + delta-vs-1.1.1
comparison closed; blocked from `readyToImplement` only by the open hashmap-insert-side-effect
question (item 1 above) and the un-decoded format-string literals (item 2).
