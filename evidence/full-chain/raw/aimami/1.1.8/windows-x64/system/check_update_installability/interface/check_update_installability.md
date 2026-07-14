# Interface — check_update_installability (Windows x64, AiMaMi 1.1.8)

**Status**: accepted_unknown (no backend owner found on Windows this round — see `../evidence.md`)

## Command name
`check_update_installability`

## Arguments (frontend-confirmed)
- `argKeys`: `[]` (no arguments)
- Source: `raw/aimami/1.1.8/windows-x64/frontend/ipc-contracts.jsonl` line 25, wrapper `checkUpdateInstallability`, invoked as `te("check_update_installability")`.

## Response DTO
**Unknown on Windows** — no owner function was located, so the response shape cannot be read from
Windows-side decompiled code this round. On macOS (same 1.1.8 cycle), the confirmed owner is
`platform::update::check_update_installability` (mangled `__ZN13codexmate_lib8platform6update27check_update_installability17hfbf2899e51c9c860E`,
VA `0x1005cf430`), classified `same` (unchanged) vs the 1.0.9 mac baseline — but its own response DTO
was not re-extracted as part of this Windows-focused leaf (out of scope; would require reading the
mac-shard-1 bucket detail directly, not duplicated here to avoid asserting cross-platform DTO parity
without direct verification).

## Error envelope
Unknown on Windows (no owner located).

## Side effects
Unknown on Windows (no owner located). Given the command name, plausibly a read-only check (disk
space / permissions / current install path reachability) rather than a mutating operation, but this
is inference only — not confirmed against any decompiled body.

## Persistence / external calls
Unknown on Windows (no owner located).

## Cross-platform note
This command is real, registered, and present in both 1.0.9 and 1.1.8 Windows frontend surfaces
(unchanged argKeys), and has a real macOS backend owner in 1.1.8. Whether it has a genuine Windows
backend owner at all (vs. being an intentional platform-gated no-op or macOS-only real check with a
different, non-IPC mechanism on Windows, e.g. an NSIS installer-side pre-flight) is the open question
recorded in `evidence.md` Unknown §1 and §5.
