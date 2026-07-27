# Windows 1.2.3 Maintenance — Distilled Backend Logic (rebuild_registry)

`clean` has no backend evidence this pass (see README.md/SYSTEM-DIFF.md); this document covers `rebuild_registry` only.

## Call chain (3 hops, confirmed by direct source read + grep cross-reference)

```
rebuild_registry(a1)                                    [commands/rebuild_registry_0x14016c220.c]
  -- command wrapper: sets up "rebuild_registr"+"repo" tag strings, dispatches into
     an inlined async/result-unwrap pattern typical of this binary's tauri command
     machinery (helper subs: sub_140003640/sub_1403CFCC0/sub_1416850A0/sub_140434D10/
     sub_14047E370 -- generic async-result plumbing shared across many commands,
     not maintenance-specific, not individually resolved this pass)
  |
  v (dispatches to, per module-header comment cross-platform-signature-annotated)
rebuild_registry_with_policy(a1, a2, a3=policy_byte, a4)  [repository/rebuild_registry_with_policy_0x14039f840.c]
  -- deep leaf, 2095 lines. Core shape (consistent with 1.0.9's Repository::rebuild_registry,
     see raw/aimami/1.0.9/macos/maintenance/rebuild_registry/leaf.md dim2 for the closest
     fully-named reference of the same logical operation):
       1. loop (up to 3 attempts, see error path below): read current registry state,
          scan snapshots directory entries, for each *.json-like snapshot: load auth
          file, build auth snapshot, carry over existing registry item state, dedupe
          by account key, append to items list
       2. sort items (insertion sort if small N, else a larger sort path -- consistent
          with the 1.0.9 mac leaf's driftsort_main/insertion_sort_shift_left pattern)
       3. compare freshly-scanned auth.json ownership against the snapshot taken at
          loop start (sub_140423890) -- if ownership changed mid-scan, retry (up to 3x)
       4. on the a3 (policy byte) branch: an additional pass reads a2[37]/a2[38] (a
          second directory or account-set reference) and merges/serializes via
          sub_1403C9010 / sub_1403CD320 / sub_1403C9DD0 -- semantics of this second
          pass are NOT derived this pass (see SYSTEM-DIFF.md open question)
       5. calls persist_registry(items, ..., 1) to write the rebuilt registry
  |
  v (confirmed by direct grep: line 1383 of rebuild_registry_with_policy_0x14039f840.c)
persist_registry(a1, a2, a3, a4)                          [repository/ida/pseudocode/persist_registry_0x14038fb30.c]
  -- deep leaf, cross-platform-signature-annotated to
     mac codexmate_lib::core::repository::Repository::persist_registry.
     Shape: if a4 (a "compact"/flag byte), does an extra pre-write pass (registry
     item filtering/consolidation via sub_141475580/sub_141475530/sub_1408726C0);
     then serializes and writes the registry via sub_1403506C0.
     Terminal file-write syscall NOT independently traced this pass (stops at the
     sub_1403506C0 call site).
```

## Error path (confirmed)

3-attempt retry loop in `rebuild_registry_with_policy`: if `auth.json` ownership (as read at scan start vs re-checked via `sub_140423890`) keeps changing across 3 consecutive attempts, the function returns an error with the literal 71-byte string:

```
"auth.json ownership kept changing while rebuilding the account registry"
```

This is a genuinely new-looking safety mechanism relative to the 1.0.9 Windows evidence.md's description of a single-pass rebuild with only a generic pre-check guard error (no retry-loop language) -- see SYSTEM-DIFF.md for the honest caveat that this comparison is not diff-confirmed (no live IDA access to the 1.0.9 binary this pass).

## Cross-platform corroboration (as-found, not independently re-verified)

Both `rebuild_registry_with_policy` and `persist_registry`'s .c file headers carry producer-added comments of the form:

```
// win 1.2.3 | = mac codexmate_lib::core::repository::Repository::<name> | 跨平台字符串签名匹配(名↔函数一致)
```

These are re-cited here as-found (consistent with how `windows-1.2.3-relay` and `windows-1.2.3-accounts` treat the same class of annotation elsewhere in this binary's repository module) but were not independently re-derived or re-verified byte-for-byte in this reduce-only pass.

## What is NOT covered by this document

- `clean`'s backend logic (no evidence exists this pass).
- `rebuild_registry`'s full response DTO field list (only the error-path string is confirmed; the success-path serialization was not traced to a terminal serializer this pass, unlike the 1.0.9 evidence.md which found an explicit `sub_140448C20` serializer with a full field list).
- The policy-byte (`a3`) parameter's semantics.
- `load_snapshot` (out of this package's scope; see `../windows-1.2.3-accounts/`).
