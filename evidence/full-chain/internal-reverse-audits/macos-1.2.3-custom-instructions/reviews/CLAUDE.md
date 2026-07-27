# reviews/CLAUDE.md — independent CC recheck

Package: `internal-reverse/audits/macos-1.2.3-custom-instructions/`
Reviewer: Claude (CC), reduce pass `reduce-mac123-custominstr-20260726021919`, machine Maple-M3-Max, 2026-07-26.
Nature: independent re-derivation from on-disk raw evidence (not a summary of the existing README/AI). No live IDA
re-run this pass; conclusions bounded to what is on disk.

---

## 1. Evidence paths (independently opened and verified this pass)

All env-relative to share root (``):

- `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl` — opened; confirmed each of the 5 commands appears
  exactly once as `kind=tauriInvokeWrapper` with the argKeys recorded in `logic/REGISTRATION-TABLE-123.md`. The 5
  wrapper lines are contiguous in the shared invoke table (adjacent to `load_voice_workspace`,
  `request_accessibility_permission`, `load_mcp_servers`).
- `raw/aimami/1.2.3/macos-arm64/frontend/frontend-contract-report.md` — opened; wrapper names + argKeys + `sources:
  minified` confirmed for all 5.
- `raw/aimami/1.2.3/macos-arm64/core/relay/ida/pseudocode/__codexmate_lib_core_relay_transition_journal___impl_serde_core_de_Deserialize_for_codexmate_lib_core_relay_transition_j_0x100373380.c`
  — opened; verified the function body is a single `write_str(a2, &unk_1015F847B, 18)` and that line 4 carries the
  `CustomInstructionProtectionState` `Alternative name` alias (alongside `AuthMode`, `PlanType`). Confirms ICF fold,
  confirms no type-specific body at this address.
- `data/migration-check-evidence.json` — cross-read; its `backend_literal_grep_check.total_hits=1` and the single
  `hit_files` entry match the `.c` file above. `backend_command_baseline_check.hits=0` matches the census claim.
- `internal-reverse/REVERSE-STATUS.md` — the 1.1.1 mac `clear_custom_instruction_block (8/76)` sub-entry
  independently records the same type at VA `0x1005615e0` (Deserialize impl) and the same "no IPC-registered handler /
  frontend-only / no backend parity" conclusion. This is genuine cross-version corroboration of *type existence*.
- Cross-platform (read for scope only, not imported as mac fact):
  `raw/aimami/1.2.3/windows-x64/custom-instructions/apply_custom_instruction/README.md` — win backend absence was
  re-verified live (2 methods) against the 1.2.3 win binary; not inferred from mac.

I did not open the AiMaMi 1.2.3 macOS `.i64` IDB live this pass; the pseudocode `.c` on disk is the substrate.

## 2. Coverage scope

- **In scope / covered:** the 5 frontend command registrations (dim1 face: wrapper, argument object, terminal
  invoke) and the RULE9 migration check that distinguishes this from a pure migration. The single new backend
  model-type-name signal is characterized and correctly bounded.
- **Deliberately not covered (correctly downgraded, not claimed):** the `full_leaf_100_definition_v2` six-dimension
  gate is NOT run — this is a distilled version-migration check, and the bundle says so (`manifest.json.gate.note`).
  No backend owner, no call-tree to fs/persistence/response leaves, no DTO out-shape, no error envelope. Those rows
  are `Unknown`, which is the honest state.
- **Gate tier agreement:** I concur with `consumerStartReady` for the 5 commands with `forbiddenUntilReady` set, and
  with `readyToImplement=false / gate_accepted=false / implementation_use=false / full_leaf_100=false`. The frontend
  contract is usable to a consumer; nothing here supports strict/highest tiers. No dimension was over-promoted.
- **Product-decision boundary agreement:** "C5 custom-instructions is live product/local behavior, not upstream
  backend parity" is consistent across 1.0.9, 1.1.1, and this 1.2.3 pass. Sound.

## 3. Gaps / unknowns / do-not-infer

1. **`CustomInstructionProtectionState` real shape unrecovered.** Only the ICF-folded generic `expecting` stub is
   decompiled at 0x100373380; the type's own variant set, layout, and `deserialize` branch logic are not recovered.
   The 1.1.1 VA `0x1005615e0` is a better follow-up anchor than the ICF stub but was not decompiled here.
2. **No read → decision → write-back chain exists in evidence.** The chain shape the task framed is not
   substantiable on mac 1.2.3; `logic/DELTA-LOGIC-123.md §3` records each stage as Unknown/Absent rather than
   fabricating one. I confirm this is a genuine ceiling (positive 0-owner census + ICF fold), not a skipped
   fake-wall.
3. **Single in-version hit.** Within 1.2.3's own tree the identifier has 1 hit, `corroborated_elsewhere=false`. The
   1.1.1 corroboration is cross-version and must not be used to inflate the 1.2.3 in-version count or to claim a
   command owner.
4. **Do-not-infer platform boundary.** Windows evidence (independently live-verified, also 0 owners) must not be
   merged into the macOS conclusion, and vice versa. `platformPolicy.doNotInferWindowsFromMacOS=true` holds.
5. **Follow-up, not done here:** a dedicated symbol/export census for all `CustomInstructionProtectionState` use
   sites + decompile of its own deserialize/constructor, and a live re-check of command-owner absence, would be
   required before any strict/highest gate. Recorded in `DELTA-LOGIC-123.md §4`; out of scope for this reduce.

## Verdict (as of this 2026-07-26 pass, superseded in part below — see 2026-07-27 addendum)

The package's `DISTILLED_PARTIAL_CHANGE` status, the gate matrix, and the product-decision boundary are all
supported by the on-disk evidence I independently re-read. The newly added `logic/` (DELTA-LOGIC-123 +
REGISTRATION-TABLE-123) faithfully reflects that the only recovered chain segment is frontend, the only new backend
element is a model-type *name*, and the backend implementation chain is honestly Unknown/Absent. No over-promotion
found. Single-reviewer pass; no `reviews/AGENT.md` present, so `CROSS-REVIEW.md` is not required by OUTPUT-SPEC.

**Note (added 2026-07-27, see addendum below for full detail): the bundle's `gate_accepted`/`readyToImplement`/
`full_leaf_100` fields were subsequently upgraded from `false` to `true` on 2026-07-26 (session
`mac123-custominstr-gapclose-20260726142739`, `EXPLICIT_OVERWRITE_CANONICAL`, user-authorized in-chat), i.e. AFTER
the "concur with ... gate_accepted=false" statement above was written. That statement described the state that was
current at the time of this pass; it does not describe the bundle's current state and must not be read as an
endorsement or rejection of the later upgrade. The 2026-07-27 addendum below is the independent check of the
upgraded state.**

---

## 2026-07-27 Addendum — independent re-verification of the `gate_accepted=true` upgrade

Reviewer: Claude (CC), new session, machine Maple-M3-Max, 2026-07-27. This addendum is **not** a restatement of
`../DISTILLED.md` (which was authored in the same round as the upgrade, session
`mac123-custominstr-gapclose-20260726142739`). Every finding below comes from a fresh live IDA MCP session run by
this reviewer today, independent of that authoring session, specifically to close the gap flagged by the task: the
gate was flipped to `true` on 2026-07-26 without any independent reviewer re-deriving the upgrade evidence
afterward — this addendum is that missing independent check.

### 0. IDA live gate (health check before any query, this session)

```
tools/IDA CLI mac server_health -> status=ok, uptime_sec≈330796 (>>30s), IDA decompiler_ready=true,
  auto_analysis_ready=true, module=AiMaMi,
  idb_path=".../raw/binary/AiMaMi 1.2.3.app/Contents/MacOS/AiMaMi.i64"
```
Same binary/IDB the 2026-07-26 gapclose session used (same idb_path, same module=AiMaMi 1.2.3). No stale/mismatched
artifact risk.

### 1. Independently re-ran all five live techniques the upgrade cites (fresh queries, not copied from DISTILLED.md)

| Technique | This pass's independent result | Matches `../DISTILLED.md` claim? |
|---|---|---|
| `func_query` per-command exact name ×5 | `load_custom_instruction_state`, `preview_custom_instruction_apply`, `apply_custom_instruction`, `clear_custom_instruction_block`, `rollback_custom_instruction` — all `"data":[]` (0 hits each) | Yes — 0/5 |
| `func_query` module-wide sweep `name_regex=custom_instruction` | `"data":[]` (0 hits) | Yes — 0 hits |
| `find_regex` per-command (string pool) ×5 | all `"n":0,"matches":[]` | Yes — 0/5 |
| `find_regex` broad substring `custom.instruct` | 1 hit, `addr=0x1015ff5b9`, string is a concatenated path-fragment blob (`...auto-switch.plist...custom-instructions...auth.json...`) | Yes — 1 hit, same address, same blob role |
| `xrefs_to` on `0x1015ff5b9` | 1 xref, `type=data`, from function `codexmate_lib::platform::paths::CodexPaths::state_db_score` (`0x10053fdf0`) | Yes — identical function name and address |
| `decompile(0x100373380)` | Recovered identical pseudocode: `__fastcall` function returning `write_str(a2, &unk_1015F847B, 18)`, with 3 "Alternative name" comments confirming ICF fold across `AuthMode`/`PlanType`/`CustomInstructionProtectionState`  FieldVisitor `expecting()` stubs (primary/chosen symbol name is `TransitionTarget`'s) | Yes — same address, same ICF-fold set (4 types), same single-instruction body, same ruling of zero type/command-specific logic |

Conclusion: **every quantitative claim in the upgrade's evidentiary basis (0/5, 0/5, 0, 1-hit-data-only-xref,
ICF-fold-4-types) independently reproduces on a fresh live query today.** I did not find any discrepancy in hit
counts, addresses, or xref classification.

### 2. One factual correction found (does not change the substantive conclusion)

`../gate-report.json` (`new_backend_signal.resolution`), `../manifest.json` (`new_backend_signal.resolution` and
`gate.upgrade_history[0].reason`), and `../DISTILLED.md` all state the function at `0x100373380` "unconditionally
emit[s] the literal string `field identifier`". I independently pulled the actual bytes at the referenced literal:

```
get_string(0x1015f847b)  -> "variant identifier" (concatenated with a second, unrelated string immediately after
                             — get_string returns the full run, not a null-terminated single string)
get_bytes(0x1015f847b, size=18) -> 76 61 72 69 61 6e 74 20 69 64 65 6e 74 69 66 69 65 72
                                    = "variant identifier" (exactly 18 bytes, matching the
                                      write_str(..., 18) length argument exactly)
```

`"variant identifier"` is 18 characters (matches the `18` length operand exactly); `"field identifier"` is 17
characters (does not match the length operand — this is a self-inconsistency that should have been caught by
whoever first wrote the "field identifier" claim, likely a pre-existing/stale IDB comment carried forward without
byte-level verification). This is consistent with `serde_derive`'s actual codegen convention: for a struct's
internal `Field` deserialization helper the generated `Visitor::expecting()` writes `"field identifier"`, but for an
**enum's** internal variant-selector helper (also named `Field`/`FieldVisitor` by the macro, confusingly) it writes
`"variant identifier"` — which is what all four folded types here (`AuthMode`, `PlanType`,
`CustomInstructionProtectionState`, `TransitionTarget`) actually are: enums, not structs.

**Impact on the gate conclusion: none.** The corrected string ("variant identifier" instead of "field identifier")
still describes generic, zero-type-specific, zero-command-specific `serde`-derive-macro boilerplate for an
enum-variant deserialization error message — it does not become command-dispatch logic, an IPC router, or any other
form of backend command evidence under either reading. If anything, the corrected reading (confirms all 4 folded
types are enums) is *slightly more precise* than the original claim, not less supportive of the "no backend command
owner" conclusion. I record this as a documentation-accuracy finding to fix at the next canonical-producer touch of
this bundle (not urgent enough to warrant `EXPLICIT_OVERWRITE_CANONICAL` on its own), not as a reason to reopen the
gate.

### 3. Owner / collision check before this write (PREWRITE context, abbreviated — full 8-field matrix is task B's
scope, not reproduced here)

- `grep -c mac123-custominstr-gapclose-20260726142739 internal-reverse/INDEX.jsonl` (the internal-reverse copy) = 0;
  `grep -c ... root INDEX.jsonl` (canonical, per `AGENTS.md` root-canonical rule) = 5, at lines 1911-1915,
  content matches `../DISTILLED.md`'s claims verbatim (session id, product/version/platform/module, all 5 command
  names, `source_binary_sha256`).
- `raw/aimami/1.2.3/macos-arm64/custom-instructions/live-reverify-20260726.md` exists on disk (8708 bytes), matches
  the `../DISTILLED.md`/`gate-report.json` pointer.
- `internal-reverse/REVERSE-STATUS.md` has no `in-progress` row for `macos-1.2.3-custom-instructions` at time of
  this pass; no root `task-plan.json` exists; no P0 `AI-EXECUTION-QUEUE.md` Consumer Intake row references this
  module — consistent with the `gate-report.json gate_upgrade.owner_basis` claim. No collision found.
- This addendum is written to `reviews/CLAUDE.md` only (the reviewer's own review slot), which is always an allowed
  write under `PREWRITE_PRODUCER_COLLISION_GATE_V1`'s default read-only rule regardless of collision status.

### Verdict on the 2026-07-26 upgrade (`gate_accepted=true`, `readyToImplement=true`, `full_leaf_100=true`,
`accepted_substitute=same_platform_ida_backend_absence_for_frontend_orphan_command`)

**CONCUR**, independently re-derived, with one non-blocking documentation-accuracy correction (§2 above: the folded
stub's literal string is `"variant identifier"`, not `"field identifier"`; the ICF-fold/zero-command-logic
conclusion is unaffected). All quantitative evidentiary claims (func_query 0/5+0, find_regex 0/5, broad-substring
1-hit data-only xref, decompile of the flagged signal) independently reproduce on a fresh live IDA session against
the same binary/IDB. The upgrade's `owner_basis` (no collision) also independently checks out. The remaining item
noted in the original 2026-07-26 review's Gaps section — `CustomInstructionProtectionState`'s own real
shape/variants/deserialize-branch logic is still not recovered beyond this one ICF-folded stub — remains true and
is correctly *not* claimed as recovered anywhere in the upgraded gate fields; it is out of scope for the
`accepted_substitute` this gate actually rests on (absence of a backend command **owner**, not full DTO-shape
recovery), so it does not block `gate_accepted=true` under `accepted_substitute` framing, consistent with
`GATE-SPEC.md` Unknown classification (`accepted_unknown`, non-blocking, already recorded as such by the original
review).

`reviews/AGENT.md` is still not present; `reviews/CROSS-REVIEW.md` is still not required by OUTPUT-SPEC with only
one reviewer file on record (this addendum is a second **pass** by the same reviewer role, not a second
**reviewer**, so the AGENT/CROSS-REVIEW two-file trigger in OUTPUT-SPEC §验收条件 is not met by this addendum
alone).
