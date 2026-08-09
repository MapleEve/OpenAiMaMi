# Full Chain — windows-1.2.3-tray

Backend-owned, native-callback-only module (no frontend `invoke()` surface; see `SYSTEM-DIFF.md`). This document walks the 3 covered targets' pseudocode in full; the 7 uncovered targets are not described here (see `pointers/evidence-paths.md` and `data/task-plan.json` for their gap status).

## 1. `load_tray_template_icon` (0x1401a26f0, `codexmate_lib::load_tray_template_icon`, pre-existing evidence, cross-platform string-signature matched to mac's root-namespace function of the same name)

Large function (~789 lines pseudocode, non-truncated, brace-balanced). Reads a config/state struct at `a2+352`, does a string-keyed lookup (`sub_14065B290` against a constant string table), then on the success path:

- Builds/clones several `Cow`/`String`-shaped structures (`sub_141684120` = generic memcpy/clone helper reused throughout this module).
- Reference-counts a set of Arc/Rc-shaped fields via `_InterlockedIncrement64` (Rust `Arc::clone` codegen pattern), with `__fastfail(7u)` on overflow (Rust's `abort_on_overflow` guard for refcount saturation).
- Calls **`create_bootstrap_tray_menu(v171, v2)`** directly (named call, not a stripped address) — i.e. this function is on the path that constructs the initial/bootstrap tray menu when the icon is (re)loaded.
- On the `create_bootstrap_tray_menu` success branch (`v171[0] != -1`), returns via `sub_14149C970` (Result-Ok-wrap-and-return helper reused elsewhere).
- On failure, falls through to a longer error-path block that spawns a thread (`sub_1404E76D0`/`sub_1404E9C10` family, guarded by an "Failed to spawn t..." truncated literal `aFailedToSpawnT_8`) named via a literal `qmemcpy(v81, "aimami-router-bootstrap", 23)` — this is the **router-bootstrap background thread name**, i.e. the tray-icon-load path is also where AiMaMi's router/relay bootstrap thread gets spawned and named on Windows (cross-module coupling with the relay/router subsystem; see `../windows-1.2.3-relay/` and `../windows-1.2.3-relay-core/` for that thread's own behavior, not expanded here).

## 2. `create_bootstrap_tray_menu` (0x1403f2350, `codexmate_lib::commands::tray_menu::create_bootstrap_tray_menu`, decompiled this session, exact-name match, size 0xad7)

Complete, brace-balanced (13/13), non-truncated. Builds a **4-item bootstrap menu** by repeatedly calling a string-intern helper (`sub_140A7D450`, args include a length-prefixed literal address + a length-prefixed id-string address) followed by a menu-item constructor (`sub_141230630`) and an error-unwrap-or-panic helper (`sub_1416C3060` with literal `aADisplayImplem_1`, len 55 — a `Display` panic message, consistent with a `.expect("...")` on the menu-item build `Result`). The 4 menu items built, by literal id constants observed:

1. `aTrayBootstrapH` (`"tray-bootstrap-h"`? — 21-byte id literal region referenced) — header/title placeholder item.
2. `aTrayBootstrapT` (20-byte literal) — second placeholder item (subtitle/status text).
3. `aTrayBootstrapS` (23-byte literal) — third placeholder item.
4. `aTrayOpenMain` (14-byte literal, `"tray-open-main"` per the literal length and naming convention shared with mac) — "open main window" action item, wired via `sub_1402096D0`/`sub_1402097E0` (menu-item-with-handler builder pattern reused for the quit item below).
5. `aTrayQuit` (9-byte literal, `"tray-quit"`) — quit action item.

The function assembles these into a `Vec`-shaped menu-item list (`sub_140A7D450`... `sub_1402080F0` submenu/root-menu builder), then returns the constructed menu object (or an error triple on any build-step failure, propagated via the same `sub_141230630`/`sub_1416C3060` unwrap pattern at each step). This is architecturally the **placeholder/loading-state menu** shown before the full account/quota-aware menu (the mac sibling's `create_tray_menu`/`create_tray_menu_from_snapshot`, not yet found on windows this session) is available — same semantic role as macOS's `create_bootstrap_tray_menu`.

## 3. `handle_tray_menu_event` (0x1403f1850, `codexmate_lib::commands::tray_menu::handle_tray_menu_event`, decompiled this session, exact-name match, size 0x874)

Complete, brace-balanced (30/30), non-truncated. Dispatches on `a3` (a numeric id, `switch` over `9`/`0xE`/`0x11`/`0x14`/`0x17`/`0x18`/default), each case re-verifying the menu-item id via either a direct 64-bit XOR-against-constant string compare (short ids) or SSE `_mm_cmpeq_epi8`/`_mm_movemask_epi8` 128-bit compares (longer ids) against string literals stored as `xmmword_*`/`asc_*` constants — this is Hex-Rays' rendering of the Rust compiler's short-string-equality codegen, not a custom obfuscation layer.

- `case 9`: matches `"tray-quit"` (byte pattern `0x6975715F79617274` = `"tray_qui"` little-endian, consistent with a 9-byte id) → calls **`quit_keeping_router(a1)`** directly (named function, not expanded in this package — cross-reference a router/relay-shutdown-coordination package for its body).
- `case 0xE` / `0x11` / `0x14` / `0x17` / `0x18` and the shared `LABEL_14`/`LABEL_21` target: all funnel into a shared block that calls `sub_1401C50B0` (snapshot/state-clone helper reused across the codebase), increments two Arc-shaped refcounts, then calls `sub_14096F5D0` and conditionally an error-propagation helper (`sub_140001660`). This looks like the **"open main window" / focus-request** path (mirroring mac's cross-call into `hotspot::focus_main_window`, per that package's pointer note — not independently confirmed here, recorded as a plausible parallel).
- `default` / fallthrough to `LABEL_15`: re-checks against `"tray-acc"`-prefixed 13-byte-plus ids (`0x6363615F79617274` = `"tray_acc"`) — i.e. an **account-switch menu item family** (`"tray-account:<key>"`-shaped, matching the mac sibling's `tray_account:` prefix literal noted in its own package). On match, this branch does: increment 2 Arc refcounts, heap-allocate a key-length buffer, copy the account-key suffix out of the id string, then run through a `std::sync::Once`/poison-guard pattern (`sub_1416C2250`/`_InterlockedCompareExchange8`/`WakeByAddressSingle` — classic Rust `OnceCell`/`Mutex` poison-check codegen) before calling `load_local_state_synced` and comparing the parsed key against a stored account-key table (`v61`/`v60+208` array walk, 352-byte stride per entry). On a match it builds a formatted string (`sub_1401B34F0` + `sub_140001B60`, format-args pattern) — this is the **account-switch dispatch path**, structurally parallel to the mac sibling's unresolved "confirmation-dialog-to-switch-closure wiring" Unknown; **this session did not trace whether a confirmation dialog is shown before the switch actually fires** (same class of Unknown as the mac package, recorded here rather than assumed either way).
- `a3 < 0xD` (and not matched above): falls through and returns without action (no-op for unrecognized/lower ids).

## Uncovered targets (not described — see gap tracking)

`create_tray_menu`, `create_tray_menu_from_snapshot`, `append_codex_router_section`, `refresh_tray_menu`, `refresh_tray_menu_with_snapshot`, `quota_text`, `update_tray_recording_state` — no windows-x64 1.2.3 owner resolved this session. See `pointers/evidence-paths.md` §未找到 and `data/task-plan.json.gap_summary` for the honest gap accounting, and `manifest.json.known_residuals` for the 2 unresolved stripped-function candidates (`sub_14025D570`, `sub_1407190E0`) that may or may not overlap this list.
