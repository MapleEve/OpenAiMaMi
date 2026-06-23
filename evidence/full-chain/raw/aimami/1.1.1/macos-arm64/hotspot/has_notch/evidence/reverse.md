## SAME-DEPTH-CONFIRM — has_notch — 1.1.1 vs 1.0.9

session: <审计会话>
machine: <本地机器>
shard: mac-shard-3/6
produced_at: 2026-06-19

### 1.1.1 Call-Tree (Actual, depth=5 confirmed)

D0: commands::hotspot::has_notch@0x1005ee5f0 [size=0x354]
  D1: platform::screen::has_notch_screen@0x10041f670 [size=0x192]
    D2: NSProcessInfo::processInfo@0x100de86a0        [terminated: external_call(objc)]
    D2: NSProcessInfo::operatingSystemVersion@0x100de8730  [terminated: external_call(objc)]
    D2: NSScreen::screens@0x100de1f10                [terminated: external_call(objc)]
    D2: NSScreen::auxiliaryTopLeftArea@0x100de1e20   [terminated: external_call(objc)]
    D2: NSScreen::auxiliaryTopRightArea@0x100de1e70  [terminated: external_call(objc)]
    D2: objc2::CachedSel::fetch@0x100faba30
      D3: _objc_msgSend@0x100fbd0dc
        D4: (obj-c runtime dispatch)
          D5: NSScreen_auxiliary_internal            [terminated: external_call(objc_runtime)]
  D1: tauri_runtime_wry::send_user_message@0x100429560  [terminated: external_call(tauri_ipc)]
  D1: std::sync::mpmc::Receiver::recv@0x1002407a0   [terminated: external_call(channel)]

terminated_reason: external_call(NSScreen_objc) at D2/D5

### 1.0.9 Reference Evidence

owner_va_109: 0x100330730
symbol_109: codexmate_lib::commands::hotspot::has_notch
platform_leaf_109: 0x1003e1c64 codexmate_lib::platform::screen::has_notch_screen
gate_tier_109: readyToImplement / full_leaf_100

### Comparison

App-level callee set 1.0.9: {platform::screen::has_notch_screen, NSProcessInfo::processInfo, NSProcessInfo::operatingSystemVersion, NSScreen::screens, NSScreen::auxiliaryTopLeftArea, NSScreen::auxiliaryTopRightArea}
App-level callee set 1.1.1: identical set, same module paths, same objc2 binding pattern.

Structural: has_notch_screen function still the single platform leaf. Same NSScreen auxiliary area detection logic. tauri send_user_message + mpsc::recv response pattern unchanged. No new callee, no branch change, no string change.

Noise filtered: retain/release/autorelease objc ARC boilerplate, alloc sizing — all runtime noise.

### Verdict

**confirmed_same_depth5** — depth 5 reached; identical platform::screen delegation and ObjC callee set; no app-level delta.

dim6_inherited: 1.0.9 (readyToImplement=true, full_leaf_100=true for macOS — inherited for 1.1.1 mac leaf)
