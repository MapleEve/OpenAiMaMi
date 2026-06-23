## SAME-DEPTH-CONFIRM — hotspot_ready — 1.1.1 vs 1.0.9

session: <审计会话>
machine: <本地机器>
shard: mac-shard-3/6
produced_at: 2026-06-19

### 1.1.1 Call-Tree (Actual, depth=5 confirmed)

D0: commands::hotspot::hotspot_ready@0x1005ebe90 [size=0xb1]
  D1: tauri::Manager::get_webview_window@0x100365ad0  [terminated: external_call(tauri_state)]
  D1: commands::hotspot::apply_native_hotspot_properties@0x1005edcd0
    D2: WryWindowDispatcher::window_handle@0x10041a500  [terminated: external_call(wry)]
    D2: NSView::window@0x100de1710                    [terminated: external_call(objc)]
    D2: NSWindow::setLevel@0x100de3240                [terminated: external_call(objc)]
    D2: NSWindow::setCollectionBehavior@0x100de29c0   [terminated: external_call(objc)]
    D2: NSWindow::setHasShadow@0x100de22b0            [terminated: external_call(objc)]
    D2: NSWindow::setOpaque@0x100de3380               [terminated: external_call(objc)]
    D2: NSColor::clearColor@0x100de59c0               [terminated: external_call(objc)]
    D2: NSWindow::setBackgroundColor@0x100de2730      [terminated: external_call(objc)]
    D2: platform::screen::compute_hotspot_frame@0x10041f840
      D3: NSProcessInfo::processInfo@0x100de86a0      [terminated: external_call(objc)]
      D3: NSScreen::screens@0x100de1f10               [terminated: external_call(objc)]
      D3: NSScreen::auxiliaryTopLeftArea@0x100de1e20  [terminated: external_call(objc)]
      D3: NSScreen::auxiliaryTopRightArea@0x100de1e70 [terminated: external_call(objc)]
      D3: NSScreen::frame@0x100de1ec0                 [terminated: external_call(objc)]
      D3: CachedSel::fetch@0x100faba30
        D4: _objc_msgSend@0x100fbd0dc
          D5: (objc_runtime dispatch)                 [terminated: external_call(objc_runtime)]
    D2: NSWindow::setFrame_display@0x100de25a0        [terminated: external_call(objc)]
    D2: NSWindow::isVisible@0x100de32e0               [terminated: external_call(objc)]
    D2: NSWindow::orderFrontRegardless@0x100de2880    [terminated: external_call(objc)]
  D1: commands::hotspot::set_window_alpha@0x1005ebf80
    D2: WryWindowDispatcher::window_handle@0x10041a500  [terminated: external_call(wry)]
    D2: NSView::window@0x100de1710                    [terminated: external_call(objc)]
    D2: NSWindow::setAlphaValue@0x100de2400           [terminated: external_call(objc)]

terminated_reason: external_call(NSWindow_objc) at D2/D5

### 1.0.9 Reference Evidence

1.0.9 leaf: /raw/aimami/1.0.9/macos-arm64/system/hotspot_ready/
evidence.md confirms: call-tree depth=5 (apply_native_hotspot_properties → NSWindow ObjC calls), side_effects=NSWindow frame+level+alpha; readyToImplement gate open.
1.0.9 key callees: apply_native_hotspot_properties, set_window_alpha, compute_hotspot_frame, NSWindow::setLevel/setCollectionBehavior/setHasShadow/setOpaque/clearColor/setBackgroundColor/setFrame_display/orderFrontRegardless.

### Comparison

App-level callee set 1.0.9: {apply_native_hotspot_properties, set_window_alpha, compute_hotspot_frame, NSWindow::*, NSScreen::*, NSProcessInfo::*}
App-level callee set 1.1.1: identical. compute_hotspot_frame present with same NSScreen/NSProcessInfo callee chain. apply_native_hotspot_properties emits same NSWindow property setters. set_window_alpha emits NSWindow::setAlphaValue.

No callee addition/deletion at app-level. No new side-effect. No branch-logic change detected. NSWindow ObjC binding callee set matches symbol-by-symbol.

Noise filtered: ARC retain/release/autorelease boilerplate.

### Verdict

**confirmed_same_depth5** — depth 5 reached; identical NSWindow+NSScreen ObjC callee set; no app-level delta.

dim6_inherited: 1.0.9 (1.0.9 hotspot_ready macOS leaf readyToImplement gate accepted)
