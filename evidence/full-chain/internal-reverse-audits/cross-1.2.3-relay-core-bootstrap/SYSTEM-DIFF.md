# SYSTEM-DIFF.md — cross-1.2.3-relay-core-bootstrap

Platform/version differences observed while attempting the cross synthesis. This is a
diagnostic-only distillation pass; no new IDA evidence was produced, so this file only records
differences already visible in existing on-disk artifacts.

## Coverage-depth asymmetry (relay-core)

| aspect | macOS 1.2.3 | Windows 1.2.3 |
|---|---|---|
| Evidence type | Content-level presence check against `audits/macos-1.2.3-relay/`'s declared scope (file/function name diff, no new decompile) | Function-surface owner attribution via string/xref evidence (4 layers), zero decompile |
| Package status | `diagnostic-only` coverage audit (`audits/macos-1.2.3-relay-core/`) | No canonical package at all; raw-only (`raw/aimami/1.2.3/windows-x64/relay-core/`) |
| Submodule/cluster count | 32 `core::relay::*` submodules declared in scope (per `audits/macos-1.2.3-relay/manifest.json`); 15/19 legacy 1.0.9-taxonomy clusters matched | 29 submodules confirmed present via independent Windows string evidence; count not yet 1:1 reconciled against macOS's 32 |
| Function count | Not enumerated in this pass (name/dir matching only) | 177 unique functions enumerated (owner-map.jsonl) |
| Decompile status | Existing `audits/macos-1.2.3-relay/` baseline presumably has decompile for its own scope (not verified in this pass — out of scope) | Explicitly zero decompile calls this surface pass; some subset may already be named from the earlier `wf-aimami123-delta-20260721` full-decompile baseline (unverified overlap) |

## relay_web_executor / relay_web_tools (1.0.9 legacy clusters)

| aspect | macOS 1.2.3 | Windows 1.2.3 |
|---|---|---|
| Discoverability | Zero name/function matches anywhere in the macOS raw tree (whole-tree search, not scoped to `core/relay/`) | Not independently checked in this pass (out of scope; would require the same whole-tree search on Windows raw) |
| Possible explanations | (a) removed product feature — native web-search tool passthrough now only proven at the tool-schema level via `translator`'s `anthropic_web_search_tool_with_type`/`strip_anthropic_web_search_tools`/`remove_web_search_hint`, not execution; (b) present under an unrecognized name, not yet falsified via `func_query` | Unknown — not checked |

## transition_journal — unresolved discrepancy (flagged, not resolved)

| aspect | macOS 1.2.3 | Windows 1.2.3 |
|---|---|---|
| Raw directory presence | `raw/aimami/1.2.3/macos-arm64/core/relay/transition_journal/` exists (implied by the mac-only module list in the windows relay-core surface manifest) | `raw/aimami/1.2.3/windows-x64/transition_journal/` directory **exists** in the raw tree, but `raw/aimami/1.2.3/windows-x64/relay-core/manifest.json`'s `mac_only_no_windows_evidence_found_unknown` list **includes `transition_journal`**, implying zero Windows string-search hits |
| Interpretation | Not resolved this session. Possible explanations: (a) the `windows-x64/transition_journal/` directory belongs to a different module/owner scope than `core::relay::transition_journal` and the naming is coincidental; (b) the surface pass's `find_regex` search for that specific module name failed to match despite the directory's existence (e.g. searched for a Rust path string that doesn't appear verbatim); (c) the directory was populated by a different, later, or unrelated session. Flagged as `Unknown` — do not resolve by assumption. |

## bootstrap

| aspect | macOS 1.2.3 | Windows 1.2.3 |
|---|---|---|
| Package status | Real canonical bundle, `consumerStartReady` (4/4 leaves) | Does not exist; not attempted |
| `boot_spawn_threads` (1.0.9 analog) | Not found as standalone function among 89 triaged files; `blocks_start` (may be inside unopened `RelayManager::new`) | Unknown — not examined |
| `managed_state_registry` (1.0.9 analog) | Calls now inlined directly into `app_run_entry` rather than a separate function — genuine architecture difference, `accepted_unknown` | Unknown — not examined |
| A function literally named `bootstrap` was observed at `raw/aimami/1.2.3/windows-x64/manager/ida/pseudocode/bootstrap_0x14085a330.c` during this session's directory scan | N/A | Present but **not triaged** as the bootstrap-module leaf this session — flagged as a lead for the next producer session in `AI.md`, not asserted as confirmed |

## Platform Policy

macOS and Windows results above are independently sourced; none is inferred from the other. Where
a Windows-side check was simply not performed (not "performed and found absent"), this file says
so explicitly rather than leaving a misleading blank.
