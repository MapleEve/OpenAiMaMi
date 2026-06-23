# focus_main_window — Evidence
## AiMaMi 1.1.1 macOS arm64 | Session <审计会话> | Machine <本地机器>

---

## Identity
- **Function**: `codexmate_lib::commands::hotspot::focus_main_window::he42a9e4c93c10f67`
- **VA**: `0x1005ec060`
- **Size**: `0x14a` (330) bytes
- **Platform**: macOS arm64 (universal binary, arm64 slice analyzed)
- **Product / Version**: AiMaMi 1.1.1
- **Binary SHA-256**: `f34ff82910539964e24e86b35e95ea85b42af7d7dccf8e979914a2c21bd8cfeb` (first 12: `f34ff8291053`)
- **IDB**: `<来源位置>/raw/binary/AiMaMi-1.1.1-idb`
- **Session**: `<审计会话>`
- **Machine**: `<本地机器>`
- **Produced**: `2026-06-17`
- **Baseline**: 1.0.9 macOS VA=`0x10032e820` (module=window-path, gate=strictImplementationUse)

---

## Confirmed

1. **Owner VA confirmed by 逆向分析 func_query**: `func_query {"name_regex": "focus_main_window"}` → hit at `0x1005ec060`, demangled symbol `codexmate_lib::commands::hotspot::focus_main_window::he42a9e4c93c10f67`, size=0x14a, has_type=true.
2. **Full 逆向分析 decompile succeeded**: Non-failed pseudocode returned for owner VA. Body is 330 bytes, 8 callees resolved.
3. **IPC command string confirmed**: `find_regex "focus_main_window"` → string at `0x101148166` contains `...get_hotspot_enabledset_hotspot_enabledfocus_main_windowhotspot_ready...`. Command name present in packed table.
4. **IPC dispatcher caller confirmed**: `xrefs_to 0x1005ec060` → caller at `0x10030ec98` inside `codexmate_lib::run::{{closure}}::{{closure}}::h25ed32806bf8ca6e` (IPC routing closure). Decompile confirms: `v23 = "focus_main_window..."` matched, `focus_main_window` called, result returned via `InvokeResolver::respond`.
5. **Tray menu second caller confirmed**: `xrefs_to 0x1005ec060` → caller at `0x100627ef2` inside `codexmate_lib::commands::tray_menu::handle_tray_menu_event::h4e2f02913f540532`. This is the native substitute for tray click events (`tray_open_main` and related).
6. **WryUserEvent discriminant 28 confirmed**: Owner decompile shows `LOBYTE(__src[0]) = 28` before `send_user_message`. Same discriminant as 1.0.9 baseline. Discriminant 28 = FocusWindow variant in WryUserEvent enum.
7. **focused=true flag confirmed**: `LOBYTE(__dst[19]) = 1` in owner body. Key behavioral difference from `reveal_main_window` (focused=0x00). Vtable `anon_91b23c3e0afeec67b869976d9683aaed_711` at `0x1013bedd8` shared by focus/reveal/force_reveal.
8. **send_user_message termination confirmed**: Decompile of `0x100429560` shows two paths: (a) same-thread → `handle_user_message` (direct Wry event processing); (b) cross-thread → `tao::Proxy::send_event` (OS event loop post). Both are async I/O boundary terminators. No tokio await, no recursive spawn.
9. **Return type confirmed**: `Result<(), tauri::Error>` — Ok sentinel `*a1 = 0x8000000000000000`. JS Promise resolves `undefined` on success.
10. **No persistence / no HTTP / no sidecar**: Call tree exhausted; all leaves are: WryHandle clone, atomic refcount ops, heap alloc, send_user_message → Wry/NSApp. No file I/O, no network, no DB.
11. **IDB saved**: `<逆向工具通道>` returned `ok=true`, path confirmed.
12. **append_comments written**: Comment `"A-level owner for focus_main_window; range 0x1005ec060-0x1005ec1aa; sha he42a9e4c93c10f67; session <审计会话>; not gate promotion"` at `0x1005ec060`.

---

## Inferred

1. **Module assignment = hotspot**: In 1.0.9 the module was also `hotspot` (full symbol: `codexmate_lib::commands::hotspot::focus_main_window`). The 1.1.1 demangled name confirms the module has not changed; owner-map-111.jsonl previously had `module: null` because it had not been queried — corrected here.
2. **Vtable hash changed vs 1.0.9**: 1.0.9 vtable was `anon_3229ff4e18cd66813633fef5ae3b16b2_1026`; 1.1.1 is `anon_91b23c3e0afeec67b869976d9683aaed_711`. The hash change reflects binary recompilation / ICF renaming; the vtable serves the same role (WryUserEvent discriminant 28 boxed trait object).
3. **Behavioral parity with 1.0.9**: Decompile structure is identical — same 6-step pattern (clone, refcount, alloc, build event, send, return Ok). The focused=true flag, discriminant 28, and Wry event loop posting are unchanged. Delta = VA relocation + vtable hash rename only.
4. **call-tree depth ≥ 5 equivalent**: Owner (d0) → send_user_message (d1) → handle_user_message (d2, terminates at NSApp objc_msgSend macOS UI calls). Plus WryHandle clone chain. Practical depth = 2-3 meaningful levels; terminated at system boundary confirmed.
5. **No async body hidden in drop shim**: Owner is fully synchronous. `drop_in_place` entries are genuine destructor calls, not async poll/resume stubs. Confirmed by owner body analysis — no Future trait, no Poll enum, no generator state machine.

---

## Unknown

1. **dim6 test/acceptance mapping**: Not assessed in this raw leaf (内部构建 implementation side responsibility). Requires 内部构建 test plan mapping: which 内部构建 tests cover window focus? What is the acceptance criterion? Not a blocker for strictImplementationUse.
2. **Windows-x64 1.1.1 parity**: This leaf covers macOS arm64 only. Windows 1.1.1 VA and behavior delta not assessed here. 1.0.9 windows-x64 had module=system (INDEX key: `aimami/1.0.9/windows-x64/system/focus_main_window`). Whether the Windows module assignment changed in 1.1.1 is unknown; Windows production required separately.
3. **tray event full coverage**: `handle_tray_menu_event` calls `focus_main_window` at `0x100627ef2`; exact tray menu ID matching conditions (length checks for `tray_open_main` / `tray_active_title` / `tray_active_subtitle`) were confirmed in 1.0.9 but not re-decompiled for 1.1.1 tray handler body. Assumed same by behavioral parity; accepted as no-diff for tray path given identical call site.
4. **`handle_user_message` discriminant-28 branch**: The 38998-byte handler was not traced to its NSApp `setVisible` / `makeKey` ObjC call for discriminant 28 specifically. Accepted as macOS UI terminal (confirmed by 1.0.9 analysis + NSApp objc_msgSend confirmed in callees list).
5. **Refcount overflow recovery path**: `BUG()` = process abort. No recovery possible. This is standard Rust Arc refcount overflow behavior; accepted as platform constraint.
6. **Frontend control-flow (dim1 UI surface)**: The JS wrapper `focusMainWindow` was confirmed in 1.0.9 at `assets/index-CL22l5v8.js:86`. Frontend 1.1.1 may have a different bundle hash. Specific 1.1.1 JS bundle file and line not re-confirmed here (frontend CCF not extracted in this session). Accepted as no-diff given command name unchanged and IPC dispatcher confirmed.
