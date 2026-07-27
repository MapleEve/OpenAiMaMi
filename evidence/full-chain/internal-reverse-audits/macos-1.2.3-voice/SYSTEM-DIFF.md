# System Diff — AiMaMi 1.2.3 voice (macOS-arm64, vs 1.2.2)

## Platform Artifacts

- Binary: macOS arm64 Mach-O. This distillation pass did not independently re-derive a source_binary_sha256 for the voice-domain files -- voice-baseline.md and voice-frontend.md do not carry that field in a form visible to this pass (see manifest.json `binary.note`). Byte-level provenance is via the raw `.c` file paths themselves (pointers/evidence-paths.md), not a restated hash here.
- Windows sibling: raw evidence exists (39 files) but no `windows-1.2.3-voice/SYSTEM-DIFF.md` has been produced.

## Frontend IPC / Control-flow

- 39 voice-domain commands identified: 37 whose `command` field contains `voice`, plus 2 (`request_accessibility_permission`, `open_macos_privacy_pane`) confirmed invoked directly from VoicePage per voice-frontend.md's interaction table (L852, L1815) despite not having "voice" in the command name.
- No cross-version (1.2.2 vs 1.2.3) frontend IPC command diff was run by this distillation for the voice domain specifically; the relay package's sibling analysis recorded the app-wide 1.2.2->1.2.3 total command count as 129->131 (+2, both autostart-related, unrelated to voice) -- this distillation did not re-derive that number independently for voice-domain commands, it is cited from the relay package's SYSTEM-DIFF.md for cross-reference only.

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf

- macOS voice backend: 212 real on-disk `.c` files (9 core submodules + 25 direct serde/trait-impl glue files under `core/voice/ida/pseudocode` + 7 platform/commands directories), 0 truncated stubs (independently re-verified this pass across the full 212-file superset via TRUNCATED/DECOMPILE-FAILED/chars-total marker grep -- wider scan than voice-baseline.md's own stated 182-file coverage).
- Voice-specific 1.2.3 NEW-delta (per voice-baseline.md's own per-function header-comment scan, 4 of 182 explicitly-scanned functions; the 30 files this distillation additionally found were NOT covered by that delta scan, their delta status is Unknown):
  - `core::voice::runtime::overlay::apply_native_overlay_properties` (0x1006f8be0) — native NSWindow property application for the recording HUD overlay (level/collectionBehavior/hidesOnDeactivate/shadow/opaque/backgroundColor via objc2).
  - `core::voice::runtime::overlay::apply_native_search_overlay_properties` (0x1006f9020) — same for the voice-search-result overlay window.
  - `core::voice::aliyun_asr::AliyunAsrSession::connect::{closure}` × 2 (0x100285c80 / 0x10045f2b0, ~91KB/93KB full decompiled bodies) — voice-baseline.md's own assessment is that this is *likely* a compiler inlining/monomorphization boundary shift for the same async state machine between 1.2.2 and 1.2.3, not a confirmed business-logic rewrite; this distillation did not independently cross-verify against a 1.2.2 baseline.
- Backend decompile coverage: 212 real files macOS-side, 0 truncated stubs. See `manifest.json`/`gate-report.json`.

## Interface / Error / Boundary

Not independently extracted for 1.2.3 voice (dim4 gap, see gate-report.json). Known destructive/sensitive side-effects called out narratively (not a formal DTO/error-envelope extraction):
- `terminate_voice_sidecar`: graceful-shutdown-then-SIGKILL-after-1.5s-timeout child process termination.
- `cleanup_stale_sidecars`: startup-time batch `kill -9` of orphaned voice sidecar processes matched by command-line heuristics.
- `inject_text` (platform::text_injection): temporarily overwrites the system clipboard (backs up existing content first, restores after paste-simulation).
- `read_workspace_file` (core::voice::workspace): renames the existing workspace JSON to a timestamped backup file before rewriting (not a delete -- the "backup before write" red line's concrete implementation for this module).
- LLM/ASR provider API keys are stored in the macOS Keychain via the `keyring` crate (not plaintext files) — contrast this with the relay module's plaintext key-file storage pattern documented in `polaris-relay-key-plaintext-no-system` memory; the two modules use different credential-storage strategies upstream.

## Gate Leaf

consumerStartReady 39/39; strictImplementationUse 0/39; readyToImplement 0/39. See gate-report.json.

## Plugin / Capability

Not in scope for this voice-only package.

## OTA / Package

Not evaluated this pass (out of scope for voice module).

## Resource / Binary Surface

- macOS: `commands/voice` (23 files) + `commands/voice_runtime` (9 files) = 32 command-layer wrapper files backing 39 upstream commands (7 commands resolve directly to a `core::voice::runtime`/`core::voice::runtime::overlay`/`platform::voice_trigger_macos` function by name-stem rather than having a dedicated `commands/` wrapper file with an identical stem — see logic/REGISTRATION-TABLE-1.2.3.md for the exact per-command resolution).
- Windows: 39 files, thin and unsynthesized (2 in `commands/voice`, 29 `voice_*`-named files scattered directly in the shared `commands/ida/pseudocode` directory rather than a dedicated `commands/voice` subdirectory, 4 in `voice_trigger_windows`, 1 in `runtime/ida/pseudocode` (`show_voice_overlay`), 3 in `codexmate_lib/ida/pseudocode` (`generate_voice_prompt`/`capture_voice_trigger_key`/`inject_voice_text`)).

## Unknown

- `core::voice::pipeline`/`core::voice::traits` module not narrated by voice-baseline.md despite raw evidence existing (see README.md Unknown item 1): accepted_unknown (tool-limitation).
- Windows voice module depth: Unknown, not extrapolated from macOS (dim5).
- 2 frontend callback props (reprocessHistory/quickCorrection) unresolved command identity.
- Interface/DTO and test/acceptance mapping: not extracted for 1.2.3 voice (dim4/dim6 gaps).
- Voice-domain delta status for the 30 files this distillation found beyond voice-baseline.md's own 182-file NEW-delta scan: Unknown (neither confirmed same-set nor confirmed NEW-delta).
