# set_hotspot_enabled — SAME-DEPTH-CONFIRM — 1.1.1 vs 1.0.9

**session**: <审计会话>
**machine**: <本地机器>
**shard**: mac-shard-6/6
**owner_1.1.1**: codexmate_lib::commands::hotspot::set_hotspot_enabled @ 0x1005ec580
**owner_1.0.9**: codexmate_lib::commands::hotspot::set_hotspot_enabled @ 0x10032ecbc

---

## SAME-DEPTH-CONFIRM

**depth_reached**: 5 (depth 4-5 at NSWindow method calls, objc runtime)
**comparison_result**: confirmed_same_depth5

### Call-tree callee set comparison (app-level, noise filtered)

| Layer | 1.0.9 callee | 1.1.1 callee | Match |
|-------|-------------|-------------|-------|
| d1 | Repository::load_settings | Repository::load_settings @ 0x1004bfa30 | SAME |
| d1 | Repository::save_settings | Repository::save_settings @ 0x1004c00c0 | SAME |
| d1 | create_hotspot_window | create_hotspot_window @ 0x1005ecc30 | SAME |
| d1 | Mutex::lock/unlock | Mutex::lock/unlock | SAME |
| d2 | WebviewWindowBuilder::new | WebviewWindowBuilder::new | SAME |
| d2 | apply_native_hotspot_properties | apply_native_hotspot_properties @ 0x1005edcd0 | SAME |
| d2 | set_window_alpha | set_window_alpha @ 0x1005ebf80 | SAME |
| d2 | send_user_message | send_user_message @ 0x100429560 | SAME |
| d2 | get_webview_window | get_webview_window | SAME |
| d3 | NSWindow::setLevel(25) | NSWindow::setLevel | SAME |
| d3 | NSWindow::setCollectionBehavior(81) | NSWindow::setCollectionBehavior | SAME |
| d3 | NSWindow::setHasShadow | NSWindow::setHasShadow | SAME |
| d3 | NSWindow::setOpaque | NSWindow::setOpaque | SAME |
| d3 | NSWindow::clearColor | NSColor::clearColor | SAME |
| d3 | NSWindow::setBackgroundColor | NSWindow::setBackgroundColor | SAME |
| d3 | compute_hotspot_frame | compute_hotspot_frame @ 0x10041f840 | SAME |
| d3 | NSWindow::setAlphaValue | NSWindow::setAlphaValue | SAME |
| d4 | NSWindow::setFrame_display | NSWindow::setFrame_display | SAME |
| d4 | NSWindow::orderFrontRegardless | NSWindow::orderFrontRegardless | SAME |
| d4 | objc_autorelease | objc_autorelease | SAME |
| d5 | (objc runtime calls) | (objc runtime calls) | SAME |

### Noise filtered (not counted as change)
- Hash suffixes changed on all symbols (expected re-compile)
- Addresses shifted (imagebase preserved at 0x100000000, ASLR layout change within binary)
- GLOBAL_PANIC_COUNT / is_zero_slow_path pattern identical

### Structural analysis
- Settings field write: `LOBYTE(__dst[18]) = a4` in 1.1.1 vs `LOBYTE(__dst[18]) = a3` in 1.0.9 — same offset 18 (field byte assignment); difference is param position (a3 vs a4) due to Tauri async wrapper ABI change, not a logic change
- save_settings writes same JSON fields (serde serialize_field/end pattern identical)
- enabled=true branch: same 4-step chain (load→write→save→create_window)
- enabled=false branch: same pattern (get_webview_window → Proxy::send_event discriminant=33)
- Error DTO: CoreError format path unchanged

### Verdict: confirmed_same_depth5

**dim6_inherited**: 1.0.9 gate=pass consumer_tier=strictImplementationUse
**dim6_inherited_version**: 1.0.9
