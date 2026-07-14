# Interface / DTO — load_relay_state (AiMaMi 1.1.8, macOS arm64/universal, x86_64 IDB slice)

session: <审计会话> — owner for load_relay_state; not gate promotion

## Command

- **Tauri command name**: `load_relay_state`
- **Owner symbol**: `codexmate_lib::commands::relay::load_relay_state::h32179ca79633a42f`
- **Owner VA**: `0x1004c3c20`

## Request (argKeys)

- **argKeys**: `[]` — confirmed byte-exact via `raw/aimami/1.1.8/macos-arm64/frontend/ipc-contracts.jsonl`
  (`{"argKeys": [], "argObject": null, "command": "load_relay_state", "params": "()", "wrapper":
  "loadState"}`). No parameters, matches the 1.0.9 baseline's `argKeys: none`. Frontend caller is
  the relay store's `ln.loadState = () => St("load_relay_state")` wrapper.

## Response payload

Backend cross-check: `codexmate_lib::core::relay::storage::save::h4619a27159e38d20` (persistence
serializer for the same underlying state struct family) manually builds an 8-key JSON map via
`serde_core::ser::SerializeMap::serialize_entry` calls. Field byte-lengths and struct offsets
recovered directly from the decompile; JSON key text recovered for 2 of 8 (see Confirmed below),
remaining 6 left as Unknown (see Unknown below) — `func_query` on the anon rodata symbol names
did not resolve a VA this pass, so the literal bytes were not independently re-read.

| # | struct offset | byte length | type (from decompile) | JSON key | status |
|---|---|---|---|---|---|
| 1 | +336 | 13 | DWORD (i32/u32) | `schemaVersion` | Confirmed (length+type match; cross-referenced against `sanitize_for_export`'s own DWORD read at the same offset) |
| 2 | +0   | 9  | Vec<T> (24B fat ptr) | `providers` | Confirmed (length match vs 1.0.9 baseline's documented `providers: Vec<RelayProvider>`) |
| 3 | +24  | 11 | Vec<T> (24B fat ptr) | Unknown | Open — length/offset known, text not recovered |
| 4 | +48  | 5  | String (24B) | Unknown | Open |
| 5 | +340 | 18 | bool (1B) | `codexRouterEnabled` | Confirmed (length match vs sibling command `set_codex_router_enabled` documented in the 1.0.9 relay consumer-bundle-closure command list) |
| 6 | +341 | 24 | bool (1B) | `blockOfficialPassthrough` | Confirmed (length match vs sibling command `set_block_official_passthrough`) |
| 7 | +128 | 16 | String (24B) | Unknown | Open |
| 8 | +152 | (not independently re-captured this pass — see pseudocode/0004 note) | String (24B) | Unknown | Open |
| — | +96  | (Option-guarded, no direct serialize_entry captured this pass) | Option\<String\> (24B) | `active` (baseline-carried) | Inferred — matches 1.0.9 baseline's `active: Option<String>` field by shape/position, not independently re-derived this pass |
| — | +176 | (Option-guarded, `CodexRouteDiagnostic` clone) | Option\<CodexRouteDiagnostic\> (variable) | **NEW field, not in 1.0.9 baseline** | Confirmed present (clone call + memcpy only fire when discriminant != sentinel); exact JSON key text not recovered |

**apiKey scrub (security-relevant, carried over from 1.0.9)**: within `sanitize_for_export`,
every entry of the `providers` Vec (now 232 bytes/entry, up from 208 bytes/entry in 1.0.9) has
the QWORD at entry-offset `+88` zeroed before the struct is returned to the IPC layer. This is
the same relative field position as the 1.0.9 baseline's documented `apiKey` scrub — the
mechanism moved from an inline loop in the owner to this shared function, but the scrubbed byte
offset within each entry did not change.

## Error envelope

- Discriminant `0x8000000000000000LL` = Err (same convention as 1.0.9 baseline).
- Populated when `RelayManager::ensure_proxy_started` fails (TCP probe + optional spawn +
  persistence-write path all failed); formatted via
  `CoreError::fmt` (`0x100500e10`) then wrapped by the owner into the IPC error slot.
- `unwrap_failed` (`0x101130130`) fires only if `Display::fmt` itself errors — exceptional,
  matches the 1.0.9 baseline's own annotation that this "should not happen in production."

## Side effects (delta-relevant)

1. **Proxy auto-start** (`RelayManager::ensure_proxy_started`, unchanged position/order vs 1.0.9):
   TCP liveness probe on `127.0.0.1:<port>` (300ms timeout, 50ms retry backoff); on failure,
   spawns the proxy via `tokio::runtime::Runtime::block_on`; on success writes state via
   `storage::save` → `atomic_write::write_atomic` (temp-file + fsync + atomic rename into
   `relay.json`, byte-identical mechanism to the 1.0.9 baseline's `atomic_write::write_atomic`).
2. **Sensitive-field scrub, NOW CENTRALIZED** (delta): 1.0.9 performed the `apiKey` zero-out
   inline in the owner via a hand-written vectorized loop over 208-byte `RelayProvider` entries.
   1.1.8 removes that inline loop from the owner entirely and instead calls the new shared
   `codexmate_lib::core::relay::storage::sanitize_for_export` (`0x1004b14b0`), which (a)
   field-by-field clones the entire `RelayState` struct (now including the new
   `Option<CodexRouteDiagnostic>` field at +176) and (b) performs the equivalent zero-out at
   entry-offset +88 over the (now 232-byte) `RelayProvider` entries. This same function is the
   4th confirmed call site for `sanitize_for_export` found this delta round (also used by
   `activate_relay_provider`, `deactivate_relay_provider`, `diagnose_codex_router`).
3. **No config.toml mutation** on this command path (same as 1.0.9 baseline).

## Platform gate

- **macOS (arm64/universal app, x86_64 IDB slice analyzed)**: CONFIRMED — full call-tree traced
  to the `atomic_write::write_atomic` fs-write leaf (0 truncation on owner, ensure_proxy_started,
  sanitize_for_export, storage::save, and atomic_write — all 5 pseudocode files in this leaf are
  complete decompiles, not excerpts, except pseudocode/0002 which is a documented annotated
  excerpt of a 19355-byte function for archive-size reasons only, not a truncation/bail).
- **Windows**: not analyzed this pass — no macOS-to-Windows inference performed (per red line 8).

## Gate assessment

| Dimension | Status |
|---|---|
| frontend CCF (argKeys cross-check) | Confirmed — `argKeys=[]` matches `ipc-contracts.jsonl` |
| backend owner + pseudocode | Confirmed — 0-truncation full decompile |
| call-tree to impl leaf | Confirmed — depth4 via persistence_commit terminus (`atomic_write::write_atomic`'s own callees), plus 5 additional independent terminated branches (external_call, response_serialize x3, error_return) |
| interface/DTO/error | Partial — argKeys/error-discriminant/apiKey-scrub confirmed; 6 of 8 response JSON field-name strings left Unknown (byte length + struct offset known) |
| delta vs 1.0.9 | Confirmed — sanitize_for_export centralization + RelayProvider entry-size growth (208B→232B) + new Option\<CodexRouteDiagnostic\> field |
| platform gate | macOS confirmed; Windows Unknown (not analyzed this pass) |
| test/acceptance mapping | Missing (unchanged from 1.0.9 baseline gap) |

**Tier**: `strictImplementationUse_candidate` (macOS only) — blocked from `readyToImplement` by
the 6 open response-field-name Unknowns and the missing Windows-side confirmation for this
specific 1.1.8 delta round.
