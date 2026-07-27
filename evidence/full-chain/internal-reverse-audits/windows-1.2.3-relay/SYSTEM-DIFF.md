# System Diff — AiMaMi 1.2.3 relay (Windows-x64, vs macOS-arm64 same version)

This file documents platform differences (Windows vs macOS at 1.2.3), not a version-over-version diff (see ../macos-1.2.3-relay/SYSTEM-DIFF.md for the 1.2.2→1.2.3 version delta, which is version-vs-version and largely platform-agnostic at the changelog-item level).

## Platform Artifacts

- Binary: PE AMD64, `windows-x64`, sha256 `aeccccd78e470ad6cfdb52d72af624b34ce17a4a0b04e7596b32583eaf972396`, IDB `AiMaM 1.2.3 win64.exe.i64` (strip, no symbols).
- macOS sibling: Mach-O arm64, sha256 `e3f2fec7d7cd32c8a7a650ec563577b8c74516aed270c1230a5b11296942114d`, symbolized (has real function names).

## Frontend IPC / Control-flow

N/A for this package -- frontend is a cross-platform JS bundle, evidence lives in ../macos-1.2.3-relay/. No Windows-specific frontend divergence found or expected (Tauri webview bundle is shared).

## Backend Commands / Control-flow / Pseudocode / Call-tree / Leaf

- **Module directory naming differs**: Windows top-level relay-core dirs include `managed_blocks`/`mod` naming not present as independent macOS directories; macOS's equivalent `managed_blocks` logic is folded into `codex_writer` (19 files) -- `local_outtake` classification (structural difference, not missing evidence).
- **4 macOS-only submodules with zero Windows evidence**: `transition_journal` (11 Mac functions), `breaker` (5), `native_responses_compat` (2), `upstream_url` (2) -- total 20 functions. Searched via 4 methods (marker string / panic-Location 2-hop / command-name 1-hop / type-name xref), zero hits. Recorded `Unknown`, not `confirmed-absent` (strip binary + possible conditional compilation cannot fully rule out a differently-stringed equivalent).
- **`get_codex_router_auth_readiness` command**: on Windows, this command's wrapper is ICF (Identical Code Folding)-merged with 26+ unrelated commands into a single shared dispatcher trampoline `open_path@0x140194810` (382 basic blocks, 158 callees). Static decompilation cannot isolate this command's individual logic on Windows. Ground truth for this command on BOTH platforms is the macOS standalone function (`get_codex_router_auth_readiness_0x10053fd20.c`, independently confirmed via Mac `func_query` cross-check). This is a genuine platform build/linker difference (Windows linker performed ICF that the macOS/LLVM toolchain apparently did not for this function), not a reverse-engineering gap that more Windows-side IDA time would close.
- **Decompile coverage asymmetry**: Windows 208 deduped addresses vs macOS 638 -- Windows lags materially. This reflects effort/session-time allocation across the two platforms in the producing sessions, not evidence that Windows has fewer actual relay functions (owner-map already enumerates 177+23=200 candidate rows on Windows, in the same order of magnitude as macOS's ~638 once accounting for macOS's typically-larger symbolized function count due to monomorphization).

## Interface / Error / Boundary

Not independently extracted for either platform (dim4 gap, shared with macOS package).

## Gate Leaf

consumerStartReady 22/23 (1 blocked: get_codex_router_auth_readiness has no independent Windows-native body). See gate-report.json.

## Plugin / Capability

Not in scope for this relay-only package.

## OTA / Package

Not evaluated this pass.

## Resource / Binary Surface

commands/relay: 23 `.c` files on Windows (vs 22 on macOS, since Windows keeps the ICF-folded `open_path` file plus 2 unnamed helper files that macOS does not need because its equivalent logic is not folded).

## Unknown

- 4 macOS-only submodules: Unknown on Windows (see above).
- 18 of the originally-19-zero-decompile submodules: aggregate re-closeout confirmed (208 total), individual per-module re-verification not done.
- 2 unnamed Windows commands' identity vs Mac counterparts: unconfirmed.
- Interface/DTO and test/acceptance mapping: not extracted for either platform.
