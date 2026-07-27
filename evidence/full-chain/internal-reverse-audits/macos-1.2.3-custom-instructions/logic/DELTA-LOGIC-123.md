# DELTA-LOGIC-123 — macOS AiMaMi 1.2.3 custom-instructions

Baseline: `internal-reverse/audits/macos-1.0.9-custom-instructions/` (1.0.9 macOS).
Target: 1.2.3 macOS arm64.
Class: `distilled_partial_change` (RULE9 diff basis non-empty — NOT a pure `migrated_no_behavior_diff`).
Reduce source: on-disk raw `.c` + frontend contract dumps + this bundle's `data/migration-check-evidence.json`. No live IDA re-run this pass.

This document is a **delta-logic** doc, not a FULL-CHAIN. A FULL-CHAIN is deliberately NOT written here because
the backend implementation chain (read → protection-state decision → write-back) is **not recoverable** on the 1.2.3
macOS binary from current evidence — see §3. Writing a synthetic chain would violate OUTPUT-SPEC (call-tree must reach
real fs/persistence/response leaves, or the row stays Unknown). What IS recoverable is the frontend wrapper surface
(§1) and one new backend model-type *name* signal (§2).

---

## 0. Command universe (5, unchanged names vs 1.0.9)

| # | command (Tauri name) | frontend wrapper | argKeys |
|---|---|---|---|
| 1 | `load_custom_instruction_state` | `loadCustomInstructionState` | — (zero-arity) |
| 2 | `preview_custom_instruction_apply` | `previewCustomInstructionApply` | `content` |
| 3 | `apply_custom_instruction` | `applyCustomInstruction` | `content`, `templateCode`, `templateTitle`, `source` |
| 4 | `clear_custom_instruction_block` | `clearCustomInstructionBlock` | — (zero-arity) |
| 5 | `rollback_custom_instruction` | `rollbackCustomInstruction` | `historyId` |

Source: `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl` (each command `kind=tauriInvokeWrapper`,
count=1) and `raw/aimami/1.2.3/macos-arm64/frontend/frontend-contract-report.md` (`sources: minified`).
All five wrapper names + argKeys are byte-identical to the 1.0.9 baseline.

---

## 1. Frontend chain (dim1) — RECOVERED, unchanged vs 1.0.9

The only fully-traced segment of the chain on macOS 1.2.3 is frontend → terminal `invoke`:

```
UI action (custom-instruction editor / apply / clear / rollback)
  → JS wrapper (e.g. applyCustomInstruction:e => re("apply_custom_instruction",
        {content:e.content, templateCode:e.templateCode, templateTitle:e.templateTitle, source:e.source}))
  → Tauri IPC callee `re(...)`  →  terminal invoke("<command>")
```

- `re` is the minified shared Tauri-invoke callee (same wrapper table that carries `delete_sessions`,
  `export_session_markdown`, `load_voice_workspace`, etc. — see the contiguous `ipc-contracts.jsonl` block).
- Argument assembly is explicit per command (table in §0). `apply` assembles a 4-field object from a template/content
  model; `preview` sends only `content`; `rollback` sends only `historyId`; `load` and `clear` are zero-arity.
- This is a real dim1 control-flow face (wrapper + argument object + terminal invoke), sourced from the minified
  bundle `assets/index-B40jKs17.js`. It is NOT promoted to a "guard/preflight" claim — none is visible in the
  minified contract dump; the concrete component/route owner and any UI guard remain minified-Unknown.

**Delta vs 1.0.9: none.** Frontend surface is stable.

---

## 2. Backend model-type signal (dim2 partial) — NEW in 1.2.3 evidence scope

The RULE9 migration precondition ("backend literal grep for `custom.instruction` == 0, same as 1.0.9") **fails**:
the 1.2.3 backend evidence has exactly **1** incidental hit.

- Evidence file:
  `raw/aimami/1.2.3/macos-arm64/core/relay/ida/pseudocode/__codexmate_lib_core_relay_transition_journal___impl_serde_core_de_Deserialize_for_codexmate_lib_core_relay_transition_j_0x100373380.c`
- Physical function `@ 0x100373380` is the `serde` `FieldVisitor::expecting()` stub for
  `transition_journal::TransitionTarget` — a one-liner:
  `write_str(a2, &unk_1015F847B, 18)` (writes an 18-byte "expecting" descriptor string).
- IDA **ICF** (identical-code folding) collapsed several distinct types' identical-body `expecting` stubs onto this
  one address. The `Alternative name` comments (lines 2-4) list the folded aliases:
  - `codexmate_lib::core::models::AuthMode`
  - `codexmate_lib::core::models::PlanType`
  - **`codexmate_lib::core::models::CustomInstructionProtectionState`**  ← the signal

### What this signal means (and does not)

- **Does** confirm: a Rust type `codexmate_lib::core::models::CustomInstructionProtectionState` that derives
  `serde::Deserialize` exists in the 1.2.3 macOS model layer. Given it ICF-folded with `AuthMode`/`PlanType`
  (both small enums), it is almost certainly itself a **small enum** (a protection-state discriminant), not a struct.
- **Does NOT** confirm a Tauri command owner for the 5 frontend commands. The same-platform command census
  (`raw/aimami/1.2.3/macos-arm64/backend-baseline/commands-baseline.md`, `grep custom` → 0) still shows **0**
  owners. The type existing in the model layer is orthogonal to any command being IPC-registered.
- **Does NOT** recover the type's real body. Because of ICF folding, the decompiled body at 0x100373380 is the shared
  generic `expecting` stub, not `CustomInstructionProtectionState`'s own `deserialize`/variant logic. Variant set,
  data layout, and any (de)serialization branch semantics are **unrecovered** from this single hit.

### Cross-version corroboration (independent, do-not-promote)

The 1.1.1 macOS delta audit (`internal-reverse/REVERSE-STATUS.md`, `clear_custom_instruction_block (8/76)` sub-entry)
independently located the **same** type at a **distinct real VA `0x1005615e0`** ("`CustomInstructionProtectionState`
model type exists at 0x1005615e0 (Deserialize impl)"). This raises confidence that the type genuinely exists in the
model layer (two independent versions, two different addresses) — but the 1.1.1 entry reaches the **same conclusion**
we do here: "no command handler is IPC-registered … treat as frontend-only state … do not rely on upstream backend
parity." So the corroboration strengthens the *type-existence* fact only; it does **not** upgrade command ownership.

Note: within the 1.2.3 audit's own evidence tree the identifier has exactly 1 hit and `corroborated_elsewhere=false`
(`manifest.json.new_backend_signal`). The 1.1.1 corroboration is a *cross-version* observation recorded here for the
next owner; it is not an in-version second hit and does not change the 1.2.3 `total_hits=1` count.

---

## 3. Read → protection-state decision → write-back chain — NOT RECOVERED (honest ceiling)

The requested chain shape (a `CustomInstructionProtectionState` value being **read**, a **protection-state decision**
taken, then a **write-back**) cannot be substantiated on macOS 1.2.3 from current evidence:

| chain stage | status on mac 1.2.3 | why |
|---|---|---|
| read of protection state | **Unknown / not recovered** | only the folded `expecting` stub is decompiled; no getter/loader body, no call site |
| protection-state decision (variant match) | **Unknown / not recovered** | variant set of the enum is not recovered (ICF stub only) |
| write-back / persistence terminal | **Unknown / not recovered** | no command owner → no traced path to fs/store/response leaves |
| `load`/`preview`/`apply`/`clear`/`rollback` backend handlers | **Absent** | commands-baseline census = 0 owners; re-confirmed absent for all 5 |

This is **not** a fake-wall bail: the absence of the 5 command owners is a positive finding (census + string-pool
sweeps return 0), and the model-type body is genuinely unrecoverable at this address because ICF folded it onto a
shared generic stub. A real recovery would require a fresh targeted pass: full symbol/export enumeration for
`codexmate_lib::core::models::CustomInstructionProtectionState` **use sites** (not this one stub), decompile its own
`deserialize`/constructor, and walk any reader/decider that consumes it. That is the follow-up recorded in §4, not
something this distilled-delta pass claims to have done.

---

## 4. Delta verdict & how to (re)implement

- **Migration status:** `migrated_no_behavior_diff` does **not** apply (diff basis non-empty). Class stays
  `distilled_partial_change`. The 1.0.9 core conclusion — *no upstream backend command owner for the 5 frontend
  wrappers* — carries over unchanged; the new element is the surfaced model-type name.
- **Implementation boundary (product decision, carried from 1.0.9):** the C5 custom-instructions chain is **live
  product / local behavior**, not upstream backend parity. There is no upstream mac backend handler to mirror. Any C5
  implementation of these five commands is first-party product code; do not gate it on upstream backend evidence.
- **If/when backend parity is prioritized:** open a dedicated census leaf (not this bundle) that:
  1. enumerates every use site / impl of `codexmate_lib::core::models::CustomInstructionProtectionState` via
     `func_query`/exports (not string-pool alone — ICF/monomorph hide it),
  2. decompiles its own `deserialize` + any constructor and recovers the variant set,
  3. confirms (again, live) whether any of the 5 commands acquires a backend owner in a later build.
  Until then this module stays `consumerStartReady` (frontend contract usable) but `forbiddenUntilReady` for
  strict/highest tiers — see `manifest.json.gate` and `gate-report.json`.

## Source references (env-relative to share root)

- `raw/aimami/1.2.3/macos-arm64/frontend/ipc-contracts.jsonl` (5 wrapper hits)
- `raw/aimami/1.2.3/macos-arm64/frontend/frontend-contract-report.md` (wrapper names + argKeys)
- `raw/aimami/1.2.3/macos-arm64/backend-baseline/commands-baseline.md` (0 command owners)
- `raw/aimami/1.2.3/macos-arm64/core/relay/ida/pseudocode/__codexmate_lib_core_relay_transition_journal___impl_serde_core_de_Deserialize_for_codexmate_lib_core_relay_transition_j_0x100373380.c` (ICF alias @ 0x100373380)
- `internal-reverse/audits/macos-1.2.3-custom-instructions/data/migration-check-evidence.json` (RULE9 check)
- `internal-reverse/REVERSE-STATUS.md` — 1.1.1 mac `clear_custom_instruction_block (8/76)` sub-entry (type @ 0x1005615e0, cross-version corroboration)
- Cross-platform (do-not-infer): `raw/aimami/1.2.3/windows-x64/custom-instructions/*/README.md` (win backend absence re-confirmed live, independent)
