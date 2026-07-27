# AiMaMi 1.2.3 macOS custom-instructions — live IDA re-verification (2026-07-26)

session: mac123-custominstr-gapclose-20260726142739
machine: Maple-M3-Max
ida_host: <host>:13337 (mac IDA MCP)
ida_live_gate:
  status: ok
  uptime_sec: 254017.732 (>30s)
  IDA decompiler_ready: true
  auto_analysis_ready: true
  module: AiMaMi
  idb_path: /Volumes/Work/internal-history//raw/binary/AiMaMi 1.2.3.app/Contents/MacOS/AiMaMi.i64

## Purpose

`audits/windows-1.2.3-custom-instructions` reached `full_leaf_100=true` / `readyToImplement=true` this round (session
`win-custom-instructions-distill-20260725`) via a *live* re-verification methodology: `func_query` per-command +
module-wide sweep, `find_regex` per-command + broad substring, `xrefs_to` on the anchor. The corresponding mac bundle
(`audits/macos-1.2.3-custom-instructions`, produced 2026-07-25 as `DISTILLED_PARTIAL_CHANGE`) only ran a static grep-based
migration check (`data/migration-check-evidence.json`) and flagged an unresolved backend literal-grep hit
(`CustomInstructionProtectionState`, ICF-folded at `0x100373380`) without live IDA follow-up. This produced the
two-platform asymmetry (win `readyToImplement=[5]`, mac `readyToImplement=[]`) noted in this backfill task.

This file records the live mac-side re-verification, mirroring the win methodology exactly, so the asymmetry's root
cause (an uninvestigated static grep hit vs. a live-confirmed absence) can be characterized on equal evidentiary
footing.

## Method — same 3-technique sequence as win session win-custom-instructions-distill-20260725

### 1. func_query per-command (name_regex, exact command names)

```
func_query name_regex=load_custom_instruction_state    -> 0 hits
func_query name_regex=preview_custom_instruction_apply -> 0 hits
func_query name_regex=apply_custom_instruction         -> 0 hits
func_query name_regex=clear_custom_instruction_block   -> 0 hits
func_query name_regex=rollback_custom_instruction      -> 0 hits
```

### 2. func_query module-wide sweep

```
func_query name_regex=custom_instruction (no command-name anchor, broad symbol sweep) -> 0 hits
```

Mac binary carries full Rust symbol demangling (`codexmate_lib::...`); a module-wide symbol-name sweep for
`custom_instruction` returning 0 hits is a stronger negative signal than win's stripped-binary string-pool sweep,
because it rules out any exported/demangled Rust item (function, impl, or command-registration table entry) whose
*name* contains the token, not just command dispatcher strings.

### 3. find_regex per-command (string pool)

```
find_regex pattern=load_custom_instruction_state    -> 0 hits
find_regex pattern=preview_custom_instruction_apply -> 0 hits
find_regex pattern=apply_custom_instruction         -> 0 hits
find_regex pattern=clear_custom_instruction_block   -> 0 hits
find_regex pattern=rollback_custom_instruction      -> 0 hits
```

### 4. find_regex broad substring

```
find_regex pattern=custom.instruct -> 1 hit
  addr: 0x1015ff5b9
  string: concatenated path-fragment blob containing "...auto-switch.plistconfig.tomlsqlite_homecustom-instructionsauth.jsonsession_index.jsonl..."
```

Same role/pattern as the 1.0.9 anchor (`0x100f3933a`) and the windows-1.2.3 anchor (`0x1417893f2`): a single
concatenated literal blob of relative path fragments (`custom-instructions`, `auth.json`, `session_index.jsonl`,
`archived_sessions`, `skills`, `registry.json`, ...), not a command-name string.

### 5. xrefs_to on the anchor (0x1015ff5b9)

```
xrefs_to 0x1015ff5b9 -> 1 xref, type=data
  referencing function: codexmate_lib::platform::paths::CodexPaths::state_db_score (0x10053fdf0, size 0x1290)
```

Sole reference is a **data** xref from `CodexPaths::state_db_score` — a path-scoring/matching helper in the
`platform::paths` module, not a Tauri command dispatcher or IPC router. This confirms the anchor is a data-only
path-fragment table consumed by filesystem path resolution, matching win's `custom-instructions` anchor
classification (data-only path blob, non-dispatcher) exactly.

## New: characterization of the previously-unresolved CustomInstructionProtectionState signal

The mac bundle's `data/migration-check-evidence.json` (2026-07-25) flagged this as the one non-zero backend literal
grep hit that blocked a straight RULE9 `migrated_no_behavior_diff` classification:

```
identifier: codexmate_lib::core::models::CustomInstructionProtectionState
kind: serde::Deserialize derive (FieldVisitor::expecting stub, ICF-folded)
address: 0x100373380
corroborated_elsewhere: false
independent_function_body_recovered: false
```

This round decompiled `0x100373380` live:

```c
// Alternative name is '...AuthMode...FieldVisitor...Visitor>::expecting::h80ce3f483b625189E'
// Alternative name is '...PlanType...FieldVisitor...Visitor>::expecting::h7cc6db4eb75d6e51E'
// Alternative name is '...CustomInstructionProtectionState...FieldVisitor...Visitor>::expecting::hbea758f61b40d75dE'
__int64 __fastcall _<TransitionTarget as ...>::deserialize::__FieldVisitor as Visitor>::expecting(a1, a2)
{
  return <core::fmt::Formatter as core::fmt::Write>::write_str(a2, &unk_1015F847B, 18);
  // writes literal "field identifier" — generic serde derive-macro Visitor::expecting() boilerplate
}
```

**recovery_attempts** (red line 13 anti-cheat log):

1. Tried: `decompile(0x100373380)` directly (no prior VA-correction needed; func_query for the mangled symbol itself
   was not attempted separately since the address was already known from the manifest's `evidence_file` pointer).
   Result: succeeded, full pseudocode recovered (not a `decompile failed` / truncation case).
2. Considered false-VA-pointer hypothesis (cookbook §4, "错误 VA 经 rodata xref 恢复"): not applicable here — the
   4 alternative names are all genuinely ICF-folded to the *same* machine code (a `serde::de::Visitor::expecting`
   trait-method body that unconditionally writes the literal string `"field identifier"` regardless of which
   concrete `FieldVisitor` type it belongs to). There is no "correct" single-owner VA to recover; all 4 source
   symbols legitimately compile to byte-identical code.
3. Considered caller-disambiguation (ida-deep-recovery.md §0 genuine_ceiling criterion): not needed for the
   command-ownership question — regardless of which of the 4 types "owns" this particular fold, the function body
   itself contains **zero type-specific or command-specific logic**. It is pure serde-derive-macro boilerplate for a
   deserialization error-message helper, not command dispatch, not IPC routing, not business logic.
4. Conclusion: this is **not** a case requiring `accepted_unknown`/`genuine_ceiling` treatment at all — the function
   is fully decompiled and its semantics are completely legible. It simply provides **zero evidentiary weight** for
   or against "custom-instructions has a backend command owner", because a serde `Deserialize` `FieldVisitor` stub
   existing for a DTO struct type (`CustomInstructionProtectionState`) is orthogonal to whether any Tauri command
   handler is registered for the 5 frontend `custom_instruction`/`custom-instructions` commands. Presence of a
   deserializable model type is not presence of a command owner — the two are independent facts, and this codebase
   legitimately has backend data model types with no wired frontend command (or vice versa) elsewhere too.

## Result

All 5 findings are now on equal live-verified footing with the win-1.2.3 conclusion:

- 5/5 commands: 0 hits via `func_query` (per-command + module-wide) and `find_regex` (per-command).
- Sole broad-substring hit is a confirmed data-only path-fragment blob (not a dispatcher), same role as the
  1.0.9/1.1.1/windows-1.2.3 anchors.
- The previously-open `CustomInstructionProtectionState` ICF-fold signal is now fully characterized: it is generic
  serde-derive boilerplate carrying no command-specific logic, and does not corroborate a backend command owner.

This supports the same conclusion win-1.2.3 reached (`same_platform_ida_backend_absence_for_frontend_orphan_command`),
independently confirmed on mac via the identical live methodology. This file is evidentiary input only; per the
non-destructive rule for this backfill round, `audits/macos-1.2.3-custom-instructions/gate-report.json` and
`manifest.json` (pre-existing, `full_leaf_100=false`) were **not** modified — upgrading them to mirror win's
`full_leaf_100=true` requires a canonical-producer write pass (or `EXPLICIT_OVERWRITE_CANONICAL` token) referencing
this evidence, which is out of scope for a non-destructive backfill.

source_binary: AiMaMi 1.2.3.app/Contents/MacOS/AiMaMi (mac IDA host idb: `AiMaMi.i64`, see server_health above)
